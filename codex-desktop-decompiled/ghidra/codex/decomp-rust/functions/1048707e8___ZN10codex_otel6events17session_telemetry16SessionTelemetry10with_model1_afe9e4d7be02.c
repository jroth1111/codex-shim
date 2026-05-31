
void __ZN10codex_otel6events17session_telemetry16SessionTelemetry10with_model17h2a5217f9cf3b31a0E
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 == 0) {
    lVar2 = 1;
    _memcpy(1,param_3,0);
    lVar3 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar2 = _malloc(param_4);
    if (lVar2 == 0) goto LAB_1048708ec;
    _memcpy(lVar2,param_3,param_4);
    lVar3 = *(long *)(param_2 + 0x30);
  }
  if (lVar3 != 0) {
    _free(*(undefined8 *)(param_2 + 0x38));
  }
  *(long *)(param_2 + 0x30) = param_4;
  *(long *)(param_2 + 0x38) = lVar2;
  *(long *)(param_2 + 0x40) = param_4;
  if (param_6 == 0) {
    lVar2 = 1;
    _memcpy(1,param_5,0);
    lVar3 = *(long *)(param_2 + 0x48);
  }
  else {
    lVar2 = _malloc(param_6);
    param_4 = param_6;
    if (lVar2 == 0) {
LAB_1048708ec:
      func_0x0001087c9084(1,param_4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048708fc);
      (*pcVar1)();
    }
    _memcpy(lVar2,param_5,param_6);
    lVar3 = *(long *)(param_2 + 0x48);
  }
  if (lVar3 != 0) {
    _free(*(undefined8 *)(param_2 + 0x50));
  }
  *(long *)(param_2 + 0x48) = param_6;
  *(long *)(param_2 + 0x50) = lVar2;
  *(long *)(param_2 + 0x58) = param_6;
                    /* WARNING: Could not recover jumptable at 0x000108aa9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_10b61b3a8)(param_1,param_2,0x130);
  return;
}

