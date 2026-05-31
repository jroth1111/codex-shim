
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026af68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar10;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000060;
  undefined *puStack0000000000000068;
  undefined *puStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  *(char **)(unaff_x29 + -0x60) = s_reuse_idle_connection_for_108ab8ca2;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x50;
  lStack0000000000000060 = unaff_x29 + -0x60;
  puStack0000000000000068 = &UNK_10b1f3630;
  puStack0000000000000078 = (undefined1 *)&stack0x00000060;
  puStack0000000000000070 = (undefined *)0x1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000070);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar10 = *unaff_x22;
    in_stack_00000028 = *(undefined8 *)(lVar10 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar10 + 0x28);
    in_stack_00000020 = 4;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000020);
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar10,puVar5,puVar4,&stack0x00000020,&stack0x00000070);
    }
  }
  lVar10 = *unaff_x21;
  if (*(char *)(unaff_x19 + 2) == '\x02' || lVar10 == 0) {
    lVar10 = 0;
LAB_10026b1dc:
    FUN_1002c5710(&stack0x00000070,in_stack_00000000);
    *(undefined1 *)(unaff_x20 + 0xe) = 1;
    uVar12 = unaff_x19[1];
    uVar11 = *unaff_x19;
    uVar9 = unaff_x19[2];
    uVar14 = unaff_x19[5];
    uVar13 = unaff_x19[4];
    unaff_x20[9] = unaff_x19[3];
    unaff_x20[8] = uVar9;
    unaff_x20[0xb] = uVar14;
    unaff_x20[10] = uVar13;
    uVar9 = unaff_x19[6];
    unaff_x20[1] = puStack0000000000000078;
    *unaff_x20 = puStack0000000000000070;
    unaff_x20[3] = uStack0000000000000088;
    unaff_x20[2] = uStack0000000000000080;
    unaff_x20[5] = in_stack_00000098;
    unaff_x20[4] = in_stack_00000090;
    unaff_x20[7] = uVar12;
    unaff_x20[6] = uVar11;
    unaff_x20[0xc] = uVar9;
    unaff_x20[0xd] = lVar10;
    return;
  }
  do {
    lVar8 = *(long *)(lVar10 + 8);
    while (lVar8 != -1) {
      if (lVar8 < 0) {
        puStack0000000000000070 = &UNK_10b1f5e10;
        puStack0000000000000078 = &DAT_1002b2088;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__108b1bd74,&stack0x00000070,&UNK_10b1f5e20);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10026b264);
        (*pcVar6)();
      }
      lVar1 = lVar8 + 1;
      lVar2 = *(long *)(lVar10 + 8);
      bVar3 = lVar2 == lVar8;
      lVar8 = lVar2;
      if (bVar3) {
        *(long *)(lVar10 + 8) = lVar1;
        goto LAB_10026b1dc;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}

