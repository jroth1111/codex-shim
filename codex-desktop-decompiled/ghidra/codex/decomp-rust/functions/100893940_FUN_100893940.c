
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100893940(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0xf8) = s_could_not_find_callback_for_108ac9f0e;
  *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00000440;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000004d0);
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
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000003d8);
    if (iVar3 != 0) {
      *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000498;
      *(undefined **)(unaff_x29 + -0xd8) = &DAT_1061c2098;
      (**(code **)(puVar1 + 0x20))(puVar2);
    }
  }
  if ((*(byte *)(unaff_x19 + 0x1a9) & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xc0) != unaff_x25) {
      FUN_100de6690();
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1a9) = 0;
  if ((*(long *)(unaff_x19 + 0x90) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x90) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *(undefined1 *)(unaff_x19 + 0x1a8) = 1;
  return unaff_x23 == unaff_x24;
}

