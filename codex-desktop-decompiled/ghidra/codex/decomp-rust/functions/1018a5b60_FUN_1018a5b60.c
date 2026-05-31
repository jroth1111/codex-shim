
void FUN_1018a5b60(void)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x29;
  undefined8 uVar1;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s_thread_1_did_not_include_persist_108ade04c,&stack0x00000238);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x220);
  unaff_x20[2] = *(undefined8 *)(unaff_x22 + 0x228);
  unaff_x20[1] = uVar1;
  unaff_x20[3] = *(undefined8 *)(unaff_x29 + -0x48);
  *unaff_x20 = 0x8000000000000000;
  FUN_101963c04(&stack0x00000018);
  if ((-0x7ffffffffffffffe < *unaff_x19) && (*unaff_x19 != 0)) {
    _free(unaff_x19[1]);
  }
  return;
}

