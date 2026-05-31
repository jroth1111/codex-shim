
void FUN_100e82718(long param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 0xe5);
  if (bVar1 < 5) {
    if (bVar1 == 3) {
      FUN_100d3e874(param_1 + 0x128);
      if (*(long *)(param_1 + 0x100) != 0) {
        _free(*(undefined8 *)(param_1 + 0x108));
      }
      if (*(long *)(param_1 + 0xe8) != 0) {
        _free(*(undefined8 *)(param_1 + 0xf0));
      }
      goto LAB_100e82848;
    }
    if (bVar1 != 4) {
      return;
    }
    FUN_100c9749c(param_1 + 0xe8);
    *(undefined1 *)(param_1 + 0xe4) = 0;
    bVar1 = *(byte *)(param_1 + 0xe2);
  }
  else {
    if (bVar1 == 5) {
      if (*(char *)(param_1 + 0x440) == '\x03') {
        if (*(char *)(param_1 + 0x438) != '\x03') {
          if (*(char *)(param_1 + 0x438) == '\0') {
            func_0x000100e24508(param_1 + 0x180);
          }
          goto LAB_100e8280c;
        }
        FUN_100e5e2cc(param_1 + 0x210);
        *(undefined1 *)(param_1 + 0x439) = 0;
        lVar2 = **(long **)(param_1 + 0xe8);
        **(long **)(param_1 + 0xe8) = lVar2 + -1;
        LORelease();
      }
      else if (*(char *)(param_1 + 0x440) == '\0') {
        func_0x000100e24508(param_1 + 0xf0);
        lVar2 = **(long **)(param_1 + 0xe8);
        **(long **)(param_1 + 0xe8) = lVar2 + -1;
        LORelease();
      }
      else {
LAB_100e8280c:
        lVar2 = **(long **)(param_1 + 0xe8);
        **(long **)(param_1 + 0xe8) = lVar2 + -1;
        LORelease();
      }
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E();
      }
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      FUN_100ca19bc(param_1 + 0xe8);
      if ((*(long *)(param_1 + 0xb0) != -0x8000000000000000) && (*(long *)(param_1 + 0xb0) != 0)) {
        _free(*(undefined8 *)(param_1 + 0xb8));
      }
    }
    *(undefined1 *)(param_1 + 0xe1) = 0;
    *(undefined1 *)(param_1 + 0xe3) = 0;
    *(undefined1 *)(param_1 + 0xe4) = 0;
    bVar1 = *(byte *)(param_1 + 0xe2);
  }
  if ((bVar1 & 1) != 0) {
    func_0x000100e24508(param_1 + 0x10);
  }
LAB_100e82848:
  *(undefined1 *)(param_1 + 0xe2) = 0;
  return;
}

