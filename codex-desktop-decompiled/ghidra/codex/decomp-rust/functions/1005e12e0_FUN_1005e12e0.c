
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005e12e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *unaff_x25;
  long in_stack_000000a0;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00007b80);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar6 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000006b0);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar6,puVar2,puVar1,&stack0x000006b0,&stack0x00007b80);
    }
  }
  if ((*(byte *)(in_stack_000000a0 + 0x559) & 1) != 0) {
    lVar7 = *(long *)(in_stack_000000a0 + 0x538);
    lVar5 = *(long *)(in_stack_000000a0 + 0x540);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar7 + 0x10);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(long *)(in_stack_000000a0 + 0x530) != 0) {
      _free(lVar7);
    }
  }
  *(undefined2 *)(in_stack_000000a0 + 0x558) = 1;
  FUN_100d590f4();
  *(undefined1 *)(in_stack_000000a0 + 0x5d9) = 0;
  if (*(long *)(in_stack_000000a0 + 0x4d0) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x4d8));
  }
  *unaff_x25 = 1;
  FUN_100ca1cfc();
  uVar4 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
    uVar4 = 7;
  }
  if (0x18 < uVar4 || (1L << (uVar4 & 0x3f) & 0x161ff1cU) == 0) {
    FUN_100def028(in_stack_000000a0 + 0x200);
  }
  if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
    FUN_100def028(in_stack_000000a0);
  }
  *(undefined1 *)(in_stack_000000a0 + 0x480) = 1;
  return 0;
}

