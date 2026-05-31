
void FUN_100ae067c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar4 = param_3 - 9U >> 1 | param_3 - 9U << 0x3f;
  if ((long)uVar4 < 4) {
    if (uVar4 == 0) {
LAB_100ae06e0:
      iVar1 = _memcmp(param_2,&UNK_108cab857,param_3);
      if (iVar1 != 0) {
        if (param_3 != 0) {
LAB_100ae06fc:
          if (param_3 == 0x11) goto LAB_100ae0744;
          if (param_3 == 0x17) goto LAB_100ae0720;
          goto LAB_100ae0760;
        }
        goto LAB_100ae077c;
      }
      uVar3 = 0x17;
    }
    else {
      if (uVar4 != 1) goto LAB_100ae075c;
      iVar1 = _memcmp(param_2,&UNK_108cab84c,param_3);
      if (iVar1 != 0) {
        if (0x10 < param_3) goto LAB_100ae06fc;
        if (param_3 == 0) goto LAB_100ae077c;
        if (param_3 == 9) goto LAB_100ae06e0;
        goto LAB_100ae0760;
      }
      uVar3 = 0x16;
    }
  }
  else {
    if (uVar4 != 4) {
      if (uVar4 != 7) goto LAB_100ae075c;
LAB_100ae0720:
      iVar1 = _memcmp(param_2,&UNK_108cab860,param_3);
      if (iVar1 == 0) {
        uVar3 = 0x18;
        goto LAB_100ae07c0;
      }
      if (param_3 == 0) goto LAB_100ae077c;
      if (param_3 != 0x11) goto LAB_100ae0760;
    }
LAB_100ae0744:
    iVar1 = _memcmp(param_2,&UNK_108cab877,param_3);
    if (iVar1 != 0) {
LAB_100ae075c:
      if (param_3 == 0) {
LAB_100ae077c:
        lVar2 = 1;
      }
      else {
LAB_100ae0760:
        lVar2 = _malloc(param_3);
        if (lVar2 == 0) {
          func_0x0001087c9084(1,param_3);
          goto LAB_100ae077c;
        }
      }
      _memcpy(lVar2,param_2,param_3);
      *(undefined1 *)(param_1 + 1) = 0xc;
      param_1[2] = param_3;
      param_1[3] = lVar2;
      param_1[4] = param_3;
      goto LAB_100ae07c4;
    }
    uVar3 = 0x19;
  }
LAB_100ae07c0:
  *(undefined1 *)(param_1 + 1) = uVar3;
LAB_100ae07c4:
  *param_1 = 2;
  return;
}

