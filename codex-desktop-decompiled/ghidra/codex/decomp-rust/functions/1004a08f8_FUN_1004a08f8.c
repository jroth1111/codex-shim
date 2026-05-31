
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a08f8(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
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
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined1 in_ZR;
  ulong *******pppppppuVar23;
  ulong ******ppppppuVar24;
  ulong ******ppppppuVar25;
  uint uVar26;
  byte bVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  ulong *******pppppppuVar33;
  ulong *******pppppppuVar34;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar35;
  ulong *******unaff_x25;
  ulong *******pppppppuVar36;
  ulong *******pppppppuVar37;
  ulong *******unaff_x27;
  ulong *******pppppppuVar38;
  undefined1 *unaff_x29;
  undefined1 *puVar39;
  undefined8 unaff_x30;
  ulong *******pppppppuVar40;
  ulong *******pppppppuVar41;
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
  ulong ******ppppppuStack_260;
  ulong ******ppppppuStack_258;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong *******pppppppuStack_78;
  byte *pbVar16;
  
  pppppppuVar41 = param_1._8_8_;
  pppppppuVar40 = param_1._0_8_;
  puVar39 = &stack0xfffffffffffffff0;
  pbVar15 = abStack_340 + 0x50;
  pbVar22 = abStack_340 + 0x50;
  pbVar9 = abStack_340 + 0x50;
  pppppppuVar37 = (ulong *******)&uStack_90;
  bVar27 = *(byte *)param_3;
  pppppppuVar28 = (ulong *******)(ulong)bVar27;
  pppppppuVar33 = (ulong *******)&UNK_108c9a074;
  pppppppuVar34 =
       (ulong *******)
       (&UNK_1004a093c + (ulong)*(ushort *)(&UNK_108c9a074 + (long)pppppppuVar28 * 2) * 4);
  pbVar17 = abStack_340 + 0x50;
  pbVar18 = abStack_340 + 0x50;
  pbVar19 = abStack_340 + 0x50;
  pbVar20 = abStack_340 + 0x50;
  pbVar21 = abStack_340 + 0x50;
  pbVar10 = abStack_340 + 0x50;
  pbVar11 = abStack_340 + 0x50;
  pbVar12 = abStack_340 + 0x50;
  pbVar13 = abStack_340 + 0x50;
  pbVar14 = abStack_340 + 0x50;
  pbVar16 = abStack_340 + 0x50;
  pbVar5 = abStack_340 + 0x50;
  pbVar6 = abStack_340 + 0x50;
  pbVar7 = abStack_340 + 0x50;
  pbVar8 = abStack_340 + 0x50;
  pppppppuVar23 = param_2;
  pppppppuVar29 = pppppppuVar28;
  pppppppuVar2 = unaff_x22;
  pppppppuVar3 = unaff_x25;
  pppppppuVar36 = pppppppuVar37;
  pppppppuVar38 = unaff_x27;
  switch(bVar27) {
  case 0:
  case 0x16:
  case 0x85:
  case 0x9a:
    bVar27 = *(byte *)((long)param_3 + 1);
  case 0x3e:
  case 0xe5:
    ppppppuStack_270 = (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar27) << 8);
code_r0x0001004a1158:
    ppppppuStack_270 = (ulong ******)((ulong)ppppppuStack_270 & 0xffffffffffffff00);
code_r0x0001004a115c:
    goto code_r0x0001004a11b0;
  case 1:
  case 0x17:
  case 0x4b:
  case 0x89:
  case 0x9b:
  case 0xde:
    pppppppuVar28 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
    break;
  case 2:
  case 0x18:
  case 0x60:
  case 0x7e:
  case 0x9c:
    pppppppuVar28 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0xbf:
  case 0xe8:
    break;
  case 3:
  case 0x19:
  case 0x84:
  case 0x9d:
  case 0xfb:
    pppppppuVar28 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xb7:
    break;
  case 4:
  case 0x1a:
  case 0x32:
  case 0x9e:
    pppppppuVar28 = (ulong *******)param_3[1];
  case 0xbc:
    break;
  case 5:
  case 0x1b:
  case 0x9f:
    pppppppuVar28 = (ulong *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0x51:
  case 0xbd:
  case 0xf2:
    goto code_r0x0001004a11a4;
  case 6:
  case 0x1c:
  case 0x7a:
  case 0xa0:
  case 0xdc:
    pppppppuVar28 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x49:
  case 0xba:
    goto code_r0x0001004a11a4;
  case 7:
  case 0x1d:
  case 0xa1:
    pppppppuVar28 = (ulong *******)(long)*(int *)((long)param_3 + 4);
  case 0xb0:
  case 0xf4:
code_r0x0001004a11a4:
    pppppppuStack_268 = pppppppuVar28;
code_r0x0001004a11a8:
    bVar27 = 2;
    goto code_r0x0001004a11ac;
  case 8:
  case 0x1e:
  case 0xa2:
    pppppppuVar28 = (ulong *******)param_3[1];
    goto code_r0x0001004a11a4;
  case 9:
  case 0x1f:
  case 0xa3:
    pppppppuVar40 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x93:
    pppppppuVar40 = (ulong *******)(double)SUB84(pppppppuVar40,0);
code_r0x0001004a1124:
code_r0x0001004a1194:
    pppppppuStack_268 = pppppppuVar40;
code_r0x0001004a1198:
    bVar27 = 3;
code_r0x0001004a119c:
    goto code_r0x0001004a11ac;
  case 10:
  case 0x20:
  case 0x8c:
  case 0xa4:
    pppppppuVar40 = (ulong *******)param_3[1];
    goto code_r0x0001004a1194;
  case 0xb:
  case 0x21:
  case 0x2d:
  case 0xa5:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x5b:
code_r0x0001004a10cc:
    pbVar10 = &stack0xffffffffffffffa0;
code_r0x0001004a10d0:
    puVar39 = *(undefined1 **)(pbVar10 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar10 + 0x58);
    pbVar11 = pbVar10;
code_r0x0001004a10d4:
    unaff_x20 = *(ulong ********)(pbVar11 + 0x40);
    pppppppuVar23 = *(ulong ********)(pbVar11 + 0x48);
    pbVar12 = pbVar11;
code_r0x0001004a10d8:
    pbVar13 = pbVar12;
code_r0x0001004a10dc:
    pbVar14 = pbVar13;
code_r0x0001004a10e0:
    pbVar16 = pbVar14;
code_r0x0001004a10e4:
    pbVar15 = pbVar16 + 0x60;
code_r0x0001004a10e8:
    *(ulong ********)(pbVar15 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar15 + -0x18) = pppppppuVar23;
    *(undefined1 **)(pbVar15 + -0x10) = puVar39;
    *(undefined8 *)(pbVar15 + -8) = unaff_x30;
    *(undefined4 *)(pbVar15 + -0x44) = 0;
    uVar26 = (uint)param_3;
    if (uVar26 < 0x80) {
      pbVar15[-0x44] = (byte)param_3;
      uVar30 = 1;
    }
    else {
      bVar27 = (byte)param_3 & 0x3f | 0x80;
      if (uVar26 < 0x800) {
        pbVar15[-0x44] = (byte)(uVar26 >> 6) | 0xc0;
        pbVar15[-0x43] = bVar27;
        uVar30 = 2;
      }
      else {
        bVar1 = (byte)(uVar26 >> 6) & 0x3f | 0x80;
        if (uVar26 < 0x10000) {
          pbVar15[-0x44] = (byte)(uVar26 >> 0xc) | 0xe0;
          pbVar15[-0x43] = bVar1;
          pbVar15[-0x42] = bVar27;
          uVar30 = 3;
        }
        else {
          pbVar15[-0x44] = (byte)(uVar26 >> 0x12) | 0xf0;
          pbVar15[-0x43] = (byte)(uVar26 >> 0xc) & 0x3f | 0x80;
          pbVar15[-0x42] = bVar1;
          pbVar15[-0x41] = bVar27;
          uVar30 = 4;
        }
      }
    }
    *(byte **)(pbVar15 + -0x38) = pbVar15 + -0x44;
    *(undefined8 *)(pbVar15 + -0x30) = uVar30;
    pbVar15[-0x40] = 5;
    ppppppuVar24 = (ulong ******)func_0x000108a4a50c(pbVar15 + -0x40,pbVar15 + -0x21,&UNK_10b21a2b0)
    ;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar24;
    return;
  case 0xc:
  case 0x22:
  case 0x36:
  case 0xa6:
    param_3 = param_3 + 1;
  case 0x5d:
code_r0x0001004a10fc:
    pbVar17 = &stack0xffffffffffffffa0;
code_r0x0001004a1100:
    puVar39 = *(undefined1 **)(pbVar17 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar17 + 0x58);
    pbVar18 = pbVar17;
code_r0x0001004a1104:
    unaff_x20 = *(ulong ********)(pbVar18 + 0x40);
    pppppppuVar23 = *(ulong ********)(pbVar18 + 0x48);
    pbVar19 = pbVar18;
code_r0x0001004a1108:
    unaff_x22 = *(ulong ********)(pbVar19 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar19 + 0x38);
    pbVar20 = pbVar19;
code_r0x0001004a110c:
    pbVar21 = pbVar20;
code_r0x0001004a1110:
    pbVar22 = pbVar21 + 0x60;
code_r0x0001004a1118:
    *(ulong ********)(pbVar22 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar22 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar22 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar22 + -0x18) = pppppppuVar23;
    *(undefined1 **)(pbVar22 + -0x10) = puVar39;
    *(undefined8 *)(pbVar22 + -8) = unaff_x30;
    ppppppuVar24 = param_3[1];
    ppppppuVar25 = param_3[2];
    *(ulong *******)(pbVar22 + -0x48) = ppppppuVar24;
    *(ulong *******)(pbVar22 + -0x40) = ppppppuVar25;
    pbVar22[-0x50] = 5;
    ppppppuVar25 = (ulong ******)func_0x000108a4a50c(pbVar22 + -0x50,pbVar22 + -0x31,&UNK_10b21a2b0)
    ;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar25;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar24);
    }
    return;
  case 0xd:
  case 0x23:
  case 0x8a:
  case 0xa7:
  case 0xdf:
    pppppppuStack_268 = (ulong *******)param_3[1];
    ppppppuStack_260 = param_3[2];
  case 0x72:
  case 0x8e:
  case 0xe3:
    bVar27 = 5;
code_r0x0001004a1184:
    goto code_r0x0001004a11ac;
  case 0xe:
  case 0x24:
  case 0xa8:
    param_3 = param_3 + 1;
  case 0x2f:
  case 0x61:
    pbVar5 = &stack0xffffffffffffffa0;
    puVar39 = unaff_x29;
code_r0x0001004a10ac:
    unaff_x20 = *(ulong ********)(pbVar5 + 0x40);
    pppppppuVar23 = *(ulong ********)(pbVar5 + 0x48);
    pbVar6 = pbVar5;
code_r0x0001004a10b0:
    unaff_x22 = *(ulong ********)(pbVar6 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar6 + 0x38);
    pbVar7 = pbVar6;
code_r0x0001004a10b4:
    pbVar8 = pbVar7;
code_r0x0001004a10b8:
    pbVar9 = pbVar8 + 0x60;
code_r0x0001004a10c0:
    *(ulong ********)(pbVar9 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar9 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar9 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar9 + -0x18) = pppppppuVar23;
    *(undefined1 **)(pbVar9 + -0x10) = puVar39;
    *(undefined8 *)(pbVar9 + -8) = unaff_x30;
    ppppppuVar24 = param_3[1];
    ppppppuVar25 = param_3[2];
    *(ulong *******)(pbVar9 + -0x48) = ppppppuVar24;
    *(ulong *******)(pbVar9 + -0x40) = ppppppuVar25;
    pbVar9[-0x50] = 6;
    ppppppuVar25 = (ulong ******)func_0x000108a4a50c(pbVar9 + -0x50,pbVar9 + -0x31,&UNK_10b21a2b0);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar25;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar24);
    }
    return;
  case 0xf:
  case 0x25:
  case 0x46:
  case 0x7c:
  case 0x87:
  case 0xa9:
    pppppppuStack_268 = (ulong *******)param_3[1];
    ppppppuStack_260 = param_3[2];
  case 0x4e:
  case 0x8b:
    bVar27 = 6;
code_r0x0001004a113c:
    goto code_r0x0001004a11ac;
  case 0x10:
  case 0x26:
  case 0x3b:
  case 0xaa:
    bVar27 = 8;
  case 0xbe:
    goto code_r0x0001004a11ac;
  default:
    pppppppuVar23 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)pppppppuVar23[1];
    ppppppuStack_270 = *pppppppuVar23;
    ppppppuStack_258 = pppppppuVar23[3];
    ppppppuStack_260 = pppppppuVar23[2];
    func_0x000107c04784(param_2,&ppppppuStack_270);
    goto code_r0x0001004a0d88;
  case 0x12:
  case 0x28:
  case 0xac:
    bVar27 = 7;
  case 0x6f:
    goto code_r0x0001004a11ac;
  case 0x13:
  case 0x29:
  case 0xad:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuStack_258 = unaff_x20[3];
    ppppppuStack_260 = unaff_x20[2];
  case 0xef:
    pppppppuVar23 = unaff_x20;
    func_0x000107c05320(param_2,&ppppppuStack_270);
code_r0x0001004a0d88:
code_r0x0001004a0d90:
code_r0x0001004a0d94:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar23);
    return;
  case 0x14:
  case 0x2a:
  case 0xae:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x27 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x27 * 4;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
  case 0xf0:
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    if (unaff_x27 == (ulong *******)0x0) {
code_r0x0001004a0dd0:
      param_3 = (ulong *******)&UNK_10b22f908;
code_r0x0001004a0dd8:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,param_3,&UNK_10b20a590);
code_r0x0001004a0dec:
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = (ulong ******)pppppppuStack_a0;
code_r0x0001004a0df8:
      pppppppuVar28 = (ulong *******)((long)unaff_x24 - (long)unaff_x21);
code_r0x0001004a0dfc:
      lVar35 = ((ulong)pppppppuVar28 >> 5) + 1;
      while (lVar35 = lVar35 + -1, lVar35 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      bVar27 = *(byte *)unaff_x20;
      in_ZR = bVar27 == 0x16;
      pppppppuStack_2b8 = unaff_x21;
code_r0x0001004a0dcc:
      if ((bool)in_ZR) goto code_r0x0001004a0dd0;
      uVar30 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar30;
      uStack_90._2_6_ = (undefined6)((ulong)uVar30 >> 8);
      uStack_88 = (undefined1)((ulong)uVar30 >> 0x38);
code_r0x0001004a0e40:
      uStack_90._0_1_ = bVar27;
      pppppppuStack_78 = (ulong *******)unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x0001004a0dec;
      if (unaff_x27 == (ulong *******)0x1) {
code_r0x0001004a0e90:
        pppppppuVar23 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22f908,&UNK_10b20a590);
code_r0x0001004a0ea8:
        *param_2 = (ulong ******)0x800000000000006e;
        param_2[1] = (ulong ******)pppppppuVar23;
        if (((ulong)pppppppuStack_a8 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_a0);
        }
        goto code_r0x0001004a0df8;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar27 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar27 == 0x16) goto code_r0x0001004a0e90;
      uVar30 = *(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_90._1_1_ = (char)uVar30;
      uStack_90._2_6_ = (undefined6)((ulong)uVar30 >> 8);
      uStack_88 = (undefined1)((ulong)uVar30 >> 0x38);
      pppppppuVar41 = (ulong *******)unaff_x20[7];
      pppppppuVar40 = (ulong *******)unaff_x20[6];
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x27 = pppppppuStack_98;
code_r0x0001004a1204:
      uStack_80 = SUB81(pppppppuVar40,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar40 >> 8);
      pppppppuVar33 = (ulong *******)0x2;
      pppppppuStack_78 = pppppppuVar41;
code_r0x0001004a120c:
      pppppppuStack_2a0 = pppppppuVar33;
code_r0x0001004a1210:
      uStack_90._0_1_ = bVar27;
      pppppppuVar23 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004a1218:
      param_3 = (ulong *******)&uStack_90;
code_r0x0001004a121c:
      func_0x00010125d1ec(pppppppuVar23,param_3);
      pppppppuVar23 = pppppppuStack_a0;
      pppppppuVar28 = pppppppuStack_a8;
      pppppppuVar2 = unaff_x22;
      pppppppuVar3 = unaff_x25;
code_r0x0001004a1224:
      pppppppuStack_a8 = pppppppuVar3;
      pppppppuStack_a0 = pppppppuVar2;
      if (pppppppuVar28 == (ulong *******)0x8000000000000000) goto code_r0x0001004a0ea8;
      unaff_x20 = (ulong *******)0x6e;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
code_r0x0001004a1234:
      unaff_x20 = (ulong *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
      pppppppuVar34 = unaff_x20 + -8;
      pppppppuVar33 = pppppppuStack_98;
code_r0x0001004a1240:
      *param_2 = (ulong ******)pppppppuVar34;
      param_2[1] = (ulong ******)pppppppuVar28;
      param_2[2] = (ulong ******)pppppppuVar23;
      param_2[3] = (ulong ******)pppppppuVar33;
      param_2[4] = (ulong ******)unaff_x25;
      param_2[5] = (ulong ******)unaff_x22;
      param_2[6] = (ulong ******)unaff_x27;
      _memcpy(&ppppppuStack_270,param_2,0x1c0);
      pppppppuVar23 = (ulong *******)FUN_100fbc738(&pppppppuStack_2c0);
code_r0x0001004a1268:
      if (pppppppuVar23 != (ulong *******)0x0) {
code_r0x0001004a126c:
        *param_2 = (ulong ******)unaff_x20;
        param_2[1] = (ulong ******)pppppppuVar23;
code_r0x0001004a1270:
        FUN_100e44f40(&ppppppuStack_270);
      }
    }
    goto code_r0x0001004a11d4;
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
    pppppppuVar37 = (ulong *******)param_3[2];
    ppppppuVar24 = param_3[3];
    unaff_x23 = pppppppuVar37 + (long)ppppppuVar24 * 8;
    pppppppuStack_2a0 = pppppppuVar37;
    pppppppuStack_298 = pppppppuVar37;
    ppppppuStack_290 = param_3[1];
    pppppppuStack_288 = unaff_x23;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    if (ppppppuVar24 == (ulong ******)0x0) {
      unaff_x24 = (ulong *******)0x0;
code_r0x0001004a0eec:
      pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
      pppppppuStack_a0 = (ulong *******)0x2;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x22 = (ulong *******)0x8000000000000001;
      ppppppuVar24 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      pppppppuStack_2c8 = unaff_x21;
      goto LAB_1004a0f20;
    }
    unaff_x25 = (ulong *******)0x0;
    unaff_x20 = (ulong *******)((ulong)&uStack_90 | 1);
    unaff_x21 = (ulong *******)((ulong)&pppppppuStack_2c0 | 1);
    pppppppuStack_2e8 = (ulong *******)(((long)ppppppuVar24 * 0x40 - 0x40U >> 6) + 1);
    unaff_x22 = (ulong *******)0x8000000000000001;
    unaff_x24 = (ulong *******)0x8000000000000000;
    do {
      pppppppuVar37 = pppppppuVar37 + 8;
      pppppppuVar38 = pppppppuVar37;
code_r0x0001004a09e0:
      unaff_x27 = pppppppuVar38 + -8;
      bVar27 = *(byte *)unaff_x27;
      pppppppuVar33 = (ulong *******)(ulong)bVar27;
      pppppppuVar23 = unaff_x25;
      pppppppuVar36 = pppppppuVar37;
      if (bVar27 == 0x16) break;
      uStack_90._0_1_ = bVar27;
      ppppppuVar24 = pppppppuVar38[-6];
      *(ulong *******)((long)unaff_x20 + 0x17) = pppppppuVar38[-5];
      *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar24;
      ppppppuVar24 = *(ulong *******)((long)pppppppuVar38 + -0x3f);
      unaff_x20[1] = *(ulong *******)((long)pppppppuVar38 + -0x37);
      *unaff_x20 = ppppppuVar24;
      pppppppuStack_2b8 = (ulong *******)pppppppuVar38[-3];
      pppppppuStack_2c0 = (ulong *******)pppppppuVar38[-4];
      pppppppuStack_2a8 = (ulong *******)pppppppuVar38[-1];
      pppppppuStack_2b0 = (ulong *******)pppppppuVar38[-2];
      pppppppuVar28 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      pppppppuVar23 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
      if (bVar27 < 0xd) {
        if (bVar27 == 1) {
          iVar32 = 1;
          if (uStack_90._1_1_ != '\x01') {
            iVar32 = 2;
          }
          iVar31 = 0;
          if (uStack_90._1_1_ != '\0') {
            iVar31 = iVar32;
          }
        }
        else {
          in_ZR = bVar27 == 4;
          pppppppuVar34 = pppppppuStack_78;
code_r0x0001004a0a24:
          if (!(bool)in_ZR) {
            if ((int)pppppppuVar33 == 0xc) {
              if (pppppppuVar34 == (ulong *******)0x6) {
                iVar31 = 1;
                if (*(int *)pppppppuVar23 != 0x61726170 ||
                    *(short *)((long)pppppppuVar23 + 4) != 0x736d) {
                  iVar31 = 2;
                }
              }
              else if (pppppppuVar34 == (ulong *******)0x2) {
                iVar31 = 2;
                if (*(short *)pppppppuVar23 == 0x6469) {
                  iVar31 = 0;
                }
              }
              else {
                iVar31 = 2;
              }
              goto joined_r0x0001004a0bb4;
            }
code_r0x0001004a13a8:
            unaff_x27 = pppppppuStack_2d0;
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_298 = pppppppuVar37;
            ppppppuVar24 = (ulong ******)
                           thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b210020);
            goto LAB_1004a0f20;
          }
          iVar32 = 1;
          if (pppppppuVar28 != (ulong *******)0x1) {
            iVar32 = 2;
          }
          iVar31 = 0;
          if (pppppppuVar28 != (ulong *******)0x0) {
            iVar31 = iVar32;
          }
        }
code_r0x0001004a0c40:
        FUN_100e077ec(&uStack_90);
      }
      else {
        if (bVar27 == 0xd) {
          if (pppppppuVar23 == (ulong *******)0x6) {
            iVar31 = 1;
            if (*(int *)pppppppuVar28 != 0x61726170 || *(short *)((long)pppppppuVar28 + 4) != 0x736d
               ) {
              iVar31 = 2;
            }
          }
          else {
            if (pppppppuVar23 != (ulong *******)0x2) goto code_r0x0001004a0c0c;
            iVar31 = 2;
            if (*(short *)pppppppuVar28 == 0x6469) {
              iVar31 = 0;
            }
          }
          goto code_r0x0001004a0c40;
        }
        if (bVar27 != 0xe) {
          if (bVar27 != 0xf) goto code_r0x0001004a13a8;
          if (pppppppuVar23 == (ulong *******)0x6) {
            if (((((*(byte *)pppppppuVar28 != 0x70) || (*(byte *)((long)pppppppuVar28 + 1) != 0x61))
                 || (*(byte *)((long)pppppppuVar28 + 2) != 0x72)) ||
                ((*(byte *)((long)pppppppuVar28 + 3) != 0x61 ||
                 (*(byte *)((long)pppppppuVar28 + 4) != 0x6d)))) ||
               (*(byte *)((long)pppppppuVar28 + 5) != 0x73)) goto code_r0x0001004a0c0c;
            iVar31 = 1;
          }
          else if (((pppppppuVar23 == (ulong *******)0x2) && (*(byte *)pppppppuVar28 == 0x69)) &&
                  (*(byte *)((long)pppppppuVar28 + 1) == 100)) {
            iVar31 = 0;
          }
          else {
code_r0x0001004a0c0c:
            iVar31 = 2;
          }
          goto code_r0x0001004a0c40;
        }
        if (pppppppuStack_78 == (ulong *******)0x6) {
          if (((((*(byte *)pppppppuVar23 != 0x70) || (*(byte *)((long)pppppppuVar23 + 1) != 0x61))
               || (*(byte *)((long)pppppppuVar23 + 2) != 0x72)) ||
              ((*(byte *)((long)pppppppuVar23 + 3) != 0x61 ||
               (*(byte *)((long)pppppppuVar23 + 4) != 0x6d)))) ||
             (*(byte *)((long)pppppppuVar23 + 5) != 0x73)) goto code_r0x0001004a0b7c;
          iVar31 = 1;
        }
        else if (((pppppppuStack_78 == (ulong *******)0x2) && (*(byte *)pppppppuVar23 == 0x69)) &&
                (*(byte *)((long)pppppppuVar23 + 1) == 100)) {
          iVar31 = 0;
        }
        else {
code_r0x0001004a0b7c:
          iVar31 = 2;
        }
joined_r0x0001004a0bb4:
        if (pppppppuVar28 != (ulong *******)0x0) {
          _free();
        }
      }
      bVar27 = (byte)pppppppuStack_2c0;
      if (iVar31 == 0) {
        if (unaff_x22 != (ulong *******)0x8000000000000001) {
          pppppppuVar28 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar37;
          goto code_r0x0001004a12dc;
        }
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar27 == 0x16) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          param_2 = (ulong *******)&UNK_108ca1a98;
          param_4 = &UNK_10b24f848;
          pppppppuStack_298 = pppppppuVar37;
          goto code_r0x0001004a1368;
        }
        ppppppuVar24 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar24;
        uVar30 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar30;
        uStack_90._0_1_ = bVar27;
        func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x0001004a1028;
        pppppppuStack_2c8 = pppppppuStack_a0;
        pppppppuStack_2d8 = pppppppuStack_98;
        unaff_x22 = pppppppuStack_a8;
      }
      else if (iVar31 == 1) {
        if (unaff_x24 != (ulong *******)0x8000000000000000) {
          pppppppuVar28 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar37;
          goto code_r0x0001004a1284;
        }
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar27 == 0x16) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_298 = pppppppuVar37;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004a13a4;
        }
        ppppppuVar24 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar24;
        uVar30 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar30;
        uStack_90._0_1_ = bVar27;
        func_0x00010125d1ec(&pppppppuStack_a8,&uStack_90);
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000000) goto code_r0x0001004a1000;
        pppppppuStack_2d0 = pppppppuStack_a0;
        pppppppuStack_2e0 = pppppppuStack_98;
        unaff_x24 = pppppppuStack_a8;
      }
      else {
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar27 == 0x16) goto code_r0x0001004a131c;
        ppppppuVar24 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppuVar24;
        pppppppuVar41 = *(ulong ********)((long)unaff_x21 + 0x17);
        pppppppuVar40 = *(ulong ********)((long)unaff_x21 + 0xf);
code_r0x0001004a0d44:
        uStack_90._0_1_ = bVar27;
        *(ulong ********)((long)unaff_x20 + 0x17) = pppppppuVar41;
        *(ulong ********)((long)unaff_x20 + 0xf) = pppppppuVar40;
code_r0x0001004a0d4c:
        FUN_100e077ec(&uStack_90);
      }
      unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
      pppppppuVar23 = pppppppuStack_2e8;
      pppppppuVar36 = unaff_x23;
    } while (unaff_x27 + 8 != unaff_x23);
    unaff_x21 = pppppppuStack_2c8;
    unaff_x27 = pppppppuStack_2d0;
    pppppppuStack_298 = pppppppuVar36;
    pppppppuStack_280 = pppppppuVar23;
    if (unaff_x22 == (ulong *******)0x8000000000000001) goto code_r0x0001004a0eec;
    if (unaff_x24 != (ulong *******)0x8000000000000000) {
      unaff_x20 = (ulong *******)0x800000000000006e;
      *param_2 = (ulong ******)0x800000000000002e;
      param_2[1] = (ulong ******)unaff_x24;
      param_2[2] = (ulong ******)pppppppuStack_2d0;
      param_2[3] = (ulong ******)pppppppuStack_2e0;
      param_2[4] = (ulong ******)unaff_x22;
      param_2[5] = (ulong ******)pppppppuStack_2c8;
      param_2[6] = (ulong ******)pppppppuStack_2d8;
      _memcpy(&ppppppuStack_270,param_2,0x1c0);
      FUN_100d34830(&pppppppuStack_2a0);
      if (unaff_x23 != pppppppuVar36) {
        uStack_90._0_1_ = (byte)pppppppuVar23;
        uStack_90._1_1_ = (char)((ulong)pppppppuVar23 >> 8);
        uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar23 >> 0x10);
        param_4 = &UNK_10b23a190;
        pppppppuVar23 =
             (ulong *******)
             (((ulong)((long)unaff_x23 - (long)pppppppuVar36) >> 6) + (long)pppppppuVar23);
        param_3 = (ulong *******)&uStack_90;
        goto code_r0x0001004a0ff8;
      }
      goto code_r0x0001004a11d4;
    }
    pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a0 = (ulong *******)0x6;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    ppppppuVar24 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar24;
    pppppppuVar37 = (ulong *******)&pppppppuStack_2c0;
    if (((ulong)unaff_x22 & 0x7fffffffffffffff) == 0) goto LAB_1004a1074;
    goto code_r0x0001004a106c;
  case 0x2c:
  case 0x8f:
    goto code_r0x0001004a10b4;
  case 0x2e:
  case 0x92:
    goto code_r0x0001004a108c;
  case 0x30:
    goto code_r0x0001004a1050;
  case 0x31:
  case 0xea:
    goto code_r0x0001004a10d4;
  case 0x33:
    goto code_r0x0001004a10ac;
  case 0x34:
    goto code_r0x0001004a1104;
  case 0x35:
    goto code_r0x0001004a1080;
  case 0x37:
code_r0x0001004a1028:
    pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
    unaff_x22 = (ulong *******)0x8000000000000001;
    pppppppuVar36 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar28 = (ulong *******)0x800000000000006e;
    pppppppuVar23 = pppppppuStack_a0;
    unaff_x21 = pppppppuStack_2c8;
    unaff_x27 = pppppppuStack_2d0;
    pppppppuStack_298 = pppppppuVar37;
  case 99:
    *param_2 = (ulong ******)pppppppuVar28;
    param_2[1] = (ulong ******)pppppppuVar23;
code_r0x0001004a1050:
joined_r0x0001004a1054:
    unaff_x24 = (ulong *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
    pppppppuVar37 = pppppppuVar36;
    goto joined_r0x0001004a12cc;
  case 0x38:
    goto LAB_1004a1058;
  case 0x39:
  case 0x88:
    goto code_r0x0001004a10dc;
  case 0x3a:
code_r0x0001004a1000:
    pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = (ulong ******)pppppppuStack_a0;
    pppppppuStack_298 = pppppppuVar37;
  case 0x68:
    pppppppuVar37 = (ulong *******)&pppppppuStack_2c0;
    unaff_x21 = pppppppuStack_2c8;
code_r0x0001004a1024:
LAB_1004a1058:
    if ((-0x7fffffffffffffff < (long)unaff_x22) && (unaff_x22 != (ulong *******)0x0)) {
code_r0x0001004a106c:
      _free(unaff_x21);
    }
LAB_1004a1074:
    FUN_100d34830(pppppppuVar37 + 4);
code_r0x0001004a107c:
    pppppppuVar28 = (ulong *******)((ulong)pppppppuStack_2c0 & 0xff);
code_r0x0001004a1080:
    in_ZR = (int)pppppppuVar28 == 0x16;
code_r0x0001004a1084:
    if (!(bool)in_ZR) {
      param_2 = (ulong *******)&pppppppuStack_2c0;
code_r0x0001004a108c:
      FUN_100e077ec(param_2);
code_r0x0001004a1090:
    }
    goto code_r0x0001004a11d4;
  case 0x3c:
code_r0x0001004a0ff8:
    pppppppuVar23 = (ulong *******)thunk_FUN_1087e422c(pppppppuVar23,param_3,param_4);
    goto code_r0x0001004a126c;
  case 0x3f:
    goto code_r0x0001004a0d44;
  case 0x40:
  case 0x55:
  case 0x81:
    goto code_r0x0001004a0d88;
  case 0x42:
  case 0xf7:
    goto code_r0x0001004a1194;
  case 0x43:
    goto code_r0x0001004a11a4;
  case 0x44:
  case 0xb5:
  case 0xf9:
    goto code_r0x0001004a116c;
  case 0x45:
  case 0xb6:
  case 0xf3:
    goto code_r0x0001004a1184;
  case 0x47:
  case 0xfc:
    goto code_r0x0001004a11b4;
  case 0x48:
  case 0xc2:
    goto code_r0x0001004a11cc;
  case 0x4a:
  case 0x6e:
    goto code_r0x0001004a11e4;
  case 0x4c:
  case 0x71:
    goto code_r0x0001004a11d4;
  case 0x4d:
    goto code_r0x0001004a1108;
  case 0x4f:
  case 0x70:
    goto code_r0x0001004a11bc;
  case 0x50:
    goto code_r0x0001004a10e0;
  case 0x52:
  case 0x58:
    goto code_r0x0001004a10d8;
  case 0x54:
  case 0xd4:
    goto code_r0x0001004a1218;
  case 0x56:
  case 0x82:
    goto code_r0x0001004a0dcc;
  case 0x59:
  case 0xb4:
  case 0xfd:
    goto code_r0x0001004a10e8;
  case 0x5a:
    goto code_r0x0001004a10b0;
  case 0x5c:
    goto LAB_1004a1074;
  case 0x5e:
  case 0xf6:
    goto code_r0x0001004a1110;
  case 0x5f:
    goto code_r0x0001004a10d0;
  case 0x62:
  case 0x86:
  case 0xb9:
  case 0xfe:
    goto code_r0x0001004a1118;
  case 100:
    goto code_r0x0001004a107c;
  case 0x65:
    goto code_r0x0001004a1100;
  case 0x66:
    goto code_r0x0001004a1024;
  case 0x67:
    goto code_r0x0001004a10b8;
  case 0x6a:
  case 0x79:
    goto code_r0x0001004a1158;
  case 0x6b:
    goto code_r0x0001004a0d94;
  case 0x6c:
    goto code_r0x0001004a0dd8;
  case 0x73:
    goto code_r0x0001004a1204;
  case 0x74:
    goto code_r0x0001004a121c;
  case 0x75:
    goto code_r0x0001004a11dc;
  case 0x76:
    goto code_r0x0001004a1234;
  case 0x77:
  case 0xe9:
    goto code_r0x0001004a11b0;
  case 0x78:
    goto code_r0x0001004a1224;
  case 0x7b:
  case 0xee:
    goto code_r0x0001004a120c;
  case 0x7d:
  case 0xfa:
    goto code_r0x0001004a11c4;
  case 0x80:
code_r0x0001004a1284:
    pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a0 = (ulong *******)0x6;
    pppppppuStack_280 = pppppppuVar28;
  case 0xcf:
    pppppppuVar28 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar33 = (ulong *******)&DAT_100c7b3a0;
code_r0x0001004a12a4:
    uStack_90._0_1_ = (byte)pppppppuVar28;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar28 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar28 >> 0x10);
    uStack_88 = SUB81(pppppppuVar33,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar33 >> 8);
    pppppppuVar23 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004a12ac:
    unaff_x27 = pppppppuStack_2d0;
    pppppppuVar23 =
         (ulong *******)thunk_FUN_108856088((byte *)((long)pppppppuVar23 + 0x973),&uStack_90);
    unaff_x21 = pppppppuStack_2c8;
code_r0x0001004a12bc:
    pppppppuVar37 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar28 = (ulong *******)0x6e;
code_r0x0001004a12c4:
    *param_2 = (ulong ******)((ulong)pppppppuVar28 | 0x8000000000000000);
    param_2[1] = (ulong ******)pppppppuVar23;
code_r0x0001004a12cc:
joined_r0x0001004a12cc:
    if (unaff_x24 != (ulong *******)0x0) {
      _free(unaff_x27);
    }
    goto LAB_1004a1058;
  case 0x8d:
    goto code_r0x0001004a110c;
  case 0x90:
    goto code_r0x0001004a10e4;
  case 0x91:
  case 0xeb:
    goto code_r0x0001004a1168;
  case 0x94:
    goto code_r0x0001004a1084;
  case 0x96:
    goto code_r0x0001004a11e0;
  case 0x97:
    goto code_r0x0001004a0d4c;
  case 0x98:
    goto code_r0x0001004a0d90;
  case 0xb1:
    goto code_r0x0001004a115c;
  case 0xb2:
  case 0xe0:
    goto code_r0x0001004a1124;
  case 0xb3:
    goto code_r0x0001004a113c;
  case 0xb8:
  case 0xff:
    goto code_r0x0001004a119c;
  case 0xbb:
    goto code_r0x0001004a10c0;
  case 0xc0:
    goto code_r0x0001004a1090;
  case 0xc3:
    goto code_r0x0001004a0dfc;
  case 0xc4:
    goto code_r0x0001004a0e40;
  case 0xc6:
    goto code_r0x0001004a12cc;
  case 199:
code_r0x0001004a12dc:
    pppppppuVar29 = (ulong *******)&UNK_108ca26b0;
    pppppppuVar33 = (ulong *******)0x2;
    pppppppuStack_280 = pppppppuVar28;
  case 0xcb:
    pppppppuVar28 = (ulong *******)&pppppppuStack_a8;
    pppppppuStack_a8 = pppppppuVar29;
    pppppppuStack_a0 = pppppppuVar33;
code_r0x0001004a12f4:
    uStack_90._0_1_ = (byte)pppppppuVar28;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar28 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar28 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    pppppppuVar23 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004a1304:
    pppppppuVar23 = (ulong *******)((long)pppppppuVar23 + 0x973);
    param_3 = (ulong *******)&uStack_90;
code_r0x0001004a130c:
    unaff_x27 = pppppppuStack_2d0;
    ppppppuVar24 = (ulong ******)thunk_FUN_108856088(pppppppuVar23,param_3);
LAB_1004a0f20:
    pppppppuVar36 = (ulong *******)&pppppppuStack_2c0;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar24;
    unaff_x21 = pppppppuStack_2c8;
    goto joined_r0x0001004a1054;
  case 200:
    goto code_r0x0001004a12a4;
  case 0xc9:
    goto code_r0x0001004a12bc;
  case 0xca:
    goto code_r0x0001004a1268;
  case 0xcc:
    goto code_r0x0001004a1304;
  case 0xcd:
    goto code_r0x0001004a12c4;
  case 0xce:
code_r0x0001004a131c:
    pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_298 = pppppppuVar37;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x0001004a13a4;
  case 0xd0:
    goto code_r0x0001004a130c;
  case 0xd1:
    goto code_r0x0001004a1240;
  case 0xd2:
    goto code_r0x0001004a1270;
  case 0xd3:
    goto code_r0x0001004a12f4;
  case 0xd5:
    goto code_r0x0001004a12ac;
  case 0xd6:
    goto code_r0x0001004a1210;
  case 0xd8:
code_r0x0001004a1368:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x0001004a13a4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004a13a8);
    (*pcVar4)();
  case 0xd9:
    goto code_r0x0001004a09e0;
  case 0xda:
    goto code_r0x0001004a0a24;
  case 0xdd:
    goto code_r0x0001004a1198;
  case 0xe1:
    goto code_r0x0001004a11a8;
  case 0xe2:
    goto code_r0x0001004a11c0;
  case 0xe4:
    goto code_r0x0001004a11d8;
  case 0xe6:
    goto code_r0x0001004a11c8;
  case 0xe7:
    goto code_r0x0001004a10fc;
  case 0xec:
    goto code_r0x0001004a10cc;
  case 0xf5:
    break;
  case 0xf8:
    goto code_r0x0001004a11ac;
  }
  pppppppuStack_268 = pppppppuVar28;
code_r0x0001004a1168:
  bVar27 = 1;
code_r0x0001004a116c:
code_r0x0001004a11ac:
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar27);
code_r0x0001004a11b0:
  param_4 = &UNK_10b21a000;
code_r0x0001004a11b4:
  param_4 = param_4 + 0x2b0;
  pppppppuVar23 = &ppppppuStack_270;
code_r0x0001004a11bc:
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x0001004a11c0:
  pppppppuVar23 = (ulong *******)FUN_107c05dcc(pppppppuVar23,param_3,param_4);
code_r0x0001004a11c4:
  pppppppuVar28 = (ulong *******)0x6e;
code_r0x0001004a11c8:
  pppppppuVar28 = (ulong *******)((ulong)pppppppuVar28 | 0x8000000000000000);
code_r0x0001004a11cc:
  *param_2 = (ulong ******)pppppppuVar28;
  param_2[1] = (ulong ******)pppppppuVar23;
code_r0x0001004a11d4:
code_r0x0001004a11d8:
code_r0x0001004a11dc:
code_r0x0001004a11e0:
code_r0x0001004a11e4:
  return;
}

