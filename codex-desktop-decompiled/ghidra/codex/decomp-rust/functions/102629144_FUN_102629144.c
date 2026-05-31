
void FUN_102629144(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  if (*param_2 == -0x7ffffffffffffffc) {
    lVar1 = param_2[1];
    puVar2 = (ulong *)param_2[2];
    uVar11 = param_2[3];
    puVar15 = puVar2 + uVar11 * 9;
    uVar9 = uVar11;
    if (0xaaa9 < uVar11) {
      uVar9 = 0xaaaa;
    }
    if (uVar11 != 0) {
      uStack_e0 = _malloc(uVar9 * 0x18);
      if (uStack_e0 == 0) {
        func_0x0001087c9084(8,uVar9 * 0x18);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102629418);
        (*pcVar7)();
      }
      uStack_d8 = 0;
      puVar3 = puVar2;
      uStack_e8 = uVar9;
LAB_10262920c:
      puVar8 = puVar3 + 9;
      puVar12 = puVar8;
      if (*puVar3 != 0x8000000000000005) {
        uStack_c0 = puVar3[2];
        uStack_c8 = puVar3[1];
        uStack_b0 = puVar3[4];
        uStack_b8 = puVar3[3];
        uStack_a0 = puVar3[6];
        uStack_a8 = puVar3[5];
        uStack_90 = puVar3[8];
        uStack_98 = puVar3[7];
        uStack_d0 = *puVar3;
        func_0x00010262e154(&lStack_80,&uStack_d0);
        lVar6 = lStack_70;
        uVar5 = uStack_78;
        lVar13 = lStack_80;
        uVar4 = uStack_d8;
        uVar9 = uStack_e0;
        if (lStack_80 != -0x8000000000000000) goto code_r0x000102629258;
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_78;
        if (uStack_d8 != 0) {
          puVar14 = (undefined8 *)(uStack_e0 + 8);
          uVar11 = uStack_d8;
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (uStack_e8 != 0) {
          _free(uVar9);
        }
        goto LAB_10262934c;
      }
      goto LAB_102629308;
    }
    uStack_e8 = 0;
    uStack_e0 = 8;
    uStack_d8 = 0;
    puVar12 = puVar2;
LAB_102629308:
    param_1[1] = uStack_e0;
    *param_1 = uStack_e8;
    param_1[2] = uStack_d8;
    puVar8 = puVar12;
    if (*param_1 != 0x8000000000000000) {
      uStack_c8 = param_1[1];
      uStack_d0 = *param_1;
      uStack_c0 = param_1[2];
      puVar8 = puVar15;
      if (puVar15 != puVar12) {
        uVar9 = FUN_1088de814(uVar11,&UNK_10b27b5a0,&UNK_10b27a2b8);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar9;
        FUN_1025fc728(&uStack_d0);
        puVar8 = puVar12;
      }
    }
LAB_10262934c:
    lVar13 = ((ulong)((long)puVar15 - (long)puVar8) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_1025f6ad8(puVar8);
      puVar8 = puVar8 + 9;
    }
    if (lVar1 != 0) {
      _free(puVar2);
    }
  }
  else {
    uVar9 = FUN_1088e6674(param_2,&uStack_d0,&UNK_10b27a148);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    FUN_1025f6ad8(param_2);
  }
  return;
code_r0x000102629258:
  if (uStack_d8 == uStack_e8) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&uStack_e8);
  }
  plVar10 = (long *)(uStack_e0 + uVar4 * 0x18);
  *plVar10 = lVar13;
  plVar10[1] = uVar5;
  plVar10[2] = lVar6;
  uStack_d8 = uVar4 + 1;
  puVar12 = puVar15;
  puVar3 = puVar8;
  if (puVar8 == puVar15) goto LAB_102629308;
  goto LAB_10262920c;
}

