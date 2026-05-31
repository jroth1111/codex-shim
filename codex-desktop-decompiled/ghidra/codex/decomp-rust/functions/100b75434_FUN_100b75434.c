
void FUN_100b75434(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  byte bStack_4f;
  ulong uStack_48;
  
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010061ee04(&cStack_50);
  if (cStack_50 == '\x01') {
    uVar2 = uStack_48;
    if (lVar3 != -0x7ffffffffffffffb) {
      FUN_100de6690((long *)(param_2 + 0x18));
    }
  }
  else {
    uVar2 = (ulong)bStack_4f;
    if (lVar3 != -0x7ffffffffffffffa) {
      uStack_88 = *(undefined8 *)(param_2 + 0x28);
      uStack_90 = *(undefined8 *)(param_2 + 0x20);
      uStack_78 = *(undefined8 *)(param_2 + 0x38);
      uStack_80 = *(undefined8 *)(param_2 + 0x30);
      uStack_68 = *(undefined8 *)(param_2 + 0x48);
      uStack_70 = *(undefined8 *)(param_2 + 0x40);
      uStack_58 = *(undefined8 *)(param_2 + 0x58);
      uStack_60 = *(undefined8 *)(param_2 + 0x50);
      if (lVar3 != -0x7ffffffffffffffb) {
        lStack_98 = lVar3;
        if (lVar3 == -0x8000000000000000) {
          FUN_105dc6c20(&lStack_98);
        }
        else {
          uVar2 = FUN_108a4a234(&lStack_98,&cStack_50);
          FUN_105dc6c20(&lStack_98);
          if (uVar2 != 0) goto LAB_100b754cc;
        }
      }
      uVar1 = 0;
      param_1[1] = bStack_4f;
      goto LAB_100b754d4;
    }
  }
LAB_100b754cc:
  *(ulong *)(param_1 + 8) = uVar2;
  uVar1 = 1;
LAB_100b754d4:
  *param_1 = uVar1;
  return;
}

