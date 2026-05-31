
/* WARNING: Removing unreachable block (ram,0x0001012af9f8) */

void FUN_1012af378(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  byte bVar11;
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
      uVar6 = func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
      *param_1 = 7;
      param_1[1] = uVar6;
      FUN_100e077ec(param_2);
      return;
    }
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(char **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    pcStack_128 = uStack_140 + lVar9 * 0x40;
    pcStack_138 = uStack_140;
    if (lVar9 != 0) {
      pcVar8 = uStack_140 + 0x40;
      cVar2 = *uStack_140;
      pcStack_138 = pcVar8;
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
        if (lVar9 != 1) {
          pcStack_138 = uStack_140 + 0x80;
          lStack_d8 = *(long *)(uStack_140 + 0x48);
          uStack_e0 = *(undefined8 *)pcVar8;
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
            uVar6 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
            *param_1 = 7;
            param_1[1] = uVar6;
            FUN_100e077ec(&uStack_80);
            FUN_100e077ec(&cStack_a0);
            goto LAB_1012af868;
          }
        }
        lStack_118 = CONCAT71(uStack_97,bStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        uVar10 = (char)uStack_80;
        uStack_100 = *(undefined8 *)(uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)(uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0x38);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0x30);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x30) >> 8);
        bVar11 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_1012af46c;
      }
    }
    uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
    uVar6 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    *param_1 = 7;
    param_1[1] = uVar6;
LAB_1012af868:
    FUN_100d34830(&uStack_140);
    return;
  }
  bVar11 = 0;
  lStack_118 = *(long *)(param_2 + 8);
  uStack_120 = *(undefined8 *)param_2;
  lStack_108 = *(long *)(param_2 + 0x18);
  uStack_110 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = 0x16;
LAB_1012af46c:
  uVar6 = uStack_110;
  lVar9 = lStack_118;
  lStack_d8 = lStack_118;
  uStack_e0 = uStack_120;
  uVar5 = uStack_e0;
  lStack_c8 = lStack_108;
  uStack_d0 = uStack_110;
  uStack_b7 = uStack_f8;
  uStack_bf = (undefined7)uStack_100;
  uStack_b8 = (undefined1)((ulong)uStack_100 >> 0x38);
  lStack_a8 = lStack_e9;
  uStack_b0 = uStack_f1;
  uStack_af = uStack_f0;
  uStack_78 = CONCAT71(uStack_f8,uStack_b8);
  uStack_80 = CONCAT71(uStack_bf,uVar10);
  uStack_70 = CONCAT71(uStack_f0,uStack_f1);
  lStack_68 = lStack_e9;
  uStack_e0._0_1_ = (byte)uStack_120;
  uStack_e0 = uVar5;
  uStack_c0 = uVar10;
  if ((byte)uStack_e0 < 0xd) {
    if ((byte)uStack_e0 == 1) {
      uStack_e0._1_1_ = (byte)((ulong)uStack_120 >> 8);
      if (uStack_e0._1_1_ < 3) {
        if (uStack_e0._1_1_ == 0) {
LAB_1012af8cc:
          uVar10 = 0;
          uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
          goto LAB_1012af8f8;
        }
        if (uStack_e0._1_1_ == 1) {
LAB_1012af8d4:
          uVar7 = 1;
        }
        else {
          if (uStack_e0._1_1_ != 2) goto LAB_1012afac0;
LAB_1012af810:
          uVar7 = 2;
        }
      }
      else if (uStack_e0._1_1_ < 5) {
        if (uStack_e0._1_1_ == 3) {
LAB_1012af8e0:
          uVar7 = 3;
        }
        else {
          if (uStack_e0._1_1_ != 4) {
LAB_1012afac0:
            bStack_98 = uStack_e0._1_1_;
            uStack_97 = 0;
            cStack_a0 = '\x01';
            pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&cStack_a0,&UNK_10b22d540,&UNK_10b20a590);
            goto LAB_1012afae4;
          }
LAB_1012af644:
          uVar7 = 4;
        }
      }
      else if (uStack_e0._1_1_ == 5) {
LAB_1012af8ec:
        uVar7 = 5;
      }
      else {
        if (uStack_e0._1_1_ != 6) goto LAB_1012afac0;
LAB_1012af8c0:
        uVar7 = 6;
      }
      uVar10 = 0;
      uStack_140 = (char *)((ulong)CONCAT61(uStack_140._2_6_,uVar7) << 8);
LAB_1012af8f8:
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar10);
      goto LAB_1012af8fc;
    }
    if ((byte)uStack_e0 == 4) {
      if (lStack_118 < 3) {
        if (lStack_118 == 0) goto LAB_1012af8cc;
        if (lStack_118 == 1) goto LAB_1012af8d4;
        if (lStack_118 == 2) goto LAB_1012af810;
      }
      else if (lStack_118 < 5) {
        if (lStack_118 == 3) goto LAB_1012af8e0;
        if (lStack_118 == 4) goto LAB_1012af644;
      }
      else {
        if (lStack_118 == 5) goto LAB_1012af8ec;
        if (lStack_118 == 6) goto LAB_1012af8c0;
      }
      bStack_98 = (byte)lStack_118;
      uStack_97 = (undefined7)((ulong)lStack_118 >> 8);
      cStack_a0 = '\x01';
      pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                      (&cStack_a0,&UNK_10b22d540,&UNK_10b20a590);
LAB_1012afae4:
      uVar10 = 1;
      goto LAB_1012af8f8;
    }
    if ((byte)uStack_e0 == 0xc) {
      func_0x000100adb274(&uStack_140,uStack_110,lStack_108);
      goto LAB_1012af530;
    }
LAB_1012af9cc:
    pcStack_138 = (char *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b210c20);
    uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
    lVar9 = lStack_88;
LAB_1012af910:
    lStack_88 = lVar9;
    pcVar8 = pcStack_138;
    if ((char)uStack_80 != '\x16') {
      FUN_100e077ec(&uStack_80);
    }
  }
  else {
    if ((byte)uStack_e0 == 0xd) {
      func_0x000100adb274(&uStack_140,lStack_118,uStack_110);
LAB_1012af8fc:
      FUN_100e077ec(&uStack_e0);
LAB_1012af904:
      pcVar8 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
    }
    else {
      if ((byte)uStack_e0 != 0xe) {
        if ((byte)uStack_e0 != 0xf) goto LAB_1012af9cc;
        func_0x000100adae8c(&uStack_140,lStack_118,uStack_110);
        goto LAB_1012af8fc;
      }
      func_0x000100adae8c(&uStack_140,uStack_110,lStack_108);
LAB_1012af530:
      if (lVar9 == 0) goto LAB_1012af904;
      _free(uVar6);
      pcVar8 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
    }
    bVar4 = (char)uStack_140 == '\x01';
    uStack_140 = pcVar8;
    lStack_68 = lStack_88;
    if (bVar4) goto LAB_1012af910;
    uStack_140._1_1_ = (byte)((ulong)pcVar8 >> 8);
    uStack_90 = (undefined1)uStack_70;
    uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
    bStack_98 = (byte)uStack_78;
    uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
    cStack_a0 = (char)uStack_80;
    uStack_9f = (undefined7)((ulong)uStack_80 >> 8);
    uVar1 = (uint)uStack_80 & 0xff;
    if (uStack_140._1_1_ < 3) {
      if (uStack_140._1_1_ == 0) {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_1012af928;
          }
          FUN_100e077ec(&cStack_a0);
        }
        *param_1 = 0;
        bVar4 = (bool)(bVar11 ^ 1);
        if (cVar3 == '\x15') {
          bVar4 = true;
        }
        if (bVar4) {
          return;
        }
        goto LAB_1012af940;
      }
      if (uStack_140._1_1_ != 1) {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_1012af928;
          }
          FUN_100e077ec(&cStack_a0);
        }
        *param_1 = 2;
        bVar4 = (bool)(bVar11 ^ 1);
        if (cVar3 == '\x15') {
          bVar4 = true;
        }
        if (bVar4) {
          return;
        }
        goto LAB_1012af940;
      }
      if (uVar1 != 0x16) {
        if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
          pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_1012af928;
        }
        FUN_100e077ec(&cStack_a0);
      }
      *param_1 = 1;
      bVar4 = (bool)(bVar11 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1012af940;
    }
    if (uStack_140._1_1_ < 5) {
      if (uStack_140._1_1_ == 3) {
        if (uVar1 == 0x16) {
          uStack_80 = CONCAT71(uStack_9f,0xd);
          pcVar8 = (char *)func_0x000108a4a50c(&uStack_80,&UNK_10b212c10,&UNK_10b20a590);
        }
        else {
          FUN_1004b60cc(&uStack_140,&cStack_a0);
          pcVar8 = pcStack_138;
          if (uStack_140 != (char *)0x8000000000000001) {
            param_1[2] = pcStack_138;
            param_1[1] = uStack_140;
            param_1[3] = uStack_130;
            *param_1 = 3;
            bVar4 = (bool)(bVar11 ^ 1);
            if (cVar3 == '\x15') {
              bVar4 = true;
            }
            if (bVar4) {
              return;
            }
            goto LAB_1012af940;
          }
        }
      }
      else if (uVar1 == 0x16) {
        uStack_80 = CONCAT71(uStack_9f,0xd);
        pcVar8 = (char *)func_0x000108a4a50c(&uStack_80,&UNK_10b212c10,&UNK_10b20a590);
      }
      else {
        FUN_1004b62d4(&uStack_140,&cStack_a0);
        pcVar8 = pcStack_138;
        if (uStack_140 != (char *)0x8000000000000000) {
          param_1[2] = pcStack_138;
          param_1[1] = uStack_140;
          param_1[3] = uStack_130;
          *param_1 = 4;
          bVar4 = (bool)(bVar11 ^ 1);
          if (cVar3 == '\x15') {
            bVar4 = true;
          }
          if (bVar4) {
            return;
          }
          goto LAB_1012af940;
        }
      }
      *param_1 = 7;
      param_1[1] = pcVar8;
      bVar4 = (bool)(bVar11 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1012af940;
    }
    if (uStack_140._1_1_ != 5) {
      if (uVar1 != 0x16) {
        if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
          pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_1012af928;
        }
        FUN_100e077ec(&cStack_a0);
      }
      *param_1 = 6;
      bVar4 = (bool)(bVar11 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1012af940;
    }
    if (uVar1 == 0x16) {
LAB_1012af6bc:
      *param_1 = 5;
      bVar4 = (bool)(bVar11 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1012af940;
    }
    if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) {
      FUN_100e077ec(&cStack_a0);
      goto LAB_1012af6bc;
    }
    pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
  }
LAB_1012af928:
  *param_1 = 7;
  param_1[1] = pcVar8;
  bVar4 = (bool)(bVar11 ^ 1);
  if (cVar3 == '\x15') {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
LAB_1012af940:
  FUN_100e077ec(param_2);
  return;
}

