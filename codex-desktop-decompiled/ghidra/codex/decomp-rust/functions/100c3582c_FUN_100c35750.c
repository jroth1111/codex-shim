
long FUN_100c35750(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = _malloc(param_2);
  if (lVar2 == 0) {
    uVar5 = func_0x0001087c9084(1,param_2);
    FUN_10603e354(param_1,&UNK_10b209118);
    puVar3 = (undefined8 *)__Unwind_Resume(uVar5);
    puVar6 = (undefined8 *)_malloc(0x20);
    if (puVar6 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    }
    else {
      uVar5 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar6[1] = puVar3[1];
      *puVar6 = uVar5;
      puVar6[3] = uVar8;
      puVar6[2] = uVar7;
      plVar4 = (long *)_malloc(0x18);
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)puVar6;
        plVar4[1] = (long)&UNK_10b2385c8;
        *(undefined1 *)(plVar4 + 2) = 0x28;
        return (long)plVar4 + 1;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c358ac);
    (*pcVar1)();
  }
  _memcpy(lVar2,param_1,param_2);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = lVar2;
    puVar3[2] = param_2;
    plVar4 = (long *)_malloc(0x18);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)puVar3;
      plVar4[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar4 + 2) = 0x28;
      return (long)plVar4 + 1;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c357f0);
  (*pcVar1)();
}

