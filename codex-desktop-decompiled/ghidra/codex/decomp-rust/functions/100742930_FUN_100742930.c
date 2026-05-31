
void FUN_100742930(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long unaff_x23;
  undefined8 in_stack_00000010;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002ba0,s_Config_file_has_no_parent_direct_108ac5a11,&stack0x000018e0);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00002ba0);
  if (unaff_x23 != 0) {
    _free(in_stack_00000010);
  }
  *(undefined2 *)(unaff_x19 + 0xc91) = 0x100;
  *(undefined1 *)(unaff_x19 + 0xc49) = 0;
  if (*(long *)(unaff_x19 + 0x980) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x988));
  }
  if ((*(long *)(unaff_x19 + 0x930) != -0x7ffffffffffffffa) &&
     (*(char *)(unaff_x19 + 0xc41) == '\x01')) {
    FUN_100ddb5bc(unaff_x19 + 0x930);
  }
  *(undefined1 *)(unaff_x19 + 0xc41) = 0;
  if ((*(byte *)(unaff_x19 + 0xc42) & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x920);
    lVar4 = *(long *)(unaff_x19 + 0x928) + 1;
    lVar2 = lVar3;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e05a40(lVar2);
      lVar2 = lVar2 + 0xe8;
    }
    if (*(long *)(unaff_x19 + 0x918) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc42) = 0;
  if ((*(byte *)(unaff_x19 + 0xc43) & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x908);
    lVar4 = *(long *)(unaff_x19 + 0x910) + 1;
    lVar2 = lVar3;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e05a40(lVar2);
      lVar2 = lVar2 + 0xe8;
    }
    if (*(long *)(unaff_x19 + 0x900) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc43) = 0;
  if ((((*(byte *)(unaff_x19 + 0xc45) & 1) != 0) &&
      (lVar4 = *(long *)(unaff_x19 + 0x830), lVar4 != -0x8000000000000000)) &&
     (FUN_100ddb5bc(unaff_x19 + 0x848), lVar4 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x838));
  }
  if ((((*(byte *)(unaff_x19 + 0xc44) & 1) != 0) &&
      (lVar4 = *(long *)(unaff_x19 + 0x898), lVar4 != -0x8000000000000000)) &&
     (FUN_100ddb5bc(unaff_x19 + 0x8b0), lVar4 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x8a0));
  }
  *(undefined2 *)(unaff_x19 + 0xc44) = 0;
  if ((*(byte *)(unaff_x19 + 0xc46) & 1) != 0) {
    FUN_100e554c4(unaff_x19 + 0x248);
  }
  *(undefined1 *)(unaff_x19 + 0xc46) = 0;
  if ((*(ulong *)(unaff_x19 + 0x230) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x238));
  }
  FUN_100e01cdc(unaff_x19 + 0x180);
  FUN_100dd8a98(unaff_x19 + 0x160);
  if (((*(long *)(unaff_x19 + 0x138) != -0x8000000000000000) &&
      (*(char *)(unaff_x19 + 0xc47) == '\x01')) && (*(long *)(unaff_x19 + 0x138) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x140));
  }
  *(undefined1 *)(unaff_x19 + 0xc47) = 0;
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  _memcpy(unaff_x20 + 2,&stack0x00003520,0x950);
  *(undefined1 *)(unaff_x19 + 0xc38) = 1;
  return;
}

