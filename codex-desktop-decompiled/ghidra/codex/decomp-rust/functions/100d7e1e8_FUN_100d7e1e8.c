
void FUN_100d7e1e8(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  if (*param_1 != 2) {
    uVar1 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar1 = uVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar1,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar1 = param_1[4], uVar1 != 0)) {
    uStack_50 = *(ulong *)(uVar1 + 0x10);
    uStack_48 = *(ulong *)(uVar1 + 0x18);
    puStack_158 = &uStack_50;
    puStack_150 = &DAT_100c7b3a0;
    FUN_1011d7d74(param_1,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&puStack_158);
  }
  uVar1 = param_1[5];
  lVar3 = uVar1 - 3;
  if (uVar1 < 3) {
    lVar3 = 2;
  }
  if (lVar3 == 0) {
    FUN_100e87bdc(param_1 + 6);
  }
  else if (lVar3 == 1) {
    __ZN102__LT_rama_http_core__h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h15da56b666546e37E
              (param_1 + 0x17);
    lVar3 = *(long *)param_1[0x17];
    *(long *)param_1[0x17] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105ab3ae8(param_1 + 0x17);
    }
    if (param_1[6] != 0) {
      plVar2 = (long *)param_1[7];
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        *plVar2 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9cdd98fed5209d92E();
        }
      }
    }
    if (param_1[8] != 0) {
      if (param_1[9] != 0) {
        FUN_100d33fbc();
      }
    }
    if (param_1[0xc] != 4) {
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                ();
    }
    uVar1 = param_1[0x1a];
    if ((uVar1 != 2) && ((param_1[0x1c] & 1) == 0)) {
      uVar4 = param_1[0x1b];
      uStack_50 = uVar1;
      uStack_48 = uVar4;
      uStack_58 = __ZN14rama_http_core6client8dispatch13dispatch_gone17hbd7852c23a9612c5E();
      puStack_158 = (ulong *)0x3;
      FUN_10084e7d8(uVar1,uVar4,&puStack_158);
    }
  }
  else {
    FUN_100e572d0(param_1 + 0xcc);
    if (param_1[0xcd] != 0) {
      FUN_100e5aa64(param_1 + 0xcd);
    }
    FUN_100dc8750(param_1 + 5);
  }
  if (*param_1 != 2) {
    uVar1 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar1 = uVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar1,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar1 = param_1[4], uVar1 != 0)) {
    uStack_50 = *(ulong *)(uVar1 + 0x10);
    uStack_48 = *(ulong *)(uVar1 + 0x18);
    puStack_158 = &uStack_50;
    puStack_150 = &DAT_100c7b3a0;
    FUN_1011d7d74(param_1,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&puStack_158);
  }
  FUN_100dddd8c(param_1);
  return;
}

