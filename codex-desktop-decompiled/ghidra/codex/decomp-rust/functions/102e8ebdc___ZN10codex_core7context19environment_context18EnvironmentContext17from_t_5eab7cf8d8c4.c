
ulong __ZN10codex_core7context19environment_context18EnvironmentContext17from_turn_context17h90d119aa2847ea3eE
                (long *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long unaff_x23;
  undefined8 *unaff_x25;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long lStack_108;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_90;
  long lStack_88;
  ulong in_stack_ffffffffffffff80;
  long lStack_78;
  long lStack_70;
  
  puVar14 = *(undefined8 **)(param_2 + 0x388);
  if (puVar14 == (undefined8 *)0x0) {
    puStack_90 = (undefined8 *)0x0;
    lStack_88 = 8;
    uVar4 = param_2;
  }
  else {
    lVar11 = *(long *)(param_2 + 0x380);
    lVar13 = (long)puVar14 * 0x48;
    lStack_88 = _malloc(lVar13);
    if (lStack_88 == 0) {
      uVar16 = func_0x0001087c9084(8,lVar13);
      FUN_1033ac1c0(&puStack_b0);
      if (((ulong)puVar14 & 0x7fffffffffffffff) != 0) {
        _free(uStack_f0);
      }
      if ((param_3 & 0x7fffffffffffffff) == 0) {
        FUN_1032cd9a8(&puStack_e0);
        __Unwind_Resume(uVar16);
      }
      _free(puStack_e8);
      FUN_1032cd9a8(&puStack_e0);
      uVar16 = __Unwind_Resume(uVar16);
      FUN_1032cd9a8(&puStack_e0);
      uVar16 = __Unwind_Resume(uVar16);
      if (puVar14 != (undefined8 *)0x0) {
        _free();
      }
      if (param_3 != 0) {
        _free(lVar13);
        FUN_1032cd9a8(&puStack_90);
        uVar16 = __Unwind_Resume(uVar16);
      }
      FUN_1032cd9a8(&puStack_90);
      auVar19 = __Unwind_Resume(uVar16);
      uVar8 = auVar19._8_8_;
      uVar7 = auVar19._0_8_;
      uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                        (&UNK_108d7b003,0x1d,&UNK_108d7b020,0xf,uVar7,uVar8,in_x6,in_x7,param_3,
                         uVar16,&stack0xfffffffffffffff0,0x102e8ebdc);
      if (((((((uVar4 & 1) == 0) &&
             (uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                                (&UNK_108d7b21f,0x15,&UNK_108d7b234,0x16,uVar7,uVar8,in_x6,in_x7,
                                 param_3,uVar16), (uVar4 & 1) == 0)) &&
            (uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                               (&UNK_108d7b1d3,7,&UNK_108d7b1da,8,uVar7,uVar8,in_x6,in_x7,param_3,
                                uVar16), (uVar4 & 1) == 0)) &&
           ((uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                               (&UNK_108d7b0f5,0x14,&UNK_108d7b109,0x15,uVar7,uVar8,in_x6,in_x7,
                                param_3,uVar16), (uVar4 & 1) == 0 &&
            (uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                               (&UNK_108d7962c,0xe,&UNK_108d7963a,0xf,uVar7,uVar8,in_x6,in_x7,
                                param_3,uVar16), (uVar4 & 1) == 0)))) &&
          ((uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                              (&UNK_108d7b31b,0x17,&UNK_108d7b332,0x18,uVar7,uVar8),
           (uVar4 & 1) == 0 &&
           ((uVar4 = __ZN10codex_core7context8fragment19matches_marked_text17he93d5b5fa0aee966E
                               (&UNK_108d7960f,0xe,&UNK_108d7961d,0xf,uVar7,uVar8), (uVar4 & 1) == 0
            && (uVar4 = FUN_102ff1c60(uVar4,uVar7,uVar8), (uVar4 & 1) == 0)))))) &&
         (uVar4 = FUN_102ff1cac(uVar4,uVar7,uVar8), (uVar4 & 1) == 0)) {
        auVar19 = FUN_1033f63d0(uVar7,uVar8);
        if (auVar19._8_8_ < 0x4a) {
          uVar4 = 0;
        }
        else {
          iVar3 = _memcmp(&UNK_108d7e69a,auVar19._0_8_,0x4a);
          uVar4 = (ulong)(iVar3 == 0);
        }
        return uVar4;
      }
      return 1;
    }
    puVar18 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)(lVar11 + 0x20);
    plVar10 = (long *)(lStack_88 + 0x20);
    uStack_f0 = (ulong)*(byte *)(param_3 + 0x28);
    puStack_90 = puVar14;
    do {
      uVar16 = puVar12[-3];
      lVar11 = puVar12[-2];
      if (lVar11 == 0) {
        lVar5 = 1;
        _memcpy(1,uVar16,0);
        uVar16 = *puVar12;
        lVar13 = puVar12[1];
        if (lVar13 != 0) goto LAB_102e8e790;
LAB_102e8e7c0:
        unaff_x23 = 1;
      }
      else {
        lVar5 = _malloc(lVar11);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,lVar11);
          goto LAB_102e8eb08;
        }
        _memcpy(lVar5,uVar16,lVar11);
        uVar16 = *puVar12;
        lVar13 = puVar12[1];
        if (lVar13 == 0) goto LAB_102e8e7c0;
LAB_102e8e790:
        unaff_x23 = _malloc(lVar13);
        if (unaff_x23 == 0) {
          func_0x0001087c9084(1,lVar13);
          goto LAB_102e8eb08;
        }
      }
      _memcpy(unaff_x23,uVar16,lVar13);
      if (puVar12[2] == -0x8000000000000000) {
        unaff_x25 = *(undefined8 **)(&UNK_108d94350 + uStack_f0 * 8);
        uVar16 = *(undefined8 *)(&UNK_10b2d40a0 + uStack_f0 * 8);
        lVar6 = _malloc(unaff_x25);
        if (lVar6 == 0) {
          func_0x0001087c9084(1,unaff_x25);
          goto LAB_102e8eb08;
        }
      }
      else {
        uVar16 = puVar12[3];
        unaff_x25 = (undefined8 *)puVar12[4];
        if (unaff_x25 == (undefined8 *)0x0) {
          lVar6 = 1;
        }
        else {
          lVar6 = _malloc(unaff_x25);
          if (lVar6 == 0) {
            func_0x0001087c9084(1,unaff_x25);
            goto LAB_102e8eb08;
          }
        }
      }
      uVar4 = _memcpy(lVar6,uVar16,unaff_x25);
      plVar10[-4] = lVar11;
      plVar10[-3] = lVar5;
      plVar10[-2] = lVar11;
      plVar10[-1] = lVar13;
      *plVar10 = unaff_x23;
      plVar10[1] = lVar13;
      puVar18 = (undefined8 *)((long)puVar18 + 1);
      puVar12 = puVar12 + 10;
      plVar10[2] = (long)unaff_x25;
      plVar10[3] = lVar6;
      plVar10[4] = (long)unaff_x25;
      plVar10 = plVar10 + 9;
      puStack_e8 = puVar14;
    } while (puVar14 != puVar18);
  }
  lStack_d8 = lStack_88;
  puStack_e0 = puStack_90;
  lVar11 = -0x8000000000000000;
  puStack_d0 = puVar14;
  if (*(long *)(param_2 + 0x498) == -0x8000000000000000) {
    lVar13 = -0x8000000000000000;
    if (*(long *)(param_2 + 0x4b0) == -0x8000000000000000) goto LAB_102e8e83c;
LAB_102e8e8ac:
    unaff_x25 = *(undefined8 **)(param_2 + 0x4b8);
    lVar11 = *(long *)(param_2 + 0x4c0);
    if (lVar11 == 0) {
      uStack_f0 = 1;
    }
    else {
      uStack_f0 = _malloc(lVar11);
      if (uStack_f0 == 0) {
        func_0x0001087c9084(1,lVar11);
LAB_102e8eb08:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8eb0c);
        (*pcVar2)();
      }
    }
    uVar4 = _memcpy(uStack_f0,unaff_x25,lVar11);
    puVar14 = *(undefined8 **)(param_2 + 0x788);
    uVar9 = puVar14[0x61];
    if (uVar9 != 2) goto LAB_102e8e8f8;
LAB_102e8e84c:
    puVar18 = (undefined8 *)0x8000000000000000;
    puVar12 = puStack_d0;
    lVar5 = lStack_d8;
    puVar17 = puStack_e0;
    uStack_f8 = param_2;
    if (puStack_d0 == (undefined8 *)0x0) goto LAB_102e8ea28;
LAB_102e8e9a8:
    lVar5 = lStack_d8;
    puVar17 = puStack_e0;
    lVar15 = -0x8000000000000000;
    lVar6 = (long)puStack_d0 + -1;
    plVar10 = (long *)(lStack_d8 + lVar6 * 0x48);
    puVar1 = puStack_d0;
    if (*plVar10 != -0x8000000000000000) {
      if (lVar6 != 0) {
        lVar15 = -0x7ffffffffffffffe;
        puVar14 = puStack_e0;
        unaff_x23 = lStack_d8;
        goto LAB_102e8ea5c;
      }
      puVar14 = (undefined8 *)plVar10[1];
      unaff_x23 = plVar10[2];
      lStack_88 = plVar10[5];
      puStack_90 = (undefined8 *)plVar10[4];
      lStack_78 = plVar10[7];
      in_stack_ffffffffffffff80 = plVar10[6];
      lStack_70 = plVar10[8];
      lVar15 = *plVar10;
      puVar12 = (undefined8 *)plVar10[3];
      goto joined_r0x000102e8ea50;
    }
    if (lVar6 != 0) {
      puVar12 = (undefined8 *)(lStack_d8 + 0x20);
      do {
        if (puVar12[-4] != 0) {
          uVar4 = _free(puVar12[-3]);
        }
        if (puVar12[-1] != 0) {
          uVar4 = _free(*puVar12);
        }
        if (puVar12[2] != 0) {
          uVar4 = _free(puVar12[3]);
        }
        puVar12 = puVar12 + 9;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      puVar14 = (undefined8 *)0x0;
      goto LAB_102e8ea28;
    }
    puVar14 = (undefined8 *)0x0;
    puVar12 = puStack_d0;
  }
  else {
    unaff_x23 = *(long *)(param_2 + 0x4a0);
    lVar13 = *(long *)(param_2 + 0x4a8);
    if (lVar13 == 0) {
      puStack_e8 = (undefined8 *)0x1;
    }
    else {
      puStack_e8 = (undefined8 *)_malloc(lVar13);
      if (puStack_e8 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,lVar13);
        goto LAB_102e8eb08;
      }
    }
    uVar4 = _memcpy(puStack_e8,unaff_x23,lVar13);
    if (*(long *)(param_2 + 0x4b0) != -0x8000000000000000) goto LAB_102e8e8ac;
LAB_102e8e83c:
    puVar14 = *(undefined8 **)(param_2 + 0x788);
    uVar9 = puVar14[0x61];
    if (uVar9 == 2) goto LAB_102e8e84c;
LAB_102e8e8f8:
    if (((uVar9 & 1) == 0) ||
       (uVar4 = __ZN12codex_config19config_requirements28NetworkDomainPermissionsToml15allowed_domains17h759e44f9ee46016dE
                          (&puStack_90,puVar14 + 0x62),
       puStack_90 == (undefined8 *)0x8000000000000000)) {
      puStack_b0 = (undefined8 *)0x0;
      lStack_a8 = 8;
      uStack_a0 = 0;
      if (*(int *)(puVar14 + 0x61) == 1) goto LAB_102e8e950;
LAB_102e8e96c:
      uStack_f8 = 0;
      lStack_108 = 8;
      unaff_x25 = (undefined8 *)0x0;
    }
    else {
      lStack_a8 = lStack_88;
      puStack_b0 = puStack_90;
      uStack_a0 = in_stack_ffffffffffffff80;
      if (*(int *)(puVar14 + 0x61) != 1) goto LAB_102e8e96c;
LAB_102e8e950:
      uVar4 = __ZN12codex_config19config_requirements28NetworkDomainPermissionsToml14denied_domains17h2893fdb38781b628E
                        (&puStack_90,puVar14 + 0x62);
      if (puStack_90 == (undefined8 *)0x8000000000000000) goto LAB_102e8e96c;
      lStack_108 = lStack_88;
      unaff_x25 = puStack_90;
      uStack_f8 = in_stack_ffffffffffffff80;
    }
    uStack_b8 = uStack_a0;
    lStack_c0 = lStack_a8;
    puVar12 = puStack_d0;
    lVar5 = lStack_d8;
    puVar17 = puStack_e0;
    puVar18 = puStack_b0;
    if (puStack_d0 != (undefined8 *)0x0) goto LAB_102e8e9a8;
LAB_102e8ea28:
    lVar15 = -0x8000000000000000;
    puVar1 = puStack_d0;
joined_r0x000102e8ea50:
    puStack_d0 = puVar12;
    puVar12 = puStack_d0;
    if (puVar17 == (undefined8 *)0x0) goto LAB_102e8ea5c;
  }
  puStack_d0 = puVar1;
  uVar4 = _free(lVar5);
  puStack_d0 = puVar12;
LAB_102e8ea5c:
  param_1[0x14] = lStack_88;
  param_1[0x13] = (long)puStack_90;
  param_1[0xf] = lVar15;
  param_1[0x10] = (long)puVar14;
  param_1[0x11] = unaff_x23;
  param_1[0x12] = (long)puStack_d0;
  param_1[0x16] = lStack_78;
  param_1[0x15] = in_stack_ffffffffffffff80;
  param_1[0x17] = lStack_70;
  *param_1 = lVar13;
  param_1[1] = (long)puStack_e8;
  param_1[2] = lVar13;
  param_1[3] = lVar11;
  param_1[4] = uStack_f0;
  param_1[5] = lVar11;
  param_1[6] = (long)puVar18;
  param_1[8] = uStack_b8;
  param_1[7] = lStack_c0;
  param_1[9] = (long)unaff_x25;
  param_1[10] = lStack_108;
  param_1[0xb] = uStack_f8;
  param_1[0xc] = -0x8000000000000000;
  return uVar4;
}

