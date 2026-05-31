
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a4e6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long unaff_x19;
  char *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00005030);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x22;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00005008);
    if (iVar5 != 0) {
      uVar3 = *(undefined4 *)(lVar6 + 8);
      uVar4 = *(undefined4 *)(lVar6 + 0xc);
      *(undefined1 **)(unaff_x28 + 0x5030) = &stack0x00005030;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(undefined4 *)(unaff_x28 + 0x48) = uVar3;
      *(undefined4 *)(unaff_x28 + 0x4c) = uVar4;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00005090);
    }
  }
  *(undefined8 *)(unaff_x28 + 0x5020) = in_stack_000005b8;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000005a0;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000598;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000005b0;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000005a8;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000560;
  *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000558;
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00000570;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000568;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000580;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000578;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000590;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000588;
  if (*unaff_x20 == '\0') {
    *unaff_x20 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
  }
  FUN_1060fa678();
  FUN_100e3079c(unaff_x19 + 0x1c8);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar8 = *(undefined8 *)(unaff_x29 + -0xc0);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x21[8] = *(undefined8 *)(unaff_x29 + -0xa8);
  unaff_x21[7] = uVar7;
  uVar7 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x21[10] = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x21[9] = uVar7;
  unaff_x21[0xc] = uVar11;
  unaff_x21[0xb] = uVar10;
  uVar7 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar11 = *(undefined8 *)(unaff_x29 + -200);
  uVar10 = *(undefined8 *)(unaff_x29 + -0xd0);
  unaff_x21[2] = *(undefined8 *)(unaff_x29 + -0xd8);
  unaff_x21[1] = uVar7;
  unaff_x21[4] = uVar11;
  unaff_x21[3] = uVar10;
  *unaff_x21 = in_stack_00000550;
  unaff_x21[0xd] = *(undefined8 *)(unaff_x28 + 0x5020);
  unaff_x21[6] = uVar9;
  unaff_x21[5] = uVar8;
  *(undefined1 *)(unaff_x19 + 0x380) = 1;
  return;
}

