
void __ZN88__LT_bm25__default_tokenizer__DefaultTokenizer_u20_as_u20_bm25__tokenizer__Tokenizer_GT_8tokenize17hea029f3ac9b6eaf8E
               (long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_4 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    (*(code *)*param_2)(&uStack_128,param_3,param_4);
    __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
              (&lStack_110,uStack_120,uStack_118);
    puStack_e8 = &LAB_100382a38;
    uStack_e0 = uStack_108;
    uStack_d8 = uStack_100;
    uStack_d0 = 0x1313;
    puStack_f8 = param_2;
    puStack_f0 = param_2;
    func_0x000100381c34(&puStack_b0,&puStack_f8);
    if (puStack_b0 == (undefined8 *)0x8000000000000000) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      puStack_b0 = (undefined8 *)0x8000000000000000;
    }
    else {
      plVar6 = (long *)_malloc(0x60);
      if (plVar6 == (long *)0x0) {
        FUN_107c03c64(8,0x60);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003850bc);
        (*pcVar5)();
      }
      lVar7 = 0;
      *plVar6 = (long)puStack_b0;
      plVar6[1] = (long)puStack_a8;
      plVar6[2] = (long)puStack_a0;
      lStack_c8 = 4;
      lStack_b8 = 1;
      puStack_a8 = puStack_f0;
      puStack_b0 = puStack_f8;
      uStack_88 = CONCAT62(uStack_ce,uStack_d0);
      uStack_98 = uStack_e0;
      puStack_a0 = puStack_e8;
      uStack_90 = uStack_d8;
      plStack_c0 = plVar6;
      while (lVar1 = lStack_b8, func_0x000100381c34(&lStack_78,&puStack_b0), uVar4 = uStack_68,
            uVar3 = uStack_70, lVar2 = lStack_78, lStack_78 != -0x8000000000000000) {
        if (lVar1 == lStack_c8) {
          func_0x000107c040ec(&lStack_c8,lVar1);
          plVar6 = plStack_c0;
        }
        *(long *)((long)plVar6 + lVar7 + 0x18) = lVar2;
        *(undefined8 *)((long)plVar6 + lVar7 + 0x20) = uVar3;
        *(undefined8 *)((long)plVar6 + lVar7 + 0x28) = uVar4;
        lStack_b8 = lVar1 + 1;
        lVar7 = lVar7 + 0x18;
      }
      param_1[1] = (long)plStack_c0;
      *param_1 = lStack_c8;
      param_1[2] = lStack_b8;
    }
    if (lStack_110 != 0) {
      _free(uStack_108);
    }
    if ((uStack_128 & 0x7fffffffffffffff) != 0) {
      _free(uStack_120);
    }
  }
  return;
}

