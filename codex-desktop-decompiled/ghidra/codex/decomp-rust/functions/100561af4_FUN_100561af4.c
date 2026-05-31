
void FUN_100561af4(undefined8 param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0x90) = s__Failed_to_deserialize_overridde_108ac11d8;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar1 = *(undefined8 *)(unaff_x29 + -200);
  FUN_100e05b5c(&stack0x000000d8);
  *(undefined1 *)(unaff_x25 + 0x1a9) = 0;
  FUN_100e76384(unaff_x19 + 0xf8);
  *unaff_x24 = 2;
  unaff_x24[1] = uVar1;
  _memcpy(unaff_x24 + 2,&stack0x00002e08,0x1a20);
  *(undefined1 *)(unaff_x25 + 0x1a8) = 1;
  return;
}

