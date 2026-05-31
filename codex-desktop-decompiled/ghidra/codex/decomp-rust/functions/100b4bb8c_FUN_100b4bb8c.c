
void FUN_100b4bb8c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  uVar3 = param_3 - 5U >> 1 | param_3 - 5U << 0x3f;
  if ((long)uVar3 < 4) {
    if (uVar3 == 0) {
LAB_100b4bc5c:
      iVar1 = _memcmp(param_2,&UNK_108ca1efe,param_3);
      if (iVar1 == 0) {
        uVar2 = 4;
        goto LAB_100b4bce0;
      }
      if (param_3 == 0xf) goto LAB_100b4bca4;
      if (param_3 == 0xd) goto LAB_100b4bc84;
    }
    else if (uVar3 == 2) {
      iVar1 = _memcmp(param_2,&UNK_108ca2143,param_3);
      if (iVar1 == 0) {
        uVar2 = 2;
        goto LAB_100b4bce0;
      }
      if (param_3 == 5) goto LAB_100b4bc5c;
      if (param_3 == 0xf) goto LAB_100b4bca4;
      if (param_3 == 0xd) goto LAB_100b4bbe8;
    }
  }
  else if (uVar3 == 8) {
    iVar1 = _memcmp(param_2,&UNK_108cb8e87,param_3);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_100b4bce0;
    }
  }
  else if (uVar3 == 5) {
LAB_100b4bca4:
    iVar1 = _memcmp(param_2,&UNK_108cbac55,param_3);
    if (iVar1 == 0) {
      uVar2 = 6;
      goto LAB_100b4bce0;
    }
  }
  else if (uVar3 == 4) {
    iVar1 = _memcmp(param_2,&UNK_108cb88ab,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_100b4bce0;
    }
LAB_100b4bbe8:
    iVar1 = _memcmp(param_2,&UNK_108cb88bf,param_3);
    if (iVar1 == 0) {
      uVar2 = 3;
      goto LAB_100b4bce0;
    }
    if (param_3 == 0xf) goto LAB_100b4bca4;
    if (param_3 != 0xd) {
      if (param_3 == 5) goto LAB_100b4bc5c;
      goto LAB_100b4bcdc;
    }
LAB_100b4bc84:
    iVar1 = _memcmp(param_2,&UNK_108cb88cc,param_3);
    if (iVar1 == 0) {
      uVar2 = 5;
      goto LAB_100b4bce0;
    }
  }
LAB_100b4bcdc:
  uVar2 = 7;
LAB_100b4bce0:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}

