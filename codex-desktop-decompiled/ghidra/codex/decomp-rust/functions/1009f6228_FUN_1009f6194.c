
void FUN_1009f6194(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  ushort *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x29;
  long in_stack_00000400;
  long in_stack_00000408;
  long in_stack_00000410;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000400,s_env__status__content_type__108acd703);
  FUN_1009f8e14(&stack0x00000510);
  if (*unaff_x21 - 200 < 100) {
    FUN_1006559bc(&stack0x00000400,*(undefined8 *)(unaff_x29 + -0x50),
                  *(undefined8 *)(unaff_x29 + -0x48));
    if (in_stack_00000400 != -0x8000000000000000) {
      if (*(long *)(unaff_x29 + -0x58) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x50));
      }
      if (*unaff_x22 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0xd0));
      }
      *(undefined1 *)(unaff_x19 + 0x30) = 0;
      lVar1 = **(long **)(unaff_x19 + 0x20);
      **(long **)(unaff_x19 + 0x20) = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      goto LAB_1009f6284;
    }
    in_stack_00000408 = FUN_1088349f0();
  }
  else {
    in_stack_00000408 = FUN_108858fa8(s_GET_failed____content_type____bo_108acd764);
  }
  if (*(long *)(unaff_x29 + -0x58) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x50));
  }
  if (*unaff_x22 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xd0));
  }
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x20);
  **(long **)(unaff_x19 + 0x20) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  in_stack_00000400 = -0x8000000000000000;
  in_stack_00000410 = unaff_x24;
LAB_1009f6284:
  *unaff_x20 = in_stack_00000400;
  unaff_x20[1] = in_stack_00000408;
  unaff_x20[2] = in_stack_00000410;
  *(undefined1 *)(unaff_x19 + 0x31) = 1;
  return;
}

