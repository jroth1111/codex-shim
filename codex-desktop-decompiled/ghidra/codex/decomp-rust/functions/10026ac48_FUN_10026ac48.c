
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026ac48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  long *unaff_x23;
  long lVar5;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000060;
  undefined *puStack0000000000000068;
  undefined8 uStack00000000000000a8;
  undefined1 *puStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  
  *(char **)(unaff_x29 + -0x78) = s__HTTP_2_connecting_already_in_pr_108ab8c75;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
  lStack0000000000000060 = unaff_x29 + -0x78;
  puStack0000000000000068 = &UNK_10b1f3630;
  puStack00000000000000b0 = (undefined1 *)&stack0x00000060;
  uStack00000000000000a8 = 1;
  uStack00000000000000b8 = 1;
  uStack00000000000000c0 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000a8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *unaff_x23;
    in_stack_00000028 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000020 = 5;
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
                (lVar5,puVar2,puVar1,&stack0x00000020,&stack0x000000a8);
    }
  }
  *unaff_x22 = 3;
  if ((((unaff_x20 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = FUN_107c05e34(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*unaff_x19);
  return;
}

