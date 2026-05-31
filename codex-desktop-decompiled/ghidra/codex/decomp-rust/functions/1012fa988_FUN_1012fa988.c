
long * FUN_1012fa988(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  FUN_1004e07f8(&lStack_48,param_1);
  plVar2 = plStack_40;
  lVar1 = lStack_48;
  plVar4 = plStack_40;
  if (lStack_48 != -0x8000000000000000) {
    if ((lStack_38 == 0x16) &&
       ((*plStack_40 == 0x676e696c706d6173 && plStack_40[1] == 0x4d6574616572632f) &&
        *(long *)((long)plStack_40 + 0xe) == 0x6567617373654d65)) {
      plVar4 = (long *)0x0;
      lStack_38 = 0x16;
    }
    else {
      plStack_40 = (long *)_malloc(0x32);
      if (plStack_40 == (long *)0x0) {
        func_0x0001087c9084(1,0x32);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012faa94);
        (*pcVar3)();
      }
      *(undefined2 *)(plStack_40 + 6) = 0x2265;
      plStack_40[1] = 0x7274732074736e6f;
      *plStack_40 = 0x6320746365707865;
      plStack_40[3] = 0x6c706d6173222065;
      plStack_40[2] = 0x756c617620676e69;
      plStack_40[5] = 0x67617373654d6574;
      plStack_40[4] = 0x616572632f676e69;
      lStack_48 = 0x32;
      lStack_38 = 0x32;
      plVar4 = (long *)func_0x000108856114(&lStack_48);
    }
    if (lVar1 != 0) {
      _free(plVar2);
    }
  }
  return plVar4;
}

