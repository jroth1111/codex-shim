
undefined1  [16] FUN_1039cf048(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_2 < param_1) goto LAB_1039cf054;
  if (param_1 != 0) {
    if (param_1 < param_4) {
      if (*(char *)(param_3 + param_1) < -0x40) goto LAB_1039cf054;
    }
    else if (param_1 != param_4) goto LAB_1039cf054;
  }
  if (param_2 != 0) {
    if (param_2 < param_4) {
      if (*(char *)(param_3 + param_2) < -0x40) {
LAB_1039cf054:
        auVar1._8_8_ = 0;
        auVar1._0_8_ = param_2 - param_1;
        return auVar1 << 0x40;
      }
    }
    else if (param_2 != param_4) goto LAB_1039cf054;
  }
  auVar2._8_8_ = param_2 - param_1;
  auVar2._0_8_ = param_3 + param_1;
  return auVar2;
}

