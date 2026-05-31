
void FUN_100d9fbb0(long param_1)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = *(long *)(param_1 + 8);
  lStack_38 = param_1 + 0x40;
  FUN_1060fb5d4(&lStack_40);
  uVar2 = extraout_x1_03;
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
    uVar2 = extraout_x1_04;
  }
  switch(*(undefined1 *)(param_1 + 0x220)) {
  case 0:
    if (*(long *)(param_1 + 0x48) != 0) {
      _free(*(undefined8 *)(param_1 + 0x50));
    }
    if (*(long *)(param_1 + 0x78) == -0x8000000000000000 || *(long *)(param_1 + 0x78) == 0) {
      lVar1 = *(long *)(param_1 + 0x90);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x80));
      lVar1 = *(long *)(param_1 + 0x90);
    }
    if (lVar1 == -0x8000000000000000) {
      lVar1 = *(long *)(param_1 + 0x60);
    }
    else {
      FUN_100e79780();
      lVar1 = *(long *)(param_1 + 0x60);
    }
    if (lVar1 != 0) {
      _free(*(undefined8 *)(param_1 + 0x68));
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 200);
    lVar1 = **(long **)(param_1 + 200);
    **(long **)(param_1 + 200) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 200);
      FUN_10611d000(lVar1 + 0x30);
      if (lVar1 != -1) {
        lVar7 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar1);
          return;
        }
      }
      return;
    }
    return;
  default:
    goto LAB_100d5610c;
  case 3:
    if (((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) &&
       (*(char *)(param_1 + 0x250) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 600);
      if (*(long *)(param_1 + 0x260) != 0) {
        (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
      }
    }
    goto code_r0x000100d5605c;
  case 4:
    uStack_50 = *(undefined8 *)(param_1 + 0x238);
    lStack_48 = param_1 + 0x270;
    lStack_40 = param_1 + 0x240;
    lStack_38 = param_1 + 0x248;
    FUN_1060fb5d4(&uStack_50);
    if (*(long *)(param_1 + 600) != 0) {
      (**(code **)(*(long *)(param_1 + 600) + 0x18))(*(undefined8 *)(param_1 + 0x260));
    }
    FUN_100e8d5b4(param_1 + 0x278);
    goto code_r0x000100d56160;
  case 5:
    FUN_100d77c68(param_1 + 0x280);
    if (*(long *)(param_1 + 0x230) != -0x8000000000000000) {
      FUN_100e79780(param_1 + 0x230);
    }
    if ((long)*(ulong *)(param_1 + 0x260) < 0) {
      uVar3 = *(ulong *)(param_1 + 0x260) & 0x7fffffffffffffff;
      if (uVar3 == 3) {
        lVar1 = *(long *)(param_1 + 0x268);
code_r0x000100d56158:
        _free(lVar1);
      }
      else if (uVar3 == 1) {
        lVar1 = *(long *)(param_1 + 0x270);
        lVar7 = *(long *)(param_1 + 0x278);
        if (lVar7 != 0) {
          puVar8 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (*(long *)(param_1 + 0x268) != 0) goto code_r0x000100d56158;
      }
    }
code_r0x000100d56160:
    *(undefined4 *)(param_1 + 0x22b) = 0;
    plVar6 = *(long **)(param_1 + 0x180);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      *plVar6 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6b4c(param_1 + 0x180);
      }
    }
    goto code_r0x000100d5605c;
  case 6:
    if (((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) &&
       (*(char *)(param_1 + 0x250) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 600);
      if (*(long *)(param_1 + 0x260) != 0) {
        (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
      }
    }
    goto code_r0x000100d55fd8;
  case 7:
    if (((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) &&
       (*(char *)(param_1 + 0x250) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 600);
      uVar2 = extraout_x1;
      if (*(long *)(param_1 + 0x260) != 0) {
        (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
        uVar2 = extraout_x1_00;
      }
    }
    pcVar5 = *(char **)(param_1 + 0x1e0);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar5,uVar2,1000000000);
    }
    FUN_1060fa678(pcVar5,1,pcVar5);
    goto code_r0x000100d55fd8;
  case 8:
    FUN_100d1ddbc(param_1 + 0x230);
    break;
  case 9:
    uStack_50 = *(undefined8 *)(param_1 + 0x238);
    lStack_48 = param_1 + 0x270;
    lStack_40 = param_1 + 0x240;
    lStack_38 = param_1 + 0x248;
    FUN_1060fb5d4(&uStack_50);
    if (*(long *)(param_1 + 600) != 0) {
      (**(code **)(*(long *)(param_1 + 600) + 0x18))(*(undefined8 *)(param_1 + 0x260));
    }
    FUN_100cf0ffc(param_1 + 0x278);
    break;
  case 10:
    if (((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) &&
       (*(char *)(param_1 + 0x250) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 600);
      if (*(long *)(param_1 + 0x260) != 0) {
        (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
      }
    }
    break;
  case 0xb:
    if (((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) &&
       (*(char *)(param_1 + 0x250) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 600);
      uVar2 = extraout_x1_01;
      if (*(long *)(param_1 + 0x260) != 0) {
        (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
        uVar2 = extraout_x1_02;
      }
    }
    pcVar5 = *(char **)(param_1 + 0x218);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar5,uVar2,1000000000);
    }
    FUN_1060fa678(pcVar5,1,pcVar5);
  }
  *(undefined1 *)(param_1 + 0x22a) = 0;
  if (*(long *)(param_1 + 0x198) != -0x8000000000000000) {
    FUN_100e2d5f4(param_1 + 0x198);
  }
code_r0x000100d55fd8:
  if ((*(byte *)(param_1 + 0x228) & 1) != 0) {
    FUN_100cf0ffc(param_1 + 400);
  }
  *(undefined1 *)(param_1 + 0x228) = 0;
  if (((*(byte *)(param_1 + 0x223) & 1) != 0) &&
     (plVar6 = *(long **)(param_1 + 0x188), plVar6 != (long *)0x0)) {
    uVar3 = plVar6[0xc];
    do {
      uVar4 = uVar3;
      if (((uint)uVar4 >> 2 & 1) != 0) goto code_r0x000100d56020;
      uVar3 = plVar6[0xc];
    } while (uVar3 != uVar4);
    plVar6[0xc] = uVar4 | 2;
code_r0x000100d56020:
    if ((uVar4 & 5) == 1) {
      (**(code **)(plVar6[10] + 0x10))(plVar6[0xb]);
    }
    lVar1 = *plVar6;
    *plVar6 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h14a9bf9e47e49a20E(param_1 + 0x188);
    }
  }
  *(undefined1 *)(param_1 + 0x223) = 0;
code_r0x000100d5605c:
  if (((*(byte *)(param_1 + 0x224) & 1) != 0) && (*(long *)(param_1 + 0x158) != -0x8000000000000000)
     ) {
    FUN_100e79780(param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x224) = 0;
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x150);
  lVar1 = **(long **)(param_1 + 0x150);
  **(long **)(param_1 + 0x150) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x150);
  }
  if (((*(byte *)(param_1 + 0x229) & 1) != 0) && (*(long *)(param_1 + 0x138) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x140));
  }
  *(undefined1 *)(param_1 + 0x229) = 0;
  if ((((*(byte *)(param_1 + 0x225) & 1) != 0) && (*(long *)(param_1 + 0xf8) != -0x8000000000000000)
      ) && (*(long *)(param_1 + 0xf8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x100));
  }
  *(undefined2 *)(param_1 + 0x225) = 0;
  if (((*(byte *)(param_1 + 0x227) & 1) != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0xe8));
  }
  *(undefined1 *)(param_1 + 0x227) = 0;
LAB_100d5610c:
  return;
}

