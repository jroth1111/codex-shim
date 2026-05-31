
/* WARNING: Type propagation algorithm not settling */

void FUN_10046bdcc(ulong *******param_1,char *param_2,ulong *******param_3,undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  undefined1 in_ZR;
  ulong *******pppppppuVar16;
  ulong ******ppppppuVar17;
  ulong ******ppppppuVar18;
  uint uVar19;
  byte bVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong *******pppppppuVar25;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar26;
  ulong *******pppppppuVar27;
  ulong *******unaff_x26;
  ulong *******pppppppuVar28;
  ulong *******unaff_x27;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  undefined1 *puVar31;
  undefined8 unaff_x30;
  undefined1 auStack_350 [80];
  ulong *******pppppppuStack_300;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2f0;
  undefined8 uStack_2e8;
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
  ulong ******ppppppuStack_78;
  ulong *******pppppppuVar7;
  
  puVar31 = &stack0xfffffffffffffff0;
  pppppppuVar6 = (ulong *******)&pppppppuStack_300;
  pppppppuVar27 = (ulong *******)&uStack_90;
  bVar20 = *(byte *)param_3;
  pppppppuVar21 = (ulong *******)(ulong)bVar20;
  pppppppuVar25 = (ulong *******)&UNK_108c9955e;
  pppppppuVar13 = (ulong *******)&pppppppuStack_300;
  pppppppuVar14 = (ulong *******)&pppppppuStack_300;
  pppppppuVar15 = (ulong *******)&pppppppuStack_300;
  pppppppuVar8 = (ulong *******)&pppppppuStack_300;
  pppppppuVar9 = (ulong *******)&pppppppuStack_300;
  pppppppuVar10 = (ulong *******)&pppppppuStack_300;
  pppppppuVar11 = (ulong *******)&pppppppuStack_300;
  pppppppuVar12 = (ulong *******)&pppppppuStack_300;
  pppppppuVar3 = (ulong *******)&pppppppuStack_300;
  pppppppuVar4 = (ulong *******)&pppppppuStack_300;
  pppppppuVar5 = (ulong *******)&pppppppuStack_300;
  pppppppuVar7 = (ulong *******)&pppppppuStack_300;
  pppppppuVar16 = (ulong *******)param_2;
  pppppppuVar22 = pppppppuVar21;
  ppppppuVar17 = (ulong ******)
                 (&UNK_10046be10 + (ulong)*(ushort *)(&UNK_108c9955e + (long)pppppppuVar21 * 2) * 4)
  ;
  pppppppuVar28 = unaff_x26;
  pppppppuVar29 = unaff_x27;
  pppppppuVar30 = (ulong *******)param_2;
  switch(bVar20) {
  case 0:
    bVar20 = *(byte *)((long)param_3 + 1);
  case 0x8c:
  case 0xe4:
    ppppppuStack_280 = (ulong ******)((ulong)CONCAT61(ppppppuStack_280._2_6_,bVar20) << 8);
code_r0x00010046c688:
    ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
    goto code_r0x00010046c6e0;
  case 1:
  case 0x3b:
    pppppppuVar21 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
  case 200:
code_r0x00010046c694:
    bVar20 = 1;
    pppppppuStack_278 = pppppppuVar21;
code_r0x00010046c69c:
    break;
  case 2:
  case 0xca:
    pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x48:
  case 0x74:
  case 0x91:
  case 0xe9:
    goto code_r0x00010046c694;
  case 3:
    pppppppuVar21 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x4a:
  case 0x76:
  case 0x8e:
  case 0xe6:
    goto code_r0x00010046c694;
  case 4:
  case 0x49:
  case 0x75:
  case 0xa2:
    pppppppuVar21 = (ulong *******)param_3[1];
    goto code_r0x00010046c694;
  case 5:
  case 0x2f:
    pppppppuVar21 = (ulong *******)(long)(char)*(byte *)((long)param_3 + 1);
    goto code_r0x00010046c6d4;
  case 6:
    pppppppuVar21 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0xc6:
code_r0x00010046c6d4:
    pppppppuStack_278 = pppppppuVar21;
code_r0x00010046c6d8:
    bVar20 = 2;
    break;
  case 7:
    pppppppuVar21 = (ulong *******)(long)*(int *)((long)param_3 + 4);
  case 0x35:
    goto code_r0x00010046c6d4;
  case 8:
  case 0x31:
    pppppppuVar21 = (ulong *******)param_3[1];
    goto code_r0x00010046c6d4;
  case 9:
  case 0x30:
  case 0x4f:
  case 0x7b:
    param_1 = (ulong *******)(double)*(float *)((long)param_3 + 4);
  case 0x38:
  case 0x89:
  case 0xe1:
  case 0x54:
  case 0x80:
code_r0x00010046c6c4:
    bVar20 = 3;
    pppppppuStack_278 = param_1;
code_r0x00010046c6cc:
    break;
  case 10:
  case 0x2d:
    param_1 = (ulong *******)param_3[1];
    goto code_r0x00010046c6c4;
  case 0xb:
  case 0x3c:
  case 0xa7:
  case 0xc2:
  case 0xf7:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x3a:
  case 0x44:
  case 0x70:
  case 0xff:
    pppppppuVar8 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010046c600:
    puVar31 = *(undefined1 **)((long)pppppppuVar8 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar8 + 0x58);
    pppppppuVar9 = pppppppuVar8;
code_r0x00010046c604:
    unaff_x20 = *(ulong ********)((long)pppppppuVar9 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar9 + 0x48);
    pppppppuVar10 = pppppppuVar9;
code_r0x00010046c608:
    pppppppuVar11 = pppppppuVar10;
code_r0x00010046c60c:
    pppppppuVar12 = pppppppuVar11;
code_r0x00010046c614:
    *(ulong ********)((long)pppppppuVar12 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar12 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar12 + 0x50) = puVar31;
    *(undefined8 *)((long)pppppppuVar12 + 0x58) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar12 + 0x1c) = 0;
    uVar19 = (uint)param_3;
    if (uVar19 < 0x80) {
      *(byte *)((long)pppppppuVar12 + 0x1c) = (byte)param_3;
      uVar23 = 1;
    }
    else {
      bVar20 = (byte)param_3 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        *(byte *)((long)pppppppuVar12 + 0x1c) = (byte)(uVar19 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar12 + 0x1d) = bVar20;
        uVar23 = 2;
      }
      else {
        bVar1 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          *(byte *)((long)pppppppuVar12 + 0x1c) = (byte)(uVar19 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar12 + 0x1d) = bVar1;
          *(byte *)((long)pppppppuVar12 + 0x1e) = bVar20;
          uVar23 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar12 + 0x1c) = (byte)(uVar19 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar12 + 0x1d) = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar12 + 0x1e) = bVar1;
          *(byte *)((long)pppppppuVar12 + 0x1f) = bVar20;
          uVar23 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar12 + 0x28) = (undefined1 *)((long)pppppppuVar12 + 0x1c);
    *(undefined8 *)((long)pppppppuVar12 + 0x30) = uVar23;
    *(undefined1 *)((long)pppppppuVar12 + 0x20) = 5;
    ppppppuVar17 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar12 + 0x20),
                                       (undefined1 *)((long)pppppppuVar12 + 0x3f),&UNK_10b21a970);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar17;
    return;
  case 0xc:
  case 0x37:
  case 0x42:
  case 0x6e:
  case 0x87:
  case 0xdf:
  case 0xfa:
    param_3 = param_3 + 1;
  case 0x8b:
  case 0xe3:
    pppppppuVar13 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010046c630:
    puVar31 = *(undefined1 **)((long)pppppppuVar13 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar13 + 0x58);
    pppppppuVar14 = pppppppuVar13;
code_r0x00010046c634:
    unaff_x20 = *(ulong ********)((long)pppppppuVar14 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar14 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar14 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar14 + 0x38);
    pppppppuVar15 = pppppppuVar14;
code_r0x00010046c644:
    *(ulong ********)((long)pppppppuVar15 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar15 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar15 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar15 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar15 + 0x50) = puVar31;
    *(undefined8 *)((long)pppppppuVar15 + 0x58) = unaff_x30;
    ppppppuVar17 = param_3[1];
    ppppppuVar18 = param_3[2];
    *(ulong *******)((long)pppppppuVar15 + 0x18) = ppppppuVar17;
    *(ulong *******)((long)pppppppuVar15 + 0x20) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar15 + 0x10) = 5;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar15 + 0x10),
                                       (undefined1 *)((long)pppppppuVar15 + 0x2f),&UNK_10b21a970);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xd:
  case 0x33:
    pppppppuVar21 = (ulong *******)param_3[1];
    pppppppuVar25 = (ulong *******)param_3[2];
  case 0xc9:
    pppppppuStack_278 = pppppppuVar21;
    pppppppuStack_270 = pppppppuVar25;
code_r0x00010046c6b0:
    bVar20 = 5;
code_r0x00010046c6b4:
    break;
  case 0xe:
  case 0x9a:
  case 0xf9:
    param_3 = param_3 + 1;
  case 0x88:
  case 0xe0:
code_r0x00010046c5d4:
    pppppppuVar3 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010046c5d8:
    puVar31 = *(undefined1 **)((long)pppppppuVar3 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar3 + 0x58);
    pppppppuVar4 = pppppppuVar3;
code_r0x00010046c5dc:
    unaff_x20 = *(ulong ********)((long)pppppppuVar4 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar4 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar4 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar4 + 0x38);
    pppppppuVar5 = pppppppuVar4;
code_r0x00010046c5e4:
    pppppppuVar7 = pppppppuVar5;
code_r0x00010046c5ec:
    pppppppuVar6 = (ulong *******)((long)pppppppuVar7 + 0x60);
code_r0x00010046c5f0:
    *(ulong ********)((long)pppppppuVar6 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar6 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar6 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar6 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar6 + -0x10) = puVar31;
    *(undefined8 *)((long)pppppppuVar6 + -8) = unaff_x30;
    ppppppuVar17 = param_3[1];
    ppppppuVar18 = param_3[2];
    *(ulong *******)((long)pppppppuVar6 + -0x48) = ppppppuVar17;
    *(ulong *******)((long)pppppppuVar6 + -0x40) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar6 + -0x50) = 6;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar6 + -0x50),
                                       (undefined1 *)((long)pppppppuVar6 + -0x31),&UNK_10b21a970);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xf:
  case 0xd2:
    pppppppuVar21 = (ulong *******)param_3[1];
    pppppppuVar25 = (ulong *******)param_3[2];
  case 0x4c:
  case 0x78:
    bVar20 = 6;
    pppppppuStack_278 = pppppppuVar21;
    pppppppuStack_270 = pppppppuVar25;
code_r0x00010046c66c:
    break;
  case 0x10:
  case 0xa1:
  case 0xf5:
    bVar20 = 8;
  case 0x4e:
  case 0x7a:
    break;
  default:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_278 = (ulong *******)unaff_x20[1];
    ppppppuStack_280 = *unaff_x20;
    ppppppuStack_268 = unaff_x20[3];
    pppppppuStack_270 = (ulong *******)unaff_x20[2];
    func_0x000107c04664(param_2,&ppppppuStack_280);
    goto code_r0x00010046c254;
  case 0x12:
    bVar20 = 7;
    break;
  case 0x13:
  case 0x97:
  case 0xef:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_278 = (ulong *******)unaff_x20[1];
    ppppppuStack_280 = *unaff_x20;
    ppppppuStack_268 = unaff_x20[3];
    pppppppuStack_270 = (ulong *******)unaff_x20[2];
    param_3 = &ppppppuStack_280;
  case 0xae:
  case 0xd9:
    func_0x000107c05344(param_2,param_3);
code_r0x00010046c254:
    param_2 = (char *)unaff_x20;
code_r0x00010046c268:
code_r0x00010046c270:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_2);
    return;
  case 0x14:
  case 0x98:
  case 0xf0:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x26 = (ulong *******)param_3[3];
    unaff_x19 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2b0 = (ulong *******)0x0;
    pppppppuStack_2d0 = unaff_x20;
    pppppppuStack_2c8 = unaff_x20;
    pppppppuStack_2c0 = unaff_x23;
    pppppppuStack_2b8 = unaff_x19;
  case 0xda:
    unaff_x21 = unaff_x20;
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x00010046c2ac:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f6c8,&UNK_10b20a590);
code_r0x00010046c2c8:
      *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
      *(ulong ********)((long)param_2 + 8) = pppppppuStack_a0;
code_r0x00010046c2d4:
      lVar26 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar26 = lVar26 + -1, lVar26 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x00010046c298:
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2c8 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x00010046c2ac;
      uVar23 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar23;
      uStack_90._2_6_ = (undefined6)((ulong)uVar23 >> 8);
      uStack_88 = (undefined1)((ulong)uVar23 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2b0 = (ulong *******)0x1;
      uStack_90._0_1_ = *(byte *)unaff_x20;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x00010046c2c8;
      unaff_x22 = pppppppuStack_a0;
      unaff_x24 = pppppppuStack_a8;
      if (unaff_x26 == (ulong *******)0x1) {
code_r0x00010046c370:
        pppppppuVar25 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22f6c8,&UNK_10b20a590);
code_r0x00010046c388:
        *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar25;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x00010046c2d4;
      }
      unaff_x21 = unaff_x20 + 8;
      unaff_x26 = pppppppuStack_98;
      pppppppuStack_2c8 = unaff_x21;
      bVar20 = *(byte *)(unaff_x20 + 4);
      if (*(byte *)(unaff_x20 + 4) == 0x16) goto code_r0x00010046c370;
code_r0x00010046c70c:
      uStack_90._0_1_ = bVar20;
      uVar23 = *(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_90._1_1_ = (char)uVar23;
      uStack_90._2_6_ = (undefined6)((ulong)uVar23 >> 8);
      uStack_88 = (undefined1)((ulong)uVar23 >> 0x38);
      ppppppuStack_78 = unaff_x20[7];
      uStack_80 = SUB81(unaff_x20[6],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[6] >> 8);
      pppppppuStack_2b0 = (ulong *******)0x2;
      func_0x00010128e030(&pppppppuStack_a8,&uStack_90);
      pppppppuVar25 = pppppppuStack_a0;
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000000) goto code_r0x00010046c388;
      unaff_x19 = (ulong *******)0x800000000000006e;
      pppppppuVar16 = pppppppuStack_a0;
      pppppppuVar21 = pppppppuStack_a8;
      pppppppuVar25 = pppppppuStack_98;
code_r0x00010046c750:
      *(ulong *******)param_2 = (ulong ******)((long)unaff_x19 + -0xc);
      *(ulong ********)((long)param_2 + 8) = pppppppuVar21;
      *(ulong ********)((long)param_2 + 0x10) = pppppppuVar16;
      *(ulong ********)((long)param_2 + 0x18) = pppppppuVar25;
code_r0x00010046c75c:
      *(ulong ********)((long)param_2 + 0x20) = unaff_x24;
      *(ulong ********)((long)param_2 + 0x28) = unaff_x22;
      *(ulong ********)((long)param_2 + 0x30) = unaff_x26;
      _memcpy(&ppppppuStack_280,param_2,0x1c0);
      pppppppuVar16 = (ulong *******)FUN_100fbc738(&pppppppuStack_2d0);
      if (pppppppuVar16 != (ulong *******)0x0) {
code_r0x00010046c780:
        *(ulong ********)param_2 = unaff_x19;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar16;
        FUN_100e44f40(&ppppppuStack_280);
      }
    }
    goto code_r0x00010046c840;
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
    if (ppppppuVar17 == (ulong ******)0x0) {
      unaff_x22 = (ulong *******)0x8000000000000000;
      pppppppuStack_c0 = (ulong *******)0x8000000000000000;
      pppppppuStack_2a8 = pppppppuStack_2b0;
    }
    else {
      unaff_x26 = (ulong *******)0x0;
      unaff_x21 = (ulong *******)((ulong)&uStack_90 | 1);
      unaff_x20 = (ulong *******)((ulong)&pppppppuStack_2d0 | 1);
      pppppppuStack_300 = (ulong *******)(((long)ppppppuVar17 * 0x40 - 0x40U >> 6) + 1);
      unaff_x27 = pppppppuStack_2b0 + 8;
      unaff_x22 = (ulong *******)0x8000000000000000;
      unaff_x23 = (ulong *******)0x8000000000000001;
      unaff_x24 = (ulong *******)0x8000000000000000;
      pppppppuStack_2f8 = (ulong *******)param_2;
      pppppppuStack_2d8 = pppppppuStack_298;
      pppppppuStack_2a8 = pppppppuStack_2b0;
      do {
        pppppppuVar16 = unaff_x27 + -8;
        bVar20 = *(byte *)pppppppuVar16;
        pppppppuVar25 = (ulong *******)(ulong)bVar20;
        pppppppuVar28 = unaff_x26;
        pppppppuVar29 = unaff_x27;
        if (bVar20 == 0x16) break;
        ppppppuVar17 = unaff_x27[-6];
        *(ulong *******)((long)unaff_x21 + 0x17) = unaff_x27[-5];
        *(ulong *******)((long)unaff_x21 + 0xf) = ppppppuVar17;
        ppppppuVar17 = *(ulong *******)((long)unaff_x27 + -0x3f);
        unaff_x21[1] = *(ulong *******)((long)unaff_x27 + -0x37);
        *unaff_x21 = ppppppuVar17;
        pppppppuStack_2c8 = (ulong *******)unaff_x27[-3];
        pppppppuStack_2d0 = (ulong *******)unaff_x27[-4];
        pppppppuStack_2b8 = (ulong *******)unaff_x27[-1];
        pppppppuStack_2c0 = (ulong *******)unaff_x27[-2];
        pppppppuVar21 = (ulong *******)CONCAT71(uStack_87,uStack_88);
        param_2 = (char *)CONCAT71(uStack_7f,uStack_80);
        uStack_90._0_1_ = bVar20;
        if (bVar20 < 0xd) {
          in_ZR = bVar20 == 1;
          ppppppuVar17 = ppppppuStack_78;
code_r0x00010046befc:
          uVar24 = (uint)pppppppuVar25;
          if ((bool)in_ZR) {
            if (uStack_90._1_1_ != '\x01') {
              uVar24 = uVar24 + 1;
            }
            uVar19 = 0;
            if (uStack_90._1_1_ != '\0') {
              uVar19 = uVar24;
            }
          }
          else {
            if (uVar24 != 4) {
              if (uVar24 == 0xc) {
                if (ppppppuVar17 == (ulong ******)0x6) {
                  uVar19 = 1;
                  if (*(int *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                    uVar19 = 2;
                  }
                }
                else if (ppppppuVar17 == (ulong ******)0x2) {
                  uVar19 = 2;
                  if (*(short *)param_2 == 0x6469) {
                    uVar19 = 0;
                  }
                }
                else {
                  uVar19 = 2;
                }
                goto joined_r0x00010046c094;
              }
code_r0x00010046c950:
              pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
              pppppppuStack_2a8 = unaff_x27;
              goto code_r0x00010046c958;
            }
            uVar24 = 1;
            if (pppppppuVar21 != (ulong *******)0x1) {
              uVar24 = 2;
            }
            uVar19 = 0;
            if (pppppppuVar21 != (ulong *******)0x0) {
              uVar19 = uVar24;
            }
          }
code_r0x00010046c120:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (bVar20 == 0xd) {
            if ((ulong *******)param_2 == (ulong *******)0x6) {
              uVar19 = 1;
              if (*(int *)pppppppuVar21 != 0x61726170 ||
                  *(short *)((long)pppppppuVar21 + 4) != 0x736d) {
                uVar19 = 2;
              }
            }
            else {
              if ((ulong *******)param_2 != (ulong *******)0x2) goto code_r0x00010046c0ec;
              uVar19 = 2;
              if (*(short *)pppppppuVar21 == 0x6469) {
                uVar19 = 0;
              }
            }
            goto code_r0x00010046c120;
          }
          if (bVar20 != 0xe) {
            if (bVar20 != 0xf) goto code_r0x00010046c950;
            if ((ulong *******)param_2 == (ulong *******)0x6) {
              if (((((*(byte *)pppppppuVar21 != 0x70) ||
                    (*(byte *)((long)pppppppuVar21 + 1) != 0x61)) ||
                   (*(byte *)((long)pppppppuVar21 + 2) != 0x72)) ||
                  ((*(byte *)((long)pppppppuVar21 + 3) != 0x61 ||
                   (*(byte *)((long)pppppppuVar21 + 4) != 0x6d)))) ||
                 (*(byte *)((long)pppppppuVar21 + 5) != 0x73)) goto code_r0x00010046c0ec;
              uVar19 = 1;
            }
            else if ((((ulong *******)param_2 == (ulong *******)0x2) &&
                     (*(byte *)pppppppuVar21 == 0x69)) &&
                    (*(byte *)((long)pppppppuVar21 + 1) == 100)) {
              uVar19 = 0;
            }
            else {
code_r0x00010046c0ec:
              uVar19 = 2;
            }
            goto code_r0x00010046c120;
          }
          if (ppppppuStack_78 == (ulong ******)0x6) {
            if (((((*param_2 != 0x70) || (*(byte *)((long)param_2 + 1) != 0x61)) ||
                 (*(byte *)((long)param_2 + 2) != 0x72)) ||
                ((*(byte *)((long)param_2 + 3) != 0x61 || (*(byte *)((long)param_2 + 4) != 0x6d))))
               || (*(byte *)((long)param_2 + 5) != 0x73)) goto code_r0x00010046c05c;
            uVar19 = 1;
          }
          else if (((ppppppuStack_78 == (ulong ******)0x2) && (*param_2 == 0x69)) &&
                  (*(byte *)((long)param_2 + 1) == 100)) {
            uVar19 = 0;
          }
          else {
code_r0x00010046c05c:
            uVar19 = 2;
          }
joined_r0x00010046c094:
          if (pppppppuVar21 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar20 = (byte)pppppppuStack_2d0;
        if ((uVar19 & 0xff) == 0) {
          if (unaff_x23 != (ulong *******)0x8000000000000001) goto code_r0x00010046c858;
          pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,0x16);
          if (bVar20 == 0x16) {
            pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
            goto code_r0x00010046c8e4;
          }
          ppppppuVar17 = *unaff_x20;
          unaff_x21[1] = unaff_x20[1];
          *unaff_x21 = ppppppuVar17;
          uVar23 = *(undefined8 *)((long)unaff_x20 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar23;
          uStack_90._0_1_ = bVar20;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x00010046c598;
          uStack_2e8 = pppppppuStack_a0;
          pppppppuStack_2f0 = pppppppuStack_98;
          unaff_x23 = pppppppuStack_a8;
        }
        else if ((uVar19 & 0xff) == 1) {
          if (unaff_x22 != (ulong *******)0x8000000000000000) {
            pppppppuStack_290 = (ulong *******)((long)unaff_x26 + 1);
            pppppppuStack_b8 = pppppppuStack_2e0;
            pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
            pppppppuStack_a0 = (ulong *******)0x6;
            uStack_90._0_1_ = (byte)&pppppppuStack_a8;
            uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_2a8 = unaff_x27;
            pppppppuStack_c0 = unaff_x24;
            pppppppuStack_b0 = pppppppuVar27;
            ppppppuVar17 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            unaff_x24 = (ulong *******)&pppppppuStack_2d0;
            *pppppppuStack_2f8 = (ulong ******)0x800000000000006e;
            pppppppuStack_2f8[1] = ppppppuVar17;
            unaff_x21 = uStack_2e8;
            unaff_x26 = pppppppuStack_2e0;
            goto joined_r0x00010046c7f0;
          }
          pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,0x16);
          if (bVar20 == 0x16) {
            pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
            goto code_r0x00010046c91c;
          }
          ppppppuVar17 = *unaff_x20;
          unaff_x21[1] = unaff_x20[1];
          *unaff_x21 = ppppppuVar17;
          uVar23 = *(undefined8 *)((long)unaff_x20 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar23;
          uStack_90._0_1_ = bVar20;
          func_0x00010128e030(&pppppppuStack_a8,&uStack_90);
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000000) {
            pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
            goto code_r0x00010046c570;
          }
          pppppppuStack_2e0 = pppppppuStack_a0;
          unaff_x22 = pppppppuStack_a8;
          unaff_x24 = pppppppuStack_a8;
          pppppppuVar27 = pppppppuStack_98;
        }
        else {
          pppppppuVar21 = (ulong *******)((ulong)pppppppuStack_2d0 & 0xff);
          pppppppuVar25 = (ulong *******)0x16;
code_r0x00010046c208:
          pppppppuStack_2d0 = (ulong *******)CONCAT71(pppppppuStack_2d0._1_7_,(char)pppppppuVar25);
          if ((int)pppppppuVar21 == 0x16) goto code_r0x00010046c8ac;
          ppppppuVar17 = *unaff_x20;
          unaff_x21[1] = unaff_x20[1];
          *unaff_x21 = ppppppuVar17;
          uVar23 = *(undefined8 *)((long)unaff_x20 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar23;
          bVar20 = (byte)pppppppuVar21;
code_r0x00010046c224:
          uStack_90._0_1_ = bVar20;
          param_2 = (char *)&uStack_90;
code_r0x00010046c22c:
          FUN_100e077ec(param_2);
        }
        unaff_x27 = unaff_x27 + 8;
        unaff_x26 = (ulong *******)((long)unaff_x26 + 1);
        in_ZR = pppppppuVar16 + 8 == pppppppuStack_2d8;
code_r0x00010046beb8:
        pppppppuVar28 = pppppppuStack_300;
        pppppppuVar29 = pppppppuStack_2d8;
      } while (!(bool)in_ZR);
      pppppppuStack_b8 = pppppppuStack_2e0;
      unaff_x20 = pppppppuStack_2d8;
      param_2 = (char *)pppppppuStack_2f8;
      pppppppuVar16 = pppppppuStack_2f8;
      pppppppuStack_2a8 = pppppppuVar29;
      pppppppuStack_290 = pppppppuVar28;
      pppppppuStack_c0 = unaff_x24;
      pppppppuStack_b0 = pppppppuVar27;
      if (unaff_x23 != (ulong *******)0x8000000000000001) goto code_r0x00010046c4a4;
    }
    unaff_x24 = (ulong *******)&pppppppuStack_2d0;
    pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_a0 = (ulong *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    unaff_x23 = (ulong *******)0x8000000000000001;
    param_2 = s_missing_field_____108ac28f7;
    param_3 = (ulong *******)&uStack_90;
  case 0x6b:
    param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
LAB_10046c418:
    *pppppppuVar16 = (ulong ******)0x800000000000006e;
    pppppppuVar16[1] = (ulong ******)param_2;
    unaff_x21 = uStack_2e8;
    unaff_x26 = pppppppuStack_2e0;
    if (unaff_x22 != (ulong *******)0x8000000000000000) {
joined_r0x00010046c7f0:
      pppppppuStack_2e0 = unaff_x26;
      if (pppppppuVar27 != (ulong *******)0x0) {
        unaff_x19 = unaff_x26 + 6;
        unaff_x20 = (ulong *******)0x8000000000000000;
        do {
          pppppppuVar21 = (ulong *******)unaff_x19[-6];
code_r0x00010046c458:
          param_2 = (char *)unaff_x19;
          if (pppppppuVar21 != (ulong *******)0x0) {
            _free(*(ulong *******)((long)param_2 + -0x28));
          }
          if (*(ulong ********)((long)param_2 + -0x18) == unaff_x20 ||
              *(ulong ********)((long)param_2 + -0x18) == (ulong *******)0x0) {
            pppppppuVar25 = *(ulong ********)param_2;
          }
          else {
            _free(*(ulong *******)((long)param_2 + -0x10));
            pppppppuVar25 = *(ulong ********)param_2;
          }
          unaff_x19 = (ulong *******)param_2;
          if (pppppppuVar25 != unaff_x20) {
code_r0x00010046c49c:
            FUN_100e589f4(param_2);
          }
          unaff_x19 = unaff_x19 + 0x19;
          pppppppuVar27 = (ulong *******)((long)pppppppuVar27 + -1);
        } while (pppppppuVar27 != (ulong *******)0x0);
      }
      if (unaff_x22 != (ulong *******)0x0) {
        _free(unaff_x26);
      }
    }
LAB_10046c800:
    pppppppuVar21 = (ulong *******)0x8000000000000002;
code_r0x00010046c808:
    param_2 = (char *)unaff_x21;
    if (((long)pppppppuVar21 <= (long)unaff_x23) && (unaff_x23 != (ulong *******)0x0)) {
code_r0x00010046c818:
      _free(param_2);
    }
LAB_10046c81c:
    FUN_100d34830(unaff_x24 + 4);
    if ((byte)pppppppuStack_2d0 != '\x16') {
code_r0x00010046c830:
      FUN_100e077ec(&pppppppuStack_2d0);
    }
    goto code_r0x00010046c840;
  case 0x16:
    goto code_r0x00010046c8bc;
  case 0x17:
    goto code_r0x00010046c8cc;
  case 0x18:
    goto code_r0x00010046c894;
  case 0x19:
code_r0x00010046c8ac:
    pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
    pppppppuStack_2a8 = unaff_x27;
  case 0x1d:
    pppppppuVar22 = pppppppuStack_2e0;
    pppppppuStack_290 = pppppppuVar21;
code_r0x00010046c8bc:
    param_2 = &UNK_108ca1000;
    pppppppuStack_c0 = unaff_x24;
    pppppppuStack_b8 = pppppppuVar22;
    pppppppuStack_b0 = pppppppuVar27;
code_r0x00010046c8c8:
    param_2 = (char *)((long)param_2 + 0xa98);
code_r0x00010046c8cc:
    param_4 = &UNK_10b24f848;
code_r0x00010046c8d4:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x00010046c8dc:
    goto code_r0x00010046c94c;
  case 0x1a:
code_r0x00010046c858:
    pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
    pppppppuStack_2a8 = unaff_x27;
  case 0x22:
    pppppppuStack_b8 = pppppppuStack_2e0;
    pppppppuStack_290 = pppppppuVar21;
    pppppppuStack_c0 = unaff_x24;
    pppppppuStack_b0 = pppppppuVar27;
code_r0x00010046c870:
    pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_a0 = (ulong *******)0x2;
    pppppppuVar21 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar25 = (ulong *******)&UNK_100c7b000;
code_r0x00010046c888:
    uStack_90._0_1_ = (byte)pppppppuVar21;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_88 = SUB81(pppppppuVar25 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppuVar25 + 0x74) >> 8);
    param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010046c894:
    param_2 = (char *)((long)param_2 + 0x973);
code_r0x00010046c898:
    param_3 = (ulong *******)&uStack_90;
code_r0x00010046c89c:
    param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
code_r0x00010046c8a0:
    unaff_x24 = (ulong *******)&pppppppuStack_2d0;
    pppppppuVar16 = pppppppuStack_2f8;
    goto LAB_10046c418;
  case 0x1b:
  case 0x67:
    goto code_r0x00010046c8dc;
  case 0x1c:
  case 0x5f:
    goto code_r0x00010046c8f4;
  case 0x1e:
  case 0x59:
    goto code_r0x00010046c90c;
  case 0x1f:
    goto code_r0x00010046c888;
  case 0x20:
  case 0x58:
    goto code_r0x00010046c8fc;
  case 0x21:
    goto code_r0x00010046c830;
  case 0x23:
code_r0x00010046c8e4:
    pppppppuStack_2a8 = unaff_x27;
    pppppppuStack_290 = pppppppuVar21;
  case 0x5b:
    pppppppuVar21 = pppppppuStack_2e0;
code_r0x00010046c8f4:
    pppppppuStack_c0 = unaff_x24;
    pppppppuStack_b8 = pppppppuVar21;
    pppppppuStack_b0 = pppppppuVar27;
code_r0x00010046c8fc:
    param_2 = &UNK_108ca1a98;
    param_4 = &UNK_10b24f848;
code_r0x00010046c90c:
    FUN_107c05cac(param_2,0x2c,param_4);
    goto code_r0x00010046c94c;
  case 0x24:
    goto code_r0x00010046c808;
  case 0x25:
    goto code_r0x00010046c89c;
  case 0x26:
    goto LAB_10046c800;
  case 0x28:
code_r0x00010046c958:
    pppppppuStack_b8 = pppppppuStack_2e0;
    pppppppuStack_290 = pppppppuVar21;
    pppppppuStack_c0 = unaff_x24;
    pppppppuStack_b0 = pppppppuVar27;
    param_2 = (char *)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b211260);
  case 0x6a:
    unaff_x24 = (ulong *******)&pppppppuStack_2d0;
    pppppppuVar16 = pppppppuStack_2f8;
    goto LAB_10046c418;
  case 0x29:
    goto code_r0x00010046beb8;
  case 0x2a:
    goto code_r0x00010046befc;
  case 0x2c:
    goto code_r0x00010046c6b0;
  case 0x2e:
  case 0xcf:
    goto code_r0x00010046c688;
  case 0x32:
    goto code_r0x00010046c6e8;
  case 0x34:
    goto code_r0x00010046c700;
  case 0x36:
    goto code_r0x00010046c6f0;
  case 0x39:
    goto code_r0x00010046c6d8;
  case 0x3e:
    goto code_r0x00010046c750;
  case 0x3f:
    goto code_r0x00010046c254;
  case 0x40:
    goto code_r0x00010046c298;
  case 0x43:
  case 0x6f:
  case 0x84:
  case 0xdc:
    goto code_r0x00010046c634;
  case 0x45:
  case 0x71:
  case 0x93:
  case 0xeb:
  case 0xfc:
    goto code_r0x00010046c614;
  case 0x46:
  case 0x72:
    goto code_r0x00010046c5c0;
  case 0x47:
  case 0x73:
  case 0x85:
  case 0xdd:
    goto code_r0x00010046c644;
  case 0x4b:
  case 0x77:
    goto code_r0x00010046c5f0;
  case 0x4d:
  case 0x79:
  case 0xa3:
  case 0xba:
code_r0x00010046c598:
    pppppppuVar21 = (ulong *******)((long)unaff_x26 + 1);
    pppppppuStack_2a8 = unaff_x27;
  case 0xfb:
    pppppppuStack_290 = pppppppuVar21;
code_r0x00010046c5a4:
    pppppppuVar21 = pppppppuStack_2e0;
code_r0x00010046c5a8:
    pppppppuStack_b8 = pppppppuVar21;
    pppppppuStack_b0 = pppppppuVar27;
code_r0x00010046c5ac:
    unaff_x23 = (ulong *******)0x8000000000000001;
    param_2 = (char *)pppppppuStack_a0;
    pppppppuVar16 = pppppppuStack_2f8;
    pppppppuStack_c0 = unaff_x24;
code_r0x00010046c5bc:
    unaff_x24 = (ulong *******)&pppppppuStack_2d0;
code_r0x00010046c5c0:
    goto LAB_10046c418;
  case 0x50:
  case 0x7c:
  case 0xa6:
  case 0xf6:
code_r0x00010046c570:
    pppppppuStack_2a8 = unaff_x27;
    pppppppuStack_290 = pppppppuVar21;
  case 0x94:
  case 0xb5:
  case 0xec:
  case 0xfe:
    pppppppuVar25 = (ulong *******)0x6e;
    pppppppuVar21 = pppppppuStack_a0;
code_r0x00010046c580:
    *pppppppuStack_2f8 = (ulong ******)((ulong)pppppppuVar25 | 0x8000000000000000);
    pppppppuStack_2f8[1] = (ulong ******)pppppppuVar21;
    unaff_x21 = uStack_2e8;
code_r0x00010046c590:
    unaff_x24 = (ulong *******)&pppppppuStack_2d0;
    goto LAB_10046c800;
  case 0x51:
  case 0x7d:
  case 0xa0:
    goto code_r0x00010046c604;
  case 0x52:
  case 0x7e:
  case 0x9e:
  case 0xb1:
    goto code_r0x00010046c568;
  case 0x55:
  case 0x81:
    goto code_r0x00010046c22c;
  case 0x56:
  case 0x82:
    goto code_r0x00010046c270;
  case 0x5a:
    goto code_r0x00010046c8d4;
  case 0x5c:
    goto code_r0x00010046c898;
  case 0x5d:
code_r0x00010046c91c:
    pppppppuStack_2a8 = unaff_x27;
    pppppppuStack_290 = pppppppuVar21;
  case 0x65:
    pppppppuStack_b8 = pppppppuStack_2e0;
    pppppppuStack_c0 = unaff_x24;
    pppppppuStack_b0 = pppppppuVar27;
code_r0x00010046c934:
    param_2 = &UNK_108ca1a98;
code_r0x00010046c93c:
    FUN_107c05cac(param_2,0x2c,&UNK_10b24f848);
code_r0x00010046c94c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10046c950);
    (*pcVar2)();
  case 0x5e:
    goto code_r0x00010046c934;
  case 0x60:
    goto code_r0x00010046c94c;
  case 0x61:
    goto code_r0x00010046c8c8;
  case 0x62:
    goto code_r0x00010046c93c;
  case 99:
    goto code_r0x00010046c870;
  case 100:
    goto code_r0x00010046c8a0;
  case 0x66:
    goto code_r0x00010046c848;
  case 0x68:
    goto code_r0x00010046c840;
  case 0x6c:
    goto code_r0x00010046c458;
  case 0x86:
  case 0xa4:
  case 0xde:
  case 0xf8:
    goto code_r0x00010046c60c;
  case 0x8a:
  case 0xac:
  case 0xe2:
    goto code_r0x00010046c66c;
  case 0x8d:
  case 0xd6:
  case 0xe5:
    goto code_r0x00010046c600;
  case 0x8f:
  case 0xb8:
  case 0xe7:
    goto code_r0x00010046c5a8;
  case 0x90:
  case 0xe8:
    goto code_r0x00010046c5d8;
  case 0x92:
  case 0xbd:
  case 0xea:
    goto code_r0x00010046c580;
  case 0x96:
  case 0xee:
    goto code_r0x00010046c6d4;
  case 0x9b:
    goto code_r0x00010046c5dc;
  case 0x9c:
    goto code_r0x00010046c5a4;
  case 0x9d:
    goto code_r0x00010046c5bc;
  case 0x9f:
    goto code_r0x00010046c5ec;
  case 0xa5:
    goto code_r0x00010046c540;
  case 0xa8:
    goto code_r0x00010046c518;
  case 0xa9:
  case 0xf4:
    goto code_r0x00010046c5ac;
  case 0xaa:
code_r0x00010046c510:
    *(ulong ********)((long)param_2 + 0x10) = pppppppuStack_2e0;
    *(ulong ********)((long)param_2 + 0x18) = pppppppuVar27;
    pppppppuVar21 = uStack_2e8;
code_r0x00010046c518:
    *(ulong ********)((long)param_2 + 0x20) = unaff_x23;
    *(ulong ********)((long)param_2 + 0x28) = pppppppuVar21;
    *(ulong ********)((long)param_2 + 0x30) = pppppppuStack_2f0;
code_r0x00010046c524:
    param_3 = (ulong *******)param_2;
    param_2 = (char *)&ppppppuStack_280;
    param_4 = (undefined *)0x1c0;
    pppppppuVar30 = param_3;
code_r0x00010046c530:
    _memcpy(param_2,param_3,param_4);
    pppppppuVar21 = (ulong *******)&pppppppuStack_2d0;
code_r0x00010046c538:
    FUN_100d34830(pppppppuVar21 + 4);
code_r0x00010046c540:
    if (unaff_x20 != pppppppuVar29) {
code_r0x00010046c548:
      pppppppuVar21 = (ulong *******)((ulong)((long)unaff_x20 - (long)pppppppuVar29) >> 6);
code_r0x00010046c550:
      uStack_90._0_1_ = (byte)pppppppuVar28;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar28 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar28 >> 0x10);
      param_4 = &UNK_10b23a000;
code_r0x00010046c558:
      pppppppuVar16 =
           (ulong *******)
           thunk_FUN_1087e422c((byte *)((long)pppppppuVar21 + (long)pppppppuVar28),&uStack_90,
                               param_4 + 400);
code_r0x00010046c568:
      param_2 = (char *)pppppppuVar30;
      goto code_r0x00010046c780;
    }
    goto code_r0x00010046c840;
  case 0xad:
    goto code_r0x00010046c208;
  case 0xb0:
    goto code_r0x00010046c558;
  case 0xb2:
    goto code_r0x00010046c530;
  case 0xb3:
  case 0xfd:
    goto code_r0x00010046c548;
  case 0xb4:
    goto code_r0x00010046c4f4;
  case 0xb6:
    goto code_r0x00010046c590;
  case 0xb7:
    goto code_r0x00010046c550;
  case 0xb9:
    goto code_r0x00010046c524;
  case 0xbb:
    goto code_r0x00010046c4cc;
  case 0xbc:
    goto code_r0x00010046c4fc;
  case 0xbe:
code_r0x00010046c4a4:
    if (unaff_x22 != (ulong *******)0x8000000000000000) {
      unaff_x19 = (ulong *******)0x800000000000006e;
      *(ulong *******)param_2 = (ulong ******)0x8000000000000062;
      *(ulong ********)((long)param_2 + 8) = unaff_x22;
      goto code_r0x00010046c510;
    }
    pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a0 = (ulong *******)0x6;
    pppppppuVar21 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar25 = (ulong *******)&DAT_100c7b3a0;
code_r0x00010046c4cc:
    uStack_90._0_1_ = (byte)pppppppuVar21;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_88 = SUB81(pppppppuVar25,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar25 >> 8);
    ppppppuVar17 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar17;
    in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
    unaff_x24 = (ulong *******)&pppppppuStack_2d0;
code_r0x00010046c4f4:
    param_2 = (char *)uStack_2e8;
    if (!(bool)in_ZR) {
code_r0x00010046c4fc:
      goto code_r0x00010046c818;
    }
    goto LAB_10046c81c;
  case 0xbf:
    goto code_r0x00010046c538;
  case 0xc0:
    goto code_r0x00010046c49c;
  case 0xc3:
    goto code_r0x00010046c224;
  case 0xc4:
    goto code_r0x00010046c268;
  case 199:
    goto code_r0x00010046c6cc;
  case 0xcb:
    break;
  case 0xcc:
    goto code_r0x00010046c6f4;
  case 0xcd:
    goto code_r0x00010046c6b4;
  case 0xce:
    goto code_r0x00010046c70c;
  case 0xd0:
    goto code_r0x00010046c6fc;
  case 0xd1:
    goto code_r0x00010046c630;
  case 0xd3:
    goto code_r0x00010046c6e4;
  case 0xd4:
    goto code_r0x00010046c608;
  case 0xd5:
    goto code_r0x00010046c69c;
  case 0xd8:
    goto code_r0x00010046c75c;
  case 0xf2:
    goto code_r0x00010046c5d4;
  case 0xf3:
    goto code_r0x00010046c5e4;
  }
  ppppppuStack_280 = (ulong ******)CONCAT71(ppppppuStack_280._1_7_,bVar20);
code_r0x00010046c6e0:
  param_4 = &UNK_10b21a000;
code_r0x00010046c6e4:
  param_4 = param_4 + 0x970;
code_r0x00010046c6e8:
  pppppppuVar16 = &ppppppuStack_280;
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x00010046c6f0:
  pppppppuVar16 = (ulong *******)FUN_107c05dcc(pppppppuVar16,param_3,param_4);
code_r0x00010046c6f4:
  pppppppuVar21 = (ulong *******)0x800000000000006e;
code_r0x00010046c6fc:
  *(ulong ********)param_2 = pppppppuVar21;
  *(ulong ********)((long)param_2 + 8) = pppppppuVar16;
code_r0x00010046c700:
code_r0x00010046c840:
code_r0x00010046c848:
  return;
}

