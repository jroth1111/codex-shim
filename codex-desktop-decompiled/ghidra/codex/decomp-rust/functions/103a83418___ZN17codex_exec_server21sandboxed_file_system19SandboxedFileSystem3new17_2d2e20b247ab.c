
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN17codex_exec_server21sandboxed_file_system19SandboxedFileSystem3new17h3bdf14041fc02e37E
               (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 (*pauVar8) [16];
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int *piStack_168;
  int *piStack_158;
  ulong uStack_150;
  int *piStack_148;
  ulong uStack_140;
  ulong uStack_138;
  int *piStack_130;
  ulong uStack_128;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  ulong uStack_80;
  int *piStack_78;
  ulong uStack_70;
  
  __ZN3std3env7vars_os17h10e4982e951ca3e8E(&uStack_f0);
  pauVar8 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar8[1][0] == '\x01') {
    auStack_b0 = *pauVar8;
  }
  else {
    auStack_b0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar8 + 8) = auStack_b0._8_8_;
    pauVar8[1][0] = 1;
  }
  *(long *)*pauVar8 = auStack_b0._0_8_ + 1;
  uStack_c8 = 0;
  puStack_d0 = &UNK_108da0bb0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_90 = lStack_e0;
  uStack_a0 = uStack_f0;
  while (plVar9 = plStack_e8, plStack_e8 != plStack_d8) {
    plVar9 = plStack_e8 + 6;
    lVar10 = *plStack_e8;
    if (lVar10 == -0x8000000000000000) break;
    lVar1 = plStack_e8[3];
    uVar11 = plStack_e8[4];
    uVar13 = plStack_e8[5];
    lVar2 = plStack_e8[1];
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_80,lVar2,plStack_e8[2]);
    uVar6 = uStack_70;
    piVar4 = piStack_78;
    piStack_158 = piStack_78;
    if (uStack_70 == 3) {
      if ((short)*piStack_78 == 0x4d54 && *(char *)((long)piStack_78 + 2) == 'P')
      goto LAB_103a83548;
LAB_103a83604:
      if ((uStack_80 & 0x7fffffffffffffff) != 0) {
        _free(piStack_78);
      }
      uVar12 = 0x8000000000000000;
      uVar3 = uVar11;
    }
    else {
      if (uStack_70 == 6) {
        if (*piStack_78 == 0x44504d54 && (short)piStack_78[1] == 0x5249) goto LAB_103a83548;
        goto LAB_103a83604;
      }
      if ((uStack_70 != 4) || ((*piStack_78 != 0x48544150 && (*piStack_78 != 0x504d4554))))
      goto LAB_103a83604;
LAB_103a83548:
      uVar12 = uStack_80;
      plStack_98 = plVar9;
      if (uStack_80 == 0x8000000000000000) {
        piStack_158 = (int *)_malloc(uStack_70);
        if (piStack_158 == (int *)0x0) {
          func_0x0001087c9084(1,uVar6);
          goto LAB_103a83794;
        }
        _memcpy(piStack_158,piVar4,uVar6);
        uVar12 = uVar6;
      }
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_150,uVar11,uVar13);
      uVar3 = uStack_140;
      piVar5 = piStack_148;
      uVar13 = uStack_150;
      piStack_168 = piStack_148;
      piVar4 = piStack_158;
      if (uStack_150 == 0x8000000000000000) {
        if (uStack_140 == 0) {
          piStack_168 = (int *)0x1;
        }
        else {
          piStack_168 = (int *)_malloc(uStack_140);
          if (piStack_168 == (int *)0x0) {
            func_0x0001087c9084(1,uVar3);
LAB_103a83794:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x103a83798);
            (*pcVar7)();
          }
        }
        _memcpy(piStack_168,piVar5,uVar3);
        uVar13 = uVar3;
      }
    }
    if (lVar1 != 0) {
      _free(uVar11);
    }
    if (lVar10 != 0) {
      _free(lVar2);
    }
    plStack_e8 = plVar9;
    if (uVar12 != 0x8000000000000000) {
      uStack_140 = uVar6;
      uStack_150 = uVar12;
      piStack_148 = piVar4;
      uStack_138 = uVar13;
      piStack_130 = piStack_168;
      uStack_128 = uVar3;
      func_0x000103b92060(&uStack_80,&puStack_d0,&uStack_150,&uStack_138);
      if ((uStack_80 != 0x8000000000000000) && (uStack_80 != 0)) {
        _free(piStack_78);
      }
    }
  }
  plStack_98 = plVar9;
  if ((long)plStack_d8 - (long)plVar9 != 0) {
    uVar11 = (ulong)((long)plStack_d8 - (long)plVar9) / 0x30;
    plVar9 = plVar9 + 4;
    do {
      if (plVar9[-4] != 0) {
        _free(plVar9[-3]);
      }
      if (plVar9[-1] != 0) {
        _free(*plVar9);
      }
      plVar9 = plVar9 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (lStack_90 != 0) {
    _free(uStack_a0);
  }
  uVar17 = param_2[1];
  uVar16 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  uVar19 = param_2[5];
  uVar18 = param_2[4];
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  *(undefined1 (*) [16])(param_1 + 10) = auStack_b0;
  param_1[5] = uVar19;
  param_1[4] = uVar18;
  param_1[7] = uStack_c8;
  param_1[6] = puStack_d0;
  param_1[1] = uVar17;
  *param_1 = uVar16;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  return;
}

