
undefined1  [16] FUN_10057742c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined1 uVar17;
  undefined8 extraout_x9;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long extraout_x15;
  long *unaff_x21;
  long *unaff_x22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lStack_2df0;
  undefined8 uStack_2de8;
  undefined8 uStack_2de0;
  undefined8 uStack_2dd8;
  undefined8 uStack_2dd0;
  undefined8 uStack_2dc8;
  undefined1 auStack_2dc0 [24];
  undefined8 uStack_2da8;
  undefined8 uStack_2da0;
  long *plStack_2d98;
  long *plStack_2d90;
  long lStack_2d88;
  long *plStack_2d80;
  long lStack_2d78;
  long *plStack_2d70;
  long lStack_2d68;
  long *plStack_2d60;
  long lStack_2d58;
  long *plStack_2d50;
  long lStack_2d48;
  long *plStack_2d40;
  long lStack_2d38;
  long *plStack_2d30;
  long lStack_2d28;
  long *plStack_2d20;
  long lStack_2d18;
  long *plStack_2d10;
  long lStack_2d08;
  long *plStack_2d00;
  undefined8 uStack_2cf0;
  undefined8 uStack_2ce8;
  undefined8 uStack_2ce0;
  undefined8 uStack_2cd8;
  long *plStack_2cc8;
  long lStack_2cc0;
  long *plStack_2cb8;
  long *plStack_2ae0;
  long lStack_2ad8;
  long *plStack_2ad0;
  long lStack_2ac8;
  long *plStack_2ac0;
  long lStack_2ab8;
  long *plStack_2ab0;
  long lStack_2aa8;
  long *plStack_2aa0;
  long lStack_2a98;
  long *plStack_2a90;
  long lStack_2a88;
  long *plStack_2a80;
  long lStack_2a78;
  long *plStack_2a70;
  long lStack_2a68;
  long *plStack_2a60;
  long lStack_2a58;
  long *plStack_2a50;
  long lStack_2a48;
  long *plStack_2a40;
  undefined8 uStack_2200;
  undefined8 uStack_1200;
  long alStack_598 [63];
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long lStack_340;
  undefined1 uStack_338;
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_240;
  long *plStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  undefined1 *puStack_158;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  
  bVar4 = *(byte *)(param_1 + 0xa8);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0xa0) = 0;
LAB_100577470:
      auVar28 = FUN_100fd3e50(param_1 + 0x30);
      uVar10 = auVar28._8_8_;
      pcVar15 = auVar28._0_8_;
      if (pcVar15 == (char *)0x0) {
        *(undefined1 *)(param_1 + 0xa8) = 3;
        uVar10 = 1;
        goto LAB_10057753c;
      }
      if (((*(char *)(param_1 + 0xa0) == '\x03') && (*(char *)(param_1 + 0x98) == '\x03')) &&
         (*(char *)(param_1 + 0x50) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x58);
        uVar10 = extraout_x1;
        if (*(long *)(param_1 + 0x60) != 0) {
          (**(code **)(*(long *)(param_1 + 0x60) + 0x18))(*(undefined8 *)(param_1 + 0x68));
          uVar10 = extraout_x1_00;
        }
      }
      if (*(long *)(pcVar15 + 0x28) == -0x8000000000000000) {
LAB_1005774f8:
        unaff_x21 = (long *)0x0;
      }
      else {
        auVar28 = FUN_101498120(pcVar15 + 0x28,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x28));
        uVar10 = auVar28._8_8_;
        if (auVar28._0_8_ != 1) goto LAB_1005774f8;
        unaff_x21 = *(long **)(pcVar15 + 0x70);
        lVar7 = *unaff_x21;
        *unaff_x21 = lVar7 + 1;
        if (lVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005774f8);
          (*pcVar5)();
        }
      }
      if (*pcVar15 == '\0') {
        *pcVar15 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar15,uVar10,1000000000);
      }
      FUN_1060fa678(pcVar15,1,pcVar15);
      uVar10 = 0;
      *(undefined1 *)(param_1 + 0xa8) = 1;
LAB_10057753c:
      auVar28._8_8_ = unaff_x21;
      auVar28._0_8_ = uVar10;
      return auVar28;
    }
    FUN_107c05cc0(&UNK_10b2179d0);
  }
  else if (bVar4 == 3) goto LAB_100577470;
  FUN_107c05cc4(&UNK_10b2179d0);
  *(undefined1 *)(param_1 + 0xa8) = 2;
  uVar10 = __Unwind_Resume();
  FUN_100ca4214(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0xa8) = 2;
  __Unwind_Resume(uVar10);
  plVar11 = (long *)FUN_107c05ccc();
  bVar4 = *(byte *)(plVar11 + 0x10);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      plVar11[1] = *plVar11 + 8;
      *(undefined1 *)(plVar11 + 0xf) = 0;
LAB_100577620:
      auVar28 = FUN_100fd3e50(plVar11 + 1);
      uVar10 = auVar28._8_8_;
      pcVar15 = auVar28._0_8_;
      if (pcVar15 == (char *)0x0) {
        uVar12 = 2;
        uVar17 = 3;
      }
      else {
        if ((((char)plVar11[0xf] == '\x03') && ((char)plVar11[0xe] == '\x03')) &&
           ((char)plVar11[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar11 + 6);
          uVar10 = extraout_x1_01;
          if (plVar11[7] != 0) {
            (**(code **)(plVar11[7] + 0x18))(plVar11[8]);
            uVar10 = extraout_x1_02;
          }
        }
        lVar7 = *(long *)(pcVar15 + 0x40);
        if (*pcVar15 == '\0') {
          *pcVar15 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar15,uVar10,1000000000);
        }
        FUN_1060fa678(pcVar15,1,pcVar15);
        uVar12 = (ulong)(lVar7 != 0);
        uVar17 = 1;
        uVar10 = extraout_x1_03;
      }
      *(undefined1 *)(plVar11 + 0x10) = uVar17;
      auVar29._8_8_ = uVar10;
      auVar29._0_8_ = uVar12;
      return auVar29;
    }
    FUN_107c05cc0(&UNK_10b217a00);
  }
  else if (bVar4 == 3) goto LAB_100577620;
  FUN_107c05cc4(&UNK_10b217a00);
  *(undefined1 *)(plVar11 + 0x10) = 2;
  uVar10 = __Unwind_Resume();
  if (plVar11[7] != 0) {
    (**(code **)(plVar11[7] + 0x18))(plVar11[8]);
  }
  *(undefined1 *)(plVar11 + 0x10) = 2;
  __Unwind_Resume(uVar10);
  puVar13 = (undefined8 *)FUN_107c05ccc();
  bVar4 = *(byte *)(puVar13 + 0x17);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      *(undefined1 *)((long)puVar13 + 0xb9) = 1;
      puVar13[6] = puVar13[1];
      puVar13[5] = *puVar13;
      puVar13[7] = puVar13[2];
      puVar13[8] = puVar13[4];
      *(undefined1 *)(puVar13 + 0x16) = 0;
LAB_1005777a4:
      auVar28 = FUN_100fd3e50(puVar13 + 8);
      uVar10 = auVar28._8_8_;
      pcVar15 = auVar28._0_8_;
      if (pcVar15 == (char *)0x0) {
        uVar17 = 3;
      }
      else {
        if (((*(char *)(puVar13 + 0x16) == '\x03') && (*(char *)(puVar13 + 0x15) == '\x03')) &&
           (*(char *)(puVar13 + 0xc) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar13 + 0xd);
          if (puVar13[0xe] != 0) {
            (**(code **)(puVar13[0xe] + 0x18))(puVar13[0xf]);
          }
        }
        *(undefined1 *)((long)puVar13 + 0xb9) = 0;
        lVar7 = puVar13[5];
        lVar16 = puVar13[6];
        uVar12 = puVar13[7];
        lStack_b8 = lVar16 + uVar12 * 200;
        lVar25 = *(long *)(pcVar15 + 0x38);
        lStack_d0 = lVar16;
        lStack_c8 = lVar16;
        lStack_c0 = lVar7;
        if ((ulong)(*(long *)(pcVar15 + 0x28) - lVar25) < uVar12) {
          thunk_FUN_108855060(pcVar15 + 0x28,lVar25,uVar12,8,200);
          lVar25 = *(long *)(pcVar15 + 0x38);
        }
        _memcpy(*(long *)(pcVar15 + 0x30) + lVar25 * 200,lVar16,uVar12 * 200);
        *(ulong *)(pcVar15 + 0x38) = lVar25 + uVar12;
        uVar10 = extraout_x1_04;
        if (lVar7 != 0) {
          _free(lVar16);
          uVar10 = extraout_x1_05;
        }
        if (*pcVar15 == '\0') {
          *pcVar15 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar15,uVar10,1000000000);
        }
        FUN_1060fa678(pcVar15,1,pcVar15);
        *(undefined1 *)((long)puVar13 + 0xb9) = 0;
        uVar17 = 1;
        uVar10 = extraout_x1_06;
      }
      auVar30._1_7_ = 0;
      auVar30[0] = pcVar15 == (char *)0x0;
      *(undefined1 *)(puVar13 + 0x17) = uVar17;
      auVar30._8_8_ = uVar10;
      return auVar30;
    }
    FUN_107c05cc0(&UNK_10b217a90);
  }
  else if (bVar4 == 3) goto LAB_1005777a4;
  uVar14 = FUN_107c05cc4(&UNK_10b217a90);
  FUN_100ca4c80(&lStack_d0);
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(uVar10,1);
  if ((*(byte *)((long)puVar13 + 0xb9) & 1) != 0) {
    FUN_100e5bd48(puVar13 + 5);
  }
  *(undefined2 *)(puVar13 + 0x17) = 2;
  __Unwind_Resume(uVar14);
  auVar28 = FUN_107c05ccc();
  plVar11 = auVar28._8_8_;
  puVar13 = auVar28._0_8_;
  bVar4 = *(byte *)(plVar11 + 0x10);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      plVar11[1] = *plVar11 + 0x50;
      *(undefined1 *)(plVar11 + 0xf) = 0;
LAB_1005779c4:
      auVar28 = FUN_100fd3e50(plVar11 + 1,param_3);
      uVar12 = auVar28._8_8_;
      pcVar15 = auVar28._0_8_;
      if (pcVar15 == (char *)0x0) {
        *puVar13 = 0x8000000000000000;
        uVar17 = 3;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar12;
        auVar31 = auVar31 << 0x40;
      }
      else {
        if ((((char)plVar11[0xf] == '\x03') && ((char)plVar11[0xe] == '\x03')) &&
           ((char)plVar11[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar11 + 6);
          uVar12 = extraout_x1_07;
          if (plVar11[7] != 0) {
            (**(code **)(plVar11[7] + 0x18))(plVar11[8]);
            uVar12 = extraout_x1_08;
          }
        }
        uVar24 = *(undefined8 *)(pcVar15 + 0x30);
        uVar14 = *(undefined8 *)(pcVar15 + 0x28);
        uVar10 = *(undefined8 *)(pcVar15 + 0x38);
        pcVar15[0x28] = '\0';
        pcVar15[0x29] = '\0';
        pcVar15[0x2a] = '\0';
        pcVar15[0x2b] = '\0';
        pcVar15[0x2c] = '\0';
        pcVar15[0x2d] = '\0';
        pcVar15[0x2e] = '\0';
        pcVar15[0x2f] = '\0';
        pcVar15[0x30] = '\b';
        pcVar15[0x31] = '\0';
        pcVar15[0x32] = '\0';
        pcVar15[0x33] = '\0';
        pcVar15[0x34] = '\0';
        pcVar15[0x35] = '\0';
        pcVar15[0x36] = '\0';
        pcVar15[0x37] = '\0';
        pcVar15[0x38] = '\0';
        pcVar15[0x39] = '\0';
        pcVar15[0x3a] = '\0';
        pcVar15[0x3b] = '\0';
        pcVar15[0x3c] = '\0';
        pcVar15[0x3d] = '\0';
        pcVar15[0x3e] = '\0';
        pcVar15[0x3f] = '\0';
        if (*pcVar15 == '\0') {
          *pcVar15 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar15,uVar12,1000000000);
        }
        auVar31 = FUN_1060fa678(pcVar15,1,pcVar15);
        puVar13[1] = uVar24;
        *puVar13 = uVar14;
        puVar13[2] = uVar10;
        uVar17 = 1;
      }
      *(undefined1 *)(plVar11 + 0x10) = uVar17;
      return auVar31;
    }
    FUN_107c05cc0(&UNK_10b217af0);
  }
  else if (bVar4 == 3) goto LAB_1005779c4;
  FUN_107c05cc4(&UNK_10b217af0);
  *(undefined1 *)(plVar11 + 0x10) = 2;
  uVar10 = __Unwind_Resume();
  if (plVar11[7] != 0) {
    (**(code **)(plVar11[7] + 0x18))(plVar11[8]);
  }
  *(undefined1 *)(plVar11 + 0x10) = 2;
  __Unwind_Resume(uVar10);
  auVar28 = FUN_107c05ccc();
  plVar11 = auVar28._0_8_;
  bVar4 = *(byte *)(plVar11 + 0xae9);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      lVar7 = *plVar11;
      plVar1 = (long *)(lVar7 + 0x1328);
      LOAcquire();
      lStack_168 = *plVar1;
      *plVar1 = lStack_168 + 1;
      LORelease();
      plStack_160 = &lStack_168;
      puStack_158 = &
                    __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_180,s_auto_compact__108af5d75,&plStack_160);
      plVar11[2] = lStack_178;
      plVar11[1] = lStack_180;
      plVar11[3] = lStack_170;
      plVar11[4] = lVar7;
      *(undefined1 *)(plVar11 + 0xa2) = 0;
LAB_100577bb0:
      auVar28 = FUN_100579200(plVar11 + 1,auVar28._8_8_);
      uVar10 = auVar28._8_8_;
      auVar32._0_8_ = auVar28._0_8_;
      if (auVar32._0_8_ == 0) {
        uVar17 = 3;
      }
      else {
        FUN_100d75da0(plVar11 + 1);
        uVar17 = 1;
        uVar10 = extraout_x1_09;
      }
      *(undefined1 *)(plVar11 + 0xae9) = uVar17;
      auVar32._8_8_ = uVar10;
      return auVar32;
    }
    FUN_107c05cc0(&UNK_10b217b38);
  }
  else if (bVar4 == 3) goto LAB_100577bb0;
  FUN_107c05cc4(&UNK_10b217b38);
  *(undefined1 *)(plVar11 + 0xae9) = 2;
  uVar10 = __Unwind_Resume();
  FUN_100d75da0(plVar11 + 1);
  *(undefined1 *)(plVar11 + 0xae9) = 2;
  __Unwind_Resume(uVar10);
  auVar28 = FUN_107c05ccc();
  uVar10 = auVar28._8_8_;
  lVar7 = auVar28._0_8_;
  uStack_1200 = 0;
  uStack_2200 = 0;
  bVar4 = *(byte *)(lVar7 + 0x3bb8);
  if (bVar4 < 5) {
    if (bVar4 < 3) {
      if (bVar4 == 0) {
        *(undefined1 *)(lVar7 + 0x3bc1) = 0;
        *(undefined8 *)(lVar7 + 0x3bb9) = 0;
        *(undefined8 *)(lVar7 + 0x548) = *(undefined8 *)(lVar7 + 0x540);
        *(undefined1 *)(lVar7 + 0x3bbd) = 1;
        *(undefined8 *)(lVar7 + 0x560) = *(undefined8 *)(lVar7 + 0x4d8);
        *(undefined8 *)(lVar7 + 0x558) = *(undefined8 *)(lVar7 + 0x4d0);
        *(undefined8 *)(lVar7 + 0x550) = *(undefined8 *)(lVar7 + 0x4c8);
        _memcpy(lVar7 + 0x568,lVar7,0x4c8);
        *(undefined8 *)(lVar7 + 0xa48) = *(undefined8 *)(lVar7 + 0x510);
        *(undefined8 *)(lVar7 + 0xa40) = *(undefined8 *)(lVar7 + 0x508);
        *(undefined8 *)(lVar7 + 0xa58) = *(undefined8 *)(lVar7 + 0x520);
        *(undefined8 *)(lVar7 + 0xa50) = *(undefined8 *)(lVar7 + 0x518);
        *(undefined8 *)(lVar7 + 0xa68) = *(undefined8 *)(lVar7 + 0x530);
        *(undefined8 *)(lVar7 + 0xa60) = *(undefined8 *)(lVar7 + 0x528);
        *(undefined1 *)(lVar7 + 0x3bc2) = 1;
        *(undefined8 *)(lVar7 + 0xa70) = *(undefined8 *)(lVar7 + 0x538);
        *(undefined8 *)(lVar7 + 0xa38) = *(undefined8 *)(lVar7 + 0x500);
        *(undefined8 *)(lVar7 + 0xa30) = *(undefined8 *)(lVar7 + 0x4f8);
        *(undefined1 *)(lVar7 + 0x3bbc) = 1;
        *(undefined8 *)(lVar7 + 0xa80) = *(undefined8 *)(lVar7 + 0x4e8);
        *(undefined8 *)(lVar7 + 0xa78) = *(undefined8 *)(lVar7 + 0x4e0);
        *(undefined8 *)(lVar7 + 0xa88) = *(undefined8 *)(lVar7 + 0x4f0);
        lVar25 = *(long *)(lVar7 + 0xa80);
        lVar16 = 0;
        if (*(long *)(lVar7 + 0xa88) != 0) {
          lVar16 = lVar25;
        }
        *(long *)(lVar7 + 0xa90) = lVar16;
        if (lVar16 == 0) {
          uVar14 = *(undefined8 *)(lVar7 + 0x7a0);
          lVar16 = *(long *)(lVar7 + 0x7a8);
          if (lVar16 == 0) {
LAB_100577dd4:
            lVar25 = 1;
          }
          else {
LAB_100577da4:
            lVar25 = _malloc(lVar16);
            if (lVar25 == 0) {
              FUN_107c03c64(1,lVar16);
              goto LAB_1005789ac;
            }
          }
          _memcpy(lVar25,uVar14,lVar16);
        }
        else {
          lVar16 = *(long *)(lVar25 + 0x28);
          if (lVar16 == 0) {
            lVar25 = 1;
          }
          else {
            uVar14 = *(undefined8 *)(lVar25 + 0x20);
            lVar25 = _malloc(lVar16);
            if (lVar25 == 0) {
              FUN_107c03c64(1,lVar16);
              goto LAB_1005789ac;
            }
            _memcpy(lVar25,uVar14,lVar16);
            if (lVar16 == -0x8000000000000000) {
              uVar14 = *(undefined8 *)(lVar7 + 0x7a0);
              lVar16 = *(long *)(lVar7 + 0x7a8);
              if (lVar16 == 0) goto LAB_100577dd4;
              goto LAB_100577da4;
            }
          }
        }
        *(long *)(lVar7 + 0xa98) = lVar16;
        *(long *)(lVar7 + 0xaa0) = lVar25;
        *(long *)(lVar7 + 0xaa8) = lVar16;
        lVar16 = 1;
        *(undefined1 *)(lVar7 + 0x3bbb) = 1;
        uVar14 = *(undefined8 *)(lVar7 + 0xaa0);
        unaff_x22 = *(long **)(lVar7 + 0xaa8);
        if ((unaff_x22 == (long *)0x0) || (lVar16 = _malloc(unaff_x22), lVar16 != 0)) {
          _memcpy(lVar16,uVar14,unaff_x22);
          plStack_2ae0 = unaff_x22;
          lStack_2ad8 = lVar16;
          plStack_2ad0 = unaff_x22;
          __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_21build_per_turn_config17h3126574fa0fee5fbE
                    (lVar7 + 0xab0,lVar7 + 0x568,&plStack_2ae0);
          *(undefined1 *)(lVar7 + 0x3bba) = 1;
          *(long *)(lVar7 + 0x3bc8) = *(long *)(*(long *)(lVar7 + 0x548) + 0x360) + 0x10;
          *(undefined1 *)(lVar7 + 0x3c20) = 0;
          goto LAB_100577e68;
        }
      }
      else {
        if (bVar4 == 1) {
          FUN_107c05cc0(&UNK_10b217b68);
        }
        FUN_107c05cc4();
      }
      FUN_107c03c64(1,unaff_x22);
      goto LAB_1005789ac;
    }
    if (bVar4 == 3) {
LAB_100577e68:
      auVar28 = FUN_100fd4eb8(lVar7 + 0x3bc8,uVar10);
      uVar14 = auVar28._8_8_;
      pcVar15 = auVar28._0_8_;
      if (pcVar15 == (char *)0x0) {
        lVar16 = 0;
        uVar17 = 3;
        goto LAB_100578918;
      }
      if ((*(char *)(lVar7 + 0x3c20) == '\x03') && (*(char *)(lVar7 + 0x3c18) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (lVar7 + 0x3bd8);
        if (*(long *)(lVar7 + 0x3be0) != 0) {
          (**(code **)(*(long *)(lVar7 + 0x3be0) + 0x18))(*(undefined8 *)(lVar7 + 0x3be8));
        }
      }
      __ZN9codex_mcp18connection_manager20McpConnectionManager19set_approval_policy17h2253cb9192e2fd72E
                (uVar14,lVar7 + 0x9f0);
      lVar16 = *(long *)(lVar7 + 0x900);
      if (-1 < lVar16) {
        lVar16 = 2;
      }
      lVar16 = lVar7 + *(long *)(&UNK_108cd9a90 + lVar16 * 8);
      uVar18 = *(ulong *)(lVar16 + 0x568);
      uVar12 = uVar18;
      if (uVar18 < 0x8000000000000001) {
        uVar12 = 0;
      }
      if ((uVar12 & 0x7fffffffffffffff) == 0) {
        if (uVar18 == 0x8000000000000000) {
          lStack_2ac8 = -0x8000000000000000;
          plStack_2ae0 = (long *)0x8000000000000000;
        }
        else {
          FUN_1035ab934(&plStack_2ae0,*(undefined8 *)(lVar16 + 0x570),
                        *(undefined8 *)(lVar16 + 0x578));
          lStack_2ac8 = *(long *)(lVar16 + 0x580);
          plStack_2cb8 = plStack_2ad0;
          lStack_2cc0 = lStack_2ad8;
        }
        plStack_2ad0 = plStack_2cb8;
        lStack_2ad8 = lStack_2cc0;
        plStack_2ac0 = (long *)CONCAT71(plStack_2ac0._1_7_,*(undefined1 *)(lVar16 + 0x588));
      }
      else if ((uVar12 & 0x7fffffffffffffff) == 1) {
        plStack_2ae0 = (long *)0x8000000000000001;
      }
      else {
        lStack_2ad8 = *(long *)(lVar16 + 0x570);
        plStack_2ae0 = *(long **)(lVar16 + 0x568);
        lStack_2ac8 = *(long *)(lVar16 + 0x580);
        plStack_2ad0 = *(long **)(lVar16 + 0x578);
        plStack_2ac0 = *(long **)(lVar16 + 0x588);
      }
      func_0x000104922e0c(alStack_598,&plStack_2ae0,*(undefined8 *)(lVar7 + 0x7b8),
                          *(undefined8 *)(lVar7 + 0x7c0));
      __ZN9codex_mcp18connection_manager20McpConnectionManager22set_permission_profile17h4601d5069dc32cdeE
                (uVar14,alStack_598);
      if (*pcVar15 == '\0') {
        *pcVar15 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar15,extraout_x1_10,1000000000);
      }
      FUN_1060fa678(pcVar15,1,pcVar15);
      lVar16 = *(long *)(*(long *)(lVar7 + 0x548) + 0x388);
      lVar25 = *(long *)(*(long *)(lVar7 + 0x548) + 0x390);
      uVar14 = *(undefined8 *)(lVar7 + 0x748);
      uVar24 = *(undefined8 *)(lVar7 + 0x750);
      __ZN10codex_core6config6Config24to_models_manager_config17hc032ee81d7650970E
                (lVar7 + 0x3bc8,lVar7 + 0xab0);
      auVar28 = (**(code **)(lVar25 + 0x68))
                          (lVar16 + (*(long *)(lVar25 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           uVar14,uVar24,lVar7 + 0x3bc8);
      *(undefined1 (*) [16])(lVar7 + 0x3c30) = auVar28;
    }
    else {
      auVar28 = *(undefined1 (*) [16])(lVar7 + 0x3c30);
    }
    (**(code **)(auVar28._8_8_ + 0x18))(&plStack_2ae0,auVar28._0_8_,uVar10);
    if (plStack_2ae0 == (long *)0x2) {
      lVar16 = 0;
      uVar17 = 4;
      uVar14 = extraout_x1_11;
      goto LAB_100578918;
    }
    *(undefined1 *)(lVar7 + 0x3bb9) = 1;
    _memcpy(lVar7 + 0x2ff8,&plStack_2ae0,0x1f8);
    uVar14 = *(undefined8 *)(lVar7 + 0x3c30);
    puVar13 = *(undefined8 **)(lVar7 + 0x3c38);
    pcVar5 = (code *)*puVar13;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar14);
    }
    if (puVar13[1] != 0) {
      _free(uVar14);
    }
    if ((*(long *)(lVar7 + 0x3bf8) != -0x8000000000000000) && (*(long *)(lVar7 + 0x3bf8) != 0)) {
      _free(*(undefined8 *)(lVar7 + 0x3c00));
    }
    lVar16 = *(long *)(lVar7 + 0x3c10);
    if (lVar16 != -0x8000000000000000) {
      lVar23 = *(long *)(lVar7 + 0x3c18);
      lVar25 = lVar23;
      for (lVar26 = *(long *)(lVar7 + 0x3c20); lVar26 != 0; lVar26 = lVar26 + -1) {
        FUN_100e0f5d0(lVar25);
        lVar25 = lVar25 + 0x1f8;
      }
      if (lVar16 != 0) {
        _free(lVar23);
      }
    }
    lVar16 = *(long *)(*(long *)(lVar7 + 0x548) + 0x3a0);
    __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
              (lVar7 + 0x48b0,lVar7 + 0xab0);
    *(long *)(lVar7 + 0x3bc8) = lVar16 + 0x10;
    *(long *)(lVar7 + 0x3bd0) = lVar7 + 0x48b0;
    *(undefined1 *)(lVar7 + 0x48a8) = 0;
LAB_100578108:
    FUN_100a7ebb0(&lStack_2df0,lVar7 + 0x3bc8,uVar10);
    if (lStack_2df0 == -0x8000000000000000) {
      lVar16 = 0;
      uVar17 = 5;
      uVar14 = extraout_x1_12;
      goto LAB_100578918;
    }
    *(undefined8 *)(lVar7 + 0x31f8) = uStack_2de8;
    *(long *)(lVar7 + 0x31f0) = lStack_2df0;
    *(undefined8 *)(lVar7 + 0x3208) = uStack_2dd8;
    *(undefined8 *)(lVar7 + 0x3200) = uStack_2de0;
    *(undefined8 *)(lVar7 + 0x3218) = uStack_2dc8;
    *(undefined8 *)(lVar7 + 0x3210) = uStack_2dd0;
    if ((*(char *)(lVar7 + 0x48a8) == '\x03') && (*(char *)(lVar7 + 0x48a2) == '\x03')) {
      FUN_100cb9114(lVar7 + 0x3bf8);
      if (*(long *)(lVar7 + 0x3be0) != 0) {
        _free(*(undefined8 *)(lVar7 + 0x3be8));
      }
      *(undefined1 *)(lVar7 + 0x48a1) = 0;
    }
    FUN_100e05b5c(lVar7 + 0x48b0);
    if (*(long *)(lVar7 + 0x5210) != 0) {
      _free(*(undefined8 *)(lVar7 + 0x5218));
    }
    FUN_10074cf40(auStack_2dc0,*(undefined8 *)(lVar7 + 0x31f8),*(undefined8 *)(lVar7 + 0x3200));
    __ZN10codex_core6skills29skills_load_input_from_config17h701c8c7c51865ebbE
              (lVar7 + 0x3220,lVar7 + 0xab0,auStack_2dc0);
    uVar14 = 0;
    uVar24 = extraout_x9;
    if (*(long *)(lVar7 + 0xa90) != 0) {
      lVar25 = *(long *)(*(long *)(lVar7 + 0xa90) + 0x48);
      lVar16 = **(long **)(lVar25 + 0xf0);
      **(long **)(lVar25 + 0xf0) = lVar16 + 1;
      if (lVar16 < 0) goto LAB_1005789ac;
      uVar14 = *(undefined8 *)(lVar25 + 0xf0);
      uVar24 = *(undefined8 *)(lVar25 + 0xf8);
    }
    *(undefined1 *)(lVar7 + 0x3bc1) = 1;
    lVar16 = *(long *)(*(long *)(lVar7 + 0x548) + 0x398);
    *(undefined1 *)(lVar7 + 0x3bc1) = 0;
    *(undefined8 *)(lVar7 + 0x3bc8) = uVar14;
    *(undefined8 *)(lVar7 + 0x3bd0) = uVar24;
    *(long *)(lVar7 + 0x3c00) = lVar16 + 0x10;
    *(long *)(lVar7 + 0x3c08) = lVar7 + 0x3220;
    *(undefined1 *)(lVar7 + 0x3c12) = 0;
    uStack_2da8 = uVar14;
    uStack_2da0 = uVar24;
LAB_10057821c:
    FUN_100a162f0(&plStack_2ae0,lVar7 + 0x3bc8,uVar10);
    if (plStack_2ae0 == (long *)0x8000000000000000) {
      lVar16 = 0;
      uVar17 = 6;
      uVar14 = extraout_x1_13;
      goto LAB_100578918;
    }
    lStack_2d28 = lStack_2a78;
    plStack_2d30 = plStack_2a80;
    lStack_2d18 = lStack_2a68;
    plStack_2d20 = plStack_2a70;
    lStack_2d08 = lStack_2a58;
    plStack_2d10 = plStack_2a60;
    plStack_2d00 = plStack_2a50;
    lStack_2d68 = lStack_2ab8;
    plStack_2d70 = plStack_2ac0;
    lStack_2d58 = lStack_2aa8;
    plStack_2d60 = plStack_2ab0;
    lStack_2d48 = lStack_2a98;
    plStack_2d50 = plStack_2aa0;
    lStack_2d38 = lStack_2a88;
    plStack_2d40 = plStack_2a90;
    lStack_2d88 = lStack_2ad8;
    plStack_2d90 = plStack_2ae0;
    lStack_2d78 = lStack_2ac8;
    plStack_2d80 = plStack_2ad0;
    FUN_100cc55bc(lVar7 + 0x3bc8);
    lStack_2a68 = lStack_2d28;
    plStack_2a70 = plStack_2d30;
    lStack_2a58 = lStack_2d18;
    plStack_2a60 = plStack_2d20;
    lStack_2a48 = lStack_2d08;
    plStack_2a50 = plStack_2d10;
    lStack_2a98 = lStack_2d58;
    plStack_2aa0 = plStack_2d60;
    lStack_2a88 = lStack_2d48;
    plStack_2a90 = plStack_2d50;
    lStack_2a78 = lStack_2d38;
    plStack_2a80 = plStack_2d40;
    lStack_2ad8 = 1;
    plStack_2ae0 = (long *)0x1;
    lStack_2ac8 = lStack_2d88;
    plStack_2ad0 = plStack_2d90;
    plStack_2a40 = plStack_2d00;
    lStack_2ab8 = lStack_2d78;
    plStack_2ac0 = plStack_2d80;
    lStack_2aa8 = lStack_2d68;
    plStack_2ab0 = plStack_2d70;
    plVar11 = (long *)_malloc(0xa8);
    if (plVar11 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa8);
      goto LAB_1005789ac;
    }
    plVar11[0x11] = lStack_2a58;
    plVar11[0x10] = (long)plStack_2a60;
    plVar11[0x13] = lStack_2a48;
    plVar11[0x12] = (long)plStack_2a50;
    plVar11[0x14] = (long)plStack_2a40;
    plVar11[9] = lStack_2a98;
    plVar11[8] = (long)plStack_2aa0;
    plVar11[0xb] = lStack_2a88;
    plVar11[10] = (long)plStack_2a90;
    plVar11[0xd] = lStack_2a78;
    plVar11[0xc] = (long)plStack_2a80;
    plVar11[0xf] = lStack_2a68;
    plVar11[0xe] = (long)plStack_2a70;
    plVar11[1] = lStack_2ad8;
    *plVar11 = (long)plStack_2ae0;
    plVar11[3] = lStack_2ac8;
    plVar11[2] = (long)plStack_2ad0;
    plVar11[5] = lStack_2ab8;
    plVar11[4] = (long)plStack_2ac0;
    plVar11[7] = lStack_2aa8;
    plVar11[6] = (long)plStack_2ab0;
    *(undefined1 *)(lVar7 + 0x3bc0) = 1;
    plStack_2d98 = plVar11;
    if ((*(byte *)(lVar7 + 0x2fe1) & 1) == 0) {
      lVar16 = *(long *)(lVar7 + 0x548);
      plVar11 = *(long **)(lVar16 + 0x5f8);
      bVar6 = plVar11 != (long *)0x0;
      if (plVar11 != (long *)0x0) {
        lVar25 = *plVar11;
        *plVar11 = lVar25 + 1;
        if (lVar25 < 0) goto LAB_1005789ac;
        plStack_2ae0 = *(long **)(lVar16 + 0x5f8);
        lVar16 = *plStack_2ae0;
        *plStack_2ae0 = lVar16 + -1;
        LORelease();
        if (lVar16 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(&plStack_2ae0);
        }
      }
    }
    else {
      bVar6 = false;
    }
    lVar16 = *(long *)(lVar7 + 0x548);
    uStack_2ce8 = *(undefined8 *)(lVar16 + 0x788);
    uStack_2cf0 = *(undefined8 *)(lVar16 + 0x780);
    uStack_2cd8 = *(undefined8 *)(lVar16 + 0x3d0);
    uStack_2ce0 = *(undefined8 *)(lVar16 + 0x3c8);
    plVar11 = *(long **)(lVar16 + 0x380);
    lVar16 = *plVar11;
    *plVar11 = lVar16 + 1;
    if (lVar16 < 0) goto LAB_1005789ac;
    lVar23 = *(long *)(lVar7 + 0x548);
    lVar16 = lVar7 + 0x568;
    plStack_2cc8 = plVar11;
    FUN_1011eae84(&lStack_2cc0,lVar16);
    lVar26 = *(long *)(lVar7 + 0x548);
    lVar27 = *(long *)(lVar26 + 0x368);
    lVar25 = 0;
    if (*(long *)(lVar26 + 0x1f0) != -0x8000000000000000) {
      lVar25 = lVar26 + 0x1f0;
    }
    lVar3 = 0;
    if (*(long *)(lVar26 + 0x208) != -0x8000000000000000) {
      lVar3 = lVar26 + 0x208;
    }
    *(undefined1 *)(lVar7 + 0x3bba) = 0;
    _memcpy(&plStack_2ae0,lVar7 + 0xab0,0x2548);
    *(undefined1 *)(lVar7 + 0x3bb9) = 0;
    _memcpy(alStack_598,lVar7 + 0x2ff8,0x1f8);
    uStack_240 = lVar26 + 0x5f0;
    auVar28 = FUN_101496fa8(&uStack_240);
    plStack_238 = auVar28._8_8_;
    plVar11 = auVar28._0_8_;
    uStack_240 = 0;
    if (plVar11 != (long *)0x0) {
      if (plStack_238 == (long *)0x0) {
        if (*plVar11 == 0) {
          *plVar11 = 3;
        }
      }
      else {
        lVar8 = *plStack_238;
        *plStack_238 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_1005789ac;
        if ((long *)*plVar11 == plStack_238 + 2) {
          *plVar11 = 3;
        }
        else {
          lVar8 = *plStack_238;
          *plStack_238 = lVar8 + -1;
          LORelease();
          plStack_2b0 = plStack_238;
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_2b0);
          }
        }
      }
    }
    plVar11 = plStack_238;
    plStack_328 = plStack_238;
    if (plStack_238 == (long *)0x0) {
      lStack_3a0 = CONCAT62(lStack_3a0._2_6_,2);
    }
    else {
      lVar8 = *(long *)(lVar7 + 0x900);
      if (-1 < lVar8) {
        lVar8 = 2;
      }
      puVar2 = (ulong *)(lVar16 + *(long *)(&UNK_108cd9a90 + lVar8 * 8));
      uVar18 = *puVar2;
      uVar12 = uVar18;
      if (uVar18 < 0x8000000000000001) {
        uVar12 = 0;
      }
      if ((uVar12 & 0x7fffffffffffffff) == 0) {
        if (uVar18 == 0x8000000000000000) {
          uStack_228 = 0x8000000000000000;
          uStack_240 = 0x8000000000000000;
        }
        else {
          FUN_1035ab934(&uStack_240,puVar2[1],puVar2[2]);
          uStack_228 = puVar2[3];
          uStack_2a8 = uStack_230;
          plStack_2b0 = plStack_238;
        }
        uStack_230 = uStack_2a8;
        plStack_238 = plStack_2b0;
        uStack_220 = CONCAT71(uStack_220._1_7_,(char)puVar2[4]);
      }
      else if ((uVar12 & 0x7fffffffffffffff) == 1) {
        uStack_240 = 0x8000000000000001;
      }
      else {
        uStack_240 = *puVar2;
        uStack_228 = puVar2[3];
        uStack_230 = puVar2[2];
        uStack_220 = puVar2[4];
        plStack_238 = (long *)puVar2[1];
      }
      func_0x000104922e0c(&plStack_2b0,&uStack_240,*(undefined8 *)(lVar7 + 0x7b8),
                          *(undefined8 *)(lVar7 + 0x7c0));
      plVar1 = plStack_2b0;
      if (plStack_2b0 < (long *)0x8000000000000001) {
        plVar1 = (long *)0x0;
      }
      if (((ulong)plVar1 & 0x7fffffffffffffff) == 1) {
        lStack_3a0 = CONCAT62(lStack_3a0._2_6_,2);
      }
      else {
        plVar19 = (long *)plVar11[10];
        lVar8 = *plVar19;
        *plVar19 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_1005789ac;
        uVar17 = (undefined1)plVar11[0xf];
        plVar20 = (long *)plVar11[0xb];
        lVar8 = *plVar20;
        *plVar20 = lVar8 + 1;
        if ((lVar8 < 0) ||
           ((plVar21 = (long *)plVar11[0xc], plVar21 != (long *)0x0 &&
            (lVar8 = *plVar21, *plVar21 = lVar8 + 1, lVar8 < 0)))) goto LAB_1005789ac;
        plVar22 = (long *)plVar11[0xd];
        lVar8 = extraout_x15;
        if (plVar22 != (long *)0x0) {
          lVar8 = *plVar22;
          *plVar22 = lVar8 + 1;
          if (lVar8 < 0) goto LAB_1005789ac;
          lVar8 = plVar11[0xe];
        }
        lStack_398 = plVar11[3];
        lStack_3a0 = plVar11[2];
        lStack_388 = plVar11[5];
        lStack_390 = plVar11[4];
        lStack_378 = plVar11[7];
        lStack_380 = plVar11[6];
        lStack_368 = plVar11[9];
        lStack_370 = plVar11[8];
        plStack_360 = plVar19;
        plStack_358 = plVar20;
        plStack_350 = plVar21;
        plStack_348 = plVar22;
        lStack_340 = lVar8;
        uStack_338 = uVar17;
        if ((plStack_2b0 != (long *)0x8000000000000000) &&
           (((ulong)plVar1 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(&plStack_2b0);
        }
      }
    }
    *(undefined2 *)(lVar7 + 0x3bbb) = 0;
    uStack_310 = *(undefined8 *)(lVar7 + 0xa88);
    uStack_318 = *(undefined8 *)(lVar7 + 0xa80);
    uStack_320 = *(undefined8 *)(lVar7 + 0xa78);
    uStack_2a8 = *(ulong *)(lVar7 + 0xaa0);
    plStack_2b0 = *(long **)(lVar7 + 0xa98);
    uStack_2a0 = *(undefined8 *)(lVar7 + 0xaa8);
    *(undefined1 *)(lVar7 + 0x3bbd) = 0;
    plStack_238 = *(long **)(lVar7 + 0x558);
    uStack_240 = *(ulong *)(lVar7 + 0x550);
    uStack_230 = *(ulong *)(lVar7 + 0x560);
    *(undefined1 *)(lVar7 + 0x3bc0) = 0;
    __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_17make_turn_context17hb50f6d2f0a37f7ddE
              (lVar7 + 0x3c50,&uStack_2cf0,&uStack_2ce0,plStack_2cc8,lVar23 + 0x10,&lStack_2cc0,
               lVar16,lVar27 + 0x10,lVar25,lVar3,&plStack_2ae0,alStack_598,lVar26 + 0x388,
               &lStack_3a0,&uStack_320,&plStack_2b0,&uStack_240,plStack_2d98,bVar6);
    *(undefined2 *)(lVar7 + 0x3bbe) = 0x101;
    if (plStack_328 != (long *)0x0) {
      lVar16 = *plStack_328;
      *plStack_328 = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_328);
      }
    }
    *(long *)(lVar7 + 0x3bc8) = *(long *)(*(long *)(lVar7 + 0x548) + 0x6e0) + 0x10;
    *(undefined1 *)(lVar7 + 0x3c48) = 0;
  }
  else {
    if (bVar4 == 5) goto LAB_100578108;
    if (bVar4 == 6) goto LAB_10057821c;
  }
  cVar9 = FUN_10052acf0(lVar7 + 0x3bc8,uVar10);
  if (cVar9 == '\x02') {
    lVar16 = 0;
    uVar17 = 7;
    uVar14 = extraout_x1_14;
  }
  else {
    if ((((*(char *)(lVar7 + 0x3c48) == '\x03') && (*(char *)(lVar7 + 0x3c40) == '\x03')) &&
        (*(char *)(lVar7 + 0x3c38) == '\x03')) && (*(char *)(lVar7 + 0x3bf0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (lVar7 + 0x3bf8);
      if (*(long *)(lVar7 + 0x3c00) != 0) {
        (**(code **)(*(long *)(lVar7 + 0x3c00) + 0x18))(*(undefined8 *)(lVar7 + 0x3c08));
      }
    }
    *(char *)(lVar7 + 0x4420) = cVar9;
    if (*(long *)(lVar7 + 0xa30) != -0x7ffffffffffffffa) {
      *(undefined1 *)(lVar7 + 0x3bc2) = 0;
      uStack_2d8 = *(undefined8 *)(lVar7 + 0xa58);
      uStack_2e0 = *(undefined8 *)(lVar7 + 0xa50);
      uStack_2c8 = *(undefined8 *)(lVar7 + 0xa68);
      uStack_2d0 = *(undefined8 *)(lVar7 + 0xa60);
      uStack_2c0 = *(undefined8 *)(lVar7 + 0xa70);
      uStack_2f8 = *(undefined8 *)(lVar7 + 0xa38);
      uStack_300 = *(undefined8 *)(lVar7 + 0xa30);
      uStack_2e8 = *(undefined8 *)(lVar7 + 0xa48);
      uStack_2f0 = *(undefined8 *)(lVar7 + 0xa40);
      if (*(long *)(lVar7 + 0x4200) != -0x7ffffffffffffffb) {
        FUN_100de6690((undefined8 *)(lVar7 + 0x4200));
      }
      *(undefined1 *)(lVar7 + 0x3bbf) = 1;
      *(undefined8 *)(lVar7 + 0x4228) = uStack_2d8;
      *(undefined8 *)(lVar7 + 0x4220) = uStack_2e0;
      *(undefined8 *)(lVar7 + 0x4238) = uStack_2c8;
      *(undefined8 *)(lVar7 + 0x4230) = uStack_2d0;
      *(undefined8 *)(lVar7 + 0x4240) = uStack_2c0;
      *(undefined8 *)(lVar7 + 0x4208) = uStack_2f8;
      *(undefined8 *)(lVar7 + 0x4200) = uStack_300;
      *(undefined8 *)(lVar7 + 0x4218) = uStack_2e8;
      *(undefined8 *)(lVar7 + 0x4210) = uStack_2f0;
    }
    *(undefined2 *)(lVar7 + 0x3bbe) = 0;
    _memcpy(&plStack_2ad0,lVar7 + 0x3c50,0x7e0);
    lStack_2ad8 = 1;
    plStack_2ae0 = (long *)0x1;
    lVar16 = _malloc(0x7f0);
    if (lVar16 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x7f0);
LAB_1005789ac:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005789b0);
      (*pcVar5)();
    }
    _memcpy(lVar16,&plStack_2ae0,0x7f0);
    alStack_598[0] = lVar16;
    __ZN10codex_core13turn_metadata17TurnMetadataState25spawn_git_enrichment_task17hecdb7f9d327a1d29E
              (*(long *)(lVar16 + 0x7b0) + 0x10);
    lVar16 = alStack_598[0];
    *(undefined4 *)(lVar7 + 0x3bbe) = 0;
    FUN_100e19918(lVar7 + 0x3220);
    lVar23 = *(long *)(lVar7 + 0x31f8);
    lVar25 = lVar23;
    for (lVar26 = *(long *)(lVar7 + 0x3200); lVar26 != 0; lVar26 = lVar26 + -1) {
      FUN_100cc1c58(lVar25);
      lVar25 = lVar25 + 0x140;
    }
    if (*(long *)(lVar7 + 0x31f0) != 0) {
      _free(lVar23);
    }
    lVar23 = *(long *)(lVar7 + 0x3210);
    lVar25 = lVar23;
    for (lVar26 = *(long *)(lVar7 + 0x3218); lVar26 != 0; lVar26 = lVar26 + -1) {
      FUN_100e0649c(lVar25);
      lVar25 = lVar25 + 0x80;
    }
    if (*(long *)(lVar7 + 0x3208) != 0) {
      _free(lVar23);
    }
    *(undefined1 *)(lVar7 + 0x3bc2) = 0;
    *(undefined4 *)(lVar7 + 0x3bb9) = 0;
    FUN_100e2d09c(lVar7 + 0x568);
    *(undefined1 *)(lVar7 + 0x3bbd) = 0;
    uVar17 = 1;
    uVar14 = extraout_x1_15;
  }
LAB_100578918:
  *(undefined1 *)(lVar7 + 0x3bb8) = uVar17;
  auVar33._8_8_ = uVar14;
  auVar33._0_8_ = lVar16;
  return auVar33;
}

