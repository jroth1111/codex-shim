
void FUN_100b2b2e0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  char cStack_60;
  byte bStack_5f;
  ulong uStack_58;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar5 = param_2[3];
  FUN_100b3e630(&cStack_60,lVar2,param_2[2]);
  if (lVar1 != 0) {
    _free(lVar2);
  }
  if (cStack_60 == '\x01') {
    uVar4 = uStack_58;
    if (lVar5 != -0x7ffffffffffffffb) {
      FUN_100de6690(param_2 + 3);
    }
  }
  else {
    uVar4 = (ulong)bStack_5f;
    if (lVar5 != -0x7ffffffffffffffa) {
      lStack_98 = param_2[5];
      lStack_a0 = param_2[4];
      lStack_88 = param_2[7];
      lStack_90 = param_2[6];
      lStack_78 = param_2[9];
      lStack_80 = param_2[8];
      lStack_68 = param_2[0xb];
      lStack_70 = param_2[10];
      if (lVar5 != -0x7ffffffffffffffb) {
        lStack_a8 = lVar5;
        if (lVar5 == -0x8000000000000000) {
          FUN_105dc6c20(&lStack_a8);
        }
        else {
          uVar4 = FUN_108a4a234(&lStack_a8,&cStack_60);
          FUN_105dc6c20(&lStack_a8);
          if (uVar4 != 0) goto LAB_100b2b394;
        }
      }
      uVar3 = 0;
      param_1[1] = bStack_5f;
      goto LAB_100b2b39c;
    }
  }
LAB_100b2b394:
  *(ulong *)(param_1 + 8) = uVar4;
  uVar3 = 1;
LAB_100b2b39c:
  *param_1 = uVar3;
  return;
}

