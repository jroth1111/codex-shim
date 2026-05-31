
void FUN_100b97f58(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  bVar4 = *(byte *)((long)param_2 + 0x4c1);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      param_2[5] = param_2[4];
      *(undefined1 *)((long)param_2 + 0x4c3) = *(undefined1 *)((long)param_2 + 0x4c2);
      *(undefined1 *)((long)param_2 + 0x4c4) = *(undefined1 *)(param_2 + 0x98);
      param_2[6] = param_2[3];
      param_2[8] = param_2[1];
      param_2[7] = *param_2;
      param_2[9] = param_2[2];
      param_2[10] = param_2[4];
      *(undefined1 *)(param_2 + 0x97) = 0;
      goto LAB_100b97fd4;
    }
    func_0x000108a07af4(&UNK_10b231228);
LAB_100b9813c:
    func_0x000108a07b10(&UNK_10b231228);
  }
  else {
    if (bVar4 != 3) goto LAB_100b9813c;
LAB_100b97fd4:
    FUN_100b971d8(&lStack_88,param_2 + 10);
    if (lStack_88 == -0x7fffffffffffffff) {
      *param_1 = -0x8000000000000000;
      uVar10 = 3;
LAB_100b98108:
      *(undefined1 *)((long)param_2 + 0x4c1) = uVar10;
      return;
    }
    FUN_100cd7c20(param_2 + 10);
    uVar5 = *(undefined1 *)((long)param_2 + 0x4c3);
    uVar10 = *(undefined1 *)((long)param_2 + 0x4c4);
    lVar12 = param_2[6];
    uVar1 = *(undefined8 *)(param_2[5] + 0x80);
    lVar2 = *(long *)(param_2[5] + 0x88);
    if (lVar2 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(lVar2);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar2);
        goto LAB_100b98154;
      }
    }
    _memcpy(lVar7,uVar1,lVar2);
    uVar1 = *(undefined8 *)(param_2[5] + 8);
    lVar3 = *(long *)(param_2[5] + 0x10);
    if (lVar3 == 0) {
      lVar8 = 1;
    }
    else {
      lVar8 = _malloc(lVar3);
      if (lVar8 == 0) {
        func_0x0001087c9084(1,lVar3);
        goto LAB_100b98154;
      }
    }
    _memcpy(lVar8,uVar1,lVar3);
    puVar9 = (undefined4 *)_malloc(7);
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined4 *)((long)puVar9 + 3) = 0x302e3333;
      *puVar9 = 0x33312e30;
      lVar11 = param_2[7];
      param_1[0xd] = param_2[8];
      param_1[0xc] = lVar11;
      param_1[0xe] = param_2[9];
      *param_1 = lVar2;
      param_1[1] = lVar7;
      param_1[2] = lVar2;
      param_1[3] = lVar3;
      param_1[4] = lVar8;
      param_1[5] = lVar3;
      param_1[6] = lStack_88;
      param_1[7] = lStack_80;
      param_1[8] = lStack_78;
      param_1[9] = 7;
      param_1[10] = (long)puVar9;
      param_1[0xb] = 7;
      param_1[0xf] = lVar12;
      *(undefined1 *)(param_1 + 0x10) = uVar10;
      uVar10 = 1;
      *(undefined1 *)((long)param_1 + 0x81) = uVar5;
      goto LAB_100b98108;
    }
  }
  func_0x0001087c9084(1,7);
LAB_100b98154:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100b98158);
  (*pcVar6)();
}

