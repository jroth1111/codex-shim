
void FUN_1008b4b9c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x29;
  long *in_stack_00000000;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000078,s__failed_to_compute_git_diff_to_r_108aca23d,unaff_x29 + -0x70);
  uVar6 = in_stack_000000d0;
  uVar5 = in_stack_000000c8;
  uVar4 = in_stack_000000c0;
  uVar3 = in_stack_000000b8;
  uVar9 = in_stack_000000b0;
  lVar2 = in_stack_000000a8;
  lVar14 = in_stack_000000a0;
  lVar1 = in_stack_00000098;
  lVar12 = in_stack_00000088;
  lVar11 = in_stack_00000080;
  lVar13 = in_stack_00000078;
  in_stack_000000d8 = 0xffffffffffff80a8;
  if (*in_stack_00000000 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  *in_stack_00000008 = 1;
  if (lVar13 == -0x8000000000000000) {
    uVar9 = 0x8000000000000068;
    lVar8 = lVar2;
    lVar10 = lVar12;
    lVar12 = -0x7ffffffffffffffb;
    lVar13 = lVar1;
  }
  else {
    if (lVar13 == -0x7fffffffffffffff) {
      *unaff_x20 = 0x8000000000000071;
      uVar7 = 3;
      goto LAB_1008b4c9c;
    }
    in_stack_00000018 = uVar3;
    in_stack_00000010 = uVar9;
    in_stack_00000028 = uVar5;
    in_stack_00000020 = uVar4;
    uVar9 = 0x8000000000000070;
    in_stack_00000038 = 0xffffffffffff80a8;
    in_stack_00000030 = uVar6;
    lVar8 = lVar14;
    lVar10 = lVar11;
    lVar11 = lVar13;
    lVar13 = -0x7ffffffffffffffb;
    lVar14 = lVar1;
  }
  *unaff_x20 = uVar9;
  unaff_x20[1] = lVar11;
  unaff_x20[2] = lVar10;
  unaff_x20[3] = lVar12;
  unaff_x20[4] = lVar13;
  unaff_x20[5] = lVar14;
  unaff_x20[6] = lVar8;
  unaff_x20[7] = lVar2;
  unaff_x20[9] = in_stack_00000018;
  unaff_x20[8] = in_stack_00000010;
  unaff_x20[0xb] = in_stack_00000028;
  unaff_x20[10] = in_stack_00000020;
  uVar7 = 1;
  unaff_x20[0xd] = in_stack_00000038;
  unaff_x20[0xc] = in_stack_00000030;
LAB_1008b4c9c:
  *(undefined1 *)(unaff_x19 + 0x7a0) = uVar7;
  return;
}

