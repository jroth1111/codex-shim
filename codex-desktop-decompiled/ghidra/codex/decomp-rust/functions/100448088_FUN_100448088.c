
/* WARNING: Type propagation algorithm not settling */

void FUN_100448088(undefined1 param_1 [16],char *param_2,byte *******param_3,undefined *param_4)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  byte *******pppppppbVar18;
  undefined1 in_ZR;
  byte *******pppppppbVar19;
  byte ******ppppppbVar20;
  uint uVar21;
  byte bVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  undefined8 uVar25;
  byte *******pppppppbVar26;
  byte ******ppppppbVar27;
  byte *******pppppppbVar28;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******unaff_x22;
  byte *******unaff_x23;
  byte *******unaff_x24;
  long lVar29;
  byte *******unaff_x25;
  byte *******pppppppbVar30;
  byte *******unaff_x26;
  byte *******pppppppbVar31;
  byte *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar32;
  undefined8 unaff_x30;
  byte *******pppppppbVar33;
  byte *******pppppppbVar34;
  byte *******pppppppbStack_2f0;
  byte *******pppppppbStack_2e8;
  byte *******pppppppbStack_2e0;
  undefined8 uStack_2d8;
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
  byte ******ppppppbStack_78;
  
  pppppppbVar34 = param_1._8_8_;
  pppppppbVar33 = param_1._0_8_;
  puVar32 = &stack0xfffffffffffffff0;
  pppppppbVar28 = (byte *******)&bStack_90;
  bVar22 = *(byte *)param_3;
  pppppppbVar23 = (byte *******)(ulong)bVar22;
  pppppppbVar26 = (byte *******)&UNK_108c98e68;
  ppppppbVar27 = (byte ******)
                 (&UNK_1004480cc + (ulong)*(ushort *)(&UNK_108c98e68 + (long)pppppppbVar23 * 2) * 4)
  ;
  pppppppbVar14 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar15 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar16 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar17 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar18 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar11 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar12 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar13 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar6 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar7 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar8 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar9 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar10 = (byte *******)&pppppppbStack_2f0;
  pppppppbVar19 = (byte *******)param_2;
  pppppppbVar24 = pppppppbVar23;
  pppppppbVar30 = unaff_x25;
  pppppppbVar31 = (byte *******)param_2;
  switch(bVar22) {
  case 0:
  case 0xc9:
    bVar22 = *(byte *)((long)param_3 + 1);
  case 0x4c:
    pppppppbStack_270 = (byte *******)((ulong)CONCAT61(pppppppbStack_270._2_6_,bVar22) << 8);
code_r0x0001004488d8:
    pppppppbStack_270 = (byte *******)((ulong)pppppppbStack_270 & 0xffffffffffffff00);
code_r0x0001004488dc:
    goto code_r0x000100448930;
  case 1:
  case 0xc6:
    pppppppbVar23 = (byte *******)(ulong)*(byte *)((long)param_3 + 1);
    goto code_r0x0001004488e4;
  case 2:
    pppppppbVar23 = (byte *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0xcf:
code_r0x0001004488e4:
    bVar22 = 1;
    pppppppbStack_268 = pppppppbVar23;
code_r0x0001004488ec:
    break;
  case 3:
  case 0xd5:
    pppppppbVar23 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x66:
  case 0xde:
    goto code_r0x0001004488e4;
  case 4:
  case 0x23:
  case 0x44:
    pppppppbVar23 = (byte *******)param_3[1];
    goto code_r0x0001004488e4;
  case 5:
  case 199:
  case 0xf6:
    pppppppbVar23 = (byte *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0xe2:
code_r0x000100448924:
    bVar22 = 2;
    pppppppbStack_268 = pppppppbVar23;
    break;
  case 6:
  case 0xd3:
    pppppppbVar23 = (byte *******)(long)*(short *)((long)param_3 + 2);
  case 0xbe:
  case 0xe1:
    goto code_r0x000100448924;
  case 7:
  case 0xfd:
    pppppppbVar23 = (byte *******)(long)*(int *)((long)param_3 + 4);
  case 0x48:
  case 0xeb:
    goto code_r0x000100448924;
  case 8:
  case 0xd0:
  case 0xfb:
    pppppppbVar23 = (byte *******)param_3[1];
    goto code_r0x000100448924;
  case 9:
    pppppppbVar33 = (byte *******)(double)*(float *)((long)param_3 + 4);
  case 0x43:
  case 0x5c:
  case 0xe9:
code_r0x000100448914:
    pppppppbStack_268 = pppppppbVar33;
code_r0x000100448918:
    bVar22 = 3;
code_r0x00010044891c:
    break;
  case 10:
    pppppppbVar33 = (byte *******)param_3[1];
    goto code_r0x000100448914;
  case 0xb:
  case 0x16:
    param_3 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
    pppppppbVar11 = (byte *******)&stack0xffffffffffffffa0;
    puVar32 = unaff_x29;
  case 0x17:
  case 0xd1:
    unaff_x20 = *(byte ********)((long)pppppppbVar11 + 0x40);
    pppppppbVar28 = *(byte ********)((long)pppppppbVar11 + 0x48);
    pppppppbVar12 = pppppppbVar11;
code_r0x000100448860:
    pppppppbVar13 = pppppppbVar12;
code_r0x000100448864:
    *(byte ********)((long)pppppppbVar13 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar13 + 0x48) = pppppppbVar28;
    *(undefined1 **)((long)pppppppbVar13 + 0x50) = puVar32;
    *(undefined8 *)((long)pppppppbVar13 + 0x58) = unaff_x30;
    *(undefined4 *)((long)pppppppbVar13 + 0x1c) = 0;
    uVar21 = (uint)param_3;
    if (uVar21 < 0x80) {
      *(byte *)((long)pppppppbVar13 + 0x1c) = (byte)param_3;
      uVar25 = 1;
    }
    else {
      bVar22 = (byte)param_3 & 0x3f | 0x80;
      if (uVar21 < 0x800) {
        *(byte *)((long)pppppppbVar13 + 0x1c) = (byte)(uVar21 >> 6) | 0xc0;
        *(byte *)((long)pppppppbVar13 + 0x1d) = bVar22;
        uVar25 = 2;
      }
      else {
        bVar2 = (byte)(uVar21 >> 6) & 0x3f | 0x80;
        if (uVar21 < 0x10000) {
          *(byte *)((long)pppppppbVar13 + 0x1c) = (byte)(uVar21 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppbVar13 + 0x1d) = bVar2;
          *(byte *)((long)pppppppbVar13 + 0x1e) = bVar22;
          uVar25 = 3;
        }
        else {
          *(byte *)((long)pppppppbVar13 + 0x1c) = (byte)(uVar21 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppbVar13 + 0x1d) = (byte)(uVar21 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppbVar13 + 0x1e) = bVar2;
          *(byte *)((long)pppppppbVar13 + 0x1f) = bVar22;
          uVar25 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppbVar13 + 0x28) = (undefined1 *)((long)pppppppbVar13 + 0x1c);
    *(undefined8 *)((long)pppppppbVar13 + 0x30) = uVar25;
    *(undefined1 *)((long)pppppppbVar13 + 0x20) = 5;
    ppppppbVar27 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar13 + 0x20),
                                       (undefined1 *)((long)pppppppbVar13 + 0x3f),&UNK_10b219ef0);
    *(byte *******)param_2 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_2 + 8) = ppppppbVar27;
    return;
  case 0xc:
  case 0x51:
    param_3 = param_3 + 1;
  case 0x1c:
  case 0xca:
    pppppppbVar14 = (byte *******)&stack0xffffffffffffffa0;
    puVar32 = unaff_x29;
code_r0x000100448884:
    unaff_x20 = *(byte ********)((long)pppppppbVar14 + 0x40);
    pppppppbVar28 = *(byte ********)((long)pppppppbVar14 + 0x48);
    pppppppbVar15 = pppppppbVar14;
code_r0x000100448888:
    unaff_x22 = *(byte ********)((long)pppppppbVar15 + 0x30);
    unaff_x21 = *(byte ********)((long)pppppppbVar15 + 0x38);
    pppppppbVar16 = pppppppbVar15;
code_r0x00010044888c:
    pppppppbVar17 = pppppppbVar16;
code_r0x000100448890:
    pppppppbVar18 = pppppppbVar17;
code_r0x000100448894:
    *(byte ********)((long)pppppppbVar18 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar18 + 0x38) = unaff_x21;
    *(byte ********)((long)pppppppbVar18 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar18 + 0x48) = pppppppbVar28;
    *(undefined1 **)((long)pppppppbVar18 + 0x50) = puVar32;
    *(undefined8 *)((long)pppppppbVar18 + 0x58) = unaff_x30;
    ppppppbVar27 = param_3[1];
    ppppppbVar20 = param_3[2];
    *(byte *******)((long)pppppppbVar18 + 0x18) = ppppppbVar27;
    *(byte *******)((long)pppppppbVar18 + 0x20) = ppppppbVar20;
    *(undefined1 *)((long)pppppppbVar18 + 0x10) = 5;
    ppppppbVar20 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar18 + 0x10),
                                       (undefined1 *)((long)pppppppbVar18 + 0x2f),&UNK_10b219ef0);
    *(byte *******)param_2 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_2 + 8) = ppppppbVar20;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar27);
    }
    return;
  case 0xd:
  case 0xfe:
    pppppppbVar23 = (byte *******)param_3[1];
    pppppppbVar26 = (byte *******)param_3[2];
  case 0xdd:
    pppppppbStack_268 = pppppppbVar23;
    pppppppbStack_260 = pppppppbVar26;
code_r0x000100448900:
    bVar22 = 5;
code_r0x000100448904:
    break;
  case 0xe:
  case 0x18:
    param_3 = param_3 + 1;
  case 0x25:
  case 0xd6:
    pppppppbVar6 = (byte *******)&stack0xffffffffffffffa0;
    puVar32 = unaff_x29;
code_r0x00010044882c:
    unaff_x20 = *(byte ********)((long)pppppppbVar6 + 0x40);
    pppppppbVar28 = *(byte ********)((long)pppppppbVar6 + 0x48);
    pppppppbVar7 = pppppppbVar6;
code_r0x000100448830:
    unaff_x22 = *(byte ********)((long)pppppppbVar7 + 0x30);
    unaff_x21 = *(byte ********)((long)pppppppbVar7 + 0x38);
    pppppppbVar8 = pppppppbVar7;
code_r0x000100448834:
    pppppppbVar9 = pppppppbVar8;
code_r0x000100448838:
    pppppppbVar10 = pppppppbVar9;
code_r0x00010044883c:
    *(byte ********)((long)pppppppbVar10 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar10 + 0x38) = unaff_x21;
    *(byte ********)((long)pppppppbVar10 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar10 + 0x48) = pppppppbVar28;
    *(undefined1 **)((long)pppppppbVar10 + 0x50) = puVar32;
    *(undefined8 *)((long)pppppppbVar10 + 0x58) = unaff_x30;
    ppppppbVar27 = param_3[1];
    ppppppbVar20 = param_3[2];
    *(byte *******)((long)pppppppbVar10 + 0x18) = ppppppbVar27;
    *(byte *******)((long)pppppppbVar10 + 0x20) = ppppppbVar20;
    *(undefined1 *)((long)pppppppbVar10 + 0x10) = 6;
    ppppppbVar20 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar10 + 0x10),
                                       (undefined1 *)((long)pppppppbVar10 + 0x2f),&UNK_10b219ef0);
    *(byte *******)param_2 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_2 + 8) = ppppppbVar20;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar27);
    }
    return;
  case 0xf:
    pppppppbVar23 = (byte *******)param_3[1];
    pppppppbVar26 = (byte *******)param_3[2];
  case 0x47:
    pppppppbStack_268 = pppppppbVar23;
    pppppppbStack_260 = pppppppbVar26;
code_r0x0001004488b8:
    bVar22 = 6;
code_r0x0001004488bc:
    break;
  case 0x10:
    bVar22 = 8;
    break;
  default:
    pppppppbVar19 = (byte *******)param_3[1];
    pppppppbStack_268 = (byte *******)pppppppbVar19[1];
    pppppppbStack_270 = (byte *******)*pppppppbVar19;
    ppppppbStack_258 = pppppppbVar19[3];
    pppppppbStack_260 = (byte *******)pppppppbVar19[2];
    func_0x000107c04650(param_2,&pppppppbStack_270);
    goto code_r0x000100448518;
  case 0x12:
  case 0x5f:
    bVar22 = 7;
  case 0x79:
  case 0xf7:
    break;
  case 0x13:
    unaff_x20 = (byte *******)param_3[1];
    pppppppbVar34 = (byte *******)unaff_x20[1];
    pppppppbVar33 = (byte *******)*unaff_x20;
  case 0xef:
    pppppppbStack_270 = pppppppbVar33;
    pppppppbStack_268 = pppppppbVar34;
code_r0x0001004484e8:
    pppppppbVar19 = unaff_x20;
    ppppppbStack_258 = pppppppbVar19[3];
    pppppppbStack_260 = (byte *******)pppppppbVar19[2];
    func_0x000107c0533c(param_2,&pppppppbStack_270);
code_r0x000100448518:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppbVar19);
    return;
  case 0x14:
    unaff_x23 = (byte *******)param_3[1];
    unaff_x20 = (byte *******)param_3[2];
  case 0xad:
    unaff_x26 = (byte *******)param_3[3];
code_r0x000100448528:
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
code_r0x00010044852c:
    pppppppbStack_2a0 = (byte *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppbStack_2c0 = unaff_x20;
    pppppppbStack_2b0 = unaff_x23;
    pppppppbStack_2a8 = unaff_x24;
    if (unaff_x26 == (byte *******)0x0) {
code_r0x000100448554:
      param_3 = (byte *******)&UNK_10b22f8c8;
      pppppppbStack_2b8 = unaff_x21;
code_r0x00010044855c:
      param_4 = &UNK_10b20a590;
      pppppppbVar19 = (byte *******)0x0;
code_r0x000100448568:
      pppppppbStack_a0 = (byte *******)thunk_FUN_1087e422c(pppppppbVar19,param_3,param_4);
code_r0x000100448570:
      *(byte *******)param_2 = (byte ******)0x800000000000006e;
      *(byte ********)((long)param_2 + 8) = pppppppbStack_a0;
code_r0x00010044857c:
      lVar29 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar29 = lVar29 + -1, lVar29 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (byte *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100448554;
      uVar25 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      cStack_8f = (char)uVar25;
      uStack_8e = (undefined6)((ulong)uVar25 >> 8);
      uStack_88 = (undefined1)((ulong)uVar25 >> 0x38);
      ppppppbStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppbVar26 = (byte *******)0x1;
      pppppppbStack_2b8 = unaff_x21;
      bVar22 = *(byte *)unaff_x20;
code_r0x0001004485d0:
      bStack_90 = bVar22;
      pppppppbStack_2a0 = pppppppbVar26;
      func_0x00010135ba2c(&pppppppbStack_a8,&bStack_90);
      if (pppppppbStack_a8 == (byte *******)0x8000000000000001) goto code_r0x000100448570;
      unaff_x22 = pppppppbStack_a0;
      unaff_x25 = pppppppbStack_a8;
      if (unaff_x26 == (byte *******)0x1) {
code_r0x000100448614:
        param_3 = (byte *******)&UNK_10b22f8c8;
        param_4 = &UNK_10b20a000;
code_r0x000100448620:
        pppppppbVar19 = (byte *******)thunk_FUN_1087e422c(1,param_3,param_4 + 0x590);
code_r0x00010044862c:
        *(byte *******)param_2 = (byte ******)0x800000000000006e;
        *(byte ********)((long)param_2 + 8) = pppppppbVar19;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x00010044857c;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar22 = *(byte *)(unaff_x20 + 4);
      unaff_x26 = pppppppbStack_98;
      pppppppbStack_2b8 = unaff_x21;
      if (bVar22 == 0x16) goto code_r0x000100448614;
code_r0x000100448978:
      pppppppbVar34 = *(byte ********)((long)unaff_x20 + 0x29);
      pppppppbVar33 = *(byte ********)((long)unaff_x20 + 0x21);
code_r0x00010044897c:
      uStack_87 = SUB87(pppppppbVar34,0);
      cStack_8f = (char)pppppppbVar33;
      uStack_8e = (undefined6)((ulong)pppppppbVar33 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppbVar33 >> 0x38);
code_r0x000100448980:
      ppppppbStack_78 = unaff_x20[7];
      uStack_80 = SUB81(unaff_x20[6],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[6] >> 8);
code_r0x000100448988:
      pppppppbVar26 = (byte *******)0x2;
code_r0x00010044898c:
      pppppppbStack_2a0 = pppppppbVar26;
code_r0x000100448990:
      bStack_90 = bVar22;
code_r0x000100448994:
      pppppppbVar19 = (byte *******)&pppppppbStack_a8;
code_r0x000100448998:
      param_3 = (byte *******)&bStack_90;
code_r0x00010044899c:
      func_0x000101350000(pppppppbVar19,param_3);
code_r0x0001004489a0:
      pppppppbVar19 = pppppppbStack_a0;
      pppppppbVar23 = pppppppbStack_a8;
code_r0x0001004489a4:
      if (pppppppbVar23 == (byte *******)0x8000000000000001) goto code_r0x00010044862c;
code_r0x0001004489b0:
      pppppppbVar28 = (byte *******)0x800000000000006e;
code_r0x0001004489b8:
      ppppppbVar27 = (byte ******)((long)pppppppbVar28 + -0x25);
      pppppppbVar26 = pppppppbStack_98;
code_r0x0001004489c0:
      *(byte *******)param_2 = ppppppbVar27;
      *(byte ********)((long)param_2 + 8) = unaff_x25;
      *(byte ********)((long)param_2 + 0x10) = unaff_x22;
      *(byte ********)((long)param_2 + 0x18) = unaff_x26;
code_r0x0001004489c8:
      *(byte ********)((long)param_2 + 0x20) = pppppppbVar23;
      *(byte ********)((long)param_2 + 0x28) = pppppppbVar19;
code_r0x0001004489cc:
      *(byte ********)((long)param_2 + 0x30) = pppppppbVar26;
code_r0x0001004489d0:
      pppppppbVar19 = (byte *******)&pppppppbStack_270;
code_r0x0001004489d4:
      param_3 = (byte *******)param_2;
code_r0x0001004489d8:
      _memcpy(pppppppbVar19,param_3,0x1c0);
code_r0x0001004489e0:
      pppppppbVar19 = (byte *******)&pppppppbStack_2c0;
code_r0x0001004489e4:
      pppppppbVar19 = (byte *******)FUN_100fbc738(pppppppbVar19);
code_r0x0001004489e8:
      if (pppppppbVar19 != (byte *******)0x0) {
code_r0x0001004489ec:
        *pppppppbVar31 = (byte ******)pppppppbVar28;
        pppppppbVar31[1] = (byte ******)pppppppbVar19;
code_r0x0001004489f0:
        param_2 = (char *)&pppppppbStack_270;
code_r0x0001004489f4:
        FUN_100e44f40(param_2);
code_r0x0001004489f8:
      }
    }
    goto LAB_100448950;
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
    ppppppbStack_290 = param_3[1];
    pppppppbStack_2a0 = (byte *******)param_3[2];
    ppppppbVar27 = param_3[3];
    pppppppbStack_288 = pppppppbStack_2a0 + (long)ppppppbVar27 * 8;
    pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
    pppppppbStack_280 = (byte *******)0x0;
    unaff_x23 = (byte *******)0x8000000000000001;
    pppppppbStack_298 = pppppppbStack_2a0;
    if (ppppppbVar27 != (byte ******)0x0) {
      unaff_x25 = (byte *******)0x0;
      unaff_x20 = (byte *******)((ulong)&bStack_90 | 1);
      unaff_x21 = (byte *******)((ulong)&pppppppbStack_2c0 | 1);
      pppppppbStack_2f0 = (byte *******)(((long)ppppppbVar27 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (byte *******)0x8000000000000001;
      unaff_x24 = (byte *******)0x8000000000000001;
      unaff_x28 = pppppppbStack_288;
      pppppppbVar19 = pppppppbStack_2a0;
      pppppppbStack_2e8 = (byte *******)param_2;
      do {
        unaff_x26 = pppppppbVar19 + 8;
        bVar22 = *(byte *)pppppppbVar19;
        pppppppbVar30 = unaff_x25;
        if (bVar22 == 0x16) break;
        ppppppbVar27 = pppppppbVar19[2];
        *(byte *******)((long)unaff_x20 + 0x17) = pppppppbVar19[3];
        *(byte *******)((long)unaff_x20 + 0xf) = ppppppbVar27;
        ppppppbVar27 = *(byte *******)((long)pppppppbVar19 + 1);
        unaff_x20[1] = *(byte *******)((long)pppppppbVar19 + 9);
        *unaff_x20 = ppppppbVar27;
        pppppppbStack_2b8 = (byte *******)pppppppbVar19[5];
        pppppppbStack_2c0 = (byte *******)pppppppbVar19[4];
        pppppppbStack_2a8 = (byte *******)pppppppbVar19[7];
        pppppppbStack_2b0 = (byte *******)pppppppbVar19[6];
        piVar3 = (int *)CONCAT71(uStack_87,uStack_88);
        piVar4 = (int *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar22;
        if (bVar22 < 0xd) {
          if (bVar22 == 1) {
            uVar21 = 1;
            if (cStack_8f != '\x01') {
              uVar21 = 2;
            }
            uVar1 = 0;
            if (cStack_8f != '\0') {
              uVar1 = uVar21;
            }
            pppppppbVar28 = (byte *******)(ulong)uVar1;
          }
          else {
            if (bVar22 != 4) {
              if (bVar22 == 0xc) {
                if (ppppppbStack_78 == (byte ******)0x6) {
                  uVar21 = 1;
                  if (*piVar4 != 0x61726170 || (short)piVar4[1] != 0x736d) {
                    uVar21 = 2;
                  }
                  pppppppbVar28 = (byte *******)(ulong)uVar21;
                }
                else if (ppppppbStack_78 == (byte ******)0x2) {
                  uVar21 = 2;
                  if ((short)*piVar4 == 0x6469) {
                    uVar21 = 0;
                  }
                  pppppppbVar28 = (byte *******)(ulong)uVar21;
                }
                else {
                  pppppppbVar28 = (byte *******)0x2;
                }
                goto joined_r0x000100448348;
              }
code_r0x000100448b20:
              pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
              pppppppbStack_298 = unaff_x26;
              param_2 = (char *)thunk_FUN_108855b04(&bStack_90,&pppppppbStack_a8,&UNK_10b20f220);
              pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
              pppppppbVar19 = pppppppbStack_2e8;
              goto LAB_1004486a4;
            }
            uVar21 = 1;
            if (piVar3 != (int *)0x1) {
              uVar21 = 2;
            }
            uVar1 = 0;
            if (piVar3 != (int *)0x0) {
              uVar1 = uVar21;
            }
            pppppppbVar28 = (byte *******)(ulong)uVar1;
          }
code_r0x0001004483d4:
          FUN_100e077ec(&bStack_90);
        }
        else {
          if (bVar22 == 0xd) {
            if (piVar4 == (int *)0x6) {
              uVar21 = 1;
              if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                uVar21 = 2;
              }
              pppppppbVar28 = (byte *******)(ulong)uVar21;
            }
            else {
              if (piVar4 != (int *)0x2) goto code_r0x0001004483a0;
              uVar21 = 2;
              if ((short)*piVar3 == 0x6469) {
                uVar21 = 0;
              }
              pppppppbVar28 = (byte *******)(ulong)uVar21;
            }
            goto code_r0x0001004483d4;
          }
          if (bVar22 != 0xe) {
            if (bVar22 != 0xf) goto code_r0x000100448b20;
            if (piVar4 == (int *)0x6) {
              if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
                   (*(char *)((long)piVar3 + 2) != 'r')) ||
                  ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
                 (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x0001004483a0;
              pppppppbVar28 = (byte *******)0x1;
            }
            else if (((piVar4 == (int *)0x2) && ((char)*piVar3 == 'i')) &&
                    (*(char *)((long)piVar3 + 1) == 'd')) {
              pppppppbVar28 = (byte *******)0x0;
            }
            else {
code_r0x0001004483a0:
              pppppppbVar28 = (byte *******)0x2;
            }
            goto code_r0x0001004483d4;
          }
          if (ppppppbStack_78 == (byte ******)0x6) {
            if ((((((char)*piVar4 != 'p') || (*(char *)((long)piVar4 + 1) != 'a')) ||
                 (*(char *)((long)piVar4 + 2) != 'r')) ||
                ((*(char *)((long)piVar4 + 3) != 'a' || ((char)piVar4[1] != 'm')))) ||
               (*(char *)((long)piVar4 + 5) != 's')) goto code_r0x000100448310;
            pppppppbVar28 = (byte *******)0x1;
          }
          else if (((ppppppbStack_78 == (byte ******)0x2) && ((char)*piVar4 == 'i')) &&
                  (*(char *)((long)piVar4 + 1) == 'd')) {
            pppppppbVar28 = (byte *******)0x0;
          }
          else {
code_r0x000100448310:
            pppppppbVar28 = (byte *******)0x2;
          }
joined_r0x000100448348:
          if (piVar3 != (int *)0x0) {
            _free();
          }
        }
code_r0x0001004483ec:
        bVar22 = (byte)pppppppbStack_2c0;
        if (((ulong)pppppppbVar28 & 0xff) == 0) {
          if (unaff_x22 != unaff_x23) goto code_r0x000100448a58;
          pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
          if (bVar22 == 0x16) {
            pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_298 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100448b1c;
          }
          ppppppbVar27 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppbVar27;
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
          bStack_90 = bVar22;
          func_0x00010135ba2c(&pppppppbStack_a8,&bStack_90);
          if (pppppppbStack_a8 == unaff_x23) {
            pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
            unaff_x22 = (byte *******)0x8000000000000001;
            param_2 = (char *)pppppppbStack_a0;
            pppppppbStack_298 = unaff_x26;
            goto code_r0x000100448808;
          }
          pppppppbStack_2c8 = pppppppbStack_a0;
          uStack_2d8 = pppppppbStack_98;
          unaff_x22 = pppppppbStack_a8;
          pppppppbVar26 = unaff_x26;
          unaff_x26 = unaff_x28;
        }
        else if (((uint)pppppppbVar28 & 0xff) == 1) {
          if (unaff_x24 != unaff_x23) goto code_r0x0001004489fc;
          pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
          if (bVar22 == 0x16) goto code_r0x000100448af4;
          ppppppbVar27 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppbVar27;
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
          bStack_90 = bVar22;
code_r0x000100448430:
          func_0x000101350000(&pppppppbStack_a8,&bStack_90);
          if (pppppppbStack_a8 == unaff_x23) {
            pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_298 = unaff_x26;
            goto code_r0x0001004487a0;
          }
          pppppppbStack_2d0 = pppppppbStack_a0;
          pppppppbStack_2e0 = pppppppbStack_98;
          unaff_x24 = pppppppbStack_a8;
          pppppppbVar26 = unaff_x26;
          unaff_x26 = unaff_x28;
        }
        else {
          pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
          if (bVar22 == 0x16) {
            pppppppbVar23 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_298 = unaff_x26;
            goto code_r0x000100448aa8;
          }
          ppppppbVar27 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppbVar27;
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
          bStack_90 = bVar22;
          param_2 = (char *)&bStack_90;
code_r0x0001004484d4:
          FUN_100e077ec(param_2);
          pppppppbVar26 = unaff_x26;
          unaff_x26 = unaff_x28;
        }
        pppppppbVar24 = pppppppbVar19 + 8;
        unaff_x25 = (byte *******)((long)unaff_x25 + 1);
        pppppppbVar30 = pppppppbStack_2f0;
        unaff_x28 = unaff_x26;
        pppppppbVar19 = pppppppbVar26;
      } while (pppppppbVar24 != unaff_x26);
      pppppppbVar23 = (byte *******)0x8000000000000001;
      in_ZR = unaff_x22 == (byte *******)0x8000000000000001;
      pppppppbStack_298 = unaff_x26;
      pppppppbStack_280 = pppppppbVar30;
      goto code_r0x000100448664;
    }
    unaff_x24 = (byte *******)0x8000000000000001;
    goto code_r0x000100448670;
  case 0x19:
    goto code_r0x000100448834;
  case 0x1a:
  case 0x50:
    goto code_r0x0001004487e0;
  case 0x1b:
    goto code_r0x000100448864;
  case 0x1d:
    goto code_r0x00010044883c;
  case 0x1e:
  case 0x42:
    goto code_r0x000100448894;
  case 0x1f:
    goto code_r0x000100448810;
  case 0x20:
  case 0x45:
  case 0xd2:
    goto code_r0x000100448884;
  case 0x21:
    goto LAB_1004487b8;
  case 0x22:
    goto code_r0x0001004487e8;
  case 0x24:
  case 0x8e:
    goto code_r0x000100448790;
  case 0x26:
  case 0x8a:
    goto code_r0x000100448788;
  case 0x28:
  case 0x4a:
  case 0xe3:
    goto code_r0x0001004488e4;
  case 0x29:
  case 0x55:
    goto code_r0x0001004484d4;
  case 0x2a:
  case 0x56:
  case 0x6b:
    goto code_r0x000100448518;
  case 0x2c:
code_r0x000100448a58:
    pppppppbVar24 = (byte *******)((long)unaff_x25 + 1);
  case 0xc2:
    pppppppbVar23 = (byte *******)&UNK_108ca2000;
    pppppppbStack_298 = unaff_x26;
    pppppppbStack_280 = pppppppbVar24;
code_r0x000100448a68:
    pppppppbStack_a8 = pppppppbVar23 + 0xd6;
    pppppppbStack_a0 = (byte *******)0x2;
    pppppppbVar23 = (byte *******)&pppppppbStack_a8;
code_r0x000100448a78:
    pppppppbVar26 = (byte *******)&DAT_100c7b3a0;
code_r0x000100448a80:
    bStack_90 = (byte)pppppppbVar23;
    cStack_8f = (char)((ulong)pppppppbVar23 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar23 >> 0x10);
    uStack_88 = SUB81(pppppppbVar26,0);
    uStack_87 = (undefined7)((ulong)pppppppbVar26 >> 8);
    param_2 = s_duplicate_field_____108ac2973;
    param_3 = (byte *******)&bStack_90;
code_r0x000100448a90:
    param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
code_r0x000100448a94:
    pppppppbVar19 = pppppppbStack_2e8;
code_r0x000100448a98:
    pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
    goto LAB_1004486a4;
  case 0x2d:
    goto code_r0x000100448a68;
  case 0x2e:
    goto code_r0x000100448a30;
  case 0x2f:
    goto code_r0x000100448a48;
  case 0x30:
  case 0x9a:
    goto code_r0x0001004489f4;
  case 0x31:
    goto code_r0x000100448a78;
  case 0x32:
    goto code_r0x000100448a90;
  case 0x33:
  case 0x76:
    goto code_r0x000100448a50;
  case 0x34:
code_r0x000100448aa8:
    pppppppbStack_280 = pppppppbVar23;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x000100448b1c;
  case 0x35:
    goto code_r0x000100448a24;
  case 0x36:
    goto code_r0x000100448a98;
  case 0x37:
  case 0x77:
  case 0x9c:
    goto code_r0x0001004489cc;
  case 0x38:
code_r0x0001004489fc:
    pppppppbVar23 = (byte *******)((long)unaff_x25 + 1);
  case 0x6e:
  case 0xba:
    pppppppbVar24 = pppppppbVar23;
    pppppppbStack_298 = unaff_x26;
code_r0x000100448a04:
    pppppppbVar23 = (byte *******)&UNK_108cb9606;
    pppppppbStack_280 = pppppppbVar24;
code_r0x000100448a10:
    pppppppbVar26 = (byte *******)0x6;
code_r0x000100448a14:
    pppppppbStack_a8 = pppppppbVar23;
    pppppppbStack_a0 = pppppppbVar26;
code_r0x000100448a18:
    pppppppbVar23 = (byte *******)&pppppppbStack_a8;
code_r0x000100448a1c:
    pppppppbVar26 = (byte *******)&UNK_100c7b000;
code_r0x000100448a20:
    pppppppbVar26 = pppppppbVar26 + 0x74;
code_r0x000100448a24:
    bStack_90 = (byte)pppppppbVar23;
    cStack_8f = (char)((ulong)pppppppbVar23 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar23 >> 0x10);
    uStack_88 = SUB81(pppppppbVar26,0);
    uStack_87 = (undefined7)((ulong)pppppppbVar26 >> 8);
FUN_100448a28:
    param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x000100448a2c:
    param_2 = (char *)((long)param_2 + 0x973);
code_r0x000100448a30:
    param_3 = (byte *******)&bStack_90;
code_r0x000100448a34:
    param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
code_r0x000100448a38:
    pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
    pppppppbVar26 = pppppppbStack_2e8;
code_r0x000100448a40:
    pppppppbVar23 = (byte *******)0x6e;
code_r0x000100448a44:
    pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 | 0x8000000000000000);
code_r0x000100448a48:
    *pppppppbVar26 = (byte ******)pppppppbVar23;
    pppppppbVar26[1] = (byte ******)param_2;
    in_ZR = ((ulong)unaff_x24 & 0x7fffffffffffffff) == 0;
code_r0x000100448a50:
    if ((bool)in_ZR) goto LAB_1004487b8;
    goto LAB_1004486c4;
  case 0x39:
  case 0x80:
    goto code_r0x000100448a80;
  case 0x3a:
  case 0x7a:
  case 0xfa:
    goto code_r0x0001004489a4;
  case 0x3b:
  case 0x74:
    goto code_r0x000100448a38;
  case 0x3c:
  case 0x72:
    goto code_r0x00010044899c;
  case 0x3e:
code_r0x000100448af4:
    pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
    pppppppbStack_298 = unaff_x26;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100448b1c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100448b20);
    (*pcVar5)();
  case 0x3f:
    goto code_r0x000100448620;
  case 0x40:
code_r0x000100448664:
    param_2 = (char *)pppppppbStack_2e8;
    if (!(bool)in_ZR) {
      if (unaff_x24 != pppppppbVar23) {
        pppppppbVar28 = (byte *******)0x6e;
        goto code_r0x000100448728;
      }
      pppppppbStack_a8 = (byte *******)&UNK_108cb9606;
      pppppppbStack_a0 = (byte *******)0x6;
      pppppppbVar23 = (byte *******)&pppppppbStack_a8;
      goto code_r0x0001004486ec;
    }
  case 0x81:
code_r0x000100448670:
    pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
    pppppppbStack_a8 = (byte *******)&UNK_108ca26b0;
    pppppppbStack_a0 = (byte *******)0x2;
    bStack_90 = (byte)&pppppppbStack_a8;
    cStack_8f = (char)((ulong)&pppppppbStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&pppppppbStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    unaff_x22 = (byte *******)0x8000000000000001;
    pppppppbVar19 = (byte *******)param_2;
FUN_100448694:
    param_2 = s_missing_field_____108ac28f7;
code_r0x00010044869c:
    param_2 = (char *)thunk_FUN_108856088(param_2,&bStack_90);
LAB_1004486a4:
    *pppppppbVar19 = (byte ******)0x800000000000006e;
    pppppppbVar19[1] = (byte ******)param_2;
code_r0x0001004486b0:
    if ((-0x7fffffffffffffff < (long)unaff_x24) && (unaff_x24 != (byte *******)0x0)) {
LAB_1004486c4:
      _free(pppppppbStack_2d0);
    }
    goto LAB_1004487b8;
  case 0x46:
  case 0xec:
    goto code_r0x000100448830;
  case 0x49:
    goto code_r0x00010044888c;
  case 0x4b:
  case 0xe7:
    goto code_r0x000100448860;
  case 0x4d:
code_r0x000100448808:
    pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
    pppppppbVar19 = pppppppbStack_2e8;
code_r0x000100448810:
    goto LAB_1004486a4;
  case 0x4e:
  case 0xea:
    goto code_r0x000100448838;
  case 0x4f:
  case 0x68:
    goto code_r0x0001004488bc;
  case 0x52:
    goto code_r0x0001004487d8;
  case 0x54:
  case 0xbb:
    goto code_r0x000100448934;
  case 0x58:
    goto code_r0x000100448978;
  case 0x59:
    goto code_r0x000100448988;
  case 0x5a:
    goto LAB_100448950;
  case 0x5b:
  case 0xa5:
    goto code_r0x000100448968;
  case 0x5d:
  case 0xa6:
  case 0xb2:
    goto code_r0x000100448998;
  case 0x5e:
  case 0xb3:
    goto code_r0x0001004489b0;
  case 0x60:
    goto code_r0x0001004489c8;
  case 0x61:
  case 0x7e:
  case 0xf5:
    goto code_r0x000100448944;
  case 0x62:
  case 0xb7:
    goto code_r0x0001004489b8;
  case 99:
  case 0xdc:
    goto code_r0x0001004488ec;
  case 100:
    goto code_r0x00010044891c;
  case 0x65:
  case 0xbf:
    goto code_r0x0001004489a0;
  case 0x67:
    goto code_r0x000100448958;
  case 0x6a:
    goto code_r0x000100448a18;
  case 0x6c:
    goto code_r0x00010044855c;
  case 0x6f:
  case 0xb8:
    goto code_r0x000100448a10;
  case 0x70:
    goto code_r0x0001004489d8;
  case 0x71:
    goto code_r0x0001004489f0;
  case 0x73:
    goto code_r0x000100448a20;
  case 0x75:
  case 0xb6:
    goto code_r0x0001004489f8;
  case 0x78:
    goto code_r0x000100448a40;
  case 0x7b:
    goto FUN_100448a28;
  case 0x7c:
  case 0xf9:
    goto code_r0x00010044894c;
  case 0x7d:
  case 0xb5:
    goto code_r0x0001004489e0;
  case 0x82:
    goto code_r0x0001004486b0;
  case 0x84:
    goto code_r0x000100448750;
  case 0x85:
    goto code_r0x000100448760;
  case 0x86:
code_r0x000100448728:
    pppppppbVar28 = (byte *******)((ulong)pppppppbVar28 & 0xffffffffffff | 0x8000000000000000);
    pppppppbVar23 = (byte *******)((long)pppppppbVar28 + -0x25);
  case 0x93:
    *(byte ********)param_2 = pppppppbVar23;
    *(byte ********)((long)param_2 + 8) = unaff_x22;
    *(byte ********)((long)param_2 + 0x10) = pppppppbStack_2c8;
    *(byte ********)((long)param_2 + 0x18) = uStack_2d8;
    pppppppbVar23 = pppppppbStack_2d0;
code_r0x000100448740:
    *(byte ********)((long)param_2 + 0x20) = unaff_x24;
    *(byte ********)((long)param_2 + 0x28) = pppppppbVar23;
    pppppppbVar23 = pppppppbStack_2e0;
    pppppppbVar31 = (byte *******)param_2;
code_r0x000100448748:
    pppppppbVar31[6] = (byte ******)pppppppbVar23;
    param_2 = (char *)&pppppppbStack_270;
code_r0x000100448750:
    _memcpy(param_2,pppppppbVar31,0x1c0);
    pppppppbVar23 = (byte *******)&pppppppbStack_2c0;
code_r0x000100448760:
    FUN_100d34830(pppppppbVar23 + 4);
    if (unaff_x28 != unaff_x26) {
code_r0x000100448770:
      pppppppbVar23 = (byte *******)((ulong)((long)unaff_x28 - (long)unaff_x26) >> 6);
code_r0x000100448778:
      bStack_90 = (byte)pppppppbVar30;
      cStack_8f = (char)((ulong)pppppppbVar30 >> 8);
      uStack_8e = (undefined6)((ulong)pppppppbVar30 >> 0x10);
      param_4 = &UNK_10b23a190;
      param_2 = (char *)((long)pppppppbVar23 + (long)pppppppbVar30);
code_r0x000100448788:
      pppppppbVar19 = (byte *******)thunk_FUN_1087e422c(param_2,&bStack_90,param_4);
code_r0x000100448790:
      goto code_r0x0001004489ec;
    }
    goto LAB_100448950;
  case 0x87:
    goto code_r0x000100448740;
  case 0x88:
code_r0x0001004486ec:
    pppppppbVar26 = (byte *******)&DAT_100c7b3a0;
  case 0x90:
    bStack_90 = (byte)pppppppbVar23;
    cStack_8f = (char)((ulong)pppppppbVar23 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar23 >> 0x10);
    uStack_88 = SUB81(pppppppbVar26,0);
    uStack_87 = (undefined7)((ulong)pppppppbVar26 >> 8);
    ppppppbVar27 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *(byte *******)param_2 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_2 + 8) = ppppppbVar27;
    in_ZR = ((ulong)unaff_x22 & 0x7fffffffffffffff) == 0;
    pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
code_r0x00010044871c:
    if (!(bool)in_ZR) goto LAB_1004487cc;
    goto LAB_1004487d4;
  case 0x89:
    goto code_r0x000100448770;
  case 0x8b:
    goto code_r0x000100448748;
  case 0x8c:
code_r0x0001004487a0:
    *pppppppbStack_2e8 = (byte ******)0x800000000000006e;
    pppppppbStack_2e8[1] = (byte ******)pppppppbStack_a0;
    pppppppbVar28 = (byte *******)&pppppppbStack_2c0;
LAB_1004487b8:
    if ((-0x7fffffffffffffff < (long)unaff_x22) && (unaff_x22 != (byte *******)0x0)) {
LAB_1004487cc:
      _free(pppppppbStack_2c8);
    }
LAB_1004487d4:
    param_2 = (char *)(pppppppbVar28 + 4);
code_r0x0001004487d8:
    FUN_100d34830(param_2);
    pppppppbVar23 = (byte *******)((ulong)pppppppbStack_2c0 & 0xff);
code_r0x0001004487e0:
    if ((int)pppppppbVar23 != 0x16) {
code_r0x0001004487e8:
      param_2 = (char *)&pppppppbStack_2c0;
code_r0x0001004487ec:
      FUN_100e077ec(param_2);
    }
    goto LAB_100448950;
  case 0x8d:
    goto code_r0x00010044871c;
  case 0x8f:
    goto LAB_1004486c4;
  case 0x91:
    goto code_r0x000100448778;
  case 0x92:
    goto code_r0x00010044869c;
  case 0x94:
    goto FUN_100448694;
  case 0x96:
    goto code_r0x0001004487ec;
  case 0x97:
    goto code_r0x0001004483ec;
  case 0x98:
    goto code_r0x000100448430;
  case 0x9b:
    goto code_r0x000100448a04;
  case 0x9d:
    goto code_r0x0001004489e4;
  case 0x9e:
    goto code_r0x000100448990;
  case 0x9f:
    goto code_r0x000100448a14;
  case 0xa0:
    goto code_r0x000100448a2c;
  case 0xa1:
    goto code_r0x0001004489ec;
  case 0xa2:
    goto code_r0x000100448a44;
  case 0xa3:
  case 0xb0:
    goto code_r0x0001004489c0;
  case 0xa4:
    goto code_r0x000100448a34;
  case 0xa7:
    goto code_r0x000100448a1c;
  case 0xa8:
    goto code_r0x000100448940;
  case 0xa9:
    goto code_r0x0001004489d4;
  case 0xaa:
    goto code_r0x000100448938;
  case 0xac:
    goto code_r0x000100448a94;
  case 0xae:
    goto code_r0x000100448568;
  case 0xb1:
    goto code_r0x0001004489d0;
  case 0xb4:
    goto code_r0x00010044895c;
  case 0xb9:
  case 0xee:
  case 0xf8:
    goto code_r0x00010044898c;
  case 0xbc:
  case 0xf3:
    goto code_r0x000100448964;
  case 0xbd:
    goto code_r0x0001004489e8;
  case 0xc0:
    goto code_r0x000100448904;
  case 0xc3:
    goto code_r0x0001004485d0;
  case 0xc4:
    goto code_r0x000100448614;
  case 200:
  case 0xe5:
    goto code_r0x0001004488b8;
  case 0xcb:
    goto code_r0x000100448900;
  case 0xcc:
    goto code_r0x000100448918;
  case 0xcd:
    goto code_r0x0001004488d8;
  case 0xce:
    goto code_r0x000100448930;
  case 0xd4:
    goto code_r0x00010044882c;
  case 0xd8:
    goto code_r0x000100448980;
  case 0xd9:
    goto code_r0x0001004484e8;
  case 0xda:
    goto code_r0x00010044852c;
  case 0xdf:
    goto code_r0x0001004488dc;
  case 0xe0:
    goto code_r0x000100448888;
  case 0xe4:
    goto code_r0x00010044893c;
  case 0xe6:
  case 0xf4:
    break;
  case 0xe8:
    goto code_r0x000100448890;
  case 0xf0:
    goto code_r0x000100448528;
  case 0xf2:
    goto code_r0x000100448954;
  case 0xfc:
    goto code_r0x000100448994;
  case 0xff:
    goto code_r0x00010044897c;
  }
  pppppppbStack_270 = (byte *******)CONCAT71(pppppppbStack_270._1_7_,bVar22);
code_r0x000100448930:
  param_4 = &UNK_10b219000;
code_r0x000100448934:
  param_4 = param_4 + 0xef0;
code_r0x000100448938:
  pppppppbVar19 = (byte *******)&pppppppbStack_270;
code_r0x00010044893c:
  param_3 = (byte *******)&pppppppbStack_a8;
code_r0x000100448940:
  pppppppbVar19 = (byte *******)FUN_107c05dcc(pppppppbVar19,param_3,param_4);
code_r0x000100448944:
  pppppppbVar23 = (byte *******)0x800000000000006e;
code_r0x00010044894c:
  *(byte ********)param_2 = pppppppbVar23;
  *(byte ********)((long)param_2 + 8) = pppppppbVar19;
LAB_100448950:
code_r0x000100448954:
code_r0x000100448958:
code_r0x00010044895c:
code_r0x000100448964:
code_r0x000100448968:
  return;
}

