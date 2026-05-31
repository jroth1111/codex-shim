
void FUN_108a81dbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  
  uVar1 = __ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17hb987ddbe28dfb313E
                    (&lStack_50,param_2,param_3);
  if (lStack_50 == -0x8000000000000000) {
    FUN_1060300c0(param_1,uVar1,puStack_48);
    *puStack_48 = 0;
    lStack_50 = lStack_40;
  }
  else {
    *param_1 = 0x8000000000000001;
    param_1[1] = &UNK_10b4add80;
  }
  if (lStack_50 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puStack_48);
  return;
}

