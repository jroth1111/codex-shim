
/* WARNING: Type propagation algorithm not settling */

void FUN_1004674f0(undefined1 param_1 [16],ulong *******param_2,byte *param_3,undefined *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte in_ZR;
  ulong *******pppppppuVar24;
  char *pcVar25;
  ulong ******ppppppuVar26;
  ulong ******ppppppuVar27;
  uint uVar28;
  ulong *******pppppppuVar29;
  undefined8 uVar30;
  byte bVar31;
  ulong *******pppppppuVar32;
  ulong *******unaff_x19;
  ulong *******pppppppuVar33;
  uint uVar34;
  ulong *******unaff_x20;
  uint uVar35;
  ulong *******unaff_x21;
  long lVar36;
  uint uVar37;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar38;
  ulong *******unaff_x25;
  ulong *******pppppppuVar39;
  ulong *******unaff_x26;
  ulong *******unaff_x27;
  ulong *******unaff_x28;
  undefined1 *puVar40;
  undefined8 unaff_x30;
  ulong *******pppppppuVar41;
  ulong ******ppppppuVar42;
  byte abStack_380 [88];
  ulong ******ppppppuStack_328;
  ulong ******ppppppuStack_320;
  ulong ******ppppppuStack_318;
  ulong ******ppppppuStack_310;
  ulong ******ppppppuStack_308;
  ulong *******pppppppuStack_300;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2f0;
  ulong *******pppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong *******pppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong *******pppppppuStack_268;
  long lStack_260;
  ulong ******ppppppuStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
  ulong ******ppppppuStack_238;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  ulong ******ppppppuStack_110;
  ulong ******ppppppuStack_108;
  undefined8 uStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  undefined8 uStack_90;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  undefined8 uStack_78;
  undefined1 auStack_69 [9];
  byte *pbVar16;
  byte *pbVar23;
  
  ppppppuVar27 = param_1._8_8_;
  pppppppuVar41 = param_1._0_8_;
  puVar40 = &stack0xfffffffffffffff0;
  pbVar22 = abStack_380 + 0x50;
  pbVar15 = abStack_380 + 0x50;
  bVar31 = *param_3;
  pppppppuVar29 = (ulong *******)(ulong)bVar31;
  pppppppuVar32 = (ulong *******)&UNK_108c99482;
  pbVar17 = abStack_380 + 0x50;
  pbVar18 = abStack_380 + 0x50;
  pbVar19 = abStack_380 + 0x50;
  pbVar20 = abStack_380 + 0x50;
  pbVar21 = abStack_380 + 0x50;
  pbVar23 = abStack_380 + 0x50;
  pbVar10 = abStack_380 + 0x50;
  pbVar11 = abStack_380 + 0x50;
  pbVar12 = abStack_380 + 0x50;
  pbVar13 = abStack_380 + 0x50;
  pbVar14 = abStack_380 + 0x50;
  pbVar16 = abStack_380 + 0x50;
  pbVar6 = abStack_380 + 0x50;
  pbVar7 = abStack_380 + 0x50;
  pbVar8 = abStack_380 + 0x50;
  pbVar9 = abStack_380 + 0x50;
  pppppppuVar24 = param_2;
  pcVar25 = (char *)param_2;
  pppppppuVar33 = unaff_x19;
  pppppppuVar39 = unaff_x25;
  switch(bVar31) {
  case 0:
    bVar31 = param_3[1];
  case 0x47:
    ppppppuStack_250 = (ulong ******)((ulong)CONCAT61(ppppppuStack_250._2_6_,bVar31) << 8);
code_r0x000100467df0:
    ppppppuStack_250 = (ulong ******)((ulong)ppppppuStack_250 & 0xffffffffffffff00);
code_r0x000100467df4:
    goto code_r0x000100467e48;
  case 1:
  case 0xa7:
    pppppppuVar29 = (ulong *******)(ulong)param_3[1];
    break;
  case 2:
  case 0x73:
  case 0x9d:
    pppppppuVar29 = (ulong *******)(ulong)*(ushort *)(param_3 + 2);
  case 0x49:
    break;
  case 3:
  case 0x74:
    pppppppuVar29 = (ulong *******)(ulong)*(uint *)(param_3 + 4);
  case 0x43:
    break;
  case 4:
  case 0x20:
  case 0x62:
  case 0xba:
  case 0xe6:
    pppppppuVar29 = *(ulong ********)(param_3 + 8);
    break;
  case 5:
  case 0xa0:
    pppppppuVar29 = (ulong *******)(long)(char)param_3[1];
  case 0x4c:
code_r0x000100467e3c:
    bVar31 = 2;
    pppppppuStack_248 = pppppppuVar29;
    goto code_r0x000100467e44;
  case 6:
  case 0xa2:
    pppppppuVar29 = (ulong *******)(long)*(short *)(param_3 + 2);
  case 0x3a:
  case 0x80:
    goto code_r0x000100467e3c;
  case 7:
  case 0x78:
  case 0x9b:
    pppppppuVar29 = (ulong *******)(long)*(int *)(param_3 + 4);
  case 0x28:
  case 0x6a:
  case 0xc2:
  case 0xee:
    goto code_r0x000100467e3c;
  case 8:
    pppppppuVar29 = *(ulong ********)(param_3 + 8);
    goto code_r0x000100467e3c;
  case 9:
    pppppppuVar41 = (ulong *******)(double)*(float *)(param_3 + 4);
  case 0x45:
code_r0x000100467e2c:
    bVar31 = 3;
    pppppppuStack_248 = pppppppuVar41;
    goto code_r0x000100467e44;
  case 10:
    pppppppuVar41 = *(ulong ********)(param_3 + 8);
    goto code_r0x000100467e2c;
  case 0xb:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x1b:
  case 0x5d:
  case 0xb5:
  case 0xe1:
  case 0xf3:
    pbVar10 = &stack0xffffffffffffffa0;
code_r0x000100467d68:
    puVar40 = *(undefined1 **)(pbVar10 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar10 + 0x58);
    pbVar11 = pbVar10;
code_r0x000100467d6c:
    unaff_x20 = *(ulong ********)(pbVar11 + 0x40);
    unaff_x19 = *(ulong ********)(pbVar11 + 0x48);
    pbVar12 = pbVar11;
code_r0x000100467d70:
    pbVar13 = pbVar12;
code_r0x000100467d74:
    pbVar14 = pbVar13;
code_r0x000100467d78:
    pbVar16 = pbVar14;
code_r0x000100467d7c:
    pbVar15 = pbVar16 + 0x60;
code_r0x000100467d80:
    *(ulong ********)(pbVar15 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar15 + -0x10) = puVar40;
    *(undefined8 *)(pbVar15 + -8) = unaff_x30;
    *(undefined4 *)(pbVar15 + -0x44) = 0;
    uVar28 = (uint)param_3;
    if (uVar28 < 0x80) {
      pbVar15[-0x44] = (byte)param_3;
      uVar30 = 1;
    }
    else {
      bVar31 = (byte)param_3 & 0x3f | 0x80;
      if (uVar28 < 0x800) {
        pbVar15[-0x44] = (byte)(uVar28 >> 6) | 0xc0;
        pbVar15[-0x43] = bVar31;
        uVar30 = 2;
      }
      else {
        bVar4 = (byte)(uVar28 >> 6) & 0x3f | 0x80;
        if (uVar28 < 0x10000) {
          pbVar15[-0x44] = (byte)(uVar28 >> 0xc) | 0xe0;
          pbVar15[-0x43] = bVar4;
          pbVar15[-0x42] = bVar31;
          uVar30 = 3;
        }
        else {
          pbVar15[-0x44] = (byte)(uVar28 >> 0x12) | 0xf0;
          pbVar15[-0x43] = (byte)(uVar28 >> 0xc) & 0x3f | 0x80;
          pbVar15[-0x42] = bVar4;
          pbVar15[-0x41] = bVar31;
          uVar30 = 4;
        }
      }
    }
    *(byte **)(pbVar15 + -0x38) = pbVar15 + -0x44;
    *(undefined8 *)(pbVar15 + -0x30) = uVar30;
    pbVar15[-0x40] = 5;
    ppppppuVar27 = (ulong ******)func_0x000108a4a50c(pbVar15 + -0x40,pbVar15 + -0x21,&UNK_10b21b210)
    ;
    *param_2 = (ulong ******)0x1d;
    param_2[1] = ppppppuVar27;
    return;
  case 0xc:
  case 0xf8:
    param_3 = param_3 + 8;
  case 0x71:
code_r0x000100467d94:
    pbVar17 = &stack0xffffffffffffffa0;
code_r0x000100467d98:
    puVar40 = *(undefined1 **)(pbVar17 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar17 + 0x58);
    pbVar18 = pbVar17;
code_r0x000100467d9c:
    unaff_x20 = *(ulong ********)(pbVar18 + 0x40);
    unaff_x19 = *(ulong ********)(pbVar18 + 0x48);
    pbVar19 = pbVar18;
code_r0x000100467da0:
    unaff_x22 = *(ulong ********)(pbVar19 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar19 + 0x38);
    pbVar20 = pbVar19;
code_r0x000100467da4:
    pbVar21 = pbVar20;
code_r0x000100467da8:
    pbVar23 = pbVar21;
code_r0x000100467dac:
    pbVar22 = pbVar23 + 0x60;
code_r0x000100467db0:
    *(ulong ********)(pbVar22 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar22 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar22 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar22 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar22 + -0x10) = puVar40;
    *(undefined8 *)(pbVar22 + -8) = unaff_x30;
    uVar30 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pbVar22 + -0x48) = uVar30;
    *(undefined8 *)(pbVar22 + -0x40) = uVar3;
    pbVar22[-0x50] = 5;
    ppppppuVar27 = (ulong ******)func_0x000108a4a50c(pbVar22 + -0x50,pbVar22 + -0x31,&UNK_10b21b210)
    ;
    *param_2 = (ulong ******)0x1d;
    param_2[1] = ppppppuVar27;
    if (*(long *)param_3 != 0) {
      _free(uVar30);
    }
    return;
  case 0xd:
  case 0xa4:
    pppppppuStack_248 = *(ulong ********)(param_3 + 8);
    pppppppuStack_240 = *(ulong ********)(param_3 + 0x10);
    bVar31 = 5;
  case 0x3c:
  case 0x4a:
    goto code_r0x000100467e44;
  case 0xe:
  case 0x19:
  case 0x5b:
  case 0xb3:
  case 0xdf:
    param_3 = param_3 + 8;
  case 0x1d:
  case 0x5f:
  case 0x72:
  case 0xb7:
  case 0xe3:
    pbVar6 = &stack0xffffffffffffffa0;
code_r0x000100467d40:
    puVar40 = *(undefined1 **)(pbVar6 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar6 + 0x58);
    pbVar7 = pbVar6;
code_r0x000100467d44:
    unaff_x20 = *(ulong ********)(pbVar7 + 0x40);
    unaff_x19 = *(ulong ********)(pbVar7 + 0x48);
    unaff_x22 = *(ulong ********)(pbVar7 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar7 + 0x38);
    pbVar8 = pbVar7;
code_r0x000100467d4c:
    pbVar9 = pbVar8;
code_r0x000100467d54:
    *(ulong ********)(pbVar9 + 0x30) = unaff_x22;
    *(ulong ********)(pbVar9 + 0x38) = unaff_x21;
    *(ulong ********)(pbVar9 + 0x40) = unaff_x20;
    *(ulong ********)(pbVar9 + 0x48) = unaff_x19;
    *(undefined1 **)(pbVar9 + 0x50) = puVar40;
    *(undefined8 *)(pbVar9 + 0x58) = unaff_x30;
    uVar30 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pbVar9 + 0x18) = uVar30;
    *(undefined8 *)(pbVar9 + 0x20) = uVar3;
    pbVar9[0x10] = 6;
    ppppppuVar27 = (ulong ******)func_0x000108a4a50c(pbVar9 + 0x10,pbVar9 + 0x2f,&UNK_10b21b210);
    *param_2 = (ulong ******)0x1d;
    param_2[1] = ppppppuVar27;
    if (*(long *)param_3 != 0) {
      _free(uVar30);
    }
    return;
  case 0xf:
  case 0x7b:
  case 0xa1:
    pppppppuVar29 = *(ulong ********)(param_3 + 8);
    pppppppuVar32 = *(ulong ********)(param_3 + 0x10);
  case 0x42:
    pppppppuStack_248 = pppppppuVar29;
    pppppppuStack_240 = pppppppuVar32;
code_r0x000100467dd0:
    bVar31 = 6;
    goto code_r0x000100467e44;
  case 0x10:
  case 0xf4:
    bVar31 = 8;
    goto code_r0x000100467e44;
  default:
    unaff_x19 = *(ulong ********)(param_3 + 8);
    pppppppuStack_248 = (ulong *******)unaff_x19[1];
    ppppppuStack_250 = *unaff_x19;
    ppppppuStack_238 = unaff_x19[3];
    pppppppuStack_240 = (ulong *******)unaff_x19[2];
    func_0x000107c046e4(param_2,&ppppppuStack_250);
    goto code_r0x0001004675ec;
  case 0x12:
    bVar31 = 7;
  case 0x54:
    goto code_r0x000100467e44;
  case 0x13:
    unaff_x19 = *(ulong ********)(param_3 + 8);
    pppppppuStack_248 = (ulong *******)unaff_x19[1];
    ppppppuStack_250 = *unaff_x19;
  case 0x97:
    ppppppuStack_238 = unaff_x19[3];
    pppppppuStack_240 = (ulong *******)unaff_x19[2];
    func_0x000107c05310(param_2,&ppppppuStack_250);
code_r0x0001004675ec:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x19);
    return;
  case 0x14:
    pppppppuVar29 = *(ulong ********)(param_3 + 8);
    unaff_x23 = *(ulong ********)(param_3 + 0x10);
    unaff_x22 = *(ulong ********)(param_3 + 0x18);
    unaff_x21 = unaff_x23 + (long)unaff_x22 * 4;
  case 0x98:
    pppppppuStack_118 = (ulong *******)0x0;
    pppppppuVar32 = unaff_x23;
    pppppppuStack_138 = unaff_x23;
    pppppppuStack_128 = pppppppuVar29;
    pppppppuStack_120 = unaff_x21;
    if (unaff_x22 == (ulong *******)0x0) {
code_r0x000100467b98:
      pppppppuStack_130 = pppppppuVar32;
      pppppppuStack_b8 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22ec48,&UNK_10b20a590);
    }
    else {
      pppppppuVar32 = unaff_x23 + 4;
      if (*(byte *)unaff_x23 == 0x16) goto code_r0x000100467b98;
      uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 9);
      uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x23 + 1);
      uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 1) >> 0x38);
      pppppppuStack_288 = (ulong *******)unaff_x23[3];
      uStack_290 = SUB81(unaff_x23[2],0);
      uStack_28f = (undefined7)((ulong)unaff_x23[2] >> 8);
      pppppppuStack_118 = (ulong *******)0x1;
      bStack_2a0 = *(byte *)unaff_x23;
      pppppppuStack_130 = pppppppuVar32;
      FUN_1004b62d4(&pppppppuStack_c0,&bStack_2a0);
      if (pppppppuStack_c0 != (ulong *******)0x8000000000000000) {
        unaff_x19 = pppppppuStack_b8;
        unaff_x25 = pppppppuStack_c0;
        if (unaff_x22 == (ulong *******)0x1) {
code_r0x00010046769c:
          unaff_x20 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22ec48,&UNK_10b20a590);
code_r0x0001004676b8:
          *param_2 = (ulong ******)0x1d;
          param_2[1] = (ulong ******)unaff_x20;
        }
        else {
          pppppppuStack_130 = unaff_x23 + 8;
          bVar31 = *(byte *)(unaff_x23 + 4);
          unaff_x28 = pppppppuStack_b0;
          if (bVar31 == 0x16) goto code_r0x00010046769c;
code_r0x000100467eb8:
          uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x29);
          uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x21);
          uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x21) >> 0x38);
          pppppppuStack_288 = (ulong *******)unaff_x23[7];
          uStack_290 = SUB81(unaff_x23[6],0);
          uStack_28f = (undefined7)((ulong)unaff_x23[6] >> 8);
code_r0x000100467ec8:
          pppppppuStack_118 = (ulong *******)0x2;
code_r0x000100467ed0:
          bStack_2a0 = bVar31;
          pppppppuVar24 = (ulong *******)&pppppppuStack_c0;
code_r0x000100467ed8:
          FUN_1004b62d4(pppppppuVar24,&bStack_2a0);
          pppppppuVar29 = (ulong *******)0x8000000000000000;
          unaff_x20 = pppppppuStack_b8;
          unaff_x26 = pppppppuStack_c0;
code_r0x000100467ee8:
          if (unaff_x26 == pppppppuVar29) goto code_r0x0001004676b8;
          if (unaff_x22 == (ulong *******)0x2) {
code_r0x000100467f10:
            param_3 = &UNK_10b22ec48;
code_r0x000100467f18:
            param_4 = &UNK_10b20a590;
code_r0x000100467f20:
            pppppppuVar24 = (ulong *******)thunk_FUN_1087e422c(2,param_3,param_4);
code_r0x000100467f28:
            pppppppuStack_b8 = pppppppuVar24;
code_r0x000100467f2c:
            *param_2 = (ulong ******)0x1d;
            param_2[1] = (ulong ******)pppppppuStack_b8;
          }
          else {
code_r0x000100467ef8:
            pppppppuVar29 = unaff_x23 + 0xc;
            unaff_x27 = pppppppuStack_b0;
code_r0x000100467f00:
            pppppppuStack_130 = pppppppuVar29;
            if (*(byte *)(unaff_x23 + 8) == 0x16) goto code_r0x000100467f10;
            uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x49);
            uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x41);
            uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x41) >> 0x38);
            pppppppuStack_288 = (ulong *******)unaff_x23[0xb];
            uStack_290 = SUB81(unaff_x23[10],0);
            uStack_28f = (undefined7)((ulong)unaff_x23[10] >> 8);
            pppppppuStack_118 = (ulong *******)0x3;
            bStack_2a0 = *(byte *)(unaff_x23 + 8);
            FUN_1004b62d4(&pppppppuStack_c0,&bStack_2a0);
            pppppppuVar32 = pppppppuStack_b8;
            pppppppuStack_2a8 = pppppppuStack_c0;
            if (pppppppuStack_c0 == (ulong *******)0x8000000000000000) goto code_r0x000100467f2c;
            if (unaff_x22 == (ulong *******)0x3) {
code_r0x0001004682f4:
              pppppppuStack_b8 = (ulong *******)thunk_FUN_1087e422c(3,&UNK_10b22ec48,&UNK_10b20a590)
              ;
code_r0x00010046830c:
              *param_2 = (ulong ******)0x1d;
              param_2[1] = (ulong ******)pppppppuStack_b8;
              pppppppuVar29 = pppppppuStack_2a8;
            }
            else {
              pppppppuStack_2b0 = pppppppuStack_b0;
              pppppppuStack_130 = unaff_x23 + 0x10;
              if (*(byte *)(unaff_x23 + 0xc) == 0x16) goto code_r0x0001004682f4;
              uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x69);
              uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x61);
              uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x61) >> 0x38);
              pppppppuStack_288 = (ulong *******)unaff_x23[0xf];
              uStack_290 = SUB81(unaff_x23[0xe],0);
              uStack_28f = (undefined7)((ulong)unaff_x23[0xe] >> 8);
              pppppppuStack_118 = (ulong *******)0x4;
              bStack_2a0 = *(byte *)(unaff_x23 + 0xc);
              FUN_1004b62d4(&pppppppuStack_c0,&bStack_2a0);
              pppppppuStack_2b8 = pppppppuStack_c0;
              if (pppppppuStack_c0 == (ulong *******)0x8000000000000000) goto code_r0x00010046830c;
              pppppppuStack_2c0 = pppppppuStack_b8;
              if (unaff_x22 == (ulong *******)0x4) {
code_r0x00010046838c:
                pppppppuStack_b8 =
                     (ulong *******)thunk_FUN_1087e422c(4,&UNK_10b22ec48,&UNK_10b20a590);
code_r0x0001004683a8:
                *param_2 = (ulong ******)0x1d;
                param_2[1] = (ulong ******)pppppppuStack_b8;
              }
              else {
                pppppppuStack_2c8 = pppppppuStack_b0;
                pppppppuStack_130 = unaff_x23 + 0x14;
                if (*(byte *)(unaff_x23 + 0x10) == 0x16) goto code_r0x00010046838c;
                uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x89);
                uStack_29f = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x81);
                uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x81) >> 0x38);
                pppppppuStack_288 = (ulong *******)unaff_x23[0x13];
                uStack_290 = SUB81(unaff_x23[0x12],0);
                uStack_28f = (undefined7)((ulong)unaff_x23[0x12] >> 8);
                pppppppuStack_118 = (ulong *******)0x5;
                bStack_2a0 = *(byte *)(unaff_x23 + 0x10);
                FUN_1004b62d4(&pppppppuStack_c0,&bStack_2a0);
                pppppppuVar39 = pppppppuStack_b8;
                pppppppuVar29 = pppppppuStack_c0;
                if (pppppppuStack_c0 == (ulong *******)0x8000000000000000)
                goto code_r0x0001004683a8;
                pppppppuStack_2d0 = pppppppuStack_b0;
                FUN_100f28ba8(&bStack_2a0,&pppppppuStack_138);
                ppppppuVar27 = (ulong ******)CONCAT71(uStack_29f,bStack_2a0);
                ppppppuVar26 = (ulong ******)CONCAT71(uStack_297,uStack_298);
                if (ppppppuVar27 != (ulong ******)0x8000000000000002) {
                  uStack_100 = (ulong *******)CONCAT71(uStack_28f,uStack_290);
                  pppppppuStack_f8 = pppppppuStack_288;
                  pppppppuStack_e8 = pppppppuStack_278;
                  pppppppuStack_f0 = pppppppuStack_280;
                  pppppppuStack_e0 = pppppppuStack_270;
                  if (ppppppuVar27 != (ulong ******)0x8000000000000001) {
                    param_2[0x13] = (ulong ******)pppppppuStack_288;
                    param_2[0x12] = (ulong ******)uStack_100;
                    param_2[0x15] = (ulong ******)pppppppuStack_278;
                    param_2[0x14] = (ulong ******)pppppppuStack_280;
                    param_2[0x16] = (ulong ******)pppppppuStack_270;
                    *param_2 = (ulong ******)0x1a;
                    param_2[1] = (ulong ******)unaff_x25;
                    param_2[2] = (ulong ******)unaff_x19;
                    param_2[3] = (ulong ******)unaff_x28;
                    param_2[4] = (ulong ******)unaff_x26;
                    param_2[5] = (ulong ******)unaff_x20;
                    param_2[6] = (ulong ******)unaff_x27;
                    param_2[7] = (ulong ******)pppppppuStack_2a8;
                    param_2[8] = (ulong ******)pppppppuVar32;
                    param_2[9] = (ulong ******)pppppppuStack_2b0;
                    param_2[10] = (ulong ******)pppppppuStack_2b8;
                    param_2[0xb] = (ulong ******)pppppppuStack_2c0;
                    param_2[0xc] = (ulong ******)pppppppuStack_2c8;
                    param_2[0xd] = (ulong ******)pppppppuVar29;
                    param_2[0xe] = (ulong ******)pppppppuVar39;
                    param_2[0xf] = (ulong ******)pppppppuStack_2d0;
                    param_2[0x10] = ppppppuVar27;
                    param_2[0x11] = ppppppuVar26;
                    _memcpy(&ppppppuStack_250,param_2,0x118);
                    ppppppuVar27 = (ulong ******)FUN_100fbc738(&pppppppuStack_138);
code_r0x00010046827c:
                    if (ppppppuVar27 == (ulong ******)0x0) {
                      return;
                    }
                    *param_2 = (ulong ******)0x1d;
                    param_2[1] = ppppppuVar27;
                    FUN_100e35e0c(&ppppppuStack_250);
                    return;
                  }
                  ppppppuVar26 = (ulong ******)thunk_FUN_1087e422c(5,&UNK_10b22ec48,&UNK_10b20a590);
                }
                *param_2 = (ulong ******)0x1d;
                param_2[1] = ppppppuVar26;
                if (pppppppuVar29 != (ulong *******)0x0) {
                  _free(pppppppuVar39);
                }
              }
              pppppppuVar29 = pppppppuStack_2a8;
              if (pppppppuStack_2b8 != (ulong *******)0x0) {
                _free(pppppppuStack_2c0);
              }
            }
            if (pppppppuVar29 != (ulong *******)0x0) {
              _free(pppppppuVar32);
            }
          }
          if (unaff_x26 != (ulong *******)0x0) {
            _free(unaff_x20);
          }
        }
        pppppppuVar32 = pppppppuStack_130;
        unaff_x21 = pppppppuStack_120;
        if (unaff_x25 != (ulong *******)0x0) {
          _free(unaff_x19);
          pppppppuVar32 = pppppppuStack_130;
          unaff_x21 = pppppppuStack_120;
        }
        goto code_r0x000100467bbc;
      }
    }
    *param_2 = (ulong ******)0x1d;
    param_2[1] = (ulong ******)pppppppuStack_b8;
code_r0x000100467bbc:
    lVar36 = ((ulong)((long)unaff_x21 - (long)pppppppuVar32) >> 5) + 1;
    while (lVar36 = lVar36 + -1, lVar36 != 0) {
      FUN_100e077ec(pppppppuVar32);
      pppppppuVar32 = pppppppuVar32 + 4;
    }
    if (pppppppuStack_128 == (ulong *******)0x0) {
      return;
    }
    _free(pppppppuStack_138);
    return;
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
    pppppppuStack_270 = *(ulong ********)(param_3 + 8);
    pppppppuVar39 = *(ulong ********)(param_3 + 0x10);
    unaff_x21 = pppppppuVar39 + *(long *)(param_3 + 0x18) * 8;
    bStack_2a0 = 0x16;
    lStack_260 = 0;
    pppppppuVar32 = (ulong *******)0x8000000000000001;
    pppppppuStack_138 = (ulong *******)0x8000000000000001;
    pppppppuStack_280 = pppppppuVar39;
    pppppppuStack_268 = unaff_x21;
    if (*(long *)(param_3 + 0x18) == 0) {
      unaff_x23 = (ulong *******)0x0;
      pppppppuStack_278 = pppppppuVar39;
      goto code_r0x000100467b78;
    }
    unaff_x23 = (ulong *******)((ulong)&uStack_90 | 1);
    unaff_x26 = (ulong *******)((ulong)&bStack_2a0 | 1);
    unaff_x22 = (ulong *******)((ulong)&uStack_100 | 1);
    pppppppuStack_2b8 = (ulong *******)0x8000000000000000;
    pppppppuStack_2b0 = (ulong *******)0x8000000000000001;
    pppppppuStack_2c8 = (ulong *******)0x8000000000000000;
    pppppppuStack_2c0 = (ulong *******)0x8000000000000000;
    pppppppuStack_2d0 = (ulong *******)0x8000000000000000;
    pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
    pppppppuVar33 = (ulong *******)0x8000000000000001;
    do {
      unaff_x25 = pppppppuVar39 + 8;
      bVar31 = *(byte *)pppppppuVar39;
      pppppppuStack_278 = unaff_x25;
      if (bVar31 == 0x16) break;
      lStack_260 = lStack_260 + 1;
      uStack_90 = (ulong *******)CONCAT71(uStack_90._1_7_,bVar31);
      ppppppuVar27 = *(ulong *******)((long)pppppppuVar39 + 1);
      ppppppuVar42 = pppppppuVar39[3];
      ppppppuVar26 = pppppppuVar39[2];
      pppppppuStack_f8 = (ulong *******)pppppppuVar39[5];
      uStack_100 = (ulong *******)pppppppuVar39[4];
      unaff_x23[1] = *(ulong *******)((long)pppppppuVar39 + 9);
      *unaff_x23 = ppppppuVar27;
      *(ulong *******)((long)unaff_x23 + 0x17) = ppppppuVar42;
      *(ulong *******)((long)unaff_x23 + 0xf) = ppppppuVar26;
      pppppppuStack_e8 = (ulong *******)pppppppuVar39[7];
      pppppppuStack_f0 = (ulong *******)pppppppuVar39[6];
      if (bStack_2a0 != 0x16) {
        FUN_100e077ec(&bStack_2a0);
      }
      ppppppuVar27 = ppppppuStack_80;
      pppppppuVar32 = pppppppuStack_88;
      uStack_298 = SUB81(pppppppuStack_f8,0);
      uStack_297 = (undefined7)((ulong)pppppppuStack_f8 >> 8);
      bStack_2a0 = (byte)uStack_100;
      uStack_29f = (undefined7)((ulong)uStack_100 >> 8);
      pppppppuStack_288 = pppppppuStack_e8;
      uStack_290 = SUB81(pppppppuStack_f0,0);
      uStack_28f = (undefined7)((ulong)pppppppuStack_f0 >> 8);
      if (bVar31 < 0xd) {
        if (bVar31 == 1) {
          bVar31 = uStack_90._1_1_;
          if (5 < uStack_90._1_1_) {
            bVar31 = 6;
          }
          uStack_100 = (ulong *******)((ulong)CONCAT61(uStack_100._2_6_,bVar31) << 8);
          goto code_r0x000100467814;
        }
        if (bVar31 == 4) {
          if ((ulong *******)0x5 < pppppppuStack_88) {
            pppppppuVar32 = (ulong *******)0x6;
          }
          uStack_100 = (ulong *******)((ulong)CONCAT61(uStack_100._2_6_,(char)pppppppuVar32) << 8);
          goto code_r0x000100467814;
        }
        if (bVar31 != 0xc) {
code_r0x000100467b0c:
          pppppppuStack_f8 =
               (ulong *******)thunk_FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20f1e0);
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,1);
          goto code_r0x000100467b34;
        }
        FUN_100b4bd20(&uStack_100,ppppppuStack_80);
joined_r0x0001004677d0:
        pppppppuVar24 = pppppppuStack_2d0;
        pppppppuVar41 = pppppppuStack_2c8;
        pppppppuVar38 = pppppppuStack_2c0;
        unaff_x27 = pppppppuStack_2b8;
        bVar31 = bStack_2a0;
        pppppppuVar29 = uStack_100;
        if (pppppppuVar32 != (ulong *******)0x0) {
          _free(ppppppuVar27);
          pppppppuVar24 = pppppppuStack_2d0;
          pppppppuVar41 = pppppppuStack_2c8;
          pppppppuVar38 = pppppppuStack_2c0;
          unaff_x27 = pppppppuStack_2b8;
          bVar31 = bStack_2a0;
          pppppppuVar29 = uStack_100;
        }
      }
      else {
        if (bVar31 == 0xd) {
          FUN_100b4bd20(&uStack_100,pppppppuStack_88,ppppppuStack_80);
        }
        else {
          if (bVar31 == 0xe) {
            FUN_100b4a2a4(&uStack_100,ppppppuStack_80,uStack_78);
            goto joined_r0x0001004677d0;
          }
          if (bVar31 != 0xf) goto code_r0x000100467b0c;
          FUN_100b4a2a4(&uStack_100,pppppppuStack_88,ppppppuStack_80);
        }
code_r0x000100467814:
        FUN_100e077ec(&uStack_90);
        pppppppuVar24 = pppppppuStack_2d0;
        pppppppuVar41 = pppppppuStack_2c8;
        pppppppuVar38 = pppppppuStack_2c0;
        unaff_x27 = pppppppuStack_2b8;
        bVar31 = bStack_2a0;
        pppppppuVar29 = uStack_100;
      }
      pppppppuStack_2d0 = pppppppuVar24;
      pppppppuStack_2c8 = pppppppuVar41;
      pppppppuStack_2c0 = pppppppuVar38;
      pppppppuStack_2b8 = unaff_x27;
      bStack_2a0 = bVar31;
      uStack_100 = pppppppuVar29;
      if (((ulong)pppppppuVar29 & 1) != 0) goto code_r0x000100467b34;
      uStack_100._1_1_ = (byte)((ulong)pppppppuVar29 >> 8);
      bVar4 = uStack_100._1_1_;
      bVar1 = uStack_100._1_1_ < 3;
      uStack_100._1_7_ = (undefined7)((ulong)pppppppuVar29 >> 8);
      pppppppuVar39 = unaff_x25;
      if (bVar1) {
        if (bVar4 == 0) {
          pppppppuVar29 = (ulong *******)0x8000000000000000;
code_r0x000100467990:
          pppppppuVar38 = pppppppuStack_2c0;
          pppppppuVar41 = pppppppuStack_2c8;
          pppppppuVar24 = pppppppuStack_2d0;
          if (unaff_x27 != pppppppuVar29) {
            pppppppuStack_130 = pppppppuStack_2d8;
            uStack_90 = (ulong *******)&UNK_108cb88a4;
            pppppppuStack_88 = (ulong *******)0x7;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = pppppppuVar33;
            ppppppuVar27 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_10046858c;
          }
code_r0x000100467998:
          pppppppuVar29 = (ulong *******)(ulong)bStack_2a0;
          bStack_2a0 = 0x16;
code_r0x0001004679a4:
          bVar31 = (byte)pppppppuVar29;
          if ((int)pppppppuVar29 == 0x16) {
            pppppppuStack_130 = pppppppuStack_2d8;
            pppppppuStack_138 = pppppppuVar33;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004686d0;
          }
          ppppppuVar27 = *unaff_x26;
          unaff_x22[1] = unaff_x26[1];
          *unaff_x22 = ppppppuVar27;
          ppppppuVar27 = *(ulong *******)((long)unaff_x26 + 0x17);
          pppppppuVar41 = *(ulong ********)((long)unaff_x26 + 0xf);
          pppppppuVar39 = unaff_x25;
code_r0x0001004679b8:
          *(ulong *******)((long)unaff_x22 + 0x17) = ppppppuVar27;
          *(ulong ********)((long)unaff_x22 + 0xf) = pppppppuVar41;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar31);
          pppppppuStack_2b8 = (ulong *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          pppppppuStack_2b8 = uStack_90;
          if (uStack_90 == (ulong *******)0x8000000000000000) goto code_r0x00010046800c;
          pppppppuStack_2e0 = pppppppuStack_88;
          ppppppuStack_328 = ppppppuStack_80;
        }
        else if (bVar4 == 1) {
          if (pppppppuVar38 != (ulong *******)0x8000000000000000) {
            uStack_90 = (ulong *******)&UNK_108ca962a;
            pppppppuStack_88 = (ulong *******)0xf;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            ppppppuVar27 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_10046858c;
          }
          bStack_2a0 = 0x16;
          if (bVar31 == 0x16) {
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004686d0;
          }
          ppppppuVar27 = *unaff_x26;
          unaff_x22[1] = unaff_x26[1];
          *unaff_x22 = ppppppuVar27;
          uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar31);
          pppppppuStack_2c0 = (ulong *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          pppppppuStack_2c0 = uStack_90;
          if (uStack_90 == (ulong *******)0x8000000000000000) {
            pppppppuStack_130 = pppppppuStack_2d8;
            pppppppuVar32 = (ulong *******)0x1d;
            pppppppuVar29 = pppppppuStack_88;
            pppppppuStack_138 = pppppppuVar33;
            goto code_r0x000100467f78;
          }
          ppppppuStack_308 = ppppppuStack_80;
          pppppppuStack_2e8 = pppppppuStack_88;
        }
        else {
          if (pppppppuVar41 != (ulong *******)0x8000000000000000) {
            uStack_90 = (ulong *******)&UNK_108cbac9f;
            pppppppuStack_88 = (ulong *******)0x13;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            ppppppuVar27 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_10046858c;
          }
          bStack_2a0 = 0x16;
          if (bVar31 == 0x16) {
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004686d0;
          }
          ppppppuVar27 = *unaff_x26;
          unaff_x22[1] = unaff_x26[1];
          *unaff_x22 = ppppppuVar27;
          uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar31);
          pppppppuStack_2c8 = (ulong *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          pppppppuStack_2c8 = uStack_90;
          if (uStack_90 == (ulong *******)0x8000000000000000) {
            pppppppuStack_130 = pppppppuStack_2d8;
            unaff_x19 = (ulong *******)0x1;
            *param_2 = (ulong ******)0x1d;
            param_2[1] = (ulong ******)pppppppuStack_88;
            unaff_x26 = pppppppuStack_2d0;
            pppppppuStack_138 = pppppppuVar33;
            goto code_r0x000100467fa8;
          }
          ppppppuStack_310 = ppppppuStack_80;
          pppppppuStack_2f0 = pppppppuStack_88;
        }
      }
      else if (bVar4 < 5) {
        if (bVar4 == 3) {
          if (pppppppuVar24 != (ulong *******)0x8000000000000000) {
            uStack_90 = (ulong *******)&UNK_108cdcd90;
            pppppppuStack_88 = (ulong *******)0x10;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            ppppppuVar27 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
LAB_10046858c:
            *param_2 = (ulong ******)0x1d;
            param_2[1] = ppppppuVar27;
            uVar28 = 1;
            uVar35 = 1;
            uVar34 = 1;
            uVar37 = 1;
            unaff_x23 = pppppppuVar38;
            unaff_x25 = pppppppuVar41;
            unaff_x26 = pppppppuVar24;
            param_2 = unaff_x27;
            goto joined_r0x0001004685b4;
          }
          bStack_2a0 = 0x16;
          if (bVar31 == 0x16) {
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004686d0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1004686d4);
            (*pcVar5)();
          }
          ppppppuVar27 = *unaff_x26;
          unaff_x22[1] = unaff_x26[1];
          *unaff_x22 = ppppppuVar27;
          uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar31);
          pppppppuStack_2d0 = (ulong *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          pppppppuStack_2d0 = uStack_90;
          if (uStack_90 == (ulong *******)0x8000000000000000) {
            pppppppuStack_130 = pppppppuStack_2d8;
            pppppppuVar29 = pppppppuStack_88;
            pppppppuStack_138 = pppppppuVar33;
            goto code_r0x000100467fe8;
          }
          ppppppuStack_318 = ppppppuStack_80;
          pppppppuStack_2f8 = pppppppuStack_88;
        }
        else {
          if (pppppppuStack_2a8 != (ulong *******)0x8000000000000000) {
            uStack_90 = (ulong *******)&UNK_108ca1064;
            pppppppuStack_88 = (ulong *******)0x7;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            ppppppuVar27 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_10046858c;
          }
          bStack_2a0 = 0x16;
          if (bVar31 == 0x16) {
            pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
            pppppppuStack_138 = pppppppuVar33;
            pppppppuStack_130 = pppppppuStack_2d8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004686d0;
          }
          ppppppuVar27 = *unaff_x26;
          unaff_x22[1] = unaff_x26[1];
          *unaff_x22 = ppppppuVar27;
          uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar31);
          pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
          pppppppuVar24 = (ulong *******)&uStack_90;
code_r0x000100467aac:
          FUN_1004b62d4(pppppppuVar24,&uStack_100);
          pppppppuStack_2a8 = uStack_90;
          pppppppuVar29 = pppppppuStack_88;
          if (uStack_90 == (ulong *******)0x8000000000000000) goto code_r0x000100467fc0;
          ppppppuStack_320 = ppppppuStack_80;
          pppppppuVar39 = unaff_x25;
          pppppppuStack_300 = pppppppuStack_88;
        }
      }
      else if (bVar4 == 5) {
        if (pppppppuStack_2b0 != (ulong *******)0x8000000000000001) {
          uStack_90 = (ulong *******)&UNK_108cbacb2;
          pppppppuStack_88 = (ulong *******)0xf;
          uStack_100 = (ulong *******)&uStack_90;
          pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
          pppppppuStack_138 = pppppppuVar33;
          pppppppuStack_130 = pppppppuStack_2d8;
          ppppppuVar27 = (ulong ******)
                         thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          *param_2 = (ulong ******)0x1d;
          param_2[1] = ppppppuVar27;
          uVar37 = 1;
          uVar34 = 1;
          uVar35 = 1;
          uVar28 = 1;
          pppppppuVar32 = pppppppuStack_2b0;
          unaff_x26 = pppppppuVar24;
          unaff_x25 = pppppppuVar41;
          unaff_x23 = pppppppuVar38;
          param_2 = unaff_x27;
          goto joined_r0x000100468474;
        }
        pppppppuStack_2b0 = (ulong *******)0x8000000000000001;
        func_0x000100f1ec38(&uStack_100,&bStack_2a0);
code_r0x00010046794c:
        pppppppuStack_2d8 = pppppppuStack_f8;
        unaff_x19 = uStack_100;
code_r0x000100467954:
        if (unaff_x19 == (ulong *******)0x8000000000000001) {
          *param_2 = (ulong ******)0x1d;
          param_2[1] = (ulong ******)pppppppuStack_2d8;
          unaff_x26 = pppppppuStack_2d0;
          goto code_r0x000100467f50;
        }
code_r0x000100467960:
        pppppppuVar32 = (ulong *******)&pppppppuStack_138;
        pppppppuStack_120 = pppppppuStack_e8;
        pppppppuStack_128 = pppppppuStack_f0;
        ppppppuStack_110 = ppppppuStack_d8;
        pppppppuStack_118 = pppppppuStack_e0;
        pppppppuVar29 = pppppppuStack_d0;
        pppppppuVar33 = unaff_x19;
code_r0x000100467974:
        pppppppuVar32[6] = (ulong ******)pppppppuVar29;
        unaff_x21 = pppppppuStack_268;
        pppppppuVar39 = pppppppuStack_278;
        pppppppuStack_2b0 = pppppppuVar33;
      }
      else {
        bStack_2a0 = 0x16;
        if (bVar31 == 0x16) {
          pppppppuStack_138 = pppppppuVar33;
          pppppppuStack_130 = pppppppuStack_2d8;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004686d0;
        }
        ppppppuVar27 = unaff_x26[1];
        pppppppuVar41 = (ulong *******)*unaff_x26;
code_r0x000100467af0:
        unaff_x22[1] = ppppppuVar27;
        *unaff_x22 = (ulong ******)pppppppuVar41;
        uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
        uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar31);
        FUN_100e077ec(&uStack_100);
        pppppppuVar39 = unaff_x25;
      }
    } while (pppppppuVar39 != unaff_x21);
    pppppppuStack_130 = pppppppuStack_2d8;
    pppppppuVar29 = (ulong *******)0x8000000000000000;
    unaff_x23 = pppppppuStack_2c0;
    unaff_x25 = pppppppuStack_2c8;
    unaff_x26 = pppppppuStack_2d0;
    pppppppuStack_138 = pppppppuVar33;
    if (pppppppuStack_2b8 != (ulong *******)0x8000000000000000) {
      in_ZR = pppppppuStack_2c0 == (ulong *******)0x8000000000000000;
      unaff_x20 = (ulong *******)(ulong)in_ZR;
      goto code_r0x000100467c88;
    }
    goto code_r0x000100467c18;
  case 0x16:
  case 0x58:
  case 0x7a:
  case 0xa5:
  case 0xb0:
  case 0xdc:
  case 0xf5:
    goto code_r0x000100467d44;
  case 0x17:
  case 0x59:
  case 0xb1:
  case 0xdd:
  case 0xf2:
    goto code_r0x000100467d54;
  case 0x18:
  case 0x5a:
  case 0xa8:
  case 0xb2:
  case 0xde:
    goto code_r0x000100467d1c;
  case 0x1a:
  case 0x5c:
  case 0xb4:
  case 0xe0:
    goto code_r0x000100467ce0;
  case 0x1c:
  case 0x5e:
  case 0xb6:
  case 0xe2:
  case 0xff:
    goto code_r0x000100467d7c;
  case 0x1e:
  case 0x60:
  case 0xb8:
  case 0xe4:
  case 0xfc:
    goto code_r0x000100467d94;
  case 0x1f:
  case 0x52:
  case 0x61:
  case 0xb9:
  case 0xe5:
    goto code_r0x000100467d10;
  case 0x21:
  case 99:
  case 0xbb:
  case 0xe7:
    goto code_r0x000100467cb8;
  case 0x22:
  case 100:
  case 0xbc:
  case 0xe8:
    goto code_r0x000100467ce8;
  case 0x23:
  case 0x65:
  case 0x77:
  case 0x9e:
  case 0xbd:
  case 0xe9:
    goto code_r0x000100467d6c;
  case 0x24:
  case 0x66:
  case 0xbe:
  case 0xea:
    goto code_r0x000100467c90;
  case 0x25:
  case 0x67:
  case 0xbf:
  case 0xeb:
    goto code_r0x000100467d24;
  case 0x26:
  case 0x68:
  case 0xc0:
  case 0xec:
code_r0x000100467c88:
    unaff_x22 = pppppppuStack_2e0;
    unaff_x26 = pppppppuStack_2d0;
code_r0x000100467c90:
    if ((bool)in_ZR) {
      uStack_90 = (ulong *******)&UNK_108ca962a;
      pppppppuStack_88 = (ulong *******)0xf;
      uStack_100 = (ulong *******)&uStack_90;
      pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
      pppppppuVar24 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x000100467cb8:
      pppppppuVar24 =
           (ulong *******)thunk_FUN_108856088((byte *)((long)pppppppuVar24 + 0x8f7),&uStack_100);
      pppppppuVar29 = (ulong *******)0x1d;
code_r0x000100467cc8:
      uVar34 = (uint)unaff_x20;
      *param_2 = (ulong ******)pppppppuVar29;
      param_2[1] = (ulong ******)pppppppuVar24;
      uVar28 = 1;
      uVar35 = 1;
      param_2 = pppppppuStack_2b8;
    }
    else {
      in_ZR = unaff_x25 == pppppppuVar29;
code_r0x000100467ce0:
      unaff_x21 = (ulong *******)(ulong)in_ZR;
code_r0x000100467ce4:
      if ((bool)in_ZR) {
code_r0x000100467ce8:
        pppppppuVar29 = (ulong *******)&UNK_108cba000;
code_r0x000100467cec:
        pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + 0xc9f);
code_r0x000100467cf0:
        pppppppuStack_88 = (ulong *******)0x13;
        uStack_90 = pppppppuVar29;
code_r0x000100467cf8:
        uStack_100 = (ulong *******)&uStack_90;
        pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
        pcVar25 = s_missing_field_____108ac28f7;
code_r0x000100467d10:
        param_3 = (byte *)&uStack_100;
code_r0x000100467d14:
        pppppppuVar24 = (ulong *******)thunk_FUN_108856088(pcVar25,param_3);
code_r0x000100467d18:
        pppppppuVar29 = (ulong *******)0x1d;
code_r0x000100467d1c:
        *param_2 = (ulong ******)pppppppuVar29;
        param_2[1] = (ulong ******)pppppppuVar24;
code_r0x000100467d20:
        unaff_x19 = (ulong *******)0x1;
code_r0x000100467d24:
        uVar34 = (uint)unaff_x20;
        uVar35 = (uint)unaff_x21;
        uVar28 = (uint)unaff_x19;
        param_2 = pppppppuStack_2b8;
      }
      else {
code_r0x000100467e70:
        in_ZR = unaff_x26 == pppppppuVar29;
code_r0x000100467e74:
        unaff_x19 = (ulong *******)(ulong)in_ZR;
        if ((bool)in_ZR) {
code_r0x000100467e7c:
          uStack_90 = (ulong *******)&UNK_108cdcd90;
          pppppppuStack_88 = (ulong *******)0x10;
          uStack_100 = (ulong *******)&uStack_90;
          pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
          pcVar25 = s_missing_field_____108ac28f7;
code_r0x000100467ea4:
          pppppppuVar24 = (ulong *******)thunk_FUN_108856088(pcVar25,&uStack_100);
          pppppppuVar29 = (ulong *******)0x1d;
code_r0x000100467eb0:
          *param_2 = (ulong ******)pppppppuVar29;
          param_2[1] = (ulong ******)pppppppuVar24;
        }
        else {
          in_ZR = pppppppuStack_2a8 == pppppppuVar29;
code_r0x000100468054:
          if (!(bool)in_ZR) {
            if (pppppppuStack_2b0 == (ulong *******)0x8000000000000001) {
              pppppppuVar32 = (ulong *******)0x8000000000000000;
            }
            else {
              pppppppuStack_b8 = pppppppuStack_120;
              pppppppuStack_c0 = pppppppuStack_128;
              ppppppuStack_a8 = ppppppuStack_110;
              pppppppuStack_b0 = pppppppuStack_118;
              ppppppuStack_a0 = ppppppuStack_108;
              pppppppuVar32 = pppppppuStack_2b0;
            }
            *param_2 = (ulong ******)0x1a;
            param_2[1] = (ulong ******)pppppppuStack_2b8;
            param_2[2] = (ulong ******)unaff_x22;
            param_2[3] = ppppppuStack_328;
            param_2[4] = (ulong ******)unaff_x23;
            param_2[5] = (ulong ******)pppppppuStack_2e8;
            param_2[6] = ppppppuStack_308;
            param_2[7] = (ulong ******)unaff_x25;
            param_2[8] = (ulong ******)pppppppuStack_2f0;
            param_2[9] = ppppppuStack_310;
            param_2[10] = (ulong ******)unaff_x26;
            param_2[0xb] = (ulong ******)pppppppuStack_2f8;
            param_2[0xc] = ppppppuStack_318;
            param_2[0xd] = (ulong ******)pppppppuStack_2a8;
            param_2[0xe] = (ulong ******)pppppppuStack_300;
            param_2[0xf] = ppppppuStack_320;
            param_2[0x10] = (ulong ******)pppppppuVar32;
            param_2[0x11] = (ulong ******)pppppppuStack_2d8;
            param_2[0x16] = ppppppuStack_a0;
            param_2[0x13] = (ulong ******)pppppppuStack_b8;
            param_2[0x12] = (ulong ******)pppppppuStack_c0;
            param_2[0x15] = ppppppuStack_a8;
            param_2[0x14] = (ulong ******)pppppppuStack_b0;
            _memcpy(&ppppppuStack_250,param_2,0x118);
            ppppppuVar27 = (ulong ******)FUN_100fbc67c(&bStack_2a0);
            goto code_r0x00010046827c;
          }
          pppppppuVar29 = (ulong *******)&UNK_108ca1000;
code_r0x00010046805c:
          uStack_90 = (ulong *******)((long)pppppppuVar29 + 100);
          pppppppuStack_88 = (ulong *******)0x7;
          pppppppuVar29 = (ulong *******)&uStack_90;
code_r0x00010046806c:
          pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
          uStack_100 = pppppppuVar29;
FUN_100468078:
          ppppppuVar27 = (ulong ******)
                         thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
          *param_2 = (ulong ******)0x1d;
          param_2[1] = ppppppuVar27;
          if (unaff_x26 != (ulong *******)0x0) {
            _free(pppppppuStack_2f8);
          }
        }
LAB_10046809c:
        param_2 = pppppppuStack_2b8;
        uVar34 = (uint)unaff_x20;
        uVar35 = (uint)unaff_x21;
        uVar28 = (uint)unaff_x19;
        if (unaff_x25 != (ulong *******)0x0) {
          _free(pppppppuStack_2f0);
        }
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(pppppppuStack_2e8);
      }
    }
    if (param_2 != (ulong *******)0x0) {
      _free(unaff_x22);
    }
    uVar37 = 0;
    goto joined_r0x0001004685b4;
  case 0x29:
  case 0x6b:
  case 0xc3:
  case 0xef:
    goto code_r0x00010046794c;
  case 0x2a:
  case 0x6c:
  case 0xc4:
  case 0xf0:
    goto code_r0x000100467990;
  case 0x2c:
    goto code_r0x000100467ed8;
  case 0x2d:
    goto code_r0x000100467ee8;
  case 0x2e:
    goto code_r0x000100467eb0;
  case 0x2f:
    goto code_r0x000100467ec8;
  case 0x30:
    goto code_r0x000100467e74;
  case 0x31:
    goto code_r0x000100467ef8;
  case 0x32:
    goto code_r0x000100467f10;
  case 0x33:
    goto code_r0x000100467ed0;
  case 0x34:
  case 0x92:
    goto code_r0x000100467f28;
  case 0x35:
    goto code_r0x000100467ea4;
  case 0x36:
    goto code_r0x000100467f18;
  case 0x37:
    goto code_r0x000100467e4c;
  case 0x38:
    goto code_r0x000100467e7c;
  case 0x39:
    goto code_r0x000100467f00;
  case 0x3b:
    goto code_r0x000100467eb8;
  case 0x3e:
  case 0x88:
code_r0x000100467f78:
    unaff_x19 = (ulong *******)0x1;
    *param_2 = (ulong ******)pppppppuVar32;
    param_2[1] = (ulong ******)pppppppuVar29;
  case 0x90:
    unaff_x23 = (ulong *******)0x0;
    unaff_x21 = (ulong *******)0x1;
    unaff_x20 = (ulong *******)0x1;
    unaff_x22 = (ulong *******)0x1;
code_r0x000100467f90:
    uVar37 = (uint)unaff_x22;
    uVar34 = (uint)unaff_x20;
    uVar35 = (uint)unaff_x21;
    uVar28 = (uint)unaff_x19;
    unaff_x25 = pppppppuStack_2c8;
    unaff_x26 = pppppppuStack_2d0;
    param_2 = pppppppuStack_2b8;
    goto joined_r0x0001004685b4;
  case 0x3f:
    goto code_r0x000100467aac;
  case 0x40:
    goto code_r0x000100467af0;
  case 0x44:
  case 0xfa:
    goto code_r0x000100467da4;
  case 0x46:
    goto code_r0x000100467d68;
  case 0x48:
    goto code_r0x000100467e04;
  case 0x4b:
  case 0x75:
    goto code_r0x000100467d98;
  case 0x4d:
    goto code_r0x000100467d40;
  case 0x4e:
    goto code_r0x000100467d70;
  case 0x4f:
    goto code_r0x000100467df4;
  case 0x50:
    goto code_r0x000100467d18;
  case 0x51:
    goto code_r0x000100467dac;
  case 0x55:
    goto code_r0x000100467960;
  case 0x56:
    goto code_r0x0001004679a4;
  case 0x6e:
    goto code_r0x000100467da0;
  case 0x6f:
  case 0xa9:
    goto code_r0x000100467db0;
  case 0x70:
    goto code_r0x000100467d78;
  case 0x76:
  case 0x9f:
    goto code_r0x000100467df0;
  case 0x79:
  case 0xaa:
    goto code_r0x000100467d14;
  case 0x7c:
    goto code_r0x000100467cec;
  case 0x7d:
    goto code_r0x000100467d80;
  case 0x7e:
    goto code_r0x000100467ce4;
  case 0x81:
    goto code_r0x000100467954;
  case 0x82:
    goto code_r0x000100467998;
  case 0x84:
    goto code_r0x000100467fdc;
  case 0x85:
    goto code_r0x000100467fec;
  case 0x86:
    goto code_r0x000100467fb4;
  case 0x87:
    goto code_r0x000100467fcc;
  case 0x89:
  case 0xd5:
    goto code_r0x000100467ffc;
  case 0x8a:
  case 0xcd:
    goto code_r0x000100468014;
  case 0x8b:
    goto code_r0x000100467fd4;
  case 0x8c:
  case 199:
    goto code_r0x00010046802c;
  case 0x8d:
code_r0x000100467fa8:
    unaff_x25 = (ulong *******)0x0;
    unaff_x21 = (ulong *******)0x1;
    unaff_x20 = (ulong *******)0x1;
code_r0x000100467fb4:
    unaff_x22 = (ulong *******)0x1;
code_r0x000100467fb8:
    unaff_x23 = pppppppuStack_2c0;
code_r0x000100467fbc:
    uVar37 = (uint)unaff_x22;
    uVar34 = (uint)unaff_x20;
    uVar35 = (uint)unaff_x21;
    uVar28 = (uint)unaff_x19;
    param_2 = pppppppuStack_2b8;
    goto joined_r0x0001004685b4;
  case 0x8e:
  case 0xc6:
    goto code_r0x00010046801c;
  case 0x8f:
code_r0x000100467f50:
    unaff_x22 = (ulong *******)0x1;
    unaff_x20 = (ulong *******)0x1;
    unaff_x21 = (ulong *******)0x1;
    unaff_x19 = (ulong *******)0x1;
  case 0xd6:
    unaff_x23 = pppppppuStack_2c0;
    param_2 = pppppppuStack_2b8;
    unaff_x25 = pppppppuStack_2c8;
code_r0x000100467f68:
    uVar37 = (uint)unaff_x22;
    uVar34 = (uint)unaff_x20;
    uVar35 = (uint)unaff_x21;
    uVar28 = (uint)unaff_x19;
    goto LAB_100468100;
  case 0x91:
    goto code_r0x000100468004;
  case 0x93:
    goto code_r0x000100467fbc;
  case 0x94:
    goto code_r0x000100467f20;
  case 0x96:
    goto FUN_100468078;
  case 0x9a:
    goto code_r0x000100467dd0;
  case 0x9c:
    goto code_r0x000100467da8;
  case 0xa3:
    goto code_r0x000100467d9c;
  case 0xa6:
  case 0xf7:
    goto code_r0x000100467d74;
  case 0xac:
    goto code_r0x000100467e70;
  case 0xad:
    goto code_r0x000100467974;
  case 0xae:
    goto code_r0x0001004679b8;
  case 200:
    goto code_r0x000100467ff4;
  case 0xc9:
code_r0x00010046800c:
    pppppppuStack_130 = pppppppuStack_2d8;
    unaff_x26 = pppppppuStack_2d0;
    pppppppuStack_138 = pppppppuVar33;
code_r0x000100468014:
    pppppppuVar32 = (ulong *******)0x1d;
    pppppppuVar29 = pppppppuStack_88;
code_r0x00010046801c:
    unaff_x19 = (ulong *******)0x1;
    *param_2 = (ulong ******)pppppppuVar32;
    param_2[1] = (ulong ******)pppppppuVar29;
    param_2 = (ulong *******)0x0;
    unaff_x21 = (ulong *******)0x1;
code_r0x00010046802c:
    unaff_x20 = (ulong *******)0x1;
    unaff_x22 = (ulong *******)0x1;
    pppppppuVar29 = (ulong *******)0x8000000000000001;
    unaff_x23 = pppppppuStack_2c0;
    unaff_x25 = pppppppuStack_2c8;
code_r0x00010046803c:
    in_ZR = pppppppuStack_2b0 == pppppppuVar29;
    pppppppuVar32 = pppppppuStack_2b0;
code_r0x000100468044:
    uVar37 = (uint)unaff_x22;
    uVar34 = (uint)unaff_x20;
    uVar35 = (uint)unaff_x21;
    uVar28 = (uint)unaff_x19;
    if ((bool)in_ZR) goto LAB_100468100;
    goto joined_r0x000100468474;
  case 0xca:
    goto code_r0x000100467fb8;
  case 0xcb:
    goto code_r0x00010046803c;
  case 0xcc:
    goto code_r0x000100468054;
  case 0xce:
    goto code_r0x00010046806c;
  case 0xcf:
code_r0x000100467fe8:
    pppppppuVar32 = (ulong *******)0x1d;
code_r0x000100467fec:
    unaff_x19 = (ulong *******)0x1;
    *param_2 = (ulong ******)pppppppuVar32;
    param_2[1] = (ulong ******)pppppppuVar29;
code_r0x000100467ff4:
    unaff_x26 = (ulong *******)0x0;
    unaff_x21 = (ulong *******)0x1;
code_r0x000100467ffc:
    unaff_x20 = (ulong *******)0x1;
    unaff_x22 = (ulong *******)0x1;
code_r0x000100468004:
    uVar37 = (uint)unaff_x22;
    uVar34 = (uint)unaff_x20;
    uVar35 = (uint)unaff_x21;
    uVar28 = (uint)unaff_x19;
    unaff_x23 = pppppppuStack_2c0;
    unaff_x25 = pppppppuStack_2c8;
    param_2 = pppppppuStack_2b8;
    goto joined_r0x0001004685b4;
  case 0xd0:
    goto code_r0x00010046805c;
  case 0xd1:
    goto code_r0x000100467f90;
  case 0xd2:
code_r0x000100467fc0:
    pppppppuStack_130 = pppppppuStack_2d8;
    pppppppuVar32 = (ulong *******)0x1d;
    pppppppuStack_138 = pppppppuVar33;
code_r0x000100467fcc:
    unaff_x19 = (ulong *******)0x1;
    *param_2 = (ulong ******)pppppppuVar32;
    param_2[1] = (ulong ******)pppppppuVar29;
code_r0x000100467fd4:
    pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
code_r0x000100467fdc:
    uVar28 = (uint)unaff_x19;
code_r0x000100467b4c:
    uVar35 = 1;
    uVar34 = 1;
    uVar37 = 1;
    unaff_x23 = pppppppuStack_2c0;
    unaff_x25 = pppppppuStack_2c8;
    unaff_x26 = pppppppuStack_2d0;
    param_2 = pppppppuStack_2b8;
    goto joined_r0x0001004685b4;
  case 0xd3:
    goto code_r0x000100468044;
  case 0xd4:
    goto code_r0x000100467f68;
  case 0xd8:
    goto LAB_10046809c;
  case 0xd9:
code_r0x000100467b34:
    pppppppuStack_130 = pppppppuStack_2d8;
    *param_2 = (ulong ******)0x1d;
    param_2[1] = (ulong ******)pppppppuStack_f8;
    uVar28 = 1;
    pppppppuStack_138 = pppppppuVar33;
    goto code_r0x000100467b4c;
  case 0xda:
code_r0x000100467b78:
    pppppppuStack_2b0 = (ulong *******)0x8000000000000001;
    pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
    unaff_x25 = (ulong *******)0x0;
    unaff_x26 = (ulong *******)0x0;
    pppppppuStack_138 = pppppppuVar32;
code_r0x000100467c18:
    uStack_90 = (ulong *******)&UNK_108cb88a4;
    pppppppuStack_88 = (ulong *******)0x7;
    uStack_100 = (ulong *******)&uStack_90;
    pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
    ppppppuVar27 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
    uVar28 = 1;
    *param_2 = (ulong ******)0x1d;
    param_2[1] = ppppppuVar27;
    param_2 = (ulong *******)0x0;
    uVar35 = 1;
    uVar34 = 1;
    uVar37 = 1;
joined_r0x0001004685b4:
    pppppppuVar32 = pppppppuStack_2b0;
    if (pppppppuStack_2b0 != (ulong *******)0x8000000000000001) {
joined_r0x000100468474:
      if (pppppppuVar32 != (ulong *******)0x8000000000000000) {
        if (pppppppuVar32 != (ulong *******)0x0) {
          _free(pppppppuStack_2d8);
        }
        if (pppppppuStack_120 != (ulong *******)0x0) {
          _free(pppppppuStack_118);
        }
      }
    }
LAB_100468100:
    if (((ulong)pppppppuStack_2a8 & 0x7fffffffffffffff) == 0) {
      uVar2 = 0;
      if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar28;
      }
    }
    else {
      _free(pppppppuStack_300);
      uVar2 = 0;
      if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar28;
      }
    }
    if ((uVar2 & 1) == 0) {
      uVar28 = 0;
      if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
        uVar28 = uVar35;
      }
    }
    else {
      _free(pppppppuStack_2f8);
      uVar28 = 0;
      if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
        uVar28 = uVar35;
      }
    }
    if ((uVar28 & 1) == 0) {
      uVar28 = 0;
      if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
        uVar28 = uVar34;
      }
    }
    else {
      _free(pppppppuStack_2f0);
      uVar28 = 0;
      if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
        uVar28 = uVar34;
      }
    }
    if ((uVar28 & 1) == 0) {
      uVar28 = 0;
      if (((ulong)param_2 & 0x7fffffffffffffff) != 0) {
        uVar28 = uVar37;
      }
    }
    else {
      _free(pppppppuStack_2e8);
      uVar28 = 0;
      if (((ulong)param_2 & 0x7fffffffffffffff) != 0) {
        uVar28 = uVar37;
      }
    }
    if ((uVar28 & 1) != 0) {
      _free(pppppppuStack_2e0);
    }
    FUN_100d34830(&pppppppuStack_280);
    if (bStack_2a0 == 0x16) {
      return;
    }
    FUN_100e077ec(&bStack_2a0);
    return;
  case 0xf6:
    goto code_r0x000100467cf0;
  case 0xf9:
    goto code_r0x000100467d4c;
  case 0xfb:
    goto code_r0x000100467d20;
  case 0xfd:
    goto code_r0x000100467cc8;
  case 0xfe:
    goto code_r0x000100467cf8;
  }
  bVar31 = 1;
  pppppppuStack_248 = pppppppuVar29;
code_r0x000100467e04:
code_r0x000100467e44:
  ppppppuStack_250 = (ulong ******)CONCAT71(ppppppuStack_250._1_7_,bVar31);
code_r0x000100467e48:
  param_4 = &UNK_10b21b000;
code_r0x000100467e4c:
  ppppppuVar27 = (ulong ******)FUN_107c05dcc(&ppppppuStack_250,auStack_69,param_4 + 0x210);
  *param_2 = (ulong ******)0x1d;
  param_2[1] = ppppppuVar27;
  return;
}

