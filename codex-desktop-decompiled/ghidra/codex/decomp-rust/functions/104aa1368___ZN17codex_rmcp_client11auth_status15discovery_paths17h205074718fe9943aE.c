
void __ZN17codex_rmcp_client11auth_status15discovery_paths17h205074718fe9943aE
               (long *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long *plVar10;
  long *extraout_x8;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long unaff_x23;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined1 auVar27 [16];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  byte *pbStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  pbVar14 = (byte *)0x0;
  do {
    pbVar9 = param_3 + param_2;
    pbVar11 = param_3;
    if (pbVar14 == param_3) break;
    pbVar9 = pbVar14 + param_2;
    pbVar16 = pbVar9 + 1;
    uVar12 = (uint)*pbVar9;
    if ((char)*pbVar9 < '\0') {
      if (uVar12 < 0xe0) {
        pbVar16 = pbVar9 + 2;
        uVar12 = pbVar9[1] & 0x3f | (uVar12 & 0x1f) << 6;
      }
      else {
        uVar15 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (uVar12 < 0xf0) {
          pbVar16 = pbVar9 + 3;
          uVar12 = uVar15 | (uVar12 & 0x1f) << 0xc;
        }
        else {
          pbVar16 = pbVar9 + 4;
          uVar12 = pbVar9[3] & 0x3f | uVar15 << 6 | (uVar12 & 7) << 0x12;
        }
      }
    }
    pbVar11 = pbVar14;
    pbVar14 = pbVar16 + ((long)param_3 - (long)(param_3 + param_2));
  } while (uVar12 == 0x2f);
  pbStack_f0 = pbVar11 + param_2;
  lVar13 = (long)param_3 - (long)pbVar11;
  do {
    lVar26 = lVar13;
    if (lVar26 == 0) break;
    pbVar14 = pbStack_f0 + lVar26 + -1;
    uVar12 = (uint)(char)*pbVar14;
    if ((int)uVar12 < 0) {
      pbVar14 = pbStack_f0 + lVar26 + -2;
      bVar2 = *pbVar14;
      if ((char)bVar2 < -0x40) {
        pbVar14 = pbStack_f0 + lVar26 + -3;
        bVar3 = *pbVar14;
        if ((char)bVar3 < -0x40) {
          pbVar14 = pbStack_f0 + lVar26 + -4;
          uVar15 = bVar3 & 0x3f | (*pbVar14 & 7) << 6;
        }
        else {
          uVar15 = (int)(char)bVar3 & 0xf;
        }
        uVar15 = bVar2 & 0x3f | uVar15 << 6;
      }
      else {
        uVar15 = (int)(char)bVar2 & 0x1f;
      }
      uVar12 = uVar12 & 0x3f | uVar15 << 6;
    }
    lVar13 = (long)pbVar14 - (long)pbVar9;
  } while (uVar12 == 0x2f);
  lStack_e8 = lVar26;
  puStack_d8 = (undefined8 *)_malloc(0x27);
  if (puStack_d8 == (undefined8 *)0x0) {
    uVar8 = func_0x0001087c9084(1,0x27);
    if (unaff_x23 != 0) {
      _free(lVar26);
    }
    func_0x000104ad55c0(&lStack_c8);
    plVar10 = (long *)__Unwind_Resume(uVar8);
    lVar13 = *plVar10;
    if (lVar13 == -0x8000000000000000) {
      *extraout_x8 = -0x8000000000000000;
    }
    else {
      plVar1 = (long *)plVar10[1];
      lStack_188 = 0;
      lStack_180 = 8;
      lStack_178 = 0;
      plVar25 = plVar1 + plVar10[2] * 3;
      plVar19 = plVar1;
      plVar24 = plVar1;
      plStack_170 = plVar1;
      lStack_160 = lVar13;
      plStack_158 = plVar25;
      if (plVar10[2] == 0) {
LAB_104aa14bc:
        plStack_168 = plVar19;
        if ((long)plVar25 - (long)plVar19 != 0) {
          uVar17 = (ulong)((long)plVar25 - (long)plVar19) / 0x18;
          plVar19 = plVar19 + 1;
          do {
            if (plVar19[-1] != 0) {
              _free(*plVar19);
            }
            plVar19 = plVar19 + 3;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      else {
        do {
          plVar19 = plVar24 + 3;
          lVar26 = *plVar24;
          if (lVar26 == -0x8000000000000000) goto LAB_104aa14bc;
          lVar23 = plVar24[1];
          auVar27 = func_0x000104ada148(lVar23,plVar24[2]);
          lVar20 = auVar27._8_8_;
          if (lVar20 != 0) {
            lVar21 = _malloc(lVar20);
            if (lVar21 == 0) {
              plStack_168 = plVar19;
              func_0x0001087c9084(1,lVar20);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x104aa157c);
              (*pcVar6)();
            }
            _memcpy(lVar21,auVar27._0_8_,lVar20);
            lVar5 = lStack_178;
            lVar18 = lStack_180;
            if (lStack_178 != 0) {
              lVar22 = lStack_178 * 0x18;
              plVar10 = (long *)(lStack_180 + 0x10);
              do {
                if ((*plVar10 == lVar20) && (iVar7 = _memcmp(plVar10[-1],lVar21,lVar20), iVar7 == 0)
                   ) {
                  _free(lVar21);
                  goto joined_r0x000104aa147c;
                }
                plVar10 = plVar10 + 3;
                lVar22 = lVar22 + -0x18;
              } while (lVar22 != 0);
            }
            if (lVar5 == lStack_188) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_188);
              lVar18 = lStack_180;
            }
            plVar10 = (long *)(lVar18 + lVar5 * 0x18);
            *plVar10 = lVar20;
            plVar10[1] = lVar21;
            plVar10[2] = lVar20;
            lStack_178 = lVar5 + 1;
          }
joined_r0x000104aa147c:
          if (lVar26 != 0) {
            _free(lVar23);
          }
          plVar24 = plVar19;
        } while (plVar19 != plVar25);
      }
      if (lVar13 != 0) {
        _free(plVar1);
      }
      if (lStack_178 == 0) {
        *extraout_x8 = -0x8000000000000000;
        if (lStack_188 != 0) {
          _free(lStack_180);
        }
      }
      else {
        extraout_x8[1] = lStack_180;
        *extraout_x8 = lStack_188;
        extraout_x8[2] = lStack_178;
      }
    }
    return;
  }
  puStack_d8[1] = 0x75616f2f6e776f6e;
  *puStack_d8 = 0x6b2d6c6c65772e2f;
  puStack_d8[3] = 0x6e6f6974617a6972;
  puStack_d8[2] = 0x6f687475612d6874;
  *(undefined8 *)((long)puStack_d8 + 0x1f) = 0x7265767265732d6e;
  lStack_e0 = 0x27;
  lStack_d0 = 0x27;
  if (lVar26 == 0) {
    plVar10 = (long *)_malloc(0x18);
    if (plVar10 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104aa12f4);
      (*pcVar6)();
    }
    plVar10[1] = (long)puStack_d8;
    *plVar10 = lStack_e0;
    plVar10[2] = lStack_d0;
    lStack_b8 = 1;
    *param_1 = 1;
    param_1[1] = (long)plVar10;
  }
  else {
    lStack_c8 = 0;
    lStack_c0 = 8;
    lStack_b8 = 0;
    plStack_98 = &lStack_e0;
    puStack_90 = &DAT_104b149a8;
    puStack_80 = &DAT_104ac4cf8;
    puStack_88 = (undefined1 *)&pbStack_f0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_b0,s___108ab8993,&plStack_98);
    lVar26 = lStack_b8;
    lVar13 = lStack_c0;
    if (lStack_b8 != 0) {
      lVar23 = lStack_b8 * 0x18;
      plVar10 = (long *)(lStack_c0 + 0x10);
      do {
        if ((*plVar10 == lStack_a0) &&
           (iVar7 = _memcmp(plVar10[-1],lStack_a8,lStack_a0), iVar7 == 0)) {
          if (lStack_b0 != 0) {
            _free(lStack_a8);
          }
          goto LAB_104aa1144;
        }
        plVar10 = plVar10 + 3;
        lVar23 = lVar23 + -0x18;
      } while (lVar23 != 0);
    }
    if (lVar26 == lStack_c8) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_c8);
      lVar13 = lStack_c0;
    }
    plVar10 = (long *)(lVar13 + lVar26 * 0x18);
    *plVar10 = lStack_b0;
    plVar10[1] = lStack_a8;
    plVar10[2] = lStack_a0;
    lStack_b8 = lVar26 + 1;
LAB_104aa1144:
    puStack_90 = &DAT_104ac4cf8;
    plStack_98 = (long *)&pbStack_f0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_78,s______well_known_oauth_authorizat_108b05556,&plStack_98);
    lVar13 = lStack_b8;
    lVar26 = lStack_c0;
    if (lStack_b8 != 0) {
      lVar23 = lStack_b8 * 0x18;
      plVar10 = (long *)(lStack_c0 + 0x10);
      do {
        if ((*plVar10 == lStack_68) &&
           (iVar7 = _memcmp(plVar10[-1],lStack_70,lStack_68), iVar7 == 0)) {
          lVar26 = lStack_e0;
          puVar4 = puStack_d8;
          lVar23 = lStack_d0;
          lVar20 = lStack_c0;
          if (lStack_78 != 0) {
            _free(lStack_70);
            lVar13 = lStack_b8;
            lVar26 = lStack_e0;
            puVar4 = puStack_d8;
            lVar23 = lStack_d0;
            lVar20 = lStack_c0;
          }
          goto joined_r0x000104aa11c8;
        }
        plVar10 = plVar10 + 3;
        lVar23 = lVar23 + -0x18;
      } while (lVar23 != 0);
    }
    if (lVar13 == lStack_c8) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_c8);
      lVar26 = lStack_c0;
    }
    plVar10 = (long *)(lVar26 + lVar13 * 0x18);
    *plVar10 = lStack_78;
    plVar10[1] = lStack_70;
    plVar10[2] = lStack_68;
    lStack_b8 = lVar13 + 1;
    lVar13 = lStack_b8;
    lVar26 = lStack_e0;
    puVar4 = puStack_d8;
    lVar23 = lStack_d0;
    lVar20 = lStack_c0;
joined_r0x000104aa11c8:
    lStack_e0 = lVar26;
    puStack_d8 = puVar4;
    lStack_d0 = lVar23;
    lStack_c0 = lVar20;
    if (lVar13 != 0) {
      lVar21 = lVar13 * 0x18;
      plVar10 = (long *)(lVar20 + 0x10);
      do {
        if ((*plVar10 == lVar23) && (iVar7 = _memcmp(plVar10[-1],puVar4,lVar23), iVar7 == 0)) {
          if (lVar26 != 0) {
            _free(puVar4);
          }
          goto LAB_104aa128c;
        }
        plVar10 = plVar10 + 3;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != 0);
    }
    if (lVar13 == lStack_c8) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_c8);
      lVar20 = lStack_c0;
    }
    plVar10 = (long *)(lVar20 + lVar13 * 0x18);
    *plVar10 = lVar26;
    plVar10[1] = (long)puVar4;
    plVar10[2] = lVar23;
    lStack_b8 = lVar13 + 1;
LAB_104aa128c:
    param_1[1] = lStack_c0;
    *param_1 = lStack_c8;
  }
  param_1[2] = lStack_b8;
  return;
}

