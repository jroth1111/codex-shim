
void FUN_100e1a6c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long alStack_58 [2];
  long lStack_48;
  
  lVar3 = *param_1;
  if (lVar3 == -0x8000000000000000) {
    if (param_1[10] != -0x8000000000000000) {
      lVar3 = param_1[0xe];
      if (lVar3 != 0 && lVar3 * 9 != -0x11) {
        _free(param_1[0xd] + lVar3 * -8 + -8);
      }
      func_0x000100cd7284(param_1 + 10);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] == 0) {
      return;
    }
    lVar3 = param_1[8];
    goto code_r0x000108aa97c4;
  }
  if (param_1[3] != -0x8000000000000000) {
    lVar2 = param_1[7];
    if (lVar2 != 0 && lVar2 * 9 != -0x11) {
      _free(param_1[6] + lVar2 * -8 + -8);
    }
    func_0x000100cd7284(param_1 + 3);
  }
  if (lVar3 != 0) {
    _free(param_1[1]);
  }
  if (param_1[0xf] < -0x7ffffffffffffffe || param_1[0xf] == 0) {
    lVar3 = param_1[0x15];
    if (lVar3 != 0) goto LAB_100e2f338;
LAB_100e2f364:
    uStack_a0 = 0;
    lStack_60 = 0;
    uStack_80 = uStack_a0;
  }
  else {
    _free(param_1[0x10]);
    lVar3 = param_1[0x15];
    if (lVar3 == 0) goto LAB_100e2f364;
LAB_100e2f338:
    lStack_88 = param_1[0x16];
    lStack_60 = param_1[0x17];
    uStack_98 = 0;
    uStack_78 = 0;
    uStack_a0 = 1;
    lStack_90 = lVar3;
    uStack_80 = uStack_a0;
    lStack_70 = lVar3;
    lStack_68 = lStack_88;
  }
  while (FUN_100f3aeb8(alStack_58,&uStack_a0), lVar2 = lStack_48, lVar3 = alStack_58[0],
        alStack_58[0] != 0) {
    lVar1 = alStack_58[0] + lStack_48 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      _free(*(undefined8 *)(lVar1 + 0x10));
    }
    FUN_100e28410(lVar3 + lVar2 * 0x88 + 0x110);
  }
  lVar3 = param_1[0xc];
  if (lVar3 != -0x8000000000000000) {
    lVar2 = param_1[0xd];
    lVar1 = param_1[0xe];
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar2);
    }
  }
  if (param_1[0x12] < -0x7ffffffffffffffe || param_1[0x12] == 0) {
    return;
  }
  lVar3 = param_1[0x13];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

