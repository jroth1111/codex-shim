
/* WARNING: Removing unreachable block (ram,0x0001004f09a8) */
/* WARNING: Removing unreachable block (ram,0x0001004f0a78) */
/* WARNING: Removing unreachable block (ram,0x0001004f09b0) */
/* WARNING: Removing unreachable block (ram,0x0001004f0b10) */
/* WARNING: Removing unreachable block (ram,0x0001004f09f8) */
/* WARNING: Removing unreachable block (ram,0x0001004f09fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ef9d8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *puVar16;
  long unaff_x29;
  long *in_stack_00000008;
  undefined1 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  long lStack0000000000000088;
  undefined *puStack0000000000000090;
  long lStack0000000000000098;
  undefined *puStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_000001a0;
  undefined *in_stack_000001a8;
  long in_stack_000001b0;
  undefined *in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  
  *(char **)(unaff_x29 + -0xf8) = s_loaded_rules_from_files_108abfbe9;
  *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xe0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xf8;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  puStack0000000000000090 = (undefined *)(unaff_x29 + -0x70);
  lStack0000000000000088 = 1;
  lStack0000000000000098 = 1;
  puStack00000000000000a0 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((*unaff_x21 == 0) &&
     (((bRam000000010b629948 - 1 < 2 ||
       ((bRam000000010b629948 != 0 &&
        (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                            ), cVar12 != '\0')))) &&
      (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                          ),
      lVar10 = 
      ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
      , (uVar14 & 1) != 0)))) {
    *(undefined **)(unaff_x29 + -0xf8) = &UNK_108ca2a88;
    *(undefined8 *)(unaff_x29 + -0xf0) = 0x31;
    *(long **)(unaff_x29 + -0x70) = &stack0x000001a0;
    lStack0000000000000088 = unaff_x29 + -0xf8;
    puStack0000000000000090 = &UNK_10b208fd0;
    lStack0000000000000098 = unaff_x29 + -0x70;
    puStack00000000000000a0 = &UNK_10b215530;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar10,&stack0x00000250);
    lVar10 = 
    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar4 = *(undefined8 *)
               (
               ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
               + 0x20);
      uVar5 = *(undefined8 *)
               (
               ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
               + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = 5;
      *(undefined8 *)(unaff_x29 + -0xd8) = uVar4;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar13 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xe0);
      if (iVar13 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar10,puVar2,puVar1,unaff_x29 + -0xe0,&stack0x00000250);
      }
    }
  }
  else {
    lVar10 = 
    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar4 = *(undefined8 *)
               (
               ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
               + 0x28);
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar13 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000238);
      if (iVar13 != 0) {
        *(undefined **)(unaff_x29 + -0xf8) = &UNK_108ca2a88;
        *(undefined8 *)(unaff_x29 + -0xf0) = 0x31;
        *(long **)(unaff_x29 + -0x70) = &stack0x000001a0;
        lStack0000000000000088 = unaff_x29 + -0xf8;
        puStack0000000000000090 = &UNK_10b208fd0;
        lStack0000000000000098 = unaff_x29 + -0x70;
        puStack00000000000000a0 = &UNK_10b215530;
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar4;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar10,puVar2,puVar1,unaff_x29 + -0xe0,&stack0x00000250);
      }
    }
  }
  uVar6 = in_stack_000001e8;
  uVar7 = in_stack_000001e0;
  uVar4 = in_stack_000001d8;
  uVar5 = in_stack_000001d0;
  uVar8 = in_stack_000001c8;
  uVar9 = in_stack_000001c0;
  puVar2 = in_stack_000001b8;
  lVar11 = in_stack_000001b0;
  puVar1 = in_stack_000001a8;
  lVar10 = in_stack_000001a0;
  if (*(long *)(*in_stack_00000008 + 0x4e8) == -0x8000000000000000) {
    if ((*(byte *)(unaff_x19 + 0x30) & 1) != 0) {
      FUN_100e09138(unaff_x19 + 0x38);
    }
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
    lVar3 = *(long *)(unaff_x19 + 0x18);
    lVar15 = *(long *)(unaff_x19 + 0x20);
    if (lVar15 != 0) {
      puVar16 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    lVar15 = *(long *)(unaff_x19 + 0x10);
  }
  else {
    __ZN16codex_execpolicy6policy6Policy13merge_overlay17hf62801808cd275daE
              (&stack0x00000088,&stack0x000001a0,*in_stack_00000008 + 0x4e8);
    in_stack_00000210 = in_stack_000000f8;
    in_stack_00000208 = in_stack_000000f0;
    in_stack_00000200 = in_stack_000000e8;
    in_stack_000001f8 = in_stack_000000e0;
    in_stack_000001f0 = in_stack_000000d8;
    uVar6 = in_stack_000000d0;
    uVar7 = in_stack_000000c8;
    uVar4 = in_stack_000000c0;
    uVar5 = in_stack_000000b8;
    uVar8 = in_stack_000000b0;
    uVar9 = in_stack_000000a8;
    puVar2 = puStack00000000000000a0;
    lVar11 = lStack0000000000000098;
    puVar1 = puStack0000000000000090;
    lVar10 = lStack0000000000000088;
    FUN_100df7a58(&stack0x000001a0);
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
    lVar3 = *(long *)(unaff_x19 + 0x18);
    lVar15 = *(long *)(unaff_x19 + 0x20);
    if (lVar15 != 0) {
      puVar16 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    lVar15 = *(long *)(unaff_x19 + 0x10);
  }
  if (lVar15 != 0) {
    _free(lVar3);
  }
  *in_stack_00000020 = 1;
  FUN_100e6ae88(in_stack_00000008);
  *in_stack_00000028 = 0;
  in_stack_00000028[1] = lVar10;
  in_stack_00000028[2] = puVar1;
  in_stack_00000028[3] = lVar11;
  in_stack_00000028[4] = puVar2;
  in_stack_00000028[5] = uVar9;
  in_stack_00000028[6] = uVar8;
  in_stack_00000028[7] = uVar5;
  in_stack_00000028[8] = uVar4;
  in_stack_00000028[9] = uVar7;
  in_stack_00000028[10] = uVar6;
  in_stack_00000028[0xb] = in_stack_000001f0;
  in_stack_00000028[0xc] = in_stack_000001f8;
  in_stack_00000028[0xd] = in_stack_00000200;
  in_stack_00000028[0xe] = in_stack_00000208;
  in_stack_00000028[0xf] = in_stack_00000210;
  in_stack_00000028[0x10] = 9;
  in_stack_00000028[0x11] = lVar10;
  in_stack_00000028[0x20] = in_stack_00000180;
  in_stack_00000028[0x1d] = in_stack_00000168;
  in_stack_00000028[0x1c] = in_stack_00000160;
  in_stack_00000028[0x1f] = in_stack_00000178;
  in_stack_00000028[0x1e] = in_stack_00000170;
  in_stack_00000028[0x19] = in_stack_00000148;
  in_stack_00000028[0x18] = in_stack_00000140;
  in_stack_00000028[0x1b] = in_stack_00000158;
  in_stack_00000028[0x1a] = in_stack_00000150;
  in_stack_00000028[0x15] = in_stack_00000128;
  in_stack_00000028[0x14] = in_stack_00000120;
  in_stack_00000028[0x17] = in_stack_00000138;
  in_stack_00000028[0x16] = in_stack_00000130;
  in_stack_00000028[0x13] = in_stack_00000118;
  in_stack_00000028[0x12] = in_stack_00000110;
  *(undefined1 *)(unaff_x19 + 0x200) = 1;
  return;
}

