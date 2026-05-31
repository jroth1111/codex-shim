// @category Reconstruction
// Decompile explicit addresses (hex, one per line file) even if auto-analysis missed them.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.*;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

public class DecompileByAddress extends GhidraScript {
    private final Gson gson = new GsonBuilder().setPrettyPrinting().disableHtmlEscaping().create();

    private String s(Object v) { return v == null ? "" : v.toString(); }

    private String shortName(String stem, int maxLen) throws Exception {
        stem = stem.replaceAll("[^A-Za-z0-9._-]+", "_").replaceAll("^[._-]+|[._-]+$", "");
        if (stem.isEmpty()) stem = "function";
        if (stem.length() <= maxLen) return stem;
        MessageDigest md = MessageDigest.getInstance("SHA-1");
        byte[] dig = md.digest(stem.getBytes(StandardCharsets.UTF_8));
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 6; i++) sb.append(String.format("%02x", dig[i]));
        return stem.substring(0, Math.max(8, maxLen - 13)) + "_" + sb;
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

    private Function ensureAt(Address addr) throws Exception {
        Function fn = getFunctionContaining(addr);
        if (fn != null) return fn;
        if (getInstructionAt(addr) == null) {
            new DisassembleCommand(addr, null, true).applyTo(currentProgram, monitor);
        }
        new CreateFunctionCmd(addr).applyTo(currentProgram, monitor);
        return getFunctionContaining(addr);
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) throw new IllegalArgumentException("Usage: DecompileByAddress.java <out-dir> <addrs-file> [timeout-secs]");
        File outDir = new File(args[0]); outDir.mkdirs();
        File addrFile = new File(args[1]);
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 120;
        File funcDir = new File(outDir, "functions"); funcDir.mkdirs();

        DecompInterface ifc = new DecompInterface();
        ifc.setOptions(new DecompileOptions());
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(false);
        if (!ifc.openProgram(currentProgram)) throw new IllegalStateException("decompiler open failed");

        List<Map<String, Object>> records = new ArrayList<>();
        for (String token : loadLines(addrFile)) {
            Address addr = toAddr(token);
            Map<String, Object> rec = new LinkedHashMap<>();
            rec.put("entry", s(addr));
            rec.put("status", "missing");
            try {
                Function fn = ensureAt(addr);
                if (fn == null) {
                    rec.put("error", "could not create function");
                    records.add(rec);
                    continue;
                }
                String name = s(fn.getName());
                rec.put("name", name);
                String rel = "functions/" + shortName(s(addr) + "_" + name, 96) + ".c";
                rec.put("relative_path", rel);
                DecompileResults res = ifc.decompileFunction(fn, timeout, monitor);
                if (res != null && res.decompileCompleted()) {
                    DecompiledFunction d = res.getDecompiledFunction();
                    String code = d != null ? s(d.getC()) : "";
                    try (Writer w = new OutputStreamWriter(new FileOutputStream(new File(outDir, rel)), StandardCharsets.UTF_8)) {
                        w.write(code);
                    }
                    rec.put("status", "ok");
                    rec.put("signature", d != null ? s(d.getSignature()) : "");
                    rec.put("line_count", code.split("\n", -1).length);
                    rec.put("code_size", code.length());
                } else {
                    rec.put("status", "error");
                    rec.put("error", res != null ? s(res.getErrorMessage()) : "null result");
                }
            } catch (Exception ex) {
                rec.put("status", "error");
                rec.put("error", ex.toString());
            }
            records.add(rec);
        }

        Map<String, Object> index = new LinkedHashMap<>();
        index.put("target_count", records.size());
        index.put("attempted_count", records.size());
        index.put("functions", records);
        try (Writer w = new OutputStreamWriter(new FileOutputStream(new File(outDir, "index.json")), StandardCharsets.UTF_8)) {
            gson.toJson(index, w);
        }
        println("DecompileByAddress wrote " + records.size() + " records to " + outDir);
    }
}
