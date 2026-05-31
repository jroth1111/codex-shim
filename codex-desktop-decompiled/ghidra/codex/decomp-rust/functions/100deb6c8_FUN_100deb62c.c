
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100deb62c(int *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 in_wzr;
  undefined1 auVar12 [16];
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
  
  iVar8 = param_1[6];
  plVar10 = (long *)(long)iVar8;
  param_1[6] = -1;
  if (iVar8 != -1) {
    lVar7 = 0x140;
    if (*param_1 == 0) {
      lVar7 = 0x200;
    }
    plVar2 = (long *)(*(long *)(param_1 + 2) + lVar7);
    iVar8 = (int)plVar2[10];
    if (iVar8 == -1) {
      func_0x000108a079f0(&UNK_109bebb30,0x68,&UNK_10b4cd7b0);
LAB_100deb894:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100deb898);
      (*pcVar6)();
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
      iVar8 = (int)plVar2[10];
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
    plStack_a0 = plVar10;
    plStack_80 = plVar10;
    iVar8 = _kevent(iVar8,&plStack_a0,2,&plStack_a0,2,0);
    uVar9 = extraout_x1;
    if ((((-1 < iVar8) || (auVar12 = ___error(), uVar9 = auVar12._8_8_, *auVar12._0_8_ == 4)) &&
        (((CONCAT44(uStack_8c,uStack_90) & 0xfffffffffffffffd) == 0 || ((uStack_96 >> 0xe & 1) == 0)
         ))) && (((CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffd) == 0 ||
                 ((uStack_76 >> 0xe & 1) == 0)))) {
      plVar1 = plVar2 + 1;
      if ((char)*plVar1 == '\0') {
        *(undefined1 *)plVar1 = 1;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar9,1000000000);
      }
      plVar11 = *(long **)(param_1 + 4);
      lVar7 = *plVar11;
      *plVar11 = lVar7 + 1;
      if (lVar7 < 0) goto LAB_100deb894;
      lVar7 = plVar2[4];
      plStack_a0 = plVar11;
      if (lVar7 == plVar2[2]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(plVar2 + 2);
      }
      *(long **)(plVar2[3] + lVar7 * 8) = plVar11;
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
        __ZN5tokio7runtime2io6driver6Handle6unpark17h63cc3b6e8e3532b8E(plVar2);
      }
      else if (cVar3 != '\x01') {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
      }
    }
    _close(plVar10);
    if (param_1[6] != -1) {
      _close();
    }
  }
  FUN_100e22b74(param_1);
  return;
}

