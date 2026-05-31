
void FUN_100b9dd84(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined8 unaff_x22;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000150;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s_failed_to_inspect_pid_lock_file_108ad1ae8,&stack0x00000140);
  *(undefined8 *)(unaff_x29 + -0xa0) = unaff_x22;
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000140);
  uVar1 = *unaff_x25;
  uVar6 = unaff_x25[3];
  uVar4 = unaff_x25[2];
  *(undefined8 *)(unaff_x27 + 0xd8) = unaff_x25[1];
  *(undefined8 *)(unaff_x27 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x27 + 0xe8) = uVar6;
  *(undefined8 *)(unaff_x27 + 0xe0) = uVar4;
  uVar1 = unaff_x25[4];
  *(undefined8 *)(unaff_x27 + 0xf8) = unaff_x25[5];
  *(undefined8 *)(unaff_x27 + 0xf0) = uVar1;
  unaff_x25[1] = unaff_x25[0x13];
  *unaff_x25 = unaff_x25[0x12];
  in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x70);
  uVar1 = FUN_108857510(&stack0x00000140,&stack0x00000110);
  *(undefined1 *)(unaff_x19 + 0xec) = 1;
  uVar3 = *(ulong *)(unaff_x19 + 0x30);
  if ((uVar3 & 3) == 1) {
    uVar4 = *(undefined8 *)(uVar3 - 1);
    puVar5 = *(undefined8 **)(uVar3 + 7);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(uVar3 - 1));
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000038;
  unaff_x20[2] = in_stack_00000030;
  *(undefined1 *)(unaff_x19 + 0x29) = 1;
  return;
}

