
void FUN_101859378(void)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 unaff_w20;
  undefined8 uVar5;
  undefined8 *in_stack_00000088;
  long in_stack_000000a8;
  ulong in_stack_00003e50;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001f60,s__Failed_to_read_requirements_fil_108ac5be3,&stack0x00002b80);
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(unaff_w20,&stack0x000018c0);
  if ((in_stack_00003e50 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_00003e50 - 1);
    puVar4 = *(undefined8 **)(in_stack_00003e50 + 7);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar4[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_00003e50 - 1));
  }
  *(undefined1 *)(in_stack_000000a8 + 0xcb0) = 1;
  if (*(long *)(in_stack_000000a8 + 0xc58) == 0) {
    bVar1 = *(byte *)(in_stack_000000a8 + 0xc4e);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000a8 + 0xc60));
    bVar1 = *(byte *)(in_stack_000000a8 + 0xc4e);
  }
  if ((bVar1 & 1) != 0) {
    FUN_101965740(in_stack_000000a8 + 0x250);
  }
  *(undefined1 *)(in_stack_000000a8 + 0xc4e) = 0;
  if ((*(ulong *)(in_stack_000000a8 + 0x238) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000a8 + 0x240));
  }
  FUN_101952554(in_stack_000000a8 + 0x188);
  FUN_10194c6ac(in_stack_000000a8 + 0x168);
  if (((*(long *)(in_stack_000000a8 + 0x140) != -0x8000000000000000) &&
      (*(char *)(in_stack_000000a8 + 0xc4f) == '\x01')) &&
     (*(long *)(in_stack_000000a8 + 0x140) != 0)) {
    _free(*(undefined8 *)(in_stack_000000a8 + 0x148));
  }
  *(undefined1 *)(in_stack_000000a8 + 0xc4f) = 0;
  *in_stack_00000088 = 2;
  in_stack_00000088[1] = uVar2;
  _memcpy(in_stack_00000088 + 2,&stack0x00003500,0x950);
  *(undefined1 *)(in_stack_000000a8 + 0xc40) = 1;
  return;
}

