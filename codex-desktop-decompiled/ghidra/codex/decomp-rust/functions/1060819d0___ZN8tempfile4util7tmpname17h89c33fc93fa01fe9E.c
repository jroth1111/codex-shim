
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN8tempfile4util7tmpname17h89c33fc93fa01fe9E
               (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5
               ,ulong param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  code *pcVar13;
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  char *pcVar21;
  byte bVar22;
  uint uVar23;
  ulong uVar24;
  ulong *extraout_x8;
  ulong uVar25;
  undefined8 uVar26;
  int iVar27;
  char *pcVar28;
  ulong uVar29;
  long lVar30;
  undefined1 auVar31 [16];
  ulong uStack_190;
  long lStack_158;
  char *pcStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined1 auStack_138 [24];
  ulong uStack_120;
  char *pcStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined4 uStack_64;
  
  auVar31._8_8_ = param_3;
  auVar31._0_8_ = param_2;
  uVar29 = param_4 + param_6;
  if (CARRY8(param_4,param_6)) {
    uVar29 = 0xffffffffffffffff;
  }
  lVar30 = uVar29 + param_7;
  if (CARRY8(uVar29,param_7)) {
    lVar30 = -1;
  }
  if (lVar30 < 0) {
    auVar31 = func_0x0001087c9084(0,lVar30);
  }
  puVar20 = auVar31._0_8_;
  if (lVar30 == 0) {
    lVar17 = 1;
LAB_1060817e8:
    lStack_80 = lVar30;
    lStack_78 = lVar17;
    _memcpy(lVar17,auVar31._8_8_,param_4);
    uStack_64 = 0;
    if (param_7 != 0) {
      uVar29 = *puVar20;
      do {
        uVar24 = uVar29 + 0x2d358dccaa6c78a5;
        *puVar20 = uVar24;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar24 ^ 0x8bb84b93962eacc9;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar24;
        uVar25 = SUB168(auVar4 * auVar9,8) ^ (uVar24 ^ 0x8bb84b93962eacc9) * uVar24;
        if (uVar25 * 0x3e < 0x10) {
          uVar29 = uVar29 + 0x5a6b1b9954d8f14a;
          do {
            uVar24 = uVar24 + 0x2d358dccaa6c78a5;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar29 ^ 0x8bb84b93962eacc9;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar29;
            uVar25 = SUB168(auVar5 * auVar10,8) ^ (uVar29 ^ 0x8bb84b93962eacc9) * uVar29;
            uVar29 = uVar29 + 0x2d358dccaa6c78a5;
          } while (uVar25 * 0x3e < 0x10);
          *puVar20 = uVar24;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar25;
          bVar22 = (&UNK_109be3364)[SUB168(auVar6 * ZEXT816(0x3e),8)];
          uVar23 = (uint)(char)bVar22;
          if (-1 < (char)bVar22) goto LAB_1060818e0;
LAB_1060818b4:
          bVar22 = (byte)(uVar23 >> 6) & 3 | 0xc0;
          uStack_64 = (uint)(CONCAT21(uStack_64._2_2_,(char)uVar23) & 0xffffbf) << 8;
          uVar29 = 2;
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar25;
          bVar22 = (&UNK_109be3364)[SUB168(auVar7 * ZEXT816(0x3e),8)];
          uVar23 = (uint)(char)bVar22;
          if ((int)uVar23 < 0) goto LAB_1060818b4;
LAB_1060818e0:
          uVar29 = 1;
        }
        uStack_64 = CONCAT31(uStack_64._1_3_,bVar22);
        uStack_70 = param_4;
        if (lStack_80 - param_4 < uVar29) {
          FUN_108a87bd4(&lStack_80,param_4,uVar29);
          lVar17 = lStack_78;
        }
        param_4 = uStack_70;
        param_7 = param_7 - 1;
        _memcpy(lVar17 + uStack_70,&uStack_64,uVar29);
        param_4 = param_4 + uVar29;
        uVar29 = uVar24;
        lVar30 = lStack_80;
      } while (param_7 != 0);
    }
    uStack_70 = param_4;
    if (lVar30 - param_4 < param_6) {
      FUN_108a87bd4(&lStack_80,param_4,param_6);
    }
    uVar29 = uStack_70;
    _memcpy(lStack_78 + uStack_70,param_5,param_6);
    param_1[2] = uVar29 + param_6;
    param_1[1] = lStack_78;
    *param_1 = lStack_80;
    return;
  }
  lVar17 = _malloc(lVar30);
  if (lVar17 != 0) goto LAB_1060817e8;
  uVar18 = func_0x0001087c9084(1,lVar30);
  if (lStack_80 != 0) {
    _free(lStack_78);
  }
  puVar19 = (undefined8 *)__Unwind_Resume(uVar18);
  __ZN3std3env8temp_dir17hdae32a1be2ce37beE(&lStack_158);
  uVar18 = *puVar19;
  uVar2 = puVar19[1];
  uVar1 = puVar19[2];
  uVar3 = puVar19[3];
  lVar30 = puVar19[4];
  if ((uStack_148 == 0) || (*pcStack_150 != '/')) {
    __ZN3std3env11current_dir17he7f55ba519818f7aE(&uStack_120);
    pcVar21 = pcStack_118;
    uVar29 = uStack_120;
    if (uStack_120 == 0x8000000000000000) {
      *extraout_x8 = (ulong)pcStack_118;
      *(undefined1 *)(extraout_x8 + 2) = 2;
      goto LAB_106081c64;
    }
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
              (&uStack_120,pcStack_118,uStack_110,pcStack_150,uStack_148);
    uVar24 = uStack_110;
    pcVar28 = pcStack_118;
    uStack_190 = uStack_120;
    if (uVar29 != 0) {
      _free(pcVar21);
    }
    bVar12 = false;
  }
  else {
    bVar12 = true;
    uVar24 = uStack_148;
    pcVar28 = pcStack_150;
  }
  puVar20 = (ulong *)(*
                     ___ZN8fastrand10global_rng3RNG29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h753d596d401857fdE
                     )();
  if ((char)puVar20[1] == '\x01') {
    uVar29 = *puVar20;
  }
  else {
    auVar31 = __ZN8fastrand10global_rng11random_seed17h2daf4f93b047e8e5E();
    uVar29 = auVar31._8_8_;
    if ((auVar31._0_8_ & 1) == 0) {
      uVar29 = 0xef6f79ed30ba75a;
    }
    *(undefined1 *)(puVar20 + 1) = 1;
  }
  uVar29 = uVar29 + 0x2d358dccaa6c78a5;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar29 ^ 0x8bb84b93962eacc9;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29;
  uStack_140 = SUB168(auVar8 * auVar11,8) ^ (uVar29 ^ 0x8bb84b93962eacc9) * uVar29;
  *puVar20 = uVar29;
  lVar17 = (long)puVar19 + 0x2a;
  if (*(short *)(puVar19 + 5) == 0) {
    lVar17 = 0;
  }
  uVar15 = *(undefined1 *)((long)puVar19 + 0x2d);
  iVar27 = 0x10000;
  do {
    while( true ) {
      if (iVar27 == 0xfffd) {
        iVar16 = _getentropy(&uStack_120,8);
        if (iVar16 == 0) {
          uStack_140 = uStack_120;
        }
        else {
          ___error();
        }
      }
      __ZN8tempfile4util7tmpname17h89c33fc93fa01fe9E
                (&uStack_120,&uStack_140,uVar18,uVar2,uVar1,uVar3,lVar30);
      pcVar21 = pcStack_118;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (auStack_138,pcVar28,uVar24,pcStack_118,uStack_110);
      if (uStack_120 != 0) {
        _free(pcVar21);
      }
      __ZN8tempfile3dir6create17h23253b454d7ef783E(&uStack_120,auStack_138,lVar17,uVar15);
      uVar29 = uStack_120;
      if (((char)uStack_110 != '\x02') ||
         (((cVar14 = FUN_106080778(uStack_120), lVar30 == 0 || (cVar14 != '\f')) &&
          ((cVar14 = FUN_106080778(uVar29), lVar30 == 0 || (cVar14 != '\b')))))) {
        extraout_x8[1] = (ulong)pcStack_118;
        *extraout_x8 = uStack_120;
        extraout_x8[2] = uStack_110;
        if (uStack_190 == 0) {
          bVar12 = true;
        }
        if (bVar12) goto LAB_106081c64;
        goto LAB_106081c5c;
      }
      if ((uVar29 & 3) != 1) break;
      uVar26 = *(undefined8 *)(uVar29 - 1);
      puVar19 = *(undefined8 **)(uVar29 + 7);
      pcVar13 = (code *)*puVar19;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar26);
      }
      if (puVar19[1] != 0) {
        _free(uVar26);
      }
      _free((undefined8 *)(uVar29 - 1));
      iVar27 = iVar27 + -1;
      if (iVar27 == 0) goto LAB_106081c94;
    }
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
LAB_106081c94:
  uVar18 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0xc,&UNK_109be3346,0x1e);
  uVar15 = FUN_106080778();
  if (uVar24 == 0) {
    pcVar21 = (char *)0x1;
  }
  else {
    pcVar21 = (char *)_malloc(uVar24);
    if (pcVar21 == (char *)0x0) {
      func_0x0001087c9084(1,uVar24);
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x106081d58);
      (*pcVar13)();
    }
  }
  _memcpy(pcVar21,pcVar28,uVar24);
  pcStack_118 = pcVar21;
  uStack_108 = uVar18;
  uVar29 = __ZN3std2io5error5Error3new17h3b39fda1efed87d8E(uVar15,&uStack_120);
  *extraout_x8 = uVar29;
  *(undefined1 *)(extraout_x8 + 2) = 2;
  if (uStack_190 == 0) {
    bVar12 = true;
  }
  if (!bVar12) {
LAB_106081c5c:
    _free(pcVar28);
  }
LAB_106081c64:
  if (lStack_158 != 0) {
    _free(pcStack_150);
  }
  return;
}

