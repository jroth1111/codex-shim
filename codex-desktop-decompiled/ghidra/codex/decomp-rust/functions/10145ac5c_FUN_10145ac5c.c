
void FUN_10145ac5c(long *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  char cStack_d0;
  undefined3 uStack_cf;
  undefined1 uStack_cc;
  undefined3 uStack_cb;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  cStack_d0 = *param_2;
  lStack_c8 = *(long *)(param_2 + 8);
  lStack_78 = lStack_c8;
  if (cStack_d0 == '\x16') goto LAB_10145ad84;
  uStack_cf = (undefined3)*(undefined4 *)(param_2 + 1);
  uStack_cc = (undefined1)*(undefined4 *)(param_2 + 4);
  uStack_cb = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
  uStack_b8 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = *(undefined8 *)(param_2 + 0x10);
  FUN_1004e814c(&lStack_b0,&cStack_d0);
  if (lStack_b0 == -0x8000000000000000) {
    lStack_80 = -0x7ffffffffffffffe;
    lStack_78 = lStack_a8;
    FUN_100cf3d8c(&lStack_80);
    FUN_1004e4244(&lStack_80,&cStack_d0);
    lVar3 = lStack_68;
    lVar1 = lStack_70;
    lVar2 = lStack_78;
    lStack_100 = lStack_80;
    if (lStack_80 == -0x7fffffffffffffff) {
      lStack_b0 = -0x7ffffffffffffffe;
    }
    else {
      lStack_a8 = lStack_78;
      lStack_b0 = lStack_80;
      lStack_98 = lStack_68;
      lStack_a0 = lStack_70;
      uStack_88 = uStack_58;
      lStack_90 = lStack_60;
      if (lStack_80 != -0x7ffffffffffffffe) {
        FUN_100e077ec(&cStack_d0);
        if (lStack_100 != -0x7fffffffffffffff) {
          lStack_f8 = lVar2;
          lStack_f0 = lVar1;
          lStack_e8 = lVar3;
          lStack_e0 = lStack_60;
          uStack_d8 = uStack_58;
          __ZN14codex_protocol6models21FileSystemPermissions21from_read_write_roots17hcf0882067500e584E
                    (&lStack_80,&lStack_100,&lStack_e8);
          if (lStack_80 == -0x8000000000000000) goto LAB_10145ad84;
          goto LAB_10145adf4;
        }
        goto LAB_10145ad28;
      }
    }
    lStack_a8 = lStack_78;
    FUN_100cf3d8c(&lStack_b0);
    lVar2 = FUN_1088561c0(&UNK_108cae2bc,0x47);
    FUN_100e077ec(&cStack_d0);
    lStack_78 = lVar2;
  }
  else {
    lStack_60 = lStack_98;
    lStack_68 = lStack_a0;
    lStack_70 = lStack_a8;
    lStack_78 = lStack_b0;
    FUN_100e077ec(&cStack_d0);
    lVar2 = lStack_b0;
    lVar1 = lStack_a8;
    lVar3 = lStack_a0;
    lStack_60 = lStack_98;
LAB_10145ad28:
    lStack_78 = lVar1;
    lStack_80 = lVar2;
    lStack_70 = lVar3;
    lStack_68 = lStack_60;
    if (lVar2 != -0x8000000000000000) {
LAB_10145adf4:
      param_1[1] = lStack_78;
      *param_1 = lStack_80;
      param_1[3] = lStack_68;
      param_1[2] = lStack_70;
      return;
    }
  }
LAB_10145ad84:
  *param_1 = -0x7fffffffffffffff;
  param_1[1] = lStack_78;
  return;
}

