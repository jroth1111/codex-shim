
void __ZN10codex_core6config44resolve_tool_suggest_config_from_layer_stack17h7c0db1290679b945E
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ZN12codex_config5state16ConfigLayerStack16effective_config17hb81929d75e8817f7E(&lStack_140);
  if ((lStack_140 < 0) ||
     (auVar8 = FUN_10612a75c(&lStack_140,&UNK_108d6c2a6,0xc), uVar4 = auVar8._8_8_,
     (auVar8._0_8_ & 1) == 0)) {
    lStack_170 = -0x8000000000000000;
  }
  else {
    if (uStack_130 <= uVar4) {
      func_0x000108a07bdc(uVar4,uStack_130,&UNK_10b4cf778);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e693a4);
      (*pcVar3)();
    }
    FUN_1034a0b24(&lStack_98,lStack_138 + uVar4 * 0x70 + 0x18);
    lStack_c8 = lStack_70;
    lStack_d0 = lStack_78;
    uStack_b8 = uStack_60;
    lStack_c0 = lStack_68;
    uStack_a8 = uStack_50;
    uStack_b0 = uStack_58;
    lStack_e8 = lStack_90;
    lStack_f0 = lStack_98;
    lStack_d8 = lStack_80;
    lStack_e0 = lStack_88;
    func_0x0001035cefc4(&lStack_98,&lStack_f0);
    if (lStack_98 == 2) {
      lStack_168 = lStack_88;
      lStack_170 = lStack_90;
      lStack_158 = lStack_78;
      lStack_160 = lStack_80;
      lStack_148 = lStack_68;
      lStack_150 = lStack_70;
    }
    else {
      lStack_170 = -0x8000000000000000;
      func_0x000103380598(&lStack_98);
    }
  }
  FUN_10337b6e4(&lStack_140);
  lVar2 = lStack_170;
  plVar1 = (long *)(undefined1 *)0x0;
  if (lStack_170 != -0x8000000000000000) {
    plVar1 = &lStack_170;
  }
  func_0x000102e68574(param_1,plVar1,param_2);
  lVar6 = lStack_168;
  if (lVar2 != -0x8000000000000000) {
    if (lStack_160 != 0) {
      puVar7 = (undefined8 *)(lStack_168 + 8);
      lVar5 = lStack_160;
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar2 != 0) {
      _free(lVar6);
    }
    lVar2 = lStack_150;
    if (lStack_148 != 0) {
      puVar7 = (undefined8 *)(lStack_150 + 8);
      lVar6 = lStack_148;
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lStack_158 != 0) {
      _free(lVar2);
    }
  }
  return;
}

