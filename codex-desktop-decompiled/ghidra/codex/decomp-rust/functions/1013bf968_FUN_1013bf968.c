
void FUN_1013bf968(long *param_1,char *param_2)

{
  long lVar1;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined1 auStack_1f8 [376];
  long alStack_80 [3];
  long lStack_68;
  long lStack_60;
  long lStack_38;
  
  if (*param_2 == '\x15') {
    lStack_218 = *(long *)(param_2 + 0x10);
    lStack_210 = lStack_218 + *(long *)(param_2 + 0x18) * 0x40;
    uStack_208 = 0;
    lStack_200 = 0;
    func_0x000100b2733c(param_1,&lStack_218);
    if (*param_1 != -0x8000000000000000) {
      _memcpy(auStack_1f8,param_1,0x1c0);
      if (lStack_210 - lStack_218 != 0) {
        lStack_38 = lStack_200;
        lVar1 = FUN_1087e422c(lStack_200 + ((ulong)(lStack_210 - lStack_218) >> 6),&lStack_38,
                              &UNK_10b23a190);
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar1;
        if ((alStack_80[0] != -0x7fffffffffffffff) && (alStack_80[0] != -0x8000000000000000)) {
          if ((lStack_60 != 0) && (lStack_60 * 9 != -0x11)) {
            _free(lStack_68 + lStack_60 * -8 + -8);
          }
          func_0x000100cd7284(alStack_80);
        }
        FUN_100e0d658(auStack_1f8);
      }
    }
  }
  else {
    lVar1 = FUN_108855c40(param_2,auStack_1f8,&UNK_10b213188);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar1;
  }
  return;
}

