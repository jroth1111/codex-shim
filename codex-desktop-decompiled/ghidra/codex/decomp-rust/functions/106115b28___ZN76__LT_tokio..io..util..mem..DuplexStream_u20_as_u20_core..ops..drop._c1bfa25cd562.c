
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

ulong * __ZN76__LT_tokio__io__util__mem__DuplexStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h9c50051bf4719a0dE
                  (long *param_1,undefined8 param_2)

{
  undefined8 *******pppppppuVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int extraout_w10;
  ulong uVar21;
  ulong uVar22;
  ulong *unaff_x19;
  char *pcVar23;
  char *unaff_x20;
  long lVar24;
  ulong uVar25;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  char in_wzr;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
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
  
  lVar24 = param_1[1];
  pcVar23 = (char *)(lVar24 + 0x10);
  if (*pcVar23 == '\0') {
    *pcVar23 = '\x01';
    *(undefined1 *)(lVar24 + 0x60) = 1;
    lVar3 = *(long *)(lVar24 + 0x40);
    uVar17 = *(undefined8 *)(lVar24 + 0x48);
    *(undefined8 *)(lVar24 + 0x40) = 0;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar23,param_2,1000000000);
    *(undefined1 *)(lVar24 + 0x60) = 1;
    lVar3 = *(long *)(lVar24 + 0x40);
    uVar17 = *(undefined8 *)(lVar24 + 0x48);
    *(undefined8 *)(lVar24 + 0x40) = 0;
    param_2 = extraout_x1_00;
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 8))(uVar17);
    param_2 = extraout_x1;
  }
  if (*pcVar23 == '\x01') {
    *pcVar23 = in_wzr;
    lVar24 = *param_1;
    pcVar23 = (char *)(lVar24 + 0x10);
    if (*pcVar23 != '\0') goto LAB_106115c18;
    *pcVar23 = '\x01';
LAB_106115b98:
    *(undefined1 *)(lVar24 + 0x60) = 1;
    lVar3 = *(long *)(lVar24 + 0x50);
    puVar9 = *(ulong **)(lVar24 + 0x58);
    *(undefined8 *)(lVar24 + 0x50) = 0;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar23,0);
    lVar24 = *param_1;
    pcVar23 = (char *)(lVar24 + 0x10);
    param_2 = extraout_x1_01;
    if (*pcVar23 == '\0') {
      *pcVar23 = '\x01';
      goto LAB_106115b98;
    }
LAB_106115c18:
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar23,param_2,1000000000);
    *(undefined1 *)(lVar24 + 0x60) = 1;
    lVar3 = *(long *)(lVar24 + 0x50);
    puVar9 = *(ulong **)(lVar24 + 0x58);
    *(undefined8 *)(lVar24 + 0x50) = 0;
  }
  if (lVar3 != 0) {
    puVar9 = (ulong *)(**(code **)(lVar3 + 8))(puVar9);
  }
  if (*pcVar23 == '\x01') {
    *pcVar23 = in_wzr;
    return puVar9;
  }
  pppppppuVar1 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar25 = (long)pcVar23 * -0x61c8864680b583eb;
  do {
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
      plVar11 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE();
      puVar9 = (ulong *)(uVar25 >> ((ulong)(uint)-(int)plVar11[3] & 0x3f));
      if ((ulong *)plVar11[1] <= puVar9) goto LAB_108a2a63c;
    }
    else {
      puVar9 = (ulong *)(uVar25 >>
                        ((ulong)(uint)-(int)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E
                                            [3] & 0x3f));
      plVar11 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
      if ((ulong *)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E[1] <= puVar9)
      goto LAB_108a2a63c;
    }
    puVar13 = (ulong *)(*plVar11 + (long)puVar9 * 0x40);
    if (*puVar13 == 0) {
      *puVar13 = 1;
    }
    else {
      puVar9 = (ulong *)__ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE
                                  (puVar13);
    }
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar11) {
      uVar8 = puVar13[1];
      if (uVar8 == 0) goto LAB_108a2a4f0;
      if (*(char **)(uVar8 + 0x78) != pcVar23) goto LAB_108a2a480;
      uVar16 = 0;
      uVar21 = *(ulong *)(uVar8 + 0x80);
      puVar13[1] = uVar21;
      if (puVar13[2] == uVar8) goto LAB_108a2a4b0;
      goto LAB_108a2a460;
    }
    uVar8 = *puVar13;
    *puVar13 = uVar8 - 1;
    LORelease();
  } while (uVar8 < 4 || (uVar8 & 2) != 0);
  unaff_x30 = 0x108a2a3f4;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = puVar13;
  unaff_x20 = pcVar23;
  unaff_x29 = pppppppuVar1;
  goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
  while (*(char **)(uVar8 + 0x78) != pcVar23) {
LAB_108a2a480:
    uVar16 = uVar8;
    uVar8 = *(ulong *)(uVar16 + 0x80);
    if (uVar8 == 0) goto LAB_108a2a4f0;
  }
  uVar21 = *(ulong *)(uVar8 + 0x80);
  *(ulong *)(uVar16 + 0x80) = uVar21;
  if (puVar13[2] == uVar8) {
LAB_108a2a4b0:
    uVar25 = 0;
    puVar13[2] = uVar16;
LAB_108a2a4b8:
    auVar27 = func_0x000106032954(8);
    uVar16 = auVar27._0_8_;
    uVar21 = puVar13[3];
    bVar7 = SBORROW8(uVar16,uVar21);
    lVar24 = uVar16 - uVar21;
    if (uVar16 != uVar21) goto LAB_108a2a53c;
LAB_108a2a4cc:
    iVar14 = (int)uVar25;
    if (auVar27._8_4_ <= (uint)puVar13[4]) goto LAB_108a2a4d8;
LAB_108a2a540:
    uVar16 = auVar27._0_8_;
    uVar15 = (uint)puVar13[5] ^ (uint)puVar13[5] << 0xd;
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(puVar13 + 5) = uVar15;
    uVar15 = uVar15 % 1000000 + auVar27._8_4_;
    if (999999999 < uVar15) {
      bVar7 = SCARRY8(uVar16,1);
      uVar16 = uVar16 + 1;
      if (bVar7) {
        func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
LAB_108a2a63c:
        iVar14 = 0xb3df510;
        auVar26 = func_0x000108a07bdc();
        uStack_220 = auVar26._8_8_;
        pbVar10 = auVar26._0_8_;
        pcStack_58 = __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E;
        unaff_x29 = &pppppppuStack_60;
        pppppppuStack_60 = pppppppuVar1;
        puStack_208 = (undefined8 *)
                      (*
                      ___ZN16parking_lot_core11parking_lot16with_thread_data11THREAD_DATA29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h1b951351c9673096E
                      )();
        uVar18 = (undefined4)extraout_x9;
        uVar8 = 0;
        puStack_210 = auStack_1f8;
        uStack_218 = (uint)(iVar14 != extraout_w10);
        unaff_x20 = &__ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
        puStack_228 = &UNK_10b3df510;
        unaff_x19 = (ulong *)0xffffffffffffffff;
        uVar16 = extraout_x9;
        iStack_214 = iVar14;
        if ((extraout_x9 & 1) != 0) goto LAB_108a2a6f8;
LAB_108a2a6dc:
        bVar2 = *pbVar10;
        if (bVar2 == (byte)uVar16) {
          *pbVar10 = (byte)uVar16 | 1;
        }
        if ((uint)bVar2 == ((uint)uVar16 & 0xff)) {
          return (ulong *)0x1;
        }
joined_r0x000108a2a6f4:
        while( true ) {
          uVar16 = (ulong)bVar2;
          uVar18 = ZEXT14(bVar2);
          if ((bVar2 & 1) == 0) break;
LAB_108a2a6f8:
          if (((uint)uVar18 >> 1 & 1) != 0) goto LAB_108a2a718;
          uVar15 = (uint)uVar8;
          if (9 < uVar15) goto code_r0x000108a2a704;
          uVar8 = (ulong)(uVar15 + 1);
          if (uVar15 < 3) {
            iVar14 = 2 << (ulong)(uVar15 & 0x1f);
            do {
              InstructionSynchronizationBarrier();
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            goto LAB_108a2aa60;
          }
          _sched_yield();
          bVar2 = *pbVar10;
          uVar25 = uVar8;
        }
        goto LAB_108a2a6dc;
      }
      uVar15 = uVar15 + 0xc4653600;
    }
    puVar13[3] = uVar16;
    *(uint *)(puVar13 + 4) = uVar15;
    uVar17 = 1;
    if ((int)uVar25 == 0) {
      *pcVar23 = '\x01';
    }
  }
  else {
LAB_108a2a460:
    if (uVar21 != 0) {
      do {
        bVar7 = *(char **)(uVar21 + 0x78) == pcVar23;
        uVar25 = (ulong)bVar7;
        if (bVar7) break;
        uVar21 = *(ulong *)(uVar21 + 0x80);
      } while (uVar21 != 0);
      goto LAB_108a2a4b8;
    }
    uVar25 = 0;
    auVar27 = func_0x000106032954(8);
    uVar16 = auVar27._0_8_;
    uVar21 = puVar13[3];
    bVar7 = SBORROW8(uVar16,uVar21);
    lVar24 = uVar16 - uVar21;
    if (uVar16 == uVar21) goto LAB_108a2a4cc;
LAB_108a2a53c:
    iVar14 = (int)uVar25;
    if (lVar24 < 0 == bVar7) goto LAB_108a2a540;
LAB_108a2a4d8:
    uVar17 = 0;
    if (iVar14 == 0) {
      pcVar23[0] = '\0';
      pcVar23[1] = '\0';
      pcVar23[2] = '\0';
      pcVar23[3] = '\0';
    }
    else {
      pcVar23[0] = '\x02';
      pcVar23[1] = '\0';
      pcVar23[2] = '\0';
      pcVar23[3] = '\0';
    }
  }
  *(undefined8 *)(uVar8 + 0x88) = uVar17;
  _pthread_mutex_lock(uVar8);
  uVar25 = *puVar13;
  *puVar13 = uVar25 - 1;
  LORelease();
  if ((uVar25 < 4) || (((uint)uVar25 >> 1 & 1) != 0)) {
    *(undefined1 *)(uVar8 + 0x70) = 0;
    _pthread_cond_signal(uVar8 + 0x40);
code_r0x000108aaa13c:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar9 = (ulong *)(*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(uVar8);
    return puVar9;
  }
  unaff_x30 = 0x108a2a620;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = puVar13;
  unaff_x20 = pcVar23;
  unaff_x29 = pppppppuVar1;
__ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E:
  *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar25 = *puVar13;
  do {
    uVar16 = uVar25;
    if (uVar16 < 4) {
      return puVar13;
    }
    if (((uint)uVar16 >> 1 & 1) != 0) {
      return puVar13;
    }
    uVar25 = *puVar13;
  } while (*puVar13 != uVar16);
  *puVar13 = uVar16 | 2;
  do {
    uVar21 = uVar16 & 0xfffffffffffffffc;
    uVar8 = *(ulong *)(uVar21 + 0x78);
    uVar25 = uVar21;
    while (uVar8 == 0) {
      uVar22 = *(ulong *)(uVar25 + 0x88);
      *(ulong *)(uVar22 + 0x80) = uVar25;
      uVar25 = uVar22;
      uVar8 = *(ulong *)(uVar22 + 0x78);
    }
    *(ulong *)(uVar21 + 0x78) = uVar8;
    if ((uVar16 & 1) == 0) {
      uVar25 = uVar16;
      if (*(long *)(uVar8 + 0x80) != 0) {
        *(long *)(uVar21 + 0x78) = *(long *)(uVar8 + 0x80);
        uVar25 = *puVar13;
        *puVar13 = uVar25 & 0xfffffffffffffffd;
        LORelease();
LAB_108a2b2e4:
        _pthread_mutex_lock(uVar25,uVar8);
        *(undefined1 *)(uVar8 + 0x70) = 0;
        _pthread_cond_signal(uVar8 + 0x40);
        goto code_r0x000108aaa13c;
      }
      do {
        uVar16 = *puVar13;
        if (uVar16 == uVar25) {
          *puVar13 = uVar25 & 1;
          goto LAB_108a2b2e4;
        }
        uVar25 = uVar16;
      } while (uVar16 < 4);
    }
    else {
      uVar25 = uVar16 & 0xfffffffffffffffd;
      bVar7 = *puVar13 == uVar16;
      uVar16 = *puVar13;
      if (bVar7) {
        *puVar13 = uVar25;
        return puVar13;
      }
    }
    DataMemoryBarrier(2,1);
  } while( true );
LAB_108a2a4f0:
  pcVar23[0] = '\0';
  pcVar23[1] = '\0';
  pcVar23[2] = '\0';
  pcVar23[3] = '\0';
  uVar25 = *puVar13;
  *puVar13 = uVar25 - 1;
  LORelease();
  if (uVar25 < 4 || (uVar25 & 2) != 0) {
    return puVar9;
  }
  goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
code_r0x000108a2a704:
  bVar2 = *pbVar10;
  if (bVar2 == (byte)uVar18) {
    *pbVar10 = (byte)uVar18 | 2;
  }
  if ((uint)bVar2 != (uVar18 & 0xff)) goto joined_r0x000108a2a6f4;
LAB_108a2a718:
  uStack_200 = 0;
  puVar12 = puStack_208;
  if (((*(char *)(puStack_208 + 0x14) != '\x01') &&
      (puVar12 = (undefined8 *)FUN_108a2ac08(puStack_208), puVar12 == (undefined8 *)0x0)) &&
     (puVar12 = puStack_210, (uStack_200 & 1) == 0)) {
    __ZN16parking_lot_core11parking_lot10ThreadData3new17hfa4775c6f0f885d9E(&uStack_158);
    uVar5 = uStack_e0;
    uVar4 = uStack_e8;
    uVar17 = uStack_f8;
    uStack_200 = 1;
    puStack_210[0xd] = uStack_f0;
    puStack_210[0xc] = uVar17;
    puStack_210[0xf] = uVar5;
    puStack_210[0xe] = uVar4;
    uVar5 = uStack_c0;
    uVar4 = uStack_c8;
    uVar17 = uStack_d8;
    puStack_210[0x11] = uStack_d0;
    puStack_210[0x10] = uVar17;
    puStack_210[0x13] = uVar5;
    puStack_210[0x12] = uVar4;
    uVar5 = uStack_120;
    uVar4 = uStack_128;
    uVar17 = uStack_138;
    puStack_210[5] = uStack_130;
    puStack_210[4] = uVar17;
    puStack_210[7] = uVar5;
    puStack_210[6] = uVar4;
    uVar5 = uStack_100;
    uVar4 = uStack_108;
    uVar17 = uStack_118;
    puStack_210[9] = uStack_110;
    puStack_210[8] = uVar17;
    puStack_210[0xb] = uVar5;
    puStack_210[10] = uVar4;
    uVar5 = uStack_140;
    uVar4 = uStack_148;
    uVar17 = uStack_158;
    puStack_210[1] = uStack_150;
    *puStack_210 = uVar17;
    puStack_210[3] = uVar5;
    puStack_210[2] = uVar4;
    puVar12 = puStack_210;
  }
  while( true ) {
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
      plVar11 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE();
      uVar8 = (ulong)((long)pbVar10 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar11[3] & 0x3f)
      ;
      uVar16 = plVar11[1];
      if (uVar16 <= uVar8) goto LAB_108a2abac;
    }
    else {
      uVar8 = (ulong)((long)pbVar10 * -0x61c8864680b583eb) >>
              ((ulong)(uint)-(int)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E
                                  [3] & 0x3f);
      uVar16 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E[1];
      plVar11 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
      if (uVar16 <= uVar8) goto LAB_108a2abac;
    }
    puVar13 = (ulong *)(*plVar11 + uVar8 * 0x40);
    if (*puVar13 == 0) {
      *puVar13 = 1;
    }
    else {
      __ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE(puVar13);
    }
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar11) break;
    uVar8 = *puVar13;
    *puVar13 = uVar8 - 1;
    LORelease();
    if (3 < uVar8 && (uVar8 & 2) == 0) {
      unaff_x30 = 0x108a2a78c;
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
  }
  if (*pbVar10 != 3) {
    uVar8 = *puVar13;
    *puVar13 = uVar8 - 1;
    LORelease();
    if (uVar8 < 4 || (uVar8 & 2) != 0) {
      lVar24 = 1;
    }
    else {
      func_0x000108a2b220(puVar13);
      lVar24 = 1;
    }
    goto LAB_108a2aa28;
  }
  *(char *)(puVar12 + 0x13) = (char)uStack_218;
  puVar12[0x10] = 0;
  puVar12[0xf] = pbVar10;
  puVar12[0x12] = 0;
  *(undefined1 *)(puVar12 + 0xe) = 1;
  if ((*(byte *)((long)puVar12 + 0x71) & 1) == 0) {
    *(undefined1 *)((long)puVar12 + 0x71) = 1;
  }
  if (puVar13[1] == 0) {
    puVar13[1] = (ulong)puVar12;
    puVar13[2] = (ulong)puVar12;
    uVar25 = *puVar13;
    *puVar13 = uVar25 - 1;
    LORelease();
    if (3 < uVar25 && (uVar25 & 2) == 0) goto LAB_108a2a8cc;
  }
  else {
    *(undefined8 **)(puVar13[2] + 0x80) = puVar12;
    puVar13[2] = (ulong)puVar12;
    uVar25 = *puVar13;
    *puVar13 = uVar25 - 1;
    LORelease();
    if (3 < uVar25 && (uVar25 & 2) == 0) {
LAB_108a2a8cc:
      unaff_x30 = 0x108a2a8d4;
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
  }
  if (iStack_214 == 1000000000) {
    _pthread_mutex_lock(puVar12);
    if (*(char *)(puVar12 + 0xe) == '\x01') {
      do {
        _pthread_cond_wait(puVar12 + 8,puVar12);
      } while ((*(byte *)(puVar12 + 0xe) & 1) != 0);
    }
    _pthread_mutex_unlock(puVar12);
  }
  else {
    uVar25 = FUN_1059dd990(puVar12,uStack_220);
    if ((uVar25 & 1) == 0) {
      do {
        plVar11 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
        if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
          plVar11 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE
                                      ();
        }
        uVar25 = puVar12[0xf];
        uVar8 = uVar25 * -0x61c8864680b583eb >> ((ulong)(uint)-(int)plVar11[3] & 0x3f);
        uVar16 = plVar11[1];
        if (uVar16 <= uVar8) {
          puStack_228 = &UNK_10b3df588;
LAB_108a2abac:
          func_0x000108a07bdc(uVar8,uVar16,puStack_228);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x108a2abb8);
          (*pcVar6)();
        }
        puVar13 = (ulong *)(*plVar11 + uVar8 * 0x40);
        if (*puVar13 == 0) {
          *puVar13 = 1;
        }
        else {
          __ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE(puVar13);
        }
        if ((___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar11) &&
           (puVar12[0xf] == uVar25)) goto LAB_108a2a994;
        uVar25 = *puVar13;
        *puVar13 = uVar25 - 1;
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
  lVar24 = 0;
  uVar25 = (ulong)(puVar12[0x11] == 1);
LAB_108a2aa28:
  lVar3 = ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E;
  if (uStack_200 != 0) {
    ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E =
         ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E + -1;
    _pthread_mutex_destroy(lVar3,puStack_210);
    _pthread_cond_destroy(auStack_1b8);
  }
  if (lVar24 == 0) {
    if ((uVar25 & 1) != 0) {
      return (ulong *)0x1;
    }
    uVar8 = 0;
    bVar2 = *pbVar10;
    uVar25 = uVar8;
  }
  else {
    if (lVar24 != 1) {
      return (ulong *)0x0;
    }
    uVar8 = 0;
LAB_108a2aa60:
    bVar2 = *pbVar10;
    uVar25 = uVar8;
  }
  goto joined_r0x000108a2a6f4;
LAB_108a2a994:
  _pthread_mutex_lock(puVar12);
  bVar2 = *(byte *)(puVar12 + 0xe);
  _pthread_mutex_unlock(puVar12);
  if ((bVar2 & 1) != 0) {
    puVar19 = (undefined8 *)puVar13[1];
    if (puVar19 != (undefined8 *)0x0) {
      if (puVar19 == puVar12) {
        uVar8 = puVar19[0x10];
        puVar13[1] = uVar8;
        if ((undefined8 *)puVar13[2] != puVar12) {
          bVar7 = true;
          goto joined_r0x000108a2aaa0;
        }
        puVar13[2] = 0;
LAB_108a2aac4:
        *pbVar10 = *pbVar10 & 0xfd;
      }
      else {
        bVar7 = true;
        do {
          puVar20 = puVar19;
          puVar19 = (undefined8 *)puVar20[0x10];
          if (puVar19 == (undefined8 *)0x0) goto LAB_108a2aacc;
          bVar7 = (bool)(puVar20[0xf] != uVar25 & bVar7);
        } while (puVar19 != puVar12);
        uVar8 = puVar19[0x10];
        puVar20[0x10] = uVar8;
        if ((undefined8 *)puVar13[2] == puVar12) {
          puVar13[2] = (ulong)puVar20;
          if (bVar7) goto LAB_108a2aac4;
        }
        else {
joined_r0x000108a2aaa0:
          for (; uVar8 != 0; uVar8 = *(ulong *)(uVar8 + 0x80)) {
            if (*(ulong *)(uVar8 + 0x78) == uVar25) goto LAB_108a2aacc;
          }
          if (bVar7) goto LAB_108a2aac4;
        }
      }
    }
LAB_108a2aacc:
    uVar8 = *puVar13;
    *puVar13 = uVar8 - 1;
    LORelease();
    if (3 < uVar8 && (uVar8 & 2) == 0) {
      unaff_x30 = 0x108a2ab6c;
      register0x00000008 = (BADSPACEBASE *)auStack_230;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
    lVar24 = 2;
    goto LAB_108a2aa28;
  }
  uVar25 = *puVar13;
  *puVar13 = uVar25 - 1;
  LORelease();
  if (3 < uVar25 && (uVar25 & 2) == 0) {
    func_0x000108a2b220(puVar13);
  }
  goto LAB_108a2aa18;
}

