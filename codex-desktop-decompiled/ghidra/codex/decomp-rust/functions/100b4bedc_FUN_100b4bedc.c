
void FUN_100b4bedc(undefined1 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  uVar3 = param_3 - 5U >> 1 | param_3 - 5U << 0x3f;
  if ((long)uVar3 < 4) {
    if (uVar3 == 0) {
LAB_100b4bfac:
      iVar1 = _memcmp(param_2,&UNK_108ca1efe);
      if (iVar1 == 0) {
        uVar2 = 3;
        goto LAB_100b4c00c;
      }
      if (param_3 == 0xf) goto LAB_100b4bff4;
      if (param_3 == 0xd) goto LAB_100b4bfd8;
    }
    else if (uVar3 == 2) {
      iVar1 = _memcmp(param_2,&UNK_108ca2143);
      if (iVar1 == 0) {
        uVar2 = 1;
        goto LAB_100b4c00c;
      }
      if (param_3 == 5) goto LAB_100b4bfac;
      if (param_3 == 0xf) goto LAB_100b4bff4;
      if (param_3 == 0xd) goto LAB_100b4bf78;
    }
  }
  else {
    if (uVar3 == 4) {
LAB_100b4bf78:
      iVar1 = _memcmp(param_2,&UNK_108cb88bf);
      if (iVar1 == 0) {
        uVar2 = 2;
        goto LAB_100b4c00c;
      }
      if (param_3 != 0xf) {
        if (param_3 != 0xd) {
          if (param_3 == 5) goto LAB_100b4bfac;
          goto LAB_100b4c008;
        }
LAB_100b4bfd8:
        iVar1 = _memcmp(param_2,&UNK_108cb88cc);
        if (iVar1 == 0) {
          uVar2 = 4;
          goto LAB_100b4c00c;
        }
        goto LAB_100b4c008;
      }
    }
    else if (uVar3 != 5) {
      if ((uVar3 == 6) && (iVar1 = _memcmp(param_2,&UNK_108cb8872), iVar1 == 0)) {
        uVar2 = 0;
        goto LAB_100b4c00c;
      }
      goto LAB_100b4c008;
    }
LAB_100b4bff4:
    iVar1 = _memcmp(param_2,&UNK_108cbac55);
    if (iVar1 == 0) {
      uVar2 = 5;
      goto LAB_100b4c00c;
    }
  }
LAB_100b4c008:
  uVar2 = 6;
LAB_100b4c00c:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}

