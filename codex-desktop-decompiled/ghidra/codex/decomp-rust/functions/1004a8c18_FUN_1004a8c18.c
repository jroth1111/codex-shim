
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a8c18(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  ulong *******pppppppuVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar21;
  uint uVar22;
  byte bVar23;
  ulong *******pppppppuVar24;
  ulong *******pppppppuVar25;
  undefined8 uVar26;
  uint uVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  ulong ******ppppppuVar30;
  ulong ******ppppppuVar31;
  ulong *******unaff_x20;
  ulong *******pppppppuVar32;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar33;
  ulong *******unaff_x25;
  ulong *******pppppppuVar34;
  ulong *******unaff_x26;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar35;
  undefined8 unaff_x30;
  ulong *******pppppppuVar36;
  ulong *******pppppppuVar37;
  ulong *******pppppppuVar38;
  ulong *******pppppppuVar39;
  byte abStack_360 [88];
  ulong *******pppppppuStack_308;
  ulong *******pppppppuStack_300;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2f0;
  ulong *******pppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong *******pppppppuStack_2a0;
  ulong ******ppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong ******ppppppuStack_278;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong *******pppppppuStack_78;
  byte *pbVar9;
  byte *pbVar14;
  byte *pbVar20;
  
  pppppppuVar39 = param_2._8_8_;
  pppppppuVar38 = param_2._0_8_;
  pppppppuVar37 = param_1._8_8_;
  pppppppuVar36 = param_1._0_8_;
  puVar35 = &stack0xfffffffffffffff0;
  pbVar13 = abStack_360 + 0x50;
  pbVar8 = abStack_360 + 0x50;
  pbVar19 = abStack_360 + 0x50;
  ppppppuVar31 = (ulong ******)&uStack_90;
  bVar23 = *(byte *)param_4;
  pppppppuVar24 = (ulong *******)(ulong)bVar23;
  pppppppuVar28 = (ulong *******)&UNK_108c9a22c;
  ppppppuVar30 = (ulong ******)(ulong)*(ushort *)(&UNK_108c9a22c + (long)pppppppuVar24 * 2);
  pppppppuVar29 = (ulong *******)(&UNK_1004a8c5c + (long)ppppppuVar30 * 4);
  pbVar15 = abStack_360 + 0x50;
  pbVar16 = abStack_360 + 0x50;
  pbVar17 = abStack_360 + 0x50;
  pbVar18 = abStack_360 + 0x50;
  pbVar20 = abStack_360 + 0x50;
  pbVar10 = abStack_360 + 0x50;
  pbVar11 = abStack_360 + 0x50;
  pbVar12 = abStack_360 + 0x50;
  pbVar14 = abStack_360 + 0x50;
  pbVar4 = abStack_360 + 0x50;
  pbVar5 = abStack_360 + 0x50;
  pbVar6 = abStack_360 + 0x50;
  pbVar7 = abStack_360 + 0x50;
  pbVar9 = abStack_360 + 0x50;
  pppppppuVar21 = (ulong *******)param_3;
  pppppppuVar25 = pppppppuVar24;
  pppppppuVar2 = unaff_x22;
  pppppppuVar34 = unaff_x25;
  pppppppuVar32 = unaff_x26;
  switch(bVar23) {
  case 0:
  case 0xa0:
  case 0xcc:
    bVar23 = *(byte *)((long)param_4 + 1);
  case 0x48:
  case 0xbf:
    ppppppuStack_290 = (ulong ******)((ulong)CONCAT61(ppppppuStack_290._2_6_,bVar23) << 8);
code_r0x0001004a94b0:
    ppppppuStack_290 = (ulong ******)((ulong)ppppppuStack_290 & 0xffffffffffffff00);
code_r0x0001004a94b4:
    goto code_r0x0001004a9508;
  case 1:
    pppppppuVar24 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
    goto code_r0x0001004a94bc;
  case 2:
  case 0x9b:
  case 199:
  case 0xe1:
    pppppppuVar24 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x19:
  case 0x43:
    goto code_r0x0001004a94bc;
  case 3:
  case 0xa7:
  case 0xb9:
  case 0xd3:
  case 0xe2:
    pppppppuVar24 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x4f:
  case 0x68:
    goto code_r0x0001004a94bc;
  case 4:
    pppppppuVar24 = (ulong *******)param_4[1];
  case 0x9c:
  case 200:
code_r0x0001004a94bc:
    pppppppuStack_288 = pppppppuVar24;
code_r0x0001004a94c0:
    bVar23 = 1;
code_r0x0001004a94c4:
    break;
  case 5:
    pppppppuVar24 = (ulong *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x1c:
  case 99:
  case 0x88:
  case 0xb0:
  case 100:
  case 0x8d:
code_r0x0001004a94fc:
    pppppppuStack_288 = pppppppuVar24;
code_r0x0001004a9500:
    bVar23 = 2;
    break;
  case 6:
    pppppppuVar24 = (ulong *******)(long)*(short *)((long)param_4 + 2);
  case 0x1e:
    goto code_r0x0001004a94fc;
  case 7:
  case 0xe6:
    pppppppuVar24 = (ulong *******)(long)*(int *)((long)param_4 + 4);
  case 0x17:
  case 0x66:
  case 0x8f:
  case 0xb2:
    goto code_r0x0001004a94fc;
  case 8:
    pppppppuVar24 = (ulong *******)param_4[1];
    goto code_r0x0001004a94fc;
  case 9:
  case 0x25:
  case 0x42:
  case 0x94:
    pppppppuVar36 = (ulong *******)(double)*(float *)((long)param_4 + 4);
  case 0x92:
  case 0xb5:
code_r0x0001004a94ec:
    bVar23 = 3;
    pppppppuStack_288 = pppppppuVar36;
code_r0x0001004a94f4:
    break;
  case 10:
    pppppppuVar36 = (ulong *******)param_4[1];
    goto code_r0x0001004a94ec;
  case 0xb:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
    pbVar10 = &stack0xffffffffffffffa0;
    puVar35 = unaff_x29;
  case 0xe5:
    unaff_x20 = *(ulong ********)(pbVar10 + 0x40);
    ppppppuVar31 = *(ulong *******)(pbVar10 + 0x48);
    pbVar11 = pbVar10;
code_r0x0001004a9430:
    pbVar12 = pbVar11;
code_r0x0001004a9438:
    pbVar14 = pbVar12;
code_r0x0001004a943c:
    pbVar13 = pbVar14 + 0x60;
code_r0x0001004a9440:
    *(ulong ********)(pbVar13 + -0x20) = unaff_x20;
    *(ulong *******)(pbVar13 + -0x18) = ppppppuVar31;
    *(undefined1 **)(pbVar13 + -0x10) = puVar35;
    *(undefined8 *)(pbVar13 + -8) = unaff_x30;
    *(undefined4 *)(pbVar13 + -0x44) = 0;
    uVar22 = (uint)param_4;
    if (uVar22 < 0x80) {
      pbVar13[-0x44] = (byte)param_4;
      uVar26 = 1;
    }
    else {
      bVar23 = (byte)param_4 & 0x3f | 0x80;
      if (uVar22 < 0x800) {
        pbVar13[-0x44] = (byte)(uVar22 >> 6) | 0xc0;
        pbVar13[-0x43] = bVar23;
        uVar26 = 2;
      }
      else {
        bVar1 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
        if (uVar22 < 0x10000) {
          pbVar13[-0x44] = (byte)(uVar22 >> 0xc) | 0xe0;
          pbVar13[-0x43] = bVar1;
          pbVar13[-0x42] = bVar23;
          uVar26 = 3;
        }
        else {
          pbVar13[-0x44] = (byte)(uVar22 >> 0x12) | 0xf0;
          pbVar13[-0x43] = (byte)(uVar22 >> 0xc) & 0x3f | 0x80;
          pbVar13[-0x42] = bVar1;
          pbVar13[-0x41] = bVar23;
          uVar26 = 4;
        }
      }
    }
    *(byte **)(pbVar13 + -0x38) = pbVar13 + -0x44;
    *(undefined8 *)(pbVar13 + -0x30) = uVar26;
    pbVar13[-0x40] = 5;
    ppppppuVar31 = (ulong ******)func_0x000108a4a50c(pbVar13 + -0x40,pbVar13 + -0x21,&UNK_10b21c2b0)
    ;
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar31;
    return;
  case 0xc:
  case 0x44:
    param_4 = param_4 + 1;
  case 0xa9:
  case 0xd5:
  case 0xdf:
code_r0x0001004a9454:
    pbVar15 = &stack0xffffffffffffffa0;
code_r0x0001004a9458:
    puVar35 = *(undefined1 **)(pbVar15 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar15 + 0x58);
    unaff_x20 = *(ulong ********)(pbVar15 + 0x40);
    ppppppuVar31 = *(ulong *******)(pbVar15 + 0x48);
    pbVar16 = pbVar15;
code_r0x0001004a9460:
    unaff_x22 = *(ulong ********)(pbVar16 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar16 + 0x38);
    pbVar17 = pbVar16;
code_r0x0001004a9464:
    pbVar18 = pbVar17;
code_r0x0001004a9468:
    pbVar20 = pbVar18;
code_r0x0001004a946c:
    pbVar19 = pbVar20 + 0x60;
code_r0x0001004a9470:
    *(ulong ********)(pbVar19 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar19 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar19 + -0x20) = unaff_x20;
    *(ulong *******)(pbVar19 + -0x18) = ppppppuVar31;
    *(undefined1 **)(pbVar19 + -0x10) = puVar35;
    *(undefined8 *)(pbVar19 + -8) = unaff_x30;
    ppppppuVar31 = param_4[1];
    ppppppuVar30 = param_4[2];
    *(ulong *******)(pbVar19 + -0x48) = ppppppuVar31;
    *(ulong *******)(pbVar19 + -0x40) = ppppppuVar30;
    pbVar19[-0x50] = 5;
    ppppppuVar30 = (ulong ******)func_0x000108a4a50c(pbVar19 + -0x50,pbVar19 + -0x31,&UNK_10b21c2b0)
    ;
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar30;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar31);
    }
    return;
  case 0xd:
    pppppppuVar24 = (ulong *******)param_4[1];
    pppppppuVar28 = (ulong *******)param_4[2];
  case 0x20:
  case 0x90:
    bVar23 = 5;
    pppppppuStack_288 = pppppppuVar24;
    pppppppuStack_280 = pppppppuVar28;
code_r0x0001004a94dc:
    break;
  case 0xe:
    param_4 = param_4 + 1;
  case 0xe0:
    pbVar4 = &stack0xffffffffffffffa0;
    puVar35 = unaff_x29;
code_r0x0001004a9404:
    unaff_x20 = *(ulong ********)(pbVar4 + 0x40);
    ppppppuVar31 = *(ulong *******)(pbVar4 + 0x48);
    pbVar5 = pbVar4;
code_r0x0001004a9408:
    unaff_x22 = *(ulong ********)(pbVar5 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar5 + 0x38);
    pbVar6 = pbVar5;
code_r0x0001004a940c:
    pbVar7 = pbVar6;
code_r0x0001004a9410:
    pbVar9 = pbVar7;
code_r0x0001004a9414:
    pbVar8 = pbVar9 + 0x60;
code_r0x0001004a9418:
    *(ulong ********)(pbVar8 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar8 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar8 + -0x20) = unaff_x20;
    *(ulong *******)(pbVar8 + -0x18) = ppppppuVar31;
    *(undefined1 **)(pbVar8 + -0x10) = puVar35;
    *(undefined8 *)(pbVar8 + -8) = unaff_x30;
    ppppppuVar31 = param_4[1];
    ppppppuVar30 = param_4[2];
    *(ulong *******)(pbVar8 + -0x48) = ppppppuVar31;
    *(ulong *******)(pbVar8 + -0x40) = ppppppuVar30;
    pbVar8[-0x50] = 6;
    ppppppuVar30 = (ulong ******)func_0x000108a4a50c(pbVar8 + -0x50,pbVar8 + -0x31,&UNK_10b21c2b0);
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar30;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar31);
    }
    return;
  case 0xf:
  case 0xe9:
    pppppppuVar24 = (ulong *******)param_4[1];
    pppppppuVar28 = (ulong *******)param_4[2];
  case 0x1d:
    pppppppuStack_288 = pppppppuVar24;
    pppppppuStack_280 = pppppppuVar28;
code_r0x0001004a9490:
    bVar23 = 6;
code_r0x0001004a9494:
    break;
  case 0x10:
    bVar23 = 8;
    break;
  default:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_288 = (ulong *******)unaff_x20[1];
    ppppppuStack_290 = *unaff_x20;
  case 0x37:
    pppppppuVar21 = unaff_x20;
    ppppppuStack_278 = pppppppuVar21[3];
    pppppppuStack_280 = (ulong *******)pppppppuVar21[2];
    func_0x000107c04954(param_3,&ppppppuStack_290);
code_r0x0001004a90b0:
code_r0x0001004a90bc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar21);
    return;
  case 0x12:
    bVar23 = 7;
  case 0x5a:
  case 0x84:
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_288 = (ulong *******)unaff_x20[1];
    ppppppuStack_290 = *unaff_x20;
    ppppppuStack_278 = unaff_x20[3];
    pppppppuStack_280 = (ulong *******)unaff_x20[2];
  case 0x97:
    param_4 = &ppppppuStack_290;
code_r0x0001004a90a4:
code_r0x0001004a90a8:
    pppppppuVar21 = unaff_x20;
    func_0x000107c05374(param_3,param_4);
    goto code_r0x0001004a90b0;
  case 0x14:
    unaff_x23 = (ulong *******)param_4[1];
    unaff_x20 = (ulong *******)param_4[2];
    unaff_x26 = (ulong *******)param_4[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2e0 = unaff_x20;
    pppppppuStack_2d8 = unaff_x20;
    pppppppuStack_2d0 = unaff_x23;
    pppppppuStack_2c8 = unaff_x24;
  case 0x98:
    pppppppuStack_2c0 = (ulong *******)0x0;
code_r0x0001004a90e8:
    unaff_x21 = unaff_x20;
code_r0x0001004a90ec:
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x0001004a9104:
      pppppppuStack_a8 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f5a8,&UNK_10b20a590);
code_r0x0001004a9120:
      pppppppuVar24 = (ulong *******)0x6e;
      unaff_x22 = pppppppuStack_a8;
code_r0x0001004a9124:
      *(ulong *******)param_3 = (ulong ******)((ulong)pppppppuVar24 | 0x8000000000000000);
      *(ulong ********)((long)param_3 + 8) = unaff_x22;
code_r0x0001004a912c:
      pppppppuVar24 = (ulong *******)((long)unaff_x24 - (long)unaff_x21);
code_r0x0001004a9130:
      lVar33 = ((ulong)pppppppuVar24 >> 5) + 1;
      while (lVar33 = lVar33 + -1, lVar33 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2d8 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x0001004a9104;
      pppppppuVar37 = *(ulong ********)((long)unaff_x20 + 9);
      pppppppuVar36 = *(ulong ********)((long)unaff_x20 + 1);
      bVar23 = *(byte *)unaff_x20;
code_r0x0001004a9174:
      uStack_90._0_1_ = bVar23;
      uStack_87 = SUB87(pppppppuVar37,0);
      uStack_90._1_1_ = (char)pppppppuVar36;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar36 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar36 >> 0x38);
      pppppppuStack_78 = (ulong *******)unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2c0 = (ulong *******)0x1;
      func_0x00010135ba2c(&pppppppuStack_b0,&uStack_90);
      if (pppppppuStack_b0 == (ulong *******)0x8000000000000001) goto code_r0x0001004a9120;
      if (unaff_x26 == (ulong *******)0x1) {
code_r0x0001004a91c8:
        pppppppuVar21 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22f5a8,&UNK_10b20a590);
code_r0x0001004a91e0:
        *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
        *(ulong ********)((long)param_3 + 8) = pppppppuVar21;
        if (((ulong)pppppppuStack_b0 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_a8);
        }
        goto code_r0x0001004a912c;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar23 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2d8 = unaff_x21;
      if (bVar23 == 0x16) goto code_r0x0001004a91c8;
      pppppppuVar37 = *(ulong ********)((long)unaff_x20 + 0x29);
      pppppppuVar36 = *(ulong ********)((long)unaff_x20 + 0x21);
      unaff_x22 = pppppppuStack_a8;
      unaff_x25 = pppppppuStack_b0;
      unaff_x26 = pppppppuStack_a0;
code_r0x0001004a9538:
      uStack_87 = SUB87(pppppppuVar37,0);
      uStack_90._1_1_ = (char)pppppppuVar36;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar36 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar36 >> 0x38);
      pppppppuVar37 = (ulong *******)unaff_x20[7];
      pppppppuVar36 = (ulong *******)unaff_x20[6];
code_r0x0001004a9540:
      uStack_80 = SUB81(pppppppuVar36,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar36 >> 8);
      pppppppuStack_78 = pppppppuVar37;
code_r0x0001004a9544:
      pppppppuVar28 = (ulong *******)0x2;
code_r0x0001004a9548:
      pppppppuStack_2c0 = pppppppuVar28;
code_r0x0001004a954c:
      uStack_90._0_1_ = bVar23;
code_r0x0001004a9550:
      pppppppuVar21 = (ulong *******)&pppppppuStack_b0;
      param_4 = (ulong *******)&uStack_90;
code_r0x0001004a9558:
      func_0x0001012cfabc(pppppppuVar21,param_4);
      in_ZR = pppppppuStack_b0 == (ulong *******)0x8000000000000000;
      pppppppuVar21 = pppppppuStack_a8;
      pppppppuVar24 = pppppppuStack_b0;
      pppppppuVar2 = unaff_x22;
      pppppppuVar34 = unaff_x25;
code_r0x0001004a9568:
      pppppppuStack_b0 = pppppppuVar34;
      pppppppuStack_a8 = pppppppuVar2;
      if ((bool)in_ZR) goto code_r0x0001004a91e0;
      ppppppuVar31 = (ulong ******)0x6e;
      unaff_x22 = pppppppuStack_a8;
      unaff_x25 = pppppppuStack_b0;
code_r0x0001004a9570:
      ppppppuVar31 = (ulong ******)((ulong)ppppppuVar31 & 0xffffffffffff | 0x8000000000000000);
code_r0x0001004a9574:
      pppppppuVar36 = pppppppuStack_a0;
      pppppppuVar37 = pppppppuStack_98;
code_r0x0001004a9578:
      *(ulong ********)((long)param_3 + 0x20) = pppppppuVar37;
      *(ulong ********)((long)param_3 + 0x18) = pppppppuVar36;
      pppppppuVar28 = (ulong *******)((long)ppppppuVar31 + -0x52);
code_r0x0001004a9580:
      *(ulong ********)param_3 = pppppppuVar28;
      *(ulong ********)((long)param_3 + 8) = pppppppuVar24;
      *(ulong ********)((long)param_3 + 0x10) = pppppppuVar21;
      *(ulong ********)((long)param_3 + 0x28) = unaff_x25;
      *(ulong ********)((long)param_3 + 0x30) = unaff_x22;
      *(ulong ********)((long)param_3 + 0x38) = unaff_x26;
code_r0x0001004a9590:
      pppppppuVar21 = &ppppppuStack_290;
      param_4 = (ulong *******)param_3;
code_r0x0001004a9598:
      _memcpy(pppppppuVar21,param_4,0x1c0);
code_r0x0001004a95a0:
      pppppppuVar21 = (ulong *******)FUN_100fbc738(&pppppppuStack_2e0);
code_r0x0001004a95a8:
      if (pppppppuVar21 != (ulong *******)0x0) {
code_r0x0001004a95ac:
        *(ulong *******)param_3 = ppppppuVar31;
        *(ulong ********)((long)param_3 + 8) = pppppppuVar21;
code_r0x0001004a95b0:
        param_3 = (char *)&ppppppuStack_290;
code_r0x0001004a95b4:
        FUN_100e44f40(param_3);
code_r0x0001004a95b8:
      }
    }
    goto LAB_1004a9660;
  case 0x15:
  case 0x2b:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    pppppppuVar29 = (ulong *******)param_4[1];
    pppppppuVar24 = (ulong *******)param_4[2];
  case 0x30:
    ppppppuVar30 = param_4[3];
    pppppppuVar28 = (ulong *******)((long)ppppppuVar30 << 6);
code_r0x0001004a8c8c:
    unaff_x20 = (ulong *******)((long)pppppppuVar24 + (long)pppppppuVar28);
    unaff_x21 = (ulong *******)&pppppppuStack_2e0;
    pppppppuStack_2e0 = (ulong *******)CONCAT71(pppppppuStack_2e0._1_7_,0x16);
    pppppppuStack_2a0 = (ulong *******)0x0;
    pppppppuStack_2c0 = pppppppuVar24;
    pppppppuStack_2b8 = pppppppuVar24;
    pppppppuStack_2b0 = pppppppuVar29;
    pppppppuStack_2a8 = unaff_x20;
code_r0x0001004a8ca8:
    if (ppppppuVar30 == (ulong ******)0x0) {
      unaff_x24 = (ulong *******)0x8000000000000000;
code_r0x0001004a9168:
      pppppppuStack_d0 = unaff_x24;
code_r0x0001004a922c:
      pppppppuStack_b0 = (ulong *******)&UNK_108ca26b0;
      pppppppuStack_a8 = (ulong *******)0x2;
      uStack_90._0_1_ = (byte)&pppppppuStack_b0;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_b0 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x23 = (ulong *******)0x8000000000000001;
      ppppppuVar31 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      goto LAB_1004a9260;
    }
    unaff_x25 = (ulong *******)0x0;
    unaff_x22 = (ulong *******)((ulong)&uStack_90 | 1);
    unaff_x21 = (ulong *******)((ulong)&pppppppuStack_2e0 | 1);
    pppppppuStack_308 = (ulong *******)(((ulong)(pppppppuVar28 + -8) >> 6) + 1);
    pppppppuStack_300 = (ulong *******)param_3;
code_r0x0001004a8cd0:
    unaff_x26 = pppppppuVar24 + 8;
    unaff_x24 = (ulong *******)0x8000000000000000;
code_r0x0001004a8cd8:
    unaff_x23 = (ulong *******)0x8000000000000001;
    unaff_x28 = (ulong *******)0x8000000000000000;
    pppppppuVar32 = unaff_x26;
code_r0x0001004a8ce0:
    do {
      param_3 = (char *)(pppppppuVar32 + -8);
      bVar23 = *param_3;
      pppppppuVar28 = (ulong *******)(ulong)bVar23;
      pppppppuVar34 = unaff_x25;
      unaff_x26 = pppppppuVar32;
      if (bVar23 == 0x16) break;
      ppppppuVar31 = pppppppuVar32[-6];
      *(ulong *******)((long)unaff_x22 + 0x17) = pppppppuVar32[-5];
      *(ulong *******)((long)unaff_x22 + 0xf) = ppppppuVar31;
      uStack_90._0_1_ = bVar23;
code_r0x0001004a8d30:
      pppppppuVar37 = *(ulong ********)((long)param_3 + 9);
      pppppppuVar36 = *(ulong ********)((long)param_3 + 1);
code_r0x0001004a8d34:
      unaff_x22[1] = (ulong ******)pppppppuVar37;
      *unaff_x22 = (ulong ******)pppppppuVar36;
      pppppppuVar37 = *(ulong ********)((long)param_3 + 0x28);
      pppppppuVar36 = *(ulong ********)((long)param_3 + 0x20);
      pppppppuVar39 = *(ulong ********)((long)param_3 + 0x38);
      pppppppuVar38 = *(ulong ********)((long)param_3 + 0x30);
      pppppppuVar21 = (ulong *******)param_3;
code_r0x0001004a8d3c:
      pppppppuVar24 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      param_3 = (char *)CONCAT71(uStack_7f,uStack_80);
      uVar22 = (uint)pppppppuVar28;
      pppppppuStack_2e0 = pppppppuVar36;
      pppppppuStack_2d8 = pppppppuVar37;
      pppppppuStack_2d0 = pppppppuVar38;
      pppppppuStack_2c8 = pppppppuVar39;
      if (uVar22 < 0xd) {
        pppppppuVar29 = pppppppuStack_78;
        if (uVar22 == 1) {
code_r0x0001004a8e24:
          uVar27 = (uint)pppppppuVar28;
          if (uStack_90._1_1_ != '\x01') {
            uVar27 = uVar27 + 1;
          }
          uVar22 = 0;
          if (uStack_90._1_1_ != '\0') {
            uVar22 = uVar27;
          }
        }
        else {
code_r0x0001004a8d58:
          if ((int)pppppppuVar28 != 4) {
code_r0x0001004a8d60:
            if ((int)pppppppuVar28 == 0xc) {
              if (pppppppuVar29 == (ulong *******)0x6) {
                uVar22 = 1;
                if (*(int *)param_3 != 0x61726170 || *(short *)((long)param_3 + 4) != 0x736d) {
                  uVar22 = 2;
                }
              }
              else if (pppppppuVar29 == (ulong *******)0x2) {
                uVar22 = 2;
                if (*(short *)param_3 == 0x6469) {
                  uVar22 = 0;
                }
              }
              else {
                uVar22 = 2;
              }
              goto joined_r0x0001004a8eec;
            }
code_r0x0001004a9768:
            unaff_x22 = pppppppuStack_2e8;
            pppppppuStack_2a0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_c8 = pppppppuStack_2e8;
            pppppppuStack_2b8 = pppppppuVar32;
            pppppppuStack_d0 = unaff_x28;
            ppppppuVar31 = (ulong ******)
                           thunk_FUN_108855b04(&uStack_90,&pppppppuStack_b0,&UNK_10b2111c0);
            unaff_x21 = (ulong *******)&pppppppuStack_2e0;
            param_3 = (char *)pppppppuStack_300;
            goto LAB_1004a9260;
          }
          in_ZR = pppppppuVar24 == (ulong *******)0x1;
          pppppppuVar28 = (ulong *******)0x1;
code_r0x0001004a8de4:
          uVar27 = (uint)pppppppuVar28;
          if (!(bool)in_ZR) {
            uVar27 = uVar27 + 1;
          }
          uVar22 = 0;
          if (pppppppuVar24 != (ulong *******)0x0) {
            uVar22 = uVar27;
          }
        }
code_r0x0001004a8f78:
        FUN_100e077ec(&uStack_90);
      }
      else {
        if (uVar22 == 0xd) {
          if ((ulong *******)param_3 == (ulong *******)0x6) {
            uVar22 = 1;
            if (*(int *)pppppppuVar24 != 0x61726170 || *(short *)((long)pppppppuVar24 + 4) != 0x736d
               ) {
              uVar22 = 2;
            }
          }
          else {
            if ((ulong *******)param_3 != (ulong *******)0x2) goto code_r0x0001004a8f44;
            uVar22 = 2;
            if (*(short *)pppppppuVar24 == 0x6469) {
              uVar22 = 0;
            }
          }
          goto code_r0x0001004a8f78;
        }
        if (uVar22 != 0xe) {
          in_ZR = uVar22 == 0xf;
code_r0x0001004a8da8:
          if (!(bool)in_ZR) goto code_r0x0001004a9768;
          if ((ulong *******)param_3 == (ulong *******)0x6) {
            if ((((*(byte *)pppppppuVar24 == 0x70) && (*(byte *)((long)pppppppuVar24 + 1) == 0x61))
                && (*(byte *)((long)pppppppuVar24 + 2) == 0x72)) &&
               ((*(byte *)((long)pppppppuVar24 + 3) == 0x61 &&
                (*(byte *)((long)pppppppuVar24 + 4) == 0x6d)))) {
              in_ZR = *(byte *)((long)pppppppuVar24 + 5) == 0x73;
code_r0x0001004a8f38:
              if ((bool)in_ZR) {
                uVar22 = 1;
                goto code_r0x0001004a8f78;
              }
            }
          }
          else if ((((ulong *******)param_3 == (ulong *******)0x2) &&
                   (*(byte *)pppppppuVar24 == 0x69)) && (*(byte *)((long)pppppppuVar24 + 1) == 100))
          {
            uVar22 = 0;
            goto code_r0x0001004a8f78;
          }
code_r0x0001004a8f44:
          uVar22 = 2;
          goto code_r0x0001004a8f78;
        }
        if (pppppppuStack_78 == (ulong *******)0x6) {
          if (((((*param_3 != 0x70) || (*(byte *)((long)param_3 + 1) != 0x61)) ||
               (*(byte *)((long)param_3 + 2) != 0x72)) ||
              ((*(byte *)((long)param_3 + 3) != 0x61 || (*(byte *)((long)param_3 + 4) != 0x6d)))) ||
             (*(byte *)((long)param_3 + 5) != 0x73)) goto code_r0x0001004a8eb4;
          uVar22 = 1;
        }
        else if (((pppppppuStack_78 == (ulong *******)0x2) && (*param_3 == 0x69)) &&
                (*(byte *)((long)param_3 + 1) == 100)) {
          uVar22 = 0;
        }
        else {
code_r0x0001004a8eb4:
          uVar22 = 2;
        }
joined_r0x0001004a8eec:
        if (pppppppuVar24 != (ulong *******)0x0) {
          _free();
        }
      }
      bVar23 = (byte)pppppppuStack_2e0;
      if ((uVar22 & 0xff) == 0) {
        if (unaff_x23 != (ulong *******)0x8000000000000001) {
          pppppppuVar24 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_2b8 = pppppppuVar32;
          goto code_r0x0001004a9688;
        }
        pppppppuStack_2e0 = (ulong *******)CONCAT71(pppppppuStack_2e0._1_7_,0x16);
        if (bVar23 == 0x16) {
          pppppppuStack_2a0 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_c8 = pppppppuStack_2e8;
          pppppppuStack_2b8 = pppppppuVar32;
          pppppppuStack_d0 = unaff_x28;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004a9764;
        }
        ppppppuVar31 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar31;
        uVar26 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar26;
        uStack_90._0_1_ = bVar23;
        func_0x00010135ba2c(&pppppppuStack_b0,&uStack_90);
        if (pppppppuStack_b0 == (ulong *******)0x8000000000000001) goto code_r0x0001004a93ac;
        pppppppuStack_2f8 = pppppppuStack_a8;
        pppppppuStack_2f0 = pppppppuStack_a0;
        unaff_x23 = pppppppuStack_b0;
      }
      else if ((uVar22 & 0xff) == 1) {
        if (unaff_x24 != (ulong *******)0x8000000000000000) {
          pppppppuStack_2a0 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_2b8 = pppppppuVar32;
          goto code_r0x0001004a95c8;
        }
        pppppppuStack_2e0 = (ulong *******)CONCAT71(pppppppuStack_2e0._1_7_,0x16);
        if (bVar23 == 0x16) {
          pppppppuStack_2a0 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_c8 = pppppppuStack_2e8;
          pppppppuStack_2b8 = pppppppuVar32;
          pppppppuStack_d0 = unaff_x28;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004a9764;
        }
        ppppppuVar31 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar31;
        uVar26 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar26;
        uStack_90._0_1_ = bVar23;
        func_0x0001012cfabc(&pppppppuStack_b0,&uStack_90);
        pppppppuVar24 = pppppppuStack_a8;
        unaff_x28 = pppppppuStack_b0;
        if (pppppppuStack_b0 == (ulong *******)0x8000000000000000) {
          pppppppuStack_2a0 = (ulong *******)((long)unaff_x25 + 1);
          *pppppppuStack_300 = (ulong ******)0x800000000000006e;
          pppppppuStack_300[1] = (ulong ******)pppppppuStack_a8;
          pppppppuStack_2b8 = pppppppuVar32;
          goto code_r0x0001004a93a4;
        }
code_r0x0001004a8ce8:
        pppppppuStack_2e8 = pppppppuVar24;
code_r0x0001004a8cec:
        pppppppuStack_b8 = pppppppuStack_98;
        pppppppuStack_c0 = pppppppuStack_a0;
code_r0x0001004a8cfc:
        unaff_x24 = unaff_x28;
        unaff_x28 = unaff_x24;
      }
      else {
        pppppppuStack_2e0 = (ulong *******)CONCAT71(pppppppuStack_2e0._1_7_,0x16);
        if (bVar23 == 0x16) {
          pppppppuStack_2a0 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_c8 = pppppppuStack_2e8;
          param_3 = &UNK_108ca1000;
          pppppppuStack_2b8 = pppppppuVar32;
          pppppppuStack_d0 = unaff_x28;
          goto code_r0x0001004a96e8;
        }
code_r0x0001004a906c:
        ppppppuVar31 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar31;
        pppppppuVar37 = *(ulong ********)((long)unaff_x21 + 0x17);
        pppppppuVar36 = *(ulong ********)((long)unaff_x21 + 0xf);
code_r0x0001004a9078:
        uStack_90._0_1_ = bVar23;
        *(ulong ********)((long)unaff_x22 + 0x17) = pppppppuVar37;
        *(ulong ********)((long)unaff_x22 + 0xf) = pppppppuVar36;
        FUN_100e077ec(&uStack_90);
      }
      pppppppuVar32 = pppppppuVar32 + 8;
      unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
      in_ZR = pppppppuVar21 + 8 == unaff_x20;
code_r0x0001004a8d10:
      pppppppuVar34 = pppppppuStack_308;
      unaff_x26 = unaff_x20;
    } while (!(bool)in_ZR);
    unaff_x21 = pppppppuStack_300;
    pppppppuStack_c8 = pppppppuStack_2e8;
    pppppppuStack_2b8 = unaff_x26;
    pppppppuStack_2a0 = pppppppuVar34;
    pppppppuStack_d0 = unaff_x28;
    if (unaff_x23 == (ulong *******)0x8000000000000001) {
      unaff_x21 = (ulong *******)&pppppppuStack_2e0;
      unaff_x22 = pppppppuStack_2e8;
      param_3 = (char *)pppppppuStack_300;
      goto code_r0x0001004a922c;
    }
    if (unaff_x24 == (ulong *******)0x8000000000000000) {
      pppppppuStack_b0 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_a8 = (ulong *******)0x6;
      uStack_90._0_1_ = (byte)&pppppppuStack_b0;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_b0 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      ppppppuVar31 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      *unaff_x21 = (ulong ******)0x800000000000006e;
      unaff_x21[1] = ppppppuVar31;
      if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuStack_2f8);
      }
      unaff_x21 = (ulong *******)&pppppppuStack_2e0;
      goto LAB_1004a9644;
    }
    ppppppuVar31 = (ulong ******)0x800000000000006e;
    pppppppuStack_300[4] = (ulong ******)pppppppuStack_b8;
    pppppppuStack_300[3] = (ulong ******)pppppppuStack_c0;
    *pppppppuStack_300 = (ulong ******)0x800000000000001c;
    pppppppuStack_300[1] = (ulong ******)unaff_x24;
    pppppppuStack_300[2] = (ulong ******)pppppppuStack_2e8;
    pppppppuStack_300[5] = (ulong ******)unaff_x23;
    pppppppuStack_300[6] = (ulong ******)pppppppuStack_2f8;
    pppppppuStack_300[7] = (ulong ******)pppppppuStack_2f0;
    _memcpy(&ppppppuStack_290,pppppppuStack_300,0x1c0);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2e0;
code_r0x0001004a934c:
    FUN_100d34830(pppppppuVar24 + 4);
    if (unaff_x20 != unaff_x26) {
      uStack_90._0_1_ = (byte)pppppppuVar34;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar34 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar34 >> 0x10);
      param_5 = &UNK_10b23a190;
      param_3 = (char *)(((ulong)((long)unaff_x20 - (long)unaff_x26) >> 6) + (long)pppppppuVar34);
      param_4 = (ulong *******)&uStack_90;
code_r0x0001004a9378:
      ppppppuVar30 = (ulong ******)thunk_FUN_1087e422c(param_3,param_4,param_5);
      *unaff_x21 = ppppppuVar31;
      unaff_x21[1] = ppppppuVar30;
      goto code_r0x0001004a95b0;
    }
    goto LAB_1004a9660;
  case 0x16:
  case 0x47:
    goto code_r0x0001004a9494;
  case 0x18:
  case 0x49:
    goto code_r0x0001004a946c;
  case 0x1a:
    goto code_r0x0001004a9430;
  case 0x1b:
  case 0x4c:
    goto code_r0x0001004a94b4;
  case 0x1f:
  case 0x9d:
  case 0xc9:
  case 0xdc:
    goto code_r0x0001004a9460;
  case 0x21:
    goto code_r0x0001004a9408;
  case 0x22:
  case 0xde:
    goto code_r0x0001004a9438;
  case 0x23:
  case 0xb3:
    goto code_r0x0001004a94bc;
  case 0x24:
    goto code_r0x0001004a93e0;
  case 0x26:
    goto code_r0x0001004a93d8;
  case 0x28:
    goto code_r0x0001004a9514;
  case 0x29:
    goto code_r0x0001004a9130;
  case 0x2a:
    goto code_r0x0001004a9174;
  case 0x2c:
    goto code_r0x0001004a8ce8;
  case 0x2d:
    goto code_r0x0001004a8cfc;
  case 0x2e:
    goto code_r0x0001004a8cd0;
  case 0x2f:
    goto code_r0x0001004a8cd8;
  case 0x31:
    goto code_r0x0001004a8d34;
  case 0x32:
    goto code_r0x0001004a8d58;
  case 0x33:
    goto code_r0x0001004a8ce0;
  case 0x34:
    goto code_r0x0001004a8de4;
  case 0x35:
    goto code_r0x0001004a8ca8;
  case 0x36:
    goto code_r0x0001004a8da8;
  case 0x38:
    goto code_r0x0001004a8c8c;
  case 0x39:
    goto code_r0x0001004a8d3c;
  case 0x3a:
    goto code_r0x0001004a934c;
  case 0x3b:
    goto code_r0x0001004a9378;
  case 0x3d:
    goto code_r0x0001004a8d10;
  case 0x3f:
    goto code_r0x0001004a8d60;
  case 0x40:
    goto code_r0x0001004a8e24;
  case 0x41:
    goto code_r0x0001004a8f38;
  case 0x45:
    goto code_r0x0001004a9464;
  case 0x46:
  case 0xc0:
    goto code_r0x0001004a9410;
  case 0x4a:
  case 0xb7:
    goto code_r0x0001004a94c4;
  case 0x4b:
  case 0xbb:
  case 0xeb:
    goto code_r0x0001004a9440;
  case 0x4d:
    goto code_r0x0001004a93e8;
  case 0x4e:
  case 0xbe:
    goto code_r0x0001004a9418;
  case 0x50:
    goto code_r0x0001004a93c0;
  case 0x51:
    goto code_r0x0001004a9454;
  case 0x52:
    goto code_r0x0001004a93b8;
  case 0x54:
  case 0x5c:
  case 0xbd:
    goto code_r0x0001004a94f4;
  case 0x55:
    goto code_r0x0001004a9124;
  case 0x56:
    goto code_r0x0001004a9168;
  case 0x58:
  case 0x91:
    goto code_r0x0001004a9558;
  case 0x59:
  case 0x8a:
    goto code_r0x0001004a9568;
  case 0x5b:
    goto code_r0x0001004a9548;
  case 0x5d:
    goto code_r0x0001004a9578;
  case 0x5e:
    goto code_r0x0001004a9590;
  case 0x5f:
  case 0x89:
  case 0xc2:
    goto code_r0x0001004a9550;
  case 0x60:
  case 0xf2:
    goto code_r0x0001004a95a8;
  case 0x61:
    goto code_r0x0001004a9524;
  case 0x62:
  case 0xf5:
    goto code_r0x0001004a9598;
  case 0x65:
  case 0x8c:
  case 0xf4:
    goto code_r0x0001004a9580;
  case 0x67:
    goto code_r0x0001004a9538;
  case 0x6a:
  case 0xfa:
    goto code_r0x0001004a95f8;
  case 0x6b:
    goto code_r0x0001004a90a4;
  case 0x6c:
    goto code_r0x0001004a90e8;
  case 0x6e:
    goto code_r0x0001004a9668;
  case 0x6f:
    goto code_r0x0001004a9678;
  case 0x70:
    goto code_r0x0001004a9640;
  case 0x71:
    goto code_r0x0001004a9658;
  case 0x72:
    goto code_r0x0001004a9604;
  case 0x73:
code_r0x0001004a9688:
    unaff_x22 = pppppppuStack_2e8;
    pppppppuStack_2a0 = pppppppuVar24;
  case 0x7b:
    pppppppuVar25 = (ulong *******)&UNK_108ca26b0;
    pppppppuVar28 = (ulong *******)0x2;
    pppppppuStack_d0 = unaff_x28;
    pppppppuStack_c8 = unaff_x22;
code_r0x0001004a96a0:
    pppppppuVar24 = (ulong *******)&pppppppuStack_b0;
    pppppppuStack_b0 = pppppppuVar25;
    pppppppuStack_a8 = pppppppuVar28;
code_r0x0001004a96a8:
    uStack_90._0_1_ = (byte)pppppppuVar24;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar24 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar24 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_3 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x0001004a96b8:
    ppppppuVar31 = (ulong ******)thunk_FUN_108856088((byte *)((long)param_3 + 0x973),&uStack_90);
    unaff_x21 = (ulong *******)&pppppppuStack_2e0;
    param_3 = (char *)pppppppuStack_300;
LAB_1004a9260:
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar31;
    pppppppuVar28 = pppppppuStack_c0;
    if (unaff_x24 != (ulong *******)0x8000000000000000) goto joined_r0x0001004a9618;
    goto LAB_1004a9628;
  case 0x74:
    goto code_r0x0001004a96a0;
  case 0x75:
    goto LAB_1004a9660;
  case 0x76:
    goto code_r0x0001004a96b8;
  case 0x77:
    goto code_r0x0001004a9634;
  case 0x78:
    goto code_r0x0001004a96a8;
  case 0x79:
    goto code_r0x0001004a95dc;
  case 0x7a:
    goto code_r0x0001004a960c;
  case 0x7c:
    goto code_r0x0001004a95b4;
  case 0x7d:
    goto code_r0x0001004a9648;
  case 0x7e:
    goto code_r0x0001004a95ac;
  case 0x80:
code_r0x0001004a96e8:
    FUN_107c05cac((ulong *******)((long)param_3 + 0xa98),0x2c,&UNK_10b24f848);
code_r0x0001004a9764:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004a9768);
    (*pcVar3)();
  case 0x81:
    goto code_r0x0001004a8cec;
  case 0x82:
    goto code_r0x0001004a8d30;
  case 0x85:
    goto code_r0x0001004a9540;
  case 0x86:
    goto code_r0x0001004a9508;
  case 0x87:
    goto code_r0x0001004a9520;
  case 0x8b:
    goto code_r0x0001004a9528;
  case 0x8e:
    goto code_r0x0001004a9570;
  case 0x93:
  case 0xac:
  case 0xd8:
    goto code_r0x0001004a9510;
  case 0x96:
  case 0xff:
    goto code_r0x0001004a95d0;
  case 0x9a:
  case 0xbc:
  case 0xc6:
  case 0xdd:
    goto code_r0x0001004a9470;
  case 0x9e:
  case 0xca:
    goto code_r0x0001004a940c;
  case 0x9f:
  case 0xcb:
    goto code_r0x0001004a9490;
  case 0xa1:
  case 0xb4:
  case 0xcd:
    goto code_r0x0001004a9468;
  case 0xa2:
  case 0xce:
    goto code_r0x0001004a94c0;
  case 0xa3:
  case 0xcf:
    goto code_r0x0001004a943c;
  case 0xa4:
  case 0xd0:
  case 0xe4:
    goto code_r0x0001004a94b0;
  case 0xa5:
  case 0xd1:
    goto code_r0x0001004a93e4;
  case 0xa6:
  case 0xd2:
    goto code_r0x0001004a9414;
  case 0xa8:
  case 0xd4:
    goto code_r0x0001004a93bc;
  case 0xaa:
  case 0xd6:
    goto code_r0x0001004a93b4;
  case 0xad:
  case 0xd9:
    goto code_r0x0001004a9078;
  case 0xae:
  case 0xda:
    goto code_r0x0001004a90bc;
  case 0xb1:
    goto code_r0x0001004a94dc;
  case 0xb6:
    break;
  case 0xb8:
  case 0xfd:
    goto code_r0x0001004a951c;
  case 0xba:
    goto code_r0x0001004a950c;
  case 0xc3:
    goto code_r0x0001004a90a8;
  case 0xc4:
    goto code_r0x0001004a90ec;
  case 0xe3:
    goto code_r0x0001004a9458;
  case 0xe7:
    goto code_r0x0001004a93d4;
  case 0xe8:
    goto code_r0x0001004a9404;
  case 0xea:
code_r0x0001004a93ac:
    pppppppuVar24 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_2b8 = pppppppuVar32;
code_r0x0001004a93b4:
    pppppppuStack_2a0 = pppppppuVar24;
code_r0x0001004a93b8:
    unaff_x22 = pppppppuStack_2e8;
code_r0x0001004a93bc:
    pppppppuStack_d0 = unaff_x28;
    pppppppuStack_c8 = unaff_x22;
code_r0x0001004a93c0:
    unaff_x23 = (ulong *******)0x8000000000000001;
    unaff_x21 = (ulong *******)&pppppppuStack_2e0;
    pppppppuVar24 = (ulong *******)0x6e;
    param_3 = (char *)pppppppuStack_a8;
    pppppppuVar21 = pppppppuStack_300;
code_r0x0001004a93d4:
    pppppppuVar24 = (ulong *******)((ulong)pppppppuVar24 | 0x8000000000000000);
code_r0x0001004a93d8:
    *pppppppuVar21 = (ulong ******)pppppppuVar24;
    pppppppuVar21[1] = (ulong ******)param_3;
    pppppppuVar24 = (ulong *******)0x8000000000000000;
code_r0x0001004a93e0:
    in_ZR = unaff_x24 == pppppppuVar24;
code_r0x0001004a93e4:
    if (!(bool)in_ZR) {
code_r0x0001004a93e8:
      pppppppuVar28 = pppppppuStack_c0;
      goto joined_r0x0001004a9618;
    }
    goto LAB_1004a9628;
  case 0xec:
code_r0x0001004a93a4:
    unaff_x21 = (ulong *******)&pppppppuStack_2e0;
    goto LAB_1004a9628;
  case 0xee:
    goto code_r0x0001004a9500;
  case 0xef:
    goto code_r0x0001004a906c;
  case 0xf0:
    goto code_r0x0001004a90b0;
  case 0xf3:
    goto code_r0x0001004a95b8;
  case 0xf6:
    goto code_r0x0001004a9544;
  case 0xf7:
code_r0x0001004a95c8:
    pppppppuStack_c8 = pppppppuStack_2e8;
    unaff_x22 = pppppppuStack_2e8;
    pppppppuStack_d0 = unaff_x28;
code_r0x0001004a95d0:
    pppppppuVar24 = (ulong *******)&UNK_108cb9606;
    pppppppuVar28 = (ulong *******)0x6;
code_r0x0001004a95dc:
    pppppppuStack_b0 = pppppppuVar24;
    pppppppuStack_a8 = pppppppuVar28;
code_r0x0001004a95e0:
    pppppppuVar24 = (ulong *******)&pppppppuStack_b0;
    pppppppuVar28 = (ulong *******)&UNK_100c7b000;
code_r0x0001004a95e8:
    uStack_90._0_1_ = (byte)pppppppuVar24;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar24 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar24 >> 0x10);
    uStack_88 = SUB81(pppppppuVar28 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppuVar28 + 0x74) >> 8);
    param_3 = s_duplicate_field_____108ac2973;
code_r0x0001004a95f8:
    param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_90);
    pppppppuVar28 = pppppppuStack_300;
code_r0x0001004a9604:
    unaff_x21 = (ulong *******)&pppppppuStack_2e0;
    pppppppuVar24 = (ulong *******)0x6e;
code_r0x0001004a960c:
    *pppppppuVar28 = (ulong ******)((ulong)pppppppuVar24 | 0x8000000000000000);
    pppppppuVar28[1] = (ulong ******)param_3;
    pppppppuVar28 = pppppppuStack_c0;
joined_r0x0001004a9618:
    pppppppuStack_c0 = pppppppuVar28;
    if (pppppppuVar28 != (ulong *******)0x0) {
      pppppppuVar32 = unaff_x22 + 1;
      do {
        if (pppppppuVar32[-1] != (ulong ******)0x0) {
          _free(*pppppppuVar32);
        }
        pppppppuVar32 = pppppppuVar32 + 3;
        pppppppuVar28 = (ulong *******)((long)pppppppuVar28 + -1);
      } while (pppppppuVar28 != (ulong *******)0x0);
    }
    if (unaff_x24 != (ulong *******)0x0) {
      _free(unaff_x22);
    }
LAB_1004a9628:
    in_OV = SBORROW8((long)unaff_x23,-0x7ffffffffffffffe);
    in_NG = (long)((long)unaff_x23 + 0x7ffffffffffffffe) < 0;
code_r0x0001004a9634:
    if ((in_NG == in_OV) && (param_3 = (char *)pppppppuStack_2f8, unaff_x23 != (ulong *******)0x0))
    {
code_r0x0001004a9640:
      _free(param_3);
    }
LAB_1004a9644:
    param_3 = (char *)(unaff_x21 + 4);
code_r0x0001004a9648:
    FUN_100d34830(param_3);
    if ((byte)pppppppuStack_2e0 != '\x16') {
code_r0x0001004a9658:
      FUN_100e077ec(&pppppppuStack_2e0);
    }
    goto LAB_1004a9660;
  case 0xf8:
    goto code_r0x0001004a95e0;
  case 0xf9:
    goto code_r0x0001004a95a0;
  case 0xfb:
    goto code_r0x0001004a9574;
  case 0xfc:
    goto code_r0x0001004a95e8;
  case 0xfe:
    goto code_r0x0001004a954c;
  }
  ppppppuStack_290 = (ulong ******)CONCAT71(ppppppuStack_290._1_7_,bVar23);
code_r0x0001004a9508:
  param_5 = &UNK_10b21c000;
code_r0x0001004a950c:
  param_5 = param_5 + 0x2b0;
code_r0x0001004a9510:
  pppppppuVar21 = &ppppppuStack_290;
code_r0x0001004a9514:
  pppppppuVar21 = (ulong *******)FUN_107c05dcc(pppppppuVar21,&pppppppuStack_b0,param_5);
code_r0x0001004a951c:
  pppppppuVar24 = (ulong *******)0x6e;
code_r0x0001004a9520:
  pppppppuVar24 = (ulong *******)((ulong)pppppppuVar24 | 0x8000000000000000);
code_r0x0001004a9524:
  *(ulong ********)param_3 = pppppppuVar24;
  *(ulong ********)((long)param_3 + 8) = pppppppuVar21;
code_r0x0001004a9528:
LAB_1004a9660:
code_r0x0001004a9668:
code_r0x0001004a9678:
  return;
}

