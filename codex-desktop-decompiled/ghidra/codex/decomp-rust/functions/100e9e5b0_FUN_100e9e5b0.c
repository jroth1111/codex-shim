
bool FUN_100e9e5b0(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong in_stack_00000008;
  undefined *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined *in_stack_00000028;
  
  iVar1 = __ZN4core3fmt5write17h64810b21425781ecE();
  if (iVar1 != 0) {
    if (in_stack_00000008 != 0) goto LAB_100e9e618;
    in_stack_00000010 = &UNK_108cd9444;
    in_stack_00000018 = 0x2e;
    in_stack_00000020 = &stack0x00000010;
    in_stack_00000028 = &DAT_100c7b3a0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_<__>__write_ansi_incorrectly_err_108adbda9,&stack0x00000020,&UNK_10b2525b0);
  }
  if ((in_stack_00000008 & 3) == 1) {
    uVar3 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar4 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free((undefined8 *)(in_stack_00000008 - 1));
  }
  in_stack_00000008 = 0;
LAB_100e9e618:
  return in_stack_00000008 != 0;
}

