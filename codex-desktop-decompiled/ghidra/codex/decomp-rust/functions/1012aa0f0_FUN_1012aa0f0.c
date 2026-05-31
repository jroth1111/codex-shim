
/* WARNING: Removing unreachable block (ram,0x0001012aa624) */

void FUN_1012aa0f0(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined8 uStack_140;
  char *pcStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  int *piStack_118;
  int *piStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  long lStack_e9;
  undefined8 uStack_e0;
  int *piStack_d8;
  int *piStack_d0;
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
  char cStack_98;
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
        cStack_98 = (char)((ulong)*(undefined8 *)(uStack_140 + 1) >> 0x38);
        lStack_108 = *(long *)(uStack_140 + 0x18);
        piStack_110 = *(int **)(uStack_140 + 0x10);
        uStack_78 = *(undefined8 *)(uStack_140 + 0x28);
        uStack_80 = *(undefined8 *)(uStack_140 + 0x20);
        uStack_90 = SUB81(piStack_110,0);
        uStack_8f = (undefined7)((ulong)piStack_110 >> 8);
        lStack_68 = *(long *)(uStack_140 + 0x38);
        uStack_70 = *(undefined8 *)(uStack_140 + 0x30);
        cStack_a0 = cVar2;
        lStack_88 = lStack_108;
        if (lVar9 != 1) {
          pcStack_138 = uStack_140 + 0x80;
          piStack_d8 = *(int **)(uStack_140 + 0x48);
          uStack_e0 = *(undefined8 *)pcVar8;
          lStack_c8 = *(long *)(uStack_140 + 0x58);
          piStack_d0 = *(int **)(uStack_140 + 0x50);
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
            goto LAB_1012aa460;
          }
        }
        piStack_118 = (int *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        uVar10 = (char)uStack_80;
        uStack_100 = *(undefined8 *)(uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)(uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0x38);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0x30);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x30) >> 8);
        bVar11 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_1012aa1e4;
      }
    }
    uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
    uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 1;
LAB_1012aa460:
    FUN_100d34830(&uStack_140);
    return;
  }
  bVar11 = 0;
  piStack_118 = *(int **)(param_2 + 8);
  uStack_120 = *(undefined8 *)param_2;
  lStack_108 = *(long *)(param_2 + 0x18);
  piStack_110 = *(int **)(param_2 + 0x10);
  uVar10 = 0x16;
LAB_1012aa1e4:
  piVar6 = piStack_110;
  piVar5 = piStack_118;
  piStack_d8 = piStack_118;
  uStack_e0 = uStack_120;
  uVar7 = uStack_e0;
  lStack_c8 = lStack_108;
  piStack_d0 = piStack_110;
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
  uStack_e0 = uVar7;
  uStack_c0 = uVar10;
  if ((byte)uStack_e0 < 0xd) {
    if ((byte)uStack_e0 == 1) {
      uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
      if (uStack_e0._1_1_ != '\0') {
        if (uStack_e0._1_1_ != '\x01') {
          cStack_98 = uStack_e0._1_1_;
          uStack_97 = 0;
          cStack_a0 = '\x01';
          pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_1012aa35c;
        }
LAB_1012aa400:
        uStack_140 = (char *)CONCAT62(uStack_140._2_6_,0x100);
        goto LAB_1012aa54c;
      }
LAB_1012aa544:
      uVar10 = 0;
      uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
LAB_1012aa548:
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar10);
      goto LAB_1012aa54c;
    }
    if ((byte)uStack_e0 == 4) {
      if (piStack_118 != (int *)0x0) {
        if (piStack_118 == (int *)0x1) goto LAB_1012aa400;
        cStack_98 = (char)piStack_118;
        uStack_97 = (undefined7)((ulong)piStack_118 >> 8);
        cStack_a0 = '\x01';
        pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
        goto LAB_1012aa35c;
      }
      goto LAB_1012aa544;
    }
    if ((byte)uStack_e0 == 0xc) {
      if (lStack_108 == 4) {
        if (*piStack_110 != 0x636e7973) goto LAB_1012aa250;
        uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
      }
      else if ((lStack_108 == 5) && (*piStack_110 == 0x6e797361 && (char)piStack_110[1] == 'c')) {
        uStack_140 = (char *)CONCAT62(uStack_140._2_6_,0x100);
      }
      else {
LAB_1012aa250:
        pcStack_138 = (char *)FUN_1087e4494(piStack_110,lStack_108,&UNK_10b222738,2);
        uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
      }
joined_r0x0001012aa3d0:
      if (piVar5 == (int *)0x0) goto LAB_1012aa554;
      _free(piVar6);
      pcVar8 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
      goto joined_r0x0001012aa490;
    }
LAB_1012aa5f8:
    pcStack_138 = (char *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b212820);
    uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
    lVar9 = lStack_88;
LAB_1012aa560:
    lStack_88 = lVar9;
    pcVar8 = pcStack_138;
    if ((char)uStack_80 != '\x16') {
      FUN_100e077ec(&uStack_80);
    }
  }
  else {
    if ((byte)uStack_e0 == 0xd) {
      if (piStack_110 == (int *)0x4) {
        if (*piStack_118 == 0x636e7973) goto LAB_1012aa544;
      }
      else if ((piStack_110 == (int *)0x5) &&
              (*piStack_118 == 0x6e797361 && (char)piStack_118[1] == 'c')) goto LAB_1012aa400;
      pcStack_138 = (char *)FUN_1087e4494(piStack_118,piStack_110,&UNK_10b222738,2);
LAB_1012aa35c:
      uVar10 = 1;
      goto LAB_1012aa548;
    }
    if ((byte)uStack_e0 == 0xe) {
      func_0x000100b21540(&uStack_140,piStack_110,lStack_108);
      goto joined_r0x0001012aa3d0;
    }
    if ((byte)uStack_e0 != 0xf) goto LAB_1012aa5f8;
    func_0x000100b21540(&uStack_140,piStack_118,piStack_110);
LAB_1012aa54c:
    FUN_100e077ec(&uStack_e0);
LAB_1012aa554:
    pcVar8 = uStack_140;
    lVar9 = lStack_88;
    lStack_88 = lStack_68;
joined_r0x0001012aa490:
    bVar4 = (char)uStack_140 == '\x01';
    uStack_140 = pcVar8;
    lStack_68 = lStack_88;
    if (bVar4) goto LAB_1012aa560;
    uStack_140._1_1_ = (char)((ulong)pcVar8 >> 8);
    uStack_90 = (undefined1)uStack_70;
    uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
    cStack_98 = (char)uStack_78;
    uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
    cStack_a0 = (char)uStack_80;
    uStack_9f = (undefined7)((ulong)uStack_80 >> 8);
    uVar1 = (uint)uStack_80 & 0xff;
    if (uStack_140._1_1_ != '\x01') {
      if (uVar1 == 0x16) {
        uVar10 = 0;
      }
      else {
        if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
          pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_1012aa578;
        }
        uVar10 = 0;
LAB_1012aa518:
        FUN_100e077ec(&cStack_a0);
      }
LAB_1012aa520:
      param_1[1] = uVar10;
      *param_1 = 0;
      bVar4 = (bool)(bVar11 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1012aa594;
    }
    if (uVar1 == 0x16) {
      uVar10 = 1;
      goto LAB_1012aa520;
    }
    if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) {
      uVar10 = 1;
      goto LAB_1012aa518;
    }
    pcVar8 = (char *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
  }
LAB_1012aa578:
  *(char **)(param_1 + 8) = pcVar8;
  *param_1 = 1;
  bVar4 = (bool)(bVar11 ^ 1);
  if (cVar3 == '\x15') {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
LAB_1012aa594:
  FUN_100e077ec(param_2);
  return;
}

