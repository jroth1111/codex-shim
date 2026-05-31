
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d0dcc8(int *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char cVar7;
  code *pcVar8;
  long lVar9;
  int iVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 in_wzr;
  undefined1 auVar16 [16];
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
  
  if ((char)param_1[0x19a] != '\0') {
    if ((char)param_1[0x19a] != '\x03') {
      return;
    }
    if ((char)param_1[0x198] == '\x03') {
      cVar7 = (char)param_1[0x5a];
      if (cVar7 == '\x04') {
        if (*(long *)(param_1 + 0x160) == 2) {
          return;
        }
        if (*(long *)(param_1 + 0x18c) != 0) {
          _free(*(undefined8 *)(param_1 + 0x18e));
        }
        lVar9 = *(long *)(param_1 + 0x192);
        if (lVar9 != -0x8000000000000000) {
          lVar6 = *(long *)(param_1 + 0x194);
          lVar13 = *(long *)(param_1 + 0x196);
          if (lVar13 != 0) {
            puVar14 = (undefined8 *)(lVar6 + 8);
            do {
              if (puVar14[-1] != 0) {
                _free(*puVar14);
              }
              puVar14 = puVar14 + 3;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          if (lVar9 != 0) {
            _free(lVar6);
          }
        }
        FUN_100e57728(param_1 + 0x160);
        lVar9 = *(long *)(param_1 + 0x16c);
        uVar3 = lVar9 + 0x8000000000000001U & lVar9 >> 0x3f;
        if (uVar3 == 0) {
          if (lVar9 != 0) {
            _free(*(undefined8 *)(param_1 + 0x16e));
          }
          lVar9 = 0x20;
        }
        else {
          if ((uVar3 != 1) || (*(long *)(param_1 + 0x16e) == 0)) {
            return;
          }
          lVar9 = 0x10;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)(param_1 + 0x16c) + lVar9));
        return;
      }
      if (cVar7 == '\x03') {
        if (*(long *)(param_1 + 0x5c) == 2) {
          return;
        }
        param_1 = param_1 + 0x5c;
      }
      else {
        if (cVar7 != '\0') {
          return;
        }
        param_1 = param_1 + 0x3c;
      }
    }
    else {
      if ((char)param_1[0x198] != '\0') {
        return;
      }
      param_1 = param_1 + 0x1e;
    }
  }
  iVar10 = param_1[6];
  plVar12 = (long *)(long)iVar10;
  param_1[6] = -1;
  if (iVar10 == -1) goto LAB_100deb85c;
  lVar9 = 0x140;
  if (*param_1 == 0) {
    lVar9 = 0x200;
  }
  plVar2 = (long *)(*(long *)(param_1 + 2) + lVar9);
  iVar10 = (int)plVar2[10];
  if (iVar10 == -1) {
    func_0x000108a079f0(&UNK_109bebb30,0x68,&UNK_10b4cd7b0);
    goto LAB_100deb894;
  }
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    uStack_68 = 0x8cc3ba8;
    uStack_64 = 1;
    uStack_60 = 9;
    puStack_50 = &UNK_108cc3b82;
    uStack_48 = 0x4d;
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
    iVar10 = (int)plVar2[10];
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
  plStack_a0 = plVar12;
  plStack_80 = plVar12;
  iVar10 = _kevent(iVar10,&plStack_a0,2,&plStack_a0,2,0);
  uVar11 = extraout_x1;
  if (iVar10 < 0) {
    auVar16 = ___error();
    uVar11 = auVar16._8_8_;
    if (*auVar16._0_8_ == 4) goto LAB_100deb794;
  }
  else {
LAB_100deb794:
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
      plVar15 = *(long **)(param_1 + 4);
      lVar9 = *plVar15;
      *plVar15 = lVar9 + 1;
      if (lVar9 < 0) {
LAB_100deb894:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100deb898);
        (*pcVar8)();
      }
      lVar9 = plVar2[4];
      plStack_a0 = plVar15;
      if (lVar9 == plVar2[2]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(plVar2 + 2);
      }
      *(long **)(plVar2[3] + lVar9 * 8) = plVar15;
      lVar9 = lVar9 + 1;
      plVar2[4] = lVar9;
      *plVar2 = lVar9;
      cVar7 = (char)plVar2[1];
      if (cVar7 == '\x01') {
        *(undefined1 *)(plVar2 + 1) = in_wzr;
      }
      if (lVar9 == 0x10) {
        if (cVar7 != '\x01') {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
        }
        __ZN5tokio7runtime2io6driver6Handle6unpark17h63cc3b6e8e3532b8E(plVar2);
      }
      else if (cVar7 != '\x01') {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
      }
    }
  }
  _close(plVar12);
  if (param_1[6] != -1) {
    _close();
  }
LAB_100deb85c:
  FUN_100e22b74(param_1);
  return;
}

