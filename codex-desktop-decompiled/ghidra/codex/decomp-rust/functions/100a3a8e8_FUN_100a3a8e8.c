
undefined1  [16] FUN_100a3a8e8(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *unaff_x21;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char *pcVar4;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      func_0x000108a07af4(&UNK_10b22ad40);
LAB_100a3aa6c:
      func_0x000108a07b10(&UNK_10b22ad40);
      goto LAB_100a3aa78;
    }
    param_1[1] = *param_1 + 0xe0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else if (bVar1 != 3) goto LAB_100a3aa6c;
  auVar6 = FUN_100fd3e50(param_1 + 1);
  uVar5 = auVar6._8_8_;
  pcVar4 = auVar6._0_8_;
  if (pcVar4 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 3;
    uVar5 = 2;
    goto LAB_100a3aa30;
  }
  if ((((char)param_1[0xf] == '\x03') && ((char)param_1[0xe] == '\x03')) &&
     ((char)param_1[5] == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 6);
    uVar5 = extraout_x1;
    if (param_1[7] != 0) {
      (**(code **)(param_1[7] + 0x18))(param_1[8]);
      uVar5 = extraout_x1_00;
    }
  }
  lVar3 = 0;
  if (0x8000000000000004 < *(ulong *)(pcVar4 + 0x28)) {
    lVar3 = *(ulong *)(pcVar4 + 0x28) + 0x7ffffffffffffffb;
  }
  if (lVar3 == 0) {
    auVar6 = func_0x000108856688(&UNK_108cb5627,0x1a);
LAB_100a3a9d0:
    unaff_x21 = auVar6._0_8_;
    uVar5 = 1;
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
    }
    else {
LAB_100a3aa4c:
      unaff_x21 = auVar6._0_8_;
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar4,auVar6._8_8_,1000000000);
    }
  }
  else {
    if (lVar3 == 2) {
      auVar6 = func_0x000108856688(&UNK_108cb5641,0x17);
      goto LAB_100a3a9d0;
    }
    unaff_x21 = *(long **)(pcVar4 + 0x30);
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = unaff_x21;
    lVar3 = *unaff_x21;
    *unaff_x21 = lVar3 + 1;
    if (lVar3 < 0) {
LAB_100a3aa78:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3aa7c);
      (*pcVar2)();
    }
    uVar5 = 0;
    if (*pcVar4 != '\0') goto LAB_100a3aa4c;
    *pcVar4 = '\x01';
  }
  FUN_1060fa678(pcVar4,1,pcVar4);
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB_100a3aa30:
  auVar7._8_8_ = unaff_x21;
  auVar7._0_8_ = uVar5;
  return auVar7;
}

