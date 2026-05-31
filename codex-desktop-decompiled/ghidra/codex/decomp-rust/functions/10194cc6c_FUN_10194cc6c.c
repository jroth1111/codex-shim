
void FUN_10194cc6c(void)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  
  FUN_1019e2480();
  if (*unaff_x19 != 2 && *unaff_x19 != 0) {
    plVar2 = (long *)unaff_x19[1];
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E(unaff_x19 + 1);
    }
  }
  return;
}

