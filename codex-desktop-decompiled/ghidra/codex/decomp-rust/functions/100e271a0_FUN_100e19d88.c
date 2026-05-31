
/* WARNING: Possible PIC construction at 0x000100dfe228: Changing call to branch */

void FUN_100e19d88(ulong *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  code *pcVar8;
  ulong *unaff_x19;
  ulong uVar9;
  undefined8 unaff_x20;
  undefined8 *puVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_xzr;
  
  lVar3 = *param_1 + 0x7ffffffffffffffb;
  lVar5 = 0;
  if (0x8000000000000004 < *param_1) {
    lVar5 = lVar3;
  }
  if (lVar5 == 0) {
    if (lVar3 == 0) {
      return;
    }
    lVar5 = *param_1 + 0x7fffffffffffffff;
    if (*param_1 < 0x8000000000000001) {
      lVar5 = 1;
    }
    if (lVar5 == 0) {
      puVar6 = param_1 + 1;
      puVar2 = &stack0xfffffffffffffff0;
      __ZN76__LT_tokio__io__util__mem__DuplexStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h9c50051bf4719a0dE
                ();
      lVar5 = *(long *)*puVar6;
      *(long *)*puVar6 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        unaff_x30 = 0x100dfe22c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        unaff_x19 = puVar6;
        unaff_x20 = 0xffffffffffffffff;
        unaff_x29 = puVar2;
      }
      else {
        puVar6 = param_1 + 2;
        lVar5 = *(long *)*puVar6;
        *(long *)*puVar6 = lVar5 + -1;
        LORelease();
        if (lVar5 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar9 = *puVar6;
      plVar7 = *(long **)(uVar9 + 0x30);
      if (((ulong)plVar7 & 1) == 0) {
        lVar5 = plVar7[4];
        plVar7[4] = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          if (*plVar7 != 0) {
            _free(plVar7[1]);
          }
          goto LAB_1060f6a78;
        }
      }
      else if (*(long *)(uVar9 + 0x28) + ((ulong)plVar7 >> 5) != 0) {
        plVar7 = (long *)(*(long *)(uVar9 + 0x18) - ((ulong)plVar7 >> 5));
LAB_1060f6a78:
        _free(plVar7);
      }
      if (*(long *)(uVar9 + 0x40) != 0) {
        (**(code **)(*(long *)(uVar9 + 0x40) + 0x18))(*(undefined8 *)(uVar9 + 0x48));
      }
      if (*(long *)(uVar9 + 0x50) != 0) {
        (**(code **)(*(long *)(uVar9 + 0x50) + 0x18))(*(undefined8 *)(uVar9 + 0x58));
      }
      if (uVar9 == 0xffffffffffffffff) {
        return;
      }
      lVar5 = *(long *)(uVar9 + 8);
      *(long *)(uVar9 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto code_r0x000108aa97c4;
    }
    if (lVar5 == 1) {
      if (*param_1 == 0x8000000000000000) {
        __ZN90__LT_rmcp__transport__child_process__ChildWithCleanup_u20_as_u20_core__ops__drop__Drop_GT_4drop17hb49a4b5d124d9ec6E
                  (param_1 + 0xe);
        uVar9 = param_1[0xe];
        if (uVar9 != 0) {
          puVar10 = (undefined8 *)param_1[0xf];
          pcVar8 = (code *)*puVar10;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar9);
          }
          if (puVar10[1] != 0) {
            _free(uVar9);
          }
        }
        FUN_100d6d9b4(param_1 + 1);
      }
      else {
        __ZN113__LT_codex_rmcp_client__executor_process_transport__ExecutorProcessTransport_u20_as_u20_core__ops__drop__Drop_GT_4drop17h85c87e3da6317ac1E
                  (param_1);
        lVar5 = *(long *)param_1[0xf];
        *(long *)param_1[0xf] = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hce82b7456c5d2d0fE();
        }
        FUN_100e35550(param_1);
        if (param_1[6] != 0) {
          _free(param_1[7]);
        }
        if (param_1[9] != 0) {
          _free(param_1[10]);
        }
        if (param_1[0xc] != 0) {
          _free(param_1[0xd]);
        }
      }
      plVar7 = (long *)param_1[0x13];
      lVar5 = *plVar7;
      *plVar7 = lVar5 + -1;
      LORelease();
      if (lVar5 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      uVar9 = param_1[0x13];
      FUN_104ad8eb8(uVar9 + 0x10);
      if (uVar9 == 0xffffffffffffffff) {
        return;
      }
      lVar5 = *(long *)(uVar9 + 8);
      *(long *)(uVar9 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto code_r0x000108aa97c4;
    }
    if (lVar5 == 2) {
      FUN_100d88cd8();
      puVar6 = param_1 + 2;
      uVar9 = *puVar6;
      LOAcquire();
      lVar5 = *(long *)(uVar9 + 0x1f0);
      *(long *)(uVar9 + 0x1f0) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        LOAcquire();
        lVar5 = *(long *)(uVar9 + 0x88);
        *(long *)(uVar9 + 0x88) = lVar5 + 1;
        lVar5 = func_0x000100fcb4b8(uVar9 + 0x80,lVar5);
        *(ulong *)(lVar5 + 0x6a10) = *(ulong *)(lVar5 + 0x6a10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(uVar9 + 0x110);
        LOAcquire();
        uVar4 = *puVar1;
        *puVar1 = uVar4 | 2;
        LORelease();
        if (uVar4 == 0) {
          lVar5 = *(long *)(uVar9 + 0x100);
          *(undefined8 *)(uVar9 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(*(undefined8 *)(uVar9 + 0x108));
          }
        }
      }
      lVar5 = *(long *)*puVar6;
      *(long *)*puVar6 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(puVar6);
      }
      plVar7 = (long *)param_1[4];
      if (plVar7 != (long *)0x0) {
        if (*plVar7 == 0xcc) {
          *plVar7 = 0x84;
        }
        else {
          (**(code **)(plVar7[2] + 0x20))();
        }
      }
      FUN_100e3bcd4(param_1 + 5);
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (param_1 + 3);
      lVar5 = *(long *)param_1[3];
      *(long *)param_1[3] = lVar5 + -1;
      LORelease();
      if (lVar5 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      uVar9 = param_1[3];
      FUN_10611d000(uVar9 + 0x30);
      if (uVar9 != 0xffffffffffffffff) {
        lVar5 = *(long *)(uVar9 + 8);
        *(long *)(uVar9 + 8) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
    FUN_100dadd9c(param_1 + 1);
    param_1 = param_1 + 6;
    lVar5 = *(long *)*param_1;
    *(long *)*param_1 = lVar5 + -1;
    LORelease();
    if (lVar5 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
  }
  else {
    if (lVar5 != 1) {
      return;
    }
    lVar5 = *(long *)param_1[1];
    *(long *)param_1[1] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h11322f4fd33ab6c2E();
    }
    param_1 = param_1 + 2;
    plVar7 = (long *)*param_1;
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar5 = *plVar7;
    *plVar7 = lVar5 + -1;
    LORelease();
    if (lVar5 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
  }
  uVar9 = *param_1;
  if (*(long *)(uVar9 + 0x10) != 0) {
    _free(*(undefined8 *)(uVar9 + 0x18));
  }
  if (*(long *)(uVar9 + 0x28) != 0) {
    _free(*(undefined8 *)(uVar9 + 0x30));
  }
  lVar5 = **(long **)(uVar9 + 0x40);
  **(long **)(uVar9 + 0x40) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
  }
  if (*(long *)(uVar9 + 0x70) != 2) {
    if (*(long *)(uVar9 + 0xf0) != 0) {
      _free(*(undefined8 *)(uVar9 + 0xf8));
    }
    if (*(long *)(uVar9 + 0x108) != 0) {
      _free(*(undefined8 *)(uVar9 + 0x110));
    }
    if (*(long *)(uVar9 + 0x120) != 0) {
      _free(*(undefined8 *)(uVar9 + 0x128));
    }
    FUN_103d95cc0((long *)(uVar9 + 0x70));
  }
  if (uVar9 != 0xffffffffffffffff) {
    lVar5 = *(long *)(uVar9 + 8);
    *(long *)(uVar9 + 8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar9);
      return;
    }
  }
  return;
}

