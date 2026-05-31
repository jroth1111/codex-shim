
/* WARNING: Type propagation algorithm not settling */

void FUN_100471ea0(undefined1 param_1 [16],char *param_2,ulong *******param_3,undefined *param_4)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong *******pppppppuVar15;
  ulong ******ppppppuVar16;
  uint uVar17;
  byte bVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  ulong *******pppppppuVar24;
  ulong ******ppppppuVar25;
  ulong *******pppppppuVar26;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  undefined8 *puVar27;
  ulong *******pppppppuVar28;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  byte *pbVar29;
  ulong *******unaff_x25;
  ulong ******unaff_x26;
  undefined8 *puVar30;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  undefined8 unaff_x30;
  ulong *******pppppppuVar32;
  undefined1 auStack_2e0 [8];
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  undefined8 uStack_2c8;
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
  ulong ******ppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong ******ppppppuStack_78;
  
  ppppppuVar25 = param_1._8_8_;
  pppppppuVar32 = param_1._0_8_;
  puVar31 = &stack0xfffffffffffffff0;
  pppppppuVar26 = (ulong *******)&uStack_90;
  bVar18 = *(byte *)param_3;
  pppppppuVar19 = (ulong *******)(ulong)bVar18;
  pppppppuVar24 = (ulong *******)&UNK_108c99692;
  puVar13 = auStack_2e0;
  puVar14 = auStack_2e0;
  puVar11 = auStack_2e0;
  puVar12 = auStack_2e0;
  puVar8 = auStack_2e0;
  puVar9 = auStack_2e0;
  puVar10 = auStack_2e0;
  pppppppuVar15 = (ulong *******)param_2;
  pppppppuVar20 = pppppppuVar19;
  pppppppuVar28 = unaff_x21;
  pppppppuVar5 = unaff_x22;
  pppppppuVar6 = unaff_x25;
  switch(bVar18) {
  case 0:
  case 0x5f:
  case 0xbb:
    bVar18 = *(byte *)((long)param_3 + 1);
  case 0x46:
    ppppppuStack_270 = (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar18) << 8);
code_r0x0001004726a8:
    ppppppuStack_270 = (ulong ******)((ulong)ppppppuStack_270 & 0xffffffffffffff00);
code_r0x0001004726ac:
    goto code_r0x000100472700;
  case 1:
  case 0x8f:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0x59:
code_r0x0001004726b8:
    bVar18 = 1;
    break;
  case 2:
  case 0xbe:
    pppppppuVar19 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x1e:
  case 0x4d:
    pppppppuStack_268 = pppppppuVar19;
    goto code_r0x0001004726b8;
  case 3:
    pppppppuVar19 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xe0:
    pppppppuStack_268 = pppppppuVar19;
    goto code_r0x0001004726b8;
  case 4:
  case 0x17:
  case 0xec:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x0001004726b8;
  case 5:
    pppppppuVar19 = (ulong *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0xe5:
    pppppppuStack_268 = pppppppuVar19;
    goto code_r0x0001004726f8;
  case 6:
  case 0x7c:
  case 0x88:
  case 0xeb:
    pppppppuVar19 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x3a:
    pppppppuStack_268 = pppppppuVar19;
    goto code_r0x0001004726f8;
  case 7:
  case 0x5b:
    pppppppuVar19 = (ulong *******)(long)*(int *)((long)param_3 + 4);
  case 0xe8:
    pppppppuStack_268 = pppppppuVar19;
code_r0x0001004726f8:
    bVar18 = 2;
    break;
  case 8:
  case 0xaa:
  case 0xe3:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x0001004726f8;
  case 9:
  case 0x20:
  case 0xe7:
    pppppppuVar32 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xc0:
    pppppppuVar32 = (ulong *******)(double)SUB84(pppppppuVar32,0);
code_r0x000100472674:
    pppppppuStack_268 = pppppppuVar32;
code_r0x0001004726e8:
    bVar18 = 3;
    break;
  case 10:
  case 0x44:
  case 0x5e:
  case 0x90:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x0001004726e8;
  case 0xb:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x19:
  case 99:
    puVar11 = &stack0xffffffffffffffa0;
    puVar31 = unaff_x29;
code_r0x000100472624:
    unaff_x20 = *(ulong ********)(puVar11 + 0x40);
    pppppppuVar26 = *(ulong ********)(puVar11 + 0x48);
    puVar12 = puVar11;
code_r0x00010047262c:
    *(ulong ********)(puVar12 + 0x40) = unaff_x20;
    *(ulong ********)(puVar12 + 0x48) = pppppppuVar26;
    *(undefined1 **)(puVar12 + 0x50) = puVar31;
    *(undefined8 *)(puVar12 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar12 + 0x1c) = 0;
    uVar17 = (uint)param_3;
    if (uVar17 < 0x80) {
      puVar12[0x1c] = (byte)param_3;
      uVar21 = 1;
    }
    else {
      bVar18 = (byte)param_3 & 0x3f | 0x80;
      if (uVar17 < 0x800) {
        puVar12[0x1c] = (byte)(uVar17 >> 6) | 0xc0;
        puVar12[0x1d] = bVar18;
        uVar21 = 2;
      }
      else {
        bVar1 = (byte)(uVar17 >> 6) & 0x3f | 0x80;
        if (uVar17 < 0x10000) {
          puVar12[0x1c] = (byte)(uVar17 >> 0xc) | 0xe0;
          puVar12[0x1d] = bVar1;
          puVar12[0x1e] = bVar18;
          uVar21 = 3;
        }
        else {
          puVar12[0x1c] = (byte)(uVar17 >> 0x12) | 0xf0;
          puVar12[0x1d] = (byte)(uVar17 >> 0xc) & 0x3f | 0x80;
          puVar12[0x1e] = bVar1;
          puVar12[0x1f] = bVar18;
          uVar21 = 4;
        }
      }
    }
    *(undefined1 **)(puVar12 + 0x28) = puVar12 + 0x1c;
    *(undefined8 *)(puVar12 + 0x30) = uVar21;
    puVar12[0x20] = 5;
    ppppppuVar25 = (ulong ******)func_0x000108a4a50c(puVar12 + 0x20,puVar12 + 0x3f,&UNK_10b21a2d0);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar25;
    return;
  case 0xc:
  case 0x5c:
  case 0xea:
    param_3 = param_3 + 1;
  case 0x1b:
  case 0x52:
  case 100:
    puVar13 = &stack0xffffffffffffffa0;
    puVar31 = unaff_x29;
code_r0x000100472654:
    unaff_x20 = *(ulong ********)(puVar13 + 0x40);
    pppppppuVar26 = *(ulong ********)(puVar13 + 0x48);
    unaff_x22 = *(ulong ********)(puVar13 + 0x30);
    unaff_x21 = *(ulong ********)(puVar13 + 0x38);
    puVar14 = puVar13;
code_r0x000100472664:
    *(ulong ********)(puVar14 + 0x30) = unaff_x22;
    *(ulong ********)(puVar14 + 0x38) = unaff_x21;
    *(ulong ********)(puVar14 + 0x40) = unaff_x20;
    *(ulong ********)(puVar14 + 0x48) = pppppppuVar26;
    *(undefined1 **)(puVar14 + 0x50) = puVar31;
    *(undefined8 *)(puVar14 + 0x58) = unaff_x30;
    ppppppuVar25 = param_3[1];
    ppppppuVar16 = param_3[2];
    *(ulong *******)(puVar14 + 0x18) = ppppppuVar25;
    *(ulong *******)(puVar14 + 0x20) = ppppppuVar16;
    puVar14[0x10] = 5;
    ppppppuVar16 = (ulong ******)func_0x000108a4a50c(puVar14 + 0x10,puVar14 + 0x2f,&UNK_10b21a2d0);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar16;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar25);
    }
    return;
  case 0xd:
  case 0x28:
  case 0x5d:
  case 0xb4:
    pppppppuStack_268 = (ulong *******)param_3[1];
    ppppppuStack_260 = param_3[2];
  case 0x65:
  case 0x7e:
  case 0xbc:
  case 0xde:
    bVar18 = 5;
code_r0x0001004726d4:
    break;
  case 0xe:
  case 0x68:
    param_3 = param_3 + 1;
  case 0x66:
    puVar8 = &stack0xffffffffffffffa0;
code_r0x0001004725f8:
    puVar31 = *(undefined1 **)(puVar8 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar8 + 0x58);
    unaff_x20 = *(ulong ********)(puVar8 + 0x40);
    pppppppuVar26 = *(ulong ********)(puVar8 + 0x48);
    unaff_x22 = *(ulong ********)(puVar8 + 0x30);
    unaff_x21 = *(ulong ********)(puVar8 + 0x38);
    puVar9 = puVar8;
code_r0x000100472604:
    puVar10 = puVar9;
code_r0x00010047260c:
    *(ulong ********)(puVar10 + 0x30) = unaff_x22;
    *(ulong ********)(puVar10 + 0x38) = unaff_x21;
    *(ulong ********)(puVar10 + 0x40) = unaff_x20;
    *(ulong ********)(puVar10 + 0x48) = pppppppuVar26;
    *(undefined1 **)(puVar10 + 0x50) = puVar31;
    *(undefined8 *)(puVar10 + 0x58) = unaff_x30;
    ppppppuVar25 = param_3[1];
    ppppppuVar16 = param_3[2];
    *(ulong *******)(puVar10 + 0x18) = ppppppuVar25;
    *(ulong *******)(puVar10 + 0x20) = ppppppuVar16;
    puVar10[0x10] = 6;
    ppppppuVar16 = (ulong ******)func_0x000108a4a50c(puVar10 + 0x10,puVar10 + 0x2f,&UNK_10b21a2d0);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar16;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar25);
    }
    return;
  case 0xf:
  case 0x5a:
  case 0x94:
    pppppppuStack_268 = (ulong *******)param_3[1];
    ppppppuStack_260 = param_3[2];
  case 0x67:
  case 0x92:
    bVar18 = 6;
    break;
  case 0x10:
    bVar18 = 8;
    break;
  default:
    pppppppuVar15 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)pppppppuVar15[1];
    ppppppuStack_270 = *pppppppuVar15;
    ppppppuStack_258 = pppppppuVar15[3];
    ppppppuStack_260 = pppppppuVar15[2];
    func_0x000107c04890(param_2,&ppppppuStack_270);
  case 0xef:
code_r0x000100472300:
code_r0x000100472308:
code_r0x000100472318:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar15);
    return;
  case 0x12:
  case 0x48:
    bVar18 = 7;
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuStack_258 = unaff_x20[3];
    ppppppuStack_260 = unaff_x20[2];
    param_3 = &ppppppuStack_270;
  case 0x29:
    pppppppuVar15 = unaff_x20;
    func_0x000107c05588(param_2,param_3);
    goto code_r0x000100472300;
  case 0x14:
  case 0x3f:
  case 0xad:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x26 = param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
  case 0x81:
  case 0x97:
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
code_r0x00010047233c:
    if (unaff_x26 == (ulong ******)0x0) {
code_r0x000100472354:
      param_3 = (ulong *******)&UNK_10b22fc08;
code_r0x00010047235c:
      param_4 = &UNK_10b20a590;
code_r0x000100472364:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,param_3,param_4);
code_r0x000100472370:
      pppppppuVar19 = (ulong *******)0x6e;
      unaff_x22 = pppppppuStack_a0;
code_r0x000100472374:
      *(ulong *******)param_2 = (ulong ******)((ulong)pppppppuVar19 | 0x8000000000000000);
      *(ulong ********)((long)param_2 + 8) = unaff_x22;
code_r0x00010047237c:
      pppppppuVar19 = (ulong *******)((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5);
code_r0x000100472384:
      pbVar29 = (byte *)((long)pppppppuVar19 + 1);
      while (pbVar29 = pbVar29 + -1, pbVar29 != (byte *)0x0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x0001004723a8:
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100472340:
      pppppppuVar28 = unaff_x20;
code_r0x000100472344:
      unaff_x21 = pppppppuVar28 + 4;
      pppppppuVar19 = (ulong *******)(ulong)*(byte *)pppppppuVar28;
      pppppppuStack_2b8 = unaff_x21;
code_r0x00010047234c:
      if ((int)pppppppuVar19 == 0x16) goto code_r0x000100472354;
      uVar21 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar21;
      uStack_90._2_6_ = (undefined6)((ulong)uVar21 >> 8);
      uStack_88 = (undefined1)((ulong)uVar21 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
      uStack_90._0_1_ = (byte)pppppppuVar19;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x000100472370;
      if (unaff_x26 == (ulong ******)0x1) {
code_r0x000100472410:
        pppppppuVar15 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22fc08,&UNK_10b20a590);
code_r0x000100472428:
        *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar15;
        if (((ulong)pppppppuStack_a8 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_a0);
        }
        goto code_r0x00010047237c;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar18 = *(byte *)(unaff_x20 + 4);
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x26 = ppppppuStack_98;
      pppppppuStack_2b8 = unaff_x21;
      if (bVar18 == 0x16) goto code_r0x000100472410;
code_r0x000100472748:
      ppppppuVar25 = *(ulong *******)((long)unaff_x20 + 0x29);
      pppppppuVar32 = *(ulong ********)((long)unaff_x20 + 0x21);
code_r0x00010047274c:
      uStack_87 = SUB87(ppppppuVar25,0);
      uStack_90._1_1_ = (char)pppppppuVar32;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar32 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar32 >> 0x38);
code_r0x000100472750:
      ppppppuVar25 = unaff_x20[7];
      pppppppuVar32 = (ulong *******)unaff_x20[6];
code_r0x000100472754:
      uStack_80 = SUB81(pppppppuVar32,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar32 >> 8);
      ppppppuStack_78 = ppppppuVar25;
code_r0x000100472758:
      pppppppuVar24 = (ulong *******)0x2;
code_r0x00010047275c:
      pppppppuStack_2a0 = pppppppuVar24;
code_r0x000100472760:
      uStack_90._0_1_ = bVar18;
code_r0x000100472764:
      pppppppuVar15 = (ulong *******)&uStack_90;
code_r0x000100472768:
      pppppppuVar15 = (ulong *******)func_0x00010121eff0(pppppppuVar15);
      pppppppuVar5 = unaff_x22;
      pppppppuVar6 = unaff_x25;
code_r0x00010047276c:
      pppppppuStack_a8 = pppppppuVar6;
      pppppppuStack_a0 = pppppppuVar5;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      if (pppppppuVar15 != (ulong *******)0x0) goto code_r0x000100472428;
code_r0x000100472770:
      pppppppuVar26 = (ulong *******)0x6e;
code_r0x000100472774:
      pppppppuVar26 = (ulong *******)((ulong)pppppppuVar26 & 0xffffffffffff | 0x8000000000000000);
code_r0x000100472778:
      pppppppuVar19 = pppppppuVar26 + -6;
code_r0x00010047277c:
      *(ulong ********)param_2 = pppppppuVar19;
      *(ulong ********)((long)param_2 + 8) = unaff_x25;
code_r0x000100472780:
      *(ulong ********)((long)param_2 + 0x10) = unaff_x22;
      *(ulong *******)((long)param_2 + 0x18) = unaff_x26;
code_r0x000100472784:
      pppppppuVar15 = &ppppppuStack_270;
code_r0x000100472788:
      param_3 = (ulong *******)param_2;
code_r0x00010047278c:
      param_4 = (undefined *)0x1c0;
code_r0x000100472790:
      _memcpy(pppppppuVar15,param_3,param_4);
      pppppppuVar15 = (ulong *******)&pppppppuStack_2c0;
code_r0x000100472798:
      pppppppuVar15 = (ulong *******)FUN_100fbc738(pppppppuVar15);
code_r0x00010047279c:
      if (pppppppuVar15 != (ulong *******)0x0) {
code_r0x0001004727a0:
        *(ulong ********)param_2 = pppppppuVar26;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar15;
code_r0x0001004727a4:
        param_2 = (char *)&ppppppuStack_270;
code_r0x0001004727a8:
        FUN_100e44f40(param_2);
code_r0x0001004727ac:
      }
    }
    goto LAB_100472720;
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
    ppppppuStack_290 = param_3[1];
    pppppppuStack_2a0 = (ulong *******)param_3[2];
    ppppppuVar25 = param_3[3];
    pppppppuVar24 = pppppppuStack_2a0 + (long)ppppppuVar25 * 8;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    pppppppuStack_298 = pppppppuStack_2a0;
    pppppppuStack_288 = pppppppuVar24;
    if (ppppppuVar25 != (ulong ******)0x0) {
      unaff_x23 = (ulong *******)0x0;
      bVar4 = false;
      puVar30 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar27 = (undefined8 *)((ulong)&pppppppuStack_2c0 | 1);
      pppppppuStack_2d8 = (ulong *******)(((long)ppppppuVar25 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (ulong *******)0x8000000000000001;
      pppppppuVar19 = pppppppuStack_2a0;
      pppppppuStack_2d0 = (ulong *******)param_2;
      pppppppuStack_298 = pppppppuStack_2a0;
      do {
        unaff_x24 = pppppppuVar19 + 8;
        bVar18 = *(byte *)pppppppuVar19;
        pppppppuVar15 = unaff_x23;
        pppppppuVar20 = unaff_x24;
        if (bVar18 == 0x16) break;
        ppppppuVar25 = pppppppuVar19[2];
        *(ulong *******)((long)puVar30 + 0x17) = pppppppuVar19[3];
        *(ulong *******)((long)puVar30 + 0xf) = ppppppuVar25;
        uVar21 = *(undefined8 *)((long)pppppppuVar19 + 1);
        puVar30[1] = *(undefined8 *)((long)pppppppuVar19 + 9);
        *puVar30 = uVar21;
        pppppppuStack_2b8 = (ulong *******)pppppppuVar19[5];
        pppppppuStack_2c0 = (ulong *******)pppppppuVar19[4];
        pppppppuStack_2a8 = (ulong *******)pppppppuVar19[7];
        pppppppuStack_2b0 = (ulong *******)pppppppuVar19[6];
        piVar2 = (int *)CONCAT71(uStack_87,uStack_88);
        piVar3 = (int *)CONCAT71(uStack_7f,uStack_80);
        uStack_90._0_1_ = bVar18;
        if (bVar18 < 0xd) {
          if (bVar18 == 1) {
            iVar23 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar23 = 2;
            }
            iVar22 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar22 = iVar23;
            }
          }
          else {
            if (bVar18 != 4) {
              if (bVar18 == 0xc) {
                if (ppppppuStack_78 == (ulong ******)0x6) {
                  iVar22 = 1;
                  if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                    iVar22 = 2;
                  }
                }
                else if (ppppppuStack_78 == (ulong ******)0x2) {
                  iVar22 = 2;
                  if ((short)*piVar3 == 0x6469) {
                    iVar22 = 0;
                  }
                }
                else {
                  iVar22 = 2;
                }
                goto joined_r0x000100472154;
              }
code_r0x000100472894:
              pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
              pppppppuStack_298 = unaff_x24;
              param_2 = (char *)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b20fbc0);
              pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
              pppppppuVar24 = pppppppuStack_2d0;
              goto LAB_1004725a0;
            }
            iVar23 = 1;
            if (piVar2 != (int *)0x1) {
              iVar23 = 2;
            }
            iVar22 = 0;
            if (piVar2 != (int *)0x0) {
              iVar22 = iVar23;
            }
          }
code_r0x0001004721e0:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (bVar18 == 0xd) {
            if (piVar3 == (int *)0x6) {
              iVar22 = 1;
              if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
                iVar22 = 2;
              }
            }
            else {
              if (piVar3 != (int *)0x2) goto code_r0x0001004721ac;
              iVar22 = 2;
              if ((short)*piVar2 == 0x6469) {
                iVar22 = 0;
              }
            }
            goto code_r0x0001004721e0;
          }
          if (bVar18 != 0xe) {
            if (bVar18 != 0xf) goto code_r0x000100472894;
            if (piVar3 == (int *)0x6) {
              if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                   (*(char *)((long)piVar2 + 2) != 'r')) ||
                  ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
                 (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x0001004721ac;
              iVar22 = 1;
            }
            else if (((piVar3 == (int *)0x2) && ((char)*piVar2 == 'i')) &&
                    (*(char *)((long)piVar2 + 1) == 'd')) {
              iVar22 = 0;
            }
            else {
code_r0x0001004721ac:
              iVar22 = 2;
            }
            goto code_r0x0001004721e0;
          }
          if (ppppppuStack_78 == (ulong ******)0x6) {
            if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
                 (*(char *)((long)piVar3 + 2) != 'r')) ||
                ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
               (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x00010047211c;
            iVar22 = 1;
          }
          else if (((ppppppuStack_78 == (ulong ******)0x2) && ((char)*piVar3 == 'i')) &&
                  (*(char *)((long)piVar3 + 1) == 'd')) {
            iVar22 = 0;
          }
          else {
code_r0x00010047211c:
            iVar22 = 2;
          }
joined_r0x000100472154:
          if (piVar2 != (int *)0x0) {
            _free();
          }
        }
        bVar18 = (byte)pppppppuStack_2c0;
        if (iVar22 == 0) {
          if (unaff_x22 != (ulong *******)0x8000000000000001) {
            pppppppuVar19 = (ulong *******)((long)unaff_x23 + 1);
            goto code_r0x0001004727dc;
          }
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar18 == 0x16) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
            param_2 = &UNK_108ca1a98;
            param_4 = &UNK_10b24f848;
            param_3 = (ulong *******)0x2c;
            pppppppuStack_298 = unaff_x24;
            goto code_r0x00010047288c;
          }
          uVar21 = *puVar27;
          puVar30[1] = puVar27[1];
          *puVar30 = uVar21;
          uVar21 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar21;
          uStack_90._0_1_ = bVar18;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          unaff_x20 = pppppppuStack_a0;
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
            pppppppuVar19 = (ulong *******)((long)unaff_x23 + 1);
            goto code_r0x0001004725d0;
          }
          uStack_2c8 = ppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
        }
        else if (iVar22 == 1) {
          if (bVar4) {
            pppppppuVar19 = (ulong *******)((long)unaff_x23 + 1);
            goto code_r0x000100472824;
          }
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar18 == 0x16) goto code_r0x0001004727b0;
          uVar21 = *puVar27;
          puVar30[1] = puVar27[1];
          *puVar30 = uVar21;
          uVar21 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar21;
          uStack_90._0_1_ = bVar18;
          param_2 = (char *)func_0x00010121eff0(&uStack_90);
          if ((ulong *******)param_2 != (ulong *******)0x0) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
            pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
            pppppppuVar24 = pppppppuStack_2d0;
            pppppppuStack_298 = unaff_x24;
            goto LAB_1004725a0;
          }
          bVar4 = true;
        }
        else {
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar18 == 0x16) goto code_r0x0001004727b0;
          uVar21 = *puVar27;
          puVar30[1] = puVar27[1];
          *puVar30 = uVar21;
          uVar21 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar21;
          uStack_90._0_1_ = bVar18;
          FUN_100e077ec(&uStack_90);
        }
        unaff_x23 = (ulong *******)((long)unaff_x23 + 1);
        pppppppuVar15 = pppppppuStack_2d8;
        pppppppuVar20 = pppppppuVar24;
        pppppppuVar19 = unaff_x24;
      } while (unaff_x24 != pppppppuVar24);
      pppppppuVar19 = pppppppuStack_2d0;
      param_2 = (char *)pppppppuStack_2d0;
      pppppppuStack_298 = pppppppuVar20;
      pppppppuStack_280 = pppppppuVar15;
      if (unaff_x22 != (ulong *******)0x8000000000000001) {
        if (!bVar4) {
          pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
          pppppppuStack_a0 = (ulong *******)0x6;
          uStack_90._0_1_ = (byte)&pppppppuStack_a8;
          uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
          uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          param_2 = (char *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
          pppppppuVar19 = (ulong *******)0x6e;
          goto code_r0x000100472570;
        }
        *pppppppuStack_2d0 = (ulong ******)0x800000000000003e;
        pppppppuStack_2d0[1] = (ulong ******)unaff_x22;
        pppppppuStack_2d0[2] = (ulong ******)unaff_x20;
        pppppppuStack_2d0[3] = uStack_2c8;
        _memcpy(&ppppppuStack_270,pppppppuStack_2d0,0x1c0);
        FUN_100d34830(&pppppppuStack_2a0);
        if (pppppppuVar24 != pppppppuVar20) {
          uStack_90._0_1_ = (byte)pppppppuVar15;
          uStack_90._1_1_ = (char)((ulong)pppppppuVar15 >> 8);
          uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar15 >> 0x10);
          ppppppuVar25 = (ulong ******)
                         thunk_FUN_1087e422c((byte *)(((ulong)((long)pppppppuVar24 -
                                                              (long)pppppppuVar20) >> 6) +
                                                     (long)pppppppuVar15),&uStack_90,&UNK_10b23a190)
          ;
          *pppppppuVar19 = (ulong ******)0x800000000000006e;
          pppppppuVar19[1] = ppppppuVar25;
          goto code_r0x0001004727a4;
        }
        goto LAB_100472720;
      }
    }
    pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_a0 = (ulong *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    unaff_x20 = (ulong *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
    goto code_r0x0001004724a8;
  case 0x16:
    goto code_r0x00010047262c;
  case 0x18:
    goto code_r0x000100472604;
  case 0x1a:
    goto code_r0x0001004725c8;
  case 0x1c:
    goto code_r0x000100472664;
  case 0x1d:
    goto code_r0x000100472624;
  case 0x1f:
    goto code_r0x0001004725f8;
  case 0x21:
    goto LAB_1004725a0;
  case 0x22:
code_r0x0001004725d0:
    param_2 = (char *)pppppppuStack_2d0;
    pppppppuStack_298 = unaff_x24;
    pppppppuStack_280 = pppppppuVar19;
code_r0x0001004724a8:
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong ********)((long)param_2 + 8) = unaff_x20;
LAB_1004724b4:
    FUN_100d34830(pppppppuVar26 + 4);
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
    }
    goto LAB_100472720;
  case 0x23:
  case 0x50:
    goto code_r0x000100472654;
  case 0x24:
    goto code_r0x000100472578;
  case 0x25:
    goto code_r0x00010047260c;
  case 0x26:
code_r0x000100472570:
    pppppppuVar19 = (ulong *******)((ulong)pppppppuVar19 | 0x8000000000000000);
    pppppppuVar24 = pppppppuStack_2d0;
code_r0x000100472578:
    *pppppppuVar24 = (ulong ******)pppppppuVar19;
    pppppppuVar24[1] = (ulong ******)param_2;
    unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
joined_r0x0001004725bc:
    if (unaff_x22 != (ulong *******)0x0) {
      _free(unaff_x20);
code_r0x0001004725c8:
    }
    goto LAB_1004724b4;
  case 0x2a:
    goto code_r0x00010047233c;
  case 0x2c:
  case 0xd2:
    goto code_r0x000100472790;
  case 0x2d:
    goto code_r0x0001004727a0;
  case 0x2e:
    goto code_r0x000100472768;
  case 0x2f:
    goto code_r0x000100472780;
  case 0x30:
  case 0x87:
  case 0xb0:
    goto code_r0x00010047272c;
  case 0x31:
code_r0x0001004727b0:
    pppppppuVar19 = (ulong *******)((long)unaff_x23 + 1);
  case 0x7b:
  case 0xff:
    pppppppuStack_298 = unaff_x24;
code_r0x0001004727b8:
    pppppppuStack_280 = pppppppuVar19;
code_r0x0001004727bc:
    param_2 = &UNK_108ca1000;
code_r0x0001004727c0:
    param_2 = (char *)((long)param_2 + 0xa98);
code_r0x0001004727c4:
    param_4 = &UNK_10b24f000;
code_r0x0001004727c8:
    param_4 = param_4 + 0x848;
code_r0x0001004727cc:
    param_3 = (ulong *******)0x2c;
code_r0x0001004727d0:
    FUN_107c05cac(param_2,param_3,param_4);
code_r0x0001004727d4:
code_r0x000100472890:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100472894);
    (*pcVar7)();
  case 0x32:
    goto code_r0x0001004727c8;
  case 0x33:
  case 0xca:
    goto code_r0x000100472788;
  case 0x34:
    goto code_r0x0001004727e0;
  case 0x35:
  case 0x89:
    goto code_r0x00010047275c;
  case 0x36:
    goto code_r0x0001004727d0;
  case 0x37:
  case 0xb2:
    goto code_r0x000100472704;
  case 0x38:
  case 0x8b:
    goto code_r0x000100472734;
  case 0x39:
  case 0xcf:
    goto code_r0x0001004727b8;
  case 0x3b:
    goto code_r0x000100472770;
  case 0x3c:
  case 0x4b:
    goto code_r0x0001004726d4;
  case 0x3e:
    goto code_r0x000100472830;
  case 0x40:
  case 0x6b:
  case 0xae:
    goto code_r0x000100472364;
  case 0x42:
  case 0x8d:
  case 0xdd:
    goto code_r0x000100472708;
  case 0x43:
  case 0xe1:
    goto code_r0x000100472718;
  case 0x45:
  case 0x60:
  case 0xa8:
  case 0xb9:
  case 0xdc:
    goto code_r0x0001004726f8;
  case 0x47:
  case 0x6a:
  case 0x72:
  case 0xf6:
    goto code_r0x000100472728;
  case 0x49:
  case 0x79:
  case 0xfd:
    goto code_r0x000100472700;
  case 0x4a:
  case 0x77:
  case 0xfb:
    goto code_r0x000100472758;
  case 0x4c:
  case 0x9e:
  case 0xe4:
    goto code_r0x000100472748;
  case 0x4e:
    goto code_r0x0001004726ac;
  case 0x4f:
  case 0x7a:
  case 0xd6:
  case 0xe2:
  case 0xfe:
    goto code_r0x000100472730;
  case 0x51:
  case 0x62:
  case 0xdf:
    goto code_r0x0001004726e8;
  case 0x54:
    goto code_r0x0001004727a8;
  case 0x55:
    goto code_r0x000100472308;
  case 0x56:
    goto code_r0x00010047234c;
  case 0x58:
    goto code_r0x0001004726a8;
  case 0x61:
    goto code_r0x000100472674;
  case 0x6c:
    goto code_r0x0001004723a8;
  case 0x6e:
  case 0x8c:
  case 0xa9:
  case 0xf2:
    goto code_r0x00010047278c;
  case 0x6f:
  case 0x9d:
  case 0xf3:
    goto code_r0x00010047279c;
  case 0x70:
  case 0x91:
  case 0xb6:
  case 0xf4:
    goto code_r0x000100472764;
  case 0x71:
  case 0x8e:
  case 0xb8:
  case 0xf5:
    goto code_r0x00010047277c;
  case 0x73:
  case 0x9a:
  case 0xf7:
    goto code_r0x0001004727ac;
  case 0x74:
  case 200:
  case 0xf8:
    goto code_r0x0001004727c4;
  case 0x75:
  case 0x9c:
  case 0xf9:
    goto code_r0x000100472784;
  case 0x76:
  case 0xc9:
  case 0xfa:
code_r0x0001004727dc:
    pppppppuStack_298 = unaff_x24;
code_r0x0001004727e0:
    pppppppuStack_280 = pppppppuVar19;
code_r0x0001004727e4:
    pppppppuVar20 = (ulong *******)&UNK_108ca26b0;
code_r0x0001004727ec:
    pppppppuStack_a0 = (ulong *******)0x2;
    pppppppuVar19 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar24 = (ulong *******)&UNK_100c7b000;
    pppppppuStack_a8 = pppppppuVar20;
code_r0x0001004727fc:
    uStack_90._0_1_ = (byte)pppppppuVar19;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar19 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar19 >> 0x10);
    uStack_88 = SUB81(pppppppuVar24 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppuVar24 + 0x74) >> 8);
    param_2 = s_duplicate_field_____108ac2973;
code_r0x00010047280c:
    param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_90);
code_r0x000100472814:
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar24 = pppppppuStack_2d0;
    goto LAB_1004725a0;
  case 0x78:
  case 0x9f:
  case 0xc2:
  case 0xd5:
  case 0xfc:
    goto code_r0x0001004727cc;
  case 0x7d:
  case 0xba:
    goto code_r0x00010047276c;
  case 0x80:
  case 0xd0:
    goto code_r0x00010047282c;
  case 0x82:
  case 0x98:
    goto code_r0x000100472374;
  case 0x84:
  case 0xb1:
    goto code_r0x00010047273c;
  case 0x85:
  case 0xb5:
    goto code_r0x00010047274c;
  case 0x86:
    goto code_r0x000100472714;
  case 0x8a:
    goto code_r0x000100472774;
  case 0x93:
  case 0xb3:
    goto code_r0x00010047271c;
  case 0x96:
    goto code_r0x0001004727c0;
  case 0x9b:
    goto code_r0x0001004727bc;
  case 0xa0:
  case 0xcd:
    goto code_r0x0001004727e4;
  case 0xa1:
    goto code_r0x0001004727a4;
  case 0xa2:
  case 199:
    goto code_r0x0001004727fc;
  case 0xa3:
    goto code_r0x000100472778;
  case 0xa4:
  case 0xc6:
    goto code_r0x0001004727ec;
  case 0xa5:
  case 0xe9:
    goto LAB_100472720;
  case 0xa6:
    goto code_r0x000100472750;
  case 0xa7:
    goto code_r0x0001004727d4;
  case 0xac:
    goto code_r0x00010047284c;
  case 0xb7:
    goto code_r0x000100472724;
  case 0xbd:
    goto code_r0x000100472754;
  case 0xbf:
    goto code_r0x00010047270c;
  case 0xc3:
    goto code_r0x000100472318;
  case 0xc4:
    goto code_r0x00010047235c;
  case 0xcb:
    goto code_r0x00010047280c;
  case 0xcc:
code_r0x000100472824:
    pppppppuStack_298 = unaff_x24;
    pppppppuStack_280 = pppppppuVar19;
code_r0x00010047282c:
    pppppppuVar19 = (ulong *******)&UNK_108cb9000;
code_r0x000100472830:
    pppppppuStack_a8 = (ulong *******)((long)pppppppuVar19 + 0x606);
    pppppppuStack_a0 = (ulong *******)0x6;
code_r0x00010047283c:
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
code_r0x00010047284c:
    param_2 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar26 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar24 = pppppppuStack_2d0;
LAB_1004725a0:
    *pppppppuVar24 = (ulong ******)0x800000000000006e;
    pppppppuVar24[1] = (ulong ******)param_2;
    if (-0x7fffffffffffffff < (long)unaff_x22) goto joined_r0x0001004725bc;
    goto LAB_1004724b4;
  case 0xce:
    goto code_r0x00010047283c;
  case 0xd1:
    goto code_r0x000100472760;
  case 0xd3:
    goto code_r0x000100472814;
  case 0xd4:
  case 0xe6:
    goto code_r0x000100472738;
  case 0xd8:
code_r0x00010047288c:
    FUN_107c05cac(param_2,param_3,param_4);
    goto code_r0x000100472890;
  case 0xd9:
    goto code_r0x000100472340;
  case 0xda:
    goto code_r0x000100472384;
  case 0xee:
    goto code_r0x000100472798;
  case 0xf0:
    goto code_r0x000100472344;
  }
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar18);
code_r0x000100472700:
  param_4 = &UNK_10b21a000;
code_r0x000100472704:
  param_4 = param_4 + 0x2d0;
code_r0x000100472708:
  pppppppuVar15 = &ppppppuStack_270;
code_r0x00010047270c:
  pppppppuVar15 = (ulong *******)FUN_107c05dcc(pppppppuVar15,&pppppppuStack_a8,param_4);
code_r0x000100472714:
  pppppppuVar19 = (ulong *******)0x6e;
code_r0x000100472718:
  pppppppuVar19 = (ulong *******)((ulong)pppppppuVar19 | 0x8000000000000000);
code_r0x00010047271c:
  *(ulong ********)param_2 = pppppppuVar19;
  *(ulong ********)((long)param_2 + 8) = pppppppuVar15;
LAB_100472720:
code_r0x000100472724:
code_r0x000100472728:
code_r0x00010047272c:
code_r0x000100472730:
code_r0x000100472734:
code_r0x000100472738:
code_r0x00010047273c:
  return;
}

