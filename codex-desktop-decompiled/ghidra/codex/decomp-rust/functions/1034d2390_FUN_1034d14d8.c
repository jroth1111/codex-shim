
/* WARNING: Possible PIC construction at 0x0001034d2d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034d2d0c) */
/* WARNING: Removing unreachable block (ram,0x0001034d2d4c) */
/* WARNING: Removing unreachable block (ram,0x0001034d2d5c) */
/* WARNING: Removing unreachable block (ram,0x0001034d2d64) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1034d14d8(byte *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  mach_header *pmVar20;
  undefined1 *puVar21;
  long *plVar22;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  ulong in_xzr;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lStack_3a0;
  long lStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  long *plStack_378;
  undefined8 *******pppppppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  long *plStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 uStack_328;
  undefined8 *******pppppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *******pppppppuStack_270;
  undefined8 uStack_268;
  undefined8 *******pppppppuStack_210;
  undefined8 uStack_208;
  undefined1 *******pppppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined1 ******ppppppuStack_170;
  undefined8 uStack_168;
  undefined1 *****pppppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 ****ppppuStack_100;
  undefined8 uStack_f8;
  undefined1 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  lVar13 = *param_2;
  uVar17 = *(ulong *)(lVar13 + 0x1900);
  while (uVar17 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar13 = *(long *)(lVar13 + 0x1908);
    if (lVar13 == 0) goto LAB_1034d1688;
    *param_2 = lVar13;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar13 + 0x1900);
  }
  lVar6 = param_2[1];
  plVar15 = param_3;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x1910) >> 0x20 & 1) == 0) ||
         ((ulong)param_2[2] < *(ulong *)(lVar6 + 0x1918))) break;
      if (*(long *)(lVar6 + 0x1908) == 0) {
        auVar33 = func_0x000108a07a20(&UNK_10b2c39d0);
        plVar16 = auVar33._8_8_;
        plVar22 = auVar33._0_8_;
        uStack_48 = 0x1034d16b8;
        lVar13 = *plVar16;
        uVar17 = *(ulong *)(lVar13 + 0x6a00);
        goto joined_r0x0001034d16ec;
      }
      param_2[1] = *(long *)(lVar6 + 0x1908);
      *(undefined8 *)(lVar6 + 0x1900) = 0;
      *(undefined8 *)(lVar6 + 0x1910) = 0;
      *(undefined8 *)(lVar6 + 0x1908) = 0;
      lVar13 = *param_3;
      *(long *)(lVar6 + 0x1900) = *(long *)(lVar13 + 0x1900) + 0x20;
      plVar22 = (long *)(lVar13 + 0x1908);
      lVar13 = *plVar22;
      if (lVar13 == 0) {
        *plVar22 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x1900) = *(long *)(lVar13 + 0x1900) + 0x20;
        lVar7 = *(long *)(lVar13 + 0x1908);
        if (lVar7 == 0) {
          *(long *)(lVar13 + 0x1908) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x1900) = *(long *)(lVar7 + 0x1900) + 0x20;
          if (*(long *)(lVar7 + 0x1908) == 0) {
            *(long *)(lVar7 + 0x1908) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = param_2[1];
    } while (lVar6 != *param_2);
    lVar13 = *param_2;
  }
  if ((*(ulong *)(lVar13 + 0x1910) >> (param_2[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x1910) >> 0x21 & 1) == 0) {
LAB_1034d1688:
      bVar5 = 0x10;
    }
    else {
      bVar5 = 0xf;
    }
    *param_1 = bVar5;
  }
  else {
    puVar14 = (undefined8 *)(lVar13 + (param_2[2] & 0x1fU) * 200);
    uVar24 = *puVar14;
    *(undefined8 *)(param_1 + 8) = puVar14[1];
    *(undefined8 *)param_1 = uVar24;
    uVar25 = puVar14[3];
    uVar24 = puVar14[2];
    uVar27 = puVar14[5];
    uVar26 = puVar14[4];
    uVar28 = puVar14[6];
    uVar32 = puVar14[9];
    uVar30 = puVar14[8];
    *(undefined8 *)(param_1 + 0x38) = puVar14[7];
    *(undefined8 *)(param_1 + 0x30) = uVar28;
    *(undefined8 *)(param_1 + 0x48) = uVar32;
    *(undefined8 *)(param_1 + 0x40) = uVar30;
    *(undefined8 *)(param_1 + 0x18) = uVar25;
    *(undefined8 *)(param_1 + 0x10) = uVar24;
    *(undefined8 *)(param_1 + 0x28) = uVar27;
    *(undefined8 *)(param_1 + 0x20) = uVar26;
    uVar25 = puVar14[0xb];
    uVar24 = puVar14[10];
    uVar27 = puVar14[0xd];
    uVar26 = puVar14[0xc];
    uVar28 = puVar14[0xe];
    uVar32 = puVar14[0x11];
    uVar30 = puVar14[0x10];
    *(undefined8 *)(param_1 + 0x78) = puVar14[0xf];
    *(undefined8 *)(param_1 + 0x70) = uVar28;
    *(undefined8 *)(param_1 + 0x88) = uVar32;
    *(undefined8 *)(param_1 + 0x80) = uVar30;
    *(undefined8 *)(param_1 + 0x58) = uVar25;
    *(undefined8 *)(param_1 + 0x50) = uVar24;
    *(undefined8 *)(param_1 + 0x68) = uVar27;
    *(undefined8 *)(param_1 + 0x60) = uVar26;
    uVar25 = puVar14[0x13];
    uVar24 = puVar14[0x12];
    uVar27 = puVar14[0x15];
    uVar26 = puVar14[0x14];
    uVar30 = puVar14[0x17];
    uVar28 = puVar14[0x16];
    *(undefined8 *)(param_1 + 0xc0) = puVar14[0x18];
    *(undefined8 *)(param_1 + 0xa8) = uVar27;
    *(undefined8 *)(param_1 + 0xa0) = uVar26;
    *(undefined8 *)(param_1 + 0xb8) = uVar30;
    *(undefined8 *)(param_1 + 0xb0) = uVar28;
    *(undefined8 *)(param_1 + 0x98) = uVar25;
    *(undefined8 *)(param_1 + 0x90) = uVar24;
    if (1 < *param_1 - 0xf) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return;
joined_r0x0001034d16ec:
  if (uVar17 == (plVar16[2] & 0xffffffffffffffe0U)) goto LAB_1034d1714;
  lVar13 = *(long *)(lVar13 + 0x6a08);
  if (lVar13 == 0) goto LAB_1034d1834;
  *plVar16 = lVar13;
  InstructionSynchronizationBarrier();
  uVar17 = *(ulong *)(lVar13 + 0x6a00);
  goto joined_r0x0001034d16ec;
joined_r0x0001034d1894:
  if (uVar17 == (plVar16[2] & 0xffffffffffffffe0U)) goto LAB_1034d18b8;
  lVar13 = *(long *)(lVar13 + 0x308);
  if (lVar13 == 0) goto LAB_1034d19e4;
  *plVar16 = lVar13;
  InstructionSynchronizationBarrier();
  uVar17 = *(ulong *)(lVar13 + 0x300);
  goto joined_r0x0001034d1894;
joined_r0x0001034d1a44:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_1034d1a6c;
  lVar13 = *(long *)(lVar13 + 0x6208);
  if (lVar13 == 0) goto LAB_1034d1b8c;
  *plVar22 = lVar13;
  InstructionSynchronizationBarrier();
  uVar17 = *(ulong *)(lVar13 + 0x6200);
  goto joined_r0x0001034d1a44;
joined_r0x0001034d1bec:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_1034d1c10;
  lVar13 = *(long *)(lVar13 + 0xb08);
  if (lVar13 == 0) goto LAB_1034d1d4c;
  *plVar22 = lVar13;
  InstructionSynchronizationBarrier();
  uVar17 = *(ulong *)(lVar13 + 0xb00);
  goto joined_r0x0001034d1bec;
joined_r0x0001034d1dac:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_1034d1dd4;
  lVar13 = *(long *)(lVar13 + 0x6908);
  if (lVar13 == 0) goto LAB_1034d1ef4;
  *plVar22 = lVar13;
  InstructionSynchronizationBarrier();
  uVar17 = *(ulong *)(lVar13 + 0x6900);
  goto joined_r0x0001034d1dac;
LAB_1034d1f94:
  lVar6 = *(long *)(lVar13 + 0x808);
  if (*(long *)(lVar13 + 0x808) == 0) {
    lVar6 = *(long *)(lVar13 + 0x800);
    lVar7 = _malloc(0x820);
    if (lVar7 == 0) {
      auVar33 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x820);
      plVar15 = auVar33._0_8_;
      uStack_1a8 = 0x1034d2088;
      uVar4 = auVar33._8_8_ & 0xffffffffffffffe0;
      uVar17 = uVar4 - *(long *)(*plVar15 + 0x2400);
      if (uVar17 == 0) {
        return;
      }
      bVar3 = (auVar33._8_8_ & 0x1f) < uVar17 >> 5;
      lVar13 = *plVar15;
      pppppppuStack_1b0 = &ppppppuStack_170;
      goto LAB_1034d2118;
    }
    *(long *)(lVar7 + 0x800) = lVar6 + 0x20;
    *(undefined8 *)(lVar7 + 0x808) = 0;
    *(undefined8 *)(lVar7 + 0x818) = 0;
    *(undefined8 *)(lVar7 + 0x810) = 0;
    lVar6 = *(long *)(lVar13 + 0x808);
    if (lVar6 == 0) {
      *(long *)(lVar13 + 0x808) = lVar7;
      lVar6 = lVar7;
    }
    else {
      *(long *)(lVar7 + 0x800) = *(long *)(lVar6 + 0x800) + 0x20;
      lVar9 = *(long *)(lVar6 + 0x808);
      if (lVar9 == 0) {
        *(long *)(lVar6 + 0x808) = lVar7;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar7 + 0x800) = *(long *)(lVar9 + 0x800) + 0x20;
          plVar22 = (long *)(lVar9 + 0x808);
          lVar9 = *plVar22;
        } while (lVar9 != 0);
        *plVar22 = lVar7;
      }
    }
  }
  if (((bool)(bVar3 & (int)*(undefined8 *)(lVar13 + 0x810) == -1)) && (*plVar15 == lVar13)) {
    *plVar15 = lVar6;
    uVar17 = plVar15[1];
    plVar15[1] = uVar17 | in_xzr;
    LORelease();
    *(ulong *)(lVar13 + 0x818) = uVar17;
    *(ulong *)(lVar13 + 0x810) = *(ulong *)(lVar13 + 0x810) | 0x100000000;
    LORelease();
    bVar3 = true;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x800);
  }
  else {
    bVar3 = false;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x800);
  }
  lVar13 = lVar6;
  if (uVar17 == uVar4) {
    return;
  }
  goto LAB_1034d1f94;
LAB_1034d2118:
  lVar6 = *(long *)(lVar13 + 0x2408);
  if (*(long *)(lVar13 + 0x2408) == 0) {
    lVar6 = *(long *)(lVar13 + 0x2400);
    lVar7 = _malloc(0x2420);
    if (lVar7 == 0) {
      auVar33 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2420);
      plVar15 = auVar33._0_8_;
      uStack_208 = 0x1034d220c;
      uVar4 = auVar33._8_8_ & 0xffffffffffffffe0;
      uVar17 = uVar4 - *(long *)(*plVar15 + 0x6900);
      if (uVar17 == 0) {
        return;
      }
      bVar3 = (auVar33._8_8_ & 0x1f) < uVar17 >> 5;
      lVar13 = *plVar15;
      pppppppuStack_210 = &pppppppuStack_1b0;
      goto LAB_1034d229c;
    }
    *(long *)(lVar7 + 0x2400) = lVar6 + 0x20;
    *(undefined8 *)(lVar7 + 0x2408) = 0;
    *(undefined8 *)(lVar7 + 0x2418) = 0;
    *(undefined8 *)(lVar7 + 0x2410) = 0;
    lVar6 = *(long *)(lVar13 + 0x2408);
    if (lVar6 == 0) {
      *(long *)(lVar13 + 0x2408) = lVar7;
      lVar6 = lVar7;
    }
    else {
      *(long *)(lVar7 + 0x2400) = *(long *)(lVar6 + 0x2400) + 0x20;
      lVar9 = *(long *)(lVar6 + 0x2408);
      if (lVar9 == 0) {
        *(long *)(lVar6 + 0x2408) = lVar7;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar7 + 0x2400) = *(long *)(lVar9 + 0x2400) + 0x20;
          plVar22 = (long *)(lVar9 + 0x2408);
          lVar9 = *plVar22;
        } while (lVar9 != 0);
        *plVar22 = lVar7;
      }
    }
  }
  if (((bool)(bVar3 & (int)*(undefined8 *)(lVar13 + 0x2410) == -1)) && (*plVar15 == lVar13)) {
    *plVar15 = lVar6;
    uVar17 = plVar15[1];
    plVar15[1] = uVar17 | in_xzr;
    LORelease();
    *(ulong *)(lVar13 + 0x2418) = uVar17;
    *(ulong *)(lVar13 + 0x2410) = *(ulong *)(lVar13 + 0x2410) | 0x100000000;
    LORelease();
    bVar3 = true;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x2400);
  }
  else {
    bVar3 = false;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x2400);
  }
  lVar13 = lVar6;
  if (uVar17 == uVar4) {
    return;
  }
  goto LAB_1034d2118;
LAB_1034d229c:
  lVar6 = *(long *)(lVar13 + 0x6908);
  if (*(long *)(lVar13 + 0x6908) == 0) {
    lVar6 = *(long *)(lVar13 + 0x6900);
    lVar7 = _malloc(0x6920);
    if (lVar7 == 0) {
      auVar33 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6920);
      plVar15 = auVar33._0_8_;
      uStack_268 = 0x1034d2390;
      uVar4 = auVar33._8_8_ & 0xffffffffffffffe0;
      uVar17 = uVar4 - *(long *)(*plVar15 + 0x1900);
      if (uVar17 == 0) {
        return;
      }
      bVar3 = (auVar33._8_8_ & 0x1f) < uVar17 >> 5;
      lVar13 = *plVar15;
      pppppppuStack_270 = &pppppppuStack_210;
      goto LAB_1034d2420;
    }
    *(long *)(lVar7 + 0x6900) = lVar6 + 0x20;
    *(undefined8 *)(lVar7 + 0x6908) = 0;
    *(undefined8 *)(lVar7 + 0x6918) = 0;
    *(undefined8 *)(lVar7 + 0x6910) = 0;
    lVar6 = *(long *)(lVar13 + 0x6908);
    if (lVar6 == 0) {
      *(long *)(lVar13 + 0x6908) = lVar7;
      lVar6 = lVar7;
    }
    else {
      *(long *)(lVar7 + 0x6900) = *(long *)(lVar6 + 0x6900) + 0x20;
      lVar9 = *(long *)(lVar6 + 0x6908);
      if (lVar9 == 0) {
        *(long *)(lVar6 + 0x6908) = lVar7;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar7 + 0x6900) = *(long *)(lVar9 + 0x6900) + 0x20;
          plVar22 = (long *)(lVar9 + 0x6908);
          lVar9 = *plVar22;
        } while (lVar9 != 0);
        *plVar22 = lVar7;
      }
    }
  }
  if (((bool)(bVar3 & (int)*(undefined8 *)(lVar13 + 0x6910) == -1)) && (*plVar15 == lVar13)) {
    *plVar15 = lVar6;
    uVar17 = plVar15[1];
    plVar15[1] = uVar17 | in_xzr;
    LORelease();
    *(ulong *)(lVar13 + 0x6918) = uVar17;
    *(ulong *)(lVar13 + 0x6910) = *(ulong *)(lVar13 + 0x6910) | 0x100000000;
    LORelease();
    bVar3 = true;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x6900);
  }
  else {
    bVar3 = false;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x6900);
  }
  lVar13 = lVar6;
  if (uVar17 == uVar4) {
    return;
  }
  goto LAB_1034d229c;
LAB_1034d2420:
  lVar6 = *(long *)(lVar13 + 0x1908);
  if (*(long *)(lVar13 + 0x1908) == 0) {
    lVar6 = *(long *)(lVar13 + 0x1900);
    lVar7 = _malloc(0x1920);
    if (lVar7 == 0) {
      auVar33 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1920);
      plVar15 = auVar33._0_8_;
      uStack_2c8 = 0x1034d2514;
      uVar4 = auVar33._8_8_ & 0xffffffffffffffe0;
      uVar17 = uVar4 - ((long *)*plVar15)[0xd40];
      if (uVar17 == 0) {
        return;
      }
      puVar21 = (undefined1 *)(ulong)((auVar33._8_8_ & 0x1f) < uVar17 >> 5);
      plVar22 = (long *)*plVar15;
      pppppppuStack_2d0 = &pppppppuStack_270;
      goto LAB_1034d25a4;
    }
    *(long *)(lVar7 + 0x1900) = lVar6 + 0x20;
    *(undefined8 *)(lVar7 + 0x1908) = 0;
    *(undefined8 *)(lVar7 + 0x1918) = 0;
    *(undefined8 *)(lVar7 + 0x1910) = 0;
    lVar6 = *(long *)(lVar13 + 0x1908);
    if (lVar6 == 0) {
      *(long *)(lVar13 + 0x1908) = lVar7;
      lVar6 = lVar7;
    }
    else {
      *(long *)(lVar7 + 0x1900) = *(long *)(lVar6 + 0x1900) + 0x20;
      lVar9 = *(long *)(lVar6 + 0x1908);
      if (lVar9 == 0) {
        *(long *)(lVar6 + 0x1908) = lVar7;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar7 + 0x1900) = *(long *)(lVar9 + 0x1900) + 0x20;
          plVar22 = (long *)(lVar9 + 0x1908);
          lVar9 = *plVar22;
        } while (lVar9 != 0);
        *plVar22 = lVar7;
      }
    }
  }
  if (((bool)(bVar3 & (int)*(undefined8 *)(lVar13 + 0x1910) == -1)) && (*plVar15 == lVar13)) {
    *plVar15 = lVar6;
    uVar17 = plVar15[1];
    plVar15[1] = uVar17 | in_xzr;
    LORelease();
    *(ulong *)(lVar13 + 0x1918) = uVar17;
    *(ulong *)(lVar13 + 0x1910) = *(ulong *)(lVar13 + 0x1910) | 0x100000000;
    LORelease();
    bVar3 = true;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x1900);
  }
  else {
    bVar3 = false;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x1900);
  }
  lVar13 = lVar6;
  if (uVar17 == uVar4) {
    return;
  }
  goto LAB_1034d2420;
LAB_1034d25a4:
  plVar10 = (long *)plVar22[0xd41];
  if ((long *)plVar22[0xd41] == (long *)0x0) {
    lVar13 = plVar22[0xd40];
    plVar8 = (long *)_malloc(0x6a20);
    if (plVar8 == (long *)0x0) {
      auVar33 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6a20);
      plVar10 = auVar33._0_8_;
      uStack_360 = 0x6a00;
      uStack_358 = 0x100000000;
      uStack_350 = 0x6a10;
      uStack_348 = 0x6a08;
      uStack_328 = 0x1034d2698;
      uVar18 = auVar33._8_8_ & 0xffffffffffffffe0;
      uVar17 = uVar18 - *(long *)(*plVar10 + 0xb00);
      if (uVar17 == 0) {
        return;
      }
      uVar17 = (ulong)((auVar33._8_8_ & 0x1f) < uVar17 >> 5);
      lVar6 = *plVar10;
      uStack_340 = uVar4;
      plStack_338 = plVar15;
      pppppppuStack_330 = &pppppppuStack_2d0;
      goto LAB_1034d2708;
    }
    plVar8[0xd40] = lVar13 + 0x20;
    plVar8[0xd41] = 0;
    plVar8[0xd43] = 0;
    plVar8[0xd42] = 0;
    plVar10 = (long *)plVar22[0xd41];
    if (plVar10 == (long *)0x0) {
      plVar22[0xd41] = (long)plVar8;
      plVar10 = plVar8;
    }
    else {
      plVar8[0xd40] = plVar10[0xd40] + 0x20;
      lVar13 = plVar10[0xd41];
      if (lVar13 == 0) {
        plVar10[0xd41] = (long)plVar8;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          plVar8[0xd40] = *(long *)(lVar13 + 0x6a00) + 0x20;
          plVar11 = (long *)(lVar13 + 0x6a08);
          lVar13 = *plVar11;
        } while (lVar13 != 0);
        *plVar11 = (long)plVar8;
      }
    }
  }
  if ((((uint)puVar21 & (uint)((int)plVar22[0xd42] == -1)) == 0) || ((long *)*plVar15 != plVar22)) {
    puVar21 = (undefined1 *)0x0;
    InstructionSynchronizationBarrier();
    uVar17 = plVar10[0xd40];
  }
  else {
    *plVar15 = (long)plVar10;
    uVar17 = plVar15[1];
    plVar15[1] = uVar17 | in_xzr;
    LORelease();
    plVar22[0xd43] = uVar17;
    plVar22[0xd42] = plVar22[0xd42] | 0x100000000;
    LORelease();
    puVar21 = (undefined1 *)0x1;
    InstructionSynchronizationBarrier();
    uVar17 = plVar10[0xd40];
  }
  plVar22 = plVar10;
  if (uVar17 == uVar4) {
    return;
  }
  goto LAB_1034d25a4;
LAB_1034d2708:
  lVar7 = *(long *)(lVar6 + 0xb08);
  if (*(long *)(lVar6 + 0xb08) == 0) {
    lVar7 = *(long *)(lVar6 + 0xb00);
    lVar9 = _malloc(0xb20);
    if (lVar9 == 0) {
      auVar33 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xb20);
      plVar15 = auVar33._0_8_;
      uStack_388 = 0x100000000;
      uStack_368 = 0x1034d27fc;
      pppppppuVar23 = &pppppppuStack_370;
      uVar19 = auVar33._8_8_ & 0xffffffffffffffe0;
      auVar36._8_8_ = plVar15;
      auVar36._0_8_ = uVar19;
      uVar4 = uVar19 - *(long *)(*plVar15 + 0x300);
      if (uVar4 == 0) {
        return;
      }
      uVar4 = (ulong)((auVar33._8_8_ & 0x1f) < uVar4 >> 5);
      pmVar20 = &__mh_execute_header;
      lVar9 = *plVar15;
      lStack_3a0 = lVar7;
      lStack_398 = lVar6;
      uStack_390 = uVar17;
      uStack_380 = uVar18;
      plStack_378 = plVar10;
      pppppppuStack_370 = &pppppppuStack_330;
      goto LAB_1034d286c;
    }
    *(long *)(lVar9 + 0xb00) = lVar7 + 0x20;
    *(undefined8 *)(lVar9 + 0xb08) = 0;
    *(undefined8 *)(lVar9 + 0xb18) = 0;
    *(undefined8 *)(lVar9 + 0xb10) = 0;
    lVar7 = *(long *)(lVar6 + 0xb08);
    if (lVar7 == 0) {
      *(long *)(lVar6 + 0xb08) = lVar9;
      lVar7 = lVar9;
    }
    else {
      *(long *)(lVar9 + 0xb00) = *(long *)(lVar7 + 0xb00) + 0x20;
      lVar29 = *(long *)(lVar7 + 0xb08);
      if (lVar29 == 0) {
        *(long *)(lVar7 + 0xb08) = lVar9;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar9 + 0xb00) = *(long *)(lVar29 + 0xb00) + 0x20;
          plVar15 = (long *)(lVar29 + 0xb08);
          lVar29 = *plVar15;
        } while (lVar29 != 0);
        *plVar15 = lVar9;
      }
    }
  }
  if ((((uint)uVar17 & (uint)((int)*(undefined8 *)(lVar6 + 0xb10) == -1)) == 0) ||
     (*plVar10 != lVar6)) {
    uVar17 = 0;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar7 + 0xb00);
  }
  else {
    *plVar10 = lVar7;
    uVar17 = plVar10[1];
    plVar10[1] = uVar17 | in_xzr;
    LORelease();
    *(ulong *)(lVar6 + 0xb18) = uVar17;
    *(ulong *)(lVar6 + 0xb10) = *(ulong *)(lVar6 + 0xb10) | 0x100000000;
    LORelease();
    uVar17 = 1;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar7 + 0xb00);
  }
  lVar6 = lVar7;
  if (uVar4 == uVar18) {
    return;
  }
  goto LAB_1034d2708;
LAB_1034d286c:
  lVar6 = *(long *)(lVar9 + 0x308);
  if (*(long *)(lVar9 + 0x308) == 0) {
    lVar6 = *(long *)(lVar9 + 0x300);
    lVar7 = _malloc(800);
    if (lVar7 == 0) {
      uVar24 = 0x1034d2960;
      auVar35 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,800);
      plVar15 = &lStack_3a0;
      goto SUB_1034d2960;
    }
    *(long *)(lVar7 + 0x300) = lVar6 + 0x20;
    *(undefined8 *)(lVar7 + 0x308) = 0;
    *(undefined8 *)(lVar7 + 0x318) = 0;
    *(undefined8 *)(lVar7 + 0x310) = 0;
    lVar6 = *(long *)(lVar9 + 0x308);
    if (lVar6 == 0) {
      *(long *)(lVar9 + 0x308) = lVar7;
      lVar6 = lVar7;
    }
    else {
      *(long *)(lVar7 + 0x300) = *(long *)(lVar6 + 0x300) + 0x20;
      lVar29 = *(long *)(lVar6 + 0x308);
      if (lVar29 == 0) {
        *(long *)(lVar6 + 0x308) = lVar7;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar7 + 0x300) = *(long *)(lVar29 + 0x300) + 0x20;
          plVar10 = (long *)(lVar29 + 0x308);
          lVar29 = *plVar10;
        } while (lVar29 != 0);
        *plVar10 = lVar7;
      }
    }
  }
  if ((((uint)uVar4 & (uint)((int)*(undefined8 *)(lVar9 + 0x310) == -1)) == 0) ||
     (*plVar15 != lVar9)) {
    uVar4 = 0;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x300);
  }
  else {
    *plVar15 = lVar6;
    uVar17 = plVar15[1];
    plVar15[1] = uVar17 | in_xzr;
    LORelease();
    *(ulong *)(lVar9 + 0x318) = uVar17;
    *(ulong *)(lVar9 + 0x310) = *(ulong *)(lVar9 + 0x310) | 0x100000000;
    LORelease();
    uVar4 = 1;
    InstructionSynchronizationBarrier();
    uVar17 = *(ulong *)(lVar6 + 0x300);
  }
  lVar9 = lVar6;
  if (uVar17 == uVar19) {
    return;
  }
  goto LAB_1034d286c;
SUB_1034d2960:
  plVar10 = auVar35._0_8_;
  *(undefined8 *)((long)plVar15 + -0x60) = unaff_x28;
  *(long *)((long)plVar15 + -0x58) = lVar13;
  *(long **)((long)plVar15 + -0x50) = plVar22;
  *(undefined1 **)((long)plVar15 + -0x48) = puVar21;
  *(long *)((long)plVar15 + -0x40) = lVar6;
  *(long *)((long)plVar15 + -0x38) = lVar9;
  *(ulong *)((long)plVar15 + -0x30) = uVar4;
  *(mach_header **)((long)plVar15 + -0x28) = pmVar20;
  *(undefined1 (*) [16])((long)plVar15 + -0x20) = auVar36;
  *(undefined8 ********)((long)plVar15 + -0x10) = pppppppuVar23;
  *(undefined8 *)((long)plVar15 + -8) = uVar24;
  uVar4 = auVar35._8_8_ & 0xffffffffffffffe0;
  uVar17 = uVar4 - ((long *)*plVar10)[0xc40];
  if (uVar17 == 0) {
    return;
  }
  uVar17 = (ulong)((auVar35._8_8_ & 0x1f) < uVar17 >> 5);
  plVar22 = (long *)*plVar10;
  do {
    plVar8 = (long *)plVar22[0xc41];
    if ((long *)plVar22[0xc41] == (long *)0x0) {
      lVar13 = plVar22[0xc40];
      plVar11 = (long *)_malloc(0x6220);
      if (plVar11 == (long *)0x0) goto LAB_1034d2ad8;
      plVar11[0xc40] = lVar13 + 0x20;
      plVar11[0xc41] = 0;
      plVar11[0xc43] = 0;
      plVar11[0xc42] = 0;
      plVar8 = (long *)plVar22[0xc41];
      if (plVar8 == (long *)0x0) {
        plVar22[0xc41] = (long)plVar11;
        plVar8 = plVar11;
      }
      else {
        plVar11[0xc40] = plVar8[0xc40] + 0x20;
        lVar13 = plVar8[0xc41];
        if (lVar13 == 0) {
          plVar8[0xc41] = (long)plVar11;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar11[0xc40] = *(long *)(lVar13 + 0x6200) + 0x20;
            plVar1 = (long *)(lVar13 + 0x6208);
            lVar13 = *plVar1;
          } while (lVar13 != 0);
          *plVar1 = (long)plVar11;
        }
      }
    }
    if ((((uint)uVar17 & (uint)((int)plVar22[0xc42] == -1)) == 0) || ((long *)*plVar10 != plVar22))
    {
      uVar17 = 0;
      InstructionSynchronizationBarrier();
      uVar18 = plVar8[0xc40];
    }
    else {
      *plVar10 = (long)plVar8;
      uVar17 = plVar10[1];
      plVar10[1] = uVar17 | in_xzr;
      LORelease();
      plVar22[0xc43] = uVar17;
      plVar22[0xc42] = plVar22[0xc42] | 0x100000000;
      LORelease();
      uVar17 = 1;
      InstructionSynchronizationBarrier();
      uVar18 = plVar8[0xc40];
    }
    plVar22 = plVar8;
    if (uVar18 == uVar4) {
      return;
    }
  } while( true );
LAB_1034d1714:
  lVar6 = plVar16[1];
  plVar10 = plVar15;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x6a10) >> 0x20 & 1) == 0) ||
         ((ulong)plVar16[2] < *(ulong *)(lVar6 + 0x6a18))) break;
      if (*(long *)(lVar6 + 0x6a08) == 0) {
        auVar34 = func_0x000108a07a20(&UNK_10b2c39d0);
        plVar16 = auVar34._8_8_;
        plVar22 = auVar34._0_8_;
        uStack_b0 = 0x6a10;
        uStack_88 = 0x1034d1864;
        lVar13 = *plVar16;
        uVar17 = *(ulong *)(lVar13 + 0x300);
        goto joined_r0x0001034d1894;
      }
      plVar16[1] = *(long *)(lVar6 + 0x6a08);
      *(undefined8 *)(lVar6 + 0x6a00) = 0;
      *(undefined8 *)(lVar6 + 0x6a10) = 0;
      *(undefined8 *)(lVar6 + 0x6a08) = 0;
      lVar13 = *plVar15;
      *(long *)(lVar6 + 0x6a00) = *(long *)(lVar13 + 0x6a00) + 0x20;
      plVar8 = (long *)(lVar13 + 0x6a08);
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        *plVar8 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6a00) = *(long *)(lVar13 + 0x6a00) + 0x20;
        lVar7 = *(long *)(lVar13 + 0x6a08);
        if (lVar7 == 0) {
          *(long *)(lVar13 + 0x6a08) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6a00) = *(long *)(lVar7 + 0x6a00) + 0x20;
          if (*(long *)(lVar7 + 0x6a08) == 0) {
            *(long *)(lVar7 + 0x6a08) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar16[1];
    } while (lVar6 != *plVar16);
    lVar13 = *plVar16;
  }
  if ((*(ulong *)(lVar13 + 0x6a10) >> (plVar16[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6a10) >> 0x21 & 1) == 0) {
LAB_1034d1834:
      lVar13 = 0x16;
    }
    else {
      lVar13 = 0x15;
    }
    *plVar22 = lVar13;
  }
  else {
    _memcpy(plVar22,lVar13 + (plVar16[2] & 0x1fU) * 0x350,0x350);
    if (1 < *plVar22 - 0x15U) {
      plVar16[2] = plVar16[2] + 1;
    }
  }
  return;
LAB_1034d18b8:
  lVar6 = plVar16[1];
  plVar8 = plVar10;
  plStack_a8 = plVar15;
  ppuStack_90 = &puStack_50;
  if (lVar6 == lVar13) {
    uVar17 = plVar16[2] & 0x1f;
    uVar4 = *(ulong *)(lVar13 + 0x310);
    uVar18 = uVar4 >> uVar17;
  }
  else {
    do {
      uStack_a0 = auVar33._8_8_;
      uStack_98 = auVar33._0_8_;
      if (((*(ulong *)(lVar6 + 0x310) >> 0x20 & 1) == 0) ||
         ((ulong)plVar16[2] < *(ulong *)(lVar6 + 0x318))) break;
      if (*(long *)(lVar6 + 0x308) == 0) {
        auVar34 = func_0x000108a07a20(&UNK_10b2c39d0);
        plVar22 = auVar34._8_8_;
        plVar15 = auVar34._0_8_;
        uStack_b8 = 0x1034d1a10;
        lVar13 = *plVar22;
        uVar17 = *(ulong *)(lVar13 + 0x6200);
        goto joined_r0x0001034d1a44;
      }
      plVar16[1] = *(long *)(lVar6 + 0x308);
      *(undefined8 *)(lVar6 + 0x300) = 0;
      *(undefined8 *)(lVar6 + 0x310) = 0;
      *(undefined8 *)(lVar6 + 0x308) = 0;
      lVar13 = *plVar10;
      *(long *)(lVar6 + 0x300) = *(long *)(lVar13 + 0x300) + 0x20;
      plVar15 = (long *)(lVar13 + 0x308);
      lVar13 = *plVar15;
      if (lVar13 == 0) {
        *plVar15 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x300) = *(long *)(lVar13 + 0x300) + 0x20;
        lVar7 = *(long *)(lVar13 + 0x308);
        if (lVar7 == 0) {
          *(long *)(lVar13 + 0x308) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x300) = *(long *)(lVar7 + 0x300) + 0x20;
          if (*(long *)(lVar7 + 0x308) == 0) {
            *(long *)(lVar7 + 0x308) = lVar6;
          }
          else {
            _free();
            auVar33._8_8_ = uStack_a0;
            auVar33._0_8_ = uStack_98;
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar16[1];
    } while (lVar6 != *plVar16);
    lVar13 = *plVar16;
    uVar17 = plVar16[2] & 0x1f;
    uVar4 = *(ulong *)(lVar13 + 0x310);
    uVar18 = uVar4 >> uVar17;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar4 >> 0x21 & 1) == 0) {
LAB_1034d19e4:
      lVar13 = -0x7fffffffffffffff;
    }
    else {
      lVar13 = -0x8000000000000000;
    }
    *plVar22 = lVar13;
  }
  else {
    plVar15 = (long *)(lVar13 + uVar17 * 0x18);
    lVar13 = plVar15[2];
    lVar6 = *plVar15;
    plVar22[1] = plVar15[1];
    *plVar22 = lVar6;
    plVar22[2] = lVar13;
    if (-0x7fffffffffffffff < *plVar22) {
      plVar16[2] = plVar16[2] + 1;
    }
  }
  return;
LAB_1034d1a6c:
  lVar6 = plVar22[1];
  plVar16 = plVar8;
  pppuStack_c0 = &ppuStack_90;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x6210) >> 0x20 & 1) == 0) ||
         ((ulong)plVar22[2] < *(ulong *)(lVar6 + 0x6218))) break;
      if (*(long *)(lVar6 + 0x6208) == 0) {
        auVar33 = func_0x000108a07a20(&UNK_10b2c39d0);
        plVar22 = auVar33._8_8_;
        plVar15 = auVar33._0_8_;
        uStack_120 = 0x6210;
        uStack_f8 = 0x1034d1bbc;
        lVar13 = *plVar22;
        uVar17 = *(ulong *)(lVar13 + 0xb00);
        goto joined_r0x0001034d1bec;
      }
      plVar22[1] = *(long *)(lVar6 + 0x6208);
      *(undefined8 *)(lVar6 + 0x6200) = 0;
      *(undefined8 *)(lVar6 + 0x6210) = 0;
      *(undefined8 *)(lVar6 + 0x6208) = 0;
      lVar13 = *plVar8;
      *(long *)(lVar6 + 0x6200) = *(long *)(lVar13 + 0x6200) + 0x20;
      plVar10 = (long *)(lVar13 + 0x6208);
      lVar13 = *plVar10;
      if (lVar13 == 0) {
        *plVar10 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6200) = *(long *)(lVar13 + 0x6200) + 0x20;
        lVar7 = *(long *)(lVar13 + 0x6208);
        if (lVar7 == 0) {
          *(long *)(lVar13 + 0x6208) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6200) = *(long *)(lVar7 + 0x6200) + 0x20;
          if (*(long *)(lVar7 + 0x6208) == 0) {
            *(long *)(lVar7 + 0x6208) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar22[1];
    } while (lVar6 != *plVar22);
    lVar13 = *plVar22;
  }
  if ((*(ulong *)(lVar13 + 0x6210) >> (plVar22[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6210) >> 0x21 & 1) == 0) {
LAB_1034d1b8c:
      lVar13 = 0x16;
    }
    else {
      lVar13 = 0x15;
    }
    *plVar15 = lVar13;
  }
  else {
    _memcpy(plVar15,lVar13 + (plVar22[2] & 0x1fU) * 0x310,0x310);
    if (1 < *plVar15 - 0x15U) {
      plVar22[2] = plVar22[2] + 1;
    }
  }
  return;
LAB_1034d1c10:
  lVar6 = plVar22[1];
  plVar10 = plVar16;
  plStack_118 = plVar8;
  ppppuStack_100 = &pppuStack_c0;
  if (lVar6 == lVar13) {
    uVar17 = plVar22[2] & 0x1f;
    uVar4 = *(ulong *)(lVar13 + 0xb10);
    uVar18 = uVar4 >> uVar17;
  }
  else {
    do {
      uStack_110 = auVar34._8_8_;
      uStack_108 = auVar34._0_8_;
      if (((*(ulong *)(lVar6 + 0xb10) >> 0x20 & 1) == 0) ||
         ((ulong)plVar22[2] < *(ulong *)(lVar6 + 0xb18))) break;
      if (*(long *)(lVar6 + 0xb08) == 0) {
        auVar33 = func_0x000108a07a20(&UNK_10b2c39d0);
        plVar22 = auVar33._8_8_;
        plVar15 = auVar33._0_8_;
        uStack_128 = 0x1034d1d78;
        lVar13 = *plVar22;
        uVar17 = *(ulong *)(lVar13 + 0x6900);
        goto joined_r0x0001034d1dac;
      }
      plVar22[1] = *(long *)(lVar6 + 0xb08);
      *(undefined8 *)(lVar6 + 0xb00) = 0;
      *(undefined8 *)(lVar6 + 0xb10) = 0;
      *(undefined8 *)(lVar6 + 0xb08) = 0;
      lVar13 = *plVar16;
      *(long *)(lVar6 + 0xb00) = *(long *)(lVar13 + 0xb00) + 0x20;
      plVar8 = (long *)(lVar13 + 0xb08);
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        *plVar8 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0xb00) = *(long *)(lVar13 + 0xb00) + 0x20;
        lVar7 = *(long *)(lVar13 + 0xb08);
        if (lVar7 == 0) {
          *(long *)(lVar13 + 0xb08) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0xb00) = *(long *)(lVar7 + 0xb00) + 0x20;
          if (*(long *)(lVar7 + 0xb08) == 0) {
            *(long *)(lVar7 + 0xb08) = lVar6;
          }
          else {
            _free();
            auVar34._8_8_ = uStack_110;
            auVar34._0_8_ = uStack_108;
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar22[1];
    } while (lVar6 != *plVar22);
    lVar13 = *plVar22;
    uVar17 = plVar22[2] & 0x1f;
    uVar4 = *(ulong *)(lVar13 + 0xb10);
    uVar18 = uVar4 >> uVar17;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar4 >> 0x21 & 1) == 0) {
LAB_1034d1d4c:
      lVar13 = -0x7fffffffffffffff;
    }
    else {
      lVar13 = -0x8000000000000000;
    }
    *plVar15 = lVar13;
  }
  else {
    plVar16 = (long *)(lVar13 + uVar17 * 0x58);
    lVar7 = *plVar16;
    lVar6 = plVar16[3];
    lVar13 = plVar16[2];
    plVar15[1] = plVar16[1];
    *plVar15 = lVar7;
    plVar15[3] = lVar6;
    plVar15[2] = lVar13;
    lVar6 = plVar16[5];
    lVar13 = plVar16[4];
    lVar9 = plVar16[7];
    lVar7 = plVar16[6];
    lVar31 = plVar16[9];
    lVar29 = plVar16[8];
    plVar15[10] = plVar16[10];
    plVar15[7] = lVar9;
    plVar15[6] = lVar7;
    plVar15[9] = lVar31;
    plVar15[8] = lVar29;
    plVar15[5] = lVar6;
    plVar15[4] = lVar13;
    if (-0x7fffffffffffffff < *plVar15) {
      plVar22[2] = plVar22[2] + 1;
    }
  }
  return;
LAB_1034d1dd4:
  lVar6 = plVar22[1];
  plVar16 = plVar10;
  pppppuStack_130 = &ppppuStack_100;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x6910) >> 0x20 & 1) == 0) ||
         ((ulong)plVar22[2] < *(ulong *)(lVar6 + 0x6918))) break;
      if (*(long *)(lVar6 + 0x6908) == 0) {
        auVar33 = func_0x000108a07a20(&UNK_10b2c39d0);
        plVar15 = auVar33._0_8_;
        uStack_168 = 0x1034d1f24;
        uVar4 = auVar33._8_8_ & 0xffffffffffffffe0;
        uVar17 = uVar4 - *(long *)(*plVar15 + 0x800);
        if (uVar17 == 0) {
          return;
        }
        bVar3 = (auVar33._8_8_ & 0x1f) < uVar17 >> 5;
        lVar13 = *plVar15;
        ppppppuStack_170 = &pppppuStack_130;
        goto LAB_1034d1f94;
      }
      plVar22[1] = *(long *)(lVar6 + 0x6908);
      *(undefined8 *)(lVar6 + 0x6900) = 0;
      *(undefined8 *)(lVar6 + 0x6910) = 0;
      *(undefined8 *)(lVar6 + 0x6908) = 0;
      lVar13 = *plVar10;
      *(long *)(lVar6 + 0x6900) = *(long *)(lVar13 + 0x6900) + 0x20;
      plVar8 = (long *)(lVar13 + 0x6908);
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        *plVar8 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6900) = *(long *)(lVar13 + 0x6900) + 0x20;
        lVar7 = *(long *)(lVar13 + 0x6908);
        if (lVar7 == 0) {
          *(long *)(lVar13 + 0x6908) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6900) = *(long *)(lVar7 + 0x6900) + 0x20;
          if (*(long *)(lVar7 + 0x6908) == 0) {
            *(long *)(lVar7 + 0x6908) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar22[1];
    } while (lVar6 != *plVar22);
    lVar13 = *plVar22;
  }
  if ((*(ulong *)(lVar13 + 0x6910) >> (plVar22[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6910) >> 0x21 & 1) == 0) {
LAB_1034d1ef4:
      lVar13 = 0x18;
    }
    else {
      lVar13 = 0x17;
    }
    *plVar15 = lVar13;
  }
  else {
    _memcpy(plVar15,lVar13 + (plVar22[2] & 0x1fU) * 0x348,0x348);
    if (1 < *plVar15 - 0x17U) {
      plVar22[2] = plVar22[2] + 1;
    }
  }
  return;
LAB_1034d2ad8:
  auVar36 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6220);
  lVar6 = auVar36._8_8_;
  puVar14 = auVar36._0_8_;
  *(undefined8 *)((long)plVar15 + -0xc0) = unaff_x28;
  *(long *)((long)plVar15 + -0xb8) = lVar13;
  *(long **)((long)plVar15 + -0xb0) = plVar22;
  *(ulong *)((long)plVar15 + -0xa8) = uVar17;
  *(undefined8 *)((long)plVar15 + -0xa0) = 0x6200;
  *(undefined8 *)((long)plVar15 + -0x98) = 0x100000000;
  *(undefined8 *)((long)plVar15 + -0x90) = 0x6210;
  *(undefined8 *)((long)plVar15 + -0x88) = 0x6208;
  *(ulong *)((long)plVar15 + -0x80) = uVar4;
  *(long **)((long)plVar15 + -0x78) = plVar10;
  *(undefined1 **)((long)plVar15 + -0x70) = (undefined1 *)((long)plVar15 + -0x10);
  *(undefined8 *)((long)plVar15 + -0x68) = 0x1034d2ae4;
  pppppppuVar23 = (undefined8 *******)((long)plVar15 + -0x70);
  *(undefined8 *)((long)plVar15 + -0x6e0) = 0;
  bVar5 = *(byte *)(lVar6 + 0x6a8);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      plVar22 = *(long **)(lVar6 + 0x310);
      *(undefined1 *)(lVar6 + 0x6a9) = 1;
      _memcpy(lVar6 + 0x318,lVar6,0x310);
      *(long **)(lVar6 + 0x628) = plVar22;
      *(undefined1 *)(lVar6 + 0x6a0) = 0;
LAB_1034d2b78:
      *(long **)(lVar6 + 0x630) = plVar22;
      *(long **)(lVar6 + 0x638) = plVar22;
      uVar17 = 1;
      *(undefined8 *)(lVar6 + 0x640) = 1;
      *(undefined1 *)(lVar6 + 0x658) = 0;
LAB_1034d2b94:
      *(long **)(lVar6 + 0x648) = plVar22;
      *(ulong *)(lVar6 + 0x650) = uVar17;
      lVar7 = *plVar22;
      if (*(ulong *)(lVar7 + 0x1e8) < uVar17) {
LAB_1034d2bac:
        *(undefined1 *)(lVar6 + 0x658) = 1;
      }
      else {
LAB_1034d2bf4:
        *(undefined8 *)((long)plVar15 + -0x6d0) = 0;
        *(undefined8 *)((long)plVar15 + -0x6c8) = 0;
        *(long *)(lVar6 + 0x660) = lVar7 + 0x1c0;
        *(undefined8 *)(lVar6 + 0x668) = 0;
        *(undefined8 *)(lVar6 + 0x680) = 0;
        uVar24 = *(undefined8 *)((long)plVar15 + -0x6d8);
        *(undefined8 *)(lVar6 + 0x678) = *(undefined8 *)((long)plVar15 + -0x6d0);
        *(undefined8 *)(lVar6 + 0x670) = uVar24;
        *(ulong *)(lVar6 + 0x688) = uVar17;
        *(ulong *)(lVar6 + 0x690) = uVar17;
        *(undefined1 *)(lVar6 + 0x698) = 0;
LAB_1034d2c1c:
        puVar21 = (undefined1 *)(lVar6 + 0x658);
        bVar5 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                          (lVar6 + 0x660,plVar16);
        if (bVar5 == 2) {
          *puVar21 = 4;
          uVar12 = 3;
          *(undefined1 *)(lVar6 + 0x6a0) = 3;
          *puVar14 = 0x16;
          goto LAB_1034d2cb4;
        }
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (lVar6 + 0x660);
        if (*(long *)(lVar6 + 0x668) != 0) {
          (**(code **)(*(long *)(lVar6 + 0x668) + 0x18))(*(undefined8 *)(lVar6 + 0x670));
        }
        uVar4 = 1;
        *puVar21 = 1;
        if ((bVar5 & 1) == 0) {
          pmVar20 = *(mach_header **)(lVar6 + 0x630);
          *(undefined1 *)(lVar6 + 0x6a0) = 1;
          *(undefined1 *)(lVar6 + 0x6a9) = 0;
          plVar16 = (long *)0x310;
          _memcpy((undefined1 *)((long)plVar15 + -0x6d8),lVar6 + 0x318);
          lVar6 = *(long *)pmVar20;
          LOAcquire();
          lVar9 = *(long *)(lVar6 + 0x88);
          *(long *)(lVar6 + 0x88) = lVar9 + 1;
          auVar35._8_8_ = lVar9;
          auVar35._0_8_ = lVar6 + 0x80;
          uVar24 = 0x1034d2d0c;
          plVar15 = (long *)((long)plVar15 + -0x6e0);
          goto SUB_1034d2960;
        }
      }
      *(undefined1 *)(lVar6 + 0x6a0) = 1;
      *(undefined1 *)(lVar6 + 0x6a9) = 0;
      uVar24 = *(undefined8 *)(lVar6 + 0x318);
      _memcpy((undefined1 *)((long)plVar15 + -0x3c8),lVar6 + 800,0x308);
      *(undefined1 *)(lVar6 + 0x6a9) = 0;
      *puVar14 = uVar24;
      _memcpy(puVar14 + 1,(undefined1 *)((long)plVar15 + -0x3c8),0x308);
      uVar12 = 1;
LAB_1034d2cb4:
      *(undefined1 *)(lVar6 + 0x6a8) = uVar12;
      return;
    }
    func_0x000108a07af4(&UNK_10b2c3a00);
LAB_1034d2d88:
    func_0x000108a07b10(&UNK_10b2c3a00);
  }
  else {
    if (bVar5 != 3) goto LAB_1034d2d88;
    bVar5 = *(byte *)(lVar6 + 0x6a0);
    if (1 < bVar5) {
      if (bVar5 != 3) {
        func_0x000108a07b10(&UNK_10b2c3a18);
        goto LAB_1034d2dd8;
      }
      bVar5 = *(byte *)(lVar6 + 0x658);
      if (bVar5 < 3) {
        if (bVar5 != 0) {
          if (bVar5 == 1) {
            func_0x000108a07af4(&UNK_10b2c39e8);
          }
          else {
            func_0x000108a07b10(&UNK_10b2c39e8);
          }
          goto LAB_1034d2dd8;
        }
        plVar22 = *(long **)(lVar6 + 0x638);
        uVar17 = *(ulong *)(lVar6 + 0x640);
        goto LAB_1034d2b94;
      }
      if (bVar5 != 3) goto LAB_1034d2c1c;
      uVar17 = *(ulong *)(lVar6 + 0x650);
      plVar22 = *(long **)(lVar6 + 0x648);
      lVar7 = *plVar22;
      if (uVar17 <= *(ulong *)(lVar7 + 0x1e8)) goto LAB_1034d2bf4;
      goto LAB_1034d2bac;
    }
    if (bVar5 == 0) {
      plVar22 = *(long **)(lVar6 + 0x628);
      goto LAB_1034d2b78;
    }
  }
  func_0x000108a07af4(&UNK_10b2c3a18);
LAB_1034d2dd8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d2ddc);
  (*pcVar2)();
}

