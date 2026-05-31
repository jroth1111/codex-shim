
/* WARNING: Removing unreachable block (ram,0x0001016741f8) */
/* WARNING: Removing unreachable block (ram,0x000101673dc4) */
/* WARNING: Removing unreachable block (ram,0x000101673dcc) */
/* WARNING: Removing unreachable block (ram,0x000101673f94) */
/* WARNING: Removing unreachable block (ram,0x000101674038) */
/* WARNING: Removing unreachable block (ram,0x000101674044) */
/* WARNING: Removing unreachable block (ram,0x00010167404c) */
/* WARNING: Removing unreachable block (ram,0x000101673ddc) */
/* WARNING: Removing unreachable block (ram,0x000101673f9c) */
/* WARNING: Removing unreachable block (ram,0x000101673fd0) */
/* WARNING: Removing unreachable block (ram,0x00010167401c) */
/* WARNING: Removing unreachable block (ram,0x000101673dec) */
/* WARNING: Removing unreachable block (ram,0x000101673e44) */
/* WARNING: Removing unreachable block (ram,0x000101673f48) */
/* WARNING: Removing unreachable block (ram,0x000101674058) */
/* WARNING: Removing unreachable block (ram,0x0001016741e4) */

void FUN_1016732d8(void)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  undefined8 *puVar9;
  undefined1 uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long *unaff_x24;
  long *plVar13;
  undefined1 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar14;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *in_stack_00000018;
  ulong *in_stack_00000020;
  undefined7 uStack0000000000000031;
  undefined4 uStack0000000000000048;
  undefined1 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
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
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  ulong in_stack_000001f8;
  undefined4 uVar17;
  ulong in_stack_00000200;
  ulong in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000260;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s_thread_id_____is_invalid__108ada54b,&stack0x000001f8);
  lVar7 = *(long *)(unaff_x29 + -0x78);
  if (lVar7 == -0x8000000000000000) {
    uVar8 = *(undefined8 *)(unaff_x22 + 8);
    *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x290) = uVar8;
    uVar6 = *(ulong *)(unaff_x19 + 0x158);
    uVar8 = 0x8000000000000000;
    if (uVar6 == 0x8000000000000000) {
LAB_10167338c:
      uVar17 = (undefined4)(in_stack_000001f8 >> 0x20);
      uVar5 = (undefined1)uVar6;
      uVar15 = 0;
    }
    else {
      __ZN4uuid6parser9try_parse17h0845fad6e03f8b34E
                (unaff_x29 + -0x78,*(undefined8 *)(unaff_x19 + 0x160),
                 *(undefined8 *)(unaff_x19 + 0x168));
      if ((*(byte *)(unaff_x29 + -0x78) & 1) == 0) {
        in_stack_000001f8 = (ulong)*(uint *)(unaff_x22 + 1) << 0x20;
        *(undefined4 *)(unaff_x28 + 7) = *(undefined4 *)(unaff_x29 + -0x74);
        uVar6 = *(ulong *)(unaff_x29 + -0x70);
        uVar5 = *(undefined1 *)(unaff_x29 + -0x68);
        *(ulong *)(unaff_x28 + 0xb) = uVar6;
        in_stack_00000208 =
             CONCAT44((int)(in_stack_00000208 >> 0x20),CONCAT13(uVar5,(int3)in_stack_00000208));
      }
      else {
        FUN_1062419dc(&stack0x000001f8,*(undefined8 *)(unaff_x29 + -0x70),
                      *(undefined8 *)(unaff_x29 + -0x68));
        uVar6 = in_stack_000001f8 & 0xffffffff;
        if ((int)in_stack_000001f8 != 9) {
          uVar15 = *(undefined8 *)(unaff_x28 + 4);
          uVar8 = *(undefined8 *)(unaff_x28 + 0xc);
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x28 + 0x15);
          *(int *)(unaff_x28 + 0xff) = (int)((ulong)in_stack_00000210 >> 0x20);
          uStack0000000000000031 = (undefined7)((ulong)uVar8 >> 8);
          if ((int)in_stack_000001f8 != 10) {
            *(undefined8 *)(unaff_x28 + 0x15) = *(undefined8 *)(unaff_x29 + -0x90);
            *(undefined8 *)(unaff_x28 + 4) = uVar15;
            *(ulong *)(unaff_x28 + 0xd) =
                 CONCAT17((char)(in_stack_00000208 >> 0x20),uStack0000000000000031);
            *(undefined1 **)(unaff_x29 + -0x78) = &stack0x000001f8;
            *(code **)(unaff_x29 + -0x70) =
                 __ZN57__LT_uuid__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h8d1de1e4c2f094b6E
            ;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xe8,s_forked_from_id_is_invalid__108ada569,unaff_x29 + -0x78);
            lVar7 = *(long *)(unaff_x29 + -0xe8);
            uVar8 = *(undefined8 *)(unaff_x29 + -0xe0);
            uVar15 = *(undefined8 *)(unaff_x29 + -0xd8);
            lVar11 = *(long *)(unaff_x19 + 0x278);
            lVar12 = *(long *)(unaff_x19 + 0x280);
            goto joined_r0x000101673784;
          }
          goto LAB_10167338c;
        }
        uVar6 = in_stack_00000200 >> 0x18 & 0xff;
      }
      uVar17 = (undefined4)(in_stack_000001f8 >> 0x20);
      uVar5 = (undefined1)uVar6;
      uVar8 = *(undefined8 *)(unaff_x28 + 0xc);
      uVar15 = CONCAT44((int)*(undefined8 *)(unaff_x28 + 7),
                        CONCAT22(*(undefined2 *)(unaff_x28 + 5),
                                 CONCAT11(*(undefined1 *)((ulong)&stack0x000001f8 | 4),1)));
    }
    *(undefined8 *)(unaff_x28 + 0x99) = uVar15;
    *(undefined1 *)(unaff_x29 + -0xe7) = uVar5;
    *(undefined8 *)(unaff_x28 + 0xa2) = uVar8;
    *(undefined4 *)(unaff_x28 + 3) = *(undefined4 *)(unaff_x29 + -0xec);
    uVar1 = *(uint *)(unaff_x28 + 0x99);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xe8);
    *(uint *)(unaff_x19 + 0x23bf) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x23c2) = *(undefined4 *)(unaff_x28 + 3);
    *(undefined8 *)(unaff_x25 + 0x1e) = uVar15;
    *(short *)(unaff_x25 + 0x26) = (short)((ulong)uVar8 >> 0x30);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x288) + 0x1c00);
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x288) + 0x1c08);
    if (lVar7 == 0) {
      lVar12 = 1;
    }
    else {
      lVar12 = _malloc(lVar7);
      if (lVar12 == 0) {
        func_0x0001087c9084(1,lVar7);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101674210);
        (*pcVar2)();
      }
    }
    _memcpy(lVar12,uVar8,lVar7);
    lVar11 = *(long *)(unaff_x19 + 0x288);
    uVar5 = *(undefined1 *)(lVar11 + 0xb98);
    *(long *)(unaff_x19 + 0x2b0) = lVar7;
    *(long *)(unaff_x19 + 0x2b8) = lVar12;
    *(long *)(unaff_x19 + 0x2c0) = lVar7;
    *(undefined1 *)(unaff_x19 + 0x2c8) = uVar5;
    uVar8 = *(undefined8 *)(lVar11 + 0xb88);
    *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(lVar11 + 0xb90);
    *(undefined8 *)(unaff_x19 + 0x2a0) = uVar8;
    *(long *)(unaff_x19 + 0x2d0) = unaff_x19 + 0x2a0;
    *unaff_x25 = 0;
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
              (unaff_x19 + 0x2d8,*(undefined8 *)(unaff_x19 + 0x2b8),
               *(undefined8 *)(unaff_x19 + 0x2c0),&UNK_108e03582,0xd);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x2e0);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x2e8);
    *(undefined8 *)(unaff_x19 + 0x2f0) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x2f8) = uVar15;
    *(undefined1 *)(unaff_x19 + 0x318) = 0;
    *(undefined8 *)(unaff_x19 + 0x300) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x308) = uVar15;
    *(undefined8 *)(unaff_x19 + 800) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x328) = uVar15;
    *(undefined1 *)(unaff_x19 + 0x368) = 0;
    FUN_100fc1a70(&stack0x000001f8,unaff_x19 + 800);
    if (CONCAT44(uVar17,uVar1) == 2) {
      uVar5 = 3;
LAB_101674084:
      *(undefined1 *)(unaff_x19 + 0x318) = uVar5;
      uVar5 = 3;
      *unaff_x25 = 3;
      *unaff_x20 = 3;
      goto LAB_101674094;
    }
    if (*(char *)(unaff_x19 + 0x368) == '\x03') {
      if (*(char *)(unaff_x19 + 0x360) == '\x03') {
        plVar13 = *(long **)(unaff_x19 + 0x358);
        if (*plVar13 == 0xcc) {
          *plVar13 = 0x84;
        }
        else {
          (**(code **)(plVar13[2] + 0x20))();
        }
      }
      else if ((*(char *)(unaff_x19 + 0x360) == '\0') && (*(long *)(unaff_x19 + 0x340) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x348));
      }
    }
    if ((uVar1 & 1) == 0) {
      *(ulong *)(unaff_x19 + 0x310) = in_stack_00000208;
      *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x300);
      *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x19 + 0x308);
      *(undefined1 *)(unaff_x19 + 0x3c5) = 0;
      FUN_100fc124c(&stack0x000001f8,unaff_x19 + 800);
      if (uVar1 == 1) {
        uVar5 = 4;
        goto LAB_101674084;
      }
      uVar8 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar14 = *(undefined8 *)(unaff_x28 + 0x50);
      uVar15 = *(undefined8 *)(unaff_x28 + 0x48);
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x28 + 0x40);
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar14;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar15;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x58);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x28 + 0x60);
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar8;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000260;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
      uVar14 = *(undefined8 *)(unaff_x28 + 0x30);
      uVar15 = *(undefined8 *)(unaff_x28 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x28 + 0x20);
      *(undefined8 *)(unaff_x29 + -0xf0) = uVar8;
      *(undefined8 *)(unaff_x29 + -0xd8) = uVar14;
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar15;
      if (*(char *)(unaff_x19 + 0x3c5) == '\x03') {
        if ((*(char *)(unaff_x19 + 0x3b0) == '\x03') && (*(char *)(unaff_x19 + 0x3a9) == '\x03')) {
          if (*(char *)(unaff_x19 + 0x398) == '\x03') {
            plVar13 = *(long **)(unaff_x19 + 0x390);
            if (*plVar13 == 0xcc) {
              *plVar13 = 0x84;
            }
            else {
              (**(code **)(plVar13[2] + 0x20))();
            }
          }
          else if ((*(char *)(unaff_x19 + 0x398) == '\0') && (*(long *)(unaff_x19 + 0x368) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x370));
          }
          *(undefined1 *)(unaff_x19 + 0x3a8) = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x3c4) = 0;
      }
      if (in_stack_00000200 == 0) {
        lVar7 = *(long *)(unaff_x19 + 0x310);
        if ((in_stack_00000208 & 3) != 1) {
LAB_1016739f0:
          uVar8 = 0;
          goto LAB_1016739f4;
        }
        plVar13 = (long *)(in_stack_00000208 - 1);
        lVar12 = *plVar13;
        puVar9 = *(undefined8 **)(in_stack_00000208 + 7);
        pcVar2 = (code *)*puVar9;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(lVar12);
        }
        if (puVar9[1] != 0) goto LAB_10167395c;
        goto LAB_101673964;
      }
      *(ulong *)(unaff_x19 + 800) = in_stack_00000200;
      *(ulong *)(unaff_x19 + 0x328) = in_stack_00000208;
      uVar8 = *(undefined8 *)(unaff_x29 + -0xd0);
      uVar14 = *(undefined8 *)(unaff_x29 + -0xb8);
      uVar15 = *(undefined8 *)(unaff_x29 + -0xc0);
      *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x29 + -200);
      *(undefined8 *)(unaff_x19 + 0x350) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x368) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x360) = uVar15;
      uVar8 = *(undefined8 *)(unaff_x29 + -0xb0);
      *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x29 + -0xa8);
      *(undefined8 *)(unaff_x19 + 0x370) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar8 = *(undefined8 *)(unaff_x29 + -0xf0);
      uVar14 = *(undefined8 *)(unaff_x29 + -0xd8);
      uVar15 = *(undefined8 *)(unaff_x29 + -0xe0);
      *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x29 + -0xe8);
      *(undefined8 *)(unaff_x19 + 0x330) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x348) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x340) = uVar15;
      _bzero(unaff_x19 + 0x3a8,0x2000);
      *(undefined8 *)(unaff_x19 + 0x388) = 0;
      *(long *)(unaff_x19 + 0x390) = unaff_x19 + 800;
      *(long *)(unaff_x19 + 0x398) = unaff_x19 + 0x3a8;
      *(undefined8 *)(unaff_x19 + 0x3a0) = 0x2000;
      auVar16 = __ZN74__LT_tokio__fs__file__File_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17h16dcf49802ff277eE
                          ();
      uVar6 = auVar16._8_8_;
      if ((auVar16._0_8_ & 1) != 0) {
        uVar5 = 5;
        goto LAB_101674084;
      }
      if (uVar6 == 0) {
        lVar7 = *(long *)(unaff_x19 + 0x310);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x388);
        lVar12 = **(long **)(unaff_x19 + 800);
        **(long **)(unaff_x19 + 800) = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE(unaff_x19 + 800);
        }
        lVar12 = *(long *)(unaff_x19 + 0x350);
        if (lVar12 != -0x8000000000000000) {
          plVar13 = *(long **)(unaff_x19 + 0x358);
          if (lVar12 == -0x7fffffffffffffff) {
            if (*plVar13 == 0xcc) {
              *plVar13 = 0x84;
            }
            else {
              (**(code **)(plVar13[2] + 0x20))(plVar13);
            }
          }
          else if (lVar12 != 0) goto LAB_101673968;
        }
      }
      else {
        lVar7 = *(long *)(unaff_x19 + 0x310);
        if ((uVar6 & 3) == 1) {
          uVar8 = *(undefined8 *)(uVar6 - 1);
          puVar9 = *(undefined8 **)(uVar6 + 7);
          pcVar2 = (code *)*puVar9;
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(uVar8);
          }
          if (puVar9[1] != 0) {
            _free(uVar8);
          }
          _free((undefined8 *)(uVar6 - 1));
        }
        lVar12 = **(long **)(unaff_x19 + 800);
        **(long **)(unaff_x19 + 800) = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE(unaff_x19 + 800);
        }
        uVar8 = 0;
        lVar12 = *(long *)(unaff_x19 + 0x350);
        if (lVar12 != -0x8000000000000000) {
          plVar13 = *(long **)(unaff_x19 + 0x358);
          if (lVar12 == -0x7fffffffffffffff) {
            if (*plVar13 == 0xcc) {
              *plVar13 = 0x84;
            }
            else {
              (**(code **)(plVar13[2] + 0x20))(plVar13);
            }
            goto LAB_1016739f0;
          }
          if (lVar12 != 0) goto LAB_101673964;
        }
      }
    }
    else {
      cVar4 = FUN_100c355d4(in_stack_00000200);
      if (cVar4 == '\0') {
        if ((in_stack_00000200 & 3) != 1) goto LAB_1016736e4;
        lVar12 = *(long *)(in_stack_00000200 - 1);
        puVar9 = *(undefined8 **)(in_stack_00000200 + 7);
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(lVar12);
        }
      }
      else {
        if ((in_stack_00000200 & 3) != 1) {
LAB_1016736e4:
          uVar8 = 0;
          lVar7 = 0;
          goto LAB_1016739f4;
        }
        lVar12 = *(long *)(in_stack_00000200 - 1);
        puVar9 = *(undefined8 **)(in_stack_00000200 + 7);
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(lVar12);
        }
      }
      plVar13 = (long *)(in_stack_00000200 - 1);
      lVar7 = 0;
      uVar8 = 0;
      if (puVar9[1] != 0) {
LAB_10167395c:
        _free(lVar12);
LAB_101673964:
        uVar8 = 0;
      }
LAB_101673968:
      _free(plVar13);
    }
LAB_1016739f4:
    *(undefined1 *)(unaff_x19 + 0x318) = 1;
    FUN_100e872ec(unaff_x19 + 0x2f0);
    if (*(long *)(unaff_x19 + 0x2d8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2e0));
    }
    *unaff_x25 = 1;
    in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x298);
    in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x290);
    in_stack_00000058 = *(undefined8 *)(unaff_x19 + 0x23c7);
    in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x23bf);
    in_stack_00000060 = *(undefined1 *)(unaff_x19 + 0x23cf);
    unaff_x25[0x31] = 0;
    in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x178);
    in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x170);
    in_stack_00000158 = *(undefined8 *)(unaff_x19 + 0x180);
    in_stack_000001e8 = *(undefined8 *)(unaff_x19 + 0x1b0);
    in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x1a8);
    in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0x1c8);
    in_stack_000001c8 = *(undefined8 *)(unaff_x19 + 0x1c0);
    in_stack_000001c0 = *(undefined8 *)(unaff_x19 + 0x1b8);
    in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x1d8);
    in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x1d0);
    in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0x1e0);
    uStack0000000000000048 = *(undefined4 *)(unaff_x19 + 0x23b8);
    uStack000000000000004c = *(undefined1 *)(unaff_x19 + 0x23bc);
    uVar5 = unaff_x25[0x15];
    in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x1f0);
    in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x1e8);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x200);
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x1f8);
    in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x208);
    in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0x238);
    in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x230);
    in_stack_000001a8 = *(undefined8 *)(unaff_x19 + 0x248);
    in_stack_000001a0 = *(undefined8 *)(unaff_x19 + 0x240);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x218);
    in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x210);
    in_stack_00000108 = *(undefined8 *)(unaff_x19 + 0x228);
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x220);
    in_stack_000001b0 = *(undefined8 *)(unaff_x19 + 0x250);
    in_stack_00000190 = *(undefined8 *)(unaff_x19 + 0x268);
    in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0x260);
    in_stack_00000180 = *(undefined8 *)(unaff_x19 + 600);
    *(undefined8 *)(unaff_x19 + 0x23d0) = 0;
    in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0x278);
    in_stack_00000160 = *(undefined8 *)(unaff_x19 + 0x270);
    in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0x280);
    uVar10 = unaff_x25[0x16];
    unaff_x24 = (long *)(ulong)*(byte *)(*(long *)(unaff_x19 + 0x288) + 0x253e);
    unaff_x25[0x30] = 0;
    in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 400);
    in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x188);
    in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x198);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x1a0);
    if (*(long *)(unaff_x19 + 0x2b0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2b8));
    }
    *(undefined2 *)(unaff_x19 + 0x23d8) = 0;
    *(undefined8 *)(unaff_x19 + 0x23d0) = 0;
    uVar6 = *(ulong *)(unaff_x19 + 0x158);
    uVar14 = 1;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar15 = *(undefined8 *)(unaff_x29 + -0x68);
    lVar11 = *(long *)(unaff_x19 + 0x278);
    lVar12 = *(long *)(unaff_x19 + 0x280);
joined_r0x000101673784:
    if (lVar12 != 0) {
      puVar9 = (undefined8 *)(lVar11 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (*(long *)(unaff_x19 + 0x270) != 0) {
      _free(lVar11);
    }
    unaff_x25[0x28] = 0;
    lVar11 = *(long *)(unaff_x19 + 0x260);
    lVar12 = *(long *)(unaff_x19 + 0x268);
    if (lVar12 != 0) {
      puVar9 = (undefined8 *)(lVar11 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (*unaff_x24 != 0) {
      _free(lVar11);
    }
    unaff_x25[0x29] = 0;
    if (*(long *)(unaff_x19 + 0x240) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x248));
    }
    unaff_x25[0x2a] = 0;
    uVar10 = 0;
    if (*(long *)(unaff_x19 + 0x210) != -0x8000000000000000) {
      if (*(long *)(unaff_x19 + 0x210) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x218));
      }
      if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x228) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x230));
      }
    }
    unaff_x25[0x2b] = 0;
    uVar6 = *unaff_x21;
    bVar3 = uVar6 != 0x8000000000000000;
    if (uVar6 < 0x8000000000000001) {
      uVar6 = 0;
    }
    if ((bVar3) && ((uVar6 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780();
    }
    unaff_x25[0x2c] = 0;
    if ((*(long *)(unaff_x19 + 0x1d0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x1d0) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x1d8));
    }
    unaff_x25[0x2d] = 0;
    if (*unaff_x26 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1c0));
    }
    unaff_x25[0x2e] = 0;
    if (*(long *)(unaff_x19 + 0x1a0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1a8));
    }
    unaff_x25[0x2f] = 0;
    uVar5 = 0;
    if ((*in_stack_00000018 != -0x8000000000000000) && (*in_stack_00000018 != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 400));
    }
    unaff_x25[0x30] = 0;
    if ((*(long *)(unaff_x19 + 0x170) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x170) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x178));
    }
    unaff_x25[0x31] = 0;
    uVar6 = *in_stack_00000020;
    uVar14 = 2;
  }
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x160));
  }
  *unaff_x20 = uVar14;
  unaff_x20[1] = lVar7;
  unaff_x20[2] = uVar8;
  unaff_x20[3] = uVar15;
  unaff_x20[5] = in_stack_000001e8;
  unaff_x20[4] = in_stack_000001e0;
  unaff_x20[7] = in_stack_000001c8;
  unaff_x20[6] = in_stack_000001c0;
  unaff_x20[8] = in_stack_000001d0;
  unaff_x20[10] = in_stack_000001a8;
  unaff_x20[9] = in_stack_000001a0;
  unaff_x20[0xb] = in_stack_000001b0;
  unaff_x20[0xe] = in_stack_00000190;
  unaff_x20[0xd] = in_stack_00000188;
  unaff_x20[0xc] = in_stack_00000180;
  unaff_x20[0x10] = in_stack_00000168;
  unaff_x20[0xf] = in_stack_00000160;
  unaff_x20[0x11] = in_stack_00000170;
  unaff_x20[0x12] = 0x8000000000000000;
  unaff_x20[0x17] = in_stack_00000158;
  unaff_x20[0x16] = in_stack_00000150;
  unaff_x20[0x15] = in_stack_00000148;
  unaff_x20[0x14] = in_stack_00000140;
  unaff_x20[0x13] = in_stack_00000138;
  unaff_x20[0x1a] = in_stack_00000130;
  unaff_x20[0x19] = in_stack_00000128;
  unaff_x20[0x18] = in_stack_00000120;
  unaff_x20[0x20] = in_stack_00000118;
  unaff_x20[0x1f] = in_stack_00000110;
  unaff_x20[0x1e] = in_stack_00000108;
  unaff_x20[0x1d] = in_stack_00000100;
  unaff_x20[0x1c] = in_stack_000000f8;
  unaff_x20[0x1b] = in_stack_000000f0;
  unaff_x20[0x21] = 0x8000000000000000;
  unaff_x20[0x27] = in_stack_000000d8;
  unaff_x20[0x26] = in_stack_000000d0;
  unaff_x20[0x29] = in_stack_000000e8;
  unaff_x20[0x28] = in_stack_000000e0;
  unaff_x20[0x23] = in_stack_000000b8;
  unaff_x20[0x22] = in_stack_000000b0;
  unaff_x20[0x25] = in_stack_000000c8;
  unaff_x20[0x24] = in_stack_000000c0;
  unaff_x20[0x2e] = in_stack_000000a0;
  unaff_x20[0x2b] = in_stack_00000088;
  unaff_x20[0x2a] = in_stack_00000080;
  unaff_x20[0x2d] = in_stack_00000098;
  unaff_x20[0x2c] = in_stack_00000090;
  unaff_x20[0x30] = in_stack_00000078;
  unaff_x20[0x2f] = in_stack_00000070;
  unaff_x20[0x31] = 0;
  *(undefined1 *)(unaff_x20 + 0x34) = in_stack_00000060;
  unaff_x20[0x33] = in_stack_00000058;
  unaff_x20[0x32] = in_stack_00000050;
  *(undefined1 *)((long)unaff_x20 + 0x1a1) = uVar5;
  *(char *)((long)unaff_x20 + 0x1a2) = (char)unaff_x24;
  *(undefined1 *)((long)unaff_x20 + 0x1a7) = uStack000000000000004c;
  *(undefined4 *)((long)unaff_x20 + 0x1a3) = uStack0000000000000048;
  uVar5 = 1;
  *(undefined1 *)(unaff_x20 + 0x35) = uVar10;
LAB_101674094:
  unaff_x25[9] = uVar5;
  return;
}

