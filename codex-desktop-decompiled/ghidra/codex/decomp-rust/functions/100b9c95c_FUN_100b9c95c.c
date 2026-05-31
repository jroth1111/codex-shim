
/* WARNING: Removing unreachable block (ram,0x000100b9ce74) */
/* WARNING: Removing unreachable block (ram,0x000100b9ce94) */
/* WARNING: Removing unreachable block (ram,0x000100b9ce9c) */
/* WARNING: Removing unreachable block (ram,0x000100b9ceb8) */
/* WARNING: Removing unreachable block (ram,0x000100b9cec0) */

undefined8 FUN_100b9c95c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined1 *unaff_x21;
  undefined8 in_stack_00000068;
  undefined1 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_000000e0;
  code *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000180;
  undefined8 in_stack_00000188;
  ulong in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_00000350;
  undefined8 in_stack_00000358;
  ulong in_stack_00000360;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000350,s_failed_to_seek_stderr_log_108ad1a5d,&stack0x00000180);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000180);
  in_stack_000000e8 = (code *)in_stack_00000188;
  in_stack_000000e0 = (undefined8 *)in_stack_00000180;
  in_stack_000000f8 = in_stack_00000198;
  in_stack_000000f0 = in_stack_00000190;
  in_stack_00000108 = in_stack_000001a8;
  in_stack_00000100 = in_stack_000001a0;
  in_stack_00000180 = in_stack_00000350;
  in_stack_00000188 = in_stack_00000358;
  in_stack_00000190 = in_stack_00000360;
  puVar3 = (undefined8 *)FUN_108857510(&stack0x00000180,&stack0x000000e0);
  lVar1 = **(long **)(unaff_x19 + 0x78);
  **(long **)(unaff_x19 + 0x78) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
  }
  lVar1 = *(long *)(unaff_x19 + 0xa8);
  if (lVar1 != -0x8000000000000000) {
    plVar2 = *(long **)(unaff_x19 + 0xb0);
    if (lVar1 == -0x7fffffffffffffff) {
      if (*plVar2 == 0xcc) {
        *plVar2 = 0x84;
      }
      else {
        (**(code **)(plVar2[2] + 0x20))();
      }
    }
    else if (lVar1 != 0) {
      _free();
    }
  }
  *in_stack_00000078 = 1;
  FUN_100ca11c0(in_stack_00000068);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x38));
  }
  *unaff_x21 = 1;
  plVar2 = *(long **)(unaff_x19 + 0x18);
  in_stack_000000e0 = &stack0x00000080;
  in_stack_000000e8 =
       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
  ;
  in_stack_00000080 = puVar3;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000180,&UNK_108cbfb65,&stack0x000000e0);
  lVar1 = plVar2[2];
  if ((ulong)(*plVar2 - lVar1) < in_stack_00000190) {
    FUN_108855060(plVar2,lVar1,in_stack_00000190,1,1);
    lVar1 = plVar2[2];
  }
  _memcpy(plVar2[1] + lVar1,in_stack_00000188,in_stack_00000190);
  plVar2[2] = lVar1 + in_stack_00000190;
  if (in_stack_00000180 != 0) {
    _free(in_stack_00000188);
  }
  (**(code **)*in_stack_00000080)();
  *(undefined1 *)(unaff_x19 + 0x1a0) = 1;
  return 0;
}

