
/* WARNING: Removing unreachable block (ram,0x000100b9e418) */
/* WARNING: Removing unreachable block (ram,0x000100b9e3e8) */
/* WARNING: Removing unreachable block (ram,0x000100b9e3f4) */
/* WARNING: Removing unreachable block (ram,0x000100b9e3fc) */
/* WARNING: Removing unreachable block (ram,0x000100b9e404) */
/* WARNING: Removing unreachable block (ram,0x000100b9e410) */

void FUN_100b9dfe8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000150;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000110,s_failed_to_inspect_pid_lock_file_108ad1ae8,&stack0x00000140);
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x23;
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000140);
  uVar1 = *unaff_x25;
  uVar3 = unaff_x25[3];
  uVar2 = unaff_x25[2];
  *(undefined8 *)(unaff_x27 + 0x78) = unaff_x25[1];
  *(undefined8 *)(unaff_x27 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x27 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x27 + 0x80) = uVar2;
  uVar1 = unaff_x25[4];
  *(undefined8 *)(unaff_x27 + 0x98) = unaff_x25[5];
  *(undefined8 *)(unaff_x27 + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x27 + 0xd0);
  unaff_x25[1] = *(undefined8 *)(unaff_x27 + 0xd8);
  *unaff_x25 = uVar1;
  in_stack_00000150 = in_stack_00000120;
  uVar1 = FUN_108857510(&stack0x00000140,&stack0x000000b0);
  *unaff_x26 = 1;
  FUN_100cdda18();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x38));
  }
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000038;
  unaff_x20[2] = in_stack_00000030;
  *(undefined1 *)(unaff_x19 + 0x29) = 1;
  return;
}

