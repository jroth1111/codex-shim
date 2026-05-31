
long FUN_1005795e8(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 in_stack_000001b8;
  
  *(char **)(unaff_x29 + -0x60) = s__failed_to_resolve_stored_sessio_108ac1507;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0xe8;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0x70;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  uStack0000000000000158 = *(undefined8 *)(unaff_x25 + 0x198);
  uStack0000000000000150 = *(undefined8 *)(unaff_x25 + 400);
  uStack0000000000000160 = in_stack_000001b8;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0x50a) = 1;
  FUN_100df5738(&stack0x000000b0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x509) = 0;
  *(undefined1 *)(unaff_x19 + 0x50b) = 0;
  _memcpy(&stack0x000001c0,unaff_x19 + 0x28,0x4c8);
  *(undefined1 *)(unaff_x19 + 0x50a) = 0;
  _memcpy(unaff_x19 + 0x510,&stack0x000001c0,0x4f8);
  *(undefined8 *)(unaff_x19 + 0xa08) = unaff_x24;
  *(undefined8 *)(unaff_x19 + 0xa50) = uVar3;
  *(undefined1 *)(unaff_x19 + 0x40c8) = 0;
  lVar1 = func_0x000100577c38(unaff_x19 + 0x510);
  if (lVar1 == 0) {
    uVar2 = 4;
  }
  else {
    FUN_100d74270(unaff_x19 + 0x510);
    *(undefined1 *)(unaff_x19 + 0x50a) = 0;
    lVar4 = *(long *)(unaff_x19 + 0x4f8);
    lVar5 = *(long *)(unaff_x19 + 0x500);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x20);
      do {
        if (puVar6[-4] != 0) {
          _free(puVar6[-3]);
        }
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 6;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(long *)(unaff_x19 + 0x4f0) != 0) {
      _free(lVar4);
    }
    *(undefined1 *)(unaff_x19 + 0x50b) = 0;
    *(undefined1 *)(unaff_x19 + 0x509) = 0;
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x508) = uVar2;
  return lVar1;
}

