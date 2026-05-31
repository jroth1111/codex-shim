
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long __ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  byte bVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_118 [16];
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  long **pplStack_d0;
  undefined8 uStack_c8;
  
  if (*param_3 < 0) {
    return 0;
  }
  auVar22 = FUN_105dc9750(param_3,param_1,param_2);
  uVar20 = auVar22._8_8_;
  if ((auVar22._0_8_ & 1) == 0) {
    return 0;
  }
  if (uVar20 < (ulong)param_3[2]) {
    return param_3[1] + uVar20 * 0x68 + 0x18;
  }
  plVar12 = (long *)&UNK_10b46a548;
  auStack_118 = func_0x000108a07bdc(uVar20,param_3[2]);
  plVar11 = auStack_118._8_8_;
  uVar21 = auStack_118._0_8_;
  if (*plVar12 == -0x8000000000000000) {
    pauVar8 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar8[1][0] == '\x01') {
      auVar22 = *pauVar8;
    }
    else {
LAB_105dc75d0:
      auVar22 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar8 + 8) = auVar22._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar22._0_8_ + 1;
    FUN_105dc6c20(plVar12);
    *plVar12 = 0;
    plVar12[1] = 8;
    plVar12[2] = 0;
    plVar12[4] = 0;
    plVar12[3] = (long)&UNK_109b9f7e8;
    plVar12[6] = 0;
    plVar12[5] = 0;
    *(undefined1 (*) [16])(plVar12 + 7) = auVar22;
  }
  else if (*plVar12 < 0) {
    puStack_e0 = (undefined8 *)auStack_118;
    puStack_d8 = &DAT_105dc6838;
    pplStack_d0 = &plStack_108;
    uStack_c8 = 0x105dc8458;
    plStack_108 = plVar12;
    pauVar8 = (undefined1 (*) [16])
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s_cannot_access_key_in_JSON_108b2e0d4,&puStack_e0,&UNK_10b46a420);
    goto LAB_105dc75d0;
  }
  if (plVar11 != (long *)0x0) {
    plVar9 = (long *)_malloc(plVar11);
    if (plVar9 != (long *)0x0) goto LAB_105dc7404;
    func_0x0001087c9084(1,plVar11);
  }
  plVar9 = (long *)0x1;
LAB_105dc7404:
  _memcpy(plVar9,uVar21,plVar11);
  uVar10 = FUN_105dc7120(plVar12[7],plVar12[8],plVar9,plVar11);
  lVar15 = 0;
  lVar1 = plVar12[1];
  plVar3 = (long *)plVar12[2];
  lVar2 = plVar12[3];
  uVar4 = plVar12[4];
  bVar13 = (byte)(uVar10 >> 0x39);
  uVar16 = uVar10 & uVar4;
  uVar21 = *(undefined8 *)(lVar2 + uVar16);
  uVar20 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar13),
                    CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar13),
                             CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar13),
                                      CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar13),
                                               CONCAT13(-((byte)((ulong)uVar21 >> 0x18) == bVar13),
                                                        CONCAT12(-((byte)((ulong)uVar21 >> 0x10) ==
                                                                  bVar13),CONCAT11(-((byte)((ulong)
                                                  uVar21 >> 8) == bVar13),-((byte)uVar21 == bVar13))
                                                  ))))));
  while( true ) {
    for (uVar20 = uVar20 & 0x8080808080808080; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
      uVar5 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      plVar17 = (long *)(uVar16 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4);
      plVar18 = *(long **)(lVar2 + -8 + (long)plVar17 * -8);
      if (plVar3 <= plVar18) {
        func_0x000108a07bdc(plVar18,plVar3,&UNK_10b46a578);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x105dc760c);
        (*pcVar6)();
      }
      lVar14 = lVar1 + (long)plVar18 * 0x68;
      if (plVar11 == *(long **)(lVar14 + 0x10)) {
        iVar7 = _memcmp(plVar9,*(undefined8 *)(lVar14 + 8),plVar11);
        if (iVar7 == 0) {
          plStack_100 = plVar12;
          if (plVar11 != (long *)0x0) {
            _free(plVar9);
          }
          goto LAB_105dc7540;
        }
      }
    }
    bVar19 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar21 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar21 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar21 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar21 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar21 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar21 >> 8) == -1),
                                                           -((char)uVar21 == -1)))))))),1);
    if ((bVar19 & 1) != 0) break;
    lVar15 = lVar15 + 8;
    uVar16 = uVar16 + lVar15 & uVar4;
    uVar21 = *(undefined8 *)(lVar2 + uVar16);
    uVar20 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar13),
                      CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar13),
                               CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar13),
                                        CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar13),
                                                 CONCAT13(-((byte)((ulong)uVar21 >> 0x18) == bVar13)
                                                          ,CONCAT12(-((byte)((ulong)uVar21 >> 0x10)
                                                                     == bVar13),
                                                                    CONCAT11(-((byte)((ulong)uVar21
                                                                                     >> 8) == bVar13
                                                                              ),-((byte)uVar21 ==
                                                                                 bVar13))))))));
  }
  plVar18 = (long *)0x8000000000000000;
  plStack_100 = plVar9;
  plVar17 = plVar12;
  plStack_108 = plVar11;
  plStack_f8 = plVar11;
  plStack_f0 = plVar12;
  if (plVar11 == (long *)0x8000000000000000) {
LAB_105dc7540:
    plStack_108 = (long *)0x8000000000000000;
    plStack_f8 = plVar18;
    plStack_f0 = plVar17;
    uVar10 = uStack_e8;
  }
  uStack_e8 = uVar10;
  puStack_e0 = (undefined8 *)0x8000000000000000;
  lVar15 = __ZN10serde_json3map5Entry9or_insert17hfd4a8b60947332b5E(&plStack_108,&puStack_e0);
  return lVar15;
}

