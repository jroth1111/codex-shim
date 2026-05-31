
/* WARNING: Type propagation algorithm not settling */

void FUN_100470664(undefined1 param_1 [16],byte *******param_2,byte *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  byte *******pppppppbVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte *******pppppppbVar18;
  byte ******ppppppbVar19;
  byte ******ppppppbVar20;
  uint uVar21;
  byte bVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  byte *******pppppppbVar28;
  byte *******pppppppbVar29;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******unaff_x22;
  byte *******unaff_x23;
  byte *******unaff_x24;
  byte *******unaff_x25;
  byte *******pppppppbVar30;
  byte *******pppppppbVar31;
  byte *******pppppppbVar32;
  byte *******unaff_x27;
  byte *******pppppppbVar33;
  undefined1 *unaff_x29;
  undefined1 *puVar34;
  undefined8 unaff_x30;
  byte *******pppppppbVar35;
  byte *******pppppppbVar36;
  byte abStack_340 [88];
  byte *******pppppppbStack_2e8;
  byte *******pppppppbStack_2e0;
  byte *******pppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte *******pppppppbStack_298;
  byte ******ppppppbStack_290;
  byte *******pppppppbStack_288;
  byte *******pppppppbStack_280;
  byte *******pppppppbStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  byte ******ppppppbStack_258;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *******pppppppbStack_78;
  
  pppppppbVar36 = param_1._8_8_;
  pppppppbVar35 = param_1._0_8_;
  puVar34 = &stack0xfffffffffffffff0;
  pbVar12 = abStack_340 + 0x50;
  pbVar17 = abStack_340 + 0x50;
  pppppppbVar32 = (byte *******)&bStack_90;
  bVar22 = *(byte *)param_3;
  pppppppbVar23 = (byte *******)(ulong)bVar22;
  pppppppbVar28 = (byte *******)&UNK_108c9963a;
  pbVar13 = abStack_340 + 0x50;
  pbVar14 = abStack_340 + 0x50;
  pbVar15 = abStack_340 + 0x50;
  pbVar16 = abStack_340 + 0x50;
  pbVar8 = abStack_340 + 0x50;
  pbVar9 = abStack_340 + 0x50;
  pbVar10 = abStack_340 + 0x50;
  pbVar11 = abStack_340 + 0x50;
  pbVar6 = abStack_340 + 0x50;
  pbVar7 = abStack_340 + 0x50;
  pppppppbVar18 = param_2;
  pppppppbVar24 = pppppppbVar23;
  pppppppbVar29 = pppppppbVar28;
  pppppppbVar4 = unaff_x22;
  pppppppbVar30 = unaff_x25;
  pppppppbVar31 = pppppppbVar32;
  pppppppbVar33 = unaff_x27;
  switch(bVar22) {
  case 0:
  case 0x19:
  case 0x71:
  case 0x8c:
  case 0xd4:
  case 0xe5:
    pppppppbStack_270 =
         (byte *******)((ulong)CONCAT61(pppppppbStack_270._2_6_,*(byte *)((long)param_3 + 1)) << 8);
  case 0x1d:
  case 0x75:
  case 0xa5:
    pppppppbStack_270 = (byte *******)((ulong)pppppppbStack_270 & 0xffffffffffffff00);
code_r0x000100470ec8:
    goto code_r0x000100470f1c;
  case 1:
  case 0x16:
  case 0x6e:
  case 0xb9:
    pppppppbVar23 = (byte *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0xeb:
code_r0x000100470ed0:
    bVar22 = 1;
    pppppppbStack_268 = pppppppbVar23;
code_r0x000100470ed8:
    break;
  case 2:
  case 0x91:
  case 0xaa:
  case 0xe8:
    pppppppbVar23 = (byte *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x1f:
  case 0x68:
  case 0x77:
    goto code_r0x000100470ed0;
  case 3:
  case 0x25:
  case 0x7d:
  case 0x8e:
    pppppppbVar23 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
    goto code_r0x000100470ed0;
  case 4:
    pppppppbVar23 = (byte *******)param_3[1];
  case 0x33:
  case 0x87:
    goto code_r0x000100470ed0;
  case 5:
  case 0x17:
  case 0x6f:
    pppppppbVar23 = (byte *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0xbf:
  case 0xdf:
code_r0x000100470f10:
    pppppppbStack_268 = pppppppbVar23;
code_r0x000100470f14:
    bVar22 = 2;
    break;
  case 6:
  case 0x23:
  case 0x7b:
  case 0xa6:
    pppppppbVar23 = (byte *******)(long)*(short *)((long)param_3 + 2);
  case 100:
  case 0xb7:
    goto code_r0x000100470f10;
  case 7:
  case 0x34:
  case 0xd6:
    pppppppbVar23 = (byte *******)(long)*(int *)((long)param_3 + 4);
    goto code_r0x000100470f10;
  case 8:
  case 0x20:
  case 0x78:
  case 0xca:
    pppppppbVar23 = (byte *******)param_3[1];
    goto code_r0x000100470f10;
  case 9:
    pppppppbVar35 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x39:
  case 0x54:
  case 0x89:
  case 0xe0:
    pppppppbVar35 = (byte *******)(double)SUB84(pppppppbVar35,0);
  case 0xb0:
  case 0xdd:
code_r0x000100470f00:
    pppppppbStack_268 = pppppppbVar35;
code_r0x000100470f04:
    bVar22 = 3;
    break;
  case 10:
    pppppppbVar35 = (byte *******)param_3[1];
    goto code_r0x000100470f00;
  case 0xb:
  case 0x35:
  case 0x4c:
    param_3 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xec:
code_r0x000100470e38:
    pbVar8 = &stack0xffffffffffffffa0;
code_r0x000100470e3c:
    puVar34 = *(undefined1 **)(pbVar8 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar8 + 0x58);
    pbVar9 = pbVar8;
code_r0x000100470e40:
    unaff_x20 = *(byte ********)(pbVar9 + 0x40);
    pppppppbVar18 = *(byte ********)(pbVar9 + 0x48);
    pbVar10 = pbVar9;
code_r0x000100470e44:
    pbVar11 = pbVar10;
code_r0x000100470e4c:
    pbVar12 = pbVar11 + 0x60;
code_r0x000100470e54:
    *(byte ********)(pbVar12 + -0x20) = unaff_x20;
    *(byte ********)(pbVar12 + -0x18) = pppppppbVar18;
    *(undefined1 **)(pbVar12 + -0x10) = puVar34;
    *(undefined8 *)(pbVar12 + -8) = unaff_x30;
    *(undefined4 *)(pbVar12 + -0x44) = 0;
    uVar21 = (uint)param_3;
    if (uVar21 < 0x80) {
      pbVar12[-0x44] = (byte)param_3;
      uVar25 = 1;
    }
    else {
      bVar22 = (byte)param_3 & 0x3f | 0x80;
      if (uVar21 < 0x800) {
        pbVar12[-0x44] = (byte)(uVar21 >> 6) | 0xc0;
        pbVar12[-0x43] = bVar22;
        uVar25 = 2;
      }
      else {
        bVar1 = (byte)(uVar21 >> 6) & 0x3f | 0x80;
        if (uVar21 < 0x10000) {
          pbVar12[-0x44] = (byte)(uVar21 >> 0xc) | 0xe0;
          pbVar12[-0x43] = bVar1;
          pbVar12[-0x42] = bVar22;
          uVar25 = 3;
        }
        else {
          pbVar12[-0x44] = (byte)(uVar21 >> 0x12) | 0xf0;
          pbVar12[-0x43] = (byte)(uVar21 >> 0xc) & 0x3f | 0x80;
          pbVar12[-0x42] = bVar1;
          pbVar12[-0x41] = bVar22;
          uVar25 = 4;
        }
      }
    }
    *(byte **)(pbVar12 + -0x38) = pbVar12 + -0x44;
    *(undefined8 *)(pbVar12 + -0x30) = uVar25;
    pbVar12[-0x40] = 5;
    ppppppbVar19 = (byte ******)func_0x000108a4a50c(pbVar12 + -0x40,pbVar12 + -0x21,&UNK_10b21b7d0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar19;
    return;
  case 0xc:
    param_3 = param_3 + 1;
  case 0x2c:
  case 0x8b:
  case 0xe7:
code_r0x000100470e68:
    pbVar13 = &stack0xffffffffffffffa0;
code_r0x000100470e6c:
    puVar34 = *(undefined1 **)(pbVar13 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar13 + 0x58);
    pbVar14 = pbVar13;
code_r0x000100470e70:
    unaff_x20 = *(byte ********)(pbVar14 + 0x40);
    pppppppbVar18 = *(byte ********)(pbVar14 + 0x48);
    pbVar15 = pbVar14;
code_r0x000100470e74:
    unaff_x22 = *(byte ********)(pbVar15 + 0x30);
    unaff_x21 = *(byte ********)(pbVar15 + 0x38);
    pbVar16 = pbVar15;
code_r0x000100470e7c:
    pbVar17 = pbVar16 + 0x60;
code_r0x000100470e84:
    *(byte ********)(pbVar17 + -0x30) = unaff_x22;
    *(byte ********)(pbVar17 + -0x28) = unaff_x21;
    *(byte ********)(pbVar17 + -0x20) = unaff_x20;
    *(byte ********)(pbVar17 + -0x18) = pppppppbVar18;
    *(undefined1 **)(pbVar17 + -0x10) = puVar34;
    *(undefined8 *)(pbVar17 + -8) = unaff_x30;
    ppppppbVar19 = param_3[1];
    ppppppbVar20 = param_3[2];
    *(byte *******)(pbVar17 + -0x48) = ppppppbVar19;
    *(byte *******)(pbVar17 + -0x40) = ppppppbVar20;
    pbVar17[-0x50] = 5;
    ppppppbVar20 = (byte ******)func_0x000108a4a50c(pbVar17 + -0x50,pbVar17 + -0x31,&UNK_10b21b7d0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar20;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar19);
    }
    return;
  case 0xd:
  case 0xd1:
    pppppppbVar23 = (byte *******)param_3[1];
    pppppppbVar28 = (byte *******)param_3[2];
  case 0xe3:
    pppppppbStack_268 = pppppppbVar23;
    pppppppbStack_260 = pppppppbVar28;
code_r0x000100470eec:
    bVar22 = 5;
code_r0x000100470ef0:
    break;
  case 0xe:
  case 0x38:
  case 0x88:
    param_3 = param_3 + 1;
  case 0x26:
  case 0x47:
  case 0x7e:
  case 0x90:
    pbVar6 = &stack0xffffffffffffffa0;
    puVar34 = unaff_x29;
code_r0x000100470e18:
    unaff_x20 = *(byte ********)(pbVar6 + 0x40);
    pppppppbVar18 = *(byte ********)(pbVar6 + 0x48);
    unaff_x22 = *(byte ********)(pbVar6 + 0x30);
    unaff_x21 = *(byte ********)(pbVar6 + 0x38);
    pbVar7 = pbVar6;
code_r0x000100470e28:
    *(byte ********)(pbVar7 + 0x30) = unaff_x22;
    *(byte ********)(pbVar7 + 0x38) = unaff_x21;
    *(byte ********)(pbVar7 + 0x40) = unaff_x20;
    *(byte ********)(pbVar7 + 0x48) = pppppppbVar18;
    *(undefined1 **)(pbVar7 + 0x50) = puVar34;
    *(undefined8 *)(pbVar7 + 0x58) = unaff_x30;
    ppppppbVar19 = param_3[1];
    ppppppbVar20 = param_3[2];
    *(byte *******)(pbVar7 + 0x18) = ppppppbVar19;
    *(byte *******)(pbVar7 + 0x20) = ppppppbVar20;
    pbVar7[0x10] = 6;
    ppppppbVar20 = (byte ******)func_0x000108a4a50c(pbVar7 + 0x10,pbVar7 + 0x2f,&UNK_10b21b7d0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar20;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar19);
    }
    return;
  case 0xf:
  case 0x32:
  case 0xa8:
  case 0xb4:
    pppppppbVar23 = (byte *******)param_3[1];
    pppppppbVar28 = (byte *******)param_3[2];
  case 0x66:
    pppppppbStack_268 = pppppppbVar23;
    pppppppbStack_260 = pppppppbVar28;
code_r0x000100470ea4:
    bVar22 = 6;
    break;
  case 0x10:
  case 0x30:
  case 0x43:
    bVar22 = 8;
    break;
  default:
    unaff_x20 = (byte *******)param_3[1];
    pppppppbStack_268 = (byte *******)unaff_x20[1];
    pppppppbStack_270 = (byte *******)*unaff_x20;
    ppppppbStack_258 = unaff_x20[3];
    pppppppbStack_260 = (byte *******)unaff_x20[2];
    func_0x000107c048e8(param_2,&pppppppbStack_270);
  case 0x40:
  case 0x6b:
  case 0xd9:
code_r0x000100470ae4:
    param_2 = unaff_x20;
code_r0x000100470af4:
code_r0x000100470b00:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_2);
    return;
  case 0x12:
    bVar22 = 7;
  case 0x9b:
  case 0xc9:
    break;
  case 0x13:
    unaff_x20 = (byte *******)param_3[1];
    pppppppbVar36 = (byte *******)unaff_x20[1];
    pppppppbVar35 = (byte *******)*unaff_x20;
  case 0x29:
  case 0x81:
    ppppppbStack_258 = unaff_x20[3];
    pppppppbStack_260 = (byte *******)unaff_x20[2];
    param_3 = (byte *******)&pppppppbStack_270;
    pppppppbStack_270 = pppppppbVar35;
    pppppppbStack_268 = pppppppbVar36;
code_r0x000100470adc:
    func_0x000107c0552c(param_2,param_3);
    goto code_r0x000100470ae4;
  case 0x14:
    unaff_x23 = (byte *******)param_3[1];
    unaff_x20 = (byte *******)param_3[2];
    unaff_x27 = (byte *******)param_3[3];
  case 0x2a:
  case 0x82:
    unaff_x24 = unaff_x20 + (long)unaff_x27 * 4;
    pppppppbStack_2a0 = (byte *******)0x0;
    pppppppbStack_2c0 = unaff_x20;
    pppppppbStack_2b8 = unaff_x20;
    pppppppbStack_2b0 = unaff_x23;
    pppppppbStack_2a8 = unaff_x24;
code_r0x000100470b20:
    unaff_x21 = unaff_x20;
    if (unaff_x27 == (byte *******)0x0) {
code_r0x000100470b3c:
      pppppppbStack_a0 = (byte *******)thunk_FUN_1087e422c(0,&UNK_10b22f958,&UNK_10b20a590);
code_r0x000100470b58:
      *param_2 = (byte ******)0x800000000000006e;
      param_2[1] = (byte ******)pppppppbStack_a0;
code_r0x000100470b64:
      pppppppbVar23 = (byte *******)((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5);
code_r0x000100470b6c:
      pbVar13 = (byte *)((long)pppppppbVar23 + 1);
      while (pbVar13 = pbVar13 + -1, pbVar13 != (byte *)0x0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (byte *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100470b28:
      unaff_x21 = unaff_x20 + 4;
      bVar22 = *(byte *)unaff_x20;
      in_ZR = bVar22 == 0x16;
      pppppppbStack_2b8 = unaff_x21;
code_r0x000100470b38:
      if ((bool)in_ZR) goto code_r0x000100470b3c;
      uVar25 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      cStack_8f = (char)uVar25;
      uStack_8e = (undefined6)((ulong)uVar25 >> 8);
      uStack_88 = (undefined1)((ulong)uVar25 >> 0x38);
      pppppppbStack_78 = (byte *******)unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppbStack_2a0 = (byte *******)0x1;
      bStack_90 = bVar22;
      func_0x00010135ba2c(&pppppppbStack_a8,&bStack_90);
      if (pppppppbStack_a8 == (byte *******)0x8000000000000001) goto code_r0x000100470b58;
      if (unaff_x27 == (byte *******)0x1) {
code_r0x000100470bfc:
        pppppppbVar18 = (byte *******)thunk_FUN_1087e422c(1,&UNK_10b22f958,&UNK_10b20a590);
code_r0x000100470c14:
        *param_2 = (byte ******)0x800000000000006e;
        param_2[1] = (byte ******)pppppppbVar18;
        if (((ulong)pppppppbStack_a8 & 0x7fffffffffffffff) != 0) {
          _free(pppppppbStack_a0);
        }
        goto code_r0x000100470b64;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar22 = *(byte *)(unaff_x20 + 4);
      unaff_x22 = pppppppbStack_a0;
      unaff_x25 = pppppppbStack_a8;
      unaff_x27 = pppppppbStack_98;
      pppppppbStack_2b8 = unaff_x21;
      if (bVar22 == 0x16) goto code_r0x000100470bfc;
code_r0x000100470f64:
      pppppppbVar36 = *(byte ********)((long)unaff_x20 + 0x29);
      pppppppbVar35 = *(byte ********)((long)unaff_x20 + 0x21);
code_r0x000100470f68:
      uStack_87 = SUB87(pppppppbVar36,0);
      cStack_8f = (char)pppppppbVar35;
      uStack_8e = (undefined6)((ulong)pppppppbVar35 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppbVar35 >> 0x38);
code_r0x000100470f6c:
      pppppppbVar36 = (byte *******)unaff_x20[7];
      pppppppbVar35 = (byte *******)unaff_x20[6];
code_r0x000100470f70:
      uStack_80 = SUB81(pppppppbVar35,0);
      uStack_7f = (undefined7)((ulong)pppppppbVar35 >> 8);
      pppppppbStack_78 = pppppppbVar36;
code_r0x000100470f74:
      pppppppbVar28 = (byte *******)0x2;
code_r0x000100470f78:
      pppppppbStack_2a0 = pppppppbVar28;
code_r0x000100470f7c:
      bStack_90 = bVar22;
code_r0x000100470f80:
      pppppppbVar18 = (byte *******)&pppppppbStack_a8;
code_r0x000100470f84:
      param_3 = (byte *******)&bStack_90;
code_r0x000100470f88:
      func_0x0001013ea694(pppppppbVar18,param_3);
code_r0x000100470f8c:
      pppppppbVar18 = pppppppbStack_a0;
      pppppppbVar23 = pppppppbStack_a8;
code_r0x000100470f90:
      pppppppbVar28 = (byte *******)0x8000000000000000;
code_r0x000100470f94:
      in_ZR = pppppppbVar23 == pppppppbVar28;
      pppppppbVar4 = unaff_x22;
      pppppppbVar30 = unaff_x25;
code_r0x000100470f98:
      pppppppbStack_a8 = pppppppbVar30;
      pppppppbStack_a0 = pppppppbVar4;
      if ((bool)in_ZR) goto code_r0x000100470c14;
      unaff_x20 = (byte *******)0x6e;
      unaff_x22 = pppppppbStack_a0;
      unaff_x25 = pppppppbStack_a8;
code_r0x000100470fa0:
      unaff_x20 = (byte *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
code_r0x000100470fa4:
      pppppppbVar28 = pppppppbStack_98;
code_r0x000100470fa8:
      *param_2 = (byte ******)((long)unaff_x20 + -0x5a);
      param_2[1] = (byte ******)pppppppbVar23;
code_r0x000100470fb0:
      param_2[2] = (byte ******)pppppppbVar18;
      param_2[3] = (byte ******)pppppppbVar28;
      param_2[4] = (byte ******)unaff_x25;
      param_2[5] = (byte ******)unaff_x22;
      param_2[6] = (byte ******)unaff_x27;
      pppppppbVar18 = (byte *******)&pppppppbStack_270;
code_r0x000100470fc0:
      _memcpy(pppppppbVar18,param_2,0x1c0);
      pppppppbVar18 = (byte *******)&pppppppbStack_2c0;
code_r0x000100470fd0:
      pppppppbVar18 = (byte *******)FUN_100fbc738(pppppppbVar18);
      if (pppppppbVar18 != (byte *******)0x0) {
code_r0x000100470fd8:
        *param_2 = (byte ******)unaff_x20;
        param_2[1] = (byte ******)pppppppbVar18;
        FUN_100e44f40(&pppppppbStack_270);
      }
    }
    goto LAB_100470f3c;
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
    pppppppbStack_2a0 = (byte *******)param_3[2];
    ppppppbVar19 = param_3[3];
    unaff_x23 = pppppppbStack_2a0 + (long)ppppppbVar19 * 8;
    pppppppbStack_298 = pppppppbStack_2a0;
    ppppppbStack_290 = param_3[1];
    pppppppbStack_288 = unaff_x23;
    pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
    pppppppbStack_280 = (byte *******)0x0;
    if (ppppppbVar19 == (byte ******)0x0) {
      unaff_x24 = (byte *******)0x0;
code_r0x000100470c58:
      pppppppbStack_a8 = (byte *******)&UNK_108ca26b0;
      pppppppbStack_a0 = (byte *******)0x2;
      bStack_90 = (byte)&pppppppbStack_a8;
      cStack_8f = (char)((ulong)&pppppppbStack_a8 >> 8);
      uStack_8e = (undefined6)((ulong)&pppppppbStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x22 = (byte *******)0x8000000000000001;
      ppppppbVar19 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
      pppppppbStack_2c8 = unaff_x21;
code_r0x000100470c8c:
      pppppppbVar32 = (byte *******)&pppppppbStack_2c0;
      *param_2 = (byte ******)0x800000000000006e;
      param_2[1] = ppppppbVar19;
      unaff_x21 = pppppppbStack_2c8;
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) == 0) goto LAB_100470dc4;
      goto LAB_100470ca0;
    }
    unaff_x25 = (byte *******)0x0;
    unaff_x20 = (byte *******)((ulong)&bStack_90 | 1);
    unaff_x21 = (byte *******)((ulong)&pppppppbStack_2c0 | 1);
    pppppppbStack_2e8 = (byte *******)(((long)ppppppbVar19 * 0x40 - 0x40U >> 6) + 1);
    unaff_x22 = (byte *******)0x8000000000000001;
    unaff_x24 = (byte *******)0x8000000000000000;
    pppppppbVar33 = pppppppbStack_2a0;
    do {
      unaff_x27 = pppppppbStack_2d0;
      pppppppbVar32 = pppppppbVar33 + 8;
      bVar22 = *(byte *)pppppppbVar33;
      pppppppbVar30 = unaff_x25;
      pppppppbVar31 = pppppppbVar32;
      if (bVar22 == 0x16) break;
      bStack_90 = bVar22;
      ppppppbVar19 = pppppppbVar33[2];
      *(byte *******)((long)unaff_x20 + 0x17) = pppppppbVar33[3];
      *(byte *******)((long)unaff_x20 + 0xf) = ppppppbVar19;
      ppppppbVar19 = *(byte *******)((long)pppppppbVar33 + 1);
      unaff_x20[1] = *(byte *******)((long)pppppppbVar33 + 9);
      *unaff_x20 = ppppppbVar19;
      pppppppbStack_2b8 = (byte *******)pppppppbVar33[5];
      pppppppbStack_2c0 = (byte *******)pppppppbVar33[4];
      pppppppbStack_2a8 = (byte *******)pppppppbVar33[7];
      pppppppbStack_2b0 = (byte *******)pppppppbVar33[6];
      piVar2 = (int *)CONCAT71(uStack_87,uStack_88);
      piVar3 = (int *)CONCAT71(uStack_7f,uStack_80);
      if (bVar22 < 0xd) {
        if (bVar22 == 1) {
          iVar27 = 1;
          if (cStack_8f != '\x01') {
            iVar27 = 2;
          }
          iVar26 = 0;
          if (cStack_8f != '\0') {
            iVar26 = iVar27;
          }
        }
        else {
          if (bVar22 != 4) {
            if (bVar22 == 0xc) {
              if (pppppppbStack_78 == (byte *******)0x6) {
                iVar26 = 1;
                if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                  iVar26 = 2;
                }
              }
              else if (pppppppbStack_78 == (byte *******)0x2) {
                iVar26 = 2;
                if ((short)*piVar3 == 0x6469) {
                  iVar26 = 0;
                }
              }
              else {
                iVar26 = 2;
              }
              goto joined_r0x000100470920;
            }
code_r0x000100471114:
            pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_298 = pppppppbVar32;
            ppppppbVar19 = (byte ******)
                           thunk_FUN_108855b04(&bStack_90,&pppppppbStack_a8,&UNK_10b20d080);
            goto code_r0x000100470c8c;
          }
          iVar27 = 1;
          if (piVar2 != (int *)0x1) {
            iVar27 = 2;
          }
          iVar26 = 0;
          if (piVar2 != (int *)0x0) {
            iVar26 = iVar27;
          }
        }
code_r0x0001004709ac:
        FUN_100e077ec(&bStack_90);
      }
      else {
        if (bVar22 == 0xd) {
          if (piVar3 == (int *)0x6) {
            iVar26 = 1;
            if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
              iVar26 = 2;
            }
          }
          else {
            if (piVar3 != (int *)0x2) goto code_r0x000100470978;
            iVar26 = 2;
            if ((short)*piVar2 == 0x6469) {
              iVar26 = 0;
            }
          }
          goto code_r0x0001004709ac;
        }
        if (bVar22 != 0xe) {
          if (bVar22 != 0xf) goto code_r0x000100471114;
          if (piVar3 == (int *)0x6) {
            if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                 (*(char *)((long)piVar2 + 2) != 'r')) ||
                ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
               (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x000100470978;
            iVar26 = 1;
          }
          else if (((piVar3 == (int *)0x2) && ((char)*piVar2 == 'i')) &&
                  (*(char *)((long)piVar2 + 1) == 'd')) {
            iVar26 = 0;
          }
          else {
code_r0x000100470978:
            iVar26 = 2;
          }
          goto code_r0x0001004709ac;
        }
        if (pppppppbStack_78 == (byte *******)0x6) {
          if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
               (*(char *)((long)piVar3 + 2) != 'r')) ||
              ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
             (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x0001004708e8;
          iVar26 = 1;
        }
        else if (((pppppppbStack_78 == (byte *******)0x2) && ((char)*piVar3 == 'i')) &&
                (*(char *)((long)piVar3 + 1) == 'd')) {
          iVar26 = 0;
        }
        else {
code_r0x0001004708e8:
          iVar26 = 2;
        }
joined_r0x000100470920:
        if (piVar2 != (int *)0x0) {
          _free();
        }
      }
      unaff_x27 = pppppppbStack_2d0;
      bVar22 = (byte)pppppppbStack_2c0;
      if (iVar26 == 0) {
        if (unaff_x22 != (byte *******)0x8000000000000001) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_a8 = (byte *******)&UNK_108ca26b0;
          pppppppbStack_a0 = (byte *******)0x2;
          bStack_90 = (byte)&pppppppbStack_a8;
          cStack_8f = (char)((ulong)&pppppppbStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&pppppppbStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pppppppbStack_298 = pppppppbVar32;
          ppppppbVar19 = (byte ******)
                         thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          goto code_r0x000100470c8c;
        }
        pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
        if (bVar22 == 0x16) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_298 = pppppppbVar32;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100471110;
        }
        ppppppbVar19 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppbVar19;
        uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
        bStack_90 = bVar22;
        func_0x00010135ba2c(&pppppppbStack_a8,&bStack_90);
        if (pppppppbStack_a8 == (byte *******)0x8000000000000001) goto code_r0x000100470d94;
        pppppppbStack_2c8 = pppppppbStack_a0;
        pppppppbStack_2d8 = pppppppbStack_98;
        unaff_x22 = pppppppbStack_a8;
      }
      else if (iVar26 == 1) {
        if (unaff_x24 != (byte *******)0x8000000000000000) goto code_r0x000100470fe8;
        pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
        if (bVar22 == 0x16) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_298 = pppppppbVar32;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100471110:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100471114);
          (*pcVar5)();
        }
        ppppppbVar19 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppbVar19;
        uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
        bStack_90 = bVar22;
        func_0x0001013ea694(&pppppppbStack_a8,&bStack_90);
        if (pppppppbStack_a8 == (byte *******)0x8000000000000000) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          *param_2 = (byte ******)0x800000000000006e;
          param_2[1] = (byte ******)pppppppbStack_a0;
          unaff_x21 = pppppppbStack_2c8;
          pppppppbStack_298 = pppppppbVar32;
          goto code_r0x000100470d8c;
        }
        pppppppbStack_2d0 = pppppppbStack_a0;
        pppppppbStack_2e0 = pppppppbStack_98;
        unaff_x24 = pppppppbStack_a8;
      }
      else {
        pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
        in_ZR = bVar22 == 0x16;
code_r0x000100470aa0:
        if ((bool)in_ZR) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_298 = pppppppbVar32;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100471110;
        }
        ppppppbVar19 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppbVar19;
        uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
        pppppppbVar18 = (byte *******)&bStack_90;
        bStack_90 = bVar22;
code_r0x000100470abc:
        FUN_100e077ec(pppppppbVar18);
      }
      pppppppbVar28 = pppppppbVar33 + 8;
      unaff_x25 = (byte *******)((long)unaff_x25 + 1);
      pppppppbVar30 = pppppppbStack_2e8;
      pppppppbVar31 = unaff_x23;
      pppppppbVar33 = pppppppbVar32;
    } while (pppppppbVar28 != unaff_x23);
    unaff_x21 = pppppppbStack_2c8;
    unaff_x27 = pppppppbStack_2d0;
    pppppppbStack_298 = pppppppbVar31;
    pppppppbStack_280 = pppppppbVar30;
    if (unaff_x22 == (byte *******)0x8000000000000001) goto code_r0x000100470c58;
    if (unaff_x24 != (byte *******)0x8000000000000000) {
      unaff_x20 = (byte *******)0x800000000000006e;
      *param_2 = (byte ******)0x8000000000000014;
      param_2[1] = (byte ******)unaff_x24;
      param_2[2] = (byte ******)pppppppbStack_2d0;
      param_2[3] = (byte ******)pppppppbStack_2e0;
      param_2[4] = (byte ******)unaff_x22;
      param_2[5] = (byte ******)pppppppbStack_2c8;
      param_2[6] = (byte ******)pppppppbStack_2d8;
      _memcpy(&pppppppbStack_270,param_2,0x1c0);
      goto code_r0x000100470d34;
    }
    pppppppbStack_a8 = (byte *******)&UNK_108cb9606;
    pppppppbStack_a0 = (byte *******)0x6;
    bStack_90 = (byte)&pppppppbStack_a8;
    cStack_8f = (char)((ulong)&pppppppbStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&pppppppbStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    ppppppbVar19 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar19;
    unaff_x22 = (byte *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    pppppppbVar32 = (byte *******)&pppppppbStack_2c0;
    goto joined_r0x000100470cfc;
  case 0x18:
  case 0x36:
  case 0x70:
  case 0x8a:
  case 0xbc:
    goto code_r0x000100470ea4;
  case 0x1a:
  case 0x72:
    goto code_r0x000100470e68;
  case 0x1b:
  case 0x73:
  case 0x96:
  case 0x9e:
    goto code_r0x000100470eec;
  case 0x1c:
  case 0x3e:
  case 0x74:
    goto code_r0x000100470f04;
  case 0x1e:
  case 0x76:
  case 0xa3:
    goto code_r0x000100470f1c;
  case 0x21:
  case 0x4a:
  case 0x79:
    goto code_r0x000100470e40;
  case 0x22:
  case 0x7a:
    goto code_r0x000100470e70;
  case 0x24:
  case 0x4f:
  case 0x7c:
    goto code_r0x000100470e18;
  case 0x28:
  case 0x80:
    goto code_r0x000100470f6c;
  case 0x2d:
  case 0xbb:
    goto code_r0x000100470e74;
  case 0x2e:
  case 0xea:
    goto code_r0x000100470e3c;
  case 0x2f:
    goto code_r0x000100470e54;
  case 0x31:
    goto code_r0x000100470e84;
  case 0x37:
    goto code_r0x000100470dd8;
  case 0x3a:
  case 0x94:
    goto code_r0x000100470db0;
  case 0x3b:
  case 0x86:
  case 0xc0:
    goto code_r0x000100470e44;
  case 0x3c:
    goto code_r0x000100470da8;
  case 0x3f:
    goto code_r0x000100470aa0;
  case 0x42:
    goto code_r0x000100470df0;
  case 0x44:
    goto code_r0x000100470dc8;
  case 0x45:
  case 0x8f:
    goto LAB_100470de0;
  case 0x46:
code_r0x000100470d8c:
    pppppppbVar32 = (byte *******)&pppppppbStack_2c0;
    goto LAB_100470dc4;
  case 0x48:
    goto code_r0x000100470e28;
  case 0x49:
    goto code_r0x000100470de8;
  case 0x4b:
    goto code_r0x000100470dbc;
  case 0x4d:
    goto code_r0x000100470d64;
  case 0x4e:
code_r0x000100470d94:
    pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
    unaff_x22 = (byte *******)0x8000000000000001;
    pppppppbVar18 = pppppppbStack_a0;
    pppppppbStack_298 = pppppppbVar32;
code_r0x000100470da8:
    pppppppbVar32 = (byte *******)&pppppppbStack_2c0;
    unaff_x21 = pppppppbStack_2c8;
    unaff_x27 = pppppppbStack_2d0;
code_r0x000100470db0:
    pppppppbVar23 = (byte *******)0x800000000000006e;
code_r0x000100470db8:
    *param_2 = (byte ******)pppppppbVar23;
    param_2[1] = (byte ******)pppppppbVar18;
code_r0x000100470dbc:
    unaff_x24 = (byte *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
    goto joined_r0x000100470dc0;
  case 0x50:
    goto code_r0x000100470d3c;
  case 0x51:
    goto code_r0x000100470dd0;
  case 0x52:
code_r0x000100470d34:
    pppppppbVar18 = (byte *******)&pppppppbStack_2a0;
code_r0x000100470d3c:
    FUN_100d34830(pppppppbVar18);
    if (unaff_x23 != pppppppbVar31) {
      bStack_90 = (byte)pppppppbVar30;
      cStack_8f = (char)((ulong)pppppppbVar30 >> 8);
      uStack_8e = (undefined6)((ulong)pppppppbVar30 >> 0x10);
      param_4 = &UNK_10b23a190;
      pppppppbVar18 =
           (byte *******)
           ((long)pppppppbVar30 + ((ulong)((long)unaff_x23 - (long)pppppppbVar31) >> 6));
      param_3 = (byte *******)&bStack_90;
code_r0x000100470d64:
      pppppppbVar18 = (byte *******)thunk_FUN_1087e422c(pppppppbVar18,param_3,param_4);
      goto code_r0x000100470fd8;
    }
    goto LAB_100470f3c;
  case 0x55:
    goto code_r0x000100470abc;
  case 0x56:
    goto code_r0x000100470b00;
  case 0x58:
  case 0xfe:
    goto code_r0x000100470f54;
  case 0x59:
    goto code_r0x000100470f64;
  case 0x5a:
    goto code_r0x000100470f2c;
  case 0x5b:
    goto code_r0x000100470f44;
  case 0x5c:
  case 0xb3:
  case 0xdc:
    goto code_r0x000100470ef0;
  case 0x5d:
    goto code_r0x000100470f74;
  case 0x5e:
    goto code_r0x000100470f8c;
  case 0x5f:
  case 0xf6:
    goto code_r0x000100470f4c;
  case 0x60:
    goto code_r0x000100470fa4;
  case 0x61:
  case 0xb5:
    goto code_r0x000100470f20;
  case 0x62:
    goto code_r0x000100470f94;
  case 99:
  case 0xde:
    goto code_r0x000100470ec8;
  case 0x65:
  case 0xfb:
    goto code_r0x000100470f7c;
  case 0x67:
    goto code_r0x000100470f34;
  case 0x6a:
    goto code_r0x000100470ff4;
  case 0x6c:
  case 0x97:
  case 0xda:
    goto code_r0x000100470b28;
  case 0x84:
    goto code_r0x000100470e6c;
  case 0x85:
    goto code_r0x000100470e7c;
  case 0x8d:
    goto code_r0x000100470e38;
  case 0x92:
    goto code_r0x000100470db8;
  case 0x93:
  case 0xbe:
    goto code_r0x000100470e4c;
  case 0x98:
    goto code_r0x000100470b6c;
  case 0x9a:
  case 0xb8:
  case 0xd5:
    goto code_r0x000100470f50;
  case 0x9c:
  case 0xbd:
  case 0xe2:
    goto code_r0x000100470f28;
  case 0x9d:
  case 0xba:
  case 0xe4:
    goto code_r0x000100470f40;
  case 0x9f:
  case 0xc6:
    goto code_r0x000100470f70;
  case 0xa0:
  case 0xf4:
    goto code_r0x000100470f88;
  case 0xa1:
  case 200:
    goto code_r0x000100470f48;
  case 0xa2:
  case 0xf5:
    goto code_r0x000100470fa0;
  case 0xa4:
  case 0xcb:
  case 0xee:
    goto code_r0x000100470f90;
  case 0xa7:
    goto code_r0x000100470f78;
  case 0xa9:
  case 0xe6:
    goto code_r0x000100470f30;
  case 0xac:
  case 0xfc:
    goto code_r0x000100470ff0;
  case 0xad:
  case 0xc3:
    goto code_r0x000100470af4;
  case 0xae:
  case 0xc4:
    goto code_r0x000100470b38;
  case 0xb1:
  case 0xe1:
    goto code_r0x000100470f10;
  case 0xb2:
    goto code_r0x000100470ed8;
  case 0xb6:
    goto code_r0x000100470f38;
  case 0xc2:
    goto code_r0x000100470f84;
  case 199:
    goto code_r0x000100470f80;
  case 0xcc:
  case 0xf9:
    goto code_r0x000100470fa8;
  case 0xcd:
    goto code_r0x000100470f68;
  case 0xce:
  case 0xf3:
    goto code_r0x000100470fc0;
  case 0xcf:
    goto LAB_100470f3c;
  case 0xd0:
  case 0xf2:
    goto code_r0x000100470fb0;
  case 0xd2:
    goto code_r0x000100470f14;
  case 0xd3:
    goto code_r0x000100470f98;
  case 0xd8:
    goto code_r0x000100471010;
  case 0xe9:
    break;
  case 0xef:
    goto code_r0x000100470adc;
  case 0xf0:
    goto code_r0x000100470b20;
  case 0xf7:
    goto code_r0x000100470fd0;
  case 0xf8:
code_r0x000100470fe8:
    pppppppbVar23 = (byte *******)((long)unaff_x25 + 1);
    pppppppbStack_298 = pppppppbVar32;
code_r0x000100470ff0:
    pppppppbStack_280 = pppppppbVar23;
code_r0x000100470ff4:
    pppppppbVar24 = (byte *******)&UNK_108cb9606;
    pppppppbVar29 = (byte *******)0x6;
code_r0x000100471000:
    pppppppbVar23 = (byte *******)&pppppppbStack_a8;
    pppppppbVar28 = (byte *******)&DAT_100c7b3a0;
    pppppppbStack_a8 = pppppppbVar24;
    pppppppbStack_a0 = pppppppbVar29;
code_r0x000100471010:
    unaff_x27 = pppppppbStack_2d0;
    bStack_90 = (byte)pppppppbVar23;
    cStack_8f = (char)((ulong)pppppppbVar23 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar23 >> 0x10);
    uStack_88 = SUB81(pppppppbVar28,0);
    uStack_87 = (undefined7)((ulong)pppppppbVar28 >> 8);
    ppppppbVar19 = (byte ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
    pppppppbVar32 = (byte *******)&pppppppbStack_2c0;
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar19;
    unaff_x21 = pppppppbStack_2c8;
joined_r0x000100470dc0:
    if (unaff_x24 != (byte *******)0x0) {
LAB_100470ca0:
      _free(unaff_x27);
    }
LAB_100470dc4:
    pppppppbVar23 = (byte *******)0x2;
code_r0x000100470dc8:
    in_OV = SBORROW8((long)unaff_x22,(ulong)pppppppbVar23 | 0x8000000000000000);
    in_NG = (long)((long)unaff_x22 - ((ulong)pppppppbVar23 | 0x8000000000000000)) < 0;
code_r0x000100470dd0:
    if (in_NG == in_OV) {
joined_r0x000100470cfc:
      if (unaff_x22 != (byte *******)0x0) {
code_r0x000100470dd8:
        _free(unaff_x21);
      }
    }
LAB_100470de0:
    FUN_100d34830(pppppppbVar32 + 4);
code_r0x000100470de8:
    in_ZR = (byte)pppppppbStack_2c0 == '\x16';
code_r0x000100470df0:
    if (!(bool)in_ZR) {
      FUN_100e077ec(&pppppppbStack_2c0);
    }
    goto LAB_100470f3c;
  case 0xfa:
    goto code_r0x000100471000;
  case 0xfd:
    goto code_r0x000100470f24;
  case 0xff:
    goto code_r0x000100470fd8;
  }
  pppppppbStack_270 = (byte *******)CONCAT71(pppppppbStack_270._1_7_,bVar22);
code_r0x000100470f1c:
  param_4 = &UNK_10b21b000;
code_r0x000100470f20:
  param_4 = param_4 + 2000;
code_r0x000100470f24:
  pppppppbVar18 = (byte *******)&pppppppbStack_270;
code_r0x000100470f28:
  param_3 = (byte *******)&pppppppbStack_a8;
code_r0x000100470f2c:
  pppppppbVar18 = (byte *******)FUN_107c05dcc(pppppppbVar18,param_3,param_4);
code_r0x000100470f30:
  pppppppbVar23 = (byte *******)0x6e;
code_r0x000100470f34:
  pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 | 0x8000000000000000);
code_r0x000100470f38:
  *param_2 = (byte ******)pppppppbVar23;
  param_2[1] = (byte ******)pppppppbVar18;
LAB_100470f3c:
code_r0x000100470f40:
code_r0x000100470f44:
code_r0x000100470f48:
code_r0x000100470f4c:
code_r0x000100470f50:
code_r0x000100470f54:
  return;
}

