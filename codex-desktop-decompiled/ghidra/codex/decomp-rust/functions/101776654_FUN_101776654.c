
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101776654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  long *plVar7;
  ulong unaff_x25;
  long unaff_x26;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  *(char **)(unaff_x29 + -0x68) = s__ansi_escape_line__expected_a_si_108adc811;
  *(undefined8 **)(unaff_x29 + -0x60) = &stack0x000000d8;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b258760;
  lStack00000000000000b8 = unaff_x29 + -0x78;
  uStack00000000000000b0 = 1;
  uStack00000000000000c0 = 1;
  uStack00000000000000c8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000b0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *(long *)(unaff_x22 + 0xd38);
    in_stack_00000078 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_00000080 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000070 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000070);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,&stack0x00000070,&stack0x000000b0);
    }
  }
  lStack00000000000000b8 = *(undefined8 *)(unaff_x21 + 0x20);
  uStack00000000000000b0 = *(undefined8 *)(unaff_x21 + 0x18);
  uVar4 = *(undefined1 *)(unaff_x21 + 0x28);
  FUN_101776d20(&stack0x000000d8,*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)(unaff_x21 + 0x10));
  unaff_x20[4] = lStack00000000000000b8;
  unaff_x20[3] = uStack00000000000000b0;
  *(undefined1 *)(unaff_x20 + 5) = uVar4;
  unaff_x20[1] = in_stack_000000e0;
  *unaff_x20 = in_stack_000000d8;
  unaff_x20[2] = in_stack_000000e8;
  lVar6 = 0;
  do {
    plVar7 = (long *)(unaff_x21 + lVar6 * 0x30);
    lVar3 = plVar7[1];
    lVar8 = plVar7[2];
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar3 + 8);
      do {
        if ((puVar9[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*plVar7 != 0) {
      _free(lVar3);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != unaff_x26);
  if (in_stack_00000010 != 0) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  return;
}

