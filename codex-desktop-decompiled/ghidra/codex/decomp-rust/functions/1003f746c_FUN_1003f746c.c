
/* WARNING: Removing unreachable block (ram,0x0001003f67bc) */
/* WARNING: Removing unreachable block (ram,0x0001003f7384) */
/* WARNING: Removing unreachable block (ram,0x0001003f738c) */
/* WARNING: Removing unreachable block (ram,0x0001003f7398) */
/* WARNING: Removing unreachable block (ram,0x0001003f73a0) */
/* WARNING: Removing unreachable block (ram,0x0001003f73a8) */
/* WARNING: Removing unreachable block (ram,0x0001003f73b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f746c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  uint in_stack_00000040;
  undefined8 *in_stack_00000048;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000400);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar5 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000578);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar5,puVar2,puVar1,&stack0x00000578,&stack0x00000400);
    }
  }
  _memcpy(&stack0x00000408,&stack0x000002b0,0x120);
  FUN_100c1fc90(unaff_x27 + 0x128,&stack0x00000400);
  func_0x0001056f7fcc(unaff_x27 + 0x128,0,&stack0x00000220,unaff_x27 + 0x20);
  __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
            (unaff_x27 + 0x20,&stack0x00000400,unaff_w19 != 1000000000);
  if ((((unaff_x23 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = FUN_107c05e34(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(unaff_x26 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*unaff_x22);
  if ((((in_stack_00000040 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = FUN_107c05e34(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(unaff_x27 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*in_stack_00000048);
  return;
}

