
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b154c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puVar13;
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
  short sVar14;
  undefined4 uVar15;
  undefined2 uVar16;
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
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar9 = *unaff_x23;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000540);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar9,puVar2,puVar1,&stack0x00000540,unaff_x29 + -0xc0);
    }
  }
  puVar11 = *(undefined8 **)(unaff_x29 + -200);
  FUN_101509bc8(unaff_x19 + 0x110);
  puVar12 = puVar11;
  if (((ulong)puVar11 & 3) == 1) {
    puVar12 = (undefined8 *)((long)puVar11 + -1);
    uVar9 = *puVar12;
    puVar13 = *(undefined8 **)((long)puVar11 + 7);
    pcVar7 = (code *)*puVar13;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar9);
    }
    if (puVar13[1] != 0) {
      _free(uVar9);
    }
    _free(puVar12);
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
  sVar14 = (short)puVar11;
  if (sVar14 == 3) {
    unaff_x20[0x11] = 0x8000000000000001;
    uVar6 = 3;
  }
  else {
    uVar15 = (undefined4)((ulong)puVar11 >> 0x10);
    uVar16 = (undefined2)((ulong)puVar11 >> 0x30);
    uVar9 = CONCAT71(in_stack_00000339,in_stack_00000338);
    FUN_100ce0e38(unaff_x19 + 0x2d8);
    if (sVar14 == 2) {
      uVar5 = thunk_FUN_1087e3af8(in_stack_000002d8);
      FUN_100e4119c(unaff_x19 + 0x110);
      uVar10 = 0x8000000000000000;
      uVar8 = in_stack_000002d8;
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
      uVar9 = in_stack_000005e0;
      in_stack_00000340 = in_stack_000005e8;
      in_stack_00000348 = in_stack_000005f0;
      in_stack_00000350 = in_stack_000005f8;
    }
    else {
      lVar3 = *in_stack_00000310;
      *in_stack_00000310 = lVar3 + 1;
      uStack000000000000011a = uVar15;
      uStack000000000000011e = uVar16;
      if ((((lVar3 < 0) || (lVar3 = *in_stack_00000318, *in_stack_00000318 = lVar3 + 1, lVar3 < 0))
          || ((in_stack_00000320 != (long *)0x0 &&
              (lVar3 = *in_stack_00000320, *in_stack_00000320 = lVar3 + 1, lVar3 < 0)))) ||
         ((in_stack_00000328 != (long *)0x0 &&
          (lVar3 = *in_stack_00000328, *in_stack_00000328 = lVar3 + 1, lVar3 < 0)))) {
LAB_1005b1ba8:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1005b1bac);
        (*pcVar7)();
      }
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(undefined8 *)(unaff_x29 + -0x70) = 1;
      *(undefined8 *)(unaff_x29 + -0x68) = 0;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x78;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b209290;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x60000020;
      if (((ulong)puVar11 & 1) == 0) {
        iVar4 = __ZN75__LT_core__net__socket_addr__SocketAddrV4_u20_as_u20_core__fmt__Display_GT_3fmt17h7a4ef85fe2ccaa0dE
                          ((ulong)&stack0x00000540 | 2,unaff_x29 + -0xc0);
      }
      else {
        iVar4 = __ZN75__LT_core__net__socket_addr__SocketAddrV6_u20_as_u20_core__fmt__Display_GT_3fmt17h32565f71722b9b9aE
                          ((ulong)&stack0x00000540 | 4,unaff_x29 + -0xc0);
      }
      if (iVar4 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,unaff_x29 + -0xa0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1005b1ba8;
      }
      uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
      puVar12 = *(undefined8 **)(unaff_x29 + -0x68);
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
        iVar4 = __ZN75__LT_core__net__socket_addr__SocketAddrV4_u20_as_u20_core__fmt__Display_GT_3fmt17h7a4ef85fe2ccaa0dE
                          (unaff_x29 - 0xc0U | 2,unaff_x29 + -0x78);
      }
      else {
        iVar4 = __ZN75__LT_core__net__socket_addr__SocketAddrV6_u20_as_u20_core__fmt__Display_GT_3fmt17h32565f71722b9b9aE
                          (unaff_x29 - 0xc0U | 4,unaff_x29 + -0x78);
      }
      if (iVar4 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,unaff_x29 + -0xa0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1005b1ba8;
      }
      in_stack_00000568 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_00000560 = *(undefined8 *)(unaff_x29 + -0x90);
      in_stack_00000570 = *(undefined8 *)(unaff_x29 + -0x80);
      FUN_100e0f38c(&stack0x000002d0);
      uVar5 = CONCAT26(uStack000000000000011e,CONCAT42(uStack000000000000011a,sVar14));
      FUN_100e4119c(unaff_x19 + 0x110);
    }
    unaff_x20[10] = in_stack_00000320;
    unaff_x20[9] = in_stack_00000318;
    unaff_x20[0xc] = in_stack_00000330;
    unaff_x20[0xb] = in_stack_00000328;
    unaff_x20[0xe] = in_stack_00000340;
    unaff_x20[0xd] = uVar9;
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
    *unaff_x20 = uVar5;
    unaff_x20[8] = in_stack_00000310;
    unaff_x20[7] = in_stack_00000308;
    unaff_x20[0x11] = uVar10;
    unaff_x20[0x12] = uVar8;
    unaff_x20[0x13] = puVar12;
    unaff_x20[0x15] = in_stack_00000568;
    unaff_x20[0x14] = in_stack_00000560;
    uVar6 = 1;
    unaff_x20[0x16] = in_stack_00000570;
  }
  *(undefined1 *)(unaff_x19 + 0xa51) = uVar6;
  return;
}

