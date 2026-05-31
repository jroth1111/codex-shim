
/* WARNING: Removing unreachable block (ram,0x00010077ebac) */
/* WARNING: Removing unreachable block (ram,0x000100780858) */
/* WARNING: Removing unreachable block (ram,0x0001007801e0) */
/* WARNING: Removing unreachable block (ram,0x000100780db4) */
/* WARNING: Removing unreachable block (ram,0x00010078083c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10077e4e8(void)

{
  long *plVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined2 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined8 extraout_x1;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  uint uVar20;
  code *pcVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined1 uVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar28;
  ulong *unaff_x22;
  long lVar29;
  ulong *puVar30;
  undefined8 uVar31;
  ulong *puVar32;
  ulong *unaff_x24;
  ulong *puVar33;
  long *plVar34;
  long lVar35;
  ulong *puVar36;
  long unaff_x26;
  long lVar37;
  undefined8 uVar38;
  ulong *unaff_x27;
  short sVar39;
  long unaff_x29;
  undefined1 auVar40 [16];
  ulong *in_stack_00000020;
  ulong *in_stack_00000028;
  short sStack00000000000000e0;
  undefined4 uStack00000000000000e2;
  undefined2 uStack00000000000000e6;
  short sStack00000000000000e8;
  undefined4 uStack00000000000000ea;
  undefined2 uStack00000000000000ee;
  ulong *in_stack_000000f0;
  ulong *in_stack_000000f8;
  ulong *in_stack_00000100;
  ulong *in_stack_00000108;
  ulong *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  ulong *in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  ulong *in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined1 in_stack_00000168;
  ulong *in_stack_00000420;
  undefined6 uVar41;
  ulong *in_stack_00000428;
  ulong *in_stack_00000430;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000758;
  ulong *in_stack_00000760;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -200,s_Bearer_108ac7639,&stack0x00000408);
  *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000760;
  *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000758;
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xb8);
  FUN_100a3c8fc(&stack0x000000e0,unaff_x19 + 0x708,unaff_x29 + -0xb0,unaff_x29 + -0xe0);
  puVar30 = in_stack_00000108;
  puVar22 = in_stack_000000f8;
  puVar33 = in_stack_000000f0;
  puVar32 = _sStack00000000000000e8;
  sVar39 = sStack00000000000000e0;
  if (sStack00000000000000e0 == 0x1f) {
    if (in_stack_00000420 != (ulong *)0x0) {
      _free(in_stack_00000428);
    }
    lVar37 = *(long *)(unaff_x19 + 0x6e0);
    puVar32 = in_stack_00000420;
    puVar33 = in_stack_00000428;
    if (lVar37 != 0) {
      bVar13 = func_0x000105797d50(&UNK_108cad58c,0xe);
      unaff_x24 = (ulong *)(ulong)(uint)bVar13;
      if (bVar13 == 0x51) {
        *(undefined **)(unaff_x29 + -0xb0) = &UNK_10b3b3638;
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_108cad58c;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0xe;
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xb0) = 0;
        *(byte *)(unaff_x29 + -0xa8) = bVar13;
      }
      uVar18 = *(undefined8 *)(unaff_x19 + 0x6e8);
      *(undefined8 *)(unaff_x29 + -0xe0) = 0;
      *(undefined8 *)(unaff_x29 + -0xd8) = 1;
      *(undefined8 *)(unaff_x29 + -0xb8) = 0x60000020;
      *(undefined8 *)(unaff_x29 + -0xd0) = 0;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xc0) = &UNK_10b209290;
      iVar14 = func_0x0001055b8dfc(unaff_x29 + -200,lVar37 + 0x10,uVar18);
      if (iVar14 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000408,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_100780f20;
      }
      puVar33 = *(ulong **)(unaff_x29 + -0xd8);
      puVar32 = *(ulong **)(unaff_x29 + -0xe0);
      in_stack_00000430 = *(ulong **)(unaff_x29 + -0xd0);
      FUN_100a3c8fc(&stack0x000000e0,unaff_x19 + 0x708,unaff_x29 + -0xb0,&stack0x00000420);
      if (sStack00000000000000e0 != 0x1f) {
        *(undefined4 *)(unaff_x29 + -0xe8) = uStack00000000000000e2;
        *(undefined2 *)(unaff_x29 + -0xe4) = uStack00000000000000e6;
        in_stack_00000028 = in_stack_00000100;
        puVar15 = (undefined1 *)0x18;
        *(undefined8 *)(unaff_x29 + -0xf8) = in_stack_00000118;
        *(ulong **)(unaff_x29 + -0x100) = in_stack_00000110;
        in_stack_00000020 = in_stack_00000108;
        puVar32 = _sStack00000000000000e8;
        puVar33 = in_stack_000000f0;
        puVar22 = in_stack_000000f8;
        sVar39 = sStack00000000000000e0;
        goto LAB_10078021c;
      }
    }
    puVar15 = (undefined1 *)_malloc(0x80);
    if (puVar15 == (undefined1 *)0x0) {
      FUN_107c03c64(1,0x80);
      goto LAB_100780f20;
    }
    *(undefined8 *)(unaff_x29 + -200) = 0x80;
    *(undefined1 **)(unaff_x29 + -0xc0) = puVar15;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    puVar22 = (ulong *)(unaff_x29 + -200);
    lVar37 = 0;
    if (0x12 < *unaff_x22) {
      lVar37 = *unaff_x22 - 0x13;
    }
    uVar41 = (undefined6)((ulong)puVar32 >> 0x10);
    if (1 < lVar37) {
      if (lVar37 != 2) {
        puVar30 = (ulong *)FUN_100eb47e0(unaff_x19 + 0x3a0,&stack0x00000408);
        goto LAB_1007801e8;
      }
      *puVar15 = 0x7b;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      puVar32 = (ulong *)CONCAT62(uVar41,0x100);
      FUN_100642978(&stack0x00000420);
      uVar16 = *(ulong *)(unaff_x19 + 0x3a0);
      uVar26 = uVar16 ^ 0x8000000000000000;
      if (-1 < (long)uVar16) {
        uVar26 = 4;
      }
      puVar33 = (ulong *)&stack0x00000408;
      if (1 < (long)uVar26) {
        if (uVar26 == 2) {
          plVar34 = *(long **)(unaff_x19 + 0x3a8);
          if ((plVar34 != (long *)0x0) && (plVar34[3] != 0)) {
            lVar37 = 0;
            lVar29 = *plVar34;
            uVar16 = plVar34[1];
            unaff_x24 = (ulong *)0x742dbc0e7b7ca316;
            uVar23 = uVar16 & 0x2bfeacfba9176138;
            uVar18 = *(undefined8 *)(lVar29 + uVar23);
            uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) == '\x15'),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                                   '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == '\x15'),
                                                           -((char)uVar18 == '\x15')))))))) &
                     0x8080808080808080;
            while( true ) {
              while (uVar26 == 0) {
                bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar18 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                            ),1);
                if ((bVar13 & 1) != 0) goto LAB_10077fa70;
                lVar37 = lVar37 + 8;
                uVar23 = uVar23 + lVar37 & uVar16;
                uVar18 = *(undefined8 *)(lVar29 + uVar23);
                uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                              '\x15'),CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == '\x15'),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == '\x15'
                                                            ),CONCAT11(-((char)((ulong)uVar18 >> 8)
                                                                        == '\x15'),
                                                                       -((char)uVar18 == '\x15')))))
                                                  ))) & 0x8080808080808080;
              }
              uVar27 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
              uVar27 = uVar23 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) & uVar16;
              plVar34 = (long *)(lVar29 + -0x20 + uVar27 * -0x20);
              if (plVar34[1] == 0x2bfeacfba9176138 && *plVar34 == 0x742dbc0e7b7ca316) break;
              uVar26 = uVar26 - 1 & uVar26;
            }
            lVar29 = lVar29 + uVar27 * -0x20;
            auVar40 = (**(code **)(*(long *)(lVar29 + -8) + 0x28))(*(undefined8 *)(lVar29 + -0x10));
            (**(code **)(auVar40._8_8_ + 0x18))(&stack0x000000e0);
            if ((auVar40._0_8_ != (ulong *)0x0) &&
               (_sStack00000000000000e8 == (ulong *)0x2bfeacfba9176138 &&
                _sStack00000000000000e0 == (undefined1 *)0x742dbc0e7b7ca316)) {
              _sStack00000000000000e0 = (undefined1 *)0x8000000000000000;
              _sStack00000000000000e8 = auVar40._0_8_;
              goto LAB_10077fa78;
            }
          }
LAB_10077fa70:
          _sStack00000000000000e0 = (undefined1 *)0x8000000000000001;
LAB_10077fa78:
          FUN_1013fe3ec(&stack0x00000420,&UNK_108cb495d,6);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
            uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          }
          *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
          *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
            uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          }
          *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x22;
          *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
          FUN_100657654(puVar22,&UNK_108cd5e77,0x19);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
LAB_100780968:
            uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          }
        }
        else {
          if (uVar26 != 3) {
            puVar30 = (ulong *)FUN_100ea6f10((ulong *)(unaff_x19 + 0x3a0),&stack0x00000420);
            if (puVar30 == (ulong *)0x0) goto LAB_1007801a4;
            goto LAB_1007801e8;
          }
          plVar34 = *(long **)(unaff_x19 + 0x3a8);
          if ((plVar34 != (long *)0x0) && (plVar34[3] != 0)) {
            lVar37 = 0;
            lVar29 = *plVar34;
            uVar16 = plVar34[1];
            unaff_x24 = (ulong *)0x742dbc0e7b7ca316;
            uVar23 = uVar16 & 0x2bfeacfba9176138;
            uVar18 = *(undefined8 *)(lVar29 + uVar23);
            uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) == '\x15'),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                                   '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == '\x15'),
                                                           -((char)uVar18 == '\x15')))))))) &
                     0x8080808080808080;
            while( true ) {
              while (uVar26 == 0) {
                bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar18 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                            ),1);
                if ((bVar13 & 1) != 0) goto LAB_10077fb6c;
                lVar37 = lVar37 + 8;
                uVar23 = uVar23 + lVar37 & uVar16;
                uVar18 = *(undefined8 *)(lVar29 + uVar23);
                uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                              '\x15'),CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == '\x15'),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == '\x15'
                                                            ),CONCAT11(-((char)((ulong)uVar18 >> 8)
                                                                        == '\x15'),
                                                                       -((char)uVar18 == '\x15')))))
                                                  ))) & 0x8080808080808080;
              }
              uVar27 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
              uVar27 = uVar23 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) & uVar16;
              plVar34 = (long *)(lVar29 + -0x20 + uVar27 * -0x20);
              if (plVar34[1] == 0x2bfeacfba9176138 && *plVar34 == 0x742dbc0e7b7ca316) break;
              uVar26 = uVar26 - 1 & uVar26;
            }
            lVar29 = lVar29 + uVar27 * -0x20;
            auVar40 = (**(code **)(*(long *)(lVar29 + -8) + 0x28))(*(undefined8 *)(lVar29 + -0x10));
            (**(code **)(auVar40._8_8_ + 0x18))(&stack0x000000e0);
            if ((auVar40._0_8_ != (ulong *)0x0) &&
               (_sStack00000000000000e8 == (ulong *)0x2bfeacfba9176138 &&
                _sStack00000000000000e0 == (undefined1 *)0x742dbc0e7b7ca316)) {
              _sStack00000000000000e0 = (undefined1 *)0x8000000000000000;
              _sStack00000000000000e8 = auVar40._0_8_;
              goto LAB_10077fb74;
            }
          }
LAB_10077fb6c:
          _sStack00000000000000e0 = (undefined1 *)0x8000000000000001;
LAB_10077fb74:
          FUN_1013fe3ec(&stack0x00000420,&UNK_108cb495d,6);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
            uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          }
          *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
          *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
            uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          }
          *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x22;
          *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
          FUN_100657654(puVar22,&UNK_108cd674d,0x20);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
            goto LAB_100780968;
          }
        }
        uVar16 = *(ulong *)(unaff_x29 + -0xc0);
        uVar24 = 0x22;
        unaff_x22 = puVar22;
LAB_100780198:
        *(undefined1 *)(uVar16 + uVar26) = uVar24;
        unaff_x22[2] = uVar26 + 1;
LAB_1007801a4:
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7d;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        puVar30 = (ulong *)0x0;
        goto LAB_1007801e8;
      }
      if (uVar26 == 0) {
        plVar34 = *(long **)(unaff_x19 + 0x3d0);
        if ((plVar34 != (long *)0x0) && (plVar34[3] != 0)) {
          lVar37 = 0;
          lVar29 = *plVar34;
          uVar16 = plVar34[1];
          uVar23 = uVar16 & 0x2bfeacfba9176138;
          uVar18 = *(undefined8 *)(lVar29 + uVar23);
          uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                            CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                     CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                              CONCAT14(-((char)((ulong)uVar18 >> 0x20) == '\x15'),
                                                       CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                                 '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == '\x15'),
                                                           -((char)uVar18 == '\x15')))))))) &
                   0x8080808080808080;
          while( true ) {
            for (; uVar26 != 0; uVar26 = uVar26 - 1 & uVar26) {
              uVar27 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
              uVar27 = uVar23 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) & uVar16;
              plVar34 = (long *)(lVar29 + -0x20 + uVar27 * -0x20);
              if (plVar34[1] == 0x2bfeacfba9176138 && *plVar34 == 0x742dbc0e7b7ca316) {
                lVar29 = lVar29 + uVar27 * -0x20;
                auVar40 = (**(code **)(*(long *)(lVar29 + -8) + 0x28))
                                    (*(undefined8 *)(lVar29 + -0x10));
                puVar30 = auVar40._0_8_;
                (**(code **)(auVar40._8_8_ + 0x18))(&stack0x000000e0);
                if (_sStack00000000000000e0 != (undefined1 *)0x742dbc0e7b7ca316 ||
                    _sStack00000000000000e8 != (ulong *)0x2bfeacfba9176138) {
                  puVar30 = (ulong *)0x0;
                }
                goto LAB_10077fc54;
              }
            }
            bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar18 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                        ),1);
            if ((bVar13 & 1) != 0) break;
            lVar37 = lVar37 + 8;
            uVar23 = uVar23 + lVar37 & uVar16;
            uVar18 = *(undefined8 *)(lVar29 + uVar23);
            uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) == '\x15'),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                                   '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == '\x15'),
                                                           -((char)uVar18 == '\x15')))))))) &
                     0x8080808080808080;
          }
        }
        puVar30 = (ulong *)0x0;
LAB_10077fc54:
        unaff_x22 = (ulong *)(unaff_x19 + 0x3a8);
        _sStack00000000000000e0 = (undefined1 *)0x8000000000000000;
        if (puVar30 == (ulong *)0x0) {
          _sStack00000000000000e0 = (undefined1 *)0x8000000000000001;
        }
        in_stack_00000130 = unaff_x19 + 0x3d8;
        _sStack00000000000000e8 = puVar30;
        in_stack_00000128 = unaff_x22;
        FUN_1013fe3ec(&stack0x00000420,&UNK_108cb495d,6);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x22;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        FUN_100657654(puVar22,&UNK_108cd5743,0x17);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x22;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        FUN_1013fe3ec(&stack0x00000420,&UNK_108cb9606,6);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7b;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        *(undefined2 *)(unaff_x29 + -0xb0) = 0x100;
        *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00000408;
        if (puVar30 != (ulong *)0x0) {
          FUN_100640698(unaff_x29 + -0xb0,&stack0x000000e0);
        }
        uVar18 = *(undefined8 *)(unaff_x19 + 0x3c0);
        unaff_x24 = *(ulong **)(unaff_x19 + 0x3c8);
        FUN_1013fe3ec(unaff_x29 + -0xb0,&UNK_108cb4866,9);
        if ((*(byte *)(unaff_x29 + -0xb0) & 1) == 0) {
          unaff_x27 = *(ulong **)(unaff_x29 + -0xa8);
          plVar34 = (long *)*unaff_x27;
          lVar37 = plVar34[2];
          if (*plVar34 == lVar37) {
            thunk_FUN_108855060(plVar34,lVar37,1,1,1);
            lVar37 = plVar34[2];
          }
          *(undefined1 *)(plVar34[1] + lVar37) = 0x3a;
          plVar34[2] = lVar37 + 1;
          FUN_1011adff8(uVar18,unaff_x24,*unaff_x27);
          func_0x00010063ba6c(unaff_x29 + -0xb0,&UNK_108cadf0d,6,unaff_x22);
          if ((*(byte *)(unaff_x29 + -0xb0) & 1) == 0) {
            if (*(char *)(unaff_x29 + -0xaf) != '\0') {
              unaff_x22 = (ulong *)**(undefined8 **)(unaff_x29 + -0xa8);
              uVar26 = unaff_x22[2];
              if (*unaff_x22 == uVar26) {
                thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
LAB_100780aa8:
                uVar26 = unaff_x22[2];
              }
LAB_100780190:
              uVar16 = unaff_x22[1];
              uVar24 = 0x7d;
              goto LAB_100780198;
            }
            goto LAB_1007801a4;
          }
          puVar19 = &UNK_10b24d418;
        }
        else {
          puVar19 = &UNK_10b24d400;
        }
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar19);
        goto LAB_100780f20;
      }
      plVar34 = *(long **)(unaff_x19 + 1000);
      if ((plVar34 != (long *)0x0) && (plVar34[3] != 0)) {
        lVar37 = 0;
        lVar29 = *plVar34;
        uVar16 = plVar34[1];
        uVar23 = uVar16 & 0x2bfeacfba9176138;
        uVar18 = *(undefined8 *)(lVar29 + uVar23);
        uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                          CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                   CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                            CONCAT14(-((char)((ulong)uVar18 >> 0x20) == '\x15'),
                                                     CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                               '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == '\x15'),
                                                           -((char)uVar18 == '\x15')))))))) &
                 0x8080808080808080;
        while( true ) {
          for (; uVar26 != 0; uVar26 = uVar26 - 1 & uVar26) {
            uVar27 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            uVar27 = uVar23 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) & uVar16;
            plVar34 = (long *)(lVar29 + -0x20 + uVar27 * -0x20);
            if (plVar34[1] == 0x2bfeacfba9176138 && *plVar34 == 0x742dbc0e7b7ca316) {
              lVar29 = lVar29 + uVar27 * -0x20;
              auVar40 = (**(code **)(*(long *)(lVar29 + -8) + 0x28))
                                  (*(undefined8 *)(lVar29 + -0x10));
              puVar30 = auVar40._0_8_;
              (**(code **)(auVar40._8_8_ + 0x18))(&stack0x000000e0);
              if (_sStack00000000000000e0 != (undefined1 *)0x742dbc0e7b7ca316 ||
                  _sStack00000000000000e8 != (ulong *)0x2bfeacfba9176138) {
                puVar30 = (ulong *)0x0;
              }
              goto LAB_10077fe98;
            }
          }
          bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                      ),1);
          if ((bVar13 & 1) != 0) break;
          lVar37 = lVar37 + 8;
          uVar23 = uVar23 + lVar37 & uVar16;
          uVar18 = *(undefined8 *)(lVar29 + uVar23);
          uVar26 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == '\x15'),
                            CONCAT16(-((char)((ulong)uVar18 >> 0x30) == '\x15'),
                                     CONCAT15(-((char)((ulong)uVar18 >> 0x28) == '\x15'),
                                              CONCAT14(-((char)((ulong)uVar18 >> 0x20) == '\x15'),
                                                       CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                                 '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == '\x15'),
                                                           -((char)uVar18 == '\x15')))))))) &
                   0x8080808080808080;
        }
      }
      puVar30 = (ulong *)0x0;
LAB_10077fe98:
      in_stack_00000128 = (ulong *)(unaff_x19 + 0x3a8);
      _sStack00000000000000e0 = (undefined1 *)0x8000000000000000;
      if (puVar30 == (ulong *)0x0) {
        _sStack00000000000000e0 = (undefined1 *)0x8000000000000001;
      }
      in_stack_00000130 = unaff_x19 + 0x3f0;
      _sStack00000000000000e8 = puVar30;
      FUN_1013fe3ec(&stack0x00000420,&UNK_108cb495d,6);
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x22;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      FUN_100657654(puVar22,&UNK_108cd53f8,0x16);
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x22;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      FUN_1013fe3ec(&stack0x00000420,&UNK_108cb9606,6);
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7b;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      *(undefined2 *)(unaff_x29 + -0xe0) = 0x100;
      *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000408;
      if (puVar30 != (ulong *)0x0) {
        FUN_100640698(unaff_x29 + -0xe0,&stack0x000000e0);
      }
      unaff_x27 = *(ulong **)(unaff_x19 + 0x3a8);
      lVar37 = *(long *)(unaff_x19 + 0x3b8);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x3d0);
      uVar31 = *(undefined8 *)(unaff_x19 + 0x3d8);
      FUN_1013fe3ec(unaff_x29 + -0xe0,&UNK_108cb4e99,0xd);
      if ((*(byte *)(unaff_x29 + -0xe0) & 1) == 0) {
        puVar28 = *(undefined8 **)(unaff_x29 + -0xd8);
        unaff_x24 = (ulong *)*puVar28;
        uVar26 = unaff_x24[2];
        if (*unaff_x24 == uVar26) {
          thunk_FUN_108855060(unaff_x24,uVar26,1,1,1);
          uVar26 = unaff_x24[2];
        }
        *(undefined1 *)(unaff_x24[1] + uVar26) = 0x3a;
        unaff_x24[2] = uVar26 + 1;
        FUN_1011adff8(uVar18,uVar31,*puVar28);
        uVar26 = *(ulong *)(unaff_x19 + 0x3e0);
        FUN_1013fe3ec(unaff_x29 + -0xe0,&UNK_108c983b8,8);
        if ((*(byte *)(unaff_x29 + -0xe0) & 1) != 0) goto LAB_100780798;
        puVar28 = *(undefined8 **)(unaff_x29 + -0xd8);
        plVar34 = (long *)*puVar28;
        lVar29 = plVar34[2];
        if (*plVar34 == lVar29) {
          thunk_FUN_108855060(plVar34,lVar29,1,1,1);
          lVar29 = plVar34[2];
        }
        *(undefined1 *)(plVar34[1] + lVar29) = 0x3a;
        plVar34[2] = lVar29 + 1;
        unaff_x22 = (ulong *)*puVar28;
        if ((uVar26 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
          lVar29 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                             (uVar26,unaff_x29 + -0xb0);
          uVar26 = lVar29 - (unaff_x29 + -0xb0);
          unaff_x24 = (ulong *)unaff_x22[2];
          if (*unaff_x22 - (long)unaff_x24 < uVar26) {
            thunk_FUN_108855060(unaff_x22,unaff_x24,uVar26,1,1);
            unaff_x24 = (ulong *)unaff_x22[2];
          }
          _memcpy(unaff_x22[1] + (long)unaff_x24,unaff_x29 + -0xb0,uVar26);
          uVar26 = (long)unaff_x24 + uVar26;
        }
        else {
          uVar26 = unaff_x22[2];
          if (*unaff_x22 - uVar26 < 4) {
            thunk_FUN_108855060(unaff_x22,uVar26,4,1,1);
            uVar26 = unaff_x22[2];
          }
          *(undefined4 *)(unaff_x22[1] + uVar26) = 0x6c6c756e;
          uVar26 = uVar26 + 4;
        }
        unaff_x22[2] = uVar26;
        if (unaff_x27 != (ulong *)0x0) {
          FUN_10063b348(*(undefined8 *)(unaff_x19 + 0x3b0),unaff_x29 + -0xe0,&UNK_108ca3984,5,1);
        }
        if (lVar37 != -0x8000000000000000) {
          func_0x00010063ba6c(unaff_x29 + -0xe0,&UNK_108ca1064,7,unaff_x19 + 0x3b8);
        }
        if ((*(byte *)(unaff_x29 + -0xe0) & 1) == 0) {
          if (*(char *)(unaff_x29 + -0xdf) != '\0') {
            unaff_x22 = (ulong *)**(undefined8 **)(unaff_x29 + -0xd8);
            uVar26 = unaff_x22[2];
            if (*unaff_x22 == uVar26) {
              thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
              goto LAB_100780aa8;
            }
            goto LAB_100780190;
          }
          goto LAB_1007801a4;
        }
        puVar19 = &UNK_10b24d418;
      }
      else {
LAB_100780798:
        puVar19 = &UNK_10b24d400;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar19);
LAB_100780f20:
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100780f24);
      (*pcVar21)();
    }
    if (lVar37 == 0) {
      *puVar15 = 0x7b;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      _sStack00000000000000e0 = (undefined1 *)CONCAT62(_uStack00000000000000e2,0x100);
      _sStack00000000000000e8 = (ulong *)&stack0x00000408;
      FUN_100642978(&stack0x000000e0);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x6d0);
      unaff_x24 = *(ulong **)(unaff_x19 + 0x6d8);
      FUN_1013fe3ec(&stack0x000000e0,&UNK_108ca26b0,2);
      puVar22 = _sStack00000000000000e8;
      if (((ulong)_sStack00000000000000e0 & 1) != 0) goto LAB_100780750;
      plVar34 = (long *)*_sStack00000000000000e8;
      lVar37 = plVar34[2];
      if (*plVar34 == lVar37) {
        thunk_FUN_108855060(plVar34,lVar37,1,1,1);
        lVar37 = plVar34[2];
      }
      *(undefined1 *)(plVar34[1] + lVar37) = 0x3a;
      plVar34[2] = lVar37 + 1;
      FUN_1011adff8(uVar18,unaff_x24,*puVar22);
      unaff_x22 = (ulong *)FUN_100eb4c0c();
      puVar30 = unaff_x22;
      if (unaff_x22 == (ulong *)0x0) {
        if (((ulong)_sStack00000000000000e0 & 1) != 0) {
LAB_100780dbc:
          puVar19 = &UNK_10b24d418;
          goto LAB_100780dc4;
        }
        if (sStack00000000000000e0._1_1_ != '\0') {
          plVar34 = (long *)*_sStack00000000000000e8;
          lVar37 = plVar34[2];
          if (*plVar34 == lVar37) {
            thunk_FUN_108855060(plVar34,lVar37,1,1,1);
            lVar37 = plVar34[2];
          }
          *(undefined1 *)(plVar34[1] + lVar37) = 0x7d;
          plVar34[2] = lVar37 + 1;
        }
      }
    }
    else {
      *puVar15 = 0x7b;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      puVar32 = (ulong *)CONCAT62(uVar41,0x100);
      in_stack_00000028 = (ulong *)&stack0x00000408;
      FUN_100642978(&stack0x00000420);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x3f0);
      uVar31 = *(undefined8 *)(unaff_x19 + 0x3f8);
      FUN_1013fe3ec(&stack0x00000420,&UNK_108ca26b0,2);
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      FUN_1011adff8(uVar18,uVar31,puVar22);
      FUN_1013fe3ec(&stack0x00000420,&UNK_108ca273b,6);
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      unaff_x22 = (ulong *)(unaff_x19 + 0x3a0);
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x3a;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
      uVar26 = *unaff_x22;
      lVar37 = uVar26 + 0x7ffffffffffffffa;
      if (uVar26 < 0x8000000000000006) {
        lVar37 = 2;
      }
      puVar33 = in_stack_00000028;
      unaff_x24 = puVar22;
      if (lVar37 < 2) {
        if (lVar37 == 0) {
          lVar37 = *(long *)(unaff_x19 + 0x3a8);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          if (*puVar22 == uVar26) {
            thunk_FUN_108855060(puVar22,uVar26,1,1,1);
            uVar26 = *(ulong *)(unaff_x29 + -0xb8);
          }
          *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7b;
          *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
          _sStack00000000000000e0 = (undefined1 *)CONCAT62(_uStack00000000000000e2,0x100);
          _sStack00000000000000e8 = in_stack_00000028;
          FUN_100634920(&stack0x000000e0,&UNK_108ca1efe,5,*(undefined8 *)(lVar37 + 8),
                        *(undefined8 *)(lVar37 + 0x10));
          if (*(long *)(lVar37 + 0x18) != -0x8000000000000000) {
            func_0x00010063ba6c(&stack0x000000e0,&UNK_108cc4c63,10);
          }
          unaff_x24 = (ulong *)(lVar37 + 0x30);
          unaff_x27 = (ulong *)*unaff_x24;
          uVar24 = *(undefined1 *)(lVar37 + 0x140);
          FUN_1013fe3ec(&stack0x000000e0,&UNK_108cde374,4);
          puVar30 = _sStack00000000000000e8;
          if (((ulong)_sStack00000000000000e0 & 1) == 0) {
            plVar34 = (long *)*_sStack00000000000000e8;
            lVar29 = plVar34[2];
            if (*plVar34 == lVar29) {
              thunk_FUN_108855060(plVar34,lVar29,1,1,1);
              lVar29 = plVar34[2];
            }
            *(undefined1 *)(plVar34[1] + lVar29) = 0x3a;
            plVar34[2] = lVar29 + 1;
            FUN_100eb4484(uVar24,*puVar30);
            FUN_1013fe3ec(&stack0x000000e0,&UNK_108ca1095,7);
            puVar36 = _sStack00000000000000e8;
            if (((ulong)_sStack00000000000000e0 & 1) == 0) {
              unaff_x22 = (ulong *)*_sStack00000000000000e8;
              uVar26 = unaff_x22[2];
              if (*unaff_x22 == uVar26) {
                thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
                uVar26 = unaff_x22[2];
              }
              *(undefined1 *)(unaff_x22[1] + uVar26) = 0x3a;
              unaff_x22[2] = uVar26 + 1;
              if (*(long *)(lVar37 + 0x78) == -0x7ffffffffffffffc) {
                lVar29 = *(long *)(lVar37 + 0x88);
                lVar37 = *(long *)(lVar37 + 0x90);
                unaff_x22 = (ulong *)*puVar36;
                uVar26 = unaff_x22[2];
                if (*unaff_x22 == uVar26) {
                  thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
                  uVar26 = unaff_x22[2];
                  *(undefined1 *)(unaff_x22[1] + uVar26) = 0x5b;
                  uVar26 = uVar26 + 1;
                  unaff_x22[2] = uVar26;
                }
                else {
                  *(undefined1 *)(unaff_x22[1] + uVar26) = 0x5b;
                  uVar26 = uVar26 + 1;
                  unaff_x22[2] = uVar26;
                }
                if (lVar37 == 0) {
                  if (*unaff_x22 == uVar26) {
                    thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
LAB_100780ef8:
                    uVar26 = unaff_x22[2];
                  }
LAB_100780cf8:
                  *(undefined1 *)(unaff_x22[1] + uVar26) = 0x5d;
                  unaff_x22[2] = uVar26 + 1;
                  if (unaff_x27 != (ulong *)0x8000000000000000) goto LAB_100780d18;
LAB_100780d30:
                  if (sStack00000000000000e0._1_1_ == '\0') {
                    puVar30 = (ulong *)0x0;
                  }
                  else {
                    unaff_x24 = (ulong *)*puVar36;
                    uVar26 = unaff_x24[2];
                    if (*unaff_x24 == uVar26) {
                      thunk_FUN_108855060(unaff_x24,uVar26,1,1,1);
                      uVar26 = unaff_x24[2];
                    }
                    puVar30 = (ulong *)0x0;
                    *(undefined1 *)(unaff_x24[1] + uVar26) = 0x7d;
                    unaff_x24[2] = uVar26 + 1;
                  }
                }
                else {
                  puVar30 = (ulong *)FUN_100ec2c3c(lVar29,puVar36);
                  if (puVar30 == (ulong *)0x0) {
                    lVar37 = lVar37 * 200;
                    do {
                      lVar29 = lVar29 + 200;
                      lVar37 = lVar37 + -200;
                      unaff_x22 = (ulong *)*puVar36;
                      if (lVar37 == 0) {
                        uVar26 = unaff_x22[2];
                        if (*unaff_x22 != uVar26) goto LAB_100780cf8;
                        thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
                        goto LAB_100780ef8;
                      }
                      uVar26 = unaff_x22[2];
                      if (*unaff_x22 == uVar26) {
                        thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
                        uVar26 = unaff_x22[2];
                      }
                      *(undefined1 *)(unaff_x22[1] + uVar26) = 0x2c;
                      unaff_x22[2] = uVar26 + 1;
                      puVar30 = (ulong *)FUN_100ec2c3c(lVar29,puVar36);
                    } while (puVar30 == (ulong *)0x0);
                  }
                }
              }
              else {
                puVar30 = (ulong *)FUN_100ec2c3c(lVar37 + 0x78,puVar36);
                if ((unaff_x27 != (ulong *)0x8000000000000000) && (puVar30 == (ulong *)0x0)) {
LAB_100780d18:
                  FUN_1006430c8(&stack0x000000e0,unaff_x24);
                  puVar36 = _sStack00000000000000e8;
                  if (((ulong)_sStack00000000000000e0 & 1) != 0) goto LAB_100780dbc;
                  goto LAB_100780d30;
                }
                if (puVar30 == (ulong *)0x0) goto LAB_100780d30;
              }
              goto LAB_100780d70;
            }
          }
LAB_100780750:
          puVar19 = &UNK_10b24d400;
LAB_100780dc4:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar19);
          goto LAB_100780f20;
        }
        lVar37 = *(long *)(unaff_x19 + 0x3b0);
        lVar29 = *(long *)(unaff_x19 + 0x3b8);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7b;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
        *(undefined2 *)(unaff_x29 + -0xe0) = 0x100;
        *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000028;
        FUN_1013fe3ec(unaff_x29 + -0xe0,&UNK_108cb9324,5);
        if ((*(byte *)(unaff_x29 + -0xe0) & 1) != 0) goto LAB_100780750;
        unaff_x27 = *(ulong **)(unaff_x29 + -0xd8);
        plVar34 = (long *)*unaff_x27;
        lVar17 = plVar34[2];
        if (*plVar34 == lVar17) {
          thunk_FUN_108855060(plVar34,lVar17,1,1,1);
          lVar17 = plVar34[2];
        }
        *(undefined1 *)(plVar34[1] + lVar17) = 0x3a;
        plVar34[2] = lVar17 + 1;
        unaff_x22 = (ulong *)*unaff_x27;
        uVar26 = unaff_x22[2];
        if (*unaff_x22 == uVar26) {
          thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
          uVar26 = unaff_x22[2];
          *(undefined1 *)(unaff_x22[1] + uVar26) = 0x5b;
          uVar26 = uVar26 + 1;
          unaff_x22[2] = uVar26;
          if (lVar29 == 0) goto LAB_100780bb0;
LAB_10077f920:
          unaff_x24 = (ulong *)(lVar37 + 0x18);
          uVar16 = *unaff_x24;
          if (*unaff_x22 == uVar26) {
            thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
            uVar26 = unaff_x22[2];
          }
          *(undefined1 *)(unaff_x22[1] + uVar26) = 0x7b;
          unaff_x22[2] = uVar26 + 1;
          *(undefined2 *)(unaff_x29 + -0xb0) = 0x100;
          *(ulong **)(unaff_x29 + -0xa8) = unaff_x27;
          FUN_100634920(unaff_x29 + -0xb0,&UNK_108cb4cd2,3,*(undefined8 *)(lVar37 + 8),
                        *(undefined8 *)(lVar37 + 0x10));
          if (uVar16 != 0x8000000000000000) {
            if ((*(byte *)(unaff_x29 + -0xb0) & 1) != 0) {
LAB_10077f980:
              _sStack00000000000000e0 = (undefined1 *)0xa;
              puVar30 = (ulong *)FUN_107c05dbc(&stack0x000000e0,0,0);
              goto LAB_100780d70;
            }
            func_0x00010063ba6c(unaff_x29 + -0xb0,&UNK_108c61018,4,unaff_x24);
          }
          if (((*(byte *)(unaff_x29 + -0xb0) & 1) == 0) && (*(char *)(unaff_x29 + -0xaf) != '\0')) {
            plVar34 = (long *)**(undefined8 **)(unaff_x29 + -0xa8);
            lVar17 = plVar34[2];
            if (*plVar34 == lVar17) {
              thunk_FUN_108855060(plVar34,lVar17,1,1,1);
              lVar17 = plVar34[2];
            }
            *(undefined1 *)(plVar34[1] + lVar17) = 0x7d;
            plVar34[2] = lVar17 + 1;
          }
          if (lVar29 != 1) {
            unaff_x22 = (ulong *)(lVar37 + 0x48);
            lVar37 = lVar29 * 0x30 + -0x30;
            unaff_x24 = (ulong *)&UNK_108cb4cd2;
            do {
              plVar34 = (long *)*unaff_x27;
              lVar29 = plVar34[2];
              if (*plVar34 == lVar29) {
                thunk_FUN_108855060(plVar34,lVar29,1,1,1);
                lVar29 = plVar34[2];
              }
              *(undefined1 *)(plVar34[1] + lVar29) = 0x2c;
              plVar34[2] = lVar29 + 1;
              plVar34 = (long *)*unaff_x27;
              uVar26 = *unaff_x22;
              lVar29 = plVar34[2];
              if (*plVar34 == lVar29) {
                thunk_FUN_108855060(plVar34,lVar29,1,1,1);
                lVar29 = plVar34[2];
              }
              *(undefined1 *)(plVar34[1] + lVar29) = 0x7b;
              plVar34[2] = lVar29 + 1;
              *(undefined2 *)(unaff_x29 + -0xb0) = 0x100;
              *(ulong **)(unaff_x29 + -0xa8) = unaff_x27;
              FUN_100634920(unaff_x29 + -0xb0,&UNK_108cb4cd2,3,unaff_x22[-2],unaff_x22[-1]);
              if (uVar26 != 0x8000000000000000) {
                if ((*(byte *)(unaff_x29 + -0xb0) & 1) != 0) goto LAB_10077f980;
                func_0x00010063ba6c(unaff_x29 + -0xb0,&UNK_108c61018,4,unaff_x22);
              }
              if (((*(byte *)(unaff_x29 + -0xb0) & 1) == 0) &&
                 (*(char *)(unaff_x29 + -0xaf) != '\0')) {
                plVar34 = (long *)**(undefined8 **)(unaff_x29 + -0xa8);
                lVar29 = plVar34[2];
                if (*plVar34 == lVar29) {
                  thunk_FUN_108855060(plVar34,lVar29,1,1,1);
                  lVar29 = plVar34[2];
                }
                *(undefined1 *)(plVar34[1] + lVar29) = 0x7d;
                plVar34[2] = lVar29 + 1;
              }
              unaff_x22 = unaff_x22 + 6;
              lVar37 = lVar37 + -0x30;
            } while (lVar37 != 0);
          }
          unaff_x22 = (ulong *)*unaff_x27;
          uVar26 = unaff_x22[2];
          if (*unaff_x22 == uVar26) {
            thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
LAB_100780e24:
            uVar26 = unaff_x22[2];
          }
        }
        else {
          *(undefined1 *)(unaff_x22[1] + uVar26) = 0x5b;
          uVar26 = uVar26 + 1;
          unaff_x22[2] = uVar26;
          if (lVar29 != 0) goto LAB_10077f920;
LAB_100780bb0:
          if (*unaff_x22 == uVar26) {
            thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
            goto LAB_100780e24;
          }
        }
        *(undefined1 *)(unaff_x22[1] + uVar26) = 0x5d;
        unaff_x22[2] = uVar26 + 1;
        if (*(char *)(unaff_x29 + -0xdf) == '\0') {
          puVar30 = (ulong *)0x0;
        }
        else {
          unaff_x24 = (ulong *)*unaff_x27;
          uVar26 = unaff_x24[2];
          if (*unaff_x24 == uVar26) {
            thunk_FUN_108855060(unaff_x24,uVar26,1,1,1);
            uVar26 = unaff_x24[2];
          }
          puVar30 = (ulong *)0x0;
          *(undefined1 *)(unaff_x24[1] + uVar26) = 0x7d;
          unaff_x24[2] = uVar26 + 1;
        }
LAB_100780d70:
        if (puVar30 != (ulong *)0x0) goto LAB_1007801e8;
      }
      else if (lVar37 == 2) {
        uVar16 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar16) {
          thunk_FUN_108855060(puVar22,uVar16,1,1,1);
          uVar16 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar16) = 0x7b;
        *(ulong *)(unaff_x29 + -0xb8) = uVar16 + 1;
        _sStack00000000000000e0 = (undefined1 *)CONCAT62(_uStack00000000000000e2,0x100);
        cVar2 = *(char *)(unaff_x19 + 1000);
        _sStack00000000000000e8 = in_stack_00000028;
        FUN_1013fe3ec(&stack0x000000e0,&UNK_108ca6c32,6);
        unaff_x27 = _sStack00000000000000e8;
        if (((ulong)_sStack00000000000000e0 & 1) != 0) goto LAB_100780750;
        plVar34 = (long *)*_sStack00000000000000e8;
        lVar37 = plVar34[2];
        if (*plVar34 == lVar37) {
          thunk_FUN_108855060(plVar34,lVar37,1,1,1);
          lVar37 = plVar34[2];
        }
        *(undefined1 *)(plVar34[1] + lVar37) = 0x3a;
        plVar34[2] = lVar37 + 1;
        unaff_x24 = (ulong *)*unaff_x27;
        if (cVar2 == '\0') {
          uVar16 = unaff_x24[2];
          if (*unaff_x24 == uVar16) {
            thunk_FUN_108855060(unaff_x24,uVar16,1,1,1);
            uVar16 = unaff_x24[2];
          }
          *(undefined1 *)(unaff_x24[1] + uVar16) = 0x22;
          unaff_x24[2] = uVar16 + 1;
          FUN_100657654(unaff_x24,&UNK_108cab4f2,6);
          uVar16 = unaff_x24[2];
          if (*unaff_x24 == uVar16) {
            thunk_FUN_108855060(unaff_x24,uVar16,1,1,1);
            goto LAB_100780eb0;
          }
        }
        else if (cVar2 == '\x01') {
          uVar16 = unaff_x24[2];
          if (*unaff_x24 == uVar16) {
            thunk_FUN_108855060(unaff_x24,uVar16,1,1,1);
            uVar16 = unaff_x24[2];
          }
          *(undefined1 *)(unaff_x24[1] + uVar16) = 0x22;
          unaff_x24[2] = uVar16 + 1;
          FUN_100657654(unaff_x24,&UNK_108cab25e,7);
          uVar16 = unaff_x24[2];
          if (*unaff_x24 == uVar16) {
            thunk_FUN_108855060(unaff_x24,uVar16,1,1,1);
LAB_100780eb0:
            uVar16 = unaff_x24[2];
          }
        }
        else {
          uVar16 = unaff_x24[2];
          if (*unaff_x24 == uVar16) {
            thunk_FUN_108855060(unaff_x24,uVar16,1,1,1);
            uVar16 = unaff_x24[2];
          }
          *(undefined1 *)(unaff_x24[1] + uVar16) = 0x22;
          unaff_x24[2] = uVar16 + 1;
          FUN_100657654(unaff_x24,&UNK_108cab265,6);
          uVar16 = unaff_x24[2];
          if (*unaff_x24 == uVar16) {
            thunk_FUN_108855060(unaff_x24,uVar16,1,1,1);
            goto LAB_100780eb0;
          }
        }
        *(undefined1 *)(unaff_x24[1] + uVar16) = 0x22;
        unaff_x24[2] = uVar16 + 1;
        if (uVar26 == 0x8000000000000005) {
          uVar26 = 0;
        }
        else {
          FUN_100634a4c(&stack0x000000e0,&UNK_108ca1095,7,unaff_x22);
          uVar26 = (ulong)_sStack00000000000000e0 & 0xff;
        }
        if (((uVar26 & 1) == 0) && (sStack00000000000000e0._1_1_ != '\0')) {
          unaff_x22 = (ulong *)*_sStack00000000000000e8;
          uVar26 = unaff_x22[2];
          if (*unaff_x22 == uVar26) {
            thunk_FUN_108855060(unaff_x22,uVar26,1,1,1);
            goto LAB_100780cb8;
          }
          goto LAB_100780508;
        }
      }
      else if (lVar37 == 3) {
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
          uVar26 = *(ulong *)(unaff_x29 + -0xb8);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7b;
        uVar26 = uVar26 + 1;
        *(ulong *)(unaff_x29 + -0xb8) = uVar26;
        unaff_x22 = puVar22;
        if (*puVar22 == uVar26) {
          thunk_FUN_108855060(puVar22,uVar26,1,1,1);
LAB_100780cb8:
          uVar26 = unaff_x22[2];
        }
LAB_100780508:
        *(undefined1 *)(unaff_x22[1] + uVar26) = 0x7d;
        unaff_x22[2] = uVar26 + 1;
      }
      else {
        FUN_100683ae4(unaff_x19 + 0x3a8,in_stack_00000028);
      }
      uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      if (*puVar22 == uVar26) {
        thunk_FUN_108855060(puVar22,uVar26,1,1,1);
        uVar26 = *(ulong *)(unaff_x29 + -0xb8);
      }
      puVar30 = (ulong *)0x0;
      *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + uVar26) = 0x7d;
      *(ulong *)(unaff_x29 + -0xb8) = uVar26 + 1;
    }
LAB_1007801e8:
    if (puVar30 != (ulong *)0x0) {
      if (*(long *)(unaff_x29 + -200) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xc0));
      }
LAB_100780210:
      sVar39 = 0x1a;
      puVar15 = (undefined1 *)0x18;
      in_stack_00000020 = unaff_x22;
LAB_100780218:
      *(undefined1 *)(unaff_x19 + 0x81d) = 0;
      puVar32 = puVar30;
      puVar33 = unaff_x24;
      puVar22 = unaff_x27;
      goto LAB_10078021c;
    }
    lVar37 = *(long *)(unaff_x29 + -200);
    puVar30 = *(ulong **)(unaff_x29 + -0xc0);
    if (lVar37 == -0x8000000000000000) goto LAB_100780210;
    uVar18 = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined1 *)(unaff_x19 + 0x81d) = 1;
    lVar29 = *(long *)(unaff_x21 + 0x60);
    lVar17 = *(long *)(unaff_x21 + 0x68);
    lVar35 = *(long *)(lVar17 + 0x10);
    FUN_100c7c1c0(&stack0x00000420,&UNK_108c60ff8,4);
    FUN_100c7be44(unaff_x29 + -0xe0,*(undefined8 *)(unaff_x19 + 0x388),
                  *(undefined8 *)(unaff_x19 + 0x390));
    __ZN17codex_rmcp_client19http_client_adapter16protocol_headers17h8b5bdf7715e33dedE
              (unaff_x29 + -200,unaff_x19 + 0x708);
    *(undefined1 *)(unaff_x19 + 0x81d) = 0;
    FUN_100c7c1c0(unaff_x29 + -0xb0,&UNK_108cdcb20,0x10);
    in_stack_00000110 = *(ulong **)(unaff_x29 + -0xd8);
    in_stack_00000108 = *(ulong **)(unaff_x29 + -0xe0);
    in_stack_00000118 = *(undefined8 *)(unaff_x29 + -0xd0);
    in_stack_00000130 = *(long *)(unaff_x29 + -0xb8);
    _sStack00000000000000e0 = (undefined1 *)0x0;
    in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0xb0);
    in_stack_00000148 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_00000168 = 1;
    in_stack_000000f0 = puVar32;
    in_stack_000000f8 = puVar33;
    in_stack_00000100 = in_stack_00000430;
    in_stack_00000120 = in_stack_00000758;
    in_stack_00000128 = in_stack_00000760;
    in_stack_00000150 = lVar37;
    in_stack_00000158 = puVar30;
    in_stack_00000160 = uVar18;
    auVar40 = (**(code **)(lVar17 + 0x20))
                        (lVar29 + (lVar35 - 1U & 0xfffffffffffffff0) + 0x10,&stack0x000000e0);
    *(undefined1 (*) [16])(unaff_x19 + 0x820) = auVar40;
    (**(code **)(auVar40._8_8_ + 0x18))(&stack0x000000e0,auVar40._0_8_,in_stack_00000020);
    uVar11 = in_stack_00000148;
    uVar10 = in_stack_00000140;
    uVar9 = in_stack_00000138;
    lVar37 = in_stack_00000130;
    puVar8 = in_stack_00000128;
    uVar31 = in_stack_00000120;
    uVar18 = in_stack_00000118;
    unaff_x24 = in_stack_00000110;
    puVar36 = in_stack_00000108;
    unaff_x27 = in_stack_00000100;
    puVar22 = in_stack_000000f8;
    puVar30 = in_stack_000000f0;
    puVar15 = _sStack00000000000000e0;
    if (_sStack00000000000000e0 == (undefined1 *)0x8000000000000001) {
      *unaff_x20 = 0x19;
      uVar24 = 3;
      goto LAB_1007802ec;
    }
    sVar39 = sStack00000000000000e8;
    uVar6 = uStack00000000000000ea;
    uVar7 = uStack00000000000000ee;
    in_stack_00000028 = in_stack_00000108;
    uVar38 = *(undefined8 *)(unaff_x19 + 0x820);
    puVar28 = *(undefined8 **)(unaff_x19 + 0x828);
    pcVar21 = (code *)*puVar28;
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(uVar38);
    }
    if (puVar28[1] != 0) {
      _free(uVar38);
    }
    if (puVar15 == (undefined1 *)0x8000000000000000) {
      *(undefined4 *)(unaff_x29 + -0xe8) = uVar6;
      *(undefined2 *)(unaff_x29 + -0xe4) = uVar7;
      *(undefined8 *)(unaff_x29 + -0xf8) = uVar31;
      *(undefined8 *)(unaff_x29 + -0x100) = uVar18;
      puVar15 = (undefined1 *)0x18;
      in_stack_00000020 = unaff_x24;
      unaff_x24 = puVar22;
      goto LAB_100780218;
    }
    *(undefined8 *)(unaff_x19 + 0x7a8) = uVar31;
    *(undefined8 *)(unaff_x19 + 0x7a0) = uVar18;
    *(undefined8 *)(unaff_x19 + 0x7c8) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x7c0) = uVar9;
    *(undefined1 **)(unaff_x19 + 0x768) = puVar15;
    *(short *)(unaff_x19 + 0x770) = sVar39;
    *(undefined2 *)(unaff_x19 + 0x776) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x772) = uVar6;
    *(ulong **)(unaff_x19 + 0x778) = puVar30;
    *(ulong **)(unaff_x19 + 0x780) = puVar22;
    *(ulong **)(unaff_x19 + 0x788) = unaff_x27;
    *(ulong **)(unaff_x19 + 0x790) = puVar36;
    *(ulong **)(unaff_x19 + 0x798) = unaff_x24;
    *(undefined1 *)(unaff_x19 + 0x81b) = 1;
    *(undefined8 *)(unaff_x19 + 2000) = uVar11;
    uVar20 = (uint)unaff_x24 & 0xffff;
    *(long *)(unaff_x19 + 0x7b8) = lVar37;
    *(ulong **)(unaff_x19 + 0x7b0) = puVar8;
    if (uVar20 == 0x191) {
      _sStack00000000000000e8 = (ulong *)0x4c;
      _sStack00000000000000e0 = (undefined1 *)0x0;
      in_stack_000000f8 = (ulong *)0x0;
      in_stack_000000f0 = (ulong *)0x0;
      FUN_100a3cd74(unaff_x29 + -0xb0,*(undefined8 *)(unaff_x19 + 0x770),puVar30,&stack0x000000e0);
      puVar30 = *(ulong **)(unaff_x29 + -0xb0);
      if (puVar30 == (ulong *)0x8000000000000000) {
        uVar20 = (uint)*(ushort *)(unaff_x19 + 0x798);
        goto LAB_10077ee28;
      }
      unaff_x24 = *(ulong **)(unaff_x29 + -0xa8);
      unaff_x27 = *(ulong **)(unaff_x29 + -0xa0);
      sVar39 = 0x1e;
      puVar15 = (undefined1 *)0x18;
LAB_10077f40c:
      __ZN126__LT_codex_exec_server__client__http_client__response_body_stream__HttpResponseBodyStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h68c8fe47f604dae9E
                (unaff_x19 + 0x7a0);
      FUN_100cc570c(unaff_x19 + 0x7a0);
      *(undefined1 *)(unaff_x19 + 0x81b) = 0;
      lVar29 = *(long *)(unaff_x19 + 0x770);
      lVar37 = *(long *)(unaff_x19 + 0x778);
      if (lVar37 != 0) {
        puVar28 = (undefined8 *)(lVar29 + 0x20);
        do {
          if (puVar28[-4] != 0) {
            _free(puVar28[-3]);
          }
          if (puVar28[-1] != 0) {
            _free(*puVar28);
          }
          puVar28 = puVar28 + 6;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
      }
      if (*(long *)(unaff_x19 + 0x768) != 0) {
        _free(lVar29);
      }
      if (*(long *)(unaff_x19 + 0x780) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x788));
      }
      goto LAB_100780218;
    }
    if (uVar20 == 0x194) {
      if (*(long *)(unaff_x19 + 0x6e0) != 0) {
        sVar39 = 0xe;
        puVar15 = (undefined1 *)0x18;
        goto LAB_10077f40c;
      }
      uVar20 = 0x194;
    }
LAB_10077ee28:
    sVar39 = 0;
    if (899 < uVar20 - 100) {
      uVar20 = 0;
    }
    puVar15 = (undefined1 *)0x15;
    if ((uVar20 == 0xca) || (uVar20 == 0xcc)) goto LAB_10077f40c;
    _sStack00000000000000e8 = (ulong *)0x1d;
    _sStack00000000000000e0 = (undefined1 *)0x0;
    in_stack_000000f8 = (ulong *)0x0;
    in_stack_000000f0 = (ulong *)0x0;
    FUN_100a3cd74(unaff_x19 + 0x7d8,*(undefined8 *)(unaff_x19 + 0x770),
                  *(undefined8 *)(unaff_x19 + 0x778),&stack0x000000e0);
    *(undefined1 *)(unaff_x19 + 0x81a) = 1;
    FUN_100a3cba0(unaff_x19 + 0x7f0,*(undefined8 *)(unaff_x19 + 0x770),
                  *(undefined8 *)(unaff_x19 + 0x778));
    plVar34 = (long *)(unaff_x19 + 0x7a0);
    *(undefined1 *)(unaff_x19 + 0x819) = 1;
    plVar25 = *(long **)(unaff_x19 + 0x7e0);
    uVar26 = *(ulong *)(unaff_x19 + 0x7e8);
    bVar12 = *(long *)(unaff_x19 + 0x7d8) == -0x8000000000000000;
    plVar1 = (long *)0x0;
    if (!bVar12) {
      plVar1 = plVar25;
    }
    *(long **)(unaff_x19 + 0x808) = plVar1;
    *(ulong *)(unaff_x19 + 0x810) = uVar26;
    if (bVar12) {
LAB_10077f2e0:
      *(long **)(unaff_x19 + 0x820) = plVar34;
      *(undefined1 *)(unaff_x19 + 0x9e0) = 0;
      FUN_100a3b3e4(&stack0x000000e0,unaff_x19 + 0x820);
      uVar18 = in_stack_00000118;
      puVar22 = in_stack_00000110;
      unaff_x27 = in_stack_000000f8;
      unaff_x24 = in_stack_000000f0;
      puVar30 = _sStack00000000000000e8;
      sVar39 = sStack00000000000000e0;
      if (sStack00000000000000e0 == 0x20) {
        *unaff_x20 = 0x19;
        uVar24 = 5;
        goto LAB_1007802ec;
      }
      uVar6 = uStack00000000000000e2;
      uVar7 = uStack00000000000000e6;
      in_stack_00000020 = in_stack_00000108;
      in_stack_00000028 = in_stack_00000100;
      if ((*(char *)(unaff_x19 + 0x9e0) == '\x03') &&
         (FUN_100d25748(unaff_x19 + 0x848), *(long *)(unaff_x19 + 0x830) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x838));
      }
      if (sVar39 != 0x1f) {
        *(undefined4 *)(unaff_x29 + -0xe8) = uVar6;
        *(undefined2 *)(unaff_x29 + -0xe4) = uVar7;
LAB_10077f3c8:
        *(undefined8 *)(unaff_x29 + -0xf8) = uVar18;
        *(ulong **)(unaff_x29 + -0x100) = puVar22;
LAB_10077f3cc:
        if ((*(long *)(unaff_x19 + 0x7f0) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x7f0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x7f8));
        }
        *(undefined1 *)(unaff_x19 + 0x819) = 0;
        if ((*(long *)(unaff_x19 + 0x7d8) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x7d8) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x7e0));
        }
        *(undefined1 *)(unaff_x19 + 0x81a) = 0;
        puVar15 = (undefined1 *)0x18;
        goto LAB_10077f40c;
      }
      *(undefined1 *)(unaff_x19 + 0x81a) = 0;
      uVar26 = *(ulong *)(unaff_x19 + 0x7d8);
      if (uVar26 == 0x8000000000000000) {
        puVar28 = (undefined8 *)_malloc(0x14);
        if (puVar28 == (undefined8 *)0x0) {
          FUN_107c03c64(1,0x14);
          goto LAB_100780f20;
        }
        *(undefined4 *)(puVar28 + 2) = 0x65707974;
        puVar28[1] = 0x2d746e65746e6f63;
        *puVar28 = 0x2d676e697373696d;
        uVar26 = 0x14;
      }
      else {
        puVar28 = *(undefined8 **)(unaff_x19 + 0x7e0);
      }
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                (unaff_x29 + -200,unaff_x24,unaff_x27);
      uVar18 = *(undefined8 *)(unaff_x29 + -0xc0);
      uVar16 = *(ulong *)(unaff_x29 + -0xb8);
      if (uVar16 == 0) {
        lVar37 = 1;
      }
      else {
        lVar37 = _malloc(uVar16);
        if (lVar37 == 0) {
          FUN_107c03c64(1,uVar16);
          goto LAB_100780f20;
        }
      }
      _memcpy(lVar37,uVar18,uVar16);
      *(ulong *)(unaff_x29 + -0xb0) = uVar16;
      *(long *)(unaff_x29 + -0xa8) = lVar37;
      *(ulong *)(unaff_x29 + -0xa0) = uVar16;
      if (0x2000 < uVar16) {
        uVar23 = 0x2000;
        do {
          if (-0x41 < *(char *)(lVar37 + uVar23)) {
            uVar27 = uVar16;
            if (uVar16 < uVar23) goto LAB_10077f534;
            break;
          }
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        *(ulong *)(unaff_x29 + -0xa0) = uVar23;
        uVar27 = uVar23;
LAB_10077f534:
        lVar29 = 0;
        if (uVar23 <= uVar16) {
          lVar29 = uVar16 - uVar23;
        }
        *(long *)(unaff_x29 + -0x88) = lVar29;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x88;
        *(undefined **)(unaff_x29 + -0x78) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000000e0,s______truncated_bytes__108ace8ff,unaff_x29 + -0x80);
        puVar36 = in_stack_000000f0;
        puVar22 = _sStack00000000000000e8;
        puVar15 = _sStack00000000000000e0;
        if ((ulong *)(uVar16 - uVar27) < in_stack_000000f0) {
          thunk_FUN_108855060(unaff_x29 + -0xb0,uVar27,in_stack_000000f0,1,1);
          lVar37 = *(long *)(unaff_x29 + -0xa8);
          uVar27 = *(ulong *)(unaff_x29 + -0xa0);
        }
        _memcpy(lVar37 + uVar27,puVar22,puVar36);
        *(ulong *)(unaff_x29 + -0xa0) = uVar27 + (long)puVar36;
        if (puVar15 != (undefined1 *)0x0) {
          _free(puVar22);
        }
      }
      *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xa8);
      *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xb0);
      *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xa0);
      _sStack00000000000000e0 = &stack0x00000408;
      _sStack00000000000000e8 = (ulong *)&DAT_10112965c;
      in_stack_000000f0 = (ulong *)(unaff_x29 + -0xe0);
      in_stack_000000f8 = (ulong *)&DAT_10112965c;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000420,s___body__108ac7658,&stack0x000000e0);
      if (*(long *)(unaff_x29 + -0xe0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xd8));
      }
      if ((*(long *)(unaff_x29 + -200) != -0x8000000000000000) && (*(long *)(unaff_x29 + -200) != 0)
         ) {
        _free(*(undefined8 *)(unaff_x29 + -0xc0));
      }
      if (uVar26 != 0) {
        _free(puVar28);
      }
      if (puVar30 != (ulong *)0x0) {
        _free(unaff_x24);
      }
      sVar39 = 0x16;
      puVar15 = (undefined1 *)0x18;
LAB_10077f638:
      auVar40._8_8_ = in_stack_00000028;
      auVar40._0_8_ = in_stack_00000430;
      if ((*(byte *)(unaff_x19 + 0x819) & 1) != 0) {
LAB_10077f640:
        auVar4._8_8_ = in_stack_00000028;
        auVar4._0_8_ = in_stack_00000430;
        auVar3._8_8_ = in_stack_00000028;
        auVar3._0_8_ = in_stack_00000430;
        auVar40._8_8_ = in_stack_00000028;
        auVar40._0_8_ = in_stack_00000430;
        if ((*(long *)(unaff_x19 + 0x7f0) != -0x8000000000000000) &&
           (auVar40 = auVar3, *(long *)(unaff_x19 + 0x7f0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x7f8));
          auVar40 = auVar4;
        }
      }
    }
    else {
      if (uVar26 < 0x11) {
        if (uVar26 == 0x10) goto LAB_10077f2b0;
        goto LAB_10077f2e0;
      }
      if ((*plVar25 != 0x6576652f74786574 || plVar25[1] != 0x61657274732d746e) ||
          (char)plVar25[2] != 'm') {
LAB_10077f2b0:
        if (*plVar25 != 0x746163696c707061 || plVar25[1] != 0x6e6f736a2f6e6f69) goto LAB_10077f2e0;
        *(long **)(unaff_x19 + 0x820) = plVar34;
        *(undefined1 *)(unaff_x19 + 0x9e0) = 0;
        FUN_100a3b3e4(&stack0x000000e0,unaff_x19 + 0x820);
        uVar18 = in_stack_00000118;
        puVar22 = in_stack_00000110;
        puVar33 = in_stack_00000108;
        puVar32 = in_stack_00000100;
        unaff_x27 = in_stack_000000f8;
        unaff_x24 = in_stack_000000f0;
        puVar36 = _sStack00000000000000e8;
        sVar39 = sStack00000000000000e0;
        if (sStack00000000000000e0 == 0x20) {
          *unaff_x20 = 0x19;
          uVar24 = 4;
          goto LAB_1007802ec;
        }
        uVar6 = uStack00000000000000e2;
        uVar7 = uStack00000000000000e6;
        if ((*(char *)(unaff_x19 + 0x9e0) == '\x03') &&
           (FUN_100d25748(unaff_x19 + 0x848), *(long *)(unaff_x19 + 0x830) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x838));
        }
        if (sVar39 != 0x1f) {
          in_stack_00000020 = puVar33;
          in_stack_00000028 = puVar32;
          *(undefined4 *)(unaff_x29 + -0xe8) = uVar6;
          *(undefined2 *)(unaff_x29 + -0xe4) = uVar7;
          puVar30 = puVar36;
          goto LAB_10077f3c8;
        }
        *(ulong **)(unaff_x29 + -0xb0) = unaff_x24;
        *(ulong **)(unaff_x29 + -0xa8) = unaff_x27;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        FUN_10064dd30(&stack0x000000e0,unaff_x29 + -0xb0);
        in_stack_00000430 = in_stack_00000100;
        puVar33 = in_stack_000000f8;
        puVar32 = in_stack_000000f0;
        puVar30 = _sStack00000000000000e8;
        puVar15 = _sStack00000000000000e0;
        if (_sStack00000000000000e0 != (undefined1 *)0x15) {
          sVar39 = sStack00000000000000e8;
          *(undefined4 *)(unaff_x29 + -0xe8) = uStack00000000000000ea;
          *(undefined2 *)(unaff_x29 + -0xe4) = uStack00000000000000ee;
          in_stack_00000020 = in_stack_00000110;
          in_stack_00000028 = in_stack_00000108;
          auVar40._8_8_ = in_stack_00000108;
          auVar40._0_8_ = in_stack_00000100;
          *(undefined8 *)(unaff_x29 + -0xf8) = in_stack_00000120;
          *(undefined8 *)(unaff_x29 + -0x100) = in_stack_00000118;
          _memcpy(&stack0x00000458,&stack0x00000128,0x2c8);
          *(undefined1 *)(unaff_x19 + 0x819) = 0;
          in_stack_00000448 = *(undefined8 *)(unaff_x19 + 0x7f8);
          in_stack_00000440 = *(undefined8 *)(unaff_x19 + 0x7f0);
          in_stack_00000450 = *(undefined8 *)(unaff_x19 + 0x800);
          if (puVar36 == (ulong *)0x0) goto LAB_10077f638;
          _free(unaff_x24);
          if ((*(byte *)(unaff_x19 + 0x819) & 1) == 0) goto LAB_10077f65c;
          goto LAB_10077f640;
        }
        if (puVar36 != (ulong *)0x0) {
          _free(unaff_x24);
        }
        sVar39 = 0x1a;
        goto LAB_10077f3cc;
      }
      *(undefined1 *)(unaff_x19 + 0x81b) = 0;
      _sStack00000000000000e8 = *(ulong **)(unaff_x19 + 0x7a8);
      _sStack00000000000000e0 = (undefined1 *)*plVar34;
      in_stack_000000f8 = *(ulong **)(unaff_x19 + 0x7b8);
      in_stack_000000f0 = *(ulong **)(unaff_x19 + 0x7b0);
      in_stack_00000108 = *(ulong **)(unaff_x19 + 0x7c8);
      in_stack_00000100 = *(ulong **)(unaff_x19 + 0x7c0);
      in_stack_00000110 = *(ulong **)(unaff_x19 + 2000);
      auVar40 = __ZN17codex_rmcp_client19http_client_adapter20sse_stream_from_body17he074a3a93a298d88E
                          (&stack0x000000e0,extraout_x1,in_stack_00000020);
      *(undefined1 *)(unaff_x19 + 0x819) = 0;
      sVar39 = *(short *)(unaff_x19 + 0x7f0);
      *(undefined2 *)(unaff_x29 + -0xe4) = *(undefined2 *)(unaff_x19 + 0x7f6);
      *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x19 + 0x7f2);
      puVar32 = *(ulong **)(unaff_x19 + 0x7f8);
      puVar33 = *(ulong **)(unaff_x19 + 0x800);
      puVar15 = (undefined1 *)0x17;
    }
LAB_10077f65c:
    *(undefined1 *)(unaff_x19 + 0x819) = 0;
    if ((((*(byte *)(unaff_x19 + 0x81a) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x7d8) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x7d8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x7e0));
    }
    *(undefined1 *)(unaff_x19 + 0x81a) = 0;
    if ((*(byte *)(unaff_x19 + 0x81b) & 1) != 0) {
      __ZN126__LT_codex_exec_server__client__http_client__response_body_stream__HttpResponseBodyStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h68c8fe47f604dae9E
                (unaff_x19 + 0x7a0);
      FUN_100cc570c(unaff_x19 + 0x7a0);
    }
    *(undefined1 *)(unaff_x19 + 0x81b) = 0;
    lVar29 = *(long *)(unaff_x19 + 0x770);
    lVar37 = *(long *)(unaff_x19 + 0x778);
    if (lVar37 != 0) {
      puVar28 = (undefined8 *)(lVar29 + 0x20);
      do {
        if (puVar28[-4] != 0) {
          _free(puVar28[-3]);
        }
        if (puVar28[-1] != 0) {
          _free(*puVar28);
        }
        puVar28 = puVar28 + 6;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
    }
    if (*(long *)(unaff_x19 + 0x768) != 0) {
      _free(lVar29);
    }
    if (*(long *)(unaff_x19 + 0x780) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x788));
    }
    *(undefined1 *)(unaff_x19 + 0x81d) = 0;
    FUN_100def764(unaff_x19 + 0x708);
    *(undefined1 *)(unaff_x19 + 0x81c) = 0;
    plVar34 = *(long **)(unaff_x19 + 0x6e0);
    if (plVar34 != (long *)0x0) {
      lVar37 = *plVar34;
      *plVar34 = lVar37 + -1;
      LORelease();
      if (lVar37 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x6e0);
      }
    }
    FUN_100d341f0(unaff_x19 + 0x398);
    lVar37 = **(long **)(unaff_x19 + 0x388);
    **(long **)(unaff_x19 + 0x388) = lVar37 + -1;
    LORelease();
    if (lVar37 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x388);
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x26 + 2);
    *(undefined2 *)(unaff_x29 + -0xe4) = uStack00000000000000e6;
    in_stack_00000028 = in_stack_00000100;
    *(undefined8 *)(unaff_x29 + -0xf8) = in_stack_00000118;
    *(ulong **)(unaff_x29 + -0x100) = in_stack_00000110;
    if (in_stack_00000420 != (ulong *)0x0) {
      _free(in_stack_00000428);
    }
    puVar15 = (undefined1 *)0x18;
    in_stack_00000020 = puVar30;
LAB_10078021c:
    auVar5._8_8_ = in_stack_00000028;
    auVar5._0_8_ = puVar22;
    auVar40._8_8_ = in_stack_00000028;
    auVar40._0_8_ = puVar22;
    FUN_100def764(unaff_x19 + 0x708);
    if (((*(long *)(unaff_x19 + 0x6f0) != -0x8000000000000000) &&
        ((*(byte *)(unaff_x19 + 0x81c) & 1) != 0)) && (*(long *)(unaff_x19 + 0x6f0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x6f8));
    }
    *(undefined1 *)(unaff_x19 + 0x81c) = 0;
    plVar34 = *(long **)(unaff_x19 + 0x6e0);
    if (plVar34 != (long *)0x0) {
      lVar37 = *plVar34;
      *plVar34 = lVar37 + -1;
      LORelease();
      if (lVar37 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x6e0);
      }
    }
    FUN_100d341f0(unaff_x19 + 0x398);
    lVar37 = **(long **)(unaff_x19 + 0x388);
    **(long **)(unaff_x19 + 0x388) = lVar37 + -1;
    LORelease();
    if (lVar37 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x388);
      auVar40 = auVar5;
    }
  }
  *unaff_x20 = puVar15;
  *(short *)(unaff_x20 + 1) = sVar39;
  *(undefined4 *)((long)unaff_x20 + 10) = *(undefined4 *)(unaff_x29 + -0xe8);
  *(undefined2 *)((long)unaff_x20 + 0xe) = *(undefined2 *)(unaff_x29 + -0xe4);
  unaff_x20[2] = puVar32;
  unaff_x20[3] = puVar33;
  *(undefined1 (*) [16])(unaff_x20 + 4) = auVar40;
  unaff_x20[6] = in_stack_00000020;
  uVar18 = *(undefined8 *)(unaff_x29 + -0x100);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0xf8);
  unaff_x20[7] = uVar18;
  _memcpy(unaff_x20 + 9,&stack0x00000458,0x2c8);
  unaff_x20[99] = in_stack_00000448;
  unaff_x20[0x62] = in_stack_00000440;
  unaff_x20[100] = in_stack_00000450;
  uVar24 = 1;
LAB_1007802ec:
  *(undefined1 *)(unaff_x19 + 0x818) = uVar24;
  return;
}

