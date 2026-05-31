
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a781c(undefined1 param_1 [16],byte *******param_2,byte *param_3,byte ******param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *******pppppppbVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char in_NG;
  byte in_ZR;
  char in_OV;
  bool bVar15;
  char *pcVar16;
  byte *******pppppppbVar17;
  byte ******ppppppbVar18;
  uint uVar19;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  undefined8 uVar22;
  byte bVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  ulong uVar27;
  byte *******extraout_x11;
  int iVar28;
  byte *******unaff_x19;
  byte *******pppppppbVar29;
  byte *******unaff_x20;
  byte *******pppppppbVar30;
  byte *******unaff_x21;
  byte *******unaff_x22;
  long lVar31;
  byte *******unaff_x23;
  byte *******unaff_x24;
  byte *******unaff_x25;
  byte *******pppppppbVar32;
  byte *******unaff_x26;
  byte *******unaff_x27;
  byte *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar33;
  undefined8 unaff_x30;
  byte *******pppppppbVar34;
  undefined1 auStack_2a0 [88];
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  undefined8 uStack_238;
  byte *******pppppppbStack_230;
  byte *******pppppppbStack_228;
  byte *******pppppppbStack_220;
  byte *******pppppppbStack_218;
  byte *******pppppppbStack_210;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_200;
  byte *******pppppppbStack_1f8;
  byte *******pppppppbStack_1f0;
  byte *******pppppppbStack_1e8;
  byte *******pppppppbStack_1e0;
  byte *******pppppppbStack_1d8;
  byte *******pppppppbStack_1d0;
  byte *******pppppppbStack_1c8;
  byte *******pppppppbStack_1c0;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  byte *******pppppppbStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  byte ******ppppppbStack_170;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte ******ppppppbStack_158;
  byte ******ppppppbStack_150;
  byte ******ppppppbStack_148;
  byte ******ppppppbStack_140;
  byte ******ppppppbStack_138;
  byte ******ppppppbStack_130;
  byte ******ppppppbStack_128;
  byte ******ppppppbStack_120;
  byte ******ppppppbStack_118;
  byte ******ppppppbStack_110;
  byte ******ppppppbStack_108;
  byte ******ppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f0;
  byte ******ppppppbStack_e8;
  byte ******ppppppbStack_e0;
  byte ******ppppppbStack_d8;
  byte ******ppppppbStack_d0;
  byte ******ppppppbStack_c8;
  byte ******ppppppbStack_c0;
  byte ******ppppppbStack_b8;
  undefined8 uStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  byte ******ppppppbStack_80;
  byte abStack_71 [17];
  
  ppppppbVar18 = param_1._8_8_;
  pppppppbVar34 = param_1._0_8_;
  puVar33 = &stack0xfffffffffffffff0;
  puVar14 = auStack_2a0 + 0x50;
  pppppppbVar30 = (byte *******)&uStack_98;
  bVar23 = *param_3;
  pppppppbVar20 = (byte *******)(ulong)bVar23;
  pppppppbVar24 = (byte *******)&UNK_108c9a200;
  uVar27 = (ulong)*(ushort *)(&UNK_108c9a200 + (long)pppppppbVar20 * 2);
  pppppppbVar26 = (byte *******)(&UNK_1004a7860 + uVar27 * 4);
  puVar12 = auStack_2a0 + 0x50;
  puVar13 = auStack_2a0 + 0x50;
  puVar9 = auStack_2a0 + 0x50;
  puVar10 = auStack_2a0 + 0x50;
  puVar11 = auStack_2a0 + 0x50;
  puVar6 = auStack_2a0 + 0x50;
  puVar7 = auStack_2a0 + 0x50;
  puVar8 = auStack_2a0 + 0x50;
  pppppppbVar17 = param_2;
  pcVar16 = (char *)param_2;
  pppppppbVar21 = pppppppbVar20;
  pppppppbVar25 = pppppppbVar26;
  pppppppbVar29 = unaff_x19;
  pppppppbVar32 = unaff_x25;
  pppppppbVar4 = uStack_b0;
  switch(bVar23) {
  case 0:
    ppppppbStack_170 = (byte ******)((ulong)CONCAT61(ppppppbStack_170._2_6_,param_3[1]) << 8);
  case 0x80:
    goto code_r0x0001004a8250;
  case 1:
    pppppppbStack_168 = (byte *******)(ulong)param_3[1];
  case 0x88:
code_r0x0001004a8208:
    bVar23 = 1;
    break;
  case 2:
    pppppppbStack_168 = (byte *******)(ulong)*(ushort *)(param_3 + 2);
    goto code_r0x0001004a8208;
  case 3:
  case 0x8f:
    pppppppbStack_168 = (byte *******)(ulong)*(uint *)(param_3 + 4);
    goto code_r0x0001004a8208;
  case 4:
    pppppppbStack_168 = *(byte ********)(param_3 + 8);
    goto code_r0x0001004a8208;
  case 5:
  case 0x90:
    pppppppbVar20 = (byte *******)(long)(char)param_3[1];
  case 0x86:
code_r0x0001004a8244:
    bVar23 = 2;
    pppppppbStack_168 = pppppppbVar20;
    break;
  case 6:
    pppppppbVar20 = (byte *******)(long)*(short *)(param_3 + 2);
    goto code_r0x0001004a8244;
  case 7:
    pppppppbVar20 = (byte *******)(long)*(int *)(param_3 + 4);
    goto code_r0x0001004a8244;
  case 8:
    pppppppbVar20 = *(byte ********)(param_3 + 8);
    goto code_r0x0001004a8244;
  case 9:
    pppppppbStack_168 = (byte *******)(double)*(float *)(param_3 + 4);
  case 0x8d:
code_r0x0001004a8238:
    bVar23 = 3;
    break;
  case 10:
    pppppppbStack_168 = *(byte ********)(param_3 + 8);
    goto code_r0x0001004a8238;
  case 0xb:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x6f:
  case 0xa0:
    puVar9 = &stack0xffffffffffffffa0;
    puVar33 = unaff_x29;
code_r0x0001004a8174:
    pppppppbVar30 = *(byte ********)(puVar9 + 0x40);
    unaff_x19 = *(byte ********)(puVar9 + 0x48);
    puVar10 = puVar9;
code_r0x0001004a817c:
    puVar11 = puVar10;
code_r0x0001004a8184:
    *(byte ********)(puVar11 + 0x40) = pppppppbVar30;
    *(byte ********)(puVar11 + 0x48) = unaff_x19;
    *(undefined1 **)(puVar11 + 0x50) = puVar33;
    *(undefined8 *)(puVar11 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar11 + 0x1c) = 0;
    uVar19 = (uint)param_3;
    if (uVar19 < 0x80) {
      puVar11[0x1c] = (byte)param_3;
      uVar22 = 1;
    }
    else {
      bVar23 = (byte)param_3 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        puVar11[0x1c] = (byte)(uVar19 >> 6) | 0xc0;
        puVar11[0x1d] = bVar23;
        uVar22 = 2;
      }
      else {
        bVar2 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          puVar11[0x1c] = (byte)(uVar19 >> 0xc) | 0xe0;
          puVar11[0x1d] = bVar2;
          puVar11[0x1e] = bVar23;
          uVar22 = 3;
        }
        else {
          puVar11[0x1c] = (byte)(uVar19 >> 0x12) | 0xf0;
          puVar11[0x1d] = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          puVar11[0x1e] = bVar2;
          puVar11[0x1f] = bVar23;
          uVar22 = 4;
        }
      }
    }
    *(undefined1 **)(puVar11 + 0x28) = puVar11 + 0x1c;
    *(undefined8 *)(puVar11 + 0x30) = uVar22;
    puVar11[0x20] = 5;
    ppppppbVar18 = (byte ******)func_0x000108a4a50c(puVar11 + 0x20,puVar11 + 0x3f,&UNK_10b21b890);
    *param_2 = (byte ******)0x11;
    param_2[1] = ppppppbVar18;
    return;
  case 0xc:
  case 0x74:
    param_3 = param_3 + 8;
  case 0x78:
    puVar12 = &stack0xffffffffffffffa0;
    pppppppbVar30 = unaff_x20;
    pppppppbVar17 = unaff_x21;
    puVar33 = unaff_x29;
code_r0x0001004a81ac:
    puVar13 = puVar12;
code_r0x0001004a81b0:
    puVar14 = puVar13 + 0x60;
code_r0x0001004a81b8:
    *(byte ********)(puVar14 + -0x30) = unaff_x22;
    *(byte ********)(puVar14 + -0x28) = pppppppbVar17;
    *(byte ********)(puVar14 + -0x20) = pppppppbVar30;
    *(byte ********)(puVar14 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar14 + -0x10) = puVar33;
    *(undefined8 *)(puVar14 + -8) = unaff_x30;
    uVar22 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(puVar14 + -0x48) = uVar22;
    *(undefined8 *)(puVar14 + -0x40) = uVar1;
    puVar14[-0x50] = 5;
    ppppppbVar18 = (byte ******)func_0x000108a4a50c(puVar14 + -0x50,puVar14 + -0x31,&UNK_10b21b890);
    *param_2 = (byte ******)0x11;
    param_2[1] = ppppppbVar18;
    if (*(long *)param_3 != 0) {
      _free(uVar22);
    }
    return;
  case 0xd:
    pppppppbStack_168 = *(byte ********)(param_3 + 8);
    pppppppbStack_160 = *(byte ********)(param_3 + 0x10);
    bVar23 = 5;
    break;
  case 0xe:
  case 0x7d:
    param_3 = param_3 + 8;
  case 0x9b:
    puVar6 = &stack0xffffffffffffffa0;
    puVar33 = unaff_x29;
code_r0x0001004a814c:
    pppppppbVar30 = *(byte ********)(puVar6 + 0x40);
    unaff_x19 = *(byte ********)(puVar6 + 0x48);
    unaff_x22 = *(byte ********)(puVar6 + 0x30);
    pppppppbVar17 = *(byte ********)(puVar6 + 0x38);
    puVar7 = puVar6;
code_r0x0001004a8154:
    puVar8 = puVar7;
code_r0x0001004a815c:
    *(byte ********)(puVar8 + 0x30) = unaff_x22;
    *(byte ********)(puVar8 + 0x38) = pppppppbVar17;
    *(byte ********)(puVar8 + 0x40) = pppppppbVar30;
    *(byte ********)(puVar8 + 0x48) = unaff_x19;
    *(undefined1 **)(puVar8 + 0x50) = puVar33;
    *(undefined8 *)(puVar8 + 0x58) = unaff_x30;
    uVar22 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(puVar8 + 0x18) = uVar22;
    *(undefined8 *)(puVar8 + 0x20) = uVar1;
    puVar8[0x10] = 6;
    ppppppbVar18 = (byte ******)func_0x000108a4a50c(puVar8 + 0x10,puVar8 + 0x2f,&UNK_10b21b890);
    *param_2 = (byte ******)0x11;
    param_2[1] = ppppppbVar18;
    if (*(long *)param_3 != 0) {
      _free(uVar22);
    }
    return;
  case 0xf:
    pppppppbVar20 = *(byte ********)(param_3 + 8);
    pppppppbVar24 = *(byte ********)(param_3 + 0x10);
  case 0xac:
    bVar23 = 6;
    pppppppbStack_168 = pppppppbVar20;
    pppppppbStack_160 = pppppppbVar24;
    break;
  case 0x10:
  case 0x70:
  case 0x9a:
    bVar23 = 8;
    break;
  default:
    unaff_x19 = *(byte ********)(param_3 + 8);
    pppppppbStack_168 = (byte *******)unaff_x19[1];
    ppppppbStack_170 = *unaff_x19;
  case 0x4d:
    pppppppbVar17 = unaff_x19;
    ppppppbStack_158 = pppppppbVar17[3];
    pppppppbStack_160 = (byte *******)pppppppbVar17[2];
    func_0x000107c04804(param_2,&ppppppbStack_170);
code_r0x0001004a7934:
code_r0x0001004a7938:
code_r0x0001004a7940:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppbVar17);
    return;
  case 0x12:
  case 0x89:
    bVar23 = 7;
    break;
  case 0x13:
    unaff_x19 = *(byte ********)(param_3 + 8);
    pppppppbStack_168 = (byte *******)unaff_x19[1];
    ppppppbStack_170 = *unaff_x19;
    ppppppbVar18 = unaff_x19[3];
    pppppppbVar34 = (byte *******)unaff_x19[2];
  case 0x53:
    pppppppbVar17 = unaff_x19;
    pppppppbStack_160 = pppppppbVar34;
    ppppppbStack_158 = ppppppbVar18;
    func_0x000107c0554c(param_2,&ppppppbStack_170);
    goto code_r0x0001004a7934;
  case 0x14:
    unaff_x25 = *(byte ********)(param_3 + 8);
    unaff_x19 = *(byte ********)(param_3 + 0x10);
    pppppppbVar20 = *(byte ********)(param_3 + 0x18);
    unaff_x27 = unaff_x19 + (long)pppppppbVar20 * 4;
    pppppppbStack_1c0 = unaff_x19;
    pppppppbStack_1b8 = unaff_x19;
    pppppppbStack_1b0 = unaff_x25;
    pppppppbStack_1a8 = unaff_x27;
  case 0x48:
    pppppppbStack_1a0 = (byte *******)0x0;
    pppppppbVar29 = unaff_x19;
    if (pppppppbVar20 == (byte *******)0x0) {
      unaff_x23 = (byte *******)0x0;
      unaff_x26 = (byte *******)0x8000000000000000;
      pppppppbVar24 = unaff_x27;
      if (unaff_x19 == unaff_x27) {
code_r0x0001004a7dd0:
        pppppppbStack_a8 = (byte *******)thunk_FUN_1087e422c(1,&UNK_10b22b958,&UNK_10b20a590);
        unaff_x19 = pppppppbVar24;
code_r0x0001004a7dec:
        *param_2 = (byte ******)0x11;
        param_2[1] = (byte ******)pppppppbStack_a8;
code_r0x0001004a7df4:
        if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
          _free(pppppppbStack_1c8);
        }
        goto code_r0x0001004a7e08;
      }
code_r0x0001004a7dbc:
      pppppppbVar24 = unaff_x19 + 4;
      pppppppbStack_1b8 = pppppppbVar24;
      if (*(byte *)unaff_x19 == 0x16) goto code_r0x0001004a7dd0;
      uVar22 = *(undefined8 *)((long)unaff_x19 + 1);
      uStack_8f = (undefined7)*(undefined8 *)((long)unaff_x19 + 9);
      uStack_98._1_1_ = (byte)uVar22;
      uStack_98._2_6_ = (undefined6)((ulong)uVar22 >> 8);
      uStack_90 = (undefined1)((ulong)uVar22 >> 0x38);
      ppppppbStack_80 = unaff_x19[3];
      uStack_88 = SUB81(unaff_x19[2],0);
      uStack_87 = (undefined7)((ulong)unaff_x19[2] >> 8);
      unaff_x24 = (byte *******)((long)unaff_x23 + 1);
      pppppppbStack_1d8 = unaff_x19;
      pppppppbStack_1a0 = unaff_x24;
      uStack_98._0_1_ = *(byte *)unaff_x19;
      FUN_1004b62d4(&uStack_b0,&uStack_98);
      pppppppbStack_1d0 = uStack_b0;
      pppppppbVar20 = (byte *******)0x8000000000000000;
      unaff_x19 = pppppppbVar24;
      if (uStack_b0 == (byte *******)0x8000000000000000) goto code_r0x0001004a7dec;
      unaff_x22 = pppppppbStack_a8;
      if (pppppppbVar24 == unaff_x27) {
code_r0x0001004a8294:
        unaff_x28 = unaff_x27;
        pppppppbStack_1e0 = pppppppbVar20;
        goto code_r0x0001004a8504;
      }
      unaff_x28 = pppppppbStack_1d8 + 8;
      pppppppbVar24 = (byte *******)(ulong)*(byte *)(pppppppbStack_1d8 + 4);
      pppppppbVar20 = pppppppbStack_1d8;
      pppppppbVar26 = pppppppbStack_a0;
      pppppppbStack_1b8 = unaff_x28;
      if (*(byte *)(pppppppbStack_1d8 + 4) != 0x16) {
code_r0x0001004a82a4:
        ppppppbVar18 = *(byte *******)((long)pppppppbVar20 + 0x29);
        pppppppbVar34 = *(byte ********)((long)pppppppbVar20 + 0x21);
        pppppppbStack_1f0 = pppppppbVar26;
code_r0x0001004a82ac:
        uStack_8f = SUB87(ppppppbVar18,0);
        uStack_98._1_1_ = (byte)pppppppbVar34;
        uStack_98._2_6_ = (undefined6)((ulong)pppppppbVar34 >> 8);
        uStack_90 = (undefined1)((ulong)pppppppbVar34 >> 0x38);
        ppppppbStack_80 = pppppppbVar20[7];
        uStack_88 = SUB81(pppppppbVar20[6],0);
        uStack_87 = (undefined7)((ulong)pppppppbVar20[6] >> 8);
        unaff_x24 = (byte *******)((ulong)unaff_x23 | 2);
code_r0x0001004a82bc:
        uStack_98._0_1_ = (byte)pppppppbVar24;
        pppppppbStack_1a0 = unaff_x24;
        FUN_1004b60cc(&uStack_b0,&uStack_98);
        pppppppbStack_1e0 = uStack_b0;
        pppppppbVar24 = pppppppbStack_1f0;
        pppppppbStack_208 = pppppppbStack_a0;
        unaff_x23 = pppppppbStack_a8;
        if (uStack_b0 != (byte *******)0x8000000000000001) goto code_r0x0001004a8498;
        *param_2 = (byte ******)0x11;
        param_2[1] = (byte ******)pppppppbStack_a8;
code_r0x0001004a82ec:
        pppppppbVar24 = pppppppbStack_1d0;
code_r0x0001004a853c:
        unaff_x19 = unaff_x28;
        if (pppppppbVar24 != (byte *******)0x0) {
          _free(unaff_x22);
        }
        goto code_r0x0001004a7df4;
      }
      pppppppbStack_1e0 = (byte *******)0x8000000000000000;
      pppppppbVar24 = pppppppbStack_a0;
      pppppppbStack_208 = extraout_x11;
code_r0x0001004a8498:
      bVar15 = unaff_x28 == unaff_x27;
      unaff_x28 = unaff_x27;
      if (bVar15) {
code_r0x0001004a8504:
        pppppppbStack_a8 = (byte *******)thunk_FUN_1087e422c(3,&UNK_10b22b958,&UNK_10b20a590);
code_r0x0001004a851c:
        *param_2 = (byte ******)0x11;
        param_2[1] = (byte ******)pppppppbStack_a8;
        pppppppbVar24 = pppppppbStack_1d0;
code_r0x0001004a8528:
        if (((ulong)pppppppbStack_1e0 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x23);
        }
        goto code_r0x0001004a853c;
      }
      unaff_x28 = pppppppbStack_1d8 + 0xc;
      pppppppbStack_1b8 = unaff_x28;
      if (*(byte *)(pppppppbStack_1d8 + 8) == 0x16) goto code_r0x0001004a8504;
      uVar22 = *(undefined8 *)((long)pppppppbStack_1d8 + 0x41);
      uStack_8f = (undefined7)*(undefined8 *)((long)pppppppbStack_1d8 + 0x49);
      uStack_98._1_1_ = (byte)uVar22;
      uStack_98._2_6_ = (undefined6)((ulong)uVar22 >> 8);
      uStack_90 = (undefined1)((ulong)uVar22 >> 0x38);
      ppppppbStack_80 = pppppppbStack_1d8[0xb];
      uStack_88 = SUB81(pppppppbStack_1d8[10],0);
      uStack_87 = (undefined7)((ulong)pppppppbStack_1d8[10] >> 8);
      pppppppbStack_1a0 = (byte *******)((long)unaff_x24 + 1);
      pppppppbStack_1f0 = pppppppbVar24;
      uStack_98._0_1_ = *(byte *)(pppppppbStack_1d8 + 8);
      FUN_1004b62d4(&uStack_b0,&uStack_98);
      pppppppbVar24 = pppppppbStack_a0;
      pppppppbStack_200 = uStack_b0;
      pppppppbStack_1f8 = pppppppbStack_a8;
      if (uStack_b0 == (byte *******)0x8000000000000000) goto code_r0x0001004a851c;
      bVar15 = unaff_x28 == unaff_x27;
      unaff_x28 = unaff_x27;
      pppppppbStack_210 = unaff_x23;
      if (bVar15) {
code_r0x0001004a8578:
        pppppppbStack_a8 = (byte *******)thunk_FUN_1087e422c(4,&UNK_10b22b958,&UNK_10b20a590);
code_r0x0001004a8594:
        pppppppbVar24 = pppppppbStack_1d0;
        unaff_x23 = pppppppbStack_210;
        *param_2 = (byte ******)0x11;
        param_2[1] = (byte ******)pppppppbStack_a8;
        if (pppppppbStack_200 != (byte *******)0x0) {
          _free(pppppppbStack_1f8);
        }
        goto code_r0x0001004a8528;
      }
      unaff_x28 = pppppppbStack_1d8 + 0x10;
      pppppppbStack_1b8 = unaff_x28;
      if (*(byte *)(pppppppbStack_1d8 + 0xc) == 0x16) goto code_r0x0001004a8578;
      uVar22 = *(undefined8 *)((long)pppppppbStack_1d8 + 0x61);
      uStack_8f = (undefined7)*(undefined8 *)((long)pppppppbStack_1d8 + 0x69);
      uStack_98._1_1_ = (byte)uVar22;
      uStack_98._2_6_ = (undefined6)((ulong)uVar22 >> 8);
      uStack_90 = (undefined1)((ulong)uVar22 >> 0x38);
      ppppppbStack_80 = pppppppbStack_1d8[0xf];
      uStack_88 = SUB81(pppppppbStack_1d8[0xe],0);
      uStack_87 = (undefined7)((ulong)pppppppbStack_1d8[0xe] >> 8);
      pppppppbStack_1a0 = (byte *******)((long)unaff_x24 + 2);
      uStack_98._0_1_ = *(byte *)(pppppppbStack_1d8 + 0xc);
      FUN_1004b62d4(&uStack_b0,&uStack_98);
      if (uStack_b0 == (byte *******)0x8000000000000000) goto code_r0x0001004a8594;
      *param_2 = (byte ******)0x5;
      param_2[1] = (byte ******)pppppppbStack_1d0;
      param_2[2] = (byte ******)unaff_x22;
      param_2[3] = (byte ******)pppppppbStack_1f0;
      param_2[4] = (byte ******)pppppppbStack_200;
      param_2[5] = (byte ******)pppppppbStack_1f8;
      param_2[6] = (byte ******)pppppppbVar24;
      param_2[7] = (byte ******)uStack_b0;
      param_2[8] = (byte ******)pppppppbStack_a8;
      param_2[9] = (byte ******)pppppppbStack_a0;
      param_2[10] = (byte ******)unaff_x26;
      param_2[0xb] = (byte ******)pppppppbStack_1c8;
      param_2[0xc] = (byte ******)pppppppbStack_1e8;
      param_2[0xd] = (byte ******)pppppppbStack_1e0;
      param_2[0xe] = (byte ******)pppppppbStack_210;
      param_2[0xf] = (byte ******)pppppppbStack_208;
      ppppppbStack_e8 = param_2[0x11];
      ppppppbStack_f0 = param_2[0x10];
      ppppppbStack_d8 = param_2[0x13];
      ppppppbStack_e0 = param_2[0x12];
      ppppppbStack_c8 = param_2[0x15];
      ppppppbStack_d0 = param_2[0x14];
      ppppppbStack_b8 = param_2[0x17];
      ppppppbStack_c0 = param_2[0x16];
      pppppppbStack_168 = (byte *******)param_2[1];
      ppppppbStack_170 = *param_2;
      ppppppbStack_158 = param_2[3];
      pppppppbStack_160 = (byte *******)param_2[2];
      ppppppbStack_148 = param_2[5];
      ppppppbStack_150 = param_2[4];
      ppppppbStack_138 = param_2[7];
      ppppppbStack_140 = param_2[6];
      ppppppbStack_128 = param_2[9];
      ppppppbStack_130 = param_2[8];
      ppppppbStack_118 = param_2[0xb];
      ppppppbStack_120 = param_2[10];
      ppppppbStack_108 = param_2[0xd];
      ppppppbStack_110 = param_2[0xc];
      ppppppbStack_f8 = param_2[0xf];
      ppppppbStack_100 = param_2[0xe];
      ppppppbVar18 = (byte ******)FUN_100fbc738(&pppppppbStack_1c0);
code_r0x0001004a8370:
      if (ppppppbVar18 != (byte ******)0x0) {
        *param_2 = (byte ******)0x11;
        param_2[1] = ppppppbVar18;
        FUN_100e02a24(&ppppppbStack_170);
      }
    }
    else {
code_r0x0001004a7964:
      unaff_x19 = pppppppbVar29 + 4;
      pppppppbStack_1b8 = unaff_x19;
      if (*(byte *)pppppppbVar29 == 0x16) {
        unaff_x23 = (byte *******)0x0;
        unaff_x26 = (byte *******)0x8000000000000000;
joined_r0x0001004a7984:
        pppppppbVar24 = unaff_x27;
        if (unaff_x19 != unaff_x27) goto code_r0x0001004a7dbc;
        goto code_r0x0001004a7dd0;
      }
      uVar22 = *(undefined8 *)((long)pppppppbVar29 + 1);
      uStack_8f = (undefined7)*(undefined8 *)((long)pppppppbVar29 + 9);
      uStack_98._1_1_ = (byte)uVar22;
      uStack_98._2_6_ = (undefined6)((ulong)uVar22 >> 8);
      uStack_90 = (undefined1)((ulong)uVar22 >> 0x38);
      ppppppbStack_80 = pppppppbVar29[3];
      uStack_88 = SUB81(pppppppbVar29[2],0);
      uStack_87 = (undefined7)((ulong)pppppppbVar29[2] >> 8);
      pppppppbStack_1a0 = (byte *******)0x1;
      uStack_98._0_1_ = *(byte *)pppppppbVar29;
      FUN_1004b60cc(&uStack_b0,&uStack_98);
      if (uStack_b0 != (byte *******)0x8000000000000001) {
        unaff_x23 = (byte *******)0x1;
        unaff_x26 = uStack_b0;
        pppppppbStack_1c8 = pppppppbStack_a8;
        pppppppbStack_1e8 = pppppppbStack_a0;
        goto joined_r0x0001004a7984;
      }
      *param_2 = (byte ******)0x11;
      param_2[1] = (byte ******)pppppppbStack_a8;
code_r0x0001004a7e08:
      lVar31 = ((ulong)((long)unaff_x27 - (long)unaff_x19) >> 5) + 1;
      while (lVar31 = lVar31 + -1, lVar31 != 0) {
        FUN_100e077ec(unaff_x19);
        unaff_x19 = unaff_x19 + 4;
      }
      if (unaff_x25 != (byte *******)0x0) {
        _free(pppppppbVar29);
      }
    }
    goto LAB_1004a826c;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    pppppppbVar26 = *(byte ********)(param_3 + 8);
    pppppppbVar20 = *(byte ********)(param_3 + 0x10);
  case 0x46:
    uVar27 = *(ulong *)(param_3 + 0x18);
    pppppppbVar24 = (byte *******)(uVar27 << 6);
    pppppppbVar25 = pppppppbVar26;
code_r0x0001004a7890:
    unaff_x28 = (byte *******)((long)pppppppbVar20 + (long)pppppppbVar24);
    pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
    pppppppbStack_180 = (byte *******)0x0;
    pppppppbVar26 = (byte *******)0x1;
    pppppppbStack_1a0 = pppppppbVar20;
    pppppppbStack_198 = pppppppbVar20;
    pppppppbStack_190 = pppppppbVar25;
    pppppppbStack_188 = unaff_x28;
code_r0x0001004a78ac:
    pppppppbStack_1f0 = (byte *******)CONCAT44(pppppppbStack_1f0._4_4_,(int)pppppppbVar26);
    unaff_x24 = (byte *******)0x8000000000000000;
    if (uVar27 == 0) {
      unaff_x23 = (byte *******)0x8000000000000001;
      unaff_x25 = (byte *******)0x8000000000000001;
      unaff_x26 = (byte *******)0x0;
      unaff_x28 = (byte *******)0x8000000000000000;
code_r0x0001004a7f54:
      uStack_b0 = (byte *******)&UNK_108c61018;
      pppppppbStack_a8 = (byte *******)0x4;
      uStack_98._0_1_ = (byte)&uStack_b0;
      uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
      uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_90 = 0xa0;
      uStack_8f = 0x100c7b3;
      pcVar16 = s_missing_field_____108ac28f7;
code_r0x0001004a7f7c:
      ppppppbVar18 = (byte ******)thunk_FUN_108856088(pcVar16,&uStack_98);
      *param_2 = (byte ******)0x11;
      param_2[1] = ppppppbVar18;
      unaff_x27 = (byte *******)0x0;
      pppppppbVar17 = (byte *******)0x1;
      pppppppbVar30 = (byte *******)0x1;
      unaff_x19 = (byte *******)0x1;
LAB_1004a7f9c:
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) == 0) {
        unaff_x22 = (byte *******)((ulong)pppppppbStack_1f0 & 0xffffffff);
        pppppppbVar24 = unaff_x28;
      }
      else {
LAB_1004a7fb8:
        param_2 = pppppppbStack_208;
code_r0x0001004a7fbc:
        _free(param_2);
code_r0x0001004a7fc0:
        unaff_x22 = (byte *******)((ulong)pppppppbStack_1f0 & 0xffffffff);
code_r0x0001004a7fc4:
        pppppppbVar24 = unaff_x28;
      }
      goto joined_r0x0001004a7fb0;
    }
    unaff_x22 = (byte *******)0x0;
    unaff_x19 = (byte *******)((ulong)&uStack_98 | 1);
    unaff_x23 = (byte *******)((ulong)&pppppppbStack_1c0 | 1);
    pppppppbVar24 = (byte *******)((ulong)(pppppppbVar24 + -8) >> 6);
code_r0x0001004a78d4:
    pppppppbStack_248 = (byte *******)((long)pppppppbVar24 + 1);
code_r0x0001004a78dc:
    unaff_x25 = pppppppbVar20 + 8;
    pppppppbVar24 = (byte *******)0x8000000000000001;
code_r0x0001004a78e4:
    pppppppbVar26 = (byte *******)0x8000000000000000;
    pppppppbVar20 = (byte *******)0x8000000000000001;
code_r0x0001004a78ec:
    pppppppbStack_1d0 = pppppppbVar20;
    pppppppbStack_1c8 = pppppppbVar24;
code_r0x0001004a78f0:
    pppppppbStack_1d8 = (byte *******)0x8000000000000000;
    pppppppbStack_1e8 = (byte *******)0x8000000000000000;
    pppppppbStack_1e0 = pppppppbVar26;
code_r0x0001004a7900:
    do {
      pppppppbVar32 = unaff_x25;
      pppppppbVar30 = pppppppbVar32 + -8;
      bVar23 = *(byte *)pppppppbVar30;
      pppppppbVar20 = (byte *******)(ulong)bVar23;
      pppppppbVar17 = unaff_x22;
      if (bVar23 == 0x16) break;
      ppppppbVar18 = pppppppbVar32[-6];
      *(byte *******)((long)unaff_x19 + 0x17) = pppppppbVar32[-5];
      *(byte *******)((long)unaff_x19 + 0xf) = ppppppbVar18;
      ppppppbVar18 = *(byte *******)((long)pppppppbVar32 + -0x3f);
      unaff_x19[1] = *(byte *******)((long)pppppppbVar32 + -0x37);
      *unaff_x19 = ppppppbVar18;
      pppppppbStack_1b8 = (byte *******)pppppppbVar32[-3];
      pppppppbStack_1c0 = (byte *******)pppppppbVar32[-4];
      pppppppbStack_1a8 = (byte *******)pppppppbVar32[-1];
      pppppppbStack_1b0 = (byte *******)pppppppbVar32[-2];
      unaff_x27 = (byte *******)CONCAT71(uStack_8f,uStack_90);
      unaff_x26 = (byte *******)CONCAT71(uStack_87,uStack_88);
      uVar19 = (uint)bVar23;
      in_OV = SBORROW4(uVar19,0xc);
      in_NG = (int)(uVar19 - 0xc) < 0;
      in_ZR = uVar19 == 0xc;
      param_4 = ppppppbStack_80;
      uStack_98._0_1_ = bVar23;
code_r0x0001004a79e8:
      iVar28 = (int)pppppppbVar20;
      if ((bool)in_ZR || in_NG != in_OV) {
        if (iVar28 == 1) {
          bVar23 = uStack_98._1_1_;
          if (4 < uStack_98._1_1_) {
            bVar23 = 5;
          }
          uStack_b0 = (byte *******)((ulong)CONCAT61(uStack_b0._2_6_,bVar23) << 8);
          goto code_r0x0001004a7aac;
        }
        if (iVar28 == 4) {
          if ((byte *******)0x4 < unaff_x27) {
            unaff_x27 = (byte *******)0x5;
          }
          uStack_b0 = (byte *******)((ulong)CONCAT61(uStack_b0._2_6_,(char)unaff_x27) << 8);
          goto code_r0x0001004a7aac;
        }
        if (iVar28 != 0xc) {
code_r0x0001004a7d24:
          pppppppbVar17 = (byte *******)&uStack_98;
          goto code_r0x0001004a7d28;
        }
        func_0x000100ac56c4(&uStack_b0,unaff_x26);
joined_r0x0001004a7a68:
        uVar3 = unaff_x27 != (byte *******)0x0;
        pppppppbVar24 = pppppppbStack_1e8;
        unaff_x27 = pppppppbStack_1e0;
        pppppppbVar26 = pppppppbStack_1d8;
        unaff_x25 = pppppppbStack_1d0;
        pppppppbVar21 = pppppppbStack_1c8;
        pppppppbVar17 = pppppppbStack_1c0;
        pppppppbVar4 = uStack_b0;
        if ((bool)uVar3) {
          _free(unaff_x26);
          pppppppbVar24 = pppppppbStack_1e8;
          unaff_x27 = pppppppbStack_1e0;
          pppppppbVar26 = pppppppbStack_1d8;
          unaff_x25 = pppppppbStack_1d0;
          pppppppbVar21 = pppppppbStack_1c8;
          pppppppbVar17 = pppppppbStack_1c0;
          pppppppbVar4 = uStack_b0;
        }
      }
      else {
        if (iVar28 == 0xd) {
          func_0x000100ac56c4(&uStack_b0,unaff_x27,unaff_x26);
        }
        else {
          if (iVar28 == 0xe) {
            func_0x000100ac53a0(&uStack_b0,unaff_x26,param_4);
            goto joined_r0x0001004a7a68;
          }
code_r0x0001004a7a28:
          if ((int)pppppppbVar20 != 0xf) goto code_r0x0001004a7d24;
          func_0x000100ac53a0(&uStack_b0,unaff_x27,unaff_x26);
        }
code_r0x0001004a7aac:
        FUN_100e077ec(&uStack_98);
        pppppppbVar24 = pppppppbStack_1e8;
        unaff_x27 = pppppppbStack_1e0;
        pppppppbVar26 = pppppppbStack_1d8;
        unaff_x25 = pppppppbStack_1d0;
        pppppppbVar21 = pppppppbStack_1c8;
        pppppppbVar17 = pppppppbStack_1c0;
        pppppppbVar4 = uStack_b0;
      }
      pppppppbStack_1e8 = pppppppbVar24;
      pppppppbStack_1e0 = unaff_x27;
      pppppppbStack_1d8 = pppppppbVar26;
      pppppppbStack_1d0 = unaff_x25;
      pppppppbStack_1c8 = pppppppbVar21;
      pppppppbStack_1c0 = pppppppbVar17;
      uStack_b0 = pppppppbVar4;
      if (((ulong)pppppppbVar4 & 1) != 0) goto code_r0x0001004a7d4c;
      uStack_b0._1_1_ = (byte)((ulong)pppppppbVar4 >> 8);
      pppppppbVar20 = (byte *******)(ulong)uStack_b0._1_1_;
      if (uStack_b0._1_1_ < 3) {
        pppppppbStack_1c0._0_1_ = (byte)pppppppbVar17;
        bVar23 = (byte)pppppppbStack_1c0;
        pppppppbStack_1c0._1_7_ = (undefined7)((ulong)pppppppbVar17 >> 8);
        if (uStack_b0._1_1_ == 0) {
          if (pppppppbVar21 != (byte *******)0x8000000000000001) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            uStack_b0 = (byte *******)&UNK_108ca26b0;
            pppppppbStack_a8 = (byte *******)0x2;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppbStack_198 = pppppppbVar32;
            ppppppbVar18 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            goto LAB_1004a8830;
          }
          pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
          if (bVar23 == 0x16) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbStack_198 = pppppppbVar32;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004a8960;
          }
          ppppppbVar18 = *unaff_x23;
          unaff_x19[1] = unaff_x23[1];
          *unaff_x19 = ppppppbVar18;
          uVar22 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar22;
          uStack_98._0_1_ = bVar23;
          pppppppbStack_1c8 = (byte *******)0x8000000000000001;
          FUN_1004b60cc(&uStack_b0,&uStack_98);
          pppppppbStack_1c8 = uStack_b0;
          if (uStack_b0 == (byte *******)0x8000000000000001) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbVar30 = (byte *******)0x1;
            *param_2 = (byte ******)0x11;
            param_2[1] = (byte ******)pppppppbStack_a8;
            unaff_x23 = (byte *******)0x8000000000000001;
            unaff_x19 = (byte *******)0x1;
            param_2 = (byte *******)0x1;
            unaff_x22 = (byte *******)0x1;
            pppppppbStack_198 = pppppppbVar32;
            goto code_r0x0001004a7d78;
          }
          pppppppbStack_208 = pppppppbStack_a8;
          pppppppbStack_220 = pppppppbStack_a0;
        }
        else if (uStack_b0._1_1_ == 1) {
          if (unaff_x27 != unaff_x24) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            uStack_b0 = (byte *******)&UNK_108c61018;
            pppppppbStack_a8 = (byte *******)0x4;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppbStack_198 = pppppppbVar32;
            ppppppbVar18 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
LAB_1004a8830:
            *param_2 = (byte ******)0x11;
            param_2[1] = ppppppbVar18;
            pppppppbVar30 = (byte *******)0x1;
            unaff_x19 = (byte *******)0x1;
            unaff_x22 = (byte *******)0x1;
            pppppppbVar17 = (byte *******)0x1;
            unaff_x23 = pppppppbVar21;
            unaff_x26 = pppppppbVar26;
            goto joined_r0x0001004a7fb0;
          }
          pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
          if (bVar23 == 0x16) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbStack_198 = pppppppbVar32;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004a8960;
          }
          ppppppbVar18 = *unaff_x23;
          unaff_x19[1] = unaff_x23[1];
          *unaff_x19 = ppppppbVar18;
          uVar22 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar22;
          uStack_98._0_1_ = bVar23;
          pppppppbStack_1e0 = (byte *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_b0,&uStack_98);
          pppppppbStack_1e0 = uStack_b0;
          if (uStack_b0 == unaff_x24) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbVar30 = (byte *******)0x1;
            *param_2 = (byte ******)0x11;
            param_2[1] = (byte ******)pppppppbStack_a8;
            unaff_x27 = (byte *******)0x0;
            unaff_x19 = (byte *******)0x1;
            unaff_x22 = (byte *******)0x1;
            pppppppbVar17 = (byte *******)0x1;
            unaff_x23 = pppppppbStack_1c8;
            unaff_x25 = pppppppbStack_1d0;
            unaff_x26 = pppppppbStack_1d8;
            pppppppbVar24 = pppppppbStack_1e8;
            pppppppbStack_198 = pppppppbVar32;
            goto joined_r0x0001004a7fb0;
          }
          pppppppbStack_1f8 = pppppppbStack_a8;
          pppppppbStack_230 = pppppppbStack_a0;
        }
        else {
          if (unaff_x25 != (byte *******)0x8000000000000001) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            uStack_b0 = (byte *******)&UNK_108ca776a;
            pppppppbStack_a8 = (byte *******)0x9;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppbStack_198 = pppppppbVar32;
            ppppppbVar18 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            goto LAB_1004a8830;
          }
code_r0x0001004a7c90:
          bVar23 = (byte)pppppppbStack_1c0;
          pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
          if (bVar23 == 0x16) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbStack_198 = pppppppbVar32;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004a8960;
          }
code_r0x0001004a7ca4:
          ppppppbVar18 = unaff_x23[1];
          pppppppbVar34 = (byte *******)*unaff_x23;
code_r0x0001004a7ca8:
          unaff_x19[1] = ppppppbVar18;
          *unaff_x19 = (byte ******)pppppppbVar34;
code_r0x0001004a7cac:
          uVar22 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar22;
          pppppppbStack_1d0 = (byte *******)0x8000000000000001;
          uStack_98._0_1_ = bVar23;
code_r0x0001004a7cc0:
          FUN_1004b60cc(&uStack_b0,&uStack_98);
          pppppppbStack_1d0 = uStack_b0;
          pppppppbVar20 = uStack_b0;
code_r0x0001004a7cd4:
          if (pppppppbVar20 == (byte *******)0x8000000000000001) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbVar30 = (byte *******)0x1;
            *param_2 = (byte ******)0x11;
            param_2[1] = (byte ******)pppppppbStack_a8;
            unaff_x25 = (byte *******)0x8000000000000001;
            unaff_x19 = (byte *******)0x1;
            unaff_x22 = (byte *******)0x1;
            pppppppbVar17 = (byte *******)0x1;
            unaff_x23 = pppppppbStack_1c8;
            unaff_x26 = pppppppbStack_1d8;
            unaff_x27 = pppppppbStack_1e0;
            pppppppbVar24 = pppppppbStack_1e8;
            pppppppbStack_198 = pppppppbVar32;
            goto joined_r0x0001004a7fb0;
          }
          pppppppbStack_218 = pppppppbStack_a8;
          pppppppbVar20 = pppppppbStack_a0;
code_r0x0001004a7ce8:
          pppppppbStack_228 = pppppppbVar20;
code_r0x0001004a7cec:
        }
      }
      else {
code_r0x0001004a7b3c:
        uStack_b0 = pppppppbVar4;
        pppppppbVar21 = pppppppbStack_1c8;
        unaff_x25 = pppppppbStack_1d0;
        pppppppbVar26 = pppppppbStack_1d8;
        unaff_x27 = pppppppbStack_1e0;
        pppppppbVar24 = pppppppbStack_1e8;
        bVar23 = (byte)pppppppbStack_1c0;
        if ((int)pppppppbVar20 == 3) {
          if (pppppppbStack_1d8 != unaff_x24) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            uStack_b0 = (byte *******)&UNK_108cadb54;
            pppppppbStack_a8 = (byte *******)0x9;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppbStack_198 = pppppppbVar32;
            ppppppbVar18 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            goto LAB_1004a8830;
          }
          pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
          if (bVar23 == 0x16) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbStack_198 = pppppppbVar32;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004a8960;
          }
          ppppppbVar18 = *unaff_x23;
          unaff_x19[1] = unaff_x23[1];
          *unaff_x19 = ppppppbVar18;
          uVar22 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar22;
          uStack_98._0_1_ = bVar23;
          pppppppbStack_1d8 = (byte *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_b0,&uStack_98);
          pppppppbStack_1d8 = uStack_b0;
          if (uStack_b0 == unaff_x24) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbVar30 = (byte *******)0x1;
            *param_2 = (byte ******)0x11;
            param_2[1] = (byte ******)pppppppbStack_a8;
            unaff_x26 = (byte *******)0x0;
            unaff_x19 = (byte *******)0x1;
            unaff_x22 = (byte *******)0x1;
            pppppppbVar17 = (byte *******)0x1;
            unaff_x23 = pppppppbStack_1c8;
            unaff_x25 = pppppppbStack_1d0;
            unaff_x27 = pppppppbStack_1e0;
            pppppppbVar24 = pppppppbStack_1e8;
            pppppppbStack_198 = pppppppbVar32;
            goto joined_r0x0001004a7fb0;
          }
          uStack_238 = pppppppbStack_a0;
          pppppppbStack_200 = pppppppbStack_a8;
code_r0x0001004a7c7c:
        }
        else if ((int)pppppppbVar20 == 4) {
          if (pppppppbStack_1e8 != unaff_x24) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            uStack_b0 = (byte *******)&UNK_108caaafb;
            pppppppbStack_a8 = (byte *******)0x7;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppbStack_198 = pppppppbVar32;
            ppppppbVar18 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            *param_2 = (byte ******)0x11;
            param_2[1] = ppppppbVar18;
            unaff_x22 = (byte *******)0x1;
            pppppppbVar17 = (byte *******)0x1;
            unaff_x19 = (byte *******)0x1;
            pppppppbVar30 = (byte *******)0x1;
            param_2 = pppppppbStack_210;
            unaff_x26 = pppppppbVar26;
            unaff_x23 = pppppppbVar21;
            goto joined_r0x0001004a86fc;
          }
          pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
          if (bVar23 == 0x16) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbStack_198 = pppppppbVar32;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004a8960;
          }
          ppppppbVar18 = *unaff_x23;
          unaff_x19[1] = unaff_x23[1];
          *unaff_x19 = ppppppbVar18;
          uVar22 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar22;
          uStack_98._0_1_ = bVar23;
          pppppppbStack_1e8 = (byte *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_b0,&uStack_98);
          pppppppbStack_1e8 = uStack_b0;
          pppppppbStack_210 = pppppppbStack_a8;
          if (uStack_b0 == unaff_x24) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            *param_2 = (byte ******)0x11;
            param_2[1] = (byte ******)pppppppbStack_a8;
            unaff_x22 = (byte *******)0x1;
            pppppppbVar17 = (byte *******)0x1;
            unaff_x19 = (byte *******)0x1;
            pppppppbVar30 = (byte *******)0x1;
            unaff_x23 = pppppppbStack_1c8;
            unaff_x25 = pppppppbStack_1d0;
            unaff_x26 = pppppppbStack_1d8;
            unaff_x27 = pppppppbStack_1e0;
            pppppppbStack_198 = pppppppbVar32;
            goto LAB_1004a7fdc;
          }
          pppppppbStack_240 = pppppppbStack_a0;
        }
        else {
code_r0x0001004a7cf0:
          bVar23 = (byte)pppppppbStack_1c0;
          pppppppbStack_1c0 = (byte *******)CONCAT71(pppppppbStack_1c0._1_7_,0x16);
          if (bVar23 == 0x16) {
            pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
            pppppppbStack_198 = pppppppbVar32;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004a8960:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1004a8964);
            (*pcVar5)();
          }
          ppppppbVar18 = *unaff_x23;
          unaff_x19[1] = unaff_x23[1];
          *unaff_x19 = ppppppbVar18;
          uVar22 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar22;
          uStack_98._0_1_ = bVar23;
          FUN_100e077ec(&uStack_98);
        }
      }
      unaff_x25 = pppppppbVar32 + 8;
      unaff_x22 = (byte *******)((long)unaff_x22 + 1);
      in_ZR = pppppppbVar30 + 8 == unaff_x28;
code_r0x0001004a79ac:
      pppppppbVar32 = unaff_x28;
      pppppppbVar17 = pppppppbStack_248;
      unaff_x28 = pppppppbVar32;
    } while (!(bool)in_ZR);
    pppppppbVar24 = (byte *******)0x8000000000000001;
    pppppppbVar20 = (byte *******)0x8000000000000000;
    unaff_x24 = (byte *******)0x8000000000000000;
    if (pppppppbStack_1c8 != (byte *******)0x8000000000000001) {
      unaff_x24 = pppppppbStack_1c8;
    }
    pppppppbStack_1f0 =
         (byte *******)
         CONCAT44(pppppppbStack_1f0._4_4_,
                  (uint)(pppppppbStack_1c8 == (byte *******)0x8000000000000001));
    in_ZR = pppppppbStack_1e0 == (byte *******)0x8000000000000000;
    unaff_x23 = pppppppbStack_1c8;
    unaff_x25 = pppppppbStack_1d0;
    unaff_x26 = pppppppbStack_1d8;
    unaff_x27 = pppppppbStack_1e0;
    unaff_x28 = pppppppbStack_1e8;
    pppppppbStack_198 = pppppppbVar32;
    pppppppbStack_180 = pppppppbVar17;
code_r0x0001004a7f50:
    if ((bool)in_ZR) goto code_r0x0001004a7f54;
code_r0x0001004a8070:
    in_ZR = unaff_x25 == pppppppbVar24;
code_r0x0001004a8074:
    unaff_x22 = pppppppbVar20;
    if (!(bool)in_ZR) {
      unaff_x22 = unaff_x25;
    }
code_r0x0001004a8078:
    unaff_x19 = (byte *******)(ulong)in_ZR;
    in_ZR = unaff_x26 == pppppppbVar20;
code_r0x0001004a8080:
    pppppppbVar30 = (byte *******)(ulong)in_ZR;
code_r0x0001004a8084:
    if ((bool)in_ZR) {
code_r0x0001004a8088:
      pppppppbVar20 = (byte *******)&UNK_108cad000;
code_r0x0001004a808c:
      pppppppbVar20 = (byte *******)((long)pppppppbVar20 + 0xb54);
code_r0x0001004a8090:
      pppppppbVar24 = (byte *******)0x9;
code_r0x0001004a8094:
      uStack_b0 = pppppppbVar20;
      pppppppbStack_a8 = pppppppbVar24;
code_r0x0001004a8098:
      pppppppbVar20 = (byte *******)&uStack_b0;
code_r0x0001004a809c:
      pppppppbVar24 = (byte *******)&UNK_100c7b000;
code_r0x0001004a80a0:
      pppppppbVar24 = pppppppbVar24 + 0x74;
code_r0x0001004a80a4:
      uStack_98._0_1_ = (byte)pppppppbVar20;
      uStack_98._1_1_ = (byte)((ulong)pppppppbVar20 >> 8);
      uStack_98._2_6_ = (undefined6)((ulong)pppppppbVar20 >> 0x10);
      uStack_90 = SUB81(pppppppbVar24,0);
      uStack_8f = (undefined7)((ulong)pppppppbVar24 >> 8);
FUN_1004a80a8:
      pppppppbVar17 = (byte *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004a80ac:
      pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 0x8f7);
code_r0x0001004a80b0:
      param_3 = (byte *)&uStack_98;
code_r0x0001004a80b4:
      pppppppbVar17 = (byte *******)thunk_FUN_108856088(pppppppbVar17,param_3);
code_r0x0001004a80b8:
      pppppppbVar20 = (byte *******)0x11;
code_r0x0001004a80bc:
      *param_2 = (byte ******)pppppppbVar20;
      param_2[1] = (byte ******)pppppppbVar17;
code_r0x0001004a80c0:
LAB_1004a8110:
      in_ZR = ((ulong)unaff_x22 & 0x7fffffffffffffff) == 0;
code_r0x0001004a8114:
      if (!(bool)in_ZR) {
code_r0x0001004a8118:
        _free(pppppppbStack_218);
      }
LAB_1004a8120:
      if (unaff_x27 == (byte *******)0x0) {
        pppppppbVar17 = (byte *******)0x0;
      }
      else {
code_r0x0001004a8124:
        param_2 = pppppppbStack_1f8;
code_r0x0001004a8128:
        _free(param_2);
code_r0x0001004a812c:
        pppppppbVar17 = (byte *******)0x0;
code_r0x0001004a8130:
      }
      goto LAB_1004a7f9c;
    }
code_r0x0001004a80c4:
    in_ZR = unaff_x28 == pppppppbVar20;
code_r0x0001004a80c8:
    if ((bool)in_ZR) {
code_r0x0001004a80cc:
      pppppppbVar20 = (byte *******)&UNK_108caa000;
code_r0x0001004a80d0:
      pppppppbVar20 = (byte *******)((long)pppppppbVar20 + 0xafb);
code_r0x0001004a80d4:
      pppppppbVar24 = (byte *******)0x7;
      pppppppbVar21 = pppppppbVar20;
code_r0x0001004a80d8:
      pppppppbVar20 = (byte *******)&uStack_b0;
      uStack_b0 = pppppppbVar21;
      pppppppbStack_a8 = pppppppbVar24;
code_r0x0001004a80e0:
      pppppppbVar24 = (byte *******)&UNK_100c7b000;
code_r0x0001004a80e4:
      pppppppbVar24 = pppppppbVar24 + 0x74;
code_r0x0001004a80e8:
      uStack_98._0_1_ = (byte)pppppppbVar20;
      uStack_98._1_1_ = (byte)((ulong)pppppppbVar20 >> 8);
      uStack_98._2_6_ = (undefined6)((ulong)pppppppbVar20 >> 0x10);
      uStack_90 = SUB81(pppppppbVar24,0);
      uStack_8f = (undefined7)((ulong)pppppppbVar24 >> 8);
code_r0x0001004a80ec:
      pppppppbVar17 = (byte *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004a80f0:
      pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 0x8f7);
      param_3 = (byte *)&uStack_98;
code_r0x0001004a80f8:
      pppppppbVar17 = (byte *******)thunk_FUN_108856088(pppppppbVar17,param_3);
code_r0x0001004a80fc:
      pppppppbVar20 = (byte *******)0x11;
code_r0x0001004a8100:
      *param_2 = (byte ******)pppppppbVar20;
      param_2[1] = (byte ******)pppppppbVar17;
      if (unaff_x26 != (byte *******)0x0) {
code_r0x0001004a8108:
        param_2 = pppppppbStack_200;
code_r0x0001004a810c:
        _free(param_2);
      }
      goto LAB_1004a8110;
    }
    *param_2 = (byte ******)0x5;
    param_2[1] = (byte ******)unaff_x27;
    param_2[2] = (byte ******)pppppppbStack_1f8;
    param_2[3] = (byte ******)pppppppbStack_230;
    param_2[4] = (byte ******)unaff_x26;
    param_2[5] = (byte ******)pppppppbStack_200;
    param_2[6] = (byte ******)uStack_238;
    param_2[7] = (byte ******)unaff_x28;
    param_2[8] = (byte ******)pppppppbStack_210;
    param_2[9] = (byte ******)pppppppbStack_240;
    param_2[10] = (byte ******)unaff_x24;
    param_2[0xb] = (byte ******)pppppppbStack_208;
    param_2[0xc] = (byte ******)pppppppbStack_220;
    param_2[0xd] = (byte ******)unaff_x22;
    param_2[0xe] = (byte ******)pppppppbStack_218;
    param_2[0xf] = (byte ******)pppppppbStack_228;
    ppppppbStack_128 = param_2[9];
    ppppppbStack_130 = param_2[8];
    ppppppbStack_118 = param_2[0xb];
    ppppppbStack_120 = param_2[10];
    ppppppbStack_108 = param_2[0xd];
    ppppppbStack_110 = param_2[0xc];
    ppppppbStack_f8 = param_2[0xf];
    ppppppbStack_100 = param_2[0xe];
    ppppppbStack_e8 = param_2[0x11];
    ppppppbStack_f0 = param_2[0x10];
    ppppppbStack_d8 = param_2[0x13];
    ppppppbStack_e0 = param_2[0x12];
    ppppppbStack_c8 = param_2[0x15];
    ppppppbStack_d0 = param_2[0x14];
    ppppppbStack_b8 = param_2[0x17];
    ppppppbStack_c0 = param_2[0x16];
    pppppppbStack_168 = (byte *******)param_2[1];
    ppppppbStack_170 = *param_2;
    ppppppbStack_158 = param_2[3];
    pppppppbStack_160 = (byte *******)param_2[2];
    ppppppbStack_148 = param_2[5];
    ppppppbStack_150 = param_2[4];
    ppppppbStack_138 = param_2[7];
    ppppppbStack_140 = param_2[6];
    ppppppbVar18 = (byte ******)FUN_100fbc67c(&pppppppbStack_1c0);
    goto code_r0x0001004a8370;
  case 0x16:
  case 0xb6:
  case 0xe2:
    goto code_r0x0001004a80ac;
  case 0x17:
    goto code_r0x0001004a80bc;
  case 0x18:
  case 0xb1:
  case 0xdd:
  case 0xf7:
    goto code_r0x0001004a8084;
  case 0x19:
  case 0xbd:
  case 0xcf:
  case 0xe9:
  case 0xf8:
    goto code_r0x0001004a809c;
  case 0x1a:
    goto code_r0x0001004a8048;
  case 0x1b:
    goto code_r0x0001004a80cc;
  case 0x1c:
    goto code_r0x0001004a80e4;
  case 0x1d:
  case 0xfc:
    goto code_r0x0001004a80a4;
  case 0x1e:
    goto code_r0x0001004a80fc;
  case 0x1f:
  case 0x3b:
  case 0x58:
  case 0xaa:
    goto code_r0x0001004a8078;
  case 0x20:
    goto code_r0x0001004a80ec;
  case 0x21:
    goto code_r0x0001004a8020;
  case 0x22:
  case 0x5a:
    goto code_r0x0001004a8050;
  case 0x23:
    goto code_r0x0001004a80d4;
  case 0x24:
    goto code_r0x0001004a7ff8;
  case 0x25:
  case 0xff:
    goto code_r0x0001004a808c;
  case 0x26:
    goto LAB_1004a7ff0;
  case 0x28:
    goto code_r0x0001004a8130;
  case 0x29:
    goto code_r0x0001004a7c90;
  case 0x2a:
    goto code_r0x0001004a7cd4;
  case 0x2c:
  case 0x5d:
    goto code_r0x0001004a8098;
  case 0x2d:
  case 0x7c:
  case 0xa5:
  case 200:
    goto FUN_1004a80a8;
  case 0x2e:
  case 0x5f:
    goto code_r0x0001004a8070;
  case 0x2f:
  case 0x59:
    goto code_r0x0001004a8088;
  case 0x30:
    goto code_r0x0001004a8034;
  case 0x31:
  case 0x62:
    goto code_r0x0001004a80b8;
  case 0x32:
  case 0x79:
  case 0x9e:
  case 0xc6:
    goto code_r0x0001004a80d0;
  case 0x33:
    goto code_r0x0001004a8090;
  case 0x34:
    goto code_r0x0001004a80e8;
  case 0x35:
  case 0xb3:
  case 0xdf:
  case 0xf2:
    goto code_r0x0001004a8064;
  case 0x36:
  case 0xa6:
    goto code_r0x0001004a80d8;
  case 0x37:
    goto code_r0x0001004a800c;
  case 0x38:
  case 0xf4:
    goto code_r0x0001004a803c;
  case 0x39:
  case 0xc9:
    goto code_r0x0001004a80c0;
  case 0x3a:
    goto code_r0x0001004a7fe4;
  case 0x3c:
    goto LAB_1004a7fdc;
  case 0x3e:
    goto code_r0x0001004a8118;
  case 0x3f:
    goto code_r0x0001004a7d34;
  case 0x40:
    goto code_r0x0001004a7d78;
  case 0x42:
    goto code_r0x0001004a78ec;
  case 0x43:
    goto code_r0x0001004a7900;
  case 0x44:
    goto code_r0x0001004a78d4;
  case 0x45:
    goto code_r0x0001004a78dc;
  case 0x47:
    goto code_r0x0001004a7938;
  case 0x49:
    goto code_r0x0001004a78e4;
  case 0x4a:
    goto code_r0x0001004a79e8;
  case 0x4b:
    goto code_r0x0001004a78ac;
  case 0x4c:
    goto code_r0x0001004a79ac;
  case 0x4e:
    goto code_r0x0001004a7890;
  case 0x4f:
    goto code_r0x0001004a7940;
  case 0x50:
    goto code_r0x0001004a7f50;
  case 0x51:
    goto code_r0x0001004a7f7c;
  case 0x55:
    goto code_r0x0001004a7964;
  case 0x56:
    goto code_r0x0001004a7a28;
  case 0x57:
    goto code_r0x0001004a7b3c;
  case 0x5b:
    goto code_r0x0001004a8068;
  case 0x5c:
  case 0xd6:
    goto LAB_1004a8014;
  case 0x5e:
  case 0xd5:
    goto code_r0x0001004a80b0;
  case 0x60:
  case 0xcd:
    goto code_r0x0001004a80c8;
  case 0x61:
  case 0xd1:
    goto code_r0x0001004a8044;
  case 99:
    goto code_r0x0001004a7fec;
  case 100:
  case 0xd4:
    goto code_r0x0001004a801c;
  case 0x65:
  case 0x7e:
    goto code_r0x0001004a80a0;
  case 0x66:
    goto code_r0x0001004a7fc4;
  case 0x67:
    goto code_r0x0001004a8058;
  case 0x68:
    goto code_r0x0001004a7fbc;
  case 0x6a:
  case 0x72:
  case 0xd3:
    goto code_r0x0001004a80f8;
  case 0x6b:
code_r0x0001004a7d28:
    param_3 = abStack_71;
    param_4 = (byte ******)&UNK_10b210d40;
code_r0x0001004a7d34:
    pppppppbStack_a8 = (byte *******)thunk_FUN_108855b04(pppppppbVar17,param_3,param_4);
    uStack_b0 = (byte *******)CONCAT71(uStack_b0._1_7_,1);
code_r0x0001004a7d4c:
    pppppppbStack_180 = (byte *******)((long)unaff_x22 + 1);
    *param_2 = (byte ******)0x11;
    param_2[1] = (byte ******)pppppppbStack_a8;
    pppppppbVar30 = (byte *******)0x1;
    unaff_x19 = (byte *******)0x1;
    pppppppbStack_198 = pppppppbVar32;
code_r0x0001004a7d6c:
    param_2 = (byte *******)0x1;
    unaff_x22 = (byte *******)0x1;
    unaff_x23 = pppppppbStack_1c8;
code_r0x0001004a7d78:
    pppppppbVar17 = param_2;
    unaff_x25 = pppppppbStack_1d0;
    unaff_x26 = pppppppbStack_1d8;
    unaff_x27 = pppppppbStack_1e0;
    pppppppbVar24 = pppppppbStack_1e8;
joined_r0x0001004a7fb0:
    param_2 = pppppppbStack_210;
    if (pppppppbVar24 != (byte *******)0x8000000000000000) {
joined_r0x0001004a86fc:
      pppppppbStack_210 = param_2;
      if (pppppppbVar24 != (byte *******)0x0) {
code_r0x0001004a7fd8:
        _free(param_2);
      }
    }
LAB_1004a7fdc:
    if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
code_r0x0001004a7fe4:
      if (((ulong)pppppppbVar30 & 1) != 0) {
code_r0x0001004a7fe8:
        param_2 = pppppppbStack_200;
code_r0x0001004a7fec:
        _free(param_2);
      }
    }
LAB_1004a7ff0:
    in_ZR = unaff_x25 == (byte *******)0x8000000000000001;
code_r0x0001004a7ff8:
    iVar28 = 0;
    if (!(bool)in_ZR) {
      iVar28 = (int)unaff_x19;
    }
    in_ZR = iVar28 == 1;
code_r0x0001004a8000:
    if ((bool)in_ZR) {
      in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x0001004a8008:
      if (!(bool)in_ZR) {
code_r0x0001004a800c:
        param_2 = pppppppbStack_218;
code_r0x0001004a8010:
        _free(param_2);
      }
    }
LAB_1004a8014:
    in_ZR = ((ulong)unaff_x27 & 0x7fffffffffffffff) == 0;
code_r0x0001004a8018:
    uVar19 = 0;
    if (!(bool)in_ZR) {
      uVar19 = (uint)pppppppbVar17;
    }
    pppppppbVar20 = (byte *******)(ulong)uVar19;
code_r0x0001004a801c:
    param_2 = pppppppbStack_1f8;
code_r0x0001004a8020:
    if (((ulong)pppppppbVar20 & 1) != 0) {
      _free(param_2);
    }
    in_ZR = unaff_x23 == (byte *******)0x8000000000000001;
code_r0x0001004a8030:
    uVar19 = 0;
    if (!(bool)in_ZR) {
      uVar19 = (uint)unaff_x22;
    }
    pppppppbVar20 = (byte *******)(ulong)uVar19;
code_r0x0001004a8034:
    if ((int)pppppppbVar20 == 1) {
code_r0x0001004a803c:
      in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
code_r0x0001004a8040:
      if (!(bool)in_ZR) {
code_r0x0001004a8044:
        param_2 = pppppppbStack_208;
code_r0x0001004a8048:
        _free(param_2);
      }
    }
LAB_1004a804c:
    pppppppbVar20 = (byte *******)&pppppppbStack_1c0;
code_r0x0001004a8050:
    param_2 = pppppppbVar20 + 4;
code_r0x0001004a8054:
    FUN_100d34830(param_2);
code_r0x0001004a8058:
    pppppppbVar20 = (byte *******)((ulong)pppppppbStack_1c0 & 0xff);
code_r0x0001004a805c:
    if ((int)pppppppbVar20 != 0x16) {
code_r0x0001004a8064:
      param_2 = (byte *******)&pppppppbStack_1c0;
code_r0x0001004a8068:
      FUN_100e077ec(param_2);
code_r0x0001004a806c:
    }
    goto LAB_1004a826c;
  case 0x6c:
    goto code_r0x0001004a7d6c;
  case 0x6e:
  case 0xa7:
    goto code_r0x0001004a815c;
  case 0x71:
    goto code_r0x0001004a814c;
  case 0x73:
    goto code_r0x0001004a817c;
  case 0x75:
  case 0x9f:
  case 0xd8:
    goto code_r0x0001004a8154;
  case 0x76:
    goto code_r0x0001004a81ac;
  case 0x77:
    goto code_r0x0001004a8128;
  case 0x7a:
  case 0xa3:
    goto code_r0x0001004a8100;
  case 0x7b:
  case 0xa2:
    goto code_r0x0001004a8184;
  case 0x81:
    goto code_r0x0001004a7ca8;
  case 0x82:
    goto code_r0x0001004a7cec;
  case 0x84:
    goto LAB_1004a826c;
  case 0x85:
    goto code_r0x0001004a827c;
  case 0x87:
    goto code_r0x0001004a825c;
  case 0x8a:
    goto code_r0x0001004a82a4;
  case 0x8b:
    goto code_r0x0001004a8264;
  case 0x8c:
    goto code_r0x0001004a82bc;
  case 0x8e:
    goto code_r0x0001004a82ac;
  case 0x91:
    goto code_r0x0001004a8294;
  case 0x92:
    goto code_r0x0001004a81b8;
  case 0x93:
    break;
  case 0x94:
    goto code_r0x0001004a81b0;
  case 0x96:
    goto code_r0x0001004a82ec;
  case 0x97:
    goto code_r0x0001004a78f0;
  case 0x98:
    goto code_r0x0001004a7934;
  case 0x9c:
    goto code_r0x0001004a810c;
  case 0x9d:
    goto code_r0x0001004a8124;
  case 0xa1:
    goto code_r0x0001004a812c;
  case 0xa4:
    goto code_r0x0001004a8174;
  case 0xa8:
    goto code_r0x0001004a8080;
  case 0xa9:
  case 0xc2:
  case 0xee:
    goto code_r0x0001004a8114;
  case 0xad:
    goto code_r0x0001004a7ca4;
  case 0xae:
    goto code_r0x0001004a7ce8;
  case 0xb0:
  case 0xd2:
  case 0xdc:
  case 0xf3:
    goto code_r0x0001004a8074;
  case 0xb2:
  case 0xde:
    goto LAB_1004a804c;
  case 0xb4:
  case 0xe0:
    goto code_r0x0001004a8010;
  case 0xb5:
  case 0xe1:
    goto code_r0x0001004a8094;
  case 0xb7:
  case 0xca:
  case 0xe3:
    goto code_r0x0001004a806c;
  case 0xb8:
  case 0xe4:
    goto code_r0x0001004a80c4;
  case 0xb9:
  case 0xe5:
    goto code_r0x0001004a8040;
  case 0xba:
  case 0xe6:
  case 0xfa:
    goto code_r0x0001004a80b4;
  case 0xbb:
  case 0xe7:
    goto code_r0x0001004a7fe8;
  case 0xbc:
  case 0xe8:
    goto code_r0x0001004a8018;
  case 0xbe:
  case 0xea:
    goto code_r0x0001004a7fc0;
  case 0xbf:
  case 0xeb:
  case 0xf5:
    goto code_r0x0001004a8054;
  case 0xc0:
  case 0xec:
    goto LAB_1004a7fb8;
  case 0xc3:
  case 0xef:
    goto code_r0x0001004a7c7c;
  case 0xc4:
  case 0xf0:
    goto code_r0x0001004a7cc0;
  case 199:
    goto code_r0x0001004a80e0;
  case 0xcb:
    goto code_r0x0001004a80f0;
  case 0xcc:
    goto code_r0x0001004a8108;
  case 0xce:
    goto LAB_1004a8120;
  case 0xd0:
    goto LAB_1004a8110;
  case 0xd9:
    goto code_r0x0001004a7cac;
  case 0xda:
    goto code_r0x0001004a7cf0;
  case 0xf6:
    goto code_r0x0001004a8000;
  case 0xf9:
    goto code_r0x0001004a805c;
  case 0xfb:
    goto code_r0x0001004a8030;
  case 0xfd:
    goto code_r0x0001004a7fd8;
  case 0xfe:
    goto code_r0x0001004a8008;
  }
  ppppppbStack_170 = (byte ******)CONCAT71(ppppppbStack_170._1_7_,bVar23);
code_r0x0001004a8250:
  param_4 = (byte ******)&UNK_10b21b890;
  pppppppbVar17 = &ppppppbStack_170;
code_r0x0001004a825c:
  pppppppbVar17 = (byte *******)FUN_107c05dcc(pppppppbVar17,abStack_71,param_4);
code_r0x0001004a8264:
  *param_2 = (byte ******)0x11;
  param_2[1] = (byte ******)pppppppbVar17;
LAB_1004a826c:
code_r0x0001004a827c:
  return;
}

