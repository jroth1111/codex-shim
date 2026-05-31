
undefined8 FUN_100a889b0(ulong param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined3 uStack_52;
  undefined8 uStack_4f;
  undefined2 *puStack_40;
  undefined *puStack_38;
  
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      func_0x000106032954(0);
      __ZN118__LT_tracing_subscriber__fmt__time__datetime__DateTime_u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h6ba2bb1fcbf08e0aE
                (&uStack_58);
      puStack_38 = &
                   __ZN88__LT_tracing_subscriber__fmt__time__datetime__DateTime_u20_as_u20_core__fmt__Display_GT_3fmt17h3a05e7b426f8e9e3E
      ;
      uVar4 = *param_2;
      lVar1 = param_2[1];
      puStack_40 = &uStack_58;
      uVar3 = (**(code **)(lVar1 + 0x28))(uVar4,s__108b3a14c,&puStack_40);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = (**(code **)(lVar1 + 0x18))(uVar4,&UNK_108cb6c83,0xe), (uVar3 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100a88b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(lVar1 + 0x20))(uVar4,0x20);
        return uVar4;
      }
    }
    else {
      uStack_58 = 0x100;
      uStack_56 = 0;
      uStack_52 = 0;
      uStack_4f = 0x1500000015;
      puStack_38 = &
                   __ZN65__LT_nu_ansi_term__ansi__Prefix_u20_as_u20_core__fmt__Display_GT_3fmt17h27c84f6899d2859dE
      ;
      uVar4 = *param_2;
      lVar1 = param_2[1];
      pcVar5 = *(code **)(lVar1 + 0x28);
      puStack_40 = &uStack_58;
      uVar3 = (*pcVar5)(uVar4,s__108b1bd74,&puStack_40);
      if ((uVar3 & 1) == 0) {
        func_0x000106032954(0);
        __ZN118__LT_tracing_subscriber__fmt__time__datetime__DateTime_u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h6ba2bb1fcbf08e0aE
                  (&uStack_58);
        puStack_38 = &
                     __ZN88__LT_tracing_subscriber__fmt__time__datetime__DateTime_u20_as_u20_core__fmt__Display_GT_3fmt17h3a05e7b426f8e9e3E
        ;
        puStack_40 = &uStack_58;
        iVar2 = (*pcVar5)(uVar4,s__108b3a14c,&puStack_40);
        if ((iVar2 == 0) ||
           (uVar3 = (**(code **)(lVar1 + 0x18))(uVar4,&UNK_108cb6c83,0xe), (uVar3 & 1) == 0)) {
          uStack_58 = 0x100;
          uStack_56 = 0;
          uStack_52 = 0;
          uStack_4f = 0x1500000015;
          puStack_40 = &uStack_58;
          puStack_38 = &
                       __ZN65__LT_nu_ansi_term__ansi__Suffix_u20_as_u20_core__fmt__Display_GT_3fmt17h4a19d4bf37d32157E
          ;
          uVar4 = (*pcVar5)(uVar4,s__108ac988c,&puStack_40);
          return uVar4;
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

