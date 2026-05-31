
void FUN_1009b7908(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 *puVar5;
  ulong uVar6;
  long unaff_x23;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xb0,s_failed_to_serialize_response__108ac9ec1,&stack0x00000098);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar7;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar1;
  *(long *)(unaff_x19 + 200) = unaff_x22 + 1;
  *(undefined4 *)(unaff_x19 + 0x110) = 0xffff80a5;
  *(undefined8 *)(unaff_x19 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000000;
  *(undefined1 *)(unaff_x19 + 0x130) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined8 *)(unaff_x23 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(unaff_x23 + 0xe0) = uVar1;
  in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xf8);
  in_stack_00000160 = *(undefined8 *)(unaff_x19 + 0xf0);
  in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0x108);
  in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0x100);
  in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0x110);
  in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0xb8);
  in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0xb0);
  in_stack_00000138 = *(undefined8 *)(unaff_x19 + 200);
  in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0xc0);
  in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0xd8);
  in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0xd0);
  in_stack_00000158 = *(undefined8 *)(unaff_x19 + 0xe8);
  in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0xe0);
  func_0x000100fd3924(unaff_x29 + -0xb0);
  if (*(long *)(unaff_x29 + -0xb0) != unaff_x22) {
    FUN_100e30e98(unaff_x29 + -0xb0);
  }
  *(undefined1 *)(unaff_x19 + 0x130) = 1;
  plVar4 = *(long **)(unaff_x19 + 0xa8);
  if (*plVar4 == 1) {
    uVar6 = plVar4[1];
    if ((uVar6 & 3) != 1) goto LAB_1009b7a74;
    puVar5 = (undefined8 *)(uVar6 - 1);
    uVar1 = *puVar5;
    puVar3 = *(undefined8 **)(uVar6 + 7);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar1);
    }
    if (puVar3[1] != 0) {
      _free(uVar1);
    }
  }
  else {
    if ((*plVar4 != 0) || (plVar4[2] == 0)) goto LAB_1009b7a74;
    puVar5 = (undefined8 *)plVar4[1];
  }
  _free(puVar5);
LAB_1009b7a74:
  _free(plVar4);
  *(undefined1 *)(unaff_x19 + 0x139) = 0;
  *(undefined1 *)(unaff_x19 + 0x138) = 1;
  return;
}

