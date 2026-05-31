
/* WARNING: Possible PIC construction at 0x000100d03ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d03adc) */

void FUN_100d03a44(long param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined8 unaff_x30;
  long lVar12;
  
  puVar4 = &stack0xffffffffffffffe0;
  puVar11 = &stack0xfffffffffffffff0;
  cVar1 = *(char *)(param_1 + 0xc6);
  if (cVar1 == '\0') {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_100cb56bc((long *)(param_1 + 0x30));
    }
    plVar7 = (long *)(param_1 + 0x60);
    if (*plVar7 == 0) {
      return;
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0xc59) == '\x03') {
        FUN_100d29e38(param_1 + 0xa68);
        plVar7 = (long *)(param_1 + 0x598);
        unaff_x30 = 0x100d03adc;
      }
      else {
        if (*(char *)(param_1 + 0xc59) != '\0') {
          return;
        }
        plVar7 = (long *)(param_1 + 200);
        puVar4 = (undefined1 *)register0x00000008;
        param_1 = unaff_x20;
        puVar11 = unaff_x29;
      }
      *(long *)(puVar4 + -0x20) = param_1;
      *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar11;
      *(undefined8 *)(puVar4 + -8) = unaff_x30;
      if (*plVar7 != 0) {
        _free(plVar7[1]);
      }
      FUN_100dfb3ec(plVar7 + 9);
      FUN_100cd0ad8(plVar7 + 0x98);
      __ZN9tiny_http6Server7unblock17hb32adb7cb1be293cE(plVar7[0x97] + 0x10);
      plVar6 = (long *)plVar7[0x97];
      lVar5 = *plVar6;
      *plVar6 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc30b05d0526cb26eE(plVar7 + 0x97);
      }
      if (plVar7[3] != 0) {
        _free(plVar7[4]);
      }
      if (plVar7[6] == 0) {
        return;
      }
      lVar5 = plVar7[7];
      goto code_r0x000108aa97c4;
    }
    cVar1 = *(char *)(param_1 + 0x33e);
    if (cVar1 != '\0') {
      if (cVar1 == '\x03') {
        FUN_100cc25c4(param_1 + 0x350);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_100dfb3ec(param_1 + 0x360);
      }
      *(undefined1 *)(param_1 + 0x344) = 0;
      if (*(long *)(param_1 + 800) != 0) {
        _free(*(undefined8 *)(param_1 + 0x328));
      }
      *(undefined1 *)(param_1 + 0x345) = 0;
      FUN_100def764(param_1 + 0x2c0);
      FUN_100cd0ad8(param_1 + 0x2b8);
      *(undefined2 *)(param_1 + 0x346) = 0;
      *(undefined1 *)(param_1 + 0x348) = 0;
      if (*(long *)(param_1 + 0x2a0) != 0) {
        _free(*(undefined8 *)(param_1 + 0x2a8));
      }
      if (*(long *)(param_1 + 0x288) != 0) {
        _free(*(undefined8 *)(param_1 + 0x290));
      }
      if (*(long *)(param_1 + 0x270) != 0) {
        _free(*(undefined8 *)(param_1 + 0x278));
      }
      __ZN9tiny_http6Server7unblock17hb32adb7cb1be293cE(*(long *)(param_1 + 0x268) + 0x10);
      lVar5 = **(long **)(param_1 + 0x268);
      **(long **)(param_1 + 0x268) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc30b05d0526cb26eE(param_1 + 0x268);
      }
      *(undefined1 *)(param_1 + 0x349) = 0;
      *(undefined1 *)(param_1 + 0x341) = 0;
      if (*(long *)(param_1 + 0x248) != 0) {
        _free(*(undefined8 *)(param_1 + 0x250));
      }
      *(undefined2 *)(param_1 + 0x342) = 0;
      return;
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      FUN_100cb56bc();
    }
    plVar7 = (long *)(param_1 + 0x138);
    if (*plVar7 == 0) {
      return;
    }
  }
  lVar5 = plVar7[1];
  if (lVar5 != 0) {
    lVar8 = plVar7[3];
    if (lVar8 != 0) {
      plVar6 = (long *)*plVar7;
      plVar9 = plVar6 + 1;
      lVar12 = *plVar6;
      uVar10 = CONCAT17(-(-1 < lVar12),
                        CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
               0x8080808080808080;
      do {
        while (uVar10 == 0) {
          lVar12 = *plVar9;
          plVar6 = plVar6 + -0x30;
          plVar9 = plVar9 + 1;
          uVar10 = CONCAT17(-(-1 < lVar12),
                            CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                   0x8080808080808080;
        }
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
        if (plVar6[(long)-iVar3 * 6 + -6] != 0) {
          _free(plVar6[(long)-iVar3 * 6 + -5]);
        }
        if (plVar6[(long)-iVar3 * 6 + -3] != 0) {
          _free(plVar6[(long)-iVar3 * 6 + -2]);
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar5 * 0x31 != -0x39) {
      lVar5 = *plVar7 + lVar5 * -0x30 + -0x30;
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
  }
  return;
}

