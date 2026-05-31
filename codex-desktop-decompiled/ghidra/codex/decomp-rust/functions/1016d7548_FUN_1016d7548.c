
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016d7548(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long unaff_x19;
  long lVar9;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  long unaff_x29;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  char *in_stack_00000060;
  undefined8 *in_stack_00000068;
  long in_stack_00000070;
  undefined *in_stack_00000078;
  undefined8 in_stack_00000080;
  char *in_stack_00000090;
  undefined8 *in_stack_00000098;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__Failed_to_close_side_conversati_108adbad6,unaff_x29 + -0x60);
  (**(code **)*in_stack_00000030)();
  lVar9 = *(long *)(unaff_x29 + -0x78);
  puVar12 = (undefined8 *)unaff_x23[2];
  pcVar10 = (char *)unaff_x23[1];
  *unaff_x24 = 1;
  if (lVar9 == -0x7fffffffffffffff) {
    uVar6 = 2;
    uVar8 = 3;
    goto LAB_1016d7a0c;
  }
  in_stack_00000060 = pcVar10;
  in_stack_00000068 = puVar12;
  in_stack_00000090 = pcVar10;
  in_stack_00000098 = puVar12;
  func_0x000100d09f50();
  if (lVar9 == -0x8000000000000000) {
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x38);
    in_stack_00000030 = *(undefined8 **)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000038;
    *(undefined8 **)(unaff_x19 + 0x50) = in_stack_00000030;
    *(undefined1 *)(unaff_x19 + 0x960) = 0;
    auVar13 = FUN_10167074c(unaff_x19 + 0x48);
    if ((auVar13._0_8_ & 1) != 0) {
      uVar6 = 2;
      uVar8 = 4;
      goto LAB_1016d7a0c;
    }
    if (*(char *)(unaff_x19 + 0x960) == '\x03') {
      FUN_100d7ee48(unaff_x19 + 0x70);
    }
    if (auVar13._8_8_ != (undefined8 *)0x0) {
      *(long *)(unaff_x29 + -0x60) = unaff_x19 + 0x30;
      *(undefined **)(unaff_x29 + -0x58) =
           &
           __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      *(undefined8 ***)(unaff_x29 + -0x50) = &stack0x00000040;
      *(undefined **)(unaff_x29 + -0x48) =
           &
           __ZN4eyre5error61__LT_impl_u20_core__fmt__Display_u20_for_u20_eyre__Report_GT_3fmt17hd5e5355fe6b94b1aE
      ;
      in_stack_00000040 = auVar13._8_8_;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__Failed_to_close_side_conversati_108adbad6,unaff_x29 + -0x60);
      in_stack_00000078 = (undefined *)unaff_x23[1];
      in_stack_00000070 = *unaff_x23;
      in_stack_00000080 = *(undefined8 *)(unaff_x29 + -0x68);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b6311d8 - 1 < 2 ||
           ((bRam000000010b6311d8 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
                               ), cVar4 != '\0')))))) &&
         (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
                            ), (uVar7 & 1) != 0)) {
        lVar9 = ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
                + 0x30;
        *(long **)(unaff_x29 + -0x78) = &stack0x00000070;
        *(undefined **)(unaff_x29 + -0x70) = &DAT_10112965c;
        in_stack_00000098 = (undefined8 *)(unaff_x29 + -0x78);
        in_stack_00000090 = s__108b1bd74;
        in_stack_00000060 = (char *)&stack0x00000090;
        in_stack_00000068 = (undefined8 *)&UNK_10b208fd0;
        *(undefined8 *)(unaff_x29 + -0x60) = 1;
        *(char ***)(unaff_x29 + -0x58) = &stack0x00000060;
        *(undefined8 *)(unaff_x29 + -0x50) = 1;
        *(long *)(unaff_x29 + -0x48) = lVar9;
        FUN_1016d7c38(unaff_x29 + -0x60);
      }
      else {
        lVar9 = 
        ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000050 =
               *(undefined8 *)
                (
                ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
                + 0x20);
          in_stack_00000058 =
               *(undefined8 *)
                (
                ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
                + 0x28);
          in_stack_00000048 = 2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000048);
          if (iVar5 != 0) {
            lVar1 = ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h954e9035527f6471E
                    + 0x30;
            *(long **)(unaff_x29 + -0x78) = &stack0x00000070;
            *(undefined **)(unaff_x29 + -0x70) = &DAT_10112965c;
            in_stack_00000098 = (undefined8 *)(unaff_x29 + -0x78);
            in_stack_00000090 = s__108b1bd74;
            in_stack_00000060 = (char *)&stack0x00000090;
            in_stack_00000068 = (undefined8 *)&UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0x60) = 1;
            *(char ***)(unaff_x29 + -0x58) = &stack0x00000060;
            *(undefined8 *)(unaff_x29 + -0x50) = 1;
            *(long *)(unaff_x29 + -0x48) = lVar1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar9,puVar3,puVar2,&stack0x00000048,unaff_x29 + -0x60);
          }
        }
      }
      uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
      *(undefined **)(unaff_x29 + -0x58) = in_stack_00000078;
      *(long *)(unaff_x29 + -0x60) = in_stack_00000070;
      *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000080;
      __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
                (uVar6,unaff_x29 + -0x60);
      (**(code **)*in_stack_00000040)();
      goto LAB_1016d7a04;
    }
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x78) = 0;
    uVar7 = FUN_1016d7eb0(unaff_x19 + 0x48);
    if ((uVar7 & 1) != 0) {
      uVar6 = 2;
      uVar8 = 5;
      goto LAB_1016d7a0c;
    }
    FUN_100d1b9a8(unaff_x19 + 0x48);
    uVar6 = 1;
  }
  else {
    *(long *)(unaff_x29 + -0x78) = lVar9;
    unaff_x23[2] = puVar12;
    unaff_x23[1] = pcVar10;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b6311f0 - 1 < 2 ||
         ((bRam000000010b6311f0 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
                             ), cVar4 != '\0')))) &&
        (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
                           ), (uVar7 & 1) != 0)))) {
      lVar9 = ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
              + 0x30;
      in_stack_00000070 = unaff_x29 + -0x78;
      in_stack_00000078 = &DAT_10112965c;
      in_stack_00000098 = &stack0x00000070;
      in_stack_00000090 = s__108b1bd74;
      in_stack_00000060 = (char *)&stack0x00000090;
      in_stack_00000068 = (undefined8 *)&UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0x60) = 1;
      *(char ***)(unaff_x29 + -0x58) = &stack0x00000060;
      *(undefined8 *)(unaff_x29 + -0x50) = 1;
      *(long *)(unaff_x29 + -0x48) = lVar9;
      FUN_1016d7d74(unaff_x29 + -0x60);
    }
    else {
      lVar9 = 
      ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000020 =
             *(undefined8 *)
              (
              ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
              + 0x20);
        in_stack_00000028 =
             *(undefined8 *)
              (
              ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
              + 0x28);
        in_stack_00000018 = 2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000018);
        if (iVar5 != 0) {
          lVar1 = ___ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_19discard_side_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf1b080ce96a52fc6E
                  + 0x30;
          in_stack_00000070 = unaff_x29 + -0x78;
          in_stack_00000078 = &DAT_10112965c;
          in_stack_00000098 = &stack0x00000070;
          in_stack_00000090 = s__108b1bd74;
          in_stack_00000060 = (char *)&stack0x00000090;
          in_stack_00000068 = (undefined8 *)&UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0x60) = 1;
          *(char ***)(unaff_x29 + -0x58) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -0x50) = 1;
          *(long *)(unaff_x29 + -0x48) = lVar1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar9,puVar3,puVar2,&stack0x00000018,unaff_x29 + -0x60);
        }
      }
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar11 = *unaff_x23;
    *(undefined8 *)(unaff_x29 + -0x58) = unaff_x23[1];
    *(undefined8 *)(unaff_x29 + -0x60) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x68);
    __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
              (uVar6,unaff_x29 + -0x60);
LAB_1016d7a04:
    uVar6 = 0;
  }
  uVar8 = 1;
LAB_1016d7a0c:
  *(undefined1 *)(unaff_x19 + 0x40) = uVar8;
  return uVar6;
}

