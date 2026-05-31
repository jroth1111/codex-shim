
void FUN_10092f8a0(void)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x21;
  ulong uVar6;
  long unaff_x24;
  long unaff_x29;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xc0,s__failed_to_update_skill_settings_108acb70e,&stack0x00000148);
  uVar6 = *(ulong *)(unaff_x29 + -0xc0);
  uVar1 = *(ulong *)(unaff_x29 + -0xb8);
  lVar5 = *(long *)(unaff_x29 + -0xb0);
  (**(code **)**(undefined8 **)(unaff_x29 + -0x78))();
  *(undefined2 *)(unaff_x19 + 0xe2) = 0;
  *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  if (uVar6 == 0x8000000000000000) {
    uVar4 = 0;
    lVar3 = unaff_x24 + 0x2f;
    uVar6 = uVar1;
  }
  else {
    if (uVar6 == 0x8000000000000001) {
      *unaff_x21 = unaff_x24 + 0x6c;
      uVar2 = 3;
      goto LAB_10092f9c0;
    }
    uVar4 = uVar6 & 0xffffffffffffff00;
    lVar3 = unaff_x24 + 0x6b;
  }
  *unaff_x21 = lVar3;
  unaff_x21[1] = uVar4 | uVar6 & 0xff;
  unaff_x21[2] = uVar1;
  unaff_x21[3] = lVar5;
  unaff_x21[4] = unaff_x24;
  unaff_x21[0xd] = -0x7f5b;
  uVar2 = 1;
LAB_10092f9c0:
  *(undefined1 *)(unaff_x19 + 0xe8) = uVar2;
  return;
}

