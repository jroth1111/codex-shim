
void FUN_100ddb3d0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((*param_1 + 0x8000000000000001U & *param_1 >> 0x3f) == 0) {
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
      if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) goto LAB_100de92c8;
LAB_100de92ec:
      _free(param_1[0xd]);
      lVar1 = param_1[1];
      lVar2 = param_1[2];
    }
    else {
      _free(param_1[10]);
      if (param_1[0xc] != -0x8000000000000000 && param_1[0xc] != 0) goto LAB_100de92ec;
LAB_100de92c8:
      lVar1 = param_1[1];
      lVar2 = param_1[2];
    }
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*param_1 != 0) {
      _free(lVar1);
    }
    lVar1 = param_1[4];
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_1[3] != 0) {
      _free(lVar1);
    }
    lVar1 = param_1[7];
    lVar2 = param_1[8];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_1[6] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  if (param_1[7] == -0x8000000000000000 || param_1[7] == 0) {
    if (param_1[10] == -0x8000000000000000 || param_1[10] == 0) goto LAB_100de7c20;
LAB_100de7c44:
    _free(param_1[0xb]);
    lVar1 = param_1[2];
    lVar2 = param_1[3];
  }
  else {
    _free(param_1[8]);
    if (param_1[10] != -0x8000000000000000 && param_1[10] != 0) goto LAB_100de7c44;
LAB_100de7c20:
    lVar1 = param_1[2];
    lVar2 = param_1[3];
  }
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (param_1[1] != 0) {
    _free(lVar1);
  }
  lVar1 = param_1[5];
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (param_1[4] == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar1);
  return;
}

