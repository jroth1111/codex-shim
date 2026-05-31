
/* WARNING: Removing unreachable block (ram,0x0001002e07f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002e0618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x19;
  long *unaff_x20;
  long lVar6;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  *(char **)(unaff_x29 + -0x50) = s_background_connect_error__108ab8f6b;
  *(undefined1 **)(unaff_x29 + -0x48) = &stack0x00000138;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b1f3630;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xe0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x20;
    in_stack_00000158 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_00000160 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000150 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000150);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,&stack0x00000150,unaff_x29 + -0xe0);
    }
  }
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e0874);
      (*pcVar3)();
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

