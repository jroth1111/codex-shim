
void FUN_100d1d280(long param_1)

{
  byte bVar1;
  long lVar2;
  
  do {
    bVar1 = func_0x000100fc73a8(param_1 + 0x1a0,param_1 + 0x80);
    if (bVar1 == 2) break;
  } while ((bVar1 & 1) == 0);
  lVar2 = *(long *)(param_1 + 0x1a8);
  do {
    lVar2 = *(long *)(lVar2 + 8);
    _free();
  } while (lVar2 != 0);
  if (*(long *)(param_1 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d1d2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x100) + 0x18))(*(undefined8 *)(param_1 + 0x108));
    return;
  }
  return;
}

