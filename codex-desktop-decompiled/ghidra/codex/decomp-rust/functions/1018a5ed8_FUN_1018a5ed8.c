
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a5ed8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long lVar6;
  undefined8 *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  char *pcStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  
  puStack00000000000000e8 = &stack0x00000140;
  pcStack00000000000000e0 = s_request_failed__108ac9ce2;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000200);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar6 = *(long *)(unaff_x19 + 1000);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar3;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xc0);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0xc0,&stack0x00000200);
    }
  }
  *unaff_x25 = 0x8000000000000000;
  *(undefined1 *)(unaff_x25 + 4) = 3;
  *(undefined2 *)(unaff_x25 + 5) = 0;
  if (*unaff_x28 != -0x8000000000000000) {
    FUN_10196b754();
  }
  return;
}

