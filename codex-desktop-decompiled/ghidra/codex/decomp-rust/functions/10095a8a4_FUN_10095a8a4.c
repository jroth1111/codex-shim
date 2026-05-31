
/* WARNING: Removing unreachable block (ram,0x00010095ae3c) */

void FUN_10095a8a4(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 in_stack_00000040;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_000001c0;
  long in_stack_00002720;
  undefined8 in_stack_00002728;
  long in_stack_00002738;
  
  FUN_10097401c(&stack0x00004de0);
  __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor27clear_plugin_related_caches17hb1255b89d75ef5e3E
            (*(undefined8 *)(unaff_x20 + 0x40));
  if (in_stack_00002738 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00002738);
  }
  if (in_stack_00002720 != 0) {
    _free(in_stack_00002728);
  }
  if (in_stack_000001c0 != 2) {
    FUN_100de93d0(&stack0x000001c0);
  }
  lVar1 = **(long **)(unaff_x20 + 0x60);
  **(long **)(unaff_x20 + 0x60) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E();
  }
  *(undefined2 *)(unaff_x20 + 0x68) = 1;
  FUN_100d37d60(in_stack_00000040);
  unaff_x21[6] = in_stack_000000d8;
  unaff_x21[5] = in_stack_000000d0;
  unaff_x21[8] = in_stack_000000e8;
  unaff_x21[7] = in_stack_000000e0;
  unaff_x21[10] = in_stack_000000f8;
  unaff_x21[9] = in_stack_000000f0;
  *unaff_x21 = 0x8000000000000036;
  unaff_x21[1] = 0x8000000000000000;
  unaff_x21[2] = unaff_x23;
  unaff_x21[3] = unaff_x27;
  unaff_x21[4] = unaff_x25;
  unaff_x21[0xc] = in_stack_00000108;
  unaff_x21[0xb] = in_stack_00000100;
  unaff_x21[0xd] = unaff_x28;
  *(undefined1 *)(unaff_x26 + 0xf90) = 1;
  return;
}

