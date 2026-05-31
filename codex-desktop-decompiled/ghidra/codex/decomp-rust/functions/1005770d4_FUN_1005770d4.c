
/* WARNING: Possible PIC construction at 0x000100577288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057728c) */
/* WARNING: Removing unreachable block (ram,0x0001005772a4) */
/* WARNING: Removing unreachable block (ram,0x0001005772b0) */
/* WARNING: Removing unreachable block (ram,0x0001005772bc) */
/* WARNING: Removing unreachable block (ram,0x0001005772c8) */
/* WARNING: Removing unreachable block (ram,0x0001005772d4) */
/* WARNING: Removing unreachable block (ram,0x0001005772e4) */
/* WARNING: Removing unreachable block (ram,0x000100577298) */

ulong FUN_1005770d4(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined1 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 extraout_x9;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long extraout_x15;
  char *unaff_x21;
  ulong unaff_x22;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong unaff_x23;
  undefined8 uVar23;
  undefined8 unaff_x24;
  long lVar24;
  long *plVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar26;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined1 auVar38 [16];
  undefined1 auStack_2e58 [856];
  undefined1 auStack_2b00 [10120];
  undefined1 auStack_378 [280];
  undefined1 auStack_260 [496];
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  
  puVar4 = &stack0xffffffffffffffc0;
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      param_1[2] = *param_1;
      param_1[5] = param_1[1];
      *(undefined1 *)(param_1 + 0x13) = 0;
LAB_100577128:
      auVar38 = FUN_100fd3e50(param_1 + 5,param_2);
      uVar8 = auVar38._8_8_;
      if (auVar38._0_8_ == 0) {
        unaff_x22 = 2;
        uVar13 = 3;
        goto LAB_100577304;
      }
      param_1[3] = auVar38._0_8_;
      if (((*(char *)(param_1 + 0x13) == '\x03') && (*(char *)(param_1 + 0x12) == '\x03')) &&
         (*(char *)(param_1 + 9) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 10);
        uVar8 = extraout_x1;
        if (param_1[0xb] != 0) {
          (**(code **)(param_1[0xb] + 0x18))(param_1[0xc]);
          uVar8 = extraout_x1_00;
        }
      }
      unaff_x21 = (char *)param_1[3];
      if (*(long *)(unaff_x21 + 0x28) != -0x8000000000000000) {
        param_1[5] = *(long *)(unaff_x21 + 0x70) + 0x10;
        *(undefined1 *)(param_1 + 0x13) = 0;
        goto LAB_1005771b8;
      }
      unaff_x23 = 0;
      unaff_x22 = 0;
LAB_100577244:
      if (*unaff_x21 == '\0') {
        *unaff_x21 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (unaff_x21,uVar8,1000000000);
      }
      param_3 = unaff_x21;
      FUN_1060fa678(unaff_x21,1,unaff_x21);
      if (((uint)unaff_x23 | (uint)unaff_x22) == 1) {
        uVar13 = 1;
LAB_100577304:
        *(undefined1 *)(param_1 + 4) = uVar13;
        return unaff_x22;
      }
      param_1[5] = param_1[2];
      *(undefined1 *)(param_1 + 0x15) = 0;
      goto LAB_100577280;
    }
    if (bVar2 == 1) {
      FUN_107c05cc0(&UNK_10b2179a0);
    }
    FUN_107c05cc4();
    *(undefined1 *)(param_1 + 4) = 2;
    uVar8 = __Unwind_Resume();
    FUN_100ca4214(param_1 + 5);
    *(undefined1 *)(param_1 + 4) = 2;
    __Unwind_Resume(uVar8);
    param_1 = (undefined8 *)FUN_107c05ccc();
    puVar4 = &stack0xffffffffffffff90;
    pcStack_48 = FUN_10057742c;
    ppppuVar27 = &pppuStack_50;
    bVar2 = *(byte *)(param_1 + 0x15);
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        param_1[5] = param_1[3];
        param_1[4] = param_1[2];
        param_1[6] = param_1[1];
        *(undefined1 *)(param_1 + 0x14) = 0;
LAB_100577470:
        auVar38 = FUN_100fd3e50(param_1 + 6);
        uVar8 = auVar38._8_8_;
        pcVar11 = auVar38._0_8_;
        if (pcVar11 == (char *)0x0) {
          *(undefined1 *)(param_1 + 0x15) = 3;
          uVar9 = 1;
        }
        else {
          if (((*(char *)(param_1 + 0x14) == '\x03') && (*(char *)(param_1 + 0x13) == '\x03')) &&
             (*(char *)(param_1 + 10) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0xb);
            uVar8 = extraout_x1_04;
            if (param_1[0xc] != 0) {
              (**(code **)(param_1[0xc] + 0x18))(param_1[0xd]);
              uVar8 = extraout_x1_05;
            }
          }
          if (*(long *)(pcVar11 + 0x28) != -0x8000000000000000) {
            auVar38 = FUN_101498120(pcVar11 + 0x28,param_1[4],param_1[5]);
            uVar8 = auVar38._8_8_;
            if ((auVar38._0_8_ == 1) &&
               (lVar20 = **(long **)(pcVar11 + 0x70), **(long **)(pcVar11 + 0x70) = lVar20 + 1,
               lVar20 < 0)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1005774f8);
              (*pcVar3)();
            }
          }
          if (*pcVar11 == '\0') {
            *pcVar11 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar11,uVar8,1000000000);
          }
          FUN_1060fa678(pcVar11,1,pcVar11);
          uVar9 = 0;
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
        return uVar9;
      }
      FUN_107c05cc0(&UNK_10b2179d0);
    }
    else if (bVar2 == 3) goto LAB_100577470;
    FUN_107c05cc4(&UNK_10b2179d0);
    *(undefined1 *)(param_1 + 0x15) = 2;
    unaff_x21 = (char *)__Unwind_Resume();
    FUN_100ca4214(param_1 + 6);
    *(undefined1 *)(param_1 + 0x15) = 2;
    __Unwind_Resume(unaff_x21);
    uVar28 = 0x1005775e0;
    auVar38 = FUN_107c05ccc();
    param_2 = auVar38._8_8_;
    plVar15 = auVar38._0_8_;
  }
  else {
    if (bVar2 == 3) goto LAB_100577128;
    if (bVar2 == 4) {
LAB_1005771b8:
      auVar38 = FUN_100fd3e50(param_1 + 5,param_2);
      uVar8 = auVar38._8_8_;
      pcVar11 = auVar38._0_8_;
      if (pcVar11 == (char *)0x0) {
        unaff_x22 = 2;
        uVar13 = 4;
        goto LAB_100577304;
      }
      if (((*(char *)(param_1 + 0x13) == '\x03') && (*(char *)(param_1 + 0x12) == '\x03')) &&
         (*(char *)(param_1 + 9) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 10);
        uVar8 = extraout_x1_01;
        if (param_1[0xb] != 0) {
          (**(code **)(param_1[0xb] + 0x18))(param_1[0xc]);
          uVar8 = extraout_x1_02;
        }
      }
      lVar20 = *(long *)(pcVar11 + 0x38);
      unaff_x23 = (ulong)(byte)pcVar11[0x188];
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar11,uVar8,1000000000)
        ;
      }
      FUN_1060fa678(pcVar11,1,pcVar11);
      unaff_x22 = (ulong)(lVar20 != 0);
      unaff_x21 = (char *)param_1[3];
      uVar8 = extraout_x1_03;
      goto LAB_100577244;
    }
LAB_100577280:
    plVar15 = param_1 + 5;
    uVar28 = 0x10057728c;
    uVar8 = param_2;
    ppppuVar27 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(char **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = uVar8;
  *(undefined8 **)(puVar4 + -0x18) = param_1;
  *(undefined8 *****)(puVar4 + -0x10) = ppppuVar27;
  *(undefined8 *)(puVar4 + -8) = uVar28;
  bVar2 = *(byte *)(plVar15 + 0x10);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      plVar15[1] = *plVar15 + 8;
      *(undefined1 *)(plVar15 + 0xf) = 0;
LAB_100577620:
      auVar38 = FUN_100fd3e50(plVar15 + 1);
      uVar8 = auVar38._8_8_;
      pcVar11 = auVar38._0_8_;
      if (pcVar11 == (char *)0x0) {
        uVar9 = 2;
        uVar13 = 3;
      }
      else {
        if ((((char)plVar15[0xf] == '\x03') && ((char)plVar15[0xe] == '\x03')) &&
           ((char)plVar15[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar15 + 6);
          uVar8 = extraout_x1_06;
          if (plVar15[7] != 0) {
            (**(code **)(plVar15[7] + 0x18))(plVar15[8]);
            uVar8 = extraout_x1_07;
          }
        }
        lVar20 = *(long *)(pcVar11 + 0x40);
        if (*pcVar11 == '\0') {
          *pcVar11 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar11,uVar8,1000000000);
        }
        FUN_1060fa678(pcVar11,1,pcVar11);
        uVar9 = (ulong)(lVar20 != 0);
        uVar13 = 1;
      }
      *(undefined1 *)(plVar15 + 0x10) = uVar13;
      return uVar9;
    }
    FUN_107c05cc0(&UNK_10b217a00,param_2);
  }
  else if (bVar2 == 3) goto LAB_100577620;
  FUN_107c05cc4(&UNK_10b217a00);
  *(undefined1 *)(plVar15 + 0x10) = 2;
  uVar8 = __Unwind_Resume();
  if (plVar15[7] != 0) {
    (**(code **)(plVar15[7] + 0x18))(plVar15[8]);
  }
  *(undefined1 *)(plVar15 + 0x10) = 2;
  __Unwind_Resume(uVar8);
  puVar10 = (undefined8 *)FUN_107c05ccc();
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(ulong *)(puVar4 + -0x68) = unaff_x23;
  *(ulong *)(puVar4 + -0x60) = unaff_x22;
  *(char **)(puVar4 + -0x58) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x50) = uVar8;
  *(long **)(puVar4 + -0x48) = plVar15;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x38) = FUN_100577748;
  bVar2 = *(byte *)(puVar10 + 0x17);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined1 *)((long)puVar10 + 0xb9) = 1;
      puVar10[6] = puVar10[1];
      puVar10[5] = *puVar10;
      puVar10[7] = puVar10[2];
      puVar10[8] = puVar10[4];
      *(undefined1 *)(puVar10 + 0x16) = 0;
LAB_1005777a4:
      pcVar11 = (char *)FUN_100fd3e50(puVar10 + 8);
      if (pcVar11 == (char *)0x0) {
        uVar13 = 3;
      }
      else {
        if (((*(char *)(puVar10 + 0x16) == '\x03') && (*(char *)(puVar10 + 0x15) == '\x03')) &&
           (*(char *)(puVar10 + 0xc) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar10 + 0xd);
          if (puVar10[0xe] != 0) {
            (**(code **)(puVar10[0xe] + 0x18))(puVar10[0xf]);
          }
        }
        *(undefined1 *)((long)puVar10 + 0xb9) = 0;
        lVar20 = puVar10[5];
        lVar21 = puVar10[6];
        uVar9 = puVar10[7];
        lVar14 = *(long *)(pcVar11 + 0x28);
        *(long *)(puVar4 + -0xa0) = lVar21;
        *(long *)(puVar4 + -0x98) = lVar21;
        *(long *)(puVar4 + -0x90) = lVar20;
        *(ulong *)(puVar4 + -0x88) = lVar21 + uVar9 * 200;
        lVar24 = *(long *)(pcVar11 + 0x38);
        if ((ulong)(lVar14 - lVar24) < uVar9) {
          thunk_FUN_108855060(pcVar11 + 0x28,lVar24,uVar9,8,200);
          lVar24 = *(long *)(pcVar11 + 0x38);
        }
        _memcpy(*(long *)(pcVar11 + 0x30) + lVar24 * 200,lVar21,uVar9 * 200);
        *(ulong *)(pcVar11 + 0x38) = lVar24 + uVar9;
        uVar8 = extraout_x1_08;
        if (lVar20 != 0) {
          _free(lVar21);
          uVar8 = extraout_x1_09;
        }
        if (*pcVar11 == '\0') {
          *pcVar11 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar11,uVar8,1000000000);
        }
        FUN_1060fa678(pcVar11,1,pcVar11);
        *(undefined1 *)((long)puVar10 + 0xb9) = 0;
        uVar13 = 1;
      }
      *(undefined1 *)(puVar10 + 0x17) = uVar13;
      return (ulong)(pcVar11 == (char *)0x0);
    }
    FUN_107c05cc0(&UNK_10b217a90);
  }
  else if (bVar2 == 3) goto LAB_1005777a4;
  uVar28 = FUN_107c05cc4(&UNK_10b217a90);
  FUN_100ca4c80(puVar4 + -0xa0);
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(uVar8,1);
  if ((*(byte *)((long)puVar10 + 0xb9) & 1) != 0) {
    FUN_100e5bd48(puVar10 + 5);
  }
  *(undefined2 *)(puVar10 + 0x17) = 2;
  __Unwind_Resume(uVar28);
  auVar38 = FUN_107c05ccc();
  plVar15 = auVar38._8_8_;
  puVar12 = auVar38._0_8_;
  *(ulong *)(puVar4 + -0xd0) = unaff_x22;
  *(undefined8 *)(puVar4 + -200) = uVar28;
  *(undefined8 *)(puVar4 + -0xc0) = uVar8;
  *(undefined8 **)(puVar4 + -0xb8) = puVar10;
  *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x40;
  *(code **)(puVar4 + -0xa8) = FUN_10057797c;
  bVar2 = *(byte *)(plVar15 + 0x10);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      plVar15[1] = *plVar15 + 0x50;
      *(undefined1 *)(plVar15 + 0xf) = 0;
LAB_1005779c4:
      auVar38 = FUN_100fd3e50(plVar15 + 1,param_3);
      uVar8 = auVar38._8_8_;
      pcVar11 = auVar38._0_8_;
      if (pcVar11 == (char *)0x0) {
        *puVar12 = 0x8000000000000000;
        uVar13 = 3;
        uVar9 = 0;
      }
      else {
        if ((((char)plVar15[0xf] == '\x03') && ((char)plVar15[0xe] == '\x03')) &&
           ((char)plVar15[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar15 + 6);
          uVar8 = extraout_x1_10;
          if (plVar15[7] != 0) {
            (**(code **)(plVar15[7] + 0x18))(plVar15[8]);
            uVar8 = extraout_x1_11;
          }
        }
        uVar28 = *(undefined8 *)(pcVar11 + 0x28);
        *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(pcVar11 + 0x30);
        *(undefined8 *)(puVar4 + -0xf0) = uVar28;
        *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(pcVar11 + 0x38);
        pcVar11[0x28] = '\0';
        pcVar11[0x29] = '\0';
        pcVar11[0x2a] = '\0';
        pcVar11[0x2b] = '\0';
        pcVar11[0x2c] = '\0';
        pcVar11[0x2d] = '\0';
        pcVar11[0x2e] = '\0';
        pcVar11[0x2f] = '\0';
        pcVar11[0x30] = '\b';
        pcVar11[0x31] = '\0';
        pcVar11[0x32] = '\0';
        pcVar11[0x33] = '\0';
        pcVar11[0x34] = '\0';
        pcVar11[0x35] = '\0';
        pcVar11[0x36] = '\0';
        pcVar11[0x37] = '\0';
        pcVar11[0x38] = '\0';
        pcVar11[0x39] = '\0';
        pcVar11[0x3a] = '\0';
        pcVar11[0x3b] = '\0';
        pcVar11[0x3c] = '\0';
        pcVar11[0x3d] = '\0';
        pcVar11[0x3e] = '\0';
        pcVar11[0x3f] = '\0';
        if (*pcVar11 == '\0') {
          *pcVar11 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar11,uVar8,1000000000);
        }
        uVar9 = FUN_1060fa678(pcVar11,1,pcVar11);
        uVar8 = *(undefined8 *)(puVar4 + -0xf0);
        puVar12[1] = *(undefined8 *)(puVar4 + -0xe8);
        *puVar12 = uVar8;
        puVar12[2] = *(undefined8 *)(puVar4 + -0xe0);
        uVar13 = 1;
      }
      *(undefined1 *)(plVar15 + 0x10) = uVar13;
      return uVar9;
    }
    FUN_107c05cc0(&UNK_10b217af0);
  }
  else if (bVar2 == 3) goto LAB_1005779c4;
  FUN_107c05cc4(&UNK_10b217af0);
  *(undefined1 *)(plVar15 + 0x10) = 2;
  uVar8 = __Unwind_Resume();
  if (plVar15[7] != 0) {
    (**(code **)(plVar15[7] + 0x18))(plVar15[8]);
  }
  *(undefined1 *)(plVar15 + 0x10) = 2;
  __Unwind_Resume(uVar8);
  auVar38 = FUN_107c05ccc();
  plVar25 = auVar38._0_8_;
  *(ulong *)(puVar4 + -0x120) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x118) = uVar28;
  *(undefined8 *)(puVar4 + -0x110) = uVar8;
  *(long **)(puVar4 + -0x108) = plVar15;
  *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xb0;
  *(undefined8 *)(puVar4 + -0xf8) = 0x100577b18;
  bVar2 = *(byte *)(plVar25 + 0xae9);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar21 = *plVar25;
      plVar15 = (long *)(lVar21 + 0x1328);
      LOAcquire();
      lVar20 = *plVar15;
      *plVar15 = lVar20 + 1;
      LORelease();
      *(long *)(puVar4 + -0x138) = lVar20;
      *(undefined1 **)(puVar4 + -0x130) = puVar4 + -0x138;
      *(undefined1 **)(puVar4 + -0x128) =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (puVar4 + -0x150,s_auto_compact__108af5d75,puVar4 + -0x130);
      lVar14 = *(long *)(puVar4 + -0x150);
      *(long *)(puVar4 + -0x168) = *(long *)(puVar4 + -0x148);
      *(long *)(puVar4 + -0x170) = lVar14;
      lVar20 = *(long *)(puVar4 + -0x140);
      *(long *)(puVar4 + -0x160) = lVar20;
      plVar25[2] = *(long *)(puVar4 + -0x148);
      plVar25[1] = lVar14;
      plVar25[3] = lVar20;
      plVar25[4] = lVar21;
      *(undefined1 *)(plVar25 + 0xa2) = 0;
LAB_100577bb0:
      uVar9 = FUN_100579200(plVar25 + 1,auVar38._8_8_);
      if (uVar9 == 0) {
        uVar13 = 3;
      }
      else {
        FUN_100d75da0(plVar25 + 1);
        uVar13 = 1;
      }
      *(undefined1 *)(plVar25 + 0xae9) = uVar13;
      return uVar9;
    }
    FUN_107c05cc0(&UNK_10b217b38);
  }
  else if (bVar2 == 3) goto LAB_100577bb0;
  FUN_107c05cc4(&UNK_10b217b38);
  *(undefined1 *)(plVar25 + 0xae9) = 2;
  uVar8 = __Unwind_Resume();
  FUN_100d75da0(plVar25 + 1);
  *(undefined1 *)(plVar25 + 0xae9) = 2;
  __Unwind_Resume(uVar8);
  auVar38 = FUN_107c05ccc();
  uVar28 = auVar38._8_8_;
  lVar20 = auVar38._0_8_;
  *(undefined8 *)(puVar4 + -0x1d0) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x1c8) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x1c0) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x1b8) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x1b0) = unaff_x24;
  *(ulong *)(puVar4 + -0x1a8) = unaff_x23;
  *(ulong *)(puVar4 + -0x1a0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x198) = 0x5748;
  *(undefined8 *)(puVar4 + -400) = uVar8;
  *(long **)(puVar4 + -0x188) = plVar25;
  *(undefined1 **)(puVar4 + -0x180) = puVar4 + -0x100;
  *(undefined8 *)(puVar4 + -0x178) = 0x100577c38;
  *(undefined8 *)(puVar4 + -0x11d0) = 0;
  *(undefined8 *)(puVar4 + -0x21d0) = 0;
  *(undefined8 *)(puVar4 + -0x2e30) = 0;
  bVar2 = *(byte *)(lVar20 + 0x3bb8);
  if (bVar2 < 5) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        *(undefined1 *)(lVar20 + 0x3bc1) = 0;
        *(undefined8 *)(lVar20 + 0x3bb9) = 0;
        *(undefined8 *)(lVar20 + 0x548) = *(undefined8 *)(lVar20 + 0x540);
        *(undefined1 *)(lVar20 + 0x3bbd) = 1;
        *(undefined8 *)(lVar20 + 0x560) = *(undefined8 *)(lVar20 + 0x4d8);
        *(undefined8 *)(lVar20 + 0x558) = *(undefined8 *)(lVar20 + 0x4d0);
        *(undefined8 *)(lVar20 + 0x550) = *(undefined8 *)(lVar20 + 0x4c8);
        _memcpy(lVar20 + 0x568,lVar20,0x4c8);
        *(undefined8 *)(lVar20 + 0xa48) = *(undefined8 *)(lVar20 + 0x510);
        *(undefined8 *)(lVar20 + 0xa40) = *(undefined8 *)(lVar20 + 0x508);
        *(undefined8 *)(lVar20 + 0xa58) = *(undefined8 *)(lVar20 + 0x520);
        *(undefined8 *)(lVar20 + 0xa50) = *(undefined8 *)(lVar20 + 0x518);
        *(undefined8 *)(lVar20 + 0xa68) = *(undefined8 *)(lVar20 + 0x530);
        *(undefined8 *)(lVar20 + 0xa60) = *(undefined8 *)(lVar20 + 0x528);
        *(undefined1 *)(lVar20 + 0x3bc2) = 1;
        *(undefined8 *)(lVar20 + 0xa70) = *(undefined8 *)(lVar20 + 0x538);
        *(undefined8 *)(lVar20 + 0xa38) = *(undefined8 *)(lVar20 + 0x500);
        *(undefined8 *)(lVar20 + 0xa30) = *(undefined8 *)(lVar20 + 0x4f8);
        *(undefined1 *)(lVar20 + 0x3bbc) = 1;
        *(undefined8 *)(lVar20 + 0xa80) = *(undefined8 *)(lVar20 + 0x4e8);
        *(undefined8 *)(lVar20 + 0xa78) = *(undefined8 *)(lVar20 + 0x4e0);
        *(undefined8 *)(lVar20 + 0xa88) = *(undefined8 *)(lVar20 + 0x4f0);
        lVar14 = *(long *)(lVar20 + 0xa80);
        lVar21 = 0;
        if (*(long *)(lVar20 + 0xa88) != 0) {
          lVar21 = lVar14;
        }
        *(long *)(lVar20 + 0xa90) = lVar21;
        if (lVar21 == 0) {
          uVar8 = *(undefined8 *)(lVar20 + 0x7a0);
          lVar21 = *(long *)(lVar20 + 0x7a8);
          if (lVar21 == 0) {
LAB_100577dd4:
            lVar14 = 1;
          }
          else {
LAB_100577da4:
            lVar14 = _malloc(lVar21);
            if (lVar14 == 0) {
              FUN_107c03c64(1,lVar21);
              goto LAB_1005789ac;
            }
          }
          _memcpy(lVar14,uVar8,lVar21);
        }
        else {
          lVar21 = *(long *)(lVar14 + 0x28);
          if (lVar21 == 0) {
            lVar14 = 1;
          }
          else {
            uVar8 = *(undefined8 *)(lVar14 + 0x20);
            lVar14 = _malloc(lVar21);
            if (lVar14 == 0) {
              FUN_107c03c64(1,lVar21);
              goto LAB_1005789ac;
            }
            _memcpy(lVar14,uVar8,lVar21);
            if (lVar21 == -0x8000000000000000) {
              uVar8 = *(undefined8 *)(lVar20 + 0x7a0);
              lVar21 = *(long *)(lVar20 + 0x7a8);
              if (lVar21 == 0) goto LAB_100577dd4;
              goto LAB_100577da4;
            }
          }
        }
        *(long *)(lVar20 + 0xa98) = lVar21;
        *(long *)(lVar20 + 0xaa0) = lVar14;
        *(long *)(lVar20 + 0xaa8) = lVar21;
        lVar21 = 1;
        *(undefined1 *)(lVar20 + 0x3bbb) = 1;
        uVar8 = *(undefined8 *)(lVar20 + 0xaa0);
        unaff_x22 = *(ulong *)(lVar20 + 0xaa8);
        if ((unaff_x22 == 0) || (lVar21 = _malloc(unaff_x22), lVar21 != 0)) {
          _memcpy(lVar21,uVar8,unaff_x22);
          *(ulong *)(puVar4 + -0x2ab0) = unaff_x22;
          *(long *)(puVar4 + -0x2aa8) = lVar21;
          *(ulong *)(puVar4 + -0x2aa0) = unaff_x22;
          __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_21build_per_turn_config17h3126574fa0fee5fbE
                    (lVar20 + 0xab0,lVar20 + 0x568,puVar4 + -0x2ab0);
          *(undefined1 *)(lVar20 + 0x3bba) = 1;
          *(long *)(lVar20 + 0x3bc8) = *(long *)(*(long *)(lVar20 + 0x548) + 0x360) + 0x10;
          *(undefined1 *)(lVar20 + 0x3c20) = 0;
          goto LAB_100577e68;
        }
      }
      else {
        if (bVar2 == 1) {
          FUN_107c05cc0(&UNK_10b217b68);
        }
        FUN_107c05cc4();
      }
      FUN_107c03c64(1,unaff_x22);
      goto LAB_1005789ac;
    }
    if (bVar2 == 3) {
LAB_100577e68:
      auVar38 = FUN_100fd4eb8(lVar20 + 0x3bc8,uVar28);
      pcVar11 = auVar38._0_8_;
      if (pcVar11 == (char *)0x0) {
        uVar9 = 0;
        uVar13 = 3;
        goto LAB_100578918;
      }
      if ((*(char *)(lVar20 + 0x3c20) == '\x03') && (*(char *)(lVar20 + 0x3c18) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (lVar20 + 0x3bd8);
        if (*(long *)(lVar20 + 0x3be0) != 0) {
          (**(code **)(*(long *)(lVar20 + 0x3be0) + 0x18))(*(undefined8 *)(lVar20 + 0x3be8));
        }
      }
      __ZN9codex_mcp18connection_manager20McpConnectionManager19set_approval_policy17h2253cb9192e2fd72E
                (auVar38._8_8_,lVar20 + 0x9f0);
      lVar21 = *(long *)(lVar20 + 0x900);
      if (-1 < lVar21) {
        lVar21 = 2;
      }
      lVar21 = lVar20 + *(long *)(&UNK_108cd9a90 + lVar21 * 8);
      uVar16 = *(ulong *)(lVar21 + 0x568);
      uVar8 = 0x8000000000000000;
      uVar9 = uVar16;
      if (uVar16 < 0x8000000000000001) {
        uVar9 = 0;
      }
      if ((uVar9 & 0x7fffffffffffffff) == 0) {
        if (uVar16 == 0x8000000000000000) {
          uVar23 = 0x8000000000000000;
        }
        else {
          FUN_1035ab934(puVar4 + -0x2ab0,*(undefined8 *)(lVar21 + 0x570),
                        *(undefined8 *)(lVar21 + 0x578));
          uVar23 = *(undefined8 *)(lVar21 + 0x580);
          uVar8 = *(undefined8 *)(puVar4 + -0x2ab0);
          *(undefined8 *)(puVar4 + -0x2c88) = *(undefined8 *)(puVar4 + -0x2aa0);
          *(undefined8 *)(puVar4 + -0x2c90) = *(undefined8 *)(puVar4 + -0x2aa8);
        }
        uVar13 = *(undefined1 *)(lVar21 + 0x588);
        *(undefined8 *)(puVar4 + -0x2aa0) = *(undefined8 *)(puVar4 + -0x2c88);
        *(undefined8 *)(puVar4 + -0x2aa8) = *(undefined8 *)(puVar4 + -0x2c90);
        *(undefined8 *)(puVar4 + -0x2ab0) = uVar8;
        *(undefined8 *)(puVar4 + -0x2a98) = uVar23;
        puVar4[-0x2a90] = uVar13;
      }
      else if ((uVar9 & 0x7fffffffffffffff) == 1) {
        *(undefined8 *)(puVar4 + -0x2ab0) = 0x8000000000000001;
      }
      else {
        uVar8 = *(undefined8 *)(lVar21 + 0x568);
        uVar30 = *(undefined8 *)(lVar21 + 0x580);
        uVar23 = *(undefined8 *)(lVar21 + 0x578);
        *(undefined8 *)(puVar4 + -0x2aa8) = *(undefined8 *)(lVar21 + 0x570);
        *(undefined8 *)(puVar4 + -0x2ab0) = uVar8;
        *(undefined8 *)(puVar4 + -0x2a98) = uVar30;
        *(undefined8 *)(puVar4 + -0x2aa0) = uVar23;
        *(undefined8 *)(puVar4 + -0x2a90) = *(undefined8 *)(lVar21 + 0x588);
      }
      func_0x000104922e0c(puVar4 + -0x568,puVar4 + -0x2ab0,*(undefined8 *)(lVar20 + 0x7b8),
                          *(undefined8 *)(lVar20 + 0x7c0));
      __ZN9codex_mcp18connection_manager20McpConnectionManager22set_permission_profile17h4601d5069dc32cdeE
                (auVar38._8_8_,puVar4 + -0x568);
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar11,extraout_x1_12,1000000000);
      }
      FUN_1060fa678(pcVar11,1,pcVar11);
      lVar21 = *(long *)(*(long *)(lVar20 + 0x548) + 0x388);
      lVar14 = *(long *)(*(long *)(lVar20 + 0x548) + 0x390);
      uVar8 = *(undefined8 *)(lVar20 + 0x748);
      uVar23 = *(undefined8 *)(lVar20 + 0x750);
      __ZN10codex_core6config6Config24to_models_manager_config17hc032ee81d7650970E
                (lVar20 + 0x3bc8,lVar20 + 0xab0);
      auVar38 = (**(code **)(lVar14 + 0x68))
                          (lVar21 + (*(long *)(lVar14 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           uVar8,uVar23,lVar20 + 0x3bc8);
      *(undefined1 (*) [16])(lVar20 + 0x3c30) = auVar38;
    }
    else {
      auVar38 = *(undefined1 (*) [16])(lVar20 + 0x3c30);
    }
    (**(code **)(auVar38._8_8_ + 0x18))(puVar4 + -0x2ab0,auVar38._0_8_,uVar28);
    if (*(long *)(puVar4 + -0x2ab0) == 2) {
      uVar9 = 0;
      uVar13 = 4;
      goto LAB_100578918;
    }
    *(undefined1 *)(lVar20 + 0x3bb9) = 1;
    _memcpy(lVar20 + 0x2ff8,puVar4 + -0x2ab0,0x1f8);
    uVar8 = *(undefined8 *)(lVar20 + 0x3c30);
    puVar10 = *(undefined8 **)(lVar20 + 0x3c38);
    pcVar3 = (code *)*puVar10;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar8);
    }
    if (puVar10[1] != 0) {
      _free(uVar8);
    }
    if ((*(long *)(lVar20 + 0x3bf8) != -0x8000000000000000) && (*(long *)(lVar20 + 0x3bf8) != 0)) {
      _free(*(undefined8 *)(lVar20 + 0x3c00));
    }
    lVar21 = *(long *)(lVar20 + 0x3c10);
    if (lVar21 != -0x8000000000000000) {
      lVar22 = *(long *)(lVar20 + 0x3c18);
      lVar14 = lVar22;
      for (lVar24 = *(long *)(lVar20 + 0x3c20); lVar24 != 0; lVar24 = lVar24 + -1) {
        FUN_100e0f5d0(lVar14);
        lVar14 = lVar14 + 0x1f8;
      }
      if (lVar21 != 0) {
        _free(lVar22);
      }
    }
    lVar21 = *(long *)(*(long *)(lVar20 + 0x548) + 0x3a0);
    __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
              (lVar20 + 0x48b0,lVar20 + 0xab0);
    *(long *)(lVar20 + 0x3bc8) = lVar21 + 0x10;
    *(long *)(lVar20 + 0x3bd0) = lVar20 + 0x48b0;
    *(undefined1 *)(lVar20 + 0x48a8) = 0;
LAB_100578108:
    FUN_100a7ebb0(puVar4 + -0x2dc0,lVar20 + 0x3bc8,uVar28);
    if (*(long *)(puVar4 + -0x2dc0) == -0x8000000000000000) {
      uVar9 = 0;
      uVar13 = 5;
      goto LAB_100578918;
    }
    uVar8 = *(undefined8 *)(puVar4 + -0x2dc0);
    uVar30 = *(undefined8 *)(puVar4 + -0x2da8);
    uVar23 = *(undefined8 *)(puVar4 + -0x2db0);
    *(undefined8 *)(lVar20 + 0x31f8) = *(undefined8 *)(puVar4 + -0x2db8);
    *(undefined8 *)(lVar20 + 0x31f0) = uVar8;
    *(undefined8 *)(lVar20 + 0x3208) = uVar30;
    *(undefined8 *)(lVar20 + 0x3200) = uVar23;
    uVar8 = *(undefined8 *)(puVar4 + -0x2da0);
    *(undefined8 *)(lVar20 + 0x3218) = *(undefined8 *)(puVar4 + -0x2d98);
    *(undefined8 *)(lVar20 + 0x3210) = uVar8;
    if ((*(char *)(lVar20 + 0x48a8) == '\x03') && (*(char *)(lVar20 + 0x48a2) == '\x03')) {
      FUN_100cb9114(lVar20 + 0x3bf8);
      if (*(long *)(lVar20 + 0x3be0) != 0) {
        _free(*(undefined8 *)(lVar20 + 0x3be8));
      }
      *(undefined1 *)(lVar20 + 0x48a1) = 0;
    }
    FUN_100e05b5c(lVar20 + 0x48b0);
    if (*(long *)(lVar20 + 0x5210) != 0) {
      _free(*(undefined8 *)(lVar20 + 0x5218));
    }
    FUN_10074cf40(puVar4 + -0x2d90,*(undefined8 *)(lVar20 + 0x31f8),*(undefined8 *)(lVar20 + 0x3200)
                 );
    __ZN10codex_core6skills29skills_load_input_from_config17h701c8c7c51865ebbE
              (lVar20 + 0x3220,lVar20 + 0xab0,puVar4 + -0x2d90);
    uVar8 = 0;
    uVar23 = extraout_x9;
    if (*(long *)(lVar20 + 0xa90) != 0) {
      lVar14 = *(long *)(*(long *)(lVar20 + 0xa90) + 0x48);
      lVar21 = **(long **)(lVar14 + 0xf0);
      **(long **)(lVar14 + 0xf0) = lVar21 + 1;
      if (lVar21 < 0) goto LAB_1005789ac;
      uVar8 = *(undefined8 *)(lVar14 + 0xf0);
      uVar23 = *(undefined8 *)(lVar14 + 0xf8);
    }
    *(undefined8 *)(puVar4 + -0x2d78) = uVar8;
    *(undefined8 *)(puVar4 + -0x2d70) = uVar23;
    *(undefined1 *)(lVar20 + 0x3bc1) = 1;
    lVar21 = *(long *)(*(long *)(lVar20 + 0x548) + 0x398);
    *(undefined1 *)(lVar20 + 0x3bc1) = 0;
    *(undefined8 *)(lVar20 + 0x3bc8) = uVar8;
    *(undefined8 *)(lVar20 + 0x3bd0) = uVar23;
    *(long *)(lVar20 + 0x3c00) = lVar21 + 0x10;
    *(long *)(lVar20 + 0x3c08) = lVar20 + 0x3220;
    *(undefined1 *)(lVar20 + 0x3c12) = 0;
LAB_10057821c:
    FUN_100a162f0(puVar4 + -0x2ab0,lVar20 + 0x3bc8,uVar28);
    if (*(long *)(puVar4 + -0x2ab0) == -0x8000000000000000) {
      uVar9 = 0;
      uVar13 = 6;
      goto LAB_100578918;
    }
    *(undefined8 *)(puVar4 + -0x2cf8) = *(undefined8 *)(puVar4 + -0x2a48);
    *(undefined8 *)(puVar4 + -0x2d00) = *(undefined8 *)(puVar4 + -0x2a50);
    *(undefined8 *)(puVar4 + -0x2ce8) = *(undefined8 *)(puVar4 + -0x2a38);
    *(undefined8 *)(puVar4 + -0x2cf0) = *(undefined8 *)(puVar4 + -0x2a40);
    *(undefined8 *)(puVar4 + -0x2cd8) = *(undefined8 *)(puVar4 + -0x2a28);
    *(undefined8 *)(puVar4 + -0x2ce0) = *(undefined8 *)(puVar4 + -0x2a30);
    *(undefined8 *)(puVar4 + -0x2cd0) = *(undefined8 *)(puVar4 + -0x2a20);
    *(undefined8 *)(puVar4 + -0x2d38) = *(undefined8 *)(puVar4 + -0x2a88);
    *(undefined8 *)(puVar4 + -0x2d40) = *(undefined8 *)(puVar4 + -0x2a90);
    *(undefined8 *)(puVar4 + -0x2d28) = *(undefined8 *)(puVar4 + -0x2a78);
    *(undefined8 *)(puVar4 + -0x2d30) = *(undefined8 *)(puVar4 + -0x2a80);
    *(undefined8 *)(puVar4 + -0x2d18) = *(undefined8 *)(puVar4 + -0x2a68);
    *(undefined8 *)(puVar4 + -0x2d20) = *(undefined8 *)(puVar4 + -0x2a70);
    *(undefined8 *)(puVar4 + -0x2d08) = *(undefined8 *)(puVar4 + -0x2a58);
    *(undefined8 *)(puVar4 + -0x2d10) = *(undefined8 *)(puVar4 + -0x2a60);
    *(undefined8 *)(puVar4 + -0x2d58) = *(undefined8 *)(puVar4 + -0x2aa8);
    *(undefined8 *)(puVar4 + -0x2d60) = *(undefined8 *)(puVar4 + -0x2ab0);
    *(undefined8 *)(puVar4 + -0x2d48) = *(undefined8 *)(puVar4 + -0x2a98);
    *(undefined8 *)(puVar4 + -0x2d50) = *(undefined8 *)(puVar4 + -0x2aa0);
    FUN_100cc55bc(lVar20 + 0x3bc8);
    *(undefined8 *)(puVar4 + -0x2a38) = *(undefined8 *)(puVar4 + -0x2cf8);
    *(undefined8 *)(puVar4 + -0x2a40) = *(undefined8 *)(puVar4 + -0x2d00);
    *(undefined8 *)(puVar4 + -0x2a28) = *(undefined8 *)(puVar4 + -0x2ce8);
    *(undefined8 *)(puVar4 + -0x2a30) = *(undefined8 *)(puVar4 + -0x2cf0);
    *(undefined8 *)(puVar4 + -0x2a18) = *(undefined8 *)(puVar4 + -0x2cd8);
    *(undefined8 *)(puVar4 + -0x2a20) = *(undefined8 *)(puVar4 + -0x2ce0);
    *(undefined8 *)(puVar4 + -0x2a68) = *(undefined8 *)(puVar4 + -0x2d28);
    *(undefined8 *)(puVar4 + -0x2a70) = *(undefined8 *)(puVar4 + -0x2d30);
    *(undefined8 *)(puVar4 + -0x2a58) = *(undefined8 *)(puVar4 + -0x2d18);
    *(undefined8 *)(puVar4 + -0x2a60) = *(undefined8 *)(puVar4 + -0x2d20);
    *(undefined8 *)(puVar4 + -0x2a48) = *(undefined8 *)(puVar4 + -0x2d08);
    *(undefined8 *)(puVar4 + -0x2a50) = *(undefined8 *)(puVar4 + -0x2d10);
    *(undefined8 *)(puVar4 + -0x2aa8) = 1;
    *(undefined8 *)(puVar4 + -0x2ab0) = 1;
    *(undefined8 *)(puVar4 + -0x2a98) = *(undefined8 *)(puVar4 + -0x2d58);
    *(undefined8 *)(puVar4 + -0x2aa0) = *(undefined8 *)(puVar4 + -0x2d60);
    *(undefined8 *)(puVar4 + -0x2a10) = *(undefined8 *)(puVar4 + -0x2cd0);
    *(undefined8 *)(puVar4 + -0x2a88) = *(undefined8 *)(puVar4 + -0x2d48);
    *(undefined8 *)(puVar4 + -0x2a90) = *(undefined8 *)(puVar4 + -0x2d50);
    *(undefined8 *)(puVar4 + -0x2a78) = *(undefined8 *)(puVar4 + -0x2d38);
    *(undefined8 *)(puVar4 + -0x2a80) = *(undefined8 *)(puVar4 + -0x2d40);
    puVar10 = (undefined8 *)_malloc(0xa8);
    if (puVar10 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa8);
      goto LAB_1005789ac;
    }
    uVar8 = *(undefined8 *)(puVar4 + -0x2a30);
    uVar30 = *(undefined8 *)(puVar4 + -0x2a18);
    uVar23 = *(undefined8 *)(puVar4 + -0x2a20);
    puVar10[0x11] = *(undefined8 *)(puVar4 + -0x2a28);
    puVar10[0x10] = uVar8;
    puVar10[0x13] = uVar30;
    puVar10[0x12] = uVar23;
    puVar10[0x14] = *(undefined8 *)(puVar4 + -0x2a10);
    uVar8 = *(undefined8 *)(puVar4 + -0x2a70);
    uVar30 = *(undefined8 *)(puVar4 + -0x2a58);
    uVar23 = *(undefined8 *)(puVar4 + -0x2a60);
    puVar10[9] = *(undefined8 *)(puVar4 + -0x2a68);
    puVar10[8] = uVar8;
    puVar10[0xb] = uVar30;
    puVar10[10] = uVar23;
    uVar30 = *(undefined8 *)(puVar4 + -0x2a50);
    uVar23 = *(undefined8 *)(puVar4 + -0x2a38);
    uVar8 = *(undefined8 *)(puVar4 + -0x2a40);
    puVar10[0xd] = *(undefined8 *)(puVar4 + -0x2a48);
    puVar10[0xc] = uVar30;
    puVar10[0xf] = uVar23;
    puVar10[0xe] = uVar8;
    uVar8 = *(undefined8 *)(puVar4 + -0x2ab0);
    uVar30 = *(undefined8 *)(puVar4 + -0x2a98);
    uVar23 = *(undefined8 *)(puVar4 + -0x2aa0);
    puVar10[1] = *(undefined8 *)(puVar4 + -0x2aa8);
    *puVar10 = uVar8;
    puVar10[3] = uVar30;
    puVar10[2] = uVar23;
    uVar30 = *(undefined8 *)(puVar4 + -0x2a90);
    uVar23 = *(undefined8 *)(puVar4 + -0x2a78);
    uVar8 = *(undefined8 *)(puVar4 + -0x2a80);
    puVar10[5] = *(undefined8 *)(puVar4 + -0x2a88);
    puVar10[4] = uVar30;
    puVar10[7] = uVar23;
    puVar10[6] = uVar8;
    *(undefined8 **)(puVar4 + -0x2d68) = puVar10;
    *(undefined1 *)(lVar20 + 0x3bc0) = 1;
    if ((*(byte *)(lVar20 + 0x2fe1) & 1) == 0) {
      lVar21 = *(long *)(lVar20 + 0x548);
      plVar15 = *(long **)(lVar21 + 0x5f8);
      bVar5 = plVar15 != (long *)0x0;
      if (plVar15 != (long *)0x0) {
        lVar14 = *plVar15;
        *plVar15 = lVar14 + 1;
        if (lVar14 < 0) goto LAB_1005789ac;
        plVar15 = *(long **)(lVar21 + 0x5f8);
        *(long **)(puVar4 + -0x2ab0) = plVar15;
        lVar21 = *plVar15;
        *plVar15 = lVar21 + -1;
        LORelease();
        if (lVar21 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(puVar4 + -0x2ab0);
        }
      }
    }
    else {
      bVar5 = false;
    }
    lVar21 = *(long *)(lVar20 + 0x548);
    uVar30 = *(undefined8 *)(lVar21 + 0x780);
    uVar23 = *(undefined8 *)(lVar21 + 0x3d0);
    uVar8 = *(undefined8 *)(lVar21 + 0x3c8);
    *(undefined8 *)(puVar4 + -0x2cb8) = *(undefined8 *)(lVar21 + 0x788);
    *(undefined8 *)(puVar4 + -0x2cc0) = uVar30;
    *(undefined8 *)(puVar4 + -0x2ca8) = uVar23;
    *(undefined8 *)(puVar4 + -0x2cb0) = uVar8;
    plVar15 = *(long **)(lVar21 + 0x380);
    lVar21 = *plVar15;
    *plVar15 = lVar21 + 1;
    if (lVar21 < 0) goto LAB_1005789ac;
    *(long **)(puVar4 + -0x2c98) = plVar15;
    lVar22 = *(long *)(lVar20 + 0x548);
    lVar21 = lVar20 + 0x568;
    FUN_1011eae84(puVar4 + -0x2c90,lVar21);
    lVar24 = *(long *)(lVar20 + 0x548);
    lVar26 = *(long *)(lVar24 + 0x368);
    lVar14 = 0;
    if (*(long *)(lVar24 + 0x1f0) != -0x8000000000000000) {
      lVar14 = lVar24 + 0x1f0;
    }
    lVar6 = 0;
    if (*(long *)(lVar24 + 0x208) != -0x8000000000000000) {
      lVar6 = lVar24 + 0x208;
    }
    *(long *)(puVar4 + -0x2dd0) = lVar6;
    *(long *)(puVar4 + -0x2dc8) = lVar14;
    *(undefined1 *)(lVar20 + 0x3bba) = 0;
    _memcpy(puVar4 + -0x2ab0,lVar20 + 0xab0,0x2548);
    *(undefined1 *)(lVar20 + 0x3bb9) = 0;
    _memcpy(puVar4 + -0x568,lVar20 + 0x2ff8,0x1f8);
    *(long *)(puVar4 + -0x210) = lVar24 + 0x5f0;
    auVar38 = FUN_101496fa8(puVar4 + -0x210);
    plVar25 = auVar38._8_8_;
    plVar15 = auVar38._0_8_;
    *(undefined8 *)(puVar4 + -0x210) = 0;
    *(long **)(puVar4 + -0x208) = plVar25;
    if (plVar15 != (long *)0x0) {
      if (plVar25 == (long *)0x0) {
        if (*plVar15 == 0) {
          *plVar15 = 3;
        }
      }
      else {
        lVar14 = *plVar25;
        *plVar25 = lVar14 + 1;
        if (lVar14 < 0) goto LAB_1005789ac;
        if ((long *)*plVar15 == plVar25 + 2) {
          *plVar15 = 3;
        }
        else {
          *(long **)(puVar4 + -0x280) = plVar25;
          lVar14 = *plVar25;
          *plVar25 = lVar14 + -1;
          LORelease();
          if (lVar14 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(puVar4 + -0x280);
          }
        }
      }
      plVar25 = *(long **)(puVar4 + -0x208);
    }
    *(long **)(puVar4 + -0x2f8) = plVar25;
    if (plVar25 == (long *)0x0) {
      *(undefined2 *)(puVar4 + -0x370) = 2;
    }
    else {
      *(long *)(puVar4 + -0x2dd8) = lVar26;
      lVar14 = *(long *)(lVar20 + 0x900);
      if (-1 < lVar14) {
        lVar14 = 2;
      }
      puVar1 = (ulong *)(lVar21 + *(long *)(&UNK_108cd9a90 + lVar14 * 8));
      uVar16 = *puVar1;
      uVar8 = 0x8000000000000000;
      uVar9 = uVar16;
      if (uVar16 < 0x8000000000000001) {
        uVar9 = 0;
      }
      if ((uVar9 & 0x7fffffffffffffff) == 0) {
        if (uVar16 == 0x8000000000000000) {
          uVar9 = 0x8000000000000000;
        }
        else {
          FUN_1035ab934(puVar4 + -0x210,puVar1[1],puVar1[2]);
          uVar9 = puVar1[3];
          uVar8 = *(undefined8 *)(puVar4 + -0x210);
          *(undefined8 *)(puVar4 + -0x278) = *(undefined8 *)(puVar4 + -0x200);
          *(undefined8 *)(puVar4 + -0x280) = *(undefined8 *)(puVar4 + -0x208);
        }
        uVar16 = puVar1[4];
        *(undefined8 *)(puVar4 + -0x200) = *(undefined8 *)(puVar4 + -0x278);
        *(undefined8 *)(puVar4 + -0x208) = *(undefined8 *)(puVar4 + -0x280);
        *(undefined8 *)(puVar4 + -0x210) = uVar8;
        *(ulong *)(puVar4 + -0x1f8) = uVar9;
        puVar4[-0x1f0] = (char)uVar16;
      }
      else if ((uVar9 & 0x7fffffffffffffff) == 1) {
        *(undefined8 *)(puVar4 + -0x210) = 0x8000000000000001;
      }
      else {
        uVar9 = *puVar1;
        uVar33 = puVar1[3];
        uVar16 = puVar1[2];
        *(ulong *)(puVar4 + -0x208) = puVar1[1];
        *(ulong *)(puVar4 + -0x210) = uVar9;
        *(ulong *)(puVar4 + -0x1f8) = uVar33;
        *(ulong *)(puVar4 + -0x200) = uVar16;
        *(ulong *)(puVar4 + -0x1f0) = puVar1[4];
      }
      func_0x000104922e0c(puVar4 + -0x280,puVar4 + -0x210,*(undefined8 *)(lVar20 + 0x7b8),
                          *(undefined8 *)(lVar20 + 0x7c0));
      uVar16 = *(ulong *)(puVar4 + -0x280);
      uVar9 = uVar16;
      if (uVar16 < 0x8000000000000001) {
        uVar9 = 0;
      }
      if ((uVar9 & 0x7fffffffffffffff) == 1) {
        *(undefined2 *)(puVar4 + -0x370) = 2;
        lVar26 = *(long *)(puVar4 + -0x2dd8);
      }
      else {
        plVar15 = (long *)plVar25[10];
        lVar14 = *plVar15;
        *plVar15 = lVar14 + 1;
        lVar26 = *(long *)(puVar4 + -0x2dd8);
        if (lVar14 < 0) goto LAB_1005789ac;
        lVar14 = plVar25[0xf];
        plVar17 = (long *)plVar25[0xb];
        lVar6 = *plVar17;
        *plVar17 = lVar6 + 1;
        if ((lVar6 < 0) ||
           ((plVar18 = (long *)plVar25[0xc], plVar18 != (long *)0x0 &&
            (lVar6 = *plVar18, *plVar18 = lVar6 + 1, lVar6 < 0)))) goto LAB_1005789ac;
        plVar19 = (long *)plVar25[0xd];
        lVar6 = extraout_x15;
        if (plVar19 != (long *)0x0) {
          lVar6 = *plVar19;
          *plVar19 = lVar6 + 1;
          if (lVar6 < 0) goto LAB_1005789ac;
          lVar6 = plVar25[0xe];
        }
        lVar32 = plVar25[2];
        lVar31 = plVar25[5];
        lVar29 = plVar25[4];
        lVar37 = plVar25[7];
        lVar36 = plVar25[6];
        lVar35 = plVar25[9];
        lVar34 = plVar25[8];
        *(long *)(puVar4 + -0x368) = plVar25[3];
        *(long *)(puVar4 + -0x370) = lVar32;
        *(long *)(puVar4 + -0x358) = lVar31;
        *(long *)(puVar4 + -0x360) = lVar29;
        *(long *)(puVar4 + -0x348) = lVar37;
        *(long *)(puVar4 + -0x350) = lVar36;
        *(long *)(puVar4 + -0x338) = lVar35;
        *(long *)(puVar4 + -0x340) = lVar34;
        *(long **)(puVar4 + -0x330) = plVar15;
        *(long **)(puVar4 + -0x328) = plVar17;
        *(long **)(puVar4 + -800) = plVar18;
        *(long **)(puVar4 + -0x318) = plVar19;
        *(long *)(puVar4 + -0x310) = lVar6;
        puVar4[-0x308] = (char)lVar14;
        if ((uVar16 != 0x8000000000000000) && ((uVar9 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(puVar4 + -0x280);
        }
      }
    }
    uVar8 = *(undefined8 *)(puVar4 + -0x2dd0);
    uVar23 = *(undefined8 *)(puVar4 + -0x2dc8);
    *(undefined2 *)(lVar20 + 0x3bbb) = 0;
    *(undefined8 *)(puVar4 + -0x2e0) = *(undefined8 *)(lVar20 + 0xa88);
    uVar30 = *(undefined8 *)(lVar20 + 0xa78);
    *(undefined8 *)(puVar4 + -0x2e8) = *(undefined8 *)(lVar20 + 0xa80);
    *(undefined8 *)(puVar4 + -0x2f0) = uVar30;
    uVar30 = *(undefined8 *)(lVar20 + 0xa98);
    *(undefined8 *)(puVar4 + -0x278) = *(undefined8 *)(lVar20 + 0xaa0);
    *(undefined8 *)(puVar4 + -0x280) = uVar30;
    *(undefined8 *)(puVar4 + -0x270) = *(undefined8 *)(lVar20 + 0xaa8);
    *(undefined1 *)(lVar20 + 0x3bbd) = 0;
    uVar30 = *(undefined8 *)(lVar20 + 0x550);
    *(undefined8 *)(puVar4 + -0x208) = *(undefined8 *)(lVar20 + 0x558);
    *(undefined8 *)(puVar4 + -0x210) = uVar30;
    *(undefined8 *)(puVar4 + -0x200) = *(undefined8 *)(lVar20 + 0x560);
    *(undefined1 *)(lVar20 + 0x3bc0) = 0;
    puVar4[-0x2de8] = bVar5;
    *(undefined8 *)(puVar4 + -0x2df0) = *(undefined8 *)(puVar4 + -0x2d68);
    *(undefined1 **)(puVar4 + -0x2e00) = puVar4 + -0x280;
    *(undefined1 **)(puVar4 + -0x2df8) = puVar4 + -0x210;
    *(undefined1 **)(puVar4 + -0x2e10) = puVar4 + -0x370;
    *(undefined1 **)(puVar4 + -0x2e08) = puVar4 + -0x2f0;
    *(undefined1 **)(puVar4 + -0x2e20) = puVar4 + -0x568;
    *(long *)(puVar4 + -0x2e18) = lVar24 + 0x388;
    *(undefined8 *)(puVar4 + -0x2e30) = uVar8;
    *(undefined1 **)(puVar4 + -0x2e28) = puVar4 + -0x2ab0;
    __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_17make_turn_context17hb50f6d2f0a37f7ddE
              (lVar20 + 0x3c50,puVar4 + -0x2cc0,puVar4 + -0x2cb0,*(undefined8 *)(puVar4 + -0x2c98),
               lVar22 + 0x10,puVar4 + -0x2c90,lVar21,lVar26 + 0x10,uVar23);
    *(undefined2 *)(lVar20 + 0x3bbe) = 0x101;
    plVar15 = *(long **)(puVar4 + -0x2f8);
    if (plVar15 != (long *)0x0) {
      lVar21 = *plVar15;
      *plVar15 = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(puVar4 + -0x2f8);
      }
    }
    *(long *)(lVar20 + 0x3bc8) = *(long *)(*(long *)(lVar20 + 0x548) + 0x6e0) + 0x10;
    *(undefined1 *)(lVar20 + 0x3c48) = 0;
  }
  else {
    if (bVar2 == 5) goto LAB_100578108;
    if (bVar2 == 6) goto LAB_10057821c;
  }
  cVar7 = FUN_10052acf0(lVar20 + 0x3bc8,uVar28);
  if (cVar7 == '\x02') {
    uVar9 = 0;
    uVar13 = 7;
  }
  else {
    if ((((*(char *)(lVar20 + 0x3c48) == '\x03') && (*(char *)(lVar20 + 0x3c40) == '\x03')) &&
        (*(char *)(lVar20 + 0x3c38) == '\x03')) && (*(char *)(lVar20 + 0x3bf0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (lVar20 + 0x3bf8);
      if (*(long *)(lVar20 + 0x3c00) != 0) {
        (**(code **)(*(long *)(lVar20 + 0x3c00) + 0x18))(*(undefined8 *)(lVar20 + 0x3c08));
      }
    }
    *(char *)(lVar20 + 0x4420) = cVar7;
    if (*(long *)(lVar20 + 0xa30) != -0x7ffffffffffffffa) {
      *(undefined1 *)(lVar20 + 0x3bc2) = 0;
      uVar8 = *(undefined8 *)(lVar20 + 0xa50);
      uVar23 = *(undefined8 *)(lVar20 + 0xa68);
      uVar28 = *(undefined8 *)(lVar20 + 0xa60);
      *(undefined8 *)(puVar4 + -0x2a8) = *(undefined8 *)(lVar20 + 0xa58);
      *(undefined8 *)(puVar4 + -0x2b0) = uVar8;
      *(undefined8 *)(puVar4 + -0x298) = uVar23;
      *(undefined8 *)(puVar4 + -0x2a0) = uVar28;
      *(undefined8 *)(puVar4 + -0x290) = *(undefined8 *)(lVar20 + 0xa70);
      uVar23 = *(undefined8 *)(lVar20 + 0xa38);
      uVar28 = *(undefined8 *)(lVar20 + 0xa30);
      uVar8 = *(undefined8 *)(lVar20 + 0xa40);
      *(undefined8 *)(puVar4 + -0x2b8) = *(undefined8 *)(lVar20 + 0xa48);
      *(undefined8 *)(puVar4 + -0x2c0) = uVar8;
      *(undefined8 *)(puVar4 + -0x2c8) = uVar23;
      *(undefined8 *)(puVar4 + -0x2d0) = uVar28;
      if (*(long *)(lVar20 + 0x4200) != -0x7ffffffffffffffb) {
        FUN_100de6690((undefined8 *)(lVar20 + 0x4200));
      }
      *(undefined1 *)(lVar20 + 0x3bbf) = 1;
      uVar8 = *(undefined8 *)(puVar4 + -0x2b0);
      uVar23 = *(undefined8 *)(puVar4 + -0x298);
      uVar28 = *(undefined8 *)(puVar4 + -0x2a0);
      *(undefined8 *)(lVar20 + 0x4228) = *(undefined8 *)(puVar4 + -0x2a8);
      *(undefined8 *)(lVar20 + 0x4220) = uVar8;
      *(undefined8 *)(lVar20 + 0x4238) = uVar23;
      *(undefined8 *)(lVar20 + 0x4230) = uVar28;
      *(undefined8 *)(lVar20 + 0x4240) = *(undefined8 *)(puVar4 + -0x290);
      uVar28 = *(undefined8 *)(puVar4 + -0x2b8);
      uVar8 = *(undefined8 *)(puVar4 + -0x2c0);
      uVar23 = *(undefined8 *)(puVar4 + -0x2d0);
      *(undefined8 *)(lVar20 + 0x4208) = *(undefined8 *)(puVar4 + -0x2c8);
      *(undefined8 *)(lVar20 + 0x4200) = uVar23;
      *(undefined8 *)(lVar20 + 0x4218) = uVar28;
      *(undefined8 *)(lVar20 + 0x4210) = uVar8;
    }
    *(undefined2 *)(lVar20 + 0x3bbe) = 0;
    _memcpy(puVar4 + -0x2aa0,lVar20 + 0x3c50,0x7e0);
    *(undefined8 *)(puVar4 + -0x2aa8) = 1;
    *(undefined8 *)(puVar4 + -0x2ab0) = 1;
    lVar21 = _malloc(0x7f0);
    if (lVar21 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x7f0);
LAB_1005789ac:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005789b0);
      (*pcVar3)();
    }
    _memcpy(lVar21,puVar4 + -0x2ab0,0x7f0);
    *(long *)(puVar4 + -0x568) = lVar21;
    __ZN10codex_core13turn_metadata17TurnMetadataState25spawn_git_enrichment_task17hecdb7f9d327a1d29E
              (*(long *)(lVar21 + 0x7b0) + 0x10);
    uVar9 = *(ulong *)(puVar4 + -0x568);
    *(undefined4 *)(lVar20 + 0x3bbe) = 0;
    FUN_100e19918(lVar20 + 0x3220);
    lVar24 = *(long *)(lVar20 + 0x31f8);
    lVar21 = lVar24;
    for (lVar14 = *(long *)(lVar20 + 0x3200); lVar14 != 0; lVar14 = lVar14 + -1) {
      FUN_100cc1c58(lVar21);
      lVar21 = lVar21 + 0x140;
    }
    if (*(long *)(lVar20 + 0x31f0) != 0) {
      _free(lVar24);
    }
    lVar24 = *(long *)(lVar20 + 0x3210);
    lVar21 = lVar24;
    for (lVar14 = *(long *)(lVar20 + 0x3218); lVar14 != 0; lVar14 = lVar14 + -1) {
      FUN_100e0649c(lVar21);
      lVar21 = lVar21 + 0x80;
    }
    if (*(long *)(lVar20 + 0x3208) != 0) {
      _free(lVar24);
    }
    *(undefined1 *)(lVar20 + 0x3bc2) = 0;
    *(undefined4 *)(lVar20 + 0x3bb9) = 0;
    FUN_100e2d09c(lVar20 + 0x568);
    *(undefined1 *)(lVar20 + 0x3bbd) = 0;
    uVar13 = 1;
  }
LAB_100578918:
  *(undefined1 *)(lVar20 + 0x3bb8) = uVar13;
  return uVar9;
}

