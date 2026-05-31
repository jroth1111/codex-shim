
undefined8 *
FUN_10063e1a0(char *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (*param_1 != '\x01') {
    puVar7 = *(undefined8 **)(param_1 + 8);
    if ((param_1[1] == '\x01') ||
       (lVar2 = FUN_100c34858(*puVar7,puVar7[1],&UNK_108ca7635,1), lVar2 == 0)) {
      param_1[1] = '\x02';
      lVar2 = FUN_100c34858(*puVar7,puVar7[1],&UNK_108ca7632,1);
      if (((lVar2 == 0) &&
          (((lVar2 = func_0x0001006571a0(*puVar7,puVar7[1],param_2,param_3), lVar2 == 0 &&
            (lVar2 = FUN_100c34858(*puVar7,puVar7[1],&UNK_108ca7632,1), lVar2 == 0)) &&
           (lVar2 = FUN_100c34858(*puVar7,puVar7[1],&UNK_108ca7636,1), lVar2 == 0)))) &&
         (((lVar2 = FUN_100c34858(*puVar7,puVar7[1],&UNK_108ca7632,1), lVar2 == 0 &&
           (lVar2 = func_0x0001006571a0(*puVar7,puVar7[1],param_4,param_5), lVar2 == 0)) &&
          (lVar2 = FUN_100c34858(*puVar7,puVar7[1],&UNK_108ca7632,1), lVar2 == 0)))) {
        return (undefined8 *)0x0;
      }
    }
    puVar7 = (undefined8 *)_malloc(0x28);
    if (puVar7 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
      (*pcVar1)();
    }
    puVar7[1] = lVar2;
    *puVar7 = 1;
    puVar7[3] = 0;
    puVar7[2] = unaff_x23;
    puVar7[4] = 0;
    return puVar7;
  }
  puVar5 = &UNK_10b24d3e8;
  auVar8 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
  plVar3 = auVar8._0_8_;
  if (*plVar3 == -0x8000000000000000) {
    puVar6 = (undefined *)0x0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
  }
  else {
    puVar6 = puVar5;
    lVar2 = _malloc(puVar5);
    unaff_x22 = puVar5;
    if (lVar2 != 0) {
      _memcpy(lVar2,auVar8._8_8_,puVar5);
      if (plVar3[9] != -0x8000000000000000 && plVar3[9] != 0) {
        _free(plVar3[10]);
      }
      plVar3[10] = lVar2;
      plVar3[0xb] = (long)puVar5;
      plVar3[9] = -0x8000000000000000;
      lStack_130 = plVar3[0xb];
      lStack_138 = plVar3[10];
      puStack_140 = puVar5;
      if (param_4 == 0) {
        lStack_128 = -0x8000000000000000;
      }
      else {
        func_0x000100645a24(&lStack_128,param_4,param_5);
        if (lStack_128 == -0x7ffffffffffffffb) {
          _free(lStack_138);
          return puStack_120;
        }
      }
      FUN_101497a9c(auStack_e0,plVar3,&puStack_140,&lStack_128);
      uStack_188 = uStack_d0;
      lStack_190 = lStack_d8;
      uStack_178 = uStack_c0;
      uStack_180 = uStack_c8;
      uStack_168 = uStack_b0;
      uStack_170 = uStack_b8;
      uStack_158 = uStack_a0;
      uStack_160 = uStack_a8;
      uStack_150 = uStack_98;
      if (lStack_d8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_190);
      }
      return (undefined8 *)0x0;
    }
  }
  uVar4 = FUN_107c03c64(1,unaff_x22);
  _free(lStack_138);
  auVar8 = __Unwind_Resume(uVar4);
  lVar2 = auVar8._8_8_;
  puVar7 = (undefined8 *)_malloc(10);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_107c03c64(1,10);
  }
  else {
    *(undefined2 *)(puVar7 + 1) = 0x726f;
    *puVar7 = 0x68636e615f746570;
    if (*(long *)(lVar2 + 0x50) != -0x8000000000000000 && *(long *)(lVar2 + 0x50) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x58));
    }
    *(undefined8 **)(lVar2 + 0x58) = puVar7;
    *(undefined8 *)(lVar2 + 0x60) = 10;
    *auVar8._0_8_ = 0x8000000000000004;
    *(undefined8 *)(lVar2 + 0x50) = 0x8000000000000000;
    unaff_x23 = 0xd;
    if (((ulong)puVar6 & 1) == 0) {
      unaff_x23 = 8;
    }
    lStack_2f0 = _malloc(unaff_x23);
    if (lStack_2f0 != 0) {
      puVar5 = &UNK_108cac652;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = &UNK_108c981a8;
      }
      _memcpy(lStack_2f0,puVar5,unaff_x23);
      uStack_300 = 0x8000000000000000;
      uStack_260 = 10;
      uStack_250 = 10;
      uStack_2f8 = unaff_x23;
      uStack_2e8 = unaff_x23;
      puStack_258 = puVar7;
      puVar7 = (undefined8 *)FUN_101497734(auStack_248,lVar2,&uStack_260,&uStack_300);
      uStack_2a8 = uStack_238;
      lStack_2b0 = lStack_240;
      uStack_298 = uStack_228;
      uStack_2a0 = uStack_230;
      uStack_288 = uStack_218;
      uStack_290 = uStack_220;
      uStack_278 = uStack_208;
      uStack_280 = uStack_210;
      uStack_268 = uStack_1f8;
      uStack_270 = uStack_200;
      if (lStack_240 != -0x7ffffffffffffffa) {
        puVar7 = (undefined8 *)FUN_100ddb5bc(&lStack_2b0);
      }
      *auVar8._0_8_ = 0x8000000000000004;
      return puVar7;
    }
  }
  FUN_107c03c64(1,unaff_x23);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e5c8);
  (*pcVar1)();
}

