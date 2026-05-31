
void FUN_1087e8d4c(undefined1 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_3c;
  undefined1 auStack_38 [8];
  uint *puStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uVar1 = (undefined1)param_3;
  if (param_3 < 0x80) {
    uStack_3c = param_3 & 0xff;
    uStack_28 = 1;
  }
  else if (param_3 < 0x800) {
    uStack_3c = (ushort)(CONCAT11(uVar1,(char)(param_3 >> 6)) | 0xc0) & 0xffff3fff | 0x8000;
    uStack_28 = 2;
  }
  else {
    uVar2 = (undefined1)(param_3 >> 6);
    if (param_3 < 0x10000) {
      uStack_3c = (CONCAT12(uVar1,CONCAT11(uVar2,(char)(param_3 >> 0xc))) & 0xff3fff | 0x80e0) &
                  0xff3fffff | 0x800000;
      uStack_28 = 3;
    }
    else {
      uStack_3c = CONCAT13(uVar1,CONCAT12(uVar2,CONCAT11((char)(param_3 >> 0xc),
                                                         (char)(param_3 >> 0x12)))) & 0x3f3f3fff |
                  0x808080f0;
      uStack_28 = 4;
    }
  }
  puStack_30 = &uStack_3c;
  auStack_38[0] = 5;
  uVar3 = func_0x000108a4a50c(auStack_38,&uStack_60,&UNK_10b21b6f0);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 2;
  return;
}

