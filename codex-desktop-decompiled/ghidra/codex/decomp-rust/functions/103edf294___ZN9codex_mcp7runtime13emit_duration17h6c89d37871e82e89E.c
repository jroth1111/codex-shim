
void __ZN9codex_mcp7runtime13emit_duration17h6c89d37871e82e89E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plStack_60;
  long lStack_58;
  ulong auStack_50 [4];
  ulong uStack_30;
  
  if (lRam000000010b62f000 != 0) {
    return;
  }
  lVar2 = *plRam000000010b62f008;
  *plRam000000010b62f008 = lVar2 + 1;
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103edf410);
    (*pcVar1)();
  }
  plStack_60 = plRam000000010b62f008;
  __ZN10codex_otel7metrics6client13MetricsClient15record_duration17h542c40af82c2a5d9E
            (&lStack_58,&plStack_60,param_1,param_2,param_3,param_4,param_5,param_6);
  if (lStack_58 == 0xb) goto LAB_103edf3dc;
  switch(lStack_58) {
  case 0:
  case 4:
  case 9:
    goto LAB_103edf3dc;
  case 1:
  case 2:
  case 7:
    if (auStack_50[0] == 0) goto LAB_103edf3dc;
    goto LAB_103edf3d8;
  case 3:
    uVar3 = uStack_30;
    if (auStack_50[0] != 0) {
      _free(auStack_50[1]);
      uVar3 = uStack_30;
    }
    break;
  case 5:
    uVar3 = auStack_50[2];
    auStack_50[3] = auStack_50[1];
    break;
  case 6:
    uVar3 = auStack_50[0] ^ 0x8000000000000000;
    if (-1 < (long)auStack_50[0]) {
      uVar3 = 4;
    }
    if (uVar3 < 3) goto LAB_103edf3dc;
    if ((uVar3 == 3) || (uVar3 != 4)) {
      if (auStack_50[1] == 0) goto LAB_103edf3dc;
      lVar2 = 0x10;
    }
    else {
      if (auStack_50[0] != 0) {
        _free(auStack_50[1]);
      }
      if (auStack_50[3] == 0) goto LAB_103edf3dc;
      lVar2 = 0x20;
    }
    auStack_50[1] = *(ulong *)((long)auStack_50 + lVar2);
    goto LAB_103edf3d8;
  default:
    uVar3 = auStack_50[1];
    auStack_50[3] = auStack_50[0];
    if ((long)auStack_50[0] < -0x7ffffffffffffffe) goto LAB_103edf3dc;
  }
  auStack_50[1] = uVar3;
  if (auStack_50[3] != 0) {
LAB_103edf3d8:
    _free(auStack_50[1]);
  }
LAB_103edf3dc:
  lVar2 = *plStack_60;
  *plStack_60 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001048d2054(&plStack_60);
  }
  return;
}

