
void FUN_100cd3e48(long *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  switch(*(undefined1 *)((long)param_1 + 0x925)) {
  case 3:
    if ((char)param_1[0x446] == '\x03') {
      FUN_100d1ddbc(param_1 + 0x128);
    }
    bVar2 = *(byte *)((long)param_1 + 0x91c);
    goto joined_r0x000100cd41d8;
  case 4:
    if ((((char)param_1[0x135] == '\x03') && ((char)param_1[0x134] == '\x03')) &&
       (((char)param_1[0x133] == '\x03' && ((char)param_1[0x12a] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 299);
      if (param_1[300] != 0) {
        (**(code **)(param_1[300] + 0x18))(param_1[0x12d]);
      }
    }
    goto code_r0x000100cd41b8;
  case 5:
    if (((((char)param_1[0x135] == '\x03') && ((char)param_1[0x134] == '\x03')) &&
        ((char)param_1[0x133] == '\x03')) && ((char)param_1[0x12a] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 299);
      if (param_1[300] != 0) {
        (**(code **)(param_1[300] + 0x18))(param_1[0x12d]);
      }
    }
    goto code_r0x000100cd4168;
  case 6:
    FUN_100e61d94(param_1 + 0x126);
    plVar1 = param_1 + 0x125;
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (plVar1);
    lVar4 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar1);
    }
    goto code_r0x000100cd40dc;
  case 7:
    if (*(char *)((long)param_1 + 0x959) != '\x04') {
      if (*(char *)((long)param_1 + 0x959) == '\x03') {
        FUN_100dedaa8(param_1 + 0x139);
        if (param_1[300] != -0x8000000000000000) {
          FUN_100e4ba20(param_1 + 300);
        }
        goto code_r0x000100cd42d8;
      }
      goto code_r0x000100cd4058;
    }
    if (*(char *)((long)param_1 + 0xa72) == '\x03') {
      if ((param_1[0x14a] != -0x8000000000000000) && (param_1[0x14a] != 0)) {
        _free(param_1[0x14b]);
      }
      *(undefined1 *)(param_1 + 0x14e) = 0;
      if (param_1[300] != 0x11) {
        FUN_100e02a24(param_1 + 300);
      }
      *(undefined1 *)((long)param_1 + 0xa71) = 0;
      lVar4 = 0xc0;
    }
    else {
      if (*(char *)((long)param_1 + 0xa72) != '\0') goto code_r0x000100cd42d8;
      lVar4 = 0xd0;
    }
    FUN_100e12e40((long)(param_1 + 300) + lVar4);
code_r0x000100cd42d8:
    *(undefined1 *)(param_1 + 299) = 0;
    *(undefined1 *)((long)param_1 + 0x922) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x919);
    goto joined_r0x000100cd4060;
  case 8:
    if (*(char *)((long)param_1 + 0x22c9) == '\x03') {
      FUN_100d41eac(param_1 + 0x12d);
      lVar5 = param_1[299];
      lVar4 = param_1[300] + 1;
      lVar3 = lVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100e02a24(lVar3);
        lVar3 = lVar3 + 0xc0;
      }
      if (param_1[0x12a] != 0) {
        _free(lVar5);
      }
      lVar4 = 0x22ca;
      goto code_r0x000100cd4038;
    }
    if (*(char *)((long)param_1 + 0x22c9) == '\0') {
      lVar5 = param_1[0x126];
      lVar4 = param_1[0x127] + 1;
      lVar3 = lVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100e02a24(lVar3);
        lVar3 = lVar3 + 0xc0;
      }
      if (param_1[0x125] != 0) {
        _free(lVar5);
      }
    }
    goto code_r0x000100cd403c;
  case 9:
    FUN_100d50f94(param_1 + 0x125);
    break;
  case 10:
    FUN_100d425a0(param_1 + 0x125);
    break;
  case 0xb:
    FUN_100d4e420(param_1 + 0x125);
    break;
  case 0xc:
    if ((char)param_1[0x1cd] == '\x03') {
      FUN_100d34a84(param_1 + 0x128);
    }
    break;
  default:
    goto LAB_100cd4204;
  }
  *(undefined1 *)((long)param_1 + 0x91d) = 0;
  lVar4 = 0x91e;
code_r0x000100cd4038:
  *(undefined1 *)((long)param_1 + lVar4) = 0;
code_r0x000100cd403c:
  *(undefined2 *)((long)param_1 + 0x91f) = 0;
  if (param_1[0x11b] != 0) {
    _free(param_1[0x11c]);
  }
  *(undefined1 *)((long)param_1 + 0x921) = 0;
code_r0x000100cd4058:
  *(undefined1 *)((long)param_1 + 0x922) = 0;
  bVar2 = *(byte *)((long)param_1 + 0x919);
joined_r0x000100cd4060:
  if ((bVar2 & 1) != 0) {
    FUN_100e08e20(param_1 + 0xc0);
  }
  *(undefined1 *)((long)param_1 + 0x919) = 0;
  if ((param_1[0xad] != -0x8000000000000000) && (FUN_100e502dc(param_1 + 0xad), param_1[0xbd] != 0))
  {
    _free(param_1[0xbe]);
  }
  if ((param_1[0xaa] != -0x8000000000000000) && (param_1[0xaa] != 0)) {
    _free(param_1[0xab]);
  }
  FUN_100df93d8(param_1 + 0x97);
  *(undefined1 *)((long)param_1 + 0x923) = 0;
  lVar4 = *(long *)param_1[0x93];
  *(long *)param_1[0x93] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h008c187bd1972bcfE(param_1 + 0x93);
  }
code_r0x000100cd40dc:
  lVar5 = param_1[0x91];
  lVar4 = param_1[0x92] + 1;
  lVar3 = lVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100e02a24(lVar3);
    lVar3 = lVar3 + 0xc0;
  }
  if (param_1[0x90] != 0) {
    _free(lVar5);
  }
  lVar5 = param_1[0x8e];
  lVar4 = param_1[0x8f] + 1;
  lVar3 = lVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100e02a24(lVar3);
    lVar3 = lVar3 + 0xc0;
  }
  if (param_1[0x8d] != 0) {
    _free(lVar5);
  }
  if ((*(char *)((long)param_1 + 0x91a) == '\x01') && (param_1[0x89] != 0)) {
    _free(param_1[0x8a]);
  }
code_r0x000100cd4168:
  *(undefined1 *)((long)param_1 + 0x91a) = 0;
  if ((*(byte *)((long)param_1 + 0x91b) & 1) == 0) {
code_r0x000100cd41b8:
    *(undefined1 *)((long)param_1 + 0x91b) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x91c);
  }
  else {
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
    if (param_1[0x50] == 3) goto code_r0x000100cd41b8;
    FUN_100e13e9c(param_1 + 0x50);
    *(undefined1 *)((long)param_1 + 0x91b) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x91c);
  }
joined_r0x000100cd41d8:
  if ((bVar2 & 1) != 0) {
    FUN_100df5b9c(param_1 + 0x10);
  }
  *(undefined1 *)((long)param_1 + 0x91c) = 0;
  if (*param_1 != -0x8000000000000000) {
    FUN_100e502dc(param_1);
  }
  *(undefined1 *)((long)param_1 + 0x924) = 0;
LAB_100cd4204:
  return;
}

