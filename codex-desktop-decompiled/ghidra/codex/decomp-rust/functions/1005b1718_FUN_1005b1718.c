
void FUN_1005b1718(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puVar11;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
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
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 uStack000000000000011a;
  undefined2 uStack000000000000011e;
  short sVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  long *in_stack_00000310;
  long *in_stack_00000318;
  long *in_stack_00000320;
  long *in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined1 in_stack_00000338;
  undefined7 in_stack_00000339;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  long *in_stack_000005b8;
  long *in_stack_000005c0;
  long *in_stack_000005c8;
  long *in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  
  *(char **)(unaff_x29 + -0x90) = s_ffailed_to_apply_execpolicy_netw_108ac1a4b;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar9 = *(undefined8 **)(unaff_x29 + -200);
  FUN_101509bc8(unaff_x19 + 0x110);
  puVar10 = puVar9;
  if (((ulong)puVar9 & 3) == 1) {
    puVar10 = (undefined8 *)((long)puVar9 + -1);
    uVar7 = *puVar10;
    puVar11 = *(undefined8 **)((long)puVar9 + 7);
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar11[1] != 0) {
      _free(uVar7);
    }
    _free(puVar10);
  }
  *(undefined1 *)(unaff_x19 + 0xa54) = 0;
  *(undefined2 *)(unaff_x19 + 0xa52) = 0;
  *(undefined8 *)(unaff_x19 + 0x380) = in_stack_000000e8;
  *(undefined8 *)(unaff_x19 + 0x378) = in_stack_000000e0;
  *(undefined8 *)(unaff_x19 + 0x390) = in_stack_000000f8;
  *(undefined8 *)(unaff_x19 + 0x388) = in_stack_000000f0;
  *(undefined8 *)(unaff_x19 + 0x3a0) = in_stack_00000108;
  *(undefined8 *)(unaff_x19 + 0x398) = in_stack_00000100;
  *(undefined8 *)(unaff_x19 + 0x3a8) = in_stack_00000110;
  *(undefined8 *)(unaff_x19 + 0x340) = in_stack_000000a8;
  *(undefined8 *)(unaff_x19 + 0x338) = in_stack_000000a0;
  *(undefined8 *)(unaff_x19 + 0x350) = in_stack_000000b8;
  *(undefined8 *)(unaff_x19 + 0x348) = in_stack_000000b0;
  *(undefined8 *)(unaff_x19 + 0x360) = in_stack_000000c8;
  *(undefined8 *)(unaff_x19 + 0x358) = in_stack_000000c0;
  *(undefined8 *)(unaff_x19 + 0x370) = in_stack_000000d8;
  *(undefined8 *)(unaff_x19 + 0x368) = in_stack_000000d0;
  *(undefined8 *)(unaff_x19 + 0x300) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x2f8) = in_stack_00000060;
  *(undefined8 *)(unaff_x19 + 0x310) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0x308) = in_stack_00000070;
  *(undefined8 *)(unaff_x19 + 800) = in_stack_00000088;
  *(undefined8 *)(unaff_x19 + 0x318) = in_stack_00000080;
  *(undefined8 *)(unaff_x19 + 0x330) = in_stack_00000098;
  *(undefined8 *)(unaff_x19 + 0x328) = in_stack_00000090;
  *(undefined8 *)(unaff_x19 + 0x2e0) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x2d8) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x2f0) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x2e8) = in_stack_00000050;
  *(long *)(unaff_x19 + 0x3b0) = unaff_x19 + 0x110;
  *(undefined8 *)(unaff_x19 + 0x3b8) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x3c0) = unaff_x28;
  *(undefined8 *)(unaff_x19 + 0x3c8) = unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x3d0) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x3d8) = unaff_x26;
  *(undefined1 *)(unaff_x19 + 0x400) = in_stack_00000008._4_1_;
  *(undefined1 *)(unaff_x19 + 0x401) = 0;
  FUN_10055d678(&stack0x000002d0,unaff_x19 + 0x2d8);
  sVar12 = (short)puVar9;
  if (sVar12 == 3) {
    unaff_x20[0x11] = 0x8000000000000001;
    uVar4 = 3;
  }
  else {
    uVar13 = (undefined4)((ulong)puVar9 >> 0x10);
    uVar14 = (undefined2)((ulong)puVar9 >> 0x30);
    uVar7 = CONCAT71(in_stack_00000339,in_stack_00000338);
    FUN_100ce0e38(unaff_x19 + 0x2d8);
    if (sVar12 == 2) {
      uVar3 = thunk_FUN_1087e3af8(in_stack_000002d8);
      FUN_100e4119c(unaff_x19 + 0x110);
      uVar8 = 0x8000000000000000;
      uVar6 = in_stack_000002d8;
      in_stack_000002d8 = in_stack_00000580;
      in_stack_000002e0 = in_stack_00000588;
      in_stack_000002e8 = in_stack_00000590;
      in_stack_000002f0 = in_stack_00000598;
      in_stack_000002f8 = in_stack_000005a0;
      in_stack_00000300 = in_stack_000005a8;
      in_stack_00000308 = in_stack_000005b0;
      in_stack_00000310 = in_stack_000005b8;
      in_stack_00000318 = in_stack_000005c0;
      in_stack_00000320 = in_stack_000005c8;
      in_stack_00000328 = in_stack_000005d0;
      in_stack_00000330 = in_stack_000005d8;
      uVar7 = in_stack_000005e0;
      in_stack_00000340 = in_stack_000005e8;
      in_stack_00000348 = in_stack_000005f0;
      in_stack_00000350 = in_stack_000005f8;
    }
    else {
      lVar1 = *in_stack_00000310;
      *in_stack_00000310 = lVar1 + 1;
      uStack000000000000011a = uVar13;
      uStack000000000000011e = uVar14;
      if ((((lVar1 < 0) || (lVar1 = *in_stack_00000318, *in_stack_00000318 = lVar1 + 1, lVar1 < 0))
          || ((in_stack_00000320 != (long *)0x0 &&
              (lVar1 = *in_stack_00000320, *in_stack_00000320 = lVar1 + 1, lVar1 < 0)))) ||
         ((in_stack_00000328 != (long *)0x0 &&
          (lVar1 = *in_stack_00000328, *in_stack_00000328 = lVar1 + 1, lVar1 < 0)))) {
LAB_1005b1ba8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1005b1bac);
        (*pcVar5)();
      }
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(undefined8 *)(unaff_x29 + -0x70) = 1;
      *(undefined8 *)(unaff_x29 + -0x68) = 0;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x78;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b209290;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x60000020;
      if (((ulong)puVar9 & 1) == 0) {
        iVar2 = __ZN75__LT_core__net__socket_addr__SocketAddrV4_u20_as_u20_core__fmt__Display_GT_3fmt17h7a4ef85fe2ccaa0dE
                          ((ulong)&stack0x00000540 | 2,unaff_x29 + -0xc0);
      }
      else {
        iVar2 = __ZN75__LT_core__net__socket_addr__SocketAddrV6_u20_as_u20_core__fmt__Display_GT_3fmt17h32565f71722b9b9aE
                          ((ulong)&stack0x00000540 | 4,unaff_x29 + -0xc0);
      }
      if (iVar2 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,unaff_x29 + -0xa0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1005b1ba8;
      }
      uVar8 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
      puVar10 = *(undefined8 **)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_000002f8;
      *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_000002f0;
      *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000308;
      *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000300;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(undefined8 *)(unaff_x29 + -0x88) = 1;
      *(undefined4 *)(unaff_x29 + -0x68) = 0x60000020;
      *(undefined4 *)(unaff_x29 + -100) = 0;
      *(undefined8 *)(unaff_x29 + -0x80) = 0;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
      *(undefined **)(unaff_x29 + -0x70) = &UNK_10b209290;
      if ((*(ushort *)(unaff_x29 + -0xc0) & 1) == 0) {
        iVar2 = __ZN75__LT_core__net__socket_addr__SocketAddrV4_u20_as_u20_core__fmt__Display_GT_3fmt17h7a4ef85fe2ccaa0dE
                          (unaff_x29 - 0xc0U | 2,unaff_x29 + -0x78);
      }
      else {
        iVar2 = __ZN75__LT_core__net__socket_addr__SocketAddrV6_u20_as_u20_core__fmt__Display_GT_3fmt17h32565f71722b9b9aE
                          (unaff_x29 - 0xc0U | 4,unaff_x29 + -0x78);
      }
      if (iVar2 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,unaff_x29 + -0xa0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1005b1ba8;
      }
      in_stack_00000568 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_00000560 = *(undefined8 *)(unaff_x29 + -0x90);
      in_stack_00000570 = *(undefined8 *)(unaff_x29 + -0x80);
      FUN_100e0f38c(&stack0x000002d0);
      uVar3 = CONCAT26(uStack000000000000011e,CONCAT42(uStack000000000000011a,sVar12));
      FUN_100e4119c(unaff_x19 + 0x110);
    }
    unaff_x20[10] = in_stack_00000320;
    unaff_x20[9] = in_stack_00000318;
    unaff_x20[0xc] = in_stack_00000330;
    unaff_x20[0xb] = in_stack_00000328;
    unaff_x20[0xe] = in_stack_00000340;
    unaff_x20[0xd] = uVar7;
    unaff_x20[0x10] = in_stack_00000350;
    unaff_x20[0xf] = in_stack_00000348;
    unaff_x20[2] = in_stack_000002e0;
    unaff_x20[1] = in_stack_000002d8;
    unaff_x20[4] = in_stack_000002f0;
    unaff_x20[3] = in_stack_000002e8;
    unaff_x20[6] = in_stack_00000300;
    unaff_x20[5] = in_stack_000002f8;
    *(undefined2 *)(unaff_x19 + 0xa52) = 0;
    *(undefined1 *)(unaff_x19 + 0xa54) = 0;
    *unaff_x20 = uVar3;
    unaff_x20[8] = in_stack_00000310;
    unaff_x20[7] = in_stack_00000308;
    unaff_x20[0x11] = uVar8;
    unaff_x20[0x12] = uVar6;
    unaff_x20[0x13] = puVar10;
    unaff_x20[0x15] = in_stack_00000568;
    unaff_x20[0x14] = in_stack_00000560;
    uVar4 = 1;
    unaff_x20[0x16] = in_stack_00000570;
  }
  *(undefined1 *)(unaff_x19 + 0xa51) = uVar4;
  return;
}

