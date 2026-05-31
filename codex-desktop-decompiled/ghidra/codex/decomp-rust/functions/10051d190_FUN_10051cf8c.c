
/* WARNING: Removing unreachable block (ram,0x00010051c1b8) */
/* WARNING: Removing unreachable block (ram,0x00010051c1c8) */
/* WARNING: Removing unreachable block (ram,0x00010051c628) */
/* WARNING: Removing unreachable block (ram,0x00010051c1d0) */
/* WARNING: Removing unreachable block (ram,0x00010051c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010051c1dc) */
/* WARNING: Removing unreachable block (ram,0x00010051c1fc) */
/* WARNING: Removing unreachable block (ram,0x00010051bc14) */
/* WARNING: Removing unreachable block (ram,0x00010051bc84) */
/* WARNING: Removing unreachable block (ram,0x00010051c8d8) */
/* WARNING: Removing unreachable block (ram,0x00010051bc88) */
/* WARNING: Removing unreachable block (ram,0x00010051bcb8) */
/* WARNING: Removing unreachable block (ram,0x00010051bccc) */
/* WARNING: Removing unreachable block (ram,0x00010051bc90) */
/* WARNING: Removing unreachable block (ram,0x00010051bca4) */
/* WARNING: Removing unreachable block (ram,0x00010051bcdc) */
/* WARNING: Removing unreachable block (ram,0x00010051bd14) */
/* WARNING: Removing unreachable block (ram,0x00010051bd30) */
/* WARNING: Removing unreachable block (ram,0x00010051bd3c) */
/* WARNING: Removing unreachable block (ram,0x00010051bd48) */
/* WARNING: Removing unreachable block (ram,0x00010051bda0) */
/* WARNING: Removing unreachable block (ram,0x00010051bd50) */
/* WARNING: Removing unreachable block (ram,0x00010051bd78) */
/* WARNING: Removing unreachable block (ram,0x00010051bd84) */
/* WARNING: Removing unreachable block (ram,0x00010051bd8c) */
/* WARNING: Removing unreachable block (ram,0x00010051bd94) */
/* WARNING: Removing unreachable block (ram,0x00010051bdac) */
/* WARNING: Removing unreachable block (ram,0x00010051bdc0) */
/* WARNING: Removing unreachable block (ram,0x00010051bcf8) */
/* WARNING: Removing unreachable block (ram,0x00010051bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010051bddc) */
/* WARNING: Removing unreachable block (ram,0x00010051bdd4) */
/* WARNING: Removing unreachable block (ram,0x00010051c448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051cf8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined1 uVar14;
  long lVar15;
  code *pcVar16;
  long *plVar17;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 uVar18;
  undefined1 *unaff_x24;
  char *pcVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long unaff_x28;
  char in_wzr;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  long *in_stack_00000060;
  char *in_stack_00000080;
  long in_stack_00000088;
  undefined *in_stack_00000090;
  long in_stack_00000098;
  undefined4 uStack00000000000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  long in_stack_000000c0;
  ulong in_stack_000000c8;
  char *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  char *in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long *in_stack_00000108;
  long *in_stack_00000110;
  long *in_stack_00000310;
  long in_stack_00000430;
  char *in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined1 *in_stack_00000708;
  long *in_stack_00000710;
  undefined1 *in_stack_00000740;
  undefined *in_stack_00000748;
  long in_stack_00000750;
  
code_r0x00010051cf8c:
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000290);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar22 = *unaff_x23;
    in_stack_00000748 = *(undefined **)(lVar22 + 0x20);
    in_stack_00000750 = *(long *)(lVar22 + 0x28);
    in_stack_00000740 = (undefined1 *)0x2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000740);
    if (iVar8 != 0) {
      _uStack00000000000000a0 = *(long *)(lVar22 + 0x60);
      in_stack_000000a8 = *(long **)(lVar22 + 0x68);
      in_stack_00000088 = *(long *)(lVar22 + 0x50);
      in_stack_00000090 = *(undefined **)(lVar22 + 0x58);
      in_stack_00000080 = (char *)0x1;
      if (in_stack_00000088 == 0) {
        in_stack_00000080 = (char *)0x2;
      }
      in_stack_000000c8 = *(ulong *)(lVar22 + 8);
      in_stack_00000098 = 1;
      if (_uStack00000000000000a0 == 0) {
        in_stack_00000098 = 2;
      }
      in_stack_000000b8 = *(long **)(unaff_x28 + 0x88);
      in_stack_000000b0 = *(long **)(unaff_x28 + 0x80);
      in_stack_000000d8 = &stack0x00000730;
      in_stack_000000d0 = s__108b39f4f;
      in_stack_000000c0 = in_stack_00000750;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000080);
    }
  }
LAB_10051d250:
  if (in_stack_000006c0 != (char *)0x0) {
    _free(in_stack_000006c8);
  }
  do {
    lVar22 = *(long *)unaff_x19[0x5f];
    *(long *)unaff_x19[0x5f] = lVar22 + -1;
    LORelease();
    if (lVar22 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(unaff_x19 + 0x5f);
    }
    plVar12 = (long *)unaff_x19[0x5a];
    if (plVar12 == (long *)unaff_x19[0x5c]) {
      unaff_x19[0x5d] = 0;
      FUN_100d373dc(unaff_x19 + 0x59);
      *unaff_x24 = 1;
      FUN_100cc8520();
      lVar22 = *unaff_x19;
      if (lVar22 == -0x7ffffffffffffffe) {
        lVar22 = unaff_x19[6];
        in_stack_00000080 = (char *)0x0;
        in_stack_00000088 = 1;
        in_stack_00000090 = (undefined *)0x0;
        if (lVar22 == 0) {
          bVar5 = true;
        }
        else {
          puVar20 = (ulong *)(unaff_x19[5] + 0x10);
          lVar23 = 1;
          do {
            uVar11 = puVar20[-1];
            uVar3 = *puVar20;
            if ((ulong)((long)in_stack_00000080 - (long)in_stack_00000090) < uVar3) {
              thunk_FUN_108855060(&stack0x00000080,in_stack_00000090,uVar3,1,1);
              lVar23 = in_stack_00000088;
            }
            puVar1 = in_stack_00000090;
            puVar20 = puVar20 + 3;
            _memcpy(in_stack_00000090 + lVar23,uVar11,uVar3);
            in_stack_00000090 = puVar1 + uVar3;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          bVar5 = in_stack_00000080 == (char *)0x0;
        }
        lVar22 = in_stack_00000088;
        __ZN10codex_core19stream_events_utils55strip_hidden_assistant_markup_and_parse_memory_citation17hd9db1b11f40a4151E
                  (&stack0x00000080,in_stack_00000088,in_stack_00000090,(char)unaff_x19[0x52]);
        puVar1 = in_stack_00000090;
        lVar23 = in_stack_00000088;
        pcVar19 = in_stack_00000080;
        *(long *)(unaff_x20 + 0x3b8) = _uStack00000000000000a0;
        *(long *)(unaff_x20 + 0x3b0) = in_stack_00000098;
        *(long **)(unaff_x20 + 0x3c8) = in_stack_000000b0;
        *(long **)(unaff_x20 + 0x3c0) = in_stack_000000a8;
        *(long *)(unaff_x20 + 0x3d8) = in_stack_000000c0;
        *(long **)(unaff_x20 + 0x3d0) = in_stack_000000b8;
        puVar21 = (undefined8 *)_malloc(0x18);
        if (puVar21 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          lVar22 = _uStack00000000000000a0;
          plVar12 = in_stack_000000b0;
          plVar4 = in_stack_000000b8;
          goto LAB_10051ca20;
        }
        *puVar21 = pcVar19;
        puVar21[1] = lVar23;
        puVar21[2] = puVar1;
        lVar23 = unaff_x19[5];
        lVar6 = unaff_x19[6];
        if (lVar6 != 0) {
          puVar10 = (undefined8 *)(lVar23 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (unaff_x19[4] != 0) {
          _free(lVar23);
        }
        unaff_x19[4] = 1;
        unaff_x19[5] = (long)puVar21;
        unaff_x19[6] = 1;
        if (unaff_x19[7] == -0x8000000000000000) {
          lVar23 = *(long *)(unaff_x20 + 0x3b0);
          lVar24 = *(long *)(unaff_x20 + 0x3c8);
          lVar6 = *(long *)(unaff_x20 + 0x3c0);
          unaff_x19[8] = *(long *)(unaff_x20 + 0x3b8);
          unaff_x19[7] = lVar23;
          unaff_x19[10] = lVar24;
          unaff_x19[9] = lVar6;
          lVar23 = *(long *)(unaff_x20 + 0x3d0);
          unaff_x19[0xc] = *(long *)(unaff_x20 + 0x3d8);
          unaff_x19[0xb] = lVar23;
        }
        else if (in_stack_00000430 != -0x8000000000000000) {
          FUN_100e24ac8(&stack0x00000430);
        }
        if (!bVar5) {
          _free(lVar22);
        }
        lVar22 = *unaff_x19;
      }
      if (lVar22 == -0x7ffffffffffffff9) {
        unaff_x19[0x38] = (long)(unaff_x19 + 1);
        FUN_10624142c(&stack0x00000080,unaff_x19[0x35] + 0x780,0);
        thunk_FUN_108855060(&stack0x00000290,0,0x24,1,1);
        lRam0000000000000009 = in_stack_00000088;
        pcRam0000000000000001 = in_stack_00000080;
        lRam0000000000000019 = in_stack_00000098;
        puRam0000000000000011 = in_stack_00000090;
        uRam0000000000000021 = uStack00000000000000a0;
        lVar22 = *(long *)(unaff_x20 + 0x210);
        unaff_x19[0x3a] = *(long *)(unaff_x20 + 0x218);
        unaff_x19[0x39] = lVar22;
        unaff_x19[0x3b] = 0x24;
        lVar22 = *(long *)(unaff_x19[0x36] + 0x788) + 0x1c08;
        lVar23 = unaff_x19[0x3a];
        lVar25 = unaff_x19[0x3b];
        lVar15 = unaff_x19[0x38];
        lVar6 = *(long *)(lVar15 + 8);
        lVar26 = *(long *)(lVar15 + 0x10);
        lVar24 = *(long *)(lVar15 + 0x38);
        lVar15 = *(long *)(lVar15 + 0x40);
        unaff_x19[0x53] = lVar23;
        unaff_x19[0x54] = lVar25;
        unaff_x19[0x55] = lVar6;
        unaff_x19[0x56] = lVar26;
        unaff_x19[0x57] = lVar24;
        unaff_x19[0x58] = lVar15;
        unaff_x19[0x5c] = lVar22;
        *(undefined1 *)((long)unaff_x19 + 0x2e9) = 0;
        *(undefined1 *)(unaff_x19 + 0x5d) = 0;
        auVar27 = FUN_100e8d6f8();
        FUN_101182ee0(&stack0x00000740,&UNK_108ca3020,auVar27._0_8_,auVar27._8_8_);
        if (in_stack_00000740 != (undefined1 *)0x8000000000000000) {
          *(undefined1 *)(unaff_x19 + 0x5d) = 1;
          unaff_x19[0x5e] = (long)in_stack_00000740;
          unaff_x19[0x60] = in_stack_00000750;
          unaff_x19[0x5f] = (long)in_stack_00000748;
          __ZN10codex_core19stream_events_utils30image_generation_artifact_path17h36b4abb60c630bf6E
                    (unaff_x19 + 0x59,lVar22,lVar23,lVar25,lVar6,lVar26);
          plVar12 = unaff_x19 + 0x61;
          func_0x0001055614c0(plVar12,unaff_x19 + 0x59);
          if (*plVar12 != -0x8000000000000000) {
            unaff_x19[0x65] = unaff_x19[0x62];
            unaff_x19[100] = *plVar12;
            unaff_x19[0x66] = unaff_x19[99];
            *(undefined1 *)(unaff_x19 + 0x6f) = 0;
            unaff_x19[0x68] = unaff_x19[0x65];
            unaff_x19[0x67] = unaff_x19[100];
            pcVar19 = (char *)unaff_x19[0x66];
            unaff_x19[0x69] = (long)pcVar19;
            lVar22 = unaff_x19[0x68];
            if (pcVar19 == (char *)0x0) {
              puVar9 = (undefined1 *)0x1;
            }
            else {
              puVar9 = (undefined1 *)_malloc(pcVar19);
              if (puVar9 == (undefined1 *)0x0) {
                FUN_107c03c64(1,pcVar19);
                lVar22 = _uStack00000000000000a0;
                plVar12 = in_stack_000000b0;
                plVar4 = in_stack_000000b8;
                goto LAB_10051ca20;
              }
            }
            _memcpy(puVar9,lVar22,pcVar19);
            unaff_x19[0x6a] = (long)pcVar19;
            unaff_x19[0x6b] = (long)puVar9;
            unaff_x19[0x6c] = (long)pcVar19;
            *(undefined1 *)(unaff_x19 + 0x6e) = 0;
            auVar27 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E
                                (&UNK_10b23a3d0);
            plVar13 = auVar27._8_8_;
            do {
              lVar23 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
              lVar22 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
              bVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
              ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar22;
            } while (bVar5);
            if ((auVar27._0_8_ & 1) == 0) {
              plVar12 = plVar13 + 0x4c;
              if ((char)*plVar12 == '\0') {
                *(char *)plVar12 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (plVar12,plVar13,1000000000);
              }
              plVar13[0x51] = plVar13[0x51] + 1;
              if ((char)*plVar12 == '\x01') {
                *(char *)plVar12 = in_wzr;
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar12,0);
              }
              lVar6 = *plVar13;
              *plVar13 = lVar6 + 1;
              lVar22 = _uStack00000000000000a0;
              plVar12 = in_stack_000000b0;
              plVar4 = in_stack_000000b8;
              if (lVar6 < 0) goto LAB_10051ca20;
              plVar17 = (long *)plVar13[0x5e];
              _uStack00000000000000a0 = 0;
              in_stack_000000b8 = plVar13 + 0x5c;
            }
            else {
              lVar6 = *plVar13;
              *plVar13 = lVar6 + 1;
              lVar22 = _uStack00000000000000a0;
              plVar12 = in_stack_000000b0;
              plVar4 = in_stack_000000b8;
              if (lVar6 < 0) goto LAB_10051ca20;
              plVar17 = (long *)plVar13[0x4a];
              _uStack00000000000000a0 = 1;
              in_stack_000000b8 = plVar13 + 0x48;
            }
            in_stack_000000b0 = (long *)0x0;
            if (plVar17 != (long *)0x0) {
              lVar6 = *plVar17;
              *plVar17 = lVar6 + 1;
              if (lVar6 < 0) goto LAB_10051ca20;
              in_stack_000000b0 = (long *)in_stack_000000b8[2];
              in_stack_000000b8 = (long *)in_stack_000000b8[3];
              lVar6 = *in_stack_000000b0;
              *in_stack_000000b0 = lVar6 + 1;
              if (lVar6 < 0) goto LAB_10051ca20;
            }
            in_stack_00000080 = (char *)0xcc;
            in_stack_00000088 = 0;
            in_stack_00000090 = &UNK_10b240e60;
            in_stack_00000098 = 0;
            in_stack_000000c0 = lVar23;
            in_stack_000000c8 = in_stack_000000c8 & 0xffffffff00000000;
            in_stack_000000e8 = 0;
            in_stack_000000f0 = 0;
            in_stack_000000f8 = 0;
            in_stack_000000a8 = plVar13;
            in_stack_000000d0 = pcVar19;
            in_stack_000000d8 = puVar9;
            in_stack_000000e0 = pcVar19;
            in_stack_00000108 = in_stack_000000b0;
            in_stack_00000110 = in_stack_000000b8;
            _posix_memalign(&stack0x000006c0,0x80,0x100);
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
            lVar22 = _uStack00000000000000a0;
            plVar12 = in_stack_000000b0;
            plVar4 = in_stack_000000b8;
            goto LAB_10051ca20;
          }
          *(undefined1 *)(unaff_x19 + 0x5d) = 0;
          unaff_x19[0x61] = (long)(unaff_x19 + 0x59);
          *(undefined1 *)(unaff_x19 + 0x73) = 0;
          unaff_x19[0x62] = (long)(unaff_x19 + 0x59);
          *(undefined1 *)((long)unaff_x19 + 0x399) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x399) = 0;
          unaff_x19[99] = 0;
          unaff_x19[100] = unaff_x19[0x5e];
          unaff_x19[0x65] = unaff_x19[0x5f];
          unaff_x19[0x66] = unaff_x19[0x60];
          unaff_x19[0x67] = unaff_x19[0x5a];
          unaff_x19[0x68] = unaff_x19[0x5b];
          *(undefined1 *)((long)unaff_x19 + 0x391) = 0;
          auVar27 = FUN_100fc1398(unaff_x19 + 99);
          lVar22 = auVar27._8_8_;
          if ((auVar27._0_8_ & 1) == 0) {
            if (*(char *)((long)unaff_x19 + 0x391) == '\x03') {
              if ((char)unaff_x19[0x71] == '\x03') {
                plVar12 = (long *)unaff_x19[0x70];
                if (*plVar12 == 0xcc) {
                  *plVar12 = 0x84;
                }
                else {
                  (**(code **)(plVar12[2] + 0x20))(plVar12);
                }
              }
              else if ((char)unaff_x19[0x71] == '\0') {
                if (unaff_x19[0x69] != 0) {
                  _free(unaff_x19[0x6a]);
                }
                if (unaff_x19[0x6c] == 0) {
                  if (unaff_x19[0x6d] != 0) {
                    _free(unaff_x19[0x6e]);
                  }
                }
                else {
                  (**(code **)(unaff_x19[0x6c] + 0x20))
                            (unaff_x19 + 0x6f,unaff_x19[0x6d],unaff_x19[0x6e]);
                }
              }
              *(undefined1 *)(unaff_x19 + 0x72) = 0;
            }
            else if (*(char *)((long)unaff_x19 + 0x391) == '\0') {
              lVar23 = unaff_x19[99];
              if (lVar23 == 0) {
                if (unaff_x19[100] != 0) {
                  _free(unaff_x19[0x65]);
                }
              }
              else {
                (**(code **)(lVar23 + 0x20))(unaff_x19 + 0x66,unaff_x19[100],unaff_x19[0x65]);
              }
            }
            *(undefined2 *)(unaff_x19 + 0x73) = 1;
            if ((auVar27._0_8_ & 1) == 0) {
              FUN_100d0ad80(unaff_x19 + 0x5e);
              if (lVar22 == 0) {
                lVar22 = unaff_x19[0x59];
                lVar23 = unaff_x19[0x5a];
                *(long *)(unaff_x20 + 0x218) = unaff_x19[0x5b];
                *(long *)(unaff_x20 + 0x210) = lVar23;
                lVar23 = -0x7fffffffffffffe0;
              }
              else {
                if (unaff_x19[0x59] != 0) {
                  _free(unaff_x19[0x5a]);
                }
                lVar23 = -0x7fffffffffffffe4;
                if (((char)unaff_x19[0x5d] == '\x01') && (unaff_x19[0x5e] != 0)) {
                  _free(unaff_x19[0x5f]);
                  lVar23 = -0x7fffffffffffffe4;
                }
              }
              goto LAB_10051bffc;
            }
          }
          else {
            *(undefined1 *)(unaff_x19 + 0x73) = 3;
          }
          *(undefined1 *)((long)unaff_x19 + 0x2e9) = 4;
          *in_stack_00000060 = -0x7ffffffffffffff4;
          uVar14 = 4;
          goto LAB_10051c7f4;
        }
        in_stack_00000708 = &stack0x000006c0;
        in_stack_00000710 =
             (long *)&
                     __ZN66__LT_base64__decode__DecodeError_u20_as_u20_core__fmt__Display_GT_3fmt17h79f07259c50275f7E
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000088,s__invalid_image_generation_payloa_108ac04c5,&stack0x00000708);
        *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x20 + 0x78);
        *(undefined8 *)(unaff_x20 + 0x270) = *(undefined8 *)(unaff_x20 + 0x70);
        *(undefined8 *)(unaff_x20 + 0x288) = *(undefined8 *)(unaff_x20 + 0x88);
        *(undefined8 *)(unaff_x20 + 0x280) = *(undefined8 *)(unaff_x20 + 0x80);
        *(long **)(unaff_x20 + 0x238) = in_stack_000000b8;
        *(long **)(unaff_x20 + 0x230) = in_stack_000000b0;
        *(ulong *)(unaff_x20 + 0x248) = in_stack_000000c8;
        *(long *)(unaff_x20 + 0x240) = in_stack_000000c0;
        *(undefined1 **)(unaff_x20 + 600) = in_stack_000000d8;
        *(char **)(unaff_x20 + 0x250) = in_stack_000000d0;
        *(long *)(unaff_x20 + 0x268) = in_stack_000000e8;
        *(char **)(unaff_x20 + 0x260) = in_stack_000000e0;
        lVar23 = -0x7ffffffffffffff5;
        *(long *)(unaff_x20 + 0x218) = in_stack_00000098;
        *(undefined **)(unaff_x20 + 0x210) = in_stack_00000090;
        *(long **)(unaff_x20 + 0x228) = in_stack_000000a8;
        *(long *)(unaff_x20 + 0x220) = _uStack00000000000000a0;
        lVar22 = in_stack_00000088;
        in_stack_00000310 = in_stack_00000110;
LAB_10051bffc:
        *(undefined1 *)(unaff_x19 + 0x5d) = 0;
        lVar24 = *(long *)(unaff_x20 + 0x268);
        lVar6 = *(long *)(unaff_x20 + 0x260);
        *(long *)(unaff_x20 + 0x438) = lVar24;
        *(long *)(unaff_x20 + 0x430) = lVar6;
        *(undefined8 *)(unaff_x20 + 0x448) = *(undefined8 *)(unaff_x20 + 0x278);
        *(undefined8 *)(unaff_x20 + 0x440) = *(undefined8 *)(unaff_x20 + 0x270);
        *(undefined8 *)(unaff_x20 + 0x458) = *(undefined8 *)(unaff_x20 + 0x288);
        *(undefined8 *)(unaff_x20 + 0x450) = *(undefined8 *)(unaff_x20 + 0x280);
        *(undefined8 *)(unaff_x20 + 0x418) = *(undefined8 *)(unaff_x20 + 0x248);
        *(undefined8 *)(unaff_x20 + 0x410) = *(undefined8 *)(unaff_x20 + 0x240);
        *(undefined8 *)(unaff_x20 + 0x428) = *(undefined8 *)(unaff_x20 + 600);
        *(undefined8 *)(unaff_x20 + 0x420) = *(undefined8 *)(unaff_x20 + 0x250);
        lVar26 = *(long *)(unaff_x20 + 0x228);
        lVar25 = *(long *)(unaff_x20 + 0x220);
        *(long *)(unaff_x20 + 0x3f8) = lVar26;
        *(long *)(unaff_x20 + 0x3f0) = lVar25;
        *(undefined8 *)(unaff_x20 + 0x408) = *(undefined8 *)(unaff_x20 + 0x238);
        *(undefined8 *)(unaff_x20 + 0x400) = *(undefined8 *)(unaff_x20 + 0x230);
        *(undefined8 *)(unaff_x20 + 1000) = *(undefined8 *)(unaff_x20 + 0x218);
        *(undefined8 *)(unaff_x20 + 0x3e0) = *(undefined8 *)(unaff_x20 + 0x210);
        *(undefined1 *)((long)unaff_x19 + 0x2e9) = 1;
        unaff_x19[0x3c] = lVar23;
        unaff_x19[0x3d] = lVar22;
        lVar22 = *(long *)(unaff_x20 + 0x440);
        lVar15 = *(long *)(unaff_x20 + 0x458);
        lVar23 = *(long *)(unaff_x20 + 0x450);
        unaff_x19[0x4b] = *(long *)(unaff_x20 + 0x448);
        unaff_x19[0x4a] = lVar22;
        unaff_x19[0x4d] = lVar15;
        unaff_x19[0x4c] = lVar23;
        unaff_x19[0x4e] = (long)in_stack_00000310;
        lVar22 = *(long *)(unaff_x20 + 0x400);
        lVar15 = *(long *)(unaff_x20 + 0x418);
        lVar23 = *(long *)(unaff_x20 + 0x410);
        unaff_x19[0x43] = *(long *)(unaff_x20 + 0x408);
        unaff_x19[0x42] = lVar22;
        unaff_x19[0x45] = lVar15;
        unaff_x19[0x44] = lVar23;
        lVar22 = *(long *)(unaff_x20 + 0x420);
        unaff_x19[0x47] = *(long *)(unaff_x20 + 0x428);
        unaff_x19[0x46] = lVar22;
        unaff_x19[0x49] = lVar24;
        unaff_x19[0x48] = lVar6;
        lVar22 = *(long *)(unaff_x20 + 0x3e0);
        unaff_x19[0x3f] = *(long *)(unaff_x20 + 1000);
        unaff_x19[0x3e] = lVar22;
        unaff_x19[0x41] = lVar26;
        unaff_x19[0x40] = lVar25;
        FUN_100cc85fc(unaff_x19 + 0x53);
        if (unaff_x19[0x3c] == -0x7fffffffffffffe0) {
          in_stack_00000088 = unaff_x19[0x3e];
          in_stack_00000080 = (char *)unaff_x19[0x3d];
          in_stack_00000090 = (undefined *)unaff_x19[0x3f];
          lVar22 = unaff_x19[0x38];
          if ((*(ulong *)(lVar22 + 0x60) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)(lVar22 + 0x68));
            lVar22 = unaff_x19[0x38];
          }
          *(long *)(lVar22 + 0x68) = in_stack_00000088;
          *(char **)(lVar22 + 0x60) = in_stack_00000080;
          *(undefined **)(lVar22 + 0x70) = in_stack_00000090;
          __ZN10codex_core19stream_events_utils30image_generation_artifact_path17h36b4abb60c630bf6E
                    (unaff_x19 + 0x53,*(long *)(unaff_x19[0x36] + 0x788) + 0x1c08,unaff_x19[0x3a],
                     unaff_x19[0x3b],&UNK_108ca3190,10);
          in_stack_00000080 = (char *)unaff_x19[0x54];
          in_stack_00000088 = unaff_x19[0x55];
          if (in_stack_00000088 == 0) {
            bVar5 = false;
          }
          else {
            bVar5 = *in_stack_00000080 == '/';
          }
          in_stack_00000090 = (undefined *)CONCAT71(in_stack_00000090._1_7_,6);
          in_stack_000000b8 = (long *)CONCAT62(CONCAT51(in_stack_000000b8._3_5_,bVar5),0x201);
          __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                    (&stack0x00000290,&stack0x00000080);
          uVar18 = *(undefined8 *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c10);
          lVar22 = *(long *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c18);
          if (lVar22 == 0) {
            lVar23 = 1;
          }
          else {
            lVar23 = _malloc(lVar22);
            if (lVar23 == 0) {
              FUN_107c03c64(1,lVar22);
              lVar22 = _uStack00000000000000a0;
              plVar12 = in_stack_000000b0;
              plVar4 = in_stack_000000b8;
              goto LAB_10051ca20;
            }
          }
          _memcpy(lVar23,uVar18,lVar22);
          unaff_x19[0x56] = lVar22;
          unaff_x19[0x57] = lVar23;
          unaff_x19[0x58] = lVar22;
          iVar8 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                            (&stack0x000006c0,&stack0x00000290);
          if (iVar8 != 0) {
            FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000730,&UNK_10b235000,&UNK_10b2346c0);
            lVar22 = _uStack00000000000000a0;
            plVar12 = in_stack_000000b0;
            plVar4 = in_stack_000000b8;
            goto LAB_10051ca20;
          }
          iVar8 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                            (&stack0x00000708,&stack0x00000290);
          if (iVar8 != 0) {
            FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000730,&UNK_10b235000,&UNK_10b2346c0);
            lVar22 = _uStack00000000000000a0;
            plVar12 = in_stack_000000b0;
            plVar4 = in_stack_000000b8;
            goto LAB_10051ca20;
          }
          _uStack00000000000000a0 = 1;
          in_stack_00000098 = 0;
          in_stack_000000a8 = (long *)0x0;
          in_stack_00000080 = (char *)0x0;
          in_stack_00000088 = 1;
          in_stack_00000090 = (undefined *)0x0;
          puVar21 = (undefined8 *)_malloc(9);
          if (puVar21 == (undefined8 *)0x0) {
            FUN_107c03c64(1,9);
            lVar22 = _uStack00000000000000a0;
            plVar12 = in_stack_000000b0;
            plVar4 = in_stack_000000b8;
            goto LAB_10051ca20;
          }
          *(undefined1 *)(puVar21 + 1) = 0x72;
          *puVar21 = 0x65706f6c65766564;
          puVar10 = (undefined8 *)_malloc(0x20);
          if (puVar10 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
            lVar22 = _uStack00000000000000a0;
            plVar12 = in_stack_000000b0;
            plVar4 = in_stack_000000b8;
            goto LAB_10051ca20;
          }
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000740,&UNK_108d7e70f,&stack0x00000290);
          puVar10[2] = 1;
          puVar10[1] = 0;
          puVar10[3] = 0;
          *puVar10 = 0x8000000000000000;
          if (in_stack_00000098 != 0) {
            _free(_uStack00000000000000a0);
          }
          unaff_x19[0x59] = 2;
          unaff_x19[0x5a] = 9;
          unaff_x19[0x5b] = (long)puVar21;
          unaff_x19[0x5d] = 1;
          unaff_x19[0x5c] = 9;
          unaff_x19[0x5e] = (long)puVar10;
          unaff_x19[0x5f] = 1;
          unaff_x19[0x60] = -0x8000000000000000;
          *(undefined1 *)(unaff_x19 + 99) = 2;
          unaff_x19[0x72] = unaff_x19[0x36];
          unaff_x19[0x71] = unaff_x19[0x35];
          unaff_x19[0x73] = (long)(unaff_x19 + 0x59);
          unaff_x19[0x74] = 1;
          *(undefined1 *)(unaff_x19 + 0x79) = 0;
          iVar8 = FUN_1005af7fc(unaff_x19 + 0x71);
          if (iVar8 != 0) {
            *in_stack_00000060 = -0x7ffffffffffffff4;
            uVar14 = 5;
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
          in_stack_000000e0 = (char *)unaff_x19[0x48];
          lVar6 = unaff_x19[0x4a];
          lVar23 = unaff_x19[0x4d];
          lVar22 = unaff_x19[0x4c];
          *(long *)(unaff_x20 + 0x78) = unaff_x19[0x4b];
          *(long *)(unaff_x20 + 0x70) = lVar6;
          *(long *)(unaff_x20 + 0x88) = lVar23;
          *(long *)(unaff_x20 + 0x80) = lVar22;
          in_stack_00000110 = (long *)unaff_x19[0x4e];
          in_stack_000000a8 = (long *)unaff_x19[0x41];
          _uStack00000000000000a0 = unaff_x19[0x40];
          in_stack_000000b8 = (long *)unaff_x19[0x43];
          in_stack_000000b0 = (long *)unaff_x19[0x42];
          in_stack_000000c8 = unaff_x19[0x45];
          in_stack_000000c0 = unaff_x19[0x44];
          in_stack_000000d8 = (undefined1 *)unaff_x19[0x47];
          in_stack_000000d0 = (char *)unaff_x19[0x46];
          in_stack_00000088 = unaff_x19[0x3d];
          in_stack_00000080 = (char *)unaff_x19[0x3c];
          in_stack_00000098 = unaff_x19[0x3f];
          in_stack_00000090 = (undefined *)unaff_x19[0x3e];
          __ZN10codex_core19stream_events_utils30image_generation_artifact_path17h36b4abb60c630bf6E
                    (&stack0x00000708,*(long *)(unaff_x19[0x36] + 0x788) + 0x1c08,unaff_x19[0x3a],
                     unaff_x19[0x3b],*(undefined8 *)(unaff_x19[0x38] + 8),
                     *(undefined8 *)(unaff_x19[0x38] + 0x10));
          __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                    (&stack0x00000740,&stack0x00000290);
          if ((byte)in_stack_00000740 - 7 < 3) {
            auVar27 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&stack0x00000290);
            lVar22 = auVar27._8_8_;
            if (auVar27._0_8_ == 0) goto LAB_10051c2b4;
            if (lVar22 != 0) {
              lVar23 = _malloc(lVar22);
              if (lVar23 == 0) {
                FUN_107c03c64(1,lVar22);
                lVar22 = _uStack00000000000000a0;
                plVar12 = in_stack_000000b0;
                plVar4 = in_stack_000000b8;
                goto LAB_10051ca20;
              }
              _memcpy(lVar23,auVar27._0_8_,lVar22);
              if (lVar22 == -0x8000000000000000) goto LAB_10051c2b4;
              goto LAB_10051c528;
            }
            lVar23 = 1;
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) goto LAB_10051c53c;
LAB_10051c64c:
            uVar18 = 
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
              iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004e8);
              if (iVar8 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (uVar18,puVar2,puVar1,&stack0x000004e8,&stack0x00000740);
              }
            }
          }
          else {
LAB_10051c2b4:
            uVar18 = *(undefined8 *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c10);
            lVar22 = *(long *)(*(long *)(unaff_x19[0x36] + 0x788) + 0x1c18);
            if (lVar22 == 0) {
              lVar23 = 1;
            }
            else {
              lVar23 = _malloc(lVar22);
              if (lVar23 == 0) {
                FUN_107c03c64(1,lVar22);
                lVar22 = _uStack00000000000000a0;
                plVar12 = in_stack_000000b0;
                plVar4 = in_stack_000000b8;
LAB_10051ca20:
                in_stack_000000b8 = plVar4;
                in_stack_000000b0 = plVar12;
                _uStack00000000000000a0 = lVar22;
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x10051ca24);
                (*pcVar16)();
              }
            }
            _memcpy(lVar23,uVar18,lVar22);
LAB_10051c528:
            if (3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_10051c64c;
LAB_10051c53c:
            if (((1 < bRam000000010b629d30 - 1) &&
                ((bRam000000010b629d30 == 0 ||
                 (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN10codex_core19stream_events_utils29handle_non_tool_response_item28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89dfab668eec3993E
                                    ), cVar7 == '\0')))) ||
               (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_core19stream_events_utils29handle_non_tool_response_item28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89dfab668eec3993E
                                   ), (uVar11 & 1) == 0)) goto LAB_10051c64c;
            FUN_10051d4f4(&stack0x00000740);
          }
          if (lVar22 != 0) {
            _free(lVar23);
          }
          if (in_stack_00000708 != (undefined1 *)0x0) {
            _free(in_stack_00000710);
          }
          FUN_100df5738(&stack0x00000080);
        }
        if (unaff_x19[0x39] != 0) {
          _free(unaff_x19[0x3a]);
        }
      }
      lVar22 = *unaff_x19;
      _memcpy(&stack0x00000518,unaff_x19 + 1,0x198);
      *in_stack_00000060 = lVar22;
      _memcpy(in_stack_00000060 + 1,&stack0x00000518,0x198);
      uVar14 = 1;
LAB_10051c7f4:
      *(undefined1 *)((long)unaff_x19 + 0x291) = uVar14;
      return;
    }
    unaff_x19[0x5a] = (long)(plVar12 + 2);
    lVar22 = *plVar12;
    lVar23 = plVar12[1];
    unaff_x19[0x5d] = lVar22;
    unaff_x19[0x5e] = lVar23;
    unaff_x19[0x5f] = lVar22;
    unaff_x19[0x60] = lVar23;
    auVar27 = (**(code **)(lVar23 + 0x18))
                        (lVar22 + (*(long *)(lVar23 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         unaff_x19[0x56] + 0x198,unaff_x19[0x57],unaff_x19[0x58]);
    *(undefined1 (*) [16])(unaff_x19 + 0x61) = auVar27;
    (**(code **)(auVar27._8_8_ + 0x18))(&stack0x00000080);
    in_stack_000006c0 = in_stack_00000080;
    if (in_stack_00000080 == (char *)0x8000000000000001) {
      uVar14 = 3;
      *unaff_x24 = 3;
      *in_stack_00000060 = -0x7ffffffffffffff4;
      goto LAB_10051c7f4;
    }
    *(undefined **)(unaff_x20 + 0x638) = in_stack_00000090;
    *(long *)(unaff_x20 + 0x630) = in_stack_00000088;
    lVar22 = unaff_x19[0x61];
    puVar21 = (undefined8 *)unaff_x19[0x62];
    pcVar16 = (code *)*puVar21;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(lVar22);
    }
    if (puVar21[1] != 0) {
      _free(lVar22);
    }
  } while (in_stack_000006c0 == (char *)0x8000000000000000);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x630);
  *(undefined8 *)(unaff_x28 + 0x10) = *(undefined8 *)(unaff_x20 + 0x638);
  *(undefined8 *)(unaff_x28 + 8) = uVar18;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    unaff_x23 = (long *)&
                        __ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
    ;
    if (((bRam000000010b629d00 - 1 < 2) ||
        ((bRam000000010b629d00 != 0 &&
         (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
                            ), cVar7 != '\0')))) &&
       (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
                           ),
       param_1 = 
       ___ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
       , (uVar11 & 1) != 0)) goto code_r0x00010051cf8c;
  }
  lVar22 = 
  ___ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_00000710 =
         *(long **)(
                   ___ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
                   + 0x20);
    lVar23 = *(long *)(
                      ___ZN10codex_core19stream_events_utils28apply_turn_item_contributors28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h83f0ce53c7fd6c19E
                      + 0x28);
    in_stack_00000708 = (undefined1 *)0x2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000708);
    if (iVar8 != 0) {
      in_stack_000000b0 = (long *)0x2;
      _uStack00000000000000a0 = *(long *)(lVar22 + 0x60);
      in_stack_000000a8 = *(long **)(lVar22 + 0x68);
      in_stack_00000088 = *(long *)(lVar22 + 0x50);
      in_stack_00000090 = *(undefined **)(lVar22 + 0x58);
      in_stack_00000080 = (char *)0x1;
      if (in_stack_00000088 == 0) {
        in_stack_00000080 = (char *)0x2;
      }
      in_stack_000000c8 = *(ulong *)(lVar22 + 8);
      in_stack_00000740 = &stack0x00000730;
      in_stack_00000748 = &DAT_1061c2098;
      in_stack_00000098 = 1;
      if (_uStack00000000000000a0 == 0) {
        in_stack_00000098 = 2;
      }
      in_stack_000000d8 = &stack0x00000740;
      in_stack_000000d0 = s__108b39f4f;
      in_stack_000000b8 = in_stack_00000710;
      in_stack_000000c0 = lVar23;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000080);
    }
  }
  goto LAB_10051d250;
}

