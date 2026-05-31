
/* WARNING: Type propagation algorithm not settling */

void FUN_10052b050(void)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x22;
  undefined8 *puVar15;
  bool bVar16;
  long *unaff_x23;
  undefined8 uVar17;
  ulong unaff_x25;
  long lVar18;
  ulong uVar19;
  long lStack0000000000000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s__108af169a,&stack0x00000070);
  if (in_stack_00000040 != 0) {
    _free(in_stack_00000048);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000030;
  *(long *)(unaff_x19 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  puVar13 = (ulong *)(unaff_x19 + 0x40);
  uVar6 = *puVar13;
  puVar14 = *(undefined8 **)(unaff_x19 + 0x48);
  uVar17 = *unaff_x22;
  uVar19 = *(ulong *)(unaff_x19 + 0x50);
  *puVar13 = 0x8000000000000000;
joined_r0x00010052b0bc:
  if (uVar6 != 0x8000000000000000) {
    do {
      puVar15 = puVar14;
      lVar18 = **(long **)(unaff_x19 + 0x58);
      if (*(long *)(lVar18 + 0x80) != 0) {
        if (*(long *)(lVar18 + 0x80) == 1) {
          uVar10 = *(ulong *)(lVar18 + 0x180);
          uVar11 = *(ulong *)(lVar18 + 0x208);
          if ((uVar11 & uVar10) == 0) {
            do {
              uVar11 = uVar11 - 1 & uVar10;
              uVar8 = *(ulong *)(lVar18 + 0x218);
              if (uVar11 + 1 < uVar8) {
                uVar12 = uVar10 + 1;
              }
              else {
                uVar12 = (uVar10 & -*(long *)(lVar18 + 0x200)) + *(long *)(lVar18 + 0x200);
              }
              if (uVar8 <= uVar11) {
                FUN_107c05cd0(uVar11,uVar8,&UNK_10b229bf8);
                goto LAB_10052b5f4;
              }
              puVar1 = (ulong *)(*(long *)(lVar18 + 0x210) + uVar11 * 0x20);
              if (uVar10 == *puVar1) {
                uVar2 = *(ulong *)(lVar18 + 0x180);
                if (uVar2 == uVar10) {
                  *(ulong *)(lVar18 + 0x180) = uVar12;
                  puVar1[1] = uVar6;
                  puVar1[2] = (ulong)puVar15;
                  puVar1[3] = uVar19;
                  *puVar1 = uVar10 + 1;
                  unaff_x22 = puVar15;
                  goto LAB_10052b2a4;
                }
                uVar11 = *(ulong *)(lVar18 + 0x208);
                uVar8 = uVar11 & uVar2;
                uVar10 = uVar2;
              }
              else if (*(long *)(lVar18 + 0x200) + *puVar1 == uVar10 + 1) {
                DataMemoryBarrier(2,3);
                if (*(long *)(lVar18 + 0x200) + *(long *)(lVar18 + 0x100) == uVar10)
                goto LAB_10052b1e8;
                uVar10 = *(ulong *)(lVar18 + 0x180);
                uVar11 = *(ulong *)(lVar18 + 0x208);
                uVar8 = uVar11 & uVar10;
              }
              else {
                _sched_yield();
                uVar10 = *(ulong *)(lVar18 + 0x180);
                uVar11 = *(ulong *)(lVar18 + 0x208);
                uVar8 = uVar11 & uVar10;
              }
              if (uVar8 != 0) break;
            } while( true );
          }
          goto LAB_10052b398;
        }
        lVar4 = *(long *)(lVar18 + 0x188);
        if ((*(ulong *)(lVar18 + 0x180) & 1) != 0) goto LAB_10052b398;
        lStack0000000000000008 = 0;
        uVar10 = *(ulong *)(lVar18 + 0x180);
        goto LAB_10052b2d8;
      }
      puVar1 = (ulong *)(lVar18 + 0x88);
      if (*puVar1 == 0) {
        *puVar1 = 3;
        *(ulong *)(lVar18 + 0x90) = uVar6;
        *(undefined8 **)(lVar18 + 0x98) = puVar15;
        *(ulong *)(lVar18 + 0xa0) = uVar19;
        *puVar1 = *puVar1 & 0xfffffffffffffffe;
        LORelease();
        goto LAB_10052b2a4;
      }
      if (((uint)*puVar1 >> 2 & 1) != 0) goto LAB_10052b398;
LAB_10052b1e8:
      if (*puVar13 == 0x8000000000000000 || *puVar13 == 0) {
        *(ulong *)(unaff_x19 + 0x40) = uVar6;
        *(undefined8 **)(unaff_x19 + 0x48) = puVar15;
        *(ulong *)(unaff_x19 + 0x50) = uVar19;
        lVar18 = *(long *)(unaff_x19 + 0x60);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x48));
        *(ulong *)(unaff_x19 + 0x40) = uVar6;
        *(undefined8 **)(unaff_x19 + 0x48) = puVar15;
        *(ulong *)(unaff_x19 + 0x50) = uVar19;
        lVar18 = *(long *)(unaff_x19 + 0x60);
      }
      unaff_x25 = uVar6;
      if (lVar18 == 0) goto LAB_10052b24c;
      uVar6 = FUN_1014a8880(unaff_x19 + 0x60,uVar17);
      if ((uVar6 & 1) != 0) goto LAB_10052b3a4;
      uVar6 = *(ulong *)(unaff_x19 + 0x40);
      uVar19 = *(ulong *)(unaff_x19 + 0x50);
      *(undefined8 *)(unaff_x19 + 0x40) = 0x8000000000000000;
      puVar14 = *(undefined8 **)(unaff_x19 + 0x48);
      unaff_x22 = puVar15;
      if (uVar6 == 0x8000000000000000) break;
    } while( true );
  }
  FUN_107c05cb0(&UNK_10b24f3f0);
  goto LAB_10052b5f4;
LAB_10052b24c:
  uVar7 = thunk_FUN_108833c8c(**(long **)(unaff_x19 + 0x58) + 0x280);
  FUN_100ded75c(*(undefined8 *)(unaff_x19 + 0x60));
  *(undefined8 *)(unaff_x19 + 0x60) = uVar7;
  uVar6 = *(ulong *)(unaff_x19 + 0x40);
  puVar14 = *(undefined8 **)(unaff_x19 + 0x48);
  uVar19 = *(ulong *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x40) = 0x8000000000000000;
  unaff_x22 = puVar15;
  goto joined_r0x00010052b0bc;
LAB_10052b2d8:
  do {
    uVar11 = uVar10 >> 1 & 0x1f;
    if (uVar11 == 0x1f) {
      _sched_yield();
      uVar8 = *(ulong *)(lVar18 + 0x180);
    }
    else {
      if (((uVar11 == 0x1e) && (lStack0000000000000008 == 0)) &&
         (lStack0000000000000008 = _calloc(1000,1), lStack0000000000000008 == 0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,1000);
        goto LAB_10052b5f4;
      }
      if (lVar4 == 0) {
        lVar4 = _calloc(1000,1);
        if (lVar4 == 0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,1000);
          goto LAB_10052b5f4;
        }
        if (*(long *)(lVar18 + 0x188) != 0) {
          if (lStack0000000000000008 != 0) {
            _free();
          }
          uVar8 = *(ulong *)(lVar18 + 0x180);
          lStack0000000000000008 = lVar4;
          goto LAB_10052b2f0;
        }
        *(long *)(lVar18 + 0x188) = lVar4;
        *(long *)(lVar18 + 0x108) = lVar4;
      }
      uVar8 = *(ulong *)(lVar18 + 0x180);
      if (uVar8 == uVar10) {
        *(ulong *)(lVar18 + 0x180) = uVar10 + 2;
        if (uVar11 != 0x1e) {
          puVar1 = (ulong *)(lVar4 + uVar11 * 0x20);
          *puVar1 = uVar6;
          puVar1[1] = (ulong)puVar15;
          puVar1[2] = uVar19;
          bVar16 = true;
          plVar5 = (long *)puVar1[3];
          puVar1[3] = (ulong)plVar5 | 1;
          LORelease();
          uVar6 = unaff_x25;
          goto joined_r0x00010052b55c;
        }
        if (lStack0000000000000008 == 0) {
          FUN_107c05cb0(&UNK_10b229c28);
          goto LAB_10052b5f4;
        }
        *(long *)(lVar18 + 0x188) = lStack0000000000000008;
        *(long *)(lVar18 + 0x180) = *(long *)(lVar18 + 0x180) + 2;
        LORelease();
        *(long *)(lVar4 + 0x3e0) = lStack0000000000000008;
        *(ulong *)(lVar4 + 0x3c0) = uVar6;
        *(undefined8 **)(lVar4 + 0x3c8) = puVar15;
        *(ulong *)(lVar4 + 0x3d0) = uVar19;
        *(ulong *)(lVar4 + 0x3d8) = *(ulong *)(lVar4 + 0x3d8) | 1;
        LORelease();
        goto LAB_10052b2a4;
      }
    }
LAB_10052b2f0:
    plVar5 = (long *)(lVar18 + 0x188);
    lVar4 = *plVar5;
    uVar10 = uVar8;
  } while ((uVar8 & 1) == 0);
  bVar16 = false;
  unaff_x22 = puVar15;
joined_r0x00010052b55c:
  if (lStack0000000000000008 != 0) {
    _free(plVar5);
  }
  puVar15 = unaff_x22;
  if (bVar16) {
LAB_10052b2a4:
    thunk_FUN_108834028(lVar18 + 0x288,1);
    thunk_FUN_108833f44(lVar18 + 0x290);
    uVar6 = 0x8000000000000000;
  }
  else {
LAB_10052b398:
    unaff_x22 = puVar15;
    if (uVar6 == 0x8000000000000001) {
LAB_10052b3a4:
      *unaff_x23 = -0x7fffffffffffffdf;
      uVar9 = 4;
      goto LAB_10052b494;
    }
  }
  if ((*puVar13 != 0x8000000000000000) && (*puVar13 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  puVar14 = *(undefined8 **)(unaff_x19 + 0x60);
  if (puVar14 != (undefined8 *)0x0) {
    FUN_100d07adc(puVar14);
    _free(puVar14);
  }
  if (uVar6 == 0x8000000000000000) {
    FUN_100e2c954(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x39) = 0;
    lVar18 = -1;
  }
  else {
    puVar14 = (undefined8 *)_malloc(0x1b);
    if (puVar14 == (undefined8 *)0x0) {
      FUN_107c03c64(1,0x1b);
LAB_10052b5f4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052b5f8);
      (*pcVar3)();
    }
    puVar14[1] = 0x207369206e6f6974;
    *puVar14 = 0x61737265766e6f63;
    *(undefined8 *)((long)puVar14 + 0x13) = 0x676e696e6e757220;
    *(undefined8 *)((long)puVar14 + 0xb) = 0x746f6e207369206e;
    if (uVar6 != 0) {
      _free(unaff_x22);
    }
    FUN_100e2c954(unaff_x19 + 0x30);
    if (((*(byte *)(unaff_x19 + 0x39) & 1) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x48));
    }
    *(undefined1 *)(unaff_x19 + 0x39) = 0;
    lVar18 = -0x16;
  }
  *unaff_x23 = lVar18 + -0x7fffffffffffffdf;
  unaff_x23[1] = 0x1b;
  unaff_x23[2] = (long)puVar14;
  unaff_x23[3] = 0x1b;
  uVar9 = 1;
LAB_10052b494:
  *(undefined1 *)(unaff_x19 + 0x38) = uVar9;
  return;
}

