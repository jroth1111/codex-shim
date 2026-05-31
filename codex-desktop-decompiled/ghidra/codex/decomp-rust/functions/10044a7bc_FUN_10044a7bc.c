
/* WARNING: Type propagation algorithm not settling */

void FUN_10044a7bc(undefined1 param_1 [16],char *param_2,ulong *******param_3,undefined *param_4)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 in_ZR;
  ulong *******pppppppuVar9;
  ulong ******ppppppuVar10;
  uint uVar11;
  byte bVar12;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong *******pppppppuVar17;
  ulong ******ppppppuVar18;
  ulong *******unaff_x19;
  ulong *******pppppppuVar19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar20;
  ulong *******unaff_x24;
  long lVar21;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******pppppppuVar22;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined8 unaff_x30;
  ulong *******pppppppuVar24;
  byte abStack_324 [76];
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
  ulong ******ppppppuStack_78;
  
  ppppppuVar18 = param_1._8_8_;
  pppppppuVar24 = param_1._0_8_;
  puVar23 = &stack0xfffffffffffffff0;
  pbVar7 = abStack_324 + 0x44;
  pppppppuVar19 = (ulong *******)&uStack_90;
  bVar12 = *(byte *)param_3;
  pppppppuVar13 = (ulong *******)(ulong)bVar12;
  pppppppuVar17 = (ulong *******)&UNK_108c98eec;
  pbVar8 = abStack_324 + 0x44;
  pbVar6 = abStack_324 + 0x44;
  pbVar5 = abStack_324 + 0x44;
  pppppppuVar9 = (ulong *******)param_2;
  pppppppuVar14 = pppppppuVar13;
  pppppppuVar20 = unaff_x23;
  pppppppuVar22 = (ulong *******)param_2;
  switch(bVar12) {
  case 0:
    bVar12 = *(byte *)((long)param_3 + 1);
  case 0xc0:
    ppppppuStack_270 = (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar12) << 8);
code_r0x00010044afd4:
    goto code_r0x00010044b028;
  case 1:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0x8d:
  case 0xcf:
code_r0x00010044afe0:
    bVar12 = 1;
    break;
  case 2:
    pppppppuStack_268 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
    goto code_r0x00010044afe0;
  case 3:
  case 0x90:
  case 0xd2:
    pppppppuVar13 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x9e:
    pppppppuStack_268 = pppppppuVar13;
    goto code_r0x00010044afe0;
  case 4:
  case 0xaa:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x00010044afe0;
  case 5:
    pppppppuVar13 = (ulong *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0x86:
  case 0xa3:
  case 200:
    pppppppuStack_268 = pppppppuVar13;
    goto code_r0x00010044b020;
  case 6:
  case 0xa9:
    pppppppuVar13 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x87:
  case 0xc9:
    pppppppuStack_268 = pppppppuVar13;
    goto code_r0x00010044b020;
  case 7:
    pppppppuVar13 = (ulong *******)(long)*(int *)((long)param_3 + 4);
  case 0xa6:
    pppppppuStack_268 = pppppppuVar13;
code_r0x00010044b020:
    bVar12 = 2;
    break;
  case 8:
  case 0xa1:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x00010044b020;
  case 9:
  case 0xa5:
    pppppppuVar24 = (ulong *******)(double)*(float *)((long)param_3 + 4);
  case 0x8b:
  case 0xcd:
code_r0x00010044b00c:
    pppppppuStack_268 = pppppppuVar24;
code_r0x00010044b010:
    bVar12 = 3;
code_r0x00010044b014:
    break;
  case 10:
    pppppppuVar24 = (ulong *******)param_3[1];
    goto code_r0x00010044b00c;
  case 0xb:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    pbVar6 = &stack0xffffffffffffffa0;
    pppppppuVar19 = unaff_x19;
    puVar23 = unaff_x29;
  case 0x94:
  case 0xd6:
    pbVar7 = pbVar6 + 0x60;
code_r0x00010044af60:
    *(ulong ********)(pbVar7 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar7 + -0x18) = pppppppuVar19;
    *(undefined1 **)(pbVar7 + -0x10) = puVar23;
    *(undefined8 *)(pbVar7 + -8) = unaff_x30;
    *(undefined4 *)(pbVar7 + -0x44) = 0;
    uVar11 = (uint)param_3;
    if (uVar11 < 0x80) {
      pbVar7[-0x44] = (byte)param_3;
      uVar15 = 1;
    }
    else {
      bVar12 = (byte)param_3 & 0x3f | 0x80;
      if (uVar11 < 0x800) {
        pbVar7[-0x44] = (byte)(uVar11 >> 6) | 0xc0;
        pbVar7[-0x43] = bVar12;
        uVar15 = 2;
      }
      else {
        bVar1 = (byte)(uVar11 >> 6) & 0x3f | 0x80;
        if (uVar11 < 0x10000) {
          pbVar7[-0x44] = (byte)(uVar11 >> 0xc) | 0xe0;
          pbVar7[-0x43] = bVar1;
          pbVar7[-0x42] = bVar12;
          uVar15 = 3;
        }
        else {
          pbVar7[-0x44] = (byte)(uVar11 >> 0x12) | 0xf0;
          pbVar7[-0x43] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          pbVar7[-0x42] = bVar1;
          pbVar7[-0x41] = bVar12;
          uVar15 = 4;
        }
      }
    }
    *(byte **)(pbVar7 + -0x38) = pbVar7 + -0x44;
    *(undefined8 *)(pbVar7 + -0x30) = uVar15;
    pbVar7[-0x40] = 5;
    ppppppuVar18 = (ulong ******)func_0x000108a4a50c(pbVar7 + -0x40,pbVar7 + -0x21,&UNK_10b219390);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
    return;
  case 0xc:
  case 0xa8:
    param_3 = param_3 + 1;
    pbVar8 = &stack0xffffffffffffffa0;
    pppppppuVar19 = unaff_x19;
    puVar23 = unaff_x29;
  case 0x8f:
  case 0xd1:
    *(ulong ********)(pbVar8 + 0x30) = unaff_x22;
    *(ulong ********)(pbVar8 + 0x38) = unaff_x21;
    *(ulong ********)(pbVar8 + 0x40) = unaff_x20;
    *(ulong ********)(pbVar8 + 0x48) = pppppppuVar19;
    *(undefined1 **)(pbVar8 + 0x50) = puVar23;
    *(undefined8 *)(pbVar8 + 0x58) = unaff_x30;
    ppppppuVar18 = param_3[1];
    ppppppuVar10 = param_3[2];
    *(ulong *******)(pbVar8 + 0x18) = ppppppuVar18;
    *(ulong *******)(pbVar8 + 0x20) = ppppppuVar10;
    pbVar8[0x10] = 5;
    ppppppuVar10 = (ulong ******)func_0x000108a4a50c(pbVar8 + 0x10,pbVar8 + 0x2f,&UNK_10b219390);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar10;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar18);
    }
    return;
  case 0xd:
  case 0x26:
  case 0xec:
    pppppppuVar13 = (ulong *******)param_3[1];
    pppppppuVar17 = (ulong *******)param_3[2];
  case 0x93:
  case 0xd5:
    pppppppuStack_268 = pppppppuVar13;
    pppppppuStack_260 = pppppppuVar17;
code_r0x00010044aff8:
    bVar12 = 5;
code_r0x00010044affc:
    break;
  case 0xe:
    param_3 = param_3 + 1;
    pbVar5 = &stack0xffffffffffffffa0;
  case 0x54:
    *(undefined8 *)(pbVar5 + 0x30) = *(undefined8 *)(pbVar5 + 0x30);
    *(undefined8 *)(pbVar5 + 0x38) = *(undefined8 *)(pbVar5 + 0x38);
    *(undefined8 *)(pbVar5 + 0x40) = *(undefined8 *)(pbVar5 + 0x40);
    *(undefined8 *)(pbVar5 + 0x48) = *(undefined8 *)(pbVar5 + 0x48);
    *(undefined8 *)(pbVar5 + 0x50) = *(undefined8 *)(pbVar5 + 0x50);
    *(undefined8 *)(pbVar5 + 0x58) = *(undefined8 *)(pbVar5 + 0x58);
    ppppppuVar18 = param_3[1];
    ppppppuVar10 = param_3[2];
    *(ulong *******)(pbVar5 + 0x18) = ppppppuVar18;
    *(ulong *******)(pbVar5 + 0x20) = ppppppuVar10;
    pbVar5[0x10] = 6;
    ppppppuVar10 = (ulong ******)func_0x000108a4a50c(pbVar5 + 0x10,pbVar5 + 0x2f,&UNK_10b219390);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar10;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar18);
    }
    return;
  case 0xf:
    pppppppuStack_268 = (ulong *******)param_3[1];
    pppppppuStack_260 = (ulong *******)param_3[2];
  case 0x88:
  case 0xca:
    bVar12 = 6;
    break;
  case 0x10:
    bVar12 = 8;
    break;
  default:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuStack_258 = unaff_x20[3];
    pppppppuStack_260 = (ulong *******)unaff_x20[2];
    func_0x000107c049dc(param_2,&ppppppuStack_270);
    goto code_r0x00010044ac28;
  case 0x12:
  case 0x79:
  case 0xbf:
    bVar12 = 7;
  case 0x68:
  case 0xfd:
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuVar18 = unaff_x20[3];
    pppppppuVar24 = (ulong *******)unaff_x20[2];
  case 0xad:
    pppppppuStack_260 = pppppppuVar24;
    ppppppuStack_258 = ppppppuVar18;
code_r0x00010044ac1c:
    func_0x000107c054ac(param_2,&ppppppuStack_270);
code_r0x00010044ac28:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x14:
  case 0x29:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
  case 0xef:
    unaff_x26 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
code_r0x00010044ac58:
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
code_r0x00010044ac5c:
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
code_r0x00010044ac60:
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x00010044ac80:
      param_3 = (ulong *******)&UNK_10b22f8a8;
      param_4 = &UNK_10b20a590;
code_r0x00010044ac90:
      pppppppuVar9 = (ulong *******)0x0;
code_r0x00010044ac94:
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(pppppppuVar9,param_3,param_4);
code_r0x00010044ac9c:
      pppppppuVar13 = (ulong *******)0x800000000000006e;
code_r0x00010044aca4:
      *(ulong ********)param_2 = pppppppuVar13;
      *(ulong ********)((long)param_2 + 8) = unaff_x22;
code_r0x00010044aca8:
      lVar21 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar21 = lVar21 + -1, lVar21 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2b8 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x00010044ac80;
      ppppppuVar18 = *(ulong *******)((long)unaff_x20 + 9);
      pppppppuVar24 = *(ulong ********)((long)unaff_x20 + 1);
      bVar12 = *(byte *)unaff_x20;
code_r0x00010044ace8:
      uStack_90._0_1_ = bVar12;
      uStack_87 = SUB87(ppppppuVar18,0);
      uStack_90._1_1_ = (char)pppppppuVar24;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar24 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar24 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
      pppppppuVar9 = (ulong *******)&pppppppuStack_a8;
code_r0x00010044ad04:
      func_0x00010135ba2c(pppppppuVar9,&uStack_90);
      unaff_x22 = pppppppuStack_a0;
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x00010044ac9c;
      unaff_x25 = pppppppuStack_a8;
      if (unaff_x26 == (ulong *******)0x1) {
code_r0x00010044ad3c:
        param_3 = (ulong *******)&UNK_10b22f8a8;
        param_4 = &UNK_10b20a000;
code_r0x00010044ad48:
        ppppppuVar18 = (ulong ******)thunk_FUN_1087e422c(1,param_3,param_4 + 0x590);
        *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
        *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x00010044ad68:
          _free(unaff_x22);
        }
        goto code_r0x00010044aca8;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar12 = *(byte *)(unaff_x20 + 4);
      unaff_x26 = pppppppuStack_98;
      pppppppuStack_2b8 = unaff_x21;
      if (bVar12 == 0x16) goto code_r0x00010044ad3c;
code_r0x00010044b070:
      ppppppuVar18 = *(ulong *******)((long)unaff_x20 + 0x29);
      pppppppuVar24 = *(ulong ********)((long)unaff_x20 + 0x21);
code_r0x00010044b074:
      uStack_87 = SUB87(ppppppuVar18,0);
      uStack_90._1_1_ = (char)pppppppuVar24;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar24 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar24 >> 0x38);
code_r0x00010044b078:
      ppppppuStack_78 = unaff_x20[7];
      uStack_80 = SUB81(unaff_x20[6],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[6] >> 8);
code_r0x00010044b080:
      pppppppuVar17 = (ulong *******)0x2;
code_r0x00010044b084:
      pppppppuStack_2a0 = pppppppuVar17;
code_r0x00010044b088:
      uStack_90._0_1_ = bVar12;
code_r0x00010044b08c:
      pppppppuVar9 = (ulong *******)&pppppppuStack_a8;
code_r0x00010044b090:
      param_3 = (ulong *******)&uStack_90;
code_r0x00010044b094:
      func_0x000101334fa8(pppppppuVar9,param_3);
code_r0x00010044b098:
      pppppppuVar13 = (ulong *******)((ulong)pppppppuStack_a8 & 0xff);
code_r0x00010044b09c:
      pppppppuVar9 = pppppppuStack_a0;
      if (((ulong)pppppppuVar13 & 1) != 0) {
code_r0x00010044b0a4:
        pppppppuVar13 = (ulong *******)0x6e;
code_r0x00010044b0a8:
        pppppppuVar13 = (ulong *******)((ulong)pppppppuVar13 | 0x8000000000000000);
code_r0x00010044b0ac:
        *(ulong ********)param_2 = pppppppuVar13;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar9;
code_r0x00010044b0b0:
        in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x00010044b0b4:
        if (!(bool)in_ZR) goto code_r0x00010044ad68;
        goto code_r0x00010044aca8;
      }
code_r0x00010044b0bc:
      pppppppuVar19 = (ulong *******)0x6e;
code_r0x00010044b0c0:
      pppppppuVar19 = (ulong *******)((ulong)pppppppuVar19 & 0xffffffffffff | 0x8000000000000000);
code_r0x00010044b0c4:
      bVar12 = (byte)((ulong)pppppppuStack_a8 >> 8);
code_r0x00010044b0c8:
      pppppppuVar17 = pppppppuVar19 + -3;
code_r0x00010044b0cc:
      *(ulong ********)param_2 = pppppppuVar17;
      *(ulong ********)((long)param_2 + 8) = unaff_x25;
code_r0x00010044b0d0:
      *(ulong ********)((long)param_2 + 0x10) = unaff_x22;
      *(ulong ********)((long)param_2 + 0x18) = unaff_x26;
code_r0x00010044b0d4:
      *(byte *)((long)param_2 + 0x20) = bVar12;
code_r0x00010044b0d8:
      pppppppuVar9 = &ppppppuStack_270;
      param_4 = (undefined *)0x1c0;
      param_3 = (ulong *******)param_2;
code_r0x00010044b0e4:
      _memcpy(pppppppuVar9,param_3,param_4);
code_r0x00010044b0e8:
      pppppppuVar9 = (ulong *******)&pppppppuStack_2c0;
code_r0x00010044b0ec:
      pppppppuVar9 = (ulong *******)FUN_100fbc738(pppppppuVar9);
code_r0x00010044b0f0:
      if (pppppppuVar9 != (ulong *******)0x0) {
code_r0x00010044b0f4:
        *pppppppuVar22 = (ulong ******)pppppppuVar19;
        pppppppuVar22[1] = (ulong ******)pppppppuVar9;
code_r0x00010044b0f8:
        param_2 = (char *)&ppppppuStack_270;
code_r0x00010044b0fc:
        FUN_100e44f40(param_2);
code_r0x00010044b100:
      }
    }
    goto LAB_10044b048;
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
    ppppppuVar18 = param_3[3];
    pppppppuStack_288 = pppppppuStack_2a0 + (long)ppppppuVar18 * 8;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    pppppppuStack_298 = pppppppuStack_2a0;
    if (ppppppuVar18 != (ulong ******)0x0) {
      unaff_x23 = (ulong *******)0x0;
      unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
      pppppppuVar9 = (ulong *******)((ulong)&pppppppuStack_2c0 | 1);
      pppppppuStack_2d8 = (ulong *******)(((long)ppppppuVar18 * 0x40 - 0x40U >> 6) + 1);
      unaff_x21 = (ulong *******)0x2;
      unaff_x22 = (ulong *******)0x8000000000000001;
      unaff_x26 = pppppppuStack_288;
      unaff_x25 = pppppppuStack_2a0;
      pppppppuStack_2d0 = (ulong *******)param_2;
      do {
        unaff_x24 = unaff_x25 + 8;
        bVar12 = *(byte *)unaff_x25;
        pppppppuVar20 = unaff_x23;
        if (bVar12 == 0x16) break;
        ppppppuVar18 = unaff_x25[2];
        *(ulong *******)((long)unaff_x28 + 0x17) = unaff_x25[3];
        *(ulong *******)((long)unaff_x28 + 0xf) = ppppppuVar18;
        uVar15 = *(undefined8 *)((long)unaff_x25 + 1);
        unaff_x28[1] = *(undefined8 *)((long)unaff_x25 + 9);
        *unaff_x28 = uVar15;
        pppppppuStack_2b8 = (ulong *******)unaff_x25[5];
        pppppppuStack_2c0 = (ulong *******)unaff_x25[4];
        pppppppuStack_2a8 = (ulong *******)unaff_x25[7];
        pppppppuStack_2b0 = (ulong *******)unaff_x25[6];
        piVar2 = (int *)CONCAT71(uStack_87,uStack_88);
        piVar3 = (int *)CONCAT71(uStack_7f,uStack_80);
        uStack_90._0_1_ = bVar12;
        if (bVar12 < 0xd) {
          if (bVar12 == 1) {
            uVar16 = 1;
            if (uStack_90._1_1_ != '\x01') {
              uVar16 = 2;
            }
            uVar11 = 0;
            if (uStack_90._1_1_ != '\0') {
              uVar11 = uVar16;
            }
          }
          else {
            if (bVar12 != 4) {
              if (bVar12 == 0xc) {
                if (ppppppuStack_78 == (ulong ******)0x6) {
                  uVar11 = 1;
                  if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                    uVar11 = 2;
                  }
                }
                else if (ppppppuStack_78 == (ulong ******)0x2) {
                  uVar11 = 2;
                  if ((short)*piVar3 == 0x6469) {
                    uVar11 = 0;
                  }
                }
                else {
                  uVar11 = 2;
                }
                goto joined_r0x00010044aa74;
              }
code_r0x00010044b1e8:
              pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
              pppppppuStack_298 = unaff_x24;
              param_2 = (char *)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b20e4c0);
              pppppppuVar17 = pppppppuStack_2d0;
              goto LAB_10044aec8;
            }
            uVar16 = 1;
            if (piVar2 != (int *)0x1) {
              uVar16 = 2;
            }
            uVar11 = 0;
            if (piVar2 != (int *)0x0) {
              uVar11 = uVar16;
            }
          }
code_r0x00010044ab00:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (bVar12 == 0xd) {
            if (piVar3 == (int *)0x6) {
              uVar11 = 1;
              if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
                uVar11 = 2;
              }
            }
            else {
              if (piVar3 != (int *)0x2) goto code_r0x00010044aacc;
              uVar11 = 2;
              if ((short)*piVar2 == 0x6469) {
                uVar11 = 0;
              }
            }
            goto code_r0x00010044ab00;
          }
          if (bVar12 != 0xe) {
            if (bVar12 != 0xf) goto code_r0x00010044b1e8;
            if (piVar3 == (int *)0x6) {
              if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                   (*(char *)((long)piVar2 + 2) != 'r')) ||
                  ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
                 (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x00010044aacc;
              uVar11 = 1;
            }
            else if (((piVar3 == (int *)0x2) && ((char)*piVar2 == 'i')) &&
                    (*(char *)((long)piVar2 + 1) == 'd')) {
              uVar11 = 0;
            }
            else {
code_r0x00010044aacc:
              uVar11 = 2;
            }
            goto code_r0x00010044ab00;
          }
          if (ppppppuStack_78 == (ulong ******)0x6) {
            if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
                 (*(char *)((long)piVar3 + 2) != 'r')) ||
                ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
               (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x00010044aa3c;
            uVar11 = 1;
          }
          else if (((ppppppuStack_78 == (ulong ******)0x2) && ((char)*piVar3 == 'i')) &&
                  (*(char *)((long)piVar3 + 1) == 'd')) {
            uVar11 = 0;
          }
          else {
code_r0x00010044aa3c:
            uVar11 = 2;
          }
joined_r0x00010044aa74:
          if (piVar2 != (int *)0x0) {
            _free();
          }
        }
        pppppppuVar13 = (ulong *******)(ulong)uVar11;
        if (uVar11 == 0) {
          if (unaff_x22 != (ulong *******)0x8000000000000001) goto code_r0x00010044b12c;
          bVar12 = (byte)pppppppuStack_2c0;
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar12 == 0x16) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
            pppppppuStack_298 = unaff_x24;
            goto code_r0x00010044b1c8;
          }
          ppppppuVar18 = *pppppppuVar9;
          unaff_x28[1] = pppppppuVar9[1];
          *unaff_x28 = ppppppuVar18;
          uVar15 = *(undefined8 *)((long)pppppppuVar9 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar9 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar15;
          uStack_90._0_1_ = bVar12;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          unaff_x20 = pppppppuStack_a0;
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
            pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
            pppppppuVar19 = (ulong *******)&pppppppuStack_2c0;
            pppppppuVar9 = pppppppuStack_2d0;
            pppppppuStack_298 = unaff_x24;
            goto code_r0x00010044add0;
          }
          pppppppuStack_2c8 = pppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
          pppppppuVar17 = unaff_x24;
          unaff_x24 = unaff_x26;
        }
        else {
code_r0x00010044ab20:
          bVar12 = (byte)pppppppuStack_2c0;
          if ((int)pppppppuVar13 == 1) {
            if ((int)unaff_x21 != 2) goto code_r0x00010044b174;
            pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
            if (bVar12 == 0x16) goto code_r0x00010044b104;
            ppppppuVar18 = *pppppppuVar9;
            unaff_x28[1] = pppppppuVar9[1];
            *unaff_x28 = ppppppuVar18;
            uVar15 = *(undefined8 *)((long)pppppppuVar9 + 0xf);
            *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar9 + 0x17);
            *(undefined8 *)((long)unaff_x28 + 0xf) = uVar15;
            uStack_90._0_1_ = bVar12;
            func_0x000101334fa8(&pppppppuStack_a8,&uStack_90);
code_r0x00010044ab64:
            if ((char)pppppppuStack_a8 == '\x01') {
              pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
              pppppppuStack_298 = unaff_x24;
              goto code_r0x00010044aebc;
            }
            unaff_x21 = (ulong *******)((ulong)pppppppuStack_a8 >> 8 & 0xff);
            pppppppuVar17 = unaff_x24;
            unaff_x24 = unaff_x26;
          }
          else {
            pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
            if (bVar12 == 0x16) goto code_r0x00010044b104;
            ppppppuVar18 = *pppppppuVar9;
            unaff_x28[1] = pppppppuVar9[1];
            *unaff_x28 = ppppppuVar18;
            uVar15 = *(undefined8 *)((long)pppppppuVar9 + 0xf);
            *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar9 + 0x17);
            *(undefined8 *)((long)unaff_x28 + 0xf) = uVar15;
            uStack_90._0_1_ = bVar12;
            FUN_100e077ec(&uStack_90);
            pppppppuVar17 = unaff_x24;
            unaff_x24 = unaff_x26;
          }
        }
        pppppppuVar19 = unaff_x25 + 8;
        unaff_x23 = (ulong *******)((long)unaff_x23 + 1);
        pppppppuVar20 = pppppppuStack_2d8;
        unaff_x26 = unaff_x24;
        unaff_x25 = pppppppuVar17;
      } while (pppppppuVar19 != unaff_x24);
      param_2 = (char *)pppppppuStack_2d0;
      pppppppuStack_298 = unaff_x24;
      pppppppuStack_280 = pppppppuVar20;
      if (unaff_x22 != (ulong *******)0x8000000000000001) {
        pppppppuVar17 = pppppppuStack_2c8;
        if ((int)unaff_x21 != 2) goto code_r0x00010044ae50;
        pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
        pppppppuStack_a0 = (ulong *******)0x6;
        pppppppuVar13 = (ulong *******)&pppppppuStack_a8;
        pppppppuVar17 = (ulong *******)&DAT_100c7b3a0;
        pppppppuVar9 = pppppppuStack_2d0;
        goto code_r0x00010044ae20;
      }
    }
    pppppppuVar19 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar13 = (ulong *******)&UNK_108ca26b0;
    pppppppuVar9 = (ulong *******)param_2;
  case 0x3f:
    pppppppuStack_a0 = (ulong *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = s_missing_field_____108ac28f7;
    param_3 = (ulong *******)&uStack_90;
    pppppppuStack_a8 = pppppppuVar13;
code_r0x00010044adc8:
    unaff_x20 = (ulong *******)thunk_FUN_108856088(param_2,param_3);
code_r0x00010044add0:
    *pppppppuVar9 = (ulong ******)0x800000000000006e;
    pppppppuVar9[1] = (ulong ******)unaff_x20;
LAB_10044addc:
    FUN_100d34830(pppppppuVar19 + 4);
code_r0x00010044ade4:
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
code_r0x00010044adf8:
    }
    goto LAB_10044b048;
  case 0x16:
  case 0xdc:
    goto code_r0x00010044b0ac;
  case 0x17:
  case 0xdd:
    goto code_r0x00010044b0bc;
  case 0x18:
  case 0xde:
    goto code_r0x00010044b084;
  case 0x19:
  case 99:
  case 0xdf:
  case 0xfe:
    goto code_r0x00010044b09c;
  case 0x1a:
  case 0xa7:
  case 0xe0:
    goto LAB_10044b048;
  case 0x1b:
  case 100:
  case 0x70:
  case 0xe1:
    goto code_r0x00010044b0cc;
  case 0x1c:
  case 0x71:
  case 0xe2:
    goto code_r0x00010044b0e4;
  case 0x1d:
  case 0xe3:
    goto code_r0x00010044b0a4;
  case 0x1e:
  case 0xe4:
    goto code_r0x00010044b0fc;
  case 0x1f:
  case 0x3c:
  case 0xb3:
  case 0xe5:
    goto code_r0x00010044b078;
  case 0x20:
  case 0x75:
  case 0xe6:
    goto code_r0x00010044b0ec;
  case 0x21:
  case 0x9a:
  case 0xe7:
    goto code_r0x00010044b020;
  case 0x22:
  case 0xe8:
    goto code_r0x00010044b050;
  case 0x23:
  case 0x7d:
  case 0xe9:
    goto code_r0x00010044b0d4;
  case 0x24:
  case 0x9c:
  case 0xea:
    goto code_r0x00010044aff8;
  case 0x25:
  case 0xeb:
    goto code_r0x00010044b08c;
  case 0x28:
  case 0xee:
    goto code_r0x00010044b14c;
  case 0x2a:
    goto code_r0x00010044ac90;
  case 0x2c:
  case 0x78:
    goto code_r0x00010044b134;
  case 0x2d:
  case 0x76:
    goto code_r0x00010044b144;
  case 0x2e:
  case 0xc2:
    goto code_r0x00010044b10c;
  case 0x2f:
    goto code_r0x00010044b124;
  case 0x30:
  case 0xf4:
    goto code_r0x00010044b0d0;
  case 0x31:
    goto code_r0x00010044b154;
  case 0x32:
    goto code_r0x00010044b16c;
  case 0x33:
  case 0x74:
code_r0x00010044b12c:
    pppppppuVar13 = (ulong *******)((long)unaff_x23 + 1);
  case 0xf8:
    pppppppuStack_298 = unaff_x24;
code_r0x00010044b134:
    pppppppuStack_280 = pppppppuVar13;
code_r0x00010044b138:
    pppppppuVar13 = (ulong *******)&UNK_108ca26b0;
    pppppppuVar17 = (ulong *******)0x2;
code_r0x00010044b144:
    pppppppuStack_a8 = pppppppuVar13;
    pppppppuStack_a0 = pppppppuVar17;
code_r0x00010044b148:
    pppppppuVar13 = (ulong *******)&pppppppuStack_a8;
code_r0x00010044b14c:
    pppppppuVar17 = (ulong *******)&UNK_100c7b000;
code_r0x00010044b150:
    pppppppuVar17 = pppppppuVar17 + 0x74;
code_r0x00010044b154:
    uStack_90._0_1_ = (byte)pppppppuVar13;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar13 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar13 >> 0x10);
    uStack_88 = SUB81(pppppppuVar17,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar17 >> 8);
    param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010044b15c:
    param_2 = (char *)((long)param_2 + 0x973);
code_r0x00010044b160:
    param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_90);
code_r0x00010044b168:
    pppppppuVar17 = pppppppuStack_2d0;
code_r0x00010044b16c:
    goto LAB_10044aec8;
  case 0x34:
    goto code_r0x00010044b184;
  case 0x35:
  case 0x5a:
    goto code_r0x00010044b100;
  case 0x36:
code_r0x00010044b174:
    pppppppuVar14 = (ulong *******)((long)unaff_x23 + 1);
  case 0x60:
    pppppppuVar13 = (ulong *******)&UNK_108cb9000;
    pppppppuStack_298 = unaff_x24;
    pppppppuStack_280 = pppppppuVar14;
code_r0x00010044b184:
    pppppppuStack_a8 = (ulong *******)((long)pppppppuVar13 + 0x606);
    pppppppuStack_a0 = (ulong *******)0x6;
code_r0x00010044b190:
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar17 = pppppppuStack_2d0;
code_r0x00010044b1b4:
    goto LAB_10044aec8;
  case 0x37:
  case 0xb5:
    goto code_r0x00010044b0a8;
  case 0x38:
  case 0xb8:
    goto code_r0x00010044b0d8;
  case 0x39:
    goto code_r0x00010044b15c;
  case 0x3a:
  case 0xb7:
    goto code_r0x00010044b080;
  case 0x3b:
  case 0x73:
    goto code_r0x00010044b114;
  case 0x3e:
    goto code_r0x00010044b1b4;
  case 0x40:
    goto code_r0x00010044ade4;
  case 0x42:
    goto code_r0x00010044ae84;
  case 0x43:
    goto code_r0x00010044ae94;
  case 0x44:
    goto code_r0x00010044ae5c;
  case 0x45:
    goto code_r0x00010044ae74;
  case 0x46:
code_r0x00010044ae20:
    uStack_90._0_1_ = (byte)pppppppuVar13;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar13 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar13 >> 0x10);
    uStack_88 = SUB81(pppppppuVar17,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar17 >> 8);
    param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
  case 0x4e:
    ppppppuVar18 = (ulong ******)thunk_FUN_108856088((byte *)((long)param_2 + 0x8f7),&uStack_90);
    *pppppppuVar9 = (ulong ******)0x800000000000006e;
    pppppppuVar9[1] = ppppppuVar18;
    unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    pppppppuVar19 = (ulong *******)&pppppppuStack_2c0;
joined_r0x00010044aee4:
    if (unaff_x22 != (ulong *******)0x0) {
      _free(unaff_x20);
    }
    goto LAB_10044addc;
  case 0x47:
    goto code_r0x00010044aea4;
  case 0x48:
code_r0x00010044aebc:
    param_2 = (char *)pppppppuStack_a0;
    pppppppuVar17 = pppppppuStack_2d0;
  case 0x4c:
LAB_10044aec8:
    pppppppuVar19 = (ulong *******)&pppppppuStack_2c0;
    *pppppppuVar17 = (ulong ******)0x800000000000006e;
    pppppppuVar17[1] = (ulong ******)param_2;
code_r0x00010044aed4:
    if (-0x7fffffffffffffff < (long)unaff_x22) goto joined_r0x00010044aee4;
    goto LAB_10044addc;
  case 0x49:
    goto code_r0x00010044ae7c;
  case 0x4a:
    goto code_r0x00010044aed4;
  case 0x4b:
code_r0x00010044ae50:
    pppppppuVar19 = (ulong *******)0x800000000000006e;
    pppppppuVar13 = (ulong *******)0x8000000000000056;
code_r0x00010044ae5c:
    *(ulong ********)param_2 = pppppppuVar13;
    *(ulong ********)((long)param_2 + 8) = unaff_x22;
    *(ulong ********)((long)param_2 + 0x10) = unaff_x20;
    *(ulong ********)((long)param_2 + 0x18) = pppppppuVar17;
code_r0x00010044ae64:
    param_3 = (ulong *******)param_2;
    *(byte *)(param_3 + 4) = (byte)unaff_x21;
    param_2 = (char *)&ppppppuStack_270;
    param_4 = (undefined *)0x1c0;
    pppppppuVar22 = param_3;
code_r0x00010044ae74:
    _memcpy(param_2,param_3,param_4);
    pppppppuVar13 = (ulong *******)&pppppppuStack_2c0;
code_r0x00010044ae7c:
    FUN_100d34830(pppppppuVar13 + 4);
code_r0x00010044ae84:
    if (unaff_x26 != unaff_x24) {
      pppppppuVar13 = (ulong *******)((ulong)((long)unaff_x26 - (long)unaff_x24) >> 6);
code_r0x00010044ae94:
      uStack_90._0_1_ = (byte)pppppppuVar20;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar20 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar20 >> 0x10);
      param_4 = &UNK_10b23a190;
      param_2 = (char *)((long)pppppppuVar13 + (long)pppppppuVar20);
code_r0x00010044aea4:
      pppppppuVar9 = (ulong *******)thunk_FUN_1087e422c(param_2,&uStack_90,param_4);
code_r0x00010044aeac:
      goto code_r0x00010044b0f4;
    }
    goto LAB_10044b048;
  case 0x4d:
    goto code_r0x00010044adf8;
  case 0x4f:
    goto code_r0x00010044aeac;
  case 0x50:
    goto code_r0x00010044add0;
  case 0x51:
    goto code_r0x00010044ae64;
  case 0x52:
    goto code_r0x00010044adc8;
  case 0x55:
    goto code_r0x00010044ab20;
  case 0x56:
    goto code_r0x00010044ab64;
  case 0x58:
    goto code_r0x00010044b128;
  case 0x59:
  case 0xfc:
    goto code_r0x00010044b138;
  case 0x5b:
  case 0xf7:
    goto code_r0x00010044b118;
  case 0x5c:
  case 0xfb:
    goto code_r0x00010044b0c4;
  case 0x5d:
  case 0xfa:
    goto code_r0x00010044b148;
  case 0x5e:
    goto code_r0x00010044b160;
  case 0x5f:
  case 0xff:
    goto code_r0x00010044b120;
  case 0x61:
  case 0x6e:
    goto code_r0x00010044b0f4;
  case 0x62:
    goto code_r0x00010044b168;
  case 0x65:
    goto code_r0x00010044b150;
  case 0x66:
    goto code_r0x00010044b074;
  case 0x67:
  case 0xf3:
    goto code_r0x00010044b108;
  case 0x6a:
code_r0x00010044b1c8:
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x00010044b1e4;
  case 0x6b:
    goto code_r0x00010044ac58;
  case 0x6c:
    goto code_r0x00010044ac9c;
  case 0x6f:
code_r0x00010044b104:
    pppppppuVar13 = (ulong *******)((long)unaff_x23 + 1);
code_r0x00010044b108:
    pppppppuStack_298 = unaff_x24;
code_r0x00010044b10c:
    param_2 = &UNK_108ca1000;
    pppppppuStack_280 = pppppppuVar13;
code_r0x00010044b114:
    param_2 = (char *)((long)param_2 + 0xa98);
code_r0x00010044b118:
    param_4 = &UNK_10b24f000;
code_r0x00010044b11c:
    param_4 = param_4 + 0x848;
code_r0x00010044b120:
    param_3 = (ulong *******)0x2c;
code_r0x00010044b124:
    FUN_107c05cac(param_2,param_3,param_4);
code_r0x00010044b128:
code_r0x00010044b1e4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10044b1e8);
    (*pcVar4)();
  case 0x72:
    goto code_r0x00010044b090;
  case 0x77:
  case 0xac:
  case 0xb6:
    goto code_r0x00010044b0c0;
  case 0x7a:
  case 0xb1:
    goto code_r0x00010044b098;
  case 0x7b:
    goto code_r0x00010044b11c;
  case 0x7c:
  case 0x9f:
    goto code_r0x00010044b040;
  case 0x7e:
    goto code_r0x00010044b038;
  case 0x80:
    goto code_r0x00010044b190;
  case 0x81:
    goto code_r0x00010044ad04;
  case 0x82:
    goto code_r0x00010044ad48;
  case 0x84:
  case 0xc6:
    goto code_r0x00010044b014;
  case 0x85:
  case 0xb4:
  case 199:
    break;
  case 0x89:
  case 0xcb:
    goto code_r0x00010044b034;
  case 0x8a:
  case 0xcc:
    goto code_r0x00010044b04c;
  case 0x8c:
  case 0xce:
    goto code_r0x00010044b064;
  case 0x8e:
  case 0xb9:
  case 0xd0:
    goto code_r0x00010044b054;
  case 0x91:
  case 0xd3:
    goto code_r0x00010044b03c;
  case 0x92:
  case 0xd4:
    goto code_r0x00010044af60;
  case 0x96:
  case 0xd8:
    goto code_r0x00010044b0b4;
  case 0x97:
  case 0xd9:
    goto code_r0x00010044ac1c;
  case 0x98:
  case 0xda:
    goto code_r0x00010044ac60;
  case 0x9b:
    goto code_r0x00010044b030;
  case 0x9d:
    goto code_r0x00010044b010;
  case 0xa0:
    goto code_r0x00010044b058;
  case 0xa2:
    goto code_r0x00010044b070;
  case 0xa4:
  case 0xb2:
    goto code_r0x00010044b060;
  case 0xae:
    goto code_r0x00010044ac5c;
  case 0xb0:
    goto code_r0x00010044b088;
  case 0xba:
    goto code_r0x00010044b0c8;
  case 0xbb:
    goto code_r0x00010044affc;
  case 0xbc:
    goto code_r0x00010044b02c;
  case 0xbd:
    goto code_r0x00010044b0b0;
  case 0xbe:
    goto code_r0x00010044afd4;
  case 0xc3:
    goto code_r0x00010044aca4;
  case 0xc4:
    goto code_r0x00010044ace8;
  case 0xf0:
    goto code_r0x00010044ac94;
  case 0xf2:
    goto code_r0x00010044b0f8;
  case 0xf5:
    goto code_r0x00010044b0e8;
  case 0xf6:
    goto code_r0x00010044b094;
  case 0xf9:
    goto code_r0x00010044b0f0;
  }
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar12);
code_r0x00010044b028:
  param_4 = &UNK_10b219000;
code_r0x00010044b02c:
  param_4 = param_4 + 0x390;
code_r0x00010044b030:
  pppppppuVar9 = &ppppppuStack_270;
code_r0x00010044b034:
  param_3 = (ulong *******)&pppppppuStack_a8;
code_r0x00010044b038:
  pppppppuVar9 = (ulong *******)FUN_107c05dcc(pppppppuVar9,param_3,param_4);
code_r0x00010044b03c:
  pppppppuVar13 = (ulong *******)0x6e;
code_r0x00010044b040:
  *(ulong *******)param_2 = (ulong ******)((ulong)pppppppuVar13 | 0x8000000000000000);
  *(ulong ********)((long)param_2 + 8) = pppppppuVar9;
LAB_10044b048:
code_r0x00010044b04c:
code_r0x00010044b050:
code_r0x00010044b054:
code_r0x00010044b058:
code_r0x00010044b060:
code_r0x00010044b064:
  return;
}

