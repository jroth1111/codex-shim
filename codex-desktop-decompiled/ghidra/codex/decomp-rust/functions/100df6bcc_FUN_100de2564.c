
/* WARNING: Possible PIC construction at 0x000100de258c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de2564(long *param_1)

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
  undefined8 extraout_x1;
  undefined8 uVar10;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar12;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 in_wzr;
  undefined1 auVar13 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_100deb944(param_1 + 0xc);
  if (*param_1 == 2) {
    if (param_1[4] != 2) {
      func_0x000100df6bcc();
    }
    param_1 = param_1 + 8;
    if (*param_1 == 2) {
      return;
    }
  }
  else {
    unaff_x30 = 0x100de2590;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
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
  lVar8 = param_1[3];
  lVar11 = (long)(int)lVar8;
  *(int *)(param_1 + 3) = -1;
  if ((int)lVar8 == -1) goto LAB_100df6dfc;
  lVar8 = 0x140;
  if ((int)*param_1 == 0) {
    lVar8 = 0x200;
  }
  plVar3 = (long *)(param_1[1] + lVar8);
  iVar9 = (int)plVar3[10];
  if (iVar9 == -1) {
    func_0x000108a079f0(&UNK_109bebb30,0x68,&UNK_10b4cd7b0);
    goto LAB_100df6e34;
  }
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_108cc3ba8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 9;
    *(undefined **)((long)register0x00000008 + -0x50) = &UNK_108cc3b82;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0x4d;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined **)((long)register0x00000008 + -0x98) = &UNK_108cc3ba8;
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
  *(long *)((long)register0x00000008 + -0xa0) = lVar11;
  *(undefined4 *)((long)register0x00000008 + -0x98) = 0x42fffe;
  *(undefined8 *)((long)register0x00000008 + -0x8c) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x94) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x84) = 0;
  *(long *)((long)register0x00000008 + -0x80) = lVar11;
  *(undefined4 *)((long)register0x00000008 + -0x78) = 0x42ffff;
  *(undefined8 *)((long)register0x00000008 + -0x6c) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x74) = 0;
  *(undefined4 *)((long)register0x00000008 + -100) = 0;
  iVar9 = _kevent(iVar9,(undefined1 *)((long)register0x00000008 + -0xa0),2,
                  (undefined1 *)((long)register0x00000008 + -0xa0),2,0);
  uVar10 = extraout_x1;
  if (iVar9 < 0) {
    auVar13 = ___error();
    uVar10 = auVar13._8_8_;
    if (*auVar13._0_8_ == 4) goto LAB_100df6d34;
  }
  else {
LAB_100df6d34:
    if ((((*(ulong *)((long)register0x00000008 + -0x90) & 0xfffffffffffffffd) == 0) ||
        ((*(ushort *)((long)register0x00000008 + -0x96) >> 0xe & 1) == 0)) &&
       (((*(ulong *)((long)register0x00000008 + -0x70) & 0xfffffffffffffffd) == 0 ||
        ((*(ushort *)((long)register0x00000008 + -0x76) >> 0xe & 1) == 0)))) {
      plVar2 = plVar3 + 1;
      if ((char)*plVar2 == '\0') {
        *(undefined1 *)plVar2 = 1;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar2,uVar10,1000000000)
        ;
      }
      plVar12 = (long *)param_1[2];
      lVar8 = *plVar12;
      *plVar12 = lVar8 + 1;
      if (lVar8 < 0) {
LAB_100df6e34:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100df6e38);
        (*pcVar7)();
      }
      *(long **)((long)register0x00000008 + -0xa0) = plVar12;
      lVar8 = plVar3[4];
      if (lVar8 == plVar3[2]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(plVar3 + 2);
      }
      *(long **)(plVar3[3] + lVar8 * 8) = plVar12;
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
  _close(lVar11);
  if ((int)param_1[3] != -1) {
    _close();
  }
LAB_100df6dfc:
  FUN_100e22b74(param_1);
  return;
}

