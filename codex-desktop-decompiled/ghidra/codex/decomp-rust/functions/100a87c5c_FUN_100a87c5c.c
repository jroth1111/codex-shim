
void FUN_100a87c5c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_stack_00000108;
  undefined4 in_stack_00001431;
  undefined3 in_stack_00001435;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x21 + 8,s_failed_to_read_thread_id_from_108acf9ed,&stack0x00000be0);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x21 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x21 + 8);
  *(undefined1 *)(unaff_x19 + 0x2ba) = 0;
  if (((*(byte *)(unaff_x19 + 0x2b9) & 1) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x30));
  }
  *(undefined1 *)(unaff_x19 + 0x2b9) = 0;
  *in_stack_00000108 = 2;
  *(undefined1 *)(in_stack_00000108 + 1) = 4;
  *(undefined4 *)((long)in_stack_00000108 + 9) = in_stack_00001431;
  *(char *)((long)in_stack_00000108 + 0xf) = (char)((uint3)in_stack_00001435 >> 0x10);
  *(short *)((long)in_stack_00000108 + 0xd) = (short)in_stack_00001435;
  in_stack_00000108[3] = uVar3;
  in_stack_00000108[2] = uVar2;
  in_stack_00000108[4] = uVar1;
  _memcpy(in_stack_00000108 + 5,&stack0x00000360,0x250);
  *(undefined1 *)(unaff_x19 + 0x2b8) = 1;
  return;
}

