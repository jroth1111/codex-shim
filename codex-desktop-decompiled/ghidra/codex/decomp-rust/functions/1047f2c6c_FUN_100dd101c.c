
/* WARNING: Possible PIC construction at 0x000100dd1078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dd10b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd107c) */
/* WARNING: Removing unreachable block (ram,0x000100dd10b8) */

void FUN_100dd101c(short *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  cVar1 = (char)param_1[0x14];
  if (cVar1 == '\0') {
    if (*param_1 != 0) {
      plVar3 = (long *)(param_1 + 4);
      lVar2 = *(long *)*plVar3;
      *(long *)*plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9a5f3d2f05df0006E:
        if (*plVar3 != -1) {
          plVar3 = (long *)(*plVar3 + 8);
          lVar2 = *plVar3;
          *plVar3 = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)();
            return;
          }
        }
        return;
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      if ((char)param_1[0x84] == '\x03') {
        FUN_100cf0890(param_1 + 0x2c);
      }
      else if (((char)param_1[0x84] == '\0') && (param_1[0x1c] != 0)) {
        plVar3 = (long *)(param_1 + 0x20);
        lVar2 = *(long *)*plVar3;
        *(long *)*plVar3 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9a5f3d2f05df0006E;
        }
      }
      FUN_100de8a5c(param_1 + 0x88);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if ((char)param_1[0x80] == '\x03') {
        FUN_100cf0890(param_1 + 0x28);
      }
      else if (((char)param_1[0x80] == '\0') && (param_1[0x18] != 0)) {
        plVar3 = (long *)(param_1 + 0x1c);
        lVar2 = *(long *)*plVar3;
        *(long *)*plVar3 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9a5f3d2f05df0006E;
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x29) = 0;
  }
  return;
}

