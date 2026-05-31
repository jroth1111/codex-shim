
/* WARNING: Type propagation algorithm not settling */

void FUN_10042e768(undefined1 param_1 [16],undefined1 param_2 [16],byte *******param_3,
                  byte *******param_4,undefined *param_5)

{
  byte bVar1;
  code *pcVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  undefined1 in_ZR;
  bool bVar18;
  byte *******pppppppbVar19;
  byte ******ppppppbVar20;
  byte ******ppppppbVar21;
  uint uVar22;
  byte *******pppppppbVar23;
  undefined8 uVar24;
  byte bVar25;
  byte *******pppppppbVar26;
  byte *******pppppppbVar27;
  int iVar28;
  byte *******unaff_x19;
  byte *******unaff_x20;
  byte *******unaff_x21;
  long lVar29;
  byte *******unaff_x22;
  byte *******unaff_x24;
  byte ******unaff_x25;
  byte *******unaff_x26;
  byte *******unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *puVar30;
  undefined8 unaff_x30;
  byte *******pppppppbVar31;
  byte *******pppppppbVar32;
  byte *******pppppppbVar33;
  byte *******pppppppbVar34;
  byte abStack_320 [80];
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
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
  byte ******ppppppbStack_250;
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  byte *****pppppbStack_238;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte *******pppppppbStack_a0;
  undefined8 uStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  pppppppbVar32 = param_1._8_8_;
  pppppppbVar31 = param_1._0_8_;
  puVar30 = &stack0xfffffffffffffff0;
  pppppppbVar8 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar13 = (byte *******)&pppppppbStack_2d0;
  bVar25 = *(byte *)param_4;
  pppppppbVar23 = (byte *******)(ulong)bVar25;
  pppppppbVar26 = (byte *******)&UNK_108c988fe;
  pppppppbVar27 =
       (byte *******)
       (&UNK_10042e7a8 + (ulong)*(ushort *)(&UNK_108c988fe + (long)pppppppbVar23 * 2) * 4);
  pppppppbVar14 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar15 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar16 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar17 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar9 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar10 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar11 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar12 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar3 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar4 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar5 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar6 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar7 = (byte *******)&pppppppbStack_2d0;
  pppppppbVar19 = param_3;
  pppppppbVar33 = param_2._0_8_;
  pppppppbVar34 = param_2._8_8_;
  switch(bVar25) {
  case 0:
  case 0x3e:
  case 0x50:
  case 0x6a:
  case 0xce:
    bVar25 = *(byte *)((long)param_4 + 1);
  case 0xe3:
  case 0xf9:
    ppppppbStack_250 = (byte ******)((ulong)CONCAT61(ppppppbStack_250._2_6_,bVar25) << 8);
code_r0x00010042efc8:
    ppppppbStack_250 = (byte ******)((ulong)ppppppbStack_250 & 0xffffffffffffff00);
code_r0x00010042efcc:
    goto code_r0x00010042f020;
  case 1:
  case 0xb7:
    pppppppbStack_248 = (byte *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0xb0:
code_r0x00010042efd8:
    bVar25 = 1;
code_r0x00010042efdc:
    break;
  case 2:
  case 0xd3:
  case 0xe5:
  case 0xfb:
    pppppppbStack_248 = (byte *******)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x00010042efd8;
  case 3:
  case 0xb2:
  case 0xd0:
    pppppppbStack_248 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x00010042efd8;
  case 4:
    pppppppbVar23 = (byte *******)param_4[1];
  case 0x36:
  case 0x62:
  case 0xc9:
    pppppppbStack_248 = pppppppbVar23;
    goto code_r0x00010042efd8;
  case 5:
    pppppppbVar23 = (byte *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x88:
    goto code_r0x00010042f014;
  case 6:
  case 0xb5:
    pppppppbVar23 = (byte *******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x00010042f014;
  case 7:
  case 0x52:
  case 0xac:
  case 0xbf:
    pppppppbVar23 = (byte *******)(long)*(int *)((long)param_4 + 4);
  case 0x8f:
  case 0xdf:
  case 0xf5:
code_r0x00010042f014:
    pppppppbStack_248 = pppppppbVar23;
code_r0x00010042f018:
    bVar25 = 2;
    break;
  case 8:
  case 0x46:
  case 0xb6:
  case 0xd8:
    pppppppbVar23 = (byte *******)param_4[1];
    goto code_r0x00010042f014;
  case 9:
  case 0x94:
    pppppppbVar31 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0xcb:
    pppppppbVar31 = (byte *******)(double)SUB84(pppppppbVar31,0);
code_r0x00010042ef94:
  case 0xe2:
  case 0xf8:
code_r0x00010042f004:
    bVar25 = 3;
    pppppppbStack_248 = pppppppbVar31;
code_r0x00010042f00c:
    break;
  case 10:
  case 0xbd:
    pppppppbVar31 = (byte *******)param_4[1];
    goto code_r0x00010042f004;
  case 0xb:
    param_4 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x9f:
code_r0x00010042ef3c:
    pppppppbVar9 = (byte *******)&stack0xffffffffffffffa0;
code_r0x00010042ef40:
    puVar30 = *(undefined1 **)((long)pppppppbVar9 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppbVar9 + 0x58);
    unaff_x20 = *(byte ********)((long)pppppppbVar9 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar9 + 0x48);
    pppppppbVar10 = pppppppbVar9;
code_r0x00010042ef48:
    pppppppbVar11 = pppppppbVar10;
code_r0x00010042ef4c:
    pppppppbVar12 = pppppppbVar11;
code_r0x00010042ef50:
    pppppppbVar13 = (byte *******)((long)pppppppbVar12 + 0x60);
code_r0x00010042ef58:
    *(byte ********)((long)pppppppbVar13 + -0x20) = unaff_x20;
    *(byte ********)((long)pppppppbVar13 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar13 + -0x10) = puVar30;
    *(undefined8 *)((long)pppppppbVar13 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppbVar13 + -0x44) = 0;
    uVar22 = (uint)param_4;
    if (uVar22 < 0x80) {
      *(byte *)((long)pppppppbVar13 + -0x44) = (byte)param_4;
      uVar24 = 1;
    }
    else {
      bVar25 = (byte)param_4 & 0x3f | 0x80;
      if (uVar22 < 0x800) {
        *(byte *)((long)pppppppbVar13 + -0x44) = (byte)(uVar22 >> 6) | 0xc0;
        *(byte *)((long)pppppppbVar13 + -0x43) = bVar25;
        uVar24 = 2;
      }
      else {
        bVar1 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
        if (uVar22 < 0x10000) {
          *(byte *)((long)pppppppbVar13 + -0x44) = (byte)(uVar22 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppbVar13 + -0x43) = bVar1;
          *(byte *)((long)pppppppbVar13 + -0x42) = bVar25;
          uVar24 = 3;
        }
        else {
          *(byte *)((long)pppppppbVar13 + -0x44) = (byte)(uVar22 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppbVar13 + -0x43) = (byte)(uVar22 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppbVar13 + -0x42) = bVar1;
          *(byte *)((long)pppppppbVar13 + -0x41) = bVar25;
          uVar24 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppbVar13 + -0x38) = (undefined1 *)((long)pppppppbVar13 + -0x44);
    *(undefined8 *)((long)pppppppbVar13 + -0x30) = uVar24;
    *(undefined1 *)((long)pppppppbVar13 + -0x40) = 5;
    ppppppbVar20 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar13 + -0x40),
                                       (undefined1 *)((long)pppppppbVar13 + -0x21),&UNK_10b21c4d0);
    *param_3 = (byte ******)0x1d;
    param_3[1] = ppppppbVar20;
    return;
  case 0xc:
    param_4 = param_4 + 1;
  case 0xa2:
  case 0xcd:
  case 0xe0:
  case 0xf6:
    pppppppbVar14 = (byte *******)&stack0xffffffffffffffa0;
code_r0x00010042ef70:
    puVar30 = *(undefined1 **)((long)pppppppbVar14 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppbVar14 + 0x58);
    pppppppbVar15 = pppppppbVar14;
code_r0x00010042ef74:
    unaff_x20 = *(byte ********)((long)pppppppbVar15 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar15 + 0x48);
    unaff_x22 = *(byte ********)((long)pppppppbVar15 + 0x30);
    unaff_x21 = *(byte ********)((long)pppppppbVar15 + 0x38);
    pppppppbVar16 = pppppppbVar15;
code_r0x00010042ef7c:
    pppppppbVar17 = pppppppbVar16;
code_r0x00010042ef80:
    *(byte ********)((long)pppppppbVar17 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar17 + 0x38) = unaff_x21;
    *(byte ********)((long)pppppppbVar17 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar17 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar17 + 0x50) = puVar30;
    *(undefined8 *)((long)pppppppbVar17 + 0x58) = unaff_x30;
    ppppppbVar20 = param_4[1];
    ppppppbVar21 = param_4[2];
    *(byte *******)((long)pppppppbVar17 + 0x18) = ppppppbVar20;
    *(byte *******)((long)pppppppbVar17 + 0x20) = ppppppbVar21;
    *(undefined1 *)((long)pppppppbVar17 + 0x10) = 5;
    ppppppbVar21 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar17 + 0x10),
                                       (undefined1 *)((long)pppppppbVar17 + 0x2f),&UNK_10b21c4d0);
    *param_3 = (byte ******)0x1d;
    param_3[1] = ppppppbVar21;
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar20);
    }
    return;
  case 0xd:
  case 0x4d:
  case 0xb1:
    pppppppbVar23 = (byte *******)param_4[1];
    pppppppbVar26 = (byte *******)param_4[2];
  case 0x90:
  case 0xe1:
  case 0xf7:
    bVar25 = 5;
    pppppppbStack_248 = pppppppbVar23;
    pppppppbStack_240 = pppppppbVar26;
code_r0x00010042eff4:
    break;
  case 0xe:
  case 0xca:
    param_4 = param_4 + 1;
  case 0x2f:
  case 0x5b:
  case 0xa1:
  case 0xec:
code_r0x00010042ef14:
    pppppppbVar3 = (byte *******)&stack0xffffffffffffffa0;
code_r0x00010042ef18:
    puVar30 = *(undefined1 **)((long)pppppppbVar3 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppbVar3 + 0x58);
    pppppppbVar4 = pppppppbVar3;
code_r0x00010042ef1c:
    unaff_x20 = *(byte ********)((long)pppppppbVar4 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar4 + 0x48);
    pppppppbVar5 = pppppppbVar4;
code_r0x00010042ef20:
    unaff_x22 = *(byte ********)((long)pppppppbVar5 + 0x30);
    unaff_x21 = *(byte ********)((long)pppppppbVar5 + 0x38);
    pppppppbVar6 = pppppppbVar5;
code_r0x00010042ef24:
    pppppppbVar7 = pppppppbVar6;
code_r0x00010042ef28:
    pppppppbVar8 = (byte *******)((long)pppppppbVar7 + 0x60);
code_r0x00010042ef30:
    *(byte ********)((long)pppppppbVar8 + -0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar8 + -0x28) = unaff_x21;
    *(byte ********)((long)pppppppbVar8 + -0x20) = unaff_x20;
    *(byte ********)((long)pppppppbVar8 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar8 + -0x10) = puVar30;
    *(undefined8 *)((long)pppppppbVar8 + -8) = unaff_x30;
    ppppppbVar20 = param_4[1];
    ppppppbVar21 = param_4[2];
    *(byte *******)((long)pppppppbVar8 + -0x48) = ppppppbVar20;
    *(byte *******)((long)pppppppbVar8 + -0x40) = ppppppbVar21;
    *(undefined1 *)((long)pppppppbVar8 + -0x50) = 6;
    ppppppbVar21 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar8 + -0x50),
                                       (undefined1 *)((long)pppppppbVar8 + -0x31),&UNK_10b21c4d0);
    *param_3 = (byte ******)0x1d;
    param_3[1] = ppppppbVar21;
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar20);
    }
    return;
  case 0xf:
    pppppppbVar23 = (byte *******)param_4[1];
    pppppppbVar26 = (byte *******)param_4[2];
  case 0xb9:
  case 0xde:
  case 0xf4:
    pppppppbStack_248 = pppppppbVar23;
    pppppppbStack_240 = pppppppbVar26;
code_r0x00010042efa8:
    bVar25 = 6;
code_r0x00010042efac:
    break;
  case 0x10:
    bVar25 = 8;
  case 0x9d:
    break;
  default:
    ppppppbVar20 = param_4[1];
    pppppppbStack_248 = (byte *******)ppppppbVar20[1];
    ppppppbStack_250 = (byte ******)*ppppppbVar20;
    pppppbStack_238 = ppppppbVar20[3];
    pppppppbStack_240 = (byte *******)ppppppbVar20[2];
    func_0x000107c046f4(param_3,&ppppppbStack_250);
    goto code_r0x00010042ec90;
  case 0x12:
  case 0x4b:
  case 0x8b:
    bVar25 = 7;
    break;
  case 0x13:
    ppppppbVar20 = param_4[1];
    pppppppbStack_248 = (byte *******)ppppppbVar20[1];
    ppppppbStack_250 = (byte ******)*ppppppbVar20;
    pppppbStack_238 = ppppppbVar20[3];
    pppppppbStack_240 = (byte *******)ppppppbVar20[2];
    func_0x000107c052d4(param_3,&ppppppbStack_250);
code_r0x00010042ec90:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(ppppppbVar20);
    return;
  case 0x14:
    pppppppbStack_128 = (byte *******)param_4[1];
    unaff_x19 = (byte *******)param_4[2];
    unaff_x22 = (byte *******)param_4[3];
    pppppppbStack_120 = unaff_x19 + (long)unaff_x22 * 4;
    pppppppbStack_118 = (byte *******)0x0;
    pppppppbStack_130 = unaff_x19;
    pppppppbStack_138 = unaff_x19;
    if (unaff_x22 != (byte *******)0x0) {
      pppppppbStack_130 = unaff_x19 + 4;
      bVar25 = *(byte *)unaff_x19;
      if (bVar25 != 0x16) goto code_r0x00010042edc4;
    }
    unaff_x20 = (byte *******)thunk_FUN_1087e422c(0,&UNK_10b22ec38,&UNK_10b20a590);
    goto code_r0x00010042ed00;
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
    pppppppbVar23 = (byte *******)param_4[2];
    unaff_x22 = pppppppbVar23 + (long)param_4[3] * 8;
    pppppppbStack_280 = pppppppbVar23;
    pppppppbStack_270 = (byte *******)param_4[1];
    pppppppbStack_268 = unaff_x22;
    bStack_2a0 = 0x16;
    pppppppbStack_260 = (byte *******)0x0;
    pppppppbStack_138 = (byte *******)0x8000000000000001;
    if (param_4[3] != (byte ******)0x0) {
      unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
      unaff_x21 = (byte *******)((ulong)&bStack_2a0 | 1);
      unaff_x20 = (byte *******)((ulong)&uStack_100 | 1);
      uStack_2ac = 6;
      pppppppbStack_2a8 = (byte *******)0x8000000000000001;
      unaff_x25 = (byte ******)0x8000000000000000;
      unaff_x26 = (byte *******)0x8000000000000001;
      pppppppbStack_2d0 = param_3;
      do {
        unaff_x27 = pppppppbVar23 + 8;
        unaff_x19 = (byte *******)(ulong)*(byte *)pppppppbVar23;
        pppppppbStack_278 = unaff_x27;
        pppppppbVar26 = pppppppbStack_260;
        if (*(byte *)pppppppbVar23 == 0x16) break;
code_r0x00010042e87c:
        pppppppbStack_260 = (byte *******)((long)pppppppbVar26 + 1);
        iVar28 = (int)unaff_x19;
        uStack_90 = (byte ******)CONCAT71(uStack_90._1_7_,(char)unaff_x19);
        uVar24 = *(undefined8 *)((long)pppppppbVar23 + 1);
        ppppppbVar21 = pppppppbVar23[3];
        ppppppbVar20 = pppppppbVar23[2];
        pppppppbStack_f8 = (byte *******)pppppppbVar23[5];
        uStack_100 = (byte *******)pppppppbVar23[4];
        unaff_x28[1] = *(undefined8 *)((long)pppppppbVar23 + 9);
        *unaff_x28 = uVar24;
        *(byte *******)((long)unaff_x28 + 0x17) = ppppppbVar21;
        *(byte *******)((long)unaff_x28 + 0xf) = ppppppbVar20;
        pppppppbStack_e8 = (byte *******)pppppppbVar23[7];
        pppppppbStack_f0 = (byte *******)pppppppbVar23[6];
        if (bStack_2a0 != 0x16) {
          FUN_100e077ec(&bStack_2a0);
        }
        unaff_x24 = pppppppbStack_80;
        param_3 = pppppppbStack_88;
        uStack_298 = SUB81(pppppppbStack_f8,0);
        uStack_297 = (undefined7)((ulong)pppppppbStack_f8 >> 8);
        bStack_2a0 = (byte)uStack_100;
        uStack_29f = (undefined7)((ulong)uStack_100 >> 8);
        pppppppbStack_288 = pppppppbStack_e8;
        uStack_290 = SUB81(pppppppbStack_f0,0);
        uStack_28f = (undefined7)((ulong)pppppppbStack_f0 >> 8);
        if (iVar28 < 0xd) {
          if (iVar28 == 1) {
            bVar25 = uStack_90._1_1_;
            if (2 < uStack_90._1_1_) {
              bVar25 = 3;
            }
code_r0x00010042eae0:
            uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar25);
            uStack_100 = (byte *******)((ulong)uStack_100._1_7_ << 8);
            goto code_r0x00010042eae4;
          }
          if (iVar28 == 4) {
            pppppppbVar26 = pppppppbStack_88;
            if ((byte *******)0x2 < pppppppbStack_88) {
              pppppppbVar26 = (byte *******)0x3;
            }
            bVar25 = (byte)pppppppbVar26;
            goto code_r0x00010042eae0;
          }
          if (iVar28 == 0xc) {
            if (lStack_78 == 6) {
              if (*(int *)pppppppbStack_80 != 0x74617473 ||
                  *(short *)((long)pppppppbStack_80 + 4) != 0x7375) goto code_r0x00010042ea64;
code_r0x00010042ec30:
              uStack_100 = (byte *******)CONCAT62(uStack_100._2_6_,0x100);
            }
            else if (lStack_78 == 0x10) {
              if (*pppppppbStack_80 != (byte ******)0x65736e6f70736572 ||
                  pppppppbStack_80[1] != (byte ******)0x64616f6c7961705f) goto code_r0x00010042ea64;
              uStack_100 = (byte *******)CONCAT62(uStack_100._2_6_,0x200);
            }
            else if ((lStack_78 == 0xf) &&
                    (*pppppppbStack_80 == (byte ******)0x5f656d69746e7572 &&
                     *(long *)((long)pppppppbStack_80 + 7) == 0x64695f6c6c65635f)) {
              uStack_100 = (byte *******)((ulong)uStack_100._2_6_ << 0x10);
            }
            else {
code_r0x00010042ea64:
              uStack_100 = (byte *******)CONCAT62(uStack_100._2_6_,0x300);
            }
joined_r0x00010042ea3c:
            if (param_3 != (byte *******)0x0) {
              _free(unaff_x24);
            }
          }
          else {
code_r0x00010042ec4c:
            param_3 = (byte *******)&uStack_90;
code_r0x00010042ec50:
            pppppppbStack_f8 = (byte *******)thunk_FUN_108855b04(param_3,auStack_69,&UNK_10b210280);
            uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,1);
          }
        }
        else {
          if (iVar28 == 0xd) {
            if (pppppppbStack_80 == (byte *******)0x6) {
              if (*(int *)pppppppbStack_88 != 0x74617473 ||
                  *(short *)((long)pppppppbStack_88 + 4) != 0x7375) goto code_r0x00010042ead8;
              bVar25 = 1;
            }
            else if (pppppppbStack_80 == (byte *******)0x10) {
              if (*pppppppbStack_88 != (byte ******)0x65736e6f70736572 ||
                  pppppppbStack_88[1] != (byte ******)0x64616f6c7961705f) goto code_r0x00010042ead8;
              bVar25 = 2;
            }
            else if ((pppppppbStack_80 == (byte *******)0xf) &&
                    (*pppppppbStack_88 == (byte ******)0x5f656d69746e7572 &&
                     *(long *)((long)pppppppbStack_88 + 7) == 0x64695f6c6c65635f)) {
              bVar25 = 0;
            }
            else {
code_r0x00010042ead8:
              bVar25 = 3;
            }
            goto code_r0x00010042eae0;
          }
          if (iVar28 == 0xe) {
            FUN_100b48868(&uStack_100,pppppppbStack_80);
            goto joined_r0x00010042ea3c;
          }
          if (iVar28 != 0xf) goto code_r0x00010042ec4c;
          FUN_100b48868(&uStack_100,pppppppbStack_88,pppppppbStack_80);
code_r0x00010042eae4:
          FUN_100e077ec(&uStack_90);
        }
        bVar25 = bStack_2a0;
        pppppppbVar19 = pppppppbStack_2a8;
        pppppppbVar26 = pppppppbStack_2c0;
        pppppppbVar23 = pppppppbStack_f8;
        pppppppbVar27 = unaff_x26;
        if (((ulong)uStack_100 & 1) != 0) {
code_r0x00010042ee58:
          pppppppbStack_138 = pppppppbVar27;
          pppppppbVar26 = (byte *******)0x1d;
          unaff_x22 = pppppppbStack_2c0;
          pppppppbStack_130 = pppppppbStack_2c0;
          goto code_r0x00010042ee5c;
        }
        if (uStack_100._1_1_ < 2) {
          if (uStack_100._1_1_ == 0) {
            if (unaff_x25 != (byte ******)0x8000000000000000) {
              pppppppbStack_130 = pppppppbStack_2c0;
              uStack_90 = (byte ******)&UNK_108cb8ac2;
              pppppppbStack_88 = (byte *******)0xf;
              uStack_100 = (byte *******)&uStack_90;
              pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
              pppppppbStack_138 = unaff_x26;
              ppppppbVar20 = (byte ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
LAB_10042f364:
              unaff_x20 = (byte *******)&bStack_2a0;
              *pppppppbStack_2d0 = (byte ******)0x1d;
              pppppppbStack_2d0[1] = ppppppbVar20;
              unaff_x19 = (byte *******)0x1;
              iVar28 = 1;
              unaff_x22 = pppppppbVar26;
              unaff_x21 = pppppppbVar19;
              goto joined_r0x00010042f378;
            }
            bStack_2a0 = 0x16;
            if (bVar25 == 0x16) {
              pppppppbStack_130 = pppppppbStack_2c0;
              pppppppbStack_138 = unaff_x26;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010042f3a8;
            }
            ppppppbVar20 = *unaff_x21;
            unaff_x20[1] = unaff_x21[1];
            *unaff_x20 = ppppppbVar20;
            uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
            uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,bVar25);
            FUN_1004b62d4(&uStack_90,&uStack_100);
            if (uStack_90 == (byte ******)0x8000000000000000) {
              pppppppbStack_130 = pppppppbStack_2c0;
              unaff_x22 = pppppppbStack_2c0;
              pppppppbStack_138 = unaff_x26;
              goto code_r0x00010042f0e8;
            }
            pppppppbStack_2b8 = pppppppbStack_88;
            pppppppbStack_2c8 = pppppppbStack_80;
            unaff_x25 = uStack_90;
            pppppppbVar23 = unaff_x27;
          }
          else {
            if (uStack_2ac != 6) {
              pppppppbStack_130 = pppppppbStack_2c0;
              uStack_90 = (byte ******)&UNK_108ca105e;
              pppppppbStack_88 = (byte *******)0x6;
              uStack_100 = (byte *******)&uStack_90;
              pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
              pppppppbStack_138 = unaff_x26;
              ppppppbVar20 = (byte ******)
                             thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
              goto LAB_10042f364;
            }
code_r0x00010042ebb0:
            pppppppbVar23 = (byte *******)(ulong)bStack_2a0;
            bStack_2a0 = 0x16;
code_r0x00010042ebbc:
            bVar25 = (byte)pppppppbVar23;
            if ((int)pppppppbVar23 == 0x16) goto code_r0x00010042f250;
            ppppppbVar20 = *unaff_x21;
            unaff_x20[1] = unaff_x21[1];
            *unaff_x20 = ppppppbVar20;
code_r0x00010042ebcc:
            pppppppbVar32 = *(byte ********)((long)unaff_x21 + 0x17);
            pppppppbVar31 = *(byte ********)((long)unaff_x21 + 0xf);
code_r0x00010042ebd0:
            *(byte ********)((long)unaff_x20 + 0x17) = pppppppbVar32;
            *(byte ********)((long)unaff_x20 + 0xf) = pppppppbVar31;
            uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,bVar25);
            FUN_101300cb4(&uStack_90,&uStack_100);
            in_ZR = (char)uStack_90 == '\x01';
code_r0x00010042ebec:
            pppppppbVar23 = pppppppbStack_88;
            pppppppbVar27 = unaff_x26;
            if ((bool)in_ZR) goto code_r0x00010042ee58;
            pppppppbVar23 = (byte *******)((ulong)uStack_90 >> 8 & 0xff);
code_r0x00010042ebf4:
            uStack_2ac = (uint)pppppppbVar23;
            pppppppbVar23 = unaff_x27;
          }
        }
        else if (uStack_100._1_1_ == 2) {
          pppppppbVar23 = (byte *******)0x8000000000000001;
          pppppppbVar27 = pppppppbStack_2a8;
code_r0x00010042eb78:
          param_3 = pppppppbStack_2c0;
          if (pppppppbVar27 != pppppppbVar23) {
            pppppppbStack_130 = pppppppbStack_2c0;
            uStack_90 = (byte ******)&UNK_108cdd020;
            pppppppbStack_88 = (byte *******)0x10;
            uStack_100 = (byte *******)&uStack_90;
            pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
            pppppppbStack_138 = unaff_x26;
            ppppppbVar20 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            unaff_x20 = (byte *******)&bStack_2a0;
            *pppppppbStack_2d0 = (byte ******)0x1d;
            pppppppbStack_2d0[1] = ppppppbVar20;
            unaff_x19 = (byte *******)0x1;
            iVar28 = 1;
            unaff_x21 = pppppppbVar27;
            goto joined_r0x00010042f2d0;
          }
          pppppppbStack_2a8 = pppppppbVar23;
          func_0x000100f1ec38(&uStack_100,&bStack_2a0);
          if (uStack_100 == (byte *******)0x8000000000000001) {
            *pppppppbStack_2d0 = (byte ******)0x1d;
            pppppppbStack_2d0[1] = (byte ******)pppppppbStack_f8;
            goto code_r0x00010042f0c4;
          }
          pppppppbStack_2c0 = pppppppbStack_f8;
          unaff_x26 = uStack_100;
code_r0x00010042e838:
          pppppppbStack_120 = pppppppbStack_e8;
          pppppppbStack_128 = pppppppbStack_f0;
          uStack_110 = uStack_d8;
          pppppppbStack_118 = pppppppbStack_e0;
          uStack_108 = uStack_d0;
          unaff_x22 = pppppppbStack_268;
          pppppppbVar23 = pppppppbStack_278;
          pppppppbStack_2a8 = unaff_x26;
        }
        else {
          bStack_2a0 = 0x16;
          in_ZR = bVar25 == 0x16;
code_r0x00010042ec0c:
          if ((bool)in_ZR) {
code_r0x00010042f250:
            pppppppbStack_130 = pppppppbStack_2c0;
            pppppppbStack_138 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010042f3a8:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10042f3ac);
            (*pcVar2)();
          }
code_r0x00010042ec10:
          pppppppbVar32 = (byte *******)unaff_x21[1];
          pppppppbVar31 = (byte *******)*unaff_x21;
code_r0x00010042ec14:
          pppppppbVar23 = unaff_x27;
          unaff_x20[1] = (byte ******)pppppppbVar32;
          *unaff_x20 = (byte ******)pppppppbVar31;
          uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
          uStack_100 = (byte *******)CONCAT71(uStack_100._1_7_,bVar25);
          FUN_100e077ec(&uStack_100);
        }
      } while (pppppppbVar23 != unaff_x22);
      pppppppbStack_138 = unaff_x26;
      pppppppbStack_130 = pppppppbStack_2c0;
      unaff_x22 = pppppppbStack_2c0;
      param_3 = pppppppbStack_2d0;
      if (unaff_x25 != (byte ******)0x8000000000000000) {
        pppppppbVar26 = (byte *******)(ulong)uStack_2ac;
        in_ZR = uStack_2ac == 6;
        unaff_x19 = pppppppbStack_2d0;
        goto code_r0x00010042ee8c;
      }
      goto code_r0x00010042ed6c;
    }
    pppppppbStack_138 = (byte *******)0x8000000000000001;
    unaff_x21 = (byte *******)0x8000000000000001;
    pppppppbStack_278 = pppppppbVar23;
    goto code_r0x00010042ed74;
  case 0x16:
    goto code_r0x00010042edf8;
  case 0x17:
    goto code_r0x00010042ee08;
  case 0x18:
    goto code_r0x00010042edd0;
  case 0x19:
    goto code_r0x00010042ede8;
  case 0x1a:
    goto code_r0x00010042ed94;
  case 0x1b:
    goto code_r0x00010042ee18;
  case 0x1c:
    goto code_r0x00010042ee30;
  case 0x1d:
    goto code_r0x00010042edf0;
  case 0x1e:
    goto code_r0x00010042ee48;
  case 0x1f:
code_r0x00010042edc4:
    uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x19 + 9);
    uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x19 + 1);
    uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x19 + 1) >> 0x38);
    pppppppbVar32 = (byte *******)unaff_x19[3];
    pppppppbVar31 = (byte *******)unaff_x19[2];
code_r0x00010042edd0:
    uStack_290 = SUB81(pppppppbVar31,0);
    uStack_28f = (undefined7)((ulong)pppppppbVar31 >> 8);
    pppppppbVar26 = (byte *******)0x1;
    pppppppbStack_288 = pppppppbVar32;
code_r0x00010042edd8:
    bStack_2a0 = bVar25;
    pppppppbVar19 = (byte *******)&pppppppbStack_c0;
    param_4 = (byte *******)&bStack_2a0;
    pppppppbStack_118 = pppppppbVar26;
code_r0x00010042ede8:
    FUN_1004b62d4(pppppppbVar19,param_4);
    unaff_x20 = pppppppbStack_b8;
    unaff_x21 = pppppppbStack_c0;
code_r0x00010042edf0:
    in_ZR = unaff_x21 == (byte *******)0x8000000000000000;
code_r0x00010042edf8:
    if ((bool)in_ZR) {
code_r0x00010042ed00:
      *param_3 = (byte ******)0x1d;
      param_3[1] = (byte ******)unaff_x20;
    }
    else {
      bVar18 = unaff_x22 == (byte *******)0x1;
      unaff_x22 = pppppppbStack_b0;
      if (bVar18) {
code_r0x00010042ee1c:
        pppppppbVar19 = (byte *******)0x1;
code_r0x00010042ee20:
        param_4 = (byte *******)&UNK_10b22ec38;
        param_5 = &UNK_10b20a590;
code_r0x00010042ee30:
        pppppppbVar19 = (byte *******)thunk_FUN_1087e422c(pppppppbVar19,param_4,param_5);
      }
      else {
code_r0x00010042ee08:
        pppppppbStack_130 = unaff_x19 + 8;
        bVar25 = *(byte *)(unaff_x19 + 4);
        in_ZR = bVar25 == 0x16;
code_r0x00010042ee18:
        if ((bool)in_ZR) goto code_r0x00010042ee1c;
code_r0x00010042f18c:
        uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x29);
        uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x21);
        uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x19 + 0x21) >> 0x38);
code_r0x00010042f194:
        pppppppbStack_288 = (byte *******)unaff_x19[7];
        uStack_290 = SUB81(unaff_x19[6],0);
        uStack_28f = (undefined7)((ulong)unaff_x19[6] >> 8);
        pppppppbStack_118 = (byte *******)0x2;
code_r0x00010042f1a4:
        bStack_2a0 = bVar25;
        pppppppbVar19 = (byte *******)&pppppppbStack_c0;
code_r0x00010042f1ac:
        FUN_101300cb4(pppppppbVar19,&bStack_2a0);
code_r0x00010042f1b4:
        pppppppbVar19 = pppppppbStack_b8;
        if (((ulong)pppppppbStack_c0 & 1) == 0) {
code_r0x00010042f1c4:
          unaff_x19 = (byte *******)((ulong)pppppppbStack_c0 >> 8 & 0xff);
          FUN_100f28ba8(&bStack_2a0,&pppppppbStack_138);
code_r0x00010042f1d4:
          pppppppbVar23 = (byte *******)CONCAT71(uStack_29f,bStack_2a0);
          pppppppbVar19 = (byte *******)CONCAT71(uStack_297,uStack_298);
          pppppppbVar26 = (byte *******)0x2;
code_r0x00010042f1dc:
          if (pppppppbVar23 == (byte *******)((ulong)pppppppbVar26 | 0x8000000000000000))
          goto code_r0x00010042ee34;
          pppppppbVar31 = (byte *******)CONCAT71(uStack_28f,uStack_290);
          pppppppbVar32 = pppppppbStack_288;
          pppppppbVar33 = pppppppbStack_280;
          pppppppbVar34 = pppppppbStack_278;
code_r0x00010042f1ec:
          pppppppbVar26 = pppppppbStack_270;
          uStack_100 = pppppppbVar31;
          pppppppbStack_f8 = pppppppbVar32;
          pppppppbStack_f0 = pppppppbVar33;
          pppppppbStack_e8 = pppppppbVar34;
code_r0x00010042f1f4:
          pppppppbStack_e0 = pppppppbVar26;
          if (pppppppbVar23 != (byte *******)0x8000000000000001) {
code_r0x00010042f204:
            param_3[7] = (byte ******)pppppppbStack_f8;
            param_3[6] = (byte ******)uStack_100;
            param_3[9] = (byte ******)pppppppbStack_e8;
            param_3[8] = (byte ******)pppppppbStack_f0;
            param_3[10] = (byte ******)pppppppbStack_e0;
            *param_3 = (byte ******)0x15;
            param_3[1] = (byte ******)unaff_x21;
            param_3[2] = (byte ******)unaff_x20;
            param_3[3] = (byte ******)unaff_x22;
            param_3[4] = (byte ******)pppppppbVar23;
            param_3[5] = (byte ******)pppppppbVar19;
            *(byte *)(param_3 + 0xb) = (byte)unaff_x19;
            pppppppbVar19 = &ppppppbStack_250;
            param_5 = (undefined *)0x118;
            param_4 = param_3;
code_r0x00010042f234:
            _memcpy(pppppppbVar19,param_4,param_5);
            ppppppbVar20 = (byte ******)FUN_100fbc738(&pppppppbStack_138);
            if (ppppppbVar20 == (byte ******)0x0) {
              return;
            }
            *param_3 = (byte ******)0x1d;
            param_3[1] = ppppppbVar20;
code_r0x00010042f0ac:
            FUN_100e35e0c(&ppppppbStack_250);
code_r0x00010042f0b4:
            return;
          }
          pppppppbVar19 = (byte *******)0x2;
          goto code_r0x00010042ee20;
        }
      }
code_r0x00010042ee34:
      pppppppbVar23 = (byte *******)0x1d;
code_r0x00010042ee38:
      *param_3 = (byte ******)pppppppbVar23;
      param_3[1] = (byte ******)pppppppbVar19;
      if (unaff_x21 != (byte *******)0x0) {
        _free(unaff_x20);
code_r0x00010042ee48:
      }
    }
    lVar29 = ((ulong)((long)pppppppbStack_120 - (long)pppppppbStack_130) >> 5) + 1;
    pppppppbVar26 = pppppppbStack_130;
    while (lVar29 = lVar29 + -1, lVar29 != 0) {
      FUN_100e077ec(pppppppbVar26);
      pppppppbVar26 = pppppppbVar26 + 4;
    }
    if (pppppppbStack_128 == (byte *******)0x0) {
      return;
    }
code_r0x00010042ed3c:
    _free(pppppppbStack_138);
code_r0x00010042ed44:
    return;
  case 0x20:
    goto code_r0x00010042ee38;
  case 0x21:
code_r0x00010042ed6c:
    unaff_x21 = pppppppbStack_2a8;
code_r0x00010042ed74:
    unaff_x20 = (byte *******)&bStack_2a0;
    uStack_90 = (byte ******)&UNK_108cb8ac2;
    pppppppbStack_88 = (byte *******)0xf;
    uStack_100 = (byte *******)&uStack_90;
    pppppppbStack_f8 = (byte *******)&DAT_100c7b3a0;
    pppppppbVar19 = param_3;
code_r0x00010042ed94:
    unaff_x25 = (byte ******)0x0;
    param_3 = (byte *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010042ed9c:
    ppppppbVar20 = (byte ******)thunk_FUN_108856088((byte *)((long)param_3 + 0x8f7),&uStack_100);
    *pppppppbVar19 = (byte ******)0x1d;
    pppppppbVar19[1] = ppppppbVar20;
    unaff_x19 = (byte *******)0x1;
    iVar28 = 1;
joined_r0x00010042f378:
    if (unaff_x21 != (byte *******)0x8000000000000001) {
LAB_10042f114:
      iVar28 = (int)unaff_x19;
      param_3 = unaff_x22;
joined_r0x00010042f2d0:
      if (unaff_x21 != (byte *******)0x8000000000000000) {
        iVar28 = (int)unaff_x19;
        if (unaff_x21 != (byte *******)0x0) {
code_r0x00010042f128:
          iVar28 = (int)unaff_x19;
          _free(param_3);
        }
        if (pppppppbStack_120 != (byte *******)0x0) {
          _free(pppppppbStack_118);
        }
      }
    }
LAB_10042f13c:
    if ((iVar28 != 0) && (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0)) {
      _free(pppppppbStack_2b8);
    }
LAB_10042f150:
    FUN_100d34830(unaff_x20 + 4);
code_r0x00010042f158:
    if (bStack_2a0 == 0x16) {
      return;
    }
    FUN_100e077ec(&bStack_2a0);
    return;
  case 0x22:
    goto code_r0x00010042ed9c;
  case 0x23:
    goto code_r0x00010042ee20;
  case 0x24:
    goto code_r0x00010042ed44;
  case 0x25:
    goto code_r0x00010042edd8;
  case 0x26:
    goto code_r0x00010042ed3c;
  case 0x28:
  case 0x37:
  case 99:
    goto code_r0x00010042ee94;
  case 0x29:
    goto code_r0x00010042eb78;
  case 0x2a:
    goto code_r0x00010042ebbc;
  case 0x2c:
  case 0x58:
    goto code_r0x00010042ef20;
  case 0x2d:
  case 0x59:
    goto code_r0x00010042ef30;
  case 0x2e:
  case 0x5a:
  case 0xa9:
    goto code_r0x00010042eef8;
  case 0x30:
  case 0x5c:
  case 0xa6:
  case 0xd4:
    goto code_r0x00010042eebc;
  case 0x31:
  case 0x5d:
  case 0xa7:
  case 0xe7:
  case 0xfd:
    goto code_r0x00010042ef40;
  case 0x32:
  case 0x5e:
  case 0xa4:
    goto code_r0x00010042ef58;
  case 0x33:
  case 0x5f:
  case 0x9a:
  case 0xea:
    goto code_r0x00010042ef18;
  case 0x34:
  case 0x60:
  case 0xc6:
  case 0xe8:
  case 0xfe:
    goto code_r0x00010042ef70;
  case 0x35:
  case 0x61:
    goto code_r0x00010042eeec;
  case 0x38:
  case 100:
    goto code_r0x00010042eec4;
  case 0x39:
  case 0x65:
  case 200:
    goto code_r0x00010042ef48;
  case 0x3a:
  case 0x66:
    goto code_r0x00010042ee6c;
  case 0x3b:
  case 0x67:
    goto code_r0x00010042ef00;
  case 0x3c:
  case 0x68:
  case 0xa8:
    goto code_r0x00010042ee64;
  case 0x3f:
  case 0x6b:
  case 0xad:
  case 0xd9:
    goto code_r0x00010042ebb0;
  case 0x40:
  case 0x6c:
  case 0xae:
  case 0xda:
    goto code_r0x00010042ebf4;
  case 0x42:
    goto code_r0x00010042f074;
  case 0x43:
    goto code_r0x00010042f084;
  case 0x44:
    goto code_r0x00010042f04c;
  case 0x45:
    goto code_r0x00010042f064;
  case 0x47:
    goto code_r0x00010042f094;
  case 0x48:
    goto code_r0x00010042f0ac;
  case 0x49:
  case 0xee:
    goto code_r0x00010042f06c;
  case 0x4a:
code_r0x00010042f0c4:
    iVar28 = 1;
    unaff_x20 = (byte *******)&bStack_2a0;
    goto LAB_10042f13c;
  case 0x4c:
    goto code_r0x00010042f0b4;
  case 0x4e:
  case 0xba:
    goto code_r0x00010042f018;
  case 0x4f:
    goto code_r0x00010042f09c;
  case 0x51:
    goto code_r0x00010042f054;
  case 0x54:
    goto LAB_10042f114;
  case 0x55:
    goto code_r0x00010042ec0c;
  case 0x56:
    goto code_r0x00010042ec50;
  case 0x6e:
    goto code_r0x00010042f1b4;
  case 0x6f:
    goto code_r0x00010042f1c4;
  case 0x70:
    goto code_r0x00010042f18c;
  case 0x71:
    goto code_r0x00010042f1a4;
  case 0x72:
    goto LAB_10042f150;
  case 0x73:
    goto code_r0x00010042f1d4;
  case 0x74:
    goto code_r0x00010042f1ec;
  case 0x75:
    goto code_r0x00010042f1ac;
  case 0x76:
    goto code_r0x00010042f204;
  case 0x77:
    goto code_r0x00010042f180;
  case 0x78:
    goto code_r0x00010042f1f4;
  case 0x79:
    goto code_r0x00010042f128;
  case 0x7a:
    goto code_r0x00010042f158;
  case 0x7b:
    goto code_r0x00010042f1dc;
  case 0x7c:
    goto code_r0x00010042f100;
  case 0x7d:
    goto code_r0x00010042f194;
  case 0x7e:
    goto code_r0x00010042f0f8;
  case 0x80:
    goto code_r0x00010042f234;
  case 0x81:
    goto code_r0x00010042e838;
  case 0x82:
    goto code_r0x00010042e87c;
  case 0x84:
    goto code_r0x00010042f048;
  case 0x85:
    goto code_r0x00010042f058;
  case 0x86:
    goto code_r0x00010042f020;
  case 0x87:
    goto code_r0x00010042f038;
  case 0x89:
    goto code_r0x00010042f068;
  case 0x8a:
    goto code_r0x00010042f080;
  case 0x8c:
    goto code_r0x00010042f098;
  case 0x8d:
    goto code_r0x00010042f014;
  case 0x8e:
    goto code_r0x00010042f088;
  case 0x91:
    goto code_r0x00010042f070;
  case 0x92:
    goto code_r0x00010042ef94;
  case 0x93:
  case 0xb8:
    goto code_r0x00010042f028;
  case 0x96:
code_r0x00010042f0e8:
    *pppppppbStack_2d0 = (byte ******)0x1d;
    pppppppbStack_2d0[1] = (byte ******)pppppppbStack_88;
code_r0x00010042f0f8:
    unaff_x19 = (byte *******)0x1;
    unaff_x25 = (byte ******)0x0;
code_r0x00010042f100:
    iVar28 = (int)unaff_x19;
    unaff_x20 = (byte *******)&bStack_2a0;
    unaff_x21 = pppppppbStack_2a8;
    goto joined_r0x00010042f378;
  case 0x97:
    goto code_r0x00010042ebec;
  case 0x98:
    goto code_r0x00010042ec30;
  case 0x9b:
    goto code_r0x00010042ef28;
  case 0x9c:
    goto code_r0x00010042eef0;
  case 0x9e:
  case 0xd6:
    goto code_r0x00010042eeb4;
  case 0xa0:
  case 0xd5:
    goto code_r0x00010042ef50;
  case 0xa3:
  case 0xd1:
    goto code_r0x00010042eee4;
  case 0xa5:
code_r0x00010042ee8c:
    unaff_x20 = (byte *******)&bStack_2a0;
    unaff_x21 = pppppppbStack_2a8;
code_r0x00010042ee94:
    if ((bool)in_ZR) {
      uStack_90 = (byte ******)&UNK_108ca105e;
      pppppppbStack_88 = (byte *******)0x6;
      pppppppbVar23 = (byte *******)&uStack_90;
      pppppppbVar26 = (byte *******)&DAT_100c7b3a0;
code_r0x00010042eeb4:
      param_3 = (byte *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
      uStack_100 = pppppppbVar23;
      pppppppbStack_f8 = pppppppbVar26;
code_r0x00010042eebc:
      param_3 = (byte *******)((long)param_3 + 0x8f7);
      param_4 = (byte *******)&uStack_100;
code_r0x00010042eec4:
      ppppppbVar20 = (byte ******)thunk_FUN_108856088(param_3,param_4);
      *unaff_x19 = (byte ******)0x1d;
      unaff_x19[1] = ppppppbVar20;
      if (unaff_x25 != (byte ******)0x0) {
        _free(pppppppbStack_2b8);
      }
      unaff_x19 = (byte *******)0x0;
      pppppppbVar23 = (byte *******)0x8000000000000001;
code_r0x00010042eee4:
      if (unaff_x21 != pppppppbVar23) goto LAB_10042f114;
code_r0x00010042eeec:
      iVar28 = (int)unaff_x19;
      goto LAB_10042f13c;
    }
code_r0x00010042eef0:
    in_ZR = unaff_x21 == (byte *******)0x8000000000000001;
code_r0x00010042eef8:
    if ((bool)in_ZR) {
      unaff_x21 = (byte *******)0x8000000000000000;
code_r0x00010042ef00:
    }
    else {
code_r0x00010042f048:
      pppppppbVar23 = (byte *******)&pppppppbStack_138;
code_r0x00010042f04c:
      pppppppbStack_b8 = (byte *******)pppppppbVar23[3];
      pppppppbStack_c0 = (byte *******)pppppppbVar23[2];
      ppppppbStack_a8 = pppppppbVar23[5];
      pppppppbStack_b0 = (byte *******)pppppppbVar23[4];
code_r0x00010042f054:
      pppppppbVar23 = (byte *******)pppppppbVar23[6];
code_r0x00010042f058:
      pppppppbStack_a0 = pppppppbVar23;
    }
code_r0x00010042f05c:
    *unaff_x19 = (byte ******)0x15;
    unaff_x19[1] = unaff_x25;
code_r0x00010042f064:
    pppppppbVar27 = pppppppbStack_2b8;
code_r0x00010042f068:
    pppppppbVar23 = pppppppbStack_2c8;
code_r0x00010042f06c:
    unaff_x19[2] = (byte ******)pppppppbVar27;
    unaff_x19[3] = (byte ******)pppppppbVar23;
code_r0x00010042f070:
    unaff_x19[4] = (byte ******)unaff_x21;
    unaff_x19[5] = (byte ******)unaff_x22;
code_r0x00010042f074:
    unaff_x19[7] = (byte ******)pppppppbStack_b8;
    unaff_x19[6] = (byte ******)pppppppbStack_c0;
    unaff_x19[9] = ppppppbStack_a8;
    unaff_x19[8] = (byte ******)pppppppbStack_b0;
    pppppppbVar23 = pppppppbStack_a0;
code_r0x00010042f080:
    unaff_x19[10] = (byte ******)pppppppbVar23;
code_r0x00010042f084:
    *(byte *)(unaff_x19 + 0xb) = (byte)pppppppbVar26;
code_r0x00010042f088:
    param_4 = unaff_x19;
    param_3 = &ppppppbStack_250;
    param_5 = (undefined *)0x118;
    unaff_x19 = param_4;
code_r0x00010042f094:
    _memcpy(param_3,param_4,param_5);
code_r0x00010042f098:
    param_3 = (byte *******)&bStack_2a0;
code_r0x00010042f09c:
    ppppppbVar20 = (byte ******)FUN_100fbc67c(param_3);
    if (ppppppbVar20 == (byte ******)0x0) {
      return;
    }
    *unaff_x19 = (byte ******)0x1d;
    unaff_x19[1] = ppppppbVar20;
    goto code_r0x00010042f0ac;
  case 0xaa:
code_r0x00010042ee5c:
    *pppppppbStack_2d0 = (byte ******)pppppppbVar26;
    pppppppbStack_2d0[1] = (byte ******)pppppppbVar23;
code_r0x00010042ee64:
    unaff_x19 = (byte *******)0x1;
    unaff_x21 = pppppppbStack_2a8;
code_r0x00010042ee6c:
    iVar28 = (int)unaff_x19;
    unaff_x20 = (byte *******)&bStack_2a0;
    goto joined_r0x00010042f378;
  case 0xb3:
    goto code_r0x00010042efc8;
  case 0xb4:
    goto code_r0x00010042ef74;
  case 0xbb:
    goto code_r0x00010042ef4c;
  case 0xbc:
    goto code_r0x00010042ef7c;
  case 0xbe:
    goto code_r0x00010042ef24;
  case 0xc0:
    goto code_r0x00010042ef1c;
  case 0xc2:
    goto code_r0x00010042f05c;
  case 0xc3:
    goto code_r0x00010042ebd0;
  case 0xc4:
    goto code_r0x00010042ec14;
  case 199:
    goto code_r0x00010042ef80;
  case 0xcc:
    goto code_r0x00010042efa8;
  case 0xcf:
    goto code_r0x00010042ef3c;
  case 0xd2:
    goto code_r0x00010042ef14;
  case 0xdc:
  case 0xf2:
    goto code_r0x00010042efcc;
  case 0xdd:
  case 0xf3:
    goto code_r0x00010042efdc;
  case 0xe4:
  case 0xfa:
    break;
  case 0xe6:
  case 0xfc:
    goto code_r0x00010042f00c;
  case 0xe9:
  case 0xff:
    goto code_r0x00010042eff4;
  case 0xeb:
    goto code_r0x00010042efac;
  case 0xef:
    goto code_r0x00010042ebcc;
  case 0xf0:
    goto code_r0x00010042ec10;
  }
  ppppppbStack_250 = (byte ******)CONCAT71(ppppppbStack_250._1_7_,bVar25);
code_r0x00010042f020:
  param_5 = &UNK_10b21c4d0;
code_r0x00010042f028:
  pppppppbVar19 = (byte *******)FUN_107c05dcc(&ppppppbStack_250,auStack_69,param_5);
  pppppppbVar23 = (byte *******)0x1d;
code_r0x00010042f038:
  *param_3 = (byte ******)pppppppbVar23;
  param_3[1] = (byte ******)pppppppbVar19;
code_r0x00010042f180:
  return;
}

