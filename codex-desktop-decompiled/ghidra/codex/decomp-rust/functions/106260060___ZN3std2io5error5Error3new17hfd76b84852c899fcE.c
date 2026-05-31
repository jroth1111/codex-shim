
long __ZN3std2io5error5Error3new17hfd76b84852c899fcE(undefined1 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)_malloc(0x28);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
  }
  else {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    puVar2[4] = param_2[4];
    plVar3 = (long *)_malloc(0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)puVar2;
      plVar3[1] = (long)&UNK_10b4dd1f8;
      *(undefined1 *)(plVar3 + 2) = param_1;
      return (long)plVar3 + 1;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1062600e8);
  (*pcVar1)();
}

