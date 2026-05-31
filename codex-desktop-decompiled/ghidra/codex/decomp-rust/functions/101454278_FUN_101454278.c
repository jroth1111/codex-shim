
/* WARNING: Removing unreachable block (ram,0x0001014547e8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101454278(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
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
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_51;
  
  uVar12 = SUB81(&uStack_e0,0);
  cVar3 = *param_2;
  if ((cVar3 == '\f') || (cVar3 == '\r')) {
    bVar11 = 0;
    plStack_118 = *(long **)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    plStack_110 = *(long **)(param_2 + 0x10);
    plVar10 = (long *)0x16;
LAB_10145436c:
    plVar6 = plStack_110;
    plVar5 = plStack_118;
    plStack_d8 = plStack_118;
    uStack_e0 = uStack_120;
    uVar7 = uStack_e0;
    lStack_c8 = lStack_108;
    plStack_d0 = plStack_110;
    uStack_c0 = SUB81(plVar10,0);
    uStack_b7 = uStack_f8;
    uStack_bf = (undefined7)uStack_100;
    uStack_b8 = (undefined1)((ulong)uStack_100 >> 0x38);
    lStack_a8 = lStack_e9;
    uStack_b0 = uStack_f1;
    uStack_af = uStack_f0;
    lStack_78 = CONCAT71(uStack_f8,uStack_b8);
    uStack_80 = CONCAT71(uStack_bf,uStack_c0);
    lStack_70 = CONCAT71(uStack_f0,uStack_f1);
    lStack_68 = lStack_e9;
    uStack_e0._0_1_ = (byte)uStack_120;
    uStack_e0 = uVar7;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
        if (uStack_e0._1_1_ != '\0') {
          if (uStack_e0._1_1_ != '\x01') {
            cStack_98 = uStack_e0._1_1_;
            uStack_97 = 0;
            cStack_a0 = '\x01';
            plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
            goto LAB_1014544e4;
          }
LAB_1014545a0:
          uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x100);
          goto LAB_101454704;
        }
LAB_1014546fc:
        uVar8 = 0;
        uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
LAB_101454700:
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,uVar8);
        goto LAB_101454704;
      }
      if ((byte)uStack_e0 == 4) {
        if (plStack_118 != (long *)0x0) {
          if (plStack_118 == (long *)0x1) goto LAB_1014545a0;
          cStack_98 = (char)plStack_118;
          uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
          cStack_a0 = '\x01';
          plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_1014544e4;
        }
        goto LAB_1014546fc;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 4) {
          if ((int)*plStack_110 == 0x6c6c7566) {
            uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
          }
          else {
LAB_1014543d8:
            plStack_138 = (long *)FUN_1087e4494(plStack_110,lStack_108,&UNK_10b231dc8,2);
            uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
          }
        }
        else {
          if ((lStack_108 != 0x10) ||
             (*plStack_110 != 0x646e41736c6f6f74 || plStack_110[1] != 0x796c6e4f68747541))
          goto LAB_1014543d8;
          uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x100);
        }
joined_r0x000101454614:
        plVar10 = plVar6;
        if (plVar5 == (long *)0x0) goto LAB_10145470c;
        _free(plVar6);
        plVar5 = uStack_140;
        lVar9 = lStack_88;
        lStack_88 = lStack_68;
        goto joined_r0x000101454628;
      }
LAB_1014547bc:
      plStack_138 = (long *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b212060);
      uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
      lVar9 = lStack_88;
LAB_101454718:
      lStack_88 = lVar9;
      plVar10 = plStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      uVar8 = bVar11 ^ 1;
      if (cVar3 == '\x15') {
        uVar8 = true;
      }
joined_r0x00010145482c:
      bVar4 = true;
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (plStack_110 == (long *)0x4) {
          if ((int)*plStack_118 == 0x6c6c7566) goto LAB_1014546fc;
        }
        else if ((plStack_110 == (long *)0x10) &&
                (*plStack_118 == 0x646e41736c6f6f74 && plStack_118[1] == 0x796c6e4f68747541))
        goto LAB_1014545a0;
        plStack_138 = (long *)FUN_1087e4494(plStack_118,plStack_110,&UNK_10b231dc8,2);
LAB_1014544e4:
        uVar8 = 1;
        goto LAB_101454700;
      }
      if ((byte)uStack_e0 == 0xe) {
        FUN_100baa0c8(&uStack_140,plStack_110,lStack_108);
        goto joined_r0x000101454614;
      }
      if ((byte)uStack_e0 != 0xf) goto LAB_1014547bc;
      FUN_100baa0c8(&uStack_140,plStack_118,plStack_110);
LAB_101454704:
      FUN_100e077ec(&uStack_e0);
LAB_10145470c:
      plVar5 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
joined_r0x000101454628:
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = plVar5;
      lStack_68 = lStack_88;
      if (bVar4) goto LAB_101454718;
      uStack_140._1_1_ = (char)((ulong)plVar5 >> 8);
      uStack_90 = (undefined1)lStack_70;
      uStack_8f = (undefined7)((ulong)lStack_70 >> 8);
      cStack_98 = (char)lStack_78;
      uStack_97 = (undefined7)((ulong)lStack_78 >> 8);
      cStack_a0 = (char)uStack_80;
      uStack_9f = (undefined7)(uStack_80 >> 8);
      uVar1 = (uint)uStack_80 & 0xff;
      if (uStack_140._1_1_ == '\x01') {
        if (uVar1 == 0x16) {
          bVar4 = false;
          uVar12 = 1;
          uVar8 = bVar11 ^ 1;
          if (cVar3 == '\x15') {
            uVar8 = true;
          }
          goto joined_r0x000101454694;
        }
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) {
          uVar12 = 1;
          goto LAB_1014546d8;
        }
        plVar10 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_101454818:
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
        goto joined_r0x00010145482c;
      }
      if (uVar1 == 0x16) {
        uVar12 = 0;
        bVar4 = false;
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
      }
      else {
        if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
          plVar10 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_101454818;
        }
        uVar12 = 0;
LAB_1014546d8:
        FUN_100e077ec(&cStack_a0);
        bVar4 = false;
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
      }
    }
joined_r0x000101454694:
    if (!(bool)uVar8) {
      FUN_100e077ec(param_2);
    }
    if (!bVar4) {
      uVar8 = 0;
      param_1[1] = uVar12;
      goto LAB_101454764;
    }
  }
  else if (cVar3 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(long **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    plStack_128 = uStack_140 + lVar9 * 8;
    plStack_138 = uStack_140;
    if (lVar9 == 0) {
LAB_1014544f0:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar10 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      plVar10 = uStack_140 + 8;
      cVar2 = (char)*uStack_140;
      plStack_138 = plVar10;
      if (cVar2 == '\x16') goto LAB_1014544f0;
      uStack_97 = (undefined7)*(undefined8 *)((long)uStack_140 + 9);
      uStack_9f = (undefined7)*(undefined8 *)((long)uStack_140 + 1);
      cStack_98 = (char)((ulong)*(undefined8 *)((long)uStack_140 + 1) >> 0x38);
      lStack_108 = uStack_140[3];
      plStack_110 = (long *)uStack_140[2];
      lStack_78 = uStack_140[5];
      uStack_80 = uStack_140[4];
      uStack_90 = SUB81(plStack_110,0);
      uStack_8f = (undefined7)((ulong)plStack_110 >> 8);
      lStack_68 = uStack_140[7];
      lStack_70 = uStack_140[6];
      cStack_a0 = cVar2;
      lStack_88 = lStack_108;
      if (lVar9 == 1) {
LAB_101454330:
        plStack_118 = (long *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        plVar10 = (long *)(uStack_80 & 0xff);
        uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
        lStack_e9 = uStack_140[7];
        uStack_f1 = (undefined1)uStack_140[6];
        uStack_f0 = (undefined7)((ulong)uStack_140[6] >> 8);
        bVar11 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_10145436c;
      }
      plStack_138 = uStack_140 + 0x10;
      plStack_d8 = (long *)uStack_140[9];
      uStack_e0 = *plVar10;
      lStack_c8 = uStack_140[0xb];
      plStack_d0 = (long *)uStack_140[10];
      lStack_a8 = uStack_140[0xf];
      uStack_b8 = (undefined1)uStack_140[0xd];
      uStack_b7 = (undefined7)((ulong)uStack_140[0xd] >> 8);
      uStack_c0 = (undefined1)uStack_140[0xc];
      uStack_bf = (undefined7)((ulong)uStack_140[0xc] >> 8);
      uStack_b0 = (undefined1)uStack_140[0xe];
      uStack_af = (undefined7)((ulong)uStack_140[0xe] >> 8);
      if ((byte)uStack_e0 == '\x16') goto LAB_101454330;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar10 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    plVar10 = (long *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(long **)(param_1 + 8) = plVar10;
  uVar8 = 1;
LAB_101454764:
  *param_1 = uVar8;
  return;
}

