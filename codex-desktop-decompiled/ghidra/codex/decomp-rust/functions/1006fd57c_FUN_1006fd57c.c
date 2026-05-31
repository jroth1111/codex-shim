
void FUN_1006fd57c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x23;
  ulong uVar8;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
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
  lVar7 = 4;
  if (0xffff < in_stack_00000010) {
    lVar7 = 10;
  }
  lVar3 = 2;
  if (0x7d < in_stack_00000010) {
    lVar3 = lVar7;
  }
  if ((ulong)(*(long *)(unaff_x20 + 0x48) - unaff_x23) <
      in_stack_00000010 + (in_stack_00000020 >> 0x38) * 4 + lVar3) {
    thunk_FUN_108855060(unaff_x20 + 0x48);
  }
  in_stack_00000058 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000000;
  in_stack_00000068 = in_stack_00000018;
  in_stack_00000060 = in_stack_00000010;
  pcStack0000000000000070 = (char *)in_stack_00000020;
  uStack0000000000000078 = in_stack_00000028;
  __ZN11tungstenite8protocol5frame5frame5Frame15format_into_buf17hf3fdee5dd9535cd9E
            (&stack0x00000030,&stack0x00000050,unaff_x20 + 0x48);
  if (in_stack_00000030 != 0x15) {
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    FUN_107c05cb4(&UNK_108caa91b,0x1a,&stack0x00000050,&UNK_10b234ee0,&UNK_10b21ee88);
LAB_1006fd778:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006fd77c);
    (*pcVar6)();
  }
  uVar8 = *(ulong *)(unaff_x20 + 0x58);
  if (*(ulong *)(unaff_x20 + 0xa8) < uVar8) {
    lVar7 = *(long *)(unaff_x20 + 0x50);
    auVar9 = FUN_1011d28cc();
    while (uVar5 = auVar9._8_8_, (auVar9._0_8_ & 1) == 0) {
      if (uVar5 == 0) {
        in_stack_00000058 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(3,&UNK_108caa935,0x1e);
        in_stack_00000050 = 0xb;
        goto LAB_1006fd6cc;
      }
      uVar4 = uVar8 - uVar5;
      if (uVar8 < uVar5) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar5,uVar8,&UNK_10b238358);
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
        goto LAB_1006fd778;
      }
      *(undefined8 *)(unaff_x20 + 0x58) = 0;
      if (uVar4 == 0) goto LAB_1006fd6c4;
      _memmove(lVar7,lVar7 + uVar5,uVar4);
      *(ulong *)(unaff_x20 + 0x58) = uVar4;
      auVar9 = FUN_1011d28cc();
      uVar8 = uVar4;
    }
    in_stack_00000050 = 0xb;
    in_stack_00000058 = uVar5;
  }
  else {
LAB_1006fd6c4:
    in_stack_00000050 = 0x15;
  }
LAB_1006fd6cc:
  FUN_100704340();
  return;
}

