
void FUN_1008bd4b4(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x28;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  undefined8 in_stack_00004d10;
  undefined8 in_stack_00004d18;
  undefined8 in_stack_00004d20;
  undefined8 in_stack_00004d28;
  undefined8 in_stack_00004d30;
  undefined8 in_stack_00004d38;
  undefined8 in_stack_00004d40;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000180,s_No_MCP_server_named_____found__108aca36c,&stack0x000067b0);
  lVar8 = in_stack_00000190;
  lVar1 = in_stack_00000188;
  lVar9 = in_stack_00000180;
  FUN_100cf8c18(unaff_x21 + 0x2660);
  if (((*(byte *)(in_stack_00000098 + 0xe9) & 1) != 0) &&
     (lVar4 = *(long *)(unaff_x21 + 0x2638), lVar4 != -0x8000000000000000)) {
    lVar7 = *(long *)(unaff_x21 + 0x2640);
    lVar5 = *(long *)(unaff_x21 + 0x2648);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar7);
    }
  }
  *(undefined1 *)(in_stack_00000098 + 0xe9) = 0;
  if (*(long *)(unaff_x21 + 0x2620) != 0) {
    _free(*(undefined8 *)(unaff_x21 + 0x2628));
  }
  FUN_100de93d0(unaff_x21 + 0xd8);
  if (((*(byte *)(in_stack_00000098 + 0xeb) & 1) != 0) && (*(long *)(unaff_x21 + 0xa8) != 0)) {
    _free(*(undefined8 *)(unaff_x21 + 0xb0));
  }
  if (((*(byte *)(in_stack_00000098 + 0xea) & 1) != 0) &&
     (lVar4 = *(long *)(unaff_x21 + 0xc0), lVar4 != -0x8000000000000000)) {
    lVar5 = *(long *)(unaff_x21 + 200);
    lVar7 = *(long *)(unaff_x21 + 0xd0);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar5);
    }
  }
  *(undefined2 *)(in_stack_00000098 + 0xea) = 0;
  *(undefined1 *)(in_stack_00000098 + 0xe8) = 1;
  if (lVar9 == -0x7fffffffffffffff) {
    *unaff_x28 = 0x8000000000000071;
    uVar2 = 3;
  }
  else {
    FUN_100d57fa8(in_stack_000000b0);
    if (lVar9 == -0x8000000000000000) {
      uVar3 = 0x800000000000004b;
      lVar4 = in_stack_000000a8;
      lVar9 = lVar1;
    }
    else {
      uVar3 = 0x8000000000000070;
      lVar4 = lVar8;
      lVar8 = lVar1;
      in_stack_00000140 = in_stack_00004d10;
      in_stack_00000148 = in_stack_00004d18;
      in_stack_00000150 = in_stack_00004d20;
      in_stack_00000158 = in_stack_00004d28;
      in_stack_00000160 = in_stack_00004d30;
      in_stack_00000168 = in_stack_00004d38;
      in_stack_00000170 = in_stack_00004d40;
    }
    *unaff_x28 = uVar3;
    unaff_x28[1] = lVar9;
    unaff_x28[2] = lVar8;
    unaff_x28[3] = lVar4;
    unaff_x28[4] = in_stack_000000a8;
    unaff_x28[5] = in_stack_000000a0;
    unaff_x28[7] = in_stack_00000148;
    unaff_x28[6] = in_stack_00000140;
    unaff_x28[9] = in_stack_00000158;
    unaff_x28[8] = in_stack_00000150;
    unaff_x28[0xb] = in_stack_00000168;
    unaff_x28[10] = in_stack_00000160;
    uVar2 = 1;
    unaff_x28[0xc] = in_stack_00000170;
    unaff_x28[0xd] = 0xffffffffffff80a8;
  }
  *(undefined1 *)(in_stack_000000b8 + 8) = uVar2;
  return;
}

