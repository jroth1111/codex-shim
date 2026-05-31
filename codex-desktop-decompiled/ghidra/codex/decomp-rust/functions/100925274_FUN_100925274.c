
void FUN_100925274(void)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  undefined8 *unaff_x23;
  undefined1 *unaff_x27;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *in_stack_00000088;
  ulong in_stack_00000430;
  long in_stack_00003f00;
  undefined8 in_stack_00003f08;
  undefined8 in_stack_00003f10;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003f00,s_failed_to_save_api_key__108acb419,&stack0x00005298);
  if ((in_stack_00000430 & 3) == 1) {
    uVar4 = *(undefined8 *)(in_stack_00000430 - 1);
    puVar6 = *(undefined8 **)(in_stack_00000430 + 7);
    pcVar5 = (code *)*puVar6;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar4);
    }
    if (puVar6[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(in_stack_00000430 - 1));
  }
  *in_stack_00000088 = 1;
  if (in_stack_00003f00 == -0x7fffffffffffffff) {
    uVar2 = 3;
  }
  else {
    FUN_100d500d8();
    uVar4 = 0x8000000000000000;
    if (in_stack_00003f00 != -0x8000000000000000) {
      *(undefined8 *)(unaff_x19 + 0x130) = in_stack_00003f10;
      *(undefined8 *)(unaff_x19 + 0x138) = 0x8000000000000005;
      *(undefined8 *)(unaff_x19 + 0x180) = 0xffffffffffff80a5;
      uVar4 = in_stack_00003f08;
    }
    *(long *)(unaff_x19 + 0x120) = in_stack_00003f00;
    *(undefined8 *)(unaff_x19 + 0x128) = uVar4;
    *(undefined1 *)(unaff_x19 + 0x18b) = 1;
    *(bool *)(unaff_x19 + 0x189) = in_stack_00003f00 == -0x8000000000000000;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x148);
    *(undefined2 *)(unaff_x19 + 0x18a) = 0;
    uVar7 = *(undefined8 *)(unaff_x19 + 0xce8);
    uVar18 = *(undefined8 *)(unaff_x19 + 0xd00);
    uVar14 = *(undefined8 *)(unaff_x19 + 0xcf8);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x168);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x160);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x178);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x170);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x180);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x128);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x120);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x138);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x130);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x148);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x140);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x158);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x150);
    unaff_x23[1] = *(undefined8 *)(unaff_x19 + 0xcf0);
    *unaff_x23 = uVar7;
    unaff_x23[7] = uVar20;
    unaff_x23[6] = uVar16;
    unaff_x23[9] = uVar21;
    unaff_x23[8] = uVar17;
    unaff_x23[3] = uVar18;
    unaff_x23[2] = uVar14;
    unaff_x23[5] = uVar12;
    unaff_x23[4] = uVar9;
    unaff_x23[0x10] = uVar4;
    unaff_x23[0xd] = uVar11;
    unaff_x23[0xc] = uVar8;
    unaff_x23[0xf] = uVar19;
    unaff_x23[0xe] = uVar15;
    unaff_x23[0xb] = uVar13;
    unaff_x23[10] = uVar10;
    *(long *)(unaff_x19 + 0x218) = lVar3 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x288) = 0;
    uVar1 = func_0x000100892a8c(unaff_x19 + 400);
    if ((uVar1 & 1) == 0) {
      FUN_100db1748(unaff_x19 + 400);
      if ((*(byte *)(unaff_x19 + 0x189) & 1) != 0) {
        *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x100);
        *(undefined1 *)(unaff_x19 + 0x1a0) = 0;
        *(undefined1 *)(unaff_x19 + 0x1b1) = 0;
        uVar1 = FUN_100922e2c(unaff_x19 + 400);
        if ((uVar1 & 1) != 0) {
          uVar2 = 5;
          goto LAB_100925d88;
        }
        FUN_100d6c6a4(unaff_x19 + 400);
      }
      *(undefined1 *)(unaff_x19 + 0x18b) = 0;
      if (*(long *)(unaff_x19 + 0x108) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x110));
      }
      *(undefined1 *)(unaff_x19 + 0x18a) = 0;
      *(undefined1 *)(unaff_x19 + 0x188) = 1;
      func_0x000100d40db0();
      *unaff_x21 = 0x8000000000000000;
      uVar2 = 1;
      goto LAB_1009270f8;
    }
    uVar2 = 4;
  }
LAB_100925d88:
  *unaff_x27 = uVar2;
  *unaff_x21 = 0x8000000000000001;
  uVar2 = 3;
LAB_1009270f8:
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar2;
  return;
}

