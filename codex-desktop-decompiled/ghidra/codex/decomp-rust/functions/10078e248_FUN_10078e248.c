
/* WARNING: Removing unreachable block (ram,0x00010078e7e0) */

void FUN_10078e248(undefined8 *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_160;
  char *pcStack_158;
  undefined8 uStack_150;
  char *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  long lStack_109;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  long lStack_c8;
  char cStack_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_71;
  
  if (param_2 == '\0') {
    puVar7 = (undefined4 *)_malloc(4);
    if (puVar7 != (undefined4 *)0x0) {
      uVar11 = 0x64616572;
      goto LAB_10078e2bc;
    }
LAB_10078e2dc:
    FUN_107c03c64(1,4);
  }
  else {
    if (param_2 != '\x01') {
      puVar7 = (undefined4 *)_malloc(4);
      if (puVar7 == (undefined4 *)0x0) goto LAB_10078e2dc;
      uVar11 = 0x796e6564;
LAB_10078e2bc:
      *puVar7 = uVar11;
      uVar12 = 4;
LAB_10078e2c4:
      *param_1 = 0x8000000000000003;
      param_1[1] = uVar12;
      param_1[2] = puVar7;
      param_1[3] = uVar12;
      return;
    }
    puVar7 = (undefined4 *)_malloc(5);
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar7 + 1) = 0x65;
      *puVar7 = 0x74697277;
      uVar12 = 5;
      goto LAB_10078e2c4;
    }
  }
  auVar17 = FUN_107c03c64(1,5);
  pcVar9 = auVar17._8_8_;
  puVar8 = auVar17._0_8_;
  cVar3 = *pcVar9;
  if ((cVar3 != '\f') && (cVar3 != '\r')) {
    if (cVar3 != '\x15') {
      thunk_FUN_1088556a8(&uStack_100,pcVar9);
      uVar12 = FUN_107c05dcc(&uStack_100,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(puVar8 + 8) = uVar12;
      *puVar8 = 1;
      FUN_100e077ec(pcVar9);
      return;
    }
    uStack_150 = *(undefined8 *)(pcVar9 + 8);
    uStack_160 = *(char **)(pcVar9 + 0x10);
    lVar14 = *(long *)(pcVar9 + 0x18);
    pcStack_148 = uStack_160 + lVar14 * 0x40;
    pcStack_158 = uStack_160;
    if (lVar14 != 0) {
      pcVar13 = uStack_160 + 0x40;
      cVar2 = *uStack_160;
      pcStack_158 = pcVar13;
      if (cVar2 != '\x16') {
        uStack_b7 = (undefined7)*(undefined8 *)(uStack_160 + 9);
        uStack_bf = (undefined7)*(undefined8 *)(uStack_160 + 1);
        bStack_b8 = (byte)((ulong)*(undefined8 *)(uStack_160 + 1) >> 0x38);
        lStack_128 = *(long *)(uStack_160 + 0x18);
        uStack_130 = *(undefined8 *)(uStack_160 + 0x10);
        uStack_98 = *(undefined8 *)(uStack_160 + 0x28);
        uStack_a0 = *(undefined8 *)(uStack_160 + 0x20);
        uStack_b0 = (undefined1)uStack_130;
        uStack_af = (undefined7)((ulong)uStack_130 >> 8);
        lStack_88 = *(long *)(uStack_160 + 0x38);
        uStack_90 = *(undefined8 *)(uStack_160 + 0x30);
        cStack_c0 = cVar2;
        lStack_a8 = lStack_128;
        if (lVar14 != 1) {
          pcStack_158 = uStack_160 + 0x80;
          lStack_f8 = *(long *)(uStack_160 + 0x48);
          uStack_100 = *(undefined8 *)pcVar13;
          lStack_e8 = *(long *)(uStack_160 + 0x58);
          uStack_f0 = *(undefined8 *)(uStack_160 + 0x50);
          lStack_c8 = *(long *)(uStack_160 + 0x78);
          uStack_d8 = (undefined1)*(undefined8 *)(uStack_160 + 0x68);
          uStack_d7 = (undefined7)((ulong)*(undefined8 *)(uStack_160 + 0x68) >> 8);
          uStack_e0 = (undefined1)*(undefined8 *)(uStack_160 + 0x60);
          uStack_df = (undefined7)((ulong)*(undefined8 *)(uStack_160 + 0x60) >> 8);
          uStack_d0 = (undefined1)*(undefined8 *)(uStack_160 + 0x70);
          uStack_cf = (undefined7)((ulong)*(undefined8 *)(uStack_160 + 0x70) >> 8);
          if ((byte)uStack_100 != '\x16') {
            FUN_100e077ec(&uStack_100);
            FUN_100e077ec(&uStack_e0);
            uStack_100 = CONCAT71(uStack_100._1_7_,0xb);
            uVar12 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&uStack_100,&UNK_10b20a580,&UNK_10b20a590);
            *(undefined8 *)(puVar8 + 8) = uVar12;
            *puVar8 = 1;
            FUN_100e077ec(&uStack_a0);
            FUN_100e077ec(&cStack_c0);
            goto LAB_10078e74c;
          }
        }
        lStack_138 = CONCAT71(uStack_b7,bStack_b8);
        uStack_140 = CONCAT71(uStack_bf,cVar2);
        uVar15 = (char)uStack_a0;
        uStack_120 = *(undefined8 *)(uStack_160 + 0x21);
        uStack_118 = (undefined7)*(undefined8 *)(uStack_160 + 0x29);
        lStack_109 = *(long *)(uStack_160 + 0x38);
        uStack_111 = (undefined1)*(undefined8 *)(uStack_160 + 0x30);
        uStack_110 = (undefined7)((ulong)*(undefined8 *)(uStack_160 + 0x30) >> 8);
        bVar16 = 1;
        FUN_100d34830(&uStack_160);
        goto LAB_10078e3e8;
      }
    }
    uStack_100 = CONCAT71(uStack_100._1_7_,0xb);
    uVar12 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                       (&uStack_100,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(puVar8 + 8) = uVar12;
    *puVar8 = 1;
LAB_10078e74c:
    FUN_100d34830(&uStack_160);
    return;
  }
  bVar16 = 0;
  lStack_138 = *(long *)(pcVar9 + 8);
  uStack_140 = *(undefined8 *)pcVar9;
  lStack_128 = *(long *)(pcVar9 + 0x18);
  uStack_130 = *(undefined8 *)(pcVar9 + 0x10);
  uVar15 = 0x16;
LAB_10078e3e8:
  uVar12 = uStack_130;
  lVar14 = lStack_138;
  lStack_f8 = lStack_138;
  uStack_100 = uStack_140;
  uVar6 = uStack_100;
  lStack_e8 = lStack_128;
  uStack_f0 = uStack_130;
  uStack_d7 = uStack_118;
  uStack_df = (undefined7)uStack_120;
  uStack_d8 = (undefined1)((ulong)uStack_120 >> 0x38);
  lStack_c8 = lStack_109;
  uStack_d0 = uStack_111;
  uStack_cf = uStack_110;
  uStack_98 = CONCAT71(uStack_118,uStack_d8);
  uStack_a0 = CONCAT71(uStack_df,uVar15);
  uStack_90 = CONCAT71(uStack_110,uStack_111);
  lStack_88 = lStack_109;
  uStack_100._0_1_ = (byte)uStack_140;
  uStack_100 = uVar6;
  uStack_e0 = uVar15;
  if ((byte)uStack_100 < 0xd) {
    if ((byte)uStack_100 == 1) {
      uStack_100._1_1_ = (byte)((ulong)uStack_140 >> 8);
      if (uStack_100._1_1_ < 2) {
        if (uStack_100._1_1_ == 0) {
LAB_10078e690:
          uVar10 = 0;
          uStack_160 = (char *)((ulong)uStack_160._2_6_ << 0x10);
          goto LAB_10078e6a4;
        }
        if (uStack_100._1_1_ != 1) {
LAB_10078e800:
          bStack_b8 = uStack_100._1_1_;
          uStack_b7 = 0;
          cStack_c0 = '\x01';
          pcStack_158 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_c0,&UNK_10b22b5e8,&UNK_10b20a590);
          goto LAB_10078e824;
        }
LAB_10078e574:
        uVar15 = 1;
      }
      else if (uStack_100._1_1_ == 2) {
LAB_10078e698:
        uVar15 = 2;
      }
      else {
        if (uStack_100._1_1_ != 3) goto LAB_10078e800;
LAB_10078e684:
        uVar15 = 3;
      }
      uVar10 = 0;
      uStack_160 = (char *)((ulong)CONCAT61(uStack_160._2_6_,uVar15) << 8);
LAB_10078e6a4:
      uStack_160 = (char *)CONCAT71(uStack_160._1_7_,uVar10);
      goto LAB_10078e6a8;
    }
    if ((byte)uStack_100 == 4) {
      if (lStack_138 < 2) {
        if (lStack_138 == 0) goto LAB_10078e690;
        if (lStack_138 == 1) goto LAB_10078e574;
      }
      else {
        if (lStack_138 == 2) goto LAB_10078e698;
        if (lStack_138 == 3) goto LAB_10078e684;
      }
      bStack_b8 = (byte)lStack_138;
      uStack_b7 = (undefined7)((ulong)lStack_138 >> 8);
      cStack_c0 = '\x01';
      pcStack_158 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                      (&cStack_c0,&UNK_10b22b5e8,&UNK_10b20a590);
LAB_10078e824:
      uVar10 = 1;
      goto LAB_10078e6a4;
    }
    if ((byte)uStack_100 == 0xc) {
      FUN_100b39b0c(&uStack_160,uStack_130,lStack_128);
      goto LAB_10078e4a0;
    }
LAB_10078e7b4:
    pcStack_158 = (char *)thunk_FUN_108855b04(&uStack_100,&uStack_71,&UNK_10b20e1a0);
    uStack_160 = (char *)CONCAT71(uStack_160._1_7_,1);
    lVar14 = lStack_a8;
LAB_10078e6bc:
    lStack_a8 = lVar14;
    pcVar13 = pcStack_158;
    if ((char)uStack_a0 != '\x16') {
      FUN_100e077ec(&uStack_a0);
    }
  }
  else {
    if ((byte)uStack_100 == 0xd) {
      FUN_100b39b0c(&uStack_160,lStack_138,uStack_130);
LAB_10078e6a8:
      FUN_100e077ec(&uStack_100);
LAB_10078e6b0:
      pcVar13 = uStack_160;
      lVar14 = lStack_a8;
      lStack_a8 = lStack_88;
    }
    else {
      if ((byte)uStack_100 != 0xe) {
        if ((byte)uStack_100 != 0xf) goto LAB_10078e7b4;
        FUN_100b39928(&uStack_160,lStack_138,uStack_130);
        goto LAB_10078e6a8;
      }
      FUN_100b39928(&uStack_160,uStack_130,lStack_128);
LAB_10078e4a0:
      if (lVar14 == 0) goto LAB_10078e6b0;
      _free(uVar12);
      pcVar13 = uStack_160;
      lVar14 = lStack_a8;
      lStack_a8 = lStack_88;
    }
    bVar4 = (char)uStack_160 == '\x01';
    uStack_160 = pcVar13;
    lStack_88 = lStack_a8;
    if (bVar4) goto LAB_10078e6bc;
    uStack_160._1_1_ = (byte)((ulong)pcVar13 >> 8);
    bVar5 = uStack_160._1_1_;
    uStack_b0 = (undefined1)uStack_90;
    uStack_af = (undefined7)((ulong)uStack_90 >> 8);
    bStack_b8 = (byte)uStack_98;
    uStack_b7 = (undefined7)((ulong)uStack_98 >> 8);
    cStack_c0 = (char)uStack_a0;
    uStack_bf = (undefined7)((ulong)uStack_a0 >> 8);
    uVar1 = (uint)uStack_a0 & 0xff;
    if (1 < uStack_160._1_1_) {
      if (uStack_160._1_1_ == 2) {
        if (uVar1 != 0x16) {
          if ((uVar1 != 0x12) && ((uVar1 != 0x15 || (lStack_a8 != 0)))) {
            pcVar13 = (char *)thunk_FUN_108855b04(&cStack_c0,&uStack_71,&UNK_10b20a5c0);
            goto LAB_10078e6d4;
          }
LAB_10078e614:
          FUN_100e077ec(&cStack_c0);
        }
      }
      else if (uVar1 != 0x16) {
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_a8 == 0)))) goto LAB_10078e614;
        pcVar13 = (char *)thunk_FUN_108855b04(&cStack_c0,&uStack_71,&UNK_10b20a5c0);
        goto LAB_10078e6d4;
      }
LAB_10078e61c:
      puVar8[1] = bVar5;
      *puVar8 = 0;
      bVar4 = (bool)(bVar16 ^ 1);
      if (cVar3 == '\x15') {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
      goto LAB_10078e6f0;
    }
    if (uStack_160._1_1_ == 0) {
      if (uVar1 == 0x16) goto LAB_10078e61c;
      if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_a8 == 0)))) goto LAB_10078e614;
      pcVar13 = (char *)thunk_FUN_108855b04(&cStack_c0,&uStack_71,&UNK_10b20a5c0);
    }
    else {
      if (uVar1 == 0x16) goto LAB_10078e61c;
      if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_a8 == 0)))) goto LAB_10078e614;
      pcVar13 = (char *)thunk_FUN_108855b04(&cStack_c0,&uStack_71,&UNK_10b20a5c0);
    }
  }
LAB_10078e6d4:
  *(char **)(puVar8 + 8) = pcVar13;
  *puVar8 = 1;
  bVar4 = (bool)(bVar16 ^ 1);
  if (cVar3 == '\x15') {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
LAB_10078e6f0:
  FUN_100e077ec(pcVar9);
  return;
}

