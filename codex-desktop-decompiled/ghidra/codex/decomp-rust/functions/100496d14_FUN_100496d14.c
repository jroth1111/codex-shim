
/* WARNING: Type propagation algorithm not settling */

void FUN_100496d14(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,byte *******param_4
                  ,undefined *param_5)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte ******ppppppbVar18;
  uint uVar19;
  byte bVar20;
  byte *******pppppppbVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  byte ******ppppppbVar27;
  byte *******unaff_x19;
  byte *******unaff_x20;
  byte *******pppppppbVar28;
  byte *******unaff_x21;
  byte *******unaff_x22;
  byte *******unaff_x23;
  byte *******pppppppbVar29;
  long lVar30;
  byte *******unaff_x25;
  byte *******pppppppbVar31;
  byte *******unaff_x26;
  byte *******pppppppbVar32;
  byte *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar33;
  undefined8 unaff_x30;
  byte *******pppppppbVar34;
  byte *******pppppppbVar35;
  byte *******pppppppbVar36;
  byte *******pppppppbVar37;
  byte abStack_3b0 [80];
  byte *******pppppppbStack_360;
  byte *******pppppppbStack_358;
  byte *******pppppppbStack_350;
  byte *******pppppppbStack_348;
  byte *******pppppppbStack_340;
  undefined8 *puStack_338;
  byte bStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  byte ******ppppppbStack_318;
  byte *******pppppppbStack_310;
  byte *******pppppppbStack_308;
  byte ******ppppppbStack_300;
  byte *******pppppppbStack_2f8;
  byte *******pppppppbStack_2f0;
  byte *******pppppppbStack_2e0;
  byte *******pppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  byte ******ppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f0;
  byte ******ppppppbStack_e8;
  byte ******ppppppbStack_e0;
  byte bStack_d8;
  char cStack_d7;
  undefined6 uStack_d6;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  byte ******ppppppbStack_c0;
  byte ******ppppppbStack_b8;
  byte ******ppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte ******ppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbVar8;
  byte *******pppppppbVar14;
  
  ppppppbVar18 = param_2._8_8_;
  ppppppbVar27 = param_2._0_8_;
  pppppppbVar37 = param_1._8_8_;
  pppppppbVar35 = param_1._0_8_;
  puVar33 = &stack0xfffffffffffffff0;
  pppppppbVar13 = (byte *******)&pppppppbStack_360;
  pppppppbVar7 = (byte *******)&pppppppbStack_360;
  pppppppbVar29 = (byte *******)&bStack_d8;
  bVar20 = *(byte *)param_4;
  pppppppbVar21 = (byte *******)(ulong)bVar20;
  pppppppbVar25 = (byte *******)&UNK_108c99e64;
  pppppppbVar26 =
       (byte *******)
       (&UNK_100496d58 + (ulong)*(ushort *)(&UNK_108c99e64 + (long)pppppppbVar21 * 2) * 4);
  pppppppbVar15 = (byte *******)&pppppppbStack_360;
  pppppppbVar16 = (byte *******)&pppppppbStack_360;
  pppppppbVar17 = (byte *******)&pppppppbStack_360;
  pppppppbVar9 = (byte *******)&pppppppbStack_360;
  pppppppbVar10 = (byte *******)&pppppppbStack_360;
  pppppppbVar11 = (byte *******)&pppppppbStack_360;
  pppppppbVar12 = (byte *******)&pppppppbStack_360;
  pppppppbVar14 = (byte *******)&pppppppbStack_360;
  pppppppbVar5 = (byte *******)&pppppppbStack_360;
  pppppppbVar6 = (byte *******)&pppppppbStack_360;
  pppppppbVar8 = (byte *******)&pppppppbStack_360;
  pppppppbVar28 = (byte *******)param_3;
  pppppppbVar31 = unaff_x25;
  pppppppbVar32 = unaff_x26;
  pppppppbVar34 = pppppppbVar35;
  pppppppbVar36 = pppppppbVar37;
  switch(bVar20) {
  case 0:
    bVar20 = *(byte *)((long)param_4 + 1);
  case 0x30:
  case 0x74:
  case 0xd3:
    pppppppbStack_2e0 = (byte *******)((ulong)CONCAT61(pppppppbStack_2e0._2_6_,bVar20) << 8);
code_r0x000100497634:
    pppppppbStack_2e0 = (byte *******)((ulong)pppppppbStack_2e0 & 0xffffffffffffff00);
code_r0x000100497638:
    goto code_r0x00010049768c;
  case 1:
    pppppppbVar21 = (byte *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0x54:
  case 0xcc:
code_r0x000100497640:
    pppppppbStack_2d8 = pppppppbVar21;
code_r0x000100497644:
    bVar20 = 1;
code_r0x000100497648:
    break;
  case 2:
  case 0x67:
    pppppppbVar21 = (byte *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x37:
  case 0x6f:
  case 0xb4:
  case 0xc6:
    goto code_r0x000100497640;
  case 3:
  case 0x5f:
    pppppppbVar21 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x7b:
    goto code_r0x000100497640;
  case 4:
  case 0x4f:
  case 100:
    pppppppbVar21 = (byte *******)param_4[1];
    goto code_r0x000100497640;
  case 5:
  case 0x65:
  case 0xbf:
    pppppppbVar21 = (byte *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0xec:
    goto code_r0x000100497680;
  case 6:
  case 0x62:
  case 0xb7:
    pppppppbVar21 = (byte *******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x000100497680;
  case 7:
  case 0x58:
    pppppppbVar21 = (byte *******)(long)*(int *)((long)param_4 + 4);
  case 0xcb:
    goto code_r0x000100497680;
  case 8:
  case 0xb1:
    pppppppbVar21 = (byte *******)param_4[1];
    goto code_r0x000100497680;
  case 9:
  case 0x6e:
  case 0xc9:
    pppppppbVar35 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x5a:
    pppppppbVar35 = (byte *******)(double)SUB84(pppppppbVar35,0);
code_r0x000100497600:
    pppppppbStack_2d8 = pppppppbVar35;
code_r0x000100497674:
    bVar20 = 3;
    break;
  case 10:
  case 0x2e:
  case 0xb0:
    pppppppbStack_2d8 = (byte *******)param_4[1];
    goto code_r0x000100497674;
  case 0xb:
  case 0x42:
    param_4 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0xca:
    pppppppbVar9 = (byte *******)&stack0xffffffffffffffa0;
code_r0x0001004975ac:
    puVar33 = *(undefined1 **)((long)pppppppbVar9 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppbVar9 + 0x58);
    pppppppbVar10 = pppppppbVar9;
code_r0x0001004975b0:
    unaff_x20 = *(byte ********)((long)pppppppbVar10 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar10 + 0x48);
    pppppppbVar11 = pppppppbVar10;
code_r0x0001004975b4:
    pppppppbVar12 = pppppppbVar11;
code_r0x0001004975b8:
    pppppppbVar14 = pppppppbVar12;
code_r0x0001004975c0:
    pppppppbVar13 = (byte *******)((long)pppppppbVar14 + 0x60);
code_r0x0001004975c4:
    *(byte ********)((long)pppppppbVar13 + -0x20) = unaff_x20;
    *(byte ********)((long)pppppppbVar13 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar13 + -0x10) = puVar33;
    *(undefined8 *)((long)pppppppbVar13 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppbVar13 + -0x44) = 0;
    uVar19 = (uint)param_4;
    if (uVar19 < 0x80) {
      *(byte *)((long)pppppppbVar13 + -0x44) = (byte)param_4;
      uVar22 = 1;
    }
    else {
      bVar20 = (byte)param_4 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        *(byte *)((long)pppppppbVar13 + -0x44) = (byte)(uVar19 >> 6) | 0xc0;
        *(byte *)((long)pppppppbVar13 + -0x43) = bVar20;
        uVar22 = 2;
      }
      else {
        bVar1 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          *(byte *)((long)pppppppbVar13 + -0x44) = (byte)(uVar19 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppbVar13 + -0x43) = bVar1;
          *(byte *)((long)pppppppbVar13 + -0x42) = bVar20;
          uVar22 = 3;
        }
        else {
          *(byte *)((long)pppppppbVar13 + -0x44) = (byte)(uVar19 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppbVar13 + -0x43) = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppbVar13 + -0x42) = bVar1;
          *(byte *)((long)pppppppbVar13 + -0x41) = bVar20;
          uVar22 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppbVar13 + -0x38) = (undefined1 *)((long)pppppppbVar13 + -0x44);
    *(undefined8 *)((long)pppppppbVar13 + -0x30) = uVar22;
    *(undefined1 *)((long)pppppppbVar13 + -0x40) = 5;
    ppppppbVar27 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar13 + -0x40),
                                       (undefined1 *)((long)pppppppbVar13 + -0x21),&UNK_10b21c2d0);
    *(byte *******)param_3 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_3 + 8) = ppppppbVar27;
    return;
  case 0xc:
  case 0x70:
    param_4 = param_4 + 1;
  case 0xcf:
code_r0x0001004975d8:
    pppppppbVar15 = (byte *******)&stack0xffffffffffffffa0;
    puVar33 = unaff_x29;
code_r0x0001004975e0:
    unaff_x20 = *(byte ********)((long)pppppppbVar15 + 0x40);
    unaff_x19 = *(byte ********)((long)pppppppbVar15 + 0x48);
    unaff_x22 = *(byte ********)((long)pppppppbVar15 + 0x30);
    unaff_x21 = *(byte ********)((long)pppppppbVar15 + 0x38);
    pppppppbVar16 = pppppppbVar15;
code_r0x0001004975e8:
    pppppppbVar17 = pppppppbVar16;
code_r0x0001004975f0:
    *(byte ********)((long)pppppppbVar17 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar17 + 0x38) = unaff_x21;
    *(byte ********)((long)pppppppbVar17 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar17 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar17 + 0x50) = puVar33;
    *(undefined8 *)((long)pppppppbVar17 + 0x58) = unaff_x30;
    ppppppbVar27 = param_4[1];
    ppppppbVar18 = param_4[2];
    *(byte *******)((long)pppppppbVar17 + 0x18) = ppppppbVar27;
    *(byte *******)((long)pppppppbVar17 + 0x20) = ppppppbVar18;
    *(undefined1 *)((long)pppppppbVar17 + 0x10) = 5;
    ppppppbVar18 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar17 + 0x10),
                                       (undefined1 *)((long)pppppppbVar17 + 0x2f),&UNK_10b21c2d0);
    *(byte *******)param_3 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_3 + 8) = ppppppbVar18;
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar27);
    }
    return;
  case 0xd:
    pppppppbVar21 = (byte *******)param_4[1];
    pppppppbVar25 = (byte *******)param_4[2];
  case 0xce:
  case 0xea:
    pppppppbStack_2d8 = pppppppbVar21;
    pppppppbStack_2d0 = pppppppbVar25;
code_r0x00010049765c:
    bVar20 = 5;
code_r0x000100497660:
    break;
  case 0xe:
  case 0x44:
    param_4 = param_4 + 1;
  case 0xd1:
code_r0x000100497580:
    pppppppbVar5 = (byte *******)&stack0xffffffffffffffa0;
    puVar33 = unaff_x29;
code_r0x000100497590:
    pppppppbVar6 = pppppppbVar5;
code_r0x000100497594:
    pppppppbVar8 = pppppppbVar6;
code_r0x000100497598:
    pppppppbVar7 = (byte *******)((long)pppppppbVar8 + 0x60);
code_r0x00010049759c:
    *(byte ********)((long)pppppppbVar7 + -0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar7 + -0x28) = unaff_x21;
    *(byte ********)((long)pppppppbVar7 + -0x20) = unaff_x20;
    *(byte ********)((long)pppppppbVar7 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar7 + -0x10) = puVar33;
    *(undefined8 *)((long)pppppppbVar7 + -8) = unaff_x30;
    ppppppbVar27 = param_4[1];
    ppppppbVar18 = param_4[2];
    *(byte *******)((long)pppppppbVar7 + -0x48) = ppppppbVar27;
    *(byte *******)((long)pppppppbVar7 + -0x40) = ppppppbVar18;
    *(undefined1 *)((long)pppppppbVar7 + -0x50) = 6;
    ppppppbVar18 = (byte ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppbVar7 + -0x50),
                                       (undefined1 *)((long)pppppppbVar7 + -0x31),&UNK_10b21c2d0);
    *(byte *******)param_3 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_3 + 8) = ppppppbVar18;
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar27);
    }
    return;
  case 0xf:
    pppppppbVar21 = (byte *******)param_4[1];
    pppppppbVar25 = (byte *******)param_4[2];
  case 0xbc:
    pppppppbStack_2d8 = pppppppbVar21;
    pppppppbStack_2d0 = pppppppbVar25;
code_r0x000100497614:
    bVar20 = 6;
code_r0x000100497618:
    break;
  case 0x10:
  case 0x66:
  case 0xac:
    bVar20 = 8;
    break;
  default:
    pppppppbVar28 = (byte *******)param_4[1];
    pppppppbStack_2d8 = (byte *******)pppppppbVar28[1];
    pppppppbStack_2e0 = (byte *******)*pppppppbVar28;
    pppppppbStack_2c8 = (byte *******)pppppppbVar28[3];
    pppppppbStack_2d0 = (byte *******)pppppppbVar28[2];
    func_0x000107c04690(param_3,&pppppppbStack_2e0);
    goto code_r0x0001004971d0;
  case 0x12:
  case 0x32:
    bVar20 = 7;
    break;
  case 0x13:
  case 0x6b:
  case 0xae:
    unaff_x20 = (byte *******)param_4[1];
    pppppppbVar36 = (byte *******)unaff_x20[1];
    pppppppbVar34 = (byte *******)*unaff_x20;
  case 0xc3:
    pppppppbVar37 = (byte *******)unaff_x20[3];
    pppppppbVar35 = (byte *******)unaff_x20[2];
    pppppppbStack_2e0 = pppppppbVar34;
    pppppppbStack_2d8 = pppppppbVar36;
code_r0x0001004971b4:
    pppppppbVar28 = unaff_x20;
    pppppppbStack_2d0 = pppppppbVar35;
    pppppppbStack_2c8 = pppppppbVar37;
    func_0x000107c054fc(param_3,&pppppppbStack_2e0);
code_r0x0001004971d0:
code_r0x0001004971e0:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppbVar28);
    return;
  case 0x14:
  case 0x6c:
    unaff_x23 = (byte *******)param_4[1];
    unaff_x20 = (byte *******)param_4[2];
  case 0x3f:
    unaff_x26 = (byte *******)param_4[3];
code_r0x0001004971f0:
    unaff_x19 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppbStack_120 = unaff_x20;
code_r0x0001004971f8:
    ppppppbStack_100 = (byte ******)0x0;
    unaff_x21 = unaff_x20;
    pppppppbStack_110 = unaff_x23;
    pppppppbStack_108 = unaff_x19;
    if (unaff_x26 == (byte *******)0x0) {
code_r0x000100497224:
      param_4 = (byte *******)&UNK_10b22f828;
      param_5 = &UNK_10b20a000;
      pppppppbStack_118 = unaff_x21;
code_r0x000100497230:
      unaff_x22 = (byte *******)thunk_FUN_1087e422c(0,param_4,param_5 + 0x590);
code_r0x000100497240:
      *(byte *******)param_3 = (byte ******)0x800000000000006e;
      *(byte ********)((long)param_3 + 8) = unaff_x22;
code_r0x00010049724c:
      lVar30 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar30 = lVar30 + -1, lVar30 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (byte *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100497224;
      uVar22 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_cf = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      cStack_d7 = (char)uVar22;
      uStack_d6 = (undefined6)((ulong)uVar22 >> 8);
      uStack_d0 = (undefined1)((ulong)uVar22 >> 0x38);
      ppppppbStack_c0 = unaff_x20[3];
      uStack_c8 = SUB81(unaff_x20[2],0);
      uStack_c7 = (undefined7)((ulong)unaff_x20[2] >> 8);
      ppppppbStack_100 = (byte ******)0x1;
      pppppppbStack_118 = unaff_x21;
      bStack_d8 = *(byte *)unaff_x20;
      func_0x00010135ba2c(&bStack_330,&bStack_d8);
      unaff_x25 = (byte *******)CONCAT71(uStack_32f,bStack_330);
      unaff_x22 = (byte *******)CONCAT71(uStack_327,uStack_328);
      if (unaff_x25 == (byte *******)0x8000000000000001) goto code_r0x000100497240;
      if (unaff_x26 == (byte *******)0x1) {
code_r0x0001004972e8:
        pppppppbVar28 = (byte *******)thunk_FUN_1087e422c(1,&UNK_10b22f828,&UNK_10b20a590);
code_r0x000100497300:
        *(byte *******)param_3 = (byte ******)0x800000000000006e;
        *(byte ********)((long)param_3 + 8) = pppppppbVar28;
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x00010049724c;
      }
      unaff_x26 = (byte *******)CONCAT71(uStack_31f,uStack_320);
      unaff_x21 = unaff_x20 + 8;
      bVar20 = *(byte *)(unaff_x20 + 4);
      pppppppbStack_118 = unaff_x21;
      if (bVar20 == 0x16) goto code_r0x0001004972e8;
code_r0x0001004976d4:
      pppppppbVar37 = *(byte ********)((long)unaff_x20 + 0x29);
      pppppppbVar35 = *(byte ********)((long)unaff_x20 + 0x21);
code_r0x0001004976d8:
      uStack_327 = SUB87(pppppppbVar37,0);
      uStack_32f = SUB87(pppppppbVar35,0);
      uStack_328 = (undefined1)((ulong)pppppppbVar35 >> 0x38);
      ppppppbStack_318 = unaff_x20[7];
      uStack_320 = SUB81(unaff_x20[6],0);
      uStack_31f = (undefined7)((ulong)unaff_x20[6] >> 8);
code_r0x0001004976e4:
      ppppppbStack_100 = (byte ******)0x2;
code_r0x0001004976ec:
      bStack_330 = bVar20;
      func_0x00010139e1cc(&bStack_d8,&bStack_330);
code_r0x0001004976fc:
      pppppppbVar21 = (byte *******)CONCAT62(uStack_d6,CONCAT11(cStack_d7,bStack_d8));
      pppppppbVar28 = (byte *******)CONCAT71(uStack_cf,uStack_d0);
      pppppppbVar25 = (byte *******)0x8000000000000000;
code_r0x000100497704:
      if (pppppppbVar21 == pppppppbVar25) goto code_r0x000100497300;
code_r0x00010049770c:
      *(byte *******)((long)param_3 + 0x20) = ppppppbStack_c0;
      *(byte *******)((long)param_3 + 0x18) = (byte ******)CONCAT71(uStack_c7,uStack_c8);
      unaff_x19 = (byte *******)0x800000000000006e;
      ppppppbVar27 = ppppppbStack_b8;
      ppppppbVar18 = ppppppbStack_b0;
code_r0x00010049771c:
      *(byte *******)((long)param_3 + 0x30) = ppppppbVar18;
      *(byte *******)((long)param_3 + 0x28) = ppppppbVar27;
      *(byte *******)((long)param_3 + 0x40) = ppppppbStack_a0;
      *(byte *******)((long)param_3 + 0x38) = ppppppbStack_a8;
      pppppppbVar25 = pppppppbStack_98;
code_r0x00010049772c:
      *(byte ********)param_3 = unaff_x19 + -4;
      *(byte ********)((long)param_3 + 8) = pppppppbVar21;
code_r0x000100497734:
      *(byte ********)((long)param_3 + 0x10) = pppppppbVar28;
      *(byte ********)((long)param_3 + 0x48) = pppppppbVar25;
      *(byte ********)((long)param_3 + 0x50) = unaff_x25;
      *(byte ********)((long)param_3 + 0x58) = unaff_x22;
      *(byte ********)((long)param_3 + 0x60) = unaff_x26;
      pppppppbVar28 = (byte *******)&pppppppbStack_2e0;
code_r0x000100497744:
      param_5 = (undefined *)0x1c0;
      param_4 = (byte *******)param_3;
code_r0x00010049774c:
      _memcpy(pppppppbVar28,param_4,param_5);
      pppppppbVar28 = (byte *******)FUN_100fbc738(&pppppppbStack_120);
      if (pppppppbVar28 != (byte *******)0x0) {
code_r0x00010049775c:
        *(byte ********)param_3 = unaff_x19;
        *(byte ********)((long)param_3 + 8) = pppppppbVar28;
code_r0x000100497760:
        FUN_100e44f40(&pppppppbStack_2e0);
      }
    }
    goto LAB_1004976ac;
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
    pppppppbStack_308 = (byte *******)param_4[2];
    ppppppbVar27 = param_4[3];
    unaff_x19 = pppppppbStack_308 + (long)ppppppbVar27 * 8;
    pppppppbStack_310 = pppppppbStack_308;
    ppppppbStack_300 = param_4[1];
    pppppppbStack_2f8 = unaff_x19;
    bStack_330 = 0x16;
    pppppppbStack_2f0 = (byte *******)0x0;
    if (ppppppbVar27 == (byte ******)0x0) {
      pppppppbVar29 = (byte *******)0x8000000000000000;
      pppppppbStack_120 = (byte *******)0x8000000000000000;
    }
    else {
      unaff_x25 = (byte *******)0x0;
      unaff_x20 = (byte *******)((ulong)&bStack_d8 | 1);
      unaff_x22 = (byte *******)((ulong)&bStack_330 | 1);
      puStack_338 = (undefined8 *)((ulong)&pppppppbStack_90 | 1);
      pppppppbStack_360 = (byte *******)(((long)ppppppbVar27 * 0x40 - 0x40U >> 6) + 1);
      pppppppbVar29 = (byte *******)0x8000000000000000;
      unaff_x23 = (byte *******)0x8000000000000001;
      unaff_x28 = (byte *******)0x8000000000000000;
      unaff_x26 = pppppppbStack_308;
      pppppppbStack_358 = (byte *******)param_3;
      do {
        param_3 = (char *)unaff_x26;
        unaff_x26 = (byte *******)((long)param_3 + 0x40);
        pppppppbVar25 = (byte *******)(ulong)(byte)*param_3;
        pppppppbVar31 = unaff_x25;
        pppppppbVar32 = unaff_x26;
        if (*param_3 == 0x16) break;
code_r0x000100496e38:
        uVar19 = (uint)pppppppbVar25;
        bStack_d8 = (byte)pppppppbVar25;
        ppppppbVar27 = *(byte *******)((long)param_3 + 0x10);
        *(byte *******)((long)unaff_x20 + 0x17) = *(byte *******)((long)param_3 + 0x18);
        *(byte *******)((long)unaff_x20 + 0xf) = ppppppbVar27;
        ppppppbVar27 = *(byte *******)((long)param_3 + 1);
        unaff_x20[1] = *(byte *******)((long)param_3 + 9);
        *unaff_x20 = ppppppbVar27;
        ppppppbStack_318 = *(byte *******)((long)param_3 + 0x38);
        uStack_328 = SUB81(*(byte *******)((long)param_3 + 0x28),0);
        uStack_327 = (undefined7)((ulong)*(byte *******)((long)param_3 + 0x28) >> 8);
        bStack_330 = (byte)*(byte *******)((long)param_3 + 0x20);
        uStack_32f = (undefined7)((ulong)*(byte *******)((long)param_3 + 0x20) >> 8);
        uStack_320 = SUB81(*(byte *******)((long)param_3 + 0x30),0);
        uStack_31f = (undefined7)((ulong)*(byte *******)((long)param_3 + 0x30) >> 8);
        piVar2 = (int *)CONCAT71(uStack_cf,uStack_d0);
        piVar3 = (int *)CONCAT71(uStack_c7,uStack_c8);
        if (uVar19 < 0xd) {
          if (uVar19 == 1) {
            iVar24 = 1;
            if (cStack_d7 != '\x01') {
              iVar24 = 2;
            }
            iVar23 = 0;
            if (cStack_d7 != '\0') {
              iVar23 = iVar24;
            }
          }
          else {
            if (uVar19 != 4) {
              if (uVar19 == 0xc) {
                if (ppppppbStack_c0 == (byte ******)0x6) {
                  iVar23 = 1;
                  if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                    iVar23 = 2;
                  }
                }
                else if (ppppppbStack_c0 == (byte ******)0x2) {
                  iVar23 = 2;
                  if ((short)*piVar3 == 0x6469) {
                    iVar23 = 0;
                  }
                }
                else {
                  iVar23 = 2;
                }
                goto joined_r0x000100497000;
              }
code_r0x0001004978d4:
              pppppppbStack_2f0 = (byte *******)((long)unaff_x25 + 1);
              pppppppbStack_118 = pppppppbStack_340;
              pppppppbStack_308 = unaff_x26;
              pppppppbStack_120 = unaff_x28;
              ppppppbVar27 = (byte ******)
                             thunk_FUN_108855b04(&bStack_d8,&pppppppbStack_90,&UNK_10b212640);
              param_3 = (char *)pppppppbStack_358;
              goto LAB_100497384;
            }
            iVar24 = 1;
            if (piVar2 != (int *)0x1) {
              iVar24 = 2;
            }
            iVar23 = 0;
            if (piVar2 != (int *)0x0) {
              iVar23 = iVar24;
            }
          }
code_r0x00010049708c:
          FUN_100e077ec(&bStack_d8);
        }
        else {
          if (uVar19 == 0xd) {
            if (piVar3 == (int *)0x6) {
              iVar23 = 1;
              if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
                iVar23 = 2;
              }
            }
            else {
              if (piVar3 != (int *)0x2) goto code_r0x000100497058;
              iVar23 = 2;
              if ((short)*piVar2 == 0x6469) {
                iVar23 = 0;
              }
            }
            goto code_r0x00010049708c;
          }
          if (uVar19 != 0xe) {
            if (uVar19 != 0xf) goto code_r0x0001004978d4;
            if (piVar3 == (int *)0x6) {
              if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                   (*(char *)((long)piVar2 + 2) != 'r')) ||
                  ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
                 (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x000100497058;
              iVar23 = 1;
            }
            else if (((piVar3 == (int *)0x2) && ((char)*piVar2 == 'i')) &&
                    (*(char *)((long)piVar2 + 1) == 'd')) {
              iVar23 = 0;
            }
            else {
code_r0x000100497058:
              iVar23 = 2;
            }
            goto code_r0x00010049708c;
          }
          if (ppppppbStack_c0 == (byte ******)0x6) {
            if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
                 (*(char *)((long)piVar3 + 2) != 'r')) ||
                ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
               (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x000100496fc8;
            iVar23 = 1;
          }
          else if (((ppppppbStack_c0 == (byte ******)0x2) && ((char)*piVar3 == 'i')) &&
                  (*(char *)((long)piVar3 + 1) == 'd')) {
            iVar23 = 0;
          }
          else {
code_r0x000100496fc8:
            iVar23 = 2;
          }
joined_r0x000100497000:
          if (piVar2 != (int *)0x0) {
            _free();
          }
        }
        bVar20 = bStack_330;
        if (iVar23 == 0) {
          if (unaff_x23 != (byte *******)0x8000000000000001) {
            pppppppbStack_2f0 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_118 = pppppppbStack_340;
            pppppppbStack_90 = (byte *******)&UNK_108ca26b0;
            pppppppbStack_88 = (byte *******)0x2;
            bStack_d8 = (byte)&pppppppbStack_90;
            cStack_d7 = (char)((ulong)&pppppppbStack_90 >> 8);
            uStack_d6 = (undefined6)((ulong)&pppppppbStack_90 >> 0x10);
            uStack_d0 = 0xa0;
            uStack_cf = 0x100c7b3;
            pppppppbStack_308 = unaff_x26;
            pppppppbStack_120 = unaff_x28;
            ppppppbVar27 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_d8);
            param_3 = (char *)pppppppbStack_358;
            goto LAB_100497384;
          }
          bStack_330 = 0x16;
          if (bVar20 == 0x16) {
            pppppppbStack_2f0 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_118 = pppppppbStack_340;
            pppppppbStack_308 = unaff_x26;
            pppppppbStack_120 = unaff_x28;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004978d0;
          }
          ppppppbVar27 = *unaff_x22;
          unaff_x20[1] = unaff_x22[1];
          *unaff_x20 = ppppppbVar27;
          uVar22 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          bStack_d8 = bVar20;
          pppppppbVar28 = (byte *******)param_3;
code_r0x000100497148:
          param_3 = (char *)&pppppppbStack_90;
          param_4 = (byte *******)&bStack_d8;
code_r0x000100497150:
          func_0x00010135ba2c(param_3,param_4);
          in_ZR = pppppppbStack_90 == (byte *******)0x8000000000000001;
          unaff_x23 = pppppppbStack_90;
code_r0x000100497160:
          if ((bool)in_ZR) {
            pppppppbVar21 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_308 = unaff_x26;
            goto code_r0x000100497534;
          }
          pppppppbStack_350 = pppppppbStack_88;
          pppppppbStack_348 = pppppppbStack_80;
        }
        else if (iVar23 == 1) {
          if (pppppppbVar29 != (byte *******)0x8000000000000000) {
            pppppppbStack_2f0 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_118 = pppppppbStack_340;
            pppppppbStack_90 = (byte *******)&UNK_108cb9606;
            pppppppbStack_88 = (byte *******)0x6;
            bStack_d8 = (byte)&pppppppbStack_90;
            cStack_d7 = (char)((ulong)&pppppppbStack_90 >> 8);
            uStack_d6 = (undefined6)((ulong)&pppppppbStack_90 >> 0x10);
            uStack_d0 = 0xa0;
            uStack_cf = 0x100c7b3;
            param_3 = s_duplicate_field_____108ac2973;
            unaff_x22 = pppppppbStack_340;
            pppppppbStack_308 = unaff_x26;
            pppppppbStack_120 = unaff_x28;
            goto code_r0x0001004977ac;
          }
          bStack_330 = 0x16;
          if (bVar20 == 0x16) {
            pppppppbStack_2f0 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_118 = pppppppbStack_340;
            pppppppbStack_308 = unaff_x26;
            pppppppbStack_120 = unaff_x28;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004978d0;
          }
          ppppppbVar27 = *unaff_x22;
          puStack_338[1] = unaff_x22[1];
          *puStack_338 = ppppppbVar27;
          uVar22 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)puStack_338 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)puStack_338 + 0xf) = uVar22;
          pppppppbStack_90 = (byte *******)CONCAT71(pppppppbStack_90._1_7_,bVar20);
          func_0x00010139e1cc(&bStack_d8,&pppppppbStack_90);
          unaff_x28 = (byte *******)CONCAT62(uStack_d6,CONCAT11(cStack_d7,bStack_d8));
          if (unaff_x28 == (byte *******)0x8000000000000000) {
            pppppppbVar21 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_308 = unaff_x26;
            goto code_r0x0001004974e0;
          }
          pppppppbStack_340 = (byte *******)CONCAT71(uStack_cf,uStack_d0);
          pppppppbVar21 = (byte *******)&bStack_d8;
code_r0x000100496df4:
          pppppppbVar29 = unaff_x28;
          pppppppbStack_108 = (byte *******)pppppppbVar21[3];
          pppppppbStack_110 = (byte *******)pppppppbVar21[2];
          ppppppbStack_f8 = pppppppbVar21[5];
          ppppppbStack_100 = pppppppbVar21[4];
          ppppppbStack_e8 = pppppppbVar21[7];
          ppppppbStack_f0 = pppppppbVar21[6];
          ppppppbStack_e0 = pppppppbVar21[8];
          pppppppbVar28 = (byte *******)param_3;
          unaff_x28 = pppppppbVar29;
        }
        else {
          bStack_330 = 0x16;
          if (bVar20 == 0x16) {
            pppppppbStack_2f0 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_118 = pppppppbStack_340;
            pppppppbStack_308 = unaff_x26;
            pppppppbStack_120 = unaff_x28;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004978d0:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004978d4);
            (*pcVar4)();
          }
          ppppppbVar27 = *unaff_x22;
          unaff_x20[1] = unaff_x22[1];
          *unaff_x20 = ppppppbVar27;
code_r0x00010049718c:
          uVar22 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          pppppppbVar28 = (byte *******)param_3;
code_r0x000100497194:
          bStack_d8 = bVar20;
          param_3 = (char *)&bStack_d8;
code_r0x00010049719c:
          FUN_100e077ec(param_3);
        }
        unaff_x25 = (byte *******)((long)unaff_x25 + 1);
        pppppppbVar31 = pppppppbStack_360;
        pppppppbVar32 = unaff_x19;
      } while (pppppppbVar28 + 8 != unaff_x19);
      pppppppbStack_308 = pppppppbVar32;
      pppppppbStack_2f0 = pppppppbVar31;
      pppppppbStack_118 = pppppppbStack_340;
      pppppppbStack_120 = unaff_x28;
      unaff_x22 = pppppppbStack_340;
      param_3 = (char *)pppppppbStack_358;
      if (unaff_x23 != (byte *******)0x8000000000000001) {
        pppppppbVar26 = pppppppbStack_348;
        unaff_x21 = pppppppbStack_358;
        if (pppppppbVar29 != (byte *******)0x8000000000000000) goto code_r0x000100497450;
        pppppppbStack_90 = (byte *******)&UNK_108cb9606;
        pppppppbStack_88 = (byte *******)0x6;
        goto code_r0x000100497414;
      }
    }
    pppppppbStack_90 = (byte *******)&UNK_108ca26b0;
    pppppppbStack_88 = (byte *******)0x2;
    bStack_d8 = (byte)&pppppppbStack_90;
    cStack_d7 = (char)((ulong)&pppppppbStack_90 >> 8);
    uStack_d6 = (undefined6)((ulong)&pppppppbStack_90 >> 0x10);
    uStack_d0 = 0xa0;
    uStack_cf = 0x100c7b3;
    unaff_x23 = (byte *******)0x8000000000000001;
    ppppppbVar27 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_d8);
    pppppppbStack_340 = unaff_x22;
LAB_100497384:
    unaff_x21 = (byte *******)&bStack_330;
    *(byte *******)param_3 = (byte ******)0x800000000000006e;
    *(byte *******)((long)param_3 + 8) = ppppppbVar27;
    unaff_x22 = pppppppbStack_340;
    if (pppppppbVar29 != (byte *******)0x8000000000000000) goto joined_r0x0001004977d4;
    goto LAB_1004973d4;
  case 0x16:
  case 0x4d:
    goto code_r0x000100497514;
  case 0x17:
    goto code_r0x000100497524;
  case 0x18:
  case 0x50:
    goto code_r0x0001004974ec;
  case 0x19:
    goto code_r0x000100497504;
  case 0x1a:
  case 0x8a:
  case 0xa9:
    goto code_r0x0001004974b0;
  case 0x1b:
code_r0x000100497534:
    unaff_x22 = pppppppbStack_340;
    pppppppbStack_2f0 = pppppppbVar21;
  case 0x23:
  case 0x46:
  case 0x7e:
    pppppppbStack_120 = unaff_x28;
    pppppppbStack_118 = unaff_x22;
code_r0x000100497544:
    unaff_x23 = (byte *******)0x8000000000000001;
    param_3 = (char *)pppppppbStack_88;
code_r0x00010049754c:
    unaff_x21 = (byte *******)&bStack_330;
    pppppppbVar28 = pppppppbStack_358;
code_r0x000100497554:
    *pppppppbVar28 = (byte ******)0x800000000000006e;
    pppppppbVar28[1] = (byte ******)param_3;
    pppppppbVar21 = (byte *******)0x8000000000000000;
code_r0x000100497564:
    in_ZR = pppppppbVar29 == pppppppbVar21;
code_r0x000100497568:
    if (!(bool)in_ZR) {
code_r0x00010049756c:
joined_r0x0001004977d4:
      if ((ppppppbStack_f0 != (byte ******)0x8000000000000000) &&
         (ppppppbStack_f0 != (byte ******)0x0)) {
        _free(ppppppbStack_e8);
      }
      if (pppppppbVar29 != (byte *******)0x0) {
code_r0x0001004973bc:
        _free(unaff_x22);
      }
LAB_1004973c4:
      if (pppppppbStack_108 != (byte *******)0x0) {
        _free(ppppppbStack_100);
      }
    }
LAB_1004973d4:
    if (-0x7fffffffffffffff < (long)unaff_x23) goto code_r0x0001004973e4;
    goto LAB_10049750c;
  case 0x1c:
  case 0xd6:
    goto code_r0x00010049754c;
  case 0x1d:
    goto LAB_10049750c;
  case 0x1e:
    goto code_r0x000100497564;
  case 0x1f:
  case 0x9b:
  case 0xf3:
code_r0x0001004974e0:
    pppppppbStack_2f0 = pppppppbVar21;
  case 0x52:
    pppppppbVar21 = (byte *******)CONCAT71(uStack_cf,uStack_d0);
    pppppppbVar25 = (byte *******)0x6e;
code_r0x0001004974ec:
    pppppppbVar25 = (byte *******)((ulong)pppppppbVar25 | 0x8000000000000000);
code_r0x0001004974f0:
    pppppppbVar26 = pppppppbStack_358;
code_r0x0001004974f4:
    *pppppppbVar26 = (byte ******)pppppppbVar25;
    pppppppbVar26[1] = (byte ******)pppppppbVar21;
code_r0x0001004974f8:
    unaff_x21 = (byte *******)&bStack_330;
    pppppppbVar21 = (byte *******)0x8000000000000002;
code_r0x000100497504:
    in_OV = SBORROW8((long)unaff_x23,(long)pppppppbVar21);
    in_NG = (long)unaff_x23 - (long)pppppppbVar21 < 0;
code_r0x000100497508:
    if (in_NG == in_OV) {
code_r0x0001004973e4:
      param_3 = (char *)pppppppbStack_350;
      if (unaff_x23 == (byte *******)0x0) goto LAB_10049750c;
      goto code_r0x0001004973ec;
    }
    goto LAB_10049750c;
  case 0x20:
  case 0xd4:
    goto code_r0x000100497554;
  case 0x21:
  case 0x85:
    goto code_r0x000100497488;
  case 0x22:
  case 0x8e:
    goto code_r0x0001004974b8;
  case 0x24:
    goto code_r0x000100497460;
  case 0x25:
    goto code_r0x0001004974f4;
  case 0x26:
  case 0x93:
    goto code_r0x000100497458;
  case 0x28:
    goto code_r0x0001004975b4;
  case 0x29:
    goto code_r0x000100497150;
  case 0x2a:
    goto code_r0x000100497194;
  case 0x2c:
  case 0xbd:
    goto code_r0x000100497694;
  case 0x2d:
  case 0xb6:
    goto code_r0x0001004976a4;
  case 0x2f:
    goto code_r0x000100497684;
  case 0x31:
    goto code_r0x0001004976b4;
  case 0x33:
  case 0xb5:
    goto code_r0x00010049768c;
  case 0x34:
  case 0xde:
    goto code_r0x0001004976e4;
  case 0x35:
    goto code_r0x000100497660;
  case 0x36:
    goto code_r0x0001004976d4;
  case 0x38:
  case 0x78:
  case 0xb9:
    goto code_r0x000100497638;
  case 0x39:
  case 0xb8:
    goto code_r0x0001004976bc;
  case 0x3a:
  case 0x4c:
  case 0xbb:
  case 200:
    goto code_r0x0001004975e0;
  case 0x3b:
  case 0x60:
    goto code_r0x000100497674;
  case 0x3c:
  case 0x48:
  case 0x7d:
    goto code_r0x0001004975d8;
  case 0x3e:
  case 0xe9:
    goto code_r0x000100497734;
  case 0x40:
    goto code_r0x000100497230;
  case 0x43:
  case 0xc0:
    goto code_r0x0001004975b0;
  case 0x45:
    goto code_r0x000100497590;
  case 0x47:
  case 0x5c:
    goto code_r0x0001004975c0;
  case 0x49:
  case 99:
    goto code_r0x000100497598;
  case 0x4a:
  case 0x61:
  case 0x75:
    goto code_r0x0001004975f0;
  case 0x4b:
  case 0x79:
    goto code_r0x00010049756c;
  case 0x4e:
  case 0x7c:
    goto code_r0x000100497544;
  case 0x51:
    goto code_r0x000100497580;
  case 0x55:
  case 0x98:
    goto code_r0x00010049718c;
  case 0x56:
    goto code_r0x0001004971d0;
  case 0x59:
    goto code_r0x000100497634;
  case 0x5b:
    goto code_r0x000100497614;
  case 0x5d:
  case 0xb2:
    goto code_r0x000100497644;
  case 0x5e:
  case 0xb3:
    goto code_r0x00010049765c;
  case 0x68:
    goto code_r0x000100497568;
  case 0x6a:
    goto code_r0x0001004976c4;
  case 0x71:
  case 0xd5:
    goto code_r0x0001004975e8;
  case 0x72:
    goto code_r0x000100497594;
  case 0x73:
  case 199:
    goto code_r0x000100497618;
  case 0x76:
  case 0xd0:
    goto code_r0x000100497648;
  case 0x77:
    goto code_r0x0001004975c4;
  case 0x7a:
    goto code_r0x00010049759c;
  case 0x80:
    goto code_r0x000100497698;
  case 0x81:
    goto code_r0x00010049719c;
  case 0x82:
    goto code_r0x0001004971e0;
  case 0x84:
    goto code_r0x000100497478;
  case 0x86:
code_r0x000100497450:
    pppppppbVar21 = (byte *******)&pppppppbStack_120;
    pppppppbVar35 = pppppppbStack_110;
    pppppppbVar37 = pppppppbStack_108;
    ppppppbVar27 = ppppppbStack_100;
    ppppppbVar18 = ppppppbStack_f8;
code_r0x000100497458:
    unaff_x21[4] = (byte ******)pppppppbVar37;
    unaff_x21[3] = (byte ******)pppppppbVar35;
    unaff_x20 = (byte *******)0x6e;
code_r0x000100497460:
    unaff_x20 = (byte *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
    unaff_x21[6] = ppppppbVar18;
    unaff_x21[5] = ppppppbVar27;
code_r0x000100497468:
    pppppppbVar37 = (byte *******)pppppppbVar21[7];
    pppppppbVar35 = (byte *******)pppppppbVar21[6];
code_r0x00010049746c:
    unaff_x21[8] = (byte ******)pppppppbVar37;
    unaff_x21[7] = (byte ******)pppppppbVar35;
code_r0x000100497470:
    pppppppbVar21 = (byte *******)pppppppbVar21[8];
code_r0x000100497474:
    pppppppbVar25 = unaff_x20 + -4;
code_r0x000100497478:
    *unaff_x21 = (byte ******)pppppppbVar25;
    unaff_x21[1] = (byte ******)pppppppbVar29;
    unaff_x21[2] = (byte ******)unaff_x22;
    unaff_x21[9] = (byte ******)pppppppbVar21;
    unaff_x21[10] = (byte ******)unaff_x23;
    pppppppbVar21 = pppppppbStack_350;
code_r0x000100497488:
    param_4 = unaff_x21;
    param_4[0xb] = (byte ******)pppppppbVar21;
    param_4[0xc] = (byte ******)pppppppbVar26;
    param_3 = (char *)&pppppppbStack_2e0;
    param_5 = (undefined *)0x1c0;
    unaff_x21 = param_4;
code_r0x000100497498:
    _memcpy(param_3,param_4,param_5);
code_r0x00010049749c:
    pppppppbVar21 = (byte *******)&bStack_330;
code_r0x0001004974a0:
    FUN_100d34830(pppppppbVar21 + 4);
code_r0x0001004974a8:
    if (unaff_x19 != pppppppbVar32) {
code_r0x0001004974b0:
      pppppppbVar21 = (byte *******)((ulong)((long)unaff_x19 - (long)pppppppbVar32) >> 6);
code_r0x0001004974b8:
      bStack_d8 = (byte)pppppppbVar31;
      cStack_d7 = (char)((ulong)pppppppbVar31 >> 8);
      uStack_d6 = (undefined6)((ulong)pppppppbVar31 >> 0x10);
      param_5 = &UNK_10b23a000;
code_r0x0001004974c0:
      param_5 = param_5 + 400;
      param_3 = (char *)((long)pppppppbVar21 + (long)pppppppbVar31);
code_r0x0001004974c8:
      param_3 = (char *)thunk_FUN_1087e422c(param_3,&bStack_d8,param_5);
code_r0x0001004974d0:
      *unaff_x21 = (byte ******)unaff_x20;
      unaff_x21[1] = (byte ******)param_3;
      goto code_r0x000100497760;
    }
    goto LAB_1004976ac;
  case 0x87:
    goto code_r0x000100497468;
  case 0x88:
  case 0xaa:
code_r0x000100497414:
    pppppppbVar21 = (byte *******)&pppppppbStack_90;
    pppppppbVar25 = (byte *******)&UNK_100c7b000;
  case 0x90:
  case 0xa8:
    bStack_d8 = (byte)pppppppbVar21;
    cStack_d7 = (char)((ulong)pppppppbVar21 >> 8);
    uStack_d6 = (undefined6)((ulong)pppppppbVar21 >> 0x10);
    uStack_d0 = SUB81(pppppppbVar25 + 0x74,0);
    uStack_cf = (undefined7)((ulong)(pppppppbVar25 + 0x74) >> 8);
    ppppppbVar27 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_d8);
    *unaff_x21 = (byte ******)0x800000000000006e;
    unaff_x21[1] = ppppppbVar27;
    in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
code_r0x000100497444:
    unaff_x21 = (byte *******)&bStack_330;
    param_3 = (char *)pppppppbStack_350;
    if (!(bool)in_ZR) {
code_r0x0001004973ec:
      _free(param_3);
    }
LAB_10049750c:
    param_3 = (char *)(unaff_x21 + 4);
code_r0x000100497510:
    FUN_100d34830(param_3);
code_r0x000100497514:
    if (bStack_330 != 0x16) {
code_r0x000100497520:
      param_3 = (char *)&bStack_330;
code_r0x000100497524:
      FUN_100e077ec(param_3);
    }
    goto LAB_1004976ac;
  case 0x89:
    goto code_r0x000100497498;
  case 0x8b:
    goto code_r0x000100497470;
  case 0x8c:
  case 0xa1:
  case 0xf9:
    goto code_r0x0001004974c8;
  case 0x8d:
  case 0xa5:
  case 0xfd:
    goto code_r0x000100497444;
  case 0x8f:
    goto code_r0x0001004973ec;
  case 0x91:
    goto code_r0x0001004974a0;
  case 0x92:
    goto LAB_1004973c4;
  case 0x94:
    goto code_r0x0001004973bc;
  case 0x96:
  case 0xa7:
  case 0xff:
    goto code_r0x0001004974f8;
  case 0x97:
    goto code_r0x000100497148;
  case 0x9a:
  case 0xf2:
    goto code_r0x0001004974d0;
  case 0x9c:
  case 0xf4:
    goto code_r0x0001004974a8;
  case 0x9d:
  case 0xf5:
    goto code_r0x0001004974c0;
  case 0x9e:
  case 0xf6:
    goto code_r0x00010049746c;
  case 0x9f:
  case 0xf7:
    goto code_r0x0001004974f0;
  case 0xa0:
  case 0xf8:
    goto code_r0x000100497508;
  case 0xa2:
  case 0xfa:
    goto code_r0x000100497520;
  case 0xa3:
  case 0xfb:
    goto code_r0x00010049749c;
  case 0xa4:
  case 0xfc:
    goto code_r0x000100497510;
  case 0xa6:
  case 0xfe:
    goto code_r0x000100497474;
  case 0xad:
    goto code_r0x000100497160;
  case 0xba:
    goto LAB_1004976ac;
  case 0xbe:
    goto code_r0x0001004975b8;
  case 0xc2:
  case 0xdc:
    goto code_r0x00010049770c;
  case 0xc4:
    goto code_r0x0001004971f0;
  case 0xcd:
    goto code_r0x000100497600;
  case 0xd2:
    goto code_r0x0001004975ac;
  case 0xd8:
  case 0xe0:
    goto code_r0x0001004976a8;
  case 0xd9:
    goto code_r0x0001004971b4;
  case 0xda:
    goto code_r0x0001004971f8;
  case 0xdd:
    goto code_r0x00010049771c;
  case 0xdf:
    goto code_r0x0001004976fc;
  case 0xe1:
    goto code_r0x00010049772c;
  case 0xe2:
    goto code_r0x000100497744;
  case 0xe3:
    goto code_r0x000100497704;
  case 0xe4:
    goto code_r0x00010049775c;
  case 0xe5:
    goto code_r0x0001004976d8;
  case 0xe6:
    goto code_r0x00010049774c;
  case 0xe7:
    goto code_r0x000100497680;
  case 0xe8:
    goto code_r0x0001004976b0;
  case 0xeb:
    goto code_r0x0001004976ec;
  case 0xee:
code_r0x0001004977ac:
    ppppppbVar27 = (byte ******)thunk_FUN_108856088(param_3,&bStack_d8);
    unaff_x21 = (byte *******)&bStack_330;
    *pppppppbStack_358 = (byte ******)0x800000000000006e;
    pppppppbStack_358[1] = ppppppbVar27;
    goto joined_r0x0001004977d4;
  case 0xef:
    goto code_r0x000100496df4;
  case 0xf0:
    goto code_r0x000100496e38;
  }
code_r0x000100497688:
  pppppppbStack_2e0 = (byte *******)CONCAT71(pppppppbStack_2e0._1_7_,bVar20);
code_r0x00010049768c:
  param_5 = &UNK_10b21c2d0;
code_r0x000100497694:
  pppppppbVar28 = (byte *******)&pppppppbStack_2e0;
code_r0x000100497698:
  pppppppbVar28 = (byte *******)FUN_107c05dcc(pppppppbVar28,&pppppppbStack_90,param_5);
  pppppppbVar21 = (byte *******)0x6e;
code_r0x0001004976a4:
  pppppppbVar21 = (byte *******)((ulong)pppppppbVar21 | 0x8000000000000000);
code_r0x0001004976a8:
  *(byte ********)param_3 = pppppppbVar21;
  *(byte ********)((long)param_3 + 8) = pppppppbVar28;
LAB_1004976ac:
code_r0x0001004976b0:
code_r0x0001004976b4:
code_r0x0001004976bc:
code_r0x0001004976c4:
  return;
code_r0x000100497680:
  pppppppbStack_2d8 = pppppppbVar21;
code_r0x000100497684:
  bVar20 = 2;
  goto code_r0x000100497688;
}

