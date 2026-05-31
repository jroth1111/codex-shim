
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000490 : 0x00010086183c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_10085e15c(void)

{
  code *pcVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  undefined1 uVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  uint uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  uint uVar24;
  long unaff_x19;
  bool bVar25;
  long unaff_x20;
  undefined8 *puVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined *puVar30;
  code *pcVar31;
  code *pcVar32;
  undefined1 *unaff_x25;
  long lVar33;
  undefined8 unaff_x26;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 *in_stack_00000070;
  undefined1 *in_stack_00000078;
  code *in_stack_00000080;
  code *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
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
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  code *in_stack_00000480;
  code *in_stack_00000488;
  code *in_stack_00000490;
  code *in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
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
  long *in_stack_00000c98;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s__api_tags_108ac5f2f,&stack0x00000b90);
  FUN_1011d5524(&stack0x00000480,*(undefined8 *)(unaff_x20 + 0x18),&UNK_108ca1660,&stack0x00000990);
  if (in_stack_00000480 == (code *)0x2) {
    puVar30 = (undefined *)0x1;
    pcVar18 = in_stack_00000488;
  }
  else {
    auVar35 = FUN_105c4eee0(in_stack_00000588,&stack0x00000480);
    pcVar18 = auVar35._8_8_;
    puVar30 = auVar35._0_8_;
  }
  lVar7 = *in_stack_00000588;
  *in_stack_00000588 = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000588);
  }
  *(undefined **)(unaff_x19 + 0x98) = puVar30;
  *(code **)(unaff_x19 + 0xa0) = pcVar18;
  if (((ulong)puVar30 & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000480,pcVar18);
    if (in_stack_00000480 != (code *)0x4) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x98);
      uVar16 = *(undefined8 *)(unaff_x19 + 0xa0);
      pcVar31 = in_stack_00000480;
      pcVar18 = in_stack_00000488;
      goto LAB_10085e258;
    }
    uVar17 = 3;
LAB_10085e390:
    *unaff_x25 = uVar17;
LAB_10085e394:
    uVar17 = 4;
LAB_10086154c:
    *in_stack_00000078 = uVar17;
    *(undefined1 *)(unaff_x19 + 0x20) = 5;
    uVar10 = 1;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
    if (pcVar18 == (code *)0x0) {
      FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
      goto LAB_100861774;
    }
    uVar16 = 0;
    uVar10 = 1;
    pcVar31 = (code *)0x3;
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
    FUN_100e03d7c(uVar10,uVar16);
    if (pcVar31 == (code *)0x3) {
      puVar11 = (undefined8 *)_malloc(8);
      if (puVar11 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_100861774;
      }
      *puVar11 = pcVar18;
      uVar12 = func_0x000106029c30(0x28,puVar11,&UNK_10b21e380);
      in_stack_00000480 = pcVar18;
LAB_10085e2c4:
      *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
      *(undefined8 *)(unaff_x19 + 0x68) = 0x8000000000000000;
      *(ulong *)(unaff_x19 + 0x70) = uVar12;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
LAB_10085e844:
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62ee88 - 1 < 2 ||
           ((bRam000000010b62ee88 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
                               ), cVar8 != '\0')))) &&
          (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
                              ), (uVar13 & 1) != 0)))) {
        in_stack_00000080 = (code *)&stack0x00000990;
        in_stack_00000088 =
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        in_stack_00000488 = (code *)&stack0x000008a0;
        in_stack_00000480 = (code *)0x1;
        in_stack_00000490 = (code *)0x1;
        FUN_10074b674(&stack0x00000480);
      }
      else {
        uVar10 = 
        ___ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar30 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar30 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar30 + 0x18))(puVar2,&stack0x00000aa8);
          if (iVar9 != 0) {
            in_stack_00000080 = (code *)&stack0x00000990;
            in_stack_00000088 =
                 __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            in_stack_00000488 = (code *)&stack0x000008a0;
            in_stack_00000480 = (code *)0x1;
            in_stack_00000490 = (code *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar10,puVar2,puVar30,&stack0x00000aa8,&stack0x00000480);
          }
        }
      }
      auVar35._8_8_ = in_stack_00000488;
      auVar35._0_8_ = in_stack_00000480;
      if ((uVar12 & 3) == 1) {
        puVar11 = (undefined8 *)(uVar12 - 1);
        uVar10 = *puVar11;
        puVar26 = *(undefined8 **)(uVar12 + 7);
        pcVar18 = (code *)*puVar26;
        if (pcVar18 != (code *)0x0) {
          (*pcVar18)(uVar10);
        }
        if (puVar26[1] != 0) {
          _free(uVar10);
        }
LAB_10086171c:
        _free(puVar11);
      }
LAB_100861724:
      lVar7 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x48));
      }
      pcVar32 = (code *)0x0;
      *in_stack_00000078 = 1;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000000c8;
      *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000000c0;
      *(undefined8 *)(unaff_x19 + 0x100) = in_stack_000000d8;
      *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_000000d0;
      *(code **)(unaff_x19 + 0xb0) = in_stack_00000088;
      *(code **)(unaff_x19 + 0xa8) = in_stack_00000080;
      *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000098;
      *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000090;
      *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_000000a8;
      *(undefined8 *)(unaff_x19 + 200) = in_stack_000000a0;
      *(undefined1 *)(unaff_x19 + 0x90) = 1;
      *(code **)(unaff_x19 + 0x98) = pcVar31;
      *(code **)(unaff_x19 + 0xa0) = pcVar18;
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
        pcVar18 = in_stack_00000480;
        if (in_stack_00000480 == (code *)0x8000000000000006) {
          uVar17 = 4;
          goto LAB_10085e390;
        }
        FUN_100cfddd4(unaff_x19 + 0x120);
        if (in_stack_00000480 == (code *)0x8000000000000005) {
          puVar11 = (undefined8 *)_malloc(8);
          if (puVar11 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
            goto LAB_100861774;
          }
          *puVar11 = in_stack_00000488;
          uVar12 = func_0x000106029c30(0x28,puVar11,&UNK_10b21e380);
          in_stack_00000480 = in_stack_00000488;
          if ((*(byte *)(unaff_x19 + 0x90) & 1) == 0) goto LAB_10085e2c4;
          uVar10 = 0x8000000000000000;
          bVar25 = true;
          goto LAB_10085e824;
        }
        plVar28 = (long *)__ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
                                    (&UNK_108cac9a9,6,&stack0x00000b90);
        if ((plVar28 == (long *)0x0) || (*plVar28 != -0x7ffffffffffffffc)) {
          pcVar20 = (code *)0x0;
          pcVar31 = (code *)0x0;
          pcVar32 = (code *)0x8;
        }
        else {
          pcVar18 = (code *)plVar28[2];
          lVar7 = plVar28[3];
          lVar27 = lVar7 * 0x48;
          pcVar1 = pcVar18 + lVar7 * 0x48;
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            puVar30 = &UNK_108c61018;
            do {
              if (-1 < *(long *)pcVar18) {
                auVar35 = FUN_105dc9750(pcVar18,&UNK_108c61018,4);
                uVar12 = auVar35._8_8_;
                if ((auVar35._0_8_ & 1) != 0) {
                  if (*(ulong *)(pcVar18 + 0x10) <= uVar12) {
                    FUN_107c05cd0(uVar12,*(ulong *)(pcVar18 + 0x10),&UNK_10b46a548);
                    goto LAB_100861774;
                  }
                  lVar33 = *(long *)(pcVar18 + 8) + uVar12 * 0x68;
                  if (*(long *)(lVar33 + 0x18) == -0x7ffffffffffffffd) {
                    lVar7 = *(long *)(lVar33 + 0x28);
                    puVar30 = *(undefined **)(lVar33 + 0x30);
                    pcVar18 = pcVar18 + 0x48;
                    goto LAB_10085f264;
                  }
                }
              }
              lVar27 = lVar27 + -0x48;
              pcVar18 = pcVar18 + 0x48;
            } while (lVar27 != 0);
            lVar7 = 0;
            pcVar18 = pcVar1;
          }
LAB_10085f264:
          if (lVar7 != 0) {
            if (puVar30 == (undefined *)0x0) {
              lVar27 = 1;
            }
            else {
              lVar27 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(puVar30,1);
              if (lVar27 == 0) {
                func_0x0001087c9084(1,puVar30);
                goto LAB_100861774;
              }
              _memcpy(lVar27,lVar7,puVar30);
              if (puVar30 == (undefined *)0x8000000000000000) goto LAB_10085f298;
            }
            pcVar32 = (code *)_malloc(0x60);
            if (pcVar32 != (code *)0x0) {
              *(undefined **)pcVar32 = puVar30;
              *(long *)(pcVar32 + 8) = lVar27;
              *(undefined **)(pcVar32 + 0x10) = puVar30;
              pcVar20 = (code *)0x4;
              pcVar31 = (code *)0x1;
              do {
                lVar7 = 0x68;
                do {
                  do {
                    do {
                      pcVar19 = pcVar18;
                      if (pcVar19 == pcVar1) {
                        lVar27 = 0;
                        pcVar18 = pcVar1;
                        goto LAB_10085f4bc;
                      }
                      pcVar18 = pcVar19 + 0x48;
                    } while (*(long *)pcVar19 < 0);
                    auVar35 = FUN_105dc9750(pcVar19,&UNK_108c61018,4);
                    uVar12 = auVar35._8_8_;
                  } while ((auVar35._0_8_ & 1) == 0);
                  if (*(ulong *)(pcVar19 + 0x10) <= uVar12) {
                    FUN_107c05cd0(uVar12,*(ulong *)(pcVar19 + 0x10),&UNK_10b46a548);
                    goto LAB_100861774;
                  }
                  lVar33 = *(long *)(pcVar19 + 8) + uVar12 * 0x68;
                } while (*(long *)(lVar33 + 0x18) != -0x7ffffffffffffffd);
                lVar27 = *(long *)(lVar33 + 0x28);
                lVar7 = *(long *)(lVar33 + 0x30);
                pcVar18 = pcVar19 + 0x48;
LAB_10085f4bc:
                in_stack_00000480 = pcVar20;
                in_stack_00000488 = pcVar32;
                in_stack_00000490 = pcVar31;
                if (lVar27 == 0) goto LAB_10085f548;
                if (lVar7 == 0) {
                  lVar33 = 1;
                }
                else {
                  lVar33 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar7,1);
                  if (lVar33 == 0) {
                    func_0x0001087c9084(1,lVar7);
                    goto LAB_100861774;
                  }
                  _memcpy(lVar33,lVar27,lVar7);
                  if (lVar7 == -0x8000000000000000) goto LAB_10085f548;
                }
                if (pcVar31 == (code *)0x4) {
                  FUN_108855060(&stack0x00000480,4,1,8,0x18);
                }
                pcVar19 = pcVar32 + (long)pcVar31 * 0x18;
                *(long *)pcVar19 = lVar7;
                *(long *)(pcVar19 + 8) = lVar33;
                *(long *)(pcVar19 + 0x10) = lVar7;
                pcVar31 = pcVar31 + 1;
              } while( true );
            }
            func_0x0001087c9084(8,0x60);
            goto LAB_100861774;
          }
LAB_10085f298:
          pcVar20 = (code *)0x0;
          pcVar31 = (code *)0x0;
          pcVar32 = (code *)0x8;
        }
LAB_10085f548:
        FUN_100de6690(&stack0x00000b90);
        *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
        if (pcVar20 == (code *)0x8000000000000001) goto LAB_10085e394;
        *(code **)(unaff_x19 + 0x68) = pcVar20;
        *(code **)(unaff_x19 + 0x70) = pcVar32;
        *(code **)(unaff_x19 + 0x78) = pcVar31;
      }
      else {
        bVar25 = false;
        uVar10 = 0;
        uVar12 = 8;
LAB_10085e824:
        FUN_100e0d524(unaff_x19 + 0x98);
        *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
        *(undefined8 *)(unaff_x19 + 0x68) = uVar10;
        *(ulong *)(unaff_x19 + 0x70) = uVar12;
        *(undefined8 *)(unaff_x19 + 0x78) = 0;
        if (bVar25) goto LAB_10085e844;
      }
      auVar35._8_8_ = in_stack_00000488;
      auVar35._0_8_ = in_stack_00000480;
      uVar16 = *(undefined8 *)(unaff_x19 + 0x70);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x68);
      in_stack_00000070[2] = *(undefined8 *)(unaff_x19 + 0x78);
      in_stack_00000070[1] = uVar16;
      *in_stack_00000070 = uVar10;
      lVar7 = *(long *)(unaff_x19 + 0x98);
      if (lVar7 != 0) {
        puVar11 = *(undefined8 **)(unaff_x19 + 0x90);
        lVar33 = lVar7 * 0x18;
        uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
        lVar27 = *(long *)(unaff_x19 + 0x38);
        plVar28 = puVar11 + 2;
        do {
          if ((*plVar28 == lVar27) && (iVar9 = _memcmp(plVar28[-1],uVar10,lVar27), iVar9 == 0))
          goto LAB_1008616e8;
          plVar28 = plVar28 + 3;
          lVar33 = lVar33 + -0x18;
        } while (lVar33 != 0);
      }
      pcVar18 = (code *)(unaff_x19 + 0xa0);
      func_0x000104861724(pcVar18);
      *(long *)(unaff_x19 + 0xf8) = unaff_x19 + 0x40;
      *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x38);
      *(code **)(unaff_x19 + 0x110) = pcVar18;
      *(undefined **)(unaff_x19 + 0x118) = &UNK_10b220e90;
      puVar22 = (undefined1 *)(unaff_x19 + 0x140);
      *puVar22 = 0;
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0x38);
      *(code **)(unaff_x19 + 0x130) = pcVar18;
      *(undefined **)(unaff_x19 + 0x138) = &UNK_10b220e90;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000080,s_Pulling_model_____108ac6033,&stack0x00000b90);
      in_stack_00000490 = in_stack_00000088;
      pcVar20 = in_stack_00000080;
      auVar5._8_8_ = in_stack_00000080;
      auVar5._0_8_ = 2;
      auVar36._8_8_ = in_stack_00000080;
      auVar36._0_8_ = 2;
      auVar35._8_8_ = in_stack_00000080;
      auVar35._0_8_ = 2;
      pcVar32 = (code *)(*(code *)&
                                  __ZN100__LT_codex_ollama__pull__CliProgressReporter_u20_as_u20_codex_ollama__pull__PullProgressReporter_GT_8on_event17h6c01a8f2159ee144E
                        )(pcVar18,&stack0x00000480);
      pcVar31 = in_stack_00000490;
      if (pcVar32 == (code *)0x0) {
        if (pcVar20 != (code *)0x0) {
          _free(in_stack_00000490);
        }
        *(long *)(unaff_x19 + 0x148) = unaff_x19 + 0x40;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x120);
        *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x128);
        pcVar18 = (code *)(unaff_x19 + 0x1c8);
        *(undefined1 *)(unaff_x19 + 0x1c8) = 0;
        *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x120);
        *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0x128);
        lVar7 = *(long *)(unaff_x19 + 0x50);
        do {
          lVar27 = lVar7;
          if (lVar27 == 0) break;
          lVar7 = *(long *)(unaff_x19 + 0x48) + lVar27;
          pbVar23 = (byte *)(lVar7 + -1);
          uVar21 = (uint)(char)*pbVar23;
          if ((int)uVar21 < 0) {
            pbVar23 = (byte *)(lVar7 + -2);
            bVar3 = *pbVar23;
            if ((char)bVar3 < -0x40) {
              pbVar23 = (byte *)(lVar7 + -3);
              bVar4 = *pbVar23;
              if ((char)bVar4 < -0x40) {
                pbVar23 = (byte *)(lVar7 + -4);
                uVar24 = bVar4 & 0x3f | (*pbVar23 & 7) << 6;
              }
              else {
                uVar24 = (int)(char)bVar4 & 0xf;
              }
              uVar24 = bVar3 & 0x3f | uVar24 << 6;
            }
            else {
              uVar24 = (int)(char)bVar3 & 0x1f;
            }
            uVar21 = uVar21 & 0x3f | uVar24 << 6;
          }
          lVar7 = (long)pbVar23 - *(long *)(unaff_x19 + 0x48);
        } while (uVar21 == 0x2f);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000080,s__api_pull_108ac6009,&stack0x00000b90);
        FUN_1011d5524(&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x58),&UNK_108cab1d8,
                      &stack0x00000af0);
        pauVar15 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar15[1][0] == '\x01') {
          auVar36 = *pauVar15;
        }
        else {
          auVar36 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar15 + 8) = auVar36._8_8_;
          pauVar15[1][0] = 1;
        }
        *(long *)*pauVar15 = auVar36._0_8_ + 1;
        puVar14 = (undefined4 *)_malloc(5);
        if (puVar14 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,5);
          goto LAB_100861774;
        }
        *(undefined1 *)(puVar14 + 1) = 0x6c;
        *puVar14 = 0x65646f6d;
        uVar10 = *(undefined8 *)(unaff_x19 + 0x160);
        lVar7 = *(long *)(unaff_x19 + 0x168);
        if (lVar7 == 0) {
          lVar33 = 1;
        }
        else {
          lVar33 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar7,1);
          if (lVar33 == 0) {
            func_0x0001087c9084(1,lVar7);
            goto LAB_100861774;
          }
        }
        _memcpy(lVar33,uVar10,lVar7);
        FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
        if (lVar27 != -0x7ffffffffffffffb) {
          FUN_100de6690(&stack0x00000d40);
        }
        puVar14 = (undefined4 *)_malloc(6);
        if (puVar14 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,6);
          goto LAB_100861774;
        }
        *(undefined2 *)(puVar14 + 1) = 0x6d61;
        *puVar14 = 0x65727473;
        FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
        if (lVar27 != -0x7ffffffffffffffb) {
          FUN_100de6690(&stack0x00000d40);
        }
        *(undefined8 *)(unaff_x19 + 0x198) = 0;
        *(undefined8 *)(unaff_x19 + 400) = 0;
        *(long *)(unaff_x19 + 0x1a8) = auVar36._0_8_;
        *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
        *(long *)(unaff_x19 + 0x1b0) = auVar36._8_8_;
        *(undefined8 *)(unaff_x19 + 0x178) = 8;
        *(undefined8 *)(unaff_x19 + 0x170) = 0;
        *(undefined **)(unaff_x19 + 0x188) = &UNK_108c56c70;
        *(undefined8 *)(unaff_x19 + 0x180) = 0;
        FUN_1011d5a74(&stack0x00000b90,&stack0x00000080,unaff_x19 + 0x170);
        if (&stack0x00000000 == (undefined1 *)0xfffffffffffff672) {
          auVar34._8_8_ = &DAT_100c7b3a0;
          auVar34._0_8_ = 1;
        }
        else {
          auVar34 = FUN_105c4eee0(in_stack_00000c98,&stack0x00000b90);
        }
        pcVar32 = auVar34._8_8_;
        lVar7 = *in_stack_00000c98;
        *in_stack_00000c98 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000105c30fe4(&stack0x00000c98);
        }
        *(undefined1 (*) [16])(unaff_x19 + 0x1b8) = auVar34;
        if ((auVar34._0_8_ & 1) != 0) {
          *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
          if (pcVar32 == (code *)0x0) {
            FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
            goto LAB_100861774;
          }
          uVar16 = 0;
          uVar10 = 1;
          pcVar31 = (code *)0x3;
LAB_10085fa74:
          uVar6 = in_stack_000000e8;
          FUN_100e03d7c(uVar10,uVar16);
          if (pcVar31 == (code *)0x3) {
            in_stack_00000080 = pcVar32;
            puVar11 = (undefined8 *)_malloc(8);
            if (puVar11 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
              goto LAB_100861774;
            }
            *puVar11 = pcVar32;
            pcVar32 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b21e380);
            FUN_100de6690(unaff_x19 + 0x170);
          }
          else {
            FUN_100de6690(unaff_x19 + 0x170);
            if ((ushort)uVar6 - 200 < 100) {
              auVar35 = __ZN7reqwest10async_impl8response8Response12bytes_stream17h5a874101c98e8fa6E
                                  (&stack0x00000b08);
              lVar7 = auVar35._8_8_;
              uVar12 = auVar35._0_8_;
              in_stack_00000090 = 0;
              in_stack_00000098 = 0;
              in_stack_00000080 = (code *)0x0;
              in_stack_00000088 = (code *)0x8;
              in_stack_00000490 = (code *)0x1;
              pcVar32 = (code *)_malloc(0x1f8);
              if (pcVar32 == (code *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1f8);
                goto LAB_100861774;
              }
              _memcpy(pcVar32,&stack0x00000480,0x1f8);
              FUN_100e816dc(&stack0x00000080);
              *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
              *(code **)(unaff_x19 + 0x150) = pcVar32;
              *(undefined **)(unaff_x19 + 0x158) = &UNK_10b220f28;
              while( true ) {
                *(undefined8 **)(unaff_x19 + 0x148) = (undefined8 *)(unaff_x19 + 0x150);
                (**(code **)(*(long *)(unaff_x19 + 0x158) + 0x18))
                          (&stack0x00000480,*(undefined8 *)(unaff_x19 + 0x150));
                if (uVar12 == 7) break;
                if (uVar12 == 6) {
                  pcVar32 = (code *)FUN_100c35750(&UNK_108caca7b,0x2f);
                  pcVar18 = *(code **)(unaff_x19 + 0x150);
                  puVar11 = *(undefined8 **)(unaff_x19 + 0x158);
                  if ((code *)*puVar11 != (code *)0x0) {
                    (*(code *)*puVar11)(pcVar18);
                  }
LAB_100861980:
                  pcVar20 = (code *)puVar11[1];
                  pcVar31 = pcVar18;
                  auVar36 = auVar35;
                  goto joined_r0x000100861984;
                }
                pcVar18 = (code *)&stack0x00000480;
                pcVar32 = (code *)(**(code **)(*(long *)(unaff_x19 + 0x138) + 0x18))
                                            (*(undefined8 *)(unaff_x19 + 0x130),&stack0x00000480);
                if (pcVar32 != (code *)0x0) {
LAB_1008618a4:
                  if (uVar12 != 5) {
LAB_100861938:
                    lVar27 = uVar12 - 2;
                    if (uVar12 < 2) {
                      lVar27 = 1;
                    }
                    if (lVar27 != 0) goto LAB_10086196c;
                  }
                  if (lVar7 != 0) {
                    _free(1);
                  }
LAB_10086196c:
                  pcVar18 = *(code **)(unaff_x19 + 0x150);
                  puVar11 = *(undefined8 **)(unaff_x19 + 0x158);
                  if ((code *)*puVar11 != (code *)0x0) {
                    (*(code *)*puVar11)(pcVar18);
                  }
                  goto LAB_100861980;
                }
                uVar13 = uVar12 - 2;
                if (uVar12 < 2) {
                  uVar13 = 1;
                }
                if (1 < uVar13) {
                  if (uVar13 == 2) goto LAB_1008618a4;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&stack0x00000080,s_Pull_failed__108ac6048,&stack0x000008a0);
                  uVar10 = in_stack_00000090;
                  pcVar31 = in_stack_00000088;
                  pcVar18 = in_stack_00000080;
                  puVar11 = (undefined8 *)_malloc(0x18);
                  if (puVar11 != (undefined8 *)0x0) {
                    *puVar11 = pcVar18;
                    puVar11[1] = pcVar31;
                    puVar11[2] = uVar10;
                    pcVar32 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b209118);
                    if (lVar7 != 0) {
                      _free(1);
                    }
                    if (uVar12 != 5) goto LAB_100861938;
                    goto LAB_10086196c;
                  }
                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                  goto LAB_100861774;
                }
                if (((uVar12 != 5) && (uVar13 == 0)) && (lVar7 != 0)) {
                  _free(1);
                }
              }
              uVar17 = 4;
              goto LAB_100861864;
            }
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000080,s_failed_to_start_pull__HTTP_108ac6015,&stack0x00000b90);
            uVar10 = in_stack_00000090;
            pcVar32 = in_stack_00000088;
            pcVar31 = in_stack_00000080;
            puVar11 = (undefined8 *)_malloc(0x18);
            if (puVar11 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
              goto LAB_100861774;
            }
            *puVar11 = pcVar31;
            puVar11[1] = pcVar32;
            puVar11[2] = uVar10;
            pcVar32 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b209118);
            FUN_100e0d524(&stack0x00000b08);
          }
          *pcVar18 = (code)0x1;
          auVar35 = auVar5;
          goto LAB_100861990;
        }
        __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
                  (&stack0x00000080,pcVar32);
        if (in_stack_00000080 != (code *)0x4) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x1b8);
          uVar16 = *(undefined8 *)(unaff_x19 + 0x1c0);
          pcVar31 = in_stack_00000080;
          pcVar32 = in_stack_00000088;
          goto LAB_10085fa74;
        }
        uVar17 = 3;
        *pcVar18 = (code)0x3;
LAB_100861864:
        *puVar22 = uVar17;
        bVar25 = true;
      }
      else {
joined_r0x000100861984:
        auVar35 = auVar36;
        if (pcVar20 != (code *)0x0) {
          _free(pcVar31);
        }
LAB_100861990:
        bVar25 = false;
        *puVar22 = 1;
      }
      if (bVar25) {
        uVar17 = 5;
        goto LAB_10086154c;
      }
      FUN_100cab938((long *)(unaff_x19 + 0xf8));
      lVar7 = *(long *)(unaff_x19 + 0xb8);
      if (lVar7 != 0) {
        lVar27 = *(long *)(unaff_x19 + 200);
        if (lVar27 != 0) {
          plVar28 = *(long **)(unaff_x19 + 0xb0);
          plVar29 = plVar28 + 1;
          lVar33 = *plVar28;
          uVar12 = CONCAT17(-(-1 < lVar33),
                            CONCAT16(-(-1 < (char)((ulong)lVar33 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar33 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar33 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar33 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar33 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar33 >> 8)),
                                                           -(-1 < (char)lVar33)))))))) &
                   0x8080808080808080;
          do {
            while (uVar12 == 0) {
              lVar33 = *plVar29;
              plVar28 = plVar28 + -0x28;
              plVar29 = plVar29 + 1;
              uVar12 = CONCAT17(-(-1 < lVar33),
                                CONCAT16(-(-1 < (char)((ulong)lVar33 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar33 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar33 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar33 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar33 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar33 >> 8)),
                                                           -(-1 < (char)lVar33)))))))) &
                       0x8080808080808080;
            }
            uVar13 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            iVar9 = (int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
            if (plVar28[(long)-iVar9 * 5 + -5] != 0) {
              _free(plVar28[(long)-iVar9 * 5 + -4]);
            }
            uVar12 = uVar12 - 1 & uVar12;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (lVar7 * 0x29 != -0x31) {
          _free(*(long *)(unaff_x19 + 0xb0) + lVar7 * -0x28 + -0x28);
        }
      }
      if (pcVar32 == (code *)0x0) {
        puVar11 = *(undefined8 **)(unaff_x19 + 0x90);
        lVar7 = *(long *)(unaff_x19 + 0x98);
LAB_1008616e8:
        if (lVar7 != 0) {
          puVar26 = puVar11 + 1;
          do {
            if (puVar26[-1] != 0) {
              _free(*puVar26);
            }
            puVar26 = puVar26 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (*(long *)(unaff_x19 + 0x88) != 0) goto LAB_10086171c;
        goto LAB_100861724;
      }
      lVar7 = *(long *)(unaff_x19 + 0x90);
      lVar27 = *(long *)(unaff_x19 + 0x98);
      if (lVar27 != 0) {
        puVar11 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        _free(lVar7);
      }
      lVar7 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(unaff_x19 + 0x40) == 0) {
        *in_stack_00000078 = 1;
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x48));
        *in_stack_00000078 = 1;
      }
    }
    func_0x000100e48c8c(unaff_x26);
    if (pcVar32 == (code *)0x0) {
      pcVar18 = (code *)0x0;
    }
    else {
      in_stack_00000080 = (code *)&stack0x00000b90;
      in_stack_00000088 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
      pauVar15 = (undefined1 (*) [16])_malloc(0x18);
      if (pauVar15 == (undefined1 (*) [16])0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100861774:
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100861778);
        (*pcVar18)();
      }
      *pauVar15 = auVar35;
      *(code **)pauVar15[1] = in_stack_00000490;
      puVar11 = (undefined8 *)_malloc(0x18);
      if (puVar11 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100861774;
      }
      *puVar11 = pauVar15;
      puVar11[1] = &UNK_10b209118;
      *(undefined1 *)(puVar11 + 2) = 0x28;
      if (((ulong)pcVar32 & 3) == 1) {
        uVar10 = *(undefined8 *)(pcVar32 + -1);
        puVar26 = *(undefined8 **)(pcVar32 + 7);
        pcVar18 = (code *)*puVar26;
        if (pcVar18 != (code *)0x0) {
          (*pcVar18)(uVar10);
        }
        if (puVar26[1] != 0) {
          _free(uVar10);
        }
        _free(pcVar32 + -1);
      }
      pcVar18 = (code *)((long)puVar11 + 1);
    }
    uVar10 = 0;
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  auVar37._8_8_ = pcVar18;
  auVar37._0_8_ = uVar10;
  return auVar37;
}

