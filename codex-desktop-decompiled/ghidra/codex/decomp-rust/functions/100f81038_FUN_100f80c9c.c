
void FUN_100f80c9c(void)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar13;
  char unaff_w21;
  char cVar14;
  undefined *puVar15;
  long *plVar16;
  long unaff_x22;
  long *plVar17;
  long *plVar18;
  long unaff_x24;
  long *unaff_x26;
  long lVar19;
  undefined *unaff_x27;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x29;
  long lVar24;
  ulong in_stack_00000058;
  char *in_stack_00000060;
  ulong in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long *in_stack_00000080;
  long *in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000058,s___108ab8993,unaff_x29 + -0x78);
  uVar21 = in_stack_00000068;
  if ((unaff_x26 != (long *)0x0) && (plVar18 = (long *)unaff_x26[3], plVar18 != (long *)0x0)) {
    pcVar4 = in_stack_00000060;
    uVar11 = in_stack_00000068;
    if (in_stack_00000068 < 0x10) {
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        if (*pcVar4 == '?') goto LAB_100f80e30;
        pcVar4 = pcVar4 + 1;
      }
LAB_100f80e38:
      cVar14 = '?';
    }
    else {
      uVar11 = ((ulong)(in_stack_00000060 + 7) & 0xfffffffffffffff8) - (long)in_stack_00000060;
      if (uVar11 == 0) {
LAB_100f80d8c:
        do {
          uVar12 = *(ulong *)(in_stack_00000060 + uVar11);
          uVar1 = *(ulong *)((long)(in_stack_00000060 + uVar11) + 8);
          if ((((0x101010101010100 - (uVar12 ^ 0x3f3f3f3f3f3f3f3f) | uVar12) &
                (0x101010101010100 - (uVar1 ^ 0x3f3f3f3f3f3f3f3f) | uVar1) ^ 0xffffffffffffffff) &
              0x8080808080808080) != 0) break;
          uVar11 = uVar11 + 0x10;
        } while (uVar11 <= in_stack_00000068 - 0x10);
      }
      else {
        uVar12 = 0;
        bVar2 = true;
        do {
          if (in_stack_00000060[uVar12] == '?') goto LAB_100f80e28;
          uVar12 = uVar12 + 1;
        } while (uVar11 != uVar12);
        if (uVar11 <= in_stack_00000068 - 0x10) goto LAB_100f80d8c;
      }
      if (in_stack_00000068 != uVar11) {
        bVar2 = true;
        do {
          if (in_stack_00000060[uVar11] == '?') goto LAB_100f80e28;
          uVar11 = uVar11 + 1;
        } while (in_stack_00000068 != uVar11);
      }
      bVar2 = false;
LAB_100f80e28:
      if (!bVar2) goto LAB_100f80e38;
LAB_100f80e30:
      cVar14 = '&';
    }
    if (in_stack_00000058 == in_stack_00000068) {
      FUN_108855060(&stack0x00000058,in_stack_00000068,1,1,1);
    }
    in_stack_00000060[in_stack_00000068] = cVar14;
    in_stack_00000068 = uVar21 + 1;
    plVar20 = (long *)*unaff_x26;
    lVar24 = *plVar20;
    uVar21 = CONCAT17(-(-1 < lVar24),
                      CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar24 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar24 >> 8)),-(-1 < (char)lVar24))))))));
    plVar16 = plVar20;
    while( true ) {
      uVar21 = uVar21 & 0x8080808080808080;
      plVar16 = plVar16 + 1;
      if (uVar21 != 0) break;
      lVar24 = *plVar16;
      uVar21 = CONCAT17(-(-1 < lVar24),
                        CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar24 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar24 >> 8)),-(-1 < (char)lVar24))))))));
      plVar20 = plVar20 + -0x30;
    }
    uVar11 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    iVar3 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
    in_stack_00000070 = plVar20 + (long)-iVar3 * 6 + -6;
    in_stack_00000090 = plVar20 + (long)-iVar3 * 6 + -3;
    *(long ***)(unaff_x29 + -0x78) = &stack0x00000070;
    *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b524;
    *(long ***)(unaff_x29 + -0x68) = &stack0x00000090;
    *(undefined **)(unaff_x29 + -0x60) = &DAT_100c7b524;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x98,s___108ad4e41,unaff_x29 + -0x78);
    lVar24 = *(long *)(unaff_x29 + -0x98);
    if (lVar24 == -0x8000000000000000) {
      in_stack_00000070 = (long *)0x0;
      in_stack_00000078 = (long *)0x8;
      in_stack_00000080 = (long *)0x0;
    }
    else {
      lVar7 = *(long *)(unaff_x29 + -0x90);
      plVar17 = plVar18;
      if (plVar18 < (long *)0x5) {
        plVar17 = (long *)0x4;
      }
      lVar19 = (long)plVar17 * 0x18;
      if ((long *)0x555555555555555 < plVar18) {
        uVar13 = 0;
LAB_100f80f3c:
        func_0x0001087c9084(uVar13,lVar19);
        goto LAB_100f81324;
      }
      lVar10 = *(long *)(unaff_x29 + -0x88);
      if (lVar19 == 0) {
        plVar17 = (long *)0x0;
        plVar8 = (long *)0x8;
      }
      else {
        uVar13 = 8;
        plVar8 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar19,8);
        if (plVar8 == (long *)0x0) goto LAB_100f80f3c;
      }
      *plVar8 = lVar24;
      plVar8[1] = lVar7;
      plVar8[2] = lVar10;
      in_stack_000000a0 = (long *)0x1;
      lVar24 = (long)plVar18 - 1;
      in_stack_00000090 = plVar17;
      in_stack_00000098 = plVar8;
      if (lVar24 != 0) {
        uVar21 = uVar21 - 1 & uVar21;
        do {
          while (plVar18 = in_stack_000000a0, uVar21 == 0) {
            lVar7 = *plVar16;
            plVar20 = plVar20 + -0x30;
            plVar16 = plVar16 + 1;
            uVar21 = CONCAT17(-(-1 < lVar7),
                              CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar7 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar7 >> 8)),
                                                           -(-1 < (char)lVar7)))))))) &
                     0x8080808080808080;
          }
          uVar11 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          iVar3 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
          in_stack_00000070 = plVar20 + (long)-iVar3 * 6 + -3;
          *(long **)(unaff_x29 + -0x80) = plVar20 + (long)-iVar3 * 6 + -6;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b524;
          *(long ***)(unaff_x29 + -0x68) = &stack0x00000070;
          *(undefined **)(unaff_x29 + -0x60) = &DAT_100c7b524;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x98,s___108ad4e41,unaff_x29 + -0x78);
          lVar7 = *(long *)(unaff_x29 + -0x98);
          if (lVar7 == -0x8000000000000000) break;
          lVar19 = *(long *)(unaff_x29 + -0x90);
          lVar10 = *(long *)(unaff_x29 + -0x88);
          if (plVar18 == in_stack_00000090) {
            FUN_108855060(&stack0x00000090,plVar18,lVar24,8,0x18);
            plVar8 = in_stack_00000098;
          }
          uVar21 = uVar21 - 1 & uVar21;
          plVar17 = plVar8 + (long)plVar18 * 3;
          *plVar17 = lVar7;
          plVar17[1] = lVar19;
          plVar17[2] = lVar10;
          in_stack_000000a0 = (long *)((long)plVar18 + 1);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      in_stack_00000078 = in_stack_00000098;
      in_stack_00000070 = in_stack_00000090;
      in_stack_00000080 = in_stack_000000a0;
    }
    plVar18 = in_stack_00000080;
    plVar20 = in_stack_00000078;
    FUN_100f3f514(unaff_x29 + -0x78,in_stack_00000078,in_stack_00000080,&UNK_108cc811d,1);
    lVar24 = *(long *)(unaff_x29 + -0x78);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar21 = *(ulong *)(unaff_x29 + -0x68);
    if (in_stack_00000058 - in_stack_00000068 < uVar21) {
      FUN_108855060(&stack0x00000058,in_stack_00000068,uVar21,1,1);
    }
    uVar11 = in_stack_00000068;
    _memcpy(in_stack_00000060 + in_stack_00000068,uVar13,uVar21);
    in_stack_00000068 = uVar11 + uVar21;
    if (lVar24 != 0) {
      _free(uVar13);
    }
    unaff_x27 = &UNK_108cc8afa;
    if (plVar18 != (long *)0x0) {
      plVar16 = plVar20 + 1;
      do {
        if (plVar16[-1] != 0) {
          _free(*plVar16);
        }
        plVar16 = plVar16 + 3;
        plVar18 = (long *)((long)plVar18 - 1);
      } while (plVar18 != (long *)0x0);
    }
    if (in_stack_00000070 != (long *)0x0) {
      _free(plVar20);
    }
  }
  uVar11 = in_stack_00000068;
  pcVar4 = in_stack_00000060;
  uVar21 = in_stack_00000058;
  if (unaff_w21 == '\0') {
    if (unaff_x20 != (undefined *)0x0) {
      puVar9 = (undefined8 *)_malloc(0x50);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x50);
        goto LAB_100f81324;
      }
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000028;
      *(undefined **)(unaff_x29 + -0x90) = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_API_108ad5770,unaff_x29 + -0x98);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar22 = *(undefined8 *)(unaff_x29 + -0x70);
      uVar23 = *(undefined8 *)(unaff_x29 + -0x68);
      if (unaff_x24 == 0) {
        lVar24 = 1;
      }
      else {
        lVar24 = _malloc(unaff_x24);
        if (lVar24 == 0) {
          func_0x0001087c9084(1,unaff_x24);
          goto LAB_100f81324;
        }
      }
      _memcpy(lVar24);
      bVar2 = false;
      *puVar9 = uVar13;
      puVar9[1] = uVar22;
      puVar9[2] = uVar23;
      puVar9[3] = unaff_x24;
      puVar9[4] = lVar24;
      puVar9[5] = unaff_x24;
      puVar9[6] = uVar21;
      puVar9[7] = pcVar4;
      puVar9[8] = uVar11;
      puVar15 = &UNK_108cc8aed;
      uVar13 = 0xd;
      goto LAB_100f81234;
    }
    if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000060);
    }
    uVar22 = 0;
    bVar2 = false;
    uVar13 = 0xd;
    puVar9 = (undefined8 *)0x8;
    puVar15 = &UNK_108cc8aed;
  }
  else {
    if (unaff_w21 == '\x01') {
      puVar9 = (undefined8 *)_malloc(0x50);
      if (puVar9 == (undefined8 *)0x0) {
LAB_100f812a8:
        func_0x0001087c906c(8,0x50);
        goto LAB_100f81324;
      }
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000028;
      *(undefined **)(unaff_x29 + -0x90) = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_API_108ad5770,unaff_x29 + -0x98);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar22 = *(undefined8 *)(unaff_x29 + -0x70);
      if (unaff_x20 != (undefined *)0x0) {
        unaff_x27 = unaff_x20;
      }
      uVar23 = *(undefined8 *)(unaff_x29 + -0x68);
      if (unaff_x22 == 0) {
        lVar24 = 1;
      }
      else {
        lVar24 = _malloc(unaff_x22);
        if (lVar24 == 0) {
          func_0x0001087c9084(1,unaff_x22);
          goto LAB_100f81324;
        }
      }
      _memcpy(lVar24,unaff_x27,unaff_x22);
      bVar2 = false;
      *puVar9 = uVar13;
      puVar9[1] = uVar22;
      puVar9[2] = uVar23;
      puVar9[3] = unaff_x22;
      puVar9[4] = lVar24;
      puVar9[5] = unaff_x22;
      puVar9[6] = uVar21;
      puVar9[7] = pcVar4;
      puVar9[8] = uVar11;
      puVar15 = &UNK_108cc8b13;
      uVar13 = 0xc;
    }
    else {
      puVar9 = (undefined8 *)_malloc(0x50);
      if (puVar9 == (undefined8 *)0x0) goto LAB_100f812a8;
      puVar6 = (undefined4 *)_malloc(7);
      if (puVar6 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,7);
        goto LAB_100f81324;
      }
      lVar24 = *(long *)(unaff_x29 + 0x28);
      *(undefined4 *)((long)puVar6 + 3) = 0x54504774;
      *puVar6 = 0x74616843;
      if (lVar24 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar24);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar24);
          goto LAB_100f81324;
        }
      }
      _memcpy(lVar7,*(undefined8 *)(unaff_x29 + 0x20),lVar24);
      *puVar9 = 7;
      puVar9[1] = puVar6;
      puVar9[2] = 7;
      puVar9[3] = lVar24;
      puVar9[4] = lVar7;
      puVar9[5] = lVar24;
      puVar9[6] = 0x8000000000000000;
      puVar15 = &UNK_108cc8b26;
      uVar13 = 0xc;
      bVar2 = true;
    }
LAB_100f81234:
    uVar22 = 1;
    *(undefined1 *)(puVar9 + 9) = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x78) = uVar22;
  *(undefined8 **)(unaff_x29 + -0x70) = puVar9;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar22;
  lVar24 = _malloc(uVar13);
  if (lVar24 != 0) {
    _memcpy(lVar24,puVar15,uVar13);
    uVar22 = *(undefined8 *)(unaff_x29 + -0x78);
    unaff_x19[4] = *(undefined8 *)(unaff_x29 + -0x70);
    unaff_x19[3] = uVar22;
    unaff_x19[5] = *(undefined8 *)(unaff_x29 + -0x68);
    *unaff_x19 = uVar13;
    unaff_x19[1] = lVar24;
    unaff_x19[2] = uVar13;
    if ((bVar2) && ((uVar21 & 0x7fffffffffffffff) != 0)) {
      _free(pcVar4);
    }
    return;
  }
  func_0x0001087c9084(1,uVar13);
LAB_100f81324:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100f81328);
  (*pcVar5)();
}

