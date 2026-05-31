
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10098a5ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long *unaff_x21;
  long lVar6;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0x90) = s__failed_to_submit_ResolveElicita_108acc4fa;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar6 = *unaff_x21;
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x70) = 1;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x70);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x70,unaff_x29 + -0xc0);
    }
  }
  FUN_100df5738(&stack0x00000180);
  *(undefined2 *)(unaff_x19 + 0x246) = 0;
  *(undefined2 *)(unaff_x19 + 0x241) = 0;
  lVar6 = **(long **)(unaff_x19 + 0x188);
  **(long **)(unaff_x19 + 0x188) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x188);
  }
  lVar6 = **(long **)(unaff_x19 + 0x180);
  **(long **)(unaff_x19 + 0x180) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x180);
  }
  *(undefined2 *)(unaff_x19 + 0x243) = 0;
  *(undefined1 *)(unaff_x19 + 0x245) = 0;
  *(undefined1 *)(unaff_x19 + 0x240) = 1;
  FUN_100cf9b58();
  *(undefined1 *)(unaff_x19 + 0xfc0) = 1;
  return 0;
}

