
void FUN_108857b68(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = param_2[1];
  uVar4 = *param_2;
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[5];
  uVar5 = param_2[4];
  uVar9 = param_1[1];
  uVar6 = *param_1;
  uVar13 = param_1[3];
  uVar11 = param_1[2];
  uVar3 = param_1[4];
  puVar2 = (undefined8 *)_malloc(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = uVar5;
    puVar2[4] = uVar12;
    puVar2[7] = uVar6;
    puVar2[6] = uVar8;
    puVar2[9] = uVar11;
    puVar2[8] = uVar9;
    puVar2[0xb] = uVar3;
    puVar2[10] = uVar13;
    puVar2[1] = uVar4;
    *puVar2 = &UNK_10b247e88;
    puVar2[3] = uVar10;
    puVar2[2] = uVar7;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108857bf0);
  (*pcVar1)();
}

