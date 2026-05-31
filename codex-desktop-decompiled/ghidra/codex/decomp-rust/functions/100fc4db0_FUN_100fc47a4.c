
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc47a4(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  uint6 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  long lVar10;
  char cVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 extraout_x1;
  undefined1 uVar14;
  uint uVar15;
  uint extraout_w8;
  code *pcVar16;
  undefined8 uVar17;
  long *plVar18;
  short *psVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long unaff_x23;
  long lVar23;
  char *pcVar24;
  char *pcVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  char cVar29;
  undefined8 *puVar30;
  char cVar31;
  undefined8 *puVar32;
  char in_wzr;
  undefined1 auVar33 [16];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 uStack_1b0;
  char cStack_1af;
  undefined4 uStack_1ae;
  undefined2 uStack_1aa;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  short sStack_130;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  uint uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  bVar5 = *(byte *)(param_2 + 3);
  if (2 < bVar5) {
    if (bVar5 != 3) goto LAB_100fc496c;
LAB_100fc4820:
    __ZN85__LT_tokio__net__addr__sealed__MaybeReady_u20_as_u20_core__future__future__Future_GT_4poll17h1a3da82d40572efbE
              (&uStack_98,param_2 + 4,param_3);
    lVar10 = lStack_80;
    lVar28 = lStack_88;
    lVar23 = lStack_90;
    uVar8 = uStack_94;
    uVar15 = uStack_98;
    if (uStack_98 == 3) {
      uVar14 = 3;
      *param_1 = 3;
    }
    else {
      if ((short)param_2[4] == 3) {
        plVar12 = (long *)param_2[5];
        if (*plVar12 == 0xcc) {
          *plVar12 = 0x84;
        }
        else {
          (**(code **)(plVar12[2] + 0x20))();
        }
      }
      if (uVar15 == 2) {
        lVar28 = 2;
      }
      else {
        *(undefined2 *)((long)param_2 + 0x19) = 1;
        param_2[4] = 0;
        *(uint *)(param_2 + 5) = uVar15;
        *(undefined4 *)((long)param_2 + 0x2c) = uVar8;
        param_2[6] = lVar23;
        param_2[7] = lVar28;
        param_2[8] = lVar10;
        param_2[9] = lStack_78;
        lVar23 = 0;
joined_r0x000100fc48b8:
        if ((uVar15 & 1) != 0) {
          psVar19 = (short *)param_2[7];
          if (psVar19 != (short *)param_2[9]) {
            param_2[7] = (long)(psVar19 + 0x10);
            sVar6 = *psVar19;
            uStack_c0 = *(undefined8 *)(psVar19 + 1);
            uStack_b8 = (undefined6)*(undefined8 *)(psVar19 + 5);
            uStack_aa = (undefined2)*(undefined8 *)(psVar19 + 0xc);
            uStack_a8 = (undefined6)((ulong)*(undefined8 *)(psVar19 + 0xc) >> 0x10);
            uStack_b2 = (undefined2)*(undefined8 *)(psVar19 + 8);
            uStack_b0 = (undefined6)((ulong)*(undefined8 *)(psVar19 + 8) >> 0x10);
            if (sVar6 != 2) goto LAB_100fc4a24;
          }
          if (param_2[8] != 0) {
            _free(param_2[6]);
            lVar23 = param_2[4];
          }
LAB_100fc4aac:
          *(undefined1 *)((long)param_2 + 0x19) = 0;
          if (lVar23 == 0) {
            lVar23 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x14,&UNK_108cc9966,0x20);
          }
          *(undefined1 *)((long)param_2 + 0x19) = 0;
          lVar28 = 2;
          goto LAB_100fc4b04;
        }
        sVar6 = *(short *)((long)param_2 + 0x2c);
        uStack_c0 = *(undefined8 *)((long)param_2 + 0x2e);
        uStack_b8 = (undefined6)*(undefined8 *)((long)param_2 + 0x36);
        uStack_aa = (undefined2)*(undefined8 *)((long)param_2 + 0x44);
        uStack_a8 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x44) >> 0x10);
        uStack_b2 = (undefined2)*(undefined8 *)((long)param_2 + 0x3c);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x3c) >> 0x10);
        *(undefined2 *)((long)param_2 + 0x2c) = 2;
        if (sVar6 == 2) goto LAB_100fc4aac;
LAB_100fc4a24:
        *(short *)(param_2 + 10) = sVar6;
        *(ulong *)((long)param_2 + 0x5a) = CONCAT26(uStack_b2,uStack_b8);
        *(undefined8 *)((long)param_2 + 0x52) = uStack_c0;
        param_2[0xd] = CONCAT62(uStack_a8,uStack_aa);
        param_2[0xc] = CONCAT62(uStack_b0,uStack_b2);
        *(undefined1 *)(param_2 + 0x14) = 0;
LAB_100fc496c:
        func_0x000100fc41d4(&uStack_98,param_2 + 10,param_3);
        lVar23 = lStack_90;
        lVar28 = CONCAT44(uStack_94,uStack_98);
        if (lVar28 == 3) {
          *param_1 = 3;
          uVar14 = 4;
          goto LAB_100fc4b18;
        }
        lStack_68 = lStack_80;
        lStack_70 = lStack_88;
        if ((char)param_2[0x14] == '\x03') {
          if (*(char *)((long)param_2 + 0x9c) == '\x03') {
            FUN_100deb62c(param_2 + 0xe);
          }
          else if (*(char *)((long)param_2 + 0x9c) == '\0') {
            _close((int)param_2[0x13]);
          }
        }
        if (lVar28 == 2) {
          uVar26 = param_2[4];
          if ((uVar26 & 3) == 1) {
            uVar27 = *(undefined8 *)(uVar26 - 1);
            puVar32 = *(undefined8 **)(uVar26 + 7);
            pcVar16 = (code *)*puVar32;
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)(uVar27);
            }
            if (puVar32[1] != 0) {
              _free(uVar27);
            }
            _free((undefined8 *)(uVar26 - 1));
            *(undefined1 *)((long)param_2 + 0x19) = 1;
            param_2[4] = lVar23;
            uVar15 = *(uint *)(param_2 + 5);
          }
          else {
            *(undefined1 *)((long)param_2 + 0x19) = 1;
            param_2[4] = lVar23;
            uVar15 = *(uint *)(param_2 + 5);
          }
          goto joined_r0x000100fc48b8;
        }
        if (((int)param_2[5] != 0) && (param_2[8] != 0)) {
          _free(param_2[6]);
        }
        uVar26 = param_2[4];
        if ((uVar26 & 3) == 1) {
          uVar27 = *(undefined8 *)(uVar26 - 1);
          puVar32 = *(undefined8 **)(uVar26 + 7);
          pcVar16 = (code *)*puVar32;
          if (pcVar16 != (code *)0x0) {
            (*pcVar16)(uVar27);
          }
          if (puVar32[1] != 0) {
            _free(uVar27);
          }
          _free((undefined8 *)(uVar26 - 1));
        }
        *(undefined1 *)((long)param_2 + 0x19) = 0;
      }
LAB_100fc4b04:
      *(undefined1 *)((long)param_2 + 0x1a) = 0;
      *param_1 = lVar28;
      param_1[1] = lVar23;
      param_1[3] = lStack_68;
      param_1[2] = lStack_70;
      uVar14 = 1;
    }
LAB_100fc4b18:
    *(undefined1 *)(param_2 + 3) = uVar14;
    return;
  }
  if (bVar5 == 0) {
    *(undefined2 *)((long)param_2 + 0x19) = 0;
    lVar23 = *param_2;
    lVar28 = param_2[1];
    __ZN5tokio3net4addr77__LT_impl_u20_tokio__net__addr__sealed__ToSocketAddrsPriv_u20_for_u20_str_GT_15to_socket_addrs17h19e17df4fb02707aE
              (&uStack_98,lVar28,param_2[2]);
    if (lVar23 != 0) {
      _free(lVar28);
    }
    param_2[5] = lStack_90;
    param_2[4] = CONCAT44(uStack_94,uStack_98);
    param_2[7] = lStack_80;
    param_2[6] = lStack_88;
    goto LAB_100fc4820;
  }
  puVar32 = param_3;
  if (bVar5 == 1) {
    func_0x000108a07af4(&UNK_10b23a5c8);
  }
  func_0x000108a07b10();
  *(undefined1 *)((long)param_2 + 0x1a) = 0;
  *(undefined1 *)(param_2 + 3) = 2;
  param_1 = (long *)__Unwind_Resume();
  if (unaff_x23 != 0) {
    _free();
    *(undefined1 *)((long)param_2 + 0x1a) = 0;
    *(undefined1 *)(param_2 + 3) = 2;
    __Unwind_Resume(param_1);
    goto LAB_100fc496c;
  }
  *(undefined1 *)((long)param_2 + 0x1a) = 0;
  *(undefined1 *)(param_2 + 3) = 2;
  __Unwind_Resume(param_1);
  auVar33 = func_0x000108a07bc4();
  puVar13 = auVar33._8_8_;
  plVar12 = auVar33._0_8_;
  bVar5 = *(byte *)(puVar13 + 8);
  if (bVar5 < 2) {
    if (bVar5 != 0) {
      func_0x000108a07af4(&UNK_10b23a5e0);
LAB_100fc4d68:
      func_0x000108a07b10(&UNK_10b23a5e0);
      *(undefined1 *)(puVar13 + 8) = 2;
      uVar27 = __Unwind_Resume();
      if (*(short *)(puVar13 + 4) == 3) {
        FUN_100de21d4(puVar13 + 5);
      }
      *(undefined1 *)(puVar13 + 8) = 2;
      __Unwind_Resume(uVar27);
      auVar33 = func_0x000108a07bc4();
      puVar13 = auVar33._8_8_;
      plVar12 = auVar33._0_8_;
      bVar5 = *(byte *)(puVar13 + 0x16);
      pcVar25 = (char *)0x0;
      if (bVar5 < 2) {
        if (bVar5 == 0) {
          uVar21 = *puVar13;
          puVar13[1] = uVar21;
          puVar13[2] = uVar21;
          uVar17 = 1;
          puVar13[3] = 1;
          *(undefined1 *)(puVar13 + 7) = 0;
          uVar27 = uVar21;
LAB_100fc4e44:
          puVar13[4] = uVar21;
          puVar13[5] = uVar17;
          puVar13[6] = uVar27;
          do {
            puVar13[8] = uVar21;
            puVar13[9] = uVar17;
            *(undefined1 *)(puVar13 + 0x15) = 0;
            pcVar24 = pcVar25;
LAB_100fc4ea4:
            func_0x000100fe7f7c(&uStack_1b8,puVar13 + 8,puVar32);
            uVar9 = uStack_1aa;
            uVar8 = uStack_1ae;
            cVar31 = cStack_1af;
            uVar14 = uStack_1b0;
            if (cStack_1af == '\x03') {
              uVar14 = 3;
LAB_100fc51a8:
              *(undefined1 *)(puVar13 + 7) = uVar14;
              uVar14 = 3;
              *plVar12 = 3;
              goto LAB_100fc51b4;
            }
            pcVar25 = (char *)CONCAT44(uStack_1b4,uStack_1b8);
            if ((*(char *)(puVar13 + 0x15) == '\x03') && (*(char *)(puVar13 + 0x14) == '\x03')) {
              lVar23 = puVar13[0xc];
              pcVar24 = (char *)(lVar23 + 0x18);
              if (*pcVar24 == '\0') {
                *pcVar24 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar24,extraout_x1,1000000000);
              }
              plVar18 = puVar13 + 0xd;
              if (*plVar18 == 0) {
                if (*(long **)(lVar23 + 0x20) == plVar18) {
                  plVar20 = (long *)puVar13[0xe];
                  *(long **)(lVar23 + 0x20) = plVar20;
                  goto joined_r0x000100fc4f48;
                }
              }
              else {
                plVar20 = (long *)puVar13[0xe];
                *(long **)(*plVar18 + 8) = plVar20;
joined_r0x000100fc4f48:
                if (plVar20 == (long *)0x0) {
                  if (*(long **)(lVar23 + 0x28) != plVar18) goto LAB_100fc4f58;
                  *(long *)(lVar23 + 0x28) = *plVar18;
                }
                else {
                  *plVar20 = *plVar18;
                }
                *plVar18 = 0;
                puVar13[0xe] = 0;
              }
LAB_100fc4f58:
              if (*pcVar24 == '\x01') {
                *pcVar24 = in_wzr;
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar24,0);
              }
              if (puVar13[0xf] != 0) {
                (**(code **)(puVar13[0xf] + 0x18))(puVar13[0x10]);
              }
            }
            if (cVar31 == '\x02') {
              *(undefined1 *)(puVar13 + 7) = 1;
              lVar23 = 2;
              goto LAB_100fc5110;
            }
            puVar13[8] = pcVar25;
            *(undefined1 *)(puVar13 + 9) = uVar14;
            *(char *)((long)puVar13 + 0x49) = cVar31;
            *(undefined4 *)((long)puVar13 + 0x4a) = uVar8;
            *(undefined2 *)((long)puVar13 + 0x4e) = uVar9;
LAB_100fc4fa0:
            lVar23 = (*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
            if (*(char *)(lVar23 + 0x48) == '\x01') {
LAB_100fc5150:
              cVar31 = *(char *)(lVar23 + 0x44);
              cVar29 = *(char *)(lVar23 + 0x45);
              cVar11 = cVar29;
              if (cVar31 == '\x01') {
                if (cVar29 == '\0') {
                  FUN_10610bbb4(*(undefined8 *)*puVar32,((undefined8 *)*puVar32)[1]);
                  uVar14 = 4;
                  goto LAB_100fc51a8;
                }
                cVar11 = cVar29 + -1;
              }
              *(char *)(lVar23 + 0x45) = cVar11;
              iVar4 = *(int *)(puVar13[6] + 0x18);
            }
            else {
              cVar31 = '\0';
              cVar29 = '\0';
              if (*(char *)(lVar23 + 0x48) != '\x02') {
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar23,&DAT_100c35d48);
                *(undefined1 *)(lVar23 + 0x48) = 1;
                goto LAB_100fc5150;
              }
              iVar4 = *(int *)(puVar13[6] + 0x18);
            }
            if (iVar4 == -1) {
              func_0x000108a07a20(&UNK_10b23a610);
              goto LAB_100fc4e98;
            }
            func_0x0001058e17e0(&uStack_1b8);
            uVar15 = uStack_1b8;
            uVar7 = CONCAT42(uStack_1ae,CONCAT11(cStack_1af,uStack_1b0));
            pcVar24 = (char *)CONCAT26(uStack_1aa,uVar7);
            if (((uStack_1b8 & 1) == 0) || (cVar11 = FUN_100c355d4(pcVar24), cVar11 != '\r')) {
              lVar10 = lStack_1a0;
              lVar28 = lStack_1a8;
              *(undefined1 *)(puVar13 + 7) = 1;
              if ((uVar15 & 1) == 0) {
                FUN_1060f7d54(&uStack_1b8,uStack_1b4,&UNK_10b4cd2d0);
                lVar23 = CONCAT44(uStack_1b4,uStack_1b8);
                pcVar25 = (char *)CONCAT26(uStack_1aa,
                                           CONCAT42(uStack_1ae,CONCAT11(cStack_1af,uStack_1b0)));
                if (lVar23 != 2) {
                  lStack_1c8 = lStack_1a0;
                  lStack_1d0 = lStack_1a8;
                  lStack_1e8 = lVar10;
                  lStack_1f0 = lVar28;
                  lStack_1e0 = lStack_198;
                }
              }
              else {
                lVar23 = 2;
                pcVar25 = pcVar24;
              }
LAB_100fc5110:
              *plVar12 = lVar23;
              plVar12[1] = (long)pcVar25;
              plVar12[3] = lStack_1c8;
              plVar12[2] = lStack_1d0;
              plVar12[4] = (long)pcVar24;
              plVar12[6] = lStack_1e8;
              plVar12[5] = lStack_1f0;
              plVar12[7] = lStack_1e0;
              uVar14 = 1;
LAB_100fc51b4:
              *(undefined1 *)(puVar13 + 0x16) = uVar14;
              return;
            }
            puVar1 = (ulong *)(*(long *)(puVar13[4] + 0x10) + 0x90);
            uVar26 = *(ulong *)(*(long *)(puVar13[4] + 0x10) + 0x90);
            do {
              if ((uint)*(byte *)(puVar13 + 9) != ((uint)(uVar26 >> 0x10) & 0xff))
              goto LAB_100fc5060;
              uVar22 = uVar26 & (puVar13[8] & 0x23 ^ 0xff002f);
              uVar2 = *puVar1;
              bVar3 = uVar2 != uVar26;
              uVar26 = uVar2;
            } while (bVar3);
            *puVar1 = uVar22;
LAB_100fc5060:
            if (cVar31 != '\0') {
              if (*(char *)(lVar23 + 0x48) != '\x01') {
                if (*(char *)(lVar23 + 0x48) == '\x02') goto joined_r0x000100fc5080;
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar23,&DAT_1060edbcc);
                *(undefined1 *)(lVar23 + 0x48) = 1;
              }
              *(undefined1 *)(lVar23 + 0x44) = 1;
              *(char *)(lVar23 + 0x45) = cVar29;
            }
joined_r0x000100fc5080:
            pcVar25 = pcVar24;
            if (((ulong)uVar7 & 3) == 1) {
              pcVar25 = pcVar24 + -1;
              uVar27 = *(undefined8 *)pcVar25;
              puVar30 = *(undefined8 **)(pcVar24 + 7);
              pcVar16 = (code *)*puVar30;
              if (pcVar16 != (code *)0x0) {
                (*pcVar16)(uVar27);
              }
              if (puVar30[1] != 0) {
                _free(uVar27);
              }
              _free(pcVar25);
            }
            uVar21 = puVar13[4];
            uVar17 = puVar13[5];
          } while( true );
        }
        func_0x000108a07af4(&UNK_10b23a5f8);
      }
      else if (bVar5 == 3) {
        bVar5 = *(byte *)(puVar13 + 7);
        uVar15 = (uint)bVar5;
        if (2 < bVar5) {
          pcVar24 = pcVar25;
          if (bVar5 == 3) goto LAB_100fc4ea4;
          goto LAB_100fc4fa0;
        }
        if (bVar5 == 0) {
          uVar27 = puVar13[2];
          uVar17 = puVar13[3];
          uVar21 = puVar13[1];
          goto LAB_100fc4e44;
        }
        goto LAB_100fc4e68;
      }
      func_0x000108a07b10(&UNK_10b23a5f8);
      uVar15 = extraout_w8;
LAB_100fc4e68:
      if (uVar15 == 1) {
        func_0x000108a07af4(&UNK_10b23ad38);
      }
      else {
        func_0x000108a07b10(&UNK_10b23ad38);
      }
LAB_100fc4e98:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100fc4e9c);
      (*pcVar16)();
    }
    puVar13[5] = puVar13[1];
    puVar13[4] = *puVar13;
    puVar13[7] = puVar13[3];
    puVar13[6] = puVar13[2];
  }
  else if (bVar5 != 3) goto LAB_100fc4d68;
  sStack_130 = *(short *)(puVar13 + 4);
  *(undefined2 *)(puVar13 + 4) = 4;
  if (sStack_130 == 4) {
    func_0x000108a079f0(&UNK_108cd4bab,0x1f,&UNK_10b24be08);
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100fc4d5c);
    (*pcVar16)();
  }
  if (sStack_130 == 2) {
    lVar23 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x14,&UNK_108cc9966,0x20);
  }
  else {
    lStack_128 = puVar13[5];
    lVar23 = lStack_128;
    if (sStack_130 != 3) {
      uStack_12e = *(undefined4 *)((long)puVar13 + 0x22);
      uStack_12a = *(undefined2 *)((long)puVar13 + 0x26);
      uStack_118 = puVar13[7];
      uStack_120 = puVar13[6];
      __ZN3mio3net3tcp8listener11TcpListener4bind17h8a2438e91a9070bbE(&iStack_100,&sStack_130);
      lVar23 = lStack_f8;
      if (iStack_100 != 1) {
        FUN_1060f7d54(&iStack_100,uStack_fc,&UNK_10b4cd2e8);
        lVar23 = CONCAT44(uStack_fc,iStack_100);
        if (lVar23 != 2) {
          lStack_108 = lStack_e8;
          lStack_110 = lStack_f0;
        }
        goto LAB_100fc4cf0;
      }
    }
  }
  lStack_f8 = lVar23;
  lVar23 = 2;
LAB_100fc4cf0:
  *plVar12 = lVar23;
  plVar12[1] = lStack_f8;
  plVar12[3] = lStack_108;
  plVar12[2] = lStack_110;
  *(undefined1 *)(puVar13 + 8) = 1;
  return;
}

