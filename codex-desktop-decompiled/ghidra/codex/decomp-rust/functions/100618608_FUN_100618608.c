
void FUN_100618608(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int aiStack_60 [2];
  long lStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  bVar1 = *param_2;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      uVar10 = *(undefined8 *)(param_2 + 8);
      param_1[2] = *(undefined8 *)(param_2 + 0x10);
      param_1[1] = uVar10;
      param_1[3] = *(undefined8 *)(param_2 + 0x18);
LAB_100618744:
      *param_1 = 2;
      return;
    }
    if (bVar1 != 0xd) {
LAB_100618760:
      func_0x000107c058c8(param_1,param_2,&uStack_41,&UNK_10b20a5e0);
      return;
    }
    lVar9 = *(undefined8 *)(param_2 + 8);
    lVar4 = *(long *)(param_2 + 0x10);
joined_r0x0001006186a0:
    if (lVar4 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(lVar4);
      if (lVar3 == 0) {
        FUN_107c03c64(1,lVar4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10061866c);
        (*pcVar2)();
      }
    }
    _memcpy(lVar3,lVar9,lVar4);
    param_1[2] = lVar3;
    param_1[3] = lVar4;
    *param_1 = 2;
    param_1[1] = lVar4;
  }
  else {
    if (bVar1 == 0xe) {
      lVar3 = *(long *)(param_2 + 8);
      lVar9 = *(long *)(param_2 + 0x10);
      lVar6 = *(long *)(param_2 + 0x18);
      func_0x0001055bf348(&uStack_b8,lVar9,lVar6);
      lVar4 = lVar6;
      lVar7 = lVar9;
      lVar8 = lVar3;
      if (((uStack_b8 & 1) != 0) &&
         (lVar4 = lStack_b0, lVar7 = lVar6, lVar8 = lVar9, lVar3 != -0x8000000000000000)) {
        aiStack_60[0] = CONCAT31(aiStack_60[0]._1_3_,6);
        lStack_58 = lVar9;
        lStack_50 = lVar6;
        thunk_FUN_1087e3ee8(&uStack_b8,aiStack_60,&uStack_41,&UNK_10b20a5e0);
        param_1[5] = uStack_90;
        param_1[4] = uStack_98;
        param_1[7] = uStack_80;
        param_1[6] = uStack_88;
        param_1[9] = uStack_70;
        param_1[8] = uStack_78;
        param_1[10] = uStack_68;
        param_1[1] = lStack_b0;
        *param_1 = CONCAT44(uStack_b4,uStack_b8);
        param_1[3] = uStack_a0;
        param_1[2] = uStack_a8;
        if (lVar3 == 0) {
          return;
        }
        _free(lVar9);
        return;
      }
      param_1[2] = lVar7;
      param_1[3] = lVar4;
      param_1[1] = lVar8;
      goto LAB_100618744;
    }
    if (bVar1 != 0xf) goto LAB_100618760;
    lVar3 = *(long *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    func_0x0001055bf348(aiStack_60,lVar3,uVar10);
    lVar9 = lStack_58;
    lVar4 = lStack_50;
    if (aiStack_60[0] != 1) goto joined_r0x0001006186a0;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,6);
    lStack_b0 = lVar3;
    uStack_a8 = uVar10;
    thunk_FUN_1087e3ee8(param_1,&uStack_b8,&uStack_41,&UNK_10b20a5e0);
  }
  bVar1 = *param_2;
  uVar5 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar5 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      lVar3 = *(long *)(param_2 + 0x10);
      goto LAB_100e078f8;
    }
LAB_100e078c0:
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = lVar3;
    for (lVar9 = *(long *)(param_2 + 0x18); lVar9 != 0; lVar9 = lVar9 + -1) {
      FUN_100e077ec(lVar4);
      FUN_100e077ec(lVar4 + 0x20);
      lVar4 = lVar4 + 0x40;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar5 - 0xf < 2 || uVar5 == 0xd) {
        return;
      }
      if (uVar5 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar5 < 0x13) {
      if (uVar5 == 0x11) {
        lVar3 = *(long *)(param_2 + 8);
        FUN_100e077ec(lVar3);
        goto LAB_100e078f8;
      }
      if (uVar5 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar5 == 0x13) {
      lVar3 = *(long *)(param_2 + 8);
      FUN_100e077ec(lVar3);
      goto LAB_100e078f8;
    }
    if (uVar5 != 0x14) goto LAB_100e078c0;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18) + 1;
    lVar4 = lVar3;
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
      FUN_100e077ec(lVar4);
      lVar4 = lVar4 + 0x20;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
LAB_100e078f8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

