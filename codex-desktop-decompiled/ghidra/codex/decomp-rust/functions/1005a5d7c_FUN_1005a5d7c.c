
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1005a5d7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  long unaff_x23;
  long unaff_x29;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000400);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar12 = *unaff_x20;
    uVar6 = *(undefined8 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xd8) = 4;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar6;
    *(undefined8 *)(unaff_x29 + -200) = uVar9;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xd8);
    if (iVar11 != 0) {
      lVar7 = *(long *)(lVar12 + 0x60);
      uVar9 = *(undefined8 *)(lVar12 + 0x68);
      lVar8 = *(long *)(lVar12 + 0x50);
      uVar10 = *(undefined8 *)(lVar12 + 0x58);
      uVar6 = 1;
      if (lVar8 == 0) {
        uVar6 = 2;
      }
      uVar4 = *(undefined4 *)(lVar12 + 8);
      uVar5 = *(undefined4 *)(lVar12 + 0xc);
      *(undefined1 **)(unaff_x29 + -0x60) = &stack0x00000400;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar7 == 0) {
        uVar1 = 2;
      }
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0xd0);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xd8);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -200);
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar6;
      *(long *)(unaff_x29 + -0xb8) = lVar8;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar9;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
    }
  }
  if (in_stack_00000210 != 0) {
    _free(in_stack_00000218);
  }
  func_0x000100dfc74c(&stack0x00000228);
  *(undefined1 *)(unaff_x19 + 0x5e9) = 0;
  *(undefined1 *)(unaff_x19 + 0x5e8) = 1;
  return unaff_x23 == -0x7fffffffffffffff;
}

