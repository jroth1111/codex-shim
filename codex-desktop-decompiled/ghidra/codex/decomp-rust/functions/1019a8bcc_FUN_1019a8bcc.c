
void FUN_1019a8bcc(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar10;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x27;
  undefined8 *puVar13;
  long *plVar14;
  long unaff_x29;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined1 uStack0000000000000040;
  undefined1 uStack0000000000000041;
  undefined6 uStack0000000000000042;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  undefined1 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  long *in_stack_00000090;
  undefined8 *in_stack_00000098;
  ulong in_stack_00000120;
  undefined1 in_stack_00000128;
  undefined8 *in_stack_00000138;
  undefined8 *in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined8 *in_stack_00000150;
  long *in_stack_00000158;
  undefined8 *in_stack_00000160;
  long in_stack_00000168;
  undefined1 uStack0000000000000170;
  undefined1 uStack0000000000000171;
  undefined6 uStack0000000000000172;
  long in_stack_00000178;
  long in_stack_00000180;
  undefined8 *in_stack_00000188;
  ulong in_stack_00000190;
  undefined1 in_stack_00000198;
  undefined8 *in_stack_000001a0;
  long *in_stack_000001a8;
  undefined8 *in_stack_000001b0;
  ulong in_stack_000001e0;
  undefined1 uStack00000000000001e8;
  undefined7 uStack00000000000001e9;
  long in_stack_000001f8;
  
  while (iVar5 = __ZN4core3fmt5write17h64810b21425781ecE(param_1,param_2,s__108add0bf,param_4),
        iVar5 == 0) {
    if (in_stack_00000008 == in_stack_00000018) {
      FUN_1088bb36c(&stack0x00000008,in_stack_00000018,1,1,1);
    }
    *(undefined1 *)(in_stack_00000010 + (long)in_stack_00000018) = 0x20;
    in_stack_00000018 = (undefined8 *)((long)in_stack_00000018 + 1);
    if (in_stack_00000008 == in_stack_00000018) {
      FUN_1088bb36c(&stack0x00000008,in_stack_00000018,1,1,1);
    }
    *(undefined1 *)(in_stack_00000010 + (long)in_stack_00000018) = 0x3d;
    in_stack_00000018 = (undefined8 *)((long)in_stack_00000018 + 1);
    if (in_stack_00000008 == in_stack_00000018) {
      FUN_1088bb36c(&stack0x00000008,in_stack_00000018,1,1,1);
    }
    *(undefined1 *)(in_stack_00000010 + (long)in_stack_00000018) = 0x20;
    in_stack_00000018 = (undefined8 *)((long)in_stack_00000018 + 1);
    FUN_1019a9700(&stack0x000001a0,unaff_x20 + 0x18,&stack0x00000008,in_stack_00000068);
    plVar10 = in_stack_000001a8;
    puVar6 = in_stack_000001a0;
    puVar12 = in_stack_000001b0;
    if (in_stack_000001a0 != (undefined8 *)0x8000000000000004) goto LAB_1019a924c;
    lVar8 = in_stack_000001a8[2];
    if (*in_stack_000001a8 == lVar8) {
      FUN_1088bb36c(in_stack_000001a8,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 10;
    plVar10[2] = lVar8 + 1;
    lVar8 = unaff_x20;
    if (in_stack_00000070 != 0) {
      _free(in_stack_00000078);
    }
    while( true ) {
      unaff_x20 = lVar8 + 0x70;
      if (unaff_x20 == unaff_x27) {
        unaff_x21[9] = in_stack_00000050;
        unaff_x21[8] = in_stack_00000048;
        unaff_x21[0xb] = in_stack_00000060;
        unaff_x21[10] = in_stack_00000058;
        unaff_x21[1] = in_stack_00000010;
        *unaff_x21 = (long)in_stack_00000008;
        unaff_x21[3] = in_stack_00000020;
        unaff_x21[2] = (long)in_stack_00000018;
        unaff_x21[5] = in_stack_00000030;
        unaff_x21[4] = in_stack_00000028;
        unaff_x21[7] = CONCAT62(uStack0000000000000042,
                                CONCAT11(uStack0000000000000041,uStack0000000000000040));
        unaff_x21[6] = in_stack_00000038;
        FUN_1061263dc(*(undefined8 *)(in_stack_000001f8 + 8),
                      *(undefined8 *)(in_stack_000001f8 + 0x10),&stack0x000001a0);
        *unaff_x19 = -0x7ffffffffffffffc;
        unaff_x19[1] = in_stack_000001f8;
        if ((in_stack_000001e0 & 0x7fffffffffffffff) == 0) {
          return;
        }
        lVar8 = CONCAT71(uStack00000000000001e9,uStack00000000000001e8);
        goto LAB_1019a94b4;
      }
      in_stack_00000138 = (undefined8 *)0x0;
      in_stack_00000140 = (undefined8 *)0x1;
      in_stack_00000148 = (undefined8 *)0x0;
      __ZN84__LT_toml__ser__value__key__KeySerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17h97c00fd3c87f7941E
                (&stack0x000001a0,&stack0x00000138,*(undefined8 *)(lVar8 + 0x78),
                 *(undefined8 *)(lVar8 + 0x80));
      puVar12 = in_stack_000001a0;
      if (in_stack_000001a0 != (undefined8 *)0x8000000000000004) {
        lVar8 = unaff_x21[1];
        unaff_x25[9] = unaff_x21[2];
        unaff_x25[8] = lVar8;
        if (in_stack_00000138 != (undefined8 *)0x0) {
          _free(in_stack_00000140);
        }
        *unaff_x19 = (long)puVar12;
        lVar8 = unaff_x25[8];
        unaff_x19[2] = unaff_x25[9];
        unaff_x19[1] = lVar8;
        goto LAB_1019a9440;
      }
      unaff_x21[1] = (long)in_stack_00000140;
      *unaff_x21 = (long)in_stack_00000138;
      in_stack_000001b0 = in_stack_00000148;
      if ((in_stack_00000048 != -0x8000000000000000) && (in_stack_00000048 != 0)) {
        _free(in_stack_00000050);
      }
      lVar15 = *unaff_x21;
      unaff_x24[9] = unaff_x21[1];
      unaff_x24[8] = lVar15;
      lVar15 = in_stack_00000048;
      unaff_x24[10] = in_stack_000001b0;
      in_stack_00000048 = -0x8000000000000000;
      if (lVar15 == -0x8000000000000000) {
        func_0x000108a079f0(&UNK_108cf27d0,0x23,&UNK_10b26a488);
        goto LAB_1019a95e0;
      }
      in_stack_00000070 = lVar15;
      in_stack_00000080 = (undefined8 *)unaff_x24[10];
      in_stack_00000078 = unaff_x24[9];
      cVar4 = FUN_1019a8540(lVar8 + 0x88);
      uVar1 = in_stack_00000060;
      if (cVar4 == '\0') break;
      if (cVar4 != '\x01') {
        uStack0000000000000040 = 1;
        if (in_stack_00000020 == -0x8000000000000000) {
          in_stack_000001a0 = (undefined8 *)0x8000000000000000;
        }
        else {
          func_0x0001019abe8c(&stack0x000001a0,in_stack_00000028,in_stack_00000030);
        }
        puVar12 = in_stack_00000018;
        lVar15 = in_stack_00000010;
        if (in_stack_00000018 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x1;
        }
        else {
          puVar6 = (undefined8 *)_malloc(in_stack_00000018);
          if (puVar6 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,puVar12);
            goto LAB_1019a95e0;
          }
        }
        _memcpy(puVar6,lVar15,puVar12);
        plVar10 = in_stack_000001a8;
        puVar2 = in_stack_000001a0;
        lVar16 = in_stack_00000078;
        lVar15 = in_stack_00000070;
        uVar9 = *(ulong *)(lVar8 + 0x88) ^ 0x8000000000000000;
        if (-1 < (long)*(ulong *)(lVar8 + 0x88)) {
          uVar9 = 6;
        }
        if (uVar9 == 5) {
          if (puVar12 == (undefined8 *)0x8000000000000000) {
            plVar10 = (long *)0x8000000000000000;
            puVar12 = in_stack_000001a0;
            in_stack_00000088 = puVar6;
          }
          else {
            lVar15 = *(long *)(lVar8 + 0x98);
            in_stack_00000148 = puVar12;
            in_stack_00000150 = in_stack_000001a0;
            in_stack_00000158 = in_stack_000001a8;
            in_stack_00000160 = in_stack_000001b0;
            in_stack_00000168 = in_stack_00000038;
            uStack0000000000000170 = uStack0000000000000040;
            uStack0000000000000171 = uStack0000000000000041;
            in_stack_00000180 = in_stack_00000078;
            in_stack_00000178 = in_stack_00000070;
            in_stack_00000188 = in_stack_00000080;
            in_stack_00000138 = puVar12;
            in_stack_00000190 = uVar1;
            in_stack_00000198 = in_stack_00000068;
            in_stack_00000140 = puVar6;
            if (*(long *)(lVar8 + 0xa0) != 0) {
              lVar8 = *(long *)(lVar8 + 0xa0) * 0x50;
LAB_1019a8d88:
              uVar1 = in_stack_00000190;
              puVar12 = in_stack_00000188;
              lVar16 = in_stack_00000180;
              if (in_stack_00000188 == (undefined8 *)0x0) {
                lVar7 = 1;
              }
              else {
                lVar7 = _malloc(in_stack_00000188);
                if (lVar7 == 0) {
                  func_0x0001087c9084(1,puVar12);
                  goto LAB_1019a95e0;
                }
              }
              _memcpy(lVar7,lVar16,puVar12);
              *(undefined8 **)(unaff_x29 + -0x78) = puVar12;
              *(long *)(unaff_x29 + -0x70) = lVar7;
              *(undefined8 **)(unaff_x29 + -0x68) = puVar12;
              __ZN4toml3ser8document6buffer6Buffer11child_table17h53a4e5dd68b998e2E
                        (unaff_x29 + -0xb8,uVar1,&stack0x00000138,unaff_x29 + -0x78);
              *(undefined1 *)(unaff_x29 + -0x7f) = 1;
              in_stack_000001e0 = in_stack_00000190;
              uStack00000000000001e8 = in_stack_00000198;
              lVar16 = *(long *)(unaff_x29 + -0xb8);
              lVar17 = *(long *)(unaff_x29 + -0xa0);
              lVar7 = *(long *)(unaff_x29 + -0xa8);
              unaff_x21[1] = *(long *)(unaff_x29 + -0xb0);
              *unaff_x21 = lVar16;
              unaff_x21[3] = lVar17;
              unaff_x21[2] = lVar7;
              lVar16 = *(long *)(unaff_x29 + -0x98);
              lVar17 = *(long *)(unaff_x29 + -0x80);
              lVar7 = *(long *)(unaff_x29 + -0x88);
              unaff_x21[5] = *(long *)(unaff_x29 + -0x90);
              unaff_x21[4] = lVar16;
              unaff_x21[7] = lVar17;
              unaff_x21[6] = lVar7;
              FUN_1019a8664(unaff_x29 + -0x78,lVar15,&stack0x000001a0);
              plVar11 = in_stack_00000158;
              puVar2 = in_stack_00000150;
              puVar6 = *(undefined8 **)(unaff_x29 + -0x78);
              if (puVar6 == (undefined8 *)0x8000000000000004) goto code_r0x0001019a8e24;
              plVar10 = *(long **)(unaff_x29 + -0x70);
              puVar12 = *(undefined8 **)(unaff_x29 + -0x68);
              in_stack_00000088 = puVar6;
              in_stack_00000090 = plVar10;
              in_stack_00000098 = puVar12;
              if (in_stack_00000150 != (undefined8 *)0x8000000000000000) {
                if (in_stack_00000160 != (undefined8 *)0x0) {
                  plVar14 = in_stack_00000158 + 1;
                  puVar13 = in_stack_00000160;
                  do {
                    if (plVar14[-1] != 0) {
                      _free(*plVar14);
                    }
                    plVar14 = plVar14 + 3;
                    puVar13 = (undefined8 *)((long)puVar13 + -1);
                  } while (puVar13 != (undefined8 *)0x0);
                }
                if (puVar2 != (undefined8 *)0x0) {
                  _free(plVar11);
                }
              }
              if (in_stack_00000138 != (undefined8 *)0x0) {
                _free(in_stack_00000140);
              }
              unaff_x25 = (undefined8 *)&stack0x000000a0;
              if (in_stack_00000178 != 0) {
                _free(in_stack_00000180);
              }
              goto LAB_1019a8a88;
            }
LAB_1019a8e30:
            unaff_x21[9] = in_stack_00000180;
            unaff_x21[8] = in_stack_00000178;
            unaff_x21[0xb] = in_stack_00000190;
            unaff_x21[10] = (long)in_stack_00000188;
            unaff_x21[1] = (long)in_stack_00000140;
            *unaff_x21 = (long)in_stack_00000138;
            unaff_x21[3] = (long)in_stack_00000150;
            unaff_x21[2] = (long)in_stack_00000148;
            unaff_x21[5] = (long)in_stack_00000160;
            unaff_x21[4] = (long)in_stack_00000158;
            unaff_x21[7] = CONCAT62(uStack0000000000000172,
                                    CONCAT11(uStack0000000000000171,uStack0000000000000170));
            unaff_x21[6] = in_stack_00000168;
            func_0x00010611ece8(&stack0x00000088,&stack0x000001a0);
            unaff_x25 = (undefined8 *)&stack0x000000a0;
            puVar6 = in_stack_00000088;
            plVar10 = in_stack_00000090;
            puVar12 = in_stack_00000098;
          }
LAB_1019a8a88:
          unaff_x24 = &stack0x00000008;
          unaff_x27 = in_stack_00000000;
          goto joined_r0x0001019a8a8c;
        }
        if ((long)uVar9 < 3) {
          if (uVar9 == 0) {
            if (in_stack_000001a0 != (undefined8 *)0x8000000000000000) {
              if (in_stack_000001b0 != (undefined8 *)0x0) {
                plVar11 = in_stack_000001a8 + 1;
                puVar13 = in_stack_000001b0;
                do {
                  if (plVar11[-1] != 0) {
                    _free(*plVar11);
                  }
                  plVar11 = plVar11 + 3;
                  puVar13 = (undefined8 *)((long)puVar13 + -1);
                } while (puVar13 != (undefined8 *)0x0);
              }
              if (puVar2 != (undefined8 *)0x0) {
                _free(plVar10);
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar6);
            }
            plVar10 = (long *)&UNK_109beca37;
          }
          else if (uVar9 == 1) {
            if (in_stack_000001a0 != (undefined8 *)0x8000000000000000) {
              if (in_stack_000001b0 != (undefined8 *)0x0) {
                plVar11 = in_stack_000001a8 + 1;
                puVar13 = in_stack_000001b0;
                do {
                  if (plVar11[-1] != 0) {
                    _free(*plVar11);
                  }
                  plVar11 = plVar11 + 3;
                  puVar13 = (undefined8 *)((long)puVar13 + -1);
                } while (puVar13 != (undefined8 *)0x0);
              }
              if (puVar2 != (undefined8 *)0x0) {
                _free(plVar10);
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar6);
            }
            plVar10 = (long *)&UNK_109beca31;
          }
          else {
            if (in_stack_000001a0 != (undefined8 *)0x8000000000000000) {
              if (in_stack_000001b0 != (undefined8 *)0x0) {
                plVar11 = in_stack_000001a8 + 1;
                puVar13 = in_stack_000001b0;
                do {
                  if (plVar11[-1] != 0) {
                    _free(*plVar11);
                  }
                  plVar11 = plVar11 + 3;
                  puVar13 = (undefined8 *)((long)puVar13 + -1);
                } while (puVar13 != (undefined8 *)0x0);
              }
              if (puVar2 != (undefined8 *)0x0) {
                _free(plVar10);
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar6);
            }
            plVar10 = (long *)&UNK_109beca2e;
          }
LAB_1019a9424:
          puVar12 = (undefined8 *)0x3;
        }
        else if (uVar9 == 3) {
          if (in_stack_000001a0 != (undefined8 *)0x8000000000000000) {
            if (in_stack_000001b0 != (undefined8 *)0x0) {
              plVar11 = in_stack_000001a8 + 1;
              puVar13 = in_stack_000001b0;
              do {
                if (plVar11[-1] != 0) {
                  _free(*plVar11);
                }
                plVar11 = plVar11 + 3;
                puVar13 = (undefined8 *)((long)puVar13 + -1);
              } while (puVar13 != (undefined8 *)0x0);
            }
            if (puVar2 != (undefined8 *)0x0) {
              _free(plVar10);
            }
          }
          if (puVar12 != (undefined8 *)0x0) {
            _free(puVar6);
          }
          plVar10 = (long *)&UNK_109beca3d;
          puVar12 = (undefined8 *)0x4;
        }
        else {
          if (uVar9 != 4) {
            if (in_stack_000001a0 != (undefined8 *)0x8000000000000000) {
              if (in_stack_000001b0 != (undefined8 *)0x0) {
                plVar11 = in_stack_000001a8 + 1;
                puVar13 = in_stack_000001b0;
                do {
                  if (plVar11[-1] != 0) {
                    _free(*plVar11);
                  }
                  plVar11 = plVar11 + 3;
                  puVar13 = (undefined8 *)((long)puVar13 + -1);
                } while (puVar13 != (undefined8 *)0x0);
              }
              if (puVar2 != (undefined8 *)0x0) {
                _free(plVar10);
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar6);
            }
            plVar10 = (long *)&UNK_109beca34;
            goto LAB_1019a9424;
          }
          if (in_stack_000001a0 != (undefined8 *)0x8000000000000000) {
            if (in_stack_000001b0 != (undefined8 *)0x0) {
              plVar11 = in_stack_000001a8 + 1;
              puVar13 = in_stack_000001b0;
              do {
                if (plVar11[-1] != 0) {
                  _free(*plVar11);
                }
                plVar11 = plVar11 + 3;
                puVar13 = (undefined8 *)((long)puVar13 + -1);
              } while (puVar13 != (undefined8 *)0x0);
            }
            if (puVar2 != (undefined8 *)0x0) {
              _free(plVar10);
            }
          }
          if (puVar12 != (undefined8 *)0x0) {
            _free(puVar6);
          }
          plVar10 = (long *)&UNK_108cf2673;
          puVar12 = (undefined8 *)0x18;
        }
        if (lVar15 != 0) {
          _free(lVar16);
        }
        puVar6 = (undefined8 *)0x8000000000000000;
        goto LAB_1019a9438;
      }
      unaff_x21[1] = in_stack_00000078;
      *unaff_x21 = in_stack_00000070;
      in_stack_000001b0 = in_stack_00000080;
      __ZN4toml3ser8document6buffer6Buffer11child_table17h53a4e5dd68b998e2E
                (&stack0x000000a0,in_stack_00000060,&stack0x00000008,&stack0x000001a0);
      in_stack_00000120 = in_stack_00000060;
      in_stack_00000128 = in_stack_00000068;
      unaff_x25[9] = unaff_x25[1];
      unaff_x25[8] = *unaff_x25;
      unaff_x25[0xb] = unaff_x25[3];
      unaff_x25[10] = unaff_x25[2];
      unaff_x25[0xd] = unaff_x25[5];
      unaff_x25[0xc] = unaff_x25[4];
      unaff_x25[0xf] = unaff_x25[7];
      unaff_x25[0xe] = unaff_x25[6];
      FUN_1019a8664(&stack0x000001a0,lVar8 + 0x88,&stack0x000000e0);
      puVar6 = in_stack_000001a0;
      plVar10 = in_stack_000001a8;
      puVar12 = in_stack_000001b0;
joined_r0x0001019a8a8c:
      lVar8 = unaff_x20;
      if (puVar6 != (undefined8 *)0x8000000000000004) goto LAB_1019a9438;
    }
    in_stack_000001a0 = &stack0x00000070;
    in_stack_000001a8 = (long *)&DAT_1019a7324;
    param_1 = &stack0x00000008;
    param_4 = &stack0x000001a0;
    param_2 = &UNK_10b25d2c0;
  }
  plVar10 = (long *)_malloc(0x26);
  if (plVar10 == (long *)0x0) {
    func_0x0001087c9084(1,0x26);
LAB_1019a95e0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019a95e4);
    (*pcVar3)();
  }
  plVar10[1] = 0x6572727563636f20;
  *plVar10 = 0x726f727265206e61;
  plVar10[3] = 0x6120676e69746972;
  plVar10[2] = 0x77206e6568772064;
  *(undefined8 *)((long)plVar10 + 0x1e) = 0x65756c6176206120;
  puVar6 = (undefined8 *)0x26;
  puVar12 = (undefined8 *)0x26;
LAB_1019a924c:
  if (in_stack_00000070 != 0) {
    _free(in_stack_00000078);
  }
LAB_1019a9438:
  *unaff_x19 = (long)puVar6;
  unaff_x19[1] = (long)plVar10;
  unaff_x19[2] = (long)puVar12;
LAB_1019a9440:
  lVar15 = in_stack_00000028;
  lVar8 = in_stack_00000020;
  if (in_stack_00000020 != -0x8000000000000000) {
    if (in_stack_00000030 != 0) {
      puVar12 = (undefined8 *)(in_stack_00000028 + 8);
      lVar16 = in_stack_00000030;
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (lVar8 != 0) {
      _free(lVar15);
    }
  }
  if (in_stack_00000008 != (undefined8 *)0x0) {
    _free(in_stack_00000010);
  }
  if ((in_stack_00000048 != -0x8000000000000000) &&
     (lVar8 = in_stack_00000050, in_stack_00000048 != 0)) {
LAB_1019a94b4:
    _free(lVar8);
  }
  return;
code_r0x0001019a8e24:
  lVar15 = lVar15 + 0x50;
  lVar8 = lVar8 + -0x50;
  if (lVar8 == 0) goto LAB_1019a8e30;
  goto LAB_1019a8d88;
}

