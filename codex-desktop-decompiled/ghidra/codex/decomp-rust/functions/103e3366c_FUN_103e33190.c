
/* WARNING: Possible PIC construction at 0x000103e33b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103e33b9c) */
/* WARNING: Removing unreachable block (ram,0x000103e33bdc) */
/* WARNING: Removing unreachable block (ram,0x000103e33bec) */
/* WARNING: Removing unreachable block (ram,0x000103e33bf4) */

void FUN_103e33190(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x24;
  undefined1 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  ulong in_xzr;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  lVar12 = *param_2;
  uVar15 = *(ulong *)(lVar12 + 0x6a00);
  while (uVar15 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar12 = *(long *)(lVar12 + 0x6a08);
    if (lVar12 == 0) goto LAB_103e3330c;
    *param_2 = lVar12;
    InstructionSynchronizationBarrier();
    uVar15 = *(ulong *)(lVar12 + 0x6a00);
  }
  lVar6 = param_2[1];
  plVar17 = param_3;
  if (lVar6 != lVar12) {
    do {
      if (((*(ulong *)(lVar6 + 0x6a10) >> 0x20 & 1) == 0) ||
         ((ulong)param_2[2] < *(ulong *)(lVar6 + 0x6a18))) break;
      if (*(long *)(lVar6 + 0x6a08) == 0) {
        auVar21 = func_0x000108a07a20(&UNK_10b2fba08);
        plVar8 = auVar21._8_8_;
        plVar7 = auVar21._0_8_;
        uStack_48 = 0x103e3333c;
        ppuVar19 = &puStack_50;
        lVar12 = *plVar8;
        uVar15 = *(ulong *)(lVar12 + 0x6200);
        goto joined_r0x000103e33370;
      }
      param_2[1] = *(long *)(lVar6 + 0x6a08);
      *(undefined8 *)(lVar6 + 0x6a00) = 0;
      *(undefined8 *)(lVar6 + 0x6a10) = 0;
      *(undefined8 *)(lVar6 + 0x6a08) = 0;
      lVar12 = *param_3;
      *(long *)(lVar6 + 0x6a00) = *(long *)(lVar12 + 0x6a00) + 0x20;
      plVar7 = (long *)(lVar12 + 0x6a08);
      lVar12 = *plVar7;
      if (lVar12 == 0) {
        *plVar7 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6a00) = *(long *)(lVar12 + 0x6a00) + 0x20;
        lVar4 = *(long *)(lVar12 + 0x6a08);
        if (lVar4 == 0) {
          *(long *)(lVar12 + 0x6a08) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6a00) = *(long *)(lVar4 + 0x6a00) + 0x20;
          if (*(long *)(lVar4 + 0x6a08) == 0) {
            *(long *)(lVar4 + 0x6a08) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = param_2[1];
    } while (lVar6 != *param_2);
    lVar12 = *param_2;
  }
  if ((*(ulong *)(lVar12 + 0x6a10) >> (param_2[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar12 + 0x6a10) >> 0x21 & 1) == 0) {
LAB_103e3330c:
      lVar12 = 0x16;
    }
    else {
      lVar12 = 0x15;
    }
    *param_1 = lVar12;
  }
  else {
    _memcpy(param_1,lVar12 + (param_2[2] & 0x1fU) * 0x350,0x350);
    if (1 < *param_1 - 0x15U) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return;
joined_r0x000103e33370:
  if (uVar15 == (plVar8[2] & 0xffffffffffffffe0U)) goto LAB_103e33398;
  lVar12 = *(long *)(lVar12 + 0x6208);
  if (lVar12 == 0) goto LAB_103e334b8;
  *plVar8 = lVar12;
  InstructionSynchronizationBarrier();
  uVar15 = *(ulong *)(lVar12 + 0x6200);
  goto joined_r0x000103e33370;
SUB_103e334e8:
  plVar7 = auVar22._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(long *)(puVar3 + -0x58) = unaff_x27;
  *(long **)(puVar3 + -0x50) = unaff_x26;
  *(undefined1 **)(puVar3 + -0x48) = unaff_x25;
  *(long *)(puVar3 + -0x40) = unaff_x24;
  *(long *)(puVar3 + -0x38) = lVar12;
  *(undefined8 *)(puVar3 + -0x30) = uVar18;
  *(long **)(puVar3 + -0x28) = plVar17;
  *(long *)(puVar3 + -0x20) = auVar21._8_8_;
  *(long *)(puVar3 + -0x18) = auVar21._0_8_;
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar19;
  *(undefined8 *)(puVar3 + -8) = uVar20;
  uVar16 = auVar22._8_8_ & 0xffffffffffffffe0;
  uVar15 = uVar16 - *(long *)(*plVar7 + 0x6a00);
  if (uVar15 == 0) {
    return;
  }
  uVar15 = (ulong)((auVar22._8_8_ & 0x1f) < uVar15 >> 5);
  lVar12 = *plVar7;
  do {
    lVar6 = *(long *)(lVar12 + 0x6a08);
    if (*(long *)(lVar12 + 0x6a08) == 0) {
      lVar6 = *(long *)(lVar12 + 0x6a00);
      lVar4 = _malloc(0x6a20);
      if (lVar4 == 0) break;
      *(long *)(lVar4 + 0x6a00) = lVar6 + 0x20;
      *(undefined8 *)(lVar4 + 0x6a08) = 0;
      *(undefined8 *)(lVar4 + 0x6a18) = 0;
      *(undefined8 *)(lVar4 + 0x6a10) = 0;
      lVar6 = *(long *)(lVar12 + 0x6a08);
      if (lVar6 == 0) {
        *(long *)(lVar12 + 0x6a08) = lVar4;
        lVar6 = lVar4;
      }
      else {
        *(long *)(lVar4 + 0x6a00) = *(long *)(lVar6 + 0x6a00) + 0x20;
        lVar14 = *(long *)(lVar6 + 0x6a08);
        if (lVar14 == 0) {
          *(long *)(lVar6 + 0x6a08) = lVar4;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            *(long *)(lVar4 + 0x6a00) = *(long *)(lVar14 + 0x6a00) + 0x20;
            plVar17 = (long *)(lVar14 + 0x6a08);
            lVar14 = *plVar17;
          } while (lVar14 != 0);
          *plVar17 = lVar4;
        }
      }
    }
    if ((((uint)uVar15 & (uint)((int)*(undefined8 *)(lVar12 + 0x6a10) == -1)) == 0) ||
       (*plVar7 != lVar12)) {
      uVar15 = 0;
      InstructionSynchronizationBarrier();
      uVar13 = *(ulong *)(lVar6 + 0x6a00);
    }
    else {
      *plVar7 = lVar6;
      uVar15 = plVar7[1];
      plVar7[1] = uVar15 | in_xzr;
      LORelease();
      *(ulong *)(lVar12 + 0x6a18) = uVar15;
      *(ulong *)(lVar12 + 0x6a10) = *(ulong *)(lVar12 + 0x6a10) | 0x100000000;
      LORelease();
      uVar15 = 1;
      InstructionSynchronizationBarrier();
      uVar13 = *(ulong *)(lVar6 + 0x6a00);
    }
    lVar12 = lVar6;
    if (uVar13 == uVar16) {
      return;
    }
  } while( true );
  auVar21 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6a20);
  plVar17 = auVar21._0_8_;
  *(undefined8 *)(puVar3 + -0xc0) = unaff_x28;
  *(long *)(puVar3 + -0xb8) = lVar6;
  *(long *)(puVar3 + -0xb0) = lVar12;
  *(ulong *)(puVar3 + -0xa8) = uVar15;
  *(undefined8 *)(puVar3 + -0xa0) = 0x6a00;
  *(undefined8 *)(puVar3 + -0x98) = 0x100000000;
  *(undefined8 *)(puVar3 + -0x90) = 0x6a10;
  *(undefined8 *)(puVar3 + -0x88) = 0x6a08;
  *(ulong *)(puVar3 + -0x80) = uVar16;
  *(long **)(puVar3 + -0x78) = plVar7;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
  *(undefined8 *)(puVar3 + -0x68) = 0x103e3366c;
  uVar16 = auVar21._8_8_ & 0xffffffffffffffe0;
  uVar15 = uVar16 - *(long *)(*plVar17 + 0x6200);
  if (uVar15 == 0) {
    return;
  }
  uVar15 = (ulong)((auVar21._8_8_ & 0x1f) < uVar15 >> 5);
  lVar12 = *plVar17;
  do {
    lVar6 = *(long *)(lVar12 + 0x6208);
    if (*(long *)(lVar12 + 0x6208) == 0) {
      lVar6 = *(long *)(lVar12 + 0x6200);
      lVar4 = _malloc(0x6220);
      if (lVar4 == 0) break;
      *(long *)(lVar4 + 0x6200) = lVar6 + 0x20;
      *(undefined8 *)(lVar4 + 0x6208) = 0;
      *(undefined8 *)(lVar4 + 0x6218) = 0;
      *(undefined8 *)(lVar4 + 0x6210) = 0;
      lVar6 = *(long *)(lVar12 + 0x6208);
      if (lVar6 == 0) {
        *(long *)(lVar12 + 0x6208) = lVar4;
        lVar6 = lVar4;
      }
      else {
        *(long *)(lVar4 + 0x6200) = *(long *)(lVar6 + 0x6200) + 0x20;
        lVar14 = *(long *)(lVar6 + 0x6208);
        if (lVar14 == 0) {
          *(long *)(lVar6 + 0x6208) = lVar4;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            *(long *)(lVar4 + 0x6200) = *(long *)(lVar14 + 0x6200) + 0x20;
            plVar7 = (long *)(lVar14 + 0x6208);
            lVar14 = *plVar7;
          } while (lVar14 != 0);
          *plVar7 = lVar4;
        }
      }
    }
    if ((((uint)uVar15 & (uint)((int)*(undefined8 *)(lVar12 + 0x6210) == -1)) == 0) ||
       (*plVar17 != lVar12)) {
      uVar15 = 0;
      InstructionSynchronizationBarrier();
      uVar13 = *(ulong *)(lVar6 + 0x6200);
    }
    else {
      *plVar17 = lVar6;
      uVar15 = plVar17[1];
      plVar17[1] = uVar15 | in_xzr;
      LORelease();
      *(ulong *)(lVar12 + 0x6218) = uVar15;
      *(ulong *)(lVar12 + 0x6210) = *(ulong *)(lVar12 + 0x6210) | 0x100000000;
      LORelease();
      uVar15 = 1;
      InstructionSynchronizationBarrier();
      uVar13 = *(ulong *)(lVar6 + 0x6200);
    }
    lVar12 = lVar6;
    if (uVar13 == uVar16) {
      return;
    }
  } while( true );
  auVar21 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6220);
  plVar7 = auVar21._0_8_;
  *(undefined8 *)(puVar3 + -0x120) = unaff_x28;
  *(long *)(puVar3 + -0x118) = lVar6;
  *(long *)(puVar3 + -0x110) = lVar12;
  *(ulong *)(puVar3 + -0x108) = uVar15;
  *(undefined8 *)(puVar3 + -0x100) = 0x6200;
  *(undefined8 *)(puVar3 + -0xf8) = 0x100000000;
  *(undefined8 *)(puVar3 + -0xf0) = 0x6210;
  *(undefined8 *)(puVar3 + -0xe8) = 0x6208;
  *(ulong *)(puVar3 + -0xe0) = uVar16;
  *(long **)(puVar3 + -0xd8) = plVar17;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x70;
  *(undefined8 *)(puVar3 + -200) = 0x103e337f0;
  uVar16 = auVar21._8_8_ & 0xffffffffffffffe0;
  uVar15 = uVar16 - ((long *)*plVar7)[0xd20];
  if (uVar15 == 0) {
    return;
  }
  uVar15 = (ulong)((auVar21._8_8_ & 0x1f) < uVar15 >> 5);
  unaff_x26 = (long *)*plVar7;
  do {
    plVar17 = (long *)unaff_x26[0xd21];
    if ((long *)unaff_x26[0xd21] == (long *)0x0) {
      unaff_x27 = unaff_x26[0xd20];
      plVar8 = (long *)_malloc(0x6920);
      if (plVar8 == (long *)0x0) goto LAB_103e33968;
      plVar8[0xd20] = unaff_x27 + 0x20;
      plVar8[0xd21] = 0;
      plVar8[0xd23] = 0;
      plVar8[0xd22] = 0;
      plVar17 = (long *)unaff_x26[0xd21];
      if (plVar17 == (long *)0x0) {
        unaff_x26[0xd21] = (long)plVar8;
        plVar17 = plVar8;
      }
      else {
        plVar8[0xd20] = plVar17[0xd20] + 0x20;
        lVar12 = plVar17[0xd21];
        if (lVar12 == 0) {
          plVar17[0xd21] = (long)plVar8;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar8[0xd20] = *(long *)(lVar12 + 0x6900) + 0x20;
            plVar1 = (long *)(lVar12 + 0x6908);
            lVar12 = *plVar1;
          } while (lVar12 != 0);
          *plVar1 = (long)plVar8;
        }
      }
    }
    if ((((uint)uVar15 & (uint)((int)unaff_x26[0xd22] == -1)) == 0) ||
       ((long *)*plVar7 != unaff_x26)) {
      uVar15 = 0;
      InstructionSynchronizationBarrier();
      uVar13 = plVar17[0xd20];
    }
    else {
      *plVar7 = (long)plVar17;
      uVar15 = plVar7[1];
      plVar7[1] = uVar15 | in_xzr;
      LORelease();
      unaff_x26[0xd23] = uVar15;
      unaff_x26[0xd22] = unaff_x26[0xd22] | 0x100000000;
      LORelease();
      uVar15 = 1;
      InstructionSynchronizationBarrier();
      uVar13 = plVar17[0xd20];
    }
    unaff_x26 = plVar17;
    if (uVar13 == uVar16) {
      return;
    }
  } while( true );
LAB_103e33398:
  lVar6 = plVar8[1];
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar6 != lVar12) {
    uVar18 = 0x6210;
    lVar12 = 0x6208;
    plVar10 = plVar17;
    do {
      if (((*(ulong *)(lVar6 + 0x6210) >> 0x20 & 1) == 0) ||
         ((ulong)plVar8[2] < *(ulong *)(lVar6 + 0x6218))) break;
      if (*(long *)(lVar6 + 0x6208) == 0) {
        uVar20 = 0x103e334e8;
        auVar22 = func_0x000108a07a20(&UNK_10b2fba08);
        puVar3 = &stack0xffffffffffffff80;
        goto SUB_103e334e8;
      }
      plVar8[1] = *(long *)(lVar6 + 0x6208);
      *(undefined8 *)(lVar6 + 0x6200) = 0;
      *(undefined8 *)(lVar6 + 0x6210) = 0;
      *(undefined8 *)(lVar6 + 0x6208) = 0;
      lVar4 = *plVar17;
      *(long *)(lVar6 + 0x6200) = *(long *)(lVar4 + 0x6200) + 0x20;
      plVar1 = (long *)(lVar4 + 0x6208);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        *plVar1 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6200) = *(long *)(lVar4 + 0x6200) + 0x20;
        lVar14 = *(long *)(lVar4 + 0x6208);
        if (lVar14 == 0) {
          *(long *)(lVar4 + 0x6208) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6200) = *(long *)(lVar14 + 0x6200) + 0x20;
          if (*(long *)(lVar14 + 0x6208) == 0) {
            *(long *)(lVar14 + 0x6208) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar8[1];
    } while (lVar6 != *plVar8);
    lVar12 = *plVar8;
  }
  if ((*(ulong *)(lVar12 + 0x6210) >> (plVar8[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar12 + 0x6210) >> 0x21 & 1) == 0) {
LAB_103e334b8:
      lVar12 = 0x16;
    }
    else {
      lVar12 = 0x15;
    }
    *plVar7 = lVar12;
  }
  else {
    _memcpy(plVar7,lVar12 + (plVar8[2] & 0x1fU) * 0x310,0x310);
    if (1 < *plVar7 - 0x15U) {
      plVar8[2] = plVar8[2] + 1;
    }
  }
  return;
LAB_103e33968:
  auVar21 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6920);
  lVar12 = auVar21._8_8_;
  puVar9 = auVar21._0_8_;
  auVar21._8_8_ = puVar9;
  auVar21._0_8_ = lVar12;
  *(undefined8 *)(puVar3 + -0x180) = unaff_x28;
  *(long *)(puVar3 + -0x178) = unaff_x27;
  *(long **)(puVar3 + -0x170) = unaff_x26;
  *(ulong *)(puVar3 + -0x168) = uVar15;
  *(undefined8 *)(puVar3 + -0x160) = 0x6900;
  *(undefined8 *)(puVar3 + -0x158) = 0x100000000;
  *(undefined8 *)(puVar3 + -0x150) = 0x6910;
  *(undefined8 *)(puVar3 + -0x148) = 0x6908;
  *(ulong *)(puVar3 + -0x140) = uVar16;
  *(long **)(puVar3 + -0x138) = plVar7;
  *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0xd0;
  *(undefined8 *)(puVar3 + -0x128) = 0x103e33974;
  ppuVar19 = (undefined1 **)(puVar3 + -0x130);
  *(undefined8 *)(puVar3 + -0x820) = 0;
  bVar5 = *(byte *)(lVar12 + 0x728);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      unaff_x26 = *(long **)(lVar12 + 0x350);
      *(undefined1 *)(lVar12 + 0x729) = 1;
      _memcpy(lVar12 + 0x358,lVar12,0x350);
      *(long **)(lVar12 + 0x6a8) = unaff_x26;
      *(undefined1 *)(lVar12 + 0x720) = 0;
LAB_103e33a08:
      *(long **)(lVar12 + 0x6b0) = unaff_x26;
      *(long **)(lVar12 + 0x6b8) = unaff_x26;
      uVar15 = 1;
      *(undefined8 *)(lVar12 + 0x6c0) = 1;
      *(undefined1 *)(lVar12 + 0x6d8) = 0;
LAB_103e33a24:
      *(long **)(lVar12 + 0x6c8) = unaff_x26;
      *(ulong *)(lVar12 + 0x6d0) = uVar15;
      lVar6 = *unaff_x26;
      if (*(ulong *)(lVar6 + 0x1e8) < uVar15) {
LAB_103e33a3c:
        *(undefined1 *)(lVar12 + 0x6d8) = 1;
      }
      else {
LAB_103e33a84:
        *(undefined8 *)(puVar3 + -0x810) = 0;
        *(undefined8 *)(puVar3 + -0x808) = 0;
        *(long *)(lVar12 + 0x6e0) = lVar6 + 0x1c0;
        *(undefined8 *)(lVar12 + 0x6e8) = 0;
        *(undefined8 *)(lVar12 + 0x700) = 0;
        uVar18 = *(undefined8 *)(puVar3 + -0x818);
        *(undefined8 *)(lVar12 + 0x6f8) = *(undefined8 *)(puVar3 + -0x810);
        *(undefined8 *)(lVar12 + 0x6f0) = uVar18;
        *(ulong *)(lVar12 + 0x708) = uVar15;
        *(ulong *)(lVar12 + 0x710) = uVar15;
        *(undefined1 *)(lVar12 + 0x718) = 0;
LAB_103e33aac:
        unaff_x25 = (undefined1 *)(lVar12 + 0x6d8);
        bVar5 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                          (lVar12 + 0x6e0,plVar10);
        if (bVar5 == 2) {
          *unaff_x25 = 4;
          uVar11 = 3;
          *(undefined1 *)(lVar12 + 0x720) = 3;
          *puVar9 = 0x16;
          goto LAB_103e33b44;
        }
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (lVar12 + 0x6e0);
        if (*(long *)(lVar12 + 0x6e8) != 0) {
          (**(code **)(*(long *)(lVar12 + 0x6e8) + 0x18))(*(undefined8 *)(lVar12 + 0x6f0));
        }
        uVar18 = 1;
        *unaff_x25 = 1;
        if ((bVar5 & 1) == 0) {
          plVar17 = *(long **)(lVar12 + 0x6b0);
          *(undefined1 *)(lVar12 + 0x720) = 1;
          *(undefined1 *)(lVar12 + 0x729) = 0;
          plVar10 = (long *)0x350;
          _memcpy(puVar3 + -0x818,lVar12 + 0x358);
          unaff_x24 = *plVar17;
          LOAcquire();
          lVar12 = *(long *)(unaff_x24 + 0x88);
          *(long *)(unaff_x24 + 0x88) = lVar12 + 1;
          auVar22._8_8_ = lVar12;
          auVar22._0_8_ = unaff_x24 + 0x80;
          uVar20 = 0x103e33b9c;
          puVar3 = puVar3 + -0x820;
          goto SUB_103e334e8;
        }
      }
      *(undefined1 *)(lVar12 + 0x720) = 1;
      *(undefined1 *)(lVar12 + 0x729) = 0;
      uVar18 = *(undefined8 *)(lVar12 + 0x358);
      _memcpy(puVar3 + -0x4c8,lVar12 + 0x360,0x348);
      *(undefined1 *)(lVar12 + 0x729) = 0;
      *puVar9 = uVar18;
      _memcpy(puVar9 + 1,puVar3 + -0x4c8,0x348);
      uVar11 = 1;
LAB_103e33b44:
      *(undefined1 *)(lVar12 + 0x728) = uVar11;
      return;
    }
    func_0x000108a07af4(&UNK_10b2fba38);
LAB_103e33c18:
    func_0x000108a07b10(&UNK_10b2fba38);
  }
  else {
    if (bVar5 != 3) goto LAB_103e33c18;
    bVar5 = *(byte *)(lVar12 + 0x720);
    if (1 < bVar5) {
      if (bVar5 != 3) {
        func_0x000108a07b10(&UNK_10b2fba50);
        goto LAB_103e33c68;
      }
      bVar5 = *(byte *)(lVar12 + 0x6d8);
      if (bVar5 < 3) {
        if (bVar5 != 0) {
          if (bVar5 == 1) {
            func_0x000108a07af4(&UNK_10b2fba20);
          }
          else {
            func_0x000108a07b10(&UNK_10b2fba20);
          }
          goto LAB_103e33c68;
        }
        unaff_x26 = *(long **)(lVar12 + 0x6b8);
        uVar15 = *(ulong *)(lVar12 + 0x6c0);
        goto LAB_103e33a24;
      }
      if (bVar5 != 3) goto LAB_103e33aac;
      uVar15 = *(ulong *)(lVar12 + 0x6d0);
      unaff_x26 = *(long **)(lVar12 + 0x6c8);
      lVar6 = *unaff_x26;
      if (uVar15 <= *(ulong *)(lVar6 + 0x1e8)) goto LAB_103e33a84;
      goto LAB_103e33a3c;
    }
    if (bVar5 == 0) {
      unaff_x26 = *(long **)(lVar12 + 0x6a8);
      goto LAB_103e33a08;
    }
  }
  func_0x000108a07af4(&UNK_10b2fba50);
LAB_103e33c68:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e33c6c);
  (*pcVar2)();
}

