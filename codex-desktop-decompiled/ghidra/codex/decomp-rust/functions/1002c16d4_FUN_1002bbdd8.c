
/* WARNING: Possible PIC construction at 0x0001002bc944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002be06c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002bbdd8(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *puVar14;
  undefined8 unaff_x21;
  undefined8 *puVar15;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_130;
  long ***ppplStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 uStack_100;
  char cStack_ff;
  undefined4 uStack_fe;
  undefined2 uStack_fa;
  byte *pbStack_f0;
  undefined *puStack_e8;
  undefined *puStack_c0;
  long ***ppplStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  long *plStack_60;
  byte **ppbStack_58;
  
  puVar14 = (ulong *)(param_1 + 0x40);
  if (*puVar14 == 9) {
    return;
  }
  FUN_1002b9c68();
  uVar11 = *puVar14;
  lVar13 = uVar11 - 6;
  if (uVar11 < 6) {
    lVar13 = 1;
  }
  if (lVar13 != 1) {
    if (lVar13 != 0) {
      return;
    }
    puVar1 = &stack0xfffffffffffffff0;
    plVar12 = *(long **)(param_1 + 0x210);
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
      *plVar12 = lVar13 + -1;
      LORelease();
      if (lVar13 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001002ca0bc(param_1 + 0x210);
      }
    }
    if (1 < *(byte *)(param_1 + 0x178)) {
      plVar12 = *(long **)(param_1 + 0x180);
      (**(code **)(*plVar12 + 0x20))(plVar12 + 3,plVar12[1],plVar12[2]);
      _free(plVar12);
    }
    (**(code **)(*(long *)(param_1 + 0x188) + 0x20))
              (param_1 + 0x1a0,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198));
    FUN_1002b6fe0(param_1 + 0x120);
    if (*(int *)(param_1 + 0x170) != 1000000000) {
      lVar13 = **(long **)(param_1 + 0x158);
      **(long **)(param_1 + 0x158) = lVar13 + -1;
      LORelease();
      if (lVar13 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(param_1 + 0x158);
      }
    }
    FUN_1002bd1ac(param_1 + 0x1a8);
    plVar12 = (long *)(param_1 + 0xc0);
    lVar13 = *(long *)*plVar12;
    *(long *)*plVar12 = lVar13 + -1;
    LORelease();
    if (lVar13 == 1) {
      DataMemoryBarrier(2,1);
      unaff_x30 = 0x1002bc948;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = (ulong *)(param_1 + 0x48);
      unaff_x20 = 1000000000;
      unaff_x29 = puVar1;
    }
    else {
      plVar12 = *(long **)(param_1 + 0xd0);
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
        *plVar12 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E();
        }
      }
      lVar13 = **(long **)(param_1 + 0x200);
      **(long **)(param_1 + 0x200) = lVar13 + -1;
      LORelease();
      if (lVar13 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      plVar12 = (long *)(param_1 + 0x200);
    }
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h48fa705e035c8ed6E:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar13 = *plVar12;
    puVar15 = (undefined8 *)plVar12[1];
    uVar11 = puVar15[2];
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(lVar13 + (uVar11 - 1 & 0xfffffffffffffff0) + 0x10);
    }
    if (lVar13 != -1) {
      lVar6 = *(long *)(lVar13 + 8);
      *(long *)(lVar13 + 8) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        if (uVar11 < 9) {
          uVar11 = 8;
        }
        if ((uVar11 + puVar15[1] + 0xf & -uVar11) != 0) {
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar13);
          return;
        }
      }
    }
    return;
  }
  if (uVar11 == 5) {
    if (*(char *)(param_1 + 0xb8) == '\x02') {
SUB_1002c16d4:
      lVar13 = *(long *)(param_1 + 0x48);
      if (lVar13 != 0) {
        puVar15 = *(undefined8 **)(param_1 + 0x50);
        pcVar4 = (code *)*puVar15;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(lVar13);
        }
        if (puVar15[1] != 0) {
          _free(lVar13);
        }
      }
      if (*(char *)(param_1 + 0x71) == '\x02') {
        return;
      }
      lVar13 = *(long *)(param_1 + 0x58);
      if (lVar13 != 0) {
        puVar15 = *(undefined8 **)(param_1 + 0x60);
        pcVar4 = (code *)*puVar15;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(lVar13);
        }
        if (puVar15[1] != 0) {
          _free(lVar13);
        }
      }
      plVar12 = *(long **)(param_1 + 0x68);
      lVar13 = *plVar12;
      *plVar12 = lVar13 + -1;
      LORelease();
      if (lVar13 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      lVar13 = *(long *)(param_1 + 0x68);
      if (lVar13 == -1) {
        return;
      }
      lVar6 = *(long *)(lVar13 + 8);
      *(long *)(lVar13 + 8) = lVar6 + -1;
      LORelease();
      if (lVar6 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto _free;
    }
    if (*(char *)(param_1 + 0xb8) == '\x03') {
      return;
    }
  }
  else {
    lVar6 = *puVar14 - 2;
    lVar13 = 0;
    if (1 < *puVar14) {
      lVar13 = lVar6;
    }
    if (lVar13 == 0) {
      if (lVar6 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x218) != 0x3b9aca03) {
        FUN_1002bbc18(param_1 + 0x170);
      }
      puVar1 = &stack0xfffffffffffffff0;
      FUN_1002ba428(param_1 + 0x118);
      plVar12 = *(long **)(param_1 + 0x160);
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
        *plVar12 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          func_0x0001002ca0bc(param_1 + 0x160);
        }
      }
      plVar12 = (long *)(param_1 + 0xb8);
      lVar13 = *(long *)*plVar12;
      *(long *)*plVar12 = lVar13 + -1;
      LORelease();
      if (lVar13 == 1) {
        DataMemoryBarrier(2,1);
        unaff_x30 = 0x1002be070;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        unaff_x19 = puVar14;
        unaff_x29 = puVar1;
      }
      else {
        plVar12 = *(long **)(param_1 + 200);
        if (plVar12 != (long *)0x0) {
          lVar13 = *plVar12;
          *plVar12 = lVar13 + -1;
          LORelease();
          if (lVar13 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E();
          }
        }
        lVar13 = **(long **)(param_1 + 0x150);
        **(long **)(param_1 + 0x150) = lVar13 + -1;
        LORelease();
        if (lVar13 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        plVar12 = (long *)(param_1 + 0x150);
      }
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h48fa705e035c8ed6E;
    }
    if (lVar13 != 1) {
      return;
    }
    cVar7 = *(char *)(param_1 + 0xb8);
    if (cVar7 == '\x02') goto SUB_1002c16d4;
    if (cVar7 == '\x03') {
      return;
    }
    if (cVar7 == '\x04') {
      lVar13 = *(long *)(param_1 + 0x48);
      FUN_1002bd7f0(lVar13);
      goto _free;
    }
  }
  pbVar10 = (byte *)(param_1 + 0x48);
  cVar7 = *(char *)(param_1 + 0xa9);
  *(undefined1 *)(param_1 + 0xa9) = 2;
  if (cVar7 == '\x02') goto LAB_1002b9840;
  lStack_118 = *(long *)(param_1 + 0x90);
  uStack_120 = *(undefined8 *)(param_1 + 0x88);
  lStack_108 = *(long *)(param_1 + 0xa0);
  uStack_110 = *(undefined8 *)(param_1 + 0x98);
  ppplStack_128 = *(long ****)(param_1 + 0x80);
  puStack_130 = *(undefined **)(param_1 + 0x78);
  uStack_100 = *(undefined1 *)(param_1 + 0xa8);
  uStack_fe = *(undefined4 *)(param_1 + 0xaa);
  uStack_fa = *(undefined2 *)(param_1 + 0xae);
  cStack_ff = cVar7;
  if (*(char *)(lStack_108 + 0x10) == '\0') {
    bVar5 = *(long *)(puStack_130 + 0x10) != 3;
    if ((char)uStack_120 != '\x02') {
      bVar5 = *(long *)(puStack_130 + 0x10) == 1;
    }
    if (!bVar5) goto LAB_1002b97e0;
    plVar12 = *(long **)(param_1 + 0xb0);
    if ((long)plVar12 + 1U < 2) {
LAB_1002b96d8:
      if ((char)uStack_120 != '\x02') {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b634ae0 - 1 < 2 ||
             ((bRam000000010b634ae0 != 0 &&
              (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
                                 ), cVar7 != '\0')))) &&
            (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
                               ), iVar8 != 0)))) {
          lStack_a8 = ___ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
                      + 0x30;
          puStack_e8 = &DAT_1002c711c;
          ppbStack_58 = &pbStack_f0;
          plStack_60 = (long *)s_pool_dropped__dropping_pooled_____108aba385;
          pplStack_70 = &plStack_60;
          puStack_68 = &UNK_10b1f3630;
          ppplStack_b8 = &pplStack_70;
          puStack_c0 = (undefined *)0x1;
          uStack_b0 = 1;
          pbStack_f0 = pbVar10;
          FUN_1002e0168(&puStack_c0);
        }
        else {
          lVar13 = 
          ___ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_80 = *(undefined8 *)
                         (
                         ___ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
                         + 0x20);
            uStack_78 = *(undefined8 *)
                         (
                         ___ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
                         + 0x28);
            uStack_88 = 5;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_88);
            if (iVar8 != 0) {
              lStack_a8 = ___ZN95__LT_hyper_util__client__legacy__pool__Pooled_LT_T_C_K_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h1fc901019d62ef6fE
                          + 0x30;
              puStack_e8 = &DAT_1002c711c;
              ppbStack_58 = &pbStack_f0;
              plStack_60 = (long *)s_pool_dropped__dropping_pooled_____108aba385;
              pplStack_70 = &plStack_60;
              puStack_68 = &UNK_10b1f3630;
              ppplStack_b8 = &pplStack_70;
              puStack_c0 = (undefined *)0x1;
              uStack_b0 = 1;
              pbStack_f0 = pbVar10;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar13,puVar3,puVar2,&uStack_88,&puStack_c0);
            }
          }
        }
      }
LAB_1002b9a34:
      FUN_1002c2300(&lStack_118);
      goto LAB_1002b97ec;
    }
    lVar13 = *plVar12;
    do {
      if (lVar13 == 0) goto LAB_1002b96d8;
      if (lVar13 < 0) {
        puStack_c0 = &UNK_10b1f5e10;
        ppplStack_b8 = (long ***)&DAT_1002b2088;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_c0,&UNK_10b1f5e38);
        goto LAB_1002b9aa0;
      }
      lVar6 = lVar13 + 1;
      bVar5 = *plVar12 != lVar13;
      lVar13 = *plVar12;
    } while (bVar5);
    *plVar12 = lVar6;
    plStack_60 = plVar12;
    if (plVar12[2] == 0) {
      thunk_FUN_1087d4f48(plVar12 + 2);
    }
    iVar8 = _pthread_mutex_lock();
    if (iVar8 != 0) {
      thunk_FUN_108a81ad4();
LAB_1002b9aa0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b9aa4);
      (*pcVar4)();
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      if ((char)plVar12[3] == '\0') {
        uVar9 = 0;
        goto LAB_1002b99b8;
      }
LAB_1002b9924:
      if (((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(plVar12 + 3) = 1;
      }
LAB_1002b9930:
      _pthread_mutex_unlock(plVar12[2]);
      bVar5 = true;
    }
    else {
      uVar9 = FUN_107c05e34();
      if ((char)plVar12[3] != '\0') {
        if (uVar9 != 0) goto LAB_1002b9924;
        goto LAB_1002b9930;
      }
      uVar9 = uVar9 ^ 1;
LAB_1002b99b8:
      FUN_1002c5710(&pbStack_f0,pbVar10);
      ppplStack_b8 = ppplStack_128;
      puStack_c0 = puStack_130;
      lStack_a8 = lStack_118;
      uStack_b0 = uStack_120;
      lStack_98 = lStack_108;
      uStack_a0 = uStack_110;
      uStack_90 = CONCAT26(uStack_fa,CONCAT42(uStack_fe,CONCAT11(cStack_ff,uStack_100)));
      FUN_10026c8d0(plVar12 + 4,&pbStack_f0,&puStack_c0,plVar12);
      if ((((uVar9 & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(plVar12 + 3) = 1;
      }
      _pthread_mutex_unlock(plVar12[2]);
      bVar5 = false;
    }
    lVar13 = *plVar12;
    *plVar12 = lVar13 + -1;
    LORelease();
    if (lVar13 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca0bc(&plStack_60);
    }
    if (bVar5) goto LAB_1002b9a34;
  }
  else {
LAB_1002b97e0:
    FUN_1002c2300(&lStack_118);
LAB_1002b97ec:
    if ((char)uStack_120 == '\x02') {
      FUN_1002c523c(&puStack_130);
    }
    else {
      FUN_1002b7d4c(&puStack_130);
    }
  }
  if (*(char *)(param_1 + 0xa9) != '\x02') {
    FUN_1002c2300(param_1 + 0x90);
    if (*(char *)(param_1 + 0x88) == '\x02') {
      FUN_1002c523c(param_1 + 0x78);
    }
    else {
      FUN_1002b7d4c(param_1 + 0x78);
    }
  }
LAB_1002b9840:
  if (1 < *pbVar10) {
    plVar12 = *(long **)(param_1 + 0x50);
    (**(code **)(*plVar12 + 0x20))(plVar12 + 3,plVar12[1],plVar12[2]);
    _free(plVar12);
  }
  (**(code **)(*(long *)(param_1 + 0x58) + 0x20))
            (param_1 + 0x70,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  if (1 < *(long *)(param_1 + 0xb0) + 1U) {
    plVar12 = (long *)(*(long *)(param_1 + 0xb0) + 8);
    lVar13 = *plVar12;
    *plVar12 = lVar13 + -1;
    LORelease();
    if (lVar13 == 1) {
      DataMemoryBarrier(2,1);
      _free();
    }
  }
  return;
}

