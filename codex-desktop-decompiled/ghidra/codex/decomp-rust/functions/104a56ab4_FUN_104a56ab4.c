
void FUN_104a56ab4(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 auStack_38 [3];
  
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_d0 = 0;
  uStack_c8 = 1;
  uStack_c0 = 0;
  uStack_88 = 0x80;
  lStack_b8 = param_2;
  uStack_b0 = param_3;
  lStack_98 = param_2;
  uStack_90 = param_3;
  func_0x000104a56bd4(param_1,&lStack_d0);
  if (*param_1 != -0x7ffffffffffffffb) {
    lStack_58 = param_1[5];
    lStack_60 = param_1[4];
    lStack_48 = param_1[7];
    lStack_50 = param_1[6];
    lStack_40 = param_1[8];
    lStack_78 = param_1[1];
    lStack_80 = *param_1;
    lStack_68 = param_1[3];
    lStack_70 = param_1[2];
    if (uStack_a8 < uStack_b0) {
      do {
        if (0x20 < *(byte *)(lStack_b8 + uStack_a8) ||
            (1L << ((ulong)*(byte *)(lStack_b8 + uStack_a8) & 0x3f) & 0x100002600U) == 0) {
          auStack_38[0] = 0x16;
          lVar1 = func_0x0001089a7a8c(&lStack_d0,auStack_38);
          *param_1 = -0x7ffffffffffffffb;
          param_1[1] = lVar1;
          FUN_104a59df8(&lStack_80);
          break;
        }
        uStack_a8 = uStack_a8 + 1;
      } while (uStack_b0 != uStack_a8);
    }
  }
  if (lStack_d0 != 0) {
    _free(uStack_c8);
  }
  return;
}

