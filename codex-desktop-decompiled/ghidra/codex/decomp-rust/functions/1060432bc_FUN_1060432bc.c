
void FUN_1060432bc(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong auStack_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar1 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar5 = (ulong)((uVar1 & 1) + (uVar1 >> 1));
    uVar5 = (1L << (uVar5 & 0x3f)) + (param_2 >> (uVar5 & 0x3f)) >> 1;
  }
  uVar15 = 0;
  uVar13 = 0;
  uVar21 = 1;
  uVar9 = param_2;
  if (param_2 == 0) goto LAB_1060433f0;
LAB_106043394:
  lVar4 = param_1 + uVar15 * 0x28;
  if (uVar9 < uVar5) {
LAB_1060433a8:
    if ((param_5 & 1) == 0) {
      if (uVar5 <= uVar9) {
        uVar9 = uVar5;
      }
      uVar9 = uVar9 << 1;
    }
    else {
      if (0x1f < uVar9) {
        uVar9 = 0x20;
      }
      func_0x000106045940(lVar4,uVar9,param_3,param_4,0,0,param_6);
      uVar9 = uVar9 << 1 | 1;
    }
    goto LAB_10604351c;
  }
  uVar22 = uVar9;
  if (1 < uVar9) {
    uVar8 = *(ulong *)(lVar4 + 0x38);
    if (uVar8 < *(ulong *)(lVar4 + 0x10)) {
      if (uVar9 == 2) {
        uVar9 = 1;
        uVar22 = 2;
LAB_10604342c:
        puVar16 = (undefined8 *)(param_1 + 0x20 + uVar15 * 0x28);
        puVar10 = (undefined8 *)(param_1 + -8 + uVar15 * 0x28 + uVar22 * 0x28);
        do {
          uVar24 = puVar16[-3];
          uVar23 = puVar16[-4];
          uVar26 = puVar16[-1];
          uVar25 = puVar16[-2];
          uVar12 = puVar10[-4];
          uVar28 = puVar10[-1];
          uVar27 = puVar10[-2];
          puVar16[-3] = puVar10[-3];
          puVar16[-4] = uVar12;
          puVar16[-1] = uVar28;
          puVar16[-2] = uVar27;
          uVar12 = *puVar16;
          *puVar16 = *puVar10;
          puVar10[-3] = uVar24;
          puVar10[-4] = uVar23;
          puVar10[-1] = uVar26;
          puVar10[-2] = uVar25;
          *puVar10 = uVar12;
          uVar9 = uVar9 - 1;
          puVar16 = puVar16 + 5;
          puVar10 = puVar10 + -5;
        } while (uVar9 != 0);
      }
      else {
        uVar17 = 2;
        puVar11 = (ulong *)(param_1 + 0x60 + uVar15 * 0x28);
        uVar19 = uVar8;
        do {
          uVar20 = *puVar11;
          uVar22 = uVar17;
          if (uVar19 <= uVar20) break;
          uVar17 = uVar17 + 1;
          uVar22 = uVar9;
          puVar11 = puVar11 + 5;
          uVar19 = uVar20;
        } while (uVar9 != uVar17);
LAB_1060434ec:
        if (uVar22 < uVar5) goto LAB_1060433a8;
        if (uVar8 < *(ulong *)(lVar4 + 0x10)) {
          if (1 < uVar22) {
            uVar9 = uVar22 >> 1;
            goto LAB_10604342c;
          }
          uVar22 = 1;
        }
      }
    }
    else if (uVar9 != 2) {
      uVar17 = 2;
      puVar11 = (ulong *)(param_1 + 0x60 + uVar15 * 0x28);
      uVar19 = uVar8;
      do {
        uVar20 = *puVar11;
        uVar22 = uVar17;
        if (uVar20 < uVar19) break;
        uVar17 = uVar17 + 1;
        uVar22 = uVar9;
        puVar11 = puVar11 + 5;
        uVar19 = uVar20;
      } while (uVar9 != uVar17);
      goto LAB_1060434ec;
    }
  }
  uVar9 = uVar22 << 1 | 1;
LAB_10604351c:
  lVar4 = LZCOUNT((uVar15 * 2 + (uVar9 >> 1)) * uVar2 ^ (uVar15 * 2 - (uVar21 >> 1)) * uVar2);
  uVar22 = uVar21;
  do {
    uVar21 = uVar9;
    if (1 < uVar13) {
      do {
        while( true ) {
          uVar9 = uVar13 - 1;
          if ((uint)abStack_ab[uVar13] < (uint)lVar4) goto LAB_106043774;
          uVar17 = auStack_2c0[uVar9];
          uVar19 = uVar17 >> 1;
          uVar20 = uVar22 >> 1;
          uVar8 = uVar19 + uVar20;
          uVar13 = uVar9;
          if (uVar8 <= param_4 && (((uint)uVar17 | (uint)uVar22) & 1) == 0) break;
          puVar16 = (undefined8 *)(param_1 + (uVar15 - uVar8) * 0x28);
          if ((uVar17 & 1) == 0) {
            func_0x000106045940(puVar16,uVar19,param_3,param_4,(int)LZCOUNT(uVar19 | 1) << 1 ^ 0x7e,
                                0,param_6);
          }
          if ((uVar22 & 1) == 0) {
            func_0x000106045940(puVar16 + uVar19 * 5,uVar20,param_3,param_4,
                                (int)LZCOUNT(uVar20 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((1 < uVar17) && (1 < uVar22)) {
            uVar22 = uVar20;
            if (uVar19 <= uVar20) {
              uVar22 = uVar19;
            }
            if (uVar22 <= param_4) {
              puVar18 = puVar16 + uVar19 * 5;
              puVar10 = puVar18;
              if (uVar19 <= uVar20) {
                puVar10 = puVar16;
              }
              _memcpy(param_3,puVar10,uVar22 * 0x28);
              puVar6 = param_3 + uVar22 * 5;
              puVar7 = (undefined8 *)(param_1 + -0x28 + uVar15 * 0x28);
              puVar14 = param_3;
              puVar10 = puVar16;
              if (uVar20 < uVar19) {
                do {
                  bVar3 = (ulong)puVar18[-3] <= (ulong)puVar6[-3];
                  puVar10 = puVar18 + -5;
                  if (bVar3) {
                    puVar10 = puVar6 + -5;
                  }
                  uVar12 = puVar10[4];
                  uVar25 = *puVar10;
                  uVar24 = puVar10[3];
                  uVar23 = puVar10[2];
                  puVar7[1] = puVar10[1];
                  *puVar7 = uVar25;
                  puVar7[3] = uVar24;
                  puVar7[2] = uVar23;
                  puVar7[4] = uVar12;
                  puVar10 = puVar18 + -5 + (ulong)bVar3 * 5;
                  puVar6 = puVar6 + -5 + (ulong)!bVar3 * 5;
                  puVar7 = puVar7 + -5;
                  puVar18 = puVar10;
                } while (puVar10 != puVar16 && puVar6 != param_3);
              }
              else {
                do {
                  bVar3 = (ulong)puVar14[2] <= (ulong)puVar18[2];
                  puVar16 = puVar18;
                  if (bVar3) {
                    puVar16 = puVar14;
                  }
                  uVar12 = puVar16[4];
                  uVar25 = *puVar16;
                  uVar24 = puVar16[3];
                  uVar23 = puVar16[2];
                  puVar10[1] = puVar16[1];
                  *puVar10 = uVar25;
                  puVar10[3] = uVar24;
                  puVar10[2] = uVar23;
                  puVar10[4] = uVar12;
                  puVar14 = puVar14 + (ulong)bVar3 * 5;
                  puVar18 = puVar18 + (ulong)!bVar3 * 5;
                  puVar10 = puVar10 + 5;
                } while (puVar14 != puVar6 && puVar18 != (undefined8 *)(param_1 + uVar15 * 0x28));
              }
              _memcpy(puVar10,puVar14,(long)puVar6 - (long)puVar14);
            }
          }
          uVar22 = uVar8 * 2 | 1;
          if (uVar9 < 2) goto LAB_106043768;
        }
        uVar22 = uVar8 * 2;
      } while (1 < uVar9);
LAB_106043768:
      uVar13 = 1;
    }
LAB_106043774:
    auStack_2c0[uVar13] = uVar22;
    abStack_ab[uVar13 + 1] = (byte)lVar4;
    if (param_2 <= uVar15) {
      if ((uVar22 & 1) != 0) {
        return;
      }
      func_0x000106045940(param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,
                          param_6);
      return;
    }
    uVar13 = uVar13 + 1;
    uVar15 = uVar15 + (uVar21 >> 1);
    uVar9 = param_2 - uVar15;
    if (uVar15 <= param_2 && uVar9 != 0) goto LAB_106043394;
LAB_1060433f0:
    lVar4 = 0;
    uVar9 = 1;
    uVar22 = uVar21;
  } while( true );
}

