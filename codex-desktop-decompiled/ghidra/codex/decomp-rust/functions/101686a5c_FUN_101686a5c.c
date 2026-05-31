
void FUN_101686a5c(void)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 *in_stack_00000050;
  long in_stack_00000078;
  
  FUN_100f3f484(&stack0x00006610,s__Failed_to_set_permission_profil_108ada7d4,&stack0x000068c0);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  FUN_100e11d38(&stack0x00003e30);
  *(undefined1 *)(in_stack_00000078 + 0xae6) = 0;
  uVar2 = *(ulong *)(in_stack_00000078 + 0x3040);
  bVar1 = uVar2 != 0x8000000000000000;
  if (uVar2 < 0x8000000000000001) {
    uVar2 = 0;
  }
  if ((bVar1) && ((uVar2 & 0x7fffffffffffffff) == 0)) {
    FUN_100e79780(in_stack_00000078 + unaff_x20);
  }
  if ((*(byte *)(in_stack_00000078 + 0xadd) & 1) != 0) {
    FUN_100de93d0(in_stack_00000078 + 0xaf8);
  }
  *(undefined1 *)(in_stack_00000078 + 0xadd) = 0;
  if ((*(byte *)(in_stack_00000078 + 0xade) & 1) != 0) {
    FUN_100caa578();
  }
  *(undefined1 *)(in_stack_00000078 + 0xade) = 0;
  *in_stack_00000050 = 0x8000000000000001;
  in_stack_00000050[1] = unaff_x22;
  in_stack_00000050[2] = unaff_x20;
  *(undefined1 *)(in_stack_00000078 + 0xac8) = 1;
  return;
}

