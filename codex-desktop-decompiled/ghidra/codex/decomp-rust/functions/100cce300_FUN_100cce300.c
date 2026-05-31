
/* WARNING: Removing unreachable block (ram,0x0001060fa864) */
/* WARNING: Removing unreachable block (ram,0x0001060fa868) */
/* WARNING: Removing unreachable block (ram,0x0001060fa924) */

void FUN_100cce300(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char in_wzr;
  long lVar16;
  ulong uStack_290;
  long alStack_288 [65];
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\x03') {
    if (((*(char *)(param_1 + 0x98) == '\x03') && (*(char *)(param_1 + 0x90) == '\x03')) &&
       (*(char *)(param_1 + 0x48) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x50);
      lVar10 = *(long *)(param_1 + 0x58);
      if (lVar10 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        goto LAB_100cce41c;
      }
    }
  }
  else {
    if (cVar3 == '\x04') {
      if (((*(char *)(param_1 + 0x98) == '\x03') && (*(char *)(param_1 + 0x90) == '\x03')) &&
         (*(char *)(param_1 + 0x48) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x50);
        param_2 = extraout_x1;
        if (*(long *)(param_1 + 0x58) != 0) {
          (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(*(undefined8 *)(param_1 + 0x60));
          param_2 = extraout_x1_00;
        }
      }
      pcVar14 = *(char **)(param_1 + 0x18);
      if (*pcVar14 == '\0') {
        *pcVar14 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar14,param_2,1000000000);
      }
      uVar8 = 1;
      uStack_290 = 1;
      alStack_288[0x40] = 0;
      bVar4 = 0;
      pcVar15 = pcVar14;
      do {
        uVar7 = uStack_290;
        if (pcVar15 == (char *)0x0) {
          if (*pcVar14 == '\0') {
            *pcVar14 = '\x01';
            pcVar15 = pcVar14;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar14,uVar8,1000000000);
            uVar7 = uStack_290;
            pcVar15 = pcVar14;
            uVar8 = extraout_x1_03;
          }
        }
        while (uStack_290 = uVar7, (ulong)alStack_288[0x40] < 0x20) {
          lVar10 = *(long *)(pcVar15 + 0x10);
          if (lVar10 == 0) {
            if (uVar7 == 0) goto LAB_1060fa7f8;
            goto LAB_1060fa7d4;
          }
          uVar2 = *(ulong *)(lVar10 + 0x20);
          do {
            uVar13 = uVar2;
            uStack_290 = uVar7;
            if (uVar13 <= uVar7) {
              uStack_290 = uVar13;
            }
            uVar2 = *(ulong *)(lVar10 + 0x20);
          } while (uVar2 != uVar13);
          *(ulong *)(lVar10 + 0x20) = uVar13 - uStack_290;
          uStack_290 = uVar7 - uStack_290;
          if (uVar7 < uVar13) break;
          plVar11 = *(long **)(pcVar15 + 0x10);
          if (plVar11 == (long *)0x0) {
            func_0x000108a07a20(&UNK_10b4cd400);
            goto LAB_1060fa954;
          }
          plVar12 = plVar11 + 2;
          lVar10 = *plVar12;
          *(long *)(pcVar15 + 0x10) = lVar10;
          if (lVar10 == 0) {
            pcVar15[8] = '\0';
            pcVar15[9] = '\0';
            pcVar15[10] = '\0';
            pcVar15[0xb] = '\0';
            pcVar15[0xc] = '\0';
            pcVar15[0xd] = '\0';
            pcVar15[0xe] = '\0';
            pcVar15[0xf] = '\0';
            *plVar12 = 0;
            plVar11[3] = 0;
            lVar16 = plVar11[1];
            lVar10 = *plVar11;
            *plVar11 = 0;
          }
          else {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            *plVar12 = 0;
            plVar11[3] = 0;
            lVar16 = plVar11[1];
            lVar10 = *plVar11;
            *plVar11 = 0;
          }
          uVar7 = uStack_290;
          if (lVar10 != 0) {
            if (0x1f < (ulong)alStack_288[0x40]) {
              func_0x000108a07bdc(alStack_288[0x40],0x20,&UNK_10b4cd688);
              goto LAB_1060fa954;
            }
            lVar5 = alStack_288[0x40] * 2;
            alStack_288[alStack_288[0x40] * 2 + 1] = lVar16;
            alStack_288[lVar5] = lVar10;
            alStack_288[0x40] = alStack_288[0x40] + 1;
          }
        }
        bVar1 = uStack_290 == 0 & bVar4;
        if ((uStack_290 != 0) && (!(bool)(bVar4 ^ 1))) {
LAB_1060fa7d4:
          if (uStack_290 >> 0x3d != 0) {
            puStack_80 = &UNK_109beb478;
            puVar9 = &UNK_10b4cd3d0;
            pcVar14 = s__cannot_add_more_than_MAX_PERMIT_108b370dc;
LAB_1060fa91c:
            puStack_78 = &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar14,&puStack_80,puVar9);
LAB_1060fa954:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1060fa958);
            (*pcVar6)();
          }
          uVar7 = *(ulong *)(pcVar14 + 0x20);
          *(ulong *)(pcVar14 + 0x20) = uVar7 + uStack_290 * 2;
          LORelease();
          if (uStack_290 + (uVar7 >> 1) >> 0x3d != 0) {
            puStack_70 = &UNK_109beb478;
            puStack_68 = &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            puVar9 = &UNK_10b4cd3e8;
            pcVar14 = s_number_of_added_permits_____woul_108b3710b;
            puStack_80 = (undefined *)&uStack_290;
            goto LAB_1060fa91c;
          }
          uStack_290 = 0;
LAB_1060fa7f8:
          bVar1 = 1;
        }
        bVar4 = bVar1;
        if (*pcVar15 == '\x01') {
          *pcVar15 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar15,0);
          uVar8 = extraout_x1_02;
        }
        lVar10 = alStack_288[0x40] << 4;
        alStack_288[0x40] = 0;
        plVar11 = alStack_288;
        for (; lVar10 != 0; lVar10 = lVar10 + -0x10) {
          (**(code **)(*plVar11 + 8))(plVar11[1]);
          uVar8 = extraout_x1_01;
          plVar11 = plVar11 + 2;
        }
        pcVar15 = (char *)0x0;
        if (uStack_290 == 0) {
          plVar11 = alStack_288 + 1;
          lVar10 = alStack_288[0x40] + 1;
          while (lVar10 = lVar10 + -1, lVar10 != 0) {
            plVar12 = plVar11 + -1;
            lVar16 = *plVar11;
            plVar11 = plVar11 + 2;
            (**(code **)(*plVar12 + 0x18))(lVar16);
          }
          return;
        }
      } while( true );
    }
    if ((((cVar3 == '\x05') && (*(char *)(param_1 + 0xa8) == '\x03')) &&
        (*(char *)(param_1 + 0xa0) == '\x03')) &&
       ((*(char *)(param_1 + 0x98) == '\x03' && (*(char *)(param_1 + 0x50) == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x58);
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x68);
LAB_100cce41c:
                    /* WARNING: Could not recover jumptable at 0x000100cce428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar10 + 0x18))(uVar8);
        return;
      }
    }
  }
  return;
}

