
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10068e634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  byte in_stack_000003c0;
  ulong in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  
  puStack00000000000000e8 = &stack0x00000250;
  uStack00000000000000e0 = 1;
  uStack00000000000000f0 = 1;
  uStack00000000000000f8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000e0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *unaff_x19;
    in_stack_00000028 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000020 = 4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000020);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar5,puVar2,puVar1,&stack0x00000020,&stack0x000000e0);
    }
  }
  if ((1 < in_stack_000003c0 - 2) && (in_stack_000003c0 != 0)) {
    if (in_stack_000003c0 == 1) {
      (**(code **)(in_stack_000003c8 + 0x20))(&stack0x000003e0,in_stack_000003d0,in_stack_000003d8);
    }
    else if ((in_stack_000003c8 & 3) == 1) {
      uVar6 = *(undefined8 *)(in_stack_000003c8 - 1);
      puVar7 = *(undefined8 **)(in_stack_000003c8 + 7);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar7[1] != 0) {
        _free(uVar6);
      }
      _free((undefined8 *)(in_stack_000003c8 - 1));
    }
  }
  return 0;
}

