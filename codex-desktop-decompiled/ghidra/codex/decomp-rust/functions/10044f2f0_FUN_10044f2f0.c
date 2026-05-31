
/* WARNING: Type propagation algorithm not settling */

void FUN_10044f2f0(byte **param_1,char *param_2,byte *param_3,undefined *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined1 in_ZR;
  byte *pbVar24;
  uint uVar25;
  byte **ppbVar26;
  byte **ppbVar27;
  undefined8 uVar28;
  byte bVar29;
  byte **ppbVar30;
  byte **ppbVar31;
  byte **ppbVar32;
  long lVar33;
  byte **unaff_x19;
  undefined8 *unaff_x20;
  byte **ppbVar34;
  byte **unaff_x21;
  byte **ppbVar35;
  byte **unaff_x22;
  byte **unaff_x23;
  byte **unaff_x24;
  byte **ppbVar36;
  byte **ppbVar37;
  byte **unaff_x28;
  byte **ppbVar38;
  undefined1 *unaff_x29;
  undefined1 *puVar39;
  undefined8 unaff_x30;
  byte abStack_2c0 [88];
  byte **ppbStack_268;
  byte **ppbStack_260;
  byte **ppbStack_258;
  byte **ppbStack_250;
  byte **ppbStack_248;
  byte **ppbStack_240;
  byte **ppbStack_238;
  byte **ppbStack_230;
  byte **ppbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte **ppbStack_200;
  byte **ppbStack_1f8;
  undefined8 uStack_1f0;
  byte **ppbStack_1e8;
  byte **ppbStack_1e0;
  byte *pbStack_1d0;
  byte **ppbStack_1c8;
  byte **ppbStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_b0;
  byte **ppbStack_a8;
  byte **ppbStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  byte abStack_71 [17];
  byte *pbVar12;
  byte *pbVar17;
  byte *pbVar23;
  
  puVar39 = &stack0xfffffffffffffff0;
  pbVar11 = abStack_2c0 + 0x50;
  pbVar22 = abStack_2c0 + 0x50;
  pbVar16 = abStack_2c0 + 0x50;
  ppbVar36 = (byte **)&uStack_98;
  bVar29 = *param_3;
  ppbVar26 = (byte **)(ulong)bVar29;
  ppbVar30 = (byte **)&UNK_108c98fc8;
  ppbVar32 = (byte **)(ulong)*(ushort *)(&UNK_108c98fc8 + (long)ppbVar26 * 2);
  ppbVar31 = (byte **)(&UNK_10044f334 + (long)ppbVar32 * 4);
  pbVar24 = abStack_2c0 + 0x50;
  pbVar18 = abStack_2c0 + 0x50;
  pbVar19 = abStack_2c0 + 0x50;
  pbVar20 = abStack_2c0 + 0x50;
  pbVar21 = abStack_2c0 + 0x50;
  pbVar23 = abStack_2c0 + 0x50;
  pbVar13 = abStack_2c0 + 0x50;
  pbVar14 = abStack_2c0 + 0x50;
  pbVar15 = abStack_2c0 + 0x50;
  pbVar17 = abStack_2c0 + 0x50;
  pbVar7 = abStack_2c0 + 0x50;
  pbVar8 = abStack_2c0 + 0x50;
  pbVar9 = abStack_2c0 + 0x50;
  pbVar10 = abStack_2c0 + 0x50;
  pbVar12 = abStack_2c0 + 0x50;
  ppbVar34 = (byte **)param_2;
  ppbVar27 = ppbVar26;
  ppbVar35 = unaff_x21;
  ppbVar38 = unaff_x21;
  ppbVar37 = unaff_x22;
  switch(bVar29) {
  case 0:
  case 0xeb:
  case 0xf9:
    bVar29 = param_3[1];
  case 0x84:
    pbStack_1d0 = (byte *)((ulong)CONCAT61(pbStack_1d0._2_6_,bVar29) << 8);
code_r0x00010044fc30:
    pbStack_1d0 = (byte *)((ulong)pbStack_1d0 & 0xffffffffffffff00);
    goto code_r0x00010044fc88;
  case 1:
  case 0xdf:
    ppbVar26 = (byte **)(ulong)param_3[1];
    break;
  case 2:
  case 0x73:
    ppbVar26 = (byte **)(ulong)*(ushort *)(param_3 + 2);
  case 0x86:
    break;
  case 3:
  case 0x74:
    ppbVar26 = (byte **)(ulong)*(uint *)(param_3 + 4);
  case 0x87:
    break;
  case 4:
  case 0xc9:
    ppbVar26 = *(byte ***)(param_3 + 8);
  case 0x88:
    break;
  case 5:
  case 0xb2:
  case 0xdc:
    ppbVar26 = (byte **)(long)(char)param_3[1];
  case 0x89:
  case 0x8c:
code_r0x00010044fc7c:
    ppbStack_1c8 = ppbVar26;
code_r0x00010044fc80:
    bVar29 = 2;
    goto code_r0x00010044fc84;
  case 6:
  case 0xb3:
    ppbVar26 = (byte **)(long)*(short *)(param_3 + 2);
  case 0x8a:
    goto code_r0x00010044fc7c;
  case 7:
  case 0x78:
  case 0xde:
  case 0xf5:
    ppbVar26 = (byte **)(long)*(int *)(param_3 + 4);
  case 0x8b:
  case 0xce:
    goto code_r0x00010044fc7c;
  case 8:
    ppbVar26 = *(byte ***)(param_3 + 8);
    goto code_r0x00010044fc7c;
  case 9:
  case 0x3e:
  case 0x48:
  case 0xcb:
    param_1 = (byte **)(ulong)*(uint *)(param_3 + 4);
  case 0x8d:
    param_1 = (byte **)(double)SUB84(param_1,0);
code_r0x00010044fbfc:
  case 0x8e:
code_r0x00010044fc6c:
    ppbStack_1c8 = param_1;
code_r0x00010044fc70:
    bVar29 = 3;
code_r0x00010044fc74:
    goto code_r0x00010044fc84;
  case 10:
  case 0xb7:
  case 0xe1:
  case 0xf8:
    param_1 = *(byte ***)(param_3 + 8);
    goto code_r0x00010044fc6c;
  case 0xb:
  case 0x51:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x8f:
  case 0xcf:
code_r0x00010044fba4:
    pbVar13 = &stack0xffffffffffffffa0;
    puVar39 = unaff_x29;
code_r0x00010044fbac:
    unaff_x20 = *(undefined8 **)(pbVar13 + 0x40);
    unaff_x19 = *(byte ***)(pbVar13 + 0x48);
    pbVar14 = pbVar13;
code_r0x00010044fbb4:
    pbVar15 = pbVar14;
code_r0x00010044fbb8:
    pbVar17 = pbVar15;
code_r0x00010044fbbc:
    pbVar16 = pbVar17 + 0x60;
code_r0x00010044fbc0:
    *(undefined8 **)(pbVar16 + -0x20) = unaff_x20;
    *(byte ***)(pbVar16 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar16 + -0x10) = puVar39;
    *(undefined8 *)(pbVar16 + -8) = unaff_x30;
    *(undefined4 *)(pbVar16 + -0x44) = 0;
    uVar25 = (uint)param_3;
    if (uVar25 < 0x80) {
      pbVar16[-0x44] = (byte)param_3;
      uVar28 = 1;
    }
    else {
      bVar29 = (byte)param_3 & 0x3f | 0x80;
      if (uVar25 < 0x800) {
        pbVar16[-0x44] = (byte)(uVar25 >> 6) | 0xc0;
        pbVar16[-0x43] = bVar29;
        uVar28 = 2;
      }
      else {
        bVar4 = (byte)(uVar25 >> 6) & 0x3f | 0x80;
        if (uVar25 < 0x10000) {
          pbVar16[-0x44] = (byte)(uVar25 >> 0xc) | 0xe0;
          pbVar16[-0x43] = bVar4;
          pbVar16[-0x42] = bVar29;
          uVar28 = 3;
        }
        else {
          pbVar16[-0x44] = (byte)(uVar25 >> 0x12) | 0xf0;
          pbVar16[-0x43] = (byte)(uVar25 >> 0xc) & 0x3f | 0x80;
          pbVar16[-0x42] = bVar4;
          pbVar16[-0x41] = bVar29;
          uVar28 = 4;
        }
      }
    }
    *(byte **)(pbVar16 + -0x38) = pbVar16 + -0x44;
    *(undefined8 *)(pbVar16 + -0x30) = uVar28;
    pbVar16[-0x40] = 5;
    pbVar24 = (byte *)func_0x000108a4a50c(pbVar16 + -0x40,pbVar16 + -0x21,&UNK_10b21a0f0);
    *(byte **)param_2 = (byte *)0x1d;
    *(byte **)((long)param_2 + 8) = pbVar24;
    return;
  case 0xc:
  case 0x43:
  case 0xcd:
  case 0xf6:
    param_3 = param_3 + 8;
  case 0x71:
  case 0x90:
code_r0x00010044fbd4:
    pbVar24 = &stack0xffffffffffffffa0;
code_r0x00010044fbd8:
    puVar39 = *(undefined1 **)(pbVar24 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar24 + 0x58);
    pbVar18 = pbVar24;
code_r0x00010044fbdc:
    unaff_x20 = *(undefined8 **)(pbVar18 + 0x40);
    unaff_x19 = *(byte ***)(pbVar18 + 0x48);
    pbVar19 = pbVar18;
code_r0x00010044fbe0:
    unaff_x22 = *(byte ***)(pbVar19 + 0x30);
    unaff_x21 = *(byte ***)(pbVar19 + 0x38);
    pbVar20 = pbVar19;
code_r0x00010044fbe4:
    pbVar21 = pbVar20;
code_r0x00010044fbe8:
    pbVar23 = pbVar21;
code_r0x00010044fbec:
    pbVar22 = pbVar23 + 0x60;
code_r0x00010044fbf0:
    *(byte ***)(pbVar22 + -0x30) = unaff_x22;
    *(byte ***)(pbVar22 + -0x28) = unaff_x21;
    *(undefined8 **)(pbVar22 + -0x20) = unaff_x20;
    *(byte ***)(pbVar22 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar22 + -0x10) = puVar39;
    *(undefined8 *)(pbVar22 + -8) = unaff_x30;
    uVar28 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pbVar22 + -0x48) = uVar28;
    *(undefined8 *)(pbVar22 + -0x40) = uVar3;
    pbVar22[-0x50] = 5;
    pbVar24 = (byte *)func_0x000108a4a50c(pbVar22 + -0x50,pbVar22 + -0x31,&UNK_10b21a0f0);
    *(byte **)param_2 = (byte *)0x1d;
    *(byte **)((long)param_2 + 8) = pbVar24;
    if (*(long *)param_3 != 0) {
      _free(uVar28);
    }
    return;
  case 0xd:
  case 0xbf:
  case 0xf7:
    ppbVar26 = *(byte ***)(param_3 + 8);
    ppbVar30 = *(byte ***)(param_3 + 0x10);
  case 0x91:
    ppbStack_1c8 = ppbVar26;
    ppbStack_1c0 = ppbVar30;
code_r0x00010044fc58:
    bVar29 = 5;
    goto code_r0x00010044fc84;
  case 0xe:
  case 0x31:
    param_3 = param_3 + 8;
  case 0x92:
  case 0xd2:
code_r0x00010044fb7c:
    pbVar7 = &stack0xffffffffffffffa0;
code_r0x00010044fb80:
    puVar39 = *(undefined1 **)(pbVar7 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar7 + 0x58);
    pbVar8 = pbVar7;
code_r0x00010044fb84:
    unaff_x20 = *(undefined8 **)(pbVar8 + 0x40);
    unaff_x19 = *(byte ***)(pbVar8 + 0x48);
    pbVar9 = pbVar8;
code_r0x00010044fb88:
    unaff_x22 = *(byte ***)(pbVar9 + 0x30);
    unaff_x21 = *(byte ***)(pbVar9 + 0x38);
    pbVar10 = pbVar9;
code_r0x00010044fb8c:
    pbVar12 = pbVar10;
code_r0x00010044fb94:
    pbVar11 = pbVar12 + 0x60;
code_r0x00010044fb98:
    *(byte ***)(pbVar11 + -0x30) = unaff_x22;
    *(byte ***)(pbVar11 + -0x28) = unaff_x21;
    *(undefined8 **)(pbVar11 + -0x20) = unaff_x20;
    *(byte ***)(pbVar11 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar11 + -0x10) = puVar39;
    *(undefined8 *)(pbVar11 + -8) = unaff_x30;
    uVar28 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pbVar11 + -0x48) = uVar28;
    *(undefined8 *)(pbVar11 + -0x40) = uVar3;
    pbVar11[-0x50] = 6;
    pbVar24 = (byte *)func_0x000108a4a50c(pbVar11 + -0x50,pbVar11 + -0x31,&UNK_10b21a0f0);
    *(byte **)param_2 = (byte *)0x1d;
    *(byte **)((long)param_2 + 8) = pbVar24;
    if (*(long *)param_3 != 0) {
      _free(uVar28);
    }
    return;
  case 0xf:
  case 0x7b:
  case 0xf4:
    ppbVar26 = *(byte ***)(param_3 + 8);
    ppbVar30 = *(byte ***)(param_3 + 0x10);
  case 0x4a:
  case 0x93:
  case 0xb4:
  case 0xcc:
    bVar29 = 6;
    ppbStack_1c8 = ppbVar26;
    ppbStack_1c0 = ppbVar30;
code_r0x00010044fc14:
    goto code_r0x00010044fc84;
  case 0x10:
    bVar29 = 8;
  case 0x23:
  case 0x65:
  case 0x94:
  case 0xa7:
  case 0xca:
    goto code_r0x00010044fc84;
  default:
    ppbVar34 = *(byte ***)(param_3 + 8);
    ppbStack_1c8 = (byte **)ppbVar34[1];
    pbStack_1d0 = *ppbVar34;
    pbStack_1b8 = ppbVar34[3];
    ppbStack_1c0 = (byte **)ppbVar34[2];
    func_0x000107c0496c(param_2,&pbStack_1d0);
  case 0xc4:
code_r0x00010044f868:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(ppbVar34);
    return;
  case 0x12:
    bVar29 = 7;
    goto code_r0x00010044fc84;
  case 0x13:
    ppbVar34 = *(byte ***)(param_3 + 8);
    ppbStack_1c8 = (byte **)ppbVar34[1];
    pbStack_1d0 = *ppbVar34;
    pbStack_1b8 = ppbVar34[3];
    ppbStack_1c0 = (byte **)ppbVar34[2];
    func_0x000107c05378(param_2,&pbStack_1d0);
    goto code_r0x00010044f868;
  case 0x14:
    pbVar19 = *(byte **)(param_3 + 8);
    pbVar20 = *(byte **)(param_3 + 0x10);
    lVar33 = *(long *)(param_3 + 0x18);
    pbVar18 = pbVar20 + lVar33 * 0x20;
    ppbStack_200 = (byte **)0x0;
    pbVar24 = pbVar20;
    pbStack_220 = pbVar20;
    pbStack_210 = pbVar19;
    pbStack_208 = pbVar18;
    if (lVar33 == 0) {
code_r0x00010044f8b0:
      pbStack_218 = pbVar24;
      ppbStack_a8 = (byte **)thunk_FUN_1087e422c(0,&UNK_10b22ec68,&UNK_10b20a590);
code_r0x00010044f8cc:
      *(byte **)param_2 = (byte *)0x1d;
      *(byte ***)((long)param_2 + 8) = ppbStack_a8;
code_r0x00010044f8d4:
      lVar33 = ((ulong)((long)pbVar18 - (long)pbVar24) >> 5) + 1;
      while (lVar33 = lVar33 + -1, lVar33 != 0) {
        FUN_100e077ec(pbVar24);
        pbVar24 = pbVar24 + 0x20;
      }
      if (pbVar19 != (byte *)0x0) {
        _free(pbVar20);
      }
      goto code_r0x00010044fca8;
    }
    pbVar24 = pbVar20 + 0x20;
    if (*pbVar20 == 0x16) goto code_r0x00010044f8b0;
    uVar28 = *(undefined8 *)(pbVar20 + 1);
    uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 9);
    uStack_98._1_1_ = (byte)uVar28;
    uStack_98._2_6_ = (undefined6)((ulong)uVar28 >> 8);
    uStack_90 = (undefined1)((ulong)uVar28 >> 0x38);
    lStack_80 = *(long *)(pbVar20 + 0x18);
    uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x10);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x10) >> 8);
    ppbStack_200 = (byte **)0x1;
    pbStack_218 = pbVar24;
    uStack_98._0_1_ = *pbVar20;
    FUN_1004b62d4(&uStack_b0,&uStack_98);
    ppbVar26 = ppbStack_a8;
    ppbVar30 = uStack_b0;
    if (uStack_b0 == (byte **)0x8000000000000000) goto code_r0x00010044f8cc;
    if (lVar33 == 1) {
code_r0x00010044f970:
      ppbStack_a8 = (byte **)thunk_FUN_1087e422c(1,&UNK_10b22ec68,&UNK_10b20a590);
code_r0x00010044f98c:
      *(byte **)param_2 = (byte *)0x1d;
      *(byte ***)((long)param_2 + 8) = ppbStack_a8;
code_r0x00010044f994:
      if (ppbVar30 != (byte **)0x0) {
        _free(ppbVar26);
      }
      goto code_r0x00010044f8d4;
    }
    pbVar24 = pbVar20 + 0x40;
    pbStack_218 = pbVar24;
    if (pbVar20[0x20] == 0x16) goto code_r0x00010044f970;
    ppbStack_228 = ppbStack_a0;
    uVar28 = *(undefined8 *)(pbVar20 + 0x21);
    uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 0x29);
    uStack_98._1_1_ = (byte)uVar28;
    uStack_98._2_6_ = (undefined6)((ulong)uVar28 >> 8);
    uStack_90 = (undefined1)((ulong)uVar28 >> 0x38);
    lStack_80 = *(long *)(pbVar20 + 0x38);
    uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
    ppbStack_200 = (byte **)0x2;
    uStack_98._0_1_ = pbVar20[0x20];
    FUN_1004b62d4(&uStack_b0,&uStack_98);
    ppbVar38 = ppbStack_a0;
    ppbVar31 = ppbStack_a8;
    ppbVar34 = uStack_b0;
    ppbStack_230 = (byte **)param_2;
    if (uStack_b0 == (byte **)0x8000000000000000) goto code_r0x00010044f98c;
    if (lVar33 == 2) {
code_r0x00010044fe20:
      ppbStack_a8 = (byte **)thunk_FUN_1087e422c(2,&UNK_10b22ec68,&UNK_10b20a590);
code_r0x00010044fe38:
      *ppbStack_230 = (byte *)0x1d;
      ppbStack_230[1] = (byte *)ppbStack_a8;
      if (ppbVar34 != (byte **)0x0) {
        _free(ppbVar31);
      }
      goto code_r0x00010044f994;
    }
    pbVar24 = pbVar20 + 0x60;
    pbStack_218 = pbVar24;
    if (pbVar20[0x40] == 0x16) goto code_r0x00010044fe20;
    uVar28 = *(undefined8 *)(pbVar20 + 0x41);
    uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 0x49);
    uStack_98._1_1_ = (byte)uVar28;
    uStack_98._2_6_ = (undefined6)((ulong)uVar28 >> 8);
    uStack_90 = (undefined1)((ulong)uVar28 >> 0x38);
    lStack_80 = *(long *)(pbVar20 + 0x58);
    uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x50);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x50) >> 8);
    ppbStack_200 = (byte **)0x3;
    uStack_98._0_1_ = pbVar20[0x40];
    FUN_1004b62d4(&uStack_b0,&uStack_98);
    unaff_x19 = ppbStack_230;
    if (uStack_b0 == (byte **)0x8000000000000000) goto code_r0x00010044fe38;
    *ppbStack_230 = (byte *)0x18;
    ppbStack_230[1] = (byte *)ppbVar30;
    ppbStack_230[2] = (byte *)ppbVar26;
    ppbStack_230[3] = (byte *)ppbStack_228;
    ppbStack_230[4] = (byte *)ppbVar34;
    ppbStack_230[5] = (byte *)ppbVar31;
    ppbStack_230[6] = (byte *)ppbVar38;
    ppbStack_230[7] = (byte *)uStack_b0;
    ppbStack_230[8] = (byte *)ppbStack_a8;
    ppbStack_230[9] = (byte *)ppbStack_a0;
    _memcpy(&pbStack_1d0,ppbStack_230,0x118);
    pbVar24 = (byte *)FUN_100fbc738(&pbStack_220);
    goto code_r0x00010044fd0c;
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
    uStack_1f0 = *(undefined8 *)(param_3 + 8);
    ppbStack_200 = *(byte ***)(param_3 + 0x10);
    lVar33 = *(long *)(param_3 + 0x18);
    ppbStack_1e8 = ppbStack_200 + lVar33 * 8;
    pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
    ppbStack_1e0 = (byte **)0x0;
    ppbStack_1f8 = ppbStack_200;
    if (lVar33 == 0) {
      ppbVar38 = (byte **)0x0;
      ppbVar37 = (byte **)0x8000000000000000;
      ppbStack_230 = (byte **)param_2;
    }
    else {
      unaff_x22 = (byte **)0x0;
      unaff_x20 = (undefined8 *)((ulong)&uStack_98 | 1);
      unaff_x19 = (byte **)((ulong)&pbStack_220 | 1);
      ppbStack_268 = (byte **)((lVar33 * 0x40 - 0x40U >> 6) + 1);
      ppbStack_228 = (byte **)0x8000000000000000;
      ppbVar38 = (byte **)0x8000000000000000;
      ppbVar37 = (byte **)0x8000000000000000;
      ppbVar36 = ppbStack_1e8;
      unaff_x23 = ppbStack_200;
      ppbStack_230 = (byte **)param_2;
      do {
        unaff_x21 = unaff_x23 + 8;
        bVar29 = *(byte *)unaff_x23;
        ppbVar30 = unaff_x22;
        if (bVar29 == 0x16) break;
        pbVar24 = unaff_x23[2];
        *(byte **)((long)unaff_x20 + 0x17) = unaff_x23[3];
        *(byte **)((long)unaff_x20 + 0xf) = pbVar24;
        uVar28 = *(undefined8 *)((long)unaff_x23 + 1);
        unaff_x20[1] = *(undefined8 *)((long)unaff_x23 + 9);
        *unaff_x20 = uVar28;
        pbStack_218 = unaff_x23[5];
        pbStack_220 = unaff_x23[4];
        pbStack_208 = unaff_x23[7];
        pbStack_210 = unaff_x23[6];
        plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
        plVar5 = (long *)CONCAT71(uStack_87,uStack_88);
        uStack_98._0_1_ = bVar29;
        if (bVar29 < 0xd) {
          if (bVar29 == 1) {
            bVar29 = uStack_98._1_1_;
            if (2 < uStack_98._1_1_) {
              bVar29 = 3;
            }
code_r0x00010044f65c:
            uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar29);
            uStack_b0 = (byte **)((ulong)uStack_b0._1_7_ << 8);
            goto code_r0x00010044f660;
          }
          if (bVar29 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bVar29 = (byte)plVar2;
            goto code_r0x00010044f65c;
          }
          if (bVar29 == 0xc) {
            if (lStack_80 == 5) {
              if ((int)*plVar5 != 0x6f727265 || *(char *)((long)plVar5 + 4) != 'r')
              goto code_r0x00010044f5c8;
              uStack_b0 = (byte **)CONCAT62(uStack_b0._2_6_,0x200);
            }
            else if (lStack_80 == 0x15) {
              if ((*plVar5 != 0x69746361706d6f63 || plVar5[1] != 0x65757165725f6e6f) ||
                  *(long *)((long)plVar5 + 0xd) != 0x64695f7473657571) goto code_r0x00010044f5c8;
              uStack_b0 = (byte **)CONCAT62(uStack_b0._2_6_,0x100);
            }
            else if ((lStack_80 == 0xd) &&
                    (*plVar5 == 0x69746361706d6f63 &&
                     *(long *)((long)plVar5 + 5) == 0x64695f6e6f697463)) {
              uStack_b0 = (byte **)((ulong)uStack_b0._2_6_ << 0x10);
            }
            else {
code_r0x00010044f5c8:
              uStack_b0 = (byte **)CONCAT62(uStack_b0._2_6_,0x300);
            }
joined_r0x00010044f5a0:
            if (plVar2 != (long *)0x0) {
              _free(plVar5);
            }
          }
          else {
code_r0x00010044f814:
            param_2 = (char *)&uStack_98;
            param_3 = abStack_71;
            ppbVar34 = ppbVar37;
            unaff_x28 = ppbVar38;
code_r0x00010044f81c:
            param_4 = &UNK_10b20de60;
code_r0x00010044f824:
            ppbVar38 = unaff_x28;
            ppbVar37 = ppbVar34;
            ppbStack_a8 = (byte **)thunk_FUN_108855b04(param_2,param_3,param_4);
            uStack_b0 = (byte **)CONCAT71(uStack_b0._1_7_,1);
          }
        }
        else {
          if (bVar29 == 0xd) {
            if (plVar5 == (long *)0x5) {
              if ((int)*plVar2 != 0x6f727265 || *(char *)((long)plVar2 + 4) != 'r')
              goto code_r0x00010044f654;
              bVar29 = 2;
            }
            else if (plVar5 == (long *)0x15) {
              if ((*plVar2 != 0x69746361706d6f63 || plVar2[1] != 0x65757165725f6e6f) ||
                  *(long *)((long)plVar2 + 0xd) != 0x64695f7473657571) goto code_r0x00010044f654;
              bVar29 = 1;
            }
            else if ((plVar5 == (long *)0xd) &&
                    (*plVar2 == 0x69746361706d6f63 &&
                     *(long *)((long)plVar2 + 5) == 0x64695f6e6f697463)) {
              bVar29 = 0;
            }
            else {
code_r0x00010044f654:
              bVar29 = 3;
            }
            goto code_r0x00010044f65c;
          }
          if (bVar29 == 0xe) {
            func_0x000100b48a7c(&uStack_b0,plVar5);
            goto joined_r0x00010044f5a0;
          }
          if (bVar29 != 0xf) goto code_r0x00010044f814;
          func_0x000100b48a7c(&uStack_b0,plVar2,plVar5);
code_r0x00010044f660:
          FUN_100e077ec(&uStack_98);
        }
        unaff_x24 = ppbStack_228;
        if (((ulong)uStack_b0 & 1) != 0) {
          *ppbStack_230 = (byte *)0x1d;
          ppbStack_230[1] = (byte *)ppbStack_a8;
          ppbStack_1f8 = unaff_x21;
code_r0x00010044f9cc:
          ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
          unaff_x20 = (undefined8 *)0x1;
          uVar25 = 1;
          unaff_x23 = &pbStack_220;
          unaff_x24 = ppbStack_228;
          goto LAB_10044fa58;
        }
        bVar29 = (byte)pbStack_220;
        param_2 = (char *)ppbVar37;
        if (uStack_b0._1_1_ < 2) {
          if (uStack_b0._1_1_ == 0) {
            if (ppbStack_228 != (byte **)0x8000000000000000) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              uStack_b0 = (byte **)&UNK_108cb88ab;
              ppbStack_a8 = (byte **)0xd;
              uStack_98._0_1_ = (byte)&uStack_b0;
              uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
              uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              ppbStack_1f8 = unaff_x21;
              pbVar24 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
              goto LAB_10044fa44;
            }
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            if (bVar29 == 0x16) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              ppbStack_1f8 = unaff_x21;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010045009c;
            }
            pbVar24 = *unaff_x19;
            unaff_x20[1] = unaff_x19[1];
            *unaff_x20 = pbVar24;
            uVar28 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar28;
            uStack_98._0_1_ = bVar29;
            ppbStack_228 = (byte **)0x8000000000000000;
            FUN_1004b62d4(&uStack_b0,&uStack_98);
            ppbStack_228 = uStack_b0;
            if (uStack_b0 == (byte **)0x8000000000000000) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              *ppbStack_230 = (byte *)0x1d;
              ppbStack_230[1] = (byte *)ppbStack_a8;
              unaff_x20 = (undefined8 *)0x1;
              uVar25 = 1;
              unaff_x23 = &pbStack_220;
              unaff_x24 = (byte **)0x0;
              ppbStack_1f8 = unaff_x21;
              goto LAB_10044fa58;
            }
            ppbStack_238 = ppbStack_a8;
            ppbStack_248 = ppbStack_a0;
            ppbVar35 = unaff_x21;
            unaff_x21 = ppbVar36;
          }
          else {
            if (ppbVar38 != (byte **)0x8000000000000000) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              uStack_b0 = (byte **)&UNK_108cb8e87;
              ppbStack_a8 = (byte **)0x15;
              uStack_98._0_1_ = (byte)&uStack_b0;
              uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
              uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              ppbStack_1f8 = unaff_x21;
              pbVar24 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
              goto LAB_10044fa44;
            }
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            in_ZR = bVar29 == 0x16;
code_r0x00010044f778:
            if ((bool)in_ZR) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              ppbStack_1f8 = unaff_x21;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010045009c;
            }
            pbVar24 = *unaff_x19;
            unaff_x20[1] = unaff_x19[1];
            *unaff_x20 = pbVar24;
code_r0x00010044f784:
            uStack_98._0_1_ = bVar29;
            uVar28 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar28;
code_r0x00010044f790:
code_r0x00010044f794:
            ppbVar37 = (byte **)param_2;
            FUN_1004b62d4(&uStack_b0,&uStack_98);
            if (uStack_b0 == (byte **)0x8000000000000000) {
              *ppbStack_230 = (byte *)0x1d;
              ppbStack_230[1] = (byte *)ppbStack_a8;
              ppbVar38 = (byte **)0x0;
              ppbStack_1f8 = unaff_x21;
              goto code_r0x00010044f9cc;
            }
            ppbStack_240 = ppbStack_a8;
            ppbVar26 = ppbStack_a0;
            ppbVar35 = unaff_x21;
            param_2 = (char *)ppbVar37;
            unaff_x28 = uStack_b0;
code_r0x00010044f7bc:
            ppbVar37 = (byte **)param_2;
            unaff_x21 = ppbVar36;
            ppbVar38 = unaff_x28;
            ppbStack_250 = ppbVar26;
          }
        }
        else {
          unaff_x28 = ppbVar38;
          if (uStack_b0._1_1_ == 2) {
            if (ppbVar37 != (byte **)0x8000000000000000) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              uStack_b0 = (byte **)&UNK_108ca33da;
              ppbStack_a8 = (byte **)0x5;
              uStack_98._0_1_ = (byte)&uStack_b0;
              uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
              uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              ppbStack_1f8 = unaff_x21;
              pbVar24 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
              unaff_x23 = &pbStack_220;
              *ppbStack_230 = (byte *)0x1d;
              ppbStack_230[1] = pbVar24;
              uVar25 = 1;
              unaff_x20 = (undefined8 *)0x1;
              goto joined_r0x00010044ffb0;
            }
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            if (bVar29 == 0x16) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              ppbStack_1f8 = unaff_x21;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010045009c;
            }
            pbVar24 = *unaff_x19;
            unaff_x20[1] = unaff_x19[1];
            *unaff_x20 = pbVar24;
            uVar28 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar28;
            uStack_98._0_1_ = bVar29;
            FUN_1004b62d4(&uStack_b0,&uStack_98);
            ppbVar26 = uStack_b0;
            if (uStack_b0 == (byte **)0x8000000000000000) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              *ppbStack_230 = (byte *)0x1d;
              ppbStack_230[1] = (byte *)ppbStack_a8;
              uVar25 = 1;
              unaff_x20 = (undefined8 *)0x1;
              unaff_x23 = &pbStack_220;
              unaff_x24 = ppbStack_228;
              ppbStack_1f8 = unaff_x21;
              goto LAB_10044fa70;
            }
code_r0x00010044f74c:
            ppbVar35 = unaff_x21;
            param_2 = (char *)ppbVar26;
code_r0x00010044f750:
            ppbVar38 = unaff_x28;
            ppbVar37 = (byte **)param_2;
            unaff_x21 = ppbVar36;
            ppbStack_260 = ppbStack_a8;
            ppbStack_258 = ppbStack_a0;
          }
          else {
            ppbVar26 = (byte **)((ulong)pbStack_220 & 0xff);
code_r0x00010044f7c8:
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            ppbVar35 = unaff_x21;
            bVar29 = (byte)ppbVar26;
            if ((int)ppbVar26 == 0x16) {
              ppbStack_1e0 = (byte **)((long)unaff_x22 + 1);
              ppbStack_1f8 = unaff_x21;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010045009c:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1004500a0);
              (*pcVar6)();
            }
code_r0x00010044f7d8:
            uStack_98._0_1_ = bVar29;
            ppbVar38 = unaff_x28;
            ppbVar37 = (byte **)param_2;
            unaff_x21 = ppbVar36;
            pbVar24 = *unaff_x19;
            unaff_x20[1] = unaff_x19[1];
            *unaff_x20 = pbVar24;
            uVar28 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar28;
            FUN_100e077ec(&uStack_98);
          }
        }
        ppbVar26 = unaff_x23 + 8;
        unaff_x22 = (byte **)((long)unaff_x22 + 1);
        ppbVar30 = ppbStack_268;
        ppbVar36 = unaff_x21;
        unaff_x23 = ppbVar35;
      } while (ppbVar26 != unaff_x21);
      ppbVar26 = (byte **)0x8000000000000000;
      ppbStack_1f8 = unaff_x21;
      ppbStack_1e0 = ppbVar30;
      if (ppbStack_228 != (byte **)0x8000000000000000) {
        in_ZR = ppbVar38 == (byte **)0x8000000000000000;
        ppbVar30 = ppbStack_248;
        ppbVar31 = ppbStack_250;
        ppbVar32 = ppbStack_258;
        unaff_x24 = ppbStack_228;
        goto code_r0x00010044fabc;
      }
    }
    uStack_b0 = (byte **)&UNK_108cb88ab;
    ppbStack_a8 = (byte **)0xd;
    uStack_98._0_1_ = (byte)&uStack_b0;
    uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
    uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    unaff_x24 = (byte **)0x0;
    pbVar24 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_98);
LAB_10044fa44:
    unaff_x23 = &pbStack_220;
    *ppbStack_230 = (byte *)0x1d;
    ppbStack_230[1] = pbVar24;
    unaff_x20 = (undefined8 *)0x1;
    uVar25 = 1;
    goto LAB_10044fa58;
  case 0x16:
  case 0x58:
  case 0x9a:
  case 0xd1:
    goto code_r0x00010044fb48;
  case 0x17:
  case 0x46:
  case 0x59:
  case 0x9b:
    goto code_r0x00010044fb58;
  case 0x18:
  case 0x35:
  case 0x5a:
  case 0x9c:
  case 0xd4:
    goto code_r0x00010044fb20;
  case 0x19:
  case 0x5b:
  case 0x9d:
    goto code_r0x00010044fb38;
  case 0x1a:
  case 0x5c:
  case 0x9e:
    goto FUN_10044fae4;
  case 0x1b:
  case 0x5d:
  case 0x9f:
    goto code_r0x00010044fb68;
  case 0x1c:
  case 0x5e:
  case 0xa0:
    goto code_r0x00010044fb80;
  case 0x1d:
  case 0x5f:
  case 0xa1:
    goto code_r0x00010044fb40;
  case 0x1e:
  case 0x60:
  case 0xa2:
    goto code_r0x00010044fb98;
  case 0x1f:
  case 0x61:
  case 0xa3:
    goto code_r0x00010044fb14;
  case 0x20:
  case 0x4b:
  case 0x62:
  case 0xa4:
    goto code_r0x00010044fb88;
  case 0x21:
  case 99:
  case 0xa5:
code_r0x00010044fabc:
    unaff_x20 = (undefined8 *)(ulong)(byte)in_ZR;
    if (!(bool)in_ZR) {
      in_ZR = ppbVar37 == ppbVar26;
      goto code_r0x00010044fb08;
    }
    ppbVar26 = (byte **)&UNK_108cb8000;
  case 0x37:
    uStack_b0 = (byte **)((long)ppbVar26 + 0xe87);
    ppbStack_a8 = (byte **)0x15;
    uStack_98._0_1_ = (byte)&uStack_b0;
    uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
    uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
FUN_10044fae4:
    param_2 = s_missing_field_____108ac28f7;
code_r0x00010044faec:
    param_3 = (byte *)&uStack_98;
code_r0x00010044faf0:
    param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
    ppbVar26 = (byte **)0x1d;
code_r0x00010044faf8:
    *ppbStack_230 = (byte *)ppbVar26;
    ppbStack_230[1] = (byte *)param_2;
code_r0x00010044fb00:
LAB_10044fb54:
    unaff_x23 = &pbStack_220;
code_r0x00010044fb58:
    param_2 = (char *)ppbStack_238;
    if (unaff_x24 != (byte **)0x0) {
code_r0x00010044fb60:
      _free(param_2);
    }
LAB_10044fb64:
    unaff_x19 = (byte **)0x0;
code_r0x00010044fb68:
    uVar25 = (uint)unaff_x19;
LAB_10044fa58:
    if (ppbVar37 != (byte **)0x8000000000000000) {
joined_r0x00010044ffb0:
      if (ppbVar37 != (byte **)0x0) {
        _free(ppbStack_260);
      }
    }
LAB_10044fa70:
    if ((((ulong)ppbVar38 & 0x7fffffffffffffff) != 0) && (((ulong)unaff_x20 & 1) != 0)) {
      _free(ppbStack_240);
    }
    uVar1 = 0;
    if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar25;
    }
    ppbVar26 = (byte **)(ulong)uVar1;
code_r0x00010044fa8c:
    param_2 = (char *)ppbStack_238;
    if (((ulong)ppbVar26 & 1) != 0) {
code_r0x00010044fa94:
      _free(param_2);
    }
LAB_10044fa98:
    FUN_100d34830(unaff_x23 + 4);
code_r0x00010044faa0:
    if ((byte)pbStack_220 != '\x16') {
      FUN_100e077ec(&pbStack_220);
    }
    goto code_r0x00010044fca8;
  case 0x22:
  case 100:
  case 0xa6:
    goto code_r0x00010044faec;
  case 0x24:
  case 0x66:
  case 0xa8:
    goto code_r0x00010044fa94;
  case 0x25:
  case 0x67:
  case 0xa9:
    goto code_r0x00010044fb28;
  case 0x26:
  case 0x68:
  case 0xaa:
    goto code_r0x00010044fa8c;
  case 0x28:
  case 0x6a:
  case 0xac:
    goto code_r0x00010044fbe8;
  case 0x29:
  case 0x6b:
  case 0xad:
    goto code_r0x00010044f750;
  case 0x2a:
  case 0x6c:
  case 0xae:
    goto code_r0x00010044f794;
  case 0x2c:
  case 0x79:
    goto LAB_10044fb54;
  case 0x2d:
    goto LAB_10044fb64;
  case 0x2e:
  case 0x7c:
    goto FUN_10044fb2c;
  case 0x2f:
    goto code_r0x00010044fb44;
  case 0x30:
    goto code_r0x00010044faf0;
  case 0x32:
  case 0xec:
    goto code_r0x00010044fb8c;
  case 0x33:
    goto code_r0x00010044fb4c;
  case 0x34:
  case 0xfd:
    goto code_r0x00010044fba4;
  case 0x36:
  case 0x44:
  case 0xea:
    goto code_r0x00010044fb94;
  case 0x38:
    goto code_r0x00010044faf8;
  case 0x39:
  case 0x72:
    goto code_r0x00010044fb7c;
  case 0x3a:
    goto code_r0x00010044faa0;
  case 0x3b:
    goto code_r0x00010044fb34;
  case 0x3c:
    goto LAB_10044fa98;
  case 0x3f:
    goto code_r0x00010044f74c;
  case 0x40:
    goto code_r0x00010044f790;
  case 0x42:
  case 0xbe:
  case 0xe7:
    goto code_r0x00010044fbbc;
  case 0x45:
  case 0x77:
  case 200:
    goto code_r0x00010044fbac;
  case 0x47:
    goto code_r0x00010044fbdc;
  case 0x49:
  case 0xc0:
  case 0xd5:
    goto code_r0x00010044fbb4;
  case 0x4c:
  case 0xd3:
  case 0xfb:
    goto code_r0x00010044fbfc;
  case 0x4d:
    goto code_r0x00010044fb30;
  case 0x4e:
    goto code_r0x00010044fb60;
  case 0x4f:
  case 0xbb:
  case 199:
  case 0xe0:
    goto code_r0x00010044fbe4;
  case 0x50:
code_r0x00010044fb08:
    if (!(bool)in_ZR) goto code_r0x00010044fccc;
    ppbVar26 = (byte **)&UNK_108ca33da;
code_r0x00010044fb14:
    ppbVar30 = (byte **)0x5;
code_r0x00010044fb18:
    ppbVar27 = (byte **)&uStack_b0;
    uStack_b0 = ppbVar26;
    ppbStack_a8 = ppbVar30;
code_r0x00010044fb20:
    ppbVar30 = (byte **)&UNK_100c7b000;
code_r0x00010044fb24:
    ppbVar30 = ppbVar30 + 0x74;
code_r0x00010044fb28:
    uStack_98._0_1_ = (byte)ppbVar27;
    uStack_98._1_1_ = (byte)((ulong)ppbVar27 >> 8);
    uStack_98._2_6_ = (undefined6)((ulong)ppbVar27 >> 0x10);
    uStack_90 = SUB81(ppbVar30,0);
    uStack_8f = (undefined7)((ulong)ppbVar30 >> 8);
FUN_10044fb2c:
    param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010044fb30:
    param_2 = (char *)((long)param_2 + 0x8f7);
code_r0x00010044fb34:
    param_3 = (byte *)&uStack_98;
code_r0x00010044fb38:
    param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
    ppbVar26 = (byte **)0x1d;
code_r0x00010044fb40:
    ppbVar30 = ppbStack_230;
code_r0x00010044fb44:
    *ppbVar30 = (byte *)ppbVar26;
    ppbVar30[1] = (byte *)param_2;
code_r0x00010044fb48:
    if (ppbVar38 != (byte **)0x0) {
code_r0x00010044fb4c:
      _free(ppbStack_240);
    }
    goto LAB_10044fb54;
  case 0x52:
    goto code_r0x00010044fb00;
  case 0x54:
  case 0xe3:
  case 0xf3:
    goto code_r0x00010044fc40;
  case 0x55:
    goto code_r0x00010044f7d8;
  case 0x56:
    goto code_r0x00010044f81c;
  case 0x6e:
    goto code_r0x00010044fbe0;
  case 0x6f:
    goto code_r0x00010044fbf0;
  case 0x70:
    goto code_r0x00010044fbb8;
  case 0x75:
    goto code_r0x00010044fbd8;
  case 0x76:
  case 0xf2:
    goto code_r0x00010044fc30;
  case 0x7a:
    goto code_r0x00010044fb84;
  case 0x7d:
    goto code_r0x00010044fbc0;
  case 0x7e:
    goto code_r0x00010044fb24;
  case 0x80:
  case 0xb1:
  case 0xe2:
  case 0xfa:
    goto code_r0x00010044fc80;
  case 0x81:
  case 0x97:
  case 0xef:
    goto code_r0x00010044f784;
  case 0x82:
  case 0x98:
  case 0xf0:
    goto code_r0x00010044f7c8;
  case 0x85:
  case 0xb9:
    break;
  case 0x96:
code_r0x00010044fccc:
    *ppbStack_230 = (byte *)0x18;
    ppbStack_230[1] = (byte *)unaff_x24;
    ppbStack_230[2] = (byte *)ppbStack_238;
    ppbStack_230[3] = (byte *)ppbVar30;
    ppbStack_230[4] = (byte *)ppbVar38;
    ppbStack_230[5] = (byte *)ppbStack_240;
    unaff_x19 = ppbStack_230;
  case 0xee:
    unaff_x19[6] = (byte *)ppbVar31;
    unaff_x19[7] = (byte *)ppbVar37;
    ppbVar26 = ppbStack_260;
code_r0x00010044fcf0:
    unaff_x19[8] = (byte *)ppbVar26;
    unaff_x19[9] = (byte *)ppbVar32;
    _memcpy(&pbStack_1d0,unaff_x19,0x118);
    pbVar24 = (byte *)FUN_100fbc67c(&pbStack_220);
code_r0x00010044fd0c:
    if (pbVar24 != (byte *)0x0) {
      *unaff_x19 = (byte *)0x1d;
      unaff_x19[1] = pbVar24;
      FUN_100e35e0c(&pbStack_1d0);
    }
    goto code_r0x00010044fca8;
  case 0xb0:
  case 0xe9:
  case 0xfc:
    goto code_r0x00010044fc70;
  case 0xb5:
    goto code_r0x00010044fc90;
  case 0xb6:
    goto code_r0x00010044fca8;
  case 0xb8:
    goto code_r0x00010044fcc0;
  case 0xba:
    goto code_r0x00010044fcb0;
  case 0xbc:
  case 0xd0:
  case 0xe5:
    goto code_r0x00010044fc14;
  case 0xbd:
  case 0xe4:
    goto code_r0x00010044fc98;
  case 0xc2:
    goto code_r0x00010044fcf0;
  case 0xc3:
    goto code_r0x00010044f824;
  case 0xc6:
  case 0xfe:
    goto code_r0x00010044fbd4;
  case 0xd6:
    goto code_r0x00010044fb18;
  case 0xd8:
    goto code_r0x00010044fc74;
  case 0xd9:
    goto code_r0x00010044f778;
  case 0xda:
    goto code_r0x00010044f7bc;
  case 0xdd:
  case 0xff:
    goto code_r0x00010044fc58;
  case 0xe6:
    goto code_r0x00010044fc88;
  case 0xe8:
    goto code_r0x00010044fbec;
  }
  ppbStack_1c8 = ppbVar26;
code_r0x00010044fc40:
  bVar29 = 1;
code_r0x00010044fc84:
  pbStack_1d0 = (byte *)CONCAT71(pbStack_1d0._1_7_,bVar29);
code_r0x00010044fc88:
  param_4 = &UNK_10b21a0f0;
code_r0x00010044fc90:
  ppbVar34 = &pbStack_1d0;
  param_3 = abStack_71;
code_r0x00010044fc98:
  pbVar24 = (byte *)FUN_107c05dcc(ppbVar34,param_3,param_4);
  *(byte **)param_2 = (byte *)0x1d;
  *(byte **)((long)param_2 + 8) = pbVar24;
code_r0x00010044fca8:
code_r0x00010044fcb0:
code_r0x00010044fcc0:
  return;
}

