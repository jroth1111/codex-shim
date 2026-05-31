
void __ZN10codex_core7session12turn_context11TurnContext18permission_profile17hdb180d70b1db209fE
               (undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(ulong *)(param_2 + 0x588);
  uVar1 = uVar3;
  if (uVar3 < 0x8000000000000001) {
    uVar1 = 0;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    if ((uVar1 & 0x7fffffffffffffff) == 1) {
      *param_1 = 0x8000000000000001;
      return;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x588);
    uVar6 = *(undefined8 *)(param_2 + 0x5a0);
    uVar5 = *(undefined8 *)(param_2 + 0x598);
    param_1[1] = *(undefined8 *)(param_2 + 0x590);
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[4] = *(undefined8 *)(param_2 + 0x5a8);
    return;
  }
  if (uVar3 == 0x8000000000000000) {
    uVar4 = 0x8000000000000000;
    uStack_38 = 0x8000000000000000;
  }
  else {
    FUN_1035ab934(&uStack_38,*(undefined8 *)(param_2 + 0x590),*(undefined8 *)(param_2 + 0x598));
    uVar4 = *(undefined8 *)(param_2 + 0x5a0);
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x5a8);
  *param_1 = uStack_38;
  param_1[2] = uStack_48;
  param_1[1] = uStack_50;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}

