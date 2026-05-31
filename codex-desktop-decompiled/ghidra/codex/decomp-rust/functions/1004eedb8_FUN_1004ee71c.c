
/* WARNING: Possible PIC construction at 0x0001004ee778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004eee08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004ee77c) */
/* WARNING: Removing unreachable block (ram,0x0001004ee798) */
/* WARNING: Removing unreachable block (ram,0x0001004ee810) */
/* WARNING: Removing unreachable block (ram,0x0001004ee818) */
/* WARNING: Removing unreachable block (ram,0x0001004ee85c) */
/* WARNING: Removing unreachable block (ram,0x0001004ee930) */
/* WARNING: Removing unreachable block (ram,0x0001004ee94c) */
/* WARNING: Removing unreachable block (ram,0x0001004eeadc) */
/* WARNING: Removing unreachable block (ram,0x0001004eecf8) */
/* WARNING: Removing unreachable block (ram,0x0001004eed0c) */
/* WARNING: Removing unreachable block (ram,0x0001004ee964) */
/* WARNING: Removing unreachable block (ram,0x0001004eeae0) */
/* WARNING: Removing unreachable block (ram,0x0001004eeaf0) */
/* WARNING: Removing unreachable block (ram,0x0001004eeb04) */
/* WARNING: Removing unreachable block (ram,0x0001004eeb4c) */
/* WARNING: Removing unreachable block (ram,0x0001004eeb58) */
/* WARNING: Removing unreachable block (ram,0x0001004eeb70) */
/* WARNING: Removing unreachable block (ram,0x0001004ee970) */
/* WARNING: Removing unreachable block (ram,0x0001004ee9e4) */
/* WARNING: Removing unreachable block (ram,0x0001004ee9f8) */
/* WARNING: Removing unreachable block (ram,0x0001004eea34) */
/* WARNING: Removing unreachable block (ram,0x0001004eea40) */
/* WARNING: Removing unreachable block (ram,0x0001004eea58) */
/* WARNING: Removing unreachable block (ram,0x0001004eea68) */
/* WARNING: Removing unreachable block (ram,0x0001004eea90) */
/* WARNING: Removing unreachable block (ram,0x0001004eebd4) */
/* WARNING: Removing unreachable block (ram,0x0001004eece4) */
/* WARNING: Removing unreachable block (ram,0x0001004eec1c) */
/* WARNING: Removing unreachable block (ram,0x0001004eec60) */
/* WARNING: Removing unreachable block (ram,0x0001004eec68) */
/* WARNING: Removing unreachable block (ram,0x0001004ee820) */
/* WARNING: Removing unreachable block (ram,0x0001004eec74) */
/* WARNING: Removing unreachable block (ram,0x0001004ee788) */
/* WARNING: Removing unreachable block (ram,0x0001004eecc0) */
/* WARNING: Removing unreachable block (ram,0x0001004eee0c) */
/* WARNING: Removing unreachable block (ram,0x0001004eee28) */
/* WARNING: Removing unreachable block (ram,0x0001004eee8c) */
/* WARNING: Removing unreachable block (ram,0x0001004eee94) */
/* WARNING: Removing unreachable block (ram,0x0001004eeea4) */
/* WARNING: Removing unreachable block (ram,0x0001004eee9c) */
/* WARNING: Removing unreachable block (ram,0x0001004eeeb8) */
/* WARNING: Removing unreachable block (ram,0x0001004eee18) */
/* WARNING: Removing unreachable block (ram,0x0001004eef1c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ee71c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined6 uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  char *pcVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  ulong *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 uVar20;
  short sVar21;
  uint uVar22;
  uint extraout_w8;
  undefined8 *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *unaff_x21;
  long lVar33;
  undefined *puVar34;
  undefined8 unaff_x22;
  ulong uVar35;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar36;
  undefined *puVar37;
  long lVar38;
  undefined8 unaff_x26;
  undefined *puVar39;
  undefined8 uVar40;
  undefined8 unaff_x27;
  undefined *puVar41;
  undefined8 unaff_x28;
  undefined *puVar42;
  undefined8 *******pppppppuVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  char acStack_b48 [1416];
  undefined8 *******pppppppuStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 auStack_578 [120];
  long alStack_500 [18];
  undefined1 auStack_470 [1040];
  
  auVar49._8_8_ = param_2;
  auVar49._0_8_ = param_1;
  uStack_580 = 0;
  bVar4 = *(byte *)(param_2 + 0x42);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      param_2[1] = *param_2;
      *(undefined1 *)(param_2 + 0x41) = 0;
      goto LAB_1004ee770;
    }
    FUN_107c05cc0(&UNK_10b215598);
LAB_1004eed1c:
    uVar44 = FUN_107c05cc4(&UNK_10b215598);
    unaff_x21 = (undefined *)0x1;
    if (alStack_500[0] != 9) {
      FUN_100e0ee2c(alStack_500);
    }
    FUN_100df7a58(auStack_578);
    *(undefined1 *)(param_2 + 0x42) = 2;
    __Unwind_Resume(uVar44);
    FUN_107c05ccc();
    auVar49 = FUN_107c05ccc();
    puVar17 = auVar49._8_8_;
    uStack_588 = 0x1004eedb8;
    pppppppuVar43 = &pppppppuStack_590;
    pcVar9 = acStack_b48 + 0x2e8;
    bVar4 = *(byte *)(puVar17 + 0x42);
    pppppppuStack_590 = (undefined8 *******)&stack0xfffffffffffffff0;
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        FUN_107c05cc0(&UNK_10b2155c8);
        goto LAB_1004eef44;
      }
      puVar17[1] = *puVar17;
      *(undefined1 *)(puVar17 + 0x41) = 0;
LAB_1004eee00:
      auVar50._8_8_ = puVar17 + 1;
      auVar50._0_8_ = acStack_b48 + 0x2f0;
      uVar44 = 0x1004eee0c;
      pcVar9 = acStack_b48 + 0x2e8;
    }
    else {
      if (bVar4 == 3) goto LAB_1004eee00;
LAB_1004eef44:
      uVar44 = FUN_107c05cc4(&UNK_10b2155c8);
      auVar49._8_8_ = puVar17;
      auVar49._0_8_ = uVar44;
      if (unaff_x23 != (undefined *)0x9) {
        FUN_100e0ee2c(1);
      }
      *(undefined1 *)(puVar17 + 0x42) = 2;
      __Unwind_Resume(uVar44);
      uVar44 = 0x1004eefa0;
      auVar50 = FUN_107c05ccc();
    }
  }
  else {
    if (bVar4 != 3) goto LAB_1004eed1c;
LAB_1004ee770:
    auVar50._8_8_ = param_2 + 1;
    auVar50._0_8_ = auStack_470;
    uVar44 = 0x1004ee77c;
    pcVar9 = (char *)&uStack_580;
    pppppppuVar43 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  puVar17 = auVar50._8_8_;
  *(undefined8 *)(pcVar9 + -0x60) = unaff_x28;
  *(undefined8 *)(pcVar9 + -0x58) = unaff_x27;
  *(undefined8 *)(pcVar9 + -0x50) = unaff_x26;
  *(undefined8 *)(pcVar9 + -0x48) = unaff_x25;
  *(undefined **)(pcVar9 + -0x40) = unaff_x24;
  *(undefined **)(pcVar9 + -0x38) = unaff_x23;
  *(undefined8 *)(pcVar9 + -0x30) = unaff_x22;
  *(undefined **)(pcVar9 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(pcVar9 + -0x20) = auVar49;
  *(undefined8 ********)(pcVar9 + -0x10) = pppppppuVar43;
  *(undefined8 *)(pcVar9 + -8) = uVar44;
  *(long *)(pcVar9 + -0x358) = auVar50._0_8_;
  bVar4 = *(byte *)(puVar17 + 0x40);
  *(undefined8 *)(pcVar9 + -0x300) = param_3;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar44 = *puVar17;
      puVar17[5] = uVar44;
      *(undefined1 *)((long)puVar17 + 0x31) = 0;
      *(undefined1 **)(pcVar9 + -0x360) = (undefined1 *)((long)puVar17 + 0x31);
      *(undefined8 **)(pcVar9 + -0x378) = puVar17 + 1;
LAB_1004ef058:
      *(undefined1 *)(puVar17 + 6) = 0;
      puVar17[1] = uVar44;
      puVar17[2] = 0;
      puVar17[3] = 8;
      puVar17[4] = 0;
      __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E
                (pcVar9 + -0x2f8,uVar44,0,0);
      uVar44 = *(undefined8 *)(pcVar9 + -0x2f8);
      puVar23 = *(undefined8 **)(pcVar9 + -0x2f0);
      puVar26 = puVar23 + *(long *)(pcVar9 + -0x2e8);
      puVar17[0x10] = puVar23;
      puVar17[0x11] = puVar23;
      puVar17[0x12] = uVar44;
      puVar17[0x13] = puVar26;
      while (puVar23 != puVar26) {
        puVar13 = (ulong *)*puVar23;
        puVar17[0x11] = puVar23 + 1;
        if (((*(byte *)(puVar17[1] + 0x958) & 1) == 0) ||
           (puVar23 = puVar23 + 1, (*puVar13 & 6) != 2)) {
          __ZN12codex_config5state16ConfigLayerEntry13config_folder17h164a4a8a75c4d2e0E(puVar17 + 7)
          ;
          if (puVar17[7] != -0x8000000000000000) {
            puVar17[0xb] = puVar17[8];
            puVar17[10] = puVar17[7];
            uVar36 = puVar17[9];
            puVar17[0xc] = uVar36;
            uVar40 = puVar17[0xb];
            __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                      (pcVar9 + -0x1e0,&UNK_108ca10cd,5);
            uVar44 = *(undefined8 *)(pcVar9 + -0x1d8);
            __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                      (pcVar9 + -0x2f8,uVar44,*(undefined8 *)(pcVar9 + -0x1d0),uVar40,uVar36);
            puVar26 = puVar17 + 0xd;
            uVar36 = *(undefined8 *)(pcVar9 + -0x2f8);
            puVar17[0xe] = *(undefined8 *)(pcVar9 + -0x2f0);
            *puVar26 = uVar36;
            puVar17[0xf] = *(undefined8 *)(pcVar9 + -0x2e8);
            if (*(long *)(pcVar9 + -0x1e0) != 0) {
              _free(uVar44);
            }
            puVar17[0x21] = puVar26;
            *(undefined1 *)((long)puVar17 + 0x111) = 0;
            *(undefined8 **)(pcVar9 + -0x310) = puVar17 + 0x14;
            *(long *)(pcVar9 + -0x308) = (long)puVar17 + 0x111;
LAB_1004ef17c:
            *(undefined1 *)(puVar17 + 0x22) = 0;
            puVar17[0x16] = puVar26;
            uVar44 = puVar26[1];
            uVar36 = puVar26[2];
            puVar17[0x14] = uVar44;
            puVar17[0x15] = uVar36;
            puVar17[0x23] = uVar44;
            puVar17[0x24] = uVar36;
            *(undefined1 *)(puVar17 + 0x2c) = 0;
LAB_1004ef194:
            FUN_100fc273c(pcVar9 + -0x2f8,puVar17 + 0x23,param_3);
            lVar33 = *(long *)(pcVar9 + -0x2f8);
            if (lVar33 == -0x7ffffffffffffffd) {
              sVar21 = 3;
LAB_1004f06d8:
              **(undefined1 **)(pcVar9 + -0x308) = (char)sVar21;
              uVar20 = 3;
              goto LAB_1004f0b48;
            }
            puVar32 = *(undefined **)(pcVar9 + -0x2f0);
            *(undefined8 *)(pcVar9 + -0x128) = *(undefined8 *)(pcVar9 + -0x2e0);
            *(undefined8 *)(pcVar9 + -0x130) = *(undefined8 *)(pcVar9 + -0x2e8);
            *(undefined8 *)(pcVar9 + -0x118) = *(undefined8 *)(pcVar9 + -0x2d0);
            *(undefined8 *)(pcVar9 + -0x120) = *(undefined8 *)(pcVar9 + -0x2d8);
            *(undefined8 *)(pcVar9 + -0x110) = *(undefined8 *)(pcVar9 + -0x2c8);
            if (*(char *)(puVar17 + 0x2c) == '\x03') {
              if (*(char *)(puVar17 + 0x2b) == '\x03') {
                plVar15 = (long *)puVar17[0x2a];
                if (*plVar15 == 0xcc) {
                  *plVar15 = 0x84;
                }
                else {
                  (**(code **)(plVar15[2] + 0x20))();
                }
              }
              else if ((*(char *)(puVar17 + 0x2b) == '\0') && (puVar17[0x27] != 0)) {
                _free(puVar17[0x28]);
              }
            }
            if (lVar33 == -0x7ffffffffffffffe) {
              cVar11 = FUN_100c355d4(puVar32);
              if (cVar11 != '\0') {
                *(undefined **)(pcVar9 + -0x2f8) = puVar32;
                puVar42 = (undefined *)0x1;
                uVar44 = puVar17[0x14];
                puVar39 = (undefined *)puVar17[0x15];
                if ((puVar39 == (undefined *)0x0) ||
                   (puVar42 = (undefined *)_malloc(puVar39), puVar42 != (undefined *)0x0)) {
                  _memcpy(puVar42,uVar44,puVar39);
                  goto LAB_1004f03c8;
                }
                FUN_107c03c64(1,puVar39);
                goto LAB_1004efe68;
              }
              unaff_x21 = (undefined *)0x1;
              puVar42 = (undefined *)0x8;
              puVar37 = (undefined *)0x9;
              if (((ulong)puVar32 & 3) == 1) {
                uVar44 = *(undefined8 *)(puVar32 + -1);
                puVar26 = *(undefined8 **)(puVar32 + 7);
                pcVar8 = (code *)*puVar26;
                if (pcVar8 != (code *)0x0) {
                  (*pcVar8)(uVar44);
                }
                if (puVar26[1] != 0) {
                  _free(uVar44);
                }
                _free(puVar32 + -1);
                puVar39 = (undefined *)0x0;
                puVar41 = (undefined *)0x0;
                uVar35 = 0;
                puVar42 = (undefined *)0x8;
                puVar37 = (undefined *)0x9;
              }
              else {
                puVar39 = (undefined *)0x0;
                puVar41 = (undefined *)0x0;
                uVar35 = 0;
              }
            }
            else {
              puVar17[0x17] = lVar33;
              puVar17[0x18] = puVar32;
              uVar44 = *(undefined8 *)(pcVar9 + -0x130);
              uVar40 = *(undefined8 *)(pcVar9 + -0x118);
              uVar36 = *(undefined8 *)(pcVar9 + -0x120);
              puVar17[0x1a] = *(undefined8 *)(pcVar9 + -0x128);
              puVar17[0x19] = uVar44;
              puVar17[0x1c] = uVar40;
              puVar17[0x1b] = uVar36;
              puVar17[0x1d] = *(undefined8 *)(pcVar9 + -0x110);
              puVar17[0x1e] = 0;
              puVar17[0x1f] = 8;
              puVar17[0x20] = 0;
LAB_1004f00c8:
              puVar26 = puVar17 + 0x17;
              *(undefined1 *)(puVar17 + 0x25) = 0;
              puVar17[0x23] = puVar26;
              puVar17[0x24] = puVar26;
LAB_1004f00d8:
              __ZN5tokio2fs8read_dir7ReadDir15poll_next_entry17h64cae2562f764fe1E
                        (pcVar9 + -0x2f8,puVar26,param_3);
              sVar21 = *(short *)(pcVar9 + -0x2f0);
              uVar20 = 3;
              if (sVar21 != 4) {
                uVar20 = 1;
              }
              *(undefined1 *)(puVar17 + 0x25) = uVar20;
              if (sVar21 == 4) goto LAB_1004f06d8;
              puVar32 = *(undefined **)(pcVar9 + -0x2f8);
              if (sVar21 == 3) {
                uVar44 = puVar17[0x14];
                puVar39 = (undefined *)puVar17[0x15];
                lVar33 = 1;
                *(undefined **)(pcVar9 + -0x2f8) = puVar32;
                if ((puVar39 == (undefined *)0x0) || (lVar33 = _malloc(puVar39), lVar33 != 0)) {
                  _memcpy(lVar33,uVar44,puVar39);
                  puVar17[0x23] = 7;
                  puVar17[0x24] = puVar39;
                  *(short *)(puVar17 + 0x25) = (short)lVar33;
                  *(short *)((long)puVar17 + 0x12e) = (short)((ulong)lVar33 >> 0x30);
                  *(int *)((long)puVar17 + 0x12a) = (int)((ulong)lVar33 >> 0x10);
                  puVar17[0x26] = puVar39;
                  puVar17[0x27] = puVar32;
                  puVar42 = (undefined *)puVar17[0x25];
                  uVar48 = puVar17[0x29];
                  uVar47 = puVar17[0x28];
                  uVar44 = puVar17[0x2a];
                  *(undefined8 *)(pcVar9 + -0x368) = puVar17[0x2b];
                  *(undefined8 *)(pcVar9 + -0x370) = uVar44;
                  uVar36 = puVar17[0x2d];
                  uVar44 = puVar17[0x2c];
                  uVar40 = puVar17[0x2e];
                  *(undefined8 *)(pcVar9 + -0x348) = puVar17[0x2f];
                  *(undefined8 *)(pcVar9 + -0x350) = uVar40;
                  *(undefined8 *)(pcVar9 + -0x338) = uVar36;
                  *(undefined8 *)(pcVar9 + -0x340) = uVar44;
                  *(undefined8 *)(pcVar9 + -0x328) = uVar48;
                  *(undefined8 *)(pcVar9 + -0x330) = uVar47;
                  unaff_x23 = (undefined *)puVar17[0x31];
                  *(undefined8 *)(pcVar9 + -0x318) = puVar17[0x30];
                  unaff_x24 = (undefined *)puVar17[0x32];
                  *(undefined8 *)(pcVar9 + -0x380) = puVar17[0x33];
                  goto LAB_1004f0184;
                }
                FUN_107c03c64(1,puVar39);
                goto LAB_1004efe68;
              }
              uVar6 = *(undefined6 *)(pcVar9 + -0x2ee);
              *(short *)(puVar17 + 0x25) = sVar21;
              *(int *)((long)puVar17 + 0x12a) = (int)uVar6;
              *(short *)((long)puVar17 + 0x12e) = (short)((uint6)uVar6 >> 0x20);
              puVar17[0x23] = 9;
              puVar17[0x24] = puVar32;
              puVar17[0x3d] = puVar17[0x25];
              puVar17[0x3c] = puVar17[0x24];
              if (*(short *)(puVar17 + 0x3d) == 2) {
                uVar35 = puVar17[0x20];
                if (1 < uVar35) {
                  if (uVar35 < 0x15) {
                    FUN_100e94528();
                  }
                  else {
                    __ZN4core5slice4sort6stable14driftsort_main17h577bb33b89cb0145E
                              (puVar17[0x1f],uVar35,pcVar9 + -0x2f8);
                  }
                }
                if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                  if (((1 < bRam000000010b6299c0 - 1) &&
                      ((puVar32 = &
                                  __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                       , bRam000000010b6299c0 == 0 ||
                       (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (&
                                            __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                                           ),
                       puVar32 = &
                                 __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                       , cVar11 == '\0')))) ||
                     (uVar35 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                                         ),
                     puVar32 = &
                               __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                     , (uVar35 & 1) == 0)) goto LAB_1004f04e4;
                  *(undefined8 *)(pcVar9 + -0xb8) = puVar17[0x20];
                  uVar44 = puVar17[0x15];
                  *(undefined8 *)(pcVar9 + -0x80) = puVar17[0x14];
                  *(undefined8 *)(pcVar9 + -0x78) = uVar44;
                  *(char **)(pcVar9 + -0x2f8) = pcVar9 + -0xb8;
                  *(undefined **)(pcVar9 + -0x2f0) =
                       &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                  ;
                  *(char **)(pcVar9 + -0x2e8) = pcVar9 + -0x80;
                  *(undefined **)(pcVar9 + -0x2e0) =
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  *(char **)(pcVar9 + -0x90) = s_loaded__rules_files_in_108abfc20;
                  *(char **)(pcVar9 + -0x88) = pcVar9 + -0x2f8;
                  *(char **)(pcVar9 + -0xa0) = pcVar9 + -0x90;
                  *(undefined **)(pcVar9 + -0x98) = &UNK_10b208fd0;
                  *(undefined8 *)(pcVar9 + -0x1e0) = 1;
                  *(char **)(pcVar9 + -0x1d8) = pcVar9 + -0xa0;
                  *(undefined8 *)(pcVar9 + -0x1d0) = 1;
                  *(undefined **)(pcVar9 + -0x1c8) =
                       ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                       + 0x30;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                             ,pcVar9 + -0x1e0);
                  puVar39 = 
                  ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uVar44 = *(undefined8 *)
                              (
                              ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                              + 0x20);
                    uVar36 = *(undefined8 *)
                              (
                              ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                              + 0x28);
                    *(undefined8 *)(pcVar9 + -0xf0) = 4;
                    *(undefined8 *)(pcVar9 + -0xe8) = uVar44;
                    *(undefined8 *)(pcVar9 + -0xe0) = uVar36;
                    puVar42 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar42 = &UNK_10b3c24c8;
                    }
                    puVar41 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar41 = &UNK_109adfc03;
                    }
                    iVar12 = (**(code **)(puVar42 + 0x18))(puVar41,pcVar9 + -0xf0);
                    puVar32 = puVar39;
                    if (iVar12 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (puVar39,puVar41,puVar42,pcVar9 + -0xf0,pcVar9 + -0x1e0);
                    }
                  }
                }
                else {
LAB_1004f04e4:
                  puVar39 = 
                  ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uVar44 = *(undefined8 *)
                              (
                              ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                              + 0x20);
                    uVar36 = *(undefined8 *)
                              (
                              ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                              + 0x28);
                    *(undefined8 *)(pcVar9 + -0x108) = 4;
                    *(undefined8 *)(pcVar9 + -0x100) = uVar44;
                    *(undefined8 *)(pcVar9 + -0xf8) = uVar36;
                    puVar42 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar42 = &UNK_10b3c24c8;
                    }
                    puVar32 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar32 = &UNK_109adfc03;
                    }
                    iVar12 = (**(code **)(puVar42 + 0x18))(puVar32,pcVar9 + -0x108);
                    if (iVar12 != 0) {
                      uVar44 = puVar17[0x14];
                      uVar36 = puVar17[0x15];
                      *(undefined8 *)(pcVar9 + -0xa8) = puVar17[0x20];
                      *(undefined8 *)(pcVar9 + -0xa0) = uVar44;
                      *(undefined8 *)(pcVar9 + -0x98) = uVar36;
                      *(char **)(pcVar9 + -0x1e0) = pcVar9 + -0xa8;
                      *(undefined **)(pcVar9 + -0x1d8) =
                           &
                           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                      ;
                      *(char **)(pcVar9 + -0x1d0) = pcVar9 + -0xa0;
                      *(undefined **)(pcVar9 + -0x1c8) =
                           &
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                      ;
                      *(char **)(pcVar9 + -0xb8) = s_loaded__rules_files_in_108abfc20;
                      *(char **)(pcVar9 + -0xb0) = pcVar9 + -0x1e0;
                      *(char **)(pcVar9 + -200) = pcVar9 + -0xb8;
                      *(undefined **)(pcVar9 + -0xc0) = &UNK_10b208fd0;
                      *(undefined8 *)(pcVar9 + -0xf0) = 1;
                      *(char **)(pcVar9 + -0xe8) = pcVar9 + -200;
                      *(undefined8 *)(pcVar9 + -0xe0) = 1;
                      *(undefined **)(pcVar9 + -0xd8) =
                           ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                           + 0x30;
                      lVar33 = *(long *)(puVar39 + 0x60);
                      uVar36 = *(undefined8 *)(puVar39 + 0x68);
                      lVar38 = *(long *)(puVar39 + 0x50);
                      uVar40 = *(undefined8 *)(puVar39 + 0x58);
                      uVar44 = 1;
                      if (lVar38 == 0) {
                        uVar44 = 2;
                      }
                      uVar2 = *(undefined4 *)(puVar39 + 8);
                      uVar3 = *(undefined4 *)(puVar39 + 0xc);
                      *(char **)(pcVar9 + -0x90) = pcVar9 + -0xf0;
                      pcVar9[-0x88] = 1;
                      *(char **)(pcVar9 + -0x80) = pcVar9 + -0x90;
                      *(undefined **)(pcVar9 + -0x78) = &DAT_1061c2098;
                      uVar47 = 1;
                      if (lVar33 == 0) {
                        uVar47 = 2;
                      }
                      *(undefined8 *)(pcVar9 + -0x2c0) = *(undefined8 *)(pcVar9 + -0x100);
                      *(undefined8 *)(pcVar9 + -0x2c8) = *(undefined8 *)(pcVar9 + -0x108);
                      *(undefined8 *)(pcVar9 + -0x2b8) = *(undefined8 *)(pcVar9 + -0xf8);
                      *(char **)(pcVar9 + -0x2a8) = s__108b39f4f;
                      *(char **)(pcVar9 + -0x2a0) = pcVar9 + -0x80;
                      *(undefined8 *)(pcVar9 + -0x2f8) = uVar44;
                      *(long *)(pcVar9 + -0x2f0) = lVar38;
                      *(undefined8 *)(pcVar9 + -0x2e8) = uVar40;
                      *(undefined8 *)(pcVar9 + -0x2e0) = uVar47;
                      *(long *)(pcVar9 + -0x2d8) = lVar33;
                      *(undefined8 *)(pcVar9 + -0x2d0) = uVar36;
                      *(undefined4 *)(pcVar9 + -0x2b0) = uVar2;
                      *(undefined4 *)(pcVar9 + -0x2ac) = uVar3;
                      (**(code **)(puVar42 + 0x20))(puVar32,pcVar9 + -0x2f8);
                    }
                  }
                }
                puVar41 = (undefined *)puVar17[0x1e];
                puVar42 = (undefined *)puVar17[0x1f];
                puVar39 = (undefined *)puVar17[0x20];
                uVar35 = (ulong)puVar41 >> 0x10;
                if (puVar17[0x17] == -0x7fffffffffffffff) {
                  plVar15 = (long *)puVar17[0x18];
                  if (*plVar15 == 0xcc) {
                    *plVar15 = 0x84;
                  }
                  else {
                    (**(code **)(plVar15[2] + 0x20))();
                  }
                }
                else if (puVar17[0x17] != -0x8000000000000000) {
                  FUN_100d43d78();
                  lVar33 = *(long *)puVar17[0x1b];
                  *(long *)puVar17[0x1b] = lVar33 + -1;
                  LORelease();
                  if (lVar33 == 1) {
                    DataMemoryBarrier(2,1);
                    func_0x00010604ce90();
                  }
                }
                unaff_x21 = (undefined *)0x1;
                puVar37 = (undefined *)0x9;
                goto LAB_1004f03d0;
              }
              puVar17[0x3f] = puVar17[0x25];
              puVar17[0x3e] = puVar17[0x24];
              lVar33 = puVar17[0x3e];
              __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                        (puVar17 + 0x34,*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x18),
                         *(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x20),lVar33 + 0x2d,
                         *(undefined2 *)(lVar33 + 0x2a));
              *(undefined1 *)(puVar17 + 0x22) = 1;
              puVar17[0x37] = puVar17 + 0x3e;
              *(undefined1 *)(puVar17 + 0x3b) = 0;
LAB_1004efe78:
              FUN_100fc2064(pcVar9 + -0x2f8,puVar17 + 0x37,param_3);
              uVar5 = *(ushort *)(pcVar9 + -0x2f8);
              if (uVar5 == 2) {
                sVar21 = 5;
                goto LAB_1004f06d8;
              }
              sVar21 = *(short *)(pcVar9 + -0x2f6);
              puVar32 = *(undefined **)(pcVar9 + -0x2f0);
              if (*(char *)(puVar17 + 0x3b) == '\x03') {
                if (*(char *)(puVar17 + 0x3a) == '\x03') {
                  plVar15 = (long *)puVar17[0x39];
                  if (*plVar15 == 0xcc) {
                    *plVar15 = 0x84;
                  }
                  else {
                    (**(code **)(plVar15[2] + 0x20))();
                  }
                }
                else if (*(char *)(puVar17 + 0x3a) == '\0') {
                  lVar33 = *(long *)puVar17[0x38];
                  *(long *)puVar17[0x38] = lVar33 + -1;
                  LORelease();
                  if (lVar33 == 1) {
                    DataMemoryBarrier(2,1);
                    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbb218f3b3500298dE(puVar17 + 0x38);
                  }
                }
              }
              if ((uVar5 & 1) == 0) {
                bVar10 = false;
                lVar33 = puVar17[0x36];
                if (lVar33 != 0) {
                  bVar10 = *(char *)puVar17[0x35] == '/';
                }
                *(char **)(pcVar9 + -0x2f8) = (char *)puVar17[0x35];
                *(long *)(pcVar9 + -0x2f0) = lVar33;
                pcVar9[-0x2e8] = 6;
                pcVar9[-0x2be] = bVar10;
                *(undefined2 *)(pcVar9 + -0x2c0) = 0x201;
                __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                          (pcVar9 + -0x1e0,pcVar9 + -0x2f8);
                if (pcVar9[-0x1e0] == '\t') {
                  lVar33 = *(long *)(pcVar9 + -0x1d0);
                  if ((lVar33 != 2) || (**(short **)(pcVar9 + -0x1d8) != 0x2e2e)) {
                    lVar25 = -lVar33;
                    lVar38 = (long)*(short **)(pcVar9 + -0x1d8) + lVar33 + 1;
                    do {
                      if (lVar25 == 0) goto LAB_1004f0088;
                      pcVar1 = (char *)(lVar38 + -2);
                      lVar25 = lVar25 + 1;
                      lVar38 = lVar38 + -1;
                    } while (*pcVar1 != '.');
                    if ((((lVar25 != 0) &&
                         (func_0x0001055bf348(pcVar9 + -0x2f8,lVar38,lVar33 + lVar25 + -1),
                         (*(uint *)(pcVar9 + -0x2f8) & 1) == 0)) &&
                        (*(long *)(pcVar9 + -0x2e8) == 5)) &&
                       ((**(int **)(pcVar9 + -0x2f0) == 0x656c7572 &&
                         (char)(*(int **)(pcVar9 + -0x2f0))[1] == 's' && (sVar21 < -0x7000)))) {
                      *(undefined1 *)(puVar17 + 0x22) = 0;
                      uVar44 = puVar17[0x34];
                      uVar36 = puVar17[0x35];
                      uVar40 = puVar17[0x36];
                      lVar33 = puVar17[0x20];
                      if (lVar33 == puVar17[0x1e]) {
                        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17ha705f7b4376eaadfE();
                      }
                      puVar26 = (undefined8 *)(puVar17[0x1f] + lVar33 * 0x18);
                      *puVar26 = uVar44;
                      puVar26[1] = uVar36;
                      puVar26[2] = uVar40;
                      puVar17[0x20] = lVar33 + 1;
                    }
                  }
                }
LAB_1004f0088:
                if (((*(byte *)(puVar17 + 0x22) & 1) != 0) && (puVar17[0x34] != 0)) {
                  _free(puVar17[0x35]);
                }
                *(undefined1 *)(puVar17 + 0x22) = 0;
                lVar33 = *(long *)puVar17[0x3e];
                *(long *)puVar17[0x3e] = lVar33 + -1;
                LORelease();
                if (lVar33 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbb218f3b3500298dE(puVar17 + 0x3e);
                  param_3 = *(undefined8 *)(pcVar9 + -0x300);
                }
                goto LAB_1004f00c8;
              }
              uVar44 = puVar17[0x14];
              puVar39 = (undefined *)puVar17[0x15];
              puVar42 = (undefined *)0x1;
              *(undefined **)(pcVar9 + -0x2f8) = puVar32;
              if ((puVar39 != (undefined *)0x0) &&
                 (puVar42 = (undefined *)_malloc(puVar39), puVar42 == (undefined *)0x0)) {
                FUN_107c03c64(1,puVar39);
                goto LAB_1004efe68;
              }
              _memcpy(puVar42,uVar44,puVar39);
              if (puVar17[0x34] != 0) {
                _free(puVar17[0x35]);
              }
              *(undefined1 *)(puVar17 + 0x22) = 0;
              lVar33 = *(long *)puVar17[0x3e];
              *(long *)puVar17[0x3e] = lVar33 + -1;
              LORelease();
              if (lVar33 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbb218f3b3500298dE(puVar17 + 0x3e);
              }
LAB_1004f0184:
              lVar33 = puVar17[0x1f];
              lVar38 = puVar17[0x20];
              if (lVar38 != 0) {
                puVar26 = (undefined8 *)(lVar33 + 8);
                do {
                  if (puVar26[-1] != 0) {
                    _free(*puVar26);
                  }
                  puVar26 = puVar26 + 3;
                  lVar38 = lVar38 + -1;
                } while (lVar38 != 0);
              }
              if (puVar17[0x1e] != 0) {
                _free(lVar33);
              }
              if (puVar17[0x17] == -0x7fffffffffffffff) {
                plVar15 = (long *)puVar17[0x18];
                if (*plVar15 == 0xcc) {
                  *plVar15 = 0x84;
                }
                else {
                  (**(code **)(plVar15[2] + 0x20))();
                }
              }
              else if (puVar17[0x17] != -0x8000000000000000) {
                FUN_100d43d78();
                lVar33 = *(long *)puVar17[0x1b];
                *(long *)puVar17[0x1b] = lVar33 + -1;
                LORelease();
                if (lVar33 == 1) {
                  DataMemoryBarrier(2,1);
                  func_0x00010604ce90();
                }
              }
LAB_1004f03c8:
              uVar35 = (ulong)puVar39 >> 0x10;
              unaff_x21 = (undefined *)0x0;
              puVar37 = (undefined *)0x7;
              puVar41 = puVar39;
            }
LAB_1004f03d0:
            uVar44 = *(undefined8 *)(pcVar9 + -0x310);
            **(undefined1 **)(pcVar9 + -0x308) = 1;
            FUN_100d46d54(uVar44);
            puVar41 = (undefined *)((ulong)puVar41 & 0xffff | uVar35 << 0x10);
            if ((int)unaff_x21 == 0) {
              if (puVar17[0xd] != 0) {
                _free(puVar17[0xe]);
              }
              if (puVar17[10] != 0) {
                _free(puVar17[0xb]);
              }
              if (puVar17[0x12] != 0) {
                _free(puVar17[0x10]);
              }
              goto LAB_1004f08f0;
            }
            lVar33 = puVar17[2];
            *(undefined **)(pcVar9 + -0x2f8) = puVar42;
            *(undefined **)(pcVar9 + -0x2f0) = puVar42;
            *(undefined **)(pcVar9 + -0x2e8) = puVar41;
            *(undefined **)(pcVar9 + -0x2e0) = puVar42 + (long)puVar39 * 0x18;
            lVar38 = puVar17[4];
            if ((undefined *)(lVar33 - lVar38) < puVar39) {
              thunk_FUN_108855060(puVar17 + 2,lVar38,puVar39,8,0x18);
              lVar38 = puVar17[4];
            }
            _memcpy(puVar17[3] + lVar38 * 0x18,puVar42,(long)puVar39 * 0x18);
            puVar17[4] = puVar39 + lVar38;
            if (puVar41 != (undefined *)0x0) {
              _free(puVar42);
            }
            if (puVar17[0xd] != 0) {
              _free(puVar17[0xe]);
            }
            param_3 = *(undefined8 *)(pcVar9 + -0x300);
            if (puVar17[10] != 0) {
              _free(puVar17[0xb]);
            }
          }
          puVar26 = (undefined8 *)puVar17[0x13];
          puVar23 = (undefined8 *)puVar17[0x11];
        }
      }
      if (puVar17[0x12] != 0) {
        _free(puVar17[0x10]);
      }
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        if (bRam000000010b629978 - 1 < 2) {
LAB_1004ef5d8:
          uVar35 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                             );
          if ((uVar35 & 1) != 0) {
            *(undefined **)(pcVar9 + -0xf0) = &UNK_108ca2a74;
            *(undefined8 *)(pcVar9 + -0xe8) = 0x29;
            *(undefined8 **)(pcVar9 + -0x108) = puVar17 + 2;
            *(char **)(pcVar9 + -0x2f8) = pcVar9 + -0xf0;
            *(undefined **)(pcVar9 + -0x2f0) = &UNK_10b208fd0;
            *(char **)(pcVar9 + -0x2e8) = pcVar9 + -0x108;
            *(undefined **)(pcVar9 + -0x2e0) = &UNK_10b215510;
            *(undefined8 *)(pcVar9 + -0x1e0) = 1;
            *(char **)(pcVar9 + -0x1d8) = pcVar9 + -0x2f8;
            *(undefined8 *)(pcVar9 + -0x1d0) = 2;
            *(long *)(pcVar9 + -0x1c8) =
                 ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                 + 0x30;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                       ,pcVar9 + -0x1e0);
            lVar33 = 
            ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar44 = *(undefined8 *)
                        (
                        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                        + 0x20);
              uVar36 = *(undefined8 *)
                        (
                        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                        + 0x28);
              *(undefined8 *)(pcVar9 + -0x130) = 5;
              *(undefined8 *)(pcVar9 + -0x128) = uVar44;
              *(undefined8 *)(pcVar9 + -0x120) = uVar36;
              unaff_x23 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                unaff_x23 = &UNK_10b3c24c8;
              }
              unaff_x24 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                unaff_x24 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(unaff_x23 + 0x18))(unaff_x24,pcVar9 + -0x130);
              if (iVar12 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar33,unaff_x24,unaff_x23,pcVar9 + -0x130,pcVar9 + -0x1e0);
              }
            }
            goto LAB_1004ef6e0;
          }
        }
        else if (bRam000000010b629978 != 0) {
          cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                             );
          param_3 = *(undefined8 *)(pcVar9 + -0x300);
          if (cVar11 != '\0') goto LAB_1004ef5d8;
        }
      }
      lVar33 = 
      ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        unaff_x23 = &
                    __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
        ;
        uVar44 = *(undefined8 *)
                  (
                  ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                  + 0x20);
        uVar36 = *(undefined8 *)
                  (
                  ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                  + 0x28);
        *(undefined8 *)(pcVar9 + -0x1f8) = 5;
        *(undefined8 *)(pcVar9 + -0x1f0) = uVar44;
        *(undefined8 *)(pcVar9 + -0x1e8) = uVar36;
        unaff_x21 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x21 = &UNK_10b3c24c8;
        }
        puVar32 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar32 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(unaff_x21 + 0x18))(puVar32,pcVar9 + -0x1f8);
        if (iVar12 != 0) {
          *(undefined **)(pcVar9 + -0x80) = &UNK_108ca2a74;
          *(undefined8 *)(pcVar9 + -0x78) = 0x29;
          *(undefined8 **)(pcVar9 + -0x90) = puVar17 + 2;
          *(char **)(pcVar9 + -0x1e0) = pcVar9 + -0x80;
          *(undefined **)(pcVar9 + -0x1d8) = &UNK_10b208fd0;
          *(char **)(pcVar9 + -0x1d0) = pcVar9 + -0x90;
          *(undefined **)(pcVar9 + -0x1c8) = &UNK_10b215510;
          *(undefined8 *)(pcVar9 + -0x130) = 1;
          *(char **)(pcVar9 + -0x128) = pcVar9 + -0x1e0;
          *(undefined8 *)(pcVar9 + -0x120) = 2;
          *(long *)(pcVar9 + -0x118) =
               ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
               + 0x30;
          *(undefined8 *)(pcVar9 + -0x2c0) = *(undefined8 *)(pcVar9 + -0x1f0);
          *(undefined8 *)(pcVar9 + -0x2c8) = *(undefined8 *)(pcVar9 + -0x1f8);
          *(undefined8 *)(pcVar9 + -0x2b8) = *(undefined8 *)(pcVar9 + -0x1e8);
          lVar38 = *(long *)(lVar33 + 0x60);
          uVar36 = *(undefined8 *)(lVar33 + 0x68);
          lVar25 = *(long *)(lVar33 + 0x50);
          uVar40 = *(undefined8 *)(lVar33 + 0x58);
          uVar44 = 1;
          if (lVar25 == 0) {
            uVar44 = 2;
          }
          uVar2 = *(undefined4 *)(lVar33 + 8);
          uVar3 = *(undefined4 *)(lVar33 + 0xc);
          *(char **)(pcVar9 + -0x108) = pcVar9 + -0x130;
          pcVar9[-0x100] = 1;
          *(char **)(pcVar9 + -0xf0) = pcVar9 + -0x108;
          *(undefined **)(pcVar9 + -0xe8) = &DAT_1061c2098;
          uVar47 = 1;
          if (lVar38 == 0) {
            uVar47 = 2;
          }
          *(char **)(pcVar9 + -0x2a8) = s__108b39f4f;
          *(char **)(pcVar9 + -0x2a0) = pcVar9 + -0xf0;
          *(undefined8 *)(pcVar9 + -0x2f8) = uVar44;
          *(long *)(pcVar9 + -0x2f0) = lVar25;
          *(undefined8 *)(pcVar9 + -0x2e8) = uVar40;
          *(undefined8 *)(pcVar9 + -0x2e0) = uVar47;
          *(long *)(pcVar9 + -0x2d8) = lVar38;
          *(undefined8 *)(pcVar9 + -0x2d0) = uVar36;
          *(undefined4 *)(pcVar9 + -0x2b0) = uVar2;
          *(undefined4 *)(pcVar9 + -0x2ac) = uVar3;
          (**(code **)(unaff_x21 + 0x20))(puVar32,pcVar9 + -0x2f8);
        }
      }
LAB_1004ef6e0:
      pauVar16 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar16[1][0] == '\x01') {
        auVar49 = *pauVar16;
      }
      else {
        auVar49 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar16 + 8) = auVar49._8_8_;
        pauVar16[1][0] = 1;
      }
      *(long *)*pauVar16 = auVar49._0_8_ + 2;
      puVar17[7] = 0;
      puVar17[8] = 0;
      puVar17[9] = 8;
      puVar17[10] = 0;
      puVar17[0xb] = 0;
      puVar17[0xc] = 8;
      puVar17[0xd] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = &UNK_108da7b18;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      *(undefined1 (*) [16])(puVar17 + 0x12) = auVar49;
      puVar17[0x15] = 0;
      puVar17[0x14] = &UNK_108da7b18;
      puVar17[0x17] = 0;
      puVar17[0x16] = 0;
      puVar17[0x18] = auVar49._0_8_ + 1;
      puVar17[0x19] = auVar49._8_8_;
      *(undefined1 *)(puVar17 + 6) = 1;
      lVar33 = puVar17[3];
      lVar38 = lVar33 + puVar17[4] * 0x18;
      puVar17[0x1b] = lVar33;
      puVar17[0x1c] = lVar38;
      if (lVar33 != lVar38) {
        do {
          puVar17[0x1a] = lVar33;
          puVar17[0x1b] = lVar33 + 0x18;
          puVar17[0x1d] = lVar33;
          *(undefined1 *)(puVar17 + 0x24) = 0;
LAB_1004f0bc0:
          FUN_100fc00fc(pcVar9 + -0x2f8,puVar17 + 0x1d,param_3);
          lVar33 = *(long *)(pcVar9 + -0x2f8);
          if (lVar33 == -0x7fffffffffffffff) {
            uVar20 = 4;
LAB_1004f0b48:
            puVar26 = *(undefined8 **)(pcVar9 + -0x358);
            **(undefined1 **)(pcVar9 + -0x360) = uVar20;
            *puVar26 = 2;
            uVar20 = 3;
            goto LAB_1004f0b5c;
          }
          puVar34 = *(undefined **)(pcVar9 + -0x2f0);
          uVar44 = *(undefined8 *)(pcVar9 + -0x2e8);
          if (*(char *)(puVar17 + 0x24) == '\x03') {
            if (*(char *)(puVar17 + 0x23) == '\x03') {
              plVar15 = (long *)puVar17[0x22];
              if (*plVar15 == 0xcc) {
                *plVar15 = 0x84;
              }
              else {
                (**(code **)(plVar15[2] + 0x20))();
              }
            }
            else if ((*(char *)(puVar17 + 0x23) == '\0') && (puVar17[0x1f] != 0)) {
              _free(puVar17[0x20]);
            }
          }
          uVar36 = *(undefined8 *)(puVar17[0x1a] + 8);
          puVar41 = *(undefined **)(puVar17[0x1a] + 0x10);
          if (lVar33 == -0x8000000000000000) {
            *(undefined **)(pcVar9 + -0x2f8) = puVar34;
            if (puVar41 == (undefined *)0x0) {
              puVar42 = (undefined *)0x1;
            }
            else {
              puVar42 = (undefined *)_malloc(puVar41);
              if (puVar42 == (undefined *)0x0) {
                FUN_107c03c64(1,puVar41);
                goto LAB_1004efe68;
              }
            }
            _memcpy(puVar42,uVar36,puVar41);
            puVar37 = (undefined *)0x8;
            bVar4 = *(byte *)(puVar17 + 6);
            puVar32 = puVar34;
            puVar39 = puVar41;
            goto joined_r0x0001004f0d84;
          }
          __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                    (pcVar9 + -0x2f8,uVar36,puVar41);
          uVar36 = *(undefined8 *)(pcVar9 + -0x2f0);
          unaff_x23 = *(undefined **)(pcVar9 + -0x2e8);
          unaff_x24 = (undefined *)0x1;
          if ((unaff_x23 != (undefined *)0x0) &&
             (unaff_x24 = (undefined *)_malloc(unaff_x23), unaff_x24 == (undefined *)0x0)) {
            FUN_107c03c64(1,unaff_x23);
            goto LAB_1004efe68;
          }
          _memcpy(unaff_x24,uVar36,unaff_x23);
          if ((*(ulong *)(pcVar9 + -0x2f8) & 0x7fffffffffffffff) != 0) {
            _free(uVar36);
          }
          __ZN16codex_execpolicy6parser12PolicyParser5parse17h4518faf98453806eE
                    (pcVar9 + -0x2f8,puVar17 + 7,unaff_x24,unaff_x23,puVar34,uVar44);
          puVar37 = *(undefined **)(pcVar9 + -0x2f8);
          if (puVar37 != (undefined *)0x7) {
            puVar41 = *(undefined **)(pcVar9 + -0x2f0);
            puVar42 = *(undefined **)(pcVar9 + -0x2e8);
            puVar39 = *(undefined **)(pcVar9 + -0x2e0);
            puVar32 = *(undefined **)(pcVar9 + -0x2d8);
            *(undefined8 *)(pcVar9 + -0x368) = *(undefined8 *)(pcVar9 + -0x2b8);
            *(undefined8 *)(pcVar9 + -0x370) = *(undefined8 *)(pcVar9 + -0x2c0);
            *(undefined8 *)(pcVar9 + -0x348) = *(undefined8 *)(pcVar9 + -0x298);
            *(undefined8 *)(pcVar9 + -0x350) = *(undefined8 *)(pcVar9 + -0x2a0);
            *(undefined8 *)(pcVar9 + -0x338) = *(undefined8 *)(pcVar9 + -0x2a8);
            *(undefined8 *)(pcVar9 + -0x340) = *(undefined8 *)(pcVar9 + -0x2b0);
            *(undefined8 *)(pcVar9 + -0x328) = *(undefined8 *)(pcVar9 + -0x2c8);
            *(undefined8 *)(pcVar9 + -0x330) = *(undefined8 *)(pcVar9 + -0x2d0);
            *(undefined8 *)(pcVar9 + -0x318) = *(undefined8 *)(pcVar9 + -0x290);
            if (lVar33 != 0) {
              _free(puVar34);
            }
            *(undefined **)(pcVar9 + -0x380) = unaff_x23;
            unaff_x21 = *(undefined **)(pcVar9 + -0x318);
            bVar4 = *(byte *)(puVar17 + 6);
            goto joined_r0x0001004f0d84;
          }
          if (unaff_x23 != (undefined *)0x0) {
            _free(unaff_x24);
          }
          if (lVar33 != 0) {
            _free(puVar34);
          }
          lVar33 = puVar17[0x1b];
        } while (lVar33 != puVar17[0x1c]);
      }
      uVar44 = puVar17[0xe];
      uVar40 = puVar17[0x11];
      uVar36 = puVar17[0x10];
      *(undefined8 *)(pcVar9 + -0x1c0) = puVar17[0xf];
      *(undefined8 *)(pcVar9 + -0x1c8) = uVar44;
      *(undefined8 *)(pcVar9 + -0x1b0) = uVar40;
      *(undefined8 *)(pcVar9 + -0x1b8) = uVar36;
      uVar44 = puVar17[0x12];
      uVar40 = puVar17[0x15];
      uVar36 = puVar17[0x14];
      *(undefined8 *)(pcVar9 + -0x1a0) = puVar17[0x13];
      *(undefined8 *)(pcVar9 + -0x1a8) = uVar44;
      *(undefined8 *)(pcVar9 + -400) = uVar40;
      *(undefined8 *)(pcVar9 + -0x198) = uVar36;
      uVar44 = puVar17[0x16];
      uVar40 = puVar17[0x19];
      uVar36 = puVar17[0x18];
      *(undefined8 *)(pcVar9 + -0x180) = puVar17[0x17];
      *(undefined8 *)(pcVar9 + -0x188) = uVar44;
      *(undefined1 *)(puVar17 + 6) = 0;
      lVar38 = puVar17[0xc];
      lVar33 = puVar17[0xd];
      *(undefined8 *)(pcVar9 + -0x170) = uVar40;
      *(undefined8 *)(pcVar9 + -0x178) = uVar36;
      uVar36 = puVar17[9];
      uVar44 = puVar17[8];
      lVar25 = puVar17[0xb];
      *(undefined8 *)(pcVar9 + -0x1d0) = puVar17[10];
      lVar33 = lVar33 + 1;
      *(undefined8 *)(pcVar9 + -0x1d8) = uVar36;
      *(undefined8 *)(pcVar9 + -0x1e0) = uVar44;
      lVar14 = lVar38;
      while (lVar33 = lVar33 + -1, lVar33 != 0) {
        FUN_103ba8c10(lVar14);
        lVar14 = lVar14 + 0x80;
      }
      if (lVar25 != 0) {
        _free(lVar38);
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b629960 - 1 < 2 ||
           ((bRam000000010b629960 != 0 &&
            (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                                ), cVar11 != '\0')))))) &&
         (uVar35 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                             ), (uVar35 & 1) != 0)) {
        *(undefined8 *)(pcVar9 + -0x90) = puVar17[4];
        *(char **)(pcVar9 + -0xf0) = pcVar9 + -0x90;
        *(undefined **)(pcVar9 + -0xe8) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(char **)(pcVar9 + -0x108) = s_loaded_rules_from_files_108abfbe9;
        *(char **)(pcVar9 + -0x100) = pcVar9 + -0xf0;
        *(char **)(pcVar9 + -0x80) = pcVar9 + -0x108;
        *(undefined **)(pcVar9 + -0x78) = &UNK_10b208fd0;
        *(undefined8 *)(pcVar9 + -0x2f8) = 1;
        *(char **)(pcVar9 + -0x2f0) = pcVar9 + -0x80;
        *(undefined8 *)(pcVar9 + -0x2e8) = 1;
        *(long *)(pcVar9 + -0x2e0) =
             ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
             + 0x30;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                   ,pcVar9 + -0x2f8);
        lVar33 = 
        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar44 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                    + 0x20);
          uVar36 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                    + 0x28);
          *(undefined8 *)(pcVar9 + -0x130) = 4;
          *(undefined8 *)(pcVar9 + -0x128) = uVar44;
          *(undefined8 *)(pcVar9 + -0x120) = uVar36;
          puVar32 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar32 = &UNK_10b3c24c8;
          }
          puVar39 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar39 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar32 + 0x18))(puVar39,pcVar9 + -0x130);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar33,puVar39,puVar32,pcVar9 + -0x130,pcVar9 + -0x2f8);
          }
        }
      }
      else {
        lVar33 = 
        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar44 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                    + 0x20);
          uVar36 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                    + 0x28);
          *(undefined8 *)(pcVar9 + -0x160) = 4;
          *(undefined8 *)(pcVar9 + -0x158) = uVar44;
          *(undefined8 *)(pcVar9 + -0x150) = uVar36;
          puVar32 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar32 = &UNK_10b3c24c8;
          }
          puVar39 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar39 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar32 + 0x18))(puVar39,pcVar9 + -0x160);
          if (iVar12 != 0) {
            *(undefined8 *)(pcVar9 + -0x90) = puVar17[4];
            *(char **)(pcVar9 + -0xf0) = pcVar9 + -0x90;
            *(undefined **)(pcVar9 + -0xe8) =
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            *(char **)(pcVar9 + -0x108) = s_loaded_rules_from_files_108abfbe9;
            *(char **)(pcVar9 + -0x100) = pcVar9 + -0xf0;
            *(char **)(pcVar9 + -0x80) = pcVar9 + -0x108;
            *(undefined **)(pcVar9 + -0x78) = &UNK_10b208fd0;
            *(undefined8 *)(pcVar9 + -0x2f8) = 1;
            *(char **)(pcVar9 + -0x2f0) = pcVar9 + -0x80;
            *(undefined8 *)(pcVar9 + -0x2e8) = 1;
            *(long *)(pcVar9 + -0x2e0) =
                 ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                 + 0x30;
            *(undefined8 *)(pcVar9 + -0x128) = *(undefined8 *)(pcVar9 + -0x158);
            *(undefined8 *)(pcVar9 + -0x130) = *(undefined8 *)(pcVar9 + -0x160);
            *(undefined8 *)(pcVar9 + -0x120) = *(undefined8 *)(pcVar9 + -0x150);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar33,puVar39,puVar32,pcVar9 + -0x130,pcVar9 + -0x2f8);
          }
        }
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b629948 - 1 < 2 ||
           ((bRam000000010b629948 != 0 &&
            (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                                ), cVar11 != '\0')))))) &&
         (uVar35 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                             ), (uVar35 & 1) != 0)) {
        *(undefined **)(pcVar9 + -0x108) = &UNK_108ca2a88;
        *(undefined8 *)(pcVar9 + -0x100) = 0x31;
        *(char **)(pcVar9 + -0x80) = pcVar9 + -0x1e0;
        *(char **)(pcVar9 + -0x2f8) = pcVar9 + -0x108;
        *(undefined **)(pcVar9 + -0x2f0) = &UNK_10b208fd0;
        *(char **)(pcVar9 + -0x2e8) = pcVar9 + -0x80;
        *(undefined **)(pcVar9 + -0x2e0) = &UNK_10b215530;
        *(undefined8 *)(pcVar9 + -0x130) = 1;
        *(char **)(pcVar9 + -0x128) = pcVar9 + -0x2f8;
        *(undefined8 *)(pcVar9 + -0x120) = 2;
        *(long *)(pcVar9 + -0x118) =
             ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
             + 0x30;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                   ,pcVar9 + -0x130);
        lVar33 = 
        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar44 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                    + 0x20);
          uVar36 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                    + 0x28);
          *(undefined8 *)(pcVar9 + -0xf0) = 5;
          *(undefined8 *)(pcVar9 + -0xe8) = uVar44;
          *(undefined8 *)(pcVar9 + -0xe0) = uVar36;
          puVar32 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar32 = &UNK_10b3c24c8;
          }
          puVar39 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar39 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar32 + 0x18))(puVar39,pcVar9 + -0xf0);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar33,puVar39,puVar32,pcVar9 + -0xf0,pcVar9 + -0x130);
          }
        }
      }
      else {
        lVar33 = 
        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar44 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                    + 0x20);
          uVar36 = *(undefined8 *)
                    (
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                    + 0x28);
          *(undefined8 *)(pcVar9 + -0x148) = 5;
          *(undefined8 *)(pcVar9 + -0x140) = uVar44;
          *(undefined8 *)(pcVar9 + -0x138) = uVar36;
          puVar32 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar32 = &UNK_10b3c24c8;
          }
          puVar39 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar39 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar32 + 0x18))(puVar39,pcVar9 + -0x148);
          if (iVar12 != 0) {
            *(undefined **)(pcVar9 + -0x108) = &UNK_108ca2a88;
            *(undefined8 *)(pcVar9 + -0x100) = 0x31;
            *(char **)(pcVar9 + -0x80) = pcVar9 + -0x1e0;
            *(char **)(pcVar9 + -0x2f8) = pcVar9 + -0x108;
            *(undefined **)(pcVar9 + -0x2f0) = &UNK_10b208fd0;
            *(char **)(pcVar9 + -0x2e8) = pcVar9 + -0x80;
            *(undefined **)(pcVar9 + -0x2e0) = &UNK_10b215530;
            *(undefined8 *)(pcVar9 + -0x130) = 1;
            *(char **)(pcVar9 + -0x128) = pcVar9 + -0x2f8;
            *(undefined8 *)(pcVar9 + -0x120) = 2;
            *(long *)(pcVar9 + -0x118) =
                 ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                 + 0x30;
            *(undefined8 *)(pcVar9 + -0xe8) = *(undefined8 *)(pcVar9 + -0x140);
            *(undefined8 *)(pcVar9 + -0xf0) = *(undefined8 *)(pcVar9 + -0x148);
            *(undefined8 *)(pcVar9 + -0xe0) = *(undefined8 *)(pcVar9 + -0x138);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar33,puVar39,puVar32,pcVar9 + -0xf0,pcVar9 + -0x130);
          }
        }
      }
      if (*(long *)(**(long **)(pcVar9 + -0x378) + 0x4e8) == -0x8000000000000000) {
        puVar41 = *(undefined **)(pcVar9 + -0x1e0);
        puVar42 = *(undefined **)(pcVar9 + -0x1d8);
        puVar39 = *(undefined **)(pcVar9 + -0x1d0);
        puVar32 = *(undefined **)(pcVar9 + -0x1c8);
        *(undefined8 *)(pcVar9 + -0x368) = *(undefined8 *)(pcVar9 + -0x1a8);
        *(undefined8 *)(pcVar9 + -0x370) = *(undefined8 *)(pcVar9 + -0x1b0);
        *(undefined8 *)(pcVar9 + -0x348) = *(undefined8 *)(pcVar9 + -0x188);
        *(undefined8 *)(pcVar9 + -0x350) = *(undefined8 *)(pcVar9 + -400);
        *(undefined8 *)(pcVar9 + -0x338) = *(undefined8 *)(pcVar9 + -0x198);
        *(undefined8 *)(pcVar9 + -0x340) = *(undefined8 *)(pcVar9 + -0x1a0);
        *(undefined8 *)(pcVar9 + -0x328) = *(undefined8 *)(pcVar9 + -0x1b8);
        *(undefined8 *)(pcVar9 + -0x330) = *(undefined8 *)(pcVar9 + -0x1c0);
        unaff_x21 = *(undefined **)(pcVar9 + -0x180);
        unaff_x23 = *(undefined **)(pcVar9 + -0x178);
        puVar37 = (undefined *)0x9;
        unaff_x24 = *(undefined **)(pcVar9 + -0x170);
        bVar4 = *(byte *)(puVar17 + 6);
joined_r0x0001004f0d84:
        if ((bVar4 & 1) != 0) {
          FUN_100e09138(puVar17 + 7);
        }
        *(undefined **)(pcVar9 + -0x318) = unaff_x21;
        *(undefined1 *)(puVar17 + 6) = 0;
LAB_1004f08f0:
        lVar33 = puVar17[4];
        *(undefined8 *)(pcVar9 + -0x300) = puVar17[3];
        if (lVar33 != 0) {
          puVar26 = (undefined8 *)(*(long *)(pcVar9 + -0x300) + 8);
          do {
            if (puVar26[-1] != 0) {
              _free(*puVar26);
            }
            puVar26 = puVar26 + 3;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        lVar33 = puVar17[2];
        puVar34 = *(undefined **)(pcVar9 + -0x380);
      }
      else {
        __ZN16codex_execpolicy6policy6Policy13merge_overlay17hf62801808cd275daE
                  (pcVar9 + -0x2f8,pcVar9 + -0x1e0,**(long **)(pcVar9 + -0x378) + 0x4e8);
        puVar41 = *(undefined **)(pcVar9 + -0x2f8);
        puVar42 = *(undefined **)(pcVar9 + -0x2f0);
        puVar39 = *(undefined **)(pcVar9 + -0x2e8);
        puVar32 = *(undefined **)(pcVar9 + -0x2e0);
        *(undefined8 *)(pcVar9 + -0x368) = *(undefined8 *)(pcVar9 + -0x2c0);
        *(undefined8 *)(pcVar9 + -0x370) = *(undefined8 *)(pcVar9 + -0x2c8);
        *(undefined8 *)(pcVar9 + -0x348) = *(undefined8 *)(pcVar9 + -0x2a0);
        *(undefined8 *)(pcVar9 + -0x350) = *(undefined8 *)(pcVar9 + -0x2a8);
        *(undefined8 *)(pcVar9 + -0x338) = *(undefined8 *)(pcVar9 + -0x2b0);
        *(undefined8 *)(pcVar9 + -0x340) = *(undefined8 *)(pcVar9 + -0x2b8);
        *(undefined8 *)(pcVar9 + -0x328) = *(undefined8 *)(pcVar9 + -0x2d0);
        *(undefined8 *)(pcVar9 + -0x330) = *(undefined8 *)(pcVar9 + -0x2d8);
        unaff_x23 = *(undefined **)(pcVar9 + -0x290);
        *(undefined8 *)(pcVar9 + -0x318) = *(undefined8 *)(pcVar9 + -0x298);
        unaff_x24 = *(undefined **)(pcVar9 + -0x288);
        FUN_100df7a58(pcVar9 + -0x1e0);
        *(undefined1 *)(puVar17 + 6) = 0;
        lVar33 = puVar17[4];
        *(undefined8 *)(pcVar9 + -0x300) = puVar17[3];
        if (lVar33 != 0) {
          puVar26 = (undefined8 *)(*(long *)(pcVar9 + -0x300) + 8);
          do {
            if (puVar26[-1] != 0) {
              _free(*puVar26);
            }
            puVar26 = puVar26 + 3;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        puVar34 = (undefined *)0x0;
        lVar33 = puVar17[2];
        puVar37 = (undefined *)0x9;
      }
      if (lVar33 != 0) {
        _free(*(undefined8 *)(pcVar9 + -0x300));
      }
      **(undefined1 **)(pcVar9 + -0x360) = 1;
      FUN_100e6ae88(*(undefined8 *)(pcVar9 + -0x378));
      puVar18 = *(undefined **)(pcVar9 + -0x318);
      puVar30 = *(undefined **)(pcVar9 + -0x328);
      puVar46 = *(undefined **)(pcVar9 + -0x368);
      auVar7._8_8_ = unaff_x24;
      auVar7._0_8_ = puVar46;
      puVar45 = *(undefined **)(pcVar9 + -0x370);
      auVar51._8_8_ = unaff_x23;
      auVar51._0_8_ = puVar45;
      puVar27 = *(undefined **)(pcVar9 + -0x350);
      if (puVar37 == (undefined *)0x9) {
        uVar44 = 0;
        unaff_x24 = (undefined *)0x9;
        puVar19 = puVar18;
        puVar24 = puVar27;
        puVar27 = *(undefined **)(pcVar9 + -0x348);
        puVar28 = puVar30;
        puVar29 = *(undefined **)(pcVar9 + -0x330);
        puVar30 = puVar45;
        puVar45 = *(undefined **)(pcVar9 + -0x338);
        puVar31 = puVar39;
        puVar18 = unaff_x23;
        puVar46 = *(undefined **)(pcVar9 + -0x340);
        puVar37 = puVar41;
        puVar39 = puVar32;
        puVar34 = puVar41;
        puVar41 = puVar42;
        auVar51 = auVar7;
      }
      else if (puVar37 < (undefined *)0x7) {
        *(undefined **)(pcVar9 + -0x2f8) = puVar37;
        *(undefined **)(pcVar9 + -0x2f0) = puVar41;
        *(undefined **)(pcVar9 + -0x2e8) = puVar42;
        *(undefined **)(pcVar9 + -0x2e0) = puVar39;
        *(undefined **)(pcVar9 + -0x2d8) = puVar32;
        *(undefined8 *)(pcVar9 + -0x2c8) = *(undefined8 *)(pcVar9 + -0x328);
        *(undefined8 *)(pcVar9 + -0x2d0) = *(undefined8 *)(pcVar9 + -0x330);
        *(undefined **)(pcVar9 + -0x2b8) = puVar46;
        *(undefined **)(pcVar9 + -0x2c0) = puVar45;
        *(undefined8 *)(pcVar9 + -0x2a8) = *(undefined8 *)(pcVar9 + -0x338);
        *(undefined8 *)(pcVar9 + -0x2b0) = *(undefined8 *)(pcVar9 + -0x340);
        *(undefined8 *)(pcVar9 + -0x298) = *(undefined8 *)(pcVar9 + -0x348);
        *(undefined8 *)(pcVar9 + -0x2a0) = *(undefined8 *)(pcVar9 + -0x350);
        *(undefined **)(pcVar9 + -0x290) = puVar18;
        *(undefined **)(pcVar9 + -0x288) = unaff_x23;
        *(undefined **)(pcVar9 + -0x280) = unaff_x24;
        *(undefined **)(pcVar9 + -0x278) = puVar34;
        pauVar16 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar16[1][0] == '\x01') {
          auVar51 = *pauVar16;
        }
        else {
          auVar51 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar16 + 8) = auVar51._8_8_;
          pauVar16[1][0] = 1;
        }
        puVar46 = auVar51._8_8_;
        puVar27 = (undefined *)0x0;
        uVar44 = 0;
        puVar30 = (undefined *)0x0;
        *(long *)*pauVar16 = auVar51._0_8_ + 2;
        *(undefined8 *)(pcVar9 + -0x228) = *(undefined8 *)(pcVar9 + -0x2a0);
        *(undefined8 *)(pcVar9 + -0x230) = *(undefined8 *)(pcVar9 + -0x2a8);
        *(undefined8 *)(pcVar9 + -0x218) = *(undefined8 *)(pcVar9 + -0x290);
        *(undefined8 *)(pcVar9 + -0x220) = *(undefined8 *)(pcVar9 + -0x298);
        puVar18 = (undefined *)(auVar51._0_8_ + 1);
        *(undefined8 *)(pcVar9 + -0x208) = *(undefined8 *)(pcVar9 + -0x280);
        *(undefined8 *)(pcVar9 + -0x210) = *(undefined8 *)(pcVar9 + -0x288);
        *(undefined8 *)(pcVar9 + -0x200) = *(undefined8 *)(pcVar9 + -0x278);
        *(undefined8 *)(pcVar9 + -0x268) = *(undefined8 *)(pcVar9 + -0x2e0);
        *(undefined8 *)(pcVar9 + -0x270) = *(undefined8 *)(pcVar9 + -0x2e8);
        *(undefined8 *)(pcVar9 + -600) = *(undefined8 *)(pcVar9 + -0x2d0);
        *(undefined8 *)(pcVar9 + -0x260) = *(undefined8 *)(pcVar9 + -0x2d8);
        puVar39 = &UNK_108da7b18;
        *(undefined8 *)(pcVar9 + -0x248) = *(undefined8 *)(pcVar9 + -0x2c0);
        *(undefined8 *)(pcVar9 + -0x250) = *(undefined8 *)(pcVar9 + -0x2c8);
        *(undefined8 *)(pcVar9 + -0x238) = *(undefined8 *)(pcVar9 + -0x2b0);
        *(undefined8 *)(pcVar9 + -0x240) = *(undefined8 *)(pcVar9 + -0x2b8);
        unaff_x24 = puVar37;
        puVar19 = (undefined *)0x0;
        puVar24 = (undefined *)0x0;
        puVar28 = (undefined *)0x0;
        puVar29 = (undefined *)0x0;
        puVar45 = puVar39;
        puVar31 = (undefined *)0x0;
        puVar37 = (undefined *)0x0;
        puVar34 = puVar41;
        puVar41 = (undefined *)0x8;
      }
      else {
        uVar44 = 1;
        puVar19 = *(undefined **)(pcVar9 + -0x348);
        puVar24 = *(undefined **)(pcVar9 + -0x338);
        puVar28 = *(undefined **)(pcVar9 + -0x330);
        puVar29 = puVar32;
        puVar45 = *(undefined **)(pcVar9 + -0x340);
        puVar31 = puVar42;
      }
      puVar26 = *(undefined8 **)(pcVar9 + -0x358);
      *puVar26 = uVar44;
      puVar26[1] = puVar37;
      puVar26[2] = puVar41;
      puVar26[3] = puVar31;
      puVar26[4] = puVar39;
      puVar26[5] = puVar29;
      puVar26[6] = puVar28;
      puVar26[7] = puVar30;
      puVar26[8] = auVar51._0_8_;
      puVar26[9] = puVar46;
      puVar26[10] = puVar45;
      puVar26[0xb] = puVar24;
      puVar26[0xc] = puVar27;
      puVar26[0xd] = puVar19;
      puVar26[0xe] = puVar18;
      puVar26[0xf] = auVar51._8_8_;
      puVar26[0x10] = unaff_x24;
      puVar26[0x11] = puVar34;
      puVar26[0x20] = *(undefined8 *)(pcVar9 + -0x200);
      uVar44 = *(undefined8 *)(pcVar9 + -0x220);
      uVar40 = *(undefined8 *)(pcVar9 + -0x208);
      uVar36 = *(undefined8 *)(pcVar9 + -0x210);
      puVar26[0x1d] = *(undefined8 *)(pcVar9 + -0x218);
      puVar26[0x1c] = uVar44;
      puVar26[0x1f] = uVar40;
      puVar26[0x1e] = uVar36;
      uVar44 = *(undefined8 *)(pcVar9 + -0x240);
      uVar40 = *(undefined8 *)(pcVar9 + -0x228);
      uVar36 = *(undefined8 *)(pcVar9 + -0x230);
      puVar26[0x19] = *(undefined8 *)(pcVar9 + -0x238);
      puVar26[0x18] = uVar44;
      puVar26[0x1b] = uVar40;
      puVar26[0x1a] = uVar36;
      uVar44 = *(undefined8 *)(pcVar9 + -0x260);
      uVar40 = *(undefined8 *)(pcVar9 + -0x248);
      uVar36 = *(undefined8 *)(pcVar9 + -0x250);
      puVar26[0x15] = *(undefined8 *)(pcVar9 + -600);
      puVar26[0x14] = uVar44;
      puVar26[0x17] = uVar40;
      puVar26[0x16] = uVar36;
      uVar44 = *(undefined8 *)(pcVar9 + -0x270);
      uVar20 = 1;
      puVar26[0x13] = *(undefined8 *)(pcVar9 + -0x268);
      puVar26[0x12] = uVar44;
LAB_1004f0b5c:
      *(undefined1 *)(puVar17 + 0x40) = uVar20;
      return;
    }
    FUN_107c05cc0(&UNK_10b2155e0);
LAB_1004ef0e4:
    FUN_107c05cc4(&UNK_10b2155e0);
    uVar22 = extraout_w8;
  }
  else {
    if (bVar4 != 3) goto LAB_1004ef0e4;
    bVar4 = *(byte *)((long)puVar17 + 0x31);
    uVar22 = (uint)bVar4;
    *(byte **)(pcVar9 + -0x360) = (byte *)((long)puVar17 + 0x31);
    *(undefined8 **)(pcVar9 + -0x378) = puVar17 + 1;
    if (2 < bVar4) {
      if (bVar4 != 3) goto LAB_1004f0bc0;
      bVar4 = *(byte *)((long)puVar17 + 0x111);
      *(undefined8 **)(pcVar9 + -0x310) = puVar17 + 0x14;
      *(long *)(pcVar9 + -0x308) = (long)puVar17 + 0x111;
      if (bVar4 < 3) {
        if (bVar4 == 0) {
          puVar26 = (undefined8 *)puVar17[0x21];
          goto LAB_1004ef17c;
        }
        if (bVar4 == 1) {
          FUN_107c05cc0(&UNK_10b2155b0);
        }
        else {
          FUN_107c05cc4(&UNK_10b2155b0);
        }
      }
      else {
        if (bVar4 == 3) goto LAB_1004ef194;
        if (bVar4 != 4) goto LAB_1004efe78;
        bVar4 = *(byte *)(puVar17 + 0x25);
        if (bVar4 < 2) {
          if (bVar4 == 0) {
            puVar26 = (undefined8 *)puVar17[0x23];
            puVar17[0x24] = puVar26;
            goto LAB_1004f00d8;
          }
          FUN_107c05cc0(&UNK_10b23a418);
        }
        else {
          if (bVar4 == 3) {
            puVar26 = (undefined8 *)puVar17[0x24];
            goto LAB_1004f00d8;
          }
          FUN_107c05cc4(&UNK_10b23a418);
        }
      }
      goto LAB_1004efe68;
    }
    if (bVar4 == 0) {
      uVar44 = puVar17[5];
      goto LAB_1004ef058;
    }
  }
  if (uVar22 == 1) {
    FUN_107c05cc0(&UNK_10b2154f8);
  }
  else {
    FUN_107c05cc4(&UNK_10b2154f8);
  }
LAB_1004efe68:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1004efe6c);
  (*pcVar8)();
}

