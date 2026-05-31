
void FUN_100cfcde4(long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char in_wzr;
  long lVar15;
  ulong uStack_290;
  long alStack_288 [65];
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  
  bVar3 = *(byte *)(param_1 + 0x39c);
  if (bVar3 < 6) {
    if (bVar3 == 3) {
      if (*(char *)(param_1 + 0x3f0) != '\x03') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x3b0);
      if (*(long *)(param_1 + 0x3b8) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100cfcee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x3b8) + 0x18))(*(undefined8 *)(param_1 + 0x3c0));
      return;
    }
    if (bVar3 == 4) {
      if (((*(char *)(param_1 + 0x410) == '\x03') && (*(char *)(param_1 + 0x408) == '\x03')) &&
         (*(char *)(param_1 + 0x3c0) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x3c8);
        if (*(long *)(param_1 + 0x3d0) != 0) {
          (**(code **)(*(long *)(param_1 + 0x3d0) + 0x18))(*(undefined8 *)(param_1 + 0x3d8));
        }
      }
      goto LAB_100cfcfb4;
    }
    if (bVar3 != 5) {
      return;
    }
    if (((*(char *)(param_1 + 0x410) == '\x03') && (*(char *)(param_1 + 0x408) == '\x03')) &&
       (*(char *)(param_1 + 0x3c0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x3c8);
      if (*(long *)(param_1 + 0x3d0) != 0) {
        (**(code **)(*(long *)(param_1 + 0x3d0) + 0x18))(*(undefined8 *)(param_1 + 0x3d8));
      }
    }
  }
  else {
    if (bVar3 < 8) {
      if (bVar3 == 6) {
        func_0x000100cdee3c(param_1 + 0x3a0);
      }
      else {
        if (bVar3 != 7) {
          return;
        }
        FUN_100ce192c(param_1 + 0x3a0);
      }
      *(undefined1 *)(param_1 + 0x39b) = 0;
      bVar3 = *(byte *)(param_1 + 0x398);
    }
    else {
      if (bVar3 == 8) {
        if (((*(char *)(param_1 + 0x418) == '\x03') && (*(char *)(param_1 + 0x410) == '\x03')) &&
           (*(char *)(param_1 + 0x3c8) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x3d0);
          if (*(long *)(param_1 + 0x3d8) != 0) {
            (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(*(undefined8 *)(param_1 + 0x3e0));
          }
        }
      }
      else {
        if (bVar3 != 9) {
          return;
        }
        func_0x000100cc1ec8(param_1 + 0x3a8);
        lVar14 = **(long **)(param_1 + 0x3a0);
        **(long **)(param_1 + 0x3a0) = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000103e32944(param_1 + 0x3a0);
        }
      }
      plVar9 = *(long **)(param_1 + 0x380);
      if ((plVar9 != (long *)0x0) && ((*(byte *)(param_1 + 0x399) & 1) != 0)) {
        lVar14 = *plVar9;
        *plVar9 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000103e32944(param_1 + 0x380);
        }
      }
      *(undefined1 *)(param_1 + 0x399) = 0;
      if ((*(byte *)(param_1 + 0x39a) & 1) != 0) {
        lVar14 = **(long **)(param_1 + 0x3a0);
        **(long **)(param_1 + 0x3a0) = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h11322f4fd33ab6c2E(param_1 + 0x3a0);
        }
      }
      *(undefined2 *)(param_1 + 0x39a) = 0;
      bVar3 = *(byte *)(param_1 + 0x398);
    }
    if ((bVar3 & 1) != 0) {
      func_0x000100e70b00(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x398) = 0;
LAB_100cfcfb4:
  uVar7 = (ulong)*(uint *)(param_1 + 0x368);
  if (*(uint *)(param_1 + 0x368) == 0) {
    return;
  }
  pcVar12 = *(char **)(param_1 + 0x360);
  if (*pcVar12 == '\0') {
    *pcVar12 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar12,uVar7,1000000000);
  }
  alStack_288[0x40] = 0;
  uStack_290 = uVar7;
  if (uVar7 == 0) {
    if (*pcVar12 == '\x01') {
      *pcVar12 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar12,0);
    }
  }
  else {
    bVar3 = 0;
    pcVar13 = pcVar12;
    do {
      uVar6 = uStack_290;
      if (pcVar13 == (char *)0x0) {
        if (*pcVar12 == '\0') {
          *pcVar12 = '\x01';
          pcVar13 = pcVar12;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar12,uVar7,1000000000);
          uVar6 = uStack_290;
          pcVar13 = pcVar12;
          uVar7 = extraout_x1_01;
        }
      }
      while (uStack_290 = uVar6, (ulong)alStack_288[0x40] < 0x20) {
        lVar14 = *(long *)(pcVar13 + 0x10);
        if (lVar14 == 0) {
          if (uVar6 != 0) goto LAB_1060fa7d4;
          goto LAB_1060fa7f8;
        }
        uVar2 = *(ulong *)(lVar14 + 0x20);
        do {
          uVar11 = uVar2;
          uStack_290 = uVar6;
          if (uVar11 <= uVar6) {
            uStack_290 = uVar11;
          }
          uVar2 = *(ulong *)(lVar14 + 0x20);
        } while (uVar2 != uVar11);
        *(ulong *)(lVar14 + 0x20) = uVar11 - uStack_290;
        uStack_290 = uVar6 - uStack_290;
        if (uVar6 < uVar11) break;
        plVar9 = *(long **)(pcVar13 + 0x10);
        if (plVar9 == (long *)0x0) {
          func_0x000108a07a20(&UNK_10b4cd400);
          goto LAB_1060fa954;
        }
        plVar10 = plVar9 + 2;
        lVar14 = *plVar10;
        *(long *)(pcVar13 + 0x10) = lVar14;
        if (lVar14 == 0) {
          pcVar13[8] = '\0';
          pcVar13[9] = '\0';
          pcVar13[10] = '\0';
          pcVar13[0xb] = '\0';
          pcVar13[0xc] = '\0';
          pcVar13[0xd] = '\0';
          pcVar13[0xe] = '\0';
          pcVar13[0xf] = '\0';
          *plVar10 = 0;
          plVar9[3] = 0;
          lVar15 = plVar9[1];
          lVar14 = *plVar9;
          *plVar9 = 0;
        }
        else {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          *plVar10 = 0;
          plVar9[3] = 0;
          lVar15 = plVar9[1];
          lVar14 = *plVar9;
          *plVar9 = 0;
        }
        uVar6 = uStack_290;
        if (lVar14 != 0) {
          if (0x1f < (ulong)alStack_288[0x40]) {
            func_0x000108a07bdc(alStack_288[0x40],0x20,&UNK_10b4cd688);
            goto LAB_1060fa954;
          }
          lVar4 = alStack_288[0x40] * 2;
          alStack_288[alStack_288[0x40] * 2 + 1] = lVar15;
          alStack_288[lVar4] = lVar14;
          alStack_288[0x40] = alStack_288[0x40] + 1;
        }
      }
      bVar1 = uStack_290 == 0 & bVar3;
      if ((uStack_290 != 0) && (!(bool)(bVar3 ^ 1))) {
LAB_1060fa7d4:
        if (uStack_290 >> 0x3d != 0) {
          puStack_80 = &UNK_109beb478;
          puVar8 = &UNK_10b4cd3d0;
          pcVar12 = s__cannot_add_more_than_MAX_PERMIT_108b370dc;
LAB_1060fa91c:
          puStack_78 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar12,&puStack_80,puVar8);
LAB_1060fa954:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1060fa958);
          (*pcVar5)();
        }
        uVar6 = *(ulong *)(pcVar12 + 0x20);
        *(ulong *)(pcVar12 + 0x20) = uVar6 + uStack_290 * 2;
        LORelease();
        if (uStack_290 + (uVar6 >> 1) >> 0x3d != 0) {
          puStack_70 = &UNK_109beb478;
          puStack_68 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          puVar8 = &UNK_10b4cd3e8;
          pcVar12 = s_number_of_added_permits_____woul_108b3710b;
          puStack_80 = (undefined *)&uStack_290;
          goto LAB_1060fa91c;
        }
        uStack_290 = 0;
LAB_1060fa7f8:
        bVar1 = 1;
      }
      bVar3 = bVar1;
      if (*pcVar13 == '\x01') {
        *pcVar13 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar13,0);
        uVar7 = extraout_x1_00;
      }
      lVar14 = alStack_288[0x40] << 4;
      alStack_288[0x40] = 0;
      plVar9 = alStack_288;
      for (; lVar14 != 0; lVar14 = lVar14 + -0x10) {
        (**(code **)(*plVar9 + 8))(plVar9[1]);
        uVar7 = extraout_x1;
        plVar9 = plVar9 + 2;
      }
      pcVar13 = (char *)0x0;
    } while (uStack_290 != 0);
  }
  plVar9 = alStack_288 + 1;
  lVar14 = alStack_288[0x40] + 1;
  while (lVar14 = lVar14 + -1, lVar14 != 0) {
    plVar10 = plVar9 + -1;
    lVar15 = *plVar9;
    plVar9 = plVar9 + 2;
    (**(code **)(*plVar10 + 0x18))(lVar15);
  }
  return;
}

