
/* WARNING: Type propagation algorithm not settling */

void FUN_10043ab68(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  code *pcVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar25;
  ulong *******pppppppuVar26;
  ulong ******ppppppuVar27;
  ulong ******ppppppuVar28;
  uint uVar29;
  byte bVar30;
  ulong *******pppppppuVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  ulong *******pppppppuVar35;
  ulong *******pppppppuVar36;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar37;
  ulong *******unaff_x25;
  ulong *******pppppppuVar38;
  ulong *******pppppppuVar39;
  ulong *******unaff_x27;
  ulong *******pppppppuVar40;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar41;
  undefined8 unaff_x30;
  ulong *******pppppppuVar42;
  ulong *******pppppppuVar43;
  ulong *******pppppppuVar44;
  ulong *******pppppppuVar45;
  byte abStack_380 [80];
  ulong *******pppppppuStack_330;
  ulong *******pppppppuStack_328;
  ulong ******ppppppuStack_320;
  ulong *******pppppppuStack_318;
  ulong *******pppppppuStack_310;
  undefined8 *puStack_308;
  ulong ******ppppppuStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  ulong ******ppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong ******ppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong ******ppppppuStack_2a0;
  ulong ******ppppppuStack_298;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  undefined8 uStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar17;
  ulong *******pppppppuVar24;
  
  pppppppuVar43 = param_1._8_8_;
  pppppppuVar42 = param_1._0_8_;
  puVar41 = &stack0xfffffffffffffff0;
  pppppppuVar16 = (ulong *******)&pppppppuStack_330;
  pppppppuVar23 = (ulong *******)&pppppppuStack_330;
  pppppppuVar12 = (ulong *******)&pppppppuStack_330;
  bVar30 = *(byte *)param_4;
  pppppppuVar31 = (ulong *******)(ulong)bVar30;
  pppppppuVar35 = (ulong *******)&UNK_108c98b92;
  pppppppuVar18 = (ulong *******)&pppppppuStack_330;
  pppppppuVar19 = (ulong *******)&pppppppuStack_330;
  pppppppuVar20 = (ulong *******)&pppppppuStack_330;
  pppppppuVar21 = (ulong *******)&pppppppuStack_330;
  pppppppuVar22 = (ulong *******)&pppppppuStack_330;
  pppppppuVar24 = (ulong *******)&pppppppuStack_330;
  pppppppuVar14 = (ulong *******)&pppppppuStack_330;
  pppppppuVar15 = (ulong *******)&pppppppuStack_330;
  pppppppuVar17 = (ulong *******)&pppppppuStack_330;
  pppppppuVar9 = (ulong *******)&pppppppuStack_330;
  pppppppuVar10 = (ulong *******)&pppppppuStack_330;
  pppppppuVar11 = (ulong *******)&pppppppuStack_330;
  pppppppuVar13 = (ulong *******)&pppppppuStack_330;
  pppppppuVar26 = param_3;
  pppppppuVar36 =
       (ulong *******)
       (&UNK_10043aba8 + (ulong)*(ushort *)(&UNK_108c98b92 + (long)pppppppuVar31 * 2) * 4);
  pppppppuVar38 = unaff_x25;
  pppppppuVar39 = param_3;
  pppppppuVar40 = unaff_x27;
  pppppppuVar44 = param_2._0_8_;
  pppppppuVar45 = param_2._8_8_;
  pppppppuVar6 = pppppppuStack_2d8;
  pppppppuVar7 = pppppppuStack_2c0;
  switch(bVar30) {
  case 0:
  case 0x84:
  case 0x9a:
    bVar30 = *(byte *)((long)param_4 + 1);
  case 0x3b:
  case 0xf5:
    pppppppuStack_2b0 = (ulong *******)((ulong)CONCAT61(pppppppuStack_2b0._2_6_,bVar30) << 8);
code_r0x00010043b450:
    pppppppuStack_2b0 = (ulong *******)((ulong)pppppppuStack_2b0 & 0xffffffffffffff00);
code_r0x00010043b454:
    goto code_r0x00010043b4a8;
  case 1:
  case 0x78:
  case 0x85:
  case 0x9b:
    pppppppuVar31 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0x2f:
  case 0x6a:
  case 0xf2:
code_r0x00010043b45c:
    bVar30 = 1;
    pppppppuStack_2a8 = pppppppuVar31;
code_r0x00010043b464:
    break;
  case 2:
  case 0x86:
  case 0x9c:
    pppppppuVar31 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x00010043b45c;
  case 3:
  case 0x35:
  case 0x73:
  case 0x87:
  case 0x9d:
    pppppppuVar31 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x00010043b45c;
  case 4:
  case 0x65:
  case 0x77:
  case 0x88:
  case 0x9e:
    pppppppuVar31 = (ulong *******)param_4[1];
    goto code_r0x00010043b45c;
  case 5:
  case 0x76:
  case 0x89:
  case 0x9f:
    pppppppuVar31 = (ulong *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x2c:
  case 0xf3:
    goto code_r0x00010043b49c;
  case 6:
  case 0x8a:
  case 0xa0:
    pppppppuVar31 = (ulong *******)(long)*(short *)((long)param_4 + 2);
  case 0xec:
  case 0xff:
code_r0x00010043b49c:
    bVar30 = 2;
    pppppppuStack_2a8 = pppppppuVar31;
    break;
  case 7:
  case 0x7b:
  case 0x8b:
  case 0xa1:
    pppppppuVar31 = (ulong *******)(long)*(int *)((long)param_4 + 4);
  case 0x2e:
    goto code_r0x00010043b49c;
  case 8:
  case 0x8c:
  case 0xa2:
    pppppppuVar31 = (ulong *******)param_4[1];
    goto code_r0x00010043b49c;
  case 9:
  case 0x8d:
  case 0xa3:
    pppppppuVar42 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x6e:
    pppppppuVar42 = (ulong *******)(double)SUB84(pppppppuVar42,0);
code_r0x00010043b48c:
    bVar30 = 3;
    pppppppuStack_2a8 = pppppppuVar42;
code_r0x00010043b494:
    break;
  case 10:
  case 0x8e:
  case 0xa4:
    pppppppuVar42 = (ulong *******)param_4[1];
    goto code_r0x00010043b48c;
  case 0xb:
  case 0x58:
  case 0x7a:
  case 0x8f:
  case 0xa5:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
    pppppppuVar14 = (ulong *******)&stack0xffffffffffffffa0;
    puVar41 = unaff_x29;
  case 0x59:
    unaff_x20 = *(ulong ********)((long)pppppppuVar14 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar14 + 0x48);
    pppppppuVar15 = pppppppuVar14;
code_r0x00010043b3d0:
    pppppppuVar17 = pppppppuVar15;
code_r0x00010043b3dc:
    pppppppuVar16 = (ulong *******)((long)pppppppuVar17 + 0x60);
code_r0x00010043b3e0:
    *(ulong ********)((long)pppppppuVar16 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar16 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar16 + -0x10) = puVar41;
    *(undefined8 *)((long)pppppppuVar16 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar16 + -0x44) = 0;
    uVar29 = (uint)param_4;
    if (uVar29 < 0x80) {
      *(byte *)((long)pppppppuVar16 + -0x44) = (byte)param_4;
      uVar32 = 1;
    }
    else {
      bVar30 = (byte)param_4 & 0x3f | 0x80;
      if (uVar29 < 0x800) {
        *(byte *)((long)pppppppuVar16 + -0x44) = (byte)(uVar29 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar16 + -0x43) = bVar30;
        uVar32 = 2;
      }
      else {
        bVar1 = (byte)(uVar29 >> 6) & 0x3f | 0x80;
        if (uVar29 < 0x10000) {
          *(byte *)((long)pppppppuVar16 + -0x44) = (byte)(uVar29 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar16 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar16 + -0x42) = bVar30;
          uVar32 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar16 + -0x44) = (byte)(uVar29 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar16 + -0x43) = (byte)(uVar29 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar16 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar16 + -0x41) = bVar30;
          uVar32 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar16 + -0x38) = (undefined1 *)((long)pppppppuVar16 + -0x44);
    *(undefined8 *)((long)pppppppuVar16 + -0x30) = uVar32;
    *(undefined1 *)((long)pppppppuVar16 + -0x40) = 5;
    ppppppuVar27 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar16 + -0x40),
                                       (undefined1 *)((long)pppppppuVar16 + -0x21),&UNK_10b21bef0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar27;
    return;
  case 0xc:
  case 0x90:
  case 0xa6:
    param_4 = param_4 + 1;
  case 0x70:
code_r0x00010043b3f4:
    pppppppuVar18 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010043b3f8:
    puVar41 = *(undefined1 **)((long)pppppppuVar18 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar18 + 0x58);
    pppppppuVar19 = pppppppuVar18;
code_r0x00010043b3fc:
    unaff_x20 = *(ulong ********)((long)pppppppuVar19 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar19 + 0x48);
    pppppppuVar20 = pppppppuVar19;
code_r0x00010043b400:
    unaff_x22 = *(ulong ********)((long)pppppppuVar20 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar20 + 0x38);
    pppppppuVar21 = pppppppuVar20;
code_r0x00010043b404:
    pppppppuVar22 = pppppppuVar21;
code_r0x00010043b408:
    pppppppuVar24 = pppppppuVar22;
code_r0x00010043b40c:
    pppppppuVar23 = (ulong *******)((long)pppppppuVar24 + 0x60);
code_r0x00010043b410:
    *(ulong ********)((long)pppppppuVar23 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar23 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar23 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar23 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar23 + -0x10) = puVar41;
    *(undefined8 *)((long)pppppppuVar23 + -8) = unaff_x30;
    ppppppuVar27 = param_4[1];
    ppppppuVar28 = param_4[2];
    *(ulong *******)((long)pppppppuVar23 + -0x48) = ppppppuVar27;
    *(ulong *******)((long)pppppppuVar23 + -0x40) = ppppppuVar28;
    *(undefined1 *)((long)pppppppuVar23 + -0x50) = 5;
    ppppppuVar28 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar23 + -0x50),
                                       (undefined1 *)((long)pppppppuVar23 + -0x31),&UNK_10b21bef0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar28;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar27);
    }
    return;
  case 0xd:
  case 0x91:
  case 0xa7:
    pppppppuStack_2a8 = (ulong *******)param_4[1];
    ppppppuStack_2a0 = param_4[2];
    bVar30 = 5;
  case 0x2d:
  case 0xf7:
    break;
  case 0xe:
  case 0x5a:
  case 0x92:
  case 0xa8:
    param_4 = param_4 + 1;
  case 0x48:
  case 0x67:
    pppppppuVar9 = (ulong *******)&stack0xffffffffffffffa0;
    puVar41 = unaff_x29;
code_r0x00010043b3a4:
    unaff_x20 = *(ulong ********)((long)pppppppuVar9 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar9 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar9 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar9 + 0x38);
    pppppppuVar10 = pppppppuVar9;
code_r0x00010043b3ac:
    pppppppuVar11 = pppppppuVar10;
code_r0x00010043b3b0:
    pppppppuVar13 = pppppppuVar11;
code_r0x00010043b3b4:
    pppppppuVar12 = (ulong *******)((long)pppppppuVar13 + 0x60);
code_r0x00010043b3b8:
    *(ulong ********)((long)pppppppuVar12 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar12 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar12 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar12 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar12 + -0x10) = puVar41;
    *(undefined8 *)((long)pppppppuVar12 + -8) = unaff_x30;
    ppppppuVar27 = param_4[1];
    ppppppuVar28 = param_4[2];
    *(ulong *******)((long)pppppppuVar12 + -0x48) = ppppppuVar27;
    *(ulong *******)((long)pppppppuVar12 + -0x40) = ppppppuVar28;
    *(undefined1 *)((long)pppppppuVar12 + -0x50) = 6;
    ppppppuVar28 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar12 + -0x50),
                                       (undefined1 *)((long)pppppppuVar12 + -0x31),&UNK_10b21bef0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar28;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar27);
    }
    return;
  case 0xf:
  case 0x6f:
  case 0x93:
  case 0xa9:
  case 0xfb:
    pppppppuStack_2a8 = (ulong *******)param_4[1];
    ppppppuStack_2a0 = param_4[2];
    bVar30 = 6;
  case 0xf4:
    break;
  case 0x10:
  case 0x4f:
  case 0x79:
  case 0x94:
  case 0xaa:
    bVar30 = 8;
    break;
  default:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_2a8 = (ulong *******)unaff_x20[1];
    pppppppuStack_2b0 = (ulong *******)*unaff_x20;
    ppppppuStack_298 = unaff_x20[3];
    ppppppuStack_2a0 = unaff_x20[2];
    func_0x000107c04838(param_3,&pppppppuStack_2b0);
    goto code_r0x00010043b00c;
  case 0x12:
  case 0x96:
  case 0xac:
    bVar30 = 7;
    break;
  case 0x13:
  case 0x3f:
  case 0x97:
  case 0xad:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuVar43 = (ulong *******)unaff_x20[1];
    pppppppuVar42 = (ulong *******)*unaff_x20;
  case 0x81:
    ppppppuStack_298 = unaff_x20[3];
    ppppppuStack_2a0 = unaff_x20[2];
    param_4 = (ulong *******)&pppppppuStack_2b0;
    pppppppuStack_2b0 = pppppppuVar42;
    pppppppuStack_2a8 = pppppppuVar43;
code_r0x00010043b004:
code_r0x00010043b008:
    func_0x000107c05558(param_3,param_4);
code_r0x00010043b00c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x14:
  case 0x40:
  case 0x98:
  case 0xae:
    unaff_x23 = (ulong *******)param_4[1];
    unaff_x20 = (ulong *******)param_4[2];
    unaff_x25 = (ulong *******)param_4[3];
  case 0x82:
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    pppppppuStack_98 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    uStack_b8 = unaff_x20;
    pppppppuStack_a8 = unaff_x23;
    pppppppuStack_a0 = unaff_x19;
    if (unaff_x25 == (ulong *******)0x0) {
code_r0x00010043b064:
      pppppppuStack_b0 = unaff_x21;
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f638,&UNK_10b20a590);
code_r0x00010043b080:
      *param_3 = (ulong ******)0x800000000000006e;
      param_3[1] = (ulong ******)unaff_x22;
code_r0x00010043b08c:
      lVar37 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar37 = lVar37 + -1, lVar37 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x00010043b064;
      uStack_2f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      ppppppuStack_300._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_2f8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      ppppppuStack_2e8 = unaff_x20[3];
      uStack_2f0 = SUB81(unaff_x20[2],0);
      uStack_2ef = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_98 = (ulong *******)0x1;
      ppppppuStack_300._0_1_ = *(byte *)unaff_x20;
      pppppppuStack_b0 = unaff_x21;
      func_0x00010135ba2c(&uStack_e8,&ppppppuStack_300);
      unaff_x24 = (ulong *******)CONCAT71(uStack_e7,uStack_e8);
      unaff_x22 = (ulong *******)CONCAT71(uStack_df,uStack_e0);
      if (unaff_x24 == (ulong *******)0x8000000000000001) goto code_r0x00010043b080;
      if (unaff_x25 == (ulong *******)0x1) {
code_r0x00010043b128:
        pppppppuVar26 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22f638,&UNK_10b20a590);
code_r0x00010043b140:
        pppppppuVar31 = (ulong *******)0x800000000000006e;
code_r0x00010043b148:
        *param_3 = (ulong ******)pppppppuVar31;
        param_3[1] = (ulong ******)pppppppuVar26;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x00010043b08c;
      }
      unaff_x25 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
      unaff_x21 = unaff_x20 + 8;
code_r0x00010043b118:
      pppppppuVar31 = (ulong *******)(ulong)*(byte *)(unaff_x20 + 4);
      pppppppuStack_b0 = unaff_x21;
code_r0x00010043b120:
      if ((int)pppppppuVar31 == 0x16) goto code_r0x00010043b128;
      uStack_df = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
      pppppppuStack_d0 = (ulong *******)unaff_x20[7];
      uStack_d8 = SUB81(unaff_x20[6],0);
      uStack_d7 = (undefined7)((ulong)unaff_x20[6] >> 8);
      pppppppuStack_98 = (ulong *******)0x2;
      uStack_e8 = SUB81(pppppppuVar31,0);
code_r0x00010043b50c:
      func_0x00010138086c(&ppppppuStack_300,&uStack_e8);
code_r0x00010043b518:
      pppppppuVar31 = (ulong *******)CONCAT71(ppppppuStack_300._1_7_,(byte)ppppppuStack_300);
      pppppppuVar26 = (ulong *******)CONCAT71(uStack_2f7,uStack_2f8);
      pppppppuVar35 = (ulong *******)0x8000000000000000;
code_r0x00010043b520:
      if (pppppppuVar31 == pppppppuVar35) goto code_r0x00010043b140;
      unaff_x19 = (ulong *******)0x800000000000006e;
code_r0x00010043b530:
      param_3[4] = ppppppuStack_2e8;
      param_3[3] = (ulong ******)CONCAT71(uStack_2ef,uStack_2f0);
      pppppppuVar44 = pppppppuStack_2e0;
      pppppppuVar45 = pppppppuStack_2d8;
code_r0x00010043b538:
      param_3[6] = (ulong ******)pppppppuVar45;
      param_3[5] = (ulong ******)pppppppuVar44;
      pppppppuVar35 = (ulong *******)((long)unaff_x19 + -0x24);
code_r0x00010043b540:
      *param_3 = (ulong ******)pppppppuVar35;
      param_3[1] = (ulong ******)pppppppuVar31;
      param_3[2] = (ulong ******)pppppppuVar26;
      param_3[7] = (ulong ******)unaff_x24;
      param_3[8] = (ulong ******)unaff_x22;
      param_3[9] = (ulong ******)unaff_x25;
code_r0x00010043b550:
      _memcpy(&pppppppuStack_2b0,param_3,0x1c0);
code_r0x00010043b560:
      pppppppuVar26 = (ulong *******)FUN_100fbc738(&uStack_b8);
code_r0x00010043b568:
      if (pppppppuVar26 != (ulong *******)0x0) {
        *param_3 = (ulong ******)unaff_x19;
        param_3[1] = (ulong ******)pppppppuVar26;
code_r0x00010043b570:
        FUN_100e44f40(&pppppppuStack_2b0);
code_r0x00010043b578:
      }
    }
    goto code_r0x00010043b4dc;
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
    ppppppuStack_2d0 = param_4[1];
    pppppppuStack_2e0 = (ulong *******)param_4[2];
    ppppppuVar27 = param_4[3];
    unaff_x19 = pppppppuStack_2e0 + (long)ppppppuVar27 * 8;
    ppppppuStack_300._0_1_ = 0x16;
    pppppppuStack_2c0 = (ulong *******)0x0;
    pppppppuStack_2d8 = pppppppuStack_2e0;
    pppppppuStack_2c8 = unaff_x19;
    if (ppppppuVar27 != (ulong ******)0x0) {
      unaff_x25 = (ulong *******)0x0;
      unaff_x22 = (ulong *******)((ulong)&uStack_b8 | 1);
      unaff_x21 = (ulong *******)((ulong)&ppppppuStack_300 | 1);
      puStack_308 = (undefined8 *)((ulong)&pppppppuStack_88 | 1);
      pppppppuStack_330 = (ulong *******)(((long)ppppppuVar27 * 0x40 - 0x40U >> 6) + 1);
      pppppppuVar26 = pppppppuStack_2e0 + 8;
      unaff_x24 = (ulong *******)0x8000000000000000;
      unaff_x23 = (ulong *******)0x8000000000000001;
      unaff_x28 = (ulong *******)0x8000000000000000;
      pppppppuStack_328 = param_3;
      goto code_r0x00010043ac38;
    }
    unaff_x24 = (ulong *******)0x8000000000000000;
    uStack_e8 = 0;
    uStack_e7 = 0x80000000000000;
    goto code_r0x00010043b18c;
  case 0x16:
    goto code_r0x00010043b1d4;
  case 0x17:
    goto LAB_10043b1e4;
  case 0x18:
    goto code_r0x00010043b1ac;
  case 0x19:
    goto code_r0x00010043b1c4;
  case 0x1a:
    goto code_r0x00010043b170;
  case 0x1b:
    goto LAB_10043b1f4;
  case 0x1c:
    goto code_r0x00010043b20c;
  case 0x1d:
    goto code_r0x00010043b1cc;
  case 0x1e:
    goto code_r0x00010043b224;
  case 0x1f:
    goto code_r0x00010043b1a0;
  case 0x20:
    goto code_r0x00010043b214;
  case 0x21:
    goto code_r0x00010043b148;
  case 0x22:
    goto code_r0x00010043b178;
  case 0x23:
    goto code_r0x00010043b1fc;
  case 0x24:
    goto code_r0x00010043b120;
  case 0x25:
    goto code_r0x00010043b1b4;
  case 0x26:
    goto code_r0x00010043b118;
  case 0x28:
  case 0xbb:
    goto code_r0x00010043b26c;
  case 0x29:
    goto code_r0x00010043ae50;
  case 0x2a:
    goto code_r0x00010043ae94;
  case 0x30:
  case 0x71:
    goto code_r0x00010043b408;
  case 0x31:
  case 0xea:
    goto code_r0x00010043b48c;
  case 0x32:
    break;
  case 0x33:
    goto code_r0x00010043b464;
  case 0x34:
    goto code_r0x00010043b4bc;
  case 0x36:
  case 0xfa:
    goto code_r0x00010043b4ac;
  case 0x37:
    goto code_r0x00010043b3e0;
  case 0x38:
  case 0x75:
    goto code_r0x00010043b410;
  case 0x39:
  case 0xf8:
    goto code_r0x00010043b494;
  case 0x3a:
    goto code_r0x00010043b3b8;
  case 0x3c:
    goto code_r0x00010043b3b0;
  case 0x3e:
  case 0xe5:
    goto code_r0x00010043b50c;
  case 0x42:
  case 0x7c:
    goto code_r0x00010043b364;
  case 0x43:
    goto code_r0x00010043b374;
  case 0x44:
    goto code_r0x00010043b33c;
  case 0x45:
code_r0x00010043b354:
    pppppppuStack_2c0 = pppppppuVar31;
  case 0x5c:
    unaff_x22 = pppppppuStack_310;
    unaff_x27 = pppppppuStack_318;
code_r0x00010043b35c:
    uStack_e8 = SUB81(unaff_x28,0);
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(unaff_x27,0);
    uStack_df = (undefined7)((ulong)unaff_x27 >> 8);
code_r0x00010043b360:
    unaff_x23 = (ulong *******)0x8000000000000001;
code_r0x00010043b364:
    unaff_x20 = &ppppppuStack_300;
    param_3 = pppppppuStack_80;
    pppppppuVar26 = pppppppuStack_328;
code_r0x00010043b370:
    pppppppuVar31 = (ulong *******)0x6e;
code_r0x00010043b374:
    pppppppuVar31 = (ulong *******)((ulong)pppppppuVar31 | 0x8000000000000000);
code_r0x00010043b378:
    *pppppppuVar26 = (ulong ******)pppppppuVar31;
    pppppppuVar26[1] = (ulong ******)param_3;
    in_ZR = unaff_x24 == (ulong *******)0x8000000000000000;
code_r0x00010043b384:
    if (!(bool)in_ZR) {
code_r0x00010043b388:
      goto joined_r0x00010043b5d4;
    }
    goto LAB_10043b1f4;
  case 0x46:
  case 0x68:
  case 199:
    goto code_r0x00010043b300;
  case 0x47:
    goto code_r0x00010043b384;
  case 0x49:
  case 0x7e:
    goto code_r0x00010043b35c;
  case 0x4a:
  case 0x5f:
  case 0x72:
    goto code_r0x00010043b3b4;
  case 0x4b:
  case 99:
  case 0xb6:
  case 0xd0:
    goto code_r0x00010043b330;
  case 0x4c:
    goto code_r0x00010043b3a4;
  case 0x4d:
  case 0xbf:
    goto code_r0x00010043b2d8;
  case 0x4e:
  case 0x66:
  case 0xb1:
    goto code_r0x00010043b308;
  case 0x50:
    goto code_r0x00010043b2b0;
  case 0x51:
    goto code_r0x00010043b344;
  case 0x52:
    goto code_r0x00010043b2a8;
  case 0x54:
    goto code_r0x00010043b404;
  case 0x55:
    goto code_r0x00010043afa0;
  case 0x56:
    goto code_r0x00010043afe4;
  case 0x5b:
    goto code_r0x00010043b3ac;
  case 0x5d:
    goto code_r0x00010043b3dc;
  case 0x5e:
    goto code_r0x00010043b3f4;
  case 0x60:
    goto code_r0x00010043b40c;
  case 0x61:
    goto code_r0x00010043b388;
  case 0x62:
    goto code_r0x00010043b3fc;
  case 100:
    goto code_r0x00010043b360;
  case 0x6b:
    goto code_r0x00010043afc4;
  case 0x6c:
    goto code_r0x00010043b008;
  case 0x74:
    goto code_r0x00010043b450;
  case 0x7d:
  case 0xf6:
    goto code_r0x00010043b3f8;
  case 0x80:
  case 0xfc:
    goto code_r0x00010043b49c;
  case 0xb0:
code_r0x00010043b2f8:
    pppppppuStack_2d8 = pppppppuVar26;
    pppppppuStack_2c0 = pppppppuVar31;
code_r0x00010043b300:
    pppppppuVar35 = (ulong *******)0x6e;
    pppppppuVar31 = pppppppuStack_b0;
code_r0x00010043b308:
    pppppppuVar35 = (ulong *******)((ulong)pppppppuVar35 | 0x8000000000000000);
    pppppppuVar36 = pppppppuStack_328;
code_r0x00010043b310:
    *pppppppuVar36 = (ulong ******)pppppppuVar35;
    pppppppuVar36[1] = (ulong ******)pppppppuVar31;
    unaff_x22 = pppppppuStack_310;
code_r0x00010043b318:
    unaff_x20 = &ppppppuStack_300;
    pppppppuVar31 = (ulong *******)0x2;
code_r0x00010043b320:
    in_OV = SBORROW8((long)unaff_x23,(ulong)pppppppuVar31 | 0x8000000000000000);
    in_NG = (long)((long)unaff_x23 - ((ulong)pppppppuVar31 | 0x8000000000000000)) < 0;
code_r0x00010043b328:
    param_3 = unaff_x22;
    if (in_NG == in_OV) goto code_r0x00010043b204;
    goto LAB_10043b32c;
  case 0xb2:
  case 0xd5:
    goto code_r0x00010043b2d0;
  case 0xb3:
  case 0xcd:
    goto code_r0x00010043b2e8;
  case 0xb4:
  case 0xd2:
    goto code_r0x00010043b294;
  case 0xb5:
  case 0xd3:
    goto code_r0x00010043b318;
  case 0xb7:
  case 0xc6:
    goto code_r0x00010043b2f0;
  case 0xb8:
    goto code_r0x00010043b348;
  case 0xb9:
    goto code_r0x00010043b2c4;
  case 0xba:
    goto code_r0x00010043b338;
  case 0xbc:
    goto code_r0x00010043b29c;
  case 0xbd:
    goto code_r0x00010043b320;
  case 0xbe:
    goto FUN_10043b244;
  case 0xc0:
  case 0xd4:
    goto code_r0x00010043b23c;
  case 0xc2:
    goto code_r0x00010043b378;
  case 0xc3:
    goto code_r0x00010043afc8;
  case 0xc4:
    goto code_r0x00010043b00c;
  case 200:
    goto code_r0x00010043b2c8;
  case 0xc9:
    goto code_r0x00010043b2e0;
  case 0xca:
    goto code_r0x00010043b28c;
  case 0xcb:
    goto code_r0x00010043b310;
  case 0xcc:
    goto code_r0x00010043b328;
  case 0xce:
    goto code_r0x00010043b340;
  case 0xcf:
    goto code_r0x00010043b2bc;
  case 0xd1:
    goto code_r0x00010043b264;
  case 0xd6:
    goto code_r0x00010043b234;
  case 0xd8:
    goto code_r0x00010043b370;
  case 0xd9:
    goto code_r0x00010043afc0;
  case 0xda:
    goto code_r0x00010043b004;
  case 0xdc:
    goto code_r0x00010043b540;
  case 0xdd:
    goto code_r0x00010043b550;
  case 0xde:
    goto code_r0x00010043b518;
  case 0xdf:
    goto code_r0x00010043b530;
  case 0xe0:
    goto code_r0x00010043b4dc;
  case 0xe1:
    goto code_r0x00010043b560;
  case 0xe2:
    goto code_r0x00010043b578;
  case 0xe3:
    goto code_r0x00010043b538;
  case 0xe4:
    goto code_r0x00010043b590;
  case 0xe6:
code_r0x00010043b580:
    uStack_e8 = SUB81(unaff_x28,0);
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_318,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
    unaff_x22 = pppppppuStack_310;
    unaff_x27 = pppppppuStack_318;
    pppppppuStack_2d8 = pppppppuVar26;
    pppppppuStack_2c0 = pppppppuVar31;
code_r0x00010043b590:
    pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_80 = (ulong *******)0x6;
    uStack_b8 = (ulong *******)&pppppppuStack_88;
    pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
    ppppppuVar27 = (ulong ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
    unaff_x20 = &ppppppuStack_300;
    *pppppppuStack_328 = (ulong ******)0x800000000000006e;
    pppppppuStack_328[1] = ppppppuVar27;
    goto joined_r0x00010043b5d4;
  case 0xe7:
    goto code_r0x00010043b4b4;
  case 0xe8:
    goto code_r0x00010043b4e4;
  case 0xe9:
    goto code_r0x00010043b568;
  case 0xeb:
    goto code_r0x00010043b520;
  case 0xee:
code_r0x00010043b5dc:
    unaff_x27 = pppppppuStack_318;
    pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
    uStack_e8 = SUB81(unaff_x28,0);
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_318,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
    pppppppuStack_88 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_80 = (ulong *******)0x2;
    uStack_b8 = (ulong *******)&pppppppuStack_88;
    pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
    pppppppuStack_2d8 = pppppppuVar26;
    param_3 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
    unaff_x20 = &ppppppuStack_300;
    pppppppuVar26 = pppppppuStack_328;
    goto LAB_10043b1c0;
  case 0xef:
code_r0x00010043ac38:
    do {
      pppppppuVar40 = pppppppuVar26 + -8;
      pppppppuVar35 = (ulong *******)(ulong)*(byte *)pppppppuVar40;
      pppppppuVar38 = unaff_x25;
      pppppppuVar39 = pppppppuVar26;
      pppppppuVar6 = pppppppuVar26;
      pppppppuVar7 = unaff_x25;
      if (*(byte *)pppppppuVar40 == 0x16) break;
code_r0x00010043ac7c:
      pppppppuVar31 = uStack_b8;
      unaff_x27 = pppppppuStack_318;
      uVar29 = (uint)pppppppuVar35;
      uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,(char)pppppppuVar35);
      pppppppuVar35 = uStack_b8;
      ppppppuVar27 = pppppppuVar40[2];
      *(ulong *******)((long)unaff_x22 + 0x17) = pppppppuVar40[3];
      *(ulong *******)((long)unaff_x22 + 0xf) = ppppppuVar27;
      ppppppuVar27 = *(ulong *******)((long)pppppppuVar40 + 1);
      unaff_x22[1] = *(ulong *******)((long)pppppppuVar40 + 9);
      *unaff_x22 = ppppppuVar27;
      ppppppuStack_2e8 = pppppppuVar40[7];
      uStack_2f8 = SUB81(pppppppuVar40[5],0);
      uStack_2f7 = (undefined7)((ulong)pppppppuVar40[5] >> 8);
      ppppppuStack_300._0_1_ = (byte)pppppppuVar40[4];
      ppppppuStack_300._1_7_ = (undefined7)((ulong)pppppppuVar40[4] >> 8);
      uStack_2f0 = SUB81(pppppppuVar40[6],0);
      uStack_2ef = (undefined7)((ulong)pppppppuVar40[6] >> 8);
      if (uVar29 < 0xd) {
        if (uVar29 == 1) {
          uStack_b8._1_1_ = SUB81(pppppppuVar31,1);
          iVar34 = 1;
          if (uStack_b8._1_1_ != '\x01') {
            iVar34 = 2;
          }
          bVar25 = uStack_b8._1_1_ != '\0';
          iVar33 = 0;
          uStack_b8 = pppppppuVar35;
          if (bVar25) {
            iVar33 = iVar34;
          }
        }
        else {
          if (uVar29 != 4) {
            if (uVar29 == 0xc) {
              if (pppppppuStack_a0 == (ulong *******)0x6) {
                iVar33 = 1;
                if (*(int *)pppppppuStack_a8 != 0x61726170 ||
                    *(short *)((long)pppppppuStack_a8 + 4) != 0x736d) {
                  iVar33 = 2;
                }
              }
              else if (pppppppuStack_a0 == (ulong *******)0x2) {
                iVar33 = 2;
                if (*(short *)pppppppuStack_a8 == 0x6469) {
                  iVar33 = 0;
                }
              }
              else {
                iVar33 = 2;
              }
              goto joined_r0x00010043ae44;
            }
code_r0x00010043b6c4:
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            uStack_e8 = SUB81(unaff_x28,0);
            uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
            uStack_e0 = SUB81(pppppppuStack_318,0);
            uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
            pppppppuStack_2d8 = pppppppuVar26;
            param_3 = (ulong *******)
                      thunk_FUN_108855b04(&uStack_b8,&pppppppuStack_88,&UNK_10b2108c0);
            unaff_x20 = &ppppppuStack_300;
            pppppppuVar26 = pppppppuStack_328;
            goto LAB_10043b1c0;
          }
          iVar34 = 1;
          if (pppppppuStack_b0 != (ulong *******)0x1) {
            iVar34 = 2;
          }
          iVar33 = 0;
          uStack_b8 = pppppppuVar35;
          if (pppppppuStack_b0 != (ulong *******)0x0) {
            iVar33 = iVar34;
          }
        }
code_r0x00010043aed0:
        FUN_100e077ec(&uStack_b8);
      }
      else {
        if (uVar29 == 0xd) {
          if (pppppppuStack_a8 == (ulong *******)0x6) {
            iVar33 = 1;
            uStack_b8 = pppppppuVar35;
            if (*(int *)pppppppuStack_b0 != 0x61726170 ||
                *(short *)((long)pppppppuStack_b0 + 4) != 0x736d) {
              iVar33 = 2;
            }
          }
          else {
            if (pppppppuStack_a8 != (ulong *******)0x2) goto code_r0x00010043ae9c;
            iVar33 = 2;
            uStack_b8 = pppppppuVar35;
            if (*(short *)pppppppuStack_b0 == 0x6469) {
              iVar33 = 0;
            }
          }
          goto code_r0x00010043aed0;
        }
        if (uVar29 != 0xe) {
          if (uVar29 != 0xf) goto code_r0x00010043b6c4;
          if (pppppppuStack_a8 == (ulong *******)0x6) {
            pppppppuVar35 = (ulong *******)(ulong)*(byte *)pppppppuStack_b0;
            pppppppuVar31 = pppppppuStack_b0;
code_r0x00010043ae50:
            if ((((((int)pppppppuVar35 != 0x70) || (*(byte *)((long)pppppppuVar31 + 1) != 0x61)) ||
                 (*(byte *)((long)pppppppuVar31 + 2) != 0x72)) ||
                ((*(byte *)((long)pppppppuVar31 + 3) != 0x61 ||
                 (*(byte *)((long)pppppppuVar31 + 4) != 0x6d)))) ||
               (*(byte *)((long)pppppppuVar31 + 5) != 0x73)) goto code_r0x00010043ae9c;
code_r0x00010043ae94:
            iVar33 = 1;
          }
          else if (((pppppppuStack_a8 == (ulong *******)0x2) && (*(byte *)pppppppuStack_b0 == 0x69))
                  && (*(byte *)((long)pppppppuStack_b0 + 1) == 100)) {
            iVar33 = 0;
            uStack_b8 = pppppppuVar35;
          }
          else {
code_r0x00010043ae9c:
            iVar33 = 2;
          }
          goto code_r0x00010043aed0;
        }
        if (pppppppuStack_a0 == (ulong *******)0x6) {
          if (((((*(byte *)pppppppuStack_a8 != 0x70) ||
                (*(byte *)((long)pppppppuStack_a8 + 1) != 0x61)) ||
               (*(byte *)((long)pppppppuStack_a8 + 2) != 0x72)) ||
              ((*(byte *)((long)pppppppuStack_a8 + 3) != 0x61 ||
               (*(byte *)((long)pppppppuStack_a8 + 4) != 0x6d)))) ||
             (*(byte *)((long)pppppppuStack_a8 + 5) != 0x73)) goto code_r0x00010043ae0c;
          iVar33 = 1;
        }
        else if (((pppppppuStack_a0 == (ulong *******)0x2) && (*(byte *)pppppppuStack_a8 == 0x69))
                && (*(byte *)((long)pppppppuStack_a8 + 1) == 100)) {
          iVar33 = 0;
        }
        else {
code_r0x00010043ae0c:
          iVar33 = 2;
        }
joined_r0x00010043ae44:
        if (pppppppuStack_b0 != (ulong *******)0x0) {
          _free();
        }
      }
      uVar5 = uStack_df;
      uVar4 = uStack_e0;
      uVar3 = uStack_e7;
      uVar2 = uStack_e8;
      bVar30 = (byte)ppppppuStack_300;
      uStack_e8 = SUB81(unaff_x28,0);
      uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
      uStack_e0 = SUB81(pppppppuStack_318,0);
      uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
      if (iVar33 == 0) {
        if (unaff_x23 != (ulong *******)0x8000000000000001) goto code_r0x00010043b5dc;
        ppppppuStack_300._0_1_ = 0x16;
        if (bVar30 == 0x16) {
          pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_2d8 = pppppppuVar26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010043b6c0:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10043b6c4);
          (*pcVar8)();
        }
        ppppppuVar27 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar27;
        uVar32 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar32;
        uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar30);
        uStack_e8 = uVar2;
        uStack_e7 = uVar3;
        uStack_e0 = uVar4;
        uStack_df = uVar5;
        func_0x00010135ba2c(&pppppppuStack_88,&uStack_b8);
        pppppppuVar31 = (ulong *******)0x8000000000000001;
        unaff_x23 = pppppppuStack_88;
code_r0x00010043afa0:
        if (unaff_x23 == pppppppuVar31) {
          pppppppuVar31 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_2d8 = pppppppuVar26;
          goto code_r0x00010043b354;
        }
        pppppppuStack_310 = pppppppuStack_80;
        ppppppuStack_320 = ppppppuStack_78;
      }
      else if (iVar33 == 1) {
        if (unaff_x24 != (ulong *******)0x8000000000000000) {
          pppppppuVar31 = (ulong *******)((long)unaff_x25 + 1);
          goto code_r0x00010043b580;
        }
        ppppppuStack_300._0_1_ = 0x16;
        if (bVar30 == 0x16) {
          pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_2d8 = pppppppuVar26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010043b6c0;
        }
        ppppppuVar27 = *unaff_x21;
        puStack_308[1] = unaff_x21[1];
        *puStack_308 = ppppppuVar27;
        uVar32 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)puStack_308 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)puStack_308 + 0xf) = uVar32;
        pppppppuStack_88 = (ulong *******)CONCAT71(pppppppuStack_88._1_7_,bVar30);
        uStack_e8 = uVar2;
        uStack_e7 = uVar3;
        uStack_e0 = uVar4;
        uStack_df = uVar5;
        func_0x00010138086c(&uStack_b8,&pppppppuStack_88);
        if (uStack_b8 == (ulong *******)0x8000000000000000) {
          pppppppuVar31 = (ulong *******)((long)unaff_x25 + 1);
          goto code_r0x00010043b2f8;
        }
        pppppppuStack_318 = pppppppuStack_b0;
        pppppppuStack_d0 = pppppppuStack_a0;
        uStack_d8 = SUB81(pppppppuStack_a8,0);
        uStack_d7 = (undefined7)((ulong)pppppppuStack_a8 >> 8);
        pppppppuStack_c0 = pppppppuStack_90;
        pppppppuStack_c8 = pppppppuStack_98;
        unaff_x24 = uStack_b8;
        unaff_x28 = uStack_b8;
      }
      else {
        pppppppuVar31 = (ulong *******)(ulong)(byte)ppppppuStack_300;
        pppppppuVar35 = (ulong *******)0x16;
        uStack_e8 = uVar2;
        uStack_e7 = uVar3;
        uStack_e0 = uVar4;
        uStack_df = uVar5;
code_r0x00010043afc0:
        ppppppuStack_300._0_1_ = (byte)pppppppuVar35;
code_r0x00010043afc4:
        bVar30 = (byte)pppppppuVar31;
        in_ZR = (int)pppppppuVar31 == 0x16;
code_r0x00010043afc8:
        if ((bool)in_ZR) {
          pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
          uStack_e8 = SUB81(unaff_x28,0);
          uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_e0 = SUB81(pppppppuStack_318,0);
          uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
          pppppppuStack_2d8 = pppppppuVar26;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010043b6c0;
        }
        ppppppuVar27 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar27;
        uVar32 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar32;
        uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar30);
        param_3 = (ulong *******)&uStack_b8;
code_r0x00010043afe4:
        FUN_100e077ec(param_3);
      }
      pppppppuVar26 = pppppppuVar26 + 8;
      unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
      pppppppuVar38 = pppppppuStack_330;
      pppppppuVar39 = unaff_x19;
      pppppppuVar6 = unaff_x19;
      pppppppuVar7 = pppppppuStack_330;
    } while (pppppppuVar40 + 8 != unaff_x19);
code_r0x00010043b170:
    pppppppuStack_2c0 = pppppppuVar7;
    pppppppuStack_2d8 = pppppppuVar6;
    uStack_e8 = SUB81(unaff_x28,0);
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_318,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
    unaff_x22 = pppppppuStack_310;
    unaff_x27 = pppppppuStack_318;
code_r0x00010043b178:
    param_3 = pppppppuStack_328;
    if (unaff_x23 != (ulong *******)0x8000000000000001) {
code_r0x00010043b214:
      unaff_x21 = pppppppuStack_328;
      if (unaff_x24 == (ulong *******)0x8000000000000000) {
code_r0x00010043b224:
        pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
        pppppppuStack_80 = (ulong *******)0x6;
code_r0x00010043b234:
        pppppppuVar31 = (ulong *******)&pppppppuStack_88;
        pppppppuVar35 = (ulong *******)&UNK_100c7b000;
code_r0x00010043b23c:
        pppppppuStack_b0 = pppppppuVar35 + 0x74;
        uStack_b8 = pppppppuVar31;
FUN_10043b244:
        ppppppuVar27 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
        *unaff_x21 = (ulong ******)0x800000000000006e;
        unaff_x21[1] = ppppppuVar27;
        in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
code_r0x00010043b264:
        param_3 = unaff_x22;
        if (!(bool)in_ZR) {
code_r0x00010043b26c:
          _free(param_3);
        }
        unaff_x20 = &ppppppuStack_300;
        goto LAB_10043b32c;
      }
      unaff_x20 = (ulong *******)0x800000000000006e;
      pppppppuStack_328[4] = (ulong ******)pppppppuStack_d0;
      pppppppuStack_328[3] = (ulong ******)CONCAT71(uStack_d7,uStack_d8);
      pppppppuVar44 = pppppppuStack_c8;
      pppppppuVar45 = pppppppuStack_c0;
code_r0x00010043b28c:
      unaff_x21[6] = (ulong ******)pppppppuVar45;
      unaff_x21[5] = (ulong ******)pppppppuVar44;
      pppppppuVar31 = (ulong *******)((long)unaff_x20 + -0x24);
code_r0x00010043b294:
      *unaff_x21 = (ulong ******)pppppppuVar31;
      unaff_x21[1] = (ulong ******)unaff_x24;
      unaff_x21[2] = (ulong ******)unaff_x27;
code_r0x00010043b29c:
      unaff_x21[7] = (ulong ******)unaff_x23;
      unaff_x21[8] = (ulong ******)unaff_x22;
      unaff_x21[9] = ppppppuStack_320;
code_r0x00010043b2a8:
      param_4 = unaff_x21;
      param_3 = (ulong *******)&pppppppuStack_2b0;
      unaff_x21 = param_4;
code_r0x00010043b2b0:
      _memcpy(param_3,param_4,0x1c0);
      pppppppuVar31 = &ppppppuStack_300;
code_r0x00010043b2bc:
      FUN_100d34830(pppppppuVar31 + 4);
code_r0x00010043b2c4:
      in_ZR = unaff_x19 == pppppppuVar39;
code_r0x00010043b2c8:
      if ((bool)in_ZR) goto code_r0x00010043b4dc;
      pppppppuVar31 = (ulong *******)((long)unaff_x19 - (long)pppppppuVar39);
code_r0x00010043b2d0:
      pppppppuVar31 = (ulong *******)((ulong)pppppppuVar31 >> 6);
      uStack_b8 = pppppppuVar38;
code_r0x00010043b2d8:
      param_5 = &UNK_10b23a190;
code_r0x00010043b2e0:
      param_3 = (ulong *******)((long)pppppppuVar31 + (long)pppppppuVar38);
      param_4 = (ulong *******)&uStack_b8;
code_r0x00010043b2e8:
      ppppppuVar27 = (ulong ******)thunk_FUN_1087e422c(param_3,param_4,param_5);
      *unaff_x21 = (ulong ******)unaff_x20;
      unaff_x21[1] = ppppppuVar27;
code_r0x00010043b2f0:
      goto code_r0x00010043b570;
    }
code_r0x00010043b18c:
    unaff_x20 = &ppppppuStack_300;
    pppppppuStack_88 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_80 = (ulong *******)0x2;
    pppppppuVar31 = (ulong *******)&pppppppuStack_88;
code_r0x00010043b1a0:
    pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
    pppppppuVar26 = param_3;
    uStack_b8 = pppppppuVar31;
code_r0x00010043b1ac:
    unaff_x23 = (ulong *******)0x8000000000000001;
    param_3 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010043b1b4:
    param_3 = (ulong *******)thunk_FUN_108856088((byte *)((long)param_3 + 0x8f7),&uStack_b8);
    pppppppuStack_310 = unaff_x22;
LAB_10043b1c0:
    pppppppuVar31 = (ulong *******)0x6e;
    unaff_x22 = pppppppuStack_310;
code_r0x00010043b1c4:
    *pppppppuVar26 = (ulong ******)((ulong)pppppppuVar31 | 0x8000000000000000);
    pppppppuVar26[1] = (ulong ******)param_3;
code_r0x00010043b1cc:
    in_ZR = unaff_x24 == (ulong *******)0x8000000000000000;
code_r0x00010043b1d4:
    if (!(bool)in_ZR) {
joined_r0x00010043b5d4:
      if (unaff_x24 != (ulong *******)0x0) {
        _free(unaff_x27);
      }
LAB_10043b1e4:
      if (pppppppuStack_d0 != (ulong *******)0x0) {
        _free(pppppppuStack_c8);
      }
    }
LAB_10043b1f4:
    pppppppuVar31 = (ulong *******)0x8000000000000002;
code_r0x00010043b1fc:
    param_3 = unaff_x22;
    if ((long)pppppppuVar31 <= (long)unaff_x23) {
code_r0x00010043b204:
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x00010043b20c:
        _free(param_3);
      }
    }
LAB_10043b32c:
    param_3 = unaff_x20 + 4;
code_r0x00010043b330:
    FUN_100d34830(param_3);
    pppppppuVar31 = (ulong *******)(ulong)(byte)ppppppuStack_300;
code_r0x00010043b338:
    in_ZR = (int)pppppppuVar31 == 0x16;
code_r0x00010043b33c:
    if (!(bool)in_ZR) {
code_r0x00010043b340:
      param_3 = &ppppppuStack_300;
code_r0x00010043b344:
      FUN_100e077ec(param_3);
code_r0x00010043b348:
    }
    goto code_r0x00010043b4dc;
  case 0xf0:
    goto code_r0x00010043ac7c;
  case 0xf9:
    goto code_r0x00010043b454;
  case 0xfd:
    goto code_r0x00010043b3d0;
  case 0xfe:
    goto code_r0x00010043b400;
  }
  pppppppuStack_2b0 = (ulong *******)CONCAT71(pppppppuStack_2b0._1_7_,bVar30);
code_r0x00010043b4a8:
  param_5 = &UNK_10b21b000;
code_r0x00010043b4ac:
  param_5 = param_5 + 0xef0;
  pppppppuVar26 = (ulong *******)&pppppppuStack_2b0;
code_r0x00010043b4b4:
  pppppppuVar26 = (ulong *******)FUN_107c05dcc(pppppppuVar26,&pppppppuStack_88,param_5);
code_r0x00010043b4bc:
  *param_3 = (ulong ******)0x800000000000006e;
  param_3[1] = (ulong ******)pppppppuVar26;
code_r0x00010043b4dc:
code_r0x00010043b4e4:
  return;
}

