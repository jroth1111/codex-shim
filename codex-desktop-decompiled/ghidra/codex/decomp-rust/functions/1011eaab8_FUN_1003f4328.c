
long * FUN_1003f4328(long *param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  unkbyte9 Var4;
  bool bVar5;
  ulong uVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 *extraout_x8;
  code *pcVar14;
  undefined *puVar15;
  undefined1 *extraout_x9;
  long lVar16;
  long extraout_x9_00;
  ulong uVar17;
  undefined *puVar18;
  undefined *extraout_x9_01;
  char extraout_w10;
  char cVar19;
  undefined1 *puVar20;
  long extraout_x10;
  undefined *extraout_x10_00;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar24;
  undefined8 unaff_x21;
  undefined8 uVar25;
  undefined8 unaff_x22;
  undefined8 *puVar26;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar27;
  undefined1 auVar28 [16];
  int iStack_c0;
  ushort uStack_bc;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_92;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  undefined1 **ppuStack_20;
  undefined *puStack_18;
  undefined **ppuVar6;
  
  lVar13 = *param_1;
  if (lVar13 < 2) {
    if (lVar13 == 0) {
      puStack_38 = (undefined1 *)param_1[3];
      puStack_40 = param_2;
      if (param_2 <= puStack_38) {
        param_1[2] = (long)(param_2 + param_1[2]);
        param_1[3] = (long)puStack_38 - (long)param_2;
        return param_1;
      }
    }
    else if ((undefined1 *)param_1[5] < param_2) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23,&UNK_10b24a6b8);
      puStack_38 = extraout_x9;
    }
    else {
      puStack_38 = (undefined1 *)param_1[3];
      puStack_40 = param_2;
      if (param_2 <= puStack_38) {
        param_1[2] = (long)(param_2 + param_1[2]);
        param_1[3] = (long)puStack_38 - (long)param_2;
        param_1[5] = param_1[5] - (long)param_2;
        return param_1;
      }
    }
LAB_1003f4418:
    puStack_28 = &DAT_100c929e0;
    ppuStack_20 = &puStack_38;
    puStack_18 = &DAT_100c929e0;
    puVar15 = &UNK_10b243fb8;
    puStack_30 = (undefined1 *)&puStack_40;
    auVar28 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__cannot_advance_past__remaining__108aba12e,&puStack_30);
    ppuVar6 = auVar28._0_8_;
    iVar2 = 0;
    if ((auVar28._8_8_ & 0xffff) != 0) {
      iVar2 = (auVar28._8_4_ & 0xffff) - 1;
    }
    iStack_c0 = iVar2 << 0x10;
    uStack_bc = (ushort)((uint)iVar2 >> 0x10) | (ushort)puVar15;
    plStack_b0 = (long *)0x0;
    ppuStack_b8 = ppuVar6;
    if (((ulong)puVar15 & 0xffff) != 0) {
      uStack_92 = 1;
      puStack_a8 = (undefined *)CONCAT62(puStack_a8._2_6_,(short)iVar2 + 1);
      ppuStack_90 = (undefined **)&uStack_92;
      puStack_88 = &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      ppuStack_80 = &puStack_a8;
      puStack_78 = &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      uVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&ppuStack_b8,&UNK_10b249e88,s_____r_108ad8df9,&ppuStack_90);
      if ((uVar7 & 1) == 0) {
        ppuStack_90 = (undefined **)((ulong)&iStack_c0 | 4);
        puStack_88 = &
                     __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        uVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                          (&ppuStack_b8,&UNK_10b249e88,s___S_108ad8e03,&ppuStack_90);
        if ((uVar7 & 1) == 0) {
          ppuVar9 = (undefined **)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(ppuStack_b8);
          ppuStack_90 = ppuVar9;
          plVar10 = (long *)__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                                      (&ppuStack_90,&UNK_108cd6657,3);
          iVar2 = *(int *)(ppuVar9 + 2);
          *(int *)(ppuVar9 + 2) = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            ppuVar9[1] = (undefined *)0x0;
            _pthread_mutex_unlock(*ppuVar9);
          }
          plVar8 = plStack_b0;
          if (plVar10 != (long *)0x0) {
            if (((ulong)plStack_b0 & 3) != 1) {
              return plVar10;
            }
            puVar24 = (undefined8 *)((long)plStack_b0 - 1);
            uVar25 = *puVar24;
            puVar26 = *(undefined8 **)((long)plStack_b0 + 7);
            pcVar14 = (code *)*puVar26;
            if (pcVar14 != (code *)0x0) {
              (*pcVar14)(uVar25);
            }
            if (puVar26[1] != 0) {
              _free(uVar25);
            }
            _free(puVar24);
            return plVar10;
          }
          goto LAB_1003f4544;
        }
      }
      if (plStack_b0 != (long *)0x0) {
        return plStack_b0;
      }
      puStack_a8 = &UNK_108cd9490;
      uStack_a0 = 0x2d;
      ppuStack_90 = &puStack_a8;
      puStack_88 = &DAT_100c7b3a0;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_<__>__write_ansi_incorrectly_err_108adbda9,&ppuStack_90,&UNK_10b2525b0);
    }
    plVar8 = (long *)0x0;
LAB_1003f4544:
    if (((ulong)plVar8 & 3) == 1) {
      uVar25 = *(undefined8 *)((long)plVar8 - 1U);
      puVar26 = *(undefined8 **)((long)plVar8 + 7);
      pcVar14 = (code *)*puVar26;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(uVar25);
      }
      if (puVar26[1] != 0) {
        _free(uVar25);
      }
      _free((undefined8 *)((long)plVar8 - 1U));
    }
    ppuStack_90 = ppuVar6;
    plVar8 = (long *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                               (&ppuStack_90);
    return plVar8;
  }
  if (lVar13 == 2) {
    param_1 = param_1 + 1;
  }
  else {
    if (lVar13 == 3) {
      puStack_28 = (undefined1 *)param_1[2];
      if (param_2 <= puStack_28) {
        param_1[1] = (long)(param_2 + param_1[1]);
        param_1[2] = (long)puStack_28 - (long)param_2;
        return param_1;
      }
      puStack_30 = param_2;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_30);
      puStack_38 = extraout_x8;
      goto LAB_1003f4418;
    }
    plVar8 = param_1 + 1;
    puStack_30 = (undefined1 *)&puStack_40;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar21 = (undefined1 *)param_1[2];
    puStack_38 = (undefined1 *)param_1[5];
    puVar20 = puVar21 + (long)puStack_38;
    if (CARRY8((ulong)puVar21,(ulong)puStack_38)) {
      puVar20 = (undefined1 *)0xffffffffffffffff;
    }
    puVar23 = param_2;
    if (puVar20 == (undefined1 *)0x0) {
LAB_1011eaa10:
      puStack_28 = (undefined1 *)param_1[8];
      lVar13 = (long)puStack_28 - (long)puVar23;
      if (puVar23 <= puStack_28) {
LAB_1011eaa1c:
        param_1[7] = (long)(puVar23 + param_1[7]);
        param_1[8] = lVar13;
        return plVar8;
      }
LAB_1011eaa7c:
      puStack_30 = puVar23;
      auVar28 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_30);
      param_2 = auVar28._8_8_;
      plVar8 = auVar28._0_8_;
      lVar16 = extraout_x9_00;
      lVar13 = extraout_x10;
LAB_1011eaa88:
      *plVar8 = (long)(param_2 + lVar16);
      plVar8[1] = lVar13;
      return plVar8;
    }
    puVar23 = param_2 + -(long)puVar20;
    if (param_2 < puVar20 || puVar23 == (undefined1 *)0x0) {
      if (puVar21 != (undefined1 *)0x0) {
        lVar16 = *plVar8;
        lVar13 = (long)puVar21 - (long)param_2;
        if (param_2 <= puVar21) goto LAB_1011eaa88;
        *plVar8 = (long)(puVar21 + lVar16);
        param_1[2] = 0;
        param_2 = param_2 + -(long)puVar21;
      }
      puStack_40 = param_2;
      if (param_2 <= puStack_38) {
        param_1[4] = (long)(param_2 + param_1[4]);
        param_1[5] = (long)puStack_38 - (long)param_2;
        return plVar8;
      }
    }
    else {
      if (puVar21 != (undefined1 *)0x0) {
        if (puVar21 < puVar20) {
          *plVar8 = (long)(puVar21 + *plVar8);
          param_1[2] = 0;
          puVar20 = puVar20 + -(long)puVar21;
          goto LAB_1011ea9f4;
        }
        *plVar8 = (long)(puVar20 + *plVar8);
        param_1[2] = (long)puVar21 - (long)puVar20;
        puStack_28 = (undefined1 *)param_1[8];
        lVar13 = (long)puStack_28 - (long)puVar23;
        if (puVar23 <= puStack_28) goto LAB_1011eaa1c;
        goto LAB_1011eaa7c;
      }
LAB_1011ea9f4:
      puStack_40 = puVar20;
      if (puVar20 <= puStack_38) {
        param_1[4] = (long)(puVar20 + param_1[4]);
        param_1[5] = (long)puStack_38 - (long)puVar20;
        goto LAB_1011eaa10;
      }
    }
    puStack_28 = &DAT_100c929e0;
    ppuStack_20 = &puStack_38;
    puStack_18 = &DAT_100c929e0;
    unaff_x30 = FUN_1011eaad0;
    auVar28 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__cannot_advance_past__remaining__108aba12e,&puStack_30,&UNK_10b243fb8);
    param_2 = auVar28._8_8_;
    param_1 = auVar28._0_8_;
    register0x00000008 = (BADSPACEBASE *)&puStack_40;
  }
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  Var4 = auVar28._0_9_;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  cVar19 = *(char *)((long)param_1 + 0x32);
  cVar3 = *(char *)((long)param_1 + 0x33);
  puVar23 = (undefined1 *)(ulong)(byte)(cVar3 - cVar19);
  puVar21 = (undefined1 *)param_1[2];
  puVar20 = puVar23 + (long)puVar21;
  if (CARRY8((ulong)puVar23,(ulong)puVar21)) {
    puVar20 = (undefined1 *)0xffffffffffffffff;
  }
  puVar11 = param_2;
  if (puVar20 == (undefined1 *)0x0) {
LAB_1011eab38:
    puVar20 = (undefined1 *)param_1[8];
    lVar13 = (long)puVar20 - (long)puVar11;
    if (puVar11 <= puVar20) {
LAB_1011eab44:
      param_1[7] = (long)(puVar11 + param_1[7]);
      param_1[8] = lVar13;
      return param_1;
    }
LAB_1011eaba0:
    *(undefined1 **)((long)register0x00000008 + -0x30) = puVar11;
    *(undefined1 **)((long)register0x00000008 + -0x28) = puVar20;
    auVar28 = __ZN5bytes13panic_advance17h894eeb3b0f978370E
                        ((undefined1 *)((long)register0x00000008 + -0x30));
    Var4 = auVar28._0_9_;
    cVar19 = extraout_w10;
LAB_1011eabac:
    *(char *)((long)(long *)Var4 + 0x32) = cVar19 + (char)((unkuint9)Var4 >> 0x40);
    return (long *)Var4;
  }
  puVar11 = param_2 + -(long)puVar20;
  if (param_2 < puVar20 || puVar11 == (undefined1 *)0x0) {
    if (cVar3 != cVar19) {
      bVar5 = param_2 < puVar23;
      param_2 = param_2 + -(long)puVar23;
      if (bVar5 || param_2 == (undefined1 *)0x0) goto LAB_1011eabac;
      *(char *)((long)param_1 + 0x32) = cVar3;
    }
    *(undefined1 **)((long)register0x00000008 + -0x40) = param_2;
    if (param_2 <= puVar21) {
      param_1[1] = (long)(param_2 + param_1[1]);
      param_1[2] = (long)puVar21 - (long)param_2;
      return param_1;
    }
  }
  else {
    puVar22 = puVar20;
    if (cVar3 != cVar19) {
      puVar22 = puVar20 + -(long)puVar23;
      if (puVar23 <= puVar20 && puVar22 != (undefined1 *)0x0) {
        *(char *)((long)param_1 + 0x32) = cVar3;
        goto LAB_1011eab1c;
      }
      *(char *)((long)param_1 + 0x32) = cVar19 + (char)puVar20;
      puVar20 = (undefined1 *)param_1[8];
      lVar13 = (long)puVar20 - (long)puVar11;
      if (puVar11 <= puVar20) goto LAB_1011eab44;
      goto LAB_1011eaba0;
    }
LAB_1011eab1c:
    *(undefined1 **)((long)register0x00000008 + -0x40) = puVar22;
    if (puVar22 <= puVar21) {
      param_1[1] = (long)(puVar22 + param_1[1]);
      param_1[2] = (long)puVar21 - (long)puVar22;
      goto LAB_1011eab38;
    }
  }
  *(undefined1 **)((long)register0x00000008 + -0x38) = puVar21;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x28) = &DAT_100c929e0;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x38);
  *(undefined **)((long)register0x00000008 + -0x18) = &DAT_100c929e0;
  puVar15 = &UNK_10b243fb8;
  auVar28 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,
                       (undefined1 *)((long)register0x00000008 + -0x30));
  plVar10 = auVar28._8_8_;
  plVar8 = auVar28._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = FUN_1011eabf4;
  uVar17 = plVar8[1];
  uVar7 = plVar8[4];
  puVar18 = (undefined *)0x0;
  if (uVar7 <= uVar17) {
    puVar18 = (undefined *)(uVar17 - uVar7);
  }
  puVar12 = puVar15;
  if (uVar7 <= uVar17 && (undefined *)(uVar17 - uVar7) != (undefined *)0x0) {
    puVar12 = puVar15 + -(long)puVar18;
    if (puVar15 < puVar18 || puVar12 == (undefined *)0x0) {
      plVar8[4] = (long)(puVar15 + uVar7);
      return plVar8;
    }
    plVar8[4] = (long)(puVar18 + uVar7);
  }
  puVar15 = (undefined *)plVar10[5];
  if (puVar15 < puVar12) {
    puVar12 = &UNK_10b24a6b8;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23);
    puVar18 = extraout_x10_00;
LAB_1011eacb4:
    *(undefined **)((long)register0x00000008 + -0x70) = puVar12;
    *(undefined **)((long)register0x00000008 + -0x68) = puVar18;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E((undefined1 *)((long)register0x00000008 + -0x70));
    puVar18 = extraout_x9_01;
  }
  else {
    if (*plVar10 != 0) {
      if (*plVar10 != 1) {
LAB_1011eac8c:
        plVar10[5] = (long)puVar15 - (long)puVar12;
        return plVar8;
      }
      uVar7 = plVar10[3];
      puVar18 = (undefined *)0x0;
      if (uVar7 <= (ulong)plVar10[2]) {
        puVar18 = (undefined *)(plVar10[2] - uVar7);
      }
      if (puVar12 <= puVar18) {
        plVar10[3] = (long)(puVar12 + uVar7);
        goto LAB_1011eac8c;
      }
      goto LAB_1011eacb4;
    }
    *(undefined **)((long)register0x00000008 + -0x80) = puVar12;
    puVar18 = (undefined *)plVar10[3];
    if (puVar12 <= puVar18) {
      plVar10[2] = (long)(puVar12 + plVar10[2]);
      plVar10[3] = (long)puVar18 - (long)puVar12;
      goto LAB_1011eac8c;
    }
  }
  *(undefined **)((long)register0x00000008 + -0x78) = puVar18;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x68) = &DAT_100c929e0;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x78);
  *(undefined **)((long)register0x00000008 + -0x58) = &DAT_100c929e0;
  auVar28 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,
                       (undefined1 *)((long)register0x00000008 + -0x70),&UNK_10b243fb8);
  plVar8 = auVar28._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x1011eacf4;
  FUN_10072be88((undefined1 *)((long)register0x00000008 + -0x148),auVar28._8_8_,&UNK_108c61038,4);
  *(undefined **)((long)register0x00000008 + -0x120) = &UNK_108c61038;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 4;
  if (*(long *)((long)register0x00000008 + -0x148) == 2) {
    lVar13 = *(long *)((long)register0x00000008 + -0x140);
    if (lVar13 == -0x8000000000000000) {
      plVar10 = (long *)FUN_10072aa8c(9,&UNK_108cd482a,0x36);
      *plVar8 = -0x8000000000000000;
      plVar8[1] = (long)plVar10;
    }
    else {
      lVar16 = *(long *)((long)register0x00000008 + -0x138);
      lVar1 = *(long *)((long)register0x00000008 + -0x130);
      plVar10 = (long *)FUN_10072b7a0((undefined1 *)((long)register0x00000008 + -0x148),
                                      auVar28._8_8_,&UNK_108cd196c,0x15);
      *(undefined **)((long)register0x00000008 + -0x120) = &UNK_108cd196c;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0x15;
      if (*(long *)((long)register0x00000008 + -0x148) != 2) goto LAB_1011eae1c;
      lVar27 = *(long *)((long)register0x00000008 + -0x140);
      plVar8[4] = *(long *)((long)register0x00000008 + -0x138);
      plVar8[3] = lVar27;
      plVar8[5] = *(long *)((long)register0x00000008 + -0x130);
      *plVar8 = lVar13;
      plVar8[1] = lVar16;
      plVar8[2] = lVar1;
    }
    return plVar10;
  }
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x110) =
       *(undefined8 *)((long)register0x00000008 + -0x148);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0x130);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x138);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0x128);
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined **)((long)register0x00000008 + -0xd8) = &DAT_100c7b3a0;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(undefined **)((long)register0x00000008 + -200) =
       &
       __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__Mismatch_between_definition_and_108ac57ee,
             (undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10b21f750);
LAB_1011eae1c:
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x110) =
       *(undefined8 *)((long)register0x00000008 + -0x148);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0x130);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x138);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0x128);
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined **)((long)register0x00000008 + -0xd8) = &DAT_100c7b3a0;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(undefined **)((long)register0x00000008 + -200) =
       &
       __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__Mismatch_between_definition_and_108ac57ee,
             (undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10b21f750);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1011eae6c);
  (*pcVar14)();
}

