
void __ZN9codex_mcp10codex_apps34filter_disallowed_codex_apps_tools17hbaab08184557f9b2E
               (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 auStack_208 [46];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  lVar9 = param_2[2] * 0x1a8;
  lVar1 = lVar3 + lVar9;
  lVar6 = lVar3;
  lVar8 = lVar3;
  lVar7 = lVar3;
  lVar4 = param_2[2];
  while (lVar4 != 0) {
    _memcpy(auStack_208,lVar8,0x1a8);
    if ((lStack_98 == -0x8000000000000000) ||
       (uVar5 = func_0x00010558abf8(uStack_90,uStack_88), (uVar5 & 1) != 0)) {
      _memcpy(lVar7,auStack_208,0x1a8);
      lVar7 = lVar7 + 0x1a8;
    }
    else {
      FUN_103dac280(auStack_208);
    }
    lVar8 = lVar8 + 0x1a8;
    lVar9 = lVar9 + -0x1a8;
    lVar6 = lVar1;
    lVar4 = lVar9;
  }
  lVar8 = ((ulong)(lVar1 - lVar6) >> 3) * 0x21cfb2b78c13521d + 1;
  auStack_208[0] = uVar2;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    FUN_103dac280(lVar6);
    lVar6 = lVar6 + 0x1a8;
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  param_1[2] = ((ulong)(lVar7 - lVar3) >> 3) * 0x21cfb2b78c13521d;
  return;
}

