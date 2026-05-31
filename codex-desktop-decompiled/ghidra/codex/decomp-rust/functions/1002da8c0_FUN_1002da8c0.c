
undefined8 FUN_1002da8c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *unaff_x23;
  
  iVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x00000008,param_2,s__108b2cce0,&stack0x00000030);
  if ((iVar1 == 0) &&
     (uVar2 = __ZN68__LT_core__fmt__builders__PadAdapter_u20_as_u20_core__fmt__Write_GT_9write_str17h0a67632c7cefcdb4E
                        (&stack0x00000008,&UNK_108f5892c,2), (uVar2 & 1) == 0)) {
    uVar3 = (*unaff_x23)();
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

