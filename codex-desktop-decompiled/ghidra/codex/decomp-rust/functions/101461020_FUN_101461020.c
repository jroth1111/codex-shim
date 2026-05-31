
/* WARNING: Removing unreachable block (ram,0x000101461590) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101461020(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
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
LAB_101461114:
    piVar6 = piStack_110;
    piVar5 = piStack_118;
    piStack_d8 = piStack_118;
    uStack_e0 = uStack_120;
    uVar7 = uStack_e0;
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
    uStack_e0 = uVar7;
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
            goto LAB_1014612ac;
          }
LAB_101461348:
          uStack_140 = (int *)CONCAT62(uStack_140._2_6_,0x100);
          goto LAB_1014614ac;
        }
LAB_1014614a4:
        uVar8 = 0;
        uStack_140 = (int *)((ulong)uStack_140._2_6_ << 0x10);
LAB_1014614a8:
        uStack_140 = (int *)CONCAT71(uStack_140._1_7_,uVar8);
        goto LAB_1014614ac;
      }
      if ((byte)uStack_e0 == 4) {
        if (piStack_118 != (int *)0x0) {
          if (piStack_118 == (int *)0x1) goto LAB_101461348;
          cStack_98 = (char)piStack_118;
          uStack_97 = (undefined7)((ulong)piStack_118 >> 8);
          cStack_a0 = '\x01';
          piStack_138 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                         (&cStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_1014612ac;
        }
        goto LAB_1014614a4;
      }
      if ((byte)uStack_e0 == 0xc) {
        if (lStack_108 == 7) {
          if (*piStack_110 == 0x72617473 && *(int *)((long)piStack_110 + 3) == 0x70757472) {
            uStack_140 = (int *)((ulong)uStack_140._2_6_ << 0x10);
          }
          else {
LAB_101461190:
            piStack_138 = (int *)FUN_1087e4494(piStack_110,lStack_108,&UNK_10b232098,2);
            uStack_140 = (int *)CONCAT71(uStack_140._1_7_,1);
          }
        }
        else {
          if ((lStack_108 != 5) || (*piStack_110 != 0x61656c63 || (char)piStack_110[1] != 'r'))
          goto LAB_101461190;
          uStack_140 = (int *)CONCAT62(uStack_140._2_6_,0x100);
        }
joined_r0x0001014613bc:
        piVar10 = piVar6;
        if (piVar5 == (int *)0x0) goto LAB_1014614b4;
        _free(piVar6);
        piVar5 = uStack_140;
        lVar9 = lStack_88;
        lStack_88 = lStack_68;
        goto joined_r0x0001014613d0;
      }
LAB_101461564:
      piStack_138 = (int *)FUN_108855b04(&uStack_e0,&uStack_51,&UNK_10b212120);
      uStack_140 = (int *)CONCAT71(uStack_140._1_7_,1);
      lVar9 = lStack_88;
LAB_1014614c0:
      lStack_88 = lVar9;
      piVar10 = piStack_138;
      if ((char)uStack_80 != '\x16') {
        FUN_100e077ec(&uStack_80);
      }
      uVar8 = bVar11 ^ 1;
      if (cVar3 == '\x15') {
        uVar8 = true;
      }
joined_r0x0001014615d4:
      bVar4 = true;
    }
    else {
      if ((byte)uStack_e0 == 0xd) {
        if (piStack_110 == (int *)0x7) {
          if (*piStack_118 == 0x72617473 && *(int *)((long)piStack_118 + 3) == 0x70757472)
          goto LAB_1014614a4;
        }
        else if ((piStack_110 == (int *)0x5) &&
                (*piStack_118 == 0x61656c63 && (char)piStack_118[1] == 'r')) goto LAB_101461348;
        piStack_138 = (int *)FUN_1087e4494(piStack_118,piStack_110,&UNK_10b232098,2);
LAB_1014612ac:
        uVar8 = 1;
        goto LAB_1014614a8;
      }
      if ((byte)uStack_e0 == 0xe) {
        FUN_100baf188(&uStack_140,piStack_110,lStack_108);
        goto joined_r0x0001014613bc;
      }
      if ((byte)uStack_e0 != 0xf) goto LAB_101461564;
      FUN_100baf188(&uStack_140,piStack_118,piStack_110);
LAB_1014614ac:
      FUN_100e077ec(&uStack_e0);
LAB_1014614b4:
      piVar5 = uStack_140;
      lVar9 = lStack_88;
      lStack_88 = lStack_68;
joined_r0x0001014613d0:
      bVar4 = (char)uStack_140 == '\x01';
      uStack_140 = piVar5;
      lStack_68 = lStack_88;
      if (bVar4) goto LAB_1014614c0;
      uStack_140._1_1_ = (char)((ulong)piVar5 >> 8);
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
          goto joined_r0x00010146143c;
        }
        if ((uVar1 == 0x12) || ((uVar1 == 0x15 && (lStack_88 == 0)))) {
          uVar12 = 1;
          goto LAB_101461480;
        }
        piVar10 = (int *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
LAB_1014615c0:
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
        goto joined_r0x0001014615d4;
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
          piVar10 = (int *)FUN_108855b04(&cStack_a0,&uStack_51,&UNK_10b20a5c0);
          goto LAB_1014615c0;
        }
        uVar12 = 0;
LAB_101461480:
        FUN_100e077ec(&cStack_a0);
        bVar4 = false;
        uVar8 = bVar11 ^ 1;
        if (cVar3 == '\x15') {
          uVar8 = true;
        }
      }
    }
joined_r0x00010146143c:
    if (!(bool)uVar8) {
      FUN_100e077ec(param_2);
    }
    if (!bVar4) {
      uVar8 = 0;
      param_1[1] = uVar12;
      goto LAB_10146150c;
    }
  }
  else if (cVar3 == '\x15') {
    uStack_130 = *(undefined8 *)(param_2 + 8);
    uStack_140 = *(int **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    piStack_128 = uStack_140 + lVar9 * 0x10;
    piStack_138 = uStack_140;
    if (lVar9 == 0) {
LAB_1014612b8:
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      piVar10 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      piVar10 = uStack_140 + 0x10;
      cVar2 = (char)*uStack_140;
      piStack_138 = piVar10;
      if (cVar2 == '\x16') goto LAB_1014612b8;
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
LAB_1014610d8:
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
        goto LAB_101461114;
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
      if ((byte)uStack_e0 == '\x16') goto LAB_1014610d8;
      FUN_100e077ec(&uStack_e0);
      FUN_100e077ec(&uStack_c0);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,0xb);
      piVar10 = (int *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_e0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_80);
      FUN_100e077ec(&cStack_a0);
    }
    FUN_100d34830(&uStack_140);
  }
  else {
    FUN_1088556a8(&uStack_e0,param_2);
    piVar10 = (int *)func_0x000108a4a50c(&uStack_e0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(int **)(param_1 + 8) = piVar10;
  uVar8 = 1;
LAB_10146150c:
  *param_1 = uVar8;
  return;
}

