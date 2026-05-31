
undefined8 thunk_FUN_108855ec0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 *puStack_58;
  long *plStack_50;
  undefined1 *puStack_48;
  
  plStack_a0 = (long *)0x0;
  uStack_98 = 1;
  uStack_90 = 0;
  uStack_78 = 0x60000020;
  puStack_88 = &plStack_a0;
  puStack_80 = &UNK_10b209290;
  if (param_1[3] == 0) {
    iVar1 = func_0x000105dc8000(param_1,&puStack_88);
    if (iVar1 != 0) goto LAB_108855fa4;
  }
  else {
    plStack_50 = param_1 + 4;
    uStack_68 = 0x105dc8000;
    puStack_58 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    plStack_70 = param_1;
    plStack_60 = param_1 + 3;
    uVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&plStack_a0,&UNK_10b209290,s_at_line_column_108b2e1dd,&plStack_70);
    if ((uVar2 & 1) != 0) {
LAB_108855fa4:
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&plStack_70,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108855fcc);
      (*pcVar4)();
    }
  }
  uStack_68 = uStack_98;
  plStack_70 = plStack_a0;
  plStack_60 = (long *)uStack_90;
  uVar3 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&plStack_70);
  if (*param_1 == 1) {
    uVar2 = param_1[1];
    if ((uVar2 & 3) != 1) goto LAB_108855fdc;
    puVar5 = (undefined8 *)(uVar2 - 1);
    uVar6 = *puVar5;
    puVar7 = *(undefined8 **)(uVar2 + 7);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      _free(uVar6);
    }
  }
  else {
    if ((*param_1 != 0) || (param_1[2] == 0)) goto LAB_108855fdc;
    puVar5 = (undefined8 *)param_1[1];
  }
  _free(puVar5);
LAB_108855fdc:
  _free(param_1);
  return uVar3;
}

