// @category Reconstruction
// Create functions at seed addresses and BFS-expand call graph within __text.
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class ExpandFromSeedList extends GhidraScript {
    private boolean inText(Address addr, MemoryBlock text) {
        return addr != null && text != null && text.contains(addr);
    }

    private void ensureDisassembled(Address addr) throws Exception {
        if (getInstructionAt(addr) != null) return;
        new DisassembleCommand(addr, null, true).applyTo(currentProgram, monitor);
    }

    private void ensureFunction(Address addr) throws Exception {
        if (getFunctionContaining(addr) != null) return;
        ensureDisassembled(addr);
        new CreateFunctionCmd(addr).applyTo(currentProgram, monitor);
    }

    private List<String> loadLines(File path) throws Exception {
        List<String> out = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream(path), StandardCharsets.UTF_8))) {
            String line;
            while ((line = br.readLine()) != null) {
                line = line.trim();
                if (!line.isEmpty() && !line.startsWith("#")) out.add(line);
            }
        }
        return out;
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("Usage: ExpandFromSeedList.java <seeds-file> [max-expand]");
        File seedFile = new File(args[0]);
        int maxExpand = args.length > 1 ? Integer.parseInt(args[1]) : 1000;
        MemoryBlock text = currentProgram.getMemory().getBlock("__text");
        if (text == null) throw new IllegalStateException("Missing __text block");

        ArrayDeque<Address> queue = new ArrayDeque<>();
        AddressSet seen = new AddressSet();
        int seeded = 0;

        for (String token : loadLines(seedFile)) {
            Address seed = toAddr(token);
            if (!inText(seed, text)) continue;
            ensureFunction(seed);
            Function fn = getFunctionContaining(seed);
            Address ep = fn != null ? fn.getEntryPoint() : seed;
            if (seen.contains(ep)) continue;
            seen.add(ep);
            queue.add(ep);
            seeded++;
        }

        ReferenceManager refMgr = currentProgram.getReferenceManager();
        int created = 0;
        while (!queue.isEmpty() && created < maxExpand) {
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
                    if (created >= maxExpand) break;
                }
                if (created >= maxExpand) break;
            }
        }

        println("ExpandFromSeedList: seeded " + seeded + " functions; expanded " + created
                + " call targets; total functions=" + currentProgram.getFunctionManager().getFunctionCount());
    }
}
