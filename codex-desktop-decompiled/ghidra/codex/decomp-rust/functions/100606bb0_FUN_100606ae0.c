
/* WARNING: Removing unreachable block (ram,0x0001006087c4) */
/* WARNING: Removing unreachable block (ram,0x0001006085e8) */
/* WARNING: Removing unreachable block (ram,0x00010060873c) */
/* WARNING: Removing unreachable block (ram,0x0001006086f4) */
/* WARNING: Removing unreachable block (ram,0x00010060a028) */
/* WARNING: Removing unreachable block (ram,0x00010060a074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100606ae0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  char *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  uint *unaff_x22;
  undefined8 uVar29;
  undefined1 *unaff_x23;
  undefined8 uVar30;
  undefined4 *unaff_x26;
  undefined1 *unaff_x27;
  char *unaff_x28;
  undefined8 uVar31;
  long *plVar32;
  long unaff_x29;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 uStack0000000000000050;
  long *plStack0000000000000058;
  char *pcStack0000000000000078;
  undefined1 *in_stack_00000090;
  char *in_stack_00000098;
  undefined1 *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined1 *in_stack_000000b0;
  undefined1 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_00001b08;
  undefined8 in_stack_00001b10;
  undefined8 in_stack_00001b18;
  undefined1 *in_stack_00004890;
  undefined8 *in_stack_00004898;
  undefined1 *in_stack_000048a0;
  byte in_stack_000051b8;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined *puVar44;
  undefined *in_stack_00006e18;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  byte in_stack_00007728;
  char *in_stack_00009370;
  undefined *in_stack_00009378;
  long in_stack_00009380;
  byte in_stack_00009588;
  undefined1 *in_stack_00009610;
  undefined8 *in_stack_00009618;
  undefined1 *in_stack_00009620;
  undefined8 in_stack_00009628;
  undefined8 in_stack_00009630;
  undefined8 in_stack_00009638;
  undefined8 in_stack_00009640;
  undefined8 in_stack_00009648;
  undefined8 in_stack_00009650;
  undefined8 in_stack_00009658;
  undefined8 in_stack_00009660;
  undefined8 in_stack_00009668;
  undefined8 in_stack_00009670;
  undefined8 in_stack_00009678;
  undefined8 in_stack_00009680;
  undefined8 in_stack_00009688;
  undefined8 in_stack_00009690;
  undefined8 in_stack_00009698;
  undefined8 in_stack_000096a0;
  undefined8 in_stack_000096a8;
  undefined8 in_stack_000096b0;
  undefined8 in_stack_000096b8;
  long in_stack_0000bb60;
  undefined8 in_stack_0000bb68;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s__108ac265a,&stack0x00006e00);
  puVar12 = (undefined8 *)_malloc(10);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_107c03c64(1,10);
    goto LAB_10060a08c;
  }
  *(undefined2 *)(puVar12 + 1) = 0x6365;
  *puVar12 = 0x78655f7865646f63;
  puVar41 = (undefined1 *)0xa;
  puVar43 = (undefined1 *)0xa;
  cVar10 = __ZN11codex_login4auth14default_client22set_default_originator17h6d68550bbaa50dadE
                     (&stack0x00006e00);
  if (cVar10 != '\x02') {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62c1f8 - 1 < 2 ||
         ((bRam000000010b62c1f8 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN10codex_exec8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1c239851e475cb0E
                              ), cVar10 != '\0')))) &&
        (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN10codex_exec8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1c239851e475cb0E
                            ), (uVar13 & 1) != 0)))) {
      in_stack_00009370 = s__Failed_to_set_codex_exec_origin_108ac265e;
      in_stack_00009378 = &stack0x00009610;
      unaff_x22 = (uint *)&stack0x00006e00;
      puVar41 = &stack0x00009370;
      puVar12 = (undefined8 *)&UNK_10b208fd0;
      puVar43 = &stack0x00004660;
      in_stack_00006e18 = &UNK_10b2191e0;
      in_stack_00004898 = (undefined8 *)&stack0x00006e00;
      in_stack_00004890 = (undefined1 *)0x1;
      in_stack_000048a0 = (undefined1 *)0x2;
      FUN_10060b040(&stack0x00004890);
      in_stack_00009610 = &stack0x000043e0;
      in_stack_00009618 = (undefined8 *)&DAT_1014a6acc;
    }
    else {
      lVar27 = 
      ___ZN10codex_exec8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1c239851e475cb0E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000a8 =
             *(undefined8 **)
              (
              ___ZN10codex_exec8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1c239851e475cb0E
              + 0x20);
        in_stack_000000b0 =
             *(undefined1 **)
              (
              ___ZN10codex_exec8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1c239851e475cb0E
              + 0x28);
        in_stack_000000a0 = (undefined1 *)0x2;
        puVar44 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar44 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar44 + 0x18))(puVar2,&stack0x000000a0);
        puVar23 = in_stack_000000b0;
        puVar1 = in_stack_000000a8;
        puVar42 = in_stack_000000a0;
        if (iVar11 != 0) {
          in_stack_00009370 = &stack0x000043e0;
          unaff_x22 = (uint *)&stack0x00006e00;
          in_stack_00009378 = &DAT_1014a6acc;
          puVar41 = &stack0x00004660;
          puVar12 = (undefined8 *)&UNK_10b208fd0;
          puVar43 = &stack0x00004328;
          in_stack_00006e18 = &UNK_10b2191e0;
          in_stack_00004898 = (undefined8 *)&stack0x00006e00;
          in_stack_00004890 = (undefined1 *)0x1;
          in_stack_000048a0 = (undefined1 *)0x2;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar27,puVar2,puVar44,&stack0x00009610,&stack0x00004890);
          in_stack_00009610 = puVar42;
          in_stack_00009618 = puVar1;
          in_stack_00009620 = puVar23;
        }
      }
    }
  }
  bVar9 = true;
  unaff_x27[0x230] = 1;
  *(undefined8 *)(unaff_x19 + 0x3f0) = *(undefined8 *)(unaff_x19 + 0x338);
  *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 800);
  *(undefined8 *)(unaff_x19 + 0x3d0) = *(undefined8 *)(unaff_x19 + 0x318);
  *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x19 + 0x330);
  *(undefined8 *)(unaff_x19 + 0x3e0) = *(undefined8 *)(unaff_x19 + 0x328);
  *(undefined8 *)(unaff_x19 + 0x398) = *(undefined8 *)(unaff_x19 + 0x2e0);
  *(undefined8 *)(unaff_x19 + 0x390) = *(undefined8 *)(unaff_x19 + 0x2d8);
  *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x2f0);
  *(undefined8 *)(unaff_x19 + 0x3a0) = *(undefined8 *)(unaff_x19 + 0x2e8);
  *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x300);
  *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x2f8);
  *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x310);
  *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 0x308);
  unaff_x27[0x211] = *(undefined1 *)(unaff_x19 + 0x340);
  *(undefined2 *)(unaff_x27 + 0x23b) = 0;
  uVar21 = *(undefined1 *)(unaff_x19 + 0x270);
  uVar7 = *(undefined2 *)(unaff_x19 + 0x271);
  uVar3 = *(undefined1 *)(unaff_x19 + 0x273);
  *(undefined2 *)(unaff_x27 + 0x212) = *(undefined2 *)(unaff_x19 + 0x341);
  uVar4 = *(undefined1 *)(unaff_x19 + 0x343);
  uVar5 = *(undefined1 *)(unaff_x19 + 0x344);
  bVar6 = *(byte *)(unaff_x19 + 0x345);
  cVar10 = *(char *)(unaff_x19 + 0x347);
  *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x19 + 0x2b0);
  *(undefined8 *)(unaff_x19 + 0x3f8) = *(undefined8 *)(unaff_x19 + 0x2a8);
  *(undefined8 *)(unaff_x19 + 0x408) = *(undefined8 *)(unaff_x19 + 0x2b8);
  unaff_x27[0x214] = *(undefined1 *)(unaff_x19 + 0x346);
  *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x2d0);
  *(undefined8 *)(unaff_x19 + 0x418) = *(undefined8 *)(unaff_x19 + 0x2c8);
  *(undefined8 *)(unaff_x19 + 0x410) = *(undefined8 *)(unaff_x19 + 0x2c0);
  *(undefined8 *)(unaff_x19 + 0x438) = *(undefined8 *)(unaff_x19 + 0x2a0);
  *(undefined8 *)(unaff_x19 + 0x430) = *(undefined8 *)(unaff_x19 + 0x298);
  *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x290);
  *unaff_x26 = 0;
  *(undefined8 *)(unaff_x19 + 0x450) = *(undefined8 *)(unaff_x19 + 0x288);
  *(undefined8 *)(unaff_x19 + 0x448) = *(undefined8 *)(unaff_x19 + 0x280);
  *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x278);
  *(undefined4 *)(unaff_x27 + 0x22c) = 0x1010101;
  *(undefined8 *)(unaff_x19 + 0x468) = unaff_x20[2];
  uVar18 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x460) = unaff_x20[1];
  *(undefined8 *)(unaff_x19 + 0x458) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x480) = *(undefined8 *)(unaff_x19 + 0x208);
  *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x19 + 0x200);
  *(undefined8 *)(unaff_x19 + 0x470) = *(undefined8 *)(unaff_x19 + 0x1f8);
  unaff_x27[0x215] = uVar21;
  *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x220);
  *(undefined8 *)(unaff_x19 + 0x490) = *(undefined8 *)(unaff_x19 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x488) = *(undefined8 *)(unaff_x19 + 0x210);
  *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x238);
  *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x230);
  *(undefined8 *)(unaff_x19 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x228);
  puVar1 = (undefined8 *)(unaff_x19 + 0x4b8);
  *(undefined8 *)(unaff_x19 + 0x4c8) = *(undefined8 *)(unaff_x19 + 0x250);
  *(undefined8 *)(unaff_x19 + 0x4c0) = *(undefined8 *)(unaff_x19 + 0x248);
  *puVar1 = *(undefined8 *)(unaff_x19 + 0x240);
  *(undefined2 *)(unaff_x27 + 0x216) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x4e0) = *(undefined8 *)(unaff_x19 + 0x268);
  *(undefined8 *)(unaff_x19 + 0x4d8) = *(undefined8 *)(unaff_x19 + 0x260);
  *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(unaff_x19 + 600);
  *(undefined4 *)(unaff_x27 + 0x21f) = 0x1010101;
  *(undefined8 *)(unaff_x19 + 0x4f8) = *(undefined8 *)(unaff_x19 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x4f0) = *(undefined8 *)(unaff_x19 + 0x1e8);
  *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0x1e0);
  if (cVar10 != '\0') {
    if (cVar10 == '\x02') {
      if (lRam000000010b63d170 != 0) {
        thunk_FUN_108a861ac(0x10b63d160,&stack0x00006e00);
      }
      unaff_x22 = (uint *)&stack0x00006e00;
      puVar41 = (undefined1 *)CONCAT71((int7)((ulong)puVar41 >> 8),1);
      if (lRam000000010b63d188 != 0) {
        thunk_FUN_108a861ac(0x10b63d178,&stack0x00006e00);
      }
      bVar9 = cRam000000010b63d182 != '\x02';
    }
    else {
      bVar9 = false;
    }
  }
  unaff_x27[0x218] = bVar9;
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&stack0x00004890,&UNK_108c530e0,8);
  if (in_stack_00004890 != (undefined1 *)0x8000000000000000) {
    func_0x0001055bf348(&stack0x00006e00,in_stack_00004898,in_stack_000048a0);
    if (in_stack_00004890 != (undefined1 *)0x0) {
      _free(*unaff_x22,in_stack_00004898);
    }
  }
  uVar21 = unaff_x27[0x218];
  func_0x0001039dd444(&stack0x00006e00);
  _memcpy(unaff_x19 + 0x500,&stack0x00006e00,0x6f8);
  *(undefined8 *)(unaff_x19 + 0xc00) = 0x200000000010101;
  uVar20 = 1;
  *(undefined2 *)(unaff_x19 + 0xc08) = 1;
  *(undefined1 *)(unaff_x19 + 0xc0a) = uVar21;
  *(undefined1 *)(unaff_x19 + 0xc0b) = 0;
  *(undefined8 *)(unaff_x19 + 0xbf8) = 0xffffffffffffffff;
  unaff_x27[0x21e] = 1;
  if ((bVar6 & 1) == 0) {
    if ((unaff_x27[0x216] & 1) != 0) {
      uVar20 = 2;
      goto LAB_100607f58;
    }
    unaff_x27[0x219] = uVar3;
  }
  else {
LAB_100607f58:
    unaff_x27[0x219] = uVar20;
  }
  __ZN15codex_utils_cli15config_override18CliConfigOverrides15parse_overrides17h351dec39422c5b34E
            (&stack0x00006e00,unaff_x19 + 0x440);
  if ((*unaff_x22 & 1) != 0) {
    __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
              (s_Error_parsing__c_overrides__108ac26ad,&stack0x00009610);
    __ZN3std7process4exit17h656c4fcb5bd11385E(1);
    goto LAB_10060a08c;
  }
  unaff_x27[0x21d] = 1;
  *(undefined1 **)(unaff_x19 + 0xc18) = puVar43;
  *(undefined8 **)(unaff_x19 + 0xc10) = puVar12;
  *(undefined **)(unaff_x19 + 0xc20) = in_stack_00006e18;
  if (*(long *)(unaff_x19 + 0x4d0) == -0x8000000000000000) {
    *(undefined8 *)(unaff_x19 + 0xc28) = 0x8000000000000000;
    unaff_x27[0x21c] = 1;
LAB_10060802c:
    __ZN3std3env11current_dir17he7f55ba519818f7aE(&stack0x00004890);
    if ((in_stack_00004890 == (undefined1 *)0x8000000000000000) ||
       (FUN_105561214(&stack0x00009610,&stack0x00006e00), puVar19 = in_stack_00009618,
       puVar42 = in_stack_00009610, puVar23 = in_stack_00009620,
       in_stack_00009610 == (undefined1 *)0x8000000000000000)) {
      pcVar16 = (char *)thunk_FUN_1088566c8();
      goto LAB_100609704;
    }
LAB_100609a24:
    *(undefined1 **)(unaff_x19 + 0xc40) = puVar42;
    *(undefined8 **)(unaff_x19 + 0xc48) = puVar19;
    *(undefined1 **)(unaff_x19 + 0xc50) = puVar23;
    __ZN20codex_utils_home_dir15find_codex_home17ha8ee33c3f4aa2fecE(&stack0x00006e00);
    uVar18 = 0x8000000000000000;
    if (in_stack_00004890 == (undefined1 *)0x8000000000000000) {
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Error_finding_codex_home__108ac268e,&stack0x00004890);
      __ZN3std7process4exit17h656c4fcb5bd11385E(1);
      goto LAB_10060a08c;
    }
    *(undefined1 **)(unaff_x19 + 0xc68) = in_stack_000048a0;
    *(undefined8 **)(unaff_x19 + 0xc60) = in_stack_00004898;
    *(undefined1 **)(unaff_x19 + 0xc58) = in_stack_00004890;
    if (*(long *)(unaff_x19 + 0x4b8) == -0x8000000000000000) {
      in_stack_000000d0 = 0x8000000000000000;
      uVar28 = 0x8000000000000000;
    }
    else {
      __ZN10codex_core6config30resolve_profile_v2_config_path17hd6c5a61388ad8826E
                (&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0xc60),
                 *(undefined8 *)(unaff_x19 + 0xc68),puVar1);
      uVar18 = *puVar1;
      uVar28 = in_stack_000000e0;
      in_stack_000048a0 = in_stack_000000d8;
    }
    unaff_x27[0x220] = 0;
    uVar24 = *(undefined8 *)(unaff_x19 + 0x4c0);
    uVar25 = *(undefined8 *)(unaff_x19 + 0x4c8);
    unaff_x27[0x21b] = 1;
    *(undefined8 *)(unaff_x19 + 0xc70) = in_stack_000000d0;
    *(undefined1 **)(unaff_x19 + 0xc78) = in_stack_000048a0;
    *(undefined8 *)(unaff_x19 + 0xc80) = uVar28;
    *(undefined8 *)(unaff_x19 + 0xc88) = uVar18;
    *(undefined8 *)(unaff_x19 + 0xc90) = uVar24;
    *(undefined8 *)(unaff_x19 + 0xc98) = uVar25;
    *(undefined8 *)(unaff_x19 + 0xca0) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0xcb8) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0xcd0) = 0x8000000000000000;
    *(undefined1 *)(unaff_x19 + 0xd18) = 0;
    *(undefined1 *)(unaff_x19 + 0xd19) = uVar4;
    *(undefined1 *)(unaff_x19 + 0xd1a) = uVar5;
    *(undefined8 *)(unaff_x19 + 0xce8) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0xd00) = 0x8000000000000000;
    uVar18 = *(undefined8 *)(unaff_x19 + 0xc60);
    uVar28 = *(undefined8 *)(unaff_x19 + 0xc68);
    func_0x0001013edc8c(&stack0x00009370,*(undefined8 *)(unaff_x19 + 0xc18),
                        *(undefined8 *)(unaff_x19 + 0xc20));
    FUN_1011b4ddc(&stack0x00009610,unaff_x19 + 0xc70);
    *(undefined8 *)(unaff_x19 + 0x4f28) = in_stack_00009690;
    *(undefined8 *)(unaff_x19 + 0x4f20) = in_stack_00009688;
    *(undefined8 *)(unaff_x19 + 0x4f38) = in_stack_000096a0;
    *(undefined8 *)(unaff_x19 + 0x4f30) = in_stack_00009698;
    *(undefined8 *)(unaff_x19 + 0x4f48) = in_stack_000096b0;
    *(undefined8 *)(unaff_x19 + 0x4f40) = in_stack_000096a8;
    *(undefined8 *)(unaff_x19 + 0x4ee8) = in_stack_00009650;
    *(undefined8 *)(unaff_x19 + 0x4ee0) = in_stack_00009648;
    *(undefined8 *)(unaff_x19 + 0x4ef8) = in_stack_00009660;
    *(undefined8 *)(unaff_x19 + 0x4ef0) = in_stack_00009658;
    *(undefined8 *)(unaff_x19 + 0x4f08) = in_stack_00009670;
    *(undefined8 *)(unaff_x19 + 0x4f00) = in_stack_00009668;
    *(undefined8 *)(unaff_x19 + 0x4f18) = in_stack_00009680;
    *(undefined8 *)(unaff_x19 + 0x4f10) = in_stack_00009678;
    *(undefined1 **)(unaff_x19 + 0x4ea8) = in_stack_00009610;
    *(long *)(unaff_x19 + 0x4ea0) = in_stack_00009380;
    *(undefined1 **)(unaff_x19 + 0x4eb8) = in_stack_00009620;
    *(undefined8 **)(unaff_x19 + 0x4eb0) = in_stack_00009618;
    *(undefined8 *)(unaff_x19 + 0x4ec8) = in_stack_00009630;
    *(undefined8 *)(unaff_x19 + 0x4ec0) = in_stack_00009628;
    uVar21 = unaff_x27[0x211];
    *(undefined8 *)(unaff_x19 + 0x4f50) = in_stack_000096b8;
    *(undefined8 *)(unaff_x19 + 0x4ed8) = in_stack_00009640;
    *(undefined8 *)(unaff_x19 + 0x4ed0) = in_stack_00009638;
    *(undefined **)(unaff_x19 + 0x4e98) = in_stack_00009378;
    *(char **)(unaff_x19 + 0x4e90) = in_stack_00009370;
    unaff_x27[0x308] = uVar21;
    *(undefined8 *)(unaff_x19 + 0x4f60) = uVar18;
    *(undefined8 *)(unaff_x19 + 0x4f68) = uVar28;
    *(long *)(unaff_x19 + 0x4f70) = unaff_x19 + 0xc40;
    *unaff_x23 = 0;
    FUN_1005615c4(&stack0x00006e00,unaff_x19 + 0x4e90,unaff_x28);
    pcVar16 = in_stack_00009370;
    if (in_stack_00009370 == (char *)0x3) {
      uVar21 = 3;
      goto LAB_10060895c;
    }
    _memcpy(&stack0x000000e8,&stack0x00006e10,0x1a20);
    FUN_100d65a40(unaff_x19 + 0x4e90);
    if (in_stack_00009370 == (char *)0x2) {
      if (((ulong)in_stack_00009378 & 3) == 1) {
        (**(code **)(*(long *)(in_stack_00009378 + 7) + 0x38))
                  (&stack0x00006e00,*(undefined8 *)(in_stack_00009378 + -1));
      }
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Error_loading_config_toml__108ac26ee,&stack0x00006e00);
      __ZN3std7process4exit17h656c4fcb5bd11385E(1);
      goto LAB_10060a08c;
    }
    *(char **)(unaff_x19 + 0xd20) = in_stack_00009370;
    *(undefined **)(unaff_x19 + 0xd28) = in_stack_00009378;
    _memcpy(unaff_x19 + 0xd30,&stack0x000000e8,0x1a20);
    if (*(long *)(unaff_x19 + 0x21f0) == -0x8000000000000000) {
LAB_100606d48:
      pcStack0000000000000078 = (char *)_malloc(0x20);
      if (pcStack0000000000000078 == (char *)0x0) {
        FUN_107c03c64(1,0x20);
        goto LAB_10060a08c;
      }
      builtin_strncpy(pcStack0000000000000078,"https://chatgpt.com/backend-api/",0x20);
      lVar27 = 0x20;
LAB_100606d68:
      unaff_x27[0x236] = 1;
      uVar18 = *(undefined8 *)(unaff_x19 + 0xc60);
      lVar26 = *(long *)(unaff_x19 + 0xc68);
    }
    else {
      lVar27 = *(long *)(unaff_x19 + 0x2200);
      if (lVar27 != 0) {
        uVar18 = *(undefined8 *)(unaff_x19 + 0x21f8);
        pcStack0000000000000078 = (char *)_malloc(lVar27);
        if (pcStack0000000000000078 == (char *)0x0) {
          FUN_107c03c64(1,lVar27);
          goto LAB_10060a08c;
        }
        _memcpy(pcStack0000000000000078,uVar18,lVar27);
        pcVar16 = pcStack0000000000000078;
        if (lVar27 == -0x8000000000000000) goto LAB_100606d48;
        goto LAB_100606d68;
      }
      pcStack0000000000000078 = (char *)0x1;
      unaff_x27[0x236] = 1;
      uVar18 = *(undefined8 *)(unaff_x19 + 0xc60);
      lVar26 = *(long *)(unaff_x19 + 0xc68);
    }
    lVar14 = 1;
    if ((lVar26 != 0) && (lVar14 = _malloc(lVar26), lVar14 == 0)) {
      FUN_107c03c64(1,lVar26);
      goto LAB_10060a08c;
    }
    _memcpy(lVar14,uVar18,lVar26);
    cVar10 = '\0';
    if (*in_stack_00000098 != '\x04') {
      cVar10 = *in_stack_00000098;
    }
    unaff_x27[0x236] = 0;
    *(long *)(unaff_x19 + 0x4e90) = lVar26;
    *(long *)(unaff_x19 + 0x4e98) = lVar14;
    *(long *)(unaff_x19 + 0x4ea0) = lVar26;
    *(long *)(unaff_x19 + 0x4ea8) = lVar27;
    *(char **)(unaff_x19 + 0x4eb0) = pcStack0000000000000078;
    *(long *)(unaff_x19 + 0x4eb8) = lVar27;
    unaff_x27[0xe40] = 0;
    unaff_x27[0xe41] = cVar10;
    unaff_x27[0xe42] = 0;
    FUN_100bb1270(&stack0x00006e00,unaff_x19 + 0x4e90,unaff_x28);
    if ((uint)in_stack_00009370 == 1) {
      uVar21 = 4;
      goto LAB_10060895c;
    }
    unaff_x27[0x21a] = 1;
    *(undefined **)(unaff_x19 + 0x2750) = in_stack_00009378;
    *(long *)(unaff_x19 + 0x2758) = in_stack_00009380;
    FUN_100ccdb04(unaff_x19 + 0x4e90);
    func_0x0001013edc8c(unaff_x19 + 0x2760,*(undefined8 *)(unaff_x19 + 0xc18),
                        *(undefined8 *)(unaff_x19 + 0xc20));
    unaff_x27[0x22b] = 1;
    FUN_1011b4ddc(unaff_x19 + 0x2778,unaff_x19 + 0xc70);
    unaff_x27[0x22a] = 1;
    plVar22 = *(long **)(unaff_x19 + 0x2750);
    if ((plVar22 != (long *)0x0) && (lVar27 = *plVar22, *plVar22 = lVar27 + 1, lVar27 < 0))
    goto LAB_10060a08c;
    *(long **)(unaff_x19 + 0x2828) = plVar22;
    *(undefined8 *)(unaff_x19 + 0x2830) = 0xffffffffffffffff;
    unaff_x27[0x229] = 1;
    puVar44 = in_stack_00009378;
    if ((unaff_x27[0x215] & 1) != 0) {
      uVar28 = *(undefined8 *)(unaff_x19 + 0x498);
      uVar18 = 0;
      if (*(long *)(unaff_x19 + 0x488) != -0x8000000000000000) {
        uVar18 = *(undefined8 *)(unaff_x19 + 0x490);
      }
      if (*(long *)(unaff_x19 + 0x4a0) != -0x8000000000000000) {
        uVar24 = *(undefined8 *)(unaff_x19 + 0x4a8);
        in_stack_00009380 = *(long *)(unaff_x19 + 0x4b0);
        if (in_stack_00009380 == 0) {
          puVar44 = (undefined *)0x1;
        }
        else {
          puVar44 = (undefined *)_malloc(in_stack_00009380);
          if (puVar44 == (undefined *)0x0) {
            FUN_107c03c64(1,in_stack_00009380);
            goto LAB_10060a08c;
          }
        }
        _memcpy(puVar44,uVar24,in_stack_00009380);
      }
      __ZN10codex_core6config20resolve_oss_provider17h7fd8bceed12599ffE
                (&stack0x00001b08,uVar18,uVar28,unaff_x19 + 0xd20,&stack0x00006e00);
      if (in_stack_00001b08 != -0x8000000000000000) {
        unaff_x27[0x228] = 1;
        *(undefined8 *)(unaff_x19 + 0x2840) = in_stack_00001b10;
        *(long *)(unaff_x19 + 0x2838) = in_stack_00001b08;
        *(undefined8 *)(unaff_x19 + 0x2848) = in_stack_00001b18;
        lVar27 = *(long *)(unaff_x19 + 0x470);
        goto joined_r0x0001006081cc;
      }
      pcVar16 = (char *)thunk_FUN_108858fa8(s_aNo_default_OSS_provider_configu_108ac270e,
                                            &stack0x00006e00);
LAB_100609678:
      unaff_x27[0x228] = 0;
      FUN_100dd8a98(unaff_x19 + 0x2828);
      unaff_x27[0x229] = 0;
      FUN_100e01cdc(unaff_x19 + 0x2778);
      unaff_x27[0x22a] = 0;
      FUN_100e76384(unaff_x19 + 0x2760);
      unaff_x27[0x22b] = 0;
      if ((unaff_x27[0x21a] & 1) != 0) {
        FUN_100dd8a98(unaff_x19 + 0x2750);
      }
      unaff_x27[0x21a] = 0;
      unaff_x27[0x236] = 0;
      FUN_100e04ad4(unaff_x19 + 0xd20);
      if ((unaff_x27[0x21b] & 1) != 0) {
        FUN_100e01cdc(unaff_x19 + 0xc70);
      }
      unaff_x27[0x21b] = 0;
      if (*(long *)(unaff_x19 + 0xc58) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0xc60));
      }
      if (*(long *)(unaff_x19 + 0xc40) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0xc48));
      }
      goto LAB_100609704;
    }
    unaff_x27[0x228] = 1;
    *(undefined8 *)(unaff_x19 + 0x2838) = 0x8000000000000000;
    lVar27 = *(long *)(unaff_x19 + 0x470);
joined_r0x0001006081cc:
    if (lVar27 == -0x8000000000000000) {
      if ((unaff_x27[0x215] & 1) != 0) {
        lVar27 = 0;
        if (*(long *)(unaff_x19 + 0x2838) != -0x8000000000000000) {
          lVar27 = unaff_x19 + 0x2838;
        }
        auVar40 = FUN_100e9d3e0(lVar27);
        FUN_100e9cef0(&stack0x00001b20,auVar40._0_8_,auVar40._8_8_);
      }
    }
    else {
      unaff_x27[0x222] = 0;
    }
    unaff_x27[0x221] = 0;
    uStack0000000000000050 = *(undefined8 *)(unaff_x19 + 0x4a8);
    unaff_x27[0x21c] = 0;
    if (*(long *)(unaff_x19 + 0x2838) == -0x8000000000000000) {
      plStack0000000000000058 = (long *)0x8000000000000000;
      if (*(long *)(unaff_x19 + 0x348) != -0x8000000000000000) goto LAB_1006082d8;
LAB_10060825c:
      if (*(long *)(unaff_x19 + 0x360) != -0x8000000000000000) goto LAB_10060832c;
LAB_100608270:
      lVar27 = *(long *)(unaff_x19 + 0x378);
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2840);
      plStack0000000000000058 = *(long **)(unaff_x19 + 0x2848);
      if (plStack0000000000000058 == (long *)0x0) {
        lVar27 = 1;
      }
      else {
        lVar27 = _malloc(plStack0000000000000058);
        if (lVar27 == 0) {
          FUN_107c03c64(1,plStack0000000000000058);
          goto LAB_10060a08c;
        }
      }
      _memcpy(lVar27,uVar18,plStack0000000000000058);
      if (*(long *)(unaff_x19 + 0x348) == -0x8000000000000000) goto LAB_10060825c;
LAB_1006082d8:
      uVar18 = *(undefined8 *)(unaff_x19 + 0x350);
      lVar27 = *(long *)(unaff_x19 + 0x358);
      if (lVar27 == 0) {
        lVar26 = 1;
      }
      else {
        lVar26 = _malloc(lVar27);
        if (lVar26 == 0) {
          FUN_107c03c64(1,lVar27);
          goto LAB_10060a08c;
        }
      }
      _memcpy(lVar26,uVar18,lVar27);
      if (*(long *)(unaff_x19 + 0x360) == -0x8000000000000000) goto LAB_100608270;
LAB_10060832c:
      uVar18 = *(undefined8 *)(unaff_x19 + 0x368);
      lVar27 = *(long *)(unaff_x19 + 0x370);
      if (lVar27 == 0) {
        lVar26 = 1;
      }
      else {
        lVar26 = _malloc(lVar27);
        if (lVar26 == 0) {
          FUN_107c03c64(1,lVar27);
          goto LAB_10060a08c;
        }
      }
      _memcpy(lVar26,uVar18,lVar27);
      lVar27 = *(long *)(unaff_x19 + 0x378);
    }
    if (lVar27 != -0x8000000000000000) {
      uVar18 = *(undefined8 *)(unaff_x19 + 0x380);
      lVar27 = *(long *)(unaff_x19 + 0x388);
      if (lVar27 == 0) {
        lVar26 = 1;
      }
      else {
        lVar26 = _malloc(lVar27);
        if (lVar26 == 0) {
          FUN_107c03c64(1,lVar27);
          goto LAB_10060a08c;
        }
      }
      _memcpy(lVar26,uVar18,lVar27);
    }
    unaff_x27[0x21f] = 0;
    unaff_x27[0x235] = 1;
    __ZN100__LT_codex_config__cloud_requirements__CloudRequirementsLoader_u20_as_u20_core__default__Default_GT_7default17h140615628771f262E
              ();
    unaff_x27[0x21d] = 0;
    unaff_x27[0x235] = 0;
    _memcpy(&stack0x00009370,&stack0x00001b40,0x1b8);
    _memcpy(&stack0x00006e30,&stack0x00009370,0x1b8);
    unaff_x27[0x21b] = 0;
    _memcpy(&stack0x00009610,&stack0x00006e00,0x2d0);
    unaff_x27[0x21a] = 0;
    FUN_103379894(&stack0x000098c0);
    _memcpy(&stack0x00004890,&stack0x00009610,0x2d8);
    _memcpy(unaff_x19 + 0x4e90,&stack0x00004890,0x2e0);
    unaff_x27[0x520] = 0;
    FUN_10055d518(&stack0x00006e00,unaff_x19 + 0x4e90,unaff_x28);
    _memcpy(&stack0x00001cf8,&stack0x00006e10,0x2538);
    if (unaff_x27[0x520] == '\x03') {
      uVar18 = *(undefined8 *)(unaff_x19 + 0x5168);
      FUN_100e7de2c(uVar18);
      _free(uVar18);
    }
    else if (unaff_x27[0x520] == '\0') {
      FUN_100df9554(unaff_x19 + 0x4e90);
    }
    unaff_x27[0x227] = 1;
    *(undefined8 *)(unaff_x19 + 0x2850) = 0x8000000000000000;
    *(undefined **)(unaff_x19 + 0x2858) = puVar44;
    _memcpy(unaff_x19 + 0x2860,&stack0x00001cf8,0x2538);
    *(long *)(unaff_x19 + 0x4e90) = unaff_x19 + 0x2850;
    unaff_x27[0x450] = 0;
    func_0x0001004eedb8(&stack0x00006e00,unaff_x19 + 0x4e90,unaff_x28);
    if ((unaff_x27[0x450] == '\x03') && (unaff_x27[0x448] == '\x03')) {
      FUN_100e6ae88(unaff_x19 + 0x4ea0);
    }
    if (puVar44 != (undefined *)0x9) {
      __ZN10codex_core11exec_policy36format_exec_policy_error_with_source17h2aded56d5eca2b76E
                (&stack0x00004890,&stack0x00006e00);
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Error_loading_rules__108ac2786,&stack0x00009610);
      _free(in_stack_00009378);
      __ZN3std7process4exit17h656c4fcb5bd11385E(1);
      goto LAB_10060a08c;
    }
    __ZN11codex_login4auth14default_client40set_default_client_residency_requirement17h4620080bb8df219dE
              (*unaff_x27);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x4450);
    lVar27 = *(long *)(unaff_x19 + 0x4458);
    if (lVar27 == 0) {
      lVar26 = 1;
    }
    else {
      lVar26 = _malloc(lVar27);
      if (lVar26 == 0) {
        FUN_107c03c64(1,lVar27);
        goto LAB_10060a08c;
      }
    }
    _memcpy(lVar26,uVar18,lVar27);
    uVar21 = unaff_x27[0x13f];
    uVar3 = unaff_x27[0x13b];
    if (*(long *)(unaff_x19 + 0x4a60) != -0x8000000000000000) {
      FUN_101146714(&stack0x00006e00,*(undefined8 *)(unaff_x19 + 0x4a68),
                    *(undefined8 *)(unaff_x19 + 0x4a70));
    }
    uVar18 = *(undefined8 *)(unaff_x19 + 0x4498);
    lVar14 = *(long *)(unaff_x19 + 0x44a0);
    if (lVar14 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = _malloc(lVar14);
      if (lVar17 == 0) {
        FUN_107c03c64(1,lVar14);
        goto LAB_10060a08c;
      }
    }
    _memcpy(lVar17,uVar18,lVar14);
    *(long *)(unaff_x19 + 0x59a8) = lVar27;
    *(long *)(unaff_x19 + 0x59b0) = lVar26;
    *(long *)(unaff_x19 + 0x59b8) = lVar27;
    unaff_x27[0xda1] = uVar21;
    unaff_x27[0xda0] = uVar3;
    *(long *)(unaff_x19 + 0x59c0) = lVar14;
    *(long *)(unaff_x19 + 0x59c8) = lVar17;
    *(long *)(unaff_x19 + 0x59d0) = lVar14;
    *(undefined8 *)(unaff_x19 + 0x59e0) = 9;
    *(undefined8 *)(unaff_x19 + 23000) = 0x8000000000000000;
    *(long *)(unaff_x19 + 0x59e8) = in_stack_00009380;
    *(long *)(unaff_x19 + 0x4e90) = unaff_x19 + 0x59a8;
    unaff_x27[0xd50] = 0;
    pcVar16 = &stack0x00009370;
    auVar40 = FUN_1006df03c(unaff_x19 + 0x4e90,unaff_x28);
    if ((auVar40._0_8_ & 1) != 0) {
      uVar21 = 7;
      goto LAB_10060895c;
    }
    if (unaff_x27[0xd50] == '\x03') {
      FUN_100e5e3e0(unaff_x19 + 0x4ea0);
    }
    if (auVar40._8_8_ != 0) {
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s__108ac265a,&stack0x00006e00);
      __ZN3std7process4exit17h656c4fcb5bd11385E(1);
      goto LAB_10060a08c;
    }
    if (*(long *)(unaff_x19 + 0x59a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x59b0));
    }
    if ((*(long *)(unaff_x19 + 0x59c0) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x59c0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x59c8));
    }
    lVar27 = *(long *)(unaff_x19 + 23000);
    if (lVar27 != -0x8000000000000000) {
      lVar14 = *(long *)(unaff_x19 + 0x59e0);
      lVar26 = *(long *)(unaff_x19 + 0x59e8);
      if (lVar26 != 0) {
        puVar12 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      if (lVar27 != 0) {
        _free(lVar14);
      }
    }
    __ZN10codex_core9otel_init14build_provider17h94dafb1f6dca3a9eE
              (unaff_x29 + -0xe0,unaff_x19 + 0x2850,&UNK_108ca5cab,7,0);
    uVar25 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar18 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar35 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar34 = *(undefined8 *)(unaff_x29 + -0x80);
    uVar33 = *(undefined8 *)(unaff_x29 + -0x68);
    uVar28 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar45 = *(undefined8 *)(unaff_x29 + -200);
    puVar12 = *(undefined8 **)(unaff_x29 + -0xd0);
    uVar47 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar46 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar37 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar48 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar49 = *(undefined8 *)(unaff_x29 + -0x98);
    uVar24 = *(undefined8 *)(unaff_x29 + -0xa0);
    if (in_stack_0000bb60 == -0x7ffffffffffffffe) {
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Could_not_create_otel_exporter__108ac27a0,&stack0x00004890);
      *(undefined8 *)(unaff_x19 + 0x4d98) = 0x8000000000000001;
      if ((code *)*puVar12 != (code *)0x0) {
        (*(code *)*puVar12)(in_stack_0000bb68);
      }
      if (puVar12[1] != 0) {
        _free(in_stack_0000bb68);
      }
    }
    else if (in_stack_0000bb60 == -0x7ffffffffffffffd) {
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(&UNK_108ca7554,0x7f);
      *(undefined8 *)(unaff_x19 + 0x4d98) = 0x8000000000000001;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x4de0) = uVar49;
      *(undefined8 *)(unaff_x19 + 0x4dd8) = uVar24;
      *(undefined8 *)(unaff_x19 + 0x4df0) = uVar25;
      *(undefined8 *)(unaff_x19 + 0x4de8) = uVar18;
      *(undefined8 *)(unaff_x19 + 0x4e00) = uVar35;
      *(undefined8 *)(unaff_x19 + 0x4df8) = uVar34;
      *(undefined8 *)(unaff_x19 + 0x4e10) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x4e08) = uVar28;
      *(undefined8 *)(unaff_x19 + 0x4da0) = in_stack_0000bb68;
      *(long *)(unaff_x19 + 0x4d98) = in_stack_0000bb60;
      *(undefined8 *)(unaff_x19 + 0x4db0) = uVar45;
      *(undefined8 **)(unaff_x19 + 0x4da8) = puVar12;
      *(undefined8 *)(unaff_x19 + 0x4dc0) = uVar47;
      *(undefined8 *)(unaff_x19 + 0x4db8) = uVar46;
      *(undefined8 *)(unaff_x19 + 0x4dd0) = uVar37;
      *(undefined8 *)(unaff_x19 + 0x4dc8) = uVar48;
    }
    if (in_stack_0000bb60 == -0x7ffffffffffffffd) {
      FUN_100db50cc(&stack0x00006e00);
    }
    lVar27 = *(long *)(unaff_x19 + 0x4d98);
    if (lVar27 == -0x7fffffffffffffff) {
LAB_100608c9c:
      lVar26 = 7;
      unaff_x27[0x234] = 1;
LAB_100608cb0:
      lVar27 = 7;
    }
    else {
      if (*(long *)(unaff_x19 + 0x4e10) != 0) {
        if (cRam000000010b66da58 == '\0') {
          cRam000000010b66da58 = '\x01';
          __ZN10codex_otel7metrics4tags28bounded_originator_tag_value17h5f91266f84828ca0E
                    (&UNK_108ca7544,10);
          __ZN10codex_otel7metrics6client13MetricsClient7counter17h17eba62d7595813aE
                    (&stack0x00006e00,unaff_x19 + 0x4e10,&UNK_108e4f5aa,0x13,1,&stack0x00009610,1);
          if ((in_stack_0000bb60 != 0xb) && (in_stack_0000bb60 != 0xb)) {
            FUN_1033a1e7c(&stack0x00004890);
          }
        }
        lVar27 = *(long *)(unaff_x19 + 0x4d98);
        if (lVar27 == -0x7fffffffffffffff) goto LAB_100608c9c;
        plVar22 = *(long **)(unaff_x19 + 0x4e10);
        if (plVar22 != (long *)0x0) {
          lVar27 = *plVar22;
          *plVar22 = lVar27 + 1;
          if (lVar27 < 0) goto LAB_10060a08c;
          __ZN13codex_rollout8state_db25sqlite_telemetry_recorder17h5184d94f63a61f8aE
                    (plVar22,&UNK_108ca7544,10);
          __ZN11codex_state9telemetry28install_process_db_telemetry17h557d8365d5bfb162E();
          lVar27 = *(long *)(unaff_x19 + 0x4d98);
          if (lVar27 == -0x7fffffffffffffff) goto LAB_100608c9c;
        }
      }
      if (*(long *)(unaff_x19 + 0x4e00) == 0) {
        lVar26 = 7;
        unaff_x27[0x234] = 1;
      }
      else {
        uVar48 = 0x8000000000000001;
        uVar47 = 0;
        uVar46 = 1;
        uVar49 = 0x8000000000000001;
        uVar45 = 0x8000000000000000;
        __ZN123__LT_opentelemetry_sdk__logs__logger_provider__SdkLoggerProvider_u20_as_u20_opentelemetry__logs__logger__LoggerProvider_GT_17logger_with_scope17hbfa78e9946fcc212E
                  (&stack0x000042b8,unaff_x19 + 0x4e00,&stack0x00006e00);
        lVar27 = *(long *)(unaff_x19 + 0x4d98);
        lVar26 = 6;
        unaff_x27[0x234] = 1;
        if (lVar27 == -0x7fffffffffffffff) goto LAB_100608cb0;
      }
      if (lVar27 == -0x8000000000000000) goto LAB_100608cb0;
      FUN_1011e8b94(&stack0x00006e00,unaff_x19 + 0x4d98);
      lVar27 = **(long **)(unaff_x19 + 0x4df8);
      **(long **)(unaff_x19 + 0x4df8) = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10060a08c;
      lVar27 = 6;
    }
    puVar41 = &stack0x00004328;
    unaff_x27[0x233] = 1;
    __ZN90__LT_tracing_subscriber__registry__sharded__Registry_u20_as_u20_core__default__Default_GT_7default17h310ae85e486ce566E
              (&stack0x00009370);
    unaff_x27[0x21e] = 0;
    _memcpy(&stack0x00009610,unaff_x19 + 0x500,0x710);
    if (0x3f < in_stack_00009588) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
      goto LAB_10060a08c;
    }
    _memcpy(&stack0x00006e00,&stack0x00009610,0x710);
    _memcpy(&stack0x00007510,&stack0x00009370,0x220);
    unaff_x27[0x233] = 0;
    if ((lVar27 != 7) && (0x3f < in_stack_00007728)) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
      goto LAB_10060a08c;
    }
    _memcpy(&stack0x00004890,&stack0x00006e00,0x938);
    unaff_x27[0x234] = 0;
    FUN_100695074(&stack0x00004890,0xd4434e71b846d36,0x889f678fecebcd05);
    if ((lVar26 != 7) && (0x3f < in_stack_000051b8)) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
      goto LAB_10060a08c;
    }
    _memcpy(&stack0x00006e10,&stack0x00004890,0x9e0);
    plVar22 = (long *)_malloc(0xa70);
    if (plVar22 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa70);
      goto LAB_10060a08c;
    }
    _memcpy(plVar22,&stack0x00006e00,0xa70);
    puVar44 = &UNK_10b2215d0;
    __ZN12tracing_core8callsite17register_dispatch17hc97428c55d0217f6E(&stack0x00006e00);
    if (___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE == 0) {
      ___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE = 1;
      if (___ZN12tracing_core10dispatcher15GLOBAL_DISPATCH17ha0df1ee9753ea710E != 0) {
        lVar27 = *plRam000000010b63daa8;
        *plRam000000010b63daa8 = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E(0x10b63daa8);
        }
      }
      ___ZN12tracing_core10dispatcher15GLOBAL_DISPATCH17ha0df1ee9753ea710E = 0;
      puRam000000010b63dab0 = &UNK_10b2215d0;
      ___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE = 2;
      ___ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE = 1;
      puVar44 = (undefined *)0x8;
      uVar45 = 0;
      plRam000000010b63daa8 = plVar22 + 2;
      uVar13 = __ZN11tracing_log10log_tracer7Builder4init17h60d7de083b368112E(&stack0x00006e00);
      if ((uVar13 & 1) != 0) {
        puVar12 = (undefined8 *)&UNK_10b22c598;
        goto LAB_1006090f0;
      }
    }
    else {
      lVar27 = *plVar22;
      *plVar22 = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E((ulong)&stack0x00004890 | 8)
        ;
      }
      puVar12 = (undefined8 *)&UNK_10b22c610;
LAB_1006090f0:
      if ((code *)*puVar12 != (code *)0x0) {
        (*(code *)*puVar12)(1);
      }
      if (puVar12[1] != 0) {
        _free(1);
      }
    }
    __ZN10codex_exec14exec_root_span17he6644a5068dbe25bE(unaff_x19 + 0x4e18);
    unaff_x27[0x226] = 1;
    if (lRam000000010b62eed8 != 0) {
      thunk_FUN_1089a0f08();
    }
    if (cRam000000010b62eef0 != '\x02') {
      if (((plRam000000010b62eee0 != (long *)0x0) &&
          (lVar27 = *plRam000000010b62eee0, *plRam000000010b62eee0 = lVar27 + 1, lVar27 < 0)) ||
         ((plRam000000010b62eee8 != (long *)0x0 &&
          (lVar27 = *plRam000000010b62eee8, *plRam000000010b62eee8 = lVar27 + 1, lVar27 < 0))))
      goto LAB_10060a08c;
      __ZN93__LT_tracing__span__Span_u20_as_u20_tracing_opentelemetry__span_ext__OpenTelemetrySpanExt_GT_10set_parent17hd9958fadcc6a6d03E
                (unaff_x19 + 0x4e18,&stack0x000043c8);
    }
    puVar43 = *(undefined1 **)(unaff_x19 + 0x43c8);
    lVar27 = (long)puVar43 * 0x70;
    if ((undefined1 *)0x124924924924924 < puVar43) {
      uVar18 = 0;
LAB_100609278:
      FUN_107c03c64(uVar18,lVar27);
      goto LAB_10060a08c;
    }
    lVar26 = *(long *)(unaff_x19 + 0x43c0);
    if (lVar27 == 0) {
      lVar14 = 8;
      puVar42 = (undefined1 *)0x0;
    }
    else {
      lVar14 = _malloc(lVar27);
      puVar42 = puVar43;
      if (lVar14 == 0) {
        uVar18 = 8;
        goto LAB_100609278;
      }
    }
    if (puVar43 != (undefined1 *)0x0) {
      puVar41 = (undefined1 *)0x0;
      plVar22 = (long *)(lVar26 + 0x10);
      plVar32 = (long *)(lVar14 + 0x30);
      do {
        lVar27 = plVar22[-1];
        lVar26 = *plVar22;
        if (lVar26 == 0) {
          lVar17 = 1;
        }
        else {
          lVar17 = _malloc(lVar26);
          if (lVar17 == 0) {
            FUN_107c03c64(1,lVar26);
            goto LAB_10060a08c;
          }
        }
        plVar22 = plVar22 + 3;
        _memcpy(lVar17,lVar27,lVar26);
        plVar32[-6] = 0;
        plVar32[-1] = lVar26;
        *plVar32 = lVar17;
        puVar41 = puVar41 + 1;
        plVar32[1] = lVar26;
        plVar32[2] = -0x8000000000000000;
        plVar32[5] = -0x8000000000000000;
        plVar32 = plVar32 + 0xe;
      } while (puVar43 != puVar41);
    }
    *(long *)(unaff_x19 + 0x4e48) = lVar14;
    *(undefined1 **)(unaff_x19 + 0x4e40) = puVar42;
    *(undefined1 **)(unaff_x19 + 0x4e50) = puVar43;
    unaff_x27[0x225] = 1;
    if (*(long *)(unaff_x19 + 0x348) == -0x8000000000000000) {
      lVar27 = -0x8000000000000000;
      if (*(long *)(unaff_x19 + 0x360) != -0x8000000000000000) goto LAB_1006094dc;
LAB_100609374:
      uVar13 = 0;
      pcVar16 = (char *)0x8000000000000000;
      if (lVar27 != -0x8000000000000000) goto LAB_10060953c;
LAB_100609388:
      lVar14 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x14,&UNK_108da1a42,0x27);
      puVar42 = (undefined1 *)0x8000000000000000;
      if ((uVar13 & 0x7fffffffffffffff) != 0) {
        _free(puVar41);
        goto LAB_100609564;
      }
LAB_100609578:
      pcVar16 = (char *)thunk_FUN_1088566c8();
      unaff_x27[0x224] = 0;
      lVar26 = *(long *)(unaff_x19 + 0x4e48);
      lVar27 = *(long *)(unaff_x19 + 0x4e50);
joined_r0x00010060958c:
      if (lVar27 != 0) {
        puVar12 = (undefined8 *)(lVar26 + 0x60);
        do {
          while( true ) {
            if (puVar12[-7] != 0) {
              _free(puVar12[-6]);
            }
            if (puVar12[-4] != -0x8000000000000000 && puVar12[-4] != 0) break;
            if (puVar12[-1] == -0x8000000000000000 || puVar12[-1] == 0) goto LAB_1006095b4;
LAB_1006095f0:
            _free(*puVar12);
            lVar27 = lVar27 + -1;
            puVar12 = puVar12 + 0xe;
            if (lVar27 == 0) goto LAB_100609600;
          }
          _free(puVar12[-3]);
          if (puVar12[-1] != -0x8000000000000000 && puVar12[-1] != 0) goto LAB_1006095f0;
LAB_1006095b4:
          puVar12 = puVar12 + 0xe;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
LAB_100609600:
      if (*(long *)(unaff_x19 + 0x4e40) != 0) {
        _free(lVar26);
      }
      unaff_x27[0x225] = 0;
      FUN_100dddd8c(unaff_x19 + 0x4e18);
      unaff_x27[0x226] = 0;
      unaff_x27[0x233] = 0;
      unaff_x27[0x234] = 0;
      if (*(long *)(unaff_x19 + 0x4d98) != -0x7fffffffffffffff) {
        FUN_100dfc5b8(unaff_x19 + 0x4d98);
      }
      FUN_100de93d0(unaff_x19 + 0x2850);
      unaff_x27[0x227] = 0;
      unaff_x27[0x235] = 0;
      if ((*(long *)(unaff_x19 + 0x2838) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x2838) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x2840));
      }
      goto LAB_100609678;
    }
    uVar30 = *(undefined8 *)(unaff_x19 + 0x350);
    lVar27 = *(long *)(unaff_x19 + 0x358);
    if (lVar27 == 0) {
      lVar26 = 1;
    }
    else {
      lVar26 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar27,1);
      if (lVar26 == 0) {
        FUN_107c03c64(1,lVar27);
        goto LAB_10060a08c;
      }
    }
    _memcpy(lVar26,uVar30,lVar27);
    if (*(long *)(unaff_x19 + 0x360) == -0x8000000000000000) goto LAB_100609374;
LAB_1006094dc:
    uVar30 = *(undefined8 *)(unaff_x19 + 0x368);
    uVar13 = *(ulong *)(unaff_x19 + 0x370);
    if (uVar13 == 0) {
      puVar41 = (undefined1 *)0x1;
    }
    else {
      puVar41 = (undefined1 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar13,1);
      if (puVar41 == (undefined1 *)0x0) {
        FUN_107c03c64(1,uVar13);
        goto LAB_10060a08c;
      }
    }
    _memcpy(puVar41,uVar30,uVar13);
    pcVar16 = unaff_x28;
    if (lVar27 == -0x8000000000000000) goto LAB_100609388;
LAB_10060953c:
    __ZN17codex_exec_server13runtime_paths22ExecServerRuntimePaths3new17h3b8988f1c12c9112E
              (&stack0x00006e00,&stack0x00004890,&stack0x00009610);
LAB_100609564:
    if (puVar42 == (undefined1 *)0x8000000000000000) goto LAB_100609578;
    unaff_x27[0x224] = 1;
    *(undefined1 **)(unaff_x19 + 0x4e90) = puVar42;
    *(long *)(unaff_x19 + 0x4e98) = lVar14;
    *(undefined8 *)(unaff_x19 + 0x4ea8) = uVar45;
    *(undefined **)(unaff_x19 + 0x4ea0) = puVar44;
    *(undefined8 *)(unaff_x19 + 0x4eb8) = uVar47;
    *(undefined8 *)(unaff_x19 + 0x4eb0) = uVar46;
    *(long *)(unaff_x19 + 0x4ec0) = unaff_x19 + 0x2850;
    unaff_x23[0x2e0] = 0;
    auVar40 = FUN_10051106c(unaff_x19 + 0x4ec0,unaff_x28);
    if ((auVar40._0_8_ & 1) != 0) {
      uVar21 = 8;
LAB_10060895c:
      unaff_x27[0x210] = uVar21;
      uVar18 = 1;
      goto LAB_1006099c0;
    }
    unaff_x27[0x223] = 1;
    *(long *)(unaff_x19 + 0x4e58) = auVar40._8_8_;
    if (unaff_x23[0x2e0] == '\x03') {
      FUN_100ccf6e0(unaff_x19 + 0x4ec8);
    }
    if ((in_stack_00000098[0xe1] & 1U) != 0) {
      unaff_x27[0x224] = 0;
      unaff_x27[0x2c8] = 0;
      FUN_100a19128(&stack0x00006e00,unaff_x19 + 0x4e90,unaff_x28);
      if (puVar42 == (undefined1 *)0x8000000000000002) {
        uVar21 = 9;
        goto LAB_10060895c;
      }
      FUN_100cc57f4(unaff_x19 + 0x4e90);
      if (puVar42 != (undefined1 *)0x8000000000000001) goto LAB_100607264;
      pcVar16 = (char *)thunk_FUN_108858eb0(&stack0x000044c0);
LAB_1006071cc:
      unaff_x27[0x232] = 0;
      plVar22 = *(long **)(unaff_x19 + 0x4e58);
      if (plVar22 != (long *)0x0) {
        lVar27 = *plVar22;
        *plVar22 = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x4e58);
        }
      }
      unaff_x27[0x223] = 0;
      unaff_x27[0x224] = 0;
      lVar26 = *(long *)(unaff_x19 + 0x4e48);
      lVar27 = *(long *)(unaff_x19 + 0x4e50);
      goto joined_r0x00010060958c;
    }
    uVar30 = *(undefined8 *)(unaff_x19 + 0x4450);
    lVar27 = *(long *)(unaff_x19 + 0x4458);
    if (lVar27 == 0) {
      lVar26 = 1;
    }
    else {
      lVar26 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar27,1);
      if (lVar26 == 0) {
        FUN_107c03c64(1,lVar27);
        goto LAB_10060a08c;
      }
    }
    _memcpy(lVar26,uVar30,lVar27);
    unaff_x27[0x224] = 0;
    uVar29 = *(undefined8 *)(unaff_x19 + 0x4e98);
    uVar30 = *(undefined8 *)(unaff_x19 + 0x4e90);
    uVar36 = *(undefined8 *)(unaff_x19 + 0x4ea8);
    uVar31 = *(undefined8 *)(unaff_x19 + 0x4ea0);
    uVar39 = *(undefined8 *)(unaff_x19 + 0x4eb8);
    uVar38 = *(undefined8 *)(unaff_x19 + 0x4eb0);
    *(long *)(unaff_x19 + 0x4e90) = lVar27;
    *(long *)(unaff_x19 + 0x4e98) = lVar26;
    *(long *)(unaff_x19 + 0x4ea0) = lVar27;
    *(undefined8 *)(unaff_x19 + 0x4eb0) = uVar29;
    *(undefined8 *)(unaff_x19 + 0x4ea8) = uVar30;
    *(undefined8 *)(unaff_x19 + 0x4ec0) = uVar36;
    *(undefined8 *)(unaff_x19 + 0x4eb8) = uVar31;
    *(undefined8 *)(unaff_x19 + 0x4ed0) = uVar39;
    *(undefined8 *)(unaff_x19 + 0x4ec8) = uVar38;
    unaff_x27[0x2f0] = 0;
    FUN_100a18de0(&stack0x00006e00,unaff_x19 + 0x4e90,unaff_x28);
    if (puVar42 == (undefined1 *)0x8000000000000002) {
      uVar21 = 10;
      goto LAB_10060895c;
    }
    FUN_100d73020(unaff_x19 + 0x4e90);
    if (puVar42 == (undefined1 *)0x8000000000000001) {
      pcVar16 = (char *)thunk_FUN_108858eb0(&stack0x00004550);
      goto LAB_1006071cc;
    }
LAB_100607264:
    puVar41 = &stack0x00009370;
    unaff_x27[0x232] = 1;
    unaff_x27[0x231] = 0;
    FUN_101133118(&stack0x00004890,unaff_x19 + 0x2850);
    _memcpy(&stack0x00006e10,&stack0x00004890,0x2548);
    lVar27 = _malloc(0x2558);
    if (lVar27 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2558);
LAB_10060a08c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10060a090);
      (*pcVar8)();
    }
    _memcpy(lVar27,&stack0x00006e00,0x2558);
    *(undefined2 *)(unaff_x27 + 0x22a) = 0;
    unaff_x27[0x229] = 0;
    __ZN14codex_feedback13CodexFeedback3new17h789d83cb1c9a7f6eE();
    plVar22 = *(long **)(unaff_x19 + 0x4e58);
    if ((plVar22 != (long *)0x0) && (lVar27 = *plVar22, *plVar22 = lVar27 + 1, lVar27 < 0))
    goto LAB_10060a08c;
    unaff_x27[0x232] = 0;
    puVar12 = (undefined8 *)_malloc(0xa0);
    if (puVar12 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
      goto LAB_10060a08c;
    }
    puVar12[0xd] = uVar25;
    puVar12[0xc] = uVar18;
    puVar12[0xf] = uVar35;
    puVar12[0xe] = uVar34;
    puVar12[0x11] = uVar33;
    puVar12[0x10] = uVar28;
    puVar12[0x13] = in_stack_00009680;
    puVar12[0x12] = in_stack_00009678;
    puVar12[5] = uVar45;
    puVar12[4] = puVar44;
    puVar12[7] = uVar47;
    puVar12[6] = uVar46;
    puVar12[9] = uVar37;
    puVar12[8] = uVar48;
    puVar12[0xb] = uVar49;
    puVar12[10] = uVar24;
    puVar12[1] = 1;
    *puVar12 = 1;
    puVar12[3] = lVar14;
    puVar12[2] = puVar42;
    unaff_x27[0x225] = 0;
    puVar12 = (undefined8 *)_malloc(10);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_107c03c64(1,10);
      goto LAB_10060a08c;
    }
    *(undefined2 *)(puVar12 + 1) = 0x6365;
    *puVar12 = 0x78655f7865646f63;
    puVar15 = (undefined4 *)_malloc(7);
    if (puVar15 == (undefined4 *)0x0) {
      FUN_107c03c64(1,7);
      goto LAB_10060a08c;
    }
    *(undefined4 *)((long)puVar15 + 3) = 0x302e3333;
    *puVar15 = 0x33312e30;
    unaff_x27[0x223] = 0;
    uVar28 = *(undefined8 *)(unaff_x19 + 0x4e58);
    unaff_x27[0x230] = 0;
    uVar45 = *(undefined8 *)(unaff_x19 + 0x3d8);
    uVar24 = *(undefined8 *)(unaff_x19 + 0x3d0);
    uVar47 = *(undefined8 *)(unaff_x19 + 1000);
    uVar46 = *(undefined8 *)(unaff_x19 + 0x3e0);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x3f0);
    uVar49 = *(undefined8 *)(unaff_x19 + 0x398);
    uVar25 = *(undefined8 *)(unaff_x19 + 0x390);
    uVar37 = *(undefined8 *)(unaff_x19 + 0x3a8);
    uVar48 = *(undefined8 *)(unaff_x19 + 0x3a0);
    uVar30 = *(undefined8 *)(unaff_x19 + 0x3b8);
    uVar35 = *(undefined8 *)(unaff_x19 + 0x3b0);
    uVar34 = *(undefined8 *)(unaff_x19 + 0x3c8);
    uVar33 = *(undefined8 *)(unaff_x19 + 0x3c0);
    unaff_x27[0x227] = 0;
    _memcpy(&stack0x00009610,unaff_x19 + 0x2850,0x2548);
    uVar21 = unaff_x27[0x216];
    if (*(ulong *)(unaff_x19 + 0x4e18) == 2) {
      uVar29 = 2;
    }
    else {
      plStack0000000000000058 = *(long **)(unaff_x19 + 20000);
      puVar41 = *(undefined1 **)(unaff_x19 + 0x4e28);
      if ((*(ulong *)(unaff_x19 + 0x4e18) & 1) == 0) {
        uStack0000000000000050 =
             (**(code **)(puVar41 + 0x70))(plStack0000000000000058,unaff_x19 + 0x4e30);
        uVar29 = 0;
      }
      else {
        uStack0000000000000050 =
             (**(code **)(puVar41 + 0x70))
                       ((long)plStack0000000000000058 +
                        (*(long *)(puVar41 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                        unaff_x19 + 0x4e30);
        uVar29 = 1;
        lVar27 = *plStack0000000000000058;
        *plStack0000000000000058 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10060a08c;
      }
    }
    uVar31 = *(undefined8 *)(unaff_x19 + 0x4e38);
    uVar7 = *(undefined2 *)(unaff_x27 + 0x214);
    unaff_x27[0x228] = 0;
    *(undefined4 *)(unaff_x27 + 0x22c) = 0;
    uVar3 = unaff_x27[0x212];
    uVar4 = unaff_x27[0x218];
    _memcpy(&stack0x00004660,&stack0x00009370,0x230);
    _memcpy(&stack0x00006e28,&stack0x00009610,0x2548);
    unaff_x27[0x226] = 0;
    _memcpy(&stack0x00004890,&stack0x00006e00,0x2570);
    _memcpy(unaff_x19 + 0x4e90,&stack0x00004890,0x2570);
    *(undefined8 *)(unaff_x19 + 0x7400) = uVar29;
    *(long **)(unaff_x19 + 0x7408) = plStack0000000000000058;
    *(undefined1 **)(unaff_x19 + 0x7410) = puVar41;
    *(undefined8 *)(unaff_x19 + 0x7418) = uStack0000000000000050;
    *(undefined8 *)(unaff_x19 + 0x7420) = uVar31;
    _memcpy(unaff_x19 + 0x7428,&stack0x00004660,0x230);
    *(undefined8 *)(unaff_x19 + 0x7660) = *(undefined8 *)(unaff_x19 + 0x460);
    *(undefined8 *)(unaff_x19 + 0x7658) = *(undefined8 *)(unaff_x19 + 0x458);
    *(undefined8 *)(unaff_x19 + 0x7678) = *(undefined8 *)(unaff_x19 + 0x400);
    *(undefined8 *)(unaff_x19 + 0x7670) = *(undefined8 *)(unaff_x19 + 0x3f8);
    *(undefined8 *)(unaff_x19 + 0x7690) = *(undefined8 *)(unaff_x19 + 0x2840);
    *(undefined8 *)(unaff_x19 + 0x7688) = *(undefined8 *)(unaff_x19 + 0x2838);
    *(undefined8 *)(unaff_x19 + 0x76a8) = *(undefined8 *)(unaff_x19 + 0x430);
    *(undefined8 *)(unaff_x19 + 0x76a0) = *(undefined8 *)(unaff_x19 + 0x428);
    *(undefined8 *)(unaff_x19 + 0x76c0) = *(undefined8 *)(unaff_x19 + 0x418);
    *(undefined8 *)(unaff_x19 + 0x76b8) = *(undefined8 *)(unaff_x19 + 0x410);
    *(undefined8 *)(unaff_x19 + 0x7708) = uVar34;
    *(undefined8 *)(unaff_x19 + 0x7700) = uVar33;
    *(undefined8 *)(unaff_x19 + 0x7718) = uVar45;
    *(undefined8 *)(unaff_x19 + 0x7710) = uVar24;
    *(undefined8 *)(unaff_x19 + 0x7728) = uVar47;
    *(undefined8 *)(unaff_x19 + 0x7720) = uVar46;
    *(undefined8 *)(unaff_x19 + 0x76d8) = uVar49;
    *(undefined8 *)(unaff_x19 + 0x76d0) = uVar25;
    *(undefined8 *)(unaff_x19 + 0x76e8) = uVar37;
    *(undefined8 *)(unaff_x19 + 0x76e0) = uVar48;
    *(undefined8 *)(unaff_x19 + 0x7668) = *(undefined8 *)(unaff_x19 + 0x468);
    *(undefined8 *)(unaff_x19 + 0x7680) = *(undefined8 *)(unaff_x19 + 0x408);
    *(undefined8 *)(unaff_x19 + 0x7698) = *(undefined8 *)(unaff_x19 + 0x2848);
    *(undefined8 *)(unaff_x19 + 0x76b0) = *(undefined8 *)(unaff_x19 + 0x438);
    *(undefined8 *)(unaff_x19 + 0x76c8) = *(undefined8 *)(unaff_x19 + 0x420);
    *(undefined8 *)(unaff_x19 + 0x7730) = uVar18;
    *(undefined8 *)(unaff_x19 + 0x76f8) = uVar30;
    *(undefined8 *)(unaff_x19 + 0x76f0) = uVar35;
    *(undefined8 *)(unaff_x19 + 0x7738) = uVar28;
    *in_stack_00000090 = uVar21;
    *(undefined2 *)(in_stack_00000090 + 1) = uVar7;
    in_stack_00000090[3] = uVar3;
    in_stack_00000090[4] = uVar4;
    *(undefined1 *)(unaff_x19 + 0xa7e0) = 0;
    if (*(ulong *)(unaff_x19 + 0x4e90) != 2) {
      lVar27 = *(long *)(unaff_x19 + 0x4e98);
      if ((*(ulong *)(unaff_x19 + 0x4e90) & 1) != 0) {
        lVar27 = lVar27 + (*(long *)(*(long *)(unaff_x19 + 0x4ea0) + 0x10) - 1U & 0xfffffffffffffff0
                          ) + 0x10;
      }
      (**(code **)(*(long *)(unaff_x19 + 0x4ea0) + 0x60))(lVar27,unaff_x19 + 0x4ea8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (*(long *)(unaff_x19 + 0x4eb0) != 0)) {
      FUN_1011d7d74(unaff_x19 + 0x4e90,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&stack0x00006e00);
    }
    auVar40 = FUN_1005f9658(unaff_x19 + 0x4eb8,unaff_x28);
    pcVar16 = auVar40._8_8_;
    if (*(ulong *)(unaff_x19 + 0x4e90) != 2) {
      lVar27 = *(long *)(unaff_x19 + 0x4e98);
      if ((*(ulong *)(unaff_x19 + 0x4e90) & 1) != 0) {
        lVar27 = lVar27 + (*(long *)(*(long *)(unaff_x19 + 0x4ea0) + 0x10) - 1U & 0xfffffffffffffff0
                          ) + 0x10;
      }
      (**(code **)(*(long *)(unaff_x19 + 0x4ea0) + 0x68))(lVar27,unaff_x19 + 0x4ea8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (*(long *)(unaff_x19 + 0x4eb0) != 0)) {
      FUN_1011d7d74(unaff_x19 + 0x4e90,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00006e00);
    }
    if ((auVar40._0_8_ & 1) != 0) {
      uVar21 = 0xb;
      goto LAB_10060895c;
    }
    FUN_100ce2dec(unaff_x19 + 0x4e90);
    *(undefined2 *)(unaff_x27 + 0x232) = 0;
    *(undefined4 *)(unaff_x27 + 0x223) = 0;
    unaff_x27[0x234] = 0;
    if (*(long *)(unaff_x19 + 0x4d98) != -0x7fffffffffffffff) {
      FUN_100dfc5b8(unaff_x19 + 0x4d98);
    }
    unaff_x27[0x227] = 0;
    unaff_x27[0x235] = 0;
    unaff_x27[0x21a] = 0;
    unaff_x27[0x236] = 0;
    *(undefined4 *)(unaff_x27 + 0x228) = 0;
    FUN_100e04ad4(unaff_x19 + 0xd20);
    unaff_x27[0x21b] = 0;
    if (*(long *)(unaff_x19 + 0xc58) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xc60));
    }
    if (*(long *)(unaff_x19 + 0xc40) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xc48));
    }
    *(undefined4 *)(unaff_x27 + 0x21c) = 0;
    if ((*(long *)(unaff_x19 + 0x4d0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x4d0) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x4d8));
    }
    *(undefined2 *)(unaff_x27 + 0x220) = 0;
    if ((*(long *)(unaff_x19 + 0x488) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x488) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x490));
    }
    unaff_x27[0x222] = 0;
    unaff_x27[0x22c] = 0;
    lVar26 = *(long *)(unaff_x19 + 0x448);
    lVar27 = *(long *)(unaff_x19 + 0x450);
    if (lVar27 != 0) {
      puVar12 = (undefined8 *)(lVar26 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if (*(long *)(unaff_x19 + 0x440) != 0) {
      _free(lVar26);
    }
    *(undefined1 *)(unaff_x19 + 0x4e81) = 0;
    *(undefined4 *)(unaff_x19 + 0x4e7d) = 0;
  }
  else {
    uVar18 = *(undefined8 *)(unaff_x19 + 0x4d8);
    lVar27 = *(long *)(unaff_x19 + 0x4e0);
    if (lVar27 == 0) {
      lVar26 = 1;
    }
    else {
      lVar26 = _malloc(lVar27);
      if (lVar26 == 0) {
        FUN_107c03c64(1,lVar27);
        goto LAB_10060a08c;
      }
    }
    _memcpy(lVar26,uVar18,lVar27);
    *(long *)(unaff_x19 + 0xc28) = lVar27;
    *(long *)(unaff_x19 + 0xc30) = lVar26;
    *(long *)(unaff_x19 + 0xc38) = lVar27;
    unaff_x27[0x21c] = 1;
    if (lVar27 == -0x8000000000000000) goto LAB_10060802c;
    __ZN25codex_utils_absolute_path41canonicalize_existing_preserving_symlinks17hfedfc807d1365ee4E
              (&stack0x00006e00,lVar26,lVar27);
    if (puVar41 != (undefined1 *)0x8000000000000000) {
      in_stack_000000b8 = puVar41;
      in_stack_000000c0 = puVar12;
      in_stack_000000c8 = puVar43;
      FUN_100bdc488(&stack0x00004890,&stack0x000000b8);
      bVar9 = in_stack_00004890 == (undefined1 *)0x8000000000000000;
      puVar19 = in_stack_00004898;
      puVar42 = in_stack_00004890;
      puVar23 = in_stack_000048a0;
      in_stack_00004890 = puVar41;
      in_stack_00004898 = puVar12;
      in_stack_000048a0 = puVar43;
      if (bVar9) {
        pcVar16 = (char *)thunk_FUN_1088566c8();
        goto LAB_100609704;
      }
      goto LAB_100609a24;
    }
    pcVar16 = (char *)thunk_FUN_1088566c8();
LAB_100609704:
    if ((((unaff_x27[0x21c] & 1) != 0) && (*(long *)(unaff_x19 + 0xc28) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0xc28) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xc30));
    }
    unaff_x27[0x21c] = 0;
    if ((unaff_x27[0x21d] & 1) != 0) {
      FUN_100e76384(unaff_x19 + 0xc10);
    }
    unaff_x27[0x21d] = 0;
    if ((unaff_x27[0x21e] & 1) != 0) {
      FUN_100e17c20(unaff_x19 + 0x500);
    }
    unaff_x27[0x21e] = 0;
    if ((unaff_x27[0x21f] & 1) != 0) {
      lVar26 = *(long *)(unaff_x19 + 0x4f0);
      lVar27 = *(long *)(unaff_x19 + 0x4f8);
      if (lVar27 != 0) {
        puVar12 = (undefined8 *)(lVar26 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (*(long *)(unaff_x19 + 0x4e8) != 0) {
        _free(lVar26);
      }
    }
    unaff_x27[0x21f] = 0;
    if (*(long *)(unaff_x19 + 0x4d0) == -0x8000000000000000 || *(long *)(unaff_x19 + 0x4d0) == 0) {
      bVar6 = unaff_x27[0x220];
    }
    else {
      _free(*(undefined8 *)(unaff_x19 + 0x4d8));
      bVar6 = unaff_x27[0x220];
    }
    if (((bVar6 & 1) != 0) && ((*(ulong *)(unaff_x19 + 0x4b8) & 0x7fffffffffffffff) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x4c0));
    }
    unaff_x27[0x220] = 0;
    if ((((unaff_x27[0x221] & 1) != 0) && (*(long *)(unaff_x19 + 0x4a0) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x4a0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x4a8));
    }
    unaff_x27[0x221] = 0;
    if ((*(long *)(unaff_x19 + 0x488) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x488) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x490));
    }
    if (((*(long *)(unaff_x19 + 0x470) != -0x8000000000000000) && ((unaff_x27[0x222] & 1) != 0)) &&
       (*(long *)(unaff_x19 + 0x470) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x478));
    }
    unaff_x27[0x222] = 0;
    lVar26 = *(long *)(unaff_x19 + 0x460);
    lVar27 = *(long *)(unaff_x19 + 0x468);
    if (lVar27 != 0) {
      puVar12 = (undefined8 *)(lVar26 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if (*(long *)(unaff_x19 + 0x458) != 0) {
      _free(lVar26);
    }
    unaff_x27[0x22c] = 0;
    lVar26 = *(long *)(unaff_x19 + 0x448);
    lVar27 = *(long *)(unaff_x19 + 0x450);
    if (lVar27 != 0) {
      puVar12 = (undefined8 *)(lVar26 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if (*(long *)(unaff_x19 + 0x440) != 0) {
      _free(lVar26);
    }
    if (*(long *)(unaff_x19 + 0x428) == -0x8000000000000000 || *(long *)(unaff_x19 + 0x428) == 0) {
      unaff_x27[0x22d] = 0;
      lVar27 = *(long *)(unaff_x19 + 0x410);
    }
    else {
      _free(*(undefined8 *)(unaff_x19 + 0x430));
      unaff_x27[0x22d] = 0;
      lVar27 = *(long *)(unaff_x19 + 0x410);
    }
    if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x418));
    }
    unaff_x27[0x22e] = 0;
    if ((*(long *)(unaff_x19 + 0x3f8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x3f8) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x400));
    }
    unaff_x27[0x22f] = 0;
    FUN_100e368e0(unaff_x19 + 0x390);
    unaff_x27[0x230] = 0;
    if ((*(long *)(unaff_x19 + 0x348) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x348) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x350));
    }
    if ((*(long *)(unaff_x19 + 0x360) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x360) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x368));
    }
    if ((*(long *)(unaff_x19 + 0x378) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x378) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x380));
    }
    unaff_x27[0x231] = 0;
  }
  uVar18 = 0;
  *(undefined2 *)(unaff_x19 + 0x4e8b) = 0;
  *(undefined4 *)(unaff_x19 + 0x4e87) = 0;
  unaff_x27[0x210] = 1;
LAB_1006099c0:
  auVar40._8_8_ = pcVar16;
  auVar40._0_8_ = uVar18;
  return auVar40;
}

