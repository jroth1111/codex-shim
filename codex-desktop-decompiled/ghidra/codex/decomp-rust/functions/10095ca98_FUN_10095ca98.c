
void FUN_10095ca98(void)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000060;
  undefined1 *in_stack_00000068;
  long in_stack_00000078;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  ulong in_stack_00000140;
  short in_stack_00000170;
  undefined8 in_stack_00004cd0;
  undefined8 in_stack_00004cd8;
  undefined8 in_stack_00004ce0;
  undefined8 in_stack_00004ce8;
  undefined8 in_stack_00004cf0;
  undefined8 in_stack_00004cf8;
  undefined8 in_stack_00004d00;
  undefined8 in_stack_00004d08;
  long in_stack_00005300;
  long in_stack_00005308;
  long in_stack_00005310;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005300,s___108add0c1,&stack0x000056d0);
  uVar1 = in_stack_00000140;
  if (-1 < (long)in_stack_00000140) {
    uVar1 = 4;
  }
  uVar5 = 0xffffffffffff80a8;
  if (((1L << (uVar1 & 0x3f) & 0xeceecU) != 0) ||
     (((1L << (uVar1 & 0x3f) & 0x13103U) == 0 && (in_stack_00000170 != 0x194)))) {
    uVar5 = 0xffffffffffff80a5;
  }
  FUN_101960064(&stack0x00000140);
  if (*(long *)(unaff_x20 + 0x25f8) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2600));
  }
  if (*(long *)(unaff_x20 + 0x2560) != -0x7ffffffffffffffd) {
    FUN_100e0609c(unaff_x20 + 0x2560);
  }
  FUN_100de93d0(unaff_x20 + 0x18);
  *in_stack_00000068 = 1;
  if (in_stack_00005300 == -0x7fffffffffffffff) {
    *in_stack_00000060 = 0x8000000000000071;
    uVar2 = 3;
  }
  else {
    FUN_100d3a48c(in_stack_00000050);
    if (in_stack_00005300 == -0x8000000000000000) {
      uVar3 = 0x8000000000000027;
      lVar4 = -0x7ffffffffffffffb;
      in_stack_00005300 = in_stack_00005308;
      in_stack_00005308 = in_stack_00005310;
    }
    else {
      uVar3 = 0x8000000000000070;
      lVar4 = in_stack_00005310;
      in_stack_00000100 = in_stack_00004cd0;
      in_stack_00000108 = in_stack_00004cd8;
      in_stack_00000110 = in_stack_00004ce0;
      in_stack_00000118 = in_stack_00004ce8;
      in_stack_00000120 = in_stack_00004cf0;
      in_stack_00000128 = in_stack_00004cf8;
      in_stack_00000130 = in_stack_00004d00;
      in_stack_00000138 = in_stack_00004d08;
    }
    in_stack_00000060[6] = in_stack_00000108;
    in_stack_00000060[5] = in_stack_00000100;
    in_stack_00000060[8] = in_stack_00000118;
    in_stack_00000060[7] = in_stack_00000110;
    in_stack_00000060[10] = in_stack_00000128;
    in_stack_00000060[9] = in_stack_00000120;
    *in_stack_00000060 = uVar3;
    in_stack_00000060[1] = in_stack_00005300;
    in_stack_00000060[2] = in_stack_00005308;
    in_stack_00000060[3] = lVar4;
    in_stack_00000060[4] = 0x8000000000000005;
    in_stack_00000060[0xc] = in_stack_00000138;
    in_stack_00000060[0xb] = in_stack_00000130;
    uVar2 = 1;
    in_stack_00000060[0xd] = uVar5;
  }
  *(undefined1 *)(in_stack_00000078 + 0xeb0) = uVar2;
  return;
}

