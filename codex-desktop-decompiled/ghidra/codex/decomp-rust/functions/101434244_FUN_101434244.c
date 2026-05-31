
/* WARNING: Removing unreachable block (ram,0x000101434808) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101434244(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  long unaff_x25;
  undefined8 uStack_140;
  char *pcStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  long lStack_e9;
  undefined8 uStack_e0;
  long lStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  char cStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_51;
  
  bVar13 = (byte)unaff_x25;
  cVar3 = *param_2;
  if ((cVar3 == '\f') || (cVar3 == '\r')) {
    bVar12 = 0;
    lStack_118 = *(long *)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    pcStack_110 = *(char **)(param_2 + 0x10);
    pcVar10 = (char *)0x16;
LAB_101434338:
    pcVar7 = pcStack_110;
    lVar11 = lStack_118;
    lStack_d8 = lStack_118;
    uStack_e0 = uStack_120;
    uVar5 = uStack_e0;
    lStack_c8 = lStack_108;
    pcStack_d0 = pcStack_110;
    uStack_c0 = SUB81(pcVar10,0);
    uStack_b7 = uStack_f8;
    uStack_bf = (undefined7)uStack_100;
    uStack_b8 = (undefined1)((ulong)uStack_100 >> 0x38);
    lStack_a8 = lStack_e9;
    uStack_b0 = uStack_f1;
    uStack_af = uStack_f0;
    uStack_78 = CONCAT71(uStack_f8,uStack_b8);
    uStack_80 = CONCAT71(uStack_bf,uStack_c0);
    uStack_70 = CONCAT71(uStack_f0,uStack_f1);
    lStack_68 = lStack_e9;
    uStack_e0._0_1_ = (byte)uStack_120;
    uStack_e0 = uVar5;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        uStack_e0._1_1_ = (byte)((ulong)uStack_120 >> 8);
        if (uStack_e0._1_1_ < 2) {
          if (uStack_e0._1_1_ == 0) {
LAB_1014345b4:
            uVar8 = 0;
            uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
            goto LAB_1014345d4;
          }
          if (uStack_e0._1_1_ != 1) {
LAB_10143483c:
            bStack_98 = uStack_e0._1_1_;
            uStack_97 = 0;
            cStack_a0 = '\x01';
            pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&cStack_a0,&UNK_10b22b4b8,&UNK_10b20a590);
            goto LAB_101434860;
          }
LAB_1014345a8:
          uVar9 = 1;
        }
        else if (uStack_e0._1_1_ == 2) {
LAB_1014345bc:
          uVar9 = 2;
        }
        else if (uStack_e0._1_1_ == 3) {
LAB_1014345c8:
          uVar9 = 3;
        }
        else {
          if (uStack_e0._1_1_ != 4) goto LAB_10143483c;
LAB_1014344bc:
          uVar9 = 4;
        }
        uVar8 = 0;
        uStack_140 = (char *)((ulong)CONCAT61(uStack_140._2_6_,uVar9) << 8);
LAB_1014345d4:
        uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar8);
        goto LAB_1014345d8;
      }
      if ((byte)uStack_e0 == 4) {
        if (lStack_118 < 2) {
          if (lStack_118 == 0) goto LAB_1014345b4;
          if (lStack_118 == 1) goto LAB_1014345a8;
        }
        else {
          if (lStack_118 == 2) goto LAB_1014345bc;
          if (lStack_118 == 3) goto LAB_1014345c8;
          if (lStack_118 == 4) goto LAB_1014344bc;
        }
        bStack_98 = (byte)lStack_118;
        uStack_97 = (undefined7)((ulong)lStack_118 >> 8);
        cStack_a0 = '\x01';
        pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_a0,&UNK_10b22b4b8,&UNK_10b20a590);
LAB_101434860:
        uVar8 = 1;
        goto LAB_1014345d4;
      }
      if ((byte)uStack_e0 == 0xc) {
        func_0x000100b2c174(&uStack_140,pcStack_110,lStack_108);
        goto LAB_1014343fc;
      }
LAB_1014347dc:
      pcStack_138 = (char *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b20d280);
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
      lVar6 = lStack_88;
LAB_1014345ec:
      lStack_88 = lVar6;
      pcVar7 = pcStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      uVar9 = true;
      uVar8 = bVar12 ^ 1;
      if (cVar3 == '\x15') {
        uVar8 = true;
      }
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        func_0x000100b2c174(&uStack_140,lStack_118,pcStack_110);
LAB_1014345d8:
        FUN_100e077ec(&uStack_e0);
LAB_1014345e0:
        pcVar7 = pcVar10;
        lVar11 = unaff_x25;
        pcVar10 = uStack_140;
        lVar6 = lStack_88;
        lStack_88 = lStack_68;
      }
      else {
        if ((byte)uStack_e0 != 0xe) {
          if ((byte)uStack_e0 != 0xf) goto LAB_1014347dc;
          func_0x000100b2b950(&uStack_140,lStack_118,pcStack_110);
          goto LAB_1014345d8;
        }
        func_0x000100b2b950(&uStack_140,pcStack_110,lStack_108);
LAB_1014343fc:
        pcVar10 = pcVar7;
        unaff_x25 = lVar11;
        if (lVar11 == 0) goto LAB_1014345e0;
        _free(pcVar7);
        pcVar10 = uStack_140;
        lVar6 = lStack_88;
        lStack_88 = lStack_68;
      }
      bVar13 = (byte)lVar11;
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = pcVar10;
      lStack_68 = lStack_88;
      if (bVar4) goto LAB_1014345ec;
      uStack_140._1_1_ = (byte)((ulong)pcVar10 >> 8);
      bVar13 = uStack_140._1_1_;
      uStack_90 = (undefined1)uStack_70;
      uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
      bStack_98 = (byte)uStack_78;
      uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
      cStack_a0 = (char)uStack_80;
      uStack_9f = (undefined7)(uStack_80 >> 8);
      uVar1 = (uint)uStack_80 & 0xff;
      if (uStack_140._1_1_ < 2) {
        if (uStack_140._1_1_ != 0) {
          if (uVar1 != 0x16) {
            if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
              pcVar7 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
              goto LAB_101434820;
            }
            goto LAB_101434784;
          }
          bVar13 = 1;
          uVar8 = bVar12 ^ 1;
          if (cVar3 == '\x15') {
            uVar8 = true;
          }
          goto joined_r0x00010143479c;
        }
        if (uVar1 != 0x16) {
          if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) goto LAB_101434784;
          pcVar7 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_101434820:
          uVar9 = true;
          uVar8 = bVar12 ^ 1;
          if (cVar3 == '\x15') {
            uVar8 = true;
          }
        }
        else {
          bVar13 = 0;
          uVar9 = false;
          uVar8 = bVar12 ^ 1;
          if (cVar3 == '\x15') {
            uVar8 = true;
          }
        }
      }
      else {
        if (uStack_140._1_1_ == 2) {
          if (uVar1 == 0x16) {
            uVar9 = false;
            bVar13 = 2;
            uVar8 = bVar12 ^ 1;
            if (cVar3 == '\x15') {
              uVar8 = true;
            }
            goto joined_r0x000101434490;
          }
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar7 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_101434820;
          }
        }
        else if (uStack_140._1_1_ == 3) {
          if (uVar1 == 0x16) {
            bVar13 = 3;
            uVar8 = bVar12 ^ 1;
            if (cVar3 == '\x15') {
              uVar8 = true;
            }
            goto joined_r0x00010143479c;
          }
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar7 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_101434820;
          }
        }
        else {
          if (uVar1 == 0x16) {
            uVar9 = false;
            bVar13 = 4;
            uVar8 = bVar12 ^ 1;
            if (cVar3 == '\x15') {
              uVar8 = true;
            }
            goto joined_r0x000101434490;
          }
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar7 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_101434820;
          }
        }
LAB_101434784:
        FUN_100e077ec(&cStack_a0);
        uVar8 = bVar12 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
joined_r0x00010143479c:
        uVar9 = false;
      }
    }
joined_r0x000101434490:
    if (!(bool)uVar8) {
      FUN_100e077ec(param_2);
    }
    if (!(bool)uVar9) {
      uVar8 = 0;
      param_1[1] = bVar13;
      goto LAB_10143468c;
    }
  }
  else if (cVar3 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(char **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18);
    pcStack_128 = uStack_140 + lVar11 * 0x40;
    pcStack_138 = uStack_140;
    if (lVar11 == 0) {
LAB_1014344d8:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      pcVar7 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      pcVar10 = uStack_140 + 0x40;
      cVar2 = *uStack_140;
      pcStack_138 = pcVar10;
      if (cVar2 == '\x16') goto LAB_1014344d8;
      uStack_97 = (undefined7)*(undefined8 *)(uStack_140 + 9);
      uStack_9f = (undefined7)*(undefined8 *)(uStack_140 + 1);
      bStack_98 = (byte)((ulong)*(undefined8 *)(uStack_140 + 1) >> 0x38);
      lStack_108 = *(long *)(uStack_140 + 0x18);
      pcStack_110 = *(char **)(uStack_140 + 0x10);
      uStack_78 = *(undefined8 *)(uStack_140 + 0x28);
      uStack_80 = *(ulong *)(uStack_140 + 0x20);
      uStack_90 = SUB81(pcStack_110,0);
      uStack_8f = (undefined7)((ulong)pcStack_110 >> 8);
      lStack_68 = *(long *)(uStack_140 + 0x38);
      uStack_70 = *(undefined8 *)(uStack_140 + 0x30);
      cStack_a0 = cVar2;
      lStack_88 = lStack_108;
      if (lVar11 == 1) {
LAB_1014342fc:
        lStack_118 = CONCAT71(uStack_97,bStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        pcVar10 = (char *)(uStack_80 & 0xff);
        uStack_100 = *(undefined8 *)(uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)(uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0x38);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0x30);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x30) >> 8);
        bVar12 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_101434338;
      }
      pcStack_138 = uStack_140 + 0x80;
      lStack_d8 = *(long *)(uStack_140 + 0x48);
      uStack_e0 = *(undefined8 *)pcVar10;
      lStack_c8 = *(long *)(uStack_140 + 0x58);
      pcStack_d0 = *(char **)(uStack_140 + 0x50);
      lStack_a8 = *(long *)(uStack_140 + 0x78);
      uStack_b8 = (undefined1)*(undefined8 *)(uStack_140 + 0x68);
      uStack_b7 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x68) >> 8);
      uStack_c0 = (undefined1)*(undefined8 *)(uStack_140 + 0x60);
      uStack_bf = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x60) >> 8);
      uStack_b0 = (undefined1)*(undefined8 *)(uStack_140 + 0x70);
      uStack_af = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x70) >> 8);
      if ((byte)uStack_e0 == '\x16') goto LAB_1014342fc;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      pcVar7 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    pcVar7 = (char *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(char **)(param_1 + 8) = pcVar7;
  uVar8 = 1;
LAB_10143468c:
  *param_1 = uVar8;
  return;
}

