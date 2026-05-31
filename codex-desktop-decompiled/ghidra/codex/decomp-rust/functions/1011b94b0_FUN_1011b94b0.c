
void FUN_1011b94b0(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = *(long *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = 0x8000000000000000;
  if (lVar1 == -0x8000000000000000) {
    func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24a320);
  }
  else {
    lVar4 = (param_3 & 0xff) * 8;
    uVar5 = *(undefined8 *)(&UNK_10b254788 + lVar4);
    unaff_x22 = *(undefined8 *)(&UNK_108cdb1e8 + lVar4);
    lVar4 = _malloc(unaff_x22);
    if (lVar4 != 0) {
      _memcpy(lVar4,uVar5,unaff_x22);
      uStack_180 = 0x8000000000000000;
      uStack_178 = unaff_x22;
      lStack_170 = lVar4;
      uStack_168 = unaff_x22;
      lStack_e0 = lVar1;
      uStack_d8 = uVar2;
      uStack_d0 = uVar6;
      FUN_101497734(auStack_c8,param_2,&lStack_e0,&uStack_180);
      uStack_128 = uStack_b8;
      lStack_130 = lStack_c0;
      uStack_118 = uStack_a8;
      uStack_120 = uStack_b0;
      uStack_108 = uStack_98;
      uStack_110 = uStack_a0;
      uStack_f8 = uStack_88;
      uStack_100 = uStack_90;
      uStack_e8 = uStack_78;
      uStack_f0 = uStack_80;
      if (lStack_c0 != -0x7ffffffffffffffa) {
        FUN_100ddb5bc(&lStack_130);
      }
      *param_1 = 0x8000000000000004;
      return;
    }
  }
  func_0x0001087c9084(1,unaff_x22);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011b95e0);
  (*pcVar3)();
}

