
/* WARNING: Possible PIC construction at 0x00010174cea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010175a8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010174e184) */
/* WARNING: Removing unreachable block (ram,0x00010174e194) */
/* WARNING: Removing unreachable block (ram,0x00010174e19c) */
/* WARNING: Removing unreachable block (ram,0x00010174e1a4) */
/* WARNING: Removing unreachable block (ram,0x00010174e1ac) */
/* WARNING: Removing unreachable block (ram,0x00010174e1c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101755de0(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 extraout_x1;
  long *unaff_x19;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 *puVar14;
  undefined8 unaff_x22;
  long *plVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 in_wzr;
  undefined1 auVar16 [16];
  
  if ((char)param_1[0x6c] == '\0') {
    plVar10 = param_1;
    if (*param_1 == 3) {
      uVar11 = param_1[1];
      if ((uVar11 & 3) != 1) {
        return;
      }
      uVar13 = *(undefined8 *)(uVar11 - 1);
      puVar14 = *(undefined8 **)(uVar11 + 7);
      pcVar7 = (code *)*puVar14;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar13);
      }
      if (puVar14[1] != 0) {
        _free(uVar13);
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)((undefined8 *)(uVar11 - 1));
      return;
    }
SUB_10174ce7c:
    puVar1 = &stack0xfffffffffffffff0;
    FUN_10174d544(plVar10 + 0xc);
    if (*plVar10 == 2) {
      if (plVar10[4] != 2) {
        func_0x00010174df10();
      }
      plVar10 = plVar10 + 8;
      if (*plVar10 == 2) {
        return;
      }
    }
    else {
      unaff_x30 = 0x10174cea8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = plVar10;
      unaff_x29 = puVar1;
    }
  }
  else {
    if ((char)param_1[0x6c] != '\x03') {
      return;
    }
    puVar1 = &stack0xfffffffffffffff0;
    if ((char)param_1[0x6b] != '\x03') {
      plVar10 = param_1 + 0x24;
      if ((char)param_1[0x6b] != '\0') {
        return;
      }
      goto SUB_10174ce7c;
    }
    FUN_10174ca60(param_1 + 0x50);
    *(undefined2 *)((long)param_1 + 0x359) = 0;
    if (param_1[0x4c] == 2) {
      *(undefined1 *)((long)param_1 + 0x35b) = 0;
      if (param_1[0x48] != 2) {
        func_0x00010174df10(param_1 + 0x48);
      }
      *(undefined1 *)((long)param_1 + 0x35c) = 0;
      plVar10 = param_1 + 0x36;
      goto SUB_10174ce7c;
    }
    plVar10 = param_1 + 0x4c;
    unaff_x30 = 0x10175a8d0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1 + 0x24;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = plVar10[3];
  lVar12 = (long)(int)lVar8;
  *(int *)(plVar10 + 3) = -1;
  if ((int)lVar8 == -1) goto LAB_10174e0cc;
  lVar8 = 0x140;
  if ((int)*plVar10 == 0) {
    lVar8 = 0x200;
  }
  plVar3 = (long *)(plVar10[1] + lVar8);
  iVar9 = (int)plVar3[10];
  if (iVar9 == -1) {
    func_0x000108a079f0(&UNK_109bebb30,0x68,&UNK_10b4cd7b0);
    goto LAB_10174e1e4;
  }
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_108ce1a72;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 9;
    *(undefined **)((long)register0x00000008 + -0x50) = &UNK_108ce1a4c;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0x4d;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined **)((long)register0x00000008 + -0x98) = &UNK_108ce1a72;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 9;
    *(char **)((long)register0x00000008 + -0x80) =
         "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/mio-1.1.1/src/poll.rs";
    *(undefined8 *)((long)register0x00000008 + -0x70) = 5;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x58;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x2c000000001;
    puVar5 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_10b3c24c8;
    }
    puVar6 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_109adfc03;
    }
    (**(code **)(puVar5 + 0x20))(puVar6,(undefined1 *)((long)register0x00000008 + -0xa0));
    iVar9 = (int)plVar3[10];
  }
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(undefined4 *)((long)register0x00000008 + -0x98) = 0x42fffe;
  *(undefined8 *)((long)register0x00000008 + -0x8c) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x94) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x84) = 0;
  *(long *)((long)register0x00000008 + -0x80) = lVar12;
  *(undefined4 *)((long)register0x00000008 + -0x78) = 0x42ffff;
  *(undefined8 *)((long)register0x00000008 + -0x6c) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x74) = 0;
  *(undefined4 *)((long)register0x00000008 + -100) = 0;
  iVar9 = _kevent(iVar9,(undefined1 *)((long)register0x00000008 + -0xa0),2,
                  (undefined1 *)((long)register0x00000008 + -0xa0),2,0);
  uVar13 = extraout_x1;
  if (iVar9 < 0) {
    auVar16 = ___error();
    uVar13 = auVar16._8_8_;
    if (*auVar16._0_8_ == 4) goto LAB_10174e078;
  }
  else {
LAB_10174e078:
    if ((((*(ulong *)((long)register0x00000008 + -0x90) & 0xfffffffffffffffd) == 0) ||
        ((*(ushort *)((long)register0x00000008 + -0x96) >> 0xe & 1) == 0)) &&
       (((*(ulong *)((long)register0x00000008 + -0x70) & 0xfffffffffffffffd) == 0 ||
        ((*(ushort *)((long)register0x00000008 + -0x76) >> 0xe & 1) == 0)))) {
      plVar2 = plVar3 + 1;
      if ((char)*plVar2 == '\0') {
        *(undefined1 *)plVar2 = 1;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar2,uVar13,1000000000)
        ;
      }
      plVar15 = (long *)plVar10[2];
      lVar8 = *plVar15;
      *plVar15 = lVar8 + 1;
      if (lVar8 < 0) {
LAB_10174e1e4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10174e1e8);
        (*pcVar7)();
      }
      *(long **)((long)register0x00000008 + -0xa0) = plVar15;
      lVar8 = plVar3[4];
      if (lVar8 == plVar3[2]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(plVar3 + 2);
      }
      *(long **)(plVar3[3] + lVar8 * 8) = plVar15;
      lVar8 = lVar8 + 1;
      plVar3[4] = lVar8;
      *plVar3 = lVar8;
      cVar4 = (char)plVar3[1];
      if (cVar4 == '\x01') {
        *(undefined1 *)(plVar3 + 1) = in_wzr;
      }
      if (lVar8 == 0x10) {
        if (cVar4 != '\x01') {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar2,0);
        }
        __ZN5tokio7runtime2io6driver6Handle6unpark17h63cc3b6e8e3532b8E(plVar3);
      }
      else if (cVar4 != '\x01') {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar2,0);
      }
    }
  }
  _close(lVar12);
  if ((int)plVar10[3] != -1) {
    _close();
  }
LAB_10174e0cc:
  FUN_101752078(plVar10);
  return;
}

