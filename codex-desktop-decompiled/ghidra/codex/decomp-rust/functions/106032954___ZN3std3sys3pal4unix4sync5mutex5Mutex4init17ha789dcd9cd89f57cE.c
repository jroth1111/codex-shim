
/* WARNING: Possible PIC construction at 0x000106032914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106032918) */

undefined8 * __ZN3std3sys3pal4unix4sync5mutex5Mutex4init17ha789dcd9cd89f57cE(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 **ppuVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 unaff_x20;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [16];
  ulong uStack_28;
  
  uVar8 = _pthread_mutexattr_init(auStack_38);
  if (uVar8 == 0) {
    uVar8 = _pthread_mutexattr_settype(auStack_38,0);
    if (uVar8 == 0) {
      uVar8 = _pthread_mutex_init(param_1,auStack_38);
      if (uVar8 == 0) {
        puVar10 = (undefined8 *)_pthread_mutexattr_destroy(auStack_38);
        uStack_28 = CONCAT44(uStack_28._4_4_,(int)puVar10);
        if ((int)puVar10 == 0) {
          return puVar10;
        }
        puVar13 = &UNK_109bd62d8;
        uVar11 = __ZN4core9panicking13assert_failed17h79e72469a32bf64eE
                           (0,&uStack_28,&UNK_109bd62d8,0);
        FUN_10603e844(&uStack_28);
        FUN_10603f0f4(auStack_38);
        __Unwind_Resume(uVar11);
        func_0x000108a07bc4();
        ppuVar19 = &puStack_50;
        uStack_48 = 0x10603285c;
        puStack_50 = &stack0xfffffffffffffff0;
        puVar10 = (undefined8 *)_pthread_mutex_lock();
        if ((int)puVar10 == 0) {
          return puVar10;
        }
        uVar20 = 0x106032878;
        auVar21 = FUN_108a81ad4();
        auVar5._8_8_ = puVar13;
        auVar5._0_8_ = uVar11;
        ppuVar7 = &puStack_50;
        while( true ) {
          auVar4 = auVar21;
          puVar14 = auVar5._8_8_;
          puVar10 = auVar4._0_8_;
          *(undefined8 *)((long)ppuVar7 + -0x20) = unaff_x20;
          *(long *)((long)ppuVar7 + -0x18) = auVar5._0_8_;
          *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar19;
          *(undefined8 *)((long)ppuVar7 + -8) = uVar20;
          ppuVar19 = (undefined1 **)((long)ppuVar7 + -0x10);
          uVar16 = *auVar4._8_8_;
          uVar17 = *puVar14;
          uVar8 = (uint)auVar4._8_8_[1];
          uVar3 = (uint)puVar14[1];
          bVar1 = uVar3 <= uVar8;
          if (uVar16 != uVar17) {
            bVar1 = (long)uVar17 <= (long)uVar16;
          }
          if (bVar1) break;
          auVar21._8_8_ = puVar14;
          auVar21._0_8_ = (undefined1 *)((long)ppuVar7 + -0x38);
          uVar20 = 0x106032918;
          ppuVar7 = (undefined1 **)((long)ppuVar7 + -0x40);
          auVar5 = auVar4;
        }
        uVar18 = -uVar17;
        if (uVar8 < uVar3) {
          uVar18 = ~uVar17;
          uVar8 = uVar8 + 1000000000;
        }
        lVar15 = uVar18 + uVar16;
        uVar8 = uVar8 - uVar3;
        if (999999999 < uVar8) {
          if (lVar15 == -1) {
            uVar11 = func_0x000108a079f0(&UNK_109bd68ae,0x19,&UNK_10b4ae5e8);
            *(undefined8 *)((long)ppuVar7 + -0x60) = unaff_x20;
            *(undefined8 **)((long)ppuVar7 + -0x58) = puVar10;
            *(undefined1 ***)((long)ppuVar7 + -0x50) = ppuVar19;
            *(undefined8 *)((long)ppuVar7 + -0x48) = 0x106032954;
            iVar9 = _clock_gettime(uVar11,(undefined1 *)((long)ppuVar7 + -0x78));
            if (iVar9 == -1) {
              puVar12 = (uint *)___error();
              *(ulong *)((long)ppuVar7 + -0x68) = (ulong)*puVar12 << 0x20 | 2;
              func_0x000108a07a3c(&UNK_109bd68f8,0x2b,(undefined1 *)((long)ppuVar7 + -0x68),
                                  &UNK_10b4ae670,&UNK_10b4add50);
            }
            else {
              uVar16 = *(ulong *)((long)ppuVar7 + -0x70);
              bVar2 = *(long *)((long)ppuVar7 + -0x78) + 0x7fffffffffffffffU < 0x8000000000000000;
              bVar1 = 0xffffffffc4653600 < uVar16;
              if (bVar2 && bVar1) {
                uVar16 = uVar16 + 1000000000;
              }
              if (uVar16 < 1000000000) {
                return (undefined8 *)(*(long *)((long)ppuVar7 + -0x78) - (ulong)(bVar2 && bVar1));
              }
              *(undefined **)((long)ppuVar7 + -0x68) = &UNK_10b4add38;
              func_0x000108a07a3c(&UNK_109bd68f8,0x2b,(undefined1 *)((long)ppuVar7 + -0x68),
                                  &UNK_10b4ae670,&UNK_10b4add68);
            }
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x106032a3c);
            (*pcVar6)();
          }
          lVar15 = lVar15 + 1;
          uVar8 = uVar8 + 0xc4653600;
        }
        *(uint *)(puVar10 + 2) = uVar8;
        *puVar10 = 0;
        puVar10[1] = lVar15;
        return puVar10;
      }
      uStack_28 = (ulong)uVar8 << 0x20 | 2;
      func_0x000108a07a3c(&UNK_109bd68f8,0x2b,&uStack_28,&UNK_10b4ae670,&UNK_10b4adcf0);
    }
    else {
      uStack_28 = (ulong)uVar8 << 0x20 | 2;
      func_0x000108a07a3c(&UNK_109bd68f8,0x2b,&uStack_28,&UNK_10b4ae670,&UNK_10b4adcd8);
    }
  }
  else {
    uStack_28 = (ulong)uVar8 << 0x20 | 2;
    func_0x000108a07a3c(&UNK_109bd68f8,0x2b,&uStack_28,&UNK_10b4ae670,&UNK_10b4adcc0);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1060327f0);
  (*pcVar6)();
}

