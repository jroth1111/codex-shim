
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10148b084(long *param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  
  if (*param_1 == -0x8000000000000000) {
    puStack_160 = (undefined8 *)0xa;
    puVar5 = (undefined8 *)func_0x000108a4a0f8(&puStack_160,0,0);
    return puVar5;
  }
  puVar3 = (undefined4 *)_malloc(7);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,7);
LAB_10148b4a0:
    func_0x0001087c9084(1,7);
    goto LAB_10148b4bc;
  }
  *(undefined4 *)((long)puVar3 + 3) = 0x73776f64;
  *puVar3 = 0x646e6977;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar3;
  param_1[0xb] = 7;
  param_1[9] = -0x8000000000000000;
  lStack_1c8 = param_1[0xb];
  lStack_1d0 = param_1[10];
  uStack_1d8 = 7;
  if (param_2 == 3) {
    puStack_a0 = (undefined8 *)0x8000000000000000;
    goto LAB_10148b138;
  }
  pauVar4 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar4[1][0] == '\x01') {
    auVar8 = *pauVar4;
  }
  else {
    auVar8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar4 + 8) = auVar8._8_8_;
    pauVar4[1][0] = 1;
  }
  *(long *)*pauVar4 = auVar8._0_8_ + 1;
  FUN_105dc99f8(&puStack_160,2,auVar8._0_8_,auVar8._8_8_);
  uStack_118 = 0x8000000000000000;
  puVar5 = puStack_158;
  if (puStack_160 == (undefined8 *)0x8000000000000001) goto LAB_10148b398;
  puStack_188 = puStack_128;
  puStack_190 = puStack_130;
  puStack_178 = (undefined8 *)0x8000000000000000;
  puStack_180 = puStack_120;
  uStack_168 = uStack_108;
  puStack_170 = puStack_110;
  puStack_1a8 = puStack_148;
  puStack_1b0 = puStack_150;
  puStack_198 = puStack_138;
  puStack_1a0 = puStack_140;
  puStack_1c0 = puStack_160;
  puStack_1b8 = puStack_158;
  if (puStack_160 == (undefined8 *)0x8000000000000000) {
LAB_10148b374:
    puStack_160 = (undefined8 *)0xa;
    puVar6 = (undefined8 *)func_0x000108a4a0f8(&puStack_160,0,0);
  }
  else {
    puVar5 = (undefined8 *)_malloc(7);
    if (puVar5 == (undefined8 *)0x0) goto LAB_10148b4a0;
    *(undefined4 *)((long)puVar5 + 3) = 0x786f6264;
    *(undefined4 *)puVar5 = 0x646e6173;
    if ((puStack_178 != (undefined8 *)0x8000000000000000) && (puStack_178 != (undefined8 *)0x0)) {
      _free(puStack_170);
    }
    uStack_168 = 7;
    puStack_178 = (undefined8 *)0x8000000000000000;
    uStack_a8 = 7;
    uStack_b8 = 7;
    puStack_170 = puVar5;
    puStack_b0 = puVar5;
    if (param_2 == 2) {
      puStack_a0 = (undefined8 *)0x8000000000000000;
      puStack_98 = (undefined8 *)0x8000000000000000;
      puStack_88 = (undefined8 *)0x2;
    }
    else if ((param_2 & 1) == 0) {
      uVar7 = 8;
      puVar5 = (undefined8 *)_malloc(8);
      if (puVar5 == (undefined8 *)0x0) goto LAB_10148b4b0;
      *puVar5 = 0x6465746176656c65;
      puStack_98 = (undefined8 *)0x8;
      puStack_a0 = (undefined8 *)0x8000000000000003;
      puStack_88 = (undefined8 *)0x8;
    }
    else {
      uVar7 = 10;
      puVar5 = (undefined8 *)_malloc(10);
      if (puVar5 == (undefined8 *)0x0) {
LAB_10148b4b0:
        func_0x0001087c9084(1,uVar7);
        goto LAB_10148b4bc;
      }
      *(undefined2 *)(puVar5 + 1) = 0x6465;
      *puVar5 = 0x746176656c656e75;
      puStack_98 = (undefined8 *)0xa;
      puStack_a0 = (undefined8 *)0x8000000000000003;
      puStack_88 = (undefined8 *)0xa;
    }
    puStack_90 = puVar5;
    FUN_101497a9c(&puStack_160,&puStack_1c0,&uStack_b8,&puStack_a0);
    puStack_f8 = puStack_150;
    puStack_100 = puStack_158;
    puStack_e8 = puStack_140;
    puStack_f0 = puStack_148;
    puStack_d8 = puStack_130;
    puStack_e0 = puStack_138;
    puStack_c8 = puStack_120;
    puStack_d0 = puStack_128;
    uStack_c0 = uStack_118;
    if (puStack_158 != (undefined8 *)0x8000000000000005) {
      FUN_100de6690(&puStack_100);
    }
    if (puStack_1c0 == (undefined8 *)0x8000000000000000) goto LAB_10148b374;
    puVar6 = (undefined8 *)func_0x0001006384d0(&puStack_1c0,&UNK_108cac550,0x17,param_3);
    puVar5 = puStack_1b8;
    puVar1 = puStack_1c0;
    if (puVar6 == (undefined8 *)0x0) {
      puStack_60 = puStack_178;
      if (puStack_1c0 == (undefined8 *)0x8000000000000000) {
        if (puStack_1b8 == (undefined8 *)0x8000000000000005) {
          func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
LAB_10148b4bc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10148b4c0);
          (*pcVar2)();
        }
        puStack_90 = puStack_1a8;
        puStack_98 = puStack_1b0;
        puStack_80 = puStack_198;
        puStack_88 = puStack_1a0;
        puStack_70 = puStack_188;
        puStack_78 = puStack_190;
        puStack_68 = puStack_180;
        puStack_a0 = puStack_1b8;
LAB_10148b138:
        FUN_101497a9c(&puStack_160,param_1,&uStack_1d8,&puStack_a0);
        puStack_1b8 = puStack_150;
        puStack_1c0 = puStack_158;
        puStack_1a8 = puStack_140;
        puStack_1b0 = puStack_148;
        puStack_198 = puStack_130;
        puStack_1a0 = puStack_138;
        puStack_188 = puStack_120;
        puStack_190 = puStack_128;
        puStack_180 = (undefined8 *)uStack_118;
        if (puStack_158 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_1c0);
        }
        return (undefined8 *)0x0;
      }
      puStack_a0 = puStack_1c0;
      puStack_98 = puStack_1b8;
      puStack_88 = puStack_1a8;
      puStack_90 = puStack_1b0;
      puStack_78 = puStack_198;
      puStack_80 = puStack_1a0;
      puStack_68 = puStack_188;
      puStack_70 = puStack_190;
      puStack_60 = puStack_180;
      if (((ulong)puStack_178 & 0x7fffffffffffffff) != 0) {
        _free(puStack_170);
      }
      if (puVar1 != (undefined8 *)0x8000000000000005) goto LAB_10148b138;
      goto LAB_10148b398;
    }
  }
  puVar5 = puVar6;
  FUN_100e040f0(&puStack_1c0);
LAB_10148b398:
  _free(lStack_1d0);
  return puVar5;
}

