
/* WARNING: Type propagation algorithm not settling */

void FUN_1004aefac(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar12;
  byte *pbVar13;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar14;
  char *pcVar15;
  ulong *******pppppppuVar16;
  ulong ******ppppppuVar17;
  uint uVar18;
  byte bVar19;
  ulong *******pppppppuVar20;
  undefined8 uVar21;
  ulong *******pppppppuVar22;
  ulong ******ppppppuVar23;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******pppppppuVar24;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******pppppppuVar25;
  ulong *******pppppppuVar26;
  ulong *******unaff_x27;
  uint unaff_w28;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined8 unaff_x30;
  ulong *******pppppppuVar28;
  byte abStack_340 [88];
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
  ulong *******pppppppuStack_298;
  ulong ******ppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong ******ppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong ******ppppppuStack_258;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong ******ppppppuStack_78;
  byte *pbVar11;
  
  pppppppuVar28 = param_1._8_8_;
  ppppppuVar17 = param_1._0_8_;
  puVar27 = &stack0xfffffffffffffff0;
  pbVar13 = abStack_340 + 0x50;
  pbVar10 = abStack_340 + 0x50;
  pbVar6 = abStack_340 + 0x50;
  pppppppuVar26 = (ulong *******)&uStack_90;
  bVar19 = *(byte *)param_3;
  pppppppuVar20 = (ulong *******)(ulong)bVar19;
  pppppppuVar22 = (ulong *******)&UNK_108c9a360;
  ppppppuVar23 = (ulong ******)
                 (&UNK_1004aeff0 + (ulong)*(ushort *)(&UNK_108c9a360 + (long)pppppppuVar20 * 2) * 4)
  ;
  pbVar12 = abStack_340 + 0x50;
  pbVar7 = abStack_340 + 0x50;
  pbVar8 = abStack_340 + 0x50;
  pbVar9 = abStack_340 + 0x50;
  pbVar11 = abStack_340 + 0x50;
  pbVar3 = abStack_340 + 0x50;
  pbVar4 = abStack_340 + 0x50;
  pbVar5 = abStack_340 + 0x50;
  pppppppuVar16 = param_2;
  pcVar15 = (char *)param_2;
  pppppppuVar14 = param_2;
  pppppppuVar24 = unaff_x21;
  pppppppuVar25 = pppppppuVar26;
  switch(bVar19) {
  case 0:
  case 0x22:
  case 0x2c:
  case 0x43:
    ppppppuStack_270 =
         (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,*(char *)((long)param_3 + 1)) << 8);
    goto code_r0x0001004af864;
  case 1:
  case 0x2d:
  case 0x47:
  case 0x7e:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
    break;
  case 2:
  case 0x2e:
    pppppppuStack_268 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
    break;
  case 3:
  case 0x2f:
  case 0x42:
  case 0x94:
    pppppppuStack_268 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    break;
  case 4:
  case 0x30:
    pppppppuVar20 = (ulong *******)param_3[1];
  case 0x26:
    pppppppuStack_268 = pppppppuVar20;
    break;
  case 5:
  case 0x31:
  case 0x8f:
    pppppppuVar20 = (ulong *******)(long)*(char *)((long)param_3 + 1);
    goto code_r0x0001004af858;
  case 6:
  case 0x32:
    pppppppuVar20 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x25:
    goto code_r0x0001004af858;
  case 7:
  case 0x1a:
  case 0x33:
  case 0x92:
    pppppppuVar20 = (ulong *******)(long)(int)*(uint *)((long)param_3 + 4);
    goto code_r0x0001004af858;
  case 8:
  case 0x34:
  case 0x90:
    pppppppuVar20 = (ulong *******)param_3[1];
    goto code_r0x0001004af858;
  case 9:
  case 0x35:
    ppppppuVar17 = (ulong ******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x21:
  case 0x51:
    pppppppuStack_268 = (ulong *******)(double)SUB84(ppppppuVar17,0);
  case 0x88:
code_r0x0001004af84c:
    bVar19 = 3;
code_r0x0001004af850:
    goto code_r0x0001004af860;
  case 10:
  case 0x36:
  case 0x4a:
  case 0x79:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x0001004af84c;
  case 0xb:
  case 0x37:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    pbVar7 = &stack0xffffffffffffffa0;
  case 0xa0:
    puVar27 = *(undefined1 **)(pbVar7 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar7 + 0x58);
    unaff_x20 = *(ulong ********)(pbVar7 + 0x40);
    pppppppuVar16 = *(ulong ********)(pbVar7 + 0x48);
    pbVar8 = pbVar7;
code_r0x0001004af78c:
    pbVar9 = pbVar8;
code_r0x0001004af790:
    pbVar11 = pbVar9;
code_r0x0001004af798:
    pbVar10 = pbVar11 + 0x60;
code_r0x0001004af79c:
    *(ulong ********)(pbVar10 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar10 + -0x18) = pppppppuVar16;
    *(undefined1 **)(pbVar10 + -0x10) = puVar27;
    *(undefined8 *)(pbVar10 + -8) = unaff_x30;
    *(undefined4 *)(pbVar10 + -0x44) = 0;
    uVar18 = (uint)param_3;
    if (uVar18 < 0x80) {
      pbVar10[-0x44] = (byte)param_3;
      uVar21 = 1;
    }
    else {
      bVar19 = (byte)param_3 & 0x3f | 0x80;
      if (uVar18 < 0x800) {
        pbVar10[-0x44] = (byte)(uVar18 >> 6) | 0xc0;
        pbVar10[-0x43] = bVar19;
        uVar21 = 2;
      }
      else {
        bVar1 = (byte)(uVar18 >> 6) & 0x3f | 0x80;
        if (uVar18 < 0x10000) {
          pbVar10[-0x44] = (byte)(uVar18 >> 0xc) | 0xe0;
          pbVar10[-0x43] = bVar1;
          pbVar10[-0x42] = bVar19;
          uVar21 = 3;
        }
        else {
          pbVar10[-0x44] = (byte)(uVar18 >> 0x12) | 0xf0;
          pbVar10[-0x43] = (byte)(uVar18 >> 0xc) & 0x3f | 0x80;
          pbVar10[-0x42] = bVar1;
          pbVar10[-0x41] = bVar19;
          uVar21 = 4;
        }
      }
    }
    *(byte **)(pbVar10 + -0x38) = pbVar10 + -0x44;
    *(undefined8 *)(pbVar10 + -0x30) = uVar21;
    pbVar10[-0x40] = 5;
    ppppppuVar23 = (ulong ******)func_0x000108a4a50c(pbVar10 + -0x40,pbVar10 + -0x21,&UNK_10b21a730)
    ;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar23;
    return;
  case 0xc:
  case 0x38:
    param_3 = param_3 + 1;
  case 0x24:
    pbVar12 = &stack0xffffffffffffffa0;
    pppppppuVar16 = unaff_x19;
    puVar27 = unaff_x29;
code_r0x0001004af7c0:
    pbVar13 = pbVar12 + 0x60;
code_r0x0001004af7cc:
    *(ulong ********)(pbVar13 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar13 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar13 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar13 + -0x18) = pppppppuVar16;
    *(undefined1 **)(pbVar13 + -0x10) = puVar27;
    *(undefined8 *)(pbVar13 + -8) = unaff_x30;
    ppppppuVar23 = param_3[1];
    ppppppuVar17 = param_3[2];
    *(ulong *******)(pbVar13 + -0x48) = ppppppuVar23;
    *(ulong *******)(pbVar13 + -0x40) = ppppppuVar17;
    pbVar13[-0x50] = 5;
    ppppppuVar17 = (ulong ******)func_0x000108a4a50c(pbVar13 + -0x50,pbVar13 + -0x31,&UNK_10b21a730)
    ;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar17;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar23);
    }
    return;
  case 0xd:
  case 0x1f:
  case 0x39:
  case 0x48:
    pppppppuStack_268 = (ulong *******)param_3[1];
    pppppppuStack_260 = (ulong *******)param_3[2];
  case 0x4c:
    bVar19 = 5;
code_r0x0001004af838:
    goto code_r0x0001004af860;
  case 0xe:
  case 0x3a:
    param_3 = param_3 + 1;
  case 0xb8:
    pbVar3 = &stack0xffffffffffffffa0;
code_r0x0001004af75c:
    puVar27 = *(undefined1 **)(pbVar3 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar3 + 0x58);
    unaff_x20 = *(ulong ********)(pbVar3 + 0x40);
    pppppppuVar16 = *(ulong ********)(pbVar3 + 0x48);
    unaff_x22 = *(ulong ********)(pbVar3 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar3 + 0x38);
    pbVar4 = pbVar3;
code_r0x0001004af768:
    pbVar5 = pbVar4;
code_r0x0001004af76c:
    pbVar6 = pbVar5 + 0x60;
code_r0x0001004af774:
    *(ulong ********)(pbVar6 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar6 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar6 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar6 + -0x18) = pppppppuVar16;
    *(undefined1 **)(pbVar6 + -0x10) = puVar27;
    *(undefined8 *)(pbVar6 + -8) = unaff_x30;
    ppppppuVar23 = param_3[1];
    ppppppuVar17 = param_3[2];
    *(ulong *******)(pbVar6 + -0x48) = ppppppuVar23;
    *(ulong *******)(pbVar6 + -0x40) = ppppppuVar17;
    pbVar6[-0x50] = 6;
    ppppppuVar17 = (ulong ******)func_0x000108a4a50c(pbVar6 + -0x50,pbVar6 + -0x31,&UNK_10b21a730);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar17;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar23);
    }
    return;
  case 0xf:
  case 0x3b:
  case 0x45:
    pppppppuVar20 = (ulong *******)param_3[1];
    pppppppuVar22 = (ulong *******)param_3[2];
  case 0xac:
    pppppppuStack_268 = pppppppuVar20;
    pppppppuStack_260 = pppppppuVar22;
code_r0x0001004af7ec:
    bVar19 = 6;
code_r0x0001004af7f0:
    goto code_r0x0001004af860;
  case 0x10:
  case 0x3c:
    bVar19 = 8;
  case 0x9a:
    goto code_r0x0001004af860;
  default:
    ppppppuVar23 = param_3[1];
    pppppppuStack_268 = (ulong *******)ppppppuVar23[1];
    ppppppuStack_270 = (ulong ******)*ppppppuVar23;
    ppppppuStack_258 = (ulong ******)ppppppuVar23[3];
    pppppppuStack_260 = (ulong *******)ppppppuVar23[2];
    func_0x000107c04994(param_2,&ppppppuStack_270);
  case 0xf6:
code_r0x0001004af42c:
code_r0x0001004af430:
code_r0x0001004af43c:
code_r0x0001004af440:
code_r0x0001004af444:
code_r0x0001004af44c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)();
    return;
  case 0x12:
  case 0x3e:
    bVar19 = 7;
  case 0x70:
  case 0x8b:
    goto code_r0x0001004af860;
  case 0x13:
  case 0x3f:
  case 0xb1:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuVar28 = (ulong *******)unaff_x20[1];
    ppppppuVar17 = *unaff_x20;
  case 0xad:
    ppppppuStack_258 = unaff_x20[3];
    pppppppuStack_260 = (ulong *******)unaff_x20[2];
    ppppppuStack_270 = ppppppuVar17;
    pppppppuStack_268 = pppppppuVar28;
    func_0x000107c055b0(param_2,&ppppppuStack_270);
    goto code_r0x0001004af42c;
  case 0x14:
  case 0x40:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x27 = (ulong *******)param_3[3];
  case 0xae:
    unaff_x24 = unaff_x20 + (long)unaff_x27 * 4;
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
    if (unaff_x27 == (ulong *******)0x0) {
code_r0x0001004af484:
      param_3 = (ulong *******)&UNK_10b22f838;
code_r0x0001004af48c:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,param_3,&UNK_10b20a590);
code_r0x0001004af4a0:
      pppppppuVar20 = (ulong *******)0x800000000000006e;
      unaff_x22 = pppppppuStack_a0;
code_r0x0001004af4a8:
      *param_2 = (ulong ******)pppppppuVar20;
      param_2[1] = (ulong ******)unaff_x22;
code_r0x0001004af4ac:
      unaff_x24 = (ulong *******)(((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1);
      while( true ) {
        unaff_x24 = (ulong *******)((long)unaff_x24 + -1);
        in_ZR = unaff_x24 == (ulong *******)0x0;
        pppppppuVar24 = unaff_x21;
code_r0x0001004af4bc:
        param_2 = unaff_x20;
        if ((bool)in_ZR) break;
        unaff_x21 = pppppppuVar24 + 4;
        FUN_100e077ec(pppppppuVar24);
        unaff_x20 = param_2;
code_r0x0001004af4d0:
      }
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x0001004af4dc:
        _free(param_2);
code_r0x0001004af4e0:
      }
    }
    else {
code_r0x0001004af470:
      pppppppuVar24 = unaff_x20;
code_r0x0001004af474:
      unaff_x21 = pppppppuVar24 + 4;
      bVar19 = *(byte *)pppppppuVar24;
      in_ZR = bVar19 == 0x16;
      pppppppuStack_2b8 = unaff_x21;
code_r0x0001004af480:
      if ((bool)in_ZR) goto code_r0x0001004af484;
      uVar21 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar21;
      uStack_90._2_6_ = (undefined6)((ulong)uVar21 >> 8);
      uStack_88 = (undefined1)((ulong)uVar21 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
code_r0x0001004af504:
      uStack_90._0_1_ = bVar19;
      pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
      param_3 = (ulong *******)&uStack_90;
code_r0x0001004af510:
      func_0x00010135ba2c(pppppppuVar16,param_3);
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x0001004af4a0;
code_r0x0001004af524:
      in_ZR = unaff_x27 == (ulong *******)0x1;
code_r0x0001004af528:
      if ((bool)in_ZR) {
code_r0x0001004af544:
        param_3 = (ulong *******)&UNK_10b22f838;
        param_4 = &UNK_10b20a590;
code_r0x0001004af554:
        pppppppuVar14 = (ulong *******)thunk_FUN_1087e422c(1,param_3,param_4);
        pppppppuVar16 = unaff_x22;
code_r0x0001004af55c:
        *param_2 = (ulong ******)0x800000000000006e;
        param_2[1] = (ulong ******)pppppppuVar14;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x0001004af574:
          _free(pppppppuVar16);
        }
        goto code_r0x0001004af4ac;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar19 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar19 == 0x16) goto code_r0x0001004af544;
      pppppppuVar28 = *(ulong ********)((long)unaff_x20 + 0x29);
      ppppppuVar17 = *(ulong *******)((long)unaff_x20 + 0x21);
      unaff_x27 = pppppppuStack_98;
code_r0x0001004af8b0:
      uStack_87 = SUB87(pppppppuVar28,0);
      uStack_90._1_1_ = (char)ppppppuVar17;
      uStack_90._2_6_ = (undefined6)((ulong)ppppppuVar17 >> 8);
      uStack_88 = (undefined1)((ulong)ppppppuVar17 >> 0x38);
      ppppppuStack_78 = unaff_x20[7];
      uStack_80 = SUB81(unaff_x20[6],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[6] >> 8);
      pppppppuVar22 = (ulong *******)0x2;
code_r0x0001004af8c0:
      uStack_90._0_1_ = bVar19;
      pppppppuStack_2a0 = pppppppuVar22;
code_r0x0001004af8c8:
      pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
      param_3 = (ulong *******)&uStack_90;
code_r0x0001004af8d0:
      func_0x00010135b1d8(pppppppuVar16,param_3);
      pppppppuVar14 = pppppppuStack_a0;
      pppppppuVar20 = pppppppuStack_a8;
code_r0x0001004af8d8:
      in_ZR = pppppppuVar20 == (ulong *******)0x8000000000000000;
code_r0x0001004af8e0:
      pppppppuVar16 = unaff_x22;
      unaff_x22 = pppppppuVar16;
      if ((bool)in_ZR) goto code_r0x0001004af55c;
code_r0x0001004af8e4:
      unaff_x20 = (ulong *******)0x6e;
code_r0x0001004af8e8:
      unaff_x20 = (ulong *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
      pppppppuVar22 = pppppppuStack_98;
code_r0x0001004af8f0:
      *param_2 = (ulong ******)((long)unaff_x20 + -0x45);
      param_2[1] = (ulong ******)pppppppuVar20;
code_r0x0001004af8f8:
      param_2[2] = (ulong ******)pppppppuVar14;
      param_2[3] = (ulong ******)pppppppuVar22;
      param_2[4] = (ulong ******)unaff_x25;
      param_2[5] = (ulong ******)unaff_x22;
code_r0x0001004af900:
      param_2[6] = (ulong ******)unaff_x27;
      pppppppuVar16 = &ppppppuStack_270;
code_r0x0001004af908:
      param_4 = (undefined *)0x1c0;
      param_3 = param_2;
code_r0x0001004af910:
      _memcpy(pppppppuVar16,param_3,param_4);
code_r0x0001004af914:
      pppppppuVar16 = (ulong *******)FUN_100fbc738(&pppppppuStack_2c0);
code_r0x0001004af91c:
      if (pppppppuVar16 != (ulong *******)0x0) {
code_r0x0001004af920:
        *param_2 = (ulong ******)unaff_x20;
        param_2[1] = (ulong ******)pppppppuVar16;
        FUN_100e44f40(&ppppppuStack_270);
code_r0x0001004af92c:
      }
    }
    goto code_r0x0001004af888;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
    pppppppuVar20 = (ulong *******)param_3[2];
    ppppppuVar23 = param_3[3];
    unaff_x23 = pppppppuVar20 + (long)ppppppuVar23 * 8;
    pppppppuStack_2a0 = pppppppuVar20;
    pppppppuStack_298 = pppppppuVar20;
    ppppppuStack_290 = param_3[1];
    pppppppuStack_288 = unaff_x23;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    if (ppppppuVar23 != (ulong ******)0x0) {
      unaff_x25 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_90 | 1);
      unaff_x21 = (ulong *******)((ulong)&pppppppuStack_2c0 | 1);
      pppppppuVar22 = (ulong *******)((long)ppppppuVar23 * 0x40 - 0x40U >> 6);
      goto code_r0x0001004af058;
    }
    unaff_x24 = (ulong *******)0x0;
    goto code_r0x0001004af5a0;
  case 0x16:
    goto code_r0x0001004af860;
  case 0x17:
    goto code_r0x0001004af870;
  case 0x18:
    goto code_r0x0001004af838;
  case 0x19:
    goto code_r0x0001004af850;
  case 0x1b:
  case 0x68:
    goto code_r0x0001004af880;
  case 0x1c:
    goto code_r0x0001004af898;
  case 0x1d:
    goto code_r0x0001004af858;
  case 0x1e:
  case 99:
  case 0x7d:
  case 0x84:
    goto code_r0x0001004af8b0;
  case 0x20:
  case 0x87:
    goto code_r0x0001004af8a0;
  case 0x23:
  case 0x66:
  case 0x86:
    goto code_r0x0001004af888;
  case 0x28:
    goto code_r0x0001004af8e4;
  case 0x29:
    goto code_r0x0001004af43c;
  case 0x2a:
    goto code_r0x0001004af480;
  case 0x44:
    goto code_r0x0001004af7cc;
  case 0x46:
    goto code_r0x0001004af790;
  case 0x49:
    goto code_r0x0001004af7ec;
  case 0x4b:
  case 0xc6:
    goto code_r0x0001004af7c0;
  case 0x4d:
    goto code_r0x0001004af768;
  case 0x4e:
    goto code_r0x0001004af798;
  case 0x4f:
  case 0x7c:
    break;
  case 0x50:
    goto code_r0x0001004af740;
  case 0x52:
    goto code_r0x0001004af738;
  case 0x54:
    goto code_r0x0001004af894;
  case 0x55:
    goto code_r0x0001004af400;
  case 0x56:
  case 0xfc:
    goto code_r0x0001004af444;
  case 0x58:
    goto code_r0x0001004af93c;
  case 0x59:
    goto code_r0x0001004af94c;
  case 0x5a:
    goto code_r0x0001004af914;
  case 0x5b:
    goto code_r0x0001004af92c;
  case 0x5c:
  case 0x91:
    goto code_r0x0001004af8d8;
  case 0x5d:
    goto FUN_1004af95c;
  case 0x5e:
    goto code_r0x0001004af974;
  case 0x5f:
code_r0x0001004af934:
    pppppppuStack_298 = pppppppuVar26;
    pppppppuStack_280 = pppppppuVar20;
code_r0x0001004af93c:
    pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a0 = (ulong *******)0x6;
code_r0x0001004af94c:
    pppppppuVar20 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004af950:
    uStack_90._0_1_ = (byte)pppppppuVar20;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar20 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar20 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
FUN_1004af95c:
    pcVar15 = s_duplicate_field_____108ac2973;
code_r0x0001004af964:
    unaff_x21 = pppppppuStack_2c8;
    unaff_x27 = pppppppuStack_2d0;
    pppppppuVar16 = (ulong *******)thunk_FUN_108856088(pcVar15,&uStack_90);
code_r0x0001004af970:
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
code_r0x0001004af974:
    pppppppuVar20 = (ulong *******)0x800000000000006e;
code_r0x0001004af97c:
    *param_2 = (ulong ******)pppppppuVar20;
    param_2[1] = (ulong ******)pppppppuVar16;
joined_r0x0001004af980:
    if (unaff_x24 != (ulong *******)0x0) {
      _free(unaff_x27);
    }
    goto LAB_1004af70c;
  case 0x60:
code_r0x0001004af98c:
    unaff_x21 = pppppppuStack_2c8;
    unaff_x27 = pppppppuStack_2d0;
    pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_a0 = (ulong *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    pppppppuStack_298 = pppppppuVar26;
    pppppppuStack_280 = pppppppuVar20;
    pppppppuVar16 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
    goto code_r0x0001004af5d4;
  case 0x61:
  case 0x74:
    goto code_r0x0001004af908;
  case 0x62:
    goto code_r0x0001004af97c;
  case 100:
  case 0x6f:
    goto code_r0x0001004af8e0;
  case 0x65:
    goto code_r0x0001004af964;
  case 0x67:
    goto code_r0x0001004af91c;
  case 0x6a:
code_r0x0001004af9dc:
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004afa58:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004afa5c);
    (*pcVar2)();
  case 0x6b:
    goto code_r0x0001004af48c;
  case 0x6c:
    goto code_r0x0001004af4d0;
  case 0x6e:
  case 0x89:
    goto code_r0x0001004af8d0;
  case 0x71:
  case 0x85:
    goto code_r0x0001004af8c0;
  case 0x72:
    goto code_r0x0001004af86c;
  case 0x73:
  case 0x8e:
    goto code_r0x0001004af8f0;
  case 0x75:
    goto code_r0x0001004af8c8;
  case 0x76:
    goto code_r0x0001004af920;
  case 0x77:
    goto code_r0x0001004af89c;
  case 0x78:
    goto code_r0x0001004af910;
  case 0x7a:
    goto code_r0x0001004af874;
  case 0x7b:
    goto code_r0x0001004af8f8;
  case 0x80:
    goto code_r0x0001004af970;
  case 0x81:
  case 200:
    goto code_r0x0001004af430;
  case 0x82:
  case 0xc1:
    goto code_r0x0001004af474;
  case 0x8a:
    goto code_r0x0001004af8e8;
  case 0x8c:
    goto code_r0x0001004af900;
  case 0x8d:
    goto code_r0x0001004af87c;
  case 0x93:
    goto code_r0x0001004af890;
  case 0x96:
    goto code_r0x0001004af950;
  case 0x97:
    goto code_r0x0001004af440;
  case 0x98:
    goto code_r0x0001004af484;
  case 0x9b:
    goto code_r0x0001004af75c;
  case 0x9c:
    goto code_r0x0001004af724;
  case 0x9d:
    goto code_r0x0001004af73c;
  case 0x9e:
code_r0x0001004af6e8:
    unaff_x22 = (ulong *******)0x8000000000000001;
    pppppppuVar16 = pppppppuStack_a0;
  case 0xa6:
  case 0xba:
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = (ulong ******)pppppppuVar16;
    unaff_x27 = pppppppuStack_2d0;
    unaff_x21 = pppppppuStack_2c8;
joined_r0x0001004af708:
    unaff_x24 = (ulong *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
    goto joined_r0x0001004af980;
  case 0x9f:
    goto code_r0x0001004af76c;
  case 0xa1:
    goto code_r0x0001004af744;
  case 0xa2:
    goto code_r0x0001004af79c;
  case 0xa3:
    goto code_r0x0001004af718;
  case 0xa4:
    goto code_r0x0001004af78c;
  case 0xa5:
code_r0x0001004af6c0:
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = (ulong ******)pppppppuStack_a0;
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
    unaff_x21 = pppppppuStack_2c8;
  case 0xe1:
LAB_1004af70c:
    in_OV = SBORROW8((long)unaff_x22,-0x7ffffffffffffffe);
    in_NG = (long)((long)unaff_x22 + 0x7ffffffffffffffe) < 0;
code_r0x0001004af718:
    param_2 = unaff_x21;
    if (in_NG == in_OV) {
joined_r0x0001004af644:
      if (unaff_x22 != (ulong *******)0x0) {
code_r0x0001004af724:
        _free(param_2);
      }
    }
    param_2 = pppppppuVar26 + 4;
code_r0x0001004af72c:
    FUN_100d34830(param_2);
    in_ZR = (byte)pppppppuStack_2c0 == '\x16';
code_r0x0001004af738:
    if (!(bool)in_ZR) {
code_r0x0001004af73c:
      param_2 = (ulong *******)&pppppppuStack_2c0;
code_r0x0001004af740:
      FUN_100e077ec(param_2);
code_r0x0001004af744:
    }
    goto code_r0x0001004af888;
  case 0xa7:
    goto code_r0x0001004af774;
  case 0xa8:
    goto code_r0x0001004af698;
  case 0xa9:
    goto code_r0x0001004af72c;
  case 0xaa:
    goto code_r0x0001004af690;
  case 0xb2:
    goto code_r0x0001004af27c;
  case 0xb3:
    goto code_r0x0001004af348;
  case 0xb4:
    goto code_r0x0001004af16c;
  case 0xb5:
    goto code_r0x0001004af528;
  case 0xb6:
    goto code_r0x0001004af628;
  case 0xb7:
    goto code_r0x0001004af3b0;
  case 0xb9:
  case 0xd0:
    goto code_r0x0001004af220;
  case 0xbb:
    goto code_r0x0001004af104;
  case 0xbc:
    goto code_r0x0001004af1b8;
  case 0xbd:
    goto code_r0x0001004af5cc;
  case 0xbe:
    goto code_r0x0001004af0b4;
  case 0xbf:
  case 0xd6:
    goto code_r0x0001004af2ec;
  case 0xc0:
code_r0x0001004af058:
    pppppppuVar22 = (ulong *******)((long)pppppppuVar22 + 1);
  case 0xe9:
    pppppppuStack_2e8 = pppppppuVar22;
code_r0x0001004af060:
    unaff_x22 = (ulong *******)0x8000000000000001;
    unaff_x24 = (ulong *******)0x8000000000000000;
    pppppppuVar22 = unaff_x25;
    unaff_x27 = pppppppuVar20;
    do {
      unaff_x25 = pppppppuVar22;
      pppppppuVar26 = unaff_x27 + 8;
      bVar19 = *(byte *)unaff_x27;
      pppppppuVar22 = (ulong *******)(ulong)bVar19;
      if (bVar19 == 0x16) break;
      uStack_90._0_1_ = bVar19;
code_r0x0001004af0a4:
      ppppppuVar23 = unaff_x27[2];
      *(ulong *******)((long)unaff_x20 + 0x17) = unaff_x27[3];
      *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar23;
      ppppppuVar23 = *(ulong *******)((long)unaff_x27 + 1);
      unaff_x20[1] = *(ulong *******)((long)unaff_x27 + 9);
      *unaff_x20 = ppppppuVar23;
code_r0x0001004af0b4:
      pppppppuStack_2b8 = (ulong *******)unaff_x27[5];
      pppppppuStack_2c0 = (ulong *******)unaff_x27[4];
      pppppppuStack_2a8 = (ulong *******)unaff_x27[7];
      pppppppuStack_2b0 = (ulong *******)unaff_x27[6];
code_r0x0001004af0bc:
      pppppppuVar20 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      pppppppuVar16 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
      uVar18 = (uint)pppppppuVar22;
      ppppppuVar23 = ppppppuStack_78;
      if (uVar18 < 0xd) {
        if (uVar18 == 1) {
          uVar18 = 1;
          if (uStack_90._1_1_ != '\x01') {
            uVar18 = 2;
          }
          unaff_w28 = 0;
          if (uStack_90._1_1_ != '\0') {
            unaff_w28 = uVar18;
          }
        }
        else {
          if (uVar18 != 4) {
            if (uVar18 == 0xc) {
              if (ppppppuStack_78 == (ulong ******)0x6) {
                pppppppuVar22 = (ulong *******)(ulong)*(uint *)pppppppuVar16;
                ppppppuVar23 = (ulong ******)0x61726170;
code_r0x0001004af248:
                unaff_w28 = 1;
                if ((int)pppppppuVar22 != (int)ppppppuVar23 ||
                    *(short *)((long)pppppppuVar16 + 4) != 0x736d) {
                  unaff_w28 = 2;
                }
code_r0x0001004af268:
              }
              else {
                in_ZR = ppppppuStack_78 == (ulong ******)0x2;
code_r0x0001004af0f0:
                if ((bool)in_ZR) {
                  in_ZR = *(short *)pppppppuVar16 == 0x6469;
                  pppppppuVar22 = (ulong *******)0x2;
code_r0x0001004af104:
                  unaff_w28 = (uint)pppppppuVar22;
                  if ((bool)in_ZR) {
                    unaff_w28 = 0;
                  }
                }
                else {
                  unaff_w28 = 2;
                }
              }
              goto joined_r0x0001004af108;
            }
code_r0x0001004afa5c:
            unaff_x21 = pppppppuStack_2c8;
            unaff_x27 = pppppppuStack_2d0;
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_298 = pppppppuVar26;
            pppppppuVar16 =
                 (ulong *******)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b20f020);
            pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
            goto code_r0x0001004af5d4;
          }
          uVar18 = 1;
          if (pppppppuVar20 != (ulong *******)0x1) {
            uVar18 = 2;
          }
          unaff_w28 = 0;
          if (pppppppuVar20 != (ulong *******)0x0) {
            unaff_w28 = uVar18;
          }
code_r0x0001004af16c:
        }
code_r0x0001004af2f4:
        FUN_100e077ec(&uStack_90);
      }
      else {
code_r0x0001004af110:
        if ((int)pppppppuVar22 == 0xd) {
code_r0x0001004af1b8:
          if (pppppppuVar16 == (ulong *******)0x6) {
            pppppppuVar22 = (ulong *******)(ulong)(*(uint *)pppppppuVar20 ^ 0x61726170);
code_r0x0001004af2d8:
            in_ZR = (int)pppppppuVar22 == 0 && *(short *)((long)pppppppuVar20 + 4) == 0x736d;
code_r0x0001004af2ec:
            unaff_w28 = 1;
            if (!(bool)in_ZR) {
              unaff_w28 = 2;
            }
          }
          else {
            if (pppppppuVar16 != (ulong *******)0x2) goto code_r0x0001004af2c0;
            unaff_w28 = 2;
            if (*(short *)pppppppuVar20 == 0x6469) {
              unaff_w28 = 0;
            }
          }
          goto code_r0x0001004af2f4;
        }
        in_ZR = (int)pppppppuVar22 == 0xe;
code_r0x0001004af11c:
        if (!(bool)in_ZR) {
          if ((int)pppppppuVar22 != 0xf) goto code_r0x0001004afa5c;
          if (pppppppuVar16 == (ulong *******)0x6) {
code_r0x0001004af270:
            if (*(char *)pppppppuVar20 == 'p') {
code_r0x0001004af27c:
              if (*(char *)((long)pppppppuVar20 + 1) == 'a') {
code_r0x0001004af288:
                if ((*(char *)((long)pppppppuVar20 + 2) == 'r') &&
                   (*(char *)((long)pppppppuVar20 + 3) == 'a')) {
                  pppppppuVar22 = (ulong *******)(ulong)*(byte *)((long)pppppppuVar20 + 4);
code_r0x0001004af2a4:
                  if (((int)pppppppuVar22 == 0x6d) && (*(char *)((long)pppppppuVar20 + 5) == 's')) {
                    unaff_w28 = 1;
                    goto code_r0x0001004af2f4;
                  }
                }
              }
            }
          }
          else if ((pppppppuVar16 == (ulong *******)0x2) && (*(char *)pppppppuVar20 == 'i')) {
            in_ZR = *(char *)((long)pppppppuVar20 + 1) == 'd';
code_r0x0001004af14c:
            if ((bool)in_ZR) {
              unaff_w28 = 0;
              goto code_r0x0001004af2f4;
            }
          }
code_r0x0001004af2c0:
          unaff_w28 = 2;
          goto code_r0x0001004af2f4;
        }
        in_ZR = ppppppuVar23 == (ulong ******)0x6;
code_r0x0001004af174:
        if ((bool)in_ZR) {
          in_ZR = *(char *)pppppppuVar16 == 'p';
code_r0x0001004af1e8:
          if ((bool)in_ZR) {
            pppppppuVar22 = (ulong *******)(ulong)*(byte *)((long)pppppppuVar16 + 1);
code_r0x0001004af1f0:
            if ((int)pppppppuVar22 == 0x61) {
              pppppppuVar22 = (ulong *******)(ulong)*(byte *)((long)pppppppuVar16 + 2);
code_r0x0001004af1fc:
              if ((((int)pppppppuVar22 == 0x72) && (*(char *)((long)pppppppuVar16 + 3) == 'a')) &&
                 (*(char *)((long)pppppppuVar16 + 4) == 'm')) {
                pppppppuVar22 = (ulong *******)(ulong)*(byte *)((long)pppppppuVar16 + 5);
code_r0x0001004af220:
                if ((int)pppppppuVar22 == 0x73) {
                  unaff_w28 = 1;
                  goto joined_r0x0001004af108;
                }
              }
            }
          }
code_r0x0001004af230:
          unaff_w28 = 2;
        }
        else {
          in_ZR = ppppppuVar23 == (ulong ******)0x2;
code_r0x0001004af17c:
          if (!(bool)in_ZR) goto code_r0x0001004af230;
          in_ZR = *(char *)pppppppuVar16 == 'i';
code_r0x0001004af188:
          if ((!(bool)in_ZR) || (*(char *)((long)pppppppuVar16 + 1) != 'd'))
          goto code_r0x0001004af230;
          unaff_w28 = 0;
        }
joined_r0x0001004af108:
        if (pppppppuVar20 != (ulong *******)0x0) {
          _free();
        }
      }
      if ((unaff_w28 & 0xff) == 0) {
        if (unaff_x22 != (ulong *******)0x8000000000000001) {
          pppppppuVar20 = (ulong *******)((long)unaff_x25 + 1);
          goto code_r0x0001004af98c;
        }
        pppppppuVar20 = (ulong *******)((ulong)pppppppuStack_2c0 & 0xff);
code_r0x0001004af384:
        pppppppuVar22 = (ulong *******)0x16;
code_r0x0001004af388:
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,(char)pppppppuVar22);
        if ((int)pppppppuVar20 == 0x16) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004afa58;
        }
        ppppppuVar23 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar23;
        uVar21 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
        uStack_90._0_1_ = (byte)pppppppuVar20;
        pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004af3b0:
        func_0x00010135ba2c(pppppppuVar16,&uStack_90);
code_r0x0001004af3b8:
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar26;
          goto code_r0x0001004af6e8;
        }
        pppppppuStack_2c8 = pppppppuStack_a0;
        pppppppuVar20 = pppppppuStack_98;
        unaff_x22 = pppppppuStack_a8;
code_r0x0001004af3d0:
        pppppppuVar25 = pppppppuVar26;
        pppppppuStack_2d8 = pppppppuVar20;
      }
      else if ((unaff_w28 & 0xff) == 1) {
        if (unaff_x24 != (ulong *******)0x8000000000000000) {
          pppppppuVar20 = (ulong *******)((long)unaff_x25 + 1);
          goto code_r0x0001004af934;
        }
        pppppppuVar20 = (ulong *******)((ulong)pppppppuStack_2c0 & 0xff);
code_r0x0001004af32c:
        bVar19 = (byte)pppppppuVar20;
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        in_ZR = (int)pppppppuVar20 == 0x16;
code_r0x0001004af338:
        if ((bool)in_ZR) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004afa58;
        }
        ppppppuVar23 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar23;
        pppppppuVar28 = *(ulong ********)((long)unaff_x21 + 0x17);
        ppppppuVar17 = *(ulong *******)((long)unaff_x21 + 0xf);
code_r0x0001004af348:
        uStack_90._0_1_ = bVar19;
        *(ulong ********)((long)unaff_x20 + 0x17) = pppppppuVar28;
        *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar17;
        func_0x00010135b1d8(&pppppppuStack_a8,&uStack_90);
code_r0x0001004af360:
        unaff_x24 = pppppppuStack_a8;
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000000) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar26;
          goto code_r0x0001004af6c0;
        }
code_r0x0001004af070:
        pppppppuStack_2d0 = pppppppuStack_a0;
        pppppppuStack_2e0 = pppppppuStack_98;
        pppppppuVar25 = pppppppuVar26;
      }
      else {
code_r0x0001004af3d8:
        bVar19 = (byte)pppppppuStack_2c0;
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar19 == 0x16) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar26;
          goto code_r0x0001004af9dc;
        }
        ppppppuVar23 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar23;
code_r0x0001004af3f4:
        uStack_90._0_1_ = bVar19;
        uVar21 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
        pppppppuVar25 = pppppppuVar26;
code_r0x0001004af400:
        FUN_100e077ec(&uStack_90);
      }
      pppppppuVar16 = unaff_x27 + 8;
      pppppppuVar22 = (ulong *******)((long)unaff_x25 + 1);
      unaff_x25 = pppppppuStack_2e8;
      pppppppuVar26 = unaff_x23;
      unaff_x27 = pppppppuVar25;
    } while (pppppppuVar16 != unaff_x23);
code_r0x0001004af584:
    unaff_x21 = pppppppuStack_2c8;
    unaff_x27 = pppppppuStack_2d0;
    pppppppuStack_298 = pppppppuVar26;
    pppppppuStack_280 = unaff_x25;
    if (unaff_x22 == (ulong *******)0x8000000000000001) {
code_r0x0001004af5a0:
      pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
      pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
      pppppppuStack_a0 = (ulong *******)0x2;
      pppppppuVar20 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004af5b4:
      uStack_90._0_1_ = (byte)pppppppuVar20;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar20 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar20 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x22 = (ulong *******)0x8000000000000001;
      pcVar15 = s_missing_field_____108ac28f7;
code_r0x0001004af5cc:
      pppppppuVar16 = (ulong *******)thunk_FUN_108856088(pcVar15,&uStack_90);
code_r0x0001004af5d4:
      pppppppuVar20 = (ulong *******)0x6e;
code_r0x0001004af5d8:
      *param_2 = (ulong ******)((ulong)pppppppuVar20 | 0x8000000000000000);
      param_2[1] = (ulong ******)pppppppuVar16;
code_r0x0001004af5e0:
      goto joined_r0x0001004af708;
    }
    if (unaff_x24 == (ulong *******)0x8000000000000000) {
      pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_a0 = (ulong *******)0x6;
      pppppppuVar20 = (ulong *******)&pppppppuStack_a8;
      pppppppuVar22 = (ulong *******)&DAT_100c7b3a0;
code_r0x0001004af61c:
      uStack_90._0_1_ = (byte)pppppppuVar20;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar20 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar20 >> 0x10);
      uStack_88 = SUB81(pppppppuVar22,0);
      uStack_87 = (undefined7)((ulong)pppppppuVar22 >> 8);
      pcVar15 = s_missing_field_____108ac28f7;
code_r0x0001004af628:
      ppppppuVar23 = (ulong ******)thunk_FUN_108856088(pcVar15,&uStack_90);
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = ppppppuVar23;
      unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
      pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
      param_2 = unaff_x21;
      goto joined_r0x0001004af644;
    }
code_r0x0001004af64c:
    unaff_x20 = (ulong *******)0x800000000000006e;
    *param_2 = (ulong ******)0x8000000000000029;
    param_2[1] = (ulong ******)unaff_x24;
    param_2[2] = (ulong ******)unaff_x27;
    param_2[3] = (ulong ******)pppppppuStack_2e0;
    param_2[4] = (ulong ******)unaff_x22;
    param_2[5] = (ulong ******)unaff_x21;
    param_2[6] = (ulong ******)pppppppuStack_2d8;
    _memcpy(&ppppppuStack_270,param_2,0x1c0);
code_r0x0001004af67c:
    pppppppuVar16 = (ulong *******)&pppppppuStack_2a0;
code_r0x0001004af684:
    FUN_100d34830(pppppppuVar16);
    if (unaff_x23 != pppppppuVar26) {
code_r0x0001004af690:
      pppppppuVar20 = (ulong *******)((ulong)((long)unaff_x23 - (long)pppppppuVar26) >> 6);
code_r0x0001004af698:
      uStack_90._0_1_ = (byte)unaff_x25;
      uStack_90._1_1_ = (char)((ulong)unaff_x25 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)unaff_x25 >> 0x10);
      pppppppuVar16 =
           (ulong *******)
           thunk_FUN_1087e422c((char *)((long)pppppppuVar20 + (long)unaff_x25),&uStack_90,
                               &UNK_10b23a190);
      goto code_r0x0001004af920;
    }
    goto code_r0x0001004af888;
  case 0xc2:
    goto code_r0x0001004af684;
  case 0xc3:
    goto code_r0x0001004af7f0;
  case 0xc4:
    goto code_r0x0001004af4e0;
  case 0xc5:
    goto code_r0x0001004af584;
  case 0xc9:
    goto code_r0x0001004af288;
  case 0xca:
    goto code_r0x0001004af360;
  case 0xcb:
    goto code_r0x0001004af188;
  case 0xcc:
    goto code_r0x0001004af4dc;
  case 0xcd:
    goto code_r0x0001004af554;
  case 0xce:
    goto code_r0x0001004af3d0;
  case 0xcf:
    goto code_r0x0001004af61c;
  case 0xd1:
    goto code_r0x0001004af5b4;
  case 0xd2:
    goto code_r0x0001004af11c;
  case 0xd3:
    goto code_r0x0001004af1f0;
  case 0xd4:
    goto code_r0x0001004af524;
  case 0xd5:
    goto code_r0x0001004af0bc;
  case 0xd7:
    goto code_r0x0001004af060;
  case 0xd8:
    goto code_r0x0001004af4a8;
  case 0xda:
    goto code_r0x0001004af44c;
  case 0xdb:
    goto code_r0x0001004af2a4;
  case 0xdc:
    goto code_r0x0001004af388;
  case 0xdd:
    goto code_r0x0001004af17c;
  case 0xde:
    goto code_r0x0001004af504;
  case 0xdf:
    goto code_r0x0001004af5e0;
  case 0xe0:
    goto code_r0x0001004af3f4;
  case 0xe2:
    goto code_r0x0001004af248;
  case 0xe3:
    goto code_r0x0001004af67c;
  case 0xe4:
    goto code_r0x0001004af110;
  case 0xe5:
    goto code_r0x0001004af1e8;
  case 0xe6:
    goto code_r0x0001004af574;
  case 0xe7:
    goto code_r0x0001004af0a4;
  case 0xe8:
    goto code_r0x0001004af32c;
  case 0xea:
    goto code_r0x0001004af4bc;
  case 0xeb:
    goto code_r0x0001004af64c;
  case 0xed:
    goto code_r0x0001004af2d8;
  case 0xee:
    goto code_r0x0001004af174;
  case 0xef:
    goto code_r0x0001004af1fc;
  case 0xf0:
    goto code_r0x0001004af070;
  case 0xf1:
  case 0xfa:
    goto code_r0x0001004af338;
  case 0xf2:
    goto code_r0x0001004af3b8;
  case 0xf3:
    goto code_r0x0001004af268;
  case 0xf4:
    goto code_r0x0001004af470;
  case 0xf5:
    goto code_r0x0001004af0f0;
  case 0xf8:
    goto code_r0x0001004af3d8;
  case 0xf9:
    goto code_r0x0001004af270;
  case 0xfb:
    goto code_r0x0001004af14c;
  case 0xfd:
    goto code_r0x0001004af510;
  case 0xfe:
    goto code_r0x0001004af384;
  case 0xff:
    goto code_r0x0001004af5d8;
  }
  bVar19 = 1;
code_r0x0001004af860:
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar19);
code_r0x0001004af864:
  param_4 = &UNK_10b21a730;
code_r0x0001004af86c:
  pppppppuVar16 = &ppppppuStack_270;
code_r0x0001004af870:
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004af874:
  pppppppuVar16 = (ulong *******)FUN_107c05dcc(pppppppuVar16,param_3,param_4);
  pppppppuVar20 = (ulong *******)0x6e;
code_r0x0001004af87c:
  pppppppuVar20 = (ulong *******)((ulong)pppppppuVar20 | 0x8000000000000000);
code_r0x0001004af880:
  *param_2 = (ulong ******)pppppppuVar20;
  param_2[1] = (ulong ******)pppppppuVar16;
code_r0x0001004af888:
code_r0x0001004af890:
code_r0x0001004af894:
code_r0x0001004af898:
code_r0x0001004af89c:
code_r0x0001004af8a0:
  return;
code_r0x0001004af858:
  bVar19 = 2;
  pppppppuStack_268 = pppppppuVar20;
  goto code_r0x0001004af860;
}

