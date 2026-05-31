
void FUN_100d0f22c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 auStack_138 [32];
  undefined8 uStack_38;
  
  plVar5 = (long *)param_1[0x21];
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    *plVar5 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9cdd98fed5209d92E(param_1 + 0x21);
    }
  }
  FUN_100e50a70(param_1 + 0x17);
  FUN_100e633f0(param_1 + 0x1a);
  if (param_1[0xc] != 4) {
    __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
              ();
  }
  FUN_100d04b78(param_1 + 0x1b);
  FUN_100d89ef4(param_1 + 0x1f);
  if (*param_1 != 2) {
    __ZN102__LT_rama_http_core__h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h15da56b666546e37E
              (param_1 + 3);
    lVar3 = *(long *)param_1[3];
    *(long *)param_1[3] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105ab3ae8(param_1 + 3);
    }
    FUN_100d33fbc(param_1 + 6);
    lVar3 = param_1[9];
    puVar1 = (undefined8 *)param_1[10];
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar3);
    }
    if (puVar1[1] != 0) {
      _free(lVar3);
    }
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      lVar3 = *param_1;
      lVar2 = param_1[1];
      uStack_38 = __ZN14rama_http_core6client8dispatch13dispatch_gone17hbd7852c23a9612c5E();
      auStack_138[0] = 3;
      FUN_10084e7d8(lVar3,lVar2,auStack_138);
    }
  }
  return;
}

