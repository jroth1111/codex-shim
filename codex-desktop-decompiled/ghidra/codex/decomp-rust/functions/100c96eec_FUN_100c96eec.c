
/* WARNING: Possible PIC construction at 0x000100c96f6c: Changing call to branch */

void FUN_100c96eec(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar2 = *(char *)(param_1 + 0x200);
  if (cVar2 == '\0') {
    if (*(long *)(param_1 + 0x60) != 0) {
      _free(*(undefined8 *)(param_1 + 0x68));
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      _free(*(undefined8 *)(param_1 + 0x80));
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_100cb56bc();
    }
    FUN_100def764(param_1);
    lVar3 = **(long **)(param_1 + 0x148);
    **(long **)(param_1 + 0x148) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001046b10a8(param_1 + 0x148);
    }
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        plVar5 = (long *)(param_1 + 0x168);
        goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h300fbaa487d42c36E;
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      func_0x000100cb3900(param_1 + 0x308);
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      func_0x000100cf6af4(param_1 + 0x278);
      FUN_100de8a5c(param_1 + 0x208);
      FUN_100e5cb2c(param_1 + 0x3048);
      *(undefined1 *)(param_1 + 0x204) = 0;
    }
    *(undefined1 *)(param_1 + 0x205) = 0;
    if (((*(byte *)(param_1 + 0x201) & 1) != 0) &&
       (plVar5 = *(long **)(param_1 + 400), plVar5 != (long *)0x0)) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        plVar5 = (long *)(param_1 + 400);
        unaff_x30 = 0x100c96f70;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        unaff_x19 = param_1;
        unaff_x29 = puVar1;
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h300fbaa487d42c36E:
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar3 = *plVar5;
        if ((*(long *)(lVar3 + 0x10) == 0) && (*(long *)(lVar3 + 0x18) != 0)) {
          _free(*(undefined8 *)(lVar3 + 0x20));
        }
        if (lVar3 != -1) {
          lVar4 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar3);
            return;
          }
        }
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x201) = 0;
    if ((*(byte *)(param_1 + 0x202) & 1) != 0) {
      lVar3 = **(long **)(param_1 + 0x2f8);
      **(long **)(param_1 + 0x2f8) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001046b10a8(param_1 + 0x2f8);
      }
    }
    *(undefined1 *)(param_1 + 0x202) = 0;
    if ((*(byte *)(param_1 + 0x203) & 1) != 0) {
      if (*(long *)(param_1 + 0x268) != 0) {
        _free(*(undefined8 *)(param_1 + 0x270));
      }
      if (*(long *)(param_1 + 0x280) != 0) {
        _free(*(undefined8 *)(param_1 + 0x288));
      }
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_100cb56bc(param_1 + 0x2c8);
      }
      FUN_100def764(param_1 + 0x208);
    }
    *(undefined1 *)(param_1 + 0x203) = 0;
  }
  return;
}

