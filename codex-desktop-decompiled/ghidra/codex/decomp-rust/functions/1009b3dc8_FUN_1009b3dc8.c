
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b3dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long unaff_x29;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 uStack00000000000001b0;
  long lStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  
  *(char **)(unaff_x29 + -0xa0) = s_request_failed__108ac9ce2;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
  lStack00000000000001b8 = unaff_x29 + -0xc0;
  uStack00000000000001b0 = 1;
  uStack00000000000001c0 = 1;
  uStack00000000000001c8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000001b0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar4 = *unaff_x20;
    in_stack_00000138 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000140 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000130 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000130);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000130,&stack0x000001b0);
    }
  }
  lVar4 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0x110) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  *(undefined1 *)(unaff_x19 + 0xf1) = 0;
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x100));
  }
  *(undefined1 *)(unaff_x19 + 0xf2) = 0;
  *(undefined1 *)(unaff_x19 + 0xf0) = 1;
  FUN_100cbd6ec();
  *(undefined1 *)(unaff_x19 + 0xdd8) = 1;
  return 0;
}

