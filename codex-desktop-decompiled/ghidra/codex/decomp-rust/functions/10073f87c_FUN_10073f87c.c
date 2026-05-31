
void FUN_10073f87c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long unaff_x23;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002ba0,s_Config_file_has_no_parent_direct_108ac5a11,&stack0x000018e0);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00002ba0);
  if (unaff_x23 != 0) {
    _free();
  }
  *(undefined2 *)(unaff_x19 + 0xc99) = 0x100;
  *(undefined1 *)(unaff_x19 + 0xc51) = 0;
  if (*(long *)(unaff_x19 + 0x988) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x990));
  }
  if ((*(long *)(unaff_x19 + 0x938) != -0x7ffffffffffffffa) &&
     (*(char *)(unaff_x19 + 0xc49) == '\x01')) {
    FUN_100ddb5bc(unaff_x19 + 0x938);
  }
  *(undefined1 *)(unaff_x19 + 0xc49) = 0;
  if ((*(byte *)(unaff_x19 + 0xc4a) & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x928);
    lVar4 = *(long *)(unaff_x19 + 0x930) + 1;
    lVar2 = lVar3;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e05a40(lVar2);
      lVar2 = lVar2 + 0xe8;
    }
    if (*(long *)(unaff_x19 + 0x920) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc4a) = 0;
  if ((*(byte *)(unaff_x19 + 0xc4b) & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x910);
    lVar4 = *(long *)(unaff_x19 + 0x918) + 1;
    lVar2 = lVar3;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e05a40(lVar2);
      lVar2 = lVar2 + 0xe8;
    }
    if (*(long *)(unaff_x19 + 0x908) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc4b) = 0;
  if ((((*(byte *)(unaff_x19 + 0xc4d) & 1) != 0) &&
      (lVar4 = *(long *)(unaff_x19 + 0x838), lVar4 != -0x8000000000000000)) &&
     (FUN_100ddb5bc(unaff_x19 + 0x850), lVar4 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x840));
  }
  if ((((*(byte *)(unaff_x19 + 0xc4c) & 1) != 0) &&
      (lVar4 = *(long *)(unaff_x19 + 0x8a0), lVar4 != -0x8000000000000000)) &&
     (FUN_100ddb5bc(unaff_x19 + 0x8b8), lVar4 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x8a8));
  }
  *(undefined2 *)(unaff_x19 + 0xc4c) = 0;
  if ((*(byte *)(unaff_x19 + 0xc4e) & 1) != 0) {
    FUN_100e554c4(unaff_x19 + 0x250);
  }
  *(undefined1 *)(unaff_x19 + 0xc4e) = 0;
  if ((*(ulong *)(unaff_x19 + 0x238) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x240));
  }
  FUN_100e01cdc(unaff_x19 + 0x188);
  FUN_100dd8a98(unaff_x19 + 0x168);
  if (((*(long *)(unaff_x19 + 0x140) != -0x8000000000000000) &&
      (*(char *)(unaff_x19 + 0xc4f) == '\x01')) && (*(long *)(unaff_x19 + 0x140) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x148));
  }
  *(undefined1 *)(unaff_x19 + 0xc4f) = 0;
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  _memcpy(unaff_x20 + 2,&stack0x00003520,0x950);
  *(undefined1 *)(unaff_x19 + 0xc40) = 1;
  return;
}

