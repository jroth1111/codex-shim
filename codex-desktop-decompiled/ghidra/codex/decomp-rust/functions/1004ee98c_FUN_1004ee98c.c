
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ee98c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar6;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
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
  long in_stack_00000080;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  char *in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000190;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000003f8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x21;
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    uVar8 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x88) = 2;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x88);
    if (iVar4 != 0) {
      in_stack_00000130 = *(long *)(lVar6 + 0x60);
      in_stack_00000138 = *(undefined8 *)(lVar6 + 0x68);
      in_stack_00000118 = *(long *)(lVar6 + 0x50);
      in_stack_00000120 = *(undefined8 *)(lVar6 + 0x58);
      in_stack_00000110 = 1;
      if (in_stack_00000118 == 0) {
        in_stack_00000110 = 2;
      }
      uStack0000000000000158 = *(undefined4 *)(lVar6 + 8);
      uStack000000000000015c = *(undefined4 *)(lVar6 + 0xc);
      *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000003f8;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      in_stack_00000128 = 1;
      if (in_stack_00000130 == 0) {
        in_stack_00000128 = 2;
      }
      uVar7 = *(undefined8 *)(unaff_x29 + -0x88);
      *(undefined8 *)(unaff_x24 + 200) = *(undefined8 *)(unaff_x29 + -0x80);
      *(undefined8 *)(unaff_x24 + 0xc0) = uVar7;
      in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000168 = unaff_x29 + -0x60;
      in_stack_00000160 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000110);
    }
  }
  *(undefined8 *)(unaff_x24 + 0xf8) = in_stack_00000060;
  *(undefined8 *)(unaff_x24 + 0xf0) = in_stack_00000058;
  *(undefined8 *)(unaff_x24 + 0x108) = in_stack_00000070;
  *(undefined8 *)(unaff_x24 + 0x100) = in_stack_00000068;
  *(undefined8 *)(unaff_x24 + 0xb8) = in_stack_00000020;
  *(undefined8 *)(unaff_x24 + 0xb0) = in_stack_00000018;
  *(undefined8 *)(unaff_x24 + 200) = in_stack_00000030;
  *(undefined8 *)(unaff_x24 + 0xc0) = in_stack_00000028;
  in_stack_00000190 = in_stack_00000078;
  *(undefined8 *)(unaff_x24 + 0xd8) = in_stack_00000040;
  *(undefined8 *)(unaff_x24 + 0xd0) = in_stack_00000038;
  *(undefined8 *)(unaff_x24 + 0xe8) = in_stack_00000050;
  *(undefined8 *)(unaff_x24 + 0xe0) = in_stack_00000048;
  *(undefined8 *)(unaff_x24 + 0x98) = 1;
  *(undefined8 *)(unaff_x24 + 0x90) = 1;
  *(undefined8 *)(unaff_x24 + 0xa8) = in_stack_00000010;
  *(undefined8 *)(unaff_x24 + 0xa0) = in_stack_00000008;
  puVar5 = (undefined8 *)_malloc(0x88);
  if (puVar5 != (undefined8 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x24 + 0xf0);
    uVar9 = *(undefined8 *)(unaff_x24 + 0x108);
    uVar8 = *(undefined8 *)(unaff_x24 + 0x100);
    puVar5[0xd] = *(undefined8 *)(unaff_x24 + 0xf8);
    puVar5[0xc] = uVar7;
    puVar5[0xf] = uVar9;
    puVar5[0xe] = uVar8;
    puVar5[0x10] = in_stack_00000190;
    uVar7 = *(undefined8 *)(unaff_x24 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x24 + 200);
    uVar8 = *(undefined8 *)(unaff_x24 + 0xc0);
    puVar5[5] = *(undefined8 *)(unaff_x24 + 0xb8);
    puVar5[4] = uVar7;
    puVar5[7] = uVar9;
    puVar5[6] = uVar8;
    uVar9 = *(undefined8 *)(unaff_x24 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x24 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x24 + 0xe0);
    puVar5[9] = *(undefined8 *)(unaff_x24 + 0xd8);
    puVar5[8] = uVar9;
    puVar5[0xb] = uVar8;
    puVar5[10] = uVar7;
    uVar9 = *(undefined8 *)(unaff_x24 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x24 + 0xa8);
    uVar7 = *(undefined8 *)(unaff_x24 + 0xa0);
    puVar5[1] = *(undefined8 *)(unaff_x24 + 0x98);
    *puVar5 = uVar9;
    puVar5[3] = uVar8;
    puVar5[2] = uVar7;
    *(undefined8 *)(unaff_x29 + -0xa8) = 0;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    *(undefined1 *)(unaff_x29 + -0x98) = 0;
    if (in_stack_00000080 != 9) {
      FUN_100e0ee2c(&stack0x00000080);
    }
    uVar7 = unaff_x25[0xc];
    unaff_x20[3] = unaff_x25[0xd];
    unaff_x20[2] = uVar7;
    uVar7 = *(undefined8 *)((long)unaff_x25 + 0x69);
    *(undefined8 *)((long)unaff_x20 + 0x21) = *(undefined8 *)((long)unaff_x25 + 0x71);
    *(undefined8 *)((long)unaff_x20 + 0x19) = uVar7;
    uVar9 = unaff_x25[1];
    uVar8 = *unaff_x25;
    uVar7 = unaff_x25[2];
    unaff_x20[10] = unaff_x25[3];
    unaff_x20[9] = uVar7;
    uVar7 = unaff_x25[4];
    uVar11 = unaff_x25[7];
    uVar10 = unaff_x25[6];
    unaff_x20[0xc] = unaff_x25[5];
    unaff_x20[0xb] = uVar7;
    unaff_x20[0xe] = uVar11;
    unaff_x20[0xd] = uVar10;
    uVar7 = unaff_x25[8];
    unaff_x20[0x10] = unaff_x25[9];
    unaff_x20[0xf] = uVar7;
    *unaff_x20 = 9;
    unaff_x20[1] = puVar5 + 2;
    *(undefined4 *)((long)unaff_x20 + 0x29) = *(undefined4 *)(unaff_x29 + -0xb8);
    *(undefined4 *)((long)unaff_x20 + 0x2c) = *(undefined4 *)((long)unaff_x25 + 0x5b);
    unaff_x20[6] = 2;
    unaff_x20[8] = uVar9;
    unaff_x20[7] = uVar8;
    *(undefined1 *)(unaff_x19 + 0x210) = 1;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x88);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004eecf8);
  (*pcVar3)();
}

