
void FUN_101c91020(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined4 unaff_w26;
  undefined2 unaff_w27;
  long unaff_x29;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 *in_stack_000000b0;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa0,s_threadId_____108adeb3a,&stack0x00000050);
  if (*(long *)(unaff_x29 + -0x80) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x78));
  }
  lVar1 = *(long *)(unaff_x29 + -0xa0);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x98);
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000050,&UNK_10b2701b8,6);
  *(long **)(unaff_x29 + -0xa0) = &stack0x00000050;
  *(undefined8 *)(unaff_x29 + -0x98) = unaff_x24;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__108ac0bb6,unaff_x29 + -0xa0);
  if (in_stack_00000050 != 0) {
    _free(in_stack_00000058);
  }
  unaff_x23[5] = unaff_x23[9];
  unaff_x23[4] = unaff_x23[8];
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x70);
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  puVar7 = (undefined4 *)_malloc(6);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar7 = unaff_w26;
    *(undefined2 *)(puVar7 + 1) = unaff_w27;
    in_stack_00000050 = 6;
    in_stack_000000b0 = &stack0x00000050;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x80,s___null_108ae5e02,&stack0x000000b0);
    if (in_stack_00000050 != 0) {
      _free(puVar7);
    }
    in_stack_00000050 = unaff_x29 + -0xa0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000b0,s_turnId_____108ae2c71,&stack0x00000050);
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x78));
    }
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
    puVar5 = in_stack_000000b0;
    *(undefined8 *)(unaff_x29 + -0xa0) = 1;
    *(undefined8 *)(unaff_x29 + -0x98) = 0;
    puVar7 = (undefined4 *)_malloc(6);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = unaff_w26;
      *(undefined2 *)(puVar7 + 1) = unaff_w27;
      *(undefined8 *)(unaff_x29 + -0x80) = 6;
      *(undefined4 **)(unaff_x29 + -0x78) = puVar7;
      *(undefined8 *)(unaff_x29 + -0x70) = 6;
      in_stack_00000050 = unaff_x29 + -0xa0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000098,s_serverName_____108ae2c81,&stack0x00000050);
      if (*(long *)(unaff_x29 + -0x80) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x78));
      }
      uVar4 = in_stack_000000a0;
      lVar3 = in_stack_00000098;
      in_stack_00000050 = lVar1;
      FUN_1021676b8(unaff_x29 + -0x80,&stack0x00000050,3,&UNK_108cf9cc0,1);
      in_stack_00000038 = unaff_x23[9];
      in_stack_00000030 = unaff_x23[8];
      in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x70);
      __ZN103__LT_codex_app_server_protocol__protocol__v2__mcp__McpServerElicitationRequest_u20_as_u20_ts_rs__TS_GT_16inline_flattened17h7406de4c006e25ddE
                (unaff_x29 + -0x80);
      unaff_x23[5] = unaff_x23[9];
      unaff_x23[4] = unaff_x23[8];
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x70);
      FUN_1021676b8(unaff_x29 + -0x80,unaff_x29 + -0xa0,1,&UNK_108cfe333,3);
      unaff_x23[1] = unaff_x23[9];
      *unaff_x23 = unaff_x23[8];
      *(long **)(unaff_x29 + -0x80) = &stack0x00000030;
      *(undefined8 *)(unaff_x29 + -0x78) = unaff_x24;
      *(undefined8 ***)(unaff_x29 + -0x70) = &stack0x000000b0;
      *(undefined8 *)(unaff_x29 + -0x68) = unaff_x24;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000018,s_______108ae2c94,unaff_x29 + -0x80);
      if (in_stack_000000b0 != (undefined8 *)0x0) {
        _free(unaff_x24);
      }
      if (*(long *)(unaff_x29 + -0xa0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x98));
      }
      if (in_stack_00000030 != 0) {
        _free(in_stack_00000038);
      }
      if (lVar1 != 0) {
        _free(uVar2);
      }
      if (puVar5 != (undefined8 *)0x0) {
        _free(unaff_x24);
      }
      if (lVar3 != 0) {
        _free(uVar4);
      }
      uVar2 = in_stack_00000020;
      lVar1 = in_stack_00000018;
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar2);
      }
      return;
    }
    func_0x0001087c9084(1,6);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101c91334);
  (*pcVar6)();
}
