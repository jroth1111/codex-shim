
/* WARNING: Removing unreachable block (ram,0x0001018a6d28) */
/* WARNING: Removing unreachable block (ram,0x0001018a6d4c) */
/* WARNING: Removing unreachable block (ram,0x0001018a6d50) */
/* WARNING: Removing unreachable block (ram,0x0001018a6d58) */
/* WARNING: Removing unreachable block (ram,0x0001018a6d6c) */
/* WARNING: Removing unreachable block (ram,0x0001018a71b8) */
/* WARNING: Removing unreachable block (ram,0x0001018a761c) */
/* WARNING: Removing unreachable block (ram,0x0001018a7630) */
/* WARNING: Removing unreachable block (ram,0x0001018a6d80) */
/* WARNING: Removing unreachable block (ram,0x0001018a71bc) */
/* WARNING: Removing unreachable block (ram,0x0001018a7200) */
/* WARNING: Removing unreachable block (ram,0x0001018a7210) */
/* WARNING: Removing unreachable block (ram,0x0001018a7250) */
/* WARNING: Removing unreachable block (ram,0x0001018a725c) */
/* WARNING: Removing unreachable block (ram,0x0001018a7274) */
/* WARNING: Removing unreachable block (ram,0x0001018a6d90) */
/* WARNING: Removing unreachable block (ram,0x0001018a71cc) */
/* WARNING: Removing unreachable block (ram,0x0001018a71f4) */
/* WARNING: Removing unreachable block (ram,0x0001018a6840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a7440(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined1 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000038;
  undefined8 *in_stack_00000040;
  long *in_stack_000000b8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  char in_stack_00000130;
  undefined1 in_stack_00000138;
  undefined8 in_stack_00000140;
  long *in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  char in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  long in_stack_00000200;
  
  in_stack_00000148 = (long *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x000002c0);
  in_stack_00000140 = 0x8000000000000002;
  if (1 < unaff_x27 + 0x7fffffffffffffffU) {
    func_0x000101933128(&stack0x00000268);
  }
  FUN_10194df64(unaff_x26 + 0x48);
  if (in_stack_00000200 != -0x7ffffffffffffffb) {
    func_0x00010194dc28(&stack0x00000200);
  }
  if (((long)in_stack_00000038 < 0) &&
     ((in_stack_00000038 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010194dc28(&stack0x00000050);
  }
  in_stack_000000b8 = in_stack_00000148;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b628428 - 1 < 2 ||
       ((bRam000000010b628428 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b628418), cVar5 != '\0')))) &&
      (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b628418)
      , iVar6 != 0)))) {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (lRam000000010b628418,&stack0x00000200);
    lVar8 = lRam000000010b628418;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      uVar11 = *(undefined8 *)(lRam000000010b628418 + 0x20);
      uVar3 = *(undefined8 *)(lRam000000010b628418 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar11;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xc0);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar8,puVar2,puVar1,unaff_x29 + -0xc0,&stack0x00000200);
      }
    }
  }
  else {
    lVar8 = lRam000000010b628418;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      uVar11 = *(undefined8 *)(lRam000000010b628418 + 0x20);
      uVar3 = *(undefined8 *)(lRam000000010b628418 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar11;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xc0);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar8,puVar2,puVar1,unaff_x29 + -0xc0,&stack0x00000200);
      }
    }
  }
  plVar4 = in_stack_000000b8;
  in_stack_000000e0 = -0x7fffffffffffffff;
  in_stack_00000130 = '\x03';
  in_stack_00000138 = 0;
  if (*in_stack_000000b8 == 1) {
    uVar13 = in_stack_000000b8[1];
    if ((uVar13 & 3) != 1) goto LAB_1018a6e40;
    puVar12 = (undefined8 *)(uVar13 - 1);
    uVar11 = *puVar12;
    puVar10 = *(undefined8 **)(uVar13 + 7);
    pcVar9 = (code *)*puVar10;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar11);
    }
    if (puVar10[1] != 0) {
      _free(uVar11);
    }
  }
  else {
    if ((*in_stack_000000b8 != 0) || (in_stack_000000b8[2] == 0)) goto LAB_1018a6e40;
    puVar12 = (undefined8 *)in_stack_000000b8[1];
  }
  _free(puVar12);
LAB_1018a6e40:
  _free(plVar4);
  cVar5 = in_stack_00000130;
  uVar11 = 0x8000000000000000;
  lVar8 = -0x8000000000000000;
  if (in_stack_000000e0 != -0x7fffffffffffffff) {
    __ZN25codex_app_server_protocol8protocol2v211permissions188__LT_impl_u20_core__convert__From_LT_codex_app_server_protocol__protocol__v2__permissions__AdditionalFileSystemPermissions_GT__u20_for_u20_codex_protocol__models__FileSystemPermissions_GT_4from17h00f31a367072adddE
              (unaff_x29 + -0xc0,&stack0x00000200);
    in_stack_00000148 = *(long **)(unaff_x29 + -0xb0);
    in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0xb8);
    lVar8 = *(long *)(unaff_x29 + -0xc0);
    in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0xa8);
  }
  in_stack_000001d8 = cVar5;
  in_stack_000001c8 = in_stack_00000148;
  in_stack_000001c0 = in_stack_00000140;
  in_stack_000001d0 = in_stack_00000150;
  in_stack_000001b8 = lVar8;
  if (cVar5 == '\x03' && lVar8 == -0x8000000000000000) {
    uVar7 = 3;
  }
  else {
    __ZN16codex_sandboxing17policy_transforms29intersect_permission_profiles17hf90f25d294239821E
              (unaff_x29 + -0xc0,&stack0x00000200,&stack0x000001b8,in_stack_00000018,
               in_stack_00000020);
    uVar7 = *(undefined1 *)(unaff_x29 + -0xa0);
    in_stack_000001e8 = *(undefined8 *)(unaff_x29 + -0xb0);
    in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xc0);
    in_stack_000001f0 = *(undefined8 *)(unaff_x29 + -0xa8);
  }
  *in_stack_00000040 = uVar11;
  in_stack_00000040[2] = in_stack_000001e8;
  in_stack_00000040[1] = in_stack_000001e0;
  in_stack_00000040[3] = in_stack_000001f0;
  *(undefined1 *)(in_stack_00000040 + 4) = uVar7;
  *(undefined1 *)(in_stack_00000040 + 5) = in_stack_00000138;
  *(undefined1 *)((long)in_stack_00000040 + 0x29) = 0;
  if (*in_stack_00000008 != -0x8000000000000000 && (cVar5 == '\x03' && lVar8 == -0x8000000000000000)
     ) {
    FUN_10196b754(in_stack_00000008);
  }
  return;
}

