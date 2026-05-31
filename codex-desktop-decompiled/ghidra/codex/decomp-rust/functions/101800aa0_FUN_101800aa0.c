
/* WARNING: Removing unreachable block (ram,0x000101800b80) */
/* WARNING: Removing unreachable block (ram,0x000101800bc8) */
/* WARNING: Removing unreachable block (ram,0x000101800ba8) */
/* WARNING: Removing unreachable block (ram,0x000101800bb8) */
/* WARNING: Removing unreachable block (ram,0x000101800bcc) */
/* WARNING: Removing unreachable block (ram,0x000101800bf4) */
/* WARNING: Removing unreachable block (ram,0x000101800c30) */
/* WARNING: Removing unreachable block (ram,0x000101800c3c) */
/* WARNING: Removing unreachable block (ram,0x000101800c44) */
/* WARNING: Removing unreachable block (ram,0x000101800c88) */
/* WARNING: Removing unreachable block (ram,0x000101800c94) */
/* WARNING: Removing unreachable block (ram,0x000101800cd0) */
/* WARNING: Removing unreachable block (ram,0x000101800cdc) */
/* WARNING: Removing unreachable block (ram,0x000101800ce4) */
/* WARNING: Removing unreachable block (ram,0x000101800cec) */
/* WARNING: Removing unreachable block (ram,0x000101800cf4) */
/* WARNING: Removing unreachable block (ram,0x000101800d34) */
/* WARNING: Removing unreachable block (ram,0x000101800d6c) */
/* WARNING: Removing unreachable block (ram,0x000101800d74) */
/* WARNING: Removing unreachable block (ram,0x000101800da8) */
/* WARNING: Removing unreachable block (ram,0x000101800db0) */
/* WARNING: Removing unreachable block (ram,0x000101800db4) */
/* WARNING: Removing unreachable block (ram,0x000101800d9c) */
/* WARNING: Removing unreachable block (ram,0x000101800db8) */
/* WARNING: Removing unreachable block (ram,0x000101800df0) */
/* WARNING: Removing unreachable block (ram,0x000101800dfc) */
/* WARNING: Removing unreachable block (ram,0x000101800e00) */
/* WARNING: Removing unreachable block (ram,0x000101800e14) */
/* WARNING: Removing unreachable block (ram,0x000101800e1c) */
/* WARNING: Removing unreachable block (ram,0x000101800e08) */
/* WARNING: Removing unreachable block (ram,0x000101800e44) */
/* WARNING: Removing unreachable block (ram,0x000101800e48) */
/* WARNING: Removing unreachable block (ram,0x000101800de0) */
/* WARNING: Removing unreachable block (ram,0x000101800e50) */
/* WARNING: Removing unreachable block (ram,0x000101800e74) */
/* WARNING: Removing unreachable block (ram,0x000101800d00) */
/* WARNING: Removing unreachable block (ram,0x000101800d08) */
/* WARNING: Removing unreachable block (ram,0x000101800c20) */
/* WARNING: Removing unreachable block (ram,0x000101800c28) */
/* WARNING: Removing unreachable block (ram,0x000101800d0c) */
/* WARNING: Removing unreachable block (ram,0x000101800d10) */
/* WARNING: Removing unreachable block (ram,0x000101800d18) */
/* WARNING: Removing unreachable block (ram,0x000101800d20) */
/* WARNING: Removing unreachable block (ram,0x000101800e7c) */

void FUN_101800aa0(void)

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
  FUN_1019360fc();
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

