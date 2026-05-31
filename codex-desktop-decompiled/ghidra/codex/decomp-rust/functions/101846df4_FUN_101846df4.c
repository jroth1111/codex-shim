
void FUN_101846df4(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong unaff_x20;
  undefined1 uVar6;
  ulong unaff_x24;
  undefined *unaff_x25;
  undefined1 *unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000038;
  undefined *in_stack_00000050;
  char *pcStack00000000000001c0;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  
  pcStack00000000000001c0 = s__attestation_generation_request_c_108add237;
  *(char ***)(unaff_x29 + -0xf0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b25d1e8;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0xf0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  FUN_10186e6bc(unaff_x29 + -0xd0);
  __ZN16codex_app_server11attestation35app_server_attestation_header_value17h782eb7cdc2ae1843E
            (&stack0x00000278,3,0);
  if (*(long *)(unaff_x25 + 0x90) == -0x7ffffffffffffffe) {
    *(undefined2 *)(unaff_x25 + 0xf9) = 0;
    unaff_x25[0xfb] = 0;
    uVar5 = *(ulong *)(unaff_x25 + 0x78);
  }
  else if ((*(long *)(unaff_x25 + 0x90) == -0x7fffffffffffffff) || ((unaff_x25[0xf9] & 1) == 0)) {
    unaff_x25[0xf9] = 0;
    *(undefined2 *)(unaff_x25 + 0xf9) = 0;
    unaff_x25[0xfb] = 0;
    uVar5 = *(ulong *)(unaff_x25 + 0x78);
  }
  else {
    *(undefined2 *)(unaff_x25 + 0xfa) = 0;
    unaff_x25[0xf9] = 0;
    *(undefined2 *)(unaff_x25 + 0xf9) = 0;
    uVar5 = *(ulong *)(unaff_x25 + 0x78);
  }
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    lVar3 = **(long **)(unaff_x25 + 0x58);
    **(long **)(unaff_x25 + 0x58) = lVar3 + -1;
    LORelease();
  }
  else {
    _free(*(undefined8 *)(unaff_x25 + 0x80));
    lVar3 = **(long **)(unaff_x25 + 0x58);
    **(long **)(unaff_x25 + 0x58) = lVar3 + -1;
    LORelease();
  }
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he70a45a7d8297075E();
  }
  lVar3 = **(long **)(unaff_x25 + 0x50);
  **(long **)(unaff_x25 + 0x50) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
  }
  *unaff_x27 = 1;
  if (in_stack_00000278 == -0x7fffffffffffffff) {
    uVar6 = 3;
    uVar4 = 3;
  }
  else {
    FUN_10193aa44();
    if (in_stack_00000278 == -0x8000000000000000) {
      uVar6 = 2;
    }
    else {
      if (in_stack_00000288 == 0) {
        unaff_x24 = 0;
        uVar6 = 0;
        unaff_x20 = 1;
        unaff_x25 = &UNK_10b205a90;
      }
      else {
        lVar3 = 0;
        do {
          bVar1 = *(byte *)(in_stack_00000280 + lVar3);
          if (bVar1 < 0x20) {
            if (bVar1 != 9) {
LAB_10184758c:
              uVar6 = 2;
              goto LAB_10184761c;
            }
          }
          else if (bVar1 == 0x7f) goto LAB_10184758c;
          lVar3 = lVar3 + 1;
        } while (in_stack_00000288 != lVar3);
        unaff_x20 = _malloc(in_stack_00000288);
        if (unaff_x20 == 0) {
          func_0x0001087c9084(1,in_stack_00000288);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101847dac);
          (*pcVar2)();
        }
        _memcpy(unaff_x20,in_stack_00000280,in_stack_00000288);
        unaff_x24 = unaff_x20;
        unaff_x25 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        if ((unaff_x20 & 1) == 0) {
          unaff_x24 = unaff_x20 | 1;
          unaff_x25 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        }
        uVar6 = 0;
      }
LAB_10184761c:
      if (in_stack_00000278 != 0) {
        _free(in_stack_00000280);
      }
    }
    *in_stack_00000038 = unaff_x25;
    in_stack_00000038[1] = unaff_x20;
    uVar4 = 1;
    in_stack_00000038[2] = in_stack_00000288;
    in_stack_00000038[3] = unaff_x24;
    unaff_x25 = in_stack_00000050;
  }
  *(undefined1 *)(in_stack_00000038 + 4) = uVar6;
  unaff_x25[4000] = uVar4;
  return;
}

