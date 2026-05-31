
void FUN_100ba0d8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000f0,s_failed_to_reserve_pid_file_108ad194f,&stack0x00000380);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000380);
  uVar2 = FUN_108857510(&stack0x00000380,&stack0x000001c0);
  *(undefined1 *)(unaff_x19 + 0x42e) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x1e8);
  **(long **)(unaff_x19 + 0x1e8) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE(unaff_x19 + 0x1e8);
  }
  lVar1 = *(long *)(unaff_x19 + 0x218);
  if (lVar1 != -0x8000000000000000) {
    plVar3 = *(long **)(unaff_x19 + 0x220);
    if (lVar1 == -0x7fffffffffffffff) {
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
    }
    else if (lVar1 != 0) {
      _free();
    }
  }
  *(undefined1 *)(unaff_x19 + 0x42f) = 0;
  *unaff_x20 = 1;
  unaff_x20[1] = 0;
  *(undefined8 *)(unaff_x20 + 2) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x430) = 1;
  return;
}

