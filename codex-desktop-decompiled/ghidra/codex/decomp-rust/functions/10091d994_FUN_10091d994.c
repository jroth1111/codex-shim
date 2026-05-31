
undefined8 FUN_10091d994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x19;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x29;
  undefined1 auVar12 [16];
  ulong in_stack_00000000;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001c0,s_Login_server_error__108acb46a,unaff_x29 + -0xd0);
  uVar2 = in_stack_000001d0;
  uVar1 = in_stack_000001c8;
  uVar4 = in_stack_000001c0;
  if ((in_stack_00000000 & 3) == 1) {
    uVar10 = *(undefined8 *)(in_stack_00000000 - 1);
    puVar11 = *(undefined8 **)(in_stack_00000000 + 7);
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar10);
    }
    if (puVar11[1] != 0) {
      _free(uVar10);
    }
    _free((undefined8 *)(in_stack_00000000 - 1));
  }
  lVar8 = *(long *)(unaff_x19 + 0x188);
  _memcpy(&stack0x000001c0,unaff_x19 + 0x30,0x138);
  uVar10 = *(undefined8 *)(unaff_x19 + 400);
  *(undefined4 *)(unaff_x19 + 0x1b1) = 0;
  _memcpy(&stack0x00000070,&stack0x000001c0,0x150);
  _memcpy(unaff_x19 + 0x1b8,&stack0x00000070,0x150);
  *(undefined8 *)(unaff_x19 + 0x308) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x310) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x318) = uVar2;
  *(long *)(unaff_x19 + 800) = lVar8 + 0x10;
  *(undefined8 *)(unaff_x19 + 0x328) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x19 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x19 + 0x1a0);
  *(undefined1 *)(unaff_x19 + 0x550) = 0;
  *(undefined1 *)(unaff_x19 + 0x551) = 0;
  iVar3 = FUN_100923b58(unaff_x19 + 0x1b8);
  if (iVar3 == 0) {
    FUN_100d7c54c(unaff_x19 + 0x1b8);
    *(long *)(unaff_x19 + 0x1b8) = *(long *)(unaff_x19 + 0x198) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x228) = 0;
    auVar12 = FUN_100fd3e50(unaff_x19 + 0x1b8);
    uVar4 = auVar12._8_8_;
    pcVar5 = auVar12._0_8_;
    if (pcVar5 == (char *)0x0) {
      uVar4 = 1;
      uVar6 = 5;
    }
    else {
      if (((*(char *)(unaff_x19 + 0x228) == '\x03') && (*(char *)(unaff_x19 + 0x220) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x1d8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x1e0);
        uVar4 = extraout_x1;
        if (*(long *)(unaff_x19 + 0x1e8) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x1e8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x1f0));
          uVar4 = extraout_x1_00;
        }
      }
      pcVar9 = pcVar5 + 0x28;
      if ((*pcVar9 != '\x02') &&
         (*(long *)(pcVar5 + 0x31) == *(long *)(unaff_x19 + 0x1a8) &&
          *(long *)(pcVar5 + 0x29) == *(long *)(unaff_x19 + 0x1a0))) {
        FUN_100e65408(pcVar9);
        *pcVar9 = '\x02';
        uVar4 = extraout_x1_01;
      }
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar5,uVar4,1000000000);
      }
      FUN_1060fa678(pcVar5,1,pcVar5);
      *(undefined1 *)(unaff_x19 + 0x1b4) = 0;
      lVar8 = **(long **)(unaff_x19 + 0x180);
      **(long **)(unaff_x19 + 0x180) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x19 + 0x180);
      }
      lVar8 = **(long **)(unaff_x19 + 0x188);
      **(long **)(unaff_x19 + 0x188) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x188);
      }
      lVar8 = **(long **)(unaff_x19 + 0x198);
      **(long **)(unaff_x19 + 0x198) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h501088909c81a6b0E(unaff_x19 + 0x198);
      }
      uVar4 = 0;
      uVar6 = 1;
    }
  }
  else {
    uVar4 = 1;
    uVar6 = 4;
  }
  *(undefined1 *)(unaff_x19 + 0x1b0) = uVar6;
  return uVar4;
}

