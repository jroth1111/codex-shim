
/* WARNING: Removing unreachable block (ram,0x0001060f5d90) */
/* WARNING: Removing unreachable block (ram,0x0001060f5e6c) */
/* WARNING: Removing unreachable block (ram,0x0001060f5e7c) */
/* WARNING: Removing unreachable block (ram,0x0001060f5e84) */
/* WARNING: Removing unreachable block (ram,0x0001060f5e8c) */
/* WARNING: Removing unreachable block (ram,0x0001060f5e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060f5bec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined1 in_wzr;
  undefined1 auVar15 [16];
  long *plStack_a0;
  undefined2 uStack_98;
  ushort uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long *plStack_80;
  undefined2 uStack_78;
  ushort uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar7 = param_1[3];
  plVar13 = (long *)(long)(int)lVar7;
  *(int *)(param_1 + 3) = -1;
  if ((int)lVar7 == -1) goto LAB_1060f4a08;
  lVar7 = 0x140;
  if ((int)*param_1 == 0) {
    lVar7 = 0x200;
  }
  plVar2 = (long *)(param_1[1] + lVar7);
  iVar9 = (int)plVar2[10];
  if (iVar9 == -1) {
    func_0x000108a079f0(&UNK_109bebb30,0x68,&UNK_10b4cd7b0);
    goto LAB_1060f5f48;
  }
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    uStack_68 = 0x9beb270;
    uStack_64 = 1;
    uStack_60 = 9;
    puStack_50 = &UNK_109beb24a;
    uStack_48 = 0x4d;
    plStack_a0 = (long *)0x0;
    uStack_98 = 0xb270;
    uStack_96 = 0x9be;
    uStack_94 = 1;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 9;
    uStack_8c = 0;
    plStack_80 = (long *)0x108ad2f30;
    uStack_70 = 5;
    uStack_6c = 0;
    uStack_78 = 0x58;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_58 = 0x2c000000001;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    (**(code **)(puVar4 + 0x20))(puVar5,&plStack_a0);
    iVar9 = (int)plVar2[10];
  }
  uStack_98 = 0xfffe;
  uStack_96 = 0x42;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_84 = 0;
  uStack_78 = 0xffff;
  uStack_76 = 0x42;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_64 = 0;
  plStack_a0 = plVar13;
  plStack_80 = plVar13;
  iVar9 = _kevent(iVar9,&plStack_a0,2,&plStack_a0,2,0);
  uVar11 = extraout_x1;
  if (iVar9 < 0) {
    auVar15 = ___error();
    uVar11 = auVar15._8_8_;
    if (*auVar15._0_8_ == 4) goto LAB_1060f5d54;
  }
  else {
LAB_1060f5d54:
    if ((((CONCAT44(uStack_8c,uStack_90) & 0xfffffffffffffffd) == 0) ||
        ((uStack_96 >> 0xe & 1) == 0)) &&
       (((CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffd) == 0 || ((uStack_76 >> 0xe & 1) == 0))
       )) {
      plVar1 = plVar2 + 1;
      if ((char)*plVar1 == '\0') {
        *(undefined1 *)plVar1 = 1;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar11,1000000000)
        ;
      }
      plVar14 = (long *)param_1[2];
      lVar7 = *plVar14;
      *plVar14 = lVar7 + 1;
      if (lVar7 < 0) goto LAB_1060f5f48;
      lVar7 = plVar2[4];
      plStack_a0 = plVar14;
      if (lVar7 == plVar2[2]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(plVar2 + 2);
      }
      *(long **)(plVar2[3] + lVar7 * 8) = plVar14;
      lVar7 = lVar7 + 1;
      plVar2[4] = lVar7;
      *plVar2 = lVar7;
      cVar3 = (char)plVar2[1];
      if (cVar3 == '\x01') {
        *(undefined1 *)(plVar2 + 1) = in_wzr;
      }
      if (lVar7 == 0x10) {
        if (cVar3 != '\x01') {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
        }
        plStack_a0 = (long *)0x0;
        uStack_98 = 0xfff6;
        uStack_96 = 0x41;
        uStack_94 = 0x1000000;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = (undefined4)plVar2[8];
        uStack_84 = (undefined4)((ulong)plVar2[8] >> 0x20);
        iVar9 = _kevent((int)plVar2[9],&plStack_a0,1,&plStack_a0,1,0);
        if (iVar9 < 0) {
          puVar10 = (uint *)___error();
          uVar12 = (ulong)*puVar10;
        }
        else if (((uStack_96 >> 0xe & 1) == 0) ||
                (uVar12 = CONCAT44(uStack_8c,uStack_90), uVar12 == 0)) goto LAB_1060f5e9c;
        plStack_a0 = (long *)(uVar12 << 0x20 | 2);
        func_0x000108a07a3c(&UNK_109beb6f3,0x19,&plStack_a0,&UNK_10b4cce88,&UNK_10b4cd828);
LAB_1060f5f48:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1060f5f4c);
        (*pcVar6)();
      }
      if (cVar3 != '\x01') {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
      }
    }
  }
LAB_1060f5e9c:
  _close(plVar13);
LAB_1060f4a08:
  __ZN88__LT_tokio__runtime__io__registration__Registration_u20_as_u20_core__ops__drop__Drop_GT_4drop17hbe2c348e44057632E
            ();
  if (*param_1 == 0) {
    plVar13 = (long *)param_1[1];
    lVar7 = *plVar13;
    *plVar13 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
    }
  }
  else {
    plVar13 = (long *)param_1[1];
    lVar7 = *plVar13;
    *plVar13 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
    }
  }
  plVar13 = (long *)param_1[2];
  lVar7 = *plVar13;
  *plVar13 = lVar7 + -1;
  LORelease();
  if (lVar7 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar7 = param_1[2];
  FUN_1060febfc(lVar7 + 0x80,0x2f);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    (**(code **)(*(long *)(lVar7 + 0xb0) + 0x18))(*(undefined8 *)(lVar7 + 0xb8));
  }
  if (*(long *)(lVar7 + 0xc0) != 0) {
    (**(code **)(*(long *)(lVar7 + 0xc0) + 0x18))(*(undefined8 *)(lVar7 + 200));
  }
  if (lVar7 != -1) {
    lVar8 = *(long *)(lVar7 + 8);
    *(long *)(lVar7 + 8) = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar7);
      return;
    }
  }
  return;
}

