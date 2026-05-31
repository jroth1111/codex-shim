
void FUN_100d3a04c(long param_1)

{
  long lVar1;
  uint extraout_w1;
  
  do {
    func_0x000100fc9cd4(param_1 + 0x1a0,param_1 + 0x80);
  } while (extraout_w1 >> 1 != 500000000);
  lVar1 = *(long *)(param_1 + 0x1a8);
  do {
    lVar1 = *(long *)(lVar1 + 0x208);
    _free();
  } while (lVar1 != 0);
  if (*(long *)(param_1 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d3a0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x100) + 0x18))(*(undefined8 *)(param_1 + 0x108));
    return;
  }
  return;
}

