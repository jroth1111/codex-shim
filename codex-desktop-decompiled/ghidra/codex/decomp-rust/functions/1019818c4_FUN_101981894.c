
void FUN_101981894(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if (param_2 == 0) {
    puStack_30 = &uStack_40;
    puStack_28 = &
                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    uStack_40 = param_4;
    uStack_38 = param_5;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (auStack_58,s_Managed_config_file_has_no_paren_108ac5c60,&puStack_30);
    param_3 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,auStack_58);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

