
/* WARNING: Removing unreachable block (ram,0x00010085d394) */

undefined1  [16] FUN_10085d354(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 uVar6;
  undefined1 *in_stack_00000078;
  undefined1 *in_stack_00000080;
  code *in_stack_00000088;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s_Built_in_provider_not_found_108ac6058,&stack0x000008a0);
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0,&stack0x00000480);
  *unaff_x20 = 1;
  *in_stack_00000078 = 1;
  func_0x000100e48c8c();
  if (uVar2 == 0) {
    uVar2 = 0;
LAB_10086161c:
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
  in_stack_00000080 = &stack0x00000b90;
  in_stack_00000088 =
       __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar3 = in_stack_00000480;
    puVar3[1] = in_stack_00000488;
    puVar3[2] = in_stack_00000490;
    plVar4 = (long *)_malloc(0x18);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)puVar3;
      plVar4[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar4 + 2) = 0x28;
      if ((uVar2 & 3) == 1) {
        uVar6 = *(undefined8 *)(uVar2 - 1);
        puVar3 = *(undefined8 **)(uVar2 + 7);
        pcVar5 = (code *)*puVar3;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar6);
        }
        if (puVar3[1] != 0) {
          _free(uVar6);
        }
        _free((undefined8 *)(uVar2 - 1));
      }
      uVar2 = (long)plVar4 + 1;
      goto LAB_10086161c;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100861778);
  (*pcVar5)();
}

