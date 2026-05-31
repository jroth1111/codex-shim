
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101697cf8(undefined8 param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  ulong in_xzr;
  ulong in_stack_000001f8;
  ulong in_stack_00000200;
  long in_stack_00000208;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000003f0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar15 = *unaff_x20;
    uVar7 = *(undefined8 *)(lVar15 + 0x20);
    uVar9 = *(undefined8 *)(lVar15 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xe8) = 2;
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar7;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar9;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xe8);
    if (iVar12 != 0) {
      lVar14 = *(long *)(lVar15 + 0x60);
      uVar9 = *(undefined8 *)(lVar15 + 0x68);
      lVar8 = *(long *)(lVar15 + 0x50);
      uVar10 = *(undefined8 *)(lVar15 + 0x58);
      uVar7 = 1;
      if (lVar8 == 0) {
        uVar7 = 2;
      }
      uVar5 = *(undefined4 *)(lVar15 + 8);
      uVar6 = *(undefined4 *)(lVar15 + 0xc);
      *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000003f0;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      uVar2 = 1;
      if (lVar14 == 0) {
        uVar2 = 2;
      }
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0xe0);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xd8);
      *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x60;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar7;
      *(long *)(unaff_x29 + -200) = lVar8;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
      *(long *)(unaff_x29 + -0xb0) = lVar14;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
      *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
      *(undefined4 *)(unaff_x29 + -0x84) = uVar6;
      (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xd0);
    }
  }
  lVar15 = 0;
  if (0x800000000000003f < in_stack_000001f8) {
    lVar15 = in_stack_000001f8 + 0x7fffffffffffffc0;
  }
  if (lVar15 == 0) {
    FUN_100e5286c(&stack0x000001f8);
  }
  else if (lVar15 == 1) {
    func_0x000100e45ab8(unaff_x25 + 8);
  }
  else {
    if (lVar15 == 2) {
      if ((in_stack_00000200 & 0x7fffffffffffffff) == 0) goto LAB_101697bc8;
      puVar13 = (undefined8 *)&stack0x00000208;
    }
    else {
      if (in_stack_00000208 == 0) goto LAB_101697bc8;
      puVar13 = (undefined8 *)&stack0x00000210;
    }
    _free(*puVar13);
  }
LAB_101697bc8:
  lVar14 = *(long *)(unaff_x19 + 0x1f8);
  LOAcquire();
  lVar15 = *(long *)(lVar14 + 0x1f0);
  *(long *)(lVar14 + 0x1f0) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    LOAcquire();
    lVar15 = *(long *)(lVar14 + 0x88);
    *(long *)(lVar14 + 0x88) = lVar15 + 1;
    lVar15 = FUN_100fca4a4(lVar14 + 0x80,lVar15);
    *(ulong *)(lVar15 + 0x3f10) = *(ulong *)(lVar15 + 0x3f10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar14 + 0x110);
    LOAcquire();
    uVar11 = *puVar1;
    *puVar1 = uVar11 | 2;
    LORelease();
    if (uVar11 == 0) {
      lVar15 = *(long *)(lVar14 + 0x100);
      *(undefined8 *)(lVar14 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 8))(*(undefined8 *)(lVar14 + 0x108));
      }
    }
  }
  lVar15 = **(long **)(unaff_x19 + 0x1f8);
  **(long **)(unaff_x19 + 0x1f8) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h20edc871926e8591E(unaff_x19 + 0x1f8);
  }
  *(undefined1 *)(unaff_x19 + 0x690) = 1;
  return unaff_x23 == unaff_x24;
}

