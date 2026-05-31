
void FUN_1008b87f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  code *pcVar9;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long *in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined1 *in_stack_00000050;
  code *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
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
  ulong in_stack_00004c58;
  long in_stack_00004c60;
  undefined8 in_stack_00004c68;
  undefined8 in_stack_000071d0;
  undefined8 in_stack_000071d8;
  undefined8 in_stack_000071e0;
  
code_r0x0001008b87f4:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000071d0,s__failed_to_queue_MCP_refresh_for_108ac9ad6,&stack0x00007210);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar3 = in_stack_000071d0;
    puVar3[1] = in_stack_000071d8;
    puVar3[2] = in_stack_000071e0;
    plVar4 = (long *)_malloc(0x18);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)puVar3;
      plVar4[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar4 + 2) = 0x28;
      FUN_100df5738(&stack0x00004c58);
      uVar10 = (long)plVar4 + 1;
      *(undefined1 *)(unaff_x19 + 0xec1) = 0;
      lVar2 = **(long **)(unaff_x19 + 0x1d8);
      **(long **)(unaff_x19 + 0x1d8) = lVar2 + -1;
      LORelease();
      if (lVar2 != 1) goto LAB_1008b888c;
LAB_1008b8880:
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x1d8);
LAB_1008b888c:
      bVar7 = false;
      *unaff_x20 = 1;
      while( true ) {
        if (bVar7) {
          *in_stack_00000010 = 8;
          *in_stack_00000018 = 3;
          goto LAB_1008b92a0;
        }
        FUN_100e76e94(unaff_x22);
        if (uVar10 != 0) {
          FUN_100d9a1e8(unaff_x19 + 0xec8);
          if ((*(byte *)(unaff_x19 + 0x70) & 1) != 0) {
            lVar1 = *(long *)(unaff_x19 + 0x48);
            lVar2 = *(long *)(unaff_x19 + 0x50) + 1;
            lVar5 = lVar1;
            while (lVar2 = lVar2 + -1, lVar2 != 0) {
              FUN_100d7f9ac(lVar5);
              lVar5 = lVar5 + 0xa8;
            }
            if (*(long *)(unaff_x19 + 0x40) != 0) {
              _free(lVar1);
            }
          }
          goto LAB_1008b9280;
        }
        puVar3 = *(undefined8 **)(unaff_x19 + 0xed0);
        if (puVar3 == *(undefined8 **)(unaff_x19 + 0xee0)) break;
        *(undefined8 **)(unaff_x19 + 0xed0) = puVar3 + 0x15;
        uVar11 = puVar3[1];
        uVar6 = *puVar3;
        uVar12 = puVar3[2];
        uVar14 = puVar3[5];
        uVar13 = puVar3[4];
        *(undefined8 *)(unaff_x19 + 0x90) = puVar3[3];
        *(undefined8 *)(unaff_x19 + 0x88) = uVar12;
        *(undefined8 *)(unaff_x19 + 0xa0) = uVar14;
        *(undefined8 *)(unaff_x19 + 0x98) = uVar13;
        uVar13 = puVar3[7];
        uVar12 = puVar3[6];
        uVar15 = puVar3[9];
        uVar14 = puVar3[8];
        uVar16 = puVar3[10];
        uVar18 = puVar3[0xd];
        uVar17 = puVar3[0xc];
        *(undefined8 *)(unaff_x19 + 0xd0) = puVar3[0xb];
        *(undefined8 *)(unaff_x19 + 200) = uVar16;
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar18;
        *(undefined8 *)(unaff_x19 + 0xd8) = uVar17;
        *(undefined8 *)(unaff_x19 + 0xb0) = uVar13;
        *(undefined8 *)(unaff_x19 + 0xa8) = uVar12;
        *(undefined8 *)(unaff_x19 + 0xc0) = uVar15;
        *(undefined8 *)(unaff_x19 + 0xb8) = uVar14;
        uVar13 = puVar3[0xf];
        uVar12 = puVar3[0xe];
        uVar15 = puVar3[0x11];
        uVar14 = puVar3[0x10];
        uVar17 = puVar3[0x13];
        uVar16 = puVar3[0x12];
        *(undefined8 *)(unaff_x19 + 0x118) = puVar3[0x14];
        *(undefined8 *)(unaff_x19 + 0x100) = uVar15;
        *(undefined8 *)(unaff_x19 + 0xf8) = uVar14;
        *(undefined8 *)(unaff_x19 + 0x110) = uVar17;
        *(undefined8 *)(unaff_x19 + 0x108) = uVar16;
        *(undefined8 *)(unaff_x19 + 0xf0) = uVar13;
        *(undefined8 *)(unaff_x19 + 0xe8) = uVar12;
        *(undefined8 *)(unaff_x19 + 0x80) = uVar11;
        *(undefined8 *)(unaff_x19 + 0x78) = uVar6;
        if (*(long *)(unaff_x19 + 0x90) == unaff_x27) goto LAB_1008b88c8;
        uVar12 = puVar3[2];
        uVar6 = puVar3[1];
        lVar2 = *(long *)(unaff_x19 + 0x78);
        unaff_x22 = (undefined8 *)(unaff_x19 + 0x120);
        uVar13 = puVar3[0x14];
        uVar11 = puVar3[0x13];
        uVar15 = puVar3[0x12];
        uVar14 = puVar3[0x11];
        uVar17 = puVar3[0x10];
        uVar16 = puVar3[0xf];
        uVar19 = puVar3[0xe];
        uVar18 = puVar3[0xd];
        uVar21 = puVar3[0xc];
        uVar20 = puVar3[0xb];
        uVar23 = puVar3[10];
        uVar22 = puVar3[9];
        uVar25 = puVar3[8];
        uVar24 = puVar3[7];
        uVar27 = puVar3[6];
        uVar26 = puVar3[5];
        uVar28 = puVar3[3];
        *(undefined8 *)(unaff_x19 + 0x128) = puVar3[4];
        *(undefined8 *)(unaff_x19 + 0x120) = uVar28;
        *(undefined8 *)(unaff_x19 + 0x138) = uVar27;
        *(undefined8 *)(unaff_x19 + 0x130) = uVar26;
        *(undefined8 *)(unaff_x19 + 0x148) = uVar25;
        *(undefined8 *)(unaff_x19 + 0x140) = uVar24;
        *(undefined8 *)(unaff_x19 + 0x158) = uVar23;
        *(undefined8 *)(unaff_x19 + 0x150) = uVar22;
        *(undefined8 *)(unaff_x19 + 0x168) = uVar21;
        *(undefined8 *)(unaff_x19 + 0x160) = uVar20;
        *(undefined8 *)(unaff_x19 + 0x178) = uVar19;
        *(undefined8 *)(unaff_x19 + 0x170) = uVar18;
        *(undefined8 *)(unaff_x19 + 0x188) = uVar17;
        *(undefined8 *)(unaff_x19 + 0x180) = uVar16;
        *(undefined8 *)(unaff_x19 + 0x198) = uVar15;
        *(undefined8 *)(unaff_x19 + 400) = uVar14;
        *(undefined8 *)(unaff_x19 + 0x1a8) = uVar13;
        *(undefined8 *)(unaff_x19 + 0x1a0) = uVar11;
        *(long *)(unaff_x19 + 0x1b0) = lVar2;
        *(undefined8 *)(unaff_x19 + 0x1c0) = uVar12;
        *(undefined8 *)(unaff_x19 + 0x1b8) = uVar6;
        unaff_x20 = (undefined1 *)(unaff_x19 + 0xec0);
        *(undefined1 *)(unaff_x19 + 0xec0) = 0;
        uVar6 = *unaff_x21;
        *(undefined8 *)(unaff_x19 + 0x1d0) = *(undefined8 *)(unaff_x19 + 0x1c0);
        *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x19 + 0x1b8);
        in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x188);
        in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x180);
        in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0x198);
        in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 400);
        in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x1a8);
        in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0x1a0);
        in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x148);
        in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x140);
        in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x158);
        in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x150);
        in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x168);
        in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x160);
        in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x178);
        in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x170);
        in_stack_00000058 = *(code **)(unaff_x19 + 0x128);
        in_stack_00000050 = (undefined1 *)*unaff_x22;
        in_stack_00000068 = *(undefined8 *)(unaff_x19 + 0x138);
        in_stack_00000060 = *(undefined8 *)(unaff_x19 + 0x130);
        *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x188);
        *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x180);
        *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x19 + 0x198);
        *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 400);
        *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 0x1a8);
        *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x1a0);
        *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x148);
        *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x140);
        *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x158);
        *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x150);
        *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x168);
        *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x160);
        *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x178);
        *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 0x170);
        *(undefined1 *)(unaff_x19 + 0xec1) = 0;
        *(long *)(unaff_x19 + 0x1d8) = lVar2;
        *(long *)(unaff_x19 + 0x1e0) = unaff_x27 + 0xb;
        *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x128);
        *(undefined8 *)(unaff_x19 + 0x1e8) = *unaff_x22;
        *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x138);
        *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x130);
        *(long *)(unaff_x19 + 0x3c8) = lVar2 + 0x10;
        *(undefined1 *)(unaff_x19 + 0xeb8) = 0;
        lVar2 = unaff_x19 + 0x1e0;
        FUN_1004f3438(&stack0x00004c58,lVar2,uVar6);
        if (in_stack_00004c58 != unaff_x27 + 0x1cU) goto LAB_1008b86ec;
        *unaff_x20 = 3;
        bVar7 = true;
        uVar10 = in_stack_00004c58;
      }
      *(long *)(unaff_x19 + 0x90) = unaff_x27;
LAB_1008b88c8:
      FUN_100d9a1e8(unaff_x19 + 0xec8);
      uVar10 = 0;
LAB_1008b9280:
      *(undefined1 *)(unaff_x19 + 0x70) = 0;
      *in_stack_00000010 = 1;
      FUN_100c9a120();
      if (uVar10 == 0) {
LAB_1008b90b8:
        *in_stack_00000018 = 1;
        lVar2 = unaff_x27 + 0x47;
        in_stack_00004c58 = 0x8000000000000000;
      }
      else {
        in_stack_00000050 = &stack0x00002598;
        in_stack_00000058 =
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00004c58,s_failed_to_refresh_MCP_servers__108aca310,&stack0x00000050);
        in_stack_00000058 = *(code **)(unaff_x28 + 0x10);
        in_stack_00000050 = *(undefined1 **)(unaff_x28 + 8);
        if ((uVar10 & 3) == 1) {
          uVar6 = *(undefined8 *)(uVar10 - 1);
          puVar3 = *(undefined8 **)(uVar10 + 7);
          pcVar9 = (code *)*puVar3;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar6);
          }
          if (puVar3[1] != 0) {
            _free(uVar6);
          }
          _free((undefined8 *)(uVar10 - 1));
        }
        if (in_stack_00004c58 == 0x8000000000000000) goto LAB_1008b90b8;
        *in_stack_00000018 = 1;
        if (in_stack_00004c58 == 0x8000000000000001) {
LAB_1008b92a0:
          *in_stack_00000008 = unaff_x27 + 0x6c;
          uVar8 = 3;
          goto LAB_1008b92b0;
        }
        lVar2 = unaff_x27 + 0x6b;
        in_stack_00000030 = (long)in_stack_00000050;
        in_stack_00000038 = (long)in_stack_00000058;
      }
      *in_stack_00000008 = lVar2;
      in_stack_00000008[1] = in_stack_00004c58;
      in_stack_00000008[3] = in_stack_00000038;
      in_stack_00000008[2] = in_stack_00000030;
      in_stack_00000008[4] = unaff_x27;
      in_stack_00000008[0xd] = -0x7f5b;
      uVar8 = 1;
LAB_1008b92b0:
      in_stack_00000018[0x10] = uVar8;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1008b8550);
  (*pcVar9)();
LAB_1008b86ec:
  uVar6 = *(undefined8 *)(unaff_x28 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x68);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x28 + 0x60);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar11;
  uVar6 = *(undefined8 *)(unaff_x28 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x88);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x28 + 0x80);
  *(undefined8 *)(unaff_x29 + -0x80) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar11;
  uVar6 = *(undefined8 *)(unaff_x28 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x28);
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x28 + 0x20);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
  *(undefined8 *)(unaff_x29 + -200) = uVar12;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar11;
  uVar6 = *(undefined8 *)(unaff_x28 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x48);
  *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x28 + 0x40);
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar6;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar12;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar11;
  if (*(char *)(unaff_x19 + 0xeb8) != '\0') {
    if (*(char *)(unaff_x19 + 0xeb8) != '\x03') goto LAB_1008b8750;
    if (*(char *)(unaff_x19 + 0xeb0) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x5c0);
      goto LAB_1008b8750;
    }
    if (*(char *)(unaff_x19 + 0xeb0) != '\0') goto LAB_1008b8750;
    lVar2 = unaff_x19 + 0x3d0;
  }
  FUN_100def028(lVar2);
LAB_1008b8750:
  if (in_stack_00004c58 != unaff_x27 + 0x1bU) {
    uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x28 + 0x60) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x28 + 0x58) = uVar6;
    *(undefined8 *)(unaff_x28 + 0x70) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x68) = uVar11;
    uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x68);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x28 + 0x78) = uVar6;
    *(undefined8 *)(unaff_x28 + 0x90) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x88) = uVar11;
    uVar6 = *(undefined8 *)(unaff_x29 + -0xe0);
    uVar12 = *(undefined8 *)(unaff_x29 + -200);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xd0);
    *(undefined8 *)(unaff_x28 + 0x20) = *(undefined8 *)(unaff_x29 + -0xd8);
    *(undefined8 *)(unaff_x28 + 0x18) = uVar6;
    *(undefined8 *)(unaff_x28 + 0x30) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x28) = uVar11;
    uVar6 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x28 + 0x38) = uVar6;
    *(undefined8 *)(unaff_x28 + 0x50) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x48) = uVar11;
    goto code_r0x0001008b87f4;
  }
  if (in_stack_00004c60 != 0) {
    _free(in_stack_00004c68);
  }
  uVar10 = 0;
  *(undefined1 *)(unaff_x19 + 0xec1) = 0;
  lVar2 = **(long **)(unaff_x19 + 0x1d8);
  **(long **)(unaff_x19 + 0x1d8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) goto LAB_1008b8880;
  goto LAB_1008b888c;
}

