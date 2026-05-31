
void __ZN16codex_app_server16outgoing_message14RequestContext13request_trace17hbad6bfb376015c13E
               (long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  __ZN10codex_otel13trace_context22span_w3c_trace_context17h70538771b6392d16E(&lStack_70);
  if (lStack_70 == -0x7fffffffffffffff) {
    lVar5 = -0x8000000000000000;
    if (*(long *)(param_2 + 0x48) == -0x8000000000000000) {
      lVar4 = *(long *)(param_2 + 0x60);
      lVar2 = -0x8000000000000000;
    }
    else {
      if (*(long *)(param_2 + 0x48) == -0x7fffffffffffffff) {
        *param_1 = -0x7fffffffffffffff;
        return;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      lVar2 = *(long *)(param_2 + 0x58);
      if (lVar2 == 0) {
        unaff_x22 = 1;
      }
      else {
        unaff_x22 = _malloc(lVar2);
        if (unaff_x22 == 0) {
          func_0x0001087c9084(1,lVar2);
          goto LAB_101880d40;
        }
      }
      _memcpy(unaff_x22,uVar1,lVar2);
      lVar4 = *(long *)(param_2 + 0x60);
    }
    if (lVar4 != -0x8000000000000000) {
      uVar1 = *(undefined8 *)(param_2 + 0x68);
      lVar5 = *(long *)(param_2 + 0x70);
      if (lVar5 == 0) {
        param_2 = 1;
      }
      else {
        param_2 = _malloc(lVar5);
        if (param_2 == 0) {
          func_0x0001087c9084(1,lVar5);
LAB_101880d40:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101880d44);
          (*pcVar3)();
        }
      }
      _memcpy(param_2,uVar1,lVar5);
    }
    *param_1 = lVar2;
    param_1[1] = unaff_x22;
    param_1[2] = lVar2;
    param_1[3] = lVar5;
    param_1[4] = param_2;
    param_1[5] = lVar5;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[3] = lStack_58;
    param_1[2] = lStack_60;
    param_1[5] = lStack_48;
    param_1[4] = lStack_50;
  }
  return;
}

