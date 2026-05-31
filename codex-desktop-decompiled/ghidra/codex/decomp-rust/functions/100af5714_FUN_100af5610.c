
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100af5610(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long unaff_x19;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long lStack00000000000000c0;
  code *pcStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000178;
  
  *(char **)(unaff_x29 + -0x70) = s_CONNECT_MITM_enabled__host____po_108acffaf;
  *(undefined8 **)(unaff_x29 + -0x68) = &stack0x00000160;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  pcStack00000000000000c8 = (code *)(unaff_x29 + -0x80);
  lStack00000000000000c0 = 1;
  uStack00000000000000d0 = 1;
  *(undefined8 *)(unaff_x25 + 0x188) = in_stack_00000038;
  *(undefined8 *)(unaff_x25 + 0x180) = in_stack_00000030;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000040;
  uStack00000000000000d8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0xba) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x1f00) = 0;
  auVar9 = FUN_100b00240(unaff_x19 + 0xe0);
  if ((auVar9._0_8_ & 1) == 0) {
    FUN_100e62760(unaff_x19 + 0xe0);
    if (auVar9._8_8_ != 0) {
      *(long *)(unaff_x29 + -0x80) = auVar9._8_8_;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62e810 - 1 < 2 ||
           ((bRam000000010b62e810 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
                               ), cVar4 != '\0')))) &&
          (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
                             ), (uVar7 & 1) != 0)))) {
        in_stack_00000178 =
             ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
             + 0x30;
        lStack00000000000000c0 = unaff_x29 + -0x80;
        pcStack00000000000000c8 =
             __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        *(char **)(unaff_x29 + -0xa0) = s_MITM_tunnel_error__108acffe1;
        *(long **)(unaff_x29 + -0x98) = &stack0x000000c0;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
        in_stack_00000168 = unaff_x29 + -0x70;
        in_stack_00000160 = 1;
        in_stack_00000170 = 1;
        FUN_100af5fdc(&stack0x00000160);
      }
      else {
        lVar3 = 
        ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000050 =
               *(undefined8 *)
                (
                ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
                + 0x20);
          in_stack_00000058 =
               *(undefined8 *)
                (
                ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
                + 0x28);
          in_stack_00000048 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000048);
          if (iVar5 != 0) {
            in_stack_00000178 =
                 ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1cdb7fef602e2cd0E
                 + 0x30;
            lStack00000000000000c0 = unaff_x29 + -0x80;
            pcStack00000000000000c8 =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            *(char **)(unaff_x29 + -0xa0) = s_MITM_tunnel_error__108acffe1;
            *(long **)(unaff_x29 + -0x98) = &stack0x000000c0;
            *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa0;
            *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
            in_stack_00000168 = unaff_x29 + -0x70;
            in_stack_00000160 = 1;
            in_stack_00000170 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&stack0x00000048,&stack0x00000160);
          }
        }
      }
      (**(code **)**(undefined8 **)(unaff_x29 + -0x80))();
    }
    if (*(long *)(unaff_x19 + 200) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xd0));
    }
    if ((*(byte *)(unaff_x19 + 0x90) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x90))) {
      lVar3 = **(long **)(unaff_x19 + 0x98);
      **(long **)(unaff_x19 + 0x98) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if ((*(byte *)(unaff_x19 + 0xba) & 1) != 0) {
      FUN_100df8150(unaff_x19 + 0x48);
    }
    uVar6 = 0;
    *(undefined1 *)(unaff_x19 + 0xba) = 0;
    uVar8 = 1;
  }
  else {
    uVar6 = 1;
    uVar8 = 3;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar8;
  return uVar6;
}

