
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100924470(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long unaff_x23;
  undefined8 *puVar7;
  ulong in_stack_000055e0;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00004bc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00005630);
    if (iVar4 != 0) {
      *(undefined1 *)(unaff_x21 + 8) = 1;
      uVar6 = *(undefined8 *)(unaff_x21 + 0xf0);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x21 + 0xf8);
      *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00002540);
    }
  }
  if ((in_stack_000055e0 & 3) == 1) {
    uVar6 = *(undefined8 *)(in_stack_000055e0 - 1);
    puVar7 = *(undefined8 **)(in_stack_000055e0 + 7);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar6);
    }
    if (puVar7[1] != 0) {
      _free(uVar6);
    }
    _free((undefined8 *)(in_stack_000055e0 - 1));
    bVar3 = *(byte *)(unaff_x19 + 0x6a1);
  }
  else {
    bVar3 = *(byte *)(unaff_x19 + 0x6a1);
  }
  if (((bVar3 & 1) != 0) && (*(long *)(unaff_x19 + 0xb8) != -0x7ffffffffffffffd)) {
    FUN_100e0609c();
  }
  *(undefined1 *)(unaff_x19 + 0x6a1) = 0;
  *(undefined1 *)(unaff_x19 + 0x6a0) = 1;
  return unaff_x23 == 3;
}

