
void FUN_100ae3dfc(undefined1 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  uVar3 = param_3 - 2U >> 2 | param_3 - 2U << 0x3e;
  if ((long)uVar3 < 2) {
    if (uVar3 == 0) {
      iVar1 = _memcmp(param_2,&UNK_108ca26b0,param_3);
      if (iVar1 == 0) {
        uVar2 = 0;
        goto LAB_100ae3f00;
      }
      if (param_3 == 6) goto LAB_100ae3e34;
LAB_100ae3e8c:
      if (param_3 == 10) goto LAB_100ae3ee4;
      if (param_3 == 0xe) goto LAB_100ae3e9c;
    }
    else if (uVar3 == 1) {
LAB_100ae3e34:
      iVar1 = _memcmp(param_2,&UNK_108ca105e,param_3);
      if (iVar1 == 0) {
        uVar2 = 1;
        goto LAB_100ae3f00;
      }
      if (param_3 != 6) goto LAB_100ae3e8c;
LAB_100ae3ec4:
      iVar1 = _memcmp(param_2,&UNK_108ca273b,param_3);
      if (iVar1 == 0) {
        uVar2 = 3;
        goto LAB_100ae3f00;
      }
    }
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_100ae3efc;
LAB_100ae3e9c:
      iVar1 = _memcmp(param_2,&UNK_108cae0f9,param_3);
      if (iVar1 == 0) {
        uVar2 = 2;
        goto LAB_100ae3f00;
      }
      if (param_3 != 10) {
        if (param_3 == 6) goto LAB_100ae3ec4;
        goto LAB_100ae3efc;
      }
    }
LAB_100ae3ee4:
    iVar1 = _memcmp(param_2,&UNK_108cae107,param_3);
    if (iVar1 == 0) {
      uVar2 = 4;
      goto LAB_100ae3f00;
    }
  }
LAB_100ae3efc:
  uVar2 = 5;
LAB_100ae3f00:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}

