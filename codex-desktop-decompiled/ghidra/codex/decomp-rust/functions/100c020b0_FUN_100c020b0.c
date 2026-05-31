
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c020b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *in_stack_00000020;
  undefined *in_stack_00000028;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  char *in_stack_000001d0;
  undefined8 *in_stack_000001d8;
  long *in_stack_000003e0;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000420);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar7 = *unaff_x20;
    in_stack_000000d8 = *(undefined8 *)(lVar7 + 0x20);
    in_stack_000000e0 = *(undefined8 *)(lVar7 + 0x28);
    in_stack_000000d0 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000000d0);
    if (iVar3 != 0) {
      in_stack_000001a0 = *(long *)(lVar7 + 0x60);
      in_stack_000001a8 = *(undefined8 *)(lVar7 + 0x68);
      in_stack_00000188 = *(long *)(lVar7 + 0x50);
      in_stack_00000190 = *(undefined8 *)(lVar7 + 0x58);
      in_stack_00000180 = 1;
      if (in_stack_00000188 == 0) {
        in_stack_00000180 = 2;
      }
      uStack00000000000001c8 = *(undefined4 *)(lVar7 + 8);
      uStack00000000000001cc = *(undefined4 *)(lVar7 + 0xc);
      in_stack_00000020 = &stack0x000003b0;
      in_stack_00000028 = &DAT_1061c2098;
      in_stack_00000198 = 1;
      if (in_stack_000001a0 == 0) {
        in_stack_00000198 = 2;
      }
      *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xb0);
      in_stack_000001c0 = in_stack_000000e0;
      in_stack_000001d8 = &stack0x00000020;
      in_stack_000001d0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000180);
    }
  }
  if (*in_stack_000003e0 == 1) {
    uVar6 = in_stack_000003e0[1];
    if ((uVar6 & 3) != 1) goto LAB_100c02704;
    puVar5 = (undefined8 *)(uVar6 - 1);
    uVar8 = *puVar5;
    puVar9 = *(undefined8 **)(uVar6 + 7);
    pcVar4 = (code *)*puVar9;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar8);
    }
    if (puVar9[1] != 0) {
      _free(uVar8);
    }
  }
  else {
    if ((*in_stack_000003e0 != 0) || (in_stack_000003e0[2] == 0)) goto LAB_100c02704;
    puVar5 = (undefined8 *)in_stack_000003e0[1];
  }
  _free(puVar5);
LAB_100c02704:
  _free(in_stack_000003e0);
  *(undefined1 *)(unaff_x19 + 0x440) = 1;
  return 1;
}

