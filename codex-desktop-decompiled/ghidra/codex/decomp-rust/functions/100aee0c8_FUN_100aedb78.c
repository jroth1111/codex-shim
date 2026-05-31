
/* WARNING: Removing unreachable block (ram,0x000100aee114) */
/* WARNING: Removing unreachable block (ram,0x000100aee154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aedb78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 unaff_w21;
  undefined8 *puVar10;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000640;
  undefined1 *in_stack_00000648;
  undefined8 in_stack_00000650;
  long in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xd8,s__invalid_unix_socket_request_pat_108ad0238,unaff_x29 + -0x90);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(unaff_x29 + -0x90);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -200);
  *(undefined1 *)(unaff_x29 + -0x78) = unaff_w21;
  uVar6 = FUN_1088568d8(unaff_x29 + -0x90,unaff_x29 + -0xc0);
  if ((code *)*in_stack_00000050 != (code *)0x0) {
    (*(code *)*in_stack_00000050)(in_stack_00000048);
  }
  if (in_stack_00000050[1] != 0) {
    _free(in_stack_00000048);
  }
  *unaff_x28 = 0;
  FUN_100df6754();
  *(undefined2 *)(unaff_x19 + 0xf92) = 0;
  lVar3 = **(long **)(unaff_x19 + 0x5a0);
  **(long **)(unaff_x19 + 0x5a0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x5a0);
  }
  FUN_100e17094();
  *(undefined1 *)(unaff_x19 + 0xf94) = 0;
  *in_stack_00000040 = 1;
  FUN_100cab61c();
  *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
     (((bRam000000010b62e6c0 - 1 < 2 ||
       ((bRam000000010b62e6c0 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
                           ), cVar4 != '\0')))) &&
      (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
                         ), (uVar7 & 1) != 0)))) {
    in_stack_00000658 =
         ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
         + 0x30;
    in_stack_00000648 = &stack0x00000790;
    in_stack_00000640 = 1;
    in_stack_00000650 = 1;
    FUN_100af3184(&stack0x00000640);
  }
  else {
    lVar3 = 
    ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000001e0 =
           *(undefined8 *)
            (
            ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
            + 0x20);
      in_stack_000001e8 =
           *(undefined8 *)
            (
            ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
            + 0x28);
      in_stack_000001d8 = 2;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001d8);
      if (iVar5 != 0) {
        in_stack_00000658 =
             ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4266c3855b8925ebE
             + 0x30;
        in_stack_00000648 = &stack0x00000740;
        in_stack_00000640 = 1;
        in_stack_00000650 = 1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,&stack0x00000390,&stack0x00000640);
      }
    }
  }
  __ZN19codex_network_proxy9responses13text_response17hb12ec00a07c01d4aE
            (&stack0x00000640,0x1f6,&UNK_108cb8380,0x18);
  (**(code **)**(undefined8 **)(unaff_x29 + -0x90))();
  if (((*(byte *)(unaff_x19 + 0x39e) & 1) == 0) || (*(long *)(unaff_x19 + 0x240) == 0)) {
    *(undefined1 *)(unaff_x19 + 0x39e) = 0;
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x248));
    *(undefined1 *)(unaff_x19 + 0x39e) = 0;
  }
  if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x228) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x230));
  }
  lVar3 = **(long **)(unaff_x19 + 0x220);
  **(long **)(unaff_x19 + 0x220) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x220);
  }
  if ((*(byte *)(unaff_x19 + 0x39f) & 1) != 0) {
    FUN_100df6754(unaff_x19 + 0x120);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x210);
    puVar10 = *(undefined8 **)(unaff_x19 + 0x218);
    pcVar8 = (code *)*puVar10;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar6);
    }
    if (puVar10[1] != 0) {
      _free(uVar6);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x39f) = 0;
  plVar9 = *(long **)(unaff_x19 + 0x110);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    *plVar9 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
    }
  }
  unaff_x20[2] = in_stack_00000650;
  unaff_x20[1] = in_stack_00000648;
  unaff_x20[0xc] = in_stack_000006a0;
  unaff_x20[0xb] = in_stack_00000698;
  unaff_x20[0xe] = in_stack_000006b0;
  unaff_x20[0xd] = in_stack_000006a8;
  unaff_x20[0x10] = in_stack_000006c0;
  unaff_x20[0xf] = in_stack_000006b8;
  unaff_x20[4] = in_stack_00000660;
  unaff_x20[3] = in_stack_00000658;
  unaff_x20[6] = in_stack_00000670;
  unaff_x20[5] = in_stack_00000668;
  unaff_x20[8] = in_stack_00000680;
  unaff_x20[7] = in_stack_00000678;
  *unaff_x20 = in_stack_00000640;
  unaff_x20[0x11] = in_stack_000006c8;
  unaff_x20[10] = in_stack_00000690;
  unaff_x20[9] = in_stack_00000688;
  *(undefined1 *)(unaff_x19 + 0x39a) = 1;
  return;
}

