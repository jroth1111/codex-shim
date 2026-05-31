
/* WARNING: Type propagation algorithm not settling */

void FUN_100485890(undefined1 param_1 [16],char *param_2,ulong *******param_3,undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 in_ZR;
  bool bVar15;
  ulong *******pppppppuVar16;
  ulong ******ppppppuVar17;
  ulong ******ppppppuVar18;
  uint uVar19;
  byte bVar20;
  ulong *******pppppppuVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  ulong *******pppppppuVar25;
  ulong *******unaff_x19;
  ulong *******pppppppuVar26;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar27;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined8 unaff_x30;
  ulong *******pppppppuVar29;
  byte abStack_344 [76];
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
  ulong ******ppppppuStack_2a0;
  ulong *******pppppppuStack_298;
  ulong *******pppppppuStack_290;
  ulong ******ppppppuStack_280;
  ulong *******pppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong ******ppppppuStack_268;
  ulong *******pppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong ******ppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong ******ppppppuStack_78;
  byte *pbVar9;
  
  ppppppuVar18 = param_1._8_8_;
  pppppppuVar29 = param_1._0_8_;
  puVar28 = &stack0xfffffffffffffff0;
  pbVar8 = abStack_344 + 0x44;
  pppppppuVar26 = (ulong *******)&uStack_90;
  bVar20 = *(byte *)param_3;
  pppppppuVar21 = (ulong *******)(ulong)bVar20;
  pppppppuVar25 = (ulong *******)&UNK_108c99ade;
  ppppppuVar17 = (ulong ******)
                 (&UNK_1004858d4 + (ulong)*(ushort *)(&UNK_108c99ade + (long)pppppppuVar21 * 2) * 4)
  ;
  pbVar10 = abStack_344 + 0x44;
  pbVar11 = abStack_344 + 0x44;
  pbVar12 = abStack_344 + 0x44;
  pbVar13 = abStack_344 + 0x44;
  pbVar14 = abStack_344 + 0x44;
  pbVar6 = abStack_344 + 0x44;
  pbVar7 = abStack_344 + 0x44;
  pbVar9 = abStack_344 + 0x44;
  pbVar3 = abStack_344 + 0x44;
  pbVar4 = abStack_344 + 0x44;
  pbVar5 = abStack_344 + 0x44;
  pppppppuVar16 = (ulong *******)param_2;
  switch(bVar20) {
  case 0:
  case 0xa5:
    bVar20 = *(byte *)((long)param_3 + 1);
  case 0x6e:
  case 0x85:
  case 0xb1:
  case 0xf2:
    ppppppuStack_280 = (ulong ******)((ulong)CONCAT61(ppppppuStack_280._2_6_,bVar20) << 8);
code_r0x000100486100:
    goto code_r0x000100486154;
  case 1:
    pppppppuVar21 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
    break;
  case 2:
  case 0xa8:
    pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x1b:
  case 0x2f:
  case 0x70:
  case 0xf4:
    break;
  case 3:
    pppppppuVar21 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x1c:
  case 0x71:
  case 0x84:
  case 0xb0:
  case 0xf5:
    break;
  case 4:
  case 0x25:
    pppppppuVar21 = (ulong *******)param_3[1];
  case 0x72:
  case 0xf6:
    break;
  case 5:
    pppppppuVar21 = (ulong *******)(long)*(char *)((long)param_3 + 1);
  case 0x32:
  case 0x5c:
  case 0x73:
  case 0xf7:
  case 0x61:
  case 0x76:
  case 0xfa:
code_r0x000100486148:
    pppppppuStack_278 = pppppppuVar21;
code_r0x00010048614c:
    bVar20 = 2;
    goto code_r0x000100486150;
  case 6:
    pppppppuVar21 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x34:
  case 0x74:
  case 0xf8:
    goto code_r0x000100486148;
  case 7:
    pppppppuVar21 = (ulong *******)(long)(int)*(uint *)((long)param_3 + 4);
  case 0x20:
  case 0x2d:
  case 99:
  case 0x75:
  case 0xf9:
    goto code_r0x000100486148;
  case 8:
    pppppppuVar21 = (ulong *******)param_3[1];
    goto code_r0x000100486148;
  case 9:
  case 0x17:
  case 0x3b:
  case 0x68:
  case 0x86:
  case 0xb2:
    pppppppuVar29 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x77:
  case 0xaa:
  case 0xfb:
    pppppppuVar29 = (ulong *******)(double)SUB84(pppppppuVar29,0);
code_r0x0001004860c8:
  case 0x78:
  case 0x8c:
  case 0xb8:
  case 0xfc:
code_r0x000100486138:
    bVar20 = 3;
    pppppppuStack_278 = pppppppuVar29;
    goto code_r0x000100486150;
  case 10:
    pppppppuVar29 = (ulong *******)param_3[1];
    goto code_r0x000100486138;
  case 0xb:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x79:
  case 0xfd:
    pbVar6 = &stack0xffffffffffffffa0;
    pppppppuVar26 = unaff_x19;
    puVar28 = unaff_x29;
code_r0x00010048607c:
    pbVar7 = pbVar6;
code_r0x000100486084:
    pbVar9 = pbVar7;
code_r0x000100486088:
    pbVar8 = pbVar9 + 0x60;
code_r0x00010048608c:
    *(ulong ********)(pbVar8 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar8 + -0x18) = pppppppuVar26;
    *(undefined1 **)(pbVar8 + -0x10) = puVar28;
    *(undefined8 *)(pbVar8 + -8) = unaff_x30;
    *(undefined4 *)(pbVar8 + -0x44) = 0;
    uVar19 = (uint)param_3;
    if (uVar19 < 0x80) {
      pbVar8[-0x44] = (byte)param_3;
      uVar22 = 1;
    }
    else {
      bVar20 = (byte)param_3 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        pbVar8[-0x44] = (byte)(uVar19 >> 6) | 0xc0;
        pbVar8[-0x43] = bVar20;
        uVar22 = 2;
      }
      else {
        bVar1 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          pbVar8[-0x44] = (byte)(uVar19 >> 0xc) | 0xe0;
          pbVar8[-0x43] = bVar1;
          pbVar8[-0x42] = bVar20;
          uVar22 = 3;
        }
        else {
          pbVar8[-0x44] = (byte)(uVar19 >> 0x12) | 0xf0;
          pbVar8[-0x43] = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          pbVar8[-0x42] = bVar1;
          pbVar8[-0x41] = bVar20;
          uVar22 = 4;
        }
      }
    }
    *(byte **)(pbVar8 + -0x38) = pbVar8 + -0x44;
    *(undefined8 *)(pbVar8 + -0x30) = uVar22;
    pbVar8[-0x40] = 5;
    ppppppuVar17 = (ulong ******)func_0x000108a4a50c(pbVar8 + -0x40,pbVar8 + -0x21,&UNK_10b21bdb0);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar17;
    return;
  case 0xc:
    param_3 = param_3 + 1;
  case 0x7a:
  case 0xfe:
code_r0x0001004860a0:
    pbVar10 = &stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
code_r0x0001004860a8:
    unaff_x20 = *(ulong ********)(pbVar10 + 0x40);
    pppppppuVar26 = *(ulong ********)(pbVar10 + 0x48);
    pbVar11 = pbVar10;
code_r0x0001004860ac:
    unaff_x22 = *(ulong ********)(pbVar11 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar11 + 0x38);
    pbVar12 = pbVar11;
code_r0x0001004860b0:
    pbVar13 = pbVar12;
code_r0x0001004860b4:
    pbVar14 = pbVar13;
code_r0x0001004860b8:
    *(ulong ********)(pbVar14 + 0x30) = unaff_x22;
    *(ulong ********)(pbVar14 + 0x38) = unaff_x21;
    *(ulong ********)(pbVar14 + 0x40) = unaff_x20;
    *(ulong ********)(pbVar14 + 0x48) = pppppppuVar26;
    *(undefined1 **)(pbVar14 + 0x50) = puVar28;
    *(undefined8 *)(pbVar14 + 0x58) = unaff_x30;
    ppppppuVar17 = param_3[1];
    ppppppuVar18 = param_3[2];
    *(ulong *******)(pbVar14 + 0x18) = ppppppuVar17;
    *(ulong *******)(pbVar14 + 0x20) = ppppppuVar18;
    pbVar14[0x10] = 5;
    ppppppuVar18 = (ulong ******)func_0x000108a4a50c(pbVar14 + 0x10,pbVar14 + 0x2f,&UNK_10b21bdb0);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xd:
  case 0x9e:
    pppppppuVar21 = (ulong *******)param_3[1];
    pppppppuVar25 = (ulong *******)param_3[2];
  case 0x36:
  case 100:
  case 0x7b:
  case 0x8a:
  case 0xb6:
  case 0xec:
  case 0xff:
    pppppppuStack_278 = pppppppuVar21;
    pppppppuStack_270 = pppppppuVar25;
code_r0x000100486124:
    bVar20 = 5;
code_r0x000100486128:
    goto code_r0x000100486150;
  case 0xe:
    param_3 = param_3 + 1;
  case 0x7c:
  case 0xcc:
    pbVar3 = &stack0xffffffffffffffa0;
code_r0x00010048604c:
    puVar28 = *(undefined1 **)(pbVar3 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar3 + 0x58);
    unaff_x20 = *(ulong ********)(pbVar3 + 0x40);
    pppppppuVar26 = *(ulong ********)(pbVar3 + 0x48);
    pbVar4 = pbVar3;
code_r0x000100486054:
    unaff_x22 = *(ulong ********)(pbVar4 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar4 + 0x38);
    pbVar5 = pbVar4;
code_r0x00010048605c:
    *(ulong ********)(pbVar5 + 0x30) = unaff_x22;
    *(ulong ********)(pbVar5 + 0x38) = unaff_x21;
    *(ulong ********)(pbVar5 + 0x40) = unaff_x20;
    *(ulong ********)(pbVar5 + 0x48) = pppppppuVar26;
    *(undefined1 **)(pbVar5 + 0x50) = puVar28;
    *(undefined8 *)(pbVar5 + 0x58) = unaff_x30;
    ppppppuVar17 = param_3[1];
    ppppppuVar18 = param_3[2];
    *(ulong *******)(pbVar5 + 0x18) = ppppppuVar17;
    *(ulong *******)(pbVar5 + 0x20) = ppppppuVar18;
    pbVar5[0x10] = 6;
    ppppppuVar18 = (ulong ******)func_0x000108a4a50c(pbVar5 + 0x10,pbVar5 + 0x2f,&UNK_10b21bdb0);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xf:
    pppppppuVar21 = (ulong *******)param_3[1];
    pppppppuVar25 = (ulong *******)param_3[2];
  case 0x23:
  case 0x33:
  case 0x7d:
  case 0x87:
  case 0xb3:
    bVar20 = 6;
    pppppppuStack_278 = pppppppuVar21;
    pppppppuStack_270 = pppppppuVar25;
code_r0x0001004860e0:
    goto code_r0x000100486150;
  case 0x10:
    bVar20 = 8;
  case 0x7e:
    goto code_r0x000100486150;
  default:
    pppppppuVar16 = (ulong *******)param_3[1];
    pppppppuStack_278 = (ulong *******)pppppppuVar16[1];
    ppppppuStack_280 = *pppppppuVar16;
    ppppppuStack_268 = pppppppuVar16[3];
    pppppppuStack_270 = (ulong *******)pppppppuVar16[2];
    func_0x000107c048ec(param_2,&ppppppuStack_280);
  case 0xad:
code_r0x000100485d20:
code_r0x000100485d28:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar16);
    return;
  case 0x12:
    bVar20 = 7;
  case 0x80:
    goto code_r0x000100486150;
  case 0x13:
    unaff_x20 = (ulong *******)param_3[1];
  case 0x3f:
  case 0x97:
  case 0xc3:
    pppppppuStack_278 = (ulong *******)unaff_x20[1];
    ppppppuStack_280 = *unaff_x20;
code_r0x000100485cf8:
    ppppppuStack_268 = unaff_x20[3];
    pppppppuStack_270 = (ulong *******)unaff_x20[2];
    param_3 = &ppppppuStack_280;
code_r0x000100485d04:
    pppppppuVar16 = unaff_x20;
    func_0x000107c054f8(param_2,param_3);
    goto code_r0x000100485d20;
  case 0x14:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
  case 0x40:
  case 0x98:
  case 0xc4:
    unaff_x26 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
code_r0x000100485d3c:
    pppppppuStack_2b0 = (ulong *******)0x0;
    pppppppuStack_2d0 = unaff_x20;
    pppppppuStack_2c8 = unaff_x20;
    pppppppuStack_2c0 = unaff_x23;
    pppppppuStack_2b8 = unaff_x24;
code_r0x000100485d48:
    unaff_x21 = unaff_x20;
code_r0x000100485d4c:
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x000100485d64:
      pppppppuStack_a8 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f648,&UNK_10b20a590);
code_r0x000100485d80:
      *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
      *(ulong ********)((long)param_2 + 8) = pppppppuStack_a8;
code_r0x000100485d8c:
      pppppppuVar21 = (ulong *******)((long)unaff_x24 - (long)unaff_x21);
code_r0x000100485d90:
      lVar27 = ((ulong)pppppppuVar21 >> 5) + 1;
      while (lVar27 = lVar27 + -1, lVar27 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x000100485db8:
        _free(unaff_x20);
code_r0x000100485dc0:
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2c8 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100485d64;
      uVar22 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar22;
      uStack_90._2_6_ = (undefined6)((ulong)uVar22 >> 8);
      uStack_88 = (undefined1)((ulong)uVar22 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2b0 = (ulong *******)0x1;
      uStack_90._0_1_ = *(byte *)unaff_x20;
code_r0x000100485de8:
      func_0x00010135ba2c(&pppppppuStack_b0,&uStack_90);
      if (pppppppuStack_b0 == (ulong *******)0x8000000000000001) goto code_r0x000100485d80;
      bVar15 = unaff_x26 == (ulong *******)0x1;
      unaff_x22 = pppppppuStack_a8;
      unaff_x25 = pppppppuStack_b0;
      unaff_x26 = pppppppuStack_a0;
      if (bVar15) {
code_r0x000100485e24:
        pppppppuVar16 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22f648,&UNK_10b20a590);
code_r0x000100485e3c:
        pppppppuVar21 = (ulong *******)0x6e;
code_r0x000100485e40:
        *(ulong *******)param_2 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
        *(ulong ********)((long)param_2 + 8) = pppppppuVar16;
        in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x000100485e4c:
        param_2 = (char *)unaff_x22;
        if (!(bool)in_ZR) {
code_r0x000100485e54:
          _free(param_2);
        }
        goto code_r0x000100485d8c;
      }
code_r0x000100485e10:
      unaff_x21 = unaff_x20 + 8;
      pppppppuStack_2c8 = unaff_x21;
code_r0x000100485e18:
      bVar20 = *(byte *)(unaff_x20 + 4);
      if (bVar20 == 0x16) goto code_r0x000100485e24;
code_r0x00010048619c:
      ppppppuVar18 = *(ulong *******)((long)unaff_x20 + 0x29);
      pppppppuVar29 = *(ulong ********)((long)unaff_x20 + 0x21);
code_r0x0001004861a0:
      uStack_87 = SUB87(ppppppuVar18,0);
      uStack_90._1_1_ = (char)pppppppuVar29;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar29 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar29 >> 0x38);
code_r0x0001004861a4:
      ppppppuVar18 = unaff_x20[7];
      pppppppuVar29 = (ulong *******)unaff_x20[6];
code_r0x0001004861a8:
      uStack_80 = SUB81(pppppppuVar29,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar29 >> 8);
      pppppppuStack_2b0 = (ulong *******)0x2;
      ppppppuStack_78 = ppppppuVar18;
code_r0x0001004861b4:
      uStack_90._0_1_ = bVar20;
code_r0x0001004861b8:
      pppppppuVar16 = (ulong *******)&pppppppuStack_b0;
code_r0x0001004861bc:
      param_3 = (ulong *******)&uStack_90;
code_r0x0001004861c0:
      func_0x0001012d39d8(pppppppuVar16,param_3);
      pppppppuVar25 = (ulong *******)0x8000000000000001;
      pppppppuVar16 = pppppppuStack_a8;
      pppppppuVar21 = pppppppuStack_b0;
code_r0x0001004861cc:
      in_ZR = pppppppuVar21 == pppppppuVar25;
code_r0x0001004861d0:
      if ((bool)in_ZR) goto code_r0x000100485e3c;
code_r0x0001004861d4:
      pppppppuVar26 = (ulong *******)0x800000000000006e;
code_r0x0001004861dc:
      *(ulong *******)((long)param_2 + 0x38) = ppppppuStack_98;
      *(ulong ********)((long)param_2 + 0x30) = pppppppuStack_a0;
      *(ulong *******)param_2 = (ulong ******)((long)pppppppuVar26 + -0x57);
      *(ulong ********)((long)param_2 + 8) = unaff_x25;
code_r0x0001004861ec:
      *(ulong ********)((long)param_2 + 0x10) = unaff_x22;
      *(ulong ********)((long)param_2 + 0x18) = unaff_x26;
      *(ulong ********)((long)param_2 + 0x20) = pppppppuVar21;
      *(ulong ********)((long)param_2 + 0x28) = pppppppuVar16;
      pppppppuVar16 = &ppppppuStack_280;
      param_3 = (ulong *******)param_2;
code_r0x0001004861fc:
      _memcpy(pppppppuVar16,param_3,0x1c0);
code_r0x000100486204:
      pppppppuVar25 = (ulong *******)FUN_100fbc738(&pppppppuStack_2d0);
      if (pppppppuVar25 != (ulong *******)0x0) {
code_r0x000100486210:
        *(ulong ********)param_2 = pppppppuVar26;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar25;
code_r0x000100486214:
        FUN_100e44f40(&ppppppuStack_280);
code_r0x00010048621c:
      }
    }
    goto LAB_100486174;
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
    ppppppuStack_2a0 = param_3[1];
    pppppppuStack_2b0 = (ulong *******)param_3[2];
    ppppppuVar17 = param_3[3];
    pppppppuStack_298 = pppppppuStack_2b0 + (long)ppppppuVar17 * 8;
    pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,0x16);
    pppppppuStack_290 = (ulong *******)0x0;
    unaff_x23 = (ulong *******)0x8000000000000001;
    pppppppuStack_2a8 = pppppppuStack_2b0;
    if (ppppppuVar17 != (ulong ******)0x0) {
      pppppppuVar21 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_90 | 1);
      unaff_x21 = (ulong *******)((ulong)&pppppppuStack_2d0 | 1);
      pppppppuStack_2f8 = (ulong *******)(((long)ppppppuVar17 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (ulong *******)0x8000000000000001;
      unaff_x24 = (ulong *******)0x8000000000000001;
      unaff_x28 = pppppppuStack_298;
      pppppppuVar16 = pppppppuStack_2b0;
      pppppppuStack_2f0 = (ulong *******)param_2;
      do {
        unaff_x26 = pppppppuVar16 + 8;
        pppppppuVar25 = (ulong *******)(ulong)*(byte *)pppppppuVar16;
        unaff_x25 = pppppppuVar21;
code_r0x000100485988:
        uVar19 = (uint)pppppppuVar25;
        if (uVar19 == 0x16) break;
        uStack_90._0_1_ = (byte)pppppppuVar25;
        ppppppuVar17 = pppppppuVar16[2];
        *(ulong *******)((long)unaff_x20 + 0x17) = pppppppuVar16[3];
        *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar17;
        ppppppuVar17 = *(ulong *******)((long)pppppppuVar16 + 1);
        unaff_x20[1] = *(ulong *******)((long)pppppppuVar16 + 9);
        *unaff_x20 = ppppppuVar17;
        pppppppuStack_2c8 = (ulong *******)pppppppuVar16[5];
        pppppppuStack_2d0 = (ulong *******)pppppppuVar16[4];
        pppppppuStack_2b8 = (ulong *******)pppppppuVar16[7];
        pppppppuStack_2c0 = (ulong *******)pppppppuVar16[6];
        pppppppuVar21 = (ulong *******)CONCAT71(uStack_87,uStack_88);
        param_2 = (char *)CONCAT71(uStack_7f,uStack_80);
        if (uVar19 < 0xd) {
          if (uVar19 == 1) {
            iVar24 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar24 = 2;
            }
            iVar23 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar23 = iVar24;
            }
          }
          else {
            ppppppuVar17 = ppppppuStack_78;
            if (uVar19 != 4) {
code_r0x0001004859cc:
              if ((int)pppppppuVar25 == 0xc) {
                if (ppppppuVar17 == (ulong ******)0x6) {
                  iVar23 = 1;
                  if (*(uint *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                    iVar23 = 2;
                  }
                }
                else if (ppppppuVar17 == (ulong ******)0x2) {
                  iVar23 = 2;
                  if (*(short *)param_2 == 0x6469) {
                    iVar23 = 0;
                  }
                }
                else {
                  iVar23 = 2;
                }
                goto joined_r0x000100485b58;
              }
code_r0x000100486348:
              pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
              pppppppuStack_2a8 = unaff_x26;
              param_2 = (char *)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_b0,&UNK_10b211440);
              unaff_x21 = (ulong *******)&pppppppuStack_2d0;
              pppppppuVar16 = pppppppuStack_2f0;
              goto code_r0x000100485eb4;
            }
            iVar24 = 1;
            if (pppppppuVar21 != (ulong *******)0x1) {
              iVar24 = 2;
            }
            iVar23 = 0;
            if (pppppppuVar21 != (ulong *******)0x0) {
              iVar23 = iVar24;
            }
          }
code_r0x000100485be4:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (uVar19 == 0xd) {
            if ((ulong *******)param_2 == (ulong *******)0x6) {
              pppppppuVar25 = (ulong *******)(ulong)(*(uint *)pppppppuVar21 ^ 0x61726170);
              pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar21 + 4);
              ppppppuVar17 = (ulong ******)0x736d;
code_r0x000100485bd0:
              iVar23 = 1;
              if ((int)pppppppuVar25 != 0 || (int)pppppppuVar21 != (int)ppppppuVar17) {
                iVar23 = 2;
              }
            }
            else {
              if ((ulong *******)param_2 != (ulong *******)0x2) goto code_r0x000100485bb0;
              iVar23 = 2;
              if (*(short *)pppppppuVar21 == 0x6469) {
                iVar23 = 0;
              }
            }
            goto code_r0x000100485be4;
          }
          if (uVar19 != 0xe) {
            if (uVar19 != 0xf) goto code_r0x000100486348;
            if ((ulong *******)param_2 == (ulong *******)0x6) {
              if (((*(char *)pppppppuVar21 == 'p') && (*(char *)((long)pppppppuVar21 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar21 + 2) == 'r')) {
                in_ZR = *(char *)((long)pppppppuVar21 + 3) == 'a';
code_r0x000100485b8c:
                if ((((bool)in_ZR) && (*(char *)((long)pppppppuVar21 + 4) == 'm')) &&
                   (*(char *)((long)pppppppuVar21 + 5) == 's')) {
                  iVar23 = 1;
                  goto code_r0x000100485be4;
                }
              }
            }
            else if ((((ulong *******)param_2 == (ulong *******)0x2) &&
                     (*(char *)pppppppuVar21 == 'i')) && (*(char *)((long)pppppppuVar21 + 1) == 'd')
                    ) {
              iVar23 = 0;
              goto code_r0x000100485be4;
            }
code_r0x000100485bb0:
            iVar23 = 2;
            goto code_r0x000100485be4;
          }
          if (ppppppuStack_78 == (ulong ******)0x6) {
            if (((((*param_2 != 'p') || (*(char *)((long)param_2 + 1) != 'a')) ||
                 (*(char *)((long)param_2 + 2) != 'r')) ||
                ((*(char *)((long)param_2 + 3) != 'a' || (*(char *)((long)param_2 + 4) != 'm')))) ||
               (*(char *)((long)param_2 + 5) != 's')) goto code_r0x000100485b20;
            iVar23 = 1;
          }
          else if (((ppppppuStack_78 == (ulong ******)0x2) && (*param_2 == 'i')) &&
                  (*(char *)((long)param_2 + 1) == 'd')) {
            iVar23 = 0;
          }
          else {
code_r0x000100485b20:
            iVar23 = 2;
          }
joined_r0x000100485b58:
          if (pppppppuVar21 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar20 = (byte)pppppppuStack_2d0;
        pppppppuVar25 = unaff_x26;
        if (iVar23 == 0) {
          if (unaff_x22 != unaff_x23) {
            pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_b0 = (ulong *******)&UNK_108ca26b0;
            pppppppuStack_a8 = (ulong *******)0x2;
            uStack_90._0_1_ = (byte)&pppppppuStack_b0;
            uStack_90._1_1_ = (char)((ulong)&pppppppuStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_2a8 = unaff_x26;
            param_2 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            unaff_x21 = (ulong *******)&pppppppuStack_2d0;
            pppppppuVar16 = pppppppuStack_2f0;
            goto code_r0x000100485eb4;
          }
          pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,0x16);
          if (bVar20 == 0x16) {
            pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_2a8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100486344;
          }
          ppppppuVar17 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar17;
          uVar22 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          uStack_90._0_1_ = bVar20;
          func_0x00010135ba2c(&pppppppuStack_b0,&uStack_90);
          if (pppppppuStack_b0 == unaff_x23) {
            pppppppuVar21 = (ulong *******)((long)unaff_x25 + 1);
            goto code_r0x00010048601c;
          }
          pppppppuStack_2d8 = pppppppuStack_a8;
          pppppppuStack_2e8 = pppppppuStack_a0;
          unaff_x22 = pppppppuStack_b0;
          unaff_x26 = unaff_x28;
        }
        else if (iVar23 == 1) {
          if (unaff_x24 != unaff_x23) goto code_r0x000100486220;
          pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,0x16);
          if (bVar20 == 0x16) {
            pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_2a8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100486344:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100486348);
            (*pcVar2)();
          }
          ppppppuVar17 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar17;
          uVar22 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          uStack_90._0_1_ = bVar20;
          func_0x0001012d39d8(&pppppppuStack_b0,&uStack_90);
          if (pppppppuStack_b0 == unaff_x23) {
            pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
            *pppppppuStack_2f0 = (ulong ******)0x800000000000006e;
            pppppppuStack_2f0[1] = (ulong ******)pppppppuStack_a8;
            pppppppuVar26 = pppppppuStack_2d8;
            pppppppuStack_2a8 = unaff_x26;
            goto code_r0x000100485fd8;
          }
          pppppppuStack_2e0 = pppppppuStack_a8;
          ppppppuStack_b8 = ppppppuStack_98;
          pppppppuStack_c0 = pppppppuStack_a0;
          unaff_x24 = pppppppuStack_b0;
          unaff_x26 = unaff_x28;
        }
        else {
          pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,0x16);
          if (bVar20 == 0x16) {
            pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_2a8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100486344;
          }
          ppppppuVar17 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar17;
          uVar22 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          uStack_90._0_1_ = bVar20;
          param_2 = (char *)&uStack_90;
code_r0x000100485ce4:
          FUN_100e077ec(param_2);
          pppppppuVar25 = unaff_x26;
          unaff_x26 = unaff_x28;
        }
        pppppppuVar26 = pppppppuVar16 + 8;
        pppppppuVar21 = (ulong *******)((long)unaff_x25 + 1);
        unaff_x25 = pppppppuStack_2f8;
        unaff_x28 = unaff_x26;
        pppppppuVar16 = pppppppuVar25;
      } while (pppppppuVar26 != unaff_x26);
      goto code_r0x000100485e64;
    }
    unaff_x24 = (ulong *******)0x8000000000000001;
    goto code_r0x000100485e80;
  case 0x16:
    goto code_r0x0001004860b0;
  case 0x18:
    goto code_r0x000100486088;
  case 0x19:
    goto code_r0x0001004860a0;
  case 0x1a:
  case 0xd0:
    goto code_r0x00010048604c;
  case 0x1d:
  case 0xd8:
    goto code_r0x0001004860a8;
  case 0x1e:
  case 0x31:
    goto code_r0x000100486100;
  case 0x1f:
  case 0x30:
    goto code_r0x00010048607c;
  case 0x21:
  case 0x3c:
    goto code_r0x000100486024;
  case 0x22:
  case 0x37:
    goto code_r0x000100486054;
  case 0x24:
  case 0xc9:
    goto code_r0x000100485ffc;
  case 0x26:
    goto LAB_100485ff4;
  case 0x28:
  case 0xe7:
    goto code_r0x000100486150;
  case 0x29:
    goto code_r0x000100485ce4;
  case 0x2a:
    goto code_r0x000100485d28;
  case 0x2c:
  case 0x8b:
  case 0xb7:
    goto code_r0x0001004860e0;
  case 0x2e:
    goto code_r0x0001004860b8;
  case 0x35:
    goto code_r0x0001004860ac;
  case 0x38:
  case 0x88:
  case 0xb4:
    goto code_r0x000100486084;
  case 0x39:
  case 0x6f:
  case 0x89:
  case 0xb5:
  case 0xf3:
    break;
  case 0x3a:
  case 0x94:
  case 0xc0:
  case 0xcb:
    goto code_r0x00010048602c;
  case 0x3e:
  case 0x9a:
  case 0xe8:
    goto code_r0x000100486180;
  case 0x42:
    goto code_r0x000100485e74;
  case 0x43:
    goto code_r0x000100485e84;
  case 0x44:
    goto code_r0x000100485e4c;
  case 0x45:
code_r0x000100485e64:
    pppppppuStack_2a8 = unaff_x26;
    pppppppuStack_290 = unaff_x25;
  case 0x49:
    pppppppuVar21 = (ulong *******)0x8000000000000001;
    in_ZR = unaff_x22 == (ulong *******)0x8000000000000001;
code_r0x000100485e74:
    param_2 = (char *)pppppppuStack_2f0;
    if (!(bool)in_ZR) {
      if (unaff_x24 == pppppppuVar21) {
        pppppppuStack_b0 = (ulong *******)&UNK_108cb9606;
        pppppppuStack_a8 = (ulong *******)0x6;
        pppppppuVar21 = (ulong *******)&pppppppuStack_b0;
        pppppppuVar25 = (ulong *******)&DAT_100c7b3a0;
code_r0x000100485f10:
        uStack_90._0_1_ = (byte)pppppppuVar21;
        uStack_90._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
        uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
        uStack_88 = SUB81(pppppppuVar25,0);
        uStack_87 = (undefined7)((ulong)pppppppuVar25 >> 8);
        ppppppuVar17 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
        *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
        *(ulong *******)((long)param_2 + 8) = ppppppuVar17;
        unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
        unaff_x21 = (ulong *******)&pppppppuStack_2d0;
        param_2 = (char *)pppppppuStack_2d8;
        goto joined_r0x000100485f38;
      }
      pppppppuVar26 = (ulong *******)0x800000000000006e;
      pppppppuVar29 = pppppppuStack_c0;
      ppppppuVar18 = ppppppuStack_b8;
code_r0x000100485f50:
      *(ulong *******)((long)param_2 + 0x38) = ppppppuVar18;
      *(ulong ********)((long)param_2 + 0x30) = pppppppuVar29;
      pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + -0x57);
code_r0x000100485f58:
      *(ulong ********)param_2 = pppppppuVar21;
      *(ulong ********)((long)param_2 + 8) = unaff_x22;
      *(ulong ********)((long)param_2 + 0x10) = pppppppuStack_2d8;
      *(ulong ********)((long)param_2 + 0x18) = pppppppuStack_2e8;
      *(ulong ********)((long)param_2 + 0x20) = unaff_x24;
      *(ulong ********)((long)param_2 + 0x28) = pppppppuStack_2e0;
      _memcpy(&ppppppuStack_280,param_2,0x1c0);
      pppppppuVar21 = (ulong *******)&pppppppuStack_2d0;
      pppppppuVar16 = (ulong *******)param_2;
code_r0x000100485f80:
      FUN_100d34830(pppppppuVar21 + 4);
      if (unaff_x28 == unaff_x26) goto LAB_100486174;
      uStack_90._0_1_ = (byte)unaff_x25;
      uStack_90._1_1_ = (char)((ulong)unaff_x25 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)unaff_x25 >> 0x10);
      param_4 = &UNK_10b23a190;
      param_2 = (char *)(((ulong)((long)unaff_x28 - (long)unaff_x26) >> 6) + (long)unaff_x25);
code_r0x000100485fa8:
      param_2 = (char *)thunk_FUN_1087e422c(param_2,&uStack_90,param_4);
code_r0x000100485fb0:
      pppppppuVar25 = (ulong *******)param_2;
      param_2 = (char *)pppppppuVar16;
      goto code_r0x000100486210;
    }
code_r0x000100485e80:
    unaff_x21 = (ulong *******)&pppppppuStack_2d0;
    pppppppuVar21 = (ulong *******)&UNK_108ca2000;
code_r0x000100485e84:
    pppppppuStack_b0 = pppppppuVar21 + 0xd6;
    pppppppuStack_a8 = (ulong *******)0x2;
    pppppppuVar21 = (ulong *******)&pppppppuStack_b0;
code_r0x000100485e94:
    pppppppuVar25 = (ulong *******)&DAT_100c7b3a0;
    pppppppuVar16 = (ulong *******)param_2;
code_r0x000100485e9c:
    uStack_90._0_1_ = (byte)pppppppuVar21;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_88 = SUB81(pppppppuVar25,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar25 >> 8);
    unaff_x22 = (ulong *******)0x8000000000000001;
    param_2 = s_missing_field_____108ac28f7;
code_r0x000100485eac:
    param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_90);
code_r0x000100485eb4:
    *pppppppuVar16 = (ulong ******)0x800000000000006e;
    pppppppuVar16[1] = (ulong ******)param_2;
    pppppppuVar21 = (ulong *******)0x2;
code_r0x000100485ec4:
    if (((long)((ulong)pppppppuVar21 | 0x8000000000000000) <= (long)unaff_x24) &&
       (pppppppuVar26 = pppppppuStack_2d8, unaff_x24 != (ulong *******)0x0)) {
LAB_100485ee0:
      _free(pppppppuStack_2e0);
      pppppppuStack_2d8 = pppppppuVar26;
    }
LAB_100485fdc:
    pppppppuVar21 = (ulong *******)0x8000000000000002;
    pppppppuVar26 = pppppppuStack_2d8;
code_r0x000100485fe4:
    if ((long)pppppppuVar21 <= (long)unaff_x22) {
code_r0x000100485fec:
      param_2 = (char *)pppppppuVar26;
joined_r0x000100485f38:
      if (unaff_x22 != (ulong *******)0x0) {
LAB_100485ff4:
        _free(param_2);
      }
    }
    param_2 = (char *)(unaff_x21 + 4);
code_r0x000100485ffc:
    FUN_100d34830(param_2);
    pppppppuVar21 = (ulong *******)((ulong)pppppppuStack_2d0 & 0xff);
code_r0x000100486004:
    if ((int)pppppppuVar21 != 0x16) {
code_r0x00010048600c:
      FUN_100e077ec(&pppppppuStack_2d0);
    }
    goto LAB_100486174;
  case 0x46:
    goto code_r0x000100485e10;
  case 0x47:
    goto code_r0x000100485e94;
  case 0x48:
    goto code_r0x000100485eac;
  case 0x4a:
    goto code_r0x000100485ec4;
  case 0x4b:
    goto code_r0x000100485e40;
  case 0x4c:
    goto code_r0x000100485eb4;
  case 0x4d:
    goto code_r0x000100485de8;
  case 0x4e:
    goto code_r0x000100485e18;
  case 0x4f:
    goto code_r0x000100485e9c;
  case 0x50:
    goto code_r0x000100485dc0;
  case 0x51:
    goto code_r0x000100485e54;
  case 0x52:
    goto code_r0x000100485db8;
  case 0x54:
    goto code_r0x000100485f10;
  case 0x55:
    goto code_r0x000100485b8c;
  case 0x56:
    goto code_r0x000100485bd0;
  case 0x58:
    goto code_r0x00010048617c;
  case 0x59:
    goto code_r0x00010048618c;
  case 0x5a:
    goto code_r0x000100486154;
  case 0x5b:
    goto code_r0x00010048616c;
  case 0x5d:
    goto code_r0x00010048619c;
  case 0x5e:
  case 0xde:
    goto code_r0x0001004861b4;
  case 0x5f:
    goto LAB_100486174;
  case 0x60:
  case 0xdf:
    goto code_r0x0001004861cc;
  case 0x62:
  case 0xeb:
    goto code_r0x0001004861bc;
  case 0x65:
    goto code_r0x0001004861a4;
  case 0x66:
  case 0x93:
  case 0xbf:
    goto code_r0x0001004860c8;
  case 0x67:
    goto code_r0x00010048615c;
  case 0x6a:
  case 0xe1:
    goto code_r0x0001004861fc;
  case 0x6b:
    goto code_r0x000100485988;
  case 0x6c:
    goto code_r0x0001004859cc;
  case 0x81:
    goto code_r0x000100485cf8;
  case 0x82:
    goto code_r0x000100485d3c;
  case 0x8d:
  case 0xb9:
    goto code_r0x0001004860b4;
  case 0x8e:
  case 0xba:
  case 0xea:
    goto code_r0x000100486128;
  case 0x8f:
  case 0xbb:
  case 0xce:
    goto code_r0x00010048605c;
  case 0x90:
  case 0xbc:
    goto code_r0x00010048608c;
  case 0x91:
  case 0xbd:
    goto code_r0x000100486110;
  case 0x92:
  case 0xbe:
  case 0xd3:
    goto code_r0x000100486034;
  case 0x96:
  case 0xc2:
    goto code_r0x000100486188;
  case 0x9b:
    goto code_r0x000100486190;
  case 0x9c:
    goto code_r0x000100486158;
  case 0x9d:
    goto code_r0x000100486170;
  case 0x9f:
    goto code_r0x0001004861a0;
  case 0xa0:
    goto code_r0x0001004861b8;
  case 0xa1:
  case 0xe0:
    goto code_r0x000100486178;
  case 0xa2:
    goto code_r0x0001004861d0;
  case 0xa3:
    goto code_r0x00010048614c;
  case 0xa4:
    goto code_r0x0001004861c0;
  case 0xa6:
    goto code_r0x000100486124;
  case 0xa7:
  case 0xe5:
    goto code_r0x0001004861a8;
  case 0xa9:
    goto code_r0x000100486160;
  case 0xac:
code_r0x000100486220:
    pppppppuStack_290 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_2a8 = unaff_x26;
  case 0xe4:
    pppppppuStack_b0 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a8 = (ulong *******)0x6;
    uStack_90._0_1_ = (byte)&pppppppuStack_b0;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_b0 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    ppppppuVar17 = (ulong ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    unaff_x21 = (ulong *******)&pppppppuStack_2d0;
    *pppppppuStack_2f0 = (ulong ******)0x800000000000006e;
    pppppppuStack_2f0[1] = ppppppuVar17;
    pppppppuVar26 = pppppppuStack_2d8;
    if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
code_r0x00010048627c:
      goto LAB_100485ee0;
    }
    goto LAB_100485fdc;
  case 0xae:
    goto code_r0x000100485d64;
  case 0xc6:
    goto code_r0x00010048600c;
  case 199:
code_r0x00010048601c:
    pppppppuStack_2a8 = unaff_x26;
    pppppppuStack_290 = pppppppuVar21;
code_r0x000100486024:
    unaff_x22 = (ulong *******)0x8000000000000001;
    param_2 = (char *)pppppppuStack_a8;
code_r0x00010048602c:
    unaff_x21 = (ulong *******)&pppppppuStack_2d0;
    pppppppuVar16 = pppppppuStack_2f0;
code_r0x000100486034:
    goto code_r0x000100485eb4;
  case 200:
    goto code_r0x000100485fe4;
  case 0xca:
    goto code_r0x000100485fa8;
  case 0xcd:
    goto code_r0x000100486004;
  case 0xcf:
code_r0x000100485fd8:
    unaff_x21 = (ulong *******)&pppppppuStack_2d0;
    pppppppuStack_2d8 = pppppppuVar26;
    goto LAB_100485fdc;
  case 0xd1:
    goto code_r0x000100485f80;
  case 0xd2:
    goto code_r0x000100485fb0;
  case 0xd4:
    goto code_r0x000100485f58;
  case 0xd5:
    goto code_r0x000100485fec;
  case 0xd6:
    goto code_r0x000100485f50;
  case 0xd9:
    goto code_r0x000100485d04;
  case 0xda:
    goto code_r0x000100485d48;
  case 0xdc:
    goto code_r0x0001004861dc;
  case 0xdd:
    goto code_r0x0001004861ec;
  case 0xe2:
    goto code_r0x000100486214;
  case 0xe3:
    goto code_r0x0001004861d4;
  case 0xe6:
    goto code_r0x00010048621c;
  case 0xe9:
    goto code_r0x000100486204;
  case 0xee:
    goto code_r0x00010048627c;
  case 0xef:
    goto code_r0x000100485d4c;
  case 0xf0:
    goto code_r0x000100485d90;
  }
  bVar20 = 1;
  pppppppuStack_278 = pppppppuVar21;
code_r0x000100486110:
code_r0x000100486150:
  ppppppuStack_280 = (ulong ******)CONCAT71(ppppppuStack_280._1_7_,bVar20);
code_r0x000100486154:
  param_4 = &UNK_10b21b000;
code_r0x000100486158:
  param_4 = param_4 + 0xdb0;
code_r0x00010048615c:
  pppppppuVar16 = &ppppppuStack_280;
code_r0x000100486160:
  pppppppuVar16 = (ulong *******)FUN_107c05dcc(pppppppuVar16,&pppppppuStack_b0,param_4);
  pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010048616c:
  pppppppuVar21 = (ulong *******)((ulong)pppppppuVar21 | 0x8000000000000000);
code_r0x000100486170:
  *(ulong ********)param_2 = pppppppuVar21;
  *(ulong ********)((long)param_2 + 8) = pppppppuVar16;
LAB_100486174:
code_r0x000100486178:
code_r0x00010048617c:
code_r0x000100486180:
code_r0x000100486188:
code_r0x00010048618c:
code_r0x000100486190:
  return;
}

