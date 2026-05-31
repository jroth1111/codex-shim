
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a5e50(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  ulong *******pppppppuVar2;
  ulong *******pppppppuVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar11;
  uint uVar12;
  byte bVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  ulong *******pppppppuVar19;
  ulong ******ppppppuVar20;
  ulong ******ppppppuVar21;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******pppppppuVar22;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  ulong *******unaff_x27;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  ulong *******pppppppuVar26;
  ulong ******ppppppuVar27;
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
  
  ppppppuVar27 = param_1._8_8_;
  pppppppuVar26 = param_1._0_8_;
  puVar25 = &stack0xfffffffffffffff0;
  pbVar8 = abStack_340 + 0x50;
  pbVar10 = abStack_340 + 0x50;
  pbVar6 = abStack_340 + 0x50;
  pppppppuVar24 = (ulong *******)&uStack_90;
  bVar13 = *(byte *)param_3;
  pppppppuVar14 = (ulong *******)(ulong)bVar13;
  pppppppuVar19 = (ulong *******)&UNK_108c9a1a8;
  ppppppuVar21 = (ulong ******)(ulong)*(ushort *)(&UNK_108c9a1a8 + (long)pppppppuVar14 * 2);
  ppppppuVar20 = (ulong ******)(&UNK_1004a5e94 + (long)ppppppuVar21 * 4);
  pbVar9 = abStack_340 + 0x50;
  pbVar7 = abStack_340 + 0x50;
  pbVar5 = abStack_340 + 0x50;
  pppppppuVar11 = param_2;
  pppppppuVar15 = pppppppuVar14;
  pppppppuVar22 = unaff_x21;
  pppppppuVar2 = unaff_x22;
  pppppppuVar3 = unaff_x25;
  pppppppuVar23 = pppppppuVar24;
  switch(bVar13) {
  case 0:
  case 0xdc:
  case 0xfe:
    bVar13 = *(byte *)((long)param_3 + 1);
  case 0x4b:
  case 0x67:
  case 0x84:
  case 0xd6:
    ppppppuStack_270 = (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar13) << 8);
code_r0x0001004a66b4:
    goto code_r0x0001004a6708;
  case 1:
  case 0x44:
  case 0xdd:
    pppppppuVar14 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
    break;
  case 2:
  case 0xde:
    pppppppuVar14 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x25:
  case 0x4e:
  case 0x86:
    break;
  case 3:
  case 0x61:
  case 0xdf:
    pppppppuVar14 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x1d:
  case 0x87:
    break;
  case 4:
  case 0xe0:
    pppppppuVar14 = (ulong *******)param_3[1];
  case 0x22:
  case 0x88:
    break;
  case 5:
  case 0xe1:
    pppppppuVar14 = (ulong *******)(long)*(char *)((long)param_3 + 1);
  case 0x23:
  case 0x58:
  case 0x89:
  case 0x8c:
  case 0xf9:
code_r0x0001004a66fc:
    pppppppuStack_268 = pppppppuVar14;
code_r0x0001004a6700:
    bVar13 = 2;
    goto code_r0x0001004a6704;
  case 6:
  case 0x42:
  case 0xe2:
    pppppppuVar14 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x20:
  case 0x8a:
    goto code_r0x0001004a66fc;
  case 7:
  case 0xe3:
  case 0xf6:
    pppppppuVar14 = (ulong *******)(long)(int)*(uint *)((long)param_3 + 4);
  case 0x16:
  case 0x5a:
  case 0x8b:
    goto code_r0x0001004a66fc;
  case 8:
  case 0xe4:
    pppppppuVar14 = (ulong *******)param_3[1];
    goto code_r0x0001004a66fc;
  case 9:
  case 0xe5:
    pppppppuVar26 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x8d:
  case 0xfd:
    pppppppuVar26 = (ulong *******)(double)SUB84(pppppppuVar26,0);
code_r0x0001004a667c:
code_r0x0001004a66ec:
    pppppppuStack_268 = pppppppuVar26;
code_r0x0001004a66f0:
    bVar13 = 3;
code_r0x0001004a66f4:
    goto code_r0x0001004a6704;
  case 10:
  case 0xe6:
    pppppppuVar26 = (ulong *******)param_3[1];
    goto code_r0x0001004a66ec;
  case 0xb:
  case 0xe7:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x8f:
code_r0x0001004a6624:
    pbVar7 = &stack0xffffffffffffffa0;
    puVar25 = unaff_x29;
code_r0x0001004a662c:
    unaff_x20 = *(ulong ********)(pbVar7 + 0x40);
    pppppppuVar11 = *(ulong ********)(pbVar7 + 0x48);
    pbVar8 = pbVar7 + 0x60;
code_r0x0001004a6640:
    *(ulong ********)(pbVar8 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar8 + -0x18) = pppppppuVar11;
    *(undefined1 **)(pbVar8 + -0x10) = puVar25;
    *(undefined8 *)(pbVar8 + -8) = unaff_x30;
    *(undefined4 *)(pbVar8 + -0x44) = 0;
    uVar12 = (uint)param_3;
    if (uVar12 < 0x80) {
      pbVar8[-0x44] = (byte)param_3;
      uVar16 = 1;
    }
    else {
      bVar13 = (byte)param_3 & 0x3f | 0x80;
      if (uVar12 < 0x800) {
        pbVar8[-0x44] = (byte)(uVar12 >> 6) | 0xc0;
        pbVar8[-0x43] = bVar13;
        uVar16 = 2;
      }
      else {
        bVar1 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        if (uVar12 < 0x10000) {
          pbVar8[-0x44] = (byte)(uVar12 >> 0xc) | 0xe0;
          pbVar8[-0x43] = bVar1;
          pbVar8[-0x42] = bVar13;
          uVar16 = 3;
        }
        else {
          pbVar8[-0x44] = (byte)(uVar12 >> 0x12) | 0xf0;
          pbVar8[-0x43] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
          pbVar8[-0x42] = bVar1;
          pbVar8[-0x41] = bVar13;
          uVar16 = 4;
        }
      }
    }
    *(byte **)(pbVar8 + -0x38) = pbVar8 + -0x44;
    *(undefined8 *)(pbVar8 + -0x30) = uVar16;
    pbVar8[-0x40] = 5;
    ppppppuVar20 = (ulong ******)func_0x000108a4a50c(pbVar8 + -0x40,pbVar8 + -0x21,&UNK_10b21bcd0);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar20;
    return;
  case 0xc:
  case 0xe8:
    param_3 = param_3 + 1;
  case 0x90:
code_r0x0001004a6654:
    pbVar9 = &stack0xffffffffffffffa0;
    pppppppuVar11 = unaff_x19;
    puVar25 = unaff_x29;
code_r0x0001004a6668:
    pbVar10 = pbVar9 + 0x60;
code_r0x0001004a6670:
    *(ulong ********)(pbVar10 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar10 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar10 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar10 + -0x18) = pppppppuVar11;
    *(undefined1 **)(pbVar10 + -0x10) = puVar25;
    *(undefined8 *)(pbVar10 + -8) = unaff_x30;
    ppppppuVar20 = param_3[1];
    ppppppuVar21 = param_3[2];
    *(ulong *******)(pbVar10 + -0x48) = ppppppuVar20;
    *(ulong *******)(pbVar10 + -0x40) = ppppppuVar21;
    pbVar10[-0x50] = 5;
    ppppppuVar21 = (ulong ******)func_0x000108a4a50c(pbVar10 + -0x50,pbVar10 + -0x31,&UNK_10b21bcd0)
    ;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar21;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar20);
    }
    return;
  case 0xd:
  case 0x45:
  case 0xe9:
  case 0xfb:
    pppppppuVar14 = (ulong *******)param_3[1];
    pppppppuVar19 = (ulong *******)param_3[2];
  case 0x91:
  case 0xaa:
    pppppppuStack_268 = pppppppuVar14;
    pppppppuStack_260 = pppppppuVar19;
code_r0x0001004a66d8:
    bVar13 = 5;
code_r0x0001004a66dc:
    goto code_r0x0001004a6704;
  case 0xe:
  case 0xea:
    param_3 = param_3 + 1;
  case 0x92:
    pbVar5 = &stack0xffffffffffffffa0;
    pppppppuVar11 = unaff_x19;
    puVar25 = unaff_x29;
code_r0x0001004a6610:
    pbVar6 = pbVar5 + 0x60;
code_r0x0001004a6618:
    *(ulong ********)(pbVar6 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar6 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar6 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar6 + -0x18) = pppppppuVar11;
    *(undefined1 **)(pbVar6 + -0x10) = puVar25;
    *(undefined8 *)(pbVar6 + -8) = unaff_x30;
    ppppppuVar20 = param_3[1];
    ppppppuVar21 = param_3[2];
    *(ulong *******)(pbVar6 + -0x48) = ppppppuVar20;
    *(ulong *******)(pbVar6 + -0x40) = ppppppuVar21;
    pbVar6[-0x50] = 6;
    ppppppuVar21 = (ulong ******)func_0x000108a4a50c(pbVar6 + -0x50,pbVar6 + -0x31,&UNK_10b21bcd0);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar21;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar20);
    }
    return;
  case 0xf:
  case 0xeb:
    pppppppuVar14 = (ulong *******)param_3[1];
    pppppppuVar19 = (ulong *******)param_3[2];
  case 0x93:
    bVar13 = 6;
    pppppppuStack_268 = pppppppuVar14;
    pppppppuStack_260 = pppppppuVar19;
code_r0x0001004a6694:
    goto code_r0x0001004a6704;
  case 0x10:
  case 0xec:
    bVar13 = 8;
  case 0x24:
  case 0x94:
    goto code_r0x0001004a6704;
  default:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
  case 0x79:
    pppppppuVar11 = unaff_x20;
    ppppppuStack_258 = pppppppuVar11[3];
    pppppppuStack_260 = (ulong *******)pppppppuVar11[2];
    func_0x000107c049ac(param_2,&ppppppuStack_270);
code_r0x0001004a62d8:
code_r0x0001004a62dc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar11);
    return;
  case 0x12:
  case 0xd5:
  case 0xee:
    bVar13 = 7;
  case 0x6a:
    goto code_r0x0001004a6704;
  case 0x13:
  case 0xef:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuStack_258 = unaff_x20[3];
    pppppppuStack_260 = (ulong *******)unaff_x20[2];
  case 0x55:
    pppppppuVar11 = unaff_x20;
    func_0x000107c053c0(param_2,&ppppppuStack_270);
    goto code_r0x0001004a62d8;
  case 0x14:
  case 0xf0:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x27 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x27 * 4;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
  case 0x56:
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    if (unaff_x27 == (ulong *******)0x0) {
code_r0x0001004a6328:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22fb38,&UNK_10b20a590);
code_r0x0001004a6344:
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = (ulong ******)pppppppuStack_a0;
code_r0x0001004a6350:
      pppppppuVar14 = (ulong *******)((long)unaff_x24 - (long)unaff_x21);
code_r0x0001004a6354:
      unaff_x24 = (ulong *******)(((ulong)pppppppuVar14 >> 5) + 1);
code_r0x0001004a635c:
      while (unaff_x24 = (ulong *******)((long)unaff_x24 + -1), unaff_x24 != (ulong *******)0x0) {
        pppppppuVar22 = unaff_x21;
        unaff_x22 = unaff_x21 + 4;
code_r0x0001004a6368:
        unaff_x21 = unaff_x22;
        FUN_100e077ec(pppppppuVar22);
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuVar14 = (ulong *******)(ulong)*(byte *)unaff_x20;
code_r0x0001004a631c:
      pppppppuStack_2b8 = unaff_x21;
code_r0x0001004a6320:
      bVar13 = (byte)pppppppuVar14;
      if ((int)pppppppuVar14 == 0x16) goto code_r0x0001004a6328;
      uVar16 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar16;
      uStack_90._2_6_ = (undefined6)((ulong)uVar16 >> 8);
      uStack_88 = (undefined1)((ulong)uVar16 >> 0x38);
code_r0x0001004a6398:
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
code_r0x0001004a63a0:
      uStack_90._0_1_ = bVar13;
      pppppppuStack_2a0 = (ulong *******)0x1;
code_r0x0001004a63ac:
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x0001004a6344;
      if (unaff_x27 == (ulong *******)0x1) {
code_r0x0001004a63e8:
        pppppppuVar11 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22fb38,&UNK_10b20a590);
code_r0x0001004a6400:
        *param_2 = (ulong ******)0x800000000000006e;
        param_2[1] = (ulong ******)pppppppuVar11;
        if (((ulong)pppppppuStack_a8 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_a0);
        }
        goto code_r0x0001004a6350;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar13 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar13 == 0x16) goto code_r0x0001004a63e8;
      ppppppuVar27 = *(ulong *******)((long)unaff_x20 + 0x29);
      pppppppuVar26 = *(ulong ********)((long)unaff_x20 + 0x21);
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x27 = pppppppuStack_98;
code_r0x0001004a6754:
      uStack_87 = SUB87(ppppppuVar27,0);
      uStack_90._1_1_ = (char)pppppppuVar26;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar26 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar26 >> 0x38);
code_r0x0001004a6758:
      ppppppuVar27 = unaff_x20[7];
      pppppppuVar26 = (ulong *******)unaff_x20[6];
code_r0x0001004a675c:
      uStack_80 = SUB81(pppppppuVar26,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar26 >> 8);
      ppppppuStack_78 = ppppppuVar27;
code_r0x0001004a6760:
      pppppppuVar19 = (ulong *******)0x2;
code_r0x0001004a6764:
      pppppppuStack_2a0 = pppppppuVar19;
code_r0x0001004a6768:
      uStack_90._0_1_ = bVar13;
      pppppppuVar11 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004a6770:
      func_0x00010122ae84(pppppppuVar11,&uStack_90);
code_r0x0001004a6778:
      pppppppuVar19 = (ulong *******)0x8000000000000000;
      pppppppuVar11 = pppppppuStack_a0;
      pppppppuVar14 = pppppppuStack_a8;
      pppppppuVar2 = unaff_x22;
      pppppppuVar3 = unaff_x25;
code_r0x0001004a6780:
      pppppppuStack_a8 = pppppppuVar3;
      pppppppuStack_a0 = pppppppuVar2;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      if (pppppppuVar14 == pppppppuVar19) goto code_r0x0001004a6400;
code_r0x0001004a6788:
      unaff_x20 = (ulong *******)0x800000000000006e;
code_r0x0001004a6790:
      ppppppuVar20 = (ulong ******)((long)unaff_x20 + -1);
      pppppppuVar19 = pppppppuStack_98;
code_r0x0001004a6798:
      *param_2 = ppppppuVar20;
      param_2[1] = (ulong ******)pppppppuVar14;
      param_2[2] = (ulong ******)pppppppuVar11;
      param_2[3] = (ulong ******)pppppppuVar19;
code_r0x0001004a67a0:
      param_2[4] = (ulong ******)unaff_x25;
      param_2[5] = (ulong ******)unaff_x22;
      param_2[6] = (ulong ******)unaff_x27;
code_r0x0001004a67a8:
      pppppppuVar11 = &ppppppuStack_270;
      param_3 = param_2;
code_r0x0001004a67b0:
      _memcpy(pppppppuVar11,param_3,0x1c0);
code_r0x0001004a67b8:
      pppppppuVar11 = (ulong *******)FUN_100fbc738(&pppppppuStack_2c0);
code_r0x0001004a67c0:
      if (pppppppuVar11 != (ulong *******)0x0) {
code_r0x0001004a67c4:
        *param_2 = (ulong ******)unaff_x20;
        param_2[1] = (ulong ******)pppppppuVar11;
code_r0x0001004a67c8:
        FUN_100e44f40(&ppppppuStack_270);
code_r0x0001004a67d0:
      }
    }
    goto code_r0x0001004a672c;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    ppppppuVar20 = param_3[1];
    pppppppuVar14 = (ulong *******)param_3[2];
  case 0x72:
    ppppppuVar21 = param_3[3];
    pppppppuVar19 = (ulong *******)((long)ppppppuVar21 << 6);
code_r0x0001004a5ec4:
    unaff_x23 = (ulong *******)((long)pppppppuVar14 + (long)pppppppuVar19);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuStack_2a0 = pppppppuVar14;
    pppppppuStack_298 = pppppppuVar14;
    ppppppuStack_290 = ppppppuVar20;
    pppppppuStack_288 = unaff_x23;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
code_r0x0001004a5ee0:
    if (ppppppuVar21 == (ulong ******)0x0) {
      unaff_x24 = (ulong *******)0x0;
code_r0x0001004a6444:
      pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
      pppppppuStack_a0 = (ulong *******)0x2;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x22 = (ulong *******)0x8000000000000001;
      pppppppuVar11 = (ulong *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      goto code_r0x0001004a6478;
    }
    unaff_x25 = (ulong *******)0x0;
    unaff_x20 = (ulong *******)((ulong)&uStack_90 | 1);
    unaff_x21 = (ulong *******)((ulong)pppppppuVar24 | 1);
    pppppppuStack_2e8 = (ulong *******)(((ulong)(pppppppuVar19 + -8) >> 6) + 1);
    pppppppuVar24 = pppppppuVar14 + 8;
code_r0x0001004a5f08:
    unaff_x22 = (ulong *******)0x8000000000000001;
    unaff_x24 = (ulong *******)0x8000000000000000;
code_r0x0001004a5f10:
code_r0x0001004a5f34:
    do {
      unaff_x27 = pppppppuVar24;
code_r0x0001004a5f38:
      unaff_x27 = unaff_x27 + -8;
      bVar13 = *(byte *)unaff_x27;
      pppppppuVar19 = (ulong *******)(ulong)bVar13;
      pppppppuVar11 = unaff_x25;
      pppppppuVar15 = pppppppuVar24;
      if (bVar13 == 0x16) break;
      uStack_90._0_1_ = bVar13;
code_r0x0001004a5f48:
      ppppppuVar20 = unaff_x27[2];
      *(ulong *******)((long)unaff_x20 + 0x17) = unaff_x27[3];
      *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar20;
      ppppppuVar20 = *(ulong *******)((long)unaff_x27 + 1);
      unaff_x20[1] = *(ulong *******)((long)unaff_x27 + 9);
      *unaff_x20 = ppppppuVar20;
      pppppppuStack_2b8 = (ulong *******)unaff_x27[5];
      pppppppuStack_2c0 = (ulong *******)unaff_x27[4];
      pppppppuStack_2a8 = (ulong *******)unaff_x27[7];
      pppppppuStack_2b0 = (ulong *******)unaff_x27[6];
      pppppppuVar14 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      pppppppuVar11 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
      ppppppuVar20 = ppppppuStack_78;
code_r0x0001004a5f68:
      iVar17 = (int)pppppppuVar19;
      in_OV = SBORROW4(iVar17,0xc);
      in_NG = iVar17 + -0xc < 0;
      in_ZR = iVar17 == 0xc;
code_r0x0001004a5f6c:
      iVar17 = (int)pppppppuVar19;
      if ((bool)in_ZR || in_NG != in_OV) {
        in_ZR = iVar17 == 1;
code_r0x0001004a5f74:
        uVar18 = (uint)pppppppuVar19;
        if ((bool)in_ZR) {
          if (uStack_90._1_1_ != '\x01') {
            uVar18 = uVar18 + 1;
          }
          uVar12 = 0;
          if (uStack_90._1_1_ != '\0') {
            uVar12 = uVar18;
          }
        }
        else {
          in_ZR = uVar18 == 4;
code_r0x0001004a5f7c:
          if (!(bool)in_ZR) {
            if ((int)pppppppuVar19 == 0xc) {
              if (ppppppuVar20 == (ulong ******)0x6) {
                uVar12 = 1;
                if (*(uint *)pppppppuVar11 != 0x61726170 ||
                    *(short *)((long)pppppppuVar11 + 4) != 0x736d) {
                  uVar12 = 2;
                }
              }
              else {
code_r0x0001004a5f90:
                if (ppppppuVar20 == (ulong ******)0x2) {
code_r0x0001004a5f98:
                  uVar12 = 2;
                  if (*(short *)pppppppuVar11 == 0x6469) {
                    uVar12 = 0;
                  }
                }
                else {
                  uVar12 = 2;
                }
              }
              goto joined_r0x0001004a610c;
            }
code_r0x0001004a6900:
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            param_4 = &UNK_10b210380;
            pppppppuVar11 = (ulong *******)&uStack_90;
            param_3 = (ulong *******)&pppppppuStack_a8;
            unaff_x21 = pppppppuStack_2c8;
            unaff_x27 = pppppppuStack_2d0;
            pppppppuStack_298 = pppppppuVar24;
            goto code_r0x0001004a6920;
          }
          uVar18 = 1;
          if (pppppppuVar14 != (ulong *******)0x1) {
            uVar18 = 2;
          }
          uVar12 = 0;
          if (pppppppuVar14 != (ulong *******)0x0) {
            uVar12 = uVar18;
          }
        }
code_r0x0001004a6198:
        FUN_100e077ec(&uStack_90);
        pppppppuVar23 = pppppppuVar24;
      }
      else {
        if (iVar17 == 0xd) {
code_r0x0001004a605c:
          if (pppppppuVar11 == (ulong *******)0x6) {
            pppppppuVar19 = (ulong *******)(ulong)*(uint *)pppppppuVar14;
code_r0x0001004a6170:
            uVar12 = 1;
            if ((int)pppppppuVar19 != 0x61726170 || *(short *)((long)pppppppuVar14 + 4) != 0x736d) {
              uVar12 = 2;
            }
          }
          else {
            if (pppppppuVar11 != (ulong *******)0x2) goto code_r0x0001004a6164;
            uVar12 = 2;
            if (*(short *)pppppppuVar14 == 0x6469) {
              uVar12 = 0;
            }
          }
          goto code_r0x0001004a6198;
        }
        if (iVar17 != 0xe) {
          if (iVar17 != 0xf) goto code_r0x0001004a6900;
          if (pppppppuVar11 == (ulong *******)0x6) {
            if (((((*(char *)pppppppuVar14 == 'p') && (*(char *)((long)pppppppuVar14 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar14 + 2) == 'r')) &&
                ((*(char *)((long)pppppppuVar14 + 3) == 'a' &&
                 (*(char *)((long)pppppppuVar14 + 4) == 'm')))) &&
               (*(char *)((long)pppppppuVar14 + 5) == 's')) {
              uVar12 = 1;
              goto code_r0x0001004a6198;
            }
          }
          else if (pppppppuVar11 == (ulong *******)0x2) {
            pppppppuVar19 = (ulong *******)(ulong)*(byte *)pppppppuVar14;
code_r0x0001004a5fe0:
            if (((int)pppppppuVar19 == 0x69) && (*(char *)((long)pppppppuVar14 + 1) == 'd')) {
              uVar12 = 0;
              goto code_r0x0001004a6198;
            }
          }
code_r0x0001004a6164:
          uVar12 = 2;
          goto code_r0x0001004a6198;
        }
        if (ppppppuVar20 == (ulong ******)0x6) {
          if (((((*(char *)pppppppuVar11 != 'p') || (*(char *)((long)pppppppuVar11 + 1) != 'a')) ||
               (*(char *)((long)pppppppuVar11 + 2) != 'r')) ||
              ((*(char *)((long)pppppppuVar11 + 3) != 'a' ||
               (*(char *)((long)pppppppuVar11 + 4) != 'm')))) ||
             (*(char *)((long)pppppppuVar11 + 5) != 's')) goto code_r0x0001004a60d4;
          uVar12 = 1;
        }
        else {
code_r0x0001004a601c:
          if (((ppppppuVar20 == (ulong ******)0x2) && (*(char *)pppppppuVar11 == 'i')) &&
             (*(char *)((long)pppppppuVar11 + 1) == 'd')) {
            uVar12 = 0;
          }
          else {
code_r0x0001004a60d4:
            uVar12 = 2;
          }
        }
joined_r0x0001004a610c:
        pppppppuVar23 = pppppppuVar24;
        if (pppppppuVar14 != (ulong *******)0x0) {
          _free();
        }
      }
      bVar13 = (byte)pppppppuStack_2c0;
      if ((uVar12 & 0xff) == 0) {
        if (unaff_x22 != (ulong *******)0x8000000000000001) {
          pppppppuVar14 = (ulong *******)((long)unaff_x25 + 1);
          goto code_r0x0001004a6830;
        }
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar13 == 0x16) goto code_r0x0001004a68a0;
        ppppppuVar20 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar20;
        uVar16 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar16;
        uStack_90._0_1_ = bVar13;
        func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
          pppppppuVar14 = (ulong *******)((long)unaff_x25 + 1);
          goto code_r0x0001004a6584;
        }
        pppppppuStack_2c8 = pppppppuStack_a0;
        pppppppuStack_2d8 = pppppppuStack_98;
        unaff_x22 = pppppppuStack_a8;
      }
      else if ((uVar12 & 0xff) == 1) {
        if (unaff_x24 != (ulong *******)0x8000000000000000) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar23;
          goto code_r0x0001004a67e0;
        }
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar13 == 0x16) {
          pppppppuVar14 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar23;
          goto code_r0x0001004a68d8;
        }
        ppppppuVar20 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar20;
        uVar16 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar16;
        uStack_90._0_1_ = bVar13;
        func_0x00010122ae84(&pppppppuStack_a8,&uStack_90);
        pppppppuVar14 = pppppppuStack_98;
        pppppppuVar19 = pppppppuStack_a0;
        unaff_x24 = pppppppuStack_a8;
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000000) {
          *param_2 = (ulong ******)0x800000000000006e;
          param_2[1] = (ulong ******)pppppppuStack_a0;
          pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
          unaff_x21 = pppppppuStack_2c8;
          pppppppuStack_298 = pppppppuVar23;
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          goto LAB_1004a65b0;
        }
code_r0x0001004a5f18:
        pppppppuStack_2e0 = pppppppuVar14;
        pppppppuStack_2d0 = pppppppuVar19;
      }
      else {
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar13 == 0x16) goto code_r0x0001004a6874;
        ppppppuVar20 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar20;
        uVar16 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar16;
        uStack_90._0_1_ = bVar13;
        FUN_100e077ec(&uStack_90);
      }
code_r0x0001004a5f20:
      pppppppuVar24 = pppppppuVar23 + 8;
code_r0x0001004a5f24:
      unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
      pppppppuVar11 = pppppppuStack_2e8;
      pppppppuVar15 = unaff_x23;
    } while (unaff_x27 + 8 != unaff_x23);
    pppppppuStack_298 = pppppppuVar15;
    pppppppuStack_280 = pppppppuVar11;
    if (unaff_x22 == (ulong *******)0x8000000000000001) {
      pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
      unaff_x21 = pppppppuStack_2c8;
      unaff_x27 = pppppppuStack_2d0;
      goto code_r0x0001004a6444;
    }
    if (unaff_x24 == (ulong *******)0x8000000000000000) {
      pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_a0 = (ulong *******)0x6;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      ppppppuVar20 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = ppppppuVar20;
      unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
      pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
      goto joined_r0x0001004a65c0;
    }
    unaff_x20 = (ulong *******)0x800000000000006e;
    *param_2 = (ulong ******)0x800000000000006d;
    param_2[1] = (ulong ******)unaff_x24;
    param_2[2] = (ulong ******)pppppppuStack_2d0;
    param_2[3] = (ulong ******)pppppppuStack_2e0;
    param_2[4] = (ulong ******)unaff_x22;
    param_2[5] = (ulong ******)pppppppuStack_2c8;
    param_2[6] = (ulong ******)pppppppuStack_2d8;
    _memcpy(&ppppppuStack_270,param_2,0x1c0);
    FUN_100d34830(&pppppppuStack_2a0);
    if (unaff_x23 != pppppppuVar15) {
      uStack_90._0_1_ = (byte)pppppppuVar11;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar11 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar11 >> 0x10);
      pppppppuVar11 =
           (ulong *******)
           thunk_FUN_1087e422c(((ulong)((long)unaff_x23 - (long)pppppppuVar15) >> 6) +
                               (long)pppppppuVar11,&uStack_90,&UNK_10b23a190);
      goto code_r0x0001004a67c4;
    }
    goto code_r0x0001004a672c;
  case 0x17:
  case 0xd4:
    goto code_r0x0001004a66b4;
  case 0x18:
  case 0x46:
    goto code_r0x0001004a667c;
  case 0x19:
    goto code_r0x0001004a6694;
  case 0x1a:
  case 99:
    goto code_r0x0001004a6640;
  case 0x1b:
  case 0x5f:
    goto code_r0x0001004a66c4;
  case 0x1c:
  case 0x59:
  case 0xa8:
  case 0xd1:
  case 0xf4:
    goto code_r0x0001004a66dc;
  case 0x1e:
  case 0x65:
  case 0xf5:
    goto code_r0x0001004a66f4;
  case 0x1f:
  case 100:
    goto code_r0x0001004a6670;
  case 0x21:
  case 0x66:
    goto code_r0x0001004a6618;
  case 0x26:
    goto code_r0x0001004a65e8;
  case 0x28:
  case 0xf7:
    goto code_r0x0001004a6724;
  case 0x29:
    goto code_r0x0001004a6354;
  case 0x2a:
    goto code_r0x0001004a6398;
  case 0x2c:
    goto code_r0x0001004a6824;
  case 0x2d:
    goto code_r0x0001004a6834;
  case 0x2e:
    goto code_r0x0001004a67fc;
  case 0x2f:
  case 0xbb:
    goto code_r0x0001004a6814;
  case 0x30:
    goto code_r0x0001004a67c0;
  case 0x31:
  case 0xbc:
    goto code_r0x0001004a6844;
  case 0x32:
    goto code_r0x0001004a685c;
  case 0x33:
    goto code_r0x0001004a681c;
  case 0x34:
code_r0x0001004a6874:
    pppppppuVar14 = (ulong *******)((long)unaff_x25 + 1);
  case 0xb2:
    pppppppuStack_298 = pppppppuVar23;
    pppppppuStack_280 = pppppppuVar14;
code_r0x0001004a6880:
    param_2 = (ulong *******)&UNK_108ca1a98;
    param_4 = &UNK_10b24f848;
code_r0x0001004a6890:
    param_3 = (ulong *******)0x2c;
code_r0x0001004a6898:
    FUN_107c05cac(param_2,param_3,param_4);
    goto code_r0x0001004a68fc;
  case 0x35:
    goto code_r0x0001004a67f0;
  case 0x36:
    goto code_r0x0001004a6864;
  case 0x37:
    goto code_r0x0001004a6798;
  case 0x38:
  case 0xa0:
    goto code_r0x0001004a67c8;
  case 0x39:
    goto code_r0x0001004a684c;
  case 0x3a:
  case 0xa9:
    goto code_r0x0001004a6770;
  case 0x3b:
    goto code_r0x0001004a6804;
  case 0x3c:
  case 0x9c:
  case 0xc6:
    goto code_r0x0001004a6768;
  case 0x3e:
  case 0xb5:
    goto code_r0x0001004a68c0;
  case 0x3f:
    goto code_r0x0001004a5f38;
  case 0x40:
    goto code_r0x0001004a5f7c;
  case 0x43:
    goto code_r0x0001004a66f0;
  case 0x47:
    goto code_r0x0001004a6700;
  case 0x48:
    goto code_r0x0001004a6718;
  case 0x49:
    goto code_r0x0001004a66d8;
  case 0x4a:
    goto code_r0x0001004a6730;
  case 0x4c:
    goto code_r0x0001004a6720;
  case 0x4d:
    goto code_r0x0001004a6654;
  case 0x4f:
    goto code_r0x0001004a6708;
  case 0x50:
    goto code_r0x0001004a662c;
  case 0x51:
    goto code_r0x0001004a66c0;
  case 0x52:
    goto code_r0x0001004a6624;
  case 0x54:
    goto code_r0x0001004a6764;
  case 0x5b:
  case 0x85:
    break;
  case 0x5c:
    goto code_r0x0001004a6668;
  case 0x5d:
  case 0x8e:
    goto code_r0x0001004a66ec;
  case 0x5e:
  case 0xa5:
  case 0xca:
  case 0xf2:
    goto code_r0x0001004a6704;
  case 0x60:
    goto code_r0x0001004a671c;
  case 0x62:
  case 0xd2:
    goto code_r0x0001004a670c;
  case 0x68:
    goto code_r0x0001004a6610;
  case 0x6b:
    goto code_r0x0001004a6368;
  case 0x6c:
    goto code_r0x0001004a63ac;
  case 0x6e:
    goto code_r0x0001004a5f20;
  case 0x6f:
    goto code_r0x0001004a5f34;
  case 0x70:
    goto code_r0x0001004a5f08;
  case 0x71:
    goto code_r0x0001004a5f10;
  case 0x73:
    goto code_r0x0001004a5f6c;
  case 0x74:
    goto code_r0x0001004a5f90;
  case 0x75:
    goto code_r0x0001004a5f18;
  case 0x76:
    goto code_r0x0001004a601c;
  case 0x77:
    goto code_r0x0001004a5ee0;
  case 0x78:
    goto code_r0x0001004a5fe0;
  case 0x7a:
    goto code_r0x0001004a5ec4;
  case 0x7b:
    goto code_r0x0001004a5f74;
  case 0x7c:
code_r0x0001004a6584:
    unaff_x22 = (ulong *******)0x8000000000000001;
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = (ulong ******)pppppppuStack_a0;
    unaff_x21 = pppppppuStack_2c8;
    unaff_x27 = pppppppuStack_2d0;
    pppppppuStack_298 = pppppppuVar23;
    pppppppuStack_280 = pppppppuVar14;
    if (((ulong)unaff_x24 & 0x7fffffffffffffff) == 0) goto LAB_1004a65b0;
    goto LAB_1004a648c;
  case 0x7d:
    goto LAB_1004a65b0;
  case 0x7f:
    goto code_r0x0001004a5f48;
  case 0x81:
    goto code_r0x0001004a5f98;
  case 0x82:
    goto code_r0x0001004a605c;
  case 0x83:
    goto code_r0x0001004a6170;
  case 0x96:
  case 0x9e:
  case 0xff:
    goto code_r0x0001004a672c;
  case 0x97:
    goto code_r0x0001004a635c;
  case 0x98:
    goto code_r0x0001004a63a0;
  case 0x9a:
  case 0xd3:
    goto code_r0x0001004a6790;
  case 0x9b:
  case 0xcc:
    goto code_r0x0001004a67a0;
  case 0x9d:
    goto code_r0x0001004a6780;
  case 0x9f:
    goto code_r0x0001004a67b0;
  case 0xa1:
  case 0xcb:
    goto code_r0x0001004a6788;
  case 0xa2:
code_r0x0001004a67e0:
    pppppppuVar14 = (ulong *******)&UNK_108cb9000;
  case 0xc0:
    pppppppuVar14 = (ulong *******)((long)pppppppuVar14 + 0x606);
    pppppppuVar19 = (ulong *******)0x6;
code_r0x0001004a67ec:
    pppppppuStack_a8 = pppppppuVar14;
    pppppppuStack_a0 = pppppppuVar19;
code_r0x0001004a67f0:
    pppppppuVar14 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar19 = (ulong *******)&DAT_100c7b3a0;
code_r0x0001004a67fc:
    uStack_90._0_1_ = (byte)pppppppuVar14;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar14 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar14 >> 0x10);
    uStack_88 = SUB81(pppppppuVar19,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar19 >> 8);
    pppppppuVar11 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004a6804:
    pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + 0x973);
code_r0x0001004a6808:
    unaff_x27 = pppppppuStack_2d0;
    pppppppuVar11 = (ulong *******)thunk_FUN_108856088(pppppppuVar11,&uStack_90);
    unaff_x21 = pppppppuStack_2c8;
code_r0x0001004a6814:
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar14 = (ulong *******)0x6e;
code_r0x0001004a681c:
    *param_2 = (ulong ******)((ulong)pppppppuVar14 | 0x8000000000000000);
    param_2[1] = (ulong ******)pppppppuVar11;
code_r0x0001004a6824:
joined_r0x0001004a6824:
    if (unaff_x24 != (ulong *******)0x0) {
LAB_1004a648c:
      _free(unaff_x27);
    }
LAB_1004a65b0:
    pppppppuStack_2c8 = unaff_x21;
    if (-0x7fffffffffffffff < (long)unaff_x22) {
joined_r0x0001004a65c0:
      if (unaff_x22 != (ulong *******)0x0) {
        _free(pppppppuStack_2c8);
      }
    }
    FUN_100d34830(pppppppuVar24 + 4);
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
code_r0x0001004a65e8:
    }
    goto code_r0x0001004a672c;
  case 0xa3:
    goto code_r0x0001004a675c;
  case 0xa4:
    goto code_r0x0001004a67d0;
  case 0xa6:
  case 0xcf:
    goto code_r0x0001004a6734;
  case 0xa7:
  case 0xce:
    goto code_r0x0001004a67b8;
  case 0xac:
code_r0x0001004a6830:
    pppppppuStack_298 = pppppppuVar23;
code_r0x0001004a6834:
    pppppppuVar15 = (ulong *******)&UNK_108ca2000;
    pppppppuStack_280 = pppppppuVar14;
code_r0x0001004a683c:
    pppppppuVar15 = pppppppuVar15 + 0xd6;
    pppppppuVar19 = (ulong *******)0x2;
code_r0x0001004a6844:
    pppppppuVar14 = (ulong *******)&pppppppuStack_a8;
    pppppppuStack_a8 = pppppppuVar15;
    pppppppuStack_a0 = pppppppuVar19;
code_r0x0001004a684c:
    uStack_90._0_1_ = (byte)pppppppuVar14;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar14 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar14 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    pppppppuVar11 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004a685c:
    pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + 0x973);
    param_3 = (ulong *******)&uStack_90;
code_r0x0001004a6864:
    unaff_x27 = pppppppuStack_2d0;
    pppppppuVar11 = (ulong *******)thunk_FUN_108856088(pppppppuVar11,param_3);
    unaff_x21 = pppppppuStack_2c8;
code_r0x0001004a686c:
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
code_r0x0001004a6478:
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = (ulong ******)pppppppuVar11;
    unaff_x24 = (ulong *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
    goto joined_r0x0001004a6824;
  case 0xad:
    goto code_r0x0001004a62dc;
  case 0xae:
    goto code_r0x0001004a6320;
  case 0xb0:
code_r0x0001004a68a0:
    pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_298 = pppppppuVar23;
  case 0xb1:
    param_2 = (ulong *******)&UNK_108ca1a98;
    param_4 = &UNK_10b24f848;
code_r0x0001004a68c0:
    param_3 = (ulong *******)0x2c;
code_r0x0001004a68c8:
    FUN_107c05cac(param_2,param_3,param_4);
    goto code_r0x0001004a68fc;
  case 0xb3:
    goto code_r0x0001004a6890;
  case 0xb4:
    goto code_r0x0001004a683c;
  case 0xb6:
code_r0x0001004a68d8:
    pppppppuStack_280 = pppppppuVar14;
  case 0xba:
    param_2 = (ulong *******)&UNK_108ca1a98;
    param_4 = &UNK_10b24f848;
code_r0x0001004a68f0:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x0001004a68fc:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004a6900);
    (*pcVar4)();
  case 0xb7:
    goto code_r0x0001004a6898;
  case 0xb8:
    goto code_r0x0001004a68f0;
  case 0xb9:
    goto code_r0x0001004a686c;
  case 0xbd:
    goto code_r0x0001004a68c8;
  case 0xbe:
    goto code_r0x0001004a67ec;
  case 0xbf:
    goto code_r0x0001004a6880;
  case 0xc2:
code_r0x0001004a6920:
    pppppppuVar11 = (ulong *******)thunk_FUN_108855b04(pppppppuVar11,param_3,param_4);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    goto code_r0x0001004a6478;
  case 0xc3:
    goto code_r0x0001004a5f24;
  case 0xc4:
    goto code_r0x0001004a5f68;
  case 199:
    goto code_r0x0001004a6778;
  case 200:
    goto code_r0x0001004a6740;
  case 0xc9:
    goto code_r0x0001004a6758;
  case 0xcd:
    goto code_r0x0001004a6760;
  case 0xd0:
    goto code_r0x0001004a67a8;
  case 0xd8:
    goto code_r0x0001004a6808;
  case 0xd9:
    goto code_r0x0001004a62d8;
  case 0xda:
    goto code_r0x0001004a631c;
  case 0xf3:
    goto code_r0x0001004a6714;
  case 0xf8:
    goto code_r0x0001004a673c;
  case 0xfa:
    goto code_r0x0001004a6754;
  case 0xfc:
    goto code_r0x0001004a6744;
  }
  pppppppuStack_268 = pppppppuVar14;
code_r0x0001004a66c0:
  bVar13 = 1;
code_r0x0001004a66c4:
code_r0x0001004a6704:
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar13);
code_r0x0001004a6708:
  param_4 = &UNK_10b21b000;
code_r0x0001004a670c:
  param_4 = param_4 + 0xcd0;
  pppppppuVar11 = &ppppppuStack_270;
code_r0x0001004a6714:
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004a6718:
  pppppppuVar11 = (ulong *******)FUN_107c05dcc(pppppppuVar11,param_3,param_4);
code_r0x0001004a671c:
  pppppppuVar14 = (ulong *******)0x6e;
code_r0x0001004a6720:
  pppppppuVar14 = (ulong *******)((ulong)pppppppuVar14 | 0x8000000000000000);
code_r0x0001004a6724:
  *param_2 = (ulong ******)pppppppuVar14;
  param_2[1] = (ulong ******)pppppppuVar11;
code_r0x0001004a672c:
code_r0x0001004a6730:
code_r0x0001004a6734:
code_r0x0001004a673c:
code_r0x0001004a6740:
code_r0x0001004a6744:
  return;
}

