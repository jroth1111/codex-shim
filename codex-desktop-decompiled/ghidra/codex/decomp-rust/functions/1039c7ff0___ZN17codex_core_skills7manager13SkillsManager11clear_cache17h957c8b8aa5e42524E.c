
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN17codex_core_skills7manager13SkillsManager11clear_cache17h957c8b8aa5e42524E(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong in_xzr;
  long lVar13;
  long lVar14;
  char *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char acStack_138 [8];
  char ***pppcStack_130;
  undefined8 uStack_128;
  long lStack_120;
  char **ppcStack_118;
  undefined *puStack_110;
  char *pcStack_108;
  char ***pppcStack_100;
  char **ppcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  char ***pppcStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  char ***pppcStack_90;
  char *pcStack_88;
  char ***pppcStack_80;
  char **ppcStack_78;
  undefined1 *puStack_70;
  
  puVar9 = (ulong *)(param_1 + 0x18);
  LOAcquire();
  uVar5 = *puVar9;
  *puVar9 = uVar5 | 1;
  if ((uVar5 & 1) != 0) {
    func_0x000108a82360(puVar9,1);
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    uVar8 = 0;
    lVar11 = *(long *)(param_1 + 0x40);
  }
  else {
    uVar8 = func_0x000108a82c0c();
    uVar8 = uVar8 ^ 1;
    lVar11 = *(long *)(param_1 + 0x40);
  }
  if (lVar11 != 0) {
    plVar10 = *(long **)(param_1 + 0x28);
    plVar12 = plVar10 + 1;
    lVar13 = *plVar10;
    uVar5 = CONCAT17(-(-1 < lVar13),
                     CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar13 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar13 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar13 >> 8)),-(-1 < (char)lVar13)))))))) &
            0x8080808080808080;
    plVar4 = plVar10;
    lVar13 = lVar11;
    do {
      while (uVar5 == 0) {
        lVar14 = *plVar12;
        plVar12 = plVar12 + 1;
        plVar4 = plVar4 + -0xb0;
        uVar5 = CONCAT17(-(-1 < lVar14),
                         CONCAT16(-(-1 < (char)((ulong)lVar14 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar14 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar14 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar14 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar14 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar14 >> 8)),-(-1 < (char)lVar14)))))))) &
                0x8080808080808080;
      }
      uVar3 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      iVar7 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
      if (plVar4[(long)-iVar7 * 0x16 + -0x16] != 0) {
        _free(plVar4[(long)-iVar7 * 0x16 + -0x15]);
      }
      func_0x0001039cde80(plVar4 + (long)-iVar7 * 0x16 + -0x13);
      uVar5 = uVar5 - 1 & uVar5;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar5 = *(ulong *)(param_1 + 0x30);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      _memset(plVar10,0xff,uVar5 + 9);
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 >> 3) * 7;
      }
    }
    *(ulong *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if ((((uVar8 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar5 = func_0x000108a82c0c(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*puVar9 == 1) {
    *puVar9 = in_xzr;
    LOAcquire();
    uVar5 = *(ulong *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar5 | 1;
  }
  else {
    __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar9);
    LOAcquire();
    uVar5 = *(ulong *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar5 | 1;
  }
  if ((uVar5 & 1) != 0) {
    func_0x000108a82360(param_1 + 0x58,1);
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    uVar8 = 0;
    lVar13 = *(long *)(param_1 + 0x80);
  }
  else {
    uVar8 = func_0x000108a82c0c();
    uVar8 = uVar8 ^ 1;
    lVar13 = *(long *)(param_1 + 0x80);
  }
  if (lVar13 != 0) {
    func_0x0001039d9ad8(*(undefined8 *)(param_1 + 0x68),lVar13);
    uVar5 = *(ulong *)(param_1 + 0x70);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      _memset(*(undefined8 *)(param_1 + 0x68),0xff,uVar5 + 9);
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 >> 3) * 7;
      }
    }
    *(ulong *)(param_1 + 0x78) = uVar5;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  puVar9 = (ulong *)(param_1 + 0x58);
  if ((((uVar8 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar5 = func_0x000108a82c0c(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*puVar9 == 1) {
    *puVar9 = in_xzr;
  }
  else {
    __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar9);
  }
  pcStack_158 = (char *)(lVar13 + lVar11);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bVar6 = bRam000000010b62bf70, bRam000000010b62bf70 - 1 < 2 ||
       ((bRam000000010b62bf70 != 0 &&
        (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b62bf60), bVar6 != 0)))) &&
      (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (lRam000000010b62bf60,bVar6), iVar7 != 0)))) {
    lStack_d0 = lRam000000010b62bf60 + 0x30;
    ppcStack_78 = &pcStack_158;
    puStack_70 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    pppcStack_80 = &ppcStack_78;
    pcStack_88 = s_skills_cache_cleared___entries__108afb80d;
    ppcStack_f8 = &pcStack_88;
    puStack_f0 = &UNK_10b2dccd0;
    pppcStack_e0 = &ppcStack_f8;
    uStack_e8 = 1;
    uStack_d8 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b62bf60,&uStack_e8);
    lVar11 = lRam000000010b62bf60;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppcStack_130 = *(char ****)(lRam000000010b62bf60 + 0x20);
      uStack_128 = *(undefined8 *)(lRam000000010b62bf60 + 0x28);
      acStack_138[0] = '\x03';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,acStack_138);
      if (iVar7 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar11,puVar2,puVar1,acStack_138,&uStack_e8);
      }
    }
  }
  else {
    lVar11 = lRam000000010b62bf60;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_148 = *(undefined8 *)(lRam000000010b62bf60 + 0x20);
      uStack_140 = *(undefined8 *)(lRam000000010b62bf60 + 0x28);
      uStack_150 = 3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_150);
      if (iVar7 != 0) {
        lStack_120 = lRam000000010b62bf60 + 0x30;
        ppcStack_f8 = &pcStack_158;
        puStack_f0 = &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppcStack_100 = &ppcStack_f8;
        pcStack_108 = s_skills_cache_cleared___entries__108afb80d;
        ppcStack_118 = &pcStack_108;
        puStack_110 = &UNK_10b2dccd0;
        pppcStack_130 = &ppcStack_118;
        acStack_138[0] = '\x01';
        acStack_138[1] = '\0';
        acStack_138[2] = '\0';
        acStack_138[3] = '\0';
        acStack_138[4] = '\0';
        acStack_138[5] = '\0';
        acStack_138[6] = '\0';
        acStack_138[7] = '\0';
        uStack_128 = 1;
        lStack_c8 = *(long *)(lVar11 + 0x60);
        uStack_c0 = *(undefined8 *)(lVar11 + 0x68);
        pppcStack_e0 = *(char ****)(lVar11 + 0x50);
        uStack_d8 = *(undefined8 *)(lVar11 + 0x58);
        uStack_e8 = 1;
        if (pppcStack_e0 == (char ***)0x0) {
          uStack_e8 = 2;
        }
        uStack_a0 = *(undefined4 *)(lVar11 + 8);
        uStack_9c = *(undefined4 *)(lVar11 + 0xc);
        pcStack_88 = acStack_138;
        pppcStack_80 = (char ***)CONCAT71(pppcStack_80._1_7_,1);
        ppcStack_78 = &pcStack_88;
        puStack_70 = &DAT_1061c2098;
        lStack_d0 = 1;
        if (lStack_c8 == 0) {
          lStack_d0 = 2;
        }
        uStack_b0 = uStack_148;
        uStack_b8 = uStack_150;
        uStack_a8 = uStack_140;
        pppcStack_90 = &ppcStack_78;
        pcStack_98 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_e8);
      }
    }
  }
  return;
}

