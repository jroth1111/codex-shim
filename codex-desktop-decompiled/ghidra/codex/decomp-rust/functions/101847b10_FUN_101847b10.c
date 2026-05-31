
/* WARNING: Removing unreachable block (ram,0x00010184787c) */
/* WARNING: Removing unreachable block (ram,0x000101847894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101847b10(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 uVar11;
  long *unaff_x20;
  undefined1 uVar12;
  long *plVar13;
  undefined *unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined *in_stack_00000050;
  undefined1 *in_stack_00000080;
  code *in_stack_00000088;
  undefined8 in_stack_00000090;
  char *in_stack_000001c0;
  undefined8 *in_stack_000001c8;
  char *in_stack_000001e0;
  code *in_stack_000001e8;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  
  plVar10 = (long *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x00000080);
  if (unaff_x28 != 0) {
    _free(in_stack_00000048);
  }
  FUN_10194df64(unaff_x29 + -0x88);
  if (*(long *)(unaff_x29 + -0xd0) != -0x7ffffffffffffffb) {
    func_0x00010194dc28(unaff_x29 + -0xd0);
  }
  if (((long)in_stack_00000028 < 0) &&
     ((in_stack_00000028 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010194dc28(&stack0x00000160);
  }
  plVar13 = plVar10;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
     (((bRam000000010b627360 - 1 < 2 ||
       ((bRam000000010b627360 != 0 &&
        (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
                           ), unaff_x25 = in_stack_00000050, cVar7 != '\0')))) &&
      (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
                         ), (uVar9 & 1) != 0)))) {
    lVar6 = ___ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
            + 0x30;
    in_stack_00000080 = &stack0x00000238;
    in_stack_00000088 =
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    in_stack_000001e8 = (code *)&stack0x00000080;
    in_stack_000001e0 = s_7failed_to_deserialize_attestati_108add1fd;
    in_stack_000001c0 = (char *)&stack0x000001e0;
    in_stack_000001c8 = (undefined8 *)&UNK_10b25d1e8;
    *(undefined8 *)(unaff_x29 + -0xd0) = 1;
    *(char ***)(unaff_x29 + -200) = &stack0x000001c0;
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(long *)(unaff_x29 + -0xb8) = lVar6;
    FUN_10186e7f4(unaff_x29 + -0xd0);
  }
  else {
    lVar6 = 
    ___ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
    ;
    unaff_x20 = (long *)&stack0x00000080;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pcVar5 = *(code **)(
                         ___ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
                         + 0x20);
      uVar3 = *(undefined8 *)
               (
               ___ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
               + 0x28);
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      plVar13 = plRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        plVar13 = (long *)&UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar2 + 0x18))(plVar13,&stack0x00000260);
      if (iVar8 != 0) {
        lVar1 = ___ZN16codex_app_server11attestation45request_attestation_header_value_with_timeout28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5391dbeed0ad1f7fE
                + 0x30;
        in_stack_000001e0 = &stack0x00000238;
        in_stack_000001e8 =
             __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
        ;
        in_stack_000001c8 = &stack0x000001e0;
        in_stack_000001c0 = s_7failed_to_deserialize_attestati_108add1fd;
        *(char ***)(unaff_x29 + -0xf0) = &stack0x000001c0;
        *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b25d1e8;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long *)(unaff_x29 + -200) = unaff_x29 + -0xf0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(long *)(unaff_x29 + -0xb8) = lVar1;
        in_stack_00000080 = (undefined1 *)0x2;
        in_stack_00000088 = pcVar5;
        in_stack_00000090 = uVar3;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,plVar13,puVar2,&stack0x00000080,unaff_x29 + -0xd0);
      }
    }
  }
  __ZN16codex_app_server11attestation35app_server_attestation_header_value17h782eb7cdc2ae1843E
            (&stack0x00000278,4,0);
  if (*plVar10 == 1) {
    FUN_10194d0ac(plVar10 + 1);
  }
  else if ((*plVar10 == 0) && (plVar10[2] != 0)) {
    _free(plVar10[1]);
  }
  _free(plVar10);
  unaff_x25[0xfb] = 0;
  if ((*(ulong *)(unaff_x25 + 0x78) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x25 + 0x80));
  }
  lVar6 = **(long **)(unaff_x25 + 0x58);
  **(long **)(unaff_x25 + 0x58) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he70a45a7d8297075E();
  }
  lVar6 = **(long **)(unaff_x25 + 0x50);
  **(long **)(unaff_x25 + 0x50) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
  }
  *in_stack_00000030 = 1;
  if (in_stack_00000278 == -0x7fffffffffffffff) {
    uVar12 = 3;
    uVar11 = 3;
    in_stack_00000050 = unaff_x25;
  }
  else {
    FUN_10193aa44(in_stack_00000018);
    if (in_stack_00000278 == -0x8000000000000000) {
      uVar12 = 2;
    }
    else {
      if (in_stack_00000288 == 0) {
        plVar13 = (long *)0x0;
        uVar12 = 0;
        unaff_x20 = (long *)0x1;
        unaff_x25 = &UNK_10b205a90;
      }
      else {
        lVar6 = 0;
        do {
          bVar4 = *(byte *)(in_stack_00000280 + lVar6);
          if (bVar4 < 0x20) {
            if (bVar4 != 9) {
LAB_10184758c:
              uVar12 = 2;
              goto LAB_10184761c;
            }
          }
          else if (bVar4 == 0x7f) goto LAB_10184758c;
          lVar6 = lVar6 + 1;
        } while (in_stack_00000288 != lVar6);
        unaff_x20 = (long *)_malloc(in_stack_00000288);
        if (unaff_x20 == (long *)0x0) {
          func_0x0001087c9084(1,in_stack_00000288);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101847dac);
          (*pcVar5)();
        }
        _memcpy(unaff_x20,in_stack_00000280,in_stack_00000288);
        plVar13 = unaff_x20;
        unaff_x25 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        if (((ulong)unaff_x20 & 1) == 0) {
          plVar13 = (long *)((ulong)unaff_x20 | 1);
          unaff_x25 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        }
        uVar12 = 0;
      }
LAB_10184761c:
      if (in_stack_00000278 != 0) {
        _free(in_stack_00000280);
      }
    }
    *in_stack_00000038 = unaff_x25;
    in_stack_00000038[1] = unaff_x20;
    uVar11 = 1;
    in_stack_00000038[2] = in_stack_00000288;
    in_stack_00000038[3] = plVar13;
  }
  *(undefined1 *)(in_stack_00000038 + 4) = uVar12;
  in_stack_00000050[4000] = uVar11;
  return;
}

