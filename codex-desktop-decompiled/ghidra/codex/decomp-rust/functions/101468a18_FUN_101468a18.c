
/* WARNING: Removing unreachable block (ram,0x000101468f60) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101468a18(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 uVar8;
  long lVar9;
  int *piVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined8 uStack_140;
  int *piStack_138;
  undefined8 uStack_130;
  int *piStack_128;
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
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_51;
  
  uVar12 = SUB81(&uStack_e0,0);
  cVar3 = *param_2;
  if ((cVar3 == '\f') || (cVar3 == '\r')) {
    bVar11 = 0;
    piStack_118 = *(int **)(param_2 + 8);
    uStack_120 = *(undefined8 *)param_2;
    lStack_108 = *(long *)(param_2 + 0x18);
    piStack_110 = *(int **)(param_2 + 0x10);
    piVar10 = (int *)0x16;
LAB_101468b0c:
    piVar7 = piStack_110;
    piVar5 = piStack_118;
    piStack_d8 = piStack_118;
    uStack_e0 = uStack_120;
    uVar6 = uStack_e0;
    lStack_c8 = lStack_108;
    piStack_d0 = piStack_110;
    uStack_c0 = SUB81(piVar10,0);
    uStack_b7 = uStack_f8;
    uStack_bf = (undefined7)uStack_100;
    uStack_b8 = (undefined1)((ulong)uStack_100 >> 0x38);
    lStack_a8 = lStack_e9;
    uStack_b0 = uStack_f1;
    uStack_af = uStack_f0;
    uStack_78 = CONCAT71(uStack_f8,uStack_b8);
    uStack_80 = CONCAT71(uStack_bf,uStack_c0);
    uStack_70 = CONCAT71(uStack_f0,uStack_f1);
    lStack_68 = lStack_e9;
    uStack_e0._0_1_ = (byte)uStack_120;
    uStack_e0 = uVar6;
    if ((byte)uStack_e0 < 0xd) {
      if ((byte)uStack_e0 == 1) {
        uStack_e0._1_1_ = (char)((ulong)uStack_120 >> 8);
        if (uStack_e0._1_1_ != '\0') {
          if (uStack_e0._1_1_ != '\x01') {
            cStack_98 = uStack_e0._1_1_;
            uStack_97 = 0;
            cStack_a0 = '\x01';
            piStack_138 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                           (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
            goto LAB_101468c94;
          }
LAB_101468d18:
          uStack_140 = (int *)CONCAT62(uStack_140._2_6_,0x100);
          goto LAB_101468e7c;
        }
LAB_101468e74:
        uVar8 = 0;
        uStack_140 = (int *)((ulong)uStack_140._2_6_ << 0x10);
LAB_101468e78:
        uStack_140 = (int *)CONCAT71(uStack_140._1_7_,uVar8);
        goto LAB_101468e7c;
      }
      if ((byte)uStack_e0 == 4) {
        if (piStack_118 != (int *)0x0) {
          if (piStack_118 == (int *)0x1) goto LAB_101468d18;
          cStack_98 = (char)piStack_118;
          uStack_97 = (undefined7)((ulong)piStack_118 >> 8);
          cStack_a0 = '\x01';
          piStack_138 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                         (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_101468c94;
        }
        goto LAB_101468e74;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 3) {
          if ((short)*piStack_110 != 0x7361 || *(char *)((long)piStack_110 + 2) != 'c')
          goto LAB_101468b80;
          uStack_140 = (int *)((ulong)uStack_140._2_6_ << 0x10);
        }
        else if ((lStack_108 == 4) && (*piStack_110 == 0x63736564)) {
          uStack_140 = (int *)CONCAT62(uStack_140._2_6_,0x100);
        }
        else {
LAB_101468b80:
          piStack_138 = (int *)FUN_1087e4494(piStack_110,lStack_108,&UNK_10b231b08,2);
          uStack_140 = (int *)CONCAT71(uStack_140._1_7_,1);
        }
joined_r0x000101468d8c:
        piVar10 = piVar7;
        if (piVar5 == (int *)0x0) goto LAB_101468e84;
        _free(piVar7);
        piVar10 = uStack_140;
        lVar9 = lStack_88;
        lStack_88 = lStack_68;
        goto joined_r0x000101468e8c;
      }
LAB_101468f34:
      piStack_138 = (int *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b20f940);
      uStack_140 = (int *)CONCAT71(uStack_140._1_7_,1);
      lVar9 = lStack_88;
LAB_101468e90:
      lStack_88 = lVar9;
      piVar7 = piStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      uVar8 = bVar11 ^ 1;
      if (cVar3 == '\x15') {
        uVar8 = true;
      }
joined_r0x000101468fa4:
      bVar4 = true;
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (piStack_110 == (int *)0x3) {
          if ((short)*piStack_118 == 0x7361 && *(char *)((long)piStack_118 + 2) == 'c')
          goto LAB_101468e74;
        }
        else if ((piStack_110 == (int *)0x4) && (*piStack_118 == 0x63736564)) goto LAB_101468d18;
        piStack_138 = (int *)FUN_1087e4494(piStack_118,piStack_110,&UNK_10b231b08,2);
LAB_101468c94:
        uVar8 = 1;
        goto LAB_101468e78;
      }
      if ((byte)uStack_e0 == 0xe) {
        func_0x000100ba9b3c(&uStack_140,piStack_110,lStack_108);
        goto joined_r0x000101468d8c;
      }
      if ((byte)uStack_e0 != 0xf) goto LAB_101468f34;
      func_0x000100ba9b3c(&uStack_140,piStack_118,piStack_110);
LAB_101468e7c:
      FUN_100e077ec(&uStack_e0);
LAB_101468e84:
      piVar7 = piVar10;
      piVar10 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
joined_r0x000101468e8c:
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = piVar10;
      lStack_68 = lStack_88;
      if (bVar4) goto LAB_101468e90;
      uStack_140._1_1_ = (char)((ulong)piVar10 >> 8);
      uStack_90 = (undefined1)uStack_70;
      uStack_8f = (undefined7)((ulong)uStack_70 >> 8);
      cStack_98 = (char)uStack_78;
      uStack_97 = (undefined7)((ulong)uStack_78 >> 8);
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
          goto joined_r0x000101468e0c;
        }
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) {
          uVar12 = 1;
          goto LAB_101468e50;
        }
        piVar7 = (int *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_101468f90:
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
        goto joined_r0x000101468fa4;
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
          piVar7 = (int *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_101468f90;
        }
        uVar12 = 0;
LAB_101468e50:
        FUN_100e077ec(&cStack_a0);
        bVar4 = false;
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
      }
    }
joined_r0x000101468e0c:
    if (!(bool)uVar8) {
      FUN_100e077ec(param_2);
    }
    if (!bVar4) {
      uVar8 = 0;
      param_1[1] = uVar12;
      goto LAB_101468edc;
    }
  }
  else if (cVar3 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(int **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    piStack_128 = uStack_140 + lVar9 * 0x10;
    piStack_138 = uStack_140;
    if (lVar9 == 0) {
LAB_101468ca0:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      piVar7 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      piVar10 = uStack_140 + 0x10;
      cVar2 = (char)*uStack_140;
      piStack_138 = piVar10;
      if (cVar2 == '\x16') goto LAB_101468ca0;
      uStack_97 = (undefined7)*(undefined8 *)((long)uStack_140 + 9);
      uStack_9f = (undefined7)*(undefined8 *)((long)uStack_140 + 1);
      cStack_98 = (char)((ulong)*(undefined8 *)((long)uStack_140 + 1) >> 0x38);
      lStack_108 = *(long *)(uStack_140 + 6);
      piStack_110 = *(int **)(uStack_140 + 4);
      uStack_78 = *(undefined8 *)(uStack_140 + 10);
      uStack_80 = *(ulong *)(uStack_140 + 8);
      uStack_90 = SUB81(piStack_110,0);
      uStack_8f = (undefined7)((ulong)piStack_110 >> 8);
      lStack_68 = *(long *)(uStack_140 + 0xe);
      uStack_70 = *(undefined8 *)(uStack_140 + 0xc);
      cStack_a0 = cVar2;
      lStack_88 = lStack_108;
      if (lVar9 == 1) {
LAB_101468ad0:
        piStack_118 = (int *)CONCAT71(uStack_97,cStack_98);
        uStack_120 = CONCAT71(uStack_9f,cVar2);
        piVar10 = (int *)(uStack_80 & 0xff);
        uStack_100 = *(undefined8 *)((long)uStack_140 + 0x21);
        uStack_f8 = (undefined7)*(undefined8 *)((long)uStack_140 + 0x29);
        lStack_e9 = *(long *)(uStack_140 + 0xe);
        uStack_f1 = (undefined1)*(undefined8 *)(uStack_140 + 0xc);
        uStack_f0 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0xc) >> 8);
        bVar11 = 1;
        FUN_100d34830(&uStack_140);
        goto LAB_101468b0c;
      }
      piStack_138 = uStack_140 + 0x20;
      piStack_d8 = *(int **)(uStack_140 + 0x12);
      uStack_e0 = *(undefined8 *)piVar10;
      lStack_c8 = *(long *)(uStack_140 + 0x16);
      piStack_d0 = *(int **)(uStack_140 + 0x14);
      lStack_a8 = *(long *)(uStack_140 + 0x1e);
      uStack_b8 = (undefined1)*(undefined8 *)(uStack_140 + 0x1a);
      uStack_b7 = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x1a) >> 8);
      uStack_c0 = (undefined1)*(undefined8 *)(uStack_140 + 0x18);
      uStack_bf = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x18) >> 8);
      uStack_b0 = (undefined1)*(undefined8 *)(uStack_140 + 0x1c);
      uStack_af = (undefined7)((ulong)*(undefined8 *)(uStack_140 + 0x1c) >> 8);
      if ((byte)uStack_e0 == '\x16') goto LAB_101468ad0;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      piVar7 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    piVar7 = (int *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(int **)(param_1 + 8) = piVar7;
  uVar8 = 1;
LAB_101468edc:
  *param_1 = uVar8;
  return;
}

