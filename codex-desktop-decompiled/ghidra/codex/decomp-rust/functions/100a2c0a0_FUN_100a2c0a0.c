
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a2c0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined1 *puStack0000000000000030;
  undefined *puStack0000000000000038;
  char *pcStack0000000000000040;
  undefined1 *puStack0000000000000048;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *in_stack_000000e0;
  long in_stack_000000e8;
  
  puStack0000000000000048 = &stack0x00000050;
  pcStack0000000000000040 = s_failed_to_persist_OAuth_tokens__108ace6f7;
  puStack0000000000000030 = (undefined1 *)&stack0x00000040;
  puStack0000000000000038 = &UNK_10b208fd0;
  puStack0000000000000018 = (undefined1 *)&stack0x00000030;
  uStack0000000000000010 = 1;
  uStack0000000000000020 = 1;
  uStack0000000000000028 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000010);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *unaff_x20;
    in_stack_00000080 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000088 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000078 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000078);
    if (iVar3 != 0) {
      in_stack_000000b0 = *(long *)(lVar4 + 0x60);
      in_stack_000000b8 = *(undefined8 *)(lVar4 + 0x68);
      in_stack_00000098 = *(long *)(lVar4 + 0x50);
      in_stack_000000a0 = *(undefined8 *)(lVar4 + 0x58);
      in_stack_00000090 = 1;
      if (in_stack_00000098 == 0) {
        in_stack_00000090 = 2;
      }
      uStack00000000000000d8 = *(undefined4 *)(lVar4 + 8);
      uStack00000000000000dc = *(undefined4 *)(lVar4 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000010;
      *(undefined1 *)(unaff_x29 + -0x48) = 1;
      *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
      *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
      in_stack_000000a8 = 1;
      if (in_stack_000000b0 == 0) {
        in_stack_000000a8 = 2;
      }
      in_stack_000000c8 = in_stack_00000080;
      in_stack_000000c0 = in_stack_00000078;
      in_stack_000000d0 = in_stack_00000088;
      in_stack_000000e8 = unaff_x29 + -0x40;
      in_stack_000000e0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000090);
    }
  }
  (**(code **)*in_stack_00000008)();
  lVar4 = **(long **)(unaff_x19 + 0x18);
  **(long **)(unaff_x19 + 0x18) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103e32944();
  }
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return 0;
}

