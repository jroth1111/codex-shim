
void FUN_108a492a4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar2;
  if (*(long *)(param_1 + 0x28) + 1U < uVar2) {
    uVar1 = *(long *)(param_1 + 0x28) + 1;
  }
  auVar8 = func_0x000105dc4a48(*(undefined8 *)(param_1 + 0x18),uVar2,uVar1);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar5 = param_2[2];
  puVar4 = (undefined8 *)_malloc(0x28);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    puVar4[3] = auVar8._0_8_;
    puVar4[2] = uVar5;
    puVar4[4] = auVar8._8_8_;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108a4a158);
  (*pcVar3)();
}

