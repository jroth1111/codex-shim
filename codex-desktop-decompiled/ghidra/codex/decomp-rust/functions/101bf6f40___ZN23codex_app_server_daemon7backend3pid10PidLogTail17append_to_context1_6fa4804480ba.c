
void __ZN23codex_app_server_daemon7backend3pid10PidLogTail17append_to_context17hcc4c895774ef1dccE
               (long param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puStack_78 = (undefined1 *)&uStack_d0;
  uStack_d0 = *(undefined8 *)(param_1 + 8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x10);
  puStack_70 = &
               __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
  ;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_c0,s_Managed_app_server_stderr______108ade7b4,&puStack_78);
  lVar8 = param_2[2];
  if ((ulong)(*param_2 - lVar8) < uStack_b0) {
    FUN_1088c6a84(param_2,lVar8,uStack_b0,1,1);
    lVar8 = param_2[2];
  }
  lVar9 = param_2[1];
  _memcpy(lVar9 + lVar8,lStack_b8,uStack_b0);
  lVar8 = lVar8 + uStack_b0;
  param_2[2] = lVar8;
  if (lStack_c0 != 0) {
    _free(lStack_b8);
  }
  uStack_b0 = *(ulong *)(param_1 + 0x20);
  lStack_b8 = *(long *)(param_1 + 0x28);
  lStack_c0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xa0000000a;
  uStack_88 = 1;
  uStack_80 = 0;
  lStack_a8 = lStack_b8;
  lStack_98 = lStack_b8;
  do {
    uVar7 = uStack_b0;
    FUN_101bfa378(&puStack_78,&uStack_b0);
    uVar2 = uStack_80;
    if ((int)puStack_78 == 1) {
      uVar6 = lStack_68 - lStack_c0;
      lVar1 = lStack_68;
    }
    else {
      if ((uStack_80 & 0x100) != 0) {
        return;
      }
      uStack_80 = CONCAT11(1,(undefined1)uStack_80);
      if (((uVar2 & 1) == 0) && (lStack_b8 == lStack_c0)) {
        return;
      }
      uVar6 = lStack_b8 - lStack_c0;
      lVar1 = lStack_c0;
      uVar7 = uStack_b0;
    }
    lVar3 = uVar7 + lStack_c0;
    uVar7 = uVar6;
    if ((uVar6 != 0) && (uVar4 = uVar6 - 1, *(char *)(lVar3 + uVar4) == '\n')) {
      if (uVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar3;
        if (*(char *)(lVar3 + (uVar6 - 2)) != '\r') {
          lVar5 = 0;
        }
      }
      uVar7 = uVar4;
      if (lVar5 != 0) {
        lVar3 = lVar5;
        uVar7 = uVar6 - 2;
      }
    }
    lStack_c0 = lVar1;
    if ((ulong)(*param_2 - lVar8) < 3) {
      FUN_1088c6a84(param_2,lVar8,3,1,1);
      lVar9 = param_2[1];
      lVar8 = param_2[2];
    }
    *(undefined1 *)((undefined2 *)(lVar9 + lVar8) + 1) = 0x20;
    *(undefined2 *)(lVar9 + lVar8) = 0x200a;
    lVar8 = lVar8 + 3;
    param_2[2] = lVar8;
    if ((ulong)(*param_2 - lVar8) < uVar7) {
      FUN_1088c6a84(param_2,lVar8,uVar7,1,1);
      lVar8 = param_2[2];
    }
    lVar9 = param_2[1];
    _memcpy(lVar9 + lVar8,lVar3,uVar7);
    lVar8 = lVar8 + uVar7;
    param_2[2] = lVar8;
    if (uStack_80._1_1_ == '\x01') {
      return;
    }
  } while( true );
}

