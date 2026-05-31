
/* WARNING: Removing unreachable block (ram,0x0001007f9f90) */
/* WARNING: Removing unreachable block (ram,0x0001007f9e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8854(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  char *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined *unaff_x22;
  char in_wzr;
  undefined4 *in_stack_00000018;
  undefined4 in_stack_00000878;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000a40);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar3 = *unaff_x21;
    unaff_x22 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x22 = &UNK_10b3c24c8;
    }
    puVar1 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
    }
    iVar2 = (**(code **)(unaff_x22 + 0x18))(puVar1,&stack0x000008c0);
    if (iVar2 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar3,puVar1,unaff_x22,&stack0x000008c0,&stack0x00000a40);
    }
  }
  FUN_100e3fdac(&stack0x000003f0);
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *(undefined8 *)(in_stack_00000018 + 10) = 0;
  *(undefined8 *)(in_stack_00000018 + 8) = 0;
  *(undefined1 *)(in_stack_00000018 + 2) = 1;
  *(undefined1 *)((long)in_stack_00000018 + 9) = 1;
  *(short *)((long)in_stack_00000018 + 10) = (short)unaff_x22;
  in_stack_00000018[3] = in_stack_00000878;
  *(undefined **)(in_stack_00000018 + 4) = &UNK_10b209220;
  *(undefined8 *)(in_stack_00000018 + 6) = 1;
  *in_stack_00000018 = 4;
  return;
}

