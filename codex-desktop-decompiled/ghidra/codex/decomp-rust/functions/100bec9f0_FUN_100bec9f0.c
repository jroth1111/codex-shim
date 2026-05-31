
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100bec9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x29;
  ulong in_stack_00000000;
  undefined1 *puStack0000000000000008;
  undefined *puStack0000000000000010;
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  char *in_stack_000000f0;
  long in_stack_000000f8;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s_3remote_control_websocket_reader_108ad2496;
  puStack0000000000000008 = (undefined1 *)&stack0x00000050;
  puStack0000000000000010 = &UNK_10b208fd0;
  puStack0000000000000038 = (undefined1 *)&stack0x00000008;
  uStack0000000000000030 = 1;
  uStack0000000000000040 = 1;
  uStack0000000000000048 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000030);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar7 = *unaff_x21;
    in_stack_00000090 = *(undefined8 *)(lVar7 + 0x20);
    in_stack_00000098 = *(undefined8 *)(lVar7 + 0x28);
    in_stack_00000088 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000088);
    if (iVar3 != 0) {
      in_stack_000000c0 = *(long *)(lVar7 + 0x60);
      in_stack_000000c8 = *(undefined8 *)(lVar7 + 0x68);
      in_stack_000000a8 = *(long *)(lVar7 + 0x50);
      in_stack_000000b0 = *(undefined8 *)(lVar7 + 0x58);
      in_stack_000000a0 = 1;
      if (in_stack_000000a8 == 0) {
        in_stack_000000a0 = 2;
      }
      uStack00000000000000e8 = *(undefined4 *)(lVar7 + 8);
      uStack00000000000000ec = *(undefined4 *)(lVar7 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000030;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      in_stack_000000b8 = 1;
      if (in_stack_000000c0 == 0) {
        in_stack_000000b8 = 2;
      }
      in_stack_000000d8 = unaff_x22[1];
      in_stack_000000d0 = *unaff_x22;
      in_stack_000000e0 = in_stack_00000098;
      in_stack_000000f8 = unaff_x29 + -0x50;
      in_stack_000000f0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000a0);
    }
  }
  if ((in_stack_00000000 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_00000000 - 1);
    puVar6 = *(undefined8 **)(in_stack_00000000 + 7);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_00000000 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0xa78) = 1;
  return unaff_w20 & 1;
}

