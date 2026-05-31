
undefined8 FUN_100fe63b0(long *param_1,long param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int *piVar7;
  ulong *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  char *pcVar13;
  int *piVar14;
  undefined1 uVar15;
  code *pcVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  int *piVar25;
  undefined8 uVar26;
  ulong unaff_x25;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  int *piVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int *piStack_180;
  int *piStack_170;
  int *piStack_160;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  int *piStack_138;
  undefined1 auStack_130 [16];
  int iStack_120;
  undefined4 uStack_11c;
  ulong uStack_118;
  int *piStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_40;
  long lStack_38;
  ulong *puVar8;
  
  bVar2 = *(byte *)(param_1 + 9);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      func_0x000108a07af4(&UNK_10b23ac78);
LAB_100fe6490:
      piVar7 = (int *)func_0x000108a07b10(&UNK_10b23ac78);
      if (*(long *)(param_2 + 8) != 0) {
        _free();
        *(undefined1 *)(param_1 + 9) = 2;
        __Unwind_Resume(piVar7);
        *(undefined1 *)(param_1 + 9) = 2;
        piVar7 = (int *)__Unwind_Resume();
        FUN_100d07710(*param_1,param_1[1]);
      }
      *(undefined1 *)(param_1 + 9) = 2;
      __Unwind_Resume(piVar7);
      auVar32 = func_0x000108a07bc4();
      puVar23 = auVar32._8_8_;
      puVar8 = auVar32._0_8_;
      bVar2 = *(byte *)(puVar23 + 0x47);
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          puVar23[0x1f] = puVar23[0xd];
          puVar23[0x1e] = puVar23[0xc];
          puVar23[0x21] = puVar23[0xf];
          puVar23[0x20] = puVar23[0xe];
          puVar23[0x17] = puVar23[5];
          puVar23[0x16] = puVar23[4];
          puVar23[0x19] = puVar23[7];
          puVar23[0x18] = puVar23[6];
          puVar23[0x1b] = puVar23[9];
          puVar23[0x1a] = puVar23[8];
          puVar23[0x1d] = puVar23[0xb];
          puVar23[0x1c] = puVar23[10];
          puVar23[0x13] = puVar23[1];
          puVar23[0x12] = *puVar23;
          puVar23[0x15] = puVar23[3];
          puVar23[0x14] = puVar23[2];
          puVar23[0x23] = puVar23[0x11];
          puVar23[0x22] = puVar23[0x10];
          puVar23[0x25] = puVar23[5];
          puVar23[0x24] = puVar23[4];
          puVar23[0x27] = puVar23[7];
          puVar23[0x26] = puVar23[6];
          puVar23[0x29] = puVar23[9];
          puVar23[0x28] = puVar23[8];
          puVar23[0x16] = 2;
          puVar23[0x2b] = puVar23[0xb];
          puVar23[0x2a] = puVar23[10];
          puVar23[0x1a] = 2;
          *(undefined4 *)((long)puVar23 + 0x239) = 0x1010000;
          *(undefined4 *)(puVar23 + 0x2c) = 0;
          puVar23[0x2d] = puVar23 + 0x12;
          *(undefined1 *)(puVar23 + 0x30) = 0;
          *(undefined4 *)(puVar23 + 0x31) = 0;
          puVar23[0x32] = puVar23 + 0x24;
          *(undefined1 *)(puVar23 + 0x3b) = 0;
          *(undefined4 *)(puVar23 + 0x3c) = 0;
          puVar23[0x3d] = puVar23 + 0x28;
          *(undefined1 *)(puVar23 + 0x46) = 0;
LAB_100fe65c8:
          piStack_160 = (int *)(puVar23 + 0x2c);
          piVar7 = (int *)(puVar23 + 0x2d);
          puVar9 = (ulong *)FUN_100fe76f8(&iStack_120,piVar7,param_3);
          if (iStack_120 == 2) {
            bVar3 = false;
            iVar1 = *(int *)(puVar23 + 0x31);
            goto joined_r0x000100fe65f4;
          }
          piStack_100 = (int *)CONCAT44(uStack_11c,iStack_120);
          uStack_f8 = uStack_118;
          uStack_c4 = (undefined4)uStack_118;
          uStack_c0._0_4_ = (undefined4)(uStack_118 >> 0x20);
          uStack_d0._4_4_ = iStack_120;
          uStack_c8 = uStack_11c;
          if (((*piStack_160 == 1) && (*piVar7 != 0)) &&
             (piVar30 = (int *)puVar23[0x2e], piVar7 = piVar30, ((ulong)piVar30 & 3) == 1)) {
            piVar7 = (int *)((long)piVar30 + -1);
            uVar11 = *(undefined8 *)piVar7;
            puVar29 = *(undefined8 **)((long)piVar30 + 7);
            pcVar16 = (code *)*puVar29;
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)(uVar11);
            }
            if (puVar29[1] != 0) {
              _free(uVar11);
            }
            puVar9 = (ulong *)_free(piVar7);
          }
          *(undefined4 *)(puVar23 + 0x2c) = 1;
          *(undefined4 *)((long)puVar23 + 0x174) = (undefined4)uStack_c0;
          *(ulong *)((long)puVar23 + 0x16c) = CONCAT44(uStack_c4,uStack_c8);
          *(ulong *)((long)puVar23 + 0x164) = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
          if (*(int *)(puVar23 + 0x2d) == 0) goto LAB_100fe6730;
LAB_100fe667c:
          iVar20 = auVar32._8_4_ + 0x188;
          *(undefined4 *)(puVar23 + 0x2c) = 2;
          uVar31 = puVar23[0x2e];
          if (uVar31 == 0) {
            func_0x000108a07a20(&UNK_10b209350);
            goto LAB_100fe7474;
          }
LAB_100fe6b28:
          puVar27 = &uStack_d0;
          uVar17 = 0x8000000000000000;
          puVar29 = puVar23;
LAB_100fe6b2c:
          piStack_160 = (int *)(puVar23 + 0x2c);
          FUN_100ddf0b4(piStack_160);
          if (uVar17 == 0x8000000000000000) {
            *(undefined2 *)((long)puVar23 + 0x239) = 0;
            if (puVar23[0x28] != 2) {
              func_0x000100df6bcc(puVar23 + 0x28);
            }
            *(undefined1 *)((long)puVar23 + 0x23b) = 0;
            if (puVar23[0x24] != 2) {
              func_0x000100df6bcc(puVar23 + 0x24);
            }
            *(undefined1 *)((long)puVar23 + 0x23c) = 0;
            uVar11 = FUN_100de2564(puVar23 + 0x12);
            puVar29 = puVar23;
          }
          else {
            *(undefined1 *)((long)puVar23 + 0x23c) = 0;
            lVar24 = puVar23[0x24];
            puStack_b8 = (undefined *)puVar23[0x27];
            uStack_c8 = (undefined4)puVar23[0x25];
            uStack_c4 = (undefined4)((ulong)puVar23[0x25] >> 0x20);
            uStack_d0._0_4_ = (undefined4)lVar24;
            uStack_d0._4_4_ = (int)((ulong)lVar24 >> 0x20);
            uStack_c0._0_4_ = (undefined4)puVar23[0x26];
            uStack_c0._4_4_ = (undefined4)((ulong)puVar23[0x26] >> 0x20);
            if (lVar24 != 2) {
              func_0x000100df6bcc(&uStack_d0);
            }
            *(undefined1 *)((long)puVar23 + 0x23b) = 0;
            lVar24 = puVar23[0x28];
            puStack_b8 = (undefined *)puVar23[0x2b];
            uStack_c8 = (undefined4)puVar23[0x29];
            uStack_c4 = (undefined4)((ulong)puVar23[0x29] >> 0x20);
            uStack_d0._0_4_ = (undefined4)lVar24;
            uStack_d0._4_4_ = (int)((ulong)lVar24 >> 0x20);
            uStack_c0._0_4_ = (undefined4)puVar23[0x2a];
            uStack_c0._4_4_ = (undefined4)((ulong)puVar23[0x2a] >> 0x20);
            if (lVar24 != 2) {
              func_0x000100df6bcc(&uStack_d0);
            }
            *(undefined4 *)((long)puVar23 + 0x239) = 0;
            uVar11 = FUN_100de2564(puVar23 + 0x12);
          }
          *puVar8 = uVar17;
          puVar8[1] = uVar31;
          puVar8[2] = (ulong)puVar29;
          puVar8[3] = unaff_x25;
          puVar8[4] = (ulong)piVar7;
          puVar8[5] = (ulong)puVar27;
          uVar15 = 1;
          *(int *)(puVar8 + 6) = iVar20;
LAB_100fe6bf8:
          *(undefined1 *)(puVar23 + 0x47) = uVar15;
          return uVar11;
        }
        func_0x000108a07af4(&UNK_10b23acc0);
LAB_100fe73ec:
        func_0x000108a07b10(&UNK_10b23acc0);
      }
      else {
        if (bVar2 != 3) goto LAB_100fe73ec;
        if (*(int *)(puVar23 + 0x2c) != 1) {
          if (*(int *)(puVar23 + 0x2c) == 2) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca1ba4,0x45,&UNK_10b24e878);
            goto LAB_100fe7474;
          }
          goto LAB_100fe65c8;
        }
        puVar9 = puVar8;
        if (*(int *)(puVar23 + 0x2d) != 0) goto LAB_100fe667c;
LAB_100fe6730:
        bVar3 = true;
        iVar1 = *(int *)(puVar23 + 0x31);
joined_r0x000100fe65f4:
        auVar32._8_8_ = auStack_130._8_8_;
        auVar32._0_8_ = puVar9;
        if (iVar1 != 0) {
          piVar30 = (int *)(puVar23 + 0x31);
          iVar20 = (int)piVar30;
          if (iVar1 != 1) {
LAB_100fe7340:
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca1ba4,0x45,&UNK_10b24e878);
            goto LAB_100fe7474;
          }
          if (puVar23[0x32] != -0x8000000000000000) goto LAB_100fe6af4;
LAB_100fe6ad8:
          *(undefined4 *)(puVar23 + 0x31) = 2;
          uVar31 = puVar23[0x33];
          if (uVar31 != 0) goto LAB_100fe6b28;
          puVar12 = &UNK_10b209368;
          goto LAB_100fe73a0;
        }
        piVar19 = (int *)(puVar23 + 0x31);
        bVar2 = *(byte *)(puVar23 + 0x3b);
        if (1 < bVar2) {
          if (bVar2 == 3) {
            plVar10 = (long *)puVar23[0x36];
            plVar28 = (long *)puVar23[0x37];
            piStack_170 = (int *)puVar23[0x39];
            lVar24 = puVar23[0x3a];
            piVar25 = (int *)puVar23[0x38];
LAB_100fe6780:
            piVar30 = (int *)plVar28[2];
            piVar14 = (int *)*plVar28;
            piVar7 = piVar25;
            if (0x1f < (ulong)((long)piVar14 - (long)piVar30)) goto LAB_100fe682c;
            while ((piVar7 = piVar30, (int *)0x1f < piStack_170 && (piStack_170 == piVar14))) {
              piStack_100 = &iStack_120;
              uStack_f8 = 0x20;
              uStack_f0 = 0;
              uStack_e8 = 0;
              auVar33 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                                  (plVar10,param_3,&piStack_100);
              uVar31 = uStack_f0;
              piVar14 = piStack_100;
              auStack_130 = auVar33;
              if (uStack_f8 < uStack_f0) {
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (0,uStack_f0,uStack_f8,&UNK_10b209248);
                goto LAB_100fe7474;
              }
              piVar21 = (int *)plVar28[2];
              if (piVar25 < piVar21) {
LAB_100fe72b0:
                puVar12 = &UNK_10b23a4d8;
                puVar23 = (undefined8 *)0x5d;
                pcVar13 = &UNK_108cc991d;
LAB_100fe72fc:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar13,puVar23,puVar12);
                goto LAB_100fe7474;
              }
              piVar7 = (int *)*plVar28;
              piVar30 = (int *)plVar28[1];
              uVar17 = (long)piVar7 - (long)piVar21;
              piVar18 = piVar21;
              if (uVar17 < uStack_f0) {
                piStack_150 = piVar30;
                piStack_148 = piVar7;
                piStack_140 = piVar21;
                piStack_138 = piVar25;
                if (uVar17 < 0x20) {
                  puVar23[0x38] = piVar21;
                  FUN_108855060(plVar28,piVar21,0x20,1,1);
                  piVar18 = (int *)plVar28[2];
                  piVar25 = piVar21;
                }
                if (piVar25 < piVar18) goto LAB_100fe72b0;
                piVar7 = (int *)*plVar28;
                piVar30 = (int *)plVar28[1];
                uVar17 = (long)piVar7 - (long)piVar18;
              }
              piStack_150 = piVar30;
              piStack_148 = piVar7;
              piStack_140 = piVar18;
              piStack_138 = piVar25;
              if (uVar17 < uVar31) {
                uStack_e0 = uVar31;
                uStack_d0 = &uStack_e0;
                uStack_c8 = 0x55b4878;
                uStack_c4 = 1;
                uStack_c0 = &uStack_d8;
                puStack_b8 = &
                             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                ;
                puVar12 = &UNK_10b23a490;
                puVar23 = &uStack_d0;
                pcVar13 = s__buf_len___must_fit_in_remaining_108ab64d1;
                uStack_d8 = uVar17;
                goto LAB_100fe72fc;
              }
              piVar21 = (int *)((long)piVar18 + uVar31);
              if ((piVar21 < piVar18) || (piVar7 < piVar21)) {
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (piVar18,piVar21,piVar7,&UNK_10b23a490);
                goto LAB_100fe7474;
              }
              uVar11 = _memcpy((long)piVar30 + (long)piVar18,piVar14,uVar31);
              auVar32._8_8_ = auStack_130._8_8_;
              auVar32._0_8_ = uVar11;
              if (piVar25 < piVar21) {
                piVar25 = piVar21;
                piStack_138 = piVar21;
              }
              piStack_140 = piVar21;
              auVar4 = auStack_130;
              if (piVar7 < piVar21) {
LAB_100fe70e4:
                puVar12 = &UNK_10b4cd1c8;
                piVar25 = piStack_140;
LAB_100fe70fc:
                auStack_130 = auVar4;
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (0,piVar25,piVar7,puVar12);
                goto LAB_100fe7474;
              }
              while( true ) {
                auStack_130._8_8_ = auVar32._8_8_;
                auVar4._8_8_ = auStack_130._8_8_;
                auVar4._0_8_ = auStack_130._0_8_;
                lVar22 = auVar33._8_8_;
                if (piVar7 < piVar25) {
                  puVar12 = &UNK_10b4cd1b0;
                  goto LAB_100fe70fc;
                }
                uStack_d0._0_4_ = SUB84(piVar30,0);
                uStack_d0._4_4_ = (int)((ulong)piVar30 >> 0x20);
                uStack_c8 = SUB84(piStack_140,0);
                uStack_c4 = (undefined4)((ulong)piStack_140 >> 0x20);
                uStack_c0._0_4_ = SUB84(piVar25,0);
                uStack_c0._4_4_ = (undefined4)((ulong)piVar25 >> 0x20);
                piStack_100 = (int *)plVar28[1];
                if (piStack_100 != piVar30) {
                  __ZN4core9panicking13assert_failed17hec2b10233cd65be6E
                            (0,&piStack_100,&uStack_d0,0);
                  goto LAB_100fe7474;
                }
                puVar23[0x38] = piVar25;
                plVar28[2] = (long)piStack_140;
                if ((auVar33._0_8_ & 1) != 0) {
                  bVar3 = false;
                  *(undefined1 *)(puVar23 + 0x3b) = 3;
                  goto LAB_100fe6af4;
                }
                if (lVar22 != 0) {
                  if (puVar23[0x33] != 0) {
                    uVar11 = _free(puVar23[0x34]);
                    auVar32._8_8_ = auStack_130._8_8_;
                    auVar32._0_8_ = uVar11;
                  }
                  lVar24 = -0x8000000000000000;
                  goto LAB_100fe6a00;
                }
                if (uVar31 == 0) {
                  puVar23[0x3a] = 0;
                  lVar24 = puVar23[0x33];
                  lVar22 = puVar23[0x34];
                  unaff_x25 = puVar23[0x35];
                  *(undefined1 *)(puVar23 + 0x3b) = 1;
                  if (lVar24 != -0x7fffffffffffffff) {
                    iVar1 = *piVar19;
                    goto joined_r0x000100fe6a98;
                  }
                  bVar3 = false;
                  goto LAB_100fe6af4;
                }
                lVar24 = lVar24 + uVar31;
                puVar23[0x3a] = lVar24;
                piVar14 = (int *)*plVar28;
                piVar7 = piVar25;
                piVar30 = piStack_140;
                if ((ulong)((long)piVar14 - (long)piStack_140) < 0x20) break;
LAB_100fe682c:
                if (piVar7 < piVar30) goto LAB_100fe71d8;
LAB_100fe6878:
                piStack_150 = (int *)plVar28[1];
                piStack_148 = piVar14;
                piStack_140 = piVar30;
                piStack_138 = piVar7;
                if (piVar14 < piVar30) {
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (0,piVar30,piVar14,&UNK_10b209248);
                  goto LAB_100fe7474;
                }
                auVar33 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                                    (plVar10,param_3,&piStack_150);
                auStack_130._0_8_ = auVar33._0_8_;
                if (piStack_148 < piStack_140) {
                  auStack_130 = auVar33;
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (0,piStack_140,piStack_148,&UNK_10b209248);
                  goto LAB_100fe7474;
                }
                uVar31 = (long)piStack_140 - (long)piVar30;
                piVar7 = piStack_148;
                piVar30 = piStack_150;
                piVar25 = piStack_138;
                auVar32 = auVar33;
                auVar4 = auVar33;
                if (piStack_148 < piStack_140) goto LAB_100fe70e4;
              }
            }
            puVar23[0x38] = piVar7;
            FUN_108855060(plVar28,piVar7,0x20,1,1);
            piVar30 = (int *)plVar28[2];
            piVar14 = (int *)*plVar28;
            if (piVar30 <= piVar7) goto LAB_100fe6878;
LAB_100fe71d8:
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc991d,0x5d,&UNK_10b23a4d8);
            goto LAB_100fe7474;
          }
LAB_100fe7408:
          func_0x000108a07b10(&UNK_10b23aca8);
          goto LAB_100fe7474;
        }
        if (bVar2 == 0) {
          lVar24 = 0;
          plVar10 = (long *)puVar23[0x32];
          auVar32._0_8_ = plVar10;
          lVar22 = 1;
          puVar23[0x33] = 0;
          puVar23[0x34] = 1;
          puVar23[0x35] = 0;
          piVar30 = piVar19;
          if (*plVar10 != 2) {
            piVar25 = (int *)0x0;
            lVar24 = 0;
            piStack_170 = (int *)0x0;
            plVar28 = puVar23 + 0x33;
            puVar23[0x36] = plVar10;
            puVar23[0x37] = plVar28;
            puVar23[0x39] = 0;
            puVar23[0x3a] = 0;
            puVar23[0x38] = 0;
            goto LAB_100fe6780;
          }
LAB_100fe6a00:
          unaff_x25 = 0;
          *(undefined1 *)(puVar23 + 0x3b) = 1;
          iVar1 = *piVar19;
joined_r0x000100fe6a98:
          if (iVar1 == 1) {
            auStack_130._8_8_ = auVar32._8_8_;
            if (puVar23[0x32] == -0x8000000000000000) {
              piVar7 = (int *)puVar23[0x33];
              if (((ulong)piVar7 & 3) == 1) {
                piVar19 = (int *)((long)piVar7 + -1);
                uVar11 = *(undefined8 *)piVar19;
                puVar29 = *(undefined8 **)((long)piVar7 + 7);
                pcVar16 = (code *)*puVar29;
                if (pcVar16 != (code *)0x0) {
                  (*pcVar16)(uVar11);
                }
                piVar30 = param_3;
                if (puVar29[1] != 0) {
                  _free(uVar11);
                }
                goto LAB_100fe6a3c;
              }
            }
            else if (puVar23[0x32] != 0) {
              piVar19 = (int *)puVar23[0x33];
LAB_100fe6a3c:
              uVar11 = _free(piVar19);
              auVar32._8_8_ = auStack_130._8_8_;
              auVar32._0_8_ = uVar11;
              piVar7 = piVar19;
            }
          }
          auStack_130._8_8_ = auVar32._8_8_;
          iVar20 = (int)piVar30;
          *(undefined4 *)(puVar23 + 0x31) = 1;
          puVar23[0x32] = lVar24;
          puVar23[0x33] = lVar22;
          puVar23[0x34] = unaff_x25;
          if (lVar24 == -0x8000000000000000) goto LAB_100fe6ad8;
LAB_100fe6af4:
          auStack_130._8_8_ = auVar32._8_8_;
          piVar19 = (int *)(puVar23 + 0x3c);
          piStack_180 = (int *)(puVar23 + 0x31);
          iVar20 = (int)piVar30;
          if (*piVar19 == 0) {
            bVar2 = *(byte *)(puVar23 + 0x46);
            if (bVar2 < 2) {
              if (bVar2 != 0) goto LAB_100fe73f8;
              unaff_x25 = 0;
              plVar10 = (long *)puVar23[0x3d];
              auVar32._8_8_ = auStack_130._8_8_;
              auVar32._0_8_ = plVar10;
              lVar22 = 1;
              puVar23[0x3e] = 0;
              puVar23[0x3f] = 1;
              puVar23[0x40] = 0;
              if (*plVar10 == 2) {
LAB_100fe6f1c:
                uVar26 = 0;
                *(undefined1 *)(puVar23 + 0x46) = 1;
LAB_100fe6f28:
                auStack_130._8_8_ = auVar32._8_8_;
                iVar20 = (int)piVar30;
                if (*piVar19 == 1) {
                  if (puVar23[0x3d] == -0x8000000000000000) {
                    piVar7 = (int *)puVar23[0x3e];
                    if (((ulong)piVar7 & 3) == 1) {
                      piVar30 = (int *)((long)piVar7 + -1);
                      uVar11 = *(undefined8 *)piVar30;
                      puVar29 = *(undefined8 **)((long)piVar7 + 7);
                      pcVar16 = (code *)*puVar29;
                      if (pcVar16 != (code *)0x0) {
                        (*pcVar16)(uVar11);
                      }
                      if (puVar29[1] != 0) {
                        _free(uVar11);
                      }
                      goto LAB_100fe6f54;
                    }
                  }
                  else if (puVar23[0x3d] != 0) {
                    piVar30 = (int *)puVar23[0x3e];
LAB_100fe6f54:
                    uVar11 = _free(piVar30);
                    auVar32._8_8_ = auStack_130._8_8_;
                    auVar32._0_8_ = uVar11;
                    piVar7 = piVar30;
                  }
                }
                *(undefined4 *)(puVar23 + 0x3c) = 1;
                puVar23[0x3d] = unaff_x25;
                puVar23[0x3e] = lVar22;
                puVar23[0x3f] = uVar26;
                goto joined_r0x000100fe6fc8;
              }
              piVar25 = (int *)0x0;
              lVar24 = 0;
              piStack_170 = (int *)0x0;
              puVar23[0x41] = plVar10;
              plVar28 = puVar23 + 0x3e;
              puVar23[0x42] = plVar28;
              puVar23[0x43] = 0;
              puVar23[0x45] = 0;
              puVar23[0x44] = 0;
            }
            else {
              if (bVar2 != 3) goto LAB_100fe7408;
              plVar10 = (long *)puVar23[0x41];
              plVar28 = (long *)puVar23[0x42];
              piStack_170 = (int *)puVar23[0x44];
              lVar24 = puVar23[0x45];
              piVar25 = (int *)puVar23[0x43];
            }
            piVar30 = (int *)plVar28[2];
            piVar14 = (int *)*plVar28;
            piVar7 = piVar25;
            if (0x1f < (ulong)((long)piVar14 - (long)piVar30)) goto LAB_100fe6d4c;
            while ((piVar7 = piVar30, (int *)0x1f < piStack_170 && (piStack_170 == piVar14))) {
              piStack_100 = &iStack_120;
              uStack_f8 = 0x20;
              uStack_f0 = 0;
              uStack_e8 = 0;
              auVar33 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                                  (plVar10,param_3,&piStack_100);
              uVar31 = uStack_f0;
              piVar14 = piStack_100;
              auStack_130 = auVar33;
              if (uStack_f8 < uStack_f0) {
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (0,uStack_f0,uStack_f8,&UNK_10b209248);
                goto LAB_100fe7474;
              }
              piVar21 = (int *)plVar28[2];
              if (piVar25 < piVar21) {
LAB_100fe7328:
                puVar12 = &UNK_10b23a4d8;
                puVar23 = (undefined8 *)0x5d;
                pcVar13 = &UNK_108cc991d;
LAB_100fe738c:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar13,puVar23,puVar12);
                goto LAB_100fe7474;
              }
              piVar7 = (int *)*plVar28;
              piVar30 = (int *)plVar28[1];
              uVar17 = (long)piVar7 - (long)piVar21;
              piVar18 = piVar21;
              if (uVar17 < uStack_f0) {
                piStack_150 = piVar30;
                piStack_148 = piVar7;
                piStack_140 = piVar21;
                piStack_138 = piVar25;
                if (uVar17 < 0x20) {
                  puVar23[0x43] = piVar21;
                  FUN_108855060(plVar28,piVar21,0x20,1,1);
                  piVar18 = (int *)plVar28[2];
                  piVar25 = piVar21;
                }
                if (piVar25 < piVar18) goto LAB_100fe7328;
                piVar7 = (int *)*plVar28;
                piVar30 = (int *)plVar28[1];
                uVar17 = (long)piVar7 - (long)piVar18;
              }
              piStack_150 = piVar30;
              piStack_148 = piVar7;
              piStack_140 = piVar18;
              piStack_138 = piVar25;
              if (uVar17 < uVar31) {
                uStack_e0 = uVar31;
                uStack_d0 = &uStack_e0;
                uStack_c8 = 0x55b4878;
                uStack_c4 = 1;
                uStack_c0 = &uStack_d8;
                puStack_b8 = &
                             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                ;
                puVar12 = &UNK_10b23a490;
                puVar23 = &uStack_d0;
                pcVar13 = s__buf_len___must_fit_in_remaining_108ab64d1;
                uStack_d8 = uVar17;
                goto LAB_100fe738c;
              }
              piVar21 = (int *)((long)piVar18 + uVar31);
              if ((piVar21 < piVar18) || (piVar7 < piVar21)) {
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (piVar18,piVar21,piVar7,&UNK_10b23a490);
                goto LAB_100fe7474;
              }
              uVar11 = _memcpy((long)piVar30 + (long)piVar18,piVar14,uVar31);
              auVar32._8_8_ = auStack_130._8_8_;
              auVar32._0_8_ = uVar11;
              if (piVar25 < piVar21) {
                piVar25 = piVar21;
                piStack_138 = piVar21;
              }
              piStack_140 = piVar21;
              auVar5 = auStack_130;
              if (piVar7 < piVar21) {
LAB_100fe714c:
                puVar12 = &UNK_10b4cd1c8;
                piVar25 = piStack_140;
LAB_100fe7164:
                auStack_130 = auVar5;
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (0,piVar25,piVar7,puVar12);
                goto LAB_100fe7474;
              }
              while( true ) {
                auStack_130._8_8_ = auVar32._8_8_;
                auVar5._8_8_ = auStack_130._8_8_;
                auVar5._0_8_ = auStack_130._0_8_;
                uVar11 = auVar32._0_8_;
                lVar22 = auVar33._8_8_;
                if (piVar7 < piVar25) {
                  puVar12 = &UNK_10b4cd1b0;
                  goto LAB_100fe7164;
                }
                uStack_d0._0_4_ = SUB84(piVar30,0);
                uStack_d0._4_4_ = (int)((ulong)piVar30 >> 0x20);
                uStack_c8 = SUB84(piStack_140,0);
                uStack_c4 = (undefined4)((ulong)piStack_140 >> 0x20);
                uStack_c0._0_4_ = SUB84(piVar25,0);
                uStack_c0._4_4_ = (undefined4)((ulong)piVar25 >> 0x20);
                piStack_100 = (int *)plVar28[1];
                if (piStack_100 != piVar30) {
                  __ZN4core9panicking13assert_failed17hec2b10233cd65be6E
                            (0,&piStack_100,&uStack_d0,0);
                  goto LAB_100fe7474;
                }
                puVar23[0x43] = piVar25;
                plVar28[2] = (long)piStack_140;
                if ((auVar33._0_8_ & 1) != 0) {
                  *(undefined1 *)(puVar23 + 0x46) = 3;
                  goto LAB_100fe706c;
                }
                if (lVar22 != 0) {
                  if (puVar23[0x3e] != 0) {
                    uVar11 = _free(puVar23[0x3f]);
                    auVar32._8_8_ = auStack_130._8_8_;
                    auVar32._0_8_ = uVar11;
                  }
                  unaff_x25 = 0x8000000000000000;
                  goto LAB_100fe6f1c;
                }
                if (uVar31 == 0) {
                  puVar23[0x45] = 0;
                  unaff_x25 = puVar23[0x3e];
                  lVar22 = puVar23[0x3f];
                  uVar26 = puVar23[0x40];
                  *(undefined1 *)(puVar23 + 0x46) = 1;
                  if (unaff_x25 == 0x8000000000000001) goto LAB_100fe706c;
                  goto LAB_100fe6f28;
                }
                lVar24 = lVar24 + uVar31;
                puVar23[0x45] = lVar24;
                piVar14 = (int *)*plVar28;
                piVar7 = piVar25;
                piVar30 = piStack_140;
                if ((ulong)((long)piVar14 - (long)piStack_140) < 0x20) break;
LAB_100fe6d4c:
                if (piVar7 < piVar30) goto LAB_100fe7254;
LAB_100fe6d98:
                piStack_150 = (int *)plVar28[1];
                piStack_148 = piVar14;
                piStack_140 = piVar30;
                piStack_138 = piVar7;
                if (piVar14 < piVar30) {
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (0,piVar30,piVar14,&UNK_10b209248);
                  goto LAB_100fe7474;
                }
                auVar33 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                                    (plVar10,param_3,&piStack_150);
                auStack_130._0_8_ = auVar33._0_8_;
                if (piStack_148 < piStack_140) {
                  auStack_130 = auVar33;
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (0,piStack_140,piStack_148,&UNK_10b209248);
                  goto LAB_100fe7474;
                }
                uVar31 = (long)piStack_140 - (long)piVar30;
                piVar7 = piStack_148;
                piVar30 = piStack_150;
                piVar25 = piStack_138;
                auVar32 = auVar33;
                auVar5 = auVar33;
                if (piStack_148 < piStack_140) goto LAB_100fe714c;
              }
            }
            puVar23[0x43] = piVar7;
            FUN_108855060(plVar28,piVar7,0x20,1,1);
            piVar30 = (int *)plVar28[2];
            piVar14 = (int *)*plVar28;
            if (piVar30 <= piVar7) goto LAB_100fe6d98;
LAB_100fe7254:
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc991d,0x5d,&UNK_10b23a4d8);
            goto LAB_100fe7474;
          }
          if (*piVar19 != 1) goto LAB_100fe7340;
          unaff_x25 = puVar23[0x3d];
joined_r0x000100fe6fc8:
          auStack_130._8_8_ = auVar32._8_8_;
          uVar11 = auVar32._0_8_;
          if (unaff_x25 == 0x8000000000000000) {
            *(undefined4 *)(puVar23 + 0x3c) = 2;
            uVar31 = puVar23[0x3e];
            if (uVar31 != 0) goto LAB_100fe6b28;
            puVar12 = &UNK_10b2093e0;
          }
          else {
            piStack_160 = (int *)(puVar23 + 0x2c);
            if (!bVar3) {
LAB_100fe706c:
              *puVar8 = 0x8000000000000001;
              uVar15 = 3;
              goto LAB_100fe6bf8;
            }
            if (*piStack_160 == 1) {
              *(undefined4 *)(puVar23 + 0x2c) = 2;
              if (1 < *(uint *)(puVar23 + 0x2d)) {
LAB_100fe73a8:
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b23ac48);
                goto LAB_100fe7474;
              }
              if ((*(uint *)(puVar23 + 0x2d) & 1) == 0) {
                if (*piStack_180 == 1) {
                  iVar20 = *(int *)((long)puVar23 + 0x16c);
                  uVar17 = puVar23[0x32];
                  *(undefined4 *)(puVar23 + 0x31) = 2;
                  if (0x8000000000000000 < uVar17) goto LAB_100fe73a8;
                  puVar29 = (undefined8 *)puVar23[0x34];
                  uVar31 = puVar23[0x33];
                  uStack_c0._0_4_ = SUB84(puVar29,0);
                  uStack_c0._4_4_ = (undefined4)((ulong)puVar29 >> 0x20);
                  uStack_c8 = (undefined4)uVar31;
                  uStack_c4 = (undefined4)(uVar31 >> 0x20);
                  uStack_d0._0_4_ = (undefined4)uVar17;
                  uStack_d0._4_4_ = (int)(uVar17 >> 0x20);
                  if (uVar17 != 0x8000000000000000) {
                    *piVar19 = 2;
                    if (0x8000000000000000 < unaff_x25) {
                      __ZN4core9panicking5panic17h30f5ec71e3af4326E
                                (&UNK_108ca1a1b,0x28,&UNK_10b23ac48);
                      goto LAB_100fe7474;
                    }
                    piVar7 = (int *)puVar23[0x3e];
                    puVar27 = (undefined8 *)puVar23[0x3f];
                    goto LAB_100fe6b2c;
                  }
                  FUN_100de21d4(&uStack_c8);
                  puVar12 = &UNK_10b2093c8;
                }
                else {
                  puVar12 = &UNK_10b2093b0;
                }
                func_0x000108a07a20(puVar12);
                goto LAB_100fe7474;
              }
              uVar31 = puVar23[0x2e];
              if ((uVar31 & 3) == 1) {
                uVar11 = *(undefined8 *)(uVar31 - 1);
                puVar23 = *(undefined8 **)(uVar31 + 7);
                pcVar16 = (code *)*puVar23;
                if (pcVar16 != (code *)0x0) {
                  (*pcVar16)(uVar11);
                }
                if (puVar23[1] != 0) {
                  _free(uVar11);
                }
                _free((undefined8 *)(uVar31 - 1));
              }
              puVar12 = &UNK_10b209398;
            }
            else {
              puVar12 = &UNK_10b209380;
            }
          }
LAB_100fe73a0:
          func_0x000108a07a20(puVar12);
          goto LAB_100fe7474;
        }
      }
LAB_100fe73f8:
      func_0x000108a07af4(&UNK_10b23aca8);
LAB_100fe7474:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100fe7478);
      (*pcVar16)();
    }
    __ZN5tokio6signal4unix6signal17h0eb8e985e7a70e48E(&lStack_40,2,&UNK_10b4cd708);
    param_1[2] = lStack_40;
    param_1[3] = lStack_38;
    if (lStack_40 == 0) goto LAB_100fe6464;
    *param_1 = lStack_40;
    param_1[1] = lStack_38;
    param_1[4] = (long)param_1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else if (bVar2 != 3) goto LAB_100fe6490;
  cVar6 = FUN_100fe62c8(param_1 + 4,param_2);
  if (cVar6 == '\x02') {
    *(undefined1 *)(param_1 + 9) = 3;
    return 1;
  }
  lVar24 = *param_1;
  puVar23 = (undefined8 *)param_1[1];
  pcVar16 = (code *)*puVar23;
  if (pcVar16 != (code *)0x0) {
    (*pcVar16)(lVar24);
  }
  if (puVar23[1] != 0) {
    _free(lVar24);
  }
LAB_100fe6464:
  *(undefined1 *)(param_1 + 9) = 1;
  return 0;
}

