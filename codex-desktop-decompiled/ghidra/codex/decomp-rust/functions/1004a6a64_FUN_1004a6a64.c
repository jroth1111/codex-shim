
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a6a64(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  byte *******param_4,byte *******param_5,undefined *param_6)

{
  byte bVar1;
  code *pcVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  undefined1 in_ZR;
  undefined1 in_CY;
  byte *******pppppppbVar8;
  byte ******ppppppbVar9;
  byte ******ppppppbVar10;
  uint uVar11;
  byte bVar12;
  byte *******pppppppbVar13;
  undefined8 uVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  int iVar18;
  byte *******unaff_x19;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******pppppppbVar19;
  long lVar20;
  byte *******unaff_x22;
  byte *******pppppppbVar21;
  byte ******unaff_x24;
  byte *******unaff_x25;
  byte *******unaff_x26;
  byte *******unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined8 unaff_x30;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  byte *******pppppppbVar27;
  byte *******pppppppbStack_2d0;
  byte ******ppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [4];
  uint uStack_2ac;
  byte *******pppppppbStack_2a8;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  byte *******pppppppbStack_288;
  byte *******pppppppbStack_280;
  byte *******pppppppbStack_278;
  byte *******pppppppbStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  byte *******pppppppbStack_250;
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  byte ******ppppppbStack_238;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  undefined8 uStack_d8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte *******pppppppbStack_a0;
  undefined8 uStack_90;
  byte *******pppppppbStack_88;
  byte ******ppppppbStack_80;
  undefined *puStack_78;
  byte ******ppppppbStack_69;
  
  pppppppbVar27 = param_3._8_8_;
  pppppppbVar26 = param_3._0_8_;
  ppppppbVar9 = param_2._8_8_;
  pppppppbVar25 = param_2._0_8_;
  pppppppbVar24 = param_1._8_8_;
  pppppppbVar23 = param_1._0_8_;
  puVar22 = &stack0xfffffffffffffff0;
  bVar12 = *(byte *)param_5;
  pppppppbVar13 = (byte *******)(ulong)bVar12;
  pppppppbVar15 = (byte *******)&UNK_108c9a1d4;
  pppppppbVar17 =
       (byte *******)
       (&UNK_1004a6aa4 + (ulong)*(ushort *)(&UNK_108c9a1d4 + (long)pppppppbVar13 * 2) * 4);
  pppppppbVar6 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar7 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar4 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar5 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar3 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar8 = param_4;
  pppppppbVar16 = pppppppbVar15;
  pppppppbVar19 = unaff_x21;
  pppppppbVar21 = unaff_x22;
  switch(bVar12) {
  case 0:
  case 0x44:
  case 0x75:
    bVar12 = *(byte *)((long)param_5 + 1);
  case 0xc6:
  case 0xe8:
  case 0xf2:
    pppppppbStack_250 = (byte *******)((ulong)CONCAT61(pppppppbStack_250._2_6_,bVar12) << 8);
code_r0x0001004a72bc:
    pppppppbStack_250 = (byte *******)((ulong)pppppppbStack_250 & 0xffffffffffffff00);
    goto code_r0x0001004a7314;
  case 1:
  case 0xbe:
    pppppppbVar13 = (byte *******)(ulong)*(byte *)((long)param_5 + 1);
    goto code_r0x0001004a72c8;
  case 2:
  case 0x30:
    pppppppbVar13 = (byte *******)(ulong)*(ushort *)((long)param_5 + 2);
  case 200:
  case 0xf4:
    goto code_r0x0001004a72c8;
  case 3:
    pppppppbVar13 = (byte *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0x4b:
  case 0xc9:
  case 0xf5:
    goto code_r0x0001004a72c8;
  case 4:
  case 0x4d:
    pppppppbVar13 = (byte *******)param_5[1];
  case 0xca:
  case 0xf6:
code_r0x0001004a72c8:
    pppppppbStack_248 = pppppppbVar13;
code_r0x0001004a72cc:
    bVar12 = 1;
code_r0x0001004a72d0:
    break;
  case 5:
  case 0x49:
    pppppppbVar13 = (byte *******)(long)(char)*(byte *)((long)param_5 + 1);
  case 0xcb:
  case 0xf7:
  case 0xce:
  case 0xfa:
code_r0x0001004a7308:
    pppppppbStack_248 = pppppppbVar13;
code_r0x0001004a730c:
    bVar12 = 2;
    break;
  case 6:
  case 0x43:
  case 0x92:
  case 0xbb:
  case 0xde:
    pppppppbVar13 = (byte *******)(long)*(short *)((long)param_5 + 2);
  case 0x2c:
  case 0xcc:
  case 0xf8:
    goto code_r0x0001004a7308;
  case 7:
  case 0x71:
    pppppppbVar13 = (byte *******)(long)*(int *)((long)param_5 + 4);
  case 0xcd:
  case 0xe0:
  case 0xf9:
    goto code_r0x0001004a7308;
  case 8:
  case 0x4f:
  case 0xdf:
    pppppppbVar13 = (byte *******)param_5[1];
    goto code_r0x0001004a7308;
  case 9:
  case 0x4e:
    pppppppbVar23 = (byte *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0xcf:
  case 0xfb:
    pppppppbVar23 = (byte *******)(double)SUB84(pppppppbVar23,0);
code_r0x0001004a7288:
  case 0xd0:
  case 0xfc:
code_r0x0001004a72f8:
    pppppppbStack_248 = pppppppbVar23;
code_r0x0001004a72fc:
    bVar12 = 3;
code_r0x0001004a7300:
    break;
  case 10:
  case 0x74:
  case 0xeb:
    pppppppbVar23 = (byte *******)param_5[1];
    goto code_r0x0001004a72f8;
  case 0xb:
  case 0x50:
    param_5 = (byte *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0xd1:
  case 0xfd:
code_r0x0001004a7230:
    pppppppbVar4 = (byte *******)&stack0xffffffffffffffa0;
code_r0x0001004a7234:
    puVar22 = *(undefined1 **)((long)pppppppbVar4 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppbVar4 + 0x58);
    unaff_x20 = *(byte ********)((long)pppppppbVar4 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar4 + 0x48);
    pppppppbVar5 = pppppppbVar4;
code_r0x0001004a723c:
    *(byte ********)((long)pppppppbVar5 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar5 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar5 + 0x50) = puVar22;
    *(undefined8 *)((long)pppppppbVar5 + 0x58) = unaff_x30;
    *(undefined4 *)((long)pppppppbVar5 + 0x1c) = 0;
    uVar11 = (uint)param_5;
    if (uVar11 < 0x80) {
      *(byte *)((long)pppppppbVar5 + 0x1c) = (byte)param_5;
      uVar14 = 1;
    }
    else {
      bVar12 = (byte)param_5 & 0x3f | 0x80;
      if (uVar11 < 0x800) {
        *(byte *)((long)pppppppbVar5 + 0x1c) = (byte)(uVar11 >> 6) | 0xc0;
        *(byte *)((long)pppppppbVar5 + 0x1d) = bVar12;
        uVar14 = 2;
      }
      else {
        bVar1 = (byte)(uVar11 >> 6) & 0x3f | 0x80;
        if (uVar11 < 0x10000) {
          *(byte *)((long)pppppppbVar5 + 0x1c) = (byte)(uVar11 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppbVar5 + 0x1d) = bVar1;
          *(byte *)((long)pppppppbVar5 + 0x1e) = bVar12;
          uVar14 = 3;
        }
        else {
          *(byte *)((long)pppppppbVar5 + 0x1c) = (byte)(uVar11 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppbVar5 + 0x1d) = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppbVar5 + 0x1e) = bVar1;
          *(byte *)((long)pppppppbVar5 + 0x1f) = bVar12;
          uVar14 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppbVar5 + 0x28) = (undefined1 *)((long)pppppppbVar5 + 0x1c);
    *(undefined8 *)((long)pppppppbVar5 + 0x30) = uVar14;
    *(undefined1 *)((long)pppppppbVar5 + 0x20) = 5;
    ppppppbVar9 = (byte ******)
                  func_0x000108a4a50c((undefined1 *)((long)pppppppbVar5 + 0x20),
                                      (undefined1 *)((long)pppppppbVar5 + 0x3f),&UNK_10b21b410);
    *param_4 = (byte ******)0x1d;
    param_4[1] = ppppppbVar9;
    return;
  case 0xc:
  case 0x72:
  case 0xec:
    param_5 = param_5 + 1;
  case 0xd2:
  case 0xfe:
code_r0x0001004a7260:
    pppppppbVar6 = (byte *******)&stack0xffffffffffffffa0;
code_r0x0001004a7264:
    puVar22 = *(undefined1 **)((long)pppppppbVar6 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppbVar6 + 0x58);
    unaff_x20 = *(byte ********)((long)pppppppbVar6 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar6 + 0x48);
    unaff_x22 = *(byte ********)((long)pppppppbVar6 + 0x30);
    unaff_x21 = *(byte ********)((long)pppppppbVar6 + 0x38);
    pppppppbVar7 = pppppppbVar6;
code_r0x0001004a7278:
    *(byte ********)((long)pppppppbVar7 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar7 + 0x38) = unaff_x21;
    *(byte ********)((long)pppppppbVar7 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar7 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar7 + 0x50) = puVar22;
    *(undefined8 *)((long)pppppppbVar7 + 0x58) = unaff_x30;
    ppppppbVar9 = param_5[1];
    ppppppbVar10 = param_5[2];
    *(byte *******)((long)pppppppbVar7 + 0x18) = ppppppbVar9;
    *(byte *******)((long)pppppppbVar7 + 0x20) = ppppppbVar10;
    *(undefined1 *)((long)pppppppbVar7 + 0x10) = 5;
    ppppppbVar10 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar7 + 0x10),
                                       (undefined1 *)((long)pppppppbVar7 + 0x2f),&UNK_10b21b410);
    *param_4 = (byte ******)0x1d;
    param_4[1] = ppppppbVar10;
    if (*param_5 != (byte ******)0x0) {
      _free(ppppppbVar9);
    }
    return;
  case 0xd:
  case 0x42:
  case 0x73:
    pppppppbVar13 = (byte *******)param_5[1];
    pppppppbVar15 = (byte *******)param_5[2];
  case 0x2f:
  case 0xd3:
  case 0xe5:
  case 0xff:
    pppppppbStack_248 = pppppppbVar13;
    pppppppbStack_240 = pppppppbVar15;
code_r0x0001004a72e4:
    bVar12 = 5;
code_r0x0001004a72e8:
    break;
  case 0xe:
  case 0x7e:
    param_5 = param_5 + 1;
  case 0xd4:
code_r0x0001004a7208:
    pppppppbVar3 = (byte *******)&stack0xffffffffffffffa0;
    puVar22 = unaff_x29;
code_r0x0001004a7220:
    *(byte ********)((long)pppppppbVar3 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar3 + 0x38) = unaff_x21;
    *(byte ********)((long)pppppppbVar3 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar3 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar3 + 0x50) = puVar22;
    *(undefined8 *)((long)pppppppbVar3 + 0x58) = unaff_x30;
    ppppppbVar9 = param_5[1];
    ppppppbVar10 = param_5[2];
    *(byte *******)((long)pppppppbVar3 + 0x18) = ppppppbVar9;
    *(byte *******)((long)pppppppbVar3 + 0x20) = ppppppbVar10;
    *(undefined1 *)((long)pppppppbVar3 + 0x10) = 6;
    ppppppbVar10 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar3 + 0x10),
                                       (undefined1 *)((long)pppppppbVar3 + 0x2f),&UNK_10b21b410);
    *param_4 = (byte ******)0x1d;
    param_4[1] = ppppppbVar10;
    if (*param_5 != (byte ******)0x0) {
      _free(ppppppbVar9);
    }
    return;
  case 0xf:
  case 0x38:
  case 0x70:
    pppppppbVar13 = (byte *******)param_5[1];
    pppppppbVar15 = (byte *******)param_5[2];
  case 0xd5:
    pppppppbStack_248 = pppppppbVar13;
    pppppppbStack_240 = pppppppbVar15;
code_r0x0001004a729c:
    bVar12 = 6;
    break;
  case 0x10:
    bVar12 = 8;
  case 0xd6:
    break;
  default:
    unaff_x20 = (byte *******)param_5[1];
    pppppppbStack_248 = (byte *******)unaff_x20[1];
    pppppppbStack_250 = (byte *******)*unaff_x20;
  case 99:
    ppppppbStack_238 = unaff_x20[3];
    pppppppbStack_240 = (byte *******)unaff_x20[2];
    thunk_FUN_108802158(param_4,&pppppppbStack_250);
code_r0x0001004a6f84:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x12:
  case 0xe1:
    bVar12 = 7;
    break;
  case 0x13:
    unaff_x20 = (byte *******)param_5[1];
    pppppppbVar24 = (byte *******)unaff_x20[1];
    pppppppbVar23 = (byte *******)*unaff_x20;
  case 0x81:
    ppppppbStack_238 = unaff_x20[3];
    pppppppbStack_240 = (byte *******)unaff_x20[2];
    pppppppbStack_250 = pppppppbVar23;
    pppppppbStack_248 = pppppppbVar24;
code_r0x0001004a6f78:
    thunk_FUN_10882d038(param_4,&pppppppbStack_250);
    goto code_r0x0001004a6f84;
  case 0x14:
    pppppppbVar13 = (byte *******)param_5[1];
    unaff_x19 = (byte *******)param_5[2];
    unaff_x22 = (byte *******)param_5[3];
  case 0x82:
    pppppppbStack_120 = unaff_x19 + (long)unaff_x22 * 4;
    pppppppbStack_138 = unaff_x19;
    pppppppbStack_130 = unaff_x19;
    pppppppbStack_128 = pppppppbVar13;
code_r0x0001004a6fbc:
    pppppppbStack_118 = (byte *******)0x0;
    if (unaff_x22 == (byte *******)0x0) {
code_r0x0001004a6fd8:
      pppppppbStack_b8 = (byte *******)thunk_FUN_1087e422c(0,&UNK_10b22ec78,&UNK_10b20a590);
code_r0x0001004a6ff4:
      *param_4 = (byte ******)0x1d;
      param_4[1] = (byte ******)pppppppbStack_b8;
code_r0x0001004a6ffc:
      lVar20 = ((ulong)((long)pppppppbStack_120 - (long)pppppppbStack_130) >> 5) + 1;
      pppppppbVar15 = pppppppbStack_130;
      while (lVar20 = lVar20 + -1, lVar20 != 0) {
        FUN_100e077ec(pppppppbVar15);
        pppppppbVar15 = pppppppbVar15 + 4;
      }
      if (pppppppbStack_128 != (byte *******)0x0) {
        _free(pppppppbStack_138);
      }
    }
    else {
      pppppppbStack_130 = unaff_x19 + 4;
      if (*(byte *)unaff_x19 == 0x16) goto code_r0x0001004a6fd8;
      uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x19 + 9);
      uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x19 + 1);
      uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x19 + 1) >> 0x38);
      pppppppbStack_288 = (byte *******)unaff_x19[3];
      uStack_290 = SUB81(unaff_x19[2],0);
      uStack_28f = (undefined7)((ulong)unaff_x19[2] >> 8);
      pppppppbStack_118 = (byte *******)0x1;
      bStack_2a0 = *(byte *)unaff_x19;
      FUN_1004b62d4(&pppppppbStack_c0,&bStack_2a0);
      if (pppppppbStack_c0 == (byte *******)0x8000000000000000) goto code_r0x0001004a6ff4;
      unaff_x21 = pppppppbStack_c0;
      unaff_x20 = pppppppbStack_b8;
      if (unaff_x22 == (byte *******)0x1) {
code_r0x0001004a7110:
        uVar14 = 1;
code_r0x0001004a7114:
        pppppppbVar8 = (byte *******)thunk_FUN_1087e422c(uVar14,&UNK_10b22ec78,&UNK_10b20a590);
code_r0x0001004a7128:
        *param_4 = (byte ******)0x1d;
        param_4[1] = (byte ******)pppppppbVar8;
        if (unaff_x21 != (byte *******)0x0) {
          _free(unaff_x20);
        }
        goto code_r0x0001004a6ffc;
      }
      pppppppbStack_130 = unaff_x19 + 8;
      bVar12 = *(byte *)(unaff_x19 + 4);
      if (bVar12 == 0x16) goto code_r0x0001004a7110;
      pppppppbVar24 = *(byte ********)((long)unaff_x19 + 0x29);
      pppppppbVar23 = *(byte ********)((long)unaff_x19 + 0x21);
      unaff_x22 = pppppppbStack_b0;
code_r0x0001004a7484:
      uStack_297 = SUB87(pppppppbVar24,0);
      uStack_29f = SUB87(pppppppbVar23,0);
      uStack_298 = (undefined1)((ulong)pppppppbVar23 >> 0x38);
code_r0x0001004a7488:
      pppppppbStack_288 = (byte *******)unaff_x19[7];
      uStack_290 = SUB81(unaff_x19[6],0);
      uStack_28f = (undefined7)((ulong)unaff_x19[6] >> 8);
code_r0x0001004a7490:
      bStack_2a0 = bVar12;
      pppppppbStack_118 = (byte *******)0x2;
      pppppppbVar8 = (byte *******)&pppppppbStack_c0;
code_r0x0001004a74a0:
      FUN_10131c0f4(pppppppbVar8,&bStack_2a0);
code_r0x0001004a74a8:
      if (((ulong)pppppppbStack_c0 & 1) != 0) {
code_r0x0001004a74b0:
        pppppppbVar8 = pppppppbStack_b8;
        goto code_r0x0001004a7128;
      }
      unaff_x19 = (byte *******)((ulong)pppppppbStack_c0 >> 8 & 0xff);
      pppppppbVar8 = (byte *******)&bStack_2a0;
code_r0x0001004a74c0:
      FUN_100f28ba8(pppppppbVar8,&pppppppbStack_138);
      pppppppbVar13 = (byte *******)CONCAT71(uStack_29f,bStack_2a0);
      pppppppbVar8 = (byte *******)CONCAT71(uStack_297,uStack_298);
      pppppppbVar15 = (byte *******)0x2;
code_r0x0001004a74d0:
      in_ZR = pppppppbVar13 == (byte *******)((ulong)pppppppbVar15 | 0x8000000000000000);
code_r0x0001004a74d8:
      if ((bool)in_ZR) goto code_r0x0001004a7128;
      uStack_100 = (byte *******)CONCAT71(uStack_28f,uStack_290);
      pppppppbStack_f8 = pppppppbStack_288;
      pppppppbStack_e8 = pppppppbStack_278;
      pppppppbStack_f0 = pppppppbStack_280;
      pppppppbVar16 = pppppppbStack_270;
code_r0x0001004a74e8:
      pppppppbVar15 = (byte *******)0x8000000000000001;
      pppppppbStack_e0 = pppppppbVar16;
code_r0x0001004a74f0:
      if (pppppppbVar13 == pppppppbVar15) {
        uVar14 = 2;
        goto code_r0x0001004a7114;
      }
      param_4[7] = (byte ******)pppppppbStack_f8;
      param_4[6] = (byte ******)uStack_100;
      param_4[9] = (byte ******)pppppppbStack_e8;
      param_4[8] = (byte ******)pppppppbStack_f0;
code_r0x0001004a7500:
      param_4[10] = (byte ******)pppppppbStack_e0;
      *param_4 = (byte ******)0x12;
      param_4[1] = (byte ******)unaff_x21;
      param_4[2] = (byte ******)unaff_x20;
      param_4[3] = (byte ******)unaff_x22;
      param_4[4] = (byte ******)pppppppbVar13;
      param_4[5] = (byte ******)pppppppbVar8;
      *(byte *)(param_4 + 0xb) = (byte)unaff_x19;
      _memcpy(&pppppppbStack_250,param_4,0x118);
      pppppppbVar8 = (byte *******)&pppppppbStack_138;
code_r0x0001004a7530:
      ppppppbVar9 = (byte ******)FUN_100fbc738(pppppppbVar8);
      if (ppppppbVar9 != (byte ******)0x0) {
        *param_4 = (byte ******)0x1d;
        param_4[1] = ppppppbVar9;
code_r0x0001004a73a0:
        FUN_100e35e0c(&pppppppbStack_250);
code_r0x0001004a73a8:
      }
    }
    goto code_r0x0001004a746c;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    pppppppbVar15 = (byte *******)param_5[1];
    pppppppbVar13 = (byte *******)param_5[2];
  case 0x5c:
    pppppppbVar17 = (byte *******)param_5[3];
    unaff_x22 = pppppppbVar13 + (long)pppppppbVar17 * 8;
code_r0x0001004a6ad4:
    unaff_x20 = (byte *******)&bStack_2a0;
    pppppppbStack_280 = pppppppbVar13;
    pppppppbStack_270 = pppppppbVar15;
    pppppppbStack_268 = unaff_x22;
    bStack_2a0 = 0x16;
    pppppppbStack_260 = (byte *******)0x0;
    pppppppbVar15 = (byte *******)0x8000000000000001;
    pppppppbStack_278 = pppppppbVar13;
code_r0x0001004a6af0:
    pppppppbStack_138 = pppppppbVar15;
    if (pppppppbVar17 == (byte *******)0x0) {
      unaff_x21 = (byte *******)0x8000000000000001;
code_r0x0001004a7068:
      uStack_90 = (byte *******)&UNK_108cb8883;
      pppppppbStack_88 = (byte *******)0xc;
      uStack_100 = (byte *******)&uStack_90;
      pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
      unaff_x25 = (byte *******)0x0;
      ppppppbVar9 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
      *param_4 = (byte ******)0x1d;
      param_4[1] = ppppppbVar9;
      goto joined_r0x0001004a716c;
    }
    unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
    unaff_x21 = (byte *******)((ulong)unaff_x20 | 1);
    unaff_x20 = (byte *******)((ulong)&uStack_100 | 1);
    uStack_2ac = 5;
    pppppppbStack_2d0 = param_4;
code_r0x0001004a6b18:
    pppppppbStack_2a8 = (byte *******)0x8000000000000001;
code_r0x0001004a6b20:
    unaff_x25 = (byte *******)0x8000000000000000;
    unaff_x26 = (byte *******)0x8000000000000001;
    pppppppbVar21 = unaff_x22;
code_r0x0001004a6b28:
    do {
      unaff_x27 = pppppppbVar13 + 8;
      unaff_x19 = (byte *******)(ulong)*(byte *)pppppppbVar13;
      pppppppbStack_278 = unaff_x27;
      pppppppbVar15 = pppppppbStack_260;
      if (*(byte *)pppppppbVar13 == 0x16) break;
code_r0x0001004a6b78:
      pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
code_r0x0001004a6b7c:
      uStack_90 = (byte *******)CONCAT71(uStack_90._1_7_,(char)unaff_x19);
      pppppppbStack_260 = pppppppbVar15;
code_r0x0001004a6b84:
      pppppppbVar24 = *(byte ********)((long)pppppppbVar13 + 9);
      pppppppbVar23 = *(byte ********)((long)pppppppbVar13 + 1);
      ppppppbVar9 = pppppppbVar13[3];
      pppppppbVar25 = (byte *******)pppppppbVar13[2];
      pppppppbVar27 = (byte *******)pppppppbVar13[5];
      pppppppbVar26 = (byte *******)pppppppbVar13[4];
code_r0x0001004a6b8c:
      unaff_x28[1] = pppppppbVar24;
      *unaff_x28 = pppppppbVar23;
      *(byte *******)((long)unaff_x28 + 0x17) = ppppppbVar9;
      *(byte ********)((long)unaff_x28 + 0xf) = pppppppbVar25;
      pppppppbStack_e8 = (byte *******)pppppppbVar13[7];
      pppppppbStack_f0 = (byte *******)pppppppbVar13[6];
      pppppppbVar13 = (byte *******)(ulong)bStack_2a0;
      uStack_100 = pppppppbVar26;
      pppppppbStack_f8 = pppppppbVar27;
code_r0x0001004a6ba0:
      iVar18 = (int)unaff_x19;
      if ((int)pppppppbVar13 != 0x16) {
code_r0x0001004a6ba8:
        iVar18 = (int)unaff_x19;
        FUN_100e077ec(&bStack_2a0);
      }
      unaff_x24 = ppppppbStack_80;
      param_4 = pppppppbStack_88;
      uStack_298 = SUB81(pppppppbStack_f8,0);
      uStack_297 = (undefined7)((ulong)pppppppbStack_f8 >> 8);
      bStack_2a0 = (byte)uStack_100;
      uStack_29f = (undefined7)((ulong)uStack_100 >> 8);
      pppppppbStack_288 = pppppppbStack_e8;
      uStack_290 = SUB81(pppppppbStack_f0,0);
      uStack_28f = (undefined7)((ulong)pppppppbStack_f0 >> 8);
      if (iVar18 < 0xd) {
        if (iVar18 == 1) {
          bVar12 = uStack_90._1_1_;
          if (2 < uStack_90._1_1_) {
            bVar12 = 3;
          }
          goto code_r0x0001004a6dd0;
        }
        if (iVar18 == 4) {
          in_CY = (byte *******)0x2 < pppppppbStack_88;
          bVar12 = 3;
code_r0x0001004a6c6c:
          bVar1 = (byte)param_4;
          if ((bool)in_CY) {
            bVar1 = bVar12;
          }
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar1);
          goto code_r0x0001004a6dd4;
        }
        if (iVar18 == 0xc) {
          if (puStack_78 == (undefined *)0x6) {
            if (*(int *)ppppppbStack_80 != 0x74617473 ||
                *(short *)((long)ppppppbStack_80 + 4) != 0x7375) goto code_r0x0001004a6d54;
            uStack_100 = (byte *******)CONCAT62(uStack_100._2_6_,0x100);
code_r0x0001004a6f2c:
            uStack_100 = (byte *******)((ulong)uStack_100 & 0xffffffffffffff00);
code_r0x0001004a6f30:
            if (param_4 == (byte *******)0x0) {
code_r0x0001004a6f34:
              pppppppbVar19 = unaff_x21;
              goto code_r0x0001004a6de0;
            }
          }
          else {
            param_6 = puStack_78;
            if (puStack_78 == (undefined *)0xe) {
              if (*ppppppbStack_80 != (byte *****)0x705f746c75736572 ||
                  *(long *)((long)ppppppbStack_80 + 6) != 0x64616f6c7961705f)
              goto code_r0x0001004a6d54;
              uStack_100 = (byte *******)CONCAT62(uStack_100._2_6_,0x200);
            }
            else {
code_r0x0001004a6bf0:
              if ((param_6 == (undefined *)0xc) &&
                 (*unaff_x24 == (byte *****)0x6c61635f6c6f6f74 &&
                  *(int *)(unaff_x24 + 1) == 0x64695f6c)) {
                uStack_100 = (byte *******)((ulong)uStack_100 & 0xffffffffffff0000);
code_r0x0001004a6c2c:
                uStack_100 = (byte *******)((ulong)uStack_100 & 0xffffffffffffff00);
              }
              else {
code_r0x0001004a6d54:
                uStack_100 = (byte *******)CONCAT62(uStack_100._2_6_,0x300);
              }
            }
joined_r0x0001004a6d2c:
            pppppppbVar19 = unaff_x21;
            if (param_4 == (byte *******)0x0) goto code_r0x0001004a6de0;
          }
          _free(unaff_x24);
          pppppppbVar19 = unaff_x21;
        }
        else {
code_r0x0001004a6f40:
          pppppppbStack_f8 =
               (byte *******)thunk_FUN_108855b04(&uStack_90,&ppppppbStack_69,&UNK_10b210340);
          uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,1);
          pppppppbVar19 = unaff_x21;
        }
      }
      else {
        if (iVar18 == 0xd) {
          if (ppppppbStack_80 == (byte ******)0x6) {
            if (*(int *)pppppppbStack_88 != 0x74617473 ||
                *(short *)((long)pppppppbStack_88 + 4) != 0x7375) goto code_r0x0001004a6dcc;
            bVar12 = 1;
          }
          else if (ppppppbStack_80 == (byte ******)0xe) {
            pppppppbVar13 = (byte *******)*pppppppbStack_88;
            pppppppbVar15 = *(byte ********)((long)pppppppbStack_88 + 6);
            pppppppbVar17 = (byte *******)0x75736572;
code_r0x0001004a6d80:
            if (pppppppbVar13 !=
                (byte *******)((ulong)pppppppbVar17 & 0xffff0000ffffffff | 0x705f746c00000000) ||
                pppppppbVar15 != (byte *******)0x64616f6c7961705f) goto code_r0x0001004a6dcc;
            bVar12 = 2;
          }
          else if ((ppppppbStack_80 == (byte ******)0xc) &&
                  (*pppppppbStack_88 == (byte ******)0x6c61635f6c6f6f74 &&
                   *(int *)(pppppppbStack_88 + 1) == 0x64695f6c)) {
            bVar12 = 0;
          }
          else {
code_r0x0001004a6dcc:
            bVar12 = 3;
          }
code_r0x0001004a6dd0:
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar12);
code_r0x0001004a6dd4:
          uStack_100 = (byte *******)((ulong)uStack_100._1_7_ << 8);
        }
        else {
          if (iVar18 == 0xe) {
            FUN_100b4b05c(&uStack_100,ppppppbStack_80);
            goto joined_r0x0001004a6d2c;
          }
          if (iVar18 != 0xf) goto code_r0x0001004a6f40;
          FUN_100b4b05c(&uStack_100,pppppppbStack_88,ppppppbStack_80);
        }
        FUN_100e077ec(&uStack_90);
        pppppppbVar19 = unaff_x21;
      }
code_r0x0001004a6de0:
      bVar12 = bStack_2a0;
      unaff_x21 = pppppppbStack_2a8;
      unaff_x22 = pppppppbStack_2c0;
      if (((ulong)uStack_100 & 1) != 0) {
        pppppppbStack_130 = pppppppbStack_2c0;
        pppppppbVar13 = pppppppbStack_f8;
        pppppppbStack_138 = unaff_x26;
        goto code_r0x0001004a714c;
      }
      if (uStack_100._1_1_ < 2) {
        if (uStack_100._1_1_ == 0) {
          if (unaff_x25 != (byte *******)0x8000000000000000) {
            pppppppbStack_130 = pppppppbStack_2c0;
            uStack_90 = (byte *******)&UNK_108cb8883;
            pppppppbStack_88 = (byte *******)0xc;
            uStack_100 = (byte *******)&uStack_90;
            pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
            pppppppbStack_138 = unaff_x26;
            ppppppbVar9 = (byte ******)
                          thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
code_r0x0001004a7658:
            unaff_x20 = (byte *******)&bStack_2a0;
            *pppppppbStack_2d0 = (byte ******)0x1d;
            pppppppbStack_2d0[1] = ppppppbVar9;
            unaff_x19 = (byte *******)0x1;
            iVar18 = 1;
            goto joined_r0x0001004a766c;
          }
          bStack_2a0 = 0x16;
          if (bVar12 == 0x16) {
            pppppppbStack_130 = pppppppbStack_2c0;
            pppppppbStack_138 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004a769c;
          }
          ppppppbVar9 = *pppppppbVar19;
          unaff_x20[1] = pppppppbVar19[1];
          *unaff_x20 = ppppppbVar9;
          uVar14 = *(undefined8 *)((long)pppppppbVar19 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppbVar19 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar14;
          uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,bVar12);
          FUN_1004b62d4(&uStack_90,&uStack_100);
          unaff_x22 = pppppppbStack_2c0;
          if (uStack_90 == (byte *******)0x8000000000000000) goto code_r0x0001004a73d8;
          uStack_2b8 = pppppppbStack_88;
          ppppppbStack_2c8 = ppppppbStack_80;
          unaff_x21 = pppppppbVar19;
          unaff_x25 = uStack_90;
        }
        else {
          if (uStack_2ac != 5) {
            pppppppbStack_130 = pppppppbStack_2c0;
            uStack_90 = (byte *******)&UNK_108ca105e;
            pppppppbStack_88 = (byte *******)0x6;
            uStack_100 = (byte *******)&uStack_90;
            pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
            pppppppbStack_138 = unaff_x26;
            ppppppbVar9 = (byte ******)
                          thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto code_r0x0001004a7658;
          }
          bStack_2a0 = 0x16;
          if (bVar12 == 0x16) goto code_r0x0001004a7544;
          ppppppbVar9 = *pppppppbVar19;
          unaff_x20[1] = pppppppbVar19[1];
          *unaff_x20 = ppppppbVar9;
code_r0x0001004a6ec0:
          uVar14 = *(undefined8 *)((long)pppppppbVar19 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppbVar19 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar14;
          uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,bVar12);
          param_4 = (byte *******)&uStack_90;
          param_5 = (byte *******)&uStack_100;
code_r0x0001004a6ed4:
          FUN_10131c0f4(param_4,param_5);
          unaff_x22 = pppppppbStack_2c0;
          if ((char)uStack_90 == '\x01') goto code_r0x0001004a73c8;
          pppppppbVar13 = (byte *******)((ulong)uStack_90 >> 8 & 0xff);
code_r0x0001004a6ee8:
          uStack_2ac = (uint)pppppppbVar13;
          unaff_x21 = pppppppbVar19;
code_r0x0001004a6eec:
        }
      }
      else if (uStack_100._1_1_ == 2) {
        if (pppppppbStack_2a8 != (byte *******)0x8000000000000001) {
          pppppppbStack_130 = pppppppbStack_2c0;
          uStack_90 = (byte *******)&UNK_108cbacd9;
          pppppppbStack_88 = (byte *******)0xe;
          uStack_100 = (byte *******)&uStack_90;
          pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
          pppppppbStack_138 = unaff_x26;
          ppppppbVar9 = (byte ******)
                        thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          unaff_x20 = (byte *******)&bStack_2a0;
          *pppppppbStack_2d0 = (byte ******)0x1d;
          pppppppbStack_2d0[1] = ppppppbVar9;
          unaff_x19 = (byte *******)0x1;
          iVar18 = 1;
          if (unaff_x21 != (byte *******)0x8000000000000000) goto LAB_1004a7414;
          goto LAB_1004a7430;
        }
        pppppppbStack_2a8 = (byte *******)0x8000000000000001;
        func_0x000100f1ec38(&uStack_100,&bStack_2a0);
        pppppppbVar17 = pppppppbStack_f8;
        unaff_x26 = uStack_100;
        if (uStack_100 == (byte *******)0x8000000000000001) {
          pppppppbVar13 = (byte *******)0x1d;
          goto code_r0x0001004a73b0;
        }
code_r0x0001004a6b30:
        pppppppbStack_2c0 = pppppppbVar17;
code_r0x0001004a6b34:
        pppppppbVar13 = (byte *******)&uStack_100;
        pppppppbVar15 = (byte *******)&pppppppbStack_138;
        pppppppbStack_120 = pppppppbStack_e8;
        pppppppbStack_128 = pppppppbStack_f0;
        uStack_110 = uStack_d8;
        pppppppbStack_118 = pppppppbStack_e0;
code_r0x0001004a6b44:
        pppppppbVar13 = (byte *******)pppppppbVar13[6];
        unaff_x21 = pppppppbVar19;
code_r0x0001004a6b48:
        pppppppbVar15[6] = (byte ******)pppppppbVar13;
        pppppppbVar21 = pppppppbStack_268;
        unaff_x27 = pppppppbStack_278;
        pppppppbStack_2a8 = unaff_x26;
      }
      else {
code_r0x0001004a6ef0:
        bVar12 = bStack_2a0;
        bStack_2a0 = 0x16;
        if (bVar12 == 0x16) {
code_r0x0001004a7544:
          bStack_2a0 = 0x16;
          pppppppbStack_130 = pppppppbStack_2c0;
          pppppppbStack_138 = unaff_x26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004a769c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004a76a0);
          (*pcVar2)();
        }
code_r0x0001004a6f04:
        ppppppbVar9 = *pppppppbVar19;
        unaff_x20[1] = pppppppbVar19[1];
        *unaff_x20 = ppppppbVar9;
        uVar14 = *(undefined8 *)((long)pppppppbVar19 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppbVar19 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar14;
        uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,bVar12);
        unaff_x21 = pppppppbVar19;
code_r0x0001004a6f18:
        FUN_100e077ec(&uStack_100);
      }
code_r0x0001004a6b58:
      pppppppbVar13 = unaff_x27;
    } while (unaff_x27 != pppppppbVar21);
    pppppppbStack_138 = unaff_x26;
    pppppppbStack_130 = pppppppbStack_2c0;
    unaff_x22 = pppppppbStack_2c0;
    unaff_x21 = pppppppbStack_2a8;
    if (unaff_x25 == (byte *******)0x8000000000000000) {
      unaff_x20 = (byte *******)&bStack_2a0;
      param_4 = pppppppbStack_2d0;
      goto code_r0x0001004a7068;
    }
    pppppppbVar15 = (byte *******)(ulong)uStack_2ac;
    unaff_x20 = (byte *******)&bStack_2a0;
    unaff_x19 = pppppppbStack_2d0;
    if (uStack_2ac == 5) {
      pppppppbVar13 = (byte *******)&UNK_108ca105e;
code_r0x0001004a7194:
      pppppppbStack_88 = (byte *******)0x6;
      uStack_100 = (byte *******)&uStack_90;
      pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
      uStack_90 = pppppppbVar13;
      param_4 = (byte *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
      pppppppbVar13 = (byte *******)0x1d;
code_r0x0001004a71c0:
      *unaff_x19 = (byte ******)pppppppbVar13;
      unaff_x19[1] = (byte ******)param_4;
      if (unaff_x25 != (byte *******)0x0) {
        _free(uStack_2b8);
      }
      unaff_x19 = (byte *******)0x0;
      iVar18 = 0;
      goto joined_r0x0001004a766c;
    }
    if (pppppppbStack_2a8 == (byte *******)0x8000000000000001) {
      unaff_x21 = (byte *******)0x8000000000000000;
    }
    else {
code_r0x0001004a733c:
      pppppppbVar13 = (byte *******)&pppppppbStack_138;
code_r0x0001004a7340:
      pppppppbVar24 = (byte *******)pppppppbVar13[3];
      pppppppbVar23 = (byte *******)pppppppbVar13[2];
      ppppppbVar9 = pppppppbVar13[5];
      pppppppbVar25 = (byte *******)pppppppbVar13[4];
code_r0x0001004a7344:
      pppppppbStack_b8 = pppppppbVar24;
      pppppppbStack_c0 = pppppppbVar23;
      ppppppbStack_a8 = ppppppbVar9;
      pppppppbStack_b0 = pppppppbVar25;
      pppppppbVar13 = (byte *******)pppppppbVar13[6];
code_r0x0001004a734c:
      pppppppbStack_a0 = pppppppbVar13;
    }
code_r0x0001004a7350:
    pppppppbVar13 = (byte *******)0x12;
code_r0x0001004a7354:
    *unaff_x19 = (byte ******)pppppppbVar13;
    unaff_x19[1] = (byte ******)unaff_x25;
code_r0x0001004a7358:
    pppppppbVar17 = uStack_2b8;
code_r0x0001004a735c:
    unaff_x19[2] = (byte ******)pppppppbVar17;
    unaff_x19[3] = ppppppbStack_2c8;
code_r0x0001004a7364:
    unaff_x19[4] = (byte ******)unaff_x21;
    unaff_x19[5] = (byte ******)unaff_x22;
code_r0x0001004a7368:
    pppppppbVar23 = pppppppbStack_c0;
    pppppppbVar24 = pppppppbStack_b8;
    pppppppbVar25 = pppppppbStack_b0;
    ppppppbVar9 = ppppppbStack_a8;
code_r0x0001004a736c:
    unaff_x19[7] = (byte ******)pppppppbVar24;
    unaff_x19[6] = (byte ******)pppppppbVar23;
    unaff_x19[9] = ppppppbVar9;
    unaff_x19[8] = (byte ******)pppppppbVar25;
code_r0x0001004a7370:
    pppppppbVar13 = pppppppbStack_a0;
code_r0x0001004a7374:
    unaff_x19[10] = (byte ******)pppppppbVar13;
code_r0x0001004a7378:
    *(byte *)(unaff_x19 + 0xb) = (byte)pppppppbVar15;
    param_4 = (byte *******)&pppppppbStack_250;
code_r0x0001004a7380:
    param_5 = unaff_x19;
    param_6 = (undefined *)0x118;
    unaff_x19 = param_5;
code_r0x0001004a7388:
    _memcpy(param_4,param_5,param_6);
    param_4 = (byte *******)&bStack_2a0;
code_r0x0001004a7390:
    param_4 = (byte *******)FUN_100fbc67c(param_4);
    if (param_4 != (byte *******)0x0) {
code_r0x0001004a7398:
      *unaff_x19 = (byte ******)0x1d;
      unaff_x19[1] = (byte ******)param_4;
      goto code_r0x0001004a73a0;
    }
    goto code_r0x0001004a746c;
  case 0x16:
    goto code_r0x0001004a7434;
  case 0x17:
    goto LAB_1004a7444;
  case 0x18:
    goto code_r0x0001004a740c;
  case 0x19:
  case 0xa5:
    goto code_r0x0001004a7424;
  case 0x1a:
    goto code_r0x0001004a73d0;
  case 0x1b:
  case 0xa6:
    goto code_r0x0001004a7454;
  case 0x1c:
    goto code_r0x0001004a746c;
  case 0x1d:
    goto code_r0x0001004a742c;
  case 0x1e:
    goto code_r0x0001004a7484;
  case 0x1f:
    goto code_r0x0001004a7400;
  case 0x20:
    goto code_r0x0001004a7474;
  case 0x21:
    goto code_r0x0001004a73a8;
  case 0x22:
  case 0x8a:
code_r0x0001004a73d8:
    pppppppbVar13 = pppppppbStack_88;
    pppppppbStack_138 = unaff_x26;
    pppppppbStack_130 = unaff_x22;
  case 0x8e:
    *pppppppbStack_2d0 = (byte ******)0x1d;
    pppppppbStack_2d0[1] = (byte ******)pppppppbVar13;
    unaff_x19 = (byte *******)0x1;
code_r0x0001004a73f0:
    unaff_x25 = (byte *******)0x0;
code_r0x0001004a73f4:
    unaff_x20 = (byte *******)&bStack_2a0;
    unaff_x21 = pppppppbStack_2a8;
code_r0x0001004a73fc:
    pppppppbVar13 = (byte *******)0x8000000000000001;
code_r0x0001004a7400:
    iVar18 = (int)unaff_x19;
    if (unaff_x21 != pppppppbVar13) {
LAB_1004a7408:
      pppppppbVar13 = (byte *******)0x8000000000000000;
code_r0x0001004a740c:
      iVar18 = (int)unaff_x19;
      if (unaff_x21 != pppppppbVar13) {
LAB_1004a7414:
        pppppppbVar13 = pppppppbStack_120;
        if (unaff_x21 != (byte *******)0x0) {
code_r0x0001004a7418:
          _free(unaff_x22);
          pppppppbVar13 = pppppppbStack_120;
        }
code_r0x0001004a7424:
        iVar18 = (int)unaff_x19;
        param_4 = pppppppbStack_118;
        if (pppppppbVar13 != (byte *******)0x0) {
code_r0x0001004a742c:
          iVar18 = (int)unaff_x19;
          _free(param_4);
        }
      }
    }
LAB_1004a7430:
    if (iVar18 != 0) {
code_r0x0001004a7434:
      param_4 = uStack_2b8;
      if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x0001004a7440:
        _free(param_4);
      }
    }
LAB_1004a7444:
    FUN_100d34830(unaff_x20 + 4);
code_r0x0001004a744c:
    in_ZR = bStack_2a0 == 0x16;
code_r0x0001004a7454:
    if (!(bool)in_ZR) {
      param_4 = (byte *******)&bStack_2a0;
code_r0x0001004a745c:
      FUN_100e077ec(param_4);
    }
    goto code_r0x0001004a746c;
  case 0x23:
    goto code_r0x0001004a745c;
  case 0x24:
  case 0x93:
    goto code_r0x0001004a7380;
  case 0x25:
    goto LAB_1004a7414;
  case 0x26:
  case 0x86:
  case 0xb0:
    goto code_r0x0001004a7378;
  case 0x28:
  case 0x9f:
    goto code_r0x0001004a74d0;
  case 0x29:
    goto code_r0x0001004a6b48;
  case 0x2a:
    goto code_r0x0001004a6b8c;
  case 0x2d:
    goto code_r0x0001004a7300;
  case 0x2e:
  case 199:
  case 0xf3:
    goto code_r0x0001004a72c8;
  case 0x31:
    break;
  case 0x32:
    goto code_r0x0001004a7328;
  case 0x33:
    goto code_r0x0001004a72e8;
  case 0x34:
    goto code_r0x0001004a7340;
  case 0x35:
  case 0x51:
  case 0x6e:
  case 0xc0:
    goto code_r0x0001004a72bc;
  case 0x36:
    goto code_r0x0001004a7330;
  case 0x37:
    goto code_r0x0001004a7264;
  case 0x39:
    goto code_r0x0001004a7318;
  case 0x3a:
    goto code_r0x0001004a723c;
  case 0x3b:
    goto code_r0x0001004a72d0;
  case 0x3c:
    goto code_r0x0001004a7234;
  case 0x3e:
    goto code_r0x0001004a7374;
  case 0x3f:
    goto code_r0x0001004a6ed4;
  case 0x40:
    goto code_r0x0001004a6f18;
  case 0x45:
  case 0x6f:
    goto code_r0x0001004a72cc;
  case 0x46:
    goto code_r0x0001004a7278;
  case 0x47:
  case 0x78:
    goto code_r0x0001004a72fc;
  case 0x48:
  case 0x8f:
  case 0xb4:
  case 0xdc:
    goto code_r0x0001004a7314;
  case 0x4a:
    goto code_r0x0001004a732c;
  case 0x4c:
  case 0xbc:
    goto code_r0x0001004a731c;
  case 0x52:
    goto code_r0x0001004a7220;
  case 0x54:
    goto code_r0x0001004a735c;
  case 0x55:
    goto code_r0x0001004a6f78;
  case 0x56:
    goto code_r0x0001004a6fbc;
  case 0x58:
    goto code_r0x0001004a6b30;
  case 0x59:
    goto code_r0x0001004a6b44;
  case 0x5a:
    goto code_r0x0001004a6b18;
  case 0x5b:
    goto code_r0x0001004a6b20;
  case 0x5d:
    goto code_r0x0001004a6b7c;
  case 0x5e:
    goto code_r0x0001004a6ba0;
  case 0x5f:
    goto code_r0x0001004a6b28;
  case 0x60:
    goto code_r0x0001004a6c2c;
  case 0x61:
    goto code_r0x0001004a6af0;
  case 0x62:
    goto code_r0x0001004a6bf0;
  case 100:
    goto code_r0x0001004a6ad4;
  case 0x65:
    goto code_r0x0001004a6b84;
  case 0x66:
    goto code_r0x0001004a7194;
  case 0x67:
    goto code_r0x0001004a71c0;
  case 0x69:
    goto code_r0x0001004a6b58;
  case 0x6b:
    goto code_r0x0001004a6ba8;
  case 0x6c:
    goto code_r0x0001004a6c6c;
  case 0x6d:
    goto code_r0x0001004a6d80;
  case 0x76:
  case 0xe3:
    goto code_r0x0001004a730c;
  case 0x77:
  case 0xe7:
    goto code_r0x0001004a7288;
  case 0x79:
    goto code_r0x0001004a7230;
  case 0x7a:
  case 0xea:
    goto code_r0x0001004a7260;
  case 0x7b:
  case 0x94:
    goto code_r0x0001004a72e4;
  case 0x7c:
    goto code_r0x0001004a7208;
  case 0x7d:
    goto code_r0x0001004a729c;
  case 0x80:
  case 0x88:
  case 0xe9:
    goto code_r0x0001004a733c;
  case 0x84:
  case 0xbd:
    goto code_r0x0001004a73a0;
  case 0x85:
  case 0xb6:
code_r0x0001004a73b0:
    *pppppppbStack_2d0 = (byte ******)pppppppbVar13;
    pppppppbStack_2d0[1] = (byte ******)pppppppbVar17;
  case 0xba:
    unaff_x19 = (byte *******)0x1;
    unaff_x20 = (byte *******)&bStack_2a0;
code_r0x0001004a73c0:
    iVar18 = (int)unaff_x19;
    goto LAB_1004a7430;
  case 0x87:
    goto code_r0x0001004a7390;
  case 0x89:
    goto code_r0x0001004a73c0;
  case 0x8b:
  case 0xb5:
  case 0xee:
    goto code_r0x0001004a7398;
  case 0x8c:
    goto code_r0x0001004a73f0;
  case 0x8d:
    goto code_r0x0001004a736c;
  case 0x90:
  case 0xb9:
    goto code_r0x0001004a7344;
  case 0x91:
  case 0xb8:
code_r0x0001004a73c8:
    pppppppbVar13 = pppppppbStack_88;
    pppppppbStack_138 = unaff_x26;
    pppppppbStack_130 = unaff_x22;
code_r0x0001004a73d0:
code_r0x0001004a714c:
    *pppppppbStack_2d0 = (byte ******)0x1d;
    pppppppbStack_2d0[1] = (byte ******)pppppppbVar13;
    unaff_x20 = (byte *******)&bStack_2a0;
    unaff_x21 = pppppppbStack_2a8;
joined_r0x0001004a716c:
    iVar18 = 1;
    unaff_x19 = (byte *******)0x1;
joined_r0x0001004a766c:
    if (unaff_x21 != (byte *******)0x8000000000000001) goto LAB_1004a7408;
    goto LAB_1004a7430;
  case 0x96:
    goto code_r0x0001004a7440;
  case 0x97:
    goto code_r0x0001004a6eec;
  case 0x98:
    goto code_r0x0001004a6f30;
  case 0x9a:
    goto code_r0x0001004a74b0;
  case 0x9b:
    goto code_r0x0001004a74c0;
  case 0x9c:
    goto code_r0x0001004a7488;
  case 0x9d:
    goto code_r0x0001004a74a0;
  case 0x9e:
    goto code_r0x0001004a744c;
  case 0xa0:
    goto code_r0x0001004a74e8;
  case 0xa1:
    goto code_r0x0001004a74a8;
  case 0xa2:
    goto code_r0x0001004a7500;
  case 0xa3:
    goto code_r0x0001004a747c;
  case 0xa4:
    goto code_r0x0001004a74f0;
  case 0xa7:
    goto code_r0x0001004a74d8;
  case 0xa8:
    goto code_r0x0001004a73fc;
  case 0xa9:
    goto code_r0x0001004a7490;
  case 0xaa:
    goto code_r0x0001004a73f4;
  case 0xac:
    goto code_r0x0001004a7530;
  case 0xad:
    goto code_r0x0001004a6b34;
  case 0xae:
    goto code_r0x0001004a6b78;
  case 0xb1:
    goto code_r0x0001004a7388;
  case 0xb2:
    goto code_r0x0001004a7350;
  case 0xb3:
    goto code_r0x0001004a7368;
  case 0xb7:
    goto code_r0x0001004a7370;
  case 0xbf:
  case 0xd8:
    goto code_r0x0001004a7358;
  case 0xc2:
    goto code_r0x0001004a7418;
  case 0xc3:
    goto code_r0x0001004a6ee8;
  case 0xc4:
    goto code_r0x0001004a6f2c;
  case 0xd9:
    goto code_r0x0001004a6ec0;
  case 0xda:
    goto code_r0x0001004a6f04;
  case 0xdd:
    goto code_r0x0001004a7324;
  case 0xe2:
    goto code_r0x0001004a734c;
  case 0xe4:
    goto code_r0x0001004a7364;
  case 0xe6:
    goto code_r0x0001004a7354;
  case 0xef:
    goto code_r0x0001004a6ef0;
  case 0xf0:
    goto code_r0x0001004a6f34;
  }
  pppppppbStack_250 = (byte *******)CONCAT71(pppppppbStack_250._1_7_,bVar12);
code_r0x0001004a7314:
  param_6 = &UNK_10b21b000;
code_r0x0001004a7318:
  param_6 = param_6 + 0x410;
code_r0x0001004a731c:
  pppppppbVar8 = (byte *******)&pppppppbStack_250;
  param_5 = &ppppppbStack_69;
code_r0x0001004a7324:
  pppppppbVar8 = (byte *******)FUN_107c05dcc(pppppppbVar8,param_5,param_6);
code_r0x0001004a7328:
  pppppppbVar13 = (byte *******)0x1d;
code_r0x0001004a732c:
  *param_4 = (byte ******)pppppppbVar13;
  param_4[1] = (byte ******)pppppppbVar8;
code_r0x0001004a7330:
code_r0x0001004a746c:
code_r0x0001004a7474:
code_r0x0001004a747c:
  return;
}

