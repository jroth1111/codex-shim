
void FUN_100b3b1a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x19;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s__backend_api_108ad0cfb,&stack0x000004a8);
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  lVar7 = in_stack_00000030;
  lVar2 = in_stack_00000028;
  lVar1 = in_stack_00000020;
  __ZN7reqwest10async_impl6client13ClientBuilder3new17h08a006e79f8bdad0E(&stack0x000004a8);
  __ZN12codex_client26chatgpt_cloudflare_cookies36with_chatgpt_cloudflare_cookie_store17hb7292ecb5466ea69E
            (&stack0x000000b0,&stack0x000004a8);
  FUN_102795040(&stack0x00000040,&stack0x000000b0);
  lVar3 = in_stack_00000048;
  if (in_stack_00000040 == -0x7ffffffffffffffb) {
    in_stack_00000038 = in_stack_00000048;
    uVar5 = __ZN20codex_backend_client6client9PathStyle13from_base_url17hca3e31a123c80e70E
                      (lVar2,lVar7);
    puVar6 = (undefined8 *)_malloc(0x10);
    if (puVar6 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100b3b2e4);
      (*pcVar4)();
    }
    puVar6[1] = 1;
    *puVar6 = 1;
    *unaff_x19 = lVar1;
    unaff_x19[1] = lVar2;
    unaff_x19[2] = lVar7;
    unaff_x19[3] = -0x8000000000000000;
    *(undefined1 *)(unaff_x19 + 10) = 2;
    unaff_x19[0xb] = lVar3;
    unaff_x19[0xc] = (long)puVar6;
    unaff_x19[0xd] = (long)&UNK_10b32a010;
    *(undefined1 *)(unaff_x19 + 0xe) = 0;
    *(undefined1 *)((long)unaff_x19 + 0x71) = uVar5;
  }
  else {
    lVar7 = FUN_1088588a8(&stack0x000004a8);
    *unaff_x19 = -0x8000000000000000;
    unaff_x19[1] = lVar7;
    if (lVar1 != 0) {
      _free(lVar2);
    }
  }
  return;
}

