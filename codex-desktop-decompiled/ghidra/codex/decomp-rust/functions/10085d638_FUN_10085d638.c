
/* WARNING: Removing unreachable block (ram,0x00010085d890) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000490 : 0x00010086183c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_10085d638(void)

{
  byte *pbVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  undefined1 uVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  long lVar23;
  code *pcVar24;
  code *pcVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  byte bVar29;
  byte *pbVar30;
  uint uVar31;
  long unaff_x19;
  undefined1 *puVar32;
  code *pcVar33;
  code *pcVar34;
  long *plVar35;
  long *plVar36;
  long unaff_x24;
  ulong uVar37;
  long lVar38;
  long *plVar39;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  code *in_stack_00000080;
  code *in_stack_00000088;
  code *in_stack_00000090;
  code *in_stack_00000098;
  code *in_stack_000000a0;
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
  undefined8 in_stack_00000100;
  code *in_stack_00000480;
  code *pcVar46;
  code *in_stack_00000488;
  code *in_stack_00000490;
  code *in_stack_00000498;
  code *in_stack_000004a0;
  code *in_stack_000004a8;
  code *in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  long *in_stack_00000588;
  code *in_stack_000008a0;
  code *in_stack_000008a8;
  code *in_stack_000008b0;
  code *in_stack_00000990;
  code *pcVar47;
  code *in_stack_00000998;
  code *pcVar48;
  code *in_stack_000009a0;
  code *pcVar49;
  code *in_stack_000009a8;
  code *pcVar50;
  long *in_stack_00000c98;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s__api_version_108ac5fd2,&stack0x00000b90);
  FUN_1011d5524(&stack0x00000480,*(undefined8 *)(unaff_x24 + 0x18),&UNK_108ca1660,&stack0x00000d90);
  if (in_stack_00000480 == (code *)0x2) {
    uVar37 = 1;
    lVar10 = *in_stack_00000588;
    *in_stack_00000588 = lVar10 + -1;
    LORelease();
    pcVar24 = in_stack_00000488;
  }
  else {
    auVar43 = FUN_105c4eee0(in_stack_00000588,&stack0x00000480);
    uVar37 = auVar43._0_8_;
    lVar10 = *in_stack_00000588;
    *in_stack_00000588 = lVar10 + -1;
    LORelease();
    pcVar24 = auVar43._8_8_;
  }
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000588);
  }
  *(ulong *)(unaff_x19 + 0x70) = uVar37;
  *(code **)(unaff_x19 + 0x78) = pcVar24;
  if ((uVar37 & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000480,pcVar24);
    if (in_stack_00000480 != (code *)0x4) {
      uVar14 = *(undefined8 *)(unaff_x19 + 0x70);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x78);
      pcVar46 = in_stack_00000488;
      pcVar24 = in_stack_00000480;
      goto LAB_10085d73c;
    }
    *unaff_x28 = 3;
    *unaff_x27 = 4;
LAB_10085e810:
    uVar20 = 4;
    goto LAB_1008603a0;
  }
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  if (pcVar24 == (code *)0x0) {
    FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
    goto LAB_100861774;
  }
  uVar19 = 0;
  uVar14 = 1;
  pcVar46 = pcVar24;
  pcVar24 = (code *)0x3;
LAB_10085d73c:
  in_stack_00000080 = in_stack_00000490;
  in_stack_00000088 = in_stack_00000498;
  in_stack_00000090 = in_stack_000004a0;
  in_stack_00000098 = in_stack_000004a8;
  in_stack_000000a0 = in_stack_000004b0;
  in_stack_000000a8 = in_stack_000004b8;
  in_stack_000000b0 = in_stack_000004c0;
  in_stack_000000b8 = in_stack_000004c8;
  in_stack_000000c0 = in_stack_000004d0;
  in_stack_000000c8 = in_stack_000004d8;
  in_stack_000000d0 = in_stack_000004e0;
  in_stack_000000d8 = in_stack_000004e8;
  in_stack_000000e0 = in_stack_000004f0;
  in_stack_000000e8 = in_stack_000004f8;
  in_stack_000000f0 = in_stack_00000500;
  FUN_100e03d7c(uVar14,uVar19);
  if (pcVar24 == (code *)0x3) {
    puVar15 = (undefined8 *)_malloc(8);
    if (puVar15 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100861774;
    }
    *puVar15 = pcVar46;
    puVar16 = (undefined8 *)_malloc(0x18);
    if (puVar16 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100861774;
    }
    *puVar16 = puVar15;
    puVar16[1] = &UNK_10b21e380;
    *(undefined1 *)(puVar16 + 2) = 0x28;
    pcVar24 = (code *)((long)puVar16 + 1);
    *(undefined2 *)(unaff_x19 + 0x68) = 0x100;
    pcVar25 = in_stack_00000080;
    pcVar34 = in_stack_00000088;
    pcVar33 = in_stack_00000090;
    pcVar7 = in_stack_00000098;
    pcVar8 = in_stack_000000a0;
LAB_10085e7d0:
    in_stack_000000a0 = pcVar8;
    in_stack_00000098 = pcVar7;
    in_stack_00000090 = pcVar33;
    in_stack_00000088 = pcVar34;
    in_stack_00000080 = pcVar25;
    lVar10 = **(long **)(unaff_x19 + 0x50);
    **(long **)(unaff_x19 + 0x50) = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4();
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
    *(code **)(unaff_x19 + 0x70) = pcVar24;
    *(code **)(unaff_x19 + 0x78) = pcVar46;
    *(undefined8 *)(unaff_x19 + 200) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_000000d0;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_000000e0;
    *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000000f0;
    *(code **)(unaff_x19 + 0x88) = in_stack_00000088;
    *(code **)(unaff_x19 + 0x80) = in_stack_00000080;
    *(code **)(unaff_x19 + 0x98) = in_stack_00000098;
    *(code **)(unaff_x19 + 0x90) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_000000a8;
    *(code **)(unaff_x19 + 0xa0) = in_stack_000000a0;
    *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_000000b0;
    if (*(ushort *)(unaff_x19 + 0xd8) - 200 < 100) {
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 200);
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xc0);
      *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xd0);
      *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0x88);
      *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x98);
      *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x90);
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xa8);
      *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined1 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x19 + 0xf0);
      *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x78);
      *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined1 *)(unaff_x19 + 0x328) = 0;
      FUN_1011d682c(&stack0x00000480,unaff_x19 + 0xf8);
      if (in_stack_00000480 == (code *)0x8000000000000006) {
        *unaff_x28 = 4;
        *unaff_x27 = 4;
        pcVar24 = pcVar46;
        goto LAB_10085e810;
      }
      FUN_100cfddd4(unaff_x19 + 0xf8);
      bVar9 = in_stack_00000480 == (code *)0x8000000000000005;
      in_stack_000008a0 = in_stack_00000490;
      in_stack_000008a8 = in_stack_00000498;
      in_stack_000008b0 = in_stack_000004a0;
      if (bVar9) {
        puVar15 = (undefined8 *)_malloc(8);
        if (puVar15 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100861774;
        }
        *puVar15 = in_stack_00000488;
        pcVar24 = (code *)func_0x000106029c30(0x28,puVar15,&UNK_10b21e380);
        in_stack_00000480 = in_stack_00000488;
LAB_10085e768:
        pcVar46 = in_stack_00000480;
        if ((*(byte *)(unaff_x19 + 0x68) & 1) != 0) goto LAB_10085e770;
        goto LAB_10085e778;
      }
      plVar39 = (long *)__ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
                                  (&UNK_108cab76f,7,&stack0x00000b90);
      if ((plVar39 == (long *)0x0) || (*plVar39 != -0x7ffffffffffffffd)) {
LAB_10085e75c:
        FUN_100de6690(&stack0x00000b90);
        pcVar24 = (code *)0x0;
        goto LAB_10085e768;
      }
      auVar43 = FUN_100e8d6f8(plVar39[2],plVar39[3]);
      lVar23 = auVar43._8_8_;
      lVar10 = auVar43._0_8_;
      if (lVar10 == 0) goto LAB_10085e75c;
      lVar38 = 0;
      do {
        lVar27 = lVar23;
        if (lVar38 == lVar23) break;
        pbVar1 = (byte *)(lVar10 + lVar38);
        pbVar30 = pbVar1 + 1;
        uVar28 = (uint)*pbVar1;
        if ((char)*pbVar1 < '\0') {
          if (uVar28 < 0xe0) {
            pbVar30 = pbVar1 + 2;
            uVar28 = pbVar1[1] & 0x3f | (uVar28 & 0x1f) << 6;
          }
          else {
            uVar31 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
            if (uVar28 < 0xf0) {
              pbVar30 = pbVar1 + 3;
              uVar28 = uVar31 | (uVar28 & 0x1f) << 0xc;
            }
            else {
              pbVar30 = pbVar1 + 4;
              uVar28 = pbVar1[3] & 0x3f | uVar31 << 6 | (uVar28 & 7) << 0x12;
            }
          }
        }
        lVar27 = lVar38;
        lVar38 = (long)pbVar30 - lVar10;
      } while (uVar28 == 0x76);
      func_0x000105d85180(&stack0x00000480,lVar10 + lVar27,lVar23 - lVar27);
      pcVar47 = in_stack_00000488;
      pcVar48 = in_stack_00000490;
      pcVar49 = in_stack_00000498;
      pcVar50 = in_stack_000004a0;
      if (in_stack_00000480 == (code *)0x0) {
        pcVar47 = in_stack_00000990;
        pcVar48 = in_stack_00000998;
        pcVar49 = in_stack_000009a0;
        pcVar50 = in_stack_000009a8;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b62eed0 - 1 < 2 ||
             ((bRam000000010b62eed0 != 0 &&
              (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN12codex_ollama6client12OllamaClient13fetch_version28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85d7876feee63e8aE
                                  ), cVar11 != '\0')))) &&
            (uVar37 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN12codex_ollama6client12OllamaClient13fetch_version28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85d7876feee63e8aE
                                ), (uVar37 & 1) != 0)))) {
          FUN_10074b7b0(&stack0x00000d40);
        }
        else {
          uVar14 = 
          ___ZN12codex_ollama6client12OllamaClient13fetch_version28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85d7876feee63e8aE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar22 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar22 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar22 + 0x18))(puVar2,&stack0x00000ac0);
            if (iVar12 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar14,puVar2,puVar22,&stack0x00000ac0,&stack0x00000d40);
            }
          }
        }
      }
      FUN_100de6690(&stack0x00000b90);
      *(undefined2 *)(unaff_x19 + 0x68) = 0x100;
      pcVar24 = in_stack_00000480;
      pcVar25 = in_stack_00000080;
      pcVar34 = in_stack_00000088;
      pcVar33 = in_stack_00000090;
      pcVar7 = in_stack_00000098;
      pcVar8 = in_stack_000000a0;
      pcVar46 = in_stack_00000480;
      in_stack_00000088 = pcVar47;
      in_stack_00000090 = pcVar48;
      in_stack_00000098 = pcVar49;
      in_stack_000000a0 = pcVar50;
    }
    else {
      pcVar24 = (code *)0x0;
      bVar9 = false;
LAB_10085e770:
      FUN_100e0d524(unaff_x19 + 0x70);
      pcVar46 = in_stack_00000480;
LAB_10085e778:
      *(undefined2 *)(unaff_x19 + 0x68) = 0x100;
      pcVar25 = in_stack_00000080;
      pcVar34 = in_stack_00000088;
      pcVar33 = in_stack_00000090;
      pcVar7 = in_stack_00000098;
      pcVar8 = in_stack_000000a0;
      in_stack_00000088 = in_stack_00000990;
      in_stack_00000090 = in_stack_00000998;
      in_stack_00000098 = in_stack_000009a0;
      in_stack_000000a0 = in_stack_000009a8;
      if (bVar9) goto LAB_10085e7d0;
    }
    in_stack_00000080 = pcVar24;
    pcVar24 = (code *)0x0;
    if (in_stack_00000080 == (code *)0x0) goto LAB_10085e7d0;
    iVar12 = __ZN12codex_ollama18supports_responses17h92391356edd486f2E(&stack0x00000080);
    if (iVar12 != 0) {
      __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
                (&stack0x00000080);
      __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
                (&stack0x00000088);
      pcVar24 = (code *)0x0;
      pcVar25 = in_stack_00000080;
      pcVar34 = in_stack_00000088;
      pcVar33 = in_stack_00000090;
      pcVar7 = in_stack_00000098;
      pcVar8 = in_stack_000000a0;
      goto LAB_10085e7d0;
    }
    in_stack_00000498 = (code *)0xd;
    in_stack_00000490 = (code *)0x0;
    in_stack_000004a0 = (code *)0x4;
    pcVar46 = (code *)0xffffffffffffffff;
    in_stack_00000488 = (code *)0xffffffffffffffff;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000008a0,s_Ollama___is_too_old__Codex_requi_108ac5ef5,&stack0x00000b90);
    puVar15 = (undefined8 *)_malloc(0x18);
    if (puVar15 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100861774;
    }
    *puVar15 = in_stack_000008a0;
    puVar15[1] = in_stack_000008a8;
    puVar15[2] = in_stack_000008b0;
    pcVar24 = (code *)func_0x000106029c30(0x28,puVar15,&UNK_10b209118);
    __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
              (&stack0x00000480);
    __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
              (&stack0x00000488);
    __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
              (&stack0x00000080);
    __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
              (&stack0x00000088);
    lVar10 = **(long **)(unaff_x19 + 0x50);
    **(long **)(unaff_x19 + 0x50) = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4();
    }
  }
  auVar43._8_8_ = in_stack_00000488;
  auVar43._0_8_ = pcVar46;
  auVar44._8_8_ = in_stack_00000488;
  auVar44._0_8_ = pcVar46;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x40));
  }
  *unaff_x27 = 1;
  FUN_100e68d90();
  if (pcVar24 == (code *)0x0) {
    plVar39 = (long *)(unaff_x19 + 0x28);
    *plVar39 = *(long *)(unaff_x19 + 0x18);
    puVar21 = (undefined1 *)(unaff_x19 + 0x80);
    *puVar21 = 0;
    lVar10 = *plVar39;
    if (*(long *)(lVar10 + 0x1ea0) == -0x8000000000000000) {
      puVar22 = &UNK_108cac99e;
      uVar14 = 0xb;
    }
    else {
      puVar22 = *(undefined **)(lVar10 + 0x1ea8);
      uVar14 = *(undefined8 *)(lVar10 + 0x1eb0);
    }
    puVar32 = (undefined1 *)(unaff_x19 + 0xf0);
    *puVar32 = 0;
    *(undefined **)(unaff_x19 + 0x30) = puVar22;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar14;
    *(long *)(unaff_x19 + 0x88) = lVar10;
    if (*(long *)(lVar10 + 0x24c8) != 0) {
      uVar13 = FUN_100e8e738(*(undefined8 *)(lVar10 + 0x24d0),*(undefined8 *)(lVar10 + 0x24d8),
                             &UNK_108ca754e,6);
      lVar23 = 0;
      uVar26 = *(ulong *)(lVar10 + 0x24b8);
      lVar10 = *(long *)(lVar10 + 0x24b0);
      bVar29 = (byte)(uVar13 >> 0x39);
      uVar13 = uVar13 & uVar26;
      uVar14 = *(undefined8 *)(lVar10 + uVar13);
      uVar37 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar29),
                        CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar29),
                                 CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar29),
                                          CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar29),
                                                   CONCAT13(-((byte)((ulong)uVar14 >> 0x18) ==
                                                             bVar29),CONCAT12(-((byte)((ulong)uVar14
                                                                                      >> 0x10) ==
                                                                               bVar29),CONCAT11(-((
                                                  byte)((ulong)uVar14 >> 8) == bVar29),
                                                  -((byte)uVar14 == bVar29)))))))) &
               0x8080808080808080;
      while( true ) {
        for (; uVar37 != 0; uVar37 = uVar37 - 1 & uVar37) {
          uVar3 = (uVar37 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar37 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          lVar38 = lVar10 + (uVar13 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar26)
                            * -0x1f0;
          if ((*(long *)(lVar38 + -0x1e0) == 6) &&
             (**(int **)(lVar38 + -0x1e8) == 0x616c6c6f &&
              (short)(*(int **)(lVar38 + -0x1e8))[1] == 0x616d)) {
            *(long *)(unaff_x19 + 0xe0) = lVar38 + -0x1d8;
            *(undefined1 *)(unaff_x19 + 0xe9) = 0;
            FUN_10074b8ec(&stack0x00000480,unaff_x19 + 0x90);
            if (pcVar46 == (code *)0x8000000000000001) {
              uVar20 = 3;
              *puVar32 = 3;
              goto LAB_10086154c;
            }
            in_stack_00000080 = in_stack_00000490;
            in_stack_00000088 = in_stack_00000498;
            in_stack_00000090 = in_stack_000004a0;
            func_0x000100ca74dc(unaff_x19 + 0x90);
            *puVar32 = 1;
            if (pcVar46 == (code *)0x8000000000000000) goto LAB_10085d380;
            *(undefined8 *)(unaff_x19 + 0x40) = pcVar46;
            *(code **)(unaff_x19 + 0x48) = in_stack_00000488;
            *(code **)(unaff_x19 + 0x58) = in_stack_00000088;
            *(code **)(unaff_x19 + 0x50) = in_stack_00000080;
            *(code **)(unaff_x19 + 0x60) = in_stack_00000090;
            *(undefined8 **)(unaff_x19 + 0x88) = (undefined8 *)(unaff_x19 + 0x40);
            *(undefined1 *)(unaff_x19 + 0x91) = 0;
            *(undefined1 *)(unaff_x19 + 0x90) = 0;
            lVar23 = *(long *)(unaff_x19 + 0x88);
            lVar10 = *(long *)(lVar23 + 0x10);
            goto LAB_10085e0dc;
          }
        }
        bVar40 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar14 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar14
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1)))))))),1);
        if ((bVar40 & 1) != 0) break;
        lVar23 = lVar23 + 8;
        uVar13 = uVar13 + lVar23 & uVar26;
        uVar14 = *(undefined8 *)(lVar10 + uVar13);
        uVar37 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar29),
                          CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar29),
                                   CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar29),
                                            CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar29),
                                                     CONCAT13(-((byte)((ulong)uVar14 >> 0x18) ==
                                                               bVar29),CONCAT12(-((byte)((ulong)
                                                  uVar14 >> 0x10) == bVar29),
                                                  CONCAT11(-((byte)((ulong)uVar14 >> 8) == bVar29),
                                                           -((byte)uVar14 == bVar29)))))))) &
                 0x8080808080808080;
      }
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000480,s_Built_in_provider_not_found_108ac6058,&stack0x000008a0);
    in_stack_00000488 = (code *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(0,&stack0x00000480);
    *puVar32 = 1;
    auVar43 = auVar44;
LAB_10085d380:
    *puVar21 = 1;
    goto LAB_10086155c;
  }
  goto LAB_10086161c;
  while( true ) {
    lVar10 = *(long *)(lVar23 + 8) + lVar10;
    pbVar30 = (byte *)(lVar10 + -1);
    uVar28 = (uint)(char)*pbVar30;
    if ((int)uVar28 < 0) {
      pbVar30 = (byte *)(lVar10 + -2);
      bVar29 = *pbVar30;
      if ((char)bVar29 < -0x40) {
        pbVar30 = (byte *)(lVar10 + -3);
        bVar40 = *pbVar30;
        if ((char)bVar40 < -0x40) {
          pbVar30 = (byte *)(lVar10 + -4);
          uVar31 = bVar40 & 0x3f | (*pbVar30 & 7) << 6;
        }
        else {
          uVar31 = (int)(char)bVar40 & 0xf;
        }
        uVar31 = bVar29 & 0x3f | uVar31 << 6;
      }
      else {
        uVar31 = (int)(char)bVar29 & 0x1f;
      }
      uVar28 = uVar28 & 0x3f | uVar31 << 6;
    }
    lVar10 = (long)pbVar30 - *(long *)(lVar23 + 8);
    if (uVar28 != 0x2f) break;
LAB_10085e0dc:
    if (lVar10 == 0) break;
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s__api_tags_108ac5f2f,&stack0x00000b90);
  FUN_1011d5524(&stack0x00000480,*(undefined8 *)(lVar23 + 0x18),&UNK_108ca1660,&stack0x00000990);
  if (pcVar46 == (code *)0x2) {
    auVar41._8_8_ = in_stack_00000488;
    auVar41._0_8_ = 1;
  }
  else {
    auVar41 = FUN_105c4eee0(in_stack_00000588,&stack0x00000480);
  }
  pcVar24 = auVar41._8_8_;
  puVar22 = auVar41._0_8_;
  lVar10 = *in_stack_00000588;
  *in_stack_00000588 = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000588);
  }
  *(undefined1 (*) [16])(unaff_x19 + 0x98) = auVar41;
  if (((ulong)puVar22 & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000480,pcVar24);
    if (pcVar46 != (code *)0x4) {
      uVar14 = *(undefined8 *)(unaff_x19 + 0x98);
      uVar19 = *(undefined8 *)(unaff_x19 + 0xa0);
      pcVar25 = pcVar46;
      pcVar24 = in_stack_00000488;
      goto LAB_10085e258;
    }
    uVar20 = 3;
LAB_10085e390:
    *(undefined1 *)(unaff_x19 + 0x91) = uVar20;
LAB_10085e394:
    uVar20 = 4;
LAB_10086154c:
    *puVar21 = uVar20;
    uVar20 = 5;
LAB_1008603a0:
    *(undefined1 *)(unaff_x19 + 0x20) = uVar20;
    uVar14 = 1;
    goto LAB_100861628;
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  if (pcVar24 == (code *)0x0) {
    FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
    goto LAB_100861774;
  }
  uVar19 = 0;
  uVar14 = 1;
  pcVar25 = (code *)0x3;
LAB_10085e258:
  in_stack_00000080 = in_stack_00000490;
  in_stack_00000088 = in_stack_00000498;
  in_stack_00000090 = in_stack_000004a0;
  in_stack_00000098 = in_stack_000004a8;
  in_stack_000000a0 = in_stack_000004b0;
  in_stack_000000a8 = in_stack_000004b8;
  in_stack_000000b0 = in_stack_000004c0;
  in_stack_000000b8 = in_stack_000004c8;
  in_stack_000000c0 = in_stack_000004d0;
  in_stack_000000c8 = in_stack_000004d8;
  in_stack_000000d0 = in_stack_000004e0;
  in_stack_000000d8 = in_stack_000004e8;
  in_stack_000000e0 = in_stack_000004f0;
  in_stack_000000e8 = in_stack_000004f8;
  in_stack_000000f0 = in_stack_00000500;
  FUN_100e03d7c(uVar14,uVar19);
  if (pcVar25 == (code *)0x3) {
    puVar15 = (undefined8 *)_malloc(8);
    if (puVar15 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100861774;
    }
    *puVar15 = pcVar24;
    uVar37 = func_0x000106029c30(0x28,puVar15,&UNK_10b21e380);
    pcVar46 = pcVar24;
LAB_10085e2c4:
    *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
    *(undefined8 *)(unaff_x19 + 0x68) = 0x8000000000000000;
    *(ulong *)(unaff_x19 + 0x70) = uVar37;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
LAB_10085e844:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62ee88 - 1 < 2 ||
         ((bRam000000010b62ee88 != 0 &&
          (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
                              ), cVar11 != '\0')))))) &&
       (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
                           ), (uVar13 & 1) != 0)) {
      in_stack_00000080 = (code *)&stack0x00000990;
      in_stack_00000088 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      in_stack_00000488 = (code *)&stack0x000008a0;
      pcVar46 = (code *)0x1;
      in_stack_00000490 = (code *)0x1;
      FUN_10074b674(&stack0x00000480);
    }
    else {
      uVar14 = 
      ___ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar22 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar22 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar22 + 0x18))(puVar2,&stack0x00000aa8);
        if (iVar12 != 0) {
          in_stack_00000080 = (code *)&stack0x00000990;
          in_stack_00000088 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          in_stack_00000488 = (code *)&stack0x000008a0;
          pcVar46 = (code *)0x1;
          in_stack_00000490 = (code *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar14,puVar2,puVar22,&stack0x00000aa8,&stack0x00000480);
        }
      }
    }
    auVar43._8_8_ = in_stack_00000488;
    auVar43._0_8_ = pcVar46;
    if ((uVar37 & 3) == 1) {
      puVar15 = (undefined8 *)(uVar37 - 1);
      uVar14 = *puVar15;
      puVar16 = *(undefined8 **)(uVar37 + 7);
      pcVar24 = (code *)*puVar16;
      if (pcVar24 != (code *)0x0) {
        (*pcVar24)(uVar14);
      }
      if (puVar16[1] != 0) {
        _free(uVar14);
      }
LAB_10086171c:
      _free(puVar15);
    }
  }
  else {
    *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_000000d0;
    *(code **)(unaff_x19 + 0xb0) = in_stack_00000088;
    *(code **)(unaff_x19 + 0xa8) = in_stack_00000080;
    *(code **)(unaff_x19 + 0xc0) = in_stack_00000098;
    *(code **)(unaff_x19 + 0xb8) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_000000a8;
    *(code **)(unaff_x19 + 200) = in_stack_000000a0;
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    *(code **)(unaff_x19 + 0x98) = pcVar25;
    *(code **)(unaff_x19 + 0xa0) = pcVar24;
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_000000f0;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x110) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x108) = in_stack_000000e0;
    if (*(ushort *)(unaff_x19 + 0x100) - 200 < 100) {
      *(undefined1 *)(unaff_x19 + 0x90) = 0;
      *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x19 + 0x110);
      *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x108);
      *(undefined8 *)(unaff_x19 + 0x1a0) = *(undefined8 *)(unaff_x19 + 0x118);
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xc0);
      *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xd0);
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 200);
      *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x19 + 0xf0);
      *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x98);
      *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xa8);
      *(undefined1 *)(unaff_x19 + 0x350) = 0;
      FUN_1011d682c(&stack0x00000480,unaff_x19 + 0x120);
      pcVar24 = pcVar46;
      if (pcVar46 == (code *)0x8000000000000006) {
        uVar20 = 4;
        goto LAB_10085e390;
      }
      FUN_100cfddd4(unaff_x19 + 0x120);
      if (pcVar46 == (code *)0x8000000000000005) {
        puVar15 = (undefined8 *)_malloc(8);
        if (puVar15 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100861774;
        }
        *puVar15 = in_stack_00000488;
        uVar37 = func_0x000106029c30(0x28,puVar15,&UNK_10b21e380);
        pcVar46 = in_stack_00000488;
        if ((*(byte *)(unaff_x19 + 0x90) & 1) == 0) goto LAB_10085e2c4;
        uVar14 = 0x8000000000000000;
        bVar9 = true;
        goto LAB_10085e824;
      }
      plVar35 = (long *)__ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
                                  (&UNK_108cac9a9,6,&stack0x00000b90);
      if ((plVar35 == (long *)0x0) || (*plVar35 != -0x7ffffffffffffffc)) {
        pcVar33 = (code *)0x0;
        pcVar25 = (code *)0x0;
        pcVar34 = (code *)0x8;
      }
      else {
        pcVar24 = (code *)plVar35[2];
        lVar10 = plVar35[3];
        lVar23 = lVar10 * 0x48;
        pcVar7 = pcVar24 + lVar10 * 0x48;
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          puVar22 = &UNK_108c61018;
          do {
            if (-1 < *(long *)pcVar24) {
              auVar43 = FUN_105dc9750(pcVar24,&UNK_108c61018,4);
              uVar37 = auVar43._8_8_;
              if ((auVar43._0_8_ & 1) != 0) {
                if (*(ulong *)(pcVar24 + 0x10) <= uVar37) {
                  FUN_107c05cd0(uVar37,*(ulong *)(pcVar24 + 0x10),&UNK_10b46a548);
                  goto LAB_100861774;
                }
                lVar38 = *(long *)(pcVar24 + 8) + uVar37 * 0x68;
                if (*(long *)(lVar38 + 0x18) == -0x7ffffffffffffffd) {
                  lVar10 = *(long *)(lVar38 + 0x28);
                  puVar22 = *(undefined **)(lVar38 + 0x30);
                  pcVar24 = pcVar24 + 0x48;
                  goto LAB_10085f264;
                }
              }
            }
            lVar23 = lVar23 + -0x48;
            pcVar24 = pcVar24 + 0x48;
          } while (lVar23 != 0);
          lVar10 = 0;
          pcVar24 = pcVar7;
        }
LAB_10085f264:
        if (lVar10 != 0) {
          if (puVar22 == (undefined *)0x0) {
            lVar23 = 1;
          }
          else {
            lVar23 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(puVar22,1);
            if (lVar23 == 0) {
              func_0x0001087c9084(1,puVar22);
              goto LAB_100861774;
            }
            _memcpy(lVar23,lVar10,puVar22);
            if (puVar22 == (undefined *)0x8000000000000000) goto LAB_10085f298;
          }
          pcVar34 = (code *)_malloc(0x60);
          if (pcVar34 != (code *)0x0) {
            *(undefined **)pcVar34 = puVar22;
            *(long *)(pcVar34 + 8) = lVar23;
            *(undefined **)(pcVar34 + 0x10) = puVar22;
            pcVar33 = (code *)0x4;
            pcVar25 = (code *)0x1;
            do {
              lVar10 = 0x68;
              do {
                do {
                  do {
                    pcVar46 = pcVar24;
                    if (pcVar46 == pcVar7) {
                      lVar38 = 0;
                      pcVar24 = pcVar7;
                      goto LAB_10085f4bc;
                    }
                    pcVar24 = pcVar46 + 0x48;
                  } while (*(long *)pcVar46 < 0);
                  auVar43 = FUN_105dc9750(pcVar46,&UNK_108c61018,4);
                  uVar37 = auVar43._8_8_;
                } while ((auVar43._0_8_ & 1) == 0);
                if (*(ulong *)(pcVar46 + 0x10) <= uVar37) {
                  FUN_107c05cd0(uVar37,*(ulong *)(pcVar46 + 0x10),&UNK_10b46a548);
                  goto LAB_100861774;
                }
                lVar23 = *(long *)(pcVar46 + 8) + uVar37 * 0x68;
              } while (*(long *)(lVar23 + 0x18) != -0x7ffffffffffffffd);
              lVar38 = *(long *)(lVar23 + 0x28);
              lVar10 = *(long *)(lVar23 + 0x30);
              pcVar24 = pcVar46 + 0x48;
LAB_10085f4bc:
              pcVar46 = pcVar33;
              in_stack_00000488 = pcVar34;
              in_stack_00000490 = pcVar25;
              if (lVar38 == 0) goto LAB_10085f548;
              if (lVar10 == 0) {
                lVar23 = 1;
              }
              else {
                lVar23 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar10,1);
                if (lVar23 == 0) {
                  func_0x0001087c9084(1,lVar10);
                  goto LAB_100861774;
                }
                _memcpy(lVar23,lVar38,lVar10);
                if (lVar10 == -0x8000000000000000) goto LAB_10085f548;
              }
              if (pcVar25 == (code *)0x4) {
                FUN_108855060(&stack0x00000480,4,1,8,0x18);
              }
              pcVar46 = pcVar34 + (long)pcVar25 * 0x18;
              *(long *)pcVar46 = lVar10;
              *(long *)(pcVar46 + 8) = lVar23;
              *(long *)(pcVar46 + 0x10) = lVar10;
              pcVar25 = pcVar25 + 1;
            } while( true );
          }
          func_0x0001087c9084(8,0x60);
          goto LAB_100861774;
        }
LAB_10085f298:
        pcVar33 = (code *)0x0;
        pcVar25 = (code *)0x0;
        pcVar34 = (code *)0x8;
      }
LAB_10085f548:
      FUN_100de6690(&stack0x00000b90);
      *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
      if (pcVar33 == (code *)0x8000000000000001) goto LAB_10085e394;
      *(code **)(unaff_x19 + 0x68) = pcVar33;
      *(code **)(unaff_x19 + 0x70) = pcVar34;
      *(code **)(unaff_x19 + 0x78) = pcVar25;
    }
    else {
      bVar9 = false;
      uVar14 = 0;
      uVar37 = 8;
LAB_10085e824:
      FUN_100e0d524(unaff_x19 + 0x98);
      *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
      *(undefined8 *)(unaff_x19 + 0x68) = uVar14;
      *(ulong *)(unaff_x19 + 0x70) = uVar37;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      if (bVar9) goto LAB_10085e844;
    }
    auVar43._8_8_ = in_stack_00000488;
    auVar43._0_8_ = pcVar46;
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x68);
    lVar10 = *(long *)(unaff_x19 + 0x98);
    if (lVar10 != 0) {
      puVar15 = *(undefined8 **)(unaff_x19 + 0x90);
      lVar38 = lVar10 * 0x18;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x30);
      lVar23 = *(long *)(unaff_x19 + 0x38);
      plVar35 = puVar15 + 2;
      do {
        if ((*plVar35 == lVar23) && (iVar12 = _memcmp(plVar35[-1],uVar14,lVar23), iVar12 == 0))
        goto LAB_1008616e8;
        plVar35 = plVar35 + 3;
        lVar38 = lVar38 + -0x18;
      } while (lVar38 != 0);
    }
    pcVar24 = (code *)(unaff_x19 + 0xa0);
    func_0x000104861724(pcVar24);
    *(long *)(unaff_x19 + 0xf8) = unaff_x19 + 0x40;
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x38);
    *(code **)(unaff_x19 + 0x110) = pcVar24;
    *(undefined **)(unaff_x19 + 0x118) = &UNK_10b220e90;
    puVar32 = (undefined1 *)(unaff_x19 + 0x140);
    *puVar32 = 0;
    *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0x38);
    *(code **)(unaff_x19 + 0x130) = pcVar24;
    *(undefined **)(unaff_x19 + 0x138) = &UNK_10b220e90;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s_Pulling_model_____108ac6033,&stack0x00000b90);
    in_stack_00000490 = in_stack_00000088;
    pcVar25 = in_stack_00000080;
    auVar5._8_8_ = in_stack_00000080;
    auVar5._0_8_ = 2;
    auVar4._8_8_ = in_stack_00000080;
    auVar4._0_8_ = 2;
    auVar43._8_8_ = in_stack_00000080;
    auVar43._0_8_ = 2;
    in_stack_00000488 =
         (code *)(*(code *)&
                           __ZN100__LT_codex_ollama__pull__CliProgressReporter_u20_as_u20_codex_ollama__pull__PullProgressReporter_GT_8on_event17h6c01a8f2159ee144E
                 )(pcVar24,&stack0x00000480);
    pcVar46 = in_stack_00000490;
    if (in_stack_00000488 == (code *)0x0) {
      if (pcVar25 != (code *)0x0) {
        _free(in_stack_00000490);
      }
      *(long *)(unaff_x19 + 0x148) = unaff_x19 + 0x40;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x120);
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x128);
      pcVar24 = (code *)(unaff_x19 + 0x1c8);
      *(undefined1 *)(unaff_x19 + 0x1c8) = 0;
      *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x120);
      *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0x128);
      lVar10 = *(long *)(unaff_x19 + 0x50);
      do {
        lVar23 = lVar10;
        if (lVar23 == 0) break;
        lVar10 = *(long *)(unaff_x19 + 0x48) + lVar23;
        pbVar30 = (byte *)(lVar10 + -1);
        uVar28 = (uint)(char)*pbVar30;
        if ((int)uVar28 < 0) {
          pbVar30 = (byte *)(lVar10 + -2);
          bVar29 = *pbVar30;
          if ((char)bVar29 < -0x40) {
            pbVar30 = (byte *)(lVar10 + -3);
            bVar40 = *pbVar30;
            if ((char)bVar40 < -0x40) {
              pbVar30 = (byte *)(lVar10 + -4);
              uVar31 = bVar40 & 0x3f | (*pbVar30 & 7) << 6;
            }
            else {
              uVar31 = (int)(char)bVar40 & 0xf;
            }
            uVar31 = bVar29 & 0x3f | uVar31 << 6;
          }
          else {
            uVar31 = (int)(char)bVar29 & 0x1f;
          }
          uVar28 = uVar28 & 0x3f | uVar31 << 6;
        }
        lVar10 = (long)pbVar30 - *(long *)(unaff_x19 + 0x48);
      } while (uVar28 == 0x2f);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000080,s__api_pull_108ac6009,&stack0x00000b90);
      FUN_1011d5524(&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x58),&UNK_108cab1d8,
                    &stack0x00000af0);
      pauVar18 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar18[1][0] == '\x01') {
        auVar44 = *pauVar18;
      }
      else {
        auVar44 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar18 + 8) = auVar44._8_8_;
        pauVar18[1][0] = 1;
      }
      *(long *)*pauVar18 = auVar44._0_8_ + 1;
      puVar17 = (undefined4 *)_malloc(5);
      if (puVar17 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,5);
        goto LAB_100861774;
      }
      *(undefined1 *)(puVar17 + 1) = 0x6c;
      *puVar17 = 0x65646f6d;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x160);
      lVar10 = *(long *)(unaff_x19 + 0x168);
      if (lVar10 == 0) {
        lVar38 = 1;
      }
      else {
        lVar38 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar10,1);
        if (lVar38 == 0) {
          func_0x0001087c9084(1,lVar10);
          goto LAB_100861774;
        }
      }
      _memcpy(lVar38,uVar14,lVar10);
      FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
      if (lVar23 != -0x7ffffffffffffffb) {
        FUN_100de6690(&stack0x00000d40);
      }
      puVar17 = (undefined4 *)_malloc(6);
      if (puVar17 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
        goto LAB_100861774;
      }
      *(undefined2 *)(puVar17 + 1) = 0x6d61;
      *puVar17 = 0x65727473;
      FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
      if (lVar23 != -0x7ffffffffffffffb) {
        FUN_100de6690(&stack0x00000d40);
      }
      *(undefined8 *)(unaff_x19 + 0x198) = 0;
      *(undefined8 *)(unaff_x19 + 400) = 0;
      *(long *)(unaff_x19 + 0x1a8) = auVar44._0_8_;
      *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
      *(long *)(unaff_x19 + 0x1b0) = auVar44._8_8_;
      *(undefined8 *)(unaff_x19 + 0x178) = 8;
      *(undefined8 *)(unaff_x19 + 0x170) = 0;
      *(undefined **)(unaff_x19 + 0x188) = &UNK_108c56c70;
      *(undefined8 *)(unaff_x19 + 0x180) = 0;
      FUN_1011d5a74(&stack0x00000b90,&stack0x00000080,unaff_x19 + 0x170);
      if (&stack0x00000000 == (undefined1 *)0xfffffffffffff672) {
        auVar42._8_8_ = &DAT_100c7b3a0;
        auVar42._0_8_ = 1;
      }
      else {
        auVar42 = FUN_105c4eee0(in_stack_00000c98,&stack0x00000b90);
      }
      in_stack_00000488 = auVar42._8_8_;
      lVar10 = *in_stack_00000c98;
      *in_stack_00000c98 = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(&stack0x00000c98);
      }
      *(undefined1 (*) [16])(unaff_x19 + 0x1b8) = auVar42;
      if ((auVar42._0_8_ & 1) != 0) {
        *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
        if (in_stack_00000488 == (code *)0x0) {
          FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
          goto LAB_100861774;
        }
        uVar19 = 0;
        uVar14 = 1;
        pcVar46 = (code *)0x3;
LAB_10085fa74:
        uVar6 = in_stack_000000e8;
        FUN_100e03d7c(uVar14,uVar19);
        if (pcVar46 == (code *)0x3) {
          in_stack_00000080 = in_stack_00000488;
          puVar15 = (undefined8 *)_malloc(8);
          if (puVar15 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
            goto LAB_100861774;
          }
          *puVar15 = in_stack_00000488;
          in_stack_00000488 = (code *)func_0x000106029c30(0x28,puVar15,&UNK_10b21e380);
          FUN_100de6690(unaff_x19 + 0x170);
        }
        else {
          FUN_100de6690(unaff_x19 + 0x170);
          if ((ushort)uVar6 - 200 < 100) {
            auVar43 = __ZN7reqwest10async_impl8response8Response12bytes_stream17h5a874101c98e8fa6E
                                (&stack0x00000b08);
            lVar10 = auVar43._8_8_;
            uVar37 = auVar43._0_8_;
            in_stack_00000090 = (code *)0x0;
            in_stack_00000098 = (code *)0x0;
            in_stack_00000080 = (code *)0x0;
            in_stack_00000088 = (code *)0x8;
            in_stack_00000490 = (code *)0x1;
            in_stack_00000488 = (code *)_malloc(0x1f8);
            if (in_stack_00000488 == (code *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1f8);
              goto LAB_100861774;
            }
            _memcpy(in_stack_00000488,&stack0x00000480,0x1f8);
            FUN_100e816dc(&stack0x00000080);
            *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
            *(code **)(unaff_x19 + 0x150) = in_stack_00000488;
            *(undefined **)(unaff_x19 + 0x158) = &UNK_10b220f28;
            while( true ) {
              *(undefined8 **)(unaff_x19 + 0x148) = (undefined8 *)(unaff_x19 + 0x150);
              (**(code **)(*(long *)(unaff_x19 + 0x158) + 0x18))
                        (&stack0x00000480,*(undefined8 *)(unaff_x19 + 0x150));
              if (uVar37 == 7) break;
              if (uVar37 == 6) {
                in_stack_00000488 = (code *)FUN_100c35750(&UNK_108caca7b,0x2f);
                pcVar24 = *(code **)(unaff_x19 + 0x150);
                puVar15 = *(undefined8 **)(unaff_x19 + 0x158);
                if ((code *)*puVar15 != (code *)0x0) {
                  (*(code *)*puVar15)(pcVar24);
                }
LAB_100861980:
                pcVar25 = (code *)puVar15[1];
                pcVar46 = pcVar24;
                auVar4 = auVar43;
                goto joined_r0x000100861984;
              }
              pcVar24 = (code *)&stack0x00000480;
              in_stack_00000488 =
                   (code *)(**(code **)(*(long *)(unaff_x19 + 0x138) + 0x18))
                                     (*(undefined8 *)(unaff_x19 + 0x130),&stack0x00000480);
              if (in_stack_00000488 != (code *)0x0) {
LAB_1008618a4:
                if (uVar37 != 5) {
LAB_100861938:
                  lVar23 = uVar37 - 2;
                  if (uVar37 < 2) {
                    lVar23 = 1;
                  }
                  if (lVar23 != 0) goto LAB_10086196c;
                }
                if (lVar10 != 0) {
                  _free(1);
                }
LAB_10086196c:
                pcVar24 = *(code **)(unaff_x19 + 0x150);
                puVar15 = *(undefined8 **)(unaff_x19 + 0x158);
                if ((code *)*puVar15 != (code *)0x0) {
                  (*(code *)*puVar15)(pcVar24);
                }
                goto LAB_100861980;
              }
              uVar13 = uVar37 - 2;
              if (uVar37 < 2) {
                uVar13 = 1;
              }
              if (1 < uVar13) {
                if (uVar13 == 2) goto LAB_1008618a4;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&stack0x00000080,s_Pull_failed__108ac6048,&stack0x000008a0);
                pcVar25 = in_stack_00000090;
                pcVar46 = in_stack_00000088;
                pcVar24 = in_stack_00000080;
                puVar15 = (undefined8 *)_malloc(0x18);
                if (puVar15 != (undefined8 *)0x0) {
                  *puVar15 = pcVar24;
                  puVar15[1] = pcVar46;
                  puVar15[2] = pcVar25;
                  in_stack_00000488 = (code *)func_0x000106029c30(0x28,puVar15,&UNK_10b209118);
                  if (lVar10 != 0) {
                    _free(1);
                  }
                  if (uVar37 != 5) goto LAB_100861938;
                  goto LAB_10086196c;
                }
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                goto LAB_100861774;
              }
              if (((uVar37 != 5) && (uVar13 == 0)) && (lVar10 != 0)) {
                _free(1);
              }
            }
            uVar20 = 4;
            goto LAB_100861864;
          }
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000080,s_failed_to_start_pull__HTTP_108ac6015,&stack0x00000b90);
          pcVar34 = in_stack_00000090;
          pcVar25 = in_stack_00000088;
          pcVar46 = in_stack_00000080;
          puVar15 = (undefined8 *)_malloc(0x18);
          if (puVar15 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100861774;
          }
          *puVar15 = pcVar46;
          puVar15[1] = pcVar25;
          puVar15[2] = pcVar34;
          in_stack_00000488 = (code *)func_0x000106029c30(0x28,puVar15,&UNK_10b209118);
          FUN_100e0d524(&stack0x00000b08);
        }
        *pcVar24 = (code)0x1;
        auVar43 = auVar5;
        goto LAB_100861990;
      }
      __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
                (&stack0x00000080,in_stack_00000488);
      if (in_stack_00000080 != (code *)0x4) {
        uVar14 = *(undefined8 *)(unaff_x19 + 0x1b8);
        uVar19 = *(undefined8 *)(unaff_x19 + 0x1c0);
        pcVar46 = in_stack_00000080;
        in_stack_00000488 = in_stack_00000088;
        goto LAB_10085fa74;
      }
      uVar20 = 3;
      *pcVar24 = (code)0x3;
LAB_100861864:
      *puVar32 = uVar20;
      bVar9 = true;
    }
    else {
joined_r0x000100861984:
      auVar43 = auVar4;
      if (pcVar25 != (code *)0x0) {
        _free(pcVar46);
      }
LAB_100861990:
      bVar9 = false;
      *puVar32 = 1;
    }
    if (bVar9) {
      uVar20 = 5;
      goto LAB_10086154c;
    }
    FUN_100cab938((long *)(unaff_x19 + 0xf8));
    lVar10 = *(long *)(unaff_x19 + 0xb8);
    if (lVar10 != 0) {
      lVar23 = *(long *)(unaff_x19 + 200);
      if (lVar23 != 0) {
        plVar35 = *(long **)(unaff_x19 + 0xb0);
        plVar36 = plVar35 + 1;
        lVar38 = *plVar35;
        uVar37 = CONCAT17(-(-1 < lVar38),
                          CONCAT16(-(-1 < (char)((ulong)lVar38 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar38 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar38 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar38 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar38
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar38 >> 8)),-(-1 < (char)lVar38)))))))) &
                 0x8080808080808080;
        do {
          while (uVar37 == 0) {
            lVar38 = *plVar36;
            plVar35 = plVar35 + -0x28;
            plVar36 = plVar36 + 1;
            uVar37 = CONCAT17(-(-1 < lVar38),
                              CONCAT16(-(-1 < (char)((ulong)lVar38 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar38 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar38 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar38 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar38 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar38 >> 8)),
                                                           -(-1 < (char)lVar38)))))))) &
                     0x8080808080808080;
          }
          uVar13 = (uVar37 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar37 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          iVar12 = (int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
          if (plVar35[(long)-iVar12 * 5 + -5] != 0) {
            _free(plVar35[(long)-iVar12 * 5 + -4]);
          }
          uVar37 = uVar37 - 1 & uVar37;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (lVar10 * 0x29 != -0x31) {
        _free(*(long *)(unaff_x19 + 0xb0) + lVar10 * -0x28 + -0x28);
      }
    }
    if (in_stack_00000488 != (code *)0x0) {
      lVar10 = *(long *)(unaff_x19 + 0x90);
      lVar23 = *(long *)(unaff_x19 + 0x98);
      if (lVar23 != 0) {
        puVar15 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        _free(lVar10);
      }
      lVar10 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_10085d380;
      _free(*(undefined8 *)(unaff_x19 + 0x48));
      *puVar21 = 1;
      goto LAB_10086155c;
    }
    puVar15 = *(undefined8 **)(unaff_x19 + 0x90);
    lVar10 = *(long *)(unaff_x19 + 0x98);
LAB_1008616e8:
    if (lVar10 != 0) {
      puVar16 = puVar15 + 1;
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (*(long *)(unaff_x19 + 0x88) != 0) goto LAB_10086171c;
  }
  lVar10 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  in_stack_00000488 = (code *)0x0;
  *puVar21 = 1;
LAB_10086155c:
  func_0x000100e48c8c(plVar39);
  if (in_stack_00000488 == (code *)0x0) {
    pcVar24 = (code *)0x0;
  }
  else {
    in_stack_00000080 = (code *)&stack0x00000b90;
    in_stack_00000088 =
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
    pauVar18 = (undefined1 (*) [16])_malloc(0x18);
    if (pauVar18 == (undefined1 (*) [16])0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100861774:
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x100861778);
      (*pcVar24)();
    }
    *pauVar18 = auVar43;
    *(code **)pauVar18[1] = in_stack_00000490;
    puVar15 = (undefined8 *)_malloc(0x18);
    if (puVar15 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100861774;
    }
    *puVar15 = pauVar18;
    puVar15[1] = &UNK_10b209118;
    *(undefined1 *)(puVar15 + 2) = 0x28;
    if (((ulong)in_stack_00000488 & 3) == 1) {
      uVar14 = *(undefined8 *)(in_stack_00000488 + -1);
      puVar16 = *(undefined8 **)(in_stack_00000488 + 7);
      pcVar24 = (code *)*puVar16;
      if (pcVar24 != (code *)0x0) {
        (*pcVar24)(uVar14);
      }
      if (puVar16[1] != 0) {
        _free(uVar14);
      }
      _free(in_stack_00000488 + -1);
    }
    pcVar24 = (code *)((long)puVar15 + 1);
  }
LAB_10086161c:
  uVar14 = 0;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
LAB_100861628:
  auVar45._8_8_ = pcVar24;
  auVar45._0_8_ = uVar14;
  return auVar45;
}

