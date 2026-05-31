
/* WARNING: Type propagation algorithm not settling */

void FUN_100455fcc(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,undefined **param_4
                  ,undefined *param_5)

{
  ulong *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined1 in_ZR;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint uVar27;
  byte bVar28;
  undefined **ppuVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  undefined **ppuVar35;
  ulong uVar36;
  undefined **ppuVar37;
  undefined *unaff_x19;
  ulong *puVar38;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar39;
  undefined **unaff_x27;
  undefined **ppuVar40;
  undefined1 *unaff_x29;
  undefined1 *puVar41;
  undefined8 unaff_x30;
  undefined **ppuVar42;
  undefined **ppuVar43;
  byte abStack_270 [80];
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined ***pppuVar12;
  
  puVar26 = param_2._8_8_;
  puVar25 = param_2._0_8_;
  ppuVar43 = param_1._8_8_;
  ppuVar42 = param_1._0_8_;
  puVar41 = &stack0xfffffffffffffff0;
  pppuVar22 = &ppuStack_220;
  pppuVar16 = &ppuStack_220;
  pppuVar11 = &ppuStack_220;
  bVar28 = *(byte *)param_4;
  ppuVar29 = (undefined **)(ulong)bVar28;
  ppuVar35 = (undefined **)&UNK_108c99128;
  pppuVar17 = &ppuStack_220;
  pppuVar18 = &ppuStack_220;
  pppuVar19 = &ppuStack_220;
  pppuVar20 = &ppuStack_220;
  pppuVar21 = &ppuStack_220;
  pppuVar13 = &ppuStack_220;
  pppuVar14 = &ppuStack_220;
  pppuVar15 = &ppuStack_220;
  pppuVar6 = &ppuStack_220;
  pppuVar7 = &ppuStack_220;
  pppuVar8 = &ppuStack_220;
  pppuVar9 = &ppuStack_220;
  pppuVar10 = &ppuStack_220;
  pppuVar12 = &ppuStack_220;
  ppuVar24 = (undefined **)param_3;
  ppuVar37 = (undefined **)
             (&UNK_10045600c + (ulong)*(ushort *)(&UNK_108c99128 + (long)ppuVar29 * 2) * 4);
  ppuVar4 = unaff_x23;
  ppuVar39 = unaff_x26;
  ppuVar40 = unaff_x27;
  switch(bVar28) {
  case 0:
  case 0x39:
  case 0x4c:
    bVar28 = *(byte *)((long)param_4 + 1);
  case 0x28:
    puStack_1a0 = (undefined *)((ulong)CONCAT61(puStack_1a0._2_6_,bVar28) << 8);
code_r0x000100456950:
    puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffffffffff00);
    goto code_r0x0001004569a8;
  case 1:
  case 0x32:
  case 0x4a:
  case 0x62:
  case 0xff:
    ppuStack_198 = (undefined **)(ulong)*(byte *)((long)param_4 + 1);
  case 0x36:
  case 0xc2:
code_r0x000100456960:
    bVar28 = 1;
code_r0x000100456964:
    break;
  case 2:
  case 0x2c:
  case 0xf5:
    ppuStack_198 = (undefined **)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x000100456960;
  case 3:
  case 0x5d:
    ppuStack_198 = (undefined **)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x000100456960;
  case 4:
  case 0x1c:
  case 0x61:
  case 0x73:
    ppuVar29 = (undefined **)param_4[1];
  case 0x51:
  case 0xbd:
  case 0xee:
    ppuStack_198 = ppuVar29;
    goto code_r0x000100456960;
  case 5:
  case 0x60:
  case 0xf8:
    ppuStack_198 = (undefined **)(long)(char)*(byte *)((long)param_4 + 1);
    goto code_r0x00010045699c;
  case 6:
  case 0xfa:
    ppuStack_198 = (undefined **)(long)*(short *)((long)param_4 + 2);
    goto code_r0x00010045699c;
  case 7:
  case 0x31:
  case 0x48:
  case 0x65:
  case 0xf3:
    ppuStack_198 = (undefined **)(long)*(int *)((long)param_4 + 4);
    goto code_r0x00010045699c;
  case 8:
    ppuStack_198 = (undefined **)param_4[1];
code_r0x00010045699c:
    bVar28 = 2;
    break;
  case 9:
  case 0x76:
    ppuVar42 = (undefined **)(ulong)*(uint *)((long)param_4 + 4);
  case 0x33:
  case 0x43:
  case 0x58:
    ppuStack_198 = (undefined **)(double)SUB84(ppuVar42,0);
code_r0x00010045698c:
    bVar28 = 3;
    break;
  case 10:
    ppuStack_198 = (undefined **)param_4[1];
    goto code_r0x00010045698c;
  case 0xb:
  case 0x17:
  case 0x30:
  case 100:
  case 0x75:
    param_4 = (undefined **)(ulong)*(uint *)((long)param_4 + 4);
  case 0x96:
  case 0xb0:
  case 0xce:
code_r0x0001004568c4:
    pppuVar13 = (undefined ***)&stack0xffffffffffffffa0;
    puVar41 = unaff_x29;
code_r0x0001004568cc:
    unaff_x20 = *(undefined ***)((long)pppuVar13 + 0x40);
    unaff_x19 = *(undefined **)((long)pppuVar13 + 0x48);
    pppuVar14 = pppuVar13;
code_r0x0001004568d0:
    pppuVar15 = pppuVar14;
code_r0x0001004568d4:
    pppuVar16 = (undefined ***)((long)pppuVar15 + 0x60);
code_r0x0001004568e0:
    *(undefined ***)((long)pppuVar16 + -0x20) = unaff_x20;
    *(undefined **)((long)pppuVar16 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar16 + -0x10) = puVar41;
    *(undefined8 *)((long)pppuVar16 + -8) = unaff_x30;
    *(undefined4 *)((long)pppuVar16 + -0x44) = 0;
    uVar27 = (uint)param_4;
    if (uVar27 < 0x80) {
      *(byte *)((long)pppuVar16 + -0x44) = (byte)param_4;
      uVar32 = 1;
    }
    else {
      bVar28 = (byte)param_4 & 0x3f | 0x80;
      if (uVar27 < 0x800) {
        *(byte *)((long)pppuVar16 + -0x44) = (byte)(uVar27 >> 6) | 0xc0;
        *(byte *)((long)pppuVar16 + -0x43) = bVar28;
        uVar32 = 2;
      }
      else {
        bVar2 = (byte)(uVar27 >> 6) & 0x3f | 0x80;
        if (uVar27 < 0x10000) {
          *(byte *)((long)pppuVar16 + -0x44) = (byte)(uVar27 >> 0xc) | 0xe0;
          *(byte *)((long)pppuVar16 + -0x43) = bVar2;
          *(byte *)((long)pppuVar16 + -0x42) = bVar28;
          uVar32 = 3;
        }
        else {
          *(byte *)((long)pppuVar16 + -0x44) = (byte)(uVar27 >> 0x12) | 0xf0;
          *(byte *)((long)pppuVar16 + -0x43) = (byte)(uVar27 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppuVar16 + -0x42) = bVar2;
          *(byte *)((long)pppuVar16 + -0x41) = bVar28;
          uVar32 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppuVar16 + -0x38) = (undefined1 *)((long)pppuVar16 + -0x44);
    *(undefined8 *)((long)pppuVar16 + -0x30) = uVar32;
    *(undefined1 *)((long)pppuVar16 + -0x40) = 5;
    puVar25 = (undefined *)
              func_0x000108a4a50c((undefined1 *)((long)pppuVar16 + -0x40),
                                  (undefined1 *)((long)pppuVar16 + -0x21),&UNK_10b21ae30);
    *(undefined **)param_3 = (undefined *)0x11;
    *(undefined **)((long)param_3 + 8) = puVar25;
    return;
  case 0xc:
  case 0x20:
  case 0x35:
  case 0x7b:
    param_4 = param_4 + 1;
  case 0x5a:
code_r0x0001004568f4:
    pppuVar17 = (undefined ***)&stack0xffffffffffffffa0;
code_r0x0001004568f8:
    puVar41 = *(undefined1 **)((long)pppuVar17 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppuVar17 + 0x58);
    pppuVar18 = pppuVar17;
code_r0x0001004568fc:
    unaff_x20 = *(undefined ***)((long)pppuVar18 + 0x40);
    unaff_x19 = *(undefined **)((long)pppuVar18 + 0x48);
    pppuVar19 = pppuVar18;
code_r0x000100456900:
    unaff_x22 = *(undefined **)((long)pppuVar19 + 0x30);
    unaff_x21 = *(undefined ***)((long)pppuVar19 + 0x38);
    pppuVar20 = pppuVar19;
code_r0x000100456904:
    pppuVar21 = pppuVar20;
code_r0x000100456908:
    pppuVar22 = (undefined ***)((long)pppuVar21 + 0x60);
code_r0x000100456910:
    *(undefined **)((long)pppuVar22 + -0x30) = unaff_x22;
    *(undefined ***)((long)pppuVar22 + -0x28) = unaff_x21;
    *(undefined ***)((long)pppuVar22 + -0x20) = unaff_x20;
    *(undefined **)((long)pppuVar22 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar22 + -0x10) = puVar41;
    *(undefined8 *)((long)pppuVar22 + -8) = unaff_x30;
    puVar25 = param_4[1];
    puVar26 = param_4[2];
    *(undefined **)((long)pppuVar22 + -0x48) = puVar25;
    *(undefined **)((long)pppuVar22 + -0x40) = puVar26;
    *(undefined1 *)((long)pppuVar22 + -0x50) = 5;
    puVar26 = (undefined *)
              func_0x000108a4a50c((undefined1 *)((long)pppuVar22 + -0x50),
                                  (undefined1 *)((long)pppuVar22 + -0x31),&UNK_10b21ae30);
    *(undefined **)param_3 = (undefined *)0x11;
    *(undefined **)((long)param_3 + 8) = puVar26;
    if (*param_4 != (undefined *)0x0) {
      _free(puVar25);
    }
    return;
  case 0xd:
  case 0x34:
  case 0xfc:
    ppuStack_198 = (undefined **)param_4[1];
    puStack_190 = param_4[2];
    bVar28 = 5;
    break;
  case 0xe:
  case 0x37:
    param_4 = param_4 + 1;
  case 0xb2:
  case 0xd3:
code_r0x00010045689c:
    pppuVar6 = (undefined ***)&stack0xffffffffffffffa0;
code_r0x0001004568a0:
    puVar41 = *(undefined1 **)((long)pppuVar6 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppuVar6 + 0x58);
    pppuVar7 = pppuVar6;
code_r0x0001004568a4:
    unaff_x20 = *(undefined ***)((long)pppuVar7 + 0x40);
    unaff_x19 = *(undefined **)((long)pppuVar7 + 0x48);
    pppuVar8 = pppuVar7;
code_r0x0001004568a8:
    unaff_x22 = *(undefined **)((long)pppuVar8 + 0x30);
    unaff_x21 = *(undefined ***)((long)pppuVar8 + 0x38);
    pppuVar9 = pppuVar8;
code_r0x0001004568ac:
    pppuVar10 = pppuVar9;
code_r0x0001004568b0:
    pppuVar12 = pppuVar10;
code_r0x0001004568b4:
    pppuVar11 = (undefined ***)((long)pppuVar12 + 0x60);
code_r0x0001004568b8:
    *(undefined **)((long)pppuVar11 + -0x30) = unaff_x22;
    *(undefined ***)((long)pppuVar11 + -0x28) = unaff_x21;
    *(undefined ***)((long)pppuVar11 + -0x20) = unaff_x20;
    *(undefined **)((long)pppuVar11 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar11 + -0x10) = puVar41;
    *(undefined8 *)((long)pppuVar11 + -8) = unaff_x30;
    puVar25 = param_4[1];
    puVar26 = param_4[2];
    *(undefined **)((long)pppuVar11 + -0x48) = puVar25;
    *(undefined **)((long)pppuVar11 + -0x40) = puVar26;
    *(undefined1 *)((long)pppuVar11 + -0x50) = 6;
    puVar26 = (undefined *)
              func_0x000108a4a50c((undefined1 *)((long)pppuVar11 + -0x50),
                                  (undefined1 *)((long)pppuVar11 + -0x31),&UNK_10b21ae30);
    *(undefined **)param_3 = (undefined *)0x11;
    *(undefined **)((long)param_3 + 8) = puVar26;
    if (*param_4 != (undefined *)0x0) {
      _free(puVar25);
    }
    return;
  case 0xf:
  case 0x47:
  case 0x59:
  case 0xf9:
    ppuStack_198 = (undefined **)param_4[1];
    puStack_190 = param_4[2];
  case 0x2d:
  case 0x4f:
  case 0xf2:
    bVar28 = 6;
    break;
  case 0x10:
  case 0x25:
  case 99:
  case 0xb9:
  case 0xe9:
    bVar28 = 8;
  case 0x77:
  case 0xcb:
    break;
  default:
    ppuVar24 = (undefined **)param_4[1];
    ppuStack_198 = (undefined **)ppuVar24[1];
    puStack_1a0 = *ppuVar24;
    puStack_188 = ppuVar24[3];
    puStack_190 = ppuVar24[2];
    func_0x000107c04944(param_3,&puStack_1a0);
  case 0x6b:
code_r0x000100456528:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(ppuVar24);
    return;
  case 0x12:
    bVar28 = 7;
    break;
  case 0x13:
    ppuVar24 = (undefined **)param_4[1];
    ppuStack_198 = (undefined **)ppuVar24[1];
    puStack_1a0 = *ppuVar24;
    puStack_188 = ppuVar24[3];
    puStack_190 = ppuVar24[2];
    func_0x000107c05584(param_3,&puStack_1a0);
    goto code_r0x000100456528;
  case 0x14:
    unaff_x23 = (undefined **)param_4[1];
    unaff_x20 = (undefined **)param_4[2];
    unaff_x19 = param_4[3];
    unaff_x24 = unaff_x20 + (long)unaff_x19 * 4;
    uStack_90 = 0;
    unaff_x21 = unaff_x20;
    uStack_b0 = unaff_x20;
    ppuStack_a8 = unaff_x20;
    ppuStack_a0 = unaff_x23;
    ppuStack_98 = unaff_x24;
    if (unaff_x19 != (undefined *)0x0) {
      unaff_x21 = unaff_x20 + 4;
      ppuVar29 = (undefined **)(ulong)*(byte *)unaff_x20;
      ppuStack_a8 = unaff_x21;
      goto code_r0x00010045656c;
    }
code_r0x000100456574:
    puVar26 = (undefined *)thunk_FUN_1087e422c(0,&UNK_10b22b968,&UNK_10b20a590);
code_r0x000100456590:
    *(undefined **)param_3 = (undefined *)0x11;
    *(undefined **)((long)param_3 + 8) = puVar26;
code_r0x000100456598:
    lVar31 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
    while (lVar31 = lVar31 + -1, lVar31 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 4;
    }
    if (unaff_x23 != (undefined **)0x0) {
      _free(unaff_x20);
    }
    goto code_r0x000100456b14;
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
    puStack_1c0 = param_4[1];
    ppuStack_1d0 = (undefined **)param_4[2];
    puVar25 = param_4[3];
    unaff_x20 = ppuStack_1d0 + (long)puVar25 * 8;
    puStack_1f0._0_1_ = 0x16;
    ppuStack_1b0 = (undefined **)0x0;
    ppuStack_1b8 = unaff_x20;
    if (puVar25 == (undefined *)0x0) {
      unaff_x25 = (undefined **)0x2;
      puStack_d8._0_1_ = 2;
      puStack_d8._1_7_ = 0;
      unaff_x24 = (undefined **)0x2;
      ppuVar35 = (undefined **)param_3;
      ppuStack_1c8 = ppuStack_1d0;
    }
    else {
      unaff_x26 = (undefined **)0x0;
      unaff_x21 = (undefined **)((ulong)&uStack_b0 | 1);
      unaff_x23 = (undefined **)((ulong)&puStack_1f0 | 1);
      puStack_208 = (undefined8 *)((ulong)&puStack_88 | 1);
      ppuStack_220 = (undefined **)(((long)puVar25 * 0x40 - 0x40U >> 6) + 1);
      unaff_x24 = (undefined **)0x2;
      unaff_x22 = (undefined *)0x8000000000000000;
      unaff_x25 = (undefined **)0x2;
      unaff_x27 = ppuStack_1d0;
      ppuStack_218 = (undefined **)param_3;
      ppuStack_1c8 = ppuStack_1d0;
      do {
        param_3 = (char *)unaff_x27;
        unaff_x27 = (undefined **)((long)param_3 + 0x40);
        bVar28 = *param_3;
        ppuVar35 = (undefined **)(ulong)bVar28;
        ppuVar39 = unaff_x26;
        ppuVar40 = unaff_x27;
        if (bVar28 == 0x16) break;
        uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,bVar28);
        puVar25 = *(undefined **)((long)param_3 + 0x10);
        *(undefined **)((long)unaff_x21 + 0x17) = *(undefined **)((long)param_3 + 0x18);
        *(undefined **)((long)unaff_x21 + 0xf) = puVar25;
        ppuVar43 = *(undefined ***)((long)param_3 + 9);
        ppuVar42 = *(undefined ***)((long)param_3 + 1);
code_r0x0001004560f4:
        unaff_x21[1] = (undefined *)ppuVar43;
        *unaff_x21 = (undefined *)ppuVar42;
        puStack_1d8 = *(undefined **)((long)param_3 + 0x38);
        uStack_1e8 = SUB81(*(undefined **)((long)param_3 + 0x28),0);
        uStack_1e7 = (undefined7)((ulong)*(undefined **)((long)param_3 + 0x28) >> 8);
        puStack_1f0._0_1_ = (byte)*(undefined **)((long)param_3 + 0x20);
        puStack_1f0._1_7_ = (undefined7)((ulong)*(undefined **)((long)param_3 + 0x20) >> 8);
        uStack_1e0 = SUB81(*(undefined **)((long)param_3 + 0x30),0);
        uStack_1df = (undefined7)((ulong)*(undefined **)((long)param_3 + 0x30) >> 8);
        uVar27 = (uint)ppuVar35;
        if (uVar27 < 0xd) {
          if (uVar27 == 1) {
            iVar34 = 1;
            if (uStack_b0._1_1_ != '\x01') {
              iVar34 = 2;
            }
            iVar33 = 0;
            if (uStack_b0._1_1_ != '\0') {
              iVar33 = iVar34;
            }
          }
          else {
            if (uVar27 != 4) {
              if (uVar27 == 0xc) {
                if (ppuStack_98 == (undefined **)0x6) {
                  iVar33 = 1;
                  if (*(int *)ppuStack_a0 != 0x7074756f ||
                      *(short *)((long)ppuStack_a0 + 4) != 0x7475) {
                    iVar33 = 2;
                  }
                }
                else if (ppuStack_98 == (undefined **)0x7) {
                  iVar33 = 2;
                  if (*(int *)ppuStack_a0 == 0x6c6c6163 &&
                      *(int *)((long)ppuStack_a0 + 3) == 0x64695f6c) {
                    iVar33 = 0;
                  }
                }
                else {
                  iVar33 = 2;
                }
                goto joined_r0x00010045635c;
              }
code_r0x000100456c18:
              ppuStack_1b0 = (undefined **)((long)unaff_x26 + 1);
              puStack_d8._0_1_ = (byte)unaff_x25;
              puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
              uStack_d0 = SUB81(ppuStack_1f8,0);
              uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
              ppuStack_1c8 = unaff_x27;
              param_3 = (char *)thunk_FUN_108855b04(&uStack_b0,&puStack_88,&UNK_10b211e20);
              ppuVar35 = ppuStack_218;
              goto LAB_1004566c8;
            }
            iVar34 = 1;
            if (ppuStack_a8 != (undefined **)0x1) {
              iVar34 = 2;
            }
            iVar33 = 0;
            if (ppuStack_a8 != (undefined **)0x0) {
              iVar33 = iVar34;
            }
          }
code_r0x0001004563e8:
          FUN_100e077ec(&uStack_b0);
        }
        else {
          if (uVar27 == 0xd) {
            if (ppuStack_a0 == (undefined **)0x6) {
              iVar33 = 1;
              if (*(int *)ppuStack_a8 != 0x7074756f || *(short *)((long)ppuStack_a8 + 4) != 0x7475)
              {
                iVar33 = 2;
              }
            }
            else {
              if (ppuStack_a0 != (undefined **)0x7) goto code_r0x0001004563b4;
              iVar33 = 2;
              if (*(int *)ppuStack_a8 == 0x6c6c6163 && *(int *)((long)ppuStack_a8 + 3) == 0x64695f6c
                 ) {
                iVar33 = 0;
              }
            }
            goto code_r0x0001004563e8;
          }
          if (uVar27 != 0xe) {
            if (uVar27 != 0xf) goto code_r0x000100456c18;
            if (ppuStack_a0 == (undefined **)0x6) {
              if (((*(byte *)ppuStack_a8 != 0x6f) || (*(byte *)((long)ppuStack_a8 + 1) != 0x75)) ||
                 ((*(byte *)((long)ppuStack_a8 + 2) != 0x74 ||
                  (((*(byte *)((long)ppuStack_a8 + 3) != 0x70 ||
                    (*(byte *)((long)ppuStack_a8 + 4) != 0x75)) ||
                   (*(byte *)((long)ppuStack_a8 + 5) != 0x74)))))) goto code_r0x0001004563b4;
              iVar33 = 1;
            }
            else if (((ppuStack_a0 == (undefined **)0x7) && (*(byte *)ppuStack_a8 == 99)) &&
                    ((((*(byte *)((long)ppuStack_a8 + 1) == 0x61 &&
                       ((*(byte *)((long)ppuStack_a8 + 2) == 0x6c &&
                        (*(byte *)((long)ppuStack_a8 + 3) == 0x6c)))) &&
                      (*(byte *)((long)ppuStack_a8 + 4) == 0x5f)) &&
                     ((*(byte *)((long)ppuStack_a8 + 5) == 0x69 &&
                      (*(byte *)((long)ppuStack_a8 + 6) == 100)))))) {
              iVar33 = 0;
            }
            else {
code_r0x0001004563b4:
              iVar33 = 2;
            }
            goto code_r0x0001004563e8;
          }
          if (ppuStack_98 == (undefined **)0x6) {
            if (((((*(byte *)ppuStack_a0 != 0x6f) || (*(byte *)((long)ppuStack_a0 + 1) != 0x75)) ||
                 (*(byte *)((long)ppuStack_a0 + 2) != 0x74)) ||
                ((*(byte *)((long)ppuStack_a0 + 3) != 0x70 ||
                 (*(byte *)((long)ppuStack_a0 + 4) != 0x75)))) ||
               (*(byte *)((long)ppuStack_a0 + 5) != 0x74)) goto code_r0x000100456324;
            iVar33 = 1;
          }
          else if ((((ppuStack_98 == (undefined **)0x7) && (*(byte *)ppuStack_a0 == 99)) &&
                   ((*(byte *)((long)ppuStack_a0 + 1) == 0x61 &&
                    (((*(byte *)((long)ppuStack_a0 + 2) == 0x6c &&
                      (*(byte *)((long)ppuStack_a0 + 3) == 0x6c)) &&
                     (*(byte *)((long)ppuStack_a0 + 4) == 0x5f)))))) &&
                  ((*(byte *)((long)ppuStack_a0 + 5) == 0x69 &&
                   (*(byte *)((long)ppuStack_a0 + 6) == 100)))) {
            iVar33 = 0;
          }
          else {
code_r0x000100456324:
            iVar33 = 2;
          }
joined_r0x00010045635c:
          if (ppuStack_a8 != (undefined **)0x0) {
            _free();
          }
        }
        bVar28 = (byte)puStack_1f0;
        if (iVar33 == 0) {
          in_ZR = unaff_x22 == (undefined *)0x8000000000000000;
code_r0x00010045646c:
          bVar28 = (byte)puStack_1f0;
          if (!(bool)in_ZR) {
            ppuVar29 = (undefined **)((long)unaff_x26 + 1);
            goto code_r0x000100456b34;
          }
          puStack_1f0._0_1_ = 0x16;
          if (bVar28 == 0x16) {
            ppuStack_1b0 = (undefined **)((long)unaff_x26 + 1);
            puStack_d8._0_1_ = (byte)unaff_x25;
            puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
            uStack_d0 = SUB81(ppuStack_1f8,0);
            uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
            param_3 = &UNK_108ca1a98;
            ppuStack_1c8 = unaff_x27;
            goto code_r0x000100456bd0;
          }
          puVar25 = *unaff_x23;
          unaff_x21[1] = unaff_x23[1];
          *unaff_x21 = puVar25;
          uVar32 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar32;
code_r0x000100456494:
          uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,bVar28);
code_r0x000100456498:
          ppuVar24 = (undefined **)param_3;
code_r0x00010045649c:
          param_3 = (char *)&puStack_88;
code_r0x0001004564a0:
          FUN_1004b62d4(param_3,&uStack_b0);
          if (puStack_88 == (undefined *)0x8000000000000000) goto code_r0x000100456854;
          ppuStack_200 = ppuStack_80;
          puStack_210 = puStack_78;
          unaff_x22 = puStack_88;
        }
        else {
          ppuVar24 = (undefined **)param_3;
          if (iVar33 == 1) {
            if (unaff_x24 != (undefined **)0x2) {
              ppuVar29 = (undefined **)((long)unaff_x26 + 1);
              goto code_r0x000100456a78;
            }
            puStack_1f0._0_1_ = 0x16;
            in_ZR = bVar28 == 0x16;
code_r0x000100456428:
            if ((bool)in_ZR) {
              ppuStack_1b0 = (undefined **)((long)unaff_x26 + 1);
              puStack_d8._0_1_ = (byte)unaff_x25;
              puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
              uStack_d0 = SUB81(ppuStack_1f8,0);
              uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
              ppuStack_1c8 = unaff_x27;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x000100456c14;
            }
            puVar25 = *unaff_x23;
            puStack_208[1] = unaff_x23[1];
            *puStack_208 = puVar25;
            uVar32 = *(undefined8 *)((long)unaff_x23 + 0xf);
            *(undefined8 *)((long)puStack_208 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
            *(undefined8 *)((long)puStack_208 + 0xf) = uVar32;
            puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,bVar28);
            param_3 = (char *)&uStack_b0;
            param_4 = &puStack_88;
code_r0x000100456450:
            func_0x00010130e708(param_3,param_4);
code_r0x000100456454:
            unaff_x25 = uStack_b0;
code_r0x000100456458:
            in_ZR = unaff_x25 == (undefined **)0x2;
code_r0x00010045645c:
            if ((bool)in_ZR) {
              ppuVar29 = (undefined **)((long)unaff_x26 + 1);
              goto code_r0x000100456830;
            }
            ppuStack_1f8 = ppuStack_a8;
            ppuVar29 = (undefined **)&uStack_b0;
            ppuVar35 = &puStack_d8;
            ppuVar42 = ppuStack_a0;
            ppuVar43 = ppuStack_98;
code_r0x0001004560b0:
            unaff_x24 = unaff_x25;
            ppuVar35[3] = (undefined *)ppuVar43;
            ppuVar35[2] = (undefined *)ppuVar42;
            ppuVar35[4] = ppuVar29[4];
            unaff_x25 = unaff_x24;
          }
          else {
            puStack_1f0._0_1_ = 0x16;
            if (bVar28 == 0x16) {
              ppuVar29 = (undefined **)((long)unaff_x26 + 1);
              goto code_r0x000100456b84;
            }
            puVar25 = *unaff_x23;
            unaff_x21[1] = unaff_x23[1];
            *unaff_x21 = puVar25;
            uVar32 = *(undefined8 *)((long)unaff_x23 + 0xf);
            *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
            *(undefined8 *)((long)unaff_x21 + 0xf) = uVar32;
            uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,bVar28);
            FUN_100e077ec(&uStack_b0);
          }
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        ppuVar39 = ppuStack_220;
        ppuVar40 = unaff_x20;
      } while (ppuVar24 + 8 != unaff_x20);
      puStack_d8._0_1_ = (byte)unaff_x25;
      puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
      uStack_d0 = SUB81(ppuStack_1f8,0);
      uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
      ppuVar35 = ppuStack_218;
      ppuStack_1c8 = ppuVar40;
      ppuStack_1b0 = ppuVar39;
      if (unaff_x22 != (undefined *)0x8000000000000000) {
        if (unaff_x24 != (undefined **)0x2) {
          ppuStack_218[4] = puStack_c0;
          ppuStack_218[3] = (undefined *)CONCAT71(uStack_c7,uStack_c8);
          ppuVar29 = ppuStack_b8;
          param_3 = (char *)ppuStack_218;
          goto code_r0x0001004567a8;
        }
        puStack_88 = &UNK_108ca104d;
        ppuStack_80 = (undefined **)0x6;
        ppuVar29 = &puStack_88;
        ppuVar35 = (undefined **)&DAT_100c7b3a0;
        ppuVar24 = ppuStack_218;
        goto code_r0x000100456764;
      }
    }
    puStack_88 = &UNK_108caaafb;
    ppuStack_80 = (undefined **)0x7;
    uStack_b0 = &puStack_88;
    ppuStack_a8 = (undefined **)&DAT_100c7b3a0;
    unaff_x22 = (undefined *)0x0;
    param_3 = (char *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
    goto LAB_1004566c8;
  case 0x16:
  case 0x4e:
    goto code_r0x0001004568ac;
  case 0x18:
  case 0xe1:
    goto code_r0x000100456884;
  case 0x19:
  case 0x70:
  case 0xe2:
    goto code_r0x00010045689c;
  case 0x1a:
  case 0x91:
  case 200:
    goto code_r0x000100456848;
  case 0x1b:
  case 0xf6:
    goto code_r0x0001004568cc;
  case 0x1d:
  case 0x46:
  case 0x7d:
  case 0xe6:
  case 0xfd:
    goto code_r0x0001004568a4;
  case 0x1e:
  case 0x74:
  case 0xfb:
    goto code_r0x0001004568fc;
  case 0x1f:
    goto code_r0x000100456878;
  case 0x21:
  case 0x84:
    goto code_r0x000100456820;
  case 0x22:
  case 0xd5:
    goto code_r0x000100456850;
  case 0x23:
  case 0x4b:
  case 0x6f:
  case 0xfe:
    goto code_r0x0001004568d4;
  case 0x24:
  case 0x86:
    goto code_r0x0001004567f8;
  case 0x26:
    goto code_r0x0001004567f0;
  case 0x29:
    goto code_r0x000100456450;
  case 0x2a:
    goto code_r0x000100456494;
  case 0x2e:
  case 0x45:
  case 0x67:
  case 0xb6:
    goto code_r0x0001004568f8;
  case 0x2f:
  case 0x5f:
  case 0xb8:
    goto code_r0x000100456910;
  case 0x38:
  case 0x6e:
    goto code_r0x0001004568c4;
  case 0x3a:
    goto code_r0x00010045686c;
  case 0x3b:
  case 0x49:
  case 0xba:
    goto code_r0x000100456900;
  case 0x3c:
  case 0x66:
  case 0xbc:
  case 0xdc:
    goto code_r0x000100456864;
  case 0x3e:
    goto code_r0x0001004569c0;
  case 0x3f:
  case 0xc3:
  case 0xd9:
    goto code_r0x00010045645c;
  case 0x40:
  case 0xc4:
  case 0xda:
    goto code_r0x0001004564a0;
  case 0x42:
  case 0x5b:
  case 0xf4:
    goto code_r0x000100456908;
  case 0x44:
  case 0xb5:
    goto code_r0x0001004568e0;
  case 0x4d:
    goto code_r0x00010045687c;
  case 0x50:
  case 0xdf:
code_r0x000100456854:
    ppuVar29 = (undefined **)((long)unaff_x26 + 1);
  case 0x8a:
    ppuStack_1c8 = unaff_x27;
code_r0x00010045685c:
    ppuStack_1b0 = ppuVar29;
code_r0x000100456860:
    ppuVar29 = ppuStack_1f8;
    unaff_x23 = ppuStack_200;
code_r0x000100456864:
    puStack_d8._0_1_ = (byte)unaff_x25;
    puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
    uStack_d0 = SUB81(ppuVar29,0);
    uStack_cf = (undefined7)((ulong)ppuVar29 >> 8);
code_r0x000100456868:
    unaff_x22 = (undefined *)0x0;
code_r0x00010045686c:
    param_3 = (char *)ppuStack_80;
code_r0x000100456870:
    ppuVar24 = ppuStack_218;
code_r0x000100456874:
    unaff_x27 = &puStack_1f0;
code_r0x000100456878:
    ppuVar29 = (undefined **)0x11;
code_r0x00010045687c:
    *ppuVar24 = (undefined *)ppuVar29;
    ppuVar24[1] = param_3;
code_r0x000100456880:
    in_ZR = unaff_x24 == (undefined **)0x2;
    ppuVar4 = unaff_x23;
code_r0x000100456884:
    ppuStack_200 = ppuVar4;
    unaff_x23 = ppuStack_200;
    if (!(bool)in_ZR) {
code_r0x0001004566dc:
      if (unaff_x25 == (undefined **)0x0) goto LAB_100456ad0;
      goto LAB_1004566e0;
    }
    goto LAB_100456ae4;
  case 0x52:
    goto code_r0x00010045684c;
  case 0x54:
    goto code_r0x0001004569a8;
  case 0x55:
  case 0xef:
    goto code_r0x000100456458;
  case 0x56:
  case 0xf0:
    goto code_r0x00010045649c;
  case 0x5c:
  case 0x71:
  case 0xe4:
    goto code_r0x0001004568b4;
  case 0x5e:
  case 0xf7:
    goto code_r0x000100456950;
  case 0x68:
  case 0xb4:
  case 0xe3:
    goto code_r0x00010045685c;
  case 0x6a:
    goto code_r0x0001004569b4;
  case 0x6c:
code_r0x00010045656c:
    if ((int)ppuVar29 == 0x16) goto code_r0x000100456574;
    uStack_1e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
    puStack_1f0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
    uStack_1e8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
    puStack_1d8 = unaff_x20[3];
    uStack_1e0 = SUB81(unaff_x20[2],0);
    uStack_1df = (undefined7)((ulong)unaff_x20[2] >> 8);
    uStack_90 = 1;
    puStack_1f0._0_1_ = (byte)ppuVar29;
    FUN_1004b62d4(&puStack_d8,&puStack_1f0);
    puVar25 = (undefined *)CONCAT71(puStack_d8._1_7_,(byte)puStack_d8);
    puVar26 = (undefined *)CONCAT71(uStack_cf,uStack_d0);
    if (puVar25 == (undefined *)0x8000000000000000) goto code_r0x000100456590;
    if (unaff_x19 == (undefined *)0x1) {
code_r0x000100456638:
      puVar23 = (undefined *)thunk_FUN_1087e422c(1,&UNK_10b22b968,&UNK_10b20a590);
code_r0x000100456650:
      *(undefined **)param_3 = (undefined *)0x11;
      *(undefined **)((long)param_3 + 8) = puVar23;
      if (puVar25 != (undefined *)0x0) {
        _free(puVar26);
      }
      goto code_r0x000100456598;
    }
    puVar3 = (undefined *)CONCAT71(uStack_c7,uStack_c8);
    unaff_x21 = unaff_x20 + 8;
    ppuStack_a8 = unaff_x21;
    if (*(byte *)(unaff_x20 + 4) == 0x16) goto code_r0x000100456638;
    uStack_cf = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
    puStack_d8._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
    uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
    puStack_c0 = unaff_x20[7];
    uStack_c8 = SUB81(unaff_x20[6],0);
    uStack_c7 = (undefined7)((ulong)unaff_x20[6] >> 8);
    uStack_90 = 2;
    puStack_d8._0_1_ = *(byte *)(unaff_x20 + 4);
    func_0x00010130e708(&puStack_1f0,&puStack_d8);
    puVar23 = (undefined *)CONCAT71(uStack_1e7,uStack_1e8);
    if ((undefined *)CONCAT71(puStack_1f0._1_7_,(byte)puStack_1f0) == (undefined *)0x2)
    goto code_r0x000100456650;
    *(undefined **)((long)param_3 + 0x20) = puStack_1d8;
    *(undefined **)((long)param_3 + 0x18) = (undefined *)CONCAT71(uStack_1df,uStack_1e0);
    *(undefined **)param_3 = (undefined *)0x7;
    *(undefined **)((long)param_3 + 8) = (undefined *)CONCAT71(puStack_1f0._1_7_,(byte)puStack_1f0);
    *(undefined **)((long)param_3 + 0x10) = puVar23;
    *(undefined ***)((long)param_3 + 0x28) = ppuStack_1d0;
    *(undefined **)((long)param_3 + 0x30) = puVar25;
    *(undefined **)((long)param_3 + 0x38) = puVar26;
    *(undefined **)((long)param_3 + 0x40) = puVar3;
    puStack_118 = *(undefined **)((long)param_3 + 0x88);
    puStack_120 = *(undefined **)((long)param_3 + 0x80);
    puStack_108 = *(undefined **)((long)param_3 + 0x98);
    puStack_110 = *(undefined **)((long)param_3 + 0x90);
    puStack_f8 = *(undefined **)((long)param_3 + 0xa8);
    puStack_100 = *(undefined **)((long)param_3 + 0xa0);
    puStack_e8 = *(undefined **)((long)param_3 + 0xb8);
    puStack_f0 = *(undefined **)((long)param_3 + 0xb0);
    puStack_138 = *(undefined **)((long)param_3 + 0x68);
    puStack_140 = *(undefined **)((long)param_3 + 0x60);
    puStack_128 = *(undefined **)((long)param_3 + 0x78);
    puStack_130 = *(undefined **)((long)param_3 + 0x70);
    ppuStack_158 = *(undefined ***)((long)param_3 + 0x48);
    ppuStack_160 = *(undefined ***)((long)param_3 + 0x40);
    puStack_148 = *(undefined **)((long)param_3 + 0x58);
    puStack_150 = *(undefined **)((long)param_3 + 0x50);
    ppuStack_198 = *(undefined ***)((long)param_3 + 8);
    puStack_1a0 = *(undefined **)param_3;
    puStack_188 = *(undefined **)((long)param_3 + 0x18);
    puStack_190 = *(undefined **)((long)param_3 + 0x10);
    ppuStack_178 = *(undefined ***)((long)param_3 + 0x28);
    ppuStack_180 = *(undefined ***)((long)param_3 + 0x20);
    puStack_168 = *(undefined **)((long)param_3 + 0x38);
    puStack_170 = *(undefined **)((long)param_3 + 0x30);
    puVar25 = (undefined *)FUN_100fbc738(&uStack_b0);
    if (puVar25 == (undefined *)0x0) goto code_r0x000100456b14;
    goto code_r0x000100456a60;
  case 0x72:
  case 0x8e:
  case 0xc9:
    goto code_r0x000100456860;
  case 0x78:
    goto code_r0x000100456904;
  case 0x79:
    goto code_r0x000100456838;
  case 0x7a:
  case 0xcd:
    goto code_r0x000100456868;
  case 0x7c:
  case 0x87:
    goto code_r0x000100456810;
  case 0x7e:
  case 0xe8:
    goto code_r0x000100456808;
  case 0x80:
    goto code_r0x000100456964;
  case 0x81:
    goto code_r0x000100456454;
  case 0x82:
    goto code_r0x000100456498;
  case 0x85:
  case 0xe5:
code_r0x000100456830:
    ppuStack_1c8 = unaff_x27;
  case 0xbb:
    ppuStack_1b0 = ppuVar29;
code_r0x000100456838:
    ppuVar29 = ppuStack_a8;
code_r0x00010045683c:
    ppuVar35 = (undefined **)0x11;
code_r0x000100456840:
    ppuVar37 = ppuStack_218;
code_r0x000100456844:
    *ppuVar37 = (undefined *)ppuVar35;
    ppuVar37[1] = (undefined *)ppuVar29;
code_r0x000100456848:
    unaff_x23 = ppuStack_200;
code_r0x00010045684c:
    unaff_x27 = &puStack_1f0;
    ppuVar4 = unaff_x23;
code_r0x000100456850:
    ppuStack_200 = ppuVar4;
LAB_100456ae4:
    unaff_x22 = (undefined *)((ulong)unaff_x22 & 0x7fffffffffffffff);
    goto joined_r0x000100456784;
  case 0x88:
  case 0xd4:
    goto code_r0x0001004567bc;
  case 0x89:
    goto code_r0x000100456840;
  case 0x8b:
    goto code_r0x000100456818;
  case 0x8c:
  case 0xc6:
    goto code_r0x000100456870;
  case 0x8d:
    goto code_r0x0001004567ec;
  case 0x8f:
    goto code_r0x000100456794;
  case 0x90:
    goto code_r0x0001004567c4;
  case 0x92:
    goto code_r0x00010045676c;
  case 0x93:
  case 0xe0:
    goto code_r0x000100456800;
  case 0x94:
code_r0x000100456764:
    param_3 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
    uStack_b0 = ppuVar29;
    ppuStack_a8 = ppuVar35;
code_r0x00010045676c:
    puVar25 = (undefined *)thunk_FUN_108856088((byte *)((long)param_3 + 0x8f7),&uStack_b0);
    *ppuVar24 = (undefined *)0x11;
    ppuVar24[1] = puVar25;
    unaff_x27 = &puStack_1f0;
joined_r0x000100456784:
    if (unaff_x22 != (undefined *)0x0) {
      _free(ppuStack_200);
    }
    FUN_100d34830(unaff_x27 + 4);
    ppuVar29 = (undefined **)(ulong)(byte)puStack_1f0;
code_r0x000100456b00:
    if ((int)ppuVar29 != 0x16) {
      param_3 = (char *)&puStack_1f0;
code_r0x000100456b0c:
      FUN_100e077ec(param_3);
    }
    goto code_r0x000100456b14;
  case 0x97:
    goto code_r0x000100456428;
  case 0x98:
    goto code_r0x00010045646c;
  case 0x9a:
code_r0x000100456b34:
    puStack_d8._0_1_ = (byte)unaff_x25;
    puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
    uStack_d0 = SUB81(ppuStack_1f8,0);
    uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
    ppuStack_1c8 = unaff_x27;
    ppuStack_1b0 = ppuVar29;
  case 0x9b:
    puStack_88 = &UNK_108caaafb;
    ppuStack_80 = (undefined **)0x7;
code_r0x000100456b54:
    ppuVar29 = &puStack_88;
    ppuVar35 = (undefined **)&UNK_100c7b000;
code_r0x000100456b5c:
    ppuStack_a8 = ppuVar35 + 0x74;
    param_3 = s_duplicate_field_____108ac2973;
    uStack_b0 = ppuVar29;
code_r0x000100456b6c:
    param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_b0);
code_r0x000100456b74:
    ppuVar35 = ppuStack_218;
LAB_1004566c8:
    unaff_x27 = &puStack_1f0;
    *ppuVar35 = (undefined *)0x11;
    ppuVar35[1] = param_3;
    unaff_x23 = ppuStack_200;
    if (unaff_x24 != (undefined **)0x2) goto code_r0x0001004566dc;
    goto LAB_100456ae4;
  case 0x9c:
    goto code_r0x000100456b0c;
  case 0x9d:
    goto code_r0x000100456b24;
  case 0x9e:
    goto LAB_100456ad0;
  case 0x9f:
    goto code_r0x000100456b54;
  case 0xa0:
    goto code_r0x000100456b6c;
  case 0xa1:
    goto code_r0x000100456b2c;
  case 0xa2:
code_r0x000100456b84:
    puStack_d8._0_1_ = (byte)unaff_x25;
    puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
    uStack_d0 = SUB81(ppuStack_1f8,0);
    uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
    ppuStack_1c8 = unaff_x27;
    ppuStack_1b0 = ppuVar29;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x000100456c14;
  case 0xa3:
    goto code_r0x000100456b00;
  case 0xa4:
    goto code_r0x000100456b74;
  case 0xa5:
    goto FUN_100456aa8;
  case 0xa6:
    goto code_r0x000100456ad8;
  case 0xa7:
    goto code_r0x000100456b5c;
  case 0xa8:
    goto code_r0x000100456a80;
  case 0xa9:
    goto code_r0x000100456b14;
  case 0xaa:
code_r0x000100456a78:
    ppuStack_1c8 = unaff_x27;
    ppuStack_1b0 = ppuVar29;
code_r0x000100456a80:
    puStack_d8._0_1_ = (byte)unaff_x25;
    puStack_d8._1_7_ = (undefined7)((ulong)unaff_x25 >> 8);
    uStack_d0 = SUB81(ppuStack_1f8,0);
    uStack_cf = (undefined7)((ulong)ppuStack_1f8 >> 8);
    puStack_88 = &UNK_108ca104d;
    ppuStack_80 = (undefined **)0x6;
    uStack_b0 = &puStack_88;
    ppuStack_a8 = (undefined **)&DAT_100c7b3a0;
FUN_100456aa8:
    puVar25 = (undefined *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
    unaff_x27 = &puStack_1f0;
    *ppuStack_218 = (undefined *)0x11;
    ppuStack_218[1] = puVar25;
    unaff_x23 = ppuStack_200;
    if (unaff_x25 == (undefined **)0x0) {
LAB_100456ad0:
      ppuStack_200 = unaff_x23;
      if (ppuStack_1f8 != (undefined **)0x0) {
code_r0x000100456ad8:
        puVar38 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
        goto LAB_100456adc;
      }
    }
    else {
LAB_1004566e0:
      ppuVar35 = ppuStack_1f8;
      puVar38 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
      puVar1 = puVar38;
      for (puVar25 = puStack_c0; puVar25 != (undefined *)0x0; puVar25 = puVar25 + -1) {
        uVar30 = *puVar1;
        uVar36 = uVar30 ^ 0x8000000000000000;
        if (-1 < (long)uVar30) {
          uVar36 = 1;
        }
        if ((uVar36 == 0) || (uVar36 != 1)) {
          if (puVar1[1] != 0) {
            lVar31 = 0x10;
            goto LAB_1004566f4;
          }
        }
        else if (uVar30 != 0) {
          lVar31 = 8;
LAB_1004566f4:
          _free(*(undefined8 *)((long)puVar1 + lVar31));
        }
        puVar1 = puVar1 + 4;
      }
      if (ppuVar35 == (undefined **)0x0) {
code_r0x000100456794:
        ppuStack_200 = unaff_x23;
      }
      else {
LAB_100456adc:
        _free(puVar38);
        ppuStack_200 = unaff_x23;
      }
    }
    goto LAB_100456ae4;
  case 0xac:
code_r0x000100456bd0:
    FUN_107c05cac(param_3,0x2c,&UNK_10b24f848);
code_r0x000100456c14:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100456c18);
    (*pcVar5)();
  case 0xad:
    goto code_r0x0001004560b0;
  case 0xae:
    goto code_r0x0001004560f4;
  case 0xb1:
    goto code_r0x0001004568d0;
  case 0xb3:
  case 0xd0:
    goto code_r0x0001004568b0;
  case 0xb7:
    goto code_r0x0001004568b8;
  case 0xbe:
  case 0xca:
    goto code_r0x00010045680c;
  case 0xbf:
    goto code_r0x0001004568a0;
  case 0xc0:
    goto code_r0x000100456804;
  case 199:
    goto code_r0x000100456880;
  case 0xcc:
    goto code_r0x0001004568a8;
  case 0xcf:
  case 0xde:
    goto code_r0x00010045683c;
  case 0xd1:
    goto code_r0x0001004567e4;
  case 0xd2:
    goto code_r0x000100456814;
  case 0xd6:
    goto code_r0x0001004567b4;
  case 0xd8:
    goto code_r0x0001004568f4;
  case 0xdd:
    goto code_r0x000100456874;
  case 0xe7:
    goto code_r0x0001004567d8;
  case 0xea:
    goto code_r0x0001004567b0;
  case 0xeb:
    goto code_r0x000100456844;
  case 0xec:
code_r0x0001004567a8:
    *(undefined **)param_3 = (undefined *)0x7;
    *(undefined ***)((long)param_3 + 8) = unaff_x24;
code_r0x0001004567b0:
    ppuVar35 = ppuStack_200;
    ppuVar37 = ppuStack_1f8;
code_r0x0001004567b4:
    *(undefined ***)((long)param_3 + 0x10) = ppuVar37;
    *(undefined ***)((long)param_3 + 0x28) = ppuVar29;
    *(undefined **)((long)param_3 + 0x30) = unaff_x22;
code_r0x0001004567bc:
    *(undefined ***)((long)param_3 + 0x38) = ppuVar35;
    *(undefined **)((long)param_3 + 0x40) = puStack_210;
code_r0x0001004567c4:
    puStack_118 = *(undefined **)((long)param_3 + 0x88);
    puStack_120 = *(undefined **)((long)param_3 + 0x80);
    puStack_108 = *(undefined **)((long)param_3 + 0x98);
    puStack_110 = *(undefined **)((long)param_3 + 0x90);
    puStack_f8 = *(undefined **)((long)param_3 + 0xa8);
    puStack_100 = *(undefined **)((long)param_3 + 0xa0);
    puStack_e8 = *(undefined **)((long)param_3 + 0xb8);
    puStack_f0 = *(undefined **)((long)param_3 + 0xb0);
    ppuVar43 = *(undefined ***)((long)param_3 + 0x48);
    ppuVar42 = *(undefined ***)((long)param_3 + 0x40);
    puVar26 = *(undefined **)((long)param_3 + 0x58);
    puVar25 = *(undefined **)((long)param_3 + 0x50);
code_r0x0001004567d8:
    puStack_138 = *(undefined **)((long)param_3 + 0x68);
    puStack_140 = *(undefined **)((long)param_3 + 0x60);
    puStack_128 = *(undefined **)((long)param_3 + 0x78);
    puStack_130 = *(undefined **)((long)param_3 + 0x70);
    ppuStack_160 = ppuVar42;
    ppuStack_158 = ppuVar43;
    puStack_150 = puVar25;
    puStack_148 = puVar26;
code_r0x0001004567e4:
    ppuStack_198 = *(undefined ***)((long)param_3 + 8);
    puStack_1a0 = *(undefined **)param_3;
    puStack_188 = *(undefined **)((long)param_3 + 0x18);
    puStack_190 = *(undefined **)((long)param_3 + 0x10);
code_r0x0001004567ec:
    ppuVar43 = *(undefined ***)((long)param_3 + 0x28);
    ppuVar42 = *(undefined ***)((long)param_3 + 0x20);
    puVar26 = *(undefined **)((long)param_3 + 0x38);
    puVar25 = *(undefined **)((long)param_3 + 0x30);
code_r0x0001004567f0:
    ppuVar29 = &puStack_1f0;
    ppuStack_180 = ppuVar42;
    ppuStack_178 = ppuVar43;
    puStack_170 = puVar25;
    puStack_168 = puVar26;
code_r0x0001004567f8:
    FUN_100d34830(ppuVar29 + 4);
code_r0x000100456800:
    in_ZR = unaff_x20 == ppuVar40;
code_r0x000100456804:
    if (!(bool)in_ZR) {
code_r0x000100456808:
      ppuVar29 = (undefined **)((long)unaff_x20 - (long)ppuVar40);
code_r0x00010045680c:
      ppuVar29 = (undefined **)((ulong)ppuVar29 >> 6);
code_r0x000100456810:
      uStack_b0 = ppuVar39;
code_r0x000100456814:
      param_5 = &UNK_10b23a000;
      ppuVar24 = (undefined **)param_3;
code_r0x000100456818:
      param_5 = param_5 + 400;
      param_3 = (char *)((long)ppuVar29 + (long)ppuVar39);
code_r0x000100456820:
      puVar25 = (undefined *)thunk_FUN_1087e422c(param_3,&uStack_b0,param_5);
      param_3 = (char *)ppuVar24;
code_r0x000100456a60:
      *(undefined **)param_3 = (undefined *)0x11;
      *(undefined **)((long)param_3 + 8) = puVar25;
      FUN_100e02a24(&puStack_1a0);
    }
    goto code_r0x000100456b14;
  }
  puStack_1a0 = (undefined *)CONCAT71(puStack_1a0._1_7_,bVar28);
code_r0x0001004569a8:
  param_5 = &UNK_10b21ae30;
  ppuVar24 = &puStack_1a0;
code_r0x0001004569b4:
  ppuVar24 = (undefined **)FUN_107c05dcc(ppuVar24,&puStack_88,param_5);
  ppuVar29 = (undefined **)0x11;
code_r0x0001004569c0:
  *(undefined ***)param_3 = ppuVar29;
  *(undefined ***)((long)param_3 + 8) = ppuVar24;
code_r0x000100456b14:
code_r0x000100456b24:
code_r0x000100456b2c:
  return;
}

