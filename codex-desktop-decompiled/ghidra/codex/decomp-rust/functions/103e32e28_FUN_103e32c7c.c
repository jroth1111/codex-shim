
/* WARNING: Possible PIC construction at 0x000103e33b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103e33b9c) */
/* WARNING: Removing unreachable block (ram,0x000103e33bdc) */
/* WARNING: Removing unreachable block (ram,0x000103e33bec) */
/* WARNING: Removing unreachable block (ram,0x000103e33bf4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_103e32c7c(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x24;
  undefined1 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *****pppppuVar18;
  undefined8 uVar19;
  ulong in_xzr;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  uVar15 = *(ulong *)(lVar13 + 0x6900);
  while (uVar15 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar13 = *(long *)(lVar13 + 0x6908);
    if (lVar13 == 0) goto LAB_103e32df8;
    *param_2 = lVar13;
    InstructionSynchronizationBarrier();
    uVar15 = *(ulong *)(lVar13 + 0x6900);
  }
  lVar6 = param_2[1];
  plVar14 = param_3;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x6910) >> 0x20 & 1) == 0) ||
         ((ulong)param_2[2] < *(ulong *)(lVar6 + 0x6918))) break;
      if (*(long *)(lVar6 + 0x6908) == 0) {
        auVar23 = func_0x000108a07a20(&UNK_10b2fba08);
        plVar7 = auVar23._8_8_;
        plVar8 = auVar23._0_8_;
        uStack_48 = 0x103e32e28;
        lVar13 = *plVar7;
        uVar15 = *(ulong *)(lVar13 + 0x6a00);
        goto joined_r0x000103e32e5c;
      }
      param_2[1] = *(long *)(lVar6 + 0x6908);
      *(undefined8 *)(lVar6 + 0x6900) = 0;
      *(undefined8 *)(lVar6 + 0x6910) = 0;
      *(undefined8 *)(lVar6 + 0x6908) = 0;
      lVar13 = *param_3;
      *(long *)(lVar6 + 0x6900) = *(long *)(lVar13 + 0x6900) + 0x20;
      plVar8 = (long *)(lVar13 + 0x6908);
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        *plVar8 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6900) = *(long *)(lVar13 + 0x6900) + 0x20;
        lVar4 = *(long *)(lVar13 + 0x6908);
        if (lVar4 == 0) {
          *(long *)(lVar13 + 0x6908) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6900) = *(long *)(lVar4 + 0x6900) + 0x20;
          if (*(long *)(lVar4 + 0x6908) == 0) {
            *(long *)(lVar4 + 0x6908) = lVar6;
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
  if ((*(ulong *)(lVar13 + 0x6910) >> (param_2[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6910) >> 0x21 & 1) == 0) {
LAB_103e32df8:
      lVar13 = 0x18;
    }
    else {
      lVar13 = 0x17;
    }
    *param_1 = lVar13;
  }
  else {
    _memcpy(param_1,lVar13 + (param_2[2] & 0x1fU) * 0x348,0x348);
    if (1 < *param_1 - 0x17U) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return;
joined_r0x000103e32e5c:
  if (uVar15 == (plVar7[2] & 0xffffffffffffffe0U)) goto LAB_103e32e84;
  lVar13 = *(long *)(lVar13 + 0x6a08);
  if (lVar13 == 0) goto LAB_103e32fa4;
  *plVar7 = lVar13;
  InstructionSynchronizationBarrier();
  uVar15 = *(ulong *)(lVar13 + 0x6a00);
  goto joined_r0x000103e32e5c;
joined_r0x000103e33004:
  if (uVar15 == (plVar7[2] & 0xffffffffffffffe0U)) goto LAB_103e33028;
  lVar13 = *(long *)(lVar13 + 0xb08);
  if (lVar13 == 0) goto LAB_103e33164;
  *plVar7 = lVar13;
  InstructionSynchronizationBarrier();
  uVar15 = *(ulong *)(lVar13 + 0xb00);
  goto joined_r0x000103e33004;
joined_r0x000103e331c4:
  if (uVar15 == (plVar8[2] & 0xffffffffffffffe0U)) goto LAB_103e331ec;
  lVar13 = *(long *)(lVar13 + 0x6a08);
  if (lVar13 == 0) goto LAB_103e3330c;
  *plVar8 = lVar13;
  InstructionSynchronizationBarrier();
  uVar15 = *(ulong *)(lVar13 + 0x6a00);
  goto joined_r0x000103e331c4;
joined_r0x000103e33370:
  if (uVar15 == (plVar8[2] & 0xffffffffffffffe0U)) goto LAB_103e33398;
  lVar13 = *(long *)(lVar13 + 0x6208);
  if (lVar13 == 0) goto LAB_103e334b8;
  *plVar8 = lVar13;
  InstructionSynchronizationBarrier();
  uVar15 = *(ulong *)(lVar13 + 0x6200);
  goto joined_r0x000103e33370;
SUB_103e334e8:
  plVar14 = auVar25._0_8_;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(long *)(puVar2 + -0x58) = unaff_x27;
  *(long **)(puVar2 + -0x50) = unaff_x26;
  *(undefined1 **)(puVar2 + -0x48) = unaff_x25;
  *(long *)(puVar2 + -0x40) = unaff_x24;
  *(long *)(puVar2 + -0x38) = lVar13;
  *(undefined8 *)(puVar2 + -0x30) = uVar17;
  *(long **)(puVar2 + -0x28) = plVar7;
  *(long *)(puVar2 + -0x20) = auVar24._8_8_;
  *(long *)(puVar2 + -0x18) = auVar24._0_8_;
  *(undefined1 ******)(puVar2 + -0x10) = pppppuVar18;
  *(undefined8 *)(puVar2 + -8) = uVar19;
  uVar3 = auVar25._8_8_ & 0xffffffffffffffe0;
  uVar15 = uVar3 - *(long *)(*plVar14 + 0x6a00);
  if (uVar15 == 0) {
    return;
  }
  uVar15 = (ulong)((auVar25._8_8_ & 0x1f) < uVar15 >> 5);
  lVar13 = *plVar14;
  do {
    lVar6 = *(long *)(lVar13 + 0x6a08);
    if (*(long *)(lVar13 + 0x6a08) == 0) {
      lVar6 = *(long *)(lVar13 + 0x6a00);
      lVar4 = _malloc(0x6a20);
      if (lVar4 == 0) break;
      *(long *)(lVar4 + 0x6a00) = lVar6 + 0x20;
      *(undefined8 *)(lVar4 + 0x6a08) = 0;
      *(undefined8 *)(lVar4 + 0x6a18) = 0;
      *(undefined8 *)(lVar4 + 0x6a10) = 0;
      lVar6 = *(long *)(lVar13 + 0x6a08);
      if (lVar6 == 0) {
        *(long *)(lVar13 + 0x6a08) = lVar4;
        lVar6 = lVar4;
      }
      else {
        *(long *)(lVar4 + 0x6a00) = *(long *)(lVar6 + 0x6a00) + 0x20;
        lVar20 = *(long *)(lVar6 + 0x6a08);
        if (lVar20 == 0) {
          *(long *)(lVar6 + 0x6a08) = lVar4;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            *(long *)(lVar4 + 0x6a00) = *(long *)(lVar20 + 0x6a00) + 0x20;
            plVar8 = (long *)(lVar20 + 0x6a08);
            lVar20 = *plVar8;
          } while (lVar20 != 0);
          *plVar8 = lVar4;
        }
      }
    }
    if ((((uint)uVar15 & (uint)((int)*(undefined8 *)(lVar13 + 0x6a10) == -1)) == 0) ||
       (*plVar14 != lVar13)) {
      uVar15 = 0;
      InstructionSynchronizationBarrier();
      uVar16 = *(ulong *)(lVar6 + 0x6a00);
    }
    else {
      *plVar14 = lVar6;
      uVar15 = plVar14[1];
      plVar14[1] = uVar15 | in_xzr;
      LORelease();
      *(ulong *)(lVar13 + 0x6a18) = uVar15;
      *(ulong *)(lVar13 + 0x6a10) = *(ulong *)(lVar13 + 0x6a10) | 0x100000000;
      LORelease();
      uVar15 = 1;
      InstructionSynchronizationBarrier();
      uVar16 = *(ulong *)(lVar6 + 0x6a00);
    }
    lVar13 = lVar6;
    if (uVar16 == uVar3) {
      return;
    }
  } while( true );
  auVar23 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6a20);
  plVar8 = auVar23._0_8_;
  *(undefined8 *)(puVar2 + -0xc0) = unaff_x28;
  *(long *)(puVar2 + -0xb8) = lVar6;
  *(long *)(puVar2 + -0xb0) = lVar13;
  *(ulong *)(puVar2 + -0xa8) = uVar15;
  *(undefined8 *)(puVar2 + -0xa0) = 0x6a00;
  *(undefined8 *)(puVar2 + -0x98) = 0x100000000;
  *(undefined8 *)(puVar2 + -0x90) = 0x6a10;
  *(undefined8 *)(puVar2 + -0x88) = 0x6a08;
  *(ulong *)(puVar2 + -0x80) = uVar3;
  *(long **)(puVar2 + -0x78) = plVar14;
  *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
  *(undefined8 *)(puVar2 + -0x68) = 0x103e3366c;
  uVar3 = auVar23._8_8_ & 0xffffffffffffffe0;
  uVar15 = uVar3 - *(long *)(*plVar8 + 0x6200);
  if (uVar15 == 0) {
    return;
  }
  uVar15 = (ulong)((auVar23._8_8_ & 0x1f) < uVar15 >> 5);
  lVar13 = *plVar8;
  do {
    lVar6 = *(long *)(lVar13 + 0x6208);
    if (*(long *)(lVar13 + 0x6208) == 0) {
      lVar6 = *(long *)(lVar13 + 0x6200);
      lVar4 = _malloc(0x6220);
      if (lVar4 == 0) break;
      *(long *)(lVar4 + 0x6200) = lVar6 + 0x20;
      *(undefined8 *)(lVar4 + 0x6208) = 0;
      *(undefined8 *)(lVar4 + 0x6218) = 0;
      *(undefined8 *)(lVar4 + 0x6210) = 0;
      lVar6 = *(long *)(lVar13 + 0x6208);
      if (lVar6 == 0) {
        *(long *)(lVar13 + 0x6208) = lVar4;
        lVar6 = lVar4;
      }
      else {
        *(long *)(lVar4 + 0x6200) = *(long *)(lVar6 + 0x6200) + 0x20;
        lVar20 = *(long *)(lVar6 + 0x6208);
        if (lVar20 == 0) {
          *(long *)(lVar6 + 0x6208) = lVar4;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            *(long *)(lVar4 + 0x6200) = *(long *)(lVar20 + 0x6200) + 0x20;
            plVar14 = (long *)(lVar20 + 0x6208);
            lVar20 = *plVar14;
          } while (lVar20 != 0);
          *plVar14 = lVar4;
        }
      }
    }
    if ((((uint)uVar15 & (uint)((int)*(undefined8 *)(lVar13 + 0x6210) == -1)) == 0) ||
       (*plVar8 != lVar13)) {
      uVar15 = 0;
      InstructionSynchronizationBarrier();
      uVar16 = *(ulong *)(lVar6 + 0x6200);
    }
    else {
      *plVar8 = lVar6;
      uVar15 = plVar8[1];
      plVar8[1] = uVar15 | in_xzr;
      LORelease();
      *(ulong *)(lVar13 + 0x6218) = uVar15;
      *(ulong *)(lVar13 + 0x6210) = *(ulong *)(lVar13 + 0x6210) | 0x100000000;
      LORelease();
      uVar15 = 1;
      InstructionSynchronizationBarrier();
      uVar16 = *(ulong *)(lVar6 + 0x6200);
    }
    lVar13 = lVar6;
    if (uVar16 == uVar3) {
      return;
    }
  } while( true );
  auVar23 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6220);
  plVar14 = auVar23._0_8_;
  *(undefined8 *)(puVar2 + -0x120) = unaff_x28;
  *(long *)(puVar2 + -0x118) = lVar6;
  *(long *)(puVar2 + -0x110) = lVar13;
  *(ulong *)(puVar2 + -0x108) = uVar15;
  *(undefined8 *)(puVar2 + -0x100) = 0x6200;
  *(undefined8 *)(puVar2 + -0xf8) = 0x100000000;
  *(undefined8 *)(puVar2 + -0xf0) = 0x6210;
  *(undefined8 *)(puVar2 + -0xe8) = 0x6208;
  *(ulong *)(puVar2 + -0xe0) = uVar3;
  *(long **)(puVar2 + -0xd8) = plVar8;
  *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0x70;
  *(undefined8 *)(puVar2 + -200) = 0x103e337f0;
  uVar3 = auVar23._8_8_ & 0xffffffffffffffe0;
  uVar15 = uVar3 - ((long *)*plVar14)[0xd20];
  if (uVar15 == 0) {
    return;
  }
  uVar15 = (ulong)((auVar23._8_8_ & 0x1f) < uVar15 >> 5);
  unaff_x26 = (long *)*plVar14;
  do {
    plVar8 = (long *)unaff_x26[0xd21];
    if ((long *)unaff_x26[0xd21] == (long *)0x0) {
      unaff_x27 = unaff_x26[0xd20];
      plVar7 = (long *)_malloc(0x6920);
      if (plVar7 == (long *)0x0) goto LAB_103e33968;
      plVar7[0xd20] = unaff_x27 + 0x20;
      plVar7[0xd21] = 0;
      plVar7[0xd23] = 0;
      plVar7[0xd22] = 0;
      plVar8 = (long *)unaff_x26[0xd21];
      if (plVar8 == (long *)0x0) {
        unaff_x26[0xd21] = (long)plVar7;
        plVar8 = plVar7;
      }
      else {
        plVar7[0xd20] = plVar8[0xd20] + 0x20;
        lVar13 = plVar8[0xd21];
        if (lVar13 == 0) {
          plVar8[0xd21] = (long)plVar7;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            plVar7[0xd20] = *(long *)(lVar13 + 0x6900) + 0x20;
            plVar10 = (long *)(lVar13 + 0x6908);
            lVar13 = *plVar10;
          } while (lVar13 != 0);
          *plVar10 = (long)plVar7;
        }
      }
    }
    if ((((uint)uVar15 & (uint)((int)unaff_x26[0xd22] == -1)) == 0) ||
       ((long *)*plVar14 != unaff_x26)) {
      uVar15 = 0;
      InstructionSynchronizationBarrier();
      uVar16 = plVar8[0xd20];
    }
    else {
      *plVar14 = (long)plVar8;
      uVar15 = plVar14[1];
      plVar14[1] = uVar15 | in_xzr;
      LORelease();
      unaff_x26[0xd23] = uVar15;
      unaff_x26[0xd22] = unaff_x26[0xd22] | 0x100000000;
      LORelease();
      uVar15 = 1;
      InstructionSynchronizationBarrier();
      uVar16 = plVar8[0xd20];
    }
    unaff_x26 = plVar8;
    if (uVar16 == uVar3) {
      return;
    }
  } while( true );
LAB_103e32e84:
  lVar6 = plVar7[1];
  plVar11 = plVar14;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x6a10) >> 0x20 & 1) == 0) ||
         ((ulong)plVar7[2] < *(ulong *)(lVar6 + 0x6a18))) break;
      if (*(long *)(lVar6 + 0x6a08) == 0) {
        auVar24 = func_0x000108a07a20(&UNK_10b2fba08);
        plVar7 = auVar24._8_8_;
        plVar8 = auVar24._0_8_;
        uStack_b0 = 0x6a10;
        uStack_88 = 0x103e32fd4;
        lVar13 = *plVar7;
        uVar15 = *(ulong *)(lVar13 + 0xb00);
        goto joined_r0x000103e33004;
      }
      plVar7[1] = *(long *)(lVar6 + 0x6a08);
      *(undefined8 *)(lVar6 + 0x6a00) = 0;
      *(undefined8 *)(lVar6 + 0x6a10) = 0;
      *(undefined8 *)(lVar6 + 0x6a08) = 0;
      lVar13 = *plVar14;
      *(long *)(lVar6 + 0x6a00) = *(long *)(lVar13 + 0x6a00) + 0x20;
      plVar10 = (long *)(lVar13 + 0x6a08);
      lVar13 = *plVar10;
      if (lVar13 == 0) {
        *plVar10 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6a00) = *(long *)(lVar13 + 0x6a00) + 0x20;
        lVar4 = *(long *)(lVar13 + 0x6a08);
        if (lVar4 == 0) {
          *(long *)(lVar13 + 0x6a08) = lVar6;
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
      lVar6 = plVar7[1];
    } while (lVar6 != *plVar7);
    lVar13 = *plVar7;
  }
  if ((*(ulong *)(lVar13 + 0x6a10) >> (plVar7[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6a10) >> 0x21 & 1) == 0) {
LAB_103e32fa4:
      lVar13 = 0x18;
    }
    else {
      lVar13 = 0x17;
    }
    *plVar8 = lVar13;
  }
  else {
    _memcpy(plVar8,lVar13 + (plVar7[2] & 0x1fU) * 0x350,0x350);
    if (1 < *plVar8 - 0x17U) {
      plVar7[2] = plVar7[2] + 1;
    }
  }
  return;
LAB_103e33028:
  lVar6 = plVar7[1];
  plVar10 = plVar11;
  plStack_a8 = plVar14;
  ppuStack_90 = &puStack_50;
  if (lVar6 == lVar13) {
    uVar15 = plVar7[2] & 0x1f;
    uVar3 = *(ulong *)(lVar13 + 0xb10);
    uVar16 = uVar3 >> uVar15;
  }
  else {
    do {
      uStack_a0 = auVar23._8_8_;
      uStack_98 = auVar23._0_8_;
      if (((*(ulong *)(lVar6 + 0xb10) >> 0x20 & 1) == 0) ||
         ((ulong)plVar7[2] < *(ulong *)(lVar6 + 0xb18))) break;
      if (*(long *)(lVar6 + 0xb08) == 0) {
        auVar23 = func_0x000108a07a20(&UNK_10b2fba08);
        plVar8 = auVar23._8_8_;
        plVar14 = auVar23._0_8_;
        uStack_b8 = 0x103e33190;
        lVar13 = *plVar8;
        uVar15 = *(ulong *)(lVar13 + 0x6a00);
        goto joined_r0x000103e331c4;
      }
      plVar7[1] = *(long *)(lVar6 + 0xb08);
      *(undefined8 *)(lVar6 + 0xb00) = 0;
      *(undefined8 *)(lVar6 + 0xb10) = 0;
      *(undefined8 *)(lVar6 + 0xb08) = 0;
      lVar13 = *plVar11;
      *(long *)(lVar6 + 0xb00) = *(long *)(lVar13 + 0xb00) + 0x20;
      plVar14 = (long *)(lVar13 + 0xb08);
      lVar13 = *plVar14;
      if (lVar13 == 0) {
        *plVar14 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0xb00) = *(long *)(lVar13 + 0xb00) + 0x20;
        lVar4 = *(long *)(lVar13 + 0xb08);
        if (lVar4 == 0) {
          *(long *)(lVar13 + 0xb08) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0xb00) = *(long *)(lVar4 + 0xb00) + 0x20;
          if (*(long *)(lVar4 + 0xb08) == 0) {
            *(long *)(lVar4 + 0xb08) = lVar6;
          }
          else {
            _free();
            auVar23._8_8_ = uStack_a0;
            auVar23._0_8_ = uStack_98;
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar7[1];
    } while (lVar6 != *plVar7);
    lVar13 = *plVar7;
    uVar15 = plVar7[2] & 0x1f;
    uVar3 = *(ulong *)(lVar13 + 0xb10);
    uVar16 = uVar3 >> uVar15;
  }
  if ((uVar16 & 1) == 0) {
    if ((uVar3 >> 0x21 & 1) == 0) {
LAB_103e33164:
      lVar13 = -0x7fffffffffffffff;
    }
    else {
      lVar13 = -0x8000000000000000;
    }
    *plVar8 = lVar13;
  }
  else {
    plVar14 = (long *)(lVar13 + uVar15 * 0x58);
    lVar4 = *plVar14;
    lVar6 = plVar14[3];
    lVar13 = plVar14[2];
    plVar8[1] = plVar14[1];
    *plVar8 = lVar4;
    plVar8[3] = lVar6;
    plVar8[2] = lVar13;
    lVar6 = plVar14[5];
    lVar13 = plVar14[4];
    lVar20 = plVar14[7];
    lVar4 = plVar14[6];
    lVar22 = plVar14[9];
    lVar21 = plVar14[8];
    plVar8[10] = plVar14[10];
    plVar8[7] = lVar20;
    plVar8[6] = lVar4;
    plVar8[9] = lVar22;
    plVar8[8] = lVar21;
    plVar8[5] = lVar6;
    plVar8[4] = lVar13;
    if (-0x7fffffffffffffff < *plVar8) {
      plVar7[2] = plVar7[2] + 1;
    }
  }
  return;
LAB_103e331ec:
  lVar6 = plVar8[1];
  plVar7 = plVar10;
  pppuStack_c0 = &ppuStack_90;
  if (lVar6 != lVar13) {
    do {
      if (((*(ulong *)(lVar6 + 0x6a10) >> 0x20 & 1) == 0) ||
         ((ulong)plVar8[2] < *(ulong *)(lVar6 + 0x6a18))) break;
      if (*(long *)(lVar6 + 0x6a08) == 0) {
        auVar24 = func_0x000108a07a20(&UNK_10b2fba08);
        plVar8 = auVar24._8_8_;
        plVar14 = auVar24._0_8_;
        uStack_f8 = 0x103e3333c;
        pppppuVar18 = &ppppuStack_100;
        lVar13 = *plVar8;
        uVar15 = *(ulong *)(lVar13 + 0x6200);
        goto joined_r0x000103e33370;
      }
      plVar8[1] = *(long *)(lVar6 + 0x6a08);
      *(undefined8 *)(lVar6 + 0x6a00) = 0;
      *(undefined8 *)(lVar6 + 0x6a10) = 0;
      *(undefined8 *)(lVar6 + 0x6a08) = 0;
      lVar13 = *plVar10;
      *(long *)(lVar6 + 0x6a00) = *(long *)(lVar13 + 0x6a00) + 0x20;
      plVar11 = (long *)(lVar13 + 0x6a08);
      lVar13 = *plVar11;
      if (lVar13 == 0) {
        *plVar11 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6a00) = *(long *)(lVar13 + 0x6a00) + 0x20;
        lVar4 = *(long *)(lVar13 + 0x6a08);
        if (lVar4 == 0) {
          *(long *)(lVar13 + 0x6a08) = lVar6;
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
      lVar6 = plVar8[1];
    } while (lVar6 != *plVar8);
    lVar13 = *plVar8;
  }
  if ((*(ulong *)(lVar13 + 0x6a10) >> (plVar8[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6a10) >> 0x21 & 1) == 0) {
LAB_103e3330c:
      lVar13 = 0x16;
    }
    else {
      lVar13 = 0x15;
    }
    *plVar14 = lVar13;
  }
  else {
    _memcpy(plVar14,lVar13 + (plVar8[2] & 0x1fU) * 0x350,0x350);
    if (1 < *plVar14 - 0x15U) {
      plVar8[2] = plVar8[2] + 1;
    }
  }
  return;
LAB_103e33398:
  lVar6 = plVar8[1];
  ppppuStack_100 = &pppuStack_c0;
  if (lVar6 != lVar13) {
    uVar17 = 0x6210;
    lVar13 = 0x6208;
    plVar11 = plVar7;
    do {
      if (((*(ulong *)(lVar6 + 0x6210) >> 0x20 & 1) == 0) ||
         ((ulong)plVar8[2] < *(ulong *)(lVar6 + 0x6218))) break;
      if (*(long *)(lVar6 + 0x6208) == 0) {
        uVar19 = 0x103e334e8;
        auVar25 = func_0x000108a07a20(&UNK_10b2fba08);
        puVar2 = &stack0xfffffffffffffed0;
        goto SUB_103e334e8;
      }
      plVar8[1] = *(long *)(lVar6 + 0x6208);
      *(undefined8 *)(lVar6 + 0x6200) = 0;
      *(undefined8 *)(lVar6 + 0x6210) = 0;
      *(undefined8 *)(lVar6 + 0x6208) = 0;
      lVar4 = *plVar7;
      *(long *)(lVar6 + 0x6200) = *(long *)(lVar4 + 0x6200) + 0x20;
      plVar10 = (long *)(lVar4 + 0x6208);
      lVar4 = *plVar10;
      if (lVar4 == 0) {
        *plVar10 = lVar6;
      }
      else {
        *(long *)(lVar6 + 0x6200) = *(long *)(lVar4 + 0x6200) + 0x20;
        lVar20 = *(long *)(lVar4 + 0x6208);
        if (lVar20 == 0) {
          *(long *)(lVar4 + 0x6208) = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x6200) = *(long *)(lVar20 + 0x6200) + 0x20;
          if (*(long *)(lVar20 + 0x6208) == 0) {
            *(long *)(lVar20 + 0x6208) = lVar6;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar6 = plVar8[1];
    } while (lVar6 != *plVar8);
    lVar13 = *plVar8;
  }
  if ((*(ulong *)(lVar13 + 0x6210) >> (plVar8[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar13 + 0x6210) >> 0x21 & 1) == 0) {
LAB_103e334b8:
      lVar13 = 0x16;
    }
    else {
      lVar13 = 0x15;
    }
    *plVar14 = lVar13;
  }
  else {
    _memcpy(plVar14,lVar13 + (plVar8[2] & 0x1fU) * 0x310,0x310);
    if (1 < *plVar14 - 0x15U) {
      plVar8[2] = plVar8[2] + 1;
    }
  }
  return;
LAB_103e33968:
  auVar23 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6920);
  lVar13 = auVar23._8_8_;
  puVar9 = auVar23._0_8_;
  auVar24._8_8_ = puVar9;
  auVar24._0_8_ = lVar13;
  *(undefined8 *)(puVar2 + -0x180) = unaff_x28;
  *(long *)(puVar2 + -0x178) = unaff_x27;
  *(long **)(puVar2 + -0x170) = unaff_x26;
  *(ulong *)(puVar2 + -0x168) = uVar15;
  *(undefined8 *)(puVar2 + -0x160) = 0x6900;
  *(undefined8 *)(puVar2 + -0x158) = 0x100000000;
  *(undefined8 *)(puVar2 + -0x150) = 0x6910;
  *(undefined8 *)(puVar2 + -0x148) = 0x6908;
  *(ulong *)(puVar2 + -0x140) = uVar3;
  *(long **)(puVar2 + -0x138) = plVar14;
  *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0xd0;
  *(undefined8 *)(puVar2 + -0x128) = 0x103e33974;
  pppppuVar18 = (undefined1 *****)(puVar2 + -0x130);
  *(undefined8 *)(puVar2 + -0x820) = 0;
  bVar5 = *(byte *)(lVar13 + 0x728);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      unaff_x26 = *(long **)(lVar13 + 0x350);
      *(undefined1 *)(lVar13 + 0x729) = 1;
      _memcpy(lVar13 + 0x358,lVar13,0x350);
      *(long **)(lVar13 + 0x6a8) = unaff_x26;
      *(undefined1 *)(lVar13 + 0x720) = 0;
LAB_103e33a08:
      *(long **)(lVar13 + 0x6b0) = unaff_x26;
      *(long **)(lVar13 + 0x6b8) = unaff_x26;
      uVar15 = 1;
      *(undefined8 *)(lVar13 + 0x6c0) = 1;
      *(undefined1 *)(lVar13 + 0x6d8) = 0;
LAB_103e33a24:
      *(long **)(lVar13 + 0x6c8) = unaff_x26;
      *(ulong *)(lVar13 + 0x6d0) = uVar15;
      lVar6 = *unaff_x26;
      if (*(ulong *)(lVar6 + 0x1e8) < uVar15) {
LAB_103e33a3c:
        *(undefined1 *)(lVar13 + 0x6d8) = 1;
      }
      else {
LAB_103e33a84:
        *(undefined8 *)(puVar2 + -0x810) = 0;
        *(undefined8 *)(puVar2 + -0x808) = 0;
        *(long *)(lVar13 + 0x6e0) = lVar6 + 0x1c0;
        *(undefined8 *)(lVar13 + 0x6e8) = 0;
        *(undefined8 *)(lVar13 + 0x700) = 0;
        uVar17 = *(undefined8 *)(puVar2 + -0x818);
        *(undefined8 *)(lVar13 + 0x6f8) = *(undefined8 *)(puVar2 + -0x810);
        *(undefined8 *)(lVar13 + 0x6f0) = uVar17;
        *(ulong *)(lVar13 + 0x708) = uVar15;
        *(ulong *)(lVar13 + 0x710) = uVar15;
        *(undefined1 *)(lVar13 + 0x718) = 0;
LAB_103e33aac:
        unaff_x25 = (undefined1 *)(lVar13 + 0x6d8);
        bVar5 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                          (lVar13 + 0x6e0,plVar11);
        if (bVar5 == 2) {
          *unaff_x25 = 4;
          uVar12 = 3;
          *(undefined1 *)(lVar13 + 0x720) = 3;
          *puVar9 = 0x16;
          goto LAB_103e33b44;
        }
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (lVar13 + 0x6e0);
        if (*(long *)(lVar13 + 0x6e8) != 0) {
          (**(code **)(*(long *)(lVar13 + 0x6e8) + 0x18))(*(undefined8 *)(lVar13 + 0x6f0));
        }
        uVar17 = 1;
        *unaff_x25 = 1;
        if ((bVar5 & 1) == 0) {
          plVar7 = *(long **)(lVar13 + 0x6b0);
          *(undefined1 *)(lVar13 + 0x720) = 1;
          *(undefined1 *)(lVar13 + 0x729) = 0;
          plVar11 = (long *)0x350;
          _memcpy(puVar2 + -0x818,lVar13 + 0x358);
          unaff_x24 = *plVar7;
          LOAcquire();
          lVar13 = *(long *)(unaff_x24 + 0x88);
          *(long *)(unaff_x24 + 0x88) = lVar13 + 1;
          auVar25._8_8_ = lVar13;
          auVar25._0_8_ = unaff_x24 + 0x80;
          uVar19 = 0x103e33b9c;
          puVar2 = puVar2 + -0x820;
          goto SUB_103e334e8;
        }
      }
      *(undefined1 *)(lVar13 + 0x720) = 1;
      *(undefined1 *)(lVar13 + 0x729) = 0;
      uVar17 = *(undefined8 *)(lVar13 + 0x358);
      _memcpy(puVar2 + -0x4c8,lVar13 + 0x360,0x348);
      *(undefined1 *)(lVar13 + 0x729) = 0;
      *puVar9 = uVar17;
      _memcpy(puVar9 + 1,puVar2 + -0x4c8,0x348);
      uVar12 = 1;
LAB_103e33b44:
      *(undefined1 *)(lVar13 + 0x728) = uVar12;
      return;
    }
    func_0x000108a07af4(&UNK_10b2fba38);
LAB_103e33c18:
    func_0x000108a07b10(&UNK_10b2fba38);
  }
  else {
    if (bVar5 != 3) goto LAB_103e33c18;
    bVar5 = *(byte *)(lVar13 + 0x720);
    if (1 < bVar5) {
      if (bVar5 != 3) {
        func_0x000108a07b10(&UNK_10b2fba50);
        goto LAB_103e33c68;
      }
      bVar5 = *(byte *)(lVar13 + 0x6d8);
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
        unaff_x26 = *(long **)(lVar13 + 0x6b8);
        uVar15 = *(ulong *)(lVar13 + 0x6c0);
        goto LAB_103e33a24;
      }
      if (bVar5 != 3) goto LAB_103e33aac;
      uVar15 = *(ulong *)(lVar13 + 0x6d0);
      unaff_x26 = *(long **)(lVar13 + 0x6c8);
      lVar6 = *unaff_x26;
      if (uVar15 <= *(ulong *)(lVar6 + 0x1e8)) goto LAB_103e33a84;
      goto LAB_103e33a3c;
    }
    if (bVar5 == 0) {
      unaff_x26 = *(long **)(lVar13 + 0x6a8);
      goto LAB_103e33a08;
    }
  }
  func_0x000108a07af4(&UNK_10b2fba50);
LAB_103e33c68:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e33c6c);
  (*pcVar1)();
}

