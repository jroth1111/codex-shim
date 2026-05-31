
/* WARNING: Removing unreachable block (ram,0x000101439944) */
/* WARNING: Removing unreachable block (ram,0x00010143999c) */

void FUN_101439718(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  byte *pbVar9;
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
  undefined4 uStack_78;
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
    pbVar9 = (byte *)0x0;
joined_r0x0001014397c8:
    if (bVar1 < 0xd) {
      if (bVar1 == 1) {
        uVar6 = (ulong)param_2[1];
        if (2 < param_2[1]) {
LAB_1014399a0:
          lStack_e0 = CONCAT71(lStack_e0._1_7_,1);
          uStack_d8 = uVar6;
          FUN_1087e3ee8(&uStack_80,&lStack_e0,&UNK_10b229e80,&UNK_10b20a590);
          goto LAB_10143982c;
        }
LAB_1014398b4:
        iVar4 = (int)uVar6;
      }
      else {
        if (bVar1 != 4) {
          if (bVar1 != 0xc) {
LAB_101439b10:
            FUN_108855bf0(&uStack_80,param_2,&uStack_21,&UNK_10b214a88);
            goto LAB_10143982c;
          }
          piVar8 = *(int **)(param_2 + 0x10);
          lVar3 = *(long *)(param_2 + 0x18);
          if (lVar3 == 4) goto LAB_101439948;
          if (lVar3 == 6) goto LAB_10143991c;
          if ((lVar3 != 7) || (*piVar8 != 0x72707061 || *(int *)((long)piVar8 + 3) != 0x65766f72))
          goto LAB_1014399d0;
          uVar6 = 2;
          goto LAB_1014398b4;
        }
        uVar6 = *(ulong *)(param_2 + 8);
        if (2 < uVar6) goto LAB_1014399a0;
        iVar4 = (int)uVar6;
      }
      iVar5 = (int)uVar6;
      if (iVar4 != 0) goto LAB_1014398b8;
LAB_101439800:
      if (((pbVar9 == (byte *)0x0) || (*pbVar9 == 0x12)) ||
         (FUN_108855bf0(&uStack_80,pbVar9,&uStack_21,&UNK_10b20a5c0),
         CONCAT71(uStack_7f,uStack_80) == 2)) {
        uStack_d8._0_1_ = 0;
        goto LAB_1014398ec;
      }
    }
    else {
      if (bVar1 != 0xd) {
        if (bVar1 == 0xe) {
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          uVar2 = *(undefined8 *)(param_2 + 0x18);
        }
        else {
          if (bVar1 != 0xf) goto LAB_101439b10;
          uVar7 = *(undefined8 *)(param_2 + 8);
          uVar2 = *(undefined8 *)(param_2 + 0x10);
        }
        func_0x000100ae33c4(&uStack_80,uVar7,uVar2);
LAB_10143982c:
        uVar6 = (ulong)(byte)uStack_78;
        if (CONCAT71(uStack_7f,uStack_80) != 2) {
          lStack_c0 = lStack_60;
          lStack_c8 = lStack_68;
          lStack_b0 = lStack_50;
          lStack_b8 = lStack_58;
          lStack_a0 = lStack_40;
          lStack_a8 = lStack_48;
          lStack_90 = lStack_30;
          lStack_98 = lStack_38;
          uStack_d8 = CONCAT71((int7)(CONCAT44(uStack_74,uStack_78) >> 8),(byte)uStack_78);
          lStack_d0 = lStack_70;
          lStack_e0 = CONCAT71(uStack_7f,uStack_80);
          goto LAB_101439884;
        }
        goto LAB_1014398b4;
      }
      piVar8 = *(int **)(param_2 + 8);
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 4) {
LAB_101439948:
        if (*piVar8 != 0x6f747561) goto LAB_1014399d0;
        goto LAB_101439800;
      }
      if (lVar3 == 6) {
LAB_10143991c:
        if (*piVar8 != 0x6d6f7270 || (short)piVar8[1] != 0x7470) {
LAB_1014399d0:
          FUN_1087e44e4(&uStack_80,piVar8,lVar3,&UNK_10b220e48,3);
          goto LAB_10143982c;
        }
        iVar5 = 1;
      }
      else {
        if ((lVar3 != 7) || (*piVar8 != 0x72707061 || *(int *)((long)piVar8 + 3) != 0x65766f72))
        goto LAB_1014399d0;
        iVar5 = 2;
      }
LAB_1014398b8:
      if (iVar5 == 1) {
        if (((pbVar9 == (byte *)0x0) || (*pbVar9 == 0x12)) ||
           (FUN_108855bf0(&uStack_80,pbVar9,&uStack_21,&UNK_10b20a5c0),
           CONCAT71(uStack_7f,uStack_80) == 2)) {
          uStack_d8._0_1_ = 1;
          goto LAB_1014398ec;
        }
      }
      else if (((pbVar9 == (byte *)0x0) || (*pbVar9 == 0x12)) ||
              (FUN_108855bf0(&uStack_80,pbVar9,&uStack_21,&UNK_10b20a5c0),
              CONCAT71(uStack_7f,uStack_80) == 2)) {
        uStack_d8._0_1_ = 2;
        goto LAB_1014398ec;
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
      pbVar9 = param_2 + 0x20;
      bVar1 = *param_2;
      goto joined_r0x0001014397c8;
    }
    uStack_80 = 0xb;
    FUN_1087e3ee8(&lStack_e0,&uStack_80,&UNK_10b20a580,&UNK_10b20a590);
  }
  else {
    FUN_1088556a8(&uStack_80);
    FUN_1087e3db0(&lStack_e0,&uStack_80,&UNK_10b20a5b0,&UNK_10b20a590);
  }
  if (lStack_e0 != 2) {
LAB_101439884:
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
LAB_1014398ec:
  *(undefined1 *)(param_1 + 1) = (undefined1)uStack_d8;
  *param_1 = 2;
  return;
}

