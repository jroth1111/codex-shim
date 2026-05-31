
void FUN_100437c64(undefined1 param_1 [16],char *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  code *pcVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  byte **ppbVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  byte **ppbVar23;
  byte **ppbVar24;
  byte **ppbVar25;
  byte **ppbVar26;
  undefined1 in_ZR;
  byte *pbVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  uint uVar32;
  byte bVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  undefined *puVar37;
  ulong uVar38;
  int iVar39;
  byte *unaff_x19;
  byte *unaff_x20;
  long *plVar40;
  byte *pbVar41;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *pbVar42;
  undefined8 *unaff_x26;
  byte *unaff_x27;
  byte *pbVar43;
  undefined1 *puVar44;
  undefined8 unaff_x30;
  byte *pbVar45;
  byte abStack_300 [80];
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  ulong uStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  undefined8 *puStack_288;
  uint uStack_27c;
  byte *pbStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined8 uStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  undefined8 uStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  long lStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  long lStack_208;
  byte bStack_108;
  byte bStack_107;
  undefined6 uStack_106;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  undefined1 auStack_71 [17];
  byte **ppbVar15;
  byte **ppbVar27;
  
  uVar30 = param_1._8_8_;
  pbVar45 = param_1._0_8_;
  puVar44 = &stack0xfffffffffffffff0;
  ppbVar21 = &pbStack_2b0;
  ppbVar26 = &pbStack_2b0;
  ppbVar14 = &pbStack_2b0;
  pbVar42 = &bStack_108;
  bVar33 = *param_3;
  pbVar34 = (byte *)(ulong)bVar33;
  pbVar36 = &UNK_108c98b0e;
  uVar38 = (ulong)*(ushort *)(&UNK_108c98b0e + (long)pbVar34 * 2);
  puVar37 = &UNK_100437ca8 + uVar38 * 4;
  ppbVar22 = &pbStack_2b0;
  ppbVar23 = &pbStack_2b0;
  ppbVar24 = &pbStack_2b0;
  ppbVar25 = &pbStack_2b0;
  ppbVar27 = &pbStack_2b0;
  ppbVar16 = &pbStack_2b0;
  ppbVar17 = &pbStack_2b0;
  ppbVar18 = &pbStack_2b0;
  ppbVar19 = &pbStack_2b0;
  ppbVar20 = &pbStack_2b0;
  ppbVar10 = &pbStack_2b0;
  ppbVar11 = &pbStack_2b0;
  ppbVar12 = &pbStack_2b0;
  ppbVar13 = &pbStack_2b0;
  ppbVar15 = &pbStack_2b0;
  pbVar43 = (byte *)param_2;
  pbVar28 = (byte *)param_2;
  pbVar35 = pbVar34;
  pbVar41 = unaff_x20;
  switch(bVar33) {
  case 0:
  case 0x4c:
  case 0xd0:
  case 0xe6:
    bVar33 = param_3[1];
  case 0x73:
    lStack_220 = (ulong)CONCAT61(lStack_220._2_6_,bVar33) << 8;
code_r0x000100438594:
    goto code_r0x0001004385e8;
  case 1:
  case 0x4a:
  case 0xce:
  case 0xe4:
    pbVar34 = (byte *)(ulong)param_3[1];
  case 0xc2:
code_r0x00010043859c:
    bVar33 = 1;
    pbStack_218 = pbVar34;
code_r0x0001004385a4:
    break;
  case 2:
    pbVar34 = (byte *)(ulong)*(ushort *)(param_3 + 2);
  case 0x75:
    goto code_r0x00010043859c;
  case 3:
    pbVar34 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x6f:
    goto code_r0x00010043859c;
  case 4:
    pbVar34 = *(byte **)(param_3 + 8);
  case 0x51:
  case 0xb1:
  case 0xd5:
  case 0xeb:
    goto code_r0x00010043859c;
  case 5:
    pbVar34 = (byte *)(long)(char)param_3[1];
  case 0x78:
code_r0x0001004385dc:
    bVar33 = 2;
    pbStack_218 = pbVar34;
    break;
  case 6:
    pbVar34 = (byte *)(long)*(short *)(param_3 + 2);
    goto code_r0x0001004385dc;
  case 7:
  case 0x48:
  case 0xcc:
  case 0xe2:
    pbVar34 = (byte *)(long)*(int *)(param_3 + 4);
    goto code_r0x0001004385dc;
  case 8:
    pbVar34 = *(byte **)(param_3 + 8);
    goto code_r0x0001004385dc;
  case 9:
    pbVar45 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x43:
  case 0xba:
  case 199:
  case 0xdd:
    pbVar45 = (byte *)(double)SUB84(pbVar45,0);
code_r0x00010043855c:
code_r0x0001004385cc:
    bVar33 = 3;
    pbStack_218 = pbVar45;
    break;
  case 10:
    pbVar45 = *(byte **)(param_3 + 8);
    goto code_r0x0001004385cc;
  case 0xb:
  case 0xa4:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x96:
    ppbVar16 = (byte **)&stack0xffffffffffffffa0;
code_r0x000100438508:
    puVar44 = *(undefined1 **)((long)ppbVar16 + 0x50);
    unaff_x30 = *(undefined8 *)((long)ppbVar16 + 0x58);
    ppbVar17 = ppbVar16;
code_r0x00010043850c:
    unaff_x20 = *(byte **)((long)ppbVar17 + 0x40);
    unaff_x19 = *(byte **)((long)ppbVar17 + 0x48);
    ppbVar18 = ppbVar17;
code_r0x000100438510:
    ppbVar19 = ppbVar18;
code_r0x000100438514:
    ppbVar20 = ppbVar19;
code_r0x000100438518:
    ppbVar21 = (byte **)((long)ppbVar20 + 0x60);
code_r0x000100438520:
    *(byte **)((long)ppbVar21 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar21 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar21 + -0x10) = puVar44;
    *(undefined8 *)((long)ppbVar21 + -8) = unaff_x30;
    *(undefined4 *)((long)ppbVar21 + -0x44) = 0;
    uVar32 = (uint)param_3;
    if (uVar32 < 0x80) {
      *(byte *)((long)ppbVar21 + -0x44) = (byte)param_3;
      uVar30 = 1;
    }
    else {
      bVar33 = (byte)param_3 & 0x3f | 0x80;
      if (uVar32 < 0x800) {
        *(byte *)((long)ppbVar21 + -0x44) = (byte)(uVar32 >> 6) | 0xc0;
        *(byte *)((long)ppbVar21 + -0x43) = bVar33;
        uVar30 = 2;
      }
      else {
        bVar1 = (byte)(uVar32 >> 6) & 0x3f | 0x80;
        if (uVar32 < 0x10000) {
          *(byte *)((long)ppbVar21 + -0x44) = (byte)(uVar32 >> 0xc) | 0xe0;
          *(byte *)((long)ppbVar21 + -0x43) = bVar1;
          *(byte *)((long)ppbVar21 + -0x42) = bVar33;
          uVar30 = 3;
        }
        else {
          *(byte *)((long)ppbVar21 + -0x44) = (byte)(uVar32 >> 0x12) | 0xf0;
          *(byte *)((long)ppbVar21 + -0x43) = (byte)(uVar32 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)ppbVar21 + -0x42) = bVar1;
          *(byte *)((long)ppbVar21 + -0x41) = bVar33;
          uVar30 = 4;
        }
      }
    }
    *(undefined1 **)((long)ppbVar21 + -0x38) = (undefined1 *)((long)ppbVar21 + -0x44);
    *(undefined8 *)((long)ppbVar21 + -0x30) = uVar30;
    *(undefined1 *)((long)ppbVar21 + -0x40) = 5;
    uVar30 = func_0x000108a4a50c((undefined1 *)((long)ppbVar21 + -0x40),
                                 (undefined1 *)((long)ppbVar21 + -0x21),&UNK_10b219790);
    param_2[0] = 0x1d;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined8 *)(param_2 + 8) = uVar30;
    return;
  case 0xc:
    param_3 = param_3 + 8;
    ppbVar22 = (byte **)&stack0xffffffffffffffa0;
  case 0x45:
  case 0x77:
  case 0xb5:
  case 0xc9:
  case 0xdf:
    puVar44 = *(undefined1 **)((long)ppbVar22 + 0x50);
    unaff_x30 = *(undefined8 *)((long)ppbVar22 + 0x58);
    unaff_x20 = *(byte **)((long)ppbVar22 + 0x40);
    unaff_x19 = *(byte **)((long)ppbVar22 + 0x48);
    ppbVar23 = ppbVar22;
code_r0x000100438540:
    unaff_x22 = *(byte **)((long)ppbVar23 + 0x30);
    unaff_x21 = *(byte **)((long)ppbVar23 + 0x38);
    ppbVar24 = ppbVar23;
code_r0x000100438544:
    ppbVar25 = ppbVar24;
code_r0x000100438548:
    ppbVar27 = ppbVar25;
code_r0x00010043854c:
    ppbVar26 = (byte **)((long)ppbVar27 + 0x60);
code_r0x000100438550:
    *(byte **)((long)ppbVar26 + -0x30) = unaff_x22;
    *(byte **)((long)ppbVar26 + -0x28) = unaff_x21;
    *(byte **)((long)ppbVar26 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar26 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar26 + -0x10) = puVar44;
    *(undefined8 *)((long)ppbVar26 + -8) = unaff_x30;
    uVar30 = *(undefined8 *)(param_3 + 8);
    uVar31 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)((long)ppbVar26 + -0x48) = uVar30;
    *(undefined8 *)((long)ppbVar26 + -0x40) = uVar31;
    *(undefined1 *)((long)ppbVar26 + -0x50) = 5;
    uVar31 = func_0x000108a4a50c((undefined1 *)((long)ppbVar26 + -0x50),
                                 (undefined1 *)((long)ppbVar26 + -0x31),&UNK_10b219790);
    param_2[0] = 0x1d;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined8 *)(param_2 + 8) = uVar31;
    if (*(long *)param_3 != 0) {
      _free(uVar30);
    }
    return;
  case 0xd:
    pbStack_218 = *(byte **)(param_3 + 8);
    pbStack_210 = *(byte **)(param_3 + 0x10);
    bVar33 = 5;
  case 0x76:
    break;
  case 0xe:
    param_3 = param_3 + 8;
  case 0x9f:
    ppbVar10 = (byte **)&stack0xffffffffffffffa0;
code_r0x0001004384e0:
    puVar44 = *(undefined1 **)((long)ppbVar10 + 0x50);
    unaff_x30 = *(undefined8 *)((long)ppbVar10 + 0x58);
    ppbVar11 = ppbVar10;
code_r0x0001004384e4:
    unaff_x20 = *(byte **)((long)ppbVar11 + 0x40);
    unaff_x19 = *(byte **)((long)ppbVar11 + 0x48);
    unaff_x22 = *(byte **)((long)ppbVar11 + 0x30);
    unaff_x21 = *(byte **)((long)ppbVar11 + 0x38);
    ppbVar12 = ppbVar11;
code_r0x0001004384ec:
    ppbVar13 = ppbVar12;
code_r0x0001004384f0:
    ppbVar15 = ppbVar13;
code_r0x0001004384f4:
    ppbVar14 = (byte **)((long)ppbVar15 + 0x60);
code_r0x0001004384f8:
    *(byte **)((long)ppbVar14 + -0x30) = unaff_x22;
    *(byte **)((long)ppbVar14 + -0x28) = unaff_x21;
    *(byte **)((long)ppbVar14 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar14 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar14 + -0x10) = puVar44;
    *(undefined8 *)((long)ppbVar14 + -8) = unaff_x30;
    uVar30 = *(undefined8 *)(param_3 + 8);
    uVar31 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)((long)ppbVar14 + -0x48) = uVar30;
    *(undefined8 *)((long)ppbVar14 + -0x40) = uVar31;
    *(undefined1 *)((long)ppbVar14 + -0x50) = 6;
    uVar31 = func_0x000108a4a50c((undefined1 *)((long)ppbVar14 + -0x50),
                                 (undefined1 *)((long)ppbVar14 + -0x31),&UNK_10b219790);
    param_2[0] = 0x1d;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined8 *)(param_2 + 8) = uVar31;
    if (*(long *)param_3 != 0) {
      _free(uVar30);
    }
    return;
  case 0xf:
  case 0x47:
  case 0xb8:
  case 0xcb:
  case 0xe1:
    pbVar34 = *(byte **)(param_3 + 8);
    pbVar36 = *(byte **)(param_3 + 0x10);
  case 0x6e:
    pbStack_218 = pbVar34;
    pbStack_210 = pbVar36;
code_r0x000100438570:
    bVar33 = 6;
    break;
  case 0x10:
  case 0x9b:
    bVar33 = 8;
    break;
  default:
    plVar40 = *(long **)(param_3 + 8);
    pbStack_218 = (byte *)plVar40[1];
    lStack_220 = *plVar40;
    lStack_208 = plVar40[3];
    pbStack_210 = (byte *)plVar40[2];
    thunk_FUN_108802d54(param_2,&lStack_220);
    goto code_r0x0001004381ac;
  case 0x12:
    bVar33 = 7;
    break;
  case 0x13:
    plVar40 = *(long **)(param_3 + 8);
    pbStack_218 = (byte *)plVar40[1];
    lStack_220 = *plVar40;
    lStack_208 = plVar40[3];
    pbStack_210 = (byte *)plVar40[2];
    thunk_FUN_108829860(param_2,&lStack_220);
code_r0x0001004381ac:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar40);
    return;
  case 0x14:
    unaff_x23 = *(byte **)(param_3 + 8);
    unaff_x20 = *(byte **)(param_3 + 0x10);
    unaff_x27 = *(byte **)(param_3 + 0x18);
    unaff_x19 = unaff_x20 + (long)unaff_x27 * 0x20;
    pbStack_b0 = (byte *)0x0;
    unaff_x21 = unaff_x20;
    uStack_d0 = unaff_x20;
    pbStack_c0 = unaff_x23;
    pbStack_b8 = unaff_x19;
    if (unaff_x27 != (byte *)0x0) {
      unaff_x21 = unaff_x20 + 0x20;
      if (*unaff_x20 != 0x16) {
        uVar30 = *(undefined8 *)(unaff_x20 + 9);
        pbVar45 = *(byte **)(unaff_x20 + 1);
        pbStack_c8 = unaff_x21;
        bVar33 = *unaff_x20;
        goto code_r0x000100438278;
      }
    }
    param_3 = &UNK_10b22ed08;
    param_4 = &UNK_10b20a590;
    pbVar43 = (byte *)0x0;
    pbStack_c8 = unaff_x21;
  case 0x68:
    unaff_x22 = (byte *)thunk_FUN_1087e422c(pbVar43,param_3,param_4);
code_r0x000100438220:
    param_2[0] = 0x1d;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(byte **)(param_2 + 8) = unaff_x22;
code_r0x000100438228:
    unaff_x24 = (byte *)(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1);
    while (unaff_x24 = unaff_x24 + -1, unaff_x24 != (byte *)0x0) {
      FUN_100e077ec(unaff_x21);
      unaff_x22 = unaff_x21 + 0x20;
code_r0x000100438248:
      unaff_x21 = unaff_x22;
    }
    if (unaff_x23 == (byte *)0x0) {
      return;
    }
    _free(unaff_x20);
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
    uStack_240 = *(undefined8 *)(param_3 + 8);
    pbStack_250 = *(byte **)(param_3 + 0x10);
    lVar29 = *(long *)(param_3 + 0x18) * 0x40;
    unaff_x19 = pbStack_250 + lVar29;
    unaff_x23 = &bStack_270;
    bStack_270 = 0x16;
    pbStack_230 = (byte *)0x0;
    pbStack_248 = pbStack_250;
    pbStack_238 = unaff_x19;
    if (*(long *)(param_3 + 0x18) == 0) {
      pbStack_278 = (byte *)0x8000000000000000;
      bStack_108 = 0;
      bStack_107 = 0;
      uStack_106 = 0x800000000000;
      goto code_r0x000100438270;
    }
    unaff_x22 = (byte *)0x0;
    unaff_x21 = (byte *)((ulong)&uStack_d0 | 1);
    unaff_x26 = (undefined8 *)((ulong)unaff_x23 | 1);
    puStack_288 = (undefined8 *)((ulong)&uStack_98 | 1);
    pbStack_2b0 = (byte *)((lVar29 - 0x40U >> 6) + 1);
    uStack_27c = 5;
    pbStack_278 = (byte *)0x8000000000000000;
    pbVar42 = (byte *)0x8000000000000000;
    pbVar43 = (byte *)0x8000000000000000;
    unaff_x27 = pbStack_250;
    pbStack_2a8 = (byte *)param_2;
    do {
      unaff_x20 = unaff_x27 + 0x40;
      pbVar34 = (byte *)(ulong)*unaff_x27;
      in_ZR = *unaff_x27 == 0x16;
code_r0x000100437d64:
      unaff_x24 = pbStack_c0;
      unaff_x23 = pbStack_c8;
      pbVar36 = uStack_d0;
      pbVar35 = unaff_x20;
      pbVar28 = unaff_x22;
      if ((bool)in_ZR) break;
      uVar32 = (uint)pbVar34;
      uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,(char)pbVar34);
      pbVar35 = uStack_d0;
      uVar30 = *(undefined8 *)(unaff_x27 + 0x10);
      *(undefined8 *)(unaff_x21 + 0x17) = *(undefined8 *)(unaff_x27 + 0x18);
      *(undefined8 *)(unaff_x21 + 0xf) = uVar30;
      uVar30 = *(undefined8 *)(unaff_x27 + 1);
      *(undefined8 *)(unaff_x21 + 8) = *(undefined8 *)(unaff_x27 + 9);
      *(undefined8 *)unaff_x21 = uVar30;
      uStack_268 = (undefined1)*(undefined8 *)(unaff_x27 + 0x28);
      uStack_267 = (undefined7)((ulong)*(undefined8 *)(unaff_x27 + 0x28) >> 8);
      bStack_270 = (byte)*(undefined8 *)(unaff_x27 + 0x20);
      uStack_26f = (undefined7)((ulong)*(undefined8 *)(unaff_x27 + 0x20) >> 8);
      uStack_258 = *(undefined8 *)(unaff_x27 + 0x38);
      uStack_260 = (undefined1)*(undefined8 *)(unaff_x27 + 0x30);
      uStack_25f = (undefined7)((ulong)*(undefined8 *)(unaff_x27 + 0x30) >> 8);
      if (uVar32 < 0xd) {
        if (uVar32 == 1) {
          uStack_d0._1_1_ = SUB81(pbVar36,1);
          bVar33 = uStack_d0._1_1_;
          if (2 < uStack_d0._1_1_) {
            bVar33 = 3;
          }
          goto code_r0x000100437fa4;
        }
        in_ZR = uVar32 == 4;
        param_4 = pbStack_b8;
code_r0x000100437da8:
        if ((bool)in_ZR) {
          if ((byte *)0x2 < unaff_x23) {
            unaff_x23 = (byte *)0x3;
          }
          uStack_98._1_7_ = CONCAT61(uStack_98._2_6_,(char)unaff_x23);
          goto code_r0x000100437fa8;
        }
        if ((int)pbVar34 == 0xc) {
          if (param_4 == (byte *)0x6) {
            if (*(int *)unaff_x24 != 0x74617473 || *(short *)(unaff_x24 + 4) != 0x7375)
            goto code_r0x000100437f28;
            uStack_98 = (byte *)CONCAT62(uStack_98._2_6_,0x100);
          }
          else if (param_4 == (byte *)0xf) {
            if (*(long *)unaff_x24 != 0x5f656d69746e7572 ||
                *(long *)(unaff_x24 + 7) != 0x64616f6c7961705f) goto code_r0x000100437f28;
            uStack_98 = (byte *)CONCAT62(uStack_98._2_6_,0x200);
          }
          else if ((param_4 == (byte *)0xc) &&
                  (*(long *)unaff_x24 == 0x6c61635f6c6f6f74 && *(int *)(unaff_x24 + 8) == 0x64695f6c
                  )) {
            uStack_98 = (byte *)((ulong)uStack_98._2_6_ << 0x10);
          }
          else {
code_r0x000100437f28:
            uStack_98 = (byte *)CONCAT62(uStack_98._2_6_,0x300);
          }
joined_r0x000100437f00:
          pbVar41 = unaff_x20;
          if (unaff_x23 != (byte *)0x0) {
            _free(unaff_x24);
          }
        }
        else {
code_r0x000100438168:
          pbStack_90 = (byte *)thunk_FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b212a60);
          uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,1);
          pbVar41 = unaff_x20;
        }
      }
      else {
        if (uVar32 == 0xd) {
          if (pbStack_c0 == (byte *)0x6) {
            pbVar36 = (byte *)(ulong)*(ushort *)(pbStack_c8 + 4);
            in_ZR = *(int *)pbStack_c8 == 0x74617473;
code_r0x000100437f94:
            if (!(bool)in_ZR || (int)pbVar36 != 0x7375) goto code_r0x000100437fa0;
            pbVar35 = uStack_d0;
            bVar33 = 1;
          }
          else if (pbStack_c0 == (byte *)0xf) {
            pbVar34 = *(byte **)pbStack_c8;
            pbVar36 = *(byte **)(pbStack_c8 + 7);
            puVar37 = (undefined *)0x7572;
code_r0x000100437f50:
            if (pbVar34 != (byte *)((ulong)puVar37 & 0xffff00000000ffff | 0x5f656d69746e0000) ||
                pbVar36 != (byte *)0x64616f6c7961705f) goto code_r0x000100437fa0;
            pbVar35 = uStack_d0;
            bVar33 = 2;
          }
          else if ((pbStack_c0 == (byte *)0xc) &&
                  (*(long *)pbStack_c8 == 0x6c61635f6c6f6f74 &&
                   *(int *)(pbStack_c8 + 8) == 0x64695f6c)) {
            bVar33 = 0;
          }
          else {
code_r0x000100437fa0:
            pbVar35 = uStack_d0;
            bVar33 = 3;
          }
code_r0x000100437fa4:
          uStack_d0 = pbVar35;
          uStack_98._1_7_ = CONCAT61(uStack_98._2_6_,bVar33);
code_r0x000100437fa8:
          uStack_98 = (byte *)((ulong)uStack_98._1_7_ << 8);
        }
        else {
          if (uVar32 == 0xe) {
            FUN_100b4987c(&uStack_98,pbStack_c0);
            goto joined_r0x000100437f00;
          }
          if (uVar32 != 0xf) goto code_r0x000100438168;
          FUN_100b4987c(&uStack_98,pbStack_c8,pbStack_c0);
        }
        FUN_100e077ec(&uStack_d0);
        pbVar41 = unaff_x20;
      }
      uVar8 = uStack_ff;
      uVar7 = uStack_100;
      uVar5 = uStack_106;
      bVar3 = bStack_107;
      bVar1 = bStack_108;
      bVar33 = bStack_270;
      unaff_x20 = pbStack_290;
      param_2 = (char *)pbStack_298;
      if (((ulong)uStack_98 & 1) != 0) goto code_r0x0001004382fc;
      bStack_108 = (byte)pbVar43;
      bVar2 = bStack_108;
      bStack_107 = (byte)((ulong)pbVar43 >> 8);
      bVar4 = bStack_107;
      uStack_106 = (undefined6)((ulong)pbVar43 >> 0x10);
      uVar6 = uStack_106;
      uStack_100 = SUB81(pbStack_298,0);
      uStack_ff = (undefined7)((ulong)pbStack_298 >> 8);
      if (uStack_98._1_1_ < 2) {
        if (uStack_98._1_1_ == 0) {
          if (pbVar42 != (byte *)0x8000000000000000) {
            pbStack_230 = unaff_x22 + 1;
            uStack_98 = &UNK_108cb8883;
            pbStack_90 = (byte *)0xc;
            uStack_d0 = (byte *)&uStack_98;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_248 = pbVar41;
            uVar30 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
LAB_1004388f4:
            pbStack_2a8[0] = 0x1d;
            pbStack_2a8[1] = 0;
            pbStack_2a8[2] = 0;
            pbStack_2a8[3] = 0;
            pbStack_2a8[4] = 0;
            pbStack_2a8[5] = 0;
            pbStack_2a8[6] = 0;
            pbStack_2a8[7] = 0;
            *(undefined8 *)(pbStack_2a8 + 8) = uVar30;
            unaff_x19 = (byte *)0x1;
            iVar39 = 1;
            goto joined_r0x000100438910;
          }
          bStack_270 = 0x16;
          if (bVar33 == 0x16) {
            pbStack_230 = unaff_x22 + 1;
            pbStack_248 = pbVar41;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100438980;
          }
          uVar30 = *unaff_x26;
          *(undefined8 *)(unaff_x21 + 8) = unaff_x26[1];
          *(undefined8 *)unaff_x21 = uVar30;
          uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
          *(undefined8 *)(unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
          *(undefined8 *)(unaff_x21 + 0xf) = uVar30;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar33);
          bStack_108 = bVar1;
          bStack_107 = bVar3;
          uStack_106 = uVar5;
          uStack_100 = uVar7;
          uStack_ff = uVar8;
          FUN_1004b62d4(&uStack_98,&uStack_d0);
          if (uStack_98 == (byte *)0x8000000000000000) {
            pbStack_230 = unaff_x22 + 1;
            uStack_100 = SUB81(pbStack_298,0);
            uStack_ff = (undefined7)((ulong)pbStack_298 >> 8);
            pbVar36 = (byte *)0x1d;
            pbVar34 = pbStack_90;
            unaff_x21 = pbStack_298;
            pbStack_248 = pbVar41;
            bStack_108 = bVar2;
            bStack_107 = bVar4;
            uStack_106 = uVar6;
            goto code_r0x0001004386cc;
          }
          pbStack_290 = pbStack_90;
          uStack_2a0 = uStack_88;
          pbVar42 = uStack_98;
        }
        else {
          pbVar34 = (byte *)(ulong)uStack_27c;
          bStack_108 = bVar1;
          bStack_107 = bVar3;
          uStack_106 = uVar5;
          uStack_100 = uVar7;
          uStack_ff = uVar8;
code_r0x0001004380c4:
          bVar33 = bStack_270;
          unaff_x20 = pbStack_290;
          param_2 = (char *)pbStack_298;
          if ((int)pbVar34 != 5) {
            pbStack_230 = unaff_x22 + 1;
            bStack_108 = (byte)pbVar43;
            bStack_107 = (byte)((ulong)pbVar43 >> 8);
            uStack_106 = (undefined6)((ulong)pbVar43 >> 0x10);
            uStack_100 = SUB81(pbStack_298,0);
            uStack_ff = (undefined7)((ulong)pbStack_298 >> 8);
            uStack_98 = &UNK_108ca105e;
            pbStack_90 = (byte *)0x6;
            uStack_d0 = (byte *)&uStack_98;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_248 = pbVar41;
            uVar30 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_1004388f4;
          }
          bStack_270 = 0x16;
          if (bVar33 == 0x16) goto code_r0x0001004387c4;
          uVar30 = unaff_x26[1];
          pbVar45 = (byte *)*unaff_x26;
code_r0x0001004380e4:
          *(undefined8 *)(unaff_x21 + 8) = uVar30;
          *(byte **)unaff_x21 = pbVar45;
          uVar30 = *(undefined8 *)((long)unaff_x26 + 0x17);
          pbVar45 = *(byte **)((long)unaff_x26 + 0xf);
code_r0x0001004380ec:
          *(undefined8 *)(unaff_x21 + 0x17) = uVar30;
          *(byte **)(unaff_x21 + 0xf) = pbVar45;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar33);
code_r0x0001004380f4:
          FUN_10131c0f4(&uStack_98,&uStack_d0);
          in_ZR = (byte)uStack_98 == 1;
code_r0x000100438108:
          if ((bool)in_ZR) goto code_r0x0001004382fc;
          uStack_27c = (uint)uStack_98._1_1_;
        }
      }
      else if (uStack_98._1_1_ == 2) {
        if (pbStack_278 != (byte *)0x8000000000000000) {
          pbStack_230 = unaff_x22 + 1;
          unaff_x21 = pbStack_298;
          pbStack_248 = pbVar41;
          goto code_r0x000100438808;
        }
        bStack_270 = 0x16;
        if (bVar33 == 0x16) {
          pbStack_230 = unaff_x22 + 1;
          pbStack_278 = (byte *)0x8000000000000000;
          pbStack_248 = pbVar41;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100438980;
        }
        uVar30 = *unaff_x26;
        puStack_288[1] = unaff_x26[1];
        *puStack_288 = uVar30;
        uVar30 = *(undefined8 *)((long)unaff_x26 + 0xf);
        *(undefined8 *)((long)puStack_288 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
        *(undefined8 *)((long)puStack_288 + 0xf) = uVar30;
        uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar33);
        pbStack_278 = (byte *)0x8000000000000000;
        bStack_108 = bVar1;
        bStack_107 = bVar3;
        uStack_106 = uVar5;
        uStack_100 = uVar7;
        uStack_ff = uVar8;
        FUN_100b1671c(&uStack_d0,&uStack_98);
        if (uStack_d0 == (byte *)0x8000000000000000) {
          pbStack_230 = unaff_x22 + 1;
          pbStack_2a8[0] = 0x1d;
          pbStack_2a8[1] = 0;
          pbStack_2a8[2] = 0;
          pbStack_2a8[3] = 0;
          pbStack_2a8[4] = 0;
          pbStack_2a8[5] = 0;
          pbStack_2a8[6] = 0;
          pbStack_2a8[7] = 0;
          *(byte **)(pbStack_2a8 + 8) = pbStack_c8;
          iVar39 = 1;
          unaff_x23 = &bStack_270;
          unaff_x20 = pbStack_290;
          pbStack_248 = pbVar41;
          goto LAB_1004383e4;
        }
        pbStack_298 = pbStack_c8;
        param_2 = (char *)uStack_d0;
code_r0x0001004380a0:
        pbVar34 = (byte *)&uStack_d0;
        pbVar36 = &bStack_108;
        pbStack_f0 = pbStack_b8;
        uStack_f8 = SUB81(pbStack_c0,0);
        uStack_f7 = (undefined7)((ulong)pbStack_c0 >> 8);
        uStack_e0 = uStack_a8;
        pbStack_e8 = pbStack_b0;
        pbVar43 = (byte *)param_2;
code_r0x0001004380b0:
        *(undefined8 *)(pbVar36 + 0x30) = *(undefined8 *)(pbVar34 + 0x30);
        pbStack_278 = pbVar43;
      }
      else {
        bStack_270 = 0x16;
        if (bVar33 == 0x16) {
code_r0x0001004387c4:
          bStack_270 = 0x16;
          pbVar34 = unaff_x22 + 1;
          goto code_r0x0001004387c8;
        }
        uVar30 = unaff_x26[1];
        pbVar45 = (byte *)*unaff_x26;
        bStack_108 = bVar1;
        bStack_107 = bVar3;
        uStack_106 = uVar5;
        uStack_100 = uVar7;
        uStack_ff = uVar8;
code_r0x000100438130:
        *(undefined8 *)(unaff_x21 + 8) = uVar30;
        *(byte **)unaff_x21 = pbVar45;
        uVar30 = *(undefined8 *)((long)unaff_x26 + 0x17);
        pbVar45 = *(byte **)((long)unaff_x26 + 0xf);
code_r0x000100438138:
        *(undefined8 *)(unaff_x21 + 0x17) = uVar30;
        *(byte **)(unaff_x21 + 0xf) = pbVar45;
        uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar33);
        FUN_100e077ec(&uStack_d0);
      }
      pbVar36 = unaff_x27 + 0x40;
      unaff_x22 = unaff_x22 + 1;
      pbVar35 = unaff_x19;
      pbVar28 = pbStack_2b0;
      unaff_x27 = pbVar41;
    } while (pbVar36 != unaff_x19);
    bStack_108 = (byte)pbVar43;
    bStack_107 = (byte)((ulong)pbVar43 >> 8);
    uStack_106 = (undefined6)((ulong)pbVar43 >> 0x10);
    uStack_100 = SUB81(pbStack_298,0);
    uStack_ff = (undefined7)((ulong)pbStack_298 >> 8);
    pbVar34 = (byte *)0x8000000000000000;
    in_ZR = pbVar42 == (byte *)0x8000000000000000;
    unaff_x20 = pbStack_290;
    unaff_x21 = pbStack_298;
    pbStack_248 = pbVar35;
    pbStack_230 = pbVar28;
  case 0x26:
    uVar38 = uStack_2a0;
    if ((bool)in_ZR) {
code_r0x00010043836c:
      unaff_x23 = &bStack_270;
      pbVar43 = pbStack_2a8;
code_r0x000100438374:
      uStack_98 = &UNK_108cb8883;
      pbStack_90 = (byte *)0xc;
      uStack_d0 = (byte *)&uStack_98;
      pbStack_c8 = &DAT_100c7b3a0;
code_r0x000100438394:
      pbVar42 = (byte *)0x0;
      param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010043839c:
      param_2 = (char *)thunk_FUN_108856088(param_2 + 0x8f7,&uStack_d0);
code_r0x0001004383a8:
      pbVar43[0] = 0x1d;
      pbVar43[1] = 0;
      pbVar43[2] = 0;
      pbVar43[3] = 0;
      pbVar43[4] = 0;
      pbVar43[5] = 0;
      pbVar43[6] = 0;
      pbVar43[7] = 0;
      *(char **)(pbVar43 + 8) = param_2;
code_r0x0001004383b0:
      unaff_x19 = (byte *)0x1;
      pbVar35 = (byte *)0x8000000000000000;
      pbVar36 = pbStack_278;
code_r0x0001004383bc:
      pbVar34 = pbVar36;
      in_ZR = pbVar34 == pbVar35;
code_r0x0001004383c4:
      iVar39 = (int)unaff_x19;
      pbVar36 = pbVar34;
      param_2 = (char *)unaff_x21;
    }
    else {
code_r0x000100438418:
      puVar37 = (undefined *)(ulong)uStack_27c;
      in_ZR = uStack_27c == 5;
code_r0x000100438420:
      unaff_x23 = &bStack_270;
      unaff_x19 = pbStack_2a8;
      if ((bool)in_ZR) {
        pbVar34 = &UNK_108ca1000;
code_r0x000100438430:
        pbVar34 = pbVar34 + 0x5e;
        pbVar36 = (byte *)0x6;
code_r0x000100438438:
        uStack_98 = pbVar34;
        pbStack_90 = pbVar36;
code_r0x00010043843c:
        pbVar34 = (byte *)&uStack_98;
code_r0x000100438440:
        pbVar36 = &UNK_100c7b000;
code_r0x000100438444:
        pbVar36 = pbVar36 + 0x3a0;
code_r0x000100438448:
        param_2 = s_missing_field_____108ac28f7;
        uStack_d0 = pbVar34;
        pbStack_c8 = pbVar36;
code_r0x000100438454:
        param_3 = (byte *)&uStack_d0;
code_r0x000100438458:
        param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
code_r0x00010043845c:
      }
      else {
code_r0x000100438460:
        pbVar36 = pbStack_278;
code_r0x000100438464:
        if (pbVar36 != pbVar34) {
          *(byte **)(unaff_x19 + 0x38) = pbStack_f0;
          *(ulong *)(unaff_x19 + 0x30) = CONCAT71(uStack_f7,uStack_f8);
          *(undefined8 *)(unaff_x19 + 0x48) = uStack_e0;
          *(byte **)(unaff_x19 + 0x40) = pbStack_e8;
          *(undefined8 *)(unaff_x19 + 0x50) = uStack_d8;
          unaff_x19[0] = 0x11;
          unaff_x19[1] = 0;
          unaff_x19[2] = 0;
          unaff_x19[3] = 0;
          unaff_x19[4] = 0;
          unaff_x19[5] = 0;
          unaff_x19[6] = 0;
          unaff_x19[7] = 0;
          *(byte **)(unaff_x19 + 8) = pbVar42;
          *(byte **)(unaff_x19 + 0x10) = unaff_x20;
          *(ulong *)(unaff_x19 + 0x18) = uVar38;
          *(byte **)(unaff_x19 + 0x20) = pbVar36;
          *(byte **)(unaff_x19 + 0x28) = unaff_x21;
          unaff_x19[0x58] = (byte)puVar37;
          _memcpy(&lStack_220,unaff_x19,0x118);
          lVar29 = FUN_100fbc67c(&bStack_270);
          if (lVar29 == 0) {
            return;
          }
          unaff_x19[0] = 0x1d;
          unaff_x19[1] = 0;
          unaff_x19[2] = 0;
          unaff_x19[3] = 0;
          unaff_x19[4] = 0;
          unaff_x19[5] = 0;
          unaff_x19[6] = 0;
          unaff_x19[7] = 0;
          *(long *)(unaff_x19 + 8) = lVar29;
          goto code_r0x000100438678;
        }
        pbVar34 = &UNK_108cba000;
code_r0x000100438470:
        pbVar35 = pbVar34 + 0xce7;
code_r0x000100438474:
        pbStack_90 = (byte *)0xf;
        pbVar34 = (byte *)&uStack_98;
        pbVar36 = &UNK_100c7b000;
        uStack_98 = pbVar35;
code_r0x000100438484:
        pbVar36 = pbVar36 + 0x3a0;
code_r0x000100438488:
        uStack_d0 = pbVar34;
        pbStack_c8 = pbVar36;
FUN_10043848c:
        param_2 = s_missing_field_____108ac28f7;
code_r0x000100438494:
        param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_d0);
      }
LAB_10043849c:
      unaff_x19[0] = 0x1d;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      unaff_x19[4] = 0;
      unaff_x19[5] = 0;
      unaff_x19[6] = 0;
      unaff_x19[7] = 0;
      *(char **)(unaff_x19 + 8) = param_2;
code_r0x0001004384a4:
      param_2 = (char *)unaff_x20;
      unaff_x20 = (byte *)param_2;
      if (pbVar42 != (byte *)0x0) {
code_r0x0001004384ac:
        _free(param_2);
      }
LAB_1004384b0:
      unaff_x19 = (byte *)0x0;
code_r0x0001004384b4:
      pbVar34 = (byte *)0x8000000000000000;
code_r0x0001004384b8:
      pbVar36 = pbStack_278;
code_r0x0001004384bc:
      in_ZR = pbVar36 == pbVar34;
code_r0x0001004384c0:
      iVar39 = (int)unaff_x19;
      param_2 = (char *)unaff_x21;
    }
    if (!(bool)in_ZR) {
joined_r0x000100438850:
      pbVar34 = pbStack_f0;
      if (pbVar36 != (byte *)0x0) {
code_r0x0001004383d0:
        _free(param_2);
        pbVar34 = pbStack_f0;
      }
code_r0x0001004383d8:
      iVar39 = (int)unaff_x19;
      if (pbVar34 != (byte *)0x0) {
        _free(pbStack_e8);
      }
    }
LAB_1004383e4:
    if (iVar39 != 0) {
code_r0x0001004383e8:
      pbVar34 = (byte *)((ulong)pbVar42 & 0x7fffffffffffffff);
code_r0x0001004383ec:
      if (pbVar34 != (byte *)0x0) {
code_r0x0001004383f0:
        _free(unaff_x20);
      }
    }
LAB_1004383f8:
    FUN_100d34830(unaff_x23 + 0x20);
code_r0x000100438400:
    in_ZR = bStack_270 == 0x16;
code_r0x000100438408:
    if ((bool)in_ZR) {
      return;
    }
    param_2 = (char *)&bStack_270;
code_r0x000100438410:
    FUN_100e077ec(param_2);
    return;
  case 0x16:
  case 0xff:
    goto code_r0x000100438420;
  case 0x17:
  case 0x8d:
  case 0xa5:
  case 0xf8:
    goto code_r0x000100438430;
  case 0x18:
  case 0xf2:
    goto LAB_1004383f8;
  case 0x19:
    goto code_r0x000100438410;
  case 0x1a:
    goto code_r0x0001004383bc;
  case 0x1b:
    goto code_r0x000100438440;
  case 0x1c:
  case 0x9e:
    goto code_r0x000100438458;
  case 0x1d:
  case 0xf7:
    goto code_r0x000100438418;
  case 0x1e:
    goto code_r0x000100438470;
  case 0x1f:
    goto code_r0x0001004383ec;
  case 0x20:
  case 0xa6:
    goto code_r0x000100438460;
  case 0x21:
  case 0xf6:
    goto code_r0x000100438394;
  case 0x22:
  case 0xfb:
    goto code_r0x0001004383c4;
  case 0x23:
  case 0xfa:
    goto code_r0x000100438448;
  case 0x24:
  case 0x6a:
  case 0xfd:
    goto code_r0x00010043836c;
  case 0x25:
  case 0x88:
  case 0xaa:
    goto code_r0x000100438400;
  case 0x28:
    goto code_r0x0001004384c0;
  case 0x29:
    goto code_r0x0001004380b0;
  case 0x2a:
  case 0xc3:
    goto code_r0x0001004380f4;
  case 0x2c:
    goto code_r0x000100438788;
  case 0x2d:
    goto code_r0x000100438798;
  case 0x2e:
    goto code_r0x000100438760;
  case 0x2f:
    goto code_r0x000100438778;
  case 0x30:
    goto code_r0x000100438724;
  case 0x31:
    goto code_r0x0001004387a8;
  case 0x32:
    goto code_r0x0001004387c0;
  case 0x33:
    goto code_r0x000100438780;
  case 0x34:
    goto code_r0x0001004387d8;
  case 0x35:
    goto code_r0x000100438754;
  case 0x36:
code_r0x0001004387c8:
    bStack_108 = (byte)pbVar43;
    bStack_107 = (byte)((ulong)pbVar43 >> 8);
    uStack_106 = (undefined6)((ulong)pbVar43 >> 0x10);
    uStack_100 = SUB81(pbStack_298,0);
    uStack_ff = (undefined7)((ulong)pbStack_298 >> 8);
    pbStack_248 = pbVar41;
    pbStack_230 = pbVar34;
code_r0x0001004387d8:
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100438980:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100438984);
    (*pcVar9)();
  case 0x37:
    goto code_r0x0001004386fc;
  case 0x38:
    goto code_r0x00010043872c;
  case 0x39:
    goto code_r0x0001004387b0;
  case 0x3a:
    goto code_r0x0001004386d4;
  case 0x3b:
    goto code_r0x000100438768;
  case 0x3c:
code_r0x0001004386cc:
    *(byte **)pbStack_2a8 = pbVar36;
    *(byte **)(pbStack_2a8 + 8) = pbVar34;
code_r0x0001004386d4:
    unaff_x19 = (byte *)0x1;
    pbVar42 = (byte *)0x0;
code_r0x000100438324:
    iVar39 = (int)unaff_x19;
    unaff_x20 = pbStack_290;
    param_2 = (char *)unaff_x21;
joined_r0x000100438910:
    unaff_x23 = &bStack_270;
    pbVar36 = pbStack_278;
    if (pbStack_278 != (byte *)0x8000000000000000) goto joined_r0x000100438850;
    goto LAB_1004383e4;
  case 0x3e:
code_r0x000100438808:
    uStack_98 = &UNK_108cbace7;
    pbStack_90 = (byte *)0xf;
    uStack_d0 = (byte *)&uStack_98;
    pbStack_c8 = &DAT_100c7b3a0;
    uVar30 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
    unaff_x23 = &bStack_270;
    pbStack_2a8[0] = 0x1d;
    pbStack_2a8[1] = 0;
    pbStack_2a8[2] = 0;
    pbStack_2a8[3] = 0;
    pbStack_2a8[4] = 0;
    pbStack_2a8[5] = 0;
    pbStack_2a8[6] = 0;
    pbStack_2a8[7] = 0;
    *(undefined8 *)(pbStack_2a8 + 8) = uVar30;
    unaff_x19 = (byte *)0x1;
    param_2 = (char *)unaff_x21;
    pbVar36 = pbStack_278;
    goto joined_r0x000100438850;
  case 0x3f:
    goto code_r0x000100437d64;
  case 0x40:
    goto code_r0x000100437da8;
  case 0x42:
  case 0xc6:
  case 0xdc:
    goto code_r0x000100438548;
  case 0x44:
  case 200:
  case 0xde:
    goto code_r0x000100438520;
  case 0x46:
  case 0xa7:
  case 0xb9:
  case 0xca:
  case 0xe0:
    goto code_r0x0001004384e4;
  case 0x49:
  case 0xbd:
  case 0xcd:
  case 0xe3:
    goto code_r0x000100438540;
  case 0x4b:
  case 0xcf:
  case 0xe5:
    goto code_r0x000100438514;
  case 0x4d:
  case 0x9a:
  case 0xbc:
  case 0xd1:
  case 0xe7:
    goto code_r0x0001004384bc;
  case 0x4e:
  case 0xd2:
  case 0xe8:
    goto code_r0x0001004384ec;
  case 0x4f:
  case 0xd3:
  case 0xe9:
    goto code_r0x000100438570;
  case 0x50:
  case 0x9c:
  case 0xd4:
  case 0xea:
    goto code_r0x000100438494;
  case 0x52:
  case 0x91:
  case 0xbb:
  case 0xd6:
  case 0xec:
    goto FUN_10043848c;
  case 0x54:
  case 0xd8:
  case 0xee:
    goto code_r0x0001004385e8;
  case 0x55:
  case 0x81:
  case 0xd9:
  case 0xef:
    goto code_r0x0001004380ec;
  case 0x56:
  case 0x82:
  case 0xda:
  case 0xf0:
    goto code_r0x000100438130;
  case 0x58:
    goto code_r0x0001004382d4;
  case 0x59:
    goto code_r0x0001004382e4;
  case 0x5a:
    goto code_r0x0001004382ac;
  case 0x5b:
    goto code_r0x0001004382c4;
  case 0x5c:
code_r0x000100438270:
    goto code_r0x000100438374;
  case 0x5d:
    goto code_r0x0001004382f4;
  case 0x5e:
    goto code_r0x00010043830c;
  case 0x5f:
    goto code_r0x0001004382cc;
  case 0x60:
    goto code_r0x000100438324;
  case 0x61:
    goto code_r0x0001004382a0;
  case 0x62:
    goto code_r0x000100438314;
  case 99:
    goto code_r0x000100438248;
  case 100:
code_r0x000100438278:
    bStack_270 = bVar33;
    uStack_267 = (undefined7)uVar30;
    uStack_26f = SUB87(pbVar45,0);
    uStack_268 = (undefined1)((ulong)pbVar45 >> 0x38);
    uStack_258 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_260 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
    uStack_25f = (undefined7)((ulong)*(undefined8 *)(unaff_x20 + 0x10) >> 8);
    pbStack_b0 = (byte *)0x1;
    FUN_1004b62d4(&bStack_108,&bStack_270);
    unaff_x24 = (byte *)CONCAT62(uStack_106,CONCAT11(bStack_107,bStack_108));
    unaff_x22 = (byte *)CONCAT71(uStack_ff,uStack_100);
code_r0x0001004382a0:
    if (unaff_x24 != (byte *)0x8000000000000000) {
code_r0x0001004382ac:
      if (unaff_x27 == (byte *)0x1) {
code_r0x0001004382cc:
        pbVar43 = (byte *)0x1;
code_r0x0001004382d0:
        param_3 = &UNK_10b22e000;
code_r0x0001004382d4:
        pbVar43 = (byte *)thunk_FUN_1087e422c(pbVar43,param_3 + 0xd08,&UNK_10b20a590);
      }
      else {
code_r0x0001004382b4:
        unaff_x26 = (undefined8 *)CONCAT71(uStack_f7,uStack_f8);
        unaff_x21 = unaff_x20 + 0x40;
        pbVar34 = (byte *)(ulong)unaff_x20[0x20];
        pbStack_c8 = unaff_x21;
code_r0x0001004382c4:
        if ((int)pbVar34 == 0x16) goto code_r0x0001004382cc;
        uStack_267 = (undefined7)*(undefined8 *)(unaff_x20 + 0x29);
        uStack_26f = (undefined7)*(undefined8 *)(unaff_x20 + 0x21);
        uStack_268 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x21) >> 0x38);
        uStack_258 = *(undefined8 *)(unaff_x20 + 0x38);
        uStack_260 = (undefined1)*(undefined8 *)(unaff_x20 + 0x30);
        uStack_25f = (undefined7)((ulong)*(undefined8 *)(unaff_x20 + 0x30) >> 8);
        pbStack_b0 = (byte *)0x2;
        bStack_270 = (byte)pbVar34;
code_r0x0001004386fc:
        FUN_10131c0f4(&bStack_108,&bStack_270);
        if ((bStack_108 & 1) == 0) {
          if (unaff_x27 != (byte *)0x2) {
            unaff_x27 = (byte *)(ulong)bStack_107;
code_r0x000100438724:
            unaff_x21 = unaff_x20 + 0x60;
            pbStack_c8 = unaff_x21;
code_r0x00010043872c:
            if (unaff_x20[0x40] != 0x16) {
              uVar30 = *(undefined8 *)(unaff_x20 + 0x41);
              uStack_ff = (undefined7)*(undefined8 *)(unaff_x20 + 0x49);
              bStack_107 = (byte)uVar30;
              uStack_106 = (undefined6)((ulong)uVar30 >> 8);
              uStack_100 = (undefined1)((ulong)uVar30 >> 0x38);
              pbStack_f0 = *(byte **)(unaff_x20 + 0x58);
              uStack_f8 = (undefined1)*(undefined8 *)(unaff_x20 + 0x50);
              uStack_f7 = (undefined7)((ulong)*(undefined8 *)(unaff_x20 + 0x50) >> 8);
              pbVar36 = (byte *)0x3;
              bVar33 = unaff_x20[0x40];
code_r0x000100438754:
              bStack_108 = bVar33;
              pbVar43 = &bStack_270;
              pbStack_b0 = pbVar36;
code_r0x000100438760:
              FUN_100b1671c(pbVar43,&bStack_108);
code_r0x000100438768:
              pbVar34 = (byte *)CONCAT71(uStack_26f,bStack_270);
              pbVar43 = (byte *)CONCAT71(uStack_267,uStack_268);
              if (pbVar34 != (byte *)0x8000000000000000) {
code_r0x000100438778:
                *(undefined8 *)(param_2 + 0x38) = uStack_258;
                *(ulong *)(param_2 + 0x30) = CONCAT71(uStack_25f,uStack_260);
                *(byte **)(param_2 + 0x48) = pbStack_248;
                *(byte **)(param_2 + 0x40) = pbStack_250;
code_r0x000100438780:
                *(undefined8 *)(param_2 + 0x50) = uStack_240;
code_r0x000100438788:
                param_2[0] = 0x11;
                param_2[1] = 0;
                param_2[2] = 0;
                param_2[3] = 0;
                param_2[4] = 0;
                param_2[5] = 0;
                param_2[6] = 0;
                param_2[7] = 0;
                *(byte **)(param_2 + 8) = unaff_x24;
                *(byte **)(param_2 + 0x10) = unaff_x22;
                *(undefined8 **)(param_2 + 0x18) = unaff_x26;
                *(byte **)(param_2 + 0x20) = pbVar34;
                *(byte **)(param_2 + 0x28) = pbVar43;
code_r0x000100438798:
                param_2[0x58] = (byte)unaff_x27;
                pbVar43 = (byte *)&lStack_220;
                param_4 = (byte *)0x118;
                param_3 = (byte *)param_2;
code_r0x0001004387a8:
                _memcpy(pbVar43,param_3,param_4);
                pbVar43 = (byte *)&uStack_d0;
code_r0x0001004387b0:
                lVar29 = FUN_100fbc738(pbVar43);
                if (lVar29 == 0) {
                  return;
                }
                param_2[0] = 0x1d;
                param_2[1] = 0;
                param_2[2] = 0;
                param_2[3] = 0;
                param_2[4] = 0;
                param_2[5] = 0;
                param_2[6] = 0;
                param_2[7] = 0;
                *(long *)(param_2 + 8) = lVar29;
code_r0x0001004387c0:
code_r0x000100438678:
                FUN_100e35e0c(&lStack_220);
                return;
              }
              goto code_r0x0001004382e4;
            }
          }
          pbVar43 = (byte *)0x2;
          goto code_r0x0001004382d0;
        }
        pbVar43 = (byte *)CONCAT71(uStack_ff,uStack_100);
      }
code_r0x0001004382e4:
      pbVar28 = unaff_x22;
      param_2[0] = 0x1d;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *(byte **)(param_2 + 8) = pbVar43;
      if (unaff_x24 != (byte *)0x0) {
code_r0x0001004382f4:
        _free(pbVar28);
      }
      goto code_r0x000100438228;
    }
    goto code_r0x000100438220;
  case 0x65:
code_r0x0001004382fc:
    pbStack_230 = unaff_x22 + 1;
    unaff_x21 = pbStack_298;
    pbStack_248 = pbVar41;
code_r0x00010043830c:
    bStack_108 = (byte)pbVar43;
    bStack_107 = (byte)((ulong)pbVar43 >> 8);
    uStack_106 = (undefined6)((ulong)pbVar43 >> 0x10);
    uStack_100 = SUB81(unaff_x21,0);
    uStack_ff = (undefined7)((ulong)unaff_x21 >> 8);
    pbVar34 = pbStack_90;
code_r0x000100438314:
    pbStack_2a8[0] = 0x1d;
    pbStack_2a8[1] = 0;
    pbStack_2a8[2] = 0;
    pbStack_2a8[3] = 0;
    pbStack_2a8[4] = 0;
    pbStack_2a8[5] = 0;
    pbStack_2a8[6] = 0;
    pbStack_2a8[7] = 0;
    *(byte **)(pbStack_2a8 + 8) = pbVar34;
    unaff_x19 = (byte *)0x1;
    goto code_r0x000100438324;
  case 0x66:
    goto code_r0x000100438220;
  case 0x67:
    goto code_r0x0001004382b4;
  case 0x6b:
    goto code_r0x000100437f50;
  case 0x6c:
    goto code_r0x000100437f94;
  case 0x70:
    goto code_r0x000100438544;
  case 0x71:
  case 0xac:
    goto code_r0x00010043855c;
  case 0x72:
  case 0xb3:
    goto code_r0x000100438508;
  case 0x74:
    goto code_r0x0001004385a4;
  case 0x79:
    goto code_r0x0001004384e0;
  case 0x7a:
  case 0xb7:
    goto code_r0x000100438510;
  case 0x7b:
    goto code_r0x000100438594;
  case 0x7c:
    goto code_r0x0001004384b8;
  case 0x7d:
    goto code_r0x00010043854c;
  case 0x7e:
    goto LAB_1004384b0;
  case 0x80:
    goto code_r0x00010043860c;
  case 0x84:
  case 0xbe:
    goto code_r0x000100438464;
  case 0x85:
    goto code_r0x000100438474;
  case 0x86:
    goto code_r0x00010043843c;
  case 0x87:
    goto code_r0x000100438454;
  case 0x89:
    goto code_r0x000100438484;
  case 0x8a:
  case 0xa9:
    goto LAB_10043849c;
  case 0x8b:
  case 0xc0:
    goto code_r0x00010043845c;
  case 0x8c:
  case 0xa1:
  case 0xb4:
    goto code_r0x0001004384b4;
  case 0x8e:
    goto code_r0x0001004384a4;
  case 0x8f:
    goto code_r0x0001004383d8;
  case 0x90:
  case 0xa8:
  case 0xf3:
    goto code_r0x000100438408;
  case 0x92:
    goto code_r0x0001004383b0;
  case 0x93:
    goto code_r0x000100438444;
  case 0x94:
    goto code_r0x0001004383a8;
  case 0x97:
    goto code_r0x0001004380a0;
  case 0x98:
    goto code_r0x0001004380e4;
  case 0x9d:
    goto code_r0x0001004384ac;
  case 0xa0:
    goto code_r0x0001004384f4;
  case 0xa2:
    goto code_r0x00010043850c;
  case 0xa3:
    goto code_r0x000100438488;
  case 0xad:
    goto code_r0x0001004380c4;
  case 0xae:
    goto code_r0x000100438108;
  case 0xb0:
    goto code_r0x000100438518;
  case 0xb2:
    goto code_r0x0001004384f0;
  case 0xb6:
    goto code_r0x000100438550;
  case 0xbf:
    goto code_r0x0001004384f8;
  case 0xc4:
    goto code_r0x000100438138;
  case 0xf4:
    goto code_r0x0001004383d0;
  case 0xf5:
    goto code_r0x0001004383e8;
  case 0xf9:
    goto code_r0x0001004383f0;
  case 0xfc:
    goto code_r0x000100438438;
  case 0xfe:
    goto code_r0x00010043839c;
  }
  lStack_220 = CONCAT71(lStack_220._1_7_,bVar33);
code_r0x0001004385e8:
  uVar30 = FUN_107c05dcc(&lStack_220,auStack_71,&UNK_10b219790);
  param_2[0] = 0x1d;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined8 *)(param_2 + 8) = uVar30;
code_r0x00010043860c:
  return;
}

