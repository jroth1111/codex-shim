
void __ZN9quick_xml2se6Indent8increase17hda8f8dc614cd6dbfE(ulong *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  uVar4 = *param_1;
  uVar5 = uVar4 ^ 0x8000000000000000;
  if (-1 < (long)uVar4) {
    uVar5 = 1;
  }
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      uVar6 = param_1[2];
      uVar5 = param_1[4] + param_1[3];
      uVar2 = uVar5 - uVar6;
      param_1[4] = uVar5;
      if (uVar6 <= uVar5 && uVar2 != 0) {
        uVar1 = *(undefined1 *)((long)param_1 + 0x29);
        if (uVar4 - uVar6 < uVar2) {
          func_0x000108a2e010(param_1,uVar6,uVar2);
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          puVar3 = (undefined1 *)(uVar5 + uVar6);
        }
        else {
          uVar5 = param_1[1];
          puVar3 = (undefined1 *)(uVar5 + uVar6);
        }
        if (1 < uVar2) {
          _memset(puVar3,uVar1,uVar2 - 1);
          uVar6 = uVar6 + (uVar2 - 1);
          puVar3 = (undefined1 *)(uVar5 + uVar6);
        }
        *puVar3 = uVar1;
        param_1[2] = uVar6 + 1;
      }
    }
    else {
      plVar7 = (long *)param_1[1];
      uVar4 = plVar7[2];
      uVar5 = plVar7[4] + plVar7[3];
      uVar6 = uVar5 - uVar4;
      plVar7[4] = uVar5;
      if (uVar4 <= uVar5 && uVar6 != 0) {
        uVar1 = *(undefined1 *)((long)plVar7 + 0x29);
        if (*plVar7 - uVar4 < uVar6) {
          func_0x000108a2e010(plVar7,uVar4,uVar6);
          lVar8 = plVar7[1];
          uVar4 = plVar7[2];
          puVar3 = (undefined1 *)(lVar8 + uVar4);
        }
        else {
          lVar8 = plVar7[1];
          puVar3 = (undefined1 *)(lVar8 + uVar4);
        }
        if (1 < uVar6) {
          _memset(puVar3,uVar1,uVar6 - 1);
          uVar4 = uVar4 + (uVar6 - 1);
          puVar3 = (undefined1 *)(lVar8 + uVar4);
        }
        *puVar3 = uVar1;
        plVar7[2] = uVar4 + 1;
      }
    }
  }
  return;
}

