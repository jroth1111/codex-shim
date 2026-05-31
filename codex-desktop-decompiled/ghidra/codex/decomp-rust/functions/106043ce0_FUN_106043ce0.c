
void FUN_106043ce0(long param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
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
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
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
  uVar17 = 0;
  uVar15 = 0;
  uVar22 = 1;
  uVar11 = param_2;
  if (param_2 == 0) goto LAB_106043e14;
LAB_106043db8:
  puVar4 = (ulong *)(param_1 + uVar17 * 0x18);
  if (uVar11 < uVar5) {
LAB_106043dcc:
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
      __ZN4core5slice4sort6stable9quicksort9quicksort17h02b1573bc5a9c581E
                (puVar4,uVar11,param_3,param_4,0,0,param_6);
      uVar11 = uVar11 << 1 | 1;
    }
    goto LAB_106043f40;
  }
  uVar23 = uVar11;
  if (1 < uVar11) {
    uVar8 = puVar4[3];
    if (uVar8 < *puVar4) {
      if (uVar11 == 2) {
        uVar11 = 1;
        uVar23 = 2;
LAB_106043e50:
        puVar9 = (undefined8 *)(param_1 + 0x10 + uVar17 * 0x18);
        puVar12 = (undefined8 *)(param_1 + -8 + uVar17 * 0x18 + uVar23 * 0x18);
        do {
          uVar24 = puVar9[-1];
          uVar13 = puVar9[-2];
          uVar25 = puVar12[-2];
          puVar9[-1] = puVar12[-1];
          puVar9[-2] = uVar25;
          puVar12[-1] = uVar24;
          puVar12[-2] = uVar13;
          uVar13 = *puVar9;
          *puVar9 = *puVar12;
          *puVar12 = uVar13;
          uVar11 = uVar11 - 1;
          puVar9 = puVar9 + 3;
          puVar12 = puVar12 + -3;
        } while (uVar11 != 0);
      }
      else {
        uVar18 = 2;
        puVar14 = (ulong *)(param_1 + 0x30 + uVar17 * 0x18);
        uVar20 = uVar8;
        do {
          uVar21 = *puVar14;
          uVar23 = uVar18;
          if (uVar20 <= uVar21) break;
          uVar18 = uVar18 + 1;
          uVar23 = uVar11;
          puVar14 = puVar14 + 3;
          uVar20 = uVar21;
        } while (uVar11 != uVar18);
LAB_106043f10:
        if (uVar23 < uVar5) goto LAB_106043dcc;
        if (uVar8 < *puVar4) {
          if (1 < uVar23) {
            uVar11 = uVar23 >> 1;
            goto LAB_106043e50;
          }
          uVar23 = 1;
        }
      }
    }
    else if (uVar11 != 2) {
      uVar18 = 2;
      puVar14 = (ulong *)(param_1 + 0x30 + uVar17 * 0x18);
      uVar20 = uVar8;
      do {
        uVar21 = *puVar14;
        uVar23 = uVar18;
        if (uVar21 < uVar20) break;
        uVar18 = uVar18 + 1;
        uVar23 = uVar11;
        puVar14 = puVar14 + 3;
        uVar20 = uVar21;
      } while (uVar11 != uVar18);
      goto LAB_106043f10;
    }
  }
  uVar11 = uVar23 << 1 | 1;
LAB_106043f40:
  lVar10 = LZCOUNT((uVar17 * 2 + (uVar11 >> 1)) * uVar2 ^ (uVar17 * 2 - (uVar22 >> 1)) * uVar2);
  uVar23 = uVar22;
  do {
    uVar22 = uVar11;
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar11 = uVar15 - 1;
          if ((uint)abStack_ab[uVar15] < (uint)lVar10) goto LAB_106044190;
          uVar18 = auStack_2c0[uVar11];
          uVar20 = uVar18 >> 1;
          uVar21 = uVar23 >> 1;
          uVar8 = uVar20 + uVar21;
          uVar15 = uVar11;
          if (uVar8 <= param_4 && (((uint)uVar18 | (uint)uVar23) & 1) == 0) break;
          puVar4 = (ulong *)(param_1 + (uVar17 - uVar8) * 0x18);
          if ((uVar18 & 1) == 0) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17h02b1573bc5a9c581E
                      (puVar4,uVar20,param_3,param_4,(int)LZCOUNT(uVar20 | 1) << 1 ^ 0x7e,0,param_6)
            ;
          }
          if ((uVar23 & 1) == 0) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17h02b1573bc5a9c581E
                      (puVar4 + uVar20 * 3,uVar21,param_3,param_4,
                       (int)LZCOUNT(uVar21 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((1 < uVar18) && (1 < uVar23)) {
            uVar23 = uVar21;
            if (uVar20 <= uVar21) {
              uVar23 = uVar20;
            }
            if (uVar23 <= param_4) {
              puVar19 = puVar4 + uVar20 * 3;
              puVar14 = puVar19;
              if (uVar20 <= uVar21) {
                puVar14 = puVar4;
              }
              _memcpy(param_3,puVar14,uVar23 * 0x18);
              puVar6 = param_3 + uVar23 * 3;
              puVar7 = (ulong *)(param_1 + -0x18 + uVar17 * 0x18);
              puVar16 = param_3;
              puVar14 = puVar4;
              if (uVar21 < uVar20) {
                do {
                  puVar6 = puVar6 + -3;
                  puVar19 = puVar19 + -3;
                  bVar3 = *puVar19 <= *puVar6;
                  puVar14 = puVar19;
                  if (bVar3) {
                    puVar14 = puVar6;
                  }
                  uVar23 = puVar14[2];
                  uVar18 = *puVar14;
                  puVar7[1] = puVar14[1];
                  *puVar7 = uVar18;
                  puVar7[2] = uVar23;
                  puVar14 = puVar19 + (ulong)bVar3 * 3;
                  puVar6 = puVar6 + (ulong)!bVar3 * 3;
                  puVar7 = puVar7 + -3;
                  puVar19 = puVar14;
                } while (puVar14 != puVar4 && puVar6 != param_3);
              }
              else {
                do {
                  bVar3 = *puVar16 <= *puVar19;
                  puVar4 = puVar19;
                  if (bVar3) {
                    puVar4 = puVar16;
                  }
                  uVar23 = puVar4[2];
                  uVar18 = *puVar4;
                  puVar14[1] = puVar4[1];
                  *puVar14 = uVar18;
                  puVar14[2] = uVar23;
                  puVar16 = puVar16 + (ulong)bVar3 * 3;
                  puVar19 = puVar19 + (ulong)!bVar3 * 3;
                  puVar14 = puVar14 + 3;
                } while (puVar16 != puVar6 && puVar19 != (ulong *)(param_1 + uVar17 * 0x18));
              }
              _memcpy(puVar14,puVar16,(long)puVar6 - (long)puVar16);
            }
          }
          uVar23 = uVar8 * 2 | 1;
          if (uVar11 < 2) goto LAB_106044184;
        }
        uVar23 = uVar8 * 2;
      } while (1 < uVar11);
LAB_106044184:
      uVar15 = 1;
    }
LAB_106044190:
    auStack_2c0[uVar15] = uVar23;
    abStack_ab[uVar15 + 1] = (byte)lVar10;
    if (param_2 <= uVar17) {
      if ((uVar23 & 1) != 0) {
        return;
      }
      __ZN4core5slice4sort6stable9quicksort9quicksort17h02b1573bc5a9c581E
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar15 = uVar15 + 1;
    uVar17 = uVar17 + (uVar22 >> 1);
    uVar11 = param_2 - uVar17;
    if (uVar17 <= param_2 && uVar11 != 0) goto LAB_106043db8;
LAB_106043e14:
    lVar10 = 0;
    uVar11 = 1;
    uVar23 = uVar22;
  } while( true );
}

