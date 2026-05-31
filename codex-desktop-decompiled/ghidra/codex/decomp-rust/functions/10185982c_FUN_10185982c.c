
void FUN_10185982c(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x25;
  long unaff_x27;
  undefined8 *in_stack_00000088;
  long in_stack_000000a8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002590,s_Error_parsing_requirements_file___108ac5c0b,&stack0x000018c0);
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00002590);
  FUN_10194d288(&stack0x00002b80);
  __ZN89__LT_codex_utils_absolute_path__AbsolutePathBufGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h327d108261752884E
            (&stack0x00004120);
  if (unaff_x25 != 0) {
    _free();
  }
  if (unaff_x27 != 0) {
    _free();
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

