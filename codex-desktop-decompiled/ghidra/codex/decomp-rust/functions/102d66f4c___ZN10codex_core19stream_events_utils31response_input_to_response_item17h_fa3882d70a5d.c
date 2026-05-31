
void __ZN10codex_core19stream_events_utils31response_input_to_response_item17hfbdc87996939a86eE
               (undefined8 *param_1,ulong *param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x24;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar7 = 2;
  }
  if ((long)uVar7 < 2) {
    if (uVar7 == 0) {
      uVar6 = 0x11;
      goto LAB_102d670d0;
    }
    uVar7 = param_2[7];
    uVar10 = param_2[8];
    if (uVar10 == 0) {
      lVar3 = 1;
      _memcpy(1,uVar7,0);
      uVar1 = (uint)param_2[1];
    }
    else {
      lVar3 = _malloc(uVar10);
      if (lVar3 == 0) goto LAB_102d672d0;
      _memcpy(lVar3,uVar7,uVar10);
      uVar1 = (uint)param_2[1];
    }
    if ((uVar1 & 1) == 0) {
      uVar7 = param_2[3];
      uVar8 = param_2[4];
      if (uVar8 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(uVar8);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,uVar8);
          goto LAB_102d67338;
        }
      }
      _memcpy(lVar5,uVar7,uVar8);
      uVar6 = 0;
      uStack_88 = uVar8;
    }
    else {
      func_0x0001035acc8c(&uStack_88,param_2[3],param_2[4]);
      uVar6 = 1;
      uVar8 = uStack_78;
      lVar5 = lStack_80;
    }
    uVar7 = param_2[5];
    param_1[6] = uVar10;
    param_1[7] = lVar3;
    param_1[8] = uVar10;
    *param_1 = 7;
    param_1[1] = uVar6;
    param_1[2] = uStack_88;
    param_1[3] = lVar5;
    param_1[4] = uVar8;
    *(char *)(param_1 + 5) = (char)uVar7;
    return;
  }
  if (uVar7 == 2) {
    __ZN14codex_protocol6models53__LT_impl_u20_codex_protocol__mcp__CallToolResult_GT_31as_function_call_output_payload17h9a6c4b9e419acd07E
              (&uStack_88,param_2 + 3);
    uVar7 = param_2[1];
    param_2 = (ulong *)param_2[2];
    if (param_2 == (ulong *)0x0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(param_2);
      if (lVar3 == 0) {
LAB_102d672dc:
        func_0x0001087c9084(1,param_2);
        goto LAB_102d67338;
      }
    }
    _memcpy(lVar3,uVar7,param_2);
    param_1[2] = lStack_80;
    param_1[1] = uStack_88;
    param_1[4] = uStack_70;
    param_1[3] = uStack_78;
    param_1[5] = uStack_68;
    param_1[6] = param_2;
    param_1[7] = lVar3;
    param_1[8] = param_2;
    uVar6 = 7;
LAB_102d670d0:
    *param_1 = uVar6;
    return;
  }
  if (uVar7 == 3) {
    uVar7 = param_2[7];
    uVar10 = param_2[8];
    if (uVar10 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(uVar10);
      if (lVar3 == 0) goto LAB_102d672d0;
    }
    _memcpy(lVar3,uVar7,uVar10);
    uVar7 = 0x8000000000000000;
    if (param_2[9] == 0x8000000000000000) {
      uVar1 = (uint)param_2[1];
    }
    else {
      uVar8 = param_2[10];
      uVar7 = param_2[0xb];
      if (uVar7 == 0) {
        unaff_x24 = 1;
      }
      else {
        unaff_x24 = _malloc(uVar7);
        if (unaff_x24 == 0) {
          func_0x0001087c9084(1,uVar7);
          goto LAB_102d67338;
        }
      }
      _memcpy(unaff_x24,uVar8,uVar7);
      uVar1 = (uint)param_2[1];
    }
    if ((uVar1 & 1) == 0) {
      uVar8 = param_2[3];
      uVar9 = param_2[4];
      if (uVar9 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(uVar9);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,uVar9);
          goto LAB_102d67338;
        }
      }
      _memcpy(lVar5,uVar8,uVar9);
      uVar6 = 0;
      uStack_88 = uVar9;
    }
    else {
      func_0x0001035acc8c(&uStack_88,param_2[3],param_2[4]);
      uVar6 = 1;
      uVar9 = uStack_78;
      lVar5 = lStack_80;
    }
    uVar8 = param_2[5];
    param_1[6] = uVar10;
    param_1[7] = lVar3;
    *param_1 = 9;
    param_1[1] = uVar6;
    param_1[2] = uStack_88;
    param_1[3] = lVar5;
    param_1[4] = uVar9;
    *(char *)(param_1 + 5) = (char)uVar8;
    param_1[8] = uVar10;
    param_1[9] = uVar7;
    param_1[10] = unaff_x24;
    param_1[0xb] = uVar7;
    return;
  }
  uVar7 = param_2[2];
  uVar10 = param_2[3];
  if (uVar10 == 0) {
    lVar3 = 1;
    _memcpy(1,uVar7,0);
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    if (uVar8 != 0) goto LAB_102d6701c;
LAB_102d67158:
    lVar5 = 1;
    _memcpy(1,uVar7,uVar8);
    uVar7 = param_2[8];
    uVar9 = param_2[9];
  }
  else {
    lVar3 = _malloc(uVar10);
    if (lVar3 == 0) {
LAB_102d672d0:
      func_0x0001087c9084(1,uVar10);
      goto LAB_102d672dc;
    }
    _memcpy(lVar3,uVar7,uVar10);
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    if (uVar8 == 0) goto LAB_102d67158;
LAB_102d6701c:
    lVar5 = _malloc(uVar8);
    if (lVar5 == 0) {
      func_0x0001087c9084(1,uVar8);
      goto LAB_102d67338;
    }
    _memcpy(lVar5,uVar7,uVar8);
    uVar7 = param_2[8];
    uVar9 = param_2[9];
  }
  if (uVar9 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(uVar9);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,uVar9);
LAB_102d67338:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d6733c);
      (*pcVar2)();
    }
  }
  _memcpy(lVar4,uVar7,uVar9);
  FUN_10373d728(&uStack_88,param_2[0xb],param_2[0xc]);
  param_1[2] = lVar5;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = lVar4;
  param_1[6] = uVar9;
  param_1[8] = lStack_80;
  param_1[7] = uStack_88;
  *param_1 = 10;
  param_1[1] = uVar8;
  param_1[9] = uStack_78;
  param_1[10] = uVar10;
  param_1[0xb] = lVar3;
  param_1[0xc] = uVar10;
  return;
}

