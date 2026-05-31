
/* WARNING: Removing unreachable block (ram,0x0001012f0760) */

void FUN_1012f0104(undefined1 *param_1,ulong *param_2,undefined *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong *puVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined *puStack_e9;
  ulong uStack_e0;
  undefined *puStack_d8;
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
  if ((cVar2 != '\f') && (cVar2 != '\r')) {
    if (cVar2 != '\x15') {
      FUN_1088556a8(&uStack_e0,param_2);
      uVar5 = func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *param_1 = 1;
      FUN_100e077ec(param_2);
      return;
    }
    uStack_130 = param_2[1];
    uStack_140 = (ulong *)param_2[2];
    uVar12 = param_2[3];
    puStack_128 = uStack_140 + uVar12 * 8;
    puStack_138 = uStack_140;
    if (uVar12 != 0) {
      puVar16 = uStack_140 + 8;
      cVar1 = (char)*uStack_140;
      puStack_138 = puVar16;
      if (cVar1 != '\x16') {
        uStack_97 = (undefined7)*(undefined8 *)((long)uStack_140 + 9);
        uStack_9f = (undefined7)*(undefined8 *)((long)uStack_140 + 1);
        uStack_98 = (undefined1)((ulong)*(undefined8 *)((long)uStack_140 + 1) >> 0x38);
        puStack_88 = (undefined *)uStack_140[3];
        puVar7 = (undefined *)uStack_140[2];
        uStack_78 = uStack_140[5];
        uStack_80 = uStack_140[4];
        uStack_90 = SUB81(puVar7,0);
        uStack_8f = (undefined7)((ulong)puVar7 >> 8);
        puStack_68 = (undefined *)uStack_140[7];
        uStack_70 = uStack_140[6];
        cStack_a0 = cVar1;
        if (uVar12 != 1) {
          puStack_138 = uStack_140 + 0x10;
          puStack_d8 = (undefined *)uStack_140[9];
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
          if ((byte)uStack_e0 != '\x16') {
LAB_1012f03b0:
            puVar16 = &uStack_e0;
code_r0x0001012f03b4:
            puVar6 = &uStack_e0;
            goto code_r0x0001012f03b8;
          }
        }
        puStack_118 = (undefined *)CONCAT71(uStack_97,uStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar1);
        uVar15 = (char)uStack_80;
        uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
        puStack_e9 = (undefined *)uStack_140[7];
        uStack_f1 = (undefined1)uStack_140[6];
        uStack_f0 = (undefined7)(uStack_140[6] >> 8);
        bVar17 = 1;
        puStack_110 = puVar7;
        puStack_108 = puStack_88;
        FUN_100d34830(&uStack_140);
        goto LAB_1012f01f8;
      }
    }
    puVar9 = (undefined *)0xb;
code_r0x0001012f0384:
    uStack_e0 = CONCAT71(uStack_e0._1_7_,(char)puVar9);
    puVar7 = &UNK_10b20a000;
code_r0x0001012f038c:
    puVar7 = puVar7 + 0x580;
code_r0x0001012f0394:
    auVar18._8_8_ = puVar7;
    auVar18._0_8_ = &uStack_e0;
code_r0x0001012f039c:
    uVar5 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (auVar18._0_8_,auVar18._8_8_);
    *(undefined8 *)(param_1 + 8) = uVar5;
code_r0x0001012f03a4:
    puVar9 = (undefined *)0x1;
code_r0x0001012f03a8:
    *param_1 = (char)puVar9;
code_r0x0001012f03ac:
LAB_1012f0400:
code_r0x0001012f0404:
    FUN_100d34830(&uStack_140);
LAB_1012f06d8:
    return;
  }
  bVar17 = 0;
  puStack_118 = (undefined *)param_2[1];
  uStack_120 = *param_2;
  puStack_108 = (undefined *)param_2[3];
  puStack_110 = (undefined *)param_2[2];
  uVar15 = 0x16;
LAB_1012f01f8:
  puVar11 = puStack_110;
  puVar7 = puStack_118;
  puStack_d8 = puStack_118;
  uStack_e0 = uStack_120;
  uVar12 = uStack_e0;
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
  uStack_e0 = uVar12;
  uStack_c0 = uVar15;
  if ((byte)uStack_e0 < 0xd) {
    if ((byte)uStack_e0 == 1) goto LAB_1012f0340;
    if ((byte)uStack_e0 == 4) {
      switch(puStack_118) {
      case (undefined *)0x0:
        goto code_r0x0001012f0364;
      case (undefined *)0x1:
        goto code_r0x0001012f0654;
      case (undefined *)0x2:
        goto code_r0x0001012f0630;
      case (undefined *)0x3:
        goto code_r0x0001012f063c;
      case (undefined *)0x4:
        goto code_r0x0001012f0618;
      case (undefined *)0x5:
        goto code_r0x0001012f0660;
      case (undefined *)0x6:
        goto code_r0x0001012f066c;
      case (undefined *)0x7:
        goto code_r0x0001012f0648;
      case (undefined *)0x8:
        goto code_r0x0001012f0678;
      case (undefined *)0x9:
        goto code_r0x0001012f0624;
      default:
        uStack_98 = SUB81(puStack_118,0);
        uStack_97 = (undefined7)((ulong)puStack_118 >> 8);
        cStack_a0 = '\x01';
        param_3 = &UNK_10b20a590;
        puStack_138 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                         (&cStack_a0,&UNK_10b22d320,&UNK_10b20a590);
        goto LAB_1012f07cc;
      }
    }
    if ((byte)uStack_e0 == 0xc) {
      param_3 = puStack_108;
      auVar18 = func_0x000100ae48d0(&uStack_140,puStack_110,puStack_108);
LAB_1012f02b8:
      if (puVar7 == (undefined *)0x0) goto LAB_1012f0690;
      auVar18 = _free(puVar11);
      bVar4 = (char)uStack_140 == '\x01';
      if (!bVar4) {
LAB_1012f02d0:
        puVar7 = auVar18._8_8_;
        puVar6 = auVar18._0_8_;
        bVar3 = uStack_140._1_1_;
        puVar16 = (ulong *)(ulong)uStack_140._1_1_;
        uStack_90 = (undefined1)uStack_70;
        uStack_8f = (undefined7)(uStack_70 >> 8);
        uStack_98 = (undefined1)uStack_78;
        uStack_97 = (undefined7)(uStack_78 >> 8);
        puStack_88 = puStack_68;
        cStack_a0 = (char)uStack_80;
        uStack_9f = (undefined7)(uStack_80 >> 8);
        uVar8 = (uint)uStack_80 & 0xff;
        puVar9 = (undefined *)(ulong)uVar8;
        puVar11 = &UNK_108c9feda;
        uVar14 = (ulong)*(byte *)((long)puVar16 + 0x108c9feda);
        puVar13 = &UNK_1012f0308 + uVar14 * 4;
        uVar12 = uStack_e0;
        switch(uStack_140._1_1_) {
        case 0:
        case 0x1a:
        case 0x20:
        case 0x21:
        case 0x35:
        case 0x36:
        case 0xa2:
        case 0xa3:
        case 0xa7:
        case 0xa9:
        case 0xab:
        case 0xce:
        case 0xcf:
        case 0xd7:
        case 0xfa:
        case 0xfb:
        case 0xff:
          bVar4 = uVar8 == 0x16;
        case 0x11:
        case 0x13:
        case 0x15:
        case 0x23:
        case 0x25:
        case 0x27:
        case 0x2b:
        case 0x2d:
        case 0x2f:
        case 0x31:
        case 0x33:
        case 0xd3:
        case 0xd5:
          if (!bVar4) {
code_r0x0001012f0310:
            if (uVar8 != 0x12) {
              bVar4 = uVar8 == 0x15;
code_r0x0001012f031c:
              if (bVar4) {
code_r0x0001012f0320:
                puVar9 = puStack_68;
code_r0x0001012f0324:
                if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
              }
code_r0x0001012f032c:
code_r0x0001012f0330:
              puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f0334:
              puVar6 = (ulong *)FUN_108855b04(puVar6,&uStack_51);
code_r0x0001012f033c:
              goto LAB_1012f06b4;
            }
code_r0x0001012f05f0:
            puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f05f4:
            FUN_100e077ec(puVar6);
          }
code_r0x0001012f05f8:
          uVar8 = 0;
code_r0x0001012f05fc:
          param_1[1] = bVar3;
          *param_1 = (char)uVar8;
code_r0x0001012f0604:
          bVar4 = (bool)(bVar17 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
          if (bVar4) {
            return;
          }
code_r0x0001012f0614:
          goto code_r0x0001012f06d0;
        case 1:
          bVar4 = uVar8 == 0x16;
        case 0x7e:
          if (bVar4) goto code_r0x0001012f05f8;
          bVar4 = uVar8 == 0x12;
code_r0x0001012f0534:
          if (bVar4) goto code_r0x0001012f05f0;
          bVar4 = uVar8 == 0x15;
code_r0x0001012f053c:
          puVar9 = puStack_68;
          if (bVar4) {
code_r0x0001012f0544:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
code_r0x0001012f054c:
          puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f0554:
          puVar6 = (ulong *)FUN_108855b04(puVar6,&uStack_51);
code_r0x0001012f055c:
          goto LAB_1012f06b4;
        case 2:
        case 0x28:
        case 0x80:
          bVar4 = uVar8 == 0x16;
        case 0x4b:
          if (bVar4) goto code_r0x0001012f05f8;
          bVar4 = uVar8 == 0x12;
code_r0x0001012f048c:
          if (bVar4) goto code_r0x0001012f05f0;
code_r0x0001012f0490:
          bVar4 = uVar8 == 0x15;
code_r0x0001012f0494:
          puVar9 = puStack_68;
          if (bVar4) {
code_r0x0001012f049c:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
code_r0x0001012f04a0:
code_r0x0001012f04a4:
code_r0x0001012f04a8:
          puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f04ac:
          puVar6 = (ulong *)FUN_108855b04(puVar6,&uStack_51);
code_r0x0001012f04b4:
          goto LAB_1012f06b4;
        case 3:
        case 0x8c:
          bVar4 = uVar8 == 0x16;
        case 0x56:
        case 0xd6:
          if (bVar4) goto code_r0x0001012f05f8;
code_r0x0001012f04c0:
          bVar4 = uVar8 == 0x12;
code_r0x0001012f04c4:
          if (bVar4) goto code_r0x0001012f05f0;
          bVar4 = uVar8 == 0x15;
code_r0x0001012f04cc:
          if (bVar4) {
code_r0x0001012f04d0:
            puVar9 = puStack_68;
code_r0x0001012f04d4:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
code_r0x0001012f04dc:
          puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f04e4:
          puVar6 = (ulong *)FUN_108855b04(puVar6,&uStack_51);
code_r0x0001012f04ec:
          goto LAB_1012f06b4;
        case 4:
          bVar4 = uVar8 == 0x16;
        case 0x38:
          if (bVar4) goto code_r0x0001012f05f8;
code_r0x0001012f0418:
          bVar4 = uVar8 == 0x12;
code_r0x0001012f041c:
          if (bVar4) goto code_r0x0001012f05f0;
code_r0x0001012f0420:
          bVar4 = uVar8 == 0x15;
code_r0x0001012f0424:
          puVar9 = puStack_68;
          if (bVar4) {
code_r0x0001012f042c:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
code_r0x0001012f0434:
          puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f043c:
          puVar6 = (ulong *)FUN_108855b04(puVar6,&uStack_51);
code_r0x0001012f0444:
          goto LAB_1012f06b4;
        case 5:
          if (uVar8 != 0x16) {
            if (uVar8 != 0x12) {
              bVar4 = uVar8 == 0x15;
              goto code_r0x0001012f0574;
            }
            goto code_r0x0001012f05f0;
          }
          goto code_r0x0001012f05f8;
        case 6:
          if (uVar8 == 0x16) goto code_r0x0001012f05f8;
          bVar4 = uVar8 == 0x12;
        case 0x2e:
          if (bVar4) goto code_r0x0001012f05f0;
code_r0x0001012f05a8:
          puVar9 = puStack_68;
          if (uVar8 == 0x15) {
code_r0x0001012f05b4:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
          param_3 = &UNK_10b20a000;
code_r0x0001012f05bc:
          puVar6 = (ulong *)FUN_108855b04(&cStack_a0,&uStack_51,param_3 + 0x5c0);
code_r0x0001012f05cc:
          goto LAB_1012f06b4;
        case 7:
          bVar4 = uVar8 == 0x16;
        case 0x71:
          if (bVar4) goto code_r0x0001012f05f8;
          bVar4 = uVar8 == 0x12;
code_r0x0001012f04fc:
          if (bVar4) goto code_r0x0001012f05f0;
          bVar4 = uVar8 == 0x15;
code_r0x0001012f0504:
          puVar9 = puStack_68;
          if (bVar4) {
code_r0x0001012f050c:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
code_r0x0001012f0514:
          puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f051c:
          puVar6 = (ulong *)FUN_108855b04(puVar6,&uStack_51);
code_r0x0001012f0524:
          goto LAB_1012f06b4;
        case 8:
          bVar4 = uVar8 == 0x16;
        case 0xe6:
          if (bVar4) goto code_r0x0001012f05f8;
          bVar4 = uVar8 == 0x12;
code_r0x0001012f05dc:
          if (bVar4) goto code_r0x0001012f05f0;
          puVar9 = puStack_68;
          if (uVar8 == 0x15) {
code_r0x0001012f05ec:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
          puVar6 = (ulong *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_1012f06b4;
        case 9:
          bVar4 = uVar8 == 0x16;
        case 0x47:
        case 0x92:
          if (bVar4) goto code_r0x0001012f05f8;
code_r0x0001012f0450:
          bVar4 = uVar8 == 0x12;
code_r0x0001012f0454:
          if (bVar4) goto code_r0x0001012f05f0;
code_r0x0001012f0458:
          bVar4 = uVar8 == 0x15;
code_r0x0001012f045c:
          if (bVar4) {
code_r0x0001012f0460:
            puVar9 = puStack_68;
code_r0x0001012f0464:
            if (puVar9 == (undefined *)0x0) goto code_r0x0001012f05f0;
          }
code_r0x0001012f046c:
code_r0x0001012f0470:
          puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f0474:
          auVar18._8_8_ = &uStack_51;
          auVar18._0_8_ = puVar6;
code_r0x0001012f0478:
          puVar6 = (ulong *)FUN_108855b04(auVar18._0_8_,auVar18._8_8_);
code_r0x0001012f047c:
          goto LAB_1012f06b4;
        case 10:
        case 0xc6:
          goto code_r0x0001012f03c0;
        default:
          goto code_r0x0001012f0310;
        case 0xc:
        case 0x78:
          goto code_r0x0001012f0334;
        case 0xe:
          goto code_r0x0001012f0420;
        case 0x10:
          return;
        case 0x12:
          goto code_r0x0001012f06ac;
        case 0x14:
          goto code_r0x0001012f05f4;
        case 0x16:
          goto code_r0x0001012f0450;
        case 0x18:
        case 0x59:
          goto code_r0x0001012f0364;
        case 0x1c:
        case 0x76:
          goto code_r0x0001012f03ec;
        case 0x1e:
        case 0x79:
        case 0xba:
          goto code_r0x0001012f0394;
        case 0x22:
          goto code_r0x0001012f067c;
        case 0x24:
        case 0x6c:
        case 0xa4:
          goto code_r0x0001012f0524;
        case 0x26:
          goto code_r0x0001012f0624;
        case 0x2a:
        case 0xde:
          goto code_r0x0001012f05cc;
        case 0x2c:
code_r0x0001012f057c:
          if (puVar9 != (undefined *)0x0) goto code_r0x0001012f0588;
          goto code_r0x0001012f05f0;
        case 0x30:
          goto code_r0x0001012f0654;
        case 0x32:
        case 0x69:
        case 0xf8:
          goto code_r0x0001012f0554;
        case 0x34:
        case 0x6b:
        case 0xb4:
          goto code_r0x0001012f034c;
        case 0x37:
          goto code_r0x0001012f043c;
        case 0x39:
        case 0x88:
          goto code_r0x0001012f042c;
        case 0x3a:
          goto code_r0x0001012f03d4;
        case 0x3b:
          goto code_r0x0001012f046c;
        case 0x3c:
          goto code_r0x0001012f0494;
        case 0x3d:
        case 0x98:
          goto code_r0x0001012f0434;
        case 0x3e:
          goto code_r0x0001012f04ac;
        case 0x3f:
          goto code_r0x0001012f03fc;
        case 0x40:
          goto code_r0x0001012f04a4;
        case 0x41:
          goto code_r0x0001012f03c4;
        case 0x42:
          goto code_r0x0001012f03f4;
        case 0x43:
          goto code_r0x0001012f048c;
        case 0x44:
          goto code_r0x0001012f03a4;
        case 0x45:
          goto code_r0x0001012f041c;
        case 0x46:
        case 0xb2:
        case 0xfe:
          goto code_r0x0001012f038c;
        case 0x48:
          goto code_r0x0001012f049c;
        case 0x49:
          goto code_r0x0001012f04dc;
        case 0x4a:
          goto code_r0x0001012f045c;
        case 0x4c:
          goto code_r0x0001012f04cc;
        case 0x4d:
          goto code_r0x0001012f04fc;
        case 0x4e:
        case 0xd0:
          goto LAB_1012f06d8;
        case 0x4f:
          goto code_r0x0001012f0404;
        case 0x50:
          goto code_r0x0001012f051c;
        case 0x51:
        case 0xca:
          goto code_r0x0001012f037c;
        case 0x52:
          goto code_r0x0001012f0504;
        case 0x53:
          goto code_r0x0001012f050c;
        case 0x54:
          goto code_r0x0001012f04b4;
        case 0x55:
          goto code_r0x0001012f0444;
        case 0x57:
          goto code_r0x0001012f03ac;
        case 0x58:
        case 0xa6:
          goto code_r0x0001012f0384;
        case 0x5a:
          goto code_r0x0001012f036c;
        case 0x5b:
          goto code_r0x0001012f0344;
        case 0x5c:
          goto code_r0x0001012f0514;
        case 0x5d:
          goto code_r0x0001012f04d4;
        case 0x5e:
          goto code_r0x0001012f03dc;
        case 0x5f:
          goto code_r0x0001012f0454;
        case 0x60:
          goto code_r0x0001012f04ec;
        case 0x61:
        case 200:
          goto code_r0x0001012f032c;
        case 0x62:
        case 0xac:
        case 0xd4:
          goto code_r0x0001012f039c;
        case 99:
          goto code_r0x0001012f04c4;
        case 100:
          goto code_r0x0001012f0544;
        case 0x65:
        case 0xc4:
          goto code_r0x0001012f0354;
        case 0x66:
          goto code_r0x0001012f03b4;
        case 0x67:
          goto code_r0x0001012f03cc;
        case 0x68:
        case 0xcc:
          goto code_r0x0001012f0324;
        case 0x6a:
          goto code_r0x0001012f053c;
        case 0x6d:
          goto code_r0x0001012f0534;
        case 0x6e:
          goto code_r0x0001012f035c;
        case 0x6f:
          goto code_r0x0001012f04e4;
        case 0x70:
          goto code_r0x0001012f03bc;
        case 0x72:
          goto code_r0x0001012f03e4;
        case 0x73:
          goto code_r0x0001012f0464;
        case 0x74:
          goto code_r0x0001012f047c;
        case 0x75:
          goto code_r0x0001012f0424;
        case 0x77:
          goto code_r0x0001012f0474;
        case 0x7a:
        case 0xf4:
          goto code_r0x0001012f055c;
        case 0x7b:
        case 0xb0:
code_r0x0001012f0374:
          uStack_e0 = uVar12;
          auVar18._8_8_ = puVar7;
          auVar18._0_8_ = &uStack_140;
        case 0xd2:
          func_0x000100ae48d0(auVar18._0_8_,auVar18._8_8_);
code_r0x0001012f037c:
          goto LAB_1012f0688;
        case 0x7c:
          goto code_r0x0001012f031c;
        case 0x7d:
          goto code_r0x0001012f033c;
        case 0x7f:
          goto code_r0x0001012f054c;
        case 0x82:
          goto code_r0x0001012f0490;
        case 0x84:
          goto code_r0x0001012f0458;
        case 0x86:
          goto code_r0x0001012f0470;
        case 0x8a:
          goto code_r0x0001012f04a0;
        case 0x8e:
          goto code_r0x0001012f0478;
        case 0x90:
          goto code_r0x0001012f04d0;
        case 0x94:
          goto code_r0x0001012f04c0;
        case 0x96:
          goto code_r0x0001012f0418;
        case 0x9a:
          goto code_r0x0001012f04a8;
        case 0x9c:
          goto LAB_1012f0400;
        case 0x9e:
          goto code_r0x0001012f0460;
        case 0xa0:
          goto code_r0x0001012f03f8;
        case 0xa8:
          goto LAB_1012f03b0;
        case 0xaa:
          goto code_r0x0001012f0330;
        case 0xae:
          goto code_r0x0001012f03a8;
        case 0xb6:
code_r0x0001012f03b8:
          FUN_100e077ec(puVar6);
code_r0x0001012f03bc:
          puVar6 = puVar16 + 4;
code_r0x0001012f03c0:
          FUN_100e077ec(puVar6);
code_r0x0001012f03c4:
          uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
code_r0x0001012f03cc:
          puVar7 = &UNK_10b20a000;
        case 0xb8:
          puVar7 = puVar7 + 0x580;
code_r0x0001012f03d4:
        case 0xc0:
code_r0x0001012f03dc:
          puVar6 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                      (&uStack_e0,puVar7);
code_r0x0001012f03e4:
          *(ulong **)(param_1 + 8) = puVar6;
        case 0xbc:
          puVar9 = (undefined *)0x1;
code_r0x0001012f03ec:
          *param_1 = (char)puVar9;
          puVar6 = &uStack_80;
code_r0x0001012f03f4:
          FUN_100e077ec(puVar6);
          goto code_r0x0001012f03f8;
        case 0xbe:
          goto code_r0x0001012f0368;
        case 0xc2:
          goto LAB_1012f0340;
        case 0xd8:
          goto code_r0x0001012f05dc;
        case 0xd9:
        case 0xdb:
        case 0xdd:
        case 0xdf:
        case 0xe1:
        case 0xe3:
        case 0xe5:
        case 0xe7:
        case 0xe9:
        case 0xeb:
        case 0xed:
        case 0xef:
        case 0xf1:
        case 0xf3:
        case 0xf5:
        case 0xf7:
        case 0xf9:
        case 0xfd:
          goto code_r0x0001012f0320;
        case 0xda:
          goto code_r0x0001012f05ec;
        case 0xdc:
          goto code_r0x0001012f05b4;
        case 0xe0:
          goto code_r0x0001012f0588;
        case 0xe2:
          goto code_r0x0001012f05fc;
        case 0xe4:
          goto code_r0x0001012f0614;
        case 0xe8:
          goto code_r0x0001012f062c;
        case 0xea:
          goto code_r0x0001012f05a8;
        case 0xec:
          goto code_r0x0001012f061c;
        case 0xee:
code_r0x0001012f0574:
          puVar9 = puStack_68;
          if (bVar4) goto code_r0x0001012f057c;
code_r0x0001012f0588:
          auVar18._8_8_ = &uStack_51;
          auVar18._0_8_ = &cStack_a0;
code_r0x0001012f0590:
          puVar6 = (ulong *)FUN_108855b04(auVar18._0_8_,auVar18._8_8_);
          goto LAB_1012f06b4;
        case 0xf0:
          goto code_r0x0001012f0590;
        case 0xf2:
          goto code_r0x0001012f0604;
        case 0xf6:
          goto code_r0x0001012f05bc;
        case 0xfc:
          goto code_r0x0001012f0650;
        }
      }
      goto LAB_1012f069c;
    }
  }
  else {
    param_3 = puStack_110;
    if ((byte)uStack_e0 == 0xd) goto code_r0x0001012f0374;
    if ((byte)uStack_e0 == 0xe) {
      param_3 = puStack_108;
      auVar18 = func_0x000100ae41dc(&uStack_140,puStack_110,puStack_108);
      goto LAB_1012f02b8;
    }
    if ((byte)uStack_e0 == 0xf) {
      func_0x000100ae41dc(&uStack_140,puStack_118,puStack_110);
      goto LAB_1012f0688;
    }
  }
  puStack_138 = (ulong *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b210260);
  uStack_140 = (ulong *)CONCAT71(uStack_140._1_7_,1);
LAB_1012f069c:
  puVar6 = puStack_138;
  puVar16 = puStack_138;
  if ((char)uStack_80 != '\x16') {
code_r0x0001012f06ac:
    puVar6 = puVar16;
    FUN_100e077ec(&uStack_80);
  }
LAB_1012f06b4:
  *(ulong **)(param_1 + 8) = puVar6;
  *param_1 = 1;
  bVar4 = (bool)(bVar17 ^ 1);
  if (cVar2 == '\x15') {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
code_r0x0001012f06d0:
  FUN_100e077ec(param_2);
  return;
LAB_1012f0340:
  uStack_e0 = uVar12;
  puVar9 = (undefined *)(uStack_e0 >> 8 & 0xff);
code_r0x0001012f0344:
  if ((uint)puVar9 < 10) {
code_r0x0001012f034c:
    puVar11 = &UNK_108c9fed0;
code_r0x0001012f0354:
    puVar13 = &UNK_1012f0364;
    uVar14 = (ulong)(byte)puVar11[(long)puVar9];
code_r0x0001012f035c:
    switch(puVar13 + uVar14 * 4) {
    case (undefined *)0x1012f0364:
code_r0x0001012f0364:
      uVar8 = 0;
code_r0x0001012f0368:
      uStack_140 = (ulong *)((ulong)uStack_140 & 0xffffffffffff0000);
code_r0x0001012f036c:
      uVar15 = (undefined1)uVar8;
      goto LAB_1012f0684;
    case (undefined *)0x1012f0618:
code_r0x0001012f0618:
      uVar8 = 0;
code_r0x0001012f061c:
      uVar15 = (undefined1)uVar8;
      uVar10 = 4;
      break;
    case (undefined *)0x1012f0624:
code_r0x0001012f0624:
      uVar8 = 0;
      puVar11 = (undefined *)0x9;
code_r0x0001012f062c:
      uVar15 = (undefined1)uVar8;
      uVar10 = SUB81(puVar11,0);
      break;
    case (undefined *)0x1012f0630:
code_r0x0001012f0630:
      uVar15 = 0;
      uVar10 = 2;
      break;
    case (undefined *)0x1012f063c:
code_r0x0001012f063c:
      uVar15 = 0;
      uVar10 = 3;
      break;
    case (undefined *)0x1012f0648:
code_r0x0001012f0648:
      uVar8 = 0;
      puVar11 = (undefined *)0x7;
code_r0x0001012f0650:
      uVar15 = (undefined1)uVar8;
      uVar10 = SUB81(puVar11,0);
      break;
    case (undefined *)0x1012f0654:
code_r0x0001012f0654:
      uVar15 = 0;
      uVar10 = 1;
      break;
    case (undefined *)0x1012f0660:
code_r0x0001012f0660:
      uVar15 = 0;
      uVar10 = 5;
      break;
    case (undefined *)0x1012f066c:
code_r0x0001012f066c:
      uVar15 = 0;
      uVar10 = 6;
      break;
    case (undefined *)0x1012f0678:
code_r0x0001012f0678:
      uVar8 = 0;
code_r0x0001012f067c:
      uVar15 = (undefined1)uVar8;
      uVar10 = 8;
    }
    uStack_140 = (ulong *)((ulong)CONCAT61(uStack_140._2_6_,uVar10) << 8);
  }
  else {
    uStack_98 = SUB81(puVar9,0);
    uStack_97 = 0;
    cStack_a0 = '\x01';
    param_3 = &UNK_10b20a590;
    puStack_138 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                     (&cStack_a0,&UNK_10b22d320,&UNK_10b20a590);
LAB_1012f07cc:
    uVar15 = 1;
  }
LAB_1012f0684:
  uStack_140 = (ulong *)CONCAT71(uStack_140._1_7_,uVar15);
LAB_1012f0688:
  auVar18 = FUN_100e077ec(&uStack_e0);
LAB_1012f0690:
  bVar4 = false;
  if ((char)uStack_140 == '\x01') goto LAB_1012f069c;
  goto LAB_1012f02d0;
code_r0x0001012f03f8:
  puVar6 = (ulong *)&cStack_a0;
code_r0x0001012f03fc:
  FUN_100e077ec(puVar6);
  goto LAB_1012f0400;
}

