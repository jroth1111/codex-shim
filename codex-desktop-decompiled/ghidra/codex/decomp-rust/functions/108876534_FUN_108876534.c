
void FUN_108876534(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar6 = param_2[5];
  uVar4 = param_2[4];
  puVar2 = (undefined8 *)_malloc(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = uVar4;
    puVar2[4] = uVar8;
    puVar2[7] = s__failed_to_register_agent_task_w_108ad0c3a;
    puVar2[6] = uVar6;
    puVar2[8] = param_1;
    puVar2[1] = uVar3;
    *puVar2 = &UNK_10b257fa8;
    puVar2[3] = uVar7;
    puVar2[2] = uVar5;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1088765bc);
  (*pcVar1)();
}

