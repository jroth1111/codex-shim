
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100962720(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  ushort *puVar11;
  undefined1 *unaff_x19;
  undefined8 *puVar12;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined2 *unaff_x25;
  undefined8 *puVar16;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  ulong in_stack_00000000;
  undefined8 *puStack0000000000000010;
  ulong uStack0000000000000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined2 *in_stack_00000038;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 *in_stack_00000108;
  ulong in_stack_00000110;
  undefined8 *in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 *in_stack_00000128;
  short sStack0000000000000130;
  undefined4 uStack0000000000000132;
  undefined2 uStack0000000000000136;
  long *in_stack_00000208;
  undefined4 uVar19;
  undefined2 uVar20;
  long in_stack_00004ca0;
  long in_stack_00004ca8;
  long in_stack_00004cb0;
  long in_stack_00004cb8;
  long in_stack_00004cc0;
  long in_stack_00004cc8;
  long in_stack_00004cd0;
  long in_stack_00004cd8;
  undefined8 *in_stack_00004ce0;
  ulong in_stack_00004ce8;
  undefined8 *in_stack_00004cf0;
  undefined8 *in_stack_00004df0;
  ulong in_stack_00004df8;
  undefined8 *in_stack_00004e00;
  ulong in_stack_00004e08;
  undefined8 *in_stack_00004e10;
  ulong in_stack_00004e18;
  undefined8 *in_stack_00004e20;
  ushort in_stack_00004e28;
  undefined4 in_stack_00004e2a;
  undefined2 in_stack_00004e2e;
  undefined8 in_stack_00004e30;
  undefined8 in_stack_00004e38;
  undefined8 in_stack_00004e40;
  undefined8 in_stack_00004e48;
  undefined8 in_stack_00004e50;
  undefined8 in_stack_00004e58;
  undefined8 in_stack_00004e60;
  undefined8 in_stack_00004e68;
  undefined8 in_stack_00004e70;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004df0,s__public_plugins_workspace__108acf4ab,&stack0x00000100);
  *(ulong *)(unaff_x20 + 0x26d8) = in_stack_00004df8;
  *(undefined8 **)(unaff_x20 + 0x26d0) = in_stack_00004df0;
  *(undefined8 **)(unaff_x20 + 0x26e0) = in_stack_00004e00;
  uVar9 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E();
  *(undefined8 *)(unaff_x20 + 0x26e8) = uVar9;
  FUN_1011d51fc(&stack0x00000100,uVar9,&UNK_108cc3fe8,*(undefined8 *)(unaff_x20 + 0x26d8),
                *(undefined8 *)(unaff_x20 + 0x26e0));
  __ZN18codex_core_plugins6remote21authenticated_request17h250c66f122829838E
            (&stack0x00004df0,&stack0x00000100);
  uVar14 = (ulong)in_stack_00004e28;
  *(undefined4 *)(unaff_x29 + -0xb0) = in_stack_00004e2a;
  *(undefined2 *)(unaff_x29 + -0xac) = in_stack_00004e2e;
  puStack0000000000000010 = in_stack_00004e20;
  if (in_stack_00004df0 == (undefined8 *)0x3) {
    *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0xb0);
    *(undefined2 *)(unaff_x29 + -0xb4) = *(undefined2 *)(unaff_x29 + -0xac);
    uVar13 = in_stack_00004df8;
    puVar16 = in_stack_00004e00;
    in_stack_00000000 = in_stack_00004e08;
    uStack0000000000000018 = in_stack_00004e18;
    in_stack_00004df0 = in_stack_00004ce0;
    in_stack_00004df8 = in_stack_00004ce8;
    in_stack_00004e00 = in_stack_00004cf0;
LAB_100962d58:
    *(undefined1 *)(unaff_x25 + 0x230) = 0;
    lVar6 = **(long **)(unaff_x20 + 0x26e8);
    **(long **)(unaff_x20 + 0x26e8) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(unaff_x20 + 0x26e8);
    }
    if (*(long *)(unaff_x20 + 0x26d0) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26d8));
    }
    uVar19 = *(undefined4 *)(unaff_x29 + -0xb8);
    uVar20 = *(undefined2 *)(unaff_x29 + -0xb4);
    *(undefined1 *)in_stack_00000020 = 1;
    in_stack_00000020 = in_stack_00004e10;
    if (uVar13 != unaff_x28 + 1) goto LAB_100962fb0;
LAB_100962dc4:
    *unaff_x19 = 4;
LAB_100962dcc:
    *unaff_x21 = unaff_x28 + 0x5d;
    uVar10 = 3;
    goto LAB_1009631a0;
  }
  *(undefined1 *)(unaff_x25 + 0x230) = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x26d8);
  lVar6 = unaff_x20 + 0x26f0;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x26e0);
  _memcpy(lVar6,&stack0x00004ce0,0x110);
  *(undefined8 *)(unaff_x20 + 0x2800) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2808) = uVar15;
  *(char **)(unaff_x20 + 0x2810) = s__108acf4ca;
  *(undefined8 *)(unaff_x20 + 0x2818) = 1;
  *(undefined1 *)unaff_x25 = 0;
  *(undefined1 *)((long)unaff_x25 + 1) = 0;
  _memcpy(&stack0x00000100,lVar6,0x110);
  *(undefined8 *)(unaff_x20 + 0x2820) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2828) = uVar15;
  *(char **)(unaff_x20 + 0x2830) = s__108acf4ca;
  *(undefined8 *)(unaff_x20 + 0x2838) = 1;
  if (in_stack_00000100 == 2) {
    auVar18._8_8_ = in_stack_00000108;
    auVar18._0_8_ = 1;
  }
  else {
    auVar18 = FUN_105c4eee0(in_stack_00000208,&stack0x00000100);
  }
  uStack0000000000000018 = auVar18._8_8_;
  lVar5 = *in_stack_00000208;
  *in_stack_00000208 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000208);
  }
  *(undefined1 (*) [16])(unaff_x20 + 0x2848) = auVar18;
  puVar16 = (undefined8 *)(unaff_x20 + 0x2850);
  if ((auVar18._0_8_ & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00004df0,uStack0000000000000018);
    if (in_stack_00004df0 != (undefined8 *)0x4) {
      uVar9 = *(undefined8 *)(in_stack_00000038 + 4);
      uVar15 = *puVar16;
      puVar12 = in_stack_00004df0;
      uStack0000000000000018 = in_stack_00004df8;
      goto LAB_1009629a8;
    }
    *(undefined1 *)in_stack_00000038 = 3;
LAB_100962b38:
    unaff_x28 = 0x8000000000000014;
    *(undefined1 *)in_stack_00000020 = 3;
    goto LAB_100962dc4;
  }
  *puVar16 = 0;
  if (uStack0000000000000018 == 0) {
    FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
    goto LAB_1009632f0;
  }
  uVar15 = 0;
  uVar9 = 1;
  puVar12 = (undefined8 *)0x3;
LAB_1009629a8:
  in_stack_00000000 = CONCAT44(in_stack_00000000._4_4_,(uint)in_stack_00004e28);
  *(undefined4 *)(unaff_x29 + -0xd0) = in_stack_00004e2a;
  *(undefined2 *)(unaff_x29 + -0xcc) = in_stack_00004e2e;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00004e58;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00004e50;
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00004e68;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00004e60;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00004e70;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00004e38;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00004e30;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00004e48;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00004e40;
  FUN_100e03d7c(uVar9,uVar15);
  if (puVar12 == (undefined8 *)0x3) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x2820);
    in_stack_00004e10 = *(undefined8 **)(unaff_x20 + 0x2828);
    if (in_stack_00004e10 == (undefined8 *)0x0) {
      in_stack_00000000 = 1;
    }
    else {
      in_stack_00000000 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00004e10,1);
      if (in_stack_00000000 == 0) {
        func_0x0001087c9084(1,in_stack_00004e10);
LAB_1009632f0:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009632f4);
        (*pcVar4)();
      }
    }
    _memcpy(in_stack_00000000,uVar9,in_stack_00004e10);
    uVar14 = 0;
    uVar13 = 0x8000000000000003;
    puVar16 = in_stack_00004e10;
  }
  else {
    *(undefined8 **)(unaff_x20 + 0x2850) = puVar12;
    *(ulong *)(unaff_x20 + 0x2858) = uStack0000000000000018;
    *(undefined8 **)(unaff_x20 + 0x2860) = in_stack_00004e00;
    *(ulong *)(unaff_x20 + 0x2868) = in_stack_00004e08;
    *(undefined8 **)(unaff_x20 + 0x2870) = in_stack_00004e10;
    *(ulong *)(unaff_x20 + 0x2878) = in_stack_00004e18;
    *(undefined8 **)(unaff_x20 + 0x2880) = in_stack_00004e20;
    in_stack_00000038[0x24] = in_stack_00004e28;
    *(undefined2 *)(unaff_x20 + 0x288e) = *(undefined2 *)(unaff_x29 + -0xcc);
    *(undefined4 *)(unaff_x20 + 0x288a) = *(undefined4 *)(unaff_x29 + -0xd0);
    *(undefined8 *)(unaff_x20 + 0x28d0) = *(undefined8 *)(unaff_x29 + -0x70);
    uVar17 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar15 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x20 + 0x28c8) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x20 + 0x28c0) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x28b8) = uVar17;
    *(undefined8 *)(unaff_x20 + 0x28b0) = uVar15;
    uVar17 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar9 = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x20 + 0x28a8) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x20 + 0x28a0) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x2898) = uVar17;
    *(undefined8 *)(unaff_x20 + 0x2890) = uVar15;
    in_stack_00000038[4] = in_stack_00000038[0x3c];
    *(undefined1 *)((long)in_stack_00000038 + 1) = 0;
    *(undefined8 *)(unaff_x20 + 0x2958) = *(undefined8 *)(unaff_x20 + 0x28d0);
    *(undefined8 *)(unaff_x20 + 0x2940) = *(undefined8 *)(unaff_x20 + 0x28b8);
    *(undefined8 *)(unaff_x20 + 0x2938) = *(undefined8 *)(unaff_x20 + 0x28b0);
    *(undefined8 *)(unaff_x20 + 0x2950) = *(undefined8 *)(unaff_x20 + 0x28c8);
    *(undefined8 *)(unaff_x20 + 0x2948) = *(undefined8 *)(unaff_x20 + 0x28c0);
    *(undefined8 *)(unaff_x20 + 0x2920) = *(undefined8 *)(unaff_x20 + 0x2898);
    *(undefined8 *)(unaff_x20 + 0x2918) = *(undefined8 *)(unaff_x20 + 0x2890);
    *(undefined8 *)(unaff_x20 + 0x2930) = *(undefined8 *)(unaff_x20 + 0x28a8);
    *(undefined8 *)(unaff_x20 + 0x2928) = *(undefined8 *)(unaff_x20 + 0x28a0);
    *(undefined8 *)(unaff_x20 + 0x2900) = *(undefined8 *)(unaff_x20 + 0x2878);
    *(undefined8 *)(unaff_x20 + 0x28f8) = *(undefined8 *)(unaff_x20 + 0x2870);
    *(undefined8 *)(unaff_x20 + 0x2910) = *(undefined8 *)(unaff_x20 + 0x2888);
    *(undefined8 *)(unaff_x20 + 0x2908) = *(undefined8 *)(unaff_x20 + 0x2880);
    *(undefined8 *)(unaff_x20 + 0x28e0) = *(undefined8 *)(unaff_x20 + 0x2858);
    *(undefined8 *)(unaff_x20 + 0x28d8) = *puVar16;
    *(undefined8 *)(unaff_x20 + 0x28f0) = *(undefined8 *)(unaff_x20 + 0x2868);
    *(undefined8 *)(unaff_x20 + 0x28e8) = *(undefined8 *)(unaff_x20 + 0x2860);
    *(undefined1 *)(in_stack_00000038 + 0x228) = 0;
    FUN_1011d6b78(&stack0x00004df0,unaff_x20 + 0x28d8);
    if (in_stack_00004df0 == (undefined8 *)0x8000000000000001) {
      *(undefined1 *)in_stack_00000038 = 4;
      goto LAB_100962b38;
    }
    if (*(char *)(in_stack_00000038 + 0x228) == '\x03') {
      FUN_100cbe7c8(unaff_x20 + 0x2960);
    }
    else if (*(char *)(in_stack_00000038 + 0x228) == '\0') {
      FUN_100e0d524(unaff_x20 + 0x28d8);
    }
    in_stack_00004e10 = in_stack_00004df0;
    puStack0000000000000010 = in_stack_00004e00;
    uStack0000000000000018 = in_stack_00004df8;
    if (in_stack_00004df0 == (undefined8 *)0x8000000000000000) {
      FUN_100de20f8(in_stack_00004df8);
      _free(in_stack_00004df8);
      puStack0000000000000010 = (undefined8 *)0x0;
      uStack0000000000000018 = 1;
      in_stack_00004e10 = (undefined8 *)0x0;
    }
    uVar14 = (ulong)(ushort)in_stack_00000038[4];
    lVar5 = *(long *)(unaff_x20 + 0x2838) << 1;
    puVar11 = *(ushort **)(unaff_x20 + 0x2830);
    do {
      if (lVar5 == 0) {
        uVar13 = *(ulong *)(unaff_x20 + 0x2828);
        if (uVar13 == 0) {
          in_stack_00000000 = 0;
          puVar16 = (undefined8 *)0x1;
          goto LAB_100962c68;
        }
        uVar9 = *(undefined8 *)(unaff_x20 + 0x2820);
        puVar16 = (undefined8 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar13,1);
        if (puVar16 != (undefined8 *)0x0) {
          _memcpy(puVar16,uVar9,uVar13);
          uVar14 = (ulong)(ushort)in_stack_00000038[4];
          *in_stack_00000038 = 1;
          in_stack_00000000 = uVar13;
          if (uVar13 != 0x8000000000000015) goto LAB_100962c70;
          goto LAB_100962b38;
        }
        func_0x0001087c9084(1,uVar13);
        goto LAB_1009632f0;
      }
      uVar3 = *puVar11;
      lVar5 = lVar5 + -2;
      puVar11 = puVar11 + 1;
    } while (uVar3 != in_stack_00000038[4]);
    if (in_stack_00004e10 != (undefined8 *)0x0) {
      _free(uStack0000000000000018);
    }
    uVar14 = 0;
    uVar13 = 0x8000000000000014;
    puVar16 = in_stack_00000030;
  }
LAB_100962c68:
  *in_stack_00000038 = 1;
LAB_100962c70:
  unaff_x28 = 0x8000000000000014;
  FUN_100cb9304(lVar6);
  unaff_x25 = in_stack_00000038;
  if (uVar13 != 0x8000000000000014) goto LAB_100962d58;
  lVar6 = __ZN18codex_core_plugins6remote5share11local_paths30remove_plugin_share_local_path17hf9393ac07287085eE
                    (*(undefined8 *)(unaff_x20 + 0x2678),*(undefined8 *)(unaff_x20 + 0x2680),
                     *(undefined8 *)(unaff_x20 + 0x2688),*(undefined8 *)(unaff_x20 + 0x2690));
  puVar16 = (undefined8 *)(unaff_x29 + -0xf8);
  if (lVar6 != 0) {
    *(long *)(unaff_x29 + -0x100) = lVar6;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62b8c8 - 1 < 2 ||
         ((bRam000000010b62b8c8 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN18codex_core_plugins6remote5share26delete_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h947addae87d24901E
                             ), cVar7 != '\0')))) &&
        (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN18codex_core_plugins6remote5share26delete_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h947addae87d24901E
                            ), (uVar14 & 1) != 0)))) {
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x100;
      *(code **)(unaff_x29 + -0xa8) =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      *(char **)(unaff_x29 + -0xd0) = s_2failed_to_remove_plugin_share_l_108acf4cc;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
      *(long *)(unaff_x29 + -0xe0) = unaff_x20 + 0x2688;
      in_stack_00000100 = unaff_x29 - 0xd0;
      in_stack_00000108 = (undefined8 *)&UNK_10b208fd0;
      in_stack_00000110 = unaff_x29 - 0xe0;
      in_stack_00000118 = (undefined8 *)&UNK_10b21e528;
      FUN_100a7c39c(&stack0x00004df0);
    }
    else {
      lVar6 = 
      ___ZN18codex_core_plugins6remote5share26delete_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h947addae87d24901E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar9 = *(undefined8 *)
                 (
                 ___ZN18codex_core_plugins6remote5share26delete_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h947addae87d24901E
                 + 0x20);
        uVar15 = *(undefined8 *)
                  (
                  ___ZN18codex_core_plugins6remote5share26delete_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h947addae87d24901E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xf8) = 2;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar15;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xf8);
        if (iVar8 != 0) {
          *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x100;
          *(code **)(unaff_x29 + -200) =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          *(char **)(unaff_x29 + -0xe0) = s_2failed_to_remove_plugin_share_l_108acf4cc;
          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xd0;
          *(long *)(unaff_x29 + -0xc0) = unaff_x20 + 0x2688;
          in_stack_00000100 = unaff_x29 - 0xe0;
          in_stack_00000108 = (undefined8 *)&UNK_10b208fd0;
          in_stack_00000110 = unaff_x29 - 0xc0;
          in_stack_00000118 = (undefined8 *)&UNK_10b21e528;
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xf0);
          *(undefined8 *)(unaff_x29 + -0xb0) = *puVar16;
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar2,puVar1,unaff_x29 + -0xb0,&stack0x00004df0);
        }
      }
    }
    uVar14 = *(ulong *)(unaff_x29 + -0x100);
    if ((uVar14 & 3) == 1) {
      uVar9 = *(undefined8 *)(uVar14 - 1);
      puVar12 = *(undefined8 **)(uVar14 + 7);
      pcVar4 = (code *)*puVar12;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar9);
      }
      if (puVar12[1] != 0) {
        _free(uVar9);
      }
      _free((undefined8 *)(uVar14 - 1));
    }
  }
  unaff_x28 = 0x8000000000000014;
  *(undefined1 *)(in_stack_00000038 + 0x230) = 0;
  lVar6 = **(long **)(unaff_x20 + 0x26e8);
  **(long **)(unaff_x20 + 0x26e8) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(unaff_x20 + 0x26e8);
  }
  if (*(long *)(unaff_x20 + 0x26d0) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x26d8));
  }
  uVar13 = 0x8000000000000014;
  uVar14 = 0;
  uVar19 = *(undefined4 *)(unaff_x29 + -0xb8);
  uVar20 = *(undefined2 *)(unaff_x29 + -0xb4);
  *(undefined1 *)in_stack_00000020 = 1;
LAB_100962fb0:
  FUN_100cc8730(in_stack_00000028);
  if (uVar13 == unaff_x28) {
LAB_1009630c4:
    __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor27clear_plugin_related_caches17hb1255b89d75ef5e3E
              (*(undefined8 *)(unaff_x20 + 0x40));
    if (*(long *)(unaff_x20 + 0x2660) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2668));
    }
    if (*(long *)(unaff_x20 + 0x2648) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2650));
    }
    if (*(long *)(unaff_x20 + 0x25b0) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x25b0);
    }
    FUN_100de93d0(unaff_x20 + 0x68);
    *(undefined2 *)(unaff_x20 + 0x60) = 1;
    in_stack_00004df0 = (undefined8 *)0x8000000000000000;
    in_stack_00004df8 = uVar13;
    in_stack_00004e00 = puVar16;
  }
  else {
    in_stack_00000110 = in_stack_00000000;
    in_stack_00000120 = uStack0000000000000018;
    in_stack_00000128 = puStack0000000000000010;
    sStack0000000000000130 = (short)uVar14;
    *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cb3e1d;
    *(undefined8 *)(unaff_x29 + -0xa8) = 0x1a;
    in_stack_00000100 = uVar13;
    in_stack_00000108 = puVar16;
    in_stack_00000118 = in_stack_00000020;
    uStack0000000000000132 = uVar19;
    uStack0000000000000136 = uVar20;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00004ce0,s___108add0c1,&stack0x00004df0);
    uVar13 = in_stack_00000100;
    if (-1 < (long)in_stack_00000100) {
      uVar13 = 4;
    }
    uVar14 = 0xffffffffffff80a8;
    if (((1L << (uVar13 & 0x3f) & 0xeceecU) != 0) ||
       (((1L << (uVar13 & 0x3f) & 0x13103U) == 0 && (sStack0000000000000130 != 0x194)))) {
      uVar14 = 0xffffffffffff80a5;
    }
    FUN_101960064(&stack0x00000100);
    uVar13 = in_stack_00004df8;
    puVar16 = in_stack_00004e00;
    if (in_stack_00004df0 == (undefined8 *)0x8000000000000000) goto LAB_1009630c4;
    if (*(long *)(unaff_x20 + 0x2660) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2668));
    }
    if (*(long *)(unaff_x20 + 0x2648) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2650));
    }
    if (*(long *)(unaff_x20 + 0x25b0) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x25b0);
    }
    FUN_100de93d0(unaff_x20 + 0x68);
    in_stack_00000020 = (undefined8 *)(unaff_x28 - 0xf);
    if (((*(byte *)(unaff_x20 + 0x61) & 1) != 0) && (*(long *)(unaff_x20 + 0x48) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x50));
    }
    *(undefined2 *)(unaff_x20 + 0x60) = 1;
    if (in_stack_00004df0 == (undefined8 *)0x8000000000000001) goto LAB_100962dcc;
  }
  FUN_100d44b08(in_stack_00000030);
  if (in_stack_00004df0 == (undefined8 *)0x8000000000000000) {
    lVar6 = unaff_x28 + 0x15;
  }
  else {
    lVar6 = unaff_x28 + 0x5c;
    in_stack_000000c0 = in_stack_00004ca0;
    in_stack_000000c8 = in_stack_00004ca8;
    in_stack_000000d0 = in_stack_00004cb0;
    in_stack_000000d8 = in_stack_00004cb8;
    in_stack_000000e0 = in_stack_00004cc0;
    in_stack_000000e8 = in_stack_00004cc8;
    in_stack_000000f0 = in_stack_00004cd0;
    in_stack_000000f8 = in_stack_00004cd8;
  }
  unaff_x21[6] = in_stack_000000c8;
  unaff_x21[5] = in_stack_000000c0;
  unaff_x21[8] = in_stack_000000d8;
  unaff_x21[7] = in_stack_000000d0;
  unaff_x21[10] = in_stack_000000e8;
  unaff_x21[9] = in_stack_000000e0;
  *unaff_x21 = lVar6;
  unaff_x21[1] = (long)in_stack_00004df0;
  unaff_x21[2] = in_stack_00004df8;
  unaff_x21[3] = (long)in_stack_00004e00;
  unaff_x21[4] = (long)in_stack_00000020;
  unaff_x21[0xc] = in_stack_000000f8;
  unaff_x21[0xb] = in_stack_000000f0;
  uVar10 = 1;
  unaff_x21[0xd] = uVar14;
LAB_1009631a0:
  *(undefined1 *)(in_stack_00000038 + 0x688) = uVar10;
  return;
}

