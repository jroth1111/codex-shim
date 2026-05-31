
/* WARNING: Possible PIC construction at 0x000105217fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105217fb0) */
/* WARNING: Removing unreachable block (ram,0x000105218010) */
/* WARNING: Removing unreachable block (ram,0x000105218020) */
/* WARNING: Removing unreachable block (ram,0x000105218028) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_105216f64(long *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ulong uVar20;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar21;
  undefined8 uVar22;
  ulong in_xzr;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar15 = (long *)*param_2;
  uVar18 = plVar15[0x7e0];
  while (uVar18 != (param_2[2] & 0xffffffffffffffe0)) {
    plVar15 = (long *)plVar15[0x7e1];
    if (plVar15 == (long *)0x0) {
      lVar6 = -0x7fffffffffffffba;
      plVar9 = param_1;
      goto LAB_105217104;
    }
    *param_2 = plVar15;
    InstructionSynchronizationBarrier();
    uVar18 = plVar15[0x7e0];
  }
  plVar9 = (long *)param_2[1];
  plVar8 = param_3;
  if (plVar9 != plVar15) {
    while( true ) {
      if ((((ulong)plVar9[0x7e2] >> 0x20 & 1) == 0) || ((ulong)param_2[2] < (ulong)plVar9[0x7e3]))
      goto LAB_105217088;
      if (plVar9[0x7e1] == 0) break;
      param_2[1] = plVar9[0x7e1];
      plVar9[0x7e0] = 0;
      plVar9[0x7e2] = 0;
      plVar9[0x7e1] = 0;
      lVar6 = *param_3;
      plVar9[0x7e0] = *(long *)(lVar6 + 0x3f00) + 0x20;
      plVar15 = (long *)(lVar6 + 0x3f08);
      lVar6 = *plVar15;
      if (lVar6 == 0) {
        *plVar15 = (long)plVar9;
      }
      else {
        plVar9[0x7e0] = *(long *)(lVar6 + 0x3f00) + 0x20;
        lVar19 = *(long *)(lVar6 + 0x3f08);
        if (lVar19 == 0) {
          *(long *)(lVar6 + 0x3f08) = (long)plVar9;
        }
        else {
          plVar9[0x7e0] = *(long *)(lVar19 + 0x3f00) + 0x20;
          if (*(long *)(lVar19 + 0x3f08) == 0) {
            *(long *)(lVar19 + 0x3f08) = (long)plVar9;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      plVar9 = (long *)param_2[1];
      if (plVar9 == (long *)*param_2) goto LAB_105217088;
    }
    auVar28 = func_0x000108a07a20(&UNK_10b3761a0);
    plVar9 = auVar28._0_8_;
    uStack_48 = 0x105217128;
    plVar15 = (long *)*plVar9;
    uVar18 = plVar15[0x40];
    while (uVar18 != (plVar9[2] & 0xffffffffffffffe0U)) {
      plVar15 = (long *)plVar15[0x41];
      if (plVar15 == (long *)0x0) {
        return plVar9;
      }
      *plVar9 = (long)plVar15;
      InstructionSynchronizationBarrier();
      uVar18 = plVar15[0x40];
    }
    plVar10 = (long *)plVar9[1];
    puStack_60 = param_2;
    plStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (plVar10 != plVar15) {
      do {
        if ((((ulong)plVar10[0x42] >> 0x20 & 1) == 0) || ((ulong)plVar9[2] < (ulong)plVar10[0x43]))
        break;
        if (plVar10[0x41] == 0) {
          auVar28 = func_0x000108a07a20(&UNK_10b3761a0);
          puVar13 = auVar28._8_8_;
          plVar9 = auVar28._0_8_;
          uStack_68 = 0x1052172bc;
          pppuVar21 = &ppuStack_70;
          plVar15 = (long *)*puVar13;
          uVar18 = plVar15[0xf40];
          goto joined_r0x0001052172f0;
        }
        plVar9[1] = plVar10[0x41];
        plVar10[0x40] = 0;
        plVar10[0x42] = 0;
        plVar10[0x41] = 0;
        lVar6 = *auVar28._8_8_;
        plVar10[0x40] = *(long *)(lVar6 + 0x200) + 0x20;
        plVar15 = (long *)(lVar6 + 0x208);
        lVar6 = *plVar15;
        if (lVar6 == 0) {
          *plVar15 = (long)plVar10;
        }
        else {
          plVar10[0x40] = *(long *)(lVar6 + 0x200) + 0x20;
          lVar19 = *(long *)(lVar6 + 0x208);
          if (lVar19 == 0) {
            *(long *)(lVar6 + 0x208) = (long)plVar10;
          }
          else {
            plVar10[0x40] = *(long *)(lVar19 + 0x200) + 0x20;
            if (*(long *)(lVar19 + 0x208) == 0) {
              *(long *)(lVar19 + 0x208) = (long)plVar10;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        plVar10 = (long *)plVar9[1];
      } while (plVar10 != (long *)*plVar9);
      plVar15 = (long *)*plVar9;
    }
    uVar3 = 1000000000;
    if (((ulong)plVar15[0x42] >> (plVar9[2] & 0x1fU) & 1) == 0) {
      if ((plVar15[0x42] & 0x200000000U) == 0) {
        uVar3 = 0x3b9aca01;
      }
    }
    else {
      plVar10 = (long *)plVar15[(plVar9[2] & 0x1fU) * 2];
      uVar3 = *(uint *)(plVar15 + (plVar9[2] & 0x1fU) * 2 + 1);
    }
    if ((uVar3 & 0x3ffffffe) != 1000000000) {
      plVar9[2] = plVar9[2] + 1;
    }
    return plVar10;
  }
LAB_10521708c:
  if (((ulong)plVar15[0x7e2] >> (param_2[2] & 0x1f) & 1) == 0) {
    if (((ulong)plVar15[0x7e2] >> 0x21 & 1) == 0) {
      *param_1 = -0x7fffffffffffffba;
    }
    else {
      lVar6 = -0x7fffffffffffffbb;
LAB_105217104:
      *param_1 = lVar6;
    }
  }
  else {
    plVar9 = (long *)_memcpy(param_1,plVar15 + (param_2[2] & 0x1f) * 0x3f,0x1f8);
    if (1 < *param_1 + 0x7fffffffffffffbbU) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return plVar9;
joined_r0x0001052172f0:
  if (uVar18 == (puVar13[2] & 0xffffffffffffffe0)) goto LAB_105217318;
  plVar15 = (long *)plVar15[0xf41];
  if (plVar15 == (long *)0x0) {
    lVar6 = -0x7fffffffffffff5a;
    plVar10 = plVar9;
    goto LAB_10521745c;
  }
  *puVar13 = plVar15;
  InstructionSynchronizationBarrier();
  uVar18 = plVar15[0xf40];
  goto joined_r0x0001052172f0;
SUB_105217480:
  plVar10 = auVar29._0_8_;
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(long *)(puVar5 + -0x58) = unaff_x27;
  *(long **)(puVar5 + -0x50) = unaff_x26;
  *(ulong *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 **)(puVar5 + -0x40) = unaff_x24;
  *(long *)(puVar5 + -0x38) = lVar19;
  *(long *)(puVar5 + -0x30) = lVar6;
  *(long **)(puVar5 + -0x28) = plVar8;
  *(long *)(puVar5 + -0x20) = auVar28._8_8_;
  *(long *)(puVar5 + -0x18) = auVar28._0_8_;
  *(undefined1 ****)(puVar5 + -0x10) = pppuVar21;
  *(undefined8 *)(puVar5 + -8) = uVar22;
  uVar18 = auVar29._8_8_ & 0xffffffffffffffe0;
  plVar9 = (long *)*plVar10;
  if (uVar18 - plVar9[0x220] == 0) {
    return plVar9;
  }
  uVar20 = (ulong)((auVar29._8_8_ & 0x1f) < uVar18 - plVar9[0x220] >> 5);
  do {
    plVar8 = (long *)plVar9[0x221];
    if ((long *)plVar9[0x221] == (long *)0x0) {
      lVar6 = plVar9[0x220];
      plVar11 = (long *)_malloc(0x1120);
      if (plVar11 == (long *)0x0) break;
      plVar11[0x220] = lVar6 + 0x20;
      plVar11[0x221] = 0;
      plVar11[0x223] = 0;
      plVar11[0x222] = 0;
      plVar8 = (long *)plVar9[0x221];
      if (plVar8 == (long *)0x0) {
        plVar9[0x221] = (long)plVar11;
        plVar8 = plVar11;
      }
      else {
        plVar11[0x220] = plVar8[0x220] + 0x20;
        lVar6 = plVar8[0x221];
        if (lVar6 == 0) {
          plVar8[0x221] = (long)plVar11;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar11[0x220] = *(long *)(lVar6 + 0x1100) + 0x20;
            plVar12 = (long *)(lVar6 + 0x1108);
            lVar6 = *plVar12;
          } while (lVar6 != 0);
          *plVar12 = (long)plVar11;
        }
      }
    }
    if ((((uint)uVar20 & (uint)((int)plVar9[0x222] == -1)) == 0) || ((long *)*plVar10 != plVar9)) {
      uVar20 = 0;
      InstructionSynchronizationBarrier();
      uVar16 = plVar8[0x220];
    }
    else {
      *plVar10 = (long)plVar8;
      uVar20 = plVar10[1];
      plVar10[1] = uVar20 | in_xzr;
      LORelease();
      plVar9[0x223] = uVar20;
      plVar9[0x222] = plVar9[0x222] | 0x100000000;
      LORelease();
      uVar20 = 1;
      InstructionSynchronizationBarrier();
      uVar16 = plVar8[0x220];
    }
    plVar9 = plVar8;
    if (uVar16 == uVar18) {
      return plVar8;
    }
  } while( true );
  auVar28 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1120);
  plVar8 = auVar28._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = unaff_x28;
  *(long *)(puVar5 + -0xb8) = lVar6;
  *(long **)(puVar5 + -0xb0) = plVar9;
  *(ulong *)(puVar5 + -0xa8) = uVar20;
  *(undefined8 *)(puVar5 + -0xa0) = 0x1100;
  *(undefined8 *)(puVar5 + -0x98) = 0x100000000;
  *(undefined8 *)(puVar5 + -0x90) = 0x1110;
  *(undefined8 *)(puVar5 + -0x88) = 0x1108;
  *(ulong *)(puVar5 + -0x80) = uVar18;
  *(long **)(puVar5 + -0x78) = plVar10;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
  *(undefined8 *)(puVar5 + -0x68) = 0x105217604;
  uVar18 = auVar28._8_8_ & 0xffffffffffffffe0;
  plVar9 = (long *)*plVar8;
  if (uVar18 - plVar9[0x4a0] == 0) {
    return plVar9;
  }
  uVar20 = (ulong)((auVar28._8_8_ & 0x1f) < uVar18 - plVar9[0x4a0] >> 5);
  do {
    plVar10 = (long *)plVar9[0x4a1];
    if ((long *)plVar9[0x4a1] == (long *)0x0) {
      lVar6 = plVar9[0x4a0];
      plVar11 = (long *)_malloc(0x2520);
      if (plVar11 == (long *)0x0) break;
      plVar11[0x4a0] = lVar6 + 0x20;
      plVar11[0x4a1] = 0;
      plVar11[0x4a3] = 0;
      plVar11[0x4a2] = 0;
      plVar10 = (long *)plVar9[0x4a1];
      if (plVar10 == (long *)0x0) {
        plVar9[0x4a1] = (long)plVar11;
        plVar10 = plVar11;
      }
      else {
        plVar11[0x4a0] = plVar10[0x4a0] + 0x20;
        lVar6 = plVar10[0x4a1];
        if (lVar6 == 0) {
          plVar10[0x4a1] = (long)plVar11;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar11[0x4a0] = *(long *)(lVar6 + 0x2500) + 0x20;
            plVar12 = (long *)(lVar6 + 0x2508);
            lVar6 = *plVar12;
          } while (lVar6 != 0);
          *plVar12 = (long)plVar11;
        }
      }
    }
    if ((((uint)uVar20 & (uint)((int)plVar9[0x4a2] == -1)) == 0) || ((long *)*plVar8 != plVar9)) {
      uVar20 = 0;
      InstructionSynchronizationBarrier();
      uVar16 = plVar10[0x4a0];
    }
    else {
      *plVar8 = (long)plVar10;
      uVar20 = plVar8[1];
      plVar8[1] = uVar20 | in_xzr;
      LORelease();
      plVar9[0x4a3] = uVar20;
      plVar9[0x4a2] = plVar9[0x4a2] | 0x100000000;
      LORelease();
      uVar20 = 1;
      InstructionSynchronizationBarrier();
      uVar16 = plVar10[0x4a0];
    }
    plVar9 = plVar10;
    if (uVar16 == uVar18) {
      return plVar10;
    }
  } while( true );
  auVar28 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2520);
  plVar10 = auVar28._0_8_;
  *(undefined8 *)(puVar5 + -0x100) = 0x2500;
  *(undefined8 *)(puVar5 + -0xf8) = 0x100000000;
  *(undefined8 *)(puVar5 + -0xf0) = 0x2510;
  *(undefined8 *)(puVar5 + -0xe8) = 0x2508;
  *(ulong *)(puVar5 + -0xe0) = uVar18;
  *(long **)(puVar5 + -0xd8) = plVar8;
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x70;
  *(undefined8 *)(puVar5 + -200) = 0x105217788;
  uVar18 = auVar28._8_8_ & 0xffffffffffffffe0;
  plVar8 = (long *)*plVar10;
  if (uVar18 - plVar8[0x40] == 0) {
    return plVar8;
  }
  uVar16 = (ulong)((auVar28._8_8_ & 0x1f) < uVar18 - plVar8[0x40] >> 5);
  do {
    plVar11 = (long *)plVar8[0x41];
    if ((long *)plVar8[0x41] == (long *)0x0) {
      lVar19 = plVar8[0x40];
      plVar12 = (long *)_malloc(0x220);
      if (plVar12 == (long *)0x0) break;
      plVar12[0x40] = lVar19 + 0x20;
      plVar12[0x41] = 0;
      plVar12[0x43] = 0;
      plVar12[0x42] = 0;
      plVar11 = (long *)plVar8[0x41];
      if (plVar11 == (long *)0x0) {
        plVar8[0x41] = (long)plVar12;
        plVar11 = plVar12;
      }
      else {
        plVar12[0x40] = plVar11[0x40] + 0x20;
        lVar19 = plVar11[0x41];
        if (lVar19 == 0) {
          plVar11[0x41] = (long)plVar12;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar12[0x40] = *(long *)(lVar19 + 0x200) + 0x20;
            plVar1 = (long *)(lVar19 + 0x208);
            lVar19 = *plVar1;
          } while (lVar19 != 0);
          *plVar1 = (long)plVar12;
        }
      }
    }
    if ((((uint)uVar16 & (uint)((int)plVar8[0x42] == -1)) == 0) || ((long *)*plVar10 != plVar8)) {
      uVar16 = 0;
      InstructionSynchronizationBarrier();
      uVar17 = plVar11[0x40];
    }
    else {
      *plVar10 = (long)plVar11;
      uVar16 = plVar10[1];
      plVar10[1] = uVar16 | in_xzr;
      LORelease();
      plVar8[0x43] = uVar16;
      plVar8[0x42] = plVar8[0x42] | 0x100000000;
      LORelease();
      uVar16 = 1;
      InstructionSynchronizationBarrier();
      uVar17 = plVar11[0x40];
    }
    plVar8 = plVar11;
    if (uVar17 == uVar18) {
      return plVar11;
    }
  } while( true );
  auVar28 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
  plVar11 = auVar28._0_8_;
  *(undefined8 *)(puVar5 + -0x160) = unaff_x28;
  *(long *)(puVar5 + -0x158) = lVar6;
  *(long **)(puVar5 + -0x150) = plVar9;
  *(ulong *)(puVar5 + -0x148) = uVar20;
  *(long *)(puVar5 + -0x140) = lVar19;
  *(long **)(puVar5 + -0x138) = plVar8;
  *(ulong *)(puVar5 + -0x130) = uVar16;
  *(undefined8 *)(puVar5 + -0x128) = 0x100000000;
  *(ulong *)(puVar5 + -0x120) = uVar18;
  *(long **)(puVar5 + -0x118) = plVar10;
  *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0xd0;
  *(undefined8 *)(puVar5 + -0x108) = 0x1052178ec;
  uVar18 = auVar28._8_8_ & 0xffffffffffffffe0;
  unaff_x26 = (long *)*plVar11;
  if (uVar18 - unaff_x26[0xf40] == 0) {
    return unaff_x26;
  }
  uVar20 = (ulong)((auVar28._8_8_ & 0x1f) < uVar18 - unaff_x26[0xf40] >> 5);
  do {
    plVar9 = (long *)unaff_x26[0xf41];
    if ((long *)unaff_x26[0xf41] == (long *)0x0) {
      unaff_x27 = unaff_x26[0xf40];
      plVar8 = (long *)_malloc(0x7a20);
      if (plVar8 == (long *)0x0) break;
      plVar8[0xf40] = unaff_x27 + 0x20;
      plVar8[0xf41] = 0;
      plVar8[0xf43] = 0;
      plVar8[0xf42] = 0;
      plVar9 = (long *)unaff_x26[0xf41];
      if (plVar9 == (long *)0x0) {
        unaff_x26[0xf41] = (long)plVar8;
        plVar9 = plVar8;
      }
      else {
        plVar8[0xf40] = plVar9[0xf40] + 0x20;
        lVar6 = plVar9[0xf41];
        if (lVar6 == 0) {
          plVar9[0xf41] = (long)plVar8;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar8[0xf40] = *(long *)(lVar6 + 0x7a00) + 0x20;
            plVar10 = (long *)(lVar6 + 0x7a08);
            lVar6 = *plVar10;
          } while (lVar6 != 0);
          *plVar10 = (long)plVar8;
        }
      }
    }
    if ((((uint)uVar20 & (uint)((int)unaff_x26[0xf42] == -1)) == 0) ||
       ((long *)*plVar11 != unaff_x26)) {
      uVar20 = 0;
      InstructionSynchronizationBarrier();
      uVar16 = plVar9[0xf40];
    }
    else {
      *plVar11 = (long)plVar9;
      uVar20 = plVar11[1];
      plVar11[1] = uVar20 | in_xzr;
      LORelease();
      unaff_x26[0xf43] = uVar20;
      unaff_x26[0xf42] = unaff_x26[0xf42] | 0x100000000;
      LORelease();
      uVar20 = 1;
      InstructionSynchronizationBarrier();
      uVar16 = plVar9[0xf40];
    }
    unaff_x26 = plVar9;
    if (uVar16 == uVar18) {
      return plVar9;
    }
  } while( true );
  auVar28 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x7a20);
  plVar8 = auVar28._0_8_;
  *(undefined8 *)(puVar5 + -0x1a0) = 0x7a00;
  *(undefined8 *)(puVar5 + -0x198) = 0x100000000;
  *(undefined8 *)(puVar5 + -400) = 0x7a10;
  *(undefined8 *)(puVar5 + -0x188) = 0x7a08;
  *(ulong *)(puVar5 + -0x180) = uVar18;
  *(long **)(puVar5 + -0x178) = plVar11;
  *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0x110;
  *(undefined8 *)(puVar5 + -0x168) = 0x105217a70;
  uVar18 = auVar28._8_8_ & 0xffffffffffffffe0;
  plVar9 = (long *)*plVar8;
  if (uVar18 - plVar9[0x1a0] == 0) {
    return plVar9;
  }
  uVar16 = (ulong)((auVar28._8_8_ & 0x1f) < uVar18 - plVar9[0x1a0] >> 5);
  do {
    plVar10 = (long *)plVar9[0x1a1];
    if ((long *)plVar9[0x1a1] == (long *)0x0) {
      lVar6 = plVar9[0x1a0];
      plVar11 = (long *)_malloc(0xd20);
      if (plVar11 == (long *)0x0) break;
      plVar11[0x1a0] = lVar6 + 0x20;
      plVar11[0x1a1] = 0;
      plVar11[0x1a3] = 0;
      plVar11[0x1a2] = 0;
      plVar10 = (long *)plVar9[0x1a1];
      if (plVar10 == (long *)0x0) {
        plVar9[0x1a1] = (long)plVar11;
        plVar10 = plVar11;
      }
      else {
        plVar11[0x1a0] = plVar10[0x1a0] + 0x20;
        lVar6 = plVar10[0x1a1];
        if (lVar6 == 0) {
          plVar10[0x1a1] = (long)plVar11;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar11[0x1a0] = *(long *)(lVar6 + 0xd00) + 0x20;
            plVar12 = (long *)(lVar6 + 0xd08);
            lVar6 = *plVar12;
          } while (lVar6 != 0);
          *plVar12 = (long)plVar11;
        }
      }
    }
    if ((((uint)uVar16 & (uint)((int)plVar9[0x1a2] == -1)) == 0) || ((long *)*plVar8 != plVar9)) {
      uVar16 = 0;
      InstructionSynchronizationBarrier();
      uVar17 = plVar10[0x1a0];
    }
    else {
      *plVar8 = (long)plVar10;
      uVar16 = plVar8[1];
      plVar8[1] = uVar16 | in_xzr;
      LORelease();
      plVar9[0x1a3] = uVar16;
      plVar9[0x1a2] = plVar9[0x1a2] | 0x100000000;
      LORelease();
      uVar16 = 1;
      InstructionSynchronizationBarrier();
      uVar17 = plVar10[0x1a0];
    }
    plVar9 = plVar10;
    if (uVar17 == uVar18) {
      return plVar10;
    }
  } while( true );
  auVar28 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xd20);
  plVar10 = auVar28._0_8_;
  *(long *)(puVar5 + -0x1e0) = lVar6;
  *(long **)(puVar5 + -0x1d8) = plVar9;
  *(ulong *)(puVar5 + -0x1d0) = uVar16;
  *(undefined8 *)(puVar5 + -0x1c8) = 0x100000000;
  *(ulong *)(puVar5 + -0x1c0) = uVar18;
  *(long **)(puVar5 + -0x1b8) = plVar8;
  *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -0x170;
  *(undefined8 *)(puVar5 + -0x1a8) = 0x105217bd4;
  uVar18 = auVar28._8_8_ & 0xffffffffffffffe0;
  plVar9 = (long *)*plVar10;
  if (uVar18 - plVar9[0x160] == 0) {
    return plVar9;
  }
  uVar16 = (ulong)((auVar28._8_8_ & 0x1f) < uVar18 - plVar9[0x160] >> 5);
  do {
    plVar8 = (long *)plVar9[0x161];
    if ((long *)plVar9[0x161] == (long *)0x0) {
      lVar6 = plVar9[0x160];
      plVar11 = (long *)_malloc(0xb20);
      if (plVar11 == (long *)0x0) goto LAB_105217d2c;
      plVar11[0x160] = lVar6 + 0x20;
      plVar11[0x161] = 0;
      plVar11[0x163] = 0;
      plVar11[0x162] = 0;
      plVar8 = (long *)plVar9[0x161];
      if (plVar8 == (long *)0x0) {
        plVar9[0x161] = (long)plVar11;
        plVar8 = plVar11;
      }
      else {
        plVar11[0x160] = plVar8[0x160] + 0x20;
        lVar6 = plVar8[0x161];
        if (lVar6 == 0) {
          plVar8[0x161] = (long)plVar11;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar11[0x160] = *(long *)(lVar6 + 0xb00) + 0x20;
            plVar12 = (long *)(lVar6 + 0xb08);
            lVar6 = *plVar12;
          } while (lVar6 != 0);
          *plVar12 = (long)plVar11;
        }
      }
    }
    if ((((uint)uVar16 & (uint)((int)plVar9[0x162] == -1)) == 0) || ((long *)*plVar10 != plVar9)) {
      uVar16 = 0;
      InstructionSynchronizationBarrier();
      uVar17 = plVar8[0x160];
    }
    else {
      *plVar10 = (long)plVar8;
      uVar16 = plVar10[1];
      plVar10[1] = uVar16 | in_xzr;
      LORelease();
      plVar9[0x163] = uVar16;
      plVar9[0x162] = plVar9[0x162] | 0x100000000;
      LORelease();
      uVar16 = 1;
      InstructionSynchronizationBarrier();
      uVar17 = plVar8[0x160];
    }
    plVar9 = plVar8;
    if (uVar17 == uVar18) {
      return plVar8;
    }
  } while( true );
LAB_105217088:
  plVar15 = (long *)*param_2;
  goto LAB_10521708c;
LAB_105217318:
  plVar10 = (long *)puVar13[1];
  ppuStack_70 = &puStack_50;
  if (plVar10 != plVar15) {
    lVar6 = 0x7a10;
    lVar19 = 0x7a08;
    plVar15 = plVar8;
    do {
      if ((((ulong)plVar10[0xf42] >> 0x20 & 1) == 0) || ((ulong)puVar13[2] < (ulong)plVar10[0xf43]))
      break;
      if (plVar10[0xf41] == 0) {
        uVar22 = 0x105217480;
        auVar29 = func_0x000108a07a20(&UNK_10b3761a0);
        puVar5 = &stack0xffffffffffffff60;
        goto SUB_105217480;
      }
      puVar13[1] = plVar10[0xf41];
      plVar10[0xf40] = 0;
      plVar10[0xf42] = 0;
      plVar10[0xf41] = 0;
      lVar7 = *plVar8;
      plVar10[0xf40] = *(long *)(lVar7 + 0x7a00) + 0x20;
      plVar11 = (long *)(lVar7 + 0x7a08);
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        *plVar11 = (long)plVar10;
      }
      else {
        plVar10[0xf40] = *(long *)(lVar7 + 0x7a00) + 0x20;
        lVar26 = *(long *)(lVar7 + 0x7a08);
        if (lVar26 == 0) {
          *(long *)(lVar7 + 0x7a08) = (long)plVar10;
        }
        else {
          plVar10[0xf40] = *(long *)(lVar26 + 0x7a00) + 0x20;
          if (*(long *)(lVar26 + 0x7a08) == 0) {
            *(long *)(lVar26 + 0x7a08) = (long)plVar10;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      plVar10 = (long *)puVar13[1];
    } while (plVar10 != (long *)*puVar13);
    plVar15 = (long *)*puVar13;
  }
  if (((ulong)plVar15[0xf42] >> (puVar13[2] & 0x1f) & 1) != 0) {
    plVar15 = (long *)_memcpy(plVar9,plVar15 + (puVar13[2] & 0x1f) * 0x7a,0x3d0);
    if (*plVar9 + 0x7fffffffffffff5bU < 2) {
      return plVar15;
    }
    puVar13[2] = puVar13[2] + 1;
    return plVar15;
  }
  if (((ulong)plVar15[0xf42] >> 0x21 & 1) == 0) {
    *plVar9 = -0x7fffffffffffff5a;
    return plVar10;
  }
  lVar6 = -0x7fffffffffffff5b;
LAB_10521745c:
  *plVar9 = lVar6;
  return plVar10;
LAB_105217d2c:
  auVar28 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xb20);
  puVar13 = auVar28._8_8_;
  plVar8 = auVar28._0_8_;
  auVar28._8_8_ = plVar8;
  auVar28._0_8_ = puVar13;
  *(long **)(puVar5 + -0x230) = unaff_x26;
  *(ulong *)(puVar5 + -0x228) = uVar20;
  *(long *)(puVar5 + -0x220) = lVar6;
  *(long **)(puVar5 + -0x218) = plVar9;
  *(ulong *)(puVar5 + -0x210) = uVar16;
  *(undefined8 *)(puVar5 + -0x208) = 0x100000000;
  *(ulong *)(puVar5 + -0x200) = uVar18;
  *(long **)(puVar5 + -0x1f8) = plVar10;
  *(undefined1 **)(puVar5 + -0x1f0) = puVar5 + -0x1b0;
  *(undefined8 *)(puVar5 + -0x1e8) = 0x105217d38;
  pppuVar21 = (undefined1 ***)(puVar5 + -0x1f0);
  bVar2 = *(byte *)(puVar13 + 0x33);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined1 *)((long)puVar13 + 0x199) = 1;
      puVar13[0x1f] = puVar13[0xd];
      puVar13[0x1e] = puVar13[0xc];
      puVar13[0x21] = puVar13[0xf];
      puVar13[0x20] = puVar13[0xe];
      plVar9 = (long *)puVar13[0x11];
      puVar13[0x17] = puVar13[5];
      puVar13[0x16] = puVar13[4];
      puVar13[0x19] = puVar13[7];
      puVar13[0x18] = puVar13[6];
      puVar13[0x1b] = puVar13[9];
      puVar13[0x1a] = puVar13[8];
      puVar13[0x1d] = puVar13[0xb];
      puVar13[0x1c] = puVar13[10];
      puVar13[0x13] = puVar13[1];
      puVar13[0x12] = *puVar13;
      puVar13[0x15] = puVar13[3];
      puVar13[0x14] = puVar13[2];
      puVar13[0x22] = puVar13[0x10];
      puVar13[0x23] = plVar9;
      *(undefined1 *)(puVar13 + 0x32) = 0;
LAB_105217dd0:
      puVar13[0x24] = plVar9;
      puVar13[0x25] = plVar9;
      uVar18 = 1;
      puVar13[0x26] = 1;
      *(undefined1 *)(puVar13 + 0x29) = 0;
      puVar13[0x27] = plVar9;
      puVar13[0x28] = 1;
      lVar6 = *plVar9;
      if (*(long *)(lVar6 + 0x1e8) == 0) {
LAB_105217dfc:
        *(undefined1 *)(puVar13 + 0x29) = 1;
        plVar10 = plVar8;
      }
      else {
LAB_105217e40:
        *(undefined8 *)(puVar5 + -0x338) = 0;
        *(undefined8 *)(puVar5 + -0x330) = 0;
        puVar13[0x2a] = lVar6 + 0x1c0;
        puVar13[0x2b] = 0;
        uVar22 = *(undefined8 *)(puVar5 + -0x340);
        puVar13[0x2d] = *(undefined8 *)(puVar5 + -0x338);
        puVar13[0x2c] = uVar22;
        puVar13[0x2e] = 0;
        puVar13[0x2f] = uVar18;
        puVar13[0x30] = uVar18;
        *(undefined1 *)(puVar13 + 0x31) = 0;
LAB_105217e60:
        unaff_x24 = puVar13 + 0x29;
        plVar9 = (long *)__ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                                   (puVar13 + 0x2a,plVar15);
        uVar3 = (uint)plVar9 & 0xff;
        unaff_x25 = (ulong)uVar3;
        if (uVar3 == 2) {
          *(undefined1 *)unaff_x24 = 4;
          uVar14 = 3;
          *(undefined1 *)(puVar13 + 0x32) = 3;
          *plVar8 = -0x7ffffffffffffffa;
          goto LAB_105217f44;
        }
        plVar10 = (long *)__ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                                    (puVar13 + 0x2a);
        if (puVar13[0x2b] != 0) {
          plVar10 = (long *)(**(code **)(puVar13[0x2b] + 0x18))(puVar13[0x2c]);
        }
        *(undefined1 *)unaff_x24 = 1;
        if (((ulong)plVar9 & 1) == 0) {
          plVar8 = (long *)puVar13[0x24];
          *(undefined1 *)(puVar13 + 0x32) = 1;
          *(undefined1 *)((long)puVar13 + 0x199) = 0;
          uVar22 = puVar13[0x1e];
          uVar24 = puVar13[0x21];
          uVar23 = puVar13[0x20];
          *(undefined8 *)(puVar5 + -0x2d8) = puVar13[0x1f];
          *(undefined8 *)(puVar5 + -0x2e0) = uVar22;
          *(undefined8 *)(puVar5 + -0x2c8) = uVar24;
          *(undefined8 *)(puVar5 + -0x2d0) = uVar23;
          *(undefined8 *)(puVar5 + -0x2c0) = puVar13[0x22];
          uVar22 = puVar13[0x16];
          uVar24 = puVar13[0x19];
          uVar23 = puVar13[0x18];
          *(undefined8 *)(puVar5 + -0x318) = puVar13[0x17];
          *(undefined8 *)(puVar5 + -800) = uVar22;
          *(undefined8 *)(puVar5 + -0x308) = uVar24;
          *(undefined8 *)(puVar5 + -0x310) = uVar23;
          uVar24 = puVar13[0x1a];
          uVar23 = puVar13[0x1d];
          uVar22 = puVar13[0x1c];
          *(undefined8 *)(puVar5 + -0x2f8) = puVar13[0x1b];
          *(undefined8 *)(puVar5 + -0x300) = uVar24;
          *(undefined8 *)(puVar5 + -0x2e8) = uVar23;
          *(undefined8 *)(puVar5 + -0x2f0) = uVar22;
          uVar24 = puVar13[0x12];
          uVar23 = puVar13[0x15];
          uVar22 = puVar13[0x14];
          *(undefined8 *)(puVar5 + -0x338) = puVar13[0x13];
          *(undefined8 *)(puVar5 + -0x340) = uVar24;
          *(undefined8 *)(puVar5 + -0x328) = uVar23;
          *(undefined8 *)(puVar5 + -0x330) = uVar22;
          lVar19 = *plVar8;
          LOAcquire();
          lVar6 = *(long *)(lVar19 + 0x88);
          *(long *)(lVar19 + 0x88) = lVar6 + 1;
          auVar29._8_8_ = lVar6;
          auVar29._0_8_ = lVar19 + 0x80;
          uVar22 = 0x105217fb0;
          puVar5 = puVar5 + -0x340;
          goto SUB_105217480;
        }
      }
      *(undefined1 *)(puVar13 + 0x32) = 1;
      *(undefined1 *)((long)puVar13 + 0x199) = 0;
      lVar6 = puVar13[0x12];
      uVar22 = puVar13[0x1b];
      uVar24 = puVar13[0x1e];
      uVar23 = puVar13[0x1d];
      *(undefined8 *)(puVar5 + -0x268) = puVar13[0x1c];
      *(undefined8 *)(puVar5 + -0x270) = uVar22;
      *(undefined8 *)(puVar5 + -600) = uVar24;
      *(undefined8 *)(puVar5 + -0x260) = uVar23;
      uVar23 = puVar13[0x20];
      uVar22 = puVar13[0x1f];
      uVar24 = puVar13[0x13];
      uVar27 = puVar13[0x16];
      uVar25 = puVar13[0x15];
      *(undefined8 *)(puVar5 + -0x2a8) = puVar13[0x14];
      *(undefined8 *)(puVar5 + -0x2b0) = uVar24;
      *(undefined8 *)(puVar5 + -0x298) = uVar27;
      *(undefined8 *)(puVar5 + -0x2a0) = uVar25;
      uVar24 = puVar13[0x17];
      uVar27 = puVar13[0x1a];
      uVar25 = puVar13[0x19];
      *(undefined8 *)(puVar5 + -0x288) = puVar13[0x18];
      *(undefined8 *)(puVar5 + -0x290) = uVar24;
      *(undefined8 *)(puVar5 + -0x278) = uVar27;
      *(undefined8 *)(puVar5 + -0x280) = uVar25;
      uVar25 = puVar13[0x22];
      uVar24 = puVar13[0x21];
      *(undefined8 *)(puVar5 + -0x248) = uVar23;
      *(undefined8 *)(puVar5 + -0x250) = uVar22;
      *(undefined8 *)(puVar5 + -0x238) = uVar25;
      *(undefined8 *)(puVar5 + -0x240) = uVar24;
      lVar19 = *(long *)(puVar5 + -0x270);
      lVar26 = *(long *)(puVar5 + -600);
      lVar7 = *(long *)(puVar5 + -0x260);
      plVar8[10] = *(long *)(puVar5 + -0x268);
      plVar8[9] = lVar19;
      plVar8[0xc] = lVar26;
      plVar8[0xb] = lVar7;
      lVar19 = *(long *)(puVar5 + -0x250);
      lVar26 = *(long *)(puVar5 + -0x238);
      lVar7 = *(long *)(puVar5 + -0x240);
      plVar8[0xe] = *(long *)(puVar5 + -0x248);
      plVar8[0xd] = lVar19;
      plVar8[0x10] = lVar26;
      plVar8[0xf] = lVar7;
      lVar19 = *(long *)(puVar5 + -0x2b0);
      lVar26 = *(long *)(puVar5 + -0x298);
      lVar7 = *(long *)(puVar5 + -0x2a0);
      plVar8[2] = *(long *)(puVar5 + -0x2a8);
      plVar8[1] = lVar19;
      plVar8[4] = lVar26;
      plVar8[3] = lVar7;
      lVar19 = *(long *)(puVar5 + -0x290);
      lVar26 = *(long *)(puVar5 + -0x278);
      lVar7 = *(long *)(puVar5 + -0x280);
      plVar8[6] = *(long *)(puVar5 + -0x288);
      plVar8[5] = lVar19;
      *(undefined1 *)((long)puVar13 + 0x199) = 0;
      *plVar8 = lVar6;
      uVar14 = 1;
      plVar8[8] = lVar26;
      plVar8[7] = lVar7;
      plVar9 = plVar10;
LAB_105217f44:
      *(undefined1 *)(puVar13 + 0x33) = uVar14;
      return plVar9;
    }
    func_0x000108a07af4(&UNK_10b3761d0);
LAB_105218060:
    func_0x000108a07b10(&UNK_10b3761d0);
  }
  else {
    if (bVar2 != 3) goto LAB_105218060;
    bVar2 = *(byte *)(puVar13 + 0x32);
    if (1 < bVar2) {
      if (bVar2 != 3) {
        func_0x000108a07b10(&UNK_10b3761e8);
        goto LAB_1052180b0;
      }
      bVar2 = *(byte *)(puVar13 + 0x29);
      if (bVar2 < 3) {
        if (bVar2 != 0) {
          if (bVar2 == 1) {
            func_0x000108a07af4(&UNK_10b3761b8);
          }
          else {
            func_0x000108a07b10(&UNK_10b3761b8);
          }
          goto LAB_1052180b0;
        }
        uVar18 = puVar13[0x26];
        puVar13[0x27] = (long *)puVar13[0x25];
        puVar13[0x28] = uVar18;
        lVar6 = *(long *)puVar13[0x25];
        if (uVar18 <= *(ulong *)(lVar6 + 0x1e8)) goto LAB_105217e40;
      }
      else {
        if (bVar2 != 3) goto LAB_105217e60;
        uVar18 = puVar13[0x28];
        lVar6 = *(long *)puVar13[0x27];
        if (uVar18 <= *(ulong *)(lVar6 + 0x1e8)) goto LAB_105217e40;
      }
      goto LAB_105217dfc;
    }
    if (bVar2 == 0) {
      plVar9 = (long *)puVar13[0x23];
      goto LAB_105217dd0;
    }
  }
  func_0x000108a07af4(&UNK_10b3761e8);
LAB_1052180b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052180b4);
  (*pcVar4)();
}

