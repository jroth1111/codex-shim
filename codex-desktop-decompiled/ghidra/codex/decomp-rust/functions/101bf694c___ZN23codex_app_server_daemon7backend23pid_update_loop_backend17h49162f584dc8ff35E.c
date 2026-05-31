
void __ZN23codex_app_server_daemon7backend23pid_update_loop_backend17h49162f584dc8ff35E
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  __ZN3std4path4Path15_with_extension17hf473705697820d35E(&uStack_68,uVar4,uVar5,&UNK_108cf494b,8);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  param_1[3] = uVar2;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[7] = uStack_60;
  param_1[6] = uStack_68;
  param_1[8] = uStack_58;
  *(undefined1 *)(param_1 + 9) = 2;
  if (param_2[3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_2[4]);
    return;
  }
  return;
}

