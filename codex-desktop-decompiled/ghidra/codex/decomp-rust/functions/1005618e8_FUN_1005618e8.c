
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005618e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  long *unaff_x21;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0x90) = s__Failed_to_deserialize_overridde_108ac11d8;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar5 = *unaff_x21;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x70) = 1;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x70);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar5,puVar2,puVar1,unaff_x29 + -0x70,unaff_x29 + -0xc0);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -200);
  FUN_100e05b5c(&stack0x000000d8);
  *(undefined1 *)(unaff_x25 + 0x1a9) = 0;
  FUN_100e76384(unaff_x19 + 0xf8);
  *unaff_x24 = 2;
  unaff_x24[1] = uVar6;
  _memcpy(unaff_x24 + 2,&stack0x00002e08,0x1a20);
  *(undefined1 *)(unaff_x25 + 0x1a8) = 1;
  return;
}

