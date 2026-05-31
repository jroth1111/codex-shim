
undefined8 FUN_1005e6878(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *unaff_x26;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  
  FUN_1005f770c(&stack0x00007b80);
  func_0x000100025ae8(&stack0x00002da0,in_stack_000000a0 + 0x4b8);
  puVar4 = (undefined8 *)_malloc(0x25);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x25);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ea898);
    (*pcVar2)();
  }
  puVar4[1] = 0x6f6474756873206f;
  *puVar4 = 0x742064656c696146;
  puVar4[3] = 0x7369737265702064;
  puVar4[2] = 0x6165726874206e77;
  *(undefined8 *)((long)puVar4 + 0x1d) = 0x65636e6574736973;
  *(undefined1 *)(in_stack_000000a0 + 0x6e3) = 1;
  lVar7 = **(long **)(in_stack_000000a0 + 0x4b0);
  *(undefined1 *)(in_stack_000000a0 + 0x6e3) = 0;
  _memcpy(in_stack_000000a0 + 0x708,&stack0x00007b80,0x1f0);
  *(long *)(in_stack_000000a0 + 0x8f8) = lVar7 + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0xb10) = 0;
  iVar3 = FUN_1005a4060(in_stack_000000a0 + 0x708,in_stack_00000098);
  if (iVar3 == 0) {
    FUN_100d28c3c(in_stack_000000a0 + 0x708);
    *(undefined1 *)(in_stack_000000a0 + 0x6e3) = 0;
    bVar1 = *(byte *)(in_stack_000000a0 + 0x6e8);
    if (bVar1 < 2) {
      if (bVar1 != 0) {
LAB_1005e8860:
        if (*(long *)(in_stack_000000a0 + 0x6f0) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x6f8));
        }
      }
    }
    else if ((bVar1 == 2) || (bVar1 != 3)) goto LAB_1005e8860;
    *(undefined2 *)(in_stack_000000a0 + 0x6e1) = 0x100;
    *(undefined8 *)(in_stack_000000a0 + 0x6f8) = *(undefined8 *)(in_stack_000000a0 + 0x4c8);
    *(undefined8 *)(in_stack_000000a0 + 0x6f0) = *(undefined8 *)(in_stack_000000a0 + 0x4c0);
    *(undefined8 *)(in_stack_000000a0 + 0x6e8) = *(undefined8 *)(in_stack_000000a0 + 0x4b8);
    *(undefined4 *)(in_stack_000000a0 + 0x700) = 0x34;
    __ZN19codex_rollout_trace6thread18ThreadTraceContext21record_protocol_event17h4925a6c0cc136f71E
              (**(long **)(in_stack_000000a0 + 0x4b0) + 0x230,in_stack_000000a0 + 0x700);
    lVar7 = **(long **)(in_stack_000000a0 + 0x4b0);
    *(undefined1 *)(in_stack_000000a0 + 0x6e2) = 0;
    _memcpy(in_stack_000000a0 + 0x8d8,(undefined8 *)(in_stack_000000a0 + 0x6e8),0x1f0);
    *(long *)(in_stack_000000a0 + 0xac8) = lVar7 + 0x10;
    *(undefined1 *)(in_stack_000000a0 + 0xec0) = 0;
    uVar5 = FUN_1005a5bb0((long *)(in_stack_000000a0 + 0x8d8),in_stack_00000098);
    if ((uVar5 & 1) == 0) {
      if (*(char *)(in_stack_000000a0 + 0xec0) == '\x03') {
        FUN_100e44a28(in_stack_000000a0 + 0xcc0);
        *(undefined1 *)(in_stack_000000a0 + 0xec1) = 0;
      }
      else if (*(char *)(in_stack_000000a0 + 0xec0) == '\0') {
        if (*(long *)(in_stack_000000a0 + 0x8d8) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x8e0));
        }
        func_0x000100dfc74c(in_stack_000000a0 + 0x8f0);
      }
      __ZN19codex_rollout_trace6thread18ThreadTraceContext12record_ended17h70cf7158498b975aE
                (**(long **)(in_stack_000000a0 + 0x4b0) + 0x230,1);
      *(undefined1 *)(in_stack_000000a0 + 0x6e2) = 0;
      FUN_100e47a48(in_stack_000000a0 + 0x6a0);
      if (*(long *)(in_stack_000000a0 + 0x530) != 3) {
        FUN_100e13e9c(in_stack_000000a0 + 0x530);
      }
      *(undefined2 *)(in_stack_000000a0 + 0x6e0) = 1;
      FUN_100e66428();
      uVar8 = 1;
      uVar5 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
      if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
        uVar5 = 7;
      }
      if (0x18 < uVar5 || (1L << (uVar5 & 0x3f) & 0x161ff1cU) == 0) {
        FUN_100def028(in_stack_000000a0 + 0x200);
      }
      if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
        FUN_100def028(in_stack_000000a0);
      }
      uVar6 = 1;
      goto LAB_1005eb358;
    }
    uVar6 = 8;
  }
  else {
    uVar6 = 7;
  }
  *unaff_x26 = uVar6;
  uVar8 = 2;
  uVar6 = 0x1a;
LAB_1005eb358:
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar6;
  return uVar8;
}

