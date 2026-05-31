
void FUN_1003cfeb0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long unaff_x28;
  long lVar6;
  long unaff_x29;
  uint in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined *in_stack_000000b8;
  ulong in_stack_000000c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa8,s__108ac137a,unaff_x29 + -0x90);
  lVar6 = *(long *)(unaff_x29 + -0xa8);
  if (lVar6 == -0x8000000000000000) {
    uVar3 = *(ulong *)(unaff_x24 + unaff_x23 + 0x1e8);
    lVar6 = in_stack_00000040;
    uVar5 = in_stack_00000048;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0x98);
    if (in_stack_00000040 == 0) {
      uVar3 = *(ulong *)(unaff_x24 + unaff_x23 + 0x1e8);
    }
    else {
      _free(in_stack_00000048);
      uVar3 = *(ulong *)(unaff_x24 + unaff_x23 + 0x1e8);
    }
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x24 + unaff_x23 + 0x1f0));
  }
  lVar4 = unaff_x24 + unaff_x23;
  *(long *)(lVar4 + 0x1e8) = lVar6;
  *(undefined8 *)(lVar4 + 0x1f0) = uVar5;
  *(undefined8 *)(lVar4 + 0x1f8) = in_stack_00000050;
  if (*unaff_x26 != -0x8000000000000000) {
    in_stack_00000090 = *(undefined8 *)(unaff_x28 + 0x130);
    in_stack_00000098 = *(long *)(unaff_x28 + 0x138);
    in_stack_000000b8 = &UNK_108c9504e;
  }
  else {
    in_stack_00000098 = 0;
    in_stack_00000090 = 1;
    in_stack_000000b8 = (undefined *)0x1;
  }
  in_stack_000000c0 = (ulong)(*unaff_x26 != -0x8000000000000000);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x238);
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x21 + 0x230);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar5;
  *(undefined8 **)(unaff_x29 + -0x90) = &stack0x00000090;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x25;
  *(undefined ***)(unaff_x29 + -0x80) = &stack0x000000b8;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa8;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x25;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000078,s__108ac137a,unaff_x29 + -0x90);
  lVar6 = unaff_x24 + unaff_x23;
  if ((*(ulong *)(lVar6 + 0x128) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(lVar6 + 0x130));
  }
  *(undefined8 *)(lVar6 + 0x130) = in_stack_00000080;
  *(undefined8 *)(lVar6 + 0x128) = in_stack_00000078;
  *(undefined8 *)(lVar6 + 0x138) = in_stack_00000088;
  if (*(long *)(lVar6 + 0x110) != -0x8000000000000000) goto LAB_1003d00b8;
  lVar4 = *(long *)(unaff_x28 + 0x110);
  if ((in_stack_00000020 & 1) == 0) {
    plVar1 = (long *)(unaff_x28 + 0x238);
    if (lVar4 != -0x8000000000000000) {
      plVar1 = (long *)(unaff_x28 + 0x120);
    }
    in_stack_00000098 = *plVar1;
    puVar2 = (undefined8 *)(unaff_x28 + 0x230);
    if (lVar4 != -0x8000000000000000) {
      puVar2 = (undefined8 *)(unaff_x28 + 0x118);
    }
    in_stack_00000090 = *puVar2;
    if (in_stack_00000098 == 0) goto LAB_1003d004c;
LAB_1003d0030:
    in_stack_000000b8 = &UNK_108c950d6;
    in_stack_000000c0 = 1;
  }
  else {
    if (lVar4 == -0x8000000000000000) {
      in_stack_00000090 = 1;
      in_stack_00000098 = 0;
    }
    else {
      in_stack_00000090 = *(undefined8 *)(unaff_x28 + 0x118);
      in_stack_00000098 = *(long *)(unaff_x28 + 0x120);
      if (in_stack_00000098 != 0) goto LAB_1003d0030;
    }
LAB_1003d004c:
    in_stack_000000c0 = 0;
    in_stack_000000b8 = (undefined *)0x1;
  }
  uVar5 = *(undefined8 *)(unaff_x21 + 0x238);
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x21 + 0x230);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar5;
  *(undefined8 **)(unaff_x29 + -0x90) = &stack0x00000090;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x25;
  *(undefined ***)(unaff_x29 + -0x80) = &stack0x000000b8;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa8;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x25;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000a0,s__108ac137a,unaff_x29 + -0x90);
  if ((*(ulong *)(lVar6 + 0x110) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x24 + unaff_x23 + 0x118));
  }
  *(undefined8 *)(lVar6 + 0x118) = in_stack_000000a8;
  *(undefined8 *)(lVar6 + 0x110) = in_stack_000000a0;
  *(undefined8 *)(lVar6 + 0x120) = in_stack_000000b0;
LAB_1003d00b8:
  __ZN12clap_builder7builder7command7Command11_build_self17hb719a559668fb144E();
  if (in_stack_00000028 != 0) {
    _free(in_stack_00000030);
  }
  return;
}

