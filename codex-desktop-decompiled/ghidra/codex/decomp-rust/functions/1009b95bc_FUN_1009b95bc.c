
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b95bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long *plVar10;
  long unaff_x19;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000090;
  undefined8 *in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00003080;
  undefined8 in_stack_00003088;
  undefined8 in_stack_00003090;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003080,s_6Failed_to_serialize_PatchApprov_108accdfe,&stack0x00002290);
  *(undefined8 *)(unaff_x19 + 0x7b8) = in_stack_00003090;
  *(undefined8 *)(unaff_x19 + 0x7b0) = in_stack_00003088;
  *(undefined8 *)(unaff_x19 + 0x7a8) = in_stack_00003080;
  *(undefined1 *)(unaff_x19 + 0x752) = 1;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b62daa8 - 1 < 2 ||
       ((bRam000000010b62daa8 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_mcp_server14patch_approval29handle_patch_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h94a2f1f9fa9b8b04E
                           ), unaff_x27 = in_stack_00000090, cVar5 != '\0')))) &&
      (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_mcp_server14patch_approval29handle_patch_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h94a2f1f9fa9b8b04E
                         ), (uVar7 & 1) != 0)))) {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN16codex_mcp_server14patch_approval29handle_patch_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h94a2f1f9fa9b8b04E
               ,&stack0x00003080);
    uVar8 = 
    ___ZN16codex_mcp_server14patch_approval29handle_patch_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h94a2f1f9fa9b8b04E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00002290);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar8,puVar2,puVar1,&stack0x00002290,&stack0x00003080);
      }
    }
  }
  else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
          (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000628);
    if (iVar6 != 0) {
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00003080);
    }
  }
  lVar11 = *(long *)(unaff_x19 + 0x5a0) + 0x10;
  plVar10 = *(long **)(unaff_x19 + 0x5b0);
  if ((plVar10 != (long *)0x0) && (lVar4 = *plVar10, *plVar10 = lVar4 + 1, lVar4 < 0))
  goto LAB_1009bdc80;
  *(undefined1 *)(unaff_x19 + 0x752) = 0;
  *(undefined8 *)(unaff_x19 + 0x7c8) = *(undefined8 *)(unaff_x19 + 0x7b0);
  *(undefined8 *)(unaff_x19 + 0x7c0) = *(undefined8 *)(unaff_x19 + 0x7a8);
  *(undefined8 *)(unaff_x19 + 2000) = *(undefined8 *)(unaff_x19 + 0x7b8);
  *(long *)(unaff_x19 + 0x7d8) = unaff_x28;
  *(undefined4 *)(unaff_x19 + 0x820) = 0xffff80a6;
  *(long *)(unaff_x19 + 0x828) = lVar11;
  *(long **)(unaff_x19 + 0x830) = plVar10;
  *(undefined8 *)(unaff_x19 + 0x838) = *(undefined8 *)(unaff_x19 + 0x5b8);
  *(undefined1 *)(unaff_x19 + 0x840) = 0;
  lVar4 = *(long *)(unaff_x19 + 0x7c0);
  func_0x000100fd3924(&stack0x00003080,lVar11,&stack0x00002290);
  if (lVar4 != unaff_x28 + -1) {
    FUN_100e30e98(&stack0x00003080);
  }
  *(undefined1 *)(unaff_x19 + 0x840) = 1;
  *(undefined1 *)(unaff_x19 + 0x752) = 0;
  plVar10 = *(long **)(unaff_x19 + 0x7a0);
  if (*plVar10 == 1) {
    uVar7 = plVar10[1];
    if ((uVar7 & 3) == 1) {
      puVar12 = (undefined8 *)(uVar7 - 1);
      uVar8 = *puVar12;
      puVar13 = *(undefined8 **)(uVar7 + 7);
      pcVar3 = (code *)*puVar13;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar8);
      }
      if (puVar13[1] != 0) {
        _free(uVar8);
      }
      goto LAB_1009b98b0;
    }
  }
  else if ((*plVar10 == 0) && (plVar10[2] != 0)) {
    puVar12 = (undefined8 *)plVar10[1];
LAB_1009b98b0:
    _free(puVar12);
  }
  _free(plVar10);
  *(undefined1 *)(unaff_x19 + 0x751) = 0;
  FUN_100e5e558(unaff_x19 + 0x620);
  lVar4 = *(long *)(unaff_x19 + 0x610);
  lVar11 = *(long *)(unaff_x19 + 0x618);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar12[-1] != 0) {
        _free(*puVar12);
      }
      puVar12 = puVar12 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (*(long *)(unaff_x19 + 0x608) != 0) {
    _free(lVar4);
  }
  if (*(long *)(unaff_x19 + 0x5f0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x5f8));
  }
  if (*(long *)(unaff_x19 + 0x5d8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x5e0));
  }
  if (*(long *)(unaff_x19 + 0x5c0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x5c8));
  }
  plVar10 = *(long **)(unaff_x19 + 0x5b0);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    *plVar10 = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x5b0);
    }
  }
  lVar11 = **(long **)(unaff_x19 + 0x5a8);
  **(long **)(unaff_x19 + 0x5a8) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x5a8);
  }
  lVar11 = **(long **)(unaff_x19 + 0x5a0);
  **(long **)(unaff_x19 + 0x5a0) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(unaff_x19 + 0x5a0);
  }
  *(undefined4 *)(in_stack_000000e8 + 0x2eb) = 0;
  *(undefined1 *)(unaff_x19 + 0x750) = 1;
  func_0x000100ccedc4(unaff_x27);
  if (*(long *)(unaff_x19 + 0x230) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x238));
  }
  iVar6 = *(int *)(unaff_x19 + 0x248);
  if (iVar6 < 0x23) {
    if ((iVar6 != 0) && (iVar6 != 0xd)) {
LAB_1009bbcd8:
      func_0x000100dfc74c(unaff_x19 + 0x248);
    }
  }
  else if (iVar6 != 0x23) {
    if (iVar6 != 0x29) goto LAB_1009bbcd8;
    if (((*(byte *)(unaff_x19 + 0x481) & 1) != 0) && (*(long *)(unaff_x19 + 0x268) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x270));
    }
    *(undefined1 *)(unaff_x19 + 0x481) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x488) = 0;
  *(undefined8 *)(unaff_x19 + 0x480) = 0;
  *(long *)(unaff_x19 + 0x498) = *(long *)(unaff_x19 + 0x420) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x4c0) = 0;
  func_0x0001004f1478(&stack0x000000f0,(undefined8 *)(unaff_x19 + 0x498),*in_stack_000000e0);
  if (in_stack_000000f0 != -0x7fffffffffffffff) {
    _memcpy(unaff_x19 + 0x40,&stack0x000000f0,0x1f0);
    if (((*(char *)(unaff_x19 + 0x4c0) == '\x03') && (*(char *)(unaff_x19 + 0x4b8) == '\x03')) &&
       (lVar11 = *(long *)(unaff_x19 + 0x4b0), lVar11 != 0)) {
      FUN_100d07adc(lVar11);
      _free(lVar11);
    }
    if (*(long *)(unaff_x19 + 0x40) == -0x8000000000000000) {
      *(undefined8 *)(unaff_x19 + 0x500) = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined8 *)(unaff_x19 + 0x4f8) = *(undefined8 *)(unaff_x19 + 0xa8);
      *(undefined8 *)(unaff_x19 + 0x510) = *(undefined8 *)(unaff_x19 + 0xc0);
      *(undefined8 *)(unaff_x19 + 0x508) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x520) = *(undefined8 *)(unaff_x19 + 0xd0);
      *(undefined8 *)(unaff_x19 + 0x518) = *(undefined8 *)(unaff_x19 + 200);
      *(undefined8 *)(unaff_x19 + 0x528) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x4c0) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x4b8) = *(undefined8 *)(unaff_x19 + 0x68);
      *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x4c8) = *(undefined8 *)(unaff_x19 + 0x78);
      *(undefined8 *)(unaff_x19 + 0x4e0) = *(undefined8 *)(unaff_x19 + 0x90);
      *(undefined8 *)(unaff_x19 + 0x4d8) = *(undefined8 *)(unaff_x19 + 0x88);
      *(undefined8 *)(unaff_x19 + 0x4f0) = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0x98);
      *(undefined8 *)(unaff_x19 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x50);
      *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x60);
      *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x58);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00003080,s_Codex_runtime_error__108accf60,&stack0x000014a0);
      __ZN16codex_mcp_server17codex_tool_runner38create_call_tool_result_with_thread_id17h3601e7ab73c1e301E
                (&stack0x00000550,&stack0x000006b0,&stack0x00002290,1);
      *(undefined1 *)(unaff_x19 + 0x489) = 1;
      lVar11 = *(long *)(unaff_x19 + 0x428);
      plVar10 = *(long **)(unaff_x19 + 0x30);
      if ((plVar10 == (long *)0x0) || (lVar4 = *plVar10, *plVar10 = lVar4 + 1, -1 < lVar4)) {
        *(undefined8 *)(unaff_x19 + 0x5a8) = in_stack_000005c8;
        *(undefined8 *)(unaff_x19 + 0x5a0) = in_stack_000005c0;
        *(undefined8 *)(unaff_x19 + 0x5b8) = in_stack_000005d8;
        *(undefined8 *)(unaff_x19 + 0x5b0) = in_stack_000005d0;
        *(undefined8 *)(unaff_x19 + 0x5c8) = in_stack_000005e8;
        *(undefined8 *)(unaff_x19 + 0x5c0) = in_stack_000005e0;
        *(undefined8 *)(unaff_x19 + 0x5d8) = in_stack_000005f8;
        *(undefined8 *)(unaff_x19 + 0x5d0) = in_stack_000005f0;
        *(undefined8 *)(unaff_x19 + 0x568) = in_stack_00000588;
        *(undefined8 *)(unaff_x19 + 0x560) = in_stack_00000580;
        *(undefined8 *)(unaff_x19 + 0x578) = in_stack_00000598;
        *(undefined8 *)(unaff_x19 + 0x570) = in_stack_00000590;
        *(undefined8 *)(unaff_x19 + 0x588) = in_stack_000005a8;
        *(undefined8 *)(unaff_x19 + 0x580) = in_stack_000005a0;
        *(undefined8 *)(unaff_x19 + 0x598) = in_stack_000005b8;
        *(undefined8 *)(unaff_x19 + 0x590) = in_stack_000005b0;
        *(undefined8 *)(unaff_x19 + 0x538) = in_stack_00000558;
        *(undefined8 *)(unaff_x19 + 0x530) = in_stack_00000550;
        *(undefined8 *)(unaff_x19 + 0x548) = in_stack_00000568;
        *(undefined8 *)(unaff_x19 + 0x540) = in_stack_00000560;
        *(undefined1 *)(unaff_x19 + 0x489) = 0;
        *(undefined8 *)(unaff_x19 + 0x558) = in_stack_00000578;
        *(undefined8 *)(unaff_x19 + 0x550) = in_stack_00000570;
        *(long *)(unaff_x19 + 0x5e0) = lVar11 + 0x10;
        *(long **)(unaff_x19 + 0x5e8) = plVar10;
        *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)(unaff_x19 + 0x38);
        *(undefined1 *)(unaff_x19 + 0x6d0) = 0;
        func_0x0001009b7030(unaff_x19 + 0x530);
        FUN_100d5ee48(unaff_x19 + 0x530);
        *(undefined1 *)(unaff_x19 + 0x489) = 0;
        FUN_100df5738(unaff_x19 + 0x498);
        if (*(long *)(unaff_x19 + 0x438) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x440));
        }
        lVar11 = **(long **)(unaff_x19 + 0x430);
        **(long **)(unaff_x19 + 0x430) = lVar11 + -1;
        LORelease();
        if (lVar11 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E(unaff_x19 + 0x430);
        }
        plVar10 = *(long **)(unaff_x19 + 0x30);
        if (plVar10 != (long *)0x0) {
          lVar11 = *plVar10;
          *plVar10 = lVar11 + -1;
          LORelease();
          if (lVar11 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        lVar11 = **(long **)(unaff_x19 + 0x428);
        **(long **)(unaff_x19 + 0x428) = lVar11 + -1;
        LORelease();
        if (lVar11 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(unaff_x19 + 0x428);
        }
        lVar11 = **(long **)(unaff_x19 + 0x420);
        **(long **)(unaff_x19 + 0x420) = lVar11 + -1;
        LORelease();
        if (lVar11 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x420);
        }
        uVar8 = 0;
        uVar9 = 1;
        goto LAB_1009bd3f8;
      }
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x480) = 0x101010101010101;
      *(undefined1 *)(unaff_x19 + 0x488) = 1;
      _memcpy(unaff_x19 + 0x230,unaff_x19 + 0x40,0x1f0);
      lVar11 = *(long *)(unaff_x19 + 0x428);
      plVar10 = *(long **)(unaff_x19 + 0x30);
      if ((plVar10 == (long *)0x0) || (lVar4 = *plVar10, *plVar10 = lVar4 + 1, -1 < lVar4)) {
        *(undefined8 *)(unaff_x19 + 0x498) = 1;
        *(long **)(unaff_x19 + 0x4a0) = plVar10;
        *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x38);
        *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
        *(undefined8 *)(unaff_x19 + 0x4b9) = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(unaff_x19 + 0x4b1) = *(undefined8 *)(unaff_x19 + 0x20);
        *(long *)(unaff_x19 + 0x4c8) = lVar11 + 0x10;
        *(long *)(unaff_x19 + 0x4d0) = unaff_x19 + 0x230;
        *(undefined1 *)(unaff_x19 + 0x5d8) = 0;
        FUN_1009b7bfc(unaff_x19 + 0x498);
        FUN_100d1867c(unaff_x19 + 0x498);
                    /* WARNING: Could not recover jumptable at 0x0001009bd1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)((ulong)*(ushort *)
                                   (&UNK_108c9c1fe + (ulong)*(uint *)(unaff_x19 + 0x248) * 2) * 4 +
                          0x1009bbc7c))();
        return uVar8;
      }
    }
LAB_1009bdc80:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009bdc84);
    (*pcVar3)();
  }
  uVar8 = 1;
  uVar9 = 3;
LAB_1009bd3f8:
  *(undefined1 *)(unaff_x19 + 0x493) = uVar9;
  return uVar8;
}

