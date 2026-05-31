
/* WARNING: Possible PIC construction at 0x000100e0c4a8: Changing call to branch */

void FUN_100cc0714(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  bVar3 = *(byte *)(param_1 + 0xab);
  if (4 < bVar3) {
    if (bVar3 == 5) {
      FUN_100dd7ad0(param_1 + 0xb0);
    }
    else {
      if (bVar3 != 6) {
        return;
      }
      FUN_100e8af84(param_1 + 200);
      lVar6 = *(long *)(param_1 + 0xb8);
      lVar5 = lVar6;
      for (lVar1 = *(long *)(param_1 + 0xc0); lVar1 != 0; lVar1 = lVar1 + -1) {
        FUN_100e3b46c(lVar5);
        lVar5 = lVar5 + 0x270;
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        _free(lVar6);
      }
      *(undefined1 *)(param_1 + 0xa9) = 0;
    }
    *(undefined1 *)(param_1 + 0xaa) = 0;
    uVar7 = *(ulong *)(param_1 + 8);
    uVar9 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar9 = 3;
    }
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        unaff_x19 = (undefined8 *)(param_1 + 0x10);
        puVar4 = &stack0xffffffffffffffe0;
        unaff_x29 = &stack0xfffffffffffffff0;
        unaff_x20 = 0xffffffffffffffff;
        lVar5 = *(long *)*unaff_x19;
        *(long *)*unaff_x19 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7a3d0afebf8844a0E(unaff_x19);
        }
        lVar5 = **(long **)(param_1 + 0x18);
        **(long **)(param_1 + 0x18) = lVar5 + -1;
        LORelease();
        if (lVar5 != 1) {
          plVar8 = *(long **)(param_1 + 0x20);
          lVar5 = *plVar8;
          *plVar8 = lVar5 + -1;
          LORelease();
          if (lVar5 != 1) {
            return;
          }
          DataMemoryBarrier(2,1);
          lVar5 = *(long *)(param_1 + 0x20);
          puVar2 = *(undefined8 **)(param_1 + 0x28);
          uVar9 = puVar2[2];
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)(lVar5 + (uVar9 - 1 & 0xfffffffffffffff0) + 0x10);
          }
          if (lVar5 != -1) {
            lVar6 = *(long *)(lVar5 + 8);
            *(long *)(lVar5 + 8) = lVar6 + -1;
            LORelease();
            if (lVar6 == 1) {
              DataMemoryBarrier(2,1);
              if (uVar9 < 9) {
                uVar9 = 8;
              }
              if ((uVar9 + puVar2[1] + 0xf & -uVar9) != 0) goto code_r0x000108aa97c4;
            }
          }
          return;
        }
        DataMemoryBarrier(2,1);
        unaff_x30 = 0x100e0c4ac;
      }
      else {
        if (uVar9 != 2) {
          if (uVar7 != 0) {
            _free(*(undefined8 *)(param_1 + 0x10));
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            _free(*(undefined8 *)(param_1 + 0x28));
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            _free(*(undefined8 *)(param_1 + 0x40));
          }
          if (*(long *)(param_1 + 0x50) != 0) {
            _free(*(undefined8 *)(param_1 + 0x58));
          }
          if (*(long *)(param_1 + 0x68) != 0) {
            _free(*(undefined8 *)(param_1 + 0x70));
          }
          if (*(long *)(param_1 + 0x88) == 0) {
            return;
          }
          lVar5 = *(long *)(param_1 + 0x90);
          goto code_r0x000108aa97c4;
        }
        lVar5 = **(long **)(param_1 + 0x10);
        **(long **)(param_1 + 0x10) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7a3d0afebf8844a0E();
        }
        lVar5 = **(long **)(param_1 + 0x18);
        **(long **)(param_1 + 0x18) = lVar5 + -1;
        LORelease();
        if (lVar5 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        puVar4 = (undefined1 *)register0x00000008;
      }
      *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar4 + -8) = unaff_x30;
      lVar5 = *(long *)(param_1 + 0x18);
      FUN_105c23f48(lVar5 + 0x10);
      if (lVar5 != -1) {
        lVar6 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    goto code_r0x000108aa97c4;
  }
  if (bVar3 == 3) {
    if (*(char *)(param_1 + 200) == '\x03') {
      if (*(char *)(param_1 + 0xc80) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xc6a) != '\x03') {
        if (*(char *)(param_1 + 0xc6a) != '\0') {
          return;
        }
        if (*(long *)(param_1 + 0xd0) != 0) {
          _free(*(undefined8 *)(param_1 + 0xd8));
        }
        if (*(long *)(param_1 + 0xe8) == -0x8000000000000000) {
          return;
        }
        if (*(long *)(param_1 + 0xe8) == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0xf0);
        goto code_r0x000108aa97c4;
      }
      plVar8 = (long *)(param_1 + 0x100);
      goto SUB_100e78740;
    }
    if (*(char *)(param_1 + 200) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xe1) == '\x04') {
      FUN_100cab424(param_1 + 0x180);
      FUN_100e0609c(param_1 + 0xe8);
      *(undefined1 *)(param_1 + 0xe0) = 0;
      lVar5 = **(long **)(param_1 + 0xc0);
      **(long **)(param_1 + 0xc0) = lVar5 + -1;
      LORelease();
    }
    else {
      if (*(char *)(param_1 + 0xe1) == '\x03') {
        FUN_100ce72d8(param_1 + 0xe8);
      }
      lVar5 = **(long **)(param_1 + 0xc0);
      **(long **)(param_1 + 0xc0) = lVar5 + -1;
      LORelease();
    }
    if (lVar5 != 1) {
      return;
    }
    plVar8 = (long *)(param_1 + 0xc0);
    DataMemoryBarrier(2,1);
  }
  else {
    if (bVar3 != 4) {
      return;
    }
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      if (*(char *)(param_1 + 0xc78) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xc62) != '\x03') {
        if (*(char *)(param_1 + 0xc62) != '\0') {
          return;
        }
        if (*(long *)(param_1 + 200) != 0) {
          _free(*(undefined8 *)(param_1 + 0xd0));
        }
        if (*(long *)(param_1 + 0xe0) == -0x8000000000000000) {
          return;
        }
        if (*(long *)(param_1 + 0xe0) == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0xe8);
        goto code_r0x000108aa97c4;
      }
      plVar8 = (long *)(param_1 + 0xf8);
SUB_100e78740:
      if (*(char *)((long)plVar8 + 0xb62) != '\0') {
        if (*(char *)((long)plVar8 + 0xb62) == '\x03') {
          FUN_100e5e3e0(plVar8 + 0xc);
          if (plVar8[9] == -0x8000000000000000 || plVar8[9] == 0) {
            *(undefined1 *)((long)plVar8 + 0xb65) = 0;
            lVar5 = plVar8[6];
          }
          else {
            _free(plVar8[10]);
            *(undefined1 *)((long)plVar8 + 0xb65) = 0;
            lVar5 = plVar8[6];
          }
          if (lVar5 != 0) {
            _free(plVar8[7]);
          }
          *(undefined1 *)((long)plVar8 + 0xb66) = 0;
        }
        return;
      }
      if (*plVar8 != 0) {
        _free(plVar8[1]);
      }
      if (plVar8[3] == -0x8000000000000000 || plVar8[3] == 0) {
        return;
      }
      lVar5 = plVar8[4];
      goto code_r0x000108aa97c4;
    }
    if (*(char *)(param_1 + 0xc0) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xd9) == '\x04') {
      FUN_100cab424(param_1 + 0x178);
      FUN_100e0609c(param_1 + 0xe0);
      *(undefined1 *)(param_1 + 0xd8) = 0;
      lVar5 = **(long **)(param_1 + 0xb8);
      **(long **)(param_1 + 0xb8) = lVar5 + -1;
      LORelease();
    }
    else {
      if (*(char *)(param_1 + 0xd9) == '\x03') {
        FUN_100ce72d8(param_1 + 0xe0);
      }
      lVar5 = **(long **)(param_1 + 0xb8);
      **(long **)(param_1 + 0xb8) = lVar5 + -1;
      LORelease();
    }
    if (lVar5 != 1) {
      return;
    }
    plVar8 = (long *)(param_1 + 0xb8);
    DataMemoryBarrier(2,1);
  }
  lVar5 = *plVar8;
  FUN_103cfbd74(lVar5 + 0x10);
  if (lVar5 != -1) {
    lVar6 = *(long *)(lVar5 + 8);
    *(long *)(lVar5 + 8) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
  }
  return;
}

