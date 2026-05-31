
/* WARNING: Removing unreachable block (ram,0x000100557b24) */
/* WARNING: Removing unreachable block (ram,0x000100557b6c) */
/* WARNING: Removing unreachable block (ram,0x000100557b4c) */
/* WARNING: Removing unreachable block (ram,0x000100557b5c) */
/* WARNING: Removing unreachable block (ram,0x000100557b70) */
/* WARNING: Removing unreachable block (ram,0x000100557b98) */
/* WARNING: Removing unreachable block (ram,0x000100557bd4) */
/* WARNING: Removing unreachable block (ram,0x000100557be0) */
/* WARNING: Removing unreachable block (ram,0x000100557be8) */
/* WARNING: Removing unreachable block (ram,0x000100557c2c) */
/* WARNING: Removing unreachable block (ram,0x000100557c38) */
/* WARNING: Removing unreachable block (ram,0x000100557c74) */
/* WARNING: Removing unreachable block (ram,0x000100557c80) */
/* WARNING: Removing unreachable block (ram,0x000100557c88) */
/* WARNING: Removing unreachable block (ram,0x000100557c90) */
/* WARNING: Removing unreachable block (ram,0x000100557c98) */
/* WARNING: Removing unreachable block (ram,0x000100557cd8) */
/* WARNING: Removing unreachable block (ram,0x000100557d10) */
/* WARNING: Removing unreachable block (ram,0x000100557d18) */
/* WARNING: Removing unreachable block (ram,0x000100557d4c) */
/* WARNING: Removing unreachable block (ram,0x000100557d54) */
/* WARNING: Removing unreachable block (ram,0x000100557d58) */
/* WARNING: Removing unreachable block (ram,0x000100557d40) */
/* WARNING: Removing unreachable block (ram,0x000100557d5c) */
/* WARNING: Removing unreachable block (ram,0x000100557d94) */
/* WARNING: Removing unreachable block (ram,0x000100557da0) */
/* WARNING: Removing unreachable block (ram,0x000100557da4) */
/* WARNING: Removing unreachable block (ram,0x000100557db8) */
/* WARNING: Removing unreachable block (ram,0x000100557dc0) */
/* WARNING: Removing unreachable block (ram,0x000100557dac) */
/* WARNING: Removing unreachable block (ram,0x000100557de8) */
/* WARNING: Removing unreachable block (ram,0x000100557dec) */
/* WARNING: Removing unreachable block (ram,0x000100557d84) */
/* WARNING: Removing unreachable block (ram,0x000100557df4) */
/* WARNING: Removing unreachable block (ram,0x000100557e18) */
/* WARNING: Removing unreachable block (ram,0x000100557ca4) */
/* WARNING: Removing unreachable block (ram,0x000100557cac) */
/* WARNING: Removing unreachable block (ram,0x000100557bc4) */
/* WARNING: Removing unreachable block (ram,0x000100557bcc) */
/* WARNING: Removing unreachable block (ram,0x000100557cb0) */
/* WARNING: Removing unreachable block (ram,0x000100557cb4) */
/* WARNING: Removing unreachable block (ram,0x000100557cbc) */
/* WARNING: Removing unreachable block (ram,0x000100557cc4) */
/* WARNING: Removing unreachable block (ram,0x000100557e20) */

void FUN_100557a44(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s_agents____config_file_must_point_108ac0f3a,&stack0x000000e8);
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000058;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000060;
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,unaff_x29 + -0x90);
  *unaff_x28 = 1;
  if ((*(ulong *)(unaff_x19 + 0x88) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x90));
  }
  *(undefined1 *)(unaff_x19 + 0x100) = 0;
  *in_stack_00000018 = 1;
  FUN_100cc41c0();
  *(undefined2 *)(unaff_x19 + 0x48) = 0;
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = 0x8000000000000001;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xe8);
  uVar2 = *(undefined8 *)(unaff_x29 + -0xf0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0xe0);
  unaff_x20[6] = *(undefined8 *)(unaff_x29 + -0xd8);
  unaff_x20[5] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xc0);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -200);
  unaff_x20[7] = uVar1;
  unaff_x20[10] = uVar5;
  unaff_x20[9] = uVar4;
  unaff_x20[0xb] = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x20[4] = uVar3;
  unaff_x20[3] = uVar2;
  *(undefined1 *)(unaff_x19 + 0x4a) = 1;
  return;
}

