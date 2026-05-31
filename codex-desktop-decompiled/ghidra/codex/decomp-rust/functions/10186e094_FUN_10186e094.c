
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10186e094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x40) = s_5failed_to_serialize_app_server_a_108add1c5;
  *(undefined1 **)(unaff_x29 + -0x38) = &stack0x00000008;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x40;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b25d1e8;
  lStack0000000000000078 = unaff_x29 + -0x50;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000070);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *(long *)(unaff_x20 + 800);
    in_stack_00000028 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000020 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000020);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar5,puVar2,puVar1,&stack0x00000020,&stack0x00000070);
    }
  }
  if (*in_stack_00000000 == 1) {
    uVar7 = in_stack_00000000[1];
    if ((uVar7 & 3) != 1) goto LAB_10186e2f4;
    puVar6 = (undefined8 *)(uVar7 - 1);
    uVar8 = *puVar6;
    puVar9 = *(undefined8 **)(uVar7 + 7);
    pcVar4 = (code *)*puVar9;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar8);
    }
    if (puVar9[1] != 0) {
      _free(uVar8);
    }
  }
  else {
    if ((*in_stack_00000000 != 0) || (in_stack_00000000[2] == 0)) goto LAB_10186e2f4;
    puVar6 = (undefined8 *)in_stack_00000000[1];
  }
  _free(puVar6);
LAB_10186e2f4:
  _free(in_stack_00000000);
  *unaff_x19 = 0x8000000000000000;
  return;
}

