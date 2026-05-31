
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100851f48(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar4;
  undefined1 *unaff_x27;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0xe0) = s__MCP_server_resource_updated__ur_108ac4f0d;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -200;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xe0;
  *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000003a0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar4 = *unaff_x23;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000350);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar4,puVar2,puVar1,&stack0x00000350,&stack0x000003a0);
    }
  }
  FUN_100e80dd4(&stack0x000000f0);
  if (*(long *)(unaff_x29 + -0x80) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x78));
  }
  *(undefined1 *)(unaff_x19 + 0x308) = 1;
  func_0x000100dccb50(*(undefined8 *)(unaff_x20 + 0x230));
  *unaff_x21 = 0x8000000000000001;
  *unaff_x27 = 1;
  FUN_100dac274();
  *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
  return;
}

