
/* WARNING: Type propagation algorithm not settling */

void FUN_10142c57c(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  char cVar13;
  long *unaff_x25;
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
  char cVar14;
  
  cVar13 = (char)unaff_x25;
  cVar3 = *param_2;
  if ((cVar3 == '\f') || (cVar3 == '\r')) {
    bVar12 = 0;
    plStack_118 = *(long **)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    plStack_110 = *(long **)(param_2 + 0x10);
    plVar11 = (long *)0x16;
LAB_10142c670:
    plVar6 = plStack_110;
    plVar5 = plStack_118;
    plStack_d8 = plStack_118;
    uStack_e0 = uStack_120;
    uVar7 = uStack_e0;
    lStack_c8 = lStack_108;
    plStack_d0 = plStack_110;
    uStack_c0 = SUB81(plVar11,0);
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
          if (uStack_e0._1_1_ == '\x01') {
LAB_10142c910:
            uVar9 = 1;
          }
          else {
            if (uStack_e0._1_1_ != '\x02') {
              cStack_98 = uStack_e0._1_1_;
              uStack_97 = 0;
              cStack_a0 = '\x01';
              plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                              (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
              goto LAB_10142c904;
            }
LAB_10142c960:
            uVar9 = 2;
          }
          uVar8 = 0;
          uStack_140 = (long *)((ulong)CONCAT61(uStack_140._2_6_,uVar9) << 8);
          goto LAB_10142c96c;
        }
LAB_10142c804:
        uVar8 = 0;
        uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
LAB_10142c96c:
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,uVar8);
LAB_10142c970:
        FUN_100e077ec(&uStack_e0);
        goto LAB_10142c99c;
      }
      if ((byte)uStack_e0 == 4) {
        if (plStack_118 != (long *)0x0) {
          if (plStack_118 == (long *)0x1) goto LAB_10142c910;
          if (plStack_118 == (long *)0x2) goto LAB_10142c960;
          cStack_98 = (char)plStack_118;
          uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
          cStack_a0 = '\x01';
          plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
          goto LAB_10142c904;
        }
        goto LAB_10142c804;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 7) {
          if ((int)*plStack_110 != 0x6d6d7573 || *(int *)((long)plStack_110 + 3) != 0x7972616d)
          goto LAB_10142c8b0;
          uVar9 = 1;
LAB_10142c984:
          uVar8 = 0;
          uStack_140 = (long *)((ulong)CONCAT61(uStack_140._2_6_,uVar9) << 8);
        }
        else {
          if (lStack_108 == 9) {
            if (*plStack_110 == 0x6564616f4c746f6e && (char)plStack_110[1] == 'd') {
              uVar8 = 0;
              uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
              goto LAB_10142c988;
            }
          }
          else if ((lStack_108 == 4) && ((int)*plStack_110 == 0x6c6c7566)) {
            uVar9 = 2;
            goto LAB_10142c984;
          }
LAB_10142c8b0:
          plStack_138 = (long *)FUN_1087e4494(plStack_110,lStack_108,&UNK_10b232440,3);
          uVar8 = 1;
        }
LAB_10142c988:
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,uVar8);
        plVar5 = plStack_d8;
        goto joined_r0x00010142c77c;
      }
LAB_10142ca4c:
      plStack_138 = (long *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b210ca0);
      uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
LAB_10142c9a8:
      plVar11 = plStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      bVar4 = true;
      bVar2 = (bool)(bVar12 ^ 1);
      cVar14 = cVar13;
      if (cVar3 == '\x15') {
        bVar2 = true;
      }
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (plStack_110 == (long *)0x7) {
          if ((int)*plStack_118 == 0x6d6d7573 && *(int *)((long)plStack_118 + 3) == 0x7972616d)
          goto LAB_10142c910;
        }
        else if (plStack_110 == (long *)0x9) {
          if (*plStack_118 == 0x6564616f4c746f6e && (char)plStack_118[1] == 'd') goto LAB_10142c804;
        }
        else if ((plStack_110 == (long *)0x4) && ((int)*plStack_118 == 0x6c6c7566))
        goto LAB_10142c960;
        plStack_138 = (long *)FUN_1087e4494(plStack_118,plStack_110,&UNK_10b232440,3);
LAB_10142c904:
        uVar8 = 1;
        goto LAB_10142c96c;
      }
      if ((byte)uStack_e0 != 0xe) {
        if ((byte)uStack_e0 != 0xf) goto LAB_10142ca4c;
        func_0x000100bb5658(&uStack_140,plStack_118,plStack_110);
        goto LAB_10142c970;
      }
      func_0x000100bb5658(&uStack_140,plStack_110,lStack_108);
      unaff_x25 = plVar5;
joined_r0x00010142c77c:
      cVar13 = (char)unaff_x25;
      plVar11 = plVar6;
      if (plVar5 != (long *)0x0) {
        _free(plVar6);
      }
LAB_10142c99c:
      if ((char)uStack_140 == '\x01') goto LAB_10142c9a8;
      cVar13 = uStack_140._1_1_;
      uStack_90 = (undefined1)lStack_70;
      uStack_8f = (undefined7)((ulong)lStack_70 >> 8);
      cStack_98 = (char)lStack_78;
      uStack_97 = (undefined7)((ulong)lStack_78 >> 8);
      lStack_88 = lStack_68;
      cStack_a0 = (char)uStack_80;
      uStack_9f = (undefined7)(uStack_80 >> 8);
      uVar1 = (uint)uStack_80 & 0xff;
      cVar14 = cVar13;
      if (uStack_140._1_1_ == '\0') {
        if (uVar1 != 0x16) {
          if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_68 == 0)))) goto LAB_10142cb88;
          plVar11 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_10142cbbc;
        }
        cVar13 = '\0';
        bVar4 = false;
        bVar2 = (bool)(bVar12 ^ 1);
        cVar14 = cVar13;
        if (cVar3 == '\x15') {
          bVar2 = true;
        }
      }
      else {
        if (uStack_140._1_1_ == '\x01') {
          if (uVar1 != 0x16) {
            if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_68 == 0)))) goto LAB_10142cb88;
            plVar11 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_10142cbbc;
          }
          cVar14 = '\x01';
          cVar13 = '\x01';
          bVar2 = (bool)(bVar12 ^ 1);
          if (cVar3 == '\x15') {
            bVar2 = true;
          }
        }
        else {
          if (uVar1 != 0x16) {
            if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_68 == 0)))) {
LAB_10142cb88:
              FUN_100e077ec(&cStack_a0);
              bVar4 = false;
              bVar2 = (bool)(bVar12 ^ 1);
              if (cVar3 == '\x15') {
                bVar2 = true;
              }
              goto joined_r0x00010142cb08;
            }
            plVar11 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_10142cbbc:
            bVar4 = true;
            bVar2 = (bool)(bVar12 ^ 1);
            if (cVar3 == '\x15') {
              bVar2 = true;
            }
            goto joined_r0x00010142cb08;
          }
          cVar14 = '\x02';
          cVar13 = '\x02';
          bVar2 = (bool)(bVar12 ^ 1);
          if (cVar3 == '\x15') {
            bVar2 = true;
          }
        }
        bVar4 = false;
      }
    }
joined_r0x00010142cb08:
    if (!bVar2) {
      FUN_100e077ec(param_2);
      cVar13 = cVar14;
    }
    if (!bVar4) {
      uVar9 = 0;
      param_1[1] = cVar13;
      goto LAB_10142c9f4;
    }
  }
  else if (cVar3 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(long **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18);
    plStack_128 = uStack_140 + lVar10 * 8;
    plStack_138 = uStack_140;
    if (lVar10 == 0) {
LAB_10142c80c:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar11 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      plVar11 = uStack_140 + 8;
      cVar14 = (char)*uStack_140;
      plStack_138 = plVar11;
      if (cVar14 == '\x16') goto LAB_10142c80c;
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
      cStack_a0 = cVar14;
      lStack_88 = lStack_108;
      if (lVar10 == 1) {
LAB_10142c634:
        plStack_118 = (long *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar14);
        plVar11 = (long *)(uStack_80 & 0xff);
        uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
        lStack_e9 = uStack_140[7];
        uStack_f1 = (undefined1)uStack_140[6];
        uStack_f0 = (undefined7)((ulong)uStack_140[6] >> 8);
        bVar12 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_10142c670;
      }
      plStack_138 = uStack_140 + 0x10;
      plStack_d8 = (long *)uStack_140[9];
      uStack_e0 = *plVar11;
      lStack_c8 = uStack_140[0xb];
      plStack_d0 = (long *)uStack_140[10];
      lStack_a8 = uStack_140[0xf];
      uStack_b8 = (undefined1)uStack_140[0xd];
      uStack_b7 = (undefined7)((ulong)uStack_140[0xd] >> 8);
      uStack_c0 = (undefined1)uStack_140[0xc];
      uStack_bf = (undefined7)((ulong)uStack_140[0xc] >> 8);
      uStack_b0 = (undefined1)uStack_140[0xe];
      uStack_af = (undefined7)((ulong)uStack_140[0xe] >> 8);
      if ((byte)uStack_e0 == '\x16') goto LAB_10142c634;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar11 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    plVar11 = (long *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(long **)(param_1 + 8) = plVar11;
  uVar9 = 1;
LAB_10142c9f4:
  *param_1 = uVar9;
  return;
}

