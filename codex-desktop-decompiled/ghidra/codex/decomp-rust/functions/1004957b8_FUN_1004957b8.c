
/* WARNING: Type propagation algorithm not settling */

void FUN_1004957b8(undefined1 param_1 [16],undefined1 param_2 [16],byte *******param_3,byte *param_4
                  ,undefined *param_5)

{
  ulong uVar1;
  byte ******ppppppbVar2;
  byte ******ppppppbVar3;
  byte ******ppppppbVar4;
  byte ******ppppppbVar5;
  byte ******ppppppbVar6;
  code *pcVar7;
  byte in_ZR;
  bool bVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  byte ******ppppppbVar11;
  byte ******ppppppbVar12;
  byte ******ppppppbVar13;
  undefined1 uVar14;
  byte *******pppppppbVar15;
  byte bVar16;
  byte *******pppppppbVar17;
  long lVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte ******extraout_x11;
  byte ******ppppppbVar21;
  byte *******in_x12;
  byte *******in_x13;
  uint uVar22;
  byte *******unaff_x20;
  undefined8 *puVar23;
  byte *******pppppppbVar24;
  byte *******unaff_x21;
  byte *******pppppppbVar25;
  byte *******unaff_x23;
  byte *******unaff_x24;
  byte *******unaff_x25;
  byte *******unaff_x26;
  byte *******unaff_x27;
  int iVar26;
  byte *******unaff_x28;
  undefined8 uVar27;
  byte *******pppppppbVar28;
  byte *******pppppppbVar29;
  byte *******pppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte *******pppppppbStack_298;
  byte *******pppppppbStack_290;
  undefined8 *puStack_288;
  byte *******pppppppbStack_280;
  byte *******pppppppbStack_278;
  byte *******pppppppbStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  byte *******pppppppbStack_258;
  byte *******pppppppbStack_250;
  byte *******pppppppbStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  byte ******ppppppbStack_228;
  byte *******pppppppbStack_220;
  byte *******pppppppbStack_218;
  undefined8 uStack_210;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_200;
  byte ******ppppppbStack_1f0;
  byte ******ppppppbStack_1e8;
  byte ******ppppppbStack_1e0;
  byte ******ppppppbStack_1d8;
  byte ******ppppppbStack_1d0;
  byte ******ppppppbStack_1c8;
  byte ******ppppppbStack_1c0;
  byte ******ppppppbStack_1b8;
  byte ******ppppppbStack_1b0;
  byte ******ppppppbStack_1a8;
  byte ******ppppppbStack_1a0;
  byte ******ppppppbStack_198;
  byte ******ppppppbStack_190;
  byte ******ppppppbStack_188;
  byte ******ppppppbStack_180;
  byte ******ppppppbStack_178;
  byte ******ppppppbStack_170;
  byte ******ppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte ******ppppppbStack_150;
  byte ******ppppppbStack_148;
  byte ******ppppppbStack_140;
  byte ******ppppppbStack_138;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte ******ppppppbStack_108;
  byte ******ppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f0;
  byte ******ppppppbStack_e8;
  byte bStack_e0;
  byte bStack_df;
  undefined6 uStack_de;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  byte *******pppppppbStack_c8;
  byte ******ppppppbStack_c0;
  byte ******ppppppbStack_b8;
  byte ******ppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte ******ppppppbStack_a0;
  undefined8 uStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  undefined1 auStack_71 [17];
  
  ppppppbVar13 = param_2._8_8_;
  ppppppbVar11 = param_2._0_8_;
  pppppppbVar29 = param_1._8_8_;
  pppppppbVar28 = param_1._0_8_;
  pppppppbVar9 = (byte *******)&pppppppbStack_128;
  bVar16 = *param_4;
  pppppppbVar15 = (byte *******)(ulong)bVar16;
  pppppppbVar17 = (byte *******)&UNK_108c99e38;
  pppppppbVar20 = (byte *******)(ulong)*(ushort *)(&UNK_108c99e38 + (long)pppppppbVar15 * 2);
  pppppppbVar19 = (byte *******)(&UNK_1004957fc + (long)pppppppbVar20 * 4);
  pppppppbVar10 = param_3;
  pppppppbVar24 = unaff_x20;
  pppppppbVar25 = pppppppbVar9;
  switch(bVar16) {
  case 0:
    ppppppbStack_1f0 = (byte ******)((ulong)CONCAT61(ppppppbStack_1f0._2_6_,param_4[1]) << 8);
    goto code_r0x000100496328;
  case 1:
    ppppppbStack_1e8 = (byte ******)(ulong)param_4[1];
    goto code_r0x0001004962dc;
  case 2:
    ppppppbStack_1e8 = (byte ******)(ulong)*(ushort *)(param_4 + 2);
    goto code_r0x0001004962dc;
  case 3:
    ppppppbStack_1e8 = (byte ******)(ulong)*(uint *)(param_4 + 4);
    goto code_r0x0001004962dc;
  case 4:
    ppppppbStack_1e8 = *(byte *******)(param_4 + 8);
code_r0x0001004962dc:
    uVar14 = 1;
    break;
  case 5:
    ppppppbStack_1e8 = (byte ******)(long)(char)param_4[1];
    goto code_r0x00010049631c;
  case 6:
    ppppppbStack_1e8 = (byte ******)(long)*(short *)(param_4 + 2);
    goto code_r0x00010049631c;
  case 7:
    ppppppbStack_1e8 = (byte ******)(long)*(int *)(param_4 + 4);
    goto code_r0x00010049631c;
  case 8:
    ppppppbStack_1e8 = *(byte *******)(param_4 + 8);
code_r0x00010049631c:
    uVar14 = 2;
    break;
  case 9:
    ppppppbStack_1e8 = (byte ******)(double)*(float *)(param_4 + 4);
    goto code_r0x00010049630c;
  case 10:
    ppppppbStack_1e8 = *(byte *******)(param_4 + 8);
code_r0x00010049630c:
    uVar14 = 3;
    break;
  case 0xb:
    ppppppbVar11 = (byte ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffc0,&stack0xffffffffffffffdf,
                                       &UNK_10b21c6d0);
    *param_3 = (byte ******)0x11;
    param_3[1] = ppppppbVar11;
    return;
  case 0xc:
    uVar27 = *(undefined8 *)(param_4 + 0x10);
    ppppppbVar11 = (byte ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b21c6d0);
    *param_3 = (byte ******)0x11;
    param_3[1] = ppppppbVar11;
    if (*(long *)(param_4 + 8) != 0) {
      _free(uVar27);
    }
    return;
  case 0xd:
    ppppppbStack_1e8 = *(byte *******)(param_4 + 8);
    ppppppbStack_1e0 = *(byte *******)(param_4 + 0x10);
    uVar14 = 5;
    break;
  case 0xe:
    uVar27 = *(undefined8 *)(param_4 + 0x10);
    ppppppbVar11 = (byte ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b21c6d0);
    *param_3 = (byte ******)0x11;
    param_3[1] = ppppppbVar11;
    if (*(long *)(param_4 + 8) != 0) {
      _free(uVar27);
    }
    return;
  case 0xf:
    ppppppbStack_1e8 = *(byte *******)(param_4 + 8);
    ppppppbStack_1e0 = *(byte *******)(param_4 + 0x10);
    uVar14 = 6;
    break;
  case 0x10:
    uVar14 = 8;
    break;
  default:
    puVar23 = *(undefined8 **)(param_4 + 8);
    ppppppbStack_1e8 = (byte ******)puVar23[1];
    ppppppbStack_1f0 = (byte ******)*puVar23;
    ppppppbStack_1d8 = (byte ******)puVar23[3];
    ppppppbStack_1e0 = (byte ******)puVar23[2];
    func_0x000107c04738(param_3,&ppppppbStack_1f0);
    goto code_r0x0001004958cc;
  case 0x12:
    uVar14 = 7;
    break;
  case 0x13:
    puVar23 = *(undefined8 **)(param_4 + 8);
    ppppppbStack_1e8 = (byte ******)puVar23[1];
    ppppppbStack_1f0 = (byte ******)*puVar23;
    ppppppbStack_1d8 = (byte ******)puVar23[3];
    ppppppbStack_1e0 = (byte ******)puVar23[2];
    func_0x000107c05494(param_3,&ppppppbStack_1f0);
code_r0x0001004958cc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puVar23);
    return;
  case 0x14:
    unaff_x23 = *(byte ********)(param_4 + 8);
    unaff_x20 = *(byte ********)(param_4 + 0x10);
    unaff_x25 = unaff_x20 + *(long *)(param_4 + 0x18) * 4;
    ppppppbStack_108 = (byte ******)0x0;
    unaff_x27 = unaff_x25;
    pppppppbStack_128 = unaff_x20;
    pppppppbStack_118 = unaff_x23;
    pppppppbStack_110 = unaff_x25;
    if (*(long *)(param_4 + 0x18) == 0) {
      ppppppbVar11 = (byte ******)0x0;
      unaff_x26 = (byte *******)0x8000000000000000;
      unaff_x21 = unaff_x20;
      pppppppbStack_120 = unaff_x20;
      if (unaff_x20 == unaff_x25) goto code_r0x000100495ea4;
      goto code_r0x000100495db4;
    }
    unaff_x21 = unaff_x20 + 4;
    pppppppbStack_120 = unaff_x21;
    if (*(byte *)unaff_x20 != 0x16) {
      uVar27 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_d7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      bStack_df = (byte)uVar27;
      uStack_de = (undefined6)((ulong)uVar27 >> 8);
      uStack_d8 = (undefined1)((ulong)uVar27 >> 0x38);
      pppppppbStack_c8 = (byte *******)unaff_x20[3];
      uStack_d0 = SUB81(unaff_x20[2],0);
      uStack_cf = (undefined7)((ulong)unaff_x20[2] >> 8);
      ppppppbStack_108 = (byte ******)0x1;
      pppppppbVar10 = (byte *******)&bStack_240;
      param_4 = &bStack_e0;
      bStack_e0 = *(byte *)unaff_x20;
      goto code_r0x000100495e60;
    }
    ppppppbVar11 = (byte ******)0x0;
    unaff_x26 = (byte *******)0x8000000000000000;
    if (unaff_x21 != unaff_x25) goto code_r0x000100495db4;
    goto code_r0x000100495ea4;
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
    uStack_210 = *(undefined8 *)(param_4 + 8);
    pppppppbVar9 = *(byte ********)(param_4 + 0x10);
    lVar18 = *(long *)(param_4 + 0x18);
    unaff_x24 = pppppppbVar9 + lVar18 * 8;
    bStack_240 = 0x16;
    pppppppbStack_200 = (byte *******)0x0;
    unaff_x23 = (byte *******)0x0;
    pppppppbStack_220 = pppppppbVar9;
    pppppppbStack_218 = pppppppbVar9;
    pppppppbStack_208 = unaff_x24;
    if (lVar18 != 0) {
      unaff_x27 = (byte *******)((ulong)&bStack_e0 | 1);
      unaff_x28 = (byte *******)((ulong)&bStack_240 | 1);
      puStack_288 = (undefined8 *)((ulong)&uStack_98 | 1);
      pppppppbStack_2c0 = (byte *******)((lVar18 * 0x40 - 0x40U >> 6) + 1);
      pppppppbStack_258 = (byte *******)0x8000000000000005;
      pppppppbStack_250 = (byte *******)0x8000000000000001;
      pppppppbStack_248 = (byte *******)0x8000000000000001;
      pppppppbStack_268 = (byte *******)0x8000000000000000;
      pppppppbStack_260 = (byte *******)0x8000000000000001;
      unaff_x20 = (byte *******)0x8000000000000005;
      unaff_x21 = pppppppbVar9;
      do {
        pppppppbVar9 = unaff_x21 + 8;
        bVar16 = *(byte *)unaff_x21;
        if (bVar16 == 0x16) goto code_r0x000100495f18;
        bStack_e0 = bVar16;
        ppppppbVar11 = unaff_x21[2];
        *(byte *******)((long)unaff_x27 + 0x17) = unaff_x21[3];
        *(byte *******)((long)unaff_x27 + 0xf) = ppppppbVar11;
        ppppppbVar11 = *(byte *******)((long)unaff_x21 + 1);
        unaff_x27[1] = *(byte *******)((long)unaff_x21 + 9);
        *unaff_x27 = ppppppbVar11;
        ppppppbStack_228 = unaff_x21[7];
        uStack_238 = SUB81(unaff_x21[5],0);
        uStack_237 = (undefined7)((ulong)unaff_x21[5] >> 8);
        bStack_240 = (byte)unaff_x21[4];
        uStack_23f = (undefined7)((ulong)unaff_x21[4] >> 8);
        uStack_230 = SUB81(unaff_x21[6],0);
        uStack_22f = (undefined7)((ulong)unaff_x21[6] >> 8);
        uVar1 = CONCAT71(uStack_d7,uStack_d8);
        uVar27 = CONCAT71(uStack_cf,uStack_d0);
        if (0xc < bVar16) {
          if (bVar16 == 0xd) {
            func_0x000100ac5598(&uStack_98,uVar1,uVar27);
            goto code_r0x000100495a50;
          }
          if (bVar16 == 0xe) {
            func_0x000100ac3d58(&uStack_98,uVar27,pppppppbStack_c8);
joined_r0x0001004959b4:
            bVar16 = bStack_240;
            pppppppbVar17 = uStack_98;
            if (uVar1 != 0) {
              _free(uVar27);
              bVar16 = bStack_240;
              pppppppbVar17 = uStack_98;
            }
            goto joined_r0x000100495a1c;
          }
          if (bVar16 == 0xf) {
            func_0x000100ac3d58(&uStack_98,uVar1,uVar27);
            goto code_r0x000100495a50;
          }
code_r0x000100495d08:
          pppppppbStack_90 = (byte *******)thunk_FUN_108855b04(&bStack_e0,auStack_71,&UNK_10b2104e0)
          ;
          uStack_98 = (byte *******)CONCAT71(uStack_98._1_7_,1);
code_r0x000100495d30:
          pppppppbStack_120 = pppppppbStack_280;
          *param_3 = (byte ******)0x11;
          param_3[1] = (byte ******)pppppppbStack_90;
          pppppppbStack_218 = pppppppbVar9;
          pppppppbStack_128 = unaff_x20;
          goto code_r0x000100495d70;
        }
        if (bVar16 == 1) {
          bVar16 = bStack_df;
          if (4 < bStack_df) {
            bVar16 = 5;
          }
          uStack_98 = (byte *******)((ulong)CONCAT61(uStack_98._2_6_,bVar16) << 8);
        }
        else {
          if (bVar16 != 4) {
            if (bVar16 != 0xc) goto code_r0x000100495d08;
            func_0x000100ac5598(&uStack_98,uVar27);
            goto joined_r0x0001004959b4;
          }
          if (4 < uVar1) {
            uVar1 = 5;
          }
          uStack_98 = (byte *******)((ulong)CONCAT61(uStack_98._2_6_,(char)uVar1) << 8);
        }
code_r0x000100495a50:
        FUN_100e077ec(&bStack_e0);
        bVar16 = bStack_240;
        pppppppbVar17 = uStack_98;
joined_r0x000100495a1c:
        bStack_240 = bVar16;
        uStack_98 = pppppppbVar17;
        if (((ulong)pppppppbVar17 & 1) != 0) goto code_r0x000100495d30;
        uStack_98._1_1_ = (byte)((ulong)pppppppbVar17 >> 8);
        pppppppbVar19 = pppppppbStack_268;
        if (uStack_98._1_1_ < 3) {
          if (uStack_98._1_1_ == 0) {
            if (pppppppbStack_248 != (byte *******)0x8000000000000001) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              uStack_98 = (byte *******)&UNK_108ca26b0;
              pppppppbStack_90 = (byte *******)0x2;
              bStack_e0 = (byte)&uStack_98;
              bStack_df = (byte)((ulong)&uStack_98 >> 8);
              uStack_de = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_d8 = 0xa0;
              uStack_d7 = 0x100c7b3;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              ppppppbVar11 = (byte ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
              goto LAB_100496920;
            }
            bStack_240 = 0x16;
            if (bVar16 == 0x16) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x000100496a6c;
            }
            ppppppbVar11 = *unaff_x28;
            unaff_x27[1] = unaff_x28[1];
            *unaff_x27 = ppppppbVar11;
            uVar27 = *(undefined8 *)((long)unaff_x28 + 0xf);
            *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
            *(undefined8 *)((long)unaff_x27 + 0xf) = uVar27;
            bStack_e0 = bVar16;
            FUN_1004b60cc(&uStack_98,&bStack_e0);
            pppppppbStack_248 = uStack_98;
            pppppppbVar17 = (byte *******)0x8000000000000001;
            pppppppbVar15 = uStack_98;
code_r0x000100495bec:
            if (pppppppbVar15 == pppppppbVar17) goto code_r0x000100495bf4;
            pppppppbStack_270 = pppppppbStack_90;
            pppppppbStack_2b0 = pppppppbStack_88;
          }
          else if (uStack_98._1_1_ == 1) {
            if (pppppppbStack_260 != (byte *******)0x8000000000000001) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              uStack_98 = (byte *******)&UNK_108caaafb;
              pppppppbStack_90 = (byte *******)0x7;
              bStack_e0 = (byte)&uStack_98;
              bStack_df = (byte)((ulong)&uStack_98 >> 8);
              uStack_de = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_d8 = 0xa0;
              uStack_d7 = 0x100c7b3;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              ppppppbVar11 = (byte ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
LAB_100496920:
              *param_3 = (byte ******)0x11;
              param_3[1] = ppppppbVar11;
              unaff_x25 = (byte *******)0x1;
              unaff_x28 = (byte *******)0x1;
              unaff_x27 = (byte *******)0x1;
              unaff_x20 = (byte *******)0x1;
              unaff_x21 = pppppppbStack_250;
              pppppppbVar25 = pppppppbStack_248;
              unaff_x23 = pppppppbStack_260;
              unaff_x24 = pppppppbVar19;
              unaff_x26 = pppppppbStack_278;
              goto LAB_100496054;
            }
            bStack_240 = 0x16;
            if (bVar16 == 0x16) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x000100496a6c;
            }
            ppppppbVar11 = *unaff_x28;
            unaff_x27[1] = unaff_x28[1];
            *unaff_x27 = ppppppbVar11;
            uVar27 = *(undefined8 *)((long)unaff_x28 + 0xf);
            *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
            *(undefined8 *)((long)unaff_x27 + 0xf) = uVar27;
            bStack_e0 = bVar16;
            FUN_1004b60cc(&uStack_98,&bStack_e0);
            pppppppbStack_260 = uStack_98;
            if (uStack_98 == (byte *******)0x8000000000000001) {
              pppppppbStack_120 = pppppppbStack_280;
              *param_3 = (byte ******)0x11;
              param_3[1] = (byte ******)pppppppbStack_90;
              pppppppbStack_260 = (byte *******)0x8000000000000001;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              goto code_r0x000100495d70;
            }
            pppppppbStack_290 = pppppppbStack_90;
            pppppppbStack_2a8 = pppppppbStack_88;
          }
          else {
            in_ZR = pppppppbStack_250 == (byte *******)0x8000000000000001;
            pppppppbVar19 = pppppppbStack_250;
code_r0x000100495c74:
            if (!(bool)in_ZR) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              uStack_98 = (byte *******)&UNK_108ca105e;
              pppppppbStack_90 = (byte *******)0x6;
              bStack_e0 = (byte)&uStack_98;
              bStack_df = (byte)((ulong)&uStack_98 >> 8);
              uStack_de = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_d8 = 0xa0;
              uStack_d7 = 0x100c7b3;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              ppppppbVar11 = (byte ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
              pppppppbStack_250 = pppppppbVar19;
              pppppppbVar19 = pppppppbStack_268;
              goto LAB_100496920;
            }
            pppppppbVar15 = (byte *******)(ulong)bStack_240;
            bStack_240 = 0x16;
code_r0x000100495c84:
            bVar16 = (byte)pppppppbVar15;
            if ((int)pppppppbVar15 == 0x16) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x000100496a6c;
            }
code_r0x000100495c8c:
            pppppppbVar29 = (byte *******)unaff_x28[1];
            pppppppbVar28 = (byte *******)*unaff_x28;
code_r0x000100495c90:
            unaff_x27[1] = (byte ******)pppppppbVar29;
            *unaff_x27 = (byte ******)pppppppbVar28;
code_r0x000100495c94:
            uVar27 = *(undefined8 *)((long)unaff_x28 + 0xf);
            *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
            *(undefined8 *)((long)unaff_x27 + 0xf) = uVar27;
code_r0x000100495c9c:
            bStack_e0 = bVar16;
            FUN_1004b60cc(&uStack_98,&bStack_e0);
            pppppppbStack_250 = uStack_98;
            if (uStack_98 == (byte *******)0x8000000000000001) {
              pppppppbStack_120 = pppppppbStack_280;
              pppppppbStack_250 = (byte *******)0x8000000000000001;
              *param_3 = (byte ******)0x11;
              param_3[1] = (byte ******)pppppppbStack_90;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              goto code_r0x000100495d70;
            }
            pppppppbStack_2a0 = pppppppbStack_88;
            pppppppbStack_298 = pppppppbStack_90;
          }
        }
        else if (uStack_98._1_1_ == 3) {
          in_ZR = pppppppbStack_268 == (byte *******)0x8000000000000000;
code_r0x000100495c04:
          bVar16 = bStack_240;
          if (!(bool)in_ZR) {
            pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
            pppppppbStack_120 = pppppppbStack_280;
            uStack_98 = (byte *******)&UNK_108cae4ad;
            pppppppbStack_90 = (byte *******)0x9;
            bStack_e0 = (byte)&uStack_98;
            bStack_df = (byte)((ulong)&uStack_98 >> 8);
            uStack_de = (undefined6)((ulong)&uStack_98 >> 0x10);
            uStack_d8 = 0xa0;
            uStack_d7 = 0x100c7b3;
            pppppppbStack_218 = pppppppbVar9;
            pppppppbStack_128 = unaff_x20;
            ppppppbVar11 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
            goto LAB_100496920;
          }
          bStack_240 = 0x16;
          if (bVar16 == 0x16) {
            pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
            pppppppbStack_120 = pppppppbStack_280;
            pppppppbStack_218 = pppppppbVar9;
            pppppppbStack_128 = unaff_x20;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100496a6c;
          }
          ppppppbVar11 = *unaff_x28;
          unaff_x27[1] = unaff_x28[1];
          *unaff_x27 = ppppppbVar11;
          uVar27 = *(undefined8 *)((long)unaff_x28 + 0xf);
          *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
          *(undefined8 *)((long)unaff_x27 + 0xf) = uVar27;
          bStack_e0 = bVar16;
code_r0x000100495c30:
code_r0x000100495c38:
          pppppppbVar10 = (byte *******)&uStack_98;
          param_4 = &bStack_e0;
code_r0x000100495c40:
          FUN_1004b62d4(pppppppbVar10,param_4);
          pppppppbVar15 = pppppppbStack_90;
          pppppppbVar17 = uStack_98;
code_r0x000100495c48:
          pppppppbVar19 = (byte *******)0x8000000000000000;
          pppppppbVar24 = unaff_x20;
          pppppppbStack_268 = pppppppbVar17;
code_r0x000100495c50:
          unaff_x20 = pppppppbVar24;
          if (pppppppbVar17 == pppppppbVar19) {
            pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
            pppppppbStack_120 = pppppppbStack_280;
            unaff_x25 = (byte *******)0x1;
            unaff_x24 = (byte *******)0x0;
            unaff_x28 = (byte *******)0x1;
            unaff_x27 = (byte *******)0x1;
            unaff_x20 = (byte *******)0x1;
            *param_3 = (byte ******)0x11;
            param_3[1] = (byte ******)pppppppbVar15;
            unaff_x21 = pppppppbStack_250;
            pppppppbVar25 = pppppppbStack_248;
            unaff_x23 = pppppppbStack_260;
            unaff_x26 = pppppppbStack_278;
            pppppppbStack_218 = pppppppbVar9;
            pppppppbStack_128 = pppppppbVar24;
            goto LAB_100496054;
          }
code_r0x000100495c58:
          pppppppbStack_2b8 = pppppppbStack_88;
          pppppppbStack_278 = pppppppbVar15;
        }
        else {
          bVar8 = uStack_98._1_1_ == 4;
          if (bVar8) {
            pppppppbVar25 = pppppppbStack_248;
            unaff_x26 = pppppppbStack_278;
            if (pppppppbStack_258 != (byte *******)0x8000000000000005) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              uStack_98 = (byte *******)&UNK_108cadb54;
              pppppppbStack_90 = (byte *******)0x9;
              bStack_e0 = (byte)&uStack_98;
              bStack_df = (byte)((ulong)&uStack_98 >> 8);
              uStack_de = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_d8 = 0xa0;
              uStack_d7 = 0x100c7b3;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              ppppppbVar11 = (byte ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
              *param_3 = (byte ******)0x11;
              param_3[1] = ppppppbVar11;
              unaff_x20 = (byte *******)0x1;
              unaff_x27 = (byte *******)0x1;
              unaff_x28 = (byte *******)0x1;
              unaff_x25 = (byte *******)0x1;
              unaff_x21 = pppppppbStack_250;
              unaff_x23 = pppppppbStack_260;
              unaff_x24 = pppppppbStack_268;
              goto LAB_100496068;
            }
            bStack_240 = 0x16;
            if (bVar16 == 0x16) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x000100496a6c;
            }
            ppppppbVar11 = *unaff_x28;
            puStack_288[1] = unaff_x28[1];
            *puStack_288 = ppppppbVar11;
            uVar27 = *(undefined8 *)((long)unaff_x28 + 0xf);
            *(undefined8 *)((long)puStack_288 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
            *(undefined8 *)((long)puStack_288 + 0xf) = uVar27;
            uStack_98._1_7_ = (undefined7)((ulong)pppppppbVar17 >> 8);
            uStack_98 = (byte *******)CONCAT71(uStack_98._1_7_,bVar16);
            FUN_1004aa788(&bStack_e0,&uStack_98);
            unaff_x20 = (byte *******)CONCAT62(uStack_de,CONCAT11(bStack_df,bStack_e0));
            if (unaff_x20 == (byte *******)0x8000000000000005) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              *param_3 = (byte ******)0x11;
              param_3[1] = (byte ******)CONCAT71(uStack_d7,uStack_d8);
              unaff_x20 = (byte *******)0x1;
              unaff_x27 = (byte *******)0x1;
              unaff_x28 = (byte *******)0x1;
              unaff_x25 = (byte *******)0x1;
              unaff_x21 = pppppppbStack_250;
              unaff_x23 = pppppppbStack_260;
              pppppppbStack_218 = pppppppbVar9;
              if (((ulong)pppppppbStack_268 & 0x7fffffffffffffff) != 0) goto code_r0x000100496078;
              goto LAB_100496084;
            }
            pppppppbStack_280 = (byte *******)CONCAT71(uStack_d7,uStack_d8);
            pppppppbStack_118 = (byte *******)CONCAT71(uStack_cf,uStack_d0);
            pppppppbStack_110 = pppppppbStack_c8;
            ppppppbStack_100 = ppppppbStack_b8;
            ppppppbStack_108 = ppppppbStack_c0;
            ppppppbStack_f0 = ppppppbStack_a8;
            ppppppbStack_f8 = ppppppbStack_b0;
            ppppppbStack_e8 = ppppppbStack_a0;
            pppppppbStack_258 = unaff_x20;
          }
          else {
code_r0x000100495cd4:
            bVar16 = bStack_240;
            bStack_240 = 0x16;
            if (bVar16 == 0x16) {
              pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
              pppppppbStack_120 = pppppppbStack_280;
              pppppppbStack_218 = pppppppbVar9;
              pppppppbStack_128 = unaff_x20;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100496a6c:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100496a70);
              (*pcVar7)();
            }
            ppppppbVar11 = *unaff_x28;
            unaff_x27[1] = unaff_x28[1];
            *unaff_x27 = ppppppbVar11;
            uVar27 = *(undefined8 *)((long)unaff_x28 + 0xf);
            *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
            *(undefined8 *)((long)unaff_x27 + 0xf) = uVar27;
            bStack_e0 = bVar16;
            FUN_100e077ec(&bStack_e0);
          }
        }
        pppppppbVar17 = unaff_x21 + 8;
        unaff_x23 = (byte *******)((long)unaff_x23 + 1);
        unaff_x21 = pppppppbVar9;
      } while (pppppppbVar17 != unaff_x24);
      goto code_r0x000100495f10;
    }
    unaff_x20 = (byte *******)0x8000000000000005;
    pppppppbStack_268 = (byte *******)0x8000000000000000;
    pppppppbVar19 = (byte *******)0x8000000000000001;
    pppppppbStack_260 = (byte *******)0x8000000000000001;
    pppppppbVar15 = (byte *******)0x8000000000000001;
    pppppppbStack_258 = (byte *******)0x8000000000000005;
    goto code_r0x000100495f30;
  case 0x16:
    goto code_r0x0001004960d0;
  case 0x17:
    goto code_r0x0001004960e0;
  case 0x18:
  case 0x7d:
    goto LAB_1004960a8;
  case 0x19:
  case 0x75:
    goto code_r0x0001004960c0;
  case 0x1a:
  case 0x65:
  case 0x7a:
    goto code_r0x00010049606c;
  case 0x1b:
  case 0x7b:
  case 0xd5:
    goto LAB_1004960f0;
  case 0x1c:
  case 0x78:
  case 0xcd:
    goto code_r0x000100496108;
  case 0x1d:
  case 0x6e:
    goto code_r0x0001004960c8;
  case 0x1e:
  case 199:
    goto code_r0x000100496120;
  case 0x1f:
  case 0x84:
  case 0xdf:
    goto code_r0x00010049609c;
  case 0x20:
  case 0x44:
  case 0xc6:
    goto code_r0x000100496110;
  case 0x21:
  case 0x58:
    goto code_r0x000100496044;
  case 0x22:
  case 0x86:
    goto code_r0x000100496074;
  case 0x23:
    goto code_r0x0001004960f8;
  case 0x24:
  case 0x5a:
    goto code_r0x00010049601c;
  case 0x25:
    goto code_r0x0001004960b0;
  case 0x26:
  case 0x7c:
  case 0xc2:
    goto code_r0x000100496014;
  case 0x28:
  case 0x48:
    goto code_r0x000100496170;
  case 0x29:
  case 0x81:
  case 0xc4:
    goto code_r0x000100495c48;
  case 0x2a:
  case 0x82:
    goto code_r0x000100495c8c;
  case 0x2c:
  case 99:
    goto code_r0x000100495fb8;
  case 0x2d:
    goto code_r0x000100495fc8;
  case 0x2e:
  case 0x66:
    goto code_r0x000100495f90;
  case 0x2f:
    goto code_r0x000100495fa8;
  case 0x30:
  case 0xa0:
  case 0xbf:
    goto code_r0x000100495f54;
  case 0x31:
    goto code_r0x000100495fd8;
  case 0x32:
  case 0xec:
    goto code_r0x000100495ff0;
  case 0x33:
    goto code_r0x000100495fb0;
  case 0x34:
    goto code_r0x000100496008;
  case 0x35:
  case 0xb1:
    goto code_r0x000100495f84;
  case 0x36:
  case 0xea:
    goto code_r0x000100495ff8;
  case 0x37:
  case 0x9b:
    goto code_r0x000100495f2c;
  case 0x38:
  case 0xa4:
    goto code_r0x000100495f5c;
  case 0x39:
  case 0x5c:
  case 0x94:
    goto code_r0x000100495fe0;
  case 0x3a:
    goto code_r0x000100495f04;
  case 0x3b:
    goto code_r0x000100495f98;
  case 0x3c:
  case 0xa9:
    goto code_r0x000100495efc;
  case 0x3e:
    goto code_r0x000100496058;
  case 0x3f:
code_r0x000100495bf4:
    pppppppbStack_120 = pppppppbStack_280;
    *param_3 = (byte ******)0x11;
    param_3[1] = (byte ******)pppppppbStack_90;
    pppppppbStack_248 = (byte *******)0x8000000000000001;
    pppppppbStack_218 = pppppppbVar9;
    pppppppbStack_128 = unaff_x20;
code_r0x000100495d70:
    pppppppbStack_200 = (byte *******)((long)unaff_x23 + 1);
    unaff_x28 = (byte *******)0x1;
    unaff_x27 = (byte *******)0x1;
    unaff_x25 = (byte *******)0x1;
    unaff_x20 = (byte *******)0x1;
    unaff_x21 = pppppppbStack_250;
    pppppppbVar25 = pppppppbStack_248;
    unaff_x23 = pppppppbStack_260;
    unaff_x24 = pppppppbStack_268;
    unaff_x26 = pppppppbStack_278;
    goto LAB_100496054;
  case 0x40:
    goto code_r0x000100495c38;
  case 0x42:
  case 0xd3:
    goto code_r0x000100496138;
  case 0x43:
  case 0xcc:
    goto code_r0x000100496148;
  case 0x45:
    goto code_r0x000100496128;
  case 0x46:
  case 0x8a:
  case 0xe9:
    goto code_r0x0001004960d4;
  case 0x47:
    goto code_r0x000100496158;
  case 0x49:
  case 0xcb:
    goto code_r0x000100496130;
  case 0x4a:
  case 0xf4:
    goto code_r0x000100496188;
  case 0x4b:
    goto code_r0x000100496104;
  case 0x4c:
    goto code_r0x000100496178;
  case 0x4d:
  case 0x85:
  case 0xca:
  case 0xdc:
    goto code_r0x0001004960ac;
  case 0x4e:
  case 0x8e:
  case 0xcf:
    goto code_r0x0001004960dc;
  case 0x4f:
  case 0xce:
    goto code_r0x000100496160;
  case 0x50:
  case 0x62:
  case 0xd1:
  case 0xde:
    goto LAB_100496084;
  case 0x51:
  case 0x76:
    goto code_r0x000100496118;
  case 0x52:
  case 0x5e:
  case 0x93:
    goto code_r0x00010049607c;
  case 0x54:
  case 0xff:
    goto LAB_1004961d8;
  case 0x55:
    goto code_r0x000100495c90;
  case 0x56:
    goto code_r0x000100495cd4;
  case 0x59:
  case 0xd6:
    goto LAB_100496054;
  case 0x5b:
    goto code_r0x000100496034;
  case 0x5d:
  case 0x72:
    goto code_r0x000100496064;
  case 0x5f:
  case 0x79:
    goto code_r0x00010049603c;
  case 0x60:
  case 0x77:
  case 0x8b:
    goto code_r0x000100496094;
  case 0x61:
  case 0x8f:
    goto code_r0x000100496010;
  case 100:
  case 0x92:
    goto code_r0x000100495fe8;
  case 0x67:
    goto code_r0x000100496024;
  case 0x68:
    goto code_r0x000100495f88;
  case 0x6a:
  case 0xe2:
    goto code_r0x0001004960e4;
  case 0x6b:
  case 0xae:
    goto code_r0x000100495c30;
  case 0x6c:
    goto code_r0x000100495c74;
  case 0x6f:
    goto code_r0x0001004960d8;
  case 0x70:
    goto code_r0x0001004960a0;
  case 0x71:
    goto code_r0x0001004960b8;
  case 0x73:
  case 200:
    goto code_r0x0001004960e8;
  case 0x74:
  case 0xc9:
    goto code_r0x000100496100;
  case 0x7e:
    goto code_r0x00010049600c;
  case 0x80:
    goto code_r0x000100496168;
  case 0x87:
  case 0xeb:
    goto code_r0x00010049608c;
  case 0x88:
    goto code_r0x000100496038;
  case 0x89:
  case 0xdd:
    goto code_r0x0001004960bc;
  case 0x8c:
  case 0xe6:
    goto code_r0x0001004960ec;
  case 0x8d:
    goto LAB_100496068;
  case 0x90:
    goto LAB_100496040;
  case 0x91:
    goto code_r0x0001004960c4;
  case 0x96:
    goto code_r0x00010049613c;
  case 0x97:
    goto code_r0x000100495c40;
  case 0x98:
    goto code_r0x000100495c84;
  case 0x9a:
    goto code_r0x000100495f1c;
  case 0x9c:
    goto code_r0x000100495ef4;
  case 0x9d:
    goto code_r0x000100495f0c;
  case 0x9e:
  case 0xc0:
    goto code_r0x000100495eb8;
  case 0x9f:
    goto code_r0x000100495f3c;
  case 0xa1:
    goto code_r0x000100495f14;
  case 0xa2:
  case 0xb7:
    goto code_r0x000100495f6c;
  case 0xa3:
  case 0xbb:
    goto code_r0x000100495ee8;
  case 0xa5:
    goto code_r0x000100495e90;
  case 0xa6:
  case 0xbe:
    goto code_r0x000100495ec0;
  case 0xa7:
    goto code_r0x000100495f44;
  case 0xa8:
    goto code_r0x000100495e68;
  case 0xaa:
code_r0x000100495e60:
    FUN_1004b60cc(pppppppbVar10,param_4);
    unaff_x26 = (byte *******)CONCAT71(uStack_23f,bStack_240);
    pppppppbVar17 = (byte *******)CONCAT71(uStack_237,uStack_238);
code_r0x000100495e68:
    pppppppbVar10 = unaff_x21;
    if (unaff_x26 == (byte *******)0x8000000000000001) {
      *param_3 = (byte ******)0x11;
      param_3[1] = (byte ******)pppppppbVar17;
    }
    else {
      pppppppbStack_260 = (byte *******)CONCAT71(uStack_22f,uStack_230);
      unaff_x21 = pppppppbVar10;
      pppppppbStack_248 = pppppppbVar17;
code_r0x000100495e90:
      ppppppbVar11 = (byte ******)0x1;
      unaff_x27 = unaff_x25;
      if (unaff_x21 == unaff_x25) {
code_r0x000100495ea4:
        param_4 = &UNK_10b22b8c8;
        param_5 = &UNK_10b20a590;
        pppppppbVar10 = (byte *******)0x1;
code_r0x000100495eb8:
        pppppppbVar9 = (byte *******)thunk_FUN_1087e422c(pppppppbVar10,param_4,param_5);
code_r0x000100495ec0:
        pppppppbVar10 = unaff_x27;
        *param_3 = (byte ******)0x11;
        param_3[1] = (byte ******)pppppppbVar9;
      }
      else {
code_r0x000100495db4:
        unaff_x27 = unaff_x21 + 4;
        pppppppbStack_120 = unaff_x27;
        if (*(byte *)unaff_x21 == 0x16) goto code_r0x000100495ea4;
        uVar27 = *(undefined8 *)((long)unaff_x21 + 1);
        uStack_d7 = (undefined7)*(undefined8 *)((long)unaff_x21 + 9);
        bStack_df = (byte)uVar27;
        uStack_de = (undefined6)((ulong)uVar27 >> 8);
        uStack_d8 = (undefined1)((ulong)uVar27 >> 0x38);
        pppppppbStack_c8 = (byte *******)unaff_x21[3];
        uStack_d0 = SUB81(unaff_x21[2],0);
        uStack_cf = (undefined7)((ulong)unaff_x21[2] >> 8);
        ppppppbVar13 = (byte ******)((long)ppppppbVar11 + 1);
        ppppppbStack_108 = ppppppbVar13;
        bStack_e0 = *(byte *)unaff_x21;
        FUN_1004b60cc(&bStack_240,&bStack_e0);
        ppppppbVar2 = (byte ******)CONCAT71(uStack_23f,bStack_240);
        pppppppbVar9 = (byte *******)CONCAT71(uStack_237,uStack_238);
        if (ppppppbVar2 == (byte ******)0x8000000000000001) goto code_r0x000100495ec0;
        if (unaff_x27 == unaff_x25) {
          pppppppbStack_258 = (byte *******)0x0;
          pppppppbVar10 = unaff_x25;
          goto code_r0x00010049657c;
        }
        ppppppbVar4 = (byte ******)CONCAT71(uStack_22f,uStack_230);
        pppppppbVar10 = unaff_x21 + 8;
        pppppppbStack_120 = pppppppbVar10;
        if (*(byte *)(unaff_x21 + 4) == 0x16) {
          pppppppbStack_258 = (byte *******)0x8000000000000000;
          ppppppbVar21 = extraout_x11;
code_r0x00010049650c:
          bVar8 = pppppppbVar10 == unaff_x25;
          pppppppbVar10 = unaff_x25;
          if (bVar8) {
code_r0x00010049657c:
            ppppppbVar12 = (byte ******)thunk_FUN_1087e422c(3,&UNK_10b22b8c8,&UNK_10b20a590);
code_r0x000100496594:
            *param_3 = (byte ******)0x11;
            param_3[1] = ppppppbVar12;
          }
          else {
            pppppppbVar10 = unaff_x21 + 0xc;
            pppppppbStack_120 = pppppppbVar10;
            if (*(byte *)(unaff_x21 + 8) == 0x16) goto code_r0x00010049657c;
            uVar27 = *(undefined8 *)((long)unaff_x21 + 0x41);
            uStack_d7 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x49);
            bStack_df = (byte)uVar27;
            uStack_de = (undefined6)((ulong)uVar27 >> 8);
            uStack_d8 = (undefined1)((ulong)uVar27 >> 0x38);
            pppppppbStack_c8 = (byte *******)unaff_x21[0xb];
            uStack_d0 = SUB81(unaff_x21[10],0);
            uStack_cf = (undefined7)((ulong)unaff_x21[10] >> 8);
            ppppppbStack_108 = (byte ******)((long)ppppppbVar13 + 1);
            bStack_e0 = *(byte *)(unaff_x21 + 8);
            FUN_1004b62d4(&bStack_240,&bStack_e0);
            ppppppbVar3 = (byte ******)CONCAT71(uStack_23f,bStack_240);
            ppppppbVar12 = (byte ******)CONCAT71(uStack_237,uStack_238);
            if (ppppppbVar3 == (byte ******)0x8000000000000000) goto code_r0x000100496594;
            bVar8 = pppppppbVar10 == unaff_x25;
            pppppppbVar10 = unaff_x25;
            if (bVar8) {
code_r0x0001004965e0:
              ppppppbVar13 = (byte ******)thunk_FUN_1087e422c(4,&UNK_10b22b8c8,&UNK_10b20a590);
            }
            else {
              ppppppbVar5 = (byte ******)CONCAT71(uStack_22f,uStack_230);
              pppppppbVar10 = unaff_x21 + 0x10;
              pppppppbStack_120 = pppppppbVar10;
              if (*(byte *)(unaff_x21 + 0xc) == 0x16) goto code_r0x0001004965e0;
              uStack_237 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x69);
              uStack_23f = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x61);
              uStack_238 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 0x61) >> 0x38);
              ppppppbStack_228 = unaff_x21[0xf];
              uStack_230 = SUB81(unaff_x21[0xe],0);
              uStack_22f = (undefined7)((ulong)unaff_x21[0xe] >> 8);
              ppppppbStack_108 = (byte ******)((long)ppppppbVar13 + 2);
              bStack_240 = *(byte *)(unaff_x21 + 0xc);
              FUN_1004aa788(&bStack_e0,&bStack_240);
              ppppppbVar6 = (byte ******)CONCAT62(uStack_de,CONCAT11(bStack_df,bStack_e0));
              ppppppbVar13 = (byte ******)CONCAT71(uStack_d7,uStack_d8);
              if (ppppppbVar6 != (byte ******)0x8000000000000005) {
                param_3[0x10] = (byte ******)pppppppbStack_c8;
                param_3[0xf] = (byte ******)CONCAT71(uStack_cf,uStack_d0);
                param_3[0x12] = ppppppbStack_b8;
                param_3[0x11] = ppppppbStack_c0;
                param_3[0x14] = ppppppbStack_a8;
                param_3[0x13] = ppppppbStack_b0;
                param_3[0x15] = ppppppbStack_a0;
                *param_3 = (byte ******)0x6;
                param_3[1] = ppppppbVar3;
                param_3[2] = ppppppbVar12;
                param_3[3] = ppppppbVar5;
                param_3[4] = (byte ******)unaff_x26;
                param_3[5] = (byte ******)pppppppbStack_248;
                param_3[6] = (byte ******)pppppppbStack_260;
                param_3[7] = ppppppbVar2;
                param_3[8] = (byte ******)pppppppbVar9;
                param_3[9] = ppppppbVar4;
                param_3[10] = (byte ******)pppppppbStack_258;
                param_3[0xb] = ppppppbVar11;
                param_3[0xc] = ppppppbVar21;
                param_3[0xd] = ppppppbVar6;
                param_3[0xe] = ppppppbVar13;
                ppppppbStack_168 = param_3[0x11];
                ppppppbStack_170 = param_3[0x10];
                pppppppbStack_158 = (byte *******)param_3[0x13];
                pppppppbStack_160 = (byte *******)param_3[0x12];
                ppppppbStack_148 = param_3[0x15];
                ppppppbStack_150 = param_3[0x14];
                ppppppbStack_138 = param_3[0x17];
                ppppppbStack_140 = param_3[0x16];
                ppppppbStack_1e8 = param_3[1];
                ppppppbStack_1f0 = *param_3;
                ppppppbStack_1d8 = param_3[3];
                ppppppbStack_1e0 = param_3[2];
                ppppppbStack_1c8 = param_3[5];
                ppppppbStack_1d0 = param_3[4];
                ppppppbStack_1b8 = param_3[7];
                ppppppbStack_1c0 = param_3[6];
                ppppppbStack_1a8 = param_3[9];
                ppppppbStack_1b0 = param_3[8];
                ppppppbStack_198 = param_3[0xb];
                ppppppbStack_1a0 = param_3[10];
                ppppppbStack_188 = param_3[0xd];
                ppppppbStack_190 = param_3[0xc];
                ppppppbStack_178 = param_3[0xf];
                ppppppbStack_180 = param_3[0xe];
                ppppppbVar11 = (byte ******)FUN_100fbc738(&pppppppbStack_128);
                if (ppppppbVar11 == (byte ******)0x0) {
                  return;
                }
code_r0x000100496720:
                *param_3 = (byte ******)0x11;
                param_3[1] = ppppppbVar11;
                FUN_100e02a24(&ppppppbStack_1f0);
                return;
              }
            }
            *param_3 = (byte ******)0x11;
            param_3[1] = ppppppbVar13;
            if (ppppppbVar3 != (byte ******)0x0) {
              _free(ppppppbVar12);
            }
          }
          if (((ulong)pppppppbStack_258 & 0x7fffffffffffffff) != 0) {
            _free(ppppppbVar11);
          }
        }
        else {
          uVar27 = *(undefined8 *)((long)unaff_x21 + 0x21);
          uStack_d7 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x29);
          bStack_df = (byte)uVar27;
          uStack_de = (undefined6)((ulong)uVar27 >> 8);
          uStack_d8 = (undefined1)((ulong)uVar27 >> 0x38);
          pppppppbStack_c8 = (byte *******)unaff_x21[7];
          uStack_d0 = SUB81(unaff_x21[6],0);
          uStack_cf = (undefined7)((ulong)unaff_x21[6] >> 8);
          ppppppbVar13 = (byte ******)((ulong)ppppppbVar11 | 2);
          ppppppbStack_108 = ppppppbVar13;
          bStack_e0 = *(byte *)(unaff_x21 + 4);
          FUN_1004b60cc(&bStack_240,&bStack_e0);
          pppppppbStack_258 = (byte *******)CONCAT71(uStack_23f,bStack_240);
          ppppppbVar11 = (byte ******)CONCAT71(uStack_237,uStack_238);
          if (pppppppbStack_258 != (byte *******)0x8000000000000001) {
            ppppppbVar21 = (byte ******)CONCAT71(uStack_22f,uStack_230);
            goto code_r0x00010049650c;
          }
          *param_3 = (byte ******)0x11;
          param_3[1] = ppppppbVar11;
        }
        if (((ulong)ppppppbVar2 & 0x7fffffffffffffff) != 0) {
          _free(pppppppbVar9);
        }
      }
      if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
        _free(pppppppbStack_248);
      }
    }
    pppppppbVar9 = (byte *******)(((ulong)((long)unaff_x25 - (long)pppppppbVar10) >> 5) + 1);
code_r0x000100495ee8:
    while (pppppppbVar9 = (byte *******)((long)pppppppbVar9 + -1), pppppppbVar9 != (byte *******)0x0
          ) {
      unaff_x21 = pppppppbVar10 + 4;
code_r0x000100495ef4:
      FUN_100e077ec(pppppppbVar10);
      pppppppbVar10 = unaff_x21;
code_r0x000100495efc:
    }
    if (unaff_x23 == (byte *******)0x0) {
      return;
    }
code_r0x000100495f04:
    _free(unaff_x20);
code_r0x000100495f0c:
    return;
  case 0xac:
  case 0xbd:
    goto code_r0x000100495f9c;
  case 0xad:
    goto code_r0x000100495bec;
  case 0xb0:
    goto code_r0x000100495f74;
  case 0xb2:
    goto code_r0x000100495f4c;
  case 0xb3:
    goto code_r0x000100495f64;
  case 0xb4:
code_r0x000100495f10:
    pppppppbVar9 = unaff_x24;
    unaff_x24 = pppppppbVar9;
code_r0x000100495f14:
    unaff_x23 = pppppppbStack_2c0;
code_r0x000100495f18:
    pppppppbStack_218 = pppppppbVar9;
code_r0x000100495f1c:
    pppppppbStack_120 = pppppppbStack_280;
    pppppppbVar15 = pppppppbStack_248;
    pppppppbVar19 = pppppppbStack_250;
    pppppppbStack_200 = unaff_x23;
code_r0x000100495f2c:
code_r0x000100495f30:
    pppppppbStack_128 = unaff_x20;
    in_x13 = (byte *******)0x8000000000000001;
    in_ZR = pppppppbVar15 == (byte *******)0x8000000000000001;
    pppppppbVar17 = pppppppbStack_260;
    pppppppbVar20 = pppppppbStack_268;
code_r0x000100495f3c:
    pppppppbStack_250 = pppppppbVar19;
    pppppppbStack_248 = pppppppbVar15;
code_r0x000100495f40:
    in_x12 = (byte *******)0x8000000000000000;
code_r0x000100495f44:
    unaff_x27 = in_x12;
    if (!(bool)in_ZR) {
      unaff_x27 = pppppppbVar15;
    }
    pppppppbVar15 = (byte *******)(ulong)in_ZR;
code_r0x000100495f4c:
    in_ZR = pppppppbVar17 == in_x13;
    pppppppbStack_260 = pppppppbVar15;
code_r0x000100495f54:
    unaff_x21 = pppppppbVar17;
    unaff_x28 = in_x12;
    if (!(bool)in_ZR) {
      unaff_x28 = pppppppbVar17;
    }
code_r0x000100495f5c:
    pppppppbStack_268 = (byte *******)(ulong)in_ZR;
code_r0x000100495f64:
    in_ZR = pppppppbVar19 == in_x13;
    unaff_x20 = in_x12;
    if (!(bool)in_ZR) {
      unaff_x20 = pppppppbVar19;
    }
code_r0x000100495f6c:
    unaff_x26 = (byte *******)(ulong)in_ZR;
    unaff_x25 = pppppppbVar20;
code_r0x000100495f74:
    puStack_288 = (undefined8 *)(ulong)(pppppppbVar20 == in_x12);
    if (pppppppbVar20 == in_x12) {
code_r0x000100495f84:
      pppppppbVar15 = (byte *******)&UNK_108cae000;
code_r0x000100495f88:
      pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 0x4ad);
      pppppppbVar17 = (byte *******)0x9;
code_r0x000100495f90:
      uStack_98 = pppppppbVar15;
      pppppppbStack_90 = pppppppbVar17;
code_r0x000100495f94:
      pppppppbVar15 = (byte *******)&uStack_98;
code_r0x000100495f98:
      pppppppbVar17 = (byte *******)&UNK_100c7b000;
code_r0x000100495f9c:
      bStack_e0 = (byte)pppppppbVar15;
      bStack_df = (byte)((ulong)pppppppbVar15 >> 8);
      uStack_de = (undefined6)((ulong)pppppppbVar15 >> 0x10);
      uStack_d8 = SUB81(pppppppbVar17 + 0x74,0);
      uStack_d7 = (undefined7)((ulong)(pppppppbVar17 + 0x74) >> 8);
      pppppppbVar10 = (byte *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x000100495fa8:
      pppppppbVar10 = (byte *******)((long)pppppppbVar10 + 0x8f7);
code_r0x000100495fac:
      param_4 = &bStack_e0;
code_r0x000100495fb0:
      pppppppbVar10 = (byte *******)thunk_FUN_108856088(pppppppbVar10,param_4);
code_r0x000100495fb4:
      pppppppbVar15 = (byte *******)0x11;
code_r0x000100495fb8:
      unaff_x24 = unaff_x25;
      *param_3 = (byte ******)pppppppbVar15;
      param_3[1] = (byte ******)pppppppbVar10;
    }
    else {
code_r0x000100495fc4:
      pppppppbVar15 = (byte *******)0x5;
code_r0x000100495fc8:
      pppppppbVar17 = pppppppbStack_258;
      if (pppppppbStack_258 != (byte *******)((ulong)pppppppbVar15 | 0x8000000000000000)) {
code_r0x000100496110:
        pppppppbVar15 = (byte *******)&pppppppbStack_128;
        pppppppbVar28 = pppppppbStack_118;
        pppppppbVar29 = pppppppbStack_110;
        ppppppbVar11 = ppppppbStack_108;
        ppppppbVar13 = ppppppbStack_100;
code_r0x000100496118:
        param_3[0x10] = (byte ******)pppppppbVar29;
        param_3[0xf] = (byte ******)pppppppbVar28;
        param_3[0x12] = ppppppbVar13;
        param_3[0x11] = ppppppbVar11;
code_r0x000100496120:
        pppppppbVar29 = (byte *******)pppppppbVar15[7];
        pppppppbVar28 = (byte *******)pppppppbVar15[6];
code_r0x000100496124:
        param_3[0x14] = (byte ******)pppppppbVar29;
        param_3[0x13] = (byte ******)pppppppbVar28;
code_r0x000100496128:
        param_3[0x15] = ppppppbStack_e8;
code_r0x000100496130:
        *param_3 = (byte ******)0x6;
        param_3[1] = (byte ******)unaff_x25;
code_r0x000100496138:
        pppppppbVar19 = pppppppbStack_278;
code_r0x00010049613c:
        param_3[2] = (byte ******)pppppppbVar19;
        param_3[3] = (byte ******)pppppppbStack_2b8;
        pppppppbVar15 = pppppppbStack_270;
code_r0x000100496148:
        param_3[4] = (byte ******)unaff_x27;
        param_3[5] = (byte ******)pppppppbVar15;
code_r0x00010049614c:
        pppppppbVar15 = pppppppbStack_2a8;
        pppppppbVar20 = pppppppbStack_2b0;
code_r0x000100496150:
        param_3[6] = (byte ******)pppppppbVar20;
        param_3[7] = (byte ******)unaff_x28;
code_r0x000100496154:
        pppppppbVar19 = pppppppbStack_290;
code_r0x000100496158:
        param_3[8] = (byte ******)pppppppbVar19;
        param_3[9] = (byte ******)pppppppbVar15;
        pppppppbVar15 = pppppppbStack_2a0;
        pppppppbVar19 = pppppppbStack_298;
code_r0x000100496160:
        param_3[10] = (byte ******)unaff_x20;
        param_3[0xb] = (byte ******)pppppppbVar19;
        param_3[0xc] = (byte ******)pppppppbVar15;
        param_3[0xd] = (byte ******)pppppppbVar17;
code_r0x000100496168:
        param_3[0xe] = (byte ******)pppppppbStack_280;
code_r0x000100496170:
        ppppppbStack_148 = param_3[0x15];
        ppppppbStack_150 = param_3[0x14];
        ppppppbStack_138 = param_3[0x17];
        ppppppbStack_140 = param_3[0x16];
code_r0x000100496178:
        ppppppbVar13 = param_3[0x11];
        ppppppbVar11 = param_3[0x10];
        pppppppbVar29 = (byte *******)param_3[0x13];
        pppppppbVar28 = (byte *******)param_3[0x12];
code_r0x00010049617c:
        ppppppbStack_188 = param_3[0xd];
        ppppppbStack_190 = param_3[0xc];
        ppppppbStack_178 = param_3[0xf];
        ppppppbStack_180 = param_3[0xe];
        ppppppbStack_170 = ppppppbVar11;
        ppppppbStack_168 = ppppppbVar13;
        pppppppbStack_160 = pppppppbVar28;
        pppppppbStack_158 = pppppppbVar29;
code_r0x000100496188:
        ppppppbStack_1a8 = param_3[9];
        ppppppbStack_1b0 = param_3[8];
        ppppppbStack_198 = param_3[0xb];
        ppppppbStack_1a0 = param_3[10];
        ppppppbStack_1c8 = param_3[5];
        ppppppbStack_1d0 = param_3[4];
        ppppppbStack_1b8 = param_3[7];
        ppppppbStack_1c0 = param_3[6];
        ppppppbStack_1e8 = param_3[1];
        ppppppbStack_1f0 = *param_3;
        ppppppbStack_1d8 = param_3[3];
        ppppppbStack_1e0 = param_3[2];
code_r0x0001004961a0:
        pppppppbVar10 = (byte *******)&pppppppbStack_220;
code_r0x0001004961a8:
        FUN_100d34830(pppppppbVar10);
        in_ZR = unaff_x24 == pppppppbVar9;
code_r0x0001004961b0:
        if ((bool)in_ZR) {
          return;
        }
        pppppppbVar15 = (byte *******)((ulong)((long)unaff_x24 - (long)pppppppbVar9) >> 6);
        bStack_e0 = (byte)unaff_x23;
        bStack_df = (byte)((ulong)unaff_x23 >> 8);
        uStack_de = (undefined6)((ulong)unaff_x23 >> 0x10);
code_r0x0001004961c0:
        param_5 = &UNK_10b23a190;
        pppppppbVar10 = (byte *******)((long)pppppppbVar15 + (long)unaff_x23);
        param_4 = &bStack_e0;
code_r0x0001004961d0:
        ppppppbVar11 = (byte ******)thunk_FUN_1087e422c(pppppppbVar10,param_4,param_5);
        goto code_r0x000100496720;
      }
code_r0x000100495fd8:
      pppppppbVar15 = (byte *******)&UNK_108cadb54;
code_r0x000100495fe0:
      pppppppbStack_90 = (byte *******)0x9;
      uStack_98 = pppppppbVar15;
code_r0x000100495fe8:
      pppppppbVar15 = (byte *******)&uStack_98;
      pppppppbVar17 = (byte *******)&UNK_100c7b000;
code_r0x000100495ff0:
      bStack_e0 = (byte)pppppppbVar15;
      bStack_df = (byte)((ulong)pppppppbVar15 >> 8);
      uStack_de = (undefined6)((ulong)pppppppbVar15 >> 0x10);
      uStack_d8 = SUB81(pppppppbVar17 + 0x74,0);
      uStack_d7 = (undefined7)((ulong)(pppppppbVar17 + 0x74) >> 8);
code_r0x000100495ff8:
      pppppppbVar10 = (byte *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_e0);
code_r0x000100496008:
      pppppppbVar15 = (byte *******)0x11;
code_r0x00010049600c:
      *param_3 = (byte ******)pppppppbVar15;
      param_3[1] = (byte ******)pppppppbVar10;
code_r0x000100496010:
      unaff_x24 = unaff_x25;
      unaff_x25 = unaff_x24;
code_r0x000100496014:
      param_3 = pppppppbStack_278;
      if (unaff_x25 != (byte *******)0x0) {
code_r0x00010049601c:
        _free(param_3);
      }
    }
LAB_100496020:
    in_ZR = ((ulong)unaff_x20 & 0x7fffffffffffffff) == 0;
code_r0x000100496024:
    if ((bool)in_ZR) {
      if (((ulong)unaff_x28 & 0x7fffffffffffffff) == 0) goto LAB_100496030;
LAB_1004961e8:
      _free(pppppppbStack_290);
code_r0x0001004961f0:
      unaff_x23 = unaff_x21;
      unaff_x28 = unaff_x26;
      if (((ulong)unaff_x27 & 0x7fffffffffffffff) != 0) goto LAB_100496200;
    }
    else {
LAB_1004961d8:
      _free(pppppppbStack_298);
      if (((ulong)unaff_x28 & 0x7fffffffffffffff) != 0) goto LAB_1004961e8;
LAB_100496030:
      in_ZR = ((ulong)unaff_x27 & 0x7fffffffffffffff) == 0;
code_r0x000100496034:
      unaff_x23 = unaff_x21;
code_r0x000100496038:
      unaff_x28 = unaff_x26;
code_r0x00010049603c:
      if (!(bool)in_ZR) {
LAB_100496200:
        _free(pppppppbStack_270);
      }
    }
LAB_100496040:
    unaff_x21 = pppppppbStack_250;
    pppppppbVar9 = pppppppbStack_248;
code_r0x000100496044:
    unaff_x26 = pppppppbStack_278;
code_r0x000100496048:
    unaff_x25 = (byte *******)((ulong)puStack_288 & 0xffffffff);
    unaff_x20 = (byte *******)((ulong)pppppppbStack_260 & 0xffffffff);
code_r0x000100496050:
    unaff_x27 = (byte *******)((ulong)pppppppbStack_268 & 0xffffffff);
    pppppppbVar25 = pppppppbVar9;
    goto LAB_100496054;
  case 0xb5:
    goto code_r0x000100495f94;
  case 0xb6:
    goto code_r0x000100495fac;
  case 0xb8:
    goto code_r0x000100495fc4;
  case 0xb9:
    goto code_r0x000100495f40;
  case 0xba:
    goto code_r0x000100495fb4;
  case 0xbc:
    goto code_r0x000100495f18;
  case 0xc3:
    goto code_r0x000100495c04;
  case 0xd0:
    goto code_r0x000100496150;
  case 0xd2:
    goto code_r0x0001004960b4;
  case 0xd4:
    goto code_r0x00010049605c;
  case 0xd8:
  case 0xf2:
    goto code_r0x0001004961b0;
  case 0xd9:
    goto code_r0x000100495c50;
  case 0xda:
    goto code_r0x000100495c94;
  case 0xe0:
    goto code_r0x000100496048;
  case 0xe1:
    goto LAB_1004960cc;
  case 0xe3:
    goto code_r0x0001004960a4;
  case 0xe4:
    goto code_r0x0001004960fc;
  case 0xe5:
    goto code_r0x000100496078;
  case 0xe7:
    goto LAB_100496020;
  case 0xe8:
    goto code_r0x000100496050;
  case 0xee:
  case 0xf6:
    goto code_r0x00010049614c;
  case 0xef:
    goto code_r0x000100495c58;
  case 0xf0:
    goto code_r0x000100495c9c;
  case 0xf3:
    goto code_r0x0001004961c0;
  case 0xf5:
    goto code_r0x0001004961a0;
  case 0xf7:
    goto code_r0x0001004961d0;
  case 0xf8:
    goto LAB_1004961e8;
  case 0xf9:
    goto code_r0x0001004961a8;
  case 0xfa:
    goto LAB_100496200;
  case 0xfb:
    goto code_r0x00010049617c;
  case 0xfc:
    goto code_r0x0001004961f0;
  case 0xfd:
    goto code_r0x000100496124;
  case 0xfe:
    goto code_r0x000100496154;
  }
  ppppppbStack_1f0 = (byte ******)CONCAT71(ppppppbStack_1f0._1_7_,uVar14);
code_r0x000100496328:
  ppppppbVar11 = (byte ******)FUN_107c05dcc(&ppppppbStack_1f0,auStack_71,&UNK_10b21c6d0);
  *param_3 = (byte ******)0x11;
  param_3[1] = ppppppbVar11;
  return;
LAB_100496054:
  pppppppbVar15 = (byte *******)0x5;
code_r0x000100496058:
  pppppppbVar15 = (byte *******)((ulong)pppppppbVar15 | 0x8000000000000000);
code_r0x00010049605c:
  in_ZR = pppppppbStack_258 == pppppppbVar15;
code_r0x000100496064:
  if (!(bool)in_ZR) {
LAB_100496068:
    param_3 = (byte *******)&pppppppbStack_128;
code_r0x00010049606c:
    FUN_100de6690(param_3);
  }
  in_ZR = ((ulong)unaff_x24 & 0x7fffffffffffffff) == 0;
code_r0x000100496074:
  if (!(bool)in_ZR) {
code_r0x000100496078:
    if (((ulong)unaff_x25 & 1) != 0) {
code_r0x00010049607c:
      _free(unaff_x26);
    }
  }
LAB_100496084:
  param_3 = (byte *******)0x8000000000000001;
  in_ZR = unaff_x21 == (byte *******)0x8000000000000001;
code_r0x00010049608c:
  iVar26 = 0;
  if (!(bool)in_ZR) {
    iVar26 = (int)unaff_x28;
  }
  in_ZR = iVar26 == 1;
code_r0x000100496094:
  pppppppbVar10 = param_3;
  if ((bool)in_ZR) {
    in_ZR = ((ulong)unaff_x21 & 0x7fffffffffffffff) == 0;
code_r0x00010049609c:
    if (!(bool)in_ZR) {
code_r0x0001004960a0:
      param_3 = pppppppbStack_298;
code_r0x0001004960a4:
      _free(param_3);
    }
  }
LAB_1004960a8:
  in_ZR = unaff_x23 == pppppppbVar10;
code_r0x0001004960ac:
  uVar22 = 0;
  if (!(bool)in_ZR) {
    uVar22 = (uint)unaff_x27;
  }
  pppppppbVar15 = (byte *******)(ulong)uVar22;
code_r0x0001004960b0:
  in_ZR = (int)pppppppbVar15 == 1;
code_r0x0001004960b4:
  param_3 = (byte *******)&bStack_240;
code_r0x0001004960b8:
  pppppppbVar10 = param_3;
  if ((bool)in_ZR) {
code_r0x0001004960bc:
    in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
    pppppppbVar10 = param_3;
code_r0x0001004960c0:
    if (!(bool)in_ZR) {
code_r0x0001004960c4:
      param_3 = pppppppbStack_290;
code_r0x0001004960c8:
      _free(param_3);
    }
  }
LAB_1004960cc:
  pppppppbVar15 = (byte *******)0x8000000000000001;
code_r0x0001004960d0:
  in_ZR = pppppppbVar25 == pppppppbVar15;
code_r0x0001004960d4:
  uVar22 = 0;
  if (!(bool)in_ZR) {
    uVar22 = (uint)unaff_x20;
  }
  pppppppbVar15 = (byte *******)(ulong)uVar22;
code_r0x0001004960d8:
  in_ZR = (int)pppppppbVar15 == 1;
code_r0x0001004960dc:
  param_3 = pppppppbStack_270;
code_r0x0001004960e0:
  if ((bool)in_ZR) {
code_r0x0001004960e4:
    in_ZR = ((ulong)pppppppbVar25 & 0x7fffffffffffffff) == 0;
code_r0x0001004960e8:
    if (!(bool)in_ZR) {
code_r0x0001004960ec:
      _free(param_3);
    }
  }
LAB_1004960f0:
  FUN_100d34830(pppppppbVar10 + 4);
code_r0x0001004960f8:
  pppppppbVar15 = (byte *******)(ulong)bStack_240;
code_r0x0001004960fc:
  in_ZR = (int)pppppppbVar15 == 0x16;
code_r0x000100496100:
  if ((bool)in_ZR) {
    return;
  }
code_r0x000100496104:
  param_3 = (byte *******)&bStack_240;
code_r0x000100496108:
  FUN_100e077ec(param_3);
  return;
}

