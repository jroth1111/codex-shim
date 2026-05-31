
void FUN_100f305dc(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong unaff_x21;
  long lStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  undefined *puStack_58;
  ulong *puStack_50;
  undefined *puStack_48;
  
  plVar6 = (long *)*param_2;
  if (*plVar6 == 0) {
    puVar4 = (ulong *)plVar6[3];
  }
  else if (*plVar6 == 1) {
    puVar4 = (ulong *)0x0;
    if ((ulong)plVar6[3] <= (ulong)plVar6[2]) {
      puVar4 = (ulong *)(plVar6[2] - plVar6[3]);
    }
  }
  else {
    puVar4 = (ulong *)0x0;
  }
  puVar7 = (ulong *)plVar6[5];
  if (puVar4 <= (ulong *)plVar6[5]) {
    puVar7 = puVar4;
  }
  if (puVar7 < param_3) {
    puStack_58 = (undefined *)FUN_1006c1be4(plVar6);
    puStack_60 = param_3;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_60);
  }
  else {
    if ((long)param_3 < 0) {
      func_0x0001087c9084(0,param_3);
    }
    if (param_3 == (ulong *)0x0) {
LAB_100f30670:
      lStack_b0 = 1;
    }
    else {
      lStack_b0 = _malloc(param_3);
      if (lStack_b0 == 0) {
        func_0x0001087c9084(1,param_3);
        goto LAB_100f30670;
      }
    }
    uVar5 = 0x40 - LZCOUNT((ulong)param_3 >> 10);
    if (6 < uVar5) {
      uVar5 = 7;
    }
    puStack_a8 = (ulong *)0x0;
    uStack_98 = uVar5 << 2 | 1;
    puStack_a0 = param_3;
    FUN_1011a3558(&lStack_b0,plVar6);
    puVar4 = puStack_a8;
    if ((uStack_98 & 1) == 0) {
      param_1[2] = puStack_a8;
      param_1[3] = uStack_98;
      *param_1 = &__ZN5bytes9bytes_mut13SHARED_VTABLE17h0a6377dc8dadf18bE;
      param_1[1] = lStack_b0;
      return;
    }
    uVar5 = uStack_98 >> 5;
    puVar7 = (ulong *)(lStack_b0 - uVar5);
    unaff_x21 = uVar5 + (long)puStack_a8;
    if (puStack_a8 == puStack_a0) {
      if (unaff_x21 == 0) {
        uStack_80 = 0;
        puStack_78 = (ulong *)0x0;
        puStack_88 = (ulong *)0x1;
        puStack_90 = &UNK_10b205a90;
      }
      else if (((ulong)puVar7 & 1) == 0) {
        puStack_90 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        puStack_88 = puVar7;
        uStack_80 = unaff_x21;
        puStack_78 = (ulong *)((ulong)puVar7 | 1);
      }
      else {
        puStack_90 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        puStack_88 = puVar7;
        uStack_80 = unaff_x21;
        puStack_78 = puVar7;
      }
    }
    else {
      uVar1 = uVar5 + (long)puStack_a0;
      puVar3 = (ulong *)_malloc(0x18);
      if (puVar3 == (ulong *)0x0) {
        func_0x0001087c906c(8,0x18);
        goto LAB_100f307f0;
      }
      *puVar3 = (ulong)puVar7;
      puVar3[1] = uVar1;
      puVar3[2] = 1;
      puStack_90 = &UNK_10b205b08;
      puStack_88 = puVar7;
      uStack_80 = unaff_x21;
      puStack_78 = puVar3;
    }
    uStack_70 = uVar5;
    if (uVar5 <= unaff_x21) {
      param_1[1] = (long)puStack_88 + uVar5;
      *param_1 = puStack_90;
      param_1[3] = puStack_78;
      param_1[2] = puVar4;
      return;
    }
  }
  puStack_60 = &uStack_70;
  puStack_50 = &uStack_68;
  puStack_58 = &DAT_100c929e0;
  puStack_48 = &DAT_100c929e0;
  uStack_68 = unaff_x21;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__cannot_advance_past__remaining__108aba12e,&puStack_60,&UNK_10b243fb8);
LAB_100f307f0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f307f4);
  (*pcVar2)();
}

