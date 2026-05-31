
void FUN_1008da5b0(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_x23;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (s__failed_to_resolve_feature_overr_108aca8d8,unaff_x29 + -0x50);
  *(undefined8 *)(unaff_x29 + -0x48) = in_stack_00000010;
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000008;
  uVar2 = *(ulong *)(unaff_x29 + -0x58);
  if ((uVar2 & 3) == 1) {
    uVar3 = *(undefined8 *)(uVar2 - 1);
    puVar4 = *(undefined8 **)(uVar2 + 7);
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free((undefined8 *)(uVar2 - 1));
  }
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x48);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x50);
  *unaff_x20 = unaff_x23;
  unaff_x20[1] = in_stack_00000000;
  uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
  unaff_x20[3] = *(undefined8 *)(unaff_x29 + -0x68);
  unaff_x20[2] = uVar3;
  unaff_x20[4] = 0x8000000000000005;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
  unaff_x20[6] = *(undefined8 *)(unaff_x29 + -0xa8);
  unaff_x20[5] = uVar3;
  unaff_x20[8] = uVar6;
  unaff_x20[7] = uVar5;
  uVar3 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x80);
  unaff_x20[10] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[9] = uVar3;
  unaff_x20[0xc] = uVar6;
  unaff_x20[0xb] = uVar5;
  unaff_x20[0xd] = 0xffffffffffff80a5;
  _memcpy(unaff_x20 + 0xe,&stack0x00004a78,0x24d8);
  *(undefined1 *)(unaff_x19 + 0x570) = 1;
  return;
}

