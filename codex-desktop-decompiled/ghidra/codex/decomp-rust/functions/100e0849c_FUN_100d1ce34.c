
/* WARNING: Possible PIC construction at 0x000100d1ce8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d1ce90) */

void FUN_100d1ce34(long *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 unaff_x22;
  long lVar9;
  long *plVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_xzr;
  long lVar11;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar10 = param_1;
  if ((char)param_1[0x1f] != '\0') {
    if ((char)param_1[0x1f] != '\x03') {
      return;
    }
    if (((char)param_1[0x1e] == '\x03') && ((char)param_1[0x15] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x16);
      if (param_1[0x17] != 0) {
        (**(code **)(param_1[0x17] + 0x18))(param_1[0x18]);
      }
    }
    unaff_x30 = 0x100d1ce90;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar10 = param_1 + 8;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*plVar10 == 0) {
    plVar7 = plVar10 + 3;
    lVar9 = *plVar7;
    LOAcquire();
    lVar5 = *(long *)(lVar9 + 0x1f0);
    *(long *)(lVar9 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar9 + 0x88);
      *(long *)(lVar9 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcaed8(lVar9 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x4110) = *(ulong *)(lVar5 + 0x4110) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(lVar9 + 0x110);
      LOAcquire();
      uVar6 = *puVar2;
      *puVar2 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar5 = *(long *)(lVar9 + 0x100);
        *(undefined8 *)(lVar9 + 0x100) = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar9 + 0x108));
        }
      }
    }
    lVar5 = *(long *)*plVar7;
    *(long *)*plVar7 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar7);
    }
    plVar7 = plVar10 + 2;
    if (*plVar7 != 0) {
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (plVar7);
      lVar5 = *(long *)*plVar7;
      *(long *)*plVar7 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar7);
      }
    }
    lVar5 = *(long *)plVar10[4];
    *(long *)plVar10[4] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001060e2224();
    }
    lVar5 = *(long *)plVar10[5];
    *(long *)plVar10[5] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001060e2224();
    }
    plVar7 = (long *)plVar10[6];
    lVar5 = *plVar7;
    *plVar7 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar5 = plVar10[6];
      lVar9 = *(long *)(lVar5 + 0x28);
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar5 + 0x38);
        if (lVar8 != 0) {
          plVar10 = *(long **)(lVar5 + 0x20);
          plVar7 = plVar10 + 1;
          lVar11 = *plVar10;
          uVar6 = CONCAT17(-(-1 < lVar11),
                           CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar11
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
                  0x8080808080808080;
          do {
            while (uVar6 == 0) {
              lVar11 = *plVar7;
              plVar10 = plVar10 + -0x18;
              plVar7 = plVar7 + 1;
              uVar6 = CONCAT17(-(-1 < lVar11),
                               CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar11 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                      0x8080808080808080;
            }
            uVar3 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            iVar4 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
            if (plVar10[(long)-iVar4 * 3 + -3] != 0) {
              _free(plVar10[(long)-iVar4 * 3 + -2]);
            }
            uVar6 = uVar6 - 1 & uVar6;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar9 * 0x19 != -0x21) {
          _free(*(long *)(lVar5 + 0x20) + lVar9 * -0x18 + -0x18);
        }
      }
      if (lVar5 != -1) {
        lVar9 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar5);
          return;
        }
      }
      return;
    }
  }
  return;
}

