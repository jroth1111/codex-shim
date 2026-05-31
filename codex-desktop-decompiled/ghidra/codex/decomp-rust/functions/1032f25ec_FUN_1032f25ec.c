
void FUN_1032f25ec(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)*param_1;
  lVar5 = param_1[1];
  *param_1 = 8;
  param_1[1] = 8;
  uVar2 = lVar5 - (long)puVar1;
  if (uVar2 != 0) {
    lVar5 = 1 - (uVar2 >> 4);
    do {
      lVar3 = *(long *)*puVar1;
      *(long *)*puVar1 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E();
      }
      lVar5 = lVar5 + 1;
      puVar1 = puVar1 + 2;
    } while (lVar5 != 1);
  }
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar3 = param_1[2];
    lVar4 = *(long *)(lVar3 + 0x10);
    if (param_1[3] != lVar4) {
      _memmove(*(long *)(lVar3 + 8) + lVar4 * 0x10,*(long *)(lVar3 + 8) + param_1[3] * 0x10,
               lVar5 << 4);
    }
    *(long *)(lVar3 + 0x10) = lVar4 + lVar5;
  }
  return;
}

