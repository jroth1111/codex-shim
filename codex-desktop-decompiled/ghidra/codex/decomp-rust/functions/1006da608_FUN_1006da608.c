
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006da608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar6;
  long in_stack_00000020;
  undefined1 *puStack00000000000000e8;
  undefined *puStack00000000000000f0;
  undefined8 uStack0000000000000110;
  undefined1 *puStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  char *pcStack0000000000000130;
  undefined1 *puStack0000000000000138;
  
  puStack0000000000000138 = &stack0x00000158;
  pcStack0000000000000130 = s__Skipping_auth_reload_due_to_acc_108ac3685;
  puStack00000000000000e8 = (undefined1 *)&stack0x00000130;
  puStack00000000000000f0 = &UNK_10b208fd0;
  puStack0000000000000118 = (undefined1 *)&stack0x000000e8;
  uStack0000000000000110 = 1;
  uStack0000000000000120 = 1;
  uStack0000000000000128 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000110);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar6 = *(undefined8 *)(*unaff_x21 + 0x20);
    uVar4 = *(undefined8 *)(*unaff_x21 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x98) = 3;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x98);
    if (iVar5 != 0) {
      *(undefined8 **)(unaff_x29 + -0x80) = &stack0x00000110;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)(unaff_x24 + 0x208) = *(undefined8 *)(unaff_x29 + -0x90);
      *(undefined8 *)(unaff_x24 + 0x200) = uVar6;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000001f0);
    }
  }
  uVar3 = unaff_w22 ^ 1;
  if (unaff_x25 == 0) {
    uVar3 = 1;
  }
  if ((uVar3 & 1) == 0) {
    _free();
  }
  if (in_stack_00000020 != -0x7ffffffffffffffd) {
    FUN_100e0609c(&stack0x00000020);
  }
  *(undefined1 *)(unaff_x19 + 0xb40) = 1;
  return 2;
}

