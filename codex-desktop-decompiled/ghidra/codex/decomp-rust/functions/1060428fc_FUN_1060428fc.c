
void FUN_1060428fc(long param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
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
  uVar14 = 0;
  uVar15 = 0;
  uVar19 = 1;
  uVar11 = param_2;
  if (param_2 == 0) goto LAB_106042a18;
LAB_1060429c4:
  puVar12 = (ulong *)(param_1 + uVar14 * 0x10);
  if (uVar11 < uVar5) {
LAB_1060429d8:
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
      func_0x000106045134(puVar12,uVar11,param_3,param_4,0,0,param_6);
      uVar11 = uVar11 << 1 | 1;
    }
    goto LAB_106042b34;
  }
  uVar20 = uVar11;
  if (1 < uVar11) {
    uVar8 = puVar12[2];
    if (uVar8 < *puVar12) {
      if (uVar11 == 2) {
        uVar11 = 1;
        uVar20 = 2;
LAB_106042a54:
        puVar9 = (ulong *)(param_1 + -0x10 + uVar20 * 0x10 + uVar14 * 0x10);
        do {
          uVar16 = puVar12[1];
          uVar8 = *puVar12;
          uVar17 = *puVar9;
          puVar12[1] = puVar9[1];
          *puVar12 = uVar17;
          puVar9[1] = uVar16;
          *puVar9 = uVar8;
          uVar11 = uVar11 - 1;
          puVar9 = puVar9 + -2;
          puVar12 = puVar12 + 2;
        } while (uVar11 != 0);
      }
      else {
        uVar16 = 2;
        puVar9 = (ulong *)(param_1 + 0x20 + uVar14 * 0x10);
        uVar17 = uVar8;
        do {
          uVar18 = *puVar9;
          uVar20 = uVar16;
          if (uVar17 <= uVar18) break;
          uVar16 = uVar16 + 1;
          uVar20 = uVar11;
          puVar9 = puVar9 + 2;
          uVar17 = uVar18;
        } while (uVar11 != uVar16);
LAB_106042b04:
        if (uVar20 < uVar5) goto LAB_1060429d8;
        if (uVar8 < *puVar12) {
          if (1 < uVar20) {
            uVar11 = uVar20 >> 1;
            goto LAB_106042a54;
          }
          uVar20 = 1;
        }
      }
    }
    else if (uVar11 != 2) {
      uVar16 = 2;
      puVar9 = (ulong *)(param_1 + 0x20 + uVar14 * 0x10);
      uVar17 = uVar8;
      do {
        uVar18 = *puVar9;
        uVar20 = uVar16;
        if (uVar18 < uVar17) break;
        uVar16 = uVar16 + 1;
        uVar20 = uVar11;
        puVar9 = puVar9 + 2;
        uVar17 = uVar18;
      } while (uVar11 != uVar16);
      goto LAB_106042b04;
    }
  }
  uVar11 = uVar20 << 1 | 1;
LAB_106042b34:
  lVar10 = LZCOUNT((uVar14 * 2 + (uVar11 >> 1)) * uVar2 ^ (uVar14 * 2 - (uVar19 >> 1)) * uVar2);
  uVar20 = uVar19;
  do {
    uVar19 = uVar11;
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar11 = uVar15 - 1;
          if ((uint)abStack_ab[uVar15] < (uint)lVar10) goto LAB_106042d4c;
          uVar16 = auStack_2c0[uVar11];
          uVar17 = uVar16 >> 1;
          uVar18 = uVar20 >> 1;
          uVar8 = uVar17 + uVar18;
          uVar15 = uVar11;
          if (uVar8 <= param_4 && (((uint)uVar16 | (uint)uVar20) & 1) == 0) break;
          puVar12 = (ulong *)(param_1 + (uVar14 - uVar8) * 0x10);
          if ((uVar16 & 1) == 0) {
            func_0x000106045134(puVar12,uVar17,param_3,param_4,(int)LZCOUNT(uVar17 | 1) << 1 ^ 0x7e,
                                0,param_6);
          }
          if ((uVar20 & 1) == 0) {
            func_0x000106045134(puVar12 + uVar17 * 2,uVar18,param_3,param_4,
                                (int)LZCOUNT(uVar18 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((1 < uVar16) && (1 < uVar20)) {
            uVar20 = uVar18;
            if (uVar17 <= uVar18) {
              uVar20 = uVar17;
            }
            if (uVar20 <= param_4) {
              puVar9 = puVar12 + uVar17 * 2;
              puVar6 = puVar9;
              if (uVar17 <= uVar18) {
                puVar6 = puVar12;
              }
              _memcpy(param_3,puVar6,uVar20 * 0x10);
              puVar6 = param_3 + uVar20 * 2;
              puVar4 = param_3;
              puVar7 = (ulong *)(param_1 + -0x10 + uVar14 * 0x10);
              if (uVar18 < uVar17) {
                do {
                  puVar6 = puVar6 + -2;
                  puVar9 = puVar9 + -2;
                  bVar3 = *puVar9 <= *puVar6;
                  puVar13 = puVar9;
                  if (bVar3) {
                    puVar13 = puVar6;
                  }
                  uVar20 = *puVar13;
                  puVar7[1] = puVar13[1];
                  *puVar7 = uVar20;
                  puVar13 = puVar9 + (ulong)bVar3 * 2;
                  puVar6 = puVar6 + (ulong)!bVar3 * 2;
                  puVar7 = puVar7 + -2;
                  puVar9 = puVar13;
                } while (puVar13 != puVar12 && puVar6 != param_3);
              }
              else {
                do {
                  bVar3 = *puVar4 <= *puVar9;
                  puVar7 = puVar9;
                  if (bVar3) {
                    puVar7 = puVar4;
                  }
                  uVar20 = *puVar7;
                  puVar13 = puVar12 + 2;
                  puVar12[1] = puVar7[1];
                  *puVar12 = uVar20;
                  puVar4 = puVar4 + (ulong)bVar3 * 2;
                  puVar9 = puVar9 + (ulong)!bVar3 * 2;
                  puVar12 = puVar13;
                } while (puVar4 != puVar6 && puVar9 != (ulong *)(param_1 + uVar14 * 0x10));
              }
              _memcpy(puVar13,puVar4,(long)puVar6 - (long)puVar4);
            }
          }
          uVar20 = uVar8 * 2 | 1;
          if (uVar11 < 2) goto LAB_106042d3c;
        }
        uVar20 = uVar8 * 2;
      } while (1 < uVar11);
LAB_106042d3c:
      uVar15 = 1;
    }
LAB_106042d4c:
    auStack_2c0[uVar15] = uVar20;
    abStack_ab[uVar15 + 1] = (byte)lVar10;
    if (param_2 <= uVar14) {
      if ((uVar20 & 1) != 0) {
        return;
      }
      func_0x000106045134(param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,
                          param_6);
      return;
    }
    uVar15 = uVar15 + 1;
    uVar14 = uVar14 + (uVar19 >> 1);
    uVar11 = param_2 - uVar14;
    if (uVar14 <= param_2 && uVar11 != 0) goto LAB_1060429c4;
LAB_106042a18:
    lVar10 = 0;
    uVar11 = 1;
    uVar20 = uVar19;
  } while( true );
}

