
/* WARNING: Type propagation algorithm not settling */

void FUN_100484c7c(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  ulong *******pppppppuVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char *pcVar17;
  ulong *******pppppppuVar18;
  ulong ******ppppppuVar19;
  ulong ******ppppppuVar20;
  uint uVar21;
  byte bVar22;
  ulong *******pppppppuVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar29;
  ulong *******unaff_x25;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  ulong *******unaff_x27;
  ulong *******pppppppuVar32;
  undefined1 *puVar33;
  undefined8 unaff_x30;
  ulong *******pppppppuVar34;
  ulong *******pppppppuVar35;
  undefined1 auStack_340 [88];
  ulong *******pppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  undefined8 uStack_2d8;
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
  ulong *******pppppppuStack_270;
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
  ulong *******pppppppuStack_78;
  undefined1 *puVar16;
  
  pppppppuVar35 = param_1._8_8_;
  pppppppuVar34 = param_1._0_8_;
  puVar33 = &stack0xfffffffffffffff0;
  puVar15 = auStack_340 + 0x50;
  pppppppuVar31 = (ulong *******)&uStack_90;
  bVar22 = *(byte *)param_3;
  pppppppuVar23 = (ulong *******)(ulong)bVar22;
  pppppppuVar27 = (ulong *******)&UNK_108c99ab2;
  puVar11 = auStack_340 + 0x50;
  puVar12 = auStack_340 + 0x50;
  puVar13 = auStack_340 + 0x50;
  puVar14 = auStack_340 + 0x50;
  puVar16 = auStack_340 + 0x50;
  puVar8 = auStack_340 + 0x50;
  puVar9 = auStack_340 + 0x50;
  puVar10 = auStack_340 + 0x50;
  puVar4 = auStack_340 + 0x50;
  puVar5 = auStack_340 + 0x50;
  puVar6 = auStack_340 + 0x50;
  puVar7 = auStack_340 + 0x50;
  pppppppuVar18 = param_2;
  pcVar17 = (char *)param_2;
  pppppppuVar28 =
       (ulong *******)
       (&UNK_100484cc0 + (ulong)*(ushort *)(&UNK_108c99ab2 + (long)pppppppuVar23 * 2) * 4);
  pppppppuVar30 = pppppppuVar31;
  pppppppuVar32 = unaff_x27;
  pppppppuVar2 = pppppppuStack_298;
  switch(bVar22) {
  case 0:
  case 0x32:
  case 0x87:
  case 0x9a:
  case 0xc6:
    bVar22 = *(byte *)((long)param_3 + 1);
  case 0x1d:
    pppppppuStack_270 = (ulong *******)((ulong)CONCAT61(pppppppuStack_270._2_6_,bVar22) << 8);
code_r0x0001004854dc:
    pppppppuStack_270 = (ulong *******)((ulong)pppppppuStack_270 & 0xffffffffffffff00);
code_r0x0001004854e0:
    goto code_r0x000100485534;
  case 1:
  case 0x84:
  case 0x9b:
  case 199:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0x34:
  case 0x47:
code_r0x0001004854ec:
    bVar22 = 1;
code_r0x0001004854f0:
    break;
  case 2:
  case 0x1f:
  case 0x2d:
  case 0x51:
  case 0x7e:
  case 0x9c:
  case 200:
    pppppppuVar23 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x8d:
  case 0xc0:
    pppppppuStack_268 = pppppppuVar23;
    goto code_r0x0001004854ec;
  case 3:
  case 0x39:
  case 0x49:
  case 0x93:
  case 0x9d:
  case 0xc9:
    pppppppuStack_268 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    goto code_r0x0001004854ec;
  case 4:
  case 0x4e:
  case 0x9e:
  case 0xca:
    pppppppuVar23 = (ulong *******)param_3[1];
  case 0x2e:
    pppppppuStack_268 = pppppppuVar23;
    goto code_r0x0001004854ec;
  case 5:
  case 0x4f:
  case 0x85:
  case 0x9f:
  case 0xcb:
    pppppppuVar23 = (ulong *******)(long)(char)*(byte *)((long)param_3 + 1);
    goto code_r0x000100485528;
  case 6:
  case 0x4c:
  case 0x7a:
  case 0x91:
  case 0xa0:
  case 0xcc:
    pppppppuVar23 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0xbc:
code_r0x000100485528:
    bVar22 = 2;
    pppppppuStack_268 = pppppppuVar23;
    break;
  case 7:
  case 0x42:
  case 0xa1:
  case 0xcd:
    pppppppuVar23 = (ulong *******)(long)*(int *)((long)param_3 + 4);
  case 0x19:
    goto code_r0x000100485528;
  case 8:
  case 0x8e:
  case 0xa2:
  case 0xce:
    pppppppuVar23 = (ulong *******)param_3[1];
    goto code_r0x000100485528;
  case 9:
  case 0xa3:
  case 0xcf:
    pppppppuVar34 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x44:
    pppppppuVar34 = (ulong *******)(double)SUB84(pppppppuVar34,0);
code_r0x000100485518:
    pppppppuStack_268 = pppppppuVar34;
code_r0x00010048551c:
    bVar22 = 3;
code_r0x000100485520:
    break;
  case 10:
  case 0xa4:
  case 0xd0:
    pppppppuVar34 = (ulong *******)param_3[1];
    goto code_r0x000100485518;
  case 0xb:
  case 0xa5:
  case 0xd1:
  case 0xe4:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    puVar8 = &stack0xffffffffffffffa0;
  case 0x21:
    puVar33 = *(undefined1 **)(puVar8 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar8 + 0x58);
    puVar9 = puVar8;
code_r0x000100485458:
    unaff_x20 = *(ulong ********)(puVar9 + 0x40);
    pppppppuVar18 = *(ulong ********)(puVar9 + 0x48);
    puVar10 = puVar9;
code_r0x000100485468:
    *(ulong ********)(puVar10 + 0x40) = unaff_x20;
    *(ulong ********)(puVar10 + 0x48) = pppppppuVar18;
    *(undefined1 **)(puVar10 + 0x50) = puVar33;
    *(undefined8 *)(puVar10 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar10 + 0x1c) = 0;
    uVar21 = (uint)param_3;
    if (uVar21 < 0x80) {
      puVar10[0x1c] = (byte)param_3;
      uVar24 = 1;
    }
    else {
      bVar22 = (byte)param_3 & 0x3f | 0x80;
      if (uVar21 < 0x800) {
        puVar10[0x1c] = (byte)(uVar21 >> 6) | 0xc0;
        puVar10[0x1d] = bVar22;
        uVar24 = 2;
      }
      else {
        bVar1 = (byte)(uVar21 >> 6) & 0x3f | 0x80;
        if (uVar21 < 0x10000) {
          puVar10[0x1c] = (byte)(uVar21 >> 0xc) | 0xe0;
          puVar10[0x1d] = bVar1;
          puVar10[0x1e] = bVar22;
          uVar24 = 3;
        }
        else {
          puVar10[0x1c] = (byte)(uVar21 >> 0x12) | 0xf0;
          puVar10[0x1d] = (byte)(uVar21 >> 0xc) & 0x3f | 0x80;
          puVar10[0x1e] = bVar1;
          puVar10[0x1f] = bVar22;
          uVar24 = 4;
        }
      }
    }
    *(undefined1 **)(puVar10 + 0x28) = puVar10 + 0x1c;
    *(undefined8 *)(puVar10 + 0x30) = uVar24;
    puVar10[0x20] = 5;
    ppppppuVar19 = (ulong ******)func_0x000108a4a50c(puVar10 + 0x20,puVar10 + 0x3f,&UNK_10b219f50);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar19;
    return;
  case 0xc:
  case 0xa6:
  case 0xd2:
    param_3 = param_3 + 1;
  case 0x1a:
  case 0x3b:
code_r0x000100485480:
    puVar11 = &stack0xffffffffffffffa0;
code_r0x000100485484:
    puVar33 = *(undefined1 **)(puVar11 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar11 + 0x58);
    puVar12 = puVar11;
code_r0x000100485488:
    unaff_x20 = *(ulong ********)(puVar12 + 0x40);
    pppppppuVar18 = *(ulong ********)(puVar12 + 0x48);
    puVar13 = puVar12;
code_r0x00010048548c:
    unaff_x22 = *(ulong ********)(puVar13 + 0x30);
    unaff_x21 = *(ulong ********)(puVar13 + 0x38);
    puVar14 = puVar13;
code_r0x000100485494:
    puVar16 = puVar14;
code_r0x000100485498:
    puVar15 = puVar16 + 0x60;
code_r0x00010048549c:
    *(ulong ********)(puVar15 + -0x30) = unaff_x22;
    *(ulong ********)(puVar15 + -0x28) = unaff_x21;
    *(ulong ********)(puVar15 + -0x20) = unaff_x20;
    *(ulong ********)(puVar15 + -0x18) = pppppppuVar18;
    *(undefined1 **)(puVar15 + -0x10) = puVar33;
    *(undefined8 *)(puVar15 + -8) = unaff_x30;
    ppppppuVar19 = param_3[1];
    ppppppuVar20 = param_3[2];
    *(ulong *******)(puVar15 + -0x48) = ppppppuVar19;
    *(ulong *******)(puVar15 + -0x40) = ppppppuVar20;
    puVar15[-0x50] = 5;
    ppppppuVar20 = (ulong ******)func_0x000108a4a50c(puVar15 + -0x50,puVar15 + -0x31,&UNK_10b219f50)
    ;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar20;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar19);
    }
    return;
  case 0xd:
  case 0xa7:
  case 0xd3:
    pppppppuVar23 = (ulong *******)param_3[1];
    pppppppuVar27 = (ulong *******)param_3[2];
  case 0x1b:
    pppppppuStack_268 = pppppppuVar23;
    pppppppuStack_260 = pppppppuVar27;
code_r0x000100485504:
    bVar22 = 5;
code_r0x000100485508:
    break;
  case 0xe:
  case 0xa8:
  case 0xd4:
  case 0xe9:
    param_3 = param_3 + 1;
  case 0x26:
code_r0x000100485428:
    puVar4 = &stack0xffffffffffffffa0;
code_r0x00010048542c:
    puVar33 = *(undefined1 **)(puVar4 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar4 + 0x58);
    puVar5 = puVar4;
code_r0x000100485430:
    unaff_x20 = *(ulong ********)(puVar5 + 0x40);
    pppppppuVar18 = *(ulong ********)(puVar5 + 0x48);
    unaff_x22 = *(ulong ********)(puVar5 + 0x30);
    unaff_x21 = *(ulong ********)(puVar5 + 0x38);
    puVar6 = puVar5;
code_r0x000100485438:
    puVar7 = puVar6;
code_r0x000100485440:
    *(ulong ********)(puVar7 + 0x30) = unaff_x22;
    *(ulong ********)(puVar7 + 0x38) = unaff_x21;
    *(ulong ********)(puVar7 + 0x40) = unaff_x20;
    *(ulong ********)(puVar7 + 0x48) = pppppppuVar18;
    *(undefined1 **)(puVar7 + 0x50) = puVar33;
    *(undefined8 *)(puVar7 + 0x58) = unaff_x30;
    ppppppuVar19 = param_3[1];
    ppppppuVar20 = param_3[2];
    *(ulong *******)(puVar7 + 0x18) = ppppppuVar19;
    *(ulong *******)(puVar7 + 0x20) = ppppppuVar20;
    puVar7[0x10] = 6;
    ppppppuVar20 = (ulong ******)func_0x000108a4a50c(puVar7 + 0x10,puVar7 + 0x2f,&UNK_10b219f50);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar20;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar19);
    }
    return;
  case 0xf:
  case 0x7c:
  case 0xa9:
  case 0xd5:
    pppppppuVar23 = (ulong *******)param_3[1];
    pppppppuVar27 = (ulong *******)param_3[2];
  case 0x18:
  case 0xbe:
    pppppppuStack_268 = pppppppuVar23;
    pppppppuStack_260 = pppppppuVar27;
code_r0x0001004854bc:
    bVar22 = 6;
code_r0x0001004854c0:
    break;
  case 0x10:
  case 0x50:
  case 0xaa:
  case 0xd6:
  case 0xe1:
    bVar22 = 8;
    break;
  default:
    pppppppuVar18 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)pppppppuVar18[1];
    pppppppuStack_270 = (ulong *******)*pppppppuVar18;
    ppppppuStack_258 = pppppppuVar18[3];
    pppppppuStack_260 = (ulong *******)pppppppuVar18[2];
    func_0x000107c04914(param_2,&pppppppuStack_270);
  case 0xc3:
code_r0x00010048510c:
code_r0x000100485114:
code_r0x00010048511c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar18);
    return;
  case 0x12:
  case 0xac:
  case 0xd8:
    bVar22 = 7;
  case 0x6f:
    break;
  case 0x13:
  case 0x55:
  case 0xad:
  case 0xd9:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuVar35 = (ulong *******)unaff_x20[1];
    pppppppuVar34 = (ulong *******)*unaff_x20;
  case 0x97:
    ppppppuStack_258 = unaff_x20[3];
    pppppppuStack_260 = (ulong *******)unaff_x20[2];
    pppppppuStack_270 = pppppppuVar34;
    pppppppuStack_268 = pppppppuVar35;
code_r0x0001004850f0:
    pppppppuVar18 = unaff_x20;
    func_0x000107c05308(param_2,&pppppppuStack_270);
    goto code_r0x00010048510c;
  case 0x14:
  case 0x56:
  case 0xae:
  case 0xda:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x27 = (ulong *******)param_3[3];
  case 0x98:
    unaff_x24 = unaff_x20 + (long)unaff_x27 * 4;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
code_r0x000100485134:
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    if (unaff_x27 == (ulong *******)0x0) {
code_r0x000100485154:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22fae8,&UNK_10b20a590);
code_r0x000100485170:
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = (ulong ******)pppppppuStack_a0;
code_r0x00010048517c:
      lVar29 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar29 = lVar29 + -1, lVar29 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
code_r0x0001004851a4:
      param_2 = unaff_x20;
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x0001004851ac:
        _free(param_2);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      bVar22 = *(byte *)unaff_x20;
      in_ZR = bVar22 == 0x16;
      pppppppuStack_2b8 = unaff_x21;
code_r0x000100485150:
      if ((bool)in_ZR) goto code_r0x000100485154;
      uVar24 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar24;
      uStack_90._2_6_ = (undefined6)((ulong)uVar24 >> 8);
      uStack_88 = (undefined1)((ulong)uVar24 >> 0x38);
      pppppppuStack_78 = (ulong *******)unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
code_r0x0001004851d4:
      uStack_90._0_1_ = bVar22;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x000100485170;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      if (unaff_x27 == (ulong *******)0x1) {
code_r0x000100485214:
        pppppppuVar18 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22fae8,&UNK_10b20a590);
code_r0x00010048522c:
        *param_2 = (ulong ******)0x800000000000006e;
        param_2[1] = (ulong ******)pppppppuVar18;
code_r0x000100485238:
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x000100485240:
          _free(unaff_x22);
        }
        goto code_r0x00010048517c;
      }
code_r0x0001004851fc:
      unaff_x21 = unaff_x20 + 8;
      unaff_x27 = pppppppuStack_98;
code_r0x000100485204:
      bVar22 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar22 == 0x16) goto code_r0x000100485214;
code_r0x00010048557c:
      pppppppuVar35 = *(ulong ********)((long)unaff_x20 + 0x29);
      pppppppuVar34 = *(ulong ********)((long)unaff_x20 + 0x21);
code_r0x000100485580:
      uStack_87 = SUB87(pppppppuVar35,0);
      uStack_90._1_1_ = (char)pppppppuVar34;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar34 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar34 >> 0x38);
code_r0x000100485584:
      pppppppuVar35 = (ulong *******)unaff_x20[7];
      pppppppuVar34 = (ulong *******)unaff_x20[6];
code_r0x000100485588:
      uStack_80 = SUB81(pppppppuVar34,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar34 >> 8);
      pppppppuStack_78 = pppppppuVar35;
code_r0x00010048558c:
      pppppppuVar27 = (ulong *******)0x2;
code_r0x000100485590:
      pppppppuStack_2a0 = pppppppuVar27;
code_r0x000100485594:
      uStack_90._0_1_ = bVar22;
      pppppppuVar18 = (ulong *******)&pppppppuStack_a8;
      param_3 = (ulong *******)&uStack_90;
code_r0x0001004855a0:
      func_0x00010138ac54(pppppppuVar18,param_3);
code_r0x0001004855a4:
      pppppppuVar18 = pppppppuStack_a0;
      pppppppuVar23 = pppppppuStack_a8;
code_r0x0001004855a8:
      pppppppuVar27 = (ulong *******)0x8000000000000000;
code_r0x0001004855ac:
      if (pppppppuVar23 == pppppppuVar27) goto code_r0x00010048522c;
      unaff_x20 = (ulong *******)0x6e;
code_r0x0001004855b8:
      unaff_x20 = (ulong *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
code_r0x0001004855bc:
      pppppppuVar27 = pppppppuStack_98;
code_r0x0001004855c0:
      *param_2 = (ulong ******)((long)unaff_x20 + -0x43);
      param_2[1] = (ulong ******)pppppppuVar23;
code_r0x0001004855c8:
      param_2[2] = (ulong ******)pppppppuVar18;
      param_2[3] = (ulong ******)pppppppuVar27;
      param_2[4] = (ulong ******)unaff_x25;
      param_2[5] = (ulong ******)unaff_x22;
      param_2[6] = (ulong ******)unaff_x27;
      pppppppuVar18 = (ulong *******)&pppppppuStack_270;
code_r0x0001004855d8:
      _memcpy(pppppppuVar18,param_2,0x1c0);
      pppppppuVar18 = (ulong *******)&pppppppuStack_2c0;
code_r0x0001004855e8:
      pppppppuVar18 = (ulong *******)FUN_100fbc738(pppppppuVar18);
      if (pppppppuVar18 != (ulong *******)0x0) {
code_r0x0001004855f0:
        *param_2 = (ulong ******)unaff_x20;
        param_2[1] = (ulong ******)pppppppuVar18;
        FUN_100e44f40(&pppppppuStack_270);
      }
    }
    goto code_r0x000100485558;
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
    pppppppuStack_2a0 = (ulong *******)param_3[2];
    ppppppuVar19 = param_3[3];
    unaff_x23 = pppppppuStack_2a0 + (long)ppppppuVar19 * 8;
    pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
    pppppppuStack_298 = pppppppuStack_2a0;
    ppppppuStack_290 = param_3[1];
    pppppppuStack_288 = unaff_x23;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    if (ppppppuVar19 != (ulong ******)0x0) {
      unaff_x25 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_90 | 1);
      unaff_x21 = (ulong *******)((ulong)pppppppuVar31 | 1);
      pppppppuStack_2e8 = (ulong *******)(((long)ppppppuVar19 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (ulong *******)0x8000000000000001;
      unaff_x24 = (ulong *******)0x8000000000000000;
      pppppppuVar32 = pppppppuStack_2a0;
      do {
        pppppppuVar31 = pppppppuVar32 + 8;
        bVar22 = *(byte *)pppppppuVar32;
        pppppppuVar27 = (ulong *******)(ulong)bVar22;
        pppppppuVar30 = pppppppuVar31;
        pppppppuVar2 = pppppppuVar31;
        if (bVar22 == 0x16) goto code_r0x000100485258;
        uStack_90._0_1_ = bVar22;
code_r0x000100484d74:
        unaff_x27 = pppppppuStack_2d0;
        ppppppuVar19 = pppppppuVar32[2];
        *(ulong *******)((long)unaff_x20 + 0x17) = pppppppuVar32[3];
        *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar19;
        ppppppuVar19 = *(ulong *******)((long)pppppppuVar32 + 1);
        unaff_x20[1] = *(ulong *******)((long)pppppppuVar32 + 9);
        *unaff_x20 = ppppppuVar19;
        pppppppuStack_2b8 = (ulong *******)pppppppuVar32[5];
        pppppppuStack_2c0 = (ulong *******)pppppppuVar32[4];
        pppppppuStack_2a8 = (ulong *******)pppppppuVar32[7];
        pppppppuStack_2b0 = (ulong *******)pppppppuVar32[6];
        pppppppuVar23 = (ulong *******)CONCAT71(uStack_87,uStack_88);
        pppppppuVar18 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
        uVar21 = (uint)pppppppuVar27;
        if (uVar21 < 0xd) {
          if (uVar21 == 1) {
            iVar26 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar26 = 2;
            }
            iVar25 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar25 = iVar26;
            }
          }
          else {
            if (uVar21 != 4) {
              if (uVar21 == 0xc) {
                in_ZR = pppppppuStack_78 == (ulong *******)0x6;
                pppppppuVar28 = pppppppuStack_78;
code_r0x000100484db8:
                if ((bool)in_ZR) {
                  iVar25 = 1;
                  if (*(int *)pppppppuVar18 != 0x61726170 ||
                      *(short *)((long)pppppppuVar18 + 4) != 0x736d) {
                    iVar25 = 2;
                  }
                }
                else if (pppppppuVar28 == (ulong *******)0x2) {
                  iVar25 = 2;
                  if (*(short *)pppppppuVar18 == 0x6469) {
                    iVar25 = 0;
                  }
                }
                else {
                  iVar25 = 2;
                }
                goto joined_r0x000100484f38;
              }
code_r0x00010048572c:
              pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
              pppppppuStack_298 = pppppppuVar31;
              ppppppuVar19 = (ulong ******)
                             thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b212900);
              pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
              goto code_r0x0001004852a4;
            }
            iVar26 = 1;
            if (pppppppuVar23 != (ulong *******)0x1) {
              iVar26 = 2;
            }
            iVar25 = 0;
            if (pppppppuVar23 != (ulong *******)0x0) {
              iVar25 = iVar26;
            }
          }
code_r0x000100484fc4:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (uVar21 == 0xd) {
            if (pppppppuVar18 == (ulong *******)0x6) {
              in_ZR = *(int *)pppppppuVar23 == 0x61726170 &&
                      *(short *)((long)pppppppuVar23 + 4) == 0x736d;
code_r0x000100484fbc:
              iVar25 = 1;
              if (!(bool)in_ZR) {
                iVar25 = 2;
              }
            }
            else {
              if (pppppppuVar18 != (ulong *******)0x2) goto code_r0x000100484f90;
              iVar25 = 2;
              if (*(short *)pppppppuVar23 == 0x6469) {
                iVar25 = 0;
              }
            }
            goto code_r0x000100484fc4;
          }
          if (uVar21 != 0xe) {
            if (uVar21 != 0xf) goto code_r0x00010048572c;
            if (pppppppuVar18 == (ulong *******)0x6) {
              if ((((*(byte *)pppppppuVar23 == 0x70) && (*(byte *)((long)pppppppuVar23 + 1) == 0x61)
                   ) && (*(byte *)((long)pppppppuVar23 + 2) == 0x72)) &&
                 (*(byte *)((long)pppppppuVar23 + 3) == 0x61)) {
                in_ZR = *(byte *)((long)pppppppuVar23 + 4) == 0x6d;
code_r0x000100484f78:
                if (((bool)in_ZR) && (*(byte *)((long)pppppppuVar23 + 5) == 0x73)) {
                  iVar25 = 1;
                  goto code_r0x000100484fc4;
                }
              }
            }
            else if (((pppppppuVar18 == (ulong *******)0x2) && (*(byte *)pppppppuVar23 == 0x69)) &&
                    (*(byte *)((long)pppppppuVar23 + 1) == 100)) {
              iVar25 = 0;
              goto code_r0x000100484fc4;
            }
code_r0x000100484f90:
            iVar25 = 2;
            goto code_r0x000100484fc4;
          }
          if (pppppppuStack_78 == (ulong *******)0x6) {
            if (((((*(byte *)pppppppuVar18 != 0x70) || (*(byte *)((long)pppppppuVar18 + 1) != 0x61))
                 || (*(byte *)((long)pppppppuVar18 + 2) != 0x72)) ||
                ((*(byte *)((long)pppppppuVar18 + 3) != 0x61 ||
                 (*(byte *)((long)pppppppuVar18 + 4) != 0x6d)))) ||
               (*(byte *)((long)pppppppuVar18 + 5) != 0x73)) goto code_r0x000100484f00;
            iVar25 = 1;
          }
          else if (((pppppppuStack_78 == (ulong *******)0x2) && (*(byte *)pppppppuVar18 == 0x69)) &&
                  (*(byte *)((long)pppppppuVar18 + 1) == 100)) {
            iVar25 = 0;
          }
          else {
code_r0x000100484f00:
            iVar25 = 2;
          }
joined_r0x000100484f38:
          if (pppppppuVar23 != (ulong *******)0x0) {
            _free();
          }
        }
        unaff_x27 = pppppppuStack_2d0;
        bVar22 = (byte)pppppppuStack_2c0;
        if (iVar25 == 0) {
          if (unaff_x22 != (ulong *******)0x8000000000000001) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
            pppppppuStack_a0 = (ulong *******)0x2;
            uStack_90._0_1_ = (byte)&pppppppuStack_a8;
            uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_298 = pppppppuVar31;
            ppppppuVar19 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
            goto code_r0x0001004852a4;
          }
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar22 == 0x16) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_298 = pppppppuVar31;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100485728;
          }
          ppppppuVar19 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar19;
          uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
          uStack_90._0_1_ = bVar22;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            unaff_x22 = (ulong *******)0x8000000000000001;
            pppppppuVar18 = pppppppuStack_a0;
            unaff_x21 = pppppppuStack_2c8;
            unaff_x27 = pppppppuStack_2d0;
            pppppppuStack_298 = pppppppuVar31;
            goto code_r0x0001004853c4;
          }
          pppppppuStack_2c8 = pppppppuStack_a0;
          uStack_2d8 = pppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
        }
        else if (iVar25 == 1) {
          if (unaff_x24 != (ulong *******)0x8000000000000000) goto code_r0x000100485600;
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar22 == 0x16) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_298 = pppppppuVar31;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100485728:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10048572c);
            (*pcVar3)();
          }
          ppppppuVar19 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar19;
          uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
          uStack_90._0_1_ = bVar22;
          func_0x00010138ac54(&pppppppuStack_a8,&uStack_90);
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000000) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuVar23 = pppppppuStack_a0;
            pppppppuStack_298 = pppppppuVar31;
            goto code_r0x000100485394;
          }
          pppppppuStack_2d0 = pppppppuStack_a0;
          pppppppuStack_2e0 = pppppppuStack_98;
          unaff_x24 = pppppppuStack_a8;
        }
        else {
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar22 == 0x16) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_298 = pppppppuVar31;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100485728;
          }
          ppppppuVar19 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar19;
          uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
          uStack_90._0_1_ = bVar22;
code_r0x0001004850d0:
          FUN_100e077ec(&uStack_90);
code_r0x0001004850d8:
        }
        pppppppuVar27 = pppppppuVar32 + 8;
        unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
        pppppppuVar30 = unaff_x23;
        pppppppuVar32 = pppppppuVar31;
      } while (pppppppuVar27 != unaff_x23);
      goto code_r0x000100485250;
    }
    unaff_x24 = (ulong *******)0x0;
  case 0x59:
code_r0x000100485270:
    pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_a0 = (ulong *******)0x2;
code_r0x000100485280:
    pppppppuVar23 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar27 = (ulong *******)&UNK_100c7b000;
code_r0x000100485288:
    uStack_90._0_1_ = (byte)pppppppuVar23;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar23 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar23 >> 0x10);
    uStack_88 = SUB81(pppppppuVar27 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppuVar27 + 0x74) >> 8);
    unaff_x22 = (ulong *******)0x8000000000000001;
    pppppppuVar18 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x000100485298:
    pppppppuVar18 = (ulong *******)((long)pppppppuVar18 + 0x8f7);
    param_3 = (ulong *******)&uStack_90;
code_r0x0001004852a0:
    ppppppuVar19 = (ulong ******)thunk_FUN_108856088(pppppppuVar18,param_3);
    pppppppuStack_2c8 = unaff_x21;
code_r0x0001004852a4:
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar19;
    unaff_x21 = pppppppuStack_2c8;
code_r0x0001004852b0:
    unaff_x24 = (ulong *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
joined_r0x000100485650:
    if (unaff_x24 != (ulong *******)0x0) {
LAB_1004852b8:
      _free(unaff_x27);
    }
LAB_1004853dc:
    pppppppuVar23 = (ulong *******)0x2;
code_r0x0001004853e0:
    in_OV = SBORROW8((long)unaff_x22,(ulong)pppppppuVar23 | 0x8000000000000000);
    in_NG = (long)((long)unaff_x22 - ((ulong)pppppppuVar23 | 0x8000000000000000)) < 0;
code_r0x0001004853e8:
    if (in_NG == in_OV) {
joined_r0x000100485314:
      if (unaff_x22 != (ulong *******)0x0) {
code_r0x0001004853f0:
        _free(unaff_x21);
      }
    }
LAB_1004853f8:
    FUN_100d34830(pppppppuVar31 + 4);
    in_ZR = (byte)pppppppuStack_2c0 == '\x16';
code_r0x000100485408:
    if (!(bool)in_ZR) {
      param_2 = (ulong *******)&pppppppuStack_2c0;
code_r0x000100485410:
      FUN_100e077ec(param_2);
    }
    goto code_r0x000100485558;
  case 0x16:
  case 0xbb:
    goto code_r0x0001004854e0;
  case 0x17:
    goto code_r0x0001004854f0;
  case 0x1c:
    goto code_r0x000100485518;
  case 0x1e:
    break;
  case 0x20:
    goto code_r0x000100485520;
  case 0x22:
    goto code_r0x000100485484;
  case 0x23:
  case 0xb4:
    goto code_r0x000100485508;
  case 0x24:
    goto code_r0x00010048542c;
  case 0x25:
    goto code_r0x0001004854c0;
  case 0x28:
    goto code_r0x000100485580;
  case 0x29:
    goto code_r0x0001004850d8;
  case 0x2a:
    goto code_r0x00010048511c;
  case 0x2c:
    goto code_r0x00010048549c;
  case 0x2f:
    goto code_r0x00010048548c;
  case 0x30:
  case 0xe6:
    goto code_r0x000100485438;
  case 0x31:
  case 0x45:
  case 0x86:
    goto code_r0x0001004854bc;
  case 0x33:
  case 0xee:
    goto code_r0x000100485494;
  case 0x35:
  case 0x46:
    goto code_r0x000100485468;
  case 0x36:
  case 0x43:
  case 0x79:
  case 0x8b:
    goto code_r0x0001004854dc;
  case 0x37:
  case 0x52:
    goto code_r0x000100485410;
  case 0x38:
  case 0x4d:
    goto code_r0x000100485440;
  case 0x3a:
  case 0xdf:
    goto code_r0x0001004853e8;
  case 0x3c:
    goto code_r0x0001004853e0;
  case 0x3e:
  case 0xfd:
    goto code_r0x00010048553c;
  case 0x3f:
    goto code_r0x0001004850d0;
  case 0x40:
    goto code_r0x000100485114;
  case 0x48:
  case 0x72:
  case 0x89:
    goto code_r0x000100485504;
  case 0x4a:
  case 0x8a:
    goto code_r0x00010048551c;
  case 0x4b:
    goto code_r0x000100485498;
  case 0x54:
  case 0xb0:
  case 0xfe:
    goto code_r0x00010048556c;
  case 0x58:
    goto code_r0x000100485260;
  case 0x5a:
    goto code_r0x000100485238;
  case 0x5b:
code_r0x000100485250:
    unaff_x25 = pppppppuStack_2e8;
    pppppppuVar2 = pppppppuVar30;
  case 0x5f:
code_r0x000100485258:
    pppppppuStack_298 = pppppppuVar2;
    pppppppuVar23 = (ulong *******)0x8000000000000001;
    pppppppuStack_280 = unaff_x25;
code_r0x000100485260:
    unaff_x21 = pppppppuStack_2c8;
    if (unaff_x22 == pppppppuVar23) {
      pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
      unaff_x27 = pppppppuStack_2d0;
      goto code_r0x000100485270;
    }
    if (unaff_x24 == (ulong *******)0x8000000000000000) {
      pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_a0 = (ulong *******)0x6;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      pcVar17 = s_missing_field_____108ac28f7;
      param_3 = (ulong *******)&uStack_90;
code_r0x0001004852fc:
      ppppppuVar19 = (ulong ******)thunk_FUN_108856088(pcVar17,param_3);
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = ppppppuVar19;
      unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
      pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
      goto joined_r0x000100485314;
    }
    unaff_x20 = (ulong *******)0x800000000000006e;
    *param_2 = (ulong ******)0x800000000000002b;
    param_2[1] = (ulong ******)unaff_x24;
    param_2[2] = (ulong ******)pppppppuStack_2d0;
    param_2[3] = (ulong ******)pppppppuStack_2e0;
    param_2[4] = (ulong ******)unaff_x22;
    param_2[5] = (ulong ******)pppppppuStack_2c8;
    param_2[6] = (ulong ******)uStack_2d8;
code_r0x00010048533c:
    pppppppuVar18 = (ulong *******)&pppppppuStack_270;
    param_3 = param_2;
code_r0x000100485344:
    _memcpy(pppppppuVar18,param_3,0x1c0);
    FUN_100d34830(&pppppppuStack_2a0);
    if (unaff_x23 != pppppppuVar30) {
      pppppppuVar23 = (ulong *******)((ulong)((long)unaff_x23 - (long)pppppppuVar30) >> 6);
      uStack_90._0_1_ = (byte)unaff_x25;
      uStack_90._1_1_ = (char)((ulong)unaff_x25 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)unaff_x25 >> 0x10);
code_r0x00010048536c:
      pppppppuVar18 =
           (ulong *******)
           thunk_FUN_1087e422c((byte *)((long)pppppppuVar23 + (long)unaff_x25),&uStack_90,
                               &UNK_10b23a190);
      goto code_r0x0001004855f0;
    }
    goto code_r0x000100485558;
  case 0x5c:
    goto code_r0x0001004851fc;
  case 0x5d:
    goto code_r0x000100485280;
  case 0x5e:
    goto code_r0x000100485298;
  case 0x60:
    goto code_r0x0001004852b0;
  case 0x61:
    goto code_r0x00010048522c;
  case 0x62:
    goto code_r0x0001004852a0;
  case 99:
    goto code_r0x0001004851d4;
  case 100:
    goto code_r0x000100485204;
  case 0x65:
    goto code_r0x000100485288;
  case 0x66:
    goto code_r0x0001004851ac;
  case 0x67:
    goto code_r0x000100485240;
  case 0x68:
    goto code_r0x0001004851a4;
  case 0x6a:
    goto code_r0x0001004852fc;
  case 0x6b:
    goto code_r0x000100484f78;
  case 0x6c:
    goto code_r0x000100484fbc;
  case 0x6e:
    goto code_r0x000100485568;
  case 0x70:
    goto code_r0x000100485540;
  case 0x71:
    goto code_r0x000100485558;
  case 0x73:
    goto code_r0x000100485588;
  case 0x74:
  case 0xf4:
    goto code_r0x0001004855a0;
  case 0x75:
    goto code_r0x000100485560;
  case 0x76:
  case 0xf5:
    goto code_r0x0001004855b8;
  case 0x77:
  case 0x8c:
    goto code_r0x000100485534;
  case 0x78:
    goto code_r0x0001004855a8;
  case 0x7b:
    goto code_r0x000100485590;
  case 0x7d:
    goto code_r0x000100485548;
  case 0x80:
  case 0xf7:
    goto code_r0x0001004855e8;
  case 0x81:
    goto code_r0x000100484d74;
  case 0x82:
    goto code_r0x000100484db8;
  case 0x88:
    goto code_r0x000100485480;
  case 0x8f:
    goto code_r0x000100485458;
  case 0x90:
    goto code_r0x000100485488;
  case 0x92:
  case 0xe2:
    goto code_r0x000100485430;
  case 0x94:
    goto code_r0x000100485428;
  case 0x96:
    goto code_r0x000100485584;
  case 0xb1:
    goto code_r0x00010048557c;
  case 0xb2:
    goto code_r0x000100485544;
  case 0xb3:
    goto code_r0x00010048555c;
  case 0xb5:
    goto code_r0x00010048558c;
  case 0xb6:
    goto code_r0x0001004855a4;
  case 0xb7:
  case 0xf6:
    goto code_r0x000100485564;
  case 0xb8:
    goto code_r0x0001004855bc;
  case 0xb9:
    goto code_r0x000100485538;
  case 0xba:
    goto code_r0x0001004855ac;
  case 0xbd:
  case 0xfb:
    goto code_r0x000100485594;
  case 0xbf:
    goto code_r0x00010048554c;
  case 0xc2:
    goto code_r0x00010048560c;
  case 0xc4:
    goto code_r0x000100485150;
  case 0xdc:
    goto LAB_1004853f8;
  case 0xdd:
    goto code_r0x000100485408;
  case 0xde:
    goto code_r0x0001004853d0;
  case 0xe0:
code_r0x000100485394:
    pppppppuVar27 = (ulong *******)0x800000000000006e;
  case 0xe8:
    *param_2 = (ulong ******)pppppppuVar27;
    param_2[1] = (ulong ******)pppppppuVar23;
    pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
    unaff_x21 = pppppppuStack_2c8;
    goto LAB_1004853dc;
  case 0xe3:
    goto code_r0x0001004853f0;
  case 0xe5:
code_r0x0001004853c4:
    pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar23 = (ulong *******)0x800000000000006e;
code_r0x0001004853d0:
    *param_2 = (ulong ******)pppppppuVar23;
    param_2[1] = (ulong ******)pppppppuVar18;
    in_ZR = ((ulong)unaff_x24 & 0x7fffffffffffffff) == 0;
code_r0x0001004853d8:
    if (!(bool)in_ZR) goto LAB_1004852b8;
    goto LAB_1004853dc;
  case 0xe7:
    goto code_r0x00010048536c;
  case 0xea:
    goto code_r0x000100485344;
  case 0xeb:
    goto code_r0x0001004853d8;
  case 0xec:
    goto code_r0x00010048533c;
  case 0xef:
    goto code_r0x0001004850f0;
  case 0xf0:
    goto code_r0x000100485134;
  case 0xf2:
    goto code_r0x0001004855c8;
  case 0xf3:
    goto code_r0x0001004855d8;
  case 0xf8:
code_r0x000100485600:
    pppppppuVar23 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_298 = pppppppuVar31;
  case 0xfc:
    pppppppuStack_280 = pppppppuVar23;
code_r0x00010048560c:
    pppppppuVar23 = (ulong *******)&UNK_108cb9606;
    pppppppuVar27 = (ulong *******)0x6;
code_r0x000100485618:
    unaff_x27 = pppppppuStack_2d0;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    pppppppuStack_a8 = pppppppuVar23;
    pppppppuStack_a0 = pppppppuVar27;
    ppppppuVar19 = (ulong ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar31 = (ulong *******)&pppppppuStack_2c0;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar19;
    unaff_x21 = pppppppuStack_2c8;
    goto joined_r0x000100485650;
  case 0xf9:
    goto code_r0x0001004855c0;
  case 0xfa:
    goto code_r0x000100485618;
  case 0xff:
    goto code_r0x0001004855f0;
  }
  pppppppuStack_270 = (ulong *******)CONCAT71(pppppppuStack_270._1_7_,bVar22);
code_r0x000100485534:
  param_4 = &UNK_10b219000;
code_r0x000100485538:
  param_4 = param_4 + 0xf50;
code_r0x00010048553c:
  pppppppuVar18 = (ulong *******)&pppppppuStack_270;
code_r0x000100485540:
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x000100485544:
  pppppppuVar18 = (ulong *******)FUN_107c05dcc(pppppppuVar18,param_3,param_4);
code_r0x000100485548:
  pppppppuVar23 = (ulong *******)0x6e;
code_r0x00010048554c:
  *param_2 = (ulong ******)((ulong)pppppppuVar23 | 0x8000000000000000);
  param_2[1] = (ulong ******)pppppppuVar18;
code_r0x000100485558:
code_r0x00010048555c:
code_r0x000100485560:
code_r0x000100485564:
code_r0x000100485568:
code_r0x00010048556c:
  return;
}

