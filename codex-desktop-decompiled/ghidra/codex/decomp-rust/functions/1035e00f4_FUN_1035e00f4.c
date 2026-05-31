
void FUN_1035e00f4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar13 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    lVar6 = _malloc(lVar1);
    if (lVar6 != 0) {
      _memcpy(lVar6,lVar13,lVar1);
      uVar12 = *(undefined8 *)(param_2 + 0x20);
      lVar13 = *(long *)(param_2 + 0x28);
      goto joined_r0x0001035e0144;
    }
    func_0x0001087c9084(1,lVar1);
LAB_1035e035c:
    func_0x0001087c9084(1,lVar13);
    goto LAB_1035e0398;
  }
  lVar6 = 1;
  _memcpy(1,lVar13,0);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  lVar13 = *(long *)(param_2 + 0x28);
joined_r0x0001035e0144:
  if (lVar13 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = _malloc(lVar13);
    if (lVar7 == 0) goto LAB_1035e035c;
  }
  _memcpy(lVar7,uVar12,lVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  if (lVar2 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = _malloc(lVar2);
    if (lVar8 == 0) {
      func_0x0001087c9084(1,lVar2);
      goto LAB_1035e0398;
    }
  }
  _memcpy(lVar8,uVar12,lVar2);
  uVar12 = *(undefined8 *)(param_2 + 0x50);
  lVar3 = *(long *)(param_2 + 0x58);
  if (lVar3 == 0) {
    lVar9 = 1;
    _memcpy(1,uVar12,0);
    uVar12 = *(undefined8 *)(param_2 + 0x68);
    lVar14 = *(long *)(param_2 + 0x70);
    if (lVar14 != 0) goto LAB_1035e0208;
LAB_1035e0260:
    lVar10 = 1;
    _memcpy(1,uVar12,lVar14);
    uVar12 = *(undefined8 *)(param_2 + 0x80);
    lVar4 = *(long *)(param_2 + 0x88);
  }
  else {
    lVar9 = _malloc(lVar3);
    if (lVar9 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_1035e0398;
    }
    _memcpy(lVar9,uVar12,lVar3);
    uVar12 = *(undefined8 *)(param_2 + 0x68);
    lVar14 = *(long *)(param_2 + 0x70);
    if (lVar14 == 0) goto LAB_1035e0260;
LAB_1035e0208:
    lVar10 = _malloc(lVar14);
    if (lVar10 == 0) {
      func_0x0001087c9084(1,lVar14);
      goto LAB_1035e0398;
    }
    _memcpy(lVar10,uVar12,lVar14);
    uVar12 = *(undefined8 *)(param_2 + 0x80);
    lVar4 = *(long *)(param_2 + 0x88);
  }
  if (lVar4 == 0) {
    lVar11 = 1;
  }
  else {
    lVar11 = _malloc(lVar4);
    if (lVar11 == 0) {
      func_0x0001087c9084(1,lVar4);
LAB_1035e0398:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1035e039c);
      (*pcVar5)();
    }
  }
  _memcpy(lVar11,uVar12,lVar4);
  func_0x000103630528(&lStack_158,param_2 + 0x90);
  param_1[1] = lVar6;
  *param_1 = lVar1;
  param_1[3] = lVar13;
  param_1[2] = lVar1;
  param_1[5] = lVar13;
  param_1[4] = lVar7;
  param_1[6] = lVar2;
  param_1[7] = lVar8;
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  param_1[10] = lVar9;
  param_1[0xb] = lVar3;
  param_1[0xc] = lVar14;
  param_1[0xd] = lVar10;
  param_1[0xe] = lVar14;
  param_1[0xf] = lVar4;
  param_1[0x10] = lVar11;
  param_1[0x11] = lVar4;
  param_1[0x13] = lStack_150;
  param_1[0x12] = lStack_158;
  param_1[0x15] = lStack_140;
  param_1[0x14] = lStack_148;
  param_1[0x1b] = lStack_110;
  param_1[0x1a] = lStack_118;
  param_1[0x1d] = lStack_100;
  param_1[0x1c] = lStack_108;
  param_1[0x17] = lStack_130;
  param_1[0x16] = lStack_138;
  param_1[0x19] = lStack_120;
  param_1[0x18] = lStack_128;
  param_1[0x23] = lStack_d0;
  param_1[0x22] = lStack_d8;
  param_1[0x25] = lStack_c0;
  param_1[0x24] = lStack_c8;
  param_1[0x1f] = lStack_f0;
  param_1[0x1e] = lStack_f8;
  param_1[0x21] = lStack_e0;
  param_1[0x20] = lStack_e8;
  param_1[0x2d] = lStack_80;
  param_1[0x2c] = lStack_88;
  param_1[0x2f] = lStack_70;
  param_1[0x2e] = lStack_78;
  param_1[0x27] = lStack_b0;
  param_1[0x26] = lStack_b8;
  param_1[0x29] = lStack_a0;
  param_1[0x28] = lStack_a8;
  param_1[0x2b] = lStack_90;
  param_1[0x2a] = lStack_98;
  return;
}

