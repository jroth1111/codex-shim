
undefined1  [16] FUN_1011dfd00(void)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x29;
  undefined1 auVar6 [16];
  
  puVar4 = (ulong *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0x30,
                               &UNK_10b21f750);
  uVar5 = *puVar4 ^ 0x8000000000000000;
  if (-1 < (long)*puVar4) {
    uVar5 = 1;
  }
  puVar1 = (undefined *)0x1;
  if (uVar5 != 1) {
    puVar1 = &UNK_10b212f28;
  }
  puVar2 = (ulong *)0x0;
  if (uVar5 != 1) {
    puVar2 = puVar4 + 4;
  }
  puVar4 = puVar4 + 4;
  puVar3 = &UNK_10b212e38;
  if (uVar5 != 0) {
    puVar4 = puVar2;
    puVar3 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = puVar4;
  return auVar6;
}

