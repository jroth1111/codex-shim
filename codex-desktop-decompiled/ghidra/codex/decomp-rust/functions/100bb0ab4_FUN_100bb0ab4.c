
/* WARNING: Type propagation algorithm not settling */

void FUN_100bb0ab4(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined1 uVar5;
  long unaff_x23;
  long lVar6;
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
  if (lVar4 == 9) {
    if (*plVar2 != 0x6564616f4c746f6e || (char)plVar2[1] != 'd') goto LAB_100bb0b68;
    lVar4 = 0;
    bVar3 = false;
  }
  else {
    if (lVar4 == 0xd) {
      if (*plVar2 == 0x6373627553746f6e && *(long *)((long)plVar2 + 5) == 0x6465626972637362) {
        lVar4 = 1;
joined_r0x000100bb0bcc:
        bVar3 = false;
        goto joined_r0x000100bb0c68;
      }
    }
    else if ((lVar4 == 0xc) && (*plVar2 == 0x7263736275736e75 && (int)plVar2[1] == 0x64656269)) {
      lVar4 = 2;
      goto joined_r0x000100bb0bcc;
    }
LAB_100bb0b68:
    unaff_x23 = FUN_1087e4494(plVar2,lVar4,&UNK_10b232410,3);
    lVar4 = 0;
    bVar3 = true;
  }
joined_r0x000100bb0c68:
  if (lVar1 != 0) {
    _free(plVar2);
  }
  if (bVar3) {
    if (lVar6 != -0x7ffffffffffffffb) {
      FUN_100de6690(param_2 + 3);
    }
  }
  else {
    unaff_x23 = lVar4;
    if (lVar6 != -0x7ffffffffffffffa) {
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
        if (lVar6 == -0x8000000000000000) {
          FUN_105dc6c20(&lStack_b0);
        }
        else {
          unaff_x23 = FUN_108a4a234(&lStack_b0,&uStack_61);
          FUN_105dc6c20(&lStack_b0);
          if (unaff_x23 != 0) goto LAB_100bb0c34;
        }
      }
      uVar5 = 0;
      param_1[1] = (char)lVar4;
      goto LAB_100bb0c3c;
    }
  }
LAB_100bb0c34:
  *(long *)(param_1 + 8) = unaff_x23;
  uVar5 = 1;
LAB_100bb0c3c:
  *param_1 = uVar5;
  return;
}

