
void FUN_103ec31c0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *plStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*param_2 != 2) {
    uVar5 = param_2[1];
    if ((*param_2 & 1) != 0) {
      uVar5 = uVar5 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_2[2] + 0x60))(uVar5,param_2 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar5 = param_2[4], uVar5 != 0)) {
    lStack_70 = *(long *)(uVar5 + 0x10);
    uStack_68 = *(undefined8 *)(uVar5 + 0x18);
    plStack_b0 = &lStack_70;
    puStack_a8 = &DAT_103d8be04;
    func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s__>___108ab67cd,&plStack_b0);
  }
  plVar7 = (long *)param_2[5];
  if (plVar7 == (long *)0x8000000000000002) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc118f,0x36,&UNK_10b2f7080);
LAB_103ec3440:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec3444);
    (*pcVar2)();
  }
  uVar5 = param_2[0xb];
  puVar1 = (undefined8 *)param_2[0xc];
  auVar11 = (*(code *)puVar1[3])(uVar5,param_3);
  lVar4 = auVar11._8_8_;
  plVar3 = auVar11._0_8_;
  if (((ulong)plVar3 & 1) == 0) {
    puStack_a8 = (undefined *)param_2[6];
    plStack_b0 = (long *)param_2[5];
    uStack_98 = param_2[8];
    uStack_a0 = param_2[7];
    uStack_88 = param_2[10];
    uStack_90 = param_2[9];
    if ((code *)*puVar1 != (code *)0x0) {
      plVar3 = (long *)(*(code *)*puVar1)(uVar5);
    }
    if (puVar1[1] != 0) {
      plVar3 = (long *)_free(uVar5);
    }
    uVar5 = param_2[10];
    param_2[5] = 0x8000000000000002;
    uStack_a0 = param_2[7];
    puStack_a8 = (undefined *)param_2[6];
    uStack_90 = param_2[9];
    uStack_98 = param_2[8];
    plStack_b0 = plVar7;
    uStack_78 = uVar5;
    if (lVar4 == 0) {
      uVar6 = 0x8000000000000001;
    }
    else {
      lStack_70 = lVar4;
      plVar3 = (long *)_malloc(8);
      if (plVar3 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_103ec3440;
      }
      *plVar3 = lVar4;
      uVar6 = 0x8000000000000000;
    }
    uVar8 = param_2[6];
    uVar10 = param_2[9];
    uVar9 = param_2[8];
    param_1[2] = param_2[7];
    param_1[1] = uVar8;
    param_1[4] = uVar10;
    param_1[3] = uVar9;
    *param_1 = (ulong)plVar7;
    param_1[5] = uVar6;
    param_1[6] = (ulong)&UNK_108dc3b03;
    param_1[7] = 0x3e;
    param_1[8] = (ulong)plVar3;
    param_1[9] = (ulong)&UNK_10b2f7bf8;
    param_1[0xb] = 0xccce93df53994377;
    param_1[10] = 0xfc1d8380bb78dbb4;
    param_1[0xc] = uVar5;
    uVar5 = *param_2;
  }
  else {
    *param_1 = 0x8000000000000003;
    uVar5 = *param_2;
  }
  if (uVar5 != 2) {
    uVar6 = param_2[1];
    if ((uVar5 & 1) != 0) {
      uVar6 = uVar6 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_2[2] + 0x68))(uVar6,param_2 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar5 = param_2[4], uVar5 != 0)) {
    lStack_70 = *(long *)(uVar5 + 0x10);
    uStack_68 = *(undefined8 *)(uVar5 + 0x18);
    plStack_b0 = &lStack_70;
    puStack_a8 = &DAT_103d8be04;
    func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s_<____108ab67c5,&plStack_b0);
  }
  return;
}

