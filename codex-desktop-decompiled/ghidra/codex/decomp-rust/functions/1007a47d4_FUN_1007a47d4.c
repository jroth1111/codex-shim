
/* WARNING: Type propagation algorithm not settling */

void FUN_1007a47d4(char *param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  char **ppcVar9;
  code *pcVar10;
  char **ppcVar11;
  char **ppcVar12;
  char **ppcVar13;
  char **ppcVar14;
  char **ppcVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 ******ppppppuVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  ulong uVar30;
  byte *extraout_x12;
  byte *extraout_x12_00;
  byte *extraout_x12_01;
  byte *extraout_x12_02;
  byte *pbVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  undefined8 ******ppppppuVar34;
  uint uVar35;
  long *plVar36;
  long lVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined8 ******ppppppuVar40;
  byte *unaff_x27;
  long *unaff_x28;
  undefined8 *******pppppppuVar41;
  undefined8 ******ppppppuVar42;
  long lVar43;
  long lVar44;
  undefined1 auVar45 [16];
  undefined1 auStack_3a0 [64];
  byte abStack_360 [448];
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  char cStack_120;
  byte bStack_11f;
  undefined6 uStack_11e;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  byte *pbStack_c9;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte *pbStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte *pbStack_68;
  
  ppcVar11 = &pcStack_140;
  pppppppuVar41 = (undefined8 *******)&stack0xfffffffffffffff0;
  cVar6 = *param_2;
  if ((cVar6 != '\f') && (cVar6 != '\r')) {
    if (cVar6 == '\x15') {
      uStack_130 = *(undefined8 *)(param_2 + 8);
      pcStack_140 = *(char **)(param_2 + 0x10);
      lVar27 = *(long *)(param_2 + 0x18);
      pcStack_128 = pcStack_140 + lVar27 * 0x40;
      pcStack_138 = pcStack_140;
      if (lVar27 == 0) {
LAB_1007a4a10:
        uStack_c0 = CONCAT71(uStack_c0._1_7_,0xb);
        uVar17 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_c0,&UNK_10b20a580,&UNK_10b20a590);
        *(undefined8 *)(param_1 + 8) = uVar17;
        *param_1 = '\x01';
      }
      else {
        pcVar24 = pcStack_140 + 0x40;
        cVar4 = *pcStack_140;
        pcStack_138 = pcVar24;
        if (cVar4 == '\x16') goto LAB_1007a4a10;
        uVar17 = *(undefined8 *)(pcStack_140 + 1);
        uStack_117 = (undefined7)*(undefined8 *)(pcStack_140 + 9);
        bStack_11f = (byte)uVar17;
        uStack_11e = (undefined6)((ulong)uVar17 >> 8);
        uStack_118 = (undefined1)((ulong)uVar17 >> 0x38);
        uStack_108 = *(undefined8 *)(pcStack_140 + 0x18);
        uStack_f0 = *(undefined8 *)(pcStack_140 + 0x10);
        uStack_78 = *(undefined8 *)(pcStack_140 + 0x28);
        uStack_80 = *(undefined8 *)(pcStack_140 + 0x20);
        uStack_110 = (undefined1)uStack_f0;
        uStack_10f = (undefined7)((ulong)uStack_f0 >> 8);
        pbStack_68 = *(byte **)(pcStack_140 + 0x38);
        uStack_70 = *(undefined8 *)(pcStack_140 + 0x30);
        cStack_120 = cVar4;
        if (lVar27 == 1) {
LAB_1007a488c:
          pbStack_f8 = (byte *)CONCAT71(uStack_117,uStack_118);
          uStack_100 = CONCAT62(uStack_11e,CONCAT11(bStack_11f,cVar4));
          uVar38 = (uint)uStack_80 & 0xff;
          uStack_d8 = (undefined7)*(undefined8 *)(pcStack_140 + 0x29);
          uStack_e0 = (undefined7)*(undefined8 *)(pcStack_140 + 0x21);
          uStack_d9 = (undefined1)((ulong)*(undefined8 *)(pcStack_140 + 0x21) >> 0x38);
          pbStack_c9 = *(byte **)(pcStack_140 + 0x38);
          uStack_d1 = (undefined1)*(undefined8 *)(pcStack_140 + 0x30);
          uStack_d0 = (undefined7)((ulong)*(undefined8 *)(pcStack_140 + 0x30) >> 8);
          plVar36 = (long *)0x1;
          uStack_e8 = uStack_108;
          FUN_100d34830(&pcStack_140);
          goto LAB_1007a48c8;
        }
        pcStack_138 = pcStack_140 + 0x80;
        pbStack_b8 = *(byte **)(pcStack_140 + 0x48);
        uStack_c0 = *(undefined8 *)pcVar24;
        uStack_a8 = *(undefined8 *)(pcStack_140 + 0x58);
        uStack_b0 = *(undefined8 *)(pcStack_140 + 0x50);
        pbStack_88 = *(byte **)(pcStack_140 + 0x78);
        uStack_98 = (undefined1)*(undefined8 *)(pcStack_140 + 0x68);
        uStack_97 = (undefined7)((ulong)*(undefined8 *)(pcStack_140 + 0x68) >> 8);
        uStack_a0 = (undefined1)*(undefined8 *)(pcStack_140 + 0x60);
        uStack_9f = (undefined7)((ulong)*(undefined8 *)(pcStack_140 + 0x60) >> 8);
        uStack_90 = (undefined1)*(undefined8 *)(pcStack_140 + 0x70);
        uStack_8f = (undefined7)((ulong)*(undefined8 *)(pcStack_140 + 0x70) >> 8);
        if ((byte)uStack_c0 == '\x16') goto LAB_1007a488c;
        FUN_100e077ec(&uStack_c0);
        FUN_100e077ec(&uStack_a0);
        uStack_c0 = CONCAT71(uStack_c0._1_7_,0xb);
        uVar17 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_c0,&UNK_10b20a580,&UNK_10b20a590);
        *(undefined8 *)(param_1 + 8) = uVar17;
        *param_1 = '\x01';
        FUN_100e077ec(&uStack_80);
        FUN_100e077ec(&cStack_120);
      }
      FUN_100d34830(&pcStack_140);
    }
    else {
      thunk_FUN_1088556a8(&uStack_c0,param_2);
      uVar17 = FUN_107c05dcc(&uStack_c0,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(param_1 + 8) = uVar17;
      *param_1 = '\x01';
      FUN_100e077ec(param_2);
    }
    goto code_r0x0001007a4dfc;
  }
  plVar36 = (long *)0x0;
  pbStack_f8 = *(byte **)(param_2 + 8);
  uStack_100 = *(undefined8 *)param_2;
  uStack_e8 = *(undefined8 *)(param_2 + 0x18);
  uStack_f0 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = 0x16;
LAB_1007a48c8:
  uVar17 = uStack_f0;
  pbVar33 = pbStack_f8;
  pbStack_b8 = pbStack_f8;
  uStack_c0 = uStack_100;
  uVar8 = uStack_c0;
  uStack_a8 = uStack_e8;
  uStack_b0 = uStack_f0;
  uStack_a0 = (undefined1)uVar38;
  uStack_97 = uStack_d8;
  uStack_9f = uStack_e0;
  uStack_98 = uStack_d9;
  pbStack_88 = pbStack_c9;
  uStack_90 = uStack_d1;
  uStack_8f = uStack_d0;
  uStack_c0._0_1_ = (byte)uStack_100;
  uVar35 = (uint)plVar36;
  uStack_c0 = uVar8;
  if (0xc < (byte)uStack_c0) {
    if ((byte)uStack_c0 == 0xd) {
      func_0x000100a8da9c(&cStack_120,pbStack_f8,uStack_f0);
      goto LAB_1007a49c8;
    }
    if ((byte)uStack_c0 != 0xe) {
      if ((byte)uStack_c0 != 0xf) goto LAB_1007a4ae0;
      func_0x000100a8d484(&cStack_120,pbStack_f8,uStack_f0);
      goto LAB_1007a49c8;
    }
    auVar45 = func_0x000100a8d484(&cStack_120,uStack_f0,uStack_e8);
    pbVar31 = extraout_x12_00;
    if (pbVar33 != (byte *)0x0) goto LAB_1007a4988;
LAB_1007a49d0:
    bVar16 = cStack_120 == '\x01';
    if (!bVar16) goto LAB_1007a4b0c;
LAB_1007a49dc:
    pcVar24 = (char *)CONCAT71(uStack_117,uStack_118);
    if (uVar38 != 0x16) {
      FUN_100e077ec(&uStack_a0);
    }
    goto LAB_1007a49f0;
  }
  if ((byte)uStack_c0 == 1) {
    uStack_c0._1_1_ = (byte)((ulong)uStack_100 >> 8);
    if (10 < uStack_c0._1_1_) {
      uStack_c0._1_1_ = 0xb;
    }
    cStack_120 = '\0';
    bStack_11f = uStack_c0._1_1_;
LAB_1007a49c8:
    auVar45 = FUN_100e077ec(&uStack_c0);
    pbVar31 = extraout_x12_02;
    pbVar33 = unaff_x27;
    goto LAB_1007a49d0;
  }
  if ((byte)uStack_c0 == 4) {
    if ((byte *)0xa < pbStack_f8) {
      pbVar33 = (byte *)0xb;
    }
    bStack_11f = (byte)pbVar33;
    cStack_120 = '\0';
    goto LAB_1007a49c8;
  }
  if ((byte)uStack_c0 != 0xc) {
LAB_1007a4ae0:
    uVar17 = thunk_FUN_108855b04(&uStack_c0,&pcStack_140,&UNK_10b20eec0);
    uStack_118 = (undefined1)uVar17;
    uStack_117 = (undefined7)((ulong)uVar17 >> 8);
    cStack_120 = '\x01';
    goto LAB_1007a49dc;
  }
  auVar45 = func_0x000100a8da9c(&cStack_120,uStack_f0,uStack_e8);
  pbVar31 = extraout_x12;
  if (pbVar33 == (byte *)0x0) goto LAB_1007a49d0;
LAB_1007a4988:
  auVar45 = _free(uVar17);
  if (cStack_120 == '\x01') goto LAB_1007a49dc;
  bVar16 = false;
  pbVar31 = extraout_x12_01;
LAB_1007a4b0c:
  bVar5 = bStack_11f;
  pcVar24 = auVar45._0_8_;
  uStack_70 = CONCAT71(uStack_d0,uStack_d1);
  uStack_78 = CONCAT71(uStack_d8,uStack_d9);
  pbStack_68 = pbStack_c9;
  uStack_80 = CONCAT71(uStack_9f,uStack_a0);
  uVar20 = (uint)CONCAT71(uStack_9f,uStack_a0) & 0xff;
  pbVar21 = (byte *)(ulong)uVar20;
  puVar25 = &UNK_108c9b518;
  uVar30 = (ulong)(byte)(&UNK_108c9b518)[bStack_11f];
  puVar28 = &UNK_1007a4b44 + uVar30 * 4;
  ppcVar12 = &pcStack_140;
  ppcVar13 = &pcStack_140;
  ppcVar14 = &pcStack_140;
  ppcVar15 = &pcStack_140;
  ppcVar9 = &pcStack_140;
  switch(bStack_11f) {
  case 0:
  case 0x1d:
  case 0x20:
  case 0x2a:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x39:
  case 0x3b:
  case 0x3f:
  case 0x45:
  case 0x49:
  case 0x4d:
  case 0x4f:
  case 0x53:
  case 0x76:
  case 0x77:
  case 0x7b:
  case 0x7d:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 199:
  case 0xc9:
  case 0xcb:
  case 0xd7:
  case 0xdf:
  case 0xe5:
  case 0xeb:
  case 0xf1:
    bVar16 = uVar20 == 0x16;
  default:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4b4c:
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4b50:
    if (bVar16) break;
code_r0x0001007a4b54:
    bVar16 = uVar20 == 0x15;
code_r0x0001007a4b58:
    if (bVar16) {
code_r0x0001007a4b5c:
      if (pbStack_c9 == (byte *)0x0) break;
    }
code_r0x0001007a4b64:
    pcVar24 = (char *)&uStack_80;
code_r0x0001007a4b70:
    pcVar24 = (char *)thunk_FUN_108855b04(pcVar24,&pcStack_140);
code_r0x0001007a4e2c:
LAB_1007a49f0:
    *(char **)(param_1 + 8) = pcVar24;
    *param_1 = '\x01';
    uVar35 = uVar35 ^ 1;
    if (cVar6 == '\x15') {
      uVar35 = 1;
    }
    goto joined_r0x0001007a4dec;
  case 1:
    bVar16 = uVar20 == 0x16;
  case 0xa6:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4cd4:
    if (uVar20 == 0x12) break;
code_r0x0001007a4cdc:
    if (uVar20 == 0x15) {
code_r0x0001007a4ce4:
      if (pbStack_c9 == (byte *)0x0) break;
    }
code_r0x0001007a4cf0:
code_r0x0001007a4cf4:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = &uStack_80;
code_r0x0001007a4cfc:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
    goto code_r0x0001007a4e2c;
  case 2:
  case 0x33:
    bVar16 = uVar20 == 0x16;
  case 0xb4:
    if (bVar16) goto code_r0x0001007a4dd4;
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4c30:
    if (bVar16) break;
    bVar16 = uVar20 == 0x15;
code_r0x0001007a4c38:
    if ((bVar16) && (pbStack_c9 == (byte *)0x0)) break;
code_r0x0001007a4c44:
code_r0x0001007a4c48:
code_r0x0001007a4c4c:
    pcVar24 = (char *)thunk_FUN_108855b04(&uStack_80,&pcStack_140);
code_r0x0001007a4c58:
    goto code_r0x0001007a4e2c;
  case 3:
  case 0x92:
    bVar16 = uVar20 == 0x16;
  case 0x5a:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4c64:
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4c68:
    if (bVar16) break;
    bVar16 = uVar20 == 0x15;
code_r0x0001007a4c70:
    if ((bVar16) && (pbStack_c9 == (byte *)0x0)) break;
code_r0x0001007a4c80:
code_r0x0001007a4c84:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = &uStack_80;
code_r0x0001007a4c8c:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
code_r0x0001007a4c90:
    goto code_r0x0001007a4e2c;
  case 4:
  case 0x1c:
  case 0x2e:
    if (uVar20 != 0x16) goto code_r0x0001007a4bbc;
    goto code_r0x0001007a4dd4;
  case 5:
  case 0x4e:
    bVar16 = uVar20 == 0x16;
  case 0x9e:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4d0c:
    if (uVar20 == 0x12) break;
    if (uVar20 == 0x15) {
code_r0x0001007a4d1c:
      if (pbStack_c9 == (byte *)0x0) break;
    }
code_r0x0001007a4d2c:
    pcVar24 = (char *)thunk_FUN_108855b04(&uStack_80,&pcStack_140);
    goto code_r0x0001007a4e2c;
  case 6:
    bVar16 = uVar20 == 0x16;
  case 0xea:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4d44:
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4d48:
    if (bVar16) break;
code_r0x0001007a4d4c:
    if ((uVar20 == 0x15) && (pbStack_c9 == (byte *)0x0)) break;
code_r0x0001007a4d64:
    pcVar24 = (char *)thunk_FUN_108855b04(&uStack_80,&pcStack_140);
code_r0x0001007a4d70:
    goto code_r0x0001007a4e2c;
  case 7:
    bVar16 = uVar20 == 0x16;
  case 0x6e:
    if (bVar16) goto code_r0x0001007a4dd4;
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4ca0:
    if (bVar16) break;
    if (uVar20 == 0x15) {
code_r0x0001007a4cac:
      if (pbStack_c9 == (byte *)0x0) break;
    }
code_r0x0001007a4cb4:
code_r0x0001007a4cb8:
    pcVar24 = (char *)&uStack_80;
code_r0x0001007a4cc0:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = pcVar24;
code_r0x0001007a4cc4:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
    goto code_r0x0001007a4e2c;
  case 8:
    bVar16 = uVar20 == 0x16;
  case 0x9a:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4db4:
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4db8:
    if (bVar16) break;
    bVar16 = uVar20 == 0x15;
code_r0x0001007a4dc0:
    if ((bVar16) && (pbStack_c9 == (byte *)0x0)) break;
code_r0x0001007a4e18:
code_r0x0001007a4e20:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = &uStack_80;
code_r0x0001007a4e28:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
    goto code_r0x0001007a4e2c;
  case 9:
  case 0x70:
    bVar16 = uVar20 == 0x16;
  case 0x18:
    if (bVar16) goto code_r0x0001007a4dd4;
code_r0x0001007a4bf4:
    if (uVar20 == 0x12) break;
code_r0x0001007a4bfc:
    if (uVar20 == 0x15) {
code_r0x0001007a4c04:
      if (pbStack_c9 == (byte *)0x0) break;
    }
code_r0x0001007a4c10:
    pcVar24 = (char *)&uStack_80;
code_r0x0001007a4c18:
    pcVar24 = (char *)thunk_FUN_108855b04(pcVar24,&pcStack_140);
code_r0x0001007a4c20:
    goto code_r0x0001007a4e2c;
  case 10:
    if (uVar20 == 0x16) goto code_r0x0001007a4dd4;
    if (uVar20 != 0x12) {
      if (uVar20 == 0x15) goto code_r0x0001007a4d8c;
      goto code_r0x0001007a4d94;
    }
    break;
  case 0xb:
    bVar16 = uVar20 == 0x16;
  case 0xb6:
    if (bVar16) goto code_r0x0001007a4dd4;
    bVar16 = uVar20 == 0x12;
code_r0x0001007a4b88:
    if (bVar16) break;
    pbVar21 = pbStack_c9;
    if (uVar20 == 0x15) {
code_r0x0001007a4b98:
      if (pbVar21 == (byte *)0x0) break;
    }
code_r0x0001007a4ba0:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = &uStack_80;
code_r0x0001007a4bac:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
    goto code_r0x0001007a4e2c;
  case 0xc:
  case 0x4c:
    goto code_r0x0001007a4c10;
  case 0xd:
  case 0x3e:
    goto code_r0x0001007a4c58;
  case 0xe:
  case 0x8a:
    goto code_r0x0001007a4be8;
  case 0xf:
    goto code_r0x0001007a4be0;
  case 0x10:
    goto code_r0x0001007a4bd8;
  case 0x11:
    goto code_r0x0001007a4bd0;
  case 0x12:
  case 0x22:
  case 0x66:
  case 0x98:
    goto code_r0x0001007a4c38;
  case 0x13:
    goto code_r0x0001007a4c30;
  case 0x14:
  case 0x3c:
  case 0xce:
    goto code_r0x0001007a4bac;
  case 0x15:
  case 0x29:
  case 0x6a:
    goto code_r0x0001007a4c04;
  case 0x16:
  case 0x62:
    goto code_r0x0001007a4c68;
  case 0x17:
  case 0xd6:
code_r0x0001007a4bbc:
    if (uVar20 != 0x12) goto code_r0x0001007a4bc4;
    break;
  case 0x19:
    goto code_r0x0001007a4c48;
  case 0x1a:
  case 0xe4:
    goto code_r0x0001007a4b98;
  case 0x1b:
  case 0x6c:
    goto code_r0x0001007a4c20;
  case 0x1e:
    goto code_r0x0001007a4c8c;
  case 0x1f:
  case 0xfa:
    goto code_r0x0001007a4b5c;
  case 0x21:
    goto code_r0x0001007a4d48;
  case 0x23:
    goto code_r0x0001007a4ca0;
  case 0x24:
  case 0x40:
  case 0xc4:
    goto code_r0x0001007a4ba0;
  case 0x25:
  case 0x4a:
    goto code_r0x0001007a4db8;
  case 0x26:
    goto code_r0x0001007a4e20;
  case 0x27:
    goto code_r0x0001007a4cf0;
  case 0x28:
    param_1 = pcVar24;
    if (uVar38 != 0x16) {
      FUN_100e077ec(&uStack_a0);
      goto code_r0x0001007a4e9c;
    }
  case 0xba:
code_r0x0001007a4ea8:
    if ((cVar6 != '\x15') && (uVar35 != 0)) {
      FUN_100e077ec(param_2);
    }
code_r0x0001007a4ebc:
    __Unwind_Resume(param_1);
    auVar45 = FUN_107c05ccc();
    pbVar33 = auVar45._8_8_;
    unaff_x28 = auVar45._0_8_;
    pppppppuStack_150 = pppppppuVar41;
    puStack_148 = &DAT_1007a4ec8;
    pppppppuVar41 = &pppppppuStack_150;
    ppcVar11 = (char **)auStack_3a0;
    uVar20 = (uint)*pbVar33;
    bVar16 = *pbVar33 == 0x14;
code_r0x0001007a4ef8:
    *(uint *)((long)ppcVar11 + 0x3c) = uVar20;
    if (bVar16) {
      lVar27 = *(long *)(pbVar33 + 8);
      pcVar3 = *(char **)(pbVar33 + 0x10);
      lVar37 = *(long *)(pbVar33 + 0x18);
      *(char **)((long)ppcVar11 + 0xf0) = pcVar3;
      *(char **)((long)ppcVar11 + 0xf8) = pcVar3;
      *(long *)((long)ppcVar11 + 0x100) = lVar27;
      *(char **)((long)ppcVar11 + 0x108) = pcVar3 + lVar37 * 0x20;
      *(undefined8 *)((long)ppcVar11 + 0x110) = 0;
      pcVar24 = pcVar3;
      if (lVar37 == 0) {
code_r0x0001007a53e0:
        ppppppuVar19 = (undefined8 ******)thunk_FUN_1087e422c(0,&UNK_10b22d550,&UNK_10b20a590);
code_r0x0001007a53fc:
        *unaff_x28 = 2;
        unaff_x28[1] = (long)ppppppuVar19;
      }
      else {
        pcVar24 = pcVar3 + 0x20;
        cVar6 = *pcVar3;
        *(char **)((long)ppcVar11 + 0xf8) = pcVar24;
        if (cVar6 == '\x16') goto code_r0x0001007a53e0;
        uVar17 = *(undefined8 *)(pcVar3 + 1);
        *(undefined8 *)((long)ppcVar11 + 0x141) = *(undefined8 *)(pcVar3 + 9);
        *(undefined8 *)((long)ppcVar11 + 0x139) = uVar17;
        uVar17 = *(undefined8 *)(pcVar3 + 0x10);
        *(undefined8 *)((long)ppcVar11 + 0x150) = *(undefined8 *)(pcVar3 + 0x18);
        *(undefined8 *)((long)ppcVar11 + 0x148) = uVar17;
        *(undefined8 *)((long)ppcVar11 + 0x110) = 1;
        *(char *)((long)ppcVar11 + 0x138) = cVar6;
        FUN_1004b60cc(pppppppuVar41 + -0x10,(undefined1 *)((long)ppcVar11 + 0x138));
        ppppppuVar34 = pppppppuVar41[-0x10];
        ppppppuVar19 = pppppppuVar41[-0xf];
        if (ppppppuVar34 == (undefined8 ******)0x8000000000000001) goto code_r0x0001007a53fc;
        if (lVar37 == 1) {
code_r0x0001007a54b4:
          lVar18 = thunk_FUN_1087e422c(1,&UNK_10b22d550,&UNK_10b20a590);
        }
        else {
          ppppppuVar40 = pppppppuVar41[-0xe];
          pcVar24 = pcVar3 + 0x40;
          *(char **)((long)ppcVar11 + 0xf8) = pcVar24;
          cVar6 = pcVar3[0x20];
          if (cVar6 == '\x16') goto code_r0x0001007a54b4;
          uVar17 = *(undefined8 *)(pcVar3 + 0x21);
          *(undefined8 *)((long)ppcVar11 + 0x1d9) = *(undefined8 *)(pcVar3 + 0x29);
          *(undefined8 *)((long)ppcVar11 + 0x1d1) = uVar17;
          ppppppuVar42 = *(undefined8 *******)(pcVar3 + 0x30);
          pppppppuVar41[-0xd] = *(undefined8 *******)(pcVar3 + 0x38);
          pppppppuVar41[-0xe] = ppppppuVar42;
          *(undefined8 *)((long)ppcVar11 + 0x110) = 2;
          *(char *)(pppppppuVar41 + -0x10) = cVar6;
          FUN_1012a62c8((undefined1 *)((long)ppcVar11 + 0x138),pppppppuVar41 + -0x10);
          lVar29 = *(long *)((long)ppcVar11 + 0x138);
          lVar18 = *(long *)((long)ppcVar11 + 0x140);
          if (lVar29 != 2) {
            lVar27 = *(long *)((long)ppcVar11 + 0x1a8);
            lVar43 = *(long *)((long)ppcVar11 + 0x1c0);
            lVar37 = *(long *)((long)ppcVar11 + 0x1b8);
            unaff_x28[0xf] = *(long *)((long)ppcVar11 + 0x1b0);
            unaff_x28[0xe] = lVar27;
            unaff_x28[0x11] = lVar43;
            unaff_x28[0x10] = lVar37;
            lVar27 = *(long *)((long)ppcVar11 + 0x1c8);
            lVar37 = *(long *)((long)ppcVar11 + 0x168);
            lVar44 = *(long *)((long)ppcVar11 + 0x180);
            lVar43 = *(long *)((long)ppcVar11 + 0x178);
            unaff_x28[7] = *(long *)((long)ppcVar11 + 0x170);
            unaff_x28[6] = lVar37;
            unaff_x28[9] = lVar44;
            unaff_x28[8] = lVar43;
            lVar44 = *(long *)((long)ppcVar11 + 0x188);
            lVar43 = *(long *)((long)ppcVar11 + 0x1a0);
            lVar37 = *(long *)((long)ppcVar11 + 0x198);
            unaff_x28[0xb] = *(long *)((long)ppcVar11 + 400);
            unaff_x28[10] = lVar44;
            unaff_x28[0xd] = lVar43;
            unaff_x28[0xc] = lVar37;
            lVar44 = *(long *)((long)ppcVar11 + 0x148);
            lVar43 = *(long *)((long)ppcVar11 + 0x160);
            lVar37 = *(long *)((long)ppcVar11 + 0x158);
            unaff_x28[3] = *(long *)((long)ppcVar11 + 0x150);
            unaff_x28[2] = lVar44;
            unaff_x28[5] = lVar43;
            unaff_x28[4] = lVar37;
            *unaff_x28 = lVar29;
            unaff_x28[1] = lVar18;
            unaff_x28[0x12] = lVar27;
            unaff_x28[0x13] = (long)ppppppuVar34;
            unaff_x28[0x14] = (long)ppppppuVar19;
            unaff_x28[0x15] = (long)ppppppuVar40;
            lVar27 = unaff_x28[8];
            lVar29 = unaff_x28[0xb];
            lVar37 = unaff_x28[10];
            *(long *)((long)ppcVar11 + 0x88) = unaff_x28[9];
            *(long *)((long)ppcVar11 + 0x80) = lVar27;
            *(long *)((long)ppcVar11 + 0x98) = lVar29;
            *(long *)((long)ppcVar11 + 0x90) = lVar37;
            lVar29 = unaff_x28[0xc];
            lVar37 = unaff_x28[0xf];
            lVar27 = unaff_x28[0xe];
            *(long *)((long)ppcVar11 + 0xa8) = unaff_x28[0xd];
            *(long *)((long)ppcVar11 + 0xa0) = lVar29;
            *(long *)((long)ppcVar11 + 0xb8) = lVar37;
            *(long *)((long)ppcVar11 + 0xb0) = lVar27;
            lVar29 = unaff_x28[4];
            lVar37 = unaff_x28[7];
            lVar27 = unaff_x28[6];
            *(long *)((long)ppcVar11 + 0x68) = unaff_x28[5];
            *(long *)((long)ppcVar11 + 0x60) = lVar29;
            *(long *)((long)ppcVar11 + 0x78) = lVar37;
            *(long *)((long)ppcVar11 + 0x70) = lVar27;
            lVar27 = unaff_x28[0x10];
            lVar29 = unaff_x28[0x13];
            lVar37 = unaff_x28[0x12];
            *(long *)((long)ppcVar11 + 200) = unaff_x28[0x11];
            *(long *)((long)ppcVar11 + 0xc0) = lVar27;
            *(long *)((long)ppcVar11 + 0xd8) = lVar29;
            *(long *)((long)ppcVar11 + 0xd0) = lVar37;
            lVar27 = unaff_x28[0x14];
            *(long *)((long)ppcVar11 + 0xe8) = unaff_x28[0x15];
            *(long *)((long)ppcVar11 + 0xe0) = lVar27;
            lVar29 = *unaff_x28;
            lVar37 = unaff_x28[3];
            lVar27 = unaff_x28[2];
            *(long *)((long)ppcVar11 + 0x48) = unaff_x28[1];
            *(long *)((long)ppcVar11 + 0x40) = lVar29;
            *(long *)((long)ppcVar11 + 0x58) = lVar37;
            *(long *)((long)ppcVar11 + 0x50) = lVar27;
            lVar27 = FUN_100fbc738((undefined1 *)((long)ppcVar11 + 0xf0));
            uVar38 = *(uint *)((long)ppcVar11 + 0x3c);
            if (lVar27 != 0) {
              *unaff_x28 = 2;
              unaff_x28[1] = lVar27;
              if ((*(long *)((long)ppcVar11 + 0xd8) != -0x8000000000000000) &&
                 (*(long *)((long)ppcVar11 + 0xd8) != 0)) {
                _free(*(undefined8 *)((long)ppcVar11 + 0xe0));
              }
              FUN_100e0f8ec((undefined1 *)((long)ppcVar11 + 0x40));
            }
            goto code_r0x0001007a577c;
          }
        }
        *unaff_x28 = 2;
        unaff_x28[1] = lVar18;
        if (((ulong)ppppppuVar34 & 0x7fffffffffffffff) != 0) {
          _free(ppppppuVar19);
        }
      }
      lVar37 = ((ulong)((long)(pcVar3 + lVar37 * 0x20) - (long)pcVar24) >> 5) + 1;
      while (lVar37 = lVar37 + -1, lVar37 != 0) {
        FUN_100e077ec(pcVar24);
        pcVar24 = pcVar24 + 0x20;
      }
      uVar38 = *(uint *)((long)ppcVar11 + 0x3c);
      if (lVar27 != 0) {
        _free(pcVar3);
      }
      goto code_r0x0001007a577c;
    }
    ppcVar12 = ppcVar11;
    if (uVar20 != 0x15) {
      lVar27 = thunk_FUN_108855b04(pbVar33,pppppppuVar41 + -0x10,&UNK_10b20a840);
      *unaff_x28 = 2;
      unaff_x28[1] = lVar27;
      return;
    }
code_r0x0001007a4f08:
    puVar28 = *(undefined **)(pbVar33 + 8);
    pbVar21 = *(byte **)(pbVar33 + 0x10);
    *(byte **)((long)ppcVar12 + 0x10) = pbVar33;
    uVar30 = *(ulong *)(pbVar33 + 0x18);
    puVar25 = (undefined *)(uVar30 << 6);
    ppcVar13 = ppcVar12;
code_r0x0001007a4f18:
    pbVar31 = pbVar21 + (long)puVar25;
    plVar36 = (long *)((long)ppcVar13 + 0xf0);
    *(byte **)((long)ppcVar13 + 0x110) = pbVar21;
    *(byte **)((long)ppcVar13 + 0x118) = pbVar21;
    *(undefined **)((long)ppcVar13 + 0x120) = puVar28;
    *(byte **)((long)ppcVar13 + 0x128) = pbVar31;
    *(undefined1 *)((long)ppcVar13 + 0xf0) = 0x16;
    *(undefined8 *)((long)ppcVar13 + 0x130) = 0;
    ppcVar14 = ppcVar13;
    if (uVar30 == 0) {
      *(undefined8 *)((long)ppcVar13 + 0x138) = 2;
      ppppppuVar34 = (undefined8 ******)0x8000000000000001;
      bVar16 = true;
      ppppppuVar19 = (undefined8 ******)0x0;
code_r0x0001007a5524:
      pppppppuVar41[-0x10] = (undefined8 ******)&UNK_108cae666;
      pppppppuVar41[-0xf] = (undefined8 ******)0x3;
      *(undefined8 ********)((long)ppcVar13 + 0x40) = pppppppuVar41 + -0x10;
      *(undefined **)((long)ppcVar13 + 0x48) = &DAT_100c7b3a0;
      lVar27 = thunk_FUN_108856088(s_missing_field_____108ac28f7,
                                   (undefined1 *)((long)ppcVar13 + 0x40));
      *unaff_x28 = 2;
      unaff_x28[1] = lVar27;
      if (((ulong)ppppppuVar19 & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)((long)ppcVar13 + 0x28));
      }
LAB_1007a5734:
      bVar7 = false;
      if (ppppppuVar34 != (undefined8 ******)0x8000000000000001) {
        bVar7 = bVar16;
      }
      if ((bVar7) && (((ulong)ppppppuVar34 & 0x7fffffffffffffff) != 0)) {
        _free(*(undefined8 *)((long)ppcVar13 + 0x28));
      }
      FUN_100d34830(plVar36 + 4);
      if (*(char *)((long)ppcVar13 + 0xf0) != '\x16') {
        FUN_100e077ec((undefined1 *)((long)ppcVar13 + 0xf0));
      }
    }
    else {
code_r0x0001007a4f38:
      *(long **)((long)ppcVar14 + 8) = unaff_x28;
      ppcVar15 = ppcVar14;
code_r0x0001007a4f3c:
      unaff_x28 = (long *)0x0;
      ppcVar9 = ppcVar15;
code_r0x0001007a4f40:
      ppcVar13 = ppcVar9;
      puVar39 = (undefined8 *)((ulong)(ppcVar13 + 8) | 1);
      puVar32 = (undefined8 *)((ulong)plVar36 | 1);
      ppcVar13[6] = (char *)((ulong)(pppppppuVar41 + -0x10) | 1);
      *ppcVar13 = (char *)(((ulong)(puVar25 + -0x40) >> 6) + 1);
      lVar27 = 2;
      ppppppuVar34 = (undefined8 ******)0x8000000000000001;
      lVar37 = 2;
      do {
        pbVar33 = pbVar21 + 0x40;
        bVar5 = *pbVar21;
        if (bVar5 == 0x16) goto code_r0x0001007a54f0;
        *(byte *)(ppcVar13 + 8) = bVar5;
        uVar17 = *(undefined8 *)(pbVar21 + 0x10);
        *(undefined8 *)((long)puVar39 + 0x17) = *(undefined8 *)(pbVar21 + 0x18);
        *(undefined8 *)((long)puVar39 + 0xf) = uVar17;
        uVar17 = *(undefined8 *)(pbVar21 + 1);
        puVar39[1] = *(undefined8 *)(pbVar21 + 9);
        *puVar39 = uVar17;
        lVar29 = *(long *)(pbVar21 + 0x20);
        lVar43 = *(long *)(pbVar21 + 0x38);
        lVar18 = *(long *)(pbVar21 + 0x30);
        ppcVar13[0x1f] = (char *)*(long *)(pbVar21 + 0x28);
        ppcVar13[0x1e] = (char *)lVar29;
        ppcVar13[0x21] = (char *)lVar43;
        ppcVar13[0x20] = (char *)lVar18;
        piVar1 = (int *)ppcVar13[9];
        piVar2 = (int *)ppcVar13[10];
        lVar29 = (long)ppcVar13[0xb];
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            iVar23 = 1;
            if (*(char *)((long)ppcVar13 + 0x41) != '\x01') {
              iVar23 = 2;
            }
            iVar22 = 0;
            if (*(char *)((long)ppcVar13 + 0x41) != '\0') {
              iVar22 = iVar23;
            }
            goto code_r0x0001007a5298;
          }
          if (bVar5 == 4) {
            iVar23 = 1;
            if (piVar1 != (int *)0x1) {
              iVar23 = 2;
            }
            iVar22 = 0;
            if (piVar1 != (int *)0x0) {
              iVar22 = iVar23;
            }
            goto code_r0x0001007a5298;
          }
          if (bVar5 == 0xc) {
            if (lVar29 == 3) {
              iVar22 = 1;
              if ((short)*piVar2 != 0x7572 || *(char *)((long)piVar2 + 2) != 'n') {
                iVar22 = 2;
              }
            }
            else if (lVar29 == 7) {
              iVar22 = 2;
              if (*piVar2 == 0x6e727574 && *(int *)((long)piVar2 + 3) == 0x64695f6e) {
                iVar22 = 0;
              }
            }
            else {
              iVar22 = 2;
            }
            goto joined_r0x0001007a5234;
          }
code_r0x0001007a59e4:
          ppcVar13[0x23] = (char *)pbVar33;
          ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
          ppcVar13[0x27] = (char *)lVar37;
          ppcVar13[0x28] = ppcVar13[4];
          ppppppuVar19 = (undefined8 ******)
                         thunk_FUN_108855b04(ppcVar13 + 8,pppppppuVar41 + -0x10,&UNK_10b211c40);
LAB_1007a569c:
          puVar32 = (undefined8 *)ppcVar13[1];
          *puVar32 = 2;
          puVar32[1] = ppppppuVar19;
          if (lVar27 != 2) {
            lVar27 = (long)ppcVar13[0x2b];
joined_r0x0001007a56b8:
            if (lVar27 != 0) {
              _free(ppcVar13[0x2c]);
            }
            if (ppcVar13[0x2e] != (char *)0x0) {
              _free(ppcVar13[0x2f]);
            }
            if ((ppcVar13[0x34] != (char *)0x8000000000000000) && (ppcVar13[0x34] != (char *)0x0)) {
              _free(ppcVar13[0x35]);
            }
            lVar27 = (long)ppcVar13[0x32];
            lVar37 = (long)ppcVar13[0x33];
            if (lVar37 != 0) {
              puVar32 = (undefined8 *)(lVar27 + 8);
              do {
                if (puVar32[-1] != 0) {
                  _free(*puVar32);
                }
                puVar32 = puVar32 + 4;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
            }
            if (ppcVar13[0x31] != (char *)0x0) {
              _free(lVar27);
            }
          }
          plVar36 = (long *)(ppcVar13 + 0x1e);
          bVar16 = true;
          goto LAB_1007a5734;
        }
        if (bVar5 == 0xd) {
          if (piVar2 == (int *)0x3) {
            iVar22 = 1;
            if ((short)*piVar1 != 0x7572 || *(char *)((long)piVar1 + 2) != 'n') {
              iVar22 = 2;
            }
          }
          else {
            if (piVar2 != (int *)0x7) goto code_r0x0001007a5268;
            iVar22 = 2;
            if (*piVar1 == 0x6e727574 && *(int *)((long)piVar1 + 3) == 0x64695f6e) {
              iVar22 = 0;
            }
          }
code_r0x0001007a5298:
          FUN_100e077ec(ppcVar13 + 8);
        }
        else {
          if (bVar5 != 0xe) {
            if (bVar5 != 0xf) goto code_r0x0001007a59e4;
            if (piVar2 == (int *)0x3) {
              if ((((char)*piVar1 != 'r') || (*(char *)((long)piVar1 + 1) != 'u')) ||
                 (*(char *)((long)piVar1 + 2) != 'n')) goto code_r0x0001007a5268;
              iVar22 = 1;
            }
            else if (((((piVar2 == (int *)0x7) && ((char)*piVar1 == 't')) &&
                      ((*(char *)((long)piVar1 + 1) == 'u' &&
                       ((*(char *)((long)piVar1 + 2) == 'r' && (*(char *)((long)piVar1 + 3) == 'n'))
                       )))) && ((char)piVar1[1] == '_')) &&
                    ((*(char *)((long)piVar1 + 5) == 'i' && (*(char *)((long)piVar1 + 6) == 'd'))))
            {
              iVar22 = 0;
            }
            else {
code_r0x0001007a5268:
              iVar22 = 2;
            }
            goto code_r0x0001007a5298;
          }
          if (lVar29 == 3) {
            if ((((char)*piVar2 != 'r') || (*(char *)((long)piVar2 + 1) != 'u')) ||
               (*(char *)((long)piVar2 + 2) != 'n')) goto code_r0x0001007a5200;
            iVar22 = 1;
          }
          else if ((((lVar29 == 7) && ((char)*piVar2 == 't')) &&
                   ((*(char *)((long)piVar2 + 1) == 'u' &&
                    ((*(char *)((long)piVar2 + 2) == 'r' && (*(char *)((long)piVar2 + 3) == 'n')))))
                   ) && (((char)piVar2[1] == '_' &&
                         ((*(char *)((long)piVar2 + 5) == 'i' &&
                          (*(char *)((long)piVar2 + 6) == 'd')))))) {
            iVar22 = 0;
          }
          else {
code_r0x0001007a5200:
            iVar22 = 2;
          }
joined_r0x0001007a5234:
          if (piVar1 != (int *)0x0) {
            _free();
          }
        }
        if (iVar22 == 0) {
          if (ppppppuVar34 == (undefined8 ******)0x8000000000000001) {
            lVar29 = (long)ppcVar13[0x1e];
            *(undefined1 *)(ppcVar13 + 0x1e) = 0x16;
            if ((char)lVar29 == '\x16') {
              ppcVar13[0x23] = (char *)pbVar33;
              ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
              ppcVar13[0x27] = (char *)lVar37;
              ppcVar13[0x28] = ppcVar13[4];
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x0001007a59e0;
            }
            uVar17 = *puVar32;
            puVar39[1] = puVar32[1];
            *puVar39 = uVar17;
            uVar17 = *(undefined8 *)((long)puVar32 + 0xf);
            *(undefined8 *)((long)puVar39 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
            *(undefined8 *)((long)puVar39 + 0xf) = uVar17;
            *(char *)(ppcVar13 + 8) = (char)lVar29;
            FUN_1004b60cc(pppppppuVar41 + -0x10,ppcVar13 + 8);
            ppppppuVar34 = pppppppuVar41[-0x10];
            if (ppppppuVar34 != (undefined8 ******)0x8000000000000001) {
              ppppppuVar19 = pppppppuVar41[-0xe];
              ppcVar13[5] = (char *)pppppppuVar41[-0xf];
              ppcVar13[3] = (char *)ppppppuVar19;
              goto code_r0x0001007a4fb8;
            }
            ppcVar13[0x23] = (char *)pbVar33;
            ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
            ppcVar13[0x27] = (char *)lVar37;
            ppcVar13[0x28] = ppcVar13[4];
            ppppppuVar34 = (undefined8 ******)0x8000000000000001;
            ppppppuVar19 = pppppppuVar41[-0xf];
          }
          else {
            ppcVar13[0x23] = (char *)pbVar33;
            ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
            ppcVar13[0x27] = (char *)lVar37;
            ppcVar13[0x28] = ppcVar13[4];
            pppppppuVar41[-0x10] = (undefined8 ******)&UNK_108ca7b95;
            pppppppuVar41[-0xf] = (undefined8 ******)0x7;
            ppcVar13[8] = (char *)(pppppppuVar41 + -0x10);
            ppcVar13[9] = &DAT_100c7b3a0;
            ppppppuVar19 = (undefined8 ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,ppcVar13 + 8);
          }
          goto LAB_1007a569c;
        }
        if (iVar22 == 1) {
          if (lVar27 != 2) {
            ppcVar13[0x23] = (char *)pbVar33;
            ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
            ppcVar13[0x27] = (char *)lVar37;
            ppcVar13[0x28] = ppcVar13[4];
            pppppppuVar41[-0x10] = (undefined8 ******)&UNK_108cae666;
            pppppppuVar41[-0xf] = (undefined8 ******)0x3;
            ppcVar13[8] = (char *)(pppppppuVar41 + -0x10);
            ppcVar13[9] = &DAT_100c7b3a0;
            uVar17 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,ppcVar13 + 8);
            puVar32 = (undefined8 *)ppcVar13[1];
            *puVar32 = 2;
            puVar32[1] = uVar17;
            lVar27 = (long)ppcVar13[0x2b];
            goto joined_r0x0001007a56b8;
          }
          lVar27 = (long)ppcVar13[0x1e];
          *(undefined1 *)(ppcVar13 + 0x1e) = 0x16;
          if ((char)lVar27 == '\x16') {
            ppcVar13[0x23] = (char *)pbVar33;
            ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
            ppcVar13[0x27] = (char *)lVar37;
            ppcVar13[0x28] = ppcVar13[4];
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001007a59e0;
          }
          uVar17 = *puVar32;
          puVar26 = (undefined8 *)ppcVar13[6];
          puVar26[1] = puVar32[1];
          *puVar26 = uVar17;
          uVar17 = *(undefined8 *)((long)puVar32 + 0xf);
          *(undefined8 *)((long)puVar26 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
          *(undefined8 *)((long)puVar26 + 0xf) = uVar17;
          *(char *)(pppppppuVar41 + -0x10) = (char)lVar27;
          FUN_1012a62c8(ppcVar13 + 8,pppppppuVar41 + -0x10);
          lVar37 = (long)ppcVar13[8];
          if (lVar37 != 2) {
            ppcVar13[4] = ppcVar13[9];
            ppcVar13[0x36] = ppcVar13[0x17];
            ppcVar13[0x35] = ppcVar13[0x16];
            ppcVar13[0x38] = ppcVar13[0x19];
            ppcVar13[0x37] = ppcVar13[0x18];
            ppcVar13[0x39] = ppcVar13[0x1a];
            ppcVar13[0x2e] = ppcVar13[0xf];
            ppcVar13[0x2d] = ppcVar13[0xe];
            ppcVar13[0x30] = ppcVar13[0x11];
            ppcVar13[0x2f] = ppcVar13[0x10];
            ppcVar13[0x32] = ppcVar13[0x13];
            ppcVar13[0x31] = ppcVar13[0x12];
            ppcVar13[0x34] = ppcVar13[0x15];
            ppcVar13[0x33] = ppcVar13[0x14];
            ppcVar13[0x2a] = ppcVar13[0xb];
            ppcVar13[0x29] = ppcVar13[10];
            ppcVar13[0x2c] = ppcVar13[0xd];
            ppcVar13[0x2b] = ppcVar13[0xc];
            lVar27 = lVar37;
            goto code_r0x0001007a4fb8;
          }
          ppcVar13[0x23] = (char *)pbVar33;
          ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
          lVar27 = (long)ppcVar13[9];
          puVar32 = (undefined8 *)ppcVar13[1];
          *puVar32 = 2;
          puVar32[1] = lVar27;
          bVar16 = true;
          plVar36 = (long *)(ppcVar13 + 0x1e);
          goto LAB_1007a5734;
        }
        lVar29 = (long)ppcVar13[0x1e];
        *(undefined1 *)(ppcVar13 + 0x1e) = 0x16;
        if ((char)lVar29 == '\x16') {
          ppcVar13[0x23] = (char *)pbVar33;
          ppcVar13[0x26] = (char *)((long)unaff_x28 + 1);
          ppcVar13[0x27] = (char *)lVar37;
          ppcVar13[0x28] = ppcVar13[4];
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001007a59e0:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1007a59e4);
          (*pcVar10)();
        }
        uVar17 = *puVar32;
        puVar39[1] = puVar32[1];
        *puVar39 = uVar17;
        uVar17 = *(undefined8 *)((long)puVar32 + 0xf);
        *(undefined8 *)((long)puVar39 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
        *(undefined8 *)((long)puVar39 + 0xf) = uVar17;
        *(char *)(ppcVar13 + 8) = (char)lVar29;
        FUN_100e077ec(ppcVar13 + 8);
code_r0x0001007a4fb8:
        unaff_x28 = (long *)((long)unaff_x28 + 1);
        pbVar21 = pbVar33;
      } while (pbVar33 != pbVar31);
      unaff_x28 = (long *)*ppcVar13;
      pbVar33 = pbVar31;
code_r0x0001007a54f0:
      ppcVar13[0x23] = (char *)pbVar33;
      ppcVar13[0x26] = (char *)unaff_x28;
      ppcVar13[0x27] = (char *)lVar37;
      lVar37 = (long)ppcVar13[4];
      ppcVar13[0x28] = (char *)lVar37;
      bVar16 = ppppppuVar34 == (undefined8 ******)0x8000000000000001;
      ppppppuVar19 = (undefined8 ******)0x8000000000000000;
      if (!bVar16) {
        ppppppuVar19 = ppppppuVar34;
      }
      if (lVar27 == 2) {
        unaff_x28 = (long *)ppcVar13[1];
        plVar36 = (long *)(ppcVar13 + 0x1e);
        goto code_r0x0001007a5524;
      }
      lVar29 = (long)ppcVar13[0x35];
      lVar43 = (long)ppcVar13[0x38];
      lVar18 = (long)ppcVar13[0x37];
      plVar36 = (long *)ppcVar13[1];
      plVar36[0xf] = (long)ppcVar13[0x36];
      plVar36[0xe] = lVar29;
      plVar36[0x11] = lVar43;
      plVar36[0x10] = lVar18;
      lVar29 = (long)ppcVar13[0x39];
      lVar18 = (long)ppcVar13[0x2d];
      lVar44 = (long)ppcVar13[0x30];
      lVar43 = (long)ppcVar13[0x2f];
      plVar36[7] = (long)ppcVar13[0x2e];
      plVar36[6] = lVar18;
      plVar36[9] = lVar44;
      plVar36[8] = lVar43;
      lVar44 = (long)ppcVar13[0x31];
      lVar43 = (long)ppcVar13[0x34];
      lVar18 = (long)ppcVar13[0x33];
      plVar36[0xb] = (long)ppcVar13[0x32];
      plVar36[10] = lVar44;
      plVar36[0xd] = lVar43;
      plVar36[0xc] = lVar18;
      lVar44 = (long)ppcVar13[0x29];
      lVar43 = (long)ppcVar13[0x2c];
      lVar18 = (long)ppcVar13[0x2b];
      plVar36[3] = (long)ppcVar13[0x2a];
      plVar36[2] = lVar44;
      plVar36[5] = lVar43;
      plVar36[4] = lVar18;
      *plVar36 = lVar27;
      plVar36[1] = lVar37;
      plVar36[0x12] = lVar29;
      plVar36[0x13] = (long)ppppppuVar19;
      lVar27 = (long)ppcVar13[3];
      plVar36[0x14] = (long)ppcVar13[5];
      plVar36[0x15] = lVar27;
      lVar27 = plVar36[4];
      lVar18 = plVar36[5];
      lVar37 = plVar36[7];
      lVar43 = plVar36[8];
      lVar29 = plVar36[10];
      ppcVar13[6] = (char *)plVar36[0xb];
      uVar30 = plVar36[0xd];
      ppcVar13[3] = (char *)plVar36[0xc];
      ppcVar13[4] = (char *)lVar29;
      lVar29 = plVar36[0xe];
      FUN_100d34830(ppcVar13 + 0x22);
      if (pbVar31 != pbVar33) {
        ppcVar13[8] = (char *)unaff_x28;
        uVar17 = thunk_FUN_1087e422c(((ulong)((long)pbVar31 - (long)pbVar33) >> 6) + (long)unaff_x28
                                     ,ppcVar13 + 8,&UNK_10b23a190);
        puVar32 = (undefined8 *)ppcVar13[1];
        *puVar32 = 2;
        puVar32[1] = uVar17;
        if (((ulong)ppppppuVar19 & 0x7fffffffffffffff) != 0) {
          _free(ppcVar13[5]);
        }
        if (lVar27 != 0) {
          _free(lVar18);
        }
        if (lVar37 != 0) {
          _free(lVar43);
        }
        if ((uVar30 & 0x7fffffffffffffff) != 0) {
          _free(lVar29);
        }
        lVar27 = (long)ppcVar13[3];
        if (lVar27 != 0) {
          puVar32 = (undefined8 *)((long)ppcVar13[6] + 8);
          do {
            if (puVar32[-1] != 0) {
              _free(*puVar32);
            }
            puVar32 = puVar32 + 4;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (ppcVar13[4] != (char *)0x0) {
          _free(ppcVar13[6]);
        }
      }
    }
    pbVar33 = *(byte **)((long)ppcVar13 + 0x10);
    uVar38 = *(uint *)((long)ppcVar13 + 0x3c);
code_r0x0001007a577c:
    if ((uVar38 & 0x1e) != 0x14) {
      FUN_100e077ec(pbVar33);
    }
    return;
  case 0x2b:
  case 0xaa:
    goto code_r0x0001007a4d90;
  case 0x2c:
    goto code_r0x0001007a4c84;
  case 0x2d:
    goto code_r0x0001007a4cd4;
  case 0x2f:
    goto code_r0x0001007a4e00;
  case 0x30:
  case 200:
code_r0x0001007a4e9c:
    goto code_r0x0001007a4ea8;
  case 0x31:
    goto code_r0x0001007a4d44;
  case 0x32:
    goto code_r0x0001007a4f3c;
  case 0x34:
    goto code_r0x0001007a4f08;
  case 0x38:
    goto code_r0x0001007a4ef8;
  case 0x3a:
    goto code_r0x0001007a4c64;
  case 0x42:
  case 0xf2:
    goto code_r0x0001007a4cf4;
  case 0x44:
  case 0xa2:
    goto code_r0x0001007a4e50;
  case 0x46:
  case 0xae:
    goto code_r0x0001007a4e60;
  case 0x48:
    goto code_r0x0001007a4da4;
  case 0x50:
  case 0x72:
  case 0xec:
    goto code_r0x0001007a4c4c;
  case 0x52:
    goto code_r0x0001007a4bf4;
  case 0x54:
  case 0xb2:
    goto code_r0x0001007a4c70;
  case 0x56:
    goto code_r0x0001007a4c80;
  case 0x58:
    goto code_r0x0001007a4c44;
  case 0x5c:
    goto code_r0x0001007a4c18;
  case 0x5e:
    goto code_r0x0001007a4c90;
  case 0x60:
    goto code_r0x0001007a4cac;
  case 100:
    goto code_r0x0001007a4cc4;
  case 0x68:
    goto code_r0x0001007a4cb4;
  case 0x74:
    goto code_r0x0001007a4be4;
  case 0x78:
code_r0x0001007a4d8c:
    pbVar21 = pbStack_c9;
code_r0x0001007a4d90:
    if (pbVar21 == (byte *)0x0) break;
code_r0x0001007a4d94:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = &uStack_80;
code_r0x0001007a4da4:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
    goto code_r0x0001007a4e2c;
  case 0x7a:
code_r0x0001007a4bcc:
    pbVar21 = pbStack_c9;
code_r0x0001007a4bd0:
    if (pbVar21 != (byte *)0x0) goto code_r0x0001007a4bd8;
    break;
  case 0x7c:
    goto code_r0x0001007a4bfc;
  case 0x7e:
    goto code_r0x0001007a4b70;
  case 0x82:
    goto code_r0x0001007a4e08;
  case 0x83:
  case 0x85:
  case 0x87:
  case 0x8f:
  case 0x93:
  case 0x99:
  case 0x9f:
  case 0xa3:
  case 0xa9:
  case 0xb1:
  case 0xb3:
  case 0xbf:
  case 0xcc:
  case 0xd3:
  case 0xff:
    goto code_r0x0001007a4b4c;
  case 0x84:
    goto code_r0x0001007a4ce4;
  case 0x86:
    goto code_r0x0001007a4dc0;
  case 0x88:
    goto code_r0x0001007a4dd8;
  case 0x8b:
  case 0x8d:
  case 0x91:
  case 0x95:
  case 0x9b:
  case 0xa5:
  case 0xab:
  case 0xbd:
  case 0xc1:
  case 0xfb:
  case 0xfd:
    goto code_r0x0001007a4b50;
  case 0x8c:
    goto code_r0x0001007a4dd0;
  case 0x8e:
    goto code_r0x0001007a4de4;
  case 0x90:
    pcVar24 = param_2;
  case 0xf6:
    FUN_100e077ec(pcVar24);
    goto code_r0x0001007a4ebc;
  case 0x94:
    goto code_r0x0001007a4e18;
  case 0x96:
    goto code_r0x0001007a4d94;
  case 0x9c:
    goto code_r0x0001007a4cdc;
  case 0xa0:
code_r0x0001007a4bc4:
    if (uVar20 == 0x15) goto code_r0x0001007a4bcc;
code_r0x0001007a4bd8:
    pcVar24 = (char *)&uStack_80;
code_r0x0001007a4be0:
    auVar45._8_8_ = &pcStack_140;
    auVar45._0_8_ = pcVar24;
code_r0x0001007a4be4:
    pcVar24 = (char *)thunk_FUN_108855b04(auVar45._0_8_,auVar45._8_8_);
code_r0x0001007a4be8:
    goto code_r0x0001007a4e2c;
  case 0xa4:
    goto code_r0x0001007a4df4;
  case 0xa7:
  case 0xad:
  case 0xaf:
  case 0xb9:
  case 0xbb:
  case 0xcf:
  case 0xd5:
  case 0xdb:
  case 0xf3:
  case 0xf7:
    goto code_r0x0001007a4b54;
  case 0xa8:
    goto code_r0x0001007a4f38;
  case 0xac:
    goto code_r0x0001007a4b88;
  case 0xb0:
    goto code_r0x0001007a4cc0;
  case 0xb5:
  case 0xcd:
  case 0xdd:
  case 0xe7:
  case 0xe9:
  case 0xed:
  case 0xef:
    goto code_r0x0001007a4b58;
  case 0xb8:
    goto code_r0x0001007a4e84;
  case 0xbc:
    pcVar24 = (char *)FUN_107c05ccc();
code_r0x0001007a4e60:
    goto code_r0x0001007a4e64;
  case 0xbe:
    goto code_r0x0001007a4e2c;
  case 0xc0:
    goto code_r0x0001007a4f40;
  case 0xc2:
  case 0xfc:
    goto code_r0x0001007a4cfc;
  case 0xc6:
    param_1 = pcVar24;
code_r0x0001007a4e50:
    pcVar24 = param_1;
    FUN_100e077ec((ulong)bStack_11f + 0x20);
code_r0x0001007a4e64:
    FUN_100e077ec(&uStack_80);
    FUN_100e077ec(&cStack_120);
    param_1 = pcVar24;
code_r0x0001007a4e74:
    FUN_100d34830(&pcStack_140);
code_r0x0001007a4e84:
    goto code_r0x0001007a4ebc;
  case 0xca:
  case 0xd4:
    goto code_r0x0001007a4d1c;
  case 0xd0:
    goto code_r0x0001007a4dfc;
  case 0xd2:
    goto code_r0x0001007a4e74;
  case 0xd8:
    goto code_r0x0001007a4cb8;
  case 0xda:
    goto code_r0x0001007a4b64;
  case 0xdc:
  case 0xf4:
    goto code_r0x0001007a4d70;
  case 0xde:
    goto code_r0x0001007a4d64;
  case 0xe0:
    goto code_r0x0001007a4d4c;
  case 0xe2:
  case 0xe6:
    goto code_r0x0001007a4db4;
  case 0xe8:
  case 0xfe:
    goto code_r0x0001007a4d2c;
  case 0xee:
    goto code_r0x0001007a4d0c;
  case 0xf0:
    goto code_r0x0001007a4e28;
  case 0xf8:
    goto code_r0x0001007a4f18;
  }
  pcVar24 = (char *)&uStack_80;
code_r0x0001007a4dd0:
  FUN_100e077ec(pcVar24);
code_r0x0001007a4dd4:
  uVar20 = 0;
code_r0x0001007a4dd8:
  param_1[1] = bVar5;
  *param_1 = (char)uVar20;
  bVar16 = cVar6 == '\x15';
code_r0x0001007a4de4:
  uVar35 = uVar35 ^ 1;
  if (bVar16) {
    uVar35 = 1;
  }
joined_r0x0001007a4dec:
  pcVar24 = param_2;
  if (uVar35 == 0) {
code_r0x0001007a4df4:
    FUN_100e077ec(pcVar24);
  }
code_r0x0001007a4dfc:
code_r0x0001007a4e00:
code_r0x0001007a4e08:
  return;
}

