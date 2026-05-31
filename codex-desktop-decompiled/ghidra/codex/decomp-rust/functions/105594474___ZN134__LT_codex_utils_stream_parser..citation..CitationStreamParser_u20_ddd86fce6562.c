
/* WARNING: Removing unreachable block (ram,0x000105594858) */

void __ZN134__LT_codex_utils_stream_parser__citation__CitationStreamParser_u20_as_u20_codex_utils_stream_parser__stream_text__StreamTextParser_GT_8push_str17hbea38cf9d9c53160E
               (long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar16 = *(long *)(param_2 + 0x28);
  if ((ulong)(*(long *)(param_2 + 0x18) - lVar16) < param_4) {
    FUN_108a05fa4(param_2 + 0x18,lVar16,param_4,1,1);
    lVar16 = *(long *)(param_2 + 0x28);
  }
  lVar21 = *(long *)(param_2 + 0x20);
  _memcpy(lVar21 + lVar16,param_3,param_4);
  *(ulong *)(param_2 + 0x28) = lVar16 + param_4;
  lStack_c0 = 0;
  lStack_b8 = 1;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lVar17 = *(long *)(param_2 + 0x38);
  plVar13 = (long *)(param_2 + 0x30);
  lVar25 = *plVar13;
  lStack_a0 = 8;
  lStack_98 = 0;
  lVar16 = *(long *)(param_2 + 0x48);
  uVar18 = *(ulong *)(param_2 + 0x50);
  plVar3 = *(long **)(param_2 + 8);
  uVar23 = *(ulong *)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x20);
  uVar22 = *(ulong *)(param_2 + 0x28);
  puStack_118 = &UNK_10b390b90;
  puStack_110 = &UNK_10b390bc0;
  if (lVar25 == -0x8000000000000000) goto LAB_105594690;
  while( true ) {
    auVar28 = func_0x0001055971bc(lVar21,uVar22,lVar16,uVar18);
    uVar20 = auVar28._8_8_;
    if ((auVar28._0_8_ & 1) == 0) break;
    *plVar13 = -0x8000000000000000;
    lStack_80 = *(long *)(param_2 + 0x40);
    lStack_88 = *(long *)(param_2 + 0x38);
    uStack_70 = *(undefined8 *)(param_2 + 0x50);
    uStack_78 = *(undefined8 *)(param_2 + 0x48);
    lStack_90 = lVar25;
    if (uVar20 != 0) {
      if (uVar20 < uVar22) {
        if (*(char *)(lVar21 + uVar20) < -0x40) {
LAB_105594cb8:
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar21,uVar22,0,uVar20,&UNK_10b390b30)
          ;
          goto LAB_105594d1c;
        }
      }
      else if (uVar20 != uVar22) goto LAB_105594cb8;
    }
    if ((ulong)(lVar25 - lStack_80) < uVar20) {
      FUN_108a05fa4(&lStack_90,lStack_80,uVar20,1,1);
    }
    lVar4 = lStack_80;
    lVar25 = lStack_88;
    lVar17 = lStack_90;
    _memcpy(lStack_88 + lStack_80,lVar21,uVar20);
    lVar16 = lStack_98;
    if (lStack_98 == lStack_a8) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h65ea6ea4490dd089E(&lStack_a8);
    }
    plVar15 = (long *)(lStack_a0 + lVar16 * 0x18);
    *plVar15 = lVar17;
    plVar15[1] = lVar25;
    plVar15[2] = lVar4 + uVar20;
    lStack_98 = lVar16 + 1;
    uVar20 = uVar20 + uVar18;
    uVar18 = uVar22 - uVar20;
    if (uVar22 < uVar20) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar20,uVar22,&UNK_10b390b48);
      goto LAB_105594d1c;
    }
    if ((uVar20 == 0) || (uVar22 < uVar20 || uVar22 - uVar20 == 0)) {
      *(undefined8 *)(param_2 + 0x28) = 0;
      if (uVar20 != 0) {
        if (uVar22 == uVar20) goto LAB_105594664;
        goto LAB_105594640;
      }
      bVar7 = uVar22 != 0;
      uVar22 = uVar18;
      if (bVar7) goto LAB_105594650;
LAB_105594664:
      uVar22 = 0;
    }
    else {
      if (*(char *)(lVar21 + uVar20) < -0x40) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108f56d0d,0x2c,&UNK_10b390b48);
        goto LAB_105594d1c;
      }
      *(undefined8 *)(param_2 + 0x28) = 0;
      uVar18 = uVar22 - uVar20;
LAB_105594640:
      _memmove(lVar10,lVar10 + uVar20,uVar18);
      uVar22 = uVar18;
LAB_105594650:
      *(ulong *)(param_2 + 0x28) = uVar22;
    }
LAB_105594690:
    puVar5 = (ulong *)(plVar3 + 5);
    plVar15 = plVar3;
    uVar20 = 0;
    uVar14 = uVar23 * 0x20;
    do {
      uVar27 = uVar20;
      puVar26 = puVar5;
      uVar14 = uVar14 - 0x20;
      if (plVar15 == plVar3 + uVar23 * 4) {
        if (uVar23 == 0) {
          uVar18 = 0;
          goto LAB_10559491c;
        }
        uVar20 = plVar3[1];
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = uVar20 - 1;
        }
        if (uVar22 <= uVar18) {
          uVar18 = uVar22;
        }
        if (uVar18 == 0) goto LAB_105594910;
        lVar16 = *plVar3;
        goto LAB_1055948a4;
      }
      plVar19 = plVar15 + 4;
      uVar24 = plVar15[1];
      auVar28 = func_0x0001055971bc(lVar21,uVar22,*plVar15,uVar24);
      uVar18 = auVar28._8_8_;
      uVar20 = uVar27 + 1;
      puVar5 = puVar26 + 4;
      plVar15 = plVar19;
    } while ((auVar28._0_8_ & 1) == 0);
    if (plVar19 != plVar3 + uVar23 * 4) {
      uVar14 = uVar14 >> 5;
      do {
        uVar12 = *puVar26;
        auVar28 = func_0x0001055971bc(lVar21,uVar22,puVar26[-1],uVar12);
        uVar9 = auVar28._8_8_;
        if ((auVar28._0_8_ & 1) != 0) {
          cVar1 = uVar24 < uVar12;
          if (uVar12 < uVar24) {
            cVar1 = -1;
          }
          cVar2 = uVar9 < uVar18;
          if (uVar18 < uVar9) {
            cVar2 = -1;
          }
          if (uVar18 != uVar9) {
            cVar1 = cVar2;
          }
          bVar7 = uVar27 <= uVar20;
          if (cVar1 != '\0') {
            bVar7 = cVar1 < '\x01';
          }
          if (!bVar7) {
            uVar27 = uVar20;
            uVar24 = uVar12;
            uVar18 = uVar9;
          }
        }
        puVar26 = puVar26 + 4;
        uVar20 = uVar20 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar18 != 0) {
      if (uVar18 < uVar22) {
        if (*(char *)(lVar21 + uVar18) < -0x40) goto LAB_105594d04;
      }
      else if (uVar18 != uVar22) goto LAB_105594d04;
      if ((ulong)(lStack_c0 - lStack_b0) < uVar18) {
        FUN_108a05fa4(&lStack_c0,lStack_b0,uVar18,1,1);
      }
      lVar16 = lStack_b0;
      _memcpy(lStack_b8 + lStack_b0,lVar21,uVar18);
      lStack_b0 = lVar16 + uVar18;
    }
    if (uVar23 <= uVar27) {
      func_0x000108a07bdc(uVar27,uVar23,&UNK_10b390ba8);
      goto LAB_105594d1c;
    }
    uVar18 = plVar3[uVar27 * 4 + 1] + uVar18;
    uVar20 = uVar22 - uVar18;
    if (uVar22 < uVar18) goto LAB_105594c5c;
    if ((uVar18 == 0) || (uVar22 < uVar18 || uVar22 - uVar18 == 0)) {
      *(undefined8 *)(param_2 + 0x28) = 0;
      if (uVar18 == 0) {
        bVar7 = uVar22 == 0;
        uVar22 = uVar20;
        if (bVar7) goto LAB_10559482c;
        goto LAB_105594818;
      }
      if (uVar22 != uVar18) goto LAB_105594808;
LAB_10559482c:
      uVar22 = 0;
    }
    else {
      if (*(char *)(lVar21 + uVar18) < -0x40) {
        puVar11 = &UNK_10b390bc0;
        goto LAB_105594c3c;
      }
      *(undefined8 *)(param_2 + 0x28) = 0;
      uVar20 = uVar22 - uVar18;
LAB_105594808:
      _memmove(lVar10,lVar10 + uVar18,uVar20);
      uVar22 = uVar20;
LAB_105594818:
      *(ulong *)(param_2 + 0x28) = uVar22;
    }
    lVar25 = 0;
    lVar16 = plVar3[uVar27 * 4 + 2];
    uVar18 = plVar3[uVar27 * 4 + 3];
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(long *)(param_2 + 0x48) = lVar16;
    *(ulong *)(param_2 + 0x50) = uVar18;
    lVar17 = 1;
  }
  uVar23 = 0;
  if (uVar18 != 0) {
    uVar23 = uVar18 - 1;
  }
  if (uVar22 <= uVar23) {
    uVar23 = uVar22;
  }
  if (uVar23 != 0) {
    do {
      uVar20 = uVar23 - 1;
      if (uVar20 == 0) {
        uVar20 = 1;
      }
      if (uVar23 < uVar18) {
        if (-0x41 < *(char *)(lVar16 + uVar23) && uVar23 <= uVar22) {
LAB_105594aec:
          iVar8 = _memcmp(lVar16,lVar21 + (uVar22 - uVar23),uVar23);
          uVar14 = uVar23;
          if (iVar8 == 0) goto LAB_105594b28;
        }
      }
      else if ((uVar23 == uVar18) && (uVar23 <= uVar22)) goto LAB_105594aec;
      uVar14 = 0;
      if ((uVar23 == 1) || (uVar23 = uVar20, uVar20 == 0)) goto LAB_105594b28;
    } while( true );
  }
  uVar14 = 0;
LAB_105594b28:
  uVar18 = 0;
  if (uVar22 >= uVar14) {
    uVar18 = uVar22 - uVar14;
  }
  if (uVar22 < uVar14 || uVar22 - uVar14 == 0) goto LAB_1055949a4;
  if ((uVar18 < uVar22) && (*(char *)(lVar21 + uVar18) < -0x40)) {
    puStack_118 = &UNK_10b390b60;
LAB_105594d04:
    __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar21,uVar22,0,uVar18,puStack_118);
    goto LAB_105594d1c;
  }
  lVar16 = *(long *)(param_2 + 0x40);
  if ((ulong)(lVar25 - lVar16) < uVar18) {
    FUN_108a05fa4(plVar13,lVar16,uVar18,1,1);
    lVar17 = *(long *)(param_2 + 0x38);
    lVar16 = *(long *)(param_2 + 0x40);
  }
  _memcpy(lVar17 + lVar16,lVar21,uVar18);
  *(ulong *)(param_2 + 0x40) = lVar16 + uVar18;
  uVar22 = *(ulong *)(param_2 + 0x28);
  if (uVar22 < uVar18) {
    puStack_110 = &UNK_10b390b78;
LAB_105594c5c:
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar18,uVar22,puStack_110);
    goto LAB_105594d1c;
  }
  if ((uVar22 <= uVar18) || (-0x41 < *(char *)(*(long *)(param_2 + 0x20) + uVar18))) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    lVar16 = uVar22 - uVar18;
    if (lVar16 == 0) goto LAB_1055949a4;
    lVar17 = *(long *)(param_2 + 0x20);
    lVar10 = lVar17 + uVar18;
    goto LAB_105594998;
  }
  puVar11 = &UNK_10b390b78;
  goto LAB_105594c3c;
LAB_1055948a4:
  do {
    uVar14 = uVar18 - 1;
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    if (uVar18 < uVar20) {
      if (-0x41 < *(char *)(lVar16 + uVar18) && uVar18 <= uVar22) {
LAB_1055948d4:
        iVar8 = _memcmp(lVar16,lVar21 + (uVar22 - uVar18),uVar18);
        if (iVar8 == 0) {
          if (uVar23 == 1) goto LAB_10559491c;
          goto LAB_1055949f0;
        }
      }
    }
    else if ((uVar18 == uVar20) && (uVar18 <= uVar22)) goto LAB_1055948d4;
  } while ((uVar18 != 1) && (uVar18 = uVar14, uVar14 != 0));
LAB_105594910:
  uVar18 = 0;
  if (uVar23 != 1) {
LAB_1055949f0:
    uVar20 = 0;
    do {
      uVar27 = (plVar3 + uVar20 * 4 + 4)[1];
      uVar14 = 0;
      if (uVar27 != 0) {
        uVar14 = uVar27 - 1;
      }
      if (uVar22 <= uVar14) {
        uVar14 = uVar22;
      }
      if (uVar14 != 0) {
        lVar16 = plVar3[uVar20 * 4 + 4];
        do {
          uVar24 = uVar14 - 1;
          if (uVar24 == 0) {
            uVar24 = 1;
          }
          if (uVar14 < uVar27) {
            if (-0x41 < *(char *)(lVar16 + uVar14) && uVar14 <= uVar22) {
LAB_105594a6c:
              iVar8 = _memcmp(lVar16,lVar21 + (uVar22 - uVar14),uVar14);
              uVar12 = uVar14;
              if (iVar8 == 0) goto LAB_105594a08;
            }
          }
          else if ((uVar14 == uVar27) && (uVar14 <= uVar22)) goto LAB_105594a6c;
          uVar12 = 0;
          if ((uVar14 == 1) || (uVar14 = uVar24, uVar24 == 0)) goto LAB_105594a08;
        } while( true );
      }
      uVar12 = 0;
LAB_105594a08:
      if (uVar18 <= uVar12) {
        uVar18 = uVar12;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != (uVar23 - 1 & 0x7ffffffffffffff));
  }
LAB_10559491c:
  uVar23 = 0;
  if (uVar22 >= uVar18) {
    uVar23 = uVar22 - uVar18;
  }
  if (uVar22 < uVar18 || uVar22 - uVar18 == 0) goto LAB_1055949a4;
  if ((uVar23 < uVar22) && (*(char *)(lVar21 + uVar23) < -0x40)) {
    __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar21,uVar22,0,uVar23,&UNK_10b390bd8);
    goto LAB_105594d1c;
  }
  if ((ulong)(lStack_c0 - lStack_b0) < uVar23) {
    FUN_108a05fa4(&lStack_c0,lStack_b0,uVar23,1,1);
  }
  lVar16 = lStack_b0;
  _memcpy(lStack_b8 + lStack_b0,lVar21,uVar23);
  lStack_b0 = lVar16 + uVar23;
  if ((uVar22 <= uVar23) || (-0x41 < *(char *)(lVar21 + uVar23))) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    lVar16 = uVar22 - uVar23;
    if (lVar16 == 0) goto LAB_1055949a4;
    lVar17 = *(long *)(param_2 + 0x20);
    lVar10 = lVar17 + uVar23;
LAB_105594998:
    _memmove(lVar17,lVar10,lVar16);
    *(long *)(param_2 + 0x28) = lVar16;
LAB_1055949a4:
    *param_1 = lStack_c0;
    param_1[1] = lStack_b8;
    param_1[3] = lStack_a8;
    param_1[2] = lStack_b0;
    param_1[4] = lStack_a0;
    param_1[5] = lStack_98;
    return;
  }
  puVar11 = &UNK_10b390bf0;
LAB_105594c3c:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108f56d0d,0x2c,puVar11);
LAB_105594d1c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x105594d20);
  (*pcVar6)();
}

