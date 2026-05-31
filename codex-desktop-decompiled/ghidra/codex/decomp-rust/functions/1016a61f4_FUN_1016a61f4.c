
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016a61f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  long lVar6;
  long unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  char *in_stack_00000080;
  undefined1 *in_stack_00000088;
  undefined8 uStack0000000000000120;
  undefined1 *puStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined1 *puStack00000000000001a0;
  undefined *puStack00000000000001a8;
  undefined8 *in_stack_00000378;
  
  puStack00000000000001a0 = &stack0x00000200;
  puStack00000000000001a8 = &UNK_10b208fd0;
  puStack0000000000000128 = (undefined1 *)&stack0x000001a0;
  uStack0000000000000120 = 1;
  uStack0000000000000130 = 1;
  uStack0000000000000138 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000120);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x20;
    uVar5 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xd0) = 2;
    *(undefined8 *)(unaff_x29 + -200) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xd0);
    if (iVar4 != 0) {
      in_stack_00000050 = *(long *)(lVar6 + 0x60);
      in_stack_00000058 = *(undefined8 *)(lVar6 + 0x68);
      in_stack_00000038 = *(long *)(lVar6 + 0x50);
      in_stack_00000040 = *(undefined8 *)(lVar6 + 0x58);
      in_stack_00000030 = 1;
      if (in_stack_00000038 == 0) {
        in_stack_00000030 = 2;
      }
      uStack0000000000000078 = *(undefined4 *)(lVar6 + 8);
      uStack000000000000007c = *(undefined4 *)(lVar6 + 0xc);
      in_stack_00000048 = 1;
      if (in_stack_00000050 == 0) {
        in_stack_00000048 = 2;
      }
      in_stack_00000068 = *(undefined8 *)(unaff_x25 + 0xf8);
      in_stack_00000060 = *(undefined8 *)(unaff_x25 + 0xf0);
      in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0xc0);
      in_stack_00000088 = &stack0x000002c0;
      in_stack_00000080 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000030);
    }
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000378;
  *(undefined8 *)(unaff_x29 + -200) = unaff_x21;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000030,s__Failed_to_update_thread_setting_108adaf8b,unaff_x29 + -0xd0);
  unaff_x27[1] = in_stack_00000038;
  *unaff_x27 = in_stack_00000030;
  uStack0000000000000130 = in_stack_00000040;
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
            (uVar5,&stack0x00000120);
  (**(code **)*in_stack_00000378)();
  *(undefined1 *)(unaff_x19 + 0xbd9) = 0;
  *(undefined1 *)(unaff_x19 + 0xbd8) = 1;
  return 0;
}

