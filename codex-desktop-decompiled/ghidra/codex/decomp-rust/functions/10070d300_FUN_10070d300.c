
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070d300(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack00000000000000c8;
  undefined *puStack00000000000000d0;
  long lStack00000000000000d8;
  undefined *puStack00000000000000e0;
  char in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 *in_stack_00000420;
  
  *(char **)(unaff_x29 + -0x98) = s_sse_stream_error__108ad3c45;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x70;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -200;
  lStack00000000000000c8 = unaff_x29 + -0x98;
  puStack00000000000000d0 = &UNK_10b208fd0;
  lStack00000000000000d8 = unaff_x29 + -0xb8;
  puStack00000000000000e0 = &UNK_10b21e528;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000004e0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar7 = *unaff_x22;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000003f0);
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar7,puVar2,puVar1,&stack0x000003f0,&stack0x000004e0);
    }
  }
  uVar8 = (ulong)*(ushort *)(unaff_x20 + 0x14);
  *(undefined2 *)(unaff_x20 + 0x14) = 0x1f;
  if (uVar8 != 0x1f) {
    uVar4 = *(ushort *)((long)unaff_x20 + 0xa6);
    uVar3 = *(uint *)((long)unaff_x20 + 0xa2);
    uVar7 = unaff_x20[0x15];
    uVar11 = unaff_x20[0x17];
    uVar9 = unaff_x20[0x16];
    uVar14 = unaff_x20[0x19];
    uVar13 = unaff_x20[0x18];
    uVar12 = unaff_x20[0x1b];
    uVar10 = unaff_x20[0x1a];
    if (in_stack_00000410 == '\0') {
      if ((code *)*in_stack_00000420 != (code *)0x0) {
        (*(code *)*in_stack_00000420)(in_stack_00000418);
      }
      if (in_stack_00000420[1] != 0) {
        _free(in_stack_00000418);
      }
    }
    FUN_100df2508();
    *unaff_x20 = 3;
    unaff_x20[1] = (ulong)uVar3 << 0x10 | (ulong)uVar4 << 0x30 | uVar8;
    unaff_x20[2] = uVar7;
    unaff_x20[4] = uVar11;
    unaff_x20[3] = uVar9;
    unaff_x20[6] = uVar14;
    unaff_x20[5] = uVar13;
    unaff_x20[8] = uVar12;
    unaff_x20[7] = uVar10;
    unaff_x20[9] = 0;
    unaff_x20[0xb] = in_stack_00000028;
    unaff_x20[10] = in_stack_00000020;
    unaff_x20[0xd] = in_stack_00000038;
    unaff_x20[0xc] = in_stack_00000030;
    unaff_x20[0xe] = uVar8;
    FUN_10070cd54();
    return;
  }
  FUN_107c05cac(&UNK_108cad561,0x1a,&UNK_10b221ef8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10070dff0);
  (*pcVar5)();
}

