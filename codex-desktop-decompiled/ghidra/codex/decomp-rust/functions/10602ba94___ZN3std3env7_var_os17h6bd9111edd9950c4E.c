
void __ZN3std3env7_var_os17h6bd9111edd9950c4E(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  ulong auStack_1c0 [48];
  
  if (0x17f < param_3) {
    FUN_108a81dbc(&lStack_1d8,param_2,param_3);
    goto joined_r0x00010602bbc4;
  }
  uVar2 = _memcpy(auStack_1c0,param_2,param_3);
  *(undefined1 *)((long)auStack_1c0 + param_3) = 0;
  if (0xe < param_3) {
    uVar4 = (long)auStack_1c0 - (long)auStack_1c0;
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if (*(char *)((long)auStack_1c0 + uVar5) == '\0') goto LAB_10602bba4;
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
      uVar5 = uVar4;
      if (param_3 - 0xf < uVar4) goto joined_r0x00010602bb80;
    }
    do {
      uVar1 = *(ulong *)((long)auStack_1c0 + uVar4 + 8);
      uVar5 = uVar4;
      if ((((0x101010101010100 - *(ulong *)((long)auStack_1c0 + uVar4) |
            *(ulong *)((long)auStack_1c0 + uVar4)) & (0x101010101010100 - uVar1 | uVar1) ^
           0xffffffffffffffff) & 0x8080808080808080) != 0) break;
      uVar4 = uVar4 + 0x10;
      uVar5 = uVar4;
    } while (uVar4 <= param_3 - 0xf);
joined_r0x00010602bb80:
    do {
      if (param_3 + 1 == uVar5) goto LAB_10602bbcc;
      if (*(char *)((long)auStack_1c0 + uVar5) == '\0') goto LAB_10602bba4;
      uVar5 = uVar5 + 1;
    } while( true );
  }
  uVar5 = 0;
  do {
    if (*(char *)((long)auStack_1c0 + uVar5) == '\0') goto LAB_10602bba4;
    uVar5 = uVar5 + 1;
  } while (param_3 + 1 != uVar5);
LAB_10602bbcc:
  lStack_1d8 = -0x7fffffffffffffff;
  puStack_1d0 = &UNK_10b4add80;
  goto LAB_10602bbec;
LAB_10602bba4:
  if (uVar5 != param_3) goto LAB_10602bbcc;
  FUN_1060300c0(&lStack_1d8,uVar2,auStack_1c0);
joined_r0x00010602bbc4:
  if (lStack_1d8 != -0x7fffffffffffffff) {
    param_1[2] = lStack_1c8;
    param_1[1] = (long)puStack_1d0;
    goto LAB_10602bc64;
  }
LAB_10602bbec:
  if (((ulong)puStack_1d0 & 3) == 1) {
    puVar6 = (undefined8 *)(puStack_1d0 + -1);
    uVar2 = *puVar6;
    puVar7 = *(undefined8 **)(puStack_1d0 + 7);
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2);
    }
    if (puVar7[1] != 0) {
      _free(uVar2);
    }
    _free(puVar6);
    lStack_1d8 = -0x8000000000000000;
  }
  else {
    lStack_1d8 = -0x8000000000000000;
  }
LAB_10602bc64:
  *param_1 = lStack_1d8;
  return;
}

