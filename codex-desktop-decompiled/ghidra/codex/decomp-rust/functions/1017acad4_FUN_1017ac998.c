
undefined8 FUN_1017ac998(long *param_1,char *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined1 uStack_a1;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  cStack_80 = *param_2;
  *param_2 = '\x16';
  if (cStack_80 == '\x16') {
    uVar1 = func_0x000108a079f0(&UNK_108ce2f04,0x2c,&UNK_10b25aeb0);
    _free();
    plVar2 = (long *)__Unwind_Resume(uVar1);
    lStack_108 = *plVar2;
    *plVar2 = -0x7ffffffffffffffb;
    if (lStack_108 == -0x7ffffffffffffffb) {
      FUN_108880728(&UNK_108cde170,0x10);
    }
    else {
      lStack_f8 = plVar2[2];
      lStack_100 = plVar2[1];
      lStack_e8 = plVar2[4];
      lStack_f0 = plVar2[3];
      lStack_d8 = plVar2[6];
      lStack_e0 = plVar2[5];
      lStack_c8 = plVar2[8];
      lStack_d0 = plVar2[7];
      if (lStack_108 != -0x7ffffffffffffffe) {
        FUN_10887f604(&lStack_108,&uStack_a1,&UNK_10b259360);
        FUN_1017a4698(&lStack_108);
        return 1;
      }
      lStack_b8 = lStack_f8;
      if (lStack_100 == 0) {
        if (-1 < lStack_f8) {
          return 0;
        }
        auStack_c0[0] = 1;
        __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                  (auStack_c0,&uStack_a1,&UNK_10b259360);
      }
      else {
        if (lStack_100 == 1) {
          return 0;
        }
        auStack_c0[0] = 3;
        func_0x000108a4a50c(auStack_c0,&uStack_a1,&UNK_10b259360);
      }
    }
    return 1;
  }
  uStack_77 = (undefined7)*(undefined8 *)(param_2 + 9);
  uStack_7f = (undefined7)*(undefined8 *)(param_2 + 1);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
  uStack_68 = *(undefined8 *)(param_2 + 0x18);
  uStack_70 = (undefined1)*(undefined8 *)(param_2 + 0x10);
  uStack_6f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x10) >> 8);
  if (cStack_80 != '\x10') {
    if (cStack_80 == '\x11') {
      plVar2 = (long *)CONCAT71(uStack_77,uStack_78);
      lStack_58 = plVar2[1];
      lStack_60 = *plVar2;
      lStack_48 = plVar2[3];
      lStack_50 = plVar2[2];
      func_0x000101778c20(&lStack_38,&lStack_60);
      if (lStack_38 == -0x8000000000000000) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lStack_30;
      }
      else {
        param_1[1] = lStack_30;
        *param_1 = lStack_38;
        param_1[2] = lStack_28;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)PTR__free_10b61b0a8)(plVar2);
      return uVar1;
    }
    if (cStack_80 != '\x12') {
      uVar1 = func_0x000101778c20(&lStack_60,&cStack_80);
      if (lStack_60 != -0x8000000000000000) {
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        param_1[2] = lStack_50;
        return uVar1;
      }
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lStack_58;
      return uVar1;
    }
  }
  *param_1 = -0x8000000000000000;
  uVar1 = func_0x0001017a6a48(&cStack_80);
  return uVar1;
}

