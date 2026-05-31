
/* WARNING: Removing unreachable block (ram,0x00010187b59c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187ba18(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x23;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  ulong in_stack_00000030;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined *in_stack_00000088;
  char *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  char *in_stack_00000100;
  long in_stack_00000108;
  
  plVar8 = (long *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  if (unaff_x28 != -0x8000000000000000) {
    if (unaff_x23 != 0) {
      puVar10 = (undefined8 *)(unaff_x21 + 0x10);
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 4;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (unaff_x28 != 0) {
      _free();
    }
  }
  FUN_10194df64(unaff_x26 + 0x48);
  if (in_stack_000000b0 != unaff_x27) {
    func_0x00010194dc28(&stack0x000000b0);
  }
  if (((long)in_stack_00000030 < 0) && ((in_stack_00000030 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    func_0x00010194dc28();
  }
  in_stack_00000060 = plVar8;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b627480 - 1 < 2 ||
       ((bRam000000010b627480 != 0 &&
        (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b627470), cVar6 != '\0')))) &&
      (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b627470)
      , lVar5 = lRam000000010b627470, iVar7 != 0)))) {
    in_stack_000000c8 = lRam000000010b627470 + 0x30;
    *(long ***)(unaff_x29 + -0xe0) = &stack0x00000060;
    *(code **)(unaff_x29 + -0xd8) =
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    *(char **)(unaff_x29 + -0xc0) = s__failed_to_deserialize_DynamicTo_108add525;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xe0;
    in_stack_000000a0 = (undefined8 *)(unaff_x29 + -0xc0);
    in_stack_000000a8 = (code *)&UNK_10b25d1e8;
    in_stack_000000b8 = &stack0x000000a0;
    in_stack_000000b0 = 1;
    in_stack_000000c0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar5,&stack0x000000b0);
    lVar5 = lRam000000010b627470;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      uVar12 = *(undefined8 *)(lRam000000010b627470 + 0x20);
      uVar4 = *(undefined8 *)(lRam000000010b627470 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xa8) = 1;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar12;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar4;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xa8);
      if (iVar7 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar5,puVar3,puVar2,unaff_x29 + -0xa8,&stack0x000000b0);
      }
    }
  }
  else {
    lVar5 = lRam000000010b627470;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      in_stack_00000070 = *(undefined8 *)(lRam000000010b627470 + 0x20);
      in_stack_00000078 = *(undefined8 *)(lRam000000010b627470 + 0x28);
      in_stack_00000068 = 1;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000068);
      if (iVar7 != 0) {
        lVar1 = lRam000000010b627470 + 0x30;
        in_stack_000000a0 = &stack0x00000060;
        in_stack_000000a8 =
             __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
        ;
        in_stack_00000098 = &stack0x000000a0;
        in_stack_00000090 = s__failed_to_deserialize_DynamicTo_108add525;
        in_stack_00000080 = &stack0x00000090;
        in_stack_00000088 = &UNK_10b25d1e8;
        *(undefined8 *)(unaff_x29 + -0xa8) = 1;
        *(undefined8 ***)(unaff_x29 + -0xa0) = &stack0x00000080;
        *(undefined8 *)(unaff_x29 + -0x98) = 1;
        *(long *)(unaff_x29 + -0x90) = lVar1;
        in_stack_000000d0 = *(long *)(lVar5 + 0x60);
        in_stack_000000d8 = *(undefined8 *)(lVar5 + 0x68);
        in_stack_000000b8 = *(undefined8 **)(lVar5 + 0x50);
        in_stack_000000c0 = *(undefined8 *)(lVar5 + 0x58);
        in_stack_000000b0 = 1;
        if (in_stack_000000b8 == (undefined8 *)0x0) {
          in_stack_000000b0 = 2;
        }
        uStack00000000000000f8 = *(undefined4 *)(lVar5 + 8);
        uStack00000000000000fc = *(undefined4 *)(lVar5 + 0xc);
        *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xa8;
        *(undefined1 *)(unaff_x29 + -0xb8) = 1;
        *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xd8) = &DAT_1061c2098;
        in_stack_000000c8 = 1;
        if (in_stack_000000d0 == 0) {
          in_stack_000000c8 = 2;
        }
        in_stack_000000e8 = in_stack_00000070;
        in_stack_000000e0 = in_stack_00000068;
        in_stack_000000f0 = in_stack_00000078;
        in_stack_00000108 = unaff_x29 + -0xe0;
        in_stack_00000100 = s__108b39f4f;
        (**(code **)(puVar2 + 0x20))(puVar3,&stack0x000000b0);
      }
    }
  }
  __ZN16codex_app_server13dynamic_tools17fallback_response17hbc01028dbe995bd1E
            (in_stack_00000018,&UNK_108ced2c0,0x21);
  plVar8 = in_stack_00000060;
  if (*in_stack_00000060 == 1) {
    uVar11 = in_stack_00000060[1];
    if ((uVar11 & 3) != 1) goto LAB_10187b680;
    puVar10 = (undefined8 *)(uVar11 - 1);
    uVar12 = *puVar10;
    puVar13 = *(undefined8 **)(uVar11 + 7);
    pcVar9 = (code *)*puVar13;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar12);
    }
    if (puVar13[1] != 0) {
      _free(uVar12);
    }
  }
  else {
    if ((*in_stack_00000060 != 0) || (in_stack_00000060[2] == 0)) goto LAB_10187b680;
    puVar10 = (undefined8 *)in_stack_00000060[1];
  }
  _free(puVar10);
LAB_10187b680:
  _free(plVar8);
  return;
}

