
void FUN_10074f1e0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined6 uStack_2e;
  
  puVar2 = (undefined8 *)_malloc(0x58);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x58);
  }
  else {
    puVar2[5] = uStack_58;
    puVar2[4] = uStack_60;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[10] = CONCAT62(uStack_2e,1);
    puVar2[1] = 1;
    *puVar2 = 1;
    puVar2[3] = 0;
    puVar2[2] = 0xffffffffffffffff;
    puVar3 = (undefined8 *)_malloc(0x40);
    if (puVar3 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 8;
      puVar3[1] = 1;
      *puVar3 = 1;
      puVar3[3] = 0;
      puVar3[2] = puVar2;
      puVar3[5] = 0;
      puVar3[4] = uStack_60;
      puVar3[7] = puVar2 + 2;
      puVar3[6] = puVar2 + 2;
      param_1[3] = puVar3;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      param_1[2] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10074f2c0);
  (*pcVar1)();
}

