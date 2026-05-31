
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008978fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0xc0) = s_failed_to_send_to_client__108ac9f7c;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x98;
  *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xc0;
  *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xf0) = 1;
  *(long *)(unaff_x29 + -0xe8) = unaff_x29 + -0xd0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined8 *)(unaff_x29 + -0xd8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xf0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar3 = *(undefined8 *)(*unaff_x20 + 0x20);
    uVar4 = *(undefined8 *)(*unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x78) = 2;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x78);
    if (iVar5 != 0) {
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xf0;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000208);
    }
  }
  FUN_100e349f0(&stack0x000006b8);
  *(undefined1 *)(unaff_x19 + 0x319) = 0;
  *(undefined1 *)(unaff_x19 + 0x318) = 1;
  return 0;
}

