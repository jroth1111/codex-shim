
undefined1  [16] FUN_100279024(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 uStack0000000000000018;
  ulong uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  char *pcStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000060;
  char *pcStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined2 in_stack_000000b8;
  
  puStack0000000000000070 = &stack0x00000008;
  pcStack0000000000000068 = s_Sending_warning_alert_108b2b917;
  uStack0000000000000018 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 0x14;
  pcStack0000000000000038 =
       "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rustls-0.23.36/src/common_state.rs"
  ;
  uStack0000000000000048 = 4;
  uStack0000000000000040 = 0x65;
  uStack0000000000000060 = 0x24900000001;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  uStack0000000000000020 = param_1;
  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000018);
  *(undefined2 *)(unaff_x20 + 0x339) = 0x101;
  in_stack_000000b8 = 4;
  uStack0000000000000018 = 0x8000000000000001;
  uStack0000000000000020 = uStack0000000000000020 & 0xffffffff00000000;
  __ZN6rustls12common_state11CommonState8send_msg17he7b5eb2b43baa157E();
  *(byte *)(unaff_x20 + 0x869) = *(byte *)(unaff_x20 + 0x869) | 2;
  uVar6 = 1;
  do {
    if (*(long *)(unaff_x20 + 0xb0) == 0) {
      auVar8 = FUN_1002dd21c(unaff_x20 + 0x420);
      uVar5 = auVar8._8_8_;
      if ((auVar8._0_8_ & 1) == 0) {
        if ((uVar5 != 0) && (cVar3 = FUN_1002aac5c(uVar5), cVar3 == '\a')) {
          if ((uVar5 & 3) == 1) {
            uVar6 = *(undefined8 *)(uVar5 - 1);
            puVar7 = *(undefined8 **)(uVar5 + 7);
            pcVar4 = (code *)*puVar7;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar6);
            }
            if (puVar7[1] != 0) {
              _free(uVar6);
            }
            _free((undefined8 *)(uVar5 - 1));
          }
          uVar5 = 0;
        }
LAB_1002791a4:
        uVar6 = 0;
        unaff_x21 = uVar5;
      }
      else {
        uVar6 = 1;
      }
      goto LAB_1002791a8;
    }
    auVar8 = FUN_100279a88(unaff_x20 + 0x420);
    uVar5 = auVar8._8_8_;
    if (auVar8._0_8_ == 2) goto LAB_100279124;
    if ((auVar8._0_8_ & 1) != 0) goto LAB_1002791a4;
    unaff_x21 = uVar5;
  } while (uVar5 != 0);
  uVar6 = 0;
LAB_100279124:
  unaff_x21 = 0x1700000003;
LAB_1002791a8:
  auVar8._8_8_ = unaff_x21;
  auVar8._0_8_ = uVar6;
  return auVar8;
}

