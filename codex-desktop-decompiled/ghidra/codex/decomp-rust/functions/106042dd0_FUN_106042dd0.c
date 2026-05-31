
void FUN_106042dd0(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
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
  uVar16 = 0;
  uVar20 = 1;
  uVar11 = param_2;
  if (param_2 == 0) goto LAB_106042ef8;
LAB_106042ea4:
  lVar10 = param_1 + uVar15 * 0x20;
  if (uVar11 < uVar5) {
LAB_106042eb8:
    if ((param_5 & 1) == 0) {
      if (uVar5 <= uVar11) {
        uVar11 = uVar5;
      }
      uVar11 = uVar11 << 1;
    }
    else {
      if (0x1f < uVar11) {
        uVar11 = 0x20;
      }
      func_0x000106046824(lVar10,uVar11,param_3,param_4,0,0,param_6);
      uVar11 = uVar11 << 1 | 1;
    }
    goto LAB_106043018;
  }
  uVar21 = uVar11;
  if (1 < uVar11) {
    uVar8 = *(ulong *)(lVar10 + 0x30);
    if (uVar8 < *(ulong *)(lVar10 + 0x10)) {
      if (uVar11 == 2) {
        uVar11 = 1;
        uVar21 = 2;
LAB_106042f34:
        puVar9 = (undefined8 *)(param_1 + 0x10 + uVar15 * 0x20);
        puVar12 = (undefined8 *)(param_1 + -0x10 + uVar15 * 0x20 + uVar21 * 0x20);
        do {
          uVar23 = puVar9[-1];
          uVar22 = puVar9[-2];
          uVar25 = puVar9[1];
          uVar24 = *puVar9;
          uVar26 = puVar12[-2];
          uVar28 = puVar12[1];
          uVar27 = *puVar12;
          puVar9[-1] = puVar12[-1];
          puVar9[-2] = uVar26;
          puVar9[1] = uVar28;
          *puVar9 = uVar27;
          puVar12[-1] = uVar23;
          puVar12[-2] = uVar22;
          puVar12[1] = uVar25;
          *puVar12 = uVar24;
          puVar9 = puVar9 + 4;
          puVar12 = puVar12 + -4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      else {
        uVar17 = 2;
        puVar13 = (ulong *)(param_1 + 0x50 + uVar15 * 0x20);
        uVar18 = uVar8;
        do {
          uVar19 = *puVar13;
          uVar21 = uVar17;
          if (uVar18 <= uVar19) break;
          uVar17 = uVar17 + 1;
          uVar21 = uVar11;
          puVar13 = puVar13 + 4;
          uVar18 = uVar19;
        } while (uVar11 != uVar17);
LAB_106042fe8:
        if (uVar21 < uVar5) goto LAB_106042eb8;
        if (uVar8 < *(ulong *)(lVar10 + 0x10)) {
          if (1 < uVar21) {
            uVar11 = uVar21 >> 1;
            goto LAB_106042f34;
          }
          uVar21 = 1;
        }
      }
    }
    else if (uVar11 != 2) {
      uVar17 = 2;
      puVar13 = (ulong *)(param_1 + 0x50 + uVar15 * 0x20);
      uVar18 = uVar8;
      do {
        uVar19 = *puVar13;
        uVar21 = uVar17;
        if (uVar19 < uVar18) break;
        uVar17 = uVar17 + 1;
        uVar21 = uVar11;
        puVar13 = puVar13 + 4;
        uVar18 = uVar19;
      } while (uVar11 != uVar17);
      goto LAB_106042fe8;
    }
  }
  uVar11 = uVar21 << 1 | 1;
LAB_106043018:
  lVar10 = LZCOUNT((uVar15 * 2 + (uVar11 >> 1)) * uVar2 ^ (uVar15 * 2 - (uVar20 >> 1)) * uVar2);
  uVar21 = uVar20;
  do {
    uVar20 = uVar11;
    if (1 < uVar16) {
      do {
        while( true ) {
          uVar11 = uVar16 - 1;
          if ((uint)abStack_ab[uVar16] < (uint)lVar10) goto LAB_106043238;
          uVar17 = auStack_2c0[uVar11];
          uVar18 = uVar17 >> 1;
          uVar19 = uVar21 >> 1;
          uVar8 = uVar18 + uVar19;
          uVar16 = uVar11;
          if (uVar8 <= param_4 && (((uint)uVar17 | (uint)uVar21) & 1) == 0) break;
          puVar9 = (undefined8 *)(param_1 + (uVar15 - uVar8) * 0x20);
          if ((uVar17 & 1) == 0) {
            func_0x000106046824(puVar9,uVar18,param_3,param_4,(int)LZCOUNT(uVar18 | 1) << 1 ^ 0x7e,0
                                ,param_6);
          }
          if ((uVar21 & 1) == 0) {
            func_0x000106046824(puVar9 + uVar18 * 4,uVar19,param_3,param_4,
                                (int)LZCOUNT(uVar19 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((1 < uVar17) && (1 < uVar21)) {
            uVar21 = uVar19;
            if (uVar18 <= uVar19) {
              uVar21 = uVar18;
            }
            if (uVar21 <= param_4) {
              puVar12 = puVar9 + uVar18 * 4;
              puVar6 = puVar12;
              if (uVar18 <= uVar19) {
                puVar6 = puVar9;
              }
              _memcpy(param_3,puVar6,uVar21 * 0x20);
              puVar6 = param_3 + uVar21 * 4;
              puVar4 = param_3;
              puVar7 = (undefined8 *)(param_1 + -0x20 + uVar15 * 0x20);
              if (uVar19 < uVar18) {
                do {
                  bVar3 = (ulong)puVar12[-2] <= (ulong)puVar6[-2];
                  puVar14 = puVar12 + -4;
                  if (bVar3) {
                    puVar14 = puVar6 + -4;
                  }
                  uVar24 = *puVar14;
                  uVar23 = puVar14[3];
                  uVar22 = puVar14[2];
                  puVar7[1] = puVar14[1];
                  *puVar7 = uVar24;
                  puVar7[3] = uVar23;
                  puVar7[2] = uVar22;
                  puVar14 = puVar12 + -4 + (ulong)bVar3 * 4;
                  puVar6 = puVar6 + -4 + (ulong)!bVar3 * 4;
                  puVar7 = puVar7 + -4;
                  puVar12 = puVar14;
                } while (puVar14 != puVar9 && puVar6 != param_3);
              }
              else {
                do {
                  bVar3 = (ulong)puVar4[2] <= (ulong)puVar12[2];
                  puVar7 = puVar12;
                  if (bVar3) {
                    puVar7 = puVar4;
                  }
                  uVar24 = *puVar7;
                  uVar23 = puVar7[3];
                  uVar22 = puVar7[2];
                  puVar14 = puVar9 + 4;
                  puVar9[1] = puVar7[1];
                  *puVar9 = uVar24;
                  puVar9[3] = uVar23;
                  puVar9[2] = uVar22;
                  puVar4 = puVar4 + (ulong)bVar3 * 4;
                  puVar12 = puVar12 + (ulong)!bVar3 * 4;
                  puVar9 = puVar14;
                } while (puVar4 != puVar6 && puVar12 != (undefined8 *)(param_1 + uVar15 * 0x20));
              }
              _memcpy(puVar14,puVar4,(long)puVar6 - (long)puVar4);
            }
          }
          uVar21 = uVar8 * 2 | 1;
          if (uVar11 < 2) goto LAB_106043228;
        }
        uVar21 = uVar8 * 2;
      } while (1 < uVar11);
LAB_106043228:
      uVar16 = 1;
    }
LAB_106043238:
    auStack_2c0[uVar16] = uVar21;
    abStack_ab[uVar16 + 1] = (byte)lVar10;
    if (param_2 <= uVar15) {
      if ((uVar21 & 1) != 0) {
        return;
      }
      func_0x000106046824(param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,
                          param_6);
      return;
    }
    uVar16 = uVar16 + 1;
    uVar15 = uVar15 + (uVar20 >> 1);
    uVar11 = param_2 - uVar15;
    if (uVar15 <= param_2 && uVar11 != 0) goto LAB_106042ea4;
LAB_106042ef8:
    lVar10 = 0;
    uVar11 = 1;
    uVar21 = uVar20;
  } while( true );
}

