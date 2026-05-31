
void FUN_108876498(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[1];
  uVar4 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[5];
  uVar5 = param_2[4];
  uVar9 = param_1[1];
  uVar6 = *param_1;
  uVar3 = param_1[2];
  puVar2 = (undefined8 *)_malloc(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = uVar5;
    puVar2[4] = uVar11;
    puVar2[7] = uVar6;
    puVar2[6] = uVar8;
    puVar2[9] = uVar3;
    puVar2[8] = uVar9;
    puVar2[1] = uVar4;
    *puVar2 = &UNK_10b257f70;
    puVar2[3] = uVar10;
    puVar2[2] = uVar7;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10887651c);
  (*pcVar1)();
}

