
/* WARNING: Removing unreachable block (ram,0x00010134f1ec) */

void FUN_10134eb90(undefined1 *param_1,ulong *param_2,undefined *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *puVar11;
  undefined1 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong *puVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined *puStack_e9;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined *puStack_a8;
  char cStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined1 uStack_51;
  
  cVar2 = (char)*param_2;
  if ((cVar2 == '\f') || (cVar2 == '\r')) {
    uVar17 = 0;
    uStack_118 = param_2[1];
    uStack_120 = *param_2;
    puStack_108 = (undefined *)param_2[3];
    puStack_110 = (undefined *)param_2[2];
    uVar15 = 0x16;
LAB_10134ec84:
    puVar11 = puStack_110;
    uVar14 = uStack_118;
    uStack_d8 = uStack_118;
    uStack_e0 = uStack_120;
    uVar4 = uStack_e0;
    puStack_c8 = puStack_108;
    puStack_d0 = puStack_110;
    uStack_b7 = uStack_f8;
    uStack_bf = (undefined7)uStack_100;
    uStack_b8 = (undefined1)((ulong)uStack_100 >> 0x38);
    puStack_a8 = puStack_e9;
    uStack_b0 = uStack_f1;
    uStack_af = uStack_f0;
    uStack_78 = CONCAT71(uStack_f8,uStack_b8);
    uStack_80 = CONCAT71(uStack_bf,uVar15);
    uStack_70 = CONCAT71(uStack_f0,uStack_f1);
    puStack_68 = puStack_e9;
    uStack_e0._0_1_ = (byte)uStack_120;
    uStack_e0 = uVar4;
    uStack_c0 = uVar15;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        puVar11 = (undefined *)(uStack_120 >> 8 & 0xff);
        goto code_r0x00010134edd0;
      }
      if ((byte)uStack_e0 == 4) {
        switch(uStack_118) {
        case 0:
          goto code_r0x00010134edf0;
        case 1:
          goto code_r0x00010134f0e0;
        case 2:
          goto code_r0x00010134f0bc;
        case 3:
          goto code_r0x00010134f0c8;
        case 4:
          goto code_r0x00010134f0a4;
        case 5:
          goto code_r0x00010134f0ec;
        case 6:
          goto code_r0x00010134f0f8;
        case 7:
          goto code_r0x00010134f0d4;
        case 8:
          goto code_r0x00010134f104;
        case 9:
          goto code_r0x00010134f0b0;
        default:
          uStack_98 = (undefined1)uStack_118;
          uStack_97 = (undefined7)(uStack_118 >> 8);
          cStack_a0 = '\x01';
          param_3 = &UNK_10b20a590;
          puStack_138 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                           (&cStack_a0,&UNK_10b22d320,&UNK_10b20a590);
          goto LAB_10134f258;
        }
      }
      if ((byte)uStack_e0 != 0xc) {
LAB_10134f1c0:
        puStack_138 = (ulong *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b210060);
        uStack_140 = (ulong *)CONCAT71(uStack_140._1_7_,1);
        goto LAB_10134f128;
      }
      param_3 = puStack_108;
      auVar18 = func_0x000100ad8a9c(&uStack_140,puStack_110,puStack_108);
    }
    else {
      if ((byte)uStack_e0 == 0xd) goto LAB_10134edfc;
      if ((byte)uStack_e0 != 0xe) {
        if ((byte)uStack_e0 == 0xf) {
          param_3 = puStack_110;
          func_0x000100ad8404(&uStack_140,uStack_118,puStack_110);
          goto LAB_10134f114;
        }
        goto LAB_10134f1c0;
      }
      param_3 = puStack_108;
      auVar18 = func_0x000100ad8404(&uStack_140,puStack_110,puStack_108);
    }
    if (uVar14 == 0) goto LAB_10134f11c;
    auVar18 = _free(puVar11);
    bVar6 = (char)uStack_140 == '\x01';
    if (!bVar6) {
LAB_10134ed5c:
      puVar9 = auVar18._8_8_;
      puVar8 = auVar18._0_8_;
      bVar5 = (char)uStack_140 != '\0';
      bVar3 = uStack_140._1_1_;
      puVar16 = (ulong *)(ulong)uStack_140._1_1_;
      uStack_90 = (undefined1)uStack_70;
      uStack_8f = (undefined7)(uStack_70 >> 8);
      uStack_98 = (undefined1)uStack_78;
      uStack_97 = (undefined7)(uStack_78 >> 8);
      puStack_88 = puStack_68;
      cStack_a0 = (char)uStack_80;
      uStack_9f = (undefined7)(uStack_80 >> 8);
      uVar10 = (uint)uStack_80 & 0xff;
      puVar11 = (undefined *)(ulong)uVar10;
      puVar13 = &UNK_108ca01ae;
      uVar4 = uStack_e0;
      switch(uStack_140._1_1_) {
      case 0:
      case 10:
      case 0x14:
      case 0x40:
      case 0x41:
      case 0x45:
      case 0x47:
      case 0x49:
      case 0x53:
      case 0x6b:
      case 0x71:
      case 0x75:
      case 0x77:
      case 0x7c:
      case 0x7d:
      case 0x7f:
      case 0xa2:
      case 0xa3:
      case 0xa7:
      case 0xab:
      case 0xce:
      case 0xcf:
      case 0xfa:
      case 0xfb:
      case 0xff:
        bVar6 = uVar10 == 0x16;
      case 0x1f:
      case 0x21:
      case 0x23:
      case 0x25:
      case 0x27:
      case 0x29:
      case 0x2b:
      case 0x2d:
      case 0x2f:
      case 0x31:
      case 0x33:
      case 0x35:
      case 0x37:
      case 0x39:
      case 0x3b:
      case 0x3d:
      case 0x3f:
      case 0x43:
      case 0x55:
      case 0x57:
      case 0x59:
      case 0x5b:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 99:
      case 0x65:
      case 0x67:
      case 0x69:
      case 0x6d:
      case 0x6f:
      case 0x73:
      case 0x79:
      case 0x7b:
      case 0xc4:
      case 0xd7:
        if (bVar6) goto code_r0x00010134f084;
code_r0x00010134ed9c:
        if (uVar10 == 0x12) break;
        puVar11 = puStack_68;
        if (uVar10 == 0x15) {
code_r0x00010134edb0:
          if (puVar11 == (undefined *)0x0) break;
        }
code_r0x00010134edb4:
code_r0x00010134edbc:
        auVar18._8_8_ = &uStack_51;
        auVar18._0_8_ = &cStack_a0;
code_r0x00010134edc4:
        puVar8 = (ulong *)FUN_108855b04(auVar18._0_8_,auVar18._8_8_);
code_r0x00010134edc8:
        goto LAB_10134f140;
      case 1:
      case 0xe6:
        if (uVar10 != 0x16) goto code_r0x00010134efbc;
        goto code_r0x00010134f084;
      case 2:
      case 0xee:
        bVar6 = uVar10 == 0x16;
      case 0x2e:
      case 0xd0:
        if (bVar6) goto code_r0x00010134f084;
        if (uVar10 == 0x12) break;
        if (uVar10 == 0x15) {
code_r0x00010134ef24:
          if (puStack_68 == (undefined *)0x0) break;
        }
code_r0x00010134ef2c:
code_r0x00010134ef34:
        puVar8 = (ulong *)&cStack_a0;
code_r0x00010134ef38:
        puVar8 = (ulong *)FUN_108855b04(puVar8,&uStack_51);
        goto LAB_10134f140;
      case 3:
        if (uVar10 == 0x16) goto code_r0x00010134f084;
        bVar6 = uVar10 == 0x12;
      case 0x9e:
        if (!bVar6) {
          bVar6 = uVar10 == 0x15;
code_r0x00010134ef58:
          if (bVar6) {
code_r0x00010134ef5c:
            if (puStack_68 == (undefined *)0x0) break;
          }
code_r0x00010134ef68:
code_r0x00010134ef6c:
          puVar8 = (ulong *)FUN_108855b04(&cStack_a0,&uStack_51);
          goto LAB_10134f140;
        }
        break;
      case 4:
      case 0xa0:
        bVar6 = uVar10 == 0x16;
      case 0x3c:
      case 0x56:
        if (bVar6) goto code_r0x00010134f084;
        bVar6 = uVar10 == 0x12;
code_r0x00010134eea8:
        if (bVar6) break;
        bVar6 = uVar10 == 0x15;
code_r0x00010134eeb0:
        puVar11 = puStack_68;
        if (bVar6) {
code_r0x00010134eeb8:
          if (puVar11 == (undefined *)0x0) break;
        }
code_r0x00010134eebc:
        param_3 = &UNK_10b20a000;
code_r0x00010134eec0:
        puVar8 = (ulong *)FUN_108855b04(&cStack_a0,&uStack_51,param_3 + 0x5c0);
code_r0x00010134eed0:
        goto LAB_10134f140;
      case 5:
        bVar6 = uVar10 == 0x16;
      case 0x9a:
        if (bVar6) goto code_r0x00010134f084;
        if ((uVar10 == 0x12) || ((uVar10 == 0x15 && (puStack_68 == (undefined *)0x0)))) break;
code_r0x00010134f00c:
        auVar18._8_8_ = &uStack_51;
        auVar18._0_8_ = &cStack_a0;
code_r0x00010134f01c:
        puVar8 = (ulong *)FUN_108855b04(auVar18._0_8_,auVar18._8_8_);
        goto LAB_10134f140;
      case 6:
      case 0x94:
        if (uVar10 == 0x16) goto code_r0x00010134f084;
      case 0x50:
        if (uVar10 != 0x12) {
code_r0x00010134f034:
          if ((uVar10 != 0x15) || (puStack_68 != (undefined *)0x0)) {
code_r0x00010134f044:
            puVar8 = (ulong *)&cStack_a0;
code_r0x00010134f050:
            auVar18._8_8_ = &uStack_51;
            auVar18._0_8_ = puVar8;
code_r0x00010134f054:
            puVar8 = (ulong *)FUN_108855b04(auVar18._0_8_,auVar18._8_8_);
            goto LAB_10134f140;
          }
        }
        break;
      case 7:
      case 0x8e:
      case 0xf6:
        if (uVar10 == 0x16) goto code_r0x00010134f084;
        bVar6 = uVar10 == 0x12;
      case 0xd6:
        if ((!bVar6) && ((uVar10 != 0x15 || (puStack_68 != (undefined *)0x0)))) {
code_r0x00010134efa0:
code_r0x00010134efa4:
          puVar8 = (ulong *)&cStack_a0;
code_r0x00010134efa8:
          puVar8 = (ulong *)FUN_108855b04(puVar8,&uStack_51);
          goto LAB_10134f140;
        }
        break;
      case 8:
        bVar6 = uVar10 == 0x16;
      case 0x4e:
        if (bVar6) goto code_r0x00010134f084;
        if (uVar10 == 0x12) break;
        if (uVar10 == 0x15) {
code_r0x00010134f074:
          if (puStack_68 == (undefined *)0x0) break;
        }
        puVar8 = (ulong *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
        goto LAB_10134f140;
      case 9:
      case 0xbc:
      case 0xf8:
        bVar6 = uVar10 == 0x16;
      case 0x96:
        if (bVar6) goto code_r0x00010134f084;
code_r0x00010134eedc:
        bVar6 = uVar10 == 0x12;
code_r0x00010134eee0:
        if (bVar6) break;
code_r0x00010134eee4:
        bVar6 = uVar10 == 0x15;
code_r0x00010134eee8:
        if (bVar6) {
code_r0x00010134eeec:
          if (puStack_68 == (undefined *)0x0) break;
        }
code_r0x00010134eef4:
code_r0x00010134eef8:
code_r0x00010134eefc:
        puVar8 = (ulong *)&cStack_a0;
code_r0x00010134ef00:
        puVar8 = (ulong *)FUN_108855b04(puVar8,&uStack_51);
code_r0x00010134ef08:
        goto LAB_10134f140;
      case 0xb:
      case 0xac:
        goto code_r0x00010134ee34;
      case 0xc:
        goto code_r0x00010134edd8;
      case 0xd:
        goto code_r0x00010134ee1c;
      case 0xe:
      case 0x1d:
        goto code_r0x00010134edc8;
      case 0xf:
      case 0x72:
        goto code_r0x00010134ee5c;
      case 0x10:
        goto code_r0x00010134ee70;
      case 0x11:
      case 0x5c:
        goto code_r0x00010134ee28;
      case 0x12:
        goto code_r0x00010134ee7c;
      case 0x13:
code_r0x00010134edd0:
        bVar5 = 8 < (uint)puVar11;
        bVar6 = (uint)puVar11 == 9;
      case 0x7e:
        if (bVar5 && !bVar6) {
          uStack_98 = SUB81(puVar11,0);
          uStack_97 = 0;
          cStack_a0 = '\x01';
          param_3 = &UNK_10b20a590;
          puStack_138 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                           (&cStack_a0,&UNK_10b22d320,&UNK_10b20a590);
LAB_10134f258:
          uVar15 = 1;
        }
        else {
code_r0x00010134edd8:
          puVar13 = &UNK_108ca01a4;
code_r0x00010134ede0:
          switch(&UNK_10134edf0 + (ulong)(byte)puVar13[(long)puVar11] * 4) {
          case (undefined *)0x10134edf0:
code_r0x00010134edf0:
            uVar15 = 0;
            uStack_140 = (ulong *)((ulong)uStack_140 & 0xffffffffffff0000);
            goto LAB_10134f110;
          case (undefined *)0x10134f0a4:
code_r0x00010134f0a4:
            uVar10 = 0;
            puVar13 = (undefined *)0x4;
code_r0x00010134f0ac:
            uVar15 = (undefined1)uVar10;
            uVar12 = SUB81(puVar13,0);
            break;
          case (undefined *)0x10134f0b0:
code_r0x00010134f0b0:
            uVar15 = 0;
            uVar12 = 9;
            break;
          case (undefined *)0x10134f0bc:
code_r0x00010134f0bc:
            uVar10 = 0;
code_r0x00010134f0c0:
            uVar15 = (undefined1)uVar10;
            uVar12 = 2;
            break;
          case (undefined *)0x10134f0c8:
code_r0x00010134f0c8:
            uVar10 = 0;
            puVar13 = (undefined *)0x3;
code_r0x00010134f0d0:
            uVar15 = (undefined1)uVar10;
            uVar12 = SUB81(puVar13,0);
            break;
          case (undefined *)0x10134f0d4:
code_r0x00010134f0d4:
            uVar15 = 0;
            uVar12 = 7;
            break;
          case (undefined *)0x10134f0e0:
code_r0x00010134f0e0:
            uVar15 = 0;
            uVar12 = 1;
            break;
          case (undefined *)0x10134f0ec:
code_r0x00010134f0ec:
            uVar15 = 0;
            uVar12 = 5;
            break;
          case (undefined *)0x10134f0f8:
code_r0x00010134f0f8:
            uVar15 = 0;
            uVar12 = 6;
            break;
          case (undefined *)0x10134f104:
code_r0x00010134f104:
            uVar15 = 0;
            uVar12 = 8;
          }
          uStack_140 = (ulong *)((ulong)CONCAT61(uStack_140._2_6_,uVar12) << 8);
        }
LAB_10134f110:
        uStack_140 = (ulong *)CONCAT71(uStack_140._1_7_,uVar15);
LAB_10134f114:
        auVar18 = FUN_100e077ec(&uStack_e0);
LAB_10134f11c:
        bVar6 = false;
        if ((char)uStack_140 == '\x01') goto LAB_10134f128;
        goto LAB_10134ed5c;
      case 0x15:
      case 0x3e:
        goto code_r0x00010134ee38;
      case 0x16:
      case 0x44:
        goto code_r0x00010134ee10;
      case 0x17:
        goto code_r0x00010134ee18;
      case 0x18:
      case 0xad:
      case 0xaf:
      case 0xb1:
      case 0xb3:
      case 0xb7:
      case 0xb9:
      case 0xbb:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc1:
      case 0xc5:
      case 199:
      case 0xcb:
      case 0xd1:
        goto code_r0x00010134edb4;
      case 0x19:
      case 0x34:
      case 0xb6:
        goto code_r0x00010134ee58;
      case 0x1a:
        goto code_r0x00010134ee68;
      case 0x1b:
        goto code_r0x00010134ee24;
      case 0x1c:
      case 0x36:
      case 0xc6:
        goto code_r0x00010134ee74;
      case 0x1e:
      case 0x6e:
        goto code_r0x00010134eec0;
      case 0x20:
        goto code_r0x00010134eed0;
      case 0x22:
        goto code_r0x00010134ee98;
      case 0x24:
        goto code_r0x00010134eeb0;
      case 0x26:
        goto code_r0x00010134ee6c;
      case 0x28:
        goto code_r0x00010134eee0;
      case 0x2a:
        goto code_r0x00010134eef8;
      case 0x2c:
      case 0x5e:
      case 0x9c:
        goto code_r0x00010134eeb8;
      case 0x30:
        goto LAB_10134ee8c;
      case 0x32:
        goto code_r0x00010134ef00;
      case 0x38:
        goto code_r0x00010134eee8;
      case 0x3a:
      case 0x66:
      case 0xae:
        goto code_r0x00010134ee40;
      case 0x42:
      case 0xea:
        goto code_r0x00010134ef5c;
      case 0x46:
        goto LAB_10134ee3c;
      case 0x48:
        goto code_r0x00010134edbc;
      case 0x4a:
        goto code_r0x00010134eebc;
      case 0x4b:
        goto code_r0x00010134efa0;
      case 0x4c:
        goto code_r0x00010134efe8;
      case 0x4d:
        goto code_r0x00010134eef4;
      case 0x4f:
        goto code_r0x00010134f08c;
      case 0x51:
        goto code_r0x00010134f0c8;
      case 0x52:
        goto code_r0x00010134ef38;
      case 0x54:
        goto code_r0x00010134ee88;
      case 0x58:
        goto code_r0x00010134ee54;
      case 0x5a:
        goto code_r0x00010134ee78;
      case 0x60:
        goto code_r0x00010134eedc;
      case 0x62:
        goto code_r0x00010134ee80;
      case 100:
        goto code_r0x00010134eefc;
      case 0x68:
      case 0xf4:
        goto code_r0x00010134eee4;
      case 0x6a:
        goto code_r0x00010134f0d0;
      case 0x6c:
        goto code_r0x00010134ee30;
      case 0x70:
        goto code_r0x00010134f0c0;
      case 0x74:
      case 0x76:
        goto code_r0x00010134f098;
      case 0x78:
        goto code_r0x00010134ef58;
      case 0x7a:
        goto code_r0x00010134ef68;
      case 0x80:
        goto code_r0x00010134efa8;
      default:
        goto code_r0x00010134edb0;
      case 0x82:
code_r0x00010134efbc:
        if (uVar10 != 0x12) goto code_r0x00010134efc4;
        break;
      case 0x84:
      case 0xf0:
        goto code_r0x00010134ef34;
      case 0x86:
      case 0xdc:
        goto code_r0x00010134ef6c;
      case 0x88:
        goto code_r0x00010134eeec;
      case 0x8a:
code_r0x00010134efd4:
        param_3 = &UNK_10b20a000;
      case 0xd4:
      case 0xda:
        puVar8 = (ulong *)FUN_108855b04(&cStack_a0,&uStack_51,param_3 + 0x5c0);
code_r0x00010134efe8:
        goto LAB_10134f140;
      case 0x8c:
      case 0xe2:
        goto code_r0x00010134f00c;
      case 0x90:
      case 0xfe:
        goto code_r0x00010134f050;
      case 0x92:
      case 0xe0:
        goto code_r0x00010134ef24;
      case 0x98:
        goto code_r0x00010134ef08;
      case 0xa4:
      case 0xe8:
        goto code_r0x00010134f074;
      case 0xa6:
        goto code_r0x00010134f034;
      case 0xa8:
        goto code_r0x00010134f090;
      case 0xaa:
      case 0xde:
        goto code_r0x00010134efa4;
      case 0xb0:
        goto code_r0x00010134edc4;
      case 0xb2:
LAB_10134edfc:
        uStack_e0 = uVar4;
        param_3 = puStack_d0;
        func_0x000100ad8a9c(&uStack_140,uStack_d8,puStack_d0);
        goto LAB_10134f114;
      case 0xb4:
        goto code_r0x00010134f17c;
      case 0xb8:
        goto code_r0x00010134ee90;
      case 0xba:
        goto LAB_10134ee0c;
      case 0xc0:
        goto code_r0x00010134eea8;
      case 0xc2:
        goto code_r0x00010134f168;
      case 200:
        goto code_r0x00010134f148;
      case 0xca:
        goto code_r0x00010134ede0;
      case 0xcc:
        goto code_r0x00010134f12c;
      case 0xd2:
        goto code_r0x00010134ef2c;
      case 0xd3:
      case 0xd5:
        goto code_r0x00010134ed9c;
      case 0xd8:
code_r0x00010134efc4:
        if ((uVar10 != 0x15) || (puStack_68 != (undefined *)0x0)) goto code_r0x00010134efd4;
        break;
      case 0xe4:
        goto code_r0x00010134f044;
      case 0xec:
        goto code_r0x00010134f054;
      case 0xf2:
        goto code_r0x00010134f01c;
      case 0xfc:
        goto code_r0x00010134f0ac;
      }
      FUN_100e077ec(&cStack_a0);
code_r0x00010134f084:
      uVar10 = 0;
      param_1[1] = bVar3;
code_r0x00010134f08c:
      *param_1 = (char)uVar10;
code_r0x00010134f090:
      bVar6 = cVar2 == '\x15';
      uVar10 = uVar17 ^ 1;
code_r0x00010134f098:
      if (bVar6) {
        uVar10 = 1;
      }
      uVar17 = uVar10 & 1;
      goto joined_r0x00010134f09c;
    }
LAB_10134f128:
    uVar10 = (uint)uStack_80 & 0xff;
code_r0x00010134f12c:
    puVar8 = puStack_138;
    if (uVar10 != 0x16) {
      FUN_100e077ec(&uStack_80);
    }
LAB_10134f140:
    *(ulong **)(param_1 + 8) = puVar8;
    uVar10 = 1;
    goto code_r0x00010134f148;
  }
  if (cVar2 != '\x15') {
    FUN_1088556a8(&uStack_e0,param_2);
    uVar7 = func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 1;
    FUN_100e077ec(param_2);
    goto code_r0x00010134f168;
  }
  uStack_130 = param_2[1];
  uStack_140 = (ulong *)param_2[2];
  uVar14 = param_2[3];
  puStack_128 = uStack_140 + uVar14 * 8;
  puStack_138 = uStack_140;
  if (uVar14 == 0) {
LAB_10134ee0c:
    puVar11 = (undefined *)0xb;
code_r0x00010134ee10:
    uStack_e0 = CONCAT71(uStack_e0._1_7_,(char)puVar11);
    puVar9 = &UNK_10b20a000;
code_r0x00010134ee18:
    puVar9 = puVar9 + 0x580;
code_r0x00010134ee1c:
code_r0x00010134ee24:
    auVar18._8_8_ = puVar9;
    auVar18._0_8_ = &uStack_e0;
code_r0x00010134ee28:
    uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (auVar18._0_8_,auVar18._8_8_);
    *(undefined8 *)(param_1 + 8) = uVar7;
code_r0x00010134ee30:
    puVar11 = (undefined *)0x1;
code_r0x00010134ee34:
    *param_1 = (char)puVar11;
code_r0x00010134ee38:
  }
  else {
    puVar16 = uStack_140 + 8;
    cVar1 = (char)*uStack_140;
    puStack_138 = puVar16;
    if (cVar1 == '\x16') goto LAB_10134ee0c;
    uStack_97 = (undefined7)*(undefined8 *)((long)uStack_140 + 9);
    uStack_9f = (undefined7)*(undefined8 *)((long)uStack_140 + 1);
    uStack_98 = (undefined1)((ulong)*(undefined8 *)((long)uStack_140 + 1) >> 0x38);
    puStack_88 = (undefined *)uStack_140[3];
    puVar11 = (undefined *)uStack_140[2];
    uStack_78 = uStack_140[5];
    uStack_80 = uStack_140[4];
    uStack_90 = SUB81(puVar11,0);
    uStack_8f = (undefined7)((ulong)puVar11 >> 8);
    puStack_68 = (undefined *)uStack_140[7];
    uStack_70 = uStack_140[6];
    cStack_a0 = cVar1;
    if (uVar14 == 1) {
LAB_10134ec48:
      uStack_118 = CONCAT71(uStack_97,uStack_98);
      uStack_120 = CONCAT71(uStack_9f,cVar1);
      uVar15 = (undefined1)uStack_80;
      uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
      uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
      puStack_e9 = (undefined *)uStack_140[7];
      uStack_f1 = (undefined1)uStack_140[6];
      uStack_f0 = (undefined7)(uStack_140[6] >> 8);
      uVar17 = 1;
      puStack_110 = puVar11;
      puStack_108 = puStack_88;
      FUN_100d34830(&uStack_140);
      goto LAB_10134ec84;
    }
    puStack_138 = uStack_140 + 0x10;
    uStack_d8 = uStack_140[9];
    uStack_e0 = *puVar16;
    puStack_c8 = (undefined *)uStack_140[0xb];
    puStack_d0 = (undefined *)uStack_140[10];
    puStack_a8 = (undefined *)uStack_140[0xf];
    uStack_b8 = (undefined1)uStack_140[0xd];
    uStack_b7 = (undefined7)(uStack_140[0xd] >> 8);
    uStack_c0 = (undefined1)uStack_140[0xc];
    uStack_bf = (undefined7)(uStack_140[0xc] >> 8);
    uStack_b0 = (undefined1)uStack_140[0xe];
    uStack_af = (undefined7)(uStack_140[0xe] >> 8);
    if ((byte)uStack_e0 == '\x16') goto LAB_10134ec48;
LAB_10134ee3c:
    puVar16 = &uStack_e0;
code_r0x00010134ee40:
    FUN_100e077ec(&uStack_e0);
    FUN_100e077ec(puVar16 + 4);
    puVar11 = (undefined *)0xb;
code_r0x00010134ee54:
    uStack_e0 = CONCAT71(uStack_e0._1_7_,(char)puVar11);
code_r0x00010134ee58:
    puVar9 = &UNK_10b20a000;
code_r0x00010134ee5c:
    puVar9 = puVar9 + 0x580;
code_r0x00010134ee68:
    auVar18._8_8_ = puVar9;
    auVar18._0_8_ = &uStack_e0;
code_r0x00010134ee6c:
    puVar8 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                (auVar18._0_8_,auVar18._8_8_);
code_r0x00010134ee70:
    *(ulong **)(param_1 + 8) = puVar8;
code_r0x00010134ee74:
    puVar11 = (undefined *)0x1;
code_r0x00010134ee78:
    *param_1 = (char)puVar11;
code_r0x00010134ee7c:
    puVar8 = &uStack_80;
code_r0x00010134ee80:
    FUN_100e077ec(puVar8);
    puVar8 = (ulong *)&cStack_a0;
code_r0x00010134ee88:
    FUN_100e077ec(puVar8);
  }
LAB_10134ee8c:
code_r0x00010134ee90:
  FUN_100d34830(&uStack_140);
code_r0x00010134ee98:
code_r0x00010134f168:
code_r0x00010134f17c:
  return;
code_r0x00010134f148:
  *param_1 = (char)uVar10;
  uVar17 = uVar17 ^ 1;
  if (cVar2 == '\x15') {
    uVar17 = 1;
  }
joined_r0x00010134f09c:
  if (uVar17 == 0) {
    FUN_100e077ec(param_2);
  }
  goto code_r0x00010134f168;
}

