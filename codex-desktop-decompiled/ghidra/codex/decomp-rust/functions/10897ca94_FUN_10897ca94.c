
undefined8 FUN_10897ca94(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  long *plStack_a0;
  undefined1 *puStack_98;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((param_2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_48);
  }
  else {
    uVar5 = param_2 >> 1;
    if (param_2 < 2) {
      lVar6 = 1;
    }
    else {
      lVar6 = _malloc(uVar5);
      if (lVar6 == 0) {
        plVar3 = (long *)func_0x0001087c9084(1,uVar5);
        plStack_f0 = (long *)0x0;
        uStack_e8 = 1;
        uStack_e0 = 0;
        uStack_c8 = 0x60000020;
        puStack_d8 = &plStack_f0;
        puStack_d0 = &UNK_10b2fa458;
        if (plVar3[3] == 0) {
          iVar1 = func_0x000105dc8000(plVar3,&puStack_d8);
          if (iVar1 != 0) goto LAB_10897cc04;
        }
        else {
          plStack_a0 = plVar3 + 4;
          uStack_b8 = 0x105dc8000;
          puStack_a8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          puStack_98 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          plStack_c0 = plVar3;
          plStack_b0 = plVar3 + 3;
          uVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                            (&plStack_f0,&UNK_10b2fa458,s_at_line_column_108b2e1dd,&plStack_c0);
          if ((uVar5 & 1) != 0) {
LAB_10897cc04:
            func_0x000108a07a3c(&UNK_108dc2d40,0x37,&plStack_c0,&UNK_10b2fa670,&UNK_10b2fa488);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10897cc2c);
            (*pcVar4)();
          }
        }
        uStack_b8 = uStack_e8;
        plStack_c0 = plStack_f0;
        plStack_b0 = (long *)uStack_e0;
        uVar2 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&plStack_c0);
        if (*plVar3 == 1) {
          uVar5 = plVar3[1];
          if ((uVar5 & 3) != 1) goto LAB_10897cc3c;
          puVar7 = (undefined8 *)(uVar5 - 1);
          uVar8 = *puVar7;
          puVar9 = *(undefined8 **)(uVar5 + 7);
          pcVar4 = (code *)*puVar9;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar8);
          }
          if (puVar9[1] != 0) {
            _free(uVar8);
          }
        }
        else {
          if ((*plVar3 != 0) || (plVar3[2] == 0)) goto LAB_10897cc3c;
          puVar7 = (undefined8 *)plVar3[1];
        }
        _free(puVar7);
LAB_10897cc3c:
        _free(plVar3);
        return uVar2;
      }
    }
    _memcpy(lVar6,param_1,uVar5);
    uStack_48 = uVar5;
    lStack_40 = lVar6;
    uStack_38 = uVar5;
  }
  uVar2 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
  return uVar2;
}

