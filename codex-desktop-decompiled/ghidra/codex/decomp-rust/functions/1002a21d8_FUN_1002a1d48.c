
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1002a1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                   long param_5,long *param_6)

{
  uint *puVar1;
  undefined *puVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 in_x10;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  long lVar20;
  long *unaff_x25;
  long unaff_x27;
  char *unaff_x28;
  long lVar21;
  long unaff_x29;
  undefined1 auVar22 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 uStack0000000000000020;
  char cStack0000000000000022;
  undefined4 *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined1 in_stack_000000d0;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 ******ppppppuStack_210;
  char ***pppcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  char **ppcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  char *******pppppppcStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  char *pcStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_88;
  undefined *puStack_80;
  char *******pppppppcStack_78;
  long *plStack_70;
  
  *(char **)(unaff_x27 + 0x1d0) = s_send_reset______reason____initia_108ac7eea;
  *(undefined1 **)(unaff_x27 + 0x1d8) = &stack0x000000d0;
  *(long *)(unaff_x27 + 0x1c0) = unaff_x29 + -0x68;
  *(undefined **)(unaff_x27 + 0x1c8) = &UNK_10b1f3630;
  *(undefined8 *)(unaff_x27 + 0x160) = 1;
  *(long *)(unaff_x27 + 0x168) = unaff_x29 + -0x78;
  *(undefined8 *)(unaff_x27 + 0x170) = 1;
  *(undefined8 *)(unaff_x27 + 0x178) = in_x10;
  uVar7 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,unaff_x29 + -0xd8);
  if ((*unaff_x28 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar20 = *unaff_x24;
    in_stack_00000048 = *(undefined **)(lVar20 + 0x20);
    in_stack_00000050 = *(undefined8 *)(lVar20 + 0x28);
    in_stack_00000040 = (undefined4 *)0x5;
    puVar10 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar10 = &UNK_10b3c24c8;
    }
    puVar19 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar19 = &UNK_109adfc03;
    }
    uVar7 = (**(code **)(puVar10 + 0x18))(puVar19,&stack0x00000040);
    if ((int)uVar7 != 0) {
      param_4 = (long *)&stack0x00000040;
      param_5 = unaff_x29 + -0xd8;
      uVar7 = __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar20,puVar19,puVar10);
    }
  }
  if ((_uStack0000000000000020 & 0x100) == 0) {
    lVar20 = *unaff_x20;
    uVar9 = *(uint *)(unaff_x20 + 1);
    iVar6 = *(int *)((long)unaff_x20 + 0xc);
    *(uint *)(unaff_x29 + -0xd8) = uVar9;
    *(int *)(unaff_x29 + -0xd4) = iVar6;
    if ((((ulong)uVar9 < *(ulong *)(lVar20 + 0x10)) &&
        (plVar8 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar9 * 0x140), *plVar8 != 2)) &&
       (*(int *)((long)plVar8 + 0x124) == iVar6)) {
      uVar7 = __ZN2h25proto7streams6stream6Stream9set_reset17h4f47399f0e6ca518E
                        (plVar8,in_stack_00000018._4_4_,uStack0000000000000020);
      if ((cStack0000000000000022 == '\x01') && ((_uStack0000000000000020 & 0x1000000) != 0)) {
        if (*unaff_x25 == 0) {
          plVar8 = (long *)&
                           __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
          ;
          uVar9 = (uint)bRam000000010b632558;
          if (bRam000000010b632558 - 1 < 2) {
LAB_1002a2304:
            uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
                               ,uVar9);
            if ((int)uVar7 != 0) {
              pcVar13 = s____>_not_sending_explicit_RST_ST_108ac7f64;
              lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE;
              goto LAB_1002a2330;
            }
          }
          else if (bRam000000010b632558 != 0) {
            uVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
                              );
            uVar9 = (uint)uVar7 & 0xff;
            if ((uVar7 & 0xff) != 0) goto LAB_1002a2304;
          }
        }
        lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE;
        if (*unaff_x28 != '\0') {
          return uVar7;
        }
        if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
          return uVar7;
        }
        in_stack_00000080 =
             *(undefined8 *)
              (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE + 0x20);
        in_stack_00000088 =
             *(undefined8 *)
              (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE + 0x28);
        in_stack_00000078 = 5;
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar19 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = &UNK_109adfc03;
        }
        uVar7 = (**(code **)(puVar10 + 0x18))(puVar19,&stack0x00000078);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        lVar11 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE + 0x30
        ;
        *(long *)(unaff_x27 + 0x1c0) = (long)&stack0x00000020 + 4;
        *(undefined8 *)(unaff_x27 + 0x1c8) = 0x1002d7d18;
        *(char **)(unaff_x27 + 0x28) = s____>_not_sending_explicit_RST_ST_108ac7f64;
        *(long *)(unaff_x27 + 0x30) = unaff_x29 + -0x78;
        *(undefined1 **)(unaff_x27 + 0x18) = &stack0x000000c0;
        *(undefined **)(unaff_x27 + 0x20) = &UNK_10b1f3630;
        *(undefined8 *)(unaff_x27 + 0x160) = 1;
        *(undefined1 **)(unaff_x27 + 0x168) = &stack0x000000b0;
        *(undefined8 *)(unaff_x27 + 0x170) = 1;
        *(long *)(unaff_x27 + 0x178) = lVar11;
        lVar11 = *(long *)(lVar20 + 0x60);
        uVar14 = *(undefined8 *)(lVar20 + 0x68);
        lVar15 = *(long *)(lVar20 + 0x50);
        uVar16 = *(undefined8 *)(lVar20 + 0x58);
        uVar17 = 1;
        if (lVar15 == 0) {
          uVar17 = 2;
        }
        uStack0000000000000118 = *(undefined4 *)(lVar20 + 8);
        uStack000000000000011c = *(undefined4 *)(lVar20 + 0xc);
        *(long *)(unaff_x27 + 0x1d0) = unaff_x29 + -0xd8;
        *(undefined1 *)(unaff_x29 + -0x60) = 1;
        uVar12 = 1;
        if (lVar11 == 0) {
          uVar12 = 2;
        }
        *(undefined8 *)(unaff_x27 + 0x70) = in_stack_00000080;
        *(undefined8 *)(unaff_x27 + 0x68) = in_stack_00000078;
        uVar18 = in_stack_00000088;
        goto LAB_1002a20ac;
      }
      FUN_1002a0190(unaff_x21 + 8);
      *(uint *)(unaff_x29 + -0xd8) = uVar9;
      *(int *)(unaff_x29 + -0xd4) = iVar6;
      if ((((ulong)uVar9 < *(ulong *)(lVar20 + 0x10)) &&
          (plVar8 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar9 * 0x140), *plVar8 != 2)) &&
         (*(int *)((long)plVar8 + 0x124) == iVar6)) {
        uStack0000000000000094 = in_stack_00000018._4_4_;
        in_stack_00000090 = iVar6;
        if ((*unaff_x25 == 0) &&
           (((bVar4 = bRam000000010b632588, bRam000000010b632588 - 1 < 2 ||
             ((bRam000000010b632588 != 0 &&
              (bVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                                 ), bVar4 != 0)))) &&
            (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                                ,bVar4),
            lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E,
            iVar6 != 0)))) {
          lVar11 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E +
                   0x30;
          in_stack_00000040 = &stack0x00000090;
          in_stack_00000048 = &DAT_1002d5ffc;
          *(char **)(unaff_x27 + 0x1d0) = s_send_reset____queueing__frame__108ab9874;
          *(undefined4 ***)(unaff_x27 + 0x1d8) = &stack0x00000040;
          *(long *)(unaff_x27 + 0x1c0) = unaff_x29 + -0x68;
          *(undefined **)(unaff_x27 + 0x1c8) = &UNK_10b1f3630;
          *(undefined8 *)(unaff_x27 + 0x38) = 1;
          *(long *)(unaff_x27 + 0x40) = unaff_x29 + -0x78;
          *(undefined8 *)(unaff_x27 + 0x48) = 1;
          *(long *)(unaff_x27 + 0x50) = lVar11;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar20,&stack0x000000d0);
          lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E;
          if ((*unaff_x28 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar17 = *(undefined8 *)
                      (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                      + 0x20);
            uVar14 = *(undefined8 *)
                      (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                      + 0x28);
            *(undefined8 *)(unaff_x27 + 0x160) = 5;
            *(undefined8 *)(unaff_x27 + 0x168) = uVar17;
            *(undefined8 *)(unaff_x27 + 0x170) = uVar14;
            puVar10 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar10 = &UNK_10b3c24c8;
            }
            puVar19 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar19 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar10 + 0x18))(puVar19,unaff_x29 + -0xd8);
            if (iVar6 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar20,puVar19,puVar10,unaff_x29 + -0xd8,&stack0x000000d0);
            }
          }
        }
        else {
          lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E;
          if ((*unaff_x28 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar17 = *(undefined8 *)
                      (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                      + 0x28);
            in_stack_00000098 = 5;
            *(undefined8 *)(unaff_x27 + 8) =
                 *(undefined8 *)
                  (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E +
                  0x20);
            *(undefined8 *)(unaff_x27 + 0x10) = uVar17;
            puVar10 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar10 = &UNK_10b3c24c8;
            }
            puVar19 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar19 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar10 + 0x18))(puVar19,&stack0x00000098);
            if (iVar6 != 0) {
              lVar11 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                       + 0x30;
              *(int **)(unaff_x27 + 0x1c0) = &stack0x00000090;
              *(undefined **)(unaff_x27 + 0x1c8) = &DAT_1002d5ffc;
              *(char **)(unaff_x27 + 0x28) = s_send_reset____queueing__frame__108ab9874;
              *(long *)(unaff_x27 + 0x30) = unaff_x29 + -0x78;
              *(undefined1 **)(unaff_x27 + 0x18) = &stack0x000000c0;
              *(undefined **)(unaff_x27 + 0x20) = &UNK_10b1f3630;
              *(undefined8 *)(unaff_x27 + 0x160) = 1;
              *(undefined1 **)(unaff_x27 + 0x168) = &stack0x000000b0;
              *(undefined8 *)(unaff_x27 + 0x170) = 1;
              *(long *)(unaff_x27 + 0x178) = lVar11;
              lVar11 = *(long *)(lVar20 + 0x60);
              uVar14 = *(undefined8 *)(lVar20 + 0x68);
              lVar15 = *(long *)(lVar20 + 0x50);
              uVar16 = *(undefined8 *)(lVar20 + 0x58);
              uVar17 = 1;
              if (lVar15 == 0) {
                uVar17 = 2;
              }
              uStack0000000000000118 = *(undefined4 *)(lVar20 + 8);
              uStack000000000000011c = *(undefined4 *)(lVar20 + 0xc);
              *(long *)(unaff_x27 + 0x1d0) = unaff_x29 + -0xd8;
              *(undefined1 *)(unaff_x29 + -0x60) = 1;
              in_stack_00000040 = (undefined4 *)(unaff_x29 + -0x68);
              in_stack_00000048 = &DAT_1061c2098;
              uVar12 = 1;
              if (lVar11 == 0) {
                uVar12 = 2;
              }
              *(undefined8 *)(unaff_x27 + 0x70) = in_stack_000000a0;
              *(undefined8 *)(unaff_x27 + 0x68) = in_stack_00000098;
              *(undefined8 *)(unaff_x27 + 0x78) = *(undefined8 *)(unaff_x27 + 0x10);
              *(char **)(unaff_x27 + 0x88) = s__108b39f4f;
              *(undefined4 ***)(unaff_x27 + 0x90) = &stack0x00000040;
              *(undefined8 *)(unaff_x27 + 0x38) = uVar17;
              *(long *)(unaff_x27 + 0x40) = lVar15;
              *(undefined8 *)(unaff_x27 + 0x48) = uVar16;
              *(undefined8 *)(unaff_x27 + 0x50) = uVar12;
              *(long *)(unaff_x27 + 0x58) = lVar11;
              *(undefined8 *)(unaff_x27 + 0x60) = uVar14;
              (**(code **)(puVar10 + 0x20))(puVar19,&stack0x000000d0);
            }
          }
        }
        *(ulong *)(unaff_x27 + 0x3c) = CONCAT44(uStack0000000000000094,in_stack_00000090);
        in_stack_000000d0 = 8;
        param_4 = unaff_x20;
        uVar7 = func_0x0001002a09e8(unaff_x21 + 8,&stack0x000000d0);
        lVar20 = *unaff_x20;
        uVar9 = *(uint *)(unaff_x20 + 1);
        iVar6 = *(int *)((long)unaff_x20 + 0xc);
        *(uint *)(unaff_x29 + -0xd8) = uVar9;
        *(int *)(unaff_x29 + -0xd4) = iVar6;
        param_5 = in_stack_00000010;
        if ((((ulong)uVar9 < *(ulong *)(lVar20 + 0x10)) &&
            (plVar8 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar9 * 0x140), *plVar8 != 2)) &&
           (*(int *)((long)plVar8 + 0x124) == iVar6)) {
          if (0 < *(int *)((long)plVar8 + 0x84)) {
            *(undefined4 *)((long)plVar8 + 0x84) = 0;
            uVar7 = FUN_1056fa7e4(unaff_x21 + 8);
          }
          return uVar7;
        }
      }
      *(long *)(unaff_x27 + 0x38) = unaff_x29 + -0xd4;
      *(undefined **)(unaff_x27 + 0x40) = &DAT_10571bc44;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b15a2c,&stack0x000000d0,&UNK_10b3a3ca8);
    }
    *(long *)(unaff_x27 + 0x38) = unaff_x29 + -0xd4;
    *(undefined **)(unaff_x27 + 0x40) = &DAT_10571bc44;
    puVar10 = &UNK_10b3a3cc0;
    auVar22 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__dangling_store_key_for_stream_i_108b15a2c,&stack0x000000d0,
                         &UNK_10b3a3cc0);
    lVar11 = auVar22._8_8_;
    lVar20 = auVar22._0_8_;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b6325b8 - 1 < 2 ||
         ((bRam000000010b6325b8 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                             ), cVar5 != '\0')))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                          ), iVar6 != 0)) {
      puStack_1b8 = (undefined *)
                    (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                    + 0x30);
      lStack_1a0 = lVar20 + 0x6c;
      puStack_1a8 = &
                    __ZN64__LT_h2__frame__headers__Headers_u20_as_u20_core__fmt__Debug_GT_3fmt17h9fddf5de93287193E
      ;
      puStack_198 = &DAT_1002b2544;
      plStack_70 = &lStack_1b0;
      pppppppcStack_78 = (char *******)s_send_headers__frame____init_wind_108ac7fe6;
      pppppppuStack_88 = &pppppppcStack_78;
      puStack_80 = &UNK_10b1f3630;
      pppppppcStack_1c8 = (char *******)&pppppppuStack_88;
      uStack_1d0 = 1;
      lStack_1c0 = 1;
      lStack_1b0 = lVar11;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E,
                 &uStack_1d0);
      lVar15 = ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_208 =
             *(char ****)
              (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E + 0x20
              );
        uStack_200 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                      + 0x28);
        ppppppuStack_210 = (undefined8 ******)0x5;
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar19 + 0x18))(puVar2,&ppppppuStack_210);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar15,puVar2,puVar19,&ppppppuStack_210,&uStack_1d0);
        }
      }
    }
    else {
      lVar15 = ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_220 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                      + 0x20);
        uStack_218 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                      + 0x28);
        uStack_228 = 5;
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar19 + 0x18))(puVar2,&uStack_228);
        if (iVar6 != 0) {
          lStack_1f8 = ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                       + 0x30;
          lStack_1c0 = lVar20 + 0x6c;
          pppppppcStack_1c8 =
               (char *******)
               &
               __ZN64__LT_h2__frame__headers__Headers_u20_as_u20_core__fmt__Debug_GT_3fmt17h9fddf5de93287193E
          ;
          puStack_1b8 = &DAT_1002b2544;
          puStack_1d8 = &uStack_1d0;
          pcStack_1e0 = s_send_headers__frame____init_wind_108ac7fe6;
          ppcStack_1f0 = &pcStack_1e0;
          puStack_1e8 = &UNK_10b1f3630;
          pppcStack_208 = &ppcStack_1f0;
          ppppppuStack_210 = (undefined8 ******)0x1;
          uStack_200 = 1;
          lStack_190 = *(long *)(lVar15 + 0x60);
          uStack_188 = *(undefined8 *)(lVar15 + 0x68);
          puStack_1a8 = *(undefined **)(lVar15 + 0x50);
          lStack_1a0 = *(long *)(lVar15 + 0x58);
          lStack_1b0 = 1;
          if (puStack_1a8 == (undefined *)0x0) {
            lStack_1b0 = 2;
          }
          uStack_168 = *(undefined4 *)(lVar15 + 8);
          uStack_164 = *(undefined4 *)(lVar15 + 0xc);
          pppppppuStack_88 = &ppppppuStack_210;
          puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
          pppppppcStack_78 = (char *******)&pppppppuStack_88;
          plStack_70 = (long *)&DAT_1061c2098;
          puStack_198 = (undefined *)0x1;
          if (lStack_190 == 0) {
            puStack_198 = (undefined *)0x2;
          }
          uStack_178 = uStack_220;
          uStack_180 = uStack_228;
          uStack_170 = uStack_218;
          pppppppuStack_158 = &pppppppcStack_78;
          pcStack_160 = s__108b39f4f;
          uStack_1d0 = lVar11;
          (**(code **)(puVar19 + 0x20))(puVar2,&lStack_1b0);
        }
      }
    }
    uVar9 = __ZN2h25proto7streams4send4Send13check_headers17h52911a7f51d4cfa7E(lVar11);
    uVar7 = (ulong)(uVar9 & 0xff);
    if ((uVar9 & 0xff) != 0xd) {
LAB_1002a2a10:
      FUN_1002bf550(lVar11);
      FUN_1002beeb4(lVar11 + 0x60);
      return uVar7;
    }
    lVar21 = *param_4;
    puVar1 = (uint *)(param_4 + 1);
    uVar9 = *puVar1;
    iVar6 = *(int *)((long)param_4 + 0xc);
    lVar15 = *(long *)puVar1;
    uStack_1d0 = *(long *)puVar1;
    if ((((ulong)uVar9 < *(ulong *)(lVar21 + 0x10)) &&
        (plVar8 = (long *)(*(long *)(lVar21 + 8) + (ulong)uVar9 * 0x140), *plVar8 != 2)) &&
       (*(int *)((long)plVar8 + 0x124) == iVar6)) {
      uVar7 = __ZN2h25proto7streams5state5State9send_open17h28808bd52e4d0442E
                        (plVar8 + 10,*(byte *)(lVar11 + 0x11c) & 1);
      if (((uint)uVar7 & 0xff) != 0xd) goto LAB_1002a2a10;
      if (*(uint *)(lVar11 + 0x118) == 0) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a6e3e2,0x1f,&UNK_10b3a7160);
        goto LAB_1002a2b04;
      }
      if ((*(uint *)(lVar11 + 0x118) & 1) == (uint)*(byte *)(param_5 + 0x58)) {
LAB_1002a29d4:
        _memcpy(&puStack_1a8,lVar11,0x120);
        lStack_1b0 = CONCAT71(lStack_1b0._1_7_,1);
        func_0x0001002a09e8(lVar20 + 8,&lStack_1b0,puVar10,param_4,param_6);
        return 0xd;
      }
      if ((((ulong)uVar9 < *(ulong *)(lVar21 + 0x10)) &&
          (plVar8 = (long *)(*(long *)(lVar21 + 8) + (ulong)uVar9 * 0x140), *plVar8 != 2)) &&
         (*(int *)((long)plVar8 + 0x124) == iVar6)) {
        uStack_1d0 = lVar15;
        if ((*(byte *)((long)plVar8 + 0x135) & 1) == 0) {
          __ZN2h25proto7streams10prioritize10Prioritize10queue_open17hf43ec52d92cb1e91E
                    (lVar20 + 8,param_4);
          _memcpy(&puStack_1a8,lVar11,0x120);
          lStack_1b0 = CONCAT71(lStack_1b0._1_7_,1);
          func_0x0001002a09e8(lVar20 + 8,&lStack_1b0,puVar10,param_4,param_6);
          lVar20 = *param_6;
          *param_6 = 0;
          if (lVar20 == 0) {
            return 0xd;
          }
          (**(code **)(lVar20 + 8))(param_6[1]);
          return 0xd;
        }
        goto LAB_1002a29d4;
      }
      puVar10 = &UNK_10b3a3ca8;
    }
    else {
      puVar10 = &UNK_10b3a3cc0;
    }
    uStack_1d0 = *(long *)puVar1;
    lStack_1b0 = (long)&uStack_1d0 + 4;
    puStack_1a8 = &DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&lStack_1b0,puVar10);
LAB_1002a2b04:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002a2b08);
    (*pcVar3)();
  }
  if (*unaff_x25 == 0) {
    plVar8 = (long *)&__ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E;
    uVar9 = (uint)bRam000000010b632570;
    if (bRam000000010b632570 - 1 < 2) {
LAB_1002a22a0:
      uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E
                         ,uVar9);
      if ((int)uVar7 != 0) {
        pcVar13 = s__>_not_sending_RST_STREAM___is_a_108ac7fb4;
        lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E;
LAB_1002a2330:
        in_stack_00000040 = (undefined4 *)((long)&stack0x00000020 + 4);
        in_stack_00000048 = (undefined *)0x1002d7d18;
        *(char **)(unaff_x27 + 0x1d0) = pcVar13;
        *(undefined4 ***)(unaff_x27 + 0x1d8) = &stack0x00000040;
        *(long *)(unaff_x27 + 0x1c0) = unaff_x29 + -0x68;
        *(undefined **)(unaff_x27 + 0x1c8) = &UNK_10b1f3630;
        *(undefined8 *)(unaff_x27 + 0x38) = 1;
        *(long *)(unaff_x27 + 0x40) = unaff_x29 + -0x78;
        *(undefined8 *)(unaff_x27 + 0x48) = 1;
        *(long *)(unaff_x27 + 0x50) = lVar20 + 0x30;
        uVar7 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar20,&stack0x000000d0)
        ;
        if (*unaff_x28 != '\0') {
          return uVar7;
        }
        if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
          lVar20 = *plVar8;
          uVar17 = *(undefined8 *)(lVar20 + 0x20);
          uVar14 = *(undefined8 *)(lVar20 + 0x28);
          *(undefined8 *)(unaff_x27 + 0x160) = 5;
          *(undefined8 *)(unaff_x27 + 0x168) = uVar17;
          *(undefined8 *)(unaff_x27 + 0x170) = uVar14;
          puVar10 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar10 = &UNK_10b3c24c8;
          }
          puVar19 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar19 = &UNK_109adfc03;
          }
          uVar7 = (**(code **)(puVar10 + 0x18))(puVar19,unaff_x29 + -0xd8);
          if ((int)uVar7 != 0) {
            uVar7 = __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar20,puVar19,puVar10,unaff_x29 + -0xd8,&stack0x000000d0);
            return uVar7;
          }
          return uVar7;
        }
        return uVar7;
      }
    }
    else if (bRam000000010b632570 != 0) {
      uVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                        (&
                         __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E
                        );
      uVar9 = (uint)uVar7 & 0xff;
      if ((uVar7 & 0xff) != 0) goto LAB_1002a22a0;
    }
  }
  lVar20 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E;
  if (*unaff_x28 != '\0') {
    return uVar7;
  }
  if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
    return uVar7;
  }
  in_stack_00000068 =
       *(undefined8 *)
        (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E + 0x20);
  in_stack_00000070 =
       *(undefined8 *)
        (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E + 0x28);
  in_stack_00000060 = 5;
  puVar10 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar10 = &UNK_10b3c24c8;
  }
  puVar19 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar19 = &UNK_109adfc03;
  }
  uVar7 = (**(code **)(puVar10 + 0x18))(puVar19,&stack0x00000060);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  lVar11 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E + 0x30;
  *(long *)(unaff_x27 + 0x1c0) = (long)&stack0x00000020 + 4;
  *(undefined8 *)(unaff_x27 + 0x1c8) = 0x1002d7d18;
  *(char **)(unaff_x27 + 0x28) = s__>_not_sending_RST_STREAM___is_a_108ac7fb4;
  *(long *)(unaff_x27 + 0x30) = unaff_x29 + -0x78;
  *(undefined1 **)(unaff_x27 + 0x18) = &stack0x000000c0;
  *(undefined **)(unaff_x27 + 0x20) = &UNK_10b1f3630;
  *(undefined8 *)(unaff_x27 + 0x160) = 1;
  *(undefined1 **)(unaff_x27 + 0x168) = &stack0x000000b0;
  *(undefined8 *)(unaff_x27 + 0x170) = 1;
  *(long *)(unaff_x27 + 0x178) = lVar11;
  lVar11 = *(long *)(lVar20 + 0x60);
  uVar14 = *(undefined8 *)(lVar20 + 0x68);
  lVar15 = *(long *)(lVar20 + 0x50);
  uVar16 = *(undefined8 *)(lVar20 + 0x58);
  uVar17 = 1;
  if (lVar15 == 0) {
    uVar17 = 2;
  }
  uStack0000000000000118 = *(undefined4 *)(lVar20 + 8);
  uStack000000000000011c = *(undefined4 *)(lVar20 + 0xc);
  *(long *)(unaff_x27 + 0x1d0) = unaff_x29 + -0xd8;
  *(undefined1 *)(unaff_x29 + -0x60) = 1;
  uVar12 = 1;
  if (lVar11 == 0) {
    uVar12 = 2;
  }
  *(undefined8 *)(unaff_x27 + 0x70) = in_stack_00000068;
  *(undefined8 *)(unaff_x27 + 0x68) = in_stack_00000060;
  uVar18 = in_stack_00000070;
LAB_1002a20ac:
  in_stack_00000040 = (undefined4 *)(unaff_x29 + -0x68);
  in_stack_00000048 = &DAT_1061c2098;
  *(undefined8 *)(unaff_x27 + 0x78) = uVar18;
  *(char **)(unaff_x27 + 0x88) = s__108b39f4f;
  *(undefined4 ***)(unaff_x27 + 0x90) = &stack0x00000040;
  *(undefined8 *)(unaff_x27 + 0x38) = uVar17;
  *(long *)(unaff_x27 + 0x40) = lVar15;
  *(undefined8 *)(unaff_x27 + 0x48) = uVar16;
  *(undefined8 *)(unaff_x27 + 0x50) = uVar12;
  *(long *)(unaff_x27 + 0x58) = lVar11;
  *(undefined8 *)(unaff_x27 + 0x60) = uVar14;
  uVar7 = (**(code **)(puVar10 + 0x20))(puVar19,&stack0x000000d0);
  return uVar7;
}

