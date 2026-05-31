
void __ZN14rustc_demangle8demangle17h08d0d5cd77d8b268E
               (undefined8 *param_1,int *param_2,undefined *param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined *puVar7;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  undefined *extraout_x9;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *extraout_x13;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  undefined *puVar24;
  byte *pbVar25;
  undefined *unaff_x23;
  undefined1 auVar26 [16];
  byte *pbStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined *puStack_88;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  
  __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
            (&pbStack_c0,param_2,param_3,&UNK_109b93117,6);
  puVar24 = param_3;
  if (((ulong)pbStack_c0 & 1) == 0) {
    do {
      func_0x000105cdcc04(&lStack_58,&pbStack_c0);
    } while (lStack_58 == 1);
    if (lStack_58 == 0) {
LAB_105cdacf0:
      puVar18 = puStack_50 + 6;
      if (puVar18 != (undefined *)0x0) {
        if (puVar18 < param_3) {
          if (*(char *)((long)param_2 + (long)puVar18) < -0x40) {
LAB_105cdad0c:
            puVar7 = &UNK_10b461740;
            goto LAB_105cdb574;
          }
        }
        else if (puVar18 != param_3) goto LAB_105cdad0c;
      }
      pbVar25 = (byte *)((long)param_2 + (long)puVar18);
      do {
        if (pbVar25 == (byte *)((long)param_2 + (long)param_3)) {
LAB_105cdae8c:
          if (puStack_50 == (undefined *)0x0) {
            puVar24 = (undefined *)0x0;
            goto LAB_105cdb1c0;
          }
          if (puStack_50 < param_3) {
            puVar24 = puStack_50;
            if (-0x41 < *(char *)((long)param_2 + (long)puStack_50)) break;
          }
          else if (puStack_50 == param_3) break;
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                    (param_2,param_3,0,puStack_50,&UNK_10b461758);
          goto LAB_105cdb53c;
        }
        pbVar11 = pbVar25 + 1;
        uVar23 = (uint)*pbVar25;
        if ((char)*pbVar25 < '\0') {
          if (uVar23 < 0xe0) {
            pbVar11 = pbVar25 + 2;
            uVar23 = pbVar25[1] & 0x3f | (uVar23 & 0x1f) << 6;
          }
          else {
            uVar4 = pbVar25[2] & 0x3f | (pbVar25[1] & 0x3f) << 6;
            if (uVar23 < 0xf0) {
              pbVar11 = pbVar25 + 3;
              uVar23 = uVar4 | (uVar23 & 0x1f) << 0xc;
            }
            else {
              uVar23 = pbVar25[3] & 0x3f | uVar4 << 6 | (uVar23 & 7) << 0x12;
              if (uVar23 == 0x110000) goto LAB_105cdae8c;
              pbVar11 = pbVar25 + 4;
            }
          }
        }
        pbVar25 = pbVar11;
      } while (0xfffffff8 < uVar23 - 0x47 || 0xfffffff5 < uVar23 - 0x3a);
    }
  }
  else {
    puVar18 = puStack_60 + -1;
    if (puStack_88 == (undefined *)0xffffffffffffffff) {
      puStack_50 = (undefined *)CONCAT44(uStack_94,uStack_98);
      puVar7 = puStack_50 + (long)puVar18;
      if (puVar7 < puStack_70) {
        lVar14 = 0;
        if (puStack_b8 <= puStack_60) {
          lVar14 = (long)puStack_60 - (long)puStack_b8;
        }
LAB_105cdad48:
        if ((uStack_a0 >> ((ulong)(byte)puVar7[lStack_78] & 0x3f) & 1) == 0) {
          puStack_50 = puStack_50 + (long)puStack_60;
        }
        else {
          lVar12 = -(long)puStack_50;
          puVar7 = puStack_b8 + (long)puStack_50;
          lVar13 = lVar14;
          pcVar10 = puStack_b8 + lStack_68;
          do {
            if (lVar13 == 0) {
              puVar7 = puStack_b8 + -1;
              goto LAB_105cdada4;
            }
            puVar8 = puStack_b8;
            if (puStack_70 <= puVar7) goto LAB_105cdb4f4;
            cVar2 = *pcVar10;
            pcVar1 = puVar7 + lStack_78;
            lVar12 = lVar12 + -1;
            puVar7 = puVar7 + 1;
            lVar13 = lVar13 + -1;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 == *pcVar1);
          puStack_50 = (undefined *)-lVar12;
        }
        goto LAB_105cdadd8;
      }
    }
    else {
      puVar8 = (undefined *)CONCAT44(uStack_94,uStack_98);
      puVar7 = puVar8 + (long)puVar18;
      if (puVar7 < puStack_70) {
LAB_105cdac1c:
        if ((uStack_a0 >> ((ulong)(byte)puVar7[lStack_78] & 0x3f) & 1) == 0) {
          puStack_88 = (undefined *)0x0;
          puVar8 = puVar8 + (long)puStack_60;
        }
        else {
          puVar7 = puStack_88;
          if (puStack_88 <= puStack_b8) {
            puVar7 = puStack_b8;
          }
          auVar26._8_8_ = puStack_70;
          auVar26._0_8_ = puVar7;
          puVar9 = puVar8 + (long)puVar7;
          puVar16 = puVar9 + -(long)puStack_b8;
          pcVar10 = puVar7 + lStack_68;
          lVar14 = 0;
          if (puVar7 <= puStack_60) {
            lVar14 = (long)puStack_60 - (long)puVar7;
          }
          do {
            puVar7 = puStack_b8;
            if (lVar14 == 0) goto LAB_105cdac84;
            if (puStack_70 <= puVar9) goto LAB_105cdb4cc;
            cVar2 = *pcVar10;
            pcVar1 = puVar9 + lStack_78;
            puVar16 = puVar16 + 1;
            puVar9 = puVar9 + 1;
            pcVar10 = pcVar10 + 1;
            lVar14 = lVar14 + -1;
          } while (cVar2 == *pcVar1);
          puVar8 = puVar16;
          puStack_88 = (undefined *)0x0;
        }
        goto LAB_105cdacbc;
      }
    }
  }
LAB_105cdaeb8:
  if (puVar24 < (undefined *)0x3) {
    if (puVar24 == (undefined *)0x2) {
      if ((short)*param_2 == 0x4e5a) {
LAB_105cdaf70:
        lVar14 = -2;
        lVar13 = 2;
        goto LAB_105cdaf78;
      }
LAB_105cdb060:
      puVar24 = (undefined *)0x2;
      if ((char)*param_2 == 'R') goto LAB_105cdb070;
    }
  }
  else {
    if ((short)*param_2 == 0x5a5f && *(char *)((long)param_2 + 2) == 'N') {
      if ((puVar24 != (undefined *)0x3) && (*(char *)((long)param_2 + 3) < -0x40)) {
        puVar7 = &UNK_10b461728;
        goto LAB_105cdb568;
      }
      lVar14 = -3;
      lVar13 = 3;
LAB_105cdaf78:
      pbVar25 = puVar24 + lVar14;
      pbVar11 = (byte *)((long)param_2 + lVar13);
      pbVar22 = pbVar11 + (long)pbVar25;
      pbVar15 = pbVar25;
      pbVar21 = pbVar11;
      do {
        if (pbVar15 == (byte *)0x0) {
          if (pbVar25 != (byte *)0x0) {
            pbVar15 = pbVar11 + 1;
            uVar23 = (uint)*pbVar11;
            if ((char)*pbVar11 < '\0') {
              if (uVar23 < 0xe0) {
                pbVar15 = pbVar11 + 2;
                uVar23 = pbVar11[1] & 0x3f | (uVar23 & 0x1f) << 6;
              }
              else {
                uVar4 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
                if (uVar23 < 0xf0) {
                  pbVar15 = pbVar11 + 3;
                  uVar23 = uVar4 | (uVar23 & 0x1f) << 0xc;
                }
                else {
                  pbVar15 = pbVar11 + 4;
                  uVar23 = pbVar11[3] & 0x3f | uVar4 << 6 | (uVar23 & 7) << 0x12;
                }
              }
            }
            if (uVar23 == 0x45) {
              unaff_x23 = (undefined *)0x0;
              goto LAB_105cdb200;
            }
            if (uVar23 != 0x110000) {
              unaff_x23 = (undefined *)0x0;
              goto LAB_105cdb214;
            }
          }
          break;
        }
        bVar3 = *pbVar21;
        pbVar15 = pbVar15 + -1;
        pbVar21 = pbVar21 + 1;
      } while (-1 < (char)bVar3);
LAB_105cdb01c:
      if (puVar24 < (undefined *)0x3) goto LAB_105cdb060;
    }
    else {
      if ((short)*param_2 == 0x4e5a) {
        if (*(char *)((long)param_2 + 2) < -0x40) {
          puVar7 = &UNK_10b461710;
          goto LAB_105cdb550;
        }
        goto LAB_105cdaf70;
      }
      if ((puVar24 != (undefined *)0x3) && (*param_2 == 0x4e5a5f5f)) {
        if (((undefined *)0x4 < puVar24) && ((char)param_2[1] < -0x40)) {
          puVar7 = &UNK_10b4616f8;
          puVar18 = (undefined *)0x4;
          goto LAB_105cdb574;
        }
        lVar14 = -4;
        lVar13 = 4;
        goto LAB_105cdaf78;
      }
    }
    if ((short)*param_2 == 0x525f) {
      pbVar25 = (byte *)((long)param_2 + 2);
      param_3 = puVar24;
      if ((char)*pbVar25 < -0x40) {
LAB_105cdb53c:
        puVar7 = &UNK_10b461698;
        puVar24 = param_3;
LAB_105cdb550:
        puVar18 = (undefined *)0x2;
        goto LAB_105cdb574;
      }
      uVar23 = (uint)*pbVar25;
      lVar14 = -2;
    }
    else {
      if ((char)*param_2 != 'R') {
        if (puVar24 != (undefined *)0x3) goto LAB_105cdb1a4;
LAB_105cdb0e0:
        pbVar25 = (byte *)0x0;
        uVar17 = 0;
        lVar14 = 0;
        pbVar15 = (byte *)0x1;
        pbVar11 = (byte *)0x0;
        goto LAB_105cdb1d4;
      }
LAB_105cdb070:
      pbVar25 = (byte *)((long)param_2 + 1);
      if ((char)*pbVar25 < -0x40) {
LAB_105cdb50c:
        puVar7 = &UNK_10b461680;
        puVar18 = (undefined *)0x1;
        goto LAB_105cdb574;
      }
      uVar23 = (uint)*pbVar25;
      lVar14 = -1;
    }
    while (uVar23 - 0x41 < 0x1a) {
      puVar18 = (undefined *)0x0;
      unaff_x23 = puVar24 + lVar14;
      while (unaff_x23 != puVar18) {
        pbVar11 = pbVar25 + (long)puVar18;
        puVar18 = puVar18 + 1;
        if ((char)*pbVar11 < '\0') goto LAB_105cdb0e0;
      }
      puStack_b0 = (undefined *)0x0;
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      uStack_a0 = 0;
      uStack_98 = 0;
      pbStack_c0 = pbVar25;
      puStack_b8 = unaff_x23;
      iVar6 = func_0x000105cd7e2c(&pbStack_c0,0);
      if (iVar6 != 0) {
LAB_105cdb4a8:
        puVar8 = &UNK_10b461810;
        auVar26 = func_0x000108a07a3c(&UNK_109b930ca,0x3d,&lStack_58,&UNK_10b461810,&UNK_10b4616b0);
LAB_105cdb4cc:
        puStack_70 = auVar26._8_8_;
        puVar8 = puVar8 + auVar26._0_8_;
        goto LAB_105cdb4f8;
      }
      if (pbStack_c0 == (byte *)0x0) break;
      if ((puStack_b0 < puStack_b8) && (pbStack_c0[(long)puStack_b0] - 0x41 < 0x1a)) {
        uStack_a0 = 0;
        uStack_98 = 0;
        iVar6 = func_0x000105cd7e2c(&pbStack_c0,0);
        if (iVar6 != 0) goto LAB_105cdb4a8;
        if (pbStack_c0 == (byte *)0x0) break;
      }
      if (puStack_b0 == (undefined *)0x0) {
LAB_105cdb394:
        pbVar11 = (byte *)0x0;
        pbVar15 = pbStack_c0 + (long)puStack_b0;
        lVar14 = (long)puStack_b8 - (long)puStack_b0;
        if (lVar14 != 0) goto LAB_105cdb3a4;
        goto LAB_105cdb4a0;
      }
      if (puStack_b0 < puStack_b8) {
        if (-0x41 < (char)pbStack_c0[(long)puStack_b0]) goto LAB_105cdb394;
      }
      else if (puStack_b8 == puStack_b0) goto LAB_105cdb394;
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E();
LAB_105cdb1a4:
      if ((short)*param_2 != 0x5f5f || *(char *)((long)param_2 + 2) != 'R') break;
      pbVar25 = (byte *)((long)param_2 + 3);
      if ((char)*pbVar25 < -0x40) {
        do {
          puVar7 = &UNK_10b461668;
LAB_105cdb568:
          puVar18 = (undefined *)0x3;
LAB_105cdb574:
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                    (param_2,puVar24,puVar18,puVar24,puVar7);
        } while( true );
      }
      lVar14 = -3;
      uVar23 = (uint)*pbVar25;
    }
  }
LAB_105cdb1c0:
  pbVar25 = (byte *)0x0;
  pbVar11 = (byte *)0x0;
  goto LAB_105cdb1d0;
  while( true ) {
    puVar8 = puStack_50;
    if (puStack_60 <= puStack_b8 + -1) goto LAB_105cdb4d4;
    puVar16 = puStack_50 + (long)puVar7;
    if (puStack_70 <= puVar16) goto LAB_105cdb4e4;
    pcVar10 = puVar7 + lStack_68;
    pcVar1 = puStack_50 + lStack_78 + (long)puVar7;
    puVar7 = puVar7 + -1;
    if (*pcVar10 != *pcVar1) break;
LAB_105cdada4:
    if (puVar7 == (undefined *)0xffffffffffffffff) goto LAB_105cdacf0;
  }
  puStack_50 = puStack_50 + uStack_a8;
LAB_105cdadd8:
  puVar7 = puStack_50 + (long)puVar18;
  if (puStack_70 <= puVar7) goto LAB_105cdaeb8;
  goto LAB_105cdad48;
  while( true ) {
    puVar7 = puVar7 + -1;
    if (puStack_60 <= puVar7) goto LAB_105cdb4d4;
    puVar16 = puVar7 + (long)puVar8;
    if (puStack_70 <= puVar16) goto LAB_105cdb4e4;
    if (puVar7[lStack_68] != puVar16[lStack_78]) break;
LAB_105cdac84:
    puStack_50 = puVar8;
    if (puVar7 <= puStack_88) goto LAB_105cdacf0;
  }
  puVar8 = puVar8 + uStack_a8;
  puStack_88 = puStack_60 + -uStack_a8;
LAB_105cdacbc:
  puVar7 = puVar8 + (long)puVar18;
  if (puStack_70 <= puVar7) goto LAB_105cdaeb8;
  goto LAB_105cdac1c;
LAB_105cdb4d4:
  func_0x000108a07bdc(puVar7,puStack_60,&UNK_10b4617a8);
  puStack_70 = extraout_x1;
  puStack_50 = puVar8;
  puVar16 = extraout_x9;
LAB_105cdb4e4:
  func_0x000108a07bdc(puVar16,puStack_70,&UNK_10b4617c0);
  puStack_70 = extraout_x1_00;
  puVar8 = extraout_x13;
LAB_105cdb4f4:
  puVar8 = puStack_50 + (long)puVar8;
LAB_105cdb4f8:
  puVar18 = puStack_70;
  if (puStack_70 <= puVar8) {
    puVar18 = puVar8;
  }
  func_0x000108a07bdc(puVar18,puStack_70,&UNK_10b4617d8);
  goto LAB_105cdb50c;
  while( true ) {
    uVar20 = 0;
    while (uVar4 = uVar23 - 0x30, uVar4 < 10) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar20;
      uVar19 = uVar20 * 10;
      uVar20 = uVar19 + uVar4;
      if (((SUB168(auVar5 * ZEXT816(10),8) != 0) || (CARRY8(uVar19,(ulong)uVar4))) ||
         (pbVar15 == pbVar22)) goto LAB_105cdb01c;
      pbVar21 = pbVar15 + 1;
      uVar23 = (uint)*pbVar15;
      if ((char)*pbVar15 < '\0') {
        if (uVar23 < 0xe0) {
          pbVar21 = pbVar15 + 2;
          uVar23 = pbVar15[1] & 0x3f | (uVar23 & 0x1f) << 6;
        }
        else {
          uVar4 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
          if (uVar23 < 0xf0) {
            pbVar21 = pbVar15 + 3;
            uVar23 = uVar4 | (uVar23 & 0x1f) << 0xc;
          }
          else {
            pbVar21 = pbVar15 + 4;
            uVar23 = pbVar15[3] & 0x3f | uVar4 << 6 | (uVar23 & 7) << 0x12;
          }
        }
      }
      pbVar15 = pbVar21;
      if (uVar23 == 0x110000) goto LAB_105cdb01c;
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      if (pbVar15 == pbVar22) goto LAB_105cdb01c;
      pbVar21 = pbVar15 + 1;
      uVar23 = (uint)*pbVar15;
      if ((char)*pbVar15 < '\0') {
        if (uVar23 < 0xe0) {
          pbVar21 = pbVar15 + 2;
          uVar23 = pbVar15[1] & 0x3f | (uVar23 & 0x1f) << 6;
        }
        else {
          uVar4 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
          if (uVar23 < 0xf0) {
            pbVar21 = pbVar15 + 3;
            uVar23 = uVar4 | (uVar23 & 0x1f) << 0xc;
          }
          else {
            uVar23 = pbVar15[3] & 0x3f | uVar4 << 6 | (uVar23 & 7) << 0x12;
            if (uVar23 == 0x110000) goto LAB_105cdb01c;
            pbVar21 = pbVar15 + 4;
          }
        }
      }
      pbVar15 = pbVar21;
    }
    unaff_x23 = unaff_x23 + 1;
    if (uVar23 == 0x45) break;
LAB_105cdb214:
    if (9 < uVar23 - 0x30) goto LAB_105cdb01c;
  }
LAB_105cdb200:
  lVar14 = (long)pbVar22 - (long)pbVar15;
  if (lVar14 == 0) {
LAB_105cdb4a0:
    uVar17 = 1;
    goto LAB_105cdb1d4;
  }
LAB_105cdb3a4:
  if (*pbVar15 == 0x2e) {
    uVar23 = 0x2e;
    uVar17 = 1;
    pbVar22 = pbVar15;
    do {
      pbVar22 = pbVar22 + 1;
      while( true ) {
        if ((((0x19 < (uVar23 & 0x1fffdf) - 0x41 && 9 < uVar23 - 0x30) && 0xe < uVar23 - 0x21) &&
            ((0x26 < uVar23 - 0x3a || ((1L << ((ulong)(uVar23 - 0x3a) & 0x3f) & 0x7e0000007fU) == 0)
             ))) && (3 < uVar23 - 0x7b)) goto LAB_105cdb1d0;
        if (pbVar22 == pbVar15 + lVar14) goto LAB_105cdb1d4;
        uVar23 = (uint)*pbVar22;
        if (-1 < (char)*pbVar22) break;
        pbVar21 = pbVar22 + 1;
        if (uVar23 < 0xe0) {
          pbVar22 = pbVar22 + 2;
          uVar23 = *pbVar21 & 0x3f | (uVar23 & 0x1f) << 6;
        }
        else {
          uVar4 = pbVar22[2] & 0x3f | (*pbVar21 & 0x3f) << 6;
          if (uVar23 < 0xf0) {
            pbVar22 = pbVar22 + 3;
            uVar23 = uVar4 | (uVar23 & 0x1f) << 0xc;
          }
          else {
            uVar23 = pbVar22[3] & 0x3f | uVar4 << 6 | (uVar23 & 7) << 0x12;
            if (uVar23 == 0x110000) goto LAB_105cdb4a0;
            pbVar22 = pbVar22 + 4;
          }
        }
      }
    } while( true );
  }
LAB_105cdb1d0:
  uVar17 = 0;
  lVar14 = 0;
  pbVar15 = (byte *)0x1;
LAB_105cdb1d4:
  *param_1 = uVar17;
  param_1[1] = pbVar11;
  param_1[2] = pbVar25;
  param_1[3] = unaff_x23;
  param_1[4] = param_2;
  param_1[5] = puVar24;
  param_1[6] = pbVar15;
  param_1[7] = lVar14;
  return;
}

