
/* WARNING: Possible PIC construction at 0x000105d851b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d8521c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d85460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d851b8) */
/* WARNING: Removing unreachable block (ram,0x000105d8527c) */
/* WARNING: Removing unreachable block (ram,0x000105d851c0) */
/* WARNING: Removing unreachable block (ram,0x000105d85284) */
/* WARNING: Removing unreachable block (ram,0x000105d851c8) */
/* WARNING: Removing unreachable block (ram,0x000105d8528c) */
/* WARNING: Removing unreachable block (ram,0x000105d852a0) */
/* WARNING: Removing unreachable block (ram,0x000105d852f8) */
/* WARNING: Removing unreachable block (ram,0x000105d852b4) */
/* WARNING: Removing unreachable block (ram,0x000105d85300) */
/* WARNING: Removing unreachable block (ram,0x000105d852cc) */
/* WARNING: Removing unreachable block (ram,0x000105d85290) */
/* WARNING: Removing unreachable block (ram,0x000105d85304) */
/* WARNING: Removing unreachable block (ram,0x000105d851d8) */
/* WARNING: Removing unreachable block (ram,0x000105d85298) */
/* WARNING: Removing unreachable block (ram,0x000105d851f4) */
/* WARNING: Removing unreachable block (ram,0x000105d852e0) */
/* WARNING: Removing unreachable block (ram,0x000105d851fc) */
/* WARNING: Removing unreachable block (ram,0x000105d852e8) */
/* WARNING: Removing unreachable block (ram,0x000105d85334) */
/* WARNING: Removing unreachable block (ram,0x000105d853d8) */
/* WARNING: Removing unreachable block (ram,0x000105d85348) */
/* WARNING: Removing unreachable block (ram,0x000105d85410) */
/* WARNING: Removing unreachable block (ram,0x000105d85360) */
/* WARNING: Removing unreachable block (ram,0x000105d852ec) */
/* WARNING: Removing unreachable block (ram,0x000105d85308) */
/* WARNING: Removing unreachable block (ram,0x000105d8520c) */
/* WARNING: Removing unreachable block (ram,0x000105d85220) */
/* WARNING: Removing unreachable block (ram,0x000105d8532c) */
/* WARNING: Removing unreachable block (ram,0x000105d85228) */
/* WARNING: Removing unreachable block (ram,0x000105d85378) */
/* WARNING: Removing unreachable block (ram,0x000105d85230) */
/* WARNING: Removing unreachable block (ram,0x000105d85384) */
/* WARNING: Removing unreachable block (ram,0x000105d85240) */
/* WARNING: Removing unreachable block (ram,0x000105d8530c) */
/* WARNING: Removing unreachable block (ram,0x000105d85258) */
/* WARNING: Removing unreachable block (ram,0x000105d8541c) */
/* WARNING: Removing unreachable block (ram,0x000105d85260) */
/* WARNING: Removing unreachable block (ram,0x000105d85428) */
/* WARNING: Removing unreachable block (ram,0x000105d85268) */
/* WARNING: Removing unreachable block (ram,0x000105d8538c) */
/* WARNING: Removing unreachable block (ram,0x000105d853e4) */
/* WARNING: Removing unreachable block (ram,0x000105d85398) */
/* WARNING: Removing unreachable block (ram,0x000105d85420) */
/* WARNING: Removing unreachable block (ram,0x000105d85464) */
/* WARNING: Removing unreachable block (ram,0x000105d853b0) */
/* WARNING: Removing unreachable block (ram,0x000105d85454) */
/* WARNING: Removing unreachable block (ram,0x000105d853b8) */
/* WARNING: Removing unreachable block (ram,0x000105d853fc) */
/* WARNING: Removing unreachable block (ram,0x000105d85404) */
/* WARNING: Removing unreachable block (ram,0x000105d85458) */
/* WARNING: Removing unreachable block (ram,0x000105d83f14) */
/* WARNING: Removing unreachable block (ram,0x000105d83f2c) */
/* WARNING: Removing unreachable block (ram,0x000105d83f1c) */
/* WARNING: Removing unreachable block (ram,0x000105d83f30) */
/* WARNING: Removing unreachable block (ram,0x000105d83f28) */
/* WARNING: Removing unreachable block (ram,0x000108aa97c4) */
/* WARNING: Removing unreachable block (ram,0x000105d853d4) */
/* WARNING: Removing unreachable block (ram,0x000105d85444) */
/* WARNING: Removing unreachable block (ram,0x000105d85448) */

void FUN_105d84b58(ulong *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong *puVar13;
  long extraout_x1;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *unaff_x22;
  byte *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar24 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    pbVar11 = param_2;
    do {
      lVar22 = 0;
      puVar25 = (undefined8 *)((long)puVar18 + 1);
      lVar14 = 0;
      while( true ) {
        bVar1 = *pbVar11;
        if (((0x19 < bVar1 - 0x41) && (9 < bVar1 - 0x30)) && (bVar1 != 0x2d && 0x19 < bVar1 - 0x61))
        break;
        pbVar11 = param_2 + lVar14 + (long)puVar18 + 1;
        lVar22 = lVar22 + -1;
        bVar8 = param_3 <= puVar25;
        puVar25 = (undefined8 *)((long)puVar25 + 1);
        lVar14 = lVar14 + 1;
        if (bVar8) {
          puVar25 = param_3;
          if (param_3 <= (undefined8 *)((long)puVar18 + 1)) {
            puVar25 = (undefined8 *)((long)puVar18 + 1);
          }
          if (param_3 <= puVar18) goto LAB_105d84d08;
          pbVar11 = param_2 + (long)puVar25;
          puVar25 = param_3;
          goto LAB_105d84c24;
        }
      }
      if (lVar22 == 0) {
        if ((puVar18 == (undefined8 *)0x0) && (bVar1 != 0x2e)) goto LAB_105d84cd4;
        break;
      }
      if (bVar1 != 0x2e) {
        puVar25 = (undefined8 *)((long)puVar25 + -1);
        if (puVar25 == (undefined8 *)0x0) goto LAB_105d84cd4;
        if ((char)bVar1 < -0x40) {
LAB_105d84d08:
          param_4 = puVar25;
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                    (param_2,param_3,0,puVar25,&UNK_10b468bb0);
LAB_105d84d24:
          puStack_60 = &UNK_10b468b70;
          puStack_58 = &DAT_105d83f04;
          param_3 = (undefined8 *)&UNK_10b468b80;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__internal_error__entered_unreach_108abccef,&puStack_60);
          param_2 = unaff_x24;
        }
        else {
LAB_105d84c24:
          puVar24 = (undefined8 *)((long)param_3 - (long)puVar25);
          if (puVar25 < (undefined8 *)0x9) {
            puStack_60 = (undefined *)0x0;
            _memcpy(&puStack_60,param_2,puVar25);
            goto LAB_105d84cd8;
          }
          if ((ulong)puVar25 >> 0x38 != 0) goto LAB_105d84d24;
          unaff_x25 = (ulong)((0x46U - (int)LZCOUNT(puVar25) & 0xff) * 0x93 >> 10);
          pbVar12 = (byte *)_malloc((long)puVar25 + unaff_x25);
          pbVar10 = pbVar12;
          puVar18 = puVar25;
          if (pbVar12 != (byte *)0x0) goto LAB_105d84c88;
        }
        auVar4._8_8_ = param_2;
        auVar4._0_8_ = pbVar11;
        uVar26 = 0x105d84d5c;
        auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E
                            (2,(long)puVar25 + unaff_x25);
        ppuVar7 = &puStack_60;
        goto SUB_105d84d5c;
      }
      pbVar11 = param_2 + (long)puVar25;
      puVar18 = puVar25;
    } while (puVar25 < param_3);
    *param_1 = 0;
    param_1[1] = 0x407;
    return;
  }
LAB_105d84cd4:
  puStack_60 = (undefined *)0xffffffffffffffff;
  pbVar11 = param_2;
LAB_105d84cd8:
  *param_1 = (ulong)puStack_60;
  param_1[1] = (ulong)pbVar11;
  param_1[2] = (ulong)puVar24;
  return;
LAB_105d84c88:
  do {
    pbVar9 = pbVar10 + 1;
    *pbVar10 = (byte)puVar18 | 0x80;
    bVar8 = (undefined8 *)0x7f < puVar18;
    pbVar10 = pbVar9;
    puVar18 = (undefined8 *)((ulong)puVar18 >> 7);
  } while (bVar8);
  _memcpy(pbVar9,param_2,puVar25);
  puStack_60 = (undefined *)((ulong)pbVar12 >> 1 | 0x8000000000000000);
  goto LAB_105d84cd8;
LAB_105d85040:
  puVar24 = (undefined8 *)((long)puVar19 + lVar21);
  if (puVar24 == (undefined8 *)0x0) {
LAB_105d85104:
    uVar17 = 0xffffffffffffffff;
    goto LAB_105d85108;
  }
  if (bVar1 == 0xffffffbf || SCARRY4((uint)bVar1,0x41)) {
LAB_105d85054:
    puVar15 = (undefined8 *)0x0;
    auVar28 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                        (lVar14,puVar18,0,(long)puVar19 + lVar21,&UNK_10b468bb0);
    puVar18 = puVar15;
  }
  else {
LAB_105d84ffc:
    puVar18 = (undefined8 *)((long)puVar18 - (long)puVar24);
    puVar25 = (undefined8 *)((long)puVar19 + lVar21 + lVar14);
    auVar6._8_8_ = puVar25;
    auVar6._0_8_ = puVar15;
    if (puVar24 < (undefined8 *)0x9) {
      *(undefined8 *)((long)ppuVar7 + -0x70) = 0;
      _memcpy((undefined1 *)((long)ppuVar7 + -0x70),lVar14,puVar24);
      uVar17 = *(ulong *)((long)ppuVar7 + -0x70);
      auVar28 = auVar6;
      goto LAB_105d85108;
    }
  }
  auVar5._8_8_ = puVar25;
  auVar5._0_8_ = auVar28._0_8_;
  if ((ulong)puVar24 >> 0x38 == 0) {
    unaff_x25 = (ulong)((0x46U - (int)LZCOUNT(puVar24) & 0xff) * 0x93 >> 10);
    pbVar10 = (byte *)_malloc((long)puVar24 + unaff_x25);
    pbVar11 = pbVar10;
    puVar19 = puVar24;
    if (pbVar10 != (byte *)0x0) goto LAB_105d850bc;
  }
  else {
    *(undefined **)((long)ppuVar7 + -0x70) = &UNK_10b468b70;
    *(undefined **)((long)ppuVar7 + -0x68) = &DAT_105d83f04;
    puVar18 = (undefined8 *)&UNK_10b468b80;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__internal_error__entered_unreach_108abccef,(undefined1 *)((long)ppuVar7 + -0x70),
               &UNK_10b468b80);
    lVar14 = extraout_x1;
    puVar19 = extraout_x8;
LAB_105d85158:
    __ZN4core3str16slice_error_fail17h7d5f7302866db666E
              (lVar14,puVar18,puVar19,puVar18,&UNK_10b468b98);
    puVar18 = unaff_x22;
    auVar28 = auVar4;
  }
  auVar27 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(2,(long)puVar24 + unaff_x25);
  param_3 = auVar27._8_8_;
  *(undefined8 *)((long)ppuVar7 + -0xc0) = unaff_x26;
  *(ulong *)((long)ppuVar7 + -0xb8) = unaff_x25;
  *(long *)((long)ppuVar7 + -0xb0) = auVar28._8_8_;
  *(long *)((long)ppuVar7 + -0xa8) = auVar28._0_8_;
  *(undefined8 **)((long)ppuVar7 + -0xa0) = puVar18;
  *(undefined8 **)((long)ppuVar7 + -0x98) = puVar25;
  *(ulong **)((long)ppuVar7 + -0x90) = param_1;
  *(undefined8 **)((long)ppuVar7 + -0x88) = puVar24;
  *(undefined1 **)((long)ppuVar7 + -0x80) = (undefined1 *)((long)ppuVar7 + -0x20);
  *(code **)((long)ppuVar7 + -0x78) =
       __ZN6semver5parse72__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__Version_GT_8from_str17hf91540b554650df3E
  ;
  if (param_3 == (undefined8 *)0x0) {
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    return;
  }
  auVar27._8_8_ = auVar27._0_8_;
  auVar27._0_8_ = (undefined1 *)((long)ppuVar7 + -0xd8);
  param_4 = (undefined8 *)0x0;
  uVar26 = 0x105d851b8;
  ppuVar7 = (undefined **)((long)ppuVar7 + -0xe0);
  puVar24 = extraout_x8_00;
  unaff_x22 = puVar18;
  auVar4 = auVar28;
SUB_105d84d5c:
  pbVar11 = auVar27._8_8_;
  puVar13 = auVar27._0_8_;
  if (param_3 == (undefined8 *)0x0) {
    *puVar13 = ((ulong)param_4 & 0xff) << 8 | 1;
    puVar13[1] = 0;
    return;
  }
  bVar1 = *pbVar11;
  uVar17 = (ulong)bVar1;
  if ((byte)(bVar1 - 0x3a) < 0xf6) {
    if ((char)bVar1 < '\0') {
      if (0xdf < bVar1) {
        uVar16 = (uint)bVar1;
        uVar3 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
        if (uVar16 < 0xf0) {
          *puVar13 = ((ulong)param_4 & 0xff) << 8 | (ulong)(uVar3 | (uVar16 & 0x1f) << 0xc) << 0x20
                     | 2;
          puVar13[1] = 0;
          return;
        }
        *puVar13 = ((ulong)param_4 & 0xff) << 8 |
                   (ulong)(pbVar11[3] & 0x3f | uVar3 << 6 | (uVar16 & 7) << 0x12) << 0x20 | 2;
        puVar13[1] = 0;
        return;
      }
      uVar17 = (ulong)(pbVar11[1] & 0x3f | (bVar1 & 0x1f) << 6);
    }
    *puVar13 = ((ulong)param_4 & 0xff) << 8 | uVar17 << 0x20 | 2;
    puVar13[1] = 0;
    return;
  }
  uVar17 = (ulong)(byte)(bVar1 - 0x30);
  puVar18 = (undefined8 *)0x1;
  if (param_3 != (undefined8 *)0x1) {
    while (bVar1 = pbVar11[(long)puVar18], 0xf5 < (byte)(bVar1 - 0x3a)) {
      if (uVar17 == 0) {
        *puVar13 = ((ulong)param_4 & 0xff) << 8 | 5;
        puVar13[1] = 0;
        return;
      }
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar17;
      if ((SUB168(auVar28 * ZEXT816(10),8) != 0) ||
         (uVar20 = uVar17 * 10, uVar17 = uVar20 + (byte)(bVar1 - 0x30),
         CARRY8(uVar20,(ulong)(byte)(bVar1 - 0x30)))) {
        *puVar13 = ((ulong)param_4 & 0xff) << 8 | 6;
        puVar13[1] = 0;
        return;
      }
      puVar18 = (undefined8 *)((long)puVar18 + 1);
      if (param_3 == puVar18) {
        *puVar13 = uVar17;
        puVar13[1] = (ulong)(pbVar11 + (long)param_3);
        puVar13[2] = 0;
        return;
      }
    }
    if ((char)bVar1 < -0x40) {
      *(undefined1 **)((long)ppuVar7 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)ppuVar7 + -8) = uVar26;
      auVar28 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                          (pbVar11,param_3,puVar18,param_3,&UNK_10b468bc8);
      lVar14 = auVar28._8_8_;
      puVar15 = auVar28._0_8_;
      register0x00000008 = (BADSPACEBASE *)((long)ppuVar7 + -0x70);
      *(undefined8 *)((long)ppuVar7 + -0x60) = unaff_x26;
      *(ulong *)((long)ppuVar7 + -0x58) = unaff_x25;
      *(long *)((long)ppuVar7 + -0x50) = auVar4._8_8_;
      *(long *)((long)ppuVar7 + -0x48) = auVar4._0_8_;
      *(undefined8 **)((long)ppuVar7 + -0x40) = unaff_x22;
      *(undefined8 **)((long)ppuVar7 + -0x38) = puVar25;
      *(ulong **)((long)ppuVar7 + -0x30) = param_1;
      *(undefined8 **)((long)ppuVar7 + -0x28) = puVar24;
      *(undefined1 **)((long)ppuVar7 + -0x20) = (undefined1 *)((long)ppuVar7 + -0x10);
      *(undefined8 *)((long)ppuVar7 + -0x18) = 0x105d84ed8;
      puVar19 = (undefined8 *)0x0;
      uVar26 = 0x305;
      do {
        bVar1 = 0;
        lVar22 = 0;
        do {
          while( true ) {
            while( true ) {
              lVar21 = lVar22;
              lVar22 = lVar21 + 1;
              puVar23 = (undefined8 *)((long)puVar19 + lVar21);
              if (puVar18 <= puVar23) goto LAB_105d84f60;
              bVar2 = *(byte *)((long)puVar19 + lVar21 + lVar14);
              if (0x19 < bVar2 - 0x41) break;
              bVar1 = 1;
            }
            if (bVar2 != 0x2d && 0x19 < bVar2 - 0x61) break;
            bVar1 = 1;
          }
        } while (bVar2 - 0x30 < 10);
LAB_105d84f60:
        if (lVar22 == 1) {
          if ((puVar19 != (undefined8 *)0x0) ||
             ((puVar23 < puVar18 && (*(char *)(lVar14 + (long)puVar19) == '.')))) {
            uVar26 = 0x307;
LAB_105d84fd8:
            *puVar15 = 0;
            puVar15[1] = uVar26;
            return;
          }
          goto LAB_105d85104;
        }
        if (!(bool)(lVar22 == 2 | bVar1)) {
          if (puVar19 != (undefined8 *)0x0) {
            if (puVar19 < puVar18) {
              if (*(char *)(lVar14 + (long)puVar19) < -0x40) goto LAB_105d85158;
            }
            else if (puVar19 != puVar18) goto LAB_105d85158;
          }
          if ((puVar18 != puVar19) && (*(char *)(lVar14 + (long)puVar19) == '0'))
          goto LAB_105d84fd8;
        }
        if (puVar18 <= puVar23) {
          if ((long)puVar19 + lVar22 == 1) goto LAB_105d85104;
          puVar24 = puVar18;
          if (((long)puVar19 + lVar22) - (long)puVar18 != 1) goto LAB_105d85054;
          goto LAB_105d84ffc;
        }
        bVar1 = ((char *)(lVar14 + (long)puVar19))[lVar21];
        if (bVar1 != 0x2e) goto LAB_105d85040;
        puVar19 = (undefined8 *)((long)puVar19 + lVar22);
      } while( true );
    }
  }
  *puVar13 = uVar17;
  puVar13[1] = (ulong)(pbVar11 + (long)puVar18);
  puVar13[2] = (long)param_3 - (long)puVar18;
  return;
LAB_105d850bc:
  do {
    pbVar12 = pbVar11 + 1;
    *pbVar11 = (byte)puVar19 | 0x80;
    bVar8 = (undefined8 *)0x7f < puVar19;
    pbVar11 = pbVar12;
    puVar19 = (undefined8 *)((ulong)puVar19 >> 7);
  } while (bVar8);
  _memcpy(pbVar12,auVar28._8_8_,puVar24);
  uVar17 = (ulong)pbVar10 >> 1 | 0x8000000000000000;
  auVar28 = auVar5;
LAB_105d85108:
  puVar13 = auVar28._0_8_;
  *puVar13 = uVar17;
  puVar13[1] = auVar28._8_8_;
  puVar13[2] = (ulong)puVar18;
  return;
}

