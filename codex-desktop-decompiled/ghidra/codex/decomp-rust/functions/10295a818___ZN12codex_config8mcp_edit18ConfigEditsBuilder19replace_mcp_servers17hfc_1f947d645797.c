
void __ZN12codex_config8mcp_edit18ConfigEditsBuilder19replace_mcp_servers17hfc7661808170f535E
               (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uStack_d0;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long alStack_68 [2];
  long lStack_58;
  
  if (param_3[2] == 0) {
    lStack_a0 = 0;
    uStack_d0 = 0;
    lVar3 = *param_2;
    lVar5 = lStack_a0;
    lVar6 = lStack_a8;
  }
  else {
    if (*param_3 == 0) {
      func_0x000108a07a20(&UNK_10b2996c8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10295a974);
      (*pcVar2)();
    }
    func_0x000102c157f8(&uStack_b0,*param_3,param_3[1]);
    lVar3 = *param_2;
    lVar5 = lStack_a0;
    uStack_d0 = uStack_b0;
    lVar6 = lStack_a8;
  }
  if (lVar3 != 0) {
    lVar3 = param_2[1];
    if (lVar3 == 0) {
      lStack_70 = 0;
      lStack_a8 = lVar6;
      lStack_a0 = lVar5;
    }
    else {
      lStack_98 = param_2[2];
      lStack_70 = param_2[3];
      lStack_a8 = 0;
      uStack_88 = 0;
      lStack_a0 = lVar3;
      lStack_80 = lVar3;
      lStack_78 = lStack_98;
    }
    uStack_b0 = (ulong)(lVar3 != 0);
    uStack_90 = uStack_b0;
    while (func_0x000102a3de60(alStack_68,&uStack_b0), lVar1 = lStack_58, lVar3 = alStack_68[0],
          alStack_68[0] != 0) {
      lVar4 = alStack_68[0] + lStack_58 * 0x18;
      if (*(long *)(lVar4 + 0x1298) != 0) {
        _free(*(undefined8 *)(lVar4 + 0x12a0));
      }
      func_0x000102a1940c(lVar3 + lVar1 * 0x1b0);
    }
  }
  *param_2 = 1;
  param_2[2] = lVar6;
  param_2[1] = uStack_d0;
  param_2[3] = lVar5;
  lVar5 = *param_2;
  lVar3 = param_2[3];
  lVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar5;
  param_1[3] = lVar3;
  param_1[2] = lVar6;
  lVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar5;
  param_1[6] = param_2[6];
  return;
}

