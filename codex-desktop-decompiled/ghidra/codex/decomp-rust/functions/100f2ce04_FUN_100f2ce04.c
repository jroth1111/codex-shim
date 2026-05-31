
void FUN_100f2ce04(long *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)param_2[1]) {
    param_1[1] = -0x7fffffffffffffff;
    *param_1 = 2;
    return;
  }
  *param_2 = (long)(pcVar2 + 0x20);
  param_2[2] = param_2[2] + 1;
  cVar1 = *pcVar2;
  lVar3 = -0x8000000000000000;
  if (cVar1 != '\x10') {
    if (cVar1 == '\x11') {
      func_0x0001004e0914(&lStack_78,*(undefined8 *)(pcVar2 + 8));
      if (lStack_78 != 2) goto LAB_100f2ce78;
LAB_100f2cee8:
      lStack_b8 = lStack_60;
      lStack_c0 = lStack_68;
      lVar3 = lStack_70;
      if (lStack_78 == 2) goto LAB_100f2cefc;
LAB_100f2ce9c:
      param_1[7] = lStack_98;
      param_1[6] = lStack_a0;
      param_1[9] = lStack_88;
      param_1[8] = lStack_90;
      param_1[10] = lStack_80;
      param_1[3] = lStack_b8;
      param_1[2] = lStack_c0;
      param_1[5] = lStack_a8;
      param_1[4] = lStack_b0;
      lVar3 = lStack_70;
      goto LAB_100f2cf08;
    }
    if (cVar1 != '\x12') {
      func_0x0001004e0914(&lStack_78);
      if (lStack_78 == 2) goto LAB_100f2cee8;
LAB_100f2ce78:
      lStack_98 = lStack_40;
      lStack_a0 = lStack_48;
      lStack_88 = lStack_30;
      lStack_90 = lStack_38;
      lStack_80 = lStack_28;
      lStack_b8 = lStack_60;
      lStack_c0 = lStack_68;
      lStack_a8 = lStack_50;
      lStack_b0 = lStack_58;
      lVar3 = lStack_70;
      if (lStack_78 != 2) goto LAB_100f2ce9c;
    }
  }
LAB_100f2cefc:
  param_1[3] = lStack_b8;
  param_1[2] = lStack_c0;
  lStack_78 = 2;
LAB_100f2cf08:
  *param_1 = lStack_78;
  param_1[1] = lVar3;
  return;
}

