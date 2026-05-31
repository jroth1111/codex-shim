
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10173e010(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 in_x9;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long lStack0000000000000060;
  undefined *puStack0000000000000068;
  long lStack0000000000000070;
  undefined *puStack0000000000000078;
  long lStack0000000000000080;
  undefined *puStack0000000000000088;
  undefined1 *puStack0000000000000090;
  undefined *puStack0000000000000098;
  undefined1 *puStack00000000000000a0;
  undefined *puStack00000000000000a8;
  undefined1 *puStack00000000000000b0;
  undefined *puStack00000000000000b8;
  undefined1 *puStack00000000000000c0;
  undefined *puStack00000000000000c8;
  long lStack00000000000000d0;
  long lStack00000000000000e0;
  
  *(char **)(unaff_x29 + -0x50) = s_dropping___analytics_event__miss_108adc76a;
  *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0xc0) = unaff_x19 + 0x10;
  *(long *)(unaff_x29 + -0xb8) = unaff_x19 + 0x20;
  lStack00000000000000d0 = unaff_x19 + 0x30;
  lStack00000000000000e0 = unaff_x19 + 0x40;
  lStack0000000000000060 = unaff_x29 + -0x50;
  puStack0000000000000068 = &UNK_10b256738;
  lStack0000000000000070 = unaff_x29 + -0xc0;
  puStack0000000000000078 = &UNK_10b257158;
  lStack0000000000000080 = unaff_x29 + -0xb8;
  puStack0000000000000088 = &UNK_10b257178;
  puStack0000000000000090 = (undefined1 *)&stack0x000000d0;
  puStack0000000000000098 = &UNK_10b257178;
  puStack00000000000000a0 = (undefined1 *)&stack0x000000e0;
  puStack00000000000000a8 = &UNK_10b257178;
  puStack00000000000000b0 = &stack0x00000008;
  puStack00000000000000b8 = &UNK_10b256fa8;
  puStack00000000000000c0 = &stack0x00000018;
  puStack00000000000000c8 = &UNK_10b257198;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(long **)(unaff_x29 + -0xa8) = &stack0x00000060;
  *(undefined8 *)(unaff_x29 + -0xa0) = 7;
  *(undefined8 *)(unaff_x29 + -0x98) = in_x9;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,unaff_x29 + -0xb0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *(long *)(unaff_x20 + 0xd20);
    in_stack_00000048 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000050 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000040 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000040);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000040,unaff_x29 + -0xb0);
    }
  }
  return;
}

