
/* WARNING: Removing unreachable block (ram,0x000101611990) */

void FUN_101611874(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x23;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s_deserializing_nested_enum_in____f_108ad92ff,unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x23 + 0x88) = in_stack_00000030;
  *(undefined8 *)(unaff_x23 + 0x80) = in_stack_00000028;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000038;
  *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000000;
  *(undefined4 *)(unaff_x29 + -0x58) = 8;
  puVar2 = (undefined8 *)_malloc(0x50);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101611bd0);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(unaff_x23 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x23 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x23 + 0xb0);
  puVar2[5] = *(undefined8 *)(unaff_x23 + 0xa8);
  puVar2[4] = uVar3;
  puVar2[7] = uVar5;
  puVar2[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x23 + 0xc0);
  puVar2[9] = *(undefined8 *)(unaff_x23 + 200);
  puVar2[8] = uVar3;
  uVar5 = *(undefined8 *)(unaff_x23 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x23 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x23 + 0x90);
  puVar2[1] = *(undefined8 *)(unaff_x23 + 0x88);
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  *(undefined8 *)(unaff_x23 + 0x88) = unaff_x20[1];
  *(undefined8 *)(unaff_x23 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x23 + 0x98) = uVar5;
  *(undefined8 *)(unaff_x23 + 0x90) = uVar4;
  uVar3 = __ZN10serde_yaml5error8fix_mark17h40966cb431052c9fE
                    (puVar2,&stack0x000000a8,unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x19 + 8) = uVar3;
  *unaff_x19 = 1;
  return;
}

