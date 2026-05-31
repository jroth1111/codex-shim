
/* WARNING: Removing unreachable block (ram,0x0001006db9cc) */
/* WARNING: Removing unreachable block (ram,0x0001006dbb08) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc04) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc0c) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc18) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc24) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc2c) */
/* WARNING: Removing unreachable block (ram,0x0001006dba78) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc30) */

void FUN_1006dc5ac(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000070;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  long in_stack_00000350;
  long in_stack_00000358;
  
  *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x000002d0;
  *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b208fd0;
  unaff_x28[0xb] = in_stack_00000340;
  unaff_x28[10] = in_stack_00000338;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (*(short *)(unaff_x19 + 0x69) == 0x191) {
    __ZN11codex_login4auth7manager30classify_refresh_token_failure17h2297a120d0d04f7cE
              (&stack0x00000350,*(undefined8 *)(unaff_x29 + -0xb8),
               *(undefined8 *)(unaff_x29 + -0xb0));
    unaff_x28[0x53] = unaff_x28[0x4d];
    unaff_x28[0x52] = unaff_x28[0x4c];
  }
  else {
    __ZN11codex_login4auth4util23try_parse_error_message17h576837f49f1f020fE
              (&stack0x00000150,*(undefined8 *)(unaff_x29 + -0xb8),
               *(undefined8 *)(unaff_x29 + -0xb0));
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000003a0,s_Failed_to_refresh_token____108ac383c,&stack0x000004b0);
    puVar3 = (undefined8 *)_malloc(0x18);
    if (puVar3 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006dd0f4);
      (*pcVar2)();
    }
    *puVar3 = 1;
    puVar3[1] = unaff_x29 + -0xf0;
    puVar3[2] = 1;
    in_stack_00000358 = func_0x000106029c30(0x28,puVar3,&UNK_10b209118);
    if (in_stack_00000150 != 0) {
      _free(in_stack_00000158);
    }
    in_stack_00000350 = -0x8000000000000000;
  }
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xb8));
  }
  *(undefined1 *)((long)unaff_x19 + 0x34b) = 0;
  if (unaff_x19[0x55] != 0) {
    _free(unaff_x19[0x56]);
  }
  if (unaff_x19[0x4e] != 0) {
    _free(unaff_x19[0x4f]);
  }
  in_stack_000000e8 = unaff_x28[0x51];
  in_stack_000000e0 = unaff_x28[0x50];
  in_stack_000000f8 = unaff_x28[0x53];
  in_stack_000000f0 = unaff_x28[0x52];
  in_stack_000000d8 = unaff_x28[0x4f];
  in_stack_000000d0 = unaff_x28[0x4e];
  *in_stack_00000070 = 1;
  unaff_x28[3] = in_stack_000000e8;
  unaff_x28[2] = in_stack_000000e0;
  unaff_x28[5] = in_stack_000000f8;
  unaff_x28[4] = in_stack_000000f0;
  unaff_x28[1] = in_stack_000000d8;
  *unaff_x28 = in_stack_000000d0;
  FUN_100cb9d24();
  unaff_x28[9] = unaff_x28[5];
  unaff_x28[8] = unaff_x28[4];
  *(undefined4 *)(unaff_x19 + 0x49) = 1;
  if (in_stack_00000350 == -0x7ffffffffffffffe) {
    *unaff_x21 = -0x7ffffffffffffffe;
    uVar4 = 4;
  }
  else {
    in_stack_000000a8 = unaff_x28[9];
    in_stack_000000a0 = unaff_x28[8];
    in_stack_00000090 = in_stack_00000350;
    in_stack_00000098 = in_stack_00000358;
    FUN_100e02748(unaff_x19 + 0x29);
    if (unaff_x19[0x39] != 0) {
      _free(unaff_x19[0x3a]);
    }
    if ((unaff_x19[0x3f] != -0x8000000000000000) && (unaff_x19[0x3f] != 0)) {
      _free(unaff_x19[0x40]);
    }
    *(undefined1 *)((long)unaff_x19 + 0x141) = 0;
    func_0x000100e0c460(unaff_x19 + 0x1b8);
    if (-0x7fffffffffffffff < in_stack_00000350) {
      __ZN11codex_login4auth7manager11AuthManager45record_permanent_refresh_failure_if_unchanged17h122aa255046611a2E
                (*unaff_x19,unaff_x19 + 0x14,&stack0x00000090);
    }
    lVar1 = in_stack_00000098;
    in_stack_000000c8 = in_stack_000000a8;
    in_stack_000000c0 = in_stack_000000a0;
    FUN_100e0609c(unaff_x19 + 0x14);
    if (unaff_x19[1] != -0x7fffffffffffffff) {
      FUN_100e0609c();
    }
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
    *unaff_x21 = in_stack_00000350;
    unaff_x21[1] = lVar1;
    unaff_x21[3] = in_stack_000000c8;
    unaff_x21[2] = in_stack_000000c0;
    uVar4 = 1;
  }
  *(undefined1 *)((long)unaff_x19 + 0x142) = uVar4;
  return;
}

