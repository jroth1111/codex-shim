
void FUN_1007a1960(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 *extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 *extraout_x1_08;
  undefined8 *extraout_x1_09;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined8 *unaff_x21;
  long unaff_x29;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 *in_stack_00000000;
  byte bStack0000000000000008;
  undefined7 uStack0000000000000009;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  undefined1 uStack0000000000000018;
  undefined7 uStack0000000000000019;
  undefined1 uStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined1 uStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack0000000000000070;
  undefined7 uStack0000000000000071;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  undefined8 *puVar9;
  
  puVar17 = param_2._8_8_;
  puVar16 = param_2._0_8_;
code_r0x0001007a1960:
  uVar7 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
code_r0x0001007a1970:
  bStack0000000000000010 = (byte)uVar7;
  uStack0000000000000011 = (undefined7)((ulong)uVar7 >> 8);
LAB_1007a1624:
  puVar11 = (undefined8 *)0xf;
code_r0x0001007a1628:
  bStack0000000000000008 = (byte)puVar11;
code_r0x0001007a1630:
  puVar6 = &stack0x000000e8;
code_r0x0001007a1634:
  FUN_100d03040(puVar6);
  puVar6 = &stack0x00000090;
code_r0x0001007a1640:
  FUN_100d34830(puVar6);
  auVar19._8_8_ = extraout_x1_04;
  auVar19._0_8_ = unaff_x20;
code_r0x0001007a1644:
  puVar11 = (undefined8 *)((ulong)_cStack0000000000000070 & 0xff);
code_r0x0001007a1648:
  unaff_x20 = auVar19._0_8_;
  if ((int)puVar11 == 0x16) goto LAB_1007a1528;
code_r0x0001007a1650:
  FUN_100e077ec(&stack0x00000070);
  auVar19._8_8_ = extraout_x1_05;
  auVar19._0_8_ = unaff_x20;
code_r0x0001007a1658:
LAB_1007a1528:
  puVar8 = auVar19._8_8_;
  unaff_x20 = auVar19._0_8_;
  puVar11 = (undefined8 *)(ulong)bStack0000000000000008;
  puVar6 = (undefined8 *)CONCAT71(uStack0000000000000011,bStack0000000000000010);
  auVar18._8_8_ = puVar8;
  auVar18._0_8_ = puVar6;
  if (bStack0000000000000008 == 0xf) goto LAB_1007a1914;
  puVar15 = (undefined8 *)CONCAT71(uStack0000000000000021,uStack0000000000000020);
  puVar14 = (undefined8 *)CONCAT71(uStack0000000000000019,uStack0000000000000018);
  in_stack_00000068 = CONCAT71(uStack0000000000000029,uStack0000000000000028);
  puVar12 = (undefined8 *)&UNK_108c9b458;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  puVar9 = puVar8;
  bVar10 = bStack0000000000000008;
  in_stack_00000050 = puVar6;
  in_stack_00000058 = puVar14;
  in_stack_00000060 = puVar15;
  switch(puVar11) {
  case (undefined8 *)0x2:
    func_0x00010046cad4(in_stack_00000000,&stack0x00000050);
    break;
  case (undefined8 *)0x3:
    func_0x0001004a781c(in_stack_00000000,&stack0x00000050);
    break;
  case (undefined8 *)0x4:
    puVar8 = &stack0x00000050;
code_r0x0001007a16e0:
    func_0x0001004957b8(in_stack_00000000,puVar8);
    break;
  case (undefined8 *)0x5:
    func_0x000100455fcc(in_stack_00000000,&stack0x00000050);
code_r0x0001007a1780:
    break;
  case (undefined8 *)0x7:
    puVar8 = &stack0x00000050;
    puVar6 = in_stack_00000000;
code_r0x0001007a175c:
    func_0x00010046f538(puVar6,puVar8);
code_r0x0001007a1760:
    break;
  case (undefined8 *)0x8:
    puVar8 = &stack0x00000050;
    puVar6 = in_stack_00000000;
code_r0x0001007a17bc:
    func_0x00010042d3a8(puVar6,puVar8);
    break;
  case (undefined8 *)0xa:
    func_0x0001004423a0(in_stack_00000000,&stack0x00000050);
code_r0x0001007a17b0:
    break;
  case (undefined8 *)0xb:
    func_0x0001004b499c(in_stack_00000000,&stack0x00000050);
    break;
  case (undefined8 *)0xe:
    puVar11 = (undefined8 *)&UNK_108cae484;
    puVar12 = (undefined8 *)0xc;
code_r0x0001007a16a0:
    _cStack0000000000000070 = puVar11;
    in_stack_00000078 = puVar12;
code_r0x0001007a16a4:
    puVar11 = (undefined8 *)&UNK_108ca11fb;
code_r0x0001007a16ac:
    puVar12 = (undefined8 *)0x5;
code_r0x0001007a16b0:
    in_stack_00000080 = puVar11;
    in_stack_00000088 = puVar12;
code_r0x0001007a16b4:
    puVar6 = &stack0x00000050;
    puVar8 = (undefined8 *)&stack0x00000070;
code_r0x0001007a16bc:
    puVar6 = (undefined8 *)FUN_100490e6c(puVar6,puVar8);
code_r0x0001007a16c0:
    if (puVar6 != (undefined8 *)0x0) goto LAB_1007a1914;
    puVar11 = (undefined8 *)0x10;
    goto code_r0x0001007a191c;
  case (undefined8 *)0x10:
  case (undefined8 *)0x80:
    puVar11 = (undefined8 *)(ulong)*(ushort *)((long)puVar8 + 2);
  case (undefined8 *)0x6c:
code_r0x0001007a18b4:
    in_stack_00000078 = puVar11;
code_r0x0001007a18b8:
    bVar10 = 1;
code_r0x0001007a18bc:
    goto code_r0x0001007a18fc;
  case (undefined8 *)0x11:
  case (undefined8 *)0x13:
  case (undefined8 *)0x15:
  case (undefined8 *)0x17:
  case (undefined8 *)0x19:
  case (undefined8 *)0x1b:
  case (undefined8 *)0x1d:
  case (undefined8 *)0x1f:
  case (undefined8 *)0x21:
  case (undefined8 *)0x23:
  case (undefined8 *)0x25:
  case (undefined8 *)0x27:
  case (undefined8 *)0x29:
  case (undefined8 *)0x2b:
  case (undefined8 *)0x2d:
  case (undefined8 *)0x2f:
  case (undefined8 *)0x31:
  case (undefined8 *)0x35:
    bVar2 = (int)unaff_x19 == 0xf;
  default:
    if (bVar2) {
      *(long *)(unaff_x29 + -0xe0) = unaff_x20;
      *(undefined8 *)(unaff_x29 + -0xd8) = 4;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
      uVar7 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
      goto code_r0x0001007a1970;
    }
code_r0x0001007a157c:
    unaff_x21[0x1b] = in_stack_000000f8;
    unaff_x21[0x1a] = in_stack_000000f0;
    unaff_x21[0x19] = in_stack_000000e8;
    bStack0000000000000008 = (byte)unaff_x19;
code_r0x0001007a1590:
    bVar10 = 0x15;
code_r0x0001007a1594:
    puVar15 = (undefined8 *)unaff_x21[0x1b];
    puVar14 = (undefined8 *)unaff_x21[0x1a];
    bStack0000000000000010 = bVar10;
code_r0x0001007a159c:
    uStack0000000000000028 = SUB81(puVar15,0);
    uStack0000000000000029 = (undefined7)((ulong)puVar15 >> 8);
    uStack0000000000000021 = (undefined7)((ulong)puVar14 >> 8);
    uStack0000000000000019 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0xc9);
    uStack0000000000000020 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc9) >> 0x38);
    uStack0000000000000011 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0xc1);
    uStack0000000000000018 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc1) >> 0x38);
    puVar15 = (undefined8 *)CONCAT71(uStack0000000000000011,bStack0000000000000010);
    puVar14 = (undefined8 *)CONCAT71(uStack0000000000000009,bStack0000000000000008);
code_r0x0001007a15ac:
    puVar17 = (undefined8 *)CONCAT71(uStack0000000000000021,uStack0000000000000020);
    puVar16 = (undefined8 *)CONCAT71(uStack0000000000000019,uStack0000000000000018);
    in_stack_000000e0 = CONCAT71(uStack0000000000000029,uStack0000000000000028);
code_r0x0001007a15b8:
    unaff_x21[1] = puVar15;
    *unaff_x21 = puVar14;
    unaff_x21[3] = puVar17;
    unaff_x21[2] = puVar16;
    unaff_x19 = in_stack_00000098;
code_r0x0001007a15c0:
    puVar6 = &stack0x00000090;
    unaff_x20 = in_stack_000000a8;
code_r0x0001007a15cc:
    FUN_100d34830(puVar6);
    auVar19._8_8_ = extraout_x1_01;
    auVar19._0_8_ = unaff_x20;
code_r0x0001007a15d4:
    bVar3 = auVar19._0_8_ == unaff_x19;
code_r0x0001007a15d8:
    puVar8 = auVar19._8_8_;
    if (bVar3) {
code_r0x0001007a15dc:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = puVar8;
      auVar19 = auVar1 << 0x40;
      puVar11 = (undefined8 *)((ulong)_cStack0000000000000070 & 0xff);
code_r0x0001007a15e4:
      unaff_x20 = auVar19._0_8_;
      if ((int)puVar11 != 0x16) {
code_r0x0001007a15ec:
        puVar6 = (undefined8 *)&stack0x00000070;
code_r0x0001007a15f0:
        FUN_100e077ec(puVar6);
        auVar19._8_8_ = extraout_x1_02;
        auVar19._0_8_ = unaff_x20;
      }
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = in_stack_000000b0;
      auVar19 = thunk_FUN_1087e422c(in_stack_000000b0 + ((ulong)(auVar19._0_8_ - unaff_x19) >> 6),
                                    unaff_x29 + -0xc0,&UNK_10b23a190);
      unaff_x20 = auVar19._0_8_;
      if (cStack0000000000000070 != '\x16') goto code_r0x0001007a15ec;
    }
    unaff_x20 = auVar19._0_8_;
    if (unaff_x20 != 0) {
code_r0x0001007a15f8:
      bStack0000000000000010 = (byte)unaff_x20;
      uStack0000000000000011 = (undefined7)((ulong)unaff_x20 >> 8);
      bStack0000000000000008 = 0xf;
code_r0x0001007a1600:
      puVar11 = (undefined8 *)&stack0x000000c0;
code_r0x0001007a1608:
      puVar6 = (undefined8 *)((ulong)puVar11 | 8);
code_r0x0001007a160c:
      FUN_100e077ec(puVar6);
      auVar19._8_8_ = extraout_x1_03;
      auVar19._0_8_ = unaff_x20;
code_r0x0001007a1610:
    }
    goto LAB_1007a1528;
  case (undefined8 *)0x12:
    goto code_r0x0001007a1888;
  case (undefined8 *)0x14:
  case (undefined8 *)0xb4:
    goto code_r0x0001007a18b4;
  case (undefined8 *)0x16:
  case (undefined8 *)0xb0:
    goto code_r0x0001007a1868;
  case (undefined8 *)0x18:
    goto code_r0x0001007a1824;
  case (undefined8 *)0x1a:
    puVar11 = (undefined8 *)(long)*(int *)((long)puVar8 + 4);
  case (undefined8 *)0x7a:
code_r0x0001007a18f4:
    bVar10 = 2;
    in_stack_00000078 = puVar11;
    goto code_r0x0001007a18fc;
  case (undefined8 *)0x1c:
    puVar11 = (undefined8 *)(ulong)*(byte *)((long)puVar8 + 1);
    goto code_r0x0001007a18b4;
  case (undefined8 *)0x1e:
    in_stack_00000078 = (undefined8 *)(double)SUB84(puVar14,0);
    goto code_r0x0001007a18e4;
  case (undefined8 *)0x20:
  case (undefined8 *)0x9c:
    in_stack_00000080 = (undefined8 *)puVar8[2];
    bVar10 = 5;
    in_stack_00000078 = (undefined8 *)puVar8[1];
    goto code_r0x0001007a18fc;
  case (undefined8 *)0x22:
    goto code_r0x0001007a1844;
  case (undefined8 *)0x24:
    goto code_r0x0001007a18b8;
  case (undefined8 *)0x26:
    goto code_r0x0001007a1810;
  case (undefined8 *)0x28:
  case (undefined8 *)0x7e:
    goto code_r0x0001007a182c;
  case (undefined8 *)0x2a:
    bVar10 = *(byte *)((long)puVar8 + 1);
  case (undefined8 *)0xaa:
    _cStack0000000000000070 =
         (undefined8 *)((ulong)CONCAT61(uStack0000000000000071._1_6_,bVar10) << 8);
code_r0x0001007a18a8:
    _cStack0000000000000070 = (undefined8 *)((ulong)_cStack0000000000000070 & 0xffffffffffffff00);
    goto code_r0x0001007a1900;
  case (undefined8 *)0x2c:
    goto code_r0x0001007a17f8;
  case (undefined8 *)0x2e:
    puVar9 = (undefined8 *)&stack0x00000030;
    puVar11 = puVar8;
  case (undefined8 *)0x52:
    func_0x000107c04aa4(puVar11,puVar6,puVar9);
    puVar8 = extraout_x1_09;
code_r0x0001007a1868:
    auVar19._8_8_ = puVar8;
    auVar19._0_8_ = unaff_x20;
    goto LAB_1007a1528;
  case (undefined8 *)0x30:
    goto code_r0x0001007a17f0;
  case (undefined8 *)0x32:
  case (undefined8 *)0x33:
  case (undefined8 *)0x37:
  case (undefined8 *)0x39:
  case (undefined8 *)0x3b:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x8a:
  case (undefined8 *)0x8b:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xb7:
  case (undefined8 *)0xbf:
  case (undefined8 *)0xc0:
  case (undefined8 *)0xdd:
  case (undefined8 *)0xe0:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf5:
  case (undefined8 *)0xf6:
  case (undefined8 *)0xf7:
  case (undefined8 *)0xf9:
  case (undefined8 *)0xfb:
  case (undefined8 *)0xff:
  case (undefined8 *)0x0:
    puVar8 = &stack0x00000050;
  case (undefined8 *)0x67:
  case (undefined8 *)0xfd:
    puVar6 = in_stack_00000000;
code_r0x0001007a156c:
    func_0x00010047e5e8(puVar6,puVar8);
code_r0x0001007a1570:
    break;
  case (undefined8 *)0x34:
  case (undefined8 *)0xf8:
    goto code_r0x0001007a1918;
  case (undefined8 *)0x36:
    goto code_r0x0001007a15e4;
  case (undefined8 *)0x38:
  case (undefined8 *)0x48:
    bStack0000000000000010 = (byte)in_stack_00000108;
    uStack0000000000000011 = (undefined7)((ulong)in_stack_00000108 >> 8);
    goto LAB_1007a1624;
  case (undefined8 *)0x3a:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x72:
    goto code_r0x0001007a1590;
  case (undefined8 *)0x3c:
  case (undefined8 *)0x3d:
  case (undefined8 *)0x3f:
  case (undefined8 *)0x47:
  case (undefined8 *)0x49:
  case (undefined8 *)0x4d:
  case (undefined8 *)0x51:
  case (undefined8 *)0x57:
  case (undefined8 *)0x61:
  case (undefined8 *)0x6b:
  case (undefined8 *)0x73:
  case (undefined8 *)0x75:
  case (undefined8 *)0x79:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x83:
  case (undefined8 *)0x8d:
  case (undefined8 *)0x95:
  case (undefined8 *)0x97:
  case (undefined8 *)0x9a:
  case (undefined8 *)0x9b:
  case (undefined8 *)0x9f:
  case (undefined8 *)0xa1:
  case (undefined8 *)0xa3:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xaf:
  case (undefined8 *)0xb9:
  case (undefined8 *)0xdf:
    goto code_r0x0001007a157c;
  case (undefined8 *)0x40:
    puVar11 = (undefined8 *)puVar8[1];
    goto code_r0x0001007a18f4;
  case (undefined8 *)0x42:
    goto code_r0x0001007a1938;
  case (undefined8 *)0x44:
    in_stack_00000080 = (undefined8 *)&UNK_108c9b458;
    in_stack_00000078 = puVar11;
code_r0x0001007a1888:
    bVar10 = 6;
    goto code_r0x0001007a18fc;
  case (undefined8 *)0x46:
  case (undefined8 *)0xd4:
  case (undefined8 *)0xfc:
    goto code_r0x0001007a15cc;
  case (undefined8 *)0x4a:
    goto code_r0x0001007a1950;
  case (undefined8 *)0x4c:
  case (undefined8 *)0xa8:
    goto code_r0x0001007a1670;
  case (undefined8 *)0x4e:
    puVar11 = (undefined8 *)(long)*(short *)((long)puVar8 + 2);
  case (undefined8 *)0x86:
    goto code_r0x0001007a18f4;
  case (undefined8 *)0x50:
    goto code_r0x0001007a1634;
  case (undefined8 *)0x54:
  case (undefined8 *)0xe8:
    goto code_r0x0001007a18a8;
  case (undefined8 *)0x56:
    goto code_r0x0001007a15ec;
  case (undefined8 *)0x58:
    goto code_r0x0001007a1830;
  case (undefined8 *)0x5a:
    goto code_r0x0001007a1910;
  case (undefined8 *)0x5c:
    goto code_r0x0001007a180c;
  case (undefined8 *)0x60:
    goto code_r0x0001007a16b0;
  case (undefined8 *)0x62:
    goto code_r0x0001007a16bc;
  case (undefined8 *)0x63:
  case (undefined8 *)0x65:
  case (undefined8 *)0x6a:
  case (undefined8 *)0x8f:
  case (undefined8 *)0x91:
  case (undefined8 *)0xbb:
  case (undefined8 *)0xbd:
    goto code_r0x0001007a1570;
  case (undefined8 *)0x64:
  case (undefined8 *)0xd:
    func_0x00010048cdb8(in_stack_00000000,&stack0x00000050);
    break;
  case (undefined8 *)0x66:
    goto code_r0x0001007a17bc;
  case (undefined8 *)0x68:
  case (undefined8 *)0xf2:
    goto code_r0x0001007a195c;
  case (undefined8 *)0x6e:
    goto code_r0x0001007a18fc;
  case (undefined8 *)0x70:
    goto code_r0x0001007a1848;
  case (undefined8 *)0x74:
    goto code_r0x0001007a15d8;
  case (undefined8 *)0x76:
    goto LAB_1007a1914;
  case (undefined8 *)0x78:
    goto code_r0x0001007a1648;
  case (undefined8 *)0x7c:
  case (undefined8 *)0xcf:
    goto code_r0x0001007a1600;
  case (undefined8 *)0x82:
  case (undefined8 *)0x96:
  case (undefined8 *)0xda:
    goto code_r0x0001007a15b8;
  case (undefined8 *)0x84:
    goto code_r0x0001007a1800;
  case (undefined8 *)0x88:
  case (undefined8 *)0x92:
    goto code_r0x0001007a17d0;
  case (undefined8 *)0x8c:
    goto code_r0x0001007a1674;
  case (undefined8 *)0x8e:
  case (undefined8 *)0xa4:
    goto code_r0x0001007a16a0;
  case (undefined8 *)0x90:
    goto code_r0x0001007a1780;
  case (undefined8 *)0x93:
    goto code_r0x0001007a156c;
  case (undefined8 *)0x94:
    goto code_r0x0001007a15ac;
  case (undefined8 *)0x98:
    goto code_r0x0001007a1934;
  case (undefined8 *)0x9e:
  case (undefined8 *)0xd8:
    goto code_r0x0001007a1610;
  case (undefined8 *)0xa0:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xe2:
    goto code_r0x0001007a1658;
  case (undefined8 *)0xa2:
    goto code_r0x0001007a1594;
  case (undefined8 *)0xa6:
    goto code_r0x0001007a191c;
  case (undefined8 *)0xac:
    in_stack_00000078 = (undefined8 *)puVar8[1];
code_r0x0001007a18e4:
    bVar10 = 3;
code_r0x0001007a18fc:
    _cStack0000000000000070 = (undefined8 *)CONCAT71(uStack0000000000000071,bVar10);
code_r0x0001007a1900:
    puVar6 = (undefined8 *)&stack0x00000070;
    puVar8 = (undefined8 *)&stack0x00000030;
code_r0x0001007a1910:
    puVar6 = (undefined8 *)FUN_107c05dcc(puVar6,puVar8);
LAB_1007a1914:
    puVar11 = (undefined8 *)0x11;
code_r0x0001007a1918:
    in_stack_00000000[1] = puVar6;
code_r0x0001007a191c:
    *in_stack_00000000 = puVar11;
    break;
  case (undefined8 *)0xae:
    goto code_r0x0001007a1628;
  case (undefined8 *)0xb2:
    *(long *)(unaff_x29 + -0xe0) = unaff_x20;
    *(undefined8 **)(unaff_x29 + -0xd8) = puVar11;
code_r0x0001007a1950:
    puVar11 = (undefined8 *)(unaff_x29 + -0xe0);
    puVar12 = (undefined8 *)&DAT_100c7b3a0;
code_r0x0001007a195c:
    *(undefined8 **)(unaff_x29 + -0xc0) = puVar11;
    *(undefined8 **)(unaff_x29 + -0xb8) = puVar12;
    goto code_r0x0001007a1960;
  case (undefined8 *)0xb8:
  case (undefined8 *)0xed:
    goto code_r0x0001007a16f4;
  case (undefined8 *)0xba:
    goto code_r0x0001007a16e0;
  case (undefined8 *)0xbc:
    goto code_r0x0001007a1760;
  case (undefined8 *)0xbe:
    goto code_r0x0001007a1770;
  case (undefined8 *)0xc1:
  case (undefined8 *)0xc:
    puVar11 = (undefined8 *)&UNK_108cae484;
code_r0x0001007a16f4:
    in_stack_00000078 = (undefined8 *)0xc;
    in_stack_00000080 = (undefined8 *)&UNK_108cae56d;
    in_stack_00000088 = (undefined8 *)0x11;
    puVar6 = &stack0x00000050;
    _cStack0000000000000070 = puVar11;
code_r0x0001007a1710:
    puVar6 = (undefined8 *)FUN_100490e6c(puVar6,&stack0x00000070);
    if (puVar6 != (undefined8 *)0x0) goto LAB_1007a1914;
    puVar11 = (undefined8 *)0xe;
    goto code_r0x0001007a191c;
  case (undefined8 *)0xc2:
  case (undefined8 *)0xf3:
    goto code_r0x0001007a1644;
  case (undefined8 *)0xc3:
    goto code_r0x0001007a167c;
  case (undefined8 *)0xc4:
  case (undefined8 *)0xdc:
  case (undefined8 *)0xee:
    goto code_r0x0001007a15d4;
  case (undefined8 *)0xc5:
  case (undefined8 *)0x9:
    func_0x000100483b60(in_stack_00000000,&stack0x00000050);
    break;
  case (undefined8 *)0xc6:
    goto code_r0x0001007a175c;
  case (undefined8 *)0xc7:
    goto code_r0x0001007a16b4;
  case (undefined8 *)0xc8:
    goto code_r0x0001007a17cc;
  case (undefined8 *)0xc9:
    goto code_r0x0001007a160c;
  case (undefined8 *)0xca:
  case (undefined8 *)0x6:
    func_0x0001004911a4(in_stack_00000000,&stack0x00000050);
    break;
  case (undefined8 *)0xcb:
    goto code_r0x0001007a159c;
  case (undefined8 *)0xcc:
    goto code_r0x0001007a1630;
  case (undefined8 *)0xcd:
  case (undefined8 *)0xfe:
    goto code_r0x0001007a1678;
  case (undefined8 *)0xce:
    goto code_r0x0001007a1608;
  case (undefined8 *)0xd0:
    goto code_r0x0001007a15f8;
  case (undefined8 *)0xd1:
    goto code_r0x0001007a15f0;
  case (undefined8 *)0xd3:
    goto code_r0x0001007a1650;
  case (undefined8 *)0xd5:
  case (undefined8 *)0xe9:
    goto LAB_1007a1624;
  case (undefined8 *)0xd6:
    goto code_r0x0001007a14f4;
  case (undefined8 *)0xd7:
    goto code_r0x0001007a15dc;
  case (undefined8 *)0xd9:
    func_0x0001013efd54();
    puVar11 = (undefined8 *)(ulong)*(byte *)(unaff_x29 + -0xe0);
    puVar8 = extraout_x1_06;
code_r0x0001007a1670:
    bVar4 = (int)puVar11 == 0x16;
code_r0x0001007a1674:
    if (bVar4) {
code_r0x0001007a1678:
      puVar11 = *(undefined8 **)(unaff_x29 + -0xd8);
code_r0x0001007a167c:
      bStack0000000000000010 = (byte)puVar11;
      uStack0000000000000011 = (undefined7)((ulong)puVar11 >> 8);
      bStack0000000000000008 = 0xf;
code_r0x0001007a1684:
code_r0x0001007a14f4:
      lVar5 = *(long *)(unaff_x29 + -0xb8);
      unaff_x19 = *(long *)(unaff_x29 + -0xa8);
      lVar13 = ((ulong)(unaff_x19 - lVar5) >> 5) + 1;
      while( true ) {
        auVar19._8_8_ = puVar8;
        auVar19._0_8_ = unaff_x20;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        lVar5 = lVar5 + 0x20;
        FUN_100e077ec();
        puVar8 = extraout_x1;
        unaff_x20 = lVar5;
      }
      unaff_x21 = (undefined8 *)0x0;
      if (*(long *)(unaff_x29 + -0xb0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xc0));
        auVar19._8_8_ = extraout_x1_00;
      }
    }
    else {
      puVar17 = (undefined8 *)unaff_x21[0xd];
      puVar16 = (undefined8 *)unaff_x21[0xc];
      *(undefined8 *)((long)unaff_x21 + 0x1f) = unaff_x21[0xf];
      *(undefined8 *)((long)unaff_x21 + 0x17) = unaff_x21[0xe];
code_r0x0001007a17cc:
      *(undefined8 **)((long)unaff_x21 + 0xf) = puVar17;
      *(undefined8 **)((long)unaff_x21 + 7) = puVar16;
code_r0x0001007a17d0:
      puVar17 = (undefined8 *)unaff_x21[1];
      puVar16 = (undefined8 *)*unaff_x21;
      puVar15 = (undefined8 *)unaff_x21[3];
      puVar14 = (undefined8 *)unaff_x21[2];
      bStack0000000000000008 = (byte)unaff_x19;
code_r0x0001007a17d8:
      uStack0000000000000021 = SUB87(puVar15,0);
      uStack0000000000000019 = SUB87(puVar14,0);
      uStack0000000000000020 = (undefined1)((ulong)puVar14 >> 0x38);
      uStack0000000000000011 = SUB87(puVar17,0);
      uStack0000000000000018 = (undefined1)((ulong)puVar17 >> 0x38);
      uStack0000000000000009 = SUB87(puVar16,0);
      bStack0000000000000010 = (byte)((ulong)puVar16 >> 0x38);
      puVar11 = *(undefined8 **)((long)unaff_x21 + 0x1f);
      uStack0000000000000028 = SUB81(puVar11,0);
      uStack0000000000000029 = (undefined7)((ulong)puVar11 >> 8);
      puVar15 = (undefined8 *)CONCAT71(uStack0000000000000011,bStack0000000000000010);
      puVar14 = (undefined8 *)CONCAT71(uStack0000000000000009,bStack0000000000000008);
      puVar17 = (undefined8 *)CONCAT71(uStack0000000000000021,uStack0000000000000020);
      puVar16 = (undefined8 *)CONCAT71(uStack0000000000000019,uStack0000000000000018);
code_r0x0001007a17f0:
      _cStack0000000000000070 = puVar14;
      in_stack_00000078 = puVar15;
      in_stack_00000080 = puVar16;
      in_stack_00000088 = puVar17;
      in_stack_00000090 = puVar11;
code_r0x0001007a17f8:
      auVar18 = FUN_100fbc738(unaff_x29 + -0xc0);
code_r0x0001007a1800:
      auVar19._8_8_ = auVar18._8_8_;
      auVar19._0_8_ = unaff_x20;
      if (auVar18._0_8_ != 0) {
        bStack0000000000000010 = auVar18[0];
        uStack0000000000000011 = auVar18._1_7_;
        bStack0000000000000008 = 0xf;
code_r0x0001007a180c:
code_r0x0001007a1810:
        puVar11 = (undefined8 *)&stack0x00000070;
        goto code_r0x0001007a1608;
      }
    }
    goto LAB_1007a1528;
  case (undefined8 *)0xdb:
    goto code_r0x0001007a1640;
  case (undefined8 *)0xde:
    goto code_r0x0001007a16ac;
  case (undefined8 *)0xe1:
    goto code_r0x0001007a1768;
  case (undefined8 *)0xe3:
    goto code_r0x0001007a16c0;
  case (undefined8 *)0xe4:
    goto code_r0x0001007a15c0;
  case (undefined8 *)0xe5:
    goto code_r0x0001007a17d8;
  case (undefined8 *)0xe6:
    puVar8 = (undefined8 *)&stack0x00000030;
code_r0x0001007a1844:
    func_0x000107c04598(puVar6,puVar8);
    puVar8 = extraout_x1_08;
code_r0x0001007a1848:
    auVar19._8_8_ = puVar8;
    auVar19._0_8_ = unaff_x20;
    goto LAB_1007a1528;
  case (undefined8 *)0xe7:
    goto code_r0x0001007a1710;
  case (undefined8 *)0xeb:
    goto code_r0x0001007a17b0;
  case (undefined8 *)0xec:
    goto code_r0x0001007a16a4;
  case (undefined8 *)0xef:
    puVar6 = (undefined8 *)&stack0x00000008;
code_r0x0001007a1824:
    puVar9 = (undefined8 *)&stack0x00000030;
    puVar11 = puVar8;
code_r0x0001007a182c:
code_r0x0001007a1830:
    func_0x000107c051c0(puVar11,puVar6,puVar9);
    auVar19._8_8_ = extraout_x1_07;
    auVar19._0_8_ = unaff_x20;
    goto LAB_1007a1528;
  case (undefined8 *)0xf0:
    goto code_r0x0001007a18bc;
  case (undefined8 *)0xf1:
  case (undefined8 *)0x1:
    puVar8 = &stack0x00000050;
code_r0x0001007a1768:
    func_0x00010043960c(in_stack_00000000,puVar8);
code_r0x0001007a1770:
    break;
  case (undefined8 *)0xf4:
    break;
  case (undefined8 *)0xfa:
    goto code_r0x0001007a1684;
  }
code_r0x0001007a1934:
code_r0x0001007a1938:
  return;
}

