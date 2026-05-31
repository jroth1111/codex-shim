
void FUN_1049a52b4(ulong *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar6 = uVar5 ^ 0x8000000000000000;
  if (-1 < (long)uVar5) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar6 = param_1[4];
    if ((uVar6 & 3) != 1) {
      return;
    }
    puVar7 = (undefined8 *)(uVar6 - 1);
    uVar9 = *puVar7;
    puVar8 = *(undefined8 **)(uVar6 + 7);
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar9);
    }
    if (puVar8[1] != 0) {
      _free(uVar9);
    }
    goto code_r0x000108aa97c4;
  }
  if (uVar6 == 1) {
    if (uVar5 != 0) {
      _free(param_1[1]);
    }
    param_1 = param_1 + 3;
  }
  else {
    if (uVar6 != 2) {
      if (param_1[1] == 0) {
        return;
      }
      puVar7 = (undefined8 *)param_1[2];
      goto code_r0x000108aa97c4;
    }
    param_1 = param_1 + 1;
  }
  bVar2 = (byte)*param_1;
  bVar1 = 4;
  if (3 < bVar2) {
    bVar1 = bVar2 - 4;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((((byte)param_1[1] == 1) || ((byte)param_1[1] == 2)) && (param_1[2] != 0)) {
        _free(param_1[3]);
      }
      puVar7 = (undefined8 *)param_1[5];
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      puVar8 = (undefined8 *)param_1[6];
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(puVar7);
      }
    }
    else {
      if (bVar1 != 1) goto LAB_1049a00b0;
      if ((((byte)param_1[1] == 1) || ((byte)param_1[1] == 2)) && (param_1[2] != 0)) {
        _free(param_1[3]);
      }
      puVar7 = (undefined8 *)param_1[5];
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      puVar8 = (undefined8 *)param_1[6];
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(puVar7);
      }
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        return;
      }
      if (bVar1 == 4) {
        if (((bVar2 == 1) || (bVar2 == 2)) && (param_1[1] != 0)) {
          _free(param_1[2]);
        }
        bVar1 = (byte)param_1[4];
        uVar3 = bVar1 - 4;
        if (bVar1 < 4) {
          uVar3 = 3;
        }
        if (uVar3 < 3) {
          return;
        }
        if ((((uVar3 & 0xff) == 3) && (bVar1 != 2)) && (bVar1 != 1)) {
          return;
        }
        if (param_1[5] == 0) {
          return;
        }
        puVar7 = (undefined8 *)param_1[6];
        goto code_r0x000108aa97c4;
      }
LAB_1049a00b0:
      uVar6 = param_1[1];
      if ((uVar6 & 3) != 1) {
        return;
      }
      puVar7 = (undefined8 *)(uVar6 - 1);
      uVar9 = *puVar7;
      puVar8 = *(undefined8 **)(uVar6 + 7);
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar9);
      }
      if (puVar8[1] != 0) {
        _free(uVar9);
      }
      goto code_r0x000108aa97c4;
    }
    if (0 < (long)param_1[1]) {
      _free(param_1[2]);
    }
    puVar7 = (undefined8 *)param_1[4];
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    puVar8 = (undefined8 *)param_1[5];
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar7);
    }
  }
  if (puVar8[1] == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar7);
  return;
}

