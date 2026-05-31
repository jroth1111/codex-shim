
void FUN_10112d238(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 *puStack_58;
  long *plStack_50;
  undefined1 *puStack_48;
  
  lStack_a0 = 0;
  uStack_98 = 1;
  lStack_90 = 0;
  uStack_78 = 0x60000020;
  plStack_88 = &lStack_a0;
  puStack_80 = &UNK_10b209290;
  if (param_2[3] == 0) {
    iVar4 = func_0x000105dc8000(param_2,&plStack_88);
    if (iVar4 != 0) goto LAB_10112d308;
  }
  else {
    plStack_50 = param_2 + 4;
    uStack_68 = 0x105dc8000;
    puStack_58 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    plStack_70 = param_2;
    plStack_60 = param_2 + 3;
    uVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&lStack_a0,&UNK_10b209290,s_at_line_column_108b2e1dd,&plStack_70);
    if ((uVar5 & 1) != 0) {
LAB_10112d308:
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&plStack_70,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_10112d32c;
    }
  }
  lVar2 = lStack_90;
  uVar8 = uStack_98;
  lVar1 = lStack_a0;
  if (lStack_90 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lStack_90);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar2);
LAB_10112d32c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10112d330);
      (*pcVar3)();
    }
  }
  _memcpy(lVar6,uVar8,lVar2);
  param_1[3] = lVar2;
  param_1[4] = lVar6;
  param_1[5] = lVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 8;
  *param_1 = 0;
  if (lVar1 != 0) {
    _free(uVar8);
  }
  if (*param_2 == 1) {
    uVar5 = param_2[1];
    if ((uVar5 & 3) != 1) goto LAB_10112d3a0;
    puVar7 = (undefined8 *)(uVar5 - 1);
    uVar8 = *puVar7;
    puVar9 = *(undefined8 **)(uVar5 + 7);
    pcVar3 = (code *)*puVar9;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar8);
    }
    if (puVar9[1] != 0) {
      _free(uVar8);
    }
  }
  else {
    if ((*param_2 != 0) || (param_2[2] == 0)) goto LAB_10112d3a0;
    puVar7 = (undefined8 *)param_2[1];
  }
  _free(puVar7);
LAB_10112d3a0:
  _free(param_2);
  return;
}

