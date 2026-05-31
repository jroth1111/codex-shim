
/* WARNING: Removing unreachable block (ram,0x000100f44e54) */
/* WARNING: Removing unreachable block (ram,0x000100f44ea8) */
/* WARNING: Removing unreachable block (ram,0x000100f44eb0) */
/* WARNING: Removing unreachable block (ram,0x000100f44ec0) */
/* WARNING: Removing unreachable block (ram,0x000100f44ee8) */
/* WARNING: Removing unreachable block (ram,0x000100f44ecc) */
/* WARNING: Removing unreachable block (ram,0x000100f44ed0) */
/* WARNING: Removing unreachable block (ram,0x000100f44ef0) */
/* WARNING: Removing unreachable block (ram,0x000100f44ef4) */
/* WARNING: Removing unreachable block (ram,0x000100f44edc) */
/* WARNING: Removing unreachable block (ram,0x000100f44ef8) */
/* WARNING: Removing unreachable block (ram,0x000100f44f00) */
/* WARNING: Removing unreachable block (ram,0x000100f44f04) */
/* WARNING: Removing unreachable block (ram,0x000100f44f0c) */
/* WARNING: Removing unreachable block (ram,0x000100f44f70) */
/* WARNING: Removing unreachable block (ram,0x000100f44f78) */
/* WARNING: Removing unreachable block (ram,0x000100f44f80) */
/* WARNING: Removing unreachable block (ram,0x000100f44f88) */
/* WARNING: Removing unreachable block (ram,0x000100f44f90) */
/* WARNING: Removing unreachable block (ram,0x000100f44fa0) */

undefined1  [16] FUN_100f44d4c(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long unaff_x19;
  undefined1 *unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000060;
  long in_stack_00000490;
  undefined8 in_stack_00000498;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000008b8,s__hdiutil_attach__failed_with___108ad4331,&stack0x00000060);
  if ((in_stack_00000490 != -0x8000000000000000) && (in_stack_00000490 != 0)) {
    _free(in_stack_00000498);
  }
  in_stack_00000038 = unaff_x27[1];
  in_stack_00000030 = *unaff_x27;
  FUN_108856624(&stack0x00000030);
  if (*(long *)(unaff_x29 + -0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xa8));
  }
  if (*(long *)(unaff_x29 + -0x98) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x90));
  }
  *unaff_x25 = 1;
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 200));
  }
  __ZN64__LT_tempfile__dir__TempDir_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3560df96776ed712E
            ((undefined8 *)(unaff_x19 + 0xa8));
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xa8));
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *(undefined2 *)(unaff_x19 + 0x109) = 0x100;
  FUN_100ceca48();
  in_stack_00000060 = 3;
  uVar2 = FUN_108857de4(&stack0x00000490,&stack0x00000060);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x50));
  }
  if ((((*(byte *)(unaff_x19 + 0x61) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x68) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x68) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x70));
  }
  *(undefined1 *)(unaff_x19 + 0x61) = 0;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x38));
  }
  *(undefined1 *)(unaff_x19 + 0x60) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

