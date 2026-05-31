
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070b664(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *unaff_x19;
  long lVar4;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000c20;
  long in_stack_00000f30;
  
  *(char **)(unaff_x29 + -0x68) = s_Error_reading_from_stream__108ac5064;
  *(undefined1 **)(unaff_x29 + -0x60) = &stack0x00000908;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000928);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar4 = *unaff_x19;
    in_stack_00000018 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000020 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000010 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000010);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000010,&stack0x00000928);
    }
  }
  _memcpy(&stack0x00000f30,&stack0x00000c20,0x310);
  if (in_stack_00000f30 == 0x15) {
    FUN_100d9eca0(&stack0x00000f30);
    in_stack_00000c20 = 0x15;
  }
  else {
    _memcpy(&stack0x00000600);
  }
  *in_stack_00000000 = in_stack_00000c20;
  _memcpy(in_stack_00000000 + 1,&stack0x00000600,0x308);
  *(undefined1 *)(in_stack_00000008 + 0x10) = 1;
  return;
}

