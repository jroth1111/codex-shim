
void __ZN23codex_app_server_daemon6Daemon21remote_control_output17hdd4694c5e6f1755cE
               (long *param_1,long param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5,
               long *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = _malloc(lVar5);
    if (lVar3 == 0) {
      func_0x0001087c9084(1,lVar5);
      goto LAB_101bf6518;
    }
  }
  _memcpy(lVar3,uVar1,lVar5);
  puVar4 = (undefined4 *)_malloc(7);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar4 + 3) = 0x302e3333;
    *puVar4 = 0x33312e30;
    *(undefined1 *)((long)param_1 + 0x4a) = param_3;
    *(undefined1 *)(param_1 + 9) = param_4;
    *(undefined1 *)((long)param_1 + 0x49) = param_5;
    *param_1 = lVar5;
    param_1[1] = lVar3;
    param_1[2] = lVar5;
    param_1[3] = 7;
    param_1[4] = (long)puVar4;
    param_1[5] = 7;
    lVar5 = *param_6;
    param_1[7] = param_6[1];
    param_1[6] = lVar5;
    param_1[8] = param_6[2];
    return;
  }
  func_0x0001087c9084(1,7);
LAB_101bf6518:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bf651c);
  (*pcVar2)();
}

