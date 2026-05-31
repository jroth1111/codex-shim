
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN17codex_core_skills9injection32extract_tool_mentions_with_sigil17he26384bde5c1a539E
               (undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uStack_128;
  undefined *puStack_118;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  pauVar6 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar6[1][0] == '\x01') {
    auStack_e0 = *pauVar6;
  }
  else {
    auStack_e0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auStack_e0._8_8_;
    pauVar6[1][0] = 1;
  }
  uStack_a8 = auStack_e0._8_8_;
  lVar8 = auStack_e0._0_8_;
  lStack_b0 = lVar8 + 1;
  uStack_f8 = 0;
  puStack_100 = &UNK_108c56c70;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_80 = lVar8 + 2;
  uStack_c8 = 0;
  puStack_d0 = &UNK_108c56c70;
  uStack_b8 = 0;
  uStack_c0 = 0;
  *(long *)*pauVar6 = lVar8 + 3;
  uStack_98 = 0;
  puStack_a0 = &UNK_108c56c70;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = uStack_a8;
  if (param_3 == 0) {
LAB_1039cc074:
    param_1[1] = uStack_f8;
    *param_1 = puStack_100;
    param_1[3] = uStack_e8;
    param_1[2] = uStack_f0;
    *(undefined1 (*) [16])(param_1 + 4) = auStack_e0;
    param_1[7] = uStack_c8;
    param_1[6] = puStack_d0;
    param_1[9] = uStack_b8;
    param_1[8] = uStack_c0;
    param_1[0xb] = uStack_a8;
    param_1[10] = lStack_b0;
    param_1[0xf] = uStack_88;
    param_1[0xe] = uStack_90;
    param_1[0x11] = uStack_78;
    param_1[0x10] = lStack_80;
    param_1[0xd] = uStack_98;
    param_1[0xc] = puStack_a0;
    return;
  }
  puStack_118 = &UNK_10b2dd998;
  uVar7 = 0;
LAB_1039cbd7c:
  bVar5 = *(byte *)(param_2 + uVar7);
  uVar1 = uVar7 + 1;
  if (((((bVar5 == 0x5b) && (uVar1 < param_3)) &&
       (uVar12 = uVar7 + 2, (uint)*(byte *)(param_2 + uVar1) == (param_4 & 0xff) && uVar12 < param_3
       )) && ((bVar3 = *(byte *)(param_2 + uVar12),
              bVar3 - 0x30 < 10 || (bVar3 & 0xffffffdf) - 0x41 < 0x1a ||
              ((bVar3 - 0x2d < 0x33 &&
               ((1L << ((ulong)(bVar3 - 0x2d) & 0x3f) & 0x4000000002001U) != 0)))))) &&
     (uVar13 = uVar7 + 3, uVar13 < param_3)) {
    pcVar9 = (char *)(param_2 + 5 + uVar7);
    do {
      bVar3 = *(byte *)(param_2 + uVar13);
      uVar11 = (uint)bVar3;
      if (9 < uVar11 - 0x30 && 0x19 < (uVar11 & 0xffffffdf) - 0x41) {
        if (uVar11 < 0x5d) {
          if ((bVar3 != 0x2d) && (bVar3 != 0x3a)) break;
        }
        else if (bVar3 != 0x5f) {
          uVar14 = uVar13 + 1;
          if (bVar3 == 0x5d && uVar14 < param_3) goto LAB_1039cbf70;
          break;
        }
      }
      uVar13 = uVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (param_3 != uVar13);
  }
  goto LAB_1039cbdac;
  while( true ) {
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003600U) == 0) {
      uVar2 = uVar14 + 1;
      uStack_128 = uVar2;
      if ((ulong)bVar3 == 0x28 && uVar2 < param_3) goto LAB_1039cbfbc;
      break;
    }
    uVar14 = uVar14 + 1;
    pcVar9 = pcVar9 + 1;
    if (param_3 == uVar14) break;
LAB_1039cbf70:
    bVar3 = *(byte *)(param_2 + uVar14);
    if (0x28 < bVar3) break;
  }
  goto LAB_1039cbdac;
  while (uStack_128 = uStack_128 + 1, pcVar9 = pcVar9 + 1, uStack_128 < param_3) {
LAB_1039cbfbc:
    if (*pcVar9 == ')') {
      lVar8 = func_0x0001039cf048(uVar2,uStack_128,param_2,param_3);
      if (lVar8 == 0) {
        uVar12 = uVar14 + 1;
        puStack_118 = &UNK_10b2dd980;
        uVar13 = uStack_128;
      }
      else {
        auVar15 = func_0x0001039cecd8();
        lVar8 = auVar15._8_8_;
        if (lVar8 == 0) break;
        auVar16 = func_0x0001039cf048(uVar12,uVar13,param_2,param_3);
        if (auVar16._0_8_ != 0) {
          uVar7 = func_0x0001039c9eb4();
          uVar12 = uStack_128 + 1;
          if ((uVar7 & 1) == 0) {
            bVar5 = __ZN17codex_core_skills9injection18tool_kind_for_path17h3bfd9ca2a9242447E
                              (auVar15._0_8_,lVar8);
            if (2 < bVar5) {
              func_0x0001039d8de0(&puStack_100,auVar16._0_8_,auVar16._8_8_);
            }
            func_0x0001039d8de0(&puStack_d0,auVar15._0_8_,lVar8);
          }
          goto LAB_1039cbd74;
        }
      }
      uStack_128 = uVar13;
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                (param_2,param_3,uVar12,uStack_128,puStack_118);
      goto LAB_1039cc134;
    }
  }
LAB_1039cbdac:
  uVar12 = uVar1;
  if (((uint)bVar5 == (param_4 & 0xff)) && (uVar1 < param_3)) {
    bVar5 = *(byte *)(param_2 + uVar1);
    if ((bVar5 - 0x30 < 10 || (bVar5 & 0xffffffdf) - 0x41 < 0x1a) ||
       (bVar5 - 0x2d < 0x33 && (1L << ((ulong)(bVar5 - 0x2d) & 0x3f) & 0x4000000002001U) != 0)) {
      uVar12 = uVar7 + 2;
      if (uVar12 < param_3) {
        do {
          bVar3 = *(byte *)(param_2 + uVar12);
          if ((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
             (0x32 < bVar3 - 0x2d || (1L << ((ulong)(bVar3 - 0x2d) & 0x3f) & 0x4000000002001U) == 0)
             ) {
            bVar10 = true;
            goto LAB_1039cbe58;
          }
          uVar12 = uVar12 + 1;
        } while (param_3 != uVar12);
        bVar10 = false;
        uVar12 = param_3;
      }
      else {
        bVar10 = false;
      }
LAB_1039cbe58:
      lVar8 = uVar12 - uVar1;
      if ((uVar12 < uVar1) || ((uVar1 != 0 && ((char)bVar5 < -0x40)))) {
LAB_1039cc0e4:
        __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                  (param_2,param_3,uVar1,uVar12,&UNK_10b2dd9b0);
LAB_1039cc134:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1039cc138);
        (*pcVar4)();
      }
      if (bVar10) {
        if (*(char *)(param_2 + uVar12) < -0x40) goto LAB_1039cc0e4;
      }
      else if (uVar12 != param_3) goto LAB_1039cc0e4;
      uVar7 = func_0x0001039c9eb4(param_2 + uVar1,lVar8);
      if ((uVar7 & 1) == 0) {
        func_0x0001039d8de0(&puStack_100,param_2 + uVar1,lVar8);
        func_0x0001039d8de0(&puStack_a0,param_2 + uVar1,lVar8);
      }
    }
  }
LAB_1039cbd74:
  uVar7 = uVar12;
  if (param_3 <= uVar12) goto LAB_1039cc074;
  goto LAB_1039cbd7c;
}

