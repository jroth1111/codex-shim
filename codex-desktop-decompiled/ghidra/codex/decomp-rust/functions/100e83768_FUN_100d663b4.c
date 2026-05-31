
void FUN_100d663b4(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (*(char *)(param_1 + 0xa90) == '\0') {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
              (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    func_0x000100e3c8d4(param_1);
    lVar2 = **(long **)(param_1 + 0x50);
    **(long **)(param_1 + 0x50) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
    }
    plVar6 = (long *)(param_1 + 0x58);
    plVar4 = (long *)*plVar6;
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
code_r0x0001047f2050:
    lVar2 = *plVar6;
    puVar7 = (undefined8 *)plVar6[1];
    uVar9 = puVar7[2];
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(lVar2 + (uVar9 - 1 & 0xfffffffffffffff0) + 0x10);
    }
    if (lVar2 != -1) {
      lVar3 = *(long *)(lVar2 + 8);
      *(long *)(lVar2 + 8) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        if (uVar9 < 9) {
          uVar9 = 8;
        }
        if ((uVar9 + puVar7[1] + 0xf & -uVar9) != 0) goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0xa90) != '\x03') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x226);
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      (**(code **)(*(long *)(param_1 + 0x80) + 0x20))
                (param_1 + 0x98,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
      func_0x000100e3c8d4(param_1 + 0x68);
      lVar2 = **(long **)(param_1 + 0xb8);
      **(long **)(param_1 + 0xb8) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
      plVar6 = (long *)(param_1 + 0xc0);
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar2 = *plVar4;
      *plVar4 = lVar2 + -1;
      LORelease();
      if (lVar2 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto code_r0x0001047f2050;
    }
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x240) == '\x04') {
        if ((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 600);
          if (*(long *)(param_1 + 0x260) != 0) {
            (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
          }
        }
      }
      else if (*(char *)(param_1 + 0x240) == '\x03') {
        FUN_100cd5a2c(param_1 + 0x248);
      }
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      FUN_100ccf34c(param_1 + 600);
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 == 5) {
      if (*(char *)(param_1 + 0x240) == '\x04') {
        if ((*(char *)(param_1 + 0x2a0) == '\x03') && (*(char *)(param_1 + 0x298) == '\x03')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 600);
          if (*(long *)(param_1 + 0x260) != 0) {
            (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(*(undefined8 *)(param_1 + 0x268));
          }
        }
      }
      else if (*(char *)(param_1 + 0x240) == '\x03') {
        FUN_100cd5a2c(param_1 + 0x248);
      }
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      FUN_100ccf34c(param_1 + 600);
    }
  }
  else {
    if (bVar1 == 7) {
      if (*(char *)(param_1 + 0x260) == '\x04') {
        uVar8 = *(undefined8 *)(param_1 + 0x268);
        puVar7 = *(undefined8 **)(param_1 + 0x270);
        pcVar5 = (code *)*puVar7;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar8);
        }
        if (puVar7[1] != 0) {
          _free(uVar8);
        }
      }
      else if (*(char *)(param_1 + 0x260) == '\x03') {
        FUN_100cc8f78(param_1 + 0x268);
      }
    }
    else {
      if (bVar1 != 8) {
        return;
      }
      FUN_100ccf34c(param_1 + 0x270);
      if (*(long *)(param_1 + 0x230) != 0) {
        _free(*(undefined8 *)(param_1 + 0x238));
      }
      if (*(long *)(param_1 + 0x1f0) != -0x7fffffffffffffff) {
        *(undefined1 *)(param_1 + 0x227) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x227) = 0;
    FUN_100e43948(param_1 + 0x170);
  }
  if ((*(long *)(param_1 + 0x138) != -0x8000000000000000) && (*(long *)(param_1 + 0x138) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x140));
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    _free(*(undefined8 *)(param_1 + 0x128));
  }
  func_0x000100e3c8d4(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x228) = 0;
  (**(code **)(*(long *)(param_1 + 0xe8) + 0x20))
            (param_1 + 0x100,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
  plVar6 = *(long **)(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x229) = 0;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    *plVar6 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  lVar2 = *plVar6;
  *plVar6 = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(param_1 + 0xd0);
  lVar3 = **(long **)(lVar2 + 0xe8);
  **(long **)(lVar2 + 0xe8) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf0f61da3e0a5465cE();
  }
  lVar3 = **(long **)(lVar2 + 0xf0);
  **(long **)(lVar2 + 0xf0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
  }
  lVar3 = **(long **)(lVar2 + 0x100);
  **(long **)(lVar2 + 0x100) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h840b74cb9a470274E(lVar2 + 0x100);
  }
  FUN_1047e6464(lVar2 + 0x10);
  if (lVar2 != -1) {
    lVar3 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

