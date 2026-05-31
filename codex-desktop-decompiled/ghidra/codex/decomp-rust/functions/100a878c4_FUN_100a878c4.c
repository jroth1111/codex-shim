
void FUN_100a878c4(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar3;
  long *unaff_x24;
  undefined8 *puVar4;
  undefined8 *in_stack_00000108;
  ulong in_stack_00000b60;
  undefined8 in_stack_00001250;
  undefined8 in_stack_00001258;
  undefined8 in_stack_00001260;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001250,s_failed_to_read_thread___108acfa0e,&stack0x00000f80);
  if ((in_stack_00000b60 & 3) == 1) {
    uVar3 = *(undefined8 *)(in_stack_00000b60 - 1);
    puVar4 = *(undefined8 **)(in_stack_00000b60 + 7);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free((undefined8 *)(in_stack_00000b60 - 1));
    lVar1 = *unaff_x24;
  }
  else {
    lVar1 = *unaff_x24;
  }
  if (lVar1 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x2f0));
  }
  *(undefined1 *)(unaff_x19 + 0x441) = 0;
  _memcpy(&stack0x00000110,&stack0x00001430,0x250);
  *(undefined1 *)(unaff_x19 + 0x440) = 1;
  _memcpy(&stack0x00000360,&stack0x00000110,0x250);
  if ((char)unaff_x22[0x30] == '\x03') {
    if ((char)unaff_x22[0x2f] == '\x03') {
      FUN_100e70bcc(unaff_x22 + 0xc);
    }
    if (unaff_x22[5] != 0) {
      _free(unaff_x22[6]);
    }
    *(undefined1 *)((long)unaff_x22 + 0x181) = 0;
  }
  else if (((char)unaff_x22[0x30] == '\0') && (*unaff_x22 != 0)) {
    _free(unaff_x22[1]);
  }
  if (((*(byte *)(unaff_x19 + 0x2b9) & 1) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x30));
  }
  *(undefined1 *)(unaff_x19 + 0x2b9) = 0;
  *in_stack_00000108 = 2;
  *(undefined1 *)(in_stack_00000108 + 1) = 4;
  *(int *)((long)in_stack_00000108 + 9) = (int)unaff_x24;
  *(char *)((long)in_stack_00000108 + 0xf) = (char)((ulong)unaff_x24 >> 0x30);
  *(short *)((long)in_stack_00000108 + 0xd) = (short)((ulong)unaff_x24 >> 0x20);
  in_stack_00000108[3] = in_stack_00001258;
  in_stack_00000108[2] = in_stack_00001250;
  in_stack_00000108[4] = in_stack_00001260;
  _memcpy(in_stack_00000108 + 5,&stack0x00000360,0x250);
  *(undefined1 *)(unaff_x19 + 0x2b8) = 1;
  return;
}

