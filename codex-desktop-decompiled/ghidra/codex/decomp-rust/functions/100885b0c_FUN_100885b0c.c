
undefined8 FUN_100885b0c(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x1;
  long lVar8;
  undefined1 uVar9;
  long unaff_x19;
  undefined8 unaff_x22;
  long lVar10;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000120,s_exec_failed__108ac9bda,&stack0x00000110);
  uVar4 = unaff_x23[0x10];
  unaff_x23[1] = unaff_x23[0x11];
  *unaff_x23 = uVar4;
  uVar13 = unaff_x23[0xd];
  uVar11 = unaff_x23[0xc];
  unaff_x23[0xb] = uVar13;
  unaff_x23[10] = uVar11;
  *(undefined8 *)(unaff_x19 + 0x518) = unaff_x23[0x11];
  *(undefined8 *)(unaff_x19 + 0x510) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x520) = in_stack_00000130;
  *(undefined8 *)(unaff_x19 + 0x528) = unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x570) = 0xffffffffffff80a5;
  *(undefined8 *)(unaff_x19 + 0x578) = unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x580) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x590) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x588) = uVar11;
  *(long *)(unaff_x19 + 0x598) = unaff_x26 + 0x10;
  *(undefined1 *)(unaff_x19 + 0x5c8) = 0;
  iVar3 = FUN_1008927b8(unaff_x19 + 0x510);
  if (iVar3 != 0) {
    uVar4 = 1;
    uVar9 = 5;
    goto LAB_100885de4;
  }
  FUN_100d84c5c(unaff_x19 + 0x510);
  FUN_100df5738(unaff_x19 + 0x478);
  *(long *)(unaff_x19 + 0x478) = *(long *)(unaff_x19 + 0x348) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x4e8) = 0;
  pcVar5 = (char *)FUN_100fd3e50(unaff_x19 + 0x478);
  if (pcVar5 == (char *)0x0) {
    uVar4 = 1;
    uVar9 = 6;
    goto LAB_100885de4;
  }
  if (((*(char *)(unaff_x19 + 0x4e8) == '\x03') && (*(char *)(unaff_x19 + 0x4e0) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x498) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x4a0);
    if (*(long *)(unaff_x19 + 0x4a8) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x4a8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x4b0));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 0x298);
  uVar4 = FUN_100e8dec4(*(undefined8 *)(pcVar5 + 0x48),*(undefined8 *)(pcVar5 + 0x50),puVar1);
  lVar10 = *(long *)(pcVar5 + 0x28);
  uVar12 = *(ulong *)(pcVar5 + 0x30);
  lVar6 = FUN_1016e8788(lVar10,uVar12,uVar4,puVar1);
  if (lVar6 == 0) {
LAB_100885ce8:
    in_stack_00000120 = 0;
  }
  else {
    lVar8 = (lVar10 - lVar6 >> 3) * -0x3333333333333333;
    puVar2 = (undefined8 *)(lVar10 + (uVar12 & lVar8 - 8U));
    uVar4 = *puVar2;
    uVar11 = *(undefined8 *)(lVar10 + lVar8);
    uVar12 = CONCAT17(-((char)((ulong)uVar11 >> 0x38) == -1),
                      CONCAT16(-((char)((ulong)uVar11 >> 0x30) == -1),
                               CONCAT15(-((char)((ulong)uVar11 >> 0x28) == -1),
                                        CONCAT14(-((char)((ulong)uVar11 >> 0x20) == -1),
                                                 CONCAT13(-((char)((ulong)uVar11 >> 0x18) == -1),
                                                          CONCAT12(-((char)((ulong)uVar11 >> 0x10)
                                                                    == -1),CONCAT11(-((char)((ulong)
                                                  uVar11 >> 8) == -1),-((char)uVar11 == -1))))))));
    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    if (((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) +
        ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar4 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar4 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar4 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar4 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar4 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar4 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar4 >> 8) == -1),
                                                           -((char)uVar4 == -1))))))))) >> 3) < 8) {
      *(long *)(pcVar5 + 0x38) = *(long *)(pcVar5 + 0x38) + 1;
      uVar9 = 0xff;
    }
    else {
      uVar9 = 0x80;
    }
    *(undefined1 *)(lVar10 + lVar8) = uVar9;
    *(undefined1 *)(puVar2 + 1) = uVar9;
    *(long *)(pcVar5 + 0x40) = *(long *)(pcVar5 + 0x40) + -1;
    lVar8 = *(long *)(lVar6 + -0x28);
    lVar10 = *(long *)(lVar6 + -8);
    if (lVar8 != -0x8000000000000000) {
      if (lVar8 == -0x7fffffffffffffff) goto LAB_100885ce8;
      if (lVar8 != 0) {
        _free(*(undefined8 *)(lVar6 + -0x20));
      }
    }
    in_stack_00000120 = 1;
  }
  in_stack_00000128 = lVar10;
  FUN_100e8cef4(&stack0x00000120);
  if (*pcVar5 == '\0') {
    *pcVar5 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar5,extraout_x1,1000000000);
  }
  FUN_1060fa678(pcVar5,1,pcVar5);
  if (*(short *)(unaff_x19 + 0x350) != 2) {
    FUN_100e0f38c(unaff_x19 + 0x350);
    __ZN88__LT_codex_network_proxy__proxy__NetworkProxyHandle_u20_as_u20_core__ops__drop__Drop_GT_4drop17h7475fa153e4f7c07E
              ((undefined8 *)(unaff_x19 + 0x3c0));
    plVar7 = *(long **)(unaff_x19 + 0x3c0);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 == 0xcc) {
        *plVar7 = 0x84;
      }
      else {
        (**(code **)(plVar7[2] + 0x20))();
      }
    }
    plVar7 = *(long **)(unaff_x19 + 0x3c8);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 == 0xcc) {
        *plVar7 = 0x84;
      }
      else {
        (**(code **)(plVar7[2] + 0x20))();
      }
    }
  }
  lVar10 = **(long **)(unaff_x19 + 0x340);
  **(long **)(unaff_x19 + 0x340) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x340);
  }
  lVar10 = **(long **)(unaff_x19 + 0x348);
  **(long **)(unaff_x19 + 0x348) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7df7af726d1ba829E(unaff_x19 + 0x348);
  }
  if ((*puVar1 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x2a0));
  }
  uVar4 = 0;
  uVar9 = 1;
LAB_100885de4:
  *(undefined1 *)(unaff_x19 + 0x470) = uVar9;
  return uVar4;
}

