
long __ZN3std2io5error5Error3new17h9d215d5010465853E(undefined1 param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined1 *)_malloc(1);
  if (puVar2 == (undefined1 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,1);
  }
  else {
    *puVar2 = param_2;
    plVar3 = (long *)_malloc(0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)puVar2;
      plVar3[1] = (long)&UNK_10b406c48;
      *(undefined1 *)(plVar3 + 2) = param_1;
      return (long)plVar3 + 1;
    }
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105aa7fe8);
  (*pcVar1)();
}

