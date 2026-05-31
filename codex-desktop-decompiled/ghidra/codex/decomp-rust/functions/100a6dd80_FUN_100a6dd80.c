
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6dd80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long *unaff_x22;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x25;
  undefined8 uVar11;
  long unaff_x29;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined *puStack0000000000000078;
  char *pcStack0000000000000080;
  undefined1 *puStack0000000000000088;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  char *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  puStack0000000000000088 = &stack0x00000090;
  pcStack0000000000000080 = s__failed_to_resolve_plugin_cache_r_108acf290;
  puStack0000000000000070 = (undefined1 *)&stack0x00000080;
  puStack0000000000000078 = &UNK_10b208fd0;
  puStack0000000000000058 = (undefined1 *)&stack0x00000070;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  uStack0000000000000068 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000050);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar10 = *unaff_x22;
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x98) = 2;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x98);
    if (iVar4 != 0) {
      in_stack_000000d8 = *(long *)(lVar10 + 0x60);
      in_stack_000000e0 = *(undefined8 *)(lVar10 + 0x68);
      in_stack_000000c0 = *(long *)(lVar10 + 0x50);
      in_stack_000000c8 = *(undefined8 *)(lVar10 + 0x58);
      in_stack_000000b8 = 1;
      if (in_stack_000000c0 == 0) {
        in_stack_000000b8 = 2;
      }
      uStack0000000000000100 = *(undefined4 *)(lVar10 + 8);
      uStack0000000000000104 = *(undefined4 *)(lVar10 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x80) = &stack0x00000050;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      in_stack_000000d0 = 1;
      if (in_stack_000000d8 == 0) {
        in_stack_000000d0 = 2;
      }
      *(undefined8 *)(unaff_x25 + 0x38) = *(undefined8 *)(unaff_x25 + 0x168);
      *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)(unaff_x25 + 0x160);
      in_stack_000000f8 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_00000110 = unaff_x29 + -0x70;
      in_stack_00000108 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000b8);
    }
  }
  uVar11 = *(undefined8 *)(unaff_x21 + 8);
  lVar10 = *(long *)(unaff_x21 + 0x10);
  if (lVar10 == 0) {
    lVar5 = 1;
    _memcpy(1,uVar11,0);
    uVar11 = *(undefined8 *)(unaff_x21 + 0x20);
    lVar8 = *(long *)(unaff_x21 + 0x28);
    if (lVar8 != 0) goto LAB_100a6e11c;
LAB_100a6e174:
    lVar6 = 1;
    _memcpy(1,uVar11,lVar8);
    if (in_stack_00000030 != 0) goto LAB_100a6e140;
LAB_100a6e190:
    if ((in_stack_00000048 & 3) != 1) goto LAB_100a6e1a0;
    in_stack_00000040 = (undefined8 *)(in_stack_00000048 - 1);
    uVar11 = *in_stack_00000040;
    puVar9 = *(undefined8 **)(in_stack_00000048 + 7);
    pcVar7 = (code *)*puVar9;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar11);
    }
    if (puVar9[1] != 0) {
      _free(uVar11);
    }
  }
  else {
    lVar5 = _malloc(lVar10);
    if (lVar5 == 0) {
      func_0x0001087c9084(1,lVar10);
      goto LAB_100a6e2bc;
    }
    _memcpy(lVar5,uVar11,lVar10);
    uVar11 = *(undefined8 *)(unaff_x21 + 0x20);
    lVar8 = *(long *)(unaff_x21 + 0x28);
    if (lVar8 == 0) goto LAB_100a6e174;
LAB_100a6e11c:
    lVar6 = _malloc(lVar8);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar8);
LAB_100a6e2bc:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a6e2c0);
      (*pcVar7)();
    }
    _memcpy(lVar6,uVar11,lVar8);
    if (in_stack_00000030 == 0) goto LAB_100a6e190;
LAB_100a6e140:
    if (in_stack_00000038 == 0) goto LAB_100a6e1a0;
  }
  _free(in_stack_00000040);
LAB_100a6e1a0:
  *unaff_x20 = lVar10;
  unaff_x20[1] = lVar5;
  unaff_x20[2] = lVar10;
  unaff_x20[3] = lVar8;
  unaff_x20[4] = lVar6;
  unaff_x20[5] = lVar8;
  unaff_x20[6] = -0x8000000000000000;
  lVar10 = *(long *)(unaff_x29 + -0xb0);
  unaff_x20[8] = *(long *)(unaff_x29 + -0xa8);
  unaff_x20[7] = lVar10;
  unaff_x20[9] = -0x8000000000000000;
  unaff_x20[0x13] = in_stack_000001c8;
  unaff_x20[0x12] = in_stack_000001c0;
  unaff_x20[0x15] = in_stack_000001d8;
  unaff_x20[0x14] = in_stack_000001d0;
  unaff_x20[0x17] = in_stack_000001e8;
  unaff_x20[0x16] = in_stack_000001e0;
  unaff_x20[0x18] = in_stack_000001f0;
  unaff_x20[0xb] = in_stack_00000188;
  unaff_x20[10] = in_stack_00000180;
  unaff_x20[0xd] = in_stack_00000198;
  unaff_x20[0xc] = in_stack_00000190;
  unaff_x20[0xf] = in_stack_000001a8;
  unaff_x20[0xe] = in_stack_000001a0;
  unaff_x20[0x11] = in_stack_000001b8;
  unaff_x20[0x10] = in_stack_000001b0;
  *(undefined1 *)(unaff_x19 + 0x468) = 1;
  return;
}

