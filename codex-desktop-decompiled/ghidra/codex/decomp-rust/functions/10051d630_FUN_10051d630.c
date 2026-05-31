
undefined8 FUN_10051d630(ulong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long extraout_x1;
  undefined1 uVar10;
  uint uVar11;
  uint extraout_w8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong unaff_x23;
  ulong uVar19;
  byte unaff_w27;
  ulong *puVar20;
  undefined1 auVar21 [16];
  undefined8 *puStack_9a0;
  uint uStack_998;
  uint uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined8 uStack_980;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined1 uStack_970;
  undefined7 uStack_96f;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  uint uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined8 uStack_90c;
  undefined1 auStack_900 [32];
  undefined8 uStack_8e0;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  long lStack_898;
  long lStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_840;
  undefined8 uStack_838;
  long lStack_828;
  long lStack_820;
  undefined8 uStack_818;
  long lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long lStack_7f0;
  undefined8 uStack_7e8;
  long lStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  long lStack_7c0;
  undefined8 uStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  ulong uStack_718;
  undefined1 auStack_710 [32];
  long lStack_6f0;
  long lStack_6e8;
  long alStack_6e0 [6];
  byte bStack_6b0;
  ulong uStack_578;
  undefined8 *puStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  undefined1 auStack_3d8 [408];
  undefined8 *puStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined1 auStack_217 [7];
  undefined1 auStack_210 [432];
  
  bVar4 = *(byte *)(param_2 + 0x3a5);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      param_2[0x35] = *param_2;
      param_2[0x51] = param_2[0x3a3];
      param_2[0x50] = param_2[0x3a2];
      param_2[0x52] = param_2[0x3a4];
      *(undefined1 *)((long)param_2 + 0x299) = 0;
      *(undefined1 *)((long)param_2 + 0x29a) = *(undefined1 *)((long)param_2 + 0x1d29);
LAB_10051d6a0:
      uVar7 = FUN_10051af84(&uStack_578,param_2 + 1);
      uVar18 = uStack_578;
      if (uStack_578 == 0x800000000000000c) {
        *param_1 = 0x8000000000000002;
        uVar10 = 3;
      }
      else {
        _memcpy(auStack_3d8,&puStack_570,0x198);
        func_0x000100ccb260(param_2 + 1);
        puVar17 = param_2;
        if (uVar18 == 0x800000000000000b) {
          uVar19 = 0x8000000000000001;
        }
        else {
          _memcpy(auStack_710,auStack_3d8,0x198);
          uStack_718 = uVar18;
          uVar12 = uVar18 ^ 0x8000000000000000;
          if (-1 < (long)uVar18) {
            uVar12 = 9;
          }
          if (uVar12 == 2) {
            puVar17 = (undefined8 *)0x1;
            uStack_578 = 0;
            puStack_570 = (undefined8 *)0x1;
            uStack_568 = 0;
            if (lStack_6e8 != 0) {
              puVar20 = (ulong *)(lStack_6f0 + 0x10);
              puVar17 = (undefined8 *)0x1;
              lVar14 = lStack_6e8;
              do {
                uVar18 = puVar20[-1];
                uVar12 = *puVar20;
                if (uStack_578 - uStack_568 < uVar12) {
                  thunk_FUN_108855060(&uStack_578,uStack_568,uVar12,1,1);
                  puVar17 = puStack_570;
                }
                uVar19 = uStack_568;
                puVar20 = puVar20 + 3;
                _memcpy((long)puVar17 + uStack_568,uVar18,uVar12);
                uStack_568 = uVar19 + uVar12;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            uVar18 = uStack_568;
            uVar12 = uStack_578;
            FUN_100e8d6f8(puVar17,uStack_568);
            unaff_x23 = uVar12;
            if (extraout_x1 == 0) {
              unaff_x23 = 0x8000000000000000;
            }
            uVar19 = 0x8000000000000000;
            if (alStack_6e0[0] != -0x8000000000000000) {
              func_0x000101213ca8(&uStack_578,alStack_6e0);
              uVar19 = uStack_578;
            }
            unaff_w27 = (bStack_6b0 == 2 | bStack_6b0) & unaff_x23 != 0x8000000000000000;
            uStack_238 = uStack_568;
            puStack_240 = puStack_570;
            uStack_228 = uStack_558;
            uStack_230 = uStack_560;
            uStack_220 = uStack_550;
            if ((extraout_x1 == 0) && (uVar12 != 0)) {
              _free(puVar17);
            }
          }
          else {
            unaff_w27 = uVar12 == 7;
            unaff_x23 = 0x8000000000000000;
            uVar19 = 0x8000000000000000;
          }
          _memcpy(auStack_210,&uStack_718,0x1a0);
        }
        *param_1 = uVar19;
        param_1[2] = uStack_238;
        param_1[1] = (ulong)puStack_240;
        param_1[4] = uStack_228;
        param_1[3] = uStack_230;
        param_1[5] = uStack_220;
        param_1[6] = unaff_x23;
        param_1[7] = (ulong)puVar17;
        param_1[8] = uVar18;
        *(byte *)(param_1 + 9) = unaff_w27;
        uVar7 = _memcpy((long)param_1 + 0x49,auStack_217,0x1a7);
        uVar10 = 1;
      }
      *(undefined1 *)(param_2 + 0x3a5) = uVar10;
      return uVar7;
    }
    FUN_107c05cc0(&UNK_10b216488);
  }
  else if (bVar4 == 3) goto LAB_10051d6a0;
  uVar7 = FUN_107c05cc4(&UNK_10b216488);
  if (uStack_578 != 0) {
    _free(puStack_570);
  }
  FUN_100df5b9c(&uStack_718);
  *(undefined1 *)(param_2 + 0x3a5) = 2;
  __Unwind_Resume(uVar7);
  auVar21 = FUN_107c05ccc();
  uVar7 = auVar21._8_8_;
  puVar17 = auVar21._0_8_;
  bVar4 = *(byte *)(puVar17 + 0xc6);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      plVar3 = (long *)puVar17[1];
      func_0x000103efff44(puVar17 + 2,*puVar17);
      lVar13 = puVar17[4];
      if (lVar13 == 0) {
        lVar14 = puVar17[2];
      }
      else {
        if (plVar3 != (long *)0x0) {
          lVar14 = *plVar3 + 0x10;
          puVar17[7] = puVar17[3];
          puVar17[8] = lVar13;
          *(undefined1 *)((long)puVar17 + 0xa9) = 0;
          puVar17[0x14] = lVar14;
          puVar17[5] = puVar17[3];
          *(undefined1 *)(puVar17 + 0x15) = 0;
          puVar17[6] = lVar13;
LAB_10051da38:
          __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(&uStack_998);
          iVar16 = (int)uStack_998 >> 0xd;
          iVar15 = iVar16 + -1;
          if (iVar16 < 1) {
            iVar16 = (1U - iVar16) / 400 + 1;
            iVar15 = iVar15 + iVar16 * 400;
            iVar16 = iVar16 * -0x23ab1;
          }
          else {
            iVar16 = 0;
          }
          puVar17[9] = (ulong)uStack_994 +
                       (long)(int)((((uStack_998 >> 4 & 0x1ff) + iVar16) - iVar15 / 100) +
                                   (iVar15 * 0x5b5 >> 2) + (iVar15 / 100 >> 2) + -0xaf93b) * 0x15180
          ;
          puVar17[0x16] = *(long *)(lVar14 + 0x30) + 0x10;
          *(undefined1 *)(puVar17 + 0x17) = 0;
LAB_10051db04:
          FUN_1016f0980(&uStack_998,puVar17 + 0x16,uVar7);
          uVar11 = uStack_998;
          if (uStack_998 != 6) {
            uStack_928 = uStack_98c;
            uStack_924 = uStack_988;
            uStack_930 = uStack_994;
            uStack_92c = uStack_990;
            uStack_918 = uStack_980._4_4_;
            uStack_920 = uStack_984;
            uStack_91c = (undefined4)uStack_980;
            uStack_90c = CONCAT71(uStack_96f,uStack_970);
            uStack_914 = uStack_978;
            uStack_910 = uStack_974;
            uStack_948 = uStack_960;
            uStack_950 = uStack_968;
            uStack_940 = uStack_958;
            FUN_100cd638c(puVar17 + 0x16);
            if (uVar11 != 5) {
              *(undefined1 *)(puVar17 + 0x15) = 1;
              *(uint *)(puVar17 + 10) = uVar11;
              *(ulong *)((long)puVar17 + 0x5c) = CONCAT44(uStack_924,uStack_928);
              *(ulong *)((long)puVar17 + 0x54) = CONCAT44(uStack_92c,uStack_930);
              *(ulong *)((long)puVar17 + 0x6c) = CONCAT44(uStack_914,uStack_918);
              *(ulong *)((long)puVar17 + 100) = CONCAT44(uStack_91c,uStack_920);
              puVar17[0xf] = uStack_90c;
              puVar17[0xe] = CONCAT44(uStack_910,uStack_914);
              puVar17[0x11] = uStack_948;
              puVar17[0x10] = uStack_950;
              puVar17[0x12] = uStack_940;
              puVar17[0x13] = 0;
              lVar13 = puVar17[5];
              lVar14 = lVar13 + puVar17[6] * 0x10;
              puVar17[0x16] = lVar13;
              puVar17[0x17] = lVar14;
              if (lVar13 != lVar14) {
                do {
                  puVar17[0x16] = lVar13 + 0x10;
                  uStack_978 = 0x82;
                  uStack_974 = 0;
                  uStack_998 = 0;
                  uStack_994 = 0;
                  uStack_990 = 8;
                  uStack_98c = 0;
                  uStack_988 = 0;
                  uStack_984 = 0;
                  uStack_980._0_4_ = 0x8caa33a;
                  uStack_980._4_4_ = 1;
                  uStack_970 = 1;
                  lStack_7a8 = puVar17[9];
                  lStack_7b0 = CONCAT44(lStack_7b0._4_4_,5);
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(&uStack_998);
                  plVar3 = (long *)CONCAT44(uStack_98c,uStack_990);
                  plVar3[1] = lStack_7a8;
                  *plVar3 = lStack_7b0;
                  plVar3[3] = lStack_798;
                  plVar3[2] = lStack_7a0;
                  uStack_988 = 1;
                  uStack_984 = 0;
                  uStack_848 = CONCAT71(uStack_96f,uStack_970);
                  uStack_850 = CONCAT44(uStack_974,uStack_978);
                  lStack_868 = CONCAT44(uStack_98c,uStack_990);
                  lStack_870 = CONCAT44(uStack_994,uStack_998);
                  uStack_858 = CONCAT44(uStack_980._4_4_,(undefined4)uStack_980);
                  lStack_860 = 1;
                  lStack_7b0 = 0;
                  lStack_7a8 = 1;
                  lStack_7a0 = 0;
                  FUN_10624142c(&uStack_998,lVar13,0);
                  thunk_FUN_108855060(&lStack_7b0,0,0x24,1,1);
                  lVar14 = lStack_860;
                  puVar8 = (undefined8 *)(lStack_7a8 + lStack_7a0);
                  puVar8[1] = CONCAT44(uStack_98c,uStack_990);
                  *puVar8 = CONCAT44(uStack_994,uStack_998);
                  puVar8[3] = CONCAT44(uStack_980._4_4_,(undefined4)uStack_980);
                  puVar8[2] = CONCAT44(uStack_984,uStack_988);
                  *(undefined4 *)(puVar8 + 4) = uStack_978;
                  if (lStack_870 < -0x7ffffffffffffffe) {
                    lStack_898 = lStack_868;
                    lStack_8a0 = lStack_870;
                    uStack_888 = uStack_858;
                    lStack_890 = lStack_860;
                    uStack_878 = uStack_848;
                    uStack_880 = uStack_850;
                    if (lStack_7b0 != 0) {
                      _free();
                    }
                    iVar16 = *(int *)(puVar17 + 10);
                    if (iVar16 != 4) goto LAB_10051df88;
LAB_10051df18:
                    puVar8 = (undefined8 *)puVar17[0xb];
                  }
                  else {
                    uStack_980 = lStack_7a0 + 0x24;
                    lVar13 = lStack_860 + 1;
                    uStack_990 = (undefined4)lStack_7b0;
                    uStack_98c = (undefined4)((ulong)lStack_7b0 >> 0x20);
                    uStack_988 = (undefined4)lStack_7a8;
                    uStack_984 = (undefined4)((ulong)lStack_7a8 >> 0x20);
                    uStack_998 = 1;
                    if (lStack_860 == lStack_870) {
                      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                                (&lStack_870);
                    }
                    puVar8 = (undefined8 *)(lStack_868 + lVar14 * 0x20);
                    puVar8[3] = uStack_980;
                    puVar8[2] = CONCAT44(uStack_984,uStack_988);
                    puVar8[1] = CONCAT44(uStack_98c,uStack_990);
                    *puVar8 = CONCAT44(uStack_994,uStack_998);
                    lStack_898 = lStack_868;
                    lStack_8a0 = lStack_870;
                    uStack_888 = uStack_858;
                    uStack_878 = uStack_848;
                    uStack_880 = uStack_850;
                    iVar16 = *(int *)(puVar17 + 10);
                    lStack_890 = lVar13;
                    lStack_860 = lVar13;
                    if (iVar16 == 4) goto LAB_10051df18;
LAB_10051df88:
                    puVar8 = puVar17 + 10;
                    if (iVar16 == 3) {
                      FUN_107c05cac(&UNK_108ca1579,0x24,&UNK_10b209070);
                      goto LAB_10051dd80;
                    }
                  }
                  lStack_8c8 = lStack_898;
                  lStack_8d0 = lStack_8a0;
                  uStack_8b8 = uStack_888;
                  lStack_8c0 = lStack_890;
                  uStack_8a8 = uStack_878;
                  uStack_8b0 = uStack_880;
                  puVar17[0x19] = lStack_898;
                  puVar17[0x18] = lStack_8a0;
                  puVar17[0x1b] = uStack_888;
                  puVar17[0x1a] = lStack_890;
                  puVar17[0x1d] = uStack_878;
                  puVar17[0x1c] = uStack_880;
                  puVar17[0x1e] = puVar8;
                  *(undefined1 *)(puVar17 + 0x21) = 0;
LAB_10051dd84:
                  FUN_1016f9d64(&uStack_998,puVar17 + 0x18,uVar7);
                  lVar14 = CONCAT44(uStack_994,uStack_998);
                  if (lVar14 == -0x7fffffffffffffeb) {
                    *(undefined1 *)((long)puVar17 + 0xa9) = 4;
                    goto LAB_10051e06c;
                  }
                  lVar13 = CONCAT44(uStack_98c,uStack_990);
                  uVar5 = CONCAT44(uStack_984,uStack_988);
                  uStack_838 = CONCAT44(uStack_974,uStack_978);
                  lStack_840 = uStack_980;
                  if (*(char *)(puVar17 + 0x21) == '\x03') {
                    uVar2 = puVar17[0x1f];
                    puVar8 = (undefined8 *)puVar17[0x20];
                    pcVar6 = (code *)*puVar8;
                    if (pcVar6 != (code *)0x0) {
                      (*pcVar6)(uVar2);
                    }
                    if (puVar8[1] != 0) {
                      _free(uVar2);
                    }
                  }
                  else if (*(char *)(puVar17 + 0x21) == '\0') {
                    FUN_100d99140(puVar17 + 0x18);
                  }
                  if (lVar14 != -0x7fffffffffffffec) {
                    uStack_808 = uStack_838;
                    lStack_810 = lStack_840;
                    lStack_828 = lVar14;
                    lStack_820 = lVar13;
                    uStack_818 = uVar5;
                    puVar8 = (undefined8 *)thunk_FUN_108858e50(&lStack_828);
                    goto LAB_10051e000;
                  }
                  puVar17[0x13] = puVar17[0x13] + lVar13;
                  lVar13 = puVar17[0x16];
                } while (lVar13 != puVar17[0x17]);
              }
              *(undefined1 *)(puVar17 + 0x15) = 0;
              puVar17[0x1b] = puVar17[0xf];
              puVar17[0x1a] = puVar17[0xe];
              puVar17[0x1d] = puVar17[0x11];
              puVar17[0x1c] = puVar17[0x10];
              puVar17[0x1e] = puVar17[0x12];
              puVar17[0x17] = puVar17[0xb];
              puVar17[0x16] = puVar17[10];
              puVar17[0x19] = puVar17[0xd];
              puVar17[0x18] = puVar17[0xc];
              *(undefined1 *)(puVar17 + 0x2a) = 0;
              goto LAB_10051dbf0;
            }
            uStack_8e0 = uStack_90c;
            puVar8 = (undefined8 *)thunk_FUN_108858e50(auStack_900);
            goto LAB_10051e054;
          }
          *(undefined1 *)((long)puVar17 + 0xa9) = 3;
          goto LAB_10051e06c;
        }
LAB_10051dd08:
        lVar14 = puVar17[2];
      }
      if (lVar14 != 0) {
        _free(puVar17[3]);
      }
      uVar10 = 1;
      uVar7 = 1;
LAB_10051dd34:
      *(undefined1 *)(puVar17 + 0xc6) = uVar10;
      return uVar7;
    }
    FUN_107c05cc0(&UNK_10b2164a0);
LAB_10051dc8c:
    FUN_107c05cc4(&UNK_10b2164a0);
    uVar11 = extraout_w8;
  }
  else {
    if (bVar4 != 3) goto LAB_10051dc8c;
    bVar4 = *(byte *)((long)puVar17 + 0xa9);
    uVar11 = (uint)bVar4;
    if (2 < bVar4) {
      if (bVar4 == 3) goto LAB_10051db04;
      if (bVar4 != 5) goto LAB_10051dd84;
LAB_10051dbf0:
      FUN_1016ee13c(&uStack_998,puVar17 + 0x16,uVar7);
      lVar14 = CONCAT44(uStack_994,uStack_998);
      if (lVar14 == -0x7fffffffffffffeb) {
        *(undefined1 *)((long)puVar17 + 0xa9) = 5;
      }
      else {
        uStack_7f8 = CONCAT44(uStack_984,uStack_988);
        uStack_800 = CONCAT44(uStack_98c,uStack_990);
        uStack_7e8 = CONCAT44(uStack_974,uStack_978);
        lStack_7f0 = uStack_980;
        FUN_100d07e80(puVar17 + 0x16);
        if (lVar14 == -0x7fffffffffffffec) {
          lVar14 = 0;
          puVar8 = (undefined8 *)puVar17[0x13];
          *(undefined1 *)(puVar17 + 0x15) = 0;
        }
        else {
          uStack_7c8 = uStack_7f8;
          uStack_7d0 = uStack_800;
          uStack_7b8 = uStack_7e8;
          lStack_7c0 = lStack_7f0;
          lStack_7d8 = lVar14;
          puVar8 = (undefined8 *)thunk_FUN_108858e50(&lStack_7d8);
LAB_10051e000:
          if ((*(byte *)(puVar17 + 0x15) & 1) != 0) {
            piVar1 = (int *)(puVar17 + 10);
            if (*(char *)(puVar17 + 0x12) == '\x01') {
              if (*piVar1 == 4) {
                piVar9 = (int *)puVar17[0xb];
              }
              else {
                piVar9 = piVar1;
                if (*piVar1 == 3) {
                  FUN_107c05cac(&UNK_108ca1579,0x24,&UNK_10b209070);
                  goto LAB_10051dd80;
                }
              }
              __ZN113__LT_sqlx_sqlite__transaction__SqliteTransactionManager_u20_as_u20_sqlx_core__transaction__TransactionManager_GT_14start_rollback17h281f626b15aff32dE
                        (piVar9);
            }
            if (*piVar1 != 4) {
              func_0x000100c9f240(piVar1);
            }
          }
LAB_10051e054:
          *(undefined1 *)(puVar17 + 0x15) = 0;
          lVar14 = 1;
        }
LAB_10051e05c:
        puStack_9a0 = puVar17 + 5;
        *(undefined1 *)((long)puVar17 + 0xa9) = 1;
        if (lVar14 != 2) {
          FUN_100d666fc(puStack_9a0);
          if (lVar14 != 0) {
            (**(code **)*puVar8)(puVar8);
          }
          goto LAB_10051dd08;
        }
      }
LAB_10051e06c:
      uVar7 = 2;
      uVar10 = 3;
      goto LAB_10051dd34;
    }
    if (bVar4 == 0) {
      lVar14 = puVar17[0x14];
      *(undefined1 *)(puVar17 + 0x15) = 0;
      puVar17[5] = puVar17[7];
      puVar17[6] = puVar17[8];
      if (puVar17[8] != 0) goto LAB_10051da38;
      puVar8 = (undefined8 *)0x0;
      lVar14 = 0;
      goto LAB_10051e05c;
    }
  }
  if (uVar11 == 1) {
    FUN_107c05cc0(&UNK_10b21ea80);
  }
  else {
    FUN_107c05cc4(&UNK_10b21ea80);
  }
LAB_10051dd80:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10051dd84);
  (*pcVar6)();
}

