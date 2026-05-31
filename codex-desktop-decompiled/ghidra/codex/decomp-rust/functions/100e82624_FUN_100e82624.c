
void FUN_100e82624(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xd1) == '\x03') {
    FUN_100d3e874(param_1 + 0x118);
    if (*(long *)(param_1 + 0xf0) != 0) {
      _free(*(undefined8 *)(param_1 + 0xf8));
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      _free(*(undefined8 *)(param_1 + 0xe0));
    }
  }
  else {
    if (*(char *)(param_1 + 0xd1) != '\x04') {
      return;
    }
    func_0x000100db0b50(param_1 + 0xe0);
    lVar1 = **(long **)(param_1 + 0xd8);
    **(long **)(param_1 + 0xd8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E();
    }
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}

