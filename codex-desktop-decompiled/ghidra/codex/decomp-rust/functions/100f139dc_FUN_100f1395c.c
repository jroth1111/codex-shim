
void FUN_100f1395c(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  puVar3 = (undefined8 *)_malloc(0x19);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0x6f207265626d756e;
    *puVar3 = 0x2072656765746e69;
    *(undefined8 *)((long)puVar3 + 0x11) = 0x6465776f6c667265;
    *(undefined8 *)((long)puVar3 + 9) = 0x766f207265626d75;
    param_1[3] = 0x19;
    param_1[4] = puVar3;
    param_1[6] = 0;
    param_1[5] = 0x19;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[2] = param_2[2];
    return;
  }
  auVar6 = func_0x0001087c9084(1,0x19);
  plVar4 = auVar6._0_8_;
  __ZN4toml2de6parser7detable184__LT_impl_u20_toml__map__Map_LT_serde_spanned__spanned__Spanned_LT_alloc__borrow__Cow_LT_str_GT__GT__C_serde_spanned__spanned__Spanned_LT_toml__de__parser__devalue__DeValue_GT__GT__GT_5parse17h0ff2ba643f313dccE
            (&lStack_d0,auVar6._8_8_,param_3);
  plStack_e0 = plStack_88;
  lStack_f8 = lStack_a0;
  lStack_100 = lStack_a8;
  lStack_e8 = lStack_90;
  lStack_f0 = lStack_98;
  lStack_118 = lStack_c0;
  lStack_120 = lStack_c8;
  lStack_108 = lStack_b0;
  lStack_110 = lStack_b8;
  if (lStack_d0 == -0x8000000000000000) {
    plVar4[5] = lStack_a0;
    plVar4[4] = lStack_a8;
    plVar4[7] = lStack_90;
    plVar4[6] = lStack_98;
    plVar4[1] = lStack_c0;
    *plVar4 = lStack_c8;
    plVar4[3] = lStack_b0;
    plVar4[2] = lStack_b8;
    plVar4[8] = (long)plStack_88;
    plVar4[9] = lStack_80;
    plVar4[10] = lStack_78;
  }
  else {
    uStack_70 = 0;
    FUN_1015cf9a8(plVar4,&lStack_d0);
    if (*plVar4 != 2) {
      lStack_a8 = plVar4[5];
      lStack_b0 = plVar4[4];
      lStack_98 = plVar4[7];
      lStack_a0 = plVar4[6];
      plStack_88 = (long *)plVar4[9];
      lStack_90 = plVar4[8];
      lStack_80 = plVar4[10];
      lStack_c8 = plVar4[1];
      lStack_d0 = *plVar4;
      lStack_b8 = plVar4[3];
      lStack_c0 = plVar4[2];
      if (param_3 < 0x7fffffffffffffe9) {
        puVar3 = (undefined8 *)_malloc(param_3 + 0x17 & 0x7ffffffffffffff8);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = 1;
          *puVar3 = 1;
          _memcpy(puVar3 + 2,auVar6._8_8_,param_3);
          if (plStack_88 != (long *)0x0) {
            lVar2 = *plStack_88;
            *plStack_88 = lVar2 + -1;
            LORelease();
            if (lVar2 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7135d6d38bb5e709E(&plStack_88);
            }
          }
          plVar4[5] = lStack_a8;
          plVar4[4] = lStack_b0;
          plVar4[7] = lStack_98;
          plVar4[6] = lStack_a0;
          plVar4[10] = param_3;
          plVar4[1] = lStack_c8;
          *plVar4 = lStack_d0;
          plVar4[3] = lStack_b8;
          plVar4[2] = lStack_c0;
          plVar4[9] = (long)puVar3;
          plVar4[8] = lStack_90;
          return;
        }
        func_0x0001087c906c(8,param_3 + 0x17 & 0x7ffffffffffffff8);
      }
      else {
        func_0x000108a07a3c(&UNK_108c518a8,0x2b,&lStack_120,&UNK_10b1d2480,&UNK_10b1d2530);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f13bac);
      (*pcVar1)();
    }
  }
  return;
}

