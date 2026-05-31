
/* WARNING: Removing unreachable block (ram,0x0001006d8138) */
/* WARNING: Removing unreachable block (ram,0x0001006d8320) */
/* WARNING: Removing unreachable block (ram,0x0001006d8144) */
/* WARNING: Removing unreachable block (ram,0x0001006d8148) */
/* WARNING: Removing unreachable block (ram,0x0001006d8054) */
/* WARNING: Removing unreachable block (ram,0x0001006d8328) */
/* WARNING: Removing unreachable block (ram,0x0001006d8310) */

undefined1  [16] FUN_1006d8288(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x25;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001c0,s_failed_to_revoke_____108ac359a,&stack0x00000350);
  uVar4 = in_stack_000001d0;
  uVar3 = in_stack_000001c8;
  uVar2 = in_stack_000001c0;
  puVar7 = (undefined8 *)_malloc(0x18);
  if (puVar7 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar7 = uVar2;
    puVar7[1] = uVar3;
    puVar7[2] = uVar4;
    plVar8 = (long *)_malloc(0x18);
    if (plVar8 != (long *)0x0) {
      *plVar8 = (long)puVar7;
      plVar8[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar8 + 2) = 0x28;
      if (in_stack_00000030 != 0) {
        _free(in_stack_00000038);
      }
      if (unaff_x25 != 0) {
        _free();
      }
      *(undefined1 *)(unaff_x19 + 0x93) = 0;
      *(undefined1 *)(unaff_x19 + 0x91) = 1;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x18));
      }
      lVar6 = **(long **)(unaff_x19 + 8);
      **(long **)(unaff_x19 + 8) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      *(undefined1 *)(unaff_x19 + 0x4e8) = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)plVar8 + 1;
      return auVar1 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006d8614);
  (*pcVar5)();
}

