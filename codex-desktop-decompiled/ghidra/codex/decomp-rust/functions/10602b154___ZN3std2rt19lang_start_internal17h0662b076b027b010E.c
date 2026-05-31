
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long __ZN3std2rt19lang_start_internal17h0662b076b027b010E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  plVar5 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
  lVar11 = *plVar5;
  if (lVar11 == 0) {
    if (lRam000000010b66feb0 == -1) {
      func_0x000108a82a30();
      goto LAB_10602b700;
    }
    lVar11 = lRam000000010b66feb0 + 1;
    lRam000000010b66feb0 = lVar11;
    *plVar5 = lVar11;
  }
  lRam000000010b66fea8 = lVar11;
  iVar4 = _fcntl(0,1);
  if ((iVar4 == -1) && (piVar6 = (int *)___error(), *piVar6 == 9)) {
    uVar7 = _open("/dev/null",2);
    if ((int)uVar7 != -1) {
      iVar4 = _fcntl(1,1);
      goto joined_r0x00010602b23c;
    }
  }
  else {
    uVar7 = 0xffffffff;
    iVar4 = _fcntl(1,1);
joined_r0x00010602b23c:
    if (((((iVar4 != -1) || (piVar6 = (int *)___error(), *piVar6 != 9)) ||
         (((int)uVar7 != -1 && (iVar4 = _dup(uVar7), iVar4 != -1)))) ||
        (uVar7 = _open("/dev/null",2), (int)uVar7 != -1)) &&
       (((iVar4 = _fcntl(2,1), iVar4 != -1 || (piVar6 = (int *)___error(), *piVar6 != 9)) ||
        ((((int)uVar7 != -1 && (iVar4 = _dup(uVar7), iVar4 != -1)) ||
         (iVar4 = _open("/dev/null",2), iVar4 != -1)))))) {
      uVar7 = 1;
      if (param_5 < 2) {
        if (param_5 == 0) goto LAB_10602b328;
        if (param_5 != 1) goto LAB_10602b5e4;
        uRam000000010b6fde68._0_2_ = CONCAT11(1,(char)uRam000000010b6fde68);
      }
      else {
        if (param_5 != 2) {
          if (param_5 != 3) goto LAB_10602b5e4;
          uVar7 = 0;
        }
        uRam000000010b6fde68._0_2_ = CONCAT11(1,(char)uRam000000010b6fde68);
LAB_10602b328:
        lVar11 = _signal(0xd,uVar7);
        if (lVar11 == -1) {
          uVar7 = func_0x00010602995c(&uStack_88,&UNK_109bd60fa,0xc3);
          uStack_80._0_4_ = (undefined4)uVar7;
          uStack_80._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
          func_0x00010603f834(&uStack_80);
          func_0x000108a82be4();
LAB_10602b5e4:
          func_0x000108a07d38(&UNK_109bd5961,0x28,&UNK_10b4adca8);
          goto LAB_10602b700;
        }
      }
      uVar8 = _sysconf(0x1d);
      uRam000000010b6fde98 = uVar8;
      uVar7 = _pthread_self();
      lVar11 = _pthread_get_stackaddr_np();
      lVar9 = _pthread_get_stacksize_np(uVar7);
      if (uVar8 == 0) {
        func_0x000108a07aa0(&UNK_10b4adc00);
LAB_10602b700:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10602b704);
        (*pcVar2)();
      }
      uVar12 = lVar11 - lVar9;
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar12 / uVar8;
      }
      lVar9 = uVar12 - uVar1 * uVar8;
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = uVar8 - lVar9;
      }
      lVar11 = uVar12 + lVar11;
      lVar9 = _mmap(lVar11,uVar8,3,0x1012,0xffffffff,0);
      if (lVar9 == -1 || lVar9 != lVar11) {
        puVar10 = (uint *)___error();
        uStack_88 = (ulong)*puVar10 << 0x20 | 2;
        uStack_80 = &uStack_88;
        uStack_78 = 0x6054098;
        uStack_74 = 1;
        func_0x000108a07d4c(s__failed_to_allocate_a_guard_page_108b34776,&uStack_80,&UNK_10b4adc30);
        goto LAB_10602b700;
      }
      iVar4 = _mprotect(lVar11,uVar8,0);
      if (iVar4 != 0) {
        puVar10 = (uint *)___error();
        uStack_88 = (ulong)*puVar10 << 0x20 | 2;
        uStack_80 = &uStack_88;
        uStack_78 = 0x6054098;
        uStack_74 = 1;
        func_0x000108a07d4c(s__failed_to_protect_the_guard_pag_108b34751,&uStack_80,&UNK_10b4adc18);
        goto LAB_10602b700;
      }
      uStack_80._0_4_ = 0;
      uStack_80._4_4_ = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      _sigaction(0xb,0,&uStack_80);
      if (CONCAT44(uStack_80._4_4_,(undefined4)uStack_80) == 0) {
        bVar3 = (uRam000000010b6fde68 & 0xff) != 0;
        if ((uRam000000010b6fde68 & 0xff) == 0) {
          uRam000000010b6fde68 = 1;
          uRam000000010b6fde90 = func_0x000106031da4(1);
          func_0x000106030dc0(lVar11,uVar8 + lVar11);
        }
        uStack_74 = 0x41;
        uStack_80._0_4_ = 0x6031f38;
        uStack_80._4_4_ = 1;
        _sigaction(0xb,&uStack_80,0);
        _sigaction(10,0,&uStack_80);
        lVar9 = CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
      }
      else {
        bVar3 = true;
        _sigaction(10,0,&uStack_80);
        lVar9 = CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
      }
      if (lVar9 == 0) {
        if ((char)uRam000000010b6fde68 == '\0') {
          uRam000000010b6fde68 = 1;
          uRam000000010b6fde90 = func_0x000106031da4(1);
          if (bVar3) {
            func_0x000106030dc0(lVar11,uVar8 + lVar11);
          }
        }
        uStack_74 = 0x41;
        uStack_80._0_4_ = 0x6031f38;
        uStack_80._4_4_ = 1;
        _sigaction(10,&uStack_80,0);
      }
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_6c = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_80._4_4_ = 0;
      uStack_78 = 0;
      uStack_80._0_4_ = 0x6e69616d;
      _pthread_setname_np(&uStack_80);
      iVar4 = (**(code **)(param_2 + 0x28))(param_1);
      lVar11 = (long)iVar4;
      goto joined_r0x00010602b51c;
    }
  }
  _abort();
  auVar13 = func_0x0001059dd610();
  ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE =
       ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE + -1;
  auVar14 = (*pcRam000000010b66cd10)();
  plVar5 = auVar14._0_8_;
  *plVar5 = *plVar5 + -1;
  *(undefined1 *)(plVar5 + 1) = 0;
  if ((code *)*auVar14._8_8_ != (code *)0x0) {
    (*(code *)*auVar14._8_8_)(auVar13._0_8_);
  }
  if (*(long *)(auVar13._8_8_ + 8) != 0) {
    _free(auVar13._0_8_);
  }
  lVar11 = 0x65;
joined_r0x00010602b51c:
  if (lRam000000010b63d140 != 0) {
    uVar8 = uStack_88 >> 8;
    uStack_88 = CONCAT71((int7)uVar8,1);
    uStack_80 = &uStack_88;
    func_0x000108a82168(0x10b63d140,0,&uStack_80,&UNK_10b4ae218,&UNK_10b4ada50);
  }
  return lVar11;
}

