
void FUN_100f4e8b8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000048;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000008,s_Remote_control_is_enabled_on_and_108ad4768,&stack0x00000038);
  if (in_stack_00000008 == -0x8000000000000000) {
    *unaff_x19 = 0x8000000000000000;
    unaff_x19[1] = in_stack_00000010;
    _free();
  }
  else {
    *unaff_x20 = in_stack_00000008;
    unaff_x20[1] = in_stack_00000010;
    unaff_x20[2] = in_stack_00000018;
    in_stack_00000038 = 1;
    uStack0000000000000048 = 1;
    if (unaff_w21 == 0) {
      puVar2 = (undefined8 *)_malloc(0x15);
      if (puVar2 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x15);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4ea10);
        (*pcVar1)();
      }
      puVar2[1] = 0x206f7420432d6c72;
      *puVar2 = 0x7443207373657250;
      *(undefined8 *)((long)puVar2 + 0xd) = 0x2e706f7473206f74;
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000038);
      unaff_x20[3] = 0x15;
      unaff_x20[4] = (long)puVar2;
      unaff_x20[5] = 0x15;
      uStack0000000000000048 = 2;
    }
    unaff_x19[1] = unaff_x20;
    *unaff_x19 = in_stack_00000038;
    unaff_x19[2] = uStack0000000000000048;
  }
  return;
}

