
void __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor35normalize_thread_metadata_git_field17h0087086d64aae4c2E
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  lVar5 = *param_2;
  if (lVar5 == -0x8000000000000000) {
    uVar6 = 0x8000000000000000;
  }
  else {
    if (lVar5 != -0x7fffffffffffffff) {
      lVar1 = param_2[1];
      uStack_78 = param_3;
      uStack_70 = param_4;
      auVar7 = FUN_10196f134(lVar1,param_2[2]);
      lVar4 = auVar7._8_8_;
      if (lVar4 == 0) {
        puStack_50 = &uStack_78;
        puStack_48 = &DAT_10192d9a4;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_68,s_must_not_be_empty_108add767,&puStack_50);
        param_1[1] = uStack_60;
        *param_1 = uStack_68;
        param_1[2] = uStack_58;
        param_1[3] = 0x8000000000000005;
        param_1[0xc] = 0xffffffffffff80a8;
        if (lVar5 == 0) {
          return;
        }
        _free(lVar1);
        return;
      }
      lVar3 = _malloc(lVar4);
      if (lVar3 != 0) {
        _memcpy(lVar3,auVar7._0_8_,lVar4);
        param_1[2] = lVar3;
        param_1[3] = lVar4;
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar4;
        if (lVar5 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar1);
        return;
      }
      func_0x0001087c9084(1,lVar4);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101894a44);
      (*pcVar2)();
    }
    uVar6 = 0x8000000000000001;
  }
  param_1[1] = uVar6;
  *param_1 = 0x8000000000000000;
  return;
}

