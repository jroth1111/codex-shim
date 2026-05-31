
undefined1  [16]
__ZN10codex_core15context_manager7history14ContextManager20estimate_token_count17h07474dfadc0e1ab7E
          (long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  cVar2 = *(char *)(*(long *)(param_2 + 0x788) + 0x254e);
  if (*(char *)(param_2 + 0x7d5) != '\x03') {
    cVar2 = *(char *)(param_2 + 0x7d5);
  }
  __ZN14codex_protocol13openai_models9ModelInfo22get_model_instructions17h22408f2f1dd7708cE
            (&lStack_68,param_2,cVar2);
  lVar7 = *(long *)(param_1 + 0x1e0);
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x1d8);
    lVar5 = 0;
    do {
      lVar3 = FUN_102d4ec78(lVar4);
      uVar1 = lVar3 + 3U >> 2;
      lVar6 = 0x7fffffffffffffff;
      if (!SCARRY8(lVar5,uVar1)) {
        lVar6 = lVar5 + uVar1;
      }
      if (lVar3 < 1) {
        lVar6 = lVar5;
      }
      lVar4 = lVar4 + 0xc0;
      lVar7 = lVar7 + -1;
      lVar5 = lVar6;
    } while (lVar7 != 0);
  }
  if (lStack_68 != 0) {
    _free(uStack_60);
  }
  uVar1 = uStack_58 + 3;
  if (0xfffffffffffffffc < uStack_58) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar7 = 0x7fffffffffffffff;
  if (!SCARRY8(lVar6,uVar1 >> 2)) {
    lVar7 = lVar6 + (uVar1 >> 2);
  }
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = 1;
  return auVar8;
}

