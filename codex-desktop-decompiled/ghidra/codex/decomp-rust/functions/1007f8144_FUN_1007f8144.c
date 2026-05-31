
/* WARNING: Removing unreachable block (ram,0x0001007f9678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8144(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  char *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  char in_wzr;
  undefined4 *in_stack_00000018;
  undefined1 *puStack0000000000000020;
  undefined *puStack0000000000000028;
  char *pcStack00000000000001a0;
  undefined1 *puStack00000000000001a8;
  
  puStack00000000000001a8 = &stack0x00000ba0;
  pcStack00000000000001a0 = s_id_____>_max_stream_id______igno_108ac8440;
  puStack0000000000000020 = (undefined1 *)&stack0x000001a0;
  puStack0000000000000028 = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000006f0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar4 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000003f0);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar4,puVar2,puVar1,&stack0x000003f0,&stack0x000006f0);
    }
  }
  FUN_100e3fdac(&stack0x00000a40);
  if (*unaff_x19 == '\x01') {
    *unaff_x19 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *in_stack_00000018 = 2;
  return;
}

