
long __ZN3std2io5error5Error3new17h949302c01fe11b24E
               (undefined1 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  long lVar8;
  
  if (param_3 == 0) {
    lVar3 = 1;
    _memcpy(1,param_2,0);
    plVar4 = (long *)_malloc(0x18);
  }
  else {
    lVar8 = param_3;
    lVar3 = _malloc(param_3);
    if (lVar3 == 0) {
      uVar6 = func_0x0001087c9084(1,param_3);
      FUN_10603e354();
      uVar2 = __Unwind_Resume(uVar6);
      puVar7 = (undefined8 *)_malloc(0x18);
      if (puVar7 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x106029c88);
        (*pcVar1)();
      }
      *puVar7 = extraout_x1;
      puVar7[1] = lVar8;
      *(undefined1 *)(puVar7 + 2) = uVar2;
      return (long)puVar7 + 1;
    }
    _memcpy(lVar3,param_2,param_3);
    plVar4 = (long *)_malloc(0x18);
  }
  if (plVar4 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *plVar4 = param_3;
    plVar4[1] = lVar3;
    plVar4[2] = param_3;
    plVar5 = (long *)_malloc(0x18);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)plVar4;
      plVar5[1] = (long)&UNK_10b4aea60;
      *(undefined1 *)(plVar5 + 2) = param_1;
      return (long)plVar5 + 1;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106029bf0);
  (*pcVar1)();
}

