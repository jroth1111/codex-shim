
undefined8 FUN_1002dd2b8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  long unaff_x19;
  ulong uVar6;
  undefined1 auVar7 [16];
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
  *(undefined2 *)(unaff_x19 + 0x359) = 0x101;
  in_stack_000000b8 = 4;
  uStack0000000000000018 = 0x8000000000000001;
  uStack0000000000000020 = uStack0000000000000020 & 0xffffffff00000000;
  __ZN6rustls12common_state11CommonState8send_msg17he7b5eb2b43baa157E
            (unaff_x19 + 0x20,&stack0x00000018,*(char *)(unaff_x19 + 0x69) == '\x02');
  *(byte *)(unaff_x19 + 0x441) = *(byte *)(unaff_x19 + 0x441) | 2;
  while( true ) {
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
      if (*(int *)(unaff_x19 + 0x18) == -1) {
        FUN_107c05cb0(&UNK_10b4cd2b8);
        return 1;
      }
      iVar4 = _shutdown(*(int *)(unaff_x19 + 0x18),1);
      if (iVar4 == -1) {
        puVar5 = (uint *)___error();
        uVar6 = (ulong)*puVar5 << 0x20 | 2;
        cVar3 = FUN_1060eda1c(uVar6);
        if (cVar3 != '\a') {
          FUN_1002aac5c(uVar6);
          return 0;
        }
      }
      return 0;
    }
    auVar7 = FUN_100279b5c();
    if (auVar7._0_8_ == 2) {
      return 1;
    }
    if ((auVar7._0_8_ & 1) != 0) break;
    if (auVar7._8_8_ == 0) {
      return 0;
    }
  }
  return 0;
}

