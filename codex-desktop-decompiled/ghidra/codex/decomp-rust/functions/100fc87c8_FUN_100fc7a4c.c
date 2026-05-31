
/* WARNING: Removing unreachable block (ram,0x000100fc8504) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_100fc7a4c(ulong *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 uVar15;
  ulong *puVar16;
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
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined1 auStack_ef0 [496];
  
  puVar16 = (ulong *)*param_2;
  uVar17 = puVar16[0xc40];
  while (uVar17 != (param_2[2] & 0xffffffffffffffe0U)) {
    puVar16 = (ulong *)puVar16[0xc41];
    puVar9 = param_1;
    if (puVar16 == (ulong *)0x0) goto LAB_100fc7bc8;
    *param_2 = (long)puVar16;
    InstructionSynchronizationBarrier();
    uVar17 = puVar16[0xc40];
  }
  puVar9 = (ulong *)param_2[1];
  plVar20 = param_3;
  if (puVar9 != puVar16) {
    do {
      if (((puVar9[0xc42] >> 0x20 & 1) == 0) || ((ulong)param_2[2] < puVar9[0xc43])) break;
      if (puVar9[0xc41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*plVar22;
        uVar17 = puVar16[0x160];
        goto joined_r0x000100fc7c28;
      }
      param_2[1] = puVar9[0xc41];
      puVar9[0xc40] = 0;
      puVar9[0xc42] = 0;
      puVar9[0xc41] = 0;
      lVar7 = *param_3;
      puVar9[0xc40] = *(long *)(lVar7 + 0x6200) + 0x20;
      plVar22 = (long *)(lVar7 + 0x6208);
      lVar7 = *plVar22;
      if (lVar7 == 0) {
        *plVar22 = (long)puVar9;
      }
      else {
        puVar9[0xc40] = *(long *)(lVar7 + 0x6200) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x6208);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x6208) = (long)puVar9;
        }
        else {
          puVar9[0xc40] = *(long *)(lVar12 + 0x6200) + 0x20;
          if (*(long *)(lVar12 + 0x6208) == 0) {
            *(long *)(lVar12 + 0x6208) = (long)puVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar9 = (ulong *)param_2[1];
    } while (puVar9 != (ulong *)*param_2);
    puVar16 = (ulong *)*param_2;
  }
  if ((puVar16[0xc42] >> (param_2[2] & 0x1fU) & 1) == 0) {
    if ((puVar16[0xc42] >> 0x21 & 1) == 0) {
LAB_100fc7bc8:
      uVar17 = 0x16;
    }
    else {
      uVar17 = 0x15;
    }
    *param_1 = uVar17;
  }
  else {
    puVar9 = (ulong *)_memcpy(param_1,puVar16 + (param_2[2] & 0x1fU) * 0x62,0x310);
    if (1 < *param_1 - 0x15) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return puVar9;
joined_r0x000100fc7c28:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc7c4c;
  puVar16 = (ulong *)puVar16[0x161];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc7d88;
  *plVar22 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x160];
  goto joined_r0x000100fc7c28;
joined_r0x000100fc7de4:
  if (uVar17 == (puVar13[2] & 0xffffffffffffffe0)) goto LAB_100fc7e08;
  puVar16 = (ulong *)puVar16[0x41];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc7f18;
  *puVar13 = puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x40];
  goto joined_r0x000100fc7de4;
joined_r0x000100fc7f78:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc7fa0;
  puVar16 = (ulong *)puVar16[0xd41];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc80c0;
  *plVar22 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0xd40];
  goto joined_r0x000100fc7f78;
joined_r0x000100fc8120:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc8144;
  puVar16 = (ulong *)puVar16[0x161];
  puVar11 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc8280;
  *puVar10 = (ulong)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x160];
  goto joined_r0x000100fc8120;
joined_r0x000100fc82e0:
  if (uVar17 == (puVar13[2] & 0xffffffffffffffe0)) goto LAB_100fc8308;
  puVar16 = (ulong *)puVar16[0x201];
  if (puVar16 == (ulong *)0x0) {
    uVar17 = 0x8000000000000006;
    puVar10 = puVar9;
    goto LAB_100fc845c;
  }
  *puVar13 = puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x200];
  goto joined_r0x000100fc82e0;
joined_r0x000100fc8644:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc8668;
  puVar16 = (ulong *)puVar16[0xe1];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc879c;
  *plVar20 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0xe0];
  goto joined_r0x000100fc8644;
joined_r0x000100fc89e0:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc8a04;
  puVar16 = (ulong *)puVar16[0x1a1];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc8b48;
  *plVar22 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x1a0];
  goto joined_r0x000100fc89e0;
joined_r0x000100fc8ba4:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc8bc8;
  puVar16 = (ulong *)puVar16[0x1c1];
  puVar11 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc8d00;
  *puVar10 = (ulong)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x1c0];
  goto joined_r0x000100fc8ba4;
joined_r0x000100fc8d60:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc8d88;
  puVar16 = (ulong *)puVar16[0x2a1];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc8ee0;
  *plVar22 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x2a0];
  goto joined_r0x000100fc8d60;
joined_r0x000100fc8f44:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc8f68;
  puVar16 = (ulong *)puVar16[0xa1];
  puVar11 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc9090;
  *puVar10 = (ulong)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0xa0];
  goto joined_r0x000100fc8f44;
joined_r0x000100fc90ec:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc9110;
  puVar16 = (ulong *)puVar16[0x161];
  puVar11 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc9248;
  *puVar10 = (ulong)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x160];
  goto joined_r0x000100fc90ec;
LAB_100fc9110:
  puVar11 = (ulong *)puVar10[1];
  plVar22 = plVar20;
  if (puVar11 != puVar16) {
    while( true ) {
      if (((puVar11[0x162] >> 0x20 & 1) == 0) || (puVar10[2] < puVar11[0x163])) goto LAB_100fc9228;
      if (puVar11[0x161] == 0) break;
      puVar10[1] = puVar11[0x161];
      puVar11[0x160] = 0;
      puVar11[0x162] = 0;
      puVar11[0x161] = 0;
      lVar7 = *plVar20;
      puVar11[0x160] = *(long *)(lVar7 + 0xb00) + 0x20;
      plVar14 = (long *)(lVar7 + 0xb08);
      lVar7 = *plVar14;
      if (lVar7 == 0) {
        *plVar14 = (long)puVar11;
      }
      else {
        puVar11[0x160] = *(long *)(lVar7 + 0xb00) + 0x20;
        lVar12 = *(long *)(lVar7 + 0xb08);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0xb08) = (long)puVar11;
        }
        else {
          puVar11[0x160] = *(long *)(lVar12 + 0xb00) + 0x20;
          if (*(long *)(lVar12 + 0xb08) == 0) {
            *(long *)(lVar12 + 0xb08) = (long)puVar11;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar11 = (ulong *)puVar10[1];
      if (puVar11 == (ulong *)*puVar10) goto LAB_100fc9228;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar13 = auVar27._8_8_;
    puVar9 = auVar27._0_8_;
    puVar16 = (ulong *)*puVar13;
    uVar17 = puVar16[0xf40];
    while (uVar17 != (puVar13[2] & 0xffffffffffffffe0)) {
      puVar16 = (ulong *)puVar16[0xf41];
      if (puVar16 == (ulong *)0x0) {
        uVar17 = 0x80000000000000a6;
        puVar10 = puVar9;
        goto LAB_100fc9414;
      }
      *puVar13 = puVar16;
      InstructionSynchronizationBarrier();
      uVar17 = puVar16[0xf40];
    }
    puVar10 = (ulong *)puVar13[1];
    plVar20 = plVar22;
    if (puVar10 != puVar16) {
      while( true ) {
        if (((puVar10[0xf42] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < puVar10[0xf43]))
        goto LAB_100fc9398;
        if (puVar10[0xf41] == 0) break;
        puVar13[1] = puVar10[0xf41];
        puVar10[0xf40] = 0;
        puVar10[0xf42] = 0;
        puVar10[0xf41] = 0;
        lVar7 = *plVar22;
        puVar10[0xf40] = *(long *)(lVar7 + 0x7a00) + 0x20;
        plVar14 = (long *)(lVar7 + 0x7a08);
        lVar7 = *plVar14;
        if (lVar7 == 0) {
          *plVar14 = (long)puVar10;
        }
        else {
          puVar10[0xf40] = *(long *)(lVar7 + 0x7a00) + 0x20;
          lVar12 = *(long *)(lVar7 + 0x7a08);
          if (lVar12 == 0) {
            *(long *)(lVar7 + 0x7a08) = (long)puVar10;
          }
          else {
            puVar10[0xf40] = *(long *)(lVar12 + 0x7a00) + 0x20;
            if (*(long *)(lVar12 + 0x7a08) == 0) {
              *(long *)(lVar12 + 0x7a08) = (long)puVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        puVar10 = (ulong *)puVar13[1];
        if (puVar10 == (ulong *)*puVar13) goto LAB_100fc9398;
      }
      auVar27 = func_0x000108a07a20(&UNK_10b23a700);
      puVar13 = auVar27._8_8_;
      puVar9 = auVar27._0_8_;
      puVar16 = (ulong *)*puVar13;
      uVar17 = puVar16[0x7e0];
      while (uVar17 != (puVar13[2] & 0xffffffffffffffe0)) {
        puVar16 = (ulong *)puVar16[0x7e1];
        if (puVar16 == (ulong *)0x0) {
          uVar17 = 0x8000000000000046;
          puVar10 = puVar9;
          goto LAB_100fc95d8;
        }
        *puVar13 = puVar16;
        InstructionSynchronizationBarrier();
        uVar17 = puVar16[0x7e0];
      }
      puVar10 = (ulong *)puVar13[1];
      plVar22 = plVar20;
      if (puVar10 != puVar16) {
        while( true ) {
          if (((puVar10[0x7e2] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < puVar10[0x7e3]))
          goto LAB_100fc955c;
          if (puVar10[0x7e1] == 0) break;
          puVar13[1] = puVar10[0x7e1];
          puVar10[0x7e0] = 0;
          puVar10[0x7e2] = 0;
          puVar10[0x7e1] = 0;
          lVar7 = *plVar20;
          puVar10[0x7e0] = *(long *)(lVar7 + 0x3f00) + 0x20;
          plVar14 = (long *)(lVar7 + 0x3f08);
          lVar7 = *plVar14;
          if (lVar7 == 0) {
            *plVar14 = (long)puVar10;
          }
          else {
            puVar10[0x7e0] = *(long *)(lVar7 + 0x3f00) + 0x20;
            lVar12 = *(long *)(lVar7 + 0x3f08);
            if (lVar12 == 0) {
              *(long *)(lVar7 + 0x3f08) = (long)puVar10;
            }
            else {
              puVar10[0x7e0] = *(long *)(lVar12 + 0x3f00) + 0x20;
              if (*(long *)(lVar12 + 0x3f08) == 0) {
                *(long *)(lVar12 + 0x3f08) = (long)puVar10;
              }
              else {
                _free();
              }
            }
          }
          InstructionSynchronizationBarrier();
          puVar10 = (ulong *)puVar13[1];
          if (puVar10 == (ulong *)*puVar13) goto LAB_100fc955c;
        }
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar13 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar13;
        uVar17 = puVar16[0x1e0];
        while (uVar17 != (puVar13[2] & 0xffffffffffffffe0)) {
          puVar16 = (ulong *)puVar16[0x1e1];
          puVar10 = puVar9;
          if (puVar16 == (ulong *)0x0) goto LAB_100fc979c;
          *puVar13 = puVar16;
          InstructionSynchronizationBarrier();
          uVar17 = puVar16[0x1e0];
        }
        puVar10 = (ulong *)puVar13[1];
        plVar20 = plVar22;
        if (puVar10 != puVar16) {
          do {
            if (((puVar10[0x1e2] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < puVar10[0x1e3])) break;
            if (puVar10[0x1e1] == 0) {
              auVar27 = func_0x000108a07a20(&UNK_10b23a700);
              plVar22 = auVar27._8_8_;
              puVar9 = auVar27._0_8_;
              puVar16 = (ulong *)*plVar22;
              uVar17 = puVar16[0xe0];
              goto joined_r0x000100fc97f4;
            }
            puVar13[1] = puVar10[0x1e1];
            puVar10[0x1e0] = 0;
            puVar10[0x1e2] = 0;
            puVar10[0x1e1] = 0;
            lVar7 = *plVar22;
            puVar10[0x1e0] = *(long *)(lVar7 + 0xf00) + 0x20;
            plVar14 = (long *)(lVar7 + 0xf08);
            lVar7 = *plVar14;
            if (lVar7 == 0) {
              *plVar14 = (long)puVar10;
            }
            else {
              puVar10[0x1e0] = *(long *)(lVar7 + 0xf00) + 0x20;
              lVar12 = *(long *)(lVar7 + 0xf08);
              if (lVar12 == 0) {
                *(long *)(lVar7 + 0xf08) = (long)puVar10;
              }
              else {
                puVar10[0x1e0] = *(long *)(lVar12 + 0xf00) + 0x20;
                if (*(long *)(lVar12 + 0xf08) == 0) {
                  *(long *)(lVar12 + 0xf08) = (long)puVar10;
                }
                else {
                  _free();
                }
              }
            }
            InstructionSynchronizationBarrier();
            puVar10 = (ulong *)puVar13[1];
          } while (puVar10 != (ulong *)*puVar13);
          puVar16 = (ulong *)*puVar13;
        }
        if ((puVar16[0x1e2] >> (puVar13[2] & 0x1f) & 1) != 0) {
          puVar16 = puVar16 + (puVar13[2] & 0x1f) * 0xf;
          uVar17 = puVar16[4];
          uVar18 = puVar16[7];
          uVar8 = puVar16[6];
          uVar26 = puVar16[1];
          uVar25 = *puVar16;
          uVar24 = puVar16[3];
          uVar23 = puVar16[2];
          puVar9[5] = puVar16[5];
          puVar9[4] = uVar17;
          puVar9[7] = uVar18;
          puVar9[6] = uVar8;
          puVar9[1] = uVar26;
          *puVar9 = uVar25;
          puVar9[3] = uVar24;
          puVar9[2] = uVar23;
          uVar8 = puVar16[9];
          uVar17 = puVar16[8];
          uVar23 = puVar16[0xb];
          uVar18 = puVar16[10];
          uVar25 = puVar16[0xd];
          uVar24 = puVar16[0xc];
          puVar9[0xe] = puVar16[0xe];
          puVar9[0xb] = uVar23;
          puVar9[10] = uVar18;
          puVar9[0xd] = uVar25;
          puVar9[0xc] = uVar24;
          puVar9[9] = uVar8;
          puVar9[8] = uVar17;
          if ((*puVar9 & 0xfffffffffffffffe) == 0x8000000000000004) {
            return puVar10;
          }
          puVar13[2] = puVar13[2] + 1;
          return puVar10;
        }
        if ((puVar16[0x1e2] >> 0x21 & 1) != 0) {
          *puVar9 = 0x8000000000000004;
          return puVar10;
        }
LAB_100fc979c:
        *puVar9 = 0x8000000000000005;
        return puVar10;
      }
      goto LAB_100fc9560;
    }
    goto LAB_100fc939c;
  }
  uVar17 = puVar10[2] & 0x1f;
  uVar8 = puVar16[0x162];
  uVar18 = uVar8 >> uVar17;
  goto joined_r0x000100fc9240;
joined_r0x000100fc97f4:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc9818;
  puVar16 = (ulong *)puVar16[0xe1];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc994c;
  *plVar22 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0xe0];
  goto joined_r0x000100fc97f4;
joined_r0x000100fc99a8:
  if (uVar17 == (plVar20[2] & 0xffffffffffffffe0U)) goto LAB_100fc99cc;
  puVar16 = (ulong *)puVar16[0xe1];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc9b00;
  *plVar20 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0xe0];
  goto joined_r0x000100fc99a8;
joined_r0x000100fc9b60:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fc9b88;
  puVar16 = (ulong *)puVar16[0x821];
  puVar11 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc9ca4;
  *puVar10 = (ulong)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x820];
  goto joined_r0x000100fc9b60;
joined_r0x000100fc9e9c:
  if (uVar17 == (plVar22[2] & 0xffffffffffffffe0U)) goto LAB_100fc9ec4;
  puVar16 = (ulong *)puVar16[0x841];
  puVar10 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fc9fe4;
  *plVar22 = (long)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x840];
  goto joined_r0x000100fc9e9c;
joined_r0x000100fca048:
  if (uVar17 == (puVar10[2] & 0xffffffffffffffe0)) goto LAB_100fca070;
  puVar16 = (ulong *)puVar16[0x481];
  puVar11 = puVar9;
  if (puVar16 == (ulong *)0x0) goto LAB_100fca18c;
  *puVar10 = (ulong)puVar16;
  InstructionSynchronizationBarrier();
  uVar17 = puVar16[0x480];
  goto joined_r0x000100fca048;
LAB_100fc9c50:
  puVar16 = (ulong *)*puVar10;
  goto LAB_100fc9c54;
LAB_100fc877c:
  puVar16 = (ulong *)*plVar20;
  uVar17 = plVar20[2] & 0x1f;
  uVar8 = puVar16[0xe2];
  uVar18 = uVar8 >> uVar17;
  goto joined_r0x000100fc8794;
LAB_100fc83d0:
  puVar16 = (ulong *)*puVar13;
  goto LAB_100fc83d4;
LAB_100fc8a04:
  puVar10 = (ulong *)plVar22[1];
  plVar14 = plVar20;
  if (puVar10 == puVar16) {
    uVar17 = plVar22[2] & 0x1f;
    uVar8 = puVar16[0x1a2];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x1a2] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x1a3])) break;
      if (puVar10[0x1a1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar10;
        uVar17 = puVar16[0x1c0];
        goto joined_r0x000100fc8ba4;
      }
      plVar22[1] = puVar10[0x1a1];
      puVar10[0x1a0] = 0;
      puVar10[0x1a2] = 0;
      puVar10[0x1a1] = 0;
      lVar7 = *plVar20;
      puVar10[0x1a0] = *(long *)(lVar7 + 0xd00) + 0x20;
      plVar1 = (long *)(lVar7 + 0xd08);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x1a0] = *(long *)(lVar7 + 0xd00) + 0x20;
        lVar12 = *(long *)(lVar7 + 0xd08);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0xd08) = (long)puVar10;
        }
        else {
          puVar10[0x1a0] = *(long *)(lVar12 + 0xd00) + 0x20;
          if (*(long *)(lVar12 + 0xd08) == 0) {
            *(long *)(lVar12 + 0xd08) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar16 = (ulong *)*plVar22;
    uVar17 = plVar22[2] & 0x1f;
    uVar8 = puVar16[0x1a2];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 0xd;
    uVar18 = puVar16[2];
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar24 = puVar16[1];
    uVar23 = *puVar16;
    puVar9[3] = puVar16[3];
    puVar9[2] = uVar18;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    puVar9[1] = uVar24;
    *puVar9 = uVar23;
    uVar8 = puVar16[7];
    uVar17 = puVar16[6];
    uVar23 = puVar16[9];
    uVar18 = puVar16[8];
    uVar25 = puVar16[0xb];
    uVar24 = puVar16[10];
    puVar9[0xc] = puVar16[0xc];
    puVar9[9] = uVar23;
    puVar9[8] = uVar18;
    puVar9[0xb] = uVar25;
    puVar9[10] = uVar24;
    puVar9[7] = uVar8;
    puVar9[6] = uVar17;
    if (*puVar9 - 7 < 2) {
      return puVar10;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar10;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 7;
    goto LAB_100fc8b54;
  }
LAB_100fc8b48:
  uVar17 = 8;
LAB_100fc8b54:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc9818:
  puVar10 = (ulong *)plVar22[1];
  plVar14 = plVar20;
  if (puVar10 == puVar16) {
    uVar17 = plVar22[2] & 0x1f;
    uVar8 = puVar16[0xe2];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0xe2] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0xe3])) break;
      if (puVar10[0xe1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar20 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*plVar20;
        uVar17 = puVar16[0xe0];
        goto joined_r0x000100fc99a8;
      }
      plVar22[1] = puVar10[0xe1];
      puVar10[0xe0] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe1] = 0;
      lVar7 = *plVar20;
      puVar10[0xe0] = *(long *)(lVar7 + 0x700) + 0x20;
      plVar1 = (long *)(lVar7 + 0x708);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xe0] = *(long *)(lVar7 + 0x700) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x708);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x708) = (long)puVar10;
        }
        else {
          puVar10[0xe0] = *(long *)(lVar12 + 0x700) + 0x20;
          if (*(long *)(lVar12 + 0x708) == 0) {
            *(long *)(lVar12 + 0x708) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar16 = (ulong *)*plVar22;
    uVar17 = plVar22[2] & 0x1f;
    uVar8 = puVar16[0xe2];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 7;
    uVar23 = puVar16[3];
    uVar18 = puVar16[2];
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar25 = puVar16[1];
    uVar24 = *puVar16;
    puVar9[6] = puVar16[6];
    puVar9[3] = uVar23;
    puVar9[2] = uVar18;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    puVar9[1] = uVar25;
    *puVar9 = uVar24;
    if ((~(uint)*puVar9 & 6) == 0) {
      return puVar10;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar10;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 6;
    goto LAB_100fc9958;
  }
LAB_100fc994c:
  uVar17 = 7;
LAB_100fc9958:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc99cc:
  puVar10 = (ulong *)plVar20[1];
  plVar22 = plVar14;
  if (puVar10 == puVar16) {
    uVar17 = plVar20[2] & 0x1f;
    uVar8 = puVar16[0xe2];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0xe2] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[0xe3])) break;
      if (puVar10[0xe1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar10;
        uVar17 = puVar16[0x820];
        goto joined_r0x000100fc9b60;
      }
      plVar20[1] = puVar10[0xe1];
      puVar10[0xe0] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe1] = 0;
      lVar7 = *plVar14;
      puVar10[0xe0] = *(long *)(lVar7 + 0x700) + 0x20;
      plVar1 = (long *)(lVar7 + 0x708);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xe0] = *(long *)(lVar7 + 0x700) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x708);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x708) = (long)puVar10;
        }
        else {
          puVar10[0xe0] = *(long *)(lVar12 + 0x700) + 0x20;
          if (*(long *)(lVar12 + 0x708) == 0) {
            *(long *)(lVar12 + 0x708) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar20[1];
    } while (puVar10 != (ulong *)*plVar20);
    puVar16 = (ulong *)*plVar20;
    uVar17 = plVar20[2] & 0x1f;
    uVar8 = puVar16[0xe2];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 7;
    uVar23 = puVar16[3];
    uVar18 = puVar16[2];
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar25 = puVar16[1];
    uVar24 = *puVar16;
    puVar9[6] = puVar16[6];
    puVar9[3] = uVar23;
    puVar9[2] = uVar18;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    puVar9[1] = uVar25;
    *puVar9 = uVar24;
    if (*puVar9 - 7 < 2) {
      return puVar10;
    }
    plVar20[2] = plVar20[2] + 1;
    return puVar10;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 7;
    goto LAB_100fc9b0c;
  }
LAB_100fc9b00:
  uVar17 = 8;
LAB_100fc9b0c:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc7c4c:
  puVar10 = (ulong *)plVar22[1];
  plVar14 = plVar20;
  if (puVar10 == puVar16) {
    uVar17 = plVar22[2] & 0x1f;
    uVar8 = puVar16[0x162];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x162] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x163])) break;
      if (puVar10[0x161] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar13 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar13;
        uVar17 = puVar16[0x40];
        goto joined_r0x000100fc7de4;
      }
      plVar22[1] = puVar10[0x161];
      puVar10[0x160] = 0;
      puVar10[0x162] = 0;
      puVar10[0x161] = 0;
      lVar7 = *plVar20;
      puVar10[0x160] = *(long *)(lVar7 + 0xb00) + 0x20;
      plVar1 = (long *)(lVar7 + 0xb08);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x160] = *(long *)(lVar7 + 0xb00) + 0x20;
        lVar12 = *(long *)(lVar7 + 0xb08);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0xb08) = (long)puVar10;
        }
        else {
          puVar10[0x160] = *(long *)(lVar12 + 0xb00) + 0x20;
          if (*(long *)(lVar12 + 0xb08) == 0) {
            *(long *)(lVar12 + 0xb08) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar16 = (ulong *)*plVar22;
    uVar17 = plVar22[2] & 0x1f;
    uVar8 = puVar16[0x162];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar8 >> 0x21 & 1) == 0) {
LAB_100fc7d88:
      uVar17 = 0x8000000000000001;
    }
    else {
      uVar17 = 0x8000000000000000;
    }
    *puVar9 = uVar17;
  }
  else {
    puVar16 = puVar16 + uVar17 * 0xb;
    uVar18 = *puVar16;
    uVar8 = puVar16[3];
    uVar17 = puVar16[2];
    puVar9[1] = puVar16[1];
    *puVar9 = uVar18;
    puVar9[3] = uVar8;
    puVar9[2] = uVar17;
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar23 = puVar16[7];
    uVar18 = puVar16[6];
    uVar25 = puVar16[9];
    uVar24 = puVar16[8];
    puVar9[10] = puVar16[10];
    puVar9[7] = uVar23;
    puVar9[6] = uVar18;
    puVar9[9] = uVar25;
    puVar9[8] = uVar24;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    if (-0x7fffffffffffffff < (long)*puVar9) {
      plVar22[2] = plVar22[2] + 1;
    }
  }
  return puVar10;
LAB_100fc8f68:
  puVar11 = (ulong *)puVar10[1];
  plVar20 = plVar14;
  if (puVar11 == puVar16) {
    uVar17 = puVar10[2] & 0x1f;
    uVar8 = puVar16[0xa2];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar11[0xa2] >> 0x20 & 1) == 0) || (puVar10[2] < puVar11[0xa3])) break;
      if (puVar11[0xa1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar10;
        uVar17 = puVar16[0x160];
        goto joined_r0x000100fc90ec;
      }
      puVar10[1] = puVar11[0xa1];
      puVar11[0xa0] = 0;
      puVar11[0xa2] = 0;
      puVar11[0xa1] = 0;
      lVar7 = *plVar14;
      puVar11[0xa0] = *(long *)(lVar7 + 0x500) + 0x20;
      plVar22 = (long *)(lVar7 + 0x508);
      lVar7 = *plVar22;
      if (lVar7 == 0) {
        *plVar22 = (long)puVar11;
      }
      else {
        puVar11[0xa0] = *(long *)(lVar7 + 0x500) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x508);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x508) = (long)puVar11;
        }
        else {
          puVar11[0xa0] = *(long *)(lVar12 + 0x500) + 0x20;
          if (*(long *)(lVar12 + 0x508) == 0) {
            *(long *)(lVar12 + 0x508) = (long)puVar11;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar11 = (ulong *)puVar10[1];
    } while (puVar11 != (ulong *)*puVar10);
    puVar16 = (ulong *)*puVar10;
    uVar17 = puVar10[2] & 0x1f;
    uVar8 = puVar16[0xa2];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 5;
    uVar23 = puVar16[1];
    uVar18 = *puVar16;
    uVar8 = puVar16[3];
    uVar17 = puVar16[2];
    puVar9[4] = puVar16[4];
    puVar9[1] = uVar23;
    *puVar9 = uVar18;
    puVar9[3] = uVar8;
    puVar9[2] = uVar17;
    if (1 < *puVar9) {
      return puVar11;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar11;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc909c;
  }
LAB_100fc9090:
  uVar17 = 3;
LAB_100fc909c:
  *puVar9 = uVar17;
  return puVar11;
LAB_100fc9ec4:
  puVar10 = (ulong *)plVar22[1];
  plVar14 = plVar20;
  if (puVar10 != puVar16) {
    do {
      if (((puVar10[0x842] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x843])) break;
      if (puVar10[0x841] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar10;
        uVar17 = puVar16[0x480];
        goto joined_r0x000100fca048;
      }
      plVar22[1] = puVar10[0x841];
      puVar10[0x840] = 0;
      puVar10[0x842] = 0;
      puVar10[0x841] = 0;
      lVar7 = *plVar20;
      puVar10[0x840] = *(long *)(lVar7 + 0x4200) + 0x20;
      plVar1 = (long *)(lVar7 + 0x4208);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x840] = *(long *)(lVar7 + 0x4200) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x4208);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x4208) = (long)puVar10;
        }
        else {
          puVar10[0x840] = *(long *)(lVar12 + 0x4200) + 0x20;
          if (*(long *)(lVar12 + 0x4208) == 0) {
            *(long *)(lVar12 + 0x4208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar16 = (ulong *)*plVar22;
  }
  if ((puVar16[0x842] >> (plVar22[2] & 0x1fU) & 1) != 0) {
    puVar16 = (ulong *)_memcpy(puVar9,puVar16 + (plVar22[2] & 0x1fU) * 0x42,0x210);
    if (*puVar9 - 3 < 2) {
      return puVar16;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar16;
  }
  if ((puVar16[0x842] >> 0x21 & 1) != 0) {
    uVar17 = 3;
    goto LAB_100fc9ff0;
  }
LAB_100fc9fe4:
  uVar17 = 4;
LAB_100fc9ff0:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc7e08:
  puVar10 = (ulong *)puVar13[1];
  plVar20 = plVar14;
  if (puVar10 == puVar16) {
    uVar17 = puVar13[2] & 0x1f;
    uVar8 = puVar16[0x42];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar10[0x42] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < puVar10[0x43])) break;
      if (puVar10[0x41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*plVar22;
        uVar17 = puVar16[0xd40];
        goto joined_r0x000100fc7f78;
      }
      puVar13[1] = puVar10[0x41];
      puVar10[0x40] = 0;
      puVar10[0x42] = 0;
      puVar10[0x41] = 0;
      lVar7 = *plVar14;
      puVar10[0x40] = *(long *)(lVar7 + 0x200) + 0x20;
      plVar22 = (long *)(lVar7 + 0x208);
      lVar7 = *plVar22;
      if (lVar7 == 0) {
        *plVar22 = (long)puVar10;
      }
      else {
        puVar10[0x40] = *(long *)(lVar7 + 0x200) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x208);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x208) = (long)puVar10;
        }
        else {
          puVar10[0x40] = *(long *)(lVar12 + 0x200) + 0x20;
          if (*(long *)(lVar12 + 0x208) == 0) {
            *(long *)(lVar12 + 0x208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)puVar13[1];
    } while (puVar10 != (ulong *)*puVar13);
    puVar16 = (ulong *)*puVar13;
    uVar17 = puVar13[2] & 0x1f;
    uVar8 = puVar16[0x42];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar8 >> 0x21 & 1) == 0) {
LAB_100fc7f18:
      uVar15 = 2;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)puVar9 = uVar15;
  }
  else {
    uVar8 = puVar16[uVar17 * 2];
    *(ulong *)((long)puVar9 + 9) = (puVar16 + uVar17 * 2)[1];
    *(ulong *)((long)puVar9 + 1) = uVar8;
    *(undefined1 *)puVar9 = 0;
    puVar13[2] = puVar13[2] + 1;
  }
  return puVar10;
LAB_100fca070:
  puVar11 = (ulong *)puVar10[1];
  plVar20 = plVar14;
  if (puVar11 != puVar16) {
    do {
      if (((puVar11[0x482] >> 0x20 & 1) == 0) || (puVar10[2] < puVar11[0x483])) break;
      if (puVar11[0x481] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar9 = auVar27._0_8_;
        uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
        puVar16 = (ulong *)*puVar9;
        uVar17 = uVar8 - puVar16[0xd20];
        if (uVar17 == 0) {
          return puVar16;
        }
        bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
        do {
          puVar10 = (ulong *)puVar16[0xd21];
          if ((ulong *)puVar16[0xd21] == (ulong *)0x0) {
            uVar17 = puVar16[0xd20];
            puVar11 = (ulong *)_malloc(0x6920);
            if (puVar11 == (ulong *)0x0) {
              auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6920);
              puVar9 = auVar27._0_8_;
              uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
              puVar16 = (ulong *)*puVar9;
              uVar17 = uVar8 - puVar16[0x100];
              if (uVar17 == 0) {
                return puVar16;
              }
              bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
              do {
                puVar10 = (ulong *)puVar16[0x101];
                if ((ulong *)puVar16[0x101] == (ulong *)0x0) {
                  uVar17 = puVar16[0x100];
                  puVar11 = (ulong *)_malloc(0x820);
                  if (puVar11 == (ulong *)0x0) {
                    auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x820);
                    puVar9 = auVar27._0_8_;
                    uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                    puVar16 = (ulong *)*puVar9;
                    uVar17 = uVar8 - puVar16[0x7e0];
                    if (uVar17 == 0) {
                      return puVar16;
                    }
                    bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                    do {
                      puVar10 = (ulong *)puVar16[0x7e1];
                      if ((ulong *)puVar16[0x7e1] == (ulong *)0x0) {
                        uVar17 = puVar16[0x7e0];
                        puVar11 = (ulong *)_malloc(0x3f20);
                        if (puVar11 == (ulong *)0x0) {
                          auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                              (8,0x3f20);
                          puVar9 = auVar27._0_8_;
                          uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                          puVar16 = (ulong *)*puVar9;
                          uVar17 = uVar8 - puVar16[0x220];
                          if (uVar17 == 0) {
                            return puVar16;
                          }
                          bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                          do {
                            puVar10 = (ulong *)puVar16[0x221];
                            if ((ulong *)puVar16[0x221] == (ulong *)0x0) {
                              uVar17 = puVar16[0x220];
                              puVar11 = (ulong *)_malloc(0x1120);
                              if (puVar11 == (ulong *)0x0) {
                                auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                    (8,0x1120);
                                puVar9 = auVar27._0_8_;
                                uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                puVar16 = (ulong *)*puVar9;
                                uVar17 = uVar8 - puVar16[0x20];
                                if (uVar17 == 0) {
                                  return puVar16;
                                }
                                bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                do {
                                  puVar10 = (ulong *)puVar16[0x21];
                                  if ((ulong *)puVar16[0x21] == (ulong *)0x0) {
                                    uVar17 = puVar16[0x20];
                                    puVar11 = (ulong *)_malloc(0x120);
                                    if (puVar11 == (ulong *)0x0) {
                                      auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                          (8,0x120);
                                      puVar9 = auVar27._0_8_;
                                      uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                      puVar16 = (ulong *)*puVar9;
                                      uVar17 = uVar8 - puVar16[0x480];
                                      if (uVar17 == 0) {
                                        return puVar16;
                                      }
                                      bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                      do {
                                        puVar10 = (ulong *)puVar16[0x481];
                                        if ((ulong *)puVar16[0x481] == (ulong *)0x0) {
                                          uVar17 = puVar16[0x480];
                                          puVar11 = (ulong *)_malloc(0x2420);
                                          if (puVar11 == (ulong *)0x0) {
                                            auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x2420);
                                            puVar9 = auVar27._0_8_;
                                            uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                            puVar16 = (ulong *)*puVar9;
                                            uVar17 = uVar8 - puVar16[0xc40];
                                            if (uVar17 == 0) {
                                              return puVar16;
                                            }
                                            bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                            do {
                                              puVar10 = (ulong *)puVar16[0xc41];
                                              if ((ulong *)puVar16[0xc41] == (ulong *)0x0) {
                                                uVar17 = puVar16[0xc40];
                                                puVar11 = (ulong *)_malloc(0x6220);
                                                if (puVar11 == (ulong *)0x0) {
                                                  auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x6220);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0xc0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0xc1];
                                                    if ((ulong *)puVar16[0xc1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0xc0];
                                                      puVar11 = (ulong *)_malloc(0x620);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x620);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x1a0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x1a1];
                                                    if ((ulong *)puVar16[0x1a1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x1a0];
                                                      puVar11 = (ulong *)_malloc(0xd20);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xd20);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x820];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x821];
                                                    if ((ulong *)puVar16[0x821] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x820];
                                                      puVar11 = (ulong *)_malloc(0x4120);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x4120);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x2c0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x2c1];
                                                    if ((ulong *)puVar16[0x2c1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x2c0];
                                                      puVar11 = (ulong *)_malloc(0x1620);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1620);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x200];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x201];
                                                    if ((ulong *)puVar16[0x201] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x200];
                                                      puVar11 = (ulong *)_malloc(0x1020);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1020);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0xa0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0xa1];
                                                    if ((ulong *)puVar16[0xa1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0xa0];
                                                      puVar11 = (ulong *)_malloc(0x520);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x520);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0xd40];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0xd41];
                                                    if ((ulong *)puVar16[0xd41] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0xd40];
                                                      puVar11 = (ulong *)_malloc(0x6a20);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x6a20);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x2a0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x2a1];
                                                    if ((ulong *)puVar16[0x2a1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x2a0];
                                                      puVar11 = (ulong *)_malloc(0x1520);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1520);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[800];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x321];
                                                    if ((ulong *)puVar16[0x321] == (ulong *)0x0) {
                                                      uVar17 = puVar16[800];
                                                      puVar11 = (ulong *)_malloc(0x1920);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x1920);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0xe0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0xe1];
                                                    if ((ulong *)puVar16[0xe1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0xe0];
                                                      puVar11 = (ulong *)_malloc(0x720);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x720);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x160];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x161];
                                                    if ((ulong *)puVar16[0x161] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x160];
                                                      puVar11 = (ulong *)_malloc(0xb20);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xb20);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x1c0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x1c1];
                                                    if ((ulong *)puVar16[0x1c1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x1c0];
                                                      puVar11 = (ulong *)_malloc(0xe20);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xe20);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x4a0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x4a1];
                                                    if ((ulong *)puVar16[0x4a1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x4a0];
                                                      puVar11 = (ulong *)_malloc(0x2520);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x2520);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x40];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x41];
                                                    if ((ulong *)puVar16[0x41] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x40];
                                                      puVar11 = (ulong *)_malloc(0x220);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x220);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x840];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x841];
                                                    if ((ulong *)puVar16[0x841] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x840];
                                                      puVar11 = (ulong *)_malloc(0x4220);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x4220);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x60];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x61];
                                                    if ((ulong *)puVar16[0x61] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x60];
                                                      puVar11 = (ulong *)_malloc(800);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,800);
                                                  puVar9 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar9;
                                                  uVar17 = uVar8 - puVar16[0x1e0];
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar10 = (ulong *)puVar16[0x1e1];
                                                    if ((ulong *)puVar16[0x1e1] == (ulong *)0x0) {
                                                      uVar17 = puVar16[0x1e0];
                                                      puVar11 = (ulong *)_malloc(0xf20);
                                                      if (puVar11 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0xf20);
                                                  puVar13 = auVar27._0_8_;
                                                  uVar8 = auVar27._8_8_ & 0xffffffffffffffe0;
                                                  puVar16 = (ulong *)*puVar13;
                                                  uVar17 = uVar8 - *puVar16;
                                                  if (uVar17 == 0) {
                                                    return puVar16;
                                                  }
                                                  bVar6 = (auVar27._8_8_ & 0x1f) < uVar17 >> 5;
                                                  do {
                                                    puVar9 = (ulong *)puVar16[1];
                                                    if ((ulong *)puVar16[1] == (ulong *)0x0) {
                                                      uVar17 = *puVar16;
                                                      puVar10 = (ulong *)_malloc(0x20);
                                                      if (puVar10 == (ulong *)0x0) {
                                                        auVar27 = 
                                                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                                                            (8,0x20);
                                                  lVar7 = auVar27._8_8_;
                                                  puVar13 = auVar27._0_8_;
                                                  bVar3 = *(byte *)(lVar7 + 0x478);
                                                  if (bVar3 < 2) {
                                                    if (bVar3 == 0) {
                                                      plVar22 = *(long **)(lVar7 + 0x1f8);
                                                      *(undefined1 *)(lVar7 + 0x479) = 1;
                                                      _memcpy(lVar7 + 0x200,lVar7,0x1f8);
                                                      *(long **)(lVar7 + 0x3f8) = plVar22;
                                                      *(undefined1 *)(lVar7 + 0x470) = 0;
LAB_100fcc67c:
                                                      *(long **)(lVar7 + 0x400) = plVar22;
                                                      *(long **)(lVar7 + 0x408) = plVar22;
                                                      uVar17 = 1;
                                                      *(undefined8 *)(lVar7 + 0x410) = 1;
                                                      *(undefined1 *)(lVar7 + 0x428) = 0;
LAB_100fcc698:
                                                      *(long **)(lVar7 + 0x418) = plVar22;
                                                      *(ulong *)(lVar7 + 0x420) = uVar17;
                                                      lVar12 = *plVar22;
                                                      if (*(ulong *)(lVar12 + 0x1e8) < uVar17) {
LAB_100fcc6b0:
                                                        *(undefined1 *)(lVar7 + 0x428) = 1;
LAB_100fcc784:
                                                        *(undefined1 *)(lVar7 + 0x470) = 1;
                                                        *(undefined1 *)(lVar7 + 0x479) = 0;
                                                        uVar19 = *(undefined8 *)(lVar7 + 0x200);
                                                        _memcpy(auStack_ef0,lVar7 + 0x208,0x1f0);
                                                      }
                                                      else {
LAB_100fcc6f8:
                                                        uStack_10e0 = 0;
                                                        uStack_10d8 = 0;
                                                        *(long *)(lVar7 + 0x430) = lVar12 + 0x1c0;
                                                        *(undefined8 *)(lVar7 + 0x438) = 0;
                                                        *(undefined8 *)(lVar7 + 0x450) = 0;
                                                        *(undefined8 *)(lVar7 + 0x448) = 0;
                                                        *(undefined8 *)(lVar7 + 0x440) = uStack_10e8
                                                        ;
                                                        *(ulong *)(lVar7 + 0x458) = uVar17;
                                                        *(ulong *)(lVar7 + 0x460) = uVar17;
                                                        *(undefined1 *)(lVar7 + 0x468) = 0;
LAB_100fcc720:
                                                        puVar16 = (ulong *)
                                                  __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                                                            (lVar7 + 0x430,plVar20);
                                                  if (((uint)puVar16 & 0xff) == 2) {
                                                    *(undefined1 *)(lVar7 + 0x428) = 4;
                                                    uVar15 = 3;
                                                    *(undefined1 *)(lVar7 + 0x470) = 3;
                                                    *puVar13 = 0x8000000000000045;
                                                    goto LAB_100fcc7c0;
                                                  }
                                                  __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                                                            (lVar7 + 0x430);
                                                  if (*(long *)(lVar7 + 0x438) != 0) {
                                                    (**(code **)(*(long *)(lVar7 + 0x438) + 0x18))
                                                              (*(undefined8 *)(lVar7 + 0x440));
                                                  }
                                                  *(undefined1 *)(lVar7 + 0x428) = 1;
                                                  if (((ulong)puVar16 & 1) != 0) goto LAB_100fcc784;
                                                  plVar20 = *(long **)(lVar7 + 0x400);
                                                  *(undefined1 *)(lVar7 + 0x470) = 1;
                                                  *(undefined1 *)(lVar7 + 0x479) = 0;
                                                  _memcpy(&uStack_10e8,lVar7 + 0x200,0x1f8);
                                                  lVar21 = *plVar20;
                                                  LOAcquire();
                                                  uVar17 = *(ulong *)(lVar21 + 0x88);
                                                  *(ulong *)(lVar21 + 0x88) = uVar17 + 1;
                                                  lVar12 = FUN_100fca4a4(lVar21 + 0x80,uVar17);
                                                  _memcpy(lVar12 + (uVar17 & 0x1f) * 0x1f8,
                                                          &uStack_10e8,0x1f8);
                                                  *(ulong *)(lVar12 + 0x3f10) =
                                                       *(ulong *)(lVar12 + 0x3f10) |
                                                       1L << (uVar17 & 0x1f);
                                                  LORelease();
                                                  puVar16 = (ulong *)(lVar21 + 0x110);
                                                  LOAcquire();
                                                  uVar17 = *puVar16;
                                                  *puVar16 = uVar17 | 2;
                                                  LORelease();
                                                  if (uVar17 == 0) {
                                                    lVar12 = *(long *)(lVar21 + 0x100);
                                                    *(undefined8 *)(lVar21 + 0x100) = 0;
                                                    *puVar16 = in_xzr;
                                                    LORelease();
                                                    if (lVar12 != 0) {
                                                      (**(code **)(lVar12 + 8))
                                                                (*(undefined8 *)(lVar21 + 0x108));
                                                    }
                                                  }
                                                  uVar19 = 0x8000000000000044;
                                                  }
                                                  *(undefined1 *)(lVar7 + 0x479) = 0;
                                                  *puVar13 = uVar19;
                                                  puVar16 = (ulong *)_memcpy(puVar13 + 1,auStack_ef0
                                                                             ,0x1f0);
                                                  uVar15 = 1;
LAB_100fcc7c0:
                                                  *(undefined1 *)(lVar7 + 0x478) = uVar15;
                                                  return puVar16;
                                                  }
                                                  func_0x000108a07af4(&UNK_10b23a730);
LAB_100fcc898:
                                                  func_0x000108a07b10(&UNK_10b23a730);
                                                  }
                                                  else {
                                                    if (bVar3 != 3) goto LAB_100fcc898;
                                                    bVar3 = *(byte *)(lVar7 + 0x470);
                                                    if (1 < bVar3) {
                                                      if (bVar3 != 3) {
                                                        func_0x000108a07b10(&UNK_10b23a748);
                                                        goto LAB_100fcc8e8;
                                                      }
                                                      bVar3 = *(byte *)(lVar7 + 0x428);
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
                                                        plVar22 = *(long **)(lVar7 + 0x408);
                                                        uVar17 = *(ulong *)(lVar7 + 0x410);
                                                        goto LAB_100fcc698;
                                                      }
                                                      if (bVar3 != 3) goto LAB_100fcc720;
                                                      uVar17 = *(ulong *)(lVar7 + 0x420);
                                                      lVar12 = **(long **)(lVar7 + 0x418);
                                                      if (uVar17 <= *(ulong *)(lVar12 + 0x1e8))
                                                      goto LAB_100fcc6f8;
                                                      goto LAB_100fcc6b0;
                                                    }
                                                    if (bVar3 == 0) {
                                                      plVar22 = *(long **)(lVar7 + 0x3f8);
                                                      goto LAB_100fcc67c;
                                                    }
                                                  }
                                                  func_0x000108a07af4(&UNK_10b23a748);
LAB_100fcc8e8:
                    /* WARNING: Does not return */
                                                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100fcc8ec)
                                                  ;
                                                  (*pcVar5)();
                                                  }
                                                  *puVar10 = uVar17 + 0x20;
                                                  puVar10[1] = 0;
                                                  puVar10[2] = 0;
                                                  puVar10[3] = 0;
                                                  puVar9 = (ulong *)puVar16[1];
                                                  if (puVar9 == (ulong *)0x0) {
                                                    puVar16[1] = (ulong)puVar10;
                                                    puVar9 = puVar10;
                                                  }
                                                  else {
                                                    *puVar10 = *puVar9 + 0x20;
                                                    plVar22 = (long *)puVar9[1];
                                                    if (plVar22 == (long *)0x0) {
                                                      puVar9[1] = (ulong)puVar10;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        plVar14 = plVar22 + 1;
                                                        *puVar10 = *plVar22 + 0x20;
                                                        plVar22 = (long *)*plVar14;
                                                      } while (plVar22 != (long *)0x0);
                                                      *plVar14 = (long)puVar10;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[2] == -1)) &&
                                                     ((ulong *)*puVar13 == puVar16)) {
                                                    *puVar13 = puVar9;
                                                    uVar17 = puVar13[1];
                                                    puVar13[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[3] = uVar17;
                                                    puVar16[2] = puVar16[2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = *puVar9;
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = *puVar9;
                                                  }
                                                  puVar16 = puVar9;
                                                  if (uVar17 == uVar8) {
                                                    return puVar9;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x1e0] = uVar17 + 0x20;
                                                  puVar11[0x1e1] = 0;
                                                  puVar11[0x1e3] = 0;
                                                  puVar11[0x1e2] = 0;
                                                  puVar10 = (ulong *)puVar16[0x1e1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x1e1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x1e0] = puVar10[0x1e0] + 0x20;
                                                    uVar17 = puVar10[0x1e1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x1e1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x1e0] =
                                                             *(long *)(uVar17 + 0xf00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xf08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x1e2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x1e3] = uVar17;
                                                    puVar16[0x1e2] = puVar16[0x1e2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1e0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1e0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x60] = uVar17 + 0x20;
                                                  puVar11[0x61] = 0;
                                                  puVar11[99] = 0;
                                                  puVar11[0x62] = 0;
                                                  puVar10 = (ulong *)puVar16[0x61];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x61] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x60] = puVar10[0x60] + 0x20;
                                                    uVar17 = puVar10[0x61];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x61] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x60] =
                                                             *(long *)(uVar17 + 0x300) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x308);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x62] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[99] = uVar17;
                                                    puVar16[0x62] = puVar16[0x62] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x60];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x60];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x840] = uVar17 + 0x20;
                                                  puVar11[0x841] = 0;
                                                  puVar11[0x843] = 0;
                                                  puVar11[0x842] = 0;
                                                  puVar10 = (ulong *)puVar16[0x841];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x841] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x840] = puVar10[0x840] + 0x20;
                                                    uVar17 = puVar10[0x841];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x841] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x840] =
                                                             *(long *)(uVar17 + 0x4200) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x4208);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x842] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x843] = uVar17;
                                                    puVar16[0x842] = puVar16[0x842] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x840];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x840];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x40] = uVar17 + 0x20;
                                                  puVar11[0x41] = 0;
                                                  puVar11[0x43] = 0;
                                                  puVar11[0x42] = 0;
                                                  puVar10 = (ulong *)puVar16[0x41];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x41] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x40] = puVar10[0x40] + 0x20;
                                                    uVar17 = puVar10[0x41];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x41] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x40] =
                                                             *(long *)(uVar17 + 0x200) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x208);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x42] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x43] = uVar17;
                                                    puVar16[0x42] = puVar16[0x42] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x40];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x40];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x4a0] = uVar17 + 0x20;
                                                  puVar11[0x4a1] = 0;
                                                  puVar11[0x4a3] = 0;
                                                  puVar11[0x4a2] = 0;
                                                  puVar10 = (ulong *)puVar16[0x4a1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x4a1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x4a0] = puVar10[0x4a0] + 0x20;
                                                    uVar17 = puVar10[0x4a1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x4a1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x4a0] =
                                                             *(long *)(uVar17 + 0x2500) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x2508);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x4a2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x4a3] = uVar17;
                                                    puVar16[0x4a2] = puVar16[0x4a2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x4a0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x4a0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x1c0] = uVar17 + 0x20;
                                                  puVar11[0x1c1] = 0;
                                                  puVar11[0x1c3] = 0;
                                                  puVar11[0x1c2] = 0;
                                                  puVar10 = (ulong *)puVar16[0x1c1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x1c1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x1c0] = puVar10[0x1c0] + 0x20;
                                                    uVar17 = puVar10[0x1c1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x1c1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x1c0] =
                                                             *(long *)(uVar17 + 0xe00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xe08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x1c2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x1c3] = uVar17;
                                                    puVar16[0x1c2] = puVar16[0x1c2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1c0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1c0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x160] = uVar17 + 0x20;
                                                  puVar11[0x161] = 0;
                                                  puVar11[0x163] = 0;
                                                  puVar11[0x162] = 0;
                                                  puVar10 = (ulong *)puVar16[0x161];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x161] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x160] = puVar10[0x160] + 0x20;
                                                    uVar17 = puVar10[0x161];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x161] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x160] =
                                                             *(long *)(uVar17 + 0xb00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xb08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x162] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x163] = uVar17;
                                                    puVar16[0x162] = puVar16[0x162] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x160];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x160];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0xe0] = uVar17 + 0x20;
                                                  puVar11[0xe1] = 0;
                                                  puVar11[0xe3] = 0;
                                                  puVar11[0xe2] = 0;
                                                  puVar10 = (ulong *)puVar16[0xe1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0xe1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0xe0] = puVar10[0xe0] + 0x20;
                                                    uVar17 = puVar10[0xe1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xe1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0xe0] =
                                                             *(long *)(uVar17 + 0x700) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x708);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0xe2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0xe3] = uVar17;
                                                    puVar16[0xe2] = puVar16[0xe2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xe0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xe0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[800] = uVar17 + 0x20;
                                                  puVar11[0x321] = 0;
                                                  puVar11[0x323] = 0;
                                                  puVar11[0x322] = 0;
                                                  puVar10 = (ulong *)puVar16[0x321];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x321] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[800] = puVar10[800] + 0x20;
                                                    uVar17 = puVar10[0x321];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x321] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[800] = *(long *)(uVar17 + 0x1900) +
                                                                       0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1908);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x322] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x323] = uVar17;
                                                    puVar16[0x322] = puVar16[0x322] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[800];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[800];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x2a0] = uVar17 + 0x20;
                                                  puVar11[0x2a1] = 0;
                                                  puVar11[0x2a3] = 0;
                                                  puVar11[0x2a2] = 0;
                                                  puVar10 = (ulong *)puVar16[0x2a1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x2a1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x2a0] = puVar10[0x2a0] + 0x20;
                                                    uVar17 = puVar10[0x2a1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x2a1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x2a0] =
                                                             *(long *)(uVar17 + 0x1500) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1508);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x2a2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x2a3] = uVar17;
                                                    puVar16[0x2a2] = puVar16[0x2a2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2a0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2a0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0xd40] = uVar17 + 0x20;
                                                  puVar11[0xd41] = 0;
                                                  puVar11[0xd43] = 0;
                                                  puVar11[0xd42] = 0;
                                                  puVar10 = (ulong *)puVar16[0xd41];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0xd41] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0xd40] = puVar10[0xd40] + 0x20;
                                                    uVar17 = puVar10[0xd41];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xd41] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0xd40] =
                                                             *(long *)(uVar17 + 0x6a00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x6a08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0xd42] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0xd43] = uVar17;
                                                    puVar16[0xd42] = puVar16[0xd42] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xd40];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xd40];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0xa0] = uVar17 + 0x20;
                                                  puVar11[0xa1] = 0;
                                                  puVar11[0xa3] = 0;
                                                  puVar11[0xa2] = 0;
                                                  puVar10 = (ulong *)puVar16[0xa1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0xa1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0xa0] = puVar10[0xa0] + 0x20;
                                                    uVar17 = puVar10[0xa1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xa1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0xa0] =
                                                             *(long *)(uVar17 + 0x500) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x508);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0xa2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0xa3] = uVar17;
                                                    puVar16[0xa2] = puVar16[0xa2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xa0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xa0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x200] = uVar17 + 0x20;
                                                  puVar11[0x201] = 0;
                                                  puVar11[0x203] = 0;
                                                  puVar11[0x202] = 0;
                                                  puVar10 = (ulong *)puVar16[0x201];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x201] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x200] = puVar10[0x200] + 0x20;
                                                    uVar17 = puVar10[0x201];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x201] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x200] =
                                                             *(long *)(uVar17 + 0x1000) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1008);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x202] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x203] = uVar17;
                                                    puVar16[0x202] = puVar16[0x202] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x200];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x200];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x2c0] = uVar17 + 0x20;
                                                  puVar11[0x2c1] = 0;
                                                  puVar11[0x2c3] = 0;
                                                  puVar11[0x2c2] = 0;
                                                  puVar10 = (ulong *)puVar16[0x2c1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x2c1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x2c0] = puVar10[0x2c0] + 0x20;
                                                    uVar17 = puVar10[0x2c1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x2c1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x2c0] =
                                                             *(long *)(uVar17 + 0x1600) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x1608);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x2c2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x2c3] = uVar17;
                                                    puVar16[0x2c2] = puVar16[0x2c2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2c0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x2c0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x820] = uVar17 + 0x20;
                                                  puVar11[0x821] = 0;
                                                  puVar11[0x823] = 0;
                                                  puVar11[0x822] = 0;
                                                  puVar10 = (ulong *)puVar16[0x821];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x821] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x820] = puVar10[0x820] + 0x20;
                                                    uVar17 = puVar10[0x821];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x821] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x820] =
                                                             *(long *)(uVar17 + 0x4100) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x4108);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x822] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x823] = uVar17;
                                                    puVar16[0x822] = puVar16[0x822] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x820];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x820];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0x1a0] = uVar17 + 0x20;
                                                  puVar11[0x1a1] = 0;
                                                  puVar11[0x1a3] = 0;
                                                  puVar11[0x1a2] = 0;
                                                  puVar10 = (ulong *)puVar16[0x1a1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0x1a1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0x1a0] = puVar10[0x1a0] + 0x20;
                                                    uVar17 = puVar10[0x1a1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0x1a1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0x1a0] =
                                                             *(long *)(uVar17 + 0xd00) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0xd08);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0x1a2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0x1a3] = uVar17;
                                                    puVar16[0x1a2] = puVar16[0x1a2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1a0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0x1a0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                  }
                                                  puVar11[0xc0] = uVar17 + 0x20;
                                                  puVar11[0xc1] = 0;
                                                  puVar11[0xc3] = 0;
                                                  puVar11[0xc2] = 0;
                                                  puVar10 = (ulong *)puVar16[0xc1];
                                                  if (puVar10 == (ulong *)0x0) {
                                                    puVar16[0xc1] = (ulong)puVar11;
                                                    puVar10 = puVar11;
                                                  }
                                                  else {
                                                    puVar11[0xc0] = puVar10[0xc0] + 0x20;
                                                    uVar17 = puVar10[0xc1];
                                                    if (uVar17 == 0) {
                                                      puVar10[0xc1] = (ulong)puVar11;
                                                    }
                                                    else {
                                                      do {
                                                        InstructionSynchronizationBarrier();
                                                        puVar11[0xc0] =
                                                             *(long *)(uVar17 + 0x600) + 0x20;
                                                        puVar2 = (ulong *)(uVar17 + 0x608);
                                                        uVar17 = *puVar2;
                                                      } while (uVar17 != 0);
                                                      *puVar2 = (ulong)puVar11;
                                                    }
                                                  }
                                                  }
                                                  if (((bool)(bVar6 & (int)puVar16[0xc2] == -1)) &&
                                                     ((ulong *)*puVar9 == puVar16)) {
                                                    *puVar9 = (ulong)puVar10;
                                                    uVar17 = puVar9[1];
                                                    puVar9[1] = uVar17 | in_xzr;
                                                    LORelease();
                                                    puVar16[0xc3] = uVar17;
                                                    puVar16[0xc2] = puVar16[0xc2] | 0x100000000;
                                                    LORelease();
                                                    bVar6 = true;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xc0];
                                                  }
                                                  else {
                                                    bVar6 = false;
                                                    InstructionSynchronizationBarrier();
                                                    uVar17 = puVar10[0xc0];
                                                  }
                                                  puVar16 = puVar10;
                                                  if (uVar17 == uVar8) {
                                                    return puVar10;
                                                  }
                                                  } while( true );
                                                }
                                                puVar11[0xc40] = uVar17 + 0x20;
                                                puVar11[0xc41] = 0;
                                                puVar11[0xc43] = 0;
                                                puVar11[0xc42] = 0;
                                                puVar10 = (ulong *)puVar16[0xc41];
                                                if (puVar10 == (ulong *)0x0) {
                                                  puVar16[0xc41] = (ulong)puVar11;
                                                  puVar10 = puVar11;
                                                }
                                                else {
                                                  puVar11[0xc40] = puVar10[0xc40] + 0x20;
                                                  uVar17 = puVar10[0xc41];
                                                  if (uVar17 == 0) {
                                                    puVar10[0xc41] = (ulong)puVar11;
                                                  }
                                                  else {
                                                    do {
                                                      InstructionSynchronizationBarrier();
                                                      puVar11[0xc40] =
                                                           *(long *)(uVar17 + 0x6200) + 0x20;
                                                      puVar2 = (ulong *)(uVar17 + 0x6208);
                                                      uVar17 = *puVar2;
                                                    } while (uVar17 != 0);
                                                    *puVar2 = (ulong)puVar11;
                                                  }
                                                }
                                              }
                                              if (((bool)(bVar6 & (int)puVar16[0xc42] == -1)) &&
                                                 ((ulong *)*puVar9 == puVar16)) {
                                                *puVar9 = (ulong)puVar10;
                                                uVar17 = puVar9[1];
                                                puVar9[1] = uVar17 | in_xzr;
                                                LORelease();
                                                puVar16[0xc43] = uVar17;
                                                puVar16[0xc42] = puVar16[0xc42] | 0x100000000;
                                                LORelease();
                                                bVar6 = true;
                                                InstructionSynchronizationBarrier();
                                                uVar17 = puVar10[0xc40];
                                              }
                                              else {
                                                bVar6 = false;
                                                InstructionSynchronizationBarrier();
                                                uVar17 = puVar10[0xc40];
                                              }
                                              puVar16 = puVar10;
                                              if (uVar17 == uVar8) {
                                                return puVar10;
                                              }
                                            } while( true );
                                          }
                                          puVar11[0x480] = uVar17 + 0x20;
                                          puVar11[0x481] = 0;
                                          puVar11[0x483] = 0;
                                          puVar11[0x482] = 0;
                                          puVar10 = (ulong *)puVar16[0x481];
                                          if (puVar10 == (ulong *)0x0) {
                                            puVar16[0x481] = (ulong)puVar11;
                                            puVar10 = puVar11;
                                          }
                                          else {
                                            puVar11[0x480] = puVar10[0x480] + 0x20;
                                            uVar17 = puVar10[0x481];
                                            if (uVar17 == 0) {
                                              puVar10[0x481] = (ulong)puVar11;
                                            }
                                            else {
                                              do {
                                                InstructionSynchronizationBarrier();
                                                puVar11[0x480] = *(long *)(uVar17 + 0x2400) + 0x20;
                                                puVar2 = (ulong *)(uVar17 + 0x2408);
                                                uVar17 = *puVar2;
                                              } while (uVar17 != 0);
                                              *puVar2 = (ulong)puVar11;
                                            }
                                          }
                                        }
                                        if (((bool)(bVar6 & (int)puVar16[0x482] == -1)) &&
                                           ((ulong *)*puVar9 == puVar16)) {
                                          *puVar9 = (ulong)puVar10;
                                          uVar17 = puVar9[1];
                                          puVar9[1] = uVar17 | in_xzr;
                                          LORelease();
                                          puVar16[0x483] = uVar17;
                                          puVar16[0x482] = puVar16[0x482] | 0x100000000;
                                          LORelease();
                                          bVar6 = true;
                                          InstructionSynchronizationBarrier();
                                          uVar17 = puVar10[0x480];
                                        }
                                        else {
                                          bVar6 = false;
                                          InstructionSynchronizationBarrier();
                                          uVar17 = puVar10[0x480];
                                        }
                                        puVar16 = puVar10;
                                        if (uVar17 == uVar8) {
                                          return puVar10;
                                        }
                                      } while( true );
                                    }
                                    puVar11[0x20] = uVar17 + 0x20;
                                    puVar11[0x21] = 0;
                                    puVar11[0x22] = 0;
                                    puVar11[0x23] = 0;
                                    puVar10 = (ulong *)puVar16[0x21];
                                    if (puVar10 == (ulong *)0x0) {
                                      puVar16[0x21] = (ulong)puVar11;
                                      puVar10 = puVar11;
                                    }
                                    else {
                                      puVar11[0x20] = puVar10[0x20] + 0x20;
                                      uVar17 = puVar10[0x21];
                                      if (uVar17 == 0) {
                                        puVar10[0x21] = (ulong)puVar11;
                                      }
                                      else {
                                        do {
                                          InstructionSynchronizationBarrier();
                                          puVar11[0x20] = *(long *)(uVar17 + 0x100) + 0x20;
                                          puVar2 = (ulong *)(uVar17 + 0x108);
                                          uVar17 = *puVar2;
                                        } while (uVar17 != 0);
                                        *puVar2 = (ulong)puVar11;
                                      }
                                    }
                                  }
                                  if (((bool)(bVar6 & (int)puVar16[0x22] == -1)) &&
                                     ((ulong *)*puVar9 == puVar16)) {
                                    *puVar9 = (ulong)puVar10;
                                    uVar17 = puVar9[1];
                                    puVar9[1] = uVar17 | in_xzr;
                                    LORelease();
                                    puVar16[0x23] = uVar17;
                                    puVar16[0x22] = puVar16[0x22] | 0x100000000;
                                    LORelease();
                                    bVar6 = true;
                                    InstructionSynchronizationBarrier();
                                    uVar17 = puVar10[0x20];
                                  }
                                  else {
                                    bVar6 = false;
                                    InstructionSynchronizationBarrier();
                                    uVar17 = puVar10[0x20];
                                  }
                                  puVar16 = puVar10;
                                  if (uVar17 == uVar8) {
                                    return puVar10;
                                  }
                                } while( true );
                              }
                              puVar11[0x220] = uVar17 + 0x20;
                              puVar11[0x221] = 0;
                              puVar11[0x223] = 0;
                              puVar11[0x222] = 0;
                              puVar10 = (ulong *)puVar16[0x221];
                              if (puVar10 == (ulong *)0x0) {
                                puVar16[0x221] = (ulong)puVar11;
                                puVar10 = puVar11;
                              }
                              else {
                                puVar11[0x220] = puVar10[0x220] + 0x20;
                                uVar17 = puVar10[0x221];
                                if (uVar17 == 0) {
                                  puVar10[0x221] = (ulong)puVar11;
                                }
                                else {
                                  do {
                                    InstructionSynchronizationBarrier();
                                    puVar11[0x220] = *(long *)(uVar17 + 0x1100) + 0x20;
                                    puVar2 = (ulong *)(uVar17 + 0x1108);
                                    uVar17 = *puVar2;
                                  } while (uVar17 != 0);
                                  *puVar2 = (ulong)puVar11;
                                }
                              }
                            }
                            if (((bool)(bVar6 & (int)puVar16[0x222] == -1)) &&
                               ((ulong *)*puVar9 == puVar16)) {
                              *puVar9 = (ulong)puVar10;
                              uVar17 = puVar9[1];
                              puVar9[1] = uVar17 | in_xzr;
                              LORelease();
                              puVar16[0x223] = uVar17;
                              puVar16[0x222] = puVar16[0x222] | 0x100000000;
                              LORelease();
                              bVar6 = true;
                              InstructionSynchronizationBarrier();
                              uVar17 = puVar10[0x220];
                            }
                            else {
                              bVar6 = false;
                              InstructionSynchronizationBarrier();
                              uVar17 = puVar10[0x220];
                            }
                            puVar16 = puVar10;
                            if (uVar17 == uVar8) {
                              return puVar10;
                            }
                          } while( true );
                        }
                        puVar11[0x7e0] = uVar17 + 0x20;
                        puVar11[0x7e1] = 0;
                        puVar11[0x7e3] = 0;
                        puVar11[0x7e2] = 0;
                        puVar10 = (ulong *)puVar16[0x7e1];
                        if (puVar10 == (ulong *)0x0) {
                          puVar16[0x7e1] = (ulong)puVar11;
                          puVar10 = puVar11;
                        }
                        else {
                          puVar11[0x7e0] = puVar10[0x7e0] + 0x20;
                          uVar17 = puVar10[0x7e1];
                          if (uVar17 == 0) {
                            puVar10[0x7e1] = (ulong)puVar11;
                          }
                          else {
                            do {
                              InstructionSynchronizationBarrier();
                              puVar11[0x7e0] = *(long *)(uVar17 + 0x3f00) + 0x20;
                              puVar2 = (ulong *)(uVar17 + 0x3f08);
                              uVar17 = *puVar2;
                            } while (uVar17 != 0);
                            *puVar2 = (ulong)puVar11;
                          }
                        }
                      }
                      if (((bool)(bVar6 & (int)puVar16[0x7e2] == -1)) &&
                         ((ulong *)*puVar9 == puVar16)) {
                        *puVar9 = (ulong)puVar10;
                        uVar17 = puVar9[1];
                        puVar9[1] = uVar17 | in_xzr;
                        LORelease();
                        puVar16[0x7e3] = uVar17;
                        puVar16[0x7e2] = puVar16[0x7e2] | 0x100000000;
                        LORelease();
                        bVar6 = true;
                        InstructionSynchronizationBarrier();
                        uVar17 = puVar10[0x7e0];
                      }
                      else {
                        bVar6 = false;
                        InstructionSynchronizationBarrier();
                        uVar17 = puVar10[0x7e0];
                      }
                      puVar16 = puVar10;
                      if (uVar17 == uVar8) {
                        return puVar10;
                      }
                    } while( true );
                  }
                  puVar11[0x100] = uVar17 + 0x20;
                  puVar11[0x101] = 0;
                  puVar11[0x103] = 0;
                  puVar11[0x102] = 0;
                  puVar10 = (ulong *)puVar16[0x101];
                  if (puVar10 == (ulong *)0x0) {
                    puVar16[0x101] = (ulong)puVar11;
                    puVar10 = puVar11;
                  }
                  else {
                    puVar11[0x100] = puVar10[0x100] + 0x20;
                    uVar17 = puVar10[0x101];
                    if (uVar17 == 0) {
                      puVar10[0x101] = (ulong)puVar11;
                    }
                    else {
                      do {
                        InstructionSynchronizationBarrier();
                        puVar11[0x100] = *(long *)(uVar17 + 0x800) + 0x20;
                        puVar2 = (ulong *)(uVar17 + 0x808);
                        uVar17 = *puVar2;
                      } while (uVar17 != 0);
                      *puVar2 = (ulong)puVar11;
                    }
                  }
                }
                if (((bool)(bVar6 & (int)puVar16[0x102] == -1)) && ((ulong *)*puVar9 == puVar16)) {
                  *puVar9 = (ulong)puVar10;
                  uVar17 = puVar9[1];
                  puVar9[1] = uVar17 | in_xzr;
                  LORelease();
                  puVar16[0x103] = uVar17;
                  puVar16[0x102] = puVar16[0x102] | 0x100000000;
                  LORelease();
                  bVar6 = true;
                  InstructionSynchronizationBarrier();
                  uVar17 = puVar10[0x100];
                }
                else {
                  bVar6 = false;
                  InstructionSynchronizationBarrier();
                  uVar17 = puVar10[0x100];
                }
                puVar16 = puVar10;
                if (uVar17 == uVar8) {
                  return puVar10;
                }
              } while( true );
            }
            puVar11[0xd20] = uVar17 + 0x20;
            puVar11[0xd21] = 0;
            puVar11[0xd23] = 0;
            puVar11[0xd22] = 0;
            puVar10 = (ulong *)puVar16[0xd21];
            if (puVar10 == (ulong *)0x0) {
              puVar16[0xd21] = (ulong)puVar11;
              puVar10 = puVar11;
            }
            else {
              puVar11[0xd20] = puVar10[0xd20] + 0x20;
              uVar17 = puVar10[0xd21];
              if (uVar17 == 0) {
                puVar10[0xd21] = (ulong)puVar11;
              }
              else {
                do {
                  InstructionSynchronizationBarrier();
                  puVar11[0xd20] = *(long *)(uVar17 + 0x6900) + 0x20;
                  puVar2 = (ulong *)(uVar17 + 0x6908);
                  uVar17 = *puVar2;
                } while (uVar17 != 0);
                *puVar2 = (ulong)puVar11;
              }
            }
          }
          if (((bool)(bVar6 & (int)puVar16[0xd22] == -1)) && ((ulong *)*puVar9 == puVar16)) {
            *puVar9 = (ulong)puVar10;
            uVar17 = puVar9[1];
            puVar9[1] = uVar17 | in_xzr;
            LORelease();
            puVar16[0xd23] = uVar17;
            puVar16[0xd22] = puVar16[0xd22] | 0x100000000;
            LORelease();
            bVar6 = true;
            InstructionSynchronizationBarrier();
            uVar17 = puVar10[0xd20];
          }
          else {
            bVar6 = false;
            InstructionSynchronizationBarrier();
            uVar17 = puVar10[0xd20];
          }
          puVar16 = puVar10;
          if (uVar17 == uVar8) {
            return puVar10;
          }
        } while( true );
      }
      puVar10[1] = puVar11[0x481];
      puVar11[0x480] = 0;
      puVar11[0x482] = 0;
      puVar11[0x481] = 0;
      lVar7 = *plVar14;
      puVar11[0x480] = *(long *)(lVar7 + 0x2400) + 0x20;
      puVar16 = (ulong *)(lVar7 + 0x2408);
      uVar17 = *puVar16;
      if (uVar17 == 0) {
        *puVar16 = (ulong)puVar11;
      }
      else {
        puVar11[0x480] = *(long *)(uVar17 + 0x2400) + 0x20;
        uVar8 = *(ulong *)(uVar17 + 0x2408);
        if (uVar8 == 0) {
          *(ulong *)(uVar17 + 0x2408) = (ulong)puVar11;
        }
        else {
          puVar11[0x480] = *(long *)(uVar8 + 0x2400) + 0x20;
          if (*(ulong *)(uVar8 + 0x2408) == 0) {
            *(ulong *)(uVar8 + 0x2408) = (ulong)puVar11;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar11 = (ulong *)puVar10[1];
    } while (puVar11 != (ulong *)*puVar10);
    puVar16 = (ulong *)*puVar10;
  }
  if ((puVar16[0x482] >> (puVar10[2] & 0x1f) & 1) != 0) {
    puVar16 = (ulong *)_memcpy(puVar9,puVar16 + (puVar10[2] & 0x1f) * 0x24,0x120);
    if (1 < puVar9[0x20]) {
      return puVar16;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar16;
  }
  if ((puVar16[0x482] >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fca198;
  }
LAB_100fca18c:
  uVar17 = 3;
LAB_100fca198:
  puVar9[0x20] = uVar17;
  return puVar11;
LAB_100fc955c:
  puVar16 = (ulong *)*puVar13;
LAB_100fc9560:
  if ((puVar16[0x7e2] >> (puVar13[2] & 0x1f) & 1) != 0) {
    puVar16 = (ulong *)_memcpy(puVar9,puVar16 + (puVar13[2] & 0x1f) * 0x3f,0x1f8);
    if (*puVar9 + 0x7fffffffffffffbb < 2) {
      return puVar16;
    }
    puVar13[2] = puVar13[2] + 1;
    return puVar16;
  }
  if ((puVar16[0x7e2] >> 0x21 & 1) == 0) {
    *puVar9 = 0x8000000000000046;
    return puVar10;
  }
  uVar17 = 0x8000000000000045;
LAB_100fc95d8:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc9398:
  puVar16 = (ulong *)*puVar13;
LAB_100fc939c:
  if ((puVar16[0xf42] >> (puVar13[2] & 0x1f) & 1) != 0) {
    puVar16 = (ulong *)_memcpy(puVar9,puVar16 + (puVar13[2] & 0x1f) * 0x7a,0x3d0);
    if (*puVar9 + 0x7fffffffffffff5b < 2) {
      return puVar16;
    }
    puVar13[2] = puVar13[2] + 1;
    return puVar16;
  }
  if ((puVar16[0xf42] >> 0x21 & 1) == 0) {
    *puVar9 = 0x80000000000000a6;
    return puVar10;
  }
  uVar17 = 0x80000000000000a5;
LAB_100fc9414:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc8d88:
  puVar10 = (ulong *)plVar22[1];
  plVar14 = plVar20;
  if (puVar10 != puVar16) {
    do {
      if (((puVar10[0x2a2] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0x2a3])) break;
      if (puVar10[0x2a1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar10;
        uVar17 = puVar16[0xa0];
        goto joined_r0x000100fc8f44;
      }
      plVar22[1] = puVar10[0x2a1];
      puVar10[0x2a0] = 0;
      puVar10[0x2a2] = 0;
      puVar10[0x2a1] = 0;
      lVar7 = *plVar20;
      puVar10[0x2a0] = *(long *)(lVar7 + 0x1500) + 0x20;
      plVar1 = (long *)(lVar7 + 0x1508);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0x2a0] = *(long *)(lVar7 + 0x1500) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x1508);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x1508) = (long)puVar10;
        }
        else {
          puVar10[0x2a0] = *(long *)(lVar12 + 0x1500) + 0x20;
          if (*(long *)(lVar12 + 0x1508) == 0) {
            *(long *)(lVar12 + 0x1508) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar16 = (ulong *)*plVar22;
  }
  if ((puVar16[0x2a2] >> (plVar22[2] & 0x1fU) & 1) != 0) {
    puVar16 = puVar16 + (plVar22[2] & 0x1fU) * 0x15;
    uVar8 = puVar16[1];
    uVar17 = *puVar16;
    uVar18 = puVar16[2];
    uVar24 = puVar16[5];
    uVar23 = puVar16[4];
    puVar9[3] = puVar16[3];
    puVar9[2] = uVar18;
    puVar9[5] = uVar24;
    puVar9[4] = uVar23;
    puVar9[1] = uVar8;
    *puVar9 = uVar17;
    uVar8 = puVar16[7];
    uVar17 = puVar16[6];
    uVar23 = puVar16[9];
    uVar18 = puVar16[8];
    uVar24 = puVar16[10];
    uVar26 = puVar16[0xd];
    uVar25 = puVar16[0xc];
    puVar9[0xb] = puVar16[0xb];
    puVar9[10] = uVar24;
    puVar9[0xd] = uVar26;
    puVar9[0xc] = uVar25;
    puVar9[7] = uVar8;
    puVar9[6] = uVar17;
    puVar9[9] = uVar23;
    puVar9[8] = uVar18;
    uVar8 = puVar16[0xf];
    uVar17 = puVar16[0xe];
    uVar23 = puVar16[0x11];
    uVar18 = puVar16[0x10];
    uVar25 = puVar16[0x13];
    uVar24 = puVar16[0x12];
    puVar9[0x14] = puVar16[0x14];
    puVar9[0x11] = uVar23;
    puVar9[0x10] = uVar18;
    puVar9[0x13] = uVar25;
    puVar9[0x12] = uVar24;
    puVar9[0xf] = uVar8;
    puVar9[0xe] = uVar17;
    if (*puVar9 + 0x7ffffffffffffffd < 2) {
      return puVar10;
    }
    plVar22[2] = plVar22[2] + 1;
    return puVar10;
  }
  if ((puVar16[0x2a2] >> 0x21 & 1) != 0) {
    uVar17 = 0x8000000000000003;
    goto LAB_100fc8ef0;
  }
LAB_100fc8ee0:
  uVar17 = 0x8000000000000004;
LAB_100fc8ef0:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc9b88:
  puVar11 = (ulong *)puVar10[1];
  plVar20 = plVar22;
  if (puVar11 != puVar16) {
    while( true ) {
      if (((puVar11[0x822] >> 0x20 & 1) == 0) || (puVar10[2] < puVar11[0x823])) goto LAB_100fc9c50;
      if (puVar11[0x821] == 0) break;
      puVar10[1] = puVar11[0x821];
      puVar11[0x820] = 0;
      puVar11[0x822] = 0;
      puVar11[0x821] = 0;
      lVar7 = *plVar22;
      puVar11[0x820] = *(long *)(lVar7 + 0x4100) + 0x20;
      puVar16 = (ulong *)(lVar7 + 0x4108);
      uVar17 = *puVar16;
      if (uVar17 == 0) {
        *puVar16 = (ulong)puVar11;
      }
      else {
        puVar11[0x820] = *(long *)(uVar17 + 0x4100) + 0x20;
        uVar8 = *(ulong *)(uVar17 + 0x4108);
        if (uVar8 == 0) {
          *(ulong *)(uVar17 + 0x4108) = (ulong)puVar11;
        }
        else {
          puVar11[0x820] = *(long *)(uVar8 + 0x4100) + 0x20;
          if (*(ulong *)(uVar8 + 0x4108) == 0) {
            *(ulong *)(uVar8 + 0x4108) = (ulong)puVar11;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar11 = (ulong *)puVar10[1];
      if (puVar11 == (ulong *)*puVar10) goto LAB_100fc9c50;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    puVar9 = auVar27._0_8_;
    puVar16 = (ulong *)*puVar9;
    uVar17 = puVar16[0x40];
    while (uVar17 != (puVar9[2] & 0xffffffffffffffe0)) {
      puVar16 = (ulong *)puVar16[0x41];
      if (puVar16 == (ulong *)0x0) {
        return puVar9;
      }
      *puVar9 = (ulong)puVar16;
      InstructionSynchronizationBarrier();
      uVar17 = puVar16[0x40];
    }
    puVar10 = (ulong *)puVar9[1];
    if (puVar10 == puVar16) goto LAB_100fc9de4;
    do {
      if (((puVar10[0x42] >> 0x20 & 1) == 0) || (puVar9[2] < puVar10[0x43])) break;
      if (puVar10[0x41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*plVar22;
        uVar17 = puVar16[0x840];
        goto joined_r0x000100fc9e9c;
      }
      puVar9[1] = puVar10[0x41];
      puVar10[0x40] = 0;
      puVar10[0x42] = 0;
      puVar10[0x41] = 0;
      lVar7 = *auVar27._8_8_;
      puVar10[0x40] = *(long *)(lVar7 + 0x200) + 0x20;
      plVar22 = (long *)(lVar7 + 0x208);
      lVar7 = *plVar22;
      if (lVar7 == 0) {
        *plVar22 = (long)puVar10;
      }
      else {
        puVar10[0x40] = *(long *)(lVar7 + 0x200) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x208);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x208) = (long)puVar10;
        }
        else {
          puVar10[0x40] = *(long *)(lVar12 + 0x200) + 0x20;
          if (*(long *)(lVar12 + 0x208) == 0) {
            *(long *)(lVar12 + 0x208) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)puVar9[1];
    } while (puVar10 != (ulong *)*puVar9);
    puVar16 = (ulong *)*puVar9;
LAB_100fc9de4:
    uVar4 = 1000000000;
    if ((puVar16[0x42] >> (puVar9[2] & 0x1f) & 1) == 0) {
      if ((puVar16[0x42] & 0x200000000) == 0) {
        uVar4 = 0x3b9aca01;
      }
    }
    else {
      puVar10 = (ulong *)puVar16[(puVar9[2] & 0x1f) * 2];
      uVar4 = (uint)(puVar16 + (puVar9[2] & 0x1f) * 2)[1];
    }
    if ((uVar4 & 0x3ffffffe) != 1000000000) {
      puVar9[2] = puVar9[2] + 1;
    }
    return puVar10;
  }
LAB_100fc9c54:
  if ((puVar16[0x822] >> (puVar10[2] & 0x1f) & 1) != 0) {
    puVar16 = (ulong *)_memcpy(puVar9,puVar16 + (puVar10[2] & 0x1f) * 0x41,0x208);
    if (1 < *puVar9) {
      return puVar16;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar16;
  }
  if ((puVar16[0x822] >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc9cb0;
  }
LAB_100fc9ca4:
  uVar17 = 3;
LAB_100fc9cb0:
  *puVar9 = uVar17;
  return puVar11;
LAB_100fc7fa0:
  puVar10 = (ulong *)plVar22[1];
  plVar14 = plVar20;
  if (puVar10 != puVar16) {
    do {
      if (((puVar10[0xd42] >> 0x20 & 1) == 0) || ((ulong)plVar22[2] < puVar10[0xd43])) break;
      if (puVar10[0xd41] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar10 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar10;
        uVar17 = puVar16[0x160];
        goto joined_r0x000100fc8120;
      }
      plVar22[1] = puVar10[0xd41];
      puVar10[0xd40] = 0;
      puVar10[0xd42] = 0;
      puVar10[0xd41] = 0;
      lVar7 = *plVar20;
      puVar10[0xd40] = *(long *)(lVar7 + 0x6a00) + 0x20;
      plVar1 = (long *)(lVar7 + 0x6a08);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xd40] = *(long *)(lVar7 + 0x6a00) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x6a08);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x6a08) = (long)puVar10;
        }
        else {
          puVar10[0xd40] = *(long *)(lVar12 + 0x6a00) + 0x20;
          if (*(long *)(lVar12 + 0x6a08) == 0) {
            *(long *)(lVar12 + 0x6a08) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)plVar22[1];
    } while (puVar10 != (ulong *)*plVar22);
    puVar16 = (ulong *)*plVar22;
  }
  if ((puVar16[0xd42] >> (plVar22[2] & 0x1fU) & 1) == 0) {
    if ((puVar16[0xd42] >> 0x21 & 1) == 0) {
LAB_100fc80c0:
      uVar17 = 0x16;
    }
    else {
      uVar17 = 0x15;
    }
    *puVar9 = uVar17;
  }
  else {
    puVar10 = (ulong *)_memcpy(puVar9,puVar16 + (plVar22[2] & 0x1fU) * 0x6a,0x350);
    if (1 < *puVar9 - 0x15) {
      plVar22[2] = plVar22[2] + 1;
    }
  }
  return puVar10;
LAB_100fc9228:
  puVar16 = (ulong *)*puVar10;
  uVar17 = puVar10[2] & 0x1f;
  uVar8 = puVar16[0x162];
  uVar18 = uVar8 >> uVar17;
joined_r0x000100fc9240:
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 0xb;
    uVar18 = *puVar16;
    uVar8 = puVar16[3];
    uVar17 = puVar16[2];
    puVar9[1] = puVar16[1];
    *puVar9 = uVar18;
    puVar9[3] = uVar8;
    puVar9[2] = uVar17;
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar23 = puVar16[7];
    uVar18 = puVar16[6];
    uVar25 = puVar16[9];
    uVar24 = puVar16[8];
    puVar9[10] = puVar16[10];
    puVar9[7] = uVar23;
    puVar9[6] = uVar18;
    puVar9[9] = uVar25;
    puVar9[8] = uVar24;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    if (1 < *puVar9) {
      return puVar11;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar11;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc9254;
  }
LAB_100fc9248:
  uVar17 = 3;
LAB_100fc9254:
  *puVar9 = uVar17;
  return puVar11;
LAB_100fc8bc8:
  puVar11 = (ulong *)puVar10[1];
  plVar20 = plVar14;
  if (puVar11 == puVar16) {
    uVar17 = puVar10[2] & 0x1f;
    uVar8 = puVar16[0x1c2];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar11[0x1c2] >> 0x20 & 1) == 0) || (puVar10[2] < puVar11[0x1c3])) break;
      if (puVar11[0x1c1] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar22 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*plVar22;
        uVar17 = puVar16[0x2a0];
        goto joined_r0x000100fc8d60;
      }
      puVar10[1] = puVar11[0x1c1];
      puVar11[0x1c0] = 0;
      puVar11[0x1c2] = 0;
      puVar11[0x1c1] = 0;
      lVar7 = *plVar14;
      puVar11[0x1c0] = *(long *)(lVar7 + 0xe00) + 0x20;
      plVar22 = (long *)(lVar7 + 0xe08);
      lVar7 = *plVar22;
      if (lVar7 == 0) {
        *plVar22 = (long)puVar11;
      }
      else {
        puVar11[0x1c0] = *(long *)(lVar7 + 0xe00) + 0x20;
        lVar12 = *(long *)(lVar7 + 0xe08);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0xe08) = (long)puVar11;
        }
        else {
          puVar11[0x1c0] = *(long *)(lVar12 + 0xe00) + 0x20;
          if (*(long *)(lVar12 + 0xe08) == 0) {
            *(long *)(lVar12 + 0xe08) = (long)puVar11;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar11 = (ulong *)puVar10[1];
    } while (puVar11 != (ulong *)*puVar10);
    puVar16 = (ulong *)*puVar10;
    uVar17 = puVar10[2] & 0x1f;
    uVar8 = puVar16[0x1c2];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 0xe;
    uVar18 = puVar16[2];
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar24 = puVar16[1];
    uVar23 = *puVar16;
    puVar9[3] = puVar16[3];
    puVar9[2] = uVar18;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    puVar9[1] = uVar24;
    *puVar9 = uVar23;
    uVar8 = puVar16[7];
    uVar17 = puVar16[6];
    uVar23 = puVar16[9];
    uVar18 = puVar16[8];
    uVar24 = puVar16[10];
    uVar26 = puVar16[0xd];
    uVar25 = puVar16[0xc];
    puVar9[0xb] = puVar16[0xb];
    puVar9[10] = uVar24;
    puVar9[0xd] = uVar26;
    puVar9[0xc] = uVar25;
    puVar9[7] = uVar8;
    puVar9[6] = uVar17;
    puVar9[9] = uVar23;
    puVar9[8] = uVar18;
    if (1 < *puVar9) {
      return puVar11;
    }
    puVar10[2] = puVar10[2] + 1;
    return puVar11;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 2;
    goto LAB_100fc8d0c;
  }
LAB_100fc8d00:
  uVar17 = 3;
LAB_100fc8d0c:
  *puVar9 = uVar17;
  return puVar11;
LAB_100fc8668:
  puVar10 = (ulong *)plVar20[1];
  plVar14 = plVar22;
  if (puVar10 != puVar16) {
    while( true ) {
      if (((puVar10[0xe2] >> 0x20 & 1) == 0) || ((ulong)plVar20[2] < puVar10[0xe3]))
      goto LAB_100fc877c;
      if (puVar10[0xe1] == 0) break;
      plVar20[1] = puVar10[0xe1];
      puVar10[0xe0] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe1] = 0;
      lVar7 = *plVar22;
      puVar10[0xe0] = *(long *)(lVar7 + 0x700) + 0x20;
      plVar1 = (long *)(lVar7 + 0x708);
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)puVar10;
      }
      else {
        puVar10[0xe0] = *(long *)(lVar7 + 0x700) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x708);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x708) = (long)puVar10;
        }
        else {
          puVar10[0xe0] = *(long *)(lVar12 + 0x700) + 0x20;
          if (*(long *)(lVar12 + 0x708) == 0) {
            *(long *)(lVar12 + 0x708) = (long)puVar10;
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
    puVar13 = auVar27._8_8_;
    puVar9 = auVar27._0_8_;
    puVar16 = (ulong *)*puVar13;
    uVar17 = puVar16[0x2c0];
    while (uVar17 != (puVar13[2] & 0xffffffffffffffe0)) {
      puVar16 = (ulong *)puVar16[0x2c1];
      if (puVar16 == (ulong *)0x0) {
        uVar17 = 0x8000000000000006;
        puVar10 = puVar9;
        goto LAB_100fc898c;
      }
      *puVar13 = puVar16;
      InstructionSynchronizationBarrier();
      uVar17 = puVar16[0x2c0];
    }
    puVar10 = (ulong *)puVar13[1];
    plVar20 = plVar14;
    if (puVar10 != puVar16) {
      do {
        if (((puVar10[0x2c2] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < puVar10[0x2c3])) break;
        if (puVar10[0x2c1] == 0) {
          auVar27 = func_0x000108a07a20(&UNK_10b23a700);
          plVar22 = auVar27._8_8_;
          puVar9 = auVar27._0_8_;
          puVar16 = (ulong *)*plVar22;
          uVar17 = puVar16[0x1a0];
          goto joined_r0x000100fc89e0;
        }
        puVar13[1] = puVar10[0x2c1];
        puVar10[0x2c0] = 0;
        puVar10[0x2c2] = 0;
        puVar10[0x2c1] = 0;
        lVar7 = *plVar14;
        puVar10[0x2c0] = *(long *)(lVar7 + 0x1600) + 0x20;
        plVar22 = (long *)(lVar7 + 0x1608);
        lVar7 = *plVar22;
        if (lVar7 == 0) {
          *plVar22 = (long)puVar10;
        }
        else {
          puVar10[0x2c0] = *(long *)(lVar7 + 0x1600) + 0x20;
          lVar12 = *(long *)(lVar7 + 0x1608);
          if (lVar12 == 0) {
            *(long *)(lVar7 + 0x1608) = (long)puVar10;
          }
          else {
            puVar10[0x2c0] = *(long *)(lVar12 + 0x1600) + 0x20;
            if (*(long *)(lVar12 + 0x1608) == 0) {
              *(long *)(lVar12 + 0x1608) = (long)puVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        puVar10 = (ulong *)puVar13[1];
      } while (puVar10 != (ulong *)*puVar13);
      puVar16 = (ulong *)*puVar13;
    }
    if ((puVar16[0x2c2] >> (puVar13[2] & 0x1f) & 1) != 0) {
      puVar16 = puVar16 + (puVar13[2] & 0x1f) * 0x16;
      uVar8 = puVar16[1];
      uVar17 = *puVar16;
      uVar18 = puVar16[2];
      uVar24 = puVar16[5];
      uVar23 = puVar16[4];
      puVar9[3] = puVar16[3];
      puVar9[2] = uVar18;
      puVar9[5] = uVar24;
      puVar9[4] = uVar23;
      puVar9[1] = uVar8;
      *puVar9 = uVar17;
      uVar8 = puVar16[7];
      uVar17 = puVar16[6];
      uVar23 = puVar16[9];
      uVar18 = puVar16[8];
      uVar24 = puVar16[10];
      uVar26 = puVar16[0xd];
      uVar25 = puVar16[0xc];
      puVar9[0xb] = puVar16[0xb];
      puVar9[10] = uVar24;
      puVar9[0xd] = uVar26;
      puVar9[0xc] = uVar25;
      puVar9[7] = uVar8;
      puVar9[6] = uVar17;
      puVar9[9] = uVar23;
      puVar9[8] = uVar18;
      uVar8 = puVar16[0xf];
      uVar17 = puVar16[0xe];
      uVar23 = puVar16[0x11];
      uVar18 = puVar16[0x10];
      uVar24 = puVar16[0x12];
      uVar26 = puVar16[0x15];
      uVar25 = puVar16[0x14];
      puVar9[0x13] = puVar16[0x13];
      puVar9[0x12] = uVar24;
      puVar9[0x15] = uVar26;
      puVar9[0x14] = uVar25;
      puVar9[0xf] = uVar8;
      puVar9[0xe] = uVar17;
      puVar9[0x11] = uVar23;
      puVar9[0x10] = uVar18;
      if (*puVar9 + 0x7ffffffffffffffb < 2) {
        return puVar10;
      }
      puVar13[2] = puVar13[2] + 1;
      return puVar10;
    }
    if ((puVar16[0x2c2] >> 0x21 & 1) == 0) {
      *puVar9 = 0x8000000000000006;
      return puVar10;
    }
    uVar17 = 0x8000000000000005;
LAB_100fc898c:
    *puVar9 = uVar17;
    return puVar10;
  }
  uVar17 = plVar20[2] & 0x1f;
  uVar8 = puVar16[0xe2];
  uVar18 = uVar8 >> uVar17;
joined_r0x000100fc8794:
  if ((uVar18 & 1) != 0) {
    puVar16 = puVar16 + uVar17 * 7;
    uVar23 = puVar16[3];
    uVar18 = puVar16[2];
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar25 = puVar16[1];
    uVar24 = *puVar16;
    puVar9[6] = puVar16[6];
    puVar9[3] = uVar23;
    puVar9[2] = uVar18;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    puVar9[1] = uVar25;
    *puVar9 = uVar24;
    if (*puVar9 - 3 < 2) {
      return puVar10;
    }
    plVar20[2] = plVar20[2] + 1;
    return puVar10;
  }
  if ((uVar8 >> 0x21 & 1) != 0) {
    uVar17 = 3;
    goto LAB_100fc87a8;
  }
LAB_100fc879c:
  uVar17 = 4;
LAB_100fc87a8:
  *puVar9 = uVar17;
  return puVar10;
LAB_100fc8144:
  puVar11 = (ulong *)puVar10[1];
  plVar20 = plVar14;
  if (puVar11 == puVar16) {
    uVar17 = puVar10[2] & 0x1f;
    uVar8 = puVar16[0x162];
    uVar18 = uVar8 >> uVar17;
  }
  else {
    do {
      if (((puVar11[0x162] >> 0x20 & 1) == 0) || (puVar10[2] < puVar11[0x163])) break;
      if (puVar11[0x161] == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        puVar13 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*puVar13;
        uVar17 = puVar16[0x200];
        goto joined_r0x000100fc82e0;
      }
      puVar10[1] = puVar11[0x161];
      puVar11[0x160] = 0;
      puVar11[0x162] = 0;
      puVar11[0x161] = 0;
      lVar7 = *plVar14;
      puVar11[0x160] = *(long *)(lVar7 + 0xb00) + 0x20;
      plVar22 = (long *)(lVar7 + 0xb08);
      lVar7 = *plVar22;
      if (lVar7 == 0) {
        *plVar22 = (long)puVar11;
      }
      else {
        puVar11[0x160] = *(long *)(lVar7 + 0xb00) + 0x20;
        lVar12 = *(long *)(lVar7 + 0xb08);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0xb08) = (long)puVar11;
        }
        else {
          puVar11[0x160] = *(long *)(lVar12 + 0xb00) + 0x20;
          if (*(long *)(lVar12 + 0xb08) == 0) {
            *(long *)(lVar12 + 0xb08) = (long)puVar11;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar11 = (ulong *)puVar10[1];
    } while (puVar11 != (ulong *)*puVar10);
    puVar16 = (ulong *)*puVar10;
    uVar17 = puVar10[2] & 0x1f;
    uVar8 = puVar16[0x162];
    uVar18 = uVar8 >> uVar17;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar8 >> 0x21 & 1) == 0) {
LAB_100fc8280:
      uVar17 = 5;
    }
    else {
      uVar17 = 4;
    }
    *puVar9 = uVar17;
  }
  else {
    puVar16 = puVar16 + uVar17 * 0xb;
    uVar18 = *puVar16;
    uVar8 = puVar16[3];
    uVar17 = puVar16[2];
    puVar9[1] = puVar16[1];
    *puVar9 = uVar18;
    puVar9[3] = uVar8;
    puVar9[2] = uVar17;
    uVar8 = puVar16[5];
    uVar17 = puVar16[4];
    uVar23 = puVar16[7];
    uVar18 = puVar16[6];
    uVar25 = puVar16[9];
    uVar24 = puVar16[8];
    puVar9[10] = puVar16[10];
    puVar9[7] = uVar23;
    puVar9[6] = uVar18;
    puVar9[9] = uVar25;
    puVar9[8] = uVar24;
    puVar9[5] = uVar8;
    puVar9[4] = uVar17;
    if ((*puVar9 & 6) != 4) {
      puVar10[2] = puVar10[2] + 1;
    }
  }
  return puVar11;
LAB_100fc8308:
  puVar10 = (ulong *)puVar13[1];
  plVar22 = plVar20;
  if (puVar10 != puVar16) {
    while( true ) {
      if (((puVar10[0x202] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < puVar10[0x203]))
      goto LAB_100fc83d0;
      if (puVar10[0x201] == 0) break;
      puVar13[1] = puVar10[0x201];
      puVar10[0x200] = 0;
      puVar10[0x202] = 0;
      puVar10[0x201] = 0;
      lVar7 = *plVar20;
      puVar10[0x200] = *(long *)(lVar7 + 0x1000) + 0x20;
      plVar14 = (long *)(lVar7 + 0x1008);
      lVar7 = *plVar14;
      if (lVar7 == 0) {
        *plVar14 = (long)puVar10;
      }
      else {
        puVar10[0x200] = *(long *)(lVar7 + 0x1000) + 0x20;
        lVar12 = *(long *)(lVar7 + 0x1008);
        if (lVar12 == 0) {
          *(long *)(lVar7 + 0x1008) = (long)puVar10;
        }
        else {
          puVar10[0x200] = *(long *)(lVar12 + 0x1000) + 0x20;
          if (*(long *)(lVar12 + 0x1008) == 0) {
            *(long *)(lVar12 + 0x1008) = (long)puVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      puVar10 = (ulong *)puVar13[1];
      if (puVar10 == (ulong *)*puVar13) goto LAB_100fc83d0;
    }
    auVar27 = func_0x000108a07a20(&UNK_10b23a700);
    plVar20 = auVar27._0_8_;
    lVar7 = *plVar20;
    uVar17 = *(ulong *)(lVar7 + 0x100);
    while (uVar17 != (plVar20[2] & 0xffffffffffffffe0U)) {
      lVar7 = *(long *)(lVar7 + 0x108);
      if (lVar7 == 0) {
        return (ulong *)0x2;
      }
      *plVar20 = lVar7;
      InstructionSynchronizationBarrier();
      uVar17 = *(ulong *)(lVar7 + 0x100);
    }
    lVar12 = plVar20[1];
    if (lVar12 == lVar7) {
      uVar17 = *(ulong *)(lVar7 + 0x110);
      uVar8 = uVar17 >> (plVar20[2] & 0x1fU);
      goto joined_r0x000100fc85cc;
    }
    do {
      if (((*(ulong *)(lVar12 + 0x110) >> 0x20 & 1) == 0) ||
         ((ulong)plVar20[2] < *(ulong *)(lVar12 + 0x118))) break;
      if (*(long *)(lVar12 + 0x108) == 0) {
        auVar27 = func_0x000108a07a20(&UNK_10b23a700);
        plVar20 = auVar27._8_8_;
        puVar9 = auVar27._0_8_;
        puVar16 = (ulong *)*plVar20;
        uVar17 = puVar16[0xe0];
        goto joined_r0x000100fc8644;
      }
      plVar20[1] = *(long *)(lVar12 + 0x108);
      *(undefined8 *)(lVar12 + 0x108) = 0;
      *(undefined8 *)(lVar12 + 0x110) = 0;
      *(undefined8 *)(lVar12 + 0x100) = 0;
      lVar7 = *auVar27._8_8_;
      *(long *)(lVar12 + 0x100) = *(long *)(lVar7 + 0x100) + 0x20;
      plVar14 = (long *)(lVar7 + 0x108);
      lVar7 = *plVar14;
      if (lVar7 == 0) {
        *plVar14 = lVar12;
      }
      else {
        *(long *)(lVar12 + 0x100) = *(long *)(lVar7 + 0x100) + 0x20;
        lVar21 = *(long *)(lVar7 + 0x108);
        if (lVar21 == 0) {
          *(long *)(lVar7 + 0x108) = lVar12;
        }
        else {
          *(long *)(lVar12 + 0x100) = *(long *)(lVar21 + 0x100) + 0x20;
          if (*(long *)(lVar21 + 0x108) == 0) {
            *(long *)(lVar21 + 0x108) = lVar12;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar12 = plVar20[1];
    } while (lVar12 != *plVar20);
    uVar17 = *(ulong *)(*plVar20 + 0x110);
    uVar8 = uVar17 >> (plVar20[2] & 0x1fU);
joined_r0x000100fc85cc:
    if ((uVar8 & 1) == 0) {
      puVar16 = (ulong *)0x1;
      if ((uVar17 & 0x200000000) == 0) {
        puVar16 = (ulong *)0x2;
      }
      if (puVar16 == (ulong *)0x2) {
        return (ulong *)0x2;
      }
    }
    else {
      puVar16 = (ulong *)0x0;
    }
    if (((ulong)puVar16 & 1) == 0) {
      puVar16 = (ulong *)0x0;
      plVar20[2] = plVar20[2] + 1;
    }
    return puVar16;
  }
LAB_100fc83d4:
  if ((puVar16[0x202] >> (puVar13[2] & 0x1f) & 1) == 0) {
    if ((puVar16[0x202] >> 0x21 & 1) == 0) {
      *puVar9 = 0x8000000000000006;
    }
    else {
      uVar17 = 0x8000000000000005;
LAB_100fc845c:
      *puVar9 = uVar17;
    }
  }
  else {
    puVar16 = puVar16 + (puVar13[2] & 0x1f) * 0x10;
    uVar17 = puVar16[4];
    uVar18 = puVar16[7];
    uVar8 = puVar16[6];
    uVar26 = puVar16[1];
    uVar25 = *puVar16;
    uVar24 = puVar16[3];
    uVar23 = puVar16[2];
    puVar9[5] = puVar16[5];
    puVar9[4] = uVar17;
    puVar9[7] = uVar18;
    puVar9[6] = uVar8;
    puVar9[1] = uVar26;
    *puVar9 = uVar25;
    puVar9[3] = uVar24;
    puVar9[2] = uVar23;
    uVar8 = puVar16[9];
    uVar17 = puVar16[8];
    uVar23 = puVar16[0xb];
    uVar18 = puVar16[10];
    uVar24 = puVar16[0xc];
    uVar26 = puVar16[0xf];
    uVar25 = puVar16[0xe];
    puVar9[0xd] = puVar16[0xd];
    puVar9[0xc] = uVar24;
    puVar9[0xf] = uVar26;
    puVar9[0xe] = uVar25;
    puVar9[9] = uVar8;
    puVar9[8] = uVar17;
    puVar9[0xb] = uVar23;
    puVar9[10] = uVar18;
    if (1 < *puVar9 + 0x7ffffffffffffffb) {
      puVar13[2] = puVar13[2] + 1;
    }
  }
  return puVar10;
}

