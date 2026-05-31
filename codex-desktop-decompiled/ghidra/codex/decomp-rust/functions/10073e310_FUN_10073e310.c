
/* WARNING: Removing unreachable block (ram,0x00010073e518) */
/* WARNING: Removing unreachable block (ram,0x00010073e6a4) */
/* WARNING: Removing unreachable block (ram,0x00010073e540) */
/* WARNING: Removing unreachable block (ram,0x00010073e550) */
/* WARNING: Removing unreachable block (ram,0x00010073e6a8) */
/* WARNING: Removing unreachable block (ram,0x00010073e6d0) */
/* WARNING: Removing unreachable block (ram,0x00010073e730) */
/* WARNING: Removing unreachable block (ram,0x00010073e6d8) */
/* WARNING: Removing unreachable block (ram,0x00010073ea60) */
/* WARNING: Removing unreachable block (ram,0x00010073ea7c) */
/* WARNING: Removing unreachable block (ram,0x00010073e6e4) */
/* WARNING: Removing unreachable block (ram,0x00010073e734) */
/* WARNING: Removing unreachable block (ram,0x00010073e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010073e748) */

void FUN_10073e310(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  undefined1 unaff_w22;
  undefined8 uVar4;
  ulong in_stack_00000110;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000002a0,s_Failed_to_read_config_file___108ac5a39,&stack0x00000360);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(unaff_w22,&stack0x000001a0);
  if ((in_stack_00000110 & 3) == 1) {
    uVar4 = *(undefined8 *)(in_stack_00000110 - 1);
    puVar3 = *(undefined8 **)(in_stack_00000110 + 7);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar3[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(in_stack_00000110 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0x81) = 0;
  *(undefined1 *)(unaff_x19 + 0x82) = 1;
  if ((*(long *)(unaff_x19 + 0x18) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x18) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x20));
  }
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  unaff_x20[3] = in_stack_00000268;
  unaff_x20[2] = in_stack_00000260;
  unaff_x20[5] = in_stack_00000278;
  unaff_x20[4] = in_stack_00000270;
  unaff_x20[7] = in_stack_00000288;
  unaff_x20[6] = in_stack_00000280;
  unaff_x20[9] = in_stack_00000298;
  unaff_x20[8] = in_stack_00000290;
  unaff_x20[0x16] = in_stack_00000228;
  unaff_x20[0x15] = in_stack_00000220;
  unaff_x20[0x18] = in_stack_00000238;
  unaff_x20[0x17] = in_stack_00000230;
  unaff_x20[0x1a] = in_stack_00000248;
  unaff_x20[0x19] = in_stack_00000240;
  unaff_x20[0x1c] = in_stack_00000258;
  unaff_x20[0x1b] = in_stack_00000250;
  unaff_x20[0x12] = in_stack_00000208;
  unaff_x20[0x11] = in_stack_00000200;
  *unaff_x20 = 7;
  unaff_x20[1] = uVar1;
  unaff_x20[10] = 0x8000000000000000;
  unaff_x20[0xd] = 0x8000000000000000;
  unaff_x20[0x10] = 0x8000000000000000;
  unaff_x20[0x14] = in_stack_00000218;
  unaff_x20[0x13] = in_stack_00000210;
  *(undefined1 *)(unaff_x19 + 0x91) = 1;
  return;
}

