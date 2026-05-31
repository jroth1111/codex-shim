
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bfbabc(undefined8 param_1,undefined8 param_2)

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
  long *unaff_x20;
  long lVar12;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  long lStack0000000000000080;
  undefined *puStack0000000000000088;
  long in_stack_000000d8;
  undefined *in_stack_000000e0;
  
  *(char **)(unaff_x29 + -0x60) = s_7remote_control_websocket_auth_r_108ad263c;
  *(undefined1 **)(unaff_x29 + -0x58) = &stack0x00000090;
  lStack0000000000000080 = unaff_x29 + -0x60;
  puStack0000000000000088 = &UNK_10b208fd0;
  puStack0000000000000058 = (undefined1 *)&stack0x00000080;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  uStack0000000000000068 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000050);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar12 = *unaff_x20;
    in_stack_00000038 = *(undefined8 *)(lVar12 + 0x20);
    in_stack_00000040 = *(undefined8 *)(lVar12 + 0x28);
    in_stack_00000030 = 3;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000030);
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
      *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000050;
      *(undefined1 *)(unaff_x29 + -0x48) = 1;
      in_stack_000000d8 = unaff_x29 + -0x50;
      in_stack_000000e0 = &DAT_1061c2098;
      uVar2 = 1;
      if (lVar7 == 0) {
        uVar2 = 2;
      }
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000038;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000030;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000040;
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long **)(unaff_x29 + -0x68) = &stack0x000000d8;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar1;
      *(long *)(unaff_x29 + -0xb8) = lVar8;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar9;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar5;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar6;
      (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xc0);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xe68) = 1;
  return 1;
}

