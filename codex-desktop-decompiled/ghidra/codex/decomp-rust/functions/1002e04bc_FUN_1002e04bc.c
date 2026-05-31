
/* WARNING: Removing unreachable block (ram,0x0001002e07f8) */

undefined8 FUN_1002e04bc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 uStack0000000000000150;
  undefined1 *puStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  long lStack0000000000000170;
  undefined *puStack0000000000000178;
  
  *(char **)(unaff_x29 + -0x100) = s_background_connect_error__108ab8f6b;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xf0;
  lStack0000000000000170 = unaff_x29 + -0x100;
  puStack0000000000000178 = &UNK_10b1f3630;
  puStack0000000000000158 = (undefined1 *)&stack0x00000170;
  uStack0000000000000150 = 1;
  uStack0000000000000160 = 1;
  lVar6 = *(long *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = 1;
  if (lVar3 == 0) {
    uVar7 = 2;
  }
  uVar1 = *(undefined4 *)(unaff_x22 + 8);
  uVar2 = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000150;
  *(undefined1 *)(unaff_x29 + -0x58) = 1;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
  uVar10 = 1;
  if (lVar6 == 0) {
    uVar10 = 2;
  }
  *(undefined8 *)(unaff_x23 + 0x158) = in_stack_00000140;
  *(undefined8 *)(unaff_x23 + 0x150) = in_stack_00000138;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000148;
  *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x50;
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar7;
  *(long *)(unaff_x29 + -0xd8) = lVar3;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar9;
  *(undefined8 *)(unaff_x29 + -200) = uVar10;
  *(long *)(unaff_x29 + -0xc0) = lVar6;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
  *(undefined4 *)(unaff_x29 + -0x98) = uVar1;
  *(undefined4 *)(unaff_x29 + -0x94) = uVar2;
  uStack0000000000000168 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  func_0x0001002c16d4(&stack0x00000100);
  *(undefined8 *)(unaff_x23 + 0x38) = in_stack_00000048;
  *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000040;
  *(undefined8 *)(unaff_x23 + 0x48) = in_stack_00000058;
  *(undefined8 *)(unaff_x23 + 0x40) = in_stack_00000050;
  *(undefined8 *)(unaff_x23 + 0x58) = in_stack_00000068;
  *(undefined8 *)(unaff_x23 + 0x50) = in_stack_00000060;
  *(undefined8 *)(unaff_x23 + 0x68) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x60) = in_stack_00000070;
  uVar5 = *unaff_x19;
  *(undefined8 *)(unaff_x23 + 0x18) = in_stack_00000028;
  *(undefined8 *)(unaff_x23 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x23 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x23 + 0x20) = in_stack_00000030;
  in_stack_000000f0 = CONCAT31(in_stack_000000f0._1_3_,2);
  uStack00000000000000f4 = (undefined4)((ulong)_uStack0000000000000008 >> 0x18);
  *(undefined4 *)(unaff_x23 + 0x71) = uStack0000000000000008;
  if (uVar5 != 9) {
    if (uVar5 == 10) {
      *unaff_x19 = 10;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c74191,0x28,&UNK_10b1f3478);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e0874);
      (*pcVar4)();
    }
    lVar6 = uVar5 - 6;
    if (uVar5 < 6) {
      lVar6 = 1;
    }
    if (lVar6 == 1) {
      if (uVar5 == 5) {
        if ((char)unaff_x19[0xf] == '\x02') {
          func_0x0001002c16d4(unaff_x19 + 1);
        }
        else if ((char)unaff_x19[0xf] != '\x03') {
          FUN_1002b9630(unaff_x19 + 1);
        }
      }
      else {
        FUN_1002b84e8();
      }
    }
    else if (lVar6 == 0) {
      FUN_1002bc870(unaff_x19 + 1);
    }
  }
  uVar10 = *(undefined8 *)(unaff_x23 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x23 + 0x30);
  *(undefined8 *)(unaff_x23 + 0x168) = *(undefined8 *)(unaff_x23 + 0x48);
  *(undefined8 *)(unaff_x23 + 0x160) = *(undefined8 *)(unaff_x23 + 0x40);
  *(undefined8 *)(unaff_x23 + 0x178) = *(undefined8 *)(unaff_x23 + 0x58);
  *(undefined8 *)(unaff_x23 + 0x170) = *(undefined8 *)(unaff_x23 + 0x50);
  *(undefined8 *)(unaff_x23 + 0x188) = *(undefined8 *)(unaff_x23 + 0x68);
  *(undefined8 *)(unaff_x23 + 0x180) = *(undefined8 *)(unaff_x23 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x23 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x23 + 0x20);
  *(undefined8 *)(unaff_x23 + 0x128) = in_stack_00000018;
  *(undefined8 *)(unaff_x23 + 0x120) = in_stack_00000010;
  *(undefined8 *)(unaff_x23 + 0x138) = *(undefined8 *)(unaff_x23 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x130) = *(undefined8 *)(unaff_x23 + 0x10);
  *unaff_x19 = 10;
  *(ulong *)(unaff_x29 + -0x70) = CONCAT44(uStack00000000000000f4,in_stack_000000f0);
  *(undefined8 *)(unaff_x23 + 0x148) = uVar8;
  *(undefined8 *)(unaff_x23 + 0x140) = uVar7;
  *(undefined8 *)(unaff_x23 + 0x158) = uVar10;
  *(undefined8 *)(unaff_x23 + 0x150) = uVar9;
  return 0;
}

