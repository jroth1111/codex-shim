
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101499e54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  char *pcStack0000000000000060;
  undefined1 *puStack0000000000000068;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined1 *puStack0000000000000088;
  undefined *puStack0000000000000090;
  char *pcStack0000000000000098;
  undefined8 *puStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  long in_stack_000000d8;
  undefined1 *in_stack_000000e0;
  undefined *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  puStack00000000000000a0 = &stack0x000000c0;
  pcStack0000000000000098 = s__failed_to_resolve_AAAA_for_doma_108ad84c8;
  puStack0000000000000088 = (undefined1 *)&stack0x00000098;
  puStack0000000000000090 = &UNK_10b208fd0;
  puStack0000000000000068 = (undefined1 *)&stack0x00000088;
  pcStack0000000000000060 = (char *)0x1;
  uStack0000000000000070 = 1;
  lStack0000000000000078 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000060);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar15 = *unaff_x21;
    in_stack_000000e8 = *(undefined **)(lVar15 + 0x20);
    in_stack_000000f0 = *(undefined8 *)(lVar15 + 0x28);
    in_stack_000000e0 = (undefined1 *)0x4;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000e0);
    if (iVar11 != 0) {
      lVar9 = *(long *)(lVar15 + 0x60);
      uVar18 = *(undefined8 *)(lVar15 + 0x68);
      lVar6 = *(long *)(lVar15 + 0x50);
      uVar19 = *(undefined8 *)(lVar15 + 0x58);
      uVar17 = 1;
      if (lVar6 == 0) {
        uVar17 = 2;
      }
      uVar4 = *(undefined4 *)(lVar15 + 8);
      uVar5 = *(undefined4 *)(lVar15 + 0xc);
      *(char ***)(unaff_x29 + -0x80) = &stack0x00000060;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar9 == 0) {
        uVar1 = 2;
      }
      unaff_x26[0xf] = unaff_x26[5];
      unaff_x26[0xe] = unaff_x26[4];
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000f0;
      *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar17;
      *(long *)(unaff_x29 + -0xd8) = lVar6;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar19;
      *(undefined8 *)(unaff_x29 + -200) = uVar1;
      *(long *)(unaff_x29 + -0xc0) = lVar9;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar18;
      *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
    }
  }
  puVar13 = in_stack_00000058;
  puVar16 = in_stack_00000050;
  if ((code *)*in_stack_00000058 != (code *)0x0) {
    (*(code *)*in_stack_00000058)(in_stack_00000050);
  }
  if (puVar13[1] != 0) {
    _free(puVar16);
  }
  if (*(char *)(unaff_x19 + 0x20) == '\x19') {
    __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
              (unaff_x29 + -0xe0);
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
    unaff_x26[9] = *(undefined8 *)(unaff_x19 + 0x28);
    unaff_x26[8] = uVar17;
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x19 + 0x30);
  }
  unaff_x26[1] = unaff_x26[9];
  *unaff_x26 = unaff_x26[8];
  in_stack_000000d0 = *(undefined8 **)(unaff_x29 + -0xd0);
  if (lRam000000010b635d78 != 0) {
    FUN_108a2e6a0();
  }
  lVar15 = *___ZN8rama_dns6global19GLOBAL_DNS_RESOLVER17hf9a5be1ef46ef2c9E;
  *___ZN8rama_dns6global19GLOBAL_DNS_RESOLVER17hf9a5be1ef46ef2c9E = lVar15 + 1;
  uVar17 = uRam000000010b635d70;
  plVar7 = ___ZN8rama_dns6global19GLOBAL_DNS_RESOLVER17hf9a5be1ef46ef2c9E;
  if (lVar15 < 0) goto LAB_10149a708;
  uVar19 = unaff_x26[1];
  uVar18 = *unaff_x26;
  in_stack_00000010[2] = in_stack_000000d0;
  in_stack_00000010[1] = uVar19;
  *in_stack_00000010 = uVar18;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar17;
  *(long **)(unaff_x19 + 0x60) = plVar7;
  *(undefined1 *)(unaff_x19 + 0x80) = 0;
  func_0x0001011c60dc(unaff_x29 + -0xe0,unaff_x19 + 0x48,in_stack_00000008);
  lVar15 = *(long *)(unaff_x29 + -0xe0);
  if (lVar15 == -0x7fffffffffffffff) {
    *unaff_x20 = -0x7fffffffffffffff;
    uVar14 = 4;
    goto LAB_10149a4d8;
  }
  puVar13 = *(undefined8 **)(unaff_x29 + -0xd8);
  puVar16 = *(undefined8 **)(unaff_x29 + -0xd0);
  FUN_100d221e0(unaff_x19 + 0x48);
  if (lVar15 == -0x8000000000000000) {
    in_stack_00000050 = puVar13;
    in_stack_00000058 = puVar16;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      if (1 < bRam000000010b635d48 - 1) {
        if (bRam000000010b635d48 != 0) {
          cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
                             );
          unaff_x26 = &stack0x000000c0;
          if (cVar10 != '\0') goto LAB_10149a1b0;
        }
        goto LAB_10149a354;
      }
LAB_10149a1b0:
      uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
                         );
      if ((uVar12 & 1) == 0) goto LAB_10149a354;
      lStack0000000000000078 =
           ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
           + 0x30;
      in_stack_000000c0 = unaff_x19 + 0x20;
      in_stack_000000c8 =
           (undefined8 *)
           &
           __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
      ;
      in_stack_000000d0 = &stack0x00000050;
      in_stack_000000d8 = 0x10117aba8;
      puStack00000000000000a0 = &stack0x000000c0;
      pcStack0000000000000098 = s__failed_to_resolve_AAAA_for_doma_108ad84c8;
      puStack0000000000000088 = (undefined1 *)&stack0x00000098;
      puStack0000000000000090 = &UNK_10b208fd0;
      puStack0000000000000068 = (undefined1 *)&stack0x00000088;
      pcStack0000000000000060 = (char *)0x1;
      uStack0000000000000070 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
                 ,&stack0x00000060);
      lVar15 = 
      ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000e8 =
             *(undefined **)
              (
              ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
              + 0x20);
        in_stack_000000f0 =
             *(undefined8 *)
              (
              ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
              + 0x28);
        in_stack_000000e0 = (undefined1 *)0x4;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000e0);
        if (iVar11 != 0) {
          lVar9 = *(long *)(lVar15 + 0x60);
          uVar18 = *(undefined8 *)(lVar15 + 0x68);
          lVar6 = *(long *)(lVar15 + 0x50);
          uVar19 = *(undefined8 *)(lVar15 + 0x58);
          uVar17 = 1;
          if (lVar6 == 0) {
            uVar17 = 2;
          }
          uVar4 = *(undefined4 *)(lVar15 + 8);
          uVar5 = *(undefined4 *)(lVar15 + 0xc);
          *(char ***)(unaff_x29 + -0x80) = &stack0x00000060;
          *(undefined1 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
          uVar1 = 1;
          if (lVar9 == 0) {
            uVar1 = 2;
          }
          unaff_x26[0xf] = unaff_x26[5];
          unaff_x26[0xe] = unaff_x26[4];
          *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000f0;
          *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar17;
          *(long *)(unaff_x29 + -0xd8) = lVar6;
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar19;
          *(undefined8 *)(unaff_x29 + -200) = uVar1;
          *(long *)(unaff_x29 + -0xc0) = lVar9;
          *(undefined8 *)(unaff_x29 + -0xb8) = uVar18;
          *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
          *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
          (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
        }
      }
    }
    else {
LAB_10149a354:
      lVar15 = 
      ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000b0 =
             *(undefined8 *)
              (
              ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
              + 0x20);
        in_stack_000000b8 =
             *(undefined8 *)
              (
              ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
              + 0x28);
        in_stack_000000a8 = 4;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000a8);
        if (iVar11 != 0) {
          in_stack_000000d8 =
               ___ZN8rama_dns5tuple67__LT_impl_u20_rama_dns__DnsResolver_u20_for_u20__LP_T1_C_T2_RP__GT_11ipv6_lookup28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h44f3d79b32ad5af6E
               + 0x30;
          *(long *)(unaff_x29 + -0xe0) = unaff_x19 + 0x20;
          *(undefined **)(unaff_x29 + -0xd8) =
               &
               __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
          ;
          *(undefined8 ***)(unaff_x29 + -0xd0) = &stack0x00000050;
          *(undefined8 *)(unaff_x29 + -200) = 0x10117aba8;
          puStack0000000000000068 = (undefined1 *)(unaff_x29 + -0xe0);
          pcStack0000000000000060 = s__failed_to_resolve_AAAA_for_doma_108ad84c8;
          in_stack_000000e0 = (undefined1 *)&stack0x00000060;
          in_stack_000000e8 = &UNK_10b208fd0;
          in_stack_000000c8 = &stack0x000000e0;
          in_stack_000000c0 = 1;
          in_stack_000000d0 = (undefined8 *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar15,puVar3,puVar2,&stack0x000000a8,&stack0x000000c0);
        }
      }
    }
    puVar13 = in_stack_00000058;
    puVar16 = in_stack_00000050;
    if ((code *)*in_stack_00000058 != (code *)0x0) {
      (*(code *)*in_stack_00000058)(in_stack_00000050);
    }
    if (puVar13[1] != 0) {
      _free(puVar16);
    }
    puVar13 = (undefined8 *)_malloc(0x10);
    if (puVar13 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
LAB_10149a708:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10149a70c);
      (*pcVar8)();
    }
    *puVar13 = &UNK_108cd5f44;
    puVar13[1] = 0x2f;
    if (0x18 < *(byte *)(unaff_x19 + 0x20)) {
      lVar15 = **(long **)(unaff_x19 + 0x28);
      **(long **)(unaff_x19 + 0x28) = lVar15 + -1;
      LORelease();
      if (lVar15 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    puVar16 = (undefined8 *)&UNK_10b209930;
    lVar15 = -0x8000000000000000;
  }
  else if (0x18 < *(byte *)(unaff_x19 + 0x20)) {
    lVar9 = **(long **)(unaff_x19 + 0x28);
    **(long **)(unaff_x19 + 0x28) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  *unaff_x20 = lVar15;
  unaff_x20[1] = (long)puVar13;
  uVar14 = 1;
  unaff_x20[2] = (long)puVar16;
LAB_10149a4d8:
  *(undefined1 *)(unaff_x19 + 0x40) = uVar14;
  return;
}

