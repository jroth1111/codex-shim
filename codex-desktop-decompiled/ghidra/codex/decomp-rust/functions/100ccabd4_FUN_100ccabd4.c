
void FUN_100ccabd4(long *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  bVar2 = *(byte *)((long)param_1 + 0x541);
  if (bVar2 < 7) {
    if (4 < bVar2) {
      if (bVar2 != 5) {
        if (bVar2 != 6) {
          return;
        }
        FUN_100e61d94(param_1 + 0xad);
        plVar1 = param_1 + 0xac;
        __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                  (plVar1);
        lVar4 = *(long *)*plVar1;
        *(long *)*plVar1 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar1);
        }
        goto LAB_100ccadec;
      }
      if (((((char)param_1[0xb9] == '\x03') && ((char)param_1[0xb8] == '\x03')) &&
          ((char)param_1[0xb7] == '\x03')) && ((char)param_1[0xae] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xaf);
        if (param_1[0xb0] != 0) {
          (**(code **)(param_1[0xb0] + 0x18))(param_1[0xb1]);
        }
      }
      goto LAB_100ccae84;
    }
    if (bVar2 == 3) {
      if ((char)param_1[0x3ca] == '\x03') {
        FUN_100d1ddbc(param_1 + 0xac);
      }
      bVar2 = *(byte *)((long)param_1 + 0x53c);
      goto joined_r0x000100ccad3c;
    }
    if (bVar2 != 4) {
      return;
    }
    if ((((char)param_1[0xb9] == '\x03') && ((char)param_1[0xb8] == '\x03')) &&
       (((char)param_1[0xb7] == '\x03' && ((char)param_1[0xae] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xaf);
      if (param_1[0xb0] != 0) {
        (**(code **)(param_1[0xb0] + 0x18))(param_1[0xb1]);
      }
    }
  }
  else {
    if (bVar2 < 9) {
      if (bVar2 == 7) {
        func_0x000100df0bcc(param_1 + 0xa9);
      }
      else {
        if (bVar2 != 8) {
          return;
        }
        if (*(char *)((long)param_1 + 0x1ee9) == '\x03') {
          FUN_100d41eac(param_1 + 0xb1);
          lVar5 = param_1[0xaf];
          lVar4 = param_1[0xb0] + 1;
          lVar3 = lVar5;
          while (lVar4 = lVar4 + -1, lVar4 != 0) {
            FUN_100e02a24(lVar3);
            lVar3 = lVar3 + 0xc0;
          }
          if (param_1[0xae] != 0) {
            _free(lVar5);
          }
          lVar4 = 0x1eea;
          goto LAB_100ccadbc;
        }
        if (*(char *)((long)param_1 + 0x1ee9) == '\0') {
          lVar5 = param_1[0xaa];
          lVar4 = param_1[0xab] + 1;
          lVar3 = lVar5;
          while (lVar4 = lVar4 + -1, lVar4 != 0) {
            FUN_100e02a24(lVar3);
            lVar3 = lVar3 + 0xc0;
          }
          if (param_1[0xa9] != 0) {
            _free(lVar5);
          }
        }
      }
    }
    else {
      if (bVar2 == 9) {
        FUN_100d50f94(param_1 + 0xa9);
      }
      else if (bVar2 == 10) {
        FUN_100d425a0(param_1 + 0xa9);
      }
      else {
        if (bVar2 != 0xb) {
          return;
        }
        FUN_100d4e420(param_1 + 0xa9);
      }
      *(undefined1 *)((long)param_1 + 0x53d) = 0;
      lVar4 = 0x53e;
LAB_100ccadbc:
      *(undefined1 *)((long)param_1 + lVar4) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x53f) = 0;
    FUN_100df93d8(param_1 + 0x8f);
    lVar4 = *(long *)param_1[0x8e];
    *(long *)param_1[0x8e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h008c187bd1972bcfE(param_1 + 0x8e);
    }
LAB_100ccadec:
    if ((*(byte *)((long)param_1 + 0x539) & 1) != 0) {
      lVar5 = param_1[0xaa];
      lVar4 = param_1[0xab] + 1;
      lVar3 = lVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100e02a24(lVar3);
        lVar3 = lVar3 + 0xc0;
      }
      if (param_1[0xa9] != 0) {
        _free(lVar5);
      }
    }
    *(undefined1 *)((long)param_1 + 0x539) = 0;
    lVar5 = param_1[0x8c];
    lVar4 = param_1[0x8d] + 1;
    lVar3 = lVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e02a24(lVar3);
      lVar3 = lVar3 + 0xc0;
    }
    if (param_1[0x8b] != 0) {
      _free(lVar5);
    }
    if ((*(char *)((long)param_1 + 0x53a) == '\x01') && (param_1[0x87] != 0)) {
      _free(param_1[0x88]);
    }
LAB_100ccae84:
    *(undefined1 *)((long)param_1 + 0x53a) = 0;
    if ((*(byte *)((long)param_1 + 0x53b) & 1) != 0) {
      lVar5 = param_1[0x7f];
      lVar4 = param_1[0x80] + 1;
      lVar3 = lVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100e02a24(lVar3);
        lVar3 = lVar3 + 0xc0;
      }
      if (param_1[0x7e] != 0) {
        _free(lVar5);
      }
      if (param_1[0x50] != 3) {
        FUN_100e13e9c(param_1 + 0x50);
        *(undefined1 *)((long)param_1 + 0x53b) = 0;
        bVar2 = *(byte *)((long)param_1 + 0x53c);
        goto joined_r0x000100ccad3c;
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x53b) = 0;
  bVar2 = *(byte *)((long)param_1 + 0x53c);
joined_r0x000100ccad3c:
  if ((bVar2 & 1) != 0) {
    FUN_100df5b9c(param_1 + 0x10);
  }
  *(undefined1 *)((long)param_1 + 0x53c) = 0;
  if (*param_1 != -0x8000000000000000) {
    FUN_100e502dc(param_1);
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}

