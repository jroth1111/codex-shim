
/* WARNING: Removing unreachable block (ram,0x000100fc8504) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_100fc6cc0(ulong *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 uVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong in_xzr;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined1 auStack_10b0 [496];
  
  puVar15 = (ulong *)*param_2;
  uVar17 = puVar15[0xd40];
  while (uVar17 != (param_2[2] & 0xffffffffffffffe0U)) {
    puVar15 = (ulong *)puVar15[0xd41];
    puVar8 = param_1;
    if (puVar15 == (ulong *)0x0) goto LAB_100fc6e3c;
    *param_2 = (long)puVar15;
    InstructionSynchronizationBarrier();
    uVar17 = puVar15[0xd40];
  }
  puVar8 = (ulong *)param_2[1];
  plVar20 = param_3;
  if (puVar8 != puVar15) {
    do {
      if (((puVar8[0xd42] >> 0x20 & 1) == 0) || ((ulong)param_2[2] < puVar8[0xd43])) break;
      if (puVar8[0xd41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0xc0];
        goto joined_r0x000100fc6e9c;
      }
      param_2[1] = puVar8[0xd41];
      puVar8[0xd40] = 0;
      puVar8[0xd42] = 0;
      puVar8[0xd41] = 0;
      lVar6 = *param_3;
      puVar8[0xd40] = *(long *)(lVar6 + 0x6a00) + 0x20;
      plVar22 = (long *)(lVar6 + 0x6a08);
      lVar6 = *plVar22;
      if (lVar6 == 0) {
        *plVar22 = (long)puVar8;
      }
      else {
        puVar8[0xd40] = *(long *)(lVar6 + 0x6a00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x6a08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x6a08) = (long)puVar8;
        }
        else {
          puVar8[0xd40] = *(long *)(lVar11 + 0x6a00) + 0x20;
          if (*(long *)(lVar11 + 0x6a08) == 0) {
            *(long *)(lVar11 + 0x6a08) = (long)puVar8;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar8 = (ulong *)param_2[1];
    } while (puVar8 != (ulong *)*param_2);
    puVar15 = (ulong *)*param_2;
  }
  if ((puVar15[0xd42] >> (param_2[2] & 0x1fU) & 1) == 0) {
    if ((puVar15[0xd42] >> 0x21 & 1) == 0) {
LAB_100fc6e3c:
      uVar17 = 0x18;
    }
    else {
      uVar17 = 0x17;
    }
    *param_1 = uVar17;
  }
  else {
    puVar8 = (ulong *)_memcpy(param_1,puVar15 + (param_2[2] & 0x1fU) * 0x6a,0x350);
    if (1 < *param_1 - 0x17) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return puVar8;
joined_r0x000100fc6e9c:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc6ec0;
  puVar15 = (ulong *)puVar15[0xc1];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc6fe8;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xc0];
  goto joined_r0x000100fc6e9c;
joined_r0x000100fc7048:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc7070;
  puVar15 = (ulong *)puVar15[0xd21];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc7190;
  *plVar20 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xd20];
  goto joined_r0x000100fc7048;
joined_r0x000100fc71f4:
  if (uVar17 == (puVar12[2] & 0xffffffffffffffe0)) goto LAB_100fc721c;
  puVar15 = (ulong *)puVar15[0x221];
  if (puVar15 == (ulong *)0x0) {
    uVar17 = 0x8000000000000006;
    puVar10 = puVar8;
    goto LAB_100fc7384;
  }
  *puVar12 = puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x220];
  goto joined_r0x000100fc71f4;
joined_r0x000100fc76f8:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc771c;
  puVar15 = (ulong *)puVar15[0x61];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc7848;
  *plVar20 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x60];
  goto joined_r0x000100fc76f8;
joined_r0x000100fc78a8:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc78d0;
  puVar15 = (ulong *)puVar15[0x2a1];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc7a1c;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x2a0];
  goto joined_r0x000100fc78a8;
joined_r0x000100fc7a80:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc7aa8;
  puVar15 = (ulong *)puVar15[0xc41];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc7bc8;
  *plVar22 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xc40];
  goto joined_r0x000100fc7a80;
joined_r0x000100fc7c28:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc7c4c;
  puVar15 = (ulong *)puVar15[0x161];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc7d88;
  *plVar20 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x160];
  goto joined_r0x000100fc7c28;
joined_r0x000100fc7de4:
  if (uVar17 == (puVar12[2] & 0xffffffffffffffe0)) goto LAB_100fc7e08;
  puVar15 = (ulong *)puVar15[0x41];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc7f18;
  *puVar12 = puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x40];
  goto joined_r0x000100fc7de4;
joined_r0x000100fc7f78:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc7fa0;
  puVar15 = (ulong *)puVar15[0xd41];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc80c0;
  *plVar22 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xd40];
  goto joined_r0x000100fc7f78;
joined_r0x000100fc8120:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc8144;
  puVar15 = (ulong *)puVar15[0x161];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc8280;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x160];
  goto joined_r0x000100fc8120;
LAB_100fc8144:
  puVar9 = (ulong *)puVar10[1];
  plVar20 = plVar13;
  if (puVar9 != puVar15) {
    while( true ) {
      if (((puVar9[0x162] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0x163])) goto LAB_100fc8260;
      if (puVar9[0x161] == 0) break;
      puVar10[1] = puVar9[0x161];
      puVar9[0x160] = 0;
      puVar9[0x162] = 0;
      puVar9[0x161] = 0;
      lVar6 = *plVar13;
      puVar9[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
      plVar22 = (long *)(lVar6 + 0xb08);
      lVar6 = *plVar22;
      if (lVar6 == 0) {
        *plVar22 = (long)puVar9;
      }
      else {
        puVar9[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0xb08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0xb08) = (long)puVar9;
        }
        else {
          puVar9[0x160] = *(long *)(lVar11 + 0xb00) + 0x20;
          if (*(long *)(lVar11 + 0xb08) == 0) {
            *(long *)(lVar11 + 0xb08) = (long)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
      if (puVar9 == (ulong *)*puVar10) goto LAB_100fc8260;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar12 = auVar27._8_8_;
    puVar8 = auVar27._0_8_;
    puVar15 = (ulong *)*puVar12;
    uVar17 = puVar15[0x200];
    while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
      puVar15 = (ulong *)puVar15[0x201];
      if (puVar15 == (ulong *)0x0) {
        uVar17 = 0x8000000000000006;
        puVar10 = puVar8;
        goto LAB_100fc845c;
      }
      *puVar12 = puVar15;
      InstructionSynchronizationBarrier();
      uVar17 = puVar15[0x200];
    }
    puVar10 = (ulong *)puVar12[1];
    plVar22 = plVar20;
    if (puVar10 != puVar15) {
      while( true ) {
        if (((puVar10[0x202] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x203]))
        goto LAB_100fc83d0;
        if (puVar10[0x201] == 0) break;
        puVar12[1] = puVar10[0x201];
        puVar10[0x200] = 0;
        puVar10[0x202] = 0;
        puVar10[0x201] = 0;
        lVar6 = *plVar20;
        puVar10[0x200] = *(long *)(lVar6 + 0x1000) + 0x20;
        plVar13 = (long *)(lVar6 + 0x1008);
        lVar6 = *plVar13;
        if (lVar6 == 0) {
          *plVar13 = (long)puVar10;
        }
        else {
          puVar10[0x200] = *(long *)(lVar6 + 0x1000) + 0x20;
          lVar11 = *(long *)(lVar6 + 0x1008);
          if (lVar11 == 0) {
            *(long *)(lVar6 + 0x1008) = (long)puVar10;
          }
          else {
            puVar10[0x200] = *(long *)(lVar11 + 0x1000) + 0x20;
            if (*(long *)(lVar11 + 0x1008) == 0) {
              *(long *)(lVar11 + 0x1008) = (long)puVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        puVar10 = (ulong *)puVar12[1];
        if (puVar10 == (ulong *)*puVar12) goto LAB_100fc83d0;
      }
      auVar27 = func_0x000108a07a20(&UNK_10b23a700);
      plVar20 = auVar27._0_8_;
      lVar6 = *plVar20;
      uVar17 = *(ulong *)(lVar6 + 0x100);
      while (uVar17 != (plVar20[2] & 0xffffffffffffffe0U)) {
        lVar6 = *(long *)(lVar6 + 0x108);
        if (lVar6 == 0) {
          return (ulong *)0x2;
        }
        *plVar20 = lVar6;
        InstructionSynchronizationBarrier();
        uVar17 = *(ulong *)(lVar6 + 0x100);
      }
      lVar11 = plVar20[1];
      if (lVar11 == lVar6) {
        uVar17 = *(ulong *)(lVar6 + 0x110);
        uVar7 = uVar17 >> (plVar20[2] & 0x1fU);
        goto joined_r0x000100fc85cc;
      }
      do {
        if (((*(ulong *)(lVar11 + 0x110) >> 0x20 & 1) == 0) ||
           ((ulong)plVar20[2] < *(ulong *)(lVar11 + 0x118))) break;
        if (*(long *)(lVar11 + 0x108) == 0) {
          auVar27 = func_0x000108a07a20(&UNK_10b23a700);
          plVar20 = auVar27._8_8_;
          puVar8 = auVar27._0_8_;
          puVar15 = (ulong *)*plVar20;
          uVar17 = puVar15[0xe0];
          goto joined_r0x000100fc8644;
        }
        plVar20[1] = *(long *)(lVar11 + 0x108);
        *(undefined8 *)(lVar11 + 0x108) = 0;
        *(undefined8 *)(lVar11 + 0x110) = 0;
        *(undefined8 *)(lVar11 + 0x100) = 0;
        lVar6 = *auVar27._8_8_;
        *(long *)(lVar11 + 0x100) = *(long *)(lVar6 + 0x100) + 0x20;
        plVar13 = (long *)(lVar6 + 0x108);
        lVar6 = *plVar13;
        if (lVar6 == 0) {
          *plVar13 = lVar11;
        }
        else {
          *(long *)(lVar11 + 0x100) = *(long *)(lVar6 + 0x100) + 0x20;
          lVar21 = *(long *)(lVar6 + 0x108);
          if (lVar21 == 0) {
            *(long *)(lVar6 + 0x108) = lVar11;
          }
          else {
            *(long *)(lVar11 + 0x100) = *(long *)(lVar21 + 0x100) + 0x20;
            if (*(long *)(lVar21 + 0x108) == 0) {
              *(long *)(lVar21 + 0x108) = lVar11;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar11 = plVar20[1];
      } while (lVar11 != *plVar20);
      uVar17 = *(ulong *)(*plVar20 + 0x110);
      uVar7 = uVar17 >> (plVar20[2] & 0x1fU);
joined_r0x000100fc85cc:
      if ((uVar7 & 1) == 0) {
        puVar15 = (ulong *)0x1;
        if ((uVar17 & 0x200000000) == 0) {
          puVar15 = (ulong *)0x2;
        }
        if (puVar15 == (ulong *)0x2) {
          return (ulong *)0x2;
        }
      }
      else {
        puVar15 = (ulong *)0x0;
      }
      if (((ulong)puVar15 & 1) == 0) {
        puVar15 = (ulong *)0x0;
        plVar20[2] = plVar20[2] + 1;
      }
      return puVar15;
    }
    goto LAB_100fc83d4;
  }
  uVar17 = puVar10[2] & 0x1f;
  uVar7 = puVar15[0x162];
  uVar18 = uVar7 >> uVar17;
  goto joined_r0x000100fc8278;
joined_r0x000100fc8644:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc8668;
  puVar15 = (ulong *)puVar15[0xe1];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc879c;
  *plVar20 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xe0];
  goto joined_r0x000100fc8644;
joined_r0x000100fc89e0:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc8a04;
  puVar15 = (ulong *)puVar15[0x1a1];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc8b48;
  *plVar22 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x1a0];
  goto joined_r0x000100fc89e0;
joined_r0x000100fc8ba4:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc8bc8;
  puVar15 = (ulong *)puVar15[0x1c1];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc8d00;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x1c0];
  goto joined_r0x000100fc8ba4;
joined_r0x000100fc8d60:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc8d88;
  puVar15 = (ulong *)puVar15[0x2a1];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc8ee0;
  *plVar22 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x2a0];
  goto joined_r0x000100fc8d60;
joined_r0x000100fc8f44:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc8f68;
  puVar15 = (ulong *)puVar15[0xa1];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc9090;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xa0];
  goto joined_r0x000100fc8f44;
joined_r0x000100fc90ec:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc9110;
  puVar15 = (ulong *)puVar15[0x161];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc9248;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x160];
  goto joined_r0x000100fc90ec;
LAB_100fc9110:
  puVar9 = (ulong *)puVar10[1];
  plVar22 = plVar20;
  if (puVar9 != puVar15) {
    while( true ) {
      if (((puVar9[0x162] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0x163])) goto LAB_100fc9228;
      if (puVar9[0x161] == 0) break;
      puVar10[1] = puVar9[0x161];
      puVar9[0x160] = 0;
      puVar9[0x162] = 0;
      puVar9[0x161] = 0;
      lVar6 = *plVar20;
      puVar9[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
      plVar13 = (long *)(lVar6 + 0xb08);
      lVar6 = *plVar13;
      if (lVar6 == 0) {
        *plVar13 = (long)puVar9;
      }
      else {
        puVar9[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0xb08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0xb08) = (long)puVar9;
        }
        else {
          puVar9[0x160] = *(long *)(lVar11 + 0xb00) + 0x20;
          if (*(long *)(lVar11 + 0xb08) == 0) {
            *(long *)(lVar11 + 0xb08) = (long)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
      if (puVar9 == (ulong *)*puVar10) goto LAB_100fc9228;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar12 = auVar27._8_8_;
    puVar8 = auVar27._0_8_;
    puVar15 = (ulong *)*puVar12;
    uVar17 = puVar15[0xf40];
    while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
      puVar15 = (ulong *)puVar15[0xf41];
      if (puVar15 == (ulong *)0x0) {
        uVar17 = 0x80000000000000a6;
        puVar10 = puVar8;
        goto LAB_100fc9414;
      }
      *puVar12 = puVar15;
      InstructionSynchronizationBarrier();
      uVar17 = puVar15[0xf40];
    }
    puVar10 = (ulong *)puVar12[1];
    plVar20 = plVar22;
    if (puVar10 != puVar15) {
      while( true ) {
        if (((puVar10[0xf42] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0xf43]))
        goto LAB_100fc9398;
        if (puVar10[0xf41] == 0) break;
        puVar12[1] = puVar10[0xf41];
        puVar10[0xf40] = 0;
        puVar10[0xf42] = 0;
        puVar10[0xf41] = 0;
        lVar6 = *plVar22;
        puVar10[0xf40] = *(long *)(lVar6 + 0x7a00) + 0x20;
        plVar13 = (long *)(lVar6 + 0x7a08);
        lVar6 = *plVar13;
        if (lVar6 == 0) {
          *plVar13 = (long)puVar10;
        }
        else {
          puVar10[0xf40] = *(long *)(lVar6 + 0x7a00) + 0x20;
          lVar11 = *(long *)(lVar6 + 0x7a08);
          if (lVar11 == 0) {
            *(long *)(lVar6 + 0x7a08) = (long)puVar10;
          }
          else {
            puVar10[0xf40] = *(long *)(lVar11 + 0x7a00) + 0x20;
            if (*(long *)(lVar11 + 0x7a08) == 0) {
              *(long *)(lVar11 + 0x7a08) = (long)puVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        puVar10 = (ulong *)puVar12[1];
        if (puVar10 == (ulong *)*puVar12) goto LAB_100fc9398;
      }
      auVar27 = func_0x000108a07a20(&UNK_10b23a700);
      puVar12 = auVar27._8_8_;
      puVar8 = auVar27._0_8_;
      puVar15 = (ulong *)*puVar12;
      uVar17 = puVar15[0x7e0];
      while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
        puVar15 = (ulong *)puVar15[0x7e1];
        if (puVar15 == (ulong *)0x0) {
          uVar17 = 0x8000000000000046;
          puVar10 = puVar8;
          goto LAB_100fc95d8;
        }
        *puVar12 = puVar15;
        InstructionSynchronizationBarrier();
        uVar17 = puVar15[0x7e0];
      }
      puVar10 = (ulong *)puVar12[1];
      plVar22 = plVar20;
      if (puVar10 != puVar15) {
        while( true ) {
          if (((puVar10[0x7e2] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x7e3]))
          goto LAB_100fc955c;
          if (puVar10[0x7e1] == 0) break;
          puVar12[1] = puVar10[0x7e1];
          puVar10[0x7e0] = 0;
          puVar10[0x7e2] = 0;
          puVar10[0x7e1] = 0;
          lVar6 = *plVar20;
          puVar10[0x7e0] = *(long *)(lVar6 + 0x3f00) + 0x20;
          plVar13 = (long *)(lVar6 + 0x3f08);
          lVar6 = *plVar13;
          if (lVar6 == 0) {
            *plVar13 = (long)puVar10;
          }
          else {
            puVar10[0x7e0] = *(long *)(lVar6 + 0x3f00) + 0x20;
            lVar11 = *(long *)(lVar6 + 0x3f08);
            if (lVar11 == 0) {
              *(long *)(lVar6 + 0x3f08) = (long)puVar10;
            }
            else {
              puVar10[0x7e0] = *(long *)(lVar11 + 0x3f00) + 0x20;
              if (*(long *)(lVar11 + 0x3f08) == 0) {
                *(long *)(lVar11 + 0x3f08) = (long)puVar10;
              }
              else {
                _free();
              }
            }
          }
          InstructionSynchronizationBarrier();
          puVar10 = (ulong *)puVar12[1];
          if (puVar10 == (ulong *)*puVar12) goto LAB_100fc955c;
        }
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar12 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar12;
        uVar17 = puVar15[0x1e0];
        while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
          puVar15 = (ulong *)puVar15[0x1e1];
          puVar10 = puVar8;
          if (puVar15 == (ulong *)0x0) goto LAB_100fc979c;
          *puVar12 = puVar15;
          InstructionSynchronizationBarrier();
          uVar17 = puVar15[0x1e0];
        }
        puVar10 = (ulong *)puVar12[1];
        plVar20 = plVar22;
        if (puVar10 != puVar15) {
          do {
            if (((puVar10[0x1e2] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x1e3])) break;
            if (puVar10[0x1e1] == 0) {
              auVar27 = func_0x000108a07a20(&UNK_10b23a700);
              plVar22 = auVar27._8_8_;
              puVar8 = auVar27._0_8_;
              puVar15 = (ulong *)*plVar22;
              uVar17 = puVar15[0xe0];
              goto joined_r0x000100fc97f4;
            }
            puVar12[1] = puVar10[0x1e1];
            puVar10[0x1e0] = 0;
            puVar10[0x1e2] = 0;
            puVar10[0x1e1] = 0;
            lVar6 = *plVar22;
            puVar10[0x1e0] = *(long *)(lVar6 + 0xf00) + 0x20;
            plVar13 = (long *)(lVar6 + 0xf08);
            lVar6 = *plVar13;
            if (lVar6 == 0) {
              *plVar13 = (long)puVar10;
            }
            else {
              puVar10[0x1e0] = *(long *)(lVar6 + 0xf00) + 0x20;
              lVar11 = *(long *)(lVar6 + 0xf08);
              if (lVar11 == 0) {
                *(long *)(lVar6 + 0xf08) = (long)puVar10;
              }
              else {
                puVar10[0x1e0] = *(long *)(lVar11 + 0xf00) + 0x20;
                if (*(long *)(lVar11 + 0xf08) == 0) {
                  *(long *)(lVar11 + 0xf08) = (long)puVar10;
                }
                else {
                  _free();
                }
              }
            }
            InstructionSynchronizationBarrier();
            puVar10 = (ulong *)puVar12[1];
          } while (puVar10 != (ulong *)*puVar12);
          puVar15 = (ulong *)*puVar12;
        }
        if ((puVar15[0x1e2] >> (puVar12[2] & 0x1f) & 1) != 0) {
          puVar15 = puVar15 + (puVar12[2] & 0x1f) * 0xf;
          uVar17 = puVar15[4];
          uVar18 = puVar15[7];
          uVar7 = puVar15[6];
          uVar26 = puVar15[1];
          uVar25 = *puVar15;
          uVar24 = puVar15[3];
          uVar23 = puVar15[2];
          puVar8[5] = puVar15[5];
          puVar8[4] = uVar17;
          puVar8[7] = uVar18;
          puVar8[6] = uVar7;
          puVar8[1] = uVar26;
          *puVar8 = uVar25;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
          uVar7 = puVar15[9];
          uVar17 = puVar15[8];
          uVar23 = puVar15[0xb];
          uVar18 = puVar15[10];
          uVar25 = puVar15[0xd];
          uVar24 = puVar15[0xc];
          puVar8[0xe] = puVar15[0xe];
          puVar8[0xb] = uVar23;
          puVar8[10] = uVar18;
          puVar8[0xd] = uVar25;
          puVar8[0xc] = uVar24;
          puVar8[9] = uVar7;
          puVar8[8] = uVar17;
          if ((*puVar8 & 0xfffffffffffffffe) == 0x8000000000000004) {
            return puVar10;
          }
          puVar12[2] = puVar12[2] + 1;
          return puVar10;
        }
        if ((puVar15[0x1e2] >> 0x21 & 1) != 0) {
          *puVar8 = 0x8000000000000004;
          return puVar10;
        }
LAB_100fc979c:
        *puVar8 = 0x8000000000000005;
        return puVar10;
      }
      goto LAB_100fc9560;
    }
    goto LAB_100fc939c;
  }
  uVar17 = puVar10[2] & 0x1f;
  uVar7 = puVar15[0x162];
  uVar18 = uVar7 >> uVar17;
  goto joined_r0x000100fc9240;
joined_r0x000100fc97f4:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc9818;
  puVar15 = (ulong *)puVar15[0xe1];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc994c;
  *plVar22 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xe0];
  goto joined_r0x000100fc97f4;
joined_r0x000100fc99a8:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc99cc;
  puVar15 = (ulong *)puVar15[0xe1];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc9b00;
  *plVar20 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0xe0];
  goto joined_r0x000100fc99a8;
joined_r0x000100fc9b60:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc9b88;
  puVar15 = (ulong *)puVar15[0x821];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc9ca4;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x820];
  goto joined_r0x000100fc9b60;
joined_r0x000100fc9e9c:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc9ec4;
  puVar15 = (ulong *)puVar15[0x841];
  puVar10 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fc9fe4;
  *plVar22 = (long)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x840];
  goto joined_r0x000100fc9e9c;
joined_r0x000100fca048:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fca070;
  puVar15 = (ulong *)puVar15[0x481];
  puVar9 = puVar8;
  if (puVar15 == (ulong *)0x0) goto LAB_100fca18c;
  *puVar10 = (ulong)puVar15;
  InstructionSynchronizationBarrier();
  uVar17 = puVar15[0x480];
  goto joined_r0x000100fca048;
LAB_100fc9c50:
  puVar15 = (ulong *)*puVar10;
  goto LAB_100fc9c54;
LAB_100fc877c:
  puVar15 = (ulong *)*plVar20;
  uVar17 = plVar20[2] & 0x1f;
  uVar7 = puVar15[0xe2];
  uVar18 = uVar7 >> uVar17;
  goto joined_r0x000100fc8794;
LAB_100fc72e4:
  puVar15 = (ulong *)*puVar12;
  goto LAB_100fc72e8;
LAB_100fc8d88:
  puVar10 = (ulong *)plVar22[1];
  plVar13 = plVar20;
  if (puVar10 != puVar15) {
    do {
      if (((puVar10[0x2a2] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x2a3])) break;
      if (puVar10[0x2a1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0xa0];
        goto joined_r0x000100fc8f44;
      }
      plVar22[1] = puVar10[0x2a1];
      puVar10[0x2a0] = 0;
      puVar10[0x2a2] = 0;
      puVar10[0x2a1] = 0;
      lVar6 = *plVar20;
      puVar10[0x2a0] = *(long *)(lVar6 + 0x1500) + 0x20;
      plVar1 = (long *)(lVar6 + 0x1508);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x2a0] = *(long *)(lVar6 + 0x1500) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x1508);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x1508) = (long)puVar10;
        }
        else {
          puVar10[0x2a0] = *(long *)(lVar11 + 0x1500) + 0x20;
          if (*(long *)(lVar11 + 0x1508) == 0) {
            *(long *)(lVar11 + 0x1508) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar15 = (ulong *)*plVar22;
  }
  if ((puVar15[0x2a2] >> (plVar22[2] & 0x1fU) & 1) != 0) {
    puVar15 = puVar15 + (plVar22[2] & 0x1fU) * 0x15;
    uVar7 = puVar15[1];
    uVar17 = *puVar15;
    uVar18 = puVar15[2];
    uVar24 = puVar15[5];
    uVar23 = puVar15[4];
    puVar8[3] = puVar15[3];
    puVar8[2] = uVar18;
    puVar8[5] = uVar24;
    puVar8[4] = uVar23;
    puVar8[1] = uVar7;
    *puVar8 = uVar17;
    uVar7 = puVar15[7];
    uVar17 = puVar15[6];
    uVar23 = puVar15[9];
    uVar18 = puVar15[8];
    uVar24 = puVar15[10];
    uVar26 = puVar15[0xd];
    uVar25 = puVar15[0xc];
    puVar8[0xb] = puVar15[0xb];
    puVar8[10] = uVar24;
    puVar8[0xd] = uVar26;
    puVar8[0xc] = uVar25;
    puVar8[7] = uVar7;
    puVar8[6] = uVar17;
    puVar8[9] = uVar23;
    puVar8[8] = uVar18;
    uVar7 = puVar15[0xf];
    uVar17 = puVar15[0xe];
    uVar23 = puVar15[0x11];
    uVar18 = puVar15[0x10];
    uVar25 = puVar15[0x13];
    uVar24 = puVar15[0x12];
    puVar8[0x14] = puVar15[0x14];
    puVar8[0x11] = uVar23;
    puVar8[0x10] = uVar18;
    puVar8[0x13] = uVar25;
    puVar8[0x12] = uVar24;
    puVar8[0xf] = uVar7;
    puVar8[0xe] = uVar17;
    if (*puVar8 + 0x7ffffffffffffffd < 2) {
      return puVar10;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar10;
  }
  if ((puVar15[0x2a2] >> 0x21 & 1) != 0) {
    uVar17 = 0x8000000000000003;
    goto LAB_100fc8ef0;
  }
LAB_100fc8ee0:
  uVar17 = 0x8000000000000004;
LAB_100fc8ef0:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc8f68:
  puVar9 = (ulong *)puVar10[1];
  plVar20 = plVar13;
  if (puVar9 == puVar15) {
    uVar17 = puVar10[2] & 0x1f;
    uVar7 = puVar15[0xa2];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar9[0xa2] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0xa3])) break;
      if (puVar9[0xa1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0x160];
        goto joined_r0x000100fc90ec;
      }
      puVar10[1] = puVar9[0xa1];
      puVar9[0xa0] = 0;
      puVar9[0xa2] = 0;
      puVar9[0xa1] = 0;
      lVar6 = *plVar13;
      puVar9[0xa0] = *(long *)(lVar6 + 0x500) + 0x20;
      plVar22 = (long *)(lVar6 + 0x508);
      lVar6 = *plVar22;
      if (lVar6 == 0) {
        *plVar22 = (long)puVar9;
      }
      else {
        puVar9[0xa0] = *(long *)(lVar6 + 0x500) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x508);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x508) = (long)puVar9;
        }
        else {
          puVar9[0xa0] = *(long *)(lVar11 + 0x500) + 0x20;
          if (*(long *)(lVar11 + 0x508) == 0) {
            *(long *)(lVar11 + 0x508) = (long)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
    } while (puVar9 != (ulong *)*puVar10);
    puVar15 = (ulong *)*puVar10;
    uVar17 = puVar10[2] & 0x1f;
    uVar7 = puVar15[0xa2];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 5;
    uVar23 = puVar15[1];
    uVar18 = *puVar15;
    uVar7 = puVar15[3];
    uVar17 = puVar15[2];
    puVar8[4] = puVar15[4];
    puVar8[1] = uVar23;
    *puVar8 = uVar18;
    puVar8[3] = uVar7;
    puVar8[2] = uVar17;
    if (1 < *puVar8) {
      return puVar9;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar9;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc909c;
  }
LAB_100fc9090:
  uVar17 = 3;
LAB_100fc909c:
  *puVar8 = uVar17;
  return puVar9;
LAB_100fc8bc8:
  puVar9 = (ulong *)puVar10[1];
  plVar20 = plVar13;
  if (puVar9 == puVar15) {
    uVar17 = puVar10[2] & 0x1f;
    uVar7 = puVar15[0x1c2];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar9[0x1c2] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0x1c3])) break;
      if (puVar9[0x1c1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar22;
        uVar17 = puVar15[0x2a0];
        goto joined_r0x000100fc8d60;
      }
      puVar10[1] = puVar9[0x1c1];
      puVar9[0x1c0] = 0;
      puVar9[0x1c2] = 0;
      puVar9[0x1c1] = 0;
      lVar6 = *plVar13;
      puVar9[0x1c0] = *(long *)(lVar6 + 0xe00) + 0x20;
      plVar22 = (long *)(lVar6 + 0xe08);
      lVar6 = *plVar22;
      if (lVar6 == 0) {
        *plVar22 = (long)puVar9;
      }
      else {
        puVar9[0x1c0] = *(long *)(lVar6 + 0xe00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0xe08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0xe08) = (long)puVar9;
        }
        else {
          puVar9[0x1c0] = *(long *)(lVar11 + 0xe00) + 0x20;
          if (*(long *)(lVar11 + 0xe08) == 0) {
            *(long *)(lVar11 + 0xe08) = (long)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
    } while (puVar9 != (ulong *)*puVar10);
    puVar15 = (ulong *)*puVar10;
    uVar17 = puVar10[2] & 0x1f;
    uVar7 = puVar15[0x1c2];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 0xe;
    uVar18 = puVar15[2];
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar24 = puVar15[1];
    uVar23 = *puVar15;
    puVar8[3] = puVar15[3];
    puVar8[2] = uVar18;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    puVar8[1] = uVar24;
    *puVar8 = uVar23;
    uVar7 = puVar15[7];
    uVar17 = puVar15[6];
    uVar23 = puVar15[9];
    uVar18 = puVar15[8];
    uVar24 = puVar15[10];
    uVar26 = puVar15[0xd];
    uVar25 = puVar15[0xc];
    puVar8[0xb] = puVar15[0xb];
    puVar8[10] = uVar24;
    puVar8[0xd] = uVar26;
    puVar8[0xc] = uVar25;
    puVar8[7] = uVar7;
    puVar8[6] = uVar17;
    puVar8[9] = uVar23;
    puVar8[8] = uVar18;
    if (1 < *puVar8) {
      return puVar9;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar9;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc8d0c;
  }
LAB_100fc8d00:
  uVar17 = 3;
LAB_100fc8d0c:
  *puVar8 = uVar17;
  return puVar9;
LAB_100fc9818:
  puVar10 = (ulong *)plVar22[1];
  plVar13 = plVar20;
  if (puVar10 == puVar15) {
    uVar17 = plVar22[2] & 0x1f;
    uVar7 = puVar15[0xe2];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0xe2] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0xe3])) break;
      if (puVar10[0xe1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar20 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar20;
        uVar17 = puVar15[0xe0];
        goto joined_r0x000100fc99a8;
      }
      plVar22[1] = puVar10[0xe1];
      puVar10[0xe0] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe1] = 0;
      lVar6 = *plVar20;
      puVar10[0xe0] = *(long *)(lVar6 + 0x700) + 0x20;
      plVar1 = (long *)(lVar6 + 0x708);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xe0] = *(long *)(lVar6 + 0x700) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x708);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x708) = (long)puVar10;
        }
        else {
          puVar10[0xe0] = *(long *)(lVar11 + 0x700) + 0x20;
          if (*(long *)(lVar11 + 0x708) == 0) {
            *(long *)(lVar11 + 0x708) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar15 = (ulong *)*plVar22;
    uVar17 = plVar22[2] & 0x1f;
    uVar7 = puVar15[0xe2];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 7;
    uVar23 = puVar15[3];
    uVar18 = puVar15[2];
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar25 = puVar15[1];
    uVar24 = *puVar15;
    puVar8[6] = puVar15[6];
    puVar8[3] = uVar23;
    puVar8[2] = uVar18;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    puVar8[1] = uVar25;
    *puVar8 = uVar24;
    if ((~(uint)*puVar8 & 6) == 0) {
      return puVar10;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 6;
    goto LAB_100fc9958;
  }
LAB_100fc994c:
  uVar17 = 7;
LAB_100fc9958:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc8a04:
  puVar10 = (ulong *)plVar22[1];
  plVar13 = plVar20;
  if (puVar10 == puVar15) {
    uVar17 = plVar22[2] & 0x1f;
    uVar7 = puVar15[0x1a2];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x1a2] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x1a3])) break;
      if (puVar10[0x1a1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0x1c0];
        goto joined_r0x000100fc8ba4;
      }
      plVar22[1] = puVar10[0x1a1];
      puVar10[0x1a0] = 0;
      puVar10[0x1a2] = 0;
      puVar10[0x1a1] = 0;
      lVar6 = *plVar20;
      puVar10[0x1a0] = *(long *)(lVar6 + 0xd00) + 0x20;
      plVar1 = (long *)(lVar6 + 0xd08);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x1a0] = *(long *)(lVar6 + 0xd00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0xd08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0xd08) = (long)puVar10;
        }
        else {
          puVar10[0x1a0] = *(long *)(lVar11 + 0xd00) + 0x20;
          if (*(long *)(lVar11 + 0xd08) == 0) {
            *(long *)(lVar11 + 0xd08) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar15 = (ulong *)*plVar22;
    uVar17 = plVar22[2] & 0x1f;
    uVar7 = puVar15[0x1a2];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 0xd;
    uVar18 = puVar15[2];
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar24 = puVar15[1];
    uVar23 = *puVar15;
    puVar8[3] = puVar15[3];
    puVar8[2] = uVar18;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    puVar8[1] = uVar24;
    *puVar8 = uVar23;
    uVar7 = puVar15[7];
    uVar17 = puVar15[6];
    uVar23 = puVar15[9];
    uVar18 = puVar15[8];
    uVar25 = puVar15[0xb];
    uVar24 = puVar15[10];
    puVar8[0xc] = puVar15[0xc];
    puVar8[9] = uVar23;
    puVar8[8] = uVar18;
    puVar8[0xb] = uVar25;
    puVar8[10] = uVar24;
    puVar8[7] = uVar7;
    puVar8[6] = uVar17;
    if (*puVar8 - 7 < 2) {
      return puVar10;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 7;
    goto LAB_100fc8b54;
  }
LAB_100fc8b48:
  uVar17 = 8;
LAB_100fc8b54:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc99cc:
  puVar10 = (ulong *)plVar20[1];
  plVar22 = plVar13;
  if (puVar10 == puVar15) {
    uVar17 = plVar20[2] & 0x1f;
    uVar7 = puVar15[0xe2];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0xe2] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[0xe3])) break;
      if (puVar10[0xe1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0x820];
        goto joined_r0x000100fc9b60;
      }
      plVar20[1] = puVar10[0xe1];
      puVar10[0xe0] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe1] = 0;
      lVar6 = *plVar13;
      puVar10[0xe0] = *(long *)(lVar6 + 0x700) + 0x20;
      plVar1 = (long *)(lVar6 + 0x708);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xe0] = *(long *)(lVar6 + 0x700) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x708);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x708) = (long)puVar10;
        }
        else {
          puVar10[0xe0] = *(long *)(lVar11 + 0x700) + 0x20;
          if (*(long *)(lVar11 + 0x708) == 0) {
            *(long *)(lVar11 + 0x708) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar20[1];
    } while (puVar10 != (ulong *)*plVar20);
    puVar15 = (ulong *)*plVar20;
    uVar17 = plVar20[2] & 0x1f;
    uVar7 = puVar15[0xe2];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 7;
    uVar23 = puVar15[3];
    uVar18 = puVar15[2];
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar25 = puVar15[1];
    uVar24 = *puVar15;
    puVar8[6] = puVar15[6];
    puVar8[3] = uVar23;
    puVar8[2] = uVar18;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    puVar8[1] = uVar25;
    *puVar8 = uVar24;
    if (*puVar8 - 7 < 2) {
      return puVar10;
    }
    plVar20[2] = plVar20[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 7;
    goto LAB_100fc9b0c;
  }
LAB_100fc9b00:
  uVar17 = 8;
LAB_100fc9b0c:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc7fa0:
  puVar10 = (ulong *)plVar22[1];
  plVar13 = plVar20;
  if (puVar10 != puVar15) {
    do {
      if (((puVar10[0xd42] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0xd43])) break;
      if (puVar10[0xd41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0x160];
        goto joined_r0x000100fc8120;
      }
      plVar22[1] = puVar10[0xd41];
      puVar10[0xd40] = 0;
      puVar10[0xd42] = 0;
      puVar10[0xd41] = 0;
      lVar6 = *plVar20;
      puVar10[0xd40] = *(long *)(lVar6 + 0x6a00) + 0x20;
      plVar1 = (long *)(lVar6 + 0x6a08);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xd40] = *(long *)(lVar6 + 0x6a00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x6a08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x6a08) = (long)puVar10;
        }
        else {
          puVar10[0xd40] = *(long *)(lVar11 + 0x6a00) + 0x20;
          if (*(long *)(lVar11 + 0x6a08) == 0) {
            *(long *)(lVar11 + 0x6a08) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar15 = (ulong *)*plVar22;
  }
  if ((puVar15[0xd42] >> (plVar22[2] & 0x1fU) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (plVar22[2] & 0x1fU) * 0x6a,0x350);
    if (*puVar8 - 0x15 < 2) {
      return puVar15;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar15;
  }
  if ((puVar15[0xd42] >> 0x21 & 1) != 0) {
    uVar17 = 0x15;
    goto LAB_100fc80cc;
  }
LAB_100fc80c0:
  uVar17 = 0x16;
LAB_100fc80cc:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc7e08:
  puVar10 = (ulong *)puVar12[1];
  plVar20 = plVar22;
  if (puVar10 == puVar15) {
    uVar17 = puVar12[2] & 0x1f;
    uVar7 = puVar15[0x42];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x42] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x43])) break;
      if (puVar10[0x41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar22;
        uVar17 = puVar15[0xd40];
        goto joined_r0x000100fc7f78;
      }
      puVar12[1] = puVar10[0x41];
      puVar10[0x40] = 0;
      puVar10[0x42] = 0;
      puVar10[0x41] = 0;
      lVar6 = *plVar22;
      puVar10[0x40] = *(long *)(lVar6 + 0x200) + 0x20;
      plVar13 = (long *)(lVar6 + 0x208);
      lVar6 = *plVar13;
      if (lVar6 == 0) {
        *plVar13 = (long)puVar10;
      }
      else {
        puVar10[0x40] = *(long *)(lVar6 + 0x200) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x208);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x208) = (long)puVar10;
        }
        else {
          puVar10[0x40] = *(long *)(lVar11 + 0x200) + 0x20;
          if (*(long *)(lVar11 + 0x208) == 0) {
            *(long *)(lVar11 + 0x208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)puVar12[1];
    } while (puVar10 != (ulong *)*puVar12);
    puVar15 = (ulong *)*puVar12;
    uVar17 = puVar12[2] & 0x1f;
    uVar7 = puVar15[0x42];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    uVar7 = puVar15[uVar17 * 2];
    *(ulong *)((long)puVar8 + 9) = (puVar15 + uVar17 * 2)[1];
    *(ulong *)((long)puVar8 + 1) = uVar7;
    *(undefined1 *)puVar8 = 0;
    puVar12[2] = puVar12[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar14 = 1;
    goto LAB_100fc7f24;
  }
LAB_100fc7f18:
  uVar14 = 2;
LAB_100fc7f24:
  *(undefined1 *)puVar8 = uVar14;
  return puVar10;
LAB_100fc9ec4:
  puVar10 = (ulong *)plVar22[1];
  plVar13 = plVar20;
  if (puVar10 != puVar15) {
    do {
      if (((puVar10[0x842] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x843])) break;
      if (puVar10[0x841] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0x480];
        goto joined_r0x000100fca048;
      }
      plVar22[1] = puVar10[0x841];
      puVar10[0x840] = 0;
      puVar10[0x842] = 0;
      puVar10[0x841] = 0;
      lVar6 = *plVar20;
      puVar10[0x840] = *(long *)(lVar6 + 0x4200) + 0x20;
      plVar1 = (long *)(lVar6 + 0x4208);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x840] = *(long *)(lVar6 + 0x4200) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x4208);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x4208) = (long)puVar10;
        }
        else {
          puVar10[0x840] = *(long *)(lVar11 + 0x4200) + 0x20;
          if (*(long *)(lVar11 + 0x4208) == 0) {
            *(long *)(lVar11 + 0x4208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar15 = (ulong *)*plVar22;
  }
  if ((puVar15[0x842] >> (plVar22[2] & 0x1fU) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (plVar22[2] & 0x1fU) * 0x42,0x210);
    if (*puVar8 - 3 < 2) {
      return puVar15;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar15;
  }
  if ((puVar15[0x842] >> 0x21 & 1) != 0) {
    uVar17 = 3;
    goto LAB_100fc9ff0;
  }
LAB_100fc9fe4:
  uVar17 = 4;
LAB_100fc9ff0:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc7c4c:
  puVar10 = (ulong *)plVar20[1];
  plVar22 = plVar13;
  if (puVar10 == puVar15) {
    uVar17 = plVar20[2] & 0x1f;
    uVar7 = puVar15[0x162];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x162] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[0x163])) break;
      if (puVar10[0x161] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar12 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar12;
        uVar17 = puVar15[0x40];
        goto joined_r0x000100fc7de4;
      }
      plVar20[1] = puVar10[0x161];
      puVar10[0x160] = 0;
      puVar10[0x162] = 0;
      puVar10[0x161] = 0;
      lVar6 = *plVar13;
      puVar10[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
      plVar1 = (long *)(lVar6 + 0xb08);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
        lVar11 = *(long *)(lVar6 + 0xb08);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0xb08) = (long)puVar10;
        }
        else {
          puVar10[0x160] = *(long *)(lVar11 + 0xb00) + 0x20;
          if (*(long *)(lVar11 + 0xb08) == 0) {
            *(long *)(lVar11 + 0xb08) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar20[1];
    } while (puVar10 != (ulong *)*plVar20);
    puVar15 = (ulong *)*plVar20;
    uVar17 = plVar20[2] & 0x1f;
    uVar7 = puVar15[0x162];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 0xb;
    uVar18 = *puVar15;
    uVar7 = puVar15[3];
    uVar17 = puVar15[2];
    puVar8[1] = puVar15[1];
    *puVar8 = uVar18;
    puVar8[3] = uVar7;
    puVar8[2] = uVar17;
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar23 = puVar15[7];
    uVar18 = puVar15[6];
    uVar25 = puVar15[9];
    uVar24 = puVar15[8];
    puVar8[10] = puVar15[10];
    puVar8[7] = uVar23;
    puVar8[6] = uVar18;
    puVar8[9] = uVar25;
    puVar8[8] = uVar24;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    if ((long)*puVar8 < -0x7ffffffffffffffe) {
      return puVar10;
    }
    plVar20[2] = plVar20[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 0x8000000000000000;
    goto LAB_100fc7d94;
  }
LAB_100fc7d88:
  uVar17 = 0x8000000000000001;
LAB_100fc7d94:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fca070:
  puVar9 = (ulong *)puVar10[1];
  plVar20 = plVar13;
  if (puVar9 != puVar15) {
    do {
      if (((puVar9[0x482] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0x483])) break;
      if (puVar9[0x481] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar8 = auVar27._0_8_;
        uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
        puVar15 = (ulong *)*puVar8;
        uVar17 = uVar7 - puVar15[0xd20];
        if (uVar17 == 0) {
          return puVar15;
        }
        bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
        do {
          puVar10 = (ulong *)puVar15[0xd21];
          if ((ulong *)puVar15[0xd21] == (ulong *)0x0) {
            uVar17 = puVar15[0xd20];
            puVar9 = (ulong *)_malloc(0x6920);
            if (puVar9 == (ulong *)0x0) {
              auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6920);
              puVar8 = auVar27._0_8_;
              uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
              puVar15 = (ulong *)*puVar8;
              uVar17 = uVar7 - puVar15[0x100];
              if (uVar17 == 0) {
                return puVar15;
              }
              bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
              do {
                puVar10 = (ulong *)puVar15[0x101];
                if ((ulong *)puVar15[0x101] == (ulong *)0x0) {
                  uVar17 = puVar15[0x100];
                  puVar9 = (ulong *)_malloc(0x820);
                  if (puVar9 == (ulong *)0x0) {
                    auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x820);
                    puVar8 = auVar27._0_8_;
                    uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                    puVar15 = (ulong *)*puVar8;
                    uVar17 = uVar7 - puVar15[0x7e0];
                    if (uVar17 == 0) {
                      return puVar15;
                    }
                    bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                    do {
                      puVar10 = (ulong *)puVar15[0x7e1];
                      if ((ulong *)puVar15[0x7e1] == (ulong *)0x0) {
                        uVar17 = puVar15[0x7e0];
                        puVar9 = (ulong *)_malloc(0x3f20);
                        if (puVar9 == (ulong *)0x0) {
                          auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                              (8,0x3f20);
                          puVar8 = auVar27._0_8_;
                          uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                          puVar15 = (ulong *)*puVar8;
                          uVar17 = uVar7 - puVar15[0x220];
                          if (uVar17 == 0) {
                            return puVar15;
                          }
                          bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                          do {
                            puVar10 = (ulong *)puVar15[0x221];
                            if ((ulong *)puVar15[0x221] == (ulong *)0x0) {
                              uVar17 = puVar15[0x220];
                              puVar9 = (ulong *)_malloc(0x1120);
                              if (puVar9 == (ulong *)0x0) {
                                auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                    (8,0x1120);
                                puVar8 = auVar27._0_8_;
                                uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                puVar15 = (ulong *)*puVar8;
                                uVar17 = uVar7 - puVar15[0x20];
                                if (uVar17 == 0) {
                                  return puVar15;
                                }
                                bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                do {
                                  puVar10 = (ulong *)puVar15[0x21];
                                  if ((ulong *)puVar15[0x21] == (ulong *)0x0) {
                                    uVar17 = puVar15[0x20];
                                    puVar9 = (ulong *)_malloc(0x120);
                                    if (puVar9 == (ulong *)0x0) {
                                      auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                          (8,0x120);
                                      puVar8 = auVar27._0_8_;
                                      uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                      puVar15 = (ulong *)*puVar8;
                                      uVar17 = uVar7 - puVar15[0x480];
                                      if (uVar17 == 0) {
                                        return puVar15;
                                      }
                                      bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                      do {
                                        puVar10 = (ulong *)puVar15[0x481];
                                        if ((ulong *)puVar15[0x481] == (ulong *)0x0) {
                                          uVar17 = puVar15[0x480];
                                          puVar9 = (ulong *)_malloc(0x2420);
                                          if (puVar9 == (ulong *)0x0) {
                                            auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x2420);
                                            puVar8 = auVar27._0_8_;
                                            uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                            puVar15 = (ulong *)*puVar8;
                                            uVar17 = uVar7 - puVar15[0xc40];
                                            if (uVar17 == 0) {
                                              return puVar15;
                                            }
                                            bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                            do {
                                              puVar10 = (ulong *)puVar15[0xc41];
                                              if ((ulong *)puVar15[0xc41] == (ulong *)0x0) {
                                                uVar17 = puVar15[0xc40];
                                                puVar9 = (ulong *)_malloc(0x6220);
                                                if (puVar9 == (ulong *)0x0) {
                                                  auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x6220);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0xc0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0xc1];
                                                    if ((ulong *)puVar15[0xc1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0xc0];
                                                      puVar9 = (ulong *)_malloc(0x620);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x620);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x1a0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x1a1];
                                                    if ((ulong *)puVar15[0x1a1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x1a0];
                                                      puVar9 = (ulong *)_malloc(0xd20);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xd20);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x820];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x821];
                                                    if ((ulong *)puVar15[0x821] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x820];
                                                      puVar9 = (ulong *)_malloc(0x4120);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x4120);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x2c0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x2c1];
                                                    if ((ulong *)puVar15[0x2c1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x2c0];
                                                      puVar9 = (ulong *)_malloc(0x1620);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1620);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x200];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x201];
                                                    if ((ulong *)puVar15[0x201] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x200];
                                                      puVar9 = (ulong *)_malloc(0x1020);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1020);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0xa0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0xa1];
                                                    if ((ulong *)puVar15[0xa1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0xa0];
                                                      puVar9 = (ulong *)_malloc(0x520);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x520);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0xd40];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0xd41];
                                                    if ((ulong *)puVar15[0xd41] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0xd40];
                                                      puVar9 = (ulong *)_malloc(0x6a20);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x6a20);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x2a0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x2a1];
                                                    if ((ulong *)puVar15[0x2a1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x2a0];
                                                      puVar9 = (ulong *)_malloc(0x1520);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1520);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[800];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x321];
                                                    if ((ulong *)puVar15[0x321] == (ulong *)0x0) {
                                                      uVar17 = puVar15[800];
                                                      puVar9 = (ulong *)_malloc(0x1920);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1920);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0xe0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0xe1];
                                                    if ((ulong *)puVar15[0xe1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0xe0];
                                                      puVar9 = (ulong *)_malloc(0x720);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x720);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x160];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x161];
                                                    if ((ulong *)puVar15[0x161] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x160];
                                                      puVar9 = (ulong *)_malloc(0xb20);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xb20);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x1c0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x1c1];
                                                    if ((ulong *)puVar15[0x1c1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x1c0];
                                                      puVar9 = (ulong *)_malloc(0xe20);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xe20);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x4a0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x4a1];
                                                    if ((ulong *)puVar15[0x4a1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x4a0];
                                                      puVar9 = (ulong *)_malloc(0x2520);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x2520);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x40];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x41];
                                                    if ((ulong *)puVar15[0x41] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x40];
                                                      puVar9 = (ulong *)_malloc(0x220);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x220);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x840];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x841];
                                                    if ((ulong *)puVar15[0x841] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x840];
                                                      puVar9 = (ulong *)_malloc(0x4220);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x4220);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x60];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x61];
                                                    if ((ulong *)puVar15[0x61] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x60];
                                                      puVar9 = (ulong *)_malloc(800);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,800);
                                                  puVar8 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar8;
                                                  uVar17 = uVar7 - puVar15[0x1e0];
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar15[0x1e1];
                                                    if ((ulong *)puVar15[0x1e1] == (ulong *)0x0) {
                                                      uVar17 = puVar15[0x1e0];
                                                      puVar9 = (ulong *)_malloc(0xf20);
                                                      if (puVar9 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xf20);
                                                  puVar12 = auVar27._0_8_;
                                                  uVar7 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar15 = (ulong *)*puVar12;
                                                  uVar17 = uVar7 - *puVar15;
                                                  if (uVar17 == 0) {
                                                    return puVar15;
                                                  }
                                                  bVar5 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar8 = (ulong *)puVar15[1];
                                                    if ((ulong *)puVar15[1] == (ulong *)0x0) {
                                                      uVar17 = *puVar15;
                                                      puVar10 = (ulong *)_malloc(0x20);
                                                      if (puVar10 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x20);
                                                  lVar6 = auVar27._8_8_;
                                                  puVar12 = auVar27._0_8_;
                                                  bVar3 = *(byte *)(lVar6 + 0x478);
                                                  if (bVar3 < 2) {
                                                    if (bVar3 == 0) {
                                                      plVar22 = *(long **)(lVar6 + 0x1f8);
                                                      *(undefined1 *)(lVar6 + 0x479) = 1;
                                                      _memcpy(lVar6 + 0x200,lVar6,0x1f8);
                                                      *(long **)(lVar6 + 0x3f8) = plVar22;
                                                      *(undefined1 *)(lVar6 + 0x470) = 0;
LAB_100fcc67c:
                                                      *(long **)(lVar6 + 0x400) = plVar22;
                                                      *(long **)(lVar6 + 0x408) = plVar22;
                                                      uVar17 = 1;
                                                      *(undefined8 *)(lVar6 + 0x410) = 1;
                                                      *(undefined1 *)(lVar6 + 0x428) = 0;
LAB_100fcc698:
                                                      *(long **)(lVar6 + 0x418) = plVar22;
                                                      *(ulong *)(lVar6 + 0x420) = uVar17;
                                                      lVar11 = *plVar22;
                                                      if (*(ulong *)(lVar11 + 0x1e8) < uVar17) {
LAB_100fcc6b0:
                                                        *(undefined1 *)(lVar6 + 0x428) = 1;
LAB_100fcc784:
                                                        *(undefined1 *)(lVar6 + 0x470) = 1;
                                                        *(undefined1 *)(lVar6 + 0x479) = 0;
                                                        uVar19 = *(undefined8 *)(lVar6 + 0x200);
                                                        _memcpy(auStack_10b0,lVar6 + 0x208,0x1f0);
                                                      }
                                                      else {
LAB_100fcc6f8:
                                                        uStack_12a0 = 0;
                                                        uStack_1298 = 0;
                                                        *(long *)(lVar6 + 0x430) = lVar11 + 0x1c0;
                                                        *(undefined8 *)(lVar6 + 0x438) = 0;
                                                        *(undefined8 *)(lVar6 + 0x450) = 0;
                                                        *(undefined8 *)(lVar6 + 0x448) = 0;
                                                        *(undefined8 *)(lVar6 + 0x440) = uStack_12a8
                                                        ;
                                                        *(ulong *)(lVar6 + 0x458) = uVar17;
                                                        *(ulong *)(lVar6 + 0x460) = uVar17;
                                                        *(undefined1 *)(lVar6 + 0x468) = 0;
LAB_100fcc720:
                                                        puVar15 = (ulong *)
                                                  __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                                                            (lVar6 + 0x430,plVar20);
                                                  if (((uint)puVar15 & 0xff) == 2) {
                                                    *(undefined1 *)(lVar6 + 0x428) = 4;
                                                    uVar14 = 3;
                                                    *(undefined1 *)(lVar6 + 0x470) = 3;
                                                    *puVar12 = 0x8000000000000045;
                                                    goto LAB_100fcc7c0;
                                                  }
                                                  __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                                                            (lVar6 + 0x430);
                                                  if (*(long *)(lVar6 + 0x438) != 0) {
                                                    (**(code **)(*(long *)(lVar6 + 0x438) + 0x18))
                                                              (*(undefined8 *)(lVar6 + 0x440));
                                                  }
                                                  *(undefined1 *)(lVar6 + 0x428) = 1;
                                                  if (((ulong)puVar15 & 1) != 0) goto LAB_100fcc784;
                                                  plVar20 = *(long **)(lVar6 + 0x400);
                                                  *(undefined1 *)(lVar6 + 0x470) = 1;
                                                  *(undefined1 *)(lVar6 + 0x479) = 0;
                                                  _memcpy(&uStack_12a8,lVar6 + 0x200,0x1f8);
                                                  lVar21 = *plVar20;
                                                  LOAcquire();
                                                  uVar17 = *(ulong *)(lVar21 + 0x88);
                                                  *(ulong *)(lVar21 + 0x88) = uVar17 + 1;
                                                  lVar11 = FUN_100fca4a4(lVar21 + 0x80,uVar17);
                                                  _memcpy(lVar11 + (uVar17 & 0x1f) * 0x1f8,
                                                          &uStack_12a8,0x1f8);
                                                  *(ulong *)(lVar11 + 0x3f10) =
                                                       *(ulong *)(lVar11 + 0x3f10) |
                                                       1L << (uVar17 & 0x1f);
                                                  LORelease();
                                                  puVar15 = (ulong *)(lVar21 + 0x110);
                                                  LOAcquire();
                                                  uVar17 = *puVar15;
                                                  *puVar15 = uVar17 | 2;
                                                  LORelease();
                                                  if (uVar17 == 0) {
                                                    lVar11 = *(long *)(lVar21 + 0x100);
                                                    *(undefined8 *)(lVar21 + 0x100) = 0;
                                                    *puVar15 = in_xzr;
                                                    LORelease();
                                                    if (lVar11 != 0) {
                                                      (**(code **)(lVar11 + 8))
                                                                (*(undefined8 *)(lVar21 + 0x108));
                                                    }
                                                  }
                                                  uVar19 = 0x8000000000000044;
                                                  }
                                                  *(undefined1 *)(lVar6 + 0x479) = 0;
                                                  *puVar12 = uVar19;
                                                  puVar15 = (ulong *)_memcpy(puVar12 + 1,
                                                                             auStack_10b0,0x1f0);
                                                  uVar14 = 1;
LAB_100fcc7c0:
                                                  *(undefined1 *)(lVar6 + 0x478) = uVar14;
                                                  return puVar15;
                                                  }
                                                  func_0x000108a07af4(&UNK_10b23a730);
LAB_100fcc898:
                                                  func_0x000108a07b10(&UNK_10b23a730);
                                                  }
                                                  else {
                                                    if (bVar3 != 3) goto LAB_100fcc898;
                                                    bVar3 = *(byte *)(lVar6 + 0x470);
                                                    if (1 < bVar3) {
                                                      if (bVar3 != 3) {
                                                        func_0x000108a07b10(&UNK_10b23a748);
                                                        goto LAB_100fcc8e8;
                                                      }
                                                      bVar3 = *(byte *)(lVar6 + 0x428);
                                                      if (bVar3 < 3) {
                                                        if (bVar3 != 0) {
                                                          if (bVar3 == 1) {
                                                            func_0x000108a07af4(&UNK_10b23a718);
                                                          }
                                                          else {
                                                            func_0x000108a07b10(&UNK_10b23a718);
                                                          }
                                                          goto LAB_100fcc8e8;
                                                        }
                                                        plVar22 = *(long **)(lVar6 + 0x408);
                                                        uVar17 = *(ulong *)(lVar6 + 0x410);
                                                        goto LAB_100fcc698;
                                                      }
                                                      if (bVar3 != 3) goto LAB_100fcc720;
                                                      uVar17 = *(ulong *)(lVar6 + 0x420);
                                                      lVar11 = **(long **)(lVar6 + 0x418);
                                                      if (uVar17 <= *(ulong *)(lVar11 + 0x1e8))
                                                      goto LAB_100fcc6f8;
                                                      goto LAB_100fcc6b0;
                                                    }
                                                    if (bVar3 == 0) {
                                                      plVar22 = *(long **)(lVar6 + 0x3f8);
                                                      goto LAB_100fcc67c;
                                                    }
                                                  }
                                                  func_0x000108a07af4(&UNK_10b23a748);
LAB_100fcc8e8:
                    /* WARNING: Does not return */
                                                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100fcc8ec)
                                                  ;
                                                  (*pcVar4)();
                                                  }
                                                  *puVar10 = uVar17 + 0x20;
                                                  puVar10[1] = 0;
                                                  puVar10[2] = 0;
                                                  puVar10[3] = 0;
                                                  puVar8 = (ulong *)puVar15[1];
                                                  if (puVar8 == (ulong *)0x0) {
                                                    puVar15[1] = (ulong)puVar10;
                                                    puVar8 = puVar10;
                                                  }
                                                  else {
                                                    *puVar10 = *puVar8 + 0x20;
                                                    plVar22 = (long *)puVar8[1];
                                                    if (plVar22 == (long *)0x0) {
                                                      puVar8[1] = (ulong)puVar10;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        plVar13 = plVar22 + 1;
                                                        *puVar10 = *plVar22 + 0x20;
                                                        plVar22 = (long *)*plVar13;
                                                      } while (plVar22 != (long *)0x0);
                                                      *plVar13 = (long)puVar10;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[2] == -1)) &&
                                                     ((ulong *)*puVar12 == puVar15)) {
                                                    *puVar12 = puVar8;
                                                    uVar17 = puVar12[1];
                                                    puVar12[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[3] = uVar17;
                                                    puVar15[2] = puVar15[2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = *puVar8;
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = *puVar8;
                                                  }
                                                  puVar15 = puVar8;
                                                  if (uVar17 == uVar7) {
                                                    return puVar8;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x1e0] = uVar17 + 0x20;
                                                  puVar9[0x1e1] = 0;
                                                  puVar9[0x1e3] = 0;
                                                  puVar9[0x1e2] = 0;
                                                  puVar10 = (ulong *)puVar15[0x1e1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x1e1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x1e0] = puVar10[0x1e0] + 0x20;
                                                    uVar17 = puVar10[0x1e1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x1e1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x1e0] =
                                                             *(long *)(uVar17 + 0xf00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xf08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x1e2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x1e3] = uVar17;
                                                    puVar15[0x1e2] = puVar15[0x1e2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1e0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1e0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x60] = uVar17 + 0x20;
                                                  puVar9[0x61] = 0;
                                                  puVar9[99] = 0;
                                                  puVar9[0x62] = 0;
                                                  puVar10 = (ulong *)puVar15[0x61];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x61] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x60] = puVar10[0x60] + 0x20;
                                                    uVar17 = puVar10[0x61];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x61] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x60] = *(long *)(uVar17 + 0x300) +
                                                                       0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x308);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x62] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[99] = uVar17;
                                                    puVar15[0x62] = puVar15[0x62] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x60];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x60];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x840] = uVar17 + 0x20;
                                                  puVar9[0x841] = 0;
                                                  puVar9[0x843] = 0;
                                                  puVar9[0x842] = 0;
                                                  puVar10 = (ulong *)puVar15[0x841];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x841] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x840] = puVar10[0x840] + 0x20;
                                                    uVar17 = puVar10[0x841];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x841] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x840] =
                                                             *(long *)(uVar17 + 0x4200) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x4208);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x842] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x843] = uVar17;
                                                    puVar15[0x842] = puVar15[0x842] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x840];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x840];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x40] = uVar17 + 0x20;
                                                  puVar9[0x41] = 0;
                                                  puVar9[0x43] = 0;
                                                  puVar9[0x42] = 0;
                                                  puVar10 = (ulong *)puVar15[0x41];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x41] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x40] = puVar10[0x40] + 0x20;
                                                    uVar17 = puVar10[0x41];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x41] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x40] = *(long *)(uVar17 + 0x200) +
                                                                       0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x208);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x42] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x43] = uVar17;
                                                    puVar15[0x42] = puVar15[0x42] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x40];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x40];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x4a0] = uVar17 + 0x20;
                                                  puVar9[0x4a1] = 0;
                                                  puVar9[0x4a3] = 0;
                                                  puVar9[0x4a2] = 0;
                                                  puVar10 = (ulong *)puVar15[0x4a1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x4a1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x4a0] = puVar10[0x4a0] + 0x20;
                                                    uVar17 = puVar10[0x4a1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x4a1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x4a0] =
                                                             *(long *)(uVar17 + 0x2500) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x2508);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x4a2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x4a3] = uVar17;
                                                    puVar15[0x4a2] = puVar15[0x4a2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x4a0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x4a0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x1c0] = uVar17 + 0x20;
                                                  puVar9[0x1c1] = 0;
                                                  puVar9[0x1c3] = 0;
                                                  puVar9[0x1c2] = 0;
                                                  puVar10 = (ulong *)puVar15[0x1c1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x1c1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x1c0] = puVar10[0x1c0] + 0x20;
                                                    uVar17 = puVar10[0x1c1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x1c1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x1c0] =
                                                             *(long *)(uVar17 + 0xe00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xe08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x1c2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x1c3] = uVar17;
                                                    puVar15[0x1c2] = puVar15[0x1c2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1c0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1c0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x160] = uVar17 + 0x20;
                                                  puVar9[0x161] = 0;
                                                  puVar9[0x163] = 0;
                                                  puVar9[0x162] = 0;
                                                  puVar10 = (ulong *)puVar15[0x161];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x161] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x160] = puVar10[0x160] + 0x20;
                                                    uVar17 = puVar10[0x161];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x161] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x160] =
                                                             *(long *)(uVar17 + 0xb00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xb08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x162] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x163] = uVar17;
                                                    puVar15[0x162] = puVar15[0x162] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x160];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x160];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0xe0] = uVar17 + 0x20;
                                                  puVar9[0xe1] = 0;
                                                  puVar9[0xe3] = 0;
                                                  puVar9[0xe2] = 0;
                                                  puVar10 = (ulong *)puVar15[0xe1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0xe1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0xe0] = puVar10[0xe0] + 0x20;
                                                    uVar17 = puVar10[0xe1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xe1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0xe0] = *(long *)(uVar17 + 0x700) +
                                                                       0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x708);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0xe2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0xe3] = uVar17;
                                                    puVar15[0xe2] = puVar15[0xe2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xe0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xe0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[800] = uVar17 + 0x20;
                                                  puVar9[0x321] = 0;
                                                  puVar9[0x323] = 0;
                                                  puVar9[0x322] = 0;
                                                  puVar10 = (ulong *)puVar15[0x321];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x321] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[800] = puVar10[800] + 0x20;
                                                    uVar17 = puVar10[0x321];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x321] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[800] = *(long *)(uVar17 + 0x1900) +
                                                                      0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1908);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x322] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x323] = uVar17;
                                                    puVar15[0x322] = puVar15[0x322] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[800];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[800];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x2a0] = uVar17 + 0x20;
                                                  puVar9[0x2a1] = 0;
                                                  puVar9[0x2a3] = 0;
                                                  puVar9[0x2a2] = 0;
                                                  puVar10 = (ulong *)puVar15[0x2a1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x2a1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x2a0] = puVar10[0x2a0] + 0x20;
                                                    uVar17 = puVar10[0x2a1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x2a1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x2a0] =
                                                             *(long *)(uVar17 + 0x1500) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1508);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x2a2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x2a3] = uVar17;
                                                    puVar15[0x2a2] = puVar15[0x2a2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2a0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2a0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0xd40] = uVar17 + 0x20;
                                                  puVar9[0xd41] = 0;
                                                  puVar9[0xd43] = 0;
                                                  puVar9[0xd42] = 0;
                                                  puVar10 = (ulong *)puVar15[0xd41];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0xd41] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0xd40] = puVar10[0xd40] + 0x20;
                                                    uVar17 = puVar10[0xd41];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xd41] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0xd40] =
                                                             *(long *)(uVar17 + 0x6a00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x6a08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0xd42] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0xd43] = uVar17;
                                                    puVar15[0xd42] = puVar15[0xd42] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xd40];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xd40];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0xa0] = uVar17 + 0x20;
                                                  puVar9[0xa1] = 0;
                                                  puVar9[0xa3] = 0;
                                                  puVar9[0xa2] = 0;
                                                  puVar10 = (ulong *)puVar15[0xa1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0xa1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0xa0] = puVar10[0xa0] + 0x20;
                                                    uVar17 = puVar10[0xa1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xa1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0xa0] = *(long *)(uVar17 + 0x500) +
                                                                       0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x508);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0xa2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0xa3] = uVar17;
                                                    puVar15[0xa2] = puVar15[0xa2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xa0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xa0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x200] = uVar17 + 0x20;
                                                  puVar9[0x201] = 0;
                                                  puVar9[0x203] = 0;
                                                  puVar9[0x202] = 0;
                                                  puVar10 = (ulong *)puVar15[0x201];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x201] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x200] = puVar10[0x200] + 0x20;
                                                    uVar17 = puVar10[0x201];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x201] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x200] =
                                                             *(long *)(uVar17 + 0x1000) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1008);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x202] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x203] = uVar17;
                                                    puVar15[0x202] = puVar15[0x202] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x200];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x200];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x2c0] = uVar17 + 0x20;
                                                  puVar9[0x2c1] = 0;
                                                  puVar9[0x2c3] = 0;
                                                  puVar9[0x2c2] = 0;
                                                  puVar10 = (ulong *)puVar15[0x2c1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x2c1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x2c0] = puVar10[0x2c0] + 0x20;
                                                    uVar17 = puVar10[0x2c1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x2c1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x2c0] =
                                                             *(long *)(uVar17 + 0x1600) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1608);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x2c2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x2c3] = uVar17;
                                                    puVar15[0x2c2] = puVar15[0x2c2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2c0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2c0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x820] = uVar17 + 0x20;
                                                  puVar9[0x821] = 0;
                                                  puVar9[0x823] = 0;
                                                  puVar9[0x822] = 0;
                                                  puVar10 = (ulong *)puVar15[0x821];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x821] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x820] = puVar10[0x820] + 0x20;
                                                    uVar17 = puVar10[0x821];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x821] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x820] =
                                                             *(long *)(uVar17 + 0x4100) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x4108);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x822] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x823] = uVar17;
                                                    puVar15[0x822] = puVar15[0x822] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x820];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x820];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0x1a0] = uVar17 + 0x20;
                                                  puVar9[0x1a1] = 0;
                                                  puVar9[0x1a3] = 0;
                                                  puVar9[0x1a2] = 0;
                                                  puVar10 = (ulong *)puVar15[0x1a1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0x1a1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0x1a0] = puVar10[0x1a0] + 0x20;
                                                    uVar17 = puVar10[0x1a1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x1a1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0x1a0] =
                                                             *(long *)(uVar17 + 0xd00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xd08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0x1a2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0x1a3] = uVar17;
                                                    puVar15[0x1a2] = puVar15[0x1a2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1a0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1a0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar9[0xc0] = uVar17 + 0x20;
                                                  puVar9[0xc1] = 0;
                                                  puVar9[0xc3] = 0;
                                                  puVar9[0xc2] = 0;
                                                  puVar10 = (ulong *)puVar15[0xc1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar15[0xc1] = (ulong)puVar9;
                                                    puVar10 = puVar9;
                                                  }
                                                  else {
                                                    puVar9[0xc0] = puVar10[0xc0] + 0x20;
                                                    uVar17 = puVar10[0xc1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xc1] = (ulong)puVar9;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar9[0xc0] = *(long *)(uVar17 + 0x600) +
                                                                       0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x608);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar9;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar5 & (int)puVar15[0xc2] == -1)) &&
                                                     ((ulong *)*puVar8 == puVar15)) {
                                                    *puVar8 = (ulong)puVar10;
                                                    uVar17 = puVar8[1];
                                                    puVar8[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar15[0xc3] = uVar17;
                                                    puVar15[0xc2] = puVar15[0xc2] | 0x100000000;
                                                    LORelease();
                                                    bVar5 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xc0];
                                                  }
                                                  else {
                                                    bVar5 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xc0];
                                                  }
                                                  puVar15 = puVar10;
                                                  if (uVar17 == uVar7) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                }
                                                puVar9[0xc40] = uVar17 + 0x20;
                                                puVar9[0xc41] = 0;
                                                puVar9[0xc43] = 0;
                                                puVar9[0xc42] = 0;
                                                puVar10 = (ulong *)puVar15[0xc41];
                                                if (puVar10 == (ulong *)0x0) {
                                                  puVar15[0xc41] = (ulong)puVar9;
                                                  puVar10 = puVar9;
                                                }
                                                else {
                                                  puVar9[0xc40] = puVar10[0xc40] + 0x20;
                                                  uVar17 = puVar10[0xc41];
                                                  if (uVar17 == 0) {
                                                    puVar10[0xc41] = (ulong)puVar9;
                                                  }
                                                  else {
                                                    do {
                                                      InstructionSynchronizationBarrier();
                                                      puVar9[0xc40] =
                                                           *(long *)(uVar17 + 0x6200) + 0x20;
                                                      puVar2 = (ulong *)(uVar17 + 0x6208);
                                                      uVar17 = *puVar2;
                                                    } while (uVar17 != 0);
                                                    *puVar2 = (ulong)puVar9;
                                                  }
                                                }
                                              }
                                              if (((bool)(bVar5 & (int)puVar15[0xc42] == -1)) &&
                                                 ((ulong *)*puVar8 == puVar15)) {
                                                *puVar8 = (ulong)puVar10;
                                                uVar17 = puVar8[1];
                                                puVar8[1] = uVar17 | in_xzr;
                                                LORelease();
                                                puVar15[0xc43] = uVar17;
                                                puVar15[0xc42] = puVar15[0xc42] | 0x100000000;
                                                LORelease();
                                                bVar5 = true;
                                                InstructionSynchronizationBarrier();
                                                uVar17 = puVar10[0xc40];
                                              }
                                              else {
                                                bVar5 = false;
                                                InstructionSynchronizationBarrier();
                                                uVar17 = puVar10[0xc40];
                                              }
                                              puVar15 = puVar10;
                                              if (uVar17 == uVar7) {
                                                return puVar10;
                                              }
                                            } while( true );
                                          }
                                          puVar9[0x480] = uVar17 + 0x20;
                                          puVar9[0x481] = 0;
                                          puVar9[0x483] = 0;
                                          puVar9[0x482] = 0;
                                          puVar10 = (ulong *)puVar15[0x481];
                                          if (puVar10 == (ulong *)0x0) {
                                            puVar15[0x481] = (ulong)puVar9;
                                            puVar10 = puVar9;
                                          }
                                          else {
                                            puVar9[0x480] = puVar10[0x480] + 0x20;
                                            uVar17 = puVar10[0x481];
                                            if (uVar17 == 0) {
                                              puVar10[0x481] = (ulong)puVar9;
                                            }
                                            else {
                                              do {
                                                InstructionSynchronizationBarrier();
                                                puVar9[0x480] = *(long *)(uVar17 + 0x2400) + 0x20;
                                                puVar2 = (ulong *)(uVar17 + 0x2408);
                                                uVar17 = *puVar2;
                                              } while (uVar17 != 0);
                                              *puVar2 = (ulong)puVar9;
                                            }
                                          }
                                        }
                                        if (((bool)(bVar5 & (int)puVar15[0x482] == -1)) &&
                                           ((ulong *)*puVar8 == puVar15)) {
                                          *puVar8 = (ulong)puVar10;
                                          uVar17 = puVar8[1];
                                          puVar8[1] = uVar17 | in_xzr;
                                          LORelease();
                                          puVar15[0x483] = uVar17;
                                          puVar15[0x482] = puVar15[0x482] | 0x100000000;
                                          LORelease();
                                          bVar5 = true;
                                          InstructionSynchronizationBarrier();
                                          uVar17 = puVar10[0x480];
                                        }
                                        else {
                                          bVar5 = false;
                                          InstructionSynchronizationBarrier();
                                          uVar17 = puVar10[0x480];
                                        }
                                        puVar15 = puVar10;
                                        if (uVar17 == uVar7) {
                                          return puVar10;
                                        }
                                      } while( true );
                                    }
                                    puVar9[0x20] = uVar17 + 0x20;
                                    puVar9[0x21] = 0;
                                    puVar9[0x22] = 0;
                                    puVar9[0x23] = 0;
                                    puVar10 = (ulong *)puVar15[0x21];
                                    if (puVar10 == (ulong *)0x0) {
                                      puVar15[0x21] = (ulong)puVar9;
                                      puVar10 = puVar9;
                                    }
                                    else {
                                      puVar9[0x20] = puVar10[0x20] + 0x20;
                                      uVar17 = puVar10[0x21];
                                      if (uVar17 == 0) {
                                        puVar10[0x21] = (ulong)puVar9;
                                      }
                                      else {
                                        do {
                                          InstructionSynchronizationBarrier();
                                          puVar9[0x20] = *(long *)(uVar17 + 0x100) + 0x20;
                                          puVar2 = (ulong *)(uVar17 + 0x108);
                                          uVar17 = *puVar2;
                                        } while (uVar17 != 0);
                                        *puVar2 = (ulong)puVar9;
                                      }
                                    }
                                  }
                                  if (((bool)(bVar5 & (int)puVar15[0x22] == -1)) &&
                                     ((ulong *)*puVar8 == puVar15)) {
                                    *puVar8 = (ulong)puVar10;
                                    uVar17 = puVar8[1];
                                    puVar8[1] = uVar17 | in_xzr;
                                    LORelease();
                                    puVar15[0x23] = uVar17;
                                    puVar15[0x22] = puVar15[0x22] | 0x100000000;
                                    LORelease();
                                    bVar5 = true;
                                    InstructionSynchronizationBarrier();
                                    uVar17 = puVar10[0x20];
                                  }
                                  else {
                                    bVar5 = false;
                                    InstructionSynchronizationBarrier();
                                    uVar17 = puVar10[0x20];
                                  }
                                  puVar15 = puVar10;
                                  if (uVar17 == uVar7) {
                                    return puVar10;
                                  }
                                } while( true );
                              }
                              puVar9[0x220] = uVar17 + 0x20;
                              puVar9[0x221] = 0;
                              puVar9[0x223] = 0;
                              puVar9[0x222] = 0;
                              puVar10 = (ulong *)puVar15[0x221];
                              if (puVar10 == (ulong *)0x0) {
                                puVar15[0x221] = (ulong)puVar9;
                                puVar10 = puVar9;
                              }
                              else {
                                puVar9[0x220] = puVar10[0x220] + 0x20;
                                uVar17 = puVar10[0x221];
                                if (uVar17 == 0) {
                                  puVar10[0x221] = (ulong)puVar9;
                                }
                                else {
                                  do {
                                    InstructionSynchronizationBarrier();
                                    puVar9[0x220] = *(long *)(uVar17 + 0x1100) + 0x20;
                                    puVar2 = (ulong *)(uVar17 + 0x1108);
                                    uVar17 = *puVar2;
                                  } while (uVar17 != 0);
                                  *puVar2 = (ulong)puVar9;
                                }
                              }
                            }
                            if (((bool)(bVar5 & (int)puVar15[0x222] == -1)) &&
                               ((ulong *)*puVar8 == puVar15)) {
                              *puVar8 = (ulong)puVar10;
                              uVar17 = puVar8[1];
                              puVar8[1] = uVar17 | in_xzr;
                              LORelease();
                              puVar15[0x223] = uVar17;
                              puVar15[0x222] = puVar15[0x222] | 0x100000000;
                              LORelease();
                              bVar5 = true;
                              InstructionSynchronizationBarrier();
                              uVar17 = puVar10[0x220];
                            }
                            else {
                              bVar5 = false;
                              InstructionSynchronizationBarrier();
                              uVar17 = puVar10[0x220];
                            }
                            puVar15 = puVar10;
                            if (uVar17 == uVar7) {
                              return puVar10;
                            }
                          } while( true );
                        }
                        puVar9[0x7e0] = uVar17 + 0x20;
                        puVar9[0x7e1] = 0;
                        puVar9[0x7e3] = 0;
                        puVar9[0x7e2] = 0;
                        puVar10 = (ulong *)puVar15[0x7e1];
                        if (puVar10 == (ulong *)0x0) {
                          puVar15[0x7e1] = (ulong)puVar9;
                          puVar10 = puVar9;
                        }
                        else {
                          puVar9[0x7e0] = puVar10[0x7e0] + 0x20;
                          uVar17 = puVar10[0x7e1];
                          if (uVar17 == 0) {
                            puVar10[0x7e1] = (ulong)puVar9;
                          }
                          else {
                            do {
                              InstructionSynchronizationBarrier();
                              puVar9[0x7e0] = *(long *)(uVar17 + 0x3f00) + 0x20;
                              puVar2 = (ulong *)(uVar17 + 0x3f08);
                              uVar17 = *puVar2;
                            } while (uVar17 != 0);
                            *puVar2 = (ulong)puVar9;
                          }
                        }
                      }
                      if (((bool)(bVar5 & (int)puVar15[0x7e2] == -1)) &&
                         ((ulong *)*puVar8 == puVar15)) {
                        *puVar8 = (ulong)puVar10;
                        uVar17 = puVar8[1];
                        puVar8[1] = uVar17 | in_xzr;
                        LORelease();
                        puVar15[0x7e3] = uVar17;
                        puVar15[0x7e2] = puVar15[0x7e2] | 0x100000000;
                        LORelease();
                        bVar5 = true;
                        InstructionSynchronizationBarrier();
                        uVar17 = puVar10[0x7e0];
                      }
                      else {
                        bVar5 = false;
                        InstructionSynchronizationBarrier();
                        uVar17 = puVar10[0x7e0];
                      }
                      puVar15 = puVar10;
                      if (uVar17 == uVar7) {
                        return puVar10;
                      }
                    } while( true );
                  }
                  puVar9[0x100] = uVar17 + 0x20;
                  puVar9[0x101] = 0;
                  puVar9[0x103] = 0;
                  puVar9[0x102] = 0;
                  puVar10 = (ulong *)puVar15[0x101];
                  if (puVar10 == (ulong *)0x0) {
                    puVar15[0x101] = (ulong)puVar9;
                    puVar10 = puVar9;
                  }
                  else {
                    puVar9[0x100] = puVar10[0x100] + 0x20;
                    uVar17 = puVar10[0x101];
                    if (uVar17 == 0) {
                      puVar10[0x101] = (ulong)puVar9;
                    }
                    else {
                      do {
                        InstructionSynchronizationBarrier();
                        puVar9[0x100] = *(long *)(uVar17 + 0x800) + 0x20;
                        puVar2 = (ulong *)(uVar17 + 0x808);
                        uVar17 = *puVar2;
                      } while (uVar17 != 0);
                      *puVar2 = (ulong)puVar9;
                    }
                  }
                }
                if (((bool)(bVar5 & (int)puVar15[0x102] == -1)) && ((ulong *)*puVar8 == puVar15)) {
                  *puVar8 = (ulong)puVar10;
                  uVar17 = puVar8[1];
                  puVar8[1] = uVar17 | in_xzr;
                  LORelease();
                  puVar15[0x103] = uVar17;
                  puVar15[0x102] = puVar15[0x102] | 0x100000000;
                  LORelease();
                  bVar5 = true;
                  InstructionSynchronizationBarrier();
                  uVar17 = puVar10[0x100];
                }
                else {
                  bVar5 = false;
                  InstructionSynchronizationBarrier();
                  uVar17 = puVar10[0x100];
                }
                puVar15 = puVar10;
                if (uVar17 == uVar7) {
                  return puVar10;
                }
              } while( true );
            }
            puVar9[0xd20] = uVar17 + 0x20;
            puVar9[0xd21] = 0;
            puVar9[0xd23] = 0;
            puVar9[0xd22] = 0;
            puVar10 = (ulong *)puVar15[0xd21];
            if (puVar10 == (ulong *)0x0) {
              puVar15[0xd21] = (ulong)puVar9;
              puVar10 = puVar9;
            }
            else {
              puVar9[0xd20] = puVar10[0xd20] + 0x20;
              uVar17 = puVar10[0xd21];
              if (uVar17 == 0) {
                puVar10[0xd21] = (ulong)puVar9;
              }
              else {
                do {
                  InstructionSynchronizationBarrier();
                  puVar9[0xd20] = *(long *)(uVar17 + 0x6900) + 0x20;
                  puVar2 = (ulong *)(uVar17 + 0x6908);
                  uVar17 = *puVar2;
                } while (uVar17 != 0);
                *puVar2 = (ulong)puVar9;
              }
            }
          }
          if (((bool)(bVar5 & (int)puVar15[0xd22] == -1)) && ((ulong *)*puVar8 == puVar15)) {
            *puVar8 = (ulong)puVar10;
            uVar17 = puVar8[1];
            puVar8[1] = uVar17 | in_xzr;
            LORelease();
            puVar15[0xd23] = uVar17;
            puVar15[0xd22] = puVar15[0xd22] | 0x100000000;
            LORelease();
            bVar5 = true;
            InstructionSynchronizationBarrier();
            uVar17 = puVar10[0xd20];
          }
          else {
            bVar5 = false;
            InstructionSynchronizationBarrier();
            uVar17 = puVar10[0xd20];
          }
          puVar15 = puVar10;
          if (uVar17 == uVar7) {
            return puVar10;
          }
        } while( true );
      }
      puVar10[1] = puVar9[0x481];
      puVar9[0x480] = 0;
      puVar9[0x482] = 0;
      puVar9[0x481] = 0;
      lVar6 = *plVar13;
      puVar9[0x480] = *(long *)(lVar6 + 0x2400) + 0x20;
      puVar15 = (ulong *)(lVar6 + 0x2408);
      uVar17 = *puVar15;
      if (uVar17 == 0) {
        *puVar15 = (ulong)puVar9;
      }
      else {
        puVar9[0x480] = *(long *)(uVar17 + 0x2400) + 0x20;
        uVar7 = *(ulong *)(uVar17 + 0x2408);
        if (uVar7 == 0) {
          *(ulong *)(uVar17 + 0x2408) = (ulong)puVar9;
        }
        else {
          puVar9[0x480] = *(long *)(uVar7 + 0x2400) + 0x20;
          if (*(ulong *)(uVar7 + 0x2408) == 0) {
            *(ulong *)(uVar7 + 0x2408) = (ulong)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
    } while (puVar9 != (ulong *)*puVar10);
    puVar15 = (ulong *)*puVar10;
  }
  if ((puVar15[0x482] >> (puVar10[2] & 0x1f) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (puVar10[2] & 0x1f) * 0x24,0x120);
    if (1 < puVar8[0x20]) {
      return puVar15;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar15;
  }
  if ((puVar15[0x482] >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fca198;
  }
LAB_100fca18c:
  uVar17 = 3;
LAB_100fca198:
  puVar8[0x20] = uVar17;
  return puVar9;
LAB_100fc955c:
  puVar15 = (ulong *)*puVar12;
LAB_100fc9560:
  if ((puVar15[0x7e2] >> (puVar12[2] & 0x1f) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (puVar12[2] & 0x1f) * 0x3f,0x1f8);
    if (*puVar8 + 0x7fffffffffffffbb < 2) {
      return puVar15;
    }
    puVar12[2] = puVar12[2] + 1;
    return puVar15;
  }
  if ((puVar15[0x7e2] >> 0x21 & 1) == 0) {
    *puVar8 = 0x8000000000000046;
    return puVar10;
  }
  uVar17 = 0x8000000000000045;
LAB_100fc95d8:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc9398:
  puVar15 = (ulong *)*puVar12;
LAB_100fc939c:
  if ((puVar15[0xf42] >> (puVar12[2] & 0x1f) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (puVar12[2] & 0x1f) * 0x7a,0x3d0);
    if (*puVar8 + 0x7fffffffffffff5b < 2) {
      return puVar15;
    }
    puVar12[2] = puVar12[2] + 1;
    return puVar15;
  }
  if ((puVar15[0xf42] >> 0x21 & 1) == 0) {
    *puVar8 = 0x80000000000000a6;
    return puVar10;
  }
  uVar17 = 0x80000000000000a5;
LAB_100fc9414:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc83d0:
  puVar15 = (ulong *)*puVar12;
LAB_100fc83d4:
  if ((puVar15[0x202] >> (puVar12[2] & 0x1f) & 1) != 0) {
    puVar15 = puVar15 + (puVar12[2] & 0x1f) * 0x10;
    uVar17 = puVar15[4];
    uVar18 = puVar15[7];
    uVar7 = puVar15[6];
    uVar26 = puVar15[1];
    uVar25 = *puVar15;
    uVar24 = puVar15[3];
    uVar23 = puVar15[2];
    puVar8[5] = puVar15[5];
    puVar8[4] = uVar17;
    puVar8[7] = uVar18;
    puVar8[6] = uVar7;
    puVar8[1] = uVar26;
    *puVar8 = uVar25;
    puVar8[3] = uVar24;
    puVar8[2] = uVar23;
    uVar7 = puVar15[9];
    uVar17 = puVar15[8];
    uVar23 = puVar15[0xb];
    uVar18 = puVar15[10];
    uVar24 = puVar15[0xc];
    uVar26 = puVar15[0xf];
    uVar25 = puVar15[0xe];
    puVar8[0xd] = puVar15[0xd];
    puVar8[0xc] = uVar24;
    puVar8[0xf] = uVar26;
    puVar8[0xe] = uVar25;
    puVar8[9] = uVar7;
    puVar8[8] = uVar17;
    puVar8[0xb] = uVar23;
    puVar8[10] = uVar18;
    if (*puVar8 + 0x7ffffffffffffffb < 2) {
      return puVar10;
    }
    puVar12[2] = puVar12[2] + 1;
    return puVar10;
  }
  if ((puVar15[0x202] >> 0x21 & 1) == 0) {
    *puVar8 = 0x8000000000000006;
    return puVar10;
  }
  uVar17 = 0x8000000000000005;
LAB_100fc845c:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc7aa8:
  puVar10 = (ulong *)plVar22[1];
  plVar13 = plVar20;
  if (puVar10 != puVar15) {
    do {
      if (((puVar10[0xc42] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0xc43])) break;
      if (puVar10[0xc41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar20 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar20;
        uVar17 = puVar15[0x160];
        goto joined_r0x000100fc7c28;
      }
      plVar22[1] = puVar10[0xc41];
      puVar10[0xc40] = 0;
      puVar10[0xc42] = 0;
      puVar10[0xc41] = 0;
      lVar6 = *plVar20;
      puVar10[0xc40] = *(long *)(lVar6 + 0x6200) + 0x20;
      plVar1 = (long *)(lVar6 + 0x6208);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xc40] = *(long *)(lVar6 + 0x6200) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x6208);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x6208) = (long)puVar10;
        }
        else {
          puVar10[0xc40] = *(long *)(lVar11 + 0x6200) + 0x20;
          if (*(long *)(lVar11 + 0x6208) == 0) {
            *(long *)(lVar11 + 0x6208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar15 = (ulong *)*plVar22;
  }
  if ((puVar15[0xc42] >> (plVar22[2] & 0x1fU) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (plVar22[2] & 0x1fU) * 0x62,0x310);
    if (*puVar8 - 0x15 < 2) {
      return puVar15;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar15;
  }
  if ((puVar15[0xc42] >> 0x21 & 1) != 0) {
    uVar17 = 0x15;
    goto LAB_100fc7bd4;
  }
LAB_100fc7bc8:
  uVar17 = 0x16;
LAB_100fc7bd4:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc9b88:
  puVar9 = (ulong *)puVar10[1];
  plVar20 = plVar22;
  if (puVar9 != puVar15) {
    while( true ) {
      if (((puVar9[0x822] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0x823])) goto LAB_100fc9c50;
      if (puVar9[0x821] == 0) break;
      puVar10[1] = puVar9[0x821];
      puVar9[0x820] = 0;
      puVar9[0x822] = 0;
      puVar9[0x821] = 0;
      lVar6 = *plVar22;
      puVar9[0x820] = *(long *)(lVar6 + 0x4100) + 0x20;
      puVar15 = (ulong *)(lVar6 + 0x4108);
      uVar17 = *puVar15;
      if (uVar17 == 0) {
        *puVar15 = (ulong)puVar9;
      }
      else {
        puVar9[0x820] = *(long *)(uVar17 + 0x4100) + 0x20;
        uVar7 = *(ulong *)(uVar17 + 0x4108);
        if (uVar7 == 0) {
          *(ulong *)(uVar17 + 0x4108) = (ulong)puVar9;
        }
        else {
          puVar9[0x820] = *(long *)(uVar7 + 0x4100) + 0x20;
          if (*(ulong *)(uVar7 + 0x4108) == 0) {
            *(ulong *)(uVar7 + 0x4108) = (ulong)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
      if (puVar9 == (ulong *)*puVar10) goto LAB_100fc9c50;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar8 = auVar27._0_8_;
    puVar15 = (ulong *)*puVar8;
    uVar17 = puVar15[0x40];
    while (uVar17 != (puVar8[2] & 0xffffffffffffffe0)) {
      puVar15 = (ulong *)puVar15[0x41];
      if (puVar15 == (ulong *)0x0) {
        return puVar8;
      }
      *puVar8 = (ulong)puVar15;
      InstructionSynchronizationBarrier();
      uVar17 = puVar15[0x40];
    }
    puVar10 = (ulong *)puVar8[1];
    if (puVar10 == puVar15) goto LAB_100fc9de4;
    do {
      if (((puVar10[0x42] >> 0x20 & 1) == 0) || (puVar8[2] < puVar10[0x43])) break;
      if (puVar10[0x41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar22;
        uVar17 = puVar15[0x840];
        goto joined_r0x000100fc9e9c;
      }
      puVar8[1] = puVar10[0x41];
      puVar10[0x40] = 0;
      puVar10[0x42] = 0;
      puVar10[0x41] = 0;
      lVar6 = *auVar27._8_8_;
      puVar10[0x40] = *(long *)(lVar6 + 0x200) + 0x20;
      plVar22 = (long *)(lVar6 + 0x208);
      lVar6 = *plVar22;
      if (lVar6 == 0) {
        *plVar22 = (long)puVar10;
      }
      else {
        puVar10[0x40] = *(long *)(lVar6 + 0x200) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x208);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x208) = (long)puVar10;
        }
        else {
          puVar10[0x40] = *(long *)(lVar11 + 0x200) + 0x20;
          if (*(long *)(lVar11 + 0x208) == 0) {
            *(long *)(lVar11 + 0x208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)puVar8[1];
    } while (puVar10 != (ulong *)*puVar8);
    puVar15 = (ulong *)*puVar8;
LAB_100fc9de4:
    uVar16 = 1000000000;
    if ((puVar15[0x42] >> (puVar8[2] & 0x1f) & 1) == 0) {
      if ((puVar15[0x42] & 0x200000000) == 0) {
        uVar16 = 0x3b9aca01;
      }
    }
    else {
      puVar10 = (ulong *)puVar15[(puVar8[2] & 0x1f) * 2];
      uVar16 = (uint)(puVar15 + (puVar8[2] & 0x1f) * 2)[1];
    }
    if ((uVar16 & 0x3ffffffe) != 1000000000) {
      puVar8[2] = puVar8[2] + 1;
    }
    return puVar10;
  }
LAB_100fc9c54:
  if ((puVar15[0x822] >> (puVar10[2] & 0x1f) & 1) != 0) {
    puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (puVar10[2] & 0x1f) * 0x41,0x208);
    if (1 < *puVar8) {
      return puVar15;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar15;
  }
  if ((puVar15[0x822] >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc9cb0;
  }
LAB_100fc9ca4:
  uVar17 = 3;
LAB_100fc9cb0:
  *puVar8 = uVar17;
  return puVar9;
LAB_100fc78d0:
  puVar9 = (ulong *)puVar10[1];
  plVar20 = plVar13;
  if (puVar9 != puVar15) {
    do {
      if (((puVar9[0x2a2] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0x2a3])) break;
      if (puVar9[0x2a1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar22;
        uVar17 = puVar15[0xc40];
        goto joined_r0x000100fc7a80;
      }
      puVar10[1] = puVar9[0x2a1];
      puVar9[0x2a0] = 0;
      puVar9[0x2a2] = 0;
      puVar9[0x2a1] = 0;
      lVar6 = *plVar13;
      puVar9[0x2a0] = *(long *)(lVar6 + 0x1500) + 0x20;
      puVar15 = (ulong *)(lVar6 + 0x1508);
      uVar17 = *puVar15;
      if (uVar17 == 0) {
        *puVar15 = (ulong)puVar9;
      }
      else {
        puVar9[0x2a0] = *(long *)(uVar17 + 0x1500) + 0x20;
        uVar7 = *(ulong *)(uVar17 + 0x1508);
        if (uVar7 == 0) {
          *(ulong *)(uVar17 + 0x1508) = (ulong)puVar9;
        }
        else {
          puVar9[0x2a0] = *(long *)(uVar7 + 0x1500) + 0x20;
          if (*(ulong *)(uVar7 + 0x1508) == 0) {
            *(ulong *)(uVar7 + 0x1508) = (ulong)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
    } while (puVar9 != (ulong *)*puVar10);
    puVar15 = (ulong *)*puVar10;
  }
  if ((puVar15[0x2a2] >> (puVar10[2] & 0x1f) & 1) != 0) {
    puVar15 = puVar15 + (puVar10[2] & 0x1f) * 0x15;
    uVar7 = puVar15[1];
    uVar17 = *puVar15;
    uVar18 = puVar15[2];
    uVar24 = puVar15[5];
    uVar23 = puVar15[4];
    puVar8[3] = puVar15[3];
    puVar8[2] = uVar18;
    puVar8[5] = uVar24;
    puVar8[4] = uVar23;
    puVar8[1] = uVar7;
    *puVar8 = uVar17;
    uVar7 = puVar15[7];
    uVar17 = puVar15[6];
    uVar23 = puVar15[9];
    uVar18 = puVar15[8];
    uVar24 = puVar15[10];
    uVar26 = puVar15[0xd];
    uVar25 = puVar15[0xc];
    puVar8[0xb] = puVar15[0xb];
    puVar8[10] = uVar24;
    puVar8[0xd] = uVar26;
    puVar8[0xc] = uVar25;
    puVar8[7] = uVar7;
    puVar8[6] = uVar17;
    puVar8[9] = uVar23;
    puVar8[8] = uVar18;
    uVar7 = puVar15[0xf];
    uVar17 = puVar15[0xe];
    uVar23 = puVar15[0x11];
    uVar18 = puVar15[0x10];
    uVar25 = puVar15[0x13];
    uVar24 = puVar15[0x12];
    puVar8[0x14] = puVar15[0x14];
    puVar8[0x11] = uVar23;
    puVar8[0x10] = uVar18;
    puVar8[0x13] = uVar25;
    puVar8[0x12] = uVar24;
    puVar8[0xf] = uVar7;
    puVar8[0xe] = uVar17;
    if ((*puVar8 & 0xe) == 0xc) {
      return puVar9;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar9;
  }
  if ((puVar15[0x2a2] >> 0x21 & 1) != 0) {
    uVar17 = 0xc;
    goto LAB_100fc7a28;
  }
LAB_100fc7a1c:
  uVar17 = 0xd;
LAB_100fc7a28:
  *puVar8 = uVar17;
  return puVar9;
LAB_100fc9228:
  puVar15 = (ulong *)*puVar10;
  uVar17 = puVar10[2] & 0x1f;
  uVar7 = puVar15[0x162];
  uVar18 = uVar7 >> uVar17;
joined_r0x000100fc9240:
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 0xb;
    uVar18 = *puVar15;
    uVar7 = puVar15[3];
    uVar17 = puVar15[2];
    puVar8[1] = puVar15[1];
    *puVar8 = uVar18;
    puVar8[3] = uVar7;
    puVar8[2] = uVar17;
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar23 = puVar15[7];
    uVar18 = puVar15[6];
    uVar25 = puVar15[9];
    uVar24 = puVar15[8];
    puVar8[10] = puVar15[10];
    puVar8[7] = uVar23;
    puVar8[6] = uVar18;
    puVar8[9] = uVar25;
    puVar8[8] = uVar24;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    if (1 < *puVar8) {
      return puVar9;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar9;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc9254;
  }
LAB_100fc9248:
  uVar17 = 3;
LAB_100fc9254:
  *puVar8 = uVar17;
  return puVar9;
LAB_100fc771c:
  puVar10 = (ulong *)plVar20[1];
  plVar13 = plVar22;
  if (puVar10 == puVar15) {
    uVar17 = plVar20[2] & 0x1f;
    uVar7 = puVar15[0x62];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x62] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[99])) break;
      if (puVar10[0x61] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar10;
        uVar17 = puVar15[0x2a0];
        goto joined_r0x000100fc78a8;
      }
      plVar20[1] = puVar10[0x61];
      puVar10[0x60] = 0;
      puVar10[0x62] = 0;
      puVar10[0x61] = 0;
      lVar6 = *plVar22;
      puVar10[0x60] = *(long *)(lVar6 + 0x300) + 0x20;
      plVar1 = (long *)(lVar6 + 0x308);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x60] = *(long *)(lVar6 + 0x300) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x308);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x308) = (long)puVar10;
        }
        else {
          puVar10[0x60] = *(long *)(lVar11 + 0x300) + 0x20;
          if (*(long *)(lVar11 + 0x308) == 0) {
            *(long *)(lVar11 + 0x308) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar20[1];
    } while (puVar10 != (ulong *)*plVar20);
    puVar15 = (ulong *)*plVar20;
    uVar17 = plVar20[2] & 0x1f;
    uVar7 = puVar15[0x62];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 3;
    uVar17 = puVar15[2];
    uVar7 = *puVar15;
    puVar8[1] = puVar15[1];
    *puVar8 = uVar7;
    puVar8[2] = uVar17;
    if ((long)*puVar8 < -0x7ffffffffffffffe) {
      return puVar10;
    }
    plVar20[2] = plVar20[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 0x8000000000000000;
    goto LAB_100fc7854;
  }
LAB_100fc7848:
  uVar17 = 0x8000000000000001;
LAB_100fc7854:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc8668:
  puVar10 = (ulong *)plVar20[1];
  plVar13 = plVar22;
  if (puVar10 != puVar15) {
    while( true ) {
      if (((puVar10[0xe2] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[0xe3]))
      goto LAB_100fc877c;
      if (puVar10[0xe1] == 0) break;
      plVar20[1] = puVar10[0xe1];
      puVar10[0xe0] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe1] = 0;
      lVar6 = *plVar22;
      puVar10[0xe0] = *(long *)(lVar6 + 0x700) + 0x20;
      plVar1 = (long *)(lVar6 + 0x708);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xe0] = *(long *)(lVar6 + 0x700) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x708);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x708) = (long)puVar10;
        }
        else {
          puVar10[0xe0] = *(long *)(lVar11 + 0x700) + 0x20;
          if (*(long *)(lVar11 + 0x708) == 0) {
            *(long *)(lVar11 + 0x708) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar20[1];
      if (puVar10 == (ulong *)*plVar20) goto LAB_100fc877c;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar12 = auVar27._8_8_;
    puVar8 = auVar27._0_8_;
    puVar15 = (ulong *)*puVar12;
    uVar17 = puVar15[0x2c0];
    while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
      puVar15 = (ulong *)puVar15[0x2c1];
      if (puVar15 == (ulong *)0x0) {
        uVar17 = 0x8000000000000006;
        puVar10 = puVar8;
        goto LAB_100fc898c;
      }
      *puVar12 = puVar15;
      InstructionSynchronizationBarrier();
      uVar17 = puVar15[0x2c0];
    }
    puVar10 = (ulong *)puVar12[1];
    plVar20 = plVar13;
    if (puVar10 != puVar15) {
      do {
        if (((puVar10[0x2c2] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x2c3])) break;
        if (puVar10[0x2c1] == 0) {
          auVar27 = func_0x000108a07a20(&UNK_10b23a700);
          plVar22 = auVar27._8_8_;
          puVar8 = auVar27._0_8_;
          puVar15 = (ulong *)*plVar22;
          uVar17 = puVar15[0x1a0];
          goto joined_r0x000100fc89e0;
        }
        puVar12[1] = puVar10[0x2c1];
        puVar10[0x2c0] = 0;
        puVar10[0x2c2] = 0;
        puVar10[0x2c1] = 0;
        lVar6 = *plVar13;
        puVar10[0x2c0] = *(long *)(lVar6 + 0x1600) + 0x20;
        plVar22 = (long *)(lVar6 + 0x1608);
        lVar6 = *plVar22;
        if (lVar6 == 0) {
          *plVar22 = (long)puVar10;
        }
        else {
          puVar10[0x2c0] = *(long *)(lVar6 + 0x1600) + 0x20;
          lVar11 = *(long *)(lVar6 + 0x1608);
          if (lVar11 == 0) {
            *(long *)(lVar6 + 0x1608) = (long)puVar10;
          }
          else {
            puVar10[0x2c0] = *(long *)(lVar11 + 0x1600) + 0x20;
            if (*(long *)(lVar11 + 0x1608) == 0) {
              *(long *)(lVar11 + 0x1608) = (long)puVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        puVar10 = (ulong *)puVar12[1];
      } while (puVar10 != (ulong *)*puVar12);
      puVar15 = (ulong *)*puVar12;
    }
    if ((puVar15[0x2c2] >> (puVar12[2] & 0x1f) & 1) != 0) {
      puVar15 = puVar15 + (puVar12[2] & 0x1f) * 0x16;
      uVar7 = puVar15[1];
      uVar17 = *puVar15;
      uVar18 = puVar15[2];
      uVar24 = puVar15[5];
      uVar23 = puVar15[4];
      puVar8[3] = puVar15[3];
      puVar8[2] = uVar18;
      puVar8[5] = uVar24;
      puVar8[4] = uVar23;
      puVar8[1] = uVar7;
      *puVar8 = uVar17;
      uVar7 = puVar15[7];
      uVar17 = puVar15[6];
      uVar23 = puVar15[9];
      uVar18 = puVar15[8];
      uVar24 = puVar15[10];
      uVar26 = puVar15[0xd];
      uVar25 = puVar15[0xc];
      puVar8[0xb] = puVar15[0xb];
      puVar8[10] = uVar24;
      puVar8[0xd] = uVar26;
      puVar8[0xc] = uVar25;
      puVar8[7] = uVar7;
      puVar8[6] = uVar17;
      puVar8[9] = uVar23;
      puVar8[8] = uVar18;
      uVar7 = puVar15[0xf];
      uVar17 = puVar15[0xe];
      uVar23 = puVar15[0x11];
      uVar18 = puVar15[0x10];
      uVar24 = puVar15[0x12];
      uVar26 = puVar15[0x15];
      uVar25 = puVar15[0x14];
      puVar8[0x13] = puVar15[0x13];
      puVar8[0x12] = uVar24;
      puVar8[0x15] = uVar26;
      puVar8[0x14] = uVar25;
      puVar8[0xf] = uVar7;
      puVar8[0xe] = uVar17;
      puVar8[0x11] = uVar23;
      puVar8[0x10] = uVar18;
      if (*puVar8 + 0x7ffffffffffffffb < 2) {
        return puVar10;
      }
      puVar12[2] = puVar12[2] + 1;
      return puVar10;
    }
    if ((puVar15[0x2c2] >> 0x21 & 1) == 0) {
      *puVar8 = 0x8000000000000006;
      return puVar10;
    }
    uVar17 = 0x8000000000000005;
LAB_100fc898c:
    *puVar8 = uVar17;
    return puVar10;
  }
  uVar17 = plVar20[2] & 0x1f;
  uVar7 = puVar15[0xe2];
  uVar18 = uVar7 >> uVar17;
joined_r0x000100fc8794:
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 7;
    uVar23 = puVar15[3];
    uVar18 = puVar15[2];
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar25 = puVar15[1];
    uVar24 = *puVar15;
    puVar8[6] = puVar15[6];
    puVar8[3] = uVar23;
    puVar8[2] = uVar18;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    puVar8[1] = uVar25;
    *puVar8 = uVar24;
    if (*puVar8 - 3 < 2) {
      return puVar10;
    }
    plVar20[2] = plVar20[2] + 1;
    return puVar10;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 3;
    goto LAB_100fc87a8;
  }
LAB_100fc879c:
  uVar17 = 4;
LAB_100fc87a8:
  *puVar8 = uVar17;
  return puVar10;
LAB_100fc7070:
  puVar10 = (ulong *)plVar20[1];
  plVar13 = plVar22;
  if (puVar10 != puVar15) {
    do {
      if (((puVar10[0xd22] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[0xd23])) break;
      if (puVar10[0xd21] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar12 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*puVar12;
        uVar17 = puVar15[0x220];
        goto joined_r0x000100fc71f4;
      }
      plVar20[1] = puVar10[0xd21];
      puVar10[0xd20] = 0;
      puVar10[0xd22] = 0;
      puVar10[0xd21] = 0;
      lVar6 = *plVar22;
      puVar10[0xd20] = *(long *)(lVar6 + 0x6900) + 0x20;
      plVar1 = (long *)(lVar6 + 0x6908);
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xd20] = *(long *)(lVar6 + 0x6900) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x6908);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x6908) = (long)puVar10;
        }
        else {
          puVar10[0xd20] = *(long *)(lVar11 + 0x6900) + 0x20;
          if (*(long *)(lVar11 + 0x6908) == 0) {
            *(long *)(lVar11 + 0x6908) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar20[1];
    } while (puVar10 != (ulong *)*plVar20);
    puVar15 = (ulong *)*plVar20;
  }
  if ((puVar15[0xd22] >> (plVar20[2] & 0x1fU) & 1) == 0) {
    if ((puVar15[0xd22] >> 0x21 & 1) == 0) {
LAB_100fc7190:
      uVar17 = 0x18;
    }
    else {
      uVar17 = 0x17;
    }
    *puVar8 = uVar17;
  }
  else {
    puVar10 = (ulong *)_memcpy(puVar8,puVar15 + (plVar20[2] & 0x1fU) * 0x69,0x348);
    if (1 < *puVar8 - 0x17) {
      plVar20[2] = plVar20[2] + 1;
    }
  }
  return puVar10;
LAB_100fc8260:
  puVar15 = (ulong *)*puVar10;
  uVar17 = puVar10[2] & 0x1f;
  uVar7 = puVar15[0x162];
  uVar18 = uVar7 >> uVar17;
joined_r0x000100fc8278:
  if ((uVar18 & 1) != 0) {
    puVar15 = puVar15 + uVar17 * 0xb;
    uVar18 = *puVar15;
    uVar7 = puVar15[3];
    uVar17 = puVar15[2];
    puVar8[1] = puVar15[1];
    *puVar8 = uVar18;
    puVar8[3] = uVar7;
    puVar8[2] = uVar17;
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar23 = puVar15[7];
    uVar18 = puVar15[6];
    uVar25 = puVar15[9];
    uVar24 = puVar15[8];
    puVar8[10] = puVar15[10];
    puVar8[7] = uVar23;
    puVar8[6] = uVar18;
    puVar8[9] = uVar25;
    puVar8[8] = uVar24;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    if ((*puVar8 & 6) == 4) {
      return puVar9;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar9;
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    uVar17 = 4;
    goto LAB_100fc828c;
  }
LAB_100fc8280:
  uVar17 = 5;
LAB_100fc828c:
  *puVar8 = uVar17;
  return puVar9;
LAB_100fc6ec0:
  puVar9 = (ulong *)puVar10[1];
  plVar22 = plVar20;
  if (puVar9 == puVar15) {
    uVar17 = puVar10[2] & 0x1f;
    uVar7 = puVar15[0xc2];
    uVar18 = uVar7 >> uVar17;
  }
  else {
    do {
      if (((puVar9[0xc2] >> 0x20 & 1) == 0) || (puVar10[2] < puVar9[0xc3])) break;
      if (puVar9[0xc1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar20 = auVar27._8_8_;
        puVar8 = auVar27._0_8_;
        puVar15 = (ulong *)*plVar20;
        uVar17 = puVar15[0xd20];
        goto joined_r0x000100fc7048;
      }
      puVar10[1] = puVar9[0xc1];
      puVar9[0xc0] = 0;
      puVar9[0xc2] = 0;
      puVar9[0xc1] = 0;
      lVar6 = *plVar20;
      puVar9[0xc0] = *(long *)(lVar6 + 0x600) + 0x20;
      plVar13 = (long *)(lVar6 + 0x608);
      lVar6 = *plVar13;
      if (lVar6 == 0) {
        *plVar13 = (long)puVar9;
      }
      else {
        puVar9[0xc0] = *(long *)(lVar6 + 0x600) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x608);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x608) = (long)puVar9;
        }
        else {
          puVar9[0xc0] = *(long *)(lVar11 + 0x600) + 0x20;
          if (*(long *)(lVar11 + 0x608) == 0) {
            *(long *)(lVar11 + 0x608) = (long)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)puVar10[1];
    } while (puVar9 != (ulong *)*puVar10);
    puVar15 = (ulong *)*puVar10;
    uVar17 = puVar10[2] & 0x1f;
    uVar7 = puVar15[0xc2];
    uVar18 = uVar7 >> uVar17;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar7 >> 0x21 & 1) == 0) {
LAB_100fc6fe8:
      uVar17 = 3;
    }
    else {
      uVar17 = 2;
    }
    *puVar8 = uVar17;
  }
  else {
    puVar15 = puVar15 + uVar17 * 6;
    uVar18 = puVar15[2];
    uVar7 = puVar15[5];
    uVar17 = puVar15[4];
    uVar24 = puVar15[1];
    uVar23 = *puVar15;
    puVar8[3] = puVar15[3];
    puVar8[2] = uVar18;
    puVar8[5] = uVar7;
    puVar8[4] = uVar17;
    puVar8[1] = uVar24;
    *puVar8 = uVar23;
    if (*puVar8 < 2) {
      puVar10[2] = puVar10[2] + 1;
    }
  }
  return puVar9;
LAB_100fc721c:
  puVar10 = (ulong *)puVar12[1];
  plVar20 = plVar13;
  if (puVar10 != puVar15) {
    while( true ) {
      if (((puVar10[0x222] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x223]))
      goto LAB_100fc72e4;
      if (puVar10[0x221] == 0) break;
      puVar12[1] = puVar10[0x221];
      puVar10[0x220] = 0;
      puVar10[0x222] = 0;
      puVar10[0x221] = 0;
      lVar6 = *plVar13;
      puVar10[0x220] = *(long *)(lVar6 + 0x1100) + 0x20;
      plVar22 = (long *)(lVar6 + 0x1108);
      lVar6 = *plVar22;
      if (lVar6 == 0) {
        *plVar22 = (long)puVar10;
      }
      else {
        puVar10[0x220] = *(long *)(lVar6 + 0x1100) + 0x20;
        lVar11 = *(long *)(lVar6 + 0x1108);
        if (lVar11 == 0) {
          *(long *)(lVar6 + 0x1108) = (long)puVar10;
        }
        else {
          puVar10[0x220] = *(long *)(lVar11 + 0x1100) + 0x20;
          if (*(long *)(lVar11 + 0x1108) == 0) {
            *(long *)(lVar11 + 0x1108) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)puVar12[1];
      if (puVar10 == (ulong *)*puVar12) goto LAB_100fc72e4;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar12 = auVar27._0_8_;
    puVar15 = (ulong *)*puVar12;
    uVar17 = *puVar15;
    while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
      puVar15 = (ulong *)puVar15[1];
      if (puVar15 == (ulong *)0x0) {
        return (ulong *)0x2;
      }
      *puVar12 = puVar15;
      InstructionSynchronizationBarrier();
      uVar17 = *puVar15;
    }
    puVar8 = (ulong *)puVar12[1];
    if (puVar8 == puVar15) goto LAB_100fc74a0;
    while( true ) {
      if (((puVar8[2] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar8[3])) goto LAB_100fc749c;
      if (puVar8[1] == 0) break;
      puVar12[1] = puVar8[1];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      plVar13 = (long *)*auVar27._8_8_ + 1;
      *puVar8 = *(long *)*auVar27._8_8_ + 0x20;
      plVar22 = (long *)*plVar13;
      if (plVar22 == (long *)0x0) {
        *plVar13 = (long)puVar8;
      }
      else {
        *puVar8 = *plVar22 + 0x20;
        plVar13 = (long *)plVar22[1];
        if (plVar13 == (long *)0x0) {
          plVar22[1] = (long)puVar8;
        }
        else {
          *puVar8 = *plVar13 + 0x20;
          if (plVar13[1] == 0) {
            plVar13[1] = (long)puVar8;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar8 = (ulong *)puVar12[1];
      if (puVar8 == (ulong *)*puVar12) {
LAB_100fc749c:
        puVar15 = (ulong *)*puVar12;
LAB_100fc74a0:
        uVar17 = puVar15[2];
        uVar7 = 1L << (puVar12[2] & 0x1f);
        uVar16 = 1;
        if ((uVar17 & 0x200000000) == 0) {
          uVar16 = 2;
        }
        puVar15 = (ulong *)(ulong)uVar16;
        if ((uVar7 & uVar17) != 0 && ((uVar7 | 0x200000000) & uVar17) != 0) {
          puVar15 = (ulong *)0x0;
          puVar12[2] = puVar12[2] + 1;
        }
        return puVar15;
      }
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar12 = auVar27._8_8_;
    puVar8 = auVar27._0_8_;
    puVar15 = (ulong *)*puVar12;
    uVar17 = puVar15[0x7e0];
    while (uVar17 != (puVar12[2] & 0xffffffffffffffe0)) {
      puVar15 = (ulong *)puVar15[0x7e1];
      puVar10 = puVar8;
      if (puVar15 == (ulong *)0x0) goto LAB_100fc769c;
      *puVar12 = puVar15;
      InstructionSynchronizationBarrier();
      uVar17 = puVar15[0x7e0];
    }
    puVar10 = (ulong *)puVar12[1];
    plVar22 = plVar20;
    if (puVar10 != puVar15) {
      do {
        if (((puVar10[0x7e2] >> 0x20 & 1) == 0) || ((ulong)puVar12[2] < puVar10[0x7e3])) break;
        if (puVar10[0x7e1] == 0) {
          auVar27 = func_0x000108a07a20(&UNK_10b23a700);
          plVar20 = auVar27._8_8_;
          puVar8 = auVar27._0_8_;
          puVar15 = (ulong *)*plVar20;
          uVar17 = puVar15[0x60];
          goto joined_r0x000100fc76f8;
        }
        puVar12[1] = puVar10[0x7e1];
        puVar10[0x7e0] = 0;
        puVar10[0x7e2] = 0;
        puVar10[0x7e1] = 0;
        lVar6 = *plVar20;
        puVar10[0x7e0] = *(long *)(lVar6 + 0x3f00) + 0x20;
        plVar13 = (long *)(lVar6 + 0x3f08);
        lVar6 = *plVar13;
        if (lVar6 == 0) {
          *plVar13 = (long)puVar10;
        }
        else {
          puVar10[0x7e0] = *(long *)(lVar6 + 0x3f00) + 0x20;
          lVar11 = *(long *)(lVar6 + 0x3f08);
          if (lVar11 == 0) {
            *(long *)(lVar6 + 0x3f08) = (long)puVar10;
          }
          else {
            puVar10[0x7e0] = *(long *)(lVar11 + 0x3f00) + 0x20;
            if (*(long *)(lVar11 + 0x3f08) == 0) {
              *(long *)(lVar11 + 0x3f08) = (long)puVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        puVar10 = (ulong *)puVar12[1];
      } while (puVar10 != (ulong *)*puVar12);
      puVar15 = (ulong *)*puVar12;
    }
    if ((puVar15[0x7e2] >> (puVar12[2] & 0x1f) & 1) != 0) {
      puVar15 = (ulong *)_memcpy(puVar8,puVar15 + (puVar12[2] & 0x1f) * 0x3f,0x1f8);
      if ((*puVar8 & 0xfffffffffffffffe) == 0x8000000000000044) {
        return puVar15;
      }
      puVar12[2] = puVar12[2] + 1;
      return puVar15;
    }
    if ((puVar15[0x7e2] >> 0x21 & 1) != 0) {
      *puVar8 = 0x8000000000000044;
      return puVar10;
    }
LAB_100fc769c:
    *puVar8 = 0x8000000000000045;
    return puVar10;
  }
LAB_100fc72e8:
  if ((puVar15[0x222] >> (puVar12[2] & 0x1f) & 1) == 0) {
    if ((puVar15[0x222] >> 0x21 & 1) == 0) {
      *puVar8 = 0x8000000000000006;
    }
    else {
      uVar17 = 0x8000000000000005;
LAB_100fc7384:
      *puVar8 = uVar17;
    }
  }
  else {
    puVar15 = puVar15 + (puVar12[2] & 0x1f) * 0x11;
    uVar17 = *puVar15;
    puVar8[1] = puVar15[1];
    *puVar8 = uVar17;
    uVar7 = puVar15[3];
    uVar17 = puVar15[2];
    uVar23 = puVar15[5];
    uVar18 = puVar15[4];
    uVar24 = puVar15[6];
    uVar26 = puVar15[9];
    uVar25 = puVar15[8];
    puVar8[7] = puVar15[7];
    puVar8[6] = uVar24;
    puVar8[9] = uVar26;
    puVar8[8] = uVar25;
    puVar8[3] = uVar7;
    puVar8[2] = uVar17;
    puVar8[5] = uVar23;
    puVar8[4] = uVar18;
    uVar7 = puVar15[0xb];
    uVar17 = puVar15[10];
    uVar23 = puVar15[0xd];
    uVar18 = puVar15[0xc];
    uVar25 = puVar15[0xf];
    uVar24 = puVar15[0xe];
    puVar8[0x10] = puVar15[0x10];
    puVar8[0xd] = uVar23;
    puVar8[0xc] = uVar18;
    puVar8[0xf] = uVar25;
    puVar8[0xe] = uVar24;
    puVar8[0xb] = uVar7;
    puVar8[10] = uVar17;
    if (1 < *puVar8 + 0x7ffffffffffffffb) {
      puVar12[2] = puVar12[2] + 1;
    }
  }
  return puVar10;
}

