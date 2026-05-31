
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026e148(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  char *unaff_x26;
  byte *unaff_x27;
  long unaff_x29;
  char in_stack_000001b0;
  
  *(char **)(unaff_x29 + -0x80) = s_max_idle_per_host_for___dropping_108ab8dca;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000240);
  if ((*unaff_x26 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x19;
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xa0) = 5;
    *(undefined8 *)(unaff_x29 + -0x98) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xa0);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0xa0,&stack0x00000240);
    }
  }
  FUN_1002c2300(&stack0x000001b8);
  if (in_stack_000001b0 == '\x02') {
    FUN_1002c523c(&stack0x000001a0);
  }
  else {
    FUN_1002b7d4c(&stack0x000001a0);
  }
  if (1 < *unaff_x27) {
    plVar7 = *(long **)(unaff_x27 + 8);
    (**(code **)(*plVar7 + 0x20))(plVar7 + 3,plVar7[1],plVar7[2]);
    _free(plVar7);
  }
  (**(code **)(*(long *)(unaff_x27 + 0x10) + 0x20))
            (unaff_x27 + 0x28,*(undefined8 *)(unaff_x27 + 0x18),*(undefined8 *)(unaff_x27 + 0x20));
  return;
}

