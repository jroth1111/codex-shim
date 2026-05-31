
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a6af8(void)

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
  byte bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x23;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x26;
  long unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000038;
  undefined8 *in_stack_00000040;
  long *in_stack_000000b8;
  long in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  char cStack0000000000000130;
  undefined7 uStack0000000000000131;
  undefined1 uStack0000000000000138;
  byte bStack0000000000000139;
  long *plStack0000000000000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  ulong in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  char in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  long in_stack_00000200;
  
  plStack0000000000000148 = (long *)FUN_1088bbbb8(s_missing_field_____108ac28f7,&stack0x000002c0);
  FUN_10194df64(unaff_x26 + 0x48);
  if (in_stack_00000200 != unaff_x23 + 3) {
    func_0x00010194dc28(&stack0x00000200);
  }
  if (((long)in_stack_00000038 < 0) && ((in_stack_00000038 & 0xfffffffffffffffe) != unaff_x23 + 2U))
  {
    func_0x00010194dc28(&stack0x00000050);
  }
  if (unaff_x23 == -0x7ffffffffffffffe) {
    in_stack_000000b8 = plStack0000000000000148;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
        ((bRam000000010b628428 - 1 < 2 ||
         ((bRam000000010b628428 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b628418), cVar5 != '\0')))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b628418), iVar6 != 0)) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b628418,&stack0x00000200);
      lVar8 = lRam000000010b628418;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar12 = *(undefined8 *)(lRam000000010b628418 + 0x20);
        uVar3 = *(undefined8 *)(lRam000000010b628418 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar12;
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
        uVar12 = *(undefined8 *)(lRam000000010b628418 + 0x20);
        uVar3 = *(undefined8 *)(lRam000000010b628418 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar12;
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
    _cStack0000000000000130 = CONCAT71(uStack0000000000000131,3);
    _uStack0000000000000138 = _uStack0000000000000138 & 0xffffffffffffff00;
    if (*in_stack_000000b8 == 1) {
      uVar14 = in_stack_000000b8[1];
      if ((uVar14 & 3) == 1) {
        puVar13 = (undefined8 *)(uVar14 - 1);
        uVar12 = *puVar13;
        puVar11 = *(undefined8 **)(uVar14 + 7);
        pcVar9 = (code *)*puVar11;
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(uVar12);
        }
        if (puVar11[1] != 0) {
          _free(uVar12);
        }
        goto LAB_1018a6e24;
      }
    }
    else if ((*in_stack_000000b8 == 0) && (in_stack_000000b8[2] != 0)) {
      puVar13 = (undefined8 *)in_stack_000000b8[1];
LAB_1018a6e24:
      _free(puVar13);
    }
    _free(plVar4);
    uVar14 = _uStack0000000000000138;
LAB_1018a6e48:
    _uStack0000000000000138 = uVar14;
    uVar14 = _uStack0000000000000138;
    bVar10 = 0;
  }
  else {
    in_stack_00000108 = in_stack_00000168;
    in_stack_00000100 = in_stack_00000160;
    in_stack_00000118 = in_stack_00000178;
    in_stack_00000110 = in_stack_00000170;
    in_stack_00000128 = in_stack_00000188;
    in_stack_00000120 = in_stack_00000180;
    _uStack0000000000000138 = in_stack_00000198;
    uVar14 = _uStack0000000000000138;
    _cStack0000000000000130 = in_stack_00000190;
    in_stack_000000f8 = in_stack_00000158;
    in_stack_000000f0 = in_stack_00000150;
    bStack0000000000000139 = (byte)(in_stack_00000198 >> 8);
    in_stack_000000e0 = unaff_x23;
    in_stack_000000e8 = plStack0000000000000148;
    if (bStack0000000000000139 == 2) goto LAB_1018a6e48;
    bVar10 = bStack0000000000000139;
    if (((in_stack_00000198 & 0x100) != 0) && ((in_stack_00000198 & 1) != 0)) {
      _uStack0000000000000138 = uVar14;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
         (((bRam000000010b628410 - 1 < 2 ||
           ((bRam000000010b628410 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b628400), cVar5 != '\0')))) &&
          (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (lRam000000010b628400), iVar6 != 0)))) {
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cf0161;
        *(undefined8 *)(unaff_x29 + -0xb8) = 0x8d;
        FUN_1018a7950(&stack0x00000200);
      }
      else {
        lVar8 = lRam000000010b628400;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          in_stack_000001a8 = *(undefined8 *)(lRam000000010b628400 + 0x20);
          in_stack_000001b0 = *(undefined8 *)(lRam000000010b628400 + 0x28);
          in_stack_000001a0 = 1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001a0);
          if (iVar6 != 0) {
            *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cf0161;
            *(undefined8 *)(unaff_x29 + -0xb8) = 0x8d;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar8,puVar2,puVar1,&stack0x000001a0,&stack0x00000200);
          }
        }
      }
      *in_stack_00000040 = 0x8000000000000000;
      *(undefined1 *)(in_stack_00000040 + 4) = 3;
      *(undefined2 *)(in_stack_00000040 + 5) = 0;
      if (in_stack_000000e0 != -0x7fffffffffffffff) {
        func_0x000101933128(&stack0x000000e0);
      }
      if (*in_stack_00000008 == -0x8000000000000000) {
        return;
      }
      goto LAB_1018a6850;
    }
  }
  _uStack0000000000000138 = uVar14;
  cVar5 = cStack0000000000000130;
  uVar12 = 0x8000000000000000;
  lVar8 = -0x8000000000000000;
  if (in_stack_000000e0 != -0x7fffffffffffffff) {
    __ZN25codex_app_server_protocol8protocol2v211permissions188__LT_impl_u20_core__convert__From_LT_codex_app_server_protocol__protocol__v2__permissions__AdditionalFileSystemPermissions_GT__u20_for_u20_codex_protocol__models__FileSystemPermissions_GT_4from17h00f31a367072adddE
              (unaff_x29 + -0xc0,&stack0x00000200);
    plStack0000000000000148 = *(long **)(unaff_x29 + -0xb0);
    unaff_x23 = *(long *)(unaff_x29 + -0xb8);
    lVar8 = *(long *)(unaff_x29 + -0xc0);
    in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0xa8);
  }
  in_stack_000001d8 = cVar5;
  in_stack_000001c8 = plStack0000000000000148;
  in_stack_000001d0 = in_stack_00000150;
  in_stack_000001b8 = lVar8;
  in_stack_000001c0 = unaff_x23;
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
    uVar12 = *(undefined8 *)(unaff_x29 + -0xc0);
    in_stack_000001f0 = *(undefined8 *)(unaff_x29 + -0xa8);
  }
  *in_stack_00000040 = uVar12;
  in_stack_00000040[2] = in_stack_000001e8;
  in_stack_00000040[1] = in_stack_000001e0;
  in_stack_00000040[3] = in_stack_000001f0;
  *(undefined1 *)(in_stack_00000040 + 4) = uVar7;
  *(undefined1 *)(in_stack_00000040 + 5) = uStack0000000000000138;
  *(byte *)((long)in_stack_00000040 + 0x29) = bVar10 & 1;
  if (*in_stack_00000008 == -0x8000000000000000 || (cVar5 != '\x03' || lVar8 != -0x8000000000000000)
     ) {
    return;
  }
LAB_1018a6850:
  FUN_10196b754(in_stack_00000008);
  return;
}

