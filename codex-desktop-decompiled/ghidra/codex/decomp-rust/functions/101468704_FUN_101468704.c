
void FUN_101468704(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  byte *pbVar7;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  uint uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_21;
  
  bVar1 = *param_2;
  if (bVar1 - 0xc < 2) {
    pbVar7 = (byte *)0x0;
joined_r0x0001014687bc:
    if (bVar1 < 0xd) {
      if (bVar1 == 1) {
        bVar1 = param_2[1];
        uVar4 = (ulong)bVar1;
        if (bVar1 != 0) {
          if (bVar1 != 1) {
LAB_101468894:
            lStack_e0 = CONCAT71(lStack_e0._1_7_,1);
            uStack_d8 = uVar4;
            FUN_1087e3ee8(&uStack_80,&lStack_e0,&UNK_10b2242c0,&UNK_10b20a590);
            goto LAB_101468804;
          }
          goto LAB_101468900;
        }
      }
      else {
        if (bVar1 != 4) {
          if (bVar1 == 0xc) {
            piVar6 = *(int **)(param_2 + 0x10);
            lVar3 = *(long *)(param_2 + 0x18);
            if (lVar3 != 7) goto LAB_1014688e4;
            goto LAB_101468758;
          }
LAB_101468a00:
          FUN_108855bf0(&uStack_80,param_2,&uStack_21,&UNK_10b214ec8);
          goto LAB_101468804;
        }
        uVar4 = *(ulong *)(param_2 + 8);
        if (uVar4 != 0) {
          if (uVar4 != 1) goto LAB_101468894;
          goto LAB_101468900;
        }
      }
LAB_1014688c0:
      if (((pbVar7 == (byte *)0x0) || (*pbVar7 == 0x12)) ||
         (FUN_108855bf0(&uStack_80,pbVar7,&uStack_21,&UNK_10b20a5c0),
         CONCAT71(uStack_7f,uStack_80) == 2)) {
        uStack_d8._0_1_ = 0;
        goto LAB_101468914;
      }
    }
    else {
      if (bVar1 == 0xd) {
        piVar6 = *(int **)(param_2 + 8);
        lVar3 = *(long *)(param_2 + 0x10);
        if (lVar3 == 7) {
LAB_101468758:
          if (*piVar6 == 0x696d696c && *(int *)((long)piVar6 + 3) == 0x64657469) goto LAB_1014688c0;
        }
        else {
LAB_1014688e4:
          if ((lVar3 == 4) && (*piVar6 == 0x6c6c7566)) goto LAB_101468900;
        }
        FUN_1087e44e4(&uStack_80,piVar6,lVar3,&UNK_10b221f78,2);
      }
      else {
        if (bVar1 == 0xe) {
          uVar5 = *(undefined8 *)(param_2 + 0x10);
          uVar2 = *(undefined8 *)(param_2 + 0x18);
        }
        else {
          if (bVar1 != 0xf) goto LAB_101468a00;
          uVar5 = *(undefined8 *)(param_2 + 8);
          uVar2 = *(undefined8 *)(param_2 + 0x10);
        }
        func_0x000100b20d24(&uStack_80,uVar5,uVar2);
      }
LAB_101468804:
      if (CONCAT71(uStack_7f,uStack_80) != 2) {
        lStack_c0 = lStack_60;
        lStack_c8 = lStack_68;
        lStack_b0 = lStack_50;
        lStack_b8 = lStack_58;
        lStack_a0 = lStack_40;
        lStack_a8 = lStack_48;
        lStack_90 = lStack_30;
        lStack_98 = lStack_38;
        uStack_d8 = CONCAT71((int7)(CONCAT44(uStack_74,uStack_78) >> 8),(undefined1)uStack_78);
        lStack_d0 = lStack_70;
        lStack_e0 = CONCAT71(uStack_7f,uStack_80);
        goto LAB_101468860;
      }
      if ((uStack_78 & 1) == 0) goto LAB_1014688c0;
LAB_101468900:
      if (((pbVar7 == (byte *)0x0) || (*pbVar7 == 0x12)) ||
         (FUN_108855bf0(&uStack_80,pbVar7,&uStack_21,&UNK_10b20a5c0),
         CONCAT71(uStack_7f,uStack_80) == 2)) {
        uStack_d8._0_1_ = 1;
        goto LAB_101468914;
      }
    }
    lStack_b8 = lStack_58;
    lStack_c0 = lStack_60;
    lStack_a8 = lStack_48;
    lStack_b0 = lStack_50;
    lStack_98 = lStack_38;
    lStack_a0 = lStack_40;
    lStack_90 = lStack_30;
    uStack_d8 = CONCAT44(uStack_74,uStack_78);
    lStack_e0 = CONCAT71(uStack_7f,uStack_80);
    lStack_c8 = lStack_68;
    lStack_d0 = lStack_70;
  }
  else if (bVar1 == 0x15) {
    if (*(long *)(param_2 + 0x18) == 1) {
      param_2 = *(byte **)(param_2 + 0x10);
      pbVar7 = param_2 + 0x20;
      bVar1 = *param_2;
      goto joined_r0x0001014687bc;
    }
    uStack_80 = 0xb;
    FUN_1087e3ee8(&lStack_e0,&uStack_80,&UNK_10b20a580,&UNK_10b20a590);
  }
  else {
    FUN_1088556a8(&uStack_80);
    FUN_1087e3db0(&lStack_e0,&uStack_80,&UNK_10b20a5b0,&UNK_10b20a590);
  }
  if (lStack_e0 != 2) {
LAB_101468860:
    param_1[5] = lStack_b8;
    param_1[4] = lStack_c0;
    param_1[7] = lStack_a8;
    param_1[6] = lStack_b0;
    param_1[9] = lStack_98;
    param_1[8] = lStack_a0;
    param_1[10] = lStack_90;
    param_1[1] = uStack_d8;
    *param_1 = lStack_e0;
    param_1[3] = lStack_c8;
    param_1[2] = lStack_d0;
    return;
  }
LAB_101468914:
  *(undefined1 *)(param_1 + 1) = (undefined1)uStack_d8;
  *param_1 = 2;
  return;
}

