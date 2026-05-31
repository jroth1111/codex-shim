
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10085f644(void)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  bool bVar14;
  code *pcVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  long unaff_x19;
  long unaff_x20;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *unaff_x22;
  long *plVar22;
  undefined1 *unaff_x23;
  undefined8 uVar23;
  long *plVar24;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  ulong uVar25;
  undefined8 unaff_x27;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 *in_stack_00000070;
  undefined1 *in_stack_00000078;
  code *in_stack_00000080;
  code *in_stack_00000088;
  long in_stack_00000090;
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
  ulong uVar29;
  ulong in_stack_00000488;
  undefined1 *in_stack_00000490;
  long *in_stack_00000c98;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s_Pulling_model_____108ac6033,&stack0x00000b90);
  *(code **)(unaff_x25 + 0x10) = in_stack_00000088;
  *(code **)(unaff_x25 + 8) = in_stack_00000080;
  uVar29 = 2;
  pcVar7 = (code *)(**(code **)(unaff_x24 + 0x18))();
  puVar5 = in_stack_00000490;
  uVar25 = in_stack_00000488;
  if (pcVar7 == (code *)0x0) {
    if (in_stack_00000488 != 0) {
      _free(in_stack_00000490);
    }
    *(long *)(unaff_x19 + 0x148) = unaff_x20;
    *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x128);
    unaff_x23 = (undefined1 *)(unaff_x19 + 0x1c8);
    *(undefined1 *)(unaff_x19 + 0x1c8) = 0;
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0x128);
    lVar19 = *(long *)(unaff_x20 + 0x10);
    do {
      lVar21 = lVar19;
      if (lVar21 == 0) break;
      lVar19 = *(long *)(unaff_x20 + 8) + lVar21;
      pbVar17 = (byte *)(lVar19 + -1);
      uVar16 = (uint)(char)*pbVar17;
      if ((int)uVar16 < 0) {
        pbVar17 = (byte *)(lVar19 + -2);
        bVar1 = *pbVar17;
        if ((char)bVar1 < -0x40) {
          pbVar17 = (byte *)(lVar19 + -3);
          bVar2 = *pbVar17;
          if ((char)bVar2 < -0x40) {
            pbVar17 = (byte *)(lVar19 + -4);
            uVar18 = bVar2 & 0x3f | (*pbVar17 & 7) << 6;
          }
          else {
            uVar18 = (int)(char)bVar2 & 0xf;
          }
          uVar18 = bVar1 & 0x3f | uVar18 << 6;
        }
        else {
          uVar18 = (int)(char)bVar1 & 0x1f;
        }
        uVar16 = uVar16 & 0x3f | uVar18 << 6;
      }
      lVar19 = (long)pbVar17 - *(long *)(unaff_x20 + 8);
    } while (uVar16 == 0x2f);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s__api_pull_108ac6009,&stack0x00000b90);
    FUN_1011d5524(&stack0x00000080,*(undefined8 *)(unaff_x20 + 0x18),&UNK_108cab1d8,&stack0x00000af0
                 );
    pauVar8 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar8[1][0] == '\x01') {
      auVar27 = *pauVar8;
    }
    else {
      auVar27 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar8 + 8) = auVar27._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar27._0_8_ + 1;
    puVar9 = (undefined4 *)_malloc(5);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,5);
      goto LAB_100861774;
    }
    *(undefined1 *)(puVar9 + 1) = 0x6c;
    *puVar9 = 0x65646f6d;
    uVar23 = *(undefined8 *)(unaff_x19 + 0x160);
    lVar19 = *(long *)(unaff_x19 + 0x168);
    if (lVar19 == 0) {
      lVar26 = 1;
    }
    else {
      lVar26 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar19,1);
      if (lVar26 == 0) {
        func_0x0001087c9084(1,lVar19);
        goto LAB_100861774;
      }
    }
    _memcpy(lVar26,uVar23,lVar19);
    FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
    if (lVar21 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x00000d40);
    }
    puVar9 = (undefined4 *)_malloc(6);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
      goto LAB_100861774;
    }
    *(undefined2 *)(puVar9 + 1) = 0x6d61;
    *puVar9 = 0x65727473;
    FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
    if (lVar21 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x00000d40);
    }
    *(undefined8 *)(unaff_x19 + 0x198) = 0;
    *(undefined8 *)(unaff_x19 + 400) = 0;
    *(long *)(unaff_x19 + 0x1a8) = auVar27._0_8_;
    *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
    *(long *)(unaff_x19 + 0x1b0) = auVar27._8_8_;
    *(undefined8 *)(unaff_x19 + 0x178) = 8;
    *(undefined8 *)(unaff_x19 + 0x170) = 0;
    *(undefined **)(unaff_x19 + 0x188) = &UNK_108c56c70;
    *(undefined8 *)(unaff_x19 + 0x180) = 0;
    FUN_1011d5a74(&stack0x00000b90,&stack0x00000080,unaff_x19 + 0x170);
    if (&stack0x00000000 == (undefined1 *)0xfffffffffffff672) {
      auVar27._8_8_ = &DAT_100c7b3a0;
      auVar27._0_8_ = 1;
    }
    else {
      auVar27 = FUN_105c4eee0(in_stack_00000c98,&stack0x00000b90);
    }
    pcVar7 = auVar27._8_8_;
    lVar19 = *in_stack_00000c98;
    *in_stack_00000c98 = lVar19 + -1;
    LORelease();
    if (lVar19 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(&stack0x00000c98);
    }
    *(undefined1 (*) [16])(unaff_x19 + 0x1b8) = auVar27;
    if ((auVar27._0_8_ & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
      if (pcVar7 == (code *)0x0) {
        FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
        goto LAB_100861774;
      }
      uVar12 = 0;
      uVar23 = 1;
      pcVar15 = (code *)0x3;
LAB_10085fa74:
      uVar6 = in_stack_000000e8;
      FUN_100e03d7c(uVar23,uVar12);
      if (pcVar15 == (code *)0x3) {
        in_stack_00000080 = pcVar7;
        plVar22 = (long *)_malloc(8);
        if (plVar22 == (long *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100861774;
        }
        *plVar22 = (long)pcVar7;
        pcVar7 = (code *)func_0x000106029c30(0x28,plVar22,&UNK_10b21e380);
        FUN_100de6690(unaff_x19 + 0x170);
      }
      else {
        FUN_100de6690(unaff_x19 + 0x170);
        if ((ushort)uVar6 - 200 < 100) {
          auVar27 = __ZN7reqwest10async_impl8response8Response12bytes_stream17h5a874101c98e8fa6E
                              (&stack0x00000b08);
          in_stack_00000488 = auVar27._8_8_;
          uVar29 = auVar27._0_8_;
          in_stack_00000090 = 0;
          in_stack_00000098 = 0;
          in_stack_00000080 = (code *)0x0;
          in_stack_00000088 = (code *)0x8;
          in_stack_00000490 = (undefined1 *)0x1;
          pcVar7 = (code *)_malloc(0x1f8);
          if (pcVar7 == (code *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1f8);
            goto LAB_100861774;
          }
          _memcpy(pcVar7,&stack0x00000480,0x1f8);
          FUN_100e816dc(&stack0x00000080);
          *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
          *(code **)(unaff_x19 + 0x150) = pcVar7;
          *(undefined **)(unaff_x19 + 0x158) = &UNK_10b220f28;
          while( true ) {
            *(undefined8 **)(unaff_x19 + 0x148) = (undefined8 *)(unaff_x19 + 0x150);
            (**(code **)(*(long *)(unaff_x19 + 0x158) + 0x18))
                      (&stack0x00000480,*(undefined8 *)(unaff_x19 + 0x150));
            if (uVar29 == 7) break;
            if (uVar29 == 6) {
              pcVar7 = (code *)FUN_100c35750(&UNK_108caca7b,0x2f);
              unaff_x23 = *(undefined1 **)(unaff_x19 + 0x150);
              puVar11 = *(undefined8 **)(unaff_x19 + 0x158);
              if ((code *)*puVar11 != (code *)0x0) {
                (*(code *)*puVar11)(unaff_x23);
              }
LAB_100861980:
              puVar5 = unaff_x23;
              uVar25 = puVar11[1];
              goto joined_r0x000100861984;
            }
            unaff_x23 = &stack0x00000480;
            pcVar7 = (code *)(**(code **)(*(long *)(unaff_x19 + 0x138) + 0x18))
                                       (*(undefined8 *)(unaff_x19 + 0x130),&stack0x00000480);
            if (pcVar7 != (code *)0x0) {
LAB_1008618a4:
              if (uVar29 != 5) {
LAB_100861938:
                lVar19 = uVar29 - 2;
                if (uVar29 < 2) {
                  lVar19 = 1;
                }
                if (lVar19 != 0) goto LAB_10086196c;
              }
              if (in_stack_00000488 != 0) {
                _free(*unaff_x22);
              }
LAB_10086196c:
              unaff_x23 = *(undefined1 **)(unaff_x19 + 0x150);
              puVar11 = *(undefined8 **)(unaff_x19 + 0x158);
              if ((code *)*puVar11 != (code *)0x0) {
                (*(code *)*puVar11)(unaff_x23);
              }
              goto LAB_100861980;
            }
            uVar25 = uVar29 - 2;
            if (uVar29 < 2) {
              uVar25 = 1;
            }
            if (1 < uVar25) {
              if (uVar25 == 2) goto LAB_1008618a4;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x00000080,s_Pull_failed__108ac6048,&stack0x000008a0);
              lVar19 = in_stack_00000090;
              pcVar15 = in_stack_00000088;
              pcVar7 = in_stack_00000080;
              plVar22 = (long *)_malloc(0x18);
              if (plVar22 != (long *)0x0) {
                *plVar22 = (long)pcVar7;
                plVar22[1] = (long)pcVar15;
                plVar22[2] = lVar19;
                pcVar7 = (code *)func_0x000106029c30(0x28,plVar22,&UNK_10b209118);
                if (in_stack_00000488 != 0) {
                  _free(1);
                }
                if (uVar29 != 5) goto LAB_100861938;
                goto LAB_10086196c;
              }
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
              goto LAB_100861774;
            }
            if (((uVar29 != 5) && (uVar25 == 0)) && (in_stack_00000488 != 0)) {
              _free(*unaff_x22);
            }
          }
          uVar13 = 4;
          goto LAB_100861864;
        }
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000080,s_failed_to_start_pull__HTTP_108ac6015,&stack0x00000b90);
        lVar19 = in_stack_00000090;
        pcVar15 = in_stack_00000088;
        pcVar7 = in_stack_00000080;
        plVar22 = (long *)_malloc(0x18);
        if (plVar22 == (long *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100861774;
        }
        *plVar22 = (long)pcVar7;
        plVar22[1] = (long)pcVar15;
        plVar22[2] = lVar19;
        pcVar7 = (code *)func_0x000106029c30(0x28,plVar22,&UNK_10b209118);
        FUN_100e0d524(&stack0x00000b08);
      }
      *unaff_x23 = 1;
      goto LAB_100861990;
    }
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000080,pcVar7);
    if (in_stack_00000080 != (code *)0x4) {
      uVar23 = *(undefined8 *)(unaff_x19 + 0x1b8);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x1c0);
      pcVar15 = in_stack_00000080;
      pcVar7 = in_stack_00000088;
      goto LAB_10085fa74;
    }
    uVar13 = 3;
    *unaff_x23 = 3;
LAB_100861864:
    *in_stack_00000070 = uVar13;
    bVar14 = true;
  }
  else {
joined_r0x000100861984:
    if (uVar25 != 0) {
      _free(puVar5);
    }
LAB_100861990:
    bVar14 = false;
    *in_stack_00000070 = 1;
  }
  if (bVar14) {
    *in_stack_00000078 = 5;
    *(undefined1 *)(unaff_x19 + 0x20) = 5;
    uVar23 = 1;
  }
  else {
    FUN_100cab938(unaff_x27);
    lVar19 = *(long *)(unaff_x19 + 0xb8);
    if (lVar19 != 0) {
      lVar21 = *(long *)(unaff_x19 + 200);
      if (lVar21 != 0) {
        plVar22 = *(long **)(unaff_x19 + 0xb0);
        plVar24 = plVar22 + 1;
        lVar26 = *plVar22;
        uVar25 = CONCAT17(-(-1 < lVar26),
                          CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar26 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar26
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar26 >> 8)),-(-1 < (char)lVar26)))))))) &
                 0x8080808080808080;
        do {
          while (uVar25 == 0) {
            lVar26 = *plVar24;
            plVar22 = plVar22 + -0x28;
            plVar24 = plVar24 + 1;
            uVar25 = CONCAT17(-(-1 < lVar26),
                              CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar26 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar26 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar26 >> 8)),
                                                           -(-1 < (char)lVar26)))))))) &
                     0x8080808080808080;
          }
          uVar3 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          iVar4 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
          if (plVar22[(long)-iVar4 * 5 + -5] != 0) {
            _free(plVar22[(long)-iVar4 * 5 + -4]);
          }
          uVar25 = uVar25 - 1 & uVar25;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (lVar19 * 0x29 != -0x31) {
        _free(*(long *)(unaff_x19 + 0xb0) + lVar19 * -0x28 + -0x28);
      }
    }
    if (pcVar7 == (code *)0x0) {
      lVar19 = *(long *)(unaff_x19 + 0x90);
      lVar21 = *(long *)(unaff_x19 + 0x98);
      if (lVar21 != 0) {
        puVar11 = (undefined8 *)(lVar19 + 8);
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 3;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        _free(lVar19);
      }
      lVar19 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar19 + -1;
      LORelease();
      if (lVar19 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x48));
      }
      pcVar7 = (code *)0x0;
      *in_stack_00000078 = 1;
    }
    else {
      lVar19 = *(long *)(unaff_x19 + 0x90);
      lVar21 = *(long *)(unaff_x19 + 0x98);
      if (lVar21 != 0) {
        puVar11 = (undefined8 *)(lVar19 + 8);
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 3;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        _free(lVar19);
      }
      lVar19 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar19 + -1;
      LORelease();
      if (lVar19 == 1) {
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
    if (pcVar7 == (code *)0x0) {
      unaff_x23 = (undefined1 *)0x0;
    }
    else {
      in_stack_00000080 = (code *)&stack0x00000b90;
      in_stack_00000088 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
      puVar10 = (ulong *)_malloc(0x18);
      if (puVar10 == (ulong *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100861774:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100861778);
        (*pcVar7)();
      }
      *puVar10 = uVar29;
      puVar10[1] = in_stack_00000488;
      puVar10[2] = (ulong)in_stack_00000490;
      puVar11 = (undefined8 *)_malloc(0x18);
      if (puVar11 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100861774;
      }
      *puVar11 = puVar10;
      puVar11[1] = &UNK_10b209118;
      *(undefined1 *)(puVar11 + 2) = 0x28;
      if (((ulong)pcVar7 & 3) == 1) {
        uVar23 = *(undefined8 *)(pcVar7 + -1);
        puVar20 = *(undefined8 **)(pcVar7 + 7);
        pcVar15 = (code *)*puVar20;
        if (pcVar15 != (code *)0x0) {
          (*pcVar15)(uVar23);
        }
        if (puVar20[1] != 0) {
          _free(uVar23);
        }
        _free(pcVar7 + -1);
      }
      unaff_x23 = (undefined1 *)((long)puVar11 + 1);
    }
    uVar23 = 0;
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  auVar28._8_8_ = unaff_x23;
  auVar28._0_8_ = uVar23;
  return auVar28;
}

