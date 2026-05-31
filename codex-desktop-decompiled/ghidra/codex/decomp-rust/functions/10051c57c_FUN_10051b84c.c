
/* WARNING: Removing unreachable block (ram,0x00010051c448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051b84c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar13;
  long unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  char *in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000110;
  byte in_stack_00000290;
  long in_stack_00000708;
  undefined8 in_stack_00000710;
  byte in_stack_00000740;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (param_1 + 8,s__invalid_image_generation_payloa_108ac04c5,&stack0x00000708);
  *(long *)(unaff_x22 + 0x78) = in_stack_00000098;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000090;
  *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x270) = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x288) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x280) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x238) = in_stack_000000b8;
  *(undefined8 *)(unaff_x20 + 0x230) = in_stack_000000b0;
  *(undefined8 *)(unaff_x20 + 0x248) = in_stack_000000c8;
  *(undefined8 *)(unaff_x20 + 0x240) = in_stack_000000c0;
  *(undefined8 *)(unaff_x20 + 600) = in_stack_000000d8;
  *(undefined8 *)(unaff_x20 + 0x250) = in_stack_000000d0;
  *(undefined8 *)(unaff_x20 + 0x268) = in_stack_000000e8;
  *(undefined8 *)(unaff_x20 + 0x260) = in_stack_000000e0;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x218) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x210) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x228) = in_stack_000000a8;
  *(undefined8 *)(unaff_x20 + 0x220) = in_stack_000000a0;
  *(undefined1 *)(unaff_x19 + 0x5d) = 0;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x260);
  *(undefined8 *)(unaff_x20 + 0x438) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x430) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x448) = *(undefined8 *)(unaff_x20 + 0x278);
  *(undefined8 *)(unaff_x20 + 0x440) = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x458) = *(undefined8 *)(unaff_x20 + 0x288);
  *(undefined8 *)(unaff_x20 + 0x450) = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x418) = *(undefined8 *)(unaff_x20 + 0x248);
  *(undefined8 *)(unaff_x20 + 0x410) = *(undefined8 *)(unaff_x20 + 0x240);
  *(undefined8 *)(unaff_x20 + 0x428) = *(undefined8 *)(unaff_x20 + 600);
  *(undefined8 *)(unaff_x20 + 0x420) = *(undefined8 *)(unaff_x20 + 0x250);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x220);
  *(undefined8 *)(unaff_x20 + 0x3f8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x408) = *(undefined8 *)(unaff_x20 + 0x238);
  *(undefined8 *)(unaff_x20 + 0x400) = *(undefined8 *)(unaff_x20 + 0x230);
  *(undefined8 *)(unaff_x20 + 1000) = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x20 + 0x3e0) = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined1 *)((long)unaff_x19 + 0x2e9) = 1;
  unaff_x19[0x3c] = 0x800000000000000b;
  unaff_x19[0x3d] = in_stack_00000088;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x440);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x458);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x450);
  unaff_x19[0x4b] = *(undefined8 *)(unaff_x20 + 0x448);
  unaff_x19[0x4a] = uVar17;
  unaff_x19[0x4d] = uVar19;
  unaff_x19[0x4c] = uVar18;
  unaff_x19[0x4e] = in_stack_00000110;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x400);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x418);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x410);
  unaff_x19[0x43] = *(undefined8 *)(unaff_x20 + 0x408);
  unaff_x19[0x42] = uVar17;
  unaff_x19[0x45] = uVar19;
  unaff_x19[0x44] = uVar18;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x420);
  unaff_x19[0x47] = *(undefined8 *)(unaff_x20 + 0x428);
  unaff_x19[0x46] = uVar17;
  unaff_x19[0x49] = uVar14;
  unaff_x19[0x48] = uVar13;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x3e0);
  unaff_x19[0x3f] = *(undefined8 *)(unaff_x20 + 1000);
  unaff_x19[0x3e] = uVar13;
  unaff_x19[0x41] = uVar16;
  unaff_x19[0x40] = uVar15;
  FUN_100cc85fc(in_stack_00000058);
  if (unaff_x19[0x3c] == unaff_x28 + 0x15) {
    in_stack_00000088 = unaff_x19[0x3e];
    in_stack_00000080 = (char *)unaff_x19[0x3d];
    in_stack_00000090 = unaff_x19[0x3f];
    lVar12 = unaff_x19[0x38];
    if ((*(ulong *)(lVar12 + 0x60) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(lVar12 + 0x68));
      lVar12 = unaff_x19[0x38];
    }
    *(long *)(lVar12 + 0x68) = in_stack_00000088;
    *(char **)(lVar12 + 0x60) = in_stack_00000080;
    *(undefined8 *)(lVar12 + 0x70) = in_stack_00000090;
    __ZN10codex_core19stream_events_utils30image_generation_artifact_path17h36b4abb60c630bf6E
              (in_stack_00000058,*(long *)(unaff_x19[0x36] + 0x788) + 0x1c08,unaff_x19[0x3a],
               unaff_x19[0x3b],&UNK_108ca3190,10);
    in_stack_00000080 = *(char **)(in_stack_00000058 + 8);
    in_stack_00000088 = *(long *)(in_stack_00000058 + 0x10);
    if (in_stack_00000088 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *in_stack_00000080 == '/';
    }
    in_stack_00000090 = CONCAT71(in_stack_00000090._1_7_,6);
    in_stack_000000b8 = CONCAT62(CONCAT51(in_stack_000000b8._3_5_,bVar4),0x201);
    __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
              (&stack0x00000290,&stack0x00000080);
    if (in_stack_00000290 - 7 < 3) {
      auVar20 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&stack0x00000080);
      lVar12 = auVar20._8_8_;
      if (auVar20._0_8_ == 0) goto LAB_10051c204;
      if (lVar12 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar12);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar12);
          goto LAB_10051ca20;
        }
        _memcpy(lVar7,auVar20._0_8_,lVar12);
        if (lVar12 == -0x8000000000000000) goto LAB_10051c204;
      }
    }
    else {
LAB_10051c204:
      uVar13 = *(undefined8 *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c10);
      lVar12 = *(long *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c18);
      if (lVar12 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar12);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar12);
          goto LAB_10051ca20;
        }
      }
      _memcpy(lVar7,uVar13,lVar12);
    }
    unaff_x19[0x56] = lVar12;
    unaff_x19[0x57] = lVar7;
    unaff_x19[0x58] = lVar12;
    iVar6 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                      (&stack0x000006c0,&stack0x00000290);
    if (iVar6 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000730,&UNK_10b235000,&UNK_10b2346c0);
LAB_10051ca20:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10051ca24);
      (*pcVar3)();
    }
    iVar6 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                      (&stack0x00000708,&stack0x00000290);
    if (iVar6 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000730,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_10051ca20;
    }
    in_stack_000000a0 = 1;
    in_stack_00000098 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000080 = (char *)0x0;
    in_stack_00000088 = 1;
    in_stack_00000090 = 0;
    puVar8 = (undefined8 *)_malloc(9);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_107c03c64(1,9);
      goto LAB_10051ca20;
    }
    *(undefined1 *)(puVar8 + 1) = 0x72;
    *puVar8 = 0x65706f6c65766564;
    puVar9 = (undefined8 *)_malloc(0x20);
    if (puVar9 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      goto LAB_10051ca20;
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000740,&UNK_108d7e70f,&stack0x00000290);
    puVar9[2] = 1;
    puVar9[1] = 0;
    puVar9[3] = 0;
    *puVar9 = 0x8000000000000000;
    if (in_stack_00000098 != 0) {
      _free(in_stack_000000a0);
    }
    unaff_x19[0x59] = 2;
    unaff_x19[0x5a] = 9;
    unaff_x19[0x5b] = puVar8;
    unaff_x19[0x5d] = 1;
    unaff_x19[0x5c] = 9;
    unaff_x19[0x5e] = puVar9;
    unaff_x19[0x5f] = 1;
    unaff_x19[0x60] = 0x8000000000000000;
    *(undefined1 *)(unaff_x19 + 99) = 2;
    unaff_x19[0x72] = unaff_x19[0x36];
    unaff_x19[0x71] = unaff_x19[0x35];
    unaff_x19[0x73] = unaff_x19 + 0x59;
    unaff_x19[0x74] = 1;
    *(undefined1 *)(unaff_x19 + 0x79) = 0;
    iVar6 = FUN_1005af7fc(unaff_x19 + 0x71);
    if (iVar6 != 0) {
      *in_stack_00000060 = 0x800000000000000c;
      uVar11 = 5;
      goto LAB_10051c7f4;
    }
    func_0x000100d50dec(unaff_x19 + 0x71);
    FUN_100e02a24(unaff_x19 + 0x59);
    if (unaff_x19[0x56] != 0) {
      _free(unaff_x19[0x57]);
    }
    if (unaff_x19[0x53] != 0) {
      _free(unaff_x19[0x54]);
    }
  }
  else {
    in_stack_000000e8 = unaff_x19[0x49];
    in_stack_000000e0 = unaff_x19[0x48];
    uVar15 = unaff_x19[0x4a];
    uVar14 = unaff_x19[0x4d];
    uVar13 = unaff_x19[0x4c];
    *(undefined8 *)(unaff_x20 + 0x78) = unaff_x19[0x4b];
    *(undefined8 *)(unaff_x20 + 0x70) = uVar15;
    *(undefined8 *)(unaff_x20 + 0x88) = uVar14;
    *(undefined8 *)(unaff_x20 + 0x80) = uVar13;
    in_stack_00000110 = unaff_x19[0x4e];
    in_stack_000000a8 = unaff_x19[0x41];
    in_stack_000000a0 = unaff_x19[0x40];
    in_stack_000000b8 = unaff_x19[0x43];
    in_stack_000000b0 = unaff_x19[0x42];
    in_stack_000000c8 = unaff_x19[0x45];
    in_stack_000000c0 = unaff_x19[0x44];
    in_stack_000000d8 = unaff_x19[0x47];
    in_stack_000000d0 = unaff_x19[0x46];
    in_stack_00000088 = unaff_x19[0x3d];
    in_stack_00000080 = (char *)unaff_x19[0x3c];
    in_stack_00000098 = unaff_x19[0x3f];
    in_stack_00000090 = unaff_x19[0x3e];
    __ZN10codex_core19stream_events_utils30image_generation_artifact_path17h36b4abb60c630bf6E
              (&stack0x00000708,*(long *)(unaff_x19[0x36] + 0x788) + 0x1c08,unaff_x19[0x3a],
               unaff_x19[0x3b],*(undefined8 *)(unaff_x19[0x38] + 8),
               *(undefined8 *)(unaff_x19[0x38] + 0x10));
    __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
              (&stack0x00000740,&stack0x00000290);
    if (in_stack_00000740 - 7 < 3) {
      auVar20 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&stack0x00000290);
      lVar12 = auVar20._8_8_;
      if (auVar20._0_8_ == 0) goto LAB_10051c2b4;
      if (lVar12 != 0) {
        lVar7 = _malloc(lVar12);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar12);
          goto LAB_10051ca20;
        }
        _memcpy(lVar7,auVar20._0_8_,lVar12);
        if (lVar12 == -0x8000000000000000) goto LAB_10051c2b4;
        goto LAB_10051c528;
      }
      lVar7 = 1;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) goto LAB_10051c53c;
LAB_10051c64c:
      uVar13 = 
      ___ZN10codex_core19stream_events_utils29handle_non_tool_response_item28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89dfab668eec3993E
      ;
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
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004e8);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar13,puVar2,puVar1,&stack0x000004e8,&stack0x00000740);
        }
      }
    }
    else {
LAB_10051c2b4:
      uVar13 = *(undefined8 *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c10);
      lVar12 = *(long *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c18);
      if (lVar12 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar12);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar12);
          goto LAB_10051ca20;
        }
      }
      _memcpy(lVar7,uVar13,lVar12);
LAB_10051c528:
      if (3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_10051c64c;
LAB_10051c53c:
      if (((1 < bRam000000010b629d30 - 1) &&
          ((bRam000000010b629d30 == 0 ||
           (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN10codex_core19stream_events_utils29handle_non_tool_response_item28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89dfab668eec3993E
                              ), cVar5 == '\0')))) ||
         (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core19stream_events_utils29handle_non_tool_response_item28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89dfab668eec3993E
                             ), (uVar10 & 1) == 0)) goto LAB_10051c64c;
      FUN_10051d4f4(&stack0x00000740);
    }
    if (lVar12 != 0) {
      _free(lVar7);
    }
    if (in_stack_00000708 != 0) {
      _free(in_stack_00000710);
    }
    FUN_100df5738(&stack0x00000080);
  }
  if (unaff_x19[0x39] != 0) {
    _free(unaff_x19[0x3a]);
  }
  uVar13 = *unaff_x19;
  _memcpy(&stack0x00000518,unaff_x19 + 1,0x198);
  *in_stack_00000060 = uVar13;
  _memcpy(in_stack_00000060 + 1,&stack0x00000518,0x198);
  uVar11 = 1;
LAB_10051c7f4:
  *(undefined1 *)((long)unaff_x19 + 0x291) = uVar11;
  return;
}

