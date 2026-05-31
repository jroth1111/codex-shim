// @category Reconstruction
// BFS from entry (and optional seeds): disassemble call targets in __text, create functions.
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import java.util.*;

public class ExpandFromEntry extends GhidraScript {
    private boolean inText(Address addr, MemoryBlock text) {
        if (addr == null || text == null) return false;
        return text.contains(addr);
    }

    private void ensureDisassembled(Address addr) throws Exception {
        if (getInstructionAt(addr) != null) return;
        DisassembleCommand cmd = new DisassembleCommand(addr, null, true);
        cmd.applyTo(currentProgram, monitor);
    }

    private void ensureFunction(Address addr) throws Exception {
        if (getFunctionContaining(addr) != null) return;
        ensureDisassembled(addr);
        CreateFunctionCmd cmd = new CreateFunctionCmd(addr);
        cmd.applyTo(currentProgram, monitor);
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        int maxFunctions = args.length > 0 ? Integer.parseInt(args[0]) : 500;
        MemoryBlock text = currentProgram.getMemory().getBlock("__text");
        if (text == null) throw new IllegalStateException("Missing __text block");

        ArrayDeque<Address> queue = new ArrayDeque<>();
        AddressSet seen = new AddressSet();

        // Seed from every function already mapped in __text (enables multi-pass expansion).
        FunctionIterator existing = currentProgram.getFunctionManager().getFunctions(true);
        while (existing.hasNext()) {
            Function f = existing.next();
            if (f.isExternal() || f.isThunk()) continue;
            Address ep = f.getEntryPoint();
            if (!inText(ep, text)) continue;
            if (seen.contains(ep)) continue;
            seen.add(ep);
            queue.add(ep);
        }

        Function entry = getFunctionAt(toAddr("1016fa824"));
        if (entry == null) entry = getFunctionContaining(toAddr("1016fa824"));
        if (entry != null) {
            Address ep = entry.getEntryPoint();
            if (!seen.contains(ep)) {
                seen.add(ep);
                queue.add(ep);
            }
        } else {
            Address ep = toAddr("1016fa824");
            ensureFunction(ep);
            if (!seen.contains(ep)) {
                seen.add(ep);
                queue.add(ep);
            }
        }

        for (int i = 1; i < args.length; i++) {
            Address seed = toAddr(args[i]);
            if (!inText(seed, text)) continue;
            if (seen.contains(seed)) continue;
            ensureFunction(seed);
            queue.add(seed);
            seen.add(seed);
        }

        ReferenceManager refMgr = currentProgram.getReferenceManager();
        int created = 0;

        while (!queue.isEmpty() && created < maxFunctions) {
            if (monitor.isCancelled()) break;
            Address cur = queue.removeFirst();
            ensureFunction(cur);
            Function fn = getFunctionContaining(cur);
            if (fn == null) continue;

            AddressSetView body = fn.getBody();
            if (body == null || body.isEmpty()) continue;

            for (Instruction ins : currentProgram.getListing().getInstructions(body, true)) {
                Reference[] refs = refMgr.getReferencesFrom(ins.getAddress());
                for (Reference ref : refs) {
                    if (!ref.getReferenceType().isCall()) continue;
                    Address target = ref.getToAddress();
                    if (!inText(target, text)) continue;
                    if (seen.contains(target)) continue;
                    seen.add(target);
                    ensureFunction(target);
                    queue.add(target);
                    created++;
                    if (created >= maxFunctions) break;
                }
                if (created >= maxFunctions) break;
            }
        }

        println("ExpandFromEntry: created/queued " + created + " call targets; total functions="
                + currentProgram.getFunctionManager().getFunctionCount());
    }
}
