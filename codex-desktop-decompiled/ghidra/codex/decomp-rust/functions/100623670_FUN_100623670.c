
void FUN_100623670(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  cStack_b0 = *param_2;
  *param_2 = '\x16';
  if (cStack_b0 == '\x16') {
    lVar2 = thunk_FUN_1088561c0(&UNK_108cde170,0x10);
    lStack_68 = -0x7fffffffffffffff;
    param_1[1] = lVar2;
LAB_100623798:
    *param_1 = lStack_68;
  }
  else {
    uStack_a7 = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_af = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_a8 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_98 = *(undefined8 *)(param_2 + 0x18);
    uStack_a0 = (undefined1)*(undefined8 *)(param_2 + 0x10);
    uStack_9f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x10) >> 8);
    if (cStack_b0 != '\x10') {
      if (cStack_b0 == '\x11') {
        puVar1 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
        uStack_88 = puVar1[1];
        uStack_90 = *puVar1;
        uStack_78 = puVar1[3];
        uStack_80 = puVar1[2];
        FUN_1004b53b8(&lStack_68,&uStack_90);
        if (lStack_68 == -0x8000000000000000) {
          lStack_68 = -0x7fffffffffffffff;
        }
        else {
          param_1[3] = lStack_50;
          param_1[2] = lStack_58;
          param_1[5] = lStack_40;
          param_1[4] = lStack_48;
          param_1[7] = lStack_30;
          param_1[6] = lStack_38;
          param_1[8] = lStack_28;
        }
        *param_1 = lStack_68;
        param_1[1] = lStack_60;
        _free(puVar1);
        return;
      }
      if (cStack_b0 != '\x12') {
        FUN_1004b53b8(&lStack_68,&cStack_b0);
        if (lStack_68 == -0x8000000000000000) {
          lStack_68 = -0x7fffffffffffffff;
          param_1[1] = lStack_60;
        }
        else {
          param_1[3] = lStack_50;
          param_1[2] = lStack_58;
          param_1[5] = lStack_40;
          param_1[4] = lStack_48;
          param_1[7] = lStack_30;
          param_1[6] = lStack_38;
          param_1[8] = lStack_28;
          param_1[1] = lStack_60;
        }
        goto LAB_100623798;
      }
    }
    *param_1 = -0x8000000000000000;
    FUN_100e077ec(&cStack_b0);
  }
  return;
}

