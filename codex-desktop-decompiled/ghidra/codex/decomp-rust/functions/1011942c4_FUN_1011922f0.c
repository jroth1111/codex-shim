
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011922f0(undefined8 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  undefined8 uVar13;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar14;
  uint uVar15;
  uint extraout_w8;
  undefined8 uVar16;
  int *piVar17;
  code *pcVar18;
  long *plVar19;
  byte bVar20;
  ulong *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 uVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  char *pcVar32;
  long *plVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  char *pcVar37;
  long lVar38;
  undefined1 *puVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  byte bVar47;
  byte bVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auStack_5060 [20480];
  
  puVar39 = &stack0xffffffffffffffa0;
  do {
    puVar6 = puVar39;
    *(undefined8 *)(puVar6 + -0x1000) = 0;
    puVar39 = puVar6 + -0x1000;
  } while (puVar6 + -0x1000 != auStack_5060);
  plVar31 = (long *)0x17a30;
  bVar20 = *(byte *)(param_2 + 0x4f8a);
  if (bVar20 < 5) {
    if (bVar20 < 3) {
      if (bVar20 != 0) {
        if (bVar20 == 1) {
          func_0x000108a07af4(&UNK_10b216130);
        }
        func_0x000108a07b10();
        uVar15 = extraout_w8;
LAB_10119469c:
        if (uVar15 == 1) {
          func_0x000108a07af4(&UNK_10b216118);
        }
        else {
          func_0x000108a07b10(&UNK_10b216118);
        }
        goto LAB_1011930e8;
      }
      *(undefined8 *)(param_2 + 0x4f95) = 0;
      *(undefined8 *)(param_2 + 0x4f8e) = 0;
      plVar31 = *(long **)(param_2 + 0x2690);
      *(long **)(param_2 + 0x26d0) = plVar31;
      *(undefined1 *)(param_2 + 0x4f99) = 1;
      _memcpy(param_2 + 0x26d8,param_2,0x2548);
      *(undefined8 *)(param_2 + 0x4c28) = *(undefined8 *)(param_2 + 0x25f8);
      *(undefined8 *)(param_2 + 0x4c20) = *(undefined8 *)(param_2 + 0x25f0);
      *(undefined8 *)(param_2 + 0x4c38) = *(undefined8 *)(param_2 + 0x2608);
      *(undefined8 *)(param_2 + 0x4c30) = *(undefined8 *)(param_2 + 0x2600);
      *(undefined8 *)(param_2 + 0x4c48) = *(undefined8 *)(param_2 + 0x2618);
      *(undefined8 *)(param_2 + 0x4c40) = *(undefined8 *)(param_2 + 0x2610);
      *(undefined8 *)(param_2 + 0x4c58) = *(undefined8 *)(param_2 + 0x2628);
      *(undefined8 *)(param_2 + 0x4c50) = *(undefined8 *)(param_2 + 0x2620);
      *(undefined2 *)(param_2 + 0x4f97) = 0x101;
      *(undefined8 *)(param_2 + 0x4c60) = *(undefined8 *)(param_2 + 0x2698);
      *(undefined8 *)(param_2 + 0x4c70) = *(undefined8 *)(param_2 + 0x26a8);
      *(undefined8 *)(param_2 + 0x4c68) = *(undefined8 *)(param_2 + 0x26a0);
      *(undefined8 *)(param_2 + 0x4c80) = *(undefined8 *)(param_2 + 0x26b8);
      *(undefined8 *)(param_2 + 0x4c78) = *(undefined8 *)(param_2 + 0x26b0);
      *(undefined8 *)(param_2 + 0x4c90) = *(undefined8 *)(param_2 + 0x2638);
      *(undefined8 *)(param_2 + 0x4c88) = *(undefined8 *)(param_2 + 0x2630);
      *(undefined8 *)(param_2 + 0x4ca0) = *(undefined8 *)(param_2 + 0x2648);
      *(undefined8 *)(param_2 + 0x4c98) = *(undefined8 *)(param_2 + 0x2640);
      *(undefined8 *)(param_2 + 0x4cd0) = *(undefined8 *)(param_2 + 0x2678);
      *(undefined8 *)(param_2 + 0x4cc8) = *(undefined8 *)(param_2 + 0x2670);
      *(undefined8 *)(param_2 + 0x4ce0) = *(undefined8 *)(param_2 + 0x2688);
      *(undefined8 *)(param_2 + 0x4cd8) = *(undefined8 *)(param_2 + 0x2680);
      *(undefined8 *)(param_2 + 0x4cb0) = *(undefined8 *)(param_2 + 0x2658);
      *(undefined8 *)(param_2 + 0x4ca8) = *(undefined8 *)(param_2 + 0x2650);
      *(undefined8 *)(param_2 + 0x4cc0) = *(undefined8 *)(param_2 + 0x2668);
      *(undefined8 *)(param_2 + 0x4cb8) = *(undefined8 *)(param_2 + 0x2660);
      *(undefined1 *)(param_2 + 0x4f8b) = *(undefined1 *)(param_2 + 0x4f89);
      *(undefined8 *)(param_2 + 0x4cf0) = *(undefined8 *)(param_2 + 0x2550);
      *(undefined8 *)(param_2 + 0x4ce8) = *(undefined8 *)(param_2 + 0x2548);
      *(undefined8 *)(param_2 + 0x4cf8) = *(undefined8 *)(param_2 + 0x2558);
      *(undefined1 *)(param_2 + 0x4f8c) = *(undefined1 *)(param_2 + 0x4f88);
      *(undefined8 *)(param_2 + 0x4d10) = *(undefined8 *)(param_2 + 0x2588);
      *(undefined8 *)(param_2 + 0x4d08) = *(undefined8 *)(param_2 + 0x2580);
      *(undefined8 *)(param_2 + 0x4d00) = *(undefined8 *)(param_2 + 0x2578);
      *(undefined8 *)(param_2 + 0x4d20) = *(undefined8 *)(param_2 + 0x26c8);
      *(undefined8 *)(param_2 + 0x4d18) = *(undefined8 *)(param_2 + 0x26c0);
      *(undefined8 *)(param_2 + 0x4d40) = *(undefined8 *)(param_2 + 0x25d8);
      *(undefined8 *)(param_2 + 0x4d38) = *(undefined8 *)(param_2 + 0x25d0);
      *(undefined8 *)(param_2 + 0x4d50) = *(undefined8 *)(param_2 + 0x25e8);
      *(undefined8 *)(param_2 + 0x4d48) = *(undefined8 *)(param_2 + 0x25e0);
      *(undefined8 *)(param_2 + 0x4d30) = *(undefined8 *)(param_2 + 0x25c8);
      *(undefined8 *)(param_2 + 0x4d28) = *(undefined8 *)(param_2 + 0x25c0);
      *(undefined8 *)(param_2 + 0x4d60) = *(undefined8 *)(param_2 + 0x2568);
      *(undefined8 *)(param_2 + 0x4d58) = *(undefined8 *)(param_2 + 0x2560);
      *(undefined8 *)(param_2 + 0x4d68) = *(undefined8 *)(param_2 + 0x2570);
      *(undefined8 *)(param_2 + 0x4f8f) = 0x101010101010101;
      *(undefined8 *)(param_2 + 0x4d98) = *(undefined8 *)(param_2 + 0x25b8);
      *(undefined8 *)(param_2 + 0x4d90) = *(undefined8 *)(param_2 + 0x25b0);
      *(undefined8 *)(param_2 + 0x4d88) = *(undefined8 *)(param_2 + 0x25a8);
      *(undefined8 *)(param_2 + 0x4d80) = *(undefined8 *)(param_2 + 0x25a0);
      *(undefined8 *)(param_2 + 0x4d78) = *(undefined8 *)(param_2 + 0x2598);
      *(undefined8 *)(param_2 + 0x4d70) = *(undefined8 *)(param_2 + 0x2590);
      *(byte *)(param_2 + 0x4f8d) = (byte)((ulong)*(long *)(param_2 + 0x4c20) >> 0x3f) ^ 1;
      if (-1 < *(long *)(param_2 + 0x4c20)) {
        *(long *)(param_2 + 0x4fa0) = param_2 + 0x4c20;
        *(long *)(param_2 + 0x4fa8) = plVar31[0x13] + 0x10;
        *(undefined1 *)(param_2 + 0x5000) = 0;
        goto LAB_10119259c;
      }
      goto LAB_101192bf8;
    }
    if (bVar20 == 3) {
LAB_10119259c:
      FUN_100fd5070(puVar6 + 0x1470,param_2 + 0x4fa8,param_3);
      pcVar37 = *(char **)(puVar6 + 0x1470);
      if (pcVar37 == (char *)0x0) {
        *param_1 = 0x8000000000000001;
        uVar24 = 3;
        goto LAB_101194fa0;
      }
      plVar31 = *(long **)(puVar6 + 0x1478);
      iVar10 = *(int *)(puVar6 + 0x1480);
      lVar38 = extraout_x1;
      if ((*(char *)(param_2 + 0x5000) == '\x03') && (*(char *)(param_2 + 0x4ff8) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_2 + 0x4fb8);
        lVar38 = extraout_x1_00;
        if (*(long *)(param_2 + 0x4fc0) != 0) {
          (**(code **)(*(long *)(param_2 + 0x4fc0) + 0x18))(*(undefined8 *)(param_2 + 0x4fc8));
          lVar38 = extraout_x1_01;
        }
      }
      if (plVar31[3] != 0) {
        lVar44 = *(long *)(param_2 + 0x4fa0);
        auVar51 = FUN_100e8ed88(plVar31[4],plVar31[5],lVar44 + 0x30);
        lVar38 = auVar51._8_8_;
        lVar34 = 0;
        bVar20 = auVar51[7] >> 1;
        lVar40 = *plVar31;
        uVar23 = plVar31[1];
        uVar27 = auVar51._0_8_ & uVar23;
        uVar16 = *(undefined8 *)(lVar40 + uVar27);
        uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar20),
                          CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar20),
                                   CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar20),
                                            CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar20),
                                                     CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                               bVar20),CONCAT12(-((byte)((ulong)
                                                  uVar16 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)uVar16 >> 8) == bVar20),
                                                           -((byte)uVar16 == bVar20)))))))) &
                 0x8080808080808080;
        do {
          for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
            uVar11 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = uVar27 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar23;
            plVar19 = (long *)(lVar40 + -0x18 + uVar11 * -0x18);
            lVar38 = *plVar19;
            if (*(long *)(lVar44 + 0x38) == plVar19[1] && *(long *)(lVar44 + 0x30) == lVar38) {
              plVar19 = *(long **)(lVar40 + uVar11 * -0x18 + -8);
              lVar38 = *plVar19;
              *plVar19 = lVar38 + 1;
              if (lVar38 < 0) goto LAB_1011930e8;
              *(long **)(puVar6 + 0x3e00) = plVar19;
              lVar38 = plVar19[0x3f];
              if (*(long *)(lVar38 + 0x80) == 2) {
                uVar12 = *(ulong *)(lVar38 + 0x180) & 1;
joined_r0x000101192968:
                if (uVar12 != 0) {
LAB_10119277c:
                  lVar44 = *(long *)(param_2 + 0x4fa0);
                  auVar51 = FUN_100e8ed88(plVar31[4],plVar31[5],lVar44 + 0x30);
                  lVar38 = auVar51._8_8_;
                  lVar34 = 0;
                  lVar40 = *plVar31;
                  uVar23 = plVar31[1];
                  bVar20 = auVar51[7] >> 1;
                  uVar27 = auVar51._0_8_ & uVar23;
                  uVar16 = *(undefined8 *)(lVar40 + uVar27);
                  uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar20),
                                    CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar20),
                                             CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar20),
                                                      CONCAT14(-((byte)((ulong)uVar16 >> 0x20) ==
                                                                bVar20),CONCAT13(-((byte)((ulong)
                                                  uVar16 >> 0x18) == bVar20),
                                                  CONCAT12(-((byte)((ulong)uVar16 >> 0x10) == bVar20
                                                            ),CONCAT11(-((byte)((ulong)uVar16 >> 8)
                                                                        == bVar20),
                                                                       -((byte)uVar16 == bVar20)))))
                                                  ))) & 0x8080808080808080;
                  goto joined_r0x0001011927c0;
                }
              }
              else {
                if (*(long *)(lVar38 + 0x80) == 1) {
                  uVar12 = *(ulong *)(lVar38 + 0x208) & *(ulong *)(lVar38 + 0x180);
                  goto joined_r0x000101192968;
                }
                if (((uint)*(undefined8 *)(lVar38 + 0x2b8) >> 2 & 1) != 0) goto LAB_10119277c;
              }
              lVar38 = *(long *)(param_2 + 0x4fa0);
              if (*(long *)(lVar38 + 0x18) == -0x8000000000000000) {
LAB_101192980:
                uVar16 = *(undefined8 *)(lVar38 + 0x30);
                *(undefined8 *)(puVar6 + 0x3ea8) = *(undefined8 *)(lVar38 + 0x38);
                *(undefined8 *)(puVar6 + 0x3ea0) = uVar16;
                FUN_1037433c4(puVar6 + 0x1470,*(long *)(puVar6 + 0x3e00) + 0x10);
                *(undefined8 *)(puVar6 + 0x3a68) = *(undefined8 *)(puVar6 + 0x3ea8);
                *(undefined8 *)(puVar6 + 0x3a60) = *(undefined8 *)(puVar6 + 0x3ea0);
                *(undefined8 *)(puVar6 + 0x3c38) = *(undefined8 *)(puVar6 + 0x14e8);
                *(undefined8 *)(puVar6 + 0x3c30) = *(undefined8 *)(puVar6 + 0x14e0);
                *(undefined8 *)(puVar6 + 0x3c48) = *(undefined8 *)(puVar6 + 0x14f8);
                *(undefined8 *)(puVar6 + 0x3c40) = *(undefined8 *)(puVar6 + 0x14f0);
                *(undefined8 *)(puVar6 + 0x3c58) = *(undefined8 *)(puVar6 + 0x1508);
                *(undefined8 *)(puVar6 + 0x3c50) = *(undefined8 *)(puVar6 + 0x1500);
                *(undefined8 *)(puVar6 + 0x3bf8) = *(undefined8 *)(puVar6 + 0x14a8);
                *(undefined8 *)(puVar6 + 0x3bf0) = *(undefined8 *)(puVar6 + 0x14a0);
                *(undefined8 *)(puVar6 + 0x3c08) = *(undefined8 *)(puVar6 + 0x14b8);
                *(undefined8 *)(puVar6 + 0x3c00) = *(undefined8 *)(puVar6 + 0x14b0);
                *(undefined8 *)(puVar6 + 0x3c28) = *(undefined8 *)(puVar6 + 0x14d8);
                *(undefined8 *)(puVar6 + 0x3c20) = *(undefined8 *)(puVar6 + 0x14d0);
                *(undefined8 *)(puVar6 + 0x3c18) = *(undefined8 *)(puVar6 + 0x14c8);
                *(undefined8 *)(puVar6 + 0x3c10) = *(undefined8 *)(puVar6 + 0x14c0);
                *(undefined8 *)(puVar6 + 0x3be8) = *(undefined8 *)(puVar6 + 0x1498);
                *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + 0x1490);
                *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + 0x1488);
                *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + 0x1480);
                *(undefined8 *)(puVar6 + -0x1038) = *(undefined8 *)(puVar6 + 0x15b8);
                *(undefined8 *)(puVar6 + -0x1040) = *(undefined8 *)(puVar6 + 0x15b0);
                *(undefined8 *)(puVar6 + -0x1028) = *(undefined8 *)(puVar6 + 0x15c8);
                *(undefined8 *)(puVar6 + -0x1030) = *(undefined8 *)(puVar6 + 0x15c0);
                *(undefined8 *)(puVar6 + -0x1018) = *(undefined8 *)(puVar6 + 0x15d8);
                *(undefined8 *)(puVar6 + -0x1020) = *(undefined8 *)(puVar6 + 0x15d0);
                *(undefined8 *)(puVar6 + -0x1078) = *(undefined8 *)(puVar6 + 0x1578);
                *(undefined8 *)(puVar6 + -0x1080) = *(undefined8 *)(puVar6 + 0x1570);
                *(undefined8 *)(puVar6 + -0x1068) = *(undefined8 *)(puVar6 + 0x1588);
                *(undefined8 *)(puVar6 + -0x1070) = *(undefined8 *)(puVar6 + 0x1580);
                *(undefined8 *)(puVar6 + -0x1058) = *(undefined8 *)(puVar6 + 0x1598);
                *(undefined8 *)(puVar6 + -0x1060) = *(undefined8 *)(puVar6 + 0x1590);
                *(undefined8 *)(puVar6 + -0x1048) = *(undefined8 *)(puVar6 + 0x15a8);
                *(undefined8 *)(puVar6 + -0x1050) = *(undefined8 *)(puVar6 + 0x15a0);
                *(undefined8 *)(puVar6 + -0x10b8) = *(undefined8 *)(puVar6 + 0x1538);
                *(undefined8 *)(puVar6 + -0x10c0) = *(undefined8 *)(puVar6 + 0x1530);
                *(undefined8 *)(puVar6 + -0x10a8) = *(undefined8 *)(puVar6 + 0x1548);
                *(undefined8 *)(puVar6 + -0x10b0) = *(undefined8 *)(puVar6 + 0x1540);
                *(undefined8 *)(puVar6 + -0x1098) = *(undefined8 *)(puVar6 + 0x1558);
                *(undefined8 *)(puVar6 + -0x10a0) = *(undefined8 *)(puVar6 + 0x1550);
                *(undefined8 *)(puVar6 + -0x1088) = *(undefined8 *)(puVar6 + 0x1568);
                *(undefined8 *)(puVar6 + -0x1090) = *(undefined8 *)(puVar6 + 0x1560);
                param_3 = *(long **)(puVar6 + 0x3e00);
                uVar16 = *(undefined8 *)(puVar6 + 0x1470);
                lVar38 = *(long *)(puVar6 + 0x1478);
                *(undefined8 *)(puVar6 + -0x10d8) = *(undefined8 *)(puVar6 + 0x1518);
                *(undefined8 *)(puVar6 + -0x10e0) = *(undefined8 *)(puVar6 + 0x1510);
                *(undefined8 *)(puVar6 + -0x10c8) = *(undefined8 *)(puVar6 + 0x1528);
                *(undefined8 *)(puVar6 + -0x10d0) = *(undefined8 *)(puVar6 + 0x1520);
                uVar35 = extraout_x1_02;
              }
              else {
                pcVar4 = *(char **)(lVar38 + 0x20);
                param_3 = *(long **)(lVar38 + 0x28);
                __ZN10codex_core12codex_thread11CodexThread12rollout_path17h0bfa07925f939bf2E
                          (puVar6 + 0x3bd0,*(long *)(puVar6 + 0x3e00) + 0x10);
                lVar38 = *(long *)(puVar6 + 0x3bd0);
                if (lVar38 != -0x8000000000000000) {
                  pcVar32 = *(char **)(puVar6 + 0x3bd8);
                  if (*(long *)(puVar6 + 0x3be0) == 0) {
                    bVar7 = false;
                  }
                  else {
                    bVar7 = *pcVar32 == '/';
                  }
                  *(char **)(puVar6 + -0x10e0) = pcVar32;
                  *(long *)(puVar6 + -0x10d8) = *(long *)(puVar6 + 0x3be0);
                  puVar6[-0x10d0] = 6;
                  puVar6[-0x10a6] = bVar7;
                  *(undefined2 *)(puVar6 + -0x10a8) = 0x201;
                  if (param_3 == (long *)0x0) {
                    bVar7 = false;
                  }
                  else {
                    bVar7 = *pcVar4 == '/';
                  }
                  *(char **)(puVar6 + 0x1470) = pcVar4;
                  *(long **)(puVar6 + 0x1478) = param_3;
                  puVar6[0x1480] = 6;
                  puVar6[0x14aa] = bVar7;
                  *(undefined2 *)(puVar6 + 0x14a8) = 0x201;
                  iVar9 = FUN_10112a6c0(puVar6 + -0x10e0,puVar6 + 0x1470);
                  if (iVar9 != 0) {
                    if (lVar38 != 0) {
                      _free(pcVar32);
                    }
                    lVar38 = *(long *)(param_2 + 0x4fa0);
                    goto LAB_101192980;
                  }
                  if (lVar38 != 0) {
                    _free(pcVar32);
                  }
                }
                *(long *)(puVar6 + -0x10e0) = *(long *)(param_2 + 0x4fa0) + 0x30;
                *(undefined **)(puVar6 + -0x10d8) =
                     &
                     __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
                ;
                FUN_100f3f484(puVar6 + 0x1470,s_thread_1_is_already_running_with_108ac00a9,
                              puVar6 + -0x10e0);
                *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + 0x1478);
                *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + 0x1470);
                *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + 0x1480);
                lVar34 = **(long **)(puVar6 + 0x3e00);
                **(long **)(puVar6 + 0x3e00) = lVar34 + -1;
                LORelease();
                lVar38 = -0x7ffffffffffffff5;
                uVar35 = extraout_x1_05;
                if (lVar34 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(puVar6 + 0x3e00);
                  uVar35 = extraout_x1_06;
                }
                uVar16 = 0x8000000000000000;
              }
              if (iVar10 != 0) {
                if (*pcVar37 == '\0') {
                  *pcVar37 = '\x01';
                }
                else {
                  __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                            (pcVar37,uVar35,1000000000);
                }
                FUN_1060fa678(pcVar37,iVar10,pcVar37);
              }
              goto LAB_101193a58;
            }
          }
          bVar47 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar16 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar16 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar16 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar16 >> 8) ==
                                                                     -1),-((char)uVar16 == -1)))))))
                                      ),1);
          if ((bVar47 & 1) != 0) break;
          lVar34 = lVar34 + 8;
          uVar27 = uVar27 + lVar34 & uVar23;
          uVar16 = *(undefined8 *)(lVar40 + uVar27);
          uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar20),
                            CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar20),
                                     CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar20),
                                              CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar20),
                                                       CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                                 bVar20),CONCAT12(-((byte)((ulong)
                                                  uVar16 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)uVar16 >> 8) == bVar20),
                                                           -((byte)uVar16 == bVar20)))))))) &
                   0x8080808080808080;
        } while( true );
      }
      goto LAB_101192bcc;
    }
    bVar20 = *(byte *)(param_2 + 0x5060);
    if (bVar20 < 2) {
      if (bVar20 != 0) {
        func_0x000108a07af4(&UNK_10b216148);
        goto LAB_1011930e8;
      }
      uVar16 = *(undefined8 *)(param_2 + 0x4fb8);
      puVar21 = *(ulong **)(param_2 + 0x4fc0);
      plVar19 = *(long **)(param_2 + 0x4fc8);
      uVar12 = *puVar21;
      goto joined_r0x0001011923d8;
    }
    if (bVar20 != 3) {
      func_0x000108a07b10(&UNK_10b216148);
      goto LAB_1011930e8;
    }
LAB_1011926cc:
    plVar31 = (long *)0x4fd0;
    FUN_100510234(puVar6 + -0x10e0,param_2 + 0x4fd0,param_3);
    if (*(long *)(puVar6 + -0x10e0) == -0x7fffffffffffffdf) {
      *(undefined1 *)(param_2 + 0x5060) = 3;
      *param_1 = 0x8000000000000001;
      uVar24 = 4;
      goto LAB_101194fa0;
    }
    *(undefined8 *)(puVar6 + 0x14d8) = *(undefined8 *)(puVar6 + -0x1078);
    *(undefined8 *)(puVar6 + 0x14d0) = *(undefined8 *)(puVar6 + -0x1080);
    *(undefined8 *)(puVar6 + 0x14e8) = *(undefined8 *)(puVar6 + -0x1068);
    *(undefined8 *)(puVar6 + 0x14e0) = *(undefined8 *)(puVar6 + -0x1070);
    *(undefined8 *)(puVar6 + 0x14f8) = *(undefined8 *)(puVar6 + -0x1058);
    *(undefined8 *)(puVar6 + 0x14f0) = *(undefined8 *)(puVar6 + -0x1060);
    *(undefined8 *)(puVar6 + 0x1500) = *(undefined8 *)(puVar6 + -0x1050);
    *(undefined8 *)(puVar6 + 0x1498) = *(undefined8 *)(puVar6 + -0x10b8);
    *(undefined8 *)(puVar6 + 0x1490) = *(undefined8 *)(puVar6 + -0x10c0);
    *(undefined8 *)(puVar6 + 0x14a8) = *(undefined8 *)(puVar6 + -0x10a8);
    *(undefined8 *)(puVar6 + 0x14a0) = *(undefined8 *)(puVar6 + -0x10b0);
    *(undefined8 *)(puVar6 + 0x14b8) = *(undefined8 *)(puVar6 + -0x1098);
    *(undefined8 *)(puVar6 + 0x14b0) = *(undefined8 *)(puVar6 + -0x10a0);
    *(undefined8 *)(puVar6 + 0x14c8) = *(undefined8 *)(puVar6 + -0x1088);
    *(undefined8 *)(puVar6 + 0x14c0) = *(undefined8 *)(puVar6 + -0x1090);
    *(undefined8 *)(puVar6 + 0x1478) = *(undefined8 *)(puVar6 + -0x10d8);
    *(undefined8 *)(puVar6 + 0x1470) = *(undefined8 *)(puVar6 + -0x10e0);
    *(undefined8 *)(puVar6 + 0x1488) = *(undefined8 *)(puVar6 + -0x10c8);
    *(undefined8 *)(puVar6 + 0x1480) = *(undefined8 *)(puVar6 + -0x10d0);
    if (((*(char *)(param_2 + 0x5058) == '\x03') && (*(char *)(param_2 + 0x5050) == '\x03')) &&
       (*(char *)(param_2 + 0x5048) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 0x5008);
      if (*(long *)(param_2 + 0x5010) != 0) {
        (**(code **)(*(long *)(param_2 + 0x5010) + 0x18))(*(undefined8 *)(param_2 + 0x5018));
      }
    }
    if (*(long *)(puVar6 + 0x1470) == -0x7fffffffffffffe0) {
      plVar19 = *(long **)(puVar6 + 0x1478);
      *(long **)(puVar6 + 0x39c0) = plVar19;
      lVar34 = plVar19[0x44];
      lVar38 = -0x8000000000000000;
      if (*(long *)(lVar34 + 0x230) != -0x8000000000000000) {
        plVar31 = *(long **)(lVar34 + 0x260);
        lVar38 = *plVar31;
        *plVar31 = lVar38 + 1;
        if (lVar38 < 0) goto LAB_1011930e8;
        *(long **)(puVar6 + 0x3dc0) = plVar31;
        func_0x000100025ae8(puVar6 + 0x3d20,lVar34 + 0x230);
        func_0x000100025ae8(puVar6 + 0x3e00,lVar34 + 0x248);
        lVar38 = *(long *)(puVar6 + 0x3d20);
        *(undefined8 *)(puVar6 + -0x10d8) = *(undefined8 *)(puVar6 + 0x3d30);
        *(undefined8 *)(puVar6 + -0x10e0) = *(undefined8 *)(puVar6 + 0x3d28);
        *(undefined8 *)(puVar6 + -0x10c8) = *(undefined8 *)(puVar6 + 0x3e08);
        *(undefined8 *)(puVar6 + -0x10d0) = *(undefined8 *)(puVar6 + 0x3e00);
        *(undefined8 *)(puVar6 + -0x10c0) = *(undefined8 *)(puVar6 + 0x3e10);
        plVar19 = *(long **)(puVar6 + 0x39c0);
      }
      lVar34 = *plVar19;
      *plVar19 = lVar34 + -1;
      LORelease();
      if (lVar34 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(puVar6 + 0x39c0);
      }
      *(undefined8 *)(puVar6 + 0x3ea8) = *(undefined8 *)(puVar6 + -0x10d8);
      *(undefined8 *)(puVar6 + 0x3ea0) = *(undefined8 *)(puVar6 + -0x10e0);
      *(undefined8 *)(puVar6 + 0x3eb8) = *(undefined8 *)(puVar6 + -0x10c8);
      *(undefined8 *)(puVar6 + 0x3eb0) = *(undefined8 *)(puVar6 + -0x10d0);
      *(undefined8 *)(puVar6 + 0x3ec0) = *(undefined8 *)(puVar6 + -0x10c0);
      if (lVar38 == -0x7fffffffffffffff) {
        lVar38 = -0x8000000000000000;
      }
      else {
        *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + 0x3ea8);
        *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + 0x3ea0);
        *(undefined8 *)(puVar6 + 0x3be8) = *(undefined8 *)(puVar6 + 0x3eb8);
        *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + 0x3eb0);
        *(undefined8 *)(puVar6 + 0x3bf0) = *(undefined8 *)(puVar6 + 0x3ec0);
      }
    }
    else {
      FUN_100df5738(puVar6 + 0x1470);
      lVar38 = -0x8000000000000000;
    }
    goto LAB_101192ca0;
  }
  if (bVar20 < 7) {
    if (bVar20 == 5) goto LAB_101193348;
    puVar39 = (undefined1 *)(param_2 + 0x5470);
    bVar20 = *(byte *)(param_2 + 0x5470);
    uVar15 = (uint)bVar20;
    if (bVar20 < 3) {
      if (bVar20 != 0) goto LAB_10119469c;
      uVar16 = *(undefined8 *)(param_2 + 0x5000);
      goto LAB_101193478;
    }
    if (bVar20 == 3) goto LAB_1011934f8;
    if (bVar20 != 4) goto LAB_101193e98;
LAB_101193d34:
    FUN_100fd5070(puVar6 + 0x1470,param_2 + 0x5478,param_3);
    lVar34 = *(long *)(puVar6 + 0x1470);
    if (lVar34 != 0) {
      *(undefined1 **)(puVar6 + -0x1250) = puVar39;
      plVar31 = *(long **)(puVar6 + 0x1478);
      uVar15 = *(uint *)(puVar6 + 0x1480);
      if ((*(char *)(param_2 + 0x54d0) == '\x03') && (*(char *)(param_2 + 0x54c8) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_2 + 0x5488);
        if (*(long *)(param_2 + 0x5490) != 0) {
          (**(code **)(*(long *)(param_2 + 0x5490) + 0x18))(*(undefined8 *)(param_2 + 0x5498));
        }
      }
      *(long **)(puVar6 + -0x1238) = param_3;
      *(undefined8 *)(puVar6 + -0x1258) = *(undefined8 *)(param_2 + 0x50a8);
      uVar16 = *(undefined8 *)(param_2 + 0x50a0);
      *(ulong *)(puVar6 + -0x1268) = (ulong)uVar15;
      *(undefined8 *)(puVar6 + -0x1260) = uVar16;
      uVar11 = FUN_100e8ed88(plVar31[4],plVar31[5],param_2 + 0x50a0);
      lVar38 = 0;
      lVar40 = *plVar31;
      uVar23 = plVar31[1];
      bVar20 = (byte)(uVar11 >> 0x38);
      bVar47 = bVar20 >> 1;
      uVar27 = uVar11 & uVar23;
      uVar16 = *(undefined8 *)(lVar40 + uVar27);
      uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar47),
                        CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar47),
                                 CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar47),
                                          CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar47),
                                                   CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                             bVar47),CONCAT12(-((byte)((ulong)uVar16
                                                                                      >> 0x10) ==
                                                                               bVar47),CONCAT11(-((
                                                  byte)((ulong)uVar16 >> 8) == bVar47),
                                                  -((byte)uVar16 == bVar47)))))))) &
               0x8080808080808080;
      do {
        if (uVar12 == 0) {
LAB_101193e38:
          bVar48 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar16 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar16 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar16 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar16 >> 8) ==
                                                                     -1),-((char)uVar16 == -1)))))))
                                      ),1);
          if ((bVar48 & 1) == 0) goto code_r0x000101193e48;
          if (plVar31[2] == 0) {
            __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h2094563c11e227beE
                      (plVar31,1,plVar31 + 4,1);
          }
          *(undefined1 *)(param_2 + 0x5474) = 0;
          uVar16 = *(undefined8 *)(param_2 + 0x5060);
          uVar13 = *(undefined8 *)(param_2 + 0x5078);
          uVar35 = *(undefined8 *)(param_2 + 0x5070);
          *(undefined8 *)(puVar6 + 0x3dc8) = *(undefined8 *)(param_2 + 0x5068);
          *(undefined8 *)(puVar6 + 0x3dc0) = uVar16;
          *(undefined8 *)(puVar6 + 0x3dd8) = uVar13;
          *(undefined8 *)(puVar6 + 0x3dd0) = uVar35;
          uVar16 = *(undefined8 *)(param_2 + 0x5080);
          uVar13 = *(undefined8 *)(param_2 + 0x5098);
          uVar35 = *(undefined8 *)(param_2 + 0x5090);
          *(undefined8 *)(puVar6 + 0x3de8) = *(undefined8 *)(param_2 + 0x5088);
          *(undefined8 *)(puVar6 + 0x3de0) = uVar16;
          *(undefined8 *)(puVar6 + 0x3df8) = uVar13;
          *(undefined8 *)(puVar6 + 0x3df0) = uVar35;
          FUN_1013ee788(puVar6 + -0x10e0,param_2 + 0x5300);
          lVar38 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x53f0) != -0x8000000000000000) {
            uVar16 = *(undefined8 *)(param_2 + 0x53f8);
            lVar38 = *(long *)(param_2 + 0x5400);
            if (lVar38 == 0) {
              lVar40 = 1;
            }
            else {
              *(long *)(puVar6 + -0x1270) = lVar34;
              lVar40 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar38,1);
              lVar34 = *(long *)(puVar6 + -0x1270);
              if (lVar40 == 0) {
                func_0x0001087c9084(1,lVar38);
                goto LAB_1011930e8;
              }
            }
            *(long *)(puVar6 + -0x1270) = lVar40;
            _memcpy(lVar40,uVar16,lVar38);
          }
          *(undefined1 *)(param_2 + 0x5473) = 0;
          uVar16 = *(undefined8 *)(param_2 + 0x50d0);
          uVar13 = *(undefined8 *)(param_2 + 0x50e8);
          uVar35 = *(undefined8 *)(param_2 + 0x50e0);
          *(undefined8 *)(puVar6 + 0x1630) = *(undefined8 *)(param_2 + 0x50d8);
          *(undefined8 *)(puVar6 + 0x1628) = uVar16;
          *(undefined8 *)(puVar6 + 0x1640) = uVar13;
          *(undefined8 *)(puVar6 + 0x1638) = uVar35;
          uVar16 = *(undefined8 *)(param_2 + 0x50f0);
          uVar13 = *(undefined8 *)(param_2 + 0x5108);
          uVar35 = *(undefined8 *)(param_2 + 0x5100);
          *(undefined8 *)(puVar6 + 0x1650) = *(undefined8 *)(param_2 + 0x50f8);
          *(undefined8 *)(puVar6 + 0x1648) = uVar16;
          *(undefined8 *)(puVar6 + 0x1660) = uVar13;
          *(undefined8 *)(puVar6 + 0x1658) = uVar35;
          uVar16 = *(undefined8 *)(param_2 + 0x50b0);
          uVar13 = *(undefined8 *)(param_2 + 0x50c8);
          uVar35 = *(undefined8 *)(param_2 + 0x50c0);
          *(undefined8 *)(puVar6 + 0x1610) = *(undefined8 *)(param_2 + 0x50b8);
          *(undefined8 *)(puVar6 + 0x1608) = uVar16;
          *(undefined8 *)(puVar6 + 0x1620) = uVar13;
          *(undefined8 *)(puVar6 + 0x1618) = uVar35;
          *(undefined8 *)(puVar6 + 0x16a8) = 0;
          *(undefined8 *)(puVar6 + 0x16b8) = 0;
          *(undefined8 *)(puVar6 + 0x16b0) = 0;
          puVar6[0x16c0] = 0;
          *(undefined8 *)(puVar6 + 0x1690) = *(undefined8 *)(puVar6 + 0x3de8);
          *(undefined8 *)(puVar6 + 0x1688) = *(undefined8 *)(puVar6 + 0x3de0);
          *(undefined8 *)(puVar6 + 0x16a0) = *(undefined8 *)(puVar6 + 0x3df8);
          *(undefined8 *)(puVar6 + 0x1698) = *(undefined8 *)(puVar6 + 0x3df0);
          *(undefined8 *)(puVar6 + 0x1670) = *(undefined8 *)(puVar6 + 0x3dc8);
          *(undefined8 *)(puVar6 + 0x1668) = *(undefined8 *)(puVar6 + 0x3dc0);
          *(undefined8 *)(puVar6 + 0x1680) = *(undefined8 *)(puVar6 + 0x3dd8);
          *(undefined8 *)(puVar6 + 0x1678) = *(undefined8 *)(puVar6 + 0x3dd0);
          _memcpy(puVar6 + 0x1480,puVar6 + -0x10e0,0x170);
          *(undefined8 *)(puVar6 + 0x1478) = 1;
          *(undefined8 *)(puVar6 + 0x1470) = 1;
          *(long *)(puVar6 + 0x15f0) = lVar38;
          *(undefined8 *)(puVar6 + 0x15f8) = *(undefined8 *)(puVar6 + -0x1270);
          *(long *)(puVar6 + 0x1600) = lVar38;
          *(undefined8 *)(puVar6 + 0x16c8) = 2;
          *(undefined8 *)(puVar6 + 0x16d0) = 0;
          param_3 = (long *)_malloc(0x268);
          if (param_3 == (long *)0x0) {
            *(long *)(puVar6 + -0x1270) = lVar34;
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x268);
          }
          else {
            _memcpy(param_3,puVar6 + 0x1470,0x268);
            lVar38 = *param_3;
            *param_3 = lVar38 + 1;
            if (-1 < lVar38) {
              plVar19 = (long *)*plVar31;
              uVar12 = plVar31[1];
              uVar11 = uVar12 & uVar11;
              lVar38 = *(long *)((long)plVar19 + uVar11);
              uVar23 = CONCAT17(-(lVar38 < 0),
                                CONCAT16(-((char)((ulong)lVar38 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar38 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar38 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar38 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar38 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar38 >> 8) < '\0'),
                                                           -((char)lVar38 < '\0'))))))));
              lVar38 = *(long *)(puVar6 + -0x1260);
              lVar40 = *(long *)(puVar6 + -0x1258);
              if (uVar23 == 0) {
                lVar44 = 8;
                do {
                  uVar11 = uVar11 + lVar44 & uVar12;
                  lVar43 = *(long *)((long)plVar19 + uVar11);
                  uVar23 = CONCAT17(-(lVar43 < 0),
                                    CONCAT16(-((char)((ulong)lVar43 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar43 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar43 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar43 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar43 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar43 >> 8) <
                                                                     '\0'),-((char)lVar43 < '\0'))))
                                                  ))));
                  lVar44 = lVar44 + 8;
                } while (uVar23 == 0);
              }
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar27 = uVar11 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar12;
              uVar23 = (ulong)*(char *)((long)plVar19 + uVar27);
              if (-1 < *(char *)((long)plVar19 + uVar27)) {
                lVar44 = *plVar19;
                uVar23 = CONCAT17(-(lVar44 < 0),
                                  CONCAT16(-((char)((ulong)lVar44 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar44 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar44 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar44 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar44 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar44 >> 8) < '\0'),
                                                           -((char)lVar44 < '\0'))))))));
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar27 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                uVar23 = (ulong)*(byte *)((long)plVar19 + uVar27);
              }
              *(byte *)((long)plVar19 + uVar27) = bVar20 >> 1;
              *(byte *)((long)plVar19 + (uVar27 - 8 & uVar12) + 8) = bVar20 >> 1;
              plVar31[2] = plVar31[2] - (uVar23 & 1);
              plVar19[uVar27 * -3 + -3] = lVar38;
              plVar19[uVar27 * -3 + -2] = lVar40;
              plVar19[uVar27 * -3 + -1] = (long)param_3;
              plVar31[3] = plVar31[3] + 1;
              uVar16 = *(undefined8 *)(param_2 + 0x50a0);
              *(undefined8 *)(puVar6 + -0x10f8) = *(undefined8 *)(param_2 + 0x50a8);
              *(undefined8 *)(puVar6 + -0x1100) = uVar16;
              *(undefined1 *)(param_2 + 0x5475) = 0;
              lVar40 = *(long *)(param_2 + 0x5300);
              lVar38 = *(long *)(param_2 + 0x5308);
              uVar16 = *(undefined8 *)(param_2 + 0x5310);
              *(undefined8 *)(puVar6 + -0x1178) = *(undefined8 *)(param_2 + 0x5318);
              *(undefined8 *)(puVar6 + -0x1180) = uVar16;
              *(undefined8 *)(puVar6 + -0x1170) = *(undefined8 *)(param_2 + 0x5320);
              _memcpy(puVar6 + 0x3ea0,param_2 + 0x5328,0x148);
              __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
                        (lVar34,*(undefined8 *)(puVar6 + -0x1268));
              *(undefined1 *)(param_2 + 0x5475) = 0;
              if (*(char *)(param_2 + 0x5472) == '\x01') {
                lVar34 = *(long *)(param_2 + 0x5110);
                goto joined_r0x0001011945c8;
              }
              goto LAB_101193768;
            }
          }
          goto LAB_1011930e8;
        }
LAB_101193e00:
        uVar5 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        plVar19 = (long *)(lVar40 + -0x18 +
                          (uVar27 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar23) *
                          -0x18);
        if (plVar19[1] == *(long *)(puVar6 + -0x1258) && *plVar19 == *(long *)(puVar6 + -0x1260))
        goto LAB_101193e6c;
        uVar12 = uVar12 - 1 & uVar12;
      } while( true );
    }
    uVar24 = 4;
LAB_101193524:
    *puVar39 = uVar24;
    goto LAB_101193ed0;
  }
  if (bVar20 == 7) {
    bVar20 = *(byte *)(param_2 + 0x4fd0);
    if (1 < bVar20) {
      if (bVar20 == 3) {
        auVar51 = *(undefined1 (*) [16])(param_2 + 0x4fc0);
        goto LAB_101194b40;
      }
      func_0x000108a07b10(&UNK_10b2158f8);
      goto LAB_1011930e8;
    }
    if (bVar20 != 0) {
      func_0x000108a07af4(&UNK_10b2158f8);
      goto LAB_1011930e8;
    }
LAB_101192404:
    *(long *)(param_2 + 0x4fa8) = *(long *)(param_2 + 0x4fa0);
    lVar38 = *(long *)(*(long *)(*(long *)(param_2 + 0x4fa0) + 0x210) + 0x3c0);
    plVar19 = *(long **)(lVar38 + 0x18);
    plVar31 = plVar19 + *(long *)(lVar38 + 0x20) * 2;
    *(long **)(param_2 + 0x4fb0) = plVar19;
    *(long **)(param_2 + 0x4fb8) = plVar31;
    while (plVar19 != plVar31) {
      *(long **)(param_2 + 0x4fb0) = plVar19 + 2;
      lVar38 = *(long *)(*(long *)(param_2 + 0x4fa8) + 0x210);
      auVar51 = (**(code **)(plVar19[1] + 0x20))
                          (*plVar19 + (*(long *)(plVar19[1] + 0x10) - 1U & 0xfffffffffffffff0) +
                           0x10,lVar38 + 0x150,lVar38 + 0x1a8);
      *(undefined1 (*) [16])(param_2 + 0x4fc0) = auVar51;
LAB_101194b40:
      uVar12 = (**(code **)(auVar51._8_8_ + 0x18))(auVar51._0_8_,param_3);
      if ((uVar12 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x4fd0) = 3;
        *param_1 = 0x8000000000000001;
        uVar24 = 7;
        goto LAB_101194fa0;
      }
      uVar16 = *(undefined8 *)(param_2 + 0x4fc0);
      puVar36 = *(undefined8 **)(param_2 + 0x4fc8);
      pcVar18 = (code *)*puVar36;
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(uVar16);
      }
      if (puVar36[1] != 0) {
        _free(uVar16);
      }
      plVar31 = *(long **)(param_2 + 0x4fb8);
      plVar19 = *(long **)(param_2 + 0x4fb0);
    }
    *(undefined1 *)(param_2 + 0x4fd0) = 1;
    *(long *)(param_2 + 0x4fa0) = *(long *)(param_2 + 0x4f70) + 0x10;
    *(undefined1 *)(param_2 + 0x4fb8) = 0;
  }
  auVar51 = func_0x0001004f31dc(param_2 + 0x4fa0,param_3);
  if ((auVar51._0_8_ & 1) != 0) {
    *param_1 = 0x8000000000000001;
    uVar24 = 8;
    goto LAB_101194fa0;
  }
  if (*(char *)(param_2 + 0x4fb8) == '\x03') {
    uVar16 = *(undefined8 *)(param_2 + 0x4fa8);
    puVar36 = *(undefined8 **)(param_2 + 0x4fb0);
    pcVar18 = (code *)*puVar36;
    if (pcVar18 != (code *)0x0) {
      (*pcVar18)(uVar16);
    }
    if (puVar36[1] != 0) {
      _free(uVar16);
    }
  }
  if (auVar51._8_8_ != 0) {
    *(long *)(puVar6 + -0x1180) = auVar51._8_8_;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b629bd0 - 1 < 2 ||
         ((bRam000000010b629bd0 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
                             ), cVar8 != '\0')))))) &&
       (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
                           ), (uVar12 & 1) != 0)) {
      *(undefined1 **)(puVar6 + 0x3bd0) = puVar6 + -0x1180;
      *(code **)(puVar6 + 0x3bd8) =
           __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
      ;
      *(char **)(puVar6 + 0x3ea0) = s__failed_to_apply_goal_resume_run_108ac00e5;
      *(undefined1 **)(puVar6 + 0x3ea8) = puVar6 + 0x3bd0;
      *(undefined1 **)(puVar6 + 0x3a60) = puVar6 + 0x3ea0;
      *(undefined **)(puVar6 + 0x3a68) = &UNK_10b208fd0;
      *(undefined8 *)(puVar6 + -0x10e0) = 1;
      *(undefined1 **)(puVar6 + -0x10d8) = puVar6 + 0x3a60;
      *(undefined8 *)(puVar6 + -0x10d0) = 1;
      *(long *)(puVar6 + -0x10c8) =
           ___ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
           + 0x30;
      FUN_100510964(puVar6 + -0x10e0);
    }
    else {
      lVar38 = 
      ___ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar16 = *(undefined8 *)
                  (
                  ___ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
                  + 0x20);
        uVar35 = *(undefined8 *)
                  (
                  ___ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
                  + 0x28);
        *(undefined8 *)(puVar6 + 0x3ea0) = 2;
        *(undefined8 *)(puVar6 + 0x3ea8) = uVar16;
        *(undefined8 *)(puVar6 + 0x3eb0) = uVar35;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,puVar6 + 0x3ea0);
        if (iVar10 != 0) {
          *(undefined1 **)(puVar6 + 0x3a60) = puVar6 + -0x1180;
          *(code **)(puVar6 + 0x3a68) =
               __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
          ;
          *(char **)(puVar6 + 0x3d20) = s__failed_to_apply_goal_resume_run_108ac00e5;
          *(undefined1 **)(puVar6 + 0x3d28) = puVar6 + 0x3a60;
          *(undefined1 **)(puVar6 + 0x3dc0) = puVar6 + 0x3d20;
          *(undefined **)(puVar6 + 0x3dc8) = &UNK_10b208fd0;
          *(undefined8 *)(puVar6 + -0x10e0) = 1;
          *(undefined1 **)(puVar6 + -0x10d8) = puVar6 + 0x3dc0;
          *(undefined8 *)(puVar6 + -0x10d0) = 1;
          *(long *)(puVar6 + -0x10c8) =
               ___ZN10codex_core14thread_manager18ThreadManagerState24spawn_thread_with_source28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h458db525d83121d8E
               + 0x30;
          *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + 0x3ea8);
          *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + 0x3ea0);
          *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + 0x3eb0);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar38,puVar2,puVar1,puVar6 + 0x3bd0,puVar6 + -0x10e0);
        }
      }
    }
    (**(code **)**(undefined8 **)(puVar6 + -0x1180))();
  }
LAB_101194dfc:
  uVar16 = *(undefined8 *)(param_2 + 0x4e00);
  lVar38 = *(long *)(param_2 + 0x4e08);
  uVar13 = *(undefined8 *)(param_2 + 0x4e68);
  uVar35 = *(undefined8 *)(param_2 + 0x4e60);
  uVar14 = *(undefined8 *)(param_2 + 0x4e70);
  uVar42 = *(undefined8 *)(param_2 + 0x4e88);
  uVar41 = *(undefined8 *)(param_2 + 0x4e80);
  *(undefined8 *)(puVar6 + 0x3c38) = *(undefined8 *)(param_2 + 0x4e78);
  *(undefined8 *)(puVar6 + 0x3c30) = uVar14;
  *(undefined8 *)(puVar6 + 0x3c48) = uVar42;
  *(undefined8 *)(puVar6 + 0x3c40) = uVar41;
  uVar14 = *(undefined8 *)(param_2 + 0x4e90);
  *(undefined8 *)(puVar6 + 0x3c58) = *(undefined8 *)(param_2 + 0x4e98);
  *(undefined8 *)(puVar6 + 0x3c50) = uVar14;
  uVar41 = *(undefined8 *)(param_2 + 0x4e28);
  uVar14 = *(undefined8 *)(param_2 + 20000);
  uVar42 = *(undefined8 *)(param_2 + 0x4e30);
  uVar46 = *(undefined8 *)(param_2 + 0x4e48);
  uVar45 = *(undefined8 *)(param_2 + 0x4e40);
  *(undefined8 *)(puVar6 + 0x3bf8) = *(undefined8 *)(param_2 + 0x4e38);
  *(undefined8 *)(puVar6 + 0x3bf0) = uVar42;
  *(undefined8 *)(puVar6 + 0x3c08) = uVar46;
  *(undefined8 *)(puVar6 + 0x3c00) = uVar45;
  uVar45 = *(undefined8 *)(param_2 + 0x4e58);
  uVar42 = *(undefined8 *)(param_2 + 0x4e50);
  *(undefined8 *)(puVar6 + 0x3c28) = uVar13;
  *(undefined8 *)(puVar6 + 0x3c20) = uVar35;
  *(undefined8 *)(puVar6 + 0x3c18) = uVar45;
  *(undefined8 *)(puVar6 + 0x3c10) = uVar42;
  uVar13 = *(undefined8 *)(param_2 + 0x4e18);
  uVar35 = *(undefined8 *)(param_2 + 0x4e10);
  *(undefined8 *)(puVar6 + 0x3be8) = uVar41;
  *(undefined8 *)(puVar6 + 0x3be0) = uVar14;
  *(undefined8 *)(puVar6 + 0x3bd8) = uVar13;
  *(undefined8 *)(puVar6 + 0x3bd0) = uVar35;
  uVar13 = *(undefined8 *)(param_2 + 0x4f38);
  uVar35 = *(undefined8 *)(param_2 + 0x4f30);
  uVar14 = *(undefined8 *)(param_2 + 0x4f40);
  uVar42 = *(undefined8 *)(param_2 + 0x4f58);
  uVar41 = *(undefined8 *)(param_2 + 0x4f50);
  *(undefined8 *)(puVar6 + -0x1038) = *(undefined8 *)(param_2 + 0x4f48);
  *(undefined8 *)(puVar6 + -0x1040) = uVar14;
  *(undefined8 *)(puVar6 + -0x1028) = uVar42;
  *(undefined8 *)(puVar6 + -0x1030) = uVar41;
  uVar14 = *(undefined8 *)(param_2 + 0x4f60);
  *(undefined8 *)(puVar6 + -0x1018) = *(undefined8 *)(param_2 + 0x4f68);
  *(undefined8 *)(puVar6 + -0x1020) = uVar14;
  uVar41 = *(undefined8 *)(param_2 + 0x4ef8);
  uVar14 = *(undefined8 *)(param_2 + 0x4ef0);
  uVar42 = *(undefined8 *)(param_2 + 0x4f00);
  uVar46 = *(undefined8 *)(param_2 + 0x4f18);
  uVar45 = *(undefined8 *)(param_2 + 0x4f10);
  *(undefined8 *)(puVar6 + -0x1078) = *(undefined8 *)(param_2 + 0x4f08);
  *(undefined8 *)(puVar6 + -0x1080) = uVar42;
  *(undefined8 *)(puVar6 + -0x1068) = uVar46;
  *(undefined8 *)(puVar6 + -0x1070) = uVar45;
  uVar42 = *(undefined8 *)(param_2 + 0x4f20);
  *(undefined8 *)(puVar6 + -0x1058) = *(undefined8 *)(param_2 + 0x4f28);
  *(undefined8 *)(puVar6 + -0x1060) = uVar42;
  *(undefined8 *)(puVar6 + -0x1048) = uVar13;
  *(undefined8 *)(puVar6 + -0x1050) = uVar35;
  uVar13 = *(undefined8 *)(param_2 + 0x4eb8);
  uVar35 = *(undefined8 *)(param_2 + 0x4eb0);
  uVar42 = *(undefined8 *)(param_2 + 0x4ec0);
  uVar46 = *(undefined8 *)(param_2 + 0x4ed8);
  uVar45 = *(undefined8 *)(param_2 + 0x4ed0);
  *(undefined8 *)(puVar6 + -0x10b8) = *(undefined8 *)(param_2 + 0x4ec8);
  *(undefined8 *)(puVar6 + -0x10c0) = uVar42;
  *(undefined8 *)(puVar6 + -0x10a8) = uVar46;
  *(undefined8 *)(puVar6 + -0x10b0) = uVar45;
  uVar42 = *(undefined8 *)(param_2 + 0x4ee0);
  *(undefined8 *)(puVar6 + -0x1098) = *(undefined8 *)(param_2 + 0x4ee8);
  *(undefined8 *)(puVar6 + -0x10a0) = uVar42;
  *(undefined8 *)(puVar6 + -0x1088) = uVar41;
  *(undefined8 *)(puVar6 + -0x1090) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x4ea0);
  *(undefined8 *)(puVar6 + -0x10d8) = *(undefined8 *)(param_2 + 0x4ea8);
  *(undefined8 *)(puVar6 + -0x10e0) = uVar14;
  *(undefined8 *)(puVar6 + -0x10c8) = uVar13;
  *(undefined8 *)(puVar6 + -0x10d0) = uVar35;
  param_3 = *(long **)(param_2 + 0x4f70);
  uVar35 = *(undefined8 *)(param_2 + 0x4f78);
  *(undefined8 *)(puVar6 + 0x3a68) = *(undefined8 *)(param_2 + 0x4f80);
  *(undefined8 *)(puVar6 + 0x3a60) = uVar35;
  *(undefined2 *)(param_2 + 0x4f9a) = 0;
  *(undefined2 *)(param_2 + 0x4f8e) = 0;
  *(undefined1 *)(param_2 + 0x4f9c) = 0;
  lVar40 = *(long *)(param_2 + 0x4d60);
  lVar34 = *(long *)(param_2 + 0x4d68);
  if (lVar34 != 0) {
    puVar36 = (undefined8 *)(lVar40 + 0x20);
    do {
      if (puVar36[-4] != 0) {
        _free(puVar36[-3]);
      }
      if (puVar36[-1] != 0) {
        _free(*puVar36);
      }
      puVar36 = puVar36 + 6;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
  }
  if (*(long *)(param_2 + 0x4d58) != 0) {
    _free(lVar40);
  }
  *(undefined8 *)(param_2 + 0x4f90) = 0;
  *(undefined2 *)(param_2 + 0x4f98) = 0;
  goto LAB_101194f1c;
code_r0x000101193e48:
  lVar38 = lVar38 + 8;
  uVar27 = uVar27 + lVar38 & uVar23;
  uVar16 = *(undefined8 *)(lVar40 + uVar27);
  uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar47),
                    CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar47),
                             CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar47),
                                      CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar47),
                                               CONCAT13(-((byte)((ulong)uVar16 >> 0x18) == bVar47),
                                                        CONCAT12(-((byte)((ulong)uVar16 >> 0x10) ==
                                                                  bVar47),CONCAT11(-((byte)((ulong)
                                                  uVar16 >> 8) == bVar47),-((byte)uVar16 == bVar47))
                                                  )))))) & 0x8080808080808080;
  if (uVar12 != 0) goto LAB_101193e00;
  goto LAB_101193e38;
LAB_101193e6c:
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
            (lVar34,*(undefined8 *)(puVar6 + -0x1268));
  *(long *)(param_2 + 0x5478) = param_2 + 0x5060;
  *(undefined1 *)(param_2 + 0x5481) = 0;
  param_3 = *(long **)(puVar6 + -0x1238);
  puVar39 = *(undefined1 **)(puVar6 + -0x1250);
LAB_101193e98:
  *(undefined1 **)(puVar6 + -0x1250) = puVar39;
  func_0x0001005c189c(puVar6 + 0x1470,param_2 + 0x5478,*param_3);
  lVar38 = *(long *)(puVar6 + 0x1470);
  if (lVar38 == -0x7fffffffffffffdf) {
    **(undefined1 **)(puVar6 + -0x1250) = 5;
  }
  else {
    *(undefined8 *)(puVar6 + 0x3e68) = *(undefined8 *)(puVar6 + 0x14e0);
    *(undefined8 *)(puVar6 + 0x3e60) = *(undefined8 *)(puVar6 + 0x14d8);
    *(undefined8 *)(puVar6 + 0x3e78) = *(undefined8 *)(puVar6 + 0x14f0);
    *(undefined8 *)(puVar6 + 0x3e70) = *(undefined8 *)(puVar6 + 0x14e8);
    *(undefined8 *)(puVar6 + 0x3e88) = *(undefined8 *)(puVar6 + 0x1500);
    *(undefined8 *)(puVar6 + 16000) = *(undefined8 *)(puVar6 + 0x14f8);
    *(undefined8 *)(puVar6 + 0x3e28) = *(undefined8 *)(puVar6 + 0x14a0);
    *(undefined8 *)(puVar6 + 0x3e20) = *(undefined8 *)(puVar6 + 0x1498);
    *(undefined8 *)(puVar6 + 0x3e38) = *(undefined8 *)(puVar6 + 0x14b0);
    *(undefined8 *)(puVar6 + 0x3e30) = *(undefined8 *)(puVar6 + 0x14a8);
    *(undefined8 *)(puVar6 + 0x3e58) = *(undefined8 *)(puVar6 + 0x14d0);
    *(undefined8 *)(puVar6 + 0x3e50) = *(undefined8 *)(puVar6 + 0x14c8);
    *(undefined8 *)(puVar6 + 0x3e48) = *(undefined8 *)(puVar6 + 0x14c0);
    *(undefined8 *)(puVar6 + 0x3e40) = *(undefined8 *)(puVar6 + 0x14b8);
    *(undefined8 *)(puVar6 + 0x3e18) = *(undefined8 *)(puVar6 + 0x1490);
    *(undefined8 *)(puVar6 + 0x3e10) = *(undefined8 *)(puVar6 + 0x1488);
    *(undefined8 *)(puVar6 + 0x3e08) = *(undefined8 *)(puVar6 + 0x1480);
    *(undefined8 *)(puVar6 + 0x3e00) = *(undefined8 *)(puVar6 + 0x1478);
    FUN_100e7aab8(param_2 + 0x5478);
    if (lVar38 != -0x7fffffffffffffe0) {
      *(undefined8 *)(puVar6 + 0x14d0) = *(undefined8 *)(puVar6 + 0x3e58);
      *(undefined8 *)(puVar6 + 0x14c8) = *(undefined8 *)(puVar6 + 0x3e50);
      *(undefined8 *)(puVar6 + 0x14e0) = *(undefined8 *)(puVar6 + 0x3e68);
      *(undefined8 *)(puVar6 + 0x14d8) = *(undefined8 *)(puVar6 + 0x3e60);
      *(undefined8 *)(puVar6 + 0x14f0) = *(undefined8 *)(puVar6 + 0x3e78);
      *(undefined8 *)(puVar6 + 0x14e8) = *(undefined8 *)(puVar6 + 0x3e70);
      *(undefined8 *)(puVar6 + 0x1500) = *(undefined8 *)(puVar6 + 0x3e88);
      *(undefined8 *)(puVar6 + 0x14f8) = *(undefined8 *)(puVar6 + 16000);
      *(undefined8 *)(puVar6 + 0x1490) = *(undefined8 *)(puVar6 + 0x3e18);
      *(undefined8 *)(puVar6 + 0x1488) = *(undefined8 *)(puVar6 + 0x3e10);
      *(undefined8 *)(puVar6 + 0x14a0) = *(undefined8 *)(puVar6 + 0x3e28);
      *(undefined8 *)(puVar6 + 0x1498) = *(undefined8 *)(puVar6 + 0x3e20);
      *(undefined8 *)(puVar6 + 0x14b0) = *(undefined8 *)(puVar6 + 0x3e38);
      *(undefined8 *)(puVar6 + 0x14a8) = *(undefined8 *)(puVar6 + 0x3e30);
      *(undefined8 *)(puVar6 + 0x14c0) = *(undefined8 *)(puVar6 + 0x3e48);
      *(undefined8 *)(puVar6 + 0x14b8) = *(undefined8 *)(puVar6 + 0x3e40);
      *(long *)(puVar6 + 0x1470) = lVar38;
      *(undefined8 *)(puVar6 + 0x1480) = *(undefined8 *)(puVar6 + 0x3e08);
      *(undefined8 *)(puVar6 + 0x1478) = *(undefined8 *)(puVar6 + 0x3e00);
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b629bb8 - 1 < 2 ||
           ((bRam000000010b629bb8 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
                               ), cVar8 != '\0')))) &&
          (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
                              ), (uVar12 & 1) != 0)))) {
        *(long *)(puVar6 + -0x10e0) = param_2 + 0x50a0;
        *(undefined **)(puVar6 + -0x10d8) =
             &
             __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
        ;
        *(undefined1 **)(puVar6 + -0x10d0) = puVar6 + 0x1470;
        *(code **)(puVar6 + -0x10c8) =
             __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
        ;
        *(char **)(puVar6 + -0x1150) = s__failed_to_shut_down_duplicate_t_108ac005f;
        *(undefined1 **)(puVar6 + -0x1148) = puVar6 + -0x10e0;
        *(undefined1 **)(puVar6 + -0x1120) = puVar6 + -0x1150;
        *(undefined **)(puVar6 + -0x1118) = &UNK_10b208fd0;
        *(undefined8 *)(puVar6 + 0x3dc0) = 1;
        *(undefined1 **)(puVar6 + 0x3dc8) = puVar6 + -0x1120;
        *(undefined8 *)(puVar6 + 0x3dd0) = 1;
        *(long *)(puVar6 + 0x3dd8) =
             ___ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
             + 0x30;
        FUN_100510828(puVar6 + 0x3dc0);
      }
      else {
        lVar38 = 
        ___ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar16 = *(undefined8 *)
                    (
                    ___ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
                    + 0x20);
          uVar35 = *(undefined8 *)
                    (
                    ___ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
                    + 0x28);
          *(undefined8 *)(puVar6 + -0x11a0) = 2;
          *(undefined8 *)(puVar6 + -0x1198) = uVar16;
          *(undefined8 *)(puVar6 + -0x1190) = uVar35;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,puVar6 + -0x11a0);
          if (iVar10 != 0) {
            *(long *)(puVar6 + -0x10e0) = param_2 + 0x50a0;
            *(undefined **)(puVar6 + -0x10d8) =
                 &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
            ;
            *(undefined1 **)(puVar6 + -0x10d0) = puVar6 + 0x1470;
            *(code **)(puVar6 + -0x10c8) =
                 __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
            ;
            *(char **)(puVar6 + -0x1120) = s__failed_to_shut_down_duplicate_t_108ac005f;
            *(undefined1 **)(puVar6 + -0x1118) = puVar6 + -0x10e0;
            *(undefined1 **)(puVar6 + 0x3e90) = puVar6 + -0x1120;
            *(undefined **)(puVar6 + 0x3e98) = &UNK_10b208fd0;
            *(undefined8 *)(puVar6 + 0x3dc0) = 1;
            *(undefined1 **)(puVar6 + 0x3dc8) = puVar6 + 0x3e90;
            *(undefined8 *)(puVar6 + 0x3dd0) = 1;
            *(long *)(puVar6 + 0x3dd8) =
                 ___ZN10codex_core14thread_manager18ThreadManagerState21finalize_thread_spawn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2e3643e962c0e004E
                 + 0x30;
            *(undefined8 *)(puVar6 + -0x1148) = *(undefined8 *)(puVar6 + -0x1198);
            *(undefined8 *)(puVar6 + -0x1150) = *(undefined8 *)(puVar6 + -0x11a0);
            *(undefined8 *)(puVar6 + -0x1140) = *(undefined8 *)(puVar6 + -0x1190);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar38,puVar2,puVar1,puVar6 + -0x1150,puVar6 + 0x3dc0);
          }
        }
      }
      FUN_100df5738(puVar6 + 0x1470);
    }
    *(long *)(puVar6 + -0x10e0) = param_2 + 0x50a0;
    *(undefined **)(puVar6 + -0x10d8) =
         &
         __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (puVar6 + 0x1470,s_thread_is_already_running_108ac008b,puVar6 + -0x10e0);
    *(long **)(puVar6 + -0x1238) = param_3;
    *(undefined8 *)(puVar6 + -0x1178) = *(undefined8 *)(puVar6 + 0x1478);
    *(undefined8 *)(puVar6 + -0x1180) = *(undefined8 *)(puVar6 + 0x1470);
    *(undefined8 *)(puVar6 + -0x1170) = *(undefined8 *)(puVar6 + 0x1480);
    FUN_100e26e4c(param_2 + 0x5300);
    *(undefined1 *)(param_2 + 0x5475) = 0;
    if (*(int *)(param_2 + 0x5128) != 0x14) {
      func_0x000100dfc74c(param_2 + 0x5128);
    }
    *(undefined2 *)(param_2 + 0x5471) = 0;
    lVar38 = *(ulong *)(param_2 + 0x50b0) + 0x7ffffffffffffffa;
    if (*(ulong *)(param_2 + 0x50b0) < 0x8000000000000006) {
      lVar38 = 6;
    }
    if (lVar38 == 6) {
      FUN_100e0fca4(param_2 + 0x50b0);
    }
    else if ((lVar38 == 4) && (*(long *)(param_2 + 0x50b8) != 0)) {
      _free(*(undefined8 *)(param_2 + 0x50c0));
    }
    *(undefined1 *)(param_2 + 0x5473) = 0;
    FUN_100dea470(param_2 + 0x5060);
    *(undefined1 *)(param_2 + 0x5474) = 0;
    lVar38 = -0x7ffffffffffffff5;
    lVar40 = -0x8000000000000000;
LAB_101193808:
    *(undefined8 *)(puVar6 + 0x3bb8) = *(undefined8 *)(puVar6 + -0x1178);
    *(undefined8 *)(puVar6 + 0x3bb0) = *(undefined8 *)(puVar6 + -0x1180);
    *(undefined8 *)(puVar6 + 0x3bc0) = *(undefined8 *)(puVar6 + -0x1170);
    _memcpy(puVar6 + 0x3a60,puVar6 + 0x3ea0,0x148);
    *(undefined8 *)(puVar6 + 0x3a58) = *(undefined8 *)(puVar6 + -0x10f8);
    *(undefined8 *)(puVar6 + 0x3a50) = *(undefined8 *)(puVar6 + -0x1100);
    **(undefined1 **)(puVar6 + -0x1250) = 1;
    if (lVar40 != -0x7fffffffffffffff) {
      *(undefined8 *)(puVar6 + 0x3e08) = *(undefined8 *)(puVar6 + 0x3bb8);
      *(undefined8 *)(puVar6 + 0x3e00) = *(undefined8 *)(puVar6 + 0x3bb0);
      *(undefined8 *)(puVar6 + 0x3e10) = *(undefined8 *)(puVar6 + 0x3bc0);
      _memcpy(puVar6 + 0x1470,puVar6 + 0x3a60,0x148);
      *(undefined8 *)(puVar6 + -0x1148) = *(undefined8 *)(puVar6 + 0x3a58);
      *(undefined8 *)(puVar6 + -0x1150) = *(undefined8 *)(puVar6 + 0x3a50);
      FUN_100ce12c4(param_2 + 0x4fa0);
      if (lVar40 != -0x8000000000000000) {
        uVar16 = *(undefined8 *)(puVar6 + 0x14b0);
        uVar13 = *(undefined8 *)(puVar6 + 0x14c8);
        uVar35 = *(undefined8 *)(puVar6 + 0x14c0);
        *(undefined8 *)(param_2 + 0x4e70) = *(undefined8 *)(puVar6 + 0x14b8);
        *(undefined8 *)(param_2 + 0x4e68) = uVar16;
        *(undefined8 *)(param_2 + 0x4e80) = uVar13;
        *(undefined8 *)(param_2 + 0x4e78) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x14d0);
        *(undefined8 *)(param_2 + 0x4e90) = *(undefined8 *)(puVar6 + 0x14d8);
        *(undefined8 *)(param_2 + 0x4e88) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1470);
        uVar13 = *(undefined8 *)(puVar6 + 0x1488);
        uVar35 = *(undefined8 *)(puVar6 + 0x1480);
        *(undefined8 *)(param_2 + 0x4e30) = *(undefined8 *)(puVar6 + 0x1478);
        *(undefined8 *)(param_2 + 0x4e28) = uVar16;
        *(undefined8 *)(param_2 + 0x4e40) = uVar13;
        *(undefined8 *)(param_2 + 0x4e38) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x1490);
        uVar13 = *(undefined8 *)(puVar6 + 0x14a8);
        uVar35 = *(undefined8 *)(puVar6 + 0x14a0);
        *(undefined8 *)(param_2 + 0x4e50) = *(undefined8 *)(puVar6 + 0x1498);
        *(undefined8 *)(param_2 + 0x4e48) = uVar16;
        *(undefined8 *)(param_2 + 0x4e60) = uVar13;
        *(undefined8 *)(param_2 + 0x4e58) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x3e00);
        *(undefined8 *)(param_2 + 0x4e18) = *(undefined8 *)(puVar6 + 0x3e08);
        *(undefined8 *)(param_2 + 0x4e10) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1578);
        uVar13 = *(undefined8 *)(puVar6 + 0x1590);
        uVar35 = *(undefined8 *)(puVar6 + 0x1588);
        *(undefined8 *)(param_2 + 0x4f38) = *(undefined8 *)(puVar6 + 0x1580);
        *(undefined8 *)(param_2 + 0x4f30) = uVar16;
        *(undefined8 *)(param_2 + 0x4f48) = uVar13;
        *(undefined8 *)(param_2 + 0x4f40) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x1598);
        uVar13 = *(undefined8 *)(puVar6 + 0x15b0);
        uVar35 = *(undefined8 *)(puVar6 + 0x15a8);
        *(undefined8 *)(param_2 + 0x4f58) = *(undefined8 *)(puVar6 + 0x15a0);
        *(undefined8 *)(param_2 + 0x4f50) = uVar16;
        *(long *)(param_2 + 0x4e00) = lVar40;
        *(long *)(param_2 + 0x4e08) = lVar38;
        *(undefined8 *)(param_2 + 20000) = *(undefined8 *)(puVar6 + 0x3e10);
        *(undefined8 *)(param_2 + 0x4e98) = *(undefined8 *)(puVar6 + 0x14e0);
        *(undefined8 *)(param_2 + 0x4f68) = uVar13;
        *(undefined8 *)(param_2 + 0x4f60) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x1538);
        *(undefined8 *)(param_2 + 0x4ef8) = *(undefined8 *)(puVar6 + 0x1540);
        *(undefined8 *)(param_2 + 0x4ef0) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1548);
        *(undefined8 *)(param_2 + 0x4f08) = *(undefined8 *)(puVar6 + 0x1550);
        *(undefined8 *)(param_2 + 0x4f00) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1558);
        *(undefined8 *)(param_2 + 0x4f18) = *(undefined8 *)(puVar6 + 0x1560);
        *(undefined8 *)(param_2 + 0x4f10) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1568);
        *(undefined8 *)(param_2 + 0x4f28) = *(undefined8 *)(puVar6 + 0x1570);
        *(undefined8 *)(param_2 + 0x4f20) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x14f8);
        *(undefined8 *)(param_2 + 0x4eb8) = *(undefined8 *)(puVar6 + 0x1500);
        *(undefined8 *)(param_2 + 0x4eb0) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1508);
        *(undefined8 *)(param_2 + 0x4ec8) = *(undefined8 *)(puVar6 + 0x1510);
        *(undefined8 *)(param_2 + 0x4ec0) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1518);
        *(undefined8 *)(param_2 + 0x4ed8) = *(undefined8 *)(puVar6 + 0x1520);
        *(undefined8 *)(param_2 + 0x4ed0) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x1528);
        *(undefined8 *)(param_2 + 0x4ee8) = *(undefined8 *)(puVar6 + 0x1530);
        *(undefined8 *)(param_2 + 0x4ee0) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x14e8);
        *(undefined8 *)(param_2 + 0x4ea8) = *(undefined8 *)(puVar6 + 0x14f0);
        *(undefined8 *)(param_2 + 0x4ea0) = uVar16;
        *(long **)(param_2 + 0x4f70) = param_3;
        uVar16 = *(undefined8 *)(puVar6 + -0x1150);
        *(undefined8 *)(param_2 + 0x4f80) = *(undefined8 *)(puVar6 + -0x1148);
        *(undefined8 *)(param_2 + 0x4f78) = uVar16;
        if ((*(byte *)(param_2 + 0x4f8d) & 1) != 0) {
          *(long **)(param_2 + 0x4fa0) = param_3 + 2;
          *(undefined1 *)(param_2 + 0x4fd0) = 0;
          param_3 = *(long **)(puVar6 + -0x1238);
          goto LAB_101192404;
        }
        goto LAB_101194dfc;
      }
      *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + 0x3e08);
      *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + 0x3e00);
      *(undefined8 *)(puVar6 + 0x3c30) = *(undefined8 *)(puVar6 + 0x14b8);
      *(undefined8 *)(puVar6 + 0x3c28) = *(undefined8 *)(puVar6 + 0x14b0);
      *(undefined8 *)(puVar6 + 0x3c40) = *(undefined8 *)(puVar6 + 0x14c8);
      *(undefined8 *)(puVar6 + 0x3c38) = *(undefined8 *)(puVar6 + 0x14c0);
      *(undefined8 *)(puVar6 + 0x3c50) = *(undefined8 *)(puVar6 + 0x14d8);
      *(undefined8 *)(puVar6 + 0x3c48) = *(undefined8 *)(puVar6 + 0x14d0);
      *(undefined8 *)(puVar6 + 0x3bf0) = *(undefined8 *)(puVar6 + 0x1478);
      *(undefined8 *)(puVar6 + 0x3be8) = *(undefined8 *)(puVar6 + 0x1470);
      *(undefined8 *)(puVar6 + 0x3c00) = *(undefined8 *)(puVar6 + 0x1488);
      *(undefined8 *)(puVar6 + 0x3bf8) = *(undefined8 *)(puVar6 + 0x1480);
      *(undefined8 *)(puVar6 + 0x3c10) = *(undefined8 *)(puVar6 + 0x1498);
      *(undefined8 *)(puVar6 + 0x3c08) = *(undefined8 *)(puVar6 + 0x1490);
      *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + 0x3e10);
      *(undefined8 *)(puVar6 + 0x3c58) = *(undefined8 *)(puVar6 + 0x14e0);
      *(undefined8 *)(puVar6 + 0x3c20) = *(undefined8 *)(puVar6 + 0x14a8);
      *(undefined8 *)(puVar6 + 0x3c18) = *(undefined8 *)(puVar6 + 0x14a0);
      *(undefined1 *)(param_2 + 0x4f9b) = 0;
      bVar20 = *(byte *)(param_2 + 0x4f8e);
      goto joined_r0x0001011936b4;
    }
  }
LAB_101193ed0:
  *param_1 = 0x8000000000000001;
  uVar24 = 6;
  goto LAB_101194fa0;
joined_r0x0001011927c0:
  if (uVar12 == 0) {
    bVar47 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar16 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar16 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar16 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) == -1),
                                                           -((char)uVar16 == -1)))))))),1);
    if ((bVar47 & 1) != 0) goto LAB_101192ba8;
    lVar34 = lVar34 + 8;
    uVar27 = uVar27 + lVar34 & uVar23;
    uVar16 = *(undefined8 *)(lVar40 + uVar27);
    uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar20),
                      CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar20),
                               CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar20),
                                        CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar20),
                                                 CONCAT13(-((byte)((ulong)uVar16 >> 0x18) == bVar20)
                                                          ,CONCAT12(-((byte)((ulong)uVar16 >> 0x10)
                                                                     == bVar20),
                                                                    CONCAT11(-((byte)((ulong)uVar16
                                                                                     >> 8) == bVar20
                                                                              ),-((byte)uVar16 ==
                                                                                 bVar20)))))))) &
             0x8080808080808080;
    goto joined_r0x0001011927c0;
  }
  uVar11 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar27 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar23;
  plVar19 = (long *)(lVar40 + -0x18 + uVar11 * -0x18);
  lVar38 = *plVar19;
  if (*(long *)(lVar44 + 0x38) != plVar19[1] || *(long *)(lVar44 + 0x30) != lVar38) {
    uVar12 = uVar12 - 1 & uVar12;
    goto joined_r0x0001011927c0;
  }
  lVar34 = ((long)(uVar11 * 0x18) >> 3) * -0x5555555555555555;
  puVar36 = (undefined8 *)(lVar40 + (lVar34 - 8U & uVar23));
  uVar16 = *puVar36;
  uVar35 = *(undefined8 *)(lVar40 + lVar34);
  uVar12 = CONCAT17(-((char)((ulong)uVar35 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar35 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar35 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar35 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar35 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar35 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar35 >> 8) == -1),-((char)uVar35 == -1))))))));
  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar16 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar16 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar16 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) == -1),
                                                           -((char)uVar16 == -1))))))))) >> 3) < 8)
  {
    plVar31[2] = plVar31[2] + 1;
    uVar24 = 0xff;
  }
  else {
    uVar24 = 0x80;
  }
  *(undefined1 *)(lVar40 + lVar34) = uVar24;
  *(undefined1 *)(puVar36 + 1) = uVar24;
  plVar31[3] = plVar31[3] + -1;
  plVar31 = *(long **)(lVar40 + uVar11 * -0x18 + -8);
  *(long **)(puVar6 + 0x1470) = plVar31;
  if (plVar31 != (long *)0x0) {
    lVar34 = *plVar31;
    *plVar31 = lVar34 + -1;
    LORelease();
    if (lVar34 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(puVar6 + 0x1470);
      lVar38 = extraout_x1_03;
    }
  }
LAB_101192ba8:
  lVar34 = **(long **)(puVar6 + 0x3e00);
  **(long **)(puVar6 + 0x3e00) = lVar34 + -1;
  LORelease();
  if (lVar34 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(puVar6 + 0x3e00);
    lVar38 = extraout_x1_04;
  }
LAB_101192bcc:
  if (iVar10 != 0) {
    if (*pcVar37 == '\0') {
      *pcVar37 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar37,lVar38,1000000000);
    }
    FUN_1060fa678(pcVar37,iVar10,pcVar37);
  }
  plVar31 = *(long **)(param_2 + 0x26d0);
LAB_101192bf8:
  func_0x000102d68d88(puVar6 + 0x1470,plVar31[0x18] + 0x10,*(undefined8 *)(param_2 + 0x4d60),
                      *(undefined8 *)(param_2 + 0x4d68));
  *(undefined8 *)(puVar6 + -0x1228) = *(undefined8 *)(puVar6 + 0x1480);
  *(undefined8 *)(puVar6 + -0x1230) = *(undefined8 *)(puVar6 + 0x1478);
  lVar38 = *(long *)(puVar6 + 0x1470);
  *(undefined8 *)(puVar6 + -0x1220) = *(undefined8 *)(puVar6 + 0x1488);
  if (lVar38 == -0x7fffffffffffffe0) {
    *(undefined1 *)(param_2 + 0x4f9a) = 1;
    uVar16 = *(undefined8 *)(puVar6 + -0x1230);
    *(undefined8 *)(param_2 + 0x4fa8) = *(undefined8 *)(puVar6 + -0x1228);
    *(undefined8 *)(param_2 + 0x4fa0) = uVar16;
    *(undefined8 *)(param_2 + 0x4fb0) = *(undefined8 *)(puVar6 + -0x1220);
    uVar16 = *(undefined8 *)(param_2 + 0x26d0);
    puVar21 = (ulong *)(param_2 + 0x4c88);
    plVar19 = (long *)(param_2 + 0x4c20);
    *(undefined8 *)(param_2 + 0x4fb8) = uVar16;
    *(ulong **)(param_2 + 0x4fc0) = puVar21;
    *(long **)(param_2 + 0x4fc8) = plVar19;
    *(undefined1 *)(param_2 + 0x5060) = 0;
    uVar12 = *puVar21;
joined_r0x0001011923d8:
    lVar38 = -0x8000000000000000;
    if (((uVar12 < 0x8000000000000006) &&
        (lVar38 = -0x8000000000000000, uVar12 < 0x8000000000000001)) && (*plVar19 < 0)) {
      uVar23 = puVar21[10];
      uVar12 = puVar21[9];
      *(ulong *)(puVar6 + 0x3a08) = uVar23;
      *(ulong *)(puVar6 + 0x3a00) = uVar12;
      *(undefined8 *)(param_2 + 0x4fd0) = uVar16;
      *(ulong *)(param_2 + 0x4fe0) = uVar23;
      *(ulong *)(param_2 + 0x4fd8) = uVar12;
      *(undefined1 *)(param_2 + 0x5058) = 0;
      goto LAB_1011926cc;
    }
LAB_101192ca0:
    uVar13 = *(undefined8 *)(puVar6 + 0x3bd8);
    uVar35 = *(undefined8 *)(puVar6 + 0x3bd0);
    uVar41 = *(undefined8 *)(puVar6 + 0x3be8);
    uVar14 = *(undefined8 *)(puVar6 + 0x3be0);
    *(undefined8 *)(puVar6 + 0x3a68) = uVar13;
    *(undefined8 *)(puVar6 + 0x3a60) = uVar35;
    *(undefined8 *)(puVar6 + 0x3a78) = uVar41;
    *(undefined8 *)(puVar6 + 0x3a70) = uVar14;
    uVar16 = *(undefined8 *)(puVar6 + 0x3bf0);
    *(undefined8 *)(puVar6 + 0x3a80) = uVar16;
    *(undefined1 *)(param_2 + 0x5060) = 1;
    *(undefined8 *)(puVar6 + -0x1208) = uVar13;
    *(undefined8 *)(puVar6 + -0x1210) = uVar35;
    *(undefined8 *)(puVar6 + -0x11f8) = uVar41;
    *(undefined8 *)(puVar6 + -0x1200) = uVar14;
    *(undefined1 *)(param_2 + 0x4f9c) = 1;
    *(long *)(puVar6 + -0x1218) = lVar38;
    *(undefined8 *)(puVar6 + -0x11f0) = uVar16;
    *(long **)(puVar6 + -0x11e8) = plVar31;
    plVar31 = (long *)(param_2 + 0x4c88);
    lVar38 = *(ulong *)(param_2 + 0x4c88) + 0x7ffffffffffffffa;
    if (*(ulong *)(param_2 + 0x4c88) < 0x8000000000000006) {
      lVar38 = 6;
    }
    if (lVar38 < 4) {
      if (lVar38 < 2) {
        if (lVar38 == 0) {
          uVar16 = 0x8000000000000006;
        }
        else {
          uVar16 = 0x8000000000000007;
        }
      }
      else if (lVar38 == 2) {
        uVar16 = 0x8000000000000008;
      }
      else {
        uVar16 = 0x8000000000000009;
      }
LAB_101192e24:
      *(undefined8 *)(param_2 + 0x4da0) = uVar16;
    }
    else {
      if (lVar38 < 6) {
        if (lVar38 == 4) {
          uVar16 = *(undefined8 *)(param_2 + 0x4c98);
          lVar38 = *(long *)(param_2 + 0x4ca0);
          if (lVar38 == 0) {
            lVar34 = 1;
          }
          else {
            lVar34 = _malloc(lVar38);
            if (lVar34 == 0) {
              func_0x0001087c9084(1,lVar38);
              goto LAB_1011930e8;
            }
          }
          _memcpy(lVar34,uVar16,lVar38);
          *(long *)(param_2 + 0x4da8) = lVar38;
          *(long *)(param_2 + 0x4db0) = lVar34;
          uVar16 = 0x800000000000000a;
          *(long *)(param_2 + 0x4db8) = lVar38;
        }
        else {
          uVar16 = 0x800000000000000b;
        }
        goto LAB_101192e24;
      }
      if (lVar38 != 6) {
        uVar16 = 0x800000000000000d;
        goto LAB_101192e24;
      }
      FUN_1011d1944(param_2 + 0x4da0,plVar31);
    }
    lVar34 = 1;
    *(undefined1 *)(param_2 + 0x4f8e) = 1;
    *(undefined1 *)(param_2 + 0x4f99) = 0;
    _memcpy(puVar6 + 0x1470,param_2 + 0x26d8,0x2548);
    uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x26d0) + 0x28);
    lVar38 = *(long *)(*(long *)(param_2 + 0x26d0) + 0x30);
    if ((lVar38 != 0) && (lVar34 = _malloc(lVar38), lVar34 == 0)) {
      func_0x0001087c9084(1,lVar38);
LAB_1011930e8:
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1011930ec);
      (*pcVar18)();
    }
    _memcpy(lVar34,uVar16,lVar38);
    *(undefined1 *)(param_2 + 0x4f97) = 0;
    uVar16 = *(undefined8 *)(param_2 + 0x4c60);
    uVar35 = *(undefined8 *)(*(long *)(param_2 + 0x26d0) + 0xb8);
    plVar19 = *(long **)(*(long *)(param_2 + 0x26d0) + 0xb0);
    lVar40 = *plVar19;
    *plVar19 = lVar40 + 1;
    if (lVar40 < 0) goto LAB_1011930e8;
    plVar25 = *(long **)(*(long *)(param_2 + 0x26d0) + 0xc0);
    lVar40 = *plVar25;
    *plVar25 = lVar40 + 1;
    if (lVar40 < 0) goto LAB_1011930e8;
    plVar26 = *(long **)(*(long *)(param_2 + 0x26d0) + 200);
    lVar40 = *plVar26;
    *plVar26 = lVar40 + 1;
    if (lVar40 < 0) goto LAB_1011930e8;
    plVar28 = *(long **)(*(long *)(param_2 + 0x26d0) + 0xd0);
    lVar40 = *plVar28;
    *plVar28 = lVar40 + 1;
    if (lVar40 < 0) goto LAB_1011930e8;
    plVar29 = *(long **)(*(long *)(param_2 + 0x26d0) + 0xd8);
    lVar40 = *plVar29;
    *plVar29 = lVar40 + 1;
    if (lVar40 < 0) goto LAB_1011930e8;
    plVar30 = *(long **)(*(long *)(param_2 + 0x26d0) + 0xe0);
    lVar40 = *plVar30;
    *plVar30 = lVar40 + 1;
    if (lVar40 < 0) goto LAB_1011930e8;
    *(undefined1 *)(param_2 + 0x4f98) = 0;
    uVar13 = *(undefined8 *)(param_2 + 0x4c20);
    uVar41 = *(undefined8 *)(param_2 + 0x4c38);
    uVar14 = *(undefined8 *)(param_2 + 0x4c30);
    *(undefined8 *)(puVar6 + 0x3a68) = *(undefined8 *)(param_2 + 0x4c28);
    *(undefined8 *)(puVar6 + 0x3a60) = uVar13;
    *(undefined8 *)(puVar6 + 0x3a78) = uVar41;
    *(undefined8 *)(puVar6 + 0x3a70) = uVar14;
    uVar13 = *(undefined8 *)(param_2 + 0x4c40);
    uVar41 = *(undefined8 *)(param_2 + 0x4c58);
    uVar14 = *(undefined8 *)(param_2 + 0x4c50);
    *(undefined8 *)(puVar6 + 0x3a88) = *(undefined8 *)(param_2 + 0x4c48);
    *(undefined8 *)(puVar6 + 0x3a80) = uVar13;
    *(undefined8 *)(puVar6 + 15000) = uVar41;
    *(undefined8 *)(puVar6 + 0x3a90) = uVar14;
    uVar13 = *(undefined8 *)(param_2 + 0x4ca8);
    uVar41 = *(undefined8 *)(param_2 + 0x4cc0);
    uVar14 = *(undefined8 *)(param_2 + 0x4cb8);
    *(undefined8 *)(puVar6 + 0x3bf8) = *(undefined8 *)(param_2 + 0x4cb0);
    *(undefined8 *)(puVar6 + 0x3bf0) = uVar13;
    *(undefined8 *)(puVar6 + 0x3c08) = uVar41;
    *(undefined8 *)(puVar6 + 0x3c00) = uVar14;
    uVar13 = *(undefined8 *)(param_2 + 0x4cc8);
    uVar41 = *(undefined8 *)(param_2 + 0x4ce0);
    uVar14 = *(undefined8 *)(param_2 + 0x4cd8);
    *(undefined8 *)(puVar6 + 0x3c18) = *(undefined8 *)(param_2 + 0x4cd0);
    *(undefined8 *)(puVar6 + 0x3c10) = uVar13;
    *(undefined8 *)(puVar6 + 0x3c28) = uVar41;
    *(undefined8 *)(puVar6 + 0x3c20) = uVar14;
    lVar40 = *plVar31;
    uVar14 = *(undefined8 *)(param_2 + 0x4ca0);
    uVar13 = *(undefined8 *)(param_2 + 0x4c98);
    *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(param_2 + 0x4c90);
    *(long *)(puVar6 + 0x3bd0) = lVar40;
    *(undefined8 *)(puVar6 + 0x3be8) = uVar14;
    *(undefined8 *)(puVar6 + 0x3be0) = uVar13;
    bVar20 = *(byte *)(param_2 + 0x4f8b);
    uVar13 = *(undefined8 *)(param_2 + 0x4c68);
    uVar41 = *(undefined8 *)(param_2 + 0x4c80);
    uVar14 = *(undefined8 *)(param_2 + 0x4c78);
    *(undefined8 *)(puVar6 + -0x11d8) = *(undefined8 *)(param_2 + 0x4c70);
    *(undefined8 *)(puVar6 + -0x11e0) = uVar13;
    *(undefined8 *)(puVar6 + -0x11c8) = uVar41;
    *(undefined8 *)(puVar6 + -0x11d0) = uVar14;
    uVar13 = *(undefined8 *)(param_2 + 0x4ce8);
    *(undefined8 *)(puVar6 + 0x3bb8) = *(undefined8 *)(param_2 + 0x4cf0);
    *(undefined8 *)(puVar6 + 0x3bb0) = uVar13;
    *(undefined8 *)(puVar6 + 0x3bc0) = *(undefined8 *)(param_2 + 0x4cf8);
    bVar47 = *(byte *)(param_2 + 0x4f8c);
    uVar41 = *(undefined8 *)(param_2 + 0x4d00);
    uVar13 = *(undefined8 *)(param_2 + 0x4d08);
    uVar14 = *(undefined8 *)(param_2 + 0x4d10);
    uVar50 = *(undefined8 *)(param_2 + 0x4d20);
    uVar49 = *(undefined8 *)(param_2 + 0x4d18);
    *(undefined1 *)(param_2 + 0x4f9c) = 0;
    *(undefined8 *)(puVar6 + 0x3d28) = *(undefined8 *)(puVar6 + -0x1210);
    *(undefined8 *)(puVar6 + 0x3d20) = *(undefined8 *)(puVar6 + -0x1218);
    *(undefined8 *)(puVar6 + 0x3d38) = *(undefined8 *)(puVar6 + -0x1200);
    *(undefined8 *)(puVar6 + 0x3d30) = *(undefined8 *)(puVar6 + -0x1208);
    *(undefined8 *)(puVar6 + 0x3d48) = *(undefined8 *)(puVar6 + -0x11f0);
    *(undefined8 *)(puVar6 + 0x3d40) = *(undefined8 *)(puVar6 + -0x11f8);
    *(undefined8 *)(puVar6 + 0x3d50) = *(undefined8 *)(puVar6 + -0x11e8);
    uVar42 = *(undefined8 *)(param_2 + 0x4d70);
    uVar46 = *(undefined8 *)(param_2 + 0x4d88);
    uVar45 = *(undefined8 *)(param_2 + 0x4d80);
    *(undefined8 *)(puVar6 + 0x39c8) = *(undefined8 *)(param_2 + 0x4d78);
    *(undefined8 *)(puVar6 + 0x39c0) = uVar42;
    *(undefined8 *)(puVar6 + 0x39d8) = uVar46;
    *(undefined8 *)(puVar6 + 0x39d0) = uVar45;
    uVar42 = *(undefined8 *)(param_2 + 0x4d90);
    *(undefined8 *)(puVar6 + 0x39e8) = *(undefined8 *)(param_2 + 0x4d98);
    *(undefined8 *)(puVar6 + 0x39e0) = uVar42;
    *(undefined8 *)(param_2 + 0x4f8f) = 0;
    uVar42 = *(undefined8 *)(param_2 + 0x4d28);
    uVar46 = *(undefined8 *)(param_2 + 0x4d40);
    uVar45 = *(undefined8 *)(param_2 + 0x4d38);
    *(undefined8 *)(puVar6 + 0x3a08) = *(undefined8 *)(param_2 + 0x4d30);
    *(undefined8 *)(puVar6 + 0x3a00) = uVar42;
    *(undefined8 *)(puVar6 + 0x3a18) = uVar46;
    *(undefined8 *)(puVar6 + 0x3a10) = uVar45;
    uVar42 = *(undefined8 *)(param_2 + 0x4d48);
    *(undefined8 *)(puVar6 + 0x3a28) = *(undefined8 *)(param_2 + 0x4d50);
    *(undefined8 *)(puVar6 + 0x3a20) = uVar42;
    *(undefined1 *)(param_2 + 0x4f9a) = 0;
    uVar42 = *(undefined8 *)(param_2 + 0x4fa0);
    *(undefined8 *)(puVar6 + 0x3da8) = *(undefined8 *)(param_2 + 0x4fa8);
    *(undefined8 *)(puVar6 + 0x3da0) = uVar42;
    *(undefined8 *)(puVar6 + 0x3db0) = *(undefined8 *)(param_2 + 0x4fb0);
    piVar17 = *(int **)(param_2 + 0x26d0);
    if (*piVar17 == 1) {
      plVar31 = *(long **)(piVar17 + 2);
      if (plVar31 == (long *)0x0) {
        uVar42 = 1;
        uVar45 = *(undefined8 *)(piVar17 + 0x3c);
        plVar22 = *(long **)(piVar17 + 0x3a);
        lVar40 = *plVar22;
        *plVar22 = lVar40 + 1;
      }
      else {
        plVar31[0x3e] = plVar31[0x3e] + 1;
        lVar40 = *plVar31;
        *plVar31 = lVar40 + 1;
        if (lVar40 < 0) goto LAB_1011930e8;
        plVar22 = *(long **)(piVar17 + 4);
        *(long **)(puVar6 + -0x12d0) = plVar22;
        lVar40 = *plVar22;
        *plVar22 = lVar40 + 1;
        if (lVar40 < 0) goto LAB_1011930e8;
        plVar22 = *(long **)(piVar17 + 6);
        *(long **)(puVar6 + -0x12d8) = plVar22;
        lVar40 = *plVar22;
        *plVar22 = lVar40 + 1;
        if (lVar40 < 0) goto LAB_1011930e8;
        uVar42 = 1;
        uVar45 = *(undefined8 *)(*(long *)(param_2 + 0x26d0) + 0xf0);
        plVar22 = *(long **)(*(long *)(param_2 + 0x26d0) + 0xe8);
        lVar40 = *plVar22;
        *plVar22 = lVar40 + 1;
      }
    }
    else {
      uVar42 = 0;
      uVar45 = *(undefined8 *)(piVar17 + 0x3c);
      plVar22 = *(long **)(piVar17 + 0x3a);
      lVar40 = *plVar22;
      *plVar22 = lVar40 + 1;
    }
    if (lVar40 < 0) goto LAB_1011930e8;
    lVar40 = *(long *)(param_2 + 0x26d0);
    plVar33 = *(long **)(lVar40 + 0xf8);
    *(long **)(puVar6 + -0x1238) = param_3;
    *(undefined8 *)(puVar6 + -0x1248) = uVar35;
    *(long **)(puVar6 + -0x1250) = plVar19;
    *(long **)(puVar6 + -0x1260) = plVar26;
    *(long **)(puVar6 + -0x1258) = plVar25;
    *(long **)(puVar6 + -0x1270) = plVar29;
    *(long **)(puVar6 + -0x1268) = plVar28;
    *(long **)(puVar6 + -0x1278) = plVar30;
    *(uint *)(puVar6 + -0x1280) = (uint)bVar47;
    *(uint *)(puVar6 + -0x127c) = (uint)bVar20;
    *(undefined8 *)(puVar6 + -0x1288) = uVar50;
    *(undefined8 *)(puVar6 + -0x1290) = uVar49;
    *(undefined8 *)(puVar6 + -0x12a0) = uVar13;
    *(undefined8 *)(puVar6 + -0x1298) = uVar16;
    *(undefined8 *)(puVar6 + -0x12b0) = uVar41;
    *(undefined8 *)(puVar6 + -0x12a8) = uVar14;
    *(undefined8 *)(puVar6 + -0x12b8) = uVar45;
    *(long **)(puVar6 + -0x12c0) = plVar22;
    if (plVar33 != (long *)0x0) {
      *(undefined8 *)(puVar6 + -0x12c8) = *(undefined8 *)(lVar40 + 0x100);
      lVar40 = *plVar33;
      *plVar33 = lVar40 + 1;
      if (lVar40 < 0) goto LAB_1011930e8;
    }
    _memcpy(puVar6 + -0x10e0,puVar6 + 0x1470,0x2548);
    *(undefined8 *)(puVar6 + 0x3e08) = *(undefined8 *)(puVar6 + 0x3a68);
    *(undefined8 *)(puVar6 + 0x3e00) = *(undefined8 *)(puVar6 + 0x3a60);
    *(undefined8 *)(puVar6 + 0x3e18) = *(undefined8 *)(puVar6 + 0x3a78);
    *(undefined8 *)(puVar6 + 0x3e10) = *(undefined8 *)(puVar6 + 0x3a70);
    *(undefined8 *)(puVar6 + 0x3e28) = *(undefined8 *)(puVar6 + 0x3a88);
    *(undefined8 *)(puVar6 + 0x3e20) = *(undefined8 *)(puVar6 + 0x3a80);
    *(undefined8 *)(puVar6 + 0x3e38) = *(undefined8 *)(puVar6 + 15000);
    *(undefined8 *)(puVar6 + 0x3e30) = *(undefined8 *)(puVar6 + 0x3a90);
    *(undefined8 *)(puVar6 + 0x3ec8) = *(undefined8 *)(puVar6 + 0x3bf8);
    *(undefined8 *)(puVar6 + 0x3ec0) = *(undefined8 *)(puVar6 + 0x3bf0);
    *(undefined8 *)(puVar6 + 0x3ed8) = *(undefined8 *)(puVar6 + 0x3c08);
    *(undefined8 *)(puVar6 + 0x3ed0) = *(undefined8 *)(puVar6 + 0x3c00);
    *(undefined8 *)(puVar6 + 0x3ee8) = *(undefined8 *)(puVar6 + 0x3c18);
    *(undefined8 *)(puVar6 + 0x3ee0) = *(undefined8 *)(puVar6 + 0x3c10);
    *(undefined8 *)(puVar6 + 0x3ef8) = *(undefined8 *)(puVar6 + 0x3c28);
    *(undefined8 *)(puVar6 + 0x3ef0) = *(undefined8 *)(puVar6 + 0x3c20);
    *(undefined8 *)(puVar6 + 0x3ea8) = *(undefined8 *)(puVar6 + 0x3bd8);
    *(undefined8 *)(puVar6 + 0x3ea0) = *(undefined8 *)(puVar6 + 0x3bd0);
    *(undefined8 *)(puVar6 + 0x3eb8) = *(undefined8 *)(puVar6 + 0x3be8);
    *(undefined8 *)(puVar6 + 0x3eb0) = *(undefined8 *)(puVar6 + 0x3be0);
    *(undefined8 *)(puVar6 + -0x1198) = *(undefined8 *)(puVar6 + -0x11d8);
    *(undefined8 *)(puVar6 + -0x11a0) = *(undefined8 *)(puVar6 + -0x11e0);
    *(undefined8 *)(puVar6 + -0x1188) = *(undefined8 *)(puVar6 + -0x11c8);
    *(undefined8 *)(puVar6 + -0x1190) = *(undefined8 *)(puVar6 + -0x11d0);
    *(undefined8 *)(puVar6 + -0x10f8) = *(undefined8 *)(puVar6 + 0x3bb8);
    *(undefined8 *)(puVar6 + -0x1100) = *(undefined8 *)(puVar6 + 0x3bb0);
    *(undefined8 *)(puVar6 + -0x10f0) = *(undefined8 *)(puVar6 + 0x3bc0);
    *(undefined8 *)(puVar6 + 0x3dc8) = *(undefined8 *)(puVar6 + 0x3d28);
    *(undefined8 *)(puVar6 + 0x3dc0) = *(undefined8 *)(puVar6 + 0x3d20);
    *(undefined8 *)(puVar6 + 0x3dd8) = *(undefined8 *)(puVar6 + 0x3d38);
    *(undefined8 *)(puVar6 + 0x3dd0) = *(undefined8 *)(puVar6 + 0x3d30);
    *(undefined8 *)(puVar6 + 0x3de8) = *(undefined8 *)(puVar6 + 0x3d48);
    *(undefined8 *)(puVar6 + 0x3de0) = *(undefined8 *)(puVar6 + 0x3d40);
    *(undefined8 *)(puVar6 + 0x3df0) = *(undefined8 *)(puVar6 + 0x3d50);
    *(undefined8 *)(puVar6 + -0x1138) = *(undefined8 *)(puVar6 + 0x39d8);
    *(undefined8 *)(puVar6 + -0x1140) = *(undefined8 *)(puVar6 + 0x39d0);
    *(undefined8 *)(puVar6 + -0x1128) = *(undefined8 *)(puVar6 + 0x39e8);
    *(undefined8 *)(puVar6 + -0x1130) = *(undefined8 *)(puVar6 + 0x39e0);
    *(undefined8 *)(puVar6 + -0x1158) = *(undefined8 *)(puVar6 + 0x3a28);
    *(undefined8 *)(puVar6 + -0x1160) = *(undefined8 *)(puVar6 + 0x3a20);
    *(undefined8 *)(puVar6 + -0x1148) = *(undefined8 *)(puVar6 + 0x39c8);
    *(undefined8 *)(puVar6 + -0x1150) = *(undefined8 *)(puVar6 + 0x39c0);
    *(undefined8 *)(puVar6 + -0x1178) = *(undefined8 *)(puVar6 + 0x3a08);
    *(undefined8 *)(puVar6 + -0x1180) = *(undefined8 *)(puVar6 + 0x3a00);
    *(undefined8 *)(puVar6 + -0x1168) = *(undefined8 *)(puVar6 + 0x3a18);
    *(undefined8 *)(puVar6 + -0x1170) = *(undefined8 *)(puVar6 + 0x3a10);
    *(undefined8 *)(puVar6 + -0x1110) = *(undefined8 *)(puVar6 + 0x3db0);
    *(undefined8 *)(puVar6 + -0x1118) = *(undefined8 *)(puVar6 + 0x3da8);
    *(undefined8 *)(puVar6 + -0x1120) = *(undefined8 *)(puVar6 + 0x3da0);
    _memcpy(param_2 + 0x4fa0,puVar6 + -0x10e0,0x2548);
    uVar16 = *(undefined8 *)(puVar6 + -0x1120);
    *(undefined8 *)(param_2 + 0x7540) = *(undefined8 *)(puVar6 + -0x1118);
    *(undefined8 *)(param_2 + 0x7538) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + 0x3dc0);
    uVar13 = *(undefined8 *)(puVar6 + 0x3dd8);
    uVar35 = *(undefined8 *)(puVar6 + 0x3dd0);
    *(undefined8 *)(param_2 + 0x7570) = *(undefined8 *)(puVar6 + 0x3dc8);
    *(undefined8 *)(param_2 + 0x7568) = uVar16;
    *(undefined8 *)(param_2 + 0x7580) = uVar13;
    *(undefined8 *)(param_2 + 0x7578) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + 0x3de0);
    *(undefined8 *)(param_2 + 0x7590) = *(undefined8 *)(puVar6 + 0x3de8);
    *(undefined8 *)(param_2 + 0x7588) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x1100);
    *(undefined8 *)(param_2 + 0x7528) = *(undefined8 *)(puVar6 + -0x10f8);
    *(undefined8 *)(param_2 + 0x7520) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x1150);
    uVar13 = *(undefined8 *)(puVar6 + -0x1138);
    uVar35 = *(undefined8 *)(puVar6 + -0x1140);
    *(undefined8 *)(param_2 + 0x75a8) = *(undefined8 *)(puVar6 + -0x1148);
    *(undefined8 *)(param_2 + 0x75a0) = uVar16;
    *(undefined8 *)(param_2 + 0x75b8) = uVar13;
    *(undefined8 *)(param_2 + 0x75b0) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + -0x1130);
    *(undefined8 *)(param_2 + 0x75c8) = *(undefined8 *)(puVar6 + -0x1128);
    *(undefined8 *)(param_2 + 0x75c0) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x1180);
    uVar13 = *(undefined8 *)(puVar6 + -0x1168);
    uVar35 = *(undefined8 *)(puVar6 + -0x1170);
    *(undefined8 *)(param_2 + 0x75d8) = *(undefined8 *)(puVar6 + -0x1178);
    *(undefined8 *)(param_2 + 0x75d0) = uVar16;
    *(undefined8 *)(param_2 + 0x75e8) = uVar13;
    *(undefined8 *)(param_2 + 0x75e0) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + -0x1160);
    *(undefined8 *)(param_2 + 0x75f8) = *(undefined8 *)(puVar6 + -0x1158);
    *(undefined8 *)(param_2 + 0x75f0) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + 0x3e30);
    uVar13 = *(undefined8 *)(puVar6 + 0x3e28);
    uVar35 = *(undefined8 *)(puVar6 + 0x3e20);
    *(undefined8 *)(param_2 + 0x7638) = *(undefined8 *)(puVar6 + 0x3e38);
    *(undefined8 *)(param_2 + 0x7630) = uVar16;
    *(undefined8 *)(param_2 + 0x7628) = uVar13;
    *(undefined8 *)(param_2 + 0x7620) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + 0x3e10);
    uVar13 = *(undefined8 *)(puVar6 + 0x3e08);
    uVar35 = *(undefined8 *)(puVar6 + 0x3e00);
    *(undefined8 *)(param_2 + 0x7618) = *(undefined8 *)(puVar6 + 0x3e18);
    *(undefined8 *)(param_2 + 0x7610) = uVar16;
    *(undefined8 *)(param_2 + 0x7608) = uVar13;
    *(undefined8 *)(param_2 + 0x7600) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + 0x3eb0);
    uVar13 = *(undefined8 *)(puVar6 + 0x3ea8);
    uVar35 = *(undefined8 *)(puVar6 + 0x3ea0);
    *(undefined8 *)(param_2 + 0x7658) = *(undefined8 *)(puVar6 + 0x3eb8);
    *(undefined8 *)(param_2 + 0x7650) = uVar16;
    *(undefined8 *)(param_2 + 0x7648) = uVar13;
    *(undefined8 *)(param_2 + 0x7640) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + 0x3ef0);
    uVar13 = *(undefined8 *)(puVar6 + 0x3ee8);
    uVar35 = *(undefined8 *)(puVar6 + 0x3ee0);
    *(undefined8 *)(param_2 + 0x7698) = *(undefined8 *)(puVar6 + 0x3ef8);
    *(undefined8 *)(param_2 + 0x7690) = uVar16;
    *(undefined8 *)(param_2 + 0x7688) = uVar13;
    *(undefined8 *)(param_2 + 0x7680) = uVar35;
    uVar16 = *(undefined8 *)(puVar6 + 0x3ed0);
    uVar13 = *(undefined8 *)(puVar6 + 0x3ec8);
    uVar35 = *(undefined8 *)(puVar6 + 0x3ec0);
    *(undefined8 *)(param_2 + 0x7678) = *(undefined8 *)(puVar6 + 0x3ed8);
    *(undefined8 *)(param_2 + 0x7670) = uVar16;
    *(undefined8 *)(param_2 + 0x74e8) = uVar42;
    *(long **)(param_2 + 0x74f0) = plVar31;
    uVar16 = *(undefined8 *)(puVar6 + -0x12d8);
    *(undefined8 *)(param_2 + 0x74f8) = *(undefined8 *)(puVar6 + -0x12d0);
    *(undefined8 *)(param_2 + 0x7500) = uVar16;
    *(long *)(param_2 + 0x7508) = lVar38;
    *(long *)(param_2 + 0x7510) = lVar34;
    *(long *)(param_2 + 0x7518) = lVar38;
    *(undefined8 *)(param_2 + 30000) = *(undefined8 *)(puVar6 + -0x10f0);
    *(undefined8 *)(param_2 + 0x7548) = *(undefined8 *)(puVar6 + -0x1110);
    *(undefined8 *)(param_2 + 0x7550) = *(undefined8 *)(puVar6 + -0x12b0);
    uVar16 = *(undefined8 *)(puVar6 + -0x12a8);
    *(undefined8 *)(param_2 + 0x7558) = *(undefined8 *)(puVar6 + -0x12a0);
    *(undefined8 *)(param_2 + 0x7560) = uVar16;
    *(undefined8 *)(param_2 + 0x7598) = *(undefined8 *)(puVar6 + 0x3df0);
    *(undefined8 *)(param_2 + 0x7668) = uVar13;
    *(undefined8 *)(param_2 + 0x7660) = uVar35;
    *(undefined8 *)(param_2 + 0x76a0) = *(undefined8 *)(puVar6 + -0x1298);
    uVar16 = *(undefined8 *)(puVar6 + -0x1250);
    *(undefined8 *)(param_2 + 0x76b0) = *(undefined8 *)(puVar6 + -0x1248);
    *(undefined8 *)(param_2 + 0x76a8) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x1260);
    *(undefined8 *)(param_2 + 0x76b8) = *(undefined8 *)(puVar6 + -0x1258);
    *(undefined8 *)(param_2 + 0x76c0) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x1270);
    *(undefined8 *)(param_2 + 0x76c8) = *(undefined8 *)(puVar6 + -0x1268);
    *(undefined8 *)(param_2 + 0x76d0) = uVar16;
    *(undefined8 *)(param_2 + 0x76d8) = *(undefined8 *)(puVar6 + -0x1278);
    uVar35 = *(undefined8 *)(puVar6 + -0x1198);
    uVar16 = *(undefined8 *)(puVar6 + -0x11a0);
    uVar13 = *(undefined8 *)(puVar6 + -0x1190);
    *(undefined8 *)(param_2 + 0x76f8) = *(undefined8 *)(puVar6 + -0x1188);
    *(undefined8 *)(param_2 + 0x76f0) = uVar13;
    *(undefined8 *)(param_2 + 0x76e8) = uVar35;
    *(undefined8 *)(param_2 + 0x76e0) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x12c0);
    *(undefined8 *)(param_2 + 0x7708) = *(undefined8 *)(puVar6 + -0x12b8);
    *(undefined8 *)(param_2 + 0x7700) = uVar16;
    uVar16 = *(undefined8 *)(puVar6 + -0x1290);
    *(undefined8 *)(param_2 + 0x7718) = *(undefined8 *)(puVar6 + -0x1288);
    *(undefined8 *)(param_2 + 0x7710) = uVar16;
    *(long **)(param_2 + 0x7720) = plVar33;
    *(undefined8 *)(param_2 + 0x7728) = *(undefined8 *)(puVar6 + -0x12c8);
    uVar3 = *(undefined4 *)(puVar6 + -0x127c);
    *(char *)(param_2 + 0x7730) = (char)*(undefined4 *)(puVar6 + -0x1280);
    *(char *)(param_2 + 0x7731) = (char)uVar3;
    *(undefined1 *)(param_2 + 0x17a30) = 0;
    param_3 = *(long **)(puVar6 + -0x1238);
LAB_101193348:
    puVar36 = (undefined8 *)(param_2 + 0x4fa0);
    func_0x0001005c26c8(puVar6 + 0x1470,puVar36,param_3);
    lVar38 = *(long *)(puVar6 + 0x1470);
    if (lVar38 == -0x7fffffffffffffdf) {
      *param_1 = 0x8000000000000001;
      uVar24 = 5;
      goto LAB_101194fa0;
    }
    *(undefined8 *)(puVar6 + 0x3a28) = *(undefined8 *)(puVar6 + 0x14a0);
    *(undefined8 *)(puVar6 + 0x3a20) = *(undefined8 *)(puVar6 + 0x1498);
    *(undefined8 *)(puVar6 + 0x3a38) = *(undefined8 *)(puVar6 + 0x14b0);
    *(undefined8 *)(puVar6 + 0x3a30) = *(undefined8 *)(puVar6 + 0x14a8);
    *(undefined8 *)(puVar6 + 0x3a48) = *(undefined8 *)(puVar6 + 0x14c0);
    *(undefined8 *)(puVar6 + 0x3a40) = *(undefined8 *)(puVar6 + 0x14b8);
    *(undefined8 *)(puVar6 + 0x3a18) = *(undefined8 *)(puVar6 + 0x1490);
    *(undefined8 *)(puVar6 + 0x3a10) = *(undefined8 *)(puVar6 + 0x1488);
    *(undefined8 *)(puVar6 + 0x3a08) = *(undefined8 *)(puVar6 + 0x1480);
    *(undefined8 *)(puVar6 + 0x3a00) = *(undefined8 *)(puVar6 + 0x1478);
    *(undefined8 *)(puVar6 + 0x39c8) = *(undefined8 *)(puVar6 + 0x14d0);
    *(undefined8 *)(puVar6 + 0x39c0) = *(undefined8 *)(puVar6 + 0x14c8);
    *(undefined8 *)(puVar6 + 0x39d8) = *(undefined8 *)(puVar6 + 0x14e0);
    *(undefined8 *)(puVar6 + 0x39d0) = *(undefined8 *)(puVar6 + 0x14d8);
    *(undefined8 *)(puVar6 + 0x39e8) = *(undefined8 *)(puVar6 + 0x14f0);
    *(undefined8 *)(puVar6 + 0x39e0) = *(undefined8 *)(puVar6 + 0x14e8);
    *(undefined8 *)(puVar6 + 0x39f8) = *(undefined8 *)(puVar6 + 0x1500);
    *(undefined8 *)(puVar6 + 0x39f0) = *(undefined8 *)(puVar6 + 0x14f8);
    if (*(char *)(param_2 + 0x17a30) == '\x03') {
      FUN_100d0f6c4(param_2 + 0x9f28);
      *(undefined8 *)(param_2 + 0x17a41) = 0;
      *(undefined8 *)(param_2 + 0x17a39) = 0;
      *(undefined8 *)(param_2 + 0x17a31) = 0;
    }
    else if (*(char *)(param_2 + 0x17a30) == '\0') {
      FUN_100dffc0c(puVar36);
    }
    if (lVar38 == -0x7fffffffffffffe0) {
      uVar13 = *(undefined8 *)(puVar6 + 0x3a08);
      uVar35 = *(undefined8 *)(puVar6 + 0x3a00);
      uVar45 = *(undefined8 *)(puVar6 + 0x3a18);
      uVar42 = *(undefined8 *)(puVar6 + 0x3a10);
      *(undefined8 *)(puVar6 + -0x11d8) = *(undefined8 *)(puVar6 + 0x3a08);
      *(undefined8 *)(puVar6 + -0x11e0) = *(undefined8 *)(puVar6 + 0x3a00);
      *(undefined8 *)(puVar6 + -0x11c8) = *(undefined8 *)(puVar6 + 0x3a18);
      *(undefined8 *)(puVar6 + -0x11d0) = *(undefined8 *)(puVar6 + 0x3a10);
      uVar41 = *(undefined8 *)(puVar6 + 0x3a28);
      uVar14 = *(undefined8 *)(puVar6 + 0x3a20);
      uVar49 = *(undefined8 *)(puVar6 + 0x3a38);
      uVar46 = *(undefined8 *)(puVar6 + 0x3a30);
      *(undefined8 *)(puVar6 + -0x11b8) = *(undefined8 *)(puVar6 + 0x3a28);
      *(undefined8 *)(puVar6 + -0x11c0) = *(undefined8 *)(puVar6 + 0x3a20);
      *(undefined8 *)(puVar6 + -0x11a8) = *(undefined8 *)(puVar6 + 0x3a38);
      *(undefined8 *)(puVar6 + -0x11b0) = *(undefined8 *)(puVar6 + 0x3a30);
      *(undefined8 *)(param_2 + 0x4fc8) = *(undefined8 *)(param_2 + 0x4dc8);
      *(undefined8 *)(param_2 + 0x4fc0) = *(undefined8 *)(param_2 + 0x4dc0);
      *(undefined8 *)(param_2 + 0x4fd8) = *(undefined8 *)(param_2 + 0x4dd8);
      *(undefined8 *)(param_2 + 0x4fd0) = *(undefined8 *)(param_2 + 0x4dd0);
      *(undefined8 *)(param_2 + 0x4fe8) = *(undefined8 *)(param_2 + 0x4de8);
      *(undefined8 *)(param_2 + 0x4fe0) = *(undefined8 *)(param_2 + 0x4de0);
      *(undefined8 *)(param_2 + 0x4ff8) = *(undefined8 *)(param_2 + 0x4df8);
      *(undefined8 *)(param_2 + 0x4ff0) = *(undefined8 *)(param_2 + 0x4df0);
      *(undefined8 *)(param_2 + 0x4fa8) = *(undefined8 *)(param_2 + 0x4da8);
      *puVar36 = *(undefined8 *)(param_2 + 0x4da0);
      *(undefined8 *)(param_2 + 0x4fb8) = *(undefined8 *)(param_2 + 0x4db8);
      *(undefined8 *)(param_2 + 0x4fb0) = *(undefined8 *)(param_2 + 0x4db0);
      uVar16 = *(undefined8 *)(param_2 + 0x26d0);
      *(undefined1 *)(param_2 + 0x4f9b) = 0;
      *(undefined1 *)(param_2 + 0x4f8e) = 0;
      *(undefined8 *)(param_2 + 0x5000) = uVar16;
      *(undefined8 *)(param_2 + 0x5030) = uVar41;
      *(undefined8 *)(param_2 + 0x5028) = uVar14;
      *(undefined8 *)(param_2 + 0x5040) = uVar49;
      *(undefined8 *)(param_2 + 0x5038) = uVar46;
      *(undefined8 *)(param_2 + 0x5010) = uVar13;
      *(undefined8 *)(param_2 + 0x5008) = uVar35;
      *(undefined8 *)(param_2 + 0x5020) = uVar45;
      *(undefined8 *)(param_2 + 0x5018) = uVar42;
      uVar35 = *(undefined8 *)(puVar6 + 0x3a40);
      *(undefined8 *)(param_2 + 0x5050) = *(undefined8 *)(puVar6 + 0x3a48);
      *(undefined8 *)(param_2 + 0x5048) = uVar35;
      *(undefined1 *)(param_2 + 0x5470) = 0;
LAB_101193478:
      *(undefined1 *)(param_2 + 0x5475) = 0;
      *(undefined4 *)(param_2 + 0x5471) = 0;
      *(undefined8 *)(param_2 + 0x5058) = uVar16;
      *(undefined8 *)(param_2 + 0x5068) = *(undefined8 *)(param_2 + 0x5010);
      *(undefined8 *)(param_2 + 0x5060) = *(undefined8 *)(param_2 + 0x5008);
      *(undefined8 *)(param_2 + 0x5078) = *(undefined8 *)(param_2 + 0x5020);
      *(undefined8 *)(param_2 + 0x5070) = *(undefined8 *)(param_2 + 0x5018);
      *(undefined8 *)(param_2 + 0x5088) = *(undefined8 *)(param_2 + 0x5030);
      *(undefined8 *)(param_2 + 0x5080) = *(undefined8 *)(param_2 + 0x5028);
      *(undefined8 *)(param_2 + 0x5098) = *(undefined8 *)(param_2 + 0x5040);
      *(undefined8 *)(param_2 + 0x5090) = *(undefined8 *)(param_2 + 0x5038);
      *(undefined8 *)(param_2 + 0x50a8) = *(undefined8 *)(param_2 + 0x5050);
      *(undefined8 *)(param_2 + 0x50a0) = *(undefined8 *)(param_2 + 0x5048);
      *(undefined2 *)(param_2 + 0x5473) = 0x101;
      *(undefined8 *)(param_2 + 0x50c8) = *(undefined8 *)(param_2 + 0x4fb8);
      *(undefined8 *)(param_2 + 0x50c0) = *(undefined8 *)(param_2 + 0x4fb0);
      *(undefined8 *)(param_2 + 0x50b8) = *(undefined8 *)(param_2 + 0x4fa8);
      *(undefined8 *)(param_2 + 0x50b0) = *(undefined8 *)(param_2 + 0x4fa0);
      *(undefined8 *)(param_2 + 0x5108) = *(undefined8 *)(param_2 + 0x4ff8);
      *(undefined8 *)(param_2 + 0x5100) = *(undefined8 *)(param_2 + 0x4ff0);
      *(undefined8 *)(param_2 + 0x50f8) = *(undefined8 *)(param_2 + 0x4fe8);
      *(undefined8 *)(param_2 + 0x50f0) = *(undefined8 *)(param_2 + 0x4fe0);
      *(undefined8 *)(param_2 + 0x50e8) = *(undefined8 *)(param_2 + 0x4fd8);
      *(undefined8 *)(param_2 + 0x50e0) = *(undefined8 *)(param_2 + 0x4fd0);
      *(undefined8 *)(param_2 + 0x50d8) = *(undefined8 *)(param_2 + 0x4fc8);
      *(undefined8 *)(param_2 + 0x50d0) = *(undefined8 *)(param_2 + 0x4fc0);
      *(long *)(param_2 + 0x5478) = param_2 + 0x5060;
      *(undefined1 *)(param_2 + 0x5490) = 0;
LAB_1011934f8:
      puVar39 = (undefined1 *)(param_2 + 0x5470);
      FUN_1005b8708(puVar6 + 0x1470,param_2 + 0x5478,*param_3);
      lVar34 = *(long *)(puVar6 + 0x1470);
      if (lVar34 == -0x7fffffffffffffff) {
        uVar24 = 3;
        goto LAB_101193524;
      }
      *(undefined1 **)(puVar6 + -0x1250) = puVar39;
      *(undefined8 *)(puVar6 + 0x3db0) = *(undefined8 *)(puVar6 + 0x1490);
      lVar38 = *(long *)(puVar6 + 0x1478);
      *(undefined8 *)(puVar6 + 0x3da8) = *(undefined8 *)(puVar6 + 0x1488);
      *(undefined8 *)(puVar6 + 0x3da0) = *(undefined8 *)(puVar6 + 0x1480);
      *(undefined8 *)(puVar6 + 0x3d68) = *(undefined8 *)(puVar6 + 0x14e0);
      *(undefined8 *)(puVar6 + 0x3d60) = *(undefined8 *)(puVar6 + 0x14d8);
      *(undefined8 *)(puVar6 + 0x3d78) = *(undefined8 *)(puVar6 + 0x14f0);
      *(undefined8 *)(puVar6 + 0x3d70) = *(undefined8 *)(puVar6 + 0x14e8);
      *(undefined8 *)(puVar6 + 0x3d88) = *(undefined8 *)(puVar6 + 0x1500);
      *(undefined8 *)(puVar6 + 0x3d80) = *(undefined8 *)(puVar6 + 0x14f8);
      *(undefined8 *)(puVar6 + 0x3d90) = *(undefined8 *)(puVar6 + 0x1508);
      *(undefined8 *)(puVar6 + 0x3d28) = *(undefined8 *)(puVar6 + 0x14a0);
      *(undefined8 *)(puVar6 + 0x3d20) = *(undefined8 *)(puVar6 + 0x1498);
      *(undefined8 *)(puVar6 + 0x3d38) = *(undefined8 *)(puVar6 + 0x14b0);
      *(undefined8 *)(puVar6 + 0x3d30) = *(undefined8 *)(puVar6 + 0x14a8);
      *(undefined8 *)(puVar6 + 0x3d48) = *(undefined8 *)(puVar6 + 0x14c0);
      *(undefined8 *)(puVar6 + 0x3d40) = *(undefined8 *)(puVar6 + 0x14b8);
      *(undefined8 *)(puVar6 + 0x3d58) = *(undefined8 *)(puVar6 + 0x14d0);
      *(undefined8 *)(puVar6 + 0x3d50) = *(undefined8 *)(puVar6 + 0x14c8);
      _memcpy(puVar6 + 0x3bd0,puVar6 + 0x1510,0x150);
      if ((*(char *)(param_2 + 0x5490) == '\x03') &&
         (lVar40 = *(long *)(param_2 + 0x5488), lVar40 != 0)) {
        FUN_100d07adc(lVar40);
        _free(lVar40);
      }
      *(long **)(puVar6 + -0x1238) = param_3;
      if (lVar34 == -0x8000000000000000) {
        *(undefined8 *)(puVar6 + -0x1178) = *(undefined8 *)(puVar6 + 0x3da8);
        *(undefined8 *)(puVar6 + -0x1180) = *(undefined8 *)(puVar6 + 0x3da0);
        *(undefined8 *)(puVar6 + -0x1170) = *(undefined8 *)(puVar6 + 0x3db0);
        *(undefined8 *)(puVar6 + 0x3ee8) = *(undefined8 *)(puVar6 + 0x3d68);
        *(undefined8 *)(puVar6 + 0x3ee0) = *(undefined8 *)(puVar6 + 0x3d60);
        *(undefined8 *)(puVar6 + 0x3ef8) = *(undefined8 *)(puVar6 + 0x3d78);
        *(undefined8 *)(puVar6 + 0x3ef0) = *(undefined8 *)(puVar6 + 0x3d70);
        *(undefined8 *)(puVar6 + 0x3f08) = *(undefined8 *)(puVar6 + 0x3d88);
        *(undefined8 *)(puVar6 + 0x3f00) = *(undefined8 *)(puVar6 + 0x3d80);
        *(undefined8 *)(puVar6 + 0x3f10) = *(undefined8 *)(puVar6 + 0x3d90);
        *(undefined8 *)(puVar6 + 0x3ea8) = *(undefined8 *)(puVar6 + 0x3d28);
        *(undefined8 *)(puVar6 + 0x3ea0) = *(undefined8 *)(puVar6 + 0x3d20);
        *(undefined8 *)(puVar6 + 0x3eb8) = *(undefined8 *)(puVar6 + 0x3d38);
        *(undefined8 *)(puVar6 + 0x3eb0) = *(undefined8 *)(puVar6 + 0x3d30);
        lVar40 = -0x8000000000000000;
        *(undefined8 *)(puVar6 + 0x3ec8) = *(undefined8 *)(puVar6 + 0x3d48);
        *(undefined8 *)(puVar6 + 0x3ec0) = *(undefined8 *)(puVar6 + 0x3d40);
        *(undefined8 *)(puVar6 + 0x3ed8) = *(undefined8 *)(puVar6 + 0x3d58);
        *(undefined8 *)(puVar6 + 0x3ed0) = *(undefined8 *)(puVar6 + 0x3d50);
      }
      else {
        *(undefined2 *)(param_2 + 0x5471) = 0x101;
        *(long *)(param_2 + 0x5110) = lVar34;
        *(long *)(param_2 + 0x5118) = lVar38;
        uVar16 = *(undefined8 *)(puVar6 + 0x3da0);
        *(undefined8 *)(param_2 + 0x5128) = *(undefined8 *)(puVar6 + 0x3da8);
        *(undefined8 *)(param_2 + 0x5120) = uVar16;
        *(undefined8 *)(param_2 + 0x5130) = *(undefined8 *)(puVar6 + 0x3db0);
        *(undefined8 *)(param_2 + 0x51a8) = *(undefined8 *)(puVar6 + 0x3d90);
        uVar16 = *(undefined8 *)(puVar6 + 0x3d60);
        uVar13 = *(undefined8 *)(puVar6 + 0x3d78);
        uVar35 = *(undefined8 *)(puVar6 + 0x3d70);
        *(undefined8 *)(param_2 + 0x5180) = *(undefined8 *)(puVar6 + 0x3d68);
        *(undefined8 *)(param_2 + 0x5178) = uVar16;
        *(undefined8 *)(param_2 + 0x5190) = uVar13;
        *(undefined8 *)(param_2 + 0x5188) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x3d80);
        *(undefined8 *)(param_2 + 0x51a0) = *(undefined8 *)(puVar6 + 0x3d88);
        *(undefined8 *)(param_2 + 0x5198) = uVar16;
        uVar16 = *(undefined8 *)(puVar6 + 0x3d20);
        uVar13 = *(undefined8 *)(puVar6 + 0x3d38);
        uVar35 = *(undefined8 *)(puVar6 + 0x3d30);
        *(undefined8 *)(param_2 + 0x5140) = *(undefined8 *)(puVar6 + 0x3d28);
        *(undefined8 *)(param_2 + 0x5138) = uVar16;
        *(undefined8 *)(param_2 + 0x5150) = uVar13;
        *(undefined8 *)(param_2 + 0x5148) = uVar35;
        uVar16 = *(undefined8 *)(puVar6 + 0x3d40);
        uVar13 = *(undefined8 *)(puVar6 + 0x3d58);
        uVar35 = *(undefined8 *)(puVar6 + 0x3d50);
        *(undefined8 *)(param_2 + 0x5160) = *(undefined8 *)(puVar6 + 0x3d48);
        *(undefined8 *)(param_2 + 0x5158) = uVar16;
        *(undefined8 *)(param_2 + 0x5170) = uVar13;
        *(undefined8 *)(param_2 + 0x5168) = uVar35;
        _memcpy(param_2 + 0x51b0,puVar6 + 0x3bd0,0x150);
        if ((*(int *)(param_2 + 0x5128) == 0x14) && (*(long *)(param_2 + 0x5120) == 0)) {
          *(undefined2 *)(param_2 + 0x5471) = 0;
          *(undefined1 *)(param_2 + 0x5475) = 1;
          _memcpy(param_2 + 0x5300,param_2 + 0x5130,0x170);
          if (lVar34 != 0) {
            _free(lVar38);
          }
          *(long *)(param_2 + 0x5478) = *(long *)(*(long *)(param_2 + 0x5058) + 0x98) + 0x10;
          *(undefined1 *)(param_2 + 0x54d0) = 0;
          puVar39 = *(undefined1 **)(puVar6 + -0x1250);
          goto LAB_101193d34;
        }
        *(undefined1 *)(param_2 + 0x5475) = 0;
        lVar40 = -0x8000000000000000;
        lVar38 = -0x7ffffffffffffffb;
joined_r0x0001011945c8:
        if (lVar34 != 0) {
          _free(*(undefined8 *)(param_2 + 0x5118));
        }
LAB_101193768:
        if (*(int *)(param_2 + 0x5128) == 0x14) {
          if ((*(byte *)(param_2 + 0x5471) & 1) != 0) {
            FUN_100e26e4c(param_2 + 0x5130);
          }
        }
        else {
          func_0x000100dfc74c(param_2 + 0x5128);
        }
      }
      *(undefined2 *)(param_2 + 0x5471) = 0;
      if ((*(byte *)(param_2 + 0x5473) & 1) != 0) {
        lVar34 = *(ulong *)(param_2 + 0x50b0) + 0x7ffffffffffffffa;
        if (*(ulong *)(param_2 + 0x50b0) < 0x8000000000000006) {
          lVar34 = 6;
        }
        if (lVar34 == 6) {
          FUN_100e0fca4(param_2 + 0x50b0);
        }
        else if ((lVar34 == 4) && (*(long *)(param_2 + 0x50b8) != 0)) {
          _free(*(undefined8 *)(param_2 + 0x50c0));
        }
      }
      *(undefined1 *)(param_2 + 0x5473) = 0;
      if ((*(byte *)(param_2 + 0x5474) & 1) != 0) {
        FUN_100dea470(param_2 + 0x5060);
      }
      *(undefined1 *)(param_2 + 0x5474) = 0;
      goto LAB_101193808;
    }
    *(undefined8 *)(puVar6 + 0x3c38) = *(undefined8 *)(puVar6 + 0x39d8);
    *(undefined8 *)(puVar6 + 0x3c30) = *(undefined8 *)(puVar6 + 0x39d0);
    *(undefined8 *)(puVar6 + 0x3c48) = *(undefined8 *)(puVar6 + 0x39e8);
    *(undefined8 *)(puVar6 + 0x3c40) = *(undefined8 *)(puVar6 + 0x39e0);
    *(undefined8 *)(puVar6 + 0x3c58) = *(undefined8 *)(puVar6 + 0x39f8);
    *(undefined8 *)(puVar6 + 0x3c50) = *(undefined8 *)(puVar6 + 0x39f0);
    *(undefined8 *)(puVar6 + 0x3bf8) = *(undefined8 *)(puVar6 + 0x3a28);
    *(undefined8 *)(puVar6 + 0x3bf0) = *(undefined8 *)(puVar6 + 0x3a20);
    *(undefined8 *)(puVar6 + 0x3c08) = *(undefined8 *)(puVar6 + 0x3a38);
    *(undefined8 *)(puVar6 + 0x3c00) = *(undefined8 *)(puVar6 + 0x3a30);
    *(undefined8 *)(puVar6 + 0x3c28) = *(undefined8 *)(puVar6 + 0x39c8);
    *(undefined8 *)(puVar6 + 0x3c20) = *(undefined8 *)(puVar6 + 0x39c0);
    *(undefined8 *)(puVar6 + 0x3c18) = *(undefined8 *)(puVar6 + 0x3a48);
    *(undefined8 *)(puVar6 + 0x3c10) = *(undefined8 *)(puVar6 + 0x3a40);
    *(undefined8 *)(puVar6 + 0x3be8) = *(undefined8 *)(puVar6 + 0x3a18);
    *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + 0x3a10);
    *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + 0x3a08);
    *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + 0x3a00);
    bVar20 = *(byte *)(param_2 + 0x4f8e);
joined_r0x0001011936b4:
    if ((bVar20 & 1) != 0) {
      lVar34 = *(ulong *)(param_2 + 0x4da0) + 0x7ffffffffffffffa;
      if (*(ulong *)(param_2 + 0x4da0) < 0x8000000000000006) {
        lVar34 = 6;
      }
      if (lVar34 == 6) {
        FUN_100e0fca4(param_2 + 0x4da0);
      }
      else if ((lVar34 == 4) && (*(long *)(param_2 + 0x4da8) != 0)) {
        _free(*(undefined8 *)(param_2 + 0x4db0));
      }
    }
    *(undefined1 *)(param_2 + 0x4f8e) = 0;
    *(undefined1 *)(param_2 + 0x4f9c) = 0;
  }
  else {
    *(undefined8 *)(puVar6 + 0x3c30) = *(undefined8 *)(puVar6 + 0x14d8);
    *(undefined8 *)(puVar6 + 0x3c28) = *(undefined8 *)(puVar6 + 0x14d0);
    *(undefined8 *)(puVar6 + 0x3c40) = *(undefined8 *)(puVar6 + 0x14e8);
    *(undefined8 *)(puVar6 + 0x3c38) = *(undefined8 *)(puVar6 + 0x14e0);
    *(undefined8 *)(puVar6 + 0x3c50) = *(undefined8 *)(puVar6 + 0x14f8);
    *(undefined8 *)(puVar6 + 0x3c48) = *(undefined8 *)(puVar6 + 0x14f0);
    *(undefined8 *)(puVar6 + 0x3bf0) = *(undefined8 *)(puVar6 + 0x1498);
    *(undefined8 *)(puVar6 + 0x3be8) = *(undefined8 *)(puVar6 + 0x1490);
    *(undefined8 *)(puVar6 + 0x3c00) = *(undefined8 *)(puVar6 + 0x14a8);
    *(undefined8 *)(puVar6 + 0x3bf8) = *(undefined8 *)(puVar6 + 0x14a0);
    *(undefined8 *)(puVar6 + 0x3c10) = *(undefined8 *)(puVar6 + 0x14b8);
    *(undefined8 *)(puVar6 + 0x3c08) = *(undefined8 *)(puVar6 + 0x14b0);
    *(undefined8 *)(puVar6 + 0x3c20) = *(undefined8 *)(puVar6 + 0x14c8);
    *(undefined8 *)(puVar6 + 0x3c18) = *(undefined8 *)(puVar6 + 0x14c0);
    *(undefined8 *)(puVar6 + 0x3c58) = *(undefined8 *)(puVar6 + 0x1500);
    *(undefined8 *)(puVar6 + 0x3be0) = *(undefined8 *)(puVar6 + -0x1220);
    *(undefined8 *)(puVar6 + 0x3bd8) = *(undefined8 *)(puVar6 + -0x1228);
    *(undefined8 *)(puVar6 + 0x3bd0) = *(undefined8 *)(puVar6 + -0x1230);
  }
  *(undefined1 *)(param_2 + 0x4f9a) = 0;
  uVar16 = 0x8000000000000000;
LAB_101193a58:
  if ((*(byte *)(param_2 + 0x4f8f) & 1) != 0) {
    func_0x000100e367e8(param_2 + 0x4d70);
  }
  *(undefined1 *)(param_2 + 0x4f8f) = 0;
  lVar40 = *(long *)(param_2 + 0x4d60);
  lVar34 = *(long *)(param_2 + 0x4d68);
  if (lVar34 != 0) {
    puVar36 = (undefined8 *)(lVar40 + 0x20);
    do {
      if (puVar36[-4] != 0) {
        _free(puVar36[-3]);
      }
      if (puVar36[-1] != 0) {
        _free(*puVar36);
      }
      puVar36 = puVar36 + 6;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
  }
  if (*(long *)(param_2 + 0x4d58) != 0) {
    _free(lVar40);
  }
  if (((*(byte *)(param_2 + 0x4f90) & 1) != 0) &&
     (lVar34 = *(long *)(param_2 + 0x4d28), lVar34 != -0x7fffffffffffffff)) {
    if ((lVar34 != -0x8000000000000000) && (lVar34 != 0)) {
      _free(*(undefined8 *)(param_2 + 0x4d30));
    }
    if ((*(long *)(param_2 + 0x4d40) != -0x8000000000000000) && (*(long *)(param_2 + 0x4d40) != 0))
    {
      _free(*(undefined8 *)(param_2 + 0x4d48));
    }
  }
  *(undefined1 *)(param_2 + 0x4f90) = 0;
  if (((*(byte *)(param_2 + 0x4f91) & 1) != 0) &&
     (plVar31 = *(long **)(param_2 + 0x4d20), plVar31 != (long *)0x0)) {
    lVar34 = *plVar31;
    *plVar31 = lVar34 + -1;
    LORelease();
    if (lVar34 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7f267950a2ac0cb8E(param_2 + 0x4d20);
    }
  }
  *(undefined1 *)(param_2 + 0x4f91) = 0;
  if (((*(byte *)(param_2 + 0x4f92) & 1) != 0) &&
     (plVar31 = *(long **)(param_2 + 0x4d18), plVar31 != (long *)0x0)) {
    lVar34 = *plVar31;
    *plVar31 = lVar34 + -1;
    LORelease();
    if (lVar34 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9e4825ff52dbcf0E(param_2 + 0x4d18);
    }
  }
  *(undefined1 *)(param_2 + 0x4f92) = 0;
  if ((((*(byte *)(param_2 + 0x4f93) & 1) != 0) &&
      (*(long *)(param_2 + 0x4d00) != -0x8000000000000000)) && (*(long *)(param_2 + 0x4d00) != 0)) {
    _free(*(undefined8 *)(param_2 + 0x4d08));
  }
  *(undefined1 *)(param_2 + 0x4f93) = 0;
  if ((*(byte *)(param_2 + 0x4f94) & 1) != 0) {
    uVar35 = *(undefined8 *)(param_2 + 0x4cf0);
    FUN_100e40160(uVar35,*(undefined8 *)(param_2 + 0x4cf8));
    if (*(long *)(param_2 + 0x4ce8) != 0) {
      _free(uVar35);
    }
  }
  *(undefined1 *)(param_2 + 0x4f94) = 0;
  if ((*(byte *)(param_2 + 0x4f95) & 1) == 0) {
LAB_101193c0c:
    *(undefined1 *)(param_2 + 0x4f95) = 0;
    bVar20 = *(byte *)(param_2 + 0x4f96);
  }
  else {
    lVar34 = *(ulong *)(param_2 + 0x4c88) + 0x7ffffffffffffffa;
    if (*(ulong *)(param_2 + 0x4c88) < 0x8000000000000006) {
      lVar34 = 6;
    }
    if (lVar34 != 6) {
      if ((lVar34 == 4) && (*(long *)(param_2 + 0x4c90) != 0)) {
        _free(*(undefined8 *)(param_2 + 0x4c98));
      }
      goto LAB_101193c0c;
    }
    FUN_100e0fca4(param_2 + 0x4c88);
    *(undefined1 *)(param_2 + 0x4f95) = 0;
    bVar20 = *(byte *)(param_2 + 0x4f96);
  }
  if ((bVar20 & 1) != 0) {
    if (*(long *)(param_2 + 0x4c68) != -1) {
      plVar31 = (long *)(*(long *)(param_2 + 0x4c68) + 8);
      lVar34 = *plVar31;
      *plVar31 = lVar34 + -1;
      LORelease();
      if (lVar34 == 1) {
        DataMemoryBarrier(2,1);
        _free();
      }
    }
    lVar34 = **(long **)(param_2 + 0x4c70);
    **(long **)(param_2 + 0x4c70) = lVar34 + -1;
    LORelease();
    if (lVar34 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0ebc710aaa72b233E(param_2 + 0x4c70);
    }
  }
  *(undefined1 *)(param_2 + 0x4f96) = 0;
  if ((*(byte *)(param_2 + 0x4f97) & 1) != 0) {
    lVar34 = **(long **)(param_2 + 0x4c60);
    **(long **)(param_2 + 0x4c60) = lVar34 + -1;
    LORelease();
    if (lVar34 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_2 + 0x4c60);
    }
  }
  *(undefined1 *)(param_2 + 0x4f97) = 0;
  if ((*(byte *)(param_2 + 0x4f98) & 1) != 0) {
    FUN_100e0f9a4(param_2 + 0x4c20);
  }
  *(undefined1 *)(param_2 + 0x4f98) = 0;
  if ((*(byte *)(param_2 + 0x4f99) & 1) != 0) {
    FUN_100de93d0(param_2 + 0x26d8);
  }
  *(undefined1 *)(param_2 + 0x4f99) = 0;
LAB_101194f1c:
  uVar35 = *(undefined8 *)(puVar6 + 0x3c30);
  uVar14 = *(undefined8 *)(puVar6 + 0x3c48);
  uVar13 = *(undefined8 *)(puVar6 + 0x3c40);
  param_1[0xf] = *(undefined8 *)(puVar6 + 0x3c38);
  param_1[0xe] = uVar35;
  param_1[0x11] = uVar14;
  param_1[0x10] = uVar13;
  uVar35 = *(undefined8 *)(puVar6 + 0x3bf0);
  uVar14 = *(undefined8 *)(puVar6 + 0x3c08);
  uVar13 = *(undefined8 *)(puVar6 + 0x3c00);
  param_1[7] = *(undefined8 *)(puVar6 + 0x3bf8);
  param_1[6] = uVar35;
  param_1[9] = uVar14;
  param_1[8] = uVar13;
  uVar13 = *(undefined8 *)(puVar6 + 0x3c28);
  uVar35 = *(undefined8 *)(puVar6 + 0x3c20);
  uVar14 = *(undefined8 *)(puVar6 + 0x3c10);
  param_1[0xb] = *(undefined8 *)(puVar6 + 0x3c18);
  param_1[10] = uVar14;
  param_1[0xd] = uVar13;
  param_1[0xc] = uVar35;
  uVar13 = *(undefined8 *)(puVar6 + 0x3be8);
  uVar35 = *(undefined8 *)(puVar6 + 0x3be0);
  uVar14 = *(undefined8 *)(puVar6 + 0x3bd0);
  param_1[3] = *(undefined8 *)(puVar6 + 0x3bd8);
  param_1[2] = uVar14;
  param_1[5] = uVar13;
  param_1[4] = uVar35;
  uVar13 = *(undefined8 *)(puVar6 + -0x1038);
  uVar35 = *(undefined8 *)(puVar6 + -0x1040);
  uVar41 = *(undefined8 *)(puVar6 + -0x1028);
  uVar14 = *(undefined8 *)(puVar6 + -0x1030);
  uVar46 = *(undefined8 *)(puVar6 + -0x1058);
  uVar45 = *(undefined8 *)(puVar6 + -0x1060);
  uVar42 = *(undefined8 *)(puVar6 + -0x1050);
  param_1[0x27] = *(undefined8 *)(puVar6 + -0x1048);
  param_1[0x26] = uVar42;
  param_1[0x29] = uVar13;
  param_1[0x28] = uVar35;
  uVar13 = *(undefined8 *)(puVar6 + -0x1018);
  uVar35 = *(undefined8 *)(puVar6 + -0x1020);
  param_1[0x2b] = uVar41;
  param_1[0x2a] = uVar14;
  param_1[0x2d] = uVar13;
  param_1[0x2c] = uVar35;
  uVar13 = *(undefined8 *)(puVar6 + -0x1078);
  uVar35 = *(undefined8 *)(puVar6 + -0x1080);
  uVar41 = *(undefined8 *)(puVar6 + -0x1068);
  uVar14 = *(undefined8 *)(puVar6 + -0x1070);
  uVar50 = *(undefined8 *)(puVar6 + -0x1098);
  uVar49 = *(undefined8 *)(puVar6 + -0x10a0);
  uVar42 = *(undefined8 *)(puVar6 + -0x1090);
  param_1[0x1f] = *(undefined8 *)(puVar6 + -0x1088);
  param_1[0x1e] = uVar42;
  param_1[0x21] = uVar13;
  param_1[0x20] = uVar35;
  param_1[0x23] = uVar41;
  param_1[0x22] = uVar14;
  param_1[0x25] = uVar46;
  param_1[0x24] = uVar45;
  uVar13 = *(undefined8 *)(puVar6 + -0x10b8);
  uVar35 = *(undefined8 *)(puVar6 + -0x10c0);
  uVar41 = *(undefined8 *)(puVar6 + -0x10a8);
  uVar14 = *(undefined8 *)(puVar6 + -0x10b0);
  uVar46 = *(undefined8 *)(puVar6 + -0x10d8);
  uVar45 = *(undefined8 *)(puVar6 + -0x10e0);
  uVar42 = *(undefined8 *)(puVar6 + -0x10d0);
  param_1[0x17] = *(undefined8 *)(puVar6 + -0x10c8);
  param_1[0x16] = uVar42;
  param_1[0x19] = uVar13;
  param_1[0x18] = uVar35;
  *param_1 = uVar16;
  param_1[1] = lVar38;
  param_1[0x1b] = uVar41;
  param_1[0x1a] = uVar14;
  param_1[0x1d] = uVar50;
  param_1[0x1c] = uVar49;
  uVar16 = *(undefined8 *)(puVar6 + 0x3c50);
  param_1[0x13] = *(undefined8 *)(puVar6 + 0x3c58);
  param_1[0x12] = uVar16;
  param_1[0x15] = uVar46;
  param_1[0x14] = uVar45;
  param_1[0x2e] = param_3;
  uVar16 = *(undefined8 *)(puVar6 + 0x3a60);
  uVar24 = 1;
  param_1[0x30] = *(undefined8 *)(puVar6 + 0x3a68);
  param_1[0x2f] = uVar16;
LAB_101194fa0:
  *(undefined1 *)(param_2 + 0x4f8a) = uVar24;
  return;
}

