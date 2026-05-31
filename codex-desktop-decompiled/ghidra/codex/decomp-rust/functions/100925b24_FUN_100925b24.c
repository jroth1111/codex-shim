
void FUN_100925b24(void)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_00000080;
  undefined1 *in_stack_00000088;
  long in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000430,s__External_auth_must_use_one_of_w_108acb528,&stack0x00001940);
  if ((*(long *)(unaff_x19 + 0x230) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x230) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x238));
  }
  if (*(long *)(unaff_x19 + 0x218) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x220));
  }
  if (*(long *)(unaff_x19 + 0x200) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x208));
  }
  *unaff_x22 = 1;
  if (in_stack_00000430 == -0x7fffffffffffffff) {
    uVar2 = 3;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x1a3) = 1;
    *(long *)(unaff_x19 + 0x138) = in_stack_00000430;
    *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00000438;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000440;
    *(undefined8 *)(unaff_x19 + 0x150) = 0x8000000000000005;
    *(undefined8 *)(unaff_x19 + 0x198) = 0xffffffffffff80a8;
    FUN_100d6fe00();
    *(bool *)(unaff_x19 + 0x1a1) = *(long *)(unaff_x19 + 0x138) == -0x8000000000000000;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x148);
    *(undefined2 *)(unaff_x19 + 0x1a2) = 0;
    uVar5 = *(undefined8 *)(unaff_x19 + 0xd78);
    uVar16 = *(undefined8 *)(unaff_x19 + 0xd90);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xd88);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x198);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x180);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x178);
    uVar9 = *(undefined8 *)(unaff_x19 + 400);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x188);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x140);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x138);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x148);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x160);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x158);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x170);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x168);
    unaff_x23[1] = *(undefined8 *)(unaff_x19 + 0xd80);
    *unaff_x23 = uVar5;
    unaff_x23[7] = uVar18;
    unaff_x23[6] = uVar14;
    unaff_x23[9] = uVar19;
    unaff_x23[8] = uVar15;
    unaff_x23[3] = uVar16;
    unaff_x23[2] = uVar12;
    unaff_x23[5] = uVar10;
    unaff_x23[4] = uVar7;
    unaff_x23[0x10] = uVar4;
    unaff_x23[0xd] = uVar17;
    unaff_x23[0xc] = uVar13;
    unaff_x23[0xf] = uVar9;
    unaff_x23[0xe] = uVar6;
    unaff_x23[0xb] = uVar11;
    unaff_x23[10] = uVar8;
    *(long *)(unaff_x19 + 0x230) = lVar3 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x2a0) = 0;
    uVar1 = func_0x000100892a8c(unaff_x19 + 0x1a8);
    if ((uVar1 & 1) == 0) {
      FUN_100db1748(unaff_x19 + 0x1a8);
      if (*(char *)(unaff_x19 + 0x1a1) == '\x01') {
        *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x19 + 0x130);
        *(undefined1 *)(unaff_x19 + 0x1b8) = 0;
        *(undefined1 *)(unaff_x19 + 0x1c9) = 0;
        uVar1 = FUN_100922e2c(unaff_x19 + 0x1a8);
        if ((uVar1 & 1) != 0) {
          uVar2 = 5;
          goto LAB_100926698;
        }
        FUN_100d6c6a4(unaff_x19 + 0x1a8);
      }
      *(undefined2 *)(unaff_x19 + 0x1a2) = 0;
      *(undefined1 *)(unaff_x19 + 0x1a0) = 1;
      FUN_100d5d5a8(in_stack_00000080);
      *unaff_x21 = 0x8000000000000000;
      uVar2 = 1;
      goto LAB_1009270f8;
    }
    uVar2 = 4;
  }
LAB_100926698:
  *in_stack_00000088 = uVar2;
  *unaff_x21 = 0x8000000000000001;
  uVar2 = 6;
LAB_1009270f8:
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar2;
  return;
}

