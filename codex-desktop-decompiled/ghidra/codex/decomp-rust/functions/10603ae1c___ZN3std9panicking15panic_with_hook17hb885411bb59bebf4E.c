
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN3std9panicking15panic_with_hook17hb885411bb59bebf4E
               (undefined8 param_1,long param_2,undefined8 *param_3,byte param_4,undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_x8;
  undefined *extraout_x8_00;
  uint uVar14;
  undefined8 uVar15;
  undefined4 in_wzr;
  undefined1 auVar16 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  ushort uStack_70;
  
  uVar15 = 0x10603ae5c;
  uStack_c0 = param_1;
  lStack_b8 = param_2;
  puStack_b0 = param_3;
  uVar6 = func_0x00010603a9a8(1);
  uVar14 = (uint)uVar6 & 0xff;
  uVar11 = (ulong)uVar14;
  uVar5 = uVar14 == 2;
  uVar12 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
  if (!(bool)uVar5) goto LAB_10603b0a4;
  do {
    uVar11 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
    if ((0xffffffffffffffef < uVar12 || uVar12 == 1) || (uVar12 & 2) != 0) {
      uVar11 = 0;
      uStack_70 = 0;
      uStack_88 = (undefined *)0x0;
      auStack_90 = (undefined1  [8])0x0;
      uStack_78 = (undefined *)0x0;
      puStack_80 = (undefined8 *)0x0;
      uVar12 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
      goto LAB_10603aed0;
    }
    if (___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E == uVar12) {
      ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E = (uVar12 | 1) + 0x10;
    }
    uVar5 = uVar11 == uVar12;
    uVar12 = uVar11;
  } while (!(bool)uVar5);
  goto LAB_10603b010;
  while( true ) {
    if (___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E == uVar12) {
      ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E = (uVar12 | 1) + 0x10;
    }
    uVar5 = uVar13 == uVar12;
    uVar12 = uVar13;
    if ((bool)uVar5) break;
LAB_10603aed0:
    uVar13 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
    if ((uVar12 == 1 || 0xffffffffffffffee < uVar12) && uVar12 != 0xffffffffffffffef ||
        (uVar12 & 2) != 0) {
      uVar14 = (uint)uVar12;
      if (((uVar14 >> 1 & 1) == 0) && (uVar11 < 7)) {
        iVar10 = 1 << (ulong)((uint)uVar11 & 0x1f);
        do {
          InstructionSynchronizationBarrier();
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar11 = uVar11 + 1;
        uVar12 = uVar13;
        goto LAB_10603aed0;
      }
      if (uStack_78 == (undefined *)0x0) {
        uVar15 = 0x10603afe0;
        FUN_108a84b14(&uStack_78);
      }
      uStack_70 = uStack_70 & 0xff00;
      auStack_90 = (undefined1  [8])(uVar12 & 0xfffffffffffffff0);
      uStack_88 = (undefined *)0x0;
      uVar13 = (ulong)auStack_90 | uVar12 & 9;
      if ((uVar14 >> 1 & 1) == 0) {
        bVar1 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E != uVar12;
        uVar12 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
        uVar13 = uVar13 + 2;
        puStack_80 = (undefined8 *)auStack_90;
        if (bVar1) goto LAB_10603aed0;
      }
      else {
        puStack_80 = (undefined8 *)0x0;
        uVar13 = uVar13 + 6;
        bVar1 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E != uVar12;
        uVar12 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
        if (bVar1) goto LAB_10603aed0;
        if ((uVar14 >> 2 & 1) == 0) {
          uVar15 = 0x10603af90;
          ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E = uVar13;
          FUN_106032bec(&__ZN3std9panicking4HOOK17hfdbcb9267e8ad931E);
          uVar13 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
        }
      }
      while (___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E = uVar13, puVar3 = uStack_78,
            (char)uStack_70 == '\0') {
        if (uStack_78 == (undefined *)0x0) {
          func_0x000108a07a20(&UNK_10b4addb0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10603b1a0);
          (*pcVar4)();
        }
        LOAcquire();
        cVar2 = uStack_78[0x30];
        uStack_78[0x30] = cVar2 + -1;
        uVar13 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
        if (cVar2 != '\x01') {
          do {
            uVar15 = 0x10603afb8;
            lVar7 = _dispatch_semaphore_wait(*(undefined8 *)(puVar3 + 0x28),0xffffffffffffffff);
          } while (lVar7 != 0);
          LOAcquire();
          puVar3[0x30] = (char)in_wzr;
          uVar13 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
        }
      }
      uVar11 = 0;
      uVar12 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
      goto LAB_10603aed0;
    }
  }
  if ((uStack_78 != (undefined *)0x0) && (FUN_10605d7e0(uVar15), (bool)uVar5)) {
    FUN_10605d788();
  }
LAB_10603b010:
  param_2 = lStack_b8;
  uVar6 = uStack_c0;
  uStack_a0 = 0x10b66fed0;
  puStack_98 = &__ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
  if (lRam000000010b66fed0 == 0) {
    _auStack_90 = FUN_10605d7cc(*(undefined8 *)(lStack_b8 + 0x28));
    puStack_80 = puStack_b0;
    uStack_78._0_2_ = CONCAT11(param_5,param_4);
    __ZN3std9panicking12default_hook17h7aae5c8c53b8a669E(auStack_90);
  }
  else {
    _auStack_90 = FUN_10605d7cc(*(undefined8 *)(lStack_b8 + 0x28));
    puStack_80 = puStack_b0;
    uStack_78._0_2_ = CONCAT11(param_5,param_4);
    (**(code **)(lRam000000010b66fed8 + 0x28))(lRam000000010b66fed0,auStack_90);
  }
  FUN_10603f748(&uStack_a0);
  lVar7 = FUN_10605d620();
  *(undefined1 *)(lVar7 + 8) = 0;
  if ((param_4 & 1) == 0) goto LAB_10603b138;
  uVar6 = __RNvCshXwFllX56pT_7___rustc10rust_panic(uVar6,param_2);
  uVar11 = extraout_x8;
LAB_10603b0a4:
  if ((uVar11 & 1) == 0) {
    auStack_90 = (undefined1  [8])&puStack_b0;
    uStack_88 = &DAT_10603be64;
    uStack_78 = &DAT_10604802c;
    puStack_80 = &uStack_c0;
    uStack_a0 = FUN_10605d770(uVar6,s_aborting_due_to_panic_at___108b34d5d);
    puVar8 = &uStack_a0;
  }
  else {
    auVar16 = FUN_10605d7cc(*(undefined8 *)(param_2 + 0x30));
    uVar6 = FUN_10605d6c0(auVar16._0_8_,auVar16._8_8_,0x10603b0b0);
    uStack_a0 = uVar6;
    if ((bool)uVar5) {
      uStack_a0 = 1;
    }
    auStack_90 = (undefined1  [8])&puStack_b0;
    uStack_88 = &DAT_10603be64;
    puStack_80 = &uStack_a0;
    uStack_78 = &DAT_10603bec4;
    puStack_98 = extraout_x8_00;
    uStack_a8 = FUN_10605d770(uVar6,s_panicked_at___3_thread_panicked_w_108b34d7f);
    puVar8 = &uStack_a8;
  }
  do {
    FUN_10603f834(puVar8);
    __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_10603b138:
    ppuVar9 = (undefined8 **)FUN_10602995c(&uStack_a0,&UNK_109bd683d,0x5b);
    puVar8 = (undefined8 *)auStack_90;
    auStack_90 = (undefined1  [8])ppuVar9;
  } while( true );
}

