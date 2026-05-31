
void __ZN15codex_code_mode11description27build_exec_tool_description17h9c69fa0e103f891cE
               (undefined8 *param_1,long param_2,long param_3,long *param_4,ulong param_5,
               ulong param_6)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  long lStack_1c0;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  
  lStack_188 = 0;
  puStack_180 = (undefined8 *)0x8;
  lStack_178 = 0;
  lVar23 = 0xb70;
  lVar11 = _malloc(0xb70);
  if (lVar11 == 0) {
LAB_1028be290:
    uVar14 = 1;
LAB_1028be294:
    func_0x0001087c9084(uVar14,lVar23);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1028be2a0);
    (*pcVar8)();
  }
  _memcpy(lVar11,&UNK_108d446cf,0xb70);
  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_188);
  *puStack_180 = 0xb70;
  puStack_180[1] = lVar11;
  puStack_180[2] = 0xb70;
  lVar11 = 1;
  lStack_178 = 1;
  if ((param_6 & 1) != 0) {
    lVar23 = 0xcd;
    puVar12 = (undefined8 *)_malloc(0xcd);
    if (puVar12 == (undefined8 *)0x0) goto LAB_1028be290;
    puVar12[0x15] = 0x60534c4f4f545f4c;
    puVar12[0x14] = 0x4c4160207265746c;
    puVar12[0x17] = 0x6020646e61206065;
    puVar12[0x16] = 0x6d616e6020796220;
    *(undefined8 *)((long)puVar12 + 0xc5) = 0x2e606e6f69747069;
    *(undefined8 *)((long)puVar12 + 0xbd) = 0x7263736564602064;
    puVar12[0xd] = 0x6f2060736c6f6f74;
    puVar12[0xc] = 0x60206c61626f6c67;
    puVar12[0xf] = 0x64657473696c2064;
    puVar12[0xe] = 0x6e61207463656a62;
    puVar12[0x11] = 0x2e60534c4f4f545f;
    puVar12[0x10] = 0x4c4c4160206e6920;
    puVar12[0x13] = 0x6966202c656e6f20;
    puVar12[0x12] = 0x646e6966206f540a;
    puVar12[5] = 0x6874206d6f726620;
    puVar12[4] = 0x64657474696d6f20;
    puVar12[7] = 0x202e6e6f69747069;
    puVar12[6] = 0x7263736564207369;
    puVar12[9] = 0x61206c6c69747320;
    puVar12[8] = 0x6572612079656854;
    puVar12[0xb] = 0x20656874206e6f20;
    puVar12[10] = 0x656c62616c696176;
    puVar12[1] = 0x2f50434d20646574;
    *puVar12 = 0x73656e20656d6f53;
    puVar12[3] = 0x65622079616d2073;
    puVar12[2] = 0x6c6f6f7420707061;
    if (lStack_188 == 1) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_188);
    }
    puStack_180[3] = 0xcd;
    puStack_180[4] = puVar12;
    puStack_180[5] = 0xcd;
    lVar11 = 2;
    lStack_178 = 2;
  }
  if ((param_5 & 1) == 0) {
    func_0x0001028d9778(&plStack_88,puStack_180,lVar11,&UNK_108d4530c,2);
    puVar12 = puStack_180;
    param_1[1] = puStack_80;
    *param_1 = plStack_88;
    param_1[2] = puStack_78;
    if (lStack_178 != 0) {
      puVar21 = puStack_180 + 1;
      lVar11 = lStack_178;
      do {
        if (puVar21[-1] != 0) {
          _free(*puVar21);
        }
        puVar21 = puVar21 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  else {
    if (param_3 != 0) {
      lVar23 = param_3 * 0x18;
      lStack_168 = _malloc(lVar23);
      if (lStack_168 == 0) {
        uVar14 = 8;
        goto LAB_1028be294;
      }
      lStack_160 = 0;
      lVar23 = param_3 * 0xf8;
      lVar11 = param_2;
      lStack_170 = param_3;
      do {
        lVar15 = lVar23;
        if (lVar15 == 0) break;
        plVar18 = (long *)0x0;
        if (*(long *)(lVar11 + 0xa8) != -0x7ffffffffffffffb) {
          plVar18 = (long *)(lVar11 + 0xa8);
        }
        lVar13 = func_0x0001028be3e4(plVar18);
        lVar11 = lVar11 + 0xf8;
        lVar23 = lVar15 + -0xf8;
      } while (lVar13 == 0);
      lVar20 = 0;
      lVar11 = *param_4;
      lVar23 = param_4[1];
      lVar13 = param_2 + 0xf8;
      lVar19 = param_2;
      do {
        lVar16 = lVar13;
        uVar14 = *(undefined8 *)(lVar19 + 8);
        lVar13 = *(long *)(lVar19 + 0x10);
        func_0x0001028bf464(&lStack_158,lVar19);
        if ((*(long *)(lVar19 + 0x30) != -0x8000000000000000) && (lVar11 != 0)) {
          uVar4 = *(undefined8 *)(lVar19 + 0x38);
          uVar5 = *(ulong *)(lVar19 + 0x40);
          lVar19 = lVar11;
          lStack_190 = lVar23;
          while( true ) {
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x322);
            lVar25 = uVar22 * 0x18;
            uVar24 = 0xffffffffffffffff;
            lVar17 = lVar19 + 0x218;
            plVar18 = (long *)(lVar19 + -0x30);
            do {
              plVar26 = plVar18;
              if (lVar25 == 0) {
                if (lStack_190 != 0) goto LAB_1028bddf4;
                goto LAB_1028bde08;
              }
              uVar6 = *(ulong *)(lVar17 + 0x10);
              uVar2 = uVar5;
              if (uVar6 <= uVar5) {
                uVar2 = uVar6;
              }
              iVar10 = _memcmp(uVar4,*(undefined8 *)(lVar17 + 8),uVar2);
              lVar3 = uVar5 - uVar6;
              if (iVar10 != 0) {
                lVar3 = (long)iVar10;
              }
              cVar1 = 0 < lVar3;
              if (lVar3 < 0) {
                cVar1 = -1;
              }
              lVar25 = lVar25 + -0x18;
              uVar24 = uVar24 + 1;
              lVar17 = lVar17 + 0x18;
              plVar18 = plVar26 + 6;
            } while (cVar1 == '\x01');
            if (cVar1 == '\0') {
              lVar19 = plVar26[7];
              lVar17 = plVar26[8];
              if ((lVar20 != 0) && (lVar17 == lStack_1c0)) {
                iVar10 = _memcmp(lVar19,lVar20,lStack_1c0);
                if (iVar10 == 0) goto LAB_1028bdec4;
              }
              auVar27 = func_0x0001028d7ff4(plVar26[10],plVar26[0xb]);
              lVar20 = lVar19;
              lStack_1c0 = lVar17;
              auStack_140 = auVar27;
              if (auVar27._8_8_ != 0) {
                puStack_80 = &DAT_1028ddd44;
                puStack_78 = (undefined8 *)auStack_140;
                puStack_70 = &DAT_1028d1904;
                plStack_88 = plVar26 + 6;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&uStack_130,s____108aee82d,&plStack_88);
                lVar19 = lStack_160;
                if (lStack_160 == lStack_170) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_170);
                }
                puVar12 = (undefined8 *)(lStack_168 + lVar19 * 0x18);
                puVar12[1] = uStack_128;
                *puVar12 = uStack_130;
                puVar12[2] = uStack_120;
                lStack_160 = lVar19 + 1;
              }
              goto LAB_1028bdec4;
            }
            uVar22 = uVar24;
            if (lStack_190 == 0) break;
LAB_1028bddf4:
            lVar19 = *(long *)(lVar19 + uVar22 * 8 + 0x328);
            lStack_190 = lStack_190 + -1;
          }
        }
LAB_1028bde08:
        lVar20 = 0;
LAB_1028bdec4:
        func_0x0001028be780(&lStack_118,uVar14,lVar13);
        uVar4 = uStack_150;
        auVar27 = func_0x0001028d7ff4(uStack_150,uStack_148);
        lVar19 = lStack_110;
        uStack_98 = uVar14;
        lStack_90 = lVar13;
        auStack_100 = auVar27;
        if (auVar27._8_8_ == 0) {
          lStack_a8 = lStack_110;
          lStack_a0 = lStack_108;
          if (lStack_108 == lVar13) {
            iVar10 = _memcmp(lStack_110,uVar14,lVar13);
            if (iVar10 != 0) goto LAB_1028be000;
            plStack_88 = &lStack_a8;
            puStack_80 = &DAT_1028d1904;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&lStack_d8,s_________108aee7a4,&plStack_88);
          }
          else {
LAB_1028be000:
            plStack_88 = &lStack_a8;
            puStack_80 = &DAT_1028d1904;
            puStack_78 = &uStack_98;
            puStack_70 = &DAT_1028d1904;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&lStack_d8,s_______________108aee7ae,&plStack_88);
          }
          lVar13 = lStack_160;
          if (lStack_160 == lStack_170) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_170);
          }
          plVar18 = (long *)(lStack_168 + lVar13 * 0x18);
          plVar18[1] = lStack_d0;
          *plVar18 = lStack_d8;
          plVar18[2] = lStack_c8;
        }
        else {
          lStack_a8 = lStack_110;
          lStack_a0 = lStack_108;
          if (lStack_108 == lVar13) {
            iVar10 = _memcmp(lStack_110,uVar14,lVar13);
            if (iVar10 != 0) goto LAB_1028bdf10;
            plStack_88 = &lStack_a8;
            puStack_80 = &DAT_1028d1904;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&lStack_d8,s_________108aee7a4,&plStack_88);
          }
          else {
LAB_1028bdf10:
            plStack_88 = &lStack_a8;
            puStack_80 = &DAT_1028d1904;
            puStack_78 = &uStack_98;
            puStack_70 = &DAT_1028d1904;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&lStack_d8,s_______________108aee7ae,&plStack_88);
          }
          plStack_88 = &lStack_d8;
          puStack_78 = (undefined8 *)auStack_100;
          puStack_80 = &DAT_1028ddd44;
          puStack_70 = &DAT_1028d1904;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_f0,s__108ac1375,&plStack_88);
          if (lStack_d8 != 0) {
            _free(lStack_d0);
          }
          lVar13 = lStack_160;
          if (lStack_160 == lStack_170) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_170);
          }
          puVar12 = (undefined8 *)(lStack_168 + lVar13 * 0x18);
          puVar12[1] = uStack_e8;
          *puVar12 = uStack_f0;
          puVar12[2] = uStack_e0;
        }
        lStack_160 = lVar13 + 1;
        if (lStack_118 != 0) {
          _free(lVar19);
        }
        if (lStack_158 != 0) {
          _free(uVar4);
        }
        bVar9 = lVar16 != param_2 + param_3 * 0xf8;
        lVar13 = 0;
        if (bVar9) {
          lVar13 = 0xf8;
        }
        lVar13 = lVar16 + lVar13;
        lVar19 = lVar16;
      } while (bVar9);
      if (lVar15 != 0) {
        plStack_88 = (long *)&UNK_10b2913b8;
        puStack_80 = &DAT_1028d1904;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_c0,s_Shared_MCP_Types_____ts_____108aee80d,&plStack_88);
        lVar11 = lStack_178;
        if (lStack_178 == lStack_188) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_188);
        }
        puVar12 = puStack_180 + lVar11 * 3;
        puVar12[1] = uStack_b8;
        *puVar12 = uStack_c0;
        puVar12[2] = uStack_b0;
        lStack_178 = lVar11 + 1;
      }
      func_0x0001028d9778(&plStack_88,lStack_168,lStack_160,&UNK_108d4530c,2);
      puVar12 = puStack_78;
      puVar7 = puStack_80;
      plVar18 = plStack_88;
      lVar11 = lStack_178;
      if (lStack_178 == lStack_188) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_188);
      }
      lVar23 = lStack_168;
      puVar21 = puStack_180 + lVar11 * 3;
      *puVar21 = plVar18;
      puVar21[1] = puVar7;
      puVar21[2] = puVar12;
      lStack_178 = lVar11 + 1;
      if (lStack_160 != 0) {
        puVar12 = (undefined8 *)(lStack_168 + 8);
        lVar11 = lStack_160;
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar11 = lStack_178;
      if (lStack_170 != 0) {
        _free(lVar23);
        lVar11 = lStack_178;
      }
    }
    func_0x0001028d9778(&plStack_88,puStack_180,lVar11,&UNK_108d4530c,2);
    puVar12 = puStack_180;
    param_1[1] = puStack_80;
    *param_1 = plStack_88;
    param_1[2] = puStack_78;
    if (lStack_178 != 0) {
      puVar21 = puStack_180 + 1;
      lVar11 = lStack_178;
      do {
        if (puVar21[-1] != 0) {
          _free(*puVar21);
        }
        puVar21 = puVar21 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  if (lStack_188 != 0) {
    _free(puVar12);
  }
  return;
}

