
void FUN_100d72bdc(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 extraout_x1;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  bVar1 = *(byte *)(param_1 + 0x66);
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      if (*param_1 != 0) {
        _free(param_1[1]);
      }
      lVar2 = param_1[3];
      if (lVar2 == -0x7ffffffffffffffe) {
        return;
      }
      if (lVar2 < -0x7ffffffffffffffe || lVar2 == 0) {
        lVar2 = param_1[6];
      }
      else {
        _free(param_1[4]);
        lVar2 = param_1[6];
      }
      if (((lVar2 != -0x7fffffffffffffff) && (lVar2 != -0x8000000000000000)) && (lVar2 != 0)) {
        _free(param_1[7]);
      }
      lVar2 = param_1[9];
      if (lVar2 == -0x7fffffffffffffff) {
        return;
      }
      if (lVar2 == -0x8000000000000000) {
        return;
      }
      if (lVar2 == 0) {
        return;
      }
      lVar2 = param_1[10];
      goto code_r0x000108aa97c4;
    }
    if (bVar1 == 3) {
      if (((char)param_1[0x74] == '\x03') && ((char)param_1[0x73] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x6b);
        if (param_1[0x6c] != 0) {
          (**(code **)(param_1[0x6c] + 0x18))(param_1[0x6d]);
        }
      }
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      FUN_100cd475c(param_1 + 0x68);
      lVar2 = param_1[0x26];
      if ((int)lVar2 != 0) {
        pcVar5 = (char *)param_1[0x25];
        if (*pcVar5 == '\0') {
          *pcVar5 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar5,extraout_x1,1000000000);
        }
        FUN_1060fa678(pcVar5,(int)lVar2,pcVar5);
      }
    }
  }
  else {
    if (bVar1 == 5) {
      if (((((char)param_1[0x7d] == '\x03') && ((char)param_1[0x7c] == '\x03')) &&
          ((char)param_1[0x7b] == '\x03')) && ((char)param_1[0x7a] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x72);
        if (param_1[0x73] != 0) {
          (**(code **)(param_1[0x73] + 0x18))(param_1[0x74]);
        }
      }
    }
    else if (bVar1 == 6) {
      if ((char)param_1[0x6f] == '\x03') {
        lVar2 = param_1[0x6d];
        puVar4 = (undefined8 *)param_1[0x6e];
        pcVar3 = (code *)*puVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar2);
        }
        if (puVar4[1] != 0) {
          _free(lVar2);
        }
      }
    }
    else {
      if (bVar1 != 7) {
        return;
      }
      if ((((char)param_1[0x7c] == '\x03') && ((char)param_1[0x7b] == '\x03')) &&
         (((char)param_1[0x7a] == '\x03' && ((char)param_1[0x71] == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x72);
        if (param_1[0x73] != 0) {
          (**(code **)(param_1[0x73] + 0x18))(param_1[0x74]);
        }
      }
    }
    FUN_100e4affc(param_1 + 0x27);
  }
  if ((*(byte *)((long)param_1 + 0x331) & 1) != 0) {
    FUN_100e21f20(param_1 + 0x75);
  }
  *(undefined2 *)((long)param_1 + 0x339) = 0;
  *(undefined8 *)((long)param_1 + 0x331) = 0;
  if (param_1[0xe] == 0) {
    return;
  }
  lVar2 = param_1[0xf];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar2);
  return;
}

