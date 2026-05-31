
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core10connectors34write_cached_accessible_connectors17hb558817c78b3b045E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (lRam000000010b629890 != 0) {
    uStack_58 = 0x10b629890;
    puStack_70 = &uStack_58;
    __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
              (0x10b629890,1,&puStack_70,&UNK_10b2c0940,&UNK_10b2c0900);
  }
  if (lRam000000010b629898 == 0) {
    FUN_10893b764(0x10b629898);
  }
  iVar4 = _pthread_mutex_lock();
  if (iVar4 == 0) {
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = func_0x000108a82c0c();
      uVar5 = uVar5 ^ 1;
    }
    auVar20 = func_0x000106032954(8);
    uVar8 = auVar20._8_4_;
    lVar6 = auVar20._0_8_;
    lVar9 = lVar6 + 0xe10;
    if (!SCARRY8(lVar6,0xe10)) {
      if (uVar8 < 1000000000) {
LAB_102cd8058:
        func_0x00010373e75c(&puStack_70,param_2,param_3);
        puVar1 = puStack_70;
        uVar12 = param_1[5];
        uVar10 = param_1[4];
        uVar16 = param_1[7];
        uVar14 = param_1[6];
        uVar13 = param_1[9];
        uVar11 = param_1[8];
        uVar19 = param_1[1];
        uVar18 = *param_1;
        uVar17 = param_1[3];
        uVar15 = param_1[2];
        func_0x0001033f5738(0x10b6298a8);
        uRam000000010b629900 = uStack_68;
        puRam000000010b6298f8 = puVar1;
        uRam000000010b629908 = uStack_60;
        uRam000000010b6298a8 = uVar18;
        uRam000000010b6298b0 = uVar19;
        uRam000000010b6298b8 = uVar15;
        uRam000000010b6298c0 = uVar17;
        uRam000000010b6298c8 = uVar10;
        uRam000000010b6298d0 = uVar12;
        uRam000000010b6298d8 = uVar14;
        uRam000000010b6298e0 = uVar16;
        uRam000000010b6298e8 = uVar11;
        uRam000000010b6298f0 = uVar13;
        lRam000000010b629910 = lVar9;
        uRam000000010b629918 = uVar8;
        if ((((uVar5 & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar7 = func_0x000108a82c0c(), (uVar7 & 1) == 0)) {
          uRam000000010b6298a0 = 1;
        }
        _pthread_mutex_unlock(lRam000000010b629898);
        return;
      }
      bVar3 = SCARRY8(lVar9,1);
      lVar9 = lVar6 + 0xe11;
      if (!bVar3) {
        uVar8 = uVar8 + 0xc4653600;
        goto LAB_102cd8058;
      }
    }
    func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
  }
  else {
    FUN_108a81ad4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd8158);
  (*pcVar2)();
}

