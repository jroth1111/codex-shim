
void FUN_10395d4a0(long *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 uStack_50;
  
  __ZN4toml2de6parser7detable184__LT_impl_u20_toml__map__Map_LT_serde_spanned__spanned__Spanned_LT_alloc__borrow__Cow_LT_str_GT__GT__C_serde_spanned__spanned__Spanned_LT_toml__de__parser__devalue__DeValue_GT__GT__GT_5parse17h0ff2ba643f313dccE
            (&lStack_b0,param_2,param_3);
  plStack_c0 = plStack_68;
  lStack_d8 = lStack_80;
  lStack_e0 = lStack_88;
  lStack_c8 = lStack_70;
  lStack_d0 = lStack_78;
  lStack_f8 = lStack_a0;
  lStack_100 = lStack_a8;
  lStack_e8 = lStack_90;
  lStack_f0 = lStack_98;
  if (lStack_b0 == -0x8000000000000000) {
    param_1[5] = lStack_80;
    param_1[4] = lStack_88;
    param_1[7] = lStack_70;
    param_1[6] = lStack_78;
    param_1[1] = lStack_a0;
    *param_1 = lStack_a8;
    param_1[3] = lStack_90;
    param_1[2] = lStack_98;
    param_1[8] = (long)plStack_68;
    param_1[9] = lStack_60;
    param_1[10] = lStack_58;
  }
  else {
    uStack_50 = 0;
    func_0x0001039af910(param_1,&lStack_b0);
    if (*param_1 != 2) {
      lStack_88 = param_1[5];
      lStack_90 = param_1[4];
      lStack_78 = param_1[7];
      lStack_80 = param_1[6];
      plStack_68 = (long *)param_1[9];
      lStack_70 = param_1[8];
      lStack_60 = param_1[10];
      lStack_a8 = param_1[1];
      lStack_b0 = *param_1;
      lStack_98 = param_1[3];
      lStack_a0 = param_1[2];
      if (param_3 < 0x7fffffffffffffe9) {
        puVar3 = (undefined8 *)_malloc(param_3 + 0x17 & 0x7ffffffffffffff8);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = 1;
          *puVar3 = 1;
          _memcpy(puVar3 + 2,param_2,param_3);
          if (plStack_68 != (long *)0x0) {
            lVar2 = *plStack_68;
            *plStack_68 = lVar2 + -1;
            LORelease();
            if (lVar2 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7135d6d38bb5e709E(&plStack_68);
            }
          }
          param_1[5] = lStack_88;
          param_1[4] = lStack_90;
          param_1[7] = lStack_78;
          param_1[6] = lStack_80;
          param_1[10] = param_3;
          param_1[1] = lStack_a8;
          *param_1 = lStack_b0;
          param_1[3] = lStack_98;
          param_1[2] = lStack_a0;
          param_1[9] = (long)puVar3;
          param_1[8] = lStack_70;
          return;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                  (8,param_3 + 0x17 & 0x7ffffffffffffff8);
      }
      else {
        func_0x000108a07a3c(&UNK_108c518a8,0x2b,&lStack_100,&UNK_10b1d2480,&UNK_10b1d2530);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10395d670);
      (*pcVar1)();
    }
  }
  return;
}

