
void __ZN4core9panicking13assert_failed17hec2b10233cd65be6E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_105c7816c(param_1,param_2,&UNK_10b4382d0,param_4,param_5,param_4,param_5,
                                 param_6,param_2,param_3);
  lVar5 = *plVar2;
  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h89930ede463b531fE();
  uVar1 = plVar2[2];
  if ((ulong)(lVar5 - plVar2[3]) < uVar1) {
    uVar3 = lVar5 - uVar1;
    uVar4 = plVar2[3] - uVar3;
    if (uVar4 < uVar3 && uVar4 <= (ulong)(*plVar2 - lVar5)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_10b61b3a8)(plVar2[1] + lVar5 * 0x50,plVar2[1],uVar4 * 0x50);
      return;
    }
    lVar5 = *plVar2 - uVar3;
    _memmove(plVar2[1] + lVar5 * 0x50,plVar2[1] + uVar1 * 0x50,uVar3 * 0x50);
    plVar2[2] = lVar5;
  }
  return;
}

