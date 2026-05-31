
void FUN_100b2b108(undefined1 *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 unaff_x23;
  long lVar6;
  undefined8 uVar7;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  lVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  lVar4 = param_2[2];
  lVar6 = param_2[3];
  if (lVar4 == 7) {
    if (*piVar2 == 0x74616863 && *(int *)((long)piVar2 + 3) == 0x74706774) {
      uVar7 = 0;
      bVar3 = false;
    }
    else {
LAB_100b2b16c:
      unaff_x23 = FUN_1087e4494(piVar2,lVar4,&UNK_10b2222f8,2);
      uVar7 = 0;
      bVar3 = true;
    }
  }
  else {
    if ((lVar4 != 3) || ((short)*piVar2 != 0x7061 || *(char *)((long)piVar2 + 2) != 'i'))
    goto LAB_100b2b16c;
    bVar3 = false;
    uVar7 = 1;
  }
  if (lVar1 != 0) {
    _free(piVar2);
  }
  if (bVar3) {
    uVar7 = unaff_x23;
    if (lVar6 != -0x7ffffffffffffffb) {
      FUN_100de6690(param_2 + 3);
    }
  }
  else if (lVar6 != -0x7ffffffffffffffa) {
    lStack_a0 = param_2[5];
    lStack_a8 = param_2[4];
    lStack_90 = param_2[7];
    lStack_98 = param_2[6];
    lStack_80 = param_2[9];
    lStack_88 = param_2[8];
    lStack_70 = param_2[0xb];
    lStack_78 = param_2[10];
    if (lVar6 != -0x7ffffffffffffffb) {
      lStack_b0 = lVar6;
      if (lVar6 != -0x8000000000000000) {
        uVar7 = FUN_108a4a234(&lStack_b0,&uStack_61);
        FUN_105dc6c20(&lStack_b0);
        goto LAB_100b2b1fc;
      }
      FUN_105dc6c20(&lStack_b0);
    }
    uVar5 = 0;
    param_1[1] = (char)uVar7;
    goto LAB_100b2b248;
  }
LAB_100b2b1fc:
  *(undefined8 *)(param_1 + 8) = uVar7;
  uVar5 = 1;
LAB_100b2b248:
  *param_1 = uVar5;
  return;
}

