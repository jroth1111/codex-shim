
/* WARNING: Type propagation algorithm not settling */

void FUN_100431670(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
                  undefined *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar10;
  undefined1 uVar11;
  ulong *******pppppppuVar12;
  ulong ******ppppppuVar13;
  uint uVar14;
  ulong *******extraout_x1;
  byte bVar15;
  ulong *******pppppppuVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  ulong *******pppppppuVar20;
  ulong ******ppppppuVar21;
  ulong *******unaff_x19;
  ulong *******pppppppuVar22;
  ulong *******unaff_x20;
  undefined8 *puVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  undefined8 *puVar27;
  ulong *******unaff_x23;
  undefined8 *puVar28;
  ulong *******unaff_x24;
  long lVar29;
  ulong *******pppppppuVar30;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  undefined *unaff_x30;
  ulong *******pppppppuVar32;
  ulong ******ppppppuVar33;
  undefined1 auStack_2e0 [8];
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  undefined8 uStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong *******pppppppuStack_2a0;
  ulong ******ppppppuVar34;
  ulong ******ppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong *******pppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong *******pppppppuStack_258;
  undefined *puStack_250;
  ulong ******ppppppuStack_230;
  ulong ******ppppppuStack_228;
  ulong ******ppppppuStack_220;
  ulong ******ppppppuStack_218;
  ulong *******pppppppuStack_118;
  ulong *******pppppppuStack_110;
  ulong *******pppppppuStack_108;
  undefined8 uStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
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
  undefined1 auStack_69 [9];
  
  ppppppuVar13 = param_1._8_8_;
  ppppppuVar34 = param_1._0_8_;
  puVar8 = auStack_2e0;
  pppppppuVar22 = (ulong *******)&uStack_90;
  bVar15 = *(byte *)param_3;
  pppppppuVar16 = (ulong *******)(ulong)bVar15;
  pppppppuVar20 = (ulong *******)&UNK_108c989ae;
  ppppppuVar21 = (ulong ******)
                 (&UNK_1004316b4 + (ulong)*(ushort *)(&UNK_108c989ae + (long)pppppppuVar16 * 2) * 4)
  ;
  puVar9 = auStack_2e0;
  puVar7 = auStack_2e0;
  puVar6 = auStack_2e0;
  puVar5 = auStack_2e0;
  pppppppuVar12 = param_2;
  pppppppuVar32 = pppppppuVar16;
  pppppppuVar30 = unaff_x24;
  puVar31 = &stack0xfffffffffffffff0;
  switch(bVar15) {
  case 0:
  case 0xc6:
    bVar15 = *(byte *)((long)param_3 + 1);
  case 0x66:
    pppppppuStack_270 = (ulong *******)((ulong)CONCAT61(pppppppuStack_270._2_6_,bVar15) << 8);
code_r0x000100431e34:
    pppppppuStack_270 = (ulong *******)((ulong)pppppppuStack_270 & 0xffffffffffffff00);
    goto code_r0x000100431e8c;
  case 1:
  case 199:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
    goto code_r0x000100431e44;
  case 2:
  case 0x51:
  case 200:
    pppppppuStack_268 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
    goto code_r0x000100431e44;
  case 3:
  case 0x49:
  case 0x94:
  case 0xaa:
  case 0xc9:
    pppppppuVar16 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x7a:
    pppppppuStack_268 = pppppppuVar16;
code_r0x000100431e44:
    bVar15 = 1;
code_r0x000100431e48:
    break;
  case 4:
  case 0x4e:
  case 0x7c:
  case 0xca:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x000100431e44;
  case 5:
  case 0x4f:
  case 0x8f:
  case 0xa5:
  case 0xcb:
    pppppppuVar16 = (ulong *******)(long)(char)*(byte *)((long)param_3 + 1);
    goto code_r0x000100431e80;
  case 6:
  case 0x4c:
  case 0xcc:
    pppppppuVar16 = (ulong *******)(long)*(short *)((long)param_3 + 2);
    goto code_r0x000100431e80;
  case 7:
  case 0x42:
  case 0x92:
  case 0xa8:
  case 0xcd:
    pppppppuVar16 = (ulong *******)(long)*(int *)((long)param_3 + 4);
  case 0x68:
code_r0x000100431e80:
    bVar15 = 2;
    pppppppuStack_268 = pppppppuVar16;
    break;
  case 8:
  case 0x6e:
  case 0x90:
  case 0xa6:
  case 0xce:
    pppppppuVar16 = (ulong *******)param_3[1];
    goto code_r0x000100431e80;
  case 9:
  case 0xcf:
    ppppppuVar34 = (ulong ******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x44:
    pppppppuStack_268 = (ulong *******)(double)SUB84(ppppppuVar34,0);
  case 0x4a:
  case 0x75:
  case 0x88:
  case 0x9e:
code_r0x000100431e74:
    bVar15 = 3;
    break;
  case 10:
  case 0x71:
  case 0xd0:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x000100431e74;
  case 0xb:
  case 0xd1:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    puVar6 = &stack0xffffffffffffffa0;
    pppppppuVar22 = unaff_x19;
    puVar31 = unaff_x29;
  case 0x46:
  case 0x7e:
    *(ulong ********)(puVar6 + 0x40) = unaff_x20;
    *(ulong ********)(puVar6 + 0x48) = pppppppuVar22;
    *(undefined1 **)(puVar6 + 0x50) = puVar31;
    *(undefined **)(puVar6 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar6 + 0x1c) = 0;
    uVar14 = (uint)param_3;
    if (uVar14 < 0x80) {
      puVar6[0x1c] = (byte)param_3;
      uVar17 = 1;
    }
    else {
      bVar15 = (byte)param_3 & 0x3f | 0x80;
      if (uVar14 < 0x800) {
        puVar6[0x1c] = (byte)(uVar14 >> 6) | 0xc0;
        puVar6[0x1d] = bVar15;
        uVar17 = 2;
      }
      else {
        bVar24 = (byte)(uVar14 >> 6) & 0x3f | 0x80;
        if (uVar14 < 0x10000) {
          puVar6[0x1c] = (byte)(uVar14 >> 0xc) | 0xe0;
          puVar6[0x1d] = bVar24;
          puVar6[0x1e] = bVar15;
          uVar17 = 3;
        }
        else {
          puVar6[0x1c] = (byte)(uVar14 >> 0x12) | 0xf0;
          puVar6[0x1d] = (byte)(uVar14 >> 0xc) & 0x3f | 0x80;
          puVar6[0x1e] = bVar24;
          puVar6[0x1f] = bVar15;
          uVar17 = 4;
        }
      }
    }
    *(undefined1 **)(puVar6 + 0x28) = puVar6 + 0x1c;
    *(undefined8 *)(puVar6 + 0x30) = uVar17;
    puVar6[0x20] = 5;
    ppppppuVar21 = (ulong ******)func_0x000108a4a50c(puVar6 + 0x20,puVar6 + 0x3f,&UNK_10b21c470);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar21;
    return;
  case 0xc:
  case 0xd2:
    param_3 = param_3 + 1;
    puVar7 = &stack0xffffffffffffffa0;
    pppppppuVar22 = unaff_x19;
    puVar31 = unaff_x29;
  case 0x4b:
  case 0x79:
    *(ulong ********)(puVar7 + 0x30) = unaff_x22;
    *(ulong ********)(puVar7 + 0x38) = unaff_x21;
    *(ulong ********)(puVar7 + 0x40) = unaff_x20;
    *(ulong ********)(puVar7 + 0x48) = pppppppuVar22;
    *(undefined1 **)(puVar7 + 0x50) = puVar31;
    *(undefined **)(puVar7 + 0x58) = unaff_x30;
    ppppppuVar21 = param_3[1];
    ppppppuVar34 = param_3[2];
    *(ulong *******)(puVar7 + 0x18) = ppppppuVar21;
    *(ulong *******)(puVar7 + 0x20) = ppppppuVar34;
    puVar7[0x10] = 5;
    ppppppuVar34 = (ulong ******)func_0x000108a4a50c(puVar7 + 0x10,puVar7 + 0x2f,&UNK_10b21c470);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar34;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar21);
    }
    return;
  case 0xd:
  case 0x70:
  case 0xd3:
    pppppppuVar16 = (ulong *******)param_3[1];
    pppppppuVar20 = (ulong *******)param_3[2];
  case 99:
    pppppppuStack_268 = pppppppuVar16;
    pppppppuStack_260 = pppppppuVar20;
code_r0x000100431e5c:
    bVar15 = 5;
    break;
  case 0xe:
  case 0xd4:
    param_3 = param_3 + 1;
    puVar5 = &stack0xffffffffffffffa0;
    pppppppuVar22 = unaff_x19;
    puVar31 = unaff_x29;
  case 0x4d:
    *(ulong ********)(puVar5 + 0x30) = unaff_x22;
    *(ulong ********)(puVar5 + 0x38) = unaff_x21;
    *(ulong ********)(puVar5 + 0x40) = unaff_x20;
    *(ulong ********)(puVar5 + 0x48) = pppppppuVar22;
    *(undefined1 **)(puVar5 + 0x50) = puVar31;
    *(undefined **)(puVar5 + 0x58) = unaff_x30;
    ppppppuVar21 = param_3[1];
    ppppppuVar34 = param_3[2];
    *(ulong *******)(puVar5 + 0x18) = ppppppuVar21;
    *(ulong *******)(puVar5 + 0x20) = ppppppuVar34;
    puVar5[0x10] = 6;
    ppppppuVar34 = (ulong ******)func_0x000108a4a50c(puVar5 + 0x10,puVar5 + 0x2f,&UNK_10b21c470);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar34;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar21);
    }
    return;
  case 0xf:
  case 0xd5:
    pppppppuStack_268 = (ulong *******)param_3[1];
    pppppppuStack_260 = (ulong *******)param_3[2];
  case 0x45:
    bVar15 = 6;
code_r0x000100431e18:
    break;
  case 0x10:
  case 0x50:
  case 0xd6:
    bVar15 = 8;
    break;
  default:
    ppppppuVar21 = param_3[1];
    pppppppuStack_268 = (ulong *******)ppppppuVar21[1];
    pppppppuStack_270 = (ulong *******)*ppppppuVar21;
    pppppppuStack_258 = (ulong *******)ppppppuVar21[3];
    pppppppuStack_260 = (ulong *******)ppppppuVar21[2];
    func_0x000107c04660(param_2,&pppppppuStack_270);
    goto code_r0x000100431adc;
  case 0x12:
  case 0x76:
  case 0xd8:
    bVar15 = 7;
  case 0x8b:
  case 0xa1:
    break;
  case 0x13:
  case 0x55:
  case 0x81:
  case 0xd9:
    ppppppuVar21 = param_3[1];
    pppppppuStack_268 = (ulong *******)ppppppuVar21[1];
    pppppppuStack_270 = (ulong *******)*ppppppuVar21;
    pppppppuStack_258 = (ulong *******)ppppppuVar21[3];
    pppppppuStack_260 = (ulong *******)ppppppuVar21[2];
    param_3 = (ulong *******)&pppppppuStack_270;
  case 0x97:
  case 0xad:
    func_0x000107c05514(param_2,param_3);
code_r0x000100431adc:
code_r0x000100431af8:
code_r0x000107c06034:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)();
    return;
  case 0x14:
  case 0x56:
  case 0x82:
  case 0xda:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x26 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
  case 0x98:
  case 0xae:
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x000100431b34:
      param_3 = (ulong *******)&UNK_10b22f848;
code_r0x000100431b3c:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,param_3,&UNK_10b20a590);
code_r0x000100431b50:
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = (ulong ******)pppppppuStack_a0;
code_r0x000100431b5c:
      lVar29 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar29 = lVar29 + -1, lVar29 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100431b20:
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2b8 = unaff_x21;
      bVar15 = *(byte *)unaff_x20;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100431b34;
code_r0x000100431b98:
      uStack_90._0_1_ = bVar15;
      uVar17 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (byte)uVar17;
      uStack_90._2_6_ = (undefined6)((ulong)uVar17 >> 8);
      uStack_88 = (undefined1)((ulong)uVar17 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x000100431b50;
      bVar10 = unaff_x26 == (ulong *******)0x1;
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x26 = pppppppuStack_98;
      if (bVar10) {
code_r0x000100431bf0:
        ppppppuVar21 = (ulong ******)thunk_FUN_1087e422c(1,&UNK_10b22f848,&UNK_10b20a590);
        *param_2 = (ulong ******)0x800000000000006e;
        param_2[1] = ppppppuVar21;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x000100431c1c:
          _free(unaff_x22);
        }
        goto code_r0x000100431b5c;
      }
code_r0x000100431bdc:
      unaff_x21 = unaff_x20 + 8;
      bVar15 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar15 == 0x16) goto code_r0x000100431bf0;
code_r0x000100431ed4:
      ppppppuVar13 = *(ulong *******)((long)unaff_x20 + 0x29);
      ppppppuVar34 = *(ulong *******)((long)unaff_x20 + 0x21);
code_r0x000100431ed8:
      uStack_87 = SUB87(ppppppuVar13,0);
      uStack_90._1_1_ = (byte)ppppppuVar34;
      uStack_90._2_6_ = (undefined6)((ulong)ppppppuVar34 >> 8);
      uStack_88 = (undefined1)((ulong)ppppppuVar34 >> 0x38);
code_r0x000100431edc:
      ppppppuVar13 = unaff_x20[7];
      ppppppuVar34 = unaff_x20[6];
code_r0x000100431ee0:
      uStack_80 = SUB81(ppppppuVar34,0);
      uStack_7f = (undefined7)((ulong)ppppppuVar34 >> 8);
      ppppppuStack_78 = ppppppuVar13;
code_r0x000100431ee4:
      pppppppuVar20 = (ulong *******)0x2;
code_r0x000100431ee8:
      uStack_90._0_1_ = bVar15;
      pppppppuStack_2a0 = pppppppuVar20;
code_r0x000100431ef0:
      pppppppuVar12 = (ulong *******)&pppppppuStack_a8;
code_r0x000100431ef4:
      param_3 = (ulong *******)&uStack_90;
code_r0x000100431ef8:
      func_0x0001013d74b4(pppppppuVar12,param_3);
      pppppppuVar16 = (ulong *******)((ulong)pppppppuStack_a8 & 0xff);
code_r0x000100431f00:
      if (((ulong)pppppppuVar16 & 1) != 0) {
code_r0x000100431f04:
        pppppppuVar12 = pppppppuStack_a0;
code_r0x000100431f08:
        pppppppuVar16 = (ulong *******)0x6e;
code_r0x000100431f0c:
        pppppppuVar16 = (ulong *******)((ulong)pppppppuVar16 | 0x8000000000000000);
code_r0x000100431f10:
        *param_2 = (ulong ******)pppppppuVar16;
        param_2[1] = (ulong ******)pppppppuVar12;
        in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x000100431f18:
        if (!in_ZR) {
code_r0x000100431f1c:
          goto code_r0x000100431c1c;
        }
        goto code_r0x000100431b5c;
      }
code_r0x000100431f20:
      pppppppuVar22 = (ulong *******)0x6e;
code_r0x000100431f24:
      pppppppuVar22 = (ulong *******)((ulong)pppppppuVar22 & 0xffffffffffff | 0x8000000000000000);
code_r0x000100431f28:
      bVar15 = (byte)((ulong)pppppppuStack_a8 >> 8);
code_r0x000100431f2c:
      pppppppuVar20 = (ulong *******)((long)pppppppuVar22 + -0x22);
code_r0x000100431f30:
      *param_2 = (ulong ******)pppppppuVar20;
      param_2[1] = (ulong ******)unaff_x25;
code_r0x000100431f34:
      param_2[2] = (ulong ******)unaff_x22;
      param_2[3] = (ulong ******)unaff_x26;
code_r0x000100431f38:
      *(byte *)(param_2 + 4) = bVar15;
      pppppppuVar12 = (ulong *******)&pppppppuStack_270;
      param_3 = param_2;
code_r0x000100431f44:
      _memcpy(pppppppuVar12,param_3,0x1c0);
code_r0x000100431f4c:
      pppppppuVar12 = (ulong *******)FUN_100fbc738(&pppppppuStack_2c0);
code_r0x000100431f54:
      if (pppppppuVar12 != (ulong *******)0x0) {
code_r0x000100431f58:
        *param_2 = (ulong ******)pppppppuVar22;
        param_2[1] = (ulong ******)pppppppuVar12;
        param_2 = (ulong *******)&pppppppuStack_270;
code_r0x000100431f60:
        FUN_100e44f40(param_2);
code_r0x000100431f64:
      }
    }
    goto code_r0x000100431eb0;
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
    ppppppuVar21 = param_3[3];
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    if (ppppppuVar21 == (ulong ******)0x0) {
code_r0x000100431c4c:
      pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
      pppppppuStack_a0 = (ulong *******)0x2;
      uStack_90._0_1_ = (byte)&pppppppuStack_a8;
      uStack_90._1_1_ = (byte)((ulong)&pppppppuStack_a8 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x20 = (ulong *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      goto code_r0x000100431c84;
    }
    unaff_x23 = (ulong *******)0x0;
    unaff_x28 = (ulong *******)((ulong)&uStack_90 | 1);
    pppppppuVar12 = (ulong *******)((ulong)&pppppppuStack_2c0 | 1);
    pppppppuStack_2d8 = (ulong *******)(((long)ppppppuVar21 * 0x40 - 0x40U >> 6) + 1);
    unaff_x21 = (ulong *******)0x2;
    unaff_x22 = (ulong *******)0x8000000000000001;
    unaff_x24 = pppppppuStack_2a0 + 8;
    unaff_x26 = pppppppuStack_2a0 + (long)ppppppuVar21 * 8;
    pppppppuStack_2d0 = param_2;
    do {
      pppppppuVar30 = unaff_x24;
      bVar24 = (byte)unaff_x21;
      unaff_x25 = pppppppuVar30 + -8;
      bVar15 = *(byte *)unaff_x25;
      pppppppuVar20 = (ulong *******)(ulong)bVar15;
      pppppppuVar32 = unaff_x23;
      if (bVar15 == 0x16) break;
      ppppppuVar21 = pppppppuVar30[-6];
      *(ulong *******)((long)unaff_x28 + 0x17) = pppppppuVar30[-5];
      *(ulong *******)((long)unaff_x28 + 0xf) = ppppppuVar21;
      ppppppuVar13 = *(ulong *******)((long)pppppppuVar30 + -0x37);
      ppppppuVar34 = *(ulong *******)((long)pppppppuVar30 + -0x3f);
      uStack_90._0_1_ = bVar15;
code_r0x000100431770:
      unaff_x28[1] = ppppppuVar13;
      *unaff_x28 = ppppppuVar34;
      pppppppuStack_2b8 = (ulong *******)unaff_x25[5];
      pppppppuStack_2c0 = (ulong *******)unaff_x25[4];
      pppppppuStack_2a8 = (ulong *******)unaff_x25[7];
      pppppppuStack_2b0 = (ulong *******)unaff_x25[6];
      pppppppuVar16 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      param_2 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
      iVar18 = (int)pppppppuVar20;
      in_OV = SBORROW4(iVar18,0xc);
      in_NG = iVar18 + -0xc < 0;
      in_ZR = iVar18 == 0xc;
      ppppppuVar21 = ppppppuStack_78;
code_r0x000100431788:
      iVar18 = (int)pppppppuVar20;
      if (in_ZR || in_NG != in_OV) {
        if (iVar18 == 1) {
          iVar19 = 1;
          if (uStack_90._1_1_ != 1) {
            iVar19 = 2;
          }
          iVar18 = 0;
          if (uStack_90._1_1_ != 0) {
            iVar18 = iVar19;
          }
        }
        else {
          if (iVar18 != 4) {
            if (iVar18 == 0xc) {
              if (ppppppuVar21 == (ulong ******)0x6) {
                iVar18 = 1;
                if (*(int *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                  iVar18 = 2;
                }
              }
              else if (ppppppuVar21 == (ulong ******)0x2) {
code_r0x0001004317b4:
                iVar18 = 2;
                if (*(short *)param_2 == 0x6469) {
                  iVar18 = 0;
                }
              }
              else {
                iVar18 = 2;
              }
              goto joined_r0x0001004318f4;
            }
code_r0x000100432060:
            pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
            goto code_r0x000100432064;
          }
          iVar19 = 1;
          if (pppppppuVar16 != (ulong *******)0x1) {
            iVar19 = 2;
          }
          iVar18 = 0;
          if (pppppppuVar16 != (ulong *******)0x0) {
            iVar18 = iVar19;
          }
        }
code_r0x0001004319b4:
        FUN_100e077ec(&uStack_90);
      }
      else {
        if (iVar18 == 0xd) {
          if (param_2 == (ulong *******)0x6) {
            iVar18 = 1;
            if (*(int *)pppppppuVar16 != 0x61726170 || *(short *)((long)pppppppuVar16 + 4) != 0x736d
               ) {
              iVar18 = 2;
            }
          }
          else {
            if (param_2 != (ulong *******)0x2) goto code_r0x000100431980;
            iVar18 = 2;
            if (*(short *)pppppppuVar16 == 0x6469) {
              iVar18 = 0;
            }
          }
          goto code_r0x0001004319b4;
        }
        if (iVar18 != 0xe) {
          if (iVar18 != 0xf) goto code_r0x000100432060;
          if (param_2 == (ulong *******)0x6) {
            if (((((*(byte *)pppppppuVar16 != 0x70) || (*(byte *)((long)pppppppuVar16 + 1) != 0x61))
                 || (*(byte *)((long)pppppppuVar16 + 2) != 0x72)) ||
                ((*(byte *)((long)pppppppuVar16 + 3) != 0x61 ||
                 (*(byte *)((long)pppppppuVar16 + 4) != 0x6d)))) ||
               (*(byte *)((long)pppppppuVar16 + 5) != 0x73)) goto code_r0x000100431980;
            iVar18 = 1;
          }
          else if (((param_2 == (ulong *******)0x2) && (*(byte *)pppppppuVar16 == 0x69)) &&
                  (*(byte *)((long)pppppppuVar16 + 1) == 100)) {
            iVar18 = 0;
          }
          else {
code_r0x000100431980:
            iVar18 = 2;
          }
          goto code_r0x0001004319b4;
        }
        if (ppppppuVar21 == (ulong ******)0x6) {
          if (((((*(byte *)param_2 != 0x70) || (*(byte *)((long)param_2 + 1) != 0x61)) ||
               (*(byte *)((long)param_2 + 2) != 0x72)) ||
              ((*(byte *)((long)param_2 + 3) != 0x61 || (*(byte *)((long)param_2 + 4) != 0x6d)))) ||
             (*(byte *)((long)param_2 + 5) != 0x73)) goto code_r0x0001004318f0;
          iVar18 = 1;
        }
        else if (((ppppppuVar21 == (ulong ******)0x2) && (*(byte *)param_2 == 0x69)) &&
                (*(byte *)((long)param_2 + 1) == 100)) {
          iVar18 = 0;
        }
        else {
code_r0x0001004318f0:
          iVar18 = 2;
        }
joined_r0x0001004318f4:
        if (pppppppuVar16 != (ulong *******)0x0) {
          _free();
        }
      }
      bVar15 = (byte)pppppppuStack_2c0;
      if (iVar18 == 0) {
        if (unaff_x22 != (ulong *******)0x8000000000000001) {
          pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
          goto code_r0x000100431f94;
        }
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar15 == 0x16) goto code_r0x000100432034;
        ppppppuVar21 = *pppppppuVar12;
        unaff_x28[1] = pppppppuVar12[1];
        *unaff_x28 = ppppppuVar21;
        uVar17 = *(undefined8 *)((long)pppppppuVar12 + 0xf);
        *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar12 + 0x17);
        *(undefined8 *)((long)unaff_x28 + 0xf) = uVar17;
        uStack_90._0_1_ = bVar15;
        func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
        unaff_x20 = pppppppuStack_a0;
        if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
          pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
          param_2 = pppppppuStack_2d0;
          goto code_r0x000100431d68;
        }
        uStack_2c8 = pppppppuStack_98;
        unaff_x22 = pppppppuStack_a8;
      }
      else if (iVar18 == 1) {
        if ((int)unaff_x21 != 2) {
          pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
          goto code_r0x000100431ff4;
        }
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar15 == 0x16) goto code_r0x000100431f68;
        ppppppuVar21 = *pppppppuVar12;
        unaff_x28[1] = pppppppuVar12[1];
        *unaff_x28 = ppppppuVar21;
        uVar17 = *(undefined8 *)((long)pppppppuVar12 + 0xf);
        *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar12 + 0x17);
        *(undefined8 *)((long)unaff_x28 + 0xf) = uVar17;
        uStack_90._0_1_ = bVar15;
        func_0x0001013d74b4(&pppppppuStack_a8,&uStack_90);
        if ((char)pppppppuStack_a8 == '\x01') {
          pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
          pppppppuVar22 = (ulong *******)&pppppppuStack_2c0;
          param_2 = pppppppuStack_a0;
          pppppppuVar20 = pppppppuStack_2d0;
          goto LAB_100431d2c;
        }
        unaff_x21 = (ulong *******)((ulong)pppppppuStack_a8 >> 8 & 0xff);
      }
      else {
        pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
        if (bVar15 == 0x16) goto code_r0x000100431f68;
        ppppppuVar21 = *pppppppuVar12;
        unaff_x28[1] = pppppppuVar12[1];
        *unaff_x28 = ppppppuVar21;
        uVar17 = *(undefined8 *)((long)pppppppuVar12 + 0xf);
        *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar12 + 0x17);
        *(undefined8 *)((long)unaff_x28 + 0xf) = uVar17;
        uStack_90._0_1_ = bVar15;
        FUN_100e077ec(&uStack_90);
      }
      unaff_x24 = pppppppuVar30 + 8;
      pppppppuVar16 = unaff_x25 + 8;
code_r0x000100431744:
      pppppppuVar30 = unaff_x26;
      bVar24 = (byte)unaff_x21;
      unaff_x23 = (ulong *******)((long)unaff_x23 + 1);
      pppppppuVar32 = pppppppuStack_2d8;
      unaff_x26 = pppppppuVar30;
    } while (pppppppuVar16 != pppppppuVar30);
    param_2 = pppppppuStack_2d0;
    pppppppuStack_280 = pppppppuVar32;
    if (unaff_x22 == (ulong *******)0x8000000000000001) goto code_r0x000100431c4c;
    pppppppuVar22 = (ulong *******)0x800000000000006e;
    *pppppppuStack_2d0 = (ulong ******)0x800000000000004c;
    pppppppuStack_2d0[1] = (ulong ******)unaff_x22;
    pppppppuStack_2d0[2] = (ulong ******)unaff_x20;
    pppppppuStack_2d0[3] = (ulong ******)uStack_2c8;
    *(byte *)(pppppppuStack_2d0 + 4) = bVar24 & 1;
    _memcpy(&pppppppuStack_270,pppppppuStack_2d0,0x1c0);
    FUN_100d34830(&pppppppuStack_2a0);
    if (unaff_x26 == pppppppuVar30) goto code_r0x000100431eb0;
    uStack_90._0_1_ = (byte)pppppppuVar32;
    uStack_90._1_1_ = (byte)((ulong)pppppppuVar32 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar32 >> 0x10);
    pppppppuVar12 =
         (ulong *******)
         thunk_FUN_1087e422c((byte *)(((ulong)((long)unaff_x26 - (long)pppppppuVar30) >> 6) +
                                     (long)pppppppuVar32),&uStack_90,&UNK_10b23a190);
    goto code_r0x000100431f58;
  case 0x16:
    goto code_r0x0001004320c0;
  case 0x17:
    if (!in_ZR) {
      param_2 = (ulong *******)&pppppppuStack_2c0;
      goto code_r0x0001004320d8;
    }
  case 0xdc:
code_r0x000100432194:
    __Unwind_Resume(pppppppuVar22);
    unaff_x30 = &DAT_1004321a0;
    FUN_107c05ccc();
    puVar8 = &stack0xfffffffffffffcc0;
    param_3 = extraout_x1;
code_r0x0001004321a4:
    *(ulong ********)(puVar8 + 0x10) = unaff_x26;
    *(ulong ********)(puVar8 + 0x18) = unaff_x25;
    *(ulong ********)(puVar8 + 0x20) = unaff_x24;
    *(ulong ********)(puVar8 + 0x28) = unaff_x23;
    *(ulong ********)(puVar8 + 0x30) = unaff_x22;
    *(ulong ********)(puVar8 + 0x38) = unaff_x21;
    *(ulong ********)(puVar8 + 0x40) = unaff_x20;
    *(ulong ********)(puVar8 + 0x48) = pppppppuVar22;
    puVar9 = puVar8;
code_r0x0001004321b4:
    *(undefined1 **)(puVar9 + 0x50) = &stack0xfffffffffffffff0;
    *(undefined **)(puVar9 + 0x58) = unaff_x30;
code_r0x0001004321bc:
    pppppppuVar16 = (ulong *******)(ulong)*(byte *)param_3;
    pppppppuVar20 = (ulong *******)&UNK_108c98000;
code_r0x0001004321cc:
    pppppppuVar20 = (ulong *******)((long)pppppppuVar20 + 0x9da);
    ppppppuVar21 = (ulong ******)&UNK_1004321e0;
code_r0x0001004321d4:
                    /* WARNING: Could not recover jumptable at 0x0001004321dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)ppppppuVar21 +
              (ulong)*(ushort *)((long)pppppppuVar20 + (long)pppppppuVar16 * 2) * 4))();
    return;
  case 0x18:
    goto code_r0x000100432098;
  case 0x19:
code_r0x0001004320b0:
    goto code_r0x0001004320e8;
  case 0x1a:
    goto code_r0x00010043205c;
  case 0x1b:
  case 0xea:
    pppppppuVar22 = (ulong *******)FUN_107c05ccc();
    goto code_r0x0001004320e8;
  case 0x1c:
    pppppppuVar22 = param_2;
  case 0x20:
    param_2 = pppppppuVar22;
    _free();
code_r0x000100432108:
    pppppppuVar22 = (ulong *******)__Unwind_Resume(param_2);
code_r0x000100432110:
    _free();
    pppppppuVar22 = (ulong *******)__Unwind_Resume(pppppppuVar22);
    pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
code_r0x000100432130:
    param_2 = pppppppuVar22;
code_r0x000100432170:
    pppppppuVar16 = (ulong *******)0x2;
    pppppppuVar22 = param_2;
code_r0x000100432174:
    if (((long)((ulong)pppppppuVar16 | 0x8000000000000000) <= (long)unaff_x22) &&
       (unaff_x22 != (ulong *******)0x0)) {
code_r0x000100432184:
      _free();
    }
code_r0x00010043218c:
    FUN_100e7b998(&pppppppuStack_2c0);
    goto code_r0x000100432194;
  case 0x1d:
    FUN_100e44f40(&pppppppuStack_270);
code_r0x0001004320c0:
    goto code_r0x000100432194;
  case 0x1e:
    goto code_r0x000100432110;
  case 0x1f:
    FUN_100e44f40(&pppppppuStack_270);
    pppppppuVar22 = param_2;
code_r0x000100432098:
    goto code_r0x000100432194;
  case 0x21:
code_r0x000100432034:
    pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x00010043205c;
  case 0x22:
code_r0x000100432064:
    pppppppuStack_280 = pppppppuVar16;
    param_2 = (ulong *******)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b211920);
    pppppppuVar22 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar20 = pppppppuStack_2d0;
    goto LAB_100431d2c;
  case 0x23:
    goto code_r0x0001004320e8;
  case 0x24:
    goto code_r0x00010043200c;
  case 0x25:
    if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
      _free();
      goto code_r0x0001004320b0;
    }
code_r0x0001004320e8:
    FUN_100e81e80(&pppppppuStack_2c0);
    goto code_r0x000100432194;
  case 0x26:
    goto code_r0x000100432004;
  case 0x28:
    do {
      unaff_x21 = unaff_x22 + 4;
      FUN_100e077ec(unaff_x22);
      unaff_x22 = unaff_x21;
code_r0x000100432138:
      unaff_x24 = (ulong *******)((long)unaff_x24 + -1);
    } while (unaff_x24 != (ulong *******)0x0);
    unaff_x24 = (ulong *******)0x0;
    if (unaff_x23 != (ulong *******)0x0) {
      _free();
      goto code_r0x000100432160;
    }
    goto code_r0x000100432194;
  case 0x29:
    goto code_r0x000100431744;
  case 0x2a:
    goto code_r0x000100431788;
  case 0x2c:
  case 0xf2:
    goto code_r0x000100431f54;
  case 0x2d:
  case 0xf3:
    goto code_r0x000100431f64;
  case 0x2e:
  case 0xf4:
    goto code_r0x000100431f2c;
  case 0x2f:
  case 0xf5:
    goto code_r0x000100431f44;
  case 0x30:
  case 0xf6:
    goto code_r0x000100431ef0;
  case 0x31:
  case 0xbf:
  case 0xf7:
    goto code_r0x000100431f74;
  case 0x32:
  case 0xb7:
  case 0xf8:
    goto code_r0x000100431f8c;
  case 0x33:
  case 0xf9:
    goto code_r0x000100431f4c;
  case 0x34:
  case 0xb1:
  case 0xfa:
    goto code_r0x000100431fa4;
  case 0x35:
  case 0xfb:
    goto code_r0x000100431f20;
  case 0x36:
  case 0xb0:
  case 0xfc:
code_r0x000100431f94:
    pppppppuVar32 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_280 = pppppppuVar16;
code_r0x000100431fa4:
    pppppppuStack_a0 = (ulong *******)0x2;
    pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar20 = (ulong *******)&UNK_100c7b000;
    pppppppuStack_a8 = pppppppuVar32;
code_r0x000100431fb4:
    uStack_90._0_1_ = (byte)pppppppuVar16;
    uStack_90._1_1_ = (byte)((ulong)pppppppuVar16 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar16 >> 0x10);
    uStack_88 = SUB81(pppppppuVar20 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppuVar20 + 0x74) >> 8);
FUN_100431fbc:
    param_2 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
code_r0x000100431fcc:
    pppppppuVar22 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar20 = pppppppuStack_2d0;
code_r0x000100431fd4:
    *pppppppuVar20 = (ulong ******)0x800000000000006e;
    pppppppuVar20[1] = (ulong ******)param_2;
    in_ZR = ((ulong)unaff_x22 & 0x7fffffffffffffff) == 0;
code_r0x000100431fe4:
    if (!in_ZR) goto LAB_100431d4c;
    goto LAB_100431c90;
  case 0x37:
  case 0x87:
  case 0x9d:
  case 0xfd:
    goto code_r0x000100431ec8;
  case 0x38:
  case 0x89:
  case 0x9f:
  case 0xfe:
    goto code_r0x000100431ef8;
  case 0x39:
  case 0xff:
    goto code_r0x000100431f7c;
  case 0x3a:
    goto code_r0x000100431ea0;
  case 0x3b:
  case 0x60:
    goto code_r0x000100431f34;
  case 0x3c:
    goto code_r0x000100431e98;
  case 0x3e:
code_r0x000100431ff4:
    pppppppuVar32 = (ulong *******)&UNK_108cb9606;
    pppppppuVar20 = (ulong *******)0x6;
    pppppppuStack_280 = pppppppuVar16;
code_r0x000100432004:
    pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
    pppppppuStack_a8 = pppppppuVar32;
    pppppppuStack_a0 = pppppppuVar20;
code_r0x00010043200c:
    uStack_90._0_1_ = (byte)pppppppuVar16;
    uStack_90._1_1_ = (byte)((ulong)pppppppuVar16 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar16 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar22 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar20 = pppppppuStack_2d0;
code_r0x000100432030:
LAB_100431d2c:
    *pppppppuVar20 = (ulong ******)0x800000000000006e;
    pppppppuVar20[1] = (ulong ******)param_2;
    if ((-0x7fffffffffffffff < (long)unaff_x22) && (unaff_x22 != (ulong *******)0x0)) {
LAB_100431d4c:
      _free(unaff_x20);
    }
LAB_100431c90:
    FUN_100d34830(pppppppuVar22 + 4);
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
    }
    goto code_r0x000100431eb0;
  case 0x3f:
    goto code_r0x000100431af8;
  case 0x40:
    goto code_r0x000100431b3c;
  case 0x43:
    goto code_r0x000100431e34;
  case 0x47:
    goto code_r0x000100431e44;
  case 0x48:
  case 0x7d:
    goto code_r0x000100431e5c;
  case 0x52:
code_r0x000100431d68:
code_r0x000100431c84:
    pppppppuVar22 = (ulong *******)&pppppppuStack_2c0;
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = (ulong ******)unaff_x20;
    goto LAB_100431c90;
  case 0x54:
  case 0x67:
    goto code_r0x000100431ec4;
  case 0x58:
    goto code_r0x000100431ee4;
  case 0x59:
    goto code_r0x000100431ef4;
  case 0x5a:
  case 0x78:
    goto code_r0x000100431ebc;
  case 0x5b:
    goto code_r0x000100431ed4;
  case 0x5c:
    goto code_r0x000100431e80;
  case 0x5d:
    goto code_r0x000100431f04;
  case 0x5e:
  case 0x80:
    goto code_r0x000100431f1c;
  case 0x5f:
    goto code_r0x000100431edc;
  case 0x61:
  case 0x86:
  case 0x9c:
    goto code_r0x000100431eb0;
  case 0x62:
    goto code_r0x000100431f24;
  case 100:
    break;
  case 0x65:
    goto code_r0x000100431f0c;
  case 0x6a:
code_r0x000100431f68:
    pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
  case 0xb2:
    pppppppuStack_280 = pppppppuVar16;
code_r0x000100431f74:
    param_2 = (ulong *******)&UNK_108ca1000;
code_r0x000100431f78:
    param_2 = param_2 + 0x153;
code_r0x000100431f7c:
    param_4 = &UNK_10b24f848;
code_r0x000100431f84:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x000100431f8c:
code_r0x00010043205c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100432060);
    (*pcVar4)();
  case 0x6b:
    goto code_r0x000100431adc;
  case 0x6c:
    goto code_r0x000100431b20;
  case 0x6f:
    goto code_r0x000100431e8c;
  case 0x72:
    goto code_r0x000100431e18;
  case 0x73:
    goto code_r0x000100431e9c;
  case 0x74:
    goto code_r0x000100431eb4;
  case 0x77:
    goto code_r0x000100431e48;
  case 0x7b:
  case 0x8d:
  case 0xa3:
    goto code_r0x000100431ea4;
  case 0x84:
  case 0x9a:
  case 0xc0:
    goto code_r0x000100431ed8;
  case 0x85:
  case 0x9b:
    goto code_r0x000100431ee8;
  case 0x8a:
  case 0xa0:
    goto code_r0x000100431f10;
  case 0x8c:
  case 0xa2:
    goto code_r0x000100431f28;
  case 0x8e:
  case 0xa4:
    goto code_r0x000100431f18;
  case 0x91:
  case 0xa7:
    goto code_r0x000100431f00;
  case 0x93:
  case 0xa9:
    goto code_r0x000100431eb8;
  case 0x96:
  case 0xac:
    goto code_r0x000100431f78;
  case 0xb3:
    goto code_r0x000100431f84;
  case 0xb4:
    goto code_r0x000100431f30;
  case 0xb5:
    goto code_r0x000100431fb4;
  case 0xb6:
    goto code_r0x000100431fcc;
  case 0xb8:
    goto code_r0x000100431fe4;
  case 0xb9:
    goto code_r0x000100431f60;
  case 0xba:
    goto code_r0x000100431fd4;
  case 0xbb:
    goto code_r0x000100431f08;
  case 0xbc:
    goto code_r0x000100431f38;
  case 0xbd:
    goto FUN_100431fbc;
  case 0xbe:
    goto code_r0x000100431ee0;
  case 0xc2:
    goto code_r0x000100432030;
  case 0xc3:
    goto code_r0x000100431b98;
  case 0xc4:
    goto code_r0x000100431bdc;
  case 0xdd:
    goto code_r0x0001004321a4;
  case 0xde:
    goto code_r0x00010043216c;
  case 0xdf:
    goto code_r0x000100432184;
  case 0xe0:
    goto code_r0x000100432130;
  case 0xe1:
    goto code_r0x0001004321b4;
  case 0xe2:
    goto code_r0x0001004321cc;
  case 0xe3:
    goto code_r0x00010043218c;
  case 0xe4:
    ppppppuStack_228 = unaff_x20[1];
    ppppppuStack_230 = *unaff_x20;
    ppppppuStack_218 = unaff_x20[3];
    ppppppuStack_220 = unaff_x20[2];
    func_0x000107c04688(pppppppuVar22,&ppppppuStack_230);
    goto code_r0x000107c06034;
  case 0xe5:
code_r0x000100432160:
    __Unwind_Resume(pppppppuVar22);
    param_2 = (ulong *******)FUN_107c05ccc();
code_r0x00010043216c:
    goto code_r0x000100432170;
  case 0xe6:
    goto code_r0x0001004321d4;
  case 0xe7:
    goto code_r0x000100432108;
  case 0xe8:
    goto code_r0x000100432138;
  case 0xe9:
    goto code_r0x0001004321bc;
  case 0xeb:
    goto code_r0x000100432174;
  case 0xec:
code_r0x0001004320d8:
    FUN_100e077ec(param_2);
    goto code_r0x000100432194;
  case 0xee:
    puStack_250 = &UNK_108c989ae;
    pppppppuStack_280 = (ulong *******)CONCAT71(pppppppuStack_280._1_7_,0x16);
    pppppppuStack_118 = (ulong *******)0x8000000000000001;
    pppppppuStack_260 = pppppppuVar16;
    if (ppppppuVar21 == (ulong ******)0x0) {
      pppppppuStack_118 = (ulong *******)0x8000000000000001;
      ppppppuVar21 = (ulong ******)0x0;
      pppppppuStack_288 = (ulong *******)0x8000000000000001;
      ppppppuStack_290 = (ulong ******)0x8000000000000001;
      pppppppuVar20 = pppppppuStack_2a0;
      pppppppuStack_258 = pppppppuVar16;
    }
    else {
      puVar27 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar28 = (undefined8 *)((ulong)&pppppppuStack_280 | 1);
      puVar23 = (undefined8 *)((ulong)&uStack_100 | 1);
      ppppppuVar34 = (ulong ******)0x8000000000000000;
      ppppppuStack_290 = (ulong ******)0x8000000000000001;
      pppppppuStack_288 = (ulong *******)0x8000000000000001;
      ppppppuVar21 = (ulong ******)0x8000000000000000;
      pppppppuVar22 = (ulong *******)0x8000000000000001;
      do {
        pppppppuVar20 = pppppppuVar16 + 8;
        bVar15 = *(byte *)pppppppuVar16;
        pppppppuStack_258 = pppppppuVar20;
        if (bVar15 == 0x16) break;
        uVar17 = *(undefined8 *)((long)pppppppuVar16 + 1);
        ppppppuVar33 = pppppppuVar16[3];
        ppppppuVar13 = pppppppuVar16[2];
        pppppppuStack_f8 = (ulong *******)pppppppuVar16[5];
        uStack_100 = (ulong *******)pppppppuVar16[4];
        puVar27[1] = *(undefined8 *)((long)pppppppuVar16 + 9);
        *puVar27 = uVar17;
        *(ulong *******)((long)puVar27 + 0x17) = ppppppuVar33;
        *(ulong *******)((long)puVar27 + 0xf) = ppppppuVar13;
        pppppppuStack_e8 = (ulong *******)pppppppuVar16[7];
        pppppppuStack_f0 = (ulong *******)pppppppuVar16[6];
        uStack_90._0_1_ = bVar15;
        if ((char)pppppppuStack_280 != '\x16') {
          FUN_100e077ec(&pppppppuStack_280);
        }
        pppppppuStack_280 = uStack_100;
        pppppppuStack_278 = pppppppuStack_f8;
        pppppppuStack_268 = pppppppuStack_e8;
        pppppppuStack_270 = pppppppuStack_f0;
        plVar1 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar2 = (long *)CONCAT71(uStack_7f,uStack_80);
        if (bVar15 < 0xd) {
          if (bVar15 == 1) {
            bVar15 = uStack_90._1_1_;
            if (3 < uStack_90._1_1_) {
              bVar15 = 4;
            }
code_r0x000100432714:
            uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar15);
            uStack_100 = (ulong *******)((ulong)uStack_100._1_7_ << 8);
            goto code_r0x000100432718;
          }
          if (bVar15 == 4) {
            if ((long *)0x3 < plVar1) {
              plVar1 = (long *)0x4;
            }
            bVar15 = (byte)plVar1;
            goto code_r0x000100432714;
          }
          if (bVar15 == 0xc) {
            if ((long)ppppppuStack_78 < 0x13) {
              if (ppppppuStack_78 == (ulong ******)0x5) {
                if ((int)*plVar2 == 0x6f727265 && *(char *)((long)plVar2 + 4) == 'r') {
                  uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x200);
                }
                else {
code_r0x000100432680:
                  uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x400);
                }
              }
              else {
                if ((ppppppuStack_78 != (ulong ******)0x11) ||
                   ((*plVar2 != 0x636e657265666e69 || plVar2[1] != 0x695f6c6c61635f65) ||
                    (char)plVar2[2] != 'd')) goto code_r0x000100432680;
                uStack_100 = (ulong *******)((ulong)uStack_100._2_6_ << 0x10);
              }
            }
            else if (ppppppuStack_78 == (ulong ******)0x13) {
              if ((*plVar2 != 0x6d61657274737075 || plVar2[1] != 0x747365757165725f) ||
                  *(long *)((long)plVar2 + 0xb) != 0x64695f7473657571) goto code_r0x000100432680;
              uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x100);
            }
            else {
              if ((ppppppuStack_78 != (ulong ******)0x18) ||
                 ((*plVar2 != 0x5f6c616974726170 || plVar2[1] != 0x65736e6f70736572) ||
                  plVar2[2] != 0x64616f6c7961705f)) goto code_r0x000100432680;
              uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x300);
            }
joined_r0x000100432920:
            if (plVar1 != (long *)0x0) {
              _free(plVar2);
            }
          }
          else {
code_r0x000100432930:
            pppppppuStack_f8 =
                 (ulong *******)thunk_FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20f4c0);
            uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,1);
          }
        }
        else {
          if (bVar15 == 0xd) {
            if ((long)plVar2 < 0x13) {
              if (plVar2 == (long *)0x5) {
                if ((int)*plVar1 == 0x6f727265 && *(char *)((long)plVar1 + 4) == 'r') {
                  bVar15 = 2;
                }
                else {
code_r0x00010043270c:
                  bVar15 = 4;
                }
              }
              else {
                if ((plVar2 != (long *)0x11) ||
                   ((*plVar1 != 0x636e657265666e69 || plVar1[1] != 0x695f6c6c61635f65) ||
                    (char)plVar1[2] != 'd')) goto code_r0x00010043270c;
                bVar15 = 0;
              }
            }
            else if (plVar2 == (long *)0x13) {
              if ((*plVar1 != 0x6d61657274737075 || plVar1[1] != 0x747365757165725f) ||
                  *(long *)((long)plVar1 + 0xb) != 0x64695f7473657571) goto code_r0x00010043270c;
              bVar15 = 1;
            }
            else {
              if ((plVar2 != (long *)0x18) ||
                 ((*plVar1 != 0x5f6c616974726170 || plVar1[1] != 0x65736e6f70736572) ||
                  plVar1[2] != 0x64616f6c7961705f)) goto code_r0x00010043270c;
              bVar15 = 3;
            }
            goto code_r0x000100432714;
          }
          if (bVar15 == 0xe) {
            func_0x000100b48248(&uStack_100,plVar2);
            goto joined_r0x000100432920;
          }
          if (bVar15 != 0xf) goto code_r0x000100432930;
          func_0x000100b48248(&uStack_100,plVar1,plVar2);
code_r0x000100432718:
          FUN_100e077ec(&uStack_90);
        }
        unaff_x25 = pppppppuStack_2a8;
        pppppppuVar12 = pppppppuStack_f8;
        if (((ulong)uStack_100 & 1) != 0) {
code_r0x000100432a5c:
          *pppppppuStack_2a0 = (ulong ******)0x1d;
          pppppppuStack_2a0[1] = (ulong ******)pppppppuVar12;
          pppppppuStack_110 = pppppppuStack_2a8;
code_r0x000100432a6c:
          uVar11 = true;
          uVar25 = true;
          uVar26 = true;
          pppppppuStack_118 = pppppppuVar22;
          unaff_x25 = pppppppuStack_110;
          pppppppuStack_2a8 = pppppppuStack_110;
          goto joined_r0x000100432a80;
        }
        bVar15 = uStack_100._1_1_;
        bVar10 = uStack_100._1_1_ < 2;
        cVar3 = (char)pppppppuStack_280;
        if (bVar10) {
          if (bVar15 == 0) {
            if (ppppppuVar34 != (ulong ******)0x8000000000000000) {
              pppppppuStack_110 = pppppppuStack_2a8;
              uStack_90._0_1_ = 0x72;
              uStack_90._1_1_ = 0x88;
              uStack_90._2_6_ = 0x108cb;
              uStack_88 = 0x11;
              uStack_87 = 0;
              uStack_100 = (ulong *******)&uStack_90;
              pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
              pppppppuStack_118 = pppppppuVar22;
              ppppppuVar13 = (ulong ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
LAB_100433100:
              *pppppppuStack_2a0 = (ulong ******)0x1d;
              pppppppuStack_2a0[1] = ppppppuVar13;
              goto LAB_100432a34;
            }
            pppppppuStack_280 = (ulong *******)CONCAT71(pppppppuStack_280._1_7_,0x16);
            if (cVar3 == '\x16') {
              pppppppuStack_110 = pppppppuStack_2a8;
              pppppppuStack_118 = pppppppuVar22;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x0001004331b4;
            }
            uVar17 = *puVar28;
            puVar23[1] = puVar28[1];
            *puVar23 = uVar17;
            uVar17 = *(undefined8 *)((long)puVar28 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar17;
            uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,cVar3);
            FUN_1004b62d4(&uStack_90,&uStack_100);
            ppppppuVar34 = (ulong ******)
                           CONCAT62(uStack_90._2_6_,CONCAT11(uStack_90._1_1_,(byte)uStack_90));
            if (ppppppuVar34 == (ulong ******)0x8000000000000000) {
              pppppppuStack_110 = pppppppuStack_2a8;
              *pppppppuStack_2a0 = (ulong ******)0x1d;
              pppppppuStack_2a0[1] = (ulong ******)CONCAT71(uStack_87,uStack_88);
              ppppppuVar34 = (ulong ******)0x0;
              goto code_r0x000100432a6c;
            }
            pppppppuStack_2b0 = (ulong *******)CONCAT71(uStack_87,uStack_88);
            pppppppuStack_2d0 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
          }
          else {
            if (ppppppuStack_290 != (ulong ******)0x8000000000000001) {
              pppppppuStack_110 = pppppppuStack_2a8;
              uStack_90._0_1_ = 0xd9;
              uStack_90._1_1_ = 0x88;
              uStack_90._2_6_ = 0x108cb;
              uStack_88 = 0x13;
              uStack_87 = 0;
              uStack_100 = (ulong *******)&uStack_90;
              pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
              pppppppuStack_118 = pppppppuVar22;
              ppppppuVar13 = (ulong ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
              goto LAB_100433100;
            }
            pppppppuStack_280 = (ulong *******)CONCAT71(pppppppuStack_280._1_7_,0x16);
            if (cVar3 == '\x16') {
              pppppppuStack_110 = pppppppuStack_2a8;
              pppppppuStack_118 = pppppppuVar22;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x0001004331b4;
            }
            uVar17 = *puVar28;
            puVar23[1] = puVar28[1];
            *puVar23 = uVar17;
            uVar17 = *(undefined8 *)((long)puVar28 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar17;
            uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,cVar3);
            FUN_1004b60cc(&uStack_90,&uStack_100);
            ppppppuStack_290 =
                 (ulong ******)CONCAT62(uStack_90._2_6_,CONCAT11(uStack_90._1_1_,(byte)uStack_90));
            if (ppppppuStack_290 == (ulong ******)0x8000000000000001) {
              *pppppppuStack_2a0 = (ulong ******)0x1d;
              pppppppuStack_2a0[1] = (ulong ******)CONCAT71(uStack_87,uStack_88);
              uVar11 = true;
              ppppppuStack_290 = (ulong ******)0x8000000000000001;
              uVar25 = true;
              uVar26 = true;
              pppppppuStack_118 = pppppppuVar22;
              pppppppuStack_110 = pppppppuStack_2a8;
              unaff_x25 = pppppppuStack_2a8;
              goto joined_r0x000100432a80;
            }
            pppppppuStack_2c0 = (ulong *******)CONCAT71(uStack_87,uStack_88);
            uStack_2c8 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
          }
        }
        else if (bVar15 == 2) {
          if (ppppppuVar21 != (ulong ******)0x8000000000000000) {
            pppppppuStack_110 = pppppppuStack_2a8;
            uStack_90._0_1_ = 0xda;
            uStack_90._1_1_ = 0x33;
            uStack_90._2_6_ = 0x108ca;
            uStack_88 = 5;
            uStack_87 = 0;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_118 = pppppppuVar22;
            ppppppuVar13 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_100433100;
          }
          pppppppuStack_280 = (ulong *******)CONCAT71(pppppppuStack_280._1_7_,0x16);
          if (cVar3 == '\x16') {
            pppppppuStack_110 = pppppppuStack_2a8;
            pppppppuStack_118 = pppppppuVar22;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004331b4;
          }
          uVar17 = *puVar28;
          puVar23[1] = puVar28[1];
          *puVar23 = uVar17;
          uVar17 = *(undefined8 *)((long)puVar28 + 0xf);
          *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
          *(undefined8 *)((long)puVar23 + 0xf) = uVar17;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,cVar3);
          FUN_1004b62d4(&uStack_90,&uStack_100);
          ppppppuVar21 = (ulong ******)
                         CONCAT62(uStack_90._2_6_,CONCAT11(uStack_90._1_1_,(byte)uStack_90));
          if (ppppppuVar21 == (ulong ******)0x8000000000000000) {
            pppppppuVar12 = (ulong *******)CONCAT71(uStack_87,uStack_88);
            ppppppuVar21 = (ulong ******)0x0;
            goto code_r0x000100432a5c;
          }
          pppppppuStack_2b8 = (ulong *******)CONCAT71(uStack_87,uStack_88);
          pppppppuStack_2d8 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
        }
        else if (bVar15 == 3) {
          if (pppppppuStack_288 != (ulong *******)0x8000000000000001) {
            pppppppuStack_110 = pppppppuStack_2a8;
            uStack_90._0_1_ = 0xc1;
            uStack_90._1_1_ = 0xac;
            uStack_90._2_6_ = 0x108cb;
            uStack_88 = 0x18;
            uStack_87 = 0;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_118 = pppppppuVar22;
            ppppppuVar13 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            *pppppppuStack_2a0 = (ulong ******)0x1d;
            pppppppuStack_2a0[1] = ppppppuVar13;
            uVar11 = true;
            uVar25 = true;
            goto joined_r0x0001004330b0;
          }
          func_0x000100f1ec38(&uStack_100,&pppppppuStack_280);
          pppppppuStack_288 = uStack_100;
          pppppppuVar12 = pppppppuStack_f8;
          if (uStack_100 == (ulong *******)0x8000000000000001) {
            *pppppppuStack_2a0 = (ulong ******)0x1d;
            pppppppuStack_2a0[1] = (ulong ******)pppppppuStack_f8;
            uVar26 = true;
            uVar11 = true;
            goto LAB_100432e3c;
          }
          pppppppuVar32 = pppppppuStack_e8;
          pppppppuStack_108 = pppppppuStack_f0;
          pppppppuStack_f0 = pppppppuStack_d8;
          pppppppuStack_f8 = pppppppuStack_e0;
          pppppppuStack_e8 = pppppppuStack_d0;
          pppppppuVar20 = pppppppuStack_258;
          pppppppuVar22 = uStack_100;
          pppppppuStack_2a8 = pppppppuVar12;
          uStack_100 = pppppppuVar32;
        }
        else {
          pppppppuStack_280 = (ulong *******)CONCAT71(pppppppuStack_280._1_7_,0x16);
          if (cVar3 == '\x16') {
            pppppppuStack_110 = pppppppuStack_2a8;
            pppppppuStack_118 = pppppppuVar22;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004331b4:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004331b8);
            (*pcVar4)();
          }
          uVar17 = *puVar28;
          puVar23[1] = puVar28[1];
          *puVar23 = uVar17;
          uVar17 = *(undefined8 *)((long)puVar28 + 0xf);
          *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
          *(undefined8 *)((long)puVar23 + 0xf) = uVar17;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,cVar3);
          FUN_100e077ec(&uStack_100);
        }
        pppppppuVar16 = pppppppuVar20;
      } while (pppppppuVar20 != unaff_x28);
      unaff_x25 = pppppppuStack_2a8;
      pppppppuStack_110 = pppppppuStack_2a8;
      pppppppuVar20 = pppppppuStack_2a0;
      pppppppuStack_118 = pppppppuVar22;
      if (ppppppuVar34 != (ulong ******)0x8000000000000000) {
        uVar11 = ppppppuStack_290 == (ulong ******)0x8000000000000001;
        ppppppuVar13 = (ulong ******)0x8000000000000000;
        if (!(bool)uVar11) {
          ppppppuVar13 = ppppppuStack_290;
        }
        if (ppppppuVar21 != (ulong ******)0x8000000000000000) {
          if (pppppppuStack_288 == (ulong *******)0x8000000000000001) {
            pppppppuStack_288 = (ulong *******)0x8000000000000000;
          }
          else {
            pppppppuStack_b8 = uStack_100;
            pppppppuStack_c0 = pppppppuStack_108;
            pppppppuStack_a8 = pppppppuStack_f0;
            pppppppuStack_b0 = pppppppuStack_f8;
            pppppppuStack_a0 = pppppppuStack_e8;
          }
          *pppppppuStack_2a0 = (ulong ******)0xc;
          pppppppuStack_2a0[1] = ppppppuVar34;
          pppppppuStack_2a0[2] = (ulong ******)pppppppuStack_2b0;
          pppppppuStack_2a0[3] = (ulong ******)pppppppuStack_2d0;
          pppppppuStack_2a0[4] = ppppppuVar21;
          pppppppuStack_2a0[5] = (ulong ******)pppppppuStack_2b8;
          pppppppuStack_2a0[6] = (ulong ******)pppppppuStack_2d8;
          pppppppuStack_2a0[7] = ppppppuVar13;
          pppppppuStack_2a0[8] = (ulong ******)pppppppuStack_2c0;
          pppppppuStack_2a0[9] = (ulong ******)uStack_2c8;
          pppppppuStack_2a0[10] = (ulong ******)pppppppuStack_288;
          pppppppuStack_2a0[0xb] = (ulong ******)pppppppuStack_2a8;
          pppppppuStack_2a0[0xd] = (ulong ******)pppppppuStack_b8;
          pppppppuStack_2a0[0xc] = (ulong ******)pppppppuStack_c0;
          pppppppuStack_2a0[0xf] = (ulong ******)pppppppuStack_a8;
          pppppppuStack_2a0[0xe] = (ulong ******)pppppppuStack_b0;
          pppppppuStack_2a0[0x10] = (ulong ******)pppppppuStack_a0;
          _memcpy(&ppppppuStack_230,pppppppuStack_2a0,0x118);
          ppppppuVar21 = (ulong ******)FUN_100fbc67c(&pppppppuStack_280);
          if (ppppppuVar21 == (ulong ******)0x0) {
            return;
          }
          *pppppppuStack_2a0 = (ulong ******)0x1d;
          pppppppuStack_2a0[1] = ppppppuVar21;
          FUN_100e35e0c(&ppppppuStack_230);
          return;
        }
        uStack_90._0_1_ = 0xda;
        uStack_90._1_1_ = 0x33;
        uStack_90._2_6_ = 0x108ca;
        uStack_88 = 5;
        uStack_87 = 0;
        uStack_100 = (ulong *******)&uStack_90;
        pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
        ppppppuVar21 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
        *pppppppuStack_2a0 = (ulong ******)0x1d;
        pppppppuStack_2a0[1] = ppppppuVar21;
        if (((ulong)ppppppuVar13 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_2c0);
        }
        if (ppppppuVar34 != (ulong ******)0x0) {
          _free(pppppppuStack_2b0);
        }
        uVar25 = false;
        uVar26 = false;
        ppppppuVar21 = (ulong ******)0x0;
        goto joined_r0x000100432a80;
      }
    }
    uStack_90._0_1_ = 0x72;
    uStack_90._1_1_ = 0x88;
    uStack_90._2_6_ = 0x108cb;
    uStack_88 = 0x11;
    uStack_87 = 0;
    uStack_100 = (ulong *******)&uStack_90;
    pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
    ppppppuVar34 = (ulong ******)0x0;
    ppppppuVar13 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
    *pppppppuVar20 = (ulong ******)0x1d;
    pppppppuVar20[1] = ppppppuVar13;
LAB_100432a34:
    uVar11 = true;
    uVar25 = true;
    uVar26 = true;
joined_r0x000100432a80:
    if (pppppppuStack_288 != (ulong *******)0x8000000000000001) {
joined_r0x0001004330b0:
      uVar26 = uVar25;
      if (pppppppuStack_288 != (ulong *******)0x8000000000000000) {
        if (pppppppuStack_288 != (ulong *******)0x0) {
          _free(unaff_x25);
        }
        if (uStack_100 != (ulong *******)0x0) {
          _free(pppppppuStack_f8);
        }
      }
    }
LAB_100432e3c:
    if (((ulong)ppppppuVar21 & 0x7fffffffffffffff) == 0) {
      uVar25 = false;
      if (ppppppuStack_290 != (ulong ******)0x8000000000000001) {
        uVar25 = uVar11;
      }
    }
    else {
      _free(pppppppuStack_2b8);
      uVar25 = false;
      if (ppppppuStack_290 != (ulong ******)0x8000000000000001) {
        uVar25 = uVar11;
      }
    }
    if (((bool)uVar25) && (((ulong)ppppppuStack_290 & 0x7fffffffffffffff) != 0)) {
      _free(pppppppuStack_2c0);
    }
    bVar10 = false;
    if (((ulong)ppppppuVar34 & 0x7fffffffffffffff) != 0) {
      bVar10 = (bool)uVar26;
    }
    if (bVar10) {
      _free(pppppppuStack_2b0);
    }
    FUN_100d34830(&pppppppuStack_260);
    if ((char)pppppppuStack_280 != '\x16') {
      FUN_100e077ec(&pppppppuStack_280);
    }
    return;
  case 0xef:
    goto code_r0x000100431770;
  case 0xf0:
    goto code_r0x0001004317b4;
  }
  pppppppuStack_270 = (ulong *******)CONCAT71(pppppppuStack_270._1_7_,bVar15);
code_r0x000100431e8c:
  param_4 = &UNK_10b21c470;
  pppppppuVar12 = (ulong *******)&pppppppuStack_270;
code_r0x000100431e98:
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x000100431e9c:
  pppppppuVar12 = (ulong *******)FUN_107c05dcc(pppppppuVar12,param_3,param_4);
code_r0x000100431ea0:
  pppppppuVar16 = (ulong *******)0x6e;
code_r0x000100431ea4:
  *param_2 = (ulong ******)((ulong)pppppppuVar16 | 0x8000000000000000);
  param_2[1] = (ulong ******)pppppppuVar12;
code_r0x000100431eb0:
code_r0x000100431eb4:
code_r0x000100431eb8:
code_r0x000100431ebc:
code_r0x000100431ec4:
code_r0x000100431ec8:
  return;
}

