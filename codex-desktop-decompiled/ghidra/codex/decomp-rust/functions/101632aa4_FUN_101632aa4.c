
void FUN_101632aa4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_stack_000000c8;
  
  do {
    lVar2 = param_1;
    lVar3 = *(long *)(lVar2 + -0x30);
    uVar4 = *(undefined8 *)(lVar2 + -0x28);
    if (lVar3 == -0x8000000000000000) break;
    *(undefined8 *)(unaff_x24 + 0x10) = *(undefined8 *)(lVar2 + -0x20);
    *(undefined8 *)(unaff_x24 + 8) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + -0x10);
    lVar5 = *(long *)(lVar2 + -0x18);
    __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s_____108ad9aee,&stack0x0000c0e0);
    if (lVar5 != 0) {
      _free(uVar4);
    }
    if (lVar3 != 0) {
      _free(in_stack_000000c8);
    }
    param_1 = lVar2 + 0x30;
  } while (lVar2 != unaff_x23);
  *(long *)(unaff_x22 + 0x2558) = lVar2;
  FUN_100c99b10(&stack0x00009ba0);
  __ZN9codex_cli11exit_status18handle_exit_status17h899c2ccb8719dbecE
            (*(undefined4 *)(unaff_x20 + 0x28b8));
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101632b68);
  (*pcVar1)();
}

