
/* WARNING: Removing unreachable block (ram,0x000100f95df0) */

undefined1  [16] FUN_100f943e0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  long unaff_x19;
  uint *unaff_x20;
  long unaff_x21;
  undefined *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long lVar6;
  undefined8 *in_stack_00000000;
  long *in_stack_00000020;
  undefined *in_stack_00000028;
  undefined *in_stack_00004aa8;
  undefined8 in_stack_00004ab0;
  long in_stack_00004e30;
  undefined8 in_stack_00004e38;
  long in_stack_00004e80;
  undefined8 in_stack_00004e88;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00000020);
  in_stack_00000028 = &__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E;
  in_stack_00000020 = (long *)unaff_x21;
  func_0x00010602ab90(s_enabled__108ad5df0,&stack0x00000020);
  if (*(long *)(unaff_x25 + -0x100) != -0x8000000000000000) {
    FUN_100f967b8(&stack0x00000020);
    func_0x00010602ab90(s_enabled_tools__108ad5e00,&stack0x00004aa0);
    in_stack_00004aa8 = unaff_x24;
    if (in_stack_00000020 != (long *)0x0) {
      _free(in_stack_00000028);
    }
  }
  if (*(long *)(unaff_x25 + -0xe8) != -0x8000000000000000) {
    FUN_100f967b8(&stack0x00000020);
    func_0x00010602ab90(s_disabled_tools__108ad5e16,&stack0x00004aa0);
    in_stack_00004aa8 = unaff_x24;
    if (in_stack_00000020 != (long *)0x0) {
      _free(in_stack_00000028);
    }
  }
  if ((*unaff_x20 & 1) == 0) {
    func_0x00010602ab90(&UNK_108cc9598,0x27);
    in_stack_00000020 = (long *)&stack0x00004dd0;
    in_stack_00000028 = &DAT_100c7b524;
    func_0x00010602ab90(s_command__108ad5e2d,&stack0x00000020);
    if (*(long *)(unaff_x25 + -0x138) == 0) {
      FUN_100c7c1c0(&stack0x00004e80,&UNK_108cb17f8,1);
    }
    else {
      FUN_100f3f514(&stack0x00004e80,*(undefined8 *)(unaff_x25 + -0x140),
                    *(long *)(unaff_x25 + -0x138),&UNK_108ca1947,1);
    }
    in_stack_00000020 = (long *)&stack0x00004e80;
    in_stack_00000028 = unaff_x24;
    func_0x00010602ab90(s_args__108ad5e3d,&stack0x00000020);
    if (*(long *)(unaff_x25 + -0x178) != -0x8000000000000000) {
      in_stack_00000020 = (long *)&stack0x00004aa0;
      in_stack_00000028 = &UNK_10b209290;
      iVar3 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                        (&stack0x00004e30,&stack0x00000020);
      if (iVar3 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,unaff_x29 + -0xf8,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_100f9616c;
      }
    }
    puVar4 = (undefined1 *)_malloc(1);
    if (puVar4 == (undefined1 *)0x0) {
      func_0x0001087c9084(1,1);
LAB_100f9616c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f96170);
      (*pcVar2)();
    }
    *puVar4 = 0x2d;
    *(undefined8 *)(unaff_x29 + -0xe0) = 1;
    *(undefined1 **)(unaff_x29 + -0xd8) = puVar4;
    *(undefined8 *)(unaff_x29 + -0xd0) = 1;
    in_stack_00000020 = (long *)(unaff_x29 + -0xe0);
    in_stack_00000028 = unaff_x24;
    func_0x00010602ab90(s_cwd__108ad5e4a,&stack0x00000020);
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x25 + -0x1a8) != 0) {
      plVar5 = (long *)(unaff_x25 + -0x1a8);
    }
    func_0x00010085c7f0(&stack0x00000020,plVar5,*(undefined8 *)(unaff_x25 + -0x128),
                        *(undefined8 *)(unaff_x25 + -0x120));
    func_0x00010602ab90(s_env__108ad5e56,&stack0x00004aa0);
    if (in_stack_00000020 != (long *)0x0) {
      _free(in_stack_00000028);
    }
    in_stack_00004e38 = in_stack_00004e88;
    in_stack_00004e30 = in_stack_00004e80;
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  else {
    *(long *)(unaff_x29 + -0x90) = unaff_x25 + -0x130;
    func_0x00010602ab90(&UNK_108cc95ab,0x3b);
    in_stack_00000020 = (long *)(unaff_x29 + -0x90);
    in_stack_00000028 = &DAT_100c7b524;
    func_0x00010602ab90(s_url__108ad5e62,&stack0x00000020);
    in_stack_00000020 = (long *)&stack0x00004dd0;
    in_stack_00000028 = &DAT_100c7b3a0;
    func_0x00010602ab90(s_bearer_token_env_var__108ad5e6e,&stack0x00000020);
    plVar5 = *(long **)(unaff_x25 + -0x1a8);
    if ((plVar5 == (long *)0x0) || (*(long *)(unaff_x25 + -400) == 0)) {
      FUN_100c7c1c0(&stack0x00004e30,&UNK_108cb17f8,1);
    }
    else {
      lVar6 = *plVar5;
      in_stack_00000028 =
           (undefined *)
           (CONCAT17(-(-1 < lVar6),
                     CONCAT16(-(-1 < (char)((ulong)lVar6 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar6 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar6 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar6 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar6 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar6 >> 8)),-(-1 < (char)lVar6)))))))) &
           0x8080808080808080);
      in_stack_00000020 = plVar5;
      FUN_10068cabc(unaff_x29 + -0xe0,&stack0x00000020);
      uVar1 = *(undefined8 *)(unaff_x29 + -0xd8);
      FUN_100f41300(uVar1,*(undefined8 *)(unaff_x29 + -0xd0));
      in_stack_00000020 = (long *)uVar1;
      in_stack_00000028 = (undefined *)uVar1;
      FUN_100e9165c(&stack0x00004aa0,&stack0x00000020);
      FUN_100f3f514(&stack0x00004e30,in_stack_00004aa8,in_stack_00004ab0,&UNK_108ca7fce,2);
      FUN_100e1ad68(&stack0x00004aa0);
    }
    in_stack_00000020 = (long *)&stack0x00004e30;
    func_0x00010602ab90(s_http_headers__108ad5e8b,&stack0x00000020);
    plVar5 = *(long **)(unaff_x25 + -0x178);
    if ((plVar5 == (long *)0x0) || (*(long *)(unaff_x25 + -0x160) == 0)) {
      FUN_100c7c1c0(&stack0x00004e80,&UNK_108cb17f8,1);
    }
    else {
      lVar6 = *plVar5;
      in_stack_00000028 =
           (undefined *)
           (CONCAT17(-(-1 < lVar6),
                     CONCAT16(-(-1 < (char)((ulong)lVar6 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar6 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar6 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar6 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar6 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar6 >> 8)),-(-1 < (char)lVar6)))))))) &
           0x8080808080808080);
      in_stack_00000020 = plVar5;
      FUN_10068cabc(unaff_x29 + -0xe0,&stack0x00000020);
      uVar1 = *(undefined8 *)(unaff_x29 + -0xd8);
      FUN_100f412e4(uVar1,*(undefined8 *)(unaff_x29 + -0xd0));
      in_stack_00000020 = (long *)uVar1;
      in_stack_00000028 = (undefined *)uVar1;
      FUN_100e8fa28(&stack0x00004aa0,&stack0x00000020);
      FUN_100f3f514(&stack0x00004e80,in_stack_00004aa8,in_stack_00004ab0,&UNK_108ca7fce,2);
      FUN_100e1ad68(&stack0x00004aa0);
    }
    in_stack_00000020 = (long *)&stack0x00004e80;
    func_0x00010602ab90(s_env_http_headers__108ad5ea0,&stack0x00000020);
    if (in_stack_00004e80 != 0) {
      _free(in_stack_00004e88);
    }
  }
  if (in_stack_00004e30 != 0) {
    _free(in_stack_00004e38);
  }
  if (*(int *)(unaff_x25 + -0x50) != 1000000000) {
    NEON_ucvtf(*(undefined8 *)(unaff_x25 + -0x58));
    in_stack_00000020 = (long *)&stack0x00004aa0;
    in_stack_00000028 =
         &
         __ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hceba7ac65deff015E
    ;
    func_0x00010602ab90(s_startup_timeout_sec__108ad5eb9,&stack0x00000020);
  }
  if (*(int *)(unaff_x25 + -0x40) != 1000000000) {
    NEON_ucvtf(*(undefined8 *)(unaff_x25 + -0x48));
    in_stack_00000020 = (long *)&stack0x00004aa0;
    in_stack_00000028 =
         &
         __ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hceba7ac65deff015E
    ;
    func_0x00010602ab90(s_tool_timeout_sec__108ad5ed5,&stack0x00000020);
  }
  if (*(char *)(unaff_x25 + -5) != '\x03') {
    in_stack_00000020 = (long *)&stack0x00004aa0;
    in_stack_00000028 = &DAT_100c7b3a0;
    func_0x00010602ab90(s_default_tools_approval_mode__108ad5eee,&stack0x00000020);
  }
  func_0x00010602ab90(s_remove__codex_mcp_remove_108ad5f12,&stack0x00000020);
  FUN_100cf8c18(&stack0x00004da0);
  lVar6 = **(long **)(unaff_x19 + 0x2598);
  **(long **)(unaff_x19 + 0x2598) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(unaff_x19 + 0x2598);
  }
  FUN_100de93d0(unaff_x19 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x49) = 0;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    _free(*in_stack_00000000);
  }
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
  return ZEXT816(0);
}

