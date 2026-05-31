
void FUN_102a3de60(long *param_1,uint *param_2)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_2 + 6);
    param_2[0] = 0;
    param_2[1] = 0;
    if ((*param_2 & 1) != 0) {
      lVar7 = *(long *)(param_2 + 4);
      if (lVar3 == 0) {
        for (; lVar3 = lVar7, lVar5 != 0; lVar5 = lVar5 + -1) {
          lVar7 = *(long *)(lVar3 + 0x13a8);
        }
      }
      lVar5 = *(long *)(lVar3 + 0x1290);
      while (lVar7 = lVar5, lVar7 != 0) {
        _free(lVar3);
        lVar3 = lVar7;
        lVar5 = *(long *)(lVar7 + 0x1290);
      }
      _free(lVar3);
    }
    *param_1 = 0;
    return;
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  if (*param_2 != 1) {
    func_0x000108a07a20(&UNK_10b297ba0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a3dff0);
    (*pcVar2)();
  }
  lVar3 = *(long *)(param_2 + 2);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 4);
    for (lVar5 = *(long *)(param_2 + 6); lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar3 = *(long *)(lVar3 + 0x13a8);
    }
    uVar6 = 0;
    lVar5 = 0;
    param_2[0] = 1;
    param_2[1] = 0;
    lVar7 = lVar3;
    if (*(short *)(lVar3 + 0x13a2) != 0) goto joined_r0x000102a3deb4;
  }
  else {
    lVar5 = *(long *)(param_2 + 4);
    uVar6 = *(ulong *)(param_2 + 6);
    lVar7 = lVar3;
    if (uVar6 < *(ushort *)(lVar3 + 0x13a2)) goto joined_r0x000102a3deb4;
  }
  do {
    lVar7 = *(long *)(lVar3 + 0x1290);
    if (lVar7 == 0) {
      _free();
      func_0x000108a07a20(&UNK_10b297b70);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a3dfe0);
      (*pcVar2)();
    }
    lVar5 = lVar5 + 1;
    uVar1 = *(ushort *)(lVar3 + 0x13a0);
    uVar6 = (ulong)uVar1;
    _free();
    lVar3 = lVar7;
  } while (*(ushort *)(lVar7 + 0x13a2) <= uVar1);
joined_r0x000102a3deb4:
  lVar4 = uVar6 + 1;
  lVar3 = lVar7;
  if (lVar5 != 0) {
    lVar3 = lVar7 + lVar4 * 8;
    lVar4 = lVar5;
    do {
      lVar3 = *(long *)(lVar3 + 0x13a8);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar4 = 0;
  }
  *(long *)(param_2 + 2) = lVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  *(long *)(param_2 + 6) = lVar4;
  *param_1 = lVar7;
  param_1[1] = lVar5;
  param_1[2] = uVar6;
  return;
}

