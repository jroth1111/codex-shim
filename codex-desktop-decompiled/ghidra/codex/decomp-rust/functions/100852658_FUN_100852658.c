
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100852658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long lVar6;
  undefined1 *unaff_x27;
  long unaff_x29;
  long in_stack_00000360;
  undefined8 in_stack_00000368;
  long *in_stack_00000378;
  
  *(char **)(unaff_x29 + -0xe0) = s__MCP_server_progress_notificatio_108ac4df2;
  *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x000003a0;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xe0;
  *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xf8;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xb0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x23;
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x80) = 3;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x80);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x80,unaff_x29 + -0xb0);
    }
  }
  FUN_100e80dd4(&stack0x000000f0);
  if (in_stack_00000378 != (long *)0x0) {
    lVar6 = *in_stack_00000378;
    *in_stack_00000378 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000378);
    }
  }
  if ((in_stack_00000360 != -0x8000000000000000) && (in_stack_00000360 != 0)) {
    _free(in_stack_00000368);
  }
  *(undefined1 *)(unaff_x19 + 0x378) = 1;
  FUN_100d82518();
  func_0x000100dccb50(*(undefined8 *)(unaff_x20 + 0x1b0));
  *unaff_x21 = 0x8000000000000001;
  *unaff_x27 = 1;
  FUN_100dac274();
  *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
  return;
}

