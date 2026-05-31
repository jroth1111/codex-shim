
/* WARNING: Type propagation algorithm not settling */

void FUN_1004ad050(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,byte *param_4,
                  undefined *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char in_NG;
  byte in_ZR;
  char in_OV;
  byte bVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *unaff_x19;
  int iVar22;
  byte *unaff_x20;
  byte *pbVar23;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *pbVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *pbVar25;
  byte *unaff_x25;
  long *unaff_x26;
  uint unaff_w27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar26;
  undefined8 unaff_x30;
  byte *pbVar27;
  byte *pbVar28;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  byte *pbVar32;
  undefined1 auStack_300 [8];
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  long lStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  long lStack_250;
  double dStack_248;
  long lStack_240;
  long lStack_238;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte *pbStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  byte *pbStack_88;
  long *plStack_80;
  undefined *puStack_78;
  byte abStack_69 [9];
  
  pbVar28 = param_1._8_8_;
  pbVar27 = param_1._0_8_;
  puVar26 = &stack0xfffffffffffffff0;
  bVar14 = *param_4;
  pbVar16 = (byte *)(ulong)bVar14;
  pbVar19 = &UNK_108c9a308;
  pbVar21 = (byte *)(ulong)*(ushort *)(&UNK_108c9a308 + (long)pbVar16 * 2);
  pbVar20 = &UNK_1004ad090 + (long)pbVar21 * 4;
  puVar8 = auStack_300;
  puVar9 = auStack_300;
  puVar6 = auStack_300;
  puVar7 = auStack_300;
  bVar10 = in_ZR;
  pbVar23 = (byte *)param_3;
  pbVar17 = pbVar16;
  pbVar24 = unaff_x22;
  pbVar25 = unaff_x24;
  pbVar30 = param_2._0_8_;
  pbVar32 = param_2._8_8_;
  switch(bVar14) {
  case 0:
    lStack_250 = (ulong)CONCAT61(lStack_250._2_6_,param_4[1]) << 8;
    goto code_r0x0001004adafc;
  case 1:
    dStack_248 = (double)(ulong)param_4[1];
    goto code_r0x0001004adab0;
  case 2:
    dStack_248 = (double)(ulong)*(ushort *)(param_4 + 2);
    goto code_r0x0001004adab0;
  case 3:
    dStack_248 = (double)(ulong)*(uint *)(param_4 + 4);
    goto code_r0x0001004adab0;
  case 4:
    dStack_248 = *(double *)(param_4 + 8);
code_r0x0001004adab0:
    uVar15 = 1;
    break;
  case 5:
    dStack_248 = (double)(long)(char)param_4[1];
    goto code_r0x0001004adaf0;
  case 6:
    dStack_248 = (double)(long)*(short *)(param_4 + 2);
    goto code_r0x0001004adaf0;
  case 7:
    dStack_248 = (double)(long)*(int *)(param_4 + 4);
    goto code_r0x0001004adaf0;
  case 8:
    dStack_248 = *(double *)(param_4 + 8);
code_r0x0001004adaf0:
    uVar15 = 2;
    break;
  case 9:
    dStack_248 = (double)*(float *)(param_4 + 4);
    goto code_r0x0001004adae0;
  case 10:
    dStack_248 = *(double *)(param_4 + 8);
code_r0x0001004adae0:
    uVar15 = 3;
    break;
  case 0xb:
  case 0xac:
    param_4 = (byte *)(ulong)*(uint *)(param_4 + 4);
  case 0x8a:
    puVar8 = &stack0xffffffffffffffa0;
code_r0x0001004ada1c:
    puVar26 = *(undefined1 **)(puVar8 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar8 + 0x58);
    unaff_x20 = *(byte **)(puVar8 + 0x40);
    pbVar23 = *(byte **)(puVar8 + 0x48);
    puVar9 = puVar8;
code_r0x0001004ada2c:
    *(byte **)(puVar9 + 0x40) = unaff_x20;
    *(byte **)(puVar9 + 0x48) = pbVar23;
    *(undefined1 **)(puVar9 + 0x50) = puVar26;
    *(undefined8 *)(puVar9 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar9 + 0x1c) = 0;
    uVar13 = (uint)param_4;
    if (uVar13 < 0x80) {
      puVar9[0x1c] = (byte)param_4;
      uVar18 = 1;
    }
    else {
      bVar14 = (byte)param_4 & 0x3f | 0x80;
      if (uVar13 < 0x800) {
        puVar9[0x1c] = (byte)(uVar13 >> 6) | 0xc0;
        puVar9[0x1d] = bVar14;
        uVar18 = 2;
      }
      else {
        bVar10 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        if (uVar13 < 0x10000) {
          puVar9[0x1c] = (byte)(uVar13 >> 0xc) | 0xe0;
          puVar9[0x1d] = bVar10;
          puVar9[0x1e] = bVar14;
          uVar18 = 3;
        }
        else {
          puVar9[0x1c] = (byte)(uVar13 >> 0x12) | 0xf0;
          puVar9[0x1d] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
          puVar9[0x1e] = bVar10;
          puVar9[0x1f] = bVar14;
          uVar18 = 4;
        }
      }
    }
    *(undefined1 **)(puVar9 + 0x28) = puVar9 + 0x1c;
    *(undefined8 *)(puVar9 + 0x30) = uVar18;
    puVar9[0x20] = 5;
    lVar11 = func_0x000108a4a50c(puVar9 + 0x20,puVar9 + 0x3f,&UNK_10b21aab0);
    param_3[0] = 0x1d;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(long *)(param_3 + 8) = lVar11;
    return;
  case 0xc:
    uVar18 = *(undefined8 *)(param_4 + 0x10);
    lVar11 = func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,&UNK_10b21aab0);
    param_3[0] = 0x1d;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(long *)(param_3 + 8) = lVar11;
    if (*(long *)(param_4 + 8) != 0) {
      _free(uVar18);
    }
    return;
  case 0xd:
    dStack_248 = *(double *)(param_4 + 8);
    lStack_240 = *(long *)(param_4 + 0x10);
    uVar15 = 5;
    break;
  case 0xe:
    param_4 = param_4 + 8;
  case 0x85:
code_r0x0001004ad9f0:
    puVar6 = &stack0xffffffffffffffa0;
    pbVar23 = unaff_x19;
    puVar26 = unaff_x29;
code_r0x0001004ad9fc:
    unaff_x22 = *(byte **)(puVar6 + 0x30);
    unaff_x21 = *(byte **)(puVar6 + 0x38);
    puVar7 = puVar6;
code_r0x0001004ada04:
    *(byte **)(puVar7 + 0x30) = unaff_x22;
    *(byte **)(puVar7 + 0x38) = unaff_x21;
    *(byte **)(puVar7 + 0x40) = unaff_x20;
    *(byte **)(puVar7 + 0x48) = pbVar23;
    *(undefined1 **)(puVar7 + 0x50) = puVar26;
    *(undefined8 *)(puVar7 + 0x58) = unaff_x30;
    uVar18 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(puVar7 + 0x18) = uVar18;
    *(undefined8 *)(puVar7 + 0x20) = uVar3;
    puVar7[0x10] = 6;
    lVar11 = func_0x000108a4a50c(puVar7 + 0x10,puVar7 + 0x2f,&UNK_10b21aab0);
    param_3[0] = 0x1d;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(long *)(param_3 + 8) = lVar11;
    if (*(long *)param_4 != 0) {
      _free(uVar18);
    }
    return;
  case 0xf:
  case 0x96:
    dStack_248 = *(double *)(param_4 + 8);
    lStack_240 = *(long *)(param_4 + 0x10);
    uVar15 = 6;
    break;
  case 0x10:
    uVar15 = 8;
    break;
  default:
    pbVar23 = *(byte **)(param_4 + 8);
    dStack_248 = *(double *)(pbVar23 + 8);
    lStack_250 = *(long *)pbVar23;
    lStack_238 = *(long *)(pbVar23 + 0x18);
    lStack_240 = *(long *)(pbVar23 + 0x10);
    thunk_FUN_1087fe744(param_3,&lStack_250);
  case 0xea:
code_r0x0001004ad154:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pbVar23);
    return;
  case 0x12:
    uVar15 = 7;
    break;
  case 0x13:
    pbVar23 = *(byte **)(param_4 + 8);
    dStack_248 = *(double *)(pbVar23 + 8);
    lStack_250 = *(long *)pbVar23;
    lStack_238 = *(long *)(pbVar23 + 0x18);
    lStack_240 = *(long *)(pbVar23 + 0x10);
    thunk_FUN_108829408(param_3,&lStack_250);
    goto code_r0x0001004ad154;
  case 0x14:
    pbStack_128 = *(byte **)(param_4 + 8);
    unaff_x22 = *(byte **)(param_4 + 0x10);
    unaff_x26 = *(long **)(param_4 + 0x18);
    unaff_x24 = unaff_x22 + (long)unaff_x26 * 0x20;
    lStack_118 = 0;
    unaff_x21 = unaff_x22;
    pbStack_138 = unaff_x22;
    pbStack_130 = unaff_x22;
    pbStack_120 = unaff_x24;
    if (unaff_x26 != (long *)0x0) {
      unaff_x21 = unaff_x22 + 0x20;
      pbStack_130 = unaff_x21;
      if (*unaff_x22 != 0x16) {
        uStack_297 = (undefined7)*(undefined8 *)(unaff_x22 + 9);
        uStack_29f = (undefined7)*(undefined8 *)(unaff_x22 + 1);
        uStack_298 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 1) >> 0x38);
        pbStack_288 = *(byte **)(unaff_x22 + 0x18);
        uStack_290 = (undefined1)*(long *)(unaff_x22 + 0x10);
        uStack_28f = (undefined7)((ulong)*(long *)(unaff_x22 + 0x10) >> 8);
        bVar14 = *unaff_x22;
        goto code_r0x0001004ad1a4;
      }
    }
  case 0xcc:
    param_4 = &UNK_10b22ecd8;
code_r0x0001004ad82c:
    param_5 = &UNK_10b20a000;
code_r0x0001004ad830:
    param_5 = param_5 + 0x590;
    pbVar23 = (byte *)0x0;
code_r0x0001004ad838:
    pbVar23 = (byte *)thunk_FUN_1087e422c(pbVar23,param_4,param_5);
code_r0x0001004ad83c:
    unaff_x20 = pbVar23;
code_r0x0001004ad840:
    pbVar16 = (byte *)0x1d;
code_r0x0001004ad844:
    *(byte **)param_3 = pbVar16;
    *(byte **)(param_3 + 8) = unaff_x20;
code_r0x0001004ad848:
    pbVar16 = unaff_x24 + -(long)unaff_x21;
code_r0x0001004ad84c:
    unaff_x22 = (byte *)(((ulong)pbVar16 >> 5) + 1);
    while (unaff_x22 = unaff_x22 + -1, unaff_x22 != (byte *)0x0) {
      unaff_x20 = unaff_x21 + 0x20;
code_r0x0001004ad860:
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x20;
code_r0x0001004ad86c:
    }
code_r0x0001004ad870:
    pbVar16 = pbStack_128;
code_r0x0001004ad874:
    param_3 = (char *)pbStack_138;
    if (pbVar16 == (byte *)0x0) {
      return;
    }
code_r0x0001004ad87c:
    _free(param_3);
    return;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
    lStack_270 = *(long *)(param_4 + 8);
    pbVar16 = *(byte **)(param_4 + 0x10);
    unaff_x28 = pbVar16 + *(long *)(param_4 + 0x18) * 0x40;
    unaff_x24 = &bStack_2a0;
    bStack_2a0 = 0x16;
    pbStack_260 = (byte *)0x0;
    pbStack_138 = (byte *)0x8000000000000001;
    pbStack_2c0 = (byte *)param_3;
    pbStack_280 = pbVar16;
    pbStack_268 = unaff_x28;
    if (*(long *)(param_4 + 0x18) == 0) {
      pbStack_138 = (byte *)0x8000000000000001;
      pbStack_278 = pbVar16;
      goto code_r0x0001004ad808;
    }
    unaff_x22 = (byte *)((ulong)&uStack_90 | 1);
    pbVar19 = (byte *)&uStack_100;
    unaff_x23 = (byte *)((ulong)unaff_x24 | 1);
  case 0xec:
    unaff_x20 = (byte *)((ulong)pbVar19 | 1);
    pbStack_2b8 = (byte *)0x8000000000000000;
    pbStack_2b0 = (byte *)0x8000000000000001;
    pbStack_2a8 = (byte *)0x8000000000000001;
    param_3 = (char *)0x8000000000000000;
    unaff_x24 = (byte *)0x8000000000000001;
    do {
      unaff_x21 = pbVar16 + 0x40;
      unaff_w27 = (uint)*pbVar16;
      pbStack_278 = unaff_x21;
      if (*pbVar16 == 0x16) break;
      pbVar19 = pbStack_260 + 1;
code_r0x0001004ad258:
      uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,(char)unaff_w27);
      lVar11 = *(long *)(pbVar16 + 1);
      lVar31 = *(long *)(pbVar16 + 0x18);
      lVar29 = *(long *)(pbVar16 + 0x10);
      pbStack_f8 = *(byte **)(pbVar16 + 0x28);
      uStack_100 = *(byte **)(pbVar16 + 0x20);
      *(long *)(unaff_x22 + 8) = *(long *)(pbVar16 + 9);
      *(long *)unaff_x22 = lVar11;
      *(long *)(unaff_x22 + 0x17) = lVar31;
      *(long *)(unaff_x22 + 0xf) = lVar29;
      pbStack_e8 = *(byte **)(pbVar16 + 0x38);
      pbStack_f0 = *(byte **)(pbVar16 + 0x30);
      pbVar27 = uStack_100;
      pbVar28 = pbStack_f8;
      pbVar30 = pbStack_f0;
      pbVar32 = pbStack_e8;
      pbStack_260 = pbVar19;
      if (bStack_2a0 != 0x16) {
        FUN_100e077ec(&bStack_2a0);
        pbVar27 = uStack_100;
        pbVar28 = pbStack_f8;
        pbVar30 = pbStack_f0;
        pbVar32 = pbStack_e8;
      }
code_r0x0001004ad290:
      uStack_298 = SUB81(pbVar28,0);
      uStack_297 = (undefined7)((ulong)pbVar28 >> 8);
      bStack_2a0 = (byte)pbVar27;
      uStack_29f = (undefined7)((ulong)pbVar27 >> 8);
      uStack_290 = SUB81(pbVar30,0);
      uStack_28f = (undefined7)((ulong)pbVar30 >> 8);
      unaff_x25 = pbStack_88;
      unaff_x26 = plStack_80;
      pbStack_288 = pbVar32;
      if ((int)unaff_w27 < 0xd) {
        if (unaff_w27 == 1) {
          bVar14 = uStack_90._1_1_;
          if (3 < uStack_90._1_1_) {
            bVar14 = 4;
          }
          goto code_r0x0001004ad5c0;
        }
        if (unaff_w27 == 4) {
          pbVar19 = pbStack_88;
          if ((byte *)0x3 < pbStack_88) {
            pbVar19 = (byte *)0x4;
          }
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,(char)pbVar19);
          goto code_r0x0001004ad5c4;
        }
        pbVar23 = (byte *)param_3;
        if (unaff_w27 != 0xc) {
code_r0x0001004ad7e0:
          param_3 = (char *)&uStack_90;
code_r0x0001004ad7e4:
          param_4 = abStack_69;
code_r0x0001004ad7e8:
          param_5 = &UNK_10b20e000;
code_r0x0001004ad7ec:
          param_5 = param_5 + 0x9e0;
code_r0x0001004ad7f0:
          pbStack_f8 = (byte *)thunk_FUN_108855b04(param_3,param_4,param_5);
code_r0x0001004ad7f8:
          bVar14 = 1;
          param_3 = (char *)pbVar23;
code_r0x0001004ad7fc:
          uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,bVar14);
          goto code_r0x0001004ad5d0;
        }
        in_OV = SBORROW8((long)puStack_78,0x12);
        in_NG = (long)(puStack_78 + -0x12) < 0;
        in_ZR = puStack_78 == (undefined *)0x12;
        param_5 = puStack_78;
code_r0x0001004ad2c0:
        if ((bool)in_ZR || in_NG != in_OV) {
          if (param_5 != (undefined *)0x6) {
            if ((param_5 == (undefined *)0x11) &&
               ((*unaff_x26 == 0x636e657265666e69 && unaff_x26[1] == 0x695f6c6c61635f65) &&
                (char)unaff_x26[2] == 'd')) {
              uStack_100 = (byte *)((ulong)uStack_100 & 0xffffffffffff0000);
code_r0x0001004ad31c:
              goto joined_r0x0001004ad370;
            }
code_r0x0001004ad530:
            uStack_100 = (byte *)CONCAT62(uStack_100._2_6_,0x400);
            goto joined_r0x0001004ad7d0;
          }
code_r0x0001004ad4b4:
          in_ZR = false;
          if ((int)*unaff_x26 == 0x73616572) {
            in_ZR = *(short *)((long)unaff_x26 + 4) == 0x6e6f;
          }
code_r0x0001004ad4d0:
          if (!(bool)in_ZR) goto code_r0x0001004ad530;
code_r0x0001004ad4d4:
          uStack_100 = (byte *)CONCAT62(uStack_100._2_6_,0x200);
code_r0x0001004ad4dc:
          uStack_100 = (byte *)((ulong)uStack_100 & 0xffffffffffffff00);
code_r0x0001004ad4e0:
          if (unaff_x25 == (byte *)0x0) {
code_r0x0001004ad4e4:
            goto code_r0x0001004ad5d0;
          }
        }
        else {
code_r0x0001004ad3e8:
          if (param_5 != (undefined *)0x13) {
            if (param_5 == (undefined *)0x18) {
              pbVar16 = (byte *)*unaff_x26;
              pbVar19 = (byte *)unaff_x26[1];
              pbVar20 = (byte *)unaff_x26[2];
code_r0x0001004ad400:
              if ((pbVar16 == (byte *)0x5f6c616974726170 && pbVar19 == (byte *)0x65736e6f70736572)
                  && pbVar20 == (byte *)0x64616f6c7961705f) {
                uStack_100 = (byte *)CONCAT62(uStack_100._2_6_,0x300);
                if (unaff_x25 != (byte *)0x0) goto code_r0x0001004ad540;
code_r0x0001004ad450:
                goto code_r0x0001004ad5d0;
              }
            }
            goto code_r0x0001004ad530;
          }
          pbVar16 = (byte *)*unaff_x26;
          pbVar19 = (byte *)unaff_x26[1];
          pbVar20 = *(byte **)((long)unaff_x26 + 0xb);
code_r0x0001004ad4f0:
          pbVar21 = (byte *)0x74737075;
code_r0x0001004ad4f8:
          bVar10 = pbVar16 == (byte *)((ulong)pbVar21 | 0x6d61657200000000);
          pbVar16 = (byte *)0x747365757165725f;
code_r0x0001004ad514:
          in_ZR = 0;
          if ((bool)bVar10) {
            in_ZR = pbVar19 == pbVar16;
          }
code_r0x0001004ad518:
          pbVar16 = (byte *)0x73657571;
code_r0x0001004ad520:
          pbVar16 = (byte *)((ulong)pbVar16 | 0x5f7400000000);
          bVar10 = in_ZR;
code_r0x0001004ad524:
          in_ZR = false;
          if ((bool)bVar10) {
            in_ZR = pbVar20 == (byte *)((ulong)pbVar16 | 0x6469000000000000);
          }
code_r0x0001004ad52c:
          if (!(bool)in_ZR) goto code_r0x0001004ad530;
code_r0x0001004ad7c4:
          uStack_100 = (byte *)CONCAT62(uStack_100._2_6_,0x100);
code_r0x0001004ad7cc:
          uStack_100 = (byte *)((ulong)uStack_100 & 0xffffffffffffff00);
joined_r0x0001004ad7d0:
          if (unaff_x25 == (byte *)0x0) goto code_r0x0001004ad5d0;
        }
code_r0x0001004ad540:
        _free(unaff_x26);
      }
      else {
        in_ZR = unaff_w27 == 0xd;
code_r0x0001004ad328:
        if ((bool)in_ZR) {
code_r0x0001004ad38c:
          if ((long)unaff_x26 < 0x13) {
            if (unaff_x26 == (long *)0x6) {
              if (*(int *)unaff_x25 != 0x73616572 || *(short *)(unaff_x25 + 4) != 0x6e6f)
              goto code_r0x0001004ad5bc;
              bVar14 = 2;
code_r0x0001004ad570:
            }
            else {
              if ((unaff_x26 != (long *)0x11) ||
                 ((*(long *)unaff_x25 != 0x636e657265666e69 ||
                  *(long *)(unaff_x25 + 8) != 0x695f6c6c61635f65) || unaff_x25[0x10] != 100))
              goto code_r0x0001004ad5bc;
              bVar14 = 0;
            }
          }
          else {
            if (unaff_x26 == (long *)0x13) {
              pbVar16 = *(byte **)unaff_x25;
              pbVar19 = *(byte **)(unaff_x25 + 8);
              pbVar20 = *(byte **)(unaff_x25 + 0xb);
code_r0x0001004ad57c:
              pbVar21 = (byte *)0x7075;
code_r0x0001004ad580:
              if ((pbVar16 == (byte *)((ulong)pbVar21 | 0x6d61657274730000) &&
                  pbVar19 == (byte *)0x747365757165725f) && pbVar20 == (byte *)0x64695f7473657571) {
code_r0x0001004ad7d8:
                bVar14 = 1;
code_r0x0001004ad7dc:
                goto code_r0x0001004ad5c0;
              }
            }
            else if (unaff_x26 == (long *)0x18) {
              pbVar16 = *(byte **)unaff_x25;
              pbVar19 = *(byte **)(unaff_x25 + 8);
              pbVar20 = *(byte **)(unaff_x25 + 0x10);
              pbVar21 = (byte *)0x6170;
code_r0x0001004ad470:
              in_ZR = pbVar16 == (byte *)((ulong)pbVar21 | 0x5f6c616974720000) &&
                      pbVar19 == (byte *)0x65736e6f70736572;
              pbVar16 = (byte *)0x6f6c7961705f;
code_r0x0001004ad4a0:
              if ((bool)in_ZR && pbVar20 == (byte *)((ulong)pbVar16 | 0x6461000000000000)) {
code_r0x0001004ad4ac:
                bVar14 = 3;
                goto code_r0x0001004ad5c0;
              }
            }
code_r0x0001004ad5bc:
            bVar14 = 4;
          }
code_r0x0001004ad5c0:
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar14);
code_r0x0001004ad5c4:
          uStack_100 = (byte *)((ulong)uStack_100._1_7_ << 8);
        }
        else {
          if (unaff_w27 == 0xe) {
            FUN_100b48ca8(&uStack_100,unaff_x26);
joined_r0x0001004ad370:
            if (unaff_x25 != (byte *)0x0) goto code_r0x0001004ad540;
            goto code_r0x0001004ad5d0;
          }
          pbVar23 = (byte *)param_3;
          if (unaff_w27 != 0xf) goto code_r0x0001004ad7e0;
          FUN_100b48ca8(&uStack_100,unaff_x25,unaff_x26);
        }
code_r0x0001004ad5c8:
        FUN_100e077ec(&uStack_90);
      }
code_r0x0001004ad5d0:
      if (((ulong)uStack_100 & 1) != 0) goto code_r0x0001004ad900;
      pbVar16 = (byte *)(ulong)uStack_100._1_1_;
      if (uStack_100._1_1_ < 2) {
code_r0x0001004ad654:
        pbVar20 = pbStack_2b0;
        pbVar24 = pbStack_2b8;
        unaff_x25 = pbStack_2c8;
        pbVar23 = (byte *)param_3;
        if ((int)pbVar16 == 0) {
          if (pbStack_2b8 != (byte *)0x8000000000000000) {
            pbStack_130 = pbStack_2c8;
            uStack_90 = &UNK_108cb8872;
            pbStack_88 = (byte *)0x11;
            uStack_100 = (byte *)&uStack_90;
            pbStack_f8 = &DAT_100c7b3a0;
            pbStack_138 = unaff_x24;
            lVar11 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
LAB_1004adfb0:
            unaff_x24 = &bStack_2a0;
            pbStack_2c0[0] = 0x1d;
            pbStack_2c0[1] = 0;
            pbStack_2c0[2] = 0;
            pbStack_2c0[3] = 0;
            pbStack_2c0[4] = 0;
            pbStack_2c0[5] = 0;
            pbStack_2c0[6] = 0;
            pbStack_2c0[7] = 0;
            *(long *)(pbStack_2c0 + 8) = lVar11;
            unaff_x23 = pbVar20;
            goto LAB_1004ad8e4;
          }
          pbVar16 = (byte *)(ulong)bStack_2a0;
code_r0x0001004ad66c:
          bStack_2a0 = 0x16;
          if ((int)pbVar16 == 0x16) {
            pbStack_130 = pbStack_2c8;
            pbStack_138 = unaff_x24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004ae064;
          }
          lVar11 = *(long *)unaff_x23;
          *(long *)(unaff_x20 + 8) = *(long *)(unaff_x23 + 8);
          *(long *)unaff_x20 = lVar11;
          uVar18 = *(undefined8 *)(unaff_x23 + 0xf);
          *(undefined8 *)(unaff_x20 + 0x17) = *(undefined8 *)(unaff_x23 + 0x17);
          *(undefined8 *)(unaff_x20 + 0xf) = uVar18;
          uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,(char)pbVar16);
          pbStack_2b8 = (byte *)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          pbStack_2b8 = uStack_90;
          if (uStack_90 == (byte *)0x8000000000000000) {
            pbStack_130 = pbStack_2c8;
            pbStack_2c0[0] = 0x1d;
            pbStack_2c0[1] = 0;
            pbStack_2c0[2] = 0;
            pbStack_2c0[3] = 0;
            pbStack_2c0[4] = 0;
            pbStack_2c0[5] = 0;
            pbStack_2c0[6] = 0;
            pbStack_2c0[7] = 0;
            *(byte **)(pbStack_2c0 + 8) = pbStack_88;
            unaff_x20 = (byte *)0x1;
            unaff_x22 = (byte *)0x0;
            unaff_x25 = pbStack_2c8;
            pbStack_138 = unaff_x24;
            goto code_r0x0001004ad91c;
          }
code_r0x0001004ad228:
          pbVar16 = unaff_x21;
          pbStack_2d0 = pbStack_88;
          plStack_2f0 = plStack_80;
        }
        else {
          pbVar16 = (byte *)0x8000000000000001;
code_r0x0001004ad760:
          bVar14 = bStack_2a0;
          pbVar24 = pbStack_2b8;
          unaff_x25 = pbStack_2c8;
          if (pbVar20 != pbVar16) {
            pbStack_130 = pbStack_2c8;
            uStack_90 = &UNK_108cb88d9;
            pbStack_88 = (byte *)0x13;
            uStack_100 = (byte *)&uStack_90;
            pbStack_f8 = &DAT_100c7b3a0;
            pbStack_138 = unaff_x24;
            lVar11 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_1004adfb0;
          }
          bStack_2a0 = 0x16;
          if (bVar14 == 0x16) {
            pbStack_130 = pbStack_2c8;
            pbStack_138 = unaff_x24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004ae064;
          }
          lVar11 = *(long *)unaff_x23;
          *(long *)(unaff_x20 + 8) = *(long *)(unaff_x23 + 8);
          *(long *)unaff_x20 = lVar11;
          pbVar28 = *(byte **)(unaff_x23 + 0x17);
          pbVar27 = *(byte **)(unaff_x23 + 0xf);
code_r0x0001004ad788:
          *(byte **)(unaff_x20 + 0x17) = pbVar28;
          *(byte **)(unaff_x20 + 0xf) = pbVar27;
          uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,bVar14);
          param_3 = (char *)pbVar23;
code_r0x0001004ad790:
          pbStack_2b0 = (byte *)0x8000000000000001;
          FUN_1004b60cc(&uStack_90,&uStack_100);
          pbStack_2b0 = uStack_90;
          if (uStack_90 == (byte *)0x8000000000000001) {
            pbStack_130 = pbStack_2c8;
            pbStack_2c0[0] = 0x1d;
            pbStack_2c0[1] = 0;
            pbStack_2c0[2] = 0;
            pbStack_2c0[3] = 0;
            pbStack_2c0[4] = 0;
            pbStack_2c0[5] = 0;
            pbStack_2c0[6] = 0;
            pbStack_2c0[7] = 0;
            *(byte **)(pbStack_2c0 + 8) = pbStack_88;
            iVar22 = 1;
            unaff_x23 = (byte *)0x8000000000000001;
            uVar13 = 1;
            pbVar25 = &bStack_2a0;
            pbVar24 = pbStack_2b8;
            pbStack_138 = unaff_x24;
            uVar2 = 1;
            iVar1 = 1;
            unaff_x25 = pbStack_2c8;
            unaff_x22 = pbStack_2b8;
            pbVar19 = pbStack_2a8;
            if (pbStack_2a8 == (byte *)0x8000000000000001) goto LAB_1004adcec;
            goto joined_r0x0001004adf60;
          }
code_r0x0001004ad7b8:
          pbVar16 = unaff_x21;
          pbStack_2e0 = pbStack_88;
          uStack_2e8 = plStack_80;
        }
      }
      else if (uStack_100._1_1_ == 2) {
code_r0x0001004ad6bc:
        pbVar20 = pbStack_2b0;
        pbVar24 = pbStack_2b8;
        unaff_x25 = pbStack_2c8;
        if ((byte *)param_3 != (byte *)0x8000000000000000) {
          pbStack_130 = pbStack_2c8;
          uStack_90 = &UNK_108cadf0d;
          pbStack_88 = (byte *)0x6;
          uStack_100 = (byte *)&uStack_90;
          pbStack_f8 = &DAT_100c7b3a0;
          pbStack_138 = unaff_x24;
          lVar11 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          pbVar23 = (byte *)param_3;
          goto LAB_1004adfb0;
        }
code_r0x0001004ad6c8:
        pbVar16 = unaff_x21;
        bVar14 = bStack_2a0;
        bStack_2a0 = 0x16;
        if (bVar14 == 0x16) {
          pbStack_130 = pbStack_2c8;
          pbStack_138 = unaff_x24;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004ae064;
        }
        lVar11 = *(long *)unaff_x23;
        *(long *)(unaff_x20 + 8) = *(long *)(unaff_x23 + 8);
        *(long *)unaff_x20 = lVar11;
        uVar18 = *(undefined8 *)(unaff_x23 + 0xf);
        *(undefined8 *)(unaff_x20 + 0x17) = *(undefined8 *)(unaff_x23 + 0x17);
        *(undefined8 *)(unaff_x20 + 0xf) = uVar18;
        uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,bVar14);
        param_3 = (char *)0x0;
        FUN_1004b62d4(&uStack_90,&uStack_100);
        if (uStack_90 == (byte *)0x8000000000000000) {
          pbStack_130 = pbStack_2c8;
          pbVar16 = pbStack_88;
          unaff_x25 = pbStack_2c8;
          pbStack_138 = unaff_x24;
          goto code_r0x0001004ad90c;
        }
        pbStack_2d8 = pbStack_88;
        plStack_2f8 = plStack_80;
        param_3 = (char *)uStack_90;
      }
      else if (uStack_100._1_1_ == 3) {
code_r0x0001004ad5f4:
        pbVar16 = pbStack_2b0;
        pbVar19 = pbStack_2b8;
        unaff_x25 = pbStack_2c8;
        if (pbStack_2a8 != (byte *)0x8000000000000001) {
          pbStack_130 = pbStack_2c8;
          uStack_90 = &UNK_108cbacc1;
          pbStack_88 = (byte *)0x18;
          uStack_100 = (byte *)&uStack_90;
          pbStack_f8 = &DAT_100c7b3a0;
          pbStack_138 = unaff_x24;
          lVar11 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          pbStack_2c0[0] = 0x1d;
          pbStack_2c0[1] = 0;
          pbStack_2c0[2] = 0;
          pbStack_2c0[3] = 0;
          pbStack_2c0[4] = 0;
          pbStack_2c0[5] = 0;
          pbStack_2c0[6] = 0;
          pbStack_2c0[7] = 0;
          *(long *)(pbStack_2c0 + 8) = lVar11;
          pbVar25 = &bStack_2a0;
          uVar2 = 1;
          iVar1 = 1;
          unaff_x22 = pbVar19;
          unaff_x23 = pbVar16;
          pbVar19 = pbStack_2a8;
          goto joined_r0x0001004adf60;
        }
        pbStack_2a8 = (byte *)0x8000000000000001;
        func_0x000100f1ec38(&uStack_100,&bStack_2a0);
        in_ZR = uStack_100 == (byte *)0x8000000000000001;
        pbVar20 = pbStack_f8;
        unaff_x24 = uStack_100;
code_r0x0001004ad624:
        if ((bool)in_ZR) {
          pbStack_2c0[0] = 0x1d;
          pbStack_2c0[1] = 0;
          pbStack_2c0[2] = 0;
          pbStack_2c0[3] = 0;
          pbStack_2c0[4] = 0;
          pbStack_2c0[5] = 0;
          pbStack_2c0[6] = 0;
          pbStack_2c0[7] = 0;
          *(byte **)(pbStack_2c0 + 8) = pbVar20;
          uVar13 = 1;
          iVar22 = 1;
          pbVar25 = &bStack_2a0;
          pbVar24 = pbStack_2b8;
          unaff_x23 = pbStack_2b0;
          goto LAB_1004adcec;
        }
        pbStack_120 = pbStack_e8;
        pbStack_128 = pbStack_f0;
        lStack_110 = lStack_d8;
        lStack_118 = lStack_e0;
        lStack_108 = lStack_d0;
        pbVar16 = pbStack_278;
        unaff_x28 = pbStack_268;
        pbStack_2c8 = pbVar20;
        pbStack_2a8 = unaff_x24;
      }
      else {
code_r0x0001004ad724:
        pbVar16 = (byte *)(ulong)bStack_2a0;
        bStack_2a0 = 0x16;
code_r0x0001004ad730:
        bVar14 = (byte)pbVar16;
        if ((int)pbVar16 == 0x16) {
          pbStack_130 = pbStack_2c8;
          pbStack_138 = unaff_x24;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004ae064:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1004ae068);
          (*pcVar5)();
        }
code_r0x0001004ad738:
        pbVar16 = unaff_x21;
        lVar11 = *(long *)unaff_x23;
        *(long *)(unaff_x20 + 8) = *(long *)(unaff_x23 + 8);
        *(long *)unaff_x20 = lVar11;
        uVar18 = *(undefined8 *)(unaff_x23 + 0xf);
        *(undefined8 *)(unaff_x20 + 0x17) = *(undefined8 *)(unaff_x23 + 0x17);
        *(undefined8 *)(unaff_x20 + 0xf) = uVar18;
        uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,bVar14);
        FUN_100e077ec(&uStack_100);
      }
    } while (pbVar16 != unaff_x28);
code_r0x0001004ad884:
    unaff_x25 = pbStack_2c8;
code_r0x0001004ad888:
    pbStack_138 = unaff_x24;
    pbStack_130 = unaff_x25;
code_r0x0001004ad88c:
    pbVar19 = (byte *)0x8000000000000000;
code_r0x0001004ad890:
    unaff_x22 = pbStack_2b8;
code_r0x0001004ad894:
    if (unaff_x22 == pbVar19) {
code_r0x0001004ad89c:
      unaff_x20 = pbStack_2c0;
      unaff_x23 = pbStack_2b0;
code_r0x0001004ad8a4:
      unaff_x24 = &bStack_2a0;
code_r0x0001004ad8a8:
      pbVar16 = &UNK_108cb8872;
code_r0x0001004ad8b0:
      pbVar19 = (byte *)0x11;
      pbVar17 = pbVar16;
code_r0x0001004ad8b4:
      pbVar16 = (byte *)&uStack_90;
      uStack_90 = pbVar17;
      pbStack_88 = pbVar19;
code_r0x0001004ad8bc:
      pbVar19 = &DAT_100c7b3a0;
code_r0x0001004ad8c4:
      unaff_x22 = (byte *)0x0;
      pbVar23 = (byte *)param_3;
      uStack_100 = pbVar16;
      pbStack_f8 = pbVar19;
FUN_1004ad8cc:
      param_3 = s_missing_field_____108ac28f7;
code_r0x0001004ad8d4:
      param_4 = (byte *)&uStack_100;
code_r0x0001004ad8d8:
      param_3 = (char *)thunk_FUN_108856088(param_3,param_4);
code_r0x0001004ad8dc:
      pbVar16 = (byte *)0x1d;
      pbVar24 = unaff_x22;
code_r0x0001004ad8e0:
      *(byte **)unaff_x20 = pbVar16;
      *(char **)(unaff_x20 + 8) = param_3;
LAB_1004ad8e4:
      unaff_x20 = (byte *)0x1;
      unaff_x21 = (byte *)0x1;
code_r0x0001004ad8ec:
      pbVar16 = (byte *)0x8000000000000001;
code_r0x0001004ad8f0:
      pbVar19 = pbStack_2a8;
code_r0x0001004ad8f4:
      in_ZR = pbVar19 == pbVar16;
      param_3 = (char *)pbVar23;
      pbVar25 = unaff_x24;
code_r0x0001004ad8f8:
      iVar22 = (int)unaff_x20;
      uVar13 = (uint)unaff_x21;
      uVar2 = uVar13;
      iVar1 = iVar22;
      unaff_x22 = pbVar24;
      if ((bool)in_ZR) goto LAB_1004adcec;
    }
    else {
code_r0x0001004ad938:
      pbVar16 = (byte *)0x8000000000000001;
code_r0x0001004ad93c:
      unaff_x23 = pbStack_2b0;
code_r0x0001004ad940:
      in_ZR = unaff_x23 == pbVar16;
code_r0x0001004ad944:
      unaff_x21 = pbVar19;
      if (!(bool)in_ZR) {
        unaff_x21 = unaff_x23;
      }
code_r0x0001004ad948:
      unaff_x20 = (byte *)(ulong)in_ZR;
      in_ZR = (byte *)param_3 == pbVar19;
code_r0x0001004ad950:
      unaff_x24 = pbStack_2c0;
code_r0x0001004ad954:
      if (!(bool)in_ZR) {
code_r0x0001004ad9cc:
        in_ZR = pbStack_2a8 == pbVar16;
        pbVar21 = pbStack_2a8;
code_r0x0001004ad9d4:
        if ((bool)in_ZR) {
          pbVar21 = (byte *)0x8000000000000000;
code_r0x0001004ad9dc:
        }
        else {
          pbStack_b8 = pbStack_120;
          pbStack_c0 = pbStack_128;
          lStack_a8 = lStack_110;
          lStack_b0 = lStack_118;
          lStack_a0 = lStack_108;
        }
        unaff_x24[0] = 0xd;
        unaff_x24[1] = 0;
        unaff_x24[2] = 0;
        unaff_x24[3] = 0;
        unaff_x24[4] = 0;
        unaff_x24[5] = 0;
        unaff_x24[6] = 0;
        unaff_x24[7] = 0;
        *(byte **)(unaff_x24 + 8) = unaff_x22;
        *(byte **)(unaff_x24 + 0x10) = pbStack_2d0;
        *(long **)(unaff_x24 + 0x18) = plStack_2f0;
        *(char **)(unaff_x24 + 0x20) = param_3;
        *(byte **)(unaff_x24 + 0x28) = pbStack_2d8;
        *(long **)(unaff_x24 + 0x30) = plStack_2f8;
        *(byte **)(unaff_x24 + 0x38) = unaff_x21;
        *(byte **)(unaff_x24 + 0x40) = pbStack_2e0;
        *(long **)(unaff_x24 + 0x48) = uStack_2e8;
        *(byte **)(unaff_x24 + 0x50) = pbVar21;
        *(byte **)(unaff_x24 + 0x58) = unaff_x25;
        *(byte **)(unaff_x24 + 0x68) = pbStack_b8;
        *(byte **)(unaff_x24 + 0x60) = pbStack_c0;
        *(long *)(unaff_x24 + 0x78) = lStack_a8;
        *(long *)(unaff_x24 + 0x70) = lStack_b0;
        *(long *)(unaff_x24 + 0x80) = lStack_a0;
        _memcpy(&lStack_250,unaff_x24,0x118);
        lVar11 = FUN_100fbc67c(&bStack_2a0);
        if (lVar11 == 0) {
          return;
        }
        unaff_x24[0] = 0x1d;
        unaff_x24[1] = 0;
        unaff_x24[2] = 0;
        unaff_x24[3] = 0;
        unaff_x24[4] = 0;
        unaff_x24[5] = 0;
        unaff_x24[6] = 0;
        unaff_x24[7] = 0;
        *(long *)(unaff_x24 + 8) = lVar11;
        goto code_r0x0001004adba0;
      }
      pbVar16 = &UNK_108cad000;
code_r0x0001004ad95c:
      pbVar16 = pbVar16 + 0xf0d;
code_r0x0001004ad960:
      pbVar19 = (byte *)0x6;
code_r0x0001004ad964:
      uStack_90 = pbVar16;
      pbStack_88 = pbVar19;
code_r0x0001004ad968:
      pbVar16 = (byte *)&uStack_90;
      pbVar19 = &UNK_100c7b000;
code_r0x0001004ad970:
      pbVar19 = pbVar19 + 0x3a0;
code_r0x0001004ad974:
      uStack_100 = pbVar16;
      pbStack_f8 = pbVar19;
FUN_1004ad978:
      param_3 = s_missing_field_____108ac28f7;
code_r0x0001004ad980:
      param_4 = (byte *)&uStack_100;
code_r0x0001004ad984:
      param_3 = (char *)thunk_FUN_108856088(param_3,param_4);
code_r0x0001004ad988:
      pbVar16 = (byte *)0x1d;
code_r0x0001004ad98c:
      *(byte **)unaff_x24 = pbVar16;
      *(char **)(unaff_x24 + 8) = param_3;
code_r0x0001004ad990:
      if (((ulong)unaff_x21 & 0x7fffffffffffffff) != 0) {
code_r0x0001004ad998:
        param_3 = (char *)pbStack_2e0;
code_r0x0001004ad99c:
        _free(param_3);
      }
LAB_1004ad9a0:
      unaff_x24 = &bStack_2a0;
code_r0x0001004ad9a4:
      if (unaff_x22 != (byte *)0x0) {
code_r0x0001004ad9a8:
        _free(pbStack_2d0);
      }
LAB_1004ad9b0:
      unaff_x21 = (byte *)0x0;
code_r0x0001004ad9b4:
      param_3 = (char *)0x0;
      pbVar16 = (byte *)0x8000000000000001;
code_r0x0001004ad9bc:
      pbVar19 = pbStack_2a8;
      pbVar24 = unaff_x22;
      pbVar25 = unaff_x24;
code_r0x0001004ad9c0:
      iVar22 = (int)unaff_x20;
      uVar13 = (uint)unaff_x21;
      uVar2 = uVar13;
      iVar1 = iVar22;
      unaff_x22 = pbVar24;
      if (pbVar19 == pbVar16) goto LAB_1004adcec;
    }
    goto joined_r0x0001004adf60;
  case 0x16:
    goto code_r0x0001004ad964;
  case 0x17:
    goto code_r0x0001004ad974;
  case 0x18:
  case 0xa3:
    goto code_r0x0001004ad93c;
  case 0x19:
    goto code_r0x0001004ad954;
  case 0x1a:
  case 0x42:
code_r0x0001004ad900:
    pbStack_130 = pbStack_2c8;
    unaff_x25 = pbStack_2c8;
    pbStack_138 = unaff_x24;
  case 0x22:
    pbVar16 = pbStack_f8;
code_r0x0001004ad90c:
    pbVar19 = (byte *)0x1d;
code_r0x0001004ad910:
    pbVar20 = pbStack_2c0;
    unaff_x22 = pbStack_2b8;
code_r0x0001004ad914:
    *(byte **)pbVar20 = pbVar19;
    *(byte **)(pbVar20 + 8) = pbVar16;
    unaff_x20 = (byte *)0x1;
code_r0x0001004ad91c:
    unaff_x21 = (byte *)0x1;
code_r0x0001004ad920:
    unaff_x24 = &bStack_2a0;
    pbVar19 = pbStack_2a8;
    unaff_x23 = pbStack_2b0;
code_r0x0001004ad928:
    in_ZR = pbVar19 == (byte *)0x8000000000000001;
code_r0x0001004ad930:
    pbVar25 = unaff_x24;
    uVar2 = (uint)unaff_x21;
    iVar1 = (int)unaff_x20;
    if ((bool)in_ZR) {
code_r0x0001004ad934:
      iVar22 = (int)unaff_x20;
      uVar13 = (uint)unaff_x21;
      pbVar24 = unaff_x22;
    }
    else {
joined_r0x0001004adf60:
      iVar22 = iVar1;
      uVar13 = uVar2;
      pbVar24 = unaff_x22;
      if (pbVar19 != (byte *)0x8000000000000000) {
        if (pbVar19 != (byte *)0x0) {
          _free(unaff_x25);
        }
        if (pbStack_120 != (byte *)0x0) {
          _free(lStack_118);
        }
      }
    }
LAB_1004adcec:
    if (((ulong)param_3 & 0x7fffffffffffffff) == 0) {
      iVar1 = 0;
      if (unaff_x23 != (byte *)0x8000000000000001) {
        iVar1 = iVar22;
      }
    }
    else {
      _free(pbStack_2d8);
      iVar1 = 0;
      if (unaff_x23 != (byte *)0x8000000000000001) {
        iVar1 = iVar22;
      }
    }
    if ((iVar1 == 1) && (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0)) {
      _free(pbStack_2e0);
    }
    uVar2 = 0;
    if (((ulong)pbVar24 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar13;
    }
    if ((uVar2 & 1) != 0) {
      _free(pbStack_2d0);
    }
    FUN_100d34830(pbVar25 + 0x20);
    if (bStack_2a0 == 0x16) {
      return;
    }
    FUN_100e077ec(&bStack_2a0);
    return;
  case 0x1b:
  case 0x54:
    goto code_r0x0001004ad984;
  case 0x1c:
    goto code_r0x0001004ad99c;
  case 0x1d:
    goto code_r0x0001004ad95c;
  case 0x1e:
  case 0x86:
    goto code_r0x0001004ad9b4;
  case 0x1f:
  case 0xbf:
    goto code_r0x0001004ad930;
  case 0x20:
    goto code_r0x0001004ad9a4;
  case 0x21:
  case 0x44:
    goto code_r0x0001004ad8d8;
  case 0x23:
    goto code_r0x0001004ad98c;
  case 0x24:
    goto code_r0x0001004ad8b0;
  case 0x25:
  case 0x3e:
  case 0x6a:
    goto code_r0x0001004ad944;
  case 0x26:
    goto code_r0x0001004ad8a8;
  case 0x28:
  case 0x91:
    goto code_r0x0001004ada04;
  case 0x29:
    goto code_r0x0001004ad4d4;
  case 0x2a:
    goto code_r0x0001004ad518;
  case 0x2c:
  case 0x4e:
  case 0x58:
  case 0x6f:
    goto code_r0x0001004ad8a4;
  case 0x2d:
  case 0x59:
  case 0x73:
  case 0xaa:
    goto code_r0x0001004ad8b4;
  case 0x2e:
  case 0x5a:
    goto code_r0x0001004ad87c;
  case 0x2f:
  case 0x5b:
  case 0x6e:
  case 0xc0:
    goto code_r0x0001004ad894;
  case 0x30:
  case 0x5c:
    goto code_r0x0001004ad840;
  case 0x31:
  case 0x5d:
  case 0xbb:
    goto code_r0x0001004ad8c4;
  case 0x32:
  case 0x5e:
    goto code_r0x0001004ad8dc;
  case 0x33:
  case 0x46:
  case 0x5f:
  case 0xbe:
    goto code_r0x0001004ad89c;
  case 0x34:
  case 0x60:
  case 0xbc:
    goto code_r0x0001004ad8f4;
  case 0x35:
  case 0x61:
    goto code_r0x0001004ad870;
  case 0x36:
  case 0x62:
  case 0x76:
  case 0xa5:
    goto LAB_1004ad8e4;
  case 0x37:
  case 99:
    goto code_r0x0001004ad818;
  case 0x38:
  case 100:
    goto code_r0x0001004ad848;
  case 0x39:
  case 0x4b:
  case 0x65:
  case 0x74:
    goto FUN_1004ad8cc;
  case 0x3a:
  case 0x66:
    goto code_r0x0001004ad7f0;
  case 0x3b:
  case 0x67:
  case 0x71:
    goto code_r0x0001004ad884;
  case 0x3c:
  case 0x68:
    goto code_r0x0001004ad7e8;
  case 0x3f:
  case 0x6b:
  case 0xdd:
    goto code_r0x0001004ad4ac;
  case 0x40:
  case 0x6c:
    goto code_r0x0001004ad4f0;
  case 0x43:
    goto code_r0x0001004ad910;
  case 0x45:
    goto code_r0x0001004ad8f0;
  case 0x47:
  case 0x94:
    goto code_r0x0001004ad920;
  case 0x48:
    goto code_r0x0001004ad938;
  case 0x49:
    goto code_r0x0001004ad8f8;
  case 0x4a:
  case 0x8f:
  case 0xa9:
  case 0xb0:
    goto code_r0x0001004ad950;
  case 0x4c:
  case 0xb3:
    goto code_r0x0001004ad940;
  case 0x4d:
  case 0x7d:
    goto code_r0x0001004ad874;
  case 0x4f:
  case 0x92:
  case 0xb2:
    goto code_r0x0001004ad928;
  case 0x50:
    goto code_r0x0001004ad84c;
  case 0x51:
    goto code_r0x0001004ad8e0;
  case 0x52:
    goto code_r0x0001004ad844;
  case 0x55:
    goto code_r0x0001004ad4dc;
  case 0x56:
    goto code_r0x0001004ad520;
  case 0x70:
    goto code_r0x0001004ad86c;
  case 0x72:
    goto code_r0x0001004ad830;
  case 0x75:
    goto code_r0x0001004ad88c;
  case 0x77:
  case 0xf2:
    goto code_r0x0001004ad860;
  case 0x78:
    goto code_r0x0001004ad8d4;
  case 0x79:
code_r0x0001004ad808:
    param_3 = (char *)0x0;
  case 0xcb:
    pbStack_2a8 = (byte *)0x8000000000000001;
code_r0x0001004ad814:
    unaff_x23 = (byte *)0x8000000000000001;
code_r0x0001004ad818:
    unaff_x20 = pbStack_2c0;
    goto code_r0x0001004ad8a8;
  case 0x7a:
    goto code_r0x0001004ad838;
  case 0x7b:
  case 0xa8:
    goto code_r0x0001004ad8bc;
  case 0x7c:
    goto code_r0x0001004ad7e0;
  case 0x7e:
    goto code_r0x0001004ad7d8;
  case 0x80:
    goto code_r0x0001004ad934;
  case 0x81:
    goto code_r0x0001004ad4a0;
  case 0x82:
    goto code_r0x0001004ad4e4;
  case 0x84:
    goto code_r0x0001004ad9dc;
  case 0x87:
    goto code_r0x0001004ad9cc;
  case 0x88:
  case 0xbd:
    goto FUN_1004ad978;
  case 0x89:
    goto code_r0x0001004ad9fc;
  case 0x8b:
    goto code_r0x0001004ad9d4;
  case 0x8c:
    goto code_r0x0001004ada2c;
  case 0x8d:
  case 0xa0:
    goto code_r0x0001004ad9a8;
  case 0x8e:
    goto code_r0x0001004ada1c;
  case 0x90:
  case 0x9b:
    goto code_r0x0001004ad980;
  case 0x93:
    goto code_r0x0001004ad9bc;
  case 0x97:
    goto code_r0x0001004ad52c;
  case 0x98:
    goto code_r0x0001004ad570;
  case 0x9a:
  case 0xb5:
    goto code_r0x0001004ad970;
  case 0x9c:
  case 0xb7:
    goto code_r0x0001004ad948;
  case 0x9d:
  case 0xb1:
    goto code_r0x0001004ad960;
  case 0x9e:
    goto code_r0x0001004ad90c;
  case 0x9f:
  case 0xba:
    goto code_r0x0001004ad990;
  case 0xa1:
    goto code_r0x0001004ad968;
  case 0xa2:
    goto code_r0x0001004ad9c0;
  case 0xa4:
    goto LAB_1004ad9b0;
  case 0xa6:
    goto code_r0x0001004ad914;
  case 0xa7:
    goto code_r0x0001004ad998;
  case 0xad:
  case 0xf4:
    goto code_r0x0001004ad4d0;
  case 0xae:
  case 0xed:
    goto code_r0x0001004ad514;
  case 0xb4:
    goto code_r0x0001004ad8ec;
  case 0xb6:
    goto code_r0x0001004ad988;
  case 0xb8:
    goto LAB_1004ad9a0;
  case 0xb9:
    goto code_r0x0001004ad91c;
  case 0xc2:
    goto code_r0x0001004ad9f0;
  case 0xc3:
    goto code_r0x0001004ad4e0;
  case 0xc4:
    goto code_r0x0001004ad524;
  case 0xc6:
    goto code_r0x0001004ad7ec;
  case 199:
    goto code_r0x0001004ad7fc;
  case 200:
    goto code_r0x0001004ad7c4;
  case 0xc9:
    goto code_r0x0001004ad7dc;
  case 0xca:
    goto code_r0x0001004ad788;
  case 0xcd:
    goto code_r0x0001004ad7e4;
  case 0xce:
    goto code_r0x0001004ad83c;
  case 0xcf:
    goto code_r0x0001004ad7b8;
  case 0xd0:
    goto code_r0x0001004ad82c;
  case 0xd1:
    goto code_r0x0001004ad760;
  case 0xd2:
  case 0xe6:
    goto code_r0x0001004ad790;
  case 0xd3:
    goto code_r0x0001004ad814;
  case 0xd4:
    goto code_r0x0001004ad738;
  case 0xd5:
    goto code_r0x0001004ad7cc;
  case 0xd6:
    goto code_r0x0001004ad730;
  case 0xd8:
    goto code_r0x0001004ad888;
  case 0xd9:
    goto code_r0x0001004ad4b4;
  case 0xda:
    goto code_r0x0001004ad4f8;
  case 0xde:
    goto code_r0x0001004ad31c;
  case 0xdf:
    goto code_r0x0001004ad3e8;
  case 0xe0:
    goto code_r0x0001004ad20c;
  case 0xe1:
    goto code_r0x0001004ad5c8;
  case 0xe2:
    goto code_r0x0001004ad6c8;
  case 0xe3:
    goto code_r0x0001004ad450;
  case 0xe4:
    goto code_r0x0001004ad7f8;
  case 0xe5:
  case 0xfc:
    goto code_r0x0001004ad2c0;
  case 0xe7:
code_r0x0001004ad1a4:
    bStack_2a0 = bVar14;
    lStack_118 = 1;
    FUN_1004b62d4(&pbStack_c0,&bStack_2a0);
  case 0xfe:
    lVar11 = lStack_b0;
    unaff_x20 = pbStack_b8;
    unaff_x23 = pbStack_c0;
    if (pbStack_c0 == (byte *)0x8000000000000000) goto code_r0x0001004ad840;
    if (unaff_x26 == (long *)0x1) {
code_r0x0001004ad1ec:
      pbStack_b8 = (byte *)thunk_FUN_1087e422c(1,&UNK_10b22ecd8,&UNK_10b20a590);
code_r0x0001004ad208:
      pbVar16 = (byte *)0x1d;
      unaff_x21 = pbStack_b8;
code_r0x0001004ad20c:
      *(byte **)param_3 = pbVar16;
      *(byte **)(param_3 + 8) = unaff_x21;
    }
    else {
      pbStack_130 = unaff_x22 + 0x40;
      if (unaff_x22[0x20] == 0x16) goto code_r0x0001004ad1ec;
      uStack_297 = (undefined7)*(undefined8 *)(unaff_x22 + 0x29);
      uStack_29f = (undefined7)*(undefined8 *)(unaff_x22 + 0x21);
      uStack_298 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 0x21) >> 0x38);
      pbStack_288 = *(byte **)(unaff_x22 + 0x38);
      uStack_290 = (undefined1)*(long *)(unaff_x22 + 0x30);
      uStack_28f = (undefined7)((ulong)*(long *)(unaff_x22 + 0x30) >> 8);
      lStack_118 = 2;
      bStack_2a0 = unaff_x22[0x20];
      FUN_1004b60cc(&pbStack_c0,&bStack_2a0);
      lVar29 = lStack_b0;
      pbVar16 = pbStack_b8;
      pbVar19 = pbStack_c0;
      if (pbStack_c0 == (byte *)0x8000000000000001) goto code_r0x0001004ad208;
      if (unaff_x26 == (long *)0x2) {
code_r0x0001004adc04:
        pbStack_b8 = (byte *)thunk_FUN_1087e422c(2,&UNK_10b22ecd8,&UNK_10b20a590);
code_r0x0001004adc20:
        param_3[0] = 0x1d;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        *(byte **)(param_3 + 8) = pbStack_b8;
      }
      else {
        pbStack_130 = unaff_x22 + 0x60;
        if (unaff_x22[0x40] == 0x16) goto code_r0x0001004adc04;
        uStack_297 = (undefined7)*(undefined8 *)(unaff_x22 + 0x49);
        uStack_29f = (undefined7)*(undefined8 *)(unaff_x22 + 0x41);
        uStack_298 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 0x41) >> 0x38);
        pbStack_288 = *(byte **)(unaff_x22 + 0x58);
        uStack_290 = (undefined1)*(long *)(unaff_x22 + 0x50);
        uStack_28f = (undefined7)((ulong)*(long *)(unaff_x22 + 0x50) >> 8);
        lStack_118 = 3;
        bStack_2a0 = unaff_x22[0x40];
        FUN_1004b62d4(&pbStack_c0,&bStack_2a0);
        lVar31 = lStack_b0;
        pbVar20 = pbStack_b8;
        pbVar25 = pbStack_c0;
        if (pbStack_c0 == (byte *)0x8000000000000000) goto code_r0x0001004adc20;
        FUN_100f28ba8(&bStack_2a0,&pbStack_138);
        lVar4 = CONCAT71(uStack_29f,bStack_2a0);
        lVar12 = CONCAT71(uStack_297,uStack_298);
        if (lVar4 != -0x7ffffffffffffffe) {
          uStack_100 = (byte *)CONCAT71(uStack_28f,uStack_290);
          pbStack_f8 = pbStack_288;
          pbStack_e8 = pbStack_278;
          pbStack_f0 = pbStack_280;
          lStack_e0 = lStack_270;
          if (lVar4 != -0x7fffffffffffffff) {
            *(byte **)(param_3 + 0x68) = pbStack_288;
            *(byte **)(param_3 + 0x60) = uStack_100;
            *(byte **)(param_3 + 0x78) = pbStack_278;
            *(byte **)(param_3 + 0x70) = pbStack_280;
            *(long *)(param_3 + 0x80) = lStack_270;
            param_3[0] = 0xd;
            param_3[1] = 0;
            param_3[2] = 0;
            param_3[3] = 0;
            param_3[4] = 0;
            param_3[5] = 0;
            param_3[6] = 0;
            param_3[7] = 0;
            *(byte **)(param_3 + 8) = unaff_x23;
            *(byte **)(param_3 + 0x10) = unaff_x20;
            *(long *)(param_3 + 0x18) = lVar11;
            *(byte **)(param_3 + 0x20) = pbVar25;
            *(byte **)(param_3 + 0x28) = pbVar20;
            *(long *)(param_3 + 0x30) = lVar31;
            *(byte **)(param_3 + 0x38) = pbVar19;
            *(byte **)(param_3 + 0x40) = pbVar16;
            *(long *)(param_3 + 0x48) = lVar29;
            *(long *)(param_3 + 0x50) = lVar4;
            *(long *)(param_3 + 0x58) = lVar12;
            _memcpy(&lStack_250,param_3,0x118);
            lVar11 = FUN_100fbc738(&pbStack_138);
            if (lVar11 == 0) {
              return;
            }
            param_3[0] = 0x1d;
            param_3[1] = 0;
            param_3[2] = 0;
            param_3[3] = 0;
            param_3[4] = 0;
            param_3[5] = 0;
            param_3[6] = 0;
            param_3[7] = 0;
            *(long *)(param_3 + 8) = lVar11;
code_r0x0001004adba0:
            FUN_100e35e0c(&lStack_250);
            return;
          }
          lVar12 = thunk_FUN_1087e422c(3,&UNK_10b22ecd8,&UNK_10b20a590);
        }
        param_3[0] = 0x1d;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        *(long *)(param_3 + 8) = lVar12;
        if (pbVar25 != (byte *)0x0) {
          _free(pbVar20);
        }
      }
      if (((ulong)pbVar19 & 0x7fffffffffffffff) != 0) {
        _free(pbVar16);
      }
    }
    unaff_x21 = pbStack_130;
    unaff_x24 = pbStack_120;
    if (unaff_x23 != (byte *)0x0) {
      _free(unaff_x20);
      unaff_x21 = pbStack_130;
      unaff_x24 = pbStack_120;
    }
    goto code_r0x0001004ad848;
  case 0xe8:
    goto code_r0x0001004ad258;
  case 0xe9:
    goto code_r0x0001004ad66c;
  case 0xeb:
    goto code_r0x0001004ad38c;
  case 0xee:
    goto code_r0x0001004ad724;
  case 0xef:
    goto code_r0x0001004ad890;
  case 0xf0:
    goto code_r0x0001004ad580;
  case 0xf1:
    goto code_r0x0001004ad624;
  case 0xf5:
    goto code_r0x0001004ad328;
  case 0xf6:
    goto code_r0x0001004ad400;
  case 0xf7:
    goto code_r0x0001004ad228;
  case 0xf8:
    goto code_r0x0001004ad57c;
  case 0xf9:
    goto code_r0x0001004ad5f4;
  case 0xfa:
    goto code_r0x0001004ad470;
  case 0xfb:
    goto code_r0x0001004ad6bc;
  case 0xfd:
    goto code_r0x0001004ad654;
  case 0xff:
    goto code_r0x0001004ad290;
  }
  lStack_250 = CONCAT71(lStack_250._1_7_,uVar15);
code_r0x0001004adafc:
  lVar11 = FUN_107c05dcc(&lStack_250,abStack_69,&UNK_10b21aab0);
  param_3[0] = 0x1d;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(long *)(param_3 + 8) = lVar11;
  return;
}

