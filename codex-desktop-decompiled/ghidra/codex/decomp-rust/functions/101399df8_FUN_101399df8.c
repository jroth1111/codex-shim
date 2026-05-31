
void FUN_101399df8(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  int aiStack_50 [2];
  long lStack_48;
  long in_stack_ffffffffffffffc0;
  long in_stack_ffffffffffffffc8;
  
  bVar1 = *param_2;
  if (bVar1 != 0x10) {
    if (bVar1 == 0x11) {
      puVar4 = *(undefined8 **)(param_2 + 8);
      uStack_98 = puVar4[1];
      uStack_a0 = *puVar4;
      uStack_88 = puVar4[3];
      uStack_90 = puVar4[2];
      FUN_1004b62d4(&lStack_68,&uStack_a0);
      if (lStack_68 != -0x8000000000000000) {
        __ZN14codex_protocol10agent_path9AgentPath11from_string17h90e1acea1fb456bbE
                  (aiStack_50,&lStack_68);
        if (aiStack_50[0] == 1) {
          lStack_60 = func_0x000108856114(&lStack_48);
        }
        else {
          lStack_60 = in_stack_ffffffffffffffc0;
          if (lStack_48 != -0x8000000000000000) {
            *param_1 = lStack_48;
            param_1[1] = in_stack_ffffffffffffffc0;
            param_1[2] = in_stack_ffffffffffffffc8;
            goto _free;
          }
        }
      }
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lStack_60;
      goto _free;
    }
    if (bVar1 != 0x12) {
      FUN_1004b62d4(&lStack_80);
      if (lStack_80 != -0x8000000000000000) {
        __ZN14codex_protocol10agent_path9AgentPath11from_string17h90e1acea1fb456bbE
                  (aiStack_50,&lStack_80);
        if (aiStack_50[0] == 1) {
          lStack_78 = func_0x000108856114(&lStack_48);
        }
        else {
          lStack_78 = in_stack_ffffffffffffffc0;
          if (lStack_48 != -0x8000000000000000) {
            *param_1 = lStack_48;
            param_1[1] = in_stack_ffffffffffffffc0;
            param_1[2] = in_stack_ffffffffffffffc8;
            return;
          }
        }
      }
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lStack_78;
      return;
    }
  }
  *param_1 = -0x8000000000000000;
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar3 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      puVar4 = *(undefined8 **)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    puVar2 = puVar4;
    for (lVar5 = *(long *)(param_2 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
      FUN_100e077ec(puVar2);
      FUN_100e077ec(puVar2 + 4);
      puVar2 = puVar2 + 8;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2 || uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar3 < 0x13) {
      if (uVar3 == 0x11) {
        puVar4 = *(undefined8 **)(param_2 + 8);
        FUN_100e077ec(puVar4);
        goto _free;
      }
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar3 == 0x13) {
      puVar4 = *(undefined8 **)(param_2 + 8);
      FUN_100e077ec(puVar4);
      goto _free;
    }
    if (uVar3 != 0x14) goto LAB_100e078c0;
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    lVar5 = *(long *)(param_2 + 0x18) + 1;
    puVar2 = puVar4;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e077ec(puVar2);
      puVar2 = puVar2 + 4;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

