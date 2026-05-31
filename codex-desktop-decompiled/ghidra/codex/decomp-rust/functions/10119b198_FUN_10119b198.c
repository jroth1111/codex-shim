
/* WARNING: Removing unreachable block (ram,0x00010119b5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10119b198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x20;
  long *unaff_x21;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000030;
  byte *in_stack_000000b8;
  undefined8 *in_stack_000000c8;
  long in_stack_00002680;
  undefined8 in_stack_00002688;
  long in_stack_00002698;
  
  *(char **)(unaff_x29 + -0xa0) = s__failed_to_refresh_app_list_afte_108aca445;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x90;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xd0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x21;
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x80) = 2;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x80);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x80,unaff_x29 + -0xd0);
    }
  }
  if (in_stack_00002698 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00002698);
  }
  if (in_stack_00002680 != 0) {
    _free(in_stack_00002688);
  }
  *(undefined1 *)(unaff_x28 + 0x36) = 0;
  if ((*(byte *)(unaff_x28 + 0x32) & 1) != 0) {
    lVar6 = **(long **)(unaff_x20 + 0x7120);
    **(long **)(unaff_x20 + 0x7120) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x20 + 0x7120);
    }
  }
  *(undefined1 *)(unaff_x28 + 0x32) = 0;
  if ((*(byte *)(unaff_x28 + 0x33) & 1) != 0) {
    FUN_100de93d0(unaff_x20 + 0x4bd8);
  }
  *(undefined1 *)(unaff_x28 + 0x33) = 0;
  if ((*(byte *)(unaff_x28 + 0x34) & 1) != 0) {
    if ((*in_stack_00000030 != -0x8000000000000000) && (*in_stack_00000030 != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x4ba0));
    }
    if ((*(long *)(unaff_x20 + 0x4bb0) != -0x8000000000000000) &&
       (*(long *)(unaff_x20 + 0x4bb0) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x4bb8));
    }
  }
  *(undefined2 *)(unaff_x28 + 0x34) = 0;
  *(undefined2 *)(unaff_x28 + 0x37) = 0;
  *(undefined1 *)(unaff_x28 + 0x39) = 0;
  lVar6 = *(long *)*in_stack_000000c8;
  *(long *)*in_stack_000000c8 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
  }
  *(undefined1 *)(unaff_x28 + 0x30) = 1;
  *in_stack_000000b8 = *in_stack_000000b8 | 2;
  FUN_1060fb5d4(&stack0x00002680);
  if (*(long *)(in_stack_00000010 + 0x25e8) != 0) {
    (**(code **)(*(long *)(in_stack_00000010 + 0x25e8) + 0x18))
              (*(undefined8 *)(in_stack_00000010 + 0x25f0));
  }
  FUN_100d23ea0(in_stack_00000010 + 0x2608);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (in_stack_00000010 + 0x25a8);
  lVar6 = **(long **)(in_stack_00000010 + 0x25a8);
  **(long **)(in_stack_00000010 + 0x25a8) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(in_stack_00000010 + 0x25a8);
  }
  *(undefined1 *)(in_stack_00000008 + 0x10) = 1;
  return 0;
}

