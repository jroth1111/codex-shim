
void FUN_100d7d5ac(ulong *param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  bVar1 = (byte)param_1[0xa9];
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      if ((*param_1 & 0x7fffffffffffffff) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_100ca52a0(param_1 + 0xab);
  }
  else {
    if (bVar1 == 4) {
      if ((char)param_1[0xb1] == '\x03') {
        uVar5 = param_1[0xaf];
        puVar6 = (undefined8 *)param_1[0xb0];
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar5);
        }
        if (puVar6[1] != 0) {
          _free(uVar5);
        }
      }
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      FUN_100d5c898(param_1 + 0xe1);
      if ((param_1[0xce] != 0x8000000000000000) &&
         (FUN_100e502dc(param_1 + 0xce), param_1[0xde] != 0)) {
        _free(param_1[0xdf]);
      }
      FUN_100cd34e8(param_1 + 0xab);
    }
    if ((*(byte *)((long)param_1 + 0x54a) & 1) != 0) {
      FUN_100def764(param_1 + 0x9d);
    }
    *(undefined1 *)((long)param_1 + 0x54a) = 0;
    FUN_100dfc150(param_1 + 0x81);
    *(undefined1 *)((long)param_1 + 0x54f) = 0;
    if ((param_1[0x7e] != 0x8000000000000000) && (param_1[0x7e] != 0)) {
      _free(param_1[0x7f]);
    }
    if ((param_1[0x7b] != 0x8000000000000000) && (param_1[0x7b] != 0)) {
      _free(param_1[0x7c]);
    }
    *(undefined1 *)(param_1 + 0xaa) = 0;
    uVar4 = param_1[0x79];
    lVar2 = param_1[0x7a] + 1;
    uVar5 = uVar4;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
      FUN_100e02a24(uVar5);
      uVar5 = uVar5 + 0xc0;
    }
    if (param_1[0x78] != 0) {
      _free(uVar4);
    }
    if (param_1[0x75] != 0) {
      _free(param_1[0x76]);
    }
    if (param_1[0x72] != 0) {
      _free(param_1[0x73]);
    }
    if (param_1[0x51] != 0) {
      _free(param_1[0x52]);
    }
    uVar4 = param_1[0x55];
    uVar5 = param_1[0x56];
    if (uVar5 != 0) {
      puVar6 = (undefined8 *)(uVar4 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_1[0x54] != 0) {
      _free(uVar4);
    }
    if (param_1[0x6b] != 0) {
      FUN_100cb56bc(param_1 + 0x6b);
    }
    *(undefined4 *)((long)param_1 + 0x554) = 0;
    *(undefined4 *)((long)param_1 + 0x551) = 0;
    if ((*(byte *)((long)param_1 + 0x54b) & 1) != 0) {
      lVar2 = *(long *)param_1[0xac];
      *(long *)param_1[0xac] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001046b10a8(param_1 + 0xac);
      }
    }
    *(undefined1 *)((long)param_1 + 0x54b) = 0;
    if ((*(byte *)((long)param_1 + 0x54c) & 1) != 0) {
      lVar2 = *(long *)param_1[0xab];
      *(long *)param_1[0xab] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(param_1 + 0xab);
      }
    }
    *(undefined1 *)((long)param_1 + 0x54c) = 0;
    if (param_1[0x30] != 0x8000000000000003) {
      FUN_100e0609c(param_1 + 0x30);
    }
    if ((*(byte *)((long)param_1 + 0x54e) & 1) != 0) {
      if (param_1[0x1e] != 0) {
        _free(param_1[0x1f]);
      }
      if (param_1[0x21] != 0) {
        _free(param_1[0x22]);
      }
      if (param_1[0x2a] != 0) {
        FUN_100cb56bc(param_1 + 0x2a);
      }
      FUN_100def764(param_1 + 0x12);
    }
    if ((*(byte *)((long)param_1 + 0x54d) & 1) != 0) {
      lVar2 = *(long *)param_1[0x43];
      *(long *)param_1[0x43] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001046b10a8(param_1 + 0x43);
      }
    }
  }
  *(undefined2 *)((long)param_1 + 0x54d) = 0;
  if ((((*(byte *)((long)param_1 + 0x549) & 1) != 0) && (param_1[0xc] != 0x8000000000000000)) &&
     (param_1[0xc] != 0)) {
    _free(param_1[0xd]);
  }
  *(undefined1 *)((long)param_1 + 0x549) = 0;
  return;
}

