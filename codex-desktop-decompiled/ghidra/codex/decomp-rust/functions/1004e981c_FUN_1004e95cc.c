
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e95cc(undefined8 *param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  long *******ppppppplVar15;
  undefined1 (*pauVar16) [16];
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long lVar19;
  ulong uVar20;
  long *******ppppppplVar21;
  undefined8 uVar22;
  byte bVar23;
  long *plVar24;
  ulong uVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined1 uVar28;
  ulong uVar29;
  byte *pbVar30;
  ulong uVar31;
  long *****ppppplVar32;
  long *******ppppppplVar33;
  undefined1 auVar34 [8];
  long *******ppppppplVar35;
  long *******ppppppplVar36;
  long ******pppppplVar37;
  long *******ppppppplVar38;
  long *******unaff_x24;
  ulong *puVar39;
  long *******ppppppplVar40;
  long *****ppppplVar41;
  long lVar42;
  long ******pppppplVar43;
  ulong uVar44;
  long *******ppppppplVar45;
  byte bVar46;
  undefined8 uVar47;
  long ******pppppplVar48;
  long ******pppppplVar49;
  long ******pppppplVar50;
  long ******pppppplVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined8 uVar52;
  byte bVar58;
  undefined1 auVar59 [16];
  long *******ppppppplStack_b90;
  long *******ppppppplStack_b88;
  long *******ppppppplStack_b60;
  long *******ppppppplStack_b50;
  undefined1 *puStack_b20;
  long *******ppppppplStack_a90;
  long *******ppppppplStack_a88;
  long *******ppppppplStack_a80;
  undefined1 auStack_a78 [8];
  undefined1 auStack_a70 [16];
  long *******ppppppplStack_a60;
  long *******ppppppplStack_a58;
  long *******ppppppplStack_a50;
  long *******ppppppplStack_a48;
  long *******ppppppplStack_a40;
  long *******ppppppplStack_a38;
  long ******pppppplStack_a30;
  long ******pppppplStack_a28;
  long ******pppppplStack_a20;
  undefined1 uStack_a18;
  undefined7 uStack_a17;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  long *******ppppppplStack_7b0;
  long *******ppppppplStack_7a8;
  long *******ppppppplStack_7a0;
  long *******ppppppplStack_798;
  undefined1 auStack_790 [16];
  long *******ppppppplStack_780;
  long *******ppppppplStack_778;
  long *******ppppppplStack_770;
  long *******ppppppplStack_768;
  long *******ppppppplStack_760;
  long *******ppppppplStack_758;
  long ******pppppplStack_750;
  long ******pppppplStack_748;
  long ******pppppplStack_740;
  long ******pppppplStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  long *******ppppppplStack_510;
  long *******ppppppplStack_508;
  long *******ppppppplStack_500;
  undefined1 auStack_4f8 [16];
  long *******ppppppplStack_4e8;
  long *******ppppppplStack_4e0;
  long *******ppppppplStack_4d0;
  long *******ppppppplStack_4c8;
  long *******ppppppplStack_4c0;
  long *******ppppppplStack_4b8;
  undefined1 auStack_4b0 [16];
  long *******ppppppplStack_4a0;
  long *******ppppppplStack_498;
  long *******ppppppplStack_490;
  long *******ppppppplStack_488;
  long *******ppppppplStack_480;
  long *******ppppppplStack_478;
  long ******pppppplStack_470;
  long ******pppppplStack_468;
  long ******pppppplStack_460;
  long ******pppppplStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long ******pppppplStack_1d8;
  long ******pppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long ******pppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  undefined1 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long lStack_138;
  long ******pppppplStack_130;
  undefined *puStack_128;
  long *****ppppplStack_120;
  long *******ppppppplStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  uVar29 = *param_2;
  uVar31 = param_2[1];
  uVar44 = param_2[2];
  *param_2 = 0x8000000000000003;
  lVar19 = uVar29 + 0x7fffffffffffffff;
  if (uVar29 < 0x8000000000000001) {
    lVar19 = 1;
  }
  if (lVar19 != 0) {
    if (lVar19 != 1) {
      *param_1 = 0x8000000000000000;
      param_1[1] = &UNK_108ca29ca;
      param_1[2] = 0x25;
      return;
    }
    plVar24 = (long *)param_2[3];
    if (*plVar24 == -0x7fffffffffffffff) {
      FUN_107c05cac(&UNK_108cb185e,0x29,&UNK_10b223ef0);
    }
    else {
      puVar39 = (ulong *)plVar24[3];
      if (puVar39 != (ulong *)0x0) {
        lVar19 = plVar24[5];
        lVar42 = plVar24[6];
        uVar20 = puVar39[2];
        if ((ulong)plVar24[4] < uVar20) {
          uVar25 = uVar20;
          if (*puVar39 == uVar20) {
            thunk_FUN_108a0b6e8(puVar39,uVar20,1);
            uVar25 = puVar39[2];
          }
          *(undefined1 *)(puVar39[1] + uVar25) = 0x26;
          puVar39[2] = uVar20 + 1;
        }
        FUN_1056106d0(uVar31,uVar44,puVar39,lVar19,lVar42);
        uVar20 = puVar39[2];
        uVar44 = uVar20;
        if (*puVar39 == uVar20) {
          thunk_FUN_108a0b6e8(puVar39,uVar20,1);
          uVar44 = puVar39[2];
        }
        *(undefined1 *)(puVar39[1] + uVar44) = 0x3d;
        puVar39[2] = uVar20 + 1;
        FUN_1056106d0(param_3,param_4,puVar39,lVar19,lVar42);
        *param_2 = 0x8000000000000003;
        *param_1 = 0x8000000000000002;
        if ((uVar29 & 0x7fffffffffffffff) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(uVar31);
        return;
      }
      FUN_107c05cb0(&UNK_10b4dbf58);
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1004e97c0);
    (*pcVar7)();
  }
  if (param_4 == 0) {
    uVar44 = 1;
LAB_1004e9750:
    _memcpy(uVar44,param_3,param_4);
    *param_2 = param_4;
    param_2[1] = uVar44;
    param_2[2] = param_4;
    *param_1 = 0x8000000000000002;
    return;
  }
  uVar22 = param_3;
  uVar44 = _malloc(param_4);
  if (uVar44 != 0) goto LAB_1004e9750;
  uVar12 = FUN_107c03c64(1,param_4);
  if ((uVar29 & 0x7fffffffffffffff) != 0) {
    _free(uVar31);
  }
  auVar59 = __Unwind_Resume(uVar12);
  ppppppplVar21 = auVar59._8_8_;
  puVar13 = auVar59._0_8_;
  bVar23 = *(byte *)((long)ppppppplVar21 + 0x71);
  if (bVar23 < 3) {
    if (bVar23 != 0) {
      if (bVar23 == 1) {
        FUN_107c05cc0(&UNK_10b215428);
      }
      FUN_107c05cc4();
LAB_1004eafa0:
      FUN_107c03c64(1,unaff_x24);
      goto LAB_1004eb028;
    }
    *(undefined1 *)(ppppppplVar21 + 0xe) = 0;
    pppppplVar14 = ppppppplVar21[0xd];
    ppppppplVar21[0xb] = pppppplVar14;
    ppppppplVar21[0xc] = ppppppplVar21[10];
    *ppppppplVar21 = ppppppplVar21[8];
    ppppppplVar21[1] = ppppppplVar21[9];
    ppppppplVar21[0xf] = pppppplVar14;
    *(undefined1 *)(ppppppplVar21 + 0x33e) = 0;
LAB_1004e989c:
    ppppppplVar21[0x10] = pppppplVar14;
    __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E(ppppppplVar21 + 0x11);
    ppppplVar41 = ppppppplVar21[0x10][0x380];
    unaff_x24 = (long *******)ppppppplVar21[0x10][0x381];
    if (unaff_x24 == (long *******)0x0) {
      ppppppplVar15 = (long *******)0x1;
    }
    else {
      ppppppplVar15 = (long *******)_malloc(unaff_x24);
      if (ppppppplVar15 == (long *******)0x0) goto LAB_1004eafa0;
    }
    _memcpy(ppppppplVar15,ppppplVar41,unaff_x24);
    ppppppplStack_4d0 = unaff_x24;
    ppppppplStack_4c8 = ppppppplVar15;
    ppppppplStack_4c0 = unaff_x24;
    __ZN18codex_core_plugins7manager14PluginsManager28new_with_restriction_product17hc4ed87e9f89ea398E
              (ppppppplVar21 + 0x141,&ppppppplStack_4d0,1);
    ppppppplVar21[0x1a1] = (long ******)(ppppppplVar21 + 0x141);
    ppppppplVar21[0x1a2] = (long ******)(ppppppplVar21 + 0x11);
    *(undefined1 *)(ppppppplVar21 + 0x33d) = 0;
LAB_1004e9940:
    ppppppplStack_b88 = ppppppplVar21 + 0x33e;
    ppppppplStack_b90 = ppppppplVar21 + 0xf;
    FUN_100a7ebb0(&ppppppplStack_4d0,ppppppplVar21 + 0x1a1,uVar22);
    if (ppppppplStack_4d0 == (long *******)0x8000000000000000) {
      *(undefined1 *)ppppppplStack_b88 = 3;
    }
    else {
      ppppppplStack_a88 = ppppppplStack_4c8;
      ppppppplStack_a90 = ppppppplStack_4d0;
      auStack_a78 = (undefined1  [8])ppppppplStack_4b8;
      ppppppplStack_a80 = ppppppplStack_4c0;
      auStack_a70._8_8_ = auStack_4b0._8_8_;
      auStack_a70._0_8_ = auStack_4b0._0_8_;
      if ((*(char *)(ppppppplVar21 + 0x33d) == '\x03') &&
         (*(char *)((long)ppppppplVar21 + 0x19e2) == '\x03')) {
        FUN_100cb9114(ppppppplVar21 + 0x1a7);
        if (ppppppplVar21[0x1a4] != (long ******)0x0) {
          _free(ppppppplVar21[0x1a5]);
        }
        *(undefined1 *)((long)ppppppplVar21 + 0x19e1) = 0;
      }
      ppppppplVar15 = (long *******)auStack_a70._8_8_;
      uVar12 = auStack_a70._0_8_;
      pauVar16 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar16[1][0] == '\x01') {
        auStack_4b0 = *pauVar16;
      }
      else {
        auStack_4b0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar16 + 8) = auStack_4b0._8_8_;
        pauVar16[1][0] = 1;
      }
      *(long *)*pauVar16 = auStack_4b0._0_8_ + 1;
      ppppppplStack_4c8 = (long *******)0x0;
      ppppppplStack_4d0 = (long *******)&UNK_108c56c70;
      ppppppplStack_4b8 = (long *******)0x0;
      ppppppplStack_4c0 = (long *******)0x0;
      ppppppplVar35 = ppppppplStack_4c8;
      ppppppplVar36 = ppppppplStack_4d0;
      ppppppplVar38 = ppppppplStack_4b8;
      ppppppplVar45 = ppppppplStack_4c0;
      ppppppplVar18 = ppppppplStack_a88;
      ppppppplVar17 = ppppppplStack_a88;
      ppppppplVar40 = ppppppplStack_a80;
      auVar59 = auStack_4b0;
      if (ppppppplVar15 != (long *******)0x0) {
        ppppppplVar33 = (long *******)0x0;
        do {
          pppppplVar14 = *(long *******)(uVar12 + ((long)ppppppplVar33 * 0x10 + 0xb) * 8);
          if (pppppplVar14 != (long ******)0x0) {
            pppppplVar27 = *(long *******)(uVar12 + ((long)ppppppplVar33 * 0x10 + 10) * 8) + 2;
            do {
              ppppplVar41 = pppppplVar27[-1];
              ppppppplVar18 = (long *******)*pppppplVar27;
              if (ppppppplVar18 == (long *******)0x0) {
                ppppppplVar17 = (long *******)0x1;
              }
              else {
                ppppppplVar17 = (long *******)_malloc(ppppppplVar18);
                if (ppppppplVar17 == (long *******)0x0) {
                  FUN_107c03c64(1,ppppppplVar18);
                  goto LAB_1004eb028;
                }
              }
              _memcpy(ppppppplVar17,ppppplVar41,ppppppplVar18);
              ppppppplStack_510 = ppppppplVar18;
              ppppppplStack_508 = ppppppplVar17;
              ppppppplStack_500 = ppppppplVar18;
              FUN_1016e6d00(&ppppppplStack_4d0,&ppppppplStack_510);
              pppppplVar27 = pppppplVar27 + 3;
              pppppplVar14 = (long ******)((long)pppppplVar14 + -1);
            } while (pppppplVar14 != (long ******)0x0);
          }
          ppppppplVar33 = (long *******)((long)ppppppplVar33 + 1);
          ppppppplVar35 = ppppppplStack_4c8;
          ppppppplVar36 = ppppppplStack_4d0;
          ppppppplVar38 = ppppppplStack_4b8;
          ppppppplVar45 = ppppppplStack_4c0;
          ppppppplVar18 = ppppppplStack_a88;
          ppppppplVar17 = ppppppplStack_a88;
          ppppppplVar40 = ppppppplStack_a80;
          auVar59 = auStack_4b0;
        } while (ppppppplVar33 != ppppppplVar15);
      }
      for (; auStack_790 = auVar59, ppppppplStack_7a0 = ppppppplVar45,
          ppppppplStack_798 = ppppppplVar38, ppppppplStack_7b0 = ppppppplVar36,
          ppppppplStack_7a8 = ppppppplVar35, ppppppplVar33 = ppppppplStack_a88,
          ppppppplStack_a88 = ppppppplVar17, ppppppplVar40 != (long *******)0x0;
          ppppppplVar40 = (long *******)((long)ppppppplVar40 + -1)) {
        FUN_100cc1c58(ppppppplVar18);
        ppppppplVar35 = ppppppplStack_7a8;
        ppppppplVar36 = ppppppplStack_7b0;
        ppppppplVar38 = ppppppplStack_798;
        ppppppplVar45 = ppppppplStack_7a0;
        ppppppplVar18 = ppppppplVar18 + 0x28;
        ppppppplVar17 = ppppppplStack_a88;
        auVar59 = auStack_790;
        ppppppplStack_a88 = ppppppplVar33;
      }
      ppppppplVar18 = (long *******)uVar12;
      if (ppppppplStack_a90 != (long *******)0x0) {
        _free(ppppppplVar33);
      }
      for (; ppppppplVar15 != (long *******)0x0;
          ppppppplVar15 = (long *******)((long)ppppppplVar15 + -1)) {
        FUN_100e0649c(ppppppplVar18);
        ppppppplVar18 = ppppppplVar18 + 0x10;
      }
      if (auStack_a78 != (undefined1  [8])0x0) {
        _free(uVar12);
      }
      FUN_100e1955c(ppppppplVar21 + 0x141);
      pppppplVar14 = ppppppplVar21[0x10];
      ppppplVar41 = pppppplVar14[0x38d];
      if (ppppplVar41 != (long *****)0x0) {
        ppppplVar32 = pppppplVar14[0x38c] + 2;
        do {
          if (((ulong)ppppplVar32[1] & 1) == 0) {
            pppplVar4 = ppppplVar32[-1];
            ppppppplVar15 = (long *******)*ppppplVar32;
            if (ppppppplVar15 == (long *******)0x0) {
              ppppppplVar18 = (long *******)0x1;
            }
            else {
              ppppppplVar18 = (long *******)_malloc(ppppppplVar15);
              if (ppppppplVar18 == (long *******)0x0) {
                FUN_107c03c64(1,ppppppplVar15);
                goto LAB_1004eb028;
              }
            }
            _memcpy(ppppppplVar18,pppplVar4,ppppppplVar15);
            ppppppplStack_4d0 = ppppppplVar15;
            ppppppplStack_4c8 = ppppppplVar18;
            ppppppplStack_4c0 = ppppppplVar15;
            FUN_1016e6d00(&ppppppplStack_7b0,&ppppppplStack_4d0);
          }
          ppppplVar32 = ppppplVar32 + 4;
          ppppplVar41 = (long *****)((long)ppppplVar41 + -1);
        } while (ppppplVar41 != (long *****)0x0);
        pppppplVar14 = ppppppplVar21[0x10];
      }
      ppppplVar41 = pppppplVar14[0x38f];
      ppppplVar32 = pppppplVar14[0x390];
      if (pauVar16[1][0] == '\x01') {
        auVar59 = *pauVar16;
      }
      else {
        auVar59 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar16 + 8) = auVar59._8_8_;
        pauVar16[1][0] = 1;
      }
      *(long *)*pauVar16 = auVar59._0_8_ + 1;
      ppppppplStack_4c8 = (long *******)0x0;
      ppppppplStack_4d0 = (long *******)&UNK_108c56c70;
      ppppppplStack_4b8 = (long *******)0x0;
      ppppppplStack_4c0 = (long *******)0x0;
      if (ppppplVar32 == (long *****)0x0) {
        bVar8 = true;
        ppppppplVar15 = ppppppplStack_4c8;
        ppppppplVar18 = ppppppplStack_4d0;
        ppppppplVar17 = ppppppplStack_7b0;
        ppppppplVar40 = ppppppplStack_7a8;
        auStack_4b0 = auVar59;
      }
      else {
        ppppplVar41 = ppppplVar41 + 2;
        do {
          if (((ulong)ppppplVar41[1] & 1) == 0) {
            auStack_4b0 = auVar59;
            FUN_1016e6088(&ppppppplStack_4d0,ppppplVar41[-1],*ppppplVar41);
            auVar59 = auStack_4b0;
          }
          ppppplVar41 = ppppplVar41 + 4;
          ppppplVar32 = (long *****)((long)ppppplVar32 + -1);
        } while (ppppplVar32 != (long *****)0x0);
        bVar8 = ppppppplStack_4b8 == (long *******)0x0;
        ppppppplVar15 = ppppppplStack_4c8;
        ppppppplVar18 = ppppppplStack_4d0;
        ppppppplVar17 = ppppppplStack_7b0;
        ppppppplVar40 = ppppppplStack_7a8;
        auStack_4b0 = auVar59;
      }
      puVar5 = (undefined8 *)((ulong)&ppppppplStack_7b0 | 8);
      ppppppplStack_7b0 = ppppppplVar17;
      ppppppplStack_7a8 = ppppppplVar40;
      ppppppplStack_4d0 = ppppppplVar18;
      ppppppplStack_4c8 = ppppppplVar15;
      if (ppppppplStack_798 != (long *******)0x0) {
        uVar6 = auStack_4b0._8_8_;
        uVar12 = auStack_4b0._0_8_;
        ppppppplVar35 = ppppppplVar17 + 1;
        pppppplVar14 = *ppppppplVar17;
        uVar29 = CONCAT17(-(-1 < (long)pppppplVar14),
                          CONCAT16(-(-1 < (char)((ulong)pppppplVar14 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)pppppplVar14 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)pppppplVar14 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)pppppplVar14 >>
                                                                           0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)
                                                  pppppplVar14 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppppplVar14 >> 8)),
                                                           -(-1 < (char)pppppplVar14)))))))) &
                 0x8080808080808080;
        ppppppplVar36 = ppppppplVar17;
        ppppppplStack_b50 = ppppppplStack_798;
        ppppppplStack_b60 = ppppppplStack_7a0;
        ppppppplVar38 = ppppppplStack_798;
        if (bVar8) {
          if (uVar29 == 0) {
            lVar19 = 8;
            do {
              lVar42 = *(long *)((long)ppppppplVar17 + lVar19);
              lVar19 = lVar19 + 8;
            } while ((CONCAT17(-(-1 < lVar42),
                               CONCAT16(-(-1 < (char)((ulong)lVar42 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar42 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar42 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar42 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar42 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar42 >> 8)),
                                                           -(-1 < (char)lVar42)))))))) &
                     0x8080808080808080) == 0);
          }
        }
        else {
          do {
            while (uVar29 == 0) {
              pppppplVar14 = *ppppppplVar35;
              ppppppplVar35 = ppppppplVar35 + 1;
              ppppppplVar36 = ppppppplVar36 + -0x18;
              uVar29 = CONCAT17(-(-1 < (long)pppppplVar14),
                                CONCAT16(-(-1 < (char)((ulong)pppppplVar14 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)pppppplVar14 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)pppppplVar14 >> 0x20
                                                                        )),
                                                           CONCAT13(-(-1 < (char)((ulong)
                                                  pppppplVar14 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)pppppplVar14 >> 0x10
                                                                        )),
                                                           CONCAT11(-(-1 < (char)((ulong)
                                                  pppppplVar14 >> 8)),-(-1 < (char)pppppplVar14)))))
                                                 ))) & 0x8080808080808080;
            }
            uVar31 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar29 = uVar29 - 1 & uVar29;
            ppppppplVar45 =
                 ppppppplVar36 +
                 (long)-(int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) * 3;
            ppppppplVar38 = (long *******)((long)ppppppplVar38 + -1);
            pppppplVar14 = ppppppplVar45[-2];
            pppppplVar27 = ppppppplVar45[-1];
            uVar31 = FUN_100e8e738(uVar12,uVar6,pppppplVar14,pppppplVar27);
            lVar19 = 0;
            bVar23 = (byte)(uVar31 >> 0x39);
            while( true ) {
              uVar31 = uVar31 & (ulong)ppppppplVar15;
              uVar52 = *(undefined8 *)((long)ppppppplVar18 + uVar31);
              bVar46 = (byte)((ulong)uVar52 >> 8);
              bVar53 = (byte)((ulong)uVar52 >> 0x10);
              bVar54 = (byte)((ulong)uVar52 >> 0x18);
              bVar55 = (byte)((ulong)uVar52 >> 0x20);
              bVar56 = (byte)((ulong)uVar52 >> 0x28);
              bVar57 = (byte)((ulong)uVar52 >> 0x30);
              bVar58 = (byte)((ulong)uVar52 >> 0x38);
              for (uVar44 = CONCAT17(-(bVar58 == bVar23),
                                     CONCAT16(-(bVar57 == bVar23),
                                              CONCAT15(-(bVar56 == bVar23),
                                                       CONCAT14(-(bVar55 == bVar23),
                                                                CONCAT13(-(bVar54 == bVar23),
                                                                         CONCAT12(-(bVar53 == bVar23
                                                                                   ),CONCAT11(-(
                                                  bVar46 == bVar23),-((byte)uVar52 == bVar23))))))))
                            & 0x8080808080808080; uVar44 != 0; uVar44 = uVar44 - 1 & uVar44) {
                uVar20 = (uVar44 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar44 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = uVar31 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) &
                         (ulong)ppppppplVar15;
                if (pppppplVar27 == ppppppplVar18[uVar20 * -2 + -1]) {
                  iVar11 = _memcmp(pppppplVar14,ppppppplVar18[uVar20 * -2 + -2],pppppplVar27);
                  if (iVar11 == 0) {
                    lVar19 = ((long)ppppppplVar17 - (long)ppppppplVar45 >> 3) * -0x5555555555555555;
                    puVar1 = (undefined8 *)
                             ((long)ppppppplVar17 + (lVar19 - 8U & (ulong)ppppppplVar40));
                    uVar52 = *puVar1;
                    uVar47 = *(undefined8 *)((long)ppppppplVar17 + lVar19);
                    uVar31 = CONCAT17(-((char)((ulong)uVar47 >> 0x38) == -1),
                                      CONCAT16(-((char)((ulong)uVar47 >> 0x30) == -1),
                                               CONCAT15(-((char)((ulong)uVar47 >> 0x28) == -1),
                                                        CONCAT14(-((char)((ulong)uVar47 >> 0x20) ==
                                                                  -1),CONCAT13(-((char)((ulong)
                                                  uVar47 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar47 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar47 >> 8) ==
                                                                     -1),-((char)uVar47 == -1)))))))
                                     );
                    uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1
                    ;
                    uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2
                    ;
                    uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar31 & 0xffff0000ffff) << 0x10;
                    if (((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) +
                        ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar52 >> 0x38) == -1),
                                                 CONCAT16(-((char)((ulong)uVar52 >> 0x30) == -1),
                                                          CONCAT15(-((char)((ulong)uVar52 >> 0x28)
                                                                    == -1),CONCAT14(-((char)((ulong)
                                                  uVar52 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar52 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar52 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar52 >> 8) == -1),-((char)uVar52 == -1)))))))))
                        >> 3) < 8) {
                      ppppppplStack_b60 = (long *******)((long)ppppppplStack_b60 + 1);
                      uVar28 = 0xff;
                      ppppppplStack_7a0 = ppppppplStack_b60;
                    }
                    else {
                      uVar28 = 0x80;
                    }
                    *(undefined1 *)((long)ppppppplVar17 + lVar19) = uVar28;
                    *(undefined1 *)(puVar1 + 1) = uVar28;
                    ppppppplStack_b50 = (long *******)((long)ppppppplStack_b50 + -1);
                    ppppppplStack_798 = ppppppplStack_b50;
                    if (ppppppplVar45[-3] != (long ******)0x0) {
                      _free(ppppppplVar45[-2]);
                    }
                    goto joined_r0x0001004e9e9c;
                  }
                }
              }
              bVar46 = NEON_umaxv(CONCAT17(-(bVar58 == 0xff),
                                           CONCAT16(-(bVar57 == 0xff),
                                                    CONCAT15(-(bVar56 == 0xff),
                                                             CONCAT14(-(bVar55 == 0xff),
                                                                      CONCAT13(-(bVar54 == 0xff),
                                                                               CONCAT12(-(bVar53 ==
                                                                                         0xff),
                                                  CONCAT11(-(bVar46 == 0xff),-((byte)uVar52 == 0xff)
                                                          ))))))),1);
              if ((bVar46 & 1) != 0) break;
              lVar19 = lVar19 + 8;
              uVar31 = uVar31 + lVar19;
            }
joined_r0x0001004e9e9c:
          } while (ppppppplVar38 != (long *******)0x0);
        }
      }
      ppppppplVar17 = ppppppplStack_7b0;
      ppppppplStack_1e8 = (long *******)puVar5[1];
      ppppppplStack_1f0 = (long *******)*puVar5;
      pppppplStack_1d8 = (long ******)puVar5[3];
      ppppppplStack_1e0 = (long *******)puVar5[2];
      pppppplStack_1d0 = (long ******)puVar5[4];
      if ((ppppppplVar15 != (long *******)0x0) && ((long)ppppppplVar15 * 0x11 != -0x19)) {
        _free(ppppppplVar18 + (long)ppppppplVar15 * -2 + -2);
      }
      FUN_100e05b5c(ppppppplVar21 + 0x11);
      if (ppppppplVar21[0x13d] != (long ******)0x0) {
        _free(ppppppplVar21[0x13e]);
      }
      *(undefined1 *)ppppppplStack_b88 = 1;
      if (ppppppplVar17 != (long *******)0x0) {
        ppppppplVar21[2] = (long ******)ppppppplVar17;
        ppppppplVar21[4] = (long ******)ppppppplStack_1e8;
        ppppppplVar21[3] = (long ******)ppppppplStack_1f0;
        ppppppplVar21[6] = pppppplStack_1d8;
        ppppppplVar21[5] = (long ******)ppppppplStack_1e0;
        ppppppplVar21[7] = pppppplStack_1d0;
        FUN_100c97300(ppppppplStack_b90);
        ppppppplVar21[0xf] = ppppppplVar21[0xc];
        pppppplVar14 = ppppppplVar21[0xb];
        ppppppplVar21[0x12] = pppppplVar14;
        *(undefined1 *)((long)ppppppplVar21 + 0x99) = 0;
        *(undefined1 *)(ppppppplVar21 + 0x13) = 0;
        ppppppplVar21[0x10] = pppppplVar14;
        ppppplVar41 = pppppplVar14[0x471];
joined_r0x0001004e9fe8:
        if (ppppplVar41 != (long *****)0x0) {
          ppppppplVar15 = (long *******)ppppppplVar21[0xf];
          ppppplVar32 = pppppplVar14[0x472];
          ppppppplVar18 = (long *******)0x8;
          do {
            uVar31 = (ulong)*(ushort *)((long)ppppplVar41 + 10);
            uVar29 = 0xffffffffffffffff;
            pbVar30 = (byte *)((long)ppppplVar41 + 0xc);
            uVar44 = uVar31;
            do {
              if (uVar44 == 0) goto LAB_1004ea040;
              cVar9 = *pbVar30 < 0x17;
              if (0x17 < *pbVar30) {
                cVar9 = -1;
              }
              uVar44 = uVar44 - 1;
              uVar29 = uVar29 + 1;
              pbVar30 = pbVar30 + 1;
            } while (cVar9 == '\x01');
            uVar31 = uVar29;
            if (cVar9 == '\0') {
              if (ppppppplVar15 == (long *******)0x0) {
                ppppppplVar21[0x189] = pppppplVar14;
                *(undefined2 *)(ppppppplVar21 + 0x18a) = 0;
                goto LAB_1004ea1e8;
              }
              ppppppplVar18 = (long *******)*ppppppplVar15;
              goto joined_r0x0001004ea070;
            }
LAB_1004ea040:
            if (ppppplVar32 == (long *****)0x0) goto LAB_1004ea934;
            ppppplVar41 = (long *****)ppppplVar41[uVar31 + 3];
            ppppplVar32 = (long *****)((long)ppppplVar32 + -1);
          } while( true );
        }
        goto LAB_1004ea3e4;
      }
    }
    *puVar13 = 0x8000000000000001;
    uVar28 = 3;
    goto LAB_1004eae80;
  }
  if (bVar23 == 3) {
    bVar23 = *(byte *)(ppppppplVar21 + 0x33e);
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        FUN_107c05cc0(&UNK_10b2153f8);
        goto LAB_1004eb028;
      }
      pppppplVar14 = ppppppplVar21[0xf];
      goto LAB_1004e989c;
    }
    if (bVar23 != 3) {
      FUN_107c05cc4(&UNK_10b2153f8);
      goto LAB_1004eb028;
    }
    goto LAB_1004e9940;
  }
  if (bVar23 == 4) {
    bVar23 = *(byte *)((long)ppppppplVar21 + 0x99);
    if (bVar23 < 3) {
      if (bVar23 != 0) {
        if (bVar23 == 1) {
          FUN_107c05cc0(&UNK_10b215470);
        }
        else {
          FUN_107c05cc4(&UNK_10b215470);
        }
        goto LAB_1004eb028;
      }
      pppppplVar14 = ppppppplVar21[0x12];
      *(undefined1 *)(ppppppplVar21 + 0x13) = 0;
      ppppppplVar21[0x10] = pppppplVar14;
      ppppplVar41 = pppppplVar14[0x471];
      goto joined_r0x0001004e9fe8;
    }
    if (bVar23 == 3) {
LAB_1004ea1e8:
      pppppplVar14 = (long ******)FUN_1006d95b0(ppppppplVar21 + 0x14,uVar22);
      if (pppppplVar14 != (long ******)0x0) {
        ppppppplVar21[0x11] = pppppplVar14;
        if (*(char *)(ppppppplVar21 + 0x18a) == '\x03') {
          if (*(char *)((long)ppppppplVar21 + 0xc3a) == '\x03') {
            func_0x000100e78740(ppppppplVar21 + 0x1a);
          }
          else if (*(char *)((long)ppppppplVar21 + 0xc3a) == '\0') {
            if (ppppppplVar21[0x14] != (long ******)0x0) {
              _free(ppppppplVar21[0x15]);
            }
            if ((ppppppplVar21[0x17] != (long ******)0x8000000000000000) &&
               (ppppppplVar21[0x17] != (long ******)0x0)) {
              _free(ppppppplVar21[0x18]);
            }
          }
        }
        ppppppplVar21[0x15] = ppppppplVar21[0x11] + 2;
        *(undefined1 *)((long)ppppppplVar21 + 0xb1) = 0;
        goto LAB_1004ea278;
      }
      uVar28 = 3;
LAB_1004ea2a4:
      *(undefined1 *)((long)ppppppplVar21 + 0x99) = uVar28;
      *puVar13 = 0x8000000000000001;
      uVar28 = 4;
      goto LAB_1004eae80;
    }
LAB_1004ea278:
    FUN_1006dd9c8(&ppppppplStack_a90,ppppppplVar21 + 0x14,uVar22);
    if (ppppppplStack_a90 == (long *******)0x8000000000000004) {
      uVar28 = 4;
      goto LAB_1004ea2a4;
    }
    pppppplStack_458 = (long ******)CONCAT71(uStack_a17,uStack_a18);
    pppppplStack_468 = pppppplStack_a28;
    pppppplStack_470 = pppppplStack_a30;
    pppppplStack_460 = pppppplStack_a20;
    uStack_448 = uStack_a08;
    uStack_450 = uStack_a10;
    uStack_440 = uStack_a00;
    auStack_4b0._8_8_ = auStack_a70._8_8_;
    auStack_4b0._0_8_ = auStack_a70._0_8_;
    ppppppplStack_498 = ppppppplStack_a58;
    ppppppplStack_4a0 = ppppppplStack_a60;
    ppppppplStack_488 = ppppppplStack_a48;
    ppppppplStack_490 = ppppppplStack_a50;
    ppppppplStack_478 = ppppppplStack_a38;
    ppppppplStack_480 = ppppppplStack_a40;
    ppppppplStack_4c8 = ppppppplStack_a88;
    ppppppplStack_4d0 = ppppppplStack_a90;
    ppppppplStack_4b8 = (long *******)auStack_a78;
    ppppppplStack_4c0 = ppppppplStack_a80;
    if (*(char *)((long)ppppppplVar21 + 0xb1) == '\x04') {
      FUN_100cab424(ppppppplVar21 + 0x2a);
      FUN_100e0609c(ppppppplVar21 + 0x17);
      *(undefined1 *)(ppppppplVar21 + 0x16) = 0;
    }
    else if (*(char *)((long)ppppppplVar21 + 0xb1) == '\x03') {
      FUN_100ce72d8(ppppppplVar21 + 0x17);
    }
    ppppppplVar15 = ppppppplStack_4d0;
    *(undefined1 *)(ppppppplVar21 + 0x13) = 1;
    pppppplStack_748 = pppppplStack_468;
    pppppplStack_750 = pppppplStack_470;
    pppppplStack_738 = pppppplStack_458;
    pppppplStack_740 = pppppplStack_460;
    uStack_728 = uStack_448;
    uStack_730 = uStack_450;
    uStack_720 = uStack_440;
    auStack_790._8_8_ = auStack_4b0._8_8_;
    auStack_790._0_8_ = auStack_4b0._0_8_;
    ppppppplStack_778 = ppppppplStack_498;
    ppppppplStack_780 = ppppppplStack_4a0;
    ppppppplStack_768 = ppppppplStack_488;
    ppppppplStack_770 = ppppppplStack_490;
    ppppppplStack_758 = ppppppplStack_478;
    ppppppplStack_760 = ppppppplStack_480;
    ppppppplStack_7a8 = ppppppplStack_4c8;
    ppppppplStack_7b0 = ppppppplStack_4d0;
    ppppppplStack_798 = ppppppplStack_4b8;
    ppppppplStack_7a0 = ppppppplStack_4c0;
    ppppplVar41 = *ppppppplVar21[0x11];
    *ppppppplVar21[0x11] = (long *****)((long)ppppplVar41 + -1);
    LORelease();
    if (ppppplVar41 == (long *****)0x1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
    if (ppppppplVar15 != (long *******)0x8000000000000003) {
      ppppppplVar15 = (long *******)&ppppppplStack_7b0;
      ppppppplVar18 = ppppppplStack_7b0;
joined_r0x0001004ea070:
      if ((-1 < (long)ppppppplVar18) || ((long)ppppppplVar18 + 0x7fffffffffffffffU < 3)) {
        __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                  (&ppppppplStack_a90,ppppppplVar15);
        ppppppplVar18 = ppppppplStack_a80;
        ppppppplVar35 = ppppppplStack_a88;
        ppppppplVar40 = ppppppplStack_a90;
        if (ppppppplStack_a90 != (long *******)0x8000000000000000) {
          if (ppppppplStack_a80 != (long *******)0x0) {
            uVar10 = __ZN11codex_login4auth7manager9CodexAuth17account_plan_type17h5350a920d870e913E
                               (ppppppplVar15);
            __ZN25codex_utils_absolute_path15AbsolutePathBuf11to_path_buf17hbf3b7f4c99ab6aeaE
                      (&ppppppplStack_150,ppppppplVar21[0x10] + 0x37f);
            func_0x000100025ae8(&ppppppplStack_510,ppppppplVar21[0x10] + 0x388);
            __ZN11codex_login4auth7manager9CodexAuth19get_chatgpt_user_id17h4b48c11e95af171bE
                      (&ppppppplStack_1f0,ppppppplVar15);
            auStack_a70._0_8_ = ppppppplStack_508;
            auStack_a78 = (undefined1  [8])ppppppplStack_510;
            ppppppplStack_a38 = ppppppplStack_1e0;
            ppppppplStack_a80 = ppppppplStack_140;
            ppppppplStack_a40 = ppppppplStack_1e8;
            ppppppplStack_a48 = ppppppplStack_1f0;
            ppppppplStack_a88 = ppppppplStack_148;
            ppppppplStack_a90 = ppppppplStack_150;
            auStack_a70._8_8_ = ppppppplStack_500;
            ppppppplStack_a60 = ppppppplVar40;
            ppppppplStack_a58 = ppppppplVar35;
            ppppppplStack_a50 = ppppppplVar18;
            pppppplStack_a30 = (long ******)CONCAT71(pppppplStack_a30._1_7_,(uVar10 & 0xff) - 5 < 6)
            ;
            __ZN16codex_connectors27cached_directory_connectors17hb3334f3f99e4ebdcE
                      (&ppppppplStack_1f0,&ppppppplStack_a90);
            bVar8 = ppppppplStack_1f0 != (long *******)0x8000000000000000;
            ppppppplVar15 = (long *******)0x0;
            if (bVar8) {
              ppppppplVar15 = ppppppplStack_1f0;
            }
            ppppppplVar18 = (long *******)0x8;
            if (bVar8) {
              ppppppplVar18 = ppppppplStack_1e8;
            }
            ppppppplVar17 = (long *******)0x0;
            if (bVar8) {
              ppppppplVar17 = ppppppplStack_1e0;
            }
            if (ppppppplStack_a90 != (long *******)0x0) {
              _free(ppppppplStack_a88);
            }
            if (auStack_a78 != (undefined1  [8])0x0) {
              _free(auStack_a70._0_8_);
            }
            if (ppppppplVar40 != (long *******)0x0) {
              _free(ppppppplVar35);
            }
            if ((ppppppplStack_a48 != (long *******)0x8000000000000000) &&
               (ppppppplStack_a48 != (long *******)0x0)) {
              _free(ppppppplStack_a40);
            }
            if ((*(char *)(ppppppplVar21 + 0x13) == '\x01') &&
               (ppppppplStack_7b0 != (long *******)0x8000000000000003)) {
              FUN_100e0609c(&ppppppplStack_7b0);
            }
            *(undefined1 *)(ppppppplVar21 + 0x13) = 0;
            goto LAB_1004ea3e8;
          }
          if (ppppppplStack_a90 != (long *******)0x0) {
            _free(ppppppplStack_a88);
          }
        }
      }
    }
    if ((*(char *)(ppppppplVar21 + 0x13) == '\x01') &&
       (ppppppplStack_7b0 != (long *******)0x8000000000000003)) {
      FUN_100e0609c(&ppppppplStack_7b0);
    }
    *(undefined1 *)(ppppppplVar21 + 0x13) = 0;
LAB_1004ea3e4:
    ppppppplVar15 = (long *******)0x0;
    ppppppplVar17 = (long *******)0x0;
    ppppppplVar18 = (long *******)0x8;
    goto LAB_1004ea3e8;
  }
  bVar23 = *(byte *)((long)ppppppplVar21 + 0x229b);
  if (1 < bVar23) {
    if (bVar23 == 3) goto LAB_1004eb990;
    FUN_107c05cc4(&UNK_10b217928);
    goto LAB_1004eb028;
  }
  if (bVar23 != 0) {
    FUN_107c05cc0(&UNK_10b217928);
    goto LAB_1004eb028;
  }
  ppppppplVar15 = (long *******)ppppppplVar21[0x452];
  *(undefined1 *)((long)ppppppplVar21 + 0x229a) = 0;
  *(undefined2 *)(ppppppplVar21 + 0x453) = 0;
  pppppplVar14 = ppppppplVar15[0x471];
joined_r0x0001004ea72c:
  if (pppppplVar14 == (long ******)0x0) {
    ppppppplVar17 = (long *******)0x0;
    ppppppplVar18 = (long *******)0x8;
  }
  else {
    ppppppplVar17 = ppppppplVar21 + 0xf;
    pppppplVar27 = ppppppplVar15[0x472];
    ppppppplVar18 = (long *******)0x8;
LAB_1004ea73c:
    uVar31 = (ulong)*(ushort *)((long)pppppplVar14 + 10);
    uVar29 = 0xffffffffffffffff;
    pbVar30 = (byte *)((long)pppppplVar14 + 0xc);
    uVar44 = uVar31;
    do {
      if (uVar44 == 0) goto LAB_1004ea780;
      cVar9 = *pbVar30 < 0x1d;
      if (0x1d < *pbVar30) {
        cVar9 = -1;
      }
      uVar44 = uVar44 - 1;
      uVar29 = uVar29 + 1;
      pbVar30 = pbVar30 + 1;
    } while (cVar9 == '\x01');
    uVar31 = uVar29;
    if (cVar9 == '\0') {
      pppppplVar27 = ppppppplVar15[0x380];
      pppppplVar14 = ppppppplVar15[0x381];
      if (pppppplVar14 == (long ******)0x0) {
        lVar19 = 1;
      }
      else {
        lVar19 = _malloc(pppppplVar14);
        if (lVar19 == 0) {
          FUN_107c03c64(1,pppppplVar14);
          goto LAB_1004eb028;
        }
      }
      _memcpy(lVar19,pppppplVar27,pppppplVar14);
      ppppppplStack_a90 = (long *******)pppppplVar14;
      ppppppplStack_a88 = (long *******)lVar19;
      ppppppplStack_a80 = (long *******)pppppplVar14;
      __ZN18codex_core_plugins7manager14PluginsManager28new_with_restriction_product17hc4ed87e9f89ea398E
                (ppppppplVar17,&ppppppplStack_a90,1);
      __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
                (ppppppplVar21 + 0x6f,ppppppplVar15);
      pppppplVar14 = ppppppplVar15[0x38c];
      pppppplVar27 = ppppppplVar15[0x38d];
      pauVar16 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar16[1][0] == '\x01') {
        auVar59 = *pauVar16;
      }
      else {
        auVar59 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar16 + 8) = auVar59._8_8_;
        pauVar16[1][0] = 1;
      }
      lVar19 = auVar59._0_8_ + 1;
      auStack_a70._8_8_ = auVar59._8_8_;
      auStack_a70._0_8_ = lVar19;
      *(long *)*pauVar16 = lVar19;
      ppppppplStack_a88 = (long *******)0x0;
      ppppppplStack_a90 = (long *******)&UNK_108c56c70;
      auStack_a78 = (undefined1  [8])0x0;
      ppppppplStack_a80 = (long *******)0x0;
      if (pppppplVar27 == (long ******)0x0) {
        ppppppplVar21[0x1c0] = (long ******)0x0;
        ppppppplVar21[0x1bf] = (long ******)&UNK_108c56c70;
        ppppppplVar21[0x1c2] = (long ******)0x0;
        ppppppplVar21[0x1c1] = (long ******)0x0;
        *(undefined1 (*) [16])(ppppppplVar21 + 0x1c3) = auVar59;
        pppppplVar14 = ppppppplVar15[0x38f];
        pppppplVar27 = ppppppplVar15[0x390];
        *(long *)*pauVar16 = auVar59._0_8_ + 2;
      }
      else {
        pppppplVar14 = pppppplVar14 + 2;
        do {
          if (*(char *)(pppppplVar14 + 1) == '\x01') {
            auStack_a70 = auVar59;
            FUN_1016e6088(&ppppppplStack_a90,pppppplVar14[-1],*pppppplVar14);
            auVar59 = auStack_a70;
          }
          pppppplVar14 = pppppplVar14 + 4;
          pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
        } while (pppppplVar27 != (long ******)0x0);
        cVar9 = pauVar16[1][0];
        ppppppplVar21[0x1c0] = (long ******)ppppppplStack_a88;
        ppppppplVar21[0x1bf] = (long ******)ppppppplStack_a90;
        ppppppplVar21[0x1c2] = (long ******)auStack_a78;
        ppppppplVar21[0x1c1] = (long ******)ppppppplStack_a80;
        *(undefined1 (*) [16])(ppppppplVar21 + 0x1c3) = auVar59;
        pppppplVar14 = ppppppplVar15[0x38f];
        pppppplVar27 = ppppppplVar15[0x390];
        if (cVar9 == '\x01') {
          *(long *)*pauVar16 = *(long *)*pauVar16 + 1;
          auStack_a70 = *pauVar16;
        }
        else {
          auStack_a70 = auVar59;
          auVar59 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          pauVar16[1][0] = 1;
          *(long *)*pauVar16 = auVar59._0_8_ + 1;
          *(long *)(*pauVar16 + 8) = auVar59._8_8_;
          auStack_a70 = auVar59;
        }
      }
      ppppppplStack_a90 = (long *******)&UNK_108c56c70;
      ppppppplStack_a88 = (long *******)0x0;
      ppppppplStack_a80 = (long *******)0x0;
      auStack_a78 = (undefined1  [8])0x0;
      if (pppppplVar27 != (long ******)0x0) {
        auStack_a78 = (undefined1  [8])0x0;
        ppppppplStack_a80 = (long *******)0x0;
        ppppppplStack_a88 = (long *******)0x0;
        ppppppplStack_a90 = (long *******)&UNK_108c56c70;
        pppppplVar14 = pppppplVar14 + 2;
        do {
          if (*(char *)(pppppplVar14 + 1) == '\x01') {
            FUN_1016e6088(&ppppppplStack_a90,pppppplVar14[-1],*pppppplVar14);
          }
          pppppplVar14 = pppppplVar14 + 4;
          pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
        } while (pppppplVar27 != (long ******)0x0);
      }
      ppppppplVar21[0x1c6] = (long ******)ppppppplStack_a88;
      ppppppplVar21[0x1c5] = (long ******)ppppppplStack_a90;
      ppppppplVar21[0x1c8] = (long ******)auStack_a78;
      ppppppplVar21[0x1c7] = (long ******)ppppppplStack_a80;
      *(undefined1 (*) [16])(ppppppplVar21 + 0x1c9) = auStack_a70;
      __ZN18codex_core_plugins7manager14PluginsManager28list_marketplaces_for_config17h821a6ed057c376dcE
                (&ppppppplStack_a90,ppppppplVar17,ppppppplVar21 + 0x6f,8,0);
      auVar34 = auStack_a78;
      ppppppplVar18 = ppppppplStack_a80;
      ppppppplVar35 = ppppppplStack_a88;
      ppppppplVar40 = (long *******)auStack_a70._8_8_;
      uVar12 = auStack_a70._0_8_;
      if (ppppppplStack_a90 != (long *******)0x7) {
        ppppppplVar18 = (long *******)thunk_FUN_108854784(&ppppppplStack_a90,&UNK_108ca6161,0x37);
LAB_1004eaaf0:
        *(undefined1 *)((long)ppppppplVar21 + 0x229a) = 0;
        pppppplVar14 = ppppppplVar21[0x1c6];
        if ((pppppplVar14 != (long ******)0x0) && ((long)pppppplVar14 * 0x11 != -0x19)) {
          _free(ppppppplVar21[0x1c5] + (long)pppppplVar14 * -2 + -2);
        }
        pppppplVar14 = ppppppplVar21[0x1c0];
        if ((pppppplVar14 != (long ******)0x0) && ((long)pppppplVar14 * 0x11 != -0x19)) {
          _free(ppppppplVar21[0x1bf] + (long)pppppplVar14 * -2 + -2);
        }
        FUN_100e05b5c(ppppppplVar21 + 0x6f);
        if (ppppppplVar21[0x19b] != (long ******)0x0) {
          _free(ppppppplVar21[0x19c]);
        }
        FUN_100e1955c(ppppppplVar17);
        ppppppplVar17 = (long *******)0x8000000000000000;
        goto LAB_1004eab68;
      }
      if (ppppppplStack_a88 == (long *******)0x8000000000000000) goto LAB_1004eaaf0;
      *(undefined1 *)((long)ppppppplVar21 + 0x229a) = 1;
      if (ppppppplStack_a60 != (long *******)0x0) {
        ppppppplVar15 = (long *******)(auStack_a70._8_8_ + 0x20);
        ppppppplVar17 = ppppppplStack_a60;
        do {
          if (ppppppplVar15[-4] != (long ******)0x0) {
            _free(ppppppplVar15[-3]);
          }
          if (ppppppplVar15[-1] != (long ******)0x0) {
            _free(*ppppppplVar15);
          }
          ppppppplVar15 = ppppppplVar15 + 6;
          ppppppplVar17 = (long *******)((long)ppppppplVar17 + -1);
        } while (ppppppplVar17 != (long *******)0x0);
      }
      if (uVar12 != 0) {
        _free(ppppppplVar40);
      }
      ppppppplVar21[0x449] = (long ******)0x0;
      ppppppplVar21[0x44a] = (long ******)0x8;
      ppppppplVar21[1099] = (long ******)0x0;
      *(undefined1 *)((long)ppppppplVar21 + 0x229a) = 0;
      ppppppplVar15 = ppppppplVar18 + (long)auVar34 * 0xc;
      ppppppplVar21[0x19f] = (long ******)ppppppplVar18;
      ppppppplVar21[0x1a0] = (long ******)ppppppplVar18;
      ppppppplVar21[0x1a1] = (long ******)ppppppplVar35;
      ppppppplVar21[0x1a2] = (long ******)ppppppplVar15;
      do {
        puStack_b20 = (undefined1 *)((long)ppppppplVar21 + 0x229b);
        ppppppplVar17 = ppppppplVar21 + 0x1a3;
        if (ppppppplVar18 == ppppppplVar15) {
          *ppppppplVar17 = (long ******)0x8000000000000000;
LAB_1004eb6bc:
          if (ppppppplVar21[0x1a1] != (long ******)0x0) {
            _free(ppppppplVar21[0x19f]);
          }
          pppppplVar14 = ppppppplVar21[1099];
          ppppppplStack_a90 = (long *******)&ppppppplStack_1f0;
          if ((long ******)0x1 < pppppplVar14) {
            if (pppppplVar14 < (long ******)0x15) {
              FUN_100e96858();
            }
            else {
              __ZN4core5slice4sort6stable14driftsort_main17h0db61af38d0fd6deE
                        (ppppppplVar21[0x44a],pppppplVar14,&ppppppplStack_a90);
            }
          }
          ppppppplVar17 = (long *******)ppppppplVar21[0x449];
          ppppppplVar18 = (long *******)ppppppplVar21[0x44a];
          ppppppplVar35 = (long *******)ppppppplVar21[1099];
          *(undefined1 *)((long)ppppppplVar21 + 0x229a) = 0;
          pppppplVar14 = ppppppplVar21[0x1c6];
          if ((pppppplVar14 != (long ******)0x0) && ((long)pppppplVar14 * 0x11 != -0x19)) {
            _free(ppppppplVar21[0x1c5] + (long)pppppplVar14 * -2 + -2);
          }
          pppppplVar14 = ppppppplVar21[0x1c0];
          if ((pppppplVar14 != (long ******)0x0) && ((long)pppppplVar14 * 0x11 != -0x19)) {
            _free(ppppppplVar21[0x1bf] + (long)pppppplVar14 * -2 + -2);
          }
          FUN_100e05b5c(ppppppplVar21 + 0x6f);
          if (ppppppplVar21[0x19b] != (long ******)0x0) {
            _free(ppppppplVar21[0x19c]);
          }
          FUN_100e1955c(ppppppplVar21 + 0xf);
          *puStack_b20 = 1;
          ppppppplVar15 = ppppppplVar40;
          if (ppppppplVar17 == (long *******)0x8000000000000001) {
LAB_1004eb77c:
            *puVar13 = 0x8000000000000001;
            uVar28 = 5;
            goto LAB_1004eae80;
          }
          goto LAB_1004eab78;
        }
        ppppppplVar21[0x1a0] = (long ******)(ppppppplVar18 + 0xc);
        pppppplVar43 = *ppppppplVar18;
        pppppplVar27 = ppppppplVar18[3];
        pppppplVar14 = ppppppplVar18[2];
        ppppppplVar21[0x1a4] = ppppppplVar18[1];
        *ppppppplVar17 = pppppplVar43;
        ppppppplVar21[0x1a6] = pppppplVar27;
        ppppppplVar21[0x1a5] = pppppplVar14;
        pppppplVar14 = ppppppplVar18[8];
        pppppplVar43 = ppppppplVar18[0xb];
        pppppplVar27 = ppppppplVar18[10];
        pppppplVar50 = ppppppplVar18[5];
        pppppplVar49 = ppppppplVar18[4];
        pppppplVar48 = ppppppplVar18[7];
        pppppplVar37 = ppppppplVar18[6];
        ppppppplVar21[0x1ac] = ppppppplVar18[9];
        ppppppplVar21[0x1ab] = pppppplVar14;
        ppppppplVar21[0x1ae] = pppppplVar43;
        ppppppplVar21[0x1ad] = pppppplVar27;
        ppppppplVar21[0x1a8] = pppppplVar50;
        ppppppplVar21[0x1a7] = pppppplVar49;
        ppppppplVar21[0x1aa] = pppppplVar48;
        ppppppplVar21[0x1a9] = pppppplVar37;
        if (ppppppplVar21[0x1a3] == (long ******)0x8000000000000000) {
LAB_1004eb60c:
          ppppppplVar18 = ppppppplVar18 + 0xc;
          uVar29 = (long)ppppppplVar15 - (long)ppppppplVar18;
joined_r0x0001004eb694:
          if (uVar29 != 0) {
            uVar29 = uVar29 / 0x60;
            do {
              FUN_100e2d794(ppppppplVar18);
              ppppppplVar18 = ppppppplVar18 + 0xc;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          goto LAB_1004eb6bc;
        }
        while( true ) {
          *(undefined1 *)((long)ppppppplVar21 + 0x2299) = 1;
          ppppppplVar21[0x1b4] = ppppppplVar21[0x1a8];
          ppppppplVar21[0x1b3] = ppppppplVar21[0x1a7];
          ppppppplVar21[0x1b6] = ppppppplVar21[0x1aa];
          ppppppplVar21[0x1b5] = ppppppplVar21[0x1a9];
          ppppppplVar21[0x1b8] = ppppppplVar21[0x1ac];
          ppppppplVar21[0x1b7] = ppppppplVar21[0x1ab];
          ppppppplVar21[0x1ba] = ppppppplVar21[0x1ae];
          ppppppplVar21[0x1b9] = ppppppplVar21[0x1ad];
          ppppppplVar21[0x1b0] = ppppppplVar21[0x1a4];
          ppppppplVar21[0x1af] = *ppppppplVar17;
          ppppppplVar21[0x1b2] = ppppppplVar21[0x1a6];
          ppppppplVar21[0x1b1] = ppppppplVar21[0x1a5];
          ppppppplVar21[0x44d] = ppppppplVar21[0x1a4];
          ppppppplVar21[0x44c] = *ppppppplVar17;
          ppppppplVar21[0x44e] = ppppppplVar21[0x1a5];
          pppppplVar14 = ppppppplVar21[0x44d];
          if ((ppppppplVar21[0x44e] == (long ******)0xe) &&
             ((*pppppplVar14 == (long *****)0x622d69616e65706f &&
               *(long *)((long)pppppplVar14 + 6) == 0x64656c646e75622d ||
              (*pppppplVar14 == (long *****)0x632d69616e65706f &&
               *(long *)((long)pppppplVar14 + 6) == 0x646574617275632d)))) break;
          if (ppppppplVar21[0x44c] != (long ******)0x0) {
            _free();
          }
          if (ppppppplVar21[0x1b2] != (long ******)0x0) {
            _free(ppppppplVar21[0x1b3]);
          }
          if ((-0x7fffffffffffffff < (long)ppppppplVar21[0x1b8]) &&
             (ppppppplVar21[0x1b8] != (long ******)0x0)) {
            _free(ppppppplVar21[0x1b9]);
          }
          ppppppplVar18 = (long *******)ppppppplVar21[0x1b6];
          ppppppplVar15 = ppppppplVar18;
          ppppppplVar40 = ppppppplVar21;
          for (pppppplVar14 = ppppppplVar21[0x1b7]; pppppplVar14 != (long ******)0x0;
              pppppplVar14 = (long ******)((long)pppppplVar14 + -1)) {
            FUN_100e41378(ppppppplVar15);
            ppppppplVar15 = ppppppplVar15 + 0x4a;
            ppppppplVar40 = ppppppplVar15;
          }
          if (ppppppplVar21[0x1b5] != (long ******)0x0) {
            _free(ppppppplVar18);
          }
          *(undefined1 *)((long)ppppppplVar21 + 0x2299) = 0;
          ppppppplVar15 = (long *******)ppppppplVar21[0x1a2];
          ppppppplVar18 = (long *******)ppppppplVar21[0x1a0];
          if (ppppppplVar18 == ppppppplVar15) {
            *ppppppplVar17 = (long ******)0x8000000000000000;
            uVar29 = (long)ppppppplVar15 - (long)ppppppplVar18;
            goto joined_r0x0001004eb694;
          }
          ppppppplVar21[0x1a0] = (long ******)(ppppppplVar18 + 0xc);
          pppppplVar43 = *ppppppplVar18;
          pppppplVar27 = ppppppplVar18[3];
          pppppplVar14 = ppppppplVar18[2];
          ppppppplVar21[0x1a4] = ppppppplVar18[1];
          *ppppppplVar17 = pppppplVar43;
          ppppppplVar21[0x1a6] = pppppplVar27;
          ppppppplVar21[0x1a5] = pppppplVar14;
          pppppplVar14 = ppppppplVar18[8];
          pppppplVar43 = ppppppplVar18[0xb];
          pppppplVar27 = ppppppplVar18[10];
          pppppplVar50 = ppppppplVar18[5];
          pppppplVar49 = ppppppplVar18[4];
          pppppplVar48 = ppppppplVar18[7];
          pppppplVar37 = ppppppplVar18[6];
          ppppppplVar21[0x1ac] = ppppppplVar18[9];
          ppppppplVar21[0x1ab] = pppppplVar14;
          ppppppplVar21[0x1ae] = pppppplVar43;
          ppppppplVar21[0x1ad] = pppppplVar27;
          ppppppplVar21[0x1a8] = pppppplVar50;
          ppppppplVar21[0x1a7] = pppppplVar49;
          ppppppplVar21[0x1aa] = pppppplVar48;
          ppppppplVar21[0x1a9] = pppppplVar37;
          if (ppppppplVar21[0x1a3] == (long ******)0x8000000000000000) goto LAB_1004eb60c;
        }
        *(undefined1 *)((long)ppppppplVar21 + 0x2299) = 0;
        ppppppplVar40 = (long *******)ppppppplVar21[0x1b6];
        ppppppplVar15 = ppppppplVar40 + (long)ppppppplVar21[0x1b7] * 0x4a;
        ppppppplVar21[0x1bb] = (long ******)ppppppplVar40;
        ppppppplVar21[0x1bc] = (long ******)ppppppplVar40;
        ppppppplVar21[0x1bd] = ppppppplVar21[0x1b5];
        ppppppplVar21[0x1be] = (long ******)ppppppplVar15;
        if (ppppppplVar40 != ppppppplVar15) {
          do {
            ppppppplVar18 = ppppppplVar21 + 0x1cb;
            ppppppplVar21[0x1bc] = (long ******)(ppppppplVar40 + 0x4a);
            _memcpy(ppppppplVar18,ppppppplVar40,0x250);
            pppppplVar14 = ppppppplVar21[0x1cb];
joined_r0x0001004ebdf8:
            if (pppppplVar14 == (long ******)0x8000000000000000) {
              ppppppplVar40 = ppppppplVar40 + 0x4a;
              uVar29 = (long)ppppppplVar15 - (long)ppppppplVar40;
joined_r0x0001004ebe08:
              if (uVar29 != 0) {
                uVar29 = uVar29 / 0x250;
                do {
                  FUN_100e41378(ppppppplVar40);
                  ppppppplVar40 = ppppppplVar40 + 0x4a;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              goto LAB_1004ebe38;
            }
            *(undefined1 *)(ppppppplVar21 + 0x453) = 1;
            _memcpy(ppppppplVar21 + 0x215,ppppppplVar18,0x250);
            if (((ulong)ppppppplVar21[0x25e] & 1) != 0) goto LAB_1004ebed4;
            pppppplVar14 = ppppppplVar21[0x216];
            pppppplVar27 = ppppppplVar21[0x217];
            if (ppppppplVar21[0x1c8] != (long ******)0x0) {
              uVar31 = FUN_100e8e738(ppppppplVar21[0x1c9],ppppppplVar21[0x1ca],pppppplVar14,
                                     pppppplVar27);
              lVar19 = 0;
              pppppplVar43 = ppppppplVar21[0x1c6];
              pppppplVar37 = ppppppplVar21[0x1c5];
              bVar23 = (byte)(uVar31 >> 0x39);
              uVar31 = uVar31 & (ulong)pppppplVar43;
              uVar12 = *(undefined8 *)((long)pppppplVar37 + uVar31);
              uVar29 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar23),
                                CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar23),
                                         CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar23),
                                                  CONCAT14(-((byte)((ulong)uVar12 >> 0x20) == bVar23
                                                            ),CONCAT13(-((byte)((ulong)uVar12 >>
                                                                               0x18) == bVar23),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar12 >> 0x10) == bVar23),
                                                  CONCAT11(-((byte)((ulong)uVar12 >> 8) == bVar23),
                                                           -((byte)uVar12 == bVar23)))))))) &
                       0x8080808080808080;
              do {
                while (uVar29 == 0) {
                  bVar46 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar12 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar12 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar12 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)
                                                  uVar12 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar12 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar12 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar12 >> 8) == -1),-((char)uVar12 == -1)))))))),
                                      1);
                  if ((bVar46 & 1) != 0) goto LAB_1004ebff0;
                  lVar19 = lVar19 + 8;
                  uVar31 = uVar31 + lVar19 & (ulong)pppppplVar43;
                  uVar12 = *(undefined8 *)((long)pppppplVar37 + uVar31);
                  uVar29 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar23),
                                    CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar23),
                                             CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar23),
                                                      CONCAT14(-((byte)((ulong)uVar12 >> 0x20) ==
                                                                bVar23),CONCAT13(-((byte)((ulong)
                                                  uVar12 >> 0x18) == bVar23),
                                                  CONCAT12(-((byte)((ulong)uVar12 >> 0x10) == bVar23
                                                            ),CONCAT11(-((byte)((ulong)uVar12 >> 8)
                                                                        == bVar23),
                                                                       -((byte)uVar12 == bVar23)))))
                                                  ))) & 0x8080808080808080;
                }
                uVar44 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
                uVar44 = uVar31 + ((ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3) &
                         (ulong)pppppplVar43;
                if (pppppplVar27 == (long ******)pppppplVar37[uVar44 * -2 + -1]) {
                  iVar11 = _memcmp(pppppplVar14,pppppplVar37[uVar44 * -2 + -2],pppppplVar27);
                  if (iVar11 == 0) goto LAB_1004ebed4;
                }
                uVar29 = uVar29 - 1 & uVar29;
              } while( true );
            }
LAB_1004ebff0:
            if (0x1b < (long)pppppplVar27) {
              if ((long)pppppplVar27 < 0x1f) {
                if (pppppplVar27 == (long ******)0x1c) {
                  if (((*pppppplVar14 == (long *****)0x2d6b6f6f6c74756f &&
                       pppppplVar14[1] == (long *****)0x706f406c69616d65) &&
                      pppppplVar14[2] == (long *****)0x7275632d69616e65) &&
                      *(int *)(pppppplVar14 + 3) == 0x64657461) goto LAB_1004ec5c4;
                }
                else if (pppppplVar27 == (long ******)0x1e) {
                  ppppplVar41 = pppppplVar14[2];
                  ppppplVar32 = *(long ******)((long)pppppplVar14 + 0x16);
                  bVar8 = *pppppplVar14 == (long *****)0x632d656c676f6f67 &&
                          pppppplVar14[1] == (long *****)0x407261646e656c61;
                  ppppplVar26 = (long *****)0x632d69616e65706f;
                  goto LAB_1004ec4e0;
                }
              }
              else {
                if (pppppplVar27 == (long ******)0x1f) {
                  ppppplVar41 = pppppplVar14[2];
                  ppppplVar32 = *(long ******)((long)pppppplVar14 + 0x17);
                  bVar8 = *pppppplVar14 == (long *****)0x2d6b6f6f6c74756f &&
                          pppppplVar14[1] == (long *****)0x7261646e656c6163;
                  ppppplVar26 = (long *****)0x2d69616e65706f40;
                }
                else {
                  if (pppppplVar27 != (long ******)0x20) goto LAB_1004ec4fc;
                  ppppplVar41 = pppppplVar14[2];
                  ppppplVar32 = pppppplVar14[3];
                  bVar8 = *pppppplVar14 == (long *****)0x642d69616e65706f &&
                          pppppplVar14[1] == (long *****)0x7265706f6c657665;
                  ppppplVar26 = (long *****)0x69616e65706f4073;
                }
LAB_1004ec4e0:
                bVar8 = bVar8 && ppppplVar41 == ppppplVar26;
                uVar29 = 0x74617275632d;
LAB_1004ec4f0:
                if (bVar8 && ppppplVar32 == (long *****)(uVar29 | 0x6465000000000000))
                goto LAB_1004ec5c4;
              }
LAB_1004ec4fc:
              if (ppppppplVar21[0x1c2] != (long ******)0x0) {
                uVar31 = FUN_100e8e738(ppppppplVar21[0x1c3],ppppppplVar21[0x1c4],pppppplVar14,
                                       pppppplVar27);
                lVar19 = 0;
                pppppplVar43 = ppppppplVar21[0x1c0];
                pppppplVar37 = ppppppplVar21[0x1bf];
                bVar23 = (byte)(uVar31 >> 0x39);
                uVar31 = uVar31 & (ulong)pppppplVar43;
                uVar12 = *(undefined8 *)((long)pppppplVar37 + uVar31);
                uVar29 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar23),
                                  CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar23),
                                           CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar23),
                                                    CONCAT14(-((byte)((ulong)uVar12 >> 0x20) ==
                                                              bVar23),CONCAT13(-((byte)((ulong)
                                                  uVar12 >> 0x18) == bVar23),
                                                  CONCAT12(-((byte)((ulong)uVar12 >> 0x10) == bVar23
                                                            ),CONCAT11(-((byte)((ulong)uVar12 >> 8)
                                                                        == bVar23),
                                                                       -((byte)uVar12 == bVar23)))))
                                                  ))) & 0x8080808080808080;
                while( true ) {
                  for (; uVar29 != 0; uVar29 = uVar29 - 1 & uVar29) {
                    uVar44 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar44 & 0xffff0000ffff) << 0x10;
                    uVar44 = uVar31 + ((ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3) &
                             (ulong)pppppplVar43;
                    if (pppppplVar27 == (long ******)pppppplVar37[uVar44 * -2 + -1]) {
                      iVar11 = _memcmp(pppppplVar14,pppppplVar37[uVar44 * -2 + -2],pppppplVar27);
                      if (iVar11 == 0) goto LAB_1004ec5c4;
                    }
                  }
                  bVar46 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar12 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar12 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar12 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)
                                                  uVar12 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar12 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar12 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar12 >> 8) == -1),-((char)uVar12 == -1)))))))),
                                      1);
                  if ((bVar46 & 1) != 0) break;
                  lVar19 = lVar19 + 8;
                  uVar31 = uVar31 + lVar19 & (ulong)pppppplVar43;
                  uVar12 = *(undefined8 *)((long)pppppplVar37 + uVar31);
                  uVar29 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar23),
                                    CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar23),
                                             CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar23),
                                                      CONCAT14(-((byte)((ulong)uVar12 >> 0x20) ==
                                                                bVar23),CONCAT13(-((byte)((ulong)
                                                  uVar12 >> 0x18) == bVar23),
                                                  CONCAT12(-((byte)((ulong)uVar12 >> 0x10) == bVar23
                                                            ),CONCAT11(-((byte)((ulong)uVar12 >> 8)
                                                                        == bVar23),
                                                                       -((byte)uVar12 == bVar23)))))
                                                  ))) & 0x8080808080808080;
                }
              }
LAB_1004ebed4:
              FUN_100e41378(ppppppplVar21 + 0x215);
              *(undefined1 *)(ppppppplVar21 + 0x453) = 0;
              ppppppplVar15 = (long *******)ppppppplVar21[0x1be];
              ppppppplVar40 = (long *******)ppppppplVar21[0x1bc];
              if (ppppppplVar40 == ppppppplVar15) {
                *ppppppplVar18 = (long ******)0x8000000000000000;
                uVar29 = (long)ppppppplVar15 - (long)ppppppplVar40;
                goto joined_r0x0001004ebe08;
              }
              ppppppplVar21[0x1bc] = (long ******)(ppppppplVar40 + 0x4a);
              _memcpy(ppppppplVar18,ppppppplVar40,0x250);
              pppppplVar14 = ppppppplVar21[0x1cb];
              goto joined_r0x0001004ebdf8;
            }
            if ((long)pppppplVar27 < 0x19) {
              if (pppppplVar27 == (long ******)0x14) {
                if (((((*pppppplVar14 == (long *****)0x706f406b63616c73 &&
                       pppppplVar14[1] == (long *****)0x7275632d69616e65) &&
                       *(int *)(pppppplVar14 + 2) == 0x64657461) ||
                     ((*pppppplVar14 == (long *****)0x706f406c69616d67 &&
                      pppppplVar14[1] == (long *****)0x7275632d69616e65) &&
                      *(int *)(pppppplVar14 + 2) == 0x64657461)) ||
                    ((*pppppplVar14 == (long *****)0x706f4061766e6163 &&
                     pppppplVar14[1] == (long *****)0x7275632d69616e65) &&
                     *(int *)(pppppplVar14 + 2) == 0x64657461)) ||
                   (((*pppppplVar14 == (long *****)0x706f40736d616574 &&
                     pppppplVar14[1] == (long *****)0x7275632d69616e65) &&
                     *(int *)(pppppplVar14 + 2) == 0x64657461 ||
                    ((*pppppplVar14 == (long *****)0x706f40616d676966 &&
                     pppppplVar14[1] == (long *****)0x7275632d69616e65) &&
                     *(int *)(pppppplVar14 + 2) == 0x64657461)))) goto LAB_1004ec5c4;
              }
              else if ((pppppplVar27 == (long ******)0x15) &&
                      ((((*pppppplVar14 == (long *****)0x6f40627568746967 &&
                         pppppplVar14[1] == (long *****)0x75632d69616e6570) &&
                         *(long *)((long)pppppplVar14 + 0xd) == 0x646574617275632d ||
                        ((*pppppplVar14 == (long *****)0x6f406e6f69746f6e &&
                         pppppplVar14[1] == (long *****)0x75632d69616e6570) &&
                         *(long *)((long)pppppplVar14 + 0xd) == 0x646574617275632d)) ||
                       (((*pppppplVar14 == (long *****)0x6f407261656e696c &&
                         pppppplVar14[1] == (long *****)0x75632d69616e6570) &&
                         *(long *)((long)pppppplVar14 + 0xd) == 0x646574617275632d ||
                        ((*pppppplVar14 == (long *****)0x6f40656d6f726863 &&
                         pppppplVar14[1] == (long *****)0x75622d69616e6570) &&
                         *(long *)((long)pppppplVar14 + 0xd) == 0x64656c646e75622d))))))
              goto LAB_1004ec5c4;
              goto LAB_1004ec4fc;
            }
            if (pppppplVar27 == (long ******)0x19) {
              if (((*pppppplVar14 == (long *****)0x696f706572616873 &&
                   pppppplVar14[1] == (long *****)0x616e65706f40746e) &&
                  pppppplVar14[2] == (long *****)0x6574617275632d69) &&
                  *(char *)(pppppplVar14 + 3) == 'd') goto LAB_1004ec5c4;
              goto LAB_1004ec4fc;
            }
            if (pppppplVar27 != (long ******)0x1b) goto LAB_1004ec4fc;
            if (((*pppppplVar14 != (long *****)0x642d656c676f6f67 ||
                 pppppplVar14[1] != (long *****)0x65706f4065766972) ||
                pppppplVar14[2] != (long *****)0x617275632d69616e) ||
                *(long *)((long)pppppplVar14 + 0x13) != 0x646574617275632d) {
              ppppplVar32 = *(long ******)((long)pppppplVar14 + 0x13);
              bVar8 = (*pppppplVar14 == (long *****)0x72657475706d6f63 &&
                      pppppplVar14[1] == (long *****)0x65706f406573752d) &&
                      pppppplVar14[2] == (long *****)0x646e75622d69616e;
              uVar29 = 0x6c646e75622d;
              goto LAB_1004ec4f0;
            }
LAB_1004ec5c4:
            func_0x000100025ae8(ppppppplVar21 + 0x44f,ppppppplVar21 + 0x215);
            pppppplVar14 = ppppppplVar21[0x44d];
            pppppplVar27 = ppppppplVar21[0x44e];
            *(undefined1 *)(ppppppplVar21 + 0x453) = 0;
            _memcpy(ppppppplVar21 + 0x25f,ppppppplVar21 + 0x215,0x250);
            ppppppplVar21[0x2a9] = (long ******)(ppppppplVar21 + 0xf);
            ppppppplVar21[0x2aa] = (long ******)(ppppppplVar21 + 0x6f);
            ppppppplVar21[0x2ab] = pppppplVar14;
            ppppppplVar21[0x2ac] = pppppplVar27;
            *(undefined1 *)(ppppppplVar21 + 0x385) = 0;
LAB_1004eb990:
            puStack_b20 = (undefined1 *)((long)ppppppplVar21 + 0x229b);
            FUN_100a7f864(&ppppppplStack_a90,ppppppplVar21 + 0x25f,uVar22);
            ppppppplVar15 = ppppppplStack_a90;
            if (ppppppplStack_a90 == (long *******)0x8000000000000001) {
              *puStack_b20 = 3;
              goto LAB_1004eb77c;
            }
            ppppppplStack_508 = ppppppplStack_a80;
            ppppppplStack_510 = ppppppplStack_a88;
            ppppppplStack_500 = (long *******)auStack_a78;
            ppppppplStack_4e8 = ppppppplStack_a60;
            ppppppplStack_4e0 = ppppppplStack_a58;
            auStack_4f8 = auStack_a70;
            _memcpy(&ppppppplStack_7b0,&ppppppplStack_a50,0x2a0);
            FUN_100d1b41c(ppppppplVar21 + 0x25f);
            if (ppppppplVar15 == (long *******)0x8000000000000000) {
              ppppppplStack_a88 = ppppppplStack_508;
              ppppppplStack_a90 = ppppppplStack_510;
              ppppppplStack_a80 = ppppppplStack_500;
              auStack_a70._8_8_ = ppppppplStack_4e8;
              ppppppplStack_a60 = ppppppplStack_4e0;
              _auStack_a78 = auStack_4f8;
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                if (1 < bRam000000010b62a978 - 1) {
                  if (bRam000000010b62a978 != 0) {
                    cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                      );
                    if (cVar9 != '\0') goto LAB_1004eba50;
                  }
                  goto LAB_1004ebc84;
                }
LAB_1004eba50:
                uVar29 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                   );
                _auStack_a78 = _auStack_a78;
                if ((uVar29 & 1) == 0) goto LAB_1004ebc84;
                lStack_138 = ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                             + 0x30;
                ppppppplStack_1f0 = ppppppplVar21 + 0x44f;
                ppppppplStack_1e8 = (long *******)&DAT_10112965c;
                ppppppplStack_1e0 = (long *******)&ppppppplStack_a90;
                pppppplStack_1d8 =
                     (long ******)
                     &
                     __ZN88__LT_codex_core_plugins__marketplace__MarketplaceError_u20_as_u20_core__fmt__Display_GT_3fmt17h08f3d90fa50e678aE
                ;
                ppppppplStack_118 = (long *******)&ppppppplStack_1f0;
                ppppplStack_120 = (long *****)&UNK_108ca6198;
                pppppplStack_130 = &ppppplStack_120;
                puStack_128 = &UNK_10b208fd0;
                ppppppplStack_148 = &pppppplStack_130;
                ppppppplStack_150 = (long *******)0x1;
                ppppppplStack_140 = (long *******)0x1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                           ,&ppppppplStack_150);
                lVar19 = 
                ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uStack_108 = *(undefined8 *)
                                (
                                ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                + 0x20);
                  uStack_100 = *(undefined8 *)
                                (
                                ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                + 0x28);
                  uStack_110 = 2;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_110);
                  if (iVar11 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar19,puVar3,puVar2,&uStack_110,&ppppppplStack_150);
                  }
                }
              }
              else {
LAB_1004ebc84:
                lVar19 = 
                ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uStack_160 = *(undefined8 *)
                                (
                                ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                + 0x20);
                  uStack_158 = *(undefined8 *)
                                (
                                ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                + 0x28);
                  uStack_168 = 2;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_168);
                  if (iVar11 != 0) {
                    lStack_138 = ___ZN10codex_core7plugins12discoverable38list_tool_suggest_discoverable_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6f6411463725530E
                                 + 0x30;
                    ppppppplStack_1f0 = ppppppplVar21 + 0x44f;
                    ppppppplStack_1e8 = (long *******)&DAT_10112965c;
                    ppppppplStack_1e0 = (long *******)&ppppppplStack_a90;
                    pppppplStack_1d8 =
                         (long ******)
                         &
                         __ZN88__LT_codex_core_plugins__marketplace__MarketplaceError_u20_as_u20_core__fmt__Display_GT_3fmt17h08f3d90fa50e678aE
                    ;
                    ppppppplStack_118 = (long *******)&ppppppplStack_1f0;
                    ppppplStack_120 = (long *****)&UNK_108ca6198;
                    pppppplStack_130 = &ppppplStack_120;
                    puStack_128 = &UNK_10b208fd0;
                    ppppppplStack_148 = &pppppplStack_130;
                    ppppppplStack_150 = (long *******)0x1;
                    ppppppplStack_140 = (long *******)0x1;
                    uStack_108 = uStack_160;
                    uStack_110 = uStack_168;
                    uStack_100 = uStack_158;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar19,puVar3,puVar2,&uStack_110,&ppppppplStack_150);
                  }
                }
              }
              func_0x000100e29c68(&ppppppplStack_a90);
            }
            else {
              ppppppplStack_4c0 = ppppppplStack_508;
              ppppppplStack_4c8 = ppppppplStack_510;
              ppppppplStack_4b8 = ppppppplStack_500;
              ppppppplStack_4a0 = ppppppplStack_4e8;
              ppppppplStack_4d0 = ppppppplVar15;
              ppppppplStack_498 = ppppppplStack_4e0;
              auStack_4b0 = auStack_4f8;
              _memcpy(&ppppppplStack_490,&ppppppplStack_7b0,0x2a0);
              __ZN18codex_core_plugins7manager136__LT_impl_u20_core__convert__From_LT_codex_core_plugins__manager__PluginDetail_GT__u20_for_u20_codex_plugin__PluginCapabilitySummary_GT_4from17h3fd9da9e284e186eE
                        (&ppppppplStack_1f0,&ppppppplStack_4d0);
              ppppppplStack_a90 = ppppppplStack_1f0;
              ppppppplStack_a88 = ppppppplStack_1e8;
              auStack_a78 = (undefined1  [8])pppppplStack_1d8;
              ppppppplStack_a80 = ppppppplStack_1e0;
              auStack_a70._0_8_ = pppppplStack_1d0;
              auStack_a70._8_8_ = ppppppplStack_1c8;
              pppppplStack_a28 = pppppplStack_188;
              pppppplStack_a20 = pppppplStack_180;
              uStack_a18 = uStack_178;
              ppppppplStack_a58 = ppppppplStack_1b8;
              ppppppplStack_a60 = ppppppplStack_1c0;
              ppppppplStack_a50 = ppppppplStack_1b0;
              ppppppplStack_a48 = ppppppplStack_1a8;
              ppppppplStack_a40 = ppppppplStack_1a0;
              pppppplStack_a30 = pppppplStack_190;
              ppppppplStack_a38 = ppppppplStack_198;
              pppppplVar14 = ppppppplVar21[1099];
              if (pppppplVar14 == ppppppplVar21[0x449]) {
                FUN_107c05b70(ppppppplVar21 + 0x449);
              }
              pppppplVar27 = ppppppplVar21[0x44a] + (long)pppppplVar14 * 0x10;
              pppppplVar27[9] = (long *****)ppppppplStack_a48;
              pppppplVar27[8] = (long *****)ppppppplStack_a50;
              pppppplVar27[0xb] = (long *****)ppppppplStack_a38;
              pppppplVar27[10] = (long *****)ppppppplStack_a40;
              pppppplVar27[0xd] = (long *****)pppppplStack_a28;
              pppppplVar27[0xc] = (long *****)pppppplStack_a30;
              pppppplVar27[0xf] = (long *****)CONCAT71(uStack_a17,uStack_a18);
              pppppplVar27[0xe] = (long *****)pppppplStack_a20;
              pppppplVar27[1] = (long *****)ppppppplStack_a88;
              *pppppplVar27 = (long *****)ppppppplStack_a90;
              pppppplVar27[3] = (long *****)auStack_a78;
              pppppplVar27[2] = (long *****)ppppppplStack_a80;
              pppppplVar27[5] = (long *****)auStack_a70._8_8_;
              pppppplVar27[4] = (long *****)auStack_a70._0_8_;
              pppppplVar27[7] = (long *****)ppppppplStack_a58;
              pppppplVar27[6] = (long *****)ppppppplStack_a60;
              ppppppplVar21[1099] = (long ******)((long)pppppplVar14 + 1);
            }
            if (ppppppplVar21[0x44f] != (long ******)0x0) {
              _free(ppppppplVar21[0x450]);
            }
            *(undefined1 *)(ppppppplVar21 + 0x453) = 0;
            ppppppplVar15 = (long *******)ppppppplVar21[0x1be];
            ppppppplVar40 = (long *******)ppppppplVar21[0x1bc];
          } while (ppppppplVar40 != ppppppplVar15);
        }
        ppppppplVar21[0x1cb] = (long ******)0x8000000000000000;
LAB_1004ebe38:
        if (ppppppplVar21[0x1bd] != (long ******)0x0) {
          _free(ppppppplVar21[0x1bb]);
        }
        if (ppppppplVar21[0x44c] != (long ******)0x0) {
          _free(ppppppplVar21[0x44d]);
        }
        if (ppppppplVar21[0x1b2] != (long ******)0x0) {
          _free(ppppppplVar21[0x1b3]);
        }
        if ((-0x7fffffffffffffff < (long)ppppppplVar21[0x1b8]) &&
           (ppppppplVar21[0x1b8] != (long ******)0x0)) {
          _free(ppppppplVar21[0x1b9]);
        }
        *(undefined1 *)((long)ppppppplVar21 + 0x2299) = 0;
        ppppppplVar15 = (long *******)ppppppplVar21[0x1a2];
        ppppppplVar18 = (long *******)ppppppplVar21[0x1a0];
      } while( true );
    }
LAB_1004ea780:
    if (pppppplVar27 != (long ******)0x0) goto code_r0x0001004ea784;
    ppppppplVar17 = (long *******)0x0;
  }
LAB_1004eab68:
  puStack_b20 = (undefined1 *)((long)ppppppplVar21 + 0x229b);
  ppppppplVar35 = (long *******)0x0;
  *puStack_b20 = 1;
LAB_1004eab78:
  FUN_100cf2b8c(ppppppplVar21 + 0xf);
  if (ppppppplVar17 == (long *******)0x8000000000000000) {
    pppppplVar14 = ppppppplVar21[0x455];
    if ((long)ppppppplVar21[0x457] - (long)pppppplVar14 != 0) {
      uVar29 = (ulong)((long)ppppppplVar21[0x457] - (long)pppppplVar14) / 0x270;
      do {
        FUN_100e3b46c(pppppplVar14);
        pppppplVar14 = pppppplVar14 + 0x4e;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    if (ppppppplVar21[0x456] != (long ******)0x0) {
      _free(ppppppplVar21[0x454]);
    }
    *(undefined1 *)(ppppppplVar21 + 0xe) = 0;
    ppppppplVar17 = (long *******)0x8000000000000000;
    pppppplVar14 = ppppppplVar21[3];
  }
  else {
    ppppppplStack_a58 = ppppppplVar18 + (long)ppppppplVar35 * 0x10;
    *(undefined1 *)(ppppppplVar21 + 0xe) = 0;
    ppppppplStack_a88 = (long *******)ppppppplVar21[0x455];
    ppppppplVar40 = (long *******)ppppppplVar21[0x454];
    auStack_a78 = (undefined1  [8])ppppppplVar21[0x457];
    ppppppplStack_a80 = (long *******)ppppppplVar21[0x456];
    ppppppplVar15 = ppppppplVar35;
    if (ppppppplVar40 != (long *******)0x0) {
      ppppppplVar15 =
           (long *******)
           ((long)ppppppplVar35 +
           ((ulong)((long)auStack_a78 - (long)ppppppplStack_a88) >> 4) * 0x6f96f96f96f96f97);
    }
    ppppppplStack_a90 = ppppppplVar40;
    auStack_a70._0_8_ = ppppppplVar18;
    auStack_a70._8_8_ = ppppppplVar18;
    ppppppplStack_a60 = ppppppplVar17;
    if (ppppppplVar15 == (long *******)0x0) {
      ppppppplStack_1e8 = (long *******)0x8;
      ppppppplVar18 = ppppppplStack_1e8;
    }
    else {
      ppppppplVar18 = (long *******)_malloc((long)ppppppplVar15 << 4);
      if (ppppppplVar18 == (long *******)0x0) {
        FUN_107c03c64(8,(long)ppppppplVar15 << 4);
LAB_1004eb028:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1004eb02c);
        (*pcVar7)();
      }
    }
    ppppppplStack_1e8 = ppppppplVar18;
    if (ppppppplVar40 != (long *******)0x0) {
      ppppppplVar35 =
           (long *******)
           ((long)ppppppplVar35 +
           ((ulong)((long)auStack_a78 - (long)ppppppplStack_a88) >> 4) * 0x6f96f96f96f96f97);
    }
    ppppppplStack_1e0 = (long *******)0x0;
    ppppppplStack_1f0 = ppppppplVar15;
    if (ppppppplVar15 < ppppppplVar35) {
      thunk_FUN_108855060(&ppppppplStack_1f0,0,ppppppplVar35,8,0x10);
      auVar34 = auStack_a78;
      ppppppplVar18 = ppppppplStack_1e8;
      ppppppplVar15 = ppppppplStack_1e0;
    }
    else {
      ppppppplVar15 = (long *******)0x0;
      auVar34 = auStack_a78;
      ppppppplVar18 = ppppppplStack_1e8;
    }
    auStack_a78 = auVar34;
    ppppppplStack_1e8 = ppppppplVar18;
    ppppppplStack_1e0 = ppppppplVar15;
    if (ppppppplVar40 != (long *******)0x0) {
      ppppppplStack_7b0 = ppppppplStack_a90;
      ppppppplStack_7a8 = ppppppplStack_a88;
      ppppppplStack_7a0 = ppppppplStack_a80;
      ppppppplStack_798 = (long *******)auVar34;
      if ((undefined1  [8])ppppppplStack_a88 != auVar34) {
        ppppppplVar17 = ppppppplVar18 + (long)ppppppplVar15 * 2 + 1;
        ppppppplVar40 = ppppppplStack_a88;
        do {
          _memcpy(&ppppppplStack_4d0,ppppppplVar40,0x270);
          ppppppplVar35 = ppppppplVar40 + 0x4e;
          pppppplVar14 = (long ******)_malloc(0x270);
          if (pppppplVar14 == (long ******)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x270);
            goto LAB_1004eb028;
          }
          _memmove(pppppplVar14,ppppppplVar40,0x270);
          ppppppplVar17[-1] = (long ******)0x0;
          *ppppppplVar17 = pppppplVar14;
          ppppppplVar15 = (long *******)((long)ppppppplVar15 + 1);
          ppppppplVar17 = ppppppplVar17 + 2;
          ppppppplVar40 = ppppppplVar35;
        } while ((undefined1  [8])ppppppplVar35 != auVar34);
      }
      if (ppppppplStack_7a0 != (long *******)0x0) {
        _free(ppppppplStack_7b0);
      }
    }
    ppppppplVar17 = ppppppplStack_a58;
    ppppppplStack_7a8 = (long *******)auStack_a70._8_8_;
    ppppppplStack_7b0 = (long *******)auStack_a70._0_8_;
    ppppppplStack_798 = ppppppplStack_a58;
    ppppppplStack_7a0 = ppppppplStack_a60;
    if ((long *******)auStack_a70._8_8_ != ppppppplStack_a58) {
      ppppppplVar18 = ppppppplVar18 + (long)ppppppplVar15 * 2 + 1;
      ppppppplVar40 = (long *******)auStack_a70._8_8_;
      do {
        ppppppplStack_488 = (long *******)ppppppplVar40[9];
        ppppppplStack_490 = (long *******)ppppppplVar40[8];
        ppppppplStack_478 = (long *******)ppppppplVar40[0xb];
        ppppppplStack_480 = (long *******)ppppppplVar40[10];
        pppppplStack_468 = ppppppplVar40[0xd];
        pppppplStack_470 = ppppppplVar40[0xc];
        pppppplStack_458 = ppppppplVar40[0xf];
        pppppplStack_460 = ppppppplVar40[0xe];
        ppppppplStack_4c8 = (long *******)ppppppplVar40[1];
        ppppppplStack_4d0 = (long *******)*ppppppplVar40;
        ppppppplStack_4b8 = (long *******)ppppppplVar40[3];
        ppppppplStack_4c0 = (long *******)ppppppplVar40[2];
        auStack_4b0._8_8_ = ppppppplVar40[5];
        auStack_4b0._0_8_ = ppppppplVar40[4];
        ppppppplStack_498 = (long *******)ppppppplVar40[7];
        ppppppplStack_4a0 = (long *******)ppppppplVar40[6];
        ppppppplVar35 = ppppppplVar40 + 0x10;
        pppppplVar14 = (long ******)_malloc(0x80);
        if (pppppplVar14 == (long ******)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x80);
          goto LAB_1004eb028;
        }
        pppppplVar43 = ppppppplVar40[1];
        pppppplVar27 = *ppppppplVar40;
        pppppplVar48 = ppppppplVar40[3];
        pppppplVar37 = ppppppplVar40[2];
        pppppplVar49 = ppppppplVar40[4];
        pppppplVar51 = ppppppplVar40[7];
        pppppplVar50 = ppppppplVar40[6];
        pppppplVar14[5] = (long *****)ppppppplVar40[5];
        pppppplVar14[4] = (long *****)pppppplVar49;
        pppppplVar14[7] = (long *****)pppppplVar51;
        pppppplVar14[6] = (long *****)pppppplVar50;
        pppppplVar14[1] = (long *****)pppppplVar43;
        *pppppplVar14 = (long *****)pppppplVar27;
        pppppplVar14[3] = (long *****)pppppplVar48;
        pppppplVar14[2] = (long *****)pppppplVar37;
        pppppplVar43 = ppppppplVar40[9];
        pppppplVar27 = ppppppplVar40[8];
        pppppplVar48 = ppppppplVar40[0xb];
        pppppplVar37 = ppppppplVar40[10];
        pppppplVar49 = ppppppplVar40[0xc];
        pppppplVar51 = ppppppplVar40[0xf];
        pppppplVar50 = ppppppplVar40[0xe];
        pppppplVar14[0xd] = (long *****)ppppppplVar40[0xd];
        pppppplVar14[0xc] = (long *****)pppppplVar49;
        pppppplVar14[0xf] = (long *****)pppppplVar51;
        pppppplVar14[0xe] = (long *****)pppppplVar50;
        pppppplVar14[9] = (long *****)pppppplVar43;
        pppppplVar14[8] = (long *****)pppppplVar27;
        pppppplVar14[0xb] = (long *****)pppppplVar48;
        pppppplVar14[10] = (long *****)pppppplVar37;
        ppppppplVar18[-1] = (long ******)0x1;
        *ppppppplVar18 = pppppplVar14;
        ppppppplVar15 = (long *******)((long)ppppppplVar15 + 1);
        ppppppplVar18 = ppppppplVar18 + 2;
        ppppppplVar40 = ppppppplVar35;
      } while (ppppppplVar35 != ppppppplVar17);
    }
    if (ppppppplStack_7a0 != (long *******)0x0) {
      _free(ppppppplStack_7b0);
    }
    *(undefined1 *)(ppppppplVar21 + 0xe) = 0;
    pppppplVar14 = ppppppplVar21[3];
    ppppppplVar17 = ppppppplStack_1f0;
    ppppppplVar18 = ppppppplStack_1e8;
  }
  if (pppppplVar14 != (long ******)0x0) {
    pppppplVar27 = ppppppplVar21[5];
    if (pppppplVar27 != (long ******)0x0) {
      pppppplVar43 = ppppppplVar21[2];
      pppppplVar37 = pppppplVar43 + 1;
      ppppplVar41 = *pppppplVar43;
      uVar29 = CONCAT17(-(-1 < (long)ppppplVar41),
                        CONCAT16(-(-1 < (char)((ulong)ppppplVar41 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)ppppplVar41 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)ppppplVar41 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)ppppplVar41 >> 0x18
                                                                         )),
                                                            CONCAT12(-(-1 < (char)((ulong)
                                                  ppppplVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)ppppplVar41 >> 8)),
                                                           -(-1 < (char)ppppplVar41)))))))) &
               0x8080808080808080;
      do {
        while (uVar29 == 0) {
          ppppplVar41 = *pppppplVar37;
          pppppplVar43 = pppppplVar43 + -0x18;
          pppppplVar37 = pppppplVar37 + 1;
          uVar29 = CONCAT17(-(-1 < (long)ppppplVar41),
                            CONCAT16(-(-1 < (char)((ulong)ppppplVar41 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)ppppplVar41 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)ppppplVar41 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)ppppplVar41 >>
                                                                             0x18)),
                                                                CONCAT12(-(-1 < (char)((ulong)
                                                  ppppplVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)ppppplVar41 >> 8)),
                                                           -(-1 < (char)ppppplVar41)))))))) &
                   0x8080808080808080;
        }
        uVar31 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        iVar11 = (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
        if (pppppplVar43[(long)-iVar11 * 3 + -3] != (long *****)0x0) {
          _free(pppppplVar43[(long)-iVar11 * 3 + -2]);
        }
        uVar29 = uVar29 - 1 & uVar29;
        pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
      } while (pppppplVar27 != (long ******)0x0);
    }
    if ((long)pppppplVar14 * 0x19 != -0x21) {
      _free(ppppppplVar21[2] + (long)pppppplVar14 * -3 + -3);
    }
  }
  *puVar13 = ppppppplVar17;
  puVar13[1] = ppppppplVar18;
  uVar28 = 1;
  puVar13[2] = ppppppplVar15;
LAB_1004eae80:
  *(undefined1 *)((long)ppppppplVar21 + 0x71) = uVar28;
  return;
LAB_1004ea934:
  ppppppplVar15 = (long *******)0x0;
  ppppppplVar17 = (long *******)0x0;
LAB_1004ea3e8:
  *(undefined1 *)((long)ppppppplVar21 + 0x99) = 1;
  FUN_100d01ae0(ppppppplVar21 + 0xf);
  pppppplVar14 = ppppppplVar21[2];
  pppppplVar27 = pppppplVar14 + 1;
  ppppplVar41 = *pppppplVar14;
  pppppplVar43 = ppppppplVar21[5];
  ppppppplStack_1f0 = ppppppplVar15;
  ppppppplStack_1e8 = ppppppplVar18;
  ppppppplStack_1e0 = ppppppplVar17;
  pauVar16 = (undefined1 (*) [16])
             (*
             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
             )();
  if (pauVar16[1][0] == '\x01') {
    auVar59 = *pauVar16;
  }
  else {
    auVar59 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar16 + 8) = auVar59._8_8_;
    pauVar16[1][0] = 1;
  }
  *(long *)*pauVar16 = auVar59._0_8_ + 1;
  ppppppplStack_4c8 = (long *******)0x0;
  ppppppplStack_4d0 = (long *******)&UNK_108c56c70;
  ppppppplStack_4b8 = (long *******)0x0;
  ppppppplStack_4c0 = (long *******)0x0;
  auStack_4b0 = auVar59;
  if (ppppppplVar17 != (long *******)0x0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h237b9c2a934c5d59E
              (&ppppppplStack_4d0,ppppppplVar17,auStack_4b0,1);
    do {
      func_0x000100025ae8(&ppppppplStack_a90,ppppppplVar18);
      FUN_1016e6d00(&ppppppplStack_4d0,&ppppppplStack_a90);
      ppppppplVar18 = ppppppplVar18 + 0x4e;
      ppppppplVar17 = (long *******)((long)ppppppplVar17 + -1);
    } while (ppppppplVar17 != (long *******)0x0);
  }
  ppppppplStack_a88 = ppppppplStack_4c8;
  ppppppplStack_a90 = ppppppplStack_4d0;
  auStack_a78 = (undefined1  [8])ppppppplStack_4b8;
  ppppppplStack_a80 = ppppppplStack_4c0;
  auStack_a70 = auStack_4b0;
  if (pppppplVar43 != (long ******)0x0) {
    uVar29 = CONCAT17(-(-1 < (long)ppppplVar41),
                      CONCAT16(-(-1 < (char)((ulong)ppppplVar41 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)ppppplVar41 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)ppppplVar41 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)ppppplVar41 >> 0x18))
                                                          ,CONCAT12(-(-1 < (char)((ulong)ppppplVar41
                                                                                 >> 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  ppppplVar41 >> 8)),-(-1 < (char)ppppplVar41)))))))
                     ) & 0x8080808080808080;
    do {
      while (uVar29 == 0) {
        ppppplVar41 = *pppppplVar27;
        pppppplVar14 = pppppplVar14 + -0x18;
        pppppplVar27 = pppppplVar27 + 1;
        uVar29 = CONCAT17(-(-1 < (long)ppppplVar41),
                          CONCAT16(-(-1 < (char)((ulong)ppppplVar41 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)ppppplVar41 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)ppppplVar41 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)ppppplVar41 >>
                                                                           0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)
                                                  ppppplVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)ppppplVar41 >> 8)),
                                                           -(-1 < (char)ppppplVar41)))))))) &
                 0x8080808080808080;
      }
      uVar31 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      iVar11 = (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
      ppppppplVar15 = (long *******)pppppplVar14[(long)-iVar11 * 3 + -1];
      if (ppppppplVar15 == (long *******)0x0) {
        ppppppplVar18 = (long *******)0x1;
        ppppppplVar17 = (long *******)0x1;
      }
      else {
        ppppplVar41 = pppppplVar14[(long)-iVar11 * 3 + -2];
        ppppppplVar18 = (long *******)_malloc(ppppppplVar15);
        if (ppppppplVar18 == (long *******)0x0) {
          FUN_107c03c64(1,ppppppplVar15);
          goto LAB_1004eb028;
        }
        _memcpy(ppppppplVar18,ppppplVar41,ppppppplVar15);
        if (ppppppplVar15 == (long *******)0x8000000000000000) break;
        ppppppplVar17 = (long *******)_malloc(ppppppplVar15);
        if (ppppppplVar17 == (long *******)0x0) {
          FUN_107c03c64(1,ppppppplVar15);
          goto LAB_1004eb028;
        }
      }
      _memcpy(ppppppplVar17,ppppppplVar18,ppppppplVar15);
      ppppppplStack_4d0 = ppppppplVar15;
      ppppppplStack_4c8 = ppppppplVar17;
      ppppppplStack_4c0 = ppppppplVar15;
      iVar11 = FUN_1016e6d00(&ppppppplStack_a90,&ppppppplStack_4d0);
      if (iVar11 == 0) {
        ppppppplStack_7b0 = ppppppplVar15;
        ppppppplStack_7a8 = ppppppplVar18;
        ppppppplStack_7a0 = ppppppplVar15;
        __ZN16codex_connectors5merge28plugin_connector_to_app_info17h7f3c3cff04849623E
                  (&ppppppplStack_4d0,&ppppppplStack_7b0);
        ppppppplVar15 = ppppppplStack_1e0;
        if (ppppppplStack_1e0 == ppppppplStack_1f0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h7802485e1bdd8b0cE(&ppppppplStack_1f0);
        }
        _memcpy(ppppppplStack_1e8 + (long)ppppppplVar15 * 0x4e,&ppppppplStack_4d0,0x270);
        ppppppplStack_1e0 = (long *******)((long)ppppppplVar15 + 1);
      }
      else if (ppppppplVar15 != (long *******)0x0) {
        _free(ppppppplVar18);
      }
      uVar29 = uVar29 - 1 & uVar29;
      pppppplVar43 = (long ******)((long)pppppplVar43 + -1);
    } while (pppppplVar43 != (long ******)0x0);
  }
  ppppppplVar15 = ppppppplStack_1e8;
  if ((long *******)0x1 < ppppppplStack_1e0) {
    if (ppppppplStack_1e0 < (long *******)0x15) {
      lVar19 = (long)ppppppplStack_1e0 * 0x270 + -0x270;
      ppppppplVar18 = ppppppplStack_1e8;
      do {
        ppppppplVar18 = ppppppplVar18 + 0x4e;
        FUN_102c48788(ppppppplVar15,ppppppplVar18);
        lVar19 = lVar19 + -0x270;
      } while (lVar19 != 0);
    }
    else {
      __ZN4core5slice4sort6stable14driftsort_main17h8458875b6a724883E
                (ppppppplStack_1e8,ppppppplStack_1e0,&ppppppplStack_4d0);
    }
  }
  ppppppplVar40 = ppppppplStack_1e0;
  ppppppplVar17 = ppppppplStack_1e8;
  ppppppplVar18 = ppppppplStack_1f0;
  ppppppplVar15 = ppppppplStack_a88;
  if (ppppppplStack_a88 != (long *******)0x0) {
    if (auStack_a78 != (undefined1  [8])0x0) {
      ppppppplVar36 = ppppppplStack_a90 + 1;
      pppppplVar14 = *ppppppplStack_a90;
      uVar29 = CONCAT17(-(-1 < (long)pppppplVar14),
                        CONCAT16(-(-1 < (char)((ulong)pppppplVar14 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)pppppplVar14 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)pppppplVar14 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)pppppplVar14 >>
                                                                         0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)
                                                  pppppplVar14 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppppplVar14 >> 8)),
                                                           -(-1 < (char)pppppplVar14)))))))) &
               0x8080808080808080;
      ppppppplVar35 = ppppppplStack_a90;
      auVar34 = auStack_a78;
      do {
        while (uVar29 == 0) {
          pppppplVar14 = *ppppppplVar36;
          ppppppplVar35 = ppppppplVar35 + -0x18;
          ppppppplVar36 = ppppppplVar36 + 1;
          uVar29 = CONCAT17(-(-1 < (long)pppppplVar14),
                            CONCAT16(-(-1 < (char)((ulong)pppppplVar14 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)pppppplVar14 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)pppppplVar14 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)pppppplVar14 >>
                                                                             0x18)),
                                                                CONCAT12(-(-1 < (char)((ulong)
                                                  pppppplVar14 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppppplVar14 >> 8)),
                                                           -(-1 < (char)pppppplVar14)))))))) &
                   0x8080808080808080;
        }
        uVar31 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        iVar11 = (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
        if (ppppppplVar35[(long)-iVar11 * 3 + -3] != (long ******)0x0) {
          _free(ppppppplVar35[(long)-iVar11 * 3 + -2]);
        }
        uVar29 = uVar29 - 1 & uVar29;
        auVar34 = (undefined1  [8])((long)auVar34 + -1);
      } while (auVar34 != (undefined1  [8])0x0);
    }
    if ((long)ppppppplVar15 * 0x19 != -0x21) {
      _free(ppppppplStack_a90 + (long)ppppppplVar15 * -3 + -3);
    }
  }
  ppppppplStack_a88 = ppppppplVar17;
  ppppppplStack_a90 = ppppppplVar18;
  ppppppplStack_a80 = ppppppplVar40;
  pppppplVar14 = *ppppppplVar21;
  pppppplVar27 = ppppppplVar21[1];
  __ZN11codex_login4auth14default_client10originator17h4cdfc414e6d2fa8eE(&ppppppplStack_4d0);
  __ZN16codex_connectors6filter43filter_tool_suggest_discoverable_connectors17h244a05ee8cb3c9f9E
            (&ppppppplStack_7b0,&ppppppplStack_a90,pppppplVar14,pppppplVar27,ppppppplVar21 + 2,
             ppppppplStack_4c8,ppppppplStack_4c0);
  ppppppplVar21[0x454] = (long ******)ppppppplStack_7a8;
  ppppppplVar21[0x455] = (long ******)ppppppplStack_7a8;
  ppppppplVar21[0x456] = (long ******)ppppppplStack_7b0;
  ppppppplVar21[0x457] = (long ******)(ppppppplStack_7a8 + (long)ppppppplStack_7a0 * 0x4e);
  *(undefined1 *)(ppppppplVar21 + 0xe) = 1;
  if (ppppppplStack_4d0 != (long *******)0x0) {
    _free(ppppppplStack_4c8);
  }
  (*(code *)ppppppplStack_4b8[4])(&ppppppplStack_4a0,auStack_4b0._0_8_,auStack_4b0._8_8_);
  ppppppplVar15 = (long *******)ppppppplVar21[0xb];
  ppppppplVar21[0x452] = (long ******)ppppppplVar15;
  *(undefined2 *)((long)ppppppplVar21 + 0x229a) = 0;
  *(undefined2 *)(ppppppplVar21 + 0x453) = 0;
  pppppplVar14 = ppppppplVar15[0x471];
  goto joined_r0x0001004ea72c;
code_r0x0001004ea784:
  pppppplVar14 = (long ******)pppppplVar14[uVar31 + 3];
  pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
  goto LAB_1004ea73c;
}

