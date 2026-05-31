
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a3938(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,byte *******param_4
                  ,byte *******param_5)

{
  undefined7 uVar1;
  undefined7 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  byte ******ppppppbVar11;
  uint uVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  undefined8 uVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte ******ppppppbVar21;
  byte *******unaff_x19;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******pppppppbVar22;
  byte *******unaff_x22;
  byte *******unaff_x23;
  byte *******unaff_x24;
  byte *******pppppppbVar23;
  byte *******unaff_x26;
  byte *******unaff_x27;
  byte *******pppppppbVar24;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  byte *******pppppppbVar26;
  byte *******pppppppbVar27;
  byte *******pppppppbVar28;
  byte *******pppppppbVar29;
  undefined1 auStack_300 [88];
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  undefined8 uStack_298;
  byte *******pppppppbStack_290;
  byte *******pppppppbStack_288;
  byte *******pppppppbStack_280;
  byte *******pppppppbStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  byte *******pppppppbStack_258;
  byte *******pppppppbStack_250;
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  byte *******pppppppbStack_238;
  byte *******pppppppbStack_230;
  byte *******pppppppbStack_220;
  byte *******pppppppbStack_218;
  byte ******ppppppbStack_210;
  byte ******ppppppbStack_208;
  byte bStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte ******ppppppbStack_e0;
  byte ******ppppppbStack_d8;
  undefined8 uStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte ******ppppppbStack_a0;
  undefined8 uStack_98;
  byte *******pppppppbStack_90;
  byte ******ppppppbStack_88;
  byte ******appppppbStack_71 [2];
  undefined1 *puVar10;
  
  pppppppbVar27 = param_1._8_8_;
  pppppppbVar26 = param_1._0_8_;
  puVar25 = &stack0xfffffffffffffff0;
  puVar9 = auStack_300 + 0x50;
  pppppppbVar23 = (byte *******)&bStack_108;
  bVar15 = *(byte *)param_4;
  pppppppbVar16 = (byte *******)(ulong)bVar15;
  pppppppbVar19 = (byte *******)&UNK_108c9a124;
  ppppppbVar21 = (byte ******)(ulong)*(ushort *)(&UNK_108c9a124 + (long)pppppppbVar16 * 2);
  pppppppbVar20 = (byte *******)(&UNK_1004a397c + (long)ppppppbVar21 * 4);
  puVar5 = auStack_300 + 0x50;
  puVar6 = auStack_300 + 0x50;
  puVar7 = auStack_300 + 0x50;
  puVar8 = auStack_300 + 0x50;
  puVar10 = auStack_300 + 0x50;
  puVar4 = auStack_300 + 0x50;
  pppppppbVar24 = (byte *******)param_3;
  pppppppbVar17 = pppppppbVar16;
  pppppppbVar22 = unaff_x21;
  pppppppbVar28 = param_2._0_8_;
  pppppppbVar29 = param_2._8_8_;
  switch(bVar15) {
  case 0:
    bVar15 = *(byte *)((long)param_4 + 1);
  case 0x30:
    pppppppbStack_220 = (byte *******)((ulong)CONCAT61(pppppppbStack_220._2_6_,bVar15) << 8);
code_r0x0001004a4124:
    goto code_r0x0001004a4178;
  case 1:
  case 0x5c:
  case 0xa5:
    pppppppbVar16 = (byte *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0x46:
code_r0x0001004a412c:
    pppppppbStack_218 = pppppppbVar16;
code_r0x0001004a4130:
    bVar15 = 1;
code_r0x0001004a4134:
    break;
  case 2:
    pppppppbVar16 = (byte *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x37:
    goto code_r0x0001004a412c;
  case 3:
  case 0xd1:
    pppppppbVar16 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x94:
    goto code_r0x0001004a412c;
  case 4:
    pppppppbVar16 = (byte *******)param_4[1];
    goto code_r0x0001004a412c;
  case 5:
  case 0xd2:
    pppppppbVar16 = (byte *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x8f:
    goto code_r0x0001004a416c;
  case 6:
  case 0x9e:
    pppppppbVar16 = (byte *******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x0001004a416c;
  case 7:
    pppppppbVar16 = (byte *******)(long)*(int *)((long)param_4 + 4);
  case 0x92:
code_r0x0001004a416c:
    pppppppbStack_218 = pppppppbVar16;
code_r0x0001004a4170:
    bVar15 = 2;
    break;
  case 8:
  case 0x26:
  case 0x44:
    pppppppbVar16 = (byte *******)param_4[1];
    goto code_r0x0001004a416c;
  case 9:
    pppppppbVar26 = (byte *******)(double)*(float *)((long)param_4 + 4);
  case 0x4b:
code_r0x0001004a415c:
    pppppppbStack_218 = pppppppbVar26;
code_r0x0001004a4160:
    bVar15 = 3;
code_r0x0001004a4164:
    break;
  case 10:
  case 0x2e:
  case 0x61:
  case 0xa6:
    pppppppbVar26 = (byte *******)param_4[1];
    goto code_r0x0001004a415c;
  case 0xb:
    param_4 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
    puVar4 = &stack0xffffffffffffffa0;
  case 0xbf:
    *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(puVar4 + 0x40);
    *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(puVar4 + 0x48);
    *(undefined8 *)(puVar4 + 0x50) = *(undefined8 *)(puVar4 + 0x50);
    *(undefined8 *)(puVar4 + 0x58) = *(undefined8 *)(puVar4 + 0x58);
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    uVar12 = (uint)param_4;
    if (uVar12 < 0x80) {
      puVar4[0x1c] = (byte)param_4;
      uVar18 = 1;
    }
    else {
      bVar15 = (byte)param_4 & 0x3f | 0x80;
      if (uVar12 < 0x800) {
        puVar4[0x1c] = (byte)(uVar12 >> 6) | 0xc0;
        puVar4[0x1d] = bVar15;
        uVar18 = 2;
      }
      else {
        bVar13 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        if (uVar12 < 0x10000) {
          puVar4[0x1c] = (byte)(uVar12 >> 0xc) | 0xe0;
          puVar4[0x1d] = bVar13;
          puVar4[0x1e] = bVar15;
          uVar18 = 3;
        }
        else {
          puVar4[0x1c] = (byte)(uVar12 >> 0x12) | 0xf0;
          puVar4[0x1d] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
          puVar4[0x1e] = bVar13;
          puVar4[0x1f] = bVar15;
          uVar18 = 4;
        }
      }
    }
    *(undefined1 **)(puVar4 + 0x28) = puVar4 + 0x1c;
    *(undefined8 *)(puVar4 + 0x30) = uVar18;
    puVar4[0x20] = 5;
    ppppppbVar21 = (byte ******)func_0x000108a4a50c(puVar4 + 0x20,puVar4 + 0x3f,&UNK_10b21b4d0);
    *(byte *******)param_3 = (byte ******)0x1d;
    *(byte *******)((long)param_3 + 8) = ppppppbVar21;
    return;
  case 0xc:
    param_4 = param_4 + 1;
  case 0x3c:
    puVar5 = &stack0xffffffffffffffa0;
    puVar25 = unaff_x29;
code_r0x0001004a40cc:
    unaff_x20 = *(byte ********)(puVar5 + 0x40);
    unaff_x19 = *(byte ********)(puVar5 + 0x48);
    puVar6 = puVar5;
code_r0x0001004a40d0:
    unaff_x22 = *(byte ********)(puVar6 + 0x30);
    unaff_x21 = *(byte ********)(puVar6 + 0x38);
    puVar7 = puVar6;
code_r0x0001004a40d4:
    puVar8 = puVar7;
code_r0x0001004a40d8:
    puVar10 = puVar8;
code_r0x0001004a40dc:
    puVar9 = puVar10 + 0x60;
code_r0x0001004a40e0:
    *(byte ********)(puVar9 + -0x30) = unaff_x22;
    *(byte ********)(puVar9 + -0x28) = unaff_x21;
    *(byte ********)(puVar9 + -0x20) = unaff_x20;
    *(byte ********)(puVar9 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(undefined8 *)(puVar9 + -8) = unaff_x30;
    ppppppbVar21 = param_4[1];
    ppppppbVar11 = param_4[2];
    *(byte *******)(puVar9 + -0x48) = ppppppbVar21;
    *(byte *******)(puVar9 + -0x40) = ppppppbVar11;
    puVar9[-0x50] = 5;
    ppppppbVar11 = (byte ******)func_0x000108a4a50c(puVar9 + -0x50,puVar9 + -0x31,&UNK_10b21b4d0);
    *(byte *******)param_3 = (byte ******)0x1d;
    *(byte *******)((long)param_3 + 8) = ppppppbVar11;
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar21);
    }
    return;
  case 0xd:
    pppppppbStack_218 = (byte *******)param_4[1];
    ppppppbStack_210 = param_4[2];
    bVar15 = 5;
  case 0x35:
    break;
  case 0xe:
    param_4 = param_4 + 1;
  case 0xbe:
    ppppppbVar21 = param_4[1];
    ppppppbVar11 = (byte ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b21b4d0);
    *(byte *******)param_3 = (byte ******)0x1d;
    *(byte *******)((long)param_3 + 8) = ppppppbVar11;
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar21);
    }
    return;
  case 0xf:
  case 0xaa:
    pppppppbStack_218 = (byte *******)param_4[1];
    ppppppbStack_210 = param_4[2];
  case 99:
  case 0xa8:
    bVar15 = 6;
code_r0x0001004a4104:
    break;
  case 0x10:
    bVar15 = 8;
    break;
  default:
    unaff_x20 = (byte *******)param_4[1];
    pppppppbStack_218 = (byte *******)unaff_x20[1];
    pppppppbStack_220 = (byte *******)*unaff_x20;
  case 0xbb:
    pppppppbVar24 = unaff_x20;
    ppppppbStack_208 = pppppppbVar24[3];
    ppppppbStack_210 = pppppppbVar24[2];
    func_0x000107c0482c(param_3,&pppppppbStack_220);
code_r0x0001004a3e08:
code_r0x0001004a3e0c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppbVar24);
    return;
  case 0x12:
  case 0x21:
    bVar15 = 7;
  case 0x59:
    break;
  case 0x13:
    unaff_x20 = (byte *******)param_4[1];
    pppppppbVar27 = (byte *******)unaff_x20[1];
    pppppppbVar26 = (byte *******)*unaff_x20;
  case 0x56:
    ppppppbStack_208 = unaff_x20[3];
    ppppppbStack_210 = unaff_x20[2];
    param_4 = (byte *******)&pppppppbStack_220;
    pppppppbStack_220 = pppppppbVar26;
    pppppppbStack_218 = pppppppbVar27;
code_r0x0001004a3df0:
    pppppppbVar24 = unaff_x20;
    func_0x000107c053dc(param_3,param_4);
    goto code_r0x0001004a3e08;
  case 0x14:
    unaff_x23 = (byte *******)param_4[1];
    unaff_x20 = (byte *******)param_4[2];
    unaff_x26 = (byte *******)param_4[3];
    unaff_x19 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppbStack_b0 = (byte *******)0x0;
    pppppppbVar22 = unaff_x20;
    unaff_x21 = unaff_x20;
    uStack_d0 = unaff_x20;
    pppppppbStack_c8 = unaff_x20;
    pppppppbStack_c0 = unaff_x23;
    pppppppbStack_b8 = unaff_x19;
    if (unaff_x26 != (byte *******)0x0) goto code_r0x0001004a3e3c;
    goto code_r0x0001004a3e4c;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xdb:
  case 0xf1:
    pppppppbVar20 = (byte *******)param_4[1];
    pppppppbVar16 = (byte *******)param_4[2];
  case 0xb4:
    ppppppbVar21 = param_4[3];
    pppppppbVar19 = (byte *******)((long)ppppppbVar21 << 6);
code_r0x0001004a39ac:
    unaff_x27 = (byte *******)((long)pppppppbVar16 + (long)pppppppbVar19);
    unaff_x19 = (byte *******)&bStack_270;
    bStack_270 = 0x16;
    pppppppbStack_230 = (byte *******)0x0;
    pppppppbStack_250 = pppppppbVar16;
    pppppppbStack_248 = pppppppbVar16;
    pppppppbStack_240 = pppppppbVar20;
    pppppppbStack_238 = unaff_x27;
code_r0x0001004a39c8:
    if (ppppppbVar21 == (byte ******)0x0) {
      pppppppbStack_278 = (byte *******)0x8000000000000000;
      bStack_108 = 0;
      uStack_107 = 0x80000000000000;
code_r0x0001004a3f74:
      uStack_98 = (byte *******)&UNK_108cb8883;
      pppppppbStack_90 = (byte *******)0xc;
      uStack_d0 = (byte *******)&uStack_98;
      pppppppbStack_c8 = (byte *******)&DAT_100c7b3a0;
      pppppppbVar23 = (byte *******)0x0;
      param_3 = (char *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
      goto LAB_1004a41c8;
    }
    unaff_x22 = (byte *******)0x0;
    unaff_x20 = (byte *******)((ulong)&uStack_d0 | 1);
    unaff_x19 = (byte *******)((ulong)&bStack_270 | 1);
    pppppppbVar20 = (byte *******)((ulong)&uStack_98 | 1);
    pppppppbVar19 = (byte *******)((ulong)(pppppppbVar19 + -8) >> 6);
code_r0x0001004a39f0:
    pppppppbStack_2a8 = (byte *******)((long)pppppppbVar19 + 1);
    pppppppbStack_2a0 = (byte *******)param_3;
code_r0x0001004a39f8:
    unaff_x21 = pppppppbVar16 + 8;
    pppppppbVar16 = (byte *******)0x8000000000000000;
code_r0x0001004a3a00:
    pppppppbVar23 = (byte *******)0x8000000000000000;
    pppppppbStack_280 = pppppppbVar20;
    pppppppbStack_278 = pppppppbVar16;
code_r0x0001004a3a08:
    pppppppbVar24 = (byte *******)0x8000000000000000;
code_r0x0001004a3a30:
    do {
      pppppppbVar22 = unaff_x21;
      unaff_x26 = pppppppbVar22 + -8;
      bVar15 = *(byte *)unaff_x26;
      pppppppbVar16 = (byte *******)(ulong)bVar15;
      pppppppbVar19 = unaff_x22;
      if (bVar15 == 0x16) break;
      uStack_d0 = (byte *******)CONCAT71(uStack_d0._1_7_,bVar15);
      ppppppbVar21 = pppppppbVar22[-6];
      *(byte *******)((long)unaff_x20 + 0x17) = pppppppbVar22[-5];
      *(byte *******)((long)unaff_x20 + 0xf) = ppppppbVar21;
      ppppppbVar21 = *(byte *******)((long)pppppppbVar22 + -0x3f);
      unaff_x20[1] = *(byte *******)((long)pppppppbVar22 + -0x37);
      *unaff_x20 = ppppppbVar21;
code_r0x0001004a3a54:
      pppppppbStack_258 = (byte *******)unaff_x26[7];
      uStack_268 = SUB81(unaff_x26[5],0);
      uStack_267 = (undefined7)((ulong)unaff_x26[5] >> 8);
      bStack_270 = (byte)unaff_x26[4];
      uStack_26f = (undefined7)((ulong)unaff_x26[4] >> 8);
      uStack_260 = SUB81(unaff_x26[6],0);
      uStack_25f = (undefined7)((ulong)unaff_x26[6] >> 8);
code_r0x0001004a3a5c:
      param_5 = pppppppbStack_b8;
      unaff_x23 = pppppppbStack_c8;
      unaff_x24 = pppppppbStack_c0;
code_r0x0001004a3a64:
      uVar12 = (uint)pppppppbVar16;
      if (uVar12 < 0xd) {
        if (uVar12 == 1) {
          pppppppbVar16 = (byte *******)(ulong)uStack_d0._1_1_;
          uVar12 = 1;
          if (uStack_d0._1_1_ != 1) {
            uVar12 = 2;
          }
          pppppppbVar19 = (byte *******)(ulong)uVar12;
code_r0x0001004a3b44:
          bVar15 = 0;
          if ((int)pppppppbVar16 != 0) {
            bVar15 = (byte)pppppppbVar19;
          }
code_r0x0001004a3c58:
          uStack_98 = (byte *******)((ulong)CONCAT61(uStack_98._2_6_,bVar15) << 8);
          goto code_r0x0001004a3c60;
        }
        in_ZR = uVar12 == 4;
code_r0x0001004a3a78:
        if ((bool)in_ZR) {
          bVar13 = 1;
          if (unaff_x23 != (byte *******)0x1) {
            bVar13 = 2;
          }
          bVar15 = 0;
          if (unaff_x23 != (byte *******)0x0) {
            bVar15 = bVar13;
          }
          goto code_r0x0001004a3c58;
        }
        in_ZR = (int)pppppppbVar16 == 0xc;
code_r0x0001004a3a80:
        if (!(bool)in_ZR) {
code_r0x0001004a3d94:
          param_3 = (char *)&uStack_d0;
          goto code_r0x0001004a3d98;
        }
        if (param_5 == (byte *******)0xf) {
          uVar14 = 1;
          if (*unaff_x24 != (byte ******)0x5f656d69746e7572 ||
              *(long *)((long)unaff_x24 + 7) != 0x64616f6c7961705f) {
            uVar14 = 2;
          }
          uStack_98 = (byte *******)((ulong)CONCAT61(uStack_98._2_6_,uVar14) << 8);
        }
        else if (param_5 == (byte *******)0xc) {
          in_ZR = *unaff_x24 == (byte ******)0x6c61635f6c6f6f74 &&
                  *(int *)(unaff_x24 + 1) == 0x64695f6c;
          bVar15 = 2;
code_r0x0001004a3ac8:
          if ((bool)in_ZR) {
            bVar15 = 0;
          }
          uStack_98 = (byte *******)((ulong)CONCAT61(uStack_98._2_6_,bVar15) << 8);
        }
        else {
          uStack_98 = (byte *******)CONCAT62(uStack_98._2_6_,0x200);
        }
joined_r0x0001004a3b2c:
        unaff_x21 = pppppppbVar22;
        bVar15 = bStack_270;
        bVar13 = bStack_108;
        uVar1 = uStack_107;
        uVar14 = uStack_100;
        uVar2 = uStack_ff;
        pppppppbVar19 = uStack_d0;
        pppppppbVar17 = uStack_98;
        if (unaff_x23 != (byte *******)0x0) {
          _free(unaff_x24);
          bVar15 = bStack_270;
          bVar13 = bStack_108;
          uVar1 = uStack_107;
          uVar14 = uStack_100;
          uVar2 = uStack_ff;
          pppppppbVar19 = uStack_d0;
          pppppppbVar17 = uStack_98;
        }
      }
      else {
        if (uVar12 == 0xd) {
          if (unaff_x24 == (byte *******)0xf) {
            bVar15 = 1;
            if (*unaff_x23 != (byte ******)0x5f656d69746e7572 ||
                *(long *)((long)unaff_x23 + 7) != 0x64616f6c7961705f) {
              bVar15 = 2;
            }
          }
          else if (unaff_x24 == (byte *******)0xc) {
            bVar15 = 2;
            if (*unaff_x23 == (byte ******)0x6c61635f6c6f6f74 &&
                *(int *)(unaff_x23 + 1) == 0x64695f6c) {
              bVar15 = 0;
            }
          }
          else {
            bVar15 = 2;
          }
          goto code_r0x0001004a3c58;
        }
        if (uVar12 == 0xe) {
          FUN_100b4b7dc(&uStack_98,unaff_x24);
          goto joined_r0x0001004a3b2c;
        }
        if (uVar12 != 0xf) goto code_r0x0001004a3d94;
        FUN_100b4b7dc(&uStack_98,unaff_x23,unaff_x24);
code_r0x0001004a3b04:
code_r0x0001004a3c60:
        FUN_100e077ec(&uStack_d0);
        unaff_x21 = pppppppbVar22;
        bVar15 = bStack_270;
        bVar13 = bStack_108;
        uVar1 = uStack_107;
        uVar14 = uStack_100;
        uVar2 = uStack_ff;
        pppppppbVar19 = uStack_d0;
        pppppppbVar17 = uStack_98;
      }
      bStack_270 = bVar15;
      uStack_d0 = pppppppbVar19;
      uStack_98 = pppppppbVar17;
      if (((ulong)pppppppbVar17 & 1) != 0) goto code_r0x0001004a3dbc;
      uStack_98._1_1_ = (char)((ulong)pppppppbVar17 >> 8);
      uStack_d0._1_7_ = (undefined7)((ulong)pppppppbVar19 >> 8);
      bStack_108 = (byte)pppppppbVar24;
      uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
      uStack_100 = SUB81(pppppppbStack_290,0);
      uStack_ff = (undefined7)((ulong)pppppppbStack_290 >> 8);
      if (uStack_98._1_1_ == '\0') {
        if (pppppppbVar23 != (byte *******)0x8000000000000000) goto code_r0x0001004a435c;
        bStack_270 = 0x16;
        if (bVar15 == 0x16) {
          pppppppbStack_230 = (byte *******)((long)unaff_x22 + 1);
          pppppppbStack_248 = unaff_x21;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004a4444;
        }
        ppppppbVar21 = *unaff_x19;
        unaff_x20[1] = unaff_x19[1];
        *unaff_x20 = ppppppbVar21;
        uVar18 = *(undefined8 *)((long)unaff_x19 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar18;
        uStack_d0 = (byte *******)CONCAT71(uStack_d0._1_7_,bVar15);
        bStack_108 = bVar13;
        uStack_107 = uVar1;
        uStack_100 = uVar14;
        uStack_ff = uVar2;
        FUN_1004b62d4(&uStack_98,&uStack_d0);
        if (uStack_98 == (byte *******)0x8000000000000000) goto code_r0x0001004a41a0;
        pppppppbStack_288 = pppppppbStack_90;
        uStack_298 = ppppppbStack_88;
        pppppppbVar23 = uStack_98;
      }
      else if (uStack_98._1_1_ == '\x01') {
        if (pppppppbStack_278 != (byte *******)0x8000000000000000) goto code_r0x0001004a42fc;
        bStack_270 = 0x16;
        if (bVar15 == 0x16) {
          pppppppbStack_230 = (byte *******)((long)unaff_x22 + 1);
          pppppppbStack_278 = (byte *******)0x8000000000000000;
          pppppppbStack_248 = unaff_x21;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004a4444;
        }
        ppppppbVar21 = *unaff_x19;
        pppppppbStack_280[1] = unaff_x19[1];
        *pppppppbStack_280 = ppppppbVar21;
        uVar18 = *(undefined8 *)((long)unaff_x19 + 0xf);
        *(undefined8 *)((long)pppppppbStack_280 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
        *(undefined8 *)((long)pppppppbStack_280 + 0xf) = uVar18;
        uStack_98._1_7_ = (undefined7)((ulong)pppppppbVar17 >> 8);
        uStack_98 = (byte *******)CONCAT71(uStack_98._1_7_,bVar15);
        pppppppbStack_278 = (byte *******)0x8000000000000000;
        bStack_108 = bVar13;
        uStack_107 = uVar1;
        uStack_100 = uVar14;
        uStack_ff = uVar2;
        FUN_100b1671c(&uStack_d0,&uStack_98);
        if (uStack_d0 == (byte *******)0x8000000000000000) goto code_r0x0001004a4244;
        pppppppbStack_290 = pppppppbStack_c8;
        pppppppbStack_f0 = pppppppbStack_b8;
        ppppppbStack_e0 = ppppppbStack_a8;
        pppppppbStack_e8 = pppppppbStack_b0;
        uStack_f8 = SUB81(pppppppbStack_c0,0);
        uStack_f7 = (undefined7)((ulong)pppppppbStack_c0 >> 8);
        ppppppbStack_d8 = ppppppbStack_a0;
        pppppppbVar24 = uStack_d0;
        pppppppbStack_278 = uStack_d0;
      }
      else {
        bStack_270 = 0x16;
        if (bVar15 == 0x16) {
          pppppppbVar16 = (byte *******)((long)unaff_x22 + 1);
          goto code_r0x0001004a43b0;
        }
        ppppppbVar21 = *unaff_x19;
        unaff_x20[1] = unaff_x19[1];
        *unaff_x20 = ppppppbVar21;
        uVar18 = *(undefined8 *)((long)unaff_x19 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar18;
        uStack_d0 = (byte *******)CONCAT71(uStack_d0._1_7_,bVar15);
        param_3 = (char *)&uStack_d0;
        bStack_108 = bVar13;
        uStack_107 = uVar1;
        uStack_100 = uVar14;
        uStack_ff = uVar2;
code_r0x0001004a3d8c:
        FUN_100e077ec(param_3);
      }
code_r0x0001004a3a1c:
      unaff_x21 = unaff_x21 + 8;
code_r0x0001004a3a20:
      pppppppbVar22 = unaff_x27;
      unaff_x22 = (byte *******)((long)unaff_x22 + 1);
      pppppppbVar19 = pppppppbStack_2a8;
      unaff_x27 = pppppppbVar22;
    } while (unaff_x26 + 8 != pppppppbVar22);
    pppppppbVar16 = pppppppbStack_288;
    pppppppbVar17 = pppppppbStack_2a0;
    bStack_108 = (byte)pppppppbVar24;
    uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
    uStack_100 = SUB81(pppppppbStack_290,0);
    uStack_ff = (undefined7)((ulong)pppppppbStack_290 >> 8);
    pppppppbStack_248 = pppppppbVar22;
    pppppppbStack_230 = pppppppbVar19;
    if (pppppppbVar23 == (byte *******)0x8000000000000000) {
      unaff_x19 = (byte *******)&bStack_270;
      unaff_x20 = pppppppbStack_288;
      unaff_x21 = pppppppbStack_290;
      pppppppbVar24 = pppppppbStack_2a0;
      goto code_r0x0001004a3f74;
    }
    if (pppppppbStack_278 == (byte *******)0x8000000000000000) {
      uStack_98 = (byte *******)&UNK_108cbace7;
      pppppppbStack_90 = (byte *******)0xf;
      uStack_d0 = (byte *******)&uStack_98;
      pppppppbStack_c8 = (byte *******)&DAT_100c7b3a0;
      ppppppbVar21 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
      *pppppppbVar17 = (byte ******)0x1d;
      pppppppbVar17[1] = ppppppbVar21;
      if (pppppppbVar23 != (byte *******)0x0) {
        _free(pppppppbVar16);
      }
      unaff_x19 = (byte *******)&bStack_270;
      goto LAB_1004a4208;
    }
    pppppppbStack_2a0[7] = (byte ******)pppppppbStack_f0;
    pppppppbStack_2a0[6] = (byte ******)CONCAT71(uStack_f7,uStack_f8);
    pppppppbStack_2a0[9] = ppppppbStack_e0;
    pppppppbStack_2a0[8] = (byte ******)pppppppbStack_e8;
    pppppppbStack_2a0[10] = ppppppbStack_d8;
    *pppppppbStack_2a0 = (byte ******)0x10;
    pppppppbStack_2a0[1] = (byte ******)pppppppbVar23;
    pppppppbStack_2a0[2] = (byte ******)pppppppbStack_288;
    pppppppbStack_2a0[3] = uStack_298;
    pppppppbStack_2a0[4] = (byte ******)pppppppbStack_278;
    pppppppbStack_2a0[5] = (byte ******)pppppppbStack_290;
    _memcpy(&pppppppbStack_220,pppppppbStack_2a0,0x118);
    ppppppbVar21 = (byte ******)FUN_100fbc67c(&bStack_270);
    if (ppppppbVar21 != (byte ******)0x0) {
      *pppppppbVar17 = (byte ******)0x1d;
      pppppppbVar17[1] = ppppppbVar21;
      goto code_r0x0001004a4050;
    }
  case 0x16:
    goto LAB_1004a4224;
  case 0x17:
  case 0xac:
    goto code_r0x0001004a4234;
  case 0x18:
    goto code_r0x0001004a41fc;
  case 0x19:
  case 0xd8:
  case 0xe0:
    goto code_r0x0001004a4214;
  case 0x1a:
  case 0x36:
  case 0x8b:
    goto code_r0x0001004a41c0;
  case 0x1b:
  case 0xe5:
code_r0x0001004a4244:
    pppppppbVar16 = (byte *******)((long)unaff_x22 + 1);
    pppppppbStack_248 = unaff_x21;
  case 0x23:
  case 0x96:
    pppppppbStack_230 = pppppppbVar16;
code_r0x0001004a4250:
    pppppppbVar19 = (byte *******)0x1d;
    pppppppbVar16 = pppppppbStack_c8;
code_r0x0001004a4258:
    pppppppbVar20 = pppppppbStack_2a0;
code_r0x0001004a425c:
    *pppppppbVar20 = (byte ******)pppppppbVar19;
    pppppppbVar20[1] = (byte ******)pppppppbVar16;
    unaff_x20 = pppppppbStack_288;
code_r0x0001004a4264:
    unaff_x19 = (byte *******)&bStack_270;
code_r0x0001004a4268:
    if (((ulong)pppppppbVar23 & 0x7fffffffffffffff) != 0) {
LAB_1004a4270:
      param_3 = (char *)unaff_x20;
code_r0x0001004a4274:
      _free(param_3);
code_r0x0001004a4278:
    }
LAB_1004a4208:
    param_3 = (char *)(unaff_x19 + 4);
code_r0x0001004a420c:
    FUN_100d34830(param_3);
    pppppppbVar16 = (byte *******)(ulong)bStack_270;
code_r0x0001004a4214:
    in_ZR = (int)pppppppbVar16 == 0x16;
code_r0x0001004a4218:
    if (!(bool)in_ZR) {
code_r0x0001004a421c:
      param_3 = (char *)&bStack_270;
code_r0x0001004a4220:
      FUN_100e077ec(param_3);
    }
    goto LAB_1004a4224;
  case 0x1c:
    goto code_r0x0001004a425c;
  case 0x1d:
  case 0xe8:
    goto code_r0x0001004a421c;
  case 0x1e:
    goto code_r0x0001004a4274;
  case 0x1f:
  case 0x91:
    goto LAB_1004a41f0;
  case 0x20:
    goto code_r0x0001004a4264;
  case 0x22:
  case 0x48:
  case 0x84:
    goto LAB_1004a41c8;
  case 0x24:
  case 0x2f:
  case 0x51:
    goto code_r0x0001004a4170;
  case 0x25:
  case 0xa2:
    goto code_r0x0001004a4204;
  case 0x28:
    goto code_r0x0001004a42c4;
  case 0x29:
    goto code_r0x0001004a3dc8;
  case 0x2a:
    goto code_r0x0001004a3e0c;
  case 0x2c:
  case 0x45:
  case 0xa3:
    goto code_r0x0001004a4180;
  case 0x2d:
  case 0x42:
    goto code_r0x0001004a4190;
  case 0x31:
  case 0x43:
  case 0x86:
code_r0x0001004a41a0:
    pppppppbVar16 = (byte *******)((long)unaff_x22 + 1);
  case 0x9d:
  case 199:
    pppppppbStack_248 = unaff_x21;
code_r0x0001004a41a8:
    pppppppbStack_230 = pppppppbVar16;
code_r0x0001004a41ac:
    unaff_x21 = pppppppbStack_290;
code_r0x0001004a41b0:
    bStack_108 = (byte)pppppppbVar24;
    uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
    uStack_100 = SUB81(unaff_x21,0);
    uStack_ff = (undefined7)((ulong)unaff_x21 >> 8);
code_r0x0001004a41b4:
    pppppppbVar23 = (byte *******)0x0;
code_r0x0001004a41b8:
    param_3 = (char *)pppppppbStack_90;
code_r0x0001004a41bc:
    pppppppbVar24 = pppppppbStack_2a0;
code_r0x0001004a41c0:
    unaff_x20 = pppppppbStack_288;
code_r0x0001004a41c4:
    unaff_x19 = (byte *******)&bStack_270;
LAB_1004a41c8:
    pppppppbVar16 = (byte *******)0x1d;
code_r0x0001004a41cc:
    *pppppppbVar24 = (byte ******)pppppppbVar16;
    pppppppbVar24[1] = (byte ******)param_3;
code_r0x0001004a41d0:
    pppppppbVar16 = (byte *******)0x8000000000000000;
code_r0x0001004a41d4:
    pppppppbVar19 = pppppppbStack_278;
code_r0x0001004a41d8:
    in_ZR = pppppppbVar19 == pppppppbVar16;
code_r0x0001004a41dc:
    pppppppbVar16 = pppppppbVar19;
code_r0x0001004a41e0:
    if (!(bool)in_ZR) {
code_r0x0001004a41e4:
      goto joined_r0x0001004a4354;
    }
    goto LAB_1004a4200;
  case 0x32:
  case 0x4f:
  case 0x87:
    goto code_r0x0001004a41b8;
  case 0x33:
    goto code_r0x0001004a4178;
  case 0x34:
  case 0x4c:
    goto code_r0x0001004a41d0;
  case 0x38:
    goto code_r0x0001004a4124;
  case 0x39:
  case 0x93:
    goto code_r0x0001004a41a8;
  case 0x3a:
    goto code_r0x0001004a40cc;
  case 0x3b:
  case 0xcf:
    goto code_r0x0001004a4160;
  case 0x3e:
    goto code_r0x0001004a4220;
  case 0x3f:
    goto code_r0x0001004a3d8c;
  case 0x40:
    goto code_r0x0001004a3dd0;
  case 0x47:
    goto code_r0x0001004a41b0;
  case 0x49:
    goto code_r0x0001004a4188;
  case 0x4a:
    goto code_r0x0001004a41e0;
  case 0x4d:
    goto code_r0x0001004a4104;
  case 0x4e:
    goto code_r0x0001004a4134;
  case 0x50:
    goto code_r0x0001004a40dc;
  case 0x52:
    goto code_r0x0001004a40d4;
  case 0x54:
    goto code_r0x0001004a4230;
  case 0x55:
code_r0x0001004a3d98:
    pppppppbStack_90 = (byte *******)thunk_FUN_108855b04(param_3,appppppbStack_71,&UNK_10b212940);
    unaff_x21 = pppppppbVar22;
  case 0x97:
    uStack_98 = (byte *******)CONCAT71(uStack_98._1_7_,1);
code_r0x0001004a3dbc:
    pppppppbVar16 = (byte *******)((long)unaff_x22 + 1);
    pppppppbStack_248 = unaff_x21;
code_r0x0001004a3dc4:
    pppppppbStack_230 = pppppppbVar16;
code_r0x0001004a3dc8:
    bStack_108 = (byte)pppppppbVar24;
    uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
    uStack_100 = SUB81(pppppppbStack_290,0);
    uStack_ff = (undefined7)((ulong)pppppppbStack_290 >> 8);
    unaff_x21 = pppppppbStack_290;
code_r0x0001004a3dd0:
    goto code_r0x0001004a41b8;
  case 0x58:
  case 0x9c:
  case 0xcd:
    goto code_r0x0001004a418c;
  case 0x5a:
  case 0x88:
    goto code_r0x0001004a4164;
  case 0x5b:
    goto code_r0x0001004a417c;
  case 0x5d:
  case 0xa1:
    goto code_r0x0001004a41ac;
  case 0x5e:
  case 0x9b:
  case 0xea:
    goto code_r0x0001004a41c4;
  case 0x5f:
  case 0xc9:
    goto code_r0x0001004a4184;
  case 0x60:
  case 0xa7:
    goto code_r0x0001004a41dc;
  case 0x62:
  case 0xcc:
    goto code_r0x0001004a41cc;
  case 100:
  case 0xca:
    goto code_r0x0001004a4130;
  case 0x65:
  case 0x9a:
  case 0xcb:
    goto code_r0x0001004a41b4;
  case 0x66:
  case 0xd6:
    goto code_r0x0001004a40d8;
  case 0x67:
  case 0x90:
  case 200:
    goto code_r0x0001004a416c;
  case 0x68:
    goto code_r0x0001004a40d0;
  case 0x6a:
    goto code_r0x0001004a420c;
  case 0x6b:
code_r0x0001004a3e3c:
    unaff_x21 = pppppppbVar22 + 4;
    pppppppbVar16 = (byte *******)(ulong)*(byte *)pppppppbVar22;
    pppppppbStack_c8 = unaff_x21;
  case 0xd9:
    if ((int)pppppppbVar16 == 0x16) {
code_r0x0001004a3e4c:
      param_4 = (byte *******)&UNK_10b22e000;
code_r0x0001004a3e50:
      unaff_x22 = (byte *******)thunk_FUN_1087e422c(0,param_4 + 0x1ad,&UNK_10b20a590);
code_r0x0001004a3e68:
      *(byte *******)param_3 = (byte ******)0x1d;
      *(byte ********)((long)param_3 + 8) = unaff_x22;
code_r0x0001004a3e70:
      unaff_x24 = (byte *******)(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1);
      while( true ) {
        unaff_x24 = (byte *******)((long)unaff_x24 + -1);
        in_ZR = unaff_x24 == (byte *******)0x0;
code_r0x0001004a3e80:
        if ((bool)in_ZR) break;
        unaff_x22 = unaff_x21 + 4;
code_r0x0001004a3e88:
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x22;
code_r0x0001004a3e94:
      }
      if (unaff_x23 != (byte *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      pppppppbStack_258 = (byte *******)unaff_x20[3];
      uStack_260 = SUB81(unaff_x20[2],0);
      uStack_25f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppbStack_b0 = (byte *******)0x1;
      bStack_270 = (byte)pppppppbVar16;
      FUN_1004b62d4(&bStack_108,&bStack_270);
      unaff_x24 = (byte *******)CONCAT71(uStack_107,bStack_108);
      unaff_x22 = (byte *******)CONCAT71(uStack_ff,uStack_100);
      if (unaff_x24 == (byte *******)0x8000000000000000) goto code_r0x0001004a3e68;
      if (unaff_x26 == (byte *******)0x1) {
code_r0x0001004a3f14:
        pppppppbVar24 = (byte *******)thunk_FUN_1087e422c(1,&UNK_10b22ed68,&UNK_10b20a590);
code_r0x0001004a3f2c:
        *(byte *******)param_3 = (byte ******)0x1d;
        *(byte ********)((long)param_3 + 8) = pppppppbVar24;
        if (unaff_x24 != (byte *******)0x0) {
          _free(unaff_x22);
        }
        goto code_r0x0001004a3e70;
      }
      unaff_x26 = (byte *******)CONCAT71(uStack_f7,uStack_f8);
      unaff_x21 = unaff_x20 + 8;
      bVar15 = *(byte *)(unaff_x20 + 4);
      pppppppbStack_c8 = unaff_x21;
      if (bVar15 == 0x16) goto code_r0x0001004a3f14;
      pppppppbVar27 = *(byte ********)((long)unaff_x20 + 0x29);
      pppppppbVar26 = *(byte ********)((long)unaff_x20 + 0x21);
code_r0x0001004a4280:
      uStack_ff = SUB87(pppppppbVar27,0);
      uStack_107 = SUB87(pppppppbVar26,0);
      uStack_100 = (undefined1)((ulong)pppppppbVar26 >> 0x38);
      pppppppbVar27 = (byte *******)unaff_x20[7];
      pppppppbVar26 = (byte *******)unaff_x20[6];
code_r0x0001004a4288:
      bStack_108 = bVar15;
      uStack_f8 = SUB81(pppppppbVar26,0);
      uStack_f7 = (undefined7)((ulong)pppppppbVar26 >> 8);
      pppppppbStack_b0 = (byte *******)0x2;
      pppppppbStack_f0 = pppppppbVar27;
code_r0x0001004a4298:
      pppppppbVar24 = (byte *******)&bStack_270;
      param_4 = (byte *******)&bStack_108;
code_r0x0001004a42a0:
      FUN_100b1671c(pppppppbVar24,param_4);
      pppppppbVar16 = (byte *******)CONCAT71(uStack_26f,bStack_270);
      pppppppbVar24 = (byte *******)CONCAT71(uStack_267,uStack_268);
code_r0x0001004a42a8:
      in_ZR = pppppppbVar16 == (byte *******)0x8000000000000000;
code_r0x0001004a42b0:
      if ((bool)in_ZR) goto code_r0x0001004a3f2c;
      pppppppbVar26 = (byte *******)CONCAT71(uStack_25f,uStack_260);
      pppppppbVar27 = pppppppbStack_258;
      pppppppbVar28 = pppppppbStack_250;
      pppppppbVar29 = pppppppbStack_248;
code_r0x0001004a42b8:
      *(byte ********)((long)param_3 + 0x38) = pppppppbVar27;
      *(byte ********)((long)param_3 + 0x30) = pppppppbVar26;
      *(byte ********)((long)param_3 + 0x48) = pppppppbVar29;
      *(byte ********)((long)param_3 + 0x40) = pppppppbVar28;
      *(byte ********)((long)param_3 + 0x50) = pppppppbStack_240;
code_r0x0001004a42c4:
      pppppppbVar19 = (byte *******)0x10;
code_r0x0001004a42c8:
      *(byte ********)param_3 = pppppppbVar19;
      *(byte ********)((long)param_3 + 8) = unaff_x24;
      *(byte ********)((long)param_3 + 0x10) = unaff_x22;
      *(byte ********)((long)param_3 + 0x18) = unaff_x26;
      *(byte ********)((long)param_3 + 0x20) = pppppppbVar16;
      *(byte ********)((long)param_3 + 0x28) = pppppppbVar24;
      pppppppbVar24 = (byte *******)&pppppppbStack_220;
code_r0x0001004a42d8:
      _memcpy(pppppppbVar24,param_3,0x118);
code_r0x0001004a42e4:
      pppppppbVar24 = (byte *******)FUN_100fbc738(&uStack_d0);
code_r0x0001004a42ec:
      if (pppppppbVar24 != (byte *******)0x0) {
        *(byte *******)param_3 = (byte ******)0x1d;
        *(byte ********)((long)param_3 + 8) = pppppppbVar24;
code_r0x0001004a4050:
        FUN_100e35e0c(&pppppppbStack_220);
      }
    }
    goto LAB_1004a4224;
  case 0x6c:
    goto code_r0x0001004a3e80;
  case 0x6e:
    goto code_r0x0001004a430c;
  case 0x6f:
    goto code_r0x0001004a431c;
  case 0x70:
    goto code_r0x0001004a42e4;
  case 0x71:
  case 0xfd:
code_r0x0001004a42fc:
    pppppppbVar16 = (byte *******)((long)unaff_x22 + 1);
    pppppppbStack_248 = unaff_x21;
  case 0x75:
    unaff_x20 = pppppppbStack_288;
    unaff_x21 = pppppppbStack_290;
    pppppppbStack_230 = pppppppbVar16;
code_r0x0001004a430c:
    bStack_108 = (byte)pppppppbVar24;
    uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
    uStack_100 = SUB81(unaff_x21,0);
    uStack_ff = (undefined7)((ulong)unaff_x21 >> 8);
    pppppppbVar16 = (byte *******)&UNK_108cbace7;
code_r0x0001004a4318:
    pppppppbVar19 = (byte *******)0xf;
    pppppppbVar17 = pppppppbVar16;
code_r0x0001004a431c:
    pppppppbVar16 = (byte *******)&uStack_98;
    uStack_98 = pppppppbVar17;
    pppppppbStack_90 = pppppppbVar19;
code_r0x0001004a4324:
    pppppppbVar19 = (byte *******)&DAT_100c7b3a0;
code_r0x0001004a432c:
    param_3 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
    uStack_d0 = pppppppbVar16;
    pppppppbStack_c8 = pppppppbVar19;
code_r0x0001004a4334:
    param_3 = (char *)thunk_FUN_108856088((byte *)((long)param_3 + 0x973),&uStack_d0);
    pppppppbVar19 = pppppppbStack_2a0;
code_r0x0001004a4344:
    unaff_x19 = (byte *******)&bStack_270;
    pppppppbVar16 = (byte *******)0x1d;
code_r0x0001004a434c:
    *pppppppbVar19 = (byte ******)pppppppbVar16;
    pppppppbVar19[1] = (byte ******)param_3;
    pppppppbVar16 = pppppppbStack_278;
code_r0x0001004a4354:
joined_r0x0001004a4354:
    if (pppppppbVar16 != (byte *******)0x0) {
LAB_1004a41e8:
      param_3 = (char *)unaff_x21;
code_r0x0001004a41ec:
      _free(param_3);
    }
LAB_1004a41f0:
    pppppppbVar16 = pppppppbStack_f0;
code_r0x0001004a41f4:
    param_3 = (char *)pppppppbStack_e8;
    if (pppppppbVar16 != (byte *******)0x0) {
code_r0x0001004a41fc:
      _free(param_3);
    }
LAB_1004a4200:
    in_ZR = ((ulong)pppppppbVar23 & 0x7fffffffffffffff) == 0;
code_r0x0001004a4204:
    if (!(bool)in_ZR) goto LAB_1004a4270;
    goto LAB_1004a4208;
  case 0x72:
    goto code_r0x0001004a42a8;
  case 0x73:
  case 0xfe:
    goto code_r0x0001004a432c;
  case 0x74:
    goto code_r0x0001004a4344;
  case 0x76:
code_r0x0001004a435c:
    pppppppbVar17 = (byte *******)((long)unaff_x22 + 1);
    pppppppbVar22 = unaff_x21;
  case 0xf4:
    bStack_108 = (byte)pppppppbVar24;
    uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
    uStack_100 = SUB81(pppppppbStack_290,0);
    uStack_ff = (undefined7)((ulong)pppppppbStack_290 >> 8);
    pppppppbVar16 = (byte *******)&UNK_108cb8883;
    unaff_x20 = pppppppbStack_288;
    unaff_x21 = pppppppbStack_290;
    pppppppbStack_248 = pppppppbVar22;
    pppppppbStack_230 = pppppppbVar17;
code_r0x0001004a4378:
    pppppppbStack_90 = (byte *******)0xc;
    uStack_98 = pppppppbVar16;
code_r0x0001004a4380:
    pppppppbVar16 = (byte *******)&uStack_98;
    pppppppbVar19 = (byte *******)&UNK_100c7b000;
code_r0x0001004a4388:
    pppppppbStack_c8 = pppppppbVar19 + 0x74;
    param_3 = s_duplicate_field_____108ac2973;
    uStack_d0 = pppppppbVar16;
code_r0x0001004a4398:
    param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_d0);
    unaff_x19 = (byte *******)&bStack_270;
    pppppppbVar24 = pppppppbStack_2a0;
code_r0x0001004a43a8:
    goto LAB_1004a41c8;
  case 0x77:
    goto code_r0x0001004a42d8;
  case 0x78:
    goto code_r0x0001004a434c;
  case 0x79:
    goto code_r0x0001004a4280;
  case 0x7a:
  case 0xe2:
    goto code_r0x0001004a42b0;
  case 0x7b:
    goto code_r0x0001004a4334;
  case 0x7c:
  case 0xeb:
    goto code_r0x0001004a4258;
  case 0x7d:
    goto code_r0x0001004a42ec;
  case 0x7e:
  case 0xde:
    goto code_r0x0001004a4250;
  case 0x80:
  case 0xf7:
    goto code_r0x0001004a43a8;
  case 0x81:
    goto code_r0x0001004a3a20;
  case 0x82:
    goto code_r0x0001004a3a64;
  case 0x85:
    goto code_r0x0001004a41d8;
  case 0x89:
    goto LAB_1004a41e8;
  case 0x8a:
    goto LAB_1004a4200;
  case 0x8c:
    goto code_r0x0001004a4218;
  case 0x8d:
  case 0xa9:
  case 0xc6:
    goto code_r0x0001004a4194;
  case 0x8e:
    goto LAB_1004a4208;
  case 0x98:
    goto code_r0x0001004a3df0;
  case 0x9f:
  case 0xd0:
    goto code_r0x0001004a41d4;
  case 0xa0:
  case 0xe7:
    goto code_r0x0001004a41ec;
  case 0xa4:
    goto code_r0x0001004a41f4;
  case 0xad:
    goto code_r0x0001004a3e50;
  case 0xae:
    goto code_r0x0001004a3e94;
  case 0xb0:
    goto code_r0x0001004a3a08;
  case 0xb1:
    goto code_r0x0001004a3a1c;
  case 0xb2:
    goto code_r0x0001004a39f0;
  case 0xb3:
    goto code_r0x0001004a39f8;
  case 0xb5:
    goto code_r0x0001004a3a54;
  case 0xb6:
    goto code_r0x0001004a3a78;
  case 0xb7:
    goto code_r0x0001004a3a00;
  case 0xb8:
    goto code_r0x0001004a3b04;
  case 0xb9:
    goto code_r0x0001004a39c8;
  case 0xba:
    goto code_r0x0001004a3ac8;
  case 0xbc:
    goto code_r0x0001004a39ac;
  case 0xbd:
    goto code_r0x0001004a3a5c;
  case 0xc1:
    goto code_r0x0001004a3a30;
  case 0xc3:
    goto code_r0x0001004a3a80;
  case 0xc4:
    goto code_r0x0001004a3b44;
  case 0xc5:
    goto code_r0x0001004a3c58;
  case 0xce:
    goto code_r0x0001004a41e4;
  case 0xd3:
  case 0xec:
    goto code_r0x0001004a41bc;
  case 0xd4:
    goto code_r0x0001004a40e0;
  case 0xd5:
    break;
  case 0xda:
    goto code_r0x0001004a3e88;
  case 0xdc:
    goto code_r0x0001004a4278;
  case 0xdd:
    goto code_r0x0001004a4288;
  case 0xdf:
    goto code_r0x0001004a4268;
  case 0xe1:
    goto code_r0x0001004a4298;
  case 0xe3:
    goto LAB_1004a4270;
  case 0xe4:
    goto code_r0x0001004a42c8;
  case 0xe6:
    goto code_r0x0001004a42b8;
  case 0xe9:
    goto code_r0x0001004a42a0;
  case 0xee:
    goto code_r0x0001004a4318;
  case 0xef:
    goto code_r0x0001004a3dc4;
  case 0xf0:
    goto code_r0x0001004a3e08;
  case 0xf2:
    goto code_r0x0001004a4388;
  case 0xf3:
    goto code_r0x0001004a4398;
  case 0xf5:
    goto code_r0x0001004a4378;
  case 0xf6:
    goto code_r0x0001004a4324;
  case 0xf8:
    goto code_r0x0001004a43c0;
  case 0xf9:
    goto code_r0x0001004a4380;
  case 0xfa:
    goto code_r0x0001004a43d8;
  case 0xfb:
    goto code_r0x0001004a4354;
  case 0xfc:
    goto code_r0x0001004a43c8;
  case 0xff:
code_r0x0001004a43b0:
    bStack_108 = (byte)pppppppbVar24;
    uStack_107 = (undefined7)((ulong)pppppppbVar24 >> 8);
    uStack_100 = SUB81(pppppppbStack_290,0);
    uStack_ff = (undefined7)((ulong)pppppppbStack_290 >> 8);
    pppppppbStack_248 = unaff_x21;
    pppppppbStack_230 = pppppppbVar16;
code_r0x0001004a43c0:
    param_3 = &UNK_108ca1a98;
code_r0x0001004a43c8:
    FUN_107c05cac(param_3,0x2c,&UNK_10b24f848);
code_r0x0001004a43d8:
code_r0x0001004a4444:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004a4448);
    (*pcVar3)();
  }
  pppppppbStack_220 = (byte *******)CONCAT71(pppppppbStack_220._1_7_,bVar15);
code_r0x0001004a4178:
  param_5 = (byte *******)&UNK_10b21b000;
code_r0x0001004a417c:
  param_5 = param_5 + 0x9a;
code_r0x0001004a4180:
  pppppppbVar24 = (byte *******)&pppppppbStack_220;
code_r0x0001004a4184:
  param_4 = appppppbStack_71;
code_r0x0001004a4188:
  pppppppbVar24 = (byte *******)FUN_107c05dcc(pppppppbVar24,param_4,param_5);
code_r0x0001004a418c:
  pppppppbVar16 = (byte *******)0x1d;
code_r0x0001004a4190:
  *(byte ********)param_3 = pppppppbVar16;
  *(byte ********)((long)param_3 + 8) = pppppppbVar24;
code_r0x0001004a4194:
LAB_1004a4224:
code_r0x0001004a4230:
code_r0x0001004a4234:
  return;
}

