
void FUN_100774384(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 unaff_x26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001c8,s_empty_session_file__108ac6f7d,&stack0x00000010);
  in_stack_00000028 = in_stack_000001d0;
  in_stack_00000020 = in_stack_000001c8;
  in_stack_00000030 = in_stack_000001d8;
  uVar2 = thunk_FUN_108856624(&stack0x00000020);
  lVar1 = *(long *)(unaff_x19 + 0x50);
  lVar4 = *(long *)(unaff_x19 + 0x58) + 1;
  lVar3 = lVar1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    lVar3 = lVar3 + 0x1e0;
    FUN_100e068b8();
    unaff_x21 = lVar3;
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    _free(lVar1);
  }
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar2;
  _memcpy(unaff_x20 + 2,&stack0x000003a0,0x1c8);
  unaff_x20[0x3b] = unaff_x21;
  unaff_x20[0x3c] = 0;
  unaff_x20[0x3d] = unaff_x21;
  unaff_x20[0x3e] = unaff_x26;
  *(undefined1 *)(unaff_x19 + 0x41) = 1;
  return;
}

