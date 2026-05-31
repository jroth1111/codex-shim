
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026d8f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *unaff_x20;
  long lVar4;
  long *plVar5;
  char *unaff_x26;
  byte *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  
  *(char **)(unaff_x29 + -0x70) = s_put__found_waiter_for_108ab8d92;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xa0;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b1f3630;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000240);
  if ((*unaff_x26 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *unaff_x20;
    in_stack_000001a8 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_000001b0 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_000001a0 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001a0);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x000001a0,&stack0x00000240);
    }
  }
  if (1 < *unaff_x27) {
    plVar5 = *(long **)(unaff_x27 + 8);
    (**(code **)(*plVar5 + 0x20))(plVar5 + 3,plVar5[1],plVar5[2]);
    _free(plVar5);
  }
  (**(code **)(*(long *)(unaff_x27 + 0x10) + 0x20))
            (unaff_x27 + 0x28,*(undefined8 *)(unaff_x27 + 0x18),*(undefined8 *)(unaff_x27 + 0x20));
  return;
}

