
void FUN_100928eec(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
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
  undefined1 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong unaff_x21;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  long unaff_x27;
  long lVar32;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long lStack00000000000000f0;
  long lStack0000000000000130;
  ulong in_stack_00000138;
  ulong uStack0000000000000160;
  ulong uStack0000000000000168;
  ulong uStack0000000000000170;
  long lStack0000000000000178;
  ulong uStack0000000000000180;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  ulong in_stack_000001d0;
  long in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_00000230;
  ulong in_stack_00000238;
  ulong in_stack_00000240;
  long in_stack_00000248;
  ulong in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  ulong uVar33;
  ulong in_stack_00000280;
  ulong in_stack_00000288;
  ulong in_stack_00000290;
  ulong in_stack_00000298;
  ulong uVar34;
  ulong in_stack_000002a0;
  ulong uVar35;
  ulong in_stack_000002a8;
  ulong in_stack_000002b0;
  ulong in_stack_000002b8;
  ulong in_stack_000002c0;
  ulong in_stack_000002c8;
  long in_stack_000002d0;
  ulong in_stack_000002d8;
  long in_stack_00000430;
  undefined8 in_stack_00000438;
  ulong uVar36;
  ulong in_stack_00000748;
  ulong in_stack_00000750;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000280,s_invalid_cursor__108aca359,&stack0x00000258);
  lVar6 = in_stack_00000048;
  if (in_stack_00000280 == 0x8000000000000000) {
    if (in_stack_00000430 != 0) {
      _free(in_stack_00000438);
    }
    uStack0000000000000160 = in_stack_00000230;
    uStack0000000000000168 = in_stack_00000238;
    uStack0000000000000170 = in_stack_00000240;
    lStack0000000000000178 = in_stack_00000248;
    uStack0000000000000180 = in_stack_00000250;
    if (unaff_x28 < in_stack_00000288) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000005a0,s_cursor_exceeds_total_models_108acb670,&stack0x00000280);
      in_stack_00000280 = in_stack_000002b8;
      in_stack_00000750 = in_stack_000002c8;
      in_stack_00000748 = in_stack_000002c0;
      in_stack_000002b0 = unaff_x21;
      goto LAB_100928fc8;
    }
    uVar31 = in_stack_00000288 + unaff_x21;
    if (CARRY8(in_stack_00000288,unaff_x21)) {
      uVar31 = 0xffffffffffffffff;
    }
    uVar23 = unaff_x28;
    if (uVar31 <= unaff_x28) {
      uVar23 = uVar31;
    }
    uVar31 = uVar23 - in_stack_00000288;
    if (uVar31 == 0) {
      *(undefined8 *)(unaff_x29 + -0xf8) = 0;
      *(undefined8 *)(unaff_x29 + -0xf0) = 8;
    }
    else {
      lVar6 = _malloc(uVar31 * 0x170);
      if (lVar6 == 0) {
        func_0x0001087c9084(8,uVar31 * 0x170);
        goto LAB_100929394;
      }
      lVar18 = 0;
      lVar15 = in_stack_00000048 + in_stack_00000288 * 0x170;
      *(ulong *)(unaff_x29 + -0xf8) = uVar31;
      *(long *)(unaff_x29 + -0xf0) = lVar6;
      *(undefined8 *)(unaff_x29 + -0xe8) = 0;
      uVar20 = uVar31;
      uVar34 = in_stack_000002a0;
      uVar35 = in_stack_000002a8;
      do {
        in_stack_000002a8 = 0x8000000000000000;
        if (lVar15 == in_stack_00000048 + uVar23 * 0x170) break;
        uVar17 = *(undefined8 *)(lVar15 + 8);
        lVar19 = *(long *)(lVar15 + 0x10);
        if (lVar19 == 0) {
          lVar7 = 1;
        }
        else {
          lVar7 = _malloc(lVar19);
          if (lVar7 == 0) {
            func_0x0001087c9084(1,lVar19);
            goto LAB_100929394;
          }
        }
        _memcpy(lVar7,uVar17,lVar19);
        uVar17 = *(undefined8 *)(lVar15 + 0x20);
        lVar1 = *(long *)(lVar15 + 0x28);
        if (lVar1 == 0) {
          lVar8 = 1;
        }
        else {
          lVar8 = _malloc(lVar1);
          if (lVar8 == 0) {
            func_0x0001087c9084(1,lVar1);
            goto LAB_100929394;
          }
        }
        _memcpy(lVar8,uVar17,lVar1);
        lVar32 = -0x8000000000000000;
        if (*(long *)(lVar15 + 0xc0) != -0x8000000000000000) {
          uVar17 = *(undefined8 *)(lVar15 + 200);
          lVar32 = *(long *)(lVar15 + 0xd0);
          if (lVar32 == 0) {
            in_stack_00000080 = 1;
          }
          else {
            in_stack_00000080 = _malloc(lVar32);
            if (in_stack_00000080 == 0) {
              func_0x0001087c9084(1,lVar32);
              goto LAB_100929394;
            }
          }
          _memcpy(in_stack_00000080,uVar17,lVar32);
        }
        if (*(long *)(lVar15 + 0xd8) == -0x8000000000000000) {
          uVar33 = 0x8000000000000000;
          in_stack_000002a0 = in_stack_000002b8;
          if (*(long *)(lVar15 + 0x138) != -0x8000000000000000) goto LAB_100928a6c;
LAB_1009288f8:
          uVar17 = *(undefined8 *)(lVar15 + 0x38);
          lVar26 = *(long *)(lVar15 + 0x40);
          lStack00000000000000f0 = -0x8000000000000000;
          if (lVar26 == 0) goto LAB_100928aa4;
LAB_100928904:
          lVar9 = _malloc(lVar26);
          in_stack_000002b8 = in_stack_000002a0;
          if (lVar9 == 0) {
            func_0x0001087c9084(1,lVar26);
            goto LAB_100929394;
          }
        }
        else {
          uVar17 = *(undefined8 *)(lVar15 + 0xe0);
          uVar33 = *(ulong *)(lVar15 + 0xe8);
          if (uVar33 == 0) {
            in_stack_00000288 = 1;
          }
          else {
            in_stack_00000288 = _malloc(uVar33);
            if (in_stack_00000288 == 0) {
              func_0x0001087c9084(1,uVar33);
              goto LAB_100929394;
            }
          }
          _memcpy(in_stack_00000288,uVar17,uVar33);
          in_stack_000002b0 = 0x8000000000000000;
          in_stack_00000298 = 0x8000000000000000;
          if (*(long *)(lVar15 + 0xf0) != -0x8000000000000000) {
            in_stack_000002a0 = *(ulong *)(lVar15 + 0xf8);
            in_stack_00000298 = *(ulong *)(lVar15 + 0x100);
            if (in_stack_00000298 == 0) {
              in_stack_00000138 = 1;
            }
            else {
              in_stack_00000138 = _malloc(in_stack_00000298);
              if (in_stack_00000138 == 0) {
                func_0x0001087c9084(1,in_stack_00000298);
                goto LAB_100929394;
              }
            }
            _memcpy(in_stack_00000138,in_stack_000002a0,in_stack_00000298);
          }
          if (*(long *)(lVar15 + 0x108) != -0x8000000000000000) {
            uVar17 = *(undefined8 *)(lVar15 + 0x110);
            in_stack_000002b0 = *(ulong *)(lVar15 + 0x118);
            if (in_stack_000002b0 == 0) {
              in_stack_000002a0 = 1;
            }
            else {
              in_stack_000002a0 = _malloc(in_stack_000002b0);
              if (in_stack_000002a0 == 0) {
                func_0x0001087c9084(1,in_stack_000002b0);
                goto LAB_100929394;
              }
            }
            _memcpy(in_stack_000002a0,uVar17,in_stack_000002b0);
          }
          in_stack_000002c8 = 0x8000000000000000;
          if (*(long *)(lVar15 + 0x120) != -0x8000000000000000) {
            uVar17 = *(undefined8 *)(lVar15 + 0x128);
            in_stack_000002c8 = *(ulong *)(lVar15 + 0x130);
            if (in_stack_000002c8 == 0) {
              in_stack_00000038 = 1;
            }
            else {
              in_stack_00000038 = _malloc(in_stack_000002c8);
              if (in_stack_00000038 == 0) {
                func_0x0001087c9084(1,in_stack_000002c8);
                goto LAB_100929394;
              }
            }
            _memcpy(in_stack_00000038,uVar17);
            in_stack_00000040 = in_stack_000002c8;
          }
          in_stack_00000290 = uVar33;
          uVar34 = in_stack_00000138;
          uVar35 = in_stack_00000298;
          in_stack_000002c0 = in_stack_000002b0;
          in_stack_000002d0 = in_stack_00000038;
          in_stack_000002d8 = in_stack_00000040;
          if (*(long *)(lVar15 + 0x138) == -0x8000000000000000) goto LAB_1009288f8;
LAB_100928a6c:
          uVar17 = *(undefined8 *)(lVar15 + 0x140);
          lStack00000000000000f0 = *(long *)(lVar15 + 0x148);
          if (lStack00000000000000f0 == 0) {
            in_stack_00000078 = 1;
          }
          else {
            in_stack_00000078 = _malloc(lStack00000000000000f0);
            if (in_stack_00000078 == 0) {
              func_0x0001087c9084(1,lStack00000000000000f0);
              goto LAB_100929394;
            }
          }
          _memcpy(in_stack_00000078,uVar17,lStack00000000000000f0);
          uVar17 = *(undefined8 *)(lVar15 + 0x38);
          lVar26 = *(long *)(lVar15 + 0x40);
          if (lVar26 != 0) goto LAB_100928904;
LAB_100928aa4:
          lVar9 = 1;
          in_stack_000002b8 = in_stack_000002a0;
        }
        _memcpy(lVar9,uVar17,lVar26);
        uVar17 = *(undefined8 *)(lVar15 + 0x50);
        in_stack_000002a0 = *(ulong *)(lVar15 + 0x58);
        if (in_stack_000002a0 == 0) {
          lVar10 = 1;
        }
        else {
          lVar10 = _malloc(in_stack_000002a0);
          if (lVar10 == 0) {
            func_0x0001087c9084(1,in_stack_000002a0);
            goto LAB_100929394;
          }
        }
        _memcpy(lVar10,uVar17,in_stack_000002a0);
        uVar16 = *(undefined1 *)(lVar15 + 0x168);
        lVar27 = *(long *)(lVar15 + 0x70);
        if (lVar27 == 0) {
          lVar13 = 0;
          lVar11 = 8;
        }
        else {
          lVar29 = *(long *)(lVar15 + 0x68);
          lVar21 = lVar27 << 5;
          lVar11 = _malloc(lVar21);
          if (lVar11 == 0) {
            func_0x0001087c9084(8,lVar21);
            goto LAB_100929394;
          }
          lVar28 = 0;
          plVar30 = (long *)(lVar11 + 0x10);
          do {
            lVar13 = lVar27;
            if (lVar21 == 0) break;
            uVar3 = *(undefined1 *)(lVar29 + 0x18);
            uVar17 = *(undefined8 *)(lVar29 + 8);
            lVar22 = *(long *)(lVar29 + 0x10);
            if (lVar22 == 0) {
              lVar12 = 1;
            }
            else {
              lVar12 = _malloc(lVar22);
              if (lVar12 == 0) {
                func_0x0001087c9084(1,lVar22);
                goto LAB_100929394;
              }
            }
            _memcpy(lVar12,uVar17,lVar22);
            lVar28 = lVar28 + 1;
            lVar29 = lVar29 + 0x20;
            plVar30[-2] = lVar22;
            plVar30[-1] = lVar12;
            *plVar30 = lVar22;
            *(undefined1 *)(plVar30 + 1) = uVar3;
            lVar21 = lVar21 + -0x20;
            plVar30 = plVar30 + 4;
          } while (lVar27 != lVar28);
        }
        *(long *)(unaff_x29 + -0x78) = lVar11;
        *(long *)(unaff_x29 + -0x80) = lVar13;
        *(long *)(unaff_x29 + -0x70) = lVar27;
        uVar3 = *(undefined1 *)(lVar15 + 0x16b);
        uVar17 = *(undefined8 *)(lVar15 + 0x80);
        lVar27 = *(long *)(lVar15 + 0x88);
        if (lVar27 == 0) {
          lVar13 = 1;
        }
        else {
          lVar13 = _malloc(lVar27);
          if (lVar13 == 0) {
            func_0x0001087c9084(1,lVar27);
            goto LAB_100929394;
          }
        }
        _memcpy(lVar13,uVar17,lVar27);
        uVar4 = *(undefined1 *)(lVar15 + 0x169);
        FUN_101146714(&stack0x00000258,*(undefined8 *)(lVar15 + 0x98),*(undefined8 *)(lVar15 + 0xa0)
                     );
        uVar24 = *(ulong *)(lVar15 + 0xb8);
        if (uVar24 == 0) {
          uVar36 = 0;
          lVar11 = 8;
        }
        else {
          lVar29 = *(long *)(lVar15 + 0xb0);
          lVar21 = uVar24 * 0x48;
          lVar11 = _malloc(lVar21);
          if (lVar11 == 0) {
            func_0x0001087c9084(8,lVar21);
            goto LAB_100929394;
          }
          in_stack_00000138 = 0;
          plVar30 = (long *)(lVar11 + 0x20);
          do {
            uVar36 = uVar24;
            if (lVar21 == 0) break;
            uVar17 = *(undefined8 *)(lVar29 + 8);
            lVar28 = *(long *)(lVar29 + 0x10);
            if (lVar28 == 0) {
              lStack0000000000000130 = 1;
              _memcpy(1,uVar17,0);
              uVar17 = *(undefined8 *)(lVar29 + 0x20);
              lVar22 = *(long *)(lVar29 + 0x28);
              if (lVar22 != 0) goto LAB_100928c9c;
LAB_100928ce0:
              lVar14 = 1;
              _memcpy(1,uVar17,lVar22);
              uVar17 = *(undefined8 *)(lVar29 + 0x38);
              lVar12 = *(long *)(lVar29 + 0x40);
              if (lVar12 == 0) goto LAB_100928c20;
LAB_100928cfc:
              lVar25 = _malloc(lVar12);
              if (lVar25 == 0) {
                func_0x0001087c9084(1,lVar12);
                goto LAB_100929394;
              }
            }
            else {
              lStack0000000000000130 = _malloc(lVar28);
              if (lStack0000000000000130 == 0) {
                func_0x0001087c9084(1,lVar28);
                goto LAB_100929394;
              }
              _memcpy(lStack0000000000000130,uVar17,lVar28);
              uVar17 = *(undefined8 *)(lVar29 + 0x20);
              lVar22 = *(long *)(lVar29 + 0x28);
              if (lVar22 == 0) goto LAB_100928ce0;
LAB_100928c9c:
              lVar14 = _malloc(lVar22);
              if (lVar14 == 0) {
                func_0x0001087c9084(1,lVar22);
                goto LAB_100929394;
              }
              _memcpy(lVar14,uVar17,lVar22);
              uVar17 = *(undefined8 *)(lVar29 + 0x38);
              lVar12 = *(long *)(lVar29 + 0x40);
              if (lVar12 != 0) goto LAB_100928cfc;
LAB_100928c20:
              lVar25 = 1;
            }
            lVar29 = lVar29 + 0x48;
            in_stack_00000138 = in_stack_00000138 + 1;
            _memcpy(lVar25,uVar17,lVar12);
            plVar30[-4] = lVar28;
            plVar30[-3] = lStack0000000000000130;
            plVar30[-2] = lVar28;
            plVar30[-1] = lVar22;
            *plVar30 = lVar14;
            plVar30[1] = lVar22;
            lVar21 = lVar21 + -0x48;
            plVar30[2] = lVar12;
            plVar30[3] = lVar25;
            plVar30[4] = lVar12;
            plVar30 = plVar30 + 9;
          } while (uVar24 != in_stack_00000138);
        }
        lVar29 = -0x8000000000000000;
        in_stack_000002a8 = 0x8000000000000000;
        if (*(long *)(lVar15 + 0x150) != -0x8000000000000000) {
          uVar17 = *(undefined8 *)(lVar15 + 0x158);
          lVar29 = *(long *)(lVar15 + 0x160);
          if (lVar29 == 0) {
            in_stack_00000090 = 1;
          }
          else {
            in_stack_00000090 = _malloc(lVar29);
            if (in_stack_00000090 == 0) {
              func_0x0001087c9084(1,lVar29);
              goto LAB_100929394;
            }
          }
          _memcpy(in_stack_00000090,uVar17,lVar29);
          in_stack_00000098 = lVar29;
        }
        uVar2 = *(undefined1 *)(lVar15 + 0x16a);
        lVar15 = lVar15 + 0x170;
        lVar21 = lVar18 * 0x170;
        lVar18 = lVar18 + 1;
        *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x80);
        *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000260;
        *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000258;
        *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000268;
        *(long *)(unaff_x29 + -0xb8) = lVar11;
        *(ulong *)(unaff_x29 + -0xc0) = uVar36;
        *(ulong *)(unaff_x29 + -0xb0) = uVar24;
        plVar30 = (long *)(lVar6 + lVar21);
        *plVar30 = lVar19;
        plVar30[1] = lVar7;
        plVar30[2] = lVar19;
        plVar30[3] = lVar1;
        plVar30[4] = lVar8;
        plVar30[5] = lVar1;
        plVar30[6] = lVar26;
        plVar30[7] = lVar9;
        plVar30[8] = lVar26;
        plVar30[9] = in_stack_000002a0;
        plVar30[10] = lVar10;
        plVar30[0xb] = in_stack_000002a0;
        lVar19 = *(long *)(unaff_x29 + -0xe0);
        plVar30[0xd] = *(long *)(unaff_x29 + -0xd8);
        plVar30[0xc] = lVar19;
        plVar30[0xe] = *(long *)(unaff_x29 + -0xd0);
        plVar30[0xf] = lVar27;
        plVar30[0x10] = lVar13;
        plVar30[0x11] = lVar27;
        lVar7 = *(long *)(unaff_x29 + -0x98);
        lVar19 = *(long *)(unaff_x29 + -0xa0);
        plVar30[0x14] = *(long *)(unaff_x29 + -0x90);
        plVar30[0x13] = lVar7;
        plVar30[0x12] = lVar19;
        lVar7 = *(long *)(unaff_x29 + -0xc0);
        lVar19 = *(long *)(unaff_x29 + -0xb0);
        plVar30[0x16] = *(long *)(unaff_x29 + -0xb8);
        plVar30[0x15] = lVar7;
        plVar30[0x17] = lVar19;
        plVar30[0x18] = lVar32;
        plVar30[0x19] = in_stack_00000080;
        plVar30[0x1a] = lVar32;
        plVar30[0x1e] = in_stack_00000298;
        plVar30[0x1d] = in_stack_00000290;
        plVar30[0x1c] = in_stack_00000288;
        plVar30[0x1b] = uVar33;
        plVar30[0x24] = in_stack_000002c8;
        plVar30[0x23] = in_stack_000002c0;
        plVar30[0x26] = in_stack_000002d8;
        plVar30[0x25] = in_stack_000002d0;
        plVar30[0x22] = in_stack_000002b8;
        plVar30[0x21] = in_stack_000002b0;
        plVar30[0x20] = uVar35;
        plVar30[0x1f] = uVar34;
        plVar30[0x27] = lStack00000000000000f0;
        plVar30[0x28] = in_stack_00000078;
        plVar30[0x29] = lStack00000000000000f0;
        plVar30[0x2a] = lVar29;
        plVar30[0x2b] = in_stack_00000090;
        plVar30[0x2c] = in_stack_00000098;
        *(undefined1 *)(plVar30 + 0x2d) = uVar16;
        *(undefined1 *)((long)plVar30 + 0x169) = uVar4;
        *(undefined1 *)((long)plVar30 + 0x16a) = uVar2;
        *(undefined1 *)((long)plVar30 + 0x16b) = uVar3;
        uVar20 = uVar20 - 1;
        unaff_x27 = in_stack_00000088;
      } while (uVar20 != 0);
    }
    lVar6 = in_stack_00000048;
    if (uVar23 < unaff_x28) {
      lVar15 = FUN_1055b41a0(uVar23,&stack0x00000280,0x14);
      in_stack_000002b0 = 0x14 - lVar15;
      if (lVar15 == 0x14) {
        in_stack_000002a8 = 1;
      }
      else {
        in_stack_000002a8 = _malloc(in_stack_000002b0);
        if (in_stack_000002a8 == 0) {
          func_0x0001087c9084(1,in_stack_000002b0);
LAB_100929394:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100929398);
          (*pcVar5)();
        }
      }
      _memcpy(in_stack_000002a8,&stack0x00000280 + lVar15,in_stack_000002b0);
    }
    else {
      in_stack_000002b0 = 0x8000000000000000;
    }
    do {
      FUN_100e37cf8(lVar6);
      unaff_x28 = unaff_x28 - 1;
      lVar6 = lVar6 + 0x170;
    } while (unaff_x28 != 0);
    if (0x16f < in_stack_00000030) {
      _free(in_stack_00000048);
    }
    *(undefined2 *)(unaff_x27 + 0xb8) = 1;
    in_stack_00000280 = 0x8000000000000000;
    in_stack_000002a0 = in_stack_000002b0;
  }
  else {
    uStack0000000000000180 = in_stack_000002d8;
    lStack0000000000000178 = in_stack_000002d0;
    uStack0000000000000170 = in_stack_000002c8;
    uStack0000000000000168 = in_stack_000002c0;
    uStack0000000000000160 = in_stack_000002b8;
    in_stack_00000750 = in_stack_00000290;
    in_stack_00000748 = in_stack_00000288;
    if (in_stack_00000430 != 0) {
      _free(in_stack_00000438);
    }
LAB_100928fc8:
    do {
      FUN_100e37cf8(lVar6);
      unaff_x28 = unaff_x28 - 1;
      lVar6 = lVar6 + 0x170;
    } while (unaff_x28 != 0);
    uVar31 = 0x8000000000000005;
    if (0x16f < in_stack_00000030) {
      _free(in_stack_00000048);
    }
    if (((*(long *)(unaff_x27 + 0x68) != -0x8000000000000000) &&
        (*(char *)(unaff_x27 + 0xb9) == '\x01')) && (*(long *)(unaff_x27 + 0x68) != 0)) {
      _free(*(undefined8 *)(unaff_x27 + 0x70));
    }
    *(undefined2 *)(unaff_x27 + 0xb8) = 1;
    if (in_stack_00000280 == 0x8000000000000001) {
      *in_stack_00000050 = 0x8000000000000071;
      uVar16 = 3;
      goto LAB_100929180;
    }
  }
  FUN_100d2fb90(in_stack_00000028);
  if (in_stack_00000280 == 0x8000000000000000) {
    uVar17 = 0x8000000000000040;
    uVar23 = in_stack_000002b0;
    uVar20 = in_stack_00000750;
    in_stack_00000750 = uVar31;
    in_stack_00000280 = in_stack_00000748;
    uVar31 = in_stack_000002a0;
  }
  else {
    in_stack_000001c8 = uStack0000000000000168;
    in_stack_000001c0 = uStack0000000000000160;
    in_stack_000001d8 = lStack0000000000000178;
    in_stack_000001d0 = uStack0000000000000170;
    in_stack_000001e0 = uStack0000000000000180;
    uVar17 = 0x8000000000000070;
    uVar23 = in_stack_000002a8;
    uVar20 = in_stack_00000748;
    in_stack_000002a8 = in_stack_000002a0;
  }
  *(undefined1 *)(unaff_x27 + 0xc1) = 0;
  *in_stack_00000050 = uVar17;
  in_stack_00000050[1] = in_stack_00000280;
  in_stack_00000050[2] = uVar20;
  in_stack_00000050[3] = in_stack_00000750;
  in_stack_00000050[4] = uVar31;
  in_stack_00000050[5] = in_stack_000002a8;
  in_stack_00000050[6] = uVar23;
  in_stack_00000050[7] = in_stack_000002b0;
  in_stack_00000050[9] = in_stack_000001c8;
  in_stack_00000050[8] = in_stack_000001c0;
  in_stack_00000050[0xb] = in_stack_000001d8;
  in_stack_00000050[10] = in_stack_000001d0;
  uVar16 = 1;
  in_stack_00000050[0xc] = in_stack_000001e0;
  in_stack_00000050[0xd] = 0xffffffffffff80a8;
LAB_100929180:
  *(undefined1 *)(unaff_x27 + 0xc0) = uVar16;
  return;
}

