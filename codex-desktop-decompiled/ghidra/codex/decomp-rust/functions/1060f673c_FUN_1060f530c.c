
/* WARNING: Possible PIC construction at 0x0001060f5490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060f5494) */

void FUN_1060f530c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 unaff_x22;
  long lVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_1 + 0x70);
  puVar6 = unaff_x21;
  if (lVar8 != 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    puVar6 = (undefined8 *)(lVar5 + 8);
    do {
      lVar2 = *(long *)puVar6[-1];
      *(long *)puVar6[-1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h95a209e0c79058c2E();
        lVar2 = *(long *)*puVar6;
        *(long *)*puVar6 = lVar2 + -1;
        LORelease();
      }
      else {
        lVar2 = *(long *)*puVar6;
        *(long *)*puVar6 = lVar2 + -1;
        LORelease();
      }
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c954050b5deebc7E(puVar6);
      }
      puVar6 = puVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _free(lVar5);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _free(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    _free(*(undefined8 *)(param_1 + 0xe8));
  }
  FUN_1060f038c(param_1 + 0x118);
  FUN_1060f3498(param_1);
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 != 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    lVar5 = 0x10;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar5);
      if ((puVar6 != (undefined8 *)0x0) && (iVar3 = _pthread_mutex_trylock(puVar6), iVar3 == 0)) {
        _pthread_mutex_unlock(puVar6);
        _pthread_mutex_destroy(puVar6);
        _free(puVar6);
      }
      *(undefined8 *)(lVar2 + lVar5) = 0;
      lVar5 = lVar5 + 0x80;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _free(lVar2);
  }
  FUN_1060f361c(param_1 + 0x130);
  lVar8 = **(long **)(param_1 + 0x210);
  **(long **)(param_1 + 0x210) = lVar8 + -1;
  LORelease();
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcde18fb2dde9b6d2E(param_1 + 0x210);
  }
  lVar8 = *(long *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if ((lVar8 == 0) || (iVar3 = _pthread_mutex_trylock(lVar8), iVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    plVar4 = *(long **)(param_1 + 0x230);
  }
  else {
    _pthread_mutex_unlock(lVar8);
    _pthread_mutex_destroy(lVar8);
    _free(lVar8);
    *(undefined8 *)(param_1 + 0x218) = 0;
    plVar4 = *(long **)(param_1 + 0x230);
  }
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    *plVar4 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      plVar4 = (long *)(param_1 + 0x230);
      unaff_x30 = 0x1060f5494;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
      unaff_x20 = lVar8;
      unaff_x21 = puVar6;
      unaff_x22 = 0;
      unaff_x29 = puVar1;
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5862e7766bbccc81E;
    }
  }
  plVar4 = *(long **)(param_1 + 0x240);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    *plVar4 = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      plVar4 = (long *)(param_1 + 0x240);
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5862e7766bbccc81E:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar8 = *plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      uVar7 = puVar6[2];
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(lVar8 + (uVar7 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (lVar8 != -1) {
        lVar5 = *(long *)(lVar8 + 8);
        *(long *)(lVar8 + 8) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          if ((uVar7 + puVar6[1] + 0xf & -uVar7) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar8);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

