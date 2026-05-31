
void FUN_100932730(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x23;
  ulong unaff_x24;
  long *plVar17;
  long unaff_x27;
  long unaff_x29;
  long lVar18;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  long *in_stack_00000048;
  long in_stack_00001c60;
  long in_stack_00001c68;
  ulong in_stack_00001c70;
  long in_stack_00001c78;
  long in_stack_00001c98;
  long in_stack_00002980;
  long in_stack_000029c8;
  long in_stack_00002a28;
  undefined8 in_stack_00002a30;
  long in_stack_00002a40;
  undefined8 in_stack_00002a48;
  long in_stack_00002a88;
  long in_stack_00002cb0;
  long in_stack_00002d18;
  long in_stack_00002e70;
  undefined8 in_stack_00002e78;
  long in_stack_00002e88;
  undefined8 in_stack_00002e90;
  long in_stack_00002ea0;
  undefined8 in_stack_00002ea8;
  long in_stack_00002f20;
  ulong in_stack_00002f28;
  long in_stack_00002f30;
  long in_stack_00002f40;
  undefined8 in_stack_00002f48;
  long in_stack_00002f58;
  ulong in_stack_00002f60;
  long in_stack_00002f68;
  long in_stack_00002f70;
  undefined8 in_stack_00002f78;
  long in_stack_00002f88;
  undefined8 in_stack_00002f90;
  ulong in_stack_00002fa0;
  undefined8 in_stack_00002fa8;
  long in_stack_00002fb8;
  undefined8 in_stack_00002fc0;
  long in_stack_00002fd0;
  undefined8 in_stack_00002fd8;
  long in_stack_00002fe8;
  ulong in_stack_00002ff0;
  long in_stack_00002ff8;
  ulong in_stack_00003000;
  undefined8 in_stack_00003008;
  long in_stack_00003018;
  ulong in_stack_00003020;
  long in_stack_00003028;
  ulong in_stack_00003030;
  undefined8 in_stack_00003038;
  long in_stack_00003048;
  undefined8 in_stack_00003050;
  ulong in_stack_00003060;
  undefined8 in_stack_00003068;
  ulong in_stack_00003078;
  undefined8 in_stack_00003080;
  ulong in_stack_00003090;
  undefined8 in_stack_00003098;
  long in_stack_000030a8;
  undefined8 in_stack_000030b0;
  long in_stack_000030c0;
  undefined8 in_stack_000030c8;
  long in_stack_000030d8;
  undefined8 in_stack_000030e0;
  long in_stack_000030f0;
  undefined8 in_stack_000030f8;
  long in_stack_00003108;
  undefined8 in_stack_00003110;
  long in_stack_00003120;
  undefined8 in_stack_00003128;
  long in_stack_00003138;
  undefined8 in_stack_00003140;
  long in_stack_00003150;
  undefined8 in_stack_00003158;
  long in_stack_00003168;
  undefined8 in_stack_00003170;
  long in_stack_00003180;
  undefined8 in_stack_00003188;
  long in_stack_00003198;
  undefined8 in_stack_000031a0;
  long in_stack_000031b0;
  long in_stack_000031b8;
  long in_stack_000031c0;
  long in_stack_000031c8;
  ulong in_stack_000031d0;
  long in_stack_000031d8;
  long in_stack_000031e0;
  ulong in_stack_000031e8;
  long in_stack_000031f0;
  long in_stack_00003200;
  long in_stack_00003308;
  ulong in_stack_00003310;
  long in_stack_00003318;
  ulong in_stack_00003320;
  undefined8 in_stack_00003328;
  long in_stack_00003338;
  undefined8 in_stack_00003340;
  long in_stack_00003350;
  undefined8 in_stack_00003358;
  long in_stack_00003368;
  undefined8 in_stack_00003370;
  long in_stack_00003380;
  undefined8 in_stack_00003388;
  long in_stack_00003398;
  undefined8 in_stack_000033a0;
  ulong in_stack_000033b0;
  undefined8 in_stack_000033b8;
  ulong in_stack_000033c8;
  undefined8 in_stack_000033d0;
  long in_stack_000033e8;
  ulong in_stack_000033f0;
  long in_stack_000033f8;
  long in_stack_00003400;
  char in_stack_00003498;
  long *in_stack_00003590;
  long in_stack_00003598;
  long in_stack_000035a8;
  long in_stack_000035c0;
  long in_stack_00003620;
  ulong in_stack_00003628;
  long in_stack_00003630;
  long in_stack_00003640;
  long in_stack_00003648;
  long in_stack_00003650;
  long in_stack_00003658;
  ulong in_stack_00003660;
  long in_stack_00003668;
  long in_stack_00003670;
  long in_stack_00003678;
  long in_stack_00005058;
  long in_stack_00005090;
  ulong in_stack_00005098;
  long in_stack_000050a0;
  long in_stack_000050a8;
  long in_stack_000050b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003620,s_invalid_cursor__108aca359,unaff_x29 + -0xd0);
  if (in_stack_00003620 == -0x8000000000000000) {
    *(ulong *)(unaff_x29 + -0xe8) = in_stack_00003628;
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
    if (in_stack_00003628 <= unaff_x24) {
      uVar16 = in_stack_00003628 + unaff_x20;
      if (CARRY8(in_stack_00003628,unaff_x20)) {
        uVar16 = 0xffffffffffffffff;
      }
      uVar15 = unaff_x24;
      if (uVar16 <= unaff_x24) {
        uVar15 = uVar16;
      }
      uVar16 = uVar15 - in_stack_00003628;
      if (uVar16 == 0) {
        in_stack_00003628 = 0;
        lVar8 = 8;
      }
      else {
        lVar18 = uVar16 * 0x30;
        lVar8 = _malloc(lVar18);
        if (lVar8 == 0) {
          func_0x0001087c9084(8,lVar18);
          goto LAB_100934000;
        }
        lVar11 = 0;
        unaff_x23 = 0;
        lVar13 = unaff_x27 + in_stack_00003628 * 0x30;
        lVar5 = in_stack_00003628 * -0x30;
        lVar14 = lVar13;
        do {
          in_stack_00003628 = uVar16;
          if (uVar15 * 0x30 + lVar5 == lVar11) break;
          uVar2 = *(undefined8 *)(lVar14 + 8);
          lVar3 = *(long *)(lVar14 + 0x10);
          if (lVar3 == 0) {
            lVar9 = 1;
          }
          else {
            lVar9 = _malloc(lVar3);
            if (lVar9 == 0) {
              func_0x0001087c9084(1,lVar3);
              goto LAB_100934000;
            }
          }
          _memcpy(lVar9,uVar2,lVar3);
          lVar10 = -0x8000000000000000;
          if (*(long *)(lVar14 + 0x18) != -0x8000000000000000) {
            lVar18 = lVar13 + lVar11;
            uVar2 = *(undefined8 *)(lVar18 + 0x20);
            lVar10 = *(long *)(lVar18 + 0x28);
            if (lVar10 == 0) {
              in_stack_00003630 = 1;
            }
            else {
              in_stack_00003630 = _malloc(lVar10);
              if (in_stack_00003630 == 0) {
                func_0x0001087c9084(1,lVar10);
                goto LAB_100934000;
              }
            }
            _memcpy(in_stack_00003630,uVar2,lVar10);
            lVar18 = lVar10;
          }
          lVar14 = lVar14 + 0x30;
          unaff_x23 = unaff_x23 + 1;
          plVar17 = (long *)(lVar8 + lVar11);
          *plVar17 = lVar3;
          plVar17[1] = lVar9;
          plVar17[2] = lVar3;
          plVar17[3] = lVar10;
          lVar11 = lVar11 + 0x30;
          plVar17[4] = in_stack_00003630;
          plVar17[5] = lVar18;
        } while (uVar16 != unaff_x23);
      }
      in_stack_00003630 = lVar8;
      lVar18 = FUN_1055b41a0(uVar15,&stack0x00003620,0x14);
      in_stack_00003650 = 0x14 - lVar18;
      if (lVar18 == 0x14) {
        in_stack_00000030 = 0;
        if (unaff_x24 <= uVar15) {
          in_stack_00000030 = -0x8000000000000000;
        }
        in_stack_00000020 = 1;
        if (unaff_x24 != 0) goto LAB_100932b54;
      }
      else {
        in_stack_00000020 = _malloc(in_stack_00003650);
        if (in_stack_00000020 == 0) {
          func_0x0001087c9084(1,in_stack_00003650);
LAB_100934000:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100934004);
          (*pcVar7)();
        }
        _memcpy(in_stack_00000020,&stack0x00003620 + lVar18,in_stack_00003650);
        in_stack_00000030 = in_stack_00003650;
        if (unaff_x24 <= uVar15) {
          _free(in_stack_00000020);
          in_stack_00000030 = -0x8000000000000000;
          if (unaff_x24 == 0) goto LAB_100932ba4;
        }
LAB_100932b54:
        puVar12 = (undefined8 *)(unaff_x27 + 0x20);
        do {
          if (puVar12[-4] != 0) {
            _free(puVar12[-3]);
          }
          if (puVar12[-1] != -0x8000000000000000 && puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 6;
          unaff_x24 = unaff_x24 - 1;
        } while (unaff_x24 != 0);
      }
LAB_100932ba4:
      if (in_stack_00005058 != 0) {
        _free(unaff_x27);
      }
      if ((in_stack_00002e70 != -0x8000000000000000) && (in_stack_00002e70 != 0)) {
        _free(in_stack_00002e78);
      }
      if ((in_stack_00002e88 != -0x8000000000000000) && (in_stack_00002e88 != 0)) {
        _free(in_stack_00002e90);
      }
      if ((in_stack_00002ea0 != -0x8000000000000000) && (in_stack_00002ea0 != 0)) {
        _free(in_stack_00002ea8);
      }
      if ((-0x7fffffffffffffff < in_stack_00003350) && (in_stack_00003350 != 0)) {
        _free(in_stack_00003358);
      }
      FUN_100e240ac(&stack0x00002eb8);
      if (in_stack_00002f20 != -0x8000000000000000) {
        if (in_stack_00002f30 != 0) {
          puVar12 = (undefined8 *)(in_stack_00002f28 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            in_stack_00002f30 = in_stack_00002f30 + -1;
          } while (in_stack_00002f30 != 0);
        }
        unaff_x23 = in_stack_00002f28;
        if (in_stack_00002f20 != 0) {
          _free(in_stack_00002f28);
        }
      }
      if (in_stack_00002f40 != -0x8000000000000000 && in_stack_00002f40 != 0) {
        _free(in_stack_00002f48);
      }
      if (in_stack_00002f58 != -0x8000000000000000) {
        if (in_stack_00002f68 != 0) {
          puVar12 = (undefined8 *)(in_stack_00002f60 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            in_stack_00002f68 = in_stack_00002f68 + -1;
          } while (in_stack_00002f68 != 0);
        }
        unaff_x23 = in_stack_00002f60;
        if (in_stack_00002f58 != 0) {
          _free(in_stack_00002f60);
        }
      }
      if (in_stack_00002f70 != -0x8000000000000000 && in_stack_00002f70 != 0) {
        _free(in_stack_00002f78);
      }
      if ((in_stack_00002f88 != -0x8000000000000000) && (in_stack_00002f88 != 0)) {
        _free(in_stack_00002f90);
      }
      if ((in_stack_00002fa0 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00002fa8);
      }
      if ((in_stack_00002fb8 != -0x8000000000000000) && (in_stack_00002fb8 != 0)) {
        _free(in_stack_00002fc0);
      }
      if (in_stack_00001c60 != 2) {
        if ((in_stack_00001c60 != 0) && (unaff_x23 = in_stack_00001c70, in_stack_00001c78 != 0)) {
          puVar12 = (undefined8 *)(in_stack_00001c70 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            in_stack_00001c78 = in_stack_00001c78 + -1;
          } while (in_stack_00001c78 != 0);
        }
        if (in_stack_00001c68 != 0) {
          _free(in_stack_00001c70);
          unaff_x23 = in_stack_00001c70;
        }
      }
      FUN_100cf8c18(&stack0x000034a0);
      if ((in_stack_00002fd0 != -0x8000000000000000) && (in_stack_00002fd0 != 0)) {
        _free(in_stack_00002fd8);
      }
      FUN_100d04a7c(&stack0x000034d0);
      if (in_stack_00002fe8 != -0x8000000000000000) {
        if (in_stack_00002ff8 != 0) {
          puVar12 = (undefined8 *)(in_stack_00002ff0 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            in_stack_00002ff8 = in_stack_00002ff8 + -1;
          } while (in_stack_00002ff8 != 0);
        }
        unaff_x23 = in_stack_00002ff0;
        if (in_stack_00002fe8 != 0) {
          _free(in_stack_00002ff0);
        }
      }
      if ((in_stack_00003000 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00003008);
      }
      if (in_stack_00003018 != -0x8000000000000000) {
        if (in_stack_00003028 != 0) {
          puVar12 = (undefined8 *)(in_stack_00003020 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            in_stack_00003028 = in_stack_00003028 + -1;
          } while (in_stack_00003028 != 0);
        }
        unaff_x23 = in_stack_00003020;
        if (in_stack_00003018 != 0) {
          _free(in_stack_00003020);
        }
      }
      if ((in_stack_00003030 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00003038);
      }
      if ((in_stack_00003048 != -0x8000000000000000) && (in_stack_00003048 != 0)) {
        _free(in_stack_00003050);
      }
      FUN_100cfb6e0(&stack0x00003500);
      if ((in_stack_00003060 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00003068);
      }
      if ((in_stack_00003078 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00003080);
      }
      if ((in_stack_000033b0 != 0x8000000000000002) && (in_stack_000033b0 != 0x8000000000000001)) {
        if ((in_stack_000033b0 & 0x7fffffffffffffff) != 0) {
          _free(in_stack_000033b8);
        }
        if ((in_stack_000033c8 & 0x7fffffffffffffff) != 0) {
          _free(in_stack_000033d0);
        }
      }
      if (in_stack_00001c98 != 2) {
        FUN_100de61b4(&stack0x00001c98);
      }
      if ((in_stack_00003090 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00003098);
      }
      if ((in_stack_000030a8 != -0x8000000000000000) && (in_stack_000030a8 != 0)) {
        _free(in_stack_000030b0);
      }
      if ((in_stack_000030c0 != -0x8000000000000000) && (in_stack_000030c0 != 0)) {
        _free(in_stack_000030c8);
      }
      if ((in_stack_000030d8 != -0x8000000000000000) && (in_stack_000030d8 != 0)) {
        _free(in_stack_000030e0);
      }
      if ((in_stack_000030f0 != -0x8000000000000000) && (in_stack_000030f0 != 0)) {
        _free(in_stack_000030f8);
      }
      if (in_stack_00003368 != -0x7fffffffffffffff) {
        if ((in_stack_00003368 != -0x8000000000000000) && (in_stack_00003368 != 0)) {
          _free(in_stack_00003370);
        }
        if ((in_stack_00003380 != -0x8000000000000000) && (in_stack_00003380 != 0)) {
          _free(in_stack_00003388);
        }
      }
      if ((in_stack_00003108 != -0x8000000000000000) && (in_stack_00003108 != 0)) {
        _free(in_stack_00003110);
      }
      if ((in_stack_00003120 != -0x8000000000000000) && (in_stack_00003120 != 0)) {
        _free(in_stack_00003128);
      }
      if ((in_stack_00003138 != -0x8000000000000000) && (in_stack_00003138 != 0)) {
        _free(in_stack_00003140);
      }
      if ((in_stack_00003150 != -0x8000000000000000) && (in_stack_00003150 != 0)) {
        _free(in_stack_00003158);
      }
      if ((in_stack_00003168 != -0x8000000000000000) && (in_stack_00003168 != 0)) {
        _free(in_stack_00003170);
      }
      if ((in_stack_00003180 != -0x8000000000000000) && (in_stack_00003180 != 0)) {
        _free(in_stack_00003188);
      }
      if ((in_stack_00003198 != -0x8000000000000000) && (in_stack_00003198 != 0)) {
        _free(in_stack_000031a0);
      }
      if ((-0x7fffffffffffffff < in_stack_00003398) && (in_stack_00003398 != 0)) {
        _free(in_stack_000033a0);
      }
      if ((in_stack_00003590 != (long *)0x0) && (in_stack_00003598 != 0)) {
        if (in_stack_000035a8 != 0) {
          plVar17 = in_stack_00003590 + 1;
          lVar18 = *in_stack_00003590;
          uVar15 = CONCAT17(-(-1 < lVar18),
                            CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar18 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar18 >> 8)),
                                                           -(-1 < (char)lVar18)))))))) &
                   0x8080808080808080;
          plVar6 = in_stack_00003590;
          do {
            while (uVar15 == 0) {
              lVar18 = *plVar17;
              plVar17 = plVar17 + 1;
              plVar6 = plVar6 + -0x20;
              uVar15 = CONCAT17(-(-1 < lVar18),
                                CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar18 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar18 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar18 >> 8)),
                                                           -(-1 < (char)lVar18)))))))) &
                       0x8080808080808080;
            }
            uVar4 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) & 0x78;
            if (*(long *)((long)plVar6 + uVar4 * -4 + -0x20) != 0) {
              _free(*(undefined8 *)((long)plVar6 + uVar4 * -4 + -0x18));
            }
            uVar15 = uVar15 - 1 & uVar15;
            in_stack_000035a8 = in_stack_000035a8 + -1;
          } while (in_stack_000035a8 != 0);
        }
        unaff_x23 = 0;
        if (in_stack_00003598 * 0x21 != -0x29) {
          _free(in_stack_00003590 + in_stack_00003598 * -4 + -4);
        }
      }
      if ((in_stack_000033e8 != -0x7ffffffffffffffe) && (in_stack_000033e8 != -0x7fffffffffffffff))
      {
        if (in_stack_000033e8 != -0x8000000000000000) {
          if (in_stack_000033f8 != 0) {
            puVar12 = (undefined8 *)(in_stack_000033f0 + 8);
            do {
              if (puVar12[-1] != 0) {
                _free(*puVar12);
              }
              puVar12 = puVar12 + 3;
              in_stack_000033f8 = in_stack_000033f8 + -1;
            } while (in_stack_000033f8 != 0);
          }
          unaff_x23 = in_stack_000033f0;
          if (in_stack_000033e8 != 0) {
            _free(in_stack_000033f0);
          }
        }
        if (in_stack_00003400 != -0x7fffffffffffffff) {
          FUN_100e1589c(&stack0x00003400);
        }
      }
      if (in_stack_000031b0 != -0x8000000000000000) {
        if (in_stack_000031c0 != 0) {
          puVar12 = (undefined8 *)(in_stack_000031b8 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 4;
            in_stack_000031c0 = in_stack_000031c0 + -1;
          } while (in_stack_000031c0 != 0);
        }
        if (in_stack_000031b0 != 0) {
          _free(in_stack_000031b8);
        }
        if (in_stack_000031d8 != 0) {
          puVar12 = (undefined8 *)(in_stack_000031d0 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 4;
            in_stack_000031d8 = in_stack_000031d8 + -1;
          } while (in_stack_000031d8 != 0);
        }
        unaff_x23 = in_stack_000031d0;
        if (in_stack_000031c8 != 0) {
          _free(in_stack_000031d0);
        }
      }
      if (in_stack_00002980 != 2) {
        while (FUN_100f3b678(&stack0x000050c0,&stack0x00003620), in_stack_00003628 != 0) {
          lVar18 = in_stack_00003628 + uVar16 * 0x18;
          if (*(long *)(lVar18 + 8) != 0) {
            _free(*(undefined8 *)(lVar18 + 0x10));
          }
          FUN_100e0e974(in_stack_00003628 + uVar16 * 0x48 + 0x110);
          unaff_x23 = uVar16;
        }
      }
      if (in_stack_000029c8 != 2) {
        if ((in_stack_00002a28 != -0x8000000000000000) && (in_stack_00002a28 != 0)) {
          _free(in_stack_00002a30);
        }
        if ((in_stack_00002a40 != -0x8000000000000000) && (in_stack_00002a40 != 0)) {
          _free(in_stack_00002a48);
        }
      }
      if (in_stack_000031e0 != -0x8000000000000000) {
        if (in_stack_000031f0 != 0) {
          puVar12 = (undefined8 *)(in_stack_000031e8 + 0x20);
          do {
            while( true ) {
              if ((puVar12[-4] & 0x7fffffffffffffff) != 0) {
                _free(puVar12[-3]);
              }
              if (puVar12[-1] != -0x8000000000000000 && puVar12[-1] != 0) break;
              in_stack_000031f0 = in_stack_000031f0 + -1;
              puVar12 = puVar12 + 7;
              if (in_stack_000031f0 == 0) goto LAB_1009333e8;
            }
            _free(*puVar12);
            in_stack_000031f0 = in_stack_000031f0 + -1;
            puVar12 = puVar12 + 7;
          } while (in_stack_000031f0 != 0);
        }
LAB_1009333e8:
        unaff_x23 = in_stack_000031e8;
        if (in_stack_000031e0 != 0) {
          _free(in_stack_000031e8);
        }
      }
      if (in_stack_00003200 != -0x8000000000000000) {
        FUN_100e11e6c(&stack0x00003200);
        while (FUN_100f3a23c(&stack0x000050c0,&stack0x00003620), in_stack_00003628 != 0) {
          lVar18 = in_stack_00003628 + uVar16 * 0x18;
          if (*(long *)(lVar18 + 0x168) != 0) {
            _free(*(undefined8 *)(lVar18 + 0x170));
          }
          puVar1 = (ulong *)(in_stack_00003628 + uVar16 * 0x20);
          unaff_x23 = uVar16;
          if ((*puVar1 & 0x7fffffffffffffff) != 0) {
            _free(puVar1[1]);
          }
        }
      }
      FUN_100cdf530(&stack0x00003530);
      FUN_100cf4044(&stack0x00003560);
      if (in_stack_00002d18 != 4) {
        FUN_100deebc8(&stack0x00002d18);
      }
      if (in_stack_00003308 != -0x8000000000000000) {
        if (in_stack_00003318 != 0) {
          puVar12 = (undefined8 *)(in_stack_00003310 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            in_stack_00003318 = in_stack_00003318 + -1;
          } while (in_stack_00003318 != 0);
        }
        unaff_x23 = in_stack_00003310;
        if (in_stack_00003308 != 0) {
          _free(in_stack_00003310);
        }
      }
      if (in_stack_00003498 != '\x03') {
        FUN_100cd61f0(&stack0x00003468);
      }
      if (in_stack_000035c0 != 0) {
        FUN_100cc2fb4(&stack0x000035c0);
      }
      if (in_stack_00002a88 != 2) {
        FUN_100dff504(&stack0x00002a88);
      }
      if (in_stack_00002cb0 != 2) {
        FUN_100decb54(&stack0x00002cb0);
      }
      if ((in_stack_00003320 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00003328);
      }
      if ((in_stack_00003338 != -0x8000000000000000) && (in_stack_00003338 != 0)) {
        _free(in_stack_00003340);
      }
      FUN_100e05b5c(&stack0x00000050);
      in_stack_00003620 = -0x8000000000000000;
      goto LAB_100933e08;
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000050c0,s_cursor___exceeds_total_permissio_108acb692,&stack0x00003620);
    in_stack_00003628 = in_stack_00003660;
    in_stack_00003630 = in_stack_00003668;
    in_stack_00003620 = in_stack_00003658;
  }
  else {
    in_stack_00000020 = in_stack_00003648;
    in_stack_00000030 = in_stack_00003640;
    in_stack_00005090 = in_stack_00003658;
    in_stack_00005098 = in_stack_00003660;
    in_stack_000050a0 = in_stack_00003668;
    in_stack_000050a8 = in_stack_00003670;
    in_stack_000050b0 = in_stack_00003678;
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
  }
  if (unaff_x24 != 0) {
    puVar12 = (undefined8 *)(unaff_x27 + 0x20);
    do {
      if (puVar12[-4] != 0) {
        _free(puVar12[-3]);
      }
      if (puVar12[-1] != -0x8000000000000000 && puVar12[-1] != 0) {
        _free(*puVar12);
      }
      puVar12 = puVar12 + 6;
      unaff_x24 = unaff_x24 - 1;
    } while (unaff_x24 != 0);
  }
  if (in_stack_00005058 != 0) {
    _free();
  }
  if ((in_stack_00002e70 != -0x8000000000000000) && (in_stack_00002e70 != 0)) {
    _free(in_stack_00002e78);
  }
  if ((in_stack_00002e88 != -0x8000000000000000) && (in_stack_00002e88 != 0)) {
    _free(in_stack_00002e90);
  }
  if ((in_stack_00002ea0 != -0x8000000000000000) && (in_stack_00002ea0 != 0)) {
    _free(in_stack_00002ea8);
  }
  if ((-0x7fffffffffffffff < in_stack_00003350) && (in_stack_00003350 != 0)) {
    _free(in_stack_00003358);
  }
  FUN_100e240ac(&stack0x00002eb8);
  if (in_stack_00002f20 != -0x8000000000000000) {
    if (in_stack_00002f30 != 0) {
      puVar12 = (undefined8 *)(in_stack_00002f28 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        in_stack_00002f30 = in_stack_00002f30 + -1;
      } while (in_stack_00002f30 != 0);
    }
    if (in_stack_00002f20 != 0) {
      _free(in_stack_00002f28);
    }
  }
  if (in_stack_00002f40 != -0x8000000000000000 && in_stack_00002f40 != 0) {
    _free(in_stack_00002f48);
  }
  if (in_stack_00002f58 != -0x8000000000000000) {
    if (in_stack_00002f68 != 0) {
      puVar12 = (undefined8 *)(in_stack_00002f60 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        in_stack_00002f68 = in_stack_00002f68 + -1;
      } while (in_stack_00002f68 != 0);
    }
    if (in_stack_00002f58 != 0) {
      _free(in_stack_00002f60);
    }
  }
  if (in_stack_00002f70 != -0x8000000000000000 && in_stack_00002f70 != 0) {
    _free(in_stack_00002f78);
  }
  if ((in_stack_00002f88 != -0x8000000000000000) && (in_stack_00002f88 != 0)) {
    _free(in_stack_00002f90);
  }
  if ((in_stack_00002fa0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00002fa8);
  }
  if ((in_stack_00002fb8 != -0x8000000000000000) && (in_stack_00002fb8 != 0)) {
    _free(in_stack_00002fc0);
  }
  if (in_stack_00001c60 != 2) {
    if ((in_stack_00001c60 != 0) && (in_stack_00001c78 != 0)) {
      puVar12 = (undefined8 *)(in_stack_00001c70 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        in_stack_00001c78 = in_stack_00001c78 + -1;
      } while (in_stack_00001c78 != 0);
    }
    if (in_stack_00001c68 != 0) {
      _free(in_stack_00001c70);
    }
  }
  FUN_100cf8c18(&stack0x000034a0);
  if ((in_stack_00002fd0 != -0x8000000000000000) && (in_stack_00002fd0 != 0)) {
    _free(in_stack_00002fd8);
  }
  FUN_100d04a7c(&stack0x000034d0);
  if (in_stack_00002fe8 != -0x8000000000000000) {
    if (in_stack_00002ff8 != 0) {
      puVar12 = (undefined8 *)(in_stack_00002ff0 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        in_stack_00002ff8 = in_stack_00002ff8 + -1;
      } while (in_stack_00002ff8 != 0);
    }
    if (in_stack_00002fe8 != 0) {
      _free(in_stack_00002ff0);
    }
  }
  if ((in_stack_00003000 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00003008);
  }
  if (in_stack_00003018 != -0x8000000000000000) {
    if (in_stack_00003028 != 0) {
      puVar12 = (undefined8 *)(in_stack_00003020 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        in_stack_00003028 = in_stack_00003028 + -1;
      } while (in_stack_00003028 != 0);
    }
    if (in_stack_00003018 != 0) {
      _free(in_stack_00003020);
    }
  }
  if ((in_stack_00003030 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00003038);
  }
  if ((in_stack_00003048 != -0x8000000000000000) && (in_stack_00003048 != 0)) {
    _free(in_stack_00003050);
  }
  FUN_100cfb6e0(&stack0x00003500);
  if ((in_stack_00003060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00003068);
  }
  if ((in_stack_00003078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00003080);
  }
  if ((in_stack_000033b0 != 0x8000000000000002) && (in_stack_000033b0 != 0x8000000000000001)) {
    if ((in_stack_000033b0 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000033b8);
    }
    if ((in_stack_000033c8 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000033d0);
    }
  }
  if (in_stack_00001c98 != 2) {
    FUN_100de61b4(&stack0x00001c98);
  }
  if ((in_stack_00003090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00003098);
  }
  if ((in_stack_000030a8 != -0x8000000000000000) && (in_stack_000030a8 != 0)) {
    _free(in_stack_000030b0);
  }
  if ((in_stack_000030c0 != -0x8000000000000000) && (in_stack_000030c0 != 0)) {
    _free(in_stack_000030c8);
  }
  if ((in_stack_000030d8 != -0x8000000000000000) && (in_stack_000030d8 != 0)) {
    _free(in_stack_000030e0);
  }
  if ((in_stack_000030f0 != -0x8000000000000000) && (in_stack_000030f0 != 0)) {
    _free(in_stack_000030f8);
  }
  if (in_stack_00003368 != -0x7fffffffffffffff) {
    if ((in_stack_00003368 != -0x8000000000000000) && (in_stack_00003368 != 0)) {
      _free(in_stack_00003370);
    }
    if ((in_stack_00003380 != -0x8000000000000000) && (in_stack_00003380 != 0)) {
      _free(in_stack_00003388);
    }
  }
  if ((in_stack_00003108 != -0x8000000000000000) && (in_stack_00003108 != 0)) {
    _free(in_stack_00003110);
  }
  if ((in_stack_00003120 != -0x8000000000000000) && (in_stack_00003120 != 0)) {
    _free(in_stack_00003128);
  }
  if ((in_stack_00003138 != -0x8000000000000000) && (in_stack_00003138 != 0)) {
    _free(in_stack_00003140);
  }
  if ((in_stack_00003150 != -0x8000000000000000) && (in_stack_00003150 != 0)) {
    _free(in_stack_00003158);
  }
  if ((in_stack_00003168 != -0x8000000000000000) && (in_stack_00003168 != 0)) {
    _free(in_stack_00003170);
  }
  if ((in_stack_00003180 != -0x8000000000000000) && (in_stack_00003180 != 0)) {
    _free(in_stack_00003188);
  }
  if ((in_stack_00003198 != -0x8000000000000000) && (in_stack_00003198 != 0)) {
    _free(in_stack_000031a0);
  }
  if ((-0x7fffffffffffffff < in_stack_00003398) && (in_stack_00003398 != 0)) {
    _free(in_stack_000033a0);
  }
  if ((in_stack_00003590 != (long *)0x0) && (in_stack_00003598 != 0)) {
    if (in_stack_000035a8 != 0) {
      plVar17 = in_stack_00003590 + 1;
      lVar18 = *in_stack_00003590;
      uVar16 = CONCAT17(-(-1 < lVar18),
                        CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar18 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar18 >> 8)),-(-1 < (char)lVar18)))))))) &
               0x8080808080808080;
      plVar6 = in_stack_00003590;
      do {
        while (uVar16 == 0) {
          lVar18 = *plVar17;
          plVar17 = plVar17 + 1;
          plVar6 = plVar6 + -0x20;
          uVar16 = CONCAT17(-(-1 < lVar18),
                            CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar18 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar18 >> 8)),
                                                           -(-1 < (char)lVar18)))))))) &
                   0x8080808080808080;
        }
        uVar15 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) & 0x78;
        if (*(long *)((long)plVar6 + uVar15 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar6 + uVar15 * -4 + -0x18));
        }
        uVar16 = uVar16 - 1 & uVar16;
        in_stack_000035a8 = in_stack_000035a8 + -1;
      } while (in_stack_000035a8 != 0);
    }
    if (in_stack_00003598 * 0x21 != -0x29) {
      _free(in_stack_00003590 + in_stack_00003598 * -4 + -4);
    }
  }
  if ((in_stack_000033e8 != -0x7ffffffffffffffe) && (in_stack_000033e8 != -0x7fffffffffffffff)) {
    if (in_stack_000033e8 != -0x8000000000000000) {
      if (in_stack_000033f8 != 0) {
        puVar12 = (undefined8 *)(in_stack_000033f0 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          in_stack_000033f8 = in_stack_000033f8 + -1;
        } while (in_stack_000033f8 != 0);
      }
      if (in_stack_000033e8 != 0) {
        _free(in_stack_000033f0);
      }
    }
    if (in_stack_00003400 != -0x7fffffffffffffff) {
      FUN_100e1589c(&stack0x00003400);
    }
  }
  if (in_stack_000031b0 != -0x8000000000000000) {
    FUN_100e08d70(&stack0x000031b0);
  }
  if (in_stack_00002980 != 2) {
    while (FUN_100f3b678(&stack0x000050c0,&stack0x00003620), in_stack_00003658 != 0) {
      lVar18 = in_stack_00003658 + in_stack_00003668 * 0x18;
      if (*(long *)(lVar18 + 8) != 0) {
        _free(*(undefined8 *)(lVar18 + 0x10));
      }
      FUN_100e0e974(in_stack_00003658 + in_stack_00003668 * 0x48 + 0x110);
    }
  }
  if (in_stack_000029c8 != 2) {
    if ((in_stack_00002a28 != -0x8000000000000000) && (in_stack_00002a28 != 0)) {
      _free(in_stack_00002a30);
    }
    if ((in_stack_00002a40 != -0x8000000000000000) && (in_stack_00002a40 != 0)) {
      _free(in_stack_00002a48);
    }
  }
  if (in_stack_000031e0 != -0x8000000000000000) {
    if (in_stack_000031f0 != 0) {
      puVar12 = (undefined8 *)(in_stack_000031e8 + 0x20);
      do {
        while( true ) {
          if ((puVar12[-4] & 0x7fffffffffffffff) != 0) {
            _free(puVar12[-3]);
          }
          if (puVar12[-1] != -0x8000000000000000 && puVar12[-1] != 0) break;
          in_stack_000031f0 = in_stack_000031f0 + -1;
          puVar12 = puVar12 + 7;
          if (in_stack_000031f0 == 0) goto LAB_100933c10;
        }
        _free(*puVar12);
        in_stack_000031f0 = in_stack_000031f0 + -1;
        puVar12 = puVar12 + 7;
      } while (in_stack_000031f0 != 0);
    }
LAB_100933c10:
    if (in_stack_000031e0 != 0) {
      _free(in_stack_000031e8);
    }
  }
  if (in_stack_00003200 != -0x8000000000000000) {
    FUN_100e11e6c(&stack0x00003200);
    while (FUN_100f3a23c(&stack0x000050c0,&stack0x00003620), in_stack_00003658 != 0) {
      lVar18 = in_stack_00003658 + in_stack_00003668 * 0x18;
      if (*(long *)(lVar18 + 0x168) != 0) {
        _free(*(undefined8 *)(lVar18 + 0x170));
      }
      puVar1 = (ulong *)(in_stack_00003658 + in_stack_00003668 * 0x20);
      if ((*puVar1 & 0x7fffffffffffffff) != 0) {
        _free(puVar1[1]);
      }
    }
  }
  FUN_100cdf530(&stack0x00003530);
  FUN_100cf4044(&stack0x00003560);
  if (in_stack_00002d18 != 4) {
    FUN_100deebc8(&stack0x00002d18);
  }
  if (in_stack_00003308 != -0x8000000000000000) {
    if (in_stack_00003318 != 0) {
      puVar12 = (undefined8 *)(in_stack_00003310 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        in_stack_00003318 = in_stack_00003318 + -1;
      } while (in_stack_00003318 != 0);
    }
    if (in_stack_00003308 != 0) {
      _free(in_stack_00003310);
    }
  }
  if (in_stack_00003498 != '\x03') {
    FUN_100cd61f0(&stack0x00003468);
  }
  if (in_stack_000035c0 != 0) {
    FUN_100cc2fb4(&stack0x000035c0);
  }
  if (in_stack_00002a88 != 2) {
    FUN_100dff504(&stack0x00002a88);
  }
  if (in_stack_00002cb0 != 2) {
    FUN_100decb54(&stack0x00002cb0);
  }
  if ((in_stack_00003320 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00003328);
  }
  if ((in_stack_00003338 != -0x8000000000000000) && (in_stack_00003338 != 0)) {
    _free(in_stack_00003340);
  }
  unaff_x23 = 0xffffffffffff80a8;
  FUN_100e05b5c(&stack0x00000050);
  uVar16 = 0x8000000000000005;
  if (((*(long *)(in_stack_00000018 + 0x40) != -0x8000000000000000) &&
      (*(char *)(in_stack_00000018 + 0x79) == '\x01')) &&
     (uVar16 = 0x8000000000000005, *(long *)(in_stack_00000018 + 0x40) != 0)) {
    _free(*(undefined8 *)(in_stack_00000018 + 0x48));
  }
LAB_100933e08:
  in_stack_00000048[8] = in_stack_00005098;
  in_stack_00000048[7] = in_stack_00005090;
  *(undefined1 *)(in_stack_00000018 + 0x79) = 0;
  *in_stack_00000048 = in_stack_00003620;
  in_stack_00000048[1] = in_stack_00003628;
  in_stack_00000048[2] = in_stack_00003630;
  in_stack_00000048[3] = uVar16;
  in_stack_00000048[4] = in_stack_00000030;
  in_stack_00000048[5] = in_stack_00000020;
  in_stack_00000048[6] = in_stack_00003650;
  in_stack_00000048[10] = in_stack_000050a8;
  in_stack_00000048[9] = in_stack_000050a0;
  in_stack_00000048[0xb] = in_stack_000050b0;
  in_stack_00000048[0xc] = unaff_x23;
  *(undefined1 *)(in_stack_00000018 + 0x78) = 1;
  return;
}

