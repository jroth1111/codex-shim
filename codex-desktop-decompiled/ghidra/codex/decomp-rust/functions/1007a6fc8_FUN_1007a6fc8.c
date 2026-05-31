
void FUN_1007a6fc8(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
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
  
  cVar4 = *param_2;
  if ((cVar4 != '\f') && (cVar4 != '\r')) {
    if (cVar4 != '\x15') {
      thunk_FUN_1088556a8(&uStack_e0,param_2);
      uVar7 = FUN_107c05dcc(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
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
      cVar3 = *uStack_140;
      pcStack_138 = pcVar9;
      if (cVar3 != '\x16') {
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
        cStack_a0 = cVar3;
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
            FUN_100e077ec(&uStack_e0);
            FUN_100e077ec(&uStack_c0);
            uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
            uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
            *(undefined8 *)(param_1 + 8) = uVar7;
            *param_1 = 1;
            FUN_100e077ec(&uStack_80);
            FUN_100e077ec(&cStack_a0);
            goto LAB_1007a72dc;
          }
        }
        plStack_118 = (long *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar3);
        uVar11 = (char)uStack_80;
        uStack_100 = *(undefined8 *)(uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)(uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0x38);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0x30);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x30) >> 8);
        bVar12 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_1007a70bc;
      }
    }
    uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
    uVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 1;
LAB_1007a72dc:
    FUN_100d34830(&uStack_140);
    return;
  }
  bVar12 = 0;
  plStack_118 = *(long **)(param_2 + 8);
  uStack_120 = *(undefined8 *)param_2;
  lStack_108 = *(long *)(param_2 + 0x18);
  plStack_110 = *(long **)(param_2 + 0x10);
  uVar11 = 0x16;
LAB_1007a70bc:
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
LAB_1007a7368:
          uVar11 = 1;
        }
        else {
          if (uStack_e0._1_1_ != '\x02') {
            cStack_98 = uStack_e0._1_1_;
            uStack_97 = 0;
            cStack_a0 = '\x01';
            pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
            goto LAB_1007a735c;
          }
LAB_1007a73c8:
          uVar11 = 2;
        }
        uVar8 = 0;
        uStack_140 = (char *)((ulong)CONCAT61(uStack_140._2_6_,uVar11) << 8);
        goto LAB_1007a73d4;
      }
LAB_1007a7254:
      uVar8 = 0;
      uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
LAB_1007a73d4:
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar8);
LAB_1007a73d8:
      FUN_100e077ec(&uStack_e0);
      goto LAB_1007a7400;
    }
    if ((byte)uStack_e0 == 4) {
      if (plStack_118 != (long *)0x0) {
        if (plStack_118 == (long *)0x1) goto LAB_1007a7368;
        if (plStack_118 == (long *)0x2) goto LAB_1007a73c8;
        cStack_98 = (char)plStack_118;
        uStack_97 = (undefined7)((ulong)plStack_118 >> 8);
        cStack_a0 = '\x01';
        pcStack_138 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_a0,&UNK_10b229e80,&UNK_10b20a590);
        goto LAB_1007a735c;
      }
      goto LAB_1007a7254;
    }
    if ((byte)uStack_e0 == 0xc) {
      if (lStack_108 == 6) {
        if ((int)*plStack_110 != 0x6c696166 || *(short *)((long)plStack_110 + 4) != 0x6465)
        goto LAB_1007a730c;
        uVar11 = 1;
LAB_1007a73ec:
        uVar8 = 0;
        uStack_140 = (char *)((ulong)CONCAT61(uStack_140._2_6_,uVar11) << 8);
      }
      else {
        if (lStack_108 == 9) {
          if (*plStack_110 == 0x6574656c706d6f63 && (char)plStack_110[1] == 'd') {
            uVar8 = 0;
            uStack_140 = (char *)((ulong)uStack_140._2_6_ << 0x10);
            goto LAB_1007a73f0;
          }
        }
        else if ((lStack_108 == 8) && (*plStack_110 == 0x64656e696c636564)) {
          uVar11 = 2;
          goto LAB_1007a73ec;
        }
LAB_1007a730c:
        pcStack_138 = (char *)func_0x000107c04200(plStack_110,lStack_108,&UNK_10b222668,3);
        uVar8 = 1;
      }
LAB_1007a73f0:
      uStack_140 = (char *)CONCAT71(uStack_140._1_7_,uVar8);
      goto joined_r0x0001007a71cc;
    }
LAB_1007a7484:
    pcStack_138 = (char *)thunk_FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b20e9c0);
    uStack_140 = (char *)CONCAT71(uStack_140._1_7_,1);
LAB_1007a740c:
    pcVar9 = pcStack_138;
    if ((char)uStack_80 != '\x16') {
      FUN_100e077ec(&uStack_80);
    }
  }
  else {
    if ((byte)uStack_e0 == 0xd) {
      if (plStack_110 == (long *)0x6) {
        if ((int)*plStack_118 == 0x6c696166 && *(short *)((long)plStack_118 + 4) == 0x6465)
        goto LAB_1007a7368;
      }
      else if (plStack_110 == (long *)0x9) {
        if (*plStack_118 == 0x6574656c706d6f63 && (char)plStack_118[1] == 'd') goto LAB_1007a7254;
      }
      else if ((plStack_110 == (long *)0x8) && (*plStack_118 == 0x64656e696c636564))
      goto LAB_1007a73c8;
      pcStack_138 = (char *)func_0x000107c04200(plStack_118,plStack_110,&UNK_10b222668,3);
LAB_1007a735c:
      uVar8 = 1;
      goto LAB_1007a73d4;
    }
    if ((byte)uStack_e0 != 0xe) {
      if ((byte)uStack_e0 != 0xf) goto LAB_1007a7484;
      func_0x000100b1eb54(&uStack_140,plStack_118,plStack_110);
      goto LAB_1007a73d8;
    }
    func_0x000100b1eb54(&uStack_140,plStack_110,lStack_108);
joined_r0x0001007a71cc:
    if (plVar5 != (long *)0x0) {
      _free(plVar6);
    }
LAB_1007a7400:
    if ((char)uStack_140 == '\x01') goto LAB_1007a740c;
    cVar3 = uStack_140._1_1_;
    uStack_90 = (undefined1)uStack_70;
    uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
    cStack_98 = (char)uStack_78;
    uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
    lStack_88 = lStack_68;
    cStack_a0 = (char)uStack_80;
    uStack_9f = (undefined7)((ulong)uStack_80 >> 8);
    uVar1 = (uint)uStack_80 & 0xff;
    if (uStack_140._1_1_ != '\0') {
      if (uStack_140._1_1_ == '\x01') {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_68 != 0)))) {
            pcVar9 = (char *)thunk_FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
            goto LAB_1007a7424;
          }
LAB_1007a756c:
          FUN_100e077ec(&cStack_a0);
        }
      }
      else if (uVar1 != 0x16) {
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_68 == 0)))) goto LAB_1007a756c;
        pcVar9 = (char *)thunk_FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
        goto LAB_1007a7424;
      }
LAB_1007a7574:
      param_1[1] = cVar3;
      *param_1 = 0;
      bVar2 = (bool)(bVar12 ^ 1);
      if (cVar4 == '\x15') {
        bVar2 = true;
      }
      if (bVar2) {
        return;
      }
      goto LAB_1007a7590;
    }
    if (uVar1 == 0x16) goto LAB_1007a7574;
    if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_68 == 0)))) goto LAB_1007a756c;
    pcVar9 = (char *)thunk_FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
  }
LAB_1007a7424:
  *(char **)(param_1 + 8) = pcVar9;
  *param_1 = 1;
  bVar2 = (bool)(bVar12 ^ 1);
  if (cVar4 == '\x15') {
    bVar2 = true;
  }
  if (bVar2) {
    return;
  }
LAB_1007a7590:
  FUN_100e077ec(param_2);
  return;
}

