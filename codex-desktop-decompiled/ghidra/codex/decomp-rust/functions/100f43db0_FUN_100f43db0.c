
undefined1  [16] FUN_100f43db0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x29;
  undefined1 auVar9 [16];
  int iStack000000000000000c;
  undefined1 *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined *in_stack_00000038;
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
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s_Opening_workspace_____108ad41aa,&stack0x00000010);
  __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E
            (unaff_x19 + 0x40,&UNK_108cde37c,4);
  *(undefined1 *)(unaff_x19 + 0x108) = 0;
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x40,&UNK_108cc649b,2);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x40,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x28));
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x40,*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x38));
  func_0x0001060339f8(unaff_x29 + -0x100,unaff_x19 + 0x40,0,1);
  if (*(int *)(unaff_x29 + -0x100) == 2) {
    *(undefined8 *)(unaff_x23 + 0x160) = 3;
    *(undefined8 *)(unaff_x23 + 0x168) = *(undefined8 *)(unaff_x23 + 0x168);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x23 + 0x168);
    uVar7 = *(undefined8 *)(unaff_x23 + 0x170);
    *(int *)(unaff_x29 + -0x70) = *(int *)(unaff_x29 + -0x100);
    *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0xfc);
    *(undefined8 *)(unaff_x23 + 0x1f8) = uVar3;
    *(undefined8 *)(unaff_x23 + 0x200) = uVar7;
    __ZN5tokio7process7Command11build_child17h16d9f1b0d2e64326E
              (unaff_x29 + -0x100,unaff_x19 + 0x40,unaff_x29 + -0x70);
  }
  in_stack_00000078 = *(undefined8 *)(unaff_x23 + 0x1c8);
  in_stack_00000070 = *(undefined8 *)(unaff_x23 + 0x1c0);
  in_stack_00000088 = *(undefined8 *)(unaff_x23 + 0x1d8);
  in_stack_00000080 = *(undefined8 *)(unaff_x23 + 0x1d0);
  *(undefined8 *)(unaff_x23 + 0x88) = *(undefined8 *)(unaff_x23 + 0x1e8);
  *(undefined8 *)(unaff_x23 + 0x80) = *(undefined8 *)(unaff_x23 + 0x1e0);
  in_stack_00000038 = *(undefined **)(unaff_x23 + 0x188);
  in_stack_00000030 = *(undefined1 **)(unaff_x23 + 0x180);
  in_stack_00000048 = *(undefined8 *)(unaff_x23 + 0x198);
  in_stack_00000040 = *(undefined8 *)(unaff_x23 + 400);
  in_stack_00000058 = *(undefined8 *)(unaff_x23 + 0x1a8);
  in_stack_00000050 = *(undefined8 *)(unaff_x23 + 0x1a0);
  in_stack_00000068 = *(undefined8 *)(unaff_x23 + 0x1b8);
  in_stack_00000060 = *(undefined8 *)(unaff_x23 + 0x1b0);
  in_stack_00000018 = *(undefined **)(unaff_x23 + 0x168);
  in_stack_00000010 = *(undefined1 **)(unaff_x23 + 0x160);
  in_stack_00000028 = *(undefined **)(unaff_x23 + 0x178);
  in_stack_00000020 = *(undefined1 **)(unaff_x23 + 0x170);
  _memcpy(unaff_x19 + 0x110,&stack0x00000010,0x140);
  *(undefined1 *)(unaff_x19 + 0x250) = 0;
  plVar6 = (long *)(unaff_x19 + 0x110);
  func_0x000100fe7dd0(unaff_x29 + -0x100,plVar6);
  uVar1 = *(uint *)(unaff_x29 + -0x100);
  if (uVar1 == 2) {
    *(undefined1 *)(unaff_x19 + 600) = 3;
    uVar3 = 1;
    goto LAB_100f43ffc;
  }
  iVar2 = *(int *)(unaff_x29 + -0xfc);
  uVar3 = *(undefined8 *)(unaff_x23 + 0x168);
  if (*(char *)(unaff_x19 + 0x250) == '\x03') {
    plVar6 = (long *)(unaff_x19 + 0x1a0);
LAB_100f43f40:
    FUN_100de2564(plVar6);
  }
  else if (*(char *)(unaff_x19 + 0x250) == '\0') {
    if (*plVar6 != 3) goto LAB_100f43f40;
    uVar5 = *(ulong *)(unaff_x19 + 0x118);
    if ((uVar5 & 3) == 1) {
      uVar7 = *(undefined8 *)(uVar5 - 1);
      puVar8 = *(undefined8 **)(uVar5 + 7);
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        _free(uVar7);
      }
      _free((undefined8 *)(uVar5 - 1));
    }
  }
  if ((uVar1 & 1) == 0) {
    iStack000000000000000c = iVar2;
    FUN_100de2268(unaff_x19 + 0x40);
    if (iVar2 == 0) {
      unaff_x20 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined8 *)(unaff_x23 + 0x140) = *(undefined8 *)(unaff_x19 + 0x20);
      *(undefined8 *)(unaff_x23 + 0x148) = uVar3;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
      *(undefined8 *)(unaff_x23 + 0x150) = *(undefined8 *)(unaff_x19 + 0x30);
      *(undefined8 *)(unaff_x23 + 0x158) = uVar3;
      in_stack_00000010 = &stack0x00000150;
      in_stack_00000018 =
           &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
      in_stack_00000020 = &stack0x00000160;
      in_stack_00000028 =
           &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
      in_stack_00000030 = (undefined1 *)&stack0x0000000c;
      in_stack_00000038 =
           &
           __ZN63__LT_std__process__ExitStatus_u20_as_u20_core__fmt__Display_GT_3fmt17h50f79940b94001c9E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x100,s__open__a___exited_with_108ad41c4,&stack0x00000010);
      *(undefined8 *)(unaff_x23 + 0x1f8) = *(undefined8 *)(unaff_x23 + 0x168);
      *(undefined8 *)(unaff_x23 + 0x1f0) = *(undefined8 *)(unaff_x23 + 0x160);
      *(undefined8 *)(unaff_x23 + 0x200) = *(undefined8 *)(unaff_x23 + 0x170);
      unaff_x20 = FUN_108856624(unaff_x29 + -0x70);
    }
  }
  else {
    unaff_x20 = FUN_108854978(uVar3,&UNK_108cc649d,0x17);
    FUN_100de2268(unaff_x19 + 0x40);
  }
  uVar3 = 0;
  *(undefined1 *)(unaff_x19 + 600) = 1;
LAB_100f43ffc:
  auVar9._8_8_ = unaff_x20;
  auVar9._0_8_ = uVar3;
  return auVar9;
}

