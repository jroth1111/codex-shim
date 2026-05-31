
void __ZN11codex_hooks8registry5Hooks26preview_user_prompt_submit17h86423a49b27387e4E
               (ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uStack_270;
  undefined8 *puStack_268;
  ulong uStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  __ZN11codex_hooks6engine10dispatcher34select_handlers_for_matcher_inputs17h1c684c5df70e7282E
            (&uStack_270,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),6,8,0);
  puVar4 = puStack_268;
  uVar2 = uStack_270;
  lVar10 = uStack_260 * 0xa8;
  uVar8 = (long)puStack_268 + lVar10;
  puVar6 = puStack_268;
  if (uStack_260 != 0) {
    lVar11 = 0;
    lVar9 = 0;
    do {
      puVar6 = (undefined8 *)((long)puVar4 + lVar9);
      puVar1 = (ulong *)((long)puVar4 + lVar11);
      lStack_1d8 = puVar1[0x11];
      lStack_1e0 = puVar1[0x10];
      lStack_1c8 = puVar1[0x13];
      lStack_1d0 = puVar1[0x12];
      lStack_1c0 = puVar1[0x14];
      lStack_218 = puVar1[9];
      lStack_220 = puVar1[8];
      lStack_208 = puVar1[0xb];
      lStack_210 = puVar1[10];
      lStack_1f8 = puVar1[0xd];
      lStack_200 = puVar1[0xc];
      lStack_1e8 = puVar1[0xf];
      lStack_1f0 = puVar1[0xe];
      lStack_258 = puVar1[1];
      uStack_260 = *puVar1;
      lStack_248 = puVar1[3];
      lStack_250 = puVar1[2];
      lStack_238 = puVar1[5];
      lStack_240 = puVar1[4];
      lStack_228 = puVar1[7];
      lStack_230 = puVar1[6];
      lStack_118 = puVar1[1];
      lStack_120 = *puVar1;
      lStack_108 = puVar1[3];
      lStack_110 = puVar1[2];
      lStack_f8 = puVar1[5];
      lStack_100 = puVar1[4];
      uStack_270 = (ulong)puVar4;
      lStack_e8 = puVar1[7];
      lStack_f0 = puVar1[6];
      lStack_d8 = puVar1[9];
      lStack_e0 = puVar1[8];
      lStack_c8 = puVar1[0xb];
      lStack_d0 = puVar1[10];
      lStack_b8 = puVar1[0xd];
      lStack_c0 = puVar1[0xc];
      lStack_a8 = puVar1[0xf];
      lStack_b0 = puVar1[0xe];
      lStack_98 = puVar1[0x11];
      lStack_a0 = puVar1[0x10];
      lStack_88 = puVar1[0x13];
      lStack_90 = puVar1[0x12];
      lStack_80 = puVar1[0x14];
      puStack_268 = puVar6;
      FUN_103c78bd8(&uStack_1b8,&lStack_120);
      FUN_103ca70c4(&uStack_260);
      puVar6[0xd] = uStack_150;
      puVar6[0xc] = uStack_158;
      puVar6[0xf] = uStack_140;
      puVar6[0xe] = uStack_148;
      puVar6[0x11] = uStack_130;
      puVar6[0x10] = uStack_138;
      puVar6[0x12] = uStack_128;
      puVar6[5] = uStack_190;
      puVar6[4] = uStack_198;
      puVar6[7] = uStack_180;
      puVar6[6] = uStack_188;
      puVar6[9] = uStack_170;
      puVar6[8] = uStack_178;
      puVar6[0xb] = uStack_160;
      puVar6[10] = uStack_168;
      lVar9 = lVar9 + 0x98;
      lVar11 = lVar11 + 0xa8;
      puVar6[1] = uStack_1b0;
      *puVar6 = uStack_1b8;
      puVar6[3] = uStack_1a0;
      puVar6[2] = uStack_1a8;
    } while (lVar10 - lVar11 != 0);
    puStack_268 = (undefined8 *)((long)puVar4 + lVar9);
    puVar6 = (undefined8 *)uVar8;
  }
  uVar7 = uVar2 * 0xa8;
  uVar5 = ((ulong)((long)puStack_268 - (long)puVar4) >> 3) * -0x79435e50d79435e5;
  uStack_270 = (ulong)puVar4;
  uStack_260 = uVar2;
  uVar8 = uVar8 - (long)puVar6;
  puStack_268 = (undefined8 *)uVar5;
  if (uVar8 != 0) {
    uVar8 = uVar8 / 0xa8;
    do {
      FUN_103ca70c4(puVar6);
      puVar6 = (undefined8 *)((long)puVar6 + 0xa8);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uVar2 != 0) && (lVar10 = (uVar7 / 0x98) * 0x98, uVar7 % 0x98 != 0)) {
    if (uVar7 < 0x98) {
      if (uVar7 != 0) {
        _free(puVar4);
      }
      puVar4 = (undefined8 *)0x8;
    }
    else {
      puVar4 = (undefined8 *)_realloc(puVar4,lVar10);
      if (puVar4 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar10);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c996a8);
        (*pcVar3)();
      }
    }
  }
  *param_1 = uVar7 / 0x98;
  param_1[1] = (ulong)puVar4;
  param_1[2] = uVar5;
  return;
}

