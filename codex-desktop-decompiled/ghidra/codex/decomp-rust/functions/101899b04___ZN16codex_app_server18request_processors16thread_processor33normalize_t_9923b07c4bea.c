
void __ZN16codex_app_server18request_processors16thread_processor33normalize_thread_list_cwd_filters17hf6e788d2a8d830f6E
               (long *param_1,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  ulong *puVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  ulong *puStack_78;
  code *pcStack_70;
  
  if (*param_2 == 2) {
    param_1[1] = -0x8000000000000000;
    *param_1 = -0x8000000000000000;
    return;
  }
  uVar13 = param_2[1];
  puVar9 = (ulong *)param_2[2];
  uVar11 = param_2[3];
  if ((*param_2 & 1) == 0) {
    puVar5 = (ulong *)_malloc(0x18);
    if (puVar5 == (ulong *)0x0) {
      func_0x0001087c906c(8,0x18);
      goto LAB_101899c50;
    }
    *puVar5 = uVar13;
    puVar5[1] = (ulong)puVar9;
    puVar5[2] = uVar11;
    uVar11 = 1;
    lVar10 = 0x18;
    uVar13 = 1;
  }
  else {
    if (uVar11 == 0) {
      lVar10 = 0;
      bVar6 = true;
      lStack_100 = 8;
      goto LAB_1018998f8;
    }
    lVar10 = uVar11 * 0x18;
    puVar5 = puVar9;
  }
  lStack_100 = _malloc(lVar10);
  if (lStack_100 == 0) {
    func_0x0001087c9084(8,lVar10);
LAB_101899c50:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101899c54);
    (*pcVar8)();
  }
  bVar6 = false;
  puVar9 = puVar5;
LAB_1018998f8:
  uStack_f8 = 0;
  lVar1 = (long)puVar9 + lVar10;
  puStack_e8 = puVar9;
  uStack_108 = uVar11;
  puStack_f0 = puVar9;
  uStack_e0 = uVar13;
  lStack_d8 = lVar1;
  if (!bVar6) {
    lVar16 = 0;
    do {
      plVar2 = (long *)((long)puVar9 + lVar16);
      lVar18 = plVar2[2];
      lVar17 = plVar2[1];
      lStack_d0 = lVar17;
      lStack_c8 = lVar18;
      if (*plVar2 == -0x8000000000000000) break;
      lStack_c0 = *plVar2;
      lStack_b8 = lVar17;
      lStack_b0 = lVar18;
      __ZN3std3env11current_dir17he7f55ba519818f7aE(&plStack_88);
      puVar5 = puStack_78;
      puVar4 = puStack_80;
      plVar7 = plStack_88;
      puVar12 = puStack_80;
      if (plStack_88 == (long *)0x8000000000000000) {
LAB_101899ae0:
        puStack_e8 = (ulong *)((long)puVar9 + lVar16 + 0x18);
        plStack_88 = &lStack_c0;
        puStack_80 = &DAT_1019a7324;
        puStack_78 = &uStack_a8;
        pcStack_70 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        uStack_a8 = (ulong)puVar12;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_a0,s_invalid_thread_list_cwd_filter___108addb12,&plStack_88);
        if ((uStack_a8 & 3) == 1) {
          uVar14 = *(undefined8 *)(uStack_a8 - 1);
          puVar15 = *(undefined8 **)(uStack_a8 + 7);
          pcVar8 = (code *)*puVar15;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar14);
          }
          if (puVar15[1] != 0) {
            _free(uVar14);
          }
          _free((undefined8 *)(uStack_a8 - 1));
        }
        *param_1 = lStack_a0;
        param_1[1] = lStack_98;
        param_1[2] = lStack_90;
        param_1[3] = -0x7ffffffffffffffb;
        param_1[0xc] = -0x7f5a;
        if (lStack_c0 != 0) {
          _free(lStack_b8);
        }
        if (lVar10 + -0x18 != lVar16) {
          puVar15 = (undefined8 *)((long)puVar9 + lVar16 + 0x20);
          uVar11 = ((lVar10 - lVar16) - 0x18U) / 0x18;
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (uVar13 != 0) {
          _free(puVar9);
        }
        lVar10 = lStack_100;
        if (uStack_f8 != 0) {
          puVar15 = (undefined8 *)(lStack_100 + 8);
          uVar13 = uStack_f8;
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (uStack_108 == 0) {
          return;
        }
        _free(lVar10);
        return;
      }
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&lStack_a0,lVar17,lVar18);
      lVar17 = lStack_98;
      __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                (&plStack_88,lStack_98,lStack_90,puVar4,puVar5);
      puVar5 = puStack_78;
      puVar12 = puStack_80;
      plVar3 = plStack_88;
      if (lStack_a0 != 0) {
        _free(lVar17);
      }
      if (plVar7 != (long *)0x0) {
        _free(puVar4);
      }
      uVar11 = uStack_f8;
      if (plVar3 == (long *)0x8000000000000000) goto LAB_101899ae0;
      if (uStack_f8 == uStack_108) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17ha705f7b4376eaadfE(&uStack_108);
      }
      plVar7 = (long *)(lStack_100 + uVar11 * 0x18);
      *plVar7 = (long)plVar3;
      plVar7[1] = (long)puVar12;
      plVar7[2] = (long)puVar5;
      uStack_f8 = uVar11 + 1;
      if (lStack_c0 != 0) {
        _free(lStack_b8);
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar10 != lVar16);
    puStack_e8 = (ulong *)(plVar2 + 3);
  }
  if (lVar1 - (long)puStack_e8 != 0) {
    uVar11 = (ulong)(lVar1 - (long)puStack_e8) / 0x18;
    puVar5 = puStack_e8 + 1;
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (uVar13 != 0) {
    _free(puVar9);
  }
  param_1[2] = lStack_100;
  param_1[1] = uStack_108;
  param_1[3] = uStack_f8;
  *param_1 = -0x8000000000000000;
  return;
}

