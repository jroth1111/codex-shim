
void FUN_1011eaad0(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  char cVar3;
  unkbyte9 Var4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *extraout_x9;
  char extraout_w10;
  char cVar16;
  undefined *extraout_x10;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auVar19 [16];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  undefined1 **ppuStack_20;
  undefined *puStack_18;
  
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = param_1;
  Var4 = auVar19._0_9_;
  puStack_30 = (undefined1 *)&puStack_40;
  cVar16 = *(char *)(param_1 + 0x32);
  cVar3 = *(char *)(param_1 + 0x33);
  puVar18 = (undefined1 *)(ulong)(byte)(cVar3 - cVar16);
  puStack_38 = *(undefined1 **)(param_1 + 0x10);
  puVar1 = puVar18 + (long)puStack_38;
  if (CARRY8((ulong)puVar18,(ulong)puStack_38)) {
    puVar1 = (undefined1 *)0xffffffffffffffff;
  }
  puVar10 = param_2;
  if (puVar1 == (undefined1 *)0x0) {
LAB_1011eab38:
    puStack_28 = *(undefined1 **)(param_1 + 0x40);
    lVar9 = (long)puStack_28 - (long)puVar10;
    if (puVar10 <= puStack_28) {
LAB_1011eab44:
      *(undefined1 **)(param_1 + 0x38) = puVar10 + *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x40) = lVar9;
      return;
    }
LAB_1011eaba0:
    puStack_30 = puVar10;
    auVar19 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_30);
    Var4 = auVar19._0_9_;
    cVar16 = extraout_w10;
LAB_1011eabac:
    *(char *)((long)Var4 + 0x32) = cVar16 + (char)((unkuint9)Var4 >> 0x40);
    return;
  }
  puVar10 = param_2 + -(long)puVar1;
  if (param_2 < puVar1 || puVar10 == (undefined1 *)0x0) {
    if (cVar3 != cVar16) {
      bVar8 = param_2 < puVar18;
      param_2 = param_2 + -(long)puVar18;
      if (bVar8 || param_2 == (undefined1 *)0x0) goto LAB_1011eabac;
      *(char *)(param_1 + 0x32) = cVar3;
    }
    puStack_40 = param_2;
    if (param_2 <= puStack_38) {
      *(undefined1 **)(param_1 + 8) = param_2 + *(long *)(param_1 + 8);
      *(long *)(param_1 + 0x10) = (long)puStack_38 - (long)param_2;
      return;
    }
  }
  else {
    puVar17 = puVar1;
    if (cVar3 != cVar16) {
      puVar17 = puVar1 + -(long)puVar18;
      if (puVar18 <= puVar1 && puVar17 != (undefined1 *)0x0) {
        *(char *)(param_1 + 0x32) = cVar3;
        goto LAB_1011eab1c;
      }
      *(char *)(param_1 + 0x32) = cVar16 + (char)puVar1;
      puStack_28 = *(undefined1 **)(param_1 + 0x40);
      lVar9 = (long)puStack_28 - (long)puVar10;
      if (puVar10 <= puStack_28) goto LAB_1011eab44;
      goto LAB_1011eaba0;
    }
LAB_1011eab1c:
    puStack_40 = puVar17;
    if (puVar17 <= puStack_38) {
      *(undefined1 **)(param_1 + 8) = puVar17 + *(long *)(param_1 + 8);
      *(long *)(param_1 + 0x10) = (long)puStack_38 - (long)puVar17;
      goto LAB_1011eab38;
    }
  }
  puStack_28 = &DAT_100c929e0;
  ppuStack_20 = &puStack_38;
  puStack_18 = &DAT_100c929e0;
  puVar12 = &UNK_10b243fb8;
  auVar19 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,&puStack_30);
  plVar11 = auVar19._8_8_;
  lVar9 = auVar19._0_8_;
  pcStack_48 = FUN_1011eabf4;
  uVar15 = *(ulong *)(lVar9 + 8);
  uVar14 = *(ulong *)(lVar9 + 0x20);
  puVar2 = (undefined *)0x0;
  if (uVar14 <= uVar15) {
    puVar2 = (undefined *)(uVar15 - uVar14);
  }
  puVar13 = puVar12;
  if (uVar14 <= uVar15 && (undefined *)(uVar15 - uVar14) != (undefined *)0x0) {
    puVar13 = puVar12 + -(long)puVar2;
    if (puVar12 < puVar2 || puVar13 == (undefined *)0x0) {
      *(undefined **)(lVar9 + 0x20) = puVar12 + uVar14;
      return;
    }
    *(undefined **)(lVar9 + 0x20) = puVar2 + uVar14;
  }
  puStack_50 = &stack0xfffffffffffffff0;
  if ((undefined *)plVar11[5] < puVar13) {
    puVar13 = &UNK_10b24a6b8;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23);
    puStack_68 = extraout_x10;
LAB_1011eacb4:
    puStack_70 = puVar13;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_70);
    puStack_78 = extraout_x9;
  }
  else {
    if (*plVar11 != 0) {
      if (*plVar11 != 1) {
LAB_1011eac8c:
        plVar11[5] = plVar11[5] - (long)puVar13;
        return;
      }
      uVar14 = plVar11[3];
      puStack_68 = (undefined *)0x0;
      if (uVar14 <= (ulong)plVar11[2]) {
        puStack_68 = (undefined *)(plVar11[2] - uVar14);
      }
      if (puVar13 <= puStack_68) {
        plVar11[3] = (long)(puVar13 + uVar14);
        goto LAB_1011eac8c;
      }
      goto LAB_1011eacb4;
    }
    puStack_78 = (undefined *)plVar11[3];
    puStack_80 = puVar13;
    if (puVar13 <= puStack_78) {
      plVar11[2] = (long)(puVar13 + plVar11[2]);
      plVar11[3] = (long)puStack_78 - (long)puVar13;
      goto LAB_1011eac8c;
    }
  }
  puStack_68 = &DAT_100c929e0;
  ppuStack_60 = &puStack_78;
  puStack_58 = &DAT_100c929e0;
  puStack_70 = (undefined *)&puStack_80;
  auVar19 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,&puStack_70,&UNK_10b243fb8);
  plVar11 = auVar19._0_8_;
  FUN_10072be88(&lStack_148,auVar19._8_8_,&UNK_108c61038,4);
  lVar6 = lStack_130;
  lVar5 = lStack_138;
  lVar9 = lStack_140;
  puStack_120 = &UNK_108c61038;
  uStack_118 = 4;
  if (lStack_148 != 2) {
    lStack_108 = lStack_140;
    lStack_110 = lStack_148;
    lStack_f8 = lStack_130;
    lStack_100 = lStack_138;
    uStack_f0 = uStack_128;
    ppuStack_e0 = &puStack_120;
    puStack_d8 = &DAT_100c7b3a0;
    plStack_d0 = &lStack_110;
    puStack_c8 = &
                 __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__Mismatch_between_definition_and_108ac57ee,&ppuStack_e0,&UNK_10b21f750);
LAB_1011eae1c:
    lStack_108 = lStack_140;
    lStack_110 = lStack_148;
    lStack_f8 = lStack_130;
    lStack_100 = lStack_138;
    uStack_f0 = uStack_128;
    ppuStack_e0 = &puStack_120;
    puStack_d8 = &DAT_100c7b3a0;
    plStack_d0 = &lStack_110;
    puStack_c8 = &
                 __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__Mismatch_between_definition_and_108ac57ee,&ppuStack_e0,&UNK_10b21f750);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1011eae6c);
    (*pcVar7)();
  }
  if (lStack_140 == -0x8000000000000000) {
    lVar9 = FUN_10072aa8c(9,&UNK_108cd482a,0x36);
    *plVar11 = -0x8000000000000000;
    plVar11[1] = lVar9;
  }
  else {
    FUN_10072b7a0(&lStack_148,auVar19._8_8_,&UNK_108cd196c,0x15);
    puStack_120 = &UNK_108cd196c;
    uStack_118 = 0x15;
    if (lStack_148 != 2) goto LAB_1011eae1c;
    plVar11[4] = lStack_138;
    plVar11[3] = lStack_140;
    plVar11[5] = lStack_130;
    *plVar11 = lVar9;
    plVar11[1] = lVar5;
    plVar11[2] = lVar6;
  }
  return;
}

