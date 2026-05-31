
void FUN_10161535c(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *extraout_x1;
  long lVar5;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *plStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long **pplStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  if (*param_2 == -0x8000000000000000) {
    plVar1 = (long *)param_2[1];
    lVar5 = param_2[2];
    if (lVar5 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(lVar5);
      if (lVar3 == 0) {
        func_0x0001087c9084(1,lVar5);
        param_2 = extraout_x1;
        goto LAB_1016153b0;
      }
    }
    _memcpy(lVar3,plVar1,lVar5);
    if (*param_3 == -0x8000000000000000 || *param_3 == 0) {
      *param_3 = lVar5;
      param_3[1] = lVar3;
      param_3[2] = lVar5;
    }
    else {
      _free(param_3[1]);
      *param_3 = lVar5;
      param_3[1] = lVar3;
      param_3[2] = lVar5;
    }
    if (lVar5 == 6) {
      if ((int)*plVar1 != 0x68636163 || *(short *)((long)plVar1 + 4) != 0x6465) goto FUN_1087e44e4;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (lVar5 == 8) {
      if (*plVar1 != 0x64656c6261736964) {
FUN_1087e44e4:
        puStack_78 = &UNK_10b220558;
        uStack_70 = 3;
        pplStack_68 = &plStack_88;
        puStack_60 = &DAT_100c7b3a0;
        ppuStack_58 = &puStack_78;
        plStack_88 = plVar1;
        lStack_80 = lVar5;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0xffffffffffffffb8,s_unknown_variant______expected_108ac2989,&pplStack_68);
        if (unaff_x23 == 0) {
          lVar5 = 1;
        }
        else {
          lVar5 = _malloc(unaff_x23);
          if (lVar5 == 0) {
            func_0x0001087c9084(1,unaff_x23);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e4560);
            (*pcVar2)();
          }
        }
        _memcpy(lVar5,unaff_x24,unaff_x23);
        param_1[3] = unaff_x23;
        param_1[4] = lVar5;
        param_1[5] = unaff_x23;
        param_1[6] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[7] = 8;
        *param_1 = 0;
        if (unaff_x25 != 0) {
          _free(unaff_x24);
        }
        return;
      }
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      if ((lVar5 != 4) || ((int)*plVar1 != 0x6576696c)) goto FUN_1087e44e4;
      *(undefined1 *)(param_1 + 1) = 2;
    }
    *param_1 = 2;
    return;
  }
LAB_1016153b0:
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(lVar3);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,lVar3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101615554);
      (*pcVar2)();
    }
  }
  _memcpy(lVar4,lVar5,lVar3);
  if (*param_3 != -0x8000000000000000 && *param_3 != 0) {
    _free(param_3[1]);
  }
  *param_3 = lVar3;
  param_3[1] = lVar4;
  param_3[2] = lVar3;
  plVar1 = (long *)param_2[1];
  lVar5 = param_2[2];
  if (lVar5 == 6) {
    if ((int)*plVar1 == 0x68636163 && *(short *)((long)plVar1 + 4) == 0x6465) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      lVar5 = *param_2;
      goto joined_r0x00010061e750;
    }
  }
  else if (lVar5 == 8) {
    if (*plVar1 == 0x64656c6261736964) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      lVar5 = *param_2;
      goto joined_r0x00010061e750;
    }
  }
  else if ((lVar5 == 4) && ((int)*plVar1 == 0x6576696c)) {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 2;
    lVar5 = *param_2;
    goto joined_r0x00010061e750;
  }
  thunk_FUN_1087e44e4(param_1,plVar1,lVar5,&UNK_10b220558,3);
  lVar5 = *param_2;
joined_r0x00010061e750:
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar1);
    return;
  }
  return;
}

