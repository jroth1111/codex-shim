
void __ZN12codex_config6loader19ProjectTrustContext16decision_for_dir17h2a1c5f9c52787496E
               (long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined8 *unaff_x22;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x25;
  long unaff_x28;
  undefined1 auVar15 [16];
  char *pcStack_160;
  long lStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined2 uStack_128;
  undefined1 uStack_126;
  char *pcStack_120;
  long lStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  __ZN12codex_config6loader29normalized_project_trust_keys17hd16510ceb3480fa7E
            (&lStack_80,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  plVar5 = plStack_78;
  lVar12 = lStack_80;
  plVar14 = (long *)(lStack_70 * 0x18);
  plVar1 = plStack_78 + lStack_70 * 3;
  plStack_a0 = plStack_78;
  lStack_90 = lStack_80;
  plVar11 = plStack_78;
  plStack_88 = plVar1;
  if (lStack_70 == 0) {
LAB_102951284:
    plStack_98 = plVar11;
    if ((long)plVar1 - (long)plVar11 != 0) {
      uVar10 = (ulong)((long)plVar1 - (long)plVar11) / 0x18;
      plVar14 = plVar11 + 1;
      do {
        if (plVar14[-1] != 0) {
          _free(*plVar14);
        }
        plVar14 = plVar14 + 3;
        uVar10 = uVar10 - 1;
        unaff_x22 = (undefined8 *)0x0;
      } while (uVar10 != 0);
    }
  }
  else {
    unaff_x25 = (long *)0x0;
    do {
      plVar11 = (long *)((long)plVar5 + (long)unaff_x25);
      unaff_x28 = *plVar11;
      if (unaff_x28 == -0x8000000000000000) {
        plVar11 = plVar11 + 3;
        goto LAB_102951284;
      }
      unaff_x22 = (undefined8 *)plVar11[1];
      FUN_102952030(&lStack_80,param_2 + 0xc0,unaff_x22,plVar11[2]);
      if (lStack_80 != -0x8000000000000000) {
        param_1[1] = (long)plStack_78;
        *param_1 = lStack_80;
        param_1[2] = lStack_70;
        *(undefined1 *)(param_1 + 3) = uStack_68;
        if (unaff_x28 != 0) {
          _free(unaff_x22);
        }
        if (plVar14 + -3 != unaff_x25) {
          puVar6 = (undefined8 *)((long)plVar5 + (long)unaff_x25 + 0x20);
          uVar10 = (ulong)((long)plVar14 + (-0x18 - (long)unaff_x25)) / 0x18;
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (lVar12 == 0) {
          return;
        }
        _free(plVar5);
        return;
      }
      if (unaff_x28 != 0) {
        _free(unaff_x22);
      }
      unaff_x25 = unaff_x25 + 3;
    } while ((long)plVar14 - (long)unaff_x25 != 0);
  }
  if (lVar12 != 0) {
    _free(plVar5);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar12 = *(long *)(param_2 + 0x40) * 0x18;
    unaff_x22 = (undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    do {
      FUN_102952030(&lStack_80,param_2 + 0xc0,unaff_x22[-1],*unaff_x22);
      if (lStack_80 != -0x8000000000000000) goto LAB_1029513c8;
      unaff_x22 = unaff_x22 + 3;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != 0);
  }
  if ((*(long *)(param_2 + 0xa8) != -0x8000000000000000) && (*(long *)(param_2 + 0xb8) != 0)) {
    lVar12 = *(long *)(param_2 + 0xb8) * 0x18;
    puVar6 = (undefined8 *)(*(long *)(param_2 + 0xb0) + 0x10);
    plVar14 = (long *)0x8000000000000000;
    do {
      FUN_102952030(&lStack_80,param_2 + 0xc0,puVar6[-1],*puVar6);
      if (lStack_80 != -0x8000000000000000) {
LAB_1029513c8:
        param_1[1] = (long)plStack_78;
        *param_1 = lStack_80;
        param_1[2] = lStack_70;
        *(undefined1 *)(param_1 + 3) = uStack_68;
        return;
      }
      puVar6 = puVar6 + 3;
      lVar12 = lVar12 + -0x18;
      unaff_x22 = (undefined8 *)0x0;
    } while (lVar12 != 0);
  }
  puVar6 = unaff_x22;
  if (*(long *)(param_2 + 0x90) != -0x8000000000000000) {
    lVar12 = *(long *)(param_2 + 0xa0);
    if (lVar12 == 0) {
      puVar7 = (undefined8 *)0x1;
      goto LAB_102951484;
    }
    uVar13 = *(undefined8 *)(param_2 + 0x98);
    puVar6 = (undefined8 *)_malloc(lVar12);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1029514b4;
    _memcpy(puVar6,uVar13,lVar12);
    puVar7 = puVar6;
    if (lVar12 != -0x8000000000000000) goto LAB_102951484;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  lVar12 = *(long *)(param_2 + 0x28);
  if (lVar12 == 0) {
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)_malloc(lVar12);
    unaff_x22 = puVar6;
    if (puVar7 == (undefined8 *)0x0) {
LAB_1029514b4:
      uVar8 = func_0x0001087c9084(1,lVar12);
      plStack_98 = (long *)((long)unaff_x25 + lVar12 + 0x18);
      if (unaff_x28 != 0) {
        _free(unaff_x22);
      }
      FUN_102a20190(&plStack_a0);
      auVar15 = __Unwind_Resume(uVar8);
      lVar9 = auVar15._0_8_;
      uStack_a8 = 0x1029514ec;
      if ((*(long *)(lVar9 + 0x60) == -0x8000000000000000) ||
         (*(long *)(lVar9 + 0x78) == -0x8000000000000000)) {
        *extraout_x8 = 0x8000000000000000;
      }
      else {
        pcVar2 = *(char **)(lVar9 + 0x68);
        lVar4 = *(long *)(lVar9 + 0x70);
        pcVar3 = *(char **)(lVar9 + 0x80);
        lVar9 = *(long *)(lVar9 + 0x88);
        if (lVar4 == 0) {
          uStack_126 = false;
        }
        else {
          uStack_126 = *pcVar2 == '/';
        }
        uStack_150 = 6;
        uStack_128 = 0x201;
        if (lVar9 == 0) {
          uStack_e6 = false;
        }
        else {
          uStack_e6 = *pcVar3 == '/';
        }
        uStack_110 = 6;
        uStack_e8 = 0x201;
        pcStack_160 = pcVar2;
        lStack_158 = lVar4;
        pcStack_120 = pcVar3;
        lStack_118 = lVar9;
        plStack_e0 = plVar14;
        uStack_d8 = uVar13;
        puStack_d0 = unaff_x22;
        lStack_c8 = lVar12;
        lStack_c0 = param_2;
        uStack_b8 = uVar8;
        puStack_b0 = &stack0xfffffffffffffff0;
        uVar10 = FUN_102a4714c(&pcStack_160,&pcStack_120);
        if (((uVar10 & 1) == 0) &&
           (lVar12 = __ZN3std4path4Path13_strip_prefix17h6a54778252633284E
                               (*(undefined8 *)(auVar15._8_8_ + 8),
                                *(undefined8 *)(auVar15._8_8_ + 0x10),pcVar2,lVar4), lVar12 != 0)) {
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&pcStack_160);
          lVar12 = lStack_158;
          __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                    (&pcStack_120,lStack_158,CONCAT71(uStack_14f,uStack_150),pcVar3,lVar9);
          lVar9 = lStack_118;
          pcVar2 = pcStack_120;
          uVar13 = CONCAT71(uStack_10f,uStack_110);
          if (pcStack_160 != (char *)0x0) {
            _free(lVar12);
          }
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&pcStack_160,&UNK_108d49787,6);
          lVar12 = lStack_158;
          __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                    (&pcStack_120,lStack_158,CONCAT71(uStack_14f,uStack_150),lVar9,uVar13);
          lVar4 = lStack_118;
          pcVar3 = pcStack_120;
          uVar13 = CONCAT71(uStack_10f,uStack_110);
          if (pcStack_160 != (char *)0x0) {
            _free(lVar12);
          }
          extraout_x8[1] = lVar4;
          *extraout_x8 = pcVar3;
          extraout_x8[2] = uVar13;
          if (pcVar2 != (char *)0x0) {
            _free(lVar9);
          }
        }
        else {
          *extraout_x8 = 0x8000000000000000;
        }
      }
      return;
    }
  }
  _memcpy(puVar7,uVar13,lVar12);
LAB_102951484:
  *(undefined1 *)(param_1 + 3) = 2;
  *param_1 = lVar12;
  param_1[1] = (long)puVar7;
  param_1[2] = lVar12;
  return;
}

