
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a86f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x25;
  long unaff_x29;
  ulong in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000058;
  long in_stack_000000b0;
  long *in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  in_stack_000000b8 = (long *)FUN_1088bbbb8(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  in_stack_000000b0 = -0x7ffffffffffffffa;
  if (1 < (unaff_x25 + in_stack_00000058) - 0xbU) {
    func_0x00010194dc28(&stack0x000002d0);
  }
  if (1 < (unaff_x25 + unaff_x22) - 0xbU) {
    func_0x00010194dc28(&stack0x00000288);
  }
  FUN_10194df64(unaff_x20 + 0x48);
  if (in_stack_00000180 != unaff_x23) {
    func_0x00010194dc28(&stack0x00000180);
  }
  if (((long)in_stack_00000038 < 0) && ((in_stack_00000038 & 0xfffffffffffffffe) != unaff_x25 - 2U))
  {
    func_0x00010194dc28(&stack0x00000060);
  }
  plVar4 = in_stack_000000b8;
  if (in_stack_00000048 != unaff_x25) {
    in_stack_00000040[0xd] = in_stack_00000118;
    in_stack_00000040[0xc] = in_stack_00000110;
    in_stack_00000040[0xf] = in_stack_00000128;
    in_stack_00000040[0xe] = in_stack_00000120;
    in_stack_00000040[0x11] = in_stack_00000138;
    in_stack_00000040[0x10] = in_stack_00000130;
    in_stack_00000040[0x12] = in_stack_00000140;
    in_stack_00000040[5] = in_stack_000000d8;
    in_stack_00000040[4] = in_stack_000000d0;
    in_stack_00000040[7] = in_stack_000000e8;
    in_stack_00000040[6] = in_stack_000000e0;
    in_stack_00000040[9] = in_stack_000000f8;
    in_stack_00000040[8] = in_stack_000000f0;
    in_stack_00000040[0xb] = in_stack_00000108;
    in_stack_00000040[10] = in_stack_00000100;
    in_stack_00000040[1] = (long)in_stack_000000b8;
    *in_stack_00000040 = in_stack_000000b0;
    in_stack_00000040[3] = in_stack_000000c8;
    in_stack_00000040[2] = in_stack_000000c0;
    return;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b628470 - 1 < 2 ||
       ((bRam000000010b628470 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b628460), cVar5 != '\0')))) &&
      (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b628460)
      , lVar3 = lRam000000010b628460, iVar6 != 0)))) {
    *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000288;
    *(code **)(unaff_x29 + -0xa8) =
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    *(char **)(unaff_x29 + -0x100) = s__failed_to_deserialize_McpServer_108ade0c5;
    *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xb0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar3,&stack0x000001f0);
    lVar3 = lRam000000010b628460;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      in_stack_00000188 = *(undefined8 *)(lRam000000010b628460 + 0x20);
      in_stack_00000190 = *(undefined8 *)(lRam000000010b628460 + 0x28);
      in_stack_00000180 = 1;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000180);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,&stack0x00000180,&stack0x000001f0);
      }
    }
  }
  else {
    lVar3 = lRam000000010b628460;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      in_stack_00000188 = *(undefined8 *)(lRam000000010b628460 + 0x20);
      in_stack_00000190 = *(undefined8 *)(lRam000000010b628460 + 0x28);
      in_stack_00000180 = 1;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000180);
      if (iVar6 != 0) {
        *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000288;
        *(code **)(unaff_x29 + -0xa8) =
             __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
        ;
        *(char **)(unaff_x29 + -0x100) = s__failed_to_deserialize_McpServer_108ade0c5;
        *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xb0;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,&stack0x00000180,&stack0x000001f0);
      }
    }
  }
  *(undefined1 *)(in_stack_00000040 + 0x12) = 1;
  *in_stack_00000040 = unaff_x25 + -1;
  in_stack_00000040[9] = unaff_x25 + -1;
  if (*plVar4 == 1) {
    uVar9 = plVar4[1];
    if ((uVar9 & 3) != 1) goto LAB_1018a8a88;
    puVar8 = (undefined8 *)(uVar9 - 1);
    uVar10 = *puVar8;
    puVar11 = *(undefined8 **)(uVar9 + 7);
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar10);
    }
    if (puVar11[1] != 0) {
      _free(uVar10);
    }
  }
  else {
    if ((*plVar4 != 0) || (plVar4[2] == 0)) goto LAB_1018a8a88;
    puVar8 = (undefined8 *)plVar4[1];
  }
  _free(puVar8);
LAB_1018a8a88:
  _free(plVar4);
  return;
}

