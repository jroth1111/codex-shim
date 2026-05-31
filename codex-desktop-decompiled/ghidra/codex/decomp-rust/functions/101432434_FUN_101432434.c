
/* WARNING: Removing unreachable block (ram,0x000101432aa4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101432434(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
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
  cVar2 = *param_2;
  if ((cVar2 == '\f') || (cVar2 == '\r')) {
    bVar12 = 0;
    plStack_118 = *(long **)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    plStack_110 = *(long **)(param_2 + 0x10);
    plVar11 = (long *)0x16;
LAB_101432528:
    plVar7 = plStack_110;
    plVar5 = plStack_118;
    plStack_d8 = plStack_118;
    uStack_e0 = uStack_120;
    uVar6 = uStack_e0;
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
    uStack_e0 = uVar6;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
        if (uStack_e0._1_1_ != '\0') {
          if (uStack_e0._1_1_ == '\x01') {
LAB_1014326b0:
            uVar9 = 1;
          }
          else {
            if (uStack_e0._1_1_ != '\x02') {
              cStack_98 = uStack_e0._1_1_;
              uStack_97 = 0;
              cStack_a0 = '\x01';
              plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                              (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
              goto LAB_10143279c;
            }
LAB_101432850:
            uVar9 = 2;
          }
          uVar8 = 0;
          uStack_140 = (long *)((ulong)CONCAT61(uStack_140._2_6_,uVar9) << 8);
          goto LAB_1014329bc;
        }
LAB_1014329b8:
        uVar8 = 0;
        uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
LAB_1014329bc:
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,uVar8);
        goto LAB_1014329c0;
      }
      if ((byte)uStack_e0 == 4) {
        if (plStack_118 != (long *)0x0) {
          if (plStack_118 == (long *)0x1) goto LAB_1014326b0;
          if (plStack_118 == (long *)0x2) goto LAB_101432850;
          cStack_98 = (char)plStack_118;
          uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
          cStack_a0 = '\x01';
          plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
          goto LAB_10143279c;
        }
        goto LAB_1014329b8;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 4) {
          if ((int)*plStack_110 != 0x72657375) goto LAB_101432750;
          uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
        }
        else if (lStack_108 == 8) {
          if (*plStack_110 != 0x746e656761627573) goto LAB_101432750;
          uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x100);
        }
        else if ((lStack_108 == 0x14) &&
                ((*plStack_110 == 0x635f79726f6d656d && plStack_110[1] == 0x6164696c6f736e6f) &&
                 (int)plStack_110[2] == 0x6e6f6974)) {
          uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x200);
        }
        else {
LAB_101432750:
          plStack_138 = (long *)FUN_1087e4494(plStack_110,lStack_108,&UNK_10b222a88,3);
          uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
        }
joined_r0x00010143286c:
        plVar11 = plVar7;
        unaff_x25 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_1014329c8;
        _free(plVar7);
        plVar11 = uStack_140;
        lVar10 = lStack_88;
        lStack_88 = lStack_68;
        goto joined_r0x0001014329d0;
      }
LAB_101432a78:
      plStack_138 = (long *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b2128c0);
      uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
      lVar10 = lStack_88;
LAB_1014329d4:
      lStack_88 = lVar10;
      plVar7 = plStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      bVar3 = true;
      bVar4 = (bool)(bVar12 ^ 1);
      cVar14 = cVar13;
      if (cVar2 == '\x15') {
        bVar4 = true;
      }
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (plStack_110 == (long *)0x4) {
          if ((int)*plStack_118 == 0x72657375) goto LAB_1014329b8;
        }
        else if (plStack_110 == (long *)0x8) {
          if (*plStack_118 == 0x746e656761627573) goto LAB_1014326b0;
        }
        else if ((plStack_110 == (long *)0x14) &&
                ((*plStack_118 == 0x635f79726f6d656d && plStack_118[1] == 0x6164696c6f736e6f) &&
                 (int)plStack_118[2] == 0x6e6f6974)) goto LAB_101432850;
        plStack_138 = (long *)FUN_1087e4494(plStack_118,plStack_110,&UNK_10b222a88,3);
LAB_10143279c:
        uVar8 = 1;
        goto LAB_1014329bc;
      }
      if ((byte)uStack_e0 == 0xe) {
        func_0x000100ae3180(&uStack_140,plStack_110,lStack_108);
        goto joined_r0x00010143286c;
      }
      if ((byte)uStack_e0 != 0xf) goto LAB_101432a78;
      func_0x000100ae3180(&uStack_140,plStack_118,plStack_110);
LAB_1014329c0:
      FUN_100e077ec(&uStack_e0);
LAB_1014329c8:
      plVar7 = plVar11;
      plVar5 = unaff_x25;
      plVar11 = uStack_140;
      lVar10 = lStack_88;
      lStack_88 = lStack_68;
joined_r0x0001014329d0:
      cVar13 = (char)plVar5;
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = plVar11;
      lStack_68 = lStack_88;
      if (bVar4) goto LAB_1014329d4;
      uStack_140._1_1_ = (char)((ulong)plVar11 >> 8);
      cVar13 = uStack_140._1_1_;
      uStack_90 = (undefined1)lStack_70;
      uStack_8f = (undefined7)((ulong)lStack_70 >> 8);
      cStack_98 = (char)lStack_78;
      uStack_97 = (undefined7)((ulong)lStack_78 >> 8);
      cStack_a0 = (char)uStack_80;
      uStack_9f = (undefined7)(uStack_80 >> 8);
      uVar1 = (uint)uStack_80 & 0xff;
      cVar14 = cVar13;
      if (uStack_140._1_1_ == '\0') {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            plVar7 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_101432abc;
          }
          goto LAB_101432994;
        }
        cVar13 = '\0';
        bVar3 = false;
        bVar4 = (bool)(bVar12 ^ 1);
        cVar14 = cVar13;
        if (cVar2 == '\x15') {
          bVar4 = true;
        }
      }
      else {
        if (uStack_140._1_1_ == '\x01') {
          if (uVar1 != 0x16) {
            if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
              plVar7 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
              goto LAB_101432abc;
            }
            goto LAB_101432994;
          }
          cVar14 = '\x01';
          cVar13 = '\x01';
          bVar4 = (bool)(bVar12 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
        }
        else {
          if (uVar1 != 0x16) {
            if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
              plVar7 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_101432abc:
              bVar3 = true;
              bVar4 = (bool)(bVar12 ^ 1);
              if (cVar2 == '\x15') {
                bVar4 = true;
              }
              goto joined_r0x000101432914;
            }
LAB_101432994:
            FUN_100e077ec(&cStack_a0);
            bVar3 = false;
            bVar4 = (bool)(bVar12 ^ 1);
            if (cVar2 == '\x15') {
              bVar4 = true;
            }
            goto joined_r0x000101432914;
          }
          cVar14 = '\x02';
          cVar13 = '\x02';
          bVar4 = (bool)(bVar12 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
        }
        bVar3 = false;
      }
    }
joined_r0x000101432914:
    if (!bVar4) {
      FUN_100e077ec(param_2);
      cVar13 = cVar14;
    }
    if (!bVar3) {
      uVar9 = 0;
      param_1[1] = cVar13;
      goto LAB_101432a20;
    }
  }
  else if (cVar2 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(long **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18);
    plStack_128 = uStack_140 + lVar10 * 8;
    plStack_138 = uStack_140;
    if (lVar10 == 0) {
LAB_1014326bc:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar7 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      plVar11 = uStack_140 + 8;
      cVar14 = (char)*uStack_140;
      plStack_138 = plVar11;
      if (cVar14 == '\x16') goto LAB_1014326bc;
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
LAB_1014324ec:
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
        goto LAB_101432528;
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
      if ((byte)uStack_e0 == '\x16') goto LAB_1014324ec;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
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
  uVar9 = 1;
LAB_101432a20:
  *param_1 = uVar9;
  return;
}

