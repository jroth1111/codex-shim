
void FUN_1011eabf4(long param_1,long *param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *extraout_x9;
  undefined *extraout_x10;
  undefined1 auVar10 [16];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined *puStack_88;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined **ppuStack_20;
  undefined *puStack_18;
  
  uVar9 = *(ulong *)(param_1 + 8);
  uVar8 = *(ulong *)(param_1 + 0x20);
  puVar1 = (undefined *)0x0;
  if (uVar8 <= uVar9) {
    puVar1 = (undefined *)(uVar9 - uVar8);
  }
  puVar7 = param_3;
  if (uVar8 <= uVar9 && (undefined *)(uVar9 - uVar8) != (undefined *)0x0) {
    puVar7 = param_3 + -(long)puVar1;
    if (param_3 < puVar1 || puVar7 == (undefined *)0x0) {
      *(undefined **)(param_1 + 0x20) = param_3 + uVar8;
      return;
    }
    *(undefined **)(param_1 + 0x20) = puVar1 + uVar8;
  }
  if ((undefined *)param_2[5] < puVar7) {
    puVar7 = &UNK_10b24a6b8;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23);
    puStack_28 = extraout_x10;
LAB_1011eacb4:
    puStack_30 = puVar7;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_30);
    puStack_38 = extraout_x9;
  }
  else {
    if (*param_2 != 0) {
      if (*param_2 != 1) {
LAB_1011eac8c:
        param_2[5] = param_2[5] - (long)puVar7;
        return;
      }
      uVar8 = param_2[3];
      puStack_28 = (undefined *)0x0;
      if (uVar8 <= (ulong)param_2[2]) {
        puStack_28 = (undefined *)(param_2[2] - uVar8);
      }
      if (puVar7 <= puStack_28) {
        param_2[3] = (long)(puVar7 + uVar8);
        goto LAB_1011eac8c;
      }
      goto LAB_1011eacb4;
    }
    puStack_38 = (undefined *)param_2[3];
    puStack_40 = puVar7;
    if (puVar7 <= puStack_38) {
      param_2[2] = (long)(puVar7 + param_2[2]);
      param_2[3] = (long)puStack_38 - (long)puVar7;
      goto LAB_1011eac8c;
    }
  }
  puStack_28 = &DAT_100c929e0;
  ppuStack_20 = &puStack_38;
  puStack_18 = &DAT_100c929e0;
  puStack_30 = (undefined *)&puStack_40;
  auVar10 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,&puStack_30,&UNK_10b243fb8);
  plVar5 = auVar10._0_8_;
  FUN_10072be88(&lStack_108,auVar10._8_8_,&UNK_108c61038,4);
  lVar3 = lStack_f0;
  lVar2 = lStack_f8;
  lVar6 = lStack_100;
  puStack_e0 = &UNK_108c61038;
  uStack_d8 = 4;
  if (lStack_108 != 2) {
    lStack_c8 = lStack_100;
    lStack_d0 = lStack_108;
    lStack_b8 = lStack_f0;
    lStack_c0 = lStack_f8;
    uStack_b0 = uStack_e8;
    ppuStack_a0 = &puStack_e0;
    puStack_98 = &DAT_100c7b3a0;
    plStack_90 = &lStack_d0;
    puStack_88 = &
                 __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__Mismatch_between_definition_and_108ac57ee,&ppuStack_a0,&UNK_10b21f750);
LAB_1011eae1c:
    lStack_c8 = lStack_100;
    lStack_d0 = lStack_108;
    lStack_b8 = lStack_f0;
    lStack_c0 = lStack_f8;
    uStack_b0 = uStack_e8;
    ppuStack_a0 = &puStack_e0;
    puStack_98 = &DAT_100c7b3a0;
    plStack_90 = &lStack_d0;
    puStack_88 = &
                 __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__Mismatch_between_definition_and_108ac57ee,&ppuStack_a0,&UNK_10b21f750);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1011eae6c);
    (*pcVar4)();
  }
  if (lStack_100 == -0x8000000000000000) {
    lVar6 = FUN_10072aa8c(9,&UNK_108cd482a,0x36);
    *plVar5 = -0x8000000000000000;
    plVar5[1] = lVar6;
  }
  else {
    FUN_10072b7a0(&lStack_108,auVar10._8_8_,&UNK_108cd196c,0x15);
    puStack_e0 = &UNK_108cd196c;
    uStack_d8 = 0x15;
    if (lStack_108 != 2) goto LAB_1011eae1c;
    plVar5[4] = lStack_f8;
    plVar5[3] = lStack_100;
    plVar5[5] = lStack_f0;
    *plVar5 = lVar6;
    plVar5[1] = lVar2;
    plVar5[2] = lVar3;
  }
  return;
}

