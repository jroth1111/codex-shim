
/* WARNING: Type propagation algorithm not settling */

void FUN_100474e04(undefined1 param_1 [16],ulong *param_2,byte *param_3,undefined *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined7 uVar3;
  undefined7 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  ulong uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  byte bVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar22;
  ulong *unaff_x21;
  ulong *puVar23;
  ulong *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong *puVar24;
  ulong *unaff_x26;
  ulong *unaff_x27;
  ulong *puVar25;
  undefined1 *unaff_x29;
  undefined1 *puVar26;
  undefined8 unaff_x30;
  ulong uVar27;
  undefined1 auStack_300 [88];
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  ulong uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  ulong uStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong uStack_220;
  ulong *puStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  long *plStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  byte abStack_71 [17];
  undefined1 *puVar10;
  
  uVar27 = param_1._8_8_;
  uVar11 = param_1._0_8_;
  puVar26 = &stack0xfffffffffffffff0;
  puVar9 = auStack_300 + 0x50;
  puVar24 = &uStack_108;
  bVar15 = *param_3;
  puVar16 = (ulong *)(ulong)bVar15;
  puVar19 = (ulong *)&UNK_108c99742;
  puVar10 = auStack_300 + 0x50;
  puVar8 = auStack_300 + 0x50;
  puVar7 = auStack_300 + 0x50;
  puVar25 = param_2;
  puVar17 = puVar16;
  puVar20 = (ulong *)(&UNK_100474e48 + (ulong)*(ushort *)(&UNK_108c99742 + (long)puVar16 * 2) * 4);
  puVar22 = unaff_x20;
  puVar23 = unaff_x21;
  switch(bVar15) {
  case 0:
    uStack_220 = (ulong)CONCAT61(uStack_220._2_6_,param_3[1]) << 8;
  case 0x37:
  case 199:
    uStack_220 = uStack_220 & 0xffffffffffffff00;
    goto code_r0x00010047566c;
  case 1:
    puStack_218 = (ulong *)(ulong)param_3[1];
  case 0xcb:
code_r0x000100475624:
    bVar15 = 1;
code_r0x000100475628:
    break;
  case 2:
  case 0x3c:
  case 0xd5:
    puStack_218 = (ulong *)(ulong)*(ushort *)(param_3 + 2);
    goto code_r0x000100475624;
  case 3:
  case 0xcd:
    puVar16 = (ulong *)(ulong)*(uint *)(param_3 + 4);
  case 0x90:
  case 0xbc:
    puStack_218 = puVar16;
    goto code_r0x000100475624;
  case 4:
  case 0x92:
  case 0xbe:
  case 0xd2:
    puStack_218 = *(ulong **)(param_3 + 8);
    goto code_r0x000100475624;
  case 5:
  case 0x5c:
  case 0xd3:
    puVar16 = (ulong *)(long)(char)param_3[1];
  case 0xea:
code_r0x000100475660:
    puStack_218 = puVar16;
code_r0x000100475664:
    bVar15 = 2;
    break;
  case 6:
  case 0x38:
  case 0xd0:
    puVar16 = (ulong *)(long)*(short *)(param_3 + 2);
    goto code_r0x000100475660;
  case 7:
  case 99:
  case 0xc6:
    puVar16 = (ulong *)(long)*(int *)(param_3 + 4);
    goto code_r0x000100475660;
  case 8:
  case 0x50:
  case 0x61:
  case 0x84:
  case 0xb0:
    puVar16 = *(ulong **)(param_3 + 8);
    goto code_r0x000100475660;
  case 9:
    uVar11 = (ulong)*(uint *)(param_3 + 4);
  case 0x66:
  case 200:
    puStack_218 = (ulong *)(double)(float)uVar11;
code_r0x000100475654:
    bVar15 = 3;
code_r0x000100475658:
    break;
  case 10:
  case 0x87:
  case 0xb3:
    puStack_218 = *(ulong **)(param_3 + 8);
    goto code_r0x000100475654;
  case 0xb:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
    puVar8 = &stack0xffffffffffffffa0;
    puVar26 = unaff_x29;
  case 0x94:
  case 0xc0:
  case 0xca:
    *(ulong **)(puVar8 + 0x40) = unaff_x20;
    *(ulong **)(puVar8 + 0x48) = unaff_x19;
    *(undefined1 **)(puVar8 + 0x50) = puVar26;
    *(undefined8 *)(puVar8 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar8 + 0x1c) = 0;
    uVar12 = (uint)param_3;
    if (uVar12 < 0x80) {
      puVar8[0x1c] = (byte)param_3;
      uVar18 = 1;
    }
    else {
      bVar15 = (byte)param_3 & 0x3f | 0x80;
      if (uVar12 < 0x800) {
        puVar8[0x1c] = (byte)(uVar12 >> 6) | 0xc0;
        puVar8[0x1d] = bVar15;
        uVar18 = 2;
      }
      else {
        bVar2 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        if (uVar12 < 0x10000) {
          puVar8[0x1c] = (byte)(uVar12 >> 0xc) | 0xe0;
          puVar8[0x1d] = bVar2;
          puVar8[0x1e] = bVar15;
          uVar18 = 3;
        }
        else {
          puVar8[0x1c] = (byte)(uVar12 >> 0x12) | 0xf0;
          puVar8[0x1d] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
          puVar8[0x1e] = bVar2;
          puVar8[0x1f] = bVar15;
          uVar18 = 4;
        }
      }
    }
    *(undefined1 **)(puVar8 + 0x28) = puVar8 + 0x1c;
    *(undefined8 *)(puVar8 + 0x30) = uVar18;
    puVar8[0x20] = 5;
    uVar11 = func_0x000108a4a50c(puVar8 + 0x20,puVar8 + 0x3f,&UNK_10b21c990);
    *param_2 = 0x1d;
    param_2[1] = uVar11;
    return;
  case 0xc:
    param_3 = param_3 + 8;
    puVar10 = &stack0xffffffffffffffa0;
    puVar26 = unaff_x29;
  case 0x8f:
  case 0xbb:
  case 0xcf:
    puVar9 = puVar10 + 0x60;
code_r0x0001004755d4:
    *(ulong **)(puVar9 + -0x30) = unaff_x22;
    *(ulong **)(puVar9 + -0x28) = unaff_x21;
    *(ulong **)(puVar9 + -0x20) = unaff_x20;
    *(ulong **)(puVar9 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar9 + -0x10) = puVar26;
    *(undefined8 *)(puVar9 + -8) = unaff_x30;
    uVar18 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(puVar9 + -0x48) = uVar18;
    *(undefined8 *)(puVar9 + -0x40) = uVar1;
    puVar9[-0x50] = 5;
    uVar11 = func_0x000108a4a50c(puVar9 + -0x50,puVar9 + -0x31,&UNK_10b21c990);
    *param_2 = 0x1d;
    param_2[1] = uVar11;
    if (*(long *)param_3 != 0) {
      _free(uVar18);
    }
    return;
  case 0xd:
  case 0x26:
  case 100:
  case 0x86:
  case 0xaa:
  case 0xb2:
    puStack_218 = *(ulong **)(param_3 + 8);
    uStack_210 = *(ulong *)(param_3 + 0x10);
  case 0x24:
  case 0x30:
  case 0x93:
  case 0xa8:
  case 0xbf:
  case 0xcc:
    bVar15 = 5;
    break;
  case 0xe:
    param_3 = param_3 + 8;
    puVar7 = &stack0xffffffffffffffa0;
    puVar26 = unaff_x29;
  case 0xd1:
    *(ulong **)(puVar7 + 0x30) = unaff_x22;
    *(ulong **)(puVar7 + 0x38) = unaff_x21;
    *(ulong **)(puVar7 + 0x40) = unaff_x20;
    *(ulong **)(puVar7 + 0x48) = unaff_x19;
    *(undefined1 **)(puVar7 + 0x50) = puVar26;
    *(undefined8 *)(puVar7 + 0x58) = unaff_x30;
    uVar18 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(puVar7 + 0x18) = uVar18;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    puVar7[0x10] = 6;
    uVar11 = func_0x000108a4a50c(puVar7 + 0x10,puVar7 + 0x2f,&UNK_10b21c990);
    *param_2 = 0x1d;
    param_2[1] = uVar11;
    if (*(long *)param_3 != 0) {
      _free(uVar18);
    }
    return;
  case 0xf:
  case 0x3a:
    puStack_218 = *(ulong **)(param_3 + 8);
    uStack_210 = *(ulong *)(param_3 + 0x10);
  case 0xc9:
    bVar15 = 6;
code_r0x0001004755f8:
    break;
  case 0x10:
  case 0xd4:
    bVar15 = 8;
    break;
  default:
    unaff_x20 = *(ulong **)(param_3 + 8);
    puStack_218 = (ulong *)unaff_x20[1];
    uStack_220 = *unaff_x20;
    uStack_208 = unaff_x20[3];
    uStack_210 = unaff_x20[2];
    thunk_FUN_108804fc0(param_2,&uStack_220);
    goto code_r0x0001004752e8;
  case 0x12:
  case 0x1a:
  case 0x9e:
    bVar15 = 7;
  case 0x2f:
  case 0x58:
    break;
  case 0x13:
  case 0x56:
    unaff_x20 = *(ulong **)(param_3 + 8);
    puStack_218 = (ulong *)unaff_x20[1];
    uStack_220 = *unaff_x20;
    uVar27 = unaff_x20[3];
    uVar11 = unaff_x20[2];
  case 0x2a:
  case 0x40:
  case 0xae:
    uStack_210 = uVar11;
    uStack_208 = uVar27;
    thunk_FUN_1088290a4(param_2,&uStack_220);
code_r0x0001004752e8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x14:
    unaff_x23 = *(long **)(param_3 + 8);
    unaff_x20 = *(ulong **)(param_3 + 0x10);
    lVar21 = *(long *)(param_3 + 0x18);
    unaff_x19 = unaff_x20 + lVar21 * 4;
    puStack_b0 = (ulong *)0x0;
    unaff_x21 = unaff_x20;
    uStack_d0 = unaff_x20;
    plStack_c0 = unaff_x23;
    puStack_b8 = unaff_x19;
    if (lVar21 != 0) {
      unaff_x21 = unaff_x20 + 4;
      if ((byte)*unaff_x20 == 0x16) goto code_r0x000100475340;
      uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_270._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      uStack_258 = unaff_x20[3];
      uStack_260 = (undefined1)unaff_x20[2];
      uStack_25f = (undefined7)(unaff_x20[2] >> 8);
      puStack_b0 = (ulong *)0x1;
      uStack_270._0_1_ = (byte)*unaff_x20;
      puStack_c8 = unaff_x21;
      FUN_1004b62d4(&uStack_108,&uStack_270);
      unaff_x24 = CONCAT71(uStack_108._1_7_,(byte)uStack_108);
      unaff_x22 = (ulong *)CONCAT71(uStack_ff,uStack_100);
      if (unaff_x24 == 0x8000000000000000) goto code_r0x00010047535c;
      if (lVar21 != 1) {
        unaff_x26 = (ulong *)CONCAT71(uStack_f7,uStack_f8);
        unaff_x21 = unaff_x20 + 8;
        bVar15 = (byte)unaff_x20[4];
        puStack_c8 = unaff_x21;
        if (bVar15 != 0x16) goto code_r0x000100475770;
      }
      puVar25 = (ulong *)thunk_FUN_1087e422c(1,&UNK_10b22ed88,&UNK_10b20a590);
      goto code_r0x000100475420;
    }
code_r0x000100475340:
    puStack_c8 = unaff_x21;
    unaff_x22 = (ulong *)thunk_FUN_1087e422c(0,&UNK_10b22ed88,&UNK_10b20a590);
code_r0x00010047535c:
    *param_2 = 0x1d;
    param_2[1] = (ulong)unaff_x22;
    goto code_r0x000100475364;
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
    puStack_240 = *(ulong **)(param_3 + 8);
    puStack_250 = *(ulong **)(param_3 + 0x10);
    lVar21 = *(long *)(param_3 + 0x18);
    puStack_238 = puStack_250 + lVar21 * 8;
    uStack_270._0_1_ = 0x16;
    puStack_230 = (ulong *)0x0;
    puStack_248 = puStack_250;
    if (lVar21 == 0) {
      puStack_278 = (ulong *)0x8000000000000000;
      uStack_108._0_1_ = 0;
      uStack_108._1_7_ = 0x80000000000000;
      puVar19 = unaff_x21;
code_r0x000100475468:
      unaff_x21 = puVar19;
      unaff_x19 = &uStack_270;
      uStack_98 = (ulong *)&UNK_108cb88ab;
      puStack_90 = (ulong *)0xd;
      uStack_d0 = &uStack_98;
      puStack_c8 = (ulong *)&DAT_100c7b3a0;
      puVar24 = (ulong *)0x0;
      param_2 = (ulong *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
      goto LAB_1004756bc;
    }
    unaff_x22 = (ulong *)0x0;
    unaff_x20 = (ulong *)((ulong)&uStack_d0 | 1);
    unaff_x19 = (ulong *)((ulong)&uStack_270 | 1);
    puStack_280 = (ulong *)((ulong)&uStack_98 | 1);
    puStack_2a8 = (ulong *)((lVar21 * 0x40 - 0x40U >> 6) + 1);
    puStack_278 = (ulong *)0x8000000000000000;
    puVar24 = (ulong *)0x8000000000000000;
    puVar25 = (ulong *)0x8000000000000000;
    unaff_x27 = puStack_238;
    unaff_x26 = puStack_250;
    puStack_2a0 = param_2;
    do {
      plVar5 = plStack_c0;
      puVar16 = puStack_c8;
      puVar19 = uStack_d0;
      unaff_x21 = unaff_x26 + 8;
      bVar15 = (byte)*unaff_x26;
      puVar22 = unaff_x22;
      if (bVar15 == 0x16) break;
      uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar15);
      puVar17 = uStack_d0;
      uVar11 = unaff_x26[2];
      *(ulong *)((long)unaff_x20 + 0x17) = unaff_x26[3];
      *(ulong *)((long)unaff_x20 + 0xf) = uVar11;
      uVar11 = *(ulong *)((long)unaff_x26 + 1);
      unaff_x20[1] = *(ulong *)((long)unaff_x26 + 9);
      *unaff_x20 = uVar11;
      uStack_258 = unaff_x26[7];
      uStack_268 = (undefined1)unaff_x26[5];
      uStack_267 = (undefined7)(unaff_x26[5] >> 8);
      uStack_270._0_1_ = (byte)unaff_x26[4];
      uStack_270._1_7_ = (undefined7)(unaff_x26[4] >> 8);
      uStack_260 = (undefined1)unaff_x26[6];
      uStack_25f = (undefined7)(unaff_x26[6] >> 8);
      puVar22 = unaff_x20;
      puVar23 = unaff_x21;
      if (bVar15 < 0xd) {
        if (bVar15 == 1) {
          uStack_d0._1_1_ = SUB81(puVar19,1);
          uVar14 = 1;
          if (uStack_d0._1_1_ != '\x01') {
            uVar14 = 2;
          }
          uVar13 = 0;
          if (uStack_d0._1_1_ != '\0') {
            uVar13 = uVar14;
          }
code_r0x00010047514c:
          uStack_98 = (ulong *)((ulong)CONCAT61(uStack_98._2_6_,uVar13) << 8);
          uStack_d0 = puVar17;
          goto code_r0x000100475154;
        }
        if (bVar15 == 4) {
          uVar14 = 1;
          if (puStack_c8 != (ulong *)0x1) {
            uVar14 = 2;
          }
          uVar13 = 0;
          if (puStack_c8 != (ulong *)0x0) {
            uVar13 = uVar14;
          }
          goto code_r0x00010047514c;
        }
        if (bVar15 == 0xc) {
          if (puStack_b8 == (ulong *)0x12) {
            uVar13 = 1;
            if ((*plStack_c0 != 0x696f706b63656863 || plStack_c0[1] != 0x6f6c7961705f746e) ||
                (short)plStack_c0[2] != 0x6461) {
              uVar13 = 2;
            }
            uStack_98 = (ulong *)((ulong)CONCAT61(uStack_98._2_6_,uVar13) << 8);
          }
          else if (puStack_b8 == (ulong *)0xd) {
            uVar13 = 2;
            if (*plStack_c0 == 0x69746361706d6f63 &&
                *(long *)((long)plStack_c0 + 5) == 0x64695f6e6f697463) {
              uVar13 = 0;
            }
            uStack_98 = (ulong *)((ulong)CONCAT61(uStack_98._2_6_,uVar13) << 8);
          }
          else {
            uStack_98 = (ulong *)CONCAT62(uStack_98._2_6_,0x200);
          }
          goto joined_r0x000100475130;
        }
code_r0x000100475288:
        param_2 = &uStack_d0;
        param_3 = abStack_71;
        param_4 = &UNK_10b20f000;
code_r0x000100475294:
        puStack_90 = (ulong *)thunk_FUN_108855b04(param_2,param_3,param_4);
        puVar16 = (ulong *)0x1;
code_r0x0001004752a4:
        uStack_98 = (ulong *)CONCAT71(uStack_98._1_7_,(char)puVar16);
code_r0x0001004752a8:
        puVar22 = unaff_x20;
        puVar23 = unaff_x21;
        puVar17 = puStack_290;
        puVar20 = puStack_288;
        bVar15 = (byte)uStack_270;
        bVar2 = (byte)uStack_108;
        uVar3 = uStack_108._1_7_;
        uVar13 = uStack_100;
        uVar4 = uStack_ff;
        puVar19 = uStack_98;
        uStack_98 = puVar16;
      }
      else {
        if (bVar15 == 0xd) {
          if (plStack_c0 == (long *)0x12) {
            uVar13 = 1;
            if ((*puStack_c8 != 0x696f706b63656863 || puStack_c8[1] != 0x6f6c7961705f746e) ||
                (short)puStack_c8[2] != 0x6461) {
              uVar13 = 2;
            }
          }
          else if (plStack_c0 == (long *)0xd) {
            uVar13 = 2;
            if (*puStack_c8 == 0x69746361706d6f63 &&
                *(long *)((long)puStack_c8 + 5) == 0x64695f6e6f697463) {
              uVar13 = 0;
            }
          }
          else {
            uVar13 = 2;
          }
          goto code_r0x00010047514c;
        }
        if (bVar15 == 0xe) {
          FUN_100b496c8(&uStack_98,plStack_c0);
joined_r0x000100475130:
          puVar17 = puStack_290;
          puVar20 = puStack_288;
          bVar15 = (byte)uStack_270;
          bVar2 = (byte)uStack_108;
          uVar3 = uStack_108._1_7_;
          uVar13 = uStack_100;
          uVar4 = uStack_ff;
          puVar19 = uStack_98;
          if (puVar16 != (ulong *)0x0) {
            _free(plVar5);
            puVar17 = puStack_290;
            puVar20 = puStack_288;
            bVar15 = (byte)uStack_270;
            bVar2 = (byte)uStack_108;
            uVar3 = uStack_108._1_7_;
            uVar13 = uStack_100;
            uVar4 = uStack_ff;
            puVar19 = uStack_98;
          }
          goto joined_r0x0001004752ac;
        }
        if (bVar15 != 0xf) goto code_r0x000100475288;
        FUN_100b496c8(&uStack_98,puStack_c8,plStack_c0);
code_r0x000100475154:
        FUN_100e077ec(&uStack_d0);
        puVar17 = puStack_290;
        puVar20 = puStack_288;
        bVar15 = (byte)uStack_270;
        bVar2 = (byte)uStack_108;
        uVar3 = uStack_108._1_7_;
        uVar13 = uStack_100;
        uVar4 = uStack_ff;
        puVar19 = uStack_98;
      }
joined_r0x0001004752ac:
      unaff_x20 = puVar20;
      unaff_x21 = puVar17;
      puStack_288 = unaff_x20;
      uStack_270._0_1_ = bVar15;
      if (((ulong)uStack_98 & 1) != 0) {
        puStack_230 = (ulong *)((long)unaff_x22 + 1);
        puStack_248 = puVar23;
        uStack_98 = puVar19;
        goto code_r0x0001004752c0;
      }
      uStack_98._1_1_ = (char)((ulong)puVar19 >> 8);
      uStack_108._0_1_ = (byte)puVar25;
      uStack_108._1_7_ = (undefined7)((ulong)puVar25 >> 8);
      uStack_100 = SUB81(unaff_x21,0);
      uStack_ff = (undefined7)((ulong)unaff_x21 >> 8);
      puStack_290 = unaff_x21;
      if (uStack_98._1_1_ == '\0') {
        if (puVar24 != (ulong *)0x8000000000000000) {
          puStack_230 = (ulong *)((long)unaff_x22 + 1);
          uStack_98 = (ulong *)&UNK_108cb88ab;
          puStack_90 = (ulong *)0xd;
          uStack_d0 = &uStack_98;
          puStack_c8 = (ulong *)&DAT_100c7b3a0;
          puStack_248 = puVar23;
          param_2 = (ulong *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
          unaff_x19 = &uStack_270;
          puVar25 = puStack_2a0;
          goto LAB_1004756bc;
        }
        uStack_270._0_1_ = 0x16;
        if (bVar15 == 0x16) {
          puStack_230 = (ulong *)((long)unaff_x22 + 1);
          puStack_248 = puVar23;
          uStack_98 = puVar19;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100475938;
        }
        uVar11 = *unaff_x19;
        puVar22[1] = unaff_x19[1];
        *puVar22 = uVar11;
        uVar18 = *(undefined8 *)((long)unaff_x19 + 0xf);
        *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
        *(undefined8 *)((long)puVar22 + 0xf) = uVar18;
        uStack_d0._1_7_ = (undefined7)((ulong)uStack_d0 >> 8);
        uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar15);
        uStack_108._0_1_ = bVar2;
        uStack_108._1_7_ = uVar3;
        uStack_100 = uVar13;
        uStack_ff = uVar4;
        uStack_98 = puVar19;
        FUN_1004b62d4(&uStack_98,&uStack_d0);
code_r0x000100475240:
        if (uStack_98 == (ulong *)0x8000000000000000) goto code_r0x000100475694;
        puStack_288 = puStack_90;
        uStack_298 = uStack_88;
        unaff_x20 = puVar22;
        puVar24 = uStack_98;
        unaff_x21 = unaff_x27;
      }
      else if (uStack_98._1_1_ == '\x01') {
        if (puStack_278 != (ulong *)0x8000000000000000) goto code_r0x0001004757f0;
        uStack_270._0_1_ = 0x16;
        if (bVar15 == 0x16) {
          puStack_230 = (ulong *)((long)unaff_x22 + 1);
          puStack_278 = (ulong *)0x8000000000000000;
          puStack_248 = puVar23;
          uStack_98 = puVar19;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100475938:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10047593c);
          (*pcVar6)();
        }
        uVar11 = *unaff_x19;
        puStack_280[1] = unaff_x19[1];
        *puStack_280 = uVar11;
        uVar18 = *(undefined8 *)((long)unaff_x19 + 0xf);
        *(undefined8 *)((long)puStack_280 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
        *(undefined8 *)((long)puStack_280 + 0xf) = uVar18;
        uStack_98._1_7_ = (undefined7)((ulong)puVar19 >> 8);
        uStack_98 = (ulong *)CONCAT71(uStack_98._1_7_,bVar15);
        puStack_278 = (ulong *)0x8000000000000000;
        uStack_108._0_1_ = bVar2;
        uStack_108._1_7_ = uVar3;
        uStack_100 = uVar13;
        uStack_ff = uVar4;
        FUN_100b1671c(&uStack_d0,&uStack_98);
        if (uStack_d0 == (ulong *)0x8000000000000000) goto code_r0x000100475738;
        puStack_290 = puStack_c8;
        puStack_f0 = puStack_b8;
        uStack_e0 = uStack_a8;
        puStack_e8 = puStack_b0;
        uStack_f8 = SUB81(plStack_c0,0);
        uStack_f7 = (undefined7)((ulong)plStack_c0 >> 8);
        uStack_d8 = uStack_a0;
        unaff_x20 = puVar22;
        unaff_x21 = unaff_x27;
        puVar25 = uStack_d0;
        puStack_278 = uStack_d0;
      }
      else {
        uStack_270._0_1_ = 0x16;
        in_ZR = bVar15 == 0x16;
        uStack_108._0_1_ = bVar2;
        uStack_108._1_7_ = uVar3;
        uStack_100 = uVar13;
        uStack_ff = uVar4;
        uStack_98 = puVar19;
code_r0x000100475264:
        if ((bool)in_ZR) {
          puStack_230 = (ulong *)((long)unaff_x22 + 1);
          uStack_108._0_1_ = (byte)puVar25;
          uStack_108._1_7_ = (undefined7)((ulong)puVar25 >> 8);
          uStack_100 = SUB81(puStack_290,0);
          uStack_ff = (undefined7)((ulong)puStack_290 >> 8);
          puStack_248 = puVar23;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100475938;
        }
        uVar11 = *unaff_x19;
        puVar22[1] = unaff_x19[1];
        *puVar22 = uVar11;
        uVar18 = *(undefined8 *)((long)unaff_x19 + 0xf);
        *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
        *(undefined8 *)((long)puVar22 + 0xf) = uVar18;
        uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar15);
code_r0x00010047527c:
        FUN_100e077ec(&uStack_d0);
code_r0x000100475284:
        unaff_x20 = puVar22;
        unaff_x21 = unaff_x27;
      }
      puVar19 = unaff_x26 + 8;
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
      puVar22 = puStack_2a8;
      unaff_x27 = unaff_x21;
      unaff_x26 = puVar23;
    } while (puVar19 != unaff_x21);
    puVar23 = puStack_288;
    puVar16 = puStack_2a0;
    uStack_108._0_1_ = (byte)puVar25;
    uStack_108._1_7_ = (undefined7)((ulong)puVar25 >> 8);
    uStack_100 = SUB81(puStack_290,0);
    uStack_ff = (undefined7)((ulong)puStack_290 >> 8);
    unaff_x20 = puStack_288;
    puVar19 = puStack_290;
    puVar25 = puStack_2a0;
    puStack_248 = unaff_x21;
    puStack_230 = puVar22;
    if (puVar24 == (ulong *)0x8000000000000000) goto code_r0x000100475468;
    if (puStack_278 == (ulong *)0x8000000000000000) {
      uStack_98 = (ulong *)&UNK_108cbac64;
      puStack_90 = (ulong *)0x12;
      uStack_d0 = &uStack_98;
      puStack_c8 = (ulong *)&DAT_100c7b3a0;
      uVar11 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
      *puVar16 = 0x1d;
      puVar16[1] = uVar11;
      if (puVar24 != (ulong *)0x0) {
        _free(puVar23);
      }
      unaff_x19 = &uStack_270;
      goto LAB_1004756fc;
    }
    puStack_2a0[7] = (ulong)puStack_f0;
    puStack_2a0[6] = CONCAT71(uStack_f7,uStack_f8);
    puStack_2a0[9] = uStack_e0;
    puStack_2a0[8] = (ulong)puStack_e8;
    puStack_2a0[10] = uStack_d8;
    *puStack_2a0 = 0x19;
    puStack_2a0[1] = (ulong)puVar24;
    puStack_2a0[2] = (ulong)puStack_288;
    puStack_2a0[3] = uStack_298;
    puStack_2a0[4] = (ulong)puStack_278;
    puStack_2a0[5] = (ulong)puStack_290;
    _memcpy(&uStack_220,puStack_2a0,0x118);
    uVar11 = FUN_100fbc67c(&uStack_270);
    if (uVar11 == 0) goto LAB_100475718;
    *puVar16 = 0x1d;
    puVar16[1] = uVar11;
    goto code_r0x000100475544;
  case 0x16:
  case 0x34:
  case 0x51:
  case 0x9a:
    goto code_r0x0001004756f0;
  case 0x17:
  case 0x45:
  case 0x9b:
    goto code_r0x000100475700;
  case 0x18:
  case 0x39:
  case 0x5e:
  case 0x9c:
    goto code_r0x0001004756c8;
  case 0x19:
  case 0x36:
  case 0x60:
  case 0x9d:
  case 0xe5:
  case 0xfb:
    goto code_r0x0001004756e0;
  case 0x1b:
  case 0x42:
  case 0x9f:
    goto code_r0x000100475710;
  case 0x1c:
  case 0x70:
  case 0xa0:
    goto code_r0x000100475728;
  case 0x1d:
  case 0x44:
  case 0xa1:
    goto code_r0x0001004756e8;
  case 0x1e:
  case 0x71:
  case 0xa2:
    goto code_r0x000100475740;
  case 0x1f:
  case 0xa3:
    goto LAB_1004756bc;
  case 0x20:
  case 0x47:
  case 0x6a:
  case 0x7d:
  case 0xa4:
    goto code_r0x000100475730;
  case 0x21:
  case 0xa5:
    goto code_r0x000100475664;
  case 0x22:
  case 0x7e:
  case 0x8a:
  case 0xa6:
  case 0xb6:
code_r0x000100475694:
    puVar16 = (ulong *)((long)unaff_x22 + 1);
  case 0x33:
    puStack_248 = puVar23;
code_r0x00010047569c:
    puStack_230 = puVar16;
code_r0x0001004756a0:
    unaff_x21 = puStack_290;
code_r0x0001004756a4:
    uStack_108._0_1_ = (byte)puVar25;
    uStack_108._1_7_ = (undefined7)((ulong)puVar25 >> 8);
    uStack_100 = SUB81(unaff_x21,0);
    uStack_ff = (undefined7)((ulong)unaff_x21 >> 8);
    puVar24 = (ulong *)0x0;
    goto code_r0x0001004756ac;
  case 0x23:
  case 0xa7:
    goto LAB_100475718;
  case 0x25:
  case 0x62:
  case 0xa9:
    goto code_r0x0001004756d0;
  case 0x28:
  case 0x78:
  case 0xac:
    goto code_r0x000100475790;
  case 0x29:
  case 0x3f:
  case 0xad:
    goto code_r0x000100475294;
  case 0x2c:
  case 0x59:
    goto code_r0x0001004756a0;
  case 0x2d:
  case 0x5d:
  case 0xe0:
  case 0xf6:
    goto code_r0x0001004756b0;
  case 0x2e:
    goto code_r0x000100475678;
  case 0x31:
    goto code_r0x0001004756c0;
  case 0x32:
    goto code_r0x0001004756d8;
  case 0x35:
  case 0x85:
  case 0xb1:
    goto code_r0x00010047566c;
  case 0x3b:
  case 0x5b:
    goto code_r0x000100475680;
  case 0x3e:
  case 0xdd:
  case 0xf3:
    goto code_r0x000100475724;
  case 0x43:
    goto code_r0x000100475720;
  case 0x46:
  case 0x8c:
  case 0xb8:
    goto code_r0x0001004756ac;
  case 0x48:
  case 0x75:
    goto code_r0x000100475748;
  case 0x49:
    goto code_r0x000100475708;
  case 0x4a:
  case 0x6f:
    goto code_r0x000100475760;
  case 0x4b:
    goto LAB_1004756dc;
  case 0x4c:
  case 0x6e:
    goto code_r0x000100475750;
  case 0x4d:
  case 0x91:
  case 0xbd:
    goto code_r0x000100475684;
  case 0x4e:
    goto code_r0x0001004756b4;
  case 0x4f:
code_r0x000100475738:
    puVar16 = (ulong *)((long)unaff_x22 + 1);
  case 0xe9:
  case 0xff:
    puVar17 = puVar16;
    puStack_248 = puVar23;
code_r0x000100475740:
    puVar16 = puStack_c8;
    puStack_230 = puVar17;
code_r0x000100475748:
    puVar19 = (ulong *)0x1d;
code_r0x00010047574c:
    puVar20 = puStack_2a0;
code_r0x000100475750:
    *puVar20 = (ulong)puVar19;
    puVar20[1] = (ulong)puVar16;
code_r0x000100475754:
    unaff_x19 = &uStack_270;
    in_ZR = ((ulong)puVar24 & 0x7fffffffffffffff) == 0;
    unaff_x20 = puStack_288;
code_r0x000100475760:
    if (!(bool)in_ZR) goto LAB_100475764;
    goto LAB_1004756fc;
  case 0x52:
  case 0x8b:
  case 0xb7:
  case 0xce:
    goto code_r0x000100475654;
  case 0x54:
    goto code_r0x0001004757b0;
  case 0x55:
  case 0xda:
    goto code_r0x000100475284;
  case 0x5a:
    break;
  case 0x5f:
  case 0xe7:
  case 0xfd:
    goto code_r0x000100475688;
  case 0x65:
  case 0xe8:
  case 0xfe:
    goto code_r0x0001004756b8;
  case 0x67:
    goto code_r0x000100475670;
  case 0x68:
    goto code_r0x0001004755d4;
  case 0x6b:
    goto code_r0x00010047527c;
  case 0x6c:
code_r0x0001004752c0:
    uStack_108._0_1_ = (byte)puVar25;
    uStack_108._1_7_ = (undefined7)((ulong)puVar25 >> 8);
    uStack_100 = SUB81(unaff_x21,0);
    uStack_ff = (undefined7)((ulong)unaff_x21 >> 8);
code_r0x0001004756ac:
    param_2 = puStack_90;
code_r0x0001004756b0:
    puVar25 = puStack_2a0;
code_r0x0001004756b4:
    unaff_x20 = puStack_288;
code_r0x0001004756b8:
    unaff_x19 = &uStack_270;
LAB_1004756bc:
    puVar16 = (ulong *)0x1d;
code_r0x0001004756c0:
    *puVar25 = (ulong)puVar16;
    puVar25[1] = (ulong)param_2;
code_r0x0001004756c4:
    puVar16 = (ulong *)0x8000000000000000;
code_r0x0001004756c8:
    in_ZR = puStack_278 == puVar16;
    puVar19 = puStack_278;
code_r0x0001004756d0:
    puVar16 = puVar19;
    if (!(bool)in_ZR) {
code_r0x0001004756d8:
      puStack_290 = unaff_x21;
joined_r0x000100475848:
      puVar17 = puStack_f0;
      unaff_x21 = puStack_290;
      if (puVar16 != (ulong *)0x0) {
LAB_1004756dc:
        param_2 = unaff_x21;
code_r0x0001004756e0:
        _free(param_2);
        puVar17 = puStack_f0;
      }
code_r0x0001004756e8:
      if (puVar17 != (ulong *)0x0) {
code_r0x0001004756ec:
        param_2 = puStack_e8;
code_r0x0001004756f0:
        _free(param_2);
      }
    }
LAB_1004756f4:
    if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
LAB_100475764:
      _free(unaff_x20);
    }
LAB_1004756fc:
    param_2 = unaff_x19 + 4;
code_r0x000100475700:
    FUN_100d34830(param_2);
code_r0x000100475704:
    puVar16 = (ulong *)(ulong)(byte)uStack_270;
code_r0x000100475708:
    in_ZR = (int)puVar16 == 0x16;
code_r0x00010047570c:
    if (!(bool)in_ZR) {
code_r0x000100475710:
      param_2 = &uStack_270;
code_r0x000100475714:
      FUN_100e077ec(param_2);
    }
    goto LAB_100475718;
  case 0x72:
  case 0xde:
  case 0xf4:
    goto code_r0x0001004756ec;
  case 0x73:
code_r0x000100475770:
    uStack_ff = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
    uStack_108._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
    uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
  case 0x7b:
    puStack_f0 = (ulong *)unaff_x20[7];
    uStack_f8 = (undefined1)unaff_x20[6];
    uStack_f7 = (undefined7)(unaff_x20[6] >> 8);
    puStack_b0 = (ulong *)0x2;
code_r0x000100475788:
    uStack_108._0_1_ = bVar15;
    puVar25 = &uStack_270;
code_r0x000100475790:
    FUN_100b1671c(puVar25,&uStack_108);
    puVar16 = (ulong *)CONCAT71(uStack_270._1_7_,(byte)uStack_270);
    puVar25 = (ulong *)CONCAT71(uStack_267,uStack_268);
    puVar19 = (ulong *)0x8000000000000000;
code_r0x0001004757a0:
    if (puVar16 == puVar19) {
code_r0x000100475420:
      *param_2 = 0x1d;
      param_2[1] = (ulong)puVar25;
      if (unaff_x24 != 0) {
        _free(unaff_x22);
      }
code_r0x000100475364:
      lVar21 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar21 = lVar21 + -1, lVar21 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (long *)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      param_2[7] = uStack_258;
      param_2[6] = CONCAT71(uStack_25f,uStack_260);
      param_2[9] = (ulong)puStack_248;
      param_2[8] = (ulong)puStack_250;
code_r0x0001004757b0:
      puVar19 = puStack_240;
code_r0x0001004757b4:
      param_2[10] = (ulong)puVar19;
      *param_2 = 0x19;
      param_2[1] = unaff_x24;
      param_2[2] = (ulong)unaff_x22;
      param_2[3] = (ulong)unaff_x26;
      param_2[4] = (ulong)puVar16;
      param_2[5] = (ulong)puVar25;
      _memcpy(&uStack_220,param_2,0x118);
      uVar11 = FUN_100fbc738(&uStack_d0);
      if (uVar11 != 0) {
        *param_2 = 0x1d;
        param_2[1] = uVar11;
code_r0x000100475544:
        param_2 = &uStack_220;
code_r0x000100475548:
        FUN_100e35e0c(param_2);
      }
    }
    goto LAB_100475718;
  case 0x74:
    goto code_r0x000100475788;
  case 0x76:
    goto code_r0x0001004757a0;
  case 0x77:
    goto code_r0x00010047571c;
  case 0x79:
    goto code_r0x0001004756c4;
  case 0x7a:
  case 0xeb:
    goto LAB_1004756f4;
  case 0x7c:
  case 0x8e:
  case 0xba:
    goto code_r0x00010047569c;
  case 0x80:
code_r0x0001004757f0:
    unaff_x20 = puStack_288;
    puStack_230 = (ulong *)((long)unaff_x22 + 1);
    uStack_108._0_1_ = (byte)puVar25;
    uStack_108._1_7_ = (undefined7)((ulong)puVar25 >> 8);
    uStack_100 = SUB81(puStack_290,0);
    uStack_ff = (undefined7)((ulong)puStack_290 >> 8);
    uStack_98 = (ulong *)&UNK_108cbac64;
    puStack_90 = (ulong *)0x12;
    uStack_d0 = &uStack_98;
    puStack_c8 = (ulong *)&DAT_100c7b3a0;
    puStack_248 = puVar23;
    uVar11 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
    unaff_x19 = &uStack_270;
    *puStack_2a0 = 0x1d;
    puStack_2a0[1] = uVar11;
    puVar16 = puStack_278;
    goto joined_r0x000100475848;
  case 0x81:
  case 0xef:
    goto code_r0x0001004752a4;
  case 0x82:
  case 0xf0:
    goto code_r0x0001004752e8;
  case 0x88:
  case 0xb4:
    goto code_r0x0001004755f8;
  case 0x89:
  case 0xb5:
    goto code_r0x00010047567c;
  case 0x8d:
  case 0xb9:
    goto code_r0x000100475628;
  case 0x96:
  case 0xc2:
    goto LAB_1004756fc;
  case 0x97:
  case 0xc3:
    goto code_r0x000100475264;
  case 0x98:
  case 0xc4:
    goto code_r0x0001004752a8;
  case 0xd6:
    goto code_r0x000100475548;
  case 0xd8:
    goto code_r0x0001004756a4;
  case 0xd9:
    goto code_r0x000100475240;
  case 0xdc:
  case 0xf2:
    goto code_r0x000100475714;
  case 0xdf:
  case 0xf5:
    goto code_r0x000100475704;
  case 0xe1:
  case 0xf7:
    goto code_r0x000100475734;
  case 0xe2:
  case 0xf8:
    goto code_r0x00010047574c;
  case 0xe3:
  case 0xf9:
    goto code_r0x00010047570c;
  case 0xe4:
  case 0xfa:
    goto LAB_100475764;
  case 0xe6:
  case 0xfc:
    goto code_r0x000100475754;
  case 0xec:
    goto code_r0x000100475658;
  case 0xee:
    goto code_r0x0001004757b4;
  }
  uStack_220 = CONCAT71(uStack_220._1_7_,bVar15);
code_r0x00010047566c:
  param_4 = &UNK_10b21c000;
code_r0x000100475670:
  param_4 = param_4 + 0x990;
  puVar25 = &uStack_220;
code_r0x000100475678:
  param_3 = abStack_71;
code_r0x00010047567c:
  puVar25 = (ulong *)FUN_107c05dcc(puVar25,param_3,param_4);
code_r0x000100475680:
  puVar16 = (ulong *)0x1d;
code_r0x000100475684:
  *param_2 = (ulong)puVar16;
  param_2[1] = (ulong)puVar25;
code_r0x000100475688:
LAB_100475718:
code_r0x00010047571c:
code_r0x000100475720:
code_r0x000100475724:
code_r0x000100475728:
code_r0x000100475730:
code_r0x000100475734:
  return;
}

