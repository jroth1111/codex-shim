
void __ZN11codex_hooks8registry5Hooks21preview_session_start17h6aacb2e3e460f37cE
               (ulong *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
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
  lVar15 = *(long *)(param_2 + 0x28);
  lVar8 = (ulong)*(byte *)(param_3 + 0x68) * 8;
  bVar5 = *(long *)(param_3 + 0x60) != -0x8000000000000000;
  puVar6 = (undefined8 *)(&UNK_10b2f2cc8 + lVar8);
  puVar11 = (undefined8 *)(&UNK_108db8ff8 + lVar8);
  if (bVar5) {
    puVar6 = (undefined8 *)(param_3 + 0x98);
    puVar11 = (undefined8 *)(param_3 + 0xa0);
  }
  uVar7 = 5;
  if (bVar5) {
    uVar7 = 7;
  }
  uVar9 = *puVar6;
  uVar13 = *puVar11;
  puVar6 = (undefined8 *)_malloc(0x10);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0001087c9084(8,0x10);
LAB_103c98ea8:
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar15);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c98eb8);
    (*pcVar4)();
  }
  *puVar6 = uVar9;
  puVar6[1] = uVar13;
  __ZN11codex_hooks6engine10dispatcher34select_handlers_for_matcher_inputs17h1c684c5df70e7282E
            (&uStack_270,uVar2,lVar15,uVar7,puVar6,1);
  _free(puVar6);
  puVar11 = puStack_268;
  uVar3 = uStack_270;
  lVar15 = uStack_260 * 0xa8;
  uVar14 = (long)puStack_268 + lVar15;
  puVar6 = puStack_268;
  if (uStack_260 != 0) {
    lVar16 = 0;
    lVar8 = 0;
    do {
      puVar6 = (undefined8 *)((long)puVar11 + lVar8);
      puVar1 = (ulong *)((long)puVar11 + lVar16);
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
      uStack_270 = (ulong)puVar11;
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
      puStack_268 = puVar6;
      FUN_103c78bd8(&uStack_1b8,&uStack_120);
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
      lVar8 = lVar8 + 0x98;
      lVar16 = lVar16 + 0xa8;
      puVar6[1] = uStack_1b0;
      *puVar6 = uStack_1b8;
      puVar6[3] = uStack_1a0;
      puVar6[2] = uStack_1a8;
    } while (lVar15 - lVar16 != 0);
    puStack_268 = (undefined8 *)((long)puVar11 + lVar8);
    puVar6 = (undefined8 *)uVar14;
  }
  uVar12 = uVar3 * 0xa8;
  uVar10 = ((ulong)((long)puStack_268 - (long)puVar11) >> 3) * -0x79435e50d79435e5;
  uStack_270 = (ulong)puVar11;
  uStack_260 = uVar3;
  uVar14 = uVar14 - (long)puVar6;
  puStack_268 = (undefined8 *)uVar10;
  if (uVar14 != 0) {
    uVar14 = uVar14 / 0xa8;
    do {
      FUN_103ca70c4(puVar6);
      puVar6 = (undefined8 *)((long)puVar6 + 0xa8);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if ((uVar3 != 0) && (lVar15 = (uVar12 / 0x98) * 0x98, uVar12 % 0x98 != 0)) {
    if (uVar12 < 0x98) {
      if (uVar12 != 0) {
        _free(puVar11);
      }
      puVar11 = (undefined8 *)0x8;
    }
    else {
      puVar11 = (undefined8 *)_realloc(puVar11,lVar15);
      if (puVar11 == (undefined8 *)0x0) goto LAB_103c98ea8;
    }
  }
  *param_1 = uVar12 / 0x98;
  param_1[1] = (ulong)puVar11;
  param_1[2] = uVar10;
  return;
}

