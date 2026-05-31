
/* WARNING: Removing unreachable block (ram,0x00010090ddd0) */
/* WARNING: Removing unreachable block (ram,0x00010090de18) */
/* WARNING: Removing unreachable block (ram,0x00010090daf4) */
/* WARNING: Removing unreachable block (ram,0x00010090dc18) */
/* WARNING: Removing unreachable block (ram,0x00010090dc34) */
/* WARNING: Removing unreachable block (ram,0x00010090dca4) */

void FUN_10090d2a0(void)

{
  undefined8 extraout_x10;
  long unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 *in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000d20,s_thread_is_archived_108acf9d6,unaff_x29 + -0x78);
  FUN_100e0ce70(unaff_x19 + 0xd0);
  *(undefined1 *)(unaff_x19 + 0x34d) = 0;
  *(undefined1 *)(unaff_x19 + 0x34a) = 1;
  FUN_100cdbdd0(in_stack_00000140);
  *(undefined1 *)(unaff_x19 + 0x99a) = 1;
  __ZN16codex_app_server18request_processors16thread_processor44conversation_summary_rollout_path_read_error17h0485ee67c9ca9642E
            (&stack0x00000440,*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x80),
             &stack0x00000d20);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
  }
  *(undefined2 *)(in_stack_00000158 + 0x68) = 1;
  FUN_100d6ab7c(in_stack_00000148);
  *in_stack_00000150 = 0x8000000000000070;
  in_stack_00000150[1] = in_stack_00000440;
  in_stack_00000150[2] = in_stack_00000448;
  in_stack_00000150[3] = in_stack_00000450;
  in_stack_00000150[4] = in_stack_00000458;
  in_stack_00000150[5] = in_stack_00000460;
  in_stack_00000150[6] = in_stack_00000468;
  in_stack_00000150[7] = in_stack_00000470;
  in_stack_00000150[8] = in_stack_00000478;
  in_stack_00000150[9] = in_stack_00000480;
  in_stack_00000150[10] = in_stack_00000488;
  in_stack_00000150[0xb] = in_stack_00000490;
  in_stack_00000150[0xc] = in_stack_00000498;
  in_stack_00000150[0xd] = in_stack_000004a0;
  in_stack_00000150[0xe] = extraout_x10;
  in_stack_00000150[0x14] = in_stack_00000368;
  in_stack_00000150[0x13] = in_stack_00000360;
  in_stack_00000150[0x12] = in_stack_00000358;
  in_stack_00000150[0x11] = in_stack_00000350;
  in_stack_00000150[0x10] = in_stack_00000348;
  in_stack_00000150[0xf] = in_stack_00000340;
  in_stack_00000150[0x1c] = in_stack_000003a8;
  in_stack_00000150[0x1b] = in_stack_000003a0;
  in_stack_00000150[0x1a] = in_stack_00000398;
  in_stack_00000150[0x19] = in_stack_00000390;
  in_stack_00000150[0x18] = in_stack_00000388;
  in_stack_00000150[0x17] = in_stack_00000380;
  in_stack_00000150[0x16] = in_stack_00000378;
  in_stack_00000150[0x15] = in_stack_00000370;
  in_stack_00000150[0x22] = in_stack_000003d8;
  in_stack_00000150[0x21] = in_stack_000003d0;
  in_stack_00000150[0x24] = in_stack_000003e8;
  in_stack_00000150[0x23] = in_stack_000003e0;
  in_stack_00000150[0x20] = in_stack_000003c8;
  in_stack_00000150[0x1f] = in_stack_000003c0;
  in_stack_00000150[0x1e] = in_stack_000003b8;
  in_stack_00000150[0x1d] = in_stack_000003b0;
  in_stack_00000150[0x2a] = in_stack_00000418;
  in_stack_00000150[0x29] = in_stack_00000410;
  in_stack_00000150[0x2c] = in_stack_00000428;
  in_stack_00000150[0x2b] = in_stack_00000420;
  in_stack_00000150[0x26] = in_stack_000003f8;
  in_stack_00000150[0x25] = in_stack_000003f0;
  in_stack_00000150[0x28] = in_stack_00000408;
  in_stack_00000150[0x27] = in_stack_00000400;
  *(undefined1 *)(in_stack_00000158 + 0x9a0) = 1;
  return;
}

