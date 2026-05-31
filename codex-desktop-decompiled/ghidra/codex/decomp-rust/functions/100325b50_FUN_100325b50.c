
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100325b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x29;
  undefined8 uVar7;
  undefined1 *puStack0000000000000078;
  undefined *puStack0000000000000080;
  undefined8 uStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  char *pcStack00000000000000c8;
  long lStack00000000000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  lStack00000000000000d0 = unaff_x29 + -0x60;
  pcStack00000000000000c8 = s_stream_completed__108abaf65;
  puStack0000000000000078 = (undefined1 *)&stack0x000000c8;
  puStack0000000000000080 = &UNK_10b1f8a98;
  puStack00000000000000a8 = (undefined1 *)&stack0x00000078;
  uStack00000000000000a0 = 1;
  uStack00000000000000b0 = 1;
  uStack00000000000000b8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000a0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *(long *)(unaff_x20 + 0x750);
    in_stack_000000e0 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_000000e8 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_000000d8 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000000d8);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,&stack0x000000d8,&stack0x000000a0);
    }
  }
  if (*(ulong *)(unaff_x29 + -0xc0) == 2) {
    *unaff_x19 = 2;
  }
  else if ((*(ulong *)(unaff_x29 + -0xc0) & 1) == 0) {
    *unaff_x19 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
    lVar6 = *(long *)(unaff_x29 + -0xb8);
    uVar3 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
    if (lVar6 == 0) {
      *unaff_x19 = 1;
      unaff_x19[1] = 0;
      unaff_x19[2] = uVar7;
      unaff_x19[3] = uVar3;
    }
    else {
      *unaff_x19 = 1;
      unaff_x19[2] = uVar7;
      unaff_x19[1] = lVar6;
      unaff_x19[3] = uVar3;
      unaff_x19[4] = uVar4;
    }
  }
  return;
}

