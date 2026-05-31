
/* WARNING: Type propagation algorithm not settling */

void FUN_1004340a8(undefined1 param_1 [16],char *param_2,uint *******param_3,undefined *param_4)

{
  uint ******ppppppuVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  uint ******ppppppuVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar7;
  uint *******pppppppuVar8;
  undefined8 uVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint *******extraout_x1;
  byte bVar12;
  uint *******pppppppuVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  ulong uVar19;
  uint *******in_x12;
  uint *******unaff_x19;
  uint *******unaff_x20;
  undefined8 *puVar20;
  uint *******unaff_x21;
  undefined8 *puVar21;
  uint *******unaff_x22;
  uint *******unaff_x23;
  uint *******pppppppuVar22;
  uint *******unaff_x24;
  long lVar23;
  uint *******unaff_x25;
  uint *******unaff_x26;
  uint *******pppppppuVar24;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  undefined *unaff_x30;
  uint *******pppppppuVar26;
  uint ******ppppppuStack_2e0;
  uint *******in_stack_fffffffffffffd28;
  uint *******pppppppuStack_2d0;
  uint *******pppppppuStack_2c8;
  uint *******pppppppuStack_2c0;
  uint *******pppppppuStack_2b8;
  uint *******pppppppuStack_2b0;
  uint *******pppppppuStack_2a8;
  uint *******pppppppuStack_2a0;
  uint *******pppppppuStack_290;
  uint *******pppppppuStack_288;
  uint *******pppppppuStack_280;
  uint ******ppppppuStack_270;
  uint *******pppppppuStack_268;
  uint *******pppppppuStack_260;
  uint ******ppppppuStack_258;
  uint ******ppppppuStack_250;
  uint ******ppppppuStack_248;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  uint ******ppppppuStack_78;
  
  ppppppuVar11 = param_1._8_8_;
  pppppppuVar26 = param_1._0_8_;
  ppppppuVar6 = (uint ******)&ppppppuStack_2e0;
  pppppppuVar22 = (uint *******)&uStack_90;
  bVar12 = *(byte *)param_3;
  pppppppuVar13 = (uint *******)(ulong)bVar12;
  pppppppuVar17 = (uint *******)&UNK_108c98a32;
  uVar19 = (ulong)*(ushort *)(&UNK_108c98a32 + (long)pppppppuVar13 * 2);
  pppppppuVar18 = (uint *******)(&UNK_1004340ec + uVar19 * 4);
  ppppppuVar10 = (uint ******)&ppppppuStack_2e0;
  pppppppuVar8 = (uint *******)param_2;
  pppppppuVar24 = (uint *******)param_2;
  puVar25 = &stack0xfffffffffffffff0;
  switch(bVar12) {
  case 0:
  case 0x50:
  case 0x66:
  case 0x8b:
    bVar12 = *(byte *)((long)param_3 + 1);
  case 0x26:
    ppppppuStack_270 = (uint ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar12) << 8);
code_r0x000100434864:
    ppppppuStack_270 = (uint ******)((ulong)ppppppuStack_270 & 0xffffffffffffff00);
code_r0x000100434868:
    goto code_r0x0001004348bc;
  case 1:
    pppppppuStack_268 = (uint *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0x85:
  case 0xfb:
code_r0x000100434874:
    bVar12 = 1;
    break;
  case 2:
    pppppppuStack_268 = (uint *******)(ulong)*(ushort *)((long)param_3 + 2);
    goto code_r0x000100434874;
  case 3:
  case 0xfe:
    pppppppuVar13 = (uint *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x30:
    pppppppuStack_268 = pppppppuVar13;
    goto code_r0x000100434874;
  case 4:
  case 0x3c:
    pppppppuStack_268 = (uint *******)param_3[1];
    goto code_r0x000100434874;
  case 5:
    pppppppuVar13 = (uint *******)(long)*(char *)((long)param_3 + 1);
  case 0x35:
  case 0xf4:
    pppppppuStack_268 = pppppppuVar13;
    goto code_r0x0001004348b4;
  case 6:
  case 0x3b:
    pppppppuVar13 = (uint *******)(long)*(short *)((long)param_3 + 2);
  case 0xf5:
    pppppppuStack_268 = pppppppuVar13;
code_r0x0001004348b4:
    bVar12 = 2;
    break;
  case 7:
  case 0x52:
  case 0x68:
  case 0x87:
    pppppppuVar13 = (uint *******)(long)(int)*(uint *)((long)param_3 + 4);
  case 0x38:
    pppppppuStack_268 = pppppppuVar13;
    goto code_r0x0001004348b4;
  case 8:
  case 0x33:
  case 0x46:
  case 0x5c:
    pppppppuStack_268 = (uint *******)param_3[1];
    goto code_r0x0001004348b4;
  case 9:
  case 0x37:
    pppppppuVar26 = (uint *******)(double)*(float *)((long)param_3 + 4);
  case 0x8d:
  case 0xf9:
code_r0x0001004348a0:
    pppppppuStack_268 = pppppppuVar26;
code_r0x0001004348a4:
    bVar12 = 3;
code_r0x0001004348a8:
    break;
  case 10:
  case 0x8a:
    pppppppuVar26 = (uint *******)param_3[1];
    goto code_r0x0001004348a0;
  case 0xb:
  case 0x8f:
    ppppppuVar10 = (uint ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffc0,&stack0xffffffffffffffdf,
                                       &UNK_10b21c350);
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint *******)((long)param_2 + 8) = ppppppuVar10;
    return;
  case 0xc:
  case 0x3a:
  case 0x88:
    param_3 = param_3 + 1;
  case 0x90:
    ppppppuVar10 = (uint ******)&stack0xffffffffffffffa0;
    pppppppuVar22 = unaff_x19;
    puVar25 = unaff_x29;
code_r0x00010043481c:
    *(uint ********)((long)ppppppuVar10 + 0x30) = unaff_x22;
    *(uint ********)((long)ppppppuVar10 + 0x38) = unaff_x21;
    *(uint ********)((long)ppppppuVar10 + 0x40) = unaff_x20;
    *(uint ********)((long)ppppppuVar10 + 0x48) = pppppppuVar22;
    *(undefined1 **)((long)ppppppuVar10 + 0x50) = puVar25;
    *(undefined **)((long)ppppppuVar10 + 0x58) = unaff_x30;
    ppppppuVar11 = param_3[1];
    ppppppuVar1 = param_3[2];
    *(uint *******)((long)ppppppuVar10 + 0x18) = ppppppuVar11;
    *(uint *******)((long)ppppppuVar10 + 0x20) = ppppppuVar1;
    *(undefined1 *)((long)ppppppuVar10 + 0x10) = 5;
    ppppppuVar10 = (uint ******)
                   func_0x000108a4a50c((undefined1 *)((long)ppppppuVar10 + 0x10),
                                       (undefined1 *)((long)ppppppuVar10 + 0x2f),&UNK_10b21c350);
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint *******)((long)param_2 + 8) = ppppppuVar10;
    if (*param_3 != (uint ******)0x0) {
      _free(ppppppuVar11);
    }
    return;
  case 0xd:
  case 0x4d:
  case 99:
  case 0x89:
    pppppppuStack_268 = (uint *******)param_3[1];
    pppppppuStack_260 = (uint *******)param_3[2];
  case 0x2e:
  case 0x91:
    bVar12 = 5;
code_r0x000100434890:
    break;
  case 0xe:
  case 0x94:
    param_3 = param_3 + 1;
  case 0x92:
  case 0xd8:
    ppppppuVar10 = param_3[1];
    ppppppuVar11 = (uint ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b21c350);
    *(uint *******)param_2 = (uint ******)0x800000000000006e;
    *(uint *******)((long)param_2 + 8) = ppppppuVar11;
    if (*param_3 != (uint ******)0x0) {
      _free(ppppppuVar10);
    }
    return;
  case 0xf:
  case 0x86:
    pppppppuStack_268 = (uint *******)param_3[1];
    pppppppuStack_260 = (uint *******)param_3[2];
  case 0x93:
  case 0xf6:
    bVar12 = 6;
    break;
  case 0x10:
    bVar12 = 8;
    break;
  default:
    ppppppuVar10 = param_3[1];
    pppppppuStack_268 = (uint *******)ppppppuVar10[1];
    ppppppuStack_270 = (uint ******)*ppppppuVar10;
    ppppppuStack_258 = (uint ******)ppppppuVar10[3];
    pppppppuStack_260 = (uint *******)ppppppuVar10[2];
    func_0x000107c04868(param_2,&ppppppuStack_270);
    goto code_r0x000100434514;
  case 0x12:
  case 0x25:
  case 0xea:
    bVar12 = 7;
  case 0x45:
  case 0x5b:
  case 0xbb:
    break;
  case 0x13:
  case 0x3f:
  case 0x97:
    ppppppuVar10 = param_3[1];
    pppppppuStack_268 = (uint *******)ppppppuVar10[1];
    ppppppuStack_270 = (uint ******)*ppppppuVar10;
    ppppppuStack_258 = (uint ******)ppppppuVar10[3];
    pppppppuStack_260 = (uint *******)ppppppuVar10[2];
    param_3 = &ppppppuStack_270;
  case 0x55:
  case 0x6b:
    func_0x000107c05290(param_2,param_3);
code_r0x000100434514:
code_r0x000100434530:
code_r0x000107c06034:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)();
    return;
  case 0x14:
  case 0x40:
  case 0x98:
    unaff_x23 = (uint *******)param_3[1];
    unaff_x20 = (uint *******)param_3[2];
    unaff_x26 = (uint *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2a0 = (uint *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
  case 0x56:
  case 0x6c:
    if (unaff_x26 == (uint *******)0x0) {
code_r0x00010043456c:
      param_3 = (uint *******)&UNK_10b22f738;
code_r0x000100434574:
      pppppppuStack_a0 = (uint *******)thunk_FUN_1087e422c(0,param_3,&UNK_10b20a590);
code_r0x000100434588:
      *(uint *******)param_2 = (uint ******)0x800000000000006e;
      *(uint ********)((long)param_2 + 8) = pppppppuStack_a0;
code_r0x000100434594:
      lVar23 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar23 = lVar23 + -1, lVar23 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (uint *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100434558:
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2b8 = unaff_x21;
      bVar12 = *(byte *)unaff_x20;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x00010043456c;
code_r0x0001004345d0:
      uStack_90._0_1_ = bVar12;
      uVar9 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar9;
      uStack_90._2_6_ = (undefined6)((ulong)uVar9 >> 8);
      uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (uint *******)0x1;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (uint *******)0x8000000000000001) goto code_r0x000100434588;
      bVar7 = unaff_x26 == (uint *******)0x1;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x26 = pppppppuStack_98;
      if (bVar7) {
code_r0x000100434628:
        ppppppuVar10 = (uint ******)thunk_FUN_1087e422c(1,&UNK_10b22f738,&UNK_10b20a590);
        *(uint *******)param_2 = (uint ******)0x800000000000006e;
        *(uint *******)((long)param_2 + 8) = ppppppuVar10;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x000100434654:
          _free(unaff_x22);
code_r0x00010043465c:
        }
        goto code_r0x000100434594;
      }
code_r0x000100434614:
      unaff_x21 = unaff_x20 + 8;
      bVar12 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar12 == 0x16) goto code_r0x000100434628;
code_r0x000100434904:
      ppppppuVar11 = *(uint *******)((long)unaff_x20 + 0x29);
      pppppppuVar26 = *(uint ********)((long)unaff_x20 + 0x21);
code_r0x000100434908:
      uStack_87 = SUB87(ppppppuVar11,0);
      uStack_90._1_1_ = (char)pppppppuVar26;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar26 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar26 >> 0x38);
code_r0x00010043490c:
      ppppppuVar11 = unaff_x20[7];
      pppppppuVar26 = (uint *******)unaff_x20[6];
code_r0x000100434910:
      uStack_80 = SUB81(pppppppuVar26,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar26 >> 8);
      ppppppuStack_78 = ppppppuVar11;
code_r0x000100434914:
      pppppppuVar17 = (uint *******)0x2;
code_r0x000100434918:
      pppppppuStack_2a0 = pppppppuVar17;
code_r0x00010043491c:
      uStack_90._0_1_ = bVar12;
code_r0x000100434920:
      pppppppuVar8 = (uint *******)&pppppppuStack_a8;
code_r0x000100434924:
      param_3 = (uint *******)&uStack_90;
code_r0x000100434928:
      func_0x0001013d74b4(pppppppuVar8,param_3);
code_r0x00010043492c:
      pppppppuVar13 = (uint *******)((ulong)pppppppuStack_a8 & 0xff);
code_r0x000100434930:
      pppppppuVar8 = pppppppuStack_a0;
      if (((ulong)pppppppuVar13 & 1) != 0) {
code_r0x000100434938:
        pppppppuVar13 = (uint *******)0x6e;
code_r0x00010043493c:
        pppppppuVar13 = (uint *******)((ulong)pppppppuVar13 | 0x8000000000000000);
code_r0x000100434940:
        *(uint ********)param_2 = pppppppuVar13;
        *(uint ********)((long)param_2 + 8) = pppppppuVar8;
code_r0x000100434944:
        in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x000100434948:
        if (!(bool)in_ZR) {
code_r0x00010043494c:
          goto code_r0x000100434654;
        }
        goto code_r0x000100434594;
      }
code_r0x000100434950:
      bVar12 = (byte)((ulong)pppppppuStack_a8 >> 8);
code_r0x000100434954:
      pppppppuVar17 = (uint *******)0x800000000000000f;
code_r0x000100434958:
      *(uint ********)param_2 = pppppppuVar17;
      *(uint ********)((long)param_2 + 8) = unaff_x25;
code_r0x00010043495c:
      *(uint ********)((long)param_2 + 0x10) = unaff_x22;
      *(uint ********)((long)param_2 + 0x18) = unaff_x26;
code_r0x000100434960:
      *(byte *)((long)param_2 + 0x20) = bVar12;
code_r0x000100434964:
      pppppppuVar8 = &ppppppuStack_270;
code_r0x000100434968:
      param_3 = (uint *******)param_2;
code_r0x00010043496c:
      param_4 = (undefined *)0x1c0;
code_r0x000100434970:
      _memcpy(pppppppuVar8,param_3,param_4);
      pppppppuVar8 = (uint *******)FUN_100fbc738(&pppppppuStack_2c0);
code_r0x00010043497c:
      if (pppppppuVar8 != (uint *******)0x0) {
code_r0x000100434980:
        pppppppuVar13 = (uint *******)0x6e;
code_r0x000100434984:
        pppppppuVar13 = (uint *******)((ulong)pppppppuVar13 | 0x8000000000000000);
code_r0x000100434988:
        *(uint ********)param_2 = pppppppuVar13;
        *(uint ********)((long)param_2 + 8) = pppppppuVar8;
code_r0x00010043498c:
        param_2 = (char *)&ppppppuStack_270;
code_r0x000100434990:
        FUN_100e44f40(param_2);
      }
    }
    goto LAB_1004348dc;
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
    pppppppuStack_290 = (uint *******)param_3[1];
    pppppppuStack_2a0 = (uint *******)param_3[2];
    ppppppuVar10 = param_3[3];
    pppppppuStack_288 = pppppppuStack_2a0 + (long)ppppppuVar10 * 8;
    pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (uint *******)0x0;
    pppppppuStack_2d0 = (uint *******)param_2;
    if (ppppppuVar10 != (uint ******)0x0) {
      unaff_x23 = (uint *******)0x0;
      unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
      pppppppuVar8 = (uint *******)((ulong)&pppppppuStack_2c0 | 1);
      in_stack_fffffffffffffd28 = (uint *******)(((long)ppppppuVar10 * 0x40 - 0x40U >> 6) + 1);
      unaff_x21 = (uint *******)0x2;
      unaff_x22 = (uint *******)0x8000000000000001;
      unaff_x26 = pppppppuStack_288;
      unaff_x25 = pppppppuStack_2a0;
      do {
        unaff_x24 = unaff_x25 + 8;
        bVar12 = (byte)unaff_x21;
        bVar2 = *(byte *)unaff_x25;
        pppppppuVar17 = (uint *******)(ulong)bVar2;
        if (bVar2 == 0x16) goto code_r0x000100434668;
        ppppppuVar10 = unaff_x25[2];
        *(uint *******)((long)unaff_x28 + 0x17) = unaff_x25[3];
        *(uint *******)((long)unaff_x28 + 0xf) = ppppppuVar10;
        ppppppuVar11 = *(uint *******)((long)unaff_x25 + 9);
        pppppppuVar26 = *(uint ********)((long)unaff_x25 + 1);
        uStack_90._0_1_ = bVar2;
code_r0x0001004341a8:
        unaff_x28[1] = ppppppuVar11;
        *unaff_x28 = pppppppuVar26;
        pppppppuStack_2b8 = (uint *******)unaff_x25[5];
        pppppppuStack_2c0 = (uint *******)unaff_x25[4];
        pppppppuStack_2a8 = (uint *******)unaff_x25[7];
        pppppppuStack_2b0 = (uint *******)unaff_x25[6];
        pppppppuVar13 = (uint *******)CONCAT71(uStack_87,uStack_88);
        param_2 = (char *)CONCAT71(uStack_7f,uStack_80);
        uVar14 = (uint)pppppppuVar17;
        pppppppuVar17 = unaff_x24;
        if (uVar14 < 0xd) {
          if (uVar14 == 1) {
            iVar16 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar16 = 2;
            }
            iVar15 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar15 = iVar16;
            }
          }
          else {
            if (uVar14 != 4) {
              if (uVar14 == 0xc) {
                if (ppppppuStack_78 == (uint ******)0x6) {
                  iVar15 = 1;
                  if (*(uint *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                    iVar15 = 2;
                  }
                }
                else if (ppppppuStack_78 == (uint ******)0x2) {
code_r0x0001004341ec:
                  iVar15 = 2;
                  pppppppuVar17 = unaff_x24;
                  if (*(short *)param_2 == 0x6469) {
                    iVar15 = 0;
                  }
                }
                else {
                  iVar15 = 2;
                }
                goto joined_r0x00010043432c;
              }
code_r0x000100434a90:
              pppppppuStack_280 = (uint *******)((long)unaff_x23 + 1);
              param_2 = (char *)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b20d7e0);
              goto LAB_10043475c;
            }
            iVar16 = 1;
            if (pppppppuVar13 != (uint *******)0x1) {
              iVar16 = 2;
            }
            iVar15 = 0;
            if (pppppppuVar13 != (uint *******)0x0) {
              iVar15 = iVar16;
            }
          }
code_r0x0001004343ec:
          FUN_100e077ec(&uStack_90);
          pppppppuVar17 = unaff_x24;
          unaff_x24 = unaff_x26;
        }
        else {
          if (uVar14 == 0xd) {
            if ((uint *******)param_2 == (uint *******)0x6) {
              pppppppuVar17 = (uint *******)(ulong)(*(uint *)pppppppuVar13 ^ 0x61726170);
              pppppppuVar13 = (uint *******)(ulong)*(ushort *)((long)pppppppuVar13 + 4);
              pppppppuVar18 = (uint *******)0x736d;
code_r0x0001004343d8:
              iVar15 = 1;
              if ((int)pppppppuVar17 != 0 || (int)pppppppuVar13 != (int)pppppppuVar18) {
                iVar15 = 2;
              }
            }
            else {
              if ((uint *******)param_2 != (uint *******)0x2) goto code_r0x0001004343b8;
              iVar15 = 2;
              if (*(short *)pppppppuVar13 == 0x6469) {
                iVar15 = 0;
              }
            }
            goto code_r0x0001004343ec;
          }
          if (uVar14 != 0xe) {
            if (uVar14 != 0xf) goto code_r0x000100434a90;
            if ((uint *******)param_2 == (uint *******)0x6) {
              if (((*(char *)pppppppuVar13 == 'p') && (*(char *)((long)pppppppuVar13 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar13 + 2) == 'r')) {
                in_ZR = *(char *)((long)pppppppuVar13 + 3) == 'a';
code_r0x000100434394:
                if ((((bool)in_ZR) && (*(char *)((long)pppppppuVar13 + 4) == 'm')) &&
                   (*(char *)((long)pppppppuVar13 + 5) == 's')) {
                  iVar15 = 1;
                  goto code_r0x0001004343ec;
                }
              }
            }
            else if ((((uint *******)param_2 == (uint *******)0x2) &&
                     (*(char *)pppppppuVar13 == 'i')) && (*(char *)((long)pppppppuVar13 + 1) == 'd')
                    ) {
              iVar15 = 0;
              goto code_r0x0001004343ec;
            }
code_r0x0001004343b8:
            iVar15 = 2;
            goto code_r0x0001004343ec;
          }
          if (ppppppuStack_78 == (uint ******)0x6) {
            if (((((*param_2 != 'p') || (*(char *)((long)param_2 + 1) != 'a')) ||
                 (*(char *)((long)param_2 + 2) != 'r')) ||
                ((*(char *)((long)param_2 + 3) != 'a' || (*(char *)((long)param_2 + 4) != 'm')))) ||
               (*(char *)((long)param_2 + 5) != 's')) goto code_r0x000100434328;
            iVar15 = 1;
          }
          else if (((ppppppuStack_78 == (uint ******)0x2) && (*param_2 == 'i')) &&
                  (*(char *)((long)param_2 + 1) == 'd')) {
            iVar15 = 0;
          }
          else {
code_r0x000100434328:
            iVar15 = 2;
          }
joined_r0x00010043432c:
          unaff_x24 = unaff_x26;
          if (pppppppuVar13 != (uint *******)0x0) {
            _free();
          }
        }
        bVar12 = (byte)pppppppuStack_2c0;
        if (iVar15 == 0) {
          if (unaff_x22 != (uint *******)0x8000000000000001) goto code_r0x0001004349c0;
          pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar12 == 0x16) {
            pppppppuVar13 = (uint *******)((long)unaff_x23 + 1);
            goto code_r0x000100434a68;
          }
          ppppppuVar10 = *pppppppuVar8;
          unaff_x28[1] = pppppppuVar8[1];
          *unaff_x28 = ppppppuVar10;
          uVar9 = *(undefined8 *)((long)pppppppuVar8 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar8 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar9;
          uStack_90._0_1_ = bVar12;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          unaff_x20 = pppppppuStack_a0;
          if (pppppppuStack_a8 == (uint *******)0x8000000000000001) {
            pppppppuStack_280 = (uint *******)((long)unaff_x23 + 1);
            pppppppuVar22 = (uint *******)&pppppppuStack_2c0;
            pppppppuVar8 = pppppppuStack_2d0;
            goto code_r0x0001004346bc;
          }
          pppppppuStack_2c8 = pppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
        }
        else if (iVar15 == 1) {
          if ((int)unaff_x21 != 2) goto code_r0x000100434a1c;
          pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar12 == 0x16) goto code_r0x000100434998;
          ppppppuVar10 = *pppppppuVar8;
          unaff_x28[1] = pppppppuVar8[1];
          *unaff_x28 = ppppppuVar10;
          uVar9 = *(undefined8 *)((long)pppppppuVar8 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar8 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar9;
          uStack_90._0_1_ = bVar12;
          func_0x0001013d74b4(&pppppppuStack_a8,&uStack_90);
          if ((char)pppppppuStack_a8 == '\x01') {
            pppppppuStack_280 = (uint *******)((long)unaff_x23 + 1);
            goto code_r0x000100434750;
          }
          unaff_x21 = (uint *******)((ulong)pppppppuStack_a8 >> 8 & 0xff);
        }
        else {
          pppppppuStack_2c0 = (uint *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar12 == 0x16) goto code_r0x000100434998;
          ppppppuVar10 = *pppppppuVar8;
          unaff_x28[1] = pppppppuVar8[1];
          *unaff_x28 = ppppppuVar10;
          uVar9 = *(undefined8 *)((long)pppppppuVar8 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar8 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar9;
          uStack_90._0_1_ = bVar12;
          FUN_100e077ec(&uStack_90);
        }
        pppppppuVar22 = unaff_x25 + 8;
        unaff_x23 = (uint *******)((long)unaff_x23 + 1);
        unaff_x26 = unaff_x24;
        unaff_x25 = pppppppuVar17;
      } while (pppppppuVar22 != unaff_x24);
      goto code_r0x000100434664;
    }
    goto code_r0x000100434684;
  case 0x16:
    goto code_r0x00010043491c;
  case 0x17:
    goto code_r0x00010043492c;
  case 0x18:
  case 0x36:
  case 0xec:
    goto code_r0x0001004348f4;
  case 0x19:
    goto code_r0x00010043490c;
  case 0x1a:
  case 0xf3:
    break;
  case 0x1b:
    goto code_r0x00010043493c;
  case 0x1c:
  case 0x3e:
  case 0xe8:
    goto code_r0x000100434954;
  case 0x1d:
    goto code_r0x000100434914;
  case 0x1e:
  case 0xbf:
    goto code_r0x00010043496c;
  case 0x1f:
  case 0x44:
  case 0x5a:
  case 0xfc:
    goto code_r0x0001004348e8;
  case 0x20:
    goto code_r0x00010043495c;
  case 0x21:
    goto code_r0x000100434890;
  case 0x22:
    goto code_r0x0001004348c0;
  case 0x23:
    goto code_r0x000100434944;
  case 0x24:
    goto code_r0x000100434868;
  case 0x28:
  case 0xdf:
    goto code_r0x0001004349a0;
  case 0x29:
    goto code_r0x000100434514;
  case 0x2a:
    goto code_r0x000100434558;
  case 0x2c:
  case 0x4e:
  case 100:
  case 0x8c:
    goto code_r0x0001004348b4;
  case 0x2d:
    goto code_r0x0001004348c4;
  case 0x2f:
  case 0x8e:
    goto code_r0x0001004348a4;
  case 0x31:
    goto code_r0x0001004348d4;
  case 0x32:
    goto code_r0x0001004348ec;
  case 0x34:
  case 0x96:
    goto code_r0x000100434904;
  case 0x39:
  case 0x4b:
  case 0x61:
    goto LAB_1004348dc;
  case 0x42:
  case 0x58:
  case 0x7e:
    goto code_r0x000100434910;
  case 0x43:
  case 0x59:
    goto code_r0x000100434920;
  case 0x47:
  case 0x5d:
  case 0xbc:
    goto code_r0x000100434930;
  case 0x48:
  case 0x5e:
    goto code_r0x000100434948;
  case 0x49:
  case 0x5f:
    goto code_r0x000100434908;
  case 0x4a:
  case 0x60:
    goto code_r0x000100434960;
  case 0x4c:
  case 0x62:
    goto code_r0x000100434950;
  case 0x4f:
  case 0x65:
    goto code_r0x000100434938;
  case 0x51:
  case 0x67:
    goto code_r0x0001004348f0;
  case 0x54:
  case 0x6a:
  case 0xdc:
    goto code_r0x0001004349b0;
  case 0x6e:
  case 0xba:
    goto code_r0x0001004349cc;
  case 0x6f:
  case 0xb8:
    goto code_r0x0001004349dc;
  case 0x70:
    goto code_r0x0001004349a4;
  case 0x71:
    goto code_r0x0001004349bc;
  case 0x72:
    goto code_r0x000100434968;
  case 0x73:
    goto FUN_1004349ec;
  case 0x74:
    goto code_r0x000100434a04;
  case 0x75:
  case 0xb6:
    goto code_r0x0001004349c4;
  case 0x76:
code_r0x000100434a1c:
    pppppppuStack_280 = (uint *******)((long)unaff_x23 + 1);
    pppppppuVar13 = (uint *******)&UNK_108cb9000;
  case 0xc2:
    pppppppuStack_a8 = (uint *******)((long)pppppppuVar13 + 0x606);
    pppppppuStack_a0 = (uint *******)0x6;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = s_duplicate_field_____108ac2973;
code_r0x000100434a50:
    param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_90);
    goto LAB_10043475c;
  case 0x77:
code_r0x000100434998:
    pppppppuVar13 = (uint *******)((long)unaff_x23 + 1);
  case 0xb1:
code_r0x0001004349a0:
    pppppppuStack_280 = pppppppuVar13;
code_r0x0001004349a4:
    param_2 = &UNK_108ca1000;
code_r0x0001004349a8:
    param_2 = (char *)((long)param_2 + 0xa98);
code_r0x0001004349ac:
    param_4 = &UNK_10b24f000;
code_r0x0001004349b0:
    param_4 = param_4 + 0x848;
code_r0x0001004349b4:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x0001004349bc:
code_r0x000100434a8c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100434a90);
    (*pcVar5)();
  case 0x78:
    goto code_r0x000100434a0c;
  case 0x79:
    goto code_r0x000100434940;
  case 0x7a:
    goto code_r0x000100434970;
  case 0x7b:
    goto code_r0x0001004349f4;
  case 0x7c:
    goto code_r0x000100434918;
  case 0x7d:
  case 0xb5:
    goto code_r0x0001004349ac;
  case 0x80:
code_r0x000100434a68:
    pppppppuStack_280 = pppppppuVar13;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x000100434a8c;
  case 0x81:
    goto code_r0x0001004345d0;
  case 0x82:
    goto code_r0x000100434614;
  case 0x84:
    goto code_r0x000100434864;
  case 0x9a:
    goto code_r0x000100434bcc;
  case 0x9b:
    goto code_r0x000100434bdc;
  case 0x9c:
    goto code_r0x000100434ba4;
  case 0x9d:
    goto code_r0x000100434bbc;
  case 0x9e:
    while (unaff_x24 = (uint *******)((long)unaff_x24 + -1), unaff_x24 != (uint *******)0x0) {
code_r0x000100434b70:
      unaff_x21 = unaff_x22 + 4;
      FUN_100e077ec(unaff_x22);
      unaff_x22 = unaff_x21;
    }
    if (unaff_x23 != (uint *******)0x0) {
      _free();
      __Unwind_Resume(pppppppuVar22);
      goto code_r0x000100434b98;
    }
    goto code_r0x000100434bc4;
  case 0x9f:
    goto code_r0x000100434bec;
  case 0xa0:
    goto code_r0x000100434c04;
  case 0xa1:
    goto code_r0x000100434bc4;
  case 0xa2:
    ppppppuStack_248 = unaff_x20[3];
    ppppppuStack_250 = unaff_x20[2];
    pppppppuStack_260 = pppppppuVar26;
    ppppppuStack_258 = ppppppuVar11;
    func_0x000107c04724();
    goto code_r0x000107c06034;
  case 0xa3:
code_r0x000100434b98:
    pppppppuVar22 = (uint *******)FUN_107c05ccc();
    goto code_r0x000100434ba0;
  case 0xa4:
    goto code_r0x000100434c0c;
  case 0xa5:
    _free();
    pppppppuVar22 = (uint *******)__Unwind_Resume(pppppppuVar22);
    pppppppuStack_280 = (uint *******)((long)unaff_x23 + 1);
code_r0x000100434ba0:
    pppppppuVar13 = (uint *******)0x2;
code_r0x000100434ba4:
    in_OV = SBORROW8((long)unaff_x22,(ulong)pppppppuVar13 | 0x8000000000000000);
    in_NG = (long)((long)unaff_x22 - ((ulong)pppppppuVar13 | 0x8000000000000000)) < 0;
code_r0x000100434bac:
    if ((in_NG == in_OV) && (unaff_x22 != (uint *******)0x0)) {
      _free();
    }
code_r0x000100434bbc:
    FUN_100e7b998(&pppppppuStack_2c0);
    goto code_r0x000100434bc4;
  case 0xa6:
    goto code_r0x000100434b70;
  case 0xa7:
    goto code_r0x000100434bf4;
  case 0xa8:
    goto code_r0x000100434b18;
  case 0xa9:
    goto code_r0x000100434bac;
  case 0xaa:
    pppppppuVar22 = (uint *******)FUN_107c05ccc();
code_r0x000100434b18:
    FUN_100e81e80(&pppppppuStack_2c0);
code_r0x000100434bc4:
    __Unwind_Resume(pppppppuVar22);
code_r0x000100434bcc:
    unaff_x30 = &DAT_100434bd0;
    FUN_107c05ccc();
    ppppppuVar6 = (uint ******)&stack0xfffffffffffffcc0;
    param_3 = extraout_x1;
code_r0x000100434bdc:
    *(uint ********)((long)ppppppuVar6 + 0x30) = unaff_x22;
    *(uint ********)((long)ppppppuVar6 + 0x38) = unaff_x21;
    *(uint ********)((long)ppppppuVar6 + 0x40) = unaff_x20;
    *(uint ********)((long)ppppppuVar6 + 0x48) = pppppppuVar22;
    *(undefined1 **)((long)ppppppuVar6 + 0x50) = &stack0xfffffffffffffff0;
    *(undefined **)((long)ppppppuVar6 + 0x58) = unaff_x30;
code_r0x000100434bec:
code_r0x000100434bf4:
    pppppppuVar13 = (uint *******)(ulong)*(byte *)param_3;
    pppppppuVar17 = (uint *******)&UNK_108c98a5e;
code_r0x000100434c04:
    pppppppuVar18 = (uint *******)&UNK_100434c14;
    uVar19 = (ulong)*(ushort *)((long)pppppppuVar17 + (long)pppppppuVar13 * 2);
code_r0x000100434c0c:
                    /* WARNING: Could not recover jumptable at 0x000100434c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)pppppppuVar18 + uVar19 * 4))();
    return;
  case 0xac:
    pppppppuStack_2b0 = (uint *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
    ppppppuStack_270 = (uint ******)0x0;
    pppppppuStack_290 = pppppppuVar13;
    pppppppuStack_288 = pppppppuVar13;
    pppppppuStack_280 = pppppppuVar18;
    if (uVar19 == 0) {
      pppppppuVar17 = (uint *******)0x8000000000000000;
      pppppppuStack_c0 = (uint *******)0x8000000000000000;
      pppppppuStack_2c8 = unaff_x21;
code_r0x0001004351ec:
      pppppppuStack_a8 = (uint *******)&UNK_108ca26b0;
      pppppppuStack_a0 = (uint *******)0x2;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      pppppppuVar22 = (uint *******)0x8000000000000001;
      pppppppuVar13 = (uint *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
LAB_100435220:
      *unaff_x28 = 0x800000000000006e;
      unaff_x28[1] = pppppppuVar13;
      pppppppuVar8 = pppppppuStack_2c0;
      if (pppppppuVar17 != (uint *******)0x8000000000000000) {
joined_r0x0001004355b4:
        if (unaff_x25 != (uint *******)0x0) {
          pppppppuVar13 = pppppppuStack_2c8 + 1;
          do {
            if (pppppppuVar13[-1] != (uint ******)0x0) {
              _free(*pppppppuVar13);
            }
            pppppppuVar13 = pppppppuVar13 + 3;
            unaff_x25 = (uint *******)((long)unaff_x25 + -1);
          } while (unaff_x25 != (uint *******)0x0);
        }
        if (pppppppuVar17 != (uint *******)0x0) {
          _free(pppppppuStack_2c8);
        }
      }
LAB_1004355c4:
      if ((long)pppppppuVar22 < -0x7ffffffffffffffe) goto LAB_1004355e0;
    }
    else {
      ppppppuVar10 = (uint ******)0x0;
      puVar21 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar20 = (undefined8 *)((ulong)unaff_x24 | 1);
      ppppppuStack_2e0 = (uint ******)0x4232628;
      pppppppuVar17 = (uint *******)0x8000000000000000;
      pppppppuVar22 = (uint *******)0x8000000000000001;
      pppppppuVar8 = (uint *******)0x8000000000000000;
      pppppppuStack_2b8 = in_x12;
      do {
        pppppppuVar26 = pppppppuVar13 + 8;
        bVar12 = *(byte *)pppppppuVar13;
        pppppppuVar18 = pppppppuStack_2b8;
        ppppppuVar11 = ppppppuVar10;
        pppppppuVar24 = pppppppuVar26;
        if (bVar12 == 0x16) break;
        ppppppuVar11 = pppppppuVar13[2];
        *(uint *******)((long)puVar21 + 0x17) = pppppppuVar13[3];
        *(uint *******)((long)puVar21 + 0xf) = ppppppuVar11;
        uVar9 = *(undefined8 *)((long)pppppppuVar13 + 1);
        puVar21[1] = *(undefined8 *)((long)pppppppuVar13 + 9);
        *puVar21 = uVar9;
        pppppppuStack_2a8 = (uint *******)pppppppuVar13[5];
        pppppppuStack_2b0 = (uint *******)pppppppuVar13[4];
        pppppppuStack_2a0 = (uint *******)pppppppuVar13[6];
        piVar3 = (int *)CONCAT71(uStack_87,uStack_88);
        piVar4 = (int *)CONCAT71(uStack_7f,uStack_80);
        uStack_90._0_1_ = bVar12;
        if (bVar12 < 0xd) {
          if (bVar12 == 1) {
            iVar16 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar16 = 2;
            }
            iVar15 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar15 = iVar16;
            }
          }
          else {
            if (bVar12 != 4) {
              if (bVar12 == 0xc) {
                if (ppppppuStack_78 == (uint ******)0x6) {
                  iVar15 = 1;
                  if (*piVar4 != 0x61726170 || (short)piVar4[1] != 0x736d) {
                    iVar15 = 2;
                  }
                }
                else if (ppppppuStack_78 == (uint ******)0x2) {
                  iVar15 = 2;
                  if ((short)*piVar4 == 0x6469) {
                    iVar15 = 0;
                  }
                }
                else {
                  iVar15 = 2;
                }
                goto joined_r0x000100434e98;
              }
code_r0x000100435714:
              ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
              pppppppuStack_b8 = pppppppuStack_2c8;
              pppppppuStack_288 = pppppppuVar26;
              pppppppuStack_c0 = pppppppuVar8;
              pppppppuVar13 =
                   (uint *******)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b20df60);
              unaff_x24 = (uint *******)&pppppppuStack_2b0;
              goto LAB_100435220;
            }
            iVar16 = 1;
            if (piVar3 != (int *)0x1) {
              iVar16 = 2;
            }
            iVar15 = 0;
            if (piVar3 != (int *)0x0) {
              iVar15 = iVar16;
            }
          }
code_r0x000100434f24:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (bVar12 == 0xd) {
            if (piVar4 == (int *)0x6) {
              iVar15 = 1;
              if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                iVar15 = 2;
              }
            }
            else {
              if (piVar4 != (int *)0x2) goto code_r0x000100434ef0;
              iVar15 = 2;
              if ((short)*piVar3 == 0x6469) {
                iVar15 = 0;
              }
            }
            goto code_r0x000100434f24;
          }
          if (bVar12 != 0xe) {
            if (bVar12 != 0xf) goto code_r0x000100435714;
            if (piVar4 == (int *)0x6) {
              if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
                   (*(char *)((long)piVar3 + 2) != 'r')) ||
                  ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
                 (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x000100434ef0;
              iVar15 = 1;
            }
            else if (((piVar4 == (int *)0x2) && ((char)*piVar3 == 'i')) &&
                    (*(char *)((long)piVar3 + 1) == 'd')) {
              iVar15 = 0;
            }
            else {
code_r0x000100434ef0:
              iVar15 = 2;
            }
            goto code_r0x000100434f24;
          }
          if (ppppppuStack_78 == (uint ******)0x6) {
            if ((((((char)*piVar4 != 'p') || (*(char *)((long)piVar4 + 1) != 'a')) ||
                 (*(char *)((long)piVar4 + 2) != 'r')) ||
                ((*(char *)((long)piVar4 + 3) != 'a' || ((char)piVar4[1] != 'm')))) ||
               (*(char *)((long)piVar4 + 5) != 's')) goto code_r0x000100434e60;
            iVar15 = 1;
          }
          else if (((ppppppuStack_78 == (uint ******)0x2) && ((char)*piVar4 == 'i')) &&
                  (*(char *)((long)piVar4 + 1) == 'd')) {
            iVar15 = 0;
          }
          else {
code_r0x000100434e60:
            iVar15 = 2;
          }
joined_r0x000100434e98:
          if (piVar3 != (int *)0x0) {
            _free();
          }
        }
        bVar12 = (byte)pppppppuStack_2b0;
        if (iVar15 == 0) {
          if (pppppppuVar22 != (uint *******)0x8000000000000001) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            pppppppuStack_b8 = pppppppuStack_2c8;
            pppppppuStack_a8 = (uint *******)&UNK_108ca26b0;
            pppppppuStack_a0 = (uint *******)0x2;
            uStack_90._0_1_ = (byte)&pppppppuStack_a8;
            uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_288 = pppppppuVar26;
            pppppppuStack_c0 = pppppppuVar8;
            pppppppuVar13 =
                 (uint *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            unaff_x24 = (uint *******)&pppppppuStack_2b0;
            goto LAB_100435220;
          }
          pppppppuStack_2b0 = (uint *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
          if (bVar12 == 0x16) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            pppppppuStack_b8 = pppppppuStack_2c8;
            pppppppuStack_288 = pppppppuVar26;
            pppppppuStack_c0 = pppppppuVar8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100435710;
          }
          uVar9 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar9;
          uStack_90._0_1_ = bVar12;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          if (pppppppuStack_a8 == (uint *******)0x8000000000000001) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            pppppppuStack_b8 = pppppppuStack_2c8;
            pppppppuVar22 = (uint *******)0x8000000000000001;
            unaff_x24 = (uint *******)&pppppppuStack_2b0;
            pppppppuVar13 = pppppppuStack_a0;
            pppppppuStack_288 = pppppppuVar26;
            pppppppuStack_c0 = pppppppuVar8;
            goto LAB_100435220;
          }
          pppppppuStack_2c0 = pppppppuStack_a0;
          pppppppuStack_2d0 = pppppppuStack_98;
          pppppppuVar22 = pppppppuStack_a8;
        }
        else if (iVar15 == 1) {
          if (pppppppuVar17 != (uint *******)0x8000000000000000) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            pppppppuStack_b8 = pppppppuStack_2c8;
            pppppppuStack_a8 = (uint *******)&UNK_108cb9606;
            pppppppuStack_a0 = (uint *******)0x6;
            uStack_90._0_1_ = (byte)&pppppppuStack_a8;
            uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_288 = pppppppuVar26;
            pppppppuStack_c0 = pppppppuVar8;
            uVar9 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            unaff_x24 = (uint *******)&pppppppuStack_2b0;
            *unaff_x28 = 0x800000000000006e;
            unaff_x28[1] = uVar9;
            pppppppuVar8 = pppppppuStack_2c0;
            goto joined_r0x0001004355b4;
          }
          pppppppuStack_2b0 = (uint *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
          if (bVar12 == 0x16) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            pppppppuStack_b8 = pppppppuStack_2c8;
            pppppppuStack_288 = pppppppuVar26;
            pppppppuStack_c0 = pppppppuVar8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100435710;
          }
          uVar9 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar9;
          uStack_90._0_1_ = bVar12;
          func_0x00010121b964(&pppppppuStack_a8,&uStack_90);
          if (pppppppuStack_a8 == (uint *******)0x8000000000000000) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            *unaff_x28 = 0x800000000000006e;
            unaff_x28[1] = pppppppuStack_a0;
            unaff_x24 = (uint *******)&pppppppuStack_2b0;
            pppppppuVar8 = pppppppuStack_2c0;
            pppppppuStack_288 = pppppppuVar26;
            goto LAB_1004355c4;
          }
          pppppppuStack_2c8 = pppppppuStack_a0;
          pppppppuVar17 = pppppppuStack_a8;
          pppppppuVar8 = pppppppuStack_a8;
          unaff_x25 = pppppppuStack_98;
        }
        else {
          pppppppuStack_2b0 = (uint *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
          if (bVar12 == 0x16) {
            ppppppuStack_270 = (uint ******)((long)ppppppuVar10 + 1);
            pppppppuStack_b8 = pppppppuStack_2c8;
            pppppppuStack_288 = pppppppuVar26;
            pppppppuStack_c0 = pppppppuVar8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100435710:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100435714);
            (*pcVar5)();
          }
          uVar9 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar9;
          uStack_90._0_1_ = bVar12;
          FUN_100e077ec(&uStack_90);
        }
        ppppppuVar10 = (uint ******)((long)ppppppuVar10 + 1);
        pppppppuVar18 = pppppppuStack_2b8;
        ppppppuVar11 = ppppppuStack_2e0;
        pppppppuVar24 = pppppppuStack_2b8;
        pppppppuVar13 = pppppppuVar26;
      } while (pppppppuVar26 != pppppppuStack_2b8);
      pppppppuStack_b8 = pppppppuStack_2c8;
      pppppppuStack_288 = pppppppuVar24;
      ppppppuStack_270 = ppppppuVar11;
      pppppppuStack_c0 = pppppppuVar8;
      if (pppppppuVar22 == (uint *******)0x8000000000000001) {
        unaff_x24 = (uint *******)&pppppppuStack_2b0;
        goto code_r0x0001004351ec;
      }
      if (pppppppuVar17 != (uint *******)0x8000000000000000) {
        *unaff_x28 = 0x800000000000001d;
        unaff_x28[1] = pppppppuVar17;
        unaff_x28[2] = pppppppuStack_2c8;
        unaff_x28[3] = unaff_x25;
        unaff_x28[4] = pppppppuVar22;
        unaff_x28[5] = pppppppuStack_2c0;
        unaff_x28[6] = pppppppuStack_2d0;
        _memcpy(&pppppppuStack_260,unaff_x28,0x1c0);
        FUN_100d34830(&pppppppuStack_290);
        if (pppppppuVar18 == pppppppuVar24) {
          return;
        }
        uStack_90._0_1_ = (byte)ppppppuVar11;
        uStack_90._1_1_ = (char)((ulong)ppppppuVar11 >> 8);
        uStack_90._2_6_ = (undefined6)((ulong)ppppppuVar11 >> 0x10);
        uVar9 = thunk_FUN_1087e422c(((ulong)((long)pppppppuVar18 - (long)pppppppuVar24) >> 6) +
                                    (long)ppppppuVar11,&uStack_90,&UNK_10b23a190);
        *unaff_x28 = 0x800000000000006e;
        unaff_x28[1] = uVar9;
        FUN_100e44f40(&pppppppuStack_260);
        return;
      }
      pppppppuStack_a8 = (uint *******)&UNK_108cb9606;
      pppppppuStack_a0 = (uint *******)0x6;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      uVar9 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      *unaff_x28 = 0x800000000000006e;
      unaff_x28[1] = uVar9;
      pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 & 0x7fffffffffffffff);
      unaff_x24 = (uint *******)&pppppppuStack_2b0;
      pppppppuVar8 = pppppppuStack_2c0;
    }
    if (pppppppuVar22 != (uint *******)0x0) {
      _free(pppppppuVar8);
    }
LAB_1004355e0:
    FUN_100d34830(unaff_x24 + 4);
    if ((byte)pppppppuStack_2b0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2b0);
    }
    return;
  case 0xad:
    goto code_r0x0001004341a8;
  case 0xae:
    goto code_r0x0001004341ec;
  case 0xb0:
    goto code_r0x00010043498c;
  case 0xb2:
    goto code_r0x000100434964;
  case 0xb3:
  case 0xe5:
    goto code_r0x00010043497c;
  case 0xb4:
    goto code_r0x000100434928;
  case 0xb7:
    goto code_r0x000100434984;
  case 0xb9:
    goto code_r0x000100434958;
  case 0xbd:
    goto code_r0x0001004349b4;
  case 0xbe:
    goto code_r0x0001004348d8;
  case 0xc0:
  case 0xff:
    goto code_r0x0001004348d0;
  case 0xc3:
  case 0xef:
    goto code_r0x000100434530;
  case 0xc4:
  case 0xf0:
    goto code_r0x000100434574;
  case 0xc6:
    goto code_r0x000100434718;
  case 199:
    goto code_r0x000100434728;
  case 200:
code_r0x0001004346f0:
    *(uint ********)param_2 = pppppppuVar17;
    *(uint ********)((long)param_2 + 8) = unaff_x22;
    *(uint ********)((long)param_2 + 0x10) = unaff_x20;
    *(uint ********)((long)param_2 + 0x18) = pppppppuVar18;
  case 0xd5:
    param_3 = (uint *******)param_2;
    *(byte *)(param_3 + 4) = bVar12;
    param_2 = (char *)&ppppppuStack_270;
    param_4 = (undefined *)0x1c0;
    pppppppuVar24 = param_3;
code_r0x000100434708:
    _memcpy(param_2,param_3,param_4);
    pppppppuVar13 = (uint *******)&pppppppuStack_2c0;
code_r0x000100434710:
    FUN_100d34830(pppppppuVar13 + 4);
code_r0x000100434718:
    if (unaff_x26 != unaff_x24) {
      pppppppuVar13 = (uint *******)((ulong)((long)unaff_x26 - (long)unaff_x24) >> 6);
code_r0x000100434728:
      uStack_90._0_1_ = (byte)unaff_x23;
      uStack_90._1_1_ = (char)((ulong)unaff_x23 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)unaff_x23 >> 0x10);
      param_4 = &UNK_10b23a190;
      param_2 = (char *)((long)pppppppuVar13 + (long)unaff_x23);
code_r0x000100434738:
      param_2 = (char *)thunk_FUN_1087e422c(param_2,&uStack_90,param_4);
code_r0x000100434740:
      pppppppuVar8 = (uint *******)param_2;
      param_2 = (char *)pppppppuVar24;
      goto code_r0x000100434980;
    }
    goto LAB_1004348dc;
  case 0xc9:
    goto code_r0x000100434708;
  case 0xca:
    goto code_r0x0001004346b4;
  case 0xcb:
    goto code_r0x000100434738;
  case 0xcc:
code_r0x000100434750:
    param_2 = (char *)pppppppuStack_a0;
    pppppppuVar17 = pppppppuStack_2d0;
  case 0xd0:
    pppppppuStack_2d0 = pppppppuVar17;
LAB_10043475c:
    pppppppuVar22 = (uint *******)&pppppppuStack_2c0;
    *pppppppuStack_2d0 = (uint ******)0x800000000000006e;
    pppppppuStack_2d0[1] = (uint ******)param_2;
code_r0x000100434768:
    if (-0x7fffffffffffffff < (long)unaff_x22) {
joined_r0x000100434a14:
      if (unaff_x22 != (uint *******)0x0) {
        _free(unaff_x20);
      }
    }
    goto LAB_1004346c8;
  case 0xcd:
    goto code_r0x000100434710;
  case 0xce:
    goto code_r0x000100434768;
  case 0xcf:
    goto code_r0x0001004346e4;
  case 0xd1:
    goto code_r0x00010043468c;
  case 0xd2:
    goto code_r0x0001004346bc;
  case 0xd3:
    goto code_r0x000100434740;
  case 0xd4:
code_r0x000100434664:
    unaff_x23 = in_stack_fffffffffffffd28;
    bVar12 = (byte)unaff_x21;
code_r0x000100434668:
    pppppppuStack_280 = unaff_x23;
    if (unaff_x22 != (uint *******)0x8000000000000001) {
      bVar12 = bVar12 & 1;
      pppppppuVar17 = (uint *******)0x800000000000000f;
      pppppppuVar18 = pppppppuStack_2c8;
      param_2 = (char *)pppppppuStack_2d0;
      goto code_r0x0001004346f0;
    }
code_r0x000100434684:
    pppppppuVar22 = (uint *******)&pppppppuStack_2c0;
    pppppppuVar13 = (uint *******)&UNK_108ca26b0;
    pppppppuVar8 = pppppppuStack_2d0;
code_r0x00010043468c:
    pppppppuStack_a0 = (uint *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = s_missing_field_____108ac28f7;
    param_3 = (uint *******)&uStack_90;
    pppppppuStack_a8 = pppppppuVar13;
code_r0x0001004346b4:
    unaff_x20 = (uint *******)thunk_FUN_108856088(param_2,param_3);
code_r0x0001004346bc:
    *pppppppuVar8 = (uint ******)0x800000000000006e;
    pppppppuVar8[1] = (uint ******)unaff_x20;
LAB_1004346c8:
    FUN_100d34830(pppppppuVar22 + 4);
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
code_r0x0001004346e4:
    }
    goto LAB_1004348dc;
  case 0xd6:
    goto code_r0x00010043465c;
  case 0xd9:
    goto code_r0x000100434394;
  case 0xda:
    goto code_r0x0001004343d8;
  case 0xdd:
code_r0x0001004349c0:
    pppppppuVar13 = (uint *******)((long)unaff_x23 + 1);
code_r0x0001004349c4:
    pppppppuStack_280 = pppppppuVar13;
code_r0x0001004349cc:
    pppppppuVar13 = (uint *******)&UNK_108ca2000;
code_r0x0001004349d0:
    pppppppuVar13 = pppppppuVar13 + 0xd6;
    pppppppuVar17 = (uint *******)0x2;
code_r0x0001004349d8:
    pppppppuStack_a8 = pppppppuVar13;
    pppppppuStack_a0 = pppppppuVar17;
code_r0x0001004349dc:
    pppppppuVar13 = (uint *******)&pppppppuStack_a8;
    pppppppuVar17 = (uint *******)&DAT_100c7b3a0;
code_r0x0001004349e8:
    uStack_90._0_1_ = (byte)pppppppuVar13;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar13 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar13 >> 0x10);
    uStack_88 = SUB81(pppppppuVar17,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar17 >> 8);
FUN_1004349ec:
    param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x0001004349f0:
    param_2 = (char *)((long)param_2 + 0x973);
code_r0x0001004349f4:
    param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_90);
    pppppppuVar17 = pppppppuStack_2d0;
code_r0x000100434a00:
    pppppppuVar22 = (uint *******)&pppppppuStack_2c0;
code_r0x000100434a04:
    pppppppuVar13 = (uint *******)0x800000000000006e;
code_r0x000100434a0c:
    *pppppppuVar17 = (uint ******)pppppppuVar13;
    pppppppuVar17[1] = (uint ******)param_2;
    unaff_x22 = (uint *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    goto joined_r0x000100434a14;
  case 0xde:
    goto code_r0x000100434988;
  case 0xe0:
    goto code_r0x00010043494c;
  case 0xe1:
    goto code_r0x0001004349d0;
  case 0xe2:
    goto code_r0x0001004349e8;
  case 0xe3:
    goto code_r0x0001004349a8;
  case 0xe4:
    goto code_r0x000100434a00;
  case 0xe6:
    goto code_r0x0001004349f0;
  case 0xe7:
    goto code_r0x000100434924;
  case 0xe9:
    goto code_r0x0001004349d8;
  case 0xeb:
    goto code_r0x000100434990;
  case 0xee:
    goto code_r0x000100434a50;
  case 0xf2:
    goto code_r0x0001004348a8;
  case 0xf7:
    goto code_r0x0001004348c8;
  case 0xf8:
    goto code_r0x0001004348e0;
  case 0xfa:
    goto code_r0x0001004348f8;
  case 0xfd:
    goto code_r0x00010043481c;
  }
  ppppppuStack_270 = (uint ******)CONCAT71(ppppppuStack_270._1_7_,bVar12);
code_r0x0001004348bc:
  param_4 = &UNK_10b21c000;
code_r0x0001004348c0:
  param_4 = param_4 + 0x350;
code_r0x0001004348c4:
  pppppppuVar8 = &ppppppuStack_270;
code_r0x0001004348c8:
  pppppppuVar8 = (uint *******)FUN_107c05dcc(pppppppuVar8,&pppppppuStack_a8,param_4);
code_r0x0001004348d0:
  pppppppuVar13 = (uint *******)0x6e;
code_r0x0001004348d4:
  pppppppuVar13 = (uint *******)((ulong)pppppppuVar13 | 0x8000000000000000);
code_r0x0001004348d8:
  *(uint ********)param_2 = pppppppuVar13;
  *(uint ********)((long)param_2 + 8) = pppppppuVar8;
LAB_1004348dc:
code_r0x0001004348e0:
code_r0x0001004348e8:
code_r0x0001004348ec:
code_r0x0001004348f0:
code_r0x0001004348f4:
code_r0x0001004348f8:
  return;
}

