
void FUN_100422234(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x1;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__Mismatch_between_definition_and_108ac57ee,&stack0x00000070,&UNK_10b21f750);
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  __Unwind_Resume(uVar1);
  FUN_107c05ccc();
                    /* WARNING: Could not recover jumptable at 0x000100422290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1[1] + 0x18))(*extraout_x1,&UNK_108c61050,4);
  return;
}

