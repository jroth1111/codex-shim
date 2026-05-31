
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108a84b14(long *param_1)

{
  char cVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  code *pcVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long *plVar18;
  int *piVar19;
  undefined *puVar20;
  int *piVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  byte *pbVar31;
  long lVar32;
  long lVar33;
  byte *pbVar34;
  undefined8 *puVar35;
  long lVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong *puVar39;
  bool bVar40;
  uint uVar41;
  ulong uVar42;
  ulong *puVar43;
  ulong *puVar44;
  undefined1 auVar45 [16];
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_228;
  ulong *puStack_218;
  ulong uStack_208;
  ulong *puStack_200;
  ulong uStack_178;
  ulong *puStack_170;
  ulong uStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  byte *pbStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  ulong uStack_e8;
  byte *pbStack_e0;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  long *plStack_38;
  long *plStack_30;
  
  puVar16 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
  uVar17 = *puVar16;
  if (uVar17 < 3) {
    if (uVar17 == 2) {
      plVar18 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
      lVar15 = *plVar18;
      if (lVar15 == 0) {
        if (lRam000000010b66feb0 == -1) {
          FUN_108a82a30();
          goto LAB_108a84be0;
        }
        lVar15 = lRam000000010b66feb0 + 1;
        lRam000000010b66feb0 = lVar15;
        *plVar18 = lVar15;
      }
      plStack_38 = (long *)0x8000000000000000;
      plStack_30 = (long *)__ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE(lVar15,&plStack_38)
      ;
      goto LAB_108a84bbc;
    }
LAB_108a84be0:
    plStack_30 = (long *)func_0x000108a82aa8();
    lVar15 = *param_1;
  }
  else {
    plStack_30 = (long *)(uVar17 - 0x10);
    lVar15 = *plStack_30;
    *plStack_30 = lVar15 + 1;
    if (lVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x108a84b58);
      (*pcVar14)();
    }
LAB_108a84bbc:
    lVar15 = *param_1;
  }
  if (lVar15 == 0) {
    *param_1 = (long)plStack_30;
    return param_1;
  }
  plStack_38 = param_1;
  FUN_10603de38(&plStack_38);
  puVar20 = &UNK_10b4ae5d0;
  auVar45 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68a0,0x1d);
  lVar15 = auVar45._8_8_;
  piVar19 = auVar45._0_8_;
  uStack_178 = 0;
  puStack_170 = (ulong *)0x8;
  uStack_168 = 0;
  puStack_160 = (ulong *)0x0;
  puStack_158 = (ulong *)0x8;
  puStack_150 = (ulong *)0x0;
  lStack_130 = *(long *)(puVar20 + 0x170) + 0x10;
  pbStack_148 = *(byte **)(puVar20 + 0x28);
  lStack_140 = *(long *)(puVar20 + 0x30);
  lStack_128 = 0;
  puStack_138 = puVar20;
  if (lStack_140 != 0) {
    puStack_200 = (ulong *)0x0;
    uVar17 = 0;
    uVar8 = *(uint *)(puVar20 + 0x48);
    uVar42 = (ulong)uVar8;
    puVar16 = *(ulong **)(puVar20 + 0x1b8);
    puVar4 = *(ulong **)(lVar15 + 0xe0);
    puVar6 = *(ulong **)(lVar15 + 0xe8);
    uVar22 = (long)puVar6 - (long)puVar16;
    puVar37 = (ulong *)((long)puVar4 + (long)puVar16);
    puVar30 = puVar16;
    if ((*(byte *)(lVar15 + 0x110) & uVar8 < 0x50000) == 0) {
      puVar30 = (ulong *)0x0;
    }
    puVar44 = *(ulong **)(puVar20 + 0x1a8);
    puVar5 = *(ulong **)(lVar15 + 0x10);
    puVar7 = *(ulong **)(lVar15 + 0x18);
    uVar26 = (long)puVar7 - (long)puVar44;
    puVar2 = (ulong *)((long)puVar5 + (long)puVar44);
    uVar10 = uVar8 >> 0x10;
    lVar3 = 0x10;
    if (uVar10 < 5) {
      lVar3 = 0;
    }
    puVar43 = (ulong *)0x8;
    lVar33 = 0x18;
    if (uVar10 < 5) {
      lVar33 = 8;
    }
    puVar23 = *(ulong **)(puVar20 + 0x198);
LAB_108a84d18:
    puVar38 = (ulong *)0x0;
    uVar27 = 0;
    lVar32 = 0xc;
    if (puStack_138[0x49] != '\b') {
      lVar32 = 4;
    }
    pbVar31 = pbStack_148 +
              ((lVar32 + *(long *)(puStack_138 + 0x38)) -
              (*(long *)(puStack_138 + 0x30) + *(long *)(puStack_138 + 0x28)));
    lVar32 = 1 - lStack_140;
    pbVar11 = pbStack_148;
    while( true ) {
      pbVar34 = pbVar11 + 1;
      bVar9 = *pbVar11;
      if (((int)uVar27 == 0x3f) && (1 < bVar9)) {
        uVar22 = 0;
        uVar42 = 0;
        uVar41 = 6;
        goto LAB_108a8542c;
      }
      puVar38 = (ulong *)(((ulong)bVar9 & 0x7f) << (uVar27 & 0x3f) | (ulong)puVar38);
      if (-1 < (char)bVar9) break;
      uVar27 = (ulong)((int)uVar27 + 7);
      lVar32 = lVar32 + 1;
      pbVar11 = pbVar34;
      if (lVar32 == 1) {
        puVar38 = (ulong *)(pbStack_148 + lStack_140);
        goto LAB_108a85428;
      }
    }
    lStack_140 = -lVar32;
    pbStack_148 = pbVar34;
    if (puVar38 == (ulong *)0x0) {
      lStack_128 = lStack_128 + -1;
      goto LAB_108a851f8;
    }
    if (*(ulong *)(lStack_130 + 0x10) <= (long)puVar38 - 1U) {
      lVar32 = *(long *)(lStack_130 + 0x18);
      if (lVar32 != 0) {
        lVar29 = *(long *)(lStack_130 + 0x20);
        while( true ) {
          lVar36 = (ulong)*(ushort *)(lVar32 + 0x532) << 3;
          piVar25 = (int *)(lVar32 + -0x70);
          uVar27 = 0xffffffffffffffff;
          puVar35 = (undefined8 *)(lVar32 + 0x4d8);
          do {
            uVar28 = (ulong)*(ushort *)(lVar32 + 0x532);
            if (lVar36 == 0) goto LAB_108a84e64;
            cVar1 = (ulong *)*puVar35 < puVar38;
            if (puVar38 < (ulong *)*puVar35) {
              cVar1 = -1;
            }
            lVar36 = lVar36 + -8;
            piVar25 = piVar25 + 0x1c;
            uVar27 = uVar27 + 1;
            puVar35 = puVar35 + 1;
          } while (cVar1 == '\x01');
          uVar28 = uVar27;
          if (cVar1 == '\0') break;
LAB_108a84e64:
          if (lVar29 == 0) goto LAB_108a854b4;
          lVar32 = *(long *)(lVar32 + uVar28 * 8 + 0x538);
          lVar29 = lVar29 + -1;
        }
        goto LAB_108a84dc0;
      }
LAB_108a854b4:
      uVar22 = 0;
      uVar42 = 0;
      uVar41 = 0x12;
      goto LAB_108a8542c;
    }
    piVar25 = (int *)(*(long *)(lStack_130 + 8) + ((long)puVar38 - 1U) * 0x70);
LAB_108a84dc0:
    if (*(char *)((long)piVar25 + 0x6a) == '\x01') {
      lStack_128 = lStack_128 + 1;
    }
    if ((short)piVar25[0x1a] == 0x2e) {
      if (*piVar25 == 1) {
        puVar39 = *(ulong **)(piVar25 + 4);
        uVar27 = *(ulong *)(piVar25 + 6);
      }
      else {
        uVar27 = *(ulong *)(piVar25 + 2);
        if (5 < uVar27) {
LAB_108a85708:
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar27,5,&UNK_10b398720);
          goto LAB_108a85760;
        }
        puVar39 = (ulong *)(piVar25 + 4);
      }
      if (uVar27 != 0) {
        bVar9 = 0;
        bVar12 = 0;
        bVar13 = 0;
        bVar40 = false;
        lVar32 = uVar27 << 4;
LAB_108a84ed4:
        puStack_c8 = (ulong *)puVar39[1];
        uStack_d0 = *puVar39;
        FUN_10604e070(&puStack_120,&pbStack_148,*(undefined4 *)(puStack_138 + 0x48),&uStack_d0);
        if (puStack_120 == (ulong *)0x2e) {
          uVar41 = (uint)puStack_118 & 0xff;
          uVar42 = (ulong)puStack_118 >> 8;
          uVar22 = (ulong)puStack_118 >> 0x10;
          puVar38 = puStack_110;
          goto LAB_108a8542c;
        }
        if ((short)puStack_108 == 0x55) {
          FUN_10604f594(&uStack_d0,&puStack_120);
          if (uStack_d0 == 0x16) {
            uStack_208 = (long)puStack_c8 + (long)puVar30;
          }
          else {
            if (uStack_d0 != 0x18) {
              bVar40 = false;
              goto LAB_108a84ec8;
            }
            puVar38 = puVar4;
            if (puVar6 < puVar16) goto LAB_108a85428;
            uVar28 = (long)puStack_c8 * ((ulong)(uVar8 >> 8) & 0xff);
            uVar27 = uVar22 - uVar28;
            puVar38 = puVar37;
            if (uVar22 < uVar28) goto LAB_108a85428;
            puVar38 = (ulong *)((long)puVar37 + uVar28);
            if ((uVar8 & 0xff00) == 0x800) {
              if (uVar27 < 8) goto LAB_108a85428;
              uVar27 = ((ulong)(uint)*puVar38 << 8 | (ulong)*(uint3 *)((long)puVar38 + 4) << 0x28)
                       >> 8 | (ulong)*(byte *)((long)puVar38 + 7) << 0x38;
            }
            else {
              if (uVar27 < 4) goto LAB_108a85428;
              uVar27 = (ulong)(uint)*puVar38;
            }
            uStack_208 = uVar27 + (long)puVar16;
          }
          bVar40 = true;
        }
        else if ((short)puStack_108 == 0x12) {
          FUN_10604f594(&uStack_d0,&puStack_120);
          if (uStack_d0 == 0) {
            bVar9 = 1;
            puStack_228 = puStack_c8;
          }
          else if (uStack_d0 == 7) {
            bVar13 = 1;
            puStack_240 = puStack_c8;
          }
          else if (uStack_d0 == 0xc) {
            if (puVar7 < puVar44) goto LAB_108a855cc;
            uVar28 = (long)puStack_c8 * (uVar42 & 0xff);
            uVar27 = uVar26 - uVar28;
            if (uVar26 < uVar28) goto LAB_108a855dc;
            puVar38 = (ulong *)((long)puVar2 + uVar28);
            uVar41 = uVar8 & 0xff;
            if (uVar41 < 4) {
              if (uVar41 != 1) {
                if (uVar41 == 2) {
                  if (1 < uVar27) {
                    puStack_248 = (ulong *)(ulong)(ushort)*puVar38;
                    goto LAB_108a851b0;
                  }
                  goto LAB_108a855ec;
                }
LAB_108a85650:
                uVar41 = 0x19;
                uVar22 = 0;
                puVar38 = puStack_248;
                goto LAB_108a8542c;
              }
              if (uVar26 != uVar28) {
                puStack_248 = (ulong *)(ulong)(byte)*puVar38;
LAB_108a851b0:
                bVar9 = 1;
                puStack_228 = puStack_248;
                goto LAB_108a84ec8;
              }
            }
            else if (uVar41 == 4) {
              if (3 < uVar27) {
                puStack_248 = (ulong *)(ulong)(uint)*puVar38;
                goto LAB_108a851b0;
              }
            }
            else {
              if (uVar41 != 8) goto LAB_108a85650;
              if (7 < uVar27) {
                puStack_248 = (ulong *)(((ulong)(uint)*puVar38 << 8 |
                                        (ulong)*(uint3 *)((long)puVar38 + 4) << 0x28) >> 8 |
                                       (ulong)*(byte *)((long)puVar38 + 7) << 0x38);
                goto LAB_108a851b0;
              }
            }
LAB_108a855ec:
            uVar42 = 0;
            uVar41 = 0x13;
            uVar22 = 0;
            goto LAB_108a8542c;
          }
        }
        else if ((short)puStack_108 == 0x11) {
          FUN_10604f594(&uStack_d0,&puStack_120);
          puVar38 = puStack_c8;
          if (uStack_d0 == 0) goto LAB_108a85188;
          if (uStack_d0 == 0xc) {
            if (puVar7 < puVar44) {
LAB_108a855cc:
              uVar41 = 0x13;
              uVar22 = 0;
              puVar38 = puVar5;
              goto LAB_108a8542c;
            }
            uVar28 = (long)puStack_c8 * (uVar42 & 0xff);
            uVar27 = uVar26 - uVar28;
            if (uVar26 < uVar28) {
LAB_108a855dc:
              uVar41 = 0x13;
              uVar22 = 0;
              puVar38 = puVar2;
              goto LAB_108a8542c;
            }
            puVar38 = (ulong *)((long)puVar2 + uVar28);
            uVar41 = uVar8 & 0xff;
            if (uVar41 < 4) {
              if (uVar41 == 1) {
                if (uVar26 == uVar28) goto LAB_108a855ec;
                puVar38 = (ulong *)(ulong)(byte)*puVar38;
                puStack_238 = puVar38;
              }
              else {
                if (uVar41 != 2) {
LAB_108a85640:
                  uVar41 = 0x19;
                  uVar22 = 0;
                  puVar38 = puStack_238;
                  goto LAB_108a8542c;
                }
                if (uVar27 < 2) goto LAB_108a855ec;
                puVar38 = (ulong *)(ulong)(ushort)*puVar38;
                puStack_238 = puVar38;
              }
            }
            else if (uVar41 == 4) {
              if (uVar27 < 4) goto LAB_108a855ec;
              puVar38 = (ulong *)(ulong)(uint)*puVar38;
              puStack_238 = puVar38;
            }
            else {
              if (uVar41 != 8) goto LAB_108a85640;
              if (uVar27 < 8) goto LAB_108a855ec;
              puVar38 = (ulong *)(((ulong)(uint)*puVar38 << 8 |
                                  (ulong)*(uint3 *)((long)puVar38 + 4) << 0x28) >> 8 |
                                 (ulong)*(byte *)((long)puVar38 + 7) << 0x38);
              puStack_238 = puVar38;
            }
LAB_108a85188:
            bVar12 = 1;
            puStack_218 = puVar38;
          }
        }
LAB_108a84ec8:
        puVar39 = puVar39 + 2;
        lVar32 = lVar32 + -0x10;
        if (lVar32 == 0) goto LAB_108a85210;
        goto LAB_108a84ed4;
      }
      goto LAB_108a851f8;
    }
    if (*piVar25 == 1) {
      piVar21 = *(int **)(piVar25 + 4);
      uVar27 = *(ulong *)(piVar25 + 6);
    }
    else {
      uVar27 = *(ulong *)(piVar25 + 2);
      if (5 < uVar27) goto LAB_108a85708;
      piVar21 = piVar25 + 4;
    }
    FUN_10604efe4(&puStack_120,&pbStack_148,*(undefined4 *)(puStack_138 + 0x48),piVar21,uVar27);
    uVar41 = (uint)(byte)puStack_120;
    if ((byte)puStack_120 != 0x52) {
      uVar42 = (ulong)puStack_120 >> 8 & 0xffffffff;
      uVar22 = (ulong)puStack_120 >> 0x10;
      puVar38 = puStack_118;
      goto LAB_108a8542c;
    }
LAB_108a851f8:
    if (lStack_140 == 0) goto LAB_108a854c4;
    goto LAB_108a84d18;
  }
  goto LAB_108a854cc;
LAB_108a85210:
  if (!bVar40) {
    if ((bool)(bVar12 & bVar9)) {
      if (puStack_228 <= puStack_218) goto LAB_108a851f8;
      puVar38 = puStack_228;
      if (puStack_200 == puStack_160) {
        func_0x000108a858a0(&puStack_160);
        puVar43 = puStack_158;
      }
    }
    else {
      if ((!(bool)(bVar12 & bVar13)) ||
         (puVar38 = (ulong *)((long)puStack_218 + (long)puStack_240), puVar38 <= puStack_218))
      goto LAB_108a851f8;
      if (puStack_200 == puStack_160) {
        func_0x000108a858a0(&puStack_160);
        puVar43 = puStack_158;
      }
    }
    puVar39 = puVar43 + (long)puStack_200 * 3;
    *puVar39 = (ulong)puStack_218;
    puVar39[1] = (ulong)puVar38;
    puVar39[2] = uVar17;
    puStack_200 = (ulong *)((long)puStack_200 + 1);
    puStack_150 = puStack_200;
LAB_108a85328:
    puStack_120 = (ulong *)0x0;
    pbStack_e0 = pbVar31;
    if (uVar17 == uStack_178) {
      func_0x000108a859d8(&uStack_178);
    }
    puVar38 = puStack_170 + uVar17 * 9;
    puVar38[3] = (ulong)puStack_108;
    puVar38[2] = (ulong)puStack_110;
    puVar38[5] = uStack_f8;
    puVar38[4] = (ulong)puStack_100;
    puVar38[7] = uStack_e8;
    puVar38[6] = CONCAT44(uStack_ec,CONCAT22(uStack_ee,uStack_f0));
    puVar38[8] = (ulong)pbStack_e0;
    puVar38[1] = (ulong)puStack_118;
    *puVar38 = (ulong)puStack_120;
    uVar17 = uVar17 + 1;
    uStack_168 = uVar17;
    goto LAB_108a851f8;
  }
  uVar27 = *(ulong *)(lVar15 + 0xd0 + lVar33);
  puVar38 = *(ulong **)(lVar15 + 0xd0 + lVar3);
  if (uVar27 < uStack_208) {
LAB_108a85428:
    uVar22 = 0;
    uVar42 = 0;
    uVar41 = 0x13;
  }
  else {
    puStack_100 = (ulong *)((long)puVar38 + uStack_208);
    uStack_f0 = (undefined2)uVar8;
    uStack_ee = (undefined2)(uVar8 >> 0x10);
    uStack_ec = CONCAT31(uStack_ec._1_3_,4 < uVar10);
    puStack_120 = puVar5;
    puStack_118 = puVar7;
    puStack_110 = puVar23;
    puStack_108 = puVar44;
    uStack_f8 = uVar27 - uStack_208;
    FUN_10605336c(&uStack_d0,&puStack_120);
    if (uStack_d0 != 2) {
      bVar40 = false;
      do {
        puVar39 = puStack_c0;
        puVar38 = puStack_c8;
        if ((uStack_d0 & 1) == 0) {
          if (!bVar40) goto LAB_108a851f8;
          goto LAB_108a85328;
        }
        if (puStack_c8 < puStack_c0) {
          if (puStack_200 == puStack_160) {
            func_0x000108a858a0(&puStack_160);
            puVar43 = puStack_158;
          }
          puVar24 = puVar43 + (long)puStack_200 * 3;
          *puVar24 = (ulong)puVar38;
          puVar24[1] = (ulong)puVar39;
          puVar24[2] = uVar17;
          puStack_200 = (ulong *)((long)puStack_200 + 1);
          bVar40 = true;
          puStack_150 = puStack_200;
        }
        FUN_10605336c(&uStack_d0,&puStack_120);
      } while (uStack_d0 != 2);
    }
    uVar41 = (uint)puStack_c8 & 0xff;
    if (uVar41 == 0x52) {
      if (((uint)puStack_c8 >> 8 & 1) == 0) goto LAB_108a851f8;
      goto LAB_108a85328;
    }
    uVar42 = (ulong)puStack_c8 >> 8;
    uVar22 = (ulong)puStack_c8 >> 0x10;
    puVar38 = puStack_c0;
  }
LAB_108a8542c:
  if (puStack_160 != (ulong *)0x0) {
    _free(puStack_158);
  }
  puVar37 = puStack_170;
  if (uVar17 != 0) {
    puVar16 = puStack_170 + 2;
    do {
      if ((puVar16[-2] != 0) && (puVar16[-1] != 0)) {
        if (*puVar16 != 0) {
          _free();
        }
        if (puVar16[2] != 0) {
          _free(puVar16[1]);
        }
      }
      puVar16 = puVar16 + 9;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (uStack_178 != 0) {
    _free(puVar37);
  }
  puVar37 = (ulong *)0x0;
  goto LAB_108a85578;
LAB_108a854c4:
  if ((ulong *)0x1 < puStack_200) {
    if (puStack_200 < (ulong *)0x15) {
      lVar15 = 0;
      puVar16 = puStack_158 + 3;
      puVar37 = puStack_158;
      do {
        puVar30 = puVar16;
        uVar17 = puVar37[3];
        if (uVar17 < *puVar37) {
          puStack_118 = (ulong *)puVar37[5];
          puStack_120 = (ulong *)puVar37[4];
          lVar3 = lVar15;
          do {
            lVar33 = lVar3;
            puVar35 = (undefined8 *)((long)puStack_158 + lVar33);
            puVar35[4] = puVar35[1];
            puVar35[3] = *puVar35;
            puVar35[5] = puVar35[2];
            puVar16 = puStack_158;
            if (lVar33 == 0) goto LAB_108a85694;
            lVar3 = lVar33 + -0x18;
          } while (uVar17 < (ulong)puVar35[-3]);
          puVar16 = (ulong *)((long)puStack_158 + lVar33);
LAB_108a85694:
          *puVar16 = uVar17;
          puVar16[2] = (ulong)puStack_118;
          puVar16[1] = (ulong)puStack_120;
        }
        puVar16 = puVar30 + 3;
        lVar15 = lVar15 + 0x18;
        puVar37 = puVar30;
      } while (puVar16 != puStack_158 + (long)puStack_200 * 3);
    }
    else {
      __ZN4core5slice4sort6stable14driftsort_main17hb2d9da1781019d87E
                (puStack_158,puStack_200,&uStack_d0);
    }
  }
LAB_108a854cc:
  uVar22 = uStack_168;
  puVar37 = puStack_170;
  if (uStack_168 < uStack_178) {
    if (uStack_168 == 0) {
      _free(puStack_170);
      puVar37 = (ulong *)0x8;
      puVar38 = puStack_158;
      puVar16 = puStack_150;
      if (puStack_150 < puStack_160) goto LAB_108a8550c;
      goto LAB_108a8556c;
    }
    puVar38 = (ulong *)(uStack_168 * 0x48);
    puVar37 = (ulong *)_realloc(puStack_170,puVar38);
    if (puVar37 != (ulong *)0x0) goto LAB_108a854fc;
  }
  else {
LAB_108a854fc:
    puVar38 = puStack_158;
    puVar16 = puStack_150;
    if (puStack_150 < puStack_160) {
LAB_108a8550c:
      puVar16 = puStack_150;
      if (puStack_150 == (ulong *)0x0) {
        _free(puStack_158);
        puVar38 = (ulong *)0x8;
      }
      else {
        lVar15 = (long)puStack_150 * 0x18;
        puVar38 = (ulong *)_realloc(puStack_158,lVar15);
        if (puVar38 == (ulong *)0x0) {
          func_0x0001087c9084(8,lVar15);
          goto LAB_108a85760;
        }
      }
    }
LAB_108a8556c:
    uVar41 = (uint)uVar22 & 0xff;
    uVar42 = uVar22 >> 8;
    uVar22 = uVar22 >> 0x10;
LAB_108a85578:
    puStack_110 = (ulong *)(uVar22 << 0x10 | (uVar42 & 0xff) << 8 | (ulong)uVar41);
    if (*piVar19 != 1) {
      piVar19[0] = 1;
      piVar19[1] = 0;
      *(ulong **)(piVar19 + 2) = puVar37;
      *(ulong **)(piVar19 + 4) = puStack_110;
      *(ulong **)(piVar19 + 6) = puVar38;
      *(ulong **)(piVar19 + 8) = puVar16;
      return (long *)(piVar19 + 2);
    }
    puStack_120 = (ulong *)(piVar19 + 2);
    puStack_118 = puVar37;
    puStack_108 = puVar38;
    puStack_100 = puVar16;
    FUN_10603ef1c(&puStack_120);
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd68a0,0x1d,&UNK_10b4ae5d0);
  }
  func_0x0001087c9084(8,puVar38);
LAB_108a85760:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x108a85764);
  (*pcVar14)();
}

