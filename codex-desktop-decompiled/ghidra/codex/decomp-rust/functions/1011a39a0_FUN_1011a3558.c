
/* WARNING: Type propagation algorithm not settling */

void FUN_1011a3558(long *param_1,long *param_2,ulong ***param_3)

{
  ulong ***pppuVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong ***pppuVar7;
  long lVar8;
  ulong ***pppuVar9;
  ulong ***extraout_x8;
  ulong ***pppuVar10;
  ulong ***extraout_x10;
  ulong ***extraout_x11;
  long *plStack_b8;
  ulong ***pppuStack_b0;
  undefined8 ****ppppuStack_a8;
  ulong ***pppuStack_a0;
  undefined8 ****ppppuStack_98;
  ulong ***pppuStack_90;
  ulong uStack_88;
  ulong ***pppuStack_80;
  undefined8 ****ppppuStack_78;
  ulong ***pppuStack_70;
  ulong uStack_68;
  ulong ***pppuStack_60;
  undefined8 ****ppppuStack_58;
  ulong ***pppuStack_50;
  ulong uStack_48;
  
  lVar6 = *param_2;
  pppuVar7 = param_3;
  if (lVar6 == 0) {
    pppuVar10 = (ulong ***)param_2[5];
    pppuVar9 = pppuVar10;
    if ((ulong ***)param_2[3] <= pppuVar10) {
      pppuVar9 = (ulong ***)param_2[3];
    }
    if (pppuVar9 <= param_3) {
      pppuVar7 = pppuVar9;
    }
  }
  else {
    if (lVar6 != 1) {
      return;
    }
    pppuVar9 = (ulong ***)0x0;
    if ((ulong)param_2[3] <= (ulong)param_2[2]) {
      pppuVar9 = (ulong ***)(param_2[2] - param_2[3]);
    }
    pppuVar10 = (ulong ***)param_2[5];
    pppuVar1 = pppuVar10;
    if (pppuVar9 <= pppuVar10) {
      pppuVar1 = pppuVar9;
    }
    if (pppuVar1 <= param_3) {
      pppuVar7 = pppuVar1;
    }
  }
  if (pppuVar7 == (ulong ***)0x0) {
    return;
  }
  plStack_b8 = param_2;
  pppuStack_b0 = param_3;
  if (param_1[2] != 0) {
    if (lVar6 == 2) {
      pppuVar7 = (ulong ***)0x0;
    }
    else if (lVar6 == 1) {
      pppuVar7 = (ulong ***)0x0;
      if ((ulong)param_2[3] <= (ulong)param_2[2]) {
        pppuVar7 = (ulong ***)(param_2[2] - param_2[3]);
      }
    }
    else {
      pppuVar7 = (ulong ***)param_2[3];
    }
    if (pppuVar7 <= pppuVar10) {
      pppuVar10 = pppuVar7;
    }
    pppuVar7 = param_3;
    if (pppuVar10 <= param_3) {
      pppuVar7 = pppuVar10;
    }
    if ((ulong ***)(param_1[2] - param_1[1]) < pppuVar7) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,pppuVar7,1);
      lVar6 = *param_2;
    }
    while( true ) {
      if (lVar6 == 2) {
        return;
      }
      pppuVar7 = param_3;
      if (lVar6 == 1) {
        pppuVar9 = (ulong ***)0x0;
        if ((ulong)param_2[3] <= (ulong)param_2[2]) {
          pppuVar9 = (ulong ***)(param_2[2] - param_2[3]);
        }
        pppuVar10 = (ulong ***)param_2[5];
        pppuVar1 = pppuVar10;
        if (pppuVar9 <= pppuVar10) {
          pppuVar1 = pppuVar9;
        }
        if (pppuVar1 <= param_3) {
          pppuVar7 = pppuVar1;
        }
      }
      else {
        pppuVar10 = (ulong ***)param_2[5];
        pppuVar9 = pppuVar10;
        if ((ulong ***)param_2[3] <= pppuVar10) {
          pppuVar9 = (ulong ***)param_2[3];
        }
        if (pppuVar9 <= param_3) {
          pppuVar7 = pppuVar9;
        }
      }
      if (pppuVar7 == (ulong ***)0x0) {
        return;
      }
      if (lVar6 == 2) {
        pppuVar7 = (ulong ***)0x0;
        lVar6 = 1;
      }
      else if (lVar6 == 1) {
        uVar2 = param_2[2];
        uVar4 = uVar2;
        if ((ulong)param_2[3] <= uVar2) {
          uVar4 = param_2[3];
        }
        pppuVar7 = (ulong ***)(uVar2 - uVar4);
        lVar6 = param_2[1] + uVar4;
      }
      else {
        lVar6 = param_2[2];
        pppuVar7 = (ulong ***)param_2[3];
      }
      if (pppuVar7 <= pppuVar10) {
        pppuVar10 = pppuVar7;
      }
      pppuVar7 = param_3;
      if (pppuVar10 <= param_3) {
        pppuVar7 = pppuVar10;
      }
      lVar8 = param_1[1];
      if ((ulong ***)(param_1[2] - lVar8) < pppuVar7) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,pppuVar7,1);
        lVar8 = param_1[1];
      }
      _memcpy(*param_1 + lVar8,lVar6,pppuVar7);
      pppuVar9 = (ulong ***)(param_1[2] - param_1[1]);
      if (pppuVar9 < pppuVar7) break;
      param_1[1] = (long)(param_1[1] + (long)pppuVar7);
      if ((ulong ***)param_2[5] < pppuVar7) goto LAB_1011a396c;
      lVar6 = *param_2;
      if (lVar6 != 2) {
        if (lVar6 != 1) {
          pppuVar9 = (ulong ***)param_2[3];
          pppuStack_80 = pppuVar7;
          if (pppuVar7 <= pppuVar9) {
            param_2[2] = (long)(param_2[2] + (long)pppuVar7);
            param_2[3] = (long)pppuVar9 - (long)pppuVar7;
            goto LAB_1011a367c;
          }
          goto LAB_1011a3984;
        }
        uVar4 = param_2[3];
        pppuVar9 = (ulong ***)0x0;
        if (uVar4 <= (ulong)param_2[2]) {
          pppuVar9 = (ulong ***)(param_2[2] - uVar4);
        }
        if (pppuVar7 <= pppuVar9) {
          param_2[3] = (long)(uVar4 + (long)pppuVar7);
          goto LAB_1011a367c;
        }
        goto LAB_1011a39b8;
      }
LAB_1011a367c:
      param_2[5] = param_2[5] - (long)pppuVar7;
      param_3 = (ulong ***)((long)param_3 - (long)pppuVar7);
    }
    ppppuStack_a8 = (undefined8 ****)pppuVar7;
    pppuStack_a0 = pppuVar9;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&ppppuStack_a8);
LAB_1011a396c:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23,&UNK_10b24a6b8);
    pppuVar9 = extraout_x10;
LAB_1011a3984:
    ppppuStack_a8 = &pppuStack_80;
    pppuStack_a0 = (ulong ***)&DAT_100c929e0;
    ppppuStack_98 = &pppuStack_60;
    pppuStack_90 = (ulong ***)&DAT_100c929e0;
    pppuStack_60 = pppuVar9;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__cannot_advance_past__remaining__108aba12e,&ppppuStack_a8,&UNK_10b243fb8);
    pppuVar9 = extraout_x11;
LAB_1011a39b8:
    ppppuStack_a8 = (undefined8 ****)pppuVar7;
    pppuStack_a0 = pppuVar9;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&ppppuStack_a8);
    ppppuStack_78 = (undefined8 ****)extraout_x8;
LAB_1011a39c4:
    pppuStack_80 = param_3;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppuStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011a39d4);
    (*pcVar3)();
  }
  if (lVar6 == 2) {
    param_3 = (ulong ***)0x0;
  }
  else {
    if (lVar6 == 1) {
      pppuVar7 = (ulong ***)0x0;
      if ((ulong)param_2[3] <= (ulong)param_2[2]) {
        pppuVar7 = (ulong ***)(param_2[2] - param_2[3]);
      }
    }
    else {
      pppuVar7 = (ulong ***)param_2[3];
    }
    if (pppuVar7 <= pppuVar10) {
      pppuVar10 = pppuVar7;
    }
    if (pppuVar10 <= param_3) {
      param_3 = pppuVar10;
    }
  }
  FUN_100f305dc(&pppuStack_80,&plStack_b8,param_3);
  uVar4 = (*(code *)pppuStack_80[3])(&uStack_68);
  if ((uVar4 & 1) == 0) {
    ppppuStack_98 = ppppuStack_78;
    pppuStack_a0 = pppuStack_80;
    uStack_88 = uStack_68;
    pppuStack_90 = pppuStack_70;
    ppppuStack_58 = ppppuStack_78;
    pppuStack_60 = pppuStack_80;
    uStack_48 = uStack_68;
    pppuStack_50 = pppuStack_70;
    lVar6 = param_1[1];
    if ((ulong ***)(param_1[2] - lVar6) < pppuStack_70) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,pppuStack_70,1);
      lVar6 = param_1[1];
    }
    _memcpy(*param_1 + lVar6,ppppuStack_78,pppuStack_70);
    ppppuStack_78 = (undefined8 ****)(param_1[2] - param_1[1]);
    param_3 = pppuStack_70;
    if (pppuStack_70 <= ppppuStack_78) {
      param_1[1] = (long)(param_1[1] + (long)pppuStack_70);
      (*(code *)pppuStack_60[4])(&uStack_48,ppppuStack_58,pppuStack_50);
      return;
    }
    goto LAB_1011a39c4;
  }
  ppppuStack_58 = ppppuStack_78;
  pppuStack_60 = pppuStack_80;
  uStack_48 = uStack_68;
  pppuStack_50 = pppuStack_70;
  (*(code *)pppuStack_80[2])(&pppuStack_a0,&uStack_48,ppppuStack_78,pppuStack_70);
  ppppuStack_a8 = (undefined8 ****)0x0;
  plVar5 = (long *)param_1[3];
  if (((ulong)plVar5 & 1) == 0) {
    lVar6 = plVar5[4];
    plVar5[4] = lVar6 + -1;
    LORelease();
    if (lVar6 != 1) goto LAB_1011a393c;
    if (*plVar5 != 0) {
      _free(plVar5[1]);
    }
  }
  else {
    if (param_1[2] + ((ulong)plVar5 >> 5) == 0) goto LAB_1011a393c;
    plVar5 = (long *)(*param_1 - ((ulong)plVar5 >> 5));
  }
  _free(plVar5);
LAB_1011a393c:
  param_1[1] = (long)ppppuStack_98;
  *param_1 = (long)pppuStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = (long)pppuStack_90;
  return;
}

