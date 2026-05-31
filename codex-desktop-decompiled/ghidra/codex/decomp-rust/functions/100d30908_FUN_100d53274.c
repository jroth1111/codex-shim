
/* WARNING: Possible PIC construction at 0x000100d5334c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d53350) */

void FUN_100d53274(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long unaff_x19;
  char *unaff_x20;
  undefined8 *puVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 unaff_x22;
  long *plVar8;
  undefined8 unaff_x23;
  long *plVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar10;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar11;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lVar12;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar2 = *(char *)(param_1 + 0x91);
  if (cVar2 == '\0') {
    plVar5 = (long *)(param_1 + 0x40);
  }
  else {
    if (cVar2 == '\x03') {
      if (((*(char *)(param_1 + 0x108) == '\x03') && (*(char *)(param_1 + 0x100) == '\x03')) &&
         (*(char *)(param_1 + 0xb8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xc0);
        if (*(long *)(param_1 + 200) != 0) {
          (**(code **)(*(long *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
        }
      }
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      if (((*(char *)(param_1 + 0x108) == '\x03') && (*(char *)(param_1 + 0x100) == '\x03')) &&
         (*(char *)(param_1 + 0xb8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xc0);
        param_2 = extraout_x1;
        if (*(long *)(param_1 + 200) != 0) {
          (**(code **)(*(long *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
          param_2 = extraout_x1_00;
        }
      }
      unaff_x20 = *(char **)(param_1 + 0x80);
      if (*unaff_x20 == '\0') {
        *unaff_x20 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (unaff_x20,param_2,1000000000);
      }
      FUN_1060fa678(unaff_x20,1,unaff_x20);
    }
    plVar5 = (long *)(param_1 + 0x10);
    unaff_x30 = 0x100d53350;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (plVar5[1] != 0) {
    *(long *)((long)register0x00000008 + -0x68) = plVar5[1];
    lVar7 = plVar5[3];
    if (lVar7 != 0) {
      plVar8 = (long *)*plVar5;
      plVar9 = plVar8 + 1;
      lVar12 = *plVar8;
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
          plVar8 = plVar8 + -0x30;
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
        uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        iVar4 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
        if (plVar8[(long)-iVar4 * 6 + -6] != 0) {
          _free(plVar8[(long)-iVar4 * 6 + -5]);
        }
        lVar12 = plVar8[(long)-iVar4 * 6 + -2];
        lVar11 = plVar8[(long)-iVar4 * 6 + -1];
        if (lVar11 != 0) {
          puVar6 = (undefined8 *)(lVar12 + 8);
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        if (plVar8[(long)-iVar4 * 6 + -3] != 0) {
          _free(lVar12);
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)((long)register0x00000008 + -0x68) * 0x31 != -0x39) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)
                (*plVar5 + *(long *)((long)register0x00000008 + -0x68) * -0x30 + -0x30);
      return;
    }
  }
  return;
}

