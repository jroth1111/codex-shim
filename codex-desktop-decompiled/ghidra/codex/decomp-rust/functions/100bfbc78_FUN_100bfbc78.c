
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bfbc78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  code *pcVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x29;
  undefined8 uVar16;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined *puStack0000000000000078;
  char *pcStack0000000000000080;
  undefined1 *puStack0000000000000088;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  puStack0000000000000088 = &stack0x00000090;
  pcStack0000000000000080 = s_4remote_control_websocket_auth_r_108ad2696;
  puStack0000000000000070 = (undefined1 *)&stack0x00000080;
  puStack0000000000000078 = &UNK_10b208fd0;
  puStack0000000000000058 = (undefined1 *)&stack0x00000070;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  uStack0000000000000068 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000050);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar14 = *unaff_x20;
    in_stack_000000e0 = *(undefined8 *)(lVar14 + 0x20);
    in_stack_000000e8 = *(undefined8 *)(lVar14 + 0x28);
    in_stack_000000d8 = 2;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000d8);
    if (iVar10 != 0) {
      lVar6 = *(long *)(lVar14 + 0x60);
      uVar8 = *(undefined8 *)(lVar14 + 0x68);
      lVar7 = *(long *)(lVar14 + 0x50);
      uVar9 = *(undefined8 *)(lVar14 + 0x58);
      uVar13 = 1;
      if (lVar7 == 0) {
        uVar13 = 2;
      }
      uVar4 = *(undefined4 *)(lVar14 + 8);
      uVar5 = *(undefined4 *)(lVar14 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000050;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar6 == 0) {
        uVar1 = 2;
      }
      uVar16 = *unaff_x21;
      *(undefined8 *)(unaff_x29 + -0x88) = unaff_x21[1];
      *(undefined8 *)(unaff_x29 + -0x90) = uVar16;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000e8;
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar13;
      *(long *)(unaff_x29 + -0xb8) = lVar7;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar9;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
      *(long *)(unaff_x29 + -0xa0) = lVar6;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar8;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
    }
  }
  if (in_stack_00000030 == -0x8000000000000000) {
    if (((ulong)in_stack_00000038 & 3) != 1) goto LAB_100bfc004;
    puVar12 = (undefined8 *)((long)in_stack_00000038 + -1);
    uVar13 = *puVar12;
    puVar15 = *(undefined8 **)((long)in_stack_00000038 + 7);
    pcVar11 = (code *)*puVar15;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar13);
    }
    in_stack_00000038 = puVar12;
    if (puVar15[1] != 0) {
      _free(uVar13);
    }
  }
  else if (in_stack_00000030 == 0) goto LAB_100bfc004;
  _free(in_stack_00000038);
LAB_100bfc004:
  *(undefined1 *)(unaff_x19 + 0xe68) = 1;
  return 0;
}

