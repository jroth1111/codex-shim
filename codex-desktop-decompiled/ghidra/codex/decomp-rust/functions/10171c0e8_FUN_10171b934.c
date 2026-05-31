
/* WARNING: Removing unreachable block (ram,0x00010171b550) */
/* WARNING: Removing unreachable block (ram,0x00010171b6cc) */
/* WARNING: Removing unreachable block (ram,0x00010171b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010171b7f4) */
/* WARNING: Removing unreachable block (ram,0x00010171b800) */
/* WARNING: Removing unreachable block (ram,0x00010171b80c) */
/* WARNING: Removing unreachable block (ram,0x00010171b814) */
/* WARNING: Removing unreachable block (ram,0x00010171b5fc) */
/* WARNING: Removing unreachable block (ram,0x00010171b818) */

void FUN_10171b934(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *unaff_x19;
  undefined1 *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000088;
  undefined1 *in_stack_00000090;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_00000100;
  long in_stack_00000108;
  undefined8 *in_stack_00000110;
  undefined *in_stack_00000118;
  undefined1 *in_stack_00000120;
  undefined *in_stack_00000128;
  long in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  long in_stack_00000850;
  long in_stack_00000858;
  
  func_0x00010171da9c(&stack0x00000620);
  if (*(short *)(unaff_x19 + 0x69) == 0x191) {
    __ZN11codex_login4auth7manager30classify_refresh_token_failure17h2297a120d0d04f7cE
              (&stack0x00000850,in_stack_000003a8,in_stack_000003b0);
    unaff_x27 = &stack0x00000620;
  }
  else {
    __ZN11codex_login4auth4util23try_parse_error_message17h576837f49f1f020fE
              (&stack0x000004e0,in_stack_000003a8,in_stack_000003b0);
    in_stack_00000110 = unaff_x19 + 0x69;
    in_stack_00000118 =
         &
         __ZN63__LT_http__status__StatusCode_u20_as_u20_core__fmt__Display_GT_3fmt17he0383041cfc0321eE
    ;
    in_stack_00000128 = &DAT_101762220;
    in_stack_00000120 = &stack0x000004e0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000620,s_Failed_to_refresh_token____108ac383c,&stack0x00000110);
    puVar2 = (undefined8 *)_malloc(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10171cd80);
      (*pcVar1)();
    }
    *puVar2 = 1;
    puVar2[1] = &stack0x000007d0;
    puVar2[2] = 1;
    in_stack_00000858 = func_0x000106029c30(0x28,puVar2,&UNK_10b256808);
    _free(&stack0x00000110);
    in_stack_00000850 = -0x8000000000000000;
  }
  if (in_stack_000003a0 != 0) {
    _free(in_stack_000003a8);
  }
  *(undefined1 *)((long)unaff_x19 + 0x34b) = 0;
  if (unaff_x19[0x55] != 0) {
    _free(unaff_x19[0x56]);
  }
  if (unaff_x19[0x4e] != 0) {
    _free(unaff_x19[0x4f]);
  }
  *in_stack_00000090 = 1;
  FUN_1017476a4(in_stack_00000088);
  in_stack_000000c8 = *(long *)(unaff_x27 + 0x278);
  in_stack_000000c0 = *(long *)(unaff_x27 + 0x270);
  *(undefined4 *)(unaff_x19 + 0x49) = 1;
  if (in_stack_00000850 == -0x7ffffffffffffffe) {
    *unaff_x28 = -0x7ffffffffffffffe;
    uVar3 = 4;
  }
  else {
    in_stack_000000b0 = in_stack_00000850;
    in_stack_000000b8 = in_stack_00000858;
    in_stack_00000100 = in_stack_000000c0;
    in_stack_00000108 = in_stack_000000c8;
    FUN_10174e730(unaff_x19 + 0x29);
    if (unaff_x19[0x39] != 0) {
      _free(unaff_x19[0x3a]);
    }
    if ((unaff_x19[0x3f] & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[0x40]);
    }
    *(undefined1 *)((long)unaff_x19 + 0x141) = 0;
    FUN_10174fcf4(unaff_x19 + 0x1b8);
    if (-0x7fffffffffffffff < in_stack_00000850) {
      __ZN11codex_login4auth7manager11AuthManager45record_permanent_refresh_failure_if_unchanged17h122aa255046611a2E
                (*unaff_x19,unaff_x19 + 0x14,&stack0x000000b0);
    }
    in_stack_000000e8 = in_stack_000000c8;
    in_stack_000000e0 = in_stack_000000c0;
    FUN_10174f598(unaff_x19 + 0x14);
    if (unaff_x19[1] != -0x7fffffffffffffff) {
      FUN_10174f598();
    }
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
    *unaff_x28 = in_stack_00000850;
    unaff_x28[1] = in_stack_00000858;
    unaff_x28[3] = in_stack_000000e8;
    unaff_x28[2] = in_stack_000000e0;
    uVar3 = 1;
  }
  *(undefined1 *)((long)unaff_x19 + 0x142) = uVar3;
  return;
}

