
void FUN_108a49e64(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  auVar6 = func_0x000105dc4a48(*param_1,param_1[1],param_1[2]);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = param_2[2];
  puVar2 = (undefined8 *)_malloc(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar5;
    *puVar2 = uVar4;
    puVar2[3] = auVar6._0_8_;
    puVar2[2] = uVar3;
    puVar2[4] = auVar6._8_8_;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a4a158);
  (*pcVar1)();
}

