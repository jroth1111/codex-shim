
void FUN_10899f264(undefined1 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uStack_27;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar6 = param_2[5];
  uVar4 = param_2[4];
  puVar2 = (undefined8 *)_malloc(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar3;
    *puVar2 = &UNK_10b336618;
    puVar2[3] = uVar7;
    puVar2[2] = uVar5;
    puVar2[5] = uVar4;
    puVar2[4] = uVar8;
    puVar2[7] = CONCAT71(uStack_27,param_1);
    puVar2[6] = uVar6;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10899f2d8);
  (*pcVar1)();
}

