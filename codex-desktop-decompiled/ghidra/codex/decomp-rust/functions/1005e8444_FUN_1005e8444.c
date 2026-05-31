
undefined8 FUN_1005e8444(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined8 uVar6;
  undefined1 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_0000c9f8;
  undefined8 in_stack_0000ca00;
  
  *unaff_x20 = (long)&stack0x000006b0;
  unaff_x20[1] = (long)&UNK_10b208fd0;
  unaff_x28[1] = in_stack_0000ca00;
  *unaff_x28 = in_stack_0000c9f8;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(in_stack_000000a0 + 0x4ca) = 0;
  iVar2 = __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                    ();
  if (iVar2 == 0) {
    *(undefined8 *)((long)unaff_x28 + 0xc) = 1;
    *(undefined8 *)((long)unaff_x28 + 4) = 0;
    *(undefined8 *)((long)unaff_x28 + 0x14) = 0;
    *(undefined1 *)(in_stack_000000a0 + 0x4cb) = 1;
    lVar4 = **(long **)(in_stack_000000a0 + 0x4b0);
    *(undefined1 *)(in_stack_000000a0 + 0x4cb) = 0;
    _memcpy(in_stack_000000a0 + 0x4d0,&stack0x00007b80,0x1f0);
    *(long *)(in_stack_000000a0 + 0x6c0) = lVar4 + 0x10;
    *(undefined1 *)(in_stack_000000a0 + 0x8d8) = 0;
    iVar2 = FUN_1005a4060(in_stack_000000a0 + 0x4d0,in_stack_00000098);
    if (iVar2 == 0) {
      FUN_100d28c3c(in_stack_000000a0 + 0x4d0);
      *(undefined1 *)(in_stack_000000a0 + 0x4cb) = 0;
      (**(code **)**(undefined8 **)(in_stack_000000a0 + 0x4c0))();
      if (((*(byte *)(in_stack_000000a0 + 0x4ca) & 1) != 0) &&
         (*(long *)(in_stack_000000a0 + 0x4d0) != 0)) {
        _free(*(undefined8 *)(in_stack_000000a0 + 0x4d8));
      }
      *(undefined2 *)(in_stack_000000a0 + 0x4c9) = 1;
      FUN_100ca64f0();
      uVar6 = 0;
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
      uVar3 = 1;
    }
    else {
      *unaff_x26 = 4;
      uVar6 = 2;
      uVar3 = 0x17;
    }
    *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar3;
    return uVar6;
  }
  FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000caff,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ea898);
  (*pcVar1)();
}

