
void FUN_1005f8038(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  long lVar6;
  ulong extraout_x1;
  undefined1 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *unaff_x19;
  ulong uVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 *unaff_x26;
  char *pcVar16;
  undefined8 *unaff_x27;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000010;
  ulong in_stack_00000030;
  char *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 *puStack0000000000000050;
  undefined *puStack0000000000000058;
  char *pcStack0000000000000060;
  undefined8 *puStack0000000000000068;
  char *in_stack_00000070;
  char *in_stack_00000078;
  undefined8 *in_stack_00000080;
  char *in_stack_00000088;
  byte bStack0000000000000090;
  undefined8 *puStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined2 uStack00000000000000c8;
  undefined1 uStack00000000000000ca;
  char *pcStack00000000000000d0;
  undefined8 *puStack00000000000000d8;
  ulong uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined2 uStack0000000000000108;
  undefined1 uStack000000000000010a;
  
  puStack0000000000000068 = &stack0x00000078;
  pcStack0000000000000060 = s_invalid_project_root_markers__108ac2229;
  puStack0000000000000050 = (undefined1 *)&stack0x00000060;
  puStack0000000000000058 = &UNK_10b208fd0;
  puStack00000000000000d8 = &stack0x00000050;
  pcStack00000000000000d0 = (char *)0x1;
  uStack00000000000000e0 = 1;
  puStack0000000000000098 = in_stack_00000040;
  _bStack0000000000000090 = in_stack_00000038;
  uStack00000000000000a0 = in_stack_00000048;
  uStack00000000000000e8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_107c03c64(8,0x18);
  }
  else {
    pcStack00000000000000d0 = (char *)0x1;
    uStack00000000000000e0 = 0;
    puStack00000000000000d8 = puVar3;
    puVar4 = (undefined4 *)_malloc(4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0x7469672e;
      *puVar3 = 4;
      puVar3[1] = puVar4;
      puVar3[2] = 4;
      uVar12 = *unaff_x27;
      unaff_x19[0x13] = unaff_x27[1];
      unaff_x19[0x12] = uVar12;
      unaff_x19[0x14] = 1;
      if ((in_stack_00000030 & 3) == 1) {
        uVar12 = *(undefined8 *)(in_stack_00000030 - 1);
        puVar3 = *(undefined8 **)(in_stack_00000030 + 7);
        pcVar9 = (code *)*puVar3;
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(uVar12);
        }
        if (puVar3[1] != 0) {
          _free(uVar12);
        }
        _free((undefined8 *)(in_stack_00000030 - 1));
        *(undefined1 *)((long)unaff_x19 + 0xc9) = 1;
        unaff_x19[0x15] = 0x8000000000000000;
        lVar8 = unaff_x19[0x14];
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0xc9) = 1;
        unaff_x19[0x15] = 0x8000000000000000;
        lVar8 = unaff_x19[0x14];
      }
      if (lVar8 != 0) {
        pcVar15 = (char *)unaff_x19[0x10];
        unaff_x19[0x23] = pcVar15;
        unaff_x19[0x24] = unaff_x19[0x11];
        while (pcVar15 != (char *)0x0) {
          uStack000000000000010a = false;
          puVar3 = (undefined8 *)unaff_x19[0x24];
          if (puVar3 != (undefined8 *)0x0) {
            uStack000000000000010a = *pcVar15 == '/';
          }
          uStack00000000000000e0 = CONCAT71(uStack00000000000000e0._1_7_,6);
          uStack0000000000000108 = 0x201;
          pcStack00000000000000d0 = pcVar15;
          puStack00000000000000d8 = puVar3;
          __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                    (&stack0x00000090,&stack0x000000d0);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = extraout_x1;
          auVar18 = auVar18 << 0x40;
          if (bStack0000000000000090 - 7 < 3) {
            auVar18 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&stack0x000000d0);
          }
          *(undefined1 (*) [16])(unaff_x19 + 0x23) = auVar18;
          if (puVar3 == (undefined8 *)0x0) {
            unaff_x19[0x1a] = 0;
            unaff_x19[0x1b] = 1;
            unaff_x19[0x1c] = 0;
          }
          else {
            lVar8 = _malloc(puVar3);
            if (lVar8 == 0) {
              FUN_107c03c64(1,puVar3);
              goto LAB_1005f89b4;
            }
            _memcpy(lVar8,pcVar15,puVar3);
            unaff_x19[0x1a] = puVar3;
            unaff_x19[0x1b] = lVar8;
            unaff_x19[0x1c] = puVar3;
            if (puVar3 == (undefined8 *)0x8000000000000000) goto LAB_1005f8680;
          }
          unaff_x19[0x1e] = unaff_x19[0x1b];
          unaff_x19[0x1d] = unaff_x19[0x1a];
          unaff_x19[0x1f] = unaff_x19[0x1c];
          lVar8 = unaff_x19[0x13];
          lVar6 = lVar8 + unaff_x19[0x14] * 0x18;
          unaff_x19[0x25] = lVar8;
          unaff_x19[0x26] = lVar6;
          if (lVar8 != lVar6) {
            do {
              unaff_x19[0x25] = lVar8 + 0x18;
              uVar12 = unaff_x19[0x1e];
              uVar17 = unaff_x19[0x1f];
              __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                        (&stack0x00000090,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
              puVar3 = puStack0000000000000098;
              __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                        (&stack0x000000d0,puStack0000000000000098,uStack00000000000000a0,uVar12,
                         uVar17);
              uVar12 = *unaff_x27;
              unaff_x19[0x21] = unaff_x27[1];
              unaff_x19[0x20] = uVar12;
              unaff_x19[0x22] = uStack00000000000000e0;
              if (_bStack0000000000000090 != (char *)0x0) {
                _free(puVar3);
              }
              auVar18 = (**(code **)(unaff_x19[1] + 0x38))(*unaff_x19,unaff_x19 + 0x20,0);
              *(undefined1 (*) [16])(unaff_x19 + 0x27) = auVar18;
              (**(code **)(auVar18._8_8_ + 0x18))(&stack0x000000d0,auVar18._0_8_,in_stack_00000010);
              pcVar15 = pcStack00000000000000d0;
              cVar2 = uStack00000000000000e0._2_1_;
              if (uStack00000000000000e0._2_1_ == '\x03') {
                *unaff_x26 = 0x8000000000000001;
                uVar7 = 3;
                goto LAB_1005f8ee4;
              }
              puVar3 = (undefined8 *)unaff_x19[0x27];
              puVar10 = (undefined8 *)unaff_x19[0x28];
              pcVar9 = (code *)*puVar10;
              if (pcVar9 != (code *)0x0) {
                (*pcVar9)(puVar3);
              }
              if (puVar10[1] != 0) {
                _free(puVar3);
              }
              if (cVar2 != '\x02') {
                uVar12 = unaff_x19[0x1e];
                lVar8 = unaff_x19[0x1f];
                lVar6 = 1;
                if ((lVar8 != 0) && (lVar6 = _malloc(lVar8), lVar6 == 0)) {
                  FUN_107c03c64(1,lVar8);
                  goto LAB_1005f89b4;
                }
                _memcpy(lVar6,uVar12,lVar8);
                if ((unaff_x19[0x15] & 0x7fffffffffffffff) == 0) {
                  *(undefined1 *)((long)unaff_x19 + 0xc9) = 1;
                  unaff_x19[0x15] = lVar8;
                  unaff_x19[0x16] = lVar6;
                  unaff_x19[0x17] = lVar8;
                  lVar8 = unaff_x19[0x20];
                }
                else {
                  _free(unaff_x19[0x16]);
                  *(undefined1 *)((long)unaff_x19 + 0xc9) = 1;
                  unaff_x19[0x15] = lVar8;
                  unaff_x19[0x16] = lVar6;
                  unaff_x19[0x17] = lVar8;
                  lVar8 = unaff_x19[0x20];
                }
                if (lVar8 != 0) {
                  _free(unaff_x19[0x21]);
                }
                break;
              }
              cVar2 = FUN_100c355d4(pcVar15);
              if (cVar2 != '\0') {
                if (unaff_x19[0x20] != 0) {
                  _free(unaff_x19[0x21]);
                }
                if (unaff_x19[0x1d] != 0) {
                  _free(unaff_x19[0x1e]);
                }
                goto LAB_1005f8e48;
              }
              if (((ulong)pcVar15 & 3) == 1) {
                uVar12 = *(undefined8 *)(pcVar15 + -1);
                puVar3 = *(undefined8 **)(pcVar15 + 7);
                pcVar9 = (code *)*puVar3;
                if (pcVar9 != (code *)0x0) {
                  (*pcVar9)(uVar12);
                }
                if (puVar3[1] != 0) {
                  _free(uVar12);
                }
                _free(pcVar15 + -1);
                lVar8 = unaff_x19[0x20];
              }
              else {
                lVar8 = unaff_x19[0x20];
              }
              if (lVar8 != 0) {
                _free(unaff_x19[0x21]);
              }
              lVar8 = unaff_x19[0x25];
            } while (lVar8 != unaff_x19[0x26]);
          }
          if (unaff_x19[0x15] != -0x8000000000000000) {
            if (unaff_x19[0x1d] != 0) {
              _free(unaff_x19[0x1e]);
            }
            goto LAB_1005f8680;
          }
          if (unaff_x19[0x1d] != 0) {
            _free(unaff_x19[0x1e]);
          }
          pcVar15 = (char *)unaff_x19[0x23];
        }
        unaff_x19[0x1a] = 0x8000000000000000;
      }
LAB_1005f8680:
      lVar8 = unaff_x19[0x15];
      if (lVar8 == -0x8000000000000000) {
        puVar3 = (undefined8 *)_malloc(0x18);
        if (puVar3 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_1005f89b4;
        }
        *(undefined1 *)(unaff_x19 + 0x19) = 0;
        uVar12 = unaff_x19[0xf];
        puVar3[1] = unaff_x19[0x10];
        *puVar3 = uVar12;
        puVar3[2] = unaff_x19[0x11];
        pcStack0000000000000060 = (char *)0x1;
        in_stack_00000070 = (char *)0x1;
        *(undefined1 *)((long)unaff_x19 + 0xcc) = 1;
        puStack0000000000000068 = puVar3;
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0xc9) = 0;
        pcVar15 = (char *)unaff_x19[0x16];
        puVar3 = (undefined8 *)unaff_x19[0x17];
        in_stack_00000078 = (char *)0x0;
        in_stack_00000080 = (undefined8 *)0x8;
        in_stack_00000088 = (char *)0x0;
        uVar12 = unaff_x19[0x10];
        puVar10 = (undefined8 *)unaff_x19[0x11];
        if (puVar10 == (undefined8 *)0x0) {
          pcVar5 = (char *)0x1;
        }
        else {
          pcVar5 = (char *)_malloc(puVar10);
          if (pcVar5 == (char *)0x0) {
            FUN_107c03c64(1,puVar10);
            goto LAB_1005f89b4;
          }
        }
        _memcpy(pcVar5,uVar12,puVar10);
LAB_1005f8734:
        pcVar16 = pcVar5;
        if (puVar10 == (undefined8 *)0x0) {
          lVar6 = 1;
        }
        else {
          lVar6 = _malloc(puVar10);
          if (lVar6 == 0) {
            FUN_107c03c64(1,puVar10);
            goto LAB_1005f89b4;
          }
        }
        _memcpy(lVar6,pcVar16,puVar10);
        pcVar5 = in_stack_00000088;
        if (in_stack_00000088 == in_stack_00000078) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&stack0x00000078);
        }
        puVar11 = in_stack_00000080 + (long)pcVar5 * 3;
        *puVar11 = puVar10;
        puVar11[1] = lVar6;
        puVar11[2] = puVar10;
        in_stack_00000088 = pcVar5 + 1;
        if (puVar10 == (undefined8 *)0x0) {
          uStack00000000000000ca = false;
          if (puVar3 == (undefined8 *)0x0) goto LAB_1005f87e8;
LAB_1005f87c0:
          uStack000000000000010a = *pcVar15 == '/';
        }
        else {
          uStack00000000000000ca = *pcVar16 == '/';
          if (puVar3 != (undefined8 *)0x0) goto LAB_1005f87c0;
LAB_1005f87e8:
          uStack000000000000010a = false;
        }
        uStack00000000000000c8 = 0x201;
        uStack00000000000000a0 = CONCAT71(uStack00000000000000a0._1_7_,6);
        uStack00000000000000e0 = CONCAT71(uStack00000000000000e0._1_7_,6);
        uStack0000000000000108 = 0x201;
        _bStack0000000000000090 = pcVar16;
        puStack0000000000000098 = puVar10;
        pcStack00000000000000d0 = pcVar15;
        puStack00000000000000d8 = puVar3;
        uVar13 = FUN_10112a6c0(&stack0x00000090,&stack0x000000d0);
        if ((uVar13 & 1) == 0) {
          if (puVar10 == (undefined8 *)0x0) {
            uStack000000000000010a = false;
          }
          else {
            uStack000000000000010a = *pcVar16 == '/';
          }
          uStack00000000000000e0 = CONCAT71(uStack00000000000000e0._1_7_,6);
          uStack0000000000000108 = 0x201;
          pcStack00000000000000d0 = pcVar16;
          puStack00000000000000d8 = puVar10;
          __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                    (&stack0x00000090,&stack0x000000d0);
          if (2 < bStack0000000000000090 - 7) goto LAB_1005f8898;
          auVar18 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&stack0x000000d0);
          puVar11 = auVar18._8_8_;
          if (auVar18._0_8_ == 0) goto LAB_1005f8898;
          if (puVar11 == (undefined8 *)0x0) {
            pcVar5 = (char *)0x1;
          }
          else {
            pcVar5 = (char *)_malloc(puVar11);
            if (pcVar5 == (char *)0x0) {
              FUN_107c03c64(1,puVar11);
              goto LAB_1005f89b4;
            }
            _memcpy(pcVar5,auVar18._0_8_,puVar11);
            if (puVar11 == (undefined8 *)0x8000000000000000) goto LAB_1005f8898;
          }
          bVar1 = puVar10 != (undefined8 *)0x0;
          puVar10 = puVar11;
          if (bVar1) {
            _free(pcVar16);
          }
          goto LAB_1005f8734;
        }
LAB_1005f8898:
        if ((char *)0x1 < in_stack_00000088) {
          uVar13 = (ulong)in_stack_00000088 >> 1;
          puVar3 = in_stack_00000080 + 2;
          puVar11 = in_stack_00000080 + (long)in_stack_00000088 * 3 + -1;
          do {
            uVar17 = puVar3[-1];
            uVar12 = puVar3[-2];
            uVar14 = puVar11[-2];
            puVar3[-1] = puVar11[-1];
            puVar3[-2] = uVar14;
            puVar11[-1] = uVar17;
            puVar11[-2] = uVar12;
            uVar12 = *puVar3;
            *puVar3 = *puVar11;
            *puVar11 = uVar12;
            uVar13 = uVar13 - 1;
            puVar3 = puVar3 + 3;
            puVar11 = puVar11 + -3;
          } while (uVar13 != 0);
        }
        *(undefined1 *)((long)unaff_x19 + 0xcc) = 1;
        puStack0000000000000068 = in_stack_00000080;
        pcStack0000000000000060 = in_stack_00000078;
        in_stack_00000070 = in_stack_00000088;
        unaff_x27 = &stack0x000000d0;
        if (puVar10 != (undefined8 *)0x0) {
          _free(pcVar16);
        }
        if (lVar8 != 0) {
          _free(pcVar15);
        }
      }
      unaff_x19[0x1a] = 0;
      unaff_x19[0x1b] = 8;
      unaff_x19[0x1c] = 0;
      *(undefined1 *)((long)unaff_x19 + 0xcb) = 1;
      __ZN10codex_core9agents_md15AgentsMdManager19candidate_filenames17h0427c9075a678648E
                (unaff_x19 + 0x1d,unaff_x19[0xe]);
      *(undefined1 *)((long)unaff_x19 + 0xcc) = 0;
      puVar10 = puStack0000000000000068 + (long)in_stack_00000070 * 3;
      unaff_x19[0x2d] = puStack0000000000000068;
      unaff_x19[0x2e] = puStack0000000000000068;
      unaff_x19[0x2f] = pcStack0000000000000060;
      unaff_x19[0x30] = puVar10;
      puVar3 = puStack0000000000000068;
      if (puStack0000000000000068 != puVar10) {
        do {
          puVar11 = puVar3 + 3;
          unaff_x19[0x2e] = puVar11;
          uVar12 = puVar3[2];
          uVar17 = *puVar3;
          unaff_x19[0x21] = puVar3[1];
          unaff_x19[0x20] = uVar17;
          unaff_x19[0x22] = uVar12;
          if (unaff_x19[0x20] == -0x8000000000000000) {
            uVar13 = (long)puVar10 - (long)puVar11;
            puVar3 = puVar11;
            goto joined_r0x0001005f8ca4;
          }
          uVar17 = puVar3[1];
          uVar12 = *puVar3;
          unaff_x19[0x25] = puVar3[2];
          unaff_x19[0x24] = uVar17;
          unaff_x19[0x23] = uVar12;
          unaff_x19[0x29] = unaff_x19[0x1e];
          unaff_x19[0x2a] = unaff_x19[0x1e] + unaff_x19[0x1f] * 0x10;
          puVar3 = (undefined8 *)unaff_x19[0x29];
          if (puVar3 != (undefined8 *)unaff_x19[0x2a]) {
LAB_1005f8c18:
            unaff_x19[0x29] = puVar3 + 2;
            uVar12 = unaff_x19[0x24];
            uVar17 = unaff_x19[0x25];
            __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                      (&stack0x00000090,*puVar3,puVar3[1]);
            puVar3 = puStack0000000000000098;
            __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                      (&stack0x000000d0,puStack0000000000000098,uStack00000000000000a0,uVar12,uVar17
                      );
            uVar12 = *unaff_x27;
            unaff_x19[0x27] = unaff_x27[1];
            unaff_x19[0x26] = uVar12;
            unaff_x19[0x28] = uStack00000000000000e0;
            if (_bStack0000000000000090 != (char *)0x0) {
              _free(puVar3);
            }
            *(undefined1 *)((long)unaff_x19 + 0xca) = 1;
            auVar18 = (**(code **)(unaff_x19[1] + 0x38))(*unaff_x19,unaff_x19 + 0x26,0);
            *(undefined1 (*) [16])(unaff_x19 + 0x2b) = auVar18;
            (**(code **)(auVar18._8_8_ + 0x18))(&stack0x000000d0,auVar18._0_8_,in_stack_00000010);
            uVar13 = uStack00000000000000e0;
            pcVar15 = pcStack00000000000000d0;
            cVar2 = uStack00000000000000e0._2_1_;
            if (uStack00000000000000e0._2_1_ == '\x03') {
              *unaff_x26 = 0x8000000000000001;
              uVar7 = 4;
              goto LAB_1005f8ee4;
            }
            puVar3 = (undefined8 *)unaff_x19[0x2b];
            puVar10 = (undefined8 *)unaff_x19[0x2c];
            pcVar9 = (code *)*puVar10;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(puVar3);
            }
            if (puVar10[1] != 0) {
              _free(puVar3);
            }
            if (cVar2 == '\x02') {
              cVar2 = FUN_100c355d4(pcVar15);
              if (cVar2 == '\0') {
                if (((ulong)pcVar15 & 3) == 1) {
                  uVar12 = *(undefined8 *)(pcVar15 + -1);
                  puVar3 = *(undefined8 **)(pcVar15 + 7);
                  pcVar9 = (code *)*puVar3;
                  if (pcVar9 != (code *)0x0) {
                    (*pcVar9)(uVar12);
                  }
                  if (puVar3[1] != 0) {
                    _free(uVar12);
                  }
                  _free(pcVar15 + -1);
                }
                goto LAB_1005f8b84;
              }
              if (unaff_x19[0x26] != 0) {
                _free(unaff_x19[0x27]);
              }
              *(undefined1 *)((long)unaff_x19 + 0xca) = 0;
              if (unaff_x19[0x23] != 0) {
                _free(unaff_x19[0x24]);
              }
              uVar13 = unaff_x19[0x30] - unaff_x19[0x2e];
              if (uVar13 != 0) {
                uVar13 = uVar13 / 0x18;
                puVar10 = (undefined8 *)(unaff_x19[0x2e] + 8);
                do {
                  if (puVar10[-1] != 0) {
                    _free(*puVar10);
                  }
                  puVar10 = puVar10 + 3;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              if (unaff_x19[0x2f] != 0) {
                _free(unaff_x19[0x2d]);
              }
              if (unaff_x19[0x1d] != 0) {
                _free(unaff_x19[0x1e]);
              }
              lVar8 = unaff_x19[0x1b];
              lVar6 = unaff_x19[0x1c];
              if (lVar6 != 0) {
                puVar3 = (undefined8 *)(lVar8 + 8);
                do {
                  if (puVar3[-1] != 0) {
                    _free(*puVar3);
                  }
                  puVar3 = puVar3 + 3;
                  lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
              }
              if (unaff_x19[0x1a] != 0) {
                _free(lVar8);
              }
              *(undefined2 *)((long)unaff_x19 + 0xcb) = 0;
LAB_1005f8e48:
              if (((unaff_x19[0x15] != -0x8000000000000000) &&
                  ((*(byte *)((long)unaff_x19 + 0xc9) & 1) != 0)) && (unaff_x19[0x15] != 0)) {
                _free(unaff_x19[0x16]);
              }
              *(undefined1 *)((long)unaff_x19 + 0xc9) = 0;
              lVar8 = unaff_x19[0x13];
              lVar6 = unaff_x19[0x14];
              if (lVar6 != 0) {
                puVar3 = (undefined8 *)(lVar8 + 8);
                do {
                  if (puVar3[-1] != 0) {
                    _free(*puVar3);
                  }
                  puVar3 = puVar3 + 3;
                  lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
              }
              if (unaff_x19[0x12] != 0) {
                _free(lVar8);
              }
              FUN_100ddb5bc(unaff_x19 + 2);
              if (((*(byte *)(unaff_x19 + 0x19) & 1) != 0) && (unaff_x19[0xf] != 0)) {
                _free(unaff_x19[0x10]);
              }
              *(undefined1 *)(unaff_x19 + 0x19) = 0;
              uVar12 = 0x8000000000000000;
              goto LAB_1005f8ed8;
            }
            if ((uVar13 & 0x100) == 0) goto LAB_1005f8b84;
            *(undefined1 *)((long)unaff_x19 + 0xca) = 0;
            uVar12 = unaff_x19[0x26];
            uVar17 = unaff_x19[0x27];
            uVar14 = unaff_x19[0x28];
            lVar8 = unaff_x19[0x1c];
            if (lVar8 == unaff_x19[0x1a]) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E();
            }
            puVar3 = (undefined8 *)(unaff_x19[0x1b] + lVar8 * 0x18);
            *puVar3 = uVar12;
            puVar3[1] = uVar17;
            puVar3[2] = uVar14;
            unaff_x19[0x1c] = lVar8 + 1;
            *(undefined1 *)((long)unaff_x19 + 0xca) = 0;
          }
LAB_1005f8ba4:
          if (unaff_x19[0x23] != 0) {
            _free(unaff_x19[0x24]);
          }
          puVar10 = (undefined8 *)unaff_x19[0x30];
          puVar3 = (undefined8 *)unaff_x19[0x2e];
        } while (puVar3 != puVar10);
      }
      unaff_x19[0x20] = 0x8000000000000000;
      uVar13 = (long)puVar10 - (long)puVar3;
joined_r0x0001005f8ca4:
      if (uVar13 != 0) {
        uVar13 = uVar13 / 0x18;
        puVar3 = puVar3 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (unaff_x19[0x2f] != 0) {
        _free(unaff_x19[0x2d]);
      }
      *(undefined1 *)((long)unaff_x19 + 0xcb) = 0;
      uVar12 = unaff_x19[0x1a];
      pcVar15 = (char *)unaff_x19[0x1b];
      puVar3 = (undefined8 *)unaff_x19[0x1c];
      if (unaff_x19[0x1d] != 0) {
        _free(unaff_x19[0x1e]);
      }
      *(undefined2 *)((long)unaff_x19 + 0xcb) = 0;
      *(undefined1 *)((long)unaff_x19 + 0xc9) = 0;
      lVar8 = unaff_x19[0x13];
      lVar6 = unaff_x19[0x14];
      if (lVar6 != 0) {
        puVar10 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (unaff_x19[0x12] != 0) {
        _free(lVar8);
      }
      FUN_100ddb5bc(unaff_x19 + 2);
      if (((*(byte *)(unaff_x19 + 0x19) & 1) != 0) && (unaff_x19[0xf] != 0)) {
        _free(unaff_x19[0x10]);
      }
      *(undefined1 *)(unaff_x19 + 0x19) = 0;
LAB_1005f8ed8:
      *unaff_x26 = uVar12;
      unaff_x26[1] = pcVar15;
      uVar7 = 1;
      unaff_x26[2] = puVar3;
LAB_1005f8ee4:
      *(undefined1 *)((long)unaff_x19 + 0xcd) = uVar7;
      return;
    }
    FUN_107c03c64(1,4);
  }
LAB_1005f89b4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1005f89b8);
  (*pcVar9)();
LAB_1005f8b84:
  if (unaff_x19[0x26] != 0) {
    _free(unaff_x19[0x27]);
  }
  *(undefined1 *)((long)unaff_x19 + 0xca) = 0;
  puVar3 = (undefined8 *)unaff_x19[0x29];
  if (puVar3 == (undefined8 *)unaff_x19[0x2a]) goto LAB_1005f8ba4;
  goto LAB_1005f8c18;
}

