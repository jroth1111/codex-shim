
void FUN_101505adc(undefined8 *param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong *puStack_98;
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
  
  puVar4 = *(ulong **)(param_2 + 0xc0);
  if (puVar4 == (ulong *)0x0) {
    auVar8 = FUN_100fb5e3c(param_2,param_3);
    puVar4 = auVar8._8_8_;
    if (auVar8._0_8_ == 2) {
      uVar6 = 1;
      goto LAB_101505c84;
    }
    if ((auVar8._0_8_ & 1) == 0) {
      if (param_4 <= puVar4) {
        puVar4 = param_4;
      }
      __ZN5bytes9bytes_mut8BytesMut8split_to17h8048fd39ffb3547eE(&lStack_b0,param_2 + 0xb8,puVar4);
      if (((ulong)puStack_98 & 1) != 0) {
        uVar7 = (ulong)puStack_98 >> 5;
        puVar4 = (ulong *)(lStack_b0 - uVar7);
        uVar1 = lStack_a8 + uVar7;
        if (lStack_a8 == lStack_a0) {
          if (uVar1 == 0) {
            uStack_80 = 0;
            puStack_78 = (ulong *)0x0;
            puStack_88 = (ulong *)0x1;
            puStack_90 = &UNK_10b205a90;
          }
          else if (((ulong)puVar4 & 1) == 0) {
            puStack_90 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
            puStack_88 = puVar4;
            uStack_80 = uVar1;
            puStack_78 = (ulong *)((ulong)puVar4 | 1);
          }
          else {
            puStack_90 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
            puStack_88 = puVar4;
            uStack_80 = uVar1;
            puStack_78 = puVar4;
          }
        }
        else {
          puVar3 = (ulong *)_malloc(0x18);
          if (puVar3 == (ulong *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_101505da0;
          }
          *puVar3 = (ulong)puVar4;
          puVar3[1] = lStack_a0 + uVar7;
          puVar3[2] = 1;
          puStack_90 = &UNK_10b205b08;
          puStack_88 = puVar4;
          uStack_80 = uVar1;
          puStack_78 = puVar3;
        }
        if (uVar1 < uVar7) {
          puStack_60 = &uStack_70;
          puStack_50 = &uStack_68;
          puStack_58 = &DAT_100c929e0;
          puStack_48 = &DAT_100c929e0;
          uStack_70 = uVar7;
          uStack_68 = uVar1;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__cannot_advance_past__remaining__108aba12e,&puStack_60,&UNK_10b243fb8);
          goto LAB_101505da0;
        }
        goto LAB_101505c6c;
      }
      goto LAB_101505b20;
    }
    param_1[1] = 0;
    lVar5 = 0x10;
  }
  else {
    if (param_4 <= puVar4) {
      puVar4 = param_4;
    }
    __ZN5bytes9bytes_mut8BytesMut8split_to17h8048fd39ffb3547eE(&lStack_b0,param_2 + 0xb8,puVar4);
    if (((ulong)puStack_98 & 1) == 0) {
LAB_101505b20:
      puStack_90 = &__ZN5bytes9bytes_mut13SHARED_VTABLE17h0a6377dc8dadf18bE;
    }
    else {
      uVar7 = (ulong)puStack_98 >> 5;
      puVar4 = (ulong *)(lStack_b0 - uVar7);
      uVar1 = lStack_a8 + uVar7;
      if (lStack_a8 == lStack_a0) {
        if (uVar1 == 0) {
          uStack_80 = 0;
          puStack_78 = (ulong *)0x0;
          puStack_88 = (ulong *)0x1;
          puStack_90 = &UNK_10b205a90;
        }
        else if (((ulong)puVar4 & 1) == 0) {
          puStack_90 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          puStack_88 = puVar4;
          uStack_80 = uVar1;
          puStack_78 = (ulong *)((ulong)puVar4 | 1);
        }
        else {
          puStack_90 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
          puStack_88 = puVar4;
          uStack_80 = uVar1;
          puStack_78 = puVar4;
        }
      }
      else {
        puVar3 = (ulong *)_malloc(0x18);
        if (puVar3 == (ulong *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_101505da0;
        }
        *puVar3 = (ulong)puVar4;
        puVar3[1] = lStack_a0 + uVar7;
        puVar3[2] = 1;
        puStack_90 = &UNK_10b205b08;
        puStack_88 = puVar4;
        uStack_80 = uVar1;
        puStack_78 = puVar3;
      }
      if (uVar1 < uVar7) {
        puStack_60 = &uStack_70;
        puStack_50 = &uStack_68;
        puStack_58 = &DAT_100c929e0;
        puStack_48 = &DAT_100c929e0;
        uStack_70 = uVar7;
        uStack_68 = uVar1;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__cannot_advance_past__remaining__108aba12e,&puStack_60,&UNK_10b243fb8);
LAB_101505da0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101505da4);
        (*pcVar2)();
      }
LAB_101505c6c:
      lStack_b0 = (long)puStack_88 + uVar7;
      puStack_98 = puStack_78;
    }
    param_1[1] = puStack_90;
    param_1[2] = lStack_b0;
    lVar5 = 0x20;
    param_1[3] = lStack_a8;
    puVar4 = puStack_98;
  }
  uVar6 = 0;
  *(ulong **)((long)param_1 + lVar5) = puVar4;
LAB_101505c84:
  *param_1 = uVar6;
  return;
}

