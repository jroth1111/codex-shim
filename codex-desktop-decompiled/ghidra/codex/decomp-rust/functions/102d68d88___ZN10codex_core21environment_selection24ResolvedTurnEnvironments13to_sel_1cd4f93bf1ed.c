
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core21environment_selection24ResolvedTurnEnvironments13to_selections17h8fe185f6c7435e93E
               (long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [16];
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined *puStack_f0;
  long lStack_78;
  long lStack_70;
  
  lVar13 = *(long *)(param_2 + 0x10);
  if (lVar13 == 0) {
    lStack_78 = 0;
    lStack_70 = 8;
  }
  else {
    lVar10 = *(long *)(param_2 + 8);
    lVar9 = lVar13 * 0x30;
    lStack_70 = _malloc(lVar9);
    if (lStack_70 == 0) {
      uVar4 = func_0x0001087c9084(8,lVar9);
      FUN_1033e49e8(&lStack_78);
      uVar4 = __Unwind_Resume(uVar4);
      if (lVar9 != 0) {
        _free(lVar10);
      }
      FUN_1033e49e8(&lStack_78);
      auVar16 = __Unwind_Resume(uVar4);
      lVar13 = auVar16._8_8_;
      pauVar5 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar5[1][0] == '\x01') {
        auStack_1a0 = *pauVar5;
      }
      else {
        auStack_1a0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar5 + 8) = auStack_1a0._8_8_;
        pauVar5[1][0] = 1;
      }
      *(long *)*pauVar5 = auStack_1a0._0_8_ + 1;
      FUN_103878e48(&lStack_148,0x10,param_4,1);
      puStack_1b8 = puStack_140;
      lStack_1c0 = lStack_148;
      lStack_1a8 = lStack_130;
      lStack_1b0 = lStack_138;
      if (param_4 < 0x19999999999999a) {
        if (param_4 == 0) {
          uStack_190 = 0;
          lStack_188 = 8;
          lStack_180 = 0;
LAB_102d68f84:
          extraout_x8[2] = lStack_188;
          extraout_x8[1] = uStack_190;
          extraout_x8[3] = lStack_180;
          *extraout_x8 = 0x8000000000000020;
          if (puStack_1b8 == (undefined *)0x0) {
            return;
          }
          if ((long)puStack_1b8 * 0x11 == -0x19) {
            return;
          }
        }
        else {
          lVar9 = _malloc(param_4 * 0x50);
          if (lVar9 == 0) {
            uVar4 = 8;
            goto LAB_102d68e20;
          }
          lVar10 = 0;
          lStack_180 = 0;
          lVar11 = param_4 * 0x30;
          lVar3 = 1;
          uStack_190 = param_4;
          lStack_188 = lVar9;
          while( true ) {
            lVar12 = lVar3;
            uVar4 = *(undefined8 *)(lVar13 + 8);
            lVar3 = *(long *)(lVar13 + 0x10);
            iVar2 = FUN_1038764e8(&lStack_1c0,uVar4,lVar3);
            lVar8 = lVar9;
            if (iVar2 != 0) {
              puStack_140 = &DAT_103592578;
              lStack_148 = lVar13;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&uStack_178,s_duplicate_turn_environment_id_____108af1795,&lStack_148);
              extraout_x8[2] = uStack_170;
              extraout_x8[1] = uStack_178;
              extraout_x8[3] = uStack_168;
              *extraout_x8 = 0x800000000000000b;
              goto LAB_102d69090;
            }
            if (lVar3 == 0) {
              puVar6 = (undefined *)0x1;
            }
            else {
              puVar6 = (undefined *)_malloc(lVar3);
              if (puVar6 == (undefined *)0x0) {
                func_0x0001087c9084(1,lVar3);
                goto LAB_102d69114;
              }
            }
            _memcpy(puVar6,uVar4,lVar3);
            lStack_160 = lVar3;
            puStack_158 = puVar6;
            lStack_150 = lVar3;
            plStack_f8 = (long *)__ZN17codex_exec_server11environment18EnvironmentManager15get_environment17ha5ba51fdf48c6a84E
                                           (auVar16._0_8_,puVar6,lVar3);
            if (plStack_f8 == (long *)0x0) break;
            uVar4 = *(undefined8 *)(lVar13 + 0x20);
            lVar8 = *(long *)(lVar13 + 0x28);
            if (lVar8 == 0) {
              lVar7 = 1;
            }
            else {
              lVar7 = _malloc(lVar8);
              if (lVar7 == 0) {
                func_0x0001087c9084(1,lVar8);
                goto LAB_102d69114;
              }
            }
            _memcpy(lVar7,uVar4,lVar8);
            plStack_100 = plStack_f8;
            lStack_118 = -0x8000000000000000;
            lStack_148 = lVar3;
            puStack_140 = puVar6;
            lStack_138 = lVar3;
            lStack_130 = lVar8;
            lStack_128 = lVar7;
            lStack_120 = lVar8;
            if (lVar12 - 1U == uStack_190) {
              func_0x00010893d594(&uStack_190);
              lVar9 = lStack_188;
            }
            lVar13 = lVar13 + 0x30;
            plVar15 = (long *)(lVar9 + lVar10);
            plVar15[1] = (long)puStack_140;
            *plVar15 = lStack_148;
            plVar15[7] = lStack_110;
            plVar15[6] = lStack_118;
            plVar15[9] = (long)plStack_100;
            plVar15[8] = lStack_108;
            plVar15[3] = lStack_130;
            plVar15[2] = lStack_138;
            plVar15[5] = lStack_120;
            plVar15[4] = lStack_128;
            lVar10 = lVar10 + 0x50;
            lVar11 = lVar11 + -0x30;
            lVar3 = lVar12 + 1;
            lStack_180 = lVar12;
            if (lVar11 == 0) goto LAB_102d68f84;
          }
          plStack_f8 = &lStack_160;
          puStack_f0 = &DAT_103592578;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_148,s_unknown_turn_environment_id_____108af17b9,&plStack_f8);
          extraout_x8[3] = lStack_138;
          extraout_x8[2] = puStack_140;
          *extraout_x8 = 0x800000000000000b;
          extraout_x8[1] = lStack_148;
          if (lStack_160 != 0) {
            _free(puStack_158);
          }
LAB_102d69090:
          while (lVar12 = lVar12 + -1, lVar12 != 0) {
            FUN_1033b9570(lVar8);
            lVar8 = lVar8 + 0x50;
          }
          if (uStack_190 != 0) {
            _free(lVar9);
          }
          if (puStack_1b8 == (undefined *)0x0 || (long)puStack_1b8 * 0x11 == -0x19) {
            return;
          }
        }
        _free(lStack_1c0 + (long)puStack_1b8 * -0x10 + -0x10);
        return;
      }
      uVar4 = 0;
LAB_102d68e20:
      func_0x0001087c9084(uVar4,param_4 * 0x50);
LAB_102d69114:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d69118);
      (*pcVar1)();
    }
    lVar9 = 0;
    puVar14 = (undefined8 *)(lVar10 + 0x20);
    plVar15 = (long *)(lStack_70 + 0x18);
    lStack_78 = lVar13;
    do {
      uVar4 = puVar14[-3];
      lVar10 = puVar14[-2];
      if (lVar10 == 0) {
        lVar3 = 1;
        _memcpy(1,uVar4,0);
        uVar4 = *puVar14;
        lVar11 = puVar14[1];
        if (lVar11 == 0) goto LAB_102d68c5c;
LAB_102d68cdc:
        lVar12 = _malloc(lVar11);
        if (lVar12 == 0) {
          func_0x0001087c9084(1,lVar11);
LAB_102d68d3c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d68d40);
          (*pcVar1)();
        }
      }
      else {
        lVar3 = _malloc(lVar10);
        if (lVar3 == 0) {
          func_0x0001087c9084(1,lVar10);
          goto LAB_102d68d3c;
        }
        _memcpy(lVar3,uVar4,lVar10);
        uVar4 = *puVar14;
        lVar11 = puVar14[1];
        if (lVar11 != 0) goto LAB_102d68cdc;
LAB_102d68c5c:
        lVar12 = 1;
      }
      _memcpy(lVar12,uVar4,lVar11);
      plVar15[-3] = lVar10;
      plVar15[-2] = lVar3;
      plVar15[-1] = lVar10;
      *plVar15 = lVar11;
      lVar9 = lVar9 + 1;
      puVar14 = puVar14 + 10;
      plVar15[1] = lVar12;
      plVar15[2] = lVar11;
      plVar15 = plVar15 + 6;
    } while (lVar13 != lVar9);
  }
  param_1[1] = lStack_70;
  *param_1 = lStack_78;
  param_1[2] = lVar13;
  return;
}

