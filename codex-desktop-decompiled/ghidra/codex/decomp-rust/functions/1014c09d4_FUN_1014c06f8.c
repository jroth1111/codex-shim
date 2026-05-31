
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1014c06f8(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  long extraout_x1;
  long *plVar11;
  bool bVar12;
  long *unaff_x19;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong *puVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined8 auStack_238 [5];
  long *plStack_210;
  ulong uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  byte *pbStack_1f0;
  long *plStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong *puStack_120;
  undefined8 auStack_118 [3];
  long *plStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  if ((*param_1 & 1) == 0) {
    plVar13 = *(long **)(param_1 + 8);
    lVar26 = plVar13[4];
    plVar22 = (long *)register0x00000008;
    if (param_1[1] == 1) {
      puVar6 = &UNK_108ca14f4;
      uVar24 = 1;
      do {
        while( true ) {
          uVar5 = uVar24;
          if (0x7ffffffe < uVar24) {
            uVar5 = 0x7fffffff;
          }
          uVar5 = _write((int)lVar26,puVar6,uVar5);
          if (uVar5 == 0xffffffffffffffff) break;
          if (uVar5 == 0) goto LAB_1014c0928;
          uVar28 = uVar24 - uVar5;
          if (uVar24 < uVar5) goto LAB_1014c0994;
          puVar6 = puVar6 + uVar5;
          uVar24 = uVar28;
          if (uVar28 == 0) goto LAB_1014c0800;
        }
        piVar8 = (int *)___error();
        lVar33 = (long)*piVar8;
        if (*piVar8 != 4) goto LAB_1014c0934;
      } while (uVar24 != 0);
    }
    else {
      puVar6 = &UNK_108cc4022;
      uVar24 = 2;
      do {
        while( true ) {
          uVar5 = uVar24;
          if (0x7ffffffe < uVar24) {
            uVar5 = 0x7fffffff;
          }
          uVar5 = _write((int)lVar26,puVar6,uVar5);
          if (uVar5 == 0xffffffffffffffff) break;
          if (uVar5 == 0) goto LAB_1014c0928;
          uVar28 = uVar24 - uVar5;
          if (uVar24 < uVar5) goto LAB_1014c0994;
          puVar6 = puVar6 + uVar5;
          uVar24 = uVar28;
          if (uVar28 == 0) goto LAB_1014c0800;
        }
        piVar8 = (int *)___error();
        lVar33 = (long)*piVar8;
        if (*piVar8 != 4) goto LAB_1014c0934;
      } while (uVar24 != 0);
    }
LAB_1014c0800:
    lVar26 = plVar13[2];
    uStack_90 = param_3;
    uStack_88 = param_4;
    uStack_80 = param_2;
    if ((lVar26 != 0) && (uVar28 = plVar13[1], uVar28 != 0)) {
      lVar16 = 0;
      lVar18 = *plVar13;
      do {
        lVar16 = lVar16 + 1;
        lVar3 = plVar13[4];
        lVar23 = lVar18;
        uVar24 = uVar28;
        do {
          while( true ) {
            uVar5 = uVar24;
            if (0x7ffffffe < uVar24) {
              uVar5 = 0x7fffffff;
            }
            uVar5 = _write((int)lVar3,lVar23,uVar5);
            if (uVar5 == 0xffffffffffffffff) break;
            if (uVar5 == 0) goto LAB_1014c0928;
            uVar27 = uVar24 - uVar5;
            if (uVar24 < uVar5) goto LAB_1014c0994;
            lVar23 = lVar23 + uVar5;
            uVar24 = uVar27;
            if (uVar27 == 0) goto LAB_1014c0828;
          }
          piVar8 = (int *)___error();
          lVar33 = (long)*piVar8;
          if (*piVar8 != 4) goto LAB_1014c0934;
        } while (uVar24 != 0);
LAB_1014c0828:
      } while (lVar16 != lVar26);
    }
    param_1[1] = 2;
    puVar6 = (undefined *)FUN_100656df8((int)plVar13[4],uStack_80,7);
    if (puVar6 != (undefined *)0x0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
    lVar26 = plVar13[4];
    puVar6 = &UNK_108cc4020;
    uVar24 = 2;
    do {
      while( true ) {
        uVar5 = uVar24;
        if (0x7ffffffe < uVar24) {
          uVar5 = 0x7fffffff;
        }
        uVar5 = _write((int)lVar26,puVar6,uVar5);
        if (uVar5 == 0xffffffffffffffff) break;
        if (uVar5 == 0) goto LAB_1014c09a8;
        uVar28 = uVar24 - uVar5;
        if (uVar24 < uVar5) {
          plVar11 = (long *)&UNK_10b233fe0;
          auVar34 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar5,uVar24);
          lStack_138 = auVar34._8_8_;
          pbVar9 = auVar34._0_8_;
          plStack_b0 = (long *)0x7fffffff;
          uStack_98 = 0x1014c09d4;
          lStack_130 = param_5;
          pppppppuStack_a0 = (undefined8 *******)&stack0xfffffffffffffff0;
          if ((*pbVar9 & 1) != 0) {
            auStack_118[0] = 10;
            puVar7 = (undefined8 *)func_0x000108a4a0f8(auStack_118,0,0);
            return puVar7;
          }
          puStack_120 = *(ulong **)(pbVar9 + 8);
          uVar5 = puStack_120[4];
          unaff_x19 = plVar13;
          unaff_x20 = plStack_b0;
          uStack_128 = uVar24;
          if (pbVar9[1] == 1) {
            puVar6 = &UNK_108ca14f4;
            uVar24 = 1;
            goto LAB_1014c0a50;
          }
          puVar6 = &UNK_108cc4022;
          uVar24 = 2;
          goto LAB_1014c0a98;
        }
        puVar6 = puVar6 + uVar5;
        uVar24 = uVar28;
        if (uVar28 == 0) goto LAB_1014c090c;
      }
      piVar8 = (int *)___error();
      if (*piVar8 != 4) {
        puVar6 = (undefined *)((long)*piVar8 << 0x20 | 2);
        goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      }
    } while (uVar24 != 0);
LAB_1014c090c:
    puVar7 = (undefined8 *)FUN_10064ce04(uStack_90,uStack_88,plVar13);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined1 *)(plVar13 + 3) = 1;
    }
  }
  else {
    auStack_78[0] = 10;
    puVar7 = (undefined8 *)func_0x000108a4a0f8(auStack_78,0,0);
  }
  return puVar7;
LAB_1014c0934:
  puVar6 = (undefined *)(lVar33 << 0x20 | 2);
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c0928:
  puVar6 = &UNK_10b233fc8;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c0994:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar5,uVar24,uVar24,&UNK_10b233fe0);
LAB_1014c09a8:
  puVar6 = &UNK_10b233fc8;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c0a98:
  do {
    uVar28 = uVar24;
    if (0x7ffffffe < uVar24) {
      uVar28 = 0x7fffffff;
    }
    uVar28 = _write((int)uVar5,puVar6,uVar28);
    if (uVar28 == 0xffffffffffffffff) {
      piVar8 = (int *)___error();
      lVar26 = (long)*piVar8;
      if (*piVar8 != 4) goto LAB_1014c0f80;
    }
    else {
      if (uVar28 == 0) goto LAB_1014c0f74;
      if (uVar24 < uVar28) goto LAB_1014c110c;
      puVar6 = puVar6 + uVar28;
      uVar24 = uVar24 - uVar28;
    }
  } while (uVar24 != 0);
  goto LAB_1014c0ae4;
LAB_1014c0a50:
  do {
    uVar28 = uVar24;
    if (0x7ffffffe < uVar24) {
      uVar28 = 0x7fffffff;
    }
    uVar28 = _write((int)uVar5,puVar6,uVar28);
    if (uVar28 == 0xffffffffffffffff) {
      piVar8 = (int *)___error();
      lVar26 = (long)*piVar8;
      if (*piVar8 != 4) goto LAB_1014c0f80;
    }
    else {
      if (uVar28 == 0) goto LAB_1014c0f74;
      if (uVar24 < uVar28) goto LAB_1014c110c;
      puVar6 = puVar6 + uVar28;
      uVar24 = uVar24 - uVar28;
    }
  } while (uVar24 != 0);
LAB_1014c0ae4:
  uVar5 = puStack_120[2];
  if ((uVar5 != 0) && (uVar27 = puStack_120[1], uVar27 != 0)) {
    uVar19 = 0;
    uVar29 = *puStack_120;
    do {
      uVar19 = uVar19 + 1;
      uVar25 = puStack_120[4];
      uVar17 = uVar29;
      uVar24 = uVar27;
      do {
        while( true ) {
          uVar28 = uVar24;
          if (0x7ffffffe < uVar24) {
            uVar28 = 0x7fffffff;
          }
          uVar28 = _write((int)uVar25,uVar17,uVar28);
          if (uVar28 == 0xffffffffffffffff) break;
          if (uVar28 == 0) goto LAB_1014c0f74;
          uVar1 = uVar24 - uVar28;
          if (uVar24 < uVar28) goto LAB_1014c110c;
          uVar17 = uVar17 + uVar28;
          uVar24 = uVar1;
          if (uVar1 == 0) goto LAB_1014c0b08;
        }
        piVar8 = (int *)___error();
        lVar26 = (long)*piVar8;
        if (*piVar8 != 4) goto LAB_1014c0f80;
      } while (uVar24 != 0);
LAB_1014c0b08:
    } while (uVar19 != uVar5);
  }
  puVar21 = puStack_120;
  pbVar9[1] = 2;
  puVar6 = (undefined *)FUN_100656df8((int)puStack_120[4],lStack_138,uStack_128);
  plVar22 = &uStack_90;
  unaff_x29 = pppppppuStack_a0;
  unaff_x30 = uStack_98;
  if (puVar6 == (undefined *)0x0) {
    uVar24 = (ulong)(uint)puVar21[4];
    puVar6 = &UNK_108cc4020;
    uVar5 = 2;
    do {
      while( true ) {
        uVar28 = uVar5;
        if (0x7ffffffe < uVar5) {
          uVar28 = 0x7fffffff;
        }
        uVar28 = _write(uVar24,puVar6,uVar28);
        if (uVar28 == 0xffffffffffffffff) break;
        if (uVar28 == 0) goto LAB_1014c1240;
        uVar27 = uVar5 - uVar28;
        if (uVar5 < uVar28) goto LAB_1014c1258;
        puVar6 = puVar6 + uVar28;
        uVar5 = uVar27;
        if (uVar27 == 0) goto LAB_1014c0bf0;
      }
      piVar8 = (int *)___error();
      if (*piVar8 != 4) {
        puVar6 = (undefined *)((long)*piVar8 << 0x20 | 2);
        plVar22 = &uStack_90;
        unaff_x29 = pppppppuStack_a0;
        unaff_x30 = uStack_98;
        goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      }
    } while (uVar5 != 0);
LAB_1014c0bf0:
    if (plVar11 == (long *)0x0) {
      uVar5 = puVar21[4];
      puVar6 = &UNK_108c78dd4;
      uVar24 = 4;
      do {
        while( true ) {
          uVar28 = uVar24;
          if (0x7ffffffe < uVar24) {
            uVar28 = 0x7fffffff;
          }
          uVar28 = _write((int)uVar5,puVar6,uVar28);
          if (uVar28 == 0xffffffffffffffff) break;
          if (uVar28 == 0) goto LAB_1014c11f4;
          uVar27 = uVar24 - uVar28;
          if (uVar24 < uVar28) goto LAB_1014c126c;
          puVar6 = puVar6 + uVar28;
          uVar24 = uVar27;
          if (uVar27 == 0) goto LAB_1014c129c;
        }
        piVar8 = (int *)___error();
        lVar26 = (long)*piVar8;
        if (*piVar8 != 4) goto LAB_1014c1200;
      } while (uVar24 != 0);
    }
    else {
      lVar33 = *plVar11;
      puVar21[2] = puVar21[2] + 1;
      *(undefined1 *)(puVar21 + 3) = 0;
      uVar24 = (ulong)(uint)puVar21[4];
      puVar6 = &UNK_108ca7634;
      uVar5 = 1;
      do {
        while( true ) {
          uVar28 = uVar5;
          if (0x7ffffffe < uVar5) {
            uVar28 = 0x7fffffff;
          }
          uVar28 = _write(uVar24,puVar6,uVar28);
          if (uVar28 == 0xffffffffffffffff) break;
          if (uVar28 == 0) goto LAB_1014c11f4;
          uVar27 = uVar5 - uVar28;
          if (uVar5 < uVar28) goto LAB_1014c1258;
          puVar6 = puVar6 + uVar28;
          uVar5 = uVar27;
          if (uVar27 == 0) goto LAB_1014c0c68;
        }
        piVar8 = (int *)___error();
        lVar26 = (long)*piVar8;
        if (*piVar8 != 4) goto LAB_1014c1200;
      } while (uVar5 != 0);
LAB_1014c0c68:
      if (lStack_130 != 0) {
        plVar13 = plVar11 + 1;
        plVar14 = (long *)(CONCAT17(-(-1 < lVar33),
                                    CONCAT16(-(-1 < (char)((ulong)lVar33 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar33 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar33 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar33
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar33 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar33 >> 8)),
                                                           -(-1 < (char)lVar33)))))))) &
                          0x8080808080808080);
        plVar20 = (long *)0x7fffffff;
        bVar12 = true;
        do {
          while (plVar14 == (long *)0x0) {
            lVar26 = *plVar13;
            plVar11 = plVar11 + -0x30;
            plVar13 = plVar13 + 1;
            plVar14 = (long *)(CONCAT17(-(-1 < lVar26),
                                        CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                                 CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                                          CONCAT14(-(-1 < (char)((ulong)lVar26 >>
                                                                                0x20)),
                                                                   CONCAT13(-(-1 < (char)((ulong)
                                                  lVar26 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar26 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar26 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar26)))))))) &
                              0x8080808080808080);
          }
          uVar24 = ((ulong)plVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)plVar14 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          iVar2 = (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
          lStack_138 = plVar11[(long)-iVar2 * 6 + -5];
          lStack_140 = plVar11[(long)-iVar2 * 6 + -4];
          lVar33 = plVar11[(long)-iVar2 * 6 + -2];
          uVar24 = plVar11[(long)-iVar2 * 6 + -1];
          uVar5 = puVar21[4];
          if (bVar12) {
            puVar6 = &UNK_108ca14f4;
            uVar28 = 1;
            do {
              while( true ) {
                uVar27 = uVar28;
                if (0x7ffffffe < uVar28) {
                  uVar27 = 0x7fffffff;
                }
                uVar27 = _write((int)uVar5,puVar6,uVar27);
                if (uVar27 == 0xffffffffffffffff) break;
                if (uVar27 == 0) goto LAB_1014c11f4;
                uVar19 = uVar28 - uVar27;
                if (uVar28 < uVar27) goto LAB_1014c122c;
                puVar6 = puVar6 + uVar27;
                uVar28 = uVar19;
                if (uVar19 == 0) goto LAB_1014c0d80;
              }
              piVar8 = (int *)___error();
              lVar26 = (long)*piVar8;
              if (*piVar8 != 4) goto LAB_1014c1200;
              uVar19 = uVar28;
            } while (uVar28 != 0);
          }
          else {
            puVar6 = &UNK_108cc4022;
            uVar28 = 2;
            do {
              while( true ) {
                uVar27 = uVar28;
                if (0x7ffffffe < uVar28) {
                  uVar27 = 0x7fffffff;
                }
                uVar27 = _write((int)uVar5,puVar6,uVar27);
                if (uVar27 == 0xffffffffffffffff) break;
                if (uVar27 == 0) goto LAB_1014c11f4;
                uVar19 = uVar28 - uVar27;
                if (uVar28 < uVar27) goto LAB_1014c122c;
                puVar6 = puVar6 + uVar27;
                uVar28 = uVar19;
                if (uVar19 == 0) goto LAB_1014c0d80;
              }
              piVar8 = (int *)___error();
              lVar26 = (long)*piVar8;
              if (*piVar8 != 4) goto LAB_1014c1200;
              uVar19 = uVar28;
            } while (uVar28 != 0);
          }
LAB_1014c0d80:
          uVar5 = puVar21[1];
          lStack_150 = lVar33;
          uStack_148 = uVar24;
          if ((uVar5 != 0) && (uVar29 = puStack_120[2], uVar29 != 0)) {
            uStack_128 = *puStack_120;
            uVar17 = puStack_120[4];
            uVar24 = 0;
            do {
              uVar24 = uVar24 + 1;
              uVar25 = uStack_128;
              uVar28 = uVar5;
              do {
                while( true ) {
                  uVar27 = uVar28;
                  if (0x7ffffffe < uVar28) {
                    uVar27 = 0x7fffffff;
                  }
                  uVar27 = _write((int)uVar17,uVar25,uVar27);
                  if (uVar27 == 0xffffffffffffffff) break;
                  if (uVar27 == 0) goto LAB_1014c11f4;
                  uVar19 = uVar28 - uVar27;
                  if (uVar28 < uVar27) goto LAB_1014c122c;
                  uVar25 = uVar25 + uVar27;
                  uVar28 = uVar19;
                  if (uVar19 == 0) goto LAB_1014c0db0;
                }
                piVar8 = (int *)___error();
                lVar26 = (long)*piVar8;
                if (*piVar8 != 4) goto LAB_1014c1200;
                uVar19 = uVar28;
              } while (uVar28 != 0);
LAB_1014c0db0:
            } while (uVar24 != uVar29);
          }
          puVar21 = puStack_120;
          puVar6 = (undefined *)FUN_100656df8((int)puStack_120[4],lStack_138,lStack_140);
          uVar5 = uStack_148;
          plVar22 = &uStack_90;
          unaff_x29 = pppppppuStack_a0;
          unaff_x30 = uStack_98;
          if (puVar6 != (undefined *)0x0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
          plVar14 = (long *)((long)plVar14 - 1U & (ulong)plVar14);
          lStack_130 = lStack_130 + -1;
          uVar28 = (ulong)(uint)puVar21[4];
          plVar22 = (long *)&UNK_108cc4020;
          uVar27 = 2;
          do {
            while( true ) {
              uVar29 = uVar27;
              if (0x7ffffffe < uVar27) {
                uVar29 = 0x7fffffff;
              }
              uVar29 = _write(uVar28,plVar22,uVar29);
              if (uVar29 == 0xffffffffffffffff) break;
              if (uVar29 == 0) goto LAB_1014c11f4;
              uVar17 = uVar27 - uVar29;
              if (uVar27 < uVar29) {
                plVar15 = (long *)&UNK_10b233fe0;
                pbVar9 = (byte *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                           (uVar29,uVar27,uVar27);
                uStack_1a0 = uVar5;
                uStack_180 = 0x7fffffff;
                uStack_158 = 0x1014c12e0;
                uStack_1b0 = uVar24;
                uStack_1a8 = uVar19;
                uStack_198 = uVar27;
                plStack_190 = plVar22;
                uStack_188 = uVar28;
                plStack_178 = plVar13;
                plStack_170 = plVar11;
                plStack_168 = plVar14;
                pppppppuStack_160 = &pppppppuStack_a0;
                if ((*pbVar9 & 1) != 0) {
                  plStack_1c8 = (long *)0xa;
                  puVar7 = (undefined8 *)func_0x000108a4a0f8(&plStack_1c8,0,0);
                  return puVar7;
                }
                plVar11 = plVar15;
                puVar7 = (undefined8 *)FUN_1013fde34();
                if (puVar7 != (undefined8 *)0x0) {
                  return puVar7;
                }
                if (*pbVar9 == 1) goto LAB_1014c14bc;
                pbVar9 = *(byte **)(pbVar9 + 8);
                plVar13 = *(long **)pbVar9;
                uVar28 = plVar13[1];
                plVar20 = (long *)(ulong)(uVar28 != 0x7fffffffffffffff);
                plVar22 = (long *)(plVar13[2] - uVar28);
                uVar24 = uVar28;
                if (plVar22 < plVar20) {
                  __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                            (plVar13,plVar20,1);
                  plVar22 = (long *)(plVar13[2] - plVar13[1]);
                  uVar24 = plVar13[1];
                }
                _memset(*plVar13 + uVar24,0x3a,plVar20);
                if (plVar22 < plVar20) goto LAB_1014c14d4;
                plVar13[1] = (long)(uVar24 + (long)plVar20);
                if (uVar28 == 0x7fffffffffffffff) goto LAB_1014c1488;
                if (*plVar15 != -0x7ffffffffffffffb) {
                  puVar7 = (undefined8 *)FUN_100685ecc(plVar15,pbVar9);
                  if (puVar7 == (undefined8 *)0x0) {
                    return (undefined8 *)0x0;
                  }
                  return puVar7;
                }
                plVar15 = *(long **)pbVar9;
                lVar26 = plVar15[2];
                pbVar9 = &UNK_108c78dd4;
                plVar20 = (long *)0x4;
                uVar28 = 0x7fffffffffffffff;
                plVar22 = (long *)plVar15[1];
                goto LAB_1014c13c4;
              }
              plVar22 = (long *)((long)plVar22 + uVar29);
              uVar27 = uVar17;
              if (uVar17 == 0) goto LAB_1014c0e9c;
            }
            piVar8 = (int *)___error();
            lVar26 = (long)*piVar8;
            if (*piVar8 != 4) goto LAB_1014c1200;
          } while (uVar27 != 0);
LAB_1014c0e9c:
          puVar21 = puStack_120;
          puVar6 = (undefined *)FUN_100656df8((int)puStack_120[4],lStack_150,uVar5);
          plVar22 = &uStack_90;
          unaff_x29 = pppppppuStack_a0;
          unaff_x30 = uStack_98;
          if (puVar6 != (undefined *)0x0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
          bVar12 = false;
          *(undefined1 *)(puVar21 + 3) = 1;
        } while (lStack_130 != 0);
        uVar5 = puVar21[2] - 1;
        puVar21[2] = uVar5;
        puVar6 = (undefined *)FUN_100c34aa4((int)puVar21[4],&UNK_108ca14f4,1);
        plVar22 = &uStack_90;
        unaff_x29 = pppppppuStack_a0;
        unaff_x30 = uStack_98;
        if (puVar6 == (undefined *)0x0) {
          if ((uVar5 != 0) && (uVar27 = puStack_120[1], uVar27 != 0)) {
            uVar19 = 0;
            uVar29 = *puStack_120;
            do {
              uVar19 = uVar19 + 1;
              uVar25 = puStack_120[4];
              uVar17 = uVar29;
              uVar24 = uVar27;
              do {
                while( true ) {
                  uVar28 = uVar24;
                  if (0x7ffffffe < uVar24) {
                    uVar28 = 0x7fffffff;
                  }
                  uVar28 = _write((int)uVar25,uVar17,uVar28);
                  if (uVar28 == 0xffffffffffffffff) break;
                  if (uVar28 == 0) goto LAB_1014c11f4;
                  uVar1 = uVar24 - uVar28;
                  if (uVar24 < uVar28) goto LAB_1014c126c;
                  uVar17 = uVar17 + uVar28;
                  uVar24 = uVar1;
                  if (uVar1 == 0) goto LAB_1014c1188;
                }
                piVar8 = (int *)___error();
                lVar26 = (long)*piVar8;
                if (*piVar8 != 4) goto LAB_1014c1200;
              } while (uVar24 != 0);
LAB_1014c1188:
            } while (uVar19 != uVar5);
          }
LAB_1014c1280:
          puVar21 = puStack_120;
          puVar6 = (undefined *)FUN_100c34aa4((int)puStack_120[4],&UNK_108ca2104,1);
          plVar22 = &uStack_90;
          unaff_x29 = pppppppuStack_a0;
          unaff_x30 = uStack_98;
          if (puVar6 == (undefined *)0x0) goto LAB_1014c129c;
        }
        goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      }
      uVar27 = puVar21[2] - 1;
      puVar21[2] = uVar27;
      uVar5 = puVar21[4];
      if ((puVar21[3] & 1) == 0) {
        puVar6 = &UNK_108ca2104;
        uVar24 = 1;
        do {
          while( true ) {
            uVar28 = uVar24;
            if (0x7ffffffe < uVar24) {
              uVar28 = 0x7fffffff;
            }
            uVar28 = _write((int)uVar5,puVar6,uVar28);
            if (uVar28 == 0xffffffffffffffff) break;
            if (uVar28 == 0) goto LAB_1014c11f4;
            uVar27 = uVar24 - uVar28;
            if (uVar24 < uVar28) goto LAB_1014c126c;
            puVar6 = puVar6 + uVar28;
            uVar24 = uVar27;
            if (uVar27 == 0) goto LAB_1014c129c;
          }
          piVar8 = (int *)___error();
          lVar26 = (long)*piVar8;
          if (*piVar8 != 4) goto LAB_1014c1200;
        } while (uVar24 != 0);
      }
      else {
        puVar6 = &UNK_108ca14f4;
        uVar24 = 1;
        do {
          while( true ) {
            uVar28 = uVar24;
            if (0x7ffffffe < uVar24) {
              uVar28 = 0x7fffffff;
            }
            uVar28 = _write((int)uVar5,puVar6,uVar28);
            if (uVar28 == 0xffffffffffffffff) break;
            if (uVar28 == 0) goto LAB_1014c11f4;
            uVar19 = uVar24 - uVar28;
            if (uVar24 < uVar28) goto LAB_1014c126c;
            puVar6 = puVar6 + uVar28;
            uVar24 = uVar19;
            if (uVar19 == 0) goto LAB_1014c1000;
          }
          piVar8 = (int *)___error();
          lVar26 = (long)*piVar8;
          if (*piVar8 != 4) goto LAB_1014c1200;
        } while (uVar24 != 0);
LAB_1014c1000:
        if ((uVar27 != 0) && (uVar5 = puStack_120[1], uVar5 != 0)) {
          uVar19 = 0;
          uVar29 = *puStack_120;
          do {
            uVar19 = uVar19 + 1;
            uVar25 = puStack_120[4];
            uVar17 = uVar29;
            uVar24 = uVar5;
            do {
              while( true ) {
                uVar28 = uVar24;
                if (0x7ffffffe < uVar24) {
                  uVar28 = 0x7fffffff;
                }
                uVar28 = _write((int)uVar25,uVar17,uVar28);
                if (uVar28 == 0xffffffffffffffff) break;
                if (uVar28 == 0) goto LAB_1014c11f4;
                uVar1 = uVar24 - uVar28;
                if (uVar24 < uVar28) goto LAB_1014c126c;
                uVar17 = uVar17 + uVar28;
                uVar24 = uVar1;
                if (uVar1 == 0) goto LAB_1014c1024;
              }
              piVar8 = (int *)___error();
              lVar26 = (long)*piVar8;
              if (*piVar8 != 4) goto LAB_1014c1200;
            } while (uVar24 != 0);
LAB_1014c1024:
          } while (uVar19 != uVar27);
        }
LAB_1014c1120:
        puVar21 = puStack_120;
        uVar5 = puStack_120[4];
        puVar6 = &UNK_108ca2104;
        uVar24 = 1;
        do {
          while( true ) {
            uVar28 = uVar24;
            if (0x7ffffffe < uVar24) {
              uVar28 = 0x7fffffff;
            }
            uVar28 = _write((int)uVar5,puVar6,uVar28);
            if (uVar28 == 0xffffffffffffffff) break;
            if (uVar28 == 0) goto LAB_1014c11f4;
            uVar27 = uVar24 - uVar28;
            if (uVar24 < uVar28) goto LAB_1014c126c;
            puVar6 = puVar6 + uVar28;
            uVar24 = uVar27;
            if (uVar27 == 0) goto LAB_1014c129c;
          }
          piVar8 = (int *)___error();
          lVar26 = (long)*piVar8;
          if (*piVar8 != 4) goto LAB_1014c1200;
        } while (uVar24 != 0);
      }
    }
LAB_1014c129c:
    *(undefined1 *)(puVar21 + 3) = 1;
    return (undefined8 *)0x0;
  }
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c0f80:
  puVar6 = (undefined *)(lVar26 << 0x20 | 2);
  plVar22 = &uStack_90;
  unaff_x29 = pppppppuStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c0f74:
  puVar6 = &UNK_10b233fc8;
  plVar22 = &uStack_90;
  unaff_x29 = pppppppuStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c110c:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar28,uVar24,uVar24,&UNK_10b233fe0);
  goto LAB_1014c1120;
LAB_1014c1258:
  uVar28 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                     (uVar28,uVar5,uVar5,&UNK_10b233fe0);
LAB_1014c126c:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar28,uVar24,uVar24,&UNK_10b233fe0);
  goto LAB_1014c1280;
LAB_1014c13c4:
  plVar13 = plVar20;
  if ((long *)((ulong)plVar22 ^ 0x7fffffffffffffff) <= plVar20) {
    plVar13 = (long *)((ulong)plVar22 ^ 0x7fffffffffffffff);
  }
  plStack_1c0 = (long *)(lVar26 - (long)plVar22);
  plVar14 = plVar22;
  if (plStack_1c0 < plVar13) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar15,plVar13,1);
    plVar14 = (long *)plVar15[1];
    lVar26 = plVar15[2];
    plStack_1c0 = (long *)(lVar26 - (long)plVar14);
  }
  _memcpy((undefined *)(*plVar15 + (long)plVar14),pbVar9,plVar13);
  if (plStack_1c0 < plVar13) {
    plStack_1c8 = plVar13;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_1c8);
LAB_1014c14bc:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
LAB_1014c14d4:
    plStack_1c8 = plVar20;
    plStack_1c0 = plVar22;
    pbVar10 = (byte *)__ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_1c8);
    uStack_1d8 = 0x1014c14e0;
    plStack_210 = plVar22;
    uStack_208 = uVar28;
    plStack_200 = plVar20;
    plStack_1f8 = plVar13;
    pbStack_1f0 = pbVar9;
    plStack_1e8 = plVar15;
    pppppppuStack_1e0 = &pppppppuStack_160;
    if ((*pbVar10 & 1) != 0) {
      auStack_238[0] = 10;
      puVar7 = (undefined8 *)func_0x000108a4a0f8(auStack_238,0,0);
      return puVar7;
    }
    FUN_1013fe3ec();
    if (*pbVar10 == 1) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
      lVar26 = extraout_x1;
    }
    else {
      plVar20 = *(long **)(pbVar10 + 8);
      pbVar10 = (byte *)*plVar20;
      lVar26 = *(long *)(pbVar10 + 0x10);
      if (*(long *)pbVar10 != lVar26) goto LAB_1014c1534;
    }
    FUN_108855060(pbVar10,lVar26,1,1,1);
    lVar26 = *(long *)(pbVar10 + 0x10);
LAB_1014c1534:
    *(undefined1 *)(*(long *)(pbVar10 + 8) + lVar26) = 0x3a;
    *(long *)(pbVar10 + 0x10) = lVar26 + 1;
    plVar20 = (long *)*plVar20;
    if (((ulong)plVar11 & 1) == 0) {
      lVar26 = plVar20[2];
      if ((ulong)(*plVar20 - lVar26) < 4) {
        FUN_108855060(plVar20,lVar26,4,1,1);
        lVar26 = plVar20[2];
      }
      *(undefined4 *)(plVar20[1] + lVar26) = 0x6c6c756e;
      lVar26 = lVar26 + 4;
    }
    else {
      lVar33 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                         (param_5,auStack_238);
      uVar24 = 0x14 - lVar33;
      lVar26 = plVar20[2];
      if ((ulong)(*plVar20 - lVar26) < uVar24) {
        FUN_108855060(plVar20,lVar26,uVar24,1,1);
        lVar26 = plVar20[2];
      }
      _memcpy(plVar20[1] + lVar26,(long)auStack_238 + lVar33,uVar24);
      lVar26 = lVar26 + uVar24;
    }
    plVar20[2] = lVar26;
    return (undefined8 *)0x0;
  }
  plVar15[1] = (long)plVar14 + (long)plVar13;
  if (plVar22 == (long *)0x7fffffffffffffff) goto LAB_1014c1488;
  pbVar9 = pbVar9 + (long)plVar13;
  plVar20 = (long *)((long)plVar20 - (long)plVar13);
  plVar22 = (long *)((long)plVar14 + (long)plVar13);
  if (plVar20 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_1014c13c4;
LAB_1014c1488:
  puVar6 = &UNK_10b233fc8;
  plVar22 = &lStack_150;
  unaff_x19 = plStack_168;
  unaff_x20 = plStack_170;
  unaff_x29 = pppppppuStack_160;
  unaff_x30 = uStack_158;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c1200:
  puVar6 = (undefined *)(lVar26 << 0x20 | 2);
  plVar22 = &uStack_90;
  unaff_x29 = pppppppuStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c11f4:
  puVar6 = &UNK_10b233fc8;
  plVar22 = &uStack_90;
  unaff_x29 = pppppppuStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014c122c:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar27,uVar28,uVar28,&UNK_10b233fe0);
LAB_1014c1240:
  puVar6 = &UNK_10b233fc8;
  plVar22 = &uStack_90;
  unaff_x29 = pppppppuStack_a0;
  unaff_x30 = uStack_98;
__ZN10serde_json5error5Error2io17hd03531c8cc0a8670E:
  *(long **)((long)plVar22 + -0x20) = unaff_x20;
  *(long **)((long)plVar22 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)plVar22 + -0x10) = unaff_x29;
  *(undefined8 *)((long)plVar22 + -8) = unaff_x30;
  *(undefined8 *)((long)plVar22 + -0x48) = 1;
  *(undefined **)((long)plVar22 + -0x40) = puVar6;
  *(undefined8 *)((long)plVar22 + -0x30) = 0;
  *(undefined8 *)((long)plVar22 + -0x28) = 0;
  puVar7 = (undefined8 *)_malloc(0x28);
  if (puVar7 != (undefined8 *)0x0) {
    uVar30 = *(undefined8 *)((long)plVar22 + -0x48);
    uVar32 = *(undefined8 *)((long)plVar22 + -0x30);
    uVar31 = *(undefined8 *)((long)plVar22 + -0x38);
    puVar7[1] = *(undefined8 *)((long)plVar22 + -0x40);
    *puVar7 = uVar30;
    puVar7[3] = uVar32;
    puVar7[2] = uVar31;
    puVar7[4] = *(undefined8 *)((long)plVar22 + -0x28);
    return puVar7;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
  (*pcVar4)();
}

