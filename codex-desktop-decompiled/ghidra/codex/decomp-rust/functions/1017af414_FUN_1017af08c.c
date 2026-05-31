
/* WARNING: Possible PIC construction at 0x0001017afd24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017afd28) */
/* WARNING: Removing unreachable block (ram,0x0001017afd98) */
/* WARNING: Removing unreachable block (ram,0x0001017afda8) */
/* WARNING: Removing unreachable block (ram,0x0001017afdb0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1017af08c(byte *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar10;
  long *plVar11;
  byte bVar12;
  undefined1 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  mach_header *pmVar21;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *****pppppuVar22;
  ulong in_xzr;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 ****ppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  byte *pbStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  uint *puVar6;
  long *plVar9;
  
  lVar14 = *param_2;
  uVar19 = *(ulong *)(lVar14 + 0x1900);
  while (uVar19 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar14 = *(long *)(lVar14 + 0x1908);
    if (lVar14 == 0) goto LAB_1017af23c;
    *param_2 = lVar14;
    InstructionSynchronizationBarrier();
    uVar19 = *(ulong *)(lVar14 + 0x1900);
  }
  lVar5 = param_2[1];
  plVar18 = param_3;
  if (lVar5 != lVar14) {
    do {
      if (((*(ulong *)(lVar5 + 0x1910) >> 0x20 & 1) == 0) ||
         ((ulong)param_2[2] < *(ulong *)(lVar5 + 0x1918))) break;
      if (*(long *)(lVar5 + 0x1908) == 0) {
        auVar34 = func_0x000108a07a20(&UNK_10b25a3c8);
        plVar9 = auVar34._8_8_;
        puVar6 = auVar34._0_8_;
        uStack_70 = 0x1910;
        uStack_48 = 0x1017af26c;
        lVar14 = *plVar9;
        uVar19 = *(ulong *)(lVar14 + 0x800);
        goto joined_r0x0001017af29c;
      }
      param_2[1] = *(long *)(lVar5 + 0x1908);
      *(undefined8 *)(lVar5 + 0x1900) = 0;
      *(undefined8 *)(lVar5 + 0x1910) = 0;
      *(undefined8 *)(lVar5 + 0x1908) = 0;
      lVar14 = *param_3;
      *(long *)(lVar5 + 0x1900) = *(long *)(lVar14 + 0x1900) + 0x20;
      plVar9 = (long *)(lVar14 + 0x1908);
      lVar14 = *plVar9;
      if (lVar14 == 0) {
        *plVar9 = lVar5;
      }
      else {
        *(long *)(lVar5 + 0x1900) = *(long *)(lVar14 + 0x1900) + 0x20;
        lVar26 = *(long *)(lVar14 + 0x1908);
        if (lVar26 == 0) {
          *(long *)(lVar14 + 0x1908) = lVar5;
        }
        else {
          *(long *)(lVar5 + 0x1900) = *(long *)(lVar26 + 0x1900) + 0x20;
          if (*(long *)(lVar26 + 0x1908) == 0) {
            *(long *)(lVar26 + 0x1908) = lVar5;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar5 = param_2[1];
    } while (lVar5 != *param_2);
    lVar14 = *param_2;
  }
  if ((*(ulong *)(lVar14 + 0x1910) >> (param_2[2] & 0x1fU) & 1) == 0) {
    if ((*(ulong *)(lVar14 + 0x1910) >> 0x21 & 1) == 0) {
LAB_1017af23c:
      bVar12 = 0x10;
    }
    else {
      bVar12 = 0xf;
    }
    *param_1 = bVar12;
  }
  else {
    puVar15 = (undefined8 *)(lVar14 + (param_2[2] & 0x1fU) * 200);
    uVar16 = *puVar15;
    *(undefined8 *)(param_1 + 8) = puVar15[1];
    *(undefined8 *)param_1 = uVar16;
    uVar23 = puVar15[3];
    uVar16 = puVar15[2];
    uVar25 = puVar15[5];
    uVar24 = puVar15[4];
    uVar28 = puVar15[6];
    uVar32 = puVar15[9];
    uVar29 = puVar15[8];
    *(undefined8 *)(param_1 + 0x38) = puVar15[7];
    *(undefined8 *)(param_1 + 0x30) = uVar28;
    *(undefined8 *)(param_1 + 0x48) = uVar32;
    *(undefined8 *)(param_1 + 0x40) = uVar29;
    *(undefined8 *)(param_1 + 0x18) = uVar23;
    *(undefined8 *)(param_1 + 0x10) = uVar16;
    *(undefined8 *)(param_1 + 0x28) = uVar25;
    *(undefined8 *)(param_1 + 0x20) = uVar24;
    uVar23 = puVar15[0xb];
    uVar16 = puVar15[10];
    uVar25 = puVar15[0xd];
    uVar24 = puVar15[0xc];
    uVar28 = puVar15[0xe];
    uVar32 = puVar15[0x11];
    uVar29 = puVar15[0x10];
    *(undefined8 *)(param_1 + 0x78) = puVar15[0xf];
    *(undefined8 *)(param_1 + 0x70) = uVar28;
    *(undefined8 *)(param_1 + 0x88) = uVar32;
    *(undefined8 *)(param_1 + 0x80) = uVar29;
    *(undefined8 *)(param_1 + 0x58) = uVar23;
    *(undefined8 *)(param_1 + 0x50) = uVar16;
    *(undefined8 *)(param_1 + 0x68) = uVar25;
    *(undefined8 *)(param_1 + 0x60) = uVar24;
    uVar23 = puVar15[0x13];
    uVar16 = puVar15[0x12];
    uVar25 = puVar15[0x15];
    uVar24 = puVar15[0x14];
    uVar29 = puVar15[0x17];
    uVar28 = puVar15[0x16];
    *(undefined8 *)(param_1 + 0xc0) = puVar15[0x18];
    *(undefined8 *)(param_1 + 0xa8) = uVar25;
    *(undefined8 *)(param_1 + 0xa0) = uVar24;
    *(undefined8 *)(param_1 + 0xb8) = uVar29;
    *(undefined8 *)(param_1 + 0xb0) = uVar28;
    *(undefined8 *)(param_1 + 0x98) = uVar23;
    *(undefined8 *)(param_1 + 0x90) = uVar16;
    if (1 < *param_1 - 0xf) {
      param_2[2] = param_2[2] + 1;
    }
  }
  return;
joined_r0x0001017af29c:
  if (uVar19 == (plVar9[2] & 0xffffffffffffffe0U)) goto LAB_1017af2c0;
  lVar14 = *(long *)(lVar14 + 0x808);
  if (lVar14 == 0) goto LAB_1017af3e8;
  *plVar9 = lVar14;
  InstructionSynchronizationBarrier();
  uVar19 = *(ulong *)(lVar14 + 0x800);
  goto joined_r0x0001017af29c;
joined_r0x0001017af444:
  if (uVar19 == (plVar11[2] & 0xffffffffffffffe0U)) goto LAB_1017af468;
  lVar14 = *(long *)(lVar14 + 0x808);
  if (lVar14 == 0) goto LAB_1017af590;
  *plVar11 = lVar14;
  InstructionSynchronizationBarrier();
  uVar19 = *(ulong *)(lVar14 + 0x800);
  goto joined_r0x0001017af444;
joined_r0x0001017af5ec:
  if (uVar19 == (plVar9[2] & 0xffffffffffffffe0U)) goto LAB_1017af610;
  lVar14 = *(long *)(lVar14 + 0x708);
  if (lVar14 == 0) goto LAB_1017af744;
  *plVar9 = lVar14;
  InstructionSynchronizationBarrier();
  uVar19 = *(ulong *)(lVar14 + 0x700);
  goto joined_r0x0001017af5ec;
LAB_1017af7e0:
  puVar2 = *(undefined1 **)(puVar7 + 0x708);
  if (*(undefined1 **)(puVar7 + 0x708) == (undefined1 *)0x0) {
    lVar14 = *(long *)(puVar7 + 0x700);
    puVar8 = (undefined1 *)_malloc(0x720);
    if (puVar8 == (undefined1 *)0x0) {
      uVar16 = 0x1017af8d4;
      auVar36 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x720);
      puVar2 = &stack0xfffffffffffffef0;
      goto SUB_1017af8d4;
    }
    *(long *)(puVar8 + 0x700) = lVar14 + 0x20;
    *(undefined8 *)(puVar8 + 0x708) = 0;
    *(undefined8 *)(puVar8 + 0x718) = 0;
    *(undefined8 *)(puVar8 + 0x710) = 0;
    puVar2 = *(undefined1 **)(puVar7 + 0x708);
    if (puVar2 == (undefined1 *)0x0) {
      *(undefined1 **)(puVar7 + 0x708) = puVar8;
      puVar2 = puVar8;
    }
    else {
      *(long *)(puVar8 + 0x700) = *(long *)(puVar2 + 0x700) + 0x20;
      lVar14 = *(long *)(puVar2 + 0x708);
      if (lVar14 == 0) {
        *(undefined1 **)(puVar2 + 0x708) = puVar8;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(puVar8 + 0x700) = *(long *)(lVar14 + 0x700) + 0x20;
          plVar9 = (long *)(lVar14 + 0x708);
          lVar14 = *plVar9;
        } while (lVar14 != 0);
        *plVar9 = (long)puVar8;
      }
    }
  }
  if ((((uint)uVar19 & (uint)((int)*(undefined8 *)(puVar7 + 0x710) == -1)) == 0) ||
     ((undefined1 *)*plVar18 != puVar7)) {
    uVar19 = 0;
    InstructionSynchronizationBarrier();
    uVar20 = *(ulong *)(puVar2 + 0x700);
  }
  else {
    *plVar18 = (long)puVar2;
    uVar19 = plVar18[1];
    plVar18[1] = uVar19 | in_xzr;
    LORelease();
    *(ulong *)(puVar7 + 0x718) = uVar19;
    *(ulong *)(puVar7 + 0x710) = *(ulong *)(puVar7 + 0x710) | 0x100000000;
    LORelease();
    uVar19 = 1;
    InstructionSynchronizationBarrier();
    uVar20 = *(ulong *)(puVar2 + 0x700);
  }
  puVar7 = puVar2;
  if (uVar20 == uVar3) {
    return;
  }
  goto LAB_1017af7e0;
SUB_1017af8d4:
  plVar18 = auVar36._0_8_;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(long *)(puVar2 + -0x58) = unaff_x27;
  *(long *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(long *)(puVar2 + -0x40) = lVar14;
  *(undefined1 **)(puVar2 + -0x38) = puVar7;
  *(ulong *)(puVar2 + -0x30) = uVar19;
  *(mach_header **)(puVar2 + -0x28) = pmVar21;
  *(undefined1 (*) [16])(puVar2 + -0x20) = auVar37;
  *(undefined1 ******)(puVar2 + -0x10) = pppppuVar22;
  *(undefined8 *)(puVar2 + -8) = uVar16;
  uVar3 = auVar36._8_8_ & 0xffffffffffffffe0;
  uVar19 = uVar3 - *(long *)(*plVar18 + 0x1900);
  if (uVar19 == 0) {
    return;
  }
  uVar19 = (ulong)((auVar36._8_8_ & 0x1f) < uVar19 >> 5);
  unaff_x26 = *plVar18;
  do {
    lVar14 = *(long *)(unaff_x26 + 0x1908);
    if (*(long *)(unaff_x26 + 0x1908) == 0) {
      unaff_x27 = *(long *)(unaff_x26 + 0x1900);
      lVar5 = _malloc(0x1920);
      if (lVar5 == 0) goto LAB_1017afa4c;
      *(long *)(lVar5 + 0x1900) = unaff_x27 + 0x20;
      *(undefined8 *)(lVar5 + 0x1908) = 0;
      *(undefined8 *)(lVar5 + 0x1918) = 0;
      *(undefined8 *)(lVar5 + 0x1910) = 0;
      lVar14 = *(long *)(unaff_x26 + 0x1908);
      if (lVar14 == 0) {
        *(long *)(unaff_x26 + 0x1908) = lVar5;
        lVar14 = lVar5;
      }
      else {
        *(long *)(lVar5 + 0x1900) = *(long *)(lVar14 + 0x1900) + 0x20;
        lVar26 = *(long *)(lVar14 + 0x1908);
        if (lVar26 == 0) {
          *(long *)(lVar14 + 0x1908) = lVar5;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            *(long *)(lVar5 + 0x1900) = *(long *)(lVar26 + 0x1900) + 0x20;
            plVar9 = (long *)(lVar26 + 0x1908);
            lVar26 = *plVar9;
          } while (lVar26 != 0);
          *plVar9 = lVar5;
        }
      }
    }
    if ((((uint)uVar19 & (uint)((int)*(undefined8 *)(unaff_x26 + 0x1910) == -1)) == 0) ||
       (*plVar18 != unaff_x26)) {
      uVar19 = 0;
      InstructionSynchronizationBarrier();
      uVar20 = *(ulong *)(lVar14 + 0x1900);
    }
    else {
      *plVar18 = lVar14;
      uVar19 = plVar18[1];
      plVar18[1] = uVar19 | in_xzr;
      LORelease();
      *(ulong *)(unaff_x26 + 0x1918) = uVar19;
      *(ulong *)(unaff_x26 + 0x1910) = *(ulong *)(unaff_x26 + 0x1910) | 0x100000000;
      LORelease();
      uVar19 = 1;
      InstructionSynchronizationBarrier();
      uVar20 = *(ulong *)(lVar14 + 0x1900);
    }
    unaff_x26 = lVar14;
    if (uVar20 == uVar3) {
      return;
    }
  } while( true );
LAB_1017af2c0:
  lVar5 = plVar9[1];
  plVar17 = plVar18;
  plStack_68 = param_3;
  plStack_60 = param_2;
  pbStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar5 == lVar14) {
    uVar19 = plVar9[2] & 0x1f;
    uVar3 = *(ulong *)(lVar14 + 0x810);
    uVar20 = uVar3 >> uVar19;
  }
  else {
    do {
      if (((*(ulong *)(lVar5 + 0x810) >> 0x20 & 1) == 0) ||
         ((ulong)plVar9[2] < *(ulong *)(lVar5 + 0x818))) break;
      if (*(long *)(lVar5 + 0x808) == 0) {
        auVar35 = func_0x000108a07a20(&UNK_10b25a3c8);
        plVar11 = auVar35._8_8_;
        plVar9 = auVar35._0_8_;
        uStack_a0 = 0x1910;
        uStack_78 = 0x1017af414;
        lVar14 = *plVar11;
        uVar19 = *(ulong *)(lVar14 + 0x800);
        goto joined_r0x0001017af444;
      }
      plVar9[1] = *(long *)(lVar5 + 0x808);
      *(undefined8 *)(lVar5 + 0x800) = 0;
      *(undefined8 *)(lVar5 + 0x810) = 0;
      *(undefined8 *)(lVar5 + 0x808) = 0;
      lVar14 = *plVar18;
      *(long *)(lVar5 + 0x800) = *(long *)(lVar14 + 0x800) + 0x20;
      plVar11 = (long *)(lVar14 + 0x808);
      lVar14 = *plVar11;
      if (lVar14 == 0) {
        *plVar11 = lVar5;
      }
      else {
        *(long *)(lVar5 + 0x800) = *(long *)(lVar14 + 0x800) + 0x20;
        lVar26 = *(long *)(lVar14 + 0x808);
        if (lVar26 == 0) {
          *(long *)(lVar14 + 0x808) = lVar5;
        }
        else {
          *(long *)(lVar5 + 0x800) = *(long *)(lVar26 + 0x800) + 0x20;
          if (*(long *)(lVar26 + 0x808) == 0) {
            *(long *)(lVar26 + 0x808) = lVar5;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar5 = plVar9[1];
    } while (lVar5 != *plVar9);
    lVar14 = *plVar9;
    uVar19 = plVar9[2] & 0x1f;
    uVar3 = *(ulong *)(lVar14 + 0x810);
    uVar20 = uVar3 >> uVar19;
  }
  if ((uVar20 & 1) == 0) {
    if ((uVar3 >> 0x21 & 1) == 0) {
LAB_1017af3e8:
      uVar16 = 7;
    }
    else {
      uVar16 = 6;
    }
    *(undefined8 *)puVar6 = uVar16;
  }
  else {
    puVar15 = (undefined8 *)(lVar14 + uVar19 * 0x40);
    uVar16 = puVar15[4];
    uVar24 = puVar15[7];
    uVar23 = puVar15[6];
    uVar32 = puVar15[1];
    uVar29 = *puVar15;
    uVar28 = puVar15[3];
    uVar25 = puVar15[2];
    *(undefined8 *)(puVar6 + 10) = puVar15[5];
    *(undefined8 *)(puVar6 + 8) = uVar16;
    *(undefined8 *)(puVar6 + 0xe) = uVar24;
    *(undefined8 *)(puVar6 + 0xc) = uVar23;
    *(undefined8 *)(puVar6 + 2) = uVar32;
    *(undefined8 *)puVar6 = uVar29;
    *(undefined8 *)(puVar6 + 6) = uVar28;
    *(undefined8 *)(puVar6 + 4) = uVar25;
    if ((~*puVar6 & 6) != 0) {
      plVar9[2] = plVar9[2] + 1;
    }
  }
  return;
LAB_1017af468:
  lVar5 = plVar11[1];
  plVar10 = plVar17;
  plStack_98 = plVar18;
  ppuStack_80 = &puStack_50;
  if (lVar5 == lVar14) {
    uVar19 = plVar11[2] & 0x1f;
    uVar3 = *(ulong *)(lVar14 + 0x810);
    uVar20 = uVar3 >> uVar19;
  }
  else {
    do {
      uStack_90 = auVar34._8_8_;
      uStack_88 = auVar34._0_8_;
      if (((*(ulong *)(lVar5 + 0x810) >> 0x20 & 1) == 0) ||
         ((ulong)plVar11[2] < *(ulong *)(lVar5 + 0x818))) break;
      if (*(long *)(lVar5 + 0x808) == 0) {
        auVar34 = func_0x000108a07a20(&UNK_10b25a3c8);
        plVar9 = auVar34._8_8_;
        plVar18 = auVar34._0_8_;
        uStack_d0 = 0x1910;
        uStack_a8 = 0x1017af5bc;
        lVar14 = *plVar9;
        uVar19 = *(ulong *)(lVar14 + 0x700);
        goto joined_r0x0001017af5ec;
      }
      plVar11[1] = *(long *)(lVar5 + 0x808);
      *(undefined8 *)(lVar5 + 0x800) = 0;
      *(undefined8 *)(lVar5 + 0x810) = 0;
      *(undefined8 *)(lVar5 + 0x808) = 0;
      lVar14 = *plVar17;
      *(long *)(lVar5 + 0x800) = *(long *)(lVar14 + 0x800) + 0x20;
      plVar18 = (long *)(lVar14 + 0x808);
      lVar14 = *plVar18;
      if (lVar14 == 0) {
        *plVar18 = lVar5;
      }
      else {
        *(long *)(lVar5 + 0x800) = *(long *)(lVar14 + 0x800) + 0x20;
        lVar26 = *(long *)(lVar14 + 0x808);
        if (lVar26 == 0) {
          *(long *)(lVar14 + 0x808) = lVar5;
        }
        else {
          *(long *)(lVar5 + 0x800) = *(long *)(lVar26 + 0x800) + 0x20;
          if (*(long *)(lVar26 + 0x808) == 0) {
            *(long *)(lVar26 + 0x808) = lVar5;
          }
          else {
            _free();
            auVar34._8_8_ = uStack_90;
            auVar34._0_8_ = uStack_88;
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar5 = plVar11[1];
    } while (lVar5 != *plVar11);
    lVar14 = *plVar11;
    uVar19 = plVar11[2] & 0x1f;
    uVar3 = *(ulong *)(lVar14 + 0x810);
    uVar20 = uVar3 >> uVar19;
  }
  if ((uVar20 & 1) == 0) {
    if ((uVar3 >> 0x21 & 1) == 0) {
LAB_1017af590:
      lVar14 = 8;
    }
    else {
      lVar14 = 7;
    }
    *plVar9 = lVar14;
  }
  else {
    plVar18 = (long *)(lVar14 + uVar19 * 0x40);
    lVar14 = plVar18[4];
    lVar26 = plVar18[7];
    lVar5 = plVar18[6];
    lVar33 = plVar18[1];
    lVar31 = *plVar18;
    lVar30 = plVar18[3];
    lVar27 = plVar18[2];
    plVar9[5] = plVar18[5];
    plVar9[4] = lVar14;
    plVar9[7] = lVar26;
    plVar9[6] = lVar5;
    plVar9[1] = lVar33;
    *plVar9 = lVar31;
    plVar9[3] = lVar30;
    plVar9[2] = lVar27;
    if (1 < *plVar9 - 7U) {
      plVar11[2] = plVar11[2] + 1;
    }
  }
  return;
LAB_1017af610:
  lVar5 = plVar9[1];
  plVar11 = plVar10;
  plStack_c8 = plVar17;
  pppuStack_b0 = &ppuStack_80;
  if (lVar5 == lVar14) {
    uVar19 = plVar9[2] & 0x1f;
    uVar3 = *(ulong *)(lVar14 + 0x710);
    uVar20 = uVar3 >> uVar19;
  }
  else {
    do {
      uStack_c0 = auVar35._8_8_;
      uStack_b8 = auVar35._0_8_;
      if (((*(ulong *)(lVar5 + 0x710) >> 0x20 & 1) == 0) ||
         ((ulong)plVar9[2] < *(ulong *)(lVar5 + 0x718))) break;
      if (*(long *)(lVar5 + 0x708) == 0) {
        auVar34 = func_0x000108a07a20(&UNK_10b25a3c8);
        plVar18 = auVar34._0_8_;
        uStack_d8 = 0x1017af770;
        pppppuVar22 = &ppppuStack_e0;
        uVar3 = auVar34._8_8_ & 0xffffffffffffffe0;
        auVar37._8_8_ = plVar18;
        auVar37._0_8_ = uVar3;
        uVar19 = uVar3 - *(long *)((undefined1 *)*plVar18 + 0x700);
        if (uVar19 == 0) {
          return;
        }
        uVar19 = (ulong)((auVar34._8_8_ & 0x1f) < uVar19 >> 5);
        pmVar21 = &__mh_execute_header;
        puVar7 = (undefined1 *)*plVar18;
        ppppuStack_e0 = &pppuStack_b0;
        goto LAB_1017af7e0;
      }
      plVar9[1] = *(long *)(lVar5 + 0x708);
      *(undefined8 *)(lVar5 + 0x700) = 0;
      *(undefined8 *)(lVar5 + 0x710) = 0;
      *(undefined8 *)(lVar5 + 0x708) = 0;
      lVar14 = *plVar10;
      *(long *)(lVar5 + 0x700) = *(long *)(lVar14 + 0x700) + 0x20;
      plVar17 = (long *)(lVar14 + 0x708);
      lVar14 = *plVar17;
      if (lVar14 == 0) {
        *plVar17 = lVar5;
      }
      else {
        *(long *)(lVar5 + 0x700) = *(long *)(lVar14 + 0x700) + 0x20;
        lVar26 = *(long *)(lVar14 + 0x708);
        if (lVar26 == 0) {
          *(long *)(lVar14 + 0x708) = lVar5;
        }
        else {
          *(long *)(lVar5 + 0x700) = *(long *)(lVar26 + 0x700) + 0x20;
          if (*(long *)(lVar26 + 0x708) == 0) {
            *(long *)(lVar26 + 0x708) = lVar5;
          }
          else {
            _free();
            auVar35._8_8_ = uStack_c0;
            auVar35._0_8_ = uStack_b8;
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar5 = plVar9[1];
    } while (lVar5 != *plVar9);
    lVar14 = *plVar9;
    uVar19 = plVar9[2] & 0x1f;
    uVar3 = *(ulong *)(lVar14 + 0x710);
    uVar20 = uVar3 >> uVar19;
  }
  if ((uVar20 & 1) == 0) {
    if ((uVar3 >> 0x21 & 1) == 0) {
LAB_1017af744:
      lVar14 = 8;
    }
    else {
      lVar14 = 7;
    }
    *plVar18 = lVar14;
  }
  else {
    plVar17 = (long *)(lVar14 + uVar19 * 0x38);
    lVar27 = plVar17[3];
    lVar26 = plVar17[2];
    lVar5 = plVar17[5];
    lVar14 = plVar17[4];
    lVar31 = plVar17[1];
    lVar30 = *plVar17;
    plVar18[6] = plVar17[6];
    plVar18[3] = lVar27;
    plVar18[2] = lVar26;
    plVar18[5] = lVar5;
    plVar18[4] = lVar14;
    plVar18[1] = lVar31;
    *plVar18 = lVar30;
    if (1 < *plVar18 - 7U) {
      plVar9[2] = plVar9[2] + 1;
    }
  }
  return;
LAB_1017afa4c:
  auVar37 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1920);
  puVar15 = auVar37._8_8_;
  puVar8 = auVar37._0_8_;
  *(long *)(puVar2 + -0xb0) = unaff_x26;
  *(ulong *)(puVar2 + -0xa8) = uVar19;
  *(undefined8 *)(puVar2 + -0xa0) = 0x1900;
  *(undefined8 *)(puVar2 + -0x98) = 0x100000000;
  *(undefined8 *)(puVar2 + -0x90) = 0x1910;
  *(undefined8 *)(puVar2 + -0x88) = 0x1908;
  *(ulong *)(puVar2 + -0x80) = uVar3;
  *(long **)(puVar2 + -0x78) = plVar18;
  *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
  *(undefined8 *)(puVar2 + -0x68) = 0x1017afa58;
  pppppuVar22 = (undefined1 *****)(puVar2 + -0x70);
  puVar7 = puVar2 + -0x180;
  bVar12 = *(byte *)((long)puVar15 + 0x219);
  if (bVar12 < 2) {
    if (bVar12 == 0) {
      plVar18 = (long *)puVar15[0x29];
      *(undefined1 *)(puVar15 + 0x43) = 1;
      puVar15[0x25] = puVar15[0x3f];
      puVar15[0x24] = puVar15[0x3e];
      puVar15[0x27] = puVar15[0x41];
      puVar15[0x26] = puVar15[0x40];
      puVar15[0x28] = puVar15[0x42];
      puVar15[0x1d] = puVar15[0x37];
      puVar15[0x1c] = puVar15[0x36];
      puVar15[0x1f] = puVar15[0x39];
      puVar15[0x1e] = puVar15[0x38];
      puVar15[0x21] = puVar15[0x3b];
      puVar15[0x20] = puVar15[0x3a];
      puVar15[0x23] = puVar15[0x3d];
      puVar15[0x22] = puVar15[0x3c];
      puVar15[0x15] = puVar15[0x2f];
      puVar15[0x14] = puVar15[0x2e];
      puVar15[0x17] = puVar15[0x31];
      puVar15[0x16] = puVar15[0x30];
      puVar15[0x19] = puVar15[0x33];
      puVar15[0x18] = puVar15[0x32];
      puVar15[0x1b] = puVar15[0x35];
      puVar15[0x1a] = puVar15[0x34];
      puVar15[0x11] = puVar15[0x2b];
      puVar15[0x10] = puVar15[0x2a];
      puVar15[0x13] = puVar15[0x2d];
      puVar15[0x12] = puVar15[0x2c];
      *puVar15 = plVar18;
      *(undefined1 *)(puVar15 + 0xf) = 0;
LAB_1017afb04:
      puVar15[2] = plVar18;
      puVar15[1] = plVar18;
      uVar19 = 1;
      puVar15[3] = 1;
      *(undefined1 *)(puVar15 + 6) = 0;
      puVar15[4] = plVar18;
      puVar15[5] = 1;
      lVar14 = *plVar18;
      if (*(long *)(lVar14 + 0x1e8) == 0) {
LAB_1017afb34:
        *(undefined1 *)(puVar15 + 6) = 1;
      }
      else {
LAB_1017afb78:
        *(undefined8 *)(puVar2 + -0x248) = 0;
        *(undefined8 *)(puVar2 + -0x240) = 0;
        puVar15[7] = lVar14 + 0x1c0;
        puVar15[8] = 0;
        uVar16 = *(undefined8 *)(puVar2 + -0x250);
        puVar15[10] = *(undefined8 *)(puVar2 + -0x248);
        puVar15[9] = uVar16;
        puVar15[0xb] = 0;
        puVar15[0xc] = uVar19;
        puVar15[0xd] = uVar19;
        *(undefined1 *)(puVar15 + 0xe) = 0;
LAB_1017afb98:
        uVar4 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                          (puVar15 + 7,plVar11);
        unaff_x25 = (ulong)(uVar4 & 0xff);
        if ((uVar4 & 0xff) == 2) {
          *(undefined1 *)(puVar15 + 6) = 4;
          uVar13 = 3;
          *(undefined1 *)(puVar15 + 0xf) = 3;
          *puVar8 = 0x10;
          goto LAB_1017afcac;
        }
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (puVar15 + 7);
        if (puVar15[8] != 0) {
          (**(code **)(puVar15[8] + 0x18))(puVar15[9]);
        }
        *(undefined1 *)(puVar15 + 6) = 1;
        if ((uVar4 & 1) == 0) {
          pmVar21 = (mach_header *)puVar15[1];
          *(undefined1 *)(puVar15 + 0xf) = 1;
          *(undefined1 *)(puVar15 + 0x43) = 0;
          uVar16 = puVar15[0x24];
          uVar24 = puVar15[0x27];
          uVar23 = puVar15[0x26];
          *(undefined8 *)(puVar2 + -0x1a8) = puVar15[0x25];
          *(undefined8 *)(puVar2 + -0x1b0) = uVar16;
          *(undefined8 *)(puVar2 + -0x198) = uVar24;
          *(undefined8 *)(puVar2 + -0x1a0) = uVar23;
          *(undefined8 *)(puVar2 + -400) = puVar15[0x28];
          uVar16 = puVar15[0x1c];
          uVar24 = puVar15[0x1f];
          uVar23 = puVar15[0x1e];
          *(undefined8 *)(puVar2 + -0x1e8) = puVar15[0x1d];
          *(undefined8 *)(puVar2 + -0x1f0) = uVar16;
          *(undefined8 *)(puVar2 + -0x1d8) = uVar24;
          *(undefined8 *)(puVar2 + -0x1e0) = uVar23;
          uVar24 = puVar15[0x20];
          uVar23 = puVar15[0x23];
          uVar16 = puVar15[0x22];
          *(undefined8 *)(puVar2 + -0x1c8) = puVar15[0x21];
          *(undefined8 *)(puVar2 + -0x1d0) = uVar24;
          *(undefined8 *)(puVar2 + -0x1b8) = uVar23;
          *(undefined8 *)(puVar2 + -0x1c0) = uVar16;
          uVar16 = puVar15[0x14];
          uVar24 = puVar15[0x17];
          uVar23 = puVar15[0x16];
          *(undefined8 *)(puVar2 + -0x228) = puVar15[0x15];
          *(undefined8 *)(puVar2 + -0x230) = uVar16;
          *(undefined8 *)(puVar2 + -0x218) = uVar24;
          *(undefined8 *)(puVar2 + -0x220) = uVar23;
          uVar24 = puVar15[0x18];
          uVar23 = puVar15[0x1b];
          uVar16 = puVar15[0x1a];
          *(undefined8 *)(puVar2 + -0x208) = puVar15[0x19];
          *(undefined8 *)(puVar2 + -0x210) = uVar24;
          *(undefined8 *)(puVar2 + -0x1f8) = uVar23;
          *(undefined8 *)(puVar2 + -0x200) = uVar16;
          uVar24 = puVar15[0x10];
          uVar23 = puVar15[0x13];
          uVar16 = puVar15[0x12];
          *(undefined8 *)(puVar2 + -0x248) = puVar15[0x11];
          *(undefined8 *)(puVar2 + -0x250) = uVar24;
          *(undefined8 *)(puVar2 + -0x238) = uVar23;
          *(undefined8 *)(puVar2 + -0x240) = uVar16;
          lVar14 = *(long *)pmVar21;
          LOAcquire();
          uVar19 = *(ulong *)(lVar14 + 0x88);
          *(ulong *)(lVar14 + 0x88) = uVar19 + 1;
          auVar36._8_8_ = uVar19;
          auVar36._0_8_ = lVar14 + 0x80;
          uVar16 = 0x1017afd28;
          puVar2 = puVar2 + -0x250;
          goto SUB_1017af8d4;
        }
      }
      *(undefined1 *)(puVar15 + 0xf) = 1;
      *(undefined1 *)(puVar15 + 0x43) = 0;
      uVar13 = *(undefined1 *)(puVar15 + 0x10);
      *(undefined8 *)(puVar2 + -0xc1) = puVar15[0x28];
      uVar23 = *(undefined8 *)((long)puVar15 + 0xd9);
      uVar16 = *(undefined8 *)((long)puVar15 + 0xd1);
      uVar24 = *(undefined8 *)((long)puVar15 + 0xe1);
      uVar28 = *(undefined8 *)((long)puVar15 + 0xf9);
      uVar25 = *(undefined8 *)((long)puVar15 + 0xf1);
      *(undefined8 *)(puVar2 + -0x118) = *(undefined8 *)((long)puVar15 + 0xe9);
      *(undefined8 *)(puVar2 + -0x120) = uVar24;
      *(undefined8 *)(puVar2 + -0x108) = uVar28;
      *(undefined8 *)(puVar2 + -0x110) = uVar25;
      uVar25 = *(undefined8 *)((long)puVar15 + 0x99);
      uVar24 = *(undefined8 *)((long)puVar15 + 0x91);
      uVar28 = *(undefined8 *)((long)puVar15 + 0xa1);
      uVar32 = *(undefined8 *)((long)puVar15 + 0xb9);
      uVar29 = *(undefined8 *)((long)puVar15 + 0xb1);
      *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)((long)puVar15 + 0xa9);
      *(undefined8 *)(puVar2 + -0x160) = uVar28;
      *(undefined8 *)(puVar2 + -0x148) = uVar32;
      *(undefined8 *)(puVar2 + -0x150) = uVar29;
      uVar28 = *(undefined8 *)((long)puVar15 + 0xc1);
      *(undefined8 *)(puVar2 + -0x138) = *(undefined8 *)((long)puVar15 + 0xc9);
      *(undefined8 *)(puVar2 + -0x140) = uVar28;
      *(undefined8 *)(puVar2 + -0x128) = uVar23;
      *(undefined8 *)(puVar2 + -0x130) = uVar16;
      uVar16 = *(undefined8 *)((long)puVar15 + 0x81);
      *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)((long)puVar15 + 0x89);
      *(undefined8 *)(puVar2 + -0x180) = uVar16;
      *(undefined8 *)(puVar2 + -0x168) = uVar25;
      *(undefined8 *)(puVar2 + -0x170) = uVar24;
      uVar16 = *(undefined8 *)((long)puVar15 + 0x121);
      uVar24 = *(undefined8 *)((long)puVar15 + 0x139);
      uVar23 = *(undefined8 *)((long)puVar15 + 0x131);
      *(undefined8 *)(puVar2 + -0xd8) = *(undefined8 *)((long)puVar15 + 0x129);
      *(undefined8 *)(puVar2 + -0xe0) = uVar16;
      *(undefined8 *)(puVar2 + -200) = uVar24;
      *(undefined8 *)(puVar2 + -0xd0) = uVar23;
      uVar24 = *(undefined8 *)((long)puVar15 + 0x101);
      uVar23 = *(undefined8 *)((long)puVar15 + 0x119);
      uVar16 = *(undefined8 *)((long)puVar15 + 0x111);
      *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)((long)puVar15 + 0x109);
      *(undefined8 *)(puVar2 + -0x100) = uVar24;
      *(undefined8 *)(puVar2 + -0xe8) = uVar23;
      *(undefined8 *)(puVar2 + -0xf0) = uVar16;
      uVar24 = *(undefined8 *)(puVar2 + -0xf8);
      uVar23 = *(undefined8 *)(puVar2 + -0x100);
      uVar16 = *(undefined8 *)(puVar2 + -0xf0);
      *(undefined8 *)(puVar8 + 0x99) = *(undefined8 *)(puVar2 + -0xe8);
      *(undefined8 *)(puVar8 + 0x91) = uVar16;
      uVar16 = *(undefined8 *)(puVar2 + -0xe0);
      uVar28 = *(undefined8 *)(puVar2 + -200);
      uVar25 = *(undefined8 *)(puVar2 + -0xd0);
      *(undefined8 *)(puVar8 + 0xa9) = *(undefined8 *)(puVar2 + -0xd8);
      *(undefined8 *)(puVar8 + 0xa1) = uVar16;
      *(undefined8 *)(puVar8 + 0xb9) = uVar28;
      *(undefined8 *)(puVar8 + 0xb1) = uVar25;
      uVar28 = *(undefined8 *)(puVar2 + -0x138);
      uVar25 = *(undefined8 *)(puVar2 + -0x140);
      uVar16 = *(undefined8 *)(puVar2 + -0x130);
      *(undefined8 *)(puVar8 + 0x59) = *(undefined8 *)(puVar2 + -0x128);
      *(undefined8 *)(puVar8 + 0x51) = uVar16;
      uVar16 = *(undefined8 *)(puVar2 + -0x120);
      uVar32 = *(undefined8 *)(puVar2 + -0x108);
      uVar29 = *(undefined8 *)(puVar2 + -0x110);
      *(undefined8 *)(puVar8 + 0x69) = *(undefined8 *)(puVar2 + -0x118);
      *(undefined8 *)(puVar8 + 0x61) = uVar16;
      *(undefined8 *)(puVar8 + 0x79) = uVar32;
      *(undefined8 *)(puVar8 + 0x71) = uVar29;
      *(undefined8 *)(puVar8 + 0x89) = uVar24;
      *(undefined8 *)(puVar8 + 0x81) = uVar23;
      uVar24 = *(undefined8 *)(puVar2 + -0x178);
      uVar23 = *(undefined8 *)(puVar2 + -0x180);
      uVar16 = *(undefined8 *)(puVar2 + -0x170);
      *(undefined8 *)(puVar8 + 0x19) = *(undefined8 *)(puVar2 + -0x168);
      *(undefined8 *)(puVar8 + 0x11) = uVar16;
      uVar16 = *(undefined8 *)(puVar2 + -0x160);
      uVar32 = *(undefined8 *)(puVar2 + -0x148);
      uVar29 = *(undefined8 *)(puVar2 + -0x150);
      *(undefined8 *)(puVar8 + 0x29) = *(undefined8 *)(puVar2 + -0x158);
      *(undefined8 *)(puVar8 + 0x21) = uVar16;
      *(undefined8 *)(puVar8 + 0x39) = uVar32;
      *(undefined8 *)(puVar8 + 0x31) = uVar29;
      *(undefined8 *)(puVar8 + 0x49) = uVar28;
      *(undefined8 *)(puVar8 + 0x41) = uVar25;
      *(undefined1 *)(puVar15 + 0x43) = 0;
      *puVar8 = uVar13;
      *(undefined8 *)(puVar8 + 0xc0) = *(undefined8 *)(puVar2 + -0xc1);
      uVar13 = 1;
      *(undefined8 *)(puVar8 + 9) = uVar24;
      *(undefined8 *)(puVar8 + 1) = uVar23;
LAB_1017afcac:
      *(undefined1 *)((long)puVar15 + 0x219) = uVar13;
      return;
    }
    func_0x000108a07af4(&UNK_10b25a3f8);
LAB_1017afde4:
    func_0x000108a07b10(&UNK_10b25a3f8);
  }
  else {
    if (bVar12 != 3) goto LAB_1017afde4;
    bVar12 = *(byte *)(puVar15 + 0xf);
    if (1 < bVar12) {
      if (bVar12 != 3) {
        func_0x000108a07b10(&UNK_10b25a410);
        goto LAB_1017afe34;
      }
      bVar12 = *(byte *)(puVar15 + 6);
      if (bVar12 < 3) {
        if (bVar12 != 0) {
          if (bVar12 == 1) {
            func_0x000108a07af4(&UNK_10b25a3e0);
          }
          else {
            func_0x000108a07b10(&UNK_10b25a3e0);
          }
          goto LAB_1017afe34;
        }
        uVar19 = puVar15[3];
        puVar15[4] = (long *)puVar15[2];
        puVar15[5] = uVar19;
        lVar14 = *(long *)puVar15[2];
        if (uVar19 <= *(ulong *)(lVar14 + 0x1e8)) goto LAB_1017afb78;
      }
      else {
        if (bVar12 != 3) goto LAB_1017afb98;
        uVar19 = puVar15[5];
        lVar14 = *(long *)puVar15[4];
        if (uVar19 <= *(ulong *)(lVar14 + 0x1e8)) goto LAB_1017afb78;
      }
      goto LAB_1017afb34;
    }
    if (bVar12 == 0) {
      plVar18 = (long *)*puVar15;
      goto LAB_1017afb04;
    }
  }
  func_0x000108a07af4(&UNK_10b25a410);
LAB_1017afe34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017afe38);
  (*pcVar1)();
}

