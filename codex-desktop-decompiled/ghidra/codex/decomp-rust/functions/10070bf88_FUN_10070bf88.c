
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070bf88(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 uVar3;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long lStack00000000000000c8;
  undefined *puStack00000000000000d0;
  long lStack00000000000000d8;
  undefined *puStack00000000000000e0;
  char in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 *in_stack_00000420;
  
  *(char **)(unaff_x29 + -0x98) = s_sse_stream_error__108ad3c45;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x70;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -200;
  lStack00000000000000c8 = unaff_x29 + -0x98;
  puStack00000000000000d0 = &UNK_10b208fd0;
  lStack00000000000000d8 = unaff_x29 + -0xb8;
  puStack00000000000000e0 = &UNK_10b21e528;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000004e8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar3 = *unaff_x23;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    unaff_x25 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x25 = (undefined8 *)&UNK_109adfc03;
    }
    iVar2 = (**(code **)(puVar1 + 0x18))(unaff_x25,&stack0x000003f0);
    if (iVar2 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar3,unaff_x25,puVar1,&stack0x000003f0,&stack0x000004e8);
    }
  }
  uVar3 = FUN_10086b75c();
  if (in_stack_00000410 == '\0') {
    if ((code *)*in_stack_00000420 != (code *)0x0) {
      (*(code *)*in_stack_00000420)(in_stack_00000418);
    }
    unaff_x25 = in_stack_00000420;
    if (in_stack_00000420[1] != 0) {
      _free(in_stack_00000418);
    }
  }
  FUN_100e0af0c();
  *(undefined8 *)(unaff_x20 + 0xc0) = 3;
  *(undefined8 *)(unaff_x20 + 200) = uVar3;
  *(undefined **)(unaff_x20 + 0xd0) = &UNK_10b2241c0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = in_stack_00000048;
  *(undefined8 *)(unaff_x20 + 0x100) = in_stack_00000040;
  *(undefined8 *)(unaff_x20 + 0x118) = in_stack_00000058;
  *(undefined8 *)(unaff_x20 + 0x110) = in_stack_00000050;
  *(undefined8 *)(unaff_x20 + 0x128) = in_stack_00000068;
  *(undefined8 *)(unaff_x20 + 0x120) = in_stack_00000060;
  *(undefined8 *)(unaff_x20 + 0xe8) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + 0xe0) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0xf8) = in_stack_00000038;
  *(undefined8 *)(unaff_x20 + 0xf0) = in_stack_00000030;
  *(undefined8 **)(unaff_x20 + 0x130) = unaff_x25;
  FUN_10070bab8();
  return;
}

