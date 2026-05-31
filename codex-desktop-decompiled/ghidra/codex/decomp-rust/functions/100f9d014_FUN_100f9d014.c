
undefined1  [16] FUN_100f9d014(void)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  bool bVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined1 uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  undefined *puVar31;
  long *unaff_x22;
  byte *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long *plVar32;
  long *unaff_x28;
  long *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lVar44;
  undefined1 auVar45 [16];
  long in_stack_000000d0;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  long *in_stack_00000100;
  long *in_stack_00000108;
  long *in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long *in_stack_00000880;
  long *in_stack_00000888;
  long *plVar46;
  long *in_stack_00000890;
  long *plVar47;
  long *in_stack_00000898;
  long *plVar48;
  long *in_stack_000008a0;
  long *in_stack_000008a8;
  long *in_stack_000008b0;
  long *in_stack_000008b8;
  long *in_stack_000008c0;
  long *in_stack_000008c8;
  long *in_stack_000008d0;
  long *in_stack_000008d8;
  long *in_stack_000008e0;
  long *in_stack_000008e8;
  long *in_stack_00005f88;
  long *in_stack_00005f90;
  long *in_stack_00005f98;
  long *in_stack_00005fa0;
  long *in_stack_00005fa8;
  long *in_stack_00005fb0;
  long *in_stack_00005fb8;
  long *in_stack_00005fc0;
  long *in_stack_00005fc8;
  long *in_stack_00005fd0;
  long *in_stack_00005fd8;
  long *in_stack_00005fe0;
  long *in_stack_00005fe8;
  long *in_stack_00005ff0;
  long *in_stack_00005ff8;
  long *in_stack_00006000;
  undefined8 in_stack_00006008;
  byte in_stack_0000df40;
  byte in_stack_0000df41;
  long *in_stack_0000df48;
  long in_stack_0000e170;
  long in_stack_0000e178;
  long in_stack_0000e180;
  long in_stack_0000e188;
  long in_stack_0000e190;
  long in_stack_00010948;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00005f80);
  if (lRam000000010b63d138 != 0) {
    FUN_108a828bc();
  }
  *unaff_x28 = 0x10b63d0f8;
  lVar20 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                     (&stack0x00005f80);
  if (lVar20 != 0) {
    in_stack_0000df48 = (long *)FUN_108854978(lVar20,&UNK_108cc6b7f,0x2f);
    goto LAB_100fa83f0;
  }
  *(undefined1 *)(in_stack_000000d0 + 0x170) = 0;
  plVar33 = (long *)(in_stack_000000f8 + 0x818);
  __ZN23codex_app_server_daemon6Daemon16from_environment17ha49af209eacb1c29E(&stack0x00005f80);
  plVar32 = (long *)0x8000000000000000;
  lVar20 = in_stack_0000e170;
  lVar29 = in_stack_0000e178;
  lVar41 = in_stack_0000e180;
  lVar44 = in_stack_0000e188;
  lVar27 = in_stack_0000e190;
  if ((long *)&stack0x00010910 == (long *)0x8000000000000000) {
    *(long **)(in_stack_000000f8 + 0x8b0) = in_stack_00005f88;
    *(undefined8 *)(in_stack_000000f8 + 0x8a8) = 0x8000000000000000;
    in_stack_0000df48 = in_stack_00005f88;
LAB_100fa8320:
    lVar17 = in_stack_00000180;
    lVar16 = in_stack_00000178;
    lVar15 = in_stack_00000170;
    lVar14 = in_stack_00000168;
    lVar13 = in_stack_00000160;
    lVar12 = in_stack_00000158;
    lVar11 = in_stack_00000150;
    lVar10 = in_stack_00000148;
    lVar9 = in_stack_00000140;
    lVar8 = in_stack_00000138;
    lVar7 = in_stack_00000130;
    lVar6 = in_stack_00000128;
    lVar5 = in_stack_00000120;
    lVar4 = in_stack_00000118;
    plVar21 = in_stack_00000110;
    plVar30 = in_stack_00000108;
    plVar1 = in_stack_00000100;
    *(undefined1 *)(in_stack_000000d0 + 0x170) = 1;
    FUN_100ca13a4(plVar33);
    if (plVar32 == (long *)0x8000000000000000) {
LAB_100fa83f0:
      in_stack_00005f88 = in_stack_0000df48;
      if ((*(byte *)(in_stack_000000f8 + 0x815) & 1) != 0) {
        lVar29 = *(long *)(in_stack_000000f8 + 0x800);
        lVar20 = *(long *)(in_stack_000000f8 + 0x808);
        if (lVar20 != 0) {
          puVar22 = (undefined8 *)(lVar29 + 8);
          do {
            if (puVar22[-1] != 0) {
              _free(*puVar22);
            }
            puVar22 = puVar22 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (*(long *)(in_stack_000000f8 + 0x7f8) != 0) {
          _free(lVar29);
        }
      }
      *(undefined1 *)(in_stack_000000f8 + 0x815) = 0;
      if ((*(byte *)(in_stack_000000f8 + 0x816) & 1) != 0) {
        if ((*(long *)(in_stack_000000f8 + 0x7b0) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7b0) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 0x7b8));
        }
        if ((*(long *)(in_stack_000000f8 + 0x7c8) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7c8) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 2000));
        }
        if ((*(long *)(in_stack_000000f8 + 0x7e0) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7e0) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 0x7e8));
        }
      }
    }
    else {
      unaff_x28[0x13] = lVar13;
      unaff_x28[0x12] = lVar12;
      unaff_x28[0x15] = lVar15;
      unaff_x28[0x14] = lVar14;
      unaff_x28[0x17] = lVar17;
      unaff_x28[0x16] = lVar16;
      unaff_x28[0xb] = lVar5;
      unaff_x28[10] = lVar4;
      unaff_x28[0xd] = lVar7;
      unaff_x28[0xc] = lVar6;
      unaff_x28[0xf] = lVar9;
      unaff_x28[0xe] = lVar8;
      unaff_x28[0x11] = lVar11;
      unaff_x28[0x10] = lVar10;
      unaff_x28[3] = lVar29;
      unaff_x28[2] = lVar20;
      unaff_x28[5] = lVar44;
      unaff_x28[4] = lVar41;
      unaff_x28[7] = (long)plVar1;
      unaff_x28[6] = lVar27;
      unaff_x28[9] = (long)plVar21;
      unaff_x28[8] = (long)plVar30;
      bVar2 = *(byte *)((long)unaff_x28 + 0x31);
      *unaff_x28 = (long)plVar32;
      unaff_x28[1] = (long)in_stack_0000df48;
      if (1 < bVar2 - 1) {
        if (bVar2 == 3) {
          in_stack_00000100 = (long *)&stack0x00010910;
          in_stack_00000108 = (long *)&DAT_10112965c;
          FUN_100f3f484(&stack0x00000880,s_Remote_control_is_enabled_on_but_108ad46f9,
                        &stack0x00000100);
          puVar24 = &stack0x00000880;
        }
        else {
          in_stack_00000100 = (long *)&stack0x00010910;
          in_stack_00000108 = (long *)&DAT_10112965c;
          FUN_100f3f484(&stack0x00005f80,s_Remote_control_is_disabled_on___108ad46d6,
                        &stack0x00000100);
          puVar24 = &stack0x00005f80;
        }
        in_stack_00005f88 = (long *)FUN_108856624(puVar24);
        unaff_x28 = (long *)&stack0x00010910;
LAB_100fa85ac:
        if (unaff_x28[7] == -0x8000000000000000) {
          FUN_100e0e7bc(&stack0x00010950);
        }
        else {
          FUN_100e0e848(&stack0x00010948);
        }
        if (*unaff_x28 != 0) {
          _free(unaff_x28[1]);
        }
        in_stack_0000df48 = in_stack_00005f88;
        if ((unaff_x28[3] != -0x8000000000000000) && (unaff_x28[3] != 0)) {
          _free(unaff_x28[4]);
        }
        goto LAB_100fa83f0;
      }
      if ((*(byte *)(in_stack_000000f8 + 0x812) & 1) == 0) {
        FUN_100f4e864(&stack0x00005f80,&stack0x00010910,1);
        if ((long *)&stack0x00010910 == (long *)0x8000000000000000) {
          if (in_stack_00005f88 != (long *)0x0) goto LAB_100fa85ac;
        }
        else {
          plVar33 = in_stack_00005f88;
          if (in_stack_00005f90 == (long *)0x0) {
LAB_100fa86ec:
            uVar28 = (long)(in_stack_00005f88 + (long)in_stack_00005f90 * 3) - (long)plVar33;
            if (uVar28 != 0) {
              uVar28 = uVar28 / 0x18;
              plVar32 = plVar33 + 1;
              do {
                if (plVar32[-1] != 0) {
                  _free(*plVar32);
                }
                plVar32 = plVar32 + 3;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
            }
          }
          else {
            plVar32 = in_stack_00005f88;
            do {
              plVar33 = plVar32 + 3;
              lVar20 = *plVar32;
              lVar29 = plVar32[1];
              if (lVar20 == -0x8000000000000000) goto LAB_100fa86ec;
              in_stack_00000108 = (long *)&DAT_10112965c;
              in_stack_00000100 = (long *)&stack0x00000880;
              func_0x00010602ab90(s__108ac265a,&stack0x00000100);
              if (lVar20 != 0) {
                _free(lVar29);
              }
              bVar19 = plVar33 != in_stack_00005f88 + (long)in_stack_00005f90 * 3;
              plVar32 = plVar33;
              plVar33 = in_stack_00005f88;
            } while (bVar19);
          }
          if ((long *)&stack0x00010910 != (long *)0x0) {
            _free(in_stack_00005f88);
          }
          bVar19 = in_stack_00010948 != -0x8000000000000000;
          lVar20 = 0xa0;
          if (bVar19) {
            lVar20 = 0x68;
          }
          lVar29 = *(long *)(&stack0x00010910 + lVar20);
          lVar20 = 0xa8;
          if (bVar19) {
            lVar20 = 0x70;
          }
          puVar31 = *(undefined **)(&stack0x00010910 + lVar20);
          lVar20 = 0xb0;
          if (bVar19) {
            lVar20 = 0x78;
          }
          uVar25 = *(undefined8 *)(&stack0x00010910 + lVar20);
          puVar22 = (undefined8 *)_malloc(0x48);
          if (puVar22 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x48);
LAB_100fb1ca4:
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
            (*pcVar18)();
          }
          puVar23 = (undefined8 *)_malloc(0x17);
          if (puVar23 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x17);
            goto LAB_100fb1ca4;
          }
          puVar23[1] = 0x2d70706120646573;
          *puVar23 = 0x75206e6f6d656144;
          *(undefined8 *)((long)puVar23 + 0xf) = 0x3a7265767265732d;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00005f80,s_path__108ad46bd,&stack0x00000880);
          in_stack_00000100 = (long *)&UNK_108ca7eab;
          if (lVar29 != -0x8000000000000000) {
            in_stack_00000100 = (long *)puVar31;
          }
          in_stack_00000108 = (long *)7;
          if (lVar29 != -0x8000000000000000) {
            in_stack_00000108 = (long *)uVar25;
          }
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00005f80,s_version__108ad46c8,&stack0x00000880);
          *puVar22 = 0x17;
          puVar22[1] = puVar23;
          puVar22[2] = 0x17;
          puVar22[3] = in_stack_00005f88;
          puVar22[4] = plVar33;
          puVar22[5] = &stack0x00010910;
          puVar22[7] = plVar33;
          puVar22[6] = in_stack_00005f88;
          puVar22[8] = &stack0x00010910;
          uVar25 = puVar22[1];
          in_stack_00000108 = (long *)&DAT_10112965c;
          in_stack_00000100 = (long *)&stack0x00000880;
          func_0x00010602ab90(s__108ac265a,&stack0x00000100);
          unaff_x28 = (long *)&stack0x00010910;
          _free(uVar25);
          lVar20 = puVar22[3];
          if (lVar20 == -0x8000000000000000) {
            if (puVar22[6] != 0) {
              _free(puVar22[7]);
            }
          }
          else {
            uVar25 = puVar22[4];
            in_stack_00000100 = (long *)&stack0x00000880;
            in_stack_00000108 = (long *)&DAT_10112965c;
            func_0x00010602ab90(s__108ac265a,&stack0x00000100);
            if (lVar20 != 0) {
              _free(uVar25);
            }
            lVar20 = puVar22[6];
            if (lVar20 != -0x8000000000000000) {
              uVar25 = puVar22[7];
              in_stack_00000100 = (long *)&stack0x00000880;
              in_stack_00000108 = (long *)&DAT_10112965c;
              func_0x00010602ab90(s__108ac265a,&stack0x00000100);
              if (lVar20 != 0) {
                _free(uVar25);
              }
            }
          }
          _free(puVar22);
        }
      }
      else {
        bVar3 = *(byte *)(unaff_x28 + 6);
        unaff_x23[0x29] = 1;
        unaff_x23[0x28] = bVar2;
        unaff_x23[0x2a] = bVar3;
        func_0x0001006579e8(&stack0x00000880,&stack0x00005f80);
        if (in_stack_00000880 == (long *)0x8000000000000000) {
          in_stack_00005f88 = (long *)FUN_108858844();
          goto LAB_100fa85ac;
        }
        in_stack_00000100 = in_stack_00000880;
        in_stack_00000108 = in_stack_00000888;
        in_stack_00000110 = in_stack_00000890;
        func_0x00010602ab90(s__108ac265a,&stack0x00000880);
        if (in_stack_00000100 != (long *)0x0) {
          _free(in_stack_00000108);
        }
      }
      if (unaff_x28[7] == -0x8000000000000000) {
        FUN_100e0e7bc(&stack0x00010950);
      }
      else {
        FUN_100e0e848(&stack0x00010948);
      }
      if (*unaff_x28 != 0) {
        _free(unaff_x28[1]);
      }
      if ((unaff_x28[3] != -0x8000000000000000) && (unaff_x28[3] != 0)) {
        _free(unaff_x28[4]);
      }
      if ((*(byte *)(in_stack_000000f8 + 0x815) & 1) != 0) {
        lVar29 = *(long *)(in_stack_000000f8 + 0x800);
        lVar20 = *(long *)(in_stack_000000f8 + 0x808);
        if (lVar20 != 0) {
          puVar22 = (undefined8 *)(lVar29 + 8);
          do {
            if (puVar22[-1] != 0) {
              _free(*puVar22);
            }
            puVar22 = puVar22 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (*(long *)(in_stack_000000f8 + 0x7f8) != 0) {
          _free(lVar29);
        }
      }
      *(undefined1 *)(in_stack_000000f8 + 0x815) = 0;
      if ((*(byte *)(in_stack_000000f8 + 0x816) & 1) != 0) {
        if ((*(long *)(in_stack_000000f8 + 0x7b0) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7b0) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 0x7b8));
        }
        if ((*(long *)(in_stack_000000f8 + 0x7c8) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7c8) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 2000));
        }
        if ((*(long *)(in_stack_000000f8 + 0x7e0) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7e0) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 0x7e8));
        }
      }
      in_stack_00005f88 = (long *)0x0;
    }
    *(undefined1 *)(in_stack_000000f8 + 0x816) = 0;
    bVar19 = false;
    *unaff_x25 = 1;
  }
  else {
    plVar1 = (long *)(in_stack_000000f8 + 0x8a8);
    *(long **)(in_stack_000000f8 + 0x910) = in_stack_00005fe8;
    *(long **)(in_stack_000000f8 + 0x908) = in_stack_00005fe0;
    *(long **)(in_stack_000000f8 + 0x920) = in_stack_00005ff8;
    *(long **)(in_stack_000000f8 + 0x918) = in_stack_00005ff0;
    *(undefined8 *)(in_stack_000000f8 + 0x930) = in_stack_00006008;
    *(long **)(in_stack_000000f8 + 0x928) = in_stack_00006000;
    *(long **)(in_stack_000000f8 + 0x8d0) = in_stack_00005fa8;
    *(long **)(in_stack_000000f8 + 0x8c8) = in_stack_00005fa0;
    *(long **)(in_stack_000000f8 + 0x8e0) = in_stack_00005fb8;
    *(long **)(in_stack_000000f8 + 0x8d8) = in_stack_00005fb0;
    *(long **)(in_stack_000000f8 + 0x8f0) = in_stack_00005fc8;
    *(long **)(in_stack_000000f8 + 0x8e8) = in_stack_00005fc0;
    *(long **)(in_stack_000000f8 + 0x900) = in_stack_00005fd8;
    *(long **)(in_stack_000000f8 + 0x8f8) = in_stack_00005fd0;
    *(long **)(in_stack_000000f8 + 0x8b0) = in_stack_00005f88;
    *plVar1 = (long)&stack0x00010910;
    *(long **)(in_stack_000000f8 + 0x8c0) = in_stack_00005f98;
    *(long **)(in_stack_000000f8 + 0x8b8) = in_stack_00005f90;
    if (*plVar1 == -0x8000000000000000) {
      in_stack_0000df48 = *(long **)(in_stack_000000f8 + 0x8b0);
      goto LAB_100fa8320;
    }
    *(undefined8 *)(in_stack_000000f8 + 0x880) = *(undefined8 *)(in_stack_000000f8 + 0x910);
    *(undefined8 *)(in_stack_000000f8 + 0x878) = *(undefined8 *)(in_stack_000000f8 + 0x908);
    *(undefined8 *)(in_stack_000000f8 + 0x890) = *(undefined8 *)(in_stack_000000f8 + 0x920);
    *(undefined8 *)(in_stack_000000f8 + 0x888) = *(undefined8 *)(in_stack_000000f8 + 0x918);
    *(undefined8 *)(in_stack_000000f8 + 0x8a0) = *(undefined8 *)(in_stack_000000f8 + 0x930);
    *(undefined8 *)(in_stack_000000f8 + 0x898) = *(undefined8 *)(in_stack_000000f8 + 0x928);
    *(undefined8 *)(in_stack_000000f8 + 0x840) = *(undefined8 *)(in_stack_000000f8 + 0x8d0);
    *(undefined8 *)(in_stack_000000f8 + 0x838) = *(undefined8 *)(in_stack_000000f8 + 0x8c8);
    *(undefined8 *)(in_stack_000000f8 + 0x850) = *(undefined8 *)(in_stack_000000f8 + 0x8e0);
    *(undefined8 *)(in_stack_000000f8 + 0x848) = *(undefined8 *)(in_stack_000000f8 + 0x8d8);
    *(undefined8 *)(in_stack_000000f8 + 0x860) = *(undefined8 *)(in_stack_000000f8 + 0x8f0);
    *(undefined8 *)(in_stack_000000f8 + 0x858) = *(undefined8 *)(in_stack_000000f8 + 0x8e8);
    *(undefined8 *)(in_stack_000000f8 + 0x870) = *(undefined8 *)(in_stack_000000f8 + 0x900);
    *(undefined8 *)(in_stack_000000f8 + 0x868) = *(undefined8 *)(in_stack_000000f8 + 0x8f8);
    *(undefined8 *)(in_stack_000000f8 + 0x820) = *(undefined8 *)(in_stack_000000f8 + 0x8b0);
    *plVar33 = *plVar1;
    *(undefined8 *)(in_stack_000000f8 + 0x830) = *(undefined8 *)(in_stack_000000f8 + 0x8c0);
    *(undefined8 *)(in_stack_000000f8 + 0x828) = *(undefined8 *)(in_stack_000000f8 + 0x8b8);
    *(long **)(in_stack_000000f8 + 0x938) = plVar33;
    plVar1 = (long *)(in_stack_000000f8 + 0x948);
    *(undefined1 *)(in_stack_000000f8 + 0x948) = 0;
    *(long **)(in_stack_000000f8 + 0x940) = plVar33;
    *(long **)(in_stack_000000f8 + 0x9c0) = plVar33;
    *(undefined1 *)(in_stack_000000f8 + 0x9c9) = 0;
    *(long **)(in_stack_000000f8 + 0x950) = plVar33;
    *(long **)(in_stack_000000f8 + 0x9d0) = plVar33;
    *(undefined1 *)(in_stack_000000f8 + 0x9e0) = 0;
    func_0x000100b95d24(&stack0x00005f80,in_stack_000000f8 + 0x9d0,in_stack_000000f0);
    if (*(int *)unaff_x23 == 1) {
      uVar26 = 3;
      in_stack_00005fa0 = unaff_x22;
LAB_100fa2e20:
      *(undefined1 *)(in_stack_000000f8 + 0x9c9) = uVar26;
      uVar26 = 3;
      in_stack_00005f88 = in_stack_00005fa0;
    }
    else {
      uVar36 = *(undefined8 *)(unaff_x23 + 0x40);
      uVar25 = *(undefined8 *)(unaff_x23 + 0x38);
      uVar42 = *(undefined8 *)(unaff_x23 + 0x50);
      uVar39 = *(undefined8 *)(unaff_x23 + 0x48);
      uVar37 = *(undefined8 *)(unaff_x23 + 0x60);
      uVar34 = *(undefined8 *)(unaff_x23 + 0x58);
      uVar38 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar35 = *(undefined8 *)(unaff_x23 + 0x18);
      uVar43 = *(undefined8 *)(unaff_x23 + 0x30);
      uVar40 = *(undefined8 *)(unaff_x23 + 0x28);
      if (*(char *)(in_stack_000000f8 + 0x9e0) == '\x04') {
        FUN_100de8a5c(in_stack_000000f8 + 0xa60);
        FUN_100de24b8(in_stack_000000f8 + 0x9e8);
      }
      else if (*(char *)(in_stack_000000f8 + 0x9e0) == '\x03') {
        FUN_100cb7404(in_stack_000000f8 + 0x9e8);
      }
      if (in_stack_00005f88 != (long *)0x0) {
        *(long **)(in_stack_000000f8 + 0x958) = in_stack_00005f88;
        *(long **)(in_stack_000000f8 + 0x960) = in_stack_00005f90;
        *(long **)(in_stack_000000f8 + 0x9b8) = in_stack_00005fe8;
        *(undefined8 *)(in_stack_000000f8 + 0x990) = uVar36;
        *(undefined8 *)(in_stack_000000f8 + 0x988) = uVar25;
        *(undefined8 *)(in_stack_000000f8 + 0x9a0) = uVar42;
        *(undefined8 *)(in_stack_000000f8 + 0x998) = uVar39;
        *(undefined8 *)(in_stack_000000f8 + 0x9b0) = uVar37;
        *(undefined8 *)(in_stack_000000f8 + 0x9a8) = uVar34;
        *(undefined8 *)(in_stack_000000f8 + 0x970) = uVar38;
        *(undefined8 *)(in_stack_000000f8 + 0x968) = uVar35;
        *(undefined8 *)(in_stack_000000f8 + 0x980) = uVar43;
        *(undefined8 *)(in_stack_000000f8 + 0x978) = uVar40;
        *(undefined8 *)(in_stack_000000f8 + 0x9d0) = *(undefined8 *)(in_stack_000000f8 + 0x950);
        *(undefined1 *)(in_stack_000000f8 + 0xa50) = 0;
        plVar32 = (long *)(in_stack_000000f8 + 0x9d0);
        FUN_100b940ec(&stack0x00005f80,plVar32,in_stack_000000f0);
        bVar2 = *unaff_x23;
        plVar30 = (long *)(ulong)bVar2;
        if (bVar2 == 2) {
          uVar26 = 4;
          in_stack_00005fa0 = plVar32;
        }
        else {
          bVar3 = unaff_x23[1];
          if (((*(char *)(in_stack_000000f8 + 0xa50) == '\x03') &&
              (*(char *)(in_stack_000000f8 + 0xa48) == '\x03')) &&
             (*(char *)(in_stack_000000f8 + 0xa40) == '\x03')) {
            if (*(char *)(in_stack_000000f8 + 0xa38) == '\x03') {
              plVar21 = *(long **)(in_stack_000000f8 + 0xa30);
              unaff_x23 = &stack0x00005f80;
              unaff_x28 = (long *)&stack0x00010910;
              if (*plVar21 == 0xcc) {
                *plVar21 = 0x84;
                unaff_x23 = &stack0x00005f80;
                unaff_x28 = (long *)&stack0x00010910;
              }
              else {
                (**(code **)(plVar21[2] + 0x20))();
              }
            }
            else {
              unaff_x23 = &stack0x00005f80;
              unaff_x28 = (long *)&stack0x00010910;
              if ((*(char *)(in_stack_000000f8 + 0xa38) == '\0') &&
                 (*(long *)(in_stack_000000f8 + 0xa18) != 0)) {
                _free(*(undefined8 *)(in_stack_000000f8 + 0xa20));
              }
            }
          }
          if ((bVar2 & 1) != 0) {
            plVar32 = (long *)0x8000000000000001;
            in_stack_0000df48 = in_stack_00005f88;
            plVar21 = in_stack_00000880;
            plVar46 = in_stack_00000888;
            plVar47 = in_stack_00000890;
            plVar48 = in_stack_00000898;
            in_stack_00005fb8 = in_stack_000008a0;
            in_stack_00005fc0 = in_stack_000008a8;
            in_stack_00005fc8 = in_stack_000008b0;
            in_stack_00005fd0 = in_stack_000008b8;
            in_stack_00005fd8 = in_stack_000008c0;
            in_stack_00005fe0 = in_stack_000008c8;
            in_stack_00005fe8 = in_stack_000008d0;
            in_stack_00005ff0 = in_stack_000008d8;
            in_stack_00005ff8 = in_stack_000008e0;
            in_stack_00006000 = in_stack_000008e8;
LAB_100fa7f88:
            FUN_100de24b8(in_stack_000000f8 + 0x958);
            in_stack_00000880 = plVar21;
            in_stack_00000888 = plVar46;
            in_stack_00000890 = plVar47;
            in_stack_00000898 = plVar48;
            in_stack_000008a0 = in_stack_00005fb8;
            in_stack_000008a8 = in_stack_00005fc0;
            in_stack_000008b0 = in_stack_00005fc8;
            in_stack_000008b8 = in_stack_00005fd0;
            in_stack_000008c0 = in_stack_00005fd8;
            in_stack_000008c8 = in_stack_00005fe0;
            in_stack_000008d0 = in_stack_00005fe8;
            in_stack_000008d8 = in_stack_00005ff0;
            in_stack_000008e0 = in_stack_00005ff8;
            in_stack_000008e8 = in_stack_00006000;
            goto LAB_100fa7f9c;
          }
          *(byte *)(in_stack_000000f8 + 0x9c8) = bVar3;
          lVar20 = *(long *)(in_stack_000000f8 + 0x950);
          *(long *)(in_stack_000000f8 + 0x9d0) = lVar20;
          *(long *)(in_stack_000000f8 + 0x9d8) = in_stack_000000f8 + 0x9c8;
          *(undefined1 *)(in_stack_000000f8 + 0xf38) = 0;
          __ZN23codex_app_server_daemon6Daemon22backend_paths_with_bin17h236268edd9ffd47bE
                    (&stack0x00005f80,lVar20,in_stack_000000f8 + 0x9c8,
                     *(undefined8 *)(lVar20 + 0x80),*(undefined8 *)(lVar20 + 0x88));
          func_0x000101bf694c(in_stack_000000f8 + 0x9e0,&stack0x00005f80);
          *(long *)(in_stack_000000f8 + 0xa30) = in_stack_000000f8 + 0x9e0;
          *(undefined1 *)(in_stack_000000f8 + 0xaa0) = 0;
          FUN_100b9e878(&stack0x0000df40,in_stack_000000f8 + 0xa30,in_stack_000000f0);
          plVar30 = (long *)(ulong)in_stack_0000df40;
          if (in_stack_0000df40 == 2) {
            *(undefined1 *)(in_stack_000000f8 + 0xf38) = 3;
            uVar26 = 5;
            in_stack_00005fa0 = plVar32;
          }
          else {
            FUN_100cf2ae0(in_stack_000000f8 + 0xa30);
            if (*(long *)(in_stack_000000f8 + 0x9e0) != 0) {
              _free(*(undefined8 *)(in_stack_000000f8 + 0x9e8));
            }
            if (*(long *)(in_stack_000000f8 + 0x9f8) != 0) {
              _free(*(undefined8 *)(in_stack_000000f8 + 0xa00));
            }
            if (*(long *)(in_stack_000000f8 + 0xa10) != 0) {
              _free(*(undefined8 *)(in_stack_000000f8 + 0xa18));
            }
            *(undefined1 *)(in_stack_000000f8 + 0xf38) = 1;
            func_0x000100e84cd8(plVar32);
            if ((in_stack_0000df40 & 1) != 0) {
LAB_100fa7f74:
              plVar32 = (long *)0x8000000000000001;
              plVar21 = in_stack_00000880;
              plVar46 = in_stack_00000888;
              plVar47 = in_stack_00000890;
              plVar48 = in_stack_00000898;
              in_stack_00005fb8 = in_stack_000008a0;
              in_stack_00005fc0 = in_stack_000008a8;
              in_stack_00005fc8 = in_stack_000008b0;
              in_stack_00005fd0 = in_stack_000008b8;
              in_stack_00005fd8 = in_stack_000008c0;
              in_stack_00005fe0 = in_stack_000008c8;
              in_stack_00005fe8 = in_stack_000008d0;
              in_stack_00005ff0 = in_stack_000008d8;
              in_stack_00005ff8 = in_stack_000008e0;
              in_stack_00006000 = in_stack_000008e8;
LAB_100fa7f78:
              unaff_x28 = (long *)&stack0x00010910;
              unaff_x23 = &stack0x00005f80;
              goto LAB_100fa7f88;
            }
            *(undefined8 *)(in_stack_000000f8 + 0xa78) = *(undefined8 *)(in_stack_000000f8 + 0x950);
            if ((in_stack_0000df41 & 1) == 0) {
              *(undefined2 *)(in_stack_000000f8 + 0xa81) = 0x100;
              func_0x000100b94b4c(&stack0x00005f80,in_stack_000000f8 + 0x9d0,in_stack_000000f0);
              if ((long *)&stack0x00010910 != (long *)0x8000000000000001) {
                func_0x000100e8a7cc(in_stack_000000f8 + 0x9d0);
                in_stack_0000df48 = in_stack_00005f88;
                if ((long *)&stack0x00010910 != (long *)0x8000000000000000) {
                  unaff_x28 = (long *)&stack0x00010910;
                  FUN_100de24b8(in_stack_000000f8 + 0x958);
                  unaff_x23 = &stack0x00005f80;
                  plVar32 = (long *)0x8000000000000000;
                  in_stack_0000df48 = (long *)&stack0x00010910;
                  plVar30 = in_stack_00005f88;
                  in_stack_00000880 = in_stack_00005f90;
                  in_stack_00000888 = in_stack_00005f98;
                  in_stack_00000890 = in_stack_00005fa0;
                  in_stack_00000898 = in_stack_00005fa8;
                  in_stack_000008a0 = in_stack_00005fb0;
                  in_stack_000008a8 = in_stack_00005fb8;
                  in_stack_000008b0 = in_stack_00005fc0;
                  in_stack_000008b8 = in_stack_00005fc8;
                  in_stack_000008c0 = in_stack_00005fd0;
                  in_stack_000008c8 = in_stack_00005fd8;
                  in_stack_000008d0 = in_stack_00005fe0;
                  in_stack_000008d8 = in_stack_00005fe8;
                  in_stack_000008e0 = in_stack_00005ff0;
                  in_stack_000008e8 = in_stack_00005ff8;
                  goto LAB_100fa7f9c;
                }
                goto LAB_100fa7f74;
              }
              uVar26 = 8;
              in_stack_00005fa0 = (long *)&stack0x00010910;
            }
            else {
              *(undefined2 *)(in_stack_000000f8 + 0xa86) = 0;
              func_0x000100b96758(&stack0x00005f80,in_stack_000000f8 + 0x9d0,in_stack_000000f0);
              if ((long *)&stack0x00010910 != (long *)0x8000000000000001) {
                func_0x000100cbc29c(in_stack_000000f8 + 0x9d0);
                plVar30 = in_stack_00005fb0;
                in_stack_0000df48 = in_stack_00005f88;
                if ((long *)&stack0x00010910 == (long *)0x8000000000000000) goto LAB_100fa7f74;
                if ((long *)&stack0x00010910 != (long *)0x0) {
                  _free(in_stack_00005f88);
                }
                if (in_stack_00005f98 != (long *)0x0) {
                  _free(in_stack_00005fa0);
                }
                if (((ulong)in_stack_00005fb0 & 0x7fffffffffffffff) != 0) {
                  _free(in_stack_00005fb8);
                }
                *(undefined8 *)(in_stack_000000f8 + 0xa20) =
                     *(undefined8 *)(in_stack_000000f8 + 0x950);
                *(undefined1 *)(in_stack_000000f8 + 0xa2c) = 0;
                func_0x000100b9739c(&stack0x00005f80,in_stack_000000f8 + 0x9d0,in_stack_000000f0);
                if ((long *)&stack0x00010910 == (long *)0x8000000000000001) {
                  uVar26 = 7;
                  goto LAB_100fa2e20;
                }
                func_0x000100e605ac(in_stack_000000f8 + 0x9d0);
                plVar30 = in_stack_00005f90;
                plVar32 = (long *)&stack0x00010910;
                plVar21 = in_stack_00005f98;
                plVar46 = in_stack_00005fa0;
                plVar47 = in_stack_00005fa8;
                plVar48 = in_stack_00005fb0;
                if ((long *)&stack0x00010910 == (long *)0x8000000000000000) goto LAB_100fa7f74;
                goto LAB_100fa7f78;
              }
              uVar26 = 6;
              in_stack_00005fa0 = plVar32;
            }
          }
        }
        goto LAB_100fa2e20;
      }
      plVar32 = (long *)0x8000000000000001;
      in_stack_0000df48 = in_stack_00005f90;
      plVar30 = plVar1;
LAB_100fa7f9c:
      *(undefined1 *)(in_stack_000000f8 + 0x9c9) = 1;
      func_0x000100cca6b4(in_stack_000000f8 + 0x950);
      if (plVar32 == (long *)0x8000000000000001) {
LAB_100fa8308:
        plVar32 = (long *)0x8000000000000000;
        lVar20 = in_stack_0000e170;
        lVar29 = in_stack_0000e178;
        lVar41 = in_stack_0000e180;
        lVar44 = in_stack_0000e188;
        lVar27 = in_stack_0000e190;
LAB_100fa830c:
        *(undefined1 *)plVar1 = 1;
        FUN_100df5354(plVar33);
        goto LAB_100fa8320;
      }
      *(long **)(in_stack_000000f8 + 0x950) = plVar32;
      *(long **)(in_stack_000000f8 + 0x958) = in_stack_0000df48;
      *(long **)(in_stack_000000f8 + 0x960) = plVar30;
      *(long **)(in_stack_000000f8 + 0x9b0) = in_stack_000008c8;
      *(long **)(in_stack_000000f8 + 0x9a8) = in_stack_000008c0;
      *(long **)(in_stack_000000f8 + 0x9c0) = in_stack_000008d8;
      *(long **)(in_stack_000000f8 + 0x9b8) = in_stack_000008d0;
      *(long **)(in_stack_000000f8 + 0x9d0) = in_stack_000008e8;
      *(long **)(in_stack_000000f8 + 0x9c8) = in_stack_000008e0;
      *(long **)(in_stack_000000f8 + 0x970) = in_stack_00000888;
      *(long **)(in_stack_000000f8 + 0x968) = in_stack_00000880;
      *(long **)(in_stack_000000f8 + 0x980) = in_stack_00000898;
      *(long **)(in_stack_000000f8 + 0x978) = in_stack_00000890;
      *(long **)(in_stack_000000f8 + 0x990) = in_stack_000008a8;
      *(long **)(in_stack_000000f8 + 0x988) = in_stack_000008a0;
      *(long **)(in_stack_000000f8 + 0x9a0) = in_stack_000008b8;
      *(long **)(in_stack_000000f8 + 0x998) = in_stack_000008b0;
      uVar25 = *(undefined8 *)(*(long *)(in_stack_000000f8 + 0x940) + 8);
      uVar34 = *(undefined8 *)(*(long *)(in_stack_000000f8 + 0x940) + 0x10);
      *(undefined8 *)(in_stack_000000f8 + 0x9d8) = uVar25;
      *(undefined8 *)(in_stack_000000f8 + 0x9e0) = uVar34;
      *(undefined1 *)(in_stack_000000f8 + 0x9e8) = 0;
      *(undefined8 *)(in_stack_000000f8 + 0xa00) = uVar25;
      *(undefined8 *)(in_stack_000000f8 + 0xa08) = uVar34;
      *(undefined1 *)(in_stack_000000f8 + 0xa11) = 0;
      FUN_100b9abdc(&stack0x00005f80,in_stack_000000f8 + 0x9f0,in_stack_000000f0);
      if ((long *)&stack0x00010910 != (long *)0x3) {
        _memcpy(&stack0x00000880,&stack0x00005f90,0x178);
        if (*(char *)(in_stack_000000f8 + 0xa11) == '\x04') {
          if (*(char *)(unaff_x26 + 0xe88) == '\0') {
            FUN_100deb62c(in_stack_000000f8 + 0xa18);
          }
          else if (*(char *)(unaff_x26 + 0xe88) == '\x03') {
            FUN_100d0dcc8(in_stack_000000f8 + 0xa48);
          }
LAB_100fa816c:
          *(undefined1 *)(in_stack_000000f8 + 0xa10) = 0;
        }
        else if (*(char *)(in_stack_000000f8 + 0xa11) == '\x03') {
          if (((*(char *)(in_stack_000000f8 + 0xb00) == '\x03') &&
              (*(char *)(in_stack_000000f8 + 0xaf8) == '\x03')) &&
             (*(char *)(in_stack_000000f8 + 0xaf1) == '\x03')) {
            FUN_100deb62c(in_stack_000000f8 + 0xa48);
            *(undefined1 *)(in_stack_000000f8 + 0xaf0) = 0;
            unaff_x28 = (long *)&stack0x00010910;
            unaff_x23 = &stack0x00005f80;
          }
          goto LAB_100fa816c;
        }
        if ((long *)&stack0x00010910 == (long *)0x2) {
          plVar32 = (long *)0x8000000000000000;
        }
        else {
          *(undefined1 **)(in_stack_000000f8 + 0x9f0) = &stack0x00010910;
          *(long **)(in_stack_000000f8 + 0x9f8) = in_stack_00005f88;
          _memcpy(in_stack_000000f8 + 0xa00,&stack0x00000880,0x178);
          *(undefined8 *)(in_stack_000000f8 + 0xb78) = 10;
          *(undefined4 *)(in_stack_000000f8 + 0xb80) = 0;
          *(long *)(in_stack_000000f8 + 0xb88) = in_stack_000000f8 + 0x9f0;
          *(undefined1 *)(in_stack_000000f8 + 0xd30) = 0;
          FUN_100b90600(&stack0x00005f80,in_stack_000000f8 + 0xb78,in_stack_000000f0);
          if ((long *)&stack0x00010910 == (long *)0x8000000000000001) {
            uVar26 = 4;
            goto LAB_100fa81d8;
          }
          unaff_x28[0x4a9] = (long)in_stack_00005f98;
          unaff_x28[0x4a8] = (long)in_stack_00005f90;
          unaff_x28[0x4ab] = (long)in_stack_00005fa8;
          unaff_x28[0x4aa] = (long)in_stack_00005fa0;
          unaff_x28[0x4ac] = (long)in_stack_00005fb0;
          FUN_100d65794(in_stack_000000f8 + 0xb78);
          FUN_100e57728(in_stack_000000f8 + 0x9f0);
          FUN_100e0df24(in_stack_000000f8 + 0xa20);
          plVar32 = (long *)&stack0x00010910;
        }
        lVar29 = unaff_x28[0x4a9];
        lVar20 = unaff_x28[0x4a8];
        lVar44 = unaff_x28[0x4ab];
        lVar41 = unaff_x28[0x4aa];
        lVar27 = unaff_x28[0x4ac];
        *(undefined1 *)(in_stack_000000f8 + 0x9e8) = 1;
        func_0x000100ce0d38(in_stack_000000f8 + 0x9d8);
        if (plVar32 == (long *)0x8000000000000000) {
          if (*(long *)(in_stack_000000f8 + 0x950) == -0x8000000000000000) {
            FUN_100e0e7bc(in_stack_000000f8 + 0x958);
            in_stack_0000df48 = in_stack_00005f88;
          }
          else {
            FUN_100e0e848(in_stack_000000f8 + 0x950);
            in_stack_0000df48 = in_stack_00005f88;
          }
          goto LAB_100fa8308;
        }
        in_stack_00000158 = *(long *)(in_stack_000000f8 + 0x9a8);
        in_stack_00000150 = *(long *)(in_stack_000000f8 + 0x9a0);
        in_stack_00000168 = *(long *)(in_stack_000000f8 + 0x9b8);
        in_stack_00000160 = *(long *)(in_stack_000000f8 + 0x9b0);
        in_stack_00000178 = *(long *)(in_stack_000000f8 + 0x9c8);
        in_stack_00000170 = *(long *)(in_stack_000000f8 + 0x9c0);
        in_stack_00000180 = *(long *)(in_stack_000000f8 + 0x9d0);
        in_stack_00000118 = *(long *)(in_stack_000000f8 + 0x968);
        in_stack_00000110 = *(long **)(in_stack_000000f8 + 0x960);
        in_stack_00000128 = *(long *)(in_stack_000000f8 + 0x978);
        in_stack_00000120 = *(long *)(in_stack_000000f8 + 0x970);
        in_stack_00000138 = *(long *)(in_stack_000000f8 + 0x988);
        in_stack_00000130 = *(long *)(in_stack_000000f8 + 0x980);
        in_stack_00000148 = *(long *)(in_stack_000000f8 + 0x998);
        in_stack_00000140 = *(long *)(in_stack_000000f8 + 0x990);
        in_stack_00000108 = *(long **)(in_stack_000000f8 + 0x958);
        in_stack_00000100 = *(long **)(in_stack_000000f8 + 0x950);
        in_stack_0000df48 = in_stack_00005f88;
        goto LAB_100fa830c;
      }
      uVar26 = 3;
      in_stack_00005f88 = in_stack_0000df48;
LAB_100fa81d8:
      *(undefined1 *)(in_stack_000000f8 + 0x9e8) = uVar26;
      uVar26 = 4;
    }
    *(undefined1 *)plVar1 = uVar26;
    *(undefined1 *)(in_stack_000000d0 + 0x170) = 3;
    *unaff_x25 = 4;
    bVar19 = true;
  }
  if (bVar19) {
    *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 0x16;
    uVar25 = 1;
    goto LAB_100fb1a40;
  }
  FUN_100e47c98(unaff_x24);
  if (in_stack_00005f88 == (long *)0x0) {
    if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
    }
    if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
    }
    *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
    if (*(long *)(in_stack_000000f8 + 0x228) != -0x7fffffffffffffe9) {
      *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
    if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
      FUN_100ddd750(in_stack_000000f8 + 0x108);
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
    *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
    FUN_100c973ec(in_stack_000000f8 + 0xa8);
    if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
      lVar20 = *(long *)(in_stack_000000f8 + 0x98);
      lVar29 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar29 != 0) {
        puVar22 = (undefined8 *)(lVar20 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar20);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar20 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar20 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar20 != -0x8000000000000000) && (lVar20 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    in_stack_00005f88 = (long *)0x0;
    uVar28 = *(ulong *)(in_stack_000000f8 + 0x78);
    goto joined_r0x000100fac014;
  }
  if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
  }
  if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
  lVar20 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar20 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar20 + 0x8000000000000001U & lVar20 >> 0x3f) {
  case 0:
    if ((*(byte *)(in_stack_000000f8 + 0x711) & 1) != 0) {
      func_0x000100ddff3c(in_stack_000000f8 + 0x228);
    }
    break;
  case 1:
    bVar2 = *(byte *)(in_stack_000000f8 + 0x712);
    goto joined_r0x000100fabebc;
  case 2:
    if ((*(byte *)(in_stack_000000f8 + 0x71d) & 1) != 0) {
      func_0x000100ddcd80(in_stack_000000f8 + 0x230);
    }
    break;
  case 3:
    if ((*(byte *)(in_stack_000000f8 + 0x71e) & 1) != 0) {
      func_0x000100ddfecc(in_stack_000000f8 + 0x230);
    }
    break;
  case 4:
    if ((*(byte *)(in_stack_000000f8 + 0x713) & 1) != 0) {
      func_0x000100de394c(in_stack_000000f8 + 0x230);
    }
    break;
  case 5:
    if ((*(byte *)(in_stack_000000f8 + 0x714) & 1) != 0) {
      func_0x000100deea20(in_stack_000000f8 + 0x230);
    }
    break;
  case 7:
    if ((*(byte *)(in_stack_000000f8 + 0x715) & 1) != 0) {
      func_0x000100de4fb8(in_stack_000000f8 + 0x230);
    }
    break;
  case 9:
    if ((*(byte *)(in_stack_000000f8 + 0x716) & 1) != 0) {
      func_0x000100de8f9c(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xd:
    if ((*(byte *)(in_stack_000000f8 + 0x720) & 1) != 0) {
      func_0x000100ddb3d0(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xe:
    if ((*(byte *)(in_stack_000000f8 + 0x721) & 1) != 0) {
      func_0x000100de3864(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xf:
    if ((*(byte *)(in_stack_000000f8 + 0x722) & 1) != 0) {
      func_0x000100e436d4(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x10:
    if ((*(byte *)(in_stack_000000f8 + 0x723) & 1) != 0) {
      FUN_100e15ef8(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x11:
    if ((((*(byte *)(in_stack_000000f8 + 0x719) & 1) != 0) &&
        (*(long *)(in_stack_000000f8 + 0x350) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000f8 + 0x350) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x358));
    }
    if ((*(byte *)(in_stack_000000f8 + 0x718) & 1) != 0) {
      FUN_100df3274(in_stack_000000f8 + 0x368);
    }
    bVar2 = *(byte *)(in_stack_000000f8 + 0x717);
    goto joined_r0x000100fabcfc;
  case 0x12:
    if ((((*(byte *)(in_stack_000000f8 + 0x71c) & 1) != 0) &&
        (*(long *)(in_stack_000000f8 + 0x350) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000f8 + 0x350) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x358));
    }
    if ((*(byte *)(in_stack_000000f8 + 0x71b) & 1) != 0) {
      FUN_100df3274(in_stack_000000f8 + 0x368);
    }
    bVar2 = *(byte *)(in_stack_000000f8 + 0x71a);
joined_r0x000100fabcfc:
    if ((bVar2 & 1) != 0) {
      FUN_100ddd750(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x13:
    if ((*(byte *)(in_stack_000000f8 + 0x71f) & 1) != 0) {
      func_0x000100decaec(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x14:
    if ((*(byte *)(in_stack_000000f8 + 0x724) & 1) != 0) {
      func_0x000100df5e34(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x15:
    if (((*(byte *)(in_stack_000000f8 + 0x725) & 1) != 0) &&
       (*(long *)(in_stack_000000f8 + 0x230) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x238));
    }
    break;
  case 0x16:
    bVar2 = *(byte *)(in_stack_000000f8 + 0x726);
joined_r0x000100fabebc:
    if ((bVar2 & 1) != 0) {
      func_0x000100de60ac(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x17:
    if ((*(byte *)(in_stack_000000f8 + 0x727) & 1) != 0) {
      func_0x000100de7bc8(in_stack_000000f8 + 0x230);
    }
  }
LAB_100fabef4:
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
LAB_100fabefc:
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
  if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
    FUN_100ddd750(in_stack_000000f8 + 0x108);
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
  if ((((*(byte *)(in_stack_000000f8 + 0x729) & 1) != 0) &&
      (*(long *)(in_stack_000000f8 + 0xd8) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000f8 + 0xd8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0xe0));
  }
  if ((((*(byte *)(in_stack_000000f8 + 0x728) & 1) != 0) &&
      (*(long *)(in_stack_000000f8 + 0xf0) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000f8 + 0xf0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0xf8));
  }
  *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
  FUN_100c973ec(in_stack_000000f8 + 0xa8);
  if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
    lVar20 = *(long *)(in_stack_000000f8 + 0x98);
    lVar29 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar29 != 0) {
      puVar22 = (undefined8 *)(lVar20 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar20);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar20 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar20 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar20 != -0x8000000000000000) && (lVar20 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar28 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fac014:
  if ((uVar28 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  uVar25 = 0;
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
LAB_100fb1a40:
  auVar45._8_8_ = in_stack_00005f88;
  auVar45._0_8_ = uVar25;
  return auVar45;
}

