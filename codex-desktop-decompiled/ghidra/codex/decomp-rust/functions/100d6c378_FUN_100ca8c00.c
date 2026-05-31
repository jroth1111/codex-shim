
void FUN_100ca8c00(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  char in_wzr;
  
  cVar3 = *(char *)(param_1 + 0xa3);
  if (cVar3 != '\x03') {
    if (cVar3 == '\x04') {
      if (*(char *)(param_1 + 0xb8) == '\x05') {
        uVar5 = (uint)*(byte *)(param_1 + 0xf2);
        if (*(byte *)(param_1 + 0xf2) < 7) {
          if (1 < uVar5 - 4) {
            if (uVar5 == 6) {
              if (*(long *)(param_1 + 0xf8) != 0) {
                _free(*(undefined8 *)(param_1 + 0x100));
              }
              *(undefined2 *)(param_1 + 0xf0) = 0;
            }
            goto LAB_100ca8d08;
          }
        }
        else if (uVar5 != 7) {
          if (uVar5 != 8) goto LAB_100ca8d08;
          if ((*(byte *)(param_1 + 0xd0) != 0x1a) && (0x18 < *(byte *)(param_1 + 0xd0))) {
            lVar4 = **(long **)(param_1 + 0xd8);
            **(long **)(param_1 + 0xd8) = lVar4 + -1;
            LORelease();
            if (lVar4 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
            }
          }
        }
        *(undefined1 *)(param_1 + 0xf1) = 0;
      }
    }
    else {
      if (cVar3 != '\x05') {
        return;
      }
      if (((*(char *)(param_1 + 0xd0) == '\0') && (*(byte *)(param_1 + 0xa8) != 0x1a)) &&
         (0x18 < *(byte *)(param_1 + 0xa8))) {
        lVar4 = **(long **)(param_1 + 0xb0);
        **(long **)(param_1 + 0xb0) = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
    }
LAB_100ca8d08:
    *(undefined2 *)(param_1 + 0xa1) = 0;
    return;
  }
  if (((*(char *)(param_1 + 0x188) == '\x03') && (*(char *)(param_1 + 0x110) == '\x03')) &&
     ((*(char *)(param_1 + 0x180) == '\x03' && (*(char *)(param_1 + 0x178) == '\x03')))) {
    lVar4 = *(long *)(param_1 + 0x138);
    pcVar1 = (char *)(lVar4 + 0x18);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,param_2,1000000000);
      param_2 = extraout_x1_00;
    }
    plVar6 = (long *)(param_1 + 0x140);
    if (*plVar6 == 0) {
      if (*(long **)(lVar4 + 0x20) == plVar6) {
        plVar7 = *(long **)(param_1 + 0x148);
        *(long **)(lVar4 + 0x20) = plVar7;
        goto joined_r0x000100d6c414;
      }
    }
    else {
      plVar7 = *(long **)(param_1 + 0x148);
      *(long **)(*plVar6 + 8) = plVar7;
joined_r0x000100d6c414:
      if (plVar7 == (long *)0x0) {
        if (*(long **)(lVar4 + 0x28) != plVar6) goto LAB_100d6c424;
        *(long *)(lVar4 + 0x28) = *plVar6;
      }
      else {
        *plVar7 = *plVar6;
      }
      *plVar6 = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
LAB_100d6c424:
    if (*pcVar1 == '\x01') {
      *pcVar1 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
      param_2 = extraout_x1_01;
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      (**(code **)(*(long *)(param_1 + 0x150) + 0x18))(*(undefined8 *)(param_1 + 0x158));
      param_2 = extraout_x1;
    }
  }
  if (*(char *)(param_1 + 0x270) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x1f8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x268) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x260) != '\x03') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x220);
  pcVar1 = (char *)(lVar4 + 0x18);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,param_2,1000000000);
  }
  puVar2 = (undefined8 *)(param_1 + 0x228);
  if (*(long *)(param_1 + 0x228) == 0) {
    if (*(undefined8 **)(lVar4 + 0x20) != puVar2) goto LAB_100d6c4e0;
    puVar8 = *(undefined8 **)(param_1 + 0x230);
    *(undefined8 **)(lVar4 + 0x20) = puVar8;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x230);
    *(undefined8 **)(*(long *)(param_1 + 0x228) + 8) = puVar8;
  }
  if (puVar8 == (undefined8 *)0x0) {
    if (*(undefined8 **)(lVar4 + 0x28) != puVar2) goto LAB_100d6c4e0;
    *(undefined8 *)(lVar4 + 0x28) = *puVar2;
  }
  else {
    *puVar8 = *puVar2;
  }
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
LAB_100d6c4e0:
  if (*pcVar1 == '\x01') {
    *pcVar1 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
  }
  if (*(long *)(param_1 + 0x238) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100d6c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x238) + 0x18))(*(undefined8 *)(param_1 + 0x240));
  return;
}

