
long __ZN10codex_core14compact_remote48trim_function_call_history_to_fit_context_window17hc1e6fbad7bd76637E
               (long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar10 = 8;
  if ((int)*param_2 == 0) {
    lVar10 = 0x18;
  }
  if (param_2[2] != 0 || *param_2 != 0) {
    uVar7 = param_2[0x3b];
    uVar4 = *(ulong *)((long)param_2 + lVar10);
    uVar1 = (long)(uVar4 ^ uVar7) >> 0x3f ^ 0x7fffffffffffffff;
    if (SUB168(SEXT816((long)uVar4) * SEXT816((long)uVar7),8) == (long)(uVar4 * uVar7) >> 0x3f) {
      uVar1 = uVar4 * uVar7;
    }
    uVar4 = *(ulong *)(param_3 + 0x10) + 3;
    if (0xfffffffffffffffc < *(ulong *)(param_3 + 0x10)) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar10 = *(long *)(param_1 + 0x1e0);
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0x1d8);
        lVar9 = lVar12;
        lVar11 = 0;
        lVar5 = lVar10;
        do {
          lVar3 = FUN_102d4ec78(lVar9);
          uVar7 = lVar3 + 3U >> 2;
          lVar2 = 0x7fffffffffffffff;
          if (!SCARRY8(lVar11,uVar7)) {
            lVar2 = lVar11 + uVar7;
          }
          if (lVar3 < 1) {
            lVar2 = lVar11;
          }
          lVar9 = lVar9 + 0xc0;
          lVar5 = lVar5 + -1;
          lVar11 = lVar2;
        } while (lVar5 != 0);
        lVar9 = 0x7fffffffffffffff;
        if (!SCARRY8(uVar4 >> 2,lVar2)) {
          lVar9 = (uVar4 >> 2) + lVar2;
        }
        if (lVar9 <= (long)uVar1 / 100) {
          return lVar8;
        }
        lVar5 = lVar12 + lVar10 * 0xc0;
        lVar9 = 2;
        if (1 < *(ulong *)(lVar5 + -0xc0)) {
          lVar9 = *(ulong *)(lVar5 + -0xc0) - 2;
        }
        if (1 < lVar9 - 7U && lVar9 != 5) {
          if (lVar9 != 0) {
            return lVar8;
          }
          if (*(long *)(lVar5 + -0xa8) != 9) {
            return lVar8;
          }
          if (**(long **)(lVar5 + -0xb0) != 0x65706f6c65766564 ||
              (char)(*(long **)(lVar5 + -0xb0))[1] != 'r') {
            return lVar8;
          }
        }
        *(long *)(param_1 + 0x1e0) = lVar10 + -1;
        puVar6 = (undefined8 *)(lVar12 + (lVar10 + -1) * 0xc0);
        uStack_128 = puVar6[1];
        uStack_130 = *puVar6;
        uStack_118 = puVar6[3];
        uStack_120 = puVar6[2];
        uStack_108 = puVar6[5];
        uStack_110 = puVar6[4];
        uStack_f8 = puVar6[7];
        uStack_100 = puVar6[6];
        uStack_e8 = puVar6[9];
        uStack_f0 = puVar6[8];
        uStack_d8 = puVar6[0xb];
        uStack_e0 = puVar6[10];
        uStack_c8 = puVar6[0xd];
        uStack_d0 = puVar6[0xc];
        uStack_b8 = puVar6[0xf];
        uStack_c0 = puVar6[0xe];
        uStack_a8 = puVar6[0x11];
        uStack_b0 = puVar6[0x10];
        uStack_98 = puVar6[0x13];
        uStack_a0 = puVar6[0x12];
        uStack_88 = puVar6[0x15];
        uStack_90 = puVar6[0x14];
        uStack_78 = puVar6[0x17];
        uStack_80 = puVar6[0x16];
        FUN_102d52d74(param_1 + 0x1d0,&uStack_130);
        lVar10 = *(long *)(param_1 + 0x1e8) + 1;
        if (*(long *)(param_1 + 0x1e8) == -1) {
          lVar10 = -1;
        }
        *(long *)(param_1 + 0x1e8) = lVar10;
        FUN_103396fdc(&uStack_130);
        lVar8 = lVar8 + 1;
        lVar10 = *(long *)(param_1 + 0x1e0);
        if (lVar10 == 0) {
          return lVar8;
        }
      } while( true );
    }
  }
  return 0;
}

