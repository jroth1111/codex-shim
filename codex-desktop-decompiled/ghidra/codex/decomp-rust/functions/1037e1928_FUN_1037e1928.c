
/* WARNING: Type propagation algorithm not settling */

ulong FUN_1037e1928(long *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *******unaff_x26;
  undefined8 *******pppppppuVar19;
  undefined1 auVar20 [16];
  char *pcStack_180;
  long lStack_178;
  undefined1 uStack_170;
  undefined2 uStack_148;
  bool bStack_146;
  char *pcStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined2 uStack_108;
  undefined1 uStack_106;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  byte *pbStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined1 auStack_7c [4];
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  pbVar13 = (byte *)0x0;
  pppppppuStack_88 = (undefined8 *******)((ulong)auStack_7c | 2);
  pppppppuStack_90 = &pppppppuStack_78;
  pbVar1 = (byte *)0x0;
  pbVar8 = param_3;
  pbVar5 = param_2;
  pbVar6 = param_2;
  pbVar7 = pbStack_a0;
  do {
    do {
      pbStack_a0 = pbVar8;
      pbVar4 = pbVar1;
      if (pbVar6 == param_2 + (long)param_3) {
        uVar18 = (long)pbStack_a0 - (long)pbVar13;
        if (pbVar13 <= pbStack_a0 && uVar18 != 0) {
          lVar15 = param_1[2];
          pbStack_a0 = pbVar7;
          if ((ulong)(*param_1 - lVar15) < uVar18) {
            FUN_10893e30c(param_1,lVar15,uVar18,1,1);
            lVar15 = param_1[2];
          }
          _memcpy(param_1[1] + lVar15,pbVar5 + (long)pbVar13,uVar18);
          param_1[2] = lVar15 + uVar18;
        }
        return 0;
      }
      pbVar14 = pbVar6 + 1;
      uVar17 = (uint)*pbVar6;
      uVar18 = (ulong)uVar17;
      if ((char)*pbVar6 < '\0') {
        if (uVar17 < 0xe0) {
          pbVar14 = pbVar6 + 2;
          uVar18 = (ulong)(pbVar6[1] & 0x3f | (uVar17 & 0x1f) << 6);
        }
        else {
          uVar12 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar17 < 0xf0) {
            pbVar14 = pbVar6 + 3;
            uVar18 = (ulong)(uVar12 | (uVar17 & 0x1f) << 0xc);
          }
          else {
            pbVar14 = pbVar6 + 4;
            uVar18 = (ulong)(pbVar6[3] & 0x3f | uVar12 << 6 | (uVar17 & 7) << 0x12);
          }
        }
      }
      pbVar1 = pbVar14 + ((long)pbVar4 - (long)pbVar6);
      uVar17 = (uint)uVar18;
      pbVar8 = pbStack_a0;
      pbVar6 = pbVar14;
    } while (uVar17 < 0x80);
    uVar3 = (long)pbVar4 - (long)pbVar13;
    pbStack_98 = pbVar5;
    if (pbVar13 <= pbVar4 && uVar3 != 0) {
      if (pbStack_a0 < pbVar4) {
        auVar20 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (pbVar13,pbVar4,pbStack_a0,&UNK_10b2d1998);
        lVar11 = auVar20._8_8_;
        plVar10 = auVar20._0_8_;
        puStack_e0 = &UNK_108d7955d;
        puStack_d8 = &DAT_10349f844;
        pcStack_b8 = FUN_1037e1bc4;
        lVar15 = plVar10[1];
        lVar2 = *plVar10;
        pppppppuStack_100 = unaff_x26;
        uStack_f8 = uVar18;
        pbStack_f0 = pbVar1;
        pbStack_e8 = pbVar4;
        pbStack_d0 = pbVar14;
        plStack_c8 = param_1;
        puStack_c0 = &stack0xfffffffffffffff0;
        break;
      }
      lVar15 = param_1[2];
      if ((ulong)(*param_1 - lVar15) < uVar3) {
        FUN_10893e30c(param_1,lVar15,uVar3,1,1);
        lVar15 = param_1[2];
      }
      uStack_a8 = uVar3;
      _memcpy(param_1[1] + lVar15,pbStack_98 + (long)pbVar13,uVar3);
      param_1[2] = lVar15 + uStack_a8;
    }
    auStack_7c._2_2_ = 0;
    unaff_x26 = pppppppuStack_88;
    uVar12 = uVar17;
    if (0xffff < uVar17) {
      auStack_7c._2_2_ = (ushort)uVar18 & 0x3ff | 0xdc00;
      unaff_x26 = pppppppuStack_90;
      uVar12 = uVar17 + 0xff0000 >> 10 | 0xffffd800;
    }
    auStack_7c._0_2_ = (short)uVar12;
    pppppppuVar19 = (undefined8 *******)auStack_7c;
    do {
      pppppppuStack_70 = &pppppppuStack_78;
      puStack_68 = &DAT_10349f844;
      pppppppuStack_78 = pppppppuVar19;
      uVar18 = func_0x000103263ff4(param_1,&UNK_108d7955d,&pppppppuStack_70);
      if (uVar18 != 0) {
        return uVar18;
      }
      pppppppuVar19 = (undefined8 *******)((long)pppppppuVar19 + 2);
    } while (pppppppuVar19 != unaff_x26);
    lVar15 = 3;
    if (0xffff < uVar17) {
      lVar15 = 4;
    }
    lVar2 = 2;
    if (0x7ff < uVar17) {
      lVar2 = lVar15;
    }
    pbVar13 = pbVar4 + lVar2;
    pbVar8 = pbStack_a0;
    pbVar5 = pbStack_98;
    pbVar7 = pbStack_a0;
  } while( true );
  do {
    lVar16 = lVar2;
    if (lVar16 == lVar15) break;
    *plVar10 = lVar16 + 0x18;
    pcStack_180 = *(char **)(lVar16 + 8);
    lStack_178 = *(long *)(lVar16 + 0x10);
    if (lStack_178 == 0) {
      pcStack_140 = *(char **)(lVar11 + 8);
      lStack_138 = *(long *)(lVar11 + 0x10);
      bStack_146 = false;
      if (lStack_138 != 0) goto LAB_1037e1bf8;
LAB_1037e1c84:
      uStack_106 = false;
    }
    else {
      bStack_146 = *pcStack_180 == '/';
      pcStack_140 = *(char **)(lVar11 + 8);
      lStack_138 = *(long *)(lVar11 + 0x10);
      if (lStack_138 == 0) goto LAB_1037e1c84;
LAB_1037e1bf8:
      uStack_106 = *pcStack_140 == '/';
    }
    uStack_148 = 0x201;
    uStack_170 = 6;
    uStack_130 = 6;
    uStack_108 = 0x201;
    iVar9 = FUN_103593204(&pcStack_180,&pcStack_140);
    lVar2 = lVar16 + 0x18;
  } while (iVar9 == 0);
  return (ulong)(lVar16 != lVar15);
}

