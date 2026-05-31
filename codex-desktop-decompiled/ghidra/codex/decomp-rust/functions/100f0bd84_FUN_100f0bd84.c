
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0bd84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined2 unaff_w25;
  undefined4 unaff_w26;
  undefined2 unaff_w27;
  undefined4 unaff_w28;
  long unaff_x29;
  undefined1 auVar5 [16];
  long in_stack_00000030;
  undefined8 uStack00000000000000c0;
  undefined1 *puStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 in_stack_000001d0;
  long in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000003c0;
  undefined4 in_stack_00000428;
  undefined3 in_stack_0000042c;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined1 in_stack_00000440;
  
  puStack00000000000000c8 = &stack0x000003c8;
  uStack00000000000000c0 = 1;
  uStack00000000000000d0 = 1;
  uStack00000000000000d8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000c0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    unaff_x24 = *unaff_x21;
    uVar2 = *(undefined8 *)(unaff_x24 + 0x20);
    unaff_x22 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x22 = &UNK_10b3c24c8;
    }
    puVar1 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(unaff_x22 + 0x18))(puVar1,&stack0x000004a8);
    if (iVar4 != 0) {
      lVar3 = *(long *)(unaff_x24 + 0x60);
      in_stack_000001d8 = *(long *)(unaff_x24 + 0x50);
      in_stack_000001e0 = *(undefined8 *)(unaff_x24 + 0x58);
      in_stack_000001d0 = 1;
      if (in_stack_000001d8 == 0) {
        in_stack_000001d0 = 2;
      }
      *(undefined8 **)(unaff_x29 + -0x70) = &stack0x000000c0;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      in_stack_000001e8 = 1;
      if (lVar3 == 0) {
        in_stack_000001e8 = 2;
      }
      *(undefined8 *)(unaff_x23 + 0x38) = uVar2;
      *(undefined8 *)(unaff_x23 + 0x30) = 4;
      (**(code **)(unaff_x22 + 0x20))(puVar1,&stack0x000001d0);
    }
  }
  FUN_100de20f8(in_stack_000003c0);
  auVar5 = _free(in_stack_000003c0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x24;
  *(undefined4 *)(unaff_x20 + 3) = extraout_w8;
  *(undefined4 *)((long)unaff_x20 + 0x1c) = extraout_w9;
  *(undefined4 *)(unaff_x20 + 4) = unaff_w26;
  *(undefined4 *)((long)unaff_x20 + 0x24) = unaff_w28;
  *(undefined2 *)(unaff_x20 + 5) = unaff_w27;
  *(undefined2 *)((long)unaff_x20 + 0x2a) = unaff_w25;
  *(undefined1 (*) [16])((long)unaff_x20 + 0x2c) = auVar5;
  *(int *)((long)unaff_x20 + 0x3c) = (int)unaff_x23;
  unaff_x20[9] = in_stack_00000438;
  unaff_x20[8] = in_stack_00000430;
  *(undefined1 *)(unaff_x20 + 10) = in_stack_00000440;
  *(uint *)((long)unaff_x20 + 0x54) =
       CONCAT31(in_stack_0000042c,(char)((uint)in_stack_00000428 >> 0x18));
  *(undefined4 *)((long)unaff_x20 + 0x51) = in_stack_00000428;
  *(undefined1 *)(in_stack_00000030 + 0x30) = 1;
  return;
}

