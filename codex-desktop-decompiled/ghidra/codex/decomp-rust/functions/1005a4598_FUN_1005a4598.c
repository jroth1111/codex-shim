
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005a4598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined1 *puStack0000000000000000;
  undefined *puStack0000000000000008;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  char *pcStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  char *in_stack_000000d0;
  long in_stack_000000d8;
  
  puStack0000000000000050 = &stack0x00000058;
  pcStack0000000000000048 = s__No_pending_approval_found_for_c_108ac17f5;
  puStack0000000000000000 = (undefined1 *)&stack0x00000048;
  puStack0000000000000008 = &UNK_10b208fd0;
  uStack0000000000000028 = 1;
  uStack0000000000000038 = 1;
  uStack0000000000000040 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000028);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar7 = *unaff_x20;
    in_stack_00000070 = *(undefined8 *)(lVar7 + 0x20);
    in_stack_00000078 = *(undefined8 *)(lVar7 + 0x28);
    in_stack_00000068 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000068);
    if (iVar3 != 0) {
      in_stack_000000a0 = *(long *)(lVar7 + 0x60);
      in_stack_000000a8 = *(undefined8 *)(lVar7 + 0x68);
      in_stack_00000088 = *(long *)(lVar7 + 0x50);
      in_stack_00000090 = *(undefined8 *)(lVar7 + 0x58);
      in_stack_00000080 = 1;
      if (in_stack_00000088 == 0) {
        in_stack_00000080 = 2;
      }
      uStack00000000000000c8 = *(undefined4 *)(lVar7 + 8);
      uStack00000000000000cc = *(undefined4 *)(lVar7 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000028;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      in_stack_00000098 = 1;
      if (in_stack_000000a0 == 0) {
        in_stack_00000098 = 2;
      }
      in_stack_000000b8 = in_stack_00000070;
      in_stack_000000b0 = in_stack_00000068;
      in_stack_000000c0 = in_stack_00000078;
      in_stack_000000d8 = unaff_x29 + -0x50;
      in_stack_000000d0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000080);
    }
  }
  if ((*(byte *)(unaff_x19 + 0x71) & 1) == 0) goto LAB_1005a4aac;
  uVar4 = *(ulong *)(unaff_x19 + 0x48);
  uVar5 = uVar4 ^ 0x8000000000000000;
  if (-1 < (long)uVar4) {
    uVar5 = 3;
  }
  if (uVar5 == 3) {
    if (uVar4 == 0) goto LAB_1005a4aac;
    lVar7 = *(long *)(unaff_x19 + 0x50);
  }
  else {
    if (uVar5 != 1) goto LAB_1005a4aac;
    lVar7 = *(long *)(unaff_x19 + 0x58);
    lVar6 = *(long *)(unaff_x19 + 0x60);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_1005a4aac;
  }
  _free(lVar7);
LAB_1005a4aac:
  *(undefined1 *)(unaff_x19 + 0x71) = 0;
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
  return 0;
}

