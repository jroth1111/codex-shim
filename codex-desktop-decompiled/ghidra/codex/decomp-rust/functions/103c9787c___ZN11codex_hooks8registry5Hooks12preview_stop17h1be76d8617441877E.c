
void __ZN11codex_hooks8registry5Hooks12preview_stop17h1be76d8617441877E
               (ulong *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uStack_270;
  undefined8 *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
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
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar13 = *(long *)(param_2 + 0x28);
  if (*(long *)(param_3 + 0x90) == -0x8000000000000000) {
    __ZN11codex_hooks6engine10dispatcher34select_handlers_for_matcher_inputs17h1c684c5df70e7282E
              (&uStack_270,uVar2,lVar13,9,8,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0xb0);
    uVar4 = *(undefined8 *)(param_3 + 0xb8);
    puVar7 = (undefined8 *)_malloc(0x10);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0001087c9084(8,0x10);
      goto LAB_103c97b24;
    }
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    __ZN11codex_hooks6engine10dispatcher34select_handlers_for_matcher_inputs17h1c684c5df70e7282E
              (&uStack_270,uVar2,lVar13,8,puVar7,1);
    _free(puVar7);
  }
  puVar9 = puStack_268;
  uVar5 = uStack_270;
  lVar13 = uStack_260 * 0xa8;
  uVar12 = (long)puStack_268 + lVar13;
  puVar7 = puStack_268;
  if (uStack_260 != 0) {
    lVar14 = 0;
    lVar11 = 0;
    do {
      puVar7 = (undefined8 *)((long)puVar9 + lVar11);
      puVar1 = (ulong *)((long)puVar9 + lVar14);
      uStack_1d8 = puVar1[0x11];
      uStack_1e0 = puVar1[0x10];
      uStack_1c8 = puVar1[0x13];
      uStack_1d0 = puVar1[0x12];
      uStack_1c0 = puVar1[0x14];
      uStack_218 = puVar1[9];
      uStack_220 = puVar1[8];
      uStack_208 = puVar1[0xb];
      uStack_210 = puVar1[10];
      uStack_1f8 = puVar1[0xd];
      uStack_200 = puVar1[0xc];
      uStack_1e8 = puVar1[0xf];
      uStack_1f0 = puVar1[0xe];
      uStack_258 = puVar1[1];
      uStack_260 = *puVar1;
      uStack_248 = puVar1[3];
      uStack_250 = puVar1[2];
      uStack_238 = puVar1[5];
      uStack_240 = puVar1[4];
      uStack_228 = puVar1[7];
      uStack_230 = puVar1[6];
      uStack_118 = puVar1[1];
      uStack_120 = *puVar1;
      uStack_108 = puVar1[3];
      uStack_110 = puVar1[2];
      uStack_f8 = puVar1[5];
      uStack_100 = puVar1[4];
      uStack_270 = (ulong)puVar9;
      uStack_e8 = puVar1[7];
      uStack_f0 = puVar1[6];
      uStack_d8 = puVar1[9];
      uStack_e0 = puVar1[8];
      uStack_c8 = puVar1[0xb];
      uStack_d0 = puVar1[10];
      uStack_b8 = puVar1[0xd];
      uStack_c0 = puVar1[0xc];
      uStack_a8 = puVar1[0xf];
      uStack_b0 = puVar1[0xe];
      uStack_98 = puVar1[0x11];
      uStack_a0 = puVar1[0x10];
      uStack_88 = puVar1[0x13];
      uStack_90 = puVar1[0x12];
      uStack_80 = puVar1[0x14];
      puStack_268 = puVar7;
      FUN_103c78bd8(&uStack_1b8,&uStack_120);
      FUN_103ca70c4(&uStack_260);
      puVar7[0xd] = uStack_150;
      puVar7[0xc] = uStack_158;
      puVar7[0xf] = uStack_140;
      puVar7[0xe] = uStack_148;
      puVar7[0x11] = uStack_130;
      puVar7[0x10] = uStack_138;
      puVar7[0x12] = uStack_128;
      puVar7[5] = uStack_190;
      puVar7[4] = uStack_198;
      puVar7[7] = uStack_180;
      puVar7[6] = uStack_188;
      puVar7[9] = uStack_170;
      puVar7[8] = uStack_178;
      puVar7[0xb] = uStack_160;
      puVar7[10] = uStack_168;
      lVar11 = lVar11 + 0x98;
      lVar14 = lVar14 + 0xa8;
      puVar7[1] = uStack_1b0;
      *puVar7 = uStack_1b8;
      puVar7[3] = uStack_1a0;
      puVar7[2] = uStack_1a8;
    } while (lVar13 - lVar14 != 0);
    puStack_268 = (undefined8 *)((long)puVar9 + lVar11);
    puVar7 = (undefined8 *)uVar12;
  }
  uVar10 = uVar5 * 0xa8;
  uVar8 = ((ulong)((long)puStack_268 - (long)puVar9) >> 3) * -0x79435e50d79435e5;
  uStack_270 = (ulong)puVar9;
  uStack_260 = uVar5;
  uVar12 = uVar12 - (long)puVar7;
  puStack_268 = (undefined8 *)uVar8;
  if (uVar12 != 0) {
    uVar12 = uVar12 / 0xa8;
    do {
      FUN_103ca70c4(puVar7);
      puVar7 = (undefined8 *)((long)puVar7 + 0xa8);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((uVar5 != 0) && (lVar13 = (uVar10 / 0x98) * 0x98, uVar10 % 0x98 != 0)) {
    if (uVar10 < 0x98) {
      if (uVar10 != 0) {
        _free(puVar9);
      }
      puVar9 = (undefined8 *)0x8;
    }
    else {
      puVar9 = (undefined8 *)_realloc(puVar9,lVar13);
      if (puVar9 == (undefined8 *)0x0) {
LAB_103c97b24:
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar13);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103c97b34);
        (*pcVar6)();
      }
    }
  }
  *param_1 = uVar10 / 0x98;
  param_1[1] = (ulong)puVar9;
  param_1[2] = uVar8;
  return;
}

