
undefined8 FUN_1008ea4f4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x19;
  long unaff_x29;
  undefined8 uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *puStack0000000000000050;
  undefined *puStack0000000000000058;
  char *pcStack0000000000000060;
  undefined1 *puStack0000000000000068;
  long lStack0000000000000080;
  long lStack0000000000000088;
  long lStack0000000000000090;
  
  puStack0000000000000068 = &stack0x00000070;
  pcStack0000000000000060 = s_thread___was_already_removed_bef_108acab34;
  puStack0000000000000050 = (undefined1 *)&stack0x00000060;
  puStack0000000000000058 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0x68) = 1;
  *(undefined1 ***)(unaff_x29 + -0x60) = &stack0x00000050;
  *(undefined8 *)(unaff_x29 + -0x58) = 1;
  *(undefined8 *)(unaff_x29 + -0x50) = param_1;
  lStack0000000000000088 = in_stack_00000010;
  lStack0000000000000080 = in_stack_00000008;
  lStack0000000000000090 = in_stack_00000018;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lStack0000000000000080 = 0;
  lStack0000000000000088 = 1;
  lStack0000000000000090 = 0;
  FUN_10624142c(unaff_x29 + -0x68);
  FUN_108855060(&stack0x00000080,0,0x24,1,1);
  puVar1 = (undefined8 *)(lStack0000000000000088 + lStack0000000000000090);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x68);
  puVar1[1] = *(undefined8 *)(unaff_x29 + -0x60);
  *puVar1 = uVar5;
  uVar5 = *(undefined8 *)(unaff_x29 + -0x58);
  puVar1[3] = *(undefined8 *)(unaff_x29 + -0x50);
  puVar1[2] = uVar5;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(unaff_x29 + -0x48);
  lStack0000000000000090 = lStack0000000000000090 + 0x24;
  unaff_x19[0xb] = lStack0000000000000088;
  unaff_x19[10] = lStack0000000000000080;
  unaff_x19[0xc] = lStack0000000000000090;
  unaff_x19[0xd] = (long)(unaff_x19 + 2);
  unaff_x19[0xe] = unaff_x19[0xb];
  unaff_x19[0xf] = unaff_x19[0xc];
  *(undefined1 *)(unaff_x19 + 0x1b7) = 0;
  uVar4 = FUN_10088b5d8(unaff_x19 + 0xd);
  if ((uVar4 & 1) == 0) {
    if ((char)unaff_x19[0x1b7] == '\x03') {
      FUN_100dae278(unaff_x19 + 0x10);
    }
    if (unaff_x19[10] != 0) {
      _free(unaff_x19[0xb]);
    }
    unaff_x19[10] = unaff_x19[7] + 0x10;
    *(undefined1 *)(unaff_x19 + 0x18) = 0;
    pcVar6 = (char *)FUN_100fd3e50(unaff_x19 + 10);
    if (pcVar6 == (char *)0x0) {
      uVar5 = 1;
      uVar8 = 6;
    }
    else {
      if ((((char)unaff_x19[0x18] == '\x03') && ((char)unaff_x19[0x17] == '\x03')) &&
         ((char)unaff_x19[0xe] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0xf);
        if (unaff_x19[0x10] != 0) {
          (**(code **)(unaff_x19[0x10] + 0x18))(unaff_x19[0x11]);
        }
      }
      auVar15 = FUN_100e8ed88(*(undefined8 *)(pcVar6 + 0x48),*(undefined8 *)(pcVar6 + 0x50));
      lVar7 = 0;
      lVar2 = *(long *)(pcVar6 + 0x28);
      uVar3 = *(ulong *)(pcVar6 + 0x30);
      bVar9 = auVar15[7] >> 1;
      uVar11 = auVar15._0_8_ & uVar3;
      uVar5 = *(undefined8 *)(lVar2 + uVar11);
      uVar4 = CONCAT17(-((byte)((ulong)uVar5 >> 0x38) == bVar9),
                       CONCAT16(-((byte)((ulong)uVar5 >> 0x30) == bVar9),
                                CONCAT15(-((byte)((ulong)uVar5 >> 0x28) == bVar9),
                                         CONCAT14(-((byte)((ulong)uVar5 >> 0x20) == bVar9),
                                                  CONCAT13(-((byte)((ulong)uVar5 >> 0x18) == bVar9),
                                                           CONCAT12(-((byte)((ulong)uVar5 >> 0x10)
                                                                     == bVar9),
                                                                    CONCAT11(-((byte)((ulong)uVar5
                                                                                     >> 8) == bVar9)
                                                                             ,-((byte)uVar5 == bVar9
                                                                               )))))))) &
              0x8080808080808080;
      while( true ) {
        while (uVar4 == 0) {
          bVar14 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar5 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar5 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar5 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar5 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar5 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar5 >> 8) ==
                                                                     -1),-((char)uVar5 == -1))))))))
                              ,1);
          if ((bVar14 & 1) != 0) goto LAB_1008ea788;
          lVar7 = lVar7 + 8;
          uVar11 = uVar11 + lVar7 & uVar3;
          uVar5 = *(undefined8 *)(lVar2 + uVar11);
          uVar4 = CONCAT17(-((byte)((ulong)uVar5 >> 0x38) == bVar9),
                           CONCAT16(-((byte)((ulong)uVar5 >> 0x30) == bVar9),
                                    CONCAT15(-((byte)((ulong)uVar5 >> 0x28) == bVar9),
                                             CONCAT14(-((byte)((ulong)uVar5 >> 0x20) == bVar9),
                                                      CONCAT13(-((byte)((ulong)uVar5 >> 0x18) ==
                                                                bVar9),CONCAT12(-((byte)((ulong)
                                                  uVar5 >> 0x10) == bVar9),
                                                  CONCAT11(-((byte)((ulong)uVar5 >> 8) == bVar9),
                                                           -((byte)uVar5 == bVar9)))))))) &
                  0x8080808080808080;
        }
        uVar10 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar11 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar3;
        plVar12 = (long *)(lVar2 + -0x10 + uVar10 * -0x10);
        if (unaff_x19[1] == plVar12[1] && *unaff_x19 == *plVar12) break;
        uVar4 = uVar4 - 1 & uVar4;
      }
      puVar1 = (undefined8 *)(lVar2 + (uVar10 - 8 & uVar3));
      uVar5 = *puVar1;
      uVar13 = *(undefined8 *)(lVar2 + uVar10);
      uVar4 = CONCAT17(-((char)((ulong)uVar13 >> 0x38) == -1),
                       CONCAT16(-((char)((ulong)uVar13 >> 0x30) == -1),
                                CONCAT15(-((char)((ulong)uVar13 >> 0x28) == -1),
                                         CONCAT14(-((char)((ulong)uVar13 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar13 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar13 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar13 >> 8) == -1),-((char)uVar13 == -1))))))));
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      if (((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) +
          ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar5 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar5 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar5 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar5 >> 0x20) == -1),
                                                              CONCAT13(-((char)((ulong)uVar5 >> 0x18
                                                                               ) == -1),
                                                                       CONCAT12(-((char)((ulong)
                                                  uVar5 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar5 >> 8) == -1),
                                                           -((char)uVar5 == -1))))))))) >> 3) < 8) {
        *(long *)(pcVar6 + 0x38) = *(long *)(pcVar6 + 0x38) + 1;
        uVar8 = 0xff;
      }
      else {
        uVar8 = 0x80;
      }
      *(undefined1 *)(lVar2 + uVar10) = uVar8;
      *(undefined1 *)(puVar1 + 1) = uVar8;
      *(long *)(pcVar6 + 0x40) = *(long *)(pcVar6 + 0x40) + -1;
LAB_1008ea788:
      if (*pcVar6 == '\0') {
        *pcVar6 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar6,auVar15._8_8_,1000000000);
      }
      FUN_1060fa678(pcVar6,1,pcVar6);
      lVar7 = *(long *)unaff_x19[5];
      *(long *)unaff_x19[5] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      }
      lVar7 = *(long *)unaff_x19[6];
      *(long *)unaff_x19[6] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE();
      }
      FUN_100e2fff8(unaff_x19 + 2);
      lVar7 = *(long *)unaff_x19[7];
      *(long *)unaff_x19[7] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha0eafd060f29ef9bE();
      }
      lVar7 = *(long *)unaff_x19[8];
      *(long *)unaff_x19[8] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
      }
      uVar5 = 0;
      uVar8 = 1;
    }
  }
  else {
    uVar5 = 1;
    uVar8 = 5;
  }
  *(undefined1 *)((long)unaff_x19 + 0x49) = uVar8;
  return uVar5;
}

