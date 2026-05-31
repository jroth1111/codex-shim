
void FUN_103db2cd0(int *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*param_1 == 0) {
    puVar1 = (ulong *)(param_1 + 2);
    if (*puVar1 != 2) {
      lVar7 = *(long *)(param_1 + 4);
      if ((*puVar1 & 1) != 0) {
        lVar7 = lVar7 + (*(long *)(*(long *)(param_1 + 6) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      (**(code **)(*(long *)(param_1 + 6) + 0x60))(lVar7,param_1 + 8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (lVar7 = *(long *)(param_1 + 10), lVar7 != 0)) {
      uStack_60 = *(undefined8 *)(lVar7 + 0x10);
      uStack_58 = *(undefined8 *)(lVar7 + 0x18);
      puStack_48 = &DAT_103d8be04;
      puStack_50 = (undefined1 *)&uStack_60;
      func_0x000103e76334(puVar1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_50);
    }
    if (*(long *)(param_1 + 0xc) != -0x7ffffffffffffffe) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puVar8 = *(undefined8 **)(param_1 + 0x1a);
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar3);
      }
      if (puVar8[1] != 0) {
        _free(uVar3);
      }
      func_0x000103da0d28(param_1 + 0xc);
    }
    if (*puVar1 != 2) {
      lVar7 = *(long *)(param_1 + 4);
      if ((*puVar1 & 1) != 0) {
        lVar7 = lVar7 + (*(long *)(*(long *)(param_1 + 6) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      (**(code **)(*(long *)(param_1 + 6) + 0x68))(lVar7,param_1 + 8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (lVar7 = *(long *)(param_1 + 10), lVar7 != 0)) {
      uStack_60 = *(undefined8 *)(lVar7 + 0x10);
      uStack_58 = *(undefined8 *)(lVar7 + 0x18);
      puStack_48 = &DAT_103d8be04;
      puStack_50 = (undefined1 *)&uStack_60;
      func_0x000103e76334(puVar1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_50);
    }
    func_0x000103da7b74(puVar1);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  plVar5 = (long *)(param_1 + 2);
  if (*plVar5 == -0x7ffffffffffffffd) {
    lVar7 = *(long *)(param_1 + 6);
    if (lVar7 == 0) {
      return;
    }
    puVar8 = *(undefined8 **)(param_1 + 8);
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar7);
    }
    if (puVar8[1] == 0) {
      return;
    }
  }
  else {
    if (*plVar5 == -0x7ffffffffffffffe) {
      plVar5 = *(long **)(param_1 + 0x12);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        *plVar5 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      lVar7 = *(long *)(param_1 + 4);
      if (lVar7 == -0x7fffffffffffffff) {
        return;
      }
      if (lVar7 == -0x8000000000000000 || lVar7 == 0) {
        lVar7 = *(long *)(param_1 + 10);
        puVar8 = *(undefined8 **)(param_1 + 0xc);
        pcVar4 = (code *)*puVar8;
      }
      else {
        _free(*(undefined8 *)(param_1 + 6));
        lVar7 = *(long *)(param_1 + 10);
        puVar8 = *(undefined8 **)(param_1 + 0xc);
        pcVar4 = (code *)*puVar8;
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar7);
      }
    }
    else {
      plVar9 = *(long **)(param_1 + 0x1a);
      if (plVar9 != (long *)0x0) {
        uVar2 = plVar9[6];
        do {
          uVar6 = uVar2;
          if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_103dc0238;
          uVar2 = plVar9[6];
        } while (uVar2 != uVar6);
        plVar9[6] = uVar6 | 2;
LAB_103dc0238:
        if ((uVar6 & 5) == 1) {
          (**(code **)(plVar9[4] + 0x10))(plVar9[5]);
        }
        lVar7 = *plVar9;
        *plVar9 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000105ca7830(param_1 + 0x1a);
        }
      }
      if (*plVar5 != -0x7fffffffffffffff) {
        plVar9 = *(long **)(param_1 + 8);
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          *plVar9 = lVar7 + -1;
          LORelease();
          if (lVar7 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        if ((*plVar5 != -0x8000000000000000) && (*plVar5 != 0)) {
          _free(*(undefined8 *)(param_1 + 4));
        }
      }
      lVar7 = *(long *)(param_1 + 0xc);
      if (lVar7 == -0x7fffffffffffffff) {
        return;
      }
      if ((lVar7 != -0x8000000000000000) && (lVar7 != 0)) {
        _free(*(undefined8 *)(param_1 + 0xe));
      }
      lVar7 = *(long *)(param_1 + 0x12);
      puVar8 = *(undefined8 **)(param_1 + 0x14);
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(lVar7);
      }
    }
    if (puVar8[1] == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar7);
  return;
}

