
void __ZN143__LT_codex_protocol__permissions__FileSystemSandboxPolicy_u20_as_u20_core__convert__From_LT__RF_codex_protocol__protocol__SandboxPolicy_GT__GT_4from17hf5e9d5d6da92a756E
               (undefined8 *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *extraout_x8;
  ulong uVar12;
  bool bVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  ulong unaff_x22;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  ulong *puStack_140;
  undefined8 *puStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined4 *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined4 *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong in_stack_ffffffffffffff80;
  undefined7 uVar22;
  
  uVar12 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar12 = 3;
  }
  if ((long)uVar12 < 2) {
    if (uVar12 == 0) {
      uVar12 = 1;
LAB_1048f03d4:
      *(char *)(param_1 + 5) = (char)uVar12;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 8;
      param_1[4] = 0;
      return;
    }
    puVar6 = (undefined8 *)_malloc(0x38);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0x8000000000000000;
      *(undefined1 *)(puVar6 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *param_1 = 0;
      param_1[2] = 1;
      param_1[3] = puVar6;
      param_1[4] = 1;
      return;
    }
    puVar6 = (undefined8 *)__ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
    uStack_1b8 = 0;
    puVar7 = (undefined4 *)_malloc(4);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,4);
      goto LAB_1048f06c4;
    }
    *puVar7 = 0x72657375;
    uStack_160 = *puVar6;
    lStack_170 = puVar6[1];
    lStack_158 = lStack_170 + puVar6[2] * 0x38;
    puStack_1b0 = (undefined8 *)0x0;
    lStack_190 = 0;
    puStack_150 = &uStack_1b8;
    lStack_168 = lStack_170;
    func_0x0001048ee110(&uStack_130,&puStack_1b0);
    if (uStack_130 == 0x8000000000000003) {
      func_0x00010499f8dc(&puStack_1b0);
      lStack_148 = 0;
      puVar6 = (undefined8 *)0x0;
      puVar15 = (ulong *)0x8;
      goto LAB_1048f065c;
    }
    uVar8 = 0;
    uVar12 = 0;
    if (puStack_1b0 != (undefined8 *)0x0) {
      uVar12 = (ulong)(lStack_198 - lStack_1a8) >> 5;
    }
    uVar11 = 0;
    if (lStack_190 != 0) {
      uVar11 = (ulong)(lStack_178 - lStack_188) >> 5;
    }
    uVar11 = uVar11 + uVar12;
    uVar12 = uVar11;
    if (uVar11 < 4) {
      uVar12 = 3;
    }
    lVar19 = uVar12 + 1;
    uVar12 = lVar19 * 0x20;
    if ((uVar11 < 0x7ffffffffffffff) && (uVar12 < 0x7ffffffffffffff9)) {
      if (uVar12 == 0) {
        lVar19 = 0;
        puVar15 = (ulong *)0x8;
      }
      else {
        puVar15 = (ulong *)_malloc(uVar12);
        if (puVar15 == (ulong *)0x0) {
          uVar8 = 8;
          goto LAB_1048f06b8;
        }
      }
      puVar15[1] = (ulong)puStack_128;
      *puVar15 = uStack_130;
      puVar15[3] = uStack_118;
      puVar15[2] = uStack_120;
      puStack_138 = (undefined8 *)0x1;
      uStack_c8 = lStack_168;
      puStack_d0 = (undefined4 *)lStack_170;
      uStack_b8 = lStack_158;
      uStack_c0 = uStack_160;
      puStack_b0 = puStack_150;
      uStack_108 = lStack_1a8;
      puStack_110 = puStack_1b0;
      plStack_f8 = (long *)lStack_198;
      plStack_100 = (long *)uStack_1a0;
      lVar20 = 0x20;
      plStack_e8 = (long *)lStack_188;
      puStack_f0 = (undefined8 *)lStack_190;
      plStack_d8 = (long *)lStack_178;
      puStack_e0 = puStack_180;
      lStack_148 = lVar19;
      puStack_140 = puVar15;
      while (puVar6 = puStack_138, func_0x0001048ee110(&puStack_a0,&puStack_110),
            puStack_a0 != (undefined4 *)0x8000000000000003) {
        if (puVar6 == (undefined8 *)lStack_148) {
          uVar12 = 0;
          if (puStack_110 != (undefined8 *)0x0) {
            uVar12 = (long)plStack_f8 - uStack_108 >> 5;
          }
          lVar19 = 1;
          if (puStack_f0 != (undefined8 *)0x0) {
            lVar19 = ((ulong)((long)plStack_d8 - (long)plStack_e8) >> 5) + 1;
          }
          FUN_1089a4f48(&lStack_148,puVar6,uVar12 + lVar19,8,0x20);
          puVar15 = puStack_140;
        }
        puVar18 = (undefined8 *)((long)puVar15 + lVar20);
        puVar18[1] = uStack_98;
        *puVar18 = puStack_a0;
        puVar18[3] = uStack_88;
        puVar18[2] = uStack_90;
        puStack_138 = (undefined8 *)((long)puVar6 + 1);
        lVar20 = lVar20 + 0x20;
      }
      func_0x00010499f8dc(&puStack_110);
LAB_1048f065c:
      extraout_x8[2] = puVar7;
      extraout_x8[3] = 4;
      extraout_x8[4] = lStack_148;
      extraout_x8[5] = puVar15;
      extraout_x8[6] = puVar6;
      *(undefined1 *)(extraout_x8 + 7) = 2;
      extraout_x8[1] = 4;
      *extraout_x8 = 0x8000000000000000;
      return;
    }
LAB_1048f06b8:
    func_0x0001087c9084(uVar8,uVar12);
LAB_1048f06c4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1048f06c8);
    (*pcVar5)();
  }
  if (uVar12 == 2) goto LAB_1048f03d4;
  uVar12 = param_2[1];
  uVar11 = param_2[2];
  bVar1 = *(byte *)((long)param_2 + 0x19);
  bVar2 = *(byte *)((long)param_2 + 0x1a);
  puVar6 = (undefined8 *)_malloc(0x38);
  if (puVar6 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
LAB_1089a369c:
    FUN_1089a4f48(&uStack_118,unaff_x22,uVar11,8,0x38);
    unaff_x22 = uStack_108;
  }
  else {
    *puVar6 = 0x8000000000000000;
    *(undefined1 *)(puVar6 + 6) = 0;
    uStack_118 = 1;
    uStack_108 = 1;
    plStack_a8 = (long *)0x8000000000000000;
    puStack_b0 = (undefined8 *)0x8000000000000002;
    uVar22 = (undefined7)(in_stack_ffffffffffffff80 >> 8);
    puStack_110 = puVar6;
    func_0x0001089a4d98(&uStack_118);
    puStack_110[8] = plStack_a8;
    puStack_110[7] = puStack_b0;
    puStack_110[10] = uStack_98;
    puStack_110[9] = puStack_a0;
    puStack_110[0xc] = uStack_88;
    puStack_110[0xb] = uStack_90;
    puStack_110[0xd] = CONCAT71(uVar22,1);
    unaff_x22 = 2;
    uStack_108 = 2;
    if ((bVar2 & 1) == 0) {
      puStack_b0 = (undefined8 *)0x8000000000000004;
      if (uStack_118 == 2) {
        func_0x0001089a4d98(&uStack_118);
      }
      puStack_110[0xf] = plStack_a8;
      puStack_110[0xe] = puStack_b0;
      puStack_110[0x11] = uStack_98;
      puStack_110[0x10] = puStack_a0;
      puStack_110[0x13] = uStack_88;
      puStack_110[0x12] = uStack_90;
      puStack_110[0x14] = CONCAT71(uVar22,1);
      unaff_x22 = 3;
      uStack_108 = 3;
    }
    if ((bVar1 & 1) == 0) {
      puStack_b0 = (undefined8 *)0x8000000000000003;
      if (unaff_x22 == uStack_118) {
        func_0x0001089a4d98(&uStack_118);
      }
      puVar6 = puStack_110 + unaff_x22 * 7;
      puVar6[6] = CONCAT71(uVar22,1);
      puVar6[3] = uStack_98;
      puVar6[2] = puStack_a0;
      puVar6[5] = uStack_88;
      puVar6[4] = uStack_90;
      puVar6[1] = plStack_a8;
      *puVar6 = puStack_b0;
      unaff_x22 = unaff_x22 + 1;
      uStack_108 = unaff_x22;
    }
    in_stack_ffffffffffffff80 = CONCAT71(uVar22,1);
    puStack_138 = param_1;
    if (uStack_118 - unaff_x22 < uVar11) goto LAB_1089a369c;
    if (uVar11 == 0) {
      bVar13 = true;
      uStack_108 = unaff_x22;
      puVar10 = (undefined4 *)_malloc(4);
      puVar7 = puStack_a0;
      goto joined_r0x0001089a33f4;
    }
  }
  plVar16 = (long *)(uVar12 + 0x10);
  puVar6 = puStack_110 + unaff_x22 * 7 + 6;
  uStack_120 = uVar11;
  do {
    lVar19 = plVar16[-1];
    lVar20 = *plVar16;
    if (lVar20 == 0) {
      lVar9 = 1;
    }
    else {
      lVar9 = _malloc(lVar20);
      if (lVar9 == 0) {
        func_0x0001087c9084(1,lVar20);
        goto LAB_1089a36d0;
      }
    }
    plVar16 = plVar16 + 3;
    _memcpy(lVar9,lVar19,lVar20);
    uVar3 = uStack_120;
    puVar6[-6] = 0x8000000000000005;
    puVar6[-5] = lVar20;
    unaff_x22 = unaff_x22 + 1;
    puVar6[-4] = lVar9;
    puVar6[-3] = lVar20;
    *(undefined1 *)puVar6 = 1;
    uVar11 = uVar11 - 1;
    puVar6 = puVar6 + 7;
  } while (uVar11 != 0);
  bVar13 = false;
  uStack_108 = unaff_x22;
  puVar10 = (undefined4 *)_malloc(4);
  uVar11 = uVar3;
  puVar7 = puStack_a0;
joined_r0x0001089a33f4:
  puStack_a0 = puVar10;
  uVar8 = 4;
  if (puStack_a0 != (undefined4 *)0x0) {
    *puStack_a0 = 0x7469672e;
    plStack_a8 = (long *)0x4;
    puStack_b0 = (undefined8 *)0x8000000000000002;
    uStack_98 = 4;
    FUN_104901c60(&uStack_118,&puStack_b0);
    uVar8 = 7;
    puVar10 = (undefined4 *)_malloc(7);
    puVar7 = puStack_a0;
    if (puVar10 != (undefined4 *)0x0) {
      *(undefined4 *)((long)puVar10 + 3) = 0x73746e65;
      *puVar10 = 0x6567612e;
      plStack_a8 = (long *)0x7;
      puStack_b0 = (undefined8 *)0x8000000000000002;
      uStack_98 = 7;
      puStack_a0 = puVar10;
      FUN_104901c60(&uStack_118,&puStack_b0);
      uVar8 = 6;
      puVar10 = (undefined4 *)_malloc(6);
      puVar7 = puStack_a0;
      if (puVar10 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar10 + 1) = 0x7865;
        *puVar10 = 0x646f632e;
        plStack_a8 = (long *)0x6;
        puStack_b0 = (undefined8 *)0x8000000000000002;
        uStack_98 = 6;
        puStack_a0 = puVar10;
        FUN_104901c60(&uStack_118,&puStack_b0);
        if (!bVar13) {
          uStack_130 = uVar12 + uVar11 * 0x18;
          do {
            uStack_120 = uVar12;
            FUN_104900a24(&puStack_b0,*(undefined8 *)(uVar12 + 8),*(undefined8 *)(uVar12 + 0x10),0);
            plVar4 = plStack_a8;
            plVar21 = plStack_a8 + (long)puStack_a0 * 3;
            plStack_100 = plStack_a8;
            puStack_128 = puStack_b0;
            puStack_f0 = puStack_b0;
            plVar16 = plStack_a8;
            plVar17 = plStack_a8;
            plStack_e8 = plVar21;
            if (puStack_a0 == (undefined4 *)0x0) {
LAB_1089a3570:
              plStack_f8 = plVar16;
              if ((long)plVar21 - (long)plVar16 != 0) {
                uVar12 = (ulong)((long)plVar21 - (long)plVar16) / 0x18;
                plVar16 = plVar16 + 1;
                do {
                  if (plVar16[-1] != 0) {
                    _free(*plVar16);
                  }
                  plVar16 = plVar16 + 3;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
            }
            else {
              do {
                uVar12 = uStack_108;
                puVar6 = puStack_110;
                plVar16 = plVar17 + 3;
                plVar14 = (long *)*plVar17;
                if (plVar14 == (long *)0x8000000000000000) goto LAB_1089a3570;
                uStack_c8 = plVar17[2];
                puStack_d0 = (undefined4 *)plVar17[1];
                puStack_e0 = (undefined8 *)0x8000000000000005;
                lVar19 = uStack_108 * 0x38;
                puVar18 = puStack_110;
                plStack_d8 = plVar14;
                do {
                  if (lVar19 == 0) {
                    plStack_a8 = plStack_d8;
                    puStack_b0 = puStack_e0;
                    uStack_98 = uStack_c8;
                    puStack_a0 = puStack_d0;
                    uStack_88 = uStack_b8;
                    uStack_90 = uStack_c0;
                    in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffffffffffff00;
                    if (uVar12 == uStack_118) {
                      func_0x0001089a4d98(&uStack_118);
                      puVar6 = puStack_110;
                    }
                    puVar15 = puVar6 + uVar12 * 7;
                    puVar15[1] = (ulong)plStack_a8;
                    *puVar15 = (ulong)puStack_b0;
                    puVar15[3] = uStack_98;
                    puVar15[2] = (ulong)puStack_a0;
                    puVar15[5] = uStack_88;
                    puVar15[4] = uStack_90;
                    puVar15[6] = in_stack_ffffffffffffff80;
                    uStack_108 = uVar12 + 1;
                    goto LAB_1089a35e4;
                  }
                  uVar11 = FUN_1048ff77c(puVar18,&puStack_e0);
                  puVar18 = puVar18 + 7;
                  lVar19 = lVar19 + -0x38;
                } while ((uVar11 & 1) == 0);
                if (plVar14 != (long *)0x0) {
                  _free(puStack_d0);
                }
LAB_1089a35e4:
                plVar17 = plVar16;
              } while (plVar16 != plVar21);
            }
            if (puStack_128 != (undefined8 *)0x0) {
              _free(plVar4);
            }
            uVar12 = uStack_120 + 0x18;
          } while (uVar12 != uStack_130);
        }
        puStack_138[3] = puStack_110;
        puStack_138[2] = uStack_118;
        puStack_138[4] = uStack_108;
        *(undefined1 *)(puStack_138 + 5) = 0;
        *puStack_138 = 0;
        return;
      }
    }
  }
  puStack_a0 = puVar7;
  func_0x0001087c9084(1,uVar8);
LAB_1089a36d0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1089a36d4);
  (*pcVar5)();
}

