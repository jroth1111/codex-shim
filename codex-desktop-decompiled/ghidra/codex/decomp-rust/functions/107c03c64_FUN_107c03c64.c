
/* WARNING: Possible PIC construction at 0x0001087c9090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087c90e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087c90ec) */
/* WARNING: Removing unreachable block (ram,0x0001087c9110) */
/* WARNING: Removing unreachable block (ram,0x0001087c90f8) */

void FUN_107c03c64(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong auStack_58 [3];
  
  if (param_1 != 0) {
    func_0x0001087c906c();
  }
  plVar1 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                             (&UNK_108c51956,0x23,&UNK_10b1d25d8);
  uVar2 = *plVar1 * 2;
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if ((long)uVar2 < 0) {
    uVar2 = 0;
    lVar3 = 8;
  }
  else {
    if (*plVar1 == 0) {
      if (uVar2 != 0) {
        _malloc(uVar2);
      }
    }
    else {
      _realloc(plVar1[1],uVar2);
    }
    lVar3 = 0x10;
  }
  *(ulong *)((long)auStack_58 + lVar3) = uVar2;
  return;
}

