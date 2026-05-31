
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

void __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E
               (ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
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
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined8 uVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong *puVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  undefined8 *puVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  ulong uVar46;
  undefined8 uVar47;
  ulong *puVar48;
  ulong *puVar49;
  ulong *puVar50;
  undefined1 *puVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulong *puStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar51 = &stack0xfffffffffffffff0;
  puStack_88 = param_7;
  if ((ulong *)0x20 < param_2) {
    puStack_90 = param_3 + -4;
    uVar46 = param_5;
    puVar24 = param_2;
    puVar48 = param_6;
LAB_106044ab0:
    do {
      if ((int)uVar46 == 0) {
        func_0x000106042300(param_1,puVar24,param_3,param_4,1,puStack_88);
        return;
      }
      puVar16 = param_1 + ((ulong)puVar24 >> 3) * 0x10;
      puVar21 = param_1 + ((ulong)puVar24 >> 3) * 0x1c;
      if (puVar24 < (ulong *)0x40) {
        uVar35 = *param_1;
        uVar26 = param_1[2];
        uVar31 = puVar16[2];
        puVar50 = param_1;
        if (uVar26 < uVar31) {
          uVar36 = *puVar21;
          uVar37 = puVar21[2];
          if ((uVar26 < uVar37) || (uVar26 <= uVar37 && uVar35 < uVar36)) {
LAB_106044b34:
            bVar13 = true;
LAB_106044b38:
            puVar50 = puVar21;
            if (bVar13 == (uVar31 < uVar37 || uVar31 == uVar37 && *puVar16 < uVar36)) {
              puVar50 = puVar16;
            }
          }
        }
        else {
          bVar13 = uVar26 == uVar31 && uVar35 < *puVar16;
          uVar36 = *puVar21;
          uVar37 = puVar21[2];
          if (uVar26 < uVar37) {
            if (bVar13) goto LAB_106044b34;
          }
          else if (bVar13 == (uVar26 == uVar37 && uVar35 < uVar36)) goto LAB_106044b38;
        }
      }
      else {
        puVar50 = (ulong *)FUN_106040728(param_1);
      }
      uVar46 = (ulong)((int)uVar46 - 1);
      puVar21 = (ulong *)((ulong)((long)puVar50 - (long)param_1) >> 5);
      uStack_78 = puVar50[1];
      uStack_80 = *puVar50;
      uStack_68 = puVar50[3];
      uStack_70 = puVar50[2];
      puVar16 = param_3 + (long)puVar24 * 4;
      if (puVar48 == (ulong *)0x0) {
LAB_106044b9c:
        if (param_4 < puVar24) goto LAB_1060450fc;
        param_2 = (ulong *)0x0;
        puVar22 = param_1;
        puVar17 = puVar16;
        puVar49 = puVar21;
        while( true ) {
          for (puVar18 = puVar22; puVar18 < param_1 + (long)puVar49 * 4; puVar18 = puVar18 + 4) {
            puVar22 = param_3;
            if (puVar18[2] < puVar50[2]) {
              uVar31 = 1;
            }
            else {
              uVar1 = (uint)(puVar18[2] <= puVar50[2] && *puVar18 < *puVar50);
              uVar31 = (ulong)uVar1;
              if (uVar1 == 0) {
                puVar22 = puVar17 + -4;
              }
            }
            puVar17 = puVar17 + -4;
            puVar22 = puVar22 + (long)param_2 * 4;
            uVar35 = *puVar18;
            uVar36 = puVar18[3];
            uVar26 = puVar18[2];
            puVar22[1] = puVar18[1];
            *puVar22 = uVar35;
            puVar22[3] = uVar36;
            puVar22[2] = uVar26;
            param_2 = (ulong *)(uVar31 + (long)param_2);
          }
          if (puVar49 == puVar24) break;
          puVar17 = puVar17 + -4;
          puVar22 = puVar18 + 4;
          uVar31 = *puVar18;
          uVar26 = puVar18[3];
          uVar35 = puVar18[2];
          puVar49 = puVar17 + (long)param_2 * 4;
          puVar49[1] = puVar18[1];
          *puVar49 = uVar31;
          puVar49[3] = uVar26;
          puVar49[2] = uVar35;
          puVar49 = puVar24;
        }
        _memcpy(param_1,param_3,(long)param_2 << 5);
        lVar34 = (long)puVar24 - (long)param_2;
        if (lVar34 != 0) {
          puVar22 = puStack_90 + (long)puVar24 * 4;
          lVar29 = lVar34;
          puVar17 = param_1 + (long)param_2 * 4;
          do {
            uVar31 = *puVar22;
            uVar26 = puVar22[3];
            uVar35 = puVar22[2];
            puVar17[1] = puVar22[1];
            *puVar17 = uVar31;
            puVar17[3] = uVar26;
            puVar17[2] = uVar35;
            lVar29 = lVar29 + -1;
            puVar22 = puVar22 + -4;
            puVar17 = puVar17 + 4;
          } while (lVar29 != 0);
        }
        if (param_2 != (ulong *)0x0) {
          if (puVar24 < param_2) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
            goto LAB_1060450f8;
          }
          param_6 = &uStack_80;
          param_5 = uVar46;
          param_7 = puStack_88;
          __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E
                    (param_1 + (long)param_2 * 4,lVar34,param_3,param_4);
          puVar24 = param_2;
          if (param_2 < (ulong *)0x21) break;
          goto LAB_106044ab0;
        }
      }
      else if ((puVar48[2] < puVar50[2]) || (puVar48[2] <= puVar50[2] && *puVar48 < *puVar50))
      goto LAB_106044b9c;
      if (param_4 < puVar24) goto LAB_1060450fc;
      puVar48 = (ulong *)0x0;
      puVar22 = param_1;
      while( true ) {
        for (puVar17 = puVar22; puVar17 < param_1 + (long)puVar21 * 4; puVar17 = puVar17 + 4) {
          uVar31 = puVar17[2];
          uVar35 = puVar50[2];
          if (uVar35 < uVar31) {
            uVar26 = 0;
            puVar22 = puVar16 + -4;
          }
          else {
            uVar26 = (ulong)(uVar31 < uVar35 || *puVar17 <= *puVar50);
            puVar22 = param_3;
            if (uVar31 >= uVar35 && *puVar17 > *puVar50) {
              puVar22 = puVar16 + -4;
            }
          }
          puVar16 = puVar16 + -4;
          puVar22 = puVar22 + (long)puVar48 * 4;
          uVar31 = *puVar17;
          uVar36 = puVar17[3];
          uVar35 = puVar17[2];
          puVar22[1] = puVar17[1];
          *puVar22 = uVar31;
          puVar22[3] = uVar36;
          puVar22[2] = uVar35;
          puVar48 = (ulong *)(uVar26 + (long)puVar48);
        }
        if (puVar21 == puVar24) break;
        puVar16 = puVar16 + -4;
        puVar22 = puVar17 + 4;
        uVar31 = *puVar17;
        uVar26 = puVar17[3];
        uVar35 = puVar17[2];
        puVar21 = param_3 + (long)puVar48 * 4;
        puVar21[1] = puVar17[1];
        *puVar21 = uVar31;
        puVar21[3] = uVar26;
        puVar21[2] = uVar35;
        puVar48 = (ulong *)((long)puVar48 + 1);
        puVar21 = puVar24;
      }
      _memcpy(param_1,param_3,(long)puVar48 << 5);
      param_2 = (ulong *)((long)puVar24 - (long)puVar48);
      if (param_2 == (ulong *)0x0) {
        return;
      }
      param_1 = param_1 + (long)puVar48 * 4;
      auVar5._8_8_ = puVar24;
      auVar5._0_8_ = param_1;
      puVar17 = puStack_90 + (long)puVar24 * 4;
      puVar22 = param_2;
      puVar49 = param_1;
      do {
        uVar31 = *puVar17;
        uVar26 = puVar17[3];
        uVar35 = puVar17[2];
        puVar49[1] = puVar17[1];
        *puVar49 = uVar31;
        puVar49[3] = uVar26;
        puVar49[2] = uVar35;
        puVar22 = (ulong *)((long)puVar22 + -1);
        puVar17 = puVar17 + -4;
        puVar49 = puVar49 + 4;
      } while (puVar22 != (ulong *)0x0);
      if (puVar24 < puVar48) {
        puVar22 = (ulong *)&UNK_10b4ae618;
        puVar17 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                     (puVar48,puVar24,puVar24);
        puVar24 = puVar21;
        _memcpy(param_1,param_3);
        uVar52 = 0x106045134;
        auVar55 = __Unwind_Resume(puVar17);
        ppuVar10 = &puStack_90;
        while( true ) {
          *(ulong **)((long)ppuVar10 + -0x60) = puVar16;
          *(ulong **)((long)ppuVar10 + -0x58) = puVar50;
          *(ulong **)((long)ppuVar10 + -0x50) = puVar48;
          *(long *)((long)ppuVar10 + -0x48) = auVar5._8_8_;
          *(ulong *)((long)ppuVar10 + -0x40) = uVar46;
          *(ulong **)((long)ppuVar10 + -0x38) = puVar21;
          *(ulong **)((long)ppuVar10 + -0x30) = param_4;
          *(ulong **)((long)ppuVar10 + -0x28) = puVar17;
          *(long *)((long)ppuVar10 + -0x20) = auVar5._0_8_;
          *(ulong **)((long)ppuVar10 + -0x18) = param_3;
          *(undefined1 **)((long)ppuVar10 + -0x10) = puVar51;
          *(undefined8 *)((long)ppuVar10 + -8) = uVar52;
          puVar51 = (undefined1 *)((long)ppuVar10 + -0x10);
          *(ulong **)((long)ppuVar10 + -0x78) = param_7;
          if (auVar55._8_8_ < 0x21) break;
          *(ulong **)((long)ppuVar10 + -0x80) = puVar24 + -2;
          uVar46 = param_5;
          puVar48 = param_6;
          auVar5 = auVar55;
          while( true ) {
            puVar18 = auVar5._8_8_;
            puVar49 = auVar5._0_8_;
            if ((int)param_5 == 0) {
              FUN_1060428fc(puVar49,puVar18,puVar24,puVar22,1,
                            *(undefined8 *)((long)ppuVar10 + -0x78));
              return;
            }
            if (puVar18 < (ulong *)0x40) {
              uVar31 = *puVar49;
              uVar35 = puVar49[((ulong)puVar18 >> 3) * 8];
              uVar26 = puVar49[((ulong)puVar18 >> 3) * 0xe];
              puVar16 = puVar49 + ((ulong)puVar18 >> 3) * 0xe;
              if (uVar31 < uVar35 == uVar35 < uVar26) {
                puVar16 = puVar49 + ((ulong)puVar18 >> 3) * 8;
              }
              puVar50 = puVar49;
              if (uVar31 < uVar35 == uVar31 < uVar26) {
                puVar50 = puVar16;
              }
            }
            else {
              puVar50 = (ulong *)FUN_10604065c(puVar49);
            }
            param_5 = (ulong)((int)param_5 - 1);
            puVar16 = (ulong *)((long)puVar50 - (long)puVar49);
            puVar21 = (ulong *)((ulong)puVar16 >> 4);
            uVar35 = *puVar50;
            uVar31 = *puVar50;
            *(ulong *)((long)ppuVar10 + -0x68) = puVar50[1];
            *(ulong *)((long)ppuVar10 + -0x70) = uVar35;
            puVar50 = puVar24 + (long)puVar18 * 2;
            if ((puVar48 == (ulong *)0x0) || (*puVar48 < uVar31)) break;
LAB_1060453fc:
            if (puVar22 < puVar18) goto LAB_106045908;
            puVar48 = (ulong *)0x0;
            puVar3 = (undefined *)0x0;
            if ((ulong *)0x2 < puVar21) {
              puVar3 = (undefined *)((long)puVar21 + -3);
            }
            puVar19 = puVar49 + (long)puVar3 * 2;
            puVar17 = puVar49;
            if (puVar19 <= puVar49) goto LAB_1060454ac;
LAB_106045420:
            do {
              bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) < *puVar17;
              puVar32 = puVar24;
              if (bVar13) {
                puVar32 = puVar50 + -2;
              }
              uVar31 = *puVar17;
              (puVar32 + (long)puVar48 * 2)[1] = puVar17[1];
              puVar32[(long)puVar48 * 2] = uVar31;
              if (!bVar13) {
                puVar48 = (ulong *)((long)puVar48 + 1);
              }
              bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) < puVar17[2];
              puVar32 = puVar24;
              if (bVar13) {
                puVar32 = puVar50 + -4;
              }
              uVar31 = puVar17[2];
              (puVar32 + (long)puVar48 * 2)[1] = puVar17[3];
              puVar32[(long)puVar48 * 2] = uVar31;
              if (!bVar13) {
                puVar48 = (ulong *)((long)puVar48 + 1);
              }
              bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) < puVar17[4];
              puVar32 = puVar24;
              if (bVar13) {
                puVar32 = puVar50 + -6;
              }
              uVar31 = puVar17[4];
              (puVar32 + (long)puVar48 * 2)[1] = puVar17[5];
              puVar32[(long)puVar48 * 2] = uVar31;
              if (!bVar13) {
                puVar48 = (ulong *)((long)puVar48 + 1);
              }
              puVar50 = puVar50 + -8;
              bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) < puVar17[6];
              puVar32 = puVar24;
              if (bVar13) {
                puVar32 = puVar50;
              }
              uVar31 = puVar17[6];
              (puVar32 + (long)puVar48 * 2)[1] = puVar17[7];
              puVar32[(long)puVar48 * 2] = uVar31;
              if (!bVar13) {
                puVar48 = (ulong *)((long)puVar48 + 1);
              }
              puVar17 = puVar17 + 8;
            } while (puVar17 < puVar19);
LAB_1060454ac:
            puVar19 = puVar17;
            while (puVar19 < puVar49 + (long)puVar21 * 2) {
              uVar31 = *puVar19;
              puVar32 = puVar19 + 2;
              puVar50 = puVar50 + -2;
              bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) < *puVar19;
              puVar17 = puVar24;
              if (bVar13) {
                puVar17 = puVar50;
              }
              (puVar17 + (long)puVar48 * 2)[1] = puVar19[1];
              puVar17[(long)puVar48 * 2] = uVar31;
              puVar19 = puVar32;
              if (!bVar13) {
                puVar48 = (ulong *)((long)puVar48 + 1);
              }
            }
            if (puVar21 != puVar18) goto code_r0x0001060454e8;
            _memcpy(puVar49,puVar24,(long)puVar48 << 4);
            uVar31 = (long)puVar18 - (long)puVar48;
            if (uVar31 == 0) {
              return;
            }
            puVar49 = puVar49 + (long)puVar48 * 2;
            auVar6._8_8_ = puVar18;
            auVar6._0_8_ = puVar49;
            auVar55._8_8_ = uVar31;
            auVar55._0_8_ = puVar49;
            puVar17 = (ulong *)(*(long *)((long)ppuVar10 + -0x80) + (long)puVar18 * 0x10);
            uVar35 = uVar31;
            puVar19 = puVar49;
            do {
              uVar26 = *puVar17;
              puVar19[1] = puVar17[1];
              *puVar19 = uVar26;
              uVar35 = uVar35 - 1;
              puVar17 = puVar17 + -2;
              puVar19 = puVar19 + 2;
            } while (uVar35 != 0);
            if (puVar18 < puVar48) {
              puVar17 = (ulong *)&UNK_10b4ae618;
              puVar18 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                           (puVar48,puVar18,puVar18);
              puVar19 = puVar22;
              _memcpy(puVar49,puVar24);
              uVar52 = 0x106045940;
              auVar56 = __Unwind_Resume(puVar18);
              puVar11 = (undefined1 *)((long)ppuVar10 + -0x80);
              goto __ZN4core5slice4sort6stable9quicksort9quicksort17h58c6cb561a55387aE;
            }
            puVar48 = (ulong *)0x0;
            auVar5 = auVar55;
            if (uVar31 < 0x21) goto LAB_106045170;
          }
          if (puVar22 < puVar18) goto LAB_106045908;
          puVar17 = (ulong *)0x0;
          puVar3 = (undefined *)0x0;
          if ((ulong *)0x2 < puVar21) {
            puVar3 = (undefined *)((long)puVar21 + -3);
          }
          puVar32 = puVar49 + (long)puVar3 * 2;
          puVar27 = puVar50;
          puVar19 = puVar49;
          puVar30 = puVar21;
          if (puVar32 <= puVar49) goto LAB_106045328;
LAB_10604529c:
          do {
            bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) <= *puVar19;
            puVar33 = puVar24;
            if (bVar13) {
              puVar33 = puVar27 + -2;
            }
            uVar31 = *puVar19;
            (puVar33 + (long)puVar17 * 2)[1] = puVar19[1];
            puVar33[(long)puVar17 * 2] = uVar31;
            if (!bVar13) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) <= puVar19[2];
            puVar33 = puVar24;
            if (bVar13) {
              puVar33 = puVar27 + -4;
            }
            uVar31 = puVar19[2];
            (puVar33 + (long)puVar17 * 2)[1] = puVar19[3];
            puVar33[(long)puVar17 * 2] = uVar31;
            if (!bVar13) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) <= puVar19[4];
            puVar33 = puVar24;
            if (bVar13) {
              puVar33 = puVar27 + -6;
            }
            uVar31 = puVar19[4];
            (puVar33 + (long)puVar17 * 2)[1] = puVar19[5];
            puVar33[(long)puVar17 * 2] = uVar31;
            if (!bVar13) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            puVar27 = puVar27 + -8;
            bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) <= puVar19[6];
            puVar33 = puVar24;
            if (bVar13) {
              puVar33 = puVar27;
            }
            uVar31 = puVar19[6];
            (puVar33 + (long)puVar17 * 2)[1] = puVar19[7];
            puVar33[(long)puVar17 * 2] = uVar31;
            if (!bVar13) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            puVar19 = puVar19 + 8;
          } while (puVar19 < puVar32);
LAB_106045328:
          puVar32 = puVar19;
          while (puVar32 < puVar49 + (long)puVar30 * 2) {
            uVar31 = *puVar32;
            puVar33 = puVar32 + 2;
            puVar27 = puVar27 + -2;
            bVar13 = *(ulong *)((long)puVar49 + (long)puVar16) <= *puVar32;
            puVar19 = puVar24;
            if (bVar13) {
              puVar19 = puVar27;
            }
            (puVar19 + (long)puVar17 * 2)[1] = puVar32[1];
            puVar19[(long)puVar17 * 2] = uVar31;
            puVar32 = puVar33;
            if (!bVar13) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          if (puVar30 != puVar18) goto code_r0x000106045364;
          _memcpy(puVar49,puVar24,(long)puVar17 << 4);
          lVar34 = (long)puVar18 - (long)puVar17;
          auVar55._8_8_ = lVar34;
          auVar55._0_8_ = puVar49 + (long)puVar17 * 2;
          if (lVar34 != 0) {
            puVar19 = (ulong *)(*(long *)((long)ppuVar10 + -0x80) + (long)puVar18 * 0x10);
            puVar32 = puVar49 + (long)puVar17 * 2;
            do {
              uVar31 = *puVar19;
              puVar32[1] = puVar19[1];
              *puVar32 = uVar31;
              lVar34 = lVar34 + -1;
              puVar19 = puVar19 + -2;
              puVar32 = puVar32 + 2;
            } while (lVar34 != 0);
          }
          if (puVar17 == (ulong *)0x0) goto LAB_1060453fc;
          if (puVar18 < puVar17) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
            goto LAB_106045904;
          }
          param_6 = (ulong *)((long)ppuVar10 + -0x70);
          param_7 = *(ulong **)((long)ppuVar10 + -0x78);
          uVar52 = 0x1060453ec;
          ppuVar10 = (ulong **)((long)ppuVar10 + -0x80);
          param_3 = puVar24;
          param_4 = puVar22;
          uVar46 = param_5;
        }
LAB_106045170:
        uVar46 = auVar55._8_8_;
        puVar48 = auVar55._0_8_;
        if (uVar46 < 2) {
          return;
        }
        if (puVar22 < (ulong *)(uVar46 + 0x10)) goto LAB_106045908;
        uVar31 = uVar46 >> 1;
        if (uVar46 < 0x10) {
          if (uVar46 < 8) {
            uVar35 = *puVar48;
            puVar24[1] = puVar48[1];
            *puVar24 = uVar35;
            uVar35 = puVar48[uVar31 * 2];
            (puVar24 + uVar31 * 2)[1] = (puVar48 + uVar31 * 2)[1];
            puVar24[uVar31 * 2] = uVar35;
            uVar35 = 1;
            uVar26 = uVar46 - uVar31;
            if (1 < uVar31) goto LAB_106045704;
          }
          else {
            puVar16 = puVar48 + (ulong)(*puVar48 > puVar48[2]) * 2;
            puVar21 = puVar48 + (ulong)(*puVar48 <= puVar48[2]) * 2;
            lVar34 = 0x30;
            if (puVar48[4] <= puVar48[6]) {
              lVar34 = 0x20;
            }
            puVar50 = (ulong *)((long)puVar48 + lVar34);
            lVar34 = 0x20;
            if (puVar48[4] <= puVar48[6]) {
              lVar34 = 0x30;
            }
            puVar22 = (ulong *)((long)puVar48 + lVar34);
            puVar17 = puVar50;
            if (*puVar21 <= *puVar22) {
              puVar17 = puVar21;
            }
            puVar49 = puVar21;
            puVar18 = puVar16;
            if (*puVar16 <= *puVar50) {
              puVar49 = puVar50;
              puVar18 = puVar17;
              puVar50 = puVar16;
            }
            puVar16 = puVar22;
            if (*puVar21 <= *puVar22) {
              puVar16 = puVar49;
              puVar21 = puVar22;
            }
            puVar22 = puVar18;
            if (*puVar18 <= *puVar16) {
              puVar22 = puVar16;
              puVar16 = puVar18;
            }
            uVar35 = *puVar50;
            uVar36 = puVar16[1];
            uVar26 = *puVar16;
            puVar24[1] = puVar50[1];
            *puVar24 = uVar35;
            puVar24[3] = uVar36;
            puVar24[2] = uVar26;
            uVar35 = *puVar22;
            uVar36 = puVar21[1];
            uVar26 = *puVar21;
            puVar24[5] = puVar22[1];
            puVar24[4] = uVar35;
            puVar24[7] = uVar36;
            puVar24[6] = uVar26;
            puVar16 = puVar48 + uVar31 * 2;
            lVar34 = 0x30;
            if (puVar16[4] <= puVar16[6]) {
              lVar34 = 0x20;
            }
            puVar22 = (ulong *)((long)puVar16 + lVar34);
            puVar21 = puVar16 + (ulong)(*puVar16 > puVar16[2]) * 2;
            puVar50 = puVar16 + (ulong)(*puVar16 <= puVar16[2]) * 2;
            lVar34 = 0x20;
            if (puVar16[4] <= puVar16[6]) {
              lVar34 = 0x30;
            }
            puVar16 = (ulong *)((long)puVar16 + lVar34);
            puVar17 = puVar22;
            if (*puVar50 <= *puVar16) {
              puVar17 = puVar50;
            }
            puVar49 = puVar50;
            puVar18 = puVar21;
            if (*puVar21 <= *puVar22) {
              puVar49 = puVar22;
              puVar18 = puVar17;
              puVar22 = puVar21;
            }
            puVar21 = puVar24 + uVar31 * 2;
            puVar17 = puVar16;
            if (*puVar50 <= *puVar16) {
              puVar17 = puVar49;
              puVar50 = puVar16;
            }
            puVar16 = puVar18;
            if (*puVar18 <= *puVar17) {
              puVar16 = puVar17;
              puVar17 = puVar18;
            }
            uVar35 = *puVar22;
            uVar36 = puVar17[1];
            uVar26 = *puVar17;
            puVar21[1] = puVar22[1];
            *puVar21 = uVar35;
            puVar21[3] = uVar36;
            puVar21[2] = uVar26;
            uVar35 = *puVar16;
            uVar36 = puVar50[1];
            uVar26 = *puVar50;
            puVar21[5] = puVar16[1];
            puVar21[4] = uVar35;
            puVar21[7] = uVar36;
            puVar21[6] = uVar26;
            uVar35 = 4;
            uVar26 = uVar46 - uVar31;
            if (4 < uVar31) {
LAB_106045704:
              lVar34 = uVar35 << 4;
              uVar36 = uVar35;
              do {
                uVar37 = uVar36 + 1;
                puVar16 = puVar24 + uVar36 * 2;
                uVar39 = puVar48[uVar36 * 2];
                puVar16[1] = (puVar48 + uVar36 * 2)[1];
                *puVar16 = uVar39;
                uVar36 = *puVar16;
                if (uVar36 < puVar16[-2]) {
                  uVar39 = puVar16[1];
                  lVar29 = lVar34;
                  do {
                    puVar28 = (undefined8 *)((long)puVar24 + lVar29);
                    puVar28[1] = puVar28[-1];
                    *puVar28 = puVar28[-2];
                    lVar29 = lVar29 + -0x10;
                    puVar16 = puVar24;
                    if (lVar29 == 0) goto LAB_106045718;
                  } while (uVar36 < (ulong)puVar28[-4]);
                  puVar16 = (ulong *)((long)puVar24 + lVar29);
LAB_106045718:
                  *puVar16 = uVar36;
                  puVar16[1] = uVar39;
                }
                lVar34 = lVar34 + 0x10;
                uVar36 = uVar37;
              } while (uVar37 < uVar31);
            }
          }
        }
        else {
          FUN_106040e2c(puVar48,puVar24,puVar24 + uVar46 * 2);
          FUN_106040e2c(puVar48 + uVar31 * 2,puVar24 + uVar31 * 2,puVar24 + uVar46 * 2 + 0x10);
          uVar35 = 8;
          uVar26 = uVar46 - uVar31;
          if (8 < uVar31) goto LAB_106045704;
        }
        puVar16 = puVar24 + uVar31 * 2;
        if (uVar35 < uVar26) {
          lVar34 = 0x10;
          uVar36 = uVar35;
          puVar21 = puVar16;
          do {
            uVar37 = uVar36 + 1;
            puVar50 = puVar16 + uVar36 * 2;
            uVar39 = puVar48[uVar31 * 2 + uVar36 * 2];
            puVar50[1] = (puVar48 + uVar31 * 2 + uVar36 * 2)[1];
            *puVar50 = uVar39;
            uVar36 = *puVar50;
            if (uVar36 < puVar50[-2]) {
              uVar39 = puVar50[1];
              lVar29 = lVar34;
              puVar50 = puVar21;
              do {
                puVar22 = puVar50 + uVar35 * 2;
                puVar22[1] = puVar22[-1];
                *puVar22 = puVar22[-2];
                puVar17 = puVar16;
                if (uVar35 * 0x10 - lVar29 == 0) goto LAB_1060457a8;
                puVar50 = puVar50 + -2;
                lVar29 = lVar29 + 0x10;
              } while (uVar36 < puVar22[-4]);
              puVar17 = puVar50 + uVar35 * 2;
LAB_1060457a8:
              *puVar17 = uVar36;
              puVar17[1] = uVar39;
            }
            lVar34 = lVar34 + -0x10;
            puVar21 = puVar21 + 2;
            uVar36 = uVar37;
          } while (uVar37 < uVar26);
        }
        lVar34 = uVar46 * 0x10;
        puVar21 = puVar24 + uVar46 * 2 + -2;
        puVar50 = puVar16 + -2;
        puVar22 = puVar48;
        do {
          puVar17 = puVar22;
          lVar34 = lVar34 + -0x10;
          bVar13 = *puVar24 <= *puVar16;
          puVar22 = puVar16;
          if (bVar13) {
            puVar22 = puVar24;
          }
          uVar35 = *puVar22;
          puVar17[1] = puVar22[1];
          *puVar17 = uVar35;
          puVar16 = puVar16 + (ulong)!bVar13 * 2;
          puVar24 = puVar24 + (ulong)bVar13 * 2;
          bVar13 = *puVar50 <= *puVar21;
          puVar22 = puVar50;
          if (bVar13) {
            puVar22 = puVar21;
          }
          uVar35 = *puVar22;
          ((ulong *)((long)puVar48 + lVar34))[1] = puVar22[1];
          *(ulong *)((long)puVar48 + lVar34) = uVar35;
          puVar21 = puVar21 + (ulong)bVar13 * -2;
          puVar50 = puVar50 + (ulong)!bVar13 * -2;
          uVar31 = uVar31 - 1;
          puVar22 = puVar17 + 2;
        } while (uVar31 != 0);
        if ((uVar46 & 1) != 0) {
          bVar13 = puVar50 + 2 <= puVar24;
          puVar48 = puVar24;
          if (bVar13) {
            puVar48 = puVar16;
          }
          uVar46 = *puVar48;
          puVar17[3] = puVar48[1];
          puVar17[2] = uVar46;
          puVar24 = puVar24 + (ulong)!bVar13 * 2;
          puVar16 = puVar16 + (ulong)bVar13 * 2;
        }
        if (puVar24 == puVar50 + 2 && puVar16 == puVar21 + 2) {
          return;
        }
LAB_106045904:
        __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_106045908:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10604590c);
        (*pcVar9)();
      }
      puVar48 = (ulong *)0x0;
      puVar24 = param_2;
    } while ((ulong *)0x20 < param_2);
  }
  if (param_2 < (ulong *)0x2) {
    return;
  }
  if (param_4 < param_2 + 2) goto LAB_1060450fc;
  uVar46 = (ulong)param_2 >> 1;
  puVar24 = param_1 + uVar46 * 4;
  puVar48 = param_3 + uVar46 * 4;
  if (param_2 < (ulong *)0x8) {
    uVar31 = *param_1;
    uVar26 = param_1[3];
    uVar35 = param_1[2];
    param_3[1] = param_1[1];
    *param_3 = uVar31;
    param_3[3] = uVar26;
    param_3[2] = uVar35;
    uVar31 = *puVar24;
    uVar26 = puVar24[3];
    uVar35 = puVar24[2];
    puVar48[1] = puVar24[1];
    *puVar48 = uVar31;
    puVar48[3] = uVar26;
    puVar48[2] = uVar35;
    uVar31 = 1;
    uVar26 = (long)param_2 - uVar46;
    lVar29 = 0x20;
    lVar34 = lVar29;
    uVar35 = uVar31;
    if (1 < uVar46) goto LAB_106044e1c;
  }
  else {
    FUN_106040c98(param_1,param_3);
    FUN_106040c98(puVar24,puVar48);
    uVar31 = 4;
    uVar26 = (long)param_2 - uVar46;
    lVar29 = 0x80;
    lVar34 = lVar29;
    uVar35 = uVar31;
    if (4 < uVar46) {
LAB_106044e1c:
      do {
        uVar36 = uVar35 + 1;
        puVar16 = param_1 + uVar35 * 4;
        puVar21 = param_3 + uVar35 * 4;
        uVar37 = *puVar16;
        uVar41 = puVar16[3];
        uVar39 = puVar16[2];
        puVar21[1] = puVar16[1];
        *puVar21 = uVar37;
        puVar21[3] = uVar41;
        puVar21[2] = uVar39;
        puVar16 = puVar21 + -4;
        uVar37 = puVar21[2];
        uVar39 = *puVar21;
        if ((uVar37 < puVar21[-2]) || (uVar37 <= puVar21[-2] && uVar39 < *puVar16)) {
          uVar38 = puVar21[1];
          uVar41 = puVar21[3];
          puVar21[1] = puVar21[-3];
          *puVar21 = *puVar16;
          puVar21[3] = puVar21[-1];
          puVar21[2] = puVar21[-2];
          lVar40 = lVar34;
          if (uVar35 != 1) {
            do {
              puVar16 = (ulong *)((long)param_3 + lVar40 + -0x40);
              uVar35 = *(ulong *)((long)param_3 + lVar40 + -0x30);
              if ((uVar35 <= uVar37) && (uVar35 < uVar37 || *puVar16 <= uVar39)) {
                puVar16 = (ulong *)((long)param_3 + lVar40 + -0x20);
                break;
              }
              *(undefined8 *)((long)param_3 + lVar40 + -0x18) =
                   *(undefined8 *)((long)param_3 + lVar40 + -0x38);
              *(ulong *)((long)param_3 + lVar40 + -0x20) = *puVar16;
              *(undefined8 *)((long)param_3 + lVar40 + -8) =
                   *(undefined8 *)((long)param_3 + lVar40 + -0x28);
              *(undefined8 *)((long)param_3 + lVar40 + -0x10) =
                   *(undefined8 *)((long)param_3 + lVar40 + -0x30);
              lVar40 = lVar40 + -0x20;
              puVar16 = param_3;
            } while (lVar40 != 0x20);
          }
          *puVar16 = uVar39;
          puVar16[1] = uVar38;
          puVar16[2] = uVar37;
          puVar16[3] = uVar41;
        }
        lVar34 = lVar34 + 0x20;
        uVar35 = uVar36;
      } while (uVar36 < uVar46);
    }
  }
  if (uVar31 < uVar26) {
    lVar34 = 0x20;
    puVar16 = puVar48;
    do {
      uVar35 = uVar31 + 1;
      puVar21 = puVar24 + uVar31 * 4;
      puVar50 = puVar48 + uVar31 * 4;
      uVar36 = *puVar21;
      uVar39 = puVar21[3];
      uVar37 = puVar21[2];
      puVar50[1] = puVar21[1];
      *puVar50 = uVar36;
      puVar50[3] = uVar39;
      puVar50[2] = uVar37;
      puVar21 = puVar50 + -4;
      uVar36 = puVar50[2];
      uVar37 = *puVar50;
      if ((uVar36 < puVar50[-2]) || (uVar36 <= puVar50[-2] && uVar37 < *puVar21)) {
        uVar41 = puVar50[1];
        uVar39 = puVar50[3];
        puVar50[1] = puVar50[-3];
        *puVar50 = *puVar21;
        puVar50[3] = puVar50[-1];
        puVar50[2] = puVar50[-2];
        lVar40 = lVar34;
        puVar50 = puVar16;
        if (uVar31 != 1) {
          do {
            puVar21 = (ulong *)((long)puVar50 + lVar29 + -0x40);
            uVar31 = *(ulong *)((long)puVar50 + lVar29 + -0x30);
            if ((uVar31 <= uVar36) && (uVar31 < uVar36 || *puVar21 <= uVar37)) {
              puVar21 = (ulong *)((long)puVar50 + lVar29 + -0x20);
              break;
            }
            *(undefined8 *)((long)puVar50 + lVar29 + -0x18) =
                 *(undefined8 *)((long)puVar50 + lVar29 + -0x38);
            *(ulong *)((long)puVar50 + lVar29 + -0x20) = *puVar21;
            *(undefined8 *)((long)puVar50 + lVar29 + -8) =
                 *(undefined8 *)((long)puVar50 + lVar29 + -0x28);
            *(undefined8 *)((long)puVar50 + lVar29 + -0x10) =
                 *(undefined8 *)((long)puVar50 + lVar29 + -0x30);
            lVar40 = lVar40 + 0x20;
            puVar21 = puVar48;
            puVar50 = puVar50 + -4;
          } while (lVar29 != lVar40);
        }
        *puVar21 = uVar37;
        puVar21[1] = uVar41;
        puVar21[2] = uVar36;
        puVar21[3] = uVar39;
      }
      lVar34 = lVar34 + -0x20;
      puVar16 = puVar16 + 4;
      uVar31 = uVar35;
    } while (uVar35 < uVar26);
  }
  lVar34 = (long)param_2 * 0x20;
  puVar24 = param_3 + (long)param_2 * 4 + -4;
  puVar16 = puVar48 + -4;
  puVar21 = param_1;
  do {
    puVar50 = puVar21;
    lVar34 = lVar34 + -0x20;
    puVar21 = puVar16;
    if (puVar48[2] < param_3[2]) {
      uVar31 = 1;
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar50[1] = puVar48[1];
      *puVar50 = uVar35;
      puVar50[3] = uVar36;
      puVar50[2] = uVar26;
      uVar35 = puVar24[2];
      uVar26 = puVar16[2];
      if (uVar26 <= uVar35) goto LAB_106044fac;
LAB_106045078:
      bVar13 = true;
    }
    else {
      uVar1 = (uint)(puVar48[2] <= param_3[2] && *puVar48 < *param_3);
      uVar31 = (ulong)uVar1;
      puVar22 = puVar48;
      if (uVar1 == 0) {
        puVar22 = param_3;
      }
      uVar35 = *puVar22;
      uVar36 = puVar22[3];
      uVar26 = puVar22[2];
      puVar50[1] = puVar22[1];
      *puVar50 = uVar35;
      puVar50[3] = uVar36;
      puVar50[2] = uVar26;
      uVar35 = puVar24[2];
      uVar26 = puVar16[2];
      if (uVar35 < uVar26) goto LAB_106045078;
LAB_106044fac:
      bVar13 = uVar35 <= uVar26 && *puVar24 < *puVar16;
      if (uVar35 > uVar26 || *puVar24 >= *puVar16) {
        puVar21 = puVar24;
      }
    }
    puVar22 = (ulong *)((long)param_1 + lVar34);
    puVar48 = puVar48 + uVar31 * 4;
    param_3 = param_3 + ((ulong)~(uint)uVar31 & 1) * 4;
    uVar31 = *puVar21;
    uVar26 = puVar21[3];
    uVar35 = puVar21[2];
    puVar22[1] = puVar21[1];
    *puVar22 = uVar31;
    puVar22[3] = uVar26;
    puVar22[2] = uVar35;
    puVar22 = puVar24 + (ulong)bVar13 * 4;
    puVar24 = puVar22 + -4;
    puVar16 = puVar16 + (ulong)bVar13 * -4;
    uVar46 = uVar46 - 1;
    puVar21 = puVar50 + 4;
  } while (uVar46 != 0);
  if (((ulong)param_2 & 1) != 0) {
    bVar13 = puVar16 + 4 <= param_3;
    puVar24 = param_3;
    if (bVar13) {
      puVar24 = puVar48;
    }
    uVar46 = *puVar24;
    uVar35 = puVar24[3];
    uVar31 = puVar24[2];
    puVar50[5] = puVar24[1];
    puVar50[4] = uVar46;
    puVar50[7] = uVar35;
    puVar50[6] = uVar31;
    param_3 = param_3 + (ulong)!bVar13 * 4;
    puVar48 = puVar48 + (ulong)bVar13 * 4;
  }
  if ((param_3 == puVar16 + 4) && (puVar48 == puVar22)) {
    return;
  }
LAB_1060450f8:
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_1060450fc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x106045100);
  (*pcVar9)();
code_r0x000106045364:
  puVar27 = puVar27 + -2;
  puVar19 = puVar32 + 2;
  uVar31 = *puVar32;
  (puVar27 + (long)puVar17 * 2)[1] = puVar32[1];
  puVar27[(long)puVar17 * 2] = uVar31;
  puVar3 = (undefined *)0x0;
  if ((ulong *)0x2 < puVar18) {
    puVar3 = (undefined *)((long)puVar18 + -3);
  }
  puVar32 = puVar49 + (long)puVar3 * 2;
  puVar30 = puVar18;
  if (puVar19 < puVar32) goto LAB_10604529c;
  goto LAB_106045328;
code_r0x0001060454e8:
  puVar50 = puVar50 + -2;
  puVar17 = puVar19 + 2;
  uVar31 = *puVar19;
  (puVar24 + (long)puVar48 * 2)[1] = puVar19[1];
  puVar24[(long)puVar48 * 2] = uVar31;
  puVar48 = (ulong *)((long)puVar48 + 1);
  puVar3 = (undefined *)0x0;
  if ((ulong *)0x2 < puVar18) {
    puVar3 = (undefined *)((long)puVar18 + -3);
  }
  puVar19 = puVar49 + (long)puVar3 * 2;
  puVar21 = puVar18;
  if (puVar17 < puVar19) goto LAB_106045420;
  goto LAB_1060454ac;
__ZN4core5slice4sort6stable9quicksort9quicksort17h58c6cb561a55387aE:
  *(ulong **)(puVar11 + -0x60) = puVar16;
  *(ulong **)(puVar11 + -0x58) = puVar50;
  *(ulong **)(puVar11 + -0x50) = puVar48;
  *(long *)(puVar11 + -0x48) = auVar6._8_8_;
  *(ulong *)(puVar11 + -0x40) = param_5;
  *(ulong **)(puVar11 + -0x38) = puVar21;
  *(ulong **)(puVar11 + -0x30) = puVar22;
  *(ulong **)(puVar11 + -0x28) = puVar18;
  *(long *)(puVar11 + -0x20) = auVar6._0_8_;
  *(ulong **)(puVar11 + -0x18) = puVar24;
  *(undefined1 **)(puVar11 + -0x10) = puVar51;
  *(undefined8 *)(puVar11 + -8) = uVar52;
  puVar51 = puVar11 + -0x10;
  if (auVar56._8_8_ < 0x21) {
LAB_106045978:
    uVar46 = auVar56._8_8_;
    puVar24 = auVar56._0_8_;
    if (uVar46 < 2) {
      return;
    }
    if (puVar17 < (ulong *)(uVar46 + 0x10)) goto LAB_10604611c;
    uVar31 = uVar46 >> 1;
    if (uVar46 < 8) {
      uVar26 = puVar24[1];
      uVar35 = *puVar24;
      uVar37 = puVar24[3];
      uVar36 = puVar24[2];
      puVar19[4] = puVar24[4];
      puVar19[1] = uVar26;
      *puVar19 = uVar35;
      puVar19[3] = uVar37;
      puVar19[2] = uVar36;
      puVar48 = puVar24 + uVar31 * 5;
      puVar16 = puVar19 + uVar31 * 5;
      uVar26 = puVar48[1];
      uVar35 = *puVar48;
      uVar37 = puVar48[3];
      uVar36 = puVar48[2];
      puVar16[4] = puVar48[4];
      puVar16[1] = uVar26;
      *puVar16 = uVar35;
      puVar16[3] = uVar37;
      puVar16[2] = uVar36;
      uVar35 = 1;
      uVar26 = uVar46 - uVar31;
      if (1 < uVar31) goto LAB_106045e94;
    }
    else {
      puVar16 = puVar24 + (ulong)(puVar24[2] > puVar24[7]) * 5;
      puVar48 = puVar24 + (ulong)(puVar24[2] <= puVar24[7]) * 5;
      lVar34 = 0x78;
      if (puVar24[0xc] <= puVar24[0x11]) {
        lVar34 = 0x50;
      }
      puVar21 = (ulong *)((long)puVar24 + lVar34);
      lVar34 = 0x50;
      if (puVar24[0xc] <= puVar24[0x11]) {
        lVar34 = 0x78;
      }
      puVar50 = (ulong *)((long)puVar24 + lVar34);
      puVar22 = puVar21;
      if (puVar48[2] <= puVar50[2]) {
        puVar22 = puVar48;
      }
      puVar17 = puVar48;
      puVar49 = puVar16;
      if (puVar16[2] <= puVar21[2]) {
        puVar17 = puVar21;
        puVar49 = puVar22;
        puVar21 = puVar16;
      }
      puVar16 = puVar50;
      if (puVar48[2] <= puVar50[2]) {
        puVar16 = puVar17;
        puVar48 = puVar50;
      }
      puVar50 = puVar49;
      if (puVar49[2] <= puVar16[2]) {
        puVar50 = puVar16;
        puVar16 = puVar49;
      }
      uVar26 = puVar21[1];
      uVar35 = *puVar21;
      uVar37 = puVar21[3];
      uVar36 = puVar21[2];
      puVar19[4] = puVar21[4];
      puVar19[1] = uVar26;
      *puVar19 = uVar35;
      puVar19[3] = uVar37;
      puVar19[2] = uVar36;
      uVar26 = puVar16[1];
      uVar35 = *puVar16;
      uVar37 = puVar16[3];
      uVar36 = puVar16[2];
      puVar19[9] = puVar16[4];
      puVar19[8] = uVar37;
      puVar19[7] = uVar36;
      puVar19[6] = uVar26;
      puVar19[5] = uVar35;
      uVar26 = puVar50[1];
      uVar35 = *puVar50;
      uVar37 = puVar50[3];
      uVar36 = puVar50[2];
      puVar19[0xe] = puVar50[4];
      puVar19[0xb] = uVar26;
      puVar19[10] = uVar35;
      puVar19[0xd] = uVar37;
      puVar19[0xc] = uVar36;
      uVar26 = puVar48[1];
      uVar35 = *puVar48;
      uVar37 = puVar48[3];
      uVar36 = puVar48[2];
      puVar19[0x13] = puVar48[4];
      puVar19[0x12] = uVar37;
      puVar19[0x11] = uVar36;
      puVar19[0x10] = uVar26;
      puVar19[0xf] = uVar35;
      lVar34 = 0x78;
      if (puVar24[uVar31 * 5 + 0xc] <= puVar24[uVar31 * 5 + 0x11]) {
        lVar34 = 0x50;
      }
      puVar48 = (ulong *)((long)puVar24 + lVar34 + uVar31 * 0x28);
      puVar21 = puVar24 + uVar31 * 5 +
                          (ulong)(puVar24[uVar31 * 5 + 2] > puVar24[uVar31 * 5 + 7]) * 5;
      puVar16 = puVar24 + uVar31 * 5 +
                          (ulong)(puVar24[uVar31 * 5 + 2] <= puVar24[uVar31 * 5 + 7]) * 5;
      lVar34 = 0x50;
      if (puVar24[uVar31 * 5 + 0xc] <= puVar24[uVar31 * 5 + 0x11]) {
        lVar34 = 0x78;
      }
      puVar50 = (ulong *)((long)puVar24 + lVar34 + uVar31 * 0x28);
      puVar22 = puVar48;
      if (puVar16[2] <= puVar50[2]) {
        puVar22 = puVar16;
      }
      puVar17 = puVar16;
      puVar49 = puVar21;
      if (puVar21[2] <= puVar48[2]) {
        puVar17 = puVar48;
        puVar49 = puVar22;
        puVar48 = puVar21;
      }
      puVar21 = puVar19 + uVar31 * 5;
      puVar22 = puVar50;
      if (puVar16[2] <= puVar50[2]) {
        puVar22 = puVar17;
        puVar16 = puVar50;
      }
      puVar50 = puVar49;
      if (puVar49[2] <= puVar22[2]) {
        puVar50 = puVar22;
        puVar22 = puVar49;
      }
      uVar26 = puVar48[1];
      uVar35 = *puVar48;
      uVar37 = puVar48[3];
      uVar36 = puVar48[2];
      puVar21[4] = puVar48[4];
      puVar21[1] = uVar26;
      *puVar21 = uVar35;
      puVar21[3] = uVar37;
      puVar21[2] = uVar36;
      uVar26 = puVar22[1];
      uVar35 = *puVar22;
      uVar37 = puVar22[3];
      uVar36 = puVar22[2];
      puVar21[9] = puVar22[4];
      puVar21[8] = uVar37;
      puVar21[7] = uVar36;
      puVar21[6] = uVar26;
      puVar21[5] = uVar35;
      uVar26 = puVar50[1];
      uVar35 = *puVar50;
      uVar37 = puVar50[3];
      uVar36 = puVar50[2];
      puVar21[0xe] = puVar50[4];
      puVar21[0xb] = uVar26;
      puVar21[10] = uVar35;
      puVar21[0xd] = uVar37;
      puVar21[0xc] = uVar36;
      uVar26 = puVar16[1];
      uVar35 = *puVar16;
      uVar37 = puVar16[3];
      uVar36 = puVar16[2];
      puVar21[0x13] = puVar16[4];
      puVar21[0x12] = uVar37;
      puVar21[0x11] = uVar36;
      puVar21[0x10] = uVar26;
      puVar21[0xf] = uVar35;
      uVar35 = 4;
      uVar26 = uVar46 - uVar31;
      if (4 < uVar31) {
LAB_106045e94:
        lVar34 = uVar35 * 0x28;
        uVar36 = uVar35;
        do {
          uVar37 = uVar36 + 1;
          puVar48 = puVar24 + uVar36 * 5;
          puVar16 = puVar19 + uVar36 * 5;
          uVar39 = puVar48[1];
          uVar36 = *puVar48;
          uVar38 = puVar48[3];
          uVar41 = puVar48[2];
          puVar16[4] = puVar48[4];
          puVar16[1] = uVar39;
          *puVar16 = uVar36;
          puVar16[3] = uVar38;
          puVar16[2] = uVar41;
          uVar36 = puVar16[2];
          lVar29 = lVar34;
          if (uVar36 < puVar16[-3]) {
            do {
              puVar28 = (undefined8 *)((long)puVar19 + lVar29);
              puVar28[1] = puVar28[-4];
              *puVar28 = puVar28[-5];
              puVar28[3] = puVar28[-2];
              puVar28[2] = puVar28[-3];
              puVar28[4] = puVar28[-1];
              lVar29 = lVar29 + -0x28;
              puVar16 = puVar19;
              if (lVar29 == 0) goto LAB_106045eac;
            } while (uVar36 < (ulong)puVar28[-8]);
            puVar16 = (ulong *)((long)puVar19 + lVar29);
LAB_106045eac:
            uVar39 = *puVar48;
            puVar16[1] = puVar48[1];
            *puVar16 = uVar39;
            puVar28[-3] = uVar36;
            uVar36 = puVar48[3];
            puVar28[-1] = puVar48[4];
            puVar28[-2] = uVar36;
          }
          lVar34 = lVar34 + 0x28;
          uVar36 = uVar37;
        } while (uVar37 < uVar31);
      }
    }
    puVar48 = puVar19 + uVar31 * 5;
    if (uVar35 < uVar26) {
      lVar34 = 0x28;
      uVar36 = uVar35;
      puVar16 = puVar48;
      do {
        uVar37 = uVar36 + 1;
        puVar21 = puVar24 + uVar31 * 5 + uVar36 * 5;
        puVar50 = puVar48 + uVar36 * 5;
        uVar39 = puVar21[1];
        uVar36 = *puVar21;
        uVar38 = puVar21[3];
        uVar41 = puVar21[2];
        puVar50[4] = puVar21[4];
        puVar50[1] = uVar39;
        *puVar50 = uVar36;
        puVar50[3] = uVar38;
        puVar50[2] = uVar41;
        uVar36 = puVar50[2];
        puVar22 = puVar16;
        lVar29 = lVar34;
        if (uVar36 < puVar50[-3]) {
          do {
            puVar50 = puVar22 + uVar35 * 5;
            puVar50[1] = puVar50[-4];
            *puVar50 = puVar50[-5];
            puVar50[3] = puVar50[-2];
            puVar50[2] = puVar50[-3];
            puVar50[4] = puVar50[-1];
            puVar17 = puVar48;
            if (uVar35 * 0x28 - lVar29 == 0) goto LAB_106045f6c;
            puVar22 = puVar22 + -5;
            lVar29 = lVar29 + 0x28;
          } while (uVar36 < puVar50[-8]);
          puVar17 = puVar22 + uVar35 * 5;
LAB_106045f6c:
          uVar39 = *puVar21;
          puVar17[1] = puVar21[1];
          *puVar17 = uVar39;
          puVar50[-3] = uVar36;
          uVar36 = puVar21[3];
          puVar50[-1] = puVar21[4];
          puVar50[-2] = uVar36;
        }
        lVar34 = lVar34 + -0x28;
        puVar16 = puVar16 + 5;
        uVar36 = uVar37;
      } while (uVar37 < uVar26);
    }
    lVar34 = uVar46 * 0x28;
    puVar16 = puVar19 + uVar46 * 5 + -5;
    puVar50 = puVar48 + -5;
    puVar21 = puVar24;
    do {
      puVar17 = puVar21;
      lVar34 = lVar34 + -0x28;
      puVar21 = (ulong *)((long)puVar24 + lVar34);
      bVar13 = puVar19[2] <= puVar48[2];
      puVar22 = puVar48;
      if (bVar13) {
        puVar22 = puVar19;
      }
      uVar26 = puVar22[1];
      uVar35 = *puVar22;
      uVar37 = puVar22[3];
      uVar36 = puVar22[2];
      puVar17[4] = puVar22[4];
      puVar17[1] = uVar26;
      *puVar17 = uVar35;
      puVar17[3] = uVar37;
      puVar17[2] = uVar36;
      puVar48 = puVar48 + (ulong)!bVar13 * 5;
      puVar19 = puVar19 + (ulong)bVar13 * 5;
      bVar13 = puVar50[2] <= puVar16[2];
      puVar22 = puVar50;
      if (bVar13) {
        puVar22 = puVar16;
      }
      uVar26 = puVar22[1];
      uVar35 = *puVar22;
      uVar37 = puVar22[3];
      uVar36 = puVar22[2];
      puVar21[4] = puVar22[4];
      puVar21[1] = uVar26;
      *puVar21 = uVar35;
      puVar21[3] = uVar37;
      puVar21[2] = uVar36;
      puVar16 = puVar16 + (ulong)bVar13 * -5;
      puVar50 = puVar50 + (ulong)!bVar13 * -5;
      uVar31 = uVar31 - 1;
      puVar21 = puVar17 + 5;
    } while (uVar31 != 0);
    if ((uVar46 & 1) != 0) {
      bVar13 = puVar50 + 5 <= puVar19;
      puVar24 = puVar19;
      if (bVar13) {
        puVar24 = puVar48;
      }
      uVar31 = puVar24[1];
      uVar46 = *puVar24;
      uVar26 = puVar24[3];
      uVar35 = puVar24[2];
      puVar17[9] = puVar24[4];
      puVar17[6] = uVar31;
      puVar17[5] = uVar46;
      puVar17[8] = uVar26;
      puVar17[7] = uVar35;
      puVar19 = puVar19 + (ulong)!bVar13 * 5;
      puVar48 = puVar48 + (ulong)bVar13 * 5;
    }
    if (puVar19 == puVar50 + 5 && puVar48 == puVar16 + 5) {
      return;
    }
LAB_106046118:
    __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_10604611c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x106046120);
    (*pcVar9)();
  }
  *(ulong **)(puVar11 + -0x98) = puVar19 + -5;
  puVar16 = (ulong *)0x28;
  uVar31 = uVar46;
  puVar24 = param_7;
  puVar48 = param_6;
  auVar6 = auVar56;
  while( true ) {
    puVar22 = auVar6._8_8_;
    puVar21 = auVar6._0_8_;
    if ((int)uVar46 == 0) {
      FUN_1060432bc(puVar21,puVar22,puVar19,puVar17,1,param_7);
      return;
    }
    if (puVar22 < (ulong *)0x40) {
      uVar35 = puVar21[2];
      uVar26 = (puVar21 + ((ulong)puVar22 >> 3) * 0x14)[2];
      uVar36 = (puVar21 + ((ulong)puVar22 >> 3) * 0x23)[2];
      puVar50 = puVar21 + ((ulong)puVar22 >> 3) * 0x23;
      if (uVar35 < uVar26 == uVar26 < uVar36) {
        puVar50 = puVar21 + ((ulong)puVar22 >> 3) * 0x14;
      }
      puVar49 = puVar21;
      if (uVar35 < uVar26 == uVar35 < uVar36) {
        puVar49 = puVar50;
      }
    }
    else {
      puVar49 = (ulong *)FUN_106040844(puVar21);
    }
    uVar46 = (ulong)((int)uVar46 - 1);
    uVar35 = (ulong)((long)puVar49 - (long)puVar21) >> 3;
    puVar50 = (ulong *)(uVar35 * -0x3333333333333333);
    uVar26 = *puVar49;
    uVar37 = puVar49[3];
    uVar36 = puVar49[2];
    *(ulong *)(puVar11 + -0x88) = puVar49[1];
    *(ulong *)(puVar11 + -0x90) = uVar26;
    *(ulong *)(puVar11 + -0x78) = uVar37;
    *(ulong *)(puVar11 + -0x80) = uVar36;
    *(ulong *)(puVar11 + -0x70) = puVar49[4];
    if ((puVar48 == (ulong *)0x0) || (puVar48[2] < puVar49[2])) break;
LAB_106045d34:
    if (puVar17 < puVar22) goto LAB_10604611c;
    puVar49 = (ulong *)0x0;
    puVar18 = puVar19 + (long)puVar22 * 5;
    puVar32 = puVar21 + uVar35;
    puVar48 = puVar21;
    if (puVar32 <= puVar21) goto LAB_106045d94;
LAB_106045d5c:
    do {
      uVar26 = puVar48[2];
      uVar36 = puVar21[uVar35 + 2];
      puVar18 = puVar18 + -5;
      puVar27 = puVar19;
      if (uVar36 < uVar26) {
        puVar27 = puVar18;
      }
      puVar27 = puVar27 + (long)puVar49 * 5;
      uVar39 = puVar48[1];
      uVar37 = *puVar48;
      uVar38 = puVar48[3];
      uVar41 = puVar48[2];
      puVar27[4] = puVar48[4];
      puVar27[1] = uVar39;
      *puVar27 = uVar37;
      puVar27[3] = uVar38;
      puVar27[2] = uVar41;
      if (uVar36 >= uVar26) {
        puVar49 = (ulong *)((long)puVar49 + 1);
      }
      puVar48 = puVar48 + 5;
    } while (puVar48 < puVar32);
LAB_106045d94:
    while (puVar50 != puVar22) {
      puVar18 = puVar18 + -5;
      puVar50 = puVar19 + (long)puVar49 * 5;
      uVar36 = puVar48[1];
      uVar26 = *puVar48;
      uVar39 = puVar48[3];
      uVar37 = puVar48[2];
      puVar50[4] = puVar48[4];
      puVar50[1] = uVar36;
      *puVar50 = uVar26;
      puVar50[3] = uVar39;
      puVar50[2] = uVar37;
      puVar49 = (ulong *)((long)puVar49 + 1);
      puVar48 = puVar48 + 5;
      puVar32 = puVar21 + (long)puVar22 * 5;
      puVar50 = puVar22;
      if (puVar48 < puVar32) goto LAB_106045d5c;
    }
    _memcpy(puVar21,puVar19,(long)puVar49 * 0x28);
    puVar18 = (ulong *)((long)puVar22 - (long)puVar49);
    if (puVar18 == (ulong *)0x0) {
      return;
    }
    puVar21 = puVar21 + (long)puVar49 * 5;
    auVar7._8_8_ = puVar22;
    auVar7._0_8_ = puVar21;
    auVar56._8_8_ = puVar18;
    auVar56._0_8_ = puVar21;
    puVar27 = (ulong *)(*(long *)(puVar11 + -0x98) + (long)puVar22 * 0x28);
    puVar32 = puVar18;
    puVar48 = puVar21;
    do {
      uVar35 = *puVar27;
      uVar36 = puVar27[3];
      uVar26 = puVar27[2];
      puVar48[1] = puVar27[1];
      *puVar48 = uVar35;
      puVar48[3] = uVar36;
      puVar48[2] = uVar26;
      puVar48[4] = puVar27[4];
      puVar27 = puVar27 + -5;
      puVar48 = puVar48 + 5;
      puVar32 = (ulong *)((long)puVar32 + -1);
    } while (puVar32 != (ulong *)0x0);
    if (puVar22 < puVar49) {
      puVar48 = (ulong *)&UNK_10b4ae618;
      puVar17 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                   (puVar49,puVar22,puVar22);
      puVar22 = (ulong *)((long)puVar18 * 0x28);
      _memcpy(puVar21,puVar19);
      uVar52 = 0x106046158;
      auVar57 = __Unwind_Resume(puVar17);
      puVar11 = puVar11 + -0xa0;
      goto __ZN4core5slice4sort6stable9quicksort9quicksort17h770bfef31f947321E;
    }
    puVar48 = (ulong *)0x0;
    auVar6 = auVar56;
    if (puVar18 < (ulong *)0x21) goto LAB_106045978;
  }
  if (puVar17 < puVar22) goto LAB_10604611c;
  puVar18 = (ulong *)0x0;
  puVar27 = puVar19 + (long)puVar22 * 5;
  puVar30 = puVar21 + uVar35;
  puVar49 = puVar21;
  puVar32 = puVar50;
  if (puVar30 <= puVar21) goto LAB_106045c78;
LAB_106045c40:
  do {
    uVar26 = puVar49[2];
    uVar36 = puVar21[uVar35 + 2];
    puVar27 = puVar27 + -5;
    puVar33 = puVar19;
    if (uVar36 <= uVar26) {
      puVar33 = puVar27;
    }
    puVar33 = puVar33 + (long)puVar18 * 5;
    uVar39 = puVar49[1];
    uVar37 = *puVar49;
    uVar38 = puVar49[3];
    uVar41 = puVar49[2];
    puVar33[4] = puVar49[4];
    puVar33[1] = uVar39;
    *puVar33 = uVar37;
    puVar33[3] = uVar38;
    puVar33[2] = uVar41;
    if (uVar36 > uVar26) {
      puVar18 = (ulong *)((long)puVar18 + 1);
    }
    puVar49 = puVar49 + 5;
  } while (puVar49 < puVar30);
LAB_106045c78:
  while (puVar32 != puVar22) {
    puVar27 = puVar27 + -5;
    puVar32 = puVar27 + (long)puVar18 * 5;
    uVar26 = *puVar49;
    uVar37 = puVar49[3];
    uVar36 = puVar49[2];
    puVar32[1] = puVar49[1];
    *puVar32 = uVar26;
    puVar32[3] = uVar37;
    puVar32[2] = uVar36;
    puVar32[4] = puVar49[4];
    puVar49 = puVar49 + 5;
    puVar30 = puVar21 + (long)puVar22 * 5;
    puVar32 = puVar22;
    if (puVar49 < puVar30) goto LAB_106045c40;
  }
  _memcpy(puVar21,puVar19,(long)puVar18 * 0x28);
  lVar34 = (long)puVar22 - (long)puVar18;
  if (lVar34 != 0) {
    puVar49 = puVar21 + (long)puVar18 * 5;
    puVar32 = (ulong *)(*(long *)(puVar11 + -0x98) + (long)puVar22 * 0x28);
    lVar29 = lVar34;
    do {
      uVar26 = *puVar32;
      uVar37 = puVar32[3];
      uVar36 = puVar32[2];
      puVar49[1] = puVar32[1];
      *puVar49 = uVar26;
      puVar49[3] = uVar37;
      puVar49[2] = uVar36;
      puVar49[4] = puVar32[4];
      puVar32 = puVar32 + -5;
      puVar49 = puVar49 + 5;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  if (puVar18 == (ulong *)0x0) goto LAB_106045d34;
  if (puVar22 < puVar18) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_106046118;
  }
  auVar56._8_8_ = lVar34;
  auVar56._0_8_ = puVar21 + (long)puVar18 * 5;
  param_6 = (ulong *)(puVar11 + -0x90);
  uVar52 = 0x106045d24;
  puVar11 = puVar11 + -0xa0;
  puVar24 = puVar19;
  puVar22 = puVar17;
  puVar21 = param_7;
  param_5 = uVar46;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17h58c6cb561a55387aE;
__ZN4core5slice4sort6stable9quicksort9quicksort17h770bfef31f947321E:
  *(ulong **)(puVar11 + -0x60) = puVar16;
  *(ulong **)(puVar11 + -0x58) = puVar50;
  *(ulong **)(puVar11 + -0x50) = puVar49;
  *(long *)(puVar11 + -0x48) = auVar7._8_8_;
  *(ulong *)(puVar11 + -0x40) = uVar46;
  *(ulong **)(puVar11 + -0x38) = param_7;
  *(ulong **)(puVar11 + -0x30) = puVar17;
  *(ulong **)(puVar11 + -0x28) = puVar18;
  *(long *)(puVar11 + -0x20) = auVar7._0_8_;
  *(ulong **)(puVar11 + -0x18) = puVar19;
  *(undefined1 **)(puVar11 + -0x10) = puVar51;
  *(undefined8 *)(puVar11 + -8) = uVar52;
  puVar51 = puVar11 + -0x10;
  *(ulong **)(puVar11 + -0x88) = puVar24;
  if (auVar57._8_8_ < 0x21) {
LAB_106046194:
    uVar46 = auVar57._8_8_;
    puVar24 = auVar57._0_8_;
    if (uVar46 < 2) {
      return;
    }
    if (puVar48 < (ulong *)(uVar46 + 0x10)) goto LAB_1060467ec;
    uVar31 = uVar46 >> 1;
    if (uVar46 < 8) {
      uVar35 = *puVar24;
      uVar36 = puVar24[3];
      uVar26 = puVar24[2];
      puVar22[1] = puVar24[1];
      *puVar22 = uVar35;
      puVar22[3] = uVar36;
      puVar22[2] = uVar26;
      puVar48 = puVar24 + uVar31 * 4;
      puVar16 = puVar22 + uVar31 * 4;
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar16[1] = puVar48[1];
      *puVar16 = uVar35;
      puVar16[3] = uVar36;
      puVar16[2] = uVar26;
      uVar35 = 1;
      uVar26 = uVar46 - uVar31;
      if (1 < uVar31) goto LAB_1060465c4;
    }
    else {
      puVar48 = puVar24 + (ulong)(puVar24[1] > puVar24[5]) * 4;
      puVar16 = puVar24 + (ulong)(puVar24[1] <= puVar24[5]) * 4;
      lVar34 = 0x60;
      if (puVar24[9] <= puVar24[0xd]) {
        lVar34 = 0x40;
      }
      puVar21 = (ulong *)((long)puVar24 + lVar34);
      lVar34 = 0x40;
      if (puVar24[9] <= puVar24[0xd]) {
        lVar34 = 0x60;
      }
      puVar50 = (ulong *)((long)puVar24 + lVar34);
      puVar17 = puVar21;
      if (puVar16[1] <= puVar50[1]) {
        puVar17 = puVar16;
      }
      puVar49 = puVar16;
      puVar18 = puVar48;
      if (puVar48[1] <= puVar21[1]) {
        puVar49 = puVar21;
        puVar18 = puVar17;
        puVar21 = puVar48;
      }
      puVar48 = puVar50;
      if (puVar16[1] <= puVar50[1]) {
        puVar48 = puVar49;
        puVar16 = puVar50;
      }
      puVar50 = puVar18;
      if (puVar18[1] <= puVar48[1]) {
        puVar50 = puVar48;
        puVar48 = puVar18;
      }
      uVar35 = *puVar21;
      uVar36 = puVar21[3];
      uVar26 = puVar21[2];
      puVar22[1] = puVar21[1];
      *puVar22 = uVar35;
      puVar22[3] = uVar36;
      puVar22[2] = uVar26;
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar22[5] = puVar48[1];
      puVar22[4] = uVar35;
      puVar22[7] = uVar36;
      puVar22[6] = uVar26;
      uVar35 = *puVar50;
      uVar36 = puVar50[3];
      uVar26 = puVar50[2];
      puVar22[9] = puVar50[1];
      puVar22[8] = uVar35;
      puVar22[0xb] = uVar36;
      puVar22[10] = uVar26;
      uVar35 = *puVar16;
      uVar36 = puVar16[3];
      uVar26 = puVar16[2];
      puVar22[0xd] = puVar16[1];
      puVar22[0xc] = uVar35;
      puVar22[0xf] = uVar36;
      puVar22[0xe] = uVar26;
      lVar34 = 0x60;
      if (puVar24[uVar31 * 4 + 9] <= puVar24[uVar31 * 4 + 0xd]) {
        lVar34 = 0x40;
      }
      puVar48 = (ulong *)((long)puVar24 + lVar34 + uVar31 * 0x20);
      puVar16 = puVar24 + uVar31 * 4 +
                          (ulong)(puVar24[uVar31 * 4 + 1] > puVar24[uVar31 * 4 + 5]) * 4;
      puVar21 = puVar24 + uVar31 * 4 +
                          (ulong)(puVar24[uVar31 * 4 + 1] <= puVar24[uVar31 * 4 + 5]) * 4;
      lVar34 = 0x40;
      if (puVar24[uVar31 * 4 + 9] <= puVar24[uVar31 * 4 + 0xd]) {
        lVar34 = 0x60;
      }
      puVar50 = (ulong *)((long)puVar24 + lVar34 + uVar31 * 0x20);
      puVar17 = puVar48;
      if (puVar21[1] <= puVar50[1]) {
        puVar17 = puVar21;
      }
      puVar49 = puVar21;
      puVar18 = puVar16;
      if (puVar16[1] <= puVar48[1]) {
        puVar49 = puVar48;
        puVar18 = puVar17;
        puVar48 = puVar16;
      }
      puVar16 = puVar22 + uVar31 * 4;
      puVar17 = puVar50;
      if (puVar21[1] <= puVar50[1]) {
        puVar17 = puVar49;
        puVar21 = puVar50;
      }
      puVar50 = puVar18;
      if (puVar18[1] <= puVar17[1]) {
        puVar50 = puVar17;
        puVar17 = puVar18;
      }
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar16[1] = puVar48[1];
      *puVar16 = uVar35;
      puVar16[3] = uVar36;
      puVar16[2] = uVar26;
      uVar35 = *puVar17;
      uVar36 = puVar17[3];
      uVar26 = puVar17[2];
      puVar16[5] = puVar17[1];
      puVar16[4] = uVar35;
      puVar16[7] = uVar36;
      puVar16[6] = uVar26;
      uVar35 = *puVar50;
      uVar36 = puVar50[3];
      uVar26 = puVar50[2];
      puVar16[9] = puVar50[1];
      puVar16[8] = uVar35;
      puVar16[0xb] = uVar36;
      puVar16[10] = uVar26;
      uVar35 = *puVar21;
      uVar36 = puVar21[3];
      uVar26 = puVar21[2];
      puVar16[0xd] = puVar21[1];
      puVar16[0xc] = uVar35;
      puVar16[0xf] = uVar36;
      puVar16[0xe] = uVar26;
      uVar35 = 4;
      uVar26 = uVar46 - uVar31;
      if (4 < uVar31) {
LAB_1060465c4:
        lVar34 = uVar35 << 5;
        uVar36 = uVar35;
        do {
          uVar37 = uVar36 + 1;
          puVar48 = puVar24 + uVar36 * 4;
          puVar16 = puVar22 + uVar36 * 4;
          uVar41 = *puVar48;
          uVar39 = puVar48[3];
          uVar36 = puVar48[2];
          puVar16[1] = puVar48[1];
          *puVar16 = uVar41;
          puVar16[3] = uVar39;
          puVar16[2] = uVar36;
          uVar36 = puVar16[1];
          if (uVar36 < puVar16[-3]) {
            uVar39 = *puVar16;
            lVar29 = lVar34;
            do {
              puVar28 = (undefined8 *)((long)puVar22 + lVar29);
              puVar28[1] = puVar28[-3];
              *puVar28 = puVar28[-4];
              puVar28[3] = puVar28[-1];
              puVar28[2] = puVar28[-2];
              lVar29 = lVar29 + -0x20;
              puVar16 = puVar22;
              if (lVar29 == 0) goto LAB_1060465d8;
            } while (uVar36 < (ulong)puVar28[-7]);
            puVar16 = (ulong *)((long)puVar22 + lVar29);
LAB_1060465d8:
            *puVar16 = uVar39;
            puVar28[-3] = uVar36;
            uVar36 = puVar48[2];
            puVar28[-1] = puVar48[3];
            puVar28[-2] = uVar36;
          }
          lVar34 = lVar34 + 0x20;
          uVar36 = uVar37;
        } while (uVar37 < uVar31);
      }
    }
    puVar48 = puVar22 + uVar31 * 4;
    if (uVar35 < uVar26) {
      lVar34 = 0x20;
      uVar36 = uVar35;
      puVar16 = puVar48;
      do {
        uVar37 = uVar36 + 1;
        puVar21 = puVar24 + uVar31 * 4 + uVar36 * 4;
        puVar50 = puVar48 + uVar36 * 4;
        uVar41 = *puVar21;
        uVar39 = puVar21[3];
        uVar36 = puVar21[2];
        puVar50[1] = puVar21[1];
        *puVar50 = uVar41;
        puVar50[3] = uVar39;
        puVar50[2] = uVar36;
        uVar36 = puVar50[1];
        if (uVar36 < puVar50[-3]) {
          uVar39 = *puVar50;
          puVar50 = puVar16;
          lVar29 = lVar34;
          do {
            puVar17 = puVar50 + uVar35 * 4;
            puVar17[1] = puVar17[-3];
            *puVar17 = puVar17[-4];
            puVar17[3] = puVar17[-1];
            puVar17[2] = puVar17[-2];
            puVar49 = puVar48;
            if (uVar35 * 0x20 - lVar29 == 0) goto LAB_106046678;
            lVar29 = lVar29 + 0x20;
            puVar50 = puVar50 + -4;
          } while (uVar36 < puVar17[-7]);
          puVar49 = puVar50 + uVar35 * 4;
LAB_106046678:
          *puVar49 = uVar39;
          puVar17[-3] = uVar36;
          uVar36 = puVar21[2];
          puVar17[-1] = puVar21[3];
          puVar17[-2] = uVar36;
        }
        lVar34 = lVar34 + -0x20;
        puVar16 = puVar16 + 4;
        uVar36 = uVar37;
      } while (uVar37 < uVar26);
    }
    lVar34 = uVar46 * 0x20;
    puVar16 = puVar22 + uVar46 * 4 + -4;
    puVar21 = puVar48 + -4;
    puVar50 = puVar24;
    do {
      puVar49 = puVar50;
      lVar34 = lVar34 + -0x20;
      puVar50 = (ulong *)((long)puVar24 + lVar34);
      bVar13 = puVar22[1] <= puVar48[1];
      puVar17 = puVar48;
      if (bVar13) {
        puVar17 = puVar22;
      }
      uVar35 = *puVar17;
      uVar36 = puVar17[3];
      uVar26 = puVar17[2];
      puVar49[1] = puVar17[1];
      *puVar49 = uVar35;
      puVar49[3] = uVar36;
      puVar49[2] = uVar26;
      puVar48 = puVar48 + (ulong)!bVar13 * 4;
      puVar22 = puVar22 + (ulong)bVar13 * 4;
      bVar13 = puVar21[1] <= puVar16[1];
      puVar17 = puVar21;
      if (bVar13) {
        puVar17 = puVar16;
      }
      uVar35 = *puVar17;
      uVar36 = puVar17[3];
      uVar26 = puVar17[2];
      puVar50[1] = puVar17[1];
      *puVar50 = uVar35;
      puVar50[3] = uVar36;
      puVar50[2] = uVar26;
      puVar16 = puVar16 + (ulong)bVar13 * -4;
      puVar21 = puVar21 + (ulong)!bVar13 * -4;
      uVar31 = uVar31 - 1;
      puVar50 = puVar49 + 4;
    } while (uVar31 != 0);
    if ((uVar46 & 1) != 0) {
      bVar13 = puVar21 + 4 <= puVar22;
      puVar24 = puVar22;
      if (bVar13) {
        puVar24 = puVar48;
      }
      uVar46 = *puVar24;
      uVar35 = puVar24[3];
      uVar31 = puVar24[2];
      puVar49[5] = puVar24[1];
      puVar49[4] = uVar46;
      puVar49[7] = uVar35;
      puVar49[6] = uVar31;
      puVar22 = puVar22 + (ulong)!bVar13 * 4;
      puVar48 = puVar48 + (ulong)bVar13 * 4;
    }
    if (puVar22 == puVar21 + 4 && puVar48 == puVar16 + 4) {
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
  uVar46 = uVar31;
  puVar49 = param_6;
  auVar7 = auVar57;
  while( true ) {
    puVar17 = auVar7._8_8_;
    puVar21 = auVar7._0_8_;
    if ((int)uVar31 == 0) {
      FUN_1060437f4(puVar21,puVar17,puVar22,puVar48,1,*(undefined8 *)(puVar11 + -0x88));
      return;
    }
    if (puVar17 < (ulong *)0x40) {
      uVar35 = puVar21[1];
      uVar26 = (puVar21 + ((ulong)puVar17 >> 3) * 0x10)[1];
      uVar36 = (puVar21 + ((ulong)puVar17 >> 3) * 0x1c)[1];
      puVar16 = puVar21 + ((ulong)puVar17 >> 3) * 0x1c;
      if (uVar35 < uVar26 == uVar26 < uVar36) {
        puVar16 = puVar21 + ((ulong)puVar17 >> 3) * 0x10;
      }
      puVar18 = puVar21;
      if (uVar35 < uVar26 == uVar35 < uVar36) {
        puVar18 = puVar16;
      }
    }
    else {
      puVar18 = (ulong *)FUN_106040590(puVar21);
    }
    uVar31 = (ulong)((int)uVar31 - 1);
    param_7 = (ulong *)((ulong)((long)puVar18 - (long)puVar21) >> 5);
    uVar35 = *puVar18;
    uVar36 = puVar18[3];
    uVar26 = puVar18[2];
    *(ulong *)(puVar11 + -0x78) = puVar18[1];
    *(ulong *)(puVar11 + -0x80) = uVar35;
    *(ulong *)(puVar11 + -0x68) = uVar36;
    *(ulong *)(puVar11 + -0x70) = uVar26;
    puVar16 = puVar22 + (long)puVar17 * 4;
    puVar50 = puVar21 + (long)param_7 * 4;
    if ((puVar49 == (ulong *)0x0) || (puVar49[1] < puVar18[1])) break;
LAB_1060464b0:
    if (puVar48 < puVar17) goto LAB_1060467ec;
    puVar49 = (ulong *)0x0;
    puVar18 = puVar21 + (long)param_7 * 4;
    puVar19 = puVar21;
    puVar32 = puVar21;
    if (puVar18 <= puVar21) goto LAB_1060464f8;
LAB_1060464cc:
    do {
      uVar35 = puVar19[1];
      uVar26 = puVar50[1];
      puVar16 = puVar16 + -4;
      puVar27 = puVar22;
      if (uVar26 < uVar35) {
        puVar27 = puVar16;
      }
      puVar27 = puVar27 + (long)puVar49 * 4;
      puVar32 = puVar19 + 4;
      uVar36 = *puVar19;
      uVar39 = puVar19[3];
      uVar37 = puVar19[2];
      puVar27[1] = puVar19[1];
      *puVar27 = uVar36;
      puVar27[3] = uVar39;
      puVar27[2] = uVar37;
      if (uVar26 >= uVar35) {
        puVar49 = (ulong *)((long)puVar49 + 1);
      }
      puVar19 = puVar32;
    } while (puVar32 < puVar18);
LAB_1060464f8:
    while (param_7 != puVar17) {
      puVar16 = puVar16 + -4;
      puVar19 = puVar32 + 4;
      uVar35 = *puVar32;
      uVar36 = puVar32[3];
      uVar26 = puVar32[2];
      puVar18 = puVar22 + (long)puVar49 * 4;
      puVar18[1] = puVar32[1];
      *puVar18 = uVar35;
      puVar18[3] = uVar36;
      puVar18[2] = uVar26;
      puVar49 = (ulong *)((long)puVar49 + 1);
      puVar18 = puVar21 + (long)puVar17 * 4;
      puVar32 = puVar19;
      param_7 = puVar17;
      if (puVar19 < puVar18) goto LAB_1060464cc;
    }
    _memcpy(puVar21,puVar22,(long)puVar49 << 5);
    uVar35 = (long)puVar17 - (long)puVar49;
    if (uVar35 == 0) {
      return;
    }
    puVar21 = puVar21 + (long)puVar49 * 4;
    auVar8._8_8_ = puVar17;
    auVar8._0_8_ = puVar21;
    auVar57._8_8_ = uVar35;
    auVar57._0_8_ = puVar21;
    puVar18 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar17 * 0x20);
    uVar26 = uVar35;
    puVar19 = puVar21;
    do {
      uVar36 = *puVar18;
      uVar39 = puVar18[3];
      uVar37 = puVar18[2];
      puVar19[1] = puVar18[1];
      *puVar19 = uVar36;
      puVar19[3] = uVar39;
      puVar19[2] = uVar37;
      uVar26 = uVar26 - 1;
      puVar18 = puVar18 + -4;
      puVar19 = puVar19 + 4;
    } while (uVar26 != 0);
    if (puVar17 < puVar49) {
      puVar18 = (ulong *)&UNK_10b4ae618;
      puVar19 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                   (puVar49,puVar17,puVar17);
      puVar17 = puVar48;
      _memcpy(puVar21,puVar22);
      uVar52 = 0x106046824;
      auVar58 = __Unwind_Resume(puVar19);
      puVar11 = puVar11 + -0x90;
      goto __ZN4core5slice4sort6stable9quicksort9quicksort17hb8c99fcc29b80e86E;
    }
    puVar49 = (ulong *)0x0;
    auVar7 = auVar57;
    if (uVar35 < 0x21) goto LAB_106046194;
  }
  if (puVar48 < puVar17) goto LAB_1060467ec;
  puVar18 = (ulong *)0x0;
  puVar19 = puVar21 + (long)param_7 * 4;
  puVar32 = puVar21;
  puVar27 = puVar21;
  puVar30 = puVar16;
  puVar33 = param_7;
  if (puVar19 <= puVar21) goto LAB_106046414;
LAB_1060463e8:
  do {
    uVar35 = puVar32[1];
    uVar26 = puVar50[1];
    puVar30 = puVar30 + -4;
    puVar4 = puVar22;
    if (uVar26 <= uVar35) {
      puVar4 = puVar30;
    }
    puVar4 = puVar4 + (long)puVar18 * 4;
    puVar27 = puVar32 + 4;
    uVar36 = *puVar32;
    uVar39 = puVar32[3];
    uVar37 = puVar32[2];
    puVar4[1] = puVar32[1];
    *puVar4 = uVar36;
    puVar4[3] = uVar39;
    puVar4[2] = uVar37;
    if (uVar26 > uVar35) {
      puVar18 = (ulong *)((long)puVar18 + 1);
    }
    puVar32 = puVar27;
  } while (puVar27 < puVar19);
LAB_106046414:
  while (puVar33 != puVar17) {
    puVar30 = puVar30 + -4;
    puVar32 = puVar27 + 4;
    uVar35 = *puVar27;
    uVar36 = puVar27[3];
    uVar26 = puVar27[2];
    puVar19 = puVar30 + (long)puVar18 * 4;
    puVar19[1] = puVar27[1];
    *puVar19 = uVar35;
    puVar19[3] = uVar36;
    puVar19[2] = uVar26;
    puVar19 = puVar21 + (long)puVar17 * 4;
    puVar27 = puVar32;
    puVar33 = puVar17;
    if (puVar32 < puVar19) goto LAB_1060463e8;
  }
  _memcpy(puVar21,puVar22,(long)puVar18 << 5);
  lVar34 = (long)puVar17 - (long)puVar18;
  auVar57._8_8_ = lVar34;
  auVar57._0_8_ = puVar21 + (long)puVar18 * 4;
  if (lVar34 != 0) {
    puVar19 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar17 * 0x20);
    puVar32 = puVar21 + (long)puVar18 * 4;
    do {
      uVar35 = *puVar19;
      uVar36 = puVar19[3];
      uVar26 = puVar19[2];
      puVar32[1] = puVar19[1];
      *puVar32 = uVar35;
      puVar32[3] = uVar36;
      puVar32[2] = uVar26;
      lVar34 = lVar34 + -1;
      puVar19 = puVar19 + -4;
      puVar32 = puVar32 + 4;
    } while (lVar34 != 0);
  }
  if (puVar18 == (ulong *)0x0) goto LAB_1060464b0;
  if (puVar17 < puVar18) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_1060467e8;
  }
  param_6 = (ulong *)(puVar11 + -0x80);
  puVar24 = *(ulong **)(puVar11 + -0x88);
  uVar52 = 0x1060464a0;
  puVar11 = puVar11 + -0x90;
  puVar19 = puVar22;
  puVar17 = puVar48;
  uVar46 = uVar31;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17h770bfef31f947321E;
__ZN4core5slice4sort6stable9quicksort9quicksort17hb8c99fcc29b80e86E:
  *(ulong **)(puVar11 + -0x60) = puVar16;
  *(ulong **)(puVar11 + -0x58) = puVar50;
  *(ulong **)(puVar11 + -0x50) = puVar49;
  *(long *)(puVar11 + -0x48) = auVar8._8_8_;
  *(ulong *)(puVar11 + -0x40) = uVar31;
  *(ulong **)(puVar11 + -0x38) = param_7;
  *(ulong **)(puVar11 + -0x30) = puVar48;
  *(ulong **)(puVar11 + -0x28) = puVar19;
  *(long *)(puVar11 + -0x20) = auVar8._0_8_;
  *(ulong **)(puVar11 + -0x18) = puVar22;
  *(undefined1 **)(puVar11 + -0x10) = puVar51;
  *(undefined8 *)(puVar11 + -8) = uVar52;
  puVar51 = puVar11 + -0x10;
  *(ulong **)(puVar11 + -0x88) = puVar24;
  if (auVar58._8_8_ < 0x21) {
LAB_106046860:
    uVar46 = auVar58._8_8_;
    puVar24 = auVar58._0_8_;
    if (uVar46 < 2) {
      return;
    }
    if (puVar18 < (ulong *)(uVar46 + 0x10)) goto LAB_106046eb0;
    uVar31 = uVar46 >> 1;
    if (uVar46 < 8) {
      uVar35 = *puVar24;
      uVar36 = puVar24[3];
      uVar26 = puVar24[2];
      puVar17[1] = puVar24[1];
      *puVar17 = uVar35;
      puVar17[3] = uVar36;
      puVar17[2] = uVar26;
      puVar48 = puVar24 + uVar31 * 4;
      puVar16 = puVar17 + uVar31 * 4;
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar16[1] = puVar48[1];
      *puVar16 = uVar35;
      puVar16[3] = uVar36;
      puVar16[2] = uVar26;
      uVar35 = 1;
      uVar26 = uVar46 - uVar31;
      if (1 < uVar31) goto LAB_106046c90;
    }
    else {
      puVar48 = puVar24 + (ulong)(puVar24[2] > puVar24[6]) * 4;
      puVar16 = puVar24 + (ulong)(puVar24[2] <= puVar24[6]) * 4;
      lVar34 = 0x60;
      if (puVar24[10] <= puVar24[0xe]) {
        lVar34 = 0x40;
      }
      puVar21 = (ulong *)((long)puVar24 + lVar34);
      lVar34 = 0x40;
      if (puVar24[10] <= puVar24[0xe]) {
        lVar34 = 0x60;
      }
      puVar50 = (ulong *)((long)puVar24 + lVar34);
      puVar22 = puVar21;
      if (puVar16[2] <= puVar50[2]) {
        puVar22 = puVar16;
      }
      puVar49 = puVar16;
      puVar18 = puVar48;
      if (puVar48[2] <= puVar21[2]) {
        puVar49 = puVar21;
        puVar18 = puVar22;
        puVar21 = puVar48;
      }
      puVar48 = puVar50;
      if (puVar16[2] <= puVar50[2]) {
        puVar48 = puVar49;
        puVar16 = puVar50;
      }
      puVar50 = puVar18;
      if (puVar18[2] <= puVar48[2]) {
        puVar50 = puVar48;
        puVar48 = puVar18;
      }
      uVar35 = *puVar21;
      uVar36 = puVar21[3];
      uVar26 = puVar21[2];
      puVar17[1] = puVar21[1];
      *puVar17 = uVar35;
      puVar17[3] = uVar36;
      puVar17[2] = uVar26;
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar17[5] = puVar48[1];
      puVar17[4] = uVar35;
      puVar17[7] = uVar36;
      puVar17[6] = uVar26;
      uVar35 = *puVar50;
      uVar36 = puVar50[3];
      uVar26 = puVar50[2];
      puVar17[9] = puVar50[1];
      puVar17[8] = uVar35;
      puVar17[0xb] = uVar36;
      puVar17[10] = uVar26;
      uVar35 = *puVar16;
      uVar36 = puVar16[3];
      uVar26 = puVar16[2];
      puVar17[0xd] = puVar16[1];
      puVar17[0xc] = uVar35;
      puVar17[0xf] = uVar36;
      puVar17[0xe] = uVar26;
      lVar34 = 0x60;
      if (puVar24[uVar31 * 4 + 10] <= puVar24[uVar31 * 4 + 0xe]) {
        lVar34 = 0x40;
      }
      puVar48 = (ulong *)((long)puVar24 + lVar34 + uVar31 * 0x20);
      puVar16 = puVar24 + uVar31 * 4 +
                          (ulong)(puVar24[uVar31 * 4 + 2] > puVar24[uVar31 * 4 + 6]) * 4;
      puVar21 = puVar24 + uVar31 * 4 +
                          (ulong)(puVar24[uVar31 * 4 + 2] <= puVar24[uVar31 * 4 + 6]) * 4;
      lVar34 = 0x40;
      if (puVar24[uVar31 * 4 + 10] <= puVar24[uVar31 * 4 + 0xe]) {
        lVar34 = 0x60;
      }
      puVar50 = (ulong *)((long)puVar24 + lVar34 + uVar31 * 0x20);
      puVar22 = puVar48;
      if (puVar21[2] <= puVar50[2]) {
        puVar22 = puVar21;
      }
      puVar49 = puVar21;
      puVar18 = puVar16;
      if (puVar16[2] <= puVar48[2]) {
        puVar49 = puVar48;
        puVar18 = puVar22;
        puVar48 = puVar16;
      }
      puVar16 = puVar17 + uVar31 * 4;
      puVar22 = puVar50;
      if (puVar21[2] <= puVar50[2]) {
        puVar22 = puVar49;
        puVar21 = puVar50;
      }
      puVar50 = puVar18;
      if (puVar18[2] <= puVar22[2]) {
        puVar50 = puVar22;
        puVar22 = puVar18;
      }
      uVar35 = *puVar48;
      uVar36 = puVar48[3];
      uVar26 = puVar48[2];
      puVar16[1] = puVar48[1];
      *puVar16 = uVar35;
      puVar16[3] = uVar36;
      puVar16[2] = uVar26;
      uVar35 = *puVar22;
      uVar36 = puVar22[3];
      uVar26 = puVar22[2];
      puVar16[5] = puVar22[1];
      puVar16[4] = uVar35;
      puVar16[7] = uVar36;
      puVar16[6] = uVar26;
      uVar35 = *puVar50;
      uVar36 = puVar50[3];
      uVar26 = puVar50[2];
      puVar16[9] = puVar50[1];
      puVar16[8] = uVar35;
      puVar16[0xb] = uVar36;
      puVar16[10] = uVar26;
      uVar35 = *puVar21;
      uVar36 = puVar21[3];
      uVar26 = puVar21[2];
      puVar16[0xd] = puVar21[1];
      puVar16[0xc] = uVar35;
      puVar16[0xf] = uVar36;
      puVar16[0xe] = uVar26;
      uVar35 = 4;
      uVar26 = uVar46 - uVar31;
      if (4 < uVar31) {
LAB_106046c90:
        lVar34 = uVar35 << 5;
        uVar36 = uVar35;
        do {
          uVar37 = uVar36 + 1;
          puVar48 = puVar24 + uVar36 * 4;
          puVar16 = puVar17 + uVar36 * 4;
          uVar36 = *puVar48;
          uVar41 = puVar48[3];
          uVar39 = puVar48[2];
          puVar16[1] = puVar48[1];
          *puVar16 = uVar36;
          puVar16[3] = uVar41;
          puVar16[2] = uVar39;
          uVar36 = puVar16[2];
          if (uVar36 < puVar16[-2]) {
            uVar39 = puVar16[3];
            lVar29 = lVar34;
            do {
              puVar28 = (undefined8 *)((long)puVar17 + lVar29);
              puVar28[1] = puVar28[-3];
              *puVar28 = puVar28[-4];
              puVar28[3] = puVar28[-1];
              puVar28[2] = puVar28[-2];
              lVar29 = lVar29 + -0x20;
              puVar16 = puVar17;
              if (lVar29 == 0) goto LAB_106046ca4;
            } while (uVar36 < (ulong)puVar28[-6]);
            puVar16 = (ulong *)((long)puVar17 + lVar29);
LAB_106046ca4:
            uVar41 = *puVar48;
            puVar16[1] = puVar48[1];
            *puVar16 = uVar41;
            puVar28[-2] = uVar36;
            puVar28[-1] = uVar39;
          }
          lVar34 = lVar34 + 0x20;
          uVar36 = uVar37;
        } while (uVar37 < uVar31);
      }
    }
    puVar48 = puVar17 + uVar31 * 4;
    if (uVar35 < uVar26) {
      lVar34 = 0x20;
      uVar36 = uVar35;
      puVar16 = puVar48;
      do {
        uVar37 = uVar36 + 1;
        puVar21 = puVar24 + uVar31 * 4 + uVar36 * 4;
        puVar50 = puVar48 + uVar36 * 4;
        uVar36 = *puVar21;
        uVar41 = puVar21[3];
        uVar39 = puVar21[2];
        puVar50[1] = puVar21[1];
        *puVar50 = uVar36;
        puVar50[3] = uVar41;
        puVar50[2] = uVar39;
        uVar36 = puVar50[2];
        if (uVar36 < puVar50[-2]) {
          uVar39 = puVar50[3];
          puVar50 = puVar16;
          lVar29 = lVar34;
          do {
            puVar22 = puVar50 + uVar35 * 4;
            puVar22[1] = puVar22[-3];
            *puVar22 = puVar22[-4];
            puVar22[3] = puVar22[-1];
            puVar22[2] = puVar22[-2];
            puVar49 = puVar48;
            if (uVar35 * 0x20 - lVar29 == 0) goto LAB_106046d40;
            lVar29 = lVar29 + 0x20;
            puVar50 = puVar50 + -4;
          } while (uVar36 < puVar22[-6]);
          puVar49 = puVar50 + uVar35 * 4;
LAB_106046d40:
          uVar41 = *puVar21;
          puVar49[1] = puVar21[1];
          *puVar49 = uVar41;
          puVar22[-2] = uVar36;
          puVar22[-1] = uVar39;
        }
        lVar34 = lVar34 + -0x20;
        puVar16 = puVar16 + 4;
        uVar36 = uVar37;
      } while (uVar37 < uVar26);
    }
    lVar34 = uVar46 * 0x20;
    puVar16 = puVar17 + uVar46 * 4 + -4;
    puVar21 = puVar48 + -4;
    puVar50 = puVar24;
    do {
      puVar49 = puVar50;
      lVar34 = lVar34 + -0x20;
      puVar50 = (ulong *)((long)puVar24 + lVar34);
      bVar13 = puVar17[2] <= puVar48[2];
      puVar22 = puVar48;
      if (bVar13) {
        puVar22 = puVar17;
      }
      uVar35 = *puVar22;
      uVar36 = puVar22[3];
      uVar26 = puVar22[2];
      puVar49[1] = puVar22[1];
      *puVar49 = uVar35;
      puVar49[3] = uVar36;
      puVar49[2] = uVar26;
      puVar48 = puVar48 + (ulong)!bVar13 * 4;
      puVar17 = puVar17 + (ulong)bVar13 * 4;
      bVar13 = puVar21[2] <= puVar16[2];
      puVar22 = puVar21;
      if (bVar13) {
        puVar22 = puVar16;
      }
      uVar35 = *puVar22;
      uVar36 = puVar22[3];
      uVar26 = puVar22[2];
      puVar50[1] = puVar22[1];
      *puVar50 = uVar35;
      puVar50[3] = uVar36;
      puVar50[2] = uVar26;
      puVar16 = puVar16 + (ulong)bVar13 * -4;
      puVar21 = puVar21 + (ulong)!bVar13 * -4;
      uVar31 = uVar31 - 1;
      puVar50 = puVar49 + 4;
    } while (uVar31 != 0);
    if ((uVar46 & 1) != 0) {
      bVar13 = puVar21 + 4 <= puVar17;
      puVar24 = puVar17;
      if (bVar13) {
        puVar24 = puVar48;
      }
      uVar46 = *puVar24;
      uVar35 = puVar24[3];
      uVar31 = puVar24[2];
      puVar49[5] = puVar24[1];
      puVar49[4] = uVar46;
      puVar49[7] = uVar35;
      puVar49[6] = uVar31;
      puVar17 = puVar17 + (ulong)!bVar13 * 4;
      puVar48 = puVar48 + (ulong)bVar13 * 4;
    }
    if (puVar17 == puVar21 + 4 && puVar48 == puVar16 + 4) {
      return;
    }
LAB_106046eac:
    __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_106046eb0:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x106046eb4);
    (*pcVar9)();
  }
  *(ulong **)(puVar11 + -0x90) = puVar17 + -4;
  puVar49 = param_6;
  auVar8 = auVar58;
LAB_1060469f8:
  puVar48 = auVar8._8_8_;
  puVar24 = auVar8._0_8_;
  if ((int)uVar46 == 0) {
    FUN_106042dd0(puVar24,puVar48,puVar17,puVar18,1,*(undefined8 *)(puVar11 + -0x88));
    return;
  }
  if (puVar48 < (ulong *)0x40) {
    uVar31 = puVar24[2];
    uVar35 = (puVar24 + ((ulong)puVar48 >> 3) * 0x10)[2];
    uVar26 = (puVar24 + ((ulong)puVar48 >> 3) * 0x1c)[2];
    puVar16 = puVar24 + ((ulong)puVar48 >> 3) * 0x1c;
    if (uVar31 < uVar35 == uVar35 < uVar26) {
      puVar16 = puVar24 + ((ulong)puVar48 >> 3) * 0x10;
    }
    puVar21 = puVar24;
    if (uVar31 < uVar35 == uVar31 < uVar26) {
      puVar21 = puVar16;
    }
  }
  else {
    puVar21 = (ulong *)FUN_1060404c4(puVar24);
  }
  uVar46 = (ulong)((int)uVar46 - 1);
  param_7 = (ulong *)((ulong)((long)puVar21 - (long)puVar24) >> 5);
  uVar31 = *puVar21;
  uVar26 = puVar21[3];
  uVar35 = puVar21[2];
  *(ulong *)(puVar11 + -0x78) = puVar21[1];
  *(ulong *)(puVar11 + -0x80) = uVar31;
  *(ulong *)(puVar11 + -0x68) = uVar26;
  *(ulong *)(puVar11 + -0x70) = uVar35;
  puVar16 = puVar17 + (long)puVar48 * 4;
  puVar50 = puVar24 + (long)param_7 * 4;
  if ((puVar49 != (ulong *)0x0) && (puVar21[2] <= puVar49[2])) {
LAB_106046b7c:
    if (puVar18 < puVar48) goto LAB_106046eb0;
    puVar21 = (ulong *)0x0;
    puVar22 = puVar24 + (long)param_7 * 4;
    puVar49 = puVar24;
    puVar19 = puVar24;
    if (puVar22 <= puVar24) goto LAB_106046bc4;
LAB_106046b98:
    do {
      uVar31 = puVar49[2];
      uVar35 = puVar50[2];
      puVar16 = puVar16 + -4;
      puVar32 = puVar17;
      if (uVar35 < uVar31) {
        puVar32 = puVar16;
      }
      puVar32 = puVar32 + (long)puVar21 * 4;
      puVar19 = puVar49 + 4;
      uVar26 = *puVar49;
      uVar37 = puVar49[3];
      uVar36 = puVar49[2];
      puVar32[1] = puVar49[1];
      *puVar32 = uVar26;
      puVar32[3] = uVar37;
      puVar32[2] = uVar36;
      if (uVar35 >= uVar31) {
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
      puVar49 = puVar19;
    } while (puVar19 < puVar22);
LAB_106046bc4:
    while (param_7 != puVar48) {
      puVar16 = puVar16 + -4;
      puVar49 = puVar19 + 4;
      uVar31 = *puVar19;
      uVar26 = puVar19[3];
      uVar35 = puVar19[2];
      puVar22 = puVar17 + (long)puVar21 * 4;
      puVar22[1] = puVar19[1];
      *puVar22 = uVar31;
      puVar22[3] = uVar26;
      puVar22[2] = uVar35;
      puVar21 = (ulong *)((long)puVar21 + 1);
      puVar22 = puVar24 + (long)puVar48 * 4;
      puVar19 = puVar49;
      param_7 = puVar48;
      if (puVar49 < puVar22) goto LAB_106046b98;
    }
    _memcpy(puVar24,puVar17,(long)puVar21 << 5);
    uVar31 = (long)puVar48 - (long)puVar21;
    if (uVar31 == 0) {
      return;
    }
    puVar24 = puVar24 + (long)puVar21 * 4;
    auVar58._8_8_ = uVar31;
    auVar58._0_8_ = puVar24;
    puVar22 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar48 * 0x20);
    uVar35 = uVar31;
    puVar49 = puVar24;
    do {
      uVar26 = *puVar22;
      uVar37 = puVar22[3];
      uVar36 = puVar22[2];
      puVar49[1] = puVar22[1];
      *puVar49 = uVar26;
      puVar49[3] = uVar37;
      puVar49[2] = uVar36;
      uVar35 = uVar35 - 1;
      puVar22 = puVar22 + -4;
      puVar49 = puVar49 + 4;
    } while (uVar35 != 0);
    if (puVar21 <= puVar48) {
      puVar49 = (ulong *)0x0;
      auVar8 = auVar58;
      if (uVar31 < 0x21) goto LAB_106046860;
      goto LAB_1060469f8;
    }
    uVar52 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                       (puVar21,puVar48,puVar48,&UNK_10b4ae618);
    _memcpy(puVar24,puVar17,puVar18);
    auVar59 = __Unwind_Resume(uVar52);
    uVar31 = auVar59._8_8_;
    puVar28 = auVar59._0_8_;
    *(ulong **)(puVar11 + -0xf0) = puVar16;
    *(ulong **)(puVar11 + -0xe8) = puVar50;
    *(ulong **)(puVar11 + -0xe0) = puVar21;
    *(ulong **)(puVar11 + -0xd8) = puVar48;
    *(ulong *)(puVar11 + -0xd0) = uVar46;
    *(ulong **)(puVar11 + -200) = param_7;
    *(ulong **)(puVar11 + -0xc0) = puVar18;
    *(undefined8 *)(puVar11 + -0xb8) = uVar52;
    *(ulong **)(puVar11 + -0xb0) = puVar24;
    *(ulong **)(puVar11 + -0xa8) = puVar17;
    *(undefined1 **)(puVar11 + -0xa0) = puVar51;
    *(undefined8 *)(puVar11 + -0x98) = 0x106046ee8;
    if (uVar31 < 2) {
      return;
    }
    uVar26 = puVar28[3];
    uVar36 = puVar28[4];
    uVar35 = puVar28[1];
    uVar46 = uVar36;
    if (uVar35 <= uVar36) {
      uVar46 = uVar35;
    }
    iVar14 = _memcmp(uVar26,*puVar28,uVar46);
    lVar34 = uVar36 - uVar35;
    if (iVar14 != 0) {
      lVar34 = (long)iVar14;
    }
    if (lVar34 < 0) {
      if (uVar31 == 2) goto LAB_106046f9c;
      puVar24 = puVar28 + 7;
      uVar46 = 2;
      while( true ) {
        uVar37 = puVar24[-1];
        uVar39 = *puVar24;
        uVar35 = uVar39;
        if (uVar36 <= uVar39) {
          uVar35 = uVar36;
        }
        iVar14 = _memcmp(uVar37,uVar26,uVar35);
        lVar29 = uVar39 - uVar36;
        if (iVar14 != 0) {
          lVar29 = (long)iVar14;
        }
        if (-1 < lVar29) break;
        puVar24 = puVar24 + 3;
        uVar46 = uVar46 + 1;
        uVar26 = uVar37;
        uVar36 = uVar39;
        if (uVar31 == uVar46) goto LAB_106046fa8;
      }
    }
    else if (uVar31 == 2) {
LAB_106046f9c:
      uVar46 = 2;
    }
    else {
      puVar24 = puVar28 + 7;
      uVar46 = 2;
      while( true ) {
        uVar37 = puVar24[-1];
        uVar39 = *puVar24;
        uVar35 = uVar39;
        if (uVar36 <= uVar39) {
          uVar35 = uVar36;
        }
        iVar14 = _memcmp(uVar37,uVar26,uVar35);
        lVar29 = uVar39 - uVar36;
        if (iVar14 != 0) {
          lVar29 = (long)iVar14;
        }
        if (lVar29 < 0) break;
        puVar24 = puVar24 + 3;
        uVar46 = uVar46 + 1;
        uVar26 = uVar37;
        uVar36 = uVar39;
        if (uVar31 == uVar46) goto LAB_106046fa8;
      }
    }
    if (uVar46 == uVar31) {
LAB_106046fa8:
      if (lVar34 < 0) {
        uVar46 = uVar31 >> 1;
        puVar45 = puVar28 + 2;
        puVar28 = puVar28 + uVar31 * 3 + -1;
        do {
          uVar47 = puVar45[-1];
          uVar52 = puVar45[-2];
          uVar23 = puVar28[-2];
          puVar45[-1] = puVar28[-1];
          puVar45[-2] = uVar23;
          puVar28[-1] = uVar47;
          puVar28[-2] = uVar52;
          uVar52 = *puVar45;
          *puVar45 = *puVar28;
          *puVar28 = uVar52;
          uVar46 = uVar46 - 1;
          puVar45 = puVar45 + 3;
          puVar28 = puVar28 + -3;
        } while (uVar46 != 0);
      }
      return;
    }
    uVar31 = (ulong)((int)LZCOUNT(uVar31 | 1) << 1 ^ 0x7e);
    uVar23 = 0;
    puVar51 = *(undefined1 **)(puVar11 + -0xa0);
    uVar47 = *(undefined8 *)(puVar11 + -0x98);
    lVar29 = *(long *)(puVar11 + -0xb0);
    puVar20 = *(undefined8 **)(puVar11 + -0xa8);
    puVar42 = *(undefined8 **)(puVar11 + -0xc0);
    lVar40 = *(long *)(puVar11 + -0xb8);
    uVar52 = *(undefined8 *)(puVar11 + -0xd0);
    uVar46 = *(ulong *)(puVar11 + -200);
    puVar28 = *(undefined8 **)(puVar11 + -0xe0);
    puVar45 = *(undefined8 **)(puVar11 + -0xf0);
    lVar34 = *(long *)(puVar11 + -0xe8);
    puVar12 = puVar11 + -0x90;
    uVar35 = *(ulong *)(puVar11 + -0xd8);
    do {
      uVar26 = auVar59._8_8_;
      *(undefined8 **)(puVar12 + -0x60) = puVar45;
      *(long *)(puVar12 + -0x58) = lVar34;
      *(undefined8 **)(puVar12 + -0x50) = puVar28;
      *(ulong *)(puVar12 + -0x48) = uVar35;
      *(undefined8 *)(puVar12 + -0x40) = uVar52;
      *(ulong *)(puVar12 + -0x38) = uVar46;
      *(undefined8 **)(puVar12 + -0x30) = puVar42;
      *(long *)(puVar12 + -0x28) = lVar40;
      *(long *)(puVar12 + -0x20) = lVar29;
      *(undefined8 **)(puVar12 + -0x18) = puVar20;
      *(undefined1 **)(puVar12 + -0x10) = puVar51;
      *(undefined8 *)(puVar12 + -8) = uVar47;
      puVar51 = puVar12 + -0x10;
      while( true ) {
        puVar45 = auVar59._0_8_;
        uVar35 = auVar59._8_8_;
        if (uVar26 < 0x21) {
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
          if (uVar35 < 2) {
            return;
          }
          uVar46 = uVar35 >> 1;
          puVar28 = puVar45 + uVar46 * 3;
          puVar42 = (undefined8 *)(puVar12 + uVar46 * 0x18 + -0x4f0);
          *(undefined8 **)(puVar12 + -0x508) = puVar28;
          if (uVar35 < 8) {
            uVar52 = *puVar45;
            *(undefined8 *)(puVar12 + -0x4e8) = puVar45[1];
            *(undefined8 *)(puVar12 + -0x4f0) = uVar52;
            *(undefined8 *)(puVar12 + -0x4e0) = puVar45[2];
            uVar52 = *puVar28;
            puVar42[1] = puVar28[1];
            *puVar42 = uVar52;
            puVar42[2] = puVar28[2];
            uVar31 = 1;
          }
          else {
            FUN_106040b18(puVar45,puVar12 + -0x4f0);
            FUN_106040b18(puVar28,puVar42);
            uVar31 = 4;
          }
          *(ulong *)(puVar12 + -0x520) = uVar35;
          *(ulong *)(puVar12 + -0x518) = uVar46;
          *(ulong *)(puVar12 + -0x500) = uVar35 - uVar46;
          *(undefined8 **)(puVar12 + -0x4f8) = puVar45;
          *(ulong *)(puVar12 + -0x510) = uVar31 * 3;
          if (uVar46 <= uVar31) goto LAB_106041280;
          lVar34 = *(long *)(puVar12 + -0x510) << 3;
          uVar35 = uVar31 + 1;
          uVar26 = uVar31;
          goto LAB_1060411dc;
        }
        iVar14 = (int)uVar31;
        if (iVar14 == 0) {
          lVar34 = uVar35 + (uVar35 >> 1);
          if (lVar34 == 0) {
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
          *(ulong *)(puVar12 + -0x90) = uVar35;
          goto LAB_1060472b0;
        }
        *(undefined8 **)(puVar12 + -0x98) = puVar45;
        *(undefined8 *)(puVar12 + -0x90) = uVar23;
        puVar28 = puVar45 + (uVar35 >> 3) * 0xc;
        puVar42 = puVar45 + (uVar35 >> 3) * 0x15;
        if (uVar35 < 0x40) {
          *(int *)(puVar12 + -0x84) = iVar14;
          uVar52 = *puVar45;
          uVar31 = puVar45[1];
          uVar47 = *puVar28;
          uVar26 = puVar28[1];
          uVar46 = uVar31;
          if (uVar26 <= uVar31) {
            uVar46 = uVar26;
          }
          *(undefined8 *)(puVar12 + -0xa0) = uVar47;
          iVar14 = _memcmp(uVar52,uVar47,uVar46);
          uVar46 = uVar31 - uVar26;
          if (iVar14 != 0) {
            uVar46 = (long)iVar14;
          }
          uVar47 = *puVar42;
          uVar37 = puVar42[1];
          uVar36 = uVar31;
          if (uVar37 <= uVar31) {
            uVar36 = uVar37;
          }
          iVar14 = *(int *)(puVar12 + -0x84);
          iVar15 = _memcmp(uVar52,uVar47,uVar36);
          uVar31 = uVar31 - uVar37;
          if (iVar15 != 0) {
            uVar31 = (long)iVar15;
          }
          puVar45 = *(undefined8 **)(puVar12 + -0x98);
          puVar20 = puVar45;
          if (-1 < (long)(uVar31 ^ uVar46)) {
            uVar31 = uVar26;
            if (uVar37 <= uVar26) {
              uVar31 = uVar37;
            }
            iVar15 = _memcmp(*(undefined8 *)(puVar12 + -0xa0),uVar47,uVar31);
            uVar31 = uVar26 - uVar37;
            if (iVar15 != 0) {
              uVar31 = (long)iVar15;
            }
            puVar20 = puVar42;
            if (-1 < (long)(uVar31 ^ uVar46)) {
              puVar20 = puVar28;
            }
          }
        }
        else {
          puVar20 = (undefined8 *)FUN_1060409e4(puVar45,puVar28,puVar42);
        }
        *(int *)(puVar12 + -0x84) = iVar14 + -1;
        *(ulong *)(puVar12 + -0xa0) = uVar35;
        puVar28 = *(undefined8 **)(puVar12 + -0x90);
        if (puVar28 == (undefined8 *)0x0) break;
        puVar42 = (undefined8 *)((long)puVar45 + ((long)puVar20 - (long)puVar45));
        uVar31 = puVar28[1];
        uVar26 = puVar42[1];
        uVar46 = uVar31;
        if (uVar26 <= uVar31) {
          uVar46 = uVar26;
        }
        iVar14 = _memcmp(*puVar28,*puVar42,uVar46);
        lVar34 = uVar31 - uVar26;
        if (iVar14 != 0) {
          lVar34 = (long)iVar14;
        }
        if (lVar34 < 0) break;
        uVar46 = 0;
        uVar47 = puVar45[1];
        uVar52 = *puVar45;
        *(undefined8 *)(puVar12 + -0x70) = puVar45[2];
        *(undefined8 *)(puVar12 + -0x78) = uVar47;
        *(undefined8 *)(puVar12 + -0x80) = uVar52;
        uVar47 = puVar42[1];
        uVar52 = *puVar42;
        puVar45[2] = puVar42[2];
        puVar45[1] = uVar47;
        *puVar45 = uVar52;
        uVar47 = *(undefined8 *)(puVar12 + -0x78);
        uVar52 = *(undefined8 *)(puVar12 + -0x80);
        puVar42[2] = *(undefined8 *)(puVar12 + -0x70);
        puVar42[1] = uVar47;
        *puVar42 = uVar52;
        uVar52 = puVar45[3];
        *(undefined8 *)(puVar12 + -0x78) = puVar45[4];
        *(undefined8 *)(puVar12 + -0x80) = uVar52;
        *(undefined8 *)(puVar12 + -0x70) = puVar45[5];
        puVar28 = puVar45 + 6;
        uVar52 = *puVar45;
        uVar31 = puVar45[1];
        lVar34 = uVar35 * 0x18 + -0x48;
        lVar29 = uVar35 * 0x18 + -0x30;
        do {
          lVar40 = lVar29;
          lVar43 = lVar34;
          uVar36 = puVar28[1];
          uVar26 = uVar31;
          if (uVar36 <= uVar31) {
            uVar26 = uVar36;
          }
          iVar14 = _memcmp(uVar52,*puVar28,uVar26);
          uVar26 = uVar31 - uVar36;
          if (iVar14 != 0) {
            uVar26 = (long)iVar14;
          }
          puVar42 = puVar45 + uVar46 * 3 + 3;
          uVar47 = puVar42[2];
          uVar23 = *puVar42;
          puVar28[-2] = puVar42[1];
          puVar28[-3] = uVar23;
          puVar28[-1] = uVar47;
          uVar23 = puVar28[1];
          uVar47 = *puVar28;
          uVar46 = uVar46 - ((long)~uVar26 >> 0x3f);
          puVar42[2] = puVar28[2];
          puVar42[1] = uVar23;
          *puVar42 = uVar47;
          puVar28 = puVar28 + 3;
          lVar34 = lVar43 + -0x18;
          lVar29 = lVar40 + -0x18;
        } while (puVar28 < puVar45 + uVar35 * 3);
        do {
          puVar42 = (undefined8 *)(puVar12 + -0x80);
          if (lVar43 != 0) {
            puVar42 = puVar28;
          }
          uVar26 = puVar42[1];
          uVar35 = uVar31;
          if (uVar26 <= uVar31) {
            uVar35 = uVar26;
          }
          iVar14 = _memcmp(uVar52,*puVar42,uVar35);
          uVar35 = uVar31 - uVar26;
          if (iVar14 != 0) {
            uVar35 = (long)iVar14;
          }
          puVar20 = puVar45 + uVar46 * 3 + 3;
          uVar47 = puVar20[2];
          uVar23 = *puVar20;
          puVar28[-2] = puVar20[1];
          puVar28[-3] = uVar23;
          puVar28[-1] = uVar47;
          uVar23 = puVar42[1];
          uVar47 = *puVar42;
          puVar20[2] = puVar42[2];
          puVar20[1] = uVar23;
          *puVar20 = uVar47;
          uVar46 = uVar46 - ((long)~uVar35 >> 0x3f);
          puVar28 = puVar28 + 3;
          lVar43 = lVar43 + -0x18;
          lVar40 = lVar40 + -0x18;
        } while (lVar40 != 0);
        uVar26 = *(ulong *)(puVar12 + -0xa0);
        if (uVar26 <= uVar46) goto LAB_1060478ac;
        uVar23 = 0;
        puVar45 = *(undefined8 **)(puVar12 + -0x98);
        puVar28 = puVar45 + uVar46 * 3;
        uVar47 = puVar45[1];
        uVar52 = *puVar45;
        *(undefined8 *)(puVar12 + -0x70) = puVar45[2];
        *(undefined8 *)(puVar12 + -0x78) = uVar47;
        *(undefined8 *)(puVar12 + -0x80) = uVar52;
        uVar47 = puVar28[1];
        uVar52 = *puVar28;
        puVar45[2] = puVar28[2];
        puVar45[1] = uVar47;
        *puVar45 = uVar52;
        uVar47 = *(undefined8 *)(puVar12 + -0x78);
        uVar52 = *(undefined8 *)(puVar12 + -0x80);
        puVar28[2] = *(undefined8 *)(puVar12 + -0x70);
        puVar28[1] = uVar47;
        *puVar28 = uVar52;
        uVar26 = ~uVar46 + uVar26;
        auVar59._8_8_ = uVar26;
        auVar59._0_8_ = puVar28 + 3;
        uVar31 = (ulong)*(uint *)(puVar12 + -0x84);
      }
      uVar46 = 0;
      puVar28 = (undefined8 *)((long)puVar45 + ((long)puVar20 - (long)puVar45));
      uVar47 = puVar45[1];
      uVar52 = *puVar45;
      *(undefined8 *)(puVar12 + -0x70) = puVar45[2];
      *(undefined8 *)(puVar12 + -0x78) = uVar47;
      *(undefined8 *)(puVar12 + -0x80) = uVar52;
      uVar47 = puVar28[1];
      uVar52 = *puVar28;
      puVar45[2] = puVar28[2];
      puVar45[1] = uVar47;
      *puVar45 = uVar52;
      uVar47 = *(undefined8 *)(puVar12 + -0x78);
      uVar52 = *(undefined8 *)(puVar12 + -0x80);
      puVar28[2] = *(undefined8 *)(puVar12 + -0x70);
      puVar28[1] = uVar47;
      *puVar28 = uVar52;
      uVar52 = puVar45[3];
      *(undefined8 *)(puVar12 + -0x78) = puVar45[4];
      *(undefined8 *)(puVar12 + -0x80) = uVar52;
      *(undefined8 *)(puVar12 + -0x70) = puVar45[5];
      puVar42 = puVar45 + uVar35 * 3;
      puVar28 = puVar45 + 6;
      uVar52 = *puVar45;
      uVar31 = puVar45[1];
      lVar34 = uVar35 * 0x18 + -0x30;
      lVar29 = uVar35 * 0x18 + -0x48;
      do {
        lVar40 = lVar29;
        lVar43 = lVar34;
        uVar26 = puVar28[1];
        uVar35 = uVar26;
        if (uVar31 <= uVar26) {
          uVar35 = uVar31;
        }
        iVar14 = _memcmp(*puVar28,uVar52,uVar35);
        lVar34 = uVar26 - uVar31;
        if (iVar14 != 0) {
          lVar34 = (long)iVar14;
        }
        puVar20 = puVar45 + uVar46 * 3 + 3;
        uVar47 = puVar20[2];
        uVar23 = *puVar20;
        puVar28[-2] = puVar20[1];
        puVar28[-3] = uVar23;
        puVar28[-1] = uVar47;
        uVar23 = puVar28[1];
        uVar47 = *puVar28;
        uVar46 = uVar46 - (lVar34 >> 0x3f);
        puVar20[2] = puVar28[2];
        puVar20[1] = uVar23;
        *puVar20 = uVar47;
        puVar28 = puVar28 + 3;
        lVar34 = lVar43 + -0x18;
        lVar29 = lVar40 + -0x18;
      } while (puVar28 < puVar42);
      do {
        puVar20 = (undefined8 *)(puVar12 + -0x80);
        if (lVar40 != 0) {
          puVar20 = puVar28;
        }
        uVar35 = puVar20[1];
        lVar29 = uVar35 - uVar31;
        if (uVar31 <= uVar35) {
          uVar35 = uVar31;
        }
        iVar14 = _memcmp(*puVar20,uVar52,uVar35);
        lVar34 = lVar29;
        if (iVar14 != 0) {
          lVar34 = (long)iVar14;
        }
        puVar25 = puVar45 + uVar46 * 3 + 3;
        uVar47 = puVar25[2];
        uVar23 = *puVar25;
        puVar28[-2] = puVar25[1];
        puVar28[-3] = uVar23;
        puVar28[-1] = uVar47;
        uVar23 = puVar20[1];
        uVar47 = *puVar20;
        puVar25[2] = puVar20[2];
        puVar25[1] = uVar23;
        *puVar25 = uVar47;
        uVar46 = uVar46 - (lVar34 >> 0x3f);
        puVar28 = puVar28 + 3;
        lVar40 = lVar40 + -0x18;
        lVar43 = lVar43 + -0x18;
      } while (lVar43 != 0);
      uVar31 = *(ulong *)(puVar12 + -0xa0);
      if (uVar31 <= uVar46) {
LAB_1060478ac:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1060478b0);
        (*pcVar9)();
      }
      puVar45 = *(undefined8 **)(puVar12 + -0x98);
      auVar59._8_8_ = uVar46;
      auVar59._0_8_ = puVar45;
      uVar23 = *(undefined8 *)(puVar12 + -0x90);
      puVar20 = puVar45 + uVar46 * 3;
      uVar53 = puVar45[1];
      uVar47 = *puVar45;
      *(undefined8 *)(puVar12 + -0x70) = puVar45[2];
      *(undefined8 *)(puVar12 + -0x78) = uVar53;
      *(undefined8 *)(puVar12 + -0x80) = uVar47;
      uVar53 = puVar20[1];
      uVar47 = *puVar20;
      puVar45[2] = puVar20[2];
      puVar45[1] = uVar53;
      *puVar45 = uVar47;
      uVar53 = *(undefined8 *)(puVar12 + -0x78);
      uVar47 = *(undefined8 *)(puVar12 + -0x80);
      puVar20[2] = *(undefined8 *)(puVar12 + -0x70);
      puVar20[1] = uVar53;
      *puVar20 = uVar47;
      puVar45 = puVar20 + 3;
      lVar34 = uVar31 + ~uVar46;
      uVar31 = (ulong)*(uint *)(puVar12 + -0x84);
      uVar47 = 0x10604787c;
      puVar12 = puVar12 + -0xa0;
      uVar35 = uVar31;
    } while( true );
  }
  if (puVar18 < puVar48) goto LAB_106046eb0;
  puVar19 = (ulong *)0x0;
  puVar21 = puVar24 + (long)param_7 * 4;
  puVar22 = puVar24;
  puVar32 = puVar24;
  puVar27 = puVar16;
  puVar30 = param_7;
  if (puVar21 <= puVar24) goto LAB_106046ae0;
LAB_106046ab4:
  do {
    uVar31 = puVar22[2];
    uVar35 = puVar50[2];
    puVar27 = puVar27 + -4;
    puVar33 = puVar17;
    if (uVar35 <= uVar31) {
      puVar33 = puVar27;
    }
    puVar33 = puVar33 + (long)puVar19 * 4;
    puVar32 = puVar22 + 4;
    uVar26 = *puVar22;
    uVar37 = puVar22[3];
    uVar36 = puVar22[2];
    puVar33[1] = puVar22[1];
    *puVar33 = uVar26;
    puVar33[3] = uVar37;
    puVar33[2] = uVar36;
    if (uVar35 > uVar31) {
      puVar19 = (ulong *)((long)puVar19 + 1);
    }
    puVar22 = puVar32;
  } while (puVar32 < puVar21);
LAB_106046ae0:
  while (puVar30 != puVar48) {
    puVar27 = puVar27 + -4;
    puVar22 = puVar32 + 4;
    uVar31 = *puVar32;
    uVar26 = puVar32[3];
    uVar35 = puVar32[2];
    puVar21 = puVar27 + (long)puVar19 * 4;
    puVar21[1] = puVar32[1];
    *puVar21 = uVar31;
    puVar21[3] = uVar26;
    puVar21[2] = uVar35;
    puVar21 = puVar24 + (long)puVar48 * 4;
    puVar32 = puVar22;
    puVar30 = puVar48;
    if (puVar22 < puVar21) goto LAB_106046ab4;
  }
  _memcpy(puVar24,puVar17,(long)puVar19 << 5);
  lVar34 = (long)puVar48 - (long)puVar19;
  auVar58._8_8_ = lVar34;
  auVar58._0_8_ = puVar24 + (long)puVar19 * 4;
  if (lVar34 != 0) {
    puVar21 = (ulong *)(*(long *)(puVar11 + -0x90) + (long)puVar48 * 0x20);
    puVar22 = puVar24 + (long)puVar19 * 4;
    do {
      uVar31 = *puVar21;
      uVar26 = puVar21[3];
      uVar35 = puVar21[2];
      puVar22[1] = puVar21[1];
      *puVar22 = uVar31;
      puVar22[3] = uVar26;
      puVar22[2] = uVar35;
      lVar34 = lVar34 + -1;
      puVar21 = puVar21 + -4;
      puVar22 = puVar22 + 4;
    } while (lVar34 != 0);
  }
  if (puVar19 == (ulong *)0x0) goto LAB_106046b7c;
  if (puVar48 < puVar19) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68ef,0x13,&UNK_10b4ae600);
    goto LAB_106046eac;
  }
  param_6 = (ulong *)(puVar11 + -0x80);
  puVar24 = *(ulong **)(puVar11 + -0x88);
  uVar52 = 0x106046b6c;
  puVar11 = puVar11 + -0x90;
  puVar22 = puVar17;
  puVar48 = puVar18;
  uVar31 = uVar46;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17hb8c99fcc29b80e86E;
LAB_1060472b0:
  uVar31 = lVar34 - 1;
  uVar46 = uVar31 - uVar35;
  if (uVar31 < uVar35) {
    uVar46 = 0;
    puVar28 = puVar45 + uVar31 * 3;
    uVar52 = puVar45[2];
    uVar53 = puVar45[1];
    uVar23 = *puVar45;
    uVar47 = puVar28[2];
    uVar54 = *puVar28;
    puVar45[1] = puVar28[1];
    *puVar45 = uVar54;
    puVar45[2] = uVar47;
    puVar28[1] = uVar53;
    *puVar28 = uVar23;
    puVar28[2] = uVar52;
  }
  *(ulong *)(puVar12 + -0x88) = uVar31;
  if (uVar31 <= uVar35) {
    uVar35 = uVar31;
  }
  while (uVar31 = (uVar46 & 0x3fffffffffffffff) << 1 | 1, uVar31 < uVar35) {
    uVar26 = uVar46 * 2 + 2;
    if (uVar26 < uVar35) {
      uVar37 = (puVar45 + uVar31 * 3)[1];
      uVar39 = (puVar45 + uVar26 * 3)[1];
      uVar36 = uVar37;
      if (uVar39 <= uVar37) {
        uVar36 = uVar39;
      }
      iVar14 = _memcmp(puVar45[uVar31 * 3],puVar45[uVar26 * 3],uVar36);
      lVar34 = uVar37 - uVar39;
      if (iVar14 != 0) {
        lVar34 = (long)iVar14;
      }
      uVar31 = uVar31 - (lVar34 >> 0x3f);
    }
    puVar28 = puVar45 + uVar46 * 3;
    puVar42 = puVar45 + uVar31 * 3;
    uVar52 = *puVar28;
    uVar26 = puVar28[1];
    uVar47 = *puVar42;
    uVar36 = puVar42[1];
    uVar46 = uVar26;
    if (uVar36 <= uVar26) {
      uVar46 = uVar36;
    }
    iVar14 = _memcmp(uVar52,uVar47,uVar46);
    lVar34 = uVar26 - uVar36;
    if (iVar14 != 0) {
      lVar34 = (long)iVar14;
    }
    if (-1 < lVar34) break;
    *puVar28 = uVar47;
    puVar28[1] = uVar36;
    *puVar42 = uVar52;
    puVar42[1] = uVar26;
    uVar52 = puVar28[2];
    puVar28[2] = puVar42[2];
    puVar42[2] = uVar52;
    uVar46 = uVar31;
  }
  uVar35 = *(ulong *)(puVar12 + -0x90);
  lVar34 = *(long *)(puVar12 + -0x88);
  if (lVar34 == 0) {
    return;
  }
  goto LAB_1060472b0;
LAB_1060411dc:
  do {
    uVar37 = uVar35;
    puVar45 = puVar45 + uVar26 * 3;
    puVar28 = (undefined8 *)(puVar12 + uVar26 * 0x18 + -0x4f0);
    uVar52 = *puVar45;
    puVar28[1] = puVar45[1];
    *puVar28 = uVar52;
    puVar28[2] = puVar45[2];
    uVar52 = *puVar28;
    uVar26 = puVar28[1];
    uVar36 = puVar28[-2];
    uVar35 = uVar26;
    if (uVar36 <= uVar26) {
      uVar35 = uVar36;
    }
    iVar14 = _memcmp(uVar52,puVar28[-3],uVar35);
    lVar29 = uVar26 - uVar36;
    if (iVar14 != 0) {
      lVar29 = (long)iVar14;
    }
    if (lVar29 < 0) {
      uVar47 = puVar28[2];
      lVar29 = lVar34;
      do {
        lVar40 = lVar29;
        puVar28 = (undefined8 *)(puVar12 + -0x4f0);
        puVar45 = (undefined8 *)((long)puVar28 + lVar40);
        puVar45[1] = puVar45[-2];
        *puVar45 = puVar45[-3];
        puVar45[2] = puVar45[-1];
        if (lVar40 + -0x18 == 0) goto LAB_1060411bc;
        uVar35 = *(ulong *)(puVar12 + lVar40 + -0x518);
        uVar46 = uVar26;
        if (uVar35 <= uVar26) {
          uVar46 = uVar35;
        }
        iVar14 = _memcmp(uVar52,*(undefined8 *)(puVar12 + lVar40 + -0x520),uVar46);
        lVar43 = uVar26 - uVar35;
        if (iVar14 != 0) {
          lVar43 = (long)iVar14;
        }
        lVar29 = lVar40 + -0x18;
      } while (lVar43 < 0);
      puVar28 = (undefined8 *)(puVar12 + lVar40 + -0x508);
LAB_1060411bc:
      *puVar28 = uVar52;
      puVar28[1] = uVar26;
      puVar28[2] = uVar47;
      uVar46 = *(ulong *)(puVar12 + -0x518);
    }
    lVar34 = lVar34 + 0x18;
    uVar35 = uVar37;
    if (uVar37 < uVar46) {
      uVar35 = uVar37 + 1;
    }
    puVar45 = *(undefined8 **)(puVar12 + -0x4f8);
    uVar26 = uVar37;
  } while (uVar37 < uVar46);
LAB_106041280:
  if (uVar31 < *(ulong *)(puVar12 + -0x500)) {
    lVar34 = *(long *)(puVar12 + -0x510);
    lVar29 = 0x18;
    puVar28 = puVar42;
    do {
      uVar26 = uVar31 + 1;
      puVar20 = (undefined8 *)(*(long *)(puVar12 + -0x508) + uVar31 * 0x18);
      puVar25 = puVar42 + uVar31 * 3;
      uVar52 = *puVar20;
      puVar25[1] = puVar20[1];
      *puVar25 = uVar52;
      puVar25[2] = puVar20[2];
      uVar52 = *puVar25;
      uVar31 = puVar25[1];
      uVar35 = puVar25[-2];
      uVar46 = uVar31;
      if (uVar35 <= uVar31) {
        uVar46 = uVar35;
      }
      iVar14 = _memcmp(uVar52,puVar25[-3],uVar46);
      lVar40 = uVar31 - uVar35;
      if (iVar14 != 0) {
        lVar40 = (long)iVar14;
      }
      if (lVar40 < 0) {
        *(undefined8 *)(puVar12 + -0x510) = puVar25[2];
        puVar45 = puVar28;
        lVar40 = lVar29;
        do {
          puVar20 = puVar45 + lVar34;
          puVar20[1] = puVar20[-2];
          *puVar20 = puVar20[-3];
          puVar20[2] = puVar20[-1];
          puVar25 = puVar42;
          if (lVar34 * 8 - lVar40 == 0) goto LAB_1060412a8;
          uVar35 = puVar20[-5];
          uVar46 = uVar31;
          if (uVar35 <= uVar31) {
            uVar46 = uVar35;
          }
          iVar14 = _memcmp(uVar52,puVar20[-6],uVar46);
          lVar43 = uVar31 - uVar35;
          if (iVar14 != 0) {
            lVar43 = (long)iVar14;
          }
          lVar40 = lVar40 + 0x18;
          puVar45 = puVar45 + -3;
        } while (lVar43 < 0);
        puVar25 = puVar45 + lVar34;
LAB_1060412a8:
        puVar45 = *(undefined8 **)(puVar12 + -0x4f8);
        *puVar25 = uVar52;
        puVar25[1] = uVar31;
        puVar25[2] = *(undefined8 *)(puVar12 + -0x510);
      }
      lVar29 = lVar29 + -0x18;
      puVar28 = puVar28 + 3;
      uVar31 = uVar26;
    } while (uVar26 < *(ulong *)(puVar12 + -0x500));
  }
  lVar34 = *(long *)(puVar12 + -0x520) * 0x18;
  puVar28 = (undefined8 *)(puVar12 + -0x4f0);
  puVar20 = puVar28 + *(long *)(puVar12 + -0x520) * 3 + -3;
  puVar25 = puVar42 + -3;
  lVar29 = *(long *)(puVar12 + -0x518);
  do {
    puVar44 = puVar45;
    lVar34 = lVar34 + -0x18;
    puVar45 = (undefined8 *)(*(long *)(puVar12 + -0x4f8) + lVar34);
    uVar31 = puVar42[1];
    uVar35 = puVar28[1];
    uVar46 = uVar31;
    if (uVar35 <= uVar31) {
      uVar46 = uVar35;
    }
    iVar14 = _memcmp(*puVar42,*puVar28,uVar46);
    uVar46 = uVar31 - uVar35;
    if (iVar14 != 0) {
      uVar46 = (long)iVar14;
    }
    puVar2 = puVar28;
    if (0x7fffffffffffffff < uVar46) {
      puVar2 = puVar42;
    }
    uVar52 = *puVar2;
    puVar44[1] = puVar2[1];
    *puVar44 = uVar52;
    puVar44[2] = puVar2[2];
    puVar42 = puVar42 + ((long)uVar46 >> 0x3f) * -3;
    puVar28 = (undefined8 *)((long)puVar28 + ((ulong)~(uint)((long)uVar46 >> 0x3f) & 0x18));
    uVar31 = puVar20[1];
    uVar35 = puVar25[1];
    uVar46 = uVar31;
    if (uVar35 <= uVar31) {
      uVar46 = uVar35;
    }
    iVar14 = _memcmp(*puVar20,*puVar25,uVar46);
    uVar46 = uVar31 - uVar35;
    if (iVar14 != 0) {
      uVar46 = (long)iVar14;
    }
    puVar2 = puVar20;
    if (0x7fffffffffffffff < uVar46) {
      puVar2 = puVar25;
    }
    uVar52 = *puVar2;
    puVar45[1] = puVar2[1];
    *puVar45 = uVar52;
    puVar45[2] = puVar2[2];
    uVar1 = (uint)((long)uVar46 >> 0x3f);
    puVar20 = puVar20 + (long)(int)~uVar1 * 3;
    puVar25 = puVar25 + (long)(int)uVar1 * 3;
    lVar29 = lVar29 + -1;
    puVar45 = puVar44 + 3;
  } while (lVar29 != 0);
  if ((*(ulong *)(puVar12 + -0x520) & 1) != 0) {
    bVar13 = puVar25 + 3 <= puVar28;
    puVar45 = puVar28;
    if (bVar13) {
      puVar45 = puVar42;
    }
    uVar52 = *puVar45;
    puVar44[4] = puVar45[1];
    puVar44[3] = uVar52;
    puVar44[5] = puVar45[2];
    lVar34 = 0x18;
    if (bVar13) {
      lVar34 = 0;
    }
    puVar28 = (undefined8 *)((long)puVar28 + lVar34);
    lVar34 = 0;
    if (bVar13) {
      lVar34 = 0x18;
    }
    puVar42 = (undefined8 *)((long)puVar42 + lVar34);
  }
  if (puVar28 == puVar25 + 3 && puVar42 == puVar20 + 3) {
    return;
  }
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1060414cc);
  (*pcVar9)();
}

