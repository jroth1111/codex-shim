
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(long *param_1)

{
  long lVar1;
  long lVar2;
  long alStack_380 [106];
  
  lVar2 = *param_1;
  while( true ) {
    func_0x000103e32e28(alStack_380,lVar2 + 0x1a0,lVar2 + 0x80);
    if (alStack_380[0] - 0x17U < 2) break;
    FUN_103d9ceb4(alStack_380);
  }
  lVar1 = *(long *)(lVar2 + 0x1a8);
  do {
    lVar1 = *(long *)(lVar1 + 0x6a08);
    _free();
  } while (lVar1 != 0);
  if (*(long *)(lVar2 + 0x100) != 0) {
    (**(code **)(*(long *)(lVar2 + 0x100) + 0x18))(*(undefined8 *)(lVar2 + 0x108));
  }
  if (lVar2 != -1) {
    lVar1 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

