
undefined1  [16] __ZN4http3uri9authority4host17h55fa409134a3a823E(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_x1;
  undefined8 uVar15;
  undefined8 extraout_x1_00;
  long *extraout_x8;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined1 uVar19;
  char *unaff_x19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  ushort uStack_40;
  uint auStack_38 [2];
  long lStack_30;
  ulong uVar14;
  
  auStack_80._0_8_ = 0;
  uStack_60 = 0;
  uStack_50 = 0x4000000040;
  uStack_48 = 1;
  uStack_40 = 1;
  auStack_80._8_8_ = param_2;
  auStack_70._0_8_ = param_1;
  auStack_70._8_8_ = param_2;
  uStack_58 = param_2;
  auVar23 = FUN_105796298(auStack_80);
  uVar14 = auVar23._8_8_;
  pcVar20 = auVar23._0_8_;
  if (pcVar20 == (char *)0x0) {
    func_0x000108a079f0(&UNK_109a9ebcd,0x20,&UNK_10b3b36c0);
LAB_1057972d4:
    func_0x000108a079f0(&UNK_109a9ebed,0x20,&UNK_10b3b3708);
    uVar15 = extraout_x1;
LAB_1057972ec:
    pcVar20 = unaff_x19;
    func_0x000108a07bdc(0,uVar15,&UNK_10b3b36d8);
  }
  else {
    uVar15 = 0;
    if (uVar14 == 0) goto LAB_1057972ec;
    if (*pcVar20 == '[') {
      auStack_70._0_8_ = 0;
      uStack_58 = CONCAT71(uStack_58._1_7_,1);
      uStack_60 = 0x5d0000005d;
      auStack_70._8_8_ = uVar14;
      auStack_80 = auVar23;
      func_0x00010579d638(auStack_38,auStack_80);
      auVar13._8_8_ = auStack_70._8_8_;
      auVar13._0_8_ = auStack_70._0_8_;
      unaff_x19 = pcVar20;
      if ((auStack_38[0] & 1) != 0) {
        uVar1 = lStack_30 + 1;
        auVar11._8_8_ = uVar1;
        auVar11._0_8_ = pcVar20;
        if (lStack_30 == -1) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = pcVar20;
          return auVar8;
        }
        if (uVar1 < uVar14) {
          auStack_70 = auVar13;
          if (-0x41 < pcVar20[uVar1]) {
            return auVar11;
          }
        }
        else if (uVar1 == uVar14) {
          return auVar23;
        }
        goto LAB_105797314;
      }
      goto LAB_1057972d4;
    }
    auStack_80._0_8_ = 0;
    uStack_60 = 0;
    uStack_50 = 0x3a0000003a;
    uStack_48 = 1;
    uStack_40 = 1;
    auStack_80._8_8_ = uVar14;
    uStack_58 = uVar14;
    auStack_70 = auVar23;
    func_0x00010579d638(auStack_38,auStack_70);
    auVar12._8_8_ = auStack_80._8_8_;
    auVar12._0_8_ = auStack_80._0_8_;
    if ((auStack_38[0] & 1) != 0) {
      auVar9._8_8_ = lStack_30 - auStack_80._0_8_;
      auVar9._0_8_ = pcVar20 + auStack_80._0_8_;
      return auVar9;
    }
    if (((uStack_40 & 0x100) == 0) &&
       (((uStack_40 & 1) != 0 || (auStack_80 = auVar12, auStack_80._8_8_ != auStack_80._0_8_)))) {
      auVar10._8_8_ = auStack_80._8_8_ - auStack_80._0_8_;
      auVar10._0_8_ = auStack_70._0_8_ + auStack_80._0_8_;
      return auVar10;
    }
  }
  func_0x000108a079f0(&UNK_109a9ebcd,0x20,&UNK_10b3b36f0);
  auVar23._8_8_ = extraout_x1_00;
  auVar23._0_8_ = pcVar20;
LAB_105797314:
  auVar24._0_8_ =
       (long *)__ZN4core3str16slice_error_fail17h7d5f7302866db666E(auVar23._0_8_,auVar23._8_8_,0);
  lVar2 = auVar24._0_8_[1];
  lVar21 = auVar24._0_8_[2];
  if (lVar21 == 0) {
    uVar19 = 9;
  }
  else {
    uVar18 = 0;
    bVar6 = false;
    bVar5 = false;
    bVar7 = 0;
    lVar16 = 0;
    lVar22 = lVar21;
    do {
      bVar3 = *(byte *)(lVar2 + lVar16);
      bVar4 = (&UNK_109a9eacd)[bVar3];
      if (bVar4 < 0x40) {
        lVar17 = lVar16;
        if (bVar4 < 0x2f) {
          if (bVar4 == 0) {
            if (bVar3 != 0x25) goto LAB_10579748c;
            bVar7 = 1;
          }
          else if (bVar4 == 0x23) break;
        }
        else if (bVar4 == 0x3a) {
          if (7 < uVar18) goto LAB_10579744c;
          uVar18 = uVar18 + 1;
        }
        else if ((bVar4 == 0x2f) || (bVar4 == 0x3f)) break;
      }
      else if (bVar4 == 0x40) {
        bVar7 = 0;
        uVar18 = 0;
        lVar22 = lVar16;
      }
      else if (bVar4 == 0x5b) {
        if ((bool)(bVar7 | bVar6)) goto LAB_10579744c;
        bVar7 = 0;
        bVar6 = true;
      }
      else if (bVar4 == 0x5d) {
        if (bVar5 || !bVar6) goto LAB_10579744c;
        bVar7 = 0;
        uVar18 = 0;
        bVar5 = true;
      }
      lVar16 = lVar16 + 1;
      lVar17 = lVar21;
    } while (lVar21 != lVar16);
    uVar19 = 2;
    if ((!(bool)(bVar5 ^ bVar6)) && (uVar18 < 2)) {
      if ((bool)((lVar22 == lVar17 + -1 && lVar17 != 0) | bVar7)) {
LAB_10579744c:
        *(undefined1 *)(extraout_x8 + 1) = 2;
        *extraout_x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x000105797460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar23 = (**(code **)(*auVar24._0_8_ + 0x20))(auVar24._0_8_ + 3);
        return auVar23;
      }
      if (lVar17 == lVar21) {
        lVar21 = *auVar24._0_8_;
        lVar22 = auVar24._0_8_[3];
        lVar16 = auVar24._0_8_[2];
        extraout_x8[1] = auVar24._0_8_[1];
        *extraout_x8 = lVar21;
        extraout_x8[3] = lVar22;
        extraout_x8[2] = lVar16;
        auVar24._8_8_ = lVar2;
        return auVar24;
      }
LAB_10579748c:
      *(undefined1 *)(extraout_x8 + 1) = 0;
      *extraout_x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001057974a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar23 = (**(code **)(*auVar24._0_8_ + 0x20))(auVar24._0_8_ + 3);
      return auVar23;
    }
  }
  *(undefined1 *)(extraout_x8 + 1) = uVar19;
  *extraout_x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x000105797474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar23 = (**(code **)(*auVar24._0_8_ + 0x20))(auVar24._0_8_ + 3);
  return auVar23;
}

