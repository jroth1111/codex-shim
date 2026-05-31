
undefined8 FUN_1089a84b4(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 *puStack_38;
  long lStack_30;
  undefined1 *puStack_28;
  
  puStack_68 = (undefined1 *)&lStack_80;
  lStack_80 = 0;
  uStack_78 = 1;
  uStack_58 = 0x60000020;
  uStack_70 = 0;
  puStack_60 = &UNK_10b342e20;
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar2 = func_0x000105dc8000(param_1,&puStack_68);
    if (iVar2 != 0) goto LAB_1089a858c;
  }
  else {
    lStack_30 = param_1 + 0x20;
    uStack_48 = 0x105dc8000;
    puStack_38 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_28 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_68 = (undefined1 *)&lStack_80;
    lStack_50 = param_1;
    plStack_40 = (long *)(param_1 + 0x18);
    uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&lStack_80,&UNK_10b342e20,s_at_line_column_108b2e1dd,&lStack_50);
    if ((uVar3 & 1) != 0) {
LAB_1089a858c:
      func_0x000108a07a3c(&UNK_108e660f0,0x37,&lStack_50,&UNK_10b342e68,&UNK_10b342e50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1089a85b4);
      (*pcVar1)();
    }
  }
  uStack_48 = uStack_78;
  lStack_50 = lStack_80;
  plStack_40 = (long *)uStack_70;
  uVar4 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&lStack_50);
  FUN_104a59f1c(param_1);
  _free(param_1);
  return uVar4;
}

