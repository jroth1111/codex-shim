
undefined8
__ZN9codex_mcp3mcp38mcp_permission_prompt_is_auto_approved17h98c5a13c287314a0E
          (char param_1,ulong *param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [32];
  
  if (param_4 != '\x02') {
    if (param_1 != '\x06') {
      return 0;
    }
    uVar2 = *param_2;
    if (uVar2 < 0x8000000000000001) {
      uVar2 = 0;
    }
    if ((uVar2 & 0x7fffffffffffffff) == 0) {
      func_0x0001049318e4(auStack_50,param_2);
      uVar1 = __ZN14codex_protocol11permissions23FileSystemSandboxPolicy26has_full_disk_write_access17h0b3f778dc2e71d7cE
                        (auStack_50);
      func_0x000103dc0b44(auStack_40);
      return uVar1;
    }
  }
  return 1;
}

