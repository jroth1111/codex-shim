
/* WARNING: Type propagation algorithm not settling */

void FUN_100450e74(undefined1 param_1 [16],byte *******param_2,byte *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 in_ZR;
  byte *******pppppppbVar11;
  byte ******ppppppbVar12;
  uint uVar13;
  byte bVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  byte ******ppppppbVar22;
  byte *******unaff_x19;
  byte *******pppppppbVar23;
  byte *******unaff_x20;
  undefined8 *puVar24;
  byte *******unaff_x21;
  undefined8 *puVar25;
  byte *******unaff_x22;
  byte ******unaff_x23;
  byte *******unaff_x24;
  long lVar26;
  byte *******unaff_x25;
  byte *******unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined8 unaff_x30;
  byte *******pppppppbVar28;
  byte abStack_344 [76];
  byte *******pppppppbStack_2f8;
  byte *******pppppppbStack_2f0;
  byte *******pppppppbStack_2e8;
  byte *******pppppppbStack_2e0;
  byte *******pppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte ******ppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  byte ******ppppppbStack_2a0;
  byte *******pppppppbStack_298;
  byte *******pppppppbStack_290;
  byte ******ppppppbStack_280;
  byte *******pppppppbStack_278;
  byte *******pppppppbStack_270;
  byte ******ppppppbStack_268;
  byte *******pppppppbStack_c0;
  byte ******ppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte ******ppppppbStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte ******ppppppbStack_78;
  
  ppppppbVar22 = param_1._8_8_;
  pppppppbVar28 = param_1._0_8_;
  puVar27 = &stack0xfffffffffffffff0;
  pbVar7 = abStack_344 + 0x44;
  pppppppbVar23 = (byte *******)&bStack_90;
  bVar14 = *(byte *)param_3;
  pppppppbVar15 = (byte *******)(ulong)bVar14;
  pppppppbVar20 = (byte *******)&UNK_108c99020;
  pbVar8 = abStack_344 + 0x44;
  pbVar9 = abStack_344 + 0x44;
  pbVar10 = abStack_344 + 0x44;
  pbVar6 = abStack_344 + 0x44;
  pbVar5 = abStack_344 + 0x44;
  pppppppbVar11 = param_2;
  pppppppbVar16 = pppppppbVar15;
  pppppppbVar21 = pppppppbVar20;
  switch(bVar14) {
  case 0:
  case 0x4d:
    bVar14 = *(byte *)((long)param_3 + 1);
  case 0x1a:
  case 0x2d:
  case 0x6f:
    ppppppbStack_280 = (byte ******)((ulong)CONCAT61(ppppppbStack_280._2_6_,bVar14) << 8);
code_r0x0001004516e4:
    goto code_r0x000100451738;
  case 1:
    pppppppbVar15 = (byte *******)(ulong)*(byte *)((long)param_3 + 1);
    break;
  case 2:
  case 0x50:
    pppppppbVar15 = (byte *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x21:
    break;
  case 3:
    pppppppbVar15 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x2c:
  case 0x6e:
  case 0xa5:
    break;
  case 4:
    pppppppbVar15 = (byte *******)param_3[1];
    break;
  case 5:
  case 0xd6:
    pppppppbVar15 = (byte *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0x66:
  case 0xa6:
    pppppppbStack_278 = pppppppbVar15;
    goto code_r0x000100451730;
  case 6:
  case 0xc0:
  case 0xea:
    pppppppbVar15 = (byte *******)(long)*(short *)((long)param_3 + 2);
  case 0xfe:
    pppppppbStack_278 = pppppppbVar15;
code_r0x000100451730:
    bVar14 = 2;
    goto code_r0x000100451734;
  case 7:
    pppppppbStack_278 = (byte *******)(long)*(int *)((long)param_3 + 4);
    goto code_r0x000100451730;
  case 8:
  case 0xd1:
    pppppppbStack_278 = (byte *******)param_3[1];
    goto code_r0x000100451730;
  case 9:
  case 0x2e:
  case 0x70:
  case 0xa8:
    pppppppbVar28 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x52:
    pppppppbVar28 = (byte *******)(double)SUB84(pppppppbVar28,0);
code_r0x0001004516ac:
code_r0x00010045171c:
    pppppppbStack_278 = pppppppbVar28;
code_r0x000100451720:
    bVar14 = 3;
code_r0x000100451724:
    goto code_r0x000100451734;
  case 10:
  case 0x18:
  case 0xbe:
    pppppppbVar28 = (byte *******)param_3[1];
    goto code_r0x00010045171c;
  case 0xb:
    param_3 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
    pbVar6 = &stack0xffffffffffffffa0;
    pppppppbVar23 = unaff_x19;
    puVar27 = unaff_x29;
  case 0x30:
  case 0x72:
    pbVar7 = pbVar6 + 0x60;
code_r0x000100451670:
    *(byte ********)(pbVar7 + -0x20) = unaff_x20;
    *(byte ********)(pbVar7 + -0x18) = pppppppbVar23;
    *(undefined1 **)(pbVar7 + -0x10) = puVar27;
    *(undefined8 *)(pbVar7 + -8) = unaff_x30;
    *(undefined4 *)(pbVar7 + -0x44) = 0;
    uVar13 = (uint)param_3;
    if (uVar13 < 0x80) {
      pbVar7[-0x44] = (byte)param_3;
      uVar17 = 1;
    }
    else {
      bVar14 = (byte)param_3 & 0x3f | 0x80;
      if (uVar13 < 0x800) {
        pbVar7[-0x44] = (byte)(uVar13 >> 6) | 0xc0;
        pbVar7[-0x43] = bVar14;
        uVar17 = 2;
      }
      else {
        bVar1 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        if (uVar13 < 0x10000) {
          pbVar7[-0x44] = (byte)(uVar13 >> 0xc) | 0xe0;
          pbVar7[-0x43] = bVar1;
          pbVar7[-0x42] = bVar14;
          uVar17 = 3;
        }
        else {
          pbVar7[-0x44] = (byte)(uVar13 >> 0x12) | 0xf0;
          pbVar7[-0x43] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
          pbVar7[-0x42] = bVar1;
          pbVar7[-0x41] = bVar14;
          uVar17 = 4;
        }
      }
    }
    *(byte **)(pbVar7 + -0x38) = pbVar7 + -0x44;
    *(undefined8 *)(pbVar7 + -0x30) = uVar17;
    pbVar7[-0x40] = 5;
    ppppppbVar22 = (byte ******)func_0x000108a4a50c(pbVar7 + -0x40,pbVar7 + -0x21,&UNK_10b2195d0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar22;
    return;
  case 0xc:
    param_3 = param_3 + 1;
  case 0x26:
    pbVar8 = &stack0xffffffffffffffa0;
    puVar27 = unaff_x29;
code_r0x00010045168c:
    unaff_x20 = *(byte ********)(pbVar8 + 0x40);
    pppppppbVar23 = *(byte ********)(pbVar8 + 0x48);
    unaff_x22 = *(byte ********)(pbVar8 + 0x30);
    unaff_x21 = *(byte ********)(pbVar8 + 0x38);
    pbVar9 = pbVar8;
code_r0x000100451698:
    pbVar10 = pbVar9;
code_r0x00010045169c:
    *(byte ********)(pbVar10 + 0x30) = unaff_x22;
    *(byte ********)(pbVar10 + 0x38) = unaff_x21;
    *(byte ********)(pbVar10 + 0x40) = unaff_x20;
    *(byte ********)(pbVar10 + 0x48) = pppppppbVar23;
    *(undefined1 **)(pbVar10 + 0x50) = puVar27;
    *(undefined8 *)(pbVar10 + 0x58) = unaff_x30;
    ppppppbVar22 = param_3[1];
    ppppppbVar12 = param_3[2];
    *(byte *******)(pbVar10 + 0x18) = ppppppbVar22;
    *(byte *******)(pbVar10 + 0x20) = ppppppbVar12;
    pbVar10[0x10] = 5;
    ppppppbVar12 = (byte ******)func_0x000108a4a50c(pbVar10 + 0x10,pbVar10 + 0x2f,&UNK_10b2195d0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar12;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar22);
    }
    return;
  case 0xd:
  case 0x46:
  case 0xd4:
    pppppppbVar15 = (byte *******)param_3[1];
    pppppppbVar20 = (byte *******)param_3[2];
  case 0x32:
  case 0x74:
    pppppppbStack_278 = pppppppbVar15;
    pppppppbStack_270 = pppppppbVar20;
code_r0x000100451708:
    bVar14 = 5;
code_r0x00010045170c:
    goto code_r0x000100451734;
  case 0xe:
    param_3 = param_3 + 1;
    pbVar5 = &stack0xffffffffffffffa0;
    pppppppbVar23 = unaff_x19;
    puVar27 = unaff_x29;
  case 0x37:
  case 0x79:
    *(byte ********)(pbVar5 + 0x30) = unaff_x22;
    *(byte ********)(pbVar5 + 0x38) = unaff_x21;
    *(byte ********)(pbVar5 + 0x40) = unaff_x20;
    *(byte ********)(pbVar5 + 0x48) = pppppppbVar23;
    *(undefined1 **)(pbVar5 + 0x50) = puVar27;
    *(undefined8 *)(pbVar5 + 0x58) = unaff_x30;
    ppppppbVar22 = param_3[1];
    ppppppbVar12 = param_3[2];
    *(byte *******)(pbVar5 + 0x18) = ppppppbVar22;
    *(byte *******)(pbVar5 + 0x20) = ppppppbVar12;
    pbVar5[0x10] = 6;
    ppppppbVar12 = (byte ******)func_0x000108a4a50c(pbVar5 + 0x10,pbVar5 + 0x2f,&UNK_10b2195d0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar12;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar22);
    }
    return;
  case 0xf:
    pppppppbVar15 = (byte *******)param_3[1];
    pppppppbVar20 = (byte *******)param_3[2];
  case 0x2f:
  case 0x71:
    bVar14 = 6;
    pppppppbStack_278 = pppppppbVar15;
    pppppppbStack_270 = pppppppbVar20;
code_r0x0001004516c4:
    goto code_r0x000100451734;
  case 0x10:
    bVar14 = 8;
    goto code_r0x000100451734;
  default:
    pppppppbVar11 = (byte *******)param_3[1];
    pppppppbStack_278 = (byte *******)pppppppbVar11[1];
    ppppppbStack_280 = *pppppppbVar11;
    ppppppbStack_268 = pppppppbVar11[3];
    pppppppbStack_270 = (byte *******)pppppppbVar11[2];
    func_0x000107c048b8(param_2,&ppppppbStack_280);
  case 0xad:
code_r0x0001004512fc:
code_r0x000100451304:
code_r0x000100451308:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppbVar11);
    return;
  case 0x12:
  case 0x1c:
  case 0x9f:
    bVar14 = 7;
  case 0x61:
    goto code_r0x000100451734;
  case 0x13:
    unaff_x20 = (byte *******)param_3[1];
  case 0x3f:
  case 0x81:
    pppppppbVar11 = unaff_x20;
    pppppppbStack_278 = (byte *******)pppppppbVar11[1];
    ppppppbStack_280 = *pppppppbVar11;
    ppppppbStack_268 = pppppppbVar11[3];
    pppppppbStack_270 = (byte *******)pppppppbVar11[2];
    func_0x000107c053b0(param_2,&ppppppbStack_280);
    goto code_r0x0001004512fc;
  case 0x14:
    unaff_x23 = param_3[1];
    unaff_x20 = (byte *******)param_3[2];
  case 0x40:
  case 0x82:
    unaff_x26 = (byte *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppbStack_2b0 = (byte *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppbStack_2d0 = unaff_x20;
    pppppppbStack_2c8 = unaff_x20;
    ppppppbStack_2c0 = unaff_x23;
    pppppppbStack_2b8 = unaff_x24;
    if (unaff_x26 == (byte *******)0x0) {
code_r0x000100451348:
      param_3 = (byte *******)&UNK_10b22f000;
code_r0x00010045134c:
      param_3 = param_3 + 0xbf;
      param_4 = &UNK_10b20a590;
      pppppppbVar11 = (byte *******)0x0;
code_r0x00010045135c:
      pppppppbStack_a8 = (byte *******)thunk_FUN_1087e422c(pppppppbVar11,param_3,param_4);
code_r0x000100451364:
      *param_2 = (byte ******)0x800000000000006e;
      param_2[1] = (byte ******)pppppppbStack_a8;
      param_2 = unaff_x20;
code_r0x000100451370:
      lVar26 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar26 = lVar26 + -1, lVar26 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (byte ******)0x0) {
code_r0x0001004513a0:
        _free(param_2);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppbVar15 = (byte *******)(ulong)*(byte *)unaff_x20;
      pppppppbStack_2c8 = unaff_x21;
code_r0x000100451340:
      if ((int)pppppppbVar15 == 0x16) goto code_r0x000100451348;
      uVar17 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      cStack_8f = (char)uVar17;
      uStack_8e = (undefined6)((ulong)uVar17 >> 8);
      uStack_88 = (undefined1)((ulong)uVar17 >> 0x38);
      ppppppbStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppbStack_2b0 = (byte *******)0x1;
      bStack_90 = (byte)pppppppbVar15;
      pppppppbVar11 = (byte *******)&pppppppbStack_b0;
      param_3 = (byte *******)&bStack_90;
code_r0x0001004513d4:
      func_0x00010135ba2c(pppppppbVar11,param_3);
      if (pppppppbStack_b0 == (byte *******)0x8000000000000001) goto code_r0x000100451364;
      in_ZR = unaff_x26 == (byte *******)0x1;
      unaff_x22 = pppppppbStack_a8;
      unaff_x25 = pppppppbStack_b0;
code_r0x0001004513ec:
      if ((bool)in_ZR) {
code_r0x000100451408:
        param_3 = (byte *******)&UNK_10b22f5f8;
        param_4 = &UNK_10b20a590;
code_r0x000100451418:
        pppppppbVar11 = (byte *******)thunk_FUN_1087e422c(1,param_3,param_4);
code_r0x000100451420:
        *param_2 = (byte ******)0x800000000000006e;
        param_2[1] = (byte ******)pppppppbVar11;
        param_2 = unaff_x20;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x000100451370;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar14 = *(byte *)(unaff_x20 + 4);
      unaff_x26 = pppppppbStack_a0;
      pppppppbStack_2c8 = unaff_x21;
      if (bVar14 == 0x16) goto code_r0x000100451408;
code_r0x000100451780:
      ppppppbVar22 = *(byte *******)((long)unaff_x20 + 0x29);
      pppppppbVar28 = *(byte ********)((long)unaff_x20 + 0x21);
code_r0x000100451784:
      uStack_87 = SUB87(ppppppbVar22,0);
      cStack_8f = (char)pppppppbVar28;
      uStack_8e = (undefined6)((ulong)pppppppbVar28 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppbVar28 >> 0x38);
code_r0x000100451788:
      ppppppbVar22 = unaff_x20[7];
      pppppppbVar28 = (byte *******)unaff_x20[6];
code_r0x00010045178c:
      uStack_80 = SUB81(pppppppbVar28,0);
      uStack_7f = (undefined7)((ulong)pppppppbVar28 >> 8);
      ppppppbStack_78 = ppppppbVar22;
code_r0x000100451790:
      pppppppbVar20 = (byte *******)0x2;
code_r0x000100451794:
      pppppppbStack_2b0 = pppppppbVar20;
code_r0x000100451798:
      bStack_90 = bVar14;
code_r0x00010045179c:
      pppppppbVar11 = (byte *******)&pppppppbStack_b0;
code_r0x0001004517a0:
      param_3 = (byte *******)&bStack_90;
code_r0x0001004517a4:
      func_0x000101333138(pppppppbVar11,param_3);
code_r0x0001004517a8:
      pppppppbVar11 = pppppppbStack_a8;
      pppppppbVar15 = pppppppbStack_b0;
code_r0x0001004517ac:
      pppppppbVar20 = (byte *******)0x8000000000000001;
code_r0x0001004517b0:
      in_ZR = pppppppbVar15 == pppppppbVar20;
code_r0x0001004517b4:
      if ((bool)in_ZR) goto code_r0x000100451420;
      pppppppbVar23 = (byte *******)0x6e;
code_r0x0001004517bc:
      pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 & 0xffffffffffff | 0x8000000000000000);
code_r0x0001004517c0:
      pppppppbVar28 = pppppppbStack_a0;
      ppppppbVar22 = ppppppbStack_98;
code_r0x0001004517c4:
      param_2[7] = ppppppbVar22;
      param_2[6] = (byte ******)pppppppbVar28;
      pppppppbVar20 = (byte *******)((long)pppppppbVar23 + -0xe);
code_r0x0001004517cc:
      *param_2 = (byte ******)pppppppbVar20;
      param_2[1] = (byte ******)unaff_x25;
code_r0x0001004517d0:
      param_2[2] = (byte ******)unaff_x22;
      param_2[3] = (byte ******)unaff_x26;
code_r0x0001004517d4:
      param_2[4] = (byte ******)pppppppbVar15;
      param_2[5] = (byte ******)pppppppbVar11;
code_r0x0001004517d8:
      pppppppbVar11 = &ppppppbStack_280;
code_r0x0001004517dc:
      param_4 = (undefined *)0x1c0;
      param_3 = param_2;
code_r0x0001004517e4:
      _memcpy(pppppppbVar11,param_3,param_4);
code_r0x0001004517e8:
      pppppppbVar11 = (byte *******)&pppppppbStack_2d0;
code_r0x0001004517ec:
      pppppppbVar11 = (byte *******)FUN_100fbc738(pppppppbVar11);
code_r0x0001004517f0:
      if (pppppppbVar11 != (byte *******)0x0) {
code_r0x0001004517f4:
        *param_2 = (byte ******)pppppppbVar23;
        param_2[1] = (byte ******)pppppppbVar11;
code_r0x0001004517f8:
        param_2 = &ppppppbStack_280;
code_r0x0001004517fc:
        FUN_100e44f40(param_2);
code_r0x000100451800:
      }
    }
    goto LAB_100451758;
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
  case 0xf1:
    ppppppbStack_2a0 = param_3[1];
    pppppppbStack_2b0 = (byte *******)param_3[2];
    ppppppbVar22 = param_3[3];
    pppppppbVar20 = pppppppbStack_2b0 + (long)ppppppbVar22 * 8;
    unaff_x21 = (byte *******)&pppppppbStack_2d0;
    pppppppbStack_2d0 = (byte *******)CONCAT71(pppppppbStack_2d0._1_7_,0x16);
    pppppppbStack_290 = (byte *******)0x0;
    pppppppbStack_2a8 = pppppppbStack_2b0;
    pppppppbStack_298 = pppppppbVar20;
    if (ppppppbVar22 == (byte ******)0x0) goto code_r0x0001004513a8;
    unaff_x25 = (byte *******)0x0;
    puVar24 = (undefined8 *)((ulong)&bStack_90 | 1);
    puVar25 = (undefined8 *)((ulong)unaff_x21 | 1);
    pppppppbStack_2f8 = (byte *******)(((long)ppppppbVar22 * 0x40 - 0x40U >> 6) + 1);
    unaff_x22 = (byte *******)0x8000000000000001;
    unaff_x24 = (byte *******)0x8000000000000001;
    pppppppbVar11 = pppppppbStack_2b0;
    pppppppbStack_2f0 = param_2;
    do {
      unaff_x26 = pppppppbVar11 + 8;
      bVar14 = *(byte *)pppppppbVar11;
      pppppppbVar16 = unaff_x25;
      pppppppbVar15 = unaff_x26;
      if (bVar14 == 0x16) break;
      ppppppbVar22 = pppppppbVar11[2];
      *(byte *******)((long)puVar24 + 0x17) = pppppppbVar11[3];
      *(byte *******)((long)puVar24 + 0xf) = ppppppbVar22;
      uVar17 = *(undefined8 *)((long)pppppppbVar11 + 1);
      puVar24[1] = *(undefined8 *)((long)pppppppbVar11 + 9);
      *puVar24 = uVar17;
      pppppppbStack_2c8 = (byte *******)pppppppbVar11[5];
      pppppppbStack_2d0 = (byte *******)pppppppbVar11[4];
      pppppppbStack_2b8 = (byte *******)pppppppbVar11[7];
      ppppppbStack_2c0 = pppppppbVar11[6];
      piVar2 = (int *)CONCAT71(uStack_87,uStack_88);
      piVar3 = (int *)CONCAT71(uStack_7f,uStack_80);
      bStack_90 = bVar14;
      if (bVar14 < 0xd) {
        if (bVar14 == 1) {
          iVar19 = 1;
          if (cStack_8f != '\x01') {
            iVar19 = 2;
          }
          iVar18 = 0;
          if (cStack_8f != '\0') {
            iVar18 = iVar19;
          }
        }
        else {
          if (bVar14 != 4) {
            if (bVar14 == 0xc) {
              if (ppppppbStack_78 == (byte ******)0x6) {
                iVar18 = 1;
                if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                  iVar18 = 2;
                }
              }
              else if (ppppppbStack_78 == (byte ******)0x2) {
                iVar18 = 2;
                if ((short)*piVar3 == 0x6469) {
                  iVar18 = 0;
                }
              }
              else {
                iVar18 = 2;
              }
              goto joined_r0x00010045113c;
            }
code_r0x00010045192c:
            pppppppbStack_290 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_2a8 = unaff_x26;
            param_2 = (byte *******)thunk_FUN_108855b04(&bStack_90,&pppppppbStack_b0,&UNK_10b20dba0)
            ;
            unaff_x21 = (byte *******)&pppppppbStack_2d0;
            pppppppbVar11 = pppppppbStack_2f0;
            goto LAB_100451498;
          }
          iVar19 = 1;
          if (piVar2 != (int *)0x1) {
            iVar19 = 2;
          }
          iVar18 = 0;
          if (piVar2 != (int *)0x0) {
            iVar18 = iVar19;
          }
        }
code_r0x0001004511c8:
        FUN_100e077ec(&bStack_90);
      }
      else {
        if (bVar14 == 0xd) {
          if (piVar3 == (int *)0x6) {
            iVar18 = 1;
            if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
              iVar18 = 2;
            }
          }
          else {
            if (piVar3 != (int *)0x2) goto code_r0x000100451194;
            iVar18 = 2;
            if ((short)*piVar2 == 0x6469) {
              iVar18 = 0;
            }
          }
          goto code_r0x0001004511c8;
        }
        if (bVar14 != 0xe) {
          if (bVar14 != 0xf) goto code_r0x00010045192c;
          if (piVar3 == (int *)0x6) {
            if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                 (*(char *)((long)piVar2 + 2) != 'r')) ||
                ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
               (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x000100451194;
            iVar18 = 1;
          }
          else if (((piVar3 == (int *)0x2) && ((char)*piVar2 == 'i')) &&
                  (*(char *)((long)piVar2 + 1) == 'd')) {
            iVar18 = 0;
          }
          else {
code_r0x000100451194:
            iVar18 = 2;
          }
          goto code_r0x0001004511c8;
        }
        if (ppppppbStack_78 == (byte ******)0x6) {
          if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
               (*(char *)((long)piVar3 + 2) != 'r')) ||
              ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
             (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x000100451104;
          iVar18 = 1;
        }
        else if (((ppppppbStack_78 == (byte ******)0x2) && ((char)*piVar3 == 'i')) &&
                (*(char *)((long)piVar3 + 1) == 'd')) {
          iVar18 = 0;
        }
        else {
code_r0x000100451104:
          iVar18 = 2;
        }
joined_r0x00010045113c:
        if (piVar2 != (int *)0x0) {
          _free();
        }
      }
      bVar14 = (byte)pppppppbStack_2d0;
      if (iVar18 == 0) {
        if (unaff_x22 != (byte *******)0x8000000000000001) {
          pppppppbVar15 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_2a8 = unaff_x26;
          goto code_r0x00010045186c;
        }
        pppppppbStack_2d0 = (byte *******)CONCAT71(pppppppbStack_2d0._1_7_,0x16);
        if (bVar14 == 0x16) {
          pppppppbStack_290 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_2a8 = unaff_x26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100451928;
        }
        uVar17 = *puVar25;
        puVar24[1] = puVar25[1];
        *puVar24 = uVar17;
        uVar17 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar17;
        bStack_90 = bVar14;
        func_0x00010135ba2c(&pppppppbStack_b0,&bStack_90);
        if (pppppppbStack_b0 == (byte *******)0x8000000000000001) {
          pppppppbStack_290 = (byte *******)((long)unaff_x25 + 1);
          unaff_x22 = (byte *******)0x8000000000000001;
          param_2 = pppppppbStack_a8;
          pppppppbStack_2a8 = unaff_x26;
          goto code_r0x000100451610;
        }
        pppppppbStack_2d8 = pppppppbStack_a8;
        pppppppbStack_2e8 = pppppppbStack_a0;
        unaff_x22 = pppppppbStack_b0;
      }
      else if (iVar18 == 1) {
        if (unaff_x24 != (byte *******)0x8000000000000001) goto code_r0x000100451804;
        pppppppbStack_2d0 = (byte *******)CONCAT71(pppppppbStack_2d0._1_7_,0x16);
        if (bVar14 == 0x16) {
          pppppppbStack_290 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_2a8 = unaff_x26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100451928:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10045192c);
          (*pcVar4)();
        }
        uVar17 = *puVar25;
        puVar24[1] = puVar25[1];
        *puVar24 = uVar17;
        uVar17 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar17;
        bStack_90 = bVar14;
        func_0x000101333138(&pppppppbStack_b0,&bStack_90);
        if (pppppppbStack_b0 == (byte *******)0x8000000000000001) {
          pppppppbStack_290 = (byte *******)((long)unaff_x25 + 1);
          *pppppppbStack_2f0 = (byte ******)0x800000000000006e;
          pppppppbStack_2f0[1] = (byte ******)pppppppbStack_a8;
          unaff_x21 = (byte *******)&pppppppbStack_2d0;
          pppppppbStack_2a8 = unaff_x26;
          goto LAB_1004515c0;
        }
        pppppppbStack_2e0 = pppppppbStack_a8;
        ppppppbStack_b8 = ppppppbStack_98;
        pppppppbStack_c0 = pppppppbStack_a0;
        unaff_x24 = pppppppbStack_b0;
      }
      else {
        pppppppbStack_2d0 = (byte *******)CONCAT71(pppppppbStack_2d0._1_7_,0x16);
        if (bVar14 == 0x16) {
          pppppppbStack_290 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_2a8 = unaff_x26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100451928;
        }
        uVar17 = *puVar25;
        puVar24[1] = puVar25[1];
        *puVar24 = uVar17;
        uVar17 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar17;
        bStack_90 = bVar14;
        FUN_100e077ec(&bStack_90);
      }
      unaff_x25 = (byte *******)((long)unaff_x25 + 1);
      pppppppbVar16 = pppppppbStack_2f8;
      pppppppbVar15 = pppppppbVar20;
      pppppppbVar11 = unaff_x26;
    } while (unaff_x26 != pppppppbVar20);
    param_2 = pppppppbStack_2f0;
    pppppppbStack_2a8 = pppppppbVar15;
    pppppppbStack_290 = pppppppbVar16;
    if (unaff_x22 == (byte *******)0x8000000000000001) {
      unaff_x21 = (byte *******)&pppppppbStack_2d0;
      pppppppbVar11 = pppppppbStack_2f0;
      goto code_r0x000100451464;
    }
    if (unaff_x24 != (byte *******)0x8000000000000001) {
      pppppppbVar23 = (byte *******)0x800000000000006e;
      pppppppbStack_2f0[7] = ppppppbStack_b8;
      pppppppbStack_2f0[6] = (byte ******)pppppppbStack_c0;
      *pppppppbStack_2f0 = (byte ******)0x8000000000000060;
      pppppppbStack_2f0[1] = (byte ******)unaff_x22;
      pppppppbStack_2f0[2] = (byte ******)pppppppbStack_2d8;
      pppppppbStack_2f0[3] = (byte ******)pppppppbStack_2e8;
      pppppppbStack_2f0[4] = (byte ******)unaff_x24;
      pppppppbStack_2f0[5] = (byte ******)pppppppbStack_2e0;
      _memcpy(&ppppppbStack_280,pppppppbStack_2f0,0x1c0);
      FUN_100d34830(&pppppppbStack_2b0);
      if (pppppppbVar20 != pppppppbVar15) {
        bStack_90 = (byte)pppppppbVar16;
        cStack_8f = (char)((ulong)pppppppbVar16 >> 8);
        uStack_8e = (undefined6)((ulong)pppppppbVar16 >> 0x10);
        pppppppbVar11 =
             (byte *******)
             thunk_FUN_1087e422c((byte *)((long)pppppppbVar16 +
                                         ((ulong)((long)pppppppbVar20 - (long)pppppppbVar15) >> 6)),
                                 &bStack_90,&UNK_10b23a190);
        goto code_r0x0001004517f4;
      }
      goto LAB_100451758;
    }
    pppppppbStack_b0 = (byte *******)&UNK_108cb9606;
    pppppppbStack_a8 = (byte *******)0x6;
    bStack_90 = (byte)&pppppppbStack_b0;
    cStack_8f = (char)((ulong)&pppppppbStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&pppppppbStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    ppppppbVar22 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar22;
    unaff_x22 = (byte *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    unaff_x21 = (byte *******)&pppppppbStack_2d0;
    goto joined_r0x0001004515d0;
  case 0x16:
  case 0x92:
  case 0xbb:
    goto code_r0x000100451740;
  case 0x17:
  case 0xa1:
  case 0xca:
    goto code_r0x000100451750;
  case 0x19:
  case 0x4b:
  case 0x9c:
    goto code_r0x000100451730;
  case 0x1b:
  case 0xe0:
  case 0xf5:
    goto code_r0x000100451760;
  case 0x1d:
  case 0x94:
  case 0xa9:
  case 0xe7:
    goto code_r0x000100451738;
  case 0x1e:
  case 0x67:
  case 0x88:
  case 0xa0:
  case 0xe5:
  case 0xf7:
    goto code_r0x000100451790;
  case 0x1f:
  case 0x36:
  case 0x78:
  case 0xf6:
    goto code_r0x00010045170c;
  case 0x20:
  case 0xa7:
  case 0xcf:
  case 0xf3:
    goto code_r0x000100451780;
  case 0x22:
  case 0xfd:
    goto code_r0x0001004516e4;
  case 0x23:
  case 0x8f:
  case 0x9b:
  case 0xb4:
  case 0xe8:
  case 0xf9:
    goto code_r0x000100451768;
  case 0x24:
    goto code_r0x00010045168c;
  case 0x25:
    goto code_r0x000100451720;
  case 0x28:
  case 0xb7:
  case 199:
  case 0xdc:
    goto code_r0x0001004517c4;
  case 0x29:
    goto code_r0x00010045135c;
  case 0x2a:
    goto code_r0x0001004513a0;
  case 0x31:
  case 0x73:
    break;
  case 0x33:
  case 0x75:
    goto code_r0x0001004516c4;
  case 0x34:
  case 0x76:
    goto code_r0x00010045171c;
  case 0x35:
  case 0x77:
    goto code_r0x000100451698;
  case 0x38:
  case 0x7a:
    goto code_r0x000100451670;
  case 0x39:
  case 0x68:
  case 0x7b:
  case 0x9e:
    goto code_r0x0001004516f4;
  case 0x3a:
  case 0x7c:
    goto code_r0x000100451618;
  case 0x3b:
  case 0x7d:
    goto code_r0x0001004516ac;
  case 0x3c:
  case 0x7e:
code_r0x000100451610:
    unaff_x21 = (byte *******)&pppppppbStack_2d0;
    pppppppbVar11 = pppppppbStack_2f0;
code_r0x000100451618:
LAB_100451498:
    *pppppppbVar11 = (byte ******)0x800000000000006e;
    pppppppbVar11[1] = (byte ******)param_2;
    if ((-0x7fffffffffffffff < (long)unaff_x24) &&
       (pppppppbVar23 = pppppppbStack_2d8, unaff_x24 != (byte *******)0x0)) goto LAB_1004514c4;
    goto LAB_1004515c0;
  case 0x3e:
  case 0x80:
    goto code_r0x00010045176c;
  case 0x42:
    goto code_r0x000100451764;
  case 0x43:
    goto code_r0x000100451774;
  case 0x44:
  case 0xfb:
    goto code_r0x00010045173c;
  case 0x45:
  case 100:
    goto code_r0x000100451754;
  case 0x47:
    goto code_r0x000100451784;
  case 0x48:
  case 0xde:
    goto code_r0x00010045179c;
  case 0x49:
    goto code_r0x00010045175c;
  case 0x4a:
  case 0xc6:
  case 0xdf:
    goto code_r0x0001004517b4;
  case 0x4c:
  case 0xb2:
  case 0xc9:
  case 0xeb:
    goto code_r0x0001004517a4;
  case 0x4e:
  case 0xec:
    goto code_r0x000100451708;
  case 0x4f:
  case 200:
    goto code_r0x00010045178c;
  case 0x51:
    goto code_r0x000100451744;
  case 0x54:
  case 0x85:
  case 0xb6:
  case 0xce:
  case 0xe6:
code_r0x000100451804:
    pppppppbVar16 = (byte *******)((long)unaff_x25 + 1);
    pppppppbStack_2a8 = unaff_x26;
  case 0xba:
    pppppppbVar15 = (byte *******)&UNK_108cb9000;
    pppppppbStack_290 = pppppppbVar16;
code_r0x000100451814:
    pppppppbVar16 = (byte *******)((long)pppppppbVar15 + 0x606);
    pppppppbVar21 = (byte *******)0x6;
code_r0x00010045181c:
    pppppppbVar15 = (byte *******)&pppppppbStack_b0;
    pppppppbVar20 = (byte *******)&DAT_100c7b3a0;
    pppppppbStack_b0 = pppppppbVar16;
    pppppppbStack_a8 = pppppppbVar21;
code_r0x00010045182c:
    bStack_90 = (byte)pppppppbVar15;
    cStack_8f = (char)((ulong)pppppppbVar15 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar15 >> 0x10);
    uStack_88 = SUB81(pppppppbVar20,0);
    uStack_87 = (undefined7)((ulong)pppppppbVar20 >> 8);
    param_2 = (byte *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x000100451834:
    param_2 = (byte *******)thunk_FUN_108856088((byte *)((long)param_2 + 0x973),&bStack_90);
    pppppppbVar20 = pppppppbStack_2f0;
code_r0x000100451844:
    unaff_x21 = (byte *******)&pppppppbStack_2d0;
    pppppppbVar15 = (byte *******)0x800000000000006e;
code_r0x000100451850:
    *pppppppbVar20 = (byte ******)pppppppbVar15;
    pppppppbVar20[1] = (byte ******)param_2;
code_r0x000100451854:
    pppppppbVar23 = pppppppbStack_2d8;
    if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
code_r0x000100451860:
LAB_1004514c4:
      _free(pppppppbStack_2e0);
      pppppppbStack_2d8 = pppppppbVar23;
    }
LAB_1004515c0:
    if (-0x7fffffffffffffff < (long)unaff_x22) {
joined_r0x0001004515d0:
      if (unaff_x22 != (byte *******)0x0) {
        _free(pppppppbStack_2d8);
      }
    }
    FUN_100d34830(unaff_x21 + 4);
    if ((byte)pppppppbStack_2d0 != '\x16') {
      FUN_100e077ec(&pppppppbStack_2d0);
    }
    goto LAB_100451758;
  case 0x55:
  case 0x6b:
  case 0xc3:
    goto code_r0x000100451308;
  case 0x56:
  case 0x6c:
  case 0xc4:
    goto code_r0x00010045134c;
  case 0x58:
  case 0xfc:
    goto code_r0x0001004517b0;
  case 0x59:
  case 0x8d:
  case 0xfa:
    goto code_r0x0001004517c0;
  case 0x5a:
    goto code_r0x000100451788;
  case 0x5b:
    goto code_r0x0001004517a0;
  case 0x5c:
    goto code_r0x00010045174c;
  case 0x5d:
    goto code_r0x0001004517d0;
  case 0x5e:
    goto code_r0x0001004517e8;
  case 0x5f:
  case 0xa2:
  case 0xf8:
    goto code_r0x0001004517a8;
  case 0x60:
    goto code_r0x000100451800;
  case 0x62:
    goto code_r0x0001004517f0;
  case 99:
  case 0xa3:
    goto code_r0x000100451724;
  case 0x65:
    goto code_r0x0001004517d8;
  case 0x6a:
    goto code_r0x000100451850;
  case 0x84:
  case 0xbd:
  case 0xd0:
    goto code_r0x0001004517f4;
  case 0x86:
  case 0xb0:
    goto code_r0x0001004517cc;
  case 0x87:
  case 0xe1:
    goto code_r0x0001004517e4;
  case 0x89:
  case 0xe4:
    goto code_r0x000100451814;
  case 0x8a:
    goto code_r0x00010045182c;
  case 0x8b:
  case 0xb5:
  case 0xcc:
  case 0xe9:
    goto code_r0x0001004517ec;
  case 0x8c:
    goto code_r0x000100451844;
  case 0x8e:
    goto code_r0x000100451834;
  case 0x90:
  case 0xa4:
  case 0xb9:
  case 0xff:
    goto code_r0x000100451798;
  case 0x91:
  case 0xb8:
    goto code_r0x00010045181c;
  case 0x93:
  case 0xcb:
  case 0xdd:
    goto code_r0x0001004517d4;
  case 0x96:
    goto code_r0x000100451874;
  case 0x97:
code_r0x0001004513a8:
    unaff_x24 = (byte *******)0x8000000000000001;
code_r0x000100451464:
    pppppppbStack_b0 = (byte *******)&UNK_108ca26b0;
    pppppppbStack_a8 = (byte *******)0x2;
    bStack_90 = (byte)&pppppppbStack_b0;
    cStack_8f = (char)((ulong)&pppppppbStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&pppppppbStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    unaff_x22 = (byte *******)0x8000000000000001;
    param_2 = (byte *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    goto LAB_100451498;
  case 0x98:
    goto code_r0x0001004513ec;
  case 0x9a:
  case 0xd2:
    goto LAB_100451758;
  case 0x9d:
  case 0xf4:
    goto code_r0x000100451748;
  case 0xaa:
    goto code_r0x00010045169c;
  case 0xac:
    goto code_r0x0001004517f8;
  case 0xae:
    goto code_r0x000100451340;
  case 0xb1:
  case 0xd3:
    goto code_r0x0001004517dc;
  case 0xb3:
  case 0xe3:
    goto code_r0x0001004517bc;
  case 0xbc:
  case 0xf2:
    goto code_r0x000100451770;
  case 0xbf:
  case 0xcd:
    goto code_r0x0001004517ac;
  case 0xc2:
code_r0x00010045186c:
    pppppppbVar16 = (byte *******)&UNK_108ca2000;
    pppppppbStack_290 = pppppppbVar15;
code_r0x000100451874:
    pppppppbStack_b0 = pppppppbVar16 + 0xd6;
    pppppppbStack_a8 = (byte *******)0x2;
    bStack_90 = (byte)&pppppppbStack_b0;
    cStack_8f = (char)((ulong)&pppppppbStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&pppppppbStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = (byte *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
    unaff_x21 = (byte *******)&pppppppbStack_2d0;
    pppppppbVar11 = pppppppbStack_2f0;
    goto LAB_100451498;
  case 0xd5:
    goto code_r0x000100451794;
  case 0xd8:
    goto code_r0x000100451854;
  case 0xd9:
    goto code_r0x000100451304;
  case 0xda:
    goto code_r0x000100451348;
  case 0xe2:
    goto code_r0x0001004517fc;
  case 0xee:
    goto code_r0x000100451860;
  case 0xef:
    goto code_r0x0001004513d4;
  case 0xf0:
    goto code_r0x000100451418;
  }
  bVar14 = 1;
  pppppppbStack_278 = pppppppbVar15;
code_r0x0001004516f4:
code_r0x000100451734:
  ppppppbStack_280 = (byte ******)CONCAT71(ppppppbStack_280._1_7_,bVar14);
code_r0x000100451738:
  param_4 = &UNK_10b219000;
code_r0x00010045173c:
  param_4 = param_4 + 0x5d0;
code_r0x000100451740:
  pppppppbVar11 = &ppppppbStack_280;
code_r0x000100451744:
  param_3 = (byte *******)&pppppppbStack_b0;
code_r0x000100451748:
  pppppppbVar11 = (byte *******)FUN_107c05dcc(pppppppbVar11,param_3,param_4);
code_r0x00010045174c:
  pppppppbVar15 = (byte *******)0x6e;
code_r0x000100451750:
  pppppppbVar15 = (byte *******)((ulong)pppppppbVar15 | 0x8000000000000000);
code_r0x000100451754:
  *param_2 = (byte ******)pppppppbVar15;
  param_2[1] = (byte ******)pppppppbVar11;
LAB_100451758:
code_r0x00010045175c:
code_r0x000100451760:
code_r0x000100451764:
code_r0x000100451768:
code_r0x00010045176c:
code_r0x000100451770:
code_r0x000100451774:
  return;
}

