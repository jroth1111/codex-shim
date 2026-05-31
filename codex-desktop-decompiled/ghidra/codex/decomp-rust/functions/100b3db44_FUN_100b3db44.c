
void FUN_100b3db44(undefined2 *param_1,long *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 10) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x70747468) {
        *param_1 = 0;
        return;
      }
      goto LAB_100b3dc80;
    }
    if (param_3 != 5) goto LAB_100b3dc80;
    uVar4 = (uint)*(byte *)((long)param_2 + 4);
    bVar1 = (int)*param_2 == 0x70747468;
    uVar3 = 0x73;
  }
  else {
    if (param_3 == 10) {
      if (*param_2 == 0x745f35736b636f73 && (short)param_2[1] == 0x7063) {
        *(undefined1 *)((long)param_1 + 1) = 2;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x755f35736b636f73 && (short)param_2[1] == 0x7064) {
        *(undefined1 *)((long)param_1 + 1) = 3;
        *(undefined1 *)param_1 = 0;
        return;
      }
      goto LAB_100b3dc80;
    }
    if (param_3 != 0xc) {
      if ((param_3 != 0xd) ||
         (*param_2 != 0x6f635f7370747468 || *(long *)((long)param_2 + 5) != 0x7463656e6e6f635f))
      goto LAB_100b3dc80;
      goto LAB_100b3dc54;
    }
    uVar4 = *(uint *)(param_2 + 1);
    bVar1 = *param_2 == 0x6e6f632d70747468;
    uVar3 = 0x7463656e;
  }
  if (bVar1 && uVar4 == uVar3) {
LAB_100b3dc54:
    *(undefined1 *)((long)param_1 + 1) = 1;
    *(undefined1 *)param_1 = 0;
    return;
  }
LAB_100b3dc80:
  uVar2 = FUN_1087e4494(param_2,param_3,&UNK_10b223098,6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined1 *)param_1 = 1;
  return;
}

