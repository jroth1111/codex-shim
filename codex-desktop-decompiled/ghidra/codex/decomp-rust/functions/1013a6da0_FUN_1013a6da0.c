
void FUN_1013a6da0(undefined1 *param_1,byte *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long *plVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long lStack_230;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 uStack_31;
  
  bVar5 = *param_2;
  if (bVar5 < 0xd) {
    if (bVar5 == 1) {
      bVar5 = param_2[1];
      *param_1 = 1;
      param_1[1] = bVar5;
      return;
    }
    if (bVar5 == 4) {
      uVar12 = *(undefined8 *)(param_2 + 8);
      *param_1 = 4;
      *(undefined8 *)(param_1 + 8) = uVar12;
      return;
    }
    if (bVar5 != 0xc) {
LAB_1013a70a4:
      uVar12 = FUN_108855c40(param_2,&uStack_31,&UNK_10b20efe0);
      *(undefined8 *)(param_1 + 8) = uVar12;
      *param_1 = 0x17;
      return;
    }
    plVar35 = *(long **)(param_2 + 0x10);
    lVar19 = *(long *)(param_2 + 0x18);
    if (lVar19 == 0) {
      plVar11 = (long *)0x1;
LAB_1013a7064:
      _memcpy(plVar11,plVar35,lVar19);
    }
    else {
      if (lVar19 != 0xb) {
        plVar11 = (long *)_malloc(lVar19);
        if (plVar11 == (long *)0x0) {
LAB_1013a70d0:
          func_0x0001087c9084(1,lVar19);
LAB_1013a70dc:
          auVar37 = func_0x0001087c9084(1,0xb);
          pcVar17 = auVar37._8_8_;
          puVar13 = auVar37._0_8_;
          if (*pcVar17 != '\x15') {
            FUN_108855bf0(puVar13,pcVar17,&puStack_190,&UNK_10b213608);
            return;
          }
          lVar19 = *(long *)(pcVar17 + 0x10);
          lVar18 = lVar19 + *(long *)(pcVar17 + 0x18) * 0x40;
          puStack_1e8 = (undefined8 *)0x0;
          lStack_1d8 = 0;
          uVar30 = 0;
          if (*(long *)(pcVar17 + 0x18) != 0) {
            puVar14 = (undefined8 *)0x0;
            lStack_230 = 0;
LAB_1013a7160:
            func_0x0001004e0914(&puStack_190,lVar19);
            puVar23 = puStack_178;
            puVar22 = puStack_180;
            puVar20 = puStack_188;
            if (puStack_190 == (undefined8 *)0x2) {
              FUN_1004dfff4(&puStack_190,lVar19 + 0x20);
              puVar34 = puStack_178;
              puVar29 = puStack_180;
              puVar15 = puStack_188;
              puVar26 = puStack_190;
              uVar2 = uStack_1e0;
              if (puStack_190 != (undefined8 *)0x2) {
                puStack_1a0 = puStack_160;
                puStack_1c8 = puStack_150;
                uStack_1d0 = uStack_158;
                uStack_1b8 = uStack_140;
                uStack_1c0 = uStack_148;
                puStack_1a8 = puStack_168;
                puStack_1b0 = puStack_170;
                if (puVar20 != (undefined8 *)0x0) {
                  _free(puVar22);
                }
                goto LAB_1013a7be0;
              }
              lVar19 = lVar19 + 0x40;
              uVar30 = uVar30 + 1;
              puStack_1a8 = puStack_180;
              puStack_1b0 = puStack_188;
              puStack_1a0 = puStack_178;
              if (puVar20 != (undefined8 *)0x8000000000000000) {
                puStack_208 = puVar14;
                uVar32 = uStack_1e0;
                if (puVar14 != (undefined8 *)0x0) {
                  do {
                    uVar6 = *(ushort *)((long)puStack_208 + 0x21a);
                    uVar24 = (ulong)uVar6;
                    puVar26 = puStack_208 + 1;
                    lVar27 = uVar24 * 0x18;
                    uVar31 = 0xffffffffffffffff;
                    puVar15 = puVar26;
                    plVar11 = puStack_208 + 0x1f;
                    do {
                      plVar35 = plVar11;
                      uVar36 = uVar24;
                      if (lVar27 == 0) goto joined_r0x0001013a7264;
                      puVar34 = (undefined8 *)puVar15[2];
                      puVar29 = puVar23;
                      if (puVar34 <= puVar23) {
                        puVar29 = puVar34;
                      }
                      iVar10 = _memcmp(puVar22,puVar15[1],puVar29);
                      lVar4 = (long)puVar23 - (long)puVar34;
                      if (iVar10 != 0) {
                        lVar4 = (long)iVar10;
                      }
                      cVar1 = 0 < lVar4;
                      if (lVar4 < 0) {
                        cVar1 = -1;
                      }
                      lVar27 = lVar27 + -0x18;
                      plVar11 = plVar35 + 3;
                      uVar31 = uVar31 + 1;
                      puVar15 = puVar15 + 3;
                    } while (cVar1 == '\x01');
                    uVar36 = uVar31;
                    if (cVar1 == '\0') {
                      if (puVar20 != (undefined8 *)0x0) {
                        _free(puVar22);
                      }
                      lVar27 = *plVar11;
                      lVar4 = plVar35[4];
                      lVar28 = plVar35[5];
                      plVar35[4] = (long)puStack_1a8;
                      *plVar11 = (long)puStack_1b0;
                      plVar35[5] = (long)puStack_1a0;
                      if (lVar27 != -0x8000000000000000) {
                        if (lVar28 != 0) {
                          puVar20 = (undefined8 *)(lVar4 + 8);
                          do {
                            if (puVar20[-1] != 0) {
                              _free(*puVar20);
                            }
                            puVar20 = puVar20 + 3;
                            lVar28 = lVar28 + -1;
                          } while (lVar28 != 0);
                        }
                        if (lVar27 != 0) {
                          _free(lVar4);
                        }
                      }
                      goto joined_r0x0001013a715c;
                    }
joined_r0x0001013a7264:
                    if (uVar32 == 0) goto LAB_1013a7354;
                    puStack_208 = (undefined8 *)puStack_208[uVar36 + 0x44];
                    uVar32 = uVar32 - 1;
                  } while( true );
                }
                puVar14 = (undefined8 *)_malloc(0x220);
                if (puVar14 == (undefined8 *)0x0) {
                  func_0x0001087c906c(8,0x220);
                  goto LAB_1013a7d2c;
                }
                uStack_1e0 = 0;
                *(undefined2 *)((long)puVar14 + 0x21a) = 1;
                *puVar14 = 0;
                puVar14[1] = puVar20;
                puVar14[2] = puVar22;
                puVar14[3] = puVar23;
                puVar14[0x23] = puStack_1a8;
                puVar14[0x22] = puStack_1b0;
                puVar14[0x24] = puStack_1a0;
                puStack_1e8 = puVar14;
                goto LAB_1013a7314;
              }
              goto LAB_1013a7afc;
            }
            puStack_1a0 = puStack_160;
            puStack_1c8 = puStack_150;
            uStack_1d0 = uStack_158;
            uStack_1b8 = uStack_140;
            uStack_1c0 = uStack_148;
            puStack_1a8 = puStack_168;
            puStack_1b0 = puStack_170;
            puVar26 = puStack_190;
            puVar15 = puStack_188;
            puVar29 = puStack_180;
            puVar34 = puStack_178;
LAB_1013a7be0:
            puVar13[5] = puStack_1a8;
            puVar13[4] = puStack_1b0;
            puVar13[6] = puStack_1a0;
            *puVar13 = puVar26;
            puVar13[1] = puVar15;
            puVar13[2] = puVar29;
            puVar13[3] = puVar34;
            puVar13[8] = puStack_1c8;
            puVar13[7] = uStack_1d0;
            puVar13[10] = uStack_1b8;
            puVar13[9] = uStack_1c0;
            ppuVar16 = &puStack_1e8;
            goto LAB_1013a7c08;
          }
LAB_1013a7afc:
          puVar13[2] = uStack_1e0;
          puVar13[1] = puStack_1e8;
          puVar13[3] = lStack_1d8;
          *puVar13 = 2;
          uStack_1f8 = puVar13[2];
          puStack_200 = (undefined8 *)puVar13[1];
          uStack_1f0 = puVar13[3];
          uVar2 = lVar18 - lVar19;
          if ((uVar2 != 0) &&
             (uStack_1d0 = uVar30,
             FUN_1087e427c(&puStack_190,uVar30 + (uVar2 >> 6),&uStack_1d0,&UNK_10b23a190),
             puStack_190 != (undefined8 *)0x2)) {
            puVar13[5] = puStack_168;
            puVar13[4] = puStack_170;
            puVar13[7] = uStack_158;
            puVar13[6] = puStack_160;
            puVar13[9] = uStack_148;
            puVar13[8] = puStack_150;
            puVar13[10] = uStack_140;
            puVar13[1] = puStack_188;
            *puVar13 = puStack_190;
            puVar13[3] = puStack_178;
            puVar13[2] = puStack_180;
            ppuVar16 = &puStack_200;
LAB_1013a7c08:
            FUN_100d1d094(ppuVar16);
            return;
          }
LAB_1013a7c20:
          *puVar13 = 2;
          return;
        }
        goto LAB_1013a7064;
      }
      if (*plVar35 == 0x697461746f6e6e61 && *(long *)((long)plVar35 + 3) == 0x736e6f697461746f)
      goto LAB_1013a7098;
      plVar11 = (long *)_malloc(0xb);
      if (plVar11 == (long *)0x0) goto LAB_1013a70dc;
      lVar18 = *plVar35;
      *(undefined4 *)((long)plVar11 + 7) = *(undefined4 *)((long)plVar35 + 7);
      *plVar11 = lVar18;
    }
    uVar21 = 0xc;
LAB_1013a7078:
    *param_1 = uVar21;
    *(long *)(param_1 + 8) = lVar19;
    *(long **)(param_1 + 0x10) = plVar11;
    *(long *)(param_1 + 0x18) = lVar19;
  }
  else {
    if (bVar5 == 0xd) {
      plVar11 = *(long **)(param_2 + 8);
      lVar19 = *(long *)(param_2 + 0x10);
      if ((lVar19 != 0xb) ||
         (*plVar11 != 0x697461746f6e6e61 || *(long *)((long)plVar11 + 3) != 0x736e6f697461746f)) {
        uVar21 = 0xd;
LAB_1013a7004:
        *param_1 = uVar21;
        *(long **)(param_1 + 8) = plVar11;
        *(long *)(param_1 + 0x10) = lVar19;
        return;
      }
    }
    else {
      if (bVar5 == 0xe) {
        pcVar17 = *(char **)(param_2 + 0x10);
        lVar19 = *(long *)(param_2 + 0x18);
        if (lVar19 == 0) {
          plVar11 = (long *)0x1;
        }
        else {
          if ((((((lVar19 == 0xb) && (*pcVar17 == 'a')) && (pcVar17[1] == 'n')) &&
               ((pcVar17[2] == 'n' && (pcVar17[3] == 'o')))) && (pcVar17[4] == 't')) &&
             (((pcVar17[5] == 'a' && (pcVar17[6] == 't')) &&
              ((pcVar17[7] == 'i' &&
               (((pcVar17[8] == 'o' && (pcVar17[9] == 'n')) && (pcVar17[10] == 's')))))))) {
            *param_1 = 0x16;
            return;
          }
          plVar11 = (long *)_malloc(lVar19);
          if (plVar11 == (long *)0x0) goto LAB_1013a70d0;
        }
        _memcpy(plVar11,pcVar17,lVar19);
        uVar21 = 0xe;
        goto LAB_1013a7078;
      }
      if (bVar5 != 0xf) goto LAB_1013a70a4;
      plVar11 = *(long **)(param_2 + 8);
      lVar19 = *(long *)(param_2 + 0x10);
      if ((((lVar19 != 0xb) || ((char)*plVar11 != 'a')) ||
          ((*(char *)((long)plVar11 + 1) != 'n' ||
           ((*(char *)((long)plVar11 + 2) != 'n' || (*(char *)((long)plVar11 + 3) != 'o')))))) ||
         (((*(char *)((long)plVar11 + 4) != 't' ||
           (((*(char *)((long)plVar11 + 5) != 'a' || (*(char *)((long)plVar11 + 6) != 't')) ||
            (*(char *)((long)plVar11 + 7) != 'i')))) ||
          ((((char)plVar11[1] != 'o' || (*(char *)((long)plVar11 + 9) != 'n')) ||
           (*(char *)((long)plVar11 + 10) != 's')))))) {
        uVar21 = 0xf;
        goto LAB_1013a7004;
      }
    }
LAB_1013a7098:
    *param_1 = 0x16;
  }
  return;
LAB_1013a7354:
  if (10 < uVar6) {
    uVar32 = 0;
    if (uVar36 != 6) {
      uVar32 = uVar36 - 7;
    }
    uVar31 = 5;
    if (uVar36 != 6) {
      uVar31 = 6;
    }
    uVar24 = uVar36;
    uVar25 = uVar36;
    if (uVar36 != 5) {
      uVar24 = uVar31;
      uVar25 = uVar32;
    }
    uVar32 = uVar36;
    if (4 < uVar36) {
      uVar32 = uVar25;
    }
    uVar31 = 4;
    if (4 < uVar36) {
      uVar31 = uVar24;
    }
    puVar15 = (undefined8 *)_malloc(0x220);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x220);
    }
    else {
      *puVar15 = 0;
      uVar24 = (ulong)*(ushort *)((long)puStack_208 + 0x21a) + ~uVar31;
      *(short *)((long)puVar15 + 0x21a) = (short)uVar24;
      puVar29 = puVar26 + uVar31 * 3;
      puStack_250 = (undefined8 *)*puVar29;
      puStack_260 = (undefined8 *)puVar29[1];
      puStack_258 = (undefined8 *)puVar29[2];
      puVar29 = puStack_208 + uVar31 * 3 + 0x22;
      puStack_188 = (undefined8 *)puVar29[1];
      puStack_190 = (undefined8 *)*puVar29;
      puStack_180 = (undefined8 *)puVar29[2];
      if (uVar24 < 0xc) {
        _memcpy(puVar15 + 1,puVar26 + uVar31 * 3 + 3,uVar24 * 0x18);
        _memcpy(puVar15 + 0x22,puStack_208 + uVar31 * 3 + 0x25,uVar24 * 0x18);
        *(short *)((long)puStack_208 + 0x21a) = (short)uVar31;
        puStack_c0 = (undefined8 *)puVar29[2];
        puStack_c8 = (undefined8 *)puVar29[1];
        puStack_d0 = (undefined8 *)*puVar29;
        puVar26 = puVar15;
        if (uVar36 < 6) {
          puVar26 = puStack_208;
        }
        uVar6 = *(ushort *)((long)puVar26 + 0x21a);
        puVar29 = puVar26 + uVar32 * 3 + 1;
        lVar27 = uVar6 - uVar32;
        if (uVar6 < uVar32 || lVar27 == 0) {
          puStack_188 = puStack_1a8;
          puStack_190 = puStack_1b0;
          puStack_180 = puStack_1a0;
        }
        else {
          lVar27 = lVar27 * 0x18;
          _memmove(puVar26 + uVar32 * 3 + 4,puVar29,lVar27);
          puStack_188 = puStack_1a8;
          puStack_190 = puStack_1b0;
          puStack_180 = puStack_1a0;
          _memmove(puVar26 + uVar32 * 3 + 0x25,puVar26 + uVar32 * 3 + 0x22,lVar27);
        }
        *puVar29 = puVar20;
        puVar29[1] = puVar22;
        puVar29[2] = puVar23;
        puVar26[uVar32 * 3 + 0x24] = puStack_180;
        puVar26[uVar32 * 3 + 0x23] = puStack_188;
        puVar26[uVar32 * 3 + 0x22] = puStack_190;
        *(ushort *)((long)puVar26 + 0x21a) = uVar6 + 1;
        puStack_e8 = puStack_c8;
        puStack_f0 = puStack_d0;
        puStack_e0 = puStack_c0;
        if (puStack_250 == (undefined8 *)0x8000000000000000) goto LAB_1013a7314;
        if ((undefined8 *)*puStack_208 == (undefined8 *)0x0) {
          uVar32 = 0;
        }
        else {
          uVar32 = 0;
          puVar20 = (undefined8 *)*puStack_208;
          puVar22 = puStack_208;
          puVar23 = puVar15;
          do {
            puStack_208 = puVar20;
            uVar6 = *(ushort *)(puVar22 + 0x43);
            uVar31 = (ulong)uVar6;
            uVar7 = *(ushort *)((long)puStack_208 + 0x21a);
            uVar24 = (ulong)uVar7;
            puStack_130 = puStack_f0;
            puStack_128 = puStack_e8;
            puStack_120 = puStack_e0;
            if (uVar7 < 0xb) {
              uVar2 = uVar31 + 1;
              puVar20 = puStack_208 + uVar31 * 3 + 1;
              if (uVar6 < uVar7) {
                lVar27 = (uVar24 - uVar31) * 0x18;
                _memmove(puStack_208 + uVar2 * 3 + 1,puVar20,lVar27);
                puStack_188 = puStack_128;
                puStack_190 = puStack_130;
                puStack_180 = puStack_120;
                _memmove(puStack_208 + uVar2 * 3 + 0x22,puStack_208 + uVar31 * 3 + 0x22,lVar27);
              }
              else {
                puStack_188 = puStack_e8;
                puStack_190 = puStack_f0;
                puStack_180 = puStack_e0;
              }
              *puVar20 = puStack_250;
              puVar20[1] = puStack_260;
              puVar20[2] = puStack_258;
              puStack_208[uVar31 * 3 + 0x23] = puStack_188;
              puStack_208[uVar31 * 3 + 0x22] = puStack_190;
              puStack_208[uVar31 * 3 + 0x24] = puStack_180;
              if (uVar6 < uVar7) {
                _memmove(puStack_208 + uVar31 + 0x46,puStack_208 + uVar31 + 0x45,
                         (uVar24 - uVar31) * 8);
              }
              puStack_208[uVar31 + 0x45] = puVar23;
              *(ushort *)((long)puStack_208 + 0x21a) = uVar7 + 1;
              if (uVar2 < uVar24 + 2) {
                lVar27 = uVar31 + 0x45;
                do {
                  puVar20 = (undefined8 *)puStack_208[lVar27];
                  *puVar20 = puStack_208;
                  *(short *)(puVar20 + 0x43) = (short)lVar27 + -0x44;
                  lVar27 = lVar27 + 1;
                } while (lVar27 - uVar24 != 0x46);
              }
              goto LAB_1013a7314;
            }
            uVar32 = uVar32 + 1;
            uVar36 = 5;
            if (uVar6 != 6) {
              uVar36 = 6;
            }
            uVar25 = 0;
            if (uVar6 != 6) {
              uVar25 = uVar31 - 7;
            }
            uVar3 = uVar31;
            uVar8 = uVar31;
            if (uVar6 != 5) {
              uVar3 = uVar25;
              uVar8 = uVar36;
            }
            uVar36 = 4;
            if (4 < uVar6) {
              uVar31 = uVar3;
              uVar36 = uVar8;
            }
            puVar15 = (undefined8 *)_malloc(0x280);
            if (puVar15 == (undefined8 *)0x0) {
              func_0x0001087c906c(8,0x280);
              goto LAB_1013a7d2c;
            }
            *puVar15 = 0;
            uVar25 = (ulong)*(ushort *)((long)puStack_208 + 0x21a) + ~uVar36;
            *(short *)((long)puVar15 + 0x21a) = (short)uVar25;
            puVar20 = puStack_208 + uVar36 * 3 + 1;
            puVar26 = (undefined8 *)*puVar20;
            puVar29 = (undefined8 *)puVar20[1];
            puVar34 = (undefined8 *)puVar20[2];
            puVar20 = puStack_208 + uVar36 * 3 + 0x22;
            puStack_c8 = (undefined8 *)puVar20[1];
            puStack_d0 = (undefined8 *)*puVar20;
            puStack_c0 = (undefined8 *)puVar20[2];
            if (0xb < uVar25) {
              func_0x000108a07904(0,uVar25,0xb,&UNK_10b2381a8);
              goto LAB_1013a7d2c;
            }
            _memcpy(puVar15 + 1,puStack_208 + uVar36 * 3 + 4,uVar25 * 0x18);
            _memcpy(puVar15 + 0x22,puStack_208 + uVar36 * 3 + 0x25,uVar25 * 0x18);
            *(short *)((long)puStack_208 + 0x21a) = (short)uVar36;
            puStack_170 = (undefined8 *)puVar20[1];
            puStack_178 = (undefined8 *)*puVar20;
            puStack_168 = (undefined8 *)puVar20[2];
            uVar25 = (ulong)*(ushort *)((long)puVar15 + 0x21a);
            lVar27 = uVar25 + 1;
            puStack_190 = puVar26;
            puStack_188 = puVar29;
            puStack_180 = puVar34;
            if (0xb < uVar25) {
              func_0x000108a07904(0,lVar27,0xc,&UNK_10b2381c0);
              goto LAB_1013a7d2c;
            }
            if (uVar24 - uVar36 != lVar27) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
              goto LAB_1013a7d2c;
            }
            _memcpy(puVar15 + 0x44,puStack_208 + uVar36 + 0x45,lVar27 * 8);
            uVar24 = 0;
            do {
              puVar20 = (undefined8 *)(puVar15 + 0x44)[uVar24];
              *puVar20 = puVar15;
              *(short *)(puVar20 + 0x43) = (short)uVar24;
              if (uVar25 <= uVar24) break;
              uVar24 = uVar24 + 1;
            } while (uVar24 <= uVar25);
            puStack_e8 = puStack_170;
            puStack_f0 = puStack_178;
            puStack_e0 = puStack_168;
            puVar20 = puVar15;
            if (uVar6 < 6) {
              puVar20 = puStack_208;
            }
            uVar6 = *(ushort *)((long)puVar20 + 0x21a);
            uVar36 = (ulong)uVar6;
            uVar24 = uVar31 + 1;
            iVar10 = (int)uVar31;
            puVar22 = puVar20 + (long)iVar10 * 3 + 1;
            lVar27 = uVar36 - uVar31;
            if (uVar36 < uVar31 || lVar27 == 0) {
              *puVar22 = puStack_250;
              puVar22[1] = puStack_260;
              puVar22[2] = puStack_258;
              puVar20[(long)iVar10 * 3 + 0x23] = puStack_128;
              puVar20[(long)iVar10 * 3 + 0x22] = puStack_130;
              puVar20[(long)iVar10 * 3 + 0x24] = puStack_120;
            }
            else {
              _memmove(puVar20 + uVar24 * 3 + 1,puVar22,lVar27 * 0x18);
              *puVar22 = puStack_250;
              puVar22[1] = puStack_260;
              puVar22[2] = puStack_258;
              puVar22 = puVar20 + (long)iVar10 * 3 + 0x22;
              _memmove(puVar20 + uVar24 * 3 + 0x22,puVar22,lVar27 * 0x18);
              puVar22[1] = puStack_128;
              *puVar22 = puStack_130;
              puVar22[2] = puStack_120;
              _memmove(puVar20 + uVar31 + 0x46,puVar20 + uVar31 + 0x45,lVar27 * 8);
            }
            puVar20[uVar31 + 0x45] = puVar23;
            *(ushort *)((long)puVar20 + 0x21a) = uVar6 + 1;
            if (uVar24 < uVar36 + 2) {
              lVar27 = uVar31 + 0x45;
              do {
                puVar22 = (undefined8 *)puVar20[lVar27];
                *puVar22 = puVar20;
                *(short *)(puVar22 + 0x43) = (short)lVar27 + -0x44;
                lVar27 = lVar27 + 1;
              } while (lVar27 - uVar36 != 0x46);
            }
            puStack_108 = puStack_e8;
            puStack_110 = puStack_f0;
            puStack_100 = puStack_e0;
            if (puVar26 == (undefined8 *)0x8000000000000000) goto LAB_1013a7314;
            puVar20 = (undefined8 *)*puStack_208;
            puVar22 = puStack_208;
            puVar23 = puVar15;
            puStack_260 = puVar29;
            puStack_258 = puVar34;
            puStack_250 = puVar26;
          } while ((undefined8 *)*puStack_208 != (undefined8 *)0x0);
        }
        puStack_170 = puStack_e8;
        puStack_178 = puStack_f0;
        puStack_168 = puStack_e0;
        puStack_190 = puStack_250;
        puStack_188 = puStack_260;
        puStack_180 = puStack_258;
        puStack_160 = puStack_208;
        uStack_158 = uVar32;
        puStack_150 = puVar15;
        uStack_148 = uVar32;
        puStack_130 = puStack_f0;
        puStack_128 = puStack_e8;
        puStack_120 = puStack_e0;
        puVar20 = (undefined8 *)_malloc(0x280);
        if (puVar20 == (undefined8 *)0x0) {
          func_0x0001087c906c(8,0x280);
        }
        else {
          *puVar20 = 0;
          *(undefined2 *)((long)puVar20 + 0x21a) = 0;
          puVar20[0x44] = puVar14;
          if (uVar2 < 0xffffffffffffffff) {
            *puVar14 = puVar20;
            *(undefined2 *)(puVar14 + 0x43) = 0;
            puStack_1e8 = puVar20;
            uStack_1e0 = uVar2 + 1;
            if (uVar32 == uVar2) {
              *(undefined2 *)((long)puVar20 + 0x21a) = 1;
              puVar20[1] = puStack_250;
              puVar20[2] = puStack_260;
              puVar20[3] = puStack_258;
              puVar20[0x23] = puStack_128;
              puVar20[0x22] = puStack_130;
              puVar20[0x24] = puStack_120;
              puVar20[0x45] = puVar15;
              *puVar15 = puVar20;
              *(undefined2 *)(puVar15 + 0x43) = 1;
              puVar14 = puVar20;
              goto LAB_1013a7314;
            }
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
          }
          else {
            func_0x000108a07a20(&UNK_10b238148);
          }
        }
      }
      else {
        func_0x000108a07904(0,uVar24,0xb,&UNK_10b2381a8);
      }
    }
LAB_1013a7d2c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1013a7d30);
    (*pcVar9)();
  }
  puVar33 = puVar26 + uVar36 * 3;
  puVar15 = puStack_1b0;
  puVar29 = puStack_1a8;
  puVar34 = puStack_1a0;
  if (uVar36 <= uVar24 && uVar24 - uVar36 != 0) {
    lVar27 = (uVar24 - uVar36) * 0x18;
    _memmove(puVar26 + uVar36 * 3 + 3,puVar33,lVar27);
    puStack_188 = puStack_1a8;
    puStack_190 = puStack_1b0;
    puStack_180 = puStack_1a0;
    _memmove(puStack_208 + uVar36 * 3 + 0x25,puStack_208 + uVar36 * 3 + 0x22,lVar27);
    puVar15 = puStack_190;
    puVar29 = puStack_188;
    puVar34 = puStack_180;
  }
  puStack_180 = puVar34;
  puStack_188 = puVar29;
  puStack_190 = puVar15;
  *puVar33 = puVar20;
  puVar33[1] = puVar22;
  puVar33[2] = puVar23;
  puStack_208[uVar36 * 3 + 0x24] = puStack_180;
  puStack_208[uVar36 * 3 + 0x23] = puStack_188;
  puStack_208[uVar36 * 3 + 0x22] = puStack_190;
  *(ushort *)((long)puStack_208 + 0x21a) = uVar6 + 1;
LAB_1013a7314:
  lStack_230 = lStack_230 + 1;
  lStack_1d8 = lStack_230;
joined_r0x0001013a715c:
  if (lVar19 == lVar18) goto LAB_1013a7c10;
  goto LAB_1013a7160;
LAB_1013a7c10:
  puVar13[2] = uStack_1e0;
  puVar13[1] = puStack_1e8;
  puVar13[3] = lStack_1d8;
  goto LAB_1013a7c20;
}

