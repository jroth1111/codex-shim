
void FUN_1014422e8(undefined1 *param_1,ulong *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined1 uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  char cVar10;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  char cStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  ulong uStack_118;
  ulong uStack_110;
  int *piStack_108;
  int *piStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  ulong uStack_d9;
  ulong uStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  ulong uStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  ulong uStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  cVar2 = (char)*param_2;
  if ((cVar2 == '\f') || (cVar2 == '\r')) {
    bVar9 = 0;
    piStack_108 = (int *)param_2[1];
    uStack_110 = *param_2;
    uStack_f8 = param_2[3];
    piStack_100 = (int *)param_2[2];
    cVar10 = '\x16';
LAB_1014423dc:
    piVar3 = piStack_100;
    piVar5 = piStack_108;
    piStack_c8 = piStack_108;
    uStack_d0 = uStack_110;
    uVar7 = uStack_d0;
    uStack_b8 = uStack_f8;
    piStack_c0 = piStack_100;
    uStack_a7 = uStack_e8;
    uStack_af = (undefined7)uStack_f0;
    uStack_a8 = (undefined1)(uStack_f0 >> 0x38);
    uStack_98 = uStack_d9;
    uStack_a0 = uStack_e1;
    uStack_9f = uStack_e0;
    uStack_d0._0_1_ = (byte)uStack_110;
    uStack_d0 = uVar7;
    cStack_b0 = cVar10;
    if ((byte)uStack_d0 < 0xd) {
      if ((byte)uStack_d0 == 1) {
        piVar5 = (int *)(uStack_110 >> 8 & 0xff);
        if (piVar5 == (int *)0x0) {
LAB_101442538:
          lVar8 = 0;
        }
        else {
          uStack_90 = CONCAT71(uStack_90._1_7_,1);
          piStack_88 = piVar5;
          lVar8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                            (&uStack_90,&UNK_10b22b418,&UNK_10b20a590);
        }
LAB_10144253c:
        FUN_100e077ec(&uStack_d0);
        goto LAB_101442544;
      }
      if ((byte)uStack_d0 == 4) {
        if (piStack_108 == (int *)0x0) goto LAB_101442538;
        piStack_88 = piStack_108;
        uStack_90 = CONCAT71(uStack_90._1_7_,1);
        lVar8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (&uStack_90,&UNK_10b22b418,&UNK_10b20a590);
        goto LAB_10144253c;
      }
      if ((byte)uStack_d0 == 0xc) {
        if ((uStack_f8 == 5) && (*piStack_100 == 0x6e656761 && (char)piStack_100[1] == 't')) {
          lVar8 = 0;
          uStack_d0 = uStack_110;
        }
        else {
          lVar8 = FUN_1087e4494(piStack_100,uStack_f8,&UNK_10b223188,1);
        }
        goto joined_r0x0001014424cc;
      }
LAB_1014426f8:
      lVar8 = FUN_108855b04(&uStack_d0,&cStack_130,&UNK_10b210aa0);
      piStack_88 = (int *)CONCAT71(uStack_a7,uStack_a8);
      uStack_90 = CONCAT71(uStack_af,cStack_b0);
      uStack_80 = CONCAT71(uStack_9f,uStack_a0);
joined_r0x000101442558:
      uStack_78 = uStack_98;
      if (cStack_b0 != '\x16') {
        FUN_100e077ec(&uStack_90);
      }
    }
    else {
      if ((byte)uStack_d0 == 0xd) {
        if ((piStack_100 == (int *)0x5) &&
           (*piStack_108 == 0x6e656761 && (char)piStack_108[1] == 't')) goto LAB_101442538;
        lVar8 = FUN_1087e4494(piStack_108,piStack_100,&UNK_10b223188,1);
        goto LAB_10144253c;
      }
      if ((byte)uStack_d0 != 0xe) {
        if ((byte)uStack_d0 != 0xf) goto LAB_1014426f8;
        lVar8 = func_0x000100b4c634(piStack_108,piStack_100);
        goto LAB_10144253c;
      }
      lVar8 = func_0x000100b4c634(piStack_100,uStack_f8);
joined_r0x0001014424cc:
      if (piVar5 != (int *)0x0) {
        _free(piVar3);
      }
LAB_101442544:
      piStack_88 = (int *)CONCAT71(uStack_a7,uStack_a8);
      uStack_90 = CONCAT71(uStack_af,cStack_b0);
      uStack_80 = CONCAT71(uStack_9f,uStack_a0);
      uStack_78 = uStack_98;
      if (lVar8 != 0) goto joined_r0x000101442558;
      lVar8 = CONCAT71(uStack_a7,uStack_a8);
      if (cVar10 != '\x17') {
        uStack_90 = (uStack_f0 & 0xffffffff) << 8;
        uStack_90 = CONCAT44(uStack_f0._3_4_,(undefined4)uStack_90);
        uStack_80 = CONCAT71(uStack_e0,uStack_e1);
        uStack_78 = uStack_d9;
        uStack_90 = CONCAT71(uStack_90._1_7_,cVar10);
        piStack_88 = (int *)lVar8;
        if (cVar10 != '\x16') {
          if ((cVar10 != '\x12') && ((cVar10 != '\x15' || (uStack_d9 != 0)))) {
            lVar8 = FUN_108855b04(&uStack_90,&cStack_130,&UNK_10b20a5c0);
            goto LAB_1014425c0;
          }
          FUN_100e077ec(&uStack_90);
        }
        lVar8 = 0;
      }
    }
LAB_1014425c0:
    bVar1 = (bool)(bVar9 ^ 1);
    if (cVar2 == '\x15') {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_100e077ec(param_2);
    }
    if (lVar8 == 0) {
      uVar4 = 0;
      param_1[1] = 1;
      goto LAB_101442670;
    }
  }
  else if (cVar2 == '\x15') {
    uStack_140 = param_2[1];
    puStack_150 = (ulong *)param_2[2];
    uVar7 = param_2[3];
    puStack_138 = puStack_150 + uVar7 * 8;
    puStack_148 = puStack_150;
    if (uVar7 == 0) {
LAB_1014425ec:
      uStack_d0 = CONCAT71(uStack_d0._1_7_,0xb);
      lVar8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (&uStack_d0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      puVar6 = puStack_150 + 8;
      cVar10 = (char)*puStack_150;
      puStack_148 = puVar6;
      if (cVar10 == '\x16') goto LAB_1014425ec;
      uStack_127 = (undefined7)*(undefined8 *)((long)puStack_150 + 9);
      uStack_12f = (undefined7)*(undefined8 *)((long)puStack_150 + 1);
      uStack_128 = (undefined1)((ulong)*(undefined8 *)((long)puStack_150 + 1) >> 0x38);
      uStack_118 = puStack_150[3];
      piStack_100 = (int *)puStack_150[2];
      piStack_88 = (int *)puStack_150[5];
      uStack_90 = puStack_150[4];
      uStack_120 = SUB81(piStack_100,0);
      uStack_11f = (undefined7)((ulong)piStack_100 >> 8);
      uStack_78 = puStack_150[7];
      uStack_80 = puStack_150[6];
      cStack_130 = cVar10;
      if (uVar7 == 1) {
LAB_1014423a0:
        piStack_108 = (int *)CONCAT71(uStack_127,uStack_128);
        uStack_110 = CONCAT71(uStack_12f,cVar10);
        cVar10 = (char)uStack_90;
        uStack_f0 = *(ulong *)((long)puStack_150 + 0x21);
        uStack_e8 = (undefined7)*(undefined8 *)((long)puStack_150 + 0x29);
        uStack_d9 = puStack_150[7];
        uStack_e1 = (undefined1)puStack_150[6];
        uStack_e0 = (undefined7)(puStack_150[6] >> 8);
        bVar9 = 1;
        uStack_f8 = uStack_118;
        FUN_100d34830(&puStack_150);
        goto LAB_1014423dc;
      }
      puStack_148 = puStack_150 + 0x10;
      piStack_c8 = (int *)puStack_150[9];
      uStack_d0 = *puVar6;
      uStack_b8 = puStack_150[0xb];
      piStack_c0 = (int *)puStack_150[10];
      uStack_98 = puStack_150[0xf];
      uStack_a8 = (undefined1)puStack_150[0xd];
      uStack_a7 = (undefined7)(puStack_150[0xd] >> 8);
      cStack_b0 = (char)puStack_150[0xc];
      uStack_af = (undefined7)(puStack_150[0xc] >> 8);
      uStack_a0 = (undefined1)puStack_150[0xe];
      uStack_9f = (undefined7)(puStack_150[0xe] >> 8);
      if ((byte)uStack_d0 == '\x16') goto LAB_1014423a0;
      FUN_100e077ec(&uStack_d0);
      FUN_100e077ec(&cStack_b0);
      uStack_d0 = CONCAT71(uStack_d0._1_7_,0xb);
      lVar8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (&uStack_d0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_90);
      FUN_100e077ec(&cStack_130);
    }
    FUN_100d34830(&puStack_150);
  }
  else {
    FUN_1088556a8(&uStack_d0,param_2);
    lVar8 = func_0x000108a4a50c(&uStack_d0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(long *)(param_1 + 8) = lVar8;
  uVar4 = 1;
LAB_101442670:
  *param_1 = uVar4;
  return;
}

