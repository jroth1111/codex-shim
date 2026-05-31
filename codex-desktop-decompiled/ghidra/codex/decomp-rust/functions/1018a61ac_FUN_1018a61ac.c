
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a61ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000200;
  undefined8 in_stack_00000208;
  long in_stack_00000218;
  
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000268;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar4 = *(long *)(unaff_x19 + 0x3d0);
    in_stack_00000148 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000150 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000140 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000140);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000140,unaff_x29 + -0xc0);
    }
  }
  *unaff_x25 = 0x8000000000000000;
  *(undefined1 *)(unaff_x25 + 4) = 3;
  *(undefined2 *)(unaff_x25 + 5) = 0;
  if (in_stack_00000218 != -0x7ffffffffffffffb) {
    func_0x00010194dc28(&stack0x00000218);
  }
  if (in_stack_00000200 != 0) {
    _free(in_stack_00000208);
  }
  if (*unaff_x28 != -0x8000000000000000) {
    FUN_10196b754();
  }
  return;
}

