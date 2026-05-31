
/* WARNING: Removing unreachable block (ram,0x000101454f0c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1014548f8(undefined1 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
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
  char cStack_c0;
  undefined7 uStack_bf;
  char cStack_b8;
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
  cVar2 = *param_2;
  if ((cVar2 == '\f') || (cVar2 == '\r')) {
    bVar11 = 0;
    plStack_118 = *(long **)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    plStack_110 = *(long **)(param_2 + 0x10);
    plVar10 = (long *)0x16;
LAB_1014549ec:
    plVar7 = plStack_110;
    plVar5 = plStack_118;
    plStack_d8 = plStack_118;
    uStack_e0 = uStack_120;
    uVar6 = uStack_e0;
    lStack_c8 = lStack_108;
    plStack_d0 = plStack_110;
    cStack_c0 = (char)plVar10;
    uStack_b7 = uStack_f8;
    uStack_bf = (undefined7)uStack_100;
    cStack_b8 = (char)((ulong)uStack_100 >> 0x38);
    lStack_a8 = lStack_e9;
    uStack_b0 = uStack_f1;
    uStack_af = uStack_f0;
    lStack_78 = CONCAT71(uStack_f8,cStack_b8);
    uStack_80 = CONCAT71(uStack_bf,cStack_c0);
    lStack_70 = CONCAT71(uStack_f0,uStack_f1);
    lStack_68 = lStack_e9;
    uStack_e0._0_1_ = (byte)uStack_120;
    uStack_e0 = uVar6;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
        if (uStack_e0._1_1_ != '\0') {
          if (uStack_e0._1_1_ == '\x01') goto LAB_101454d14;
          cStack_98 = uStack_e0._1_1_;
          uStack_97 = 0;
          cStack_a0 = '\x01';
          plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_101454c64;
        }
LAB_101454e1c:
        uVar8 = 0;
        uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
LAB_101454e20:
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,uVar8);
        goto LAB_101454e24;
      }
      if ((byte)uStack_e0 == 4) {
        if (plStack_118 == (long *)0x0) goto LAB_101454e1c;
        if (plStack_118 == (long *)0x1) goto LAB_101454d14;
        cStack_98 = (char)plStack_118;
        uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
        cStack_a0 = '\x01';
        plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
LAB_101454c64:
        uVar8 = 1;
        goto LAB_101454e20;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 4) {
          if ((int)*plStack_110 == 0x72657375) {
            uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
            goto joined_r0x000101454d34;
          }
        }
        else if (lStack_108 == 0xb) {
          if (*plStack_110 == 0x7665725f6f747561 &&
              *(long *)((long)plStack_110 + 3) == 0x7765697665725f6f) {
LAB_101454cb4:
            uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x100);
            goto joined_r0x000101454d34;
          }
        }
        else if ((lStack_108 == 0x11) &&
                ((*plStack_110 == 0x6e61696472617567 && plStack_110[1] == 0x6e6567616275735f) &&
                 (char)plStack_110[2] == 't')) goto LAB_101454cb4;
        plStack_138 = (long *)FUN_1087e4494(plStack_110,lStack_108,&UNK_10b2222c8,3);
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
        plVar5 = plStack_d8;
        goto joined_r0x000101454d34;
      }
LAB_101454ee0:
      plStack_138 = (long *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b20e700);
      uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
LAB_101454e38:
      plVar7 = plStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&cStack_c0);
      }
      bVar3 = true;
      bVar4 = (bool)(bVar11 ^ 1);
      if (cVar2 == '\x15') {
        bVar4 = true;
      }
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (plStack_110 == (long *)0x4) {
          if ((int)*plStack_118 == 0x72657375) goto LAB_101454e1c;
LAB_101454c54:
          plStack_138 = (long *)FUN_1087e4494(plStack_118,plStack_110,&UNK_10b2222c8,3);
          goto LAB_101454c64;
        }
        if (plStack_110 == (long *)0xb) {
          if (*plStack_118 != 0x7665725f6f747561 ||
              *(long *)((long)plStack_118 + 3) != 0x7765697665725f6f) goto LAB_101454c54;
        }
        else if ((plStack_110 != (long *)0x11) ||
                ((*plStack_118 != 0x6e61696472617567 || plStack_118[1] != 0x6e6567616275735f) ||
                 (char)plStack_118[2] != 't')) goto LAB_101454c54;
LAB_101454d14:
        uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x100);
LAB_101454e24:
        FUN_100e077ec(&uStack_e0);
LAB_101454e2c:
        plVar7 = plVar10;
        plVar10 = uStack_140;
      }
      else {
        if ((byte)uStack_e0 != 0xe) {
          if ((byte)uStack_e0 != 0xf) goto LAB_101454ee0;
          FUN_100b3ddfc(&uStack_140,plStack_118,plStack_110);
          goto LAB_101454e24;
        }
        FUN_100b3ddfc(&uStack_140,plStack_110,lStack_108);
joined_r0x000101454d34:
        plVar10 = plVar7;
        if (plVar5 == (long *)0x0) goto LAB_101454e2c;
        _free(plVar7);
        plVar10 = uStack_140;
      }
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = plVar10;
      if (bVar4) goto LAB_101454e38;
      uStack_140._1_1_ = (char)((ulong)plVar10 >> 8);
      cStack_a0 = cStack_c0;
      uStack_9f = uStack_bf;
      cStack_98 = cStack_b8;
      uStack_97 = uStack_b7;
      uStack_90 = uStack_b0;
      uStack_8f = uStack_af;
      lStack_88 = lStack_a8;
      if (uStack_140._1_1_ == '\x01') {
        if (cStack_c0 == '\x16') {
          uVar12 = 1;
          bVar4 = (bool)(bVar11 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
joined_r0x000101454e10:
          bVar3 = false;
          uStack_140 = plVar10;
        }
        else {
          if ((cStack_c0 == '\x12') || ((cStack_c0 == '\x15' && (lStack_a8 == 0)))) {
            uVar12 = 1;
            goto LAB_101454df8;
          }
          plVar7 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_101454f3c:
          bVar3 = true;
          bVar4 = (bool)(bVar11 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
        }
      }
      else {
        if (cStack_c0 != '\x16') {
          if ((cStack_c0 != '\x12') && ((cStack_c0 != '\x15' || (lStack_a8 != 0)))) {
            plVar7 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_101454f3c;
          }
          uVar12 = 0;
LAB_101454df8:
          FUN_100e077ec(&cStack_a0);
          bVar4 = (bool)(bVar11 ^ 1);
          plVar10 = uStack_140;
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
          goto joined_r0x000101454e10;
        }
        uVar12 = 0;
        bVar3 = false;
        bVar4 = (bool)(bVar11 ^ 1);
        if (cVar2 == '\x15') {
          bVar4 = true;
        }
      }
    }
    if (!bVar4) {
      FUN_100e077ec(param_2);
    }
    if (!bVar3) {
      uVar8 = 0;
      param_1[1] = uVar12;
      goto LAB_101454e88;
    }
  }
  else if (cVar2 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(long **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    plStack_128 = uStack_140 + lVar9 * 8;
    plStack_138 = uStack_140;
    if (lVar9 == 0) {
LAB_101454b80:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar7 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      plVar10 = uStack_140 + 8;
      cVar1 = (char)*uStack_140;
      plStack_138 = plVar10;
      if (cVar1 == '\x16') goto LAB_101454b80;
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
      cStack_a0 = cVar1;
      lStack_88 = lStack_108;
      if (lVar9 == 1) {
LAB_1014549b0:
        plStack_118 = (long *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar1);
        plVar10 = (long *)(uStack_80 & 0xff);
        uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
        lStack_e9 = uStack_140[7];
        uStack_f1 = (undefined1)uStack_140[6];
        uStack_f0 = (undefined7)((ulong)uStack_140[6] >> 8);
        bVar11 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_1014549ec;
      }
      plStack_138 = uStack_140 + 0x10;
      plStack_d8 = (long *)uStack_140[9];
      uStack_e0 = *plVar10;
      lStack_c8 = uStack_140[0xb];
      plStack_d0 = (long *)uStack_140[10];
      lStack_a8 = uStack_140[0xf];
      cStack_b8 = (char)uStack_140[0xd];
      uStack_b7 = (undefined7)((ulong)uStack_140[0xd] >> 8);
      cStack_c0 = (char)uStack_140[0xc];
      uStack_bf = (undefined7)((ulong)uStack_140[0xc] >> 8);
      uStack_b0 = (undefined1)uStack_140[0xe];
      uStack_af = (undefined7)((ulong)uStack_140[0xe] >> 8);
      if ((byte)uStack_e0 == '\x16') goto LAB_1014549b0;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&cStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar7 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    plVar7 = (long *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(long **)(param_1 + 8) = plVar7;
  uVar8 = 1;
LAB_101454e88:
  *param_1 = uVar8;
  return;
}

