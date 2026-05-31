
void FUN_1008f0e18(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  ulong in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined8 *in_stack_00000050;
  code *in_stack_00000058;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s__failed_to_clear_memory_rows_in_s_108acb1c9,&stack0x00000018);
  puVar8 = in_stack_00000050;
  puVar7 = in_stack_00000048;
  puVar9 = in_stack_00000040;
  (**(code **)*in_stack_00000030)();
  if (puVar9 != (undefined8 *)0x8000000000000000) goto LAB_1008f0fdc;
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x198);
  uVar3 = *(undefined8 *)(lVar2 + 0x1c18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar2 + 0x1c10);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  *(undefined1 *)(unaff_x19 + 0x198) = 0;
  auVar10 = FUN_100b3b498(unaff_x19 + 0x28);
  if ((auVar10._0_8_ & 1) != 0) {
    *unaff_x25 = 4;
LAB_1008f1010:
    *unaff_x21 = unaff_x26 + 1;
    uVar1 = 3;
    goto LAB_1008f101c;
  }
  FUN_100cbdcc0(unaff_x19 + 0x28);
  if (auVar10._8_8_ == 0) {
LAB_1008f0f04:
    lVar2 = **(long **)(unaff_x19 + 0x18);
    **(long **)(unaff_x19 + 0x18) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E();
    }
    unaff_x27 = -0x7ffffffffffffff1;
    puVar9 = (undefined8 *)0x8000000000000000;
    *unaff_x25 = 1;
    puVar8 = (undefined8 *)0x2c;
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x198);
    in_stack_00000030 = *(undefined8 **)(lVar2 + 0x1c10);
    in_stack_00000038 = *(undefined8 *)(lVar2 + 0x1c18);
    in_stack_00000040 = &stack0x00000030;
    in_stack_00000048 =
         &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
    in_stack_00000050 = &stack0x00000010;
    in_stack_00000058 =
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    in_stack_00000010 = auVar10._8_8_;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000018,s__failed_to_clear_memory_director_108acb199,&stack0x00000040);
    puVar8 = in_stack_00000028;
    puVar7 = in_stack_00000020;
    puVar9 = in_stack_00000018;
    if ((in_stack_00000010 & 3) == 1) {
      puVar6 = (undefined8 *)(in_stack_00000010 - 1);
      uVar3 = *puVar6;
      puVar4 = *(undefined8 **)(in_stack_00000010 + 7);
      pcVar5 = (code *)*puVar4;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar3);
      }
      if (puVar4[1] != 0) {
        _free(uVar3);
      }
      _free(puVar6);
      if (puVar9 != (undefined8 *)0x8000000000000000) goto LAB_1008f0fdc;
      goto LAB_1008f0f04;
    }
    if (in_stack_00000018 == (undefined8 *)0x8000000000000000) goto LAB_1008f0f04;
LAB_1008f0fdc:
    lVar2 = **(long **)(unaff_x19 + 0x18);
    **(long **)(unaff_x19 + 0x18) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E();
    }
    *unaff_x25 = 1;
    if (puVar9 == (undefined8 *)0x8000000000000001) goto LAB_1008f1010;
  }
  *unaff_x21 = unaff_x27;
  unaff_x21[1] = (long)puVar9;
  unaff_x21[2] = (long)puVar7;
  unaff_x21[3] = (long)puVar8;
  unaff_x21[4] = unaff_x26 + -0x6b;
  uVar1 = 1;
  unaff_x21[0xd] = -0x7f5b;
LAB_1008f101c:
  *(undefined1 *)(unaff_x19 + 0x600) = uVar1;
  return;
}

