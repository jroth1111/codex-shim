
void FUN_1039ba774(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  func_0x0001055610c4(&lStack_60,param_2);
  if (lStack_60 == -0x8000000000000000) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    uStack_48 = uStack_58;
    if (lVar1 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(lVar1);
      if (lVar3 == 0) {
        func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1039ba7e0);
        (*pcVar2)();
      }
    }
    _memcpy(lVar3,uVar4,lVar1);
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = lVar1;
    if ((uStack_58 & 3) == 1) {
      uVar4 = *(undefined8 *)(uStack_58 - 1);
      puVar5 = *(undefined8 **)(uStack_58 + 7);
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar4);
      }
      if (puVar5[1] != 0) {
        _free(uVar4);
      }
      _free((undefined8 *)(uStack_58 - 1));
    }
  }
  else {
    param_1[1] = uStack_58;
    *param_1 = lStack_60;
    param_1[2] = lStack_50;
  }
  return;
}

