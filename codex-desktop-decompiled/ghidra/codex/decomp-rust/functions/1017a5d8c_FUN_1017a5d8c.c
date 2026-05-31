
/* WARNING: Removing unreachable block (ram,0x0001017a5f64) */
/* WARNING: Removing unreachable block (ram,0x0001017a5f74) */
/* WARNING: Removing unreachable block (ram,0x0001017a5f7c) */
/* WARNING: Removing unreachable block (ram,0x0001017a5f84) */
/* WARNING: Removing unreachable block (ram,0x0001017a5f8c) */
/* WARNING: Removing unreachable block (ram,0x0001017a5fa8) */

void FUN_1017a5d8c(void)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x21;
  long *plVar9;
  undefined1 in_wzr;
  undefined1 auVar10 [16];
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined2 uStack0000000000000028;
  ushort uStack000000000000002a;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000030 = 5;
  uStack0000000000000034 = 0;
  uStack0000000000000028 = 0x58;
  uStack000000000000002a = 0;
  uStack000000000000002c = 0;
  uStack0000000000000048 = 0x2c000000001;
  puVar3 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar3 = &UNK_10b3c24c8;
  }
  puVar4 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar4 = &UNK_109adfc03;
  }
  (**(code **)(puVar3 + 0x20))(puVar4);
  uStack0000000000000014 = 0;
  uStack000000000000000c = 0;
  uStack000000000000001c = 0;
  uStack0000000000000028 = 0xffff;
  uStack000000000000002a = 0x42;
  uStack0000000000000034 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000030 = 0;
  uStack000000000000003c = 0;
  iVar7 = _kevent((int)unaff_x21[10]);
  uVar8 = extraout_x1;
  if (iVar7 < 0) {
    auVar10 = ___error();
    uVar8 = auVar10._8_8_;
    if (*auVar10._0_8_ != 4) goto LAB_1017a5e94;
  }
  if (((CONCAT44(uStack0000000000000034,uStack0000000000000030) & 0xfffffffffffffffd) == 0) ||
     ((uStack000000000000002a >> 0xe & 1) == 0)) {
    plVar1 = unaff_x21 + 1;
    if ((char)*plVar1 == '\0') {
      *(undefined1 *)plVar1 = 1;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar8,1000000000);
    }
    plVar9 = *(long **)(unaff_x19 + 0x10);
    lVar6 = *plVar9;
    *plVar9 = lVar6 + 1;
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1017a5fc8);
      (*pcVar5)();
    }
    lVar6 = unaff_x21[4];
    if (lVar6 == unaff_x21[2]) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h02a0136bf124cb4eE(unaff_x21 + 2);
    }
    *(long **)(unaff_x21[3] + lVar6 * 8) = plVar9;
    lVar6 = lVar6 + 1;
    unaff_x21[4] = lVar6;
    *unaff_x21 = lVar6;
    cVar2 = (char)unaff_x21[1];
    if (cVar2 == '\x01') {
      *(undefined1 *)(unaff_x21 + 1) = in_wzr;
    }
    if (lVar6 == 0x10) {
      if (cVar2 != '\x01') {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
      }
      __ZN5tokio7runtime2io6driver6Handle6unpark17h63cc3b6e8e3532b8E();
    }
    else if (cVar2 != '\x01') {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
    }
  }
LAB_1017a5e94:
  _close();
  if (*(int *)(unaff_x19 + 0x18) != -1) {
    _close();
  }
  FUN_1017a7474();
  return;
}

