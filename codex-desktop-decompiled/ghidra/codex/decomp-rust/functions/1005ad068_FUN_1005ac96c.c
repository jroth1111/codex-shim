
undefined8 FUN_1005ac96c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 uVar7;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  ulong uVar14;
  long lVar15;
  undefined8 unaff_x25;
  long lVar16;
  long unaff_x26;
  long unaff_x27;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_780 [416];
  long lStack_5e0;
  long lStack_5d8;
  undefined1 auStack_5c8 [416];
  undefined1 auStack_428 [12];
  undefined8 uStack_418;
  undefined4 uStack_410;
  int aiStack_408 [2];
  ulong uStack_400;
  uint uStack_3f8;
  long alStack_358 [62];
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_118;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  bVar2 = *(byte *)(param_1 + 0x46);
  if (bVar2 < 5) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        param_1[3] = param_1[1];
        param_1[2] = *param_1;
        param_1[0x47] = *param_1;
        *(undefined1 *)(param_1 + 0x57) = 0;
        goto LAB_1005ac9e0;
      }
      if (bVar2 == 1) {
        FUN_107c05cc0(&UNK_10b2182d0);
      }
      uVar4 = FUN_107c05cc4();
      if (param_1[0x42] != 0) {
        _free(param_1[0x43]);
      }
      FUN_100e34f68(param_1 + 4);
      *(undefined1 *)(param_1 + 0x46) = 2;
      __Unwind_Resume(uVar4);
      auVar18 = FUN_107c05ccc();
      plVar12 = auVar18._0_8_;
      bVar2 = *(byte *)(plVar12 + 4);
      if (bVar2 < 3) {
        if (bVar2 != 0) {
          if (bVar2 == 1) {
            FUN_107c05cc0(&UNK_10b2182e8);
          }
          FUN_107c05cc4();
          *(undefined1 *)(plVar12 + 4) = 2;
          lVar16 = __Unwind_Resume();
          FUN_100ca4214(plVar12 + 6);
          *(undefined1 *)(plVar12 + 4) = 2;
          __Unwind_Resume(lVar16);
          auVar18 = FUN_107c05ccc();
          uVar4 = auVar18._8_8_;
          plVar12 = auVar18._0_8_;
          bVar2 = *(byte *)(plVar12 + 0x321);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
              FUN_107c05cc0(&UNK_10b218300);
LAB_1005ad514:
              FUN_107c03c64(1,lVar16);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ad524);
              (*pcVar3)();
            }
            unaff_x26 = *plVar12;
            unaff_x27 = plVar12[1];
            unaff_x22 = plVar12[2];
            lStack_5d8 = *(long *)(unaff_x26 + 0x788);
            lStack_5e0 = *(long *)(unaff_x26 + 0x780);
            unaff_x23 = *(undefined8 *)(unaff_x27 + 0x238);
            lVar16 = *(long *)(unaff_x27 + 0x240);
            unaff_x25 = uVar4;
            if (lVar16 == 0) goto LAB_1005ad3d8;
            lVar9 = _malloc(lVar16);
            if (lVar9 == 0) goto LAB_1005ad514;
          }
          else {
            if (bVar2 == 3) goto LAB_1005ad4bc;
            FUN_107c05cc4(&UNK_10b218300);
LAB_1005ad3d8:
            lVar9 = 1;
            uVar4 = unaff_x25;
          }
          _memcpy(lVar9,unaff_x23,lVar16);
          FUN_10118749c(auStack_5c8,unaff_x22);
          auStack_428 = func_0x000106032954(0);
          uStack_418 = 0;
          uStack_410 = 0;
          func_0x000106032878(aiStack_408,auStack_428,&uStack_418);
          lVar5 = lStack_5d8;
          lVar15 = lStack_5e0;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uStack_400;
          lVar13 = SUB168(auVar18 * ZEXT816(1000),8);
          uVar14 = uStack_400 * 1000 + (ulong)uStack_3f8 / 1000000;
          if (CARRY8(uStack_400 * 1000,(ulong)uStack_3f8 / 1000000)) {
            lVar13 = lVar13 + 1;
          }
          if (0x7ffffffffffffffe < uVar14) {
            uVar14 = 0x7fffffffffffffff;
          }
          if (lVar13 != 0) {
            uVar14 = 0x7fffffffffffffff;
          }
          uVar11 = 0;
          if (aiStack_408[0] == 0) {
            uVar11 = uVar14;
          }
          _memcpy(auStack_780,auStack_5c8,0x1a0);
          *(undefined4 *)(plVar12 + 3) = 0x38;
          plVar12[4] = lVar16;
          plVar12[5] = lVar9;
          plVar12[6] = lVar16;
          _memcpy(plVar12 + 7,auStack_780,0x1a0);
          plVar12[0x3c] = lVar5;
          plVar12[0x3b] = lVar15;
          plVar12[0x3d] = uVar11;
          plVar12[0x3e] = unaff_x26;
          plVar12[0x3f] = unaff_x27;
          *(undefined1 *)(plVar12 + 0xb8) = 0;
LAB_1005ad4bc:
          uVar4 = FUN_10059e898(plVar12 + 3,uVar4);
          if ((int)uVar4 == 0) {
            FUN_100d1ddbc(plVar12 + 3);
            uVar7 = 1;
          }
          else {
            uVar7 = 3;
          }
          *(undefined1 *)(plVar12 + 0x321) = uVar7;
          return uVar4;
        }
        plVar17 = (long *)plVar12[1];
        lVar9 = *plVar12;
        plVar12[3] = (long)plVar17;
        plVar12[2] = lVar9;
        lVar16 = 8;
        if ((int)*plVar17 == 0) {
          lVar16 = 0x18;
        }
        if (plVar17[2] != 0 || *plVar17 != 0) {
          uVar8 = *(ulong *)((long)plVar17 + lVar16);
          uVar11 = plVar17[0x3b];
          uVar14 = uVar8 * uVar11;
          if (SUB168(SEXT816((long)uVar8) * SEXT816((long)uVar11),8) !=
              (long)(uVar8 * uVar11) >> 0x3f) {
            uVar14 = (long)(uVar8 ^ uVar11) >> 0x3f ^ 0x7fffffffffffffff;
          }
          plVar12[5] = (long)uVar14 / 100;
          plVar12[6] = lVar9 + 0x790;
          *(undefined1 *)(plVar12 + 0x14) = 0;
          goto LAB_1005ad11c;
        }
LAB_1005ad1f0:
        plVar12[8] = (long)plVar17;
        plVar12[7] = lVar9;
        *(undefined1 *)((long)plVar12 + 0x49) = 0;
      }
      else if (bVar2 == 3) {
LAB_1005ad11c:
        auVar19 = FUN_100fd3e50(plVar12 + 6,auVar18._8_8_);
        uVar4 = auVar19._8_8_;
        pcVar6 = auVar19._0_8_;
        if (pcVar6 == (char *)0x0) {
          uVar4 = 1;
          uVar7 = 3;
          goto LAB_1005ad284;
        }
        if ((((char)plVar12[0x14] == '\x03') && ((char)plVar12[0x13] == '\x03')) &&
           ((char)plVar12[10] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar12 + 0xb);
          uVar4 = extraout_x1_01;
          if (plVar12[0xc] != 0) {
            (**(code **)(plVar12[0xc] + 0x18))(plVar12[0xd]);
            uVar4 = extraout_x1_02;
          }
        }
        uVar14 = plVar12[5];
        if (*(long *)(pcVar6 + 0x4f0) == 2) {
          uVar11 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
        }
        else {
          uVar11 = uVar14 - *(long *)(pcVar6 + 0x520) &
                   ((long)(uVar14 - *(long *)(pcVar6 + 0x520)) >> 0x3f ^ 0xffffffffffffffffU);
        }
        pcVar6[0x4f0] = '\x01';
        pcVar6[0x4f1] = '\0';
        pcVar6[0x4f2] = '\0';
        pcVar6[0x4f3] = '\0';
        pcVar6[0x4f4] = '\0';
        pcVar6[0x4f5] = '\0';
        pcVar6[0x4f6] = '\0';
        pcVar6[0x4f7] = '\0';
        *(ulong *)(pcVar6 + 0x4f8) = uVar14;
        pcVar6[0x508] = '\0';
        pcVar6[0x509] = '\0';
        pcVar6[0x50a] = '\0';
        pcVar6[0x50b] = '\0';
        pcVar6[0x50c] = '\0';
        pcVar6[0x50d] = '\0';
        pcVar6[0x50e] = '\0';
        pcVar6[0x50f] = '\0';
        pcVar6[0x500] = '\0';
        pcVar6[0x501] = '\0';
        pcVar6[0x502] = '\0';
        pcVar6[0x503] = '\0';
        pcVar6[0x504] = '\0';
        pcVar6[0x505] = '\0';
        pcVar6[0x506] = '\0';
        pcVar6[0x507] = '\0';
        pcVar6[0x518] = '\0';
        pcVar6[0x519] = '\0';
        pcVar6[0x51a] = '\0';
        pcVar6[0x51b] = '\0';
        pcVar6[0x51c] = '\0';
        pcVar6[0x51d] = '\0';
        pcVar6[0x51e] = '\0';
        pcVar6[0x51f] = '\0';
        pcVar6[0x510] = '\0';
        pcVar6[0x511] = '\0';
        pcVar6[0x512] = '\0';
        pcVar6[0x513] = '\0';
        pcVar6[0x514] = '\0';
        pcVar6[0x515] = '\0';
        pcVar6[0x516] = '\0';
        pcVar6[0x517] = '\0';
        *(ulong *)(pcVar6 + 0x520) = uVar14;
        pcVar6[0x530] = '\0';
        pcVar6[0x531] = '\0';
        pcVar6[0x532] = '\0';
        pcVar6[0x533] = '\0';
        pcVar6[0x534] = '\0';
        pcVar6[0x535] = '\0';
        pcVar6[0x536] = '\0';
        pcVar6[0x537] = '\0';
        pcVar6[0x528] = '\0';
        pcVar6[0x529] = '\0';
        pcVar6[0x52a] = '\0';
        pcVar6[0x52b] = '\0';
        pcVar6[0x52c] = '\0';
        pcVar6[0x52d] = '\0';
        pcVar6[0x52e] = '\0';
        pcVar6[0x52f] = '\0';
        pcVar6[0x540] = '\0';
        pcVar6[0x541] = '\0';
        pcVar6[0x542] = '\0';
        pcVar6[0x543] = '\0';
        pcVar6[0x544] = '\0';
        pcVar6[0x545] = '\0';
        pcVar6[0x546] = '\0';
        pcVar6[0x547] = '\0';
        pcVar6[0x538] = '\0';
        pcVar6[0x539] = '\0';
        pcVar6[0x53a] = '\0';
        pcVar6[0x53b] = '\0';
        pcVar6[0x53c] = '\0';
        pcVar6[0x53d] = '\0';
        pcVar6[0x53e] = '\0';
        pcVar6[0x53f] = '\0';
        *(ulong *)(pcVar6 + 0x548) = uVar11;
        if (*pcVar6 == '\0') {
          *pcVar6 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar6,uVar4,1000000000);
        }
        FUN_1060fa678(pcVar6,1,pcVar6);
        plVar17 = (long *)plVar12[3];
        lVar9 = plVar12[2];
        goto LAB_1005ad1f0;
      }
      uVar14 = FUN_1005ae458(plVar12 + 5,auVar18._8_8_);
      if ((uVar14 & 1) == 0) {
        if (*(char *)((long)plVar12 + 0x49) == '\x04') {
          FUN_100d1ddbc(plVar12 + 10);
          *(undefined1 *)(plVar12 + 9) = 0;
        }
        else if (((*(char *)((long)plVar12 + 0x49) == '\x03') && ((char)plVar12[0x18] == '\x03')) &&
                (((char)plVar12[0x17] == '\x03' && ((char)plVar12[0xe] == '\x04')))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar12 + 0xf);
          if (plVar12[0x10] != 0) {
            (**(code **)(plVar12[0x10] + 0x18))(plVar12[0x11]);
          }
        }
        uVar4 = 0;
        uVar7 = 1;
      }
      else {
        uVar4 = 1;
        uVar7 = 4;
      }
LAB_1005ad284:
      *(undefined1 *)(plVar12 + 4) = uVar7;
      return uVar4;
    }
    if (bVar2 == 3) {
LAB_1005ac9e0:
      FUN_1005a3614(alStack_358,param_1 + 0x47,param_2);
      if (alStack_358[0] == 3) {
        uVar4 = 1;
        uVar7 = 3;
        goto LAB_1005ace7c;
      }
      _memcpy(param_1 + 4,alStack_358,0x1f0);
      if (((*(char *)(param_1 + 0x57) == '\x03') && (*(char *)(param_1 + 0x56) == '\x03')) &&
         ((*(char *)(param_1 + 0x55) == '\x03' && (*(char *)(param_1 + 0x4c) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x4d);
        if (param_1[0x4e] != 0) {
          (**(code **)(param_1[0x4e] + 0x18))(param_1[0x4f]);
        }
      }
      param_1[0x47] = param_1[2];
      *(undefined1 *)(param_1 + 0x57) = 0;
    }
    FUN_1005ab77c(&lStack_168,param_1 + 0x47,param_2);
    if (lStack_168 == -0x8000000000000000) {
      uVar4 = 1;
      uVar7 = 4;
      goto LAB_1005ace7c;
    }
    param_1[0x43] = uStack_160;
    param_1[0x42] = lStack_168;
    param_1[0x44] = uStack_158;
    if ((((*(char *)(param_1 + 0x57) == '\x03') && (*(char *)(param_1 + 0x56) == '\x03')) &&
        (*(char *)(param_1 + 0x55) == '\x03')) && (*(char *)(param_1 + 0x4c) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x4d);
      if (param_1[0x4e] != 0) {
        (**(code **)(param_1[0x4e] + 0x18))(param_1[0x4f]);
      }
    }
    uVar14 = param_1[0x44];
    lVar16 = param_1[0x40];
    if (lVar16 == 0) {
      lVar9 = 0;
    }
    else {
      lVar13 = param_1[0x3f];
      lVar15 = 0;
      do {
        lVar5 = FUN_102d4ec78(lVar13);
        uVar11 = lVar5 + 3U >> 2;
        lVar9 = 0x7fffffffffffffff;
        if (!SCARRY8(lVar15,uVar11)) {
          lVar9 = lVar15 + uVar11;
        }
        if (lVar5 < 1) {
          lVar9 = lVar15;
        }
        lVar13 = lVar13 + 0xc0;
        lVar16 = lVar16 + -1;
        lVar15 = lVar9;
      } while (lVar16 != 0);
    }
    uVar11 = uVar14 + 3;
    if (0xfffffffffffffffc < uVar14) {
      uVar11 = 0xffffffffffffffff;
    }
    lVar16 = 0x7fffffffffffffff;
    if (!SCARRY8(lVar9,uVar11 >> 2)) {
      lVar16 = lVar9 + (uVar11 >> 2);
    }
    param_1[0x45] = lVar16;
    param_1[0x47] = param_1[2] + 0x790;
    *(undefined1 *)(param_1 + 0x55) = 0;
LAB_1005acb68:
    auVar18 = FUN_100fd3e50(param_1 + 0x47,param_2);
    uVar4 = auVar18._8_8_;
    pcVar6 = auVar18._0_8_;
    if (pcVar6 == (char *)0x0) {
      uVar4 = 1;
      uVar7 = 5;
      goto LAB_1005ace7c;
    }
    lVar16 = extraout_x9;
    if (((*(char *)(param_1 + 0x55) == '\x03') && (*(char *)(param_1 + 0x54) == '\x03')) &&
       (*(char *)(param_1 + 0x4b) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x4c);
      uVar4 = extraout_x1;
      lVar16 = extraout_x9_00;
      if (param_1[0x4d] != 0) {
        (**(code **)(param_1[0x4d] + 0x18))(param_1[0x4e]);
        uVar4 = extraout_x1_00;
        lVar16 = extraout_x9_01;
      }
    }
    lVar9 = *(long *)(pcVar6 + 0x4f0);
    puVar1 = &uStack_b0;
    if (lVar9 != 2) {
      uStack_108 = *(undefined8 *)(pcVar6 + 0x508);
      uStack_110 = *(undefined8 *)(pcVar6 + 0x500);
      uStack_f8 = *(undefined8 *)(pcVar6 + 0x518);
      uStack_100 = *(undefined8 *)(pcVar6 + 0x510);
      uStack_e0 = *(undefined8 *)(pcVar6 + 0x530);
      uStack_e8 = *(undefined8 *)(pcVar6 + 0x528);
      uStack_c8 = *(undefined8 *)(pcVar6 + 0x548);
      uStack_d0 = *(undefined8 *)(pcVar6 + 0x540);
      uStack_d8 = *(undefined8 *)(pcVar6 + 0x538);
      lVar16 = *(long *)(pcVar6 + 0x4f8);
      uStack_f0 = *(undefined8 *)(pcVar6 + 0x520);
      puVar1 = &uStack_110;
      lStack_118 = lVar16;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_148 = puVar1[1];
    uStack_150 = *puVar1;
    uStack_138 = puVar1[3];
    uStack_140 = puVar1[2];
    uStack_130 = puVar1[4];
    uVar14 = param_1[0x45];
    plVar12 = (long *)param_1[3];
    lVar13 = 8;
    if ((int)*plVar12 == 0) {
      lVar13 = 0x18;
    }
    if (plVar12[2] == 0 && *plVar12 == 0) {
      lVar13 = 0;
      if (lVar9 != 2) {
        lVar13 = lVar9;
      }
    }
    else {
      uVar8 = plVar12[0x3b];
      uVar10 = *(ulong *)((long)plVar12 + lVar13);
      uVar11 = uVar10 * uVar8;
      if (SUB168(SEXT816((long)uVar10) * SEXT816((long)uVar8),8) != (long)(uVar10 * uVar8) >> 0x3f)
      {
        uVar11 = (long)(uVar10 ^ uVar8) >> 0x3f ^ 0x7fffffffffffffff;
      }
      lVar16 = (long)uVar11 / 100;
      lVar13 = 1;
    }
    *(undefined8 *)(pcVar6 + 0x508) = uStack_148;
    *(undefined8 *)(pcVar6 + 0x500) = uStack_150;
    *(long *)(pcVar6 + 0x4f0) = lVar13;
    *(long *)(pcVar6 + 0x4f8) = lVar16;
    *(undefined8 *)(pcVar6 + 0x518) = uStack_138;
    *(undefined8 *)(pcVar6 + 0x510) = uStack_140;
    *(undefined8 *)(pcVar6 + 0x520) = uStack_130;
    pcVar6[0x530] = '\0';
    pcVar6[0x531] = '\0';
    pcVar6[0x532] = '\0';
    pcVar6[0x533] = '\0';
    pcVar6[0x534] = '\0';
    pcVar6[0x535] = '\0';
    pcVar6[0x536] = '\0';
    pcVar6[0x537] = '\0';
    pcVar6[0x528] = '\0';
    pcVar6[0x529] = '\0';
    pcVar6[0x52a] = '\0';
    pcVar6[0x52b] = '\0';
    pcVar6[0x52c] = '\0';
    pcVar6[0x52d] = '\0';
    pcVar6[0x52e] = '\0';
    pcVar6[0x52f] = '\0';
    pcVar6[0x540] = '\0';
    pcVar6[0x541] = '\0';
    pcVar6[0x542] = '\0';
    pcVar6[0x543] = '\0';
    pcVar6[0x544] = '\0';
    pcVar6[0x545] = '\0';
    pcVar6[0x546] = '\0';
    pcVar6[0x547] = '\0';
    pcVar6[0x538] = '\0';
    pcVar6[0x539] = '\0';
    pcVar6[0x53a] = '\0';
    pcVar6[0x53b] = '\0';
    pcVar6[0x53c] = '\0';
    pcVar6[0x53d] = '\0';
    pcVar6[0x53e] = '\0';
    pcVar6[0x53f] = '\0';
    *(ulong *)(pcVar6 + 0x548) = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar6,uVar4,1000000000);
    }
    FUN_1060fa678(pcVar6,1,pcVar6);
    param_1[0x48] = param_1[3];
    param_1[0x47] = param_1[2];
    param_1[0x49] = param_1[0x45];
    *(undefined1 *)(param_1 + 0x5a) = 0;
LAB_1005acd28:
    uVar14 = func_0x0001005b5008(param_1 + 0x47,param_2);
    if ((uVar14 & 1) != 0) {
      uVar4 = 1;
      uVar7 = 6;
      goto LAB_1005ace7c;
    }
    if (((*(char *)(param_1 + 0x5a) == '\x03') && (*(char *)(param_1 + 0x59) == '\x03')) &&
       ((*(char *)(param_1 + 0x58) == '\x03' && (*(char *)(param_1 + 0x4f) == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x50);
      if (param_1[0x51] != 0) {
        (**(code **)(param_1[0x51] + 0x18))(param_1[0x52]);
      }
    }
    param_1[0x4a] = param_1[3];
    param_1[0x49] = param_1[2];
    *(undefined1 *)((long)param_1 + 0x259) = 0;
  }
  else {
    if (bVar2 == 5) goto LAB_1005acb68;
    if (bVar2 == 6) goto LAB_1005acd28;
  }
  uVar14 = FUN_1005ae458(param_1 + 0x47,param_2);
  if ((uVar14 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x259) == '\x04') {
      FUN_100d1ddbc(param_1 + 0x4c);
      *(undefined1 *)(param_1 + 0x4b) = 0;
    }
    else if ((((*(char *)((long)param_1 + 0x259) == '\x03') && (*(char *)(param_1 + 0x5a) == '\x03')
              ) && (*(char *)(param_1 + 0x59) == '\x03')) && (*(char *)(param_1 + 0x50) == '\x04'))
    {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x51);
      if (param_1[0x52] != 0) {
        (**(code **)(param_1[0x52] + 0x18))(param_1[0x53]);
      }
    }
    if (param_1[0x42] != 0) {
      _free(param_1[0x43]);
    }
    lVar9 = param_1[0x3f];
    lVar16 = param_1[0x40] + 1;
    lVar13 = lVar9;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      FUN_100e02a24(lVar13);
      lVar13 = lVar13 + 0xc0;
    }
    if (param_1[0x3e] != 0) {
      _free(lVar9);
    }
    if (param_1[0x10] != 3) {
      FUN_100e13e9c();
    }
    uVar4 = 0;
    uVar7 = 1;
  }
  else {
    uVar4 = 1;
    uVar7 = 7;
  }
LAB_1005ace7c:
  *(undefined1 *)(param_1 + 0x46) = uVar7;
  return uVar4;
}

