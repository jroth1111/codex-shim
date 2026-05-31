
long * FUN_101302ef4(undefined8 param_1)

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
    if ((lStack_38 == 0x15) &&
       ((*plStack_40 == 0x6163696669746f6e && plStack_40[1] == 0x656d2f736e6f6974) &&
        *(long *)((long)plStack_40 + 0xd) == 0x6567617373656d2f)) {
      plVar4 = (long *)0x0;
      lStack_38 = 0x15;
    }
    else {
      plStack_40 = (long *)_malloc(0x31);
      if (plStack_40 == (long *)0x0) {
        func_0x0001087c9084(1,0x31);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101303000);
        (*pcVar3)();
      }
      *(undefined1 *)(plStack_40 + 6) = 0x22;
      plStack_40[1] = 0x7274732074736e6f;
      *plStack_40 = 0x6320746365707865;
      plStack_40[3] = 0x6669746f6e222065;
      plStack_40[2] = 0x756c617620676e69;
      plStack_40[5] = 0x6567617373656d2f;
      plStack_40[4] = 0x736e6f6974616369;
      lStack_48 = 0x31;
      lStack_38 = 0x31;
      plVar4 = (long *)func_0x000108856114(&lStack_48);
    }
    if (lVar1 != 0) {
      _free(plVar2);
    }
  }
  return plVar4;
}

