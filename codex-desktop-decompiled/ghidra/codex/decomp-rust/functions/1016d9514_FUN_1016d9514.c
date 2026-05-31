
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016d9514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long unaff_x23;
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
  
  puStack0000000000000048 = &stack0x00000068;
  pcStack0000000000000040 = s_>failed_to_restore_side_conversa_108adbb11;
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
    in_stack_00000090 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000098 = *(undefined8 *)(lVar4 + 0x28);
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
      in_stack_000000c0 = *(long *)(lVar4 + 0x60);
      in_stack_000000c8 = *(undefined8 *)(lVar4 + 0x68);
      in_stack_000000a8 = *(long *)(lVar4 + 0x50);
      in_stack_000000b0 = *(undefined8 *)(lVar4 + 0x58);
      in_stack_000000a0 = 1;
      if (in_stack_000000a8 == 0) {
        in_stack_000000a0 = 2;
      }
      uStack00000000000000e8 = *(undefined4 *)(lVar4 + 8);
      uStack00000000000000ec = *(undefined4 *)(lVar4 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000010;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      in_stack_000000b8 = 1;
      if (in_stack_000000c0 == 0) {
        in_stack_000000b8 = 2;
      }
      in_stack_000000d8 = in_stack_00000090;
      in_stack_000000d0 = in_stack_00000088;
      in_stack_000000e0 = in_stack_00000098;
      in_stack_000000f8 = unaff_x29 + -0x50;
      in_stack_000000f0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000a0);
    }
  }
  (**(code **)*in_stack_00000008)();
  *(undefined1 *)(unaff_x19 + unaff_x23) = 1;
  return 0;
}

