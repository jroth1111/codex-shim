
/* WARNING: Removing unreachable block (ram,0x00010286d158) */
/* WARNING: Removing unreachable block (ram,0x00010286d164) */

undefined1  [16] FUN_10286cf88(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong in_x5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  byte *pbVar9;
  byte *pbVar10;
  ulong extraout_x9;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_x10;
  ulong extraout_x10_00;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int aiStack_a8 [4];
  ulong uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  byte bStack_8e;
  undefined5 uStack_8d;
  ulong uStack_88;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  byte *pbVar8;
  
  __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
            (aiStack_a8,param_1,param_2,&UNK_108cde3c0,4);
  uVar16 = uStack_98;
  if (uStack_98 <= uStack_48) {
    uVar16 = uStack_48;
  }
  if (aiStack_a8[0] == 1) {
    if (uStack_78 != 0) {
      uVar5 = CONCAT53(uStack_8d,CONCAT12(bStack_8e,CONCAT11(uStack_8f,uStack_90)));
LAB_10286d010:
      in_x5 = uStack_78 - uStack_48;
      if (in_x5 < uStack_58) {
        uVar11 = uStack_78;
        do {
          if (uStack_78 != uVar11) break;
          uVar11 = in_x5;
          uVar6 = uStack_48;
          if ((uStack_88 >> ((ulong)*(byte *)(lStack_60 + in_x5) & 0x3f) & 1) != 0) {
            uVar11 = uStack_68;
            if (uStack_98 <= uStack_68) {
              uVar11 = uStack_98;
            }
            uVar12 = uStack_98;
            if (lStack_70 != -1) {
              uVar12 = uVar11;
            }
            uVar11 = uVar12 - 1;
            if (uVar11 < uStack_48) {
              lVar17 = -uVar12;
              uVar11 = uVar12 + in_x5;
              pcVar18 = (char *)(lStack_50 + -1 + uVar12);
              do {
                uVar11 = uVar11 - 1;
                if (lVar17 == 0) goto LAB_10286d0b8;
                if (uStack_58 <= uVar11) goto LAB_10286d1cc;
                cVar2 = *pcVar18;
                lVar17 = lVar17 + 1;
                pcVar18 = pcVar18 + -1;
              } while (cVar2 == *(char *)(lStack_60 + uVar11));
              uVar11 = (uStack_78 - uStack_98) - lVar17;
            }
            else {
              if (uVar12 != 0) goto LAB_10286d1dc;
LAB_10286d0b8:
              uVar11 = uStack_48;
              if (lStack_70 != -1) {
                uVar11 = uStack_68;
              }
              if (uVar11 <= uStack_98) {
                uVar11 = uStack_98;
              }
              uVar12 = uStack_98 + in_x5;
              lVar17 = uVar11 - uStack_98;
              lVar19 = uVar16 - uStack_98;
              pcVar18 = (char *)(lStack_50 + uStack_98);
              do {
                if (lVar17 == 0) {
                  if (lStack_70 != -1) {
                    uStack_68 = uStack_48;
                  }
                  uStack_78 = in_x5;
                  if (in_x5 != 0) goto LAB_10286d010;
                  goto LAB_10286d120;
                }
                if (lVar19 == 0) goto LAB_10286d1a0;
                if (uStack_58 <= uVar12) goto LAB_10286d1b4;
                cVar2 = *pcVar18;
                pcVar1 = (char *)(lStack_60 + uVar12);
                uVar12 = uVar12 + 1;
                lVar19 = lVar19 + -1;
                lVar17 = lVar17 + -1;
                pcVar18 = pcVar18 + 1;
                uVar11 = uStack_78 - uVar5;
                uVar6 = uVar5;
              } while (cVar2 == *pcVar1);
            }
          }
          if (lStack_70 != -1) {
            uStack_68 = uVar6;
          }
          in_x5 = uVar11 - uStack_48;
        } while (in_x5 < uStack_58);
      }
      goto LAB_10286d16c;
    }
  }
  else if ((bStack_8e & 1) == 0) {
    uStack_78 = uStack_98;
    if (uStack_98 != 0) {
      if (uStack_98 < uStack_58) {
        if (*(char *)(lStack_60 + uStack_98) < -0x40) {
LAB_10286d190:
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                    (uStack_8f,lStack_60,uStack_58,0,uStack_98,&UNK_10b28fcb8);
          uStack_48 = extraout_x8;
          uVar16 = extraout_x9;
LAB_10286d1a0:
          func_0x000108a07bdc(uVar16,uStack_48,&UNK_10b28f200);
          uStack_58 = extraout_x1;
LAB_10286d1b4:
          uVar16 = uStack_58;
          if (uStack_58 <= in_x5 + uStack_98) {
            uVar16 = in_x5 + uStack_98;
          }
          func_0x000108a07bdc(uVar16,uStack_58,&UNK_10b28f218);
          uStack_58 = extraout_x1_00;
          uVar11 = extraout_x10;
LAB_10286d1cc:
          func_0x000108a07bdc(uVar11,uStack_58,&UNK_10b28f248);
          uStack_48 = extraout_x8_00;
          uVar11 = extraout_x10_00;
LAB_10286d1dc:
          auVar21 = func_0x000108a07bdc(uVar11,uStack_48,&UNK_10b28f230);
          pbVar8 = auVar21._8_8_;
          pbVar7 = auVar21._0_8_;
          pbVar9 = (byte *)0x0;
          pbVar10 = pbVar9;
          if (pbVar8 != (byte *)0x0) {
            pbVar13 = pbVar7;
            do {
              pbVar14 = pbVar13 + 1;
              uVar15 = (uint)*pbVar13;
              uVar16 = (ulong)uVar15;
              if ((char)*pbVar13 < '\0') {
                if (uVar15 < 0xe0) {
                  pbVar14 = pbVar13 + 2;
                  uVar16 = (ulong)(pbVar13[1] & 0x3f | (uVar15 & 0x1f) << 6);
                }
                else {
                  uVar4 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
                  if (uVar15 < 0xf0) {
                    pbVar14 = pbVar13 + 3;
                    uVar16 = (ulong)(uVar4 | (uVar15 & 0x1f) << 0xc);
                  }
                  else {
                    pbVar14 = pbVar13 + 4;
                    uVar16 = (ulong)(pbVar13[3] & 0x3f | uVar4 << 6 | (uVar15 & 7) << 0x12);
                  }
                }
              }
              uVar15 = (uint)uVar16;
              if ((4 < uVar15 - 9) && (uVar15 != 0x20)) {
                pbVar10 = pbVar9;
                if (uVar15 < 0x80) break;
                uVar4 = uVar15 >> 8;
                if (uVar4 < 0x20) {
                  if (uVar4 == 0) {
                    bVar3 = (&
                            __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                            )[uVar16 & 0xff];
joined_r0x00010286d2fc:
                    if ((bVar3 & 1) == 0) break;
                  }
                  else if ((uVar4 != 0x16) || (uVar15 != 0x1680)) break;
                }
                else {
                  if (uVar4 == 0x20) {
                    bVar3 = (byte)(&
                                  __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                                  )[uVar16 & 0xff] >> 1;
                    goto joined_r0x00010286d2fc;
                  }
                  if ((uVar4 != 0x30) || (uVar15 != 0x3000)) break;
                }
              }
              pbVar9 = pbVar14 + ((long)pbVar9 - (long)pbVar13);
              pbVar10 = pbVar8;
              pbVar13 = pbVar14;
            } while (pbVar14 != pbVar7 + (long)pbVar8);
          }
          auVar21._8_8_ = (long)pbVar8 - (long)pbVar10;
          auVar21._0_8_ = pbVar7 + (long)pbVar10;
          return auVar21;
        }
      }
      else if (uStack_98 != uStack_58) goto LAB_10286d190;
    }
    goto LAB_10286d16c;
  }
LAB_10286d120:
  uStack_78 = 0;
LAB_10286d16c:
  auVar20._8_8_ = uStack_78;
  auVar20._0_8_ = param_1;
  return auVar20;
}

