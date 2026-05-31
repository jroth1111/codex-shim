
void __ZN10codex_core5tools6router24extension_tool_executors17hc2e625363bdeeac9E
               (long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 (*pauStack_e0) [16];
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_70 [16];
  
  lStack_100 = *(long *)(*(long *)(param_2 + 0x3b0) + 0x90);
  lStack_f8 = lStack_100 + *(long *)(*(long *)(param_2 + 0x3b0) + 0x98) * 0x10;
  lStack_140 = 0;
  lStack_120 = 0;
  lStack_f0 = param_2;
  auVar9 = func_0x000102f84b2c(&lStack_140);
  if (auVar9._0_8_ == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    func_0x000103343b70(&lStack_140);
    func_0x000103343b70(&lStack_120);
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    if (lStack_140 != 0) {
      uVar6 = (ulong)(lStack_128 - lStack_138) >> 4;
    }
    uVar1 = 0;
    if (lStack_120 != 0) {
      uVar1 = (ulong)(lStack_108 - lStack_118) >> 4;
    }
    uVar1 = uVar1 + uVar6;
    uVar6 = uVar1;
    if (uVar1 < 4) {
      uVar6 = 3;
    }
    lVar8 = uVar6 + 1;
    uVar6 = lVar8 * 0x10;
    auStack_d0 = auVar9;
    if (0xffffffffffffffe < uVar1 || 0x7ffffffffffffff8 < uVar6) {
LAB_102de0f34:
      func_0x0001087c9084(uVar4,uVar6);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102de0f40);
      (*pcVar3)();
    }
    if (uVar6 == 0) {
      lVar8 = 0;
      pauVar5 = (undefined1 (*) [16])0x8;
    }
    else {
      pauVar5 = (undefined1 (*) [16])_malloc(uVar6);
      if (pauVar5 == (undefined1 (*) [16])0x0) {
        uVar4 = 8;
        goto LAB_102de0f34;
      }
    }
    lVar7 = 0;
    *pauVar5 = auVar9;
    lStack_d8 = 1;
    lStack_a8 = lStack_118;
    lStack_b0 = lStack_120;
    lStack_98 = lStack_108;
    uStack_a0 = uStack_110;
    lStack_88 = lStack_f8;
    lStack_90 = lStack_100;
    lStack_80 = lStack_f0;
    auStack_d0._8_8_ = lStack_138;
    auStack_d0._0_8_ = lStack_140;
    lStack_b8 = lStack_128;
    uStack_c0 = uStack_130;
    lStack_e8 = lVar8;
    pauStack_e0 = pauVar5;
    while( true ) {
      lVar8 = lStack_d8;
      auVar9 = func_0x000102f84b2c(auStack_d0);
      if (auVar9._0_8_ == 0) break;
      auStack_70 = auVar9;
      if (lVar8 == lStack_e8) {
        uVar6 = 0;
        if (auStack_d0._0_8_ != 0) {
          uVar6 = (ulong)(lStack_b8 - auStack_d0._8_8_) >> 4;
        }
        lVar2 = 1;
        if (lStack_b0 != 0) {
          lVar2 = ((ulong)(lStack_98 - lStack_a8) >> 4) + 1;
        }
        FUN_10893e30c(&lStack_e8,lVar8,uVar6 + lVar2,8,0x10);
        pauVar5 = pauStack_e0;
      }
      *(undefined1 (*) [16])(pauVar5[1] + lVar7) = auVar9;
      lStack_d8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    }
    func_0x000103343b70(auStack_d0);
    func_0x000103343b70(&lStack_b0);
    param_1[1] = (long)pauStack_e0;
    *param_1 = lStack_e8;
    param_1[2] = lStack_d8;
  }
  return;
}

