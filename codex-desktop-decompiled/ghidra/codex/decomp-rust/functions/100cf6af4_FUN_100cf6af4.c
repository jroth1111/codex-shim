
void FUN_100cf6af4(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  cVar2 = *(char *)(param_1 + 0x108);
  if (cVar2 == '\0') {
    FUN_100def764(param_1);
    FUN_100def764(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 200);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001017ae870();
      }
    }
    plVar5 = *(long **)(param_1 + 0xd0);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        lVar3 = *(long *)(param_1 + 0xd0);
        puVar1 = *(undefined8 **)(param_1 + 0xd8);
        uVar6 = puVar1[2];
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(lVar3 + (uVar6 - 1 & 0xfffffffffffffff0) + 0x10);
        }
        if (lVar3 != -1) {
          lVar4 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            if ((uVar6 + puVar1[1] + 0xf & -uVar6) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__free_10b61b0a8)(lVar3);
              return;
            }
          }
        }
        return;
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      func_0x000100d8ef78(param_1 + 0x110);
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      func_0x000100d548c4(param_1 + 0x110);
    }
    *(undefined1 *)(param_1 + 0x10a) = 0;
    if ((*(byte *)(param_1 + 0x109) & 1) != 0) {
      FUN_100dddd8c(param_1 + 0xe0);
    }
    *(undefined1 *)(param_1 + 0x109) = 0;
    *(undefined4 *)(param_1 + 0x10b) = 0;
  }
  return;
}

