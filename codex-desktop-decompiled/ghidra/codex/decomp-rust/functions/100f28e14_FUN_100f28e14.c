
void FUN_100f28e14(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  char cStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  pcVar2 = *(char **)(param_2 + 8);
  if (pcVar2 == *(char **)(param_2 + 0x18)) {
LAB_100f28e50:
    param_1[1] = -0x7fffffffffffffff;
    *param_1 = 2;
    return;
  }
  cStack_e0 = *pcVar2;
  *(char **)(param_2 + 8) = pcVar2 + 0x20;
  if (cStack_e0 == '\x16') goto LAB_100f28e50;
  uStack_d7 = (undefined7)*(undefined8 *)(pcVar2 + 9);
  uStack_df = (undefined7)*(undefined8 *)(pcVar2 + 1);
  uStack_d8 = (undefined1)((ulong)*(undefined8 *)(pcVar2 + 1) >> 0x38);
  uStack_c8 = *(undefined8 *)(pcVar2 + 0x18);
  uStack_d0 = (undefined1)*(undefined8 *)(pcVar2 + 0x10);
  uStack_cf = (undefined7)((ulong)*(undefined8 *)(pcVar2 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_e0 == '\x10') {
LAB_100f28e98:
    FUN_100e077ec(&cStack_e0);
    lStack_90 = -0x8000000000000000;
  }
  else {
    if (cStack_e0 == '\x11') {
      puVar1 = (undefined8 *)CONCAT71(uStack_d7,uStack_d8);
      uStack_b8 = puVar1[1];
      uStack_c0 = *puVar1;
      uStack_a8 = puVar1[3];
      uStack_b0 = puVar1[2];
      FUN_100618608(&lStack_98,&uStack_c0);
      if (lStack_98 != 2) {
        lStack_108 = lStack_60;
        lStack_110 = lStack_68;
        lStack_f8 = lStack_50;
        lStack_100 = lStack_58;
        lStack_f0 = lStack_48;
        lStack_118 = lStack_70;
        lStack_120 = lStack_78;
      }
      _free(puVar1);
      lStack_130 = lStack_88;
      lStack_128 = lStack_80;
    }
    else {
      if (cStack_e0 == '\x12') goto LAB_100f28e98;
      FUN_100618608(&lStack_98,&cStack_e0);
      lStack_130 = lStack_88;
      lStack_128 = lStack_80;
      lStack_120 = lStack_78;
      lStack_118 = lStack_70;
      lStack_110 = lStack_68;
      lStack_108 = lStack_60;
      lStack_100 = lStack_58;
      lStack_f8 = lStack_50;
      lStack_f0 = lStack_48;
      if (lStack_98 == 2) {
        goto LAB_100f28f80;
      }
    }
    if (lStack_98 != 2) {
      param_1[7] = lStack_108;
      param_1[6] = lStack_110;
      param_1[9] = lStack_f8;
      param_1[8] = lStack_100;
      param_1[10] = lStack_f0;
      param_1[3] = lStack_128;
      param_1[2] = lStack_130;
      param_1[5] = lStack_118;
      param_1[4] = lStack_120;
      *param_1 = lStack_98;
      param_1[1] = lStack_90;
      return;
    }
  }
LAB_100f28f80:
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  *param_1 = 2;
  param_1[1] = lStack_90;
  return;
}

