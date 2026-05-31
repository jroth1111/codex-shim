
void FUN_1087efb1c(undefined8 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uStack_44;
  undefined1 auStack_40 [8];
  uint *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    uStack_44 = param_2 & 0xff;
    uStack_30 = 1;
  }
  else if (param_2 < 0x800) {
    uStack_44 = (ushort)(CONCAT11(uVar1,(char)(param_2 >> 6)) | 0xc0) & 0xffff3fff | 0x8000;
    uStack_30 = 2;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x10000) {
      uStack_44 = (CONCAT12(uVar1,CONCAT11(uVar2,(char)(param_2 >> 0xc))) & 0xff3fff | 0x80e0) &
                  0xff3fffff | 0x800000;
      uStack_30 = 3;
    }
    else {
      uStack_44 = CONCAT13(uVar1,CONCAT12(uVar2,CONCAT11((char)(param_2 >> 0xc),
                                                         (char)(param_2 >> 0x12)))) & 0x3f3f3fff |
                  0x808080f0;
      uStack_30 = 4;
    }
  }
  puStack_38 = &uStack_44;
  auStack_40[0] = 5;
  uVar3 = func_0x000108a4a50c(auStack_40,&uStack_21,&UNK_10b21a6b0);
  *param_1 = 4;
  param_1[1] = uVar3;
  return;
}

