
void FUN_1004f11d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  char *pcVar7;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar12;
  undefined1 uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined **ppuStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [592];
  undefined1 auStack_3a0 [592];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined3 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_78 [12];
  undefined8 uStack_68;
  int iStack_60;
  int aiStack_58 [2];
  ulong uStack_50;
  uint uStack_48;
  long *plVar8;
  long *plVar11;
  
  bVar3 = *(byte *)(param_2 + 0x10);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      param_2[1] = *param_2;
      *(undefined1 *)(param_2 + 0xf) = 0;
LAB_1004f1218:
      pcVar7 = (char *)FUN_100fd3e50(param_2 + 1,param_3);
      if (pcVar7 == (char *)0x0) {
        *param_1 = 2;
        uVar13 = 3;
      }
      else {
        if (((*(char *)(param_2 + 0xf) == '\x03') && (*(char *)(param_2 + 0xe) == '\x03')) &&
           (*(char *)(param_2 + 5) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_2 + 6);
          if (param_2[7] != 0) {
            (**(code **)(param_2[7] + 0x18))(param_2[8]);
          }
        }
        auStack_78 = func_0x000106032954(0);
        uStack_68 = 0;
        iStack_60 = 0;
        func_0x000106032878(aiStack_58,auStack_78,&uStack_68);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uStack_50;
        lVar15 = SUB168(auVar21 * ZEXT816(1000),8);
        uVar1 = uStack_50 * 1000 + (ulong)uStack_48 / 1000000;
        if (CARRY8(uStack_50 * 1000,(ulong)uStack_48 / 1000000)) {
          lVar15 = lVar15 + 1;
        }
        if (0x7ffffffffffffffe < uVar1) {
          uVar1 = 0x7fffffffffffffff;
        }
        if (lVar15 != 0) {
          uVar1 = 0x7fffffffffffffff;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar1;
        uVar1 = 0;
        if (aiStack_58[0] == 0) {
          uVar1 = SUB168(auVar4 * ZEXT816(0x20c49ba5e353f7cf),8) >> 7;
        }
        iVar6 = *(int *)(pcVar7 + 0x40);
        if (iVar6 == 1000000000) {
          uVar18 = 0;
          uVar16 = 1000000000;
          uVar19 = extraout_x1;
        }
        else {
          uVar19 = *(undefined8 *)(pcVar7 + 0x38);
          auVar22 = func_0x000106032954(8);
          uStack_68 = uVar19;
          iStack_60 = iVar6;
          auStack_78 = auVar22;
          func_0x000106032878(aiStack_58,auStack_78,&uStack_68);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uStack_50;
          lVar15 = SUB168(auVar5 * ZEXT816(1000),8);
          uVar2 = uStack_50 * 1000 + (ulong)uStack_48 / 1000000;
          if (CARRY8(uStack_50 * 1000,(ulong)uStack_48 / 1000000)) {
            lVar15 = lVar15 + 1;
          }
          if (0x7ffffffffffffffe < uVar2) {
            uVar2 = 0x7fffffffffffffff;
          }
          if (lVar15 != 0) {
            uVar2 = 0x7fffffffffffffff;
          }
          uVar16 = 0;
          if (aiStack_58[0] == 0) {
            uVar16 = uVar2;
          }
          uVar18 = 1;
          uVar19 = extraout_x1_00;
        }
        if (*pcVar7 == '\0') {
          *pcVar7 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar7,uVar19,1000000000);
        }
        FUN_1060fa678(pcVar7,1,pcVar7);
        uVar13 = 1;
        *param_1 = 1;
        param_1[1] = uVar1;
        param_1[2] = uVar18;
        param_1[3] = uVar16;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar13;
      return;
    }
    FUN_107c05cc0(&UNK_10b215658);
  }
  else if (bVar3 == 3) goto LAB_1004f1218;
  FUN_107c05cc4(&UNK_10b215658);
  *(undefined1 *)(param_2 + 0x10) = 2;
  uVar19 = __Unwind_Resume();
  FUN_100ca4214(param_2 + 1);
  *(undefined1 *)(param_2 + 0x10) = 2;
  __Unwind_Resume(uVar19);
  auVar21 = FUN_107c05ccc();
  plVar11 = auVar21._8_8_;
  plVar8 = auVar21._0_8_;
  bVar3 = *(byte *)(plVar11 + 5);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      plVar11[1] = *plVar11 + 0x1e8;
      *(undefined1 *)(plVar11 + 4) = 0;
LAB_1004f14b8:
      FUN_1005b8708(plVar8,plVar11 + 1);
      if (*plVar8 == -0x7fffffffffffffff) {
        uVar13 = 3;
      }
      else {
        if (((char)plVar11[4] == '\x03') && (lVar15 = plVar11[3], lVar15 != 0)) {
          FUN_100d07adc(lVar15);
          _free(lVar15);
        }
        uVar13 = 1;
      }
      *(undefined1 *)(plVar11 + 5) = uVar13;
      return;
    }
    FUN_107c05cc0(&UNK_10b2156b8);
  }
  else if (bVar3 == 3) goto LAB_1004f14b8;
  uVar19 = FUN_107c05cc4(&UNK_10b2156b8);
  _free(plVar8);
  *(undefined1 *)(plVar11 + 5) = 2;
  uVar19 = __Unwind_Resume(uVar19);
  FUN_100e61c78(plVar11 + 1);
  *(undefined1 *)(plVar11 + 5) = 2;
  __Unwind_Resume(uVar19);
  auVar21 = FUN_107c05ccc();
  puVar12 = auVar21._8_8_;
  puVar9 = auVar21._0_8_;
  bVar3 = *(byte *)(puVar12 + 5);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b2156d0);
LAB_1004f1770:
      FUN_107c05cc4(&UNK_10b2156d0);
LAB_1004f177c:
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&uStack_130,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1004f17a4);
      (*pcVar14)();
    }
    puStack_118 = &UNK_108ca2ade;
    uStack_110 = 0xb;
    if (*(char *)(*(long *)(puVar12[4] + 0x210) + 0x368) != '\x02') {
      puVar12[2] = *(long *)(puVar12[4] + 0x210) + 0x340;
      *(undefined1 *)(puVar12 + 3) = 0;
      *(undefined1 *)((long)puVar12 + 0x19) = *(undefined1 *)((long)puVar12 + 0x29);
      *(undefined1 *)((long)puVar12 + 0x1a) = *(undefined1 *)((long)puVar12 + 0x2a);
      goto LAB_1004f15f8;
    }
    uStack_610 = &DAT_103296230;
    ppuStack_618 = &puStack_118;
    puVar10 = (undefined8 *)
              thunk_FUN_10894170c(s__Session_persistence_is_disabled_108af5d85,&ppuStack_618);
    puStack_118 = (undefined *)0x0;
    uStack_110 = 1;
    uStack_108 = 0;
    puStack_608 = (undefined *)0x60000020;
    uStack_610 = &UNK_10b209290;
    ppuStack_618 = &puStack_118;
    puStack_120 = puVar10;
    iVar6 = __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                      (&puStack_120,&ppuStack_618);
    puVar17 = puStack_118;
    if (iVar6 != 0) goto LAB_1004f177c;
    uStack_128 = uStack_108;
    uStack_130 = uStack_110;
    (**(code **)*puVar10)(puVar10);
    uStack_148 = uStack_128;
    uStack_150 = uStack_130;
    uVar13 = 4;
    ppuVar20 = (undefined **)0x2;
  }
  else {
    if (bVar3 != 3) goto LAB_1004f1770;
LAB_1004f15f8:
    FUN_100a83b04(&ppuStack_618,puVar12);
    puVar17 = puStack_608;
    ppuVar20 = ppuStack_618;
    if (ppuStack_618 == (undefined **)0x3) {
      uVar13 = 3;
      *puVar9 = 3;
      goto LAB_1004f16b8;
    }
    uVar13 = (undefined1)uStack_610;
    uStack_134 = (undefined3)((ulong)uStack_610 >> 0x28);
    uStack_148 = uStack_5f8;
    uStack_150 = uStack_600;
    uStack_138 = uStack_610._1_4_;
    _memcpy(auStack_3a0,auStack_5f0,0x250);
    if (*(char *)(puVar12 + 3) == '\x03') {
      uVar19 = *puVar12;
      puVar10 = (undefined8 *)puVar12[1];
      pcVar14 = (code *)*puVar10;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(uVar19);
      }
      if (puVar10[1] != 0) {
        _free(uVar19);
      }
    }
  }
  *puVar9 = ppuVar20;
  *(undefined1 *)(puVar9 + 1) = uVar13;
  *(undefined4 *)((long)puVar9 + 9) = uStack_138;
  *(uint *)((long)puVar9 + 0xc) = CONCAT31(uStack_134,uStack_138._3_1_);
  puVar9[2] = puVar17;
  puVar9[4] = uStack_148;
  puVar9[3] = uStack_150;
  _memcpy(puVar9 + 5,auStack_3a0,0x250);
  uVar13 = 1;
LAB_1004f16b8:
  *(undefined1 *)(puVar12 + 5) = uVar13;
  return;
}

