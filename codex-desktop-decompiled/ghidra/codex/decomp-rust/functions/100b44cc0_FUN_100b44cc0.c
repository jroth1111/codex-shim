
void FUN_100b44cc0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
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
  plVar2 = (long *)param_2[1];
  lVar4 = param_2[2];
  lVar6 = param_2[3];
  if (lVar4 == 5) {
    if ((int)*plVar2 == 0x61746f74 && *(char *)((long)plVar2 + 4) == 'l') {
      uVar7 = 0;
      bVar3 = false;
    }
    else {
LAB_100b44d20:
      unaff_x23 = FUN_1087e4494(plVar2,lVar4,&UNK_10b222398,2);
      uVar7 = 0;
      bVar3 = true;
    }
  }
  else {
    if ((lVar4 != 0x11) ||
       ((*plVar2 != 0x7466615f79646f62 || plVar2[1] != 0x69666572705f7265) || (char)plVar2[2] != 'x'
       )) goto LAB_100b44d20;
    bVar3 = false;
    uVar7 = 1;
  }
  if (lVar1 != 0) {
    _free(plVar2);
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
        goto LAB_100b44dd0;
      }
      FUN_105dc6c20(&lStack_b0);
    }
    uVar5 = 0;
    param_1[1] = (char)uVar7;
    goto LAB_100b44e1c;
  }
LAB_100b44dd0:
  *(undefined8 *)(param_1 + 8) = uVar7;
  uVar5 = 1;
LAB_100b44e1c:
  *param_1 = uVar5;
  return;
}

