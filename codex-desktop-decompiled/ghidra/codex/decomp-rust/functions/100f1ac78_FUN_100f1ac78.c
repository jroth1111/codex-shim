
bool FUN_100f1ac78(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000030;
  undefined *in_stack_00000038;
  
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x00000008,param_2,s_____H_108ad79bb,&stack0x00000030);
  uVar1 = in_stack_00000010;
  if (iVar2 != 0) {
    if (in_stack_00000010 != 0) goto LAB_100f1ace0;
    in_stack_00000018 = &UNK_108cd94f5;
    in_stack_00000020 = 0x19;
    in_stack_00000030 = &stack0x00000018;
    in_stack_00000038 = &DAT_100c7b3a0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_<__>__write_ansi_incorrectly_err_108adbda9,&stack0x00000030,&UNK_10b2525b0);
  }
  if ((uVar1 & 3) == 1) {
    uVar4 = *(undefined8 *)(uVar1 - 1);
    puVar5 = *(undefined8 **)(uVar1 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(uVar1 - 1));
  }
  in_stack_00000010 = 0;
LAB_100f1ace0:
  return in_stack_00000010 != 0;
}

