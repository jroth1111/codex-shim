
void FUN_10034cb70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  code *pcVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x23;
  long in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char *pcStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000098;
  
  pcStack0000000000000070 =
       "/Users/runner/.cargo/git/checkouts/tungstenite-rs-006aed970da0a0a9/9200079/src/protocol/frame/mod.rs"
  ;
  uStack0000000000000080 = 5;
  uStack0000000000000078 = 100;
  uStack0000000000000098 = 0x10100000001;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000050);
  lVar3 = 4;
  if (0xffff < in_stack_00000010) {
    lVar3 = 10;
  }
  lVar4 = 2;
  if (0x7d < in_stack_00000010) {
    lVar4 = lVar3;
  }
  if ((ulong)(*(long *)(unaff_x20 + 0x48) - unaff_x23) <
      in_stack_00000010 + (in_stack_00000020 >> 0x38) * 4 + lVar4) {
    thunk_FUN_1087dc2d8(unaff_x20 + 0x48);
  }
  in_stack_00000058 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000000;
  in_stack_00000068 = in_stack_00000018;
  in_stack_00000060 = in_stack_00000010;
  pcStack0000000000000070 = (char *)in_stack_00000020;
  uStack0000000000000078 = in_stack_00000028;
  __ZN11tungstenite8protocol5frame5frame5Frame15format_into_buf17hf3fdee5dd9535cd9E
            (&stack0x00000030,&stack0x00000050,unaff_x20 + 0x48);
  if (in_stack_00000030 == 0x15) {
    if (*(ulong *)(unaff_x20 + 0xa8) < *(ulong *)(unaff_x20 + 0x58)) {
      FUN_10034d458(&stack0x00000050,unaff_x20 + 0x48);
      uVar5 = in_stack_00000058;
      if ((in_stack_00000050 != 0x15) && (in_stack_00000050 == 0xb)) {
        if ((1 < *(byte *)(unaff_x20 + 0x14a)) &&
           (cVar6 = FUN_10034f0fc(in_stack_00000058), cVar6 == '\x03')) {
          *unaff_x19 = 9;
          if ((uVar5 & 3) != 1) {
            return;
          }
          uVar8 = *(undefined8 *)(uVar5 - 1);
          puVar9 = *(undefined8 **)(uVar5 + 7);
          pcVar7 = (code *)*puVar9;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar8);
          }
          if (puVar9[1] != 0) {
            _free(uVar8);
          }
          _free((undefined8 *)(uVar5 - 1));
          return;
        }
        *unaff_x19 = 0xb;
        unaff_x19[1] = uVar5;
        return;
      }
    }
    else {
      in_stack_00000050 = 0x15;
    }
    unaff_x19[1] = in_stack_00000058;
    *unaff_x19 = in_stack_00000050;
    unaff_x19[3] = in_stack_00000068;
    unaff_x19[2] = in_stack_00000060;
    return;
  }
  in_stack_00000058 = in_stack_00000038;
  in_stack_00000050 = in_stack_00000030;
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  FUN_107c05cb4(&UNK_108c849f6,0x1a,&stack0x00000050,&UNK_10b203ad0,&UNK_10b2030e8);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10034cd70);
  (*pcVar7)();
}

