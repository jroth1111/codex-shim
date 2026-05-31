
void FUN_10120d5b4(undefined8 *param_1,ulong *param_2,undefined8 *******param_3)

{
  undefined8 *puVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 ******ppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *******extraout_x8_01;
  ulong uVar15;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long lVar16;
  long lVar17;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long lVar18;
  long extraout_x11;
  long extraout_x11_00;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *******pppppppuVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 *******pppppppuVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******appppppuStack_78 [3];
  
  uVar29 = param_2[3];
  if (uVar29 == 0) {
    pppppppuVar24 = (undefined8 *******)0x0;
    uVar28 = param_2[1];
    goto LAB_10120d684;
  }
  uVar28 = param_2[1];
  uVar25 = param_2[2];
  uVar15 = *param_2;
  uVar11 = 0;
  if (uVar15 <= uVar25) {
    uVar11 = uVar15;
  }
  lVar18 = uVar25 - uVar11;
  pppppppuVar24 = (undefined8 *******)(uVar28 + lVar18 * 0x20);
  pppppppuVar9 = (undefined8 *******)pppppppuVar24[2];
  uVar4 = param_3 <= pppppppuVar9;
  uVar5 = false;
  if (pppppppuVar9 == param_3) {
    ppppppuStack_88 = pppppppuVar24[1];
    ppppppuStack_90 = *pppppppuVar24;
    appppppuStack_78[0] = pppppppuVar24[3];
    ppppppuStack_80 = pppppppuVar24[2];
    *pppppppuVar24 = (undefined8 ******)&UNK_10b205a90;
    pppppppuVar24[1] = (undefined8 ******)((long)pppppppuVar24[1] + (long)param_3);
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0x0;
    uVar11 = 0;
    if (uVar15 <= uVar25 + 1) {
      uVar11 = uVar15;
    }
    param_2[2] = (uVar25 + 1) - uVar11;
    param_2[3] = uVar29 - 1;
    plVar14 = (long *)(uVar28 + uVar25 * 0x20);
    ppppppuStack_d8 = (undefined8 ******)plVar14[1];
    ppppppuStack_e0 = (undefined8 ******)*plVar14;
    ppppppuStack_c8 = (undefined8 ******)plVar14[3];
    ppppppuStack_d0 = (undefined8 ******)plVar14[2];
    if (ppppppuStack_e0 != (undefined8 ******)0x0) {
      (*(code *)ppppppuStack_e0[4])(&ppppppuStack_c8,ppppppuStack_d8,ppppppuStack_d0);
    }
    param_1[1] = ppppppuStack_88;
    *param_1 = ppppppuStack_90;
    param_1[3] = appppppuStack_78[0];
    param_1[2] = ppppppuStack_80;
    return;
  }
LAB_10120d69c:
  if ((bool)uVar4 && !(bool)uVar5) {
    if (param_3 != (undefined8 *******)0x0) {
      (*(code *)**pppppppuVar24)(param_1,pppppppuVar24 + 3,pppppppuVar24[1]);
      pppppppuVar24[1] = (undefined8 ******)((long)pppppppuVar24[1] + (long)param_3);
      pppppppuVar24[2] = (undefined8 ******)((long)pppppppuVar24[2] - (long)param_3);
      param_1[2] = param_3;
      return;
    }
    ppppppuVar10 = pppppppuVar24[1];
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &UNK_10b205a90;
    param_1[1] = ppppppuVar10;
    return;
  }
  do {
    pppppppuVar24 = (undefined8 *******)0x0;
    lVar16 = uVar29 - (uVar15 - lVar18);
    uVar20 = lVar16 * 0x20;
    if (uVar29 < uVar15 - lVar18 || lVar16 == 0) {
      uVar20 = 0;
      uVar15 = lVar18 + uVar29;
    }
    uVar15 = uVar15 - lVar18;
    if (uVar15 != 0) {
      if (uVar15 < 4) {
        uVar21 = 0;
        pppppppuVar24 = (undefined8 *******)0x0;
      }
      else {
        lVar18 = 0;
        lVar16 = 0;
        lVar22 = 0;
        lVar17 = 0;
        uVar21 = uVar15 & 0xfffffffffffffffc;
        plVar14 = (long *)(uVar28 + uVar11 * -0x20 + uVar25 * 0x20 + 0x50);
        uVar12 = uVar21;
        do {
          lVar18 = plVar14[-8] + lVar18;
          lVar16 = plVar14[-4] + lVar16;
          lVar22 = *plVar14 + lVar22;
          lVar17 = plVar14[4] + lVar17;
          plVar14 = plVar14 + 0x10;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
        pppppppuVar24 = (undefined8 *******)(lVar17 + lVar22 + lVar16 + lVar18);
        if (uVar15 == uVar21) goto LAB_10120d92c;
      }
      lVar18 = uVar15 - uVar21;
      plVar14 = (long *)(uVar28 + uVar21 * 0x20 + uVar25 * 0x20 + uVar11 * -0x20 + 0x10);
      do {
        pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
        lVar18 = lVar18 + -1;
        plVar14 = plVar14 + 4;
      } while (lVar18 != 0);
    }
LAB_10120d92c:
    if (uVar20 != 0) {
      uVar11 = uVar20 >> 5;
      if (uVar20 < 0x80) {
        uVar15 = 0;
      }
      else {
        lVar18 = 0;
        lVar16 = 0;
        lVar22 = 0;
        uVar15 = uVar11 & 0x3fffffffffffffc;
        plVar14 = (long *)(uVar28 + 0x50);
        uVar25 = uVar15;
        do {
          pppppppuVar24 = (undefined8 *******)(plVar14[-8] + (long)pppppppuVar24);
          lVar18 = plVar14[-4] + lVar18;
          lVar16 = *plVar14 + lVar16;
          lVar22 = plVar14[4] + lVar22;
          plVar14 = plVar14 + 0x10;
          uVar25 = uVar25 - 4;
        } while (uVar25 != 0);
        pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + lVar22 + lVar16 + lVar18);
        if (uVar11 == uVar15) goto LAB_10120d684;
      }
      lVar18 = uVar11 - uVar15;
      uVar11 = uVar15 << 5 | 0x10;
      do {
        pppppppuVar24 = (undefined8 *******)(*(long *)(uVar28 + uVar11) + (long)pppppppuVar24);
        uVar11 = uVar11 + 0x20;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
LAB_10120d684:
    uVar4 = pppppppuVar24 <= param_3;
    uVar5 = param_3 == pppppppuVar24;
    if ((bool)uVar4 && !(bool)uVar5) {
      func_0x000108a82bf0(&UNK_108cd2e69,0x1c,&UNK_10b24be58);
      pppppppuVar9 = extraout_x8_01;
      pppppppuVar24 = param_3;
      goto LAB_10120e310;
    }
    if ((long)param_3 < 0) break;
    if (param_3 == (undefined8 *******)0x0) {
      pppppppuVar9 = (undefined8 *******)0x1;
LAB_10120d728:
      uVar11 = 0x40 - LZCOUNT((ulong)param_3 >> 10);
      if (6 < uVar11) {
        uVar11 = 7;
      }
      ppppppuStack_118 = (undefined8 *******)0x0;
      ppppppuStack_108 = (undefined8 ******)(uVar11 << 2 | 1);
      ppppppuStack_120 = pppppppuVar9;
      ppppppuStack_110 = param_3;
      if (pppppppuVar24 == param_3) {
        uVar11 = *param_2;
        if (uVar29 == 0) {
          lVar16 = 0;
          lVar18 = 0;
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          if (uVar11 <= param_2[2]) {
            uVar25 = uVar11;
          }
          lVar16 = param_2[2] - uVar25;
          lVar18 = uVar29 - (uVar11 - lVar16);
          uVar25 = uVar11;
          if (uVar29 < uVar11 - lVar16 || lVar18 == 0) {
            lVar18 = 0;
            uVar25 = lVar16 + uVar29;
          }
        }
        lVar22 = uVar28 + lVar16 * 0x20;
        lVar16 = uVar25 * 0x20 + lVar16 * -0x20;
        goto LAB_10120d81c;
      }
      if (uVar29 == 0) goto LAB_10120e1f8;
      pppppppuVar24 = (undefined8 *******)0x0;
      uVar15 = *param_2;
      uVar25 = param_2[2];
      uVar11 = 0;
      if (uVar15 <= uVar25) {
        uVar11 = uVar15;
      }
      lVar16 = uVar25 - uVar11;
      lVar18 = uVar29 - (uVar15 - lVar16);
      uVar20 = lVar18 * 0x20;
      uVar12 = uVar15;
      if (uVar29 < uVar15 - lVar16 || lVar18 == 0) {
        uVar20 = 0;
        uVar12 = lVar16 + uVar29;
      }
      uVar12 = uVar12 - lVar16;
      if (uVar12 == 0) goto LAB_10120da98;
      if (3 < uVar12) {
        lVar18 = 0;
        lVar16 = 0;
        lVar22 = 0;
        lVar17 = 0;
        uVar21 = uVar12 & 0xfffffffffffffffc;
        plVar14 = (long *)(uVar28 + uVar11 * -0x20 + uVar25 * 0x20 + 0x50);
        uVar19 = uVar21;
        do {
          lVar18 = plVar14[-8] + lVar18;
          lVar16 = plVar14[-4] + lVar16;
          lVar22 = *plVar14 + lVar22;
          lVar17 = plVar14[4] + lVar17;
          plVar14 = plVar14 + 0x10;
          uVar19 = uVar19 - 4;
        } while (uVar19 != 0);
        pppppppuVar24 = (undefined8 *******)(lVar17 + lVar22 + lVar16 + lVar18);
        if (uVar12 != uVar21) {
LAB_10120da70:
          lVar18 = uVar12 - uVar21;
          plVar14 = (long *)(uVar28 + uVar21 * 0x20 + uVar25 * 0x20 + uVar11 * -0x20 + 0x10);
          do {
            pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
            lVar18 = lVar18 + -1;
            plVar14 = plVar14 + 4;
          } while (lVar18 != 0);
        }
LAB_10120da98:
        if (uVar20 != 0) {
          uVar11 = uVar20 >> 5;
          if (uVar20 < 0x80) {
            uVar12 = 0;
          }
          else {
            lVar18 = 0;
            lVar16 = 0;
            lVar22 = 0;
            uVar12 = uVar11 & 0x3fffffffffffffc;
            plVar14 = (long *)(uVar28 + 0x50);
            uVar20 = uVar12;
            do {
              pppppppuVar24 = (undefined8 *******)(plVar14[-8] + (long)pppppppuVar24);
              lVar18 = plVar14[-4] + lVar18;
              lVar16 = *plVar14 + lVar16;
              lVar22 = plVar14[4] + lVar22;
              plVar14 = plVar14 + 0x10;
              uVar20 = uVar20 - 4;
            } while (uVar20 != 0);
            pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + lVar22 + lVar16 + lVar18);
            if (uVar11 == uVar12) goto LAB_10120db24;
          }
          lVar18 = uVar11 - uVar12;
          plVar14 = (long *)(uVar28 + uVar12 * 0x20 + 0x10);
          do {
            pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
            lVar18 = lVar18 + -1;
            plVar14 = plVar14 + 4;
          } while (lVar18 != 0);
        }
LAB_10120db24:
        pppppppuVar9 = param_3;
        if (pppppppuVar24 <= param_3) {
          pppppppuVar9 = pppppppuVar24;
        }
        if (pppppppuVar9 != (undefined8 *******)0x0) {
          uVar11 = uVar25;
          do {
            pppppppuVar24 = (undefined8 *******)0x0;
            uVar20 = 0;
            if (uVar15 <= uVar25) {
              uVar20 = uVar15;
            }
            lVar16 = uVar25 - uVar20;
            lVar18 = uVar29 - (uVar15 - lVar16);
            uVar12 = lVar18 * 0x20;
            uVar21 = uVar15;
            if (uVar29 < uVar15 - lVar16 || lVar18 == 0) {
              uVar12 = 0;
              uVar21 = lVar16 + uVar29;
            }
            uVar21 = uVar21 - lVar16;
            if (uVar21 != 0) {
              if (uVar21 < 2) {
                uVar23 = 0;
                pppppppuVar24 = (undefined8 *******)0x0;
              }
              else {
                lVar18 = 0;
                lVar22 = 0;
                uVar23 = uVar21 & 0xfffffffffffffffe;
                plVar14 = (long *)(uVar28 + 0x30) + lVar16 * 4;
                uVar19 = uVar23;
                do {
                  lVar18 = plVar14[-4] + lVar18;
                  lVar22 = *plVar14 + lVar22;
                  uVar19 = uVar19 - 2;
                  plVar14 = plVar14 + 8;
                } while (uVar19 != 0);
                pppppppuVar24 = (undefined8 *******)(lVar22 + lVar18);
                if (uVar21 == uVar23) goto LAB_10120dc0c;
              }
              lVar18 = uVar21 - uVar23;
              plVar14 = (long *)(uVar28 + 0x10 + uVar25 * 0x20 + uVar23 * 0x20 + uVar20 * -0x20);
              do {
                pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
                lVar18 = lVar18 + -1;
                plVar14 = plVar14 + 4;
              } while (lVar18 != 0);
            }
LAB_10120dc0c:
            if (uVar12 != 0) {
              uVar20 = uVar12 >> 5;
              if (uVar12 < 0x40) {
                uVar21 = 0;
              }
              else {
                lVar18 = 0;
                uVar21 = uVar20 & 0x3fffffffffffffe;
                uVar12 = uVar21;
                plVar14 = (long *)(uVar28 + 0x30);
                do {
                  pppppppuVar24 = (undefined8 *******)(plVar14[-4] + (long)pppppppuVar24);
                  lVar18 = *plVar14 + lVar18;
                  uVar12 = uVar12 - 2;
                  plVar14 = plVar14 + 8;
                } while (uVar12 != 0);
                pppppppuVar24 = (undefined8 *******)(lVar18 + (long)pppppppuVar24);
                if (uVar20 == uVar21) goto LAB_10120dc74;
              }
              lVar18 = uVar20 - uVar21;
              plVar14 = (long *)(uVar28 + 0x10 + uVar21 * 0x20);
              do {
                pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
                lVar18 = lVar18 + -1;
                plVar14 = plVar14 + 4;
              } while (lVar18 != 0);
            }
LAB_10120dc74:
            pppppppuVar9 = param_3;
            if (pppppppuVar24 <= param_3) {
              pppppppuVar9 = pppppppuVar24;
            }
            if (pppppppuVar9 == (undefined8 *******)0x0) break;
            lVar18 = uVar28 + lVar16 * 0x20;
            uVar26 = *(undefined8 *)(lVar18 + 8);
            pppppppuVar9 = *(undefined8 ********)(lVar18 + 0x10);
            pppppppuVar24 = param_3;
            if (pppppppuVar9 <= param_3) {
              pppppppuVar24 = pppppppuVar9;
            }
            if ((undefined8 *******)((long)ppppppuStack_110 - (long)ppppppuStack_118) <
                pppppppuVar24) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                        (&ppppppuStack_120,pppppppuVar24,1);
            }
            _memcpy((undefined *)((long)ppppppuStack_120 + (long)ppppppuStack_118),uVar26,
                    pppppppuVar24);
            pppppppuVar9 = (undefined8 *******)((long)ppppppuStack_110 - (long)ppppppuStack_118);
            if (pppppppuVar9 < pppppppuVar24) goto LAB_10120e310;
            ppppppuStack_118 = (undefined8 ******)((long)ppppppuStack_118 + (long)pppppppuVar24);
            pppppppuVar9 = pppppppuVar24;
            if (pppppppuVar24 != (undefined8 *******)0x0) {
              while( true ) {
                if (uVar29 == 0) goto LAB_10120e2f0;
                uVar25 = 0;
                if (uVar15 <= uVar11) {
                  uVar25 = uVar15;
                }
                lVar18 = uVar28 + (uVar11 - uVar25) * 0x20;
                pppppppuVar27 = *(undefined8 ********)(lVar18 + 0x10);
                if (pppppppuVar9 <= pppppppuVar27 && (long)pppppppuVar27 - (long)pppppppuVar9 != 0)
                break;
                *(undefined **)(lVar18 + 8) =
                     (undefined *)(*(long *)(lVar18 + 8) + (long)pppppppuVar27);
                *(undefined8 *)(lVar18 + 0x10) = 0;
                uVar25 = 0;
                if (uVar15 <= uVar11 + 1) {
                  uVar25 = uVar15;
                }
                uVar25 = (uVar11 + 1) - uVar25;
                uVar29 = uVar29 - 1;
                param_2[2] = uVar25;
                param_2[3] = uVar29;
                puVar1 = (undefined8 *)(uVar28 + uVar11 * 0x20);
                ppppppuStack_d8 = (undefined8 ******)puVar1[1];
                ppppppuStack_e0 = (undefined8 ******)*puVar1;
                ppppppuStack_c8 = (undefined8 ******)puVar1[3];
                ppppppuStack_d0 = (undefined8 ******)puVar1[2];
                if ((undefined8 *******)ppppppuStack_e0 != (undefined8 *******)0x0) {
                  (*(code *)ppppppuStack_e0[4])(&ppppppuStack_c8,ppppppuStack_d8,ppppppuStack_d0);
                }
                pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 - (long)pppppppuVar27);
                uVar11 = uVar25;
                if (pppppppuVar9 == (undefined8 *******)0x0) goto LAB_10120db50;
              }
              *(undefined **)(lVar18 + 8) =
                   (undefined *)(*(long *)(lVar18 + 8) + (long)pppppppuVar9);
              *(long *)(lVar18 + 0x10) = (long)pppppppuVar27 - (long)pppppppuVar9;
              uVar25 = uVar11;
            }
LAB_10120db50:
            param_3 = (undefined8 *******)((long)param_3 - (long)pppppppuVar24);
            if (uVar29 == 0) break;
          } while( true );
        }
        goto LAB_10120e1f8;
      }
      uVar21 = 0;
      pppppppuVar24 = (undefined8 *******)0x0;
      goto LAB_10120da70;
    }
    pppppppuVar9 = (undefined8 *******)_malloc(param_3);
    if (pppppppuVar9 != (undefined8 *******)0x0) goto LAB_10120d728;
    func_0x0001087c9084(1,param_3);
    uVar25 = extraout_x8_00;
    uVar15 = extraout_x9_00;
    uVar11 = extraout_x10_00;
    lVar18 = extraout_x11_00;
  } while( true );
  func_0x0001087c9084(0,param_3);
  uVar25 = extraout_x8;
  uVar15 = extraout_x9;
  uVar11 = extraout_x10;
  lVar18 = extraout_x11;
  goto LAB_10120d69c;
  while( true ) {
    plVar14 = (long *)(lVar22 + 0x10);
    lVar22 = lVar22 + 0x20;
    lVar16 = lVar16 + -0x20;
    if (*plVar14 != 0) break;
LAB_10120d81c:
    if (lVar16 == 0) {
      lVar18 = lVar18 << 5;
      uVar25 = uVar28;
      goto LAB_10120d83c;
    }
  }
  goto LAB_10120d850;
  while( true ) {
    plVar14 = (long *)(uVar25 + 0x10);
    uVar25 = uVar25 + 0x20;
    lVar18 = lVar18 + -0x20;
    if (*plVar14 != 0) break;
LAB_10120d83c:
    if (lVar18 == 0) goto LAB_10120e1f8;
  }
LAB_10120d850:
  if (param_3 == (undefined8 *******)0x0) {
    lVar18 = 0;
    if (uVar29 != 0) {
      uVar15 = param_2[2];
      uVar25 = 0;
      if (uVar11 <= uVar15) {
        uVar25 = uVar11;
      }
      lVar22 = uVar15 - uVar25;
      lVar16 = uVar29 - (uVar11 - lVar22);
      uVar20 = lVar16 * 0x20;
      if (uVar29 < uVar11 - lVar22 || lVar16 == 0) {
        uVar20 = 0;
        uVar11 = lVar22 + uVar29;
      }
      uVar11 = uVar11 - lVar22;
      if (uVar11 != 0) {
        if (uVar11 < 4) {
          uVar12 = 0;
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          lVar16 = 0;
          lVar22 = 0;
          lVar17 = 0;
          uVar12 = uVar11 & 0xfffffffffffffffc;
          plVar14 = (long *)(uVar28 + uVar25 * -0x20 + uVar15 * 0x20 + 0x50);
          uVar29 = uVar12;
          do {
            lVar18 = plVar14[-8] + lVar18;
            lVar16 = plVar14[-4] + lVar16;
            lVar22 = *plVar14 + lVar22;
            lVar17 = plVar14[4] + lVar17;
            plVar14 = plVar14 + 0x10;
            uVar29 = uVar29 - 4;
          } while (uVar29 != 0);
          lVar18 = lVar17 + lVar22 + lVar16 + lVar18;
          if (uVar11 == uVar12) goto LAB_10120e0c0;
        }
        lVar16 = uVar11 - uVar12;
        plVar14 = (long *)(uVar28 + uVar12 * 0x20 + uVar15 * 0x20 + uVar25 * -0x20 + 0x10);
        do {
          lVar18 = *plVar14 + lVar18;
          lVar16 = lVar16 + -1;
          plVar14 = plVar14 + 4;
        } while (lVar16 != 0);
      }
LAB_10120e0c0:
      if (uVar20 != 0) {
        uVar29 = uVar20 >> 5;
        if (uVar20 < 0x80) {
          uVar25 = 0;
        }
        else {
          lVar16 = 0;
          lVar22 = 0;
          lVar17 = 0;
          uVar25 = uVar29 & 0x3fffffffffffffc;
          plVar14 = (long *)(uVar28 + 0x50);
          uVar11 = uVar25;
          do {
            lVar18 = plVar14[-8] + lVar18;
            lVar16 = plVar14[-4] + lVar16;
            lVar22 = *plVar14 + lVar22;
            lVar17 = plVar14[4] + lVar17;
            plVar14 = plVar14 + 0x10;
            uVar11 = uVar11 - 4;
          } while (uVar11 != 0);
          lVar18 = lVar17 + lVar22 + lVar16 + lVar18;
          if (uVar29 == uVar25) goto LAB_10120e14c;
        }
        lVar16 = uVar29 - uVar25;
        plVar14 = (long *)(uVar28 + uVar25 * 0x20 + 0x10);
        do {
          lVar18 = *plVar14 + lVar18;
          lVar16 = lVar16 + -1;
          plVar14 = plVar14 + 4;
        } while (lVar16 != 0);
      }
    }
LAB_10120e14c:
    FUN_10120d5b4(&ppppppuStack_100,param_2,lVar18);
    ppppppuStack_a8 = ppppppuStack_f8;
    ppppppuStack_b0 = ppppppuStack_100;
    ppppppuStack_98 = ppppppuStack_e8;
    ppppppuStack_a0 = ppppppuStack_f0;
    iVar7 = (*(code *)ppppppuStack_100[3])(&ppppppuStack_98);
    ppppppuVar2 = ppppppuStack_a0;
    ppppppuVar10 = ppppppuStack_a8;
    if (iVar7 == 0) {
      ppppppuStack_d0 = ppppppuStack_a8;
      ppppppuStack_d8 = ppppppuStack_b0;
      ppppppuStack_c0 = ppppppuStack_98;
      ppppppuStack_c8 = ppppppuStack_a0;
      ppppppuStack_88 = ppppppuStack_a8;
      ppppppuStack_90 = ppppppuStack_b0;
      appppppuStack_78[0] = ppppppuStack_98;
      ppppppuStack_80 = ppppppuStack_a0;
      FUN_100f41da0(&ppppppuStack_120,ppppppuStack_a8,ppppppuStack_a0);
      (*(code *)ppppppuStack_90[4])(appppppuStack_78,ppppppuVar10,ppppppuVar2);
    }
    else {
      ppppppuStack_88 = ppppppuStack_a8;
      ppppppuStack_90 = ppppppuStack_b0;
      appppppuStack_78[0] = ppppppuStack_98;
      ppppppuStack_80 = ppppppuStack_a0;
      (*(code *)ppppppuStack_b0[2])
                (&ppppppuStack_d8,appppppuStack_78,ppppppuStack_a8,ppppppuStack_a0);
      __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                (&ppppppuStack_120);
      ppppppuStack_118 = ppppppuStack_d0;
      ppppppuStack_120 = ppppppuStack_d8;
      ppppppuStack_108 = ppppppuStack_c0;
      ppppppuStack_110 = ppppppuStack_c8;
    }
LAB_10120e1f8:
    ppppppuVar10 = ppppppuStack_118;
    if (((ulong)ppppppuStack_108 & 1) == 0) {
      param_1[2] = ppppppuStack_118;
      param_1[3] = ppppppuStack_108;
      *param_1 = &__ZN5bytes9bytes_mut13SHARED_VTABLE17h0a6377dc8dadf18bE;
      param_1[1] = ppppppuStack_120;
    }
    else {
      pppppppuVar27 = (undefined8 *******)((ulong)ppppppuStack_108 >> 5);
      pppppppuVar9 = (undefined8 *******)((long)ppppppuStack_120 - (long)pppppppuVar27);
      pppppppuVar24 = (undefined8 *******)((long)pppppppuVar27 + (long)ppppppuStack_118);
      if (ppppppuStack_118 == ppppppuStack_110) {
        if (pppppppuVar24 == (undefined8 *******)0x0) {
          ppppppuStack_80 = (undefined8 *******)0x0;
          appppppuStack_78[0] = (undefined8 *******)0x0;
          ppppppuStack_88 = (undefined8 *******)0x1;
          ppppppuStack_90 = (undefined8 ******)&UNK_10b205a90;
        }
        else if (((ulong)pppppppuVar9 & 1) == 0) {
          ppppppuStack_90 =
               (undefined8 ******)&__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          ppppppuStack_88 = pppppppuVar9;
          ppppppuStack_80 = pppppppuVar24;
          appppppuStack_78[0] = (undefined8 *******)((ulong)pppppppuVar9 | 1);
        }
        else {
          ppppppuStack_90 =
               (undefined8 ******)&__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
          ppppppuStack_88 = pppppppuVar9;
          ppppppuStack_80 = pppppppuVar24;
          appppppuStack_78[0] = pppppppuVar9;
        }
      }
      else {
        ppppppuVar2 = (undefined8 ******)((long)pppppppuVar27 + (long)ppppppuStack_110);
        pppppppuVar8 = (undefined8 *******)_malloc(0x18);
        if (pppppppuVar8 == (undefined8 *******)0x0) {
          func_0x0001087c906c(8,0x18);
          goto LAB_10120e384;
        }
        *pppppppuVar8 = pppppppuVar9;
        pppppppuVar8[1] = ppppppuVar2;
        pppppppuVar8[2] = (undefined8 ******)0x1;
        ppppppuStack_90 = (undefined8 ******)&UNK_10b205b08;
        ppppppuStack_88 = pppppppuVar9;
        ppppppuStack_80 = pppppppuVar24;
        appppppuStack_78[0] = pppppppuVar8;
      }
      if (pppppppuVar24 < pppppppuVar27) {
        ppppppuStack_e0 = &ppppppuStack_100;
        ppppppuStack_d8 = (undefined8 ******)&DAT_100c929e0;
        ppppppuStack_d0 = &ppppppuStack_b0;
        ppppppuStack_c8 = (undefined8 ******)&DAT_100c929e0;
        ppppppuStack_100 = pppppppuVar27;
        ppppppuStack_b0 = pppppppuVar24;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__cannot_advance_past__remaining__108aba12e,&ppppppuStack_e0,&UNK_10b243fb8);
LAB_10120e384:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10120e388);
        (*pcVar3)();
      }
      param_1[1] = (undefined *)((long)ppppppuStack_88 + (long)pppppppuVar27);
      *param_1 = ppppppuStack_90;
      param_1[3] = appppppuStack_78[0];
      param_1[2] = ppppppuVar10;
    }
    return;
  }
  uVar25 = param_2[2];
  if (uVar29 == 0) goto LAB_10120dea8;
  pppppppuVar24 = (undefined8 *******)0x0;
  uVar15 = 0;
  if (uVar11 <= uVar25) {
    uVar15 = uVar11;
  }
  lVar16 = uVar25 - uVar15;
  lVar18 = uVar29 - (uVar11 - lVar16);
  uVar20 = lVar18 * 0x20;
  uVar12 = uVar11;
  if (uVar29 < uVar11 - lVar16 || lVar18 == 0) {
    uVar20 = 0;
    uVar12 = lVar16 + uVar29;
  }
  uVar12 = uVar12 - lVar16;
  if (uVar12 != 0) {
    if (uVar12 < 4) {
      uVar19 = 0;
      pppppppuVar24 = (undefined8 *******)0x0;
    }
    else {
      lVar18 = 0;
      lVar16 = 0;
      lVar22 = 0;
      lVar17 = 0;
      uVar19 = uVar12 & 0xfffffffffffffffc;
      plVar14 = (long *)(uVar28 + uVar15 * -0x20 + uVar25 * 0x20 + 0x50);
      uVar21 = uVar19;
      do {
        lVar18 = plVar14[-8] + lVar18;
        lVar16 = plVar14[-4] + lVar16;
        lVar22 = *plVar14 + lVar22;
        lVar17 = plVar14[4] + lVar17;
        plVar14 = plVar14 + 0x10;
        uVar21 = uVar21 - 4;
      } while (uVar21 != 0);
      pppppppuVar24 = (undefined8 *******)(lVar17 + lVar22 + lVar16 + lVar18);
      if (uVar12 == uVar19) goto LAB_10120de08;
    }
    lVar18 = uVar12 - uVar19;
    plVar14 = (long *)(uVar28 + uVar19 * 0x20 + uVar25 * 0x20 + uVar15 * -0x20 + 0x10);
    do {
      pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
      lVar18 = lVar18 + -1;
      plVar14 = plVar14 + 4;
    } while (lVar18 != 0);
  }
LAB_10120de08:
  if (uVar20 != 0) {
    uVar15 = uVar20 >> 5;
    if (uVar20 < 0x80) {
      uVar12 = 0;
    }
    else {
      lVar18 = 0;
      lVar16 = 0;
      lVar22 = 0;
      uVar12 = uVar15 & 0x3fffffffffffffc;
      plVar14 = (long *)(uVar28 + 0x50);
      uVar20 = uVar12;
      do {
        pppppppuVar24 = (undefined8 *******)(plVar14[-8] + (long)pppppppuVar24);
        lVar18 = plVar14[-4] + lVar18;
        lVar16 = *plVar14 + lVar16;
        lVar22 = plVar14[4] + lVar22;
        plVar14 = plVar14 + 0x10;
        uVar20 = uVar20 - 4;
      } while (uVar20 != 0);
      pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + lVar22 + lVar16 + lVar18);
      if (uVar15 == uVar12) goto LAB_10120de94;
    }
    lVar18 = uVar15 - uVar12;
    plVar14 = (long *)(uVar28 + uVar12 * 0x20 + 0x10);
    do {
      pppppppuVar24 = (undefined8 *******)(*plVar14 + (long)pppppppuVar24);
      lVar18 = lVar18 + -1;
      plVar14 = plVar14 + 4;
    } while (lVar18 != 0);
  }
LAB_10120de94:
  if (param_3 < pppppppuVar24) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
              (&ppppppuStack_120,pppppppuVar24,1);
  }
LAB_10120dea8:
  uVar15 = 0;
  if (uVar11 <= uVar25) {
    uVar15 = uVar11;
  }
  lVar16 = uVar25 - uVar15;
  lVar18 = uVar28 + lVar16 * 0x20;
LAB_10120decc:
  lVar22 = uVar29 - (uVar11 - lVar16);
  uVar15 = uVar11;
  if (uVar29 <= uVar11 - lVar16) {
    lVar22 = 0;
    uVar15 = lVar16 + uVar29;
  }
  bVar6 = uVar29 != 0;
  lVar17 = 0;
  if (bVar6) {
    lVar17 = lVar16;
  }
  uVar20 = 0;
  if (bVar6) {
    uVar20 = uVar15;
  }
  lVar13 = 0;
  if (bVar6) {
    lVar13 = lVar22;
  }
  lVar22 = uVar28 + lVar17 * 0x20;
  lVar17 = uVar20 * 0x20 + lVar17 * -0x20;
  do {
    if (lVar17 == 0) {
      lVar13 = lVar13 << 5;
      uVar15 = uVar28;
      goto LAB_10120df18;
    }
    plVar14 = (long *)(lVar22 + 0x10);
    lVar22 = lVar22 + 0x20;
    lVar17 = lVar17 + -0x20;
  } while (*plVar14 == 0);
  goto LAB_10120df2c;
  while( true ) {
    plVar14 = (long *)(uVar15 + 0x10);
    uVar15 = uVar15 + 0x20;
    lVar13 = lVar13 + -0x20;
    if (*plVar14 != 0) break;
LAB_10120df18:
    if (lVar13 == 0) goto LAB_10120e1f8;
  }
LAB_10120df2c:
  if (uVar29 == 0) {
    pppppppuVar24 = (undefined8 *******)0x0;
    uVar26 = 1;
  }
  else {
    uVar26 = *(undefined8 *)(lVar18 + 8);
    pppppppuVar24 = *(undefined8 ********)(lVar18 + 0x10);
    if ((undefined8 *******)((long)ppppppuStack_110 - (long)ppppppuStack_118) < pppppppuVar24) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                (&ppppppuStack_120,pppppppuVar24,1);
    }
  }
  _memcpy((undefined *)((long)ppppppuStack_120 + (long)ppppppuStack_118),uVar26,pppppppuVar24);
  pppppppuVar9 = (undefined8 *******)((long)ppppppuStack_110 - (long)ppppppuStack_118);
  if (pppppppuVar9 < pppppppuVar24) goto LAB_10120e310;
  ppppppuStack_118 = (undefined8 ******)((long)ppppppuStack_118 + (long)pppppppuVar24);
  if (pppppppuVar24 != (undefined8 *******)0x0) goto LAB_10120dfb4;
  goto LAB_10120decc;
  while( true ) {
    *(undefined **)(lVar18 + 8) = (undefined *)(*(long *)(lVar18 + 8) + (long)pppppppuVar9);
    *(undefined8 *)(lVar18 + 0x10) = 0;
    uVar15 = 0;
    if (uVar11 <= uVar25 + 1) {
      uVar15 = uVar11;
    }
    uVar15 = (uVar25 + 1) - uVar15;
    uVar29 = uVar29 - 1;
    param_2[2] = uVar15;
    param_2[3] = uVar29;
    puVar1 = (undefined8 *)(uVar28 + uVar25 * 0x20);
    ppppppuStack_d8 = (undefined8 ******)puVar1[1];
    ppppppuStack_e0 = (undefined8 ******)*puVar1;
    ppppppuStack_c8 = (undefined8 ******)puVar1[3];
    ppppppuStack_d0 = (undefined8 ******)puVar1[2];
    if ((undefined8 *******)ppppppuStack_e0 != (undefined8 *******)0x0) {
      (*(code *)ppppppuStack_e0[4])(&ppppppuStack_c8,ppppppuStack_d8,ppppppuStack_d0);
    }
    pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 - (long)pppppppuVar9);
    uVar25 = uVar15;
    if (pppppppuVar24 == (undefined8 *******)0x0) break;
LAB_10120dfb4:
    if (uVar29 == 0) goto LAB_10120e2f0;
    uVar15 = 0;
    if (uVar11 <= uVar25) {
      uVar15 = uVar11;
    }
    lVar18 = uVar28 + (uVar25 - uVar15) * 0x20;
    pppppppuVar9 = *(undefined8 ********)(lVar18 + 0x10);
    if (pppppppuVar24 <= pppppppuVar9 && (long)pppppppuVar9 - (long)pppppppuVar24 != 0) {
      *(undefined **)(lVar18 + 8) = (undefined *)(*(long *)(lVar18 + 8) + (long)pppppppuVar24);
      *(long *)(lVar18 + 0x10) = (long)pppppppuVar9 - (long)pppppppuVar24;
      break;
    }
  }
  goto LAB_10120dea8;
LAB_10120e310:
  ppppppuStack_e0 = pppppppuVar24;
  ppppppuStack_d8 = pppppppuVar9;
  __ZN5bytes13panic_advance17h894eeb3b0f978370E();
  goto LAB_10120e384;
LAB_10120e2f0:
  func_0x000108a079f0(&UNK_108cc6190,0x14,&UNK_10b24be70);
  goto LAB_10120e384;
}

