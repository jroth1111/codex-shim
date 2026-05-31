
void FUN_1013a07d4(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
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
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_69 [9];
  
  if (*param_2 == -0x7ffffffffffffffc) {
    lVar2 = param_2[1];
    puVar3 = (ulong *)param_2[2];
    uVar5 = param_2[3];
    puVar10 = puVar3 + uVar5 * 9;
    uVar6 = uVar5;
    if (0xaaa9 < uVar5) {
      uVar6 = 0xaaaa;
    }
    if (uVar5 == 0) {
      uStack_d8 = 0;
      uStack_d0 = 8;
      uStack_c8 = 0;
      puVar9 = puVar3;
    }
    else {
      uStack_d0 = _malloc(uVar6 * 0x18);
      if (uStack_d0 == 0) {
        func_0x0001087c9084(8,uVar6 * 0x18);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013a0af4);
        (*pcVar4)();
      }
      lVar12 = 0;
      uStack_c8 = 0;
      puVar1 = puVar3;
      uStack_d8 = uVar6;
      do {
        uVar6 = uStack_c8;
        puVar11 = puVar1 + 9;
        uVar7 = *puVar1;
        puVar9 = puVar11;
        if (uVar7 == 0x8000000000000005) break;
        uVar15 = puVar1[2];
        uVar13 = puVar1[1];
        uStack_a0 = puVar1[4];
        uVar14 = puVar1[3];
        uStack_90 = puVar1[6];
        uStack_98 = puVar1[5];
        uStack_80 = puVar1[8];
        uStack_88 = puVar1[7];
        uStack_c0 = uVar7;
        uStack_b8 = uVar13;
        uStack_b0 = uVar15;
        uStack_a8 = uVar14;
        if (uVar7 != 0x8000000000000003) {
          uVar6 = FUN_108832ea0(&uStack_c0,auStack_69,&UNK_10b20a620);
          FUN_100de6690(&uStack_c0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar6;
          uVar5 = uStack_d0;
          uVar6 = uStack_c8;
joined_r0x0001013a0a38:
          uStack_d0 = uVar5;
          uStack_c8 = uVar6;
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)(uVar5 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (uStack_d8 != 0) {
            _free(uVar5);
          }
          goto LAB_1013a0a50;
        }
        if ((uVar13 == 0x8000000000000000) || (uVar13 == 0x8000000000000001)) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar15;
          uVar5 = uStack_d0;
          goto joined_r0x0001013a0a38;
        }
        if (uStack_c8 == uStack_d8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17ha705f7b4376eaadfE(&uStack_d8);
        }
        puVar1 = (ulong *)(uStack_d0 + lVar12);
        *puVar1 = uVar13;
        puVar1[1] = uVar15;
        puVar1[2] = uVar14;
        uStack_c8 = uVar6 + 1;
        lVar12 = lVar12 + 0x18;
        puVar9 = puVar10;
        puVar1 = puVar11;
      } while (puVar11 != puVar10);
    }
    param_1[1] = uStack_d0;
    *param_1 = uStack_d8;
    param_1[2] = uStack_c8;
    puVar11 = puVar9;
    if (*param_1 != 0x8000000000000000) {
      uStack_b8 = param_1[1];
      uStack_c0 = *param_1;
      uStack_b0 = param_1[2];
      puVar11 = puVar10;
      if (puVar10 != puVar9) {
        uVar6 = FUN_1087e422c(uVar5,&UNK_10b21cb80,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar6;
        FUN_100e11a20(&uStack_c0);
        puVar11 = puVar9;
      }
    }
LAB_1013a0a50:
    lVar12 = ((ulong)((long)puVar10 - (long)puVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100de6690(puVar11);
      puVar11 = puVar11 + 9;
    }
    if (lVar2 != 0) {
      _free(puVar3);
    }
  }
  else {
    uVar6 = FUN_108832ea0(param_2,auStack_69,&UNK_10b20a1c0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar6;
    FUN_100de6690(param_2);
  }
  return;
}

