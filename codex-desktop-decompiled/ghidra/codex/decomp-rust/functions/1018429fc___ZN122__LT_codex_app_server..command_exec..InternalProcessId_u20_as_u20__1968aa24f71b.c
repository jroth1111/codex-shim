
void __ZN122__LT_codex_app_server__command_exec__InternalProcessId_u20_as_u20_codex_app_server__command_exec__InternalProcessIdExt_GT_10error_repr17hdfb39f97041d5aaaE
               (long *param_1,long *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long **pplVar8;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long *plStack_88;
  long *aplStack_80 [3];
  long **pplStack_68;
  long *plStack_60;
  long **pplStack_58;
  
  if (*param_2 == -0x8000000000000000) {
    unaff_x22 = param_2[1];
    if (-1 < unaff_x22) {
      plVar3 = (long *)_malloc(0x13);
      if (plVar3 != (long *)0x0) {
        pplVar8 = (long **)0x0;
        lVar10 = 0x13;
        pplStack_68 = (long **)0x13;
        pplStack_58 = (long **)0x0;
        goto LAB_10184294c;
      }
      goto LAB_101842a74;
    }
    plVar3 = (long *)_malloc(0x14);
    if (plVar3 != (long *)0x0) {
      lVar10 = 0x14;
      pplStack_68 = (long **)0x14;
      *(undefined1 *)plVar3 = 0x2d;
      pplVar8 = (long **)0x1;
      pplStack_58 = (long **)0x1;
LAB_10184294c:
      lVar4 = -unaff_x22;
      if (-1 < unaff_x22) {
        lVar4 = unaff_x22;
      }
      plStack_60 = plVar3;
      lVar4 = FUN_1055b41a0(lVar4,aplStack_80,0x13);
      uVar9 = 0x13 - lVar4;
      if ((ulong)(lVar10 - (long)pplVar8) < uVar9) {
        FUN_1088bb36c(&pplStack_68,pplVar8,uVar9,1,1);
        plVar3 = plStack_60;
        pplVar8 = pplStack_58;
      }
      _memcpy((undefined1 *)((long)plVar3 + (long)pplVar8),(long)aplStack_80 + lVar4,uVar9);
      param_1[2] = (long)pplVar8 + uVar9;
      param_1[1] = (long)plStack_60;
      *param_1 = (long)pplStack_68;
      return;
    }
  }
  else {
    unaff_x20 = param_2[1];
    lVar10 = param_2[2];
    plStack_88 = param_2;
    plStack_60 = (long *)_malloc(0x80);
    if (plStack_60 != (long *)0x0) {
      pplStack_68 = (long **)0x80;
      *(undefined1 *)plStack_60 = 0x22;
      pplStack_58 = (long **)0x1;
      FUN_10183967c(&pplStack_68,unaff_x20,lVar10);
      if (pplStack_68 == pplStack_58) {
        FUN_1088bb36c(&pplStack_68,pplStack_58,1,1,1);
        plVar3 = plStack_60;
        *(undefined1 *)((long)plStack_60 + (long)pplStack_58) = 0x22;
        if (pplStack_68 == (long **)0x8000000000000000) {
          aplStack_80[0] = plStack_60;
          pplStack_68 = &plStack_88;
          plStack_60 = (long *)&DAT_10192bd9c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s__108add0bf,&pplStack_68)
          ;
          if (*plVar3 == 1) {
            FUN_10194d0ac(plVar3 + 1);
          }
          else if ((*plVar3 == 0) && (plVar3[2] != 0)) {
            _free(plVar3[1]);
          }
          _free(plVar3);
          return;
        }
      }
      else {
        *(undefined1 *)((long)plStack_60 + (long)pplStack_58) = 0x22;
      }
      *param_1 = (long)pplStack_68;
      param_1[1] = (long)plStack_60;
      param_1[2] = (long)pplStack_58 + 1;
      return;
    }
    func_0x0001087c9084(1,0x80);
LAB_101842a74:
    func_0x0001087c9084(1,0x13);
  }
  uVar5 = func_0x0001087c9084(1,0x14);
  _free(unaff_x20);
  auVar11 = __Unwind_Resume(uVar5);
  plVar6 = auVar11._8_8_;
  plVar3 = auVar11._0_8_;
  lVar10 = -0x8000000000000000;
  if (*plVar6 == -0x8000000000000000) {
    lVar7 = -0x8000000000000000;
    uVar1 = (undefined1)plVar6[6];
    lVar4 = plVar6[3];
  }
  else {
    lVar4 = plVar6[1];
    lVar7 = plVar6[2];
    if (lVar7 == 0) {
      unaff_x22 = 1;
    }
    else {
      unaff_x22 = _malloc(lVar7);
      if (unaff_x22 == 0) {
        func_0x0001087c9084(1,lVar7);
        goto LAB_101842bb8;
      }
    }
    _memcpy(unaff_x22,lVar4,lVar7);
    uVar1 = (undefined1)plVar6[6];
    lVar4 = plVar6[3];
  }
  if (lVar4 != -0x8000000000000000) {
    lVar4 = plVar6[4];
    lVar10 = plVar6[5];
    if (lVar10 == 0) {
      plVar6 = (long *)0x1;
    }
    else {
      plVar6 = (long *)_malloc(lVar10);
      if (plVar6 == (long *)0x0) {
LAB_101842bb8:
        func_0x0001087c9084(1,lVar10);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101842bc8);
        (*pcVar2)();
      }
    }
    _memcpy(plVar6,lVar4,lVar10);
  }
  *plVar3 = lVar7;
  plVar3[1] = unaff_x22;
  *(undefined1 *)(plVar3 + 6) = uVar1;
  plVar3[2] = lVar7;
  plVar3[3] = lVar10;
  plVar3[4] = (long)plVar6;
  plVar3[5] = lVar10;
  return;
}

