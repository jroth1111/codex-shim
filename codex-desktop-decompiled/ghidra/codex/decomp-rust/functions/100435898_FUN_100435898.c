
/* WARNING: Type propagation algorithm not settling */

void FUN_100435898(undefined1 param_1 [16],char *param_2,uint *******param_3,undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 in_ZR;
  bool bVar9;
  uint *******pppppppuVar10;
  uint ******ppppppuVar11;
  uint uVar12;
  byte *extraout_x1;
  byte bVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  uint *******pppppppuVar19;
  uint ******ppppppuVar20;
  uint *******unaff_x19;
  uint *******pppppppuVar21;
  uint *******unaff_x20;
  uint *******unaff_x21;
  uint *******unaff_x22;
  uint ******unaff_x23;
  uint *******unaff_x24;
  long lVar22;
  uint *******unaff_x25;
  uint *******unaff_x26;
  uint *******pppppppuVar23;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  undefined8 unaff_x30;
  uint *******pppppppuVar25;
  undefined1 auStack_320 [8];
  uint ******ppppppuStack_2d8;
  uint *******pppppppuStack_2d0;
  uint *******pppppppuStack_2c8;
  uint *******pppppppuStack_2c0;
  uint *******pppppppuStack_2b8;
  uint ******ppppppuStack_2b0;
  uint *******pppppppuStack_2a8;
  uint *******pppppppuStack_2a0;
  uint ******ppppppuStack_270;
  uint *******pppppppuStack_268;
  uint *******pppppppuStack_260;
  uint ******ppppppuStack_258;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  uint ******ppppppuStack_78;
  
  ppppppuVar20 = param_1._8_8_;
  pppppppuVar25 = param_1._0_8_;
  puVar24 = &stack0xfffffffffffffff0;
  puVar6 = &stack0xfffffffffffffd20;
  pppppppuVar21 = (uint *******)&uStack_90;
  bVar13 = *(byte *)param_3;
  pppppppuVar14 = (uint *******)(ulong)bVar13;
  pppppppuVar19 = (uint *******)&UNK_108c98a8a;
  iVar18 = (uint)*(ushort *)(&UNK_108c98a8a + (long)pppppppuVar14 * 2) * 4 + 0x4358dc;
  puVar7 = &stack0xfffffffffffffd20;
  puVar8 = &stack0xfffffffffffffd20;
  puVar4 = &stack0xfffffffffffffd20;
  puVar5 = &stack0xfffffffffffffd20;
  puVar3 = &stack0xfffffffffffffd20;
  pppppppuVar10 = (uint *******)param_2;
  pppppppuVar15 = pppppppuVar14;
  pppppppuVar23 = (uint *******)param_2;
  switch(bVar13) {
  case 0:
  case 0x22:
  case 0x38:
  case 0x60:
    bVar13 = *(byte *)((long)param_3 + 1);
  case 199:
    ppppppuStack_270 = (uint ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar13) << 8);
    goto code_r0x000100436104;
  case 1:
    pppppppuVar14 = (uint *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0xcb:
code_r0x0001004360b8:
    pppppppuStack_268 = pppppppuVar14;
code_r0x0001004360bc:
    bVar13 = 1;
code_r0x0001004360c0:
    break;
  case 2:
  case 0x65:
    pppppppuVar14 = (uint *******)(ulong)*(ushort *)((long)param_3 + 2);
    goto code_r0x0001004360b8;
  case 3:
  case 0x62:
  case 0xe8:
    pppppppuVar14 = (uint *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xc6:
    goto code_r0x0001004360b8;
  case 4:
    pppppppuVar14 = (uint *******)param_3[1];
  case 0x26:
  case 0x3c:
  case 0x5b:
    goto code_r0x0001004360b8;
  case 5:
    pppppppuVar14 = (uint *******)(long)*(char *)((long)param_3 + 1);
  case 0x92:
  case 0xde:
code_r0x0001004360f8:
    bVar13 = 2;
    pppppppuStack_268 = pppppppuVar14;
    break;
  case 6:
    pppppppuVar14 = (uint *******)(long)*(short *)((long)param_3 + 2);
  case 0x25:
  case 0x3b:
  case 0xdf:
    goto code_r0x0001004360f8;
  case 7:
  case 0x1a:
  case 0x30:
    pppppppuVar14 = (uint *******)(long)(int)*(uint *)((long)param_3 + 4);
    goto code_r0x0001004360f8;
  case 8:
  case 0x6a:
    pppppppuVar14 = (uint *******)param_3[1];
    goto code_r0x0001004360f8;
  case 9:
  case 200:
    pppppppuVar25 = (uint *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x21:
  case 0x37:
  case 0x5d:
    pppppppuVar25 = (uint *******)(double)SUB84(pppppppuVar25,0);
code_r0x000100436078:
  case 0xce:
  case 0xe3:
  case 0xf6:
code_r0x0001004360e8:
    pppppppuStack_268 = pppppppuVar25;
code_r0x0001004360ec:
    bVar13 = 3;
code_r0x0001004360f0:
    break;
  case 10:
  case 0xc0:
    pppppppuVar25 = (uint *******)param_3[1];
    goto code_r0x0001004360e8;
  case 0xb:
    param_3 = (uint *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x61:
    puVar4 = &stack0xffffffffffffffa0;
    pppppppuVar21 = unaff_x19;
    puVar24 = unaff_x29;
code_r0x00010043602c:
    puVar5 = puVar4;
code_r0x000100436034:
    puVar6 = puVar5 + 0x60;
code_r0x00010043603c:
    *(uint ********)(puVar6 + -0x20) = unaff_x20;
    *(uint ********)(puVar6 + -0x18) = pppppppuVar21;
    *(undefined1 **)(puVar6 + -0x10) = puVar24;
    *(undefined8 *)(puVar6 + -8) = unaff_x30;
    *(undefined4 *)(puVar6 + -0x44) = 0;
    uVar12 = (uint)param_3;
    if (uVar12 < 0x80) {
      puVar6[-0x44] = (byte)param_3;
      uVar16 = 1;
    }
    else {
      bVar13 = (byte)param_3 & 0x3f | 0x80;
      if (uVar12 < 0x800) {
        puVar6[-0x44] = (byte)(uVar12 >> 6) | 0xc0;
        puVar6[-0x43] = bVar13;
        uVar16 = 2;
      }
      else {
        bVar1 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        if (uVar12 < 0x10000) {
          puVar6[-0x44] = (byte)(uVar12 >> 0xc) | 0xe0;
          puVar6[-0x43] = bVar1;
          puVar6[-0x42] = bVar13;
          uVar16 = 3;
        }
        else {
          puVar6[-0x44] = (byte)(uVar12 >> 0x12) | 0xf0;
          puVar6[-0x43] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
          puVar6[-0x42] = bVar1;
          puVar6[-0x41] = bVar13;
          uVar16 = 4;
        }
      }
    }
    *(undefined1 **)(puVar6 + -0x38) = puVar6 + -0x44;
    *(undefined8 *)(puVar6 + -0x30) = uVar16;
    puVar6[-0x40] = 5;
    ppppppuVar20 = (uint ******)func_0x000108a4a50c(puVar6 + -0x40,puVar6 + -0x21,&UNK_10b219990);
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint *******)((long)param_2 + 8) = ppppppuVar20;
    return;
  case 0xc:
    param_3 = param_3 + 1;
  case 0x24:
  case 0x3a:
  case 0x5f:
    puVar7 = &stack0xffffffffffffffa0;
code_r0x000100436054:
    puVar24 = *(undefined1 **)(puVar7 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar7 + 0x58);
    unaff_x20 = *(uint ********)(puVar7 + 0x40);
    pppppppuVar21 = *(uint ********)(puVar7 + 0x48);
    unaff_x22 = *(uint ********)(puVar7 + 0x30);
    unaff_x21 = *(uint ********)(puVar7 + 0x38);
    puVar8 = puVar7;
code_r0x000100436064:
    *(uint ********)(puVar8 + 0x30) = unaff_x22;
    *(uint ********)(puVar8 + 0x38) = unaff_x21;
    *(uint ********)(puVar8 + 0x40) = unaff_x20;
    *(uint ********)(puVar8 + 0x48) = pppppppuVar21;
    *(undefined1 **)(puVar8 + 0x50) = puVar24;
    *(undefined8 *)(puVar8 + 0x58) = unaff_x30;
    ppppppuVar20 = param_3[1];
    ppppppuVar11 = param_3[2];
    *(uint *******)(puVar8 + 0x18) = ppppppuVar20;
    *(uint *******)(puVar8 + 0x20) = ppppppuVar11;
    puVar8[0x10] = 5;
    ppppppuVar11 = (uint ******)func_0x000108a4a50c(puVar8 + 0x10,puVar8 + 0x2f,&UNK_10b219990);
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint *******)((long)param_2 + 8) = ppppppuVar11;
    if (*param_3 != (uint ******)0x0) {
      _free(ppppppuVar20);
    }
    return;
  case 0xd:
  case 0x1f:
  case 0x35:
    pppppppuVar14 = (uint *******)param_3[1];
    pppppppuVar19 = (uint *******)param_3[2];
  case 0xcc:
  case 0xeb:
    bVar13 = 5;
    pppppppuStack_268 = pppppppuVar14;
    pppppppuStack_260 = pppppppuVar19;
code_r0x0001004360d8:
    break;
  case 0xe:
  case 0x5c:
    param_3 = param_3 + 1;
  case 100:
    puVar3 = &stack0xffffffffffffffa0;
    pppppppuVar21 = unaff_x19;
    puVar24 = unaff_x29;
code_r0x00010043600c:
    *(uint ********)(puVar3 + 0x30) = unaff_x22;
    *(uint ********)(puVar3 + 0x38) = unaff_x21;
    *(uint ********)(puVar3 + 0x40) = unaff_x20;
    *(uint ********)(puVar3 + 0x48) = pppppppuVar21;
    *(undefined1 **)(puVar3 + 0x50) = puVar24;
    *(undefined8 *)(puVar3 + 0x58) = unaff_x30;
    ppppppuVar20 = param_3[1];
    ppppppuVar11 = param_3[2];
    *(uint *******)(puVar3 + 0x18) = ppppppuVar20;
    *(uint *******)(puVar3 + 0x20) = ppppppuVar11;
    puVar3[0x10] = 6;
    ppppppuVar11 = (uint ******)func_0x000108a4a50c(puVar3 + 0x10,puVar3 + 0x2f,&UNK_10b219990);
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint *******)((long)param_2 + 8) = ppppppuVar11;
    if (*param_3 != (uint ******)0x0) {
      _free(ppppppuVar20);
    }
    return;
  case 0xf:
    pppppppuVar14 = (uint *******)param_3[1];
    pppppppuVar19 = (uint *******)param_3[2];
  case 0xc9:
    pppppppuStack_268 = pppppppuVar14;
    pppppppuStack_260 = pppppppuVar19;
code_r0x00010043608c:
    bVar13 = 6;
code_r0x000100436090:
    break;
  case 0x10:
    bVar13 = 8;
    break;
  default:
    pppppppuVar10 = (uint *******)param_3[1];
    pppppppuStack_268 = (uint *******)pppppppuVar10[1];
    ppppppuStack_270 = *pppppppuVar10;
    ppppppuStack_258 = pppppppuVar10[3];
    pppppppuStack_260 = (uint *******)pppppppuVar10[2];
    func_0x000107c048d0(param_2,&ppppppuStack_270);
    goto code_r0x000100435d18;
  case 0x12:
  case 0xbc:
  case 0xf9:
    bVar13 = 7;
  case 0x8d:
    break;
  case 0x13:
  case 0x6b:
    unaff_x20 = (uint *******)param_3[1];
    pppppppuStack_268 = (uint *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuStack_258 = unaff_x20[3];
    pppppppuStack_260 = (uint *******)unaff_x20[2];
  case 0xef:
    param_3 = &ppppppuStack_270;
code_r0x000100435d00:
    pppppppuVar10 = unaff_x20;
    func_0x000107c054e8(param_2,param_3);
code_r0x000100435d18:
code_r0x000100435d20:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar10);
    return;
  case 0x14:
  case 0x6c:
    unaff_x23 = param_3[1];
    unaff_x20 = (uint *******)param_3[2];
    unaff_x26 = (uint *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    ppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
  case 0xf0:
    pppppppuStack_2a0 = (uint *******)0x0;
    unaff_x21 = unaff_x20;
code_r0x000100435d44:
    if (unaff_x26 == (uint *******)0x0) {
code_r0x000100435d5c:
      param_3 = (uint *******)&UNK_10b22f948;
code_r0x000100435d64:
      pppppppuStack_a0 = (uint *******)thunk_FUN_1087e422c(0,param_3,&UNK_10b20a590);
code_r0x000100435d78:
      *(uint *******)param_2 = (uint ******)0x800000000000006e;
      *(uint ********)((long)param_2 + 8) = pppppppuStack_a0;
code_r0x000100435d84:
      lVar22 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar22 = lVar22 + -1, lVar22 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (uint ******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2b8 = unaff_x21;
      bVar13 = *(byte *)unaff_x20;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100435d5c;
code_r0x000100435dc0:
      uStack_90._0_1_ = bVar13;
      uVar16 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar16;
      uStack_90._2_6_ = (undefined6)((ulong)uVar16 >> 8);
      uStack_88 = (undefined1)((ulong)uVar16 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (uint *******)0x1;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (uint *******)0x8000000000000001) goto code_r0x000100435d78;
      bVar9 = unaff_x26 == (uint *******)0x1;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x26 = pppppppuStack_98;
      if (bVar9) {
code_r0x000100435e18:
        ppppppuVar20 = (uint ******)thunk_FUN_1087e422c(1,&UNK_10b22f948,&UNK_10b20a590);
        *(uint *******)param_2 = (uint ******)0x800000000000006e;
        *(uint *******)((long)param_2 + 8) = ppppppuVar20;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x000100435e44:
          _free(unaff_x22);
code_r0x000100435e4c:
        }
        goto code_r0x000100435d84;
      }
code_r0x000100435e04:
      unaff_x21 = unaff_x20 + 8;
      bVar13 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar13 == 0x16) goto code_r0x000100435e18;
code_r0x00010043614c:
      ppppppuVar20 = *(uint *******)((long)unaff_x20 + 0x29);
      pppppppuVar25 = *(uint ********)((long)unaff_x20 + 0x21);
code_r0x000100436150:
      uStack_87 = SUB87(ppppppuVar20,0);
      uStack_90._1_1_ = (char)pppppppuVar25;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar25 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar25 >> 0x38);
code_r0x000100436154:
      ppppppuVar20 = unaff_x20[7];
      pppppppuVar25 = (uint *******)unaff_x20[6];
code_r0x000100436158:
      uStack_80 = SUB81(pppppppuVar25,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar25 >> 8);
      ppppppuStack_78 = ppppppuVar20;
code_r0x00010043615c:
      pppppppuVar19 = (uint *******)0x2;
code_r0x000100436160:
      uStack_90._0_1_ = bVar13;
      pppppppuVar10 = (uint *******)&pppppppuStack_a8;
      pppppppuStack_2a0 = pppppppuVar19;
code_r0x00010043616c:
      func_0x00010139a5fc(pppppppuVar10,&uStack_90);
code_r0x000100436174:
      pppppppuVar14 = (uint *******)((ulong)pppppppuStack_a8 & 0xff);
code_r0x000100436178:
      if (((ulong)pppppppuVar14 & 1) != 0) {
code_r0x00010043617c:
        pppppppuVar10 = pppppppuStack_a0;
code_r0x000100436180:
        pppppppuVar14 = (uint *******)0x6e;
code_r0x000100436184:
        pppppppuVar14 = (uint *******)((ulong)pppppppuVar14 | 0x8000000000000000);
code_r0x000100436188:
        *(uint ********)param_2 = pppppppuVar14;
        *(uint ********)((long)param_2 + 8) = pppppppuVar10;
code_r0x00010043618c:
        in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x000100436190:
        if (!(bool)in_ZR) {
code_r0x000100436194:
          goto code_r0x000100435e44;
        }
        goto code_r0x000100435d84;
      }
code_r0x000100436198:
      pppppppuVar21 = (uint *******)0x6e;
code_r0x00010043619c:
      pppppppuVar21 = (uint *******)((ulong)pppppppuVar21 & 0xffffffffffff | 0x8000000000000000);
code_r0x0001004361a0:
      bVar13 = (byte)((ulong)pppppppuStack_a8 >> 8);
code_r0x0001004361a4:
      *(uint ********)param_2 = pppppppuVar21 + -1;
      *(uint ********)((long)param_2 + 8) = unaff_x25;
code_r0x0001004361ac:
      *(uint ********)((long)param_2 + 0x10) = unaff_x22;
      *(uint ********)((long)param_2 + 0x18) = unaff_x26;
code_r0x0001004361b0:
      *(byte *)((long)param_2 + 0x20) = bVar13;
code_r0x0001004361b4:
      pppppppuVar10 = &ppppppuStack_270;
      param_3 = (uint *******)param_2;
code_r0x0001004361bc:
      param_4 = (undefined *)0x1c0;
code_r0x0001004361c0:
      _memcpy(pppppppuVar10,param_3,param_4);
      pppppppuVar10 = (uint *******)&pppppppuStack_2c0;
code_r0x0001004361c8:
      pppppppuVar10 = (uint *******)FUN_100fbc738(pppppppuVar10);
code_r0x0001004361cc:
      if (pppppppuVar10 != (uint *******)0x0) {
code_r0x0001004361d0:
        *pppppppuVar23 = (uint ******)pppppppuVar21;
        pppppppuVar23[1] = (uint ******)pppppppuVar10;
        param_2 = (char *)&ppppppuStack_270;
code_r0x0001004361d8:
        FUN_100e44f40(param_2);
code_r0x0001004361dc:
      }
    }
    goto LAB_100436124;
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
    pppppppuStack_2a0 = (uint *******)param_3[2];
    ppppppuVar20 = param_3[3];
    pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    if (ppppppuVar20 != (uint ******)0x0) {
      unaff_x23 = (uint ******)0x0;
      unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
      pppppppuVar10 = (uint *******)((ulong)&pppppppuStack_2c0 | 1);
      ppppppuStack_2d8 = (uint ******)(((long)ppppppuVar20 * 0x40 - 0x40U >> 6) + 1);
      unaff_x21 = (uint *******)0x2;
      unaff_x22 = (uint *******)0x8000000000000001;
      unaff_x26 = pppppppuStack_2a0 + (long)ppppppuVar20 * 8;
      unaff_x25 = pppppppuStack_2a0;
      pppppppuStack_2d0 = (uint *******)param_2;
      do {
        unaff_x24 = unaff_x25 + 8;
        bVar13 = *(byte *)unaff_x25;
        pppppppuVar19 = (uint *******)(ulong)bVar13;
        if (bVar13 == 0x16) goto code_r0x000100435e58;
        ppppppuVar20 = unaff_x25[2];
        *(uint *******)((long)unaff_x28 + 0x17) = unaff_x25[3];
        *(uint *******)((long)unaff_x28 + 0xf) = ppppppuVar20;
        ppppppuVar20 = *(uint *******)((long)unaff_x25 + 9);
        pppppppuVar25 = *(uint ********)((long)unaff_x25 + 1);
        uStack_90._0_1_ = bVar13;
code_r0x000100435998:
        unaff_x28[1] = ppppppuVar20;
        *unaff_x28 = pppppppuVar25;
        pppppppuStack_2b8 = (uint *******)unaff_x25[5];
        pppppppuStack_2c0 = (uint *******)unaff_x25[4];
        pppppppuStack_2a8 = (uint *******)unaff_x25[7];
        ppppppuStack_2b0 = unaff_x25[6];
        pppppppuVar14 = (uint *******)CONCAT71(uStack_87,uStack_88);
        param_2 = (char *)CONCAT71(uStack_7f,uStack_80);
        uVar12 = (uint)pppppppuVar19;
        if (uVar12 < 0xd) {
          if (uVar12 == 1) {
            iVar18 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar18 = 2;
            }
            iVar17 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar17 = iVar18;
            }
          }
          else {
            if (uVar12 != 4) {
              if (uVar12 == 0xc) {
                if (ppppppuStack_78 == (uint ******)0x6) {
                  iVar17 = 1;
                  if (*(uint *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                    iVar17 = 2;
                  }
                }
                else if (ppppppuStack_78 == (uint ******)0x2) {
code_r0x0001004359dc:
                  iVar17 = 2;
                  if (*(short *)param_2 == 0x6469) {
                    iVar17 = 0;
                  }
                }
                else {
                  iVar17 = 2;
                }
                goto joined_r0x000100435b50;
              }
code_r0x0001004362c4:
              pppppppuVar10 =
                   (uint *******)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b2121e0);
              pppppppuVar19 = pppppppuStack_2d0;
              param_2 = (char *)unaff_x20;
              goto LAB_100435fa4;
            }
            iVar18 = 1;
            if (pppppppuVar14 != (uint *******)0x1) {
              iVar18 = 2;
            }
            iVar17 = 0;
            if (pppppppuVar14 != (uint *******)0x0) {
              iVar17 = iVar18;
            }
          }
code_r0x000100435bdc:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (uVar12 == 0xd) {
            if ((uint *******)param_2 == (uint *******)0x6) {
              pppppppuVar19 = (uint *******)(ulong)(*(uint *)pppppppuVar14 ^ 0x61726170);
              pppppppuVar14 = (uint *******)(ulong)*(ushort *)((long)pppppppuVar14 + 4);
              iVar18 = 0x736d;
code_r0x000100435bc8:
              iVar17 = 1;
              if ((int)pppppppuVar19 != 0 || (int)pppppppuVar14 != iVar18) {
                iVar17 = 2;
              }
            }
            else {
              if ((uint *******)param_2 != (uint *******)0x2) goto code_r0x000100435ba8;
              iVar17 = 2;
              if (*(short *)pppppppuVar14 == 0x6469) {
                iVar17 = 0;
              }
            }
            goto code_r0x000100435bdc;
          }
          if (uVar12 != 0xe) {
            if (uVar12 != 0xf) goto code_r0x0001004362c4;
            if ((uint *******)param_2 == (uint *******)0x6) {
              if (((*(char *)pppppppuVar14 == 'p') && (*(char *)((long)pppppppuVar14 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar14 + 2) == 'r')) {
                in_ZR = *(char *)((long)pppppppuVar14 + 3) == 'a';
code_r0x000100435b84:
                if ((((bool)in_ZR) && (*(char *)((long)pppppppuVar14 + 4) == 'm')) &&
                   (*(char *)((long)pppppppuVar14 + 5) == 's')) {
                  iVar17 = 1;
                  goto code_r0x000100435bdc;
                }
              }
            }
            else if ((((uint *******)param_2 == (uint *******)0x2) &&
                     (*(char *)pppppppuVar14 == 'i')) && (*(char *)((long)pppppppuVar14 + 1) == 'd')
                    ) {
              iVar17 = 0;
              goto code_r0x000100435bdc;
            }
code_r0x000100435ba8:
            iVar17 = 2;
            goto code_r0x000100435bdc;
          }
          if (ppppppuStack_78 == (uint ******)0x6) {
            if (((((*param_2 != 'p') || (*(char *)((long)param_2 + 1) != 'a')) ||
                 (*(char *)((long)param_2 + 2) != 'r')) ||
                ((*(char *)((long)param_2 + 3) != 'a' || (*(char *)((long)param_2 + 4) != 'm')))) ||
               (*(char *)((long)param_2 + 5) != 's')) goto code_r0x000100435b18;
            iVar17 = 1;
          }
          else if (((ppppppuStack_78 == (uint ******)0x2) && (*param_2 == 'i')) &&
                  (*(char *)((long)param_2 + 1) == 'd')) {
            iVar17 = 0;
          }
          else {
code_r0x000100435b18:
            iVar17 = 2;
          }
joined_r0x000100435b50:
          if (pppppppuVar14 != (uint *******)0x0) {
            _free();
          }
        }
        bVar13 = (byte)pppppppuStack_2c0;
        pppppppuVar19 = unaff_x24;
        if (iVar17 == 0) {
          if (unaff_x22 != (uint *******)0x8000000000000001) goto code_r0x00010043620c;
          pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar13 == 0x16) {
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004362c0;
          }
          ppppppuVar20 = *pppppppuVar10;
          unaff_x28[1] = pppppppuVar10[1];
          *unaff_x28 = ppppppuVar20;
          uVar16 = *(undefined8 *)((long)pppppppuVar10 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar10 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar16;
          uStack_90._0_1_ = bVar13;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          unaff_x20 = pppppppuStack_a0;
          if (pppppppuStack_a8 == (uint *******)0x8000000000000001) goto code_r0x000100435fdc;
          pppppppuStack_2c8 = pppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
          unaff_x24 = unaff_x26;
        }
        else if (iVar17 == 1) {
          if ((int)unaff_x21 != 2) goto code_r0x000100436258;
          pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar13 == 0x16) goto code_r0x0001004361e0;
          ppppppuVar20 = *pppppppuVar10;
          unaff_x28[1] = pppppppuVar10[1];
          *unaff_x28 = ppppppuVar20;
          uVar16 = *(undefined8 *)((long)pppppppuVar10 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar10 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar16;
          uStack_90._0_1_ = bVar13;
          func_0x00010139a5fc(&pppppppuStack_a8,&uStack_90);
          if ((char)pppppppuStack_a8 == '\x01') goto code_r0x000100435f98;
          unaff_x21 = (uint *******)((ulong)pppppppuStack_a8 >> 8 & 0xff);
          unaff_x24 = unaff_x26;
        }
        else {
          pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar13 == 0x16) goto code_r0x0001004361e0;
          ppppppuVar20 = *pppppppuVar10;
          unaff_x28[1] = pppppppuVar10[1];
          *unaff_x28 = ppppppuVar20;
          uVar16 = *(undefined8 *)((long)pppppppuVar10 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar10 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar16;
code_r0x000100435cd4:
          uStack_90._0_1_ = bVar13;
          FUN_100e077ec(&uStack_90);
          pppppppuVar19 = unaff_x24;
          unaff_x24 = unaff_x26;
        }
        pppppppuVar15 = unaff_x25 + 8;
        unaff_x23 = (uint ******)((long)unaff_x23 + 1);
        unaff_x26 = unaff_x24;
        unaff_x25 = pppppppuVar19;
      } while (pppppppuVar15 != unaff_x24);
      goto code_r0x000100435e54;
    }
    goto code_r0x000100435e74;
  case 0x16:
  case 0x2c:
  case 0x52:
  case 0xdd:
    break;
  case 0x17:
  case 0x2d:
  case 0xe1:
    goto code_r0x000100436110;
  case 0x18:
  case 0x2e:
  case 0xd0:
    goto code_r0x0001004360d8;
  case 0x19:
  case 0x2f:
  case 0x8f:
  case 0xdc:
  case 0xfe:
    goto code_r0x0001004360f0;
  case 0x1b:
  case 0x31:
  case 0x90:
    goto code_r0x000100436120;
  case 0x1c:
  case 0x32:
  case 0xd8:
    goto code_r0x000100436138;
  case 0x1d:
  case 0x33:
    goto code_r0x0001004360f8;
  case 0x1e:
  case 0x34:
    goto code_r0x000100436150;
  case 0x20:
  case 0x36:
  case 0xe4:
    goto code_r0x000100436140;
  case 0x23:
  case 0x39:
  case 0xe2:
    goto code_r0x000100436128;
  case 0x28:
  case 0x3e:
  case 0xb0:
    goto code_r0x0001004361a0;
  case 0x29:
  case 0x3f:
    goto code_r0x000100435d00;
  case 0x2a:
  case 0x40:
    goto code_r0x000100435d44;
  case 0x42:
  case 0x8e:
    goto code_r0x0001004361bc;
  case 0x43:
  case 0x8c:
    goto code_r0x0001004361cc;
  case 0x44:
    goto code_r0x000100436194;
  case 0x45:
    goto code_r0x0001004361ac;
  case 0x46:
    goto code_r0x000100436158;
  case 0x47:
    goto code_r0x0001004361dc;
  case 0x48:
    goto code_r0x0001004361f4;
  case 0x49:
  case 0x8a:
    goto code_r0x0001004361b4;
  case 0x4a:
code_r0x00010043620c:
    pppppppuVar14 = (uint *******)&UNK_108ca26b0;
  case 0x96:
    pppppppuStack_a0 = (uint *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = s_duplicate_field_____108ac2973;
    param_3 = (uint *******)&uStack_90;
    pppppppuStack_a8 = pppppppuVar14;
code_r0x000100436240:
    pppppppuVar10 = (uint *******)thunk_FUN_108856088(param_2,param_3);
    pppppppuVar19 = pppppppuStack_2d0;
    param_2 = (char *)unaff_x20;
    goto LAB_100435fa4;
  case 0x4b:
    goto code_r0x000100436188;
  case 0x4c:
    goto code_r0x0001004361fc;
  case 0x4d:
  case 0xe6:
    goto code_r0x000100436130;
  case 0x4e:
    goto code_r0x000100436160;
  case 0x4f:
    goto code_r0x0001004361e4;
  case 0x50:
    goto code_r0x000100436108;
  case 0x51:
  case 0x89:
  case 0xfa:
    goto code_r0x00010043619c;
  case 0x54:
code_r0x000100436258:
    pppppppuStack_a8 = (uint *******)&UNK_108cb9606;
    pppppppuStack_a0 = (uint *******)0x6;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    pppppppuVar10 = (uint *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar19 = pppppppuStack_2d0;
    param_2 = (char *)unaff_x20;
    goto LAB_100435fa4;
  case 0x55:
    goto code_r0x000100435dc0;
  case 0x56:
    goto code_r0x000100435e04;
  case 0x58:
    goto code_r0x000100436054;
  case 0x59:
  case 0xcf:
  case 0xe7:
    goto code_r0x000100436064;
  case 0x5a:
    goto code_r0x00010043602c;
  case 0x5e:
  case 0xe0:
    goto code_r0x00010043608c;
  case 99:
    goto code_r0x000100435fc8;
  case 0x66:
  case 0xac:
    goto code_r0x000100435fa0;
  case 0x67:
  case 0xca:
  case 0xec:
    goto code_r0x000100436034;
  case 0x68:
code_r0x000100435f98:
    pppppppuVar10 = pppppppuStack_a0;
    pppppppuVar19 = pppppppuStack_2d0;
code_r0x000100435fa0:
    param_2 = (char *)unaff_x20;
LAB_100435fa4:
    pppppppuVar21 = (uint *******)&pppppppuStack_2c0;
    *pppppppuVar19 = (uint ******)0x800000000000006e;
    pppppppuVar19[1] = (uint ******)pppppppuVar10;
    if ((-0x7fffffffffffffff < (long)unaff_x22) && (unaff_x22 != (uint *******)0x0))
    goto code_r0x000100435fc8;
    goto LAB_100435eb8;
  case 0x6e:
    while( true ) {
      FUN_100e077ec(param_2);
      unaff_x22 = unaff_x21;
code_r0x0001004363ac:
      unaff_x24 = (uint *******)((long)unaff_x24 + -1);
      if (unaff_x24 == (uint *******)0x0) break;
code_r0x0001004363b4:
      param_2 = (char *)unaff_x22;
      unaff_x21 = (uint *******)((long)param_2 + 0x20);
    }
    param_2 = (char *)pppppppuVar21;
    if (unaff_x23 != (uint ******)0x0) goto code_r0x0001004363cc;
    goto code_r0x00010043640c;
  case 0x6f:
code_r0x0001004363cc:
    _free();
    __Unwind_Resume(pppppppuVar21);
  case 0x73:
    pppppppuVar21 = (uint *******)FUN_107c05ccc();
code_r0x0001004363e4:
    if (-0x7fffffffffffffff < (long)unaff_x22) {
code_r0x0001004363f4:
      if (unaff_x22 != (uint *******)0x0) {
code_r0x0001004363fc:
        _free();
      }
    }
code_r0x000100436400:
    FUN_100e7b998(&pppppppuStack_2c0);
    param_2 = (char *)pppppppuVar21;
    goto code_r0x00010043640c;
  case 0x70:
    goto code_r0x000100436394;
  case 0x71:
    goto code_r0x0001004363ac;
  case 0x72:
    pppppppuVar21 = (uint *******)param_2;
    goto code_r0x00010043635c;
  case 0x74:
    goto code_r0x0001004363f4;
  case 0x75:
    goto code_r0x0001004363b4;
  case 0x76:
    goto code_r0x00010043640c;
  case 0x77:
    _free();
    param_2 = (char *)__Unwind_Resume(pppppppuVar21);
code_r0x000100436394:
    pppppppuVar21 = (uint *******)param_2;
code_r0x00010043639c:
    goto code_r0x0001004363e4;
  case 0x78:
    goto code_r0x0001004363fc;
  case 0x79:
    _free();
code_r0x00010043635c:
    param_2 = (char *)&pppppppuStack_2c0;
code_r0x000100436360:
    FUN_100e81e80(param_2);
    param_2 = (char *)pppppppuVar21;
code_r0x00010043640c:
    __Unwind_Resume(param_2);
    FUN_107c05ccc();
    pppppppuVar14 = (uint *******)(ulong)*extraout_x1;
code_r0x00010043643c:
                    /* WARNING: Could not recover jumptable at 0x000100436454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100436458 + (ulong)*(ushort *)(&UNK_108c98ab6 + (long)pppppppuVar14 * 2) * 4))()
    ;
    return;
  case 0x7a:
    goto code_r0x000100436360;
  case 0x7b:
    goto code_r0x0001004363e4;
  case 0x7c:
    goto code_r0x000100436308;
  case 0x7d:
    goto code_r0x00010043639c;
  case 0x7e:
    in_ZR = ((ulong)unaff_x22 & 0x7fffffffffffffff) == 0;
    pppppppuVar21 = (uint *******)param_2;
code_r0x000100436308:
    if (!(bool)in_ZR) goto code_r0x0001004363fc;
    goto code_r0x000100436400;
  case 0x80:
    goto code_r0x00010043643c;
  case 0x81:
    goto code_r0x000100435998;
  case 0x82:
    goto code_r0x0001004359dc;
  case 0x84:
    goto code_r0x00010043617c;
  case 0x85:
  case 0xfc:
    goto code_r0x00010043618c;
  case 0x86:
    goto code_r0x000100436154;
  case 0x87:
  case 0xb9:
  case 0xf7:
    goto code_r0x00010043616c;
  case 0x88:
  case 0xe9:
  case 0xfb:
    goto code_r0x000100436118;
  case 0x8b:
  case 0xff:
    goto code_r0x000100436174;
  case 0x91:
    goto code_r0x0001004361a4;
  case 0x93:
  case 0xf3:
    goto code_r0x00010043615c;
  case 0x94:
  case 0xd3:
  case 0xfd:
    goto code_r0x0001004360c0;
  case 0x97:
  case 0xc3:
    goto code_r0x000100435d20;
  case 0x98:
  case 0xc4:
    goto code_r0x000100435d64;
  case 0x9a:
    goto code_r0x000100435f08;
  case 0x9b:
    goto code_r0x000100435f18;
  case 0x9c:
code_r0x000100435ee0:
    pppppppuVar15 = (uint *******)&UNK_108cb9606;
  case 0xa9:
    pppppppuStack_a0 = (uint *******)0x6;
    pppppppuVar14 = (uint *******)&pppppppuStack_a8;
    pppppppuVar19 = (uint *******)&UNK_100c7b000;
    pppppppuStack_a8 = pppppppuVar15;
code_r0x000100435ef8:
    uStack_90._0_1_ = (byte)pppppppuVar14;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar14 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar14 >> 0x10);
    uStack_88 = SUB81(pppppppuVar19 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppuVar19 + 0x74) >> 8);
    pppppppuVar10 = (uint *******)param_2;
FUN_100435f00:
    param_2 = s_missing_field_____108ac28f7;
code_r0x000100435f08:
    param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_90);
    pppppppuVar14 = (uint *******)0x800000000000006e;
code_r0x000100435f18:
    *pppppppuVar10 = (uint ******)pppppppuVar14;
    pppppppuVar10[1] = (uint ******)param_2;
    pppppppuVar21 = (uint *******)&pppppppuStack_2c0;
    if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
code_r0x000100435f28:
      param_2 = (char *)unaff_x20;
code_r0x000100435fc8:
      _free(param_2);
    }
    goto LAB_100435eb8;
  case 0x9d:
    goto code_r0x000100435ef8;
  case 0x9e:
    goto code_r0x000100435ea4;
  case 0x9f:
    goto code_r0x000100435f28;
  case 0xa0:
    goto code_r0x000100435f40;
  case 0xa1:
    goto FUN_100435f00;
  case 0xa2:
    goto code_r0x000100435f58;
  case 0xa3:
    goto code_r0x000100435ed4;
  case 0xa4:
    goto code_r0x000100435f48;
  case 0xa5:
    goto code_r0x000100435e7c;
  case 0xa6:
    goto code_r0x000100435eac;
  case 0xa7:
code_r0x000100435f30:
    pppppppuVar21 = (uint *******)((ulong)pppppppuVar21 & 0xffffffffffff | 0x8000000000000000);
    *(uint ********)param_2 = pppppppuVar21 + -1;
    *(uint ********)((long)param_2 + 8) = unaff_x22;
    *(uint ********)((long)param_2 + 0x10) = unaff_x20;
    *(uint ********)((long)param_2 + 0x18) = pppppppuVar19;
    pppppppuVar23 = (uint *******)param_2;
code_r0x000100435f40:
    *(char *)(pppppppuVar23 + 4) = (char)unaff_x21;
    param_2 = (char *)&ppppppuStack_270;
code_r0x000100435f48:
    _memcpy(param_2,pppppppuVar23,0x1c0);
    pppppppuVar14 = (uint *******)&pppppppuStack_2c0;
code_r0x000100435f58:
    FUN_100d34830(pppppppuVar14 + 4);
    if (unaff_x26 != unaff_x24) {
      uStack_90._0_1_ = (byte)unaff_x23;
      uStack_90._1_1_ = (char)((ulong)unaff_x23 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)unaff_x23 >> 0x10);
      pppppppuVar10 =
           (uint *******)
           thunk_FUN_1087e422c(((ulong)((long)unaff_x26 - (long)unaff_x24) >> 6) + (long)unaff_x23,
                               &uStack_90,&UNK_10b23a190);
      goto code_r0x0001004361d0;
    }
    goto LAB_100436124;
  case 0xa8:
code_r0x000100435e54:
    unaff_x23 = ppppppuStack_2d8;
code_r0x000100435e58:
    pppppppuVar10 = pppppppuStack_2d0;
    if (unaff_x22 != (uint *******)0x8000000000000001) {
      param_2 = (char *)pppppppuStack_2d0;
      if ((int)unaff_x21 != 2) {
        pppppppuVar21 = (uint *******)0x6e;
        pppppppuVar19 = pppppppuStack_2c8;
        goto code_r0x000100435f30;
      }
      goto code_r0x000100435ee0;
    }
code_r0x000100435e74:
    pppppppuVar21 = (uint *******)&pppppppuStack_2c0;
    pppppppuVar14 = (uint *******)&UNK_108ca26b0;
code_r0x000100435e7c:
    pppppppuStack_a0 = (uint *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = s_missing_field_____108ac28f7;
    param_3 = (uint *******)&uStack_90;
    pppppppuStack_a8 = pppppppuVar14;
code_r0x000100435ea4:
    unaff_x20 = (uint *******)thunk_FUN_108856088(param_2,param_3);
    param_2 = (char *)pppppppuVar10;
code_r0x000100435eac:
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint ********)((long)param_2 + 8) = unaff_x20;
LAB_100435eb8:
    FUN_100d34830(pppppppuVar21 + 4);
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
code_r0x000100435ed4:
    }
    goto LAB_100436124;
  case 0xaa:
    goto code_r0x000100435e4c;
  case 0xad:
    goto code_r0x000100435b84;
  case 0xae:
    goto code_r0x000100435bc8;
  case 0xb1:
    goto code_r0x0001004361b0;
  case 0xb2:
    goto code_r0x000100436178;
  case 0xb3:
  case 0xee:
    goto code_r0x000100436190;
  case 0xb4:
  case 0xf5:
    goto code_r0x00010043613c;
  case 0xb5:
    goto code_r0x0001004361c0;
  case 0xb6:
    goto code_r0x0001004361d8;
  case 0xb7:
    goto code_r0x000100436198;
  case 0xb8:
    goto code_r0x0001004361f0;
  case 0xba:
code_r0x0001004361e0:
code_r0x0001004361e4:
    param_2 = &UNK_108ca1000;
code_r0x0001004361f0:
    param_2 = (char *)((long)param_2 + 0xa98);
code_r0x0001004361f4:
    param_4 = &UNK_10b24f848;
code_r0x0001004361fc:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x0001004362c0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004362c4);
    (*pcVar2)();
  case 0xbb:
    goto code_r0x000100436114;
  case 0xbd:
    goto code_r0x0001004361c8;
  case 0xbe:
    goto code_r0x0001004360ec;
  case 0xbf:
    goto code_r0x000100436180;
  case 0xc2:
    goto code_r0x000100436240;
  case 0xcd:
    goto code_r0x000100436090;
  case 0xd1:
    goto code_r0x00010043600c;
  case 0xd2:
  case 0xea:
    goto code_r0x00010043603c;
  case 0xd4:
    goto code_r0x000100435fe4;
  case 0xd5:
    goto code_r0x000100436078;
  case 0xd6:
code_r0x000100435fdc:
    pppppppuVar21 = (uint *******)&pppppppuStack_2c0;
    param_2 = (char *)pppppppuStack_2d0;
code_r0x000100435fe4:
    goto code_r0x000100435eac;
  case 0xd9:
    goto code_r0x000100435cd4;
  case 0xda:
    goto code_r0x000100435d18;
  case 0xe5:
    goto code_r0x0001004360bc;
  case 0xf2:
    goto code_r0x00010043614c;
  case 0xf4:
    goto LAB_100436124;
  case 0xf8:
    goto code_r0x000100436184;
  }
  ppppppuStack_270 = (uint ******)CONCAT71(ppppppuStack_270._1_7_,bVar13);
code_r0x000100436104:
  param_4 = &UNK_10b219000;
code_r0x000100436108:
  param_4 = param_4 + 0x990;
  pppppppuVar10 = &ppppppuStack_270;
code_r0x000100436110:
  param_3 = (uint *******)&pppppppuStack_a8;
code_r0x000100436114:
  pppppppuVar10 = (uint *******)FUN_107c05dcc(pppppppuVar10,param_3,param_4);
code_r0x000100436118:
  pppppppuVar14 = (uint *******)0x800000000000006e;
code_r0x000100436120:
  *(uint ********)param_2 = pppppppuVar14;
  *(uint ********)((long)param_2 + 8) = pppppppuVar10;
LAB_100436124:
code_r0x000100436128:
code_r0x000100436130:
code_r0x000100436138:
code_r0x00010043613c:
code_r0x000100436140:
  return;
}

