
void __ZN11sqlx_sqlite5types3str114__LT_impl_u20_sqlx_core__decode__Decode_LT_sqlx_sqlite__database__Sqlite_GT__u20_for_u20_alloc__string__String_GT_6decode17he49381dc717e9b4fE
               (long *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  int aiStack_58 [2];
  long lStack_50;
  long lStack_48;
  
  plVar8 = (long *)*param_2;
  bVar1 = *(byte *)((long)param_2 + 9);
  plVar6 = plVar8;
  if (bVar1 == 2) {
    plVar6 = *(long **)(*plVar8 + 0x10);
  }
  FUN_105dfaaa4(aiStack_58,plVar6);
  if (aiStack_58[0] == 1) {
    param_1[1] = lStack_50;
    param_1[2] = lStack_48;
    *param_1 = -0x8000000000000000;
  }
  else {
    if (lStack_48 == 0) {
      lVar5 = 1;
    }
    else {
      lVar5 = _malloc(lStack_48);
      if (lVar5 == 0) {
        func_0x0001087c9084(1,lStack_48);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x105dfaa50);
        (*pcVar2)();
      }
    }
    _memcpy(lVar5,lStack_50,lStack_48);
    *param_1 = lStack_48;
    param_1[1] = lVar5;
    param_1[2] = lStack_48;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (((*(ushort *)((long)plVar8 + 0x14) & 0x9000) != 0) || ((int)plVar8[4] != 0)) {
    FUN_106cd9158(plVar8);
  }
  lVar5 = plVar8[3];
  if (lVar5 == 0) {
LAB_106ca2e78:
    puVar7 = (undefined8 *)0x10b647ae0;
    if (iRam000000010b647ab8 != 0) {
      if (plRam000000010b77f3a0 != (long *)0x0) {
        (*pcRam000000010b647b38)();
      }
      iVar3 = (*pcRam000000010b647af0)(plVar8);
      lRam000000010b77f578 = lRam000000010b77f578 - iVar3;
      lRam000000010b77f5c0 = lRam000000010b77f5c0 + -1;
      (*pcRam000000010b647ae0)(plVar8);
      if (plRam000000010b77f3a0 == (long *)0x0) {
        return;
      }
      puVar7 = (undefined8 *)0x10b647b48;
      plVar8 = plRam000000010b77f3a0;
    }
                    /* WARNING: Could not recover jumptable at 0x000106ca2f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar7)(plVar8);
    return;
  }
  if (plVar8 < *(long **)(lVar5 + 0x1e8)) {
    if (*(long **)(lVar5 + 0x1d8) <= plVar8) {
      *plVar8 = *(long *)(lVar5 + 0x1d0);
      *(long **)(lVar5 + 0x1d0) = plVar8;
      return;
    }
    if (*(long **)(lVar5 + 0x1e0) <= plVar8) {
      *plVar8 = *(long *)(lVar5 + 0x1c0);
      *(long **)(lVar5 + 0x1c0) = plVar8;
      return;
    }
  }
  if (*(long *)(lVar5 + 0x300) == 0) goto LAB_106ca2e78;
  if ((lVar5 != 0) && (plVar8 < *(long **)(lVar5 + 0x1f0))) {
    if (*(long **)(lVar5 + 0x1d8) <= plVar8) {
      uVar4 = 0x80;
      goto LAB_106cb91f0;
    }
    if (*(long **)(lVar5 + 0x1e0) <= plVar8) {
      uVar4 = (uint)*(ushort *)(lVar5 + 0x19e);
      goto LAB_106cb91f0;
    }
  }
  uVar4 = (*pcRam000000010b647af0)(plVar8);
LAB_106cb91f0:
  **(int **)(lVar5 + 0x300) = **(int **)(lVar5 + 0x300) + uVar4;
  return;
}

