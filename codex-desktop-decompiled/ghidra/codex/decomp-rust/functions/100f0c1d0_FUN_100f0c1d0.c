
void FUN_100f0c1d0(undefined8 param_1)

{
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  undefined2 unaff_w25;
  undefined4 unaff_w26;
  undefined2 unaff_w27;
  undefined4 unaff_w28;
  undefined1 auVar1 [16];
  long in_stack_00000030;
  undefined8 uStack00000000000001d0;
  undefined1 *puStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  undefined8 in_stack_000003c0;
  undefined4 in_stack_00000428;
  undefined3 in_stack_0000042c;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined1 in_stack_00000440;
  
  puStack00000000000001d8 = &stack0x000002e8;
  uStack00000000000001d0 = 1;
  uStack00000000000001e0 = 1;
  uStack00000000000001e8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100de20f8(in_stack_000003c0);
  auVar1 = _free(in_stack_000003c0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x24;
  *(undefined4 *)(unaff_x20 + 3) = extraout_w8;
  *(undefined4 *)((long)unaff_x20 + 0x1c) = extraout_w9;
  *(undefined4 *)(unaff_x20 + 4) = unaff_w26;
  *(undefined4 *)((long)unaff_x20 + 0x24) = unaff_w28;
  *(undefined2 *)(unaff_x20 + 5) = unaff_w27;
  *(undefined2 *)((long)unaff_x20 + 0x2a) = unaff_w25;
  *(undefined1 (*) [16])((long)unaff_x20 + 0x2c) = auVar1;
  *(undefined4 *)((long)unaff_x20 + 0x3c) = unaff_w23;
  unaff_x20[9] = in_stack_00000438;
  unaff_x20[8] = in_stack_00000430;
  *(undefined1 *)(unaff_x20 + 10) = in_stack_00000440;
  *(uint *)((long)unaff_x20 + 0x54) =
       CONCAT31(in_stack_0000042c,(char)((uint)in_stack_00000428 >> 0x18));
  *(undefined4 *)((long)unaff_x20 + 0x51) = in_stack_00000428;
  *(undefined1 *)(in_stack_00000030 + 0x30) = 1;
  return;
}

