
/* WARNING: Possible PIC construction at 0x0001087c9090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087c90e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087c90ec) */
/* WARNING: Removing unreachable block (ram,0x0001087c9110) */
/* WARNING: Removing unreachable block (ram,0x0001087c90f8) */

void __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong auStack_68 [3];
  
  lVar1 = __RNvCshXwFllX56pT_7___rustc26___rust_alloc_error_handler(param_2,param_1);
  if (lVar1 != 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E();
  }
  plVar2 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                             (&UNK_108c51956,0x23,&UNK_10b1d25d8);
  uVar3 = *plVar2 * 2;
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((long)uVar3 < 0) {
    uVar3 = 0;
    lVar1 = 8;
  }
  else {
    if (*plVar2 == 0) {
      if (uVar3 != 0) {
        _malloc(uVar3);
      }
    }
    else {
      _realloc(plVar2[1],uVar3);
    }
    lVar1 = 0x10;
  }
  *(ulong *)((long)auStack_68 + lVar1) = uVar3;
  return;
}

