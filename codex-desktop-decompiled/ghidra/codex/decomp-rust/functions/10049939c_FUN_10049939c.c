
/* WARNING: Type propagation algorithm not settling */

void FUN_10049939c(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,ulong *param_4,
                  undefined *param_5)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 in_ZR;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  ulong *puVar22;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int *unaff_x23;
  ulong *unaff_x24;
  long lVar23;
  ulong *unaff_x25;
  ulong *puVar24;
  ulong *unaff_x26;
  ulong *puVar25;
  ulong *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar26;
  undefined8 unaff_x30;
  ulong uVar27;
  ulong uVar28;
  byte abStack_360 [88];
  ulong *puStack_308;
  ulong *puStack_300;
  ulong uStack_2f8;
  ulong *puStack_2f0;
  ulong *puStack_2e8;
  ulong uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  ulong uStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong uStack_290;
  ulong *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  int *piStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  int *piStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  ulong uStack_70;
  byte *pbVar11;
  
  uVar28 = param_2._8_8_;
  uVar27 = param_2._0_8_;
  uVar14 = param_1._8_8_;
  uVar13 = param_1._0_8_;
  puVar26 = &stack0xfffffffffffffff0;
  pbVar10 = abStack_360 + 0x50;
  pbVar5 = abStack_360 + 0x50;
  pbVar7 = abStack_360 + 0x50;
  bVar16 = (byte)*param_4;
  puVar17 = (ulong *)(ulong)bVar16;
  puVar22 = (ulong *)&UNK_108c99ee8;
  pbVar8 = abStack_360 + 0x50;
  pbVar9 = abStack_360 + 0x50;
  pbVar11 = abStack_360 + 0x50;
  pbVar6 = abStack_360 + 0x50;
  pbVar3 = abStack_360 + 0x50;
  pbVar4 = abStack_360 + 0x50;
  puVar12 = (ulong *)param_3;
  puVar18 = puVar17;
  puVar24 = unaff_x25;
  puVar25 = unaff_x26;
  switch(bVar16) {
  case 0:
    bVar16 = *(byte *)((long)param_4 + 1);
  case 0x88:
  case 0xcc:
  case 0xe2:
    uStack_290 = (ulong)CONCAT61(uStack_290._2_6_,bVar16) << 8;
code_r0x000100499c30:
    goto code_r0x000100499c84;
  case 1:
  case 0x7e:
    puStack_288 = (ulong *)(ulong)*(byte *)((long)param_4 + 1);
  case 0x7c:
code_r0x000100499c3c:
    bVar16 = 1;
code_r0x000100499c40:
    break;
  case 2:
    puVar17 = (ulong *)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x8f:
  case 199:
  case 0xdd:
    puStack_288 = puVar17;
    goto code_r0x000100499c3c;
  case 3:
    puVar17 = (ulong *)(ulong)*(uint *)((long)param_4 + 4);
  case 0x30:
  case 0xd3:
  case 0xe9:
    puStack_288 = puVar17;
    goto code_r0x000100499c3c;
  case 4:
  case 0x3c:
    puStack_288 = (ulong *)param_4[1];
    goto code_r0x000100499c3c;
  case 5:
  case 0x1a:
    puVar17 = (ulong *)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x35:
    puStack_288 = puVar17;
    goto code_r0x000100499c7c;
  case 6:
  case 0x3b:
    puStack_288 = (ulong *)(long)*(short *)((long)param_4 + 2);
    goto code_r0x000100499c7c;
  case 7:
  case 0x21:
    puVar17 = (ulong *)(long)*(int *)((long)param_4 + 4);
  case 0x38:
    puStack_288 = puVar17;
code_r0x000100499c7c:
    bVar16 = 2;
    break;
  case 8:
  case 0x1f:
  case 0x33:
    puStack_288 = (ulong *)param_4[1];
    goto code_r0x000100499c7c;
  case 9:
  case 0x37:
  case 0xc6:
  case 0xdc:
    uVar13 = (ulong)*(uint *)((long)param_4 + 4);
  case 0x24:
  case 0x6a:
  case 0xc2:
    puStack_288 = (ulong *)(double)(float)uVar13;
  case 0x2f:
  case 0x93:
code_r0x000100499c6c:
    bVar16 = 3;
    break;
  case 10:
  case 0x79:
  case 0x86:
    puStack_288 = (ulong *)param_4[1];
    goto code_r0x000100499c6c;
  case 0xb:
    param_4 = (ulong *)(ulong)*(uint *)((long)param_4 + 4);
    pbVar6 = &stack0xffffffffffffffa0;
  case 0x60:
  case 0xb8:
  case 0xfa:
    puVar26 = *(undefined1 **)(pbVar6 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar6 + 0x58);
    unaff_x20 = *(ulong **)(pbVar6 + 0x40);
    unaff_x19 = *(ulong **)(pbVar6 + 0x48);
    pbVar7 = pbVar6 + 0x60;
code_r0x000100499bbc:
    *(ulong **)(pbVar7 + -0x20) = unaff_x20;
    *(ulong **)(pbVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar7 + -0x10) = puVar26;
    *(undefined8 *)(pbVar7 + -8) = unaff_x30;
    *(undefined4 *)(pbVar7 + -0x44) = 0;
    uVar15 = (uint)param_4;
    if (uVar15 < 0x80) {
      pbVar7[-0x44] = (byte)param_4;
      uVar19 = 1;
    }
    else {
      bVar16 = (byte)param_4 & 0x3f | 0x80;
      if (uVar15 < 0x800) {
        pbVar7[-0x44] = (byte)(uVar15 >> 6) | 0xc0;
        pbVar7[-0x43] = bVar16;
        uVar19 = 2;
      }
      else {
        bVar1 = (byte)(uVar15 >> 6) & 0x3f | 0x80;
        if (uVar15 < 0x10000) {
          pbVar7[-0x44] = (byte)(uVar15 >> 0xc) | 0xe0;
          pbVar7[-0x43] = bVar1;
          pbVar7[-0x42] = bVar16;
          uVar19 = 3;
        }
        else {
          pbVar7[-0x44] = (byte)(uVar15 >> 0x12) | 0xf0;
          pbVar7[-0x43] = (byte)(uVar15 >> 0xc) & 0x3f | 0x80;
          pbVar7[-0x42] = bVar1;
          pbVar7[-0x41] = bVar16;
          uVar19 = 4;
        }
      }
    }
    *(byte **)(pbVar7 + -0x38) = pbVar7 + -0x44;
    *(undefined8 *)(pbVar7 + -0x30) = uVar19;
    pbVar7[-0x40] = 5;
    uVar13 = func_0x000108a4a50c(pbVar7 + -0x40,pbVar7 + -0x21,&UNK_10b21b710);
    *(ulong *)param_3 = 0x800000000000006e;
    *(ulong *)((long)param_3 + 8) = uVar13;
    return;
  case 0xc:
  case 0x3a:
  case 200:
  case 0xde:
    param_4 = param_4 + 1;
  case 0x94:
  case 0xd5:
  case 0xeb:
    pbVar8 = &stack0xffffffffffffffa0;
    puVar26 = unaff_x29;
code_r0x000100499bd8:
    unaff_x20 = *(ulong **)(pbVar8 + 0x40);
    unaff_x19 = *(ulong **)(pbVar8 + 0x48);
    unaff_x22 = *(ulong *)(pbVar8 + 0x30);
    unaff_x21 = *(ulong **)(pbVar8 + 0x38);
    pbVar9 = pbVar8;
code_r0x000100499be0:
    pbVar11 = pbVar9;
code_r0x000100499be8:
    pbVar10 = pbVar11 + 0x60;
code_r0x000100499bec:
    *(ulong *)(pbVar10 + -0x30) = unaff_x22;
    *(ulong **)(pbVar10 + -0x28) = unaff_x21;
    *(ulong **)(pbVar10 + -0x20) = unaff_x20;
    *(ulong **)(pbVar10 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar10 + -0x10) = puVar26;
    *(undefined8 *)(pbVar10 + -8) = unaff_x30;
    uVar13 = param_4[1];
    uVar14 = param_4[2];
    *(ulong *)(pbVar10 + -0x48) = uVar13;
    *(ulong *)(pbVar10 + -0x40) = uVar14;
    pbVar10[-0x50] = 5;
    uVar14 = func_0x000108a4a50c(pbVar10 + -0x50,pbVar10 + -0x31,&UNK_10b21b710);
    *(ulong *)param_3 = 0x800000000000006e;
    *(ulong *)((long)param_3 + 8) = uVar14;
    if (*param_4 != 0) {
      _free(uVar13);
    }
    return;
  case 0xd:
  case 0x22:
    puStack_288 = (ulong *)param_4[1];
    uStack_280 = param_4[2];
  case 0x2e:
    bVar16 = 5;
code_r0x000100499c58:
    break;
  case 0xe:
    param_4 = param_4 + 1;
  case 0x5d:
  case 0xb5:
  case 0xf7:
    pbVar3 = &stack0xffffffffffffffa0;
code_r0x000100499b7c:
    puVar26 = *(undefined1 **)(pbVar3 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar3 + 0x58);
    unaff_x20 = *(ulong **)(pbVar3 + 0x40);
    unaff_x19 = *(ulong **)(pbVar3 + 0x48);
    unaff_x22 = *(ulong *)(pbVar3 + 0x30);
    unaff_x21 = *(ulong **)(pbVar3 + 0x38);
    pbVar4 = pbVar3;
code_r0x000100499b8c:
    pbVar5 = pbVar4 + 0x60;
code_r0x000100499b94:
    *(ulong *)(pbVar5 + -0x30) = unaff_x22;
    *(ulong **)(pbVar5 + -0x28) = unaff_x21;
    *(ulong **)(pbVar5 + -0x20) = unaff_x20;
    *(ulong **)(pbVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar5 + -0x10) = puVar26;
    *(undefined8 *)(pbVar5 + -8) = unaff_x30;
    uVar13 = param_4[1];
    uVar14 = param_4[2];
    *(ulong *)(pbVar5 + -0x48) = uVar13;
    *(ulong *)(pbVar5 + -0x40) = uVar14;
    pbVar5[-0x50] = 6;
    uVar14 = func_0x000108a4a50c(pbVar5 + -0x50,pbVar5 + -0x31,&UNK_10b21b710);
    *(ulong *)param_3 = 0x800000000000006e;
    *(ulong *)((long)param_3 + 8) = uVar14;
    if (*param_4 != 0) {
      _free(uVar13);
    }
    return;
  case 0xf:
    puStack_288 = (ulong *)param_4[1];
    uStack_280 = param_4[2];
    bVar16 = 6;
  case 0xcb:
  case 0xe1:
    break;
  case 0x10:
    bVar16 = 8;
    break;
  default:
    unaff_x20 = (ulong *)param_4[1];
    puStack_288 = (ulong *)unaff_x20[1];
    uStack_290 = *unaff_x20;
    uStack_278 = unaff_x20[3];
    uStack_280 = unaff_x20[2];
    func_0x000107c048c8(param_3,&uStack_290);
  case 0x81:
code_r0x000100499830:
    param_3 = (char *)unaff_x20;
code_r0x000100499838:
code_r0x00010049983c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_3);
    return;
  case 0x12:
  case 0x8a:
    bVar16 = 7;
  case 0x1b:
  case 0x70:
    break;
  case 0x13:
  case 0x56:
    unaff_x20 = (ulong *)param_4[1];
    puStack_288 = (ulong *)unaff_x20[1];
    uStack_290 = *unaff_x20;
    uVar14 = unaff_x20[3];
    uVar13 = unaff_x20[2];
  case 0x3f:
    param_4 = &uStack_290;
    uStack_280 = uVar13;
    uStack_278 = uVar14;
code_r0x000100499828:
    func_0x000107c05358(param_3,param_4);
    goto code_r0x000100499830;
  case 0x14:
    unaff_x23 = (int *)param_4[1];
    unaff_x20 = (ulong *)param_4[2];
    unaff_x25 = (ulong *)param_4[3];
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    uStack_b0 = unaff_x20;
    puStack_a8 = unaff_x20;
  case 0x40:
    puStack_90 = (ulong *)0x0;
    piStack_a0 = unaff_x23;
    puStack_98 = unaff_x19;
code_r0x00010049986c:
    unaff_x21 = unaff_x20;
    if (unaff_x25 == (ulong *)0x0) {
code_r0x000100499888:
      unaff_x22 = thunk_FUN_1087e422c(0,&UNK_10b22f608,&UNK_10b20a590);
code_r0x0001004998a4:
      *(ulong *)param_3 = 0x800000000000006e;
      *(ulong *)((long)param_3 + 8) = unaff_x22;
code_r0x0001004998b0:
      lVar23 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar23 = lVar23 + -1, lVar23 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (int *)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100499874:
      unaff_x21 = unaff_x20 + 4;
      puVar17 = (ulong *)(ulong)(byte)*unaff_x20;
code_r0x00010049987c:
      puStack_a8 = unaff_x21;
      if ((int)puVar17 == 0x16) goto code_r0x000100499888;
      uStack_2d7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_2e0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_2d8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      uStack_2c8 = unaff_x20[3];
      uStack_2d0 = (undefined1)unaff_x20[2];
      uStack_2cf = (undefined7)(unaff_x20[2] >> 8);
      puStack_90 = (ulong *)0x1;
      uStack_2e0._0_1_ = (byte)puVar17;
      func_0x00010135ba2c(&uStack_88,&uStack_2e0);
      unaff_x24 = (ulong *)CONCAT71(uStack_88._1_7_,(byte)uStack_88);
      unaff_x22 = CONCAT71(uStack_7f,uStack_80);
      if (unaff_x24 == (ulong *)0x8000000000000001) goto code_r0x0001004998a4;
      if (unaff_x25 == (ulong *)0x1) {
code_r0x000100499948:
        puVar12 = (ulong *)thunk_FUN_1087e422c(1,&UNK_10b22f608,&UNK_10b20a590);
code_r0x000100499960:
        *(ulong *)param_3 = 0x800000000000006e;
        *(ulong **)((long)param_3 + 8) = puVar12;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x0001004998b0;
      }
      unaff_x25 = (ulong *)CONCAT71(uStack_77,uStack_78);
      unaff_x21 = unaff_x20 + 8;
      bVar16 = (byte)unaff_x20[4];
      puStack_a8 = unaff_x21;
      if (bVar16 == 0x16) goto code_r0x000100499948;
code_r0x000100499ccc:
      uVar14 = *(ulong *)((long)unaff_x20 + 0x29);
      uVar13 = *(ulong *)((long)unaff_x20 + 0x21);
code_r0x000100499cd0:
      uStack_7f = (undefined7)uVar14;
      uStack_88._1_7_ = (undefined7)uVar13;
      uStack_80 = (undefined1)(uVar13 >> 0x38);
code_r0x000100499cd4:
      uStack_70 = unaff_x20[7];
      uStack_78 = (undefined1)unaff_x20[6];
      uStack_77 = (undefined7)(unaff_x20[6] >> 8);
code_r0x000100499cdc:
      puVar22 = (ulong *)0x2;
code_r0x000100499ce0:
      uStack_88._0_1_ = bVar16;
      puStack_90 = puVar22;
code_r0x000100499ce8:
      puVar12 = &uStack_2e0;
      param_4 = &uStack_88;
code_r0x000100499cf0:
      func_0x0001013909b8(puVar12,param_4);
      puVar17 = (ulong *)CONCAT71(uStack_2e0._1_7_,(byte)uStack_2e0);
      puVar12 = (ulong *)CONCAT71(uStack_2d7,uStack_2d8);
code_r0x000100499cf8:
      in_ZR = puVar17 == (ulong *)0x8000000000000001;
code_r0x000100499d00:
      if ((bool)in_ZR) goto code_r0x000100499960;
code_r0x000100499d04:
      unaff_x19 = (ulong *)0x800000000000006e;
      uVar13 = CONCAT71(uStack_2cf,uStack_2d0);
      uVar14 = uStack_2c8;
code_r0x000100499d10:
      *(ulong *)((long)param_3 + 0x38) = uVar14;
      *(ulong *)((long)param_3 + 0x30) = uVar13;
      puVar22 = puStack_2c0;
code_r0x000100499d18:
      *(ulong **)((long)param_3 + 0x40) = puVar22;
code_r0x000100499d1c:
      *(byte **)param_3 = (byte *)((long)unaff_x19 + -0x2e);
      *(ulong **)((long)param_3 + 8) = unaff_x24;
      *(ulong *)((long)param_3 + 0x10) = unaff_x22;
      *(ulong **)((long)param_3 + 0x18) = unaff_x25;
code_r0x000100499d28:
      *(ulong **)((long)param_3 + 0x20) = puVar17;
      *(ulong **)((long)param_3 + 0x28) = puVar12;
code_r0x000100499d2c:
      puVar12 = &uStack_290;
code_r0x000100499d30:
      param_4 = (ulong *)param_3;
code_r0x000100499d34:
      _memcpy(puVar12,param_4,0x1c0);
      puVar12 = &uStack_b0;
code_r0x000100499d40:
      puVar12 = (ulong *)FUN_100fbc738(puVar12);
      if (puVar12 != (ulong *)0x0) {
code_r0x000100499d48:
        *(ulong **)param_3 = unaff_x19;
        *(ulong **)((long)param_3 + 8) = puVar12;
code_r0x000100499d4c:
        FUN_100e44f40(&uStack_290);
      }
    }
    goto LAB_100499ca4;
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
    uStack_2b0 = param_4[1];
    puStack_2c0 = (ulong *)param_4[2];
    uVar13 = param_4[3];
    unaff_x19 = puStack_2c0 + uVar13 * 8;
    uStack_2e0._0_1_ = 0x16;
    puStack_2a0 = (ulong *)0x0;
    puStack_2a8 = unaff_x19;
    if (uVar13 == 0) {
      unaff_x24 = (ulong *)0x8000000000000001;
      puStack_2b8 = puStack_2c0;
    }
    else {
      unaff_x25 = (ulong *)0x0;
      unaff_x21 = (ulong *)((ulong)&uStack_b0 | 1);
      unaff_x20 = (ulong *)((ulong)&uStack_2e0 | 1);
      unaff_x28 = (ulong *)((ulong)&uStack_88 | 1);
      puStack_308 = (ulong *)((uVar13 * 0x40 - 0x40 >> 6) + 1);
      unaff_x23 = (int *)0x8000000000000001;
      unaff_x24 = (ulong *)0x8000000000000001;
      unaff_x26 = puStack_2c0;
      puStack_300 = (ulong *)param_3;
      puStack_2b8 = puStack_2c0;
      do {
        param_3 = (char *)unaff_x26;
        unaff_x26 = (ulong *)((long)param_3 + 0x40);
        bVar16 = (byte)*(ulong *)param_3;
        puVar22 = (ulong *)(ulong)bVar16;
        puVar24 = unaff_x25;
        puVar25 = unaff_x26;
        if (bVar16 == 0x16) break;
        uStack_b0 = (ulong *)CONCAT71(uStack_b0._1_7_,bVar16);
        uVar13 = *(ulong *)((long)param_3 + 0x10);
        *(ulong *)((long)unaff_x21 + 0x17) = *(ulong *)((long)param_3 + 0x18);
        *(ulong *)((long)unaff_x21 + 0xf) = uVar13;
        uVar13 = *(ulong *)((long)param_3 + 1);
        unaff_x21[1] = *(ulong *)((long)param_3 + 9);
        *unaff_x21 = uVar13;
        uVar14 = *(ulong *)((long)param_3 + 0x28);
        uVar13 = *(ulong *)((long)param_3 + 0x20);
        uVar28 = *(ulong *)((long)param_3 + 0x38);
        uVar27 = *(ulong *)((long)param_3 + 0x30);
code_r0x0001004994bc:
        uStack_2d8 = (undefined1)uVar14;
        uStack_2d7 = (undefined7)(uVar14 >> 8);
        uStack_2e0._0_1_ = (byte)uVar13;
        uStack_2e0._1_7_ = (undefined7)(uVar13 >> 8);
        uStack_2d0 = (undefined1)uVar27;
        uStack_2cf = (undefined7)(uVar27 >> 8);
        uVar15 = (uint)puVar22;
        uStack_2c8 = uVar28;
        if (uVar15 < 0xd) {
          if (uVar15 == 1) {
            iVar21 = 1;
            if (uStack_b0._1_1_ != '\x01') {
              iVar21 = 2;
            }
            iVar20 = 0;
            if (uStack_b0._1_1_ != '\0') {
              iVar20 = iVar21;
            }
          }
          else {
            if (uVar15 != 4) {
              if (uVar15 == 0xc) {
                if (puStack_98 == (ulong *)0x6) {
                  iVar20 = 1;
                  if (*piStack_a0 != 0x61726170 || (short)piStack_a0[1] != 0x736d) {
                    iVar20 = 2;
                  }
                }
                else if (puStack_98 == (ulong *)0x2) {
                  iVar20 = 2;
                  if ((short)*piStack_a0 == 0x6469) {
                    iVar20 = 0;
                  }
                }
                else {
                  iVar20 = 2;
                }
                goto joined_r0x00010049966c;
              }
code_r0x000100499e80:
              puStack_2a0 = (ulong *)((long)unaff_x25 + 1);
              puStack_2b8 = unaff_x26;
              param_3 = (char *)thunk_FUN_108855b04(&uStack_b0,&uStack_88,&UNK_10b2113c0);
              unaff_x20 = &uStack_2e0;
              puVar12 = puStack_300;
              goto code_r0x0001004999d8;
            }
            iVar21 = 1;
            if (puStack_a8 != (ulong *)0x1) {
              iVar21 = 2;
            }
            iVar20 = 0;
            if (puStack_a8 != (ulong *)0x0) {
              iVar20 = iVar21;
            }
          }
code_r0x0001004996f8:
          FUN_100e077ec(&uStack_b0);
        }
        else {
          if (uVar15 == 0xd) {
            if (piStack_a0 == (int *)0x6) {
              iVar20 = 1;
              if ((int)*puStack_a8 != 0x61726170 || *(short *)((long)puStack_a8 + 4) != 0x736d) {
                iVar20 = 2;
              }
            }
            else {
              if (piStack_a0 != (int *)0x2) goto code_r0x0001004996c4;
              iVar20 = 2;
              if ((short)*puStack_a8 == 0x6469) {
                iVar20 = 0;
              }
            }
            goto code_r0x0001004996f8;
          }
          if (uVar15 != 0xe) {
            if (uVar15 != 0xf) goto code_r0x000100499e80;
            if (piStack_a0 == (int *)0x6) {
              if ((((((byte)*puStack_a8 != 0x70) || (*(byte *)((long)puStack_a8 + 1) != 0x61)) ||
                   (*(byte *)((long)puStack_a8 + 2) != 0x72)) ||
                  ((*(byte *)((long)puStack_a8 + 3) != 0x61 ||
                   (*(byte *)((long)puStack_a8 + 4) != 0x6d)))) ||
                 (*(byte *)((long)puStack_a8 + 5) != 0x73)) goto code_r0x0001004996c4;
              iVar20 = 1;
            }
            else if (((piStack_a0 == (int *)0x2) && ((byte)*puStack_a8 == 0x69)) &&
                    (*(byte *)((long)puStack_a8 + 1) == 100)) {
              iVar20 = 0;
            }
            else {
code_r0x0001004996c4:
              iVar20 = 2;
            }
            goto code_r0x0001004996f8;
          }
          if (puStack_98 == (ulong *)0x6) {
            if ((((((char)*piStack_a0 != 'p') || (*(char *)((long)piStack_a0 + 1) != 'a')) ||
                 (*(char *)((long)piStack_a0 + 2) != 'r')) ||
                ((*(char *)((long)piStack_a0 + 3) != 'a' || ((char)piStack_a0[1] != 'm')))) ||
               (*(char *)((long)piStack_a0 + 5) != 's')) goto code_r0x000100499634;
            iVar20 = 1;
          }
          else if (((puStack_98 == (ulong *)0x2) && ((char)*piStack_a0 == 'i')) &&
                  (*(char *)((long)piStack_a0 + 1) == 'd')) {
            iVar20 = 0;
          }
          else {
code_r0x000100499634:
            iVar20 = 2;
          }
joined_r0x00010049966c:
          if (puStack_a8 != (ulong *)0x0) {
            _free();
          }
        }
        bVar16 = (byte)uStack_2e0;
        if (iVar20 == 0) {
          if (unaff_x23 != (int *)0x8000000000000001) goto code_r0x000100499db8;
          uStack_2e0._0_1_ = 0x16;
          if (bVar16 == 0x16) {
            puVar17 = (ulong *)((long)unaff_x25 + 1);
            puStack_2b8 = unaff_x26;
            goto code_r0x000100499e30;
          }
          uVar13 = *unaff_x20;
          unaff_x21[1] = unaff_x20[1];
          *unaff_x21 = uVar13;
          uVar19 = *(undefined8 *)((long)unaff_x20 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar19;
          uStack_b0 = (ulong *)CONCAT71(uStack_b0._1_7_,bVar16);
          func_0x00010135ba2c(&uStack_88,&uStack_b0);
          unaff_x23 = (int *)CONCAT71(uStack_88._1_7_,(byte)uStack_88);
          if (unaff_x23 == (int *)0x8000000000000001) {
            puVar17 = (ulong *)((long)unaff_x25 + 1);
            goto code_r0x000100499b4c;
          }
code_r0x0001004997cc:
          puStack_2e8 = (ulong *)CONCAT71(uStack_7f,uStack_80);
          uStack_2f8 = CONCAT71(uStack_77,uStack_78);
        }
        else if (iVar20 == 1) {
          if (unaff_x24 != (ulong *)0x8000000000000001) {
            puVar17 = (ulong *)((long)unaff_x25 + 1);
            goto code_r0x000100499d5c;
          }
          uStack_2e0._0_1_ = 0x16;
          if (bVar16 == 0x16) {
            puStack_2a0 = (ulong *)((long)unaff_x25 + 1);
            puStack_2b8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100499e7c;
          }
          uVar13 = *unaff_x20;
          unaff_x28[1] = unaff_x20[1];
          *unaff_x28 = uVar13;
          uVar19 = *(undefined8 *)((long)unaff_x20 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar19;
          uStack_88._0_1_ = bVar16;
          func_0x0001013909b8(&uStack_b0,&uStack_88);
          if (uStack_b0 == (ulong *)0x8000000000000001) {
            puVar17 = (ulong *)((long)unaff_x25 + 1);
            puStack_2b8 = unaff_x26;
            goto code_r0x000100499aec;
          }
          puStack_2f0 = puStack_a8;
          puVar17 = &uStack_b0;
          puStack_c8 = puStack_98;
          piStack_d0 = piStack_a0;
          unaff_x24 = uStack_b0;
code_r0x000100499478:
          uStack_c0 = puVar17[4];
        }
        else {
          puVar17 = (ulong *)(ulong)(byte)uStack_2e0;
          puVar22 = (ulong *)0x16;
code_r0x0001004997e4:
          bVar16 = (byte)puVar17;
          uStack_2e0._0_1_ = (byte)puVar22;
          if ((int)puVar17 == 0x16) {
            puStack_2a0 = (ulong *)((long)unaff_x25 + 1);
            puStack_2b8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100499e7c;
          }
          uVar13 = *unaff_x20;
          unaff_x21[1] = unaff_x20[1];
          *unaff_x21 = uVar13;
code_r0x0001004997f8:
          uVar19 = *(undefined8 *)((long)unaff_x20 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar19;
          uStack_b0 = (ulong *)CONCAT71(uStack_b0._1_7_,bVar16);
          FUN_100e077ec(&uStack_b0);
        }
        unaff_x25 = (ulong *)((long)unaff_x25 + 1);
        puVar24 = puStack_308;
        puVar25 = unaff_x19;
      } while ((ulong *)((long)param_3 + 0x40) != unaff_x19);
      puVar12 = puStack_300;
      puStack_2b8 = puVar25;
      puStack_2a0 = puVar24;
      if (unaff_x23 != (int *)0x8000000000000001) {
        if (unaff_x24 != (ulong *)0x8000000000000001) {
          unaff_x20 = (ulong *)0x800000000000006e;
          param_3 = (char *)puStack_300;
          goto code_r0x000100499a70;
        }
        uStack_88._0_1_ = 6;
        uStack_88._1_7_ = 0x108cb96;
        uStack_80 = 6;
        uStack_7f = 0;
        uStack_b0 = &uStack_88;
        puStack_a8 = (ulong *)&DAT_100c7b3a0;
        param_3 = s_missing_field_____108ac28f7;
        goto code_r0x000100499a40;
      }
    }
    unaff_x20 = &uStack_2e0;
    uStack_88._0_1_ = 0xb0;
    uStack_88._1_7_ = 0x108ca26;
    uStack_80 = 2;
    uStack_7f = 0;
    uStack_b0 = &uStack_88;
    puStack_a8 = (ulong *)&DAT_100c7b3a0;
    unaff_x23 = (int *)0x8000000000000001;
    param_3 = (char *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
    goto code_r0x0001004999d8;
  case 0x16:
    goto code_r0x000100499ca8;
  case 0x17:
    goto code_r0x000100499cb8;
  case 0x18:
    break;
  case 0x19:
    goto code_r0x000100499c98;
  case 0x1c:
  case 0x71:
    goto code_r0x000100499ce0;
  case 0x1d:
    goto code_r0x000100499ca0;
  case 0x1e:
    goto code_r0x000100499cf8;
  case 0x20:
  case 0x75:
    goto code_r0x000100499ce8;
  case 0x23:
  case 0x7d:
    goto code_r0x000100499cd0;
  case 0x25:
    goto code_r0x000100499c88;
  case 0x26:
    goto code_r0x000100499bec;
  case 0x28:
    goto code_r0x000100499d48;
  case 0x29:
  case 0x6c:
  case 0xc4:
    goto code_r0x000100499828;
  case 0x2a:
    goto code_r0x00010049986c;
  case 0x2c:
  case 0x87:
    goto code_r0x000100499c7c;
  case 0x2d:
  case 0x72:
  case 0x84:
    goto code_r0x000100499c8c;
  case 0x31:
  case 0x85:
    goto code_r0x000100499c9c;
  case 0x32:
  case 0x91:
    goto code_r0x000100499cb4;
  case 0x34:
  case 0x8e:
    goto code_r0x000100499ccc;
  case 0x36:
  case 0x77:
    goto code_r0x000100499cbc;
  case 0x39:
    goto LAB_100499ca4;
  case 0x3e:
    goto code_r0x000100499d1c;
  case 0x42:
    goto code_r0x000100499afc;
  case 0x43:
    goto LAB_100499b0c;
  case 0x44:
    goto code_r0x000100499ad4;
  case 0x45:
code_r0x000100499aec:
    puStack_2a0 = puVar17;
  case 0x5c:
  case 0xb4:
  case 0xf6:
    puVar17 = puStack_a8;
code_r0x000100499af4:
    puVar22 = (ulong *)0x6e;
code_r0x000100499af8:
    puVar22 = (ulong *)((ulong)puVar22 | 0x8000000000000000);
code_r0x000100499afc:
    *puStack_300 = (ulong)puVar22;
    puStack_300[1] = (ulong)puVar17;
    unaff_x20 = &uStack_2e0;
    unaff_x19 = puStack_2e8;
LAB_100499b0c:
    if (-0x7fffffffffffffff < (long)unaff_x23) {
code_r0x000100499b1c:
      if (unaff_x23 == (int *)0x0) goto LAB_100499b28;
code_r0x000100499b20:
      param_3 = (char *)unaff_x19;
      goto LAB_100499b24;
    }
    goto LAB_100499b28;
  case 0x46:
  case 0x68:
  case 0xc0:
    goto code_r0x000100499a98;
  case 0x47:
    goto code_r0x000100499b1c;
  case 0x48:
  case 0x67:
  case 0xbf:
  case 0xd6:
  case 0xec:
    goto code_r0x000100499b34;
  case 0x49:
    goto code_r0x000100499af4;
  case 0x4a:
  case 0x5f:
  case 0xb7:
  case 0xf9:
code_r0x000100499b4c:
    puStack_2b8 = unaff_x26;
    puStack_2a0 = puVar17;
  case 0x58:
  case 0xb0:
  case 0xf2:
    param_3 = (char *)CONCAT71(uStack_7f,uStack_80);
    unaff_x23 = (int *)0x8000000000000001;
    unaff_x20 = &uStack_2e0;
    puVar12 = puStack_300;
code_r0x000100499b64:
code_r0x0001004999d8:
    *puVar12 = 0x800000000000006e;
    puVar12[1] = (ulong)param_3;
    unaff_x19 = puStack_2e8;
    if ((-0x7fffffffffffffff < (long)unaff_x24) && (unaff_x24 != (ulong *)0x0)) goto LAB_100499a04;
    goto LAB_100499b0c;
  case 0x4b:
  case 99:
  case 0xbb:
  case 0xfd:
    goto code_r0x000100499ac8;
  case 0x4c:
  case 0xd4:
  case 0xea:
    goto code_r0x000100499b3c;
  case 0x4d:
code_r0x000100499a70:
    *(ulong **)((long)param_3 + 0x38) = puStack_c8;
    *(int **)((long)param_3 + 0x30) = piStack_d0;
    *(ulong *)((long)param_3 + 0x40) = uStack_c0;
    *(byte **)param_3 = (byte *)((long)unaff_x20 + -0x2e);
    *(int **)((long)param_3 + 8) = unaff_x23;
    *(ulong **)((long)param_3 + 0x10) = puStack_2e8;
    *(ulong *)((long)param_3 + 0x18) = uStack_2f8;
    *(ulong **)((long)param_3 + 0x20) = unaff_x24;
    *(ulong **)((long)param_3 + 0x28) = puStack_2f0;
code_r0x000100499a98:
    param_4 = (ulong *)param_3;
    param_3 = (char *)&uStack_290;
    puVar12 = param_4;
code_r0x000100499aa0:
    _memcpy(param_3,param_4,0x1c0);
    FUN_100d34830(&puStack_2c0);
    if (unaff_x19 != puVar25) {
      puVar17 = (ulong *)((ulong)((long)unaff_x19 - (long)puVar25) >> 6);
      uStack_b0 = puVar24;
code_r0x000100499ac8:
      param_5 = &UNK_10b23a190;
      param_3 = (char *)((long)puVar17 + (long)puVar24);
code_r0x000100499ad4:
      param_3 = (char *)thunk_FUN_1087e422c(param_3,&uStack_b0,param_5);
code_r0x000100499adc:
      *puVar12 = (ulong)unaff_x20;
      puVar12[1] = (ulong)param_3;
      goto code_r0x000100499d4c;
    }
    goto LAB_100499ca4;
  case 0x4e:
  case 0x66:
  case 0xbe:
    goto code_r0x000100499aa0;
  case 0x4f:
    goto LAB_100499b24;
  case 0x50:
    goto code_r0x000100499a48;
  case 0x51:
    goto code_r0x000100499adc;
  case 0x52:
code_r0x000100499a40:
    param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_b0);
code_r0x000100499a48:
    *puVar12 = 0x800000000000006e;
    puVar12[1] = (ulong)param_3;
    unaff_x20 = &uStack_2e0;
    param_3 = (char *)puStack_2e8;
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
LAB_100499b24:
      _free(param_3);
    }
LAB_100499b28:
    param_3 = (char *)(unaff_x20 + 4);
code_r0x000100499b2c:
    FUN_100d34830(param_3);
    puVar17 = (ulong *)(ulong)(byte)uStack_2e0;
code_r0x000100499b34:
    if ((int)puVar17 != 0x16) {
code_r0x000100499b3c:
      FUN_100e077ec(&uStack_2e0);
code_r0x000100499b44:
    }
    goto LAB_100499ca4;
  case 0x54:
  case 0x65:
  case 0xbd:
  case 0xff:
    goto code_r0x000100499b7c;
  case 0x55:
    goto code_r0x0001004997cc;
  case 0x59:
  case 0xb1:
  case 0xd1:
  case 0xe7:
  case 0xf3:
    goto code_r0x000100499b64;
  case 0x5a:
  case 0xb2:
  case 0xf4:
    goto code_r0x000100499b2c;
  case 0x5b:
  case 0xb3:
  case 0xf5:
    goto code_r0x000100499b44;
  case 0x5e:
  case 0xb6:
  case 0xca:
  case 0xe0:
  case 0xf8:
    goto code_r0x000100499b8c;
  case 0x61:
  case 0xb9:
  case 0xfb:
    goto code_r0x000100499b20;
  case 0x62:
  case 0xba:
  case 0xd2:
  case 0xe8:
  case 0xfc:
    goto code_r0x000100499b94;
  case 100:
  case 0xbc:
  case 0xfe:
    goto code_r0x000100499af8;
  case 0x6b:
  case 0xc3:
    goto code_r0x0001004997e4;
  case 0x6e:
    goto code_r0x000100499cf0;
  case 0x6f:
    goto code_r0x000100499d00;
  case 0x73:
    goto code_r0x000100499d10;
  case 0x74:
    goto code_r0x000100499d28;
  case 0x76:
    goto code_r0x000100499d40;
  case 0x78:
    goto code_r0x000100499d30;
  case 0x7a:
    goto code_r0x000100499c94;
  case 0x7b:
    goto code_r0x000100499d18;
  case 0x80:
  case 0x9a:
    goto code_r0x000100499d90;
  case 0x82:
    goto code_r0x000100499874;
  case 0x89:
    goto code_r0x000100499cac;
  case 0x8b:
    goto code_r0x000100499c84;
  case 0x8c:
  case 0xa8:
    goto code_r0x000100499cdc;
  case 0x8d:
    goto code_r0x000100499c58;
  case 0x90:
  case 0xd0:
  case 0xe6:
    goto code_r0x000100499c30;
  case 0x92:
    goto code_r0x000100499bd8;
  case 0x96:
  case 0x9e:
    goto code_r0x000100499d2c;
  case 0x97:
    goto code_r0x000100499838;
  case 0x98:
    goto code_r0x00010049987c;
  case 0x9b:
    goto code_r0x000100499da0;
  case 0x9c:
    goto code_r0x000100499d68;
  case 0x9d:
    goto code_r0x000100499d80;
  case 0x9f:
    goto code_r0x000100499db0;
  case 0xa0:
    goto code_r0x000100499dc8;
  case 0xa1:
    goto code_r0x000100499d88;
  case 0xa2:
    goto code_r0x000100499de0;
  case 0xa3:
code_r0x000100499d5c:
    puVar18 = (ulong *)&UNK_108cb9000;
    puStack_2b8 = unaff_x26;
    puStack_2a0 = puVar17;
code_r0x000100499d68:
    puVar17 = (ulong *)((long)puVar18 + 0x606);
    puVar22 = (ulong *)0x6;
code_r0x000100499d70:
    uStack_88._0_1_ = (byte)puVar17;
    uStack_88._1_7_ = (undefined7)((ulong)puVar17 >> 8);
    uStack_80 = SUB81(puVar22,0);
    uStack_7f = (undefined7)((ulong)puVar22 >> 8);
    puVar17 = &uStack_88;
    puVar22 = (ulong *)&DAT_100c7b3a0;
code_r0x000100499d80:
    param_3 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
    uStack_b0 = puVar17;
    puStack_a8 = puVar22;
code_r0x000100499d88:
    param_3 = (char *)((long)param_3 + 0x973);
    param_4 = &uStack_b0;
code_r0x000100499d90:
    param_3 = (char *)thunk_FUN_108856088(param_3,param_4);
    unaff_x20 = &uStack_2e0;
    puVar17 = (ulong *)0x6e;
    puVar22 = puStack_300;
code_r0x000100499da0:
    *puVar22 = (ulong)puVar17 | 0x8000000000000000;
    puVar22[1] = (ulong)param_3;
    in_ZR = ((ulong)unaff_x24 & 0x7fffffffffffffff) == 0;
    unaff_x19 = puStack_2e8;
code_r0x000100499db0:
    if (!(bool)in_ZR) {
LAB_100499a04:
      _free(puStack_2f0);
    }
    goto LAB_100499b0c;
  case 0xa4:
    goto code_r0x000100499dd0;
  case 0xa5:
    goto code_r0x000100499d04;
  case 0xa6:
    goto code_r0x000100499d34;
  case 0xa7:
code_r0x000100499db8:
    puStack_2a0 = (ulong *)((long)unaff_x25 + 1);
    puVar17 = (ulong *)&UNK_108ca2000;
    puStack_2b8 = unaff_x26;
code_r0x000100499dc8:
    puVar17 = puVar17 + 0xd6;
    puVar22 = (ulong *)0x2;
code_r0x000100499dd0:
    uStack_88._0_1_ = (byte)puVar17;
    uStack_88._1_7_ = (undefined7)((ulong)puVar17 >> 8);
    uStack_80 = SUB81(puVar22,0);
    uStack_7f = (undefined7)((ulong)puVar22 >> 8);
    puVar17 = &uStack_88;
    puVar22 = (ulong *)&DAT_100c7b3a0;
code_r0x000100499de0:
    uStack_b0 = puVar17;
    puStack_a8 = puVar22;
    param_3 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
    unaff_x20 = &uStack_2e0;
    puVar12 = puStack_300;
    goto code_r0x0001004999d8;
  case 0xa9:
    goto code_r0x000100499d70;
  case 0xaa:
    goto code_r0x000100499cd4;
  case 0xac:
code_r0x000100499e30:
    puStack_2a0 = puVar17;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100499e7c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100499e80);
    (*pcVar2)();
  case 0xad:
    goto code_r0x000100499478;
  case 0xae:
    goto code_r0x0001004994bc;
  case 0xc9:
  case 0xdf:
    goto code_r0x000100499be0;
  case 0xcd:
  case 0xe3:
    goto code_r0x000100499be8;
  case 0xce:
  case 0xe4:
    goto code_r0x000100499c40;
  case 0xcf:
  case 0xe5:
    goto code_r0x000100499bbc;
  case 0xd8:
  case 0xee:
    goto code_r0x000100499c90;
  case 0xd9:
  case 0xef:
    goto code_r0x0001004997f8;
  case 0xda:
  case 0xf0:
    goto code_r0x00010049983c;
  }
  uStack_290 = CONCAT71(uStack_290._1_7_,bVar16);
code_r0x000100499c84:
  param_5 = &UNK_10b21b000;
code_r0x000100499c88:
  param_5 = param_5 + 0x710;
code_r0x000100499c8c:
  puVar12 = &uStack_290;
code_r0x000100499c90:
  param_4 = &uStack_88;
code_r0x000100499c94:
  puVar12 = (ulong *)FUN_107c05dcc(puVar12,param_4,param_5);
code_r0x000100499c98:
  puVar17 = (ulong *)0x6e;
code_r0x000100499c9c:
  puVar17 = (ulong *)((ulong)puVar17 | 0x8000000000000000);
code_r0x000100499ca0:
  *(ulong **)param_3 = puVar17;
  *(ulong **)((long)param_3 + 8) = puVar12;
LAB_100499ca4:
code_r0x000100499ca8:
code_r0x000100499cac:
code_r0x000100499cb4:
code_r0x000100499cb8:
code_r0x000100499cbc:
  return;
}

