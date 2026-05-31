
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005b1014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x29;
  ulong in_stack_00000008;
  undefined1 *puStack0000000000000010;
  undefined *puStack0000000000000018;
  char *pcStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined8 uStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *in_stack_000000e0;
  long in_stack_000000e8;
  
  puStack0000000000000040 = &stack0x00000048;
  pcStack0000000000000038 = s__failed_to_materialize_thread_pe_108ac19b3;
  puStack0000000000000010 = (undefined1 *)&stack0x00000038;
  puStack0000000000000018 = &UNK_10b208fd0;
  puStack0000000000000060 = (undefined1 *)&stack0x00000010;
  uStack0000000000000058 = 1;
  uStack0000000000000068 = 1;
  uStack0000000000000070 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000058);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x20;
    in_stack_00000080 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_00000088 = *(undefined8 *)(lVar6 + 0x28);
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
      in_stack_000000b0 = *(long *)(lVar6 + 0x60);
      in_stack_000000b8 = *(undefined8 *)(lVar6 + 0x68);
      in_stack_00000098 = *(long *)(lVar6 + 0x50);
      in_stack_000000a0 = *(undefined8 *)(lVar6 + 0x58);
      in_stack_00000090 = 1;
      if (in_stack_00000098 == 0) {
        in_stack_00000090 = 2;
      }
      uStack00000000000000d8 = *(undefined4 *)(lVar6 + 8);
      uStack00000000000000dc = *(undefined4 *)(lVar6 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000058;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      in_stack_000000a8 = 1;
      if (in_stack_000000b0 == 0) {
        in_stack_000000a8 = 2;
      }
      *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000080;
      *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000078;
      in_stack_000000d0 = in_stack_00000088;
      in_stack_000000e8 = unaff_x29 + -0x50;
      in_stack_000000e0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000090);
    }
  }
  if ((in_stack_00000008 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar7 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar7[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_00000008 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0x7e0) = 1;
  return 0;
}

