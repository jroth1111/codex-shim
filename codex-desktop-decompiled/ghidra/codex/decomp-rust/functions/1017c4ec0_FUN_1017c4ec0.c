
/* WARNING: Removing unreachable block (ram,0x0001017c5510) */

void FUN_1017c4ec0(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
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
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  long lStack_e9;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
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
      func_0x0001088804d4(&uStack_e0,param_2);
      uVar7 = func_0x000108a4a50c(&uStack_e0,&UNK_10b258960,&UNK_10b258940);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *param_1 = 1;
      func_0x0001017a6a48(param_2);
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
        cStack_98 = (char)((ulong)*(undefined8 *)(uStack_140 + 1) >> 0x38);
        lStack_108 = *(long *)(uStack_140 + 0x18);
        plStack_110 = *(long **)(uStack_140 + 0x10);
        uStack_78 = *(undefined8 *)(uStack_140 + 0x28);
        uStack_80 = *(undefined8 *)(uStack_140 + 0x20);
        uStack_90 = SUB81(plStack_110,0);
        uStack_8f = (undefined7)((ulong)plStack_110 >> 8);
        lStack_68 = *(long *)(uStack_140 + 0x38);
        uStack_70 = *(undefined8 *)(uStack_140 + 0x30);
        cStack_a0 = cVar2;
        lStack_88 = lStack_108;
        if (lVar10 != 1) {
          pcStack_138 = uStack_140 + 0x80;
          plStack_d8 = *(long **)(uStack_140 + 0x48);
          uStack_e0 = *(undefined8 *)pcVar9;
          lStack_c8 = *(long *)(uStack_140 + 0x58);
          plStack_d0 = *(long **)(uStack_140 + 0x50);
          lStack_a8 = *(long *)(uStack_140 + 0x78);
          uStack_b8 = (undefined1)*(undefined8 *)(uStack_140 + 0x68);
          uStack_b7 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x68) >> 8);
          uStack_c0 = (undefined1)*(undefined8 *)(uStack_140 + 0x60);
          uStack_bf = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x60) >> 8);
          uStack_b0 = (undefined1)*(undefined8 *)(uStack_140 + 0x70);
          uStack_af = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x70) >> 8);
          if ((byte)uStack_e0 != '\x16') {
            func_0x0001017a6a48(&uStack_e0);
            func_0x0001017a6a48(&uStack_c0);
            uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
            uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&uStack_e0,&UNK_10b258930,&UNK_10b258940);
            *(undefined8 *)(param_1 + 8) = uVar7;
            *param_1 = 1;
            func_0x0001017a6a48(&uStack_80);
            func_0x0001017a6a48(&cStack_a0);
            goto LAB_1017c51f8;
          }
        }
        plStack_118 = (long *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        uVar11 = (char)uStack_80;
        uStack_100 = *(undefined8 *)(uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)(uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0x38);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0x30);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x30) >> 8);
        bVar12 = 1;
        FUN_1017a1d58(&uStack_140);
        goto LAB_1017c4fb4;
      }
    }
    uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
    uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_e0,&UNK_10b258930,&UNK_10b258940);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 1;
LAB_1017c51f8:
    FUN_1017a1d58(&uStack_140);
    return;
  }
  bVar12 = 0;
  plStack_118 = *(long **)(param_2 + 8);
  uStack_120 = *(undefined8 *)param_2;
  lStack_108 = *(long *)(param_2 + 0x18);
  plStack_110 = *(long **)(param_2 + 0x10);
  uVar11 = 0x16;
LAB_1017c4fb4:
  plVar6 = plStack_110;
  plVar5 = plStack_118;
  plStack_d8 = plStack_118;
  uStack_e0 = uStack_120;
  uVar7 = uStack_e0;
  lStack_c8 = lStack_108;
  plStack_d0 = plStack_110;
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
  uStack_e0 = uVar7;
  uStack_c0 = uVar11;
  if ((byte)uStack_e0 < 0xd) {
    if ((byte)uStack_e0 == 1) {
      uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
      if (uStack_e0._1_1_ != '\0') {
        if (uStack_e0._1_1_ == '\x01') {
LAB_1017c516c:
          uVar11 = 1;
        }
        else {
          if (uStack_e0._1_1_ != '\x02') {
            cStack_98 = uStack_e0._1_1_;
            uStack_97 = 0;
            cStack_a0 = '\x01';
            pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&cStack_a0,&UNK_10b259a30,&UNK_10b258940);
            goto LAB_1017c5290;
          }
LAB_1017c5314:
          uVar11 = 2;
        }
        uVar8 = 0;
        uStack_140 = (char *)((ulong)CONCAT61(uStack_140._2_6_,uVar11) << 8);
        goto LAB_1017c5434;
      }
LAB_1017c5430:
      uVar8 = 0;
      uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
LAB_1017c5434:
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar8);
      goto LAB_1017c5438;
    }
    if ((byte)uStack_e0 == 4) {
      if (plStack_118 != (long *)0x0) {
        if (plStack_118 == (long *)0x1) goto LAB_1017c516c;
        if (plStack_118 == (long *)0x2) goto LAB_1017c5314;
        cStack_98 = (char)plStack_118;
        uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
        cStack_a0 = '\x01';
        pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_a0,&UNK_10b259a30,&UNK_10b258940);
        goto LAB_1017c5290;
      }
      goto LAB_1017c5430;
    }
    if ((byte)uStack_e0 == 0xc) {
      if (lStack_108 == 9) {
        if (*plStack_110 != 0x6574656c706d6f63 || (char)plStack_110[1] != 'd') goto LAB_1017c5230;
        uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
      }
      else if (lStack_108 == 0xb) {
        if (*plStack_110 != 0x72676f72705f6e69 ||
            *(long *)((long)plStack_110 + 3) != 0x73736572676f7270) goto LAB_1017c5230;
        uStack_140 = (char *)CONCAT62(uStack_140._2_6_,0x100);
      }
      else if ((lStack_108 == 10) &&
              (*plStack_110 == 0x656c706d6f636e69 && (short)plStack_110[1] == 0x6574)) {
        uStack_140 = (char *)CONCAT62(uStack_140._2_6_,0x200);
      }
      else {
LAB_1017c5230:
        pcStack_138 = (char *)FUN_108878f8c(plStack_110,lStack_108,&UNK_10b259750,3);
        uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
      }
joined_r0x0001017c5330:
      if (plVar5 == (long *)0x0) goto LAB_1017c5440;
      _free(plVar6);
      pcVar9 = uStack_140;
      lVar10 = lStack_88;
      lStack_88 = lStack_68;
      goto joined_r0x0001017c5448;
    }
LAB_1017c54e4:
    pcStack_138 = (char *)FUN_10888066c(&uStack_e0,&uStack_51,&UNK_10b258ad0);
    uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
    lVar10 = lStack_88;
LAB_1017c544c:
    lStack_88 = lVar10;
    pcVar9 = pcStack_138;
    if ((char)uStack_80 != '\x16') {
      func_0x0001017a6a48(&uStack_80);
    }
  }
  else {
    if ((byte)uStack_e0 == 0xd) {
      if (plStack_110 == (long *)0x9) {
        if (*plStack_118 == 0x6574656c706d6f63 && (char)plStack_118[1] == 'd') goto LAB_1017c5430;
      }
      else if (plStack_110 == (long *)0xb) {
        if (*plStack_118 == 0x72676f72705f6e69 &&
            *(long *)((long)plStack_118 + 3) == 0x73736572676f7270) goto LAB_1017c516c;
      }
      else if ((plStack_110 == (long *)0xa) &&
              (*plStack_118 == 0x656c706d6f636e69 && (short)plStack_118[1] == 0x6574))
      goto LAB_1017c5314;
      pcStack_138 = (char *)FUN_108878f8c(plStack_118,plStack_110,&UNK_10b259750,3);
LAB_1017c5290:
      uVar8 = 1;
      goto LAB_1017c5434;
    }
    if ((byte)uStack_e0 == 0xe) {
      func_0x000101796320(&uStack_140,plStack_110,lStack_108);
      goto joined_r0x0001017c5330;
    }
    if ((byte)uStack_e0 != 0xf) goto LAB_1017c54e4;
    func_0x000101796320(&uStack_140,plStack_118,plStack_110);
LAB_1017c5438:
    func_0x0001017a6a48(&uStack_e0);
LAB_1017c5440:
    pcVar9 = uStack_140;
    lVar10 = lStack_88;
    lStack_88 = lStack_68;
joined_r0x0001017c5448:
    bVar4 = (char)uStack_140 == '\x01';
    uStack_140 = pcVar9;
    lStack_68 = lStack_88;
    if (bVar4) goto LAB_1017c544c;
    uStack_140._1_1_ = (char)((ulong)pcVar9 >> 8);
    cVar2 = uStack_140._1_1_;
    uStack_90 = (undefined1)uStack_70;
    uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
    cStack_98 = (char)uStack_78;
    uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
    cStack_a0 = (char)uStack_80;
    uStack_9f = (undefined7)((ulong)uStack_80 >> 8);
    uVar1 = (uint)uStack_80 & 0xff;
    if (uStack_140._1_1_ != '\0') {
      if (uStack_140._1_1_ == '\x01') {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            pcVar9 = (char *)FUN_10888066c(&cStack_a0,&uStack_51,&UNK_10b258970);
            goto LAB_1017c5464;
          }
LAB_1017c5404:
          func_0x0001017a6a48(&cStack_a0);
        }
      }
      else if (uVar1 != 0x16) {
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) goto LAB_1017c5404;
        pcVar9 = (char *)FUN_10888066c(&cStack_a0,&uStack_51,&UNK_10b258970);
        goto LAB_1017c5464;
      }
LAB_1017c540c:
      param_1[1] = cVar2;
      *param_1 = 0;
      bVar4 = (bool)(bVar12 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_1017c5480;
    }
    if (uVar1 == 0x16) goto LAB_1017c540c;
    if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) goto LAB_1017c5404;
    pcVar9 = (char *)FUN_10888066c(&cStack_a0,&uStack_51,&UNK_10b258970);
  }
LAB_1017c5464:
  *(char **)(param_1 + 8) = pcVar9;
  *param_1 = 1;
  bVar4 = (bool)(bVar12 ^ 1);
  if (cVar3 == '\x15') {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
LAB_1017c5480:
  func_0x0001017a6a48(param_2);
  return;
}

