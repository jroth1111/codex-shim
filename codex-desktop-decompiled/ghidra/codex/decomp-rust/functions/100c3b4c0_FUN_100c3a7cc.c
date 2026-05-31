
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3a7cc(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  code ****ppppcVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  code ******ppppppcVar14;
  ulong *puVar15;
  undefined *puVar16;
  undefined1 uVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  code *pcVar21;
  undefined **ppuVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  long *plVar27;
  code ******ppppppcVar28;
  code *****pppppcVar29;
  code *******pppppppcVar30;
  long lVar31;
  undefined8 uVar32;
  byte *pbVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 *puVar36;
  code *******pppppppcVar37;
  code *******pppppppcVar38;
  code *pcStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  code ***pppcStack_740;
  byte *pbStack_738;
  long *plStack_730;
  code *******pppppppcStack_728;
  code *******pppppppcStack_720;
  code *****pppppcStack_718;
  undefined *puStack_710;
  byte bStack_708;
  long lStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 uStack_6b8;
  code ******ppppppcStack_650;
  undefined *puStack_648;
  byte bStack_640;
  char cStack_63f;
  undefined6 uStack_63e;
  code *******pppppppcStack_638;
  code *******pppppppcStack_630;
  code *******pppppppcStack_628;
  code *******pppppppcStack_620;
  code *******pppppppcStack_618;
  code *******pppppppcStack_610;
  code *****pppppcStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  ulong uStack_5e8;
  undefined8 uStack_5e0;
  code *****pppppcStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  code *******pppppppcStack_5b8;
  code *******pppppppcStack_5b0;
  code *******pppppppcStack_5a8;
  code *******pppppppcStack_5a0;
  undefined8 uStack_598;
  ulong uStack_338;
  code *******pppppppcStack_330;
  code *******pppppppcStack_328;
  code ******ppppppcStack_320;
  code *******pppppppcStack_318;
  code *******pppppppcStack_310;
  code ******ppppppcStack_308;
  code ******ppppppcStack_300;
  code *******pppppppcStack_98;
  code ****appppcStack_90 [6];
  
  plVar9 = (long *)(*
                   ___ZN124__LT_tracing_subscriber__fmt__fmt_layer__Layer_LT_S_C_N_C_E_C_W_GT__u20_as_u20_tracing_subscriber__layer__Layer_LT_S_GT__GT_8on_event3BUF29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h4745684eeee36549E
                   )();
  if ((char)plVar9[4] != '\x01') {
    if ((char)plVar9[4] == '\x02') {
      func_0x000108a82a50(&UNK_10b234430);
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar9,&DAT_100c35cb8)
    ;
    *(undefined1 *)(plVar9 + 4) = 1;
  }
  plVar3 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  pppppppcVar13 = (code *******)param_1[2];
  pppppppcVar30 = (code *******)param_1[3];
  lVar35 = *plVar9;
  if (lVar35 == 0) {
    pppcStack_740 = (code ***)(plVar9 + 1);
    *plVar9 = -1;
  }
  else {
    pcStack_758 = (code *)0x0;
    uStack_750 = 1;
    uStack_748 = 0;
    pppcStack_740 = (code ***)&pcStack_758;
  }
  pbVar33 = (byte *)*plVar3;
  plVar27 = (long *)*plVar4;
  pbStack_738 = pbVar33 + 0xf;
  bStack_708 = pbVar33[0xd];
  pppppcStack_718 = (code *****)&pppcStack_740;
  puStack_710 = &UNK_10b21f480;
  lStack_6e0 = 0;
  uStack_6d8 = 1;
  uStack_6d0 = 0;
  plStack_730 = plVar27;
  pppppppcStack_728 = pppppppcVar13;
  pppppppcStack_720 = pppppppcVar30;
  func_0x000106032954(0);
  __ZN118__LT_tracing_subscriber__fmt__time__datetime__DateTime_u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h6ba2bb1fcbf08e0aE
            (&uStack_5c0);
  pppppppcStack_318 =
       (code *******)
       &
       __ZN88__LT_tracing_subscriber__fmt__time__datetime__DateTime_u20_as_u20_core__fmt__Display_GT_3fmt17h3a05e7b426f8e9e3E
  ;
  ppppppcStack_320 = (code ******)&uStack_5c0;
  uVar10 = __ZN4core3fmt5write17h64810b21425781ecE
                     (&lStack_6e0,&UNK_10b209290,s__108b3a14c,&ppppppcStack_320);
  if ((uVar10 & 1) == 0) {
    __ZN74__LT_tracing_core__event__Event_u20_as_u20_tracing_log__NormalizeEvent_GT_19normalized_metadata17h25a909bcf9eb4956E
              (&puStack_6c8,plVar27);
    puVar16 = puStack_6c8;
    ppuVar22 = (undefined **)plVar27[3];
    ppuVar2 = ppuVar22;
    if (puStack_6c8 != (undefined *)0x5) {
      ppuVar2 = &puStack_6c8;
    }
    ppppppcStack_650 = &pppppcStack_718;
    puStack_648 = &UNK_10b21daa8;
    lVar11 = FUN_100c34858(&pppppcStack_718,&UNK_10b21daa8,&UNK_108ca7634,1);
    if (lVar11 != 0) goto LAB_100c3a9e8;
    bStack_640 = 0;
    cStack_63f = '\x01';
    pppppppcStack_638 = &ppppppcStack_650;
    if (((pbVar33[3] & 1) != 0) &&
       (pppppppcVar12 =
             (code *******)FUN_100634c0c(&bStack_640,&UNK_108cafcb3,9,uStack_6d8,uStack_6d0),
       pppppppcVar12 != (code *******)0x0)) {
LAB_100c3b21c:
      if (*pppppppcVar12 == (code ******)0x1) {
        ppppppcVar14 = pppppppcVar12[1];
        if (((ulong)ppppppcVar14 & 3) == 1) {
          ppppppcVar28 = (code ******)((long)ppppppcVar14 + -1);
          pppppcVar29 = *ppppppcVar28;
          puVar20 = *(undefined8 **)((long)ppppppcVar14 + 7);
          pcVar21 = (code *)*puVar20;
          if (pcVar21 != (code *)0x0) {
            (*pcVar21)(pppppcVar29);
          }
          if (puVar20[1] != 0) {
            _free(pppppcVar29);
          }
          goto LAB_100c3b238;
        }
      }
      else if ((*pppppppcVar12 == (code ******)0x0) && (pppppppcVar12[2] != (code ******)0x0)) {
        ppppppcVar28 = pppppppcVar12[1];
LAB_100c3b238:
        _free(ppppppcVar28);
      }
      _free(pppppppcVar12);
      goto LAB_100c3b25c;
    }
    pppppppcVar12 = pppppppcStack_638;
    if ((pbVar33[5] & 1) != 0) {
      if (bStack_640 == 1) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
        goto LAB_100c3be5c;
      }
      if ((cStack_63f == '\x01') ||
         (lVar11 = FUN_100c34858(*pppppppcStack_638,pppppppcStack_638[1],&UNK_108ca7635,1),
         lVar11 == 0)) {
        cStack_63f = '\x02';
        lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
        if ((lVar11 == 0) &&
           (((lVar11 = func_0x0001006571a0(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca13ad,5),
             lVar11 == 0 &&
             (lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1), lVar11 == 0)
             ) && (lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7636,1),
                  lVar11 == 0)))) {
          puVar34 = *ppuVar2;
          lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
          if ((long)puVar34 < 3) {
            if (puVar34 == (undefined *)0x1) {
              if ((lVar11 == 0) &&
                 (lVar11 = func_0x0001006571a0(*pppppppcVar12,pppppppcVar12[1],&UNK_108caaba3,5),
                 lVar11 == 0)) {
                lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
                goto LAB_100c3ab5c;
              }
            }
            else if (puVar34 == (undefined *)0x2) {
              if ((lVar11 == 0) &&
                 (lVar11 = func_0x0001006571a0(*pppppppcVar12,pppppppcVar12[1],&UNK_108cde390,4),
                 lVar11 == 0)) {
                lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
                goto LAB_100c3ab5c;
              }
            }
            else if ((lVar11 == 0) &&
                    (lVar11 = func_0x0001006571a0(*pppppppcVar12,pppppppcVar12[1],&UNK_108caab9e,5),
                    lVar11 == 0)) {
              lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
              goto LAB_100c3ab5c;
            }
          }
          else if (puVar34 == (undefined *)0x3) {
            if ((lVar11 == 0) &&
               (lVar11 = func_0x0001006571a0(*pppppppcVar12,pppppppcVar12[1],&UNK_108cde394,4),
               lVar11 == 0)) {
              lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
LAB_100c3ab5c:
              if (lVar11 == 0) goto LAB_100c3ab60;
            }
          }
          else if ((lVar11 == 0) &&
                  (lVar11 = func_0x0001006571a0(*pppppppcVar12,pppppppcVar12[1],&UNK_108caaba8,5),
                  lVar11 == 0)) {
            lVar11 = FUN_100c34858(*pppppppcVar12,pppppppcVar12[1],&UNK_108ca7632,1);
            goto LAB_100c3ab5c;
          }
        }
      }
LAB_100c3a9e8:
      pppppppcVar12 = (code *******)func_0x000108a4a084();
      goto LAB_100c3b21c;
    }
LAB_100c3ab60:
    bVar6 = pbVar33[1];
    if (((bVar6 & 1) == 0) && ((pbVar33[2] & 1) == 0)) {
      pppppppcStack_630 = (code *******)0x0;
      bVar7 = *pbVar33;
joined_r0x000100c3b148:
      if ((bVar7 & 1) != 0) goto LAB_100c3acd0;
LAB_100c3ab84:
      pppppppcVar13 = pppppppcStack_638;
      if ((bStack_640 & 1) == 0) {
        if ((cStack_63f != '\x01') &&
           (lVar11 = FUN_100c34858(*pppppppcStack_638,pppppppcStack_638[1],&UNK_108ca7635,1),
           lVar11 != 0)) goto LAB_100c3abec;
        cStack_63f = '\x02';
        lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7632,1);
        if ((lVar11 != 0) ||
           (((lVar11 = func_0x0001006571a0(*pppppppcVar13,pppppppcVar13[1],&UNK_108cb6c91,6),
             lVar11 != 0 ||
             (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7632,1), lVar11 != 0)
             ) || (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7636,1),
                  lVar11 != 0)))) goto LAB_100c3abec;
        lVar19 = plVar27[2];
        lVar31 = *(long *)(*(long *)(lVar19 + 0x18) + 8);
        lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7634,1);
        if (lVar11 != 0) goto LAB_100c3abec;
        if (lVar31 == 0) {
          lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca2104,1);
          if (lVar11 != 0) goto LAB_100c3abec;
          uVar17 = 0;
        }
        else {
          uVar17 = 1;
        }
        uStack_5c0 = (code *******)((ulong)CONCAT61((int6)((ulong)uStack_5c0 >> 0x10),uVar17) << 8);
        pppppppcStack_5b8 = pppppppcVar13;
        pppppppcStack_5b0 = (code *******)0x0;
        __ZN12tracing_core5field8ValueSet6record17h5b1730d85b4628a6E
                  (lVar19,&uStack_5c0,&UNK_10b21f048);
        pppppppcVar12 = pppppppcStack_5b0;
        if (pppppppcStack_5b0 != (code *******)0x0) goto LAB_100c3b194;
        if (((ulong)uStack_5c0 & 1) == 0) {
          if ((uStack_5c0._1_1_ != '\0') &&
             (lVar11 = FUN_100c34858(*pppppppcStack_5b8,pppppppcStack_5b8[1],&UNK_108ca2104,1),
             lVar11 != 0)) {
            pppppppcVar12 = (code *******)func_0x000108a4a084();
            goto LAB_100c3b194;
          }
          goto LAB_100c3ae1c;
        }
        puVar16 = &UNK_10b24d418;
      }
      else {
LAB_100c3b9f8:
        puVar16 = &UNK_10b24d3e8;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar16);
      goto LAB_100c3be5c;
    }
    if ((*plVar27 == 2) &&
       ((pppppppcVar13 != (code *******)0x0 &&
        (FUN_1061db950(&uStack_5c0,pppppppcVar13,plVar27[1]), pppppppcVar37 = pppppppcStack_5b0,
        pppppppcVar12 = uStack_5c0, uStack_5c0 != (code *******)0x0)))) {
      if (((ulong)uStack_5c0[1] & (ulong)pppppppcVar30) == 0) {
        pppppppcStack_5b0 = pppppppcStack_5b8;
        pppppppcStack_5a8 = pppppppcVar37;
        uStack_5c0 = pppppppcVar13;
        pppppppcStack_5b8 = pppppppcVar12;
        pppppppcStack_5a0 = pppppppcVar30;
      }
      else {
        uStack_5c0 = (code *******)0x0;
        ppppppcVar14 = pppppppcVar12[10];
        do {
          while( true ) {
            if (((ulong)ppppppcVar14 & 3) == 2) {
              pppppcStack_600 = (code *****)0x2;
              ppppppcStack_320 = &pppppcStack_600;
              ppppppcVar14 = (code ******)&ppppppcStack_320;
              goto LAB_100c3b680;
            }
            uVar10 = (ulong)ppppppcVar14 >> 2;
            if ((((ulong)ppppppcVar14 & 3) != 1) || ((uVar10 & 0x1ffffffffffff) != 1)) break;
            uVar10 = (ulong)ppppppcVar14 & 0xfff8000000000000;
            ppppppcVar28 = pppppppcVar12[10];
            bVar18 = ppppppcVar28 == ppppppcVar14;
            ppppppcVar14 = ppppppcVar28;
            if (bVar18) {
              pppppppcVar12[10] = (code ******)(uVar10 | 3);
              FUN_10074fd94();
              goto LAB_100c3aca8;
            }
          }
          uVar26 = (ulong)ppppppcVar14 & 0xfff8000000000003;
          ppppppcVar28 = pppppppcVar12[10];
          bVar18 = ppppppcVar28 != ppppppcVar14;
          ppppppcVar14 = ppppppcVar28;
        } while (bVar18);
        pppppppcVar12[10] = (code ******)((uVar10 & 0xc001ffffffffffff) * 4 - 4 | uVar26);
LAB_100c3aca8:
        if (uStack_5c0 == (code *******)0x0) goto LAB_100c3acb8;
      }
      pppppppcStack_628 = pppppppcStack_5b8;
      pppppppcStack_630 = uStack_5c0;
      pppppppcStack_618 = pppppppcStack_5a8;
      pppppppcStack_620 = pppppppcStack_5b0;
      pppppppcStack_610 = pppppppcStack_5a0;
      bVar7 = *pbVar33;
      goto joined_r0x000100c3b148;
    }
    uStack_5c0 = (code *******)0x0;
LAB_100c3acb8:
    func_0x000100a89748(&pppppppcStack_630,&pppppppcStack_728);
    if ((*pbVar33 & 1) == 0) goto LAB_100c3ab84;
LAB_100c3acd0:
    pppppppcStack_318 = pppppppcStack_638;
    ppppppcStack_320 = (code ******)CONCAT62(uStack_63e,CONCAT11(cStack_63f,bStack_640));
    pppppppcStack_310 = (code *******)0x0;
    piVar25 = (int *)plVar27[2];
    lVar11 = *(long *)(piVar25 + 4);
    puVar20 = *(undefined8 **)(piVar25 + 6);
    if (*piVar25 == 1) {
      pppppppcVar13 = (code *******)puVar20[1];
      if (pppppppcVar13 != (code *******)0x0) {
        pppppppcVar30 = (code *******)0x0;
        pppppppcVar12 = (code *******)*puVar20;
        pppppppcVar38 = (code *******)puVar20[3];
        pppppppcVar37 = (code *******)puVar20[2];
        plVar27 = (long *)(*(long *)(piVar25 + 2) + 8);
        lVar11 = lVar11 << 4;
        do {
          if (lVar11 == 0) break;
          uStack_5c0 = pppppppcVar12;
          pppppppcStack_5b8 = pppppppcVar13;
          pppppppcStack_5a8 = pppppppcVar38;
          pppppppcStack_5b0 = pppppppcVar37;
          pppppppcStack_5a0 = pppppppcVar30;
          if (plVar27[-1] != 0) {
            (**(code **)(*plVar27 + 0x18))(plVar27[-1],&uStack_5c0,&ppppppcStack_320,&UNK_10b21f048)
            ;
          }
          pppppppcVar30 = (code *******)((long)pppppppcVar30 + 1);
          plVar27 = plVar27 + 2;
          lVar11 = lVar11 + -0x10;
        } while (pppppppcVar13 != pppppppcVar30);
      }
    }
    else if (lVar11 != 0) {
      lVar19 = puVar20[2];
      lVar11 = lVar11 * 0x18;
      plVar27 = (long *)(*(long *)(piVar25 + 2) + 0x10);
      do {
        if ((*(long *)(plVar27[-2] + 0x10) == lVar19) && (plVar27[-1] != 0)) {
          (**(code **)(*plVar27 + 0x18))(plVar27[-1],plVar27[-2],&ppppppcStack_320,&UNK_10b21f048);
        }
        plVar27 = plVar27 + 3;
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != 0);
    }
    pppppppcVar12 = pppppppcStack_310;
    if ((pppppppcStack_310 == (code *******)0x0) &&
       (pppppppcVar12 = pppppppcStack_318, (byte)ppppppcStack_320 != 2)) {
      *(undefined4 *)((ulong)&bStack_640 | 1) = *(undefined4 *)((ulong)&ppppppcStack_320 | 1);
      *(undefined4 *)((long)((ulong)&bStack_640 | 1) + 3) =
           *(undefined4 *)((long)((ulong)&ppppppcStack_320 | 1) + 3);
      bStack_640 = (byte)ppppppcStack_320;
      pppppppcStack_638 = pppppppcStack_318;
LAB_100c3ae1c:
      if ((pbVar33[4] & 1) != 0) {
        ppuVar2 = ppuVar22;
        if (puVar16 != (undefined *)0x5) {
          ppuVar2 = &puStack_6c8;
        }
        pppppppcVar12 =
             (code *******)FUN_10063e1a0(&bStack_640,&UNK_108caabad,6,ppuVar2[4],ppuVar2[5]);
        if (pppppppcVar12 != (code *******)0x0) goto LAB_100c3b194;
      }
      if ((pbVar33[8] & 1) != 0) {
        ppuVar2 = ppuVar22;
        if (puVar16 != (undefined *)0x5) {
          ppuVar2 = &puStack_6c8;
        }
        if (ppuVar2[0xc] != (undefined *)0x0) {
          ppuVar1 = ppuVar22;
          if (puVar16 != (undefined *)0x5) {
            ppuVar1 = &puStack_6c8;
          }
          pppppppcVar12 =
               (code *******)FUN_10063e1a0(&bStack_640,&UNK_108c98418,8,ppuVar2[0xc],ppuVar1[0xd]);
          if (pppppppcVar12 != (code *******)0x0) goto LAB_100c3b194;
        }
      }
      if ((pbVar33[9] & 1) != 0) {
        ppuVar2 = ppuVar22;
        if (puVar16 != (undefined *)0x5) {
          ppuVar2 = &puStack_6c8;
        }
        if (*(int *)(ppuVar2 + 1) == 1) {
          if (puVar16 != (undefined *)0x5) {
            ppuVar22 = &puStack_6c8;
          }
          pppppppcVar12 =
               (code *******)FUN_10063be70(&bStack_640,*(undefined4 *)((long)ppuVar22 + 0xc));
          if (pppppppcVar12 != (code *******)0x0) goto LAB_100c3b194;
        }
      }
      pppppppcVar30 = pppppppcStack_630;
      pppppppcVar13 = pppppppcStack_638;
      if ((bVar6 != 0) && (pppppppcStack_630 != (code *******)0x0)) {
        if ((bStack_640 & 1) != 0) goto LAB_100c3b9f8;
        if ((cStack_63f == '\x01') ||
           (lVar11 = FUN_100c34858(*pppppppcStack_638,pppppppcStack_638[1],&UNK_108ca7635,1),
           lVar11 == 0)) {
          cStack_63f = '\x02';
          lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7632,1);
          if ((lVar11 != 0) ||
             (((lVar11 = func_0x0001006571a0(*pppppppcVar13,pppppppcVar13[1],&UNK_108c7251c,4),
               lVar11 != 0 ||
               (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7632,1),
               lVar11 != 0)) ||
              (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7636,1), lVar11 != 0
              )))) goto LAB_100c3af5c;
          lVar11 = FUN_1006c5884(pppppppcStack_628,pppppppcVar13);
          if (lVar11 == 0) goto LAB_100c3af64;
        }
        else {
LAB_100c3af5c:
          func_0x000108a4a084();
        }
        FUN_100c9ecc4();
      }
LAB_100c3af64:
      pppppppcVar13 = pppppppcStack_638;
      if ((pbVar33[2] == 1) && (pppppppcVar30 != (code *******)0x0)) {
        if (bStack_640 == 1) goto LAB_100c3b9f8;
        if ((cStack_63f == '\x01') ||
           (lVar11 = FUN_100c34858(*pppppppcStack_638,pppppppcStack_638[1],&UNK_108ca7635,1),
           lVar11 == 0)) {
          cStack_63f = '\x02';
          lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7632,1);
          if ((lVar11 == 0) &&
             ((((lVar11 = func_0x0001006571a0(*pppppppcVar13,pppppppcVar13[1],&UNK_108cb6ca2,5),
                lVar11 == 0 &&
                (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7632,1),
                lVar11 == 0)) &&
               (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7636,1),
               lVar11 == 0)) &&
              (lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7633,1), lVar11 == 0
              )))) {
            func_0x000100a89748(&pppppcStack_600,&pppppppcStack_728);
            lVar11 = lStack_5f8;
            if (pppppcStack_600 != (code *****)0x0) {
              if (0xfffffffffffffffe < uStack_5e8) {
                func_0x000108a079f0(&UNK_109bf510e,0x14,&UNK_10b4d73e0);
                goto LAB_100c3be5c;
              }
              pppppcStack_5d8 = pppppcStack_600;
              uStack_5c8 = uStack_5e0;
              puStack_5d0 = (undefined *)(uStack_5e8 + 1);
              FUN_10075f820(&ppppppcStack_320,&pppppcStack_5d8);
              pppppppcStack_328 = pppppppcStack_318;
              if (pppppppcStack_98 < (code *******)0x11) {
                pppppppcStack_328 = pppppppcStack_98;
              }
              lVar19 = 8;
              if (pppppppcStack_98 < (code *******)0x11) {
                lVar19 = 0x288;
              }
              *(undefined8 *)((long)&ppppppcStack_320 + lVar19) = 0;
              _memcpy(&uStack_5c0,&ppppppcStack_320,0x290);
              pppppppcStack_330 = (code *******)0x0;
              if (pppppppcStack_328 != (code *******)0x0) {
                bVar18 = true;
                do {
                  pppppppcStack_328 = (code *******)((long)pppppppcStack_328 + -1);
                  pppppppcVar30 = (code *******)&pppppppcStack_5b8;
                  if (0x10 < uStack_338) {
                    pppppppcVar30 = pppppppcStack_5b0;
                  }
                  pppppppcVar30 = pppppppcVar30 + (long)pppppppcStack_328 * 5;
                  pppppppcStack_318 = (code *******)pppppppcVar30[1];
                  ppppppcStack_320 = *pppppppcVar30;
                  ppppppcStack_308 = pppppppcVar30[3];
                  pppppppcStack_310 = (code *******)pppppppcVar30[2];
                  ppppppcStack_300 = pppppppcVar30[4];
                  if ((!bVar18) &&
                     (lVar19 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7635,1),
                     lVar19 != 0)) {
                    pppppppcVar12 = (code *******)func_0x000108a4a084();
                    pppppppcVar30 = pppppppcStack_318;
LAB_100c3ba2c:
                    ppppppcVar14 = pppppppcVar30[10];
                    goto LAB_100c3ba5c;
                  }
                  pppppppcVar30 = pppppppcStack_318;
                  pppppppcVar12 = (code *******)FUN_1006c5884(pppppppcStack_318,pppppppcVar13);
                  if (pppppppcVar12 != (code *******)0x0) goto LAB_100c3ba2c;
                  ppppppcVar14 = pppppppcVar30[10];
                  do {
                    while( true ) {
                      if (((ulong)ppppppcVar14 & 3) == 2) goto LAB_100c3bb74;
                      uVar10 = (ulong)ppppppcVar14 >> 2;
                      if ((((ulong)ppppppcVar14 & 3) != 1) || ((uVar10 & 0x1ffffffffffff) != 1))
                      break;
                      uVar10 = (ulong)ppppppcVar14 & 0xfff8000000000000;
                      ppppppcVar28 = pppppppcVar30[10];
                      bVar18 = ppppppcVar28 == ppppppcVar14;
                      ppppppcVar14 = ppppppcVar28;
                      if (bVar18) {
                        pppppppcVar30[10] = (code ******)(uVar10 | 3);
                        FUN_10074fd94(pppppppcStack_310,ppppppcStack_308);
                        goto LAB_100c3b568;
                      }
                    }
                    uVar26 = (ulong)ppppppcVar14 & 0xfff8000000000003;
                    ppppppcVar28 = pppppppcVar30[10];
                    bVar18 = ppppppcVar28 != ppppppcVar14;
                    ppppppcVar14 = ppppppcVar28;
                  } while (bVar18);
                  pppppppcVar30[10] = (code ******)((uVar10 & 0xc001ffffffffffff) * 4 - 4 | uVar26);
LAB_100c3b568:
                  bVar18 = false;
                } while (pppppppcStack_330 != pppppppcStack_328);
              }
              FUN_100ce3914(&uStack_5c0);
              uVar10 = *(ulong *)(lVar11 + 0x50);
              do {
                while( true ) {
                  if ((uVar10 & 3) == 2) goto LAB_100c3bac4;
                  uVar26 = uVar10 >> 2;
                  if (((uVar10 & 3) != 1) || ((uVar26 & 0x1ffffffffffff) != 1)) break;
                  uVar24 = uVar10 & 0xfff8000000000000;
                  uVar26 = *(ulong *)(lVar11 + 0x50);
                  bVar18 = uVar26 == uVar10;
                  uVar10 = uVar26;
                  if (bVar18) {
                    *(ulong *)(lVar11 + 0x50) = uVar24 | 3;
                    FUN_10074fd94(uStack_5f0,uStack_5e8);
                    goto LAB_100c3b778;
                  }
                }
                uVar23 = uVar10 & 0xfff8000000000003;
                uVar24 = *(ulong *)(lVar11 + 0x50);
                bVar18 = uVar24 != uVar10;
                uVar10 = uVar24;
              } while (bVar18);
              *(ulong *)(lVar11 + 0x50) = (uVar26 & 0xc001ffffffffffff) * 4 - 4 | uVar23;
            }
LAB_100c3b778:
            lVar11 = FUN_100c34858(*pppppppcVar13,pppppppcVar13[1],&UNK_108ca7637,1);
            if (lVar11 == 0) goto LAB_100c3b790;
          }
        }
LAB_100c3abec:
        pppppppcVar12 = (code *******)func_0x000108a4a084();
        goto LAB_100c3b194;
      }
LAB_100c3b790:
      if ((pbVar33[7] & 1) != 0) {
        puVar15 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
        if (*puVar15 < 3) {
          pppppcVar29 = (code *****)func_0x000108a82aa8();
        }
        else {
          pppppcVar29 = (code *****)(*puVar15 - 0x10);
          ppppcVar8 = *pppppcVar29;
          *pppppcVar29 = (code ****)((long)ppppcVar8 + 1);
          if ((long)ppppcVar8 < 0) goto LAB_100c3be5c;
        }
        ppppcVar8 = pppppcVar29[3];
        pppppcStack_5d8 = pppppcVar29;
        if (ppppcVar8 == (code ****)0x0) {
          if ((ppppcRam000000010b66fea8 != (code ****)0x0) &&
             (ppppcRam000000010b66fea8 == pppppcVar29[2])) {
            ppppcVar8 = (code ****)&UNK_109bd66e6;
            lVar11 = 4;
            goto LAB_100c3b7d8;
          }
          if ((pbVar33[6] & 1) != 0) goto LAB_100c3b848;
          pppppcStack_600 = (code *****)pppppcVar29[2];
          ppppppcStack_320 = &pppppcStack_600;
          pppppppcStack_318 = (code *******)&DAT_10112a92c;
          FUN_100f3f484(&uStack_5c0,s__108b1bd74,&ppppppcStack_320);
          pppppppcVar30 = pppppppcStack_5b8;
          pppppppcVar13 = uStack_5c0;
          pppppppcVar12 =
               (code *******)
               FUN_100634c0c(&bStack_640,&UNK_108cb6ca7,10,pppppppcStack_5b8,pppppppcStack_5b0);
          if (pppppppcVar12 == (code *******)0x0) {
            if (pppppppcVar13 != (code *******)0x0) {
              _free(pppppppcVar30);
            }
            goto LAB_100c3b848;
          }
          if (pppppppcVar13 != (code *******)0x0) {
            _free(pppppppcVar30);
          }
        }
        else {
          lVar11 = (long)pppppcVar29[4] + -1;
LAB_100c3b7d8:
          pppppppcVar12 =
               (code *******)FUN_10063e1a0(&bStack_640,&UNK_108cb6ca7,10,ppppcVar8,lVar11);
          if (pppppppcVar12 == (code *******)0x0) {
LAB_100c3b848:
            ppppcVar8 = *pppppcStack_5d8;
            *pppppcStack_5d8 = (code ****)((long)ppppcVar8 + -1);
            LORelease();
            if (ppppcVar8 == (code ****)0x1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&pppppcStack_5d8);
            }
            goto LAB_100c3b868;
          }
        }
        ppppcVar8 = *pppppcStack_5d8;
        *pppppcStack_5d8 = (code ****)((long)ppppcVar8 + -1);
        LORelease();
        if (ppppcVar8 == (code ****)0x1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&pppppcStack_5d8);
        }
        goto LAB_100c3b194;
      }
LAB_100c3b868:
      if ((pbVar33[6] & 1) != 0) {
        puVar15 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
        if (*puVar15 < 3) {
          pppppcVar29 = (code *****)func_0x000108a82aa8();
        }
        else {
          pppppcVar29 = (code *****)(*puVar15 - 0x10);
          ppppcVar8 = *pppppcVar29;
          *pppppcVar29 = (code ****)((long)ppppcVar8 + 1);
          if ((long)ppppcVar8 < 0) goto LAB_100c3be5c;
        }
        pppppcStack_5d8 = (code *****)pppppcVar29[2];
        ppppppcStack_320 = &pppppcStack_5d8;
        pppppppcStack_318 = (code *******)&DAT_10112a92c;
        pppppcStack_600 = pppppcVar29;
        FUN_100f3f484(&uStack_5c0,s__108b1bd74,&ppppppcStack_320);
        ppppcVar8 = *pppppcStack_600;
        *pppppcStack_600 = (code ****)((long)ppppcVar8 + -1);
        LORelease();
        if (ppppcVar8 == (code ****)0x1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&pppppcStack_600);
        }
        pppppppcVar30 = pppppppcStack_5b8;
        pppppppcVar13 = uStack_5c0;
        pppppppcVar12 =
             (code *******)
             FUN_100634c0c(&bStack_640,&UNK_108c982f8,8,pppppppcStack_5b8,pppppppcStack_5b0);
        if (pppppppcVar12 != (code *******)0x0) {
          if (pppppppcVar13 != (code *******)0x0) {
            _free(pppppppcVar30);
          }
          goto LAB_100c3b194;
        }
        if (pppppppcVar13 != (code *******)0x0) {
          _free(pppppppcVar30);
        }
      }
      pppppppcVar12 = (code *******)FUN_1013feb6c(&bStack_640);
      func_0x000100cbb8f8(&pppppppcStack_630);
    }
    else {
LAB_100c3b194:
      if (pppppppcStack_630 != (code *******)0x0) {
        ppppppcVar14 = pppppppcStack_628[10];
LAB_100c3b1d0:
        do {
          if (((ulong)ppppppcVar14 & 3) == 2) {
            ppppppcStack_320 = (code ******)0x2;
            uStack_5c0 = &ppppppcStack_320;
            ppppppcVar14 = (code ******)&uStack_5c0;
LAB_100c3b680:
            ppppppcVar14[1] =
                 (code *****)
                 &
                 __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
            ;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (&UNK_108cd640b,ppppppcVar14,&UNK_10b24e120);
            goto LAB_100c3be5c;
          }
          uVar10 = (ulong)ppppppcVar14 >> 2;
          if ((((ulong)ppppppcVar14 & 3) != 1) || ((uVar10 & 0x1ffffffffffff) != 1)) {
            uVar26 = (ulong)ppppppcVar14 & 0xfff8000000000003;
            ppppppcVar28 = pppppppcStack_628[10];
            bVar18 = ppppppcVar28 == ppppppcVar14;
            ppppppcVar14 = ppppppcVar28;
            if (bVar18) {
              pppppppcStack_628[10] = (code ******)((uVar10 & 0xc001ffffffffffff) * 4 - 4 | uVar26);
              goto LAB_100c3b218;
            }
            goto LAB_100c3b1d0;
          }
          uVar10 = (ulong)ppppppcVar14 & 0xfff8000000000000;
          ppppppcVar28 = pppppppcStack_628[10];
          bVar18 = ppppppcVar28 != ppppppcVar14;
          ppppppcVar14 = ppppppcVar28;
        } while (bVar18);
        pppppppcStack_628[10] = (code ******)(uVar10 | 3);
        FUN_10074fd94(pppppppcStack_620,pppppppcStack_618);
      }
    }
LAB_100c3b218:
    if (pppppppcVar12 != (code *******)0x0) goto LAB_100c3b21c;
    uVar10 = (**(code **)(puStack_710 + 0x28))(pppppcStack_718,&UNK_108ca14f4,3);
    if (lStack_6e0 != 0) {
      _free(uStack_6d8);
      if ((uVar10 & 1) == 0) goto LAB_100c3b47c;
      goto LAB_100c3b26c;
    }
    if ((uVar10 & 1) != 0) goto LAB_100c3b26c;
LAB_100c3b47c:
    puStack_6c8 = &__ZN3std2io5stdio6stderr8INSTANCE17h9bc2bcb3c698da4fE;
    ppppppcVar14 = (code ******)
                   __ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_all17h3b7fb2238972a74fE
                             (&puStack_6c8,pppcStack_740[1],pppcStack_740[2]);
    if ((ppppppcVar14 == (code ******)0x0) || ((*(byte *)(*plVar3 + 0xe) & 1) == 0)) {
      if (((ulong)ppppppcVar14 & 3) != 1) goto LAB_100c3b38c;
      puVar20 = (undefined8 *)((long)ppppppcVar14 + -1);
      uVar32 = *puVar20;
      puVar36 = *(undefined8 **)((long)ppppppcVar14 + 7);
      if ((code *)*puVar36 != (code *)0x0) {
        (*(code *)*puVar36)(uVar32);
      }
    }
    else {
      uStack_5c0 = &ppppppcStack_320;
      pppppppcStack_5b8 =
           (code *******)
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      ppppppcStack_320 = ppppppcVar14;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_X_tracing_subscriber__Unable_to_w_108ac53ba,&uStack_5c0);
      if (((ulong)ppppppcStack_320 & 3) != 1) goto LAB_100c3b38c;
      puVar20 = (undefined8 *)((long)ppppppcStack_320 + -1);
      uVar32 = *puVar20;
      puVar36 = *(undefined8 **)((long)ppppppcStack_320 + 7);
      if ((code *)*puVar36 != (code *)0x0) {
        (*(code *)*puVar36)(uVar32);
      }
    }
    if (puVar36[1] != 0) {
      _free(uVar32);
    }
  }
  else {
LAB_100c3b25c:
    if (lStack_6e0 != 0) {
      _free(uStack_6d8);
    }
LAB_100c3b26c:
    if (*(char *)(*plVar3 + 0xe) != '\x01') goto LAB_100c3b38c;
    lVar19 = *plVar4;
    lVar11 = *(long *)(lVar19 + 0x18);
    pppppcStack_600 = *(code ******)(lVar11 + 0x10);
    lStack_5f8 = *(long *)(lVar11 + 0x18);
    puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x10) + 0x18);
    uStack_598 = puVar20[1];
    pppppppcStack_5b8 = (code *******)puVar20[1];
    uStack_5c0 = (code *******)*puVar20;
    pppppppcStack_5a8 = (code *******)puVar20[3];
    pppppppcStack_5b0 = (code *******)puVar20[2];
    pppppppcStack_5a0 = (code *******)0x0;
    ppppppcStack_320 = &pppppcStack_600;
    pppppppcStack_318 = (code *******)&DAT_100c7b3a0;
    pppppppcStack_310 = (code *******)&uStack_5c0;
    ppppppcStack_308 = (code ******)&DAT_10112aa58;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&puStack_6c8,s__Unable_to_format_the_following_e_108ac530c,&ppppppcStack_320);
    puVar16 = puStack_6c8;
    puStack_6c8 = &__ZN3std2io5stdio6stderr8INSTANCE17h9bc2bcb3c698da4fE;
    pppppppcVar13 = (code *******)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(&puStack_6c8);
    uStack_5c0 = pppppppcVar13;
    ppppppcVar14 = (code ******)
                   __ZN61__LT_std__io__stdio__StderrLock_u20_as_u20_std__io__Write_GT_9write_all17hcd53a22350fbe292E
                             (&uStack_5c0,puStack_6c0,uStack_6b8);
    iVar5 = *(int *)(pppppppcVar13 + 2);
    *(int *)(pppppppcVar13 + 2) = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      pppppppcVar13[1] = (code ******)0x0;
      _pthread_mutex_unlock(*pppppppcVar13);
    }
    if (ppppppcVar14 != (code ******)0x0) {
      uStack_5c0 = &ppppppcStack_320;
      pppppppcStack_5b8 =
           (code *******)
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      ppppppcStack_320 = ppppppcVar14;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_k_tracing_subscriber__Unable_to_w_108ac5349,&uStack_5c0);
      if (((ulong)ppppppcStack_320 & 3) == 1) {
        puVar20 = (undefined8 *)((long)ppppppcStack_320 + -1);
        uVar32 = *puVar20;
        puVar36 = *(undefined8 **)((long)ppppppcStack_320 + 7);
        pcVar21 = (code *)*puVar36;
        if (pcVar21 != (code *)0x0) {
          (*pcVar21)(uVar32);
        }
        if (puVar36[1] != 0) {
          _free(uVar32);
        }
        _free(puVar20);
      }
    }
    puVar20 = puStack_6c0;
    if (puVar16 == (undefined *)0x0) goto LAB_100c3b38c;
  }
  _free(puVar20);
LAB_100c3b38c:
  pppcStack_740[2] = (code **)0x0;
  if (lVar35 == 0) {
    *plVar9 = *plVar9 + 1;
  }
  else if (pcStack_758 != (code *)0x0) {
    _free(uStack_750);
  }
  return;
  while( true ) {
    uVar10 = (ulong)ppppppcVar14 & 0xfff8000000000000;
    ppppppcVar28 = pppppppcVar30[10];
    bVar18 = ppppppcVar28 == ppppppcVar14;
    ppppppcVar14 = ppppppcVar28;
    if (bVar18) break;
LAB_100c3ba5c:
    if (((ulong)ppppppcVar14 & 3) == 2) goto LAB_100c3bb74;
    uVar10 = (ulong)ppppppcVar14 >> 2;
    if ((((ulong)ppppppcVar14 & 3) != 1) || ((uVar10 & 0x1ffffffffffff) != 1)) {
      uVar26 = (ulong)ppppppcVar14 & 0xfff8000000000003;
      ppppppcVar28 = pppppppcVar30[10];
      bVar18 = ppppppcVar28 == ppppppcVar14;
      ppppppcVar14 = ppppppcVar28;
      if (bVar18) {
        pppppppcVar30[10] = (code ******)((uVar10 & 0xc001ffffffffffff) * 4 - 4 | uVar26);
        goto LAB_100c3baa8;
      }
      goto LAB_100c3ba5c;
    }
  }
  pppppppcVar30[10] = (code ******)(uVar10 | 3);
  FUN_10074fd94(pppppppcStack_310,ppppppcStack_308);
LAB_100c3baa8:
  FUN_100ce3914(&uStack_5c0);
  uVar10 = *(ulong *)(lVar11 + 0x50);
  do {
    while( true ) {
      if ((uVar10 & 3) == 2) goto LAB_100c3bac4;
      uVar26 = uVar10 >> 2;
      if (((uVar10 & 3) != 1) || ((uVar26 & 0x1ffffffffffff) != 1)) break;
      uVar24 = uVar10 & 0xfff8000000000000;
      uVar26 = *(ulong *)(lVar11 + 0x50);
      bVar18 = uVar26 == uVar10;
      uVar10 = uVar26;
      if (bVar18) {
        *(ulong *)(lVar11 + 0x50) = uVar24 | 3;
        FUN_10074fd94(uStack_5f0,uStack_5e8);
        goto LAB_100c3b194;
      }
    }
    uVar23 = uVar10 & 0xfff8000000000003;
    uVar24 = *(ulong *)(lVar11 + 0x50);
    bVar18 = uVar24 != uVar10;
    uVar10 = uVar24;
  } while (bVar18);
  *(ulong *)(lVar11 + 0x50) = (uVar26 & 0xc001ffffffffffff) * 4 - 4 | uVar23;
  goto LAB_100c3b194;
LAB_100c3bb74:
  appppcStack_90[0] = (code ****)0x2;
  pppppcStack_5d8 = appppcStack_90;
  puStack_5d0 = &
                __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&pppppcStack_5d8,&UNK_10b24e120);
  goto LAB_100c3be5c;
LAB_100c3bac4:
  ppppppcStack_320 = (code ******)0x2;
  uStack_5c0 = &ppppppcStack_320;
  pppppppcStack_5b8 =
       (code *******)
       &
       __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&uStack_5c0,&UNK_10b24e120);
LAB_100c3be5c:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x100c3be60);
  (*pcVar21)();
}

