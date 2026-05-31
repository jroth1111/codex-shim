
/* WARNING: Possible PIC construction at 0x0001060453e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106045d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010604649c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106046b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106047878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106046b6c) */
/* WARNING: Removing unreachable block (ram,0x000106046b78) */
/* WARNING: Removing unreachable block (ram,0x0001060464a0) */
/* WARNING: Removing unreachable block (ram,0x0001060464ac) */
/* WARNING: Removing unreachable block (ram,0x000106045d24) */
/* WARNING: Removing unreachable block (ram,0x000106045d30) */
/* WARNING: Removing unreachable block (ram,0x0001060453ec) */
/* WARNING: Removing unreachable block (ram,0x0001060453f8) */
/* WARNING: Removing unreachable block (ram,0x00010604787c) */

void __ZN4core5slice4sort6stable9quicksort9quicksort17h02b1573bc5a9c581E
               (ulong *param_1,ulong param_2,ulong *param_3,ulong param_4,ulong param_5,
               ulong *param_6,ulong *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  ulong **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  undefined8 *puVar43;
  long lVar44;
  ulong *puVar45;
  undefined8 *puVar46;
  ulong *puVar47;
  undefined8 *puVar48;
  undefined8 uVar49;
  ulong *puVar50;
  ulong *puVar51;
  ulong *puVar52;
  undefined1 **ppuVar53;
  undefined1 *puVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong *puStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puStack_88 = param_7;
  if (0x20 < param_2) {
    puStack_90 = param_3 + -3;
    uVar25 = param_5;
    puVar50 = param_6;
    do {
      if ((int)uVar25 == 0) {
        FUN_106043ce0(param_1,param_2,param_3,param_4,1,puStack_88);
        return;
      }
      if (param_2 < 0x40) {
        uVar30 = *param_1;
        uVar33 = param_1[(param_2 >> 3) * 0xc];
        uVar38 = param_1[(param_2 >> 3) * 0x15];
        puVar21 = param_1 + (param_2 >> 3) * 0x15;
        if (uVar30 < uVar33 == uVar33 < uVar38) {
          puVar21 = param_1 + (param_2 >> 3) * 0xc;
        }
        puVar51 = param_1;
        if (uVar30 < uVar33 == uVar30 < uVar38) {
          puVar51 = puVar21;
        }
      }
      else {
        puVar51 = (ulong *)FUN_106040914(param_1);
      }
      uVar25 = (ulong)((int)uVar25 - 1);
      uVar33 = (ulong)((long)puVar51 - (long)param_1) >> 3;
      uVar30 = uVar33 * -0x5555555555555555;
      uStack_78 = puVar51[1];
      uStack_80 = *puVar51;
      uStack_70 = puVar51[2];
      if ((puVar50 == (ulong *)0x0) || (*puVar50 < *puVar51)) {
        if (param_2 <= param_4) {
          uVar38 = 0;
          puVar22 = param_3 + param_2 * 3;
          puVar17 = param_1 + uVar33;
          puVar21 = param_1;
          uVar37 = uVar30;
          if (puVar17 <= param_1) goto LAB_106044538;
LAB_106044500:
          do {
            uVar34 = *puVar21;
            uVar35 = *puVar51;
            puVar22 = puVar22 + -3;
            puVar20 = param_3;
            if (uVar35 <= uVar34) {
              puVar20 = puVar22;
            }
            puVar20 = puVar20 + uVar38 * 3;
            uVar42 = puVar21[1];
            uVar40 = *puVar21;
            puVar20[2] = puVar21[2];
            puVar20[1] = uVar42;
            *puVar20 = uVar40;
            if (uVar35 > uVar34) {
              uVar38 = uVar38 + 1;
            }
            puVar21 = puVar21 + 3;
          } while (puVar21 < puVar17);
LAB_106044538:
          if (uVar37 != param_2) goto code_r0x000106044540;
          _memcpy(param_1,param_3,uVar38 * 0x18);
          lVar36 = param_2 - uVar38;
          if (lVar36 != 0) {
            puVar21 = param_1 + uVar38 * 3;
            puVar22 = puStack_90 + param_2 * 3;
            lVar29 = lVar36;
            do {
              uVar37 = *puVar22;
              puVar21[1] = puVar22[1];
              *puVar21 = uVar37;
              puVar21[2] = puVar22[2];
              puVar22 = puVar22 + -3;
              puVar21 = puVar21 + 3;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
          if (uVar38 == 0) goto LAB_1060445f4;
          if (uVar38 <= param_2) {
            param_6 = &uStack_80;
            param_5 = uVar25;
            param_7 = puStack_88;
            __ZN4core5slice4sort6stable9quicksort9quicksort17h02b1573bc5a9c581E
                      (param_1 + uVar38 * 3,lVar36,param_3,param_4);
            param_2 = uVar38;
            goto joined_r0x0001060446e8;
          }
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
          goto LAB_1060449c4;
        }
        goto LAB_1060449c8;
      }
LAB_1060445f4:
      if (param_4 < param_2) goto LAB_1060449c8;
      uVar38 = 0;
      puVar21 = param_3 + param_2 * 3;
      puVar22 = param_1 + uVar33;
      puVar50 = param_1;
      if (puVar22 <= param_1) goto LAB_10604464c;
LAB_106044614:
      do {
        uVar33 = *puVar50;
        uVar37 = *puVar51;
        puVar21 = puVar21 + -3;
        puVar17 = param_3;
        if (uVar37 < uVar33) {
          puVar17 = puVar21;
        }
        puVar17 = puVar17 + uVar38 * 3;
        uVar35 = puVar50[1];
        uVar34 = *puVar50;
        puVar17[2] = puVar50[2];
        puVar17[1] = uVar35;
        *puVar17 = uVar34;
        if (uVar37 >= uVar33) {
          uVar38 = uVar38 + 1;
        }
        puVar50 = puVar50 + 3;
      } while (puVar50 < puVar22);
LAB_10604464c:
      if (uVar30 != param_2) goto code_r0x000106044654;
      _memcpy(param_1,param_3,uVar38 * 0x18);
      uStack_b8 = param_2 - uVar38;
      if (uStack_b8 == 0) {
        return;
      }
      param_1 = param_1 + uVar38 * 3;
      puVar21 = puStack_90 + param_2 * 3;
      uVar33 = uStack_b8;
      puVar50 = param_1;
      do {
        uVar37 = *puVar21;
        puVar50[1] = puVar21[1];
        *puVar50 = uVar37;
        puVar50[2] = puVar21[2];
        puVar21 = puVar21 + -3;
        puVar50 = puVar50 + 3;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
      if (param_2 < uVar38) {
        puVar50 = (ulong *)&UNK_10b4ae618;
        uVar16 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar38,param_2,param_2)
        ;
        puVar21 = (ulong *)(uStack_b8 * 0x18);
        _memcpy(param_1,param_3);
        auVar57 = __Unwind_Resume(uVar16);
        uStack_f0 = 0x18;
        puStack_e8 = puVar51;
        uStack_e0 = uVar38;
        uStack_d8 = param_2;
        uStack_d0 = uVar25;
        uStack_c8 = uVar30;
        uStack_c0 = uVar16;
        puStack_b0 = param_1;
        puStack_a8 = param_3;
        puStack_a0 = &stack0xfffffffffffffff0;
        pcStack_98 = __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E;
        ppuVar53 = &puStack_a0;
        puStack_118 = param_7;
        if (auVar57._8_8_ < 0x21) goto LAB_106044a40;
        puStack_120 = puVar21 + -4;
        uVar25 = param_5;
        puVar51 = param_6;
        goto LAB_106044ab0;
      }
      puVar50 = (ulong *)0x0;
      param_2 = uStack_b8;
joined_r0x0001060446e8:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_1060449c8;
  uVar25 = param_2 >> 1;
  if (param_2 < 8) {
    uVar33 = param_1[1];
    uVar30 = *param_1;
    param_3[2] = param_1[2];
    param_3[1] = uVar33;
    *param_3 = uVar30;
    puVar50 = param_1 + uVar25 * 3;
    puVar51 = param_3 + uVar25 * 3;
    uVar33 = puVar50[1];
    uVar30 = *puVar50;
    puVar51[2] = puVar50[2];
    puVar51[1] = uVar33;
    *puVar51 = uVar30;
    uVar30 = 1;
    uVar33 = param_2 - uVar25;
    if (1 < uVar25) goto LAB_10604474c;
  }
  else {
    puVar51 = param_1 + (ulong)(*param_1 > param_1[3]) * 3;
    puVar50 = param_1 + (ulong)(*param_1 <= param_1[3]) * 3;
    lVar36 = 0x48;
    if (param_1[6] <= param_1[9]) {
      lVar36 = 0x30;
    }
    puVar21 = (ulong *)((long)param_1 + lVar36);
    lVar36 = 0x30;
    if (param_1[6] <= param_1[9]) {
      lVar36 = 0x48;
    }
    puVar22 = (ulong *)((long)param_1 + lVar36);
    puVar17 = puVar21;
    if (*puVar50 <= *puVar22) {
      puVar17 = puVar50;
    }
    puVar20 = puVar50;
    puVar47 = puVar51;
    if (*puVar51 <= *puVar21) {
      puVar20 = puVar21;
      puVar47 = puVar17;
      puVar21 = puVar51;
    }
    puVar51 = puVar22;
    if (*puVar50 <= *puVar22) {
      puVar51 = puVar20;
      puVar50 = puVar22;
    }
    puVar22 = puVar47;
    if (*puVar47 <= *puVar51) {
      puVar22 = puVar51;
      puVar51 = puVar47;
    }
    uVar33 = puVar21[1];
    uVar30 = *puVar21;
    param_3[2] = puVar21[2];
    param_3[1] = uVar33;
    *param_3 = uVar30;
    uVar33 = puVar51[1];
    uVar30 = *puVar51;
    param_3[5] = puVar51[2];
    param_3[4] = uVar33;
    param_3[3] = uVar30;
    uVar33 = puVar22[1];
    uVar30 = *puVar22;
    param_3[8] = puVar22[2];
    param_3[7] = uVar33;
    param_3[6] = uVar30;
    uVar33 = puVar50[1];
    uVar30 = *puVar50;
    param_3[0xb] = puVar50[2];
    param_3[10] = uVar33;
    param_3[9] = uVar30;
    puVar50 = param_1 + uVar25 * 3;
    lVar36 = 0x48;
    if (puVar50[6] <= puVar50[9]) {
      lVar36 = 0x30;
    }
    puVar51 = (ulong *)((long)puVar50 + lVar36);
    puVar22 = puVar50 + (ulong)(*puVar50 > puVar50[3]) * 3;
    puVar21 = puVar50 + (ulong)(*puVar50 <= puVar50[3]) * 3;
    lVar36 = 0x30;
    if (puVar50[6] <= puVar50[9]) {
      lVar36 = 0x48;
    }
    puVar50 = (ulong *)((long)puVar50 + lVar36);
    puVar17 = puVar51;
    if (*puVar21 <= *puVar50) {
      puVar17 = puVar21;
    }
    puVar20 = puVar21;
    puVar47 = puVar22;
    if (*puVar22 <= *puVar51) {
      puVar20 = puVar51;
      puVar47 = puVar17;
      puVar51 = puVar22;
    }
    puVar22 = param_3 + uVar25 * 3;
    puVar17 = puVar50;
    if (*puVar21 <= *puVar50) {
      puVar17 = puVar20;
      puVar21 = puVar50;
    }
    puVar50 = puVar47;
    if (*puVar47 <= *puVar17) {
      puVar50 = puVar17;
      puVar17 = puVar47;
    }
    uVar33 = puVar51[1];
    uVar30 = *puVar51;
    puVar22[2] = puVar51[2];
    puVar22[1] = uVar33;
    *puVar22 = uVar30;
    uVar33 = puVar17[1];
    uVar30 = *puVar17;
    puVar22[5] = puVar17[2];
    puVar22[4] = uVar33;
    puVar22[3] = uVar30;
    uVar33 = puVar50[1];
    uVar30 = *puVar50;
    puVar22[8] = puVar50[2];
    puVar22[7] = uVar33;
    puVar22[6] = uVar30;
    uVar33 = puVar21[1];
    uVar30 = *puVar21;
    puVar22[0xb] = puVar21[2];
    puVar22[10] = uVar33;
    puVar22[9] = uVar30;
    uVar30 = 4;
    uVar33 = param_2 - uVar25;
    if (4 < uVar25) {
LAB_10604474c:
      lVar36 = uVar30 * 0x18;
      uVar38 = uVar30;
      do {
        uVar37 = uVar38 + 1;
        puVar50 = param_1 + uVar38 * 3;
        puVar51 = param_3 + uVar38 * 3;
        uVar38 = puVar50[2];
        uVar34 = *puVar50;
        puVar51[1] = puVar50[1];
        *puVar51 = uVar34;
        puVar51[2] = uVar38;
        uVar38 = *puVar51;
        if (uVar38 < puVar51[-3]) {
          uStack_78 = puVar50[2];
          uStack_80 = puVar50[1];
          lVar29 = lVar36;
          do {
            puVar28 = (undefined8 *)((long)param_3 + lVar29);
            puVar28[1] = puVar28[-2];
            *puVar28 = puVar28[-3];
            puVar28[2] = puVar28[-1];
            lVar29 = lVar29 + -0x18;
            puVar50 = param_3;
            if (lVar29 == 0) goto LAB_106044764;
          } while (uVar38 < (ulong)puVar28[-6]);
          puVar50 = (ulong *)((long)param_3 + lVar29);
LAB_106044764:
          *puVar50 = uVar38;
          puVar50[2] = uStack_78;
          puVar50[1] = uStack_80;
        }
        lVar36 = lVar36 + 0x18;
        uVar38 = uVar37;
      } while (uVar37 < uVar25);
    }
  }
  puVar50 = param_3 + uVar25 * 3;
  if (uVar30 < uVar33) {
    lVar36 = 0x18;
    uVar38 = uVar30;
    puVar51 = puVar50;
    do {
      uVar37 = uVar38 + 1;
      puVar21 = param_1 + uVar25 * 3 + uVar38 * 3;
      puVar22 = puVar50 + uVar38 * 3;
      uVar38 = puVar21[2];
      uVar34 = *puVar21;
      puVar22[1] = puVar21[1];
      *puVar22 = uVar34;
      puVar22[2] = uVar38;
      uVar38 = *puVar22;
      if (uVar38 < puVar22[-3]) {
        uStack_78 = puVar21[2];
        uStack_80 = puVar21[1];
        lVar29 = lVar36;
        puVar21 = puVar51;
        do {
          puVar22 = puVar21 + uVar30 * 3;
          puVar22[1] = puVar22[-2];
          *puVar22 = puVar22[-3];
          puVar22[2] = puVar22[-1];
          puVar17 = puVar50;
          if (uVar30 * 0x18 - lVar29 == 0) goto LAB_106044820;
          puVar21 = puVar21 + -3;
          lVar29 = lVar29 + 0x18;
        } while (uVar38 < puVar22[-6]);
        puVar17 = puVar21 + uVar30 * 3;
LAB_106044820:
        *puVar17 = uVar38;
        puVar17[2] = uStack_78;
        puVar17[1] = uStack_80;
      }
      lVar36 = lVar36 + -0x18;
      puVar51 = puVar51 + 3;
      uVar38 = uVar37;
    } while (uVar37 < uVar33);
  }
  lVar36 = param_2 * 0x18;
  puVar51 = param_3 + param_2 * 3 + -3;
  puVar22 = puVar50 + -3;
  puVar21 = param_1;
  do {
    puVar20 = puVar21;
    lVar36 = lVar36 + -0x18;
    puVar21 = (ulong *)((long)param_1 + lVar36);
    bVar13 = *param_3 <= *puVar50;
    puVar17 = puVar50;
    if (bVar13) {
      puVar17 = param_3;
    }
    uVar33 = puVar17[1];
    uVar30 = *puVar17;
    puVar20[2] = puVar17[2];
    puVar20[1] = uVar33;
    *puVar20 = uVar30;
    puVar50 = puVar50 + (ulong)!bVar13 * 3;
    param_3 = param_3 + (ulong)bVar13 * 3;
    bVar13 = *puVar22 <= *puVar51;
    puVar17 = puVar22;
    if (bVar13) {
      puVar17 = puVar51;
    }
    uVar33 = puVar17[1];
    uVar30 = *puVar17;
    puVar21[2] = puVar17[2];
    puVar21[1] = uVar33;
    *puVar21 = uVar30;
    puVar51 = puVar51 + (ulong)bVar13 * -3;
    puVar22 = puVar22 + (ulong)!bVar13 * -3;
    uVar25 = uVar25 - 1;
    puVar21 = puVar20 + 3;
  } while (uVar25 != 0);
  if ((param_2 & 1) != 0) {
    bVar13 = puVar22 + 3 <= param_3;
    puVar21 = param_3;
    if (bVar13) {
      puVar21 = puVar50;
    }
    uVar30 = puVar21[1];
    uVar25 = *puVar21;
    puVar20[5] = puVar21[2];
    puVar20[4] = uVar30;
    puVar20[3] = uVar25;
    param_3 = param_3 + (ulong)!bVar13 * 3;
    puVar50 = puVar50 + (ulong)bVar13 * 3;
  }
  if (param_3 == puVar22 + 3 && puVar50 == puVar51 + 3) {
    return;
  }
LAB_1060449c4:
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_1060449c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1060449cc);
  (*pcVar9)();
code_r0x000106044540:
  puVar22 = puVar22 + -3;
  puVar17 = puVar22 + uVar38 * 3;
  uVar37 = *puVar21;
  puVar17[1] = puVar21[1];
  *puVar17 = uVar37;
  puVar17[2] = puVar21[2];
  puVar21 = puVar21 + 3;
  puVar17 = param_1 + param_2 * 3;
  uVar37 = param_2;
  if (puVar21 < puVar17) goto LAB_106044500;
  goto LAB_106044538;
code_r0x000106044654:
  puVar21 = puVar21 + -3;
  uVar33 = puVar50[1];
  uVar30 = *puVar50;
  puVar22 = param_3 + uVar38 * 3;
  puVar22[2] = puVar50[2];
  puVar22[1] = uVar33;
  *puVar22 = uVar30;
  uVar38 = uVar38 + 1;
  puVar50 = puVar50 + 3;
  puVar22 = param_1 + param_2 * 3;
  uVar30 = param_2;
  if (puVar50 < puVar22) goto LAB_106044614;
  goto LAB_10604464c;
LAB_106044ab0:
  puVar17 = auVar57._8_8_;
  puVar22 = auVar57._0_8_;
  if ((int)uVar25 == 0) {
    func_0x000106042300(puVar22,puVar17,puVar21,puVar50,1,puStack_118);
    return;
  }
  puVar20 = puVar22 + ((ulong)puVar17 >> 3) * 0x10;
  puVar47 = puVar22 + ((ulong)puVar17 >> 3) * 0x1c;
  if (puVar17 < (ulong *)0x40) {
    uVar33 = *puVar22;
    uVar38 = puVar22[2];
    uVar30 = puVar20[2];
    puVar52 = puVar22;
    if (uVar38 < uVar30) {
      uVar37 = *puVar47;
      uVar34 = puVar47[2];
      if ((uVar38 < uVar34) || (uVar38 <= uVar34 && uVar33 < uVar37)) {
LAB_106044b34:
        bVar13 = true;
LAB_106044b38:
        puVar52 = puVar47;
        if (bVar13 == (uVar30 < uVar34 || uVar30 == uVar34 && *puVar20 < uVar37)) {
          puVar52 = puVar20;
        }
      }
    }
    else {
      bVar13 = uVar38 == uVar30 && uVar33 < *puVar20;
      uVar37 = *puVar47;
      uVar34 = puVar47[2];
      if (uVar38 < uVar34) {
        if (bVar13) goto LAB_106044b34;
      }
      else if (bVar13 == (uVar38 == uVar34 && uVar33 < uVar37)) goto LAB_106044b38;
    }
  }
  else {
    puVar52 = (ulong *)FUN_106040728(puVar22);
  }
  uVar25 = (ulong)((int)uVar25 - 1);
  puVar47 = (ulong *)((ulong)((long)puVar52 - (long)puVar22) >> 5);
  uStack_108 = puVar52[1];
  uStack_110 = *puVar52;
  uStack_f8 = puVar52[3];
  uStack_100 = puVar52[2];
  puVar20 = puVar21 + (long)puVar17 * 4;
  if (puVar51 == (ulong *)0x0) {
LAB_106044b9c:
    if (puVar50 < puVar17) goto LAB_1060450fc;
    puVar45 = (ulong *)0x0;
    puVar18 = puVar22;
    puVar31 = puVar20;
    puVar27 = puVar47;
    while( true ) {
      for (puVar26 = puVar18; auVar57._8_8_ = puVar45, auVar57._0_8_ = puVar22,
          puVar26 < puVar22 + (long)puVar27 * 4; puVar26 = puVar26 + 4) {
        puVar18 = puVar21;
        if (puVar26[2] < puVar52[2]) {
          uVar30 = 1;
        }
        else {
          uVar1 = (uint)(puVar26[2] <= puVar52[2] && *puVar26 < *puVar52);
          uVar30 = (ulong)uVar1;
          if (uVar1 == 0) {
            puVar18 = puVar31 + -4;
          }
        }
        puVar31 = puVar31 + -4;
        puVar18 = puVar18 + (long)puVar45 * 4;
        uVar33 = *puVar26;
        uVar37 = puVar26[3];
        uVar38 = puVar26[2];
        puVar18[1] = puVar26[1];
        *puVar18 = uVar33;
        puVar18[3] = uVar37;
        puVar18[2] = uVar38;
        puVar45 = (ulong *)(uVar30 + (long)puVar45);
      }
      if (puVar27 == puVar17) break;
      puVar31 = puVar31 + -4;
      puVar18 = puVar26 + 4;
      uVar30 = *puVar26;
      uVar38 = puVar26[3];
      uVar33 = puVar26[2];
      puVar27 = puVar31 + (long)puVar45 * 4;
      puVar27[1] = puVar26[1];
      *puVar27 = uVar30;
      puVar27[3] = uVar38;
      puVar27[2] = uVar33;
      puVar27 = puVar17;
    }
    _memcpy(puVar22,puVar21,(long)puVar45 << 5);
    lVar36 = (long)puVar17 - (long)puVar45;
    if (lVar36 != 0) {
      puVar18 = puStack_120 + (long)puVar17 * 4;
      lVar29 = lVar36;
      puVar31 = puVar22 + (long)puVar45 * 4;
      do {
        uVar30 = *puVar18;
        uVar38 = puVar18[3];
        uVar33 = puVar18[2];
        puVar31[1] = puVar18[1];
        *puVar31 = uVar30;
        puVar31[3] = uVar38;
        puVar31[2] = uVar33;
        lVar29 = lVar29 + -1;
        puVar18 = puVar18 + -4;
        puVar31 = puVar31 + 4;
      } while (lVar29 != 0);
    }
    if (puVar45 == (ulong *)0x0) goto LAB_106044cc0;
    if (puVar45 <= puVar17) {
      param_6 = &uStack_110;
      param_5 = uVar25;
      param_7 = puStack_118;
      __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E
                (puVar22 + (long)puVar45 * 4,lVar36,puVar21,puVar50);
      goto joined_r0x000106044ca0;
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_1060450f8;
  }
  if ((puVar51[2] < puVar52[2]) || (puVar51[2] <= puVar52[2] && *puVar51 < *puVar52))
  goto LAB_106044b9c;
LAB_106044cc0:
  if (puVar50 < puVar17) goto LAB_1060450fc;
  puVar51 = (ulong *)0x0;
  puVar45 = puVar22;
  while( true ) {
    for (puVar18 = puVar45; puVar18 < puVar22 + (long)puVar47 * 4; puVar18 = puVar18 + 4) {
      uVar30 = puVar18[2];
      uVar33 = puVar52[2];
      if (uVar33 < uVar30) {
        uVar38 = 0;
        puVar45 = puVar20 + -4;
      }
      else {
        uVar38 = (ulong)(uVar30 < uVar33 || *puVar18 <= *puVar52);
        puVar45 = puVar21;
        if (uVar30 >= uVar33 && *puVar18 > *puVar52) {
          puVar45 = puVar20 + -4;
        }
      }
      puVar20 = puVar20 + -4;
      puVar45 = puVar45 + (long)puVar51 * 4;
      uVar30 = *puVar18;
      uVar37 = puVar18[3];
      uVar33 = puVar18[2];
      puVar45[1] = puVar18[1];
      *puVar45 = uVar30;
      puVar45[3] = uVar37;
      puVar45[2] = uVar33;
      puVar51 = (ulong *)(uVar38 + (long)puVar51);
    }
    if (puVar47 == puVar17) break;
    puVar20 = puVar20 + -4;
    puVar45 = puVar18 + 4;
    uVar30 = *puVar18;
    uVar38 = puVar18[3];
    uVar33 = puVar18[2];
    puVar47 = puVar21 + (long)puVar51 * 4;
    puVar47[1] = puVar18[1];
    *puVar47 = uVar30;
    puVar47[3] = uVar38;
    puVar47[2] = uVar33;
    puVar51 = (ulong *)((long)puVar51 + 1);
    puVar47 = puVar17;
  }
  _memcpy(puVar22,puVar21,(long)puVar51 << 5);
  puVar45 = (ulong *)((long)puVar17 - (long)puVar51);
  if (puVar45 == (ulong *)0x0) {
    return;
  }
  puVar22 = puVar22 + (long)puVar51 * 4;
  auVar5._8_8_ = puVar17;
  auVar5._0_8_ = puVar22;
  auVar57._8_8_ = puVar45;
  auVar57._0_8_ = puVar22;
  puVar31 = puStack_120 + (long)puVar17 * 4;
  puVar18 = puVar45;
  puVar27 = puVar22;
  do {
    uVar30 = *puVar31;
    uVar38 = puVar31[3];
    uVar33 = puVar31[2];
    puVar27[1] = puVar31[1];
    *puVar27 = uVar30;
    puVar27[3] = uVar38;
    puVar27[2] = uVar33;
    puVar18 = (ulong *)((long)puVar18 + -1);
    puVar31 = puVar31 + -4;
    puVar27 = puVar27 + 4;
  } while (puVar18 != (ulong *)0x0);
  if (puVar17 < puVar51) {
    puVar45 = (ulong *)&UNK_10b4ae618;
    puVar18 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                 (puVar51,puVar17,puVar17);
    puVar17 = puVar47;
    _memcpy(puVar22,puVar21);
    uVar16 = 0x106045134;
    auVar58 = __Unwind_Resume(puVar18);
    ppuVar10 = &puStack_120;
    while( true ) {
      *(ulong **)((long)ppuVar10 + -0x60) = puVar20;
      *(ulong **)((long)ppuVar10 + -0x58) = puVar52;
      *(ulong **)((long)ppuVar10 + -0x50) = puVar51;
      *(long *)((long)ppuVar10 + -0x48) = auVar5._8_8_;
      *(ulong *)((long)ppuVar10 + -0x40) = uVar25;
      *(ulong **)((long)ppuVar10 + -0x38) = puVar47;
      *(ulong **)((long)ppuVar10 + -0x30) = puVar50;
      *(ulong **)((long)ppuVar10 + -0x28) = puVar18;
      *(long *)((long)ppuVar10 + -0x20) = auVar5._0_8_;
      *(ulong **)((long)ppuVar10 + -0x18) = puVar21;
      *(undefined1 ***)((long)ppuVar10 + -0x10) = ppuVar53;
      *(undefined8 *)((long)ppuVar10 + -8) = uVar16;
      ppuVar53 = (undefined1 **)((long)ppuVar10 + -0x10);
      *(ulong **)((long)ppuVar10 + -0x78) = param_7;
      if (auVar58._8_8_ < 0x21) break;
      *(ulong **)((long)ppuVar10 + -0x80) = puVar17 + -2;
      uVar25 = param_5;
      puVar51 = param_6;
      auVar5 = auVar58;
      while( true ) {
        puVar21 = auVar5._8_8_;
        puVar50 = auVar5._0_8_;
        if ((int)param_5 == 0) {
          FUN_1060428fc(puVar50,puVar21,puVar17,puVar45,1,*(undefined8 *)((long)ppuVar10 + -0x78));
          return;
        }
        if (puVar21 < (ulong *)0x40) {
          uVar30 = *puVar50;
          uVar33 = puVar50[((ulong)puVar21 >> 3) * 8];
          uVar38 = puVar50[((ulong)puVar21 >> 3) * 0xe];
          puVar20 = puVar50 + ((ulong)puVar21 >> 3) * 0xe;
          if (uVar30 < uVar33 == uVar33 < uVar38) {
            puVar20 = puVar50 + ((ulong)puVar21 >> 3) * 8;
          }
          puVar22 = puVar50;
          if (uVar30 < uVar33 == uVar30 < uVar38) {
            puVar22 = puVar20;
          }
        }
        else {
          puVar22 = (ulong *)FUN_10604065c(puVar50);
        }
        param_5 = (ulong)((int)param_5 - 1);
        puVar20 = (ulong *)((long)puVar22 - (long)puVar50);
        puVar47 = (ulong *)((ulong)puVar20 >> 4);
        uVar33 = *puVar22;
        uVar30 = *puVar22;
        *(ulong *)((long)ppuVar10 + -0x68) = puVar22[1];
        *(ulong *)((long)ppuVar10 + -0x70) = uVar33;
        puVar52 = puVar17 + (long)puVar21 * 2;
        if ((puVar51 == (ulong *)0x0) || (*puVar51 < uVar30)) break;
LAB_1060453fc:
        if (puVar45 < puVar21) goto LAB_106045908;
        puVar51 = (ulong *)0x0;
        puVar3 = (undefined *)0x0;
        if ((ulong *)0x2 < puVar47) {
          puVar3 = (undefined *)((long)puVar47 + -3);
        }
        puVar18 = puVar50 + (long)puVar3 * 2;
        puVar22 = puVar50;
        if (puVar18 <= puVar50) goto LAB_1060454ac;
LAB_106045420:
        do {
          bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) < *puVar22;
          puVar31 = puVar17;
          if (bVar13) {
            puVar31 = puVar52 + -2;
          }
          uVar30 = *puVar22;
          (puVar31 + (long)puVar51 * 2)[1] = puVar22[1];
          puVar31[(long)puVar51 * 2] = uVar30;
          if (!bVar13) {
            puVar51 = (ulong *)((long)puVar51 + 1);
          }
          bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) < puVar22[2];
          puVar31 = puVar17;
          if (bVar13) {
            puVar31 = puVar52 + -4;
          }
          uVar30 = puVar22[2];
          (puVar31 + (long)puVar51 * 2)[1] = puVar22[3];
          puVar31[(long)puVar51 * 2] = uVar30;
          if (!bVar13) {
            puVar51 = (ulong *)((long)puVar51 + 1);
          }
          bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) < puVar22[4];
          puVar31 = puVar17;
          if (bVar13) {
            puVar31 = puVar52 + -6;
          }
          uVar30 = puVar22[4];
          (puVar31 + (long)puVar51 * 2)[1] = puVar22[5];
          puVar31[(long)puVar51 * 2] = uVar30;
          if (!bVar13) {
            puVar51 = (ulong *)((long)puVar51 + 1);
          }
          puVar52 = puVar52 + -8;
          bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) < puVar22[6];
          puVar31 = puVar17;
          if (bVar13) {
            puVar31 = puVar52;
          }
          uVar30 = puVar22[6];
          (puVar31 + (long)puVar51 * 2)[1] = puVar22[7];
          puVar31[(long)puVar51 * 2] = uVar30;
          if (!bVar13) {
            puVar51 = (ulong *)((long)puVar51 + 1);
          }
          puVar22 = puVar22 + 8;
        } while (puVar22 < puVar18);
LAB_1060454ac:
        puVar18 = puVar22;
        while (puVar18 < puVar50 + (long)puVar47 * 2) {
          uVar30 = *puVar18;
          puVar31 = puVar18 + 2;
          puVar52 = puVar52 + -2;
          bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) < *puVar18;
          puVar22 = puVar17;
          if (bVar13) {
            puVar22 = puVar52;
          }
          (puVar22 + (long)puVar51 * 2)[1] = puVar18[1];
          puVar22[(long)puVar51 * 2] = uVar30;
          puVar18 = puVar31;
          if (!bVar13) {
            puVar51 = (ulong *)((long)puVar51 + 1);
          }
        }
        if (puVar47 != puVar21) goto code_r0x0001060454e8;
        _memcpy(puVar50,puVar17,(long)puVar51 << 4);
        uVar30 = (long)puVar21 - (long)puVar51;
        if (uVar30 == 0) {
          return;
        }
        puVar50 = puVar50 + (long)puVar51 * 2;
        auVar6._8_8_ = puVar21;
        auVar6._0_8_ = puVar50;
        auVar58._8_8_ = uVar30;
        auVar58._0_8_ = puVar50;
        puVar22 = (ulong *)(*(long *)((long)ppuVar10 + -0x80) + (long)puVar21 * 0x10);
        uVar33 = uVar30;
        puVar18 = puVar50;
        do {
          uVar38 = *puVar22;
          puVar18[1] = puVar22[1];
          *puVar18 = uVar38;
          uVar33 = uVar33 - 1;
          puVar22 = puVar22 + -2;
          puVar18 = puVar18 + 2;
        } while (uVar33 != 0);
        if (puVar21 < puVar51) {
          puVar22 = (ulong *)&UNK_10b4ae618;
          puVar21 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                       (puVar51,puVar21,puVar21);
          puVar18 = puVar45;
          _memcpy(puVar50,puVar17);
          uVar16 = 0x106045940;
          auVar59 = __Unwind_Resume(puVar21);
          puVar11 = (undefined1 *)((long)ppuVar10 + -0x80);
          goto __ZN4core5slice4sort6stable9quicksort9quicksort17h58c6cb561a55387aE;
        }
        puVar51 = (ulong *)0x0;
        auVar5 = auVar58;
        if (uVar30 < 0x21) goto LAB_106045170;
      }
      if (puVar45 < puVar21) goto LAB_106045908;
      puVar18 = (ulong *)0x0;
      puVar3 = (undefined *)0x0;
      if ((ulong *)0x2 < puVar47) {
        puVar3 = (undefined *)((long)puVar47 + -3);
      }
      puVar31 = puVar50 + (long)puVar3 * 2;
      puVar27 = puVar52;
      puVar22 = puVar50;
      puVar26 = puVar47;
      if (puVar31 <= puVar50) goto LAB_106045328;
LAB_10604529c:
      do {
        bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) <= *puVar22;
        puVar32 = puVar17;
        if (bVar13) {
          puVar32 = puVar27 + -2;
        }
        uVar30 = *puVar22;
        (puVar32 + (long)puVar18 * 2)[1] = puVar22[1];
        puVar32[(long)puVar18 * 2] = uVar30;
        if (!bVar13) {
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) <= puVar22[2];
        puVar32 = puVar17;
        if (bVar13) {
          puVar32 = puVar27 + -4;
        }
        uVar30 = puVar22[2];
        (puVar32 + (long)puVar18 * 2)[1] = puVar22[3];
        puVar32[(long)puVar18 * 2] = uVar30;
        if (!bVar13) {
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) <= puVar22[4];
        puVar32 = puVar17;
        if (bVar13) {
          puVar32 = puVar27 + -6;
        }
        uVar30 = puVar22[4];
        (puVar32 + (long)puVar18 * 2)[1] = puVar22[5];
        puVar32[(long)puVar18 * 2] = uVar30;
        if (!bVar13) {
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        puVar27 = puVar27 + -8;
        bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) <= puVar22[6];
        puVar32 = puVar17;
        if (bVar13) {
          puVar32 = puVar27;
        }
        uVar30 = puVar22[6];
        (puVar32 + (long)puVar18 * 2)[1] = puVar22[7];
        puVar32[(long)puVar18 * 2] = uVar30;
        if (!bVar13) {
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        puVar22 = puVar22 + 8;
      } while (puVar22 < puVar31);
LAB_106045328:
      puVar31 = puVar22;
      while (puVar31 < puVar50 + (long)puVar26 * 2) {
        uVar30 = *puVar31;
        puVar32 = puVar31 + 2;
        puVar27 = puVar27 + -2;
        bVar13 = *(ulong *)((long)puVar50 + (long)puVar20) <= *puVar31;
        puVar22 = puVar17;
        if (bVar13) {
          puVar22 = puVar27;
        }
        (puVar22 + (long)puVar18 * 2)[1] = puVar31[1];
        puVar22[(long)puVar18 * 2] = uVar30;
        puVar31 = puVar32;
        if (!bVar13) {
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
      }
      if (puVar26 != puVar21) goto code_r0x000106045364;
      _memcpy(puVar50,puVar17,(long)puVar18 << 4);
      lVar36 = (long)puVar21 - (long)puVar18;
      auVar58._8_8_ = lVar36;
      auVar58._0_8_ = puVar50 + (long)puVar18 * 2;
      if (lVar36 != 0) {
        puVar22 = (ulong *)(*(long *)((long)ppuVar10 + -0x80) + (long)puVar21 * 0x10);
        puVar31 = puVar50 + (long)puVar18 * 2;
        do {
          uVar30 = *puVar22;
          puVar31[1] = puVar22[1];
          *puVar31 = uVar30;
          lVar36 = lVar36 + -1;
          puVar22 = puVar22 + -2;
          puVar31 = puVar31 + 2;
        } while (lVar36 != 0);
      }
      if (puVar18 == (ulong *)0x0) goto LAB_1060453fc;
      if (puVar21 < puVar18) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
        goto LAB_106045904;
      }
      param_6 = (ulong *)((long)ppuVar10 + -0x70);
      param_7 = *(ulong **)((long)ppuVar10 + -0x78);
      uVar16 = 0x1060453ec;
      ppuVar10 = (ulong **)((long)ppuVar10 + -0x80);
      puVar21 = puVar17;
      puVar50 = puVar45;
      uVar25 = param_5;
    }
LAB_106045170:
    uVar25 = auVar58._8_8_;
    puVar50 = auVar58._0_8_;
    if (uVar25 < 2) {
      return;
    }
    if (puVar45 < (ulong *)(uVar25 + 0x10)) goto LAB_106045908;
    uVar30 = uVar25 >> 1;
    if (uVar25 < 0x10) {
      if (uVar25 < 8) {
        uVar33 = *puVar50;
        puVar17[1] = puVar50[1];
        *puVar17 = uVar33;
        uVar33 = puVar50[uVar30 * 2];
        (puVar17 + uVar30 * 2)[1] = (puVar50 + uVar30 * 2)[1];
        puVar17[uVar30 * 2] = uVar33;
        uVar33 = 1;
        uVar38 = uVar25 - uVar30;
        if (1 < uVar30) goto LAB_106045704;
      }
      else {
        puVar51 = puVar50 + (ulong)(*puVar50 > puVar50[2]) * 2;
        puVar21 = puVar50 + (ulong)(*puVar50 <= puVar50[2]) * 2;
        lVar36 = 0x30;
        if (puVar50[4] <= puVar50[6]) {
          lVar36 = 0x20;
        }
        puVar22 = (ulong *)((long)puVar50 + lVar36);
        lVar36 = 0x20;
        if (puVar50[4] <= puVar50[6]) {
          lVar36 = 0x30;
        }
        puVar20 = (ulong *)((long)puVar50 + lVar36);
        puVar47 = puVar22;
        if (*puVar21 <= *puVar20) {
          puVar47 = puVar21;
        }
        puVar52 = puVar21;
        puVar45 = puVar51;
        if (*puVar51 <= *puVar22) {
          puVar52 = puVar22;
          puVar45 = puVar47;
          puVar22 = puVar51;
        }
        puVar51 = puVar20;
        if (*puVar21 <= *puVar20) {
          puVar51 = puVar52;
          puVar21 = puVar20;
        }
        puVar20 = puVar45;
        if (*puVar45 <= *puVar51) {
          puVar20 = puVar51;
          puVar51 = puVar45;
        }
        uVar33 = *puVar22;
        uVar37 = puVar51[1];
        uVar38 = *puVar51;
        puVar17[1] = puVar22[1];
        *puVar17 = uVar33;
        puVar17[3] = uVar37;
        puVar17[2] = uVar38;
        uVar33 = *puVar20;
        uVar37 = puVar21[1];
        uVar38 = *puVar21;
        puVar17[5] = puVar20[1];
        puVar17[4] = uVar33;
        puVar17[7] = uVar37;
        puVar17[6] = uVar38;
        puVar51 = puVar50 + uVar30 * 2;
        lVar36 = 0x30;
        if (puVar51[4] <= puVar51[6]) {
          lVar36 = 0x20;
        }
        puVar20 = (ulong *)((long)puVar51 + lVar36);
        puVar21 = puVar51 + (ulong)(*puVar51 > puVar51[2]) * 2;
        puVar22 = puVar51 + (ulong)(*puVar51 <= puVar51[2]) * 2;
        lVar36 = 0x20;
        if (puVar51[4] <= puVar51[6]) {
          lVar36 = 0x30;
        }
        puVar51 = (ulong *)((long)puVar51 + lVar36);
        puVar47 = puVar20;
        if (*puVar22 <= *puVar51) {
          puVar47 = puVar22;
        }
        puVar52 = puVar22;
        puVar45 = puVar21;
        if (*puVar21 <= *puVar20) {
          puVar52 = puVar20;
          puVar45 = puVar47;
          puVar20 = puVar21;
        }
        puVar21 = puVar17 + uVar30 * 2;
        puVar47 = puVar51;
        if (*puVar22 <= *puVar51) {
          puVar47 = puVar52;
          puVar22 = puVar51;
        }
        puVar51 = puVar45;
        if (*puVar45 <= *puVar47) {
          puVar51 = puVar47;
          puVar47 = puVar45;
        }
        uVar33 = *puVar20;
        uVar37 = puVar47[1];
        uVar38 = *puVar47;
        puVar21[1] = puVar20[1];
        *puVar21 = uVar33;
        puVar21[3] = uVar37;
        puVar21[2] = uVar38;
        uVar33 = *puVar51;
        uVar37 = puVar22[1];
        uVar38 = *puVar22;
        puVar21[5] = puVar51[1];
        puVar21[4] = uVar33;
        puVar21[7] = uVar37;
        puVar21[6] = uVar38;
        uVar33 = 4;
        uVar38 = uVar25 - uVar30;
        if (4 < uVar30) {
LAB_106045704:
          lVar36 = uVar33 << 4;
          uVar37 = uVar33;
          do {
            uVar34 = uVar37 + 1;
            puVar51 = puVar17 + uVar37 * 2;
            uVar35 = puVar50[uVar37 * 2];
            puVar51[1] = (puVar50 + uVar37 * 2)[1];
            *puVar51 = uVar35;
            uVar37 = *puVar51;
            if (uVar37 < puVar51[-2]) {
              uVar35 = puVar51[1];
              lVar29 = lVar36;
              do {
                puVar28 = (undefined8 *)((long)puVar17 + lVar29);
                puVar28[1] = puVar28[-1];
                *puVar28 = puVar28[-2];
                lVar29 = lVar29 + -0x10;
                puVar51 = puVar17;
                if (lVar29 == 0) goto LAB_106045718;
              } while (uVar37 < (ulong)puVar28[-4]);
              puVar51 = (ulong *)((long)puVar17 + lVar29);
LAB_106045718:
              *puVar51 = uVar37;
              puVar51[1] = uVar35;
            }
            lVar36 = lVar36 + 0x10;
            uVar37 = uVar34;
          } while (uVar34 < uVar30);
        }
      }
    }
    else {
      FUN_106040e2c(puVar50,puVar17,puVar17 + uVar25 * 2);
      FUN_106040e2c(puVar50 + uVar30 * 2,puVar17 + uVar30 * 2,puVar17 + uVar25 * 2 + 0x10);
      uVar33 = 8;
      uVar38 = uVar25 - uVar30;
      if (8 < uVar30) goto LAB_106045704;
    }
    puVar51 = puVar17 + uVar30 * 2;
    if (uVar33 < uVar38) {
      lVar36 = 0x10;
      uVar37 = uVar33;
      puVar21 = puVar51;
      do {
        uVar34 = uVar37 + 1;
        puVar22 = puVar51 + uVar37 * 2;
        uVar35 = puVar50[uVar30 * 2 + uVar37 * 2];
        puVar22[1] = (puVar50 + uVar30 * 2 + uVar37 * 2)[1];
        *puVar22 = uVar35;
        uVar37 = *puVar22;
        if (uVar37 < puVar22[-2]) {
          uVar35 = puVar22[1];
          lVar29 = lVar36;
          puVar22 = puVar21;
          do {
            puVar20 = puVar22 + uVar33 * 2;
            puVar20[1] = puVar20[-1];
            *puVar20 = puVar20[-2];
            puVar47 = puVar51;
            if (uVar33 * 0x10 - lVar29 == 0) goto LAB_1060457a8;
            puVar22 = puVar22 + -2;
            lVar29 = lVar29 + 0x10;
          } while (uVar37 < puVar20[-4]);
          puVar47 = puVar22 + uVar33 * 2;
LAB_1060457a8:
          *puVar47 = uVar37;
          puVar47[1] = uVar35;
        }
        lVar36 = lVar36 + -0x10;
        puVar21 = puVar21 + 2;
        uVar37 = uVar34;
      } while (uVar34 < uVar38);
    }
    lVar36 = uVar25 * 0x10;
    puVar21 = puVar17 + uVar25 * 2 + -2;
    puVar22 = puVar51 + -2;
    puVar20 = puVar50;
    do {
      puVar47 = puVar20;
      lVar36 = lVar36 + -0x10;
      bVar13 = *puVar17 <= *puVar51;
      puVar20 = puVar51;
      if (bVar13) {
        puVar20 = puVar17;
      }
      uVar33 = *puVar20;
      puVar47[1] = puVar20[1];
      *puVar47 = uVar33;
      puVar51 = puVar51 + (ulong)!bVar13 * 2;
      puVar17 = puVar17 + (ulong)bVar13 * 2;
      bVar13 = *puVar22 <= *puVar21;
      puVar20 = puVar22;
      if (bVar13) {
        puVar20 = puVar21;
      }
      uVar33 = *puVar20;
      ((ulong *)((long)puVar50 + lVar36))[1] = puVar20[1];
      *(ulong *)((long)puVar50 + lVar36) = uVar33;
      puVar21 = puVar21 + (ulong)bVar13 * -2;
      puVar22 = puVar22 + (ulong)!bVar13 * -2;
      uVar30 = uVar30 - 1;
      puVar20 = puVar47 + 2;
    } while (uVar30 != 0);
    if ((uVar25 & 1) != 0) {
      bVar13 = puVar22 + 2 <= puVar17;
      puVar50 = puVar17;
      if (bVar13) {
        puVar50 = puVar51;
      }
      uVar25 = *puVar50;
      puVar47[3] = puVar50[1];
      puVar47[2] = uVar25;
      puVar17 = puVar17 + (ulong)!bVar13 * 2;
      puVar51 = puVar51 + (ulong)bVar13 * 2;
    }
    if (puVar17 == puVar22 + 2 && puVar51 == puVar21 + 2) {
      return;
    }
LAB_106045904:
    __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_106045908:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10604590c);
    (*pcVar9)();
  }
  puVar51 = (ulong *)0x0;
joined_r0x000106044ca0:
  if (puVar45 < (ulong *)0x21) goto LAB_106044a40;
  goto LAB_106044ab0;
code_r0x000106045364:
  puVar27 = puVar27 + -2;
  puVar22 = puVar31 + 2;
  uVar30 = *puVar31;
  (puVar27 + (long)puVar18 * 2)[1] = puVar31[1];
  puVar27[(long)puVar18 * 2] = uVar30;
  puVar3 = (undefined *)0x0;
  if ((ulong *)0x2 < puVar21) {
    puVar3 = (undefined *)((long)puVar21 + -3);
  }
  puVar31 = puVar50 + (long)puVar3 * 2;
  puVar26 = puVar21;
  if (puVar22 < puVar31) goto LAB_10604529c;
  goto LAB_106045328;
code_r0x0001060454e8:
  puVar52 = puVar52 + -2;
  puVar22 = puVar18 + 2;
  uVar30 = *puVar18;
  (puVar17 + (long)puVar51 * 2)[1] = puVar18[1];
  puVar17[(long)puVar51 * 2] = uVar30;
  puVar51 = (ulong *)((long)puVar51 + 1);
  puVar3 = (undefined *)0x0;
  if ((ulong *)0x2 < puVar21) {
    puVar3 = (undefined *)((long)puVar21 + -3);
  }
  puVar18 = puVar50 + (long)puVar3 * 2;
  puVar47 = puVar21;
  if (puVar22 < puVar18) goto LAB_106045420;
  goto LAB_1060454ac;
__ZN4core5slice4sort6stable9quicksort9quicksort17h58c6cb561a55387aE:
  *(ulong **)(puVar11 + -0x60) = puVar20;
  *(ulong **)(puVar11 + -0x58) = puVar52;
  *(ulong **)(puVar11 + -0x50) = puVar51;
  *(long *)(puVar11 + -0x48) = auVar6._8_8_;
  *(ulong *)(puVar11 + -0x40) = param_5;
  *(ulong **)(puVar11 + -0x38) = puVar47;
  *(ulong **)(puVar11 + -0x30) = puVar45;
  *(ulong **)(puVar11 + -0x28) = puVar21;
  *(long *)(puVar11 + -0x20) = auVar6._0_8_;
  *(ulong **)(puVar11 + -0x18) = puVar17;
  *(undefined1 ***)(puVar11 + -0x10) = ppuVar53;
  *(undefined8 *)(puVar11 + -8) = uVar16;
  ppuVar53 = (undefined1 **)(puVar11 + -0x10);
  if (auVar59._8_8_ < 0x21) {
LAB_106045978:
    uVar25 = auVar59._8_8_;
    puVar50 = auVar59._0_8_;
    if (uVar25 < 2) {
      return;
    }
    if (puVar22 < (ulong *)(uVar25 + 0x10)) goto LAB_10604611c;
    uVar30 = uVar25 >> 1;
    if (uVar25 < 8) {
      uVar38 = puVar50[1];
      uVar33 = *puVar50;
      uVar34 = puVar50[3];
      uVar37 = puVar50[2];
      puVar18[4] = puVar50[4];
      puVar18[1] = uVar38;
      *puVar18 = uVar33;
      puVar18[3] = uVar34;
      puVar18[2] = uVar37;
      puVar51 = puVar50 + uVar30 * 5;
      puVar21 = puVar18 + uVar30 * 5;
      uVar38 = puVar51[1];
      uVar33 = *puVar51;
      uVar34 = puVar51[3];
      uVar37 = puVar51[2];
      puVar21[4] = puVar51[4];
      puVar21[1] = uVar38;
      *puVar21 = uVar33;
      puVar21[3] = uVar34;
      puVar21[2] = uVar37;
      uVar33 = 1;
      uVar38 = uVar25 - uVar30;
      if (1 < uVar30) goto LAB_106045e94;
    }
    else {
      puVar21 = puVar50 + (ulong)(puVar50[2] > puVar50[7]) * 5;
      puVar51 = puVar50 + (ulong)(puVar50[2] <= puVar50[7]) * 5;
      lVar36 = 0x78;
      if (puVar50[0xc] <= puVar50[0x11]) {
        lVar36 = 0x50;
      }
      puVar22 = (ulong *)((long)puVar50 + lVar36);
      lVar36 = 0x50;
      if (puVar50[0xc] <= puVar50[0x11]) {
        lVar36 = 0x78;
      }
      puVar17 = (ulong *)((long)puVar50 + lVar36);
      puVar20 = puVar22;
      if (puVar51[2] <= puVar17[2]) {
        puVar20 = puVar51;
      }
      puVar47 = puVar51;
      puVar52 = puVar21;
      if (puVar21[2] <= puVar22[2]) {
        puVar47 = puVar22;
        puVar52 = puVar20;
        puVar22 = puVar21;
      }
      puVar21 = puVar17;
      if (puVar51[2] <= puVar17[2]) {
        puVar21 = puVar47;
        puVar51 = puVar17;
      }
      puVar17 = puVar52;
      if (puVar52[2] <= puVar21[2]) {
        puVar17 = puVar21;
        puVar21 = puVar52;
      }
      uVar38 = puVar22[1];
      uVar33 = *puVar22;
      uVar34 = puVar22[3];
      uVar37 = puVar22[2];
      puVar18[4] = puVar22[4];
      puVar18[1] = uVar38;
      *puVar18 = uVar33;
      puVar18[3] = uVar34;
      puVar18[2] = uVar37;
      uVar38 = puVar21[1];
      uVar33 = *puVar21;
      uVar34 = puVar21[3];
      uVar37 = puVar21[2];
      puVar18[9] = puVar21[4];
      puVar18[8] = uVar34;
      puVar18[7] = uVar37;
      puVar18[6] = uVar38;
      puVar18[5] = uVar33;
      uVar38 = puVar17[1];
      uVar33 = *puVar17;
      uVar34 = puVar17[3];
      uVar37 = puVar17[2];
      puVar18[0xe] = puVar17[4];
      puVar18[0xb] = uVar38;
      puVar18[10] = uVar33;
      puVar18[0xd] = uVar34;
      puVar18[0xc] = uVar37;
      uVar38 = puVar51[1];
      uVar33 = *puVar51;
      uVar34 = puVar51[3];
      uVar37 = puVar51[2];
      puVar18[0x13] = puVar51[4];
      puVar18[0x12] = uVar34;
      puVar18[0x11] = uVar37;
      puVar18[0x10] = uVar38;
      puVar18[0xf] = uVar33;
      lVar36 = 0x78;
      if (puVar50[uVar30 * 5 + 0xc] <= puVar50[uVar30 * 5 + 0x11]) {
        lVar36 = 0x50;
      }
      puVar51 = (ulong *)((long)puVar50 + lVar36 + uVar30 * 0x28);
      puVar22 = puVar50 + uVar30 * 5 +
                          (ulong)(puVar50[uVar30 * 5 + 2] > puVar50[uVar30 * 5 + 7]) * 5;
      puVar21 = puVar50 + uVar30 * 5 +
                          (ulong)(puVar50[uVar30 * 5 + 2] <= puVar50[uVar30 * 5 + 7]) * 5;
      lVar36 = 0x50;
      if (puVar50[uVar30 * 5 + 0xc] <= puVar50[uVar30 * 5 + 0x11]) {
        lVar36 = 0x78;
      }
      puVar17 = (ulong *)((long)puVar50 + lVar36 + uVar30 * 0x28);
      puVar20 = puVar51;
      if (puVar21[2] <= puVar17[2]) {
        puVar20 = puVar21;
      }
      puVar47 = puVar21;
      puVar52 = puVar22;
      if (puVar22[2] <= puVar51[2]) {
        puVar47 = puVar51;
        puVar52 = puVar20;
        puVar51 = puVar22;
      }
      puVar22 = puVar18 + uVar30 * 5;
      puVar20 = puVar17;
      if (puVar21[2] <= puVar17[2]) {
        puVar20 = puVar47;
        puVar21 = puVar17;
      }
      puVar17 = puVar52;
      if (puVar52[2] <= puVar20[2]) {
        puVar17 = puVar20;
        puVar20 = puVar52;
      }
      uVar38 = puVar51[1];
      uVar33 = *puVar51;
      uVar34 = puVar51[3];
      uVar37 = puVar51[2];
      puVar22[4] = puVar51[4];
      puVar22[1] = uVar38;
      *puVar22 = uVar33;
      puVar22[3] = uVar34;
      puVar22[2] = uVar37;
      uVar38 = puVar20[1];
      uVar33 = *puVar20;
      uVar34 = puVar20[3];
      uVar37 = puVar20[2];
      puVar22[9] = puVar20[4];
      puVar22[8] = uVar34;
      puVar22[7] = uVar37;
      puVar22[6] = uVar38;
      puVar22[5] = uVar33;
      uVar38 = puVar17[1];
      uVar33 = *puVar17;
      uVar34 = puVar17[3];
      uVar37 = puVar17[2];
      puVar22[0xe] = puVar17[4];
      puVar22[0xb] = uVar38;
      puVar22[10] = uVar33;
      puVar22[0xd] = uVar34;
      puVar22[0xc] = uVar37;
      uVar38 = puVar21[1];
      uVar33 = *puVar21;
      uVar34 = puVar21[3];
      uVar37 = puVar21[2];
      puVar22[0x13] = puVar21[4];
      puVar22[0x12] = uVar34;
      puVar22[0x11] = uVar37;
      puVar22[0x10] = uVar38;
      puVar22[0xf] = uVar33;
      uVar33 = 4;
      uVar38 = uVar25 - uVar30;
      if (4 < uVar30) {
LAB_106045e94:
        lVar36 = uVar33 * 0x28;
        uVar37 = uVar33;
        do {
          uVar34 = uVar37 + 1;
          puVar51 = puVar50 + uVar37 * 5;
          puVar21 = puVar18 + uVar37 * 5;
          uVar35 = puVar51[1];
          uVar37 = *puVar51;
          uVar42 = puVar51[3];
          uVar40 = puVar51[2];
          puVar21[4] = puVar51[4];
          puVar21[1] = uVar35;
          *puVar21 = uVar37;
          puVar21[3] = uVar42;
          puVar21[2] = uVar40;
          uVar37 = puVar21[2];
          lVar29 = lVar36;
          if (uVar37 < puVar21[-3]) {
            do {
              puVar28 = (undefined8 *)((long)puVar18 + lVar29);
              puVar28[1] = puVar28[-4];
              *puVar28 = puVar28[-5];
              puVar28[3] = puVar28[-2];
              puVar28[2] = puVar28[-3];
              puVar28[4] = puVar28[-1];
              lVar29 = lVar29 + -0x28;
              puVar21 = puVar18;
              if (lVar29 == 0) goto LAB_106045eac;
            } while (uVar37 < (ulong)puVar28[-8]);
            puVar21 = (ulong *)((long)puVar18 + lVar29);
LAB_106045eac:
            uVar35 = *puVar51;
            puVar21[1] = puVar51[1];
            *puVar21 = uVar35;
            puVar28[-3] = uVar37;
            uVar37 = puVar51[3];
            puVar28[-1] = puVar51[4];
            puVar28[-2] = uVar37;
          }
          lVar36 = lVar36 + 0x28;
          uVar37 = uVar34;
        } while (uVar34 < uVar30);
      }
    }
    puVar51 = puVar18 + uVar30 * 5;
    if (uVar33 < uVar38) {
      lVar36 = 0x28;
      uVar37 = uVar33;
      puVar21 = puVar51;
      do {
        uVar34 = uVar37 + 1;
        puVar22 = puVar50 + uVar30 * 5 + uVar37 * 5;
        puVar17 = puVar51 + uVar37 * 5;
        uVar35 = puVar22[1];
        uVar37 = *puVar22;
        uVar42 = puVar22[3];
        uVar40 = puVar22[2];
        puVar17[4] = puVar22[4];
        puVar17[1] = uVar35;
        *puVar17 = uVar37;
        puVar17[3] = uVar42;
        puVar17[2] = uVar40;
        uVar37 = puVar17[2];
        puVar20 = puVar21;
        lVar29 = lVar36;
        if (uVar37 < puVar17[-3]) {
          do {
            puVar17 = puVar20 + uVar33 * 5;
            puVar17[1] = puVar17[-4];
            *puVar17 = puVar17[-5];
            puVar17[3] = puVar17[-2];
            puVar17[2] = puVar17[-3];
            puVar17[4] = puVar17[-1];
            puVar47 = puVar51;
            if (uVar33 * 0x28 - lVar29 == 0) goto LAB_106045f6c;
            puVar20 = puVar20 + -5;
            lVar29 = lVar29 + 0x28;
          } while (uVar37 < puVar17[-8]);
          puVar47 = puVar20 + uVar33 * 5;
LAB_106045f6c:
          uVar35 = *puVar22;
          puVar47[1] = puVar22[1];
          *puVar47 = uVar35;
          puVar17[-3] = uVar37;
          uVar37 = puVar22[3];
          puVar17[-1] = puVar22[4];
          puVar17[-2] = uVar37;
        }
        lVar36 = lVar36 + -0x28;
        puVar21 = puVar21 + 5;
        uVar37 = uVar34;
      } while (uVar34 < uVar38);
    }
    lVar36 = uVar25 * 0x28;
    puVar21 = puVar18 + uVar25 * 5 + -5;
    puVar17 = puVar51 + -5;
    puVar22 = puVar50;
    do {
      puVar47 = puVar22;
      lVar36 = lVar36 + -0x28;
      puVar22 = (ulong *)((long)puVar50 + lVar36);
      bVar13 = puVar18[2] <= puVar51[2];
      puVar20 = puVar51;
      if (bVar13) {
        puVar20 = puVar18;
      }
      uVar38 = puVar20[1];
      uVar33 = *puVar20;
      uVar34 = puVar20[3];
      uVar37 = puVar20[2];
      puVar47[4] = puVar20[4];
      puVar47[1] = uVar38;
      *puVar47 = uVar33;
      puVar47[3] = uVar34;
      puVar47[2] = uVar37;
      puVar51 = puVar51 + (ulong)!bVar13 * 5;
      puVar18 = puVar18 + (ulong)bVar13 * 5;
      bVar13 = puVar17[2] <= puVar21[2];
      puVar20 = puVar17;
      if (bVar13) {
        puVar20 = puVar21;
      }
      uVar38 = puVar20[1];
      uVar33 = *puVar20;
      uVar34 = puVar20[3];
      uVar37 = puVar20[2];
      puVar22[4] = puVar20[4];
      puVar22[1] = uVar38;
      *puVar22 = uVar33;
      puVar22[3] = uVar34;
      puVar22[2] = uVar37;
      puVar21 = puVar21 + (ulong)bVar13 * -5;
      puVar17 = puVar17 + (ulong)!bVar13 * -5;
      uVar30 = uVar30 - 1;
      puVar22 = puVar47 + 5;
    } while (uVar30 != 0);
    if ((uVar25 & 1) != 0) {
      bVar13 = puVar17 + 5 <= puVar18;
      puVar50 = puVar18;
      if (bVar13) {
        puVar50 = puVar51;
      }
      uVar30 = puVar50[1];
      uVar25 = *puVar50;
      uVar38 = puVar50[3];
      uVar33 = puVar50[2];
      puVar47[9] = puVar50[4];
      puVar47[6] = uVar30;
      puVar47[5] = uVar25;
      puVar47[8] = uVar38;
      puVar47[7] = uVar33;
      puVar18 = puVar18 + (ulong)!bVar13 * 5;
      puVar51 = puVar51 + (ulong)bVar13 * 5;
    }
    if (puVar18 == puVar17 + 5 && puVar51 == puVar21 + 5) {
      return;
    }
LAB_106046118:
    __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_10604611c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x106046120);
    (*pcVar9)();
  }
  *(ulong **)(puVar11 + -0x98) = puVar18 + -5;
  puVar20 = (ulong *)0x28;
  uVar30 = uVar25;
  puVar50 = param_7;
  puVar51 = param_6;
  auVar6 = auVar59;
  while( true ) {
    puVar47 = auVar6._8_8_;
    puVar17 = auVar6._0_8_;
    if ((int)uVar25 == 0) {
      FUN_1060432bc(puVar17,puVar47,puVar18,puVar22,1,param_7);
      return;
    }
    if (puVar47 < (ulong *)0x40) {
      uVar33 = puVar17[2];
      uVar38 = (puVar17 + ((ulong)puVar47 >> 3) * 0x14)[2];
      uVar37 = (puVar17 + ((ulong)puVar47 >> 3) * 0x23)[2];
      puVar52 = puVar17 + ((ulong)puVar47 >> 3) * 0x23;
      if (uVar33 < uVar38 == uVar38 < uVar37) {
        puVar52 = puVar17 + ((ulong)puVar47 >> 3) * 0x14;
      }
      puVar21 = puVar17;
      if (uVar33 < uVar38 == uVar33 < uVar37) {
        puVar21 = puVar52;
      }
    }
    else {
      puVar21 = (ulong *)FUN_106040844(puVar17);
    }
    uVar25 = (ulong)((int)uVar25 - 1);
    uVar33 = (ulong)((long)puVar21 - (long)puVar17) >> 3;
    puVar52 = (ulong *)(uVar33 * -0x3333333333333333);
    uVar38 = *puVar21;
    uVar34 = puVar21[3];
    uVar37 = puVar21[2];
    *(ulong *)(puVar11 + -0x88) = puVar21[1];
    *(ulong *)(puVar11 + -0x90) = uVar38;
    *(ulong *)(puVar11 + -0x78) = uVar34;
    *(ulong *)(puVar11 + -0x80) = uVar37;
    *(ulong *)(puVar11 + -0x70) = puVar21[4];
    if ((puVar51 == (ulong *)0x0) || (puVar51[2] < puVar21[2])) break;
LAB_106045d34:
    if (puVar22 < puVar47) goto LAB_10604611c;
    puVar21 = (ulong *)0x0;
    puVar45 = puVar18 + (long)puVar47 * 5;
    puVar31 = puVar17 + uVar33;
    puVar51 = puVar17;
    if (puVar31 <= puVar17) goto LAB_106045d94;
LAB_106045d5c:
    do {
      uVar38 = puVar51[2];
      uVar37 = puVar17[uVar33 + 2];
      puVar45 = puVar45 + -5;
      puVar27 = puVar18;
      if (uVar37 < uVar38) {
        puVar27 = puVar45;
      }
      puVar27 = puVar27 + (long)puVar21 * 5;
      uVar35 = puVar51[1];
      uVar34 = *puVar51;
      uVar42 = puVar51[3];
      uVar40 = puVar51[2];
      puVar27[4] = puVar51[4];
      puVar27[1] = uVar35;
      *puVar27 = uVar34;
      puVar27[3] = uVar42;
      puVar27[2] = uVar40;
      if (uVar37 >= uVar38) {
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
      puVar51 = puVar51 + 5;
    } while (puVar51 < puVar31);
LAB_106045d94:
    while (puVar52 != puVar47) {
      puVar45 = puVar45 + -5;
      puVar52 = puVar18 + (long)puVar21 * 5;
      uVar37 = puVar51[1];
      uVar38 = *puVar51;
      uVar35 = puVar51[3];
      uVar34 = puVar51[2];
      puVar52[4] = puVar51[4];
      puVar52[1] = uVar37;
      *puVar52 = uVar38;
      puVar52[3] = uVar35;
      puVar52[2] = uVar34;
      puVar21 = (ulong *)((long)puVar21 + 1);
      puVar51 = puVar51 + 5;
      puVar31 = puVar17 + (long)puVar47 * 5;
      puVar52 = puVar47;
      if (puVar51 < puVar31) goto LAB_106045d5c;
    }
    _memcpy(puVar17,puVar18,(long)puVar21 * 0x28);
    puVar45 = (ulong *)((long)puVar47 - (long)puVar21);
    if (puVar45 == (ulong *)0x0) {
      return;
    }
    puVar17 = puVar17 + (long)puVar21 * 5;
    auVar7._8_8_ = puVar47;
    auVar7._0_8_ = puVar17;
    auVar59._8_8_ = puVar45;
    auVar59._0_8_ = puVar17;
    puVar27 = (ulong *)(*(long *)(puVar11 + -0x98) + (long)puVar47 * 0x28);
    puVar31 = puVar45;
    puVar51 = puVar17;
    do {
      uVar33 = *puVar27;
      uVar37 = puVar27[3];
      uVar38 = puVar27[2];
      puVar51[1] = puVar27[1];
      *puVar51 = uVar33;
      puVar51[3] = uVar37;
      puVar51[2] = uVar38;
      puVar51[4] = puVar27[4];
      puVar27 = puVar27 + -5;
      puVar51 = puVar51 + 5;
      puVar31 = (ulong *)((long)puVar31 + -1);
    } while (puVar31 != (ulong *)0x0);
    if (puVar47 < puVar21) {
      puVar51 = (ulong *)&UNK_10b4ae618;
      puVar47 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                   (puVar21,puVar47,puVar47);
      puVar22 = (ulong *)((long)puVar45 * 0x28);
      _memcpy(puVar17,puVar18);
      uVar16 = 0x106046158;
      auVar60 = __Unwind_Resume(puVar47);
      puVar11 = puVar11 + -0xa0;
      goto __ZN4core5slice4sort6stable9quicksort9quicksort17h770bfef31f947321E;
    }
    puVar51 = (ulong *)0x0;
    auVar6 = auVar59;
    if (puVar45 < (ulong *)0x21) goto LAB_106045978;
  }
  if (puVar22 < puVar47) goto LAB_10604611c;
  puVar21 = (ulong *)0x0;
  puVar27 = puVar18 + (long)puVar47 * 5;
  puVar26 = puVar17 + uVar33;
  puVar45 = puVar17;
  puVar31 = puVar52;
  if (puVar26 <= puVar17) goto LAB_106045c78;
LAB_106045c40:
  do {
    uVar38 = puVar45[2];
    uVar37 = puVar17[uVar33 + 2];
    puVar27 = puVar27 + -5;
    puVar32 = puVar18;
    if (uVar37 <= uVar38) {
      puVar32 = puVar27;
    }
    puVar32 = puVar32 + (long)puVar21 * 5;
    uVar35 = puVar45[1];
    uVar34 = *puVar45;
    uVar42 = puVar45[3];
    uVar40 = puVar45[2];
    puVar32[4] = puVar45[4];
    puVar32[1] = uVar35;
    *puVar32 = uVar34;
    puVar32[3] = uVar42;
    puVar32[2] = uVar40;
    if (uVar37 > uVar38) {
      puVar21 = (ulong *)((long)puVar21 + 1);
    }
    puVar45 = puVar45 + 5;
  } while (puVar45 < puVar26);
LAB_106045c78:
  while (puVar31 != puVar47) {
    puVar27 = puVar27 + -5;
    puVar31 = puVar27 + (long)puVar21 * 5;
    uVar38 = *puVar45;
    uVar34 = puVar45[3];
    uVar37 = puVar45[2];
    puVar31[1] = puVar45[1];
    *puVar31 = uVar38;
    puVar31[3] = uVar34;
    puVar31[2] = uVar37;
    puVar31[4] = puVar45[4];
    puVar45 = puVar45 + 5;
    puVar26 = puVar17 + (long)puVar47 * 5;
    puVar31 = puVar47;
    if (puVar45 < puVar26) goto LAB_106045c40;
  }
  _memcpy(puVar17,puVar18,(long)puVar21 * 0x28);
  lVar36 = (long)puVar47 - (long)puVar21;
  if (lVar36 != 0) {
    puVar45 = puVar17 + (long)puVar21 * 5;
    puVar31 = (ulong *)(*(long *)(puVar11 + -0x98) + (long)puVar47 * 0x28);
    lVar29 = lVar36;
    do {
      uVar38 = *puVar31;
      uVar34 = puVar31[3];
      uVar37 = puVar31[2];
      puVar45[1] = puVar31[1];
      *puVar45 = uVar38;
      puVar45[3] = uVar34;
      puVar45[2] = uVar37;
      puVar45[4] = puVar31[4];
      puVar31 = puVar31 + -5;
      puVar45 = puVar45 + 5;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  if (puVar21 == (ulong *)0x0) goto LAB_106045d34;
  if (puVar47 < puVar21) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_106046118;
  }
  auVar59._8_8_ = lVar36;
  auVar59._0_8_ = puVar17 + (long)puVar21 * 5;
  param_6 = (ulong *)(puVar11 + -0x90);
  uVar16 = 0x106045d24;
  puVar11 = puVar11 + -0xa0;
  puVar17 = puVar18;
  puVar45 = puVar22;
  puVar47 = param_7;
  param_5 = uVar25;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17h58c6cb561a55387aE;
__ZN4core5slice4sort6stable9quicksort9quicksort17h770bfef31f947321E:
  *(ulong **)(puVar11 + -0x60) = puVar20;
  *(ulong **)(puVar11 + -0x58) = puVar52;
  *(ulong **)(puVar11 + -0x50) = puVar21;
  *(long *)(puVar11 + -0x48) = auVar7._8_8_;
  *(ulong *)(puVar11 + -0x40) = uVar25;
  *(ulong **)(puVar11 + -0x38) = param_7;
  *(ulong **)(puVar11 + -0x30) = puVar47;
  *(ulong **)(puVar11 + -0x28) = puVar45;
  *(long *)(puVar11 + -0x20) = auVar7._0_8_;
  *(ulong **)(puVar11 + -0x18) = puVar18;
  *(undefined1 ***)(puVar11 + -0x10) = ppuVar53;
  *(undefined8 *)(puVar11 + -8) = uVar16;
  ppuVar53 = (undefined1 **)(puVar11 + -0x10);
  *(ulong **)(puVar11 + -0x88) = puVar50;
  if (auVar60._8_8_ < 0x21) {
LAB_106046194:
    uVar25 = auVar60._8_8_;
    puVar50 = auVar60._0_8_;
    if (uVar25 < 2) {
      return;
    }
    if (puVar51 < (ulong *)(uVar25 + 0x10)) goto LAB_1060467ec;
    uVar30 = uVar25 >> 1;
    if (uVar25 < 8) {
      uVar33 = *puVar50;
      uVar37 = puVar50[3];
      uVar38 = puVar50[2];
      puVar22[1] = puVar50[1];
      *puVar22 = uVar33;
      puVar22[3] = uVar37;
      puVar22[2] = uVar38;
      puVar51 = puVar50 + uVar30 * 4;
      puVar21 = puVar22 + uVar30 * 4;
      uVar33 = *puVar51;
      uVar37 = puVar51[3];
      uVar38 = puVar51[2];
      puVar21[1] = puVar51[1];
      *puVar21 = uVar33;
      puVar21[3] = uVar37;
      puVar21[2] = uVar38;
      uVar33 = 1;
      uVar38 = uVar25 - uVar30;
      if (1 < uVar30) goto LAB_1060465c4;
    }
    else {
      puVar51 = puVar50 + (ulong)(puVar50[1] > puVar50[5]) * 4;
      puVar21 = puVar50 + (ulong)(puVar50[1] <= puVar50[5]) * 4;
      lVar36 = 0x60;
      if (puVar50[9] <= puVar50[0xd]) {
        lVar36 = 0x40;
      }
      puVar17 = (ulong *)((long)puVar50 + lVar36);
      lVar36 = 0x40;
      if (puVar50[9] <= puVar50[0xd]) {
        lVar36 = 0x60;
      }
      puVar20 = (ulong *)((long)puVar50 + lVar36);
      puVar47 = puVar17;
      if (puVar21[1] <= puVar20[1]) {
        puVar47 = puVar21;
      }
      puVar52 = puVar21;
      puVar45 = puVar51;
      if (puVar51[1] <= puVar17[1]) {
        puVar52 = puVar17;
        puVar45 = puVar47;
        puVar17 = puVar51;
      }
      puVar51 = puVar20;
      if (puVar21[1] <= puVar20[1]) {
        puVar51 = puVar52;
        puVar21 = puVar20;
      }
      puVar20 = puVar45;
      if (puVar45[1] <= puVar51[1]) {
        puVar20 = puVar51;
        puVar51 = puVar45;
      }
      uVar33 = *puVar17;
      uVar37 = puVar17[3];
      uVar38 = puVar17[2];
      puVar22[1] = puVar17[1];
      *puVar22 = uVar33;
      puVar22[3] = uVar37;
      puVar22[2] = uVar38;
      uVar33 = *puVar51;
      uVar37 = puVar51[3];
      uVar38 = puVar51[2];
      puVar22[5] = puVar51[1];
      puVar22[4] = uVar33;
      puVar22[7] = uVar37;
      puVar22[6] = uVar38;
      uVar33 = *puVar20;
      uVar37 = puVar20[3];
      uVar38 = puVar20[2];
      puVar22[9] = puVar20[1];
      puVar22[8] = uVar33;
      puVar22[0xb] = uVar37;
      puVar22[10] = uVar38;
      uVar33 = *puVar21;
      uVar37 = puVar21[3];
      uVar38 = puVar21[2];
      puVar22[0xd] = puVar21[1];
      puVar22[0xc] = uVar33;
      puVar22[0xf] = uVar37;
      puVar22[0xe] = uVar38;
      lVar36 = 0x60;
      if (puVar50[uVar30 * 4 + 9] <= puVar50[uVar30 * 4 + 0xd]) {
        lVar36 = 0x40;
      }
      puVar51 = (ulong *)((long)puVar50 + lVar36 + uVar30 * 0x20);
      puVar21 = puVar50 + uVar30 * 4 +
                          (ulong)(puVar50[uVar30 * 4 + 1] > puVar50[uVar30 * 4 + 5]) * 4;
      puVar17 = puVar50 + uVar30 * 4 +
                          (ulong)(puVar50[uVar30 * 4 + 1] <= puVar50[uVar30 * 4 + 5]) * 4;
      lVar36 = 0x40;
      if (puVar50[uVar30 * 4 + 9] <= puVar50[uVar30 * 4 + 0xd]) {
        lVar36 = 0x60;
      }
      puVar20 = (ulong *)((long)puVar50 + lVar36 + uVar30 * 0x20);
      puVar47 = puVar51;
      if (puVar17[1] <= puVar20[1]) {
        puVar47 = puVar17;
      }
      puVar52 = puVar17;
      puVar45 = puVar21;
      if (puVar21[1] <= puVar51[1]) {
        puVar52 = puVar51;
        puVar45 = puVar47;
        puVar51 = puVar21;
      }
      puVar21 = puVar22 + uVar30 * 4;
      puVar47 = puVar20;
      if (puVar17[1] <= puVar20[1]) {
        puVar47 = puVar52;
        puVar17 = puVar20;
      }
      puVar20 = puVar45;
      if (puVar45[1] <= puVar47[1]) {
        puVar20 = puVar47;
        puVar47 = puVar45;
      }
      uVar33 = *puVar51;
      uVar37 = puVar51[3];
      uVar38 = puVar51[2];
      puVar21[1] = puVar51[1];
      *puVar21 = uVar33;
      puVar21[3] = uVar37;
      puVar21[2] = uVar38;
      uVar33 = *puVar47;
      uVar37 = puVar47[3];
      uVar38 = puVar47[2];
      puVar21[5] = puVar47[1];
      puVar21[4] = uVar33;
      puVar21[7] = uVar37;
      puVar21[6] = uVar38;
      uVar33 = *puVar20;
      uVar37 = puVar20[3];
      uVar38 = puVar20[2];
      puVar21[9] = puVar20[1];
      puVar21[8] = uVar33;
      puVar21[0xb] = uVar37;
      puVar21[10] = uVar38;
      uVar33 = *puVar17;
      uVar37 = puVar17[3];
      uVar38 = puVar17[2];
      puVar21[0xd] = puVar17[1];
      puVar21[0xc] = uVar33;
      puVar21[0xf] = uVar37;
      puVar21[0xe] = uVar38;
      uVar33 = 4;
      uVar38 = uVar25 - uVar30;
      if (4 < uVar30) {
LAB_1060465c4:
        lVar36 = uVar33 << 5;
        uVar37 = uVar33;
        do {
          uVar34 = uVar37 + 1;
          puVar51 = puVar50 + uVar37 * 4;
          puVar21 = puVar22 + uVar37 * 4;
          uVar40 = *puVar51;
          uVar35 = puVar51[3];
          uVar37 = puVar51[2];
          puVar21[1] = puVar51[1];
          *puVar21 = uVar40;
          puVar21[3] = uVar35;
          puVar21[2] = uVar37;
          uVar37 = puVar21[1];
          if (uVar37 < puVar21[-3]) {
            uVar35 = *puVar21;
            lVar29 = lVar36;
            do {
              puVar28 = (undefined8 *)((long)puVar22 + lVar29);
              puVar28[1] = puVar28[-3];
              *puVar28 = puVar28[-4];
              puVar28[3] = puVar28[-1];
              puVar28[2] = puVar28[-2];
              lVar29 = lVar29 + -0x20;
              puVar21 = puVar22;
              if (lVar29 == 0) goto LAB_1060465d8;
            } while (uVar37 < (ulong)puVar28[-7]);
            puVar21 = (ulong *)((long)puVar22 + lVar29);
LAB_1060465d8:
            *puVar21 = uVar35;
            puVar28[-3] = uVar37;
            uVar37 = puVar51[2];
            puVar28[-1] = puVar51[3];
            puVar28[-2] = uVar37;
          }
          lVar36 = lVar36 + 0x20;
          uVar37 = uVar34;
        } while (uVar34 < uVar30);
      }
    }
    puVar51 = puVar22 + uVar30 * 4;
    if (uVar33 < uVar38) {
      lVar36 = 0x20;
      uVar37 = uVar33;
      puVar21 = puVar51;
      do {
        uVar34 = uVar37 + 1;
        puVar17 = puVar50 + uVar30 * 4 + uVar37 * 4;
        puVar20 = puVar51 + uVar37 * 4;
        uVar40 = *puVar17;
        uVar35 = puVar17[3];
        uVar37 = puVar17[2];
        puVar20[1] = puVar17[1];
        *puVar20 = uVar40;
        puVar20[3] = uVar35;
        puVar20[2] = uVar37;
        uVar37 = puVar20[1];
        if (uVar37 < puVar20[-3]) {
          uVar35 = *puVar20;
          puVar20 = puVar21;
          lVar29 = lVar36;
          do {
            puVar47 = puVar20 + uVar33 * 4;
            puVar47[1] = puVar47[-3];
            *puVar47 = puVar47[-4];
            puVar47[3] = puVar47[-1];
            puVar47[2] = puVar47[-2];
            puVar52 = puVar51;
            if (uVar33 * 0x20 - lVar29 == 0) goto LAB_106046678;
            lVar29 = lVar29 + 0x20;
            puVar20 = puVar20 + -4;
          } while (uVar37 < puVar47[-7]);
          puVar52 = puVar20 + uVar33 * 4;
LAB_106046678:
          *puVar52 = uVar35;
          puVar47[-3] = uVar37;
          uVar37 = puVar17[2];
          puVar47[-1] = puVar17[3];
          puVar47[-2] = uVar37;
        }
        lVar36 = lVar36 + -0x20;
        puVar21 = puVar21 + 4;
        uVar37 = uVar34;
      } while (uVar34 < uVar38);
    }
    lVar36 = uVar25 * 0x20;
    puVar21 = puVar22 + uVar25 * 4 + -4;
    puVar17 = puVar51 + -4;
    puVar20 = puVar50;
    do {
      puVar52 = puVar20;
      lVar36 = lVar36 + -0x20;
      puVar20 = (ulong *)((long)puVar50 + lVar36);
      bVar13 = puVar22[1] <= puVar51[1];
      puVar47 = puVar51;
      if (bVar13) {
        puVar47 = puVar22;
      }
      uVar33 = *puVar47;
      uVar37 = puVar47[3];
      uVar38 = puVar47[2];
      puVar52[1] = puVar47[1];
      *puVar52 = uVar33;
      puVar52[3] = uVar37;
      puVar52[2] = uVar38;
      puVar51 = puVar51 + (ulong)!bVar13 * 4;
      puVar22 = puVar22 + (ulong)bVar13 * 4;
      bVar13 = puVar17[1] <= puVar21[1];
      puVar47 = puVar17;
      if (bVar13) {
        puVar47 = puVar21;
      }
      uVar33 = *puVar47;
      uVar37 = puVar47[3];
      uVar38 = puVar47[2];
      puVar20[1] = puVar47[1];
      *puVar20 = uVar33;
      puVar20[3] = uVar37;
      puVar20[2] = uVar38;
      puVar21 = puVar21 + (ulong)bVar13 * -4;
      puVar17 = puVar17 + (ulong)!bVar13 * -4;
      uVar30 = uVar30 - 1;
      puVar20 = puVar52 + 4;
    } while (uVar30 != 0);
    if ((uVar25 & 1) != 0) {
      bVar13 = puVar17 + 4 <= puVar22;
      puVar50 = puVar22;
      if (bVar13) {
        puVar50 = puVar51;
      }
      uVar25 = *puVar50;
      uVar33 = puVar50[3];
      uVar30 = puVar50[2];
      puVar52[5] = puVar50[1];
      puVar52[4] = uVar25;
      puVar52[7] = uVar33;
      puVar52[6] = uVar30;
      puVar22 = puVar22 + (ulong)!bVar13 * 4;
      puVar51 = puVar51 + (ulong)bVar13 * 4;
    }
    if (puVar22 == puVar17 + 4 && puVar51 == puVar21 + 4) {
      return;
    }
LAB_1060467e8:
    __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_1060467ec:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1060467f0);
    (*pcVar9)();
  }
  *(ulong **)(puVar11 + -0x90) = puVar22 + -4;
  uVar25 = uVar30;
  puVar21 = param_6;
  auVar7 = auVar60;
  while( true ) {
    puVar47 = auVar7._8_8_;
    puVar17 = auVar7._0_8_;
    if ((int)uVar30 == 0) {
      FUN_1060437f4(puVar17,puVar47,puVar22,puVar51,1,*(undefined8 *)(puVar11 + -0x88));
      return;
    }
    if (puVar47 < (ulong *)0x40) {
      uVar33 = puVar17[1];
      uVar38 = (puVar17 + ((ulong)puVar47 >> 3) * 0x10)[1];
      uVar37 = (puVar17 + ((ulong)puVar47 >> 3) * 0x1c)[1];
      puVar20 = puVar17 + ((ulong)puVar47 >> 3) * 0x1c;
      if (uVar33 < uVar38 == uVar38 < uVar37) {
        puVar20 = puVar17 + ((ulong)puVar47 >> 3) * 0x10;
      }
      puVar45 = puVar17;
      if (uVar33 < uVar38 == uVar33 < uVar37) {
        puVar45 = puVar20;
      }
    }
    else {
      puVar45 = (ulong *)FUN_106040590(puVar17);
    }
    uVar30 = (ulong)((int)uVar30 - 1);
    param_7 = (ulong *)((ulong)((long)puVar45 - (long)puVar17) >> 5);
    uVar33 = *puVar45;
    uVar37 = puVar45[3];
    uVar38 = puVar45[2];
    *(ulong *)(puVar11 + -0x78) = puVar45[1];
    *(ulong *)(puVar11 + -0x80) = uVar33;
    *(ulong *)(puVar11 + -0x68) = uVar37;
    *(ulong *)(puVar11 + -0x70) = uVar38;
    puVar20 = puVar22 + (long)puVar47 * 4;
    puVar52 = puVar17 + (long)param_7 * 4;
    if ((puVar21 == (ulong *)0x0) || (puVar21[1] < puVar45[1])) break;
LAB_1060464b0:
    if (puVar51 < puVar47) goto LAB_1060467ec;
    puVar21 = (ulong *)0x0;
    puVar45 = puVar17 + (long)param_7 * 4;
    puVar18 = puVar17;
    puVar31 = puVar17;
    if (puVar45 <= puVar17) goto LAB_1060464f8;
LAB_1060464cc:
    do {
      uVar33 = puVar18[1];
      uVar38 = puVar52[1];
      puVar20 = puVar20 + -4;
      puVar27 = puVar22;
      if (uVar38 < uVar33) {
        puVar27 = puVar20;
      }
      puVar27 = puVar27 + (long)puVar21 * 4;
      puVar31 = puVar18 + 4;
      uVar37 = *puVar18;
      uVar35 = puVar18[3];
      uVar34 = puVar18[2];
      puVar27[1] = puVar18[1];
      *puVar27 = uVar37;
      puVar27[3] = uVar35;
      puVar27[2] = uVar34;
      if (uVar38 >= uVar33) {
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
      puVar18 = puVar31;
    } while (puVar31 < puVar45);
LAB_1060464f8:
    while (param_7 != puVar47) {
      puVar20 = puVar20 + -4;
      puVar18 = puVar31 + 4;
      uVar33 = *puVar31;
      uVar37 = puVar31[3];
      uVar38 = puVar31[2];
      puVar45 = puVar22 + (long)puVar21 * 4;
      puVar45[1] = puVar31[1];
      *puVar45 = uVar33;
      puVar45[3] = uVar37;
      puVar45[2] = uVar38;
      puVar21 = (ulong *)((long)puVar21 + 1);
      puVar45 = puVar17 + (long)puVar47 * 4;
      puVar31 = puVar18;
      param_7 = puVar47;
      if (puVar18 < puVar45) goto LAB_1060464cc;
    }
    _memcpy(puVar17,puVar22,(long)puVar21 << 5);
    uVar33 = (long)puVar47 - (long)puVar21;
    if (uVar33 == 0) {
      return;
    }
    puVar17 = puVar17 + (long)puVar21 * 4;
    auVar8._8_8_ = puVar47;
    auVar8._0_8_ = puVar17;
    auVar60._8_8_ = uVar33;
    auVar60._0_8_ = puVar17;
    puVar45 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar47 * 0x20);
    uVar38 = uVar33;
    puVar18 = puVar17;
    do {
      uVar37 = *puVar45;
      uVar35 = puVar45[3];
      uVar34 = puVar45[2];
      puVar18[1] = puVar45[1];
      *puVar18 = uVar37;
      puVar18[3] = uVar35;
      puVar18[2] = uVar34;
      uVar38 = uVar38 - 1;
      puVar45 = puVar45 + -4;
      puVar18 = puVar18 + 4;
    } while (uVar38 != 0);
    if (puVar47 < puVar21) {
      puVar45 = (ulong *)&UNK_10b4ae618;
      puVar18 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                   (puVar21,puVar47,puVar47);
      puVar47 = puVar51;
      _memcpy(puVar17,puVar22);
      uVar16 = 0x106046824;
      auVar61 = __Unwind_Resume(puVar18);
      puVar11 = puVar11 + -0x90;
      goto __ZN4core5slice4sort6stable9quicksort9quicksort17hb8c99fcc29b80e86E;
    }
    puVar21 = (ulong *)0x0;
    auVar7 = auVar60;
    if (uVar33 < 0x21) goto LAB_106046194;
  }
  if (puVar51 < puVar47) goto LAB_1060467ec;
  puVar45 = (ulong *)0x0;
  puVar18 = puVar17 + (long)param_7 * 4;
  puVar31 = puVar17;
  puVar27 = puVar17;
  puVar26 = puVar20;
  puVar32 = param_7;
  if (puVar18 <= puVar17) goto LAB_106046414;
LAB_1060463e8:
  do {
    uVar33 = puVar31[1];
    uVar38 = puVar52[1];
    puVar26 = puVar26 + -4;
    puVar4 = puVar22;
    if (uVar38 <= uVar33) {
      puVar4 = puVar26;
    }
    puVar4 = puVar4 + (long)puVar45 * 4;
    puVar27 = puVar31 + 4;
    uVar37 = *puVar31;
    uVar35 = puVar31[3];
    uVar34 = puVar31[2];
    puVar4[1] = puVar31[1];
    *puVar4 = uVar37;
    puVar4[3] = uVar35;
    puVar4[2] = uVar34;
    if (uVar38 > uVar33) {
      puVar45 = (ulong *)((long)puVar45 + 1);
    }
    puVar31 = puVar27;
  } while (puVar27 < puVar18);
LAB_106046414:
  while (puVar32 != puVar47) {
    puVar26 = puVar26 + -4;
    puVar31 = puVar27 + 4;
    uVar33 = *puVar27;
    uVar37 = puVar27[3];
    uVar38 = puVar27[2];
    puVar18 = puVar26 + (long)puVar45 * 4;
    puVar18[1] = puVar27[1];
    *puVar18 = uVar33;
    puVar18[3] = uVar37;
    puVar18[2] = uVar38;
    puVar18 = puVar17 + (long)puVar47 * 4;
    puVar27 = puVar31;
    puVar32 = puVar47;
    if (puVar31 < puVar18) goto LAB_1060463e8;
  }
  _memcpy(puVar17,puVar22,(long)puVar45 << 5);
  lVar36 = (long)puVar47 - (long)puVar45;
  auVar60._8_8_ = lVar36;
  auVar60._0_8_ = puVar17 + (long)puVar45 * 4;
  if (lVar36 != 0) {
    puVar18 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar47 * 0x20);
    puVar31 = puVar17 + (long)puVar45 * 4;
    do {
      uVar33 = *puVar18;
      uVar37 = puVar18[3];
      uVar38 = puVar18[2];
      puVar31[1] = puVar18[1];
      *puVar31 = uVar33;
      puVar31[3] = uVar37;
      puVar31[2] = uVar38;
      lVar36 = lVar36 + -1;
      puVar18 = puVar18 + -4;
      puVar31 = puVar31 + 4;
    } while (lVar36 != 0);
  }
  if (puVar45 == (ulong *)0x0) goto LAB_1060464b0;
  if (puVar47 < puVar45) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_1060467e8;
  }
  param_6 = (ulong *)(puVar11 + -0x80);
  puVar50 = *(ulong **)(puVar11 + -0x88);
  uVar16 = 0x1060464a0;
  puVar11 = puVar11 + -0x90;
  puVar18 = puVar22;
  puVar47 = puVar51;
  uVar25 = uVar30;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17h770bfef31f947321E;
__ZN4core5slice4sort6stable9quicksort9quicksort17hb8c99fcc29b80e86E:
  *(ulong **)(puVar11 + -0x60) = puVar20;
  *(ulong **)(puVar11 + -0x58) = puVar52;
  *(ulong **)(puVar11 + -0x50) = puVar21;
  *(long *)(puVar11 + -0x48) = auVar8._8_8_;
  *(ulong *)(puVar11 + -0x40) = uVar30;
  *(ulong **)(puVar11 + -0x38) = param_7;
  *(ulong **)(puVar11 + -0x30) = puVar51;
  *(ulong **)(puVar11 + -0x28) = puVar18;
  *(long *)(puVar11 + -0x20) = auVar8._0_8_;
  *(ulong **)(puVar11 + -0x18) = puVar22;
  *(undefined1 ***)(puVar11 + -0x10) = ppuVar53;
  *(undefined8 *)(puVar11 + -8) = uVar16;
  ppuVar53 = (undefined1 **)(puVar11 + -0x10);
  *(ulong **)(puVar11 + -0x88) = puVar50;
  if (auVar61._8_8_ < 0x21) {
LAB_106046860:
    uVar25 = auVar61._8_8_;
    puVar50 = auVar61._0_8_;
    if (uVar25 < 2) {
      return;
    }
    if (puVar45 < (ulong *)(uVar25 + 0x10)) goto LAB_106046eb0;
    uVar30 = uVar25 >> 1;
    if (uVar25 < 8) {
      uVar33 = *puVar50;
      uVar37 = puVar50[3];
      uVar38 = puVar50[2];
      puVar47[1] = puVar50[1];
      *puVar47 = uVar33;
      puVar47[3] = uVar37;
      puVar47[2] = uVar38;
      puVar51 = puVar50 + uVar30 * 4;
      puVar21 = puVar47 + uVar30 * 4;
      uVar33 = *puVar51;
      uVar37 = puVar51[3];
      uVar38 = puVar51[2];
      puVar21[1] = puVar51[1];
      *puVar21 = uVar33;
      puVar21[3] = uVar37;
      puVar21[2] = uVar38;
      uVar33 = 1;
      uVar38 = uVar25 - uVar30;
      if (1 < uVar30) goto LAB_106046c90;
    }
    else {
      puVar51 = puVar50 + (ulong)(puVar50[2] > puVar50[6]) * 4;
      puVar21 = puVar50 + (ulong)(puVar50[2] <= puVar50[6]) * 4;
      lVar36 = 0x60;
      if (puVar50[10] <= puVar50[0xe]) {
        lVar36 = 0x40;
      }
      puVar22 = (ulong *)((long)puVar50 + lVar36);
      lVar36 = 0x40;
      if (puVar50[10] <= puVar50[0xe]) {
        lVar36 = 0x60;
      }
      puVar17 = (ulong *)((long)puVar50 + lVar36);
      puVar20 = puVar22;
      if (puVar21[2] <= puVar17[2]) {
        puVar20 = puVar21;
      }
      puVar52 = puVar21;
      puVar45 = puVar51;
      if (puVar51[2] <= puVar22[2]) {
        puVar52 = puVar22;
        puVar45 = puVar20;
        puVar22 = puVar51;
      }
      puVar51 = puVar17;
      if (puVar21[2] <= puVar17[2]) {
        puVar51 = puVar52;
        puVar21 = puVar17;
      }
      puVar17 = puVar45;
      if (puVar45[2] <= puVar51[2]) {
        puVar17 = puVar51;
        puVar51 = puVar45;
      }
      uVar33 = *puVar22;
      uVar37 = puVar22[3];
      uVar38 = puVar22[2];
      puVar47[1] = puVar22[1];
      *puVar47 = uVar33;
      puVar47[3] = uVar37;
      puVar47[2] = uVar38;
      uVar33 = *puVar51;
      uVar37 = puVar51[3];
      uVar38 = puVar51[2];
      puVar47[5] = puVar51[1];
      puVar47[4] = uVar33;
      puVar47[7] = uVar37;
      puVar47[6] = uVar38;
      uVar33 = *puVar17;
      uVar37 = puVar17[3];
      uVar38 = puVar17[2];
      puVar47[9] = puVar17[1];
      puVar47[8] = uVar33;
      puVar47[0xb] = uVar37;
      puVar47[10] = uVar38;
      uVar33 = *puVar21;
      uVar37 = puVar21[3];
      uVar38 = puVar21[2];
      puVar47[0xd] = puVar21[1];
      puVar47[0xc] = uVar33;
      puVar47[0xf] = uVar37;
      puVar47[0xe] = uVar38;
      lVar36 = 0x60;
      if (puVar50[uVar30 * 4 + 10] <= puVar50[uVar30 * 4 + 0xe]) {
        lVar36 = 0x40;
      }
      puVar51 = (ulong *)((long)puVar50 + lVar36 + uVar30 * 0x20);
      puVar21 = puVar50 + uVar30 * 4 +
                          (ulong)(puVar50[uVar30 * 4 + 2] > puVar50[uVar30 * 4 + 6]) * 4;
      puVar22 = puVar50 + uVar30 * 4 +
                          (ulong)(puVar50[uVar30 * 4 + 2] <= puVar50[uVar30 * 4 + 6]) * 4;
      lVar36 = 0x40;
      if (puVar50[uVar30 * 4 + 10] <= puVar50[uVar30 * 4 + 0xe]) {
        lVar36 = 0x60;
      }
      puVar17 = (ulong *)((long)puVar50 + lVar36 + uVar30 * 0x20);
      puVar20 = puVar51;
      if (puVar22[2] <= puVar17[2]) {
        puVar20 = puVar22;
      }
      puVar52 = puVar22;
      puVar45 = puVar21;
      if (puVar21[2] <= puVar51[2]) {
        puVar52 = puVar51;
        puVar45 = puVar20;
        puVar51 = puVar21;
      }
      puVar21 = puVar47 + uVar30 * 4;
      puVar20 = puVar17;
      if (puVar22[2] <= puVar17[2]) {
        puVar20 = puVar52;
        puVar22 = puVar17;
      }
      puVar17 = puVar45;
      if (puVar45[2] <= puVar20[2]) {
        puVar17 = puVar20;
        puVar20 = puVar45;
      }
      uVar33 = *puVar51;
      uVar37 = puVar51[3];
      uVar38 = puVar51[2];
      puVar21[1] = puVar51[1];
      *puVar21 = uVar33;
      puVar21[3] = uVar37;
      puVar21[2] = uVar38;
      uVar33 = *puVar20;
      uVar37 = puVar20[3];
      uVar38 = puVar20[2];
      puVar21[5] = puVar20[1];
      puVar21[4] = uVar33;
      puVar21[7] = uVar37;
      puVar21[6] = uVar38;
      uVar33 = *puVar17;
      uVar37 = puVar17[3];
      uVar38 = puVar17[2];
      puVar21[9] = puVar17[1];
      puVar21[8] = uVar33;
      puVar21[0xb] = uVar37;
      puVar21[10] = uVar38;
      uVar33 = *puVar22;
      uVar37 = puVar22[3];
      uVar38 = puVar22[2];
      puVar21[0xd] = puVar22[1];
      puVar21[0xc] = uVar33;
      puVar21[0xf] = uVar37;
      puVar21[0xe] = uVar38;
      uVar33 = 4;
      uVar38 = uVar25 - uVar30;
      if (4 < uVar30) {
LAB_106046c90:
        lVar36 = uVar33 << 5;
        uVar37 = uVar33;
        do {
          uVar34 = uVar37 + 1;
          puVar51 = puVar50 + uVar37 * 4;
          puVar21 = puVar47 + uVar37 * 4;
          uVar37 = *puVar51;
          uVar40 = puVar51[3];
          uVar35 = puVar51[2];
          puVar21[1] = puVar51[1];
          *puVar21 = uVar37;
          puVar21[3] = uVar40;
          puVar21[2] = uVar35;
          uVar37 = puVar21[2];
          if (uVar37 < puVar21[-2]) {
            uVar35 = puVar21[3];
            lVar29 = lVar36;
            do {
              puVar28 = (undefined8 *)((long)puVar47 + lVar29);
              puVar28[1] = puVar28[-3];
              *puVar28 = puVar28[-4];
              puVar28[3] = puVar28[-1];
              puVar28[2] = puVar28[-2];
              lVar29 = lVar29 + -0x20;
              puVar21 = puVar47;
              if (lVar29 == 0) goto LAB_106046ca4;
            } while (uVar37 < (ulong)puVar28[-6]);
            puVar21 = (ulong *)((long)puVar47 + lVar29);
LAB_106046ca4:
            uVar40 = *puVar51;
            puVar21[1] = puVar51[1];
            *puVar21 = uVar40;
            puVar28[-2] = uVar37;
            puVar28[-1] = uVar35;
          }
          lVar36 = lVar36 + 0x20;
          uVar37 = uVar34;
        } while (uVar34 < uVar30);
      }
    }
    puVar51 = puVar47 + uVar30 * 4;
    if (uVar33 < uVar38) {
      lVar36 = 0x20;
      uVar37 = uVar33;
      puVar21 = puVar51;
      do {
        uVar34 = uVar37 + 1;
        puVar22 = puVar50 + uVar30 * 4 + uVar37 * 4;
        puVar17 = puVar51 + uVar37 * 4;
        uVar37 = *puVar22;
        uVar40 = puVar22[3];
        uVar35 = puVar22[2];
        puVar17[1] = puVar22[1];
        *puVar17 = uVar37;
        puVar17[3] = uVar40;
        puVar17[2] = uVar35;
        uVar37 = puVar17[2];
        if (uVar37 < puVar17[-2]) {
          uVar35 = puVar17[3];
          puVar17 = puVar21;
          lVar29 = lVar36;
          do {
            puVar20 = puVar17 + uVar33 * 4;
            puVar20[1] = puVar20[-3];
            *puVar20 = puVar20[-4];
            puVar20[3] = puVar20[-1];
            puVar20[2] = puVar20[-2];
            puVar52 = puVar51;
            if (uVar33 * 0x20 - lVar29 == 0) goto LAB_106046d40;
            lVar29 = lVar29 + 0x20;
            puVar17 = puVar17 + -4;
          } while (uVar37 < puVar20[-6]);
          puVar52 = puVar17 + uVar33 * 4;
LAB_106046d40:
          uVar40 = *puVar22;
          puVar52[1] = puVar22[1];
          *puVar52 = uVar40;
          puVar20[-2] = uVar37;
          puVar20[-1] = uVar35;
        }
        lVar36 = lVar36 + -0x20;
        puVar21 = puVar21 + 4;
        uVar37 = uVar34;
      } while (uVar34 < uVar38);
    }
    lVar36 = uVar25 * 0x20;
    puVar21 = puVar47 + uVar25 * 4 + -4;
    puVar22 = puVar51 + -4;
    puVar17 = puVar50;
    do {
      puVar52 = puVar17;
      lVar36 = lVar36 + -0x20;
      puVar17 = (ulong *)((long)puVar50 + lVar36);
      bVar13 = puVar47[2] <= puVar51[2];
      puVar20 = puVar51;
      if (bVar13) {
        puVar20 = puVar47;
      }
      uVar33 = *puVar20;
      uVar37 = puVar20[3];
      uVar38 = puVar20[2];
      puVar52[1] = puVar20[1];
      *puVar52 = uVar33;
      puVar52[3] = uVar37;
      puVar52[2] = uVar38;
      puVar51 = puVar51 + (ulong)!bVar13 * 4;
      puVar47 = puVar47 + (ulong)bVar13 * 4;
      bVar13 = puVar22[2] <= puVar21[2];
      puVar20 = puVar22;
      if (bVar13) {
        puVar20 = puVar21;
      }
      uVar33 = *puVar20;
      uVar37 = puVar20[3];
      uVar38 = puVar20[2];
      puVar17[1] = puVar20[1];
      *puVar17 = uVar33;
      puVar17[3] = uVar37;
      puVar17[2] = uVar38;
      puVar21 = puVar21 + (ulong)bVar13 * -4;
      puVar22 = puVar22 + (ulong)!bVar13 * -4;
      uVar30 = uVar30 - 1;
      puVar17 = puVar52 + 4;
    } while (uVar30 != 0);
    if ((uVar25 & 1) != 0) {
      bVar13 = puVar22 + 4 <= puVar47;
      puVar50 = puVar47;
      if (bVar13) {
        puVar50 = puVar51;
      }
      uVar25 = *puVar50;
      uVar33 = puVar50[3];
      uVar30 = puVar50[2];
      puVar52[5] = puVar50[1];
      puVar52[4] = uVar25;
      puVar52[7] = uVar33;
      puVar52[6] = uVar30;
      puVar47 = puVar47 + (ulong)!bVar13 * 4;
      puVar51 = puVar51 + (ulong)bVar13 * 4;
    }
    if (puVar47 == puVar22 + 4 && puVar51 == puVar21 + 4) {
      return;
    }
LAB_106046eac:
    __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_106046eb0:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x106046eb4);
    (*pcVar9)();
  }
  *(ulong **)(puVar11 + -0x90) = puVar47 + -4;
  puVar21 = param_6;
  auVar8 = auVar61;
LAB_1060469f8:
  puVar51 = auVar8._8_8_;
  puVar50 = auVar8._0_8_;
  if ((int)uVar25 == 0) {
    FUN_106042dd0(puVar50,puVar51,puVar47,puVar45,1,*(undefined8 *)(puVar11 + -0x88));
    return;
  }
  if (puVar51 < (ulong *)0x40) {
    uVar30 = puVar50[2];
    uVar33 = (puVar50 + ((ulong)puVar51 >> 3) * 0x10)[2];
    uVar38 = (puVar50 + ((ulong)puVar51 >> 3) * 0x1c)[2];
    puVar17 = puVar50 + ((ulong)puVar51 >> 3) * 0x1c;
    if (uVar30 < uVar33 == uVar33 < uVar38) {
      puVar17 = puVar50 + ((ulong)puVar51 >> 3) * 0x10;
    }
    puVar22 = puVar50;
    if (uVar30 < uVar33 == uVar30 < uVar38) {
      puVar22 = puVar17;
    }
  }
  else {
    puVar22 = (ulong *)FUN_1060404c4(puVar50);
  }
  uVar25 = (ulong)((int)uVar25 - 1);
  param_7 = (ulong *)((ulong)((long)puVar22 - (long)puVar50) >> 5);
  uVar30 = *puVar22;
  uVar38 = puVar22[3];
  uVar33 = puVar22[2];
  *(ulong *)(puVar11 + -0x78) = puVar22[1];
  *(ulong *)(puVar11 + -0x80) = uVar30;
  *(ulong *)(puVar11 + -0x68) = uVar38;
  *(ulong *)(puVar11 + -0x70) = uVar33;
  puVar20 = puVar47 + (long)puVar51 * 4;
  puVar52 = puVar50 + (long)param_7 * 4;
  if ((puVar21 != (ulong *)0x0) && (puVar22[2] <= puVar21[2])) {
LAB_106046b7c:
    if (puVar45 < puVar51) goto LAB_106046eb0;
    puVar21 = (ulong *)0x0;
    puVar22 = puVar50 + (long)param_7 * 4;
    puVar17 = puVar50;
    puVar18 = puVar50;
    if (puVar22 <= puVar50) goto LAB_106046bc4;
LAB_106046b98:
    do {
      uVar30 = puVar17[2];
      uVar33 = puVar52[2];
      puVar20 = puVar20 + -4;
      puVar31 = puVar47;
      if (uVar33 < uVar30) {
        puVar31 = puVar20;
      }
      puVar31 = puVar31 + (long)puVar21 * 4;
      puVar18 = puVar17 + 4;
      uVar38 = *puVar17;
      uVar34 = puVar17[3];
      uVar37 = puVar17[2];
      puVar31[1] = puVar17[1];
      *puVar31 = uVar38;
      puVar31[3] = uVar34;
      puVar31[2] = uVar37;
      if (uVar33 >= uVar30) {
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
      puVar17 = puVar18;
    } while (puVar18 < puVar22);
LAB_106046bc4:
    while (param_7 != puVar51) {
      puVar20 = puVar20 + -4;
      puVar17 = puVar18 + 4;
      uVar30 = *puVar18;
      uVar38 = puVar18[3];
      uVar33 = puVar18[2];
      puVar22 = puVar47 + (long)puVar21 * 4;
      puVar22[1] = puVar18[1];
      *puVar22 = uVar30;
      puVar22[3] = uVar38;
      puVar22[2] = uVar33;
      puVar21 = (ulong *)((long)puVar21 + 1);
      puVar22 = puVar50 + (long)puVar51 * 4;
      puVar18 = puVar17;
      param_7 = puVar51;
      if (puVar17 < puVar22) goto LAB_106046b98;
    }
    _memcpy(puVar50,puVar47,(long)puVar21 << 5);
    uVar30 = (long)puVar51 - (long)puVar21;
    if (uVar30 == 0) {
      return;
    }
    puVar50 = puVar50 + (long)puVar21 * 4;
    auVar61._8_8_ = uVar30;
    auVar61._0_8_ = puVar50;
    puVar22 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar51 * 0x20);
    uVar33 = uVar30;
    puVar17 = puVar50;
    do {
      uVar38 = *puVar22;
      uVar34 = puVar22[3];
      uVar37 = puVar22[2];
      puVar17[1] = puVar22[1];
      *puVar17 = uVar38;
      puVar17[3] = uVar34;
      puVar17[2] = uVar37;
      uVar33 = uVar33 - 1;
      puVar22 = puVar22 + -4;
      puVar17 = puVar17 + 4;
    } while (uVar33 != 0);
    if (puVar21 <= puVar51) {
      puVar21 = (ulong *)0x0;
      auVar8 = auVar61;
      if (uVar30 < 0x21) goto LAB_106046860;
      goto LAB_1060469f8;
    }
    uVar16 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                       (puVar21,puVar51,puVar51,&UNK_10b4ae618);
    _memcpy(puVar50,puVar47,puVar45);
    auVar62 = __Unwind_Resume(uVar16);
    uVar30 = auVar62._8_8_;
    puVar28 = auVar62._0_8_;
    *(ulong **)(puVar11 + -0xf0) = puVar20;
    *(ulong **)(puVar11 + -0xe8) = puVar52;
    *(ulong **)(puVar11 + -0xe0) = puVar21;
    *(ulong **)(puVar11 + -0xd8) = puVar51;
    *(ulong *)(puVar11 + -0xd0) = uVar25;
    *(ulong **)(puVar11 + -200) = param_7;
    *(ulong **)(puVar11 + -0xc0) = puVar45;
    *(undefined8 *)(puVar11 + -0xb8) = uVar16;
    *(ulong **)(puVar11 + -0xb0) = puVar50;
    *(ulong **)(puVar11 + -0xa8) = puVar47;
    *(undefined1 ***)(puVar11 + -0xa0) = ppuVar53;
    *(undefined8 *)(puVar11 + -0x98) = 0x106046ee8;
    if (uVar30 < 2) {
      return;
    }
    uVar38 = puVar28[3];
    uVar37 = puVar28[4];
    uVar33 = puVar28[1];
    uVar25 = uVar37;
    if (uVar33 <= uVar37) {
      uVar25 = uVar33;
    }
    iVar14 = _memcmp(uVar38,*puVar28,uVar25);
    lVar36 = uVar37 - uVar33;
    if (iVar14 != 0) {
      lVar36 = (long)iVar14;
    }
    if (lVar36 < 0) {
      if (uVar30 == 2) goto LAB_106046f9c;
      puVar50 = puVar28 + 7;
      uVar25 = 2;
      while( true ) {
        uVar34 = puVar50[-1];
        uVar35 = *puVar50;
        uVar33 = uVar35;
        if (uVar37 <= uVar35) {
          uVar33 = uVar37;
        }
        iVar14 = _memcmp(uVar34,uVar38,uVar33);
        lVar29 = uVar35 - uVar37;
        if (iVar14 != 0) {
          lVar29 = (long)iVar14;
        }
        if (-1 < lVar29) break;
        puVar50 = puVar50 + 3;
        uVar25 = uVar25 + 1;
        uVar38 = uVar34;
        uVar37 = uVar35;
        if (uVar30 == uVar25) goto LAB_106046fa8;
      }
    }
    else if (uVar30 == 2) {
LAB_106046f9c:
      uVar25 = 2;
    }
    else {
      puVar50 = puVar28 + 7;
      uVar25 = 2;
      while( true ) {
        uVar34 = puVar50[-1];
        uVar35 = *puVar50;
        uVar33 = uVar35;
        if (uVar37 <= uVar35) {
          uVar33 = uVar37;
        }
        iVar14 = _memcmp(uVar34,uVar38,uVar33);
        lVar29 = uVar35 - uVar37;
        if (iVar14 != 0) {
          lVar29 = (long)iVar14;
        }
        if (lVar29 < 0) break;
        puVar50 = puVar50 + 3;
        uVar25 = uVar25 + 1;
        uVar38 = uVar34;
        uVar37 = uVar35;
        if (uVar30 == uVar25) goto LAB_106046fa8;
      }
    }
    if (uVar25 == uVar30) {
LAB_106046fa8:
      if (lVar36 < 0) {
        uVar25 = uVar30 >> 1;
        puVar48 = puVar28 + 2;
        puVar28 = puVar28 + uVar30 * 3 + -1;
        do {
          uVar49 = puVar48[-1];
          uVar16 = puVar48[-2];
          uVar23 = puVar28[-2];
          puVar48[-1] = puVar28[-1];
          puVar48[-2] = uVar23;
          puVar28[-1] = uVar49;
          puVar28[-2] = uVar16;
          uVar16 = *puVar48;
          *puVar48 = *puVar28;
          *puVar28 = uVar16;
          uVar25 = uVar25 - 1;
          puVar48 = puVar48 + 3;
          puVar28 = puVar28 + -3;
        } while (uVar25 != 0);
      }
      return;
    }
    uVar30 = (ulong)((int)LZCOUNT(uVar30 | 1) << 1 ^ 0x7e);
    uVar23 = 0;
    puVar54 = *(undefined1 **)(puVar11 + -0xa0);
    uVar49 = *(undefined8 *)(puVar11 + -0x98);
    lVar29 = *(long *)(puVar11 + -0xb0);
    puVar19 = *(undefined8 **)(puVar11 + -0xa8);
    puVar43 = *(undefined8 **)(puVar11 + -0xc0);
    lVar41 = *(long *)(puVar11 + -0xb8);
    uVar16 = *(undefined8 *)(puVar11 + -0xd0);
    uVar25 = *(ulong *)(puVar11 + -200);
    puVar28 = *(undefined8 **)(puVar11 + -0xe0);
    puVar48 = *(undefined8 **)(puVar11 + -0xf0);
    lVar36 = *(long *)(puVar11 + -0xe8);
    puVar12 = puVar11 + -0x90;
    uVar33 = *(ulong *)(puVar11 + -0xd8);
    do {
      uVar38 = auVar62._8_8_;
      *(undefined8 **)(puVar12 + -0x60) = puVar48;
      *(long *)(puVar12 + -0x58) = lVar36;
      *(undefined8 **)(puVar12 + -0x50) = puVar28;
      *(ulong *)(puVar12 + -0x48) = uVar33;
      *(undefined8 *)(puVar12 + -0x40) = uVar16;
      *(ulong *)(puVar12 + -0x38) = uVar25;
      *(undefined8 **)(puVar12 + -0x30) = puVar43;
      *(long *)(puVar12 + -0x28) = lVar41;
      *(long *)(puVar12 + -0x20) = lVar29;
      *(undefined8 **)(puVar12 + -0x18) = puVar19;
      *(undefined1 **)(puVar12 + -0x10) = puVar54;
      *(undefined8 *)(puVar12 + -8) = uVar49;
      puVar54 = puVar12 + -0x10;
      while( true ) {
        puVar48 = auVar62._0_8_;
        uVar33 = auVar62._8_8_;
        if (uVar38 < 0x21) {
          *(undefined8 *)(puVar12 + -0x60) = *(undefined8 *)(puVar12 + -0x60);
          *(undefined8 *)(puVar12 + -0x58) = *(undefined8 *)(puVar12 + -0x58);
          *(undefined8 *)(puVar12 + -0x50) = *(undefined8 *)(puVar12 + -0x50);
          *(undefined8 *)(puVar12 + -0x48) = *(undefined8 *)(puVar12 + -0x48);
          *(undefined8 *)(puVar12 + -0x40) = *(undefined8 *)(puVar12 + -0x40);
          *(undefined8 *)(puVar12 + -0x38) = *(undefined8 *)(puVar12 + -0x38);
          *(undefined8 *)(puVar12 + -0x30) = *(undefined8 *)(puVar12 + -0x30);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)(puVar12 + -0x28);
          *(undefined8 *)(puVar12 + -0x20) = *(undefined8 *)(puVar12 + -0x20);
          *(undefined8 *)(puVar12 + -0x18) = *(undefined8 *)(puVar12 + -0x18);
          *(undefined8 *)(puVar12 + -0x10) = *(undefined8 *)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
          *(undefined8 *)(puVar12 + -0x520) = 0;
          if (uVar33 < 2) {
            return;
          }
          uVar25 = uVar33 >> 1;
          puVar28 = puVar48 + uVar25 * 3;
          puVar43 = (undefined8 *)(puVar12 + uVar25 * 0x18 + -0x4f0);
          *(undefined8 **)(puVar12 + -0x508) = puVar28;
          if (uVar33 < 8) {
            uVar16 = *puVar48;
            *(undefined8 *)(puVar12 + -0x4e8) = puVar48[1];
            *(undefined8 *)(puVar12 + -0x4f0) = uVar16;
            *(undefined8 *)(puVar12 + -0x4e0) = puVar48[2];
            uVar16 = *puVar28;
            puVar43[1] = puVar28[1];
            *puVar43 = uVar16;
            puVar43[2] = puVar28[2];
            uVar30 = 1;
          }
          else {
            FUN_106040b18(puVar48,puVar12 + -0x4f0);
            FUN_106040b18(puVar28,puVar43);
            uVar30 = 4;
          }
          *(ulong *)(puVar12 + -0x520) = uVar33;
          *(ulong *)(puVar12 + -0x518) = uVar25;
          *(ulong *)(puVar12 + -0x500) = uVar33 - uVar25;
          *(undefined8 **)(puVar12 + -0x4f8) = puVar48;
          *(ulong *)(puVar12 + -0x510) = uVar30 * 3;
          if (uVar25 <= uVar30) goto LAB_106041280;
          lVar36 = *(long *)(puVar12 + -0x510) << 3;
          uVar33 = uVar30 + 1;
          uVar38 = uVar30;
          goto LAB_1060411dc;
        }
        iVar14 = (int)uVar30;
        if (iVar14 == 0) {
          lVar36 = uVar33 + (uVar33 >> 1);
          if (lVar36 == 0) {
            return;
          }
          *(undefined8 *)(puVar12 + -0x60) = *(undefined8 *)(puVar12 + -0x60);
          *(undefined8 *)(puVar12 + -0x58) = *(undefined8 *)(puVar12 + -0x58);
          *(undefined8 *)(puVar12 + -0x50) = *(undefined8 *)(puVar12 + -0x50);
          *(undefined8 *)(puVar12 + -0x48) = *(undefined8 *)(puVar12 + -0x48);
          *(undefined8 *)(puVar12 + -0x40) = *(undefined8 *)(puVar12 + -0x40);
          *(undefined8 *)(puVar12 + -0x38) = *(undefined8 *)(puVar12 + -0x38);
          *(undefined8 *)(puVar12 + -0x30) = *(undefined8 *)(puVar12 + -0x30);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)(puVar12 + -0x28);
          *(undefined8 *)(puVar12 + -0x20) = *(undefined8 *)(puVar12 + -0x20);
          *(undefined8 *)(puVar12 + -0x18) = *(undefined8 *)(puVar12 + -0x18);
          *(undefined8 *)(puVar12 + -0x10) = *(undefined8 *)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
          *(ulong *)(puVar12 + -0x90) = uVar33;
          goto LAB_1060472b0;
        }
        *(undefined8 **)(puVar12 + -0x98) = puVar48;
        *(undefined8 *)(puVar12 + -0x90) = uVar23;
        puVar28 = puVar48 + (uVar33 >> 3) * 0xc;
        puVar43 = puVar48 + (uVar33 >> 3) * 0x15;
        if (uVar33 < 0x40) {
          *(int *)(puVar12 + -0x84) = iVar14;
          uVar16 = *puVar48;
          uVar30 = puVar48[1];
          uVar49 = *puVar28;
          uVar38 = puVar28[1];
          uVar25 = uVar30;
          if (uVar38 <= uVar30) {
            uVar25 = uVar38;
          }
          *(undefined8 *)(puVar12 + -0xa0) = uVar49;
          iVar14 = _memcmp(uVar16,uVar49,uVar25);
          uVar25 = uVar30 - uVar38;
          if (iVar14 != 0) {
            uVar25 = (long)iVar14;
          }
          uVar49 = *puVar43;
          uVar34 = puVar43[1];
          uVar37 = uVar30;
          if (uVar34 <= uVar30) {
            uVar37 = uVar34;
          }
          iVar14 = *(int *)(puVar12 + -0x84);
          iVar15 = _memcmp(uVar16,uVar49,uVar37);
          uVar30 = uVar30 - uVar34;
          if (iVar15 != 0) {
            uVar30 = (long)iVar15;
          }
          puVar48 = *(undefined8 **)(puVar12 + -0x98);
          puVar19 = puVar48;
          if (-1 < (long)(uVar30 ^ uVar25)) {
            uVar30 = uVar38;
            if (uVar34 <= uVar38) {
              uVar30 = uVar34;
            }
            iVar15 = _memcmp(*(undefined8 *)(puVar12 + -0xa0),uVar49,uVar30);
            uVar30 = uVar38 - uVar34;
            if (iVar15 != 0) {
              uVar30 = (long)iVar15;
            }
            puVar19 = puVar43;
            if (-1 < (long)(uVar30 ^ uVar25)) {
              puVar19 = puVar28;
            }
          }
        }
        else {
          puVar19 = (undefined8 *)FUN_1060409e4(puVar48,puVar28,puVar43);
        }
        *(int *)(puVar12 + -0x84) = iVar14 + -1;
        *(ulong *)(puVar12 + -0xa0) = uVar33;
        puVar28 = *(undefined8 **)(puVar12 + -0x90);
        if (puVar28 == (undefined8 *)0x0) break;
        puVar43 = (undefined8 *)((long)puVar48 + ((long)puVar19 - (long)puVar48));
        uVar30 = puVar28[1];
        uVar38 = puVar43[1];
        uVar25 = uVar30;
        if (uVar38 <= uVar30) {
          uVar25 = uVar38;
        }
        iVar14 = _memcmp(*puVar28,*puVar43,uVar25);
        lVar36 = uVar30 - uVar38;
        if (iVar14 != 0) {
          lVar36 = (long)iVar14;
        }
        if (lVar36 < 0) break;
        uVar25 = 0;
        uVar49 = puVar48[1];
        uVar16 = *puVar48;
        *(undefined8 *)(puVar12 + -0x70) = puVar48[2];
        *(undefined8 *)(puVar12 + -0x78) = uVar49;
        *(undefined8 *)(puVar12 + -0x80) = uVar16;
        uVar49 = puVar43[1];
        uVar16 = *puVar43;
        puVar48[2] = puVar43[2];
        puVar48[1] = uVar49;
        *puVar48 = uVar16;
        uVar49 = *(undefined8 *)(puVar12 + -0x78);
        uVar16 = *(undefined8 *)(puVar12 + -0x80);
        puVar43[2] = *(undefined8 *)(puVar12 + -0x70);
        puVar43[1] = uVar49;
        *puVar43 = uVar16;
        uVar16 = puVar48[3];
        *(undefined8 *)(puVar12 + -0x78) = puVar48[4];
        *(undefined8 *)(puVar12 + -0x80) = uVar16;
        *(undefined8 *)(puVar12 + -0x70) = puVar48[5];
        puVar28 = puVar48 + 6;
        uVar16 = *puVar48;
        uVar30 = puVar48[1];
        lVar36 = uVar33 * 0x18 + -0x48;
        lVar29 = uVar33 * 0x18 + -0x30;
        do {
          lVar41 = lVar29;
          lVar44 = lVar36;
          uVar37 = puVar28[1];
          uVar38 = uVar30;
          if (uVar37 <= uVar30) {
            uVar38 = uVar37;
          }
          iVar14 = _memcmp(uVar16,*puVar28,uVar38);
          uVar38 = uVar30 - uVar37;
          if (iVar14 != 0) {
            uVar38 = (long)iVar14;
          }
          puVar43 = puVar48 + uVar25 * 3 + 3;
          uVar49 = puVar43[2];
          uVar23 = *puVar43;
          puVar28[-2] = puVar43[1];
          puVar28[-3] = uVar23;
          puVar28[-1] = uVar49;
          uVar23 = puVar28[1];
          uVar49 = *puVar28;
          uVar25 = uVar25 - ((long)~uVar38 >> 0x3f);
          puVar43[2] = puVar28[2];
          puVar43[1] = uVar23;
          *puVar43 = uVar49;
          puVar28 = puVar28 + 3;
          lVar36 = lVar44 + -0x18;
          lVar29 = lVar41 + -0x18;
        } while (puVar28 < puVar48 + uVar33 * 3);
        do {
          puVar43 = (undefined8 *)(puVar12 + -0x80);
          if (lVar44 != 0) {
            puVar43 = puVar28;
          }
          uVar38 = puVar43[1];
          uVar33 = uVar30;
          if (uVar38 <= uVar30) {
            uVar33 = uVar38;
          }
          iVar14 = _memcmp(uVar16,*puVar43,uVar33);
          uVar33 = uVar30 - uVar38;
          if (iVar14 != 0) {
            uVar33 = (long)iVar14;
          }
          puVar19 = puVar48 + uVar25 * 3 + 3;
          uVar49 = puVar19[2];
          uVar23 = *puVar19;
          puVar28[-2] = puVar19[1];
          puVar28[-3] = uVar23;
          puVar28[-1] = uVar49;
          uVar23 = puVar43[1];
          uVar49 = *puVar43;
          puVar19[2] = puVar43[2];
          puVar19[1] = uVar23;
          *puVar19 = uVar49;
          uVar25 = uVar25 - ((long)~uVar33 >> 0x3f);
          puVar28 = puVar28 + 3;
          lVar44 = lVar44 + -0x18;
          lVar41 = lVar41 + -0x18;
        } while (lVar41 != 0);
        uVar38 = *(ulong *)(puVar12 + -0xa0);
        if (uVar38 <= uVar25) goto LAB_1060478ac;
        uVar23 = 0;
        puVar48 = *(undefined8 **)(puVar12 + -0x98);
        puVar28 = puVar48 + uVar25 * 3;
        uVar49 = puVar48[1];
        uVar16 = *puVar48;
        *(undefined8 *)(puVar12 + -0x70) = puVar48[2];
        *(undefined8 *)(puVar12 + -0x78) = uVar49;
        *(undefined8 *)(puVar12 + -0x80) = uVar16;
        uVar49 = puVar28[1];
        uVar16 = *puVar28;
        puVar48[2] = puVar28[2];
        puVar48[1] = uVar49;
        *puVar48 = uVar16;
        uVar49 = *(undefined8 *)(puVar12 + -0x78);
        uVar16 = *(undefined8 *)(puVar12 + -0x80);
        puVar28[2] = *(undefined8 *)(puVar12 + -0x70);
        puVar28[1] = uVar49;
        *puVar28 = uVar16;
        uVar38 = ~uVar25 + uVar38;
        auVar62._8_8_ = uVar38;
        auVar62._0_8_ = puVar28 + 3;
        uVar30 = (ulong)*(uint *)(puVar12 + -0x84);
      }
      uVar25 = 0;
      puVar28 = (undefined8 *)((long)puVar48 + ((long)puVar19 - (long)puVar48));
      uVar49 = puVar48[1];
      uVar16 = *puVar48;
      *(undefined8 *)(puVar12 + -0x70) = puVar48[2];
      *(undefined8 *)(puVar12 + -0x78) = uVar49;
      *(undefined8 *)(puVar12 + -0x80) = uVar16;
      uVar49 = puVar28[1];
      uVar16 = *puVar28;
      puVar48[2] = puVar28[2];
      puVar48[1] = uVar49;
      *puVar48 = uVar16;
      uVar49 = *(undefined8 *)(puVar12 + -0x78);
      uVar16 = *(undefined8 *)(puVar12 + -0x80);
      puVar28[2] = *(undefined8 *)(puVar12 + -0x70);
      puVar28[1] = uVar49;
      *puVar28 = uVar16;
      uVar16 = puVar48[3];
      *(undefined8 *)(puVar12 + -0x78) = puVar48[4];
      *(undefined8 *)(puVar12 + -0x80) = uVar16;
      *(undefined8 *)(puVar12 + -0x70) = puVar48[5];
      puVar43 = puVar48 + uVar33 * 3;
      puVar28 = puVar48 + 6;
      uVar16 = *puVar48;
      uVar30 = puVar48[1];
      lVar36 = uVar33 * 0x18 + -0x30;
      lVar29 = uVar33 * 0x18 + -0x48;
      do {
        lVar41 = lVar29;
        lVar44 = lVar36;
        uVar38 = puVar28[1];
        uVar33 = uVar38;
        if (uVar30 <= uVar38) {
          uVar33 = uVar30;
        }
        iVar14 = _memcmp(*puVar28,uVar16,uVar33);
        lVar36 = uVar38 - uVar30;
        if (iVar14 != 0) {
          lVar36 = (long)iVar14;
        }
        puVar19 = puVar48 + uVar25 * 3 + 3;
        uVar49 = puVar19[2];
        uVar23 = *puVar19;
        puVar28[-2] = puVar19[1];
        puVar28[-3] = uVar23;
        puVar28[-1] = uVar49;
        uVar23 = puVar28[1];
        uVar49 = *puVar28;
        uVar25 = uVar25 - (lVar36 >> 0x3f);
        puVar19[2] = puVar28[2];
        puVar19[1] = uVar23;
        *puVar19 = uVar49;
        puVar28 = puVar28 + 3;
        lVar36 = lVar44 + -0x18;
        lVar29 = lVar41 + -0x18;
      } while (puVar28 < puVar43);
      do {
        puVar19 = (undefined8 *)(puVar12 + -0x80);
        if (lVar41 != 0) {
          puVar19 = puVar28;
        }
        uVar33 = puVar19[1];
        lVar29 = uVar33 - uVar30;
        if (uVar30 <= uVar33) {
          uVar33 = uVar30;
        }
        iVar14 = _memcmp(*puVar19,uVar16,uVar33);
        lVar36 = lVar29;
        if (iVar14 != 0) {
          lVar36 = (long)iVar14;
        }
        puVar24 = puVar48 + uVar25 * 3 + 3;
        uVar49 = puVar24[2];
        uVar23 = *puVar24;
        puVar28[-2] = puVar24[1];
        puVar28[-3] = uVar23;
        puVar28[-1] = uVar49;
        uVar23 = puVar19[1];
        uVar49 = *puVar19;
        puVar24[2] = puVar19[2];
        puVar24[1] = uVar23;
        *puVar24 = uVar49;
        uVar25 = uVar25 - (lVar36 >> 0x3f);
        puVar28 = puVar28 + 3;
        lVar41 = lVar41 + -0x18;
        lVar44 = lVar44 + -0x18;
      } while (lVar44 != 0);
      uVar30 = *(ulong *)(puVar12 + -0xa0);
      if (uVar30 <= uVar25) {
LAB_1060478ac:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1060478b0);
        (*pcVar9)();
      }
      puVar48 = *(undefined8 **)(puVar12 + -0x98);
      auVar62._8_8_ = uVar25;
      auVar62._0_8_ = puVar48;
      uVar23 = *(undefined8 *)(puVar12 + -0x90);
      puVar19 = puVar48 + uVar25 * 3;
      uVar55 = puVar48[1];
      uVar49 = *puVar48;
      *(undefined8 *)(puVar12 + -0x70) = puVar48[2];
      *(undefined8 *)(puVar12 + -0x78) = uVar55;
      *(undefined8 *)(puVar12 + -0x80) = uVar49;
      uVar55 = puVar19[1];
      uVar49 = *puVar19;
      puVar48[2] = puVar19[2];
      puVar48[1] = uVar55;
      *puVar48 = uVar49;
      uVar55 = *(undefined8 *)(puVar12 + -0x78);
      uVar49 = *(undefined8 *)(puVar12 + -0x80);
      puVar19[2] = *(undefined8 *)(puVar12 + -0x70);
      puVar19[1] = uVar55;
      *puVar19 = uVar49;
      puVar48 = puVar19 + 3;
      lVar36 = uVar30 + ~uVar25;
      uVar30 = (ulong)*(uint *)(puVar12 + -0x84);
      uVar49 = 0x10604787c;
      puVar12 = puVar12 + -0xa0;
      uVar33 = uVar30;
    } while( true );
  }
  if (puVar45 < puVar51) goto LAB_106046eb0;
  puVar18 = (ulong *)0x0;
  puVar22 = puVar50 + (long)param_7 * 4;
  puVar17 = puVar50;
  puVar31 = puVar50;
  puVar27 = puVar20;
  puVar26 = param_7;
  if (puVar22 <= puVar50) goto LAB_106046ae0;
LAB_106046ab4:
  do {
    uVar30 = puVar17[2];
    uVar33 = puVar52[2];
    puVar27 = puVar27 + -4;
    puVar32 = puVar47;
    if (uVar33 <= uVar30) {
      puVar32 = puVar27;
    }
    puVar32 = puVar32 + (long)puVar18 * 4;
    puVar31 = puVar17 + 4;
    uVar38 = *puVar17;
    uVar34 = puVar17[3];
    uVar37 = puVar17[2];
    puVar32[1] = puVar17[1];
    *puVar32 = uVar38;
    puVar32[3] = uVar34;
    puVar32[2] = uVar37;
    if (uVar33 > uVar30) {
      puVar18 = (ulong *)((long)puVar18 + 1);
    }
    puVar17 = puVar31;
  } while (puVar31 < puVar22);
LAB_106046ae0:
  while (puVar26 != puVar51) {
    puVar27 = puVar27 + -4;
    puVar17 = puVar31 + 4;
    uVar30 = *puVar31;
    uVar38 = puVar31[3];
    uVar33 = puVar31[2];
    puVar22 = puVar27 + (long)puVar18 * 4;
    puVar22[1] = puVar31[1];
    *puVar22 = uVar30;
    puVar22[3] = uVar38;
    puVar22[2] = uVar33;
    puVar22 = puVar50 + (long)puVar51 * 4;
    puVar31 = puVar17;
    puVar26 = puVar51;
    if (puVar17 < puVar22) goto LAB_106046ab4;
  }
  _memcpy(puVar50,puVar47,(long)puVar18 << 5);
  lVar36 = (long)puVar51 - (long)puVar18;
  auVar61._8_8_ = lVar36;
  auVar61._0_8_ = puVar50 + (long)puVar18 * 4;
  if (lVar36 != 0) {
    puVar22 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar51 * 0x20);
    puVar17 = puVar50 + (long)puVar18 * 4;
    do {
      uVar30 = *puVar22;
      uVar38 = puVar22[3];
      uVar33 = puVar22[2];
      puVar17[1] = puVar22[1];
      *puVar17 = uVar30;
      puVar17[3] = uVar38;
      puVar17[2] = uVar33;
      lVar36 = lVar36 + -1;
      puVar22 = puVar22 + -4;
      puVar17 = puVar17 + 4;
    } while (lVar36 != 0);
  }
  if (puVar18 == (ulong *)0x0) goto LAB_106046b7c;
  if (puVar51 < puVar18) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_106046eac;
  }
  param_6 = (ulong *)(puVar11 + -0x80);
  puVar50 = *(ulong **)(puVar11 + -0x88);
  uVar16 = 0x106046b6c;
  puVar11 = puVar11 + -0x90;
  puVar22 = puVar47;
  puVar51 = puVar45;
  uVar30 = uVar25;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17hb8c99fcc29b80e86E;
LAB_1060472b0:
  uVar30 = lVar36 - 1;
  uVar25 = uVar30 - uVar33;
  if (uVar30 < uVar33) {
    uVar25 = 0;
    puVar28 = puVar48 + uVar30 * 3;
    uVar16 = puVar48[2];
    uVar55 = puVar48[1];
    uVar23 = *puVar48;
    uVar49 = puVar28[2];
    uVar56 = *puVar28;
    puVar48[1] = puVar28[1];
    *puVar48 = uVar56;
    puVar48[2] = uVar49;
    puVar28[1] = uVar55;
    *puVar28 = uVar23;
    puVar28[2] = uVar16;
  }
  *(ulong *)(puVar12 + -0x88) = uVar30;
  if (uVar30 <= uVar33) {
    uVar33 = uVar30;
  }
  while (uVar30 = (uVar25 & 0x3fffffffffffffff) << 1 | 1, uVar30 < uVar33) {
    uVar38 = uVar25 * 2 + 2;
    if (uVar38 < uVar33) {
      uVar34 = (puVar48 + uVar30 * 3)[1];
      uVar35 = (puVar48 + uVar38 * 3)[1];
      uVar37 = uVar34;
      if (uVar35 <= uVar34) {
        uVar37 = uVar35;
      }
      iVar14 = _memcmp(puVar48[uVar30 * 3],puVar48[uVar38 * 3],uVar37);
      lVar36 = uVar34 - uVar35;
      if (iVar14 != 0) {
        lVar36 = (long)iVar14;
      }
      uVar30 = uVar30 - (lVar36 >> 0x3f);
    }
    puVar28 = puVar48 + uVar25 * 3;
    puVar43 = puVar48 + uVar30 * 3;
    uVar16 = *puVar28;
    uVar38 = puVar28[1];
    uVar49 = *puVar43;
    uVar37 = puVar43[1];
    uVar25 = uVar38;
    if (uVar37 <= uVar38) {
      uVar25 = uVar37;
    }
    iVar14 = _memcmp(uVar16,uVar49,uVar25);
    lVar36 = uVar38 - uVar37;
    if (iVar14 != 0) {
      lVar36 = (long)iVar14;
    }
    if (-1 < lVar36) break;
    *puVar28 = uVar49;
    puVar28[1] = uVar37;
    *puVar43 = uVar16;
    puVar43[1] = uVar38;
    uVar16 = puVar28[2];
    puVar28[2] = puVar43[2];
    puVar43[2] = uVar16;
    uVar25 = uVar30;
  }
  uVar33 = *(ulong *)(puVar12 + -0x90);
  lVar36 = *(long *)(puVar12 + -0x88);
  if (lVar36 == 0) {
    return;
  }
  goto LAB_1060472b0;
LAB_1060411dc:
  do {
    uVar34 = uVar33;
    puVar48 = puVar48 + uVar38 * 3;
    puVar28 = (undefined8 *)(puVar12 + uVar38 * 0x18 + -0x4f0);
    uVar16 = *puVar48;
    puVar28[1] = puVar48[1];
    *puVar28 = uVar16;
    puVar28[2] = puVar48[2];
    uVar16 = *puVar28;
    uVar38 = puVar28[1];
    uVar37 = puVar28[-2];
    uVar33 = uVar38;
    if (uVar37 <= uVar38) {
      uVar33 = uVar37;
    }
    iVar14 = _memcmp(uVar16,puVar28[-3],uVar33);
    lVar29 = uVar38 - uVar37;
    if (iVar14 != 0) {
      lVar29 = (long)iVar14;
    }
    if (lVar29 < 0) {
      uVar49 = puVar28[2];
      lVar29 = lVar36;
      do {
        lVar41 = lVar29;
        puVar28 = (undefined8 *)(puVar12 + -0x4f0);
        puVar48 = (undefined8 *)((long)puVar28 + lVar41);
        puVar48[1] = puVar48[-2];
        *puVar48 = puVar48[-3];
        puVar48[2] = puVar48[-1];
        if (lVar41 + -0x18 == 0) goto LAB_1060411bc;
        uVar33 = *(ulong *)(puVar12 + lVar41 + -0x518);
        uVar25 = uVar38;
        if (uVar33 <= uVar38) {
          uVar25 = uVar33;
        }
        iVar14 = _memcmp(uVar16,*(undefined8 *)(puVar12 + lVar41 + -0x520),uVar25);
        lVar44 = uVar38 - uVar33;
        if (iVar14 != 0) {
          lVar44 = (long)iVar14;
        }
        lVar29 = lVar41 + -0x18;
      } while (lVar44 < 0);
      puVar28 = (undefined8 *)(puVar12 + lVar41 + -0x508);
LAB_1060411bc:
      *puVar28 = uVar16;
      puVar28[1] = uVar38;
      puVar28[2] = uVar49;
      uVar25 = *(ulong *)(puVar12 + -0x518);
    }
    lVar36 = lVar36 + 0x18;
    uVar33 = uVar34;
    if (uVar34 < uVar25) {
      uVar33 = uVar34 + 1;
    }
    puVar48 = *(undefined8 **)(puVar12 + -0x4f8);
    uVar38 = uVar34;
  } while (uVar34 < uVar25);
LAB_106041280:
  if (uVar30 < *(ulong *)(puVar12 + -0x500)) {
    lVar36 = *(long *)(puVar12 + -0x510);
    lVar29 = 0x18;
    puVar28 = puVar43;
    do {
      uVar38 = uVar30 + 1;
      puVar19 = (undefined8 *)(*(long *)(puVar12 + -0x508) + uVar30 * 0x18);
      puVar24 = puVar43 + uVar30 * 3;
      uVar16 = *puVar19;
      puVar24[1] = puVar19[1];
      *puVar24 = uVar16;
      puVar24[2] = puVar19[2];
      uVar16 = *puVar24;
      uVar30 = puVar24[1];
      uVar33 = puVar24[-2];
      uVar25 = uVar30;
      if (uVar33 <= uVar30) {
        uVar25 = uVar33;
      }
      iVar14 = _memcmp(uVar16,puVar24[-3],uVar25);
      lVar41 = uVar30 - uVar33;
      if (iVar14 != 0) {
        lVar41 = (long)iVar14;
      }
      if (lVar41 < 0) {
        *(undefined8 *)(puVar12 + -0x510) = puVar24[2];
        puVar48 = puVar28;
        lVar41 = lVar29;
        do {
          puVar19 = puVar48 + lVar36;
          puVar19[1] = puVar19[-2];
          *puVar19 = puVar19[-3];
          puVar19[2] = puVar19[-1];
          puVar24 = puVar43;
          if (lVar36 * 8 - lVar41 == 0) goto LAB_1060412a8;
          uVar33 = puVar19[-5];
          uVar25 = uVar30;
          if (uVar33 <= uVar30) {
            uVar25 = uVar33;
          }
          iVar14 = _memcmp(uVar16,puVar19[-6],uVar25);
          lVar44 = uVar30 - uVar33;
          if (iVar14 != 0) {
            lVar44 = (long)iVar14;
          }
          lVar41 = lVar41 + 0x18;
          puVar48 = puVar48 + -3;
        } while (lVar44 < 0);
        puVar24 = puVar48 + lVar36;
LAB_1060412a8:
        puVar48 = *(undefined8 **)(puVar12 + -0x4f8);
        *puVar24 = uVar16;
        puVar24[1] = uVar30;
        puVar24[2] = *(undefined8 *)(puVar12 + -0x510);
      }
      lVar29 = lVar29 + -0x18;
      puVar28 = puVar28 + 3;
      uVar30 = uVar38;
    } while (uVar38 < *(ulong *)(puVar12 + -0x500));
  }
  lVar36 = *(long *)(puVar12 + -0x520) * 0x18;
  puVar28 = (undefined8 *)(puVar12 + -0x4f0);
  puVar19 = puVar28 + *(long *)(puVar12 + -0x520) * 3 + -3;
  puVar24 = puVar43 + -3;
  lVar29 = *(long *)(puVar12 + -0x518);
  do {
    puVar46 = puVar48;
    lVar36 = lVar36 + -0x18;
    puVar48 = (undefined8 *)(*(long *)(puVar12 + -0x4f8) + lVar36);
    uVar30 = puVar43[1];
    uVar33 = puVar28[1];
    uVar25 = uVar30;
    if (uVar33 <= uVar30) {
      uVar25 = uVar33;
    }
    iVar14 = _memcmp(*puVar43,*puVar28,uVar25);
    uVar25 = uVar30 - uVar33;
    if (iVar14 != 0) {
      uVar25 = (long)iVar14;
    }
    puVar2 = puVar28;
    if (0x7fffffffffffffff < uVar25) {
      puVar2 = puVar43;
    }
    uVar16 = *puVar2;
    puVar46[1] = puVar2[1];
    *puVar46 = uVar16;
    puVar46[2] = puVar2[2];
    puVar43 = puVar43 + ((long)uVar25 >> 0x3f) * -3;
    puVar28 = (undefined8 *)((long)puVar28 + ((ulong)~(uint)((long)uVar25 >> 0x3f) & 0x18));
    uVar30 = puVar19[1];
    uVar33 = puVar24[1];
    uVar25 = uVar30;
    if (uVar33 <= uVar30) {
      uVar25 = uVar33;
    }
    iVar14 = _memcmp(*puVar19,*puVar24,uVar25);
    uVar25 = uVar30 - uVar33;
    if (iVar14 != 0) {
      uVar25 = (long)iVar14;
    }
    puVar2 = puVar19;
    if (0x7fffffffffffffff < uVar25) {
      puVar2 = puVar24;
    }
    uVar16 = *puVar2;
    puVar48[1] = puVar2[1];
    *puVar48 = uVar16;
    puVar48[2] = puVar2[2];
    uVar1 = (uint)((long)uVar25 >> 0x3f);
    puVar19 = puVar19 + (long)(int)~uVar1 * 3;
    puVar24 = puVar24 + (long)(int)uVar1 * 3;
    lVar29 = lVar29 + -1;
    puVar48 = puVar46 + 3;
  } while (lVar29 != 0);
  if ((*(ulong *)(puVar12 + -0x520) & 1) != 0) {
    bVar13 = puVar24 + 3 <= puVar28;
    puVar48 = puVar28;
    if (bVar13) {
      puVar48 = puVar43;
    }
    uVar16 = *puVar48;
    puVar46[4] = puVar48[1];
    puVar46[3] = uVar16;
    puVar46[5] = puVar48[2];
    lVar36 = 0x18;
    if (bVar13) {
      lVar36 = 0;
    }
    puVar28 = (undefined8 *)((long)puVar28 + lVar36);
    lVar36 = 0;
    if (bVar13) {
      lVar36 = 0x18;
    }
    puVar43 = (undefined8 *)((long)puVar43 + lVar36);
  }
  if (puVar28 == puVar24 + 3 && puVar43 == puVar19 + 3) {
    return;
  }
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1060414cc);
  (*pcVar9)();
LAB_106044a40:
  uVar25 = auVar57._8_8_;
  puVar51 = auVar57._0_8_;
  if (uVar25 < 2) {
    return;
  }
  if (puVar50 < (ulong *)(uVar25 + 0x10)) goto LAB_1060450fc;
  uVar30 = uVar25 >> 1;
  puVar50 = puVar51 + uVar30 * 4;
  puVar22 = puVar21 + uVar30 * 4;
  if (uVar25 < 8) {
    uVar33 = *puVar51;
    uVar37 = puVar51[3];
    uVar38 = puVar51[2];
    puVar21[1] = puVar51[1];
    *puVar21 = uVar33;
    puVar21[3] = uVar37;
    puVar21[2] = uVar38;
    uVar33 = *puVar50;
    uVar37 = puVar50[3];
    uVar38 = puVar50[2];
    puVar22[1] = puVar50[1];
    *puVar22 = uVar33;
    puVar22[3] = uVar37;
    puVar22[2] = uVar38;
    uVar33 = 1;
    uVar37 = uVar25 - uVar30;
    lVar29 = 0x20;
    lVar36 = lVar29;
    uVar38 = uVar33;
    if (1 < uVar30) goto LAB_106044e1c;
  }
  else {
    FUN_106040c98(puVar51,puVar21);
    FUN_106040c98(puVar50,puVar22);
    uVar33 = 4;
    uVar37 = uVar25 - uVar30;
    lVar29 = 0x80;
    lVar36 = lVar29;
    uVar38 = uVar33;
    if (4 < uVar30) {
LAB_106044e1c:
      do {
        uVar34 = uVar38 + 1;
        puVar17 = puVar51 + uVar38 * 4;
        puVar20 = puVar21 + uVar38 * 4;
        uVar35 = *puVar17;
        uVar42 = puVar17[3];
        uVar40 = puVar17[2];
        puVar20[1] = puVar17[1];
        *puVar20 = uVar35;
        puVar20[3] = uVar42;
        puVar20[2] = uVar40;
        puVar17 = puVar20 + -4;
        uVar35 = puVar20[2];
        uVar40 = *puVar20;
        if ((uVar35 < puVar20[-2]) || (uVar35 <= puVar20[-2] && uVar40 < *puVar17)) {
          uVar39 = puVar20[1];
          uVar42 = puVar20[3];
          puVar20[1] = puVar20[-3];
          *puVar20 = *puVar17;
          puVar20[3] = puVar20[-1];
          puVar20[2] = puVar20[-2];
          lVar41 = lVar36;
          if (uVar38 != 1) {
            do {
              puVar17 = (ulong *)((long)puVar21 + lVar41 + -0x40);
              uVar38 = *(ulong *)((long)puVar21 + lVar41 + -0x30);
              if ((uVar38 <= uVar35) && (uVar38 < uVar35 || *puVar17 <= uVar40)) {
                puVar17 = (ulong *)((long)puVar21 + lVar41 + -0x20);
                break;
              }
              *(undefined8 *)((long)puVar21 + lVar41 + -0x18) =
                   *(undefined8 *)((long)puVar21 + lVar41 + -0x38);
              *(ulong *)((long)puVar21 + lVar41 + -0x20) = *puVar17;
              *(undefined8 *)((long)puVar21 + lVar41 + -8) =
                   *(undefined8 *)((long)puVar21 + lVar41 + -0x28);
              *(undefined8 *)((long)puVar21 + lVar41 + -0x10) =
                   *(undefined8 *)((long)puVar21 + lVar41 + -0x30);
              lVar41 = lVar41 + -0x20;
              puVar17 = puVar21;
            } while (lVar41 != 0x20);
          }
          *puVar17 = uVar40;
          puVar17[1] = uVar39;
          puVar17[2] = uVar35;
          puVar17[3] = uVar42;
        }
        lVar36 = lVar36 + 0x20;
        uVar38 = uVar34;
      } while (uVar34 < uVar30);
    }
  }
  if (uVar33 < uVar37) {
    lVar36 = 0x20;
    puVar17 = puVar22;
    do {
      uVar38 = uVar33 + 1;
      puVar20 = puVar50 + uVar33 * 4;
      puVar47 = puVar22 + uVar33 * 4;
      uVar34 = *puVar20;
      uVar40 = puVar20[3];
      uVar35 = puVar20[2];
      puVar47[1] = puVar20[1];
      *puVar47 = uVar34;
      puVar47[3] = uVar40;
      puVar47[2] = uVar35;
      puVar20 = puVar47 + -4;
      uVar34 = puVar47[2];
      uVar35 = *puVar47;
      if ((uVar34 < puVar47[-2]) || (uVar34 <= puVar47[-2] && uVar35 < *puVar20)) {
        uVar42 = puVar47[1];
        uVar40 = puVar47[3];
        puVar47[1] = puVar47[-3];
        *puVar47 = *puVar20;
        puVar47[3] = puVar47[-1];
        puVar47[2] = puVar47[-2];
        lVar41 = lVar36;
        puVar47 = puVar17;
        if (uVar33 != 1) {
          do {
            puVar20 = (ulong *)((long)puVar47 + lVar29 + -0x40);
            uVar33 = *(ulong *)((long)puVar47 + lVar29 + -0x30);
            if ((uVar33 <= uVar34) && (uVar33 < uVar34 || *puVar20 <= uVar35)) {
              puVar20 = (ulong *)((long)puVar47 + lVar29 + -0x20);
              break;
            }
            *(undefined8 *)((long)puVar47 + lVar29 + -0x18) =
                 *(undefined8 *)((long)puVar47 + lVar29 + -0x38);
            *(ulong *)((long)puVar47 + lVar29 + -0x20) = *puVar20;
            *(undefined8 *)((long)puVar47 + lVar29 + -8) =
                 *(undefined8 *)((long)puVar47 + lVar29 + -0x28);
            *(undefined8 *)((long)puVar47 + lVar29 + -0x10) =
                 *(undefined8 *)((long)puVar47 + lVar29 + -0x30);
            lVar41 = lVar41 + 0x20;
            puVar20 = puVar22;
            puVar47 = puVar47 + -4;
          } while (lVar29 != lVar41);
        }
        *puVar20 = uVar35;
        puVar20[1] = uVar42;
        puVar20[2] = uVar34;
        puVar20[3] = uVar40;
      }
      lVar36 = lVar36 + -0x20;
      puVar17 = puVar17 + 4;
      uVar33 = uVar38;
    } while (uVar38 < uVar37);
  }
  lVar36 = uVar25 * 0x20;
  puVar50 = puVar21 + uVar25 * 4 + -4;
  puVar17 = puVar22 + -4;
  puVar20 = puVar51;
  do {
    puVar47 = puVar20;
    lVar36 = lVar36 + -0x20;
    puVar20 = puVar17;
    if (puVar22[2] < puVar21[2]) {
      uVar33 = 1;
      uVar38 = *puVar22;
      uVar34 = puVar22[3];
      uVar37 = puVar22[2];
      puVar47[1] = puVar22[1];
      *puVar47 = uVar38;
      puVar47[3] = uVar34;
      puVar47[2] = uVar37;
      uVar38 = puVar50[2];
      uVar37 = puVar17[2];
      if (uVar37 <= uVar38) goto LAB_106044fac;
LAB_106045078:
      bVar13 = true;
    }
    else {
      uVar1 = (uint)(puVar22[2] <= puVar21[2] && *puVar22 < *puVar21);
      uVar33 = (ulong)uVar1;
      puVar52 = puVar22;
      if (uVar1 == 0) {
        puVar52 = puVar21;
      }
      uVar38 = *puVar52;
      uVar34 = puVar52[3];
      uVar37 = puVar52[2];
      puVar47[1] = puVar52[1];
      *puVar47 = uVar38;
      puVar47[3] = uVar34;
      puVar47[2] = uVar37;
      uVar38 = puVar50[2];
      uVar37 = puVar17[2];
      if (uVar38 < uVar37) goto LAB_106045078;
LAB_106044fac:
      bVar13 = uVar38 <= uVar37 && *puVar50 < *puVar17;
      if (uVar38 > uVar37 || *puVar50 >= *puVar17) {
        puVar20 = puVar50;
      }
    }
    puVar52 = (ulong *)((long)puVar51 + lVar36);
    puVar22 = puVar22 + uVar33 * 4;
    puVar21 = puVar21 + ((ulong)~(uint)uVar33 & 1) * 4;
    uVar33 = *puVar20;
    uVar37 = puVar20[3];
    uVar38 = puVar20[2];
    puVar52[1] = puVar20[1];
    *puVar52 = uVar33;
    puVar52[3] = uVar37;
    puVar52[2] = uVar38;
    puVar52 = puVar50 + (ulong)bVar13 * 4;
    puVar50 = puVar52 + -4;
    puVar17 = puVar17 + (ulong)bVar13 * -4;
    uVar30 = uVar30 - 1;
    puVar20 = puVar47 + 4;
  } while (uVar30 != 0);
  if ((uVar25 & 1) != 0) {
    bVar13 = puVar17 + 4 <= puVar21;
    puVar50 = puVar21;
    if (bVar13) {
      puVar50 = puVar22;
    }
    uVar25 = *puVar50;
    uVar33 = puVar50[3];
    uVar30 = puVar50[2];
    puVar47[5] = puVar50[1];
    puVar47[4] = uVar25;
    puVar47[7] = uVar33;
    puVar47[6] = uVar30;
    puVar21 = puVar21 + (ulong)!bVar13 * 4;
    puVar22 = puVar22 + (ulong)bVar13 * 4;
  }
  if ((puVar21 == puVar17 + 4) && (puVar22 == puVar52)) {
    return;
  }
LAB_1060450f8:
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_1060450fc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x106045100);
  (*pcVar9)();
}

