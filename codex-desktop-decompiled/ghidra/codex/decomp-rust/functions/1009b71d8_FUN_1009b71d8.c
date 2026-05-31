
void FUN_1009b71d8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x24;
  undefined8 *puVar6;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe0,s_failed_to_serialize_response__108ac9ec1,&stack0x00000200);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x29 + -0xd8);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x128) = uVar1;
  *(long *)(unaff_x19 + 0x130) = unaff_x24;
  *(undefined4 *)(unaff_x19 + 0x178) = 0xffff80a5;
  *(undefined8 *)(unaff_x19 + 0x180) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 400) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000000;
  *(undefined1 *)(unaff_x19 + 0x198) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x188);
  *(undefined8 *)(unaff_x26 + 0xe8) = *(undefined8 *)(unaff_x19 + 400);
  *(undefined8 *)(unaff_x26 + 0xe0) = uVar1;
  func_0x000100fd3924(unaff_x29 + -0xe0);
  if (*(long *)(unaff_x29 + -0xe0) != unaff_x24 + -1) {
    FUN_100e30e98(unaff_x29 + -0xe0);
  }
  *(undefined1 *)(unaff_x19 + 0x198) = 1;
  plVar3 = *(long **)(unaff_x19 + 0x110);
  if (*plVar3 == 1) {
    uVar5 = plVar3[1];
    if ((uVar5 & 3) != 1) goto LAB_1009b72bc;
    puVar4 = (undefined8 *)(uVar5 - 1);
    uVar1 = *puVar4;
    puVar6 = *(undefined8 **)(uVar5 + 7);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar1);
    }
    if (puVar6[1] != 0) {
      _free(uVar1);
    }
  }
  else {
    if ((*plVar3 != 0) || (plVar3[2] == 0)) goto LAB_1009b72bc;
    puVar4 = (undefined8 *)plVar3[1];
  }
  _free(puVar4);
LAB_1009b72bc:
  _free(plVar3);
  *(undefined1 *)(unaff_x19 + 0x1a1) = 0;
  *(undefined1 *)(unaff_x19 + 0x1a0) = 1;
  return;
}

