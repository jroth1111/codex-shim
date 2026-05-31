
/* WARNING: Possible PIC construction at 0x00010330c9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330c8e0) */
/* WARNING: Removing unreachable block (ram,0x00010330c904) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10330c564(long *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar13;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_60 [8];
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  bVar3 = *(byte *)((long)param_1 + 0x2c9);
  if (bVar3 < 6) {
    if (bVar3 < 4) {
      if (bVar3 == 0) {
        lVar6 = *(long *)param_1[9];
        *(long *)param_1[9] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
        }
        lVar6 = *(long *)param_1[10];
        *(long *)param_1[10] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E();
        }
        __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                  (param_1 + 0xc);
        lVar6 = *(long *)param_1[0xc];
        *(long *)param_1[0xc] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0xc);
        }
        puVar8 = (ulong *)param_1[0xd];
        uVar11 = *puVar8;
        do {
          if ((uVar11 & 0x22) != 0) {
            bVar4 = false;
            goto LAB_10339691c;
          }
          if ((uVar11 & 1) == 0) {
            if (((uint)uVar11 >> 2 & 1) == 0) {
              if ((long)uVar11 < 0) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1033969dc);
                (*pcVar5)();
              }
              uVar12 = uVar11 + 100;
              bVar4 = true;
            }
            else {
              bVar4 = false;
              uVar12 = uVar11 | 0x20;
            }
          }
          else {
            bVar4 = false;
            uVar12 = uVar11 | 0x24;
          }
          bVar2 = *puVar8 != uVar11;
          uVar11 = *puVar8;
        } while (bVar2);
        *puVar8 = uVar12;
LAB_10339691c:
        if (bVar4) {
          (**(code **)(puVar8[2] + 8))();
        }
        plVar9 = (long *)param_1[0xd];
        if (*plVar9 == 0xcc) {
          *plVar9 = 0x84;
        }
        else {
          (**(code **)(plVar9[2] + 0x20))();
        }
        lVar6 = *(long *)param_1[0xe];
        *(long *)param_1[0xe] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
        }
        lVar6 = *(long *)param_1[0xf];
        *(long *)param_1[0xf] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E();
        }
        plVar9 = param_1;
        if (*param_1 == -0x8000000000000000) {
          return;
        }
        goto SUB_103390b0c;
      }
      if (bVar3 != 3) {
        return;
      }
      lStack_58 = param_1[0x5b];
      plStack_50 = param_1 + 0x62;
      plStack_48 = param_1 + 0x5c;
      plStack_40 = param_1 + 0x5d;
      FUN_1060fb5d4(&lStack_58);
      if (param_1[0x5f] != 0) {
        (**(code **)(param_1[0x5f] + 0x18))(param_1[0x60]);
      }
      FUN_1033848e4(param_1 + 99);
      lVar6 = *(long *)param_1[0x27];
      *(long *)param_1[0x27] = lVar6 + -1;
      LORelease();
    }
    else {
      if (bVar3 != 4) {
        if (bVar3 != 5) {
          return;
        }
        if (((((char)param_1[0x70] == '\x03') && ((char)param_1[0x6f] == '\x03')) &&
            ((char)param_1[0x6e] == '\x03')) && ((char)param_1[0x65] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x66);
          if (param_1[0x67] != 0) {
            (**(code **)(param_1[0x67] + 0x18))(param_1[0x68]);
          }
        }
        goto LAB_10330c7a4;
      }
      lVar6 = param_1[0x5a];
      puVar13 = (undefined8 *)param_1[0x5b];
      pcVar5 = (code *)*puVar13;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(lVar6);
      }
      if (puVar13[1] == 0) goto LAB_10330c7e0;
      _free(lVar6);
      *(undefined1 *)((long)param_1 + 0x2cd) = 0;
      lVar6 = *(long *)param_1[0x27];
      *(long *)param_1[0x27] = lVar6 + -1;
      LORelease();
    }
  }
  else if (bVar3 < 8) {
    if (bVar3 == 6) {
      if ((char)param_1[0x10a] == '\x03') {
        FUN_1032b8e6c(param_1 + 0x5d);
      }
      FUN_10339aa40(param_1 + 0x10b);
    }
    else {
      if (bVar3 != 7) {
        return;
      }
      if ((char)param_1[0x154] == '\x03') {
        FUN_1032a2e88(param_1 + 0x5b);
      }
    }
LAB_10330c7a4:
    if ((*(byte *)((long)param_1 + 0x2cb) & 1) != 0) {
      FUN_103396fdc(param_1 + 0x41);
    }
    *(undefined1 *)((long)param_1 + 0x2cb) = 0;
    *(undefined1 *)((long)param_1 + 0x2cd) = 0;
    lVar6 = *(long *)param_1[0x27];
    *(long *)param_1[0x27] = lVar6 + -1;
    LORelease();
  }
  else {
    if (bVar3 == 8) {
      if ((((char)param_1[0x6a] == '\x03') && ((char)param_1[0x69] == '\x03')) &&
         (((char)param_1[0x68] == '\x03' && ((char)param_1[0x5f] == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x60);
        if (param_1[0x61] != 0) {
          (**(code **)(param_1[0x61] + 0x18))(param_1[0x62]);
        }
      }
    }
    else {
      if (bVar3 == 9) {
        func_0x000103304110(param_1 + 0x5a);
      }
      else {
        if (bVar3 != 10) {
          return;
        }
        if ((((char)param_1[0x68] == '\x03') && ((char)param_1[0x67] == '\x03')) &&
           ((char)param_1[0x5e] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x5f);
          if (param_1[0x60] != 0) {
            (**(code **)(param_1[0x60] + 0x18))(param_1[0x61]);
          }
        }
      }
      *(undefined1 *)((long)param_1 + 0x2cc) = 0;
    }
LAB_10330c7e0:
    *(undefined1 *)((long)param_1 + 0x2cd) = 0;
    lVar6 = *(long *)param_1[0x27];
    *(long *)param_1[0x27] = lVar6 + -1;
    LORelease();
  }
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x27);
  }
  if (param_1[0x24] != 0) {
    _free(param_1[0x25]);
  }
  unaff_x21 = param_1 + 0x13;
  lVar6 = *(long *)param_1[0x1c];
  *(long *)param_1[0x1c] = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x1f);
  lVar6 = *(long *)param_1[0x1f];
  *(long *)param_1[0x1f] = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x1f);
  }
  puVar8 = (ulong *)param_1[0x20];
  uVar11 = *puVar8;
  do {
    if ((uVar11 & 0x22) != 0) {
      bVar4 = false;
      lStack_58 = 0;
      goto LAB_10330c928;
    }
    if ((uVar11 & 1) == 0) {
      if (((uint)uVar11 >> 2 & 1) == 0) {
        if ((long)uVar11 < 0) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10330c9e4);
          (*pcVar5)();
        }
        uStack_38 = uVar11 + 100;
        bVar4 = true;
      }
      else {
        bVar4 = false;
        uStack_38 = uVar11 | 0x20;
      }
    }
    else {
      bVar4 = false;
      uStack_38 = uVar11 | 0x24;
    }
    lStack_58 = 1;
    bVar2 = *puVar8 != uVar11;
    uVar11 = *puVar8;
  } while (bVar2);
  *puVar8 = uStack_38;
LAB_10330c928:
  if (bVar4) {
    (**(code **)(puVar8[2] + 8))();
  }
  plVar9 = (long *)param_1[0x20];
  if (*plVar9 == 0xcc) {
    *plVar9 = 0x84;
  }
  else {
    (**(code **)(plVar9[2] + 0x20))();
  }
  unaff_x20 = 0xffffffffffffffff;
  lVar6 = *(long *)param_1[0x21];
  *(long *)param_1[0x21] = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_1 + 0x21);
  }
  lVar6 = *(long *)param_1[0x22];
  *(long *)param_1[0x22] = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(param_1 + 0x22);
  }
  if (*unaff_x21 == -0x8000000000000000) {
    *(undefined1 *)((long)param_1 + 0x2ce) = 0;
    return;
  }
  unaff_x30 = 0x10330c9b0;
  register0x00000008 = (BADSPACEBASE *)auStack_60;
  plVar9 = unaff_x21;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
SUB_103390b0c:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  __ZN75__LT_codex_otel__metrics__timer__Timer_u20_as_u20_core__ops__drop__Drop_GT_4drop17haeb6d7ad7698da23E
            ();
  if (*plVar9 != 0) {
    _free(plVar9[1]);
  }
  lVar6 = plVar9[4];
  lVar7 = plVar9[5];
  if (lVar7 != 0) {
    puVar13 = (undefined8 *)(lVar6 + 0x20);
    do {
      if (puVar13[-4] != 0) {
        _free(puVar13[-3]);
      }
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (plVar9[3] != 0) {
    _free(lVar6);
  }
  plVar10 = (long *)plVar9[8];
  lVar6 = *plVar10;
  *plVar10 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    lVar6 = plVar9[8];
    FUN_1048c99e8(lVar6 + 0x10);
    if (lVar6 != -1) {
      lVar7 = *(long *)(lVar6 + 8);
      *(long *)(lVar6 + 8) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar6);
        return;
      }
    }
    return;
  }
  return;
}

