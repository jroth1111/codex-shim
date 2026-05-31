
void FUN_100cb7e8c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  bVar1 = *(byte *)(param_1 + 0xe2);
  if (bVar1 < 5) {
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x168) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x160) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x158) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x110) != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x118);
      if (*(long *)(param_1 + 0x120) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100cb7f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x120) + 0x18))(*(undefined8 *)(param_1 + 0x128));
      return;
    }
    if (bVar1 != 4) {
      return;
    }
    FUN_100d3e874(param_1 + 0x158);
    if (*(long *)(param_1 + 0x130) != 0) {
      _free(*(undefined8 *)(param_1 + 0x138));
    }
  }
  else {
    if (bVar1 == 5) {
      func_0x000100da6ff8(param_1 + 0xe8);
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      if (*(char *)(param_1 + 0x1b00) == '\x03') {
        FUN_100ca1af4(param_1 + 0x138);
      }
      else if (*(char *)(param_1 + 0x1b00) == '\0') {
        lVar2 = *(long *)(param_1 + 0xf0);
        lVar3 = *(long *)(param_1 + 0xf8);
        if (lVar3 != 0) {
          puVar4 = (undefined8 *)(lVar2 + 8);
          do {
            if (puVar4[-1] != 0) {
              _free(*puVar4);
            }
            puVar4 = puVar4 + 3;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        if (*(long *)(param_1 + 0xe8) != 0) {
          _free(lVar2);
        }
      }
    }
    lVar2 = **(long **)(param_1 + 200);
    **(long **)(param_1 + 200) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E();
    }
  }
  *(undefined1 *)(param_1 + 0xe1) = 0;
  if (((*(byte *)(param_1 + 0xe0) & 1) != 0) && (*(long *)(param_1 + 0xe8) != -0x8000000000000000))
  {
    if (*(long *)(param_1 + 0xe8) != 0) {
      _free(*(undefined8 *)(param_1 + 0xf0));
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      _free(*(undefined8 *)(param_1 + 0x108));
    }
    if (*(long *)(param_1 + 0x118) != 0) {
      _free(*(undefined8 *)(param_1 + 0x120));
    }
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}

