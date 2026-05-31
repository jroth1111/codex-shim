
void FUN_10002efa8(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar2 = param_1[2];
  if (uVar2 < 2) {
    if (uVar2 != 1) goto LAB_10002f008;
    lVar3 = 0;
    param_1[2] = 0;
    if (*param_1 == 0) goto LAB_10002f020;
  }
  else {
    if (-0x41 < (char)puVar1[1]) {
      *puVar1 = 0x53;
      goto LAB_10002eff8;
    }
LAB_10002f008:
    param_1 = (long *)__ZN4core9panicking5panic17h30f5ec71e3af4326E
                                (&UNK_108c5335c,0x2a,&UNK_10b1d2f88);
LAB_10002f020:
    func_0x000107c03ca8(param_1,0,1);
    puVar1 = (undefined1 *)param_1[1];
    lVar3 = param_1[2];
  }
  uVar2 = lVar3 + 1;
  puVar1[lVar3] = 0x53;
LAB_10002eff8:
  param_1[2] = uVar2;
  return;
}

