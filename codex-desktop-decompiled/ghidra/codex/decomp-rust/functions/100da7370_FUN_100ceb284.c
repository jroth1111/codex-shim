
void FUN_100ceb284(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plStack_48;
  
  cVar2 = *(char *)(param_1 + 0x90);
  if (cVar2 == '\x03') {
    if ((*(char *)(param_1 + 0xf0) == '\x03') && (*(char *)(param_1 + 0xe8) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xa8);
      if (*(long *)(param_1 + 0xb0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ceb360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
        return;
      }
    }
    return;
  }
  if (cVar2 != '\x04') {
    if (cVar2 != '\x05') {
      return;
    }
    if ((*(char *)(param_1 + 0xf0) == '\x03') && (*(char *)(param_1 + 0xe8) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xa8);
      if (*(long *)(param_1 + 0xb0) != 0) {
        (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
      }
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    _free(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    _free(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    _free(*(undefined8 *)(param_1 + 0x80));
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
  plVar1 = (long *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  do {
    if (lVar3 == 0) {
      lVar3 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf475437eb082e414E(plVar1);
      }
      return;
    }
    lVar4 = *(long *)(lVar3 + 0xbd8) + -1;
    lVar5 = *(long *)(lVar3 + 0xbc8);
    lVar6 = *(long *)(lVar3 + 0xbd0);
    *(long *)(lVar3 + 0xbc8) = *(long *)(*plVar1 + 0x10) + 0x10;
    *(undefined8 *)(lVar3 + 0xbd0) = 0;
    if (lVar5 == 0) {
      if (lVar6 != 0) goto LAB_100da73e8;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *(long *)(lVar5 + 0xbd0) = lVar6;
      if (lVar6 == 0) {
        *(long *)(param_1 + 0x38) = lVar5;
        *(long *)(lVar5 + 0xbd8) = lVar4;
      }
      else {
LAB_100da73e8:
        *(long *)(lVar6 + 0xbc8) = lVar5;
        *(long *)(lVar3 + 0xbd8) = lVar4;
      }
    }
    plVar7 = (long *)(lVar3 + -0x10);
    LOAcquire();
    cVar2 = *(char *)(lVar3 + 0xbe8);
    *(char *)(lVar3 + 0xbe8) = '\x01';
    LORelease();
    plStack_48 = plVar7;
    FUN_100d94828(lVar3 + 8);
    *(undefined8 *)(lVar3 + 8) = 0;
    if (cVar2 == '\0') {
      lVar3 = *plVar7;
      *plVar7 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1e13a8bc965b1f86E(&plStack_48);
      }
    }
    lVar3 = *(long *)(param_1 + 0x38);
  } while( true );
}

