
/* WARNING: Possible PIC construction at 0x000108a2a3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2ab68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a2a980) */
/* WARNING: Removing unreachable block (ram,0x000108a2ab6c) */
/* WARNING: Removing unreachable block (ram,0x000108a2a78c) */
/* WARNING: Removing unreachable block (ram,0x000108a2a620) */
/* WARNING: Removing unreachable block (ram,0x000108a2a3f4) */
/* WARNING: Removing unreachable block (ram,0x000108a2a8d4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_101508644(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  char *pcVar1;
  undefined8 *******pppppppuVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  ulong *puVar10;
  byte *pbVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int extraout_w10;
  ulong uVar23;
  ulong uVar24;
  ulong *unaff_x19;
  char *unaff_x20;
  ulong uVar25;
  long lVar26;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  char in_wzr;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  uint uStack_218;
  int iStack_214;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 auStack_1f8 [8];
  undefined1 auStack_1b8 [96];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  ulong extraout_x9;
  
  puVar10 = param_1 + 2;
  uVar25 = *puVar10;
  pcVar1 = (char *)(uVar25 + 0x10);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    cVar4 = (char)param_1[6];
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,param_2,1000000000);
    cVar4 = (char)param_1[6];
  }
  if (cVar4 == '\x01') {
    puVar16 = param_1 + 3;
    *(undefined1 *)(param_1 + 6) = 0;
    if (*puVar16 == 0) {
      if (*(ulong **)(uVar25 + 0x28) == puVar10) {
        uVar20 = param_1[4];
        *(ulong *)(uVar25 + 0x28) = uVar20;
        goto joined_r0x0001015086fc;
      }
LAB_1015087f8:
      func_0x000108a07a20(&UNK_10b24e580);
LAB_101508804:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101508808);
      (*pcVar8)();
    }
    uVar20 = param_1[4];
    *(ulong *)(*puVar16 + 0x10) = uVar20;
joined_r0x0001015086fc:
    if (uVar20 == 0) {
      if (*(ulong **)(uVar25 + 0x30) != puVar10) goto LAB_1015087f8;
      *(ulong *)(uVar25 + 0x30) = *puVar16;
      *puVar16 = 0;
      param_1[4] = 0;
      puVar16 = *(ulong **)(uVar25 + 0x18);
    }
    else {
      *(ulong *)(uVar20 + 8) = *puVar16;
      *puVar16 = 0;
      param_1[4] = 0;
      puVar16 = *(ulong **)(uVar25 + 0x18);
    }
    if (puVar16 == puVar10) {
      func_0x00010897c064(1,uVar25 + 0x18,&stack0xffffffffffffffc8,0,param_5,&UNK_10b23aac0);
      goto LAB_101508804;
    }
    param_1[3] = 0;
    param_1[4] = (ulong)puVar16;
    if (puVar16 != (ulong *)0x0) {
      puVar16[1] = (ulong)puVar10;
    }
    *(ulong **)(uVar25 + 0x18) = puVar10;
    if (*(long *)(uVar25 + 0x20) == 0) {
      *(ulong **)(uVar25 + 0x20) = puVar10;
      lVar26 = *(long *)(uVar25 + 0x38);
      uVar18 = *(undefined8 *)(uVar25 + 0x40);
      *(undefined8 *)(uVar25 + 0x38) = 0;
    }
    else {
      lVar26 = *(long *)(uVar25 + 0x38);
      uVar18 = *(undefined8 *)(uVar25 + 0x40);
      *(undefined8 *)(uVar25 + 0x38) = 0;
    }
    if (lVar26 != 0) {
      if (*pcVar1 == '\x01') {
        *pcVar1 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x000101508780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (ulong *)(**(code **)(lVar26 + 8))(uVar18);
      return puVar10;
    }
  }
  if (*pcVar1 == '\x01') {
    *pcVar1 = in_wzr;
    return param_1;
  }
  pppppppuVar2 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar25 = (long)pcVar1 * -0x61c8864680b583eb;
  do {
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
      plVar12 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE();
      puVar10 = (ulong *)(uVar25 >> ((ulong)(uint)-(int)plVar12[3] & 0x3f));
      if ((ulong *)plVar12[1] <= puVar10) goto LAB_108a2a63c;
    }
    else {
      puVar10 = (ulong *)(uVar25 >>
                         ((ulong)(uint)-(int)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E
                                             [3] & 0x3f));
      plVar12 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
      if ((ulong *)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E[1] <= puVar10)
      goto LAB_108a2a63c;
    }
    puVar16 = (ulong *)(*plVar12 + (long)puVar10 * 0x40);
    if (*puVar16 == 0) {
      *puVar16 = 1;
    }
    else {
      puVar10 = (ulong *)__ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE
                                   (puVar16);
    }
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar12) {
      uVar20 = puVar16[1];
      if (uVar20 == 0) goto LAB_108a2a4f0;
      if (*(char **)(uVar20 + 0x78) != pcVar1) goto LAB_108a2a480;
      uVar17 = 0;
      uVar23 = *(ulong *)(uVar20 + 0x80);
      puVar16[1] = uVar23;
      if (puVar16[2] != uVar20) goto LAB_108a2a460;
      goto LAB_108a2a4b0;
    }
    uVar20 = *puVar16;
    *puVar16 = uVar20 - 1;
    LORelease();
  } while (uVar20 < 4 || (uVar20 & 2) != 0);
  unaff_x30 = 0x108a2a3f4;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = puVar16;
  unaff_x20 = pcVar1;
  unaff_x29 = pppppppuVar2;
  goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
  while (*(char **)(uVar20 + 0x78) != pcVar1) {
LAB_108a2a480:
    uVar17 = uVar20;
    uVar20 = *(ulong *)(uVar17 + 0x80);
    if (uVar20 == 0) goto LAB_108a2a4f0;
  }
  uVar23 = *(ulong *)(uVar20 + 0x80);
  *(ulong *)(uVar17 + 0x80) = uVar23;
  if (puVar16[2] == uVar20) {
LAB_108a2a4b0:
    uVar25 = 0;
    puVar16[2] = uVar17;
LAB_108a2a4b8:
    auVar28 = func_0x000106032954(8);
    uVar17 = auVar28._0_8_;
    uVar23 = puVar16[3];
    bVar9 = SBORROW8(uVar17,uVar23);
    lVar26 = uVar17 - uVar23;
    if (uVar17 != uVar23) goto LAB_108a2a53c;
LAB_108a2a4cc:
    iVar14 = (int)uVar25;
    if ((uint)puVar16[4] < auVar28._8_4_) goto LAB_108a2a540;
LAB_108a2a4d8:
    uVar18 = 0;
    if (iVar14 == 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    else {
      pcVar1[0] = '\x02';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
  }
  else {
LAB_108a2a460:
    if (uVar23 != 0) {
      do {
        bVar9 = *(char **)(uVar23 + 0x78) == pcVar1;
        uVar25 = (ulong)bVar9;
        if (bVar9) break;
        uVar23 = *(ulong *)(uVar23 + 0x80);
      } while (uVar23 != 0);
      goto LAB_108a2a4b8;
    }
    uVar25 = 0;
    auVar28 = func_0x000106032954(8);
    uVar17 = auVar28._0_8_;
    uVar23 = puVar16[3];
    bVar9 = SBORROW8(uVar17,uVar23);
    lVar26 = uVar17 - uVar23;
    if (uVar17 == uVar23) goto LAB_108a2a4cc;
LAB_108a2a53c:
    iVar14 = (int)uVar25;
    if (lVar26 < 0 != bVar9) goto LAB_108a2a4d8;
LAB_108a2a540:
    uVar17 = auVar28._0_8_;
    uVar15 = (uint)puVar16[5] ^ (uint)puVar16[5] << 0xd;
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(puVar16 + 5) = uVar15;
    uVar15 = uVar15 % 1000000 + auVar28._8_4_;
    if (999999999 < uVar15) {
      bVar9 = SCARRY8(uVar17,1);
      uVar17 = uVar17 + 1;
      if (bVar9) {
        func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
LAB_108a2a63c:
        iVar14 = 0xb3df510;
        auVar27 = func_0x000108a07bdc();
        uStack_220 = auVar27._8_8_;
        pbVar11 = auVar27._0_8_;
        pcStack_58 = __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E;
        unaff_x29 = &pppppppuStack_60;
        pppppppuStack_60 = pppppppuVar2;
        puStack_208 = (undefined8 *)
                      (*
                      ___ZN16parking_lot_core11parking_lot16with_thread_data11THREAD_DATA29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h1b951351c9673096E
                      )();
        uVar19 = (undefined4)extraout_x9;
        uVar20 = 0;
        puStack_210 = auStack_1f8;
        uStack_218 = (uint)(iVar14 != extraout_w10);
        unaff_x20 = &__ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
        puStack_228 = &UNK_10b3df510;
        unaff_x19 = (ulong *)0xffffffffffffffff;
        uVar17 = extraout_x9;
        iStack_214 = iVar14;
        if ((extraout_x9 & 1) != 0) goto LAB_108a2a6f8;
LAB_108a2a6dc:
        bVar3 = *pbVar11;
        if (bVar3 == (byte)uVar17) {
          *pbVar11 = (byte)uVar17 | 1;
        }
        if ((uint)bVar3 == ((uint)uVar17 & 0xff)) {
          return (ulong *)0x1;
        }
joined_r0x000108a2a6f4:
        while( true ) {
          uVar17 = (ulong)bVar3;
          uVar19 = ZEXT14(bVar3);
          if ((bVar3 & 1) == 0) break;
LAB_108a2a6f8:
          if (((uint)uVar19 >> 1 & 1) != 0) goto LAB_108a2a718;
          uVar15 = (uint)uVar20;
          if (9 < uVar15) goto code_r0x000108a2a704;
          uVar20 = (ulong)(uVar15 + 1);
          if (uVar15 < 3) {
            iVar14 = 2 << (ulong)(uVar15 & 0x1f);
            do {
              InstructionSynchronizationBarrier();
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            goto LAB_108a2aa60;
          }
          _sched_yield();
          bVar3 = *pbVar11;
          uVar25 = uVar20;
        }
        goto LAB_108a2a6dc;
      }
      uVar15 = uVar15 + 0xc4653600;
    }
    puVar16[3] = uVar17;
    *(uint *)(puVar16 + 4) = uVar15;
    uVar18 = 1;
    if ((int)uVar25 == 0) {
      *pcVar1 = '\x01';
    }
  }
  *(undefined8 *)(uVar20 + 0x88) = uVar18;
  _pthread_mutex_lock(uVar20);
  uVar25 = *puVar16;
  *puVar16 = uVar25 - 1;
  LORelease();
  if ((uVar25 < 4) || (((uint)uVar25 >> 1 & 1) != 0)) {
    *(undefined1 *)(uVar20 + 0x70) = 0;
    _pthread_cond_signal(uVar20 + 0x40);
code_r0x000108aaa13c:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (ulong *)(*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(uVar20);
    return puVar10;
  }
  unaff_x30 = 0x108a2a620;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = puVar16;
  unaff_x20 = pcVar1;
  unaff_x29 = pppppppuVar2;
__ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E:
  *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar25 = *puVar16;
  do {
    uVar17 = uVar25;
    if (uVar17 < 4) {
      return puVar16;
    }
    if (((uint)uVar17 >> 1 & 1) != 0) {
      return puVar16;
    }
    uVar25 = *puVar16;
  } while (*puVar16 != uVar17);
  *puVar16 = uVar17 | 2;
  do {
    uVar23 = uVar17 & 0xfffffffffffffffc;
    uVar20 = *(ulong *)(uVar23 + 0x78);
    uVar25 = uVar23;
    while (uVar20 == 0) {
      uVar24 = *(ulong *)(uVar25 + 0x88);
      *(ulong *)(uVar24 + 0x80) = uVar25;
      uVar25 = uVar24;
      uVar20 = *(ulong *)(uVar24 + 0x78);
    }
    *(ulong *)(uVar23 + 0x78) = uVar20;
    if ((uVar17 & 1) == 0) {
      uVar25 = uVar17;
      if (*(long *)(uVar20 + 0x80) != 0) {
        *(long *)(uVar23 + 0x78) = *(long *)(uVar20 + 0x80);
        uVar25 = *puVar16;
        *puVar16 = uVar25 & 0xfffffffffffffffd;
        LORelease();
LAB_108a2b2e4:
        _pthread_mutex_lock(uVar25,uVar20);
        *(undefined1 *)(uVar20 + 0x70) = 0;
        _pthread_cond_signal(uVar20 + 0x40);
        goto code_r0x000108aaa13c;
      }
      do {
        uVar17 = *puVar16;
        if (uVar17 == uVar25) {
          *puVar16 = uVar25 & 1;
          goto LAB_108a2b2e4;
        }
        uVar25 = uVar17;
      } while (uVar17 < 4);
    }
    else {
      uVar25 = uVar17 & 0xfffffffffffffffd;
      bVar9 = *puVar16 == uVar17;
      uVar17 = *puVar16;
      if (bVar9) {
        *puVar16 = uVar25;
        return puVar16;
      }
    }
    DataMemoryBarrier(2,1);
  } while( true );
LAB_108a2a4f0:
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  uVar25 = *puVar16;
  *puVar16 = uVar25 - 1;
  LORelease();
  if (uVar25 < 4 || (uVar25 & 2) != 0) {
    return puVar10;
  }
  goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
code_r0x000108a2a704:
  bVar3 = *pbVar11;
  if (bVar3 == (byte)uVar19) {
    *pbVar11 = (byte)uVar19 | 2;
  }
  if ((uint)bVar3 != (uVar19 & 0xff)) goto joined_r0x000108a2a6f4;
LAB_108a2a718:
  uStack_200 = 0;
  puVar13 = puStack_208;
  if (((*(char *)(puStack_208 + 0x14) != '\x01') &&
      (puVar13 = (undefined8 *)FUN_108a2ac08(puStack_208), puVar13 == (undefined8 *)0x0)) &&
     (puVar13 = puStack_210, (uStack_200 & 1) == 0)) {
    __ZN16parking_lot_core11parking_lot10ThreadData3new17hfa4775c6f0f885d9E(&uStack_158);
    uVar7 = uStack_e0;
    uVar6 = uStack_e8;
    uVar18 = uStack_f8;
    uStack_200 = 1;
    puStack_210[0xd] = uStack_f0;
    puStack_210[0xc] = uVar18;
    puStack_210[0xf] = uVar7;
    puStack_210[0xe] = uVar6;
    uVar7 = uStack_c0;
    uVar6 = uStack_c8;
    uVar18 = uStack_d8;
    puStack_210[0x11] = uStack_d0;
    puStack_210[0x10] = uVar18;
    puStack_210[0x13] = uVar7;
    puStack_210[0x12] = uVar6;
    uVar7 = uStack_120;
    uVar6 = uStack_128;
    uVar18 = uStack_138;
    puStack_210[5] = uStack_130;
    puStack_210[4] = uVar18;
    puStack_210[7] = uVar7;
    puStack_210[6] = uVar6;
    uVar7 = uStack_100;
    uVar6 = uStack_108;
    uVar18 = uStack_118;
    puStack_210[9] = uStack_110;
    puStack_210[8] = uVar18;
    puStack_210[0xb] = uVar7;
    puStack_210[10] = uVar6;
    uVar7 = uStack_140;
    uVar6 = uStack_148;
    uVar18 = uStack_158;
    puStack_210[1] = uStack_150;
    *puStack_210 = uVar18;
    puStack_210[3] = uVar7;
    puStack_210[2] = uVar6;
    puVar13 = puStack_210;
  }
  while( true ) {
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
      plVar12 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE();
      uVar20 = (ulong)((long)pbVar11 * -0x61c8864680b583eb) >>
               ((ulong)(uint)-(int)plVar12[3] & 0x3f);
      uVar17 = plVar12[1];
      if (uVar17 <= uVar20) goto LAB_108a2abac;
    }
    else {
      uVar20 = (ulong)((long)pbVar11 * -0x61c8864680b583eb) >>
               ((ulong)(uint)-(int)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E
                                   [3] & 0x3f);
      uVar17 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E[1];
      plVar12 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
      if (uVar17 <= uVar20) goto LAB_108a2abac;
    }
    puVar16 = (ulong *)(*plVar12 + uVar20 * 0x40);
    if (*puVar16 == 0) {
      *puVar16 = 1;
    }
    else {
      __ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE(puVar16);
    }
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar12) break;
    uVar20 = *puVar16;
    *puVar16 = uVar20 - 1;
    LORelease();
    if (3 < uVar20 && (uVar20 & 2) == 0) {
      unaff_x30 = 0x108a2a78c;
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
  }
  if (*pbVar11 != 3) {
    uVar20 = *puVar16;
    *puVar16 = uVar20 - 1;
    LORelease();
    if (uVar20 < 4 || (uVar20 & 2) != 0) {
      lVar26 = 1;
    }
    else {
      func_0x000108a2b220(puVar16);
      lVar26 = 1;
    }
    goto LAB_108a2aa28;
  }
  *(char *)(puVar13 + 0x13) = (char)uStack_218;
  puVar13[0x10] = 0;
  puVar13[0xf] = pbVar11;
  puVar13[0x12] = 0;
  *(undefined1 *)(puVar13 + 0xe) = 1;
  if ((*(byte *)((long)puVar13 + 0x71) & 1) == 0) {
    *(undefined1 *)((long)puVar13 + 0x71) = 1;
  }
  if (puVar16[1] == 0) {
    puVar16[1] = (ulong)puVar13;
    puVar16[2] = (ulong)puVar13;
    uVar25 = *puVar16;
    *puVar16 = uVar25 - 1;
    LORelease();
    if (3 < uVar25 && (uVar25 & 2) == 0) goto LAB_108a2a8cc;
  }
  else {
    *(undefined8 **)(puVar16[2] + 0x80) = puVar13;
    puVar16[2] = (ulong)puVar13;
    uVar25 = *puVar16;
    *puVar16 = uVar25 - 1;
    LORelease();
    if (3 < uVar25 && (uVar25 & 2) == 0) {
LAB_108a2a8cc:
      unaff_x30 = 0x108a2a8d4;
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
  }
  if (iStack_214 == 1000000000) {
    _pthread_mutex_lock(puVar13);
    if (*(char *)(puVar13 + 0xe) == '\x01') {
      do {
        _pthread_cond_wait(puVar13 + 8,puVar13);
      } while ((*(byte *)(puVar13 + 0xe) & 1) != 0);
    }
    _pthread_mutex_unlock(puVar13);
  }
  else {
    uVar25 = FUN_1059dd990(puVar13,uStack_220);
    if ((uVar25 & 1) == 0) {
      do {
        plVar12 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
        if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
          plVar12 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE
                                      ();
        }
        uVar25 = puVar13[0xf];
        uVar20 = uVar25 * -0x61c8864680b583eb >> ((ulong)(uint)-(int)plVar12[3] & 0x3f);
        uVar17 = plVar12[1];
        if (uVar17 <= uVar20) {
          puStack_228 = &UNK_10b3df588;
LAB_108a2abac:
          func_0x000108a07bdc(uVar20,uVar17,puStack_228);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x108a2abb8);
          (*pcVar8)();
        }
        puVar16 = (ulong *)(*plVar12 + uVar20 * 0x40);
        if (*puVar16 == 0) {
          *puVar16 = 1;
        }
        else {
          __ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE(puVar16);
        }
        if ((___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar12) &&
           (puVar13[0xf] == uVar25)) goto LAB_108a2a994;
        uVar25 = *puVar16;
        *puVar16 = uVar25 - 1;
        LORelease();
        if (3 < uVar25 && (uVar25 & 2) == 0) {
          unaff_x30 = 0x108a2a980;
          register0x00000008 = (BADSPACEBASE *)auStack_230;
          goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
        }
      } while( true );
    }
  }
LAB_108a2aa18:
  lVar26 = 0;
  uVar25 = (ulong)(puVar13[0x11] == 1);
LAB_108a2aa28:
  lVar5 = ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E;
  if (uStack_200 != 0) {
    ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E =
         ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E + -1;
    _pthread_mutex_destroy(lVar5,puStack_210);
    _pthread_cond_destroy(auStack_1b8);
  }
  if (lVar26 == 0) {
    if ((uVar25 & 1) != 0) {
      return (ulong *)0x1;
    }
    uVar20 = 0;
    bVar3 = *pbVar11;
    uVar25 = uVar20;
  }
  else {
    if (lVar26 != 1) {
      return (ulong *)0x0;
    }
    uVar20 = 0;
LAB_108a2aa60:
    bVar3 = *pbVar11;
    uVar25 = uVar20;
  }
  goto joined_r0x000108a2a6f4;
LAB_108a2a994:
  _pthread_mutex_lock(puVar13);
  bVar3 = *(byte *)(puVar13 + 0xe);
  _pthread_mutex_unlock(puVar13);
  if ((bVar3 & 1) != 0) {
    puVar21 = (undefined8 *)puVar16[1];
    if (puVar21 != (undefined8 *)0x0) {
      if (puVar21 == puVar13) {
        uVar20 = puVar21[0x10];
        puVar16[1] = uVar20;
        if ((undefined8 *)puVar16[2] != puVar13) {
          bVar9 = true;
          goto joined_r0x000108a2aaa0;
        }
        puVar16[2] = 0;
LAB_108a2aac4:
        *pbVar11 = *pbVar11 & 0xfd;
      }
      else {
        bVar9 = true;
        do {
          puVar22 = puVar21;
          puVar21 = (undefined8 *)puVar22[0x10];
          if (puVar21 == (undefined8 *)0x0) goto LAB_108a2aacc;
          bVar9 = (bool)(puVar22[0xf] != uVar25 & bVar9);
        } while (puVar21 != puVar13);
        uVar20 = puVar21[0x10];
        puVar22[0x10] = uVar20;
        if ((undefined8 *)puVar16[2] == puVar13) {
          puVar16[2] = (ulong)puVar22;
          if (bVar9) goto LAB_108a2aac4;
        }
        else {
joined_r0x000108a2aaa0:
          for (; uVar20 != 0; uVar20 = *(ulong *)(uVar20 + 0x80)) {
            if (*(ulong *)(uVar20 + 0x78) == uVar25) goto LAB_108a2aacc;
          }
          if (bVar9) goto LAB_108a2aac4;
        }
      }
    }
LAB_108a2aacc:
    uVar20 = *puVar16;
    *puVar16 = uVar20 - 1;
    LORelease();
    if (3 < uVar20 && (uVar20 & 2) == 0) {
      unaff_x30 = 0x108a2ab6c;
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
    lVar26 = 2;
    goto LAB_108a2aa28;
  }
  uVar25 = *puVar16;
  *puVar16 = uVar25 - 1;
  LORelease();
  if (3 < uVar25 && (uVar25 & 2) == 0) {
    func_0x000108a2b220(puVar16);
  }
  goto LAB_108a2aa18;
}

