
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b2c98(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x24;
  long unaff_x29;
  long in_stack_00000210;
  long *in_stack_00000218;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000008a8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000660);
    if (iVar5 != 0) {
      *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000008a8;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(undefined8 *)(unaff_x24 + 600) = *(undefined8 *)(unaff_x24 + 0x438);
      *(undefined8 *)(unaff_x24 + 0x250) = *(undefined8 *)(unaff_x24 + 0x430);
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000450);
    }
  }
  if ((in_stack_00000210 != 0) && (in_stack_00000218 != (long *)0x0)) {
    uVar1 = in_stack_00000218[6];
    do {
      uVar6 = uVar1;
      if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_1009b3510;
      uVar1 = in_stack_00000218[6];
    } while (uVar1 != uVar6);
    in_stack_00000218[6] = uVar6 | 2;
LAB_1009b3510:
    if ((uVar6 & 5) == 1) {
      (**(code **)(in_stack_00000218[4] + 0x10))(in_stack_00000218[5]);
    }
    lVar4 = *in_stack_00000218;
    *in_stack_00000218 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(&stack0x00000218);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x8cc) = 0;
  if ((*(byte *)(unaff_x19 + 0x8c9) & 1) != 0) {
    func_0x000100e4d0ac(&stack0x00000018);
  }
  *(undefined1 *)(unaff_x19 + 0x8c9) = 0;
  *(undefined1 *)(unaff_x19 + 0x8c8) = 1;
  return 0;
}

