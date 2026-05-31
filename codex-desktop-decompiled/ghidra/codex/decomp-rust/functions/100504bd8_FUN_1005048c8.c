
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1005048c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  char *pcVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *plVar12;
  undefined1 uVar13;
  byte bVar14;
  uint uVar15;
  uint extraout_w8;
  undefined *puVar16;
  code *pcVar17;
  long *plVar18;
  long extraout_x9;
  long extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  undefined8 uVar19;
  undefined8 extraout_x14;
  ulong *puVar20;
  undefined8 extraout_x15;
  undefined8 uVar21;
  undefined8 extraout_x16;
  ulong uVar22;
  undefined8 extraout_x17;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  long *unaff_x24;
  byte *pbVar32;
  long lVar33;
  long *plVar34;
  undefined8 uVar35;
  long *plVar36;
  long lVar37;
  byte *pbVar38;
  long *plVar39;
  undefined8 uVar40;
  long *plVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  long lStack_22f8;
  long lStack_22f0;
  long *plStack_22e8;
  long lStack_22e0;
  long *plStack_2290;
  long lStack_2260;
  long *plStack_2250;
  undefined8 *puStack_2240;
  long *plStack_21c0;
  long *plStack_21b8;
  long *plStack_21b0;
  long *plStack_21a8;
  long *plStack_21a0;
  long *plStack_2198;
  long *plStack_2190;
  long *plStack_2188;
  long *plStack_2180;
  long *plStack_2178;
  long *plStack_2170;
  long *plStack_2168;
  long *plStack_2160;
  long *plStack_2158;
  long *plStack_2150;
  long *plStack_2148;
  long *plStack_2140;
  long *plStack_2138;
  long lStack_2130;
  long *plStack_2120;
  long *plStack_2118;
  long *plStack_2110;
  long *plStack_2108;
  long *plStack_2100;
  long *plStack_20f0;
  long *plStack_20e8;
  long *plStack_20e0;
  long *plStack_20d8;
  long *plStack_20d0;
  long *plStack_20c8;
  long *plStack_20c0;
  long *plStack_20b8;
  long *plStack_20b0;
  long *plStack_20a0;
  long *plStack_2098;
  long *plStack_2090;
  long *plStack_2080;
  long *plStack_2078;
  long *plStack_2070;
  long *plStack_2068;
  long *plStack_2060;
  long lStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  long *plStack_2040;
  long *plStack_2038;
  long *plStack_2030;
  long *plStack_2028;
  long *plStack_2020;
  long *plStack_2010;
  long *plStack_2008;
  long *plStack_2000;
  long *plStack_1ff8;
  long *plStack_1ff0;
  long *plStack_1fe8;
  long *plStack_1fe0;
  long *plStack_1fd8;
  long *plStack_1fd0;
  long *plStack_1fc0;
  long *plStack_1fb8;
  long *plStack_1fb0;
  long *plStack_1fa0;
  long *plStack_1f98;
  long *plStack_1f90;
  long *plStack_1f88;
  long *plStack_1f80;
  long *plStack_1f78;
  long lStack_1f70;
  long lStack_1f68;
  long lStack_1f60;
  long lStack_1f58;
  long lStack_1f50;
  long lStack_1f48;
  long *plStack_1f40;
  long *plStack_1f38;
  long *plStack_1f30;
  long *plStack_1f28;
  long *plStack_1f20;
  long *plStack_1f18;
  long *plStack_1f10;
  long *plStack_1f08;
  long *plStack_1f00;
  long *plStack_1ef8;
  long *plStack_1ef0;
  long *plStack_1ee8;
  long *plStack_1ee0;
  long *plStack_1ed8;
  long *plStack_1ed0;
  long *plStack_1ec8;
  long *plStack_1ec0;
  long *plStack_1eb8;
  long *plStack_1eb0;
  long *plStack_1ea8;
  long *plStack_1ea0;
  long *plStack_1e98;
  long *plStack_1e90;
  long *plStack_1e88;
  long *plStack_1e80;
  long *plStack_1e78;
  long lStack_1e70;
  undefined8 uStack_1e68;
  long *plStack_1e60;
  long lStack_1e58;
  undefined8 uStack_1e50;
  long alStack_1e40 [16];
  long alStack_1dc0 [31];
  long alStack_1cc8 [245];
  undefined8 uStack_1520;
  long alStack_4a8 [62];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_48;
  long *plVar11;
  
  bVar14 = *(byte *)(param_1 + 0x400);
  if (bVar14 < 3) {
    if (bVar14 != 0) {
      plStack_2290 = param_4;
      if (bVar14 == 1) {
        FUN_107c05cc0(&UNK_10b215cd8);
        plStack_2290 = param_4;
      }
      uVar23 = FUN_107c05cc4();
      _free();
      FUN_100de8a5c(param_1 + 0x420);
      FUN_100d82aec(param_1 + 0x210);
      *(undefined1 *)(param_1 + 0x400) = 2;
      __Unwind_Resume(uVar23);
      auVar43 = FUN_107c05ccc();
      plVar11 = auVar43._8_8_;
      puVar30 = auVar43._0_8_;
      uStack_1520 = 0;
      pbVar32 = (byte *)(puVar30 + 0x370);
      bVar14 = *(byte *)(puVar30 + 0x27);
      if (bVar14 < 4) {
        if (1 < bVar14) {
          if (bVar14 != 3) goto LAB_10050707c;
          bVar14 = *(byte *)(puVar30 + 0x66);
          uVar15 = (uint)bVar14;
          if (bVar14 < 3) {
            if (bVar14 == 0) {
              plVar34 = (long *)puVar30[0x2a];
              puVar28 = (undefined8 *)puVar30[0x2b];
              puVar30[0x2d] = puVar30[0x28];
              puVar30[0x2e] = puVar30[0x29];
              puVar30[0x2f] = puVar28;
              puVar30[0x30] = puVar30[0x2c];
              lVar6 = puVar28[8];
              goto joined_r0x000100504d74;
            }
            goto LAB_100507088;
          }
          if (bVar14 == 3) {
LAB_100505724:
            auVar43 = FUN_100fd3e50(puVar30 + 0x67,plVar11);
            uVar23 = auVar43._8_8_;
            pcVar10 = auVar43._0_8_;
            if (pcVar10 != (char *)0x0) {
              if (((*(char *)(puVar30 + 0x75) == '\x03') && (*(char *)(puVar30 + 0x74) == '\x03'))
                 && (*(char *)(puVar30 + 0x6b) == '\x04')) {
                __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                          (puVar30 + 0x6c);
                uVar23 = extraout_x1;
                if (puVar30[0x6d] != 0) {
                  (**(code **)(puVar30[0x6d] + 0x18))(puVar30[0x6e]);
                  uVar23 = extraout_x1_00;
                }
              }
              if (*(long *)(pcVar10 + 0x40) != 0) {
                uVar27 = *(undefined8 *)(puVar30[0x2f] + 8);
                plVar34 = *(long **)(puVar30[0x2f] + 0x10);
                plStack_2290 = plVar34;
                auVar43 = FUN_100e8dd9c(*(undefined8 *)(pcVar10 + 0x48),
                                        *(undefined8 *)(pcVar10 + 0x50),uVar27);
                uVar23 = auVar43._8_8_;
                lVar6 = 0;
                lVar24 = *(long *)(pcVar10 + 0x28);
                uVar8 = *(ulong *)(pcVar10 + 0x30);
                bVar14 = auVar43[7] >> 1;
                uVar22 = auVar43._0_8_ & uVar8;
                uVar35 = *(undefined8 *)(lVar24 + uVar22);
                uVar7 = CONCAT17(-((byte)((ulong)uVar35 >> 0x38) == bVar14),
                                 CONCAT16(-((byte)((ulong)uVar35 >> 0x30) == bVar14),
                                          CONCAT15(-((byte)((ulong)uVar35 >> 0x28) == bVar14),
                                                   CONCAT14(-((byte)((ulong)uVar35 >> 0x20) ==
                                                             bVar14),CONCAT13(-((byte)((ulong)uVar35
                                                                                      >> 0x18) ==
                                                                               bVar14),CONCAT12(-((
                                                  byte)((ulong)uVar35 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar35 >> 8) == bVar14),
                                                           -((byte)uVar35 == bVar14)))))))) &
                        0x8080808080808080;
                while( true ) {
                  while (uVar7 == 0) {
                    bVar42 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar35 >> 0x38) == -1),
                                                 CONCAT16(-((char)((ulong)uVar35 >> 0x30) == -1),
                                                          CONCAT15(-((char)((ulong)uVar35 >> 0x28)
                                                                    == -1),CONCAT14(-((char)((ulong)
                                                  uVar35 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar35 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar35 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar35 >> 8) == -1),-((char)uVar35 == -1)))))))),
                                        1);
                    if ((bVar42 & 1) != 0) goto LAB_1005059a8;
                    lVar6 = lVar6 + 8;
                    uVar22 = uVar22 + lVar6 & uVar8;
                    uVar35 = *(undefined8 *)(lVar24 + uVar22);
                    uVar7 = CONCAT17(-((byte)((ulong)uVar35 >> 0x38) == bVar14),
                                     CONCAT16(-((byte)((ulong)uVar35 >> 0x30) == bVar14),
                                              CONCAT15(-((byte)((ulong)uVar35 >> 0x28) == bVar14),
                                                       CONCAT14(-((byte)((ulong)uVar35 >> 0x20) ==
                                                                 bVar14),CONCAT13(-((byte)((ulong)
                                                  uVar35 >> 0x18) == bVar14),
                                                  CONCAT12(-((byte)((ulong)uVar35 >> 0x10) == bVar14
                                                            ),CONCAT11(-((byte)((ulong)uVar35 >> 8)
                                                                        == bVar14),
                                                                       -((byte)uVar35 == bVar14)))))
                                                  ))) & 0x8080808080808080;
                  }
                  uVar3 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                          (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                  lVar29 = lVar24 + (uVar22 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) &
                                    uVar8) * -0x90;
                  if ((plVar34 == *(long **)(lVar29 + -0x80)) &&
                     (iVar5 = _memcmp(uVar27,*(undefined8 *)(lVar29 + -0x88),plVar34),
                     uVar23 = extraout_x1_01, iVar5 == 0)) break;
                  uVar7 = uVar7 - 1 & uVar7;
                }
                uVar23 = *(undefined8 *)(lVar29 + -0x70);
                lVar6 = *(long *)(lVar29 + -0x68);
                if (lVar6 == 0) {
                  lVar24 = 1;
                }
                else {
                  lVar24 = _malloc(lVar6);
                  if (lVar24 == 0) {
                    FUN_107c03c64(1,lVar6);
                    goto LAB_100507264;
                  }
                }
                _memcpy(lVar24,uVar23,lVar6);
                uVar23 = *(undefined8 *)(lVar29 + -0x58);
                lVar33 = *(long *)(lVar29 + -0x50);
                if (lVar33 == 0) {
                  lVar37 = 1;
                }
                else {
                  lVar37 = _malloc(lVar33);
                  if (lVar37 == 0) {
                    FUN_107c03c64(1,lVar33);
                    goto LAB_100507264;
                  }
                }
                _memcpy(lVar37,uVar23,lVar33);
                uVar23 = extraout_x1_02;
                plVar34 = (long *)0x8000000000000005;
                if (*(long *)(lVar29 + -0x48) != -0x7ffffffffffffffb) {
                  FUN_10112c3fc(&plStack_1f00,(long *)(lVar29 + -0x48));
                  plStack_21b8 = plStack_1ef0;
                  plStack_21c0 = plStack_1ef8;
                  plStack_21a8 = plStack_1ee0;
                  plStack_21b0 = plStack_1ee8;
                  plStack_2198 = plStack_1ed0;
                  plStack_21a0 = plStack_1ed8;
                  plStack_2188 = plStack_1ec0;
                  plStack_2190 = plStack_1ec8;
                  uVar23 = extraout_x1_03;
                  plVar34 = plStack_1f00;
                }
                plStack_2008 = plStack_21b8;
                plStack_2010 = plStack_21c0;
                plStack_1ff8 = plStack_21a8;
                plStack_2000 = plStack_21b0;
                plStack_1fe8 = plStack_2198;
                plStack_1ff0 = plStack_21a0;
                plStack_1fd8 = plStack_2188;
                plStack_1fe0 = plStack_2190;
                if (lVar6 != -0x8000000000000000) {
                  plStack_1ef8 = plStack_21b8;
                  plStack_1f00 = plStack_21c0;
                  plStack_1ee8 = plStack_21a8;
                  plStack_1ef0 = plStack_21b0;
                  plStack_1ed8 = plStack_2198;
                  plStack_1ee0 = plStack_21a0;
                  plStack_1ec8 = plStack_2188;
                  plStack_1ed0 = plStack_2190;
                  puVar30[0x32] = lVar6;
                  puVar30[0x33] = lVar24;
                  puVar30[0x34] = lVar6;
                  puVar30[0x35] = lVar33;
                  puVar30[0x36] = lVar37;
                  puVar30[0x37] = lVar33;
                  puVar30[0x38] = plVar34;
                  puVar30[0x3a] = plStack_21b8;
                  puVar30[0x39] = plStack_21c0;
                  puVar30[0x3c] = plStack_21a8;
                  puVar30[0x3b] = plStack_21b0;
                  puVar30[0x3e] = plStack_2198;
                  puVar30[0x3d] = plStack_21a0;
                  puVar30[0x40] = plStack_2188;
                  puVar30[0x3f] = plStack_2190;
                  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(pcVar10,1);
                  lVar6 = *(long *)puVar30[0x2d] + 0x10;
                  lVar24 = *(long *)puVar30[0x2e] + 0x10;
                  uVar23 = puVar30[0x33];
                  uVar35 = puVar30[0x34];
                  uVar27 = puVar30[0x36];
                  uVar19 = puVar30[0x37];
                  puVar30[0x6d] = uVar23;
                  puVar30[0x6e] = uVar35;
                  puVar30[0x6f] = uVar27;
                  puVar30[0x70] = uVar19;
                  puVar30[0xad] = lVar6;
                  puVar30[0xae] = lVar24;
                  *(undefined1 *)((long)puVar30 + 0x57e) = 0;
                  goto LAB_100505a58;
                }
              }
LAB_1005059a8:
              if (*pcVar10 == '\0') {
                *pcVar10 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar10,uVar23,1000000000);
              }
              FUN_1060fa678(pcVar10,1,pcVar10);
              plVar34 = (long *)0x0;
              goto LAB_100504e8c;
            }
            uVar13 = 3;
          }
          else {
            if (bVar14 != 4) {
              bVar14 = *(byte *)((long)puVar30 + 0x3c2);
              if (bVar14 < 3) {
                if (bVar14 != 0) {
                  if (bVar14 == 1) {
                    FUN_107c05cc0(&UNK_10b215d50);
                  }
                  else {
                    FUN_107c05cc4(&UNK_10b215d50);
                  }
                  goto LAB_100507264;
                }
                lVar6 = puVar30[0x76];
                uVar23 = puVar30[0x6e];
                uVar27 = puVar30[0x6f];
                plVar34 = (long *)puVar30[0x77];
                plStack_2250 = (long *)puVar30[0x73];
LAB_1005069b0:
                plStack_21b8 = (long *)puVar30[0x71];
                plStack_21c0 = (long *)puVar30[0x70];
                plStack_21b0 = (long *)puVar30[0x72];
                puVar30[0x74] = lVar6;
                puVar30[0x6c] = uVar23;
                puVar30[0x6d] = uVar27;
                puVar30[0x75] = plStack_2250;
                pbVar38 = (byte *)(puVar30 + 0x78);
                *(undefined2 *)(puVar30 + 0x78) = 0x100;
                lVar6 = *plVar34;
                uVar7 = *(ulong *)(lVar6 + 0x10);
                *(undefined1 *)((long)puVar30 + 0x3c1) = 0;
                puVar28 = puVar30 + 0x7b;
                puVar30[0x7b] = plVar34;
                puVar30[0x7c] = (ulong *)(lVar6 + 0x10);
                puVar30[0x7d] = uVar7 >> 2;
                puVar30[0x7e] = 0;
                puVar30[0x80] = 0;
                puVar30[0x7f] = 0;
                puVar30[0x82] = 0;
                *(undefined1 *)(puVar30 + 0x83) = 0;
                puVar30[0x85] = plStack_21b8;
                puVar30[0x84] = plStack_21c0;
                puVar30[0x86] = plStack_21b0;
                puVar30[0x79] = pbVar38;
                puVar30[0x7a] = puVar28;
LAB_100506a2c:
                plVar18 = puVar30 + 0x68;
                plVar34 = (long *)(*
                                  ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                                  )();
                if ((char)plVar34[9] == '\x01') {
LAB_100506a70:
                  if (*(char *)((long)plVar34 + 0x44) != '\x01' ||
                      *(char *)((long)plVar34 + 0x45) != '\0') goto LAB_100506a84;
                  FUN_10610bbb4(*(undefined8 *)*plVar11,((undefined8 *)*plVar11)[1]);
LAB_100506ae0:
                  uVar13 = 3;
                  goto LAB_100506c60;
                }
                if ((char)plVar34[9] != '\x02') {
                  __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                            (plVar34,&DAT_100c35d48);
                  *(undefined1 *)(plVar34 + 9) = 1;
                  unaff_x24 = plVar34;
                  goto LAB_100506a70;
                }
LAB_100506a84:
                plVar34 = (long *)0x8000000000000005;
                plVar39 = plVar18;
                if ((*pbVar38 & 1) == 0) {
                  uVar7 = __ZN112__LT_tokio_util__sync__cancellation_token__WaitForCancellationFuture_u20_as_u20_core__future__future__Future_GT_4poll17h718460b03fea36adE
                                    (puVar28,plVar11);
                  if ((uVar7 & 1) != 0) {
                    if ((*pbVar38 >> 1 & 1) == 0) goto LAB_100506ab4;
                    goto LAB_100506ae0;
                  }
                  bVar14 = *pbVar38 | 1;
                  plVar12 = (long *)0x8000000000000007;
LAB_100506b78:
                  *pbVar38 = bVar14;
                }
                else {
                  if ((*pbVar38 >> 1 & 1) == 0) {
LAB_100506ab4:
                    bVar14 = *(byte *)(puVar28 + 0xb);
                    if (bVar14 < 2) {
                      if (bVar14 != 0) {
                        FUN_107c05cc0(&UNK_10b215e88);
                        goto LAB_100507264;
                      }
                      puVar28[10] = puVar28[9];
                    }
                    else if (bVar14 != 3) {
                      FUN_107c05cc4(&UNK_10b215e88);
                      goto LAB_100507264;
                    }
                    FUN_10140150c(&plStack_1f00,puVar28 + 10,plVar11);
                    unaff_x24 = plStack_1ee8;
                    plVar39 = plStack_1ef0;
                    plVar34 = plStack_1ef8;
                    plVar12 = plStack_1f00;
                    if (plStack_1f00 != (long *)0x8000000000000008) {
                      FUN_100e8d5b4(puVar28 + 10);
                      if (plVar12 == (long *)0x8000000000000007) {
                        plVar12 = (long *)0x8000000000000004;
                      }
                      *(undefined1 *)(puVar28 + 0xb) = 1;
                      bVar14 = *pbVar38 | 2;
                      goto LAB_100506b78;
                    }
                    uVar13 = 3;
                    *(undefined1 *)(puVar28 + 0xb) = 3;
                    goto LAB_100506c60;
                  }
                  plVar12 = (long *)0x8000000000000009;
                }
                puVar30[0x68] = plVar12;
                puVar30[0x69] = plVar34;
                puVar30[0x6a] = plVar39;
                puVar30[0x6b] = unaff_x24;
                FUN_100d91e84(puVar30 + 0x7b);
                plVar18 = (long *)*plVar18;
                puVar16 = (undefined *)((long)plVar18 + 0x7ffffffffffffff9);
                if (plVar18 < (long *)0x8000000000000007) {
                  puVar16 = (undefined *)0x1;
                }
                if (puVar16 == (undefined *)0x0) {
                  if (puVar30[0x75] != 0) {
                    __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
                              ();
                  }
                  puVar30[0x79] = 0x8000000000000006;
                  puVar30[0x7d] = puVar30[0x74];
                  puVar30[0x7e] = puVar30[0x6c];
                  puVar30[0x7f] = puVar30[0x6d];
                  *(undefined1 *)(puVar30 + 0x87) = 0;
                  goto LAB_100506c4c;
                }
                if (puVar16 != (undefined *)0x1) {
                  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                            (&UNK_108ca2bde,0x6b,&UNK_10b215d68);
                  goto LAB_100507264;
                }
                *(undefined1 *)((long)puVar30 + 0x3c1) = 0;
                plStack_2000 = (long *)puVar30[0x6a];
                plStack_2008 = (long *)puVar30[0x69];
                plStack_1ff8 = (long *)puVar30[0x6b];
                *(undefined1 *)((long)puVar30 + 0x3c2) = 1;
                if (plVar18 == (long *)0x8000000000000007) goto LAB_100506c64;
                plStack_2010 = plVar18;
                plStack_1f40 = plStack_2008;
                plStack_1f38 = plStack_2000;
                plStack_1f30 = plStack_1ff8;
                if ((long)plVar18 < 0) {
                  uVar7 = (ulong)plVar18 & 0x7fffffffffffffff;
                  if ((1L << ((ulong)plVar18 & 0x3f) & 0xbU) != 0) goto LAB_100506d54;
                  if ((1L << ((ulong)plVar18 & 0x3f) & 0x70U) != 0) {
                    uVar23 = 0x15;
                    plVar34 = (long *)_malloc(0x15);
                    if (plVar34 != (long *)0x0) goto LAB_100506cc8;
                    goto LAB_100507154;
                  }
                  lVar6 = puVar30[0x31];
                  if ((*(long *)(lVar6 + 0x48) != -0x8000000000000000) &&
                     (*(long *)(lVar6 + 0x58) != 0)) {
                    lVar24 = *(long *)(lVar6 + 0x50);
                    lVar6 = *(long *)(lVar6 + 0x58) * 0x30;
                    do {
                      if ((*(long *)(lVar24 + 0x10) == 0x16) &&
                         (plVar34 = *(long **)(lVar24 + 8),
                         (*plVar34 == 0x6f6620776f6c6c41 && plVar34[1] == 0x7320736968742072) &&
                         *(long *)((long)plVar34 + 0xe) == 0x6e6f697373657320)) {
                        func_0x000100025ae8(&plStack_1f00);
                        if (plStack_1f00 != (long *)0x8000000000000000) {
                          uVar7 = 2;
                          uVar23 = *(undefined8 *)(puVar30[0x31] + 8);
                          plVar18 = *(long **)(puVar30[0x31] + 0x10);
                          plVar39 = plStack_1f00;
                          plVar12 = plStack_1ef0;
                          plVar34 = plStack_1ef8;
                          goto joined_r0x000100506cf8;
                        }
                        break;
                      }
                      lVar24 = lVar24 + 0x30;
                      lVar6 = lVar6 + -0x30;
                    } while (lVar6 != 0);
                  }
                  plVar34 = (long *)_malloc(5);
                  if (plVar34 == (long *)0x0) {
                    FUN_107c03c64(1,5);
                    goto LAB_100507264;
                  }
                  *(undefined1 *)((long)plVar34 + 4) = 0x77;
                  *(undefined4 *)plVar34 = 0x6f6c6c41;
                  bVar4 = false;
                  uVar7 = 2;
                  uVar23 = *(undefined8 *)(puVar30[0x31] + 8);
                  plVar18 = *(long **)(puVar30[0x31] + 0x10);
                }
                else {
                  uVar7 = 3;
LAB_100506d54:
                  uVar23 = 5;
                  plVar34 = (long *)_malloc(5);
                  if (plVar34 == (long *)0x0) goto LAB_100507154;
                  *(undefined1 *)((long)plVar34 + 4) = 0x77;
                  *(undefined4 *)plVar34 = 0x6f6c6c41;
                  bVar4 = plVar18 == (long *)0x0;
                  uVar23 = *(undefined8 *)(puVar30[0x31] + 8);
                  plVar18 = *(long **)(puVar30[0x31] + 0x10);
                }
                plVar12 = (long *)0x5;
                plVar39 = (long *)0x5;
                if (plVar18 == (long *)0x0) goto LAB_100506d9c;
LAB_100506cfc:
                plVar36 = (long *)_malloc(plVar18);
                if (plVar36 == (long *)0x0) {
                  FUN_107c03c64(1,plVar18);
                  goto LAB_100507264;
                }
              }
              else {
                if (bVar14 == 3) {
                  pbVar38 = (byte *)puVar30[0x79];
                  puVar28 = (undefined8 *)puVar30[0x7a];
                  goto LAB_100506a2c;
                }
LAB_100506c4c:
                uVar7 = FUN_1005a4314(puVar30 + 0x79,plVar11);
                if ((uVar7 & 1) != 0) {
                  uVar13 = 4;
LAB_100506c60:
                  *(undefined1 *)((long)puVar30 + 0x3c2) = uVar13;
LAB_100506c64:
                  uVar13 = 5;
                  goto LAB_100506c68;
                }
                FUN_100d2d6dc(puVar30 + 0x79);
                *(undefined1 *)((long)puVar30 + 0x3c1) = 0;
                *(undefined1 *)((long)puVar30 + 0x3c2) = 1;
                plStack_2000 = plStack_1f38;
                plStack_2008 = plStack_1f40;
                plStack_1ff8 = plStack_1f30;
                plStack_2010 = (long *)0x8000000000000006;
                uVar7 = 6;
                uVar23 = 0x15;
                plVar34 = (long *)_malloc(0x15);
                if (plVar34 == (long *)0x0) {
LAB_100507154:
                  FUN_107c03c64(1,uVar23);
                  goto LAB_100507264;
                }
LAB_100506cc8:
                plVar34[1] = 0x6c6365645f70636d;
                *plVar34 = 0x5f7865646f635f5f;
                *(undefined8 *)((long)plVar34 + 0xd) = 0x5f5f656e696c6365;
                uVar23 = *(undefined8 *)(puVar30[0x31] + 8);
                plVar18 = *(long **)(puVar30[0x31] + 0x10);
                plVar39 = (long *)0x15;
                plVar12 = (long *)0x15;
joined_r0x000100506cf8:
                bVar4 = false;
                if (plVar18 != (long *)0x0) goto LAB_100506cfc;
LAB_100506d9c:
                plVar36 = (long *)0x1;
              }
              _memcpy(plVar36,uVar23,plVar18);
              plVar41 = (long *)_malloc(0x18);
              if (plVar41 == (long *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                goto LAB_100507264;
              }
              *plVar41 = (long)plVar39;
              plVar41[1] = (long)plVar34;
              plVar41[2] = (long)plVar12;
              plStack_1ee8 = (long *)0x1;
              plStack_1ed8 = (long *)0x1;
              plStack_1f00 = plVar18;
              plStack_1ef8 = plVar36;
              plStack_1ef0 = plVar18;
              plStack_1ee0 = plVar41;
              thunk_FUN_1088339a4(&plStack_21c0,&plStack_1f00);
              plVar18 = plStack_2000;
              plVar34 = plStack_21c0;
              plStack_2078 = plStack_21b0;
              plStack_2080 = plStack_21b8;
              plStack_2068 = plStack_21a0;
              plStack_2070 = plStack_21a8;
              plStack_2060 = plStack_2198;
              if (uVar7 == 3) {
                plVar18 = plStack_2008;
                if (!bVar4) {
LAB_100506e68:
                  _free(plVar18);
                }
              }
              else if (uVar7 == 1) {
                if (plStack_1ff8 != (long *)0x0) {
                  plVar39 = plStack_2000 + 1;
                  plVar12 = plStack_1ff8;
                  do {
                    if (plVar39[-1] != 0) {
                      _free(*plVar39);
                    }
                    plVar39 = plVar39 + 3;
                    plVar12 = (long *)((long)plVar12 + -1);
                  } while (plVar12 != (long *)0x0);
                }
                if (plStack_2008 != (long *)0x0) goto LAB_100506e68;
              }
              puVar28 = puVar30 + 0x67;
              __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                        (puVar28);
              lVar6 = *(long *)*puVar28;
              *(long *)*puVar28 = lVar6 + -1;
              LORelease();
              if (lVar6 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar28);
              }
              FUN_100e8cfdc(puVar30 + 0x41);
              if (puVar30[0x32] != 0) {
                _free(puVar30[0x33]);
              }
              if (puVar30[0x35] != 0) {
                _free(puVar30[0x36]);
              }
              if (puVar30[0x38] != -0x7ffffffffffffffb) {
                FUN_100de6690(puVar30 + 0x38);
              }
              goto LAB_100504e8c;
            }
            bVar14 = *(byte *)((long)puVar30 + 0x57e);
            if (bVar14 < 4) {
              if (bVar14 < 2) {
                if (bVar14 != 0) {
                  FUN_107c05cc0(&UNK_10b215bb8);
                  goto LAB_100507264;
                }
                lVar6 = puVar30[0xad];
                lVar24 = puVar30[0xae];
                uVar23 = puVar30[0x6d];
                uVar35 = puVar30[0x6e];
                uVar27 = puVar30[0x6f];
                uVar19 = puVar30[0x70];
LAB_100505a58:
                *(undefined2 *)((long)puVar30 + 0x57c) = 0;
                *(undefined4 *)(puVar30 + 0xaf) = 0;
                puVar30[0x71] = lVar24;
                puVar30[0x67] = uVar23;
                puVar30[0x68] = uVar35;
                puVar30[0x69] = uVar27;
                puVar30[0x6a] = uVar19;
                puVar30[0xb0] = *(long *)(lVar6 + 0x360) + 0x10;
                *(undefined1 *)(puVar30 + 0xbb) = 0;
              }
              else if (bVar14 != 3) {
                FUN_107c05cc4(&UNK_10b215bb8);
                goto LAB_100507264;
              }
              auVar43 = FUN_100fd4eb8(puVar30 + 0xb0,plVar11);
              if (auVar43._0_8_ == 0) {
                uVar13 = 3;
              }
              else {
                *(undefined1 (*) [16])(puVar30 + 0x6b) = auVar43;
                if ((*(char *)(puVar30 + 0xbb) == '\x03') && (*(char *)(puVar30 + 0xba) == '\x03'))
                {
                  __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                            (puVar30 + 0xb2);
                  if (puVar30[0xb3] != 0) {
                    (**(code **)(puVar30[0xb3] + 0x18))(puVar30[0xb4]);
                  }
                }
                lVar24 = puVar30[0x6c];
                auVar43 = __ZN9codex_mcp3mcp20ToolPluginProvenance29plugin_id_for_mcp_server_name17hdff749034fb6cad8E
                                    (*(long *)(lVar24 + 0x60) + 0x10,puVar30[0x67],puVar30[0x68]);
                lVar6 = auVar43._8_8_;
                if (auVar43._0_8_ == 0) {
                  puVar30[0x72] = 0x8000000000000000;
                }
                else {
                  if (lVar6 == 0) {
                    lVar24 = 1;
                  }
                  else {
                    lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar6,1);
                    if (lVar24 == 0) {
                      FUN_107c03c64(1,lVar6);
                      goto LAB_100507264;
                    }
                  }
                  _memcpy(lVar24,auVar43._0_8_,lVar6);
                  puVar30[0x72] = lVar6;
                  puVar30[0x73] = lVar24;
                  puVar30[0x74] = lVar6;
                  lVar24 = puVar30[0x6c];
                }
                *(undefined1 *)((long)puVar30 + 0x57d) = 1;
                puVar30[0xb5] = lVar24;
                *(undefined1 *)((long)puVar30 + 0x5b2) = 0;
LAB_100505c5c:
                plStack_2250 = puVar30 + 0x67;
                plVar12 = plVar11;
                FUN_101637268(&plStack_1f00,puVar30 + 0xb0);
                plVar39 = plStack_1ef0;
                plVar34 = plStack_1ef8;
                plVar18 = plStack_1f00;
                if (plStack_1f00 != (long *)0x8000000000000000) {
                  FUN_100cdb8b4(puVar30 + 0xb0);
                  lVar6 = (long)plVar39 * 0x1a8;
                  plStack_21c0 = plVar34;
                  plStack_21b8 = plVar34;
                  plVar36 = plVar34 + (long)plVar39 * 0x35;
                  plStack_21b0 = plVar18;
                  plVar18 = plStack_21b8;
                  plStack_21a8 = plVar36;
                  if (plVar39 != (long *)0x0) {
                    uVar23 = puVar30[0x67];
                    plVar39 = (long *)puVar30[0x68];
                    uVar27 = puVar30[0x69];
                    plVar41 = (long *)puVar30[0x6a];
                    do {
                      plVar12 = (long *)0x1a8;
                      _memcpy(&plStack_1f00,plVar34);
                      if (((plStack_1ef0 == plVar39) &&
                          (plVar12 = plVar39, iVar5 = _memcmp(plStack_1ef8,uVar23),
                          iVar5 == 0 && plStack_1e60 == plVar41)) &&
                         (plVar12 = plVar41, iVar5 = _memcmp(uStack_1e68,uVar27),
                         plVar18 = plStack_1f00, iVar5 == 0)) {
                        if (plStack_1f00 != (long *)0x8000000000000000) {
                          plStack_21b8 = plVar34 + 0x35;
                          _memcpy(&plStack_1f00,plVar34 + 1,0x1a0);
                          *(undefined4 *)(puVar30 + 0xaf) = 0x1010101;
                          *(undefined1 *)((long)puVar30 + 0x57c) = 1;
                          puVar30[0x75] = plVar18;
                          _memcpy(puVar30 + 0x76,&plStack_1f00,0x1a0);
                          FUN_100e583a0(&plStack_21c0);
                          if ((puVar30[0x68] != 10) ||
                             (*(long *)*plStack_2250 != 0x70615f7865646f63 ||
                              (short)((long *)*plStack_2250)[1] != 0x7370)) goto LAB_100506034;
                          puVar30[0xb0] = *(long *)(puVar30[0x71] + 0x788) + 0x10;
                          *(undefined1 *)(puVar30 + 0xb3) = 0;
                          goto LAB_100505054;
                        }
                      }
                      else {
                        FUN_100dea5d4(&plStack_1f00);
                      }
                      plVar34 = plVar34 + 0x35;
                      lVar6 = lVar6 + -0x1a8;
                      plVar18 = plVar36;
                    } while (lVar6 != 0);
                  }
                  plStack_21b8 = plVar18;
                  FUN_100e583a0(&plStack_21c0);
                  *(undefined1 *)((long)puVar30 + 0x57c) = 0;
                  *(undefined4 *)(puVar30 + 0xaf) = 0;
                  if ((puVar30[0x72] != -0x8000000000000000) && (puVar30[0x72] != 0)) {
                    _free(puVar30[0x73]);
                  }
                  *(undefined1 *)((long)puVar30 + 0x57d) = 0;
                  auVar43 = __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
                                      (puVar30[0x6b],1);
                  lVar6 = -0x7fffffffffffffff;
                  lStack_22f0 = extraout_x9;
                  lStack_22f8 = extraout_x10;
                  uVar23 = extraout_x11;
                  uVar27 = extraout_x12;
                  uVar35 = extraout_x14;
                  uVar19 = extraout_x15;
                  uVar40 = extraout_x16;
                  uVar21 = extraout_x17;
                  plStack_22e8 = plVar36;
                  goto LAB_1005067d0;
                }
                uVar13 = 4;
              }
LAB_1005060d4:
              *(undefined1 *)((long)puVar30 + 0x57e) = uVar13;
              uVar13 = 4;
            }
            else {
              if (bVar14 == 4) goto LAB_100505c5c;
              if (bVar14 == 5) {
LAB_100505054:
                FUN_1004ec6d4(&lStack_2058,puVar30 + 0xb0,plVar11);
                if (lStack_2058 == -0x7fffffffffffffff) {
                  uVar13 = 5;
                  goto LAB_1005060d4;
                }
                puVar30[0xab] = uStack_2050;
                puVar30[0xaa] = lStack_2058;
                puVar30[0xac] = uStack_2048;
                FUN_100cedb70(puVar30 + 0xb0);
                plVar34 = (long *)puVar30[0xaa];
                if (plVar34 == (long *)0x8000000000000000) {
                  lVar6 = *(long *)(puVar30[0x71] + 0x788) + 0x10;
                  puVar30[0xb0] = lVar6;
                  *(undefined1 *)(puVar30 + 0x4f8) = 0;
                  goto LAB_100505b80;
                }
                plVar39 = (long *)puVar30[0xab];
                plVar18 = (long *)puVar30[0xac];
LAB_100506120:
                plVar12 = plVar39;
                if (puVar30[0xa3] == -0x8000000000000000) {
                  for (; plVar18 != (long *)0x0; plVar18 = (long *)((long)plVar18 + -1)) {
                    FUN_100e3b46c(plVar12);
                    plVar12 = plVar12 + 0x4e;
                  }
                  lStack_2260 = -0x8000000000000000;
                }
                else {
                  lStack_2260 = -0x8000000000000000;
                  if (plVar18 == (long *)0x0) {
LAB_100506320:
                    uVar7 = (long)plVar39 + ((long)plVar18 * 0x270 - (long)plVar12);
                    if (uVar7 != 0) {
                      uVar7 = uVar7 / 0x270;
                      do {
                        FUN_100e3b46c(plVar12);
                        plVar12 = plVar12 + 0x4e;
                        uVar7 = uVar7 - 1;
                      } while (uVar7 != 0);
                    }
                  }
                  else {
                    uVar23 = puVar30[0xa4];
                    plVar36 = (long *)puVar30[0xa5];
                    lVar6 = (long)plVar18 * 0x270;
                    do {
                      _memcpy(&plStack_1f00,plVar12,0x270);
                      if ((plStack_1ef0 == plVar36) &&
                         (iVar5 = _memcmp(plStack_1ef8,uVar23,plVar36), plVar41 = plStack_1f00,
                         iVar5 == 0)) {
                        if (plStack_1f00 == (long *)0x8000000000000000) goto LAB_100506194;
                        _memcpy(&plStack_1ef8,plVar12 + 1,0x268);
                        lStack_2260 = plVar12[9];
                        lStack_22f0 = plVar12[10];
                        lStack_22f8 = plVar12[0xb];
                        plStack_1f00 = plVar41;
                        if (plVar41 != (long *)0x0) {
                          _free(plStack_1ef8);
                        }
                        if (plStack_1ee8 != (long *)0x0) {
                          _free(plStack_1ee0);
                        }
                        if ((plStack_1ea0 != (long *)0x8000000000000000) &&
                           (plStack_1ea0 != (long *)0x0)) {
                          _free(plStack_1e98);
                        }
                        if ((plStack_1e88 != (long *)0x8000000000000000) &&
                           (plStack_1e88 != (long *)0x0)) {
                          _free(plStack_1e80);
                        }
                        if ((lStack_1e70 != -0x8000000000000000) && (lStack_1e70 != 0)) {
                          _free(uStack_1e68);
                        }
                        if (alStack_1e40[0] != -0x7fffffffffffffff) {
                          FUN_100e45d7c(alStack_1e40);
                        }
                        if (alStack_1dc0[0] != -0x7fffffffffffffff) {
                          FUN_100e45e50(alStack_1dc0);
                        }
                        if (alStack_1cc8[0] != 0) {
                          FUN_100cb56bc(alStack_1cc8);
                        }
                        if ((lStack_1e58 != -0x8000000000000000) && (lStack_1e58 != 0)) {
                          _free(uStack_1e50);
                        }
                        plVar36 = plStack_1ec8;
                        if (plStack_1ec0 != (long *)0x0) {
                          plVar41 = plStack_1ec8 + 1;
                          plVar25 = plStack_1ec0;
                          do {
                            if (plVar41[-1] != 0) {
                              _free(*plVar41);
                            }
                            plVar41 = plVar41 + 3;
                            plVar25 = (long *)((long)plVar25 + -1);
                          } while (plVar25 != (long *)0x0);
                        }
                        plVar12 = plVar12 + 0x4e;
                        if (plStack_1ed0 != (long *)0x0) {
                          _free(plVar36);
                        }
                        goto LAB_100506320;
                      }
                      FUN_100e3b46c(&plStack_1f00);
LAB_100506194:
                      plVar12 = plVar12 + 0x4e;
                      lVar6 = lVar6 + -0x270;
                    } while (lVar6 != 0);
                    lStack_2260 = -0x8000000000000000;
                  }
                }
                if (plVar34 != (long *)0x0) {
                  _free(plVar39);
                }
              }
              else {
                bVar14 = *(byte *)(puVar30 + 0x4f8);
                if (bVar14 < 2) {
                  if (bVar14 != 0) {
                    FUN_107c05cc0(&UNK_10b215410);
                    goto LAB_100507264;
                  }
                  lVar6 = puVar30[0xb0];
LAB_100505b80:
                  uVar13 = 0;
                  puVar30[0xb2] = lVar6;
                  *(undefined2 *)((long)puVar30 + 0x59a) = 0;
LAB_100505b9c:
                  *(undefined1 *)((long)puVar30 + 0x599) = 0;
                  puVar30[0xb1] = lVar6;
                  *(undefined1 *)(puVar30 + 0xb3) = uVar13;
                  if (*(long *)(lVar6 + 0x2090) == -0x8000000000000000) {
                    lStack_1f70 = -0x8000000000000000;
                  }
                  else {
                    uVar23 = *(undefined8 *)(lVar6 + 0x2098);
                    lVar24 = *(long *)(lVar6 + 0x20a0);
                    if (lVar24 == 0) {
                      lVar29 = 1;
                    }
                    else {
                      lVar29 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar24,1);
                      if (lVar29 == 0) {
                        FUN_107c03c64(1,lVar24);
                        goto LAB_100507264;
                      }
                    }
                    _memcpy(lVar29,uVar23,lVar24);
                    lVar6 = puVar30[0xb1];
                    lStack_1f70 = lVar24;
                    lStack_1f68 = lVar29;
                    lStack_1f60 = lVar24;
                  }
                  if (*(long *)(lVar6 + 0x20a8) == -0x8000000000000000) {
                    lStack_1f58 = -0x8000000000000000;
                  }
                  else {
                    uVar23 = *(undefined8 *)(lVar6 + 0x20b0);
                    lVar6 = *(long *)(lVar6 + 0x20b8);
                    if (lVar6 == 0) {
                      lVar24 = 1;
                    }
                    else {
                      lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar6,1);
                      if (lVar24 == 0) {
                        FUN_107c03c64(1,lVar6);
                        goto LAB_100507264;
                      }
                    }
                    _memcpy(lVar24,uVar23,lVar6);
                    lStack_1f58 = lVar6;
                    lStack_1f50 = lVar24;
                    lStack_1f48 = lVar6;
                  }
                  __ZN17codex_exec_server13runtime_paths22ExecServerRuntimePaths19from_optional_paths17h9903abac222c804dE
                            (&plStack_1f00,&lStack_1f70,&lStack_1f58);
                  if (plStack_1f00 == (long *)0x8000000000000000) {
                    plVar39 = (long *)thunk_FUN_1088566c8();
                  }
                  else {
                    plStack_1f88 = plStack_1ee8;
                    plStack_1f90 = plStack_1ef0;
                    plStack_1f78 = plStack_1ed8;
                    plStack_1f80 = plStack_1ee0;
                    lVar6 = 1;
                    *(undefined1 *)((long)puVar30 + 0x599) = 1;
                    plStack_1fa0 = plStack_1f00;
                    plStack_1f98 = plStack_1ef8;
                    uVar23 = *(undefined8 *)(puVar30[0xb1] + 0x1c00);
                    lVar24 = *(long *)(puVar30[0xb1] + 0x1c08);
                    if ((lVar24 != 0) &&
                       (lVar6 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar24,1), lVar6 == 0))
                    {
                      FUN_107c03c64(1,lVar24);
                      goto LAB_100507264;
                    }
                    _memcpy(lVar6,uVar23,lVar24);
                    *(undefined1 *)((long)puVar30 + 0x599) = 0;
                    puVar30[0xb4] = lVar24;
                    puVar30[0xb5] = lVar6;
                    puVar30[0xb6] = lVar24;
                    puVar30[0xb8] = plStack_1f98;
                    puVar30[0xb7] = plStack_1fa0;
                    puVar30[0xba] = plStack_1f88;
                    puVar30[0xb9] = plStack_1f90;
                    puVar30[0xbc] = plStack_1f78;
                    puVar30[0xbb] = plStack_1f80;
                    *(undefined1 *)(puVar30 + 0xca) = 0;
LAB_100505f7c:
                    puVar28 = puVar30 + 0xb4;
                    FUN_100a18de0(&plStack_1f00,puVar28,plVar11);
                    plVar34 = plStack_1f00;
                    if (plStack_1f00 == (long *)0x8000000000000002) {
                      uVar13 = 3;
                      goto LAB_1005060c0;
                    }
                    plStack_1f38 = plStack_1ef0;
                    plStack_1f40 = plStack_1ef8;
                    plStack_1f28 = plStack_1ee0;
                    plStack_1f30 = plStack_1ee8;
                    plStack_1f18 = plStack_1ed0;
                    plStack_1f20 = plStack_1ed8;
                    plStack_1f08 = plStack_1ec0;
                    plStack_1f10 = plStack_1ec8;
                    plStack_2198 = plStack_1e90;
                    plStack_21a0 = plStack_1e98;
                    plStack_2188 = plStack_1e80;
                    plStack_2190 = plStack_1e88;
                    plStack_2180 = plStack_1e78;
                    plStack_21b8 = plStack_1eb0;
                    plStack_21c0 = plStack_1eb8;
                    plStack_21a8 = plStack_1ea0;
                    plStack_21b0 = plStack_1ea8;
                    FUN_100d73020(puVar28);
                    if (plVar34 != (long *)0x8000000000000001) {
                      puVar30[0xb4] = plVar34;
                      puVar30[0xb6] = plStack_1f38;
                      puVar30[0xb5] = plStack_1f40;
                      puVar30[0xb8] = plStack_1f28;
                      puVar30[0xb7] = plStack_1f30;
                      puVar30[0xba] = plStack_1f18;
                      puVar30[0xb9] = plStack_1f20;
                      puVar30[0xbc] = plStack_1f08;
                      puVar30[0xbb] = plStack_1f10;
                      puVar30[0xc5] = plStack_2180;
                      puVar30[0xc2] = plStack_2198;
                      puVar30[0xc1] = plStack_21a0;
                      puVar30[0xc4] = plStack_2188;
                      puVar30[0xc3] = plStack_2190;
                      puVar30[0xbe] = plStack_21b8;
                      puVar30[0xbd] = plStack_21c0;
                      puVar30[0xc0] = plStack_21a8;
                      puVar30[0xbf] = plStack_21b0;
                      puVar30[0x145] = puVar30[0xb1];
                      puVar30[0x146] = puVar28;
                      *(undefined1 *)((long)puVar30 + 0xa43) = 0;
                      *(undefined1 *)((long)puVar30 + 0xa44) = *(undefined1 *)(puVar30 + 0xb3);
                      goto LAB_10050609c;
                    }
                    plVar39 = (long *)thunk_FUN_108858eb0(&plStack_1f40);
                  }
                  *(undefined2 *)((long)puVar30 + 0x599) = 0x100;
                }
                else {
                  if (bVar14 != 3) {
                    FUN_107c05cc4(&UNK_10b215410);
                    goto LAB_100507264;
                  }
                  bVar14 = *(byte *)((long)puVar30 + 0x59a);
                  if (bVar14 < 3) {
                    if (bVar14 != 0) {
                      if (bVar14 == 1) {
                        FUN_107c05cc0(&UNK_10b215488);
                      }
                      else {
                        FUN_107c05cc4(&UNK_10b215488);
                      }
                      goto LAB_100507264;
                    }
                    lVar6 = puVar30[0xb2];
                    uVar13 = *(undefined1 *)((long)puVar30 + 0x59b);
                    goto LAB_100505b9c;
                  }
                  if (bVar14 == 3) goto LAB_100505f7c;
LAB_10050609c:
                  func_0x0001004ecb38(&plStack_1f00,puVar30 + 0xc6,plVar11);
                  plVar18 = plStack_1ef0;
                  plVar39 = plStack_1ef8;
                  plVar34 = plStack_1f00;
                  if (plStack_1f00 == (long *)0x8000000000000001) {
                    uVar13 = 4;
LAB_1005060c0:
                    *(undefined1 *)((long)puVar30 + 0x59a) = uVar13;
                    *(undefined1 *)(puVar30 + 0x4f8) = 3;
                    uVar13 = 6;
                    goto LAB_1005060d4;
                  }
                  FUN_100d24e64(puVar30 + 0xc6);
                  FUN_100e2d840(puVar30 + 0xb4);
                  *(undefined2 *)((long)puVar30 + 0x599) = 0x100;
                  if (plVar34 != (long *)0x8000000000000000) {
                    *(undefined1 *)(puVar30 + 0x4f8) = 1;
                    goto LAB_100506120;
                  }
                }
                *(undefined1 *)(puVar30 + 0x4f8) = 1;
                (**(code **)*plVar39)(plVar39);
LAB_100506034:
                lStack_2260 = -0x8000000000000000;
              }
              *(undefined2 *)((long)puVar30 + 0x57c) = 0;
              uVar27 = puVar30[0x9c];
              uVar23 = puVar30[0x9d];
              plStack_1f98 = (long *)puVar30[0x9f];
              plStack_1fa0 = (long *)puVar30[0x9e];
              lVar6 = puVar30[0xa3];
              uVar35 = puVar30[0xa4];
              param_5 = puVar30[0xa5];
              uVar40 = puVar30[0xa6];
              uVar19 = puVar30[0xa7];
              param_6 = puVar30[0xa8];
              uVar21 = puVar30[0x73];
              param_7 = puVar30[0x74];
              plVar12 = (long *)puVar30[0x8a];
              auVar43._8_8_ = puVar30[0x8b];
              auVar43._0_8_ = puVar30[0x72];
              param_8 = puVar30[0x8c];
              *(undefined4 *)(puVar30 + 0xaf) = 0;
              plStack_2290 = (long *)puVar30[0x99];
              if (plStack_2290 == (long *)0x8000000000000001) {
                plStack_2290 = (long *)0x8000000000000000;
              }
              else {
                lStack_22e0 = puVar30[0x9a];
                plStack_22e8 = (long *)puVar30[0x9b];
                if (plStack_2290 == (long *)0x8000000000000000) {
                  if (plStack_22e8 == (long *)0x0) {
                    lVar24 = 1;
                  }
                  else {
                    lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_22e8,1);
                    if (lVar24 == 0) {
                      FUN_107c03c64(1,plStack_22e8);
                      goto LAB_100507264;
                    }
                  }
                  _memcpy(lVar24,lStack_22e0);
                  lStack_22e0 = lVar24;
                  plStack_2290 = plStack_22e8;
                }
              }
              plVar34 = puVar30 + 0x90;
              plVar18 = (long *)0x0;
              if (puVar30[0x90] != -0x8000000000000000) {
                plVar18 = plVar34;
              }
              __ZN10codex_core13mcp_tool_call24get_mcp_app_resource_uri17h2418690cb9448c9eE
                        (&plStack_1f40,plVar18);
              if (((*plVar34 == -0x8000000000000000) ||
                  (plVar18 = (long *)func_0x0001014982c8(plVar34,&UNK_108ca2bd3,0xb),
                  plVar18 == (long *)0x0)) || (*plVar18 < 0)) {
                plStack_1f00 = (long *)0x8000000000000000;
              }
              else {
                plStack_21a0 = (long *)0x0;
                plStack_21a8 = (long *)&UNK_108c56c70;
                plStack_2190 = (long *)0x0;
                plStack_2198 = (long *)0x0;
                plStack_21c0 = (long *)0x0;
                plStack_21b8 = (long *)0x8;
                plStack_21b0 = (long *)0x0;
                FUN_1011a27dc(&plStack_21c0,plVar18);
                plStack_1ef8 = plStack_21b8;
                plStack_1f00 = plStack_21c0;
                plStack_1ee8 = plStack_21a8;
                plStack_1ef0 = plStack_21b0;
                plStack_1ed8 = plStack_2198;
                plStack_1ee0 = plStack_21a0;
                plStack_1ed0 = plStack_2190;
                plStack_1ec0 = (long *)plVar18[8];
                plStack_1ec8 = (long *)plVar18[7];
              }
              plVar18 = (long *)0x0;
              if (puVar30[0x90] != -0x8000000000000000) {
                plVar18 = plVar34;
              }
              __ZN10codex_core13mcp_tool_call35openai_file_input_params_for_server17hf4fbb6b2add39201E
                        (&plStack_21c0,puVar30[0x67],puVar30[0x68],plVar18);
              plStack_1fb8 = plStack_1f38;
              plStack_1fc0 = plStack_1f40;
              plStack_1fb0 = plStack_1f30;
              plStack_1fe8 = plStack_1ed8;
              plStack_1ff0 = plStack_1ee0;
              plStack_1fd8 = plStack_1ec8;
              plStack_1fe0 = plStack_1ed0;
              plStack_1fd0 = plStack_1ec0;
              plStack_2008 = plStack_1ef8;
              plStack_2010 = plStack_1f00;
              plStack_1ff8 = plStack_1ee8;
              plStack_2000 = plStack_1ef0;
              plStack_2020 = plStack_21b0;
              plStack_2038 = plStack_1f98;
              plStack_2040 = plStack_1fa0;
              plStack_2028 = plStack_21b8;
              plStack_2030 = plStack_21c0;
              if (puVar30[0x75] != 0) {
                _free(puVar30[0x76]);
              }
              if ((puVar30[0x81] != -0x8000000000000000) && (puVar30[0x81] != 0)) {
                _free(puVar30[0x82]);
              }
              if (puVar30[0x78] != 0) {
                _free(puVar30[0x79]);
              }
              if (puVar30[0x7b] != 0) {
                _free(puVar30[0x7c]);
              }
              if ((puVar30[0x84] != -0x8000000000000000) && (puVar30[0x84] != 0)) {
                _free(puVar30[0x85]);
              }
              if ((puVar30[0x87] != -0x8000000000000000) && (puVar30[0x87] != 0)) {
                _free(puVar30[0x88]);
              }
              lVar24 = *(long *)puVar30[0xa0];
              *(long *)puVar30[0xa0] = lVar24 + -1;
              LORelease();
              if (lVar24 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0205a1f6d49d4824E(puVar30 + 0xa0);
              }
              plVar18 = (long *)puVar30[0xa1];
              if (plVar18 != (long *)0x0) {
                lVar24 = *plVar18;
                *plVar18 = lVar24 + -1;
                LORelease();
                if (lVar24 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0205a1f6d49d4824E(puVar30 + 0xa1);
                }
              }
              lVar24 = puVar30[0x8d];
              if (lVar24 != -0x8000000000000000) {
                lVar33 = puVar30[0x8e];
                lVar29 = puVar30[0x8f];
                if (lVar29 != 0) {
                  lVar37 = 0;
                  do {
                    plVar18 = (long *)(lVar33 + lVar37 * 0x48);
                    if (*plVar18 != 0) {
                      _free(plVar18[1]);
                    }
                    if (plVar18[3] != -0x8000000000000000 && plVar18[3] != 0) {
                      _free(plVar18[4]);
                    }
                    lVar31 = plVar18[6];
                    if (lVar31 != -0x8000000000000000) {
                      lVar1 = plVar18[7];
                      lVar26 = plVar18[8];
                      if (lVar26 != 0) {
                        puVar28 = (undefined8 *)(lVar1 + 8);
                        do {
                          if (puVar28[-1] != 0) {
                            _free(*puVar28);
                          }
                          puVar28 = puVar28 + 3;
                          lVar26 = lVar26 + -1;
                        } while (lVar26 != 0);
                      }
                      if (lVar31 != 0) {
                        _free(lVar1);
                      }
                    }
                    lVar37 = lVar37 + 1;
                  } while (lVar37 != lVar29);
                }
                if (lVar24 != 0) {
                  _free(lVar33);
                }
              }
              if (*plVar34 != -0x8000000000000000) {
                lVar24 = puVar30[0x94];
                if ((lVar24 != 0) && (lVar24 * 9 != -0x11)) {
                  _free(puVar30[0x93] + lVar24 * -8 + -8);
                }
                func_0x000100cd7284(plVar34);
              }
              lVar29 = puVar30[0x7f];
              lVar24 = puVar30[0x80];
              if (lVar24 != 0) {
                puVar28 = (undefined8 *)(lVar29 + 8);
                do {
                  if (puVar28[-1] != 0) {
                    _free(*puVar28);
                  }
                  puVar28 = puVar28 + 3;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              if (puVar30[0x7e] != 0) {
                _free(lVar29);
              }
              *(undefined2 *)((long)puVar30 + 0x57c) = 0;
              *(undefined4 *)(puVar30 + 0xaf) = 0;
              __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
                        (puVar30[0x6b],1);
LAB_1005067d0:
              unaff_x24 = (long *)((long)puVar30 + 0x57e);
              plStack_2250 = puVar30 + 0x67;
              plStack_2098 = plStack_1fb8;
              plStack_20a0 = plStack_1fc0;
              plStack_2090 = plStack_1fb0;
              plStack_20c8 = plStack_1fe8;
              plStack_20d0 = plStack_1ff0;
              plStack_20b8 = plStack_1fd8;
              plStack_20c0 = plStack_1fe0;
              plStack_20b0 = plStack_1fd0;
              plStack_20e8 = plStack_2008;
              plStack_20f0 = plStack_2010;
              plStack_20d8 = plStack_1ff8;
              plStack_20e0 = plStack_2000;
              plStack_2100 = plStack_2020;
              plStack_2118 = plStack_2038;
              plStack_2120 = plStack_2040;
              plStack_2108 = plStack_2028;
              plStack_2110 = plStack_2030;
              *(undefined1 *)unaff_x24 = 1;
              if (lVar6 != -0x7ffffffffffffffe) {
                puVar30[0x41] = lVar6;
                puVar30[0x42] = uVar35;
                puVar30[0x43] = param_5;
                puVar30[0x44] = uVar40;
                puVar30[0x45] = uVar19;
                puVar30[0x46] = param_6;
                puVar30[0x47] = lStack_2260;
                puVar30[0x48] = lStack_22f0;
                puVar30[0x49] = lStack_22f8;
                puVar30[0x4a] = auVar43._0_8_;
                puVar30[0x4b] = uVar21;
                puVar30[0x4c] = param_7;
                puVar30[0x4d] = plVar12;
                puVar30[0x4e] = auVar43._8_8_;
                puVar30[0x4f] = param_8;
                puVar30[0x50] = plStack_2290;
                puVar30[0x51] = lStack_22e0;
                puVar30[0x52] = plStack_22e8;
                puVar30[0x55] = plStack_1fb0;
                puVar30[0x54] = plStack_1fb8;
                puVar30[0x53] = plStack_1fc0;
                puVar30[0x5e] = plStack_1fd0;
                puVar30[0x5b] = plStack_1fe8;
                puVar30[0x5a] = plStack_1ff0;
                puVar30[0x5d] = plStack_1fd8;
                puVar30[0x5c] = plStack_1fe0;
                puVar30[0x57] = plStack_2008;
                puVar30[0x56] = plStack_2010;
                puVar30[0x59] = plStack_1ff8;
                puVar30[0x58] = plStack_2000;
                puVar30[0x61] = plStack_2020;
                puVar30[0x60] = plStack_2028;
                puVar30[0x5f] = plStack_2030;
                puVar30[0x62] = uVar27;
                puVar30[99] = uVar23;
                puVar30[0x65] = plStack_2038;
                puVar30[100] = plStack_2040;
                FUN_100c9cfe4(plStack_2250);
                uVar23 = __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                                   (puVar30[0x30]);
                puVar30[0x67] = uVar23;
                plVar34 = *(long **)puVar30[0x2d];
                lVar6 = *plVar34;
                *plVar34 = lVar6 + 1;
                if (lVar6 < 0) goto LAB_100507264;
                plVar18 = *(long **)puVar30[0x2e];
                lVar6 = *plVar18;
                *plVar18 = lVar6 + 1;
                plStack_1fa0 = plVar34;
                if (lVar6 < 0) goto LAB_100507264;
                plStack_1f40 = plVar18;
                __ZN10codex_core8guardian6review22new_guardian_review_id17h193fb3d2c1869341E
                          (&plStack_2010);
                puVar28 = (undefined8 *)0x0;
                if (puVar30[0x41] != -0x7fffffffffffffff) {
                  puVar28 = puVar30 + 0x41;
                }
                __ZN10codex_core13mcp_tool_call38build_guardian_mcp_tool_review_request17ha90129fb67dde047E
                          (&plStack_1f00,*(undefined8 *)(puVar30[0x2f] + 8),
                           *(undefined8 *)(puVar30[0x2f] + 0x10),puVar30 + 0x32,puVar28);
                plStack_21c0 = (long *)0x8000000000000000;
                uVar23 = __ZN94__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__clone__Clone_GT_5clone17h65158a94a4815517E
                                   (plStack_2250);
                uVar35 = __ZN10codex_core8guardian6review29spawn_approval_request_review17ha5bbf8573851ae6fE
                                   (plStack_1fa0,plStack_1f40,&plStack_2010,&plStack_1f00,
                                    &plStack_21c0,1,uVar23);
                lVar6 = *(long *)puVar30[0x2d] + 0x10;
                plVar34 = (long *)puVar30[0x30];
                uVar23 = *(undefined8 *)(puVar30[0x2f] + 8);
                uVar27 = *(undefined8 *)(puVar30[0x2f] + 0x10);
                puVar30[0x6e] = uVar23;
                puVar30[0x6f] = uVar27;
                puVar30[0x70] = uVar35;
                *(undefined1 *)(puVar30 + 0x72) = 0;
                puVar30[0x73] = plStack_2250;
                puVar30[0x76] = lVar6;
                puVar30[0x77] = plVar34;
                *(undefined1 *)((long)puVar30 + 0x3c2) = 0;
                goto LAB_1005069b0;
              }
              uVar13 = 4;
            }
          }
LAB_100506c68:
          puStack_2240 = puVar30 + 0x66;
          *(undefined1 *)puStack_2240 = uVar13;
          uVar23 = 1;
          uVar13 = 3;
          goto LAB_1005056e4;
        }
        if (bVar14 != 0) {
          FUN_107c05cc0(&UNK_10b215cf0);
LAB_10050707c:
          FUN_107c05cc4(&UNK_10b215cf0);
          uVar15 = extraout_w8;
LAB_100507088:
          if (uVar15 == 1) {
            FUN_107c05cc0(&UNK_10b215e70);
          }
          else {
            FUN_107c05cc4(&UNK_10b215e70);
          }
          goto LAB_100507264;
        }
        *(undefined1 *)((long)puVar30 + 0x13b) = 0;
        puVar30[0x11] = puVar30[0xc];
        puVar30[0x13] = puVar30[1];
        puVar30[0x12] = *puVar30;
        plVar18 = (long *)puVar30[0xd];
        plVar39 = (long *)puVar30[0xe];
        puVar30[0x14] = puVar30[2];
        puVar30[0x15] = plVar18;
        puVar30[0x16] = plVar39;
        *(undefined2 *)((long)puVar30 + 0x139) = 0x101;
        puVar30[0x1a] = puVar30[6];
        puVar30[0x19] = puVar30[5];
        puVar30[0x1c] = puVar30[8];
        puVar30[0x1b] = puVar30[7];
        puVar30[0x1e] = puVar30[10];
        puVar30[0x1d] = puVar30[9];
        puVar30[0x18] = puVar30[4];
        puVar30[0x17] = puVar30[3];
        plVar34 = (long *)puVar30[0xf];
        uVar23 = puVar30[0x10];
        puVar30[0x1f] = puVar30[0xb];
        puVar30[0x20] = uVar23;
        bVar14 = *(byte *)(*plVar39 + 0x790);
        if (((bVar14 < 5) && ((1 << (ulong)(bVar14 & 0x1f) & 0x13U) != 0)) &&
           (*(char *)(*(long *)(*plVar39 + 0x798) + 0x252e) == '\x01')) {
          puVar28 = puVar30 + 0x17;
          puVar30[0x28] = plVar18;
          puVar30[0x29] = plVar39;
          puVar30[0x2a] = plVar34;
          puVar30[0x2b] = puVar28;
          puVar30[0x2c] = uVar23;
          *(undefined1 *)(puVar30 + 0x66) = 0;
          puVar30[0x2d] = plVar18;
          puVar30[0x2e] = plVar39;
          puVar30[0x2f] = puVar28;
          puVar30[0x30] = uVar23;
          lVar6 = puVar30[0x1f];
joined_r0x000100504d74:
          if (lVar6 != 0) {
            lVar24 = puVar28[7];
            lVar6 = lVar6 * 0x68;
            do {
              uVar7 = *(ulong *)(lVar24 + 0x10);
              if (0x15 < uVar7) {
                puVar20 = *(ulong **)(lVar24 + 8);
                uVar22 = 0x6d63705f746f6f6c;
                uVar8 = (*puVar20 & 0xff00ff00ff00ff00) >> 8 | (*puVar20 & 0xff00ff00ff00ff) << 8;
                uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
                uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
                if (uVar8 == 0x6d63705f746f6f6c) {
                  uVar22 = 0x5f63616c6c5f6170;
                  uVar8 = (puVar20[1] & 0xff00ff00ff00ff00) >> 8 |
                          (puVar20[1] & 0xff00ff00ff00ff) << 8;
                  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
                  uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
                  if (uVar8 != 0x5f63616c6c5f6170) goto LAB_100504e28;
                  uVar22 = 0x617070726f76616c;
                  uVar8 = (*(ulong *)((long)puVar20 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
                          (*(ulong *)((long)puVar20 + 0xe) & 0xff00ff00ff00ff) << 8;
                  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
                  uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
                  if (uVar8 != 0x617070726f76616c) goto LAB_100504e28;
                  if (uVar7 == 0x16) goto LAB_100504db0;
                }
                else {
LAB_100504e28:
                  iVar5 = 1;
                  if (uVar22 < uVar8) {
                    iVar5 = -1;
                  }
                  if (uVar7 == 0x16 || iVar5 != 0) goto LAB_100504db0;
                }
                if (*(char *)((long)puVar20 + 0x16) == '_') {
                  puVar30[0x31] = lVar24;
                  puVar30[0x67] = *plVar34 + 0x10;
                  *(undefined1 *)(puVar30 + 0x75) = 0;
                  goto LAB_100505724;
                }
              }
LAB_100504db0:
              lVar24 = lVar24 + 0x68;
              lVar6 = lVar6 + -0x68;
            } while (lVar6 != 0);
          }
          plVar34 = (long *)0x0;
LAB_100504e8c:
          *(undefined1 *)(puVar30 + 0x66) = 1;
          puVar30[0x21] = plVar34;
          puVar30[0x23] = plStack_2078;
          puVar30[0x22] = plStack_2080;
          puVar30[0x25] = plStack_2068;
          puVar30[0x24] = plStack_2070;
          puVar30[0x26] = plStack_2060;
          FUN_100cde2f8(puVar30 + 0x28);
          if (puVar30[0x21] != 0) {
            plStack_2008 = (long *)puVar30[0x22];
            plStack_2010 = (long *)puVar30[0x21];
            plStack_1ff8 = (long *)puVar30[0x24];
            plStack_2000 = (long *)puVar30[0x23];
            plStack_1fe8 = (long *)puVar30[0x26];
            plStack_1ff0 = (long *)puVar30[0x25];
            uVar23 = puVar30[0x11];
            *(undefined1 *)((long)puVar30 + 0x13a) = 0;
            plStack_20e8 = (long *)puVar30[0x13];
            plStack_20f0 = (long *)puVar30[0x12];
            plStack_20e0 = (long *)puVar30[0x14];
            puVar30[0x28] = 0x800000000000000d;
            puVar30[0x2a] = plStack_20e8;
            puVar30[0x29] = plStack_20f0;
            puVar30[0x2b] = plStack_20e0;
            puVar30[0x2d] = plStack_2008;
            puVar30[0x2c] = plStack_2010;
            puVar30[0x2f] = plStack_1ff8;
            puVar30[0x2e] = plStack_2000;
            puVar30[0x31] = plStack_1fe8;
            puVar30[0x30] = plStack_1ff0;
            puVar30[0x65] = uVar23;
            *(undefined1 *)(puVar30 + 0x184) = 0;
            lVar6 = *plVar11;
            goto LAB_100504f28;
          }
          plVar18 = (long *)puVar30[0x15];
          plVar39 = (long *)puVar30[0x16];
        }
        *(undefined1 *)((long)puVar30 + 0x139) = 0;
        uVar19 = puVar30[0x1e];
        uVar35 = puVar30[0x1d];
        uVar23 = puVar30[0x1f];
        lVar6 = 1;
        *(undefined1 *)((long)puVar30 + 0x13b) = 1;
        lVar24 = *plVar18;
        lVar33 = *plVar39;
        uVar27 = *(undefined8 *)(lVar33 + 0x248);
        lVar29 = *(long *)(lVar33 + 0x250);
        if ((lVar29 != 0) && (lVar6 = _malloc(lVar29), lVar6 == 0)) {
          FUN_107c03c64(1,lVar29);
          goto LAB_100507264;
        }
        _memcpy(lVar6,uVar27,lVar29);
        *(undefined1 *)((long)puVar30 + 0x13b) = 0;
        lVar37 = *(long *)puVar30[0x15] + 0x10;
        uVar27 = *(undefined8 *)(*(long *)puVar30[0x16] + 0x248);
        uVar40 = *(undefined8 *)(*(long *)puVar30[0x16] + 0x250);
        plVar34 = (long *)puVar30[0x20];
        puVar30[0x28] = lVar29;
        puVar30[0x29] = lVar6;
        puVar30[0x2a] = lVar29;
        puVar30[0x2c] = uVar19;
        puVar30[0x2b] = uVar35;
        puVar30[0x2d] = uVar23;
        puVar30[0x2e] = lVar24 + 0x10;
        puVar30[0x2f] = lVar33 + 0x10;
        *(undefined1 *)(puVar30 + 0x43) = 0;
        puVar30[0x364] = uVar27;
        puVar30[0x365] = uVar40;
        puVar30[0x36e] = lVar37;
        puVar30[0x36f] = plVar34;
        *(undefined1 *)((long)puVar30 + 0x1b82) = 0;
LAB_1005051ac:
        *(undefined1 *)((long)puVar30 + 0x1b81) = 1;
        _memcpy(&plStack_1f00,puVar30 + 0x28,0x19d0);
        puVar30[0x366] = lVar37;
        puVar30[0x362] = uVar27;
        puVar30[0x363] = uVar40;
        *pbVar32 = 0;
        lVar6 = *plVar34;
        uVar7 = *(ulong *)(lVar6 + 0x10);
        *(undefined1 *)((long)puVar30 + 0x1b81) = 0;
        puVar28 = puVar30 + 0x371;
        puVar30[0x371] = plVar34;
        puVar30[0x372] = (ulong *)(lVar6 + 0x10);
        puVar30[0x373] = uVar7 >> 2;
        puVar30[0x374] = 0;
        puVar30[0x376] = 0;
        puVar30[0x375] = 0;
        puVar30[0x378] = 0;
        *(undefined1 *)(puVar30 + 0x379) = 0;
        _memcpy(puVar30 + 0x37a,&plStack_1f00,0x19d0);
        puVar30[0x6b4] = pbVar32;
        puVar30[0x6b5] = puVar28;
LAB_100505234:
        lVar6 = (*
                ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                )();
        if (*(char *)(lVar6 + 0x48) == '\x01') {
LAB_100505274:
          if (*(char *)(lVar6 + 0x44) != '\x01' || *(char *)(lVar6 + 0x45) != '\0')
          goto LAB_100505288;
          FUN_10610bbb4(*(undefined8 *)*plVar11,((undefined8 *)*plVar11)[1]);
        }
        else {
          if (*(char *)(lVar6 + 0x48) != '\x02') {
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (lVar6,&DAT_100c35d48);
            *(undefined1 *)(lVar6 + 0x48) = 1;
            goto LAB_100505274;
          }
LAB_100505288:
          if ((*pbVar32 & 1) == 0) {
            uVar7 = __ZN112__LT_tokio_util__sync__cancellation_token__WaitForCancellationFuture_u20_as_u20_core__future__future__Future_GT_4poll17h718460b03fea36adE
                              (puVar28,plVar11);
            if ((uVar7 & 1) == 0) {
              uVar23 = 0;
              bVar14 = *pbVar32 | 1;
LAB_100505318:
              *pbVar32 = bVar14;
LAB_10050531c:
              puVar30[0x369] = plStack_20e8;
              puVar30[0x368] = plStack_20f0;
              puVar30[0x367] = uVar23;
              puVar30[0x36b] = plStack_20d8;
              puVar30[0x36a] = plStack_20e0;
              puVar30[0x36d] = plStack_20c8;
              puVar30[0x36c] = plStack_20d0;
              plStack_2010 = (long *)puVar30[0x372];
              plStack_2008 = puVar30 + 0x379;
              plStack_2000 = puVar30 + 0x373;
              plStack_1ff8 = puVar30 + 0x374;
              FUN_1060fb5d4(&plStack_2010);
              if (puVar30[0x376] != 0) {
                (**(code **)(puVar30[0x376] + 0x18))(puVar30[0x377]);
              }
              FUN_100d35810(puVar30 + 0x37a);
              if (puVar30[0x367] == 0) {
                pauVar9 = (undefined1 (*) [16])
                          (*
                          ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                          )();
                if (pauVar9[1][0] == '\x01') {
                  auVar43 = *pauVar9;
                }
                else {
                  auVar43 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar9 + 8) = auVar43._8_8_;
                  pauVar9[1][0] = 1;
                }
                *(long *)*pauVar9 = auVar43._0_8_ + 1;
                puVar30[0x372] = 0;
                puVar30[0x371] = &UNK_108c56c70;
                puVar30[0x374] = 0;
                puVar30[0x373] = 0;
                *(undefined1 (*) [16])(puVar30 + 0x375) = auVar43;
                uVar27 = puVar30[0x366];
                uVar23 = puVar30[0x362];
                uVar35 = puVar30[0x363];
                func_0x0001011ed3bc(&plStack_2010,puVar30 + 0x371);
                plStack_2178 = plStack_2008;
                plStack_2180 = plStack_2010;
                plStack_2168 = plStack_1ff8;
                plStack_2170 = plStack_2000;
                plStack_2158 = plStack_1fe8;
                plStack_2160 = plStack_1ff0;
                puVar30[0x380] = plStack_2008;
                puVar30[0x37f] = plStack_2010;
                puVar30[0x382] = plStack_1ff8;
                puVar30[0x381] = plStack_2000;
                puVar30[900] = plStack_1fe8;
                puVar30[899] = plStack_1ff0;
                puVar30[0x378] = plStack_21b8;
                puVar30[0x377] = plStack_21c0;
                puVar30[0x37a] = plStack_21a8;
                puVar30[0x379] = plStack_21b0;
                puVar30[0x37c] = plStack_2198;
                puVar30[0x37b] = plStack_21a0;
                puVar30[0x37e] = plStack_2188;
                puVar30[0x37d] = plStack_2190;
                puVar30[0x385] = uVar23;
                puVar30[0x386] = uVar35;
                puVar30[0x388] = uVar27;
                *(undefined1 *)((long)puVar30 + 0x1c49) = 0;
                goto LAB_100505468;
              }
              if (puVar30[0x367] != 1) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108ca2bde,0x6b,&UNK_10b215db0);
LAB_100507264:
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x100507268);
                (*pcVar17)();
              }
              puVar16 = (undefined *)puVar30[0x368];
              if (puVar16 == (undefined *)0x0) {
                pauVar9 = (undefined1 (*) [16])
                          (*
                          ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                          )();
                if (pauVar9[1][0] == '\x01') {
                  auVar43 = *pauVar9;
                }
                else {
                  auVar43 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar9 + 8) = auVar43._8_8_;
                  pauVar9[1][0] = 1;
                }
                *(long *)*pauVar9 = auVar43._0_8_ + 1;
                plStack_1f30 = (long *)0x0;
                plStack_1f40 = (long *)0x0;
                plStack_1f38 = (long *)0x0;
                puVar16 = &UNK_108c56c70;
              }
              else {
                auVar43 = *(undefined1 (*) [16])(puVar30 + 0x36c);
                plStack_1f30 = (long *)puVar30[0x36b];
                plStack_1f38 = (long *)puVar30[0x36a];
                plStack_1f40 = (long *)puVar30[0x369];
              }
              *(undefined1 *)((long)puVar30 + 0x1b81) = 0;
              plStack_1f98 = plStack_1f38;
              plStack_1fa0 = plStack_1f40;
              plStack_1f90 = plStack_1f30;
              *(undefined1 *)((long)puVar30 + 0x1b82) = 1;
LAB_100505550:
              plVar39 = plStack_1f90;
              plVar18 = plStack_1f98;
              plVar34 = plStack_1fa0;
              FUN_100da3df4(puVar30 + 0x28);
              uVar23 = puVar30[0x11];
              *(undefined1 *)((long)puVar30 + 0x13a) = 0;
              plStack_2008 = (long *)puVar30[0x13];
              plStack_2010 = (long *)puVar30[0x12];
              plStack_2000 = (long *)puVar30[0x14];
              plStack_20e8 = plVar18;
              plStack_20f0 = plVar34;
              plStack_20e0 = plVar39;
              puVar30[0x28] = 0x800000000000000d;
              puVar30[0x2a] = plStack_2008;
              puVar30[0x29] = plStack_2010;
              puVar30[0x2b] = plStack_2000;
              puVar30[0x2c] = puVar16;
              puVar30[0x2e] = plVar18;
              puVar30[0x2d] = plVar34;
              puVar30[0x2f] = plVar39;
              *(undefined1 (*) [16])(puVar30 + 0x30) = auVar43;
              puVar30[0x65] = uVar23;
              *(undefined1 *)(puVar30 + 0x184) = 0;
              lVar6 = *plVar11;
              goto LAB_1005055d4;
            }
            if ((*pbVar32 >> 1 & 1) == 0) goto LAB_1005052b0;
          }
          else {
            if ((*pbVar32 >> 1 & 1) != 0) {
              uVar23 = 2;
              goto LAB_10050531c;
            }
LAB_1005052b0:
            FUN_1005a6288(&plStack_2010,puVar28 + 9,plVar11);
            if ((int)plStack_2010 != 1) {
              plStack_20e8 = plStack_2000;
              plStack_20f0 = plStack_2008;
              plStack_20d8 = plStack_1ff0;
              plStack_20e0 = plStack_1ff8;
              plStack_20c8 = plStack_1fe0;
              plStack_20d0 = plStack_1fe8;
              bVar14 = *pbVar32 | 2;
              uVar23 = 1;
              goto LAB_100505318;
            }
          }
        }
        *(undefined1 *)((long)puVar30 + 0x1b82) = 3;
LAB_1005054bc:
        uVar23 = 1;
        uVar13 = 5;
      }
      else {
        if (bVar14 == 4) {
          bVar14 = *(byte *)(puVar30 + 0x184);
          lVar6 = *plVar11;
          if (bVar14 < 2) {
            if (bVar14 != 0) {
              FUN_107c05cc0(&UNK_10b218a18);
              goto LAB_100507264;
            }
            uVar23 = puVar30[0x65];
LAB_100504f28:
            puVar30[0x66] = 0x8000000000000001;
            _memcpy(puVar30 + 0x6c,puVar30 + 0x28,0x1e8);
            puVar30[0xa9] = uVar23;
            *(undefined1 *)(puVar30 + 0x183) = 0;
          }
          else if (bVar14 != 3) {
            FUN_107c05cc4(&UNK_10b218a18);
            goto LAB_100507264;
          }
          FUN_1005c21f8(&plStack_1f00,puVar30 + 0x66,lVar6);
          if (plStack_1f00 == (long *)0x8000000000000021) {
            *(undefined1 *)(puVar30 + 0x184) = 3;
            uVar23 = 1;
            uVar13 = 4;
            goto LAB_1005056e4;
          }
          FUN_100e7ab5c(puVar30 + 0x66);
          *(undefined1 *)(puVar30 + 0x184) = 1;
          plStack_2158 = plStack_1e98;
          plStack_2160 = plStack_1ea0;
          plStack_2148 = plStack_1e88;
          plStack_2150 = plStack_1e90;
          plStack_2138 = plStack_1e78;
          plStack_2140 = plStack_1e80;
          lStack_2130 = lStack_1e70;
          plStack_2198 = plStack_1ed8;
          plStack_21a0 = plStack_1ee0;
          plStack_2188 = plStack_1ec8;
          plStack_2190 = plStack_1ed0;
          plStack_2178 = plStack_1eb8;
          plStack_2180 = plStack_1ec0;
          plStack_2168 = plStack_1ea8;
          plStack_2170 = plStack_1eb0;
          plStack_21b8 = plStack_1ef8;
          plStack_21c0 = plStack_1f00;
          plStack_21a8 = plStack_1ee8;
          plStack_21b0 = plStack_1ef0;
          if (plStack_1f00 == (long *)0x8000000000000020) {
            if (plStack_1ef8 != (long *)0x0) {
              _free(plStack_1ef0);
            }
          }
          else {
            FUN_100df5738(&plStack_21c0);
          }
          if (puVar30[0x17] != 0) {
            _free(puVar30[0x18]);
          }
          if (puVar30[0x1a] != 0) {
            _free(puVar30[0x1b]);
          }
          lVar24 = puVar30[0x1e];
          lVar6 = lVar24;
          for (lVar29 = puVar30[0x1f]; lVar29 != 0; lVar29 = lVar29 + -1) {
            FUN_100e4b8ec(lVar6);
            lVar6 = lVar6 + 0x68;
          }
          if (puVar30[0x1d] != 0) {
LAB_1005056cc:
            _free(lVar24);
          }
        }
        else {
          if (bVar14 == 5) {
            bVar14 = *(byte *)((long)puVar30 + 0x1b82);
            if (bVar14 < 3) {
              if (bVar14 != 0) {
                if (bVar14 == 1) {
                  FUN_107c05cc0(&UNK_10b215d98);
                }
                else {
                  FUN_107c05cc4(&UNK_10b215d98);
                }
                goto LAB_100507264;
              }
              lVar37 = puVar30[0x36e];
              uVar27 = puVar30[0x364];
              uVar40 = puVar30[0x365];
              plVar34 = (long *)puVar30[0x36f];
              goto LAB_1005051ac;
            }
            if (bVar14 == 3) {
              pbVar32 = (byte *)puVar30[0x6b4];
              puVar28 = (undefined8 *)puVar30[0x6b5];
              goto LAB_100505234;
            }
LAB_100505468:
            uVar7 = FUN_1005b0428(puVar30 + 0x377,plVar11);
            if ((uVar7 & 1) == 0) {
              FUN_100d53274(puVar30 + 0x377);
              puVar16 = (undefined *)puVar30[0x371];
              auVar43 = *(undefined1 (*) [16])(puVar30 + 0x375);
              *(undefined1 *)((long)puVar30 + 0x1b81) = 0;
              plStack_1f98 = (long *)puVar30[0x373];
              plStack_1fa0 = (long *)puVar30[0x372];
              plStack_1f90 = (long *)puVar30[0x374];
              *(undefined1 *)((long)puVar30 + 0x1b82) = 1;
              if (puVar16 != (undefined *)0x0) goto LAB_100505550;
            }
            else {
              *(undefined1 *)((long)puVar30 + 0x1b82) = 4;
            }
            goto LAB_1005054bc;
          }
          bVar14 = *(byte *)(puVar30 + 0x184);
          lVar6 = *plVar11;
          if (bVar14 < 2) {
            if (bVar14 != 0) {
              FUN_107c05cc0(&UNK_10b218a18);
              goto LAB_100507264;
            }
            uVar23 = puVar30[0x65];
LAB_1005055d4:
            puVar30[0x66] = 0x8000000000000001;
            _memcpy(puVar30 + 0x6c,puVar30 + 0x28,0x1e8);
            puVar30[0xa9] = uVar23;
            *(undefined1 *)(puVar30 + 0x183) = 0;
          }
          else if (bVar14 != 3) {
            FUN_107c05cc4(&UNK_10b218a18);
            goto LAB_100507264;
          }
          FUN_1005c21f8(&plStack_1f00,puVar30 + 0x66,lVar6);
          if (plStack_1f00 == (long *)0x8000000000000021) {
            *(undefined1 *)(puVar30 + 0x184) = 3;
            uVar23 = 1;
            uVar13 = 6;
            goto LAB_1005056e4;
          }
          FUN_100e7ab5c(puVar30 + 0x66);
          *(undefined1 *)(puVar30 + 0x184) = 1;
          plStack_2158 = plStack_1e98;
          plStack_2160 = plStack_1ea0;
          plStack_2148 = plStack_1e88;
          plStack_2150 = plStack_1e90;
          plStack_2138 = plStack_1e78;
          plStack_2140 = plStack_1e80;
          lStack_2130 = lStack_1e70;
          plStack_2198 = plStack_1ed8;
          plStack_21a0 = plStack_1ee0;
          plStack_2188 = plStack_1ec8;
          plStack_2190 = plStack_1ed0;
          plStack_2178 = plStack_1eb8;
          plStack_2180 = plStack_1ec0;
          plStack_2168 = plStack_1ea8;
          plStack_2170 = plStack_1eb0;
          plStack_21b8 = plStack_1ef8;
          plStack_21c0 = plStack_1f00;
          plStack_21a8 = plStack_1ee8;
          plStack_21b0 = plStack_1ef0;
          if (plStack_1f00 == (long *)0x8000000000000020) {
            if (plStack_1ef8 != (long *)0x0) {
              _free(plStack_1ef0);
            }
          }
          else {
            FUN_100df5738(&plStack_21c0);
          }
          *(undefined1 *)((long)puVar30 + 0x13b) = 0;
          if (puVar30[0x17] != 0) {
            _free(puVar30[0x18]);
          }
          if (puVar30[0x1a] != 0) {
            lVar24 = puVar30[0x1b];
            goto LAB_1005056cc;
          }
        }
        uVar23 = 0;
        *(undefined2 *)((long)puVar30 + 0x139) = 0;
        uVar13 = 1;
      }
LAB_1005056e4:
      *(undefined1 *)(puVar30 + 0x27) = uVar13;
      return uVar23;
    }
    uVar23 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x1f0);
    uVar27 = *(undefined8 *)(param_1 + 0x200);
    _memcpy(alStack_4a8,param_1,0x1f0);
    uStack_2b0 = 0;
    uStack_48 = 0;
    uStack_2b8 = uVar23;
    uStack_2a8 = uVar27;
    lVar6 = _malloc(0x468);
    if (lVar6 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x468);
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100504b1c);
      (*pcVar17)();
    }
    _memcpy(lVar6,alStack_4a8,0x468);
    *(long *)(param_1 + 0x408) = lVar6;
    puVar16 = &UNK_10b2373c0;
    *(undefined **)(param_1 + 0x410) = &UNK_10b2373c0;
LAB_100504968:
    (**(code **)(puVar16 + 0x18))(alStack_4a8,lVar6,param_2);
    if (alStack_4a8[0] == -0x7ffffffffffffffe) {
      uVar23 = 2;
      uVar13 = 3;
      goto LAB_100504aec;
    }
    _memcpy((long *)(param_1 + 0x210),alStack_4a8,0x1f0);
    uVar23 = *(undefined8 *)(param_1 + 0x408);
    puVar30 = *(undefined8 **)(param_1 + 0x410);
    pcVar17 = (code *)*puVar30;
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)(uVar23);
    }
    if (puVar30[1] != 0) {
      _free(uVar23);
    }
    if (*(long *)(param_1 + 0x210) != -0x8000000000000000) {
      *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x208);
      *(undefined1 *)(param_1 + 0x418) = 0;
      goto LAB_100504a08;
    }
    uVar23 = 1;
    lVar6 = *(long *)(param_1 + 0x210);
  }
  else {
    if (bVar14 != 4) {
      lVar6 = *(long *)(param_1 + 0x408);
      puVar16 = *(undefined **)(param_1 + 0x410);
      goto LAB_100504968;
    }
LAB_100504a08:
    uVar7 = FUN_1005041a8(param_1 + 0x408,param_2);
    if ((uVar7 & 1) != 0) {
      uVar23 = 2;
      uVar13 = 4;
      goto LAB_100504aec;
    }
    cVar2 = *(char *)(param_1 + 0x418);
    if (cVar2 == '\x05') {
      if (((*(char *)(param_1 + 0x4b8) == '\x03') && (*(char *)(param_1 + 0x4b0) == '\x03')) &&
         (lVar6 = *(long *)(param_1 + 0x4a8), lVar6 != 0)) {
        FUN_100d07adc(lVar6);
        _free(lVar6);
      }
      FUN_100de8a5c(param_1 + 0x420);
    }
    else if (cVar2 == '\x04') {
      if (*(char *)(param_1 + 0xf00) == '\x03') {
LAB_100504aac:
        FUN_100e7ab5c(param_1 + 0x610);
      }
      else if (*(char *)(param_1 + 0xf00) == '\0') goto LAB_100504a64;
    }
    else if (cVar2 == '\x03') {
      if (*(char *)(param_1 + 0xf00) == '\0') {
LAB_100504a64:
        FUN_100def028(param_1 + 0x420);
      }
      else if (*(char *)(param_1 + 0xf00) == '\x03') goto LAB_100504aac;
    }
    uVar23 = 0;
    lVar6 = *(long *)(param_1 + 0x210);
  }
  if ((lVar6 != -0x7fffffffffffffff) && (lVar6 != -0x8000000000000000)) {
    if (lVar6 != 0) {
      _free(*(undefined8 *)(param_1 + 0x218));
    }
    func_0x000100dfc74c(param_1 + 0x228);
  }
  uVar13 = 1;
LAB_100504aec:
  *(undefined1 *)(param_1 + 0x400) = uVar13;
  return uVar23;
}

