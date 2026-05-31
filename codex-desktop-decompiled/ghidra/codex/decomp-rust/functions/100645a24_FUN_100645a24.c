
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100645a24(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *param_2;
  pauVar4 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar4[1][0] == '\x01') {
    auVar8 = *pauVar4;
  }
  else {
    auVar8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar4 + 8) = auVar8._8_8_;
    pauVar4[1][0] = 1;
  }
  *(long *)*pauVar4 = auVar8._0_8_ + 1;
  FUN_105dc99f8(&lStack_c0,param_3,auVar8._0_8_,auVar8._8_8_);
  uStack_78 = 0x8000000000000000;
  if (lStack_c0 == -0x7fffffffffffffff) {
    *param_1 = -0x7ffffffffffffffb;
    param_1[1] = lStack_b8;
  }
  else {
    uVar6 = CONCAT17(-(-1 < lVar7),
                     CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar7 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
            0x8080808080808080;
    plVar5 = param_2 + 1;
    lStack_f8 = lStack_98;
    lStack_100 = lStack_a0;
    lStack_e8 = lStack_88;
    lStack_f0 = lStack_90;
    uStack_d8 = 0x8000000000000000;
    lStack_e0 = lStack_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    lStack_118 = lStack_b8;
    lStack_120 = lStack_c0;
    lStack_108 = lStack_a8;
    lStack_110 = lStack_b0;
    do {
      if (param_3 == 0) {
        lStack_98 = lStack_f8;
        lStack_a0 = lStack_100;
        lStack_88 = lStack_e8;
        lStack_90 = lStack_f0;
        uStack_78 = uStack_d8;
        lStack_80 = lStack_e0;
        uStack_68 = uStack_c8;
        uStack_70 = uStack_d0;
        lStack_b8 = lStack_118;
        lStack_c0 = lStack_120;
        lStack_a8 = lStack_108;
        lStack_b0 = lStack_110;
        if (lStack_120 == -0x8000000000000000) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100645bfc);
          (*pcVar3)();
        }
        param_1[5] = lStack_f8;
        param_1[4] = lStack_100;
        param_1[7] = lStack_e8;
        param_1[6] = lStack_f0;
        param_1[8] = lStack_e0;
        param_1[1] = lStack_118;
        *param_1 = lStack_120;
        param_1[3] = lStack_108;
        param_1[2] = lStack_110;
        if ((uStack_d8 & 0x7fffffffffffffff) == 0) {
          return;
        }
        _free(uStack_d0);
        return;
      }
      while (uVar6 == 0) {
        lVar7 = *plVar5;
        param_2 = param_2 + -0x30;
        plVar5 = plVar5 + 1;
        uVar6 = CONCAT17(-(-1 < lVar7),
                         CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                0x8080808080808080;
      }
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      lVar7 = FUN_10063c4b8(&lStack_120,param_2 + (long)-iVar2 * 6 + -6,
                            param_2 + (long)-iVar2 * 6 + -3);
      param_3 = param_3 + -1;
      uVar6 = uVar6 - 1 & uVar6;
    } while (lVar7 == 0);
    *param_1 = -0x7ffffffffffffffb;
    param_1[1] = lVar7;
    FUN_100e040f0(&lStack_120);
  }
  return;
}

