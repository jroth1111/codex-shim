
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100307fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long unaff_x29;
  double unaff_d8;
  double unaff_d9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined *puStack0000000000000078;
  char *pcStack0000000000000080;
  undefined1 *puStack0000000000000088;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  puStack0000000000000088 = &stack0x000000a8;
  pcStack0000000000000080 = s_current_throughput__is_below_min_108abac76;
  puStack0000000000000070 = (undefined1 *)&stack0x00000080;
  puStack0000000000000078 = &UNK_10b1f8a98;
  puStack0000000000000058 = (undefined1 *)&stack0x00000070;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  uStack0000000000000068 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000050);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar12 = *(long *)(unaff_x20 + 0xcc0);
    in_stack_000000d0 = *(undefined8 *)(lVar12 + 0x20);
    in_stack_000000d8 = *(undefined8 *)(lVar12 + 0x28);
    in_stack_000000c8 = 4;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000000c8);
    if (iVar11 != 0) {
      lVar7 = *(long *)(lVar12 + 0x60);
      uVar9 = *(undefined8 *)(lVar12 + 0x68);
      lVar8 = *(long *)(lVar12 + 0x50);
      uVar10 = *(undefined8 *)(lVar12 + 0x58);
      uVar1 = 1;
      if (lVar8 == 0) {
        uVar1 = 2;
      }
      uVar5 = *(undefined4 *)(lVar12 + 8);
      uVar6 = *(undefined4 *)(lVar12 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x70) = &stack0x00000050;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      uVar2 = 1;
      if (lVar7 == 0) {
        uVar2 = 2;
      }
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000000d0;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000c8;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000d8;
      *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x60;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar1;
      *(long *)(unaff_x29 + -200) = lVar8;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
      *(long *)(unaff_x29 + -0xb0) = lVar7;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
      *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
      *(undefined4 *)(unaff_x29 + -0x84) = uVar6;
      (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xd0);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(bool *)unaff_x19 = unaff_d9 < unaff_d8;
  return;
}

