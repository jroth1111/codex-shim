
void FUN_10058ebf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined8 uVar16;
  long extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long extraout_x14_02;
  ulong uVar17;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined1 auVar18 [16];
  
  bVar15 = *(byte *)(param_2 + 5);
  if (bVar15 < 3) {
    if (bVar15 != 0) {
      if (bVar15 == 1) {
        FUN_107c05cc0(&UNK_10b217ec0);
      }
      FUN_107c05cc4();
LAB_10058efd0:
      FUN_107c05cc0(&UNK_10b218630);
LAB_10058efec:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10058eff0);
      (*pcVar3)();
    }
    param_2[3] = param_2[1];
    param_2[2] = *param_2;
    param_2[6] = *param_2;
    *(undefined1 *)(param_2 + 0x16) = 0;
LAB_10058ec60:
    auVar18 = FUN_1005ab94c(param_2 + 6,param_3);
    if ((auVar18._0_8_ & 1) != 0) {
      *param_1 = 2;
      uVar5 = 3;
      goto LAB_10058ef84;
    }
    param_2[4] = auVar18._8_8_;
    lVar6 = extraout_x14;
    if ((((*(char *)(param_2 + 0x16) == '\x03') && (*(char *)(param_2 + 0x15) == '\x03')) &&
        (*(char *)(param_2 + 0x14) == '\x03')) && (*(char *)(param_2 + 0xb) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 0xc);
      lVar6 = extraout_x14_00;
      if (param_2[0xd] != 0) {
        (**(code **)(param_2[0xd] + 0x18))(param_2[0xe]);
        lVar6 = extraout_x14_01;
      }
    }
    plVar7 = (long *)param_2[3];
    if ((*(byte *)(plVar7[0xf1] + 0x252c) & 1) != 0) {
      lVar6 = param_2[2];
      param_2[6] = lVar6;
      *(undefined1 *)(param_2 + 0x16) = 0;
      goto LAB_10058ecf8;
    }
    if (plVar7[2] == 0 && *plVar7 == 0) {
      iVar2 = (int)plVar7[4];
      lVar9 = 0x7fffffffffffffff;
      lVar12 = plVar7[5];
    }
    else {
      lVar12 = 8;
      if ((int)*plVar7 == 0) {
        lVar12 = 0x18;
      }
      lVar9 = (*(long *)((long)plVar7 + lVar12) * 9) / 10;
      iVar2 = (int)plVar7[4];
      lVar12 = lVar9;
      if (plVar7[5] <= lVar9) {
        lVar12 = plVar7[5];
      }
    }
    if (iVar2 == 0) {
      lVar12 = lVar9;
    }
    uVar14 = 0;
    uVar16 = 0;
    uVar11 = 0;
    uVar8 = param_2[4];
    uVar10 = uVar8;
  }
  else {
    if (bVar15 == 3) goto LAB_10058ec60;
    bVar15 = *(byte *)(param_2 + 0x16);
    if (bVar15 < 2) {
      if (bVar15 != 0) goto LAB_10058efd0;
      lVar6 = param_2[6];
LAB_10058ecf8:
      param_2[7] = lVar6 + 0x790;
      *(undefined1 *)(param_2 + 0x15) = 0;
    }
    else if (bVar15 != 3) {
      FUN_107c05cc4(&UNK_10b218630);
      goto LAB_10058efec;
    }
    auVar18 = FUN_100fd3e50(param_2 + 7,param_3);
    uVar14 = auVar18._8_8_;
    pcVar4 = auVar18._0_8_;
    if (pcVar4 == (char *)0x0) {
      *(undefined1 *)(param_2 + 0x16) = 3;
      *param_1 = 2;
      uVar5 = 4;
      goto LAB_10058ef84;
    }
    if (((*(char *)(param_2 + 0x15) == '\x03') && (*(char *)(param_2 + 0x14) == '\x03')) &&
       (*(char *)(param_2 + 0xb) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 0xc);
      uVar14 = extraout_x1;
      if (param_2[0xd] != 0) {
        (**(code **)(param_2[0xd] + 0x18))(param_2[0xe]);
        uVar14 = extraout_x1_00;
      }
    }
    lVar6 = *(long *)(pcVar4 + 0x6e0);
    unaff_x25 = *(long *)(pcVar4 + 0x6e8);
    unaff_x24 = *(undefined8 *)(pcVar4 + 0x6f0);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar4,uVar14,1000000000);
    }
    FUN_1060fa678(pcVar4,1,pcVar4);
    plVar7 = (long *)param_2[3];
    uVar8 = param_2[4];
    uVar10 = (long)(uVar8 - unaff_x25) >> 0x3f ^ 0x8000000000000000;
    if (!SBORROW8(uVar8,unaff_x25)) {
      uVar10 = uVar8 - unaff_x25;
    }
    if (lVar6 == 2) {
      uVar10 = 0;
    }
    uVar11 = (ulong)(lVar6 != 2);
    *(undefined1 *)(param_2 + 0x16) = 1;
    if ((*(uint *)(plVar7[0xf1] + 0x980) & 1) == 0) {
      if (plVar7[2] != 0 || *plVar7 != 0) {
        lVar6 = 8;
        if ((int)*plVar7 == 0) {
          lVar6 = 0x18;
        }
        lVar9 = (*(long *)((long)plVar7 + lVar6) * 9) / 10;
        lVar12 = lVar9;
        if (plVar7[5] <= lVar9) {
          lVar12 = plVar7[5];
        }
        if ((int)plVar7[4] == 0) {
          lVar12 = lVar9;
        }
        goto LAB_10058eeb4;
      }
      lVar12 = plVar7[5];
      lVar6 = extraout_x14_02;
      if ((int)plVar7[4] == 0) {
        lVar12 = 0x7fffffffffffffff;
      }
    }
    else {
      lVar12 = *(long *)(plVar7[0xf1] + 0x988);
      lVar6 = 8;
      if ((int)*plVar7 == 0) {
        lVar6 = 0x18;
      }
      if (plVar7[2] != 0 || *plVar7 != 0) {
LAB_10058eeb4:
        uVar17 = plVar7[0x3b];
        uVar13 = *(ulong *)((long)plVar7 + lVar6);
        uVar1 = uVar13 * uVar17;
        if (SUB168(SEXT816((long)uVar13) * SEXT816((long)uVar17),8) !=
            (long)(uVar13 * uVar17) >> 0x3f) {
          uVar1 = (long)(uVar13 ^ uVar17) >> 0x3f ^ 0x7fffffffffffffff;
        }
        lVar6 = (long)uVar1 / 100;
        uVar14 = 1;
        uVar16 = 1;
        goto LAB_10058ef48;
      }
      lVar6 = 0;
    }
    uVar16 = 0;
    uVar14 = 1;
  }
LAB_10058ef48:
  bVar15 = 0;
  if (lVar6 <= (long)uVar8) {
    bVar15 = (byte)uVar16;
  }
  *param_1 = uVar16;
  param_1[1] = lVar6;
  param_1[2] = uVar14;
  param_1[3] = unaff_x24;
  param_1[4] = uVar11;
  param_1[5] = unaff_x25;
  param_1[6] = uVar8;
  param_1[7] = uVar10;
  param_1[8] = lVar12;
  *(byte *)(param_1 + 9) = bVar15;
  *(byte *)((long)param_1 + 0x49) = lVar12 <= (long)uVar10 | bVar15;
  uVar5 = 1;
LAB_10058ef84:
  *(undefined1 *)(param_2 + 5) = uVar5;
  return;
}

