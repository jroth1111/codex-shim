
/* WARNING: Removing unreachable block (ram,0x000104861614) */
/* WARNING: Removing unreachable block (ram,0x000104861620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN12codex_ollama3url21base_url_to_host_root17hde4dee22d3b1c26cE
               (ulong *param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong in_x5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  uint uVar10;
  ulong extraout_x9;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x10;
  ulong extraout_x10_00;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  int aiStack_b8 [4];
  ulong uStack_a8;
  undefined1 uStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  undefined5 uStack_9d;
  ulong uStack_98;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  
  uVar16 = 1;
  do {
    uVar13 = param_3;
    if (uVar13 == 0) goto LAB_104861424;
    lVar18 = param_2 + uVar13;
    pbVar11 = (byte *)(lVar18 + -1);
    uVar10 = (uint)(char)*pbVar11;
    if ((int)uVar10 < 0) {
      pbVar11 = (byte *)(lVar18 + -2);
      bVar3 = *pbVar11;
      if ((char)bVar3 < -0x40) {
        pbVar11 = (byte *)(lVar18 + -3);
        bVar4 = *pbVar11;
        if ((char)bVar4 < -0x40) {
          pbVar11 = (byte *)(lVar18 + -4);
          uVar15 = bVar4 & 0x3f | (*pbVar11 & 7) << 6;
        }
        else {
          uVar15 = (int)(char)bVar4 & 0xf;
        }
        uVar15 = bVar3 & 0x3f | uVar15 << 6;
      }
      else {
        uVar15 = (int)(char)bVar3 & 0x1f;
      }
      uVar10 = uVar10 & 0x3f | uVar15 << 6;
    }
    param_3 = (long)pbVar11 - param_2;
  } while (uVar10 == 0x2f);
  if ((2 < uVar13) && (*(short *)(lVar18 + -3) == 0x762f && *(char *)(lVar18 + -1) == '1')) {
    __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
              (aiStack_b8,param_2,uVar13,&UNK_108e4dbf0,3);
    uVar16 = uStack_a8;
    if (uStack_a8 <= uStack_58) {
      uVar16 = uStack_58;
    }
    if (aiStack_b8[0] == 1) {
      if (uStack_88 != 0) {
        uVar6 = CONCAT53(uStack_9d,CONCAT12(bStack_9e,CONCAT11(bStack_9f,uStack_a0)));
LAB_1048614cc:
        in_x5 = uStack_88 - uStack_58;
        if (in_x5 < uStack_68) {
          uVar12 = uStack_88;
          do {
            if (uStack_88 != uVar12) break;
            uVar12 = in_x5;
            uVar7 = uStack_58;
            if ((uStack_98 >> ((ulong)*(byte *)(lStack_70 + in_x5) & 0x3f) & 1) != 0) {
              uVar13 = uStack_78;
              if (uStack_a8 <= uStack_78) {
                uVar13 = uStack_a8;
              }
              uVar12 = uStack_a8;
              if (lStack_80 != -1) {
                uVar12 = uVar13;
              }
              uVar13 = uVar12 - 1;
              if (uVar13 < uStack_58) {
                uVar13 = -uVar12;
                uVar14 = uVar12 + in_x5;
                pcVar17 = (char *)(lStack_60 + -1 + uVar12);
                do {
                  uVar14 = uVar14 - 1;
                  if (uVar13 == 0) goto LAB_104861574;
                  if (uStack_68 <= uVar14) goto LAB_1048616f4;
                  cVar2 = *pcVar17;
                  uVar13 = uVar13 + 1;
                  pcVar17 = pcVar17 + -1;
                } while (cVar2 == *(char *)(lStack_70 + uVar14));
                uVar12 = (uStack_88 - uStack_a8) - uVar13;
              }
              else {
                if (uVar12 != 0) goto LAB_104861710;
LAB_104861574:
                uVar13 = uStack_58;
                if (lStack_80 != -1) {
                  uVar13 = uStack_78;
                }
                if (uVar13 <= uStack_a8) {
                  uVar13 = uStack_a8;
                }
                uVar14 = uStack_a8 + in_x5;
                uVar13 = uVar13 - uStack_a8;
                lVar18 = uVar16 - uStack_a8;
                pcVar17 = (char *)(lStack_60 + uStack_a8);
                do {
                  if (uVar13 == 0) {
                    if (lStack_80 != -1) {
                      uStack_78 = uStack_58;
                    }
                    uStack_88 = in_x5;
                    if (in_x5 != 0) goto LAB_1048614cc;
                    goto LAB_1048615dc;
                  }
                  if (lVar18 == 0) goto LAB_1048616c8;
                  if (uStack_68 <= uVar14) goto LAB_1048616dc;
                  cVar2 = *pcVar17;
                  pcVar1 = (char *)(lStack_70 + uVar14);
                  uVar14 = uVar14 + 1;
                  lVar18 = lVar18 + -1;
                  uVar13 = uVar13 - 1;
                  pcVar17 = pcVar17 + 1;
                  uVar12 = uStack_88 - uVar6;
                  uVar7 = uVar6;
                } while (cVar2 == *pcVar1);
              }
            }
            if (lStack_80 != -1) {
              uStack_78 = uVar7;
            }
            in_x5 = uVar12 - uStack_58;
          } while (in_x5 < uStack_68);
        }
        goto LAB_104861630;
      }
LAB_1048615dc:
      uStack_88 = 0;
    }
    else {
      if ((bStack_9e & 1) != 0) goto LAB_1048615dc;
      uStack_88 = uStack_a8;
      if (uStack_a8 == 0) {
        if ((bStack_9f & 1) != 0) goto LAB_104861630;
        goto LAB_1048615dc;
      }
      if (uStack_a8 < uStack_68) {
        if (*(char *)(lStack_70 + uStack_a8) < -0x40) {
LAB_1048616b8:
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                    (lStack_70,uStack_68,0,uStack_a8,&UNK_10b338580);
          uStack_58 = extraout_x8;
          uVar16 = extraout_x9;
LAB_1048616c8:
          func_0x000108a07bdc(uVar16,uStack_58,&UNK_10b338520);
          uStack_68 = extraout_x1;
LAB_1048616dc:
          uVar16 = uStack_68;
          if (uStack_68 <= in_x5 + uStack_a8) {
            uVar16 = in_x5 + uStack_a8;
          }
          func_0x000108a07bdc(uVar16,uStack_68,&UNK_10b338538);
          uStack_68 = extraout_x1_00;
          uVar14 = extraout_x10;
LAB_1048616f4:
          func_0x000108a07bdc(uVar14,uStack_68,&UNK_10b338568);
          goto LAB_104861704;
        }
      }
      else if (uStack_a8 != uStack_68) goto LAB_1048616b8;
    }
LAB_104861630:
    uVar16 = 1;
    do {
      uVar13 = uStack_88;
      if (uVar13 == 0) goto LAB_104861424;
      lVar18 = param_2 + uVar13;
      pbVar11 = (byte *)(lVar18 + -1);
      bVar3 = *pbVar11;
      uVar10 = (uint)(char)bVar3;
      if ((char)bVar3 < 0) {
        pbVar11 = (byte *)(lVar18 + -2);
        bVar4 = *pbVar11;
        if ((char)bVar4 < -0x40) {
          pbVar11 = (byte *)(lVar18 + -3);
          bVar5 = *pbVar11;
          if ((char)bVar5 < -0x40) {
            pbVar11 = (byte *)(lVar18 + -4);
            uVar10 = bVar5 & 0x3f | (*pbVar11 & 7) << 6;
          }
          else {
            uVar10 = (int)(char)bVar5 & 0xf;
          }
          uVar10 = bVar4 & 0x3f | uVar10 << 6;
        }
        else {
          uVar10 = (int)(char)bVar4 & 0x1f;
        }
        uVar10 = (int)(char)bVar3 & 0x3fU | uVar10 << 6;
      }
      uStack_88 = (long)pbVar11 - param_2;
    } while (uVar10 == 0x2f);
  }
  uVar16 = _malloc(uVar13);
  if (uVar16 != 0) {
LAB_104861424:
    _memcpy(uVar16,param_2,uVar13);
    *param_1 = uVar13;
    param_1[1] = uVar16;
    param_1[2] = uVar13;
    return;
  }
LAB_104861704:
  func_0x0001087c9084(1,uVar13);
  uStack_58 = extraout_x8_00;
  uVar13 = extraout_x10_00;
LAB_104861710:
  func_0x000108a07bdc(uVar13,uStack_58,&UNK_10b338550);
  uVar8 = func_0x000106032954(8);
  auVar20 = (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  pauVar9 = auVar20._0_8_;
  if (pauVar9[1][0] == '\x01') {
    auVar19 = *pauVar9;
  }
  else {
    auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar9 + 8) = auVar19._8_8_;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = auVar19._0_8_ + 1;
  extraout_x8_01[8] = 0;
  extraout_x8_01[9] = 0;
  *(undefined1 *)(extraout_x8_01 + 10) = 0;
  *extraout_x8_01 = uVar8;
  *(int *)(extraout_x8_01 + 1) = auVar20._8_4_;
  extraout_x8_01[3] = 0;
  extraout_x8_01[2] = &UNK_108e4dbe8;
  extraout_x8_01[5] = 0;
  extraout_x8_01[4] = 0;
  *(undefined1 (*) [16])(extraout_x8_01 + 6) = auVar19;
  return;
}

