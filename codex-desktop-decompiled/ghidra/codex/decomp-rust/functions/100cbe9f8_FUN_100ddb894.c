
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ddb894(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  undefined1 in_wzr;
  undefined1 auVar21 [16];
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
  
  if (*param_1 == 3) {
    return;
  }
  FUN_100de01d8();
  if (param_1[0x25] != 2) {
    FUN_100deb62c(param_1 + 0x25);
    if ((char)param_1[0x99] == '\x16') {
      lVar10 = param_1[0x9a];
      puVar14 = (undefined8 *)param_1[0x9b];
      pcVar9 = (code *)*puVar14;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(lVar10);
      }
      if (puVar14[1] != 0) {
        _free(lVar10);
      }
    }
    else {
      FUN_100de0370(param_1 + 0x99);
    }
    FUN_100dfb510(param_1 + 0x29);
    if (param_1[0x92] != 0) {
      _free(param_1[0x93]);
    }
    if (param_1[0xa9] != 0) {
      _free(param_1[0xaa]);
    }
    uVar18 = param_1[0xa7];
    uVar16 = param_1[0xa4];
    if (uVar18 != 0) {
      lVar10 = param_1[0xa5];
      uVar8 = param_1[0xa6];
      uVar6 = 0;
      if (uVar16 <= uVar8) {
        uVar6 = uVar16;
      }
      lVar13 = uVar8 - uVar6;
      uVar20 = uVar16 - lVar13;
      lVar17 = 0;
      if (uVar20 <= uVar18) {
        lVar17 = uVar18 - uVar20;
      }
      uVar7 = uVar16;
      if (uVar18 <= uVar20) {
        uVar7 = lVar13 + uVar18;
      }
      lVar13 = uVar7 - lVar13;
      if (lVar13 != 0) {
        puVar14 = (undefined8 *)(uVar8 * 0x18 + uVar6 * -0x18 + lVar10 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (uVar20 < uVar18) {
        puVar14 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
    if (uVar16 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0xa5]);
    return;
  }
  lVar10 = param_1[0x29];
  plVar15 = (long *)(long)(int)lVar10;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  if ((int)lVar10 != -1) {
    lVar10 = 0x140;
    if ((int)param_1[0x26] == 0) {
      lVar10 = 0x200;
    }
    plVar2 = (long *)(param_1[0x27] + lVar10);
    iVar11 = (int)plVar2[10];
    if (iVar11 == -1) {
      func_0x000108a079f0(&UNK_109bebb30,0x68,&UNK_10b4cd7b0);
LAB_100deb894:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100deb898);
      (*pcVar9)();
    }
    if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
      uStack_68 = 0x8cc3ba8;
      uStack_64 = 1;
      uStack_60 = 9;
      plStack_a0 = (long *)0x0;
      uStack_98 = 0x3ba8;
      uStack_96 = 0x8cc;
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
      iVar11 = (int)plVar2[10];
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
    plStack_a0 = plVar15;
    plStack_80 = plVar15;
    iVar11 = _kevent(iVar11,&plStack_a0,2,&plStack_a0,2,0);
    uVar12 = extraout_x1;
    if ((((-1 < iVar11) || (auVar21 = ___error(), uVar12 = auVar21._8_8_, *auVar21._0_8_ == 4)) &&
        (((CONCAT44(uStack_8c,uStack_90) & 0xfffffffffffffffd) == 0 || ((uStack_96 >> 0xe & 1) == 0)
         ))) && (((CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffd) == 0 ||
                 ((uStack_76 >> 0xe & 1) == 0)))) {
      plVar1 = plVar2 + 1;
      if ((char)*plVar1 == '\0') {
        *(undefined1 *)plVar1 = 1;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar12,1000000000)
        ;
      }
      plVar19 = (long *)param_1[0x28];
      lVar10 = *plVar19;
      *plVar19 = lVar10 + 1;
      if (lVar10 < 0) goto LAB_100deb894;
      lVar10 = plVar2[4];
      plStack_a0 = plVar19;
      if (lVar10 == plVar2[2]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(plVar2 + 2);
      }
      *(long **)(plVar2[3] + lVar10 * 8) = plVar19;
      lVar10 = lVar10 + 1;
      plVar2[4] = lVar10;
      *plVar2 = lVar10;
      cVar3 = (char)plVar2[1];
      if (cVar3 == '\x01') {
        *(undefined1 *)(plVar2 + 1) = in_wzr;
      }
      if (lVar10 == 0x10) {
        if (cVar3 != '\x01') {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
        }
        __ZN5tokio7runtime2io6driver6Handle6unpark17h63cc3b6e8e3532b8E(plVar2);
      }
      else if (cVar3 != '\x01') {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
      }
    }
    _close(plVar15);
    if ((int)param_1[0x29] != -1) {
      _close();
    }
  }
  FUN_100e22b74(param_1 + 0x26);
  return;
}

