
ulong __ZN5hyper4body8incoming6Sender10poll_ready17h18eb9524240b4a0dE
                (long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  long in_xzr;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plStack_108;
  long *plStack_100;
  undefined1 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long *plStack_50;
  undefined *puStack_48;
  
  auVar11._8_8_ = unaff_x21;
  auVar11._0_8_ = unaff_x22;
  lVar10 = *(long *)(param_1 + 8);
  plVar6 = (long *)*param_2;
  lVar7 = *(long *)(lVar10 + 0x28);
  if (lVar7 == 0) {
    *(long *)(lVar10 + 0x28) = 1;
  }
  if (lVar7 == 2) {
    lVar7 = plVar6[1];
    pcVar8 = *(code **)(*plVar6 + 0x10);
LAB_1057abb3c:
    (*pcVar8)(lVar7);
LAB_1057abb40:
    lStack_58 = *(long *)(lVar10 + 0x10);
    if (lStack_58 == 0) {
LAB_1057abb78:
      puVar9 = (undefined8 *)_malloc(0x18);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        *(undefined1 *)(puVar9 + 2) = 5;
        return 0;
      }
      lStack_58 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      if (lStack_58 == 1) {
        return 1;
      }
      if (lStack_58 == 2) {
        if ((*(char *)(param_1 + 0x20) != '\x02') &&
           (*(long *)(*(long *)(param_1 + 0x10) + 0x38) < 0)) {
          uVar5 = FUN_1057a22c8(param_1 + 0x10,param_2);
          return uVar5 & 0xffffffff;
        }
        goto LAB_1057abb78;
      }
    }
    plStack_50 = &lStack_58;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_9internal_error__entered_unreach_108b19607,&plStack_50,&UNK_10b3b4c90);
  }
  else {
    if (lVar7 != 0) goto LAB_1057abb40;
    puVar9 = (undefined8 *)*plVar6;
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
      auVar11 = (*(code *)*puVar9)(plVar6[1]);
      lVar7 = *(long *)(lVar10 + 0x18);
joined_r0x0001057abafc:
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar10 + 0x20));
      }
      *(undefined1 (*) [16])(lVar10 + 0x18) = auVar11;
    }
    else if (*(undefined8 **)(lVar10 + 0x18) != puVar9 || *(long *)(lVar10 + 0x20) != plVar6[1]) {
      auVar11 = (*(code *)*puVar9)();
      lVar7 = *(long *)(lVar10 + 0x18);
      goto joined_r0x0001057abafc;
    }
    if (*(long *)(lVar10 + 0x28) == 1) {
      *(long *)(lVar10 + 0x28) = in_xzr;
      goto LAB_1057abb40;
    }
    lVar4 = *(long *)(lVar10 + 0x18);
    lVar7 = *(long *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    if (lVar4 != 0) {
      LOAcquire();
      *(long *)(lVar10 + 0x28) = in_xzr;
      LORelease();
      pcVar8 = *(code **)(lVar4 + 8);
      goto LAB_1057abb3c;
    }
  }
  func_0x000108a07a20(&UNK_10b1d51f8);
  *(undefined1 (*) [16])(lVar10 + 0x18) = auVar11;
  auVar12 = __Unwind_Resume();
  plStack_e8 = auVar12._8_8_;
  uStack_68 = 0x1057abc18;
  lStack_80 = param_1;
  puStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  auStack_90 = auVar11;
  if (*(char *)(auVar12._0_8_ + 0x20) == '\x02') {
    plStack_f0 = (long *)0x0;
    lStack_d0 = 0;
    uStack_b8 = uStack_d8;
    lStack_c0 = lStack_e0;
    lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
    uStack_f8 = 2;
    plStack_c8 = plStack_e8;
  }
  else {
    plVar6 = *(long **)(auVar12._0_8_ + 0x10);
    uVar5 = plVar6[8];
    do {
      if (uVar5 == (plVar6[6] ^ 0x7fffffffffffffffU)) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109aa1eac,0x35,&UNK_10b3b5428);
        goto LAB_1057abdac;
      }
      uVar1 = uVar5 + 1;
      uVar2 = plVar6[8];
      bVar3 = uVar2 != uVar5;
      uVar5 = uVar2;
    } while (bVar3);
    plVar6[8] = uVar1;
    lVar7 = *plVar6;
    *plVar6 = lVar7 + 1;
    if (lVar7 < 0) {
LAB_1057abdac:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1057abdb0);
      (*pcVar8)();
    }
    plStack_c8 = (long *)0x1;
    lStack_d0 = 1;
    lStack_c0 = 0;
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    lStack_b0 = 0;
    uStack_a0 = 0;
    plStack_f0 = plVar6;
    plStack_100 = (long *)_malloc(0x38);
    if (plStack_100 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      goto LAB_1057abdac;
    }
    plStack_100[1] = (long)plStack_c8;
    *plStack_100 = lStack_d0;
    plStack_100[3] = uStack_b8;
    plStack_100[2] = lStack_c0;
    plStack_100[5] = lStack_a8;
    plStack_100[4] = lStack_b0;
    plStack_100[6] = CONCAT71(uStack_9f,uStack_a0);
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    plStack_108 = plVar6;
    FUN_1057a2468(&lStack_d0,&plStack_108,&plStack_f0);
    if ((char)lStack_b0 == '\x02') goto LAB_1057abd64;
  }
  plVar6 = plStack_c8;
  if (lStack_d0 == 0) {
    lVar7 = *plStack_c8;
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)plStack_c8[1];
      pcVar8 = (code *)*puVar9;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(lVar7);
      }
      if (puVar9[1] != 0) {
        _free(lVar7);
      }
    }
    _free(plVar6);
  }
  else {
    (**(code **)(lStack_d0 + 0x20))(&uStack_b8,plStack_c8,lStack_c0);
  }
LAB_1057abd64:
  uVar5 = FUN_1057a47c0(&plStack_108);
  return uVar5;
}

