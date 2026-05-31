
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10073dca4(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x27;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000330,s_Error_parsing_requirements_file___108ac5c0b,&stack0x00000640);
  uVar3 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00000330);
  FUN_100de3b58(&stack0x00000358);
  plVar4 = (long *)(*
                   ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                   )();
  if ((char)plVar4[4] != '\x01') {
    if ((char)plVar4[4] == '\x02') {
      FUN_107c05e20(&UNK_10b38f438);
      goto LAB_10073dfa0;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar4,&DAT_1055621b8)
    ;
    *(undefined1 *)(plVar4 + 4) = 1;
  }
  if (*plVar4 == 0) {
    *plVar4 = -1;
    if ((plVar4[1] & 0x7fffffffffffffffU) == 0) {
      lVar5 = 0;
    }
    else {
      _free(plVar4[2]);
      lVar5 = *plVar4 + 1;
    }
    *plVar4 = lVar5;
    plVar4[1] = -0x8000000000000000;
    if (in_stack_00000010 != 0) {
      _free(in_stack_00000008);
    }
    if (unaff_x27 != 0) {
      _free();
    }
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    return auVar1 << 0x40;
  }
  __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38f568);
LAB_10073dfa0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10073dfa4);
  (*pcVar2)();
}

