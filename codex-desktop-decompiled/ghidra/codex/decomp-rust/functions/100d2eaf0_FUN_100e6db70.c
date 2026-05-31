
void FUN_100e6db70(long *param_1)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  long lVar3;
  long unaff_x23;
  undefined8 *puVar4;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1[4] != 0) {
    _free(param_1[5]);
  }
  if (param_1[7] == -0x8000000000000000 || param_1[7] == 0) {
    if (param_1[10] != -0x8000000000000000 && param_1[10] != 0) {
LAB_100e6dbe8:
      _free(param_1[0xb]);
      lVar2 = param_1[0xd];
      goto joined_r0x000100e6dbc8;
    }
  }
  else {
    _free(param_1[8]);
    if (param_1[10] != -0x8000000000000000 && param_1[10] != 0) goto LAB_100e6dbe8;
  }
  lVar2 = param_1[0xd];
joined_r0x000100e6dbc8:
  if (lVar2 != -0x8000000000000000) {
    lVar1 = param_1[0xe];
    lVar3 = param_1[0xf];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar2 != 0) {
      _free(lVar1);
    }
  }
  if (*param_1 != 0) {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lStack_68 = param_1[2];
      uStack_78 = 0;
      uStack_58 = 0;
      lStack_70 = lVar2;
      lStack_50 = lVar2;
      lStack_48 = lStack_68;
    }
    uStack_80 = (ulong)(lVar2 != 0);
    uStack_60 = uStack_80;
    FUN_100f3a3c8(&stack0xffffffffffffffc8,&uStack_80);
    while (unaff_x23 != 0) {
      lVar2 = unaff_x23 + unaff_x21 * 0x18;
      if (*(long *)(lVar2 + 8) != 0) {
        _free(*(undefined8 *)(lVar2 + 0x10));
      }
      if (*(long *)(lVar2 + 0x110) != 0) {
        _free(*(undefined8 *)(lVar2 + 0x118));
      }
      FUN_100f3a3c8(&stack0xffffffffffffffc8,&uStack_80);
    }
  }
  return;
}

