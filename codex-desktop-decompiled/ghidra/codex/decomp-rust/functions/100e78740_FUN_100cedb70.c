
void FUN_100cedb70(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\x03') {
    if (*(char *)(param_1 + 0xbd0) == '\x03') {
      if (*(char *)(param_1 + 0xbba) == '\x03') {
        if (*(char *)(param_1 + 0xbb2) == '\0') {
          if (*(long *)(param_1 + 0x50) != 0) {
            _free(*(undefined8 *)(param_1 + 0x58));
          }
          if (*(long *)(param_1 + 0x68) != -0x8000000000000000 && *(long *)(param_1 + 0x68) != 0) {
            lVar1 = *(long *)(param_1 + 0x70);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar1);
            return;
          }
        }
        else if (*(char *)(param_1 + 0xbb2) == '\x03') {
          FUN_100e5e3e0(param_1 + 0xb0);
          if (*(long *)(param_1 + 0x98) == -0x8000000000000000 || *(long *)(param_1 + 0x98) == 0) {
            *(undefined1 *)(param_1 + 0xbb5) = 0;
            lVar1 = *(long *)(param_1 + 0x80);
          }
          else {
            _free(*(undefined8 *)(param_1 + 0xa0));
            *(undefined1 *)(param_1 + 0xbb5) = 0;
            lVar1 = *(long *)(param_1 + 0x80);
          }
          if (lVar1 != 0) {
            _free(*(undefined8 *)(param_1 + 0x88));
          }
          *(undefined1 *)(param_1 + 0xbb6) = 0;
        }
        return;
      }
      if (*(char *)(param_1 + 0xbba) == '\0') {
        if (*(long *)(param_1 + 0x20) != 0) {
          _free(*(undefined8 *)(param_1 + 0x28));
        }
        if ((*(long *)(param_1 + 0x38) != -0x8000000000000000) && (*(long *)(param_1 + 0x38) != 0))
        {
          lVar1 = *(long *)(param_1 + 0x40);
          goto code_r0x000108aa97c4;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x04') {
    if (*(char *)(param_1 + 0x31) == '\x04') {
      FUN_100cab424(param_1 + 0xd0);
      FUN_100e0609c(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x30) = 0;
      lVar1 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar1 + -1;
      LORelease();
    }
    else {
      if (*(char *)(param_1 + 0x31) == '\x03') {
        FUN_100ce72d8(param_1 + 0x38);
      }
      lVar1 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar1 + -1;
      LORelease();
    }
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x10);
      FUN_103cfbd74(lVar1 + 0x10);
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
  }
  return;
}

