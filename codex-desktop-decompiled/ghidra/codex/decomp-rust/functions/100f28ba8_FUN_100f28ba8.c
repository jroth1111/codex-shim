
void FUN_100f28ba8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long unaff_x20;
  long lVar3;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  pcVar2 = *(char **)(param_2 + 8);
  if (pcVar2 == *(char **)(param_2 + 0x18)) {
LAB_100f28be4:
    *param_1 = -0x7fffffffffffffff;
    return;
  }
  cStack_c0 = *pcVar2;
  *(char **)(param_2 + 8) = pcVar2 + 0x20;
  if (cStack_c0 == '\x16') goto LAB_100f28be4;
  uStack_b7 = (undefined7)*(undefined8 *)(pcVar2 + 9);
  uStack_bf = (undefined7)*(undefined8 *)(pcVar2 + 1);
  uStack_b8 = (undefined1)((ulong)*(undefined8 *)(pcVar2 + 1) >> 0x38);
  uStack_a8 = *(undefined8 *)(pcVar2 + 0x18);
  uStack_b0 = (undefined1)*(undefined8 *)(pcVar2 + 0x10);
  uStack_af = (undefined7)((ulong)*(undefined8 *)(pcVar2 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_c0 == '\x10') {
LAB_100f28c2c:
    FUN_100e077ec(&cStack_c0);
    lStack_78 = -0x8000000000000000;
  }
  else {
    if (cStack_c0 == '\x11') {
      puVar1 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = puVar1[1];
      uStack_a0 = *puVar1;
      uStack_88 = puVar1[3];
      uStack_90 = puVar1[2];
      FUN_100b1671c(&lStack_78,&uStack_a0);
      if (lStack_78 == -0x8000000000000000) {
        lVar3 = -0x7fffffffffffffff;
      }
      else {
        lStack_e8 = lStack_60;
        lStack_f0 = lStack_68;
        lStack_d8 = lStack_50;
        lStack_e0 = lStack_58;
        lStack_d0 = lStack_48;
        lVar3 = lStack_78;
      }
      _free(puVar1);
      lStack_78 = lVar3;
      unaff_x20 = lStack_70;
    }
    else {
      if (cStack_c0 == '\x12') goto LAB_100f28c2c;
      FUN_100b1671c(&lStack_78,&cStack_c0);
      unaff_x20 = lStack_70;
      lStack_f0 = lStack_68;
      lStack_e8 = lStack_60;
      lStack_e0 = lStack_58;
      lStack_d8 = lStack_50;
      lStack_d0 = lStack_48;
      if (lStack_78 == -0x8000000000000000) goto LAB_100f28d00;
    }
    if (lStack_78 == -0x7fffffffffffffff) {
LAB_100f28d00:
      *param_1 = -0x7ffffffffffffffe;
      param_1[1] = unaff_x20;
      return;
    }
  }
  param_1[3] = lStack_e8;
  param_1[2] = lStack_f0;
  param_1[5] = lStack_d8;
  param_1[4] = lStack_e0;
  param_1[6] = lStack_d0;
  *param_1 = lStack_78;
  param_1[1] = unaff_x20;
  return;
}

