
/* WARNING: Removing unreachable block (ram,0x0001012ce0f8) */

void FUN_1012cdc0c(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  long lVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined8 uStack_140;
  char *pcStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  long lStack_e9;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_51;
  
  cVar3 = *param_2;
  if ((cVar3 != '\f') && (cVar3 != '\r')) {
    if (cVar3 != '\x15') {
      FUN_1088556a8(&uStack_e0,param_2);
      uVar7 = func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *param_1 = 1;
      FUN_100e077ec(param_2);
      return;
    }
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(char **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18);
    pcStack_128 = uStack_140 + lVar10 * 0x40;
    pcStack_138 = uStack_140;
    if (lVar10 != 0) {
      pcVar9 = uStack_140 + 0x40;
      cVar2 = *uStack_140;
      pcStack_138 = pcVar9;
      if (cVar2 != '\x16') {
        uStack_97 = (undefined7)*(undefined8 *)(uStack_140 + 9);
        uStack_9f = (undefined7)*(undefined8 *)(uStack_140 + 1);
        bStack_98 = (byte)((ulong)*(undefined8 *)(uStack_140 + 1) >> 0x38);
        lStack_108 = *(long *)(uStack_140 + 0x18);
        uStack_110 = *(undefined8 *)(uStack_140 + 0x10);
        uStack_78 = *(undefined8 *)(uStack_140 + 0x28);
        uStack_80 = *(undefined8 *)(uStack_140 + 0x20);
        uStack_90 = (undefined1)uStack_110;
        uStack_8f = (undefined7)((ulong)uStack_110 >> 8);
        lStack_68 = *(long *)(uStack_140 + 0x38);
        uStack_70 = *(undefined8 *)(uStack_140 + 0x30);
        cStack_a0 = cVar2;
        lStack_88 = lStack_108;
        if (lVar10 != 1) {
          pcStack_138 = uStack_140 + 0x80;
          lStack_d8 = *(long *)(uStack_140 + 0x48);
          uStack_e0 = *(undefined8 *)pcVar9;
          lStack_c8 = *(long *)(uStack_140 + 0x58);
          uStack_d0 = *(undefined8 *)(uStack_140 + 0x50);
          lStack_a8 = *(long *)(uStack_140 + 0x78);
          uStack_b8 = (undefined1)*(undefined8 *)(uStack_140 + 0x68);
          uStack_b7 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x68) >> 8);
          uStack_c0 = (undefined1)*(undefined8 *)(uStack_140 + 0x60);
          uStack_bf = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x60) >> 8);
          uStack_b0 = (undefined1)*(undefined8 *)(uStack_140 + 0x70);
          uStack_af = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x70) >> 8);
          if ((byte)uStack_e0 != '\x16') {
            FUN_100e077ec(&uStack_e0);
            FUN_100e077ec(&uStack_c0);
            uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
            uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
            *(undefined8 *)(param_1 + 8) = uVar7;
            *param_1 = 1;
            FUN_100e077ec(&uStack_80);
            FUN_100e077ec(&cStack_a0);
            goto LAB_1012ce064;
          }
        }
        lStack_118 = CONCAT71(uStack_97,bStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        uVar11 = (char)uStack_80;
        uStack_100 = *(undefined8 *)(uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)(uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0x38);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0x30);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x30) >> 8);
        bVar12 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_1012cdd00;
      }
    }
    uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
    uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 1;
LAB_1012ce064:
    FUN_100d34830(&uStack_140);
    return;
  }
  bVar12 = 0;
  lStack_118 = *(long *)(param_2 + 8);
  uStack_120 = *(undefined8 *)param_2;
  lStack_108 = *(long *)(param_2 + 0x18);
  uStack_110 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = 0x16;
LAB_1012cdd00:
  uVar7 = uStack_110;
  lVar10 = lStack_118;
  lStack_d8 = lStack_118;
  uStack_e0 = uStack_120;
  uVar6 = uStack_e0;
  lStack_c8 = lStack_108;
  uStack_d0 = uStack_110;
  uStack_b7 = uStack_f8;
  uStack_bf = (undefined7)uStack_100;
  uStack_b8 = (undefined1)((ulong)uStack_100 >> 0x38);
  lStack_a8 = lStack_e9;
  uStack_b0 = uStack_f1;
  uStack_af = uStack_f0;
  uStack_78 = CONCAT71(uStack_f8,uStack_b8);
  uStack_80 = CONCAT71(uStack_bf,uVar11);
  uStack_70 = CONCAT71(uStack_f0,uStack_f1);
  lStack_68 = lStack_e9;
  uStack_e0._0_1_ = (byte)uStack_120;
  uStack_e0 = uVar6;
  uStack_c0 = uVar11;
  if ((byte)uStack_e0 < 0xd) {
    if ((byte)uStack_e0 == 1) {
      uStack_e0._1_1_ = (byte)((ulong)uStack_120 >> 8);
      if (uStack_e0._1_1_ < 2) {
        if (uStack_e0._1_1_ == 0) {
LAB_1012cdfa8:
          uVar8 = 0;
          uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
          goto LAB_1012cdfbc;
        }
        if (uStack_e0._1_1_ != 1) {
LAB_1012ce118:
          bStack_98 = uStack_e0._1_1_;
          uStack_97 = 0;
          cStack_a0 = '\x01';
          pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b22b5e8,&UNK_10b20a590);
          goto LAB_1012ce13c;
        }
LAB_1012cde8c:
        uVar11 = 1;
      }
      else if (uStack_e0._1_1_ == 2) {
LAB_1012cdfb0:
        uVar11 = 2;
      }
      else {
        if (uStack_e0._1_1_ != 3) goto LAB_1012ce118;
LAB_1012cdf9c:
        uVar11 = 3;
      }
      uVar8 = 0;
      uStack_140 = (char *)((ulong)CONCAT61(uStack_140._2_6_,uVar11) << 8);
LAB_1012cdfbc:
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar8);
      goto LAB_1012cdfc0;
    }
    if ((byte)uStack_e0 == 4) {
      if (lStack_118 < 2) {
        if (lStack_118 == 0) goto LAB_1012cdfa8;
        if (lStack_118 == 1) goto LAB_1012cde8c;
      }
      else {
        if (lStack_118 == 2) goto LAB_1012cdfb0;
        if (lStack_118 == 3) goto LAB_1012cdf9c;
      }
      bStack_98 = (byte)lStack_118;
      uStack_97 = (undefined7)((ulong)lStack_118 >> 8);
      cStack_a0 = '\x01';
      pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                      (&cStack_a0,&UNK_10b22b5e8,&UNK_10b20a590);
LAB_1012ce13c:
      uVar8 = 1;
      goto LAB_1012cdfbc;
    }
    if ((byte)uStack_e0 == 0xc) {
      FUN_100b3db44(&uStack_140,uStack_110,lStack_108);
      goto LAB_1012cddb8;
    }
LAB_1012ce0cc:
    pcStack_138 = (char *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b20dac0);
    uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
    lVar10 = lStack_88;
LAB_1012cdfd4:
    lStack_88 = lVar10;
    pcVar9 = pcStack_138;
    if ((char)uStack_80 != '\x16') {
      FUN_100e077ec(&uStack_80);
    }
  }
  else {
    if ((byte)uStack_e0 == 0xd) {
      FUN_100b3db44(&uStack_140,lStack_118,uStack_110);
LAB_1012cdfc0:
      FUN_100e077ec(&uStack_e0);
LAB_1012cdfc8:
      pcVar9 = uStack_140;
      lVar10 = lStack_88;
      lStack_88 = lStack_68;
    }
    else {
      if ((byte)uStack_e0 != 0xe) {
        if ((byte)uStack_e0 != 0xf) goto LAB_1012ce0cc;
        FUN_100b3d830(&uStack_140,lStack_118,uStack_110);
        goto LAB_1012cdfc0;
      }
      FUN_100b3d830(&uStack_140,uStack_110,lStack_108);
LAB_1012cddb8:
      if (lVar10 == 0) goto LAB_1012cdfc8;
      _free(uVar7);
      pcVar9 = uStack_140;
      lVar10 = lStack_88;
      lStack_88 = lStack_68;
    }
    bVar4 = (char)uStack_140 == '\x01';
    uStack_140 = pcVar9;
    lStack_68 = lStack_88;
    if (bVar4) goto LAB_1012cdfd4;
    uStack_140._1_1_ = (byte)((ulong)pcVar9 >> 8);
    bVar5 = uStack_140._1_1_;
    uStack_90 = (undefined1)uStack_70;
    uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
    bStack_98 = (byte)uStack_78;
    uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
    cStack_a0 = (char)uStack_80;
    uStack_9f = (undefined7)((ulong)uStack_80 >> 8);
    uVar1 = (uint)uStack_80 & 0xff;
    if (1 < uStack_140._1_1_) {
      if (uStack_140._1_1_ == 2) {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar9 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_1012cdfec;
          }
LAB_1012cdf2c:
          FUN_100e077ec(&cStack_a0);
        }
      }
      else if (uVar1 != 0x16) {
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) goto LAB_1012cdf2c;
        pcVar9 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
        goto LAB_1012cdfec;
      }
LAB_1012cdf34:
      param_1[1] = bVar5;
      *param_1 = 0;
      bVar4 = (bool)(bVar12 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1012ce008;
    }
    if (uStack_140._1_1_ == 0) {
      if (uVar1 == 0x16) goto LAB_1012cdf34;
      if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) goto LAB_1012cdf2c;
      pcVar9 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
    }
    else {
      if (uVar1 == 0x16) goto LAB_1012cdf34;
      if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) goto LAB_1012cdf2c;
      pcVar9 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
    }
  }
LAB_1012cdfec:
  *(char **)(param_1 + 8) = pcVar9;
  *param_1 = 1;
  bVar4 = (bool)(bVar12 ^ 1);
  if (cVar3 == '\x15') {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
LAB_1012ce008:
  FUN_100e077ec(param_2);
  return;
}

