
/* WARNING: Type propagation algorithm not settling */

void FUN_1004ab534(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  code *pcVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  undefined1 in_ZR;
  ulong ******ppppppuVar15;
  ulong *******pppppppuVar16;
  ulong ******ppppppuVar17;
  uint uVar18;
  byte bVar19;
  ulong *******pppppppuVar20;
  undefined8 uVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  int iVar24;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  long lVar25;
  ulong *******pppppppuVar26;
  ulong *******unaff_x22;
  ulong *******pppppppuVar27;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined8 unaff_x30;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  ulong *******pppppppuVar32;
  byte abStack_320 [80];
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  uint uStack_2ac;
  ulong *******pppppppuStack_2a8;
  ulong ******ppppppuStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong *******pppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong ******ppppppuStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
  ulong ******ppppppuStack_238;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  undefined8 uStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar14;
  
  pppppppuVar32 = param_2._8_8_;
  pppppppuVar31 = param_2._0_8_;
  pppppppuVar30 = param_1._8_8_;
  pppppppuVar29 = param_1._0_8_;
  puVar28 = &stack0xfffffffffffffff0;
  pppppppuVar10 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar13 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar5 = (ulong *******)&pppppppuStack_2d0;
  bVar19 = *(byte *)param_4;
  pppppppuVar20 = (ulong *******)(ulong)bVar19;
  pppppppuVar22 = (ulong *******)&UNK_108c9a2b0;
  pppppppuVar23 =
       (ulong *******)
       (&UNK_1004ab574 + (ulong)*(ushort *)(&UNK_108c9a2b0 + (long)pppppppuVar20 * 2) * 4);
  pppppppuVar12 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar14 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar7 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar8 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar9 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar11 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar3 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar4 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar6 = (ulong *******)&pppppppuStack_2d0;
  pppppppuVar16 = param_3;
  pppppppuVar26 = unaff_x21;
  pppppppuVar27 = unaff_x22;
  switch(bVar19) {
  case 0:
  case 0x52:
    ppppppuStack_250 =
         (ulong ******)((ulong)CONCAT61(ppppppuStack_250._2_6_,*(byte *)((long)param_4 + 1)) << 8);
  case 0x50:
    ppppppuStack_250 = (ulong ******)((ulong)ppppppuStack_250 & 0xffffffffffffff00);
code_r0x0001004abd98:
    goto code_r0x0001004abdec;
  case 1:
    pppppppuVar20 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
    break;
  case 2:
    pppppppuVar20 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x67:
  case 0x93:
  case 0x9d:
    break;
  case 3:
    pppppppuVar20 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x5f:
  case 0x72:
  case 0x8b:
  case 0xea:
    break;
  case 4:
  case 0x7e:
    pppppppuVar20 = (ulong *******)param_4[1];
  case 100:
  case 0x90:
    break;
  case 5:
    pppppppuVar20 = (ulong *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x65:
  case 0x77:
  case 0x91:
  case 0xa0:
    pppppppuStack_248 = pppppppuVar20;
code_r0x0001004abde4:
    bVar19 = 2;
    goto code_r0x0001004abde8;
  case 6:
  case 0x7d:
    pppppppuVar20 = (ulong *******)(long)*(short *)((long)param_4 + 2);
  case 0x62:
  case 0x8e:
  case 0xa2:
  case 0xd1:
    pppppppuStack_248 = pppppppuVar20;
    goto code_r0x0001004abde4;
  case 7:
    pppppppuVar20 = (ulong *******)(long)*(int *)((long)param_4 + 4);
  case 0x58:
  case 0x7a:
  case 0x84:
  case 0x9b:
    pppppppuStack_248 = pppppppuVar20;
    goto code_r0x0001004abde4;
  case 8:
  case 0x75:
    pppppppuStack_248 = (ulong *******)param_4[1];
    goto code_r0x0001004abde4;
  case 9:
  case 0x79:
  case 0xa9:
    pppppppuVar29 = (ulong *******)(double)*(float *)((long)param_4 + 4);
  case 0x5a:
  case 0x86:
  case 0xe0:
code_r0x0001004abdd0:
    pppppppuStack_248 = pppppppuVar29;
code_r0x0001004abdd4:
    bVar19 = 3;
code_r0x0001004abdd8:
    goto code_r0x0001004abde8;
  case 10:
    pppppppuVar29 = (ulong *******)param_4[1];
    goto code_r0x0001004abdd0;
  case 0xb:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0xf8:
    pppppppuVar7 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
code_r0x0001004abd10:
    unaff_x20 = *(ulong ********)((long)pppppppuVar7 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar7 + 0x48);
    pppppppuVar8 = pppppppuVar7;
code_r0x0001004abd14:
    pppppppuVar9 = pppppppuVar8;
code_r0x0001004abd1c:
    pppppppuVar11 = pppppppuVar9;
code_r0x0001004abd20:
    pppppppuVar10 = (ulong *******)((long)pppppppuVar11 + 0x60);
code_r0x0001004abd24:
    *(ulong ********)((long)pppppppuVar10 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar10 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar10 + -0x10) = puVar28;
    *(undefined8 *)((long)pppppppuVar10 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar10 + -0x44) = 0;
    uVar18 = (uint)param_4;
    if (uVar18 < 0x80) {
      *(byte *)((long)pppppppuVar10 + -0x44) = (byte)param_4;
      uVar21 = 1;
    }
    else {
      bVar19 = (byte)param_4 & 0x3f | 0x80;
      if (uVar18 < 0x800) {
        *(byte *)((long)pppppppuVar10 + -0x44) = (byte)(uVar18 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar10 + -0x43) = bVar19;
        uVar21 = 2;
      }
      else {
        bVar1 = (byte)(uVar18 >> 6) & 0x3f | 0x80;
        if (uVar18 < 0x10000) {
          *(byte *)((long)pppppppuVar10 + -0x44) = (byte)(uVar18 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar10 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar10 + -0x42) = bVar19;
          uVar21 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar10 + -0x44) = (byte)(uVar18 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar10 + -0x43) = (byte)(uVar18 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar10 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar10 + -0x41) = bVar19;
          uVar21 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar10 + -0x38) = (undefined1 *)((long)pppppppuVar10 + -0x44);
    *(undefined8 *)((long)pppppppuVar10 + -0x30) = uVar21;
    *(undefined1 *)((long)pppppppuVar10 + -0x40) = 5;
    ppppppuVar15 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar10 + -0x40),
                                       (undefined1 *)((long)pppppppuVar10 + -0x21),&UNK_10b219c50);
    *param_3 = (ulong ******)0x1d;
    param_3[1] = ppppppuVar15;
    return;
  case 0xc:
  case 0x7c:
    param_4 = param_4 + 1;
    pppppppuVar12 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
  case 0xa3:
    unaff_x22 = *(ulong ********)((long)pppppppuVar12 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar12 + 0x38);
    pppppppuVar14 = pppppppuVar12;
code_r0x0001004abd50:
    pppppppuVar13 = (ulong *******)((long)pppppppuVar14 + 0x60);
code_r0x0001004abd54:
    *(ulong ********)((long)pppppppuVar13 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar13 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar13 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar13 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar13 + -0x10) = puVar28;
    *(undefined8 *)((long)pppppppuVar13 + -8) = unaff_x30;
    ppppppuVar15 = param_4[1];
    ppppppuVar17 = param_4[2];
    *(ulong *******)((long)pppppppuVar13 + -0x48) = ppppppuVar15;
    *(ulong *******)((long)pppppppuVar13 + -0x40) = ppppppuVar17;
    *(undefined1 *)((long)pppppppuVar13 + -0x50) = 5;
    ppppppuVar17 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar13 + -0x50),
                                       (undefined1 *)((long)pppppppuVar13 + -0x31),&UNK_10b219c50);
    *param_3 = (ulong ******)0x1d;
    param_3[1] = ppppppuVar17;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar15);
    }
    return;
  case 0xd:
  case 0x26:
    pppppppuVar20 = (ulong *******)param_4[1];
    pppppppuVar22 = (ulong *******)param_4[2];
  case 0xa4:
    pppppppuStack_248 = pppppppuVar20;
    pppppppuStack_240 = pppppppuVar22;
code_r0x0001004abdbc:
    bVar19 = 5;
code_r0x0001004abdc0:
    goto code_r0x0001004abde8;
  case 0xe:
    param_4 = param_4 + 1;
  case 0xf3:
    pppppppuVar3 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
code_r0x0001004abcec:
    unaff_x22 = *(ulong ********)((long)pppppppuVar3 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar3 + 0x38);
    pppppppuVar4 = pppppppuVar3;
code_r0x0001004abcf0:
    pppppppuVar6 = pppppppuVar4;
code_r0x0001004abcf8:
    pppppppuVar5 = (ulong *******)((long)pppppppuVar6 + 0x60);
code_r0x0001004abcfc:
    *(ulong ********)((long)pppppppuVar5 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar5 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar5 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar5 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar5 + -0x10) = puVar28;
    *(undefined8 *)((long)pppppppuVar5 + -8) = unaff_x30;
    ppppppuVar15 = param_4[1];
    ppppppuVar17 = param_4[2];
    *(ulong *******)((long)pppppppuVar5 + -0x48) = ppppppuVar15;
    *(ulong *******)((long)pppppppuVar5 + -0x40) = ppppppuVar17;
    *(undefined1 *)((long)pppppppuVar5 + -0x50) = 6;
    ppppppuVar17 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar5 + -0x50),
                                       (undefined1 *)((long)pppppppuVar5 + -0x31),&UNK_10b219c50);
    *param_3 = (ulong ******)0x1d;
    param_3[1] = ppppppuVar17;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar15);
    }
    return;
  case 0xf:
    pppppppuVar20 = (ulong *******)param_4[1];
    pppppppuVar22 = (ulong *******)param_4[2];
  case 0xa1:
    bVar19 = 6;
    pppppppuStack_248 = pppppppuVar20;
    pppppppuStack_240 = pppppppuVar22;
code_r0x0001004abd78:
    goto code_r0x0001004abde8;
  case 0x10:
  case 0xf2:
    bVar19 = 8;
  case 0x66:
  case 0x92:
    goto code_r0x0001004abde8;
  default:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_248 = (ulong *******)unaff_x20[1];
    ppppppuStack_250 = *unaff_x20;
    ppppppuStack_238 = unaff_x20[3];
    pppppppuStack_240 = (ulong *******)unaff_x20[2];
    thunk_FUN_1087fd8f8(param_3,&ppppppuStack_250);
    goto code_r0x0001004aba5c;
  case 0x12:
  case 0x1a:
  case 0x7b:
  case 0xbe:
  case 0xde:
    bVar19 = 7;
    goto code_r0x0001004abde8;
  case 0x13:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_248 = (ulong *******)unaff_x20[1];
    ppppppuStack_250 = *unaff_x20;
    ppppppuStack_238 = unaff_x20[3];
    pppppppuStack_240 = (ulong *******)unaff_x20[2];
    param_4 = &ppppppuStack_250;
  case 0xc4:
    thunk_FUN_108828594(param_3,param_4);
code_r0x0001004aba5c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x14:
    pppppppuStack_128 = (ulong *******)param_4[1];
    unaff_x19 = (ulong *******)param_4[2];
    ppppppuVar15 = param_4[3];
    pppppppuStack_120 = unaff_x19 + (long)ppppppuVar15 * 4;
    pppppppuStack_118 = (ulong *******)0x0;
    pppppppuStack_130 = unaff_x19;
    pppppppuStack_138 = unaff_x19;
    if (ppppppuVar15 == (ulong ******)0x0) {
code_r0x0001004abab0:
      pppppppuStack_b8 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22eca8,&UNK_10b20a590);
code_r0x0001004abacc:
      *param_3 = (ulong ******)0x1d;
      param_3[1] = (ulong ******)pppppppuStack_b8;
      goto code_r0x0001004abad4;
    }
    pppppppuStack_130 = unaff_x19 + 4;
    if (*(byte *)unaff_x19 == 0x16) goto code_r0x0001004abab0;
    uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x19 + 9);
    ppppppuStack_2a0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x19 + 1);
    uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x19 + 1) >> 0x38);
    pppppppuStack_288 = (ulong *******)unaff_x19[3];
    uStack_290 = SUB81(unaff_x19[2],0);
    uStack_28f = (undefined7)((ulong)unaff_x19[2] >> 8);
    pppppppuStack_118 = (ulong *******)0x1;
    ppppppuStack_2a0._0_1_ = *(byte *)unaff_x19;
    FUN_1004b62d4(&pppppppuStack_c0,&ppppppuStack_2a0);
    if (pppppppuStack_c0 == (ulong *******)0x8000000000000000) goto code_r0x0001004abacc;
    unaff_x20 = pppppppuStack_b8;
    unaff_x21 = pppppppuStack_c0;
    if (ppppppuVar15 != (ulong ******)0x1) {
      pppppppuStack_130 = unaff_x19 + 8;
      bVar19 = *(byte *)(unaff_x19 + 4);
      unaff_x22 = pppppppuStack_b0;
      if (bVar19 != 0x16) goto code_r0x0001004abf58;
    }
    uVar21 = 1;
    goto code_r0x0001004abbec;
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
    pppppppuVar20 = (ulong *******)param_4[2];
    unaff_x22 = pppppppuVar20 + (long)param_4[3] * 8;
    pppppppuStack_280 = pppppppuVar20;
    pppppppuStack_270 = (ulong *******)param_4[1];
    pppppppuStack_268 = unaff_x22;
    ppppppuStack_2a0._0_1_ = 0x16;
    pppppppuStack_260 = (ulong *******)0x0;
    pppppppuStack_138 = (ulong *******)0x8000000000000001;
    if (param_4[3] == (ulong ******)0x0) {
      pppppppuStack_138 = (ulong *******)0x8000000000000001;
      unaff_x21 = (ulong *******)0x8000000000000001;
      pppppppuStack_278 = pppppppuVar20;
    }
    else {
      unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
      unaff_x21 = (ulong *******)((ulong)&ppppppuStack_2a0 | 1);
      unaff_x20 = (ulong *******)((ulong)&uStack_100 | 1);
      uStack_2ac = 6;
      pppppppuStack_2a8 = (ulong *******)0x8000000000000001;
      unaff_x25 = (ulong *******)0x8000000000000000;
      unaff_x26 = (ulong *******)0x8000000000000001;
      pppppppuStack_2d0 = param_3;
      do {
        unaff_x27 = pppppppuVar20 + 8;
        unaff_x19 = (ulong *******)(ulong)*(byte *)pppppppuVar20;
        pppppppuStack_278 = unaff_x27;
        pppppppuVar22 = pppppppuStack_260;
        if (*(byte *)pppppppuVar20 == 0x16) break;
code_r0x0001004ab648:
        pppppppuStack_260 = (ulong *******)((long)pppppppuVar22 + 1);
        iVar24 = (int)unaff_x19;
        uStack_90 = (ulong *******)CONCAT71(uStack_90._1_7_,(char)unaff_x19);
        uVar21 = *(undefined8 *)((long)pppppppuVar20 + 1);
        ppppppuVar17 = pppppppuVar20[3];
        ppppppuVar15 = pppppppuVar20[2];
        pppppppuStack_f8 = (ulong *******)pppppppuVar20[5];
        uStack_100 = (ulong *******)pppppppuVar20[4];
        unaff_x28[1] = *(undefined8 *)((long)pppppppuVar20 + 9);
        *unaff_x28 = uVar21;
        *(ulong *******)((long)unaff_x28 + 0x17) = ppppppuVar17;
        *(ulong *******)((long)unaff_x28 + 0xf) = ppppppuVar15;
        pppppppuStack_e8 = (ulong *******)pppppppuVar20[7];
        pppppppuStack_f0 = (ulong *******)pppppppuVar20[6];
        if ((byte)ppppppuStack_2a0 != 0x16) {
          FUN_100e077ec(&ppppppuStack_2a0);
        }
        unaff_x24 = pppppppuStack_80;
        param_3 = pppppppuStack_88;
        uStack_298 = SUB81(pppppppuStack_f8,0);
        uStack_297 = (undefined7)((ulong)pppppppuStack_f8 >> 8);
        ppppppuStack_2a0._0_1_ = (byte)uStack_100;
        ppppppuStack_2a0._1_7_ = (undefined7)((ulong)uStack_100 >> 8);
        pppppppuStack_288 = pppppppuStack_e8;
        uStack_290 = SUB81(pppppppuStack_f0,0);
        uStack_28f = (undefined7)((ulong)pppppppuStack_f0 >> 8);
        pppppppuVar27 = unaff_x22;
        if (iVar24 < 0xd) {
          if (iVar24 == 1) {
            bVar19 = uStack_90._1_1_;
            if (2 < uStack_90._1_1_) {
              bVar19 = 3;
            }
            goto code_r0x0001004ab8a8;
          }
          if (iVar24 == 4) {
            pppppppuVar22 = pppppppuStack_88;
            if ((ulong *******)0x2 < pppppppuStack_88) {
              pppppppuVar22 = (ulong *******)0x3;
            }
            uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,(char)pppppppuVar22);
            goto code_r0x0001004ab8ac;
          }
          if (iVar24 == 0xc) {
            if (lStack_78 == 6) {
              if (*(int *)pppppppuStack_80 != 0x74617473 ||
                  *(short *)((long)pppppppuStack_80 + 4) != 0x7375) goto code_r0x0001004ab830;
code_r0x0001004ab9fc:
              bVar19 = 1;
code_r0x0001004aba00:
              uStack_100 = (ulong *******)((ulong)CONCAT61(uStack_100._2_6_,bVar19) << 8);
code_r0x0001004aba04:
              uStack_100 = (ulong *******)((ulong)uStack_100 & 0xffffffffffffff00);
code_r0x0001004aba08:
            }
            else if (lStack_78 == 0x10) {
              if (*pppppppuStack_80 != (ulong ******)0x65736e6f70736572 ||
                  pppppppuStack_80[1] != (ulong ******)0x64616f6c7961705f)
              goto code_r0x0001004ab830;
              uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x200);
            }
            else if ((lStack_78 == 0xf) &&
                    (*pppppppuStack_80 == (ulong ******)0x5f656d69746e7572 &&
                     *(long *)((long)pppppppuStack_80 + 7) == 0x64695f6c6c65635f)) {
              uStack_100 = (ulong *******)((ulong)uStack_100._2_6_ << 0x10);
            }
            else {
code_r0x0001004ab830:
              uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x300);
            }
joined_r0x0001004ab808:
            pppppppuVar27 = unaff_x22;
            if (param_3 != (ulong *******)0x0) {
              _free(unaff_x24);
            }
          }
          else {
code_r0x0001004aba18:
            pppppppuStack_f8 =
                 (ulong *******)thunk_FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20de80);
            uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,1);
          }
        }
        else {
          if (iVar24 == 0xd) {
            if (pppppppuStack_80 == (ulong *******)0x6) {
              if (*(int *)pppppppuStack_88 != 0x74617473 ||
                  *(short *)((long)pppppppuStack_88 + 4) != 0x7375) goto code_r0x0001004ab8a4;
code_r0x0001004aba10:
              bVar19 = 1;
            }
            else if (pppppppuStack_80 == (ulong *******)0x10) {
              if (*pppppppuStack_88 != (ulong ******)0x65736e6f70736572 ||
                  pppppppuStack_88[1] != (ulong ******)0x64616f6c7961705f)
              goto code_r0x0001004ab8a4;
              bVar19 = 2;
            }
            else if ((pppppppuStack_80 == (ulong *******)0xf) &&
                    (*pppppppuStack_88 == (ulong ******)0x5f656d69746e7572 &&
                     *(long *)((long)pppppppuStack_88 + 7) == 0x64695f6c6c65635f)) {
              bVar19 = 0;
            }
            else {
code_r0x0001004ab8a4:
              bVar19 = 3;
            }
code_r0x0001004ab8a8:
            uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar19);
code_r0x0001004ab8ac:
            uStack_100 = (ulong *******)((ulong)uStack_100._1_7_ << 8);
            pppppppuVar27 = unaff_x22;
          }
          else {
            if (iVar24 == 0xe) {
              FUN_100b48868(&uStack_100,pppppppuStack_80);
              goto joined_r0x0001004ab808;
            }
            if (iVar24 != 0xf) goto code_r0x0001004aba18;
            FUN_100b48868(&uStack_100,pppppppuStack_88,pppppppuStack_80);
          }
          FUN_100e077ec(&uStack_90);
        }
        bVar19 = (byte)ppppppuStack_2a0;
        pppppppuVar26 = pppppppuStack_2a8;
        param_3 = pppppppuStack_2c0;
        if (((ulong)uStack_100 & 1) != 0) {
          pppppppuStack_130 = pppppppuStack_2c0;
          pppppppuVar20 = pppppppuStack_f8;
          unaff_x22 = pppppppuStack_2c0;
          pppppppuStack_138 = unaff_x26;
          goto code_r0x0001004abc24;
        }
        if (uStack_100._1_1_ < 2) {
          if (uStack_100._1_1_ == 0) {
            if (unaff_x25 != (ulong *******)0x8000000000000000) {
              pppppppuStack_130 = pppppppuStack_2c0;
              uStack_90 = (ulong *******)&UNK_108cb8ac2;
              pppppppuStack_88 = (ulong *******)0xf;
              uStack_100 = (ulong *******)&uStack_90;
              pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
              pppppppuStack_138 = unaff_x26;
              ppppppuVar15 = (ulong ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
code_r0x0001004ac130:
              unaff_x20 = &ppppppuStack_2a0;
              *pppppppuStack_2d0 = (ulong ******)0x1d;
              pppppppuStack_2d0[1] = ppppppuVar15;
              unaff_x19 = (ulong *******)0x1;
              iVar24 = 1;
              unaff_x22 = param_3;
              unaff_x21 = pppppppuVar26;
              goto joined_r0x0001004ac144;
            }
            ppppppuStack_2a0._0_1_ = 0x16;
            if (bVar19 == 0x16) {
              pppppppuStack_130 = pppppppuStack_2c0;
              pppppppuStack_138 = unaff_x26;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x0001004ac174;
            }
            ppppppuVar15 = *unaff_x21;
            unaff_x20[1] = unaff_x21[1];
            *unaff_x20 = ppppppuVar15;
            uVar21 = *(undefined8 *)((long)unaff_x21 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
            uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar19);
            FUN_1004b62d4(&uStack_90,&uStack_100);
            unaff_x22 = pppppppuStack_2c0;
            if (uStack_90 == (ulong *******)0x8000000000000000) goto code_r0x0001004abeb0;
            pppppppuStack_2b8 = pppppppuStack_88;
            pppppppuStack_2c8 = pppppppuStack_80;
            unaff_x22 = pppppppuVar27;
            unaff_x25 = uStack_90;
            pppppppuVar20 = unaff_x27;
          }
          else {
            if (uStack_2ac != 6) {
              pppppppuStack_130 = pppppppuStack_2c0;
              uStack_90 = (ulong *******)&UNK_108ca105e;
              pppppppuStack_88 = (ulong *******)0x6;
              uStack_100 = (ulong *******)&uStack_90;
              pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
              pppppppuStack_138 = unaff_x26;
              ppppppuVar15 = (ulong ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
              goto code_r0x0001004ac130;
            }
            pppppppuVar20 = (ulong *******)(ulong)(byte)ppppppuStack_2a0;
            pppppppuVar22 = (ulong *******)0x16;
code_r0x0001004ab984:
            bVar19 = (byte)pppppppuVar20;
            ppppppuStack_2a0._0_1_ = (byte)pppppppuVar22;
            if ((int)pppppppuVar20 == 0x16) goto code_r0x0001004ac01c;
code_r0x0001004ab990:
            ppppppuVar15 = *unaff_x21;
            unaff_x20[1] = unaff_x21[1];
            *unaff_x20 = ppppppuVar15;
            uVar21 = *(undefined8 *)((long)unaff_x21 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
            uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar19);
            FUN_101300cb4(&uStack_90,&uStack_100);
            pppppppuVar20 = (ulong *******)((ulong)uStack_90 & 0xff);
code_r0x0001004ab9b4:
            in_ZR = (int)pppppppuVar20 == 1;
code_r0x0001004ab9b8:
            unaff_x22 = pppppppuStack_2c0;
            if ((bool)in_ZR) goto code_r0x0001004abea0;
code_r0x0001004ab9bc:
            pppppppuVar20 = (ulong *******)((ulong)uStack_90 >> 8 & 0xff);
code_r0x0001004ab9c0:
            uStack_2ac = (uint)pppppppuVar20;
code_r0x0001004ab9c4:
            pppppppuVar20 = unaff_x27;
            unaff_x22 = pppppppuVar27;
          }
        }
        else if (uStack_100._1_1_ == 2) {
          if (pppppppuStack_2a8 != (ulong *******)0x8000000000000001) {
            pppppppuStack_130 = pppppppuStack_2c0;
            uStack_90 = (ulong *******)&UNK_108cdd020;
            pppppppuStack_88 = (ulong *******)0x10;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = unaff_x26;
            ppppppuVar15 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            unaff_x20 = &ppppppuStack_2a0;
            *pppppppuStack_2d0 = (ulong ******)0x1d;
            pppppppuStack_2d0[1] = ppppppuVar15;
            unaff_x19 = (ulong *******)0x1;
            iVar24 = 1;
            if (pppppppuVar26 == (ulong *******)0x8000000000000000) goto LAB_1004abf08;
            goto LAB_1004abeec;
          }
          pppppppuStack_2a8 = (ulong *******)0x8000000000000001;
          func_0x000100f1ec38(&uStack_100,&ppppppuStack_2a0);
          pppppppuVar23 = pppppppuStack_f8;
          if (uStack_100 == (ulong *******)0x8000000000000001) goto code_r0x0001004abe84;
          pppppppuStack_2c0 = pppppppuStack_f8;
          unaff_x26 = uStack_100;
code_r0x0001004ab604:
          pppppppuStack_120 = pppppppuStack_e8;
          pppppppuStack_128 = pppppppuStack_f0;
          uStack_110 = uStack_d8;
          pppppppuStack_118 = pppppppuStack_e0;
          uStack_108 = uStack_d0;
          unaff_x22 = pppppppuStack_268;
          pppppppuVar20 = pppppppuStack_278;
          pppppppuStack_2a8 = unaff_x26;
        }
        else {
code_r0x0001004ab9c8:
          pppppppuVar20 = (ulong *******)(ulong)(byte)ppppppuStack_2a0;
          ppppppuStack_2a0._0_1_ = 0x16;
code_r0x0001004ab9d4:
          if ((int)pppppppuVar20 == 0x16) {
code_r0x0001004ac01c:
            pppppppuStack_130 = pppppppuStack_2c0;
            pppppppuStack_138 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004ac174:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004ac178);
            (*pcVar2)();
          }
          ppppppuVar15 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar15;
          uVar21 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,(char)pppppppuVar20);
          FUN_100e077ec(&uStack_100);
          unaff_x22 = pppppppuVar27;
code_r0x0001004ab9f8:
          pppppppuVar20 = unaff_x27;
        }
      } while (pppppppuVar20 != unaff_x22);
      pppppppuStack_138 = unaff_x26;
      pppppppuStack_130 = pppppppuStack_2c0;
      unaff_x21 = pppppppuStack_2a8;
      unaff_x22 = pppppppuStack_2c0;
      param_3 = pppppppuStack_2d0;
      if (unaff_x25 != (ulong *******)0x8000000000000000) {
        pppppppuVar22 = (ulong *******)(ulong)uStack_2ac;
        unaff_x20 = &ppppppuStack_2a0;
        unaff_x19 = pppppppuStack_2d0;
        if (uStack_2ac != 6) goto code_r0x0001004abcbc;
        pppppppuVar20 = (ulong *******)&UNK_108ca105e;
        goto code_r0x0001004abc6c;
      }
    }
    unaff_x20 = &ppppppuStack_2a0;
    uStack_90 = (ulong *******)&UNK_108cb8ac2;
    pppppppuStack_88 = (ulong *******)0xf;
    uStack_100 = (ulong *******)&uStack_90;
    pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
    unaff_x25 = (ulong *******)0x0;
    ppppppuVar15 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
    *param_3 = (ulong ******)0x1d;
    param_3[1] = ppppppuVar15;
    unaff_x19 = (ulong *******)0x1;
    iVar24 = 1;
    goto joined_r0x0001004ac144;
  case 0x16:
  case 0x4f:
    goto code_r0x0001004abe70;
  case 0x17:
  case 0x48:
    goto code_r0x0001004abe80;
  case 0x18:
  case 0x42:
    goto code_r0x0001004abe48;
  case 0x19:
    goto code_r0x0001004abe60;
  case 0x1b:
    goto code_r0x0001004abe90;
  case 0x1c:
    goto code_r0x0001004abea8;
  case 0x1d:
  case 0x47:
  case 0x80:
    goto code_r0x0001004abe68;
  case 0x1e:
  case 0xb0:
    goto code_r0x0001004abec0;
  case 0x1f:
    goto code_r0x0001004abe3c;
  case 0x20:
  case 0xb3:
code_r0x0001004abeb0:
    pppppppuVar20 = pppppppuStack_88;
    pppppppuStack_138 = unaff_x26;
    pppppppuStack_130 = unaff_x22;
  case 0xb7:
    pppppppuVar22 = (ulong *******)0x1d;
    pppppppuVar23 = pppppppuStack_2d0;
code_r0x0001004abec0:
    *pppppppuVar23 = (ulong ******)pppppppuVar22;
    pppppppuVar23[1] = (ulong ******)pppppppuVar20;
code_r0x0001004abec4:
    unaff_x19 = (ulong *******)0x1;
    unaff_x25 = (ulong *******)0x0;
code_r0x0001004abecc:
    unaff_x21 = pppppppuStack_2a8;
code_r0x0001004abed0:
    unaff_x20 = &ppppppuStack_2a0;
code_r0x0001004abed4:
    iVar24 = (int)unaff_x19;
    goto joined_r0x0001004ac144;
  case 0x21:
  case 0x46:
  case 0x6e:
    goto code_r0x0001004abde4;
  case 0x22:
  case 0x4b:
  case 0xeb:
    goto code_r0x0001004abe14;
  case 0x23:
  case 0x4a:
  case 0xb2:
    goto code_r0x0001004abe98;
  case 0x24:
  case 0x4d:
  case 0x70:
    goto code_r0x0001004abdbc;
  case 0x25:
    goto code_r0x0001004abe50;
  case 0x28:
  case 0xb8:
    goto code_r0x0001004abf10;
  case 0x29:
    goto code_r0x0001004ab9bc;
  case 0x2a:
    goto code_r0x0001004aba00;
  case 0x2c:
    goto code_r0x0001004abf80;
  case 0x2d:
    goto code_r0x0001004abf90;
  case 0x2e:
code_r0x0001004abf58:
    uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x29);
    ppppppuStack_2a0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x21);
    uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x19 + 0x21) >> 0x38);
  case 0x3b:
  case 0xc2:
    pppppppuStack_288 = (ulong *******)unaff_x19[7];
    uStack_290 = SUB81(unaff_x19[6],0);
    uStack_28f = (undefined7)((ulong)unaff_x19[6] >> 8);
    pppppppuStack_118 = (ulong *******)0x2;
code_r0x0001004abf70:
    ppppppuStack_2a0._0_1_ = bVar19;
    pppppppuVar16 = (ulong *******)&pppppppuStack_c0;
code_r0x0001004abf78:
    FUN_101300cb4(pppppppuVar16,&ppppppuStack_2a0);
code_r0x0001004abf80:
    pppppppuVar16 = pppppppuStack_b8;
    if (((ulong)pppppppuStack_c0 & 1) == 0) {
code_r0x0001004abf90:
      unaff_x19 = (ulong *******)((ulong)pppppppuStack_c0 >> 8 & 0xff);
      FUN_100f28ba8(&ppppppuStack_2a0,&pppppppuStack_138);
code_r0x0001004abfa0:
      pppppppuVar20 = (ulong *******)CONCAT71(ppppppuStack_2a0._1_7_,(byte)ppppppuStack_2a0);
      pppppppuVar16 = (ulong *******)CONCAT71(uStack_297,uStack_298);
      pppppppuVar22 = (ulong *******)0x2;
code_r0x0001004abfa8:
      if (pppppppuVar20 != (ulong *******)((ulong)pppppppuVar22 | 0x8000000000000000)) {
        pppppppuVar29 = (ulong *******)CONCAT71(uStack_28f,uStack_290);
        pppppppuVar30 = pppppppuStack_288;
        pppppppuVar31 = pppppppuStack_280;
        pppppppuVar32 = pppppppuStack_278;
code_r0x0001004abfb8:
        pppppppuVar22 = pppppppuStack_270;
        uStack_100 = pppppppuVar29;
        pppppppuStack_f8 = pppppppuVar30;
        pppppppuStack_f0 = pppppppuVar31;
        pppppppuStack_e8 = pppppppuVar32;
code_r0x0001004abfc0:
        pppppppuStack_e0 = pppppppuVar22;
        if (pppppppuVar20 != (ulong *******)0x8000000000000001) {
code_r0x0001004abfd0:
          param_3[7] = (ulong ******)pppppppuStack_f8;
          param_3[6] = (ulong ******)uStack_100;
          param_3[9] = (ulong ******)pppppppuStack_e8;
          param_3[8] = (ulong ******)pppppppuStack_f0;
          param_3[10] = (ulong ******)pppppppuStack_e0;
          *param_3 = (ulong ******)0x14;
          param_3[1] = (ulong ******)unaff_x21;
          param_3[2] = (ulong ******)unaff_x20;
          param_3[3] = (ulong ******)unaff_x22;
          param_3[4] = (ulong ******)pppppppuVar20;
          param_3[5] = (ulong ******)pppppppuVar16;
          *(byte *)(param_3 + 0xb) = (byte)unaff_x19;
          pppppppuVar16 = &ppppppuStack_250;
          param_5 = (undefined *)0x118;
          param_4 = param_3;
code_r0x0001004ac000:
          _memcpy(pppppppuVar16,param_4,param_5);
          ppppppuVar15 = (ulong ******)FUN_100fbc738(&pppppppuStack_138);
          if (ppppppuVar15 == (ulong ******)0x0) {
            return;
          }
          *param_3 = (ulong ******)0x1d;
          param_3[1] = ppppppuVar15;
code_r0x0001004abe78:
          param_3 = &ppppppuStack_250;
code_r0x0001004abe7c:
          FUN_100e35e0c(param_3);
code_r0x0001004abe80:
          return;
        }
        uVar21 = 2;
code_r0x0001004abbec:
        pppppppuVar16 = (ulong *******)thunk_FUN_1087e422c(uVar21,&UNK_10b22eca8,&UNK_10b20a590);
      }
    }
    *param_3 = (ulong ******)0x1d;
    param_3[1] = (ulong ******)pppppppuVar16;
    if (unaff_x21 != (ulong *******)0x0) {
      _free(unaff_x20);
    }
code_r0x0001004abad4:
    lVar25 = ((ulong)((long)pppppppuStack_120 - (long)pppppppuStack_130) >> 5) + 1;
    pppppppuVar22 = pppppppuStack_130;
    while (lVar25 = lVar25 + -1, lVar25 != 0) {
      FUN_100e077ec(pppppppuVar22);
      pppppppuVar22 = pppppppuVar22 + 4;
    }
    if (pppppppuStack_128 == (ulong *******)0x0) {
      return;
    }
    _free(pppppppuStack_138);
    return;
  case 0x2f:
    goto code_r0x0001004abf70;
  case 0x30:
    goto LAB_1004abf1c;
  case 0x31:
    goto code_r0x0001004abfa0;
  case 0x32:
    goto code_r0x0001004abfb8;
  case 0x33:
    goto code_r0x0001004abf78;
  case 0x34:
    goto code_r0x0001004abfd0;
  case 0x35:
    goto code_r0x0001004abf4c;
  case 0x36:
    goto code_r0x0001004abfc0;
  case 0x37:
  case 0xd8:
    goto code_r0x0001004abef4;
  case 0x38:
    goto code_r0x0001004abf24;
  case 0x39:
    goto code_r0x0001004abfa8;
  case 0x3a:
    goto code_r0x0001004abecc;
  case 0x3c:
    goto code_r0x0001004abec4;
  case 0x3e:
    goto code_r0x0001004ac000;
  case 0x3f:
    goto code_r0x0001004ab604;
  case 0x40:
    goto code_r0x0001004ab648;
  case 0x43:
    goto code_r0x0001004abe58;
  case 0x44:
  case 0xcf:
    goto code_r0x0001004abe20;
  case 0x45:
    goto code_r0x0001004abe38;
  case 0x49:
    goto code_r0x0001004abe40;
  case 0x4c:
    goto code_r0x0001004abe88;
  case 0x4e:
    goto code_r0x0001004abdec;
  case 0x51:
  case 0x6a:
  case 0x96:
    goto code_r0x0001004abe28;
  case 0x54:
  case 0xbd:
    goto code_r0x0001004abee8;
  case 0x55:
    goto code_r0x0001004ab9b8;
  case 0x56:
    goto code_r0x0001004ab9fc;
  case 0x59:
  case 0x85:
  case 0x9f:
  case 0xd6:
    goto code_r0x0001004abd98;
  case 0x5b:
  case 0x87:
  case 0x9a:
  case 0xec:
    goto code_r0x0001004abd78;
  case 0x5c:
  case 0x88:
    goto code_r0x0001004abd24;
  case 0x5d:
  case 0x89:
  case 0xe7:
    goto code_r0x0001004abda8;
  case 0x5e:
  case 0x8a:
    goto code_r0x0001004abdc0;
  case 0x60:
  case 0x8c:
  case 0xe8:
    goto code_r0x0001004abdd8;
  case 0x61:
  case 0x8d:
    goto code_r0x0001004abd54;
  case 99:
  case 0x8f:
    goto code_r0x0001004abcfc;
  case 0x68:
  case 0x94:
    goto code_r0x0001004abccc;
  case 0x6b:
  case 0x97:
    goto code_r0x0001004ab990;
  case 0x6c:
  case 0x98:
    goto code_r0x0001004ab9d4;
  case 0x6f:
    goto code_r0x0001004abdf4;
  case 0x71:
    goto code_r0x0001004abdd4;
  case 0x73:
  case 0xc0:
    goto code_r0x0001004abe04;
  case 0x74:
    goto code_r0x0001004abe1c;
  case 0x76:
  case 0xbb:
  case 0xd5:
  case 0xdc:
    goto code_r0x0001004abe34;
  case 0x78:
  case 0xdf:
    goto code_r0x0001004abe24;
  case 0x81:
    goto code_r0x0001004ab9c0;
  case 0x82:
    goto code_r0x0001004aba04;
  case 0x9c:
    goto code_r0x0001004abd50;
  case 0x9e:
    goto code_r0x0001004abd14;
  case 0xa5:
    goto code_r0x0001004abcec;
  case 0xa6:
    goto code_r0x0001004abd1c;
  case 0xa7:
  case 0xd4:
    break;
  case 0xa8:
    goto code_r0x0001004abcc4;
  case 0xaa:
code_r0x0001004abcbc:
    pppppppuVar20 = (ulong *******)0x8000000000000001;
  case 0xf5:
    in_ZR = unaff_x21 == pppppppuVar20;
code_r0x0001004abcc4:
    if ((bool)in_ZR) {
code_r0x0001004abcc8:
      unaff_x21 = (ulong *******)0x8000000000000000;
code_r0x0001004abccc:
    }
    else {
code_r0x0001004abe14:
      pppppppuVar20 = (ulong *******)&pppppppuStack_138;
code_r0x0001004abe18:
      pppppppuVar30 = (ulong *******)pppppppuVar20[3];
      pppppppuVar29 = (ulong *******)pppppppuVar20[2];
      pppppppuVar32 = (ulong *******)pppppppuVar20[5];
      pppppppuVar31 = (ulong *******)pppppppuVar20[4];
code_r0x0001004abe1c:
      pppppppuStack_b8 = pppppppuVar30;
      pppppppuStack_c0 = pppppppuVar29;
      pppppppuStack_a8 = pppppppuVar32;
      pppppppuStack_b0 = pppppppuVar31;
code_r0x0001004abe20:
      pppppppuVar20 = (ulong *******)pppppppuVar20[6];
code_r0x0001004abe24:
      pppppppuStack_a0 = pppppppuVar20;
    }
code_r0x0001004abe28:
    pppppppuVar20 = (ulong *******)0x14;
code_r0x0001004abe2c:
    *unaff_x19 = (ulong ******)pppppppuVar20;
    unaff_x19[1] = (ulong ******)unaff_x25;
    pppppppuVar23 = pppppppuStack_2b8;
code_r0x0001004abe34:
    pppppppuVar20 = pppppppuStack_2c8;
code_r0x0001004abe38:
    unaff_x19[2] = (ulong ******)pppppppuVar23;
    unaff_x19[3] = (ulong ******)pppppppuVar20;
code_r0x0001004abe3c:
    unaff_x19[4] = (ulong ******)unaff_x21;
    unaff_x19[5] = (ulong ******)unaff_x22;
code_r0x0001004abe40:
    pppppppuVar29 = pppppppuStack_c0;
    pppppppuVar30 = pppppppuStack_b8;
    pppppppuVar31 = pppppppuStack_b0;
    pppppppuVar32 = pppppppuStack_a8;
code_r0x0001004abe44:
    unaff_x19[7] = (ulong ******)pppppppuVar30;
    unaff_x19[6] = (ulong ******)pppppppuVar29;
    unaff_x19[9] = (ulong ******)pppppppuVar32;
    unaff_x19[8] = (ulong ******)pppppppuVar31;
code_r0x0001004abe48:
    pppppppuVar20 = pppppppuStack_a0;
code_r0x0001004abe4c:
    unaff_x19[10] = (ulong ******)pppppppuVar20;
code_r0x0001004abe50:
    *(byte *)(unaff_x19 + 0xb) = (byte)pppppppuVar22;
code_r0x0001004abe54:
    param_3 = &ppppppuStack_250;
code_r0x0001004abe58:
    param_4 = unaff_x19;
    unaff_x19 = param_4;
code_r0x0001004abe5c:
    param_5 = (undefined *)0x118;
code_r0x0001004abe60:
    _memcpy(param_3,param_4,param_5);
code_r0x0001004abe64:
    param_3 = &ppppppuStack_2a0;
code_r0x0001004abe68:
    param_3 = (ulong *******)FUN_100fbc67c(param_3);
code_r0x0001004abe6c:
    if (param_3 == (ulong *******)0x0) {
      return;
    }
code_r0x0001004abe70:
    pppppppuVar20 = (ulong *******)0x1d;
code_r0x0001004abe74:
    *unaff_x19 = (ulong ******)pppppppuVar20;
    unaff_x19[1] = (ulong ******)param_3;
    goto code_r0x0001004abe78;
  case 0xac:
    goto code_r0x0001004abe18;
  case 0xad:
    goto code_r0x0001004ab984;
  case 0xae:
    goto code_r0x0001004ab9c8;
  case 0xb1:
    goto code_r0x0001004abed0;
  case 0xb4:
  case 0xe9:
    goto code_r0x0001004abe5c;
  case 0xb5:
    goto LAB_1004abee0;
  case 0xb6:
    goto LAB_1004abef8;
  case 0xb9:
  case 0xcc:
    goto code_r0x0001004abe8c;
  case 0xba:
    goto code_r0x0001004abf00;
  case 0xbc:
  case 199:
    goto code_r0x0001004abe64;
  case 0xbf:
code_r0x0001004abea0:
    pppppppuStack_138 = unaff_x26;
    pppppppuStack_130 = unaff_x22;
  case 0xce:
    pppppppuVar20 = pppppppuStack_88;
code_r0x0001004abea8:
code_r0x0001004abc24:
    *pppppppuStack_2d0 = (ulong ******)0x1d;
    pppppppuStack_2d0[1] = (ulong ******)pppppppuVar20;
    unaff_x19 = (ulong *******)0x1;
    unaff_x20 = &ppppppuStack_2a0;
    in_ZR = pppppppuStack_2a8 == (ulong *******)0x8000000000000001;
    unaff_x21 = pppppppuStack_2a8;
code_r0x0001004abc44:
    iVar24 = (int)unaff_x19;
    if (!(bool)in_ZR) goto LAB_1004abee0;
    goto LAB_1004abf08;
  case 0xc3:
    goto code_r0x0001004aba10;
  case 0xc6:
  case 0xe1:
    goto code_r0x0001004abe54;
  case 200:
  case 0xe3:
    goto code_r0x0001004abe2c;
  case 0xc9:
  case 0xdd:
    goto code_r0x0001004abe44;
  case 0xca:
    goto code_r0x0001004abdf0;
  case 0xcb:
  case 0xe6:
    goto code_r0x0001004abe74;
  case 0xcd:
    goto code_r0x0001004abe4c;
  case 0xd0:
    goto code_r0x0001004abe94;
  case 0xd2:
    goto code_r0x0001004abdf8;
  case 0xd3:
    goto code_r0x0001004abe7c;
  case 0xd9:
    goto code_r0x0001004ab9b4;
  case 0xda:
    goto code_r0x0001004ab9f8;
  case 0xe2:
    goto code_r0x0001004abe6c;
  case 0xe4:
code_r0x0001004abe84:
    pppppppuVar20 = (ulong *******)0x1d;
code_r0x0001004abe88:
    pppppppuVar22 = pppppppuStack_2d0;
code_r0x0001004abe8c:
    *pppppppuVar22 = (ulong ******)pppppppuVar20;
    pppppppuVar22[1] = (ulong ******)pppppppuVar23;
code_r0x0001004abe90:
    unaff_x19 = (ulong *******)0x1;
code_r0x0001004abe94:
    unaff_x20 = &ppppppuStack_2a0;
code_r0x0001004abe98:
    iVar24 = (int)unaff_x19;
    goto LAB_1004abf08;
  case 0xe5:
    goto code_r0x0001004abe00;
  case 0xee:
    goto code_r0x0001004abed4;
  case 0xef:
    goto code_r0x0001004ab9c4;
  case 0xf0:
    goto code_r0x0001004aba08;
  case 0xf4:
    goto LAB_1004abca8;
  case 0xf6:
code_r0x0001004abc6c:
    pppppppuStack_88 = (ulong *******)0x6;
    uStack_90 = pppppppuVar20;
  case 0xfe:
    uStack_100 = (ulong *******)&uStack_90;
    pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
    ppppppuVar15 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
    *unaff_x19 = (ulong ******)0x1d;
    unaff_x19[1] = ppppppuVar15;
code_r0x0001004abc9c:
    if (unaff_x25 != (ulong *******)0x0) {
      _free(pppppppuStack_2b8);
    }
LAB_1004abca8:
    unaff_x19 = (ulong *******)0x0;
    iVar24 = 0;
joined_r0x0001004ac144:
    if (unaff_x21 != (ulong *******)0x8000000000000001) {
LAB_1004abee0:
      in_ZR = unaff_x21 == (ulong *******)0x8000000000000000;
      pppppppuVar26 = unaff_x21;
code_r0x0001004abee8:
      param_3 = unaff_x22;
      iVar24 = (int)unaff_x19;
      if (!(bool)in_ZR) {
LAB_1004abeec:
        if (pppppppuVar26 != (ulong *******)0x0) {
code_r0x0001004abef4:
          _free(param_3);
        }
LAB_1004abef8:
        iVar24 = (int)unaff_x19;
        if (pppppppuStack_120 != (ulong *******)0x0) {
code_r0x0001004abf00:
          iVar24 = (int)unaff_x19;
          _free(pppppppuStack_118);
        }
      }
    }
LAB_1004abf08:
    if (iVar24 != 0) {
      pppppppuVar20 = (ulong *******)((ulong)unaff_x25 & 0x7fffffffffffffff);
code_r0x0001004abf10:
      if (pppppppuVar20 != (ulong *******)0x0) {
        _free(pppppppuStack_2b8);
      }
    }
LAB_1004abf1c:
    FUN_100d34830(unaff_x20 + 4);
code_r0x0001004abf24:
    if ((byte)ppppppuStack_2a0 == 0x16) {
      return;
    }
    FUN_100e077ec(&ppppppuStack_2a0);
    return;
  case 0xf7:
    goto code_r0x0001004abcf0;
  case 0xf9:
    goto code_r0x0001004abcc8;
  case 0xfa:
    goto code_r0x0001004abd20;
  case 0xfb:
    goto code_r0x0001004abc9c;
  case 0xfc:
    goto code_r0x0001004abd10;
  case 0xfd:
    goto code_r0x0001004abc44;
  case 0xff:
    goto code_r0x0001004abcf8;
  }
  bVar19 = 1;
  pppppppuStack_248 = pppppppuVar20;
code_r0x0001004abda8:
code_r0x0001004abde8:
  ppppppuStack_250 = (ulong ******)CONCAT71(ppppppuStack_250._1_7_,bVar19);
code_r0x0001004abdec:
  param_5 = &UNK_10b219000;
code_r0x0001004abdf0:
  param_5 = param_5 + 0xc50;
code_r0x0001004abdf4:
  pppppppuVar16 = &ppppppuStack_250;
code_r0x0001004abdf8:
  pppppppuVar16 = (ulong *******)FUN_107c05dcc(pppppppuVar16,auStack_69,param_5);
code_r0x0001004abe00:
  pppppppuVar20 = (ulong *******)0x1d;
code_r0x0001004abe04:
  *param_3 = (ulong ******)pppppppuVar20;
  param_3[1] = (ulong ******)pppppppuVar16;
code_r0x0001004abf4c:
  return;
}

