
/* WARNING: Removing unreachable block (ram,0x00010142def8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10142d87c(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  char cVar12;
  long *unaff_x25;
  long *plVar14;
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
  char cVar13;
  
  cVar12 = (char)unaff_x25;
  cVar2 = *param_2;
  if ((cVar2 == '\f') || (cVar2 == '\r')) {
    bVar11 = 0;
    plStack_118 = *(long **)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    plStack_110 = *(long **)(param_2 + 0x10);
    plVar10 = (long *)0x16;
LAB_10142d970:
    plVar6 = plStack_110;
    plVar14 = plStack_118;
    plStack_d8 = plStack_118;
    uStack_e0 = uStack_120;
    uVar5 = uStack_e0;
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
    uStack_e0 = uVar5;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
        if (uStack_e0._1_1_ != '\0') {
          if (uStack_e0._1_1_ == '\x01') {
LAB_10142daf8:
            uVar8 = 1;
          }
          else {
            if (uStack_e0._1_1_ != '\x02') {
              cStack_98 = uStack_e0._1_1_;
              uStack_97 = 0;
              cStack_a0 = '\x01';
              plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                              (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
              goto LAB_10142dbe8;
            }
LAB_10142dca0:
            uVar8 = 2;
          }
          uVar7 = 0;
          uStack_140 = (long *)((ulong)CONCAT61(uStack_140._2_6_,uVar8) << 8);
          goto LAB_10142de10;
        }
LAB_10142de0c:
        uVar7 = 0;
        uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
LAB_10142de10:
        uStack_140 = (long *)CONCAT71(uStack_140._1_7_,uVar7);
LAB_10142de14:
        FUN_100e077ec(&uStack_e0);
        plVar6 = plVar10;
        goto LAB_10142de1c;
      }
      if ((byte)uStack_e0 == 4) {
        if (plStack_118 != (long *)0x0) {
          if (plStack_118 == (long *)0x1) goto LAB_10142daf8;
          if (plStack_118 == (long *)0x2) goto LAB_10142dca0;
          cStack_98 = (char)plStack_118;
          uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
          cStack_a0 = '\x01';
          plStack_138 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
          goto LAB_10142dbe8;
        }
        goto LAB_10142de0c;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 4) {
          if ((int)*plStack_110 != 0x72657375) goto LAB_10142db98;
          uStack_140 = (long *)((ulong)uStack_140._2_6_ << 0x10);
        }
        else if (lStack_108 == 8) {
          if (*plStack_110 == 0x746e656761627573) {
            uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x100);
          }
          else {
LAB_10142db98:
            plStack_138 = (long *)FUN_1087e4494(plStack_110,lStack_108,&UNK_10b222a88,3);
            uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
          }
        }
        else {
          if ((lStack_108 != 0x14) ||
             ((*plStack_110 != 0x635f79726f6d656d || plStack_110[1] != 0x6164696c6f736e6f) ||
              (int)plStack_110[2] != 0x6e6f6974)) goto LAB_10142db98;
          uStack_140 = (long *)CONCAT62(uStack_140._2_6_,0x200);
        }
        plVar14 = unaff_x25;
        if (plStack_d8 == (long *)0x0) goto LAB_10142de1c;
LAB_10142dcc4:
        cVar12 = (char)plVar14;
        _free(plVar6);
        plVar10 = uStack_140;
        lVar9 = lStack_88;
        lStack_88 = lStack_68;
        goto joined_r0x00010142de24;
      }
LAB_10142decc:
      plStack_138 = (long *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b211400);
      uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
      lVar9 = lStack_88;
LAB_10142de28:
      lStack_88 = lVar9;
      plVar6 = plStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      bVar3 = true;
      bVar4 = (bool)(bVar11 ^ 1);
      cVar13 = cVar12;
      if (cVar2 == '\x15') {
        bVar4 = true;
      }
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (plStack_110 == (long *)0x4) {
          if ((int)*plStack_118 == 0x72657375) goto LAB_10142de0c;
        }
        else if (plStack_110 == (long *)0x8) {
          if (*plStack_118 == 0x746e656761627573) goto LAB_10142daf8;
        }
        else if ((plStack_110 == (long *)0x14) &&
                ((*plStack_118 == 0x635f79726f6d656d && plStack_118[1] == 0x6164696c6f736e6f) &&
                 (int)plStack_118[2] == 0x6e6f6974)) goto LAB_10142dca0;
        plStack_138 = (long *)FUN_1087e4494(plStack_118,plStack_110,&UNK_10b222a88,3);
LAB_10142dbe8:
        uVar7 = 1;
        goto LAB_10142de10;
      }
      if ((byte)uStack_e0 != 0xe) {
        if ((byte)uStack_e0 != 0xf) goto LAB_10142decc;
        FUN_100ae3180(&uStack_140,plStack_118,plStack_110);
        goto LAB_10142de14;
      }
      FUN_100ae3180(&uStack_140,plStack_110,lStack_108);
      if (plVar14 != (long *)0x0) goto LAB_10142dcc4;
      cVar12 = '\0';
LAB_10142de1c:
      plVar10 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
joined_r0x00010142de24:
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = plVar10;
      lStack_68 = lStack_88;
      if (bVar4) goto LAB_10142de28;
      uStack_140._1_1_ = (char)((ulong)plVar10 >> 8);
      cVar12 = uStack_140._1_1_;
      uStack_90 = (undefined1)lStack_70;
      uStack_8f = (undefined7)((ulong)lStack_70 >> 8);
      cStack_98 = (char)lStack_78;
      uStack_97 = (undefined7)((ulong)lStack_78 >> 8);
      cStack_a0 = (char)uStack_80;
      uStack_9f = (undefined7)(uStack_80 >> 8);
      uVar1 = (uint)uStack_80 & 0xff;
      cVar13 = cVar12;
      if (uStack_140._1_1_ == '\0') {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
            plVar6 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_10142df10;
          }
          goto LAB_10142dde8;
        }
        cVar12 = '\0';
        bVar3 = false;
        bVar4 = (bool)(bVar11 ^ 1);
        cVar13 = cVar12;
        if (cVar2 == '\x15') {
          bVar4 = true;
        }
      }
      else {
        if (uStack_140._1_1_ == '\x01') {
          if (uVar1 != 0x16) {
            if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
              plVar6 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_10142df10:
              bVar3 = true;
              bVar4 = (bool)(bVar11 ^ 1);
              if (cVar2 == '\x15') {
                bVar4 = true;
              }
              goto joined_r0x00010142dd68;
            }
LAB_10142dde8:
            FUN_100e077ec(&cStack_a0);
            bVar3 = false;
            bVar4 = (bool)(bVar11 ^ 1);
            if (cVar2 == '\x15') {
              bVar4 = true;
            }
            goto joined_r0x00010142dd68;
          }
          cVar13 = '\x01';
          cVar12 = '\x01';
          bVar4 = (bool)(bVar11 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
        }
        else {
          if (uVar1 != 0x16) {
            if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_88 != 0)))) {
              plVar6 = (long *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
              goto LAB_10142df10;
            }
            goto LAB_10142dde8;
          }
          cVar13 = '\x02';
          cVar12 = '\x02';
          bVar4 = (bool)(bVar11 ^ 1);
          if (cVar2 == '\x15') {
            bVar4 = true;
          }
        }
        bVar3 = false;
      }
    }
joined_r0x00010142dd68:
    if (!bVar4) {
      FUN_100e077ec(param_2);
      cVar12 = cVar13;
    }
    if (!bVar3) {
      uVar8 = 0;
      param_1[1] = cVar12;
      goto LAB_10142de74;
    }
  }
  else if (cVar2 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(long **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    plStack_128 = uStack_140 + lVar9 * 8;
    plStack_138 = uStack_140;
    if (lVar9 == 0) {
LAB_10142db04:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar6 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      plVar10 = uStack_140 + 8;
      cVar13 = (char)*uStack_140;
      plStack_138 = plVar10;
      if (cVar13 == '\x16') goto LAB_10142db04;
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
      cStack_a0 = cVar13;
      lStack_88 = lStack_108;
      if (lVar9 == 1) {
LAB_10142d934:
        plStack_118 = (long *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar13);
        plVar10 = (long *)(uStack_80 & 0xff);
        uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
        lStack_e9 = uStack_140[7];
        uStack_f1 = (undefined1)uStack_140[6];
        uStack_f0 = (undefined7)((ulong)uStack_140[6] >> 8);
        bVar11 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_10142d970;
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
      if ((byte)uStack_e0 == '\x16') goto LAB_10142d934;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      plVar6 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    plVar6 = (long *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(long **)(param_1 + 8) = plVar6;
  uVar8 = 1;
LAB_10142de74:
  *param_1 = uVar8;
  return;
}

