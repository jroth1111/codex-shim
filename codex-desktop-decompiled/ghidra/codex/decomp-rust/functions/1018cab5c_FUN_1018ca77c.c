
/* WARNING: Removing unreachable block (ram,0x0001018c92f4) */
/* WARNING: Removing unreachable block (ram,0x0001018c9324) */
/* WARNING: Removing unreachable block (ram,0x0001018c9328) */
/* WARNING: Removing unreachable block (ram,0x0001018c9340) */
/* WARNING: Removing unreachable block (ram,0x0001018c9358) */
/* WARNING: Removing unreachable block (ram,0x0001018c9314) */
/* WARNING: Removing unreachable block (ram,0x0001018c92ec) */
/* WARNING: Removing unreachable block (ram,0x0001018c9364) */
/* WARNING: Removing unreachable block (ram,0x0001018c9378) */
/* WARNING: Removing unreachable block (ram,0x0001018c9390) */
/* WARNING: Removing unreachable block (ram,0x0001018c9398) */
/* WARNING: Removing unreachable block (ram,0x0001018c93c8) */
/* WARNING: Removing unreachable block (ram,0x0001018c93cc) */
/* WARNING: Removing unreachable block (ram,0x0001018c93e4) */
/* WARNING: Removing unreachable block (ram,0x0001018c93fc) */
/* WARNING: Removing unreachable block (ram,0x0001018c93b8) */
/* WARNING: Removing unreachable block (ram,0x0001018c9408) */
/* WARNING: Removing unreachable block (ram,0x0001018c941c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ca77c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  byte bVar13;
  long *plVar14;
  code *pcVar15;
  undefined8 *puVar16;
  long in_x10;
  long lVar17;
  ulong uVar18;
  undefined1 uVar19;
  ulong uVar20;
  long *unaff_x19;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  ulong *unaff_x23;
  ulong uVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long unaff_x27;
  undefined1 *unaff_x28;
  long unaff_x29;
  byte bVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000030;
  long in_stack_00000068;
  long *in_stack_00000090;
  long *in_stack_00000098;
  code *in_stack_000000a0;
  code *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long *in_stack_00000178;
  long *in_stack_00000180;
  long *in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long *in_stack_00000220;
  long *in_stack_00000230;
  code *in_stack_00000238;
  code *in_stack_00000240;
  undefined8 in_stack_00000248;
  
code_r0x0001018ca77c:
  *(char **)(unaff_x29 + -0xc0) = s_skills_scan_truncated_after_dire_108acddbc;
  *(long ***)(unaff_x29 + -0xb8) = &stack0x00000090;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000608;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = in_x10;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,unaff_x29 + -0xe0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar22 = *unaff_x19;
    uVar28 = *(undefined8 *)(lVar22 + 0x20);
    uVar30 = *(undefined8 *)(lVar22 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xb0) = 2;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar28;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar30;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xb0);
    if (iVar6 != 0) {
      in_stack_00000240 = *(code **)(lVar22 + 0x60);
      in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
      in_stack_00000230 = *(long **)(lVar22 + 0x58);
      in_stack_00000220 = (long *)0x1;
      if (*(long *)(lVar22 + 0x50) == 0) {
        in_stack_00000220 = (long *)0x2;
      }
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xe0;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      in_stack_00000178 = (long *)(unaff_x29 + -0x80);
      in_stack_00000180 = (long *)&DAT_1061c2098;
      in_stack_00000238 = (code *)0x1;
      if (in_stack_00000240 == (code *)0x0) {
        in_stack_00000238 = (code *)0x2;
      }
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
    }
  }
LAB_1018cac18:
  uVar24 = unaff_x23[3];
  uVar21 = *unaff_x23;
  if (uVar24 != 0) {
    uVar20 = unaff_x23[1];
    uVar18 = unaff_x23[2];
    uVar8 = 0;
    if (uVar21 <= uVar18) {
      uVar8 = uVar21;
    }
    lVar17 = uVar18 - uVar8;
    uVar26 = uVar21 - lVar17;
    lVar22 = 0;
    if (uVar26 <= uVar24) {
      lVar22 = uVar24 - uVar26;
    }
    uVar3 = uVar21;
    if (uVar24 <= uVar26) {
      uVar3 = lVar17 + uVar24;
    }
    lVar17 = uVar3 - lVar17;
    if (lVar17 != 0) {
      puVar23 = (undefined8 *)(uVar20 + uVar8 * -0x20 + uVar18 * 0x20 + 8);
      do {
        if (puVar23[-1] != 0) {
          _free(*puVar23);
        }
        puVar23 = puVar23 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (uVar26 < uVar24) {
      puVar23 = (undefined8 *)(uVar20 + 8);
      do {
        if (puVar23[-1] != 0) {
          _free(*puVar23);
        }
        puVar23 = puVar23 + 4;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
  }
  if (uVar21 != 0) {
    _free(unaff_x23[1]);
  }
  lVar22 = *(long *)(unaff_x27 + 0x2c0);
  if (lVar22 == 0) goto LAB_1018cad34;
  lVar17 = *(long *)(unaff_x27 + 0x2d0);
  if (lVar17 != 0) {
    plVar25 = *(long **)(unaff_x27 + 0x2b8);
    plVar10 = plVar25 + 1;
    lVar33 = *plVar25;
    uVar21 = CONCAT17(-(-1 < lVar33),
                      CONCAT16(-(-1 < (char)((ulong)lVar33 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar33 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar33 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar33 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar33 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar33 >> 8)),-(-1 < (char)lVar33)))))))) &
             0x8080808080808080;
    do {
      while (uVar21 == 0) {
        lVar33 = *plVar10;
        plVar25 = plVar25 + -0x18;
        plVar10 = plVar10 + 1;
        uVar21 = CONCAT17(-(-1 < lVar33),
                          CONCAT16(-(-1 < (char)((ulong)lVar33 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar33 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar33 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar33 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar33
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar33 >> 8)),-(-1 < (char)lVar33)))))))) &
                 0x8080808080808080;
      }
      uVar24 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      iVar6 = (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
      if (plVar25[(long)-iVar6 * 3 + -3] != 0) {
        _free(plVar25[(long)-iVar6 * 3 + -2]);
      }
      uVar21 = uVar21 - 1 & uVar21;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (lVar22 * 0x19 == -0x21) goto LAB_1018cad34;
  puVar11 = (undefined1 *)(*(long *)(unaff_x27 + 0x2b8) + lVar22 * -0x18 + -0x18);
  do {
    _free(puVar11);
LAB_1018cad34:
    do {
      if (*(long *)(unaff_x27 + 0x300) != 0) {
        _free(*(undefined8 *)(unaff_x27 + 0x308));
      }
      *unaff_x28 = 1;
      FUN_1019311d4(unaff_x23);
      uVar21 = *(ulong *)(unaff_x27 + 0x200);
      uVar24 = *(ulong *)(unaff_x27 + 0x28);
      if (uVar24 < uVar21) {
        func_0x000108a07904(uVar21,uVar24,uVar24,&UNK_10b2681a0);
        goto LAB_1018ca324;
      }
      plVar25 = in_stack_00000220;
      if (uVar21 != uVar24) {
        lVar17 = *(long *)(unaff_x27 + 0x20);
        lVar22 = lVar17 + uVar21 * 0x148;
LAB_1018cafb4:
        lVar33 = lVar22 + 0x148;
        lVar29 = *(long *)(unaff_x27 + 0xb8);
        lVar32 = *(long *)(unaff_x27 + 0xc0) * 0x18;
        do {
          if (lVar32 == 0) {
            uVar28 = *(undefined8 *)(unaff_x27 + 0x1e0);
            lVar29 = *(long *)(unaff_x27 + 0x1e8);
            if (lVar29 == 0) {
              lVar32 = 1;
            }
            else {
              lVar32 = _malloc(lVar29);
              if (lVar32 == 0) {
                func_0x0001087c9084(1,lVar29);
                goto LAB_1018ca324;
              }
            }
            _memcpy(lVar32,uVar28,lVar29);
            lVar7 = *(long *)(unaff_x27 + 0xc0);
            if (lVar7 == *(long *)(unaff_x27 + 0xb0)) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(unaff_x27 + 0xb0)
              ;
            }
            plVar10 = (long *)(*(long *)(unaff_x27 + 0xb8) + lVar7 * 0x18);
            *plVar10 = lVar29;
            plVar10[1] = lVar32;
            plVar10[2] = lVar29;
            *(long *)(unaff_x27 + 0xc0) = lVar7 + 1;
            uVar28 = *(undefined8 *)(lVar22 + 0x38);
            lVar29 = *(long *)(lVar22 + 0x40);
            goto joined_r0x0001018cb0e0;
          }
          plVar25 = *(long **)(lVar29 + 8);
          in_stack_00000230 = (long *)CONCAT71((int7)((ulong)in_stack_00000230 >> 8),6);
          uVar21 = FUN_1019a7450(&stack0x00000220,&stack0x000004c0);
          lVar29 = lVar29 + 0x18;
          lVar32 = lVar32 + -0x18;
        } while ((uVar21 & 1) == 0);
        uVar28 = *(undefined8 *)(lVar22 + 0x38);
        lVar29 = *(long *)(lVar22 + 0x40);
joined_r0x0001018cb0e0:
        if (lVar29 == 0) {
          lVar32 = 1;
        }
        else {
          lVar32 = _malloc(lVar29);
          if (lVar32 == 0) {
            func_0x0001087c9084(1,lVar29);
            goto LAB_1018ca324;
          }
        }
        _memcpy(lVar32,uVar28,lVar29);
        uVar26 = *(ulong *)(unaff_x27 + 0xf0);
        uVar8 = *(ulong *)(unaff_x27 + 0xe8);
        FUN_1019827c0(lVar32,lVar29,&stack0x000004c0);
        lVar7 = 0;
        uVar21 = (uVar26 ^ 0x646f72616e646f6d) + (uVar8 ^ 0x736f6d6570736575);
        uVar18 = uVar21 ^ ((uVar26 ^ 0x646f72616e646f6d) >> 0x33 |
                          (uVar26 ^ 0x6f72616e646f6d) << 0xd);
        uVar8 = (uVar26 ^ 0x7465646279746573) + (uVar8 ^ 0x6c7967656e657261);
        uVar20 = uVar8 + uVar18;
        uVar8 = uVar8 ^ ((uVar26 ^ 0x7465646279746573) >> 0x30 | (uVar26 ^ 0x65646279746573) << 0x10
                        );
        uVar26 = uVar20 ^ (uVar18 >> 0x2f | uVar18 << 0x11);
        uVar21 = uVar8 + (uVar21 >> 0x20 | uVar21 << 0x20);
        uVar18 = uVar21 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
        uVar21 = uVar21 + uVar26;
        uVar26 = uVar21 ^ (uVar26 >> 0x33 | uVar26 << 0xd);
        uVar8 = uVar18 + ((uVar20 >> 0x20 | uVar20 << 0x20) ^ 0xff);
        uVar20 = uVar26 + uVar8;
        uVar8 = uVar8 ^ (uVar18 >> 0x30 | uVar18 << 0x10);
        uVar26 = uVar20 ^ (uVar26 >> 0x2f | uVar26 << 0x11);
        uVar21 = uVar8 + (uVar21 >> 0x20 | uVar21 << 0x20);
        uVar18 = uVar26 + uVar21;
        uVar21 = uVar21 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
        uVar26 = uVar18 ^ (uVar26 >> 0x33 | uVar26 << 0xd);
        uVar8 = uVar21 + (uVar20 >> 0x20 | uVar20 << 0x20);
        uVar20 = uVar26 + uVar8;
        uVar8 = uVar8 ^ (uVar21 >> 0x30 | uVar21 << 0x10);
        uVar26 = uVar20 ^ (uVar26 >> 0x2f | uVar26 << 0x11);
        uVar21 = uVar8 + (uVar18 >> 0x20 | uVar18 << 0x20);
        uVar18 = uVar21 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
        uVar26 = uVar26 + uVar21 ^ (uVar26 >> 0x33 | uVar26 << 0xd);
        uVar21 = uVar18 + (uVar20 >> 0x20 | uVar20 << 0x20);
        uVar8 = uVar26 + uVar21;
        uVar21 = uVar21 ^ (uVar18 >> 0x30 | uVar18 << 0x10);
        uVar8 = (uVar21 >> 0x2b | uVar21 << 0x15) ^ (uVar26 >> 0x2f | uVar26 << 0x11) ^
                (uVar8 >> 0x20 | uVar8 << 0x20) ^ uVar8;
        lVar12 = *(long *)(unaff_x27 + 200);
        uVar20 = *(ulong *)(unaff_x27 + 0xd0);
        bVar4 = (byte)(uVar8 >> 0x38);
        bVar13 = bVar4 >> 1;
        uVar18 = uVar8 & uVar20;
        uVar28 = *(undefined8 *)(lVar12 + uVar18);
        uVar21 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar13),
                          CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar13),
                                   CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar13),
                                            CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar13),
                                                     CONCAT13(-((byte)((ulong)uVar28 >> 0x18) ==
                                                               bVar13),CONCAT12(-((byte)((ulong)
                                                  uVar28 >> 0x10) == bVar13),
                                                  CONCAT11(-((byte)((ulong)uVar28 >> 8) == bVar13),
                                                           -((byte)uVar28 == bVar13))))))));
        while( true ) {
          uVar21 = uVar21 & 0x8080808080808080;
          if (uVar21 != 0) {
            if (lVar29 == 0) {
              do {
                uVar26 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                plVar25 = *(long **)(lVar12 + (uVar18 + ((ulong)LZCOUNT(uVar26 >> 0x20 |
                                                                        uVar26 << 0x20) >> 3) &
                                              uVar20) * -0x30 + -0x28);
                in_stack_00000230 = (long *)CONCAT71((int7)((ulong)in_stack_00000230 >> 8),6);
                uVar26 = FUN_1019a7450(&stack0x00000220,&stack0x000004c0);
                if ((uVar26 & 1) != 0) goto LAB_1018cb378;
                uVar21 = uVar21 - 1 & uVar21;
              } while (uVar21 != 0);
            }
            else {
              do {
                uVar26 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                plVar25 = *(long **)(lVar12 + (uVar18 + ((ulong)LZCOUNT(uVar26 >> 0x20 |
                                                                        uVar26 << 0x20) >> 3) &
                                              uVar20) * -0x30 + -0x28);
                in_stack_00000230 = (long *)CONCAT71((int7)((ulong)in_stack_00000230 >> 8),6);
                uVar26 = FUN_1019a7450(&stack0x00000220,&stack0x000004c0);
                if ((uVar26 & 1) != 0) goto LAB_1018cb378;
                uVar21 = uVar21 - 1 & uVar21;
              } while (uVar21 != 0);
            }
          }
          bVar31 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar28 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar28 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar28 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar28 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar28 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar28 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar28 >> 8) ==
                                                                     -1),-((char)uVar28 == -1)))))))
                                      ),1);
          if ((bVar31 & 1) != 0) break;
          lVar7 = lVar7 + 8;
          uVar18 = uVar18 + lVar7 & uVar20;
          uVar28 = *(undefined8 *)(lVar12 + uVar18);
          uVar21 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar13),
                            CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar13),
                                     CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar13),
                                              CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar13),
                                                       CONCAT13(-((byte)((ulong)uVar28 >> 0x18) ==
                                                                 bVar13),CONCAT12(-((byte)((ulong)
                                                  uVar28 >> 0x10) == bVar13),
                                                  CONCAT11(-((byte)((ulong)uVar28 >> 8) == bVar13),
                                                           -((byte)uVar28 == bVar13))))))));
        }
        if (*(long *)(in_stack_00000068 + 0xd8) == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6bb4035813102636E
                    (in_stack_00000068 + 200,1,in_stack_00000068 + 0xe8,1);
        }
        if (lVar29 != -0x8000000000000000) {
          uVar28 = *(undefined8 *)(in_stack_00000068 + 0x1e0);
          lVar7 = *(long *)(in_stack_00000068 + 0x1e8);
          if (lVar7 == 0) {
            lVar12 = 1;
          }
          else {
            lVar12 = _malloc(lVar7);
            if (lVar12 == 0) {
              func_0x0001087c9084(1,lVar7);
              goto LAB_1018ca324;
            }
          }
          _memcpy(lVar12,uVar28,lVar7);
          plVar10 = *(long **)(in_stack_00000068 + 200);
          uVar21 = *(ulong *)(in_stack_00000068 + 0xd0);
          uVar8 = uVar21 & uVar8;
          lVar34 = *(long *)((long)plVar10 + uVar8);
          uVar20 = CONCAT17(-(lVar34 < 0),
                            CONCAT16(-((char)((ulong)lVar34 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar34 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar34 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar34 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar34 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar34 >> 8) < '\0'),
                                                           -((char)lVar34 < '\0'))))))));
          if (uVar20 == 0) {
            lVar34 = 8;
            do {
              uVar8 = uVar8 + lVar34 & uVar21;
              lVar35 = *(long *)((long)plVar10 + uVar8);
              uVar20 = CONCAT17(-(lVar35 < 0),
                                CONCAT16(-((char)((ulong)lVar35 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar35 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar35 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar35 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar35 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar35 >> 8) < '\0'),
                                                           -((char)lVar35 < '\0'))))))));
              lVar34 = lVar34 + 8;
            } while (uVar20 == 0);
          }
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = uVar8 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar21;
          uVar8 = (ulong)*(char *)((long)plVar10 + uVar20);
          if (-1 < *(char *)((long)plVar10 + uVar20)) {
            lVar34 = *plVar10;
            uVar8 = CONCAT17(-(lVar34 < 0),
                             CONCAT16(-((char)((ulong)lVar34 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar34 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar34 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar34 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar34 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar34 >> 8) < '\0'),
                                                           -((char)lVar34 < '\0'))))))));
            uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar20 = (ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3;
            uVar8 = (ulong)*(byte *)((long)plVar10 + uVar20);
          }
          bVar4 = bVar4 >> 1;
          *(byte *)((long)plVar10 + uVar20) = bVar4;
          *(byte *)((long)plVar10 + (uVar20 - 8 & uVar21) + 8) = bVar4;
          plVar10[uVar20 * -6 + -6] = lVar29;
          plVar10[uVar20 * -6 + -5] = lVar32;
          plVar10[uVar20 * -6 + -4] = lVar29;
          plVar10[uVar20 * -6 + -3] = lVar7;
          plVar10[uVar20 * -6 + -2] = lVar12;
          plVar10[uVar20 * -6 + -1] = lVar7;
          *(long *)(in_stack_00000068 + 0xe0) = *(long *)(in_stack_00000068 + 0xe0) + 1;
          *(ulong *)(in_stack_00000068 + 0xd8) = *(long *)(in_stack_00000068 + 0xd8) - (uVar8 & 1);
        }
        goto LAB_1018cb458;
      }
LAB_1018cad6c:
      lVar22 = **(long **)(unaff_x27 + 0x1f0);
      **(long **)(unaff_x27 + 0x1f0) = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(unaff_x27 + 0x1f0);
      }
      if (*(long *)(unaff_x27 + 0x1d8) != 0) {
        _free(*(undefined8 *)(unaff_x27 + 0x1e0));
      }
      if (*(long *)(unaff_x27 + 400) != 0) {
        _free(*(undefined8 *)(unaff_x27 + 0x198));
      }
      if ((*(long *)(unaff_x27 + 0x1a8) != -0x8000000000000000) &&
         (*(long *)(unaff_x27 + 0x1a8) != 0)) {
        _free(*(undefined8 *)(unaff_x27 + 0x1b0));
      }
      *(undefined1 *)(unaff_x27 + 0x5b9) = 0;
      puVar16 = *(undefined8 **)(unaff_x27 + 0x130);
      puVar23 = (undefined8 *)(unaff_x27 + 0x148);
      if (puVar16 == *(undefined8 **)(unaff_x27 + 0x140)) {
        *puVar23 = 0x8000000000000000;
LAB_1018c8ad8:
        FUN_10196c25c(unaff_x27 + 0x128);
        pauVar9 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if (pauVar9[1][0] == '\x01') {
          _in_stack_000000b0 = *pauVar9;
        }
        else {
          _in_stack_000000b0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar9 + 8) = in_stack_000000b0._8_8_;
          pauVar9[1][0] = 1;
        }
        lVar22 = in_stack_000000b0 + 1;
        *(long *)*pauVar9 = lVar22;
        in_stack_00000098 = (long *)0x0;
        in_stack_00000090 = (long *)&UNK_108cea360;
        in_stack_000000a8 = (code *)0x0;
        in_stack_000000a0 = (code *)0x0;
        lVar17 = *(long *)(unaff_x27 + 0x28);
        if (lVar17 != 0) {
          lVar33 = 0;
          *(undefined8 *)(unaff_x27 + 0x28) = 0;
          lVar29 = *(long *)(unaff_x27 + 0x20);
          lVar22 = 1 - lVar17;
          goto LAB_1018c8b50;
        }
        lVar17 = 0;
        lVar29 = *(long *)(unaff_x27 + 0x20);
        lVar33 = unaff_x27;
        goto LAB_1018c8ca0;
      }
      *(undefined8 **)(unaff_x27 + 0x130) = puVar16 + 9;
      uVar28 = *puVar16;
      *(undefined8 *)(unaff_x27 + 0x150) = puVar16[1];
      *puVar23 = uVar28;
      uVar37 = puVar16[5];
      uVar36 = puVar16[4];
      uVar30 = puVar16[7];
      uVar28 = puVar16[6];
      uVar39 = puVar16[3];
      uVar38 = puVar16[2];
      *(undefined8 *)(unaff_x27 + 0x188) = puVar16[8];
      *(undefined8 *)(unaff_x27 + 0x170) = uVar37;
      *(undefined8 *)(unaff_x27 + 0x168) = uVar36;
      *(undefined8 *)(unaff_x27 + 0x180) = uVar30;
      *(undefined8 *)(unaff_x27 + 0x178) = uVar28;
      *(undefined8 *)(unaff_x27 + 0x160) = uVar39;
      *(undefined8 *)(unaff_x27 + 0x158) = uVar38;
      if (*(long *)(unaff_x27 + 0x148) == -0x8000000000000000) goto LAB_1018c8ad8;
      *(undefined1 *)(unaff_x27 + 0x5b9) = 1;
      *(undefined8 *)(unaff_x27 + 0x1b8) = *(undefined8 *)(unaff_x27 + 0x170);
      *(undefined8 *)(unaff_x27 + 0x1b0) = *(undefined8 *)(unaff_x27 + 0x168);
      *(undefined8 *)(unaff_x27 + 0x1c8) = *(undefined8 *)(unaff_x27 + 0x180);
      *(undefined8 *)(unaff_x27 + 0x1c0) = *(undefined8 *)(unaff_x27 + 0x178);
      *(undefined8 *)(unaff_x27 + 0x1d0) = *(undefined8 *)(unaff_x27 + 0x188);
      lVar22 = unaff_x27 + 0x1d8;
      *(undefined8 *)(unaff_x27 + 0x198) = *(undefined8 *)(unaff_x27 + 0x150);
      *(undefined8 *)(unaff_x27 + 400) = *puVar23;
      *(undefined8 *)(unaff_x27 + 0x1a8) = *(undefined8 *)(unaff_x27 + 0x160);
      *(undefined8 *)(unaff_x27 + 0x1a0) = *(undefined8 *)(unaff_x27 + 0x158);
      __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                (lVar22,unaff_x27 + 400);
      *(undefined1 *)(unaff_x27 + 0x5b9) = 0;
      lVar33 = *(long *)(unaff_x27 + 0x1c8);
      *(long *)(unaff_x27 + 0x1f0) = *(long *)(unaff_x27 + 0x1c0);
      *(long *)(unaff_x27 + 0x1f8) = lVar33;
      *(undefined8 *)(unaff_x27 + 0x200) = *(undefined8 *)(unaff_x27 + 0x28);
      lVar17 = *(long *)(unaff_x27 + 0x1c0) + (*(long *)(lVar33 + 0x10) - 1U & 0xfffffffffffffff0) +
               0x10;
      uVar28 = 0;
      if (*(long *)(unaff_x27 + 0x1a8) != -0x8000000000000000) {
        uVar28 = *(undefined8 *)(unaff_x27 + 0x1b0);
      }
      *(undefined8 *)(unaff_x27 + 0x288) = uVar28;
      *(undefined8 *)(unaff_x27 + 0x290) = *(undefined8 *)(unaff_x27 + 0x1b8);
      *(long *)(unaff_x27 + 0x2e8) = lVar17;
      *(long *)(unaff_x27 + 0x2f0) = lVar33;
      *(long *)(unaff_x27 + 0x368) = lVar22;
      *(long *)(unaff_x27 + 0x370) = unaff_x27 + 0x18;
      unaff_x28 = (undefined1 *)(unaff_x27 + 0x37c);
      *(undefined1 *)(unaff_x27 + 0x37c) = 0;
      *(undefined1 *)(unaff_x27 + 0x37d) = *(undefined1 *)(unaff_x27 + 0x1d0);
      unaff_x23 = (ulong *)(unaff_x27 + 0x208);
      *(undefined1 *)(unaff_x27 + 0x37b) = 0;
      *(long *)(unaff_x27 + 0x298) = lVar17;
      *(long *)(unaff_x27 + 0x2a0) = lVar33;
      *(undefined1 *)(unaff_x27 + 0x378) = *(undefined1 *)(unaff_x27 + 0x1d0);
      *(undefined8 *)(unaff_x27 + 0x2a8) = uVar28;
      *(undefined8 *)(unaff_x27 + 0x2b0) = *(undefined8 *)(unaff_x27 + 0x1b8);
      *(long *)(unaff_x27 + 0x2f8) = unaff_x27 + 0x18;
      __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                (unaff_x27 + 0x300,lVar22);
      auVar40 = (**(code **)(*(long *)(unaff_x27 + 0x2a0) + 0x38))
                          (*(undefined8 *)(unaff_x27 + 0x298),unaff_x27 + 0x300,0);
      *(undefined1 (*) [16])(unaff_x27 + 0x380) = auVar40;
      (**(code **)(auVar40._8_8_ + 0x18))(&stack0x00000220,auVar40._0_8_,in_stack_00000010);
      cVar5 = (char)((ulong)in_stack_00000230 >> 0x10);
      if (cVar5 == '\x03') {
        uVar19 = 3;
        goto LAB_1018cbdb8;
      }
      uVar28 = *(undefined8 *)(unaff_x27 + 0x380);
      puVar23 = *(undefined8 **)(unaff_x27 + 0x388);
      pcVar15 = (code *)*puVar23;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar28);
      }
      if (puVar23[1] != 0) {
        _free(uVar28);
      }
      in_stack_00000220 = plVar25;
      if (cVar5 != '\x02') {
        if (((ulong)in_stack_00000230 & 1) != 0) {
          *(bool *)(unaff_x27 + 0x379) = *(char *)(unaff_x27 + 0x378) != '\x02';
          pauVar9 = (undefined1 (*) [16])
                    (*
                    ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                    )();
          if ((pauVar9[1][0] & 1) == 0) {
            auVar40 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar9 + 8) = auVar40._8_8_;
            pauVar9[1][0] = 1;
          }
          else {
            auVar40 = *pauVar9;
          }
          *(long *)*pauVar9 = auVar40._0_8_ + 1;
          *(undefined8 *)(unaff_x27 + 0x2c0) = 0;
          *(undefined8 *)(unaff_x27 + 0x2b8) = &UNK_108cea360;
          *(undefined8 *)(unaff_x27 + 0x2d0) = 0;
          *(undefined8 *)(unaff_x27 + 0x2c8) = 0;
          *(undefined1 (*) [16])(unaff_x27 + 0x2d8) = auVar40;
          uVar28 = *(undefined8 *)(unaff_x27 + 0x308);
          in_stack_00000220 = *(long **)(unaff_x27 + 0x310);
          plVar25 = (long *)0x1;
          if ((in_stack_00000220 != (long *)0x0) &&
             (plVar25 = (long *)_malloc(in_stack_00000220), plVar25 == (long *)0x0)) {
            func_0x0001087c9084(1,in_stack_00000220);
            goto LAB_1018ca324;
          }
          _memcpy(plVar25,uVar28,in_stack_00000220);
          FUN_101ba78c4((undefined8 *)(unaff_x27 + 0x2b8),&stack0x00000220);
          uVar28 = *(undefined8 *)(in_stack_00000068 + 0x308);
          lVar17 = *(long *)(in_stack_00000068 + 0x310);
          lVar22 = 1;
          if ((lVar17 != 0) && (lVar22 = _malloc(lVar17), lVar22 == 0)) {
            func_0x0001087c9084(1,lVar17);
            goto LAB_1018ca324;
          }
          _memcpy(lVar22,uVar28,lVar17);
          plVar10 = (long *)_malloc(0x20);
          if (plVar10 != (long *)0x0) {
            *(undefined8 *)(in_stack_00000068 + 0x208) = 1;
            *(long **)(in_stack_00000068 + 0x210) = plVar10;
            *plVar10 = lVar17;
            plVar10[1] = lVar22;
            plVar10[2] = lVar17;
            plVar10[3] = 0;
            *(undefined8 *)(in_stack_00000068 + 0x218) = 0;
            *(undefined8 *)(in_stack_00000068 + 0x220) = 1;
            *(undefined1 *)(in_stack_00000068 + 0x37a) = 0;
            in_stack_00000230 = in_stack_00000220;
            goto LAB_1018ca434;
          }
          func_0x0001087c9084(8,0x20);
          goto LAB_1018ca324;
        }
        goto LAB_1018cad34;
      }
      cVar5 = FUN_10192b4fc(plVar25);
      if (cVar5 != '\0') {
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
            ((bRam000000010b62bec8 - 1 < 2 ||
             ((bRam000000010b62bec8 != 0 &&
              (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                                 ), cVar5 != '\0')))))) &&
           (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                               ),
           lVar22 = 
           ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
           , (uVar21 & 1) != 0)) {
          lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                   + 0x30;
          uVar28 = *(undefined8 *)(unaff_x27 + 0x310);
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x27 + 0x308);
          *(undefined8 *)(unaff_x29 + -0x88) = uVar28;
          in_stack_00000090 = (long *)(unaff_x29 + -0x90);
          in_stack_00000098 =
               (long *)&
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
          ;
          in_stack_000000a0 = (code *)&stack0x000001f8;
          in_stack_000000a8 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cf0b76;
          *(long ***)(unaff_x29 + -0xb8) = &stack0x00000090;
          *(undefined8 *)(unaff_x29 + -0xe0) = 1;
          *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000608;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = lVar17;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar22,unaff_x29 + -0xe0);
          lVar22 = 
          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            uVar28 = *(undefined8 *)
                      (
                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                      + 0x20);
            uVar30 = *(undefined8 *)
                      (
                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar28;
            *(undefined8 *)(unaff_x29 + -0xa0) = uVar30;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xb0);
            if (iVar6 != 0) {
              in_stack_00000240 = *(code **)(lVar22 + 0x60);
              in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
              in_stack_00000230 = *(long **)(lVar22 + 0x58);
              in_stack_00000220 = (long *)0x1;
              if (*(long *)(lVar22 + 0x50) == 0) {
                in_stack_00000220 = (long *)0x2;
              }
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xe0;
              *(undefined1 *)(unaff_x29 + -0x78) = 1;
              in_stack_00000178 = (long *)(unaff_x29 + -0x80);
              in_stack_00000180 = (long *)&DAT_1061c2098;
              in_stack_00000238 = (code *)0x1;
              if (in_stack_00000240 == (code *)0x0) {
                in_stack_00000238 = (code *)0x2;
              }
              (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
            }
          }
        }
        else {
          lVar22 = 
          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            in_stack_00000168 =
                 *(undefined8 *)
                  (
                  ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                  + 0x20);
            in_stack_00000170 =
                 *(undefined8 *)
                  (
                  ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                  + 0x28);
            in_stack_00000160 = 1;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000160);
            if (iVar6 != 0) {
              lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                       + 0x30;
              uVar28 = *(undefined8 *)(unaff_x27 + 0x310);
              *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x27 + 0x308);
              *(undefined8 *)(unaff_x29 + -0x78) = uVar28;
              in_stack_00000090 = (long *)(unaff_x29 + -0x80);
              in_stack_00000098 =
                   (long *)&
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              in_stack_000000a0 = (code *)&stack0x000001f8;
              in_stack_000000a8 =
                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              *(undefined **)(unaff_x29 + -0x90) = &UNK_108cf0b76;
              *(long ***)(unaff_x29 + -0x88) = &stack0x00000090;
              *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x90;
              *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25d1e8;
              *(undefined8 *)(unaff_x29 + -0xe0) = 1;
              *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xc0;
              *(undefined8 *)(unaff_x29 + -0xd0) = 1;
              *(long *)(unaff_x29 + -200) = lVar17;
              in_stack_00000240 = *(code **)(lVar22 + 0x60);
              in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
              in_stack_00000230 = *(long **)(lVar22 + 0x58);
              in_stack_00000220 = (long *)0x1;
              if (*(long *)(lVar22 + 0x50) == 0) {
                in_stack_00000220 = (long *)0x2;
              }
              in_stack_00000178 = (long *)(unaff_x29 + -0xe0);
              in_stack_00000180 = (long *)CONCAT71(in_stack_00000180._1_7_,1);
              *(long ***)(unaff_x29 + -0xb0) = &stack0x00000178;
              *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
              in_stack_00000238 = (code *)0x1;
              if (in_stack_00000240 == (code *)0x0) {
                in_stack_00000238 = (code *)0x2;
              }
              (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
            }
          }
        }
        if (((ulong)plVar25 & 3) == 1) {
          uVar28 = *(undefined8 *)((long)plVar25 + -1);
          puVar23 = *(undefined8 **)((long)plVar25 + 7);
          if ((code *)*puVar23 != (code *)0x0) {
            (*(code *)*puVar23)(uVar28);
          }
          goto LAB_1018c9b3c;
        }
        goto LAB_1018cad34;
      }
    } while (((ulong)plVar25 & 3) != 1);
    uVar28 = *(undefined8 *)((long)plVar25 + -1);
    puVar23 = *(undefined8 **)((long)plVar25 + 7);
    if ((code *)*puVar23 != (code *)0x0) {
      (*(code *)*puVar23)(uVar28);
    }
LAB_1018c9b3c:
    puVar11 = (undefined1 *)((long)plVar25 + -1);
    if (puVar23[1] != 0) {
      _free(uVar28);
    }
  } while( true );
LAB_1018cb378:
  if (lVar29 != 0) {
    _free(lVar32);
  }
LAB_1018cb458:
  uVar28 = *(undefined8 *)(lVar22 + 0x38);
  lVar22 = *(long *)(lVar22 + 0x40);
  if (lVar22 == 0) {
    lVar29 = 1;
  }
  else {
    lVar29 = _malloc(lVar22);
    if (lVar29 == 0) {
      func_0x0001087c9084(1,lVar22);
      goto LAB_1018ca324;
    }
  }
  _memcpy(lVar29,uVar28,lVar22);
  uVar26 = in_stack_00000030[3];
  uVar8 = in_stack_00000030[2];
  FUN_1019827c0(lVar29,lVar22,&stack0x000004c0);
  lVar32 = 0;
  uVar21 = (uVar26 ^ 0x646f72616e646f6d) + (uVar8 ^ 0x736f6d6570736575);
  uVar18 = uVar21 ^ ((uVar26 ^ 0x646f72616e646f6d) >> 0x33 | (uVar26 ^ 0x6f72616e646f6d) << 0xd);
  uVar8 = (uVar26 ^ 0x7465646279746573) + (uVar8 ^ 0x6c7967656e657261);
  uVar20 = uVar8 + uVar18;
  uVar8 = uVar8 ^ ((uVar26 ^ 0x7465646279746573) >> 0x30 | (uVar26 ^ 0x65646279746573) << 0x10);
  uVar26 = uVar20 ^ (uVar18 >> 0x2f | uVar18 << 0x11);
  uVar21 = uVar8 + (uVar21 >> 0x20 | uVar21 << 0x20);
  uVar18 = uVar21 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
  uVar21 = uVar21 + uVar26;
  uVar26 = uVar21 ^ (uVar26 >> 0x33 | uVar26 << 0xd);
  uVar8 = uVar18 + ((uVar20 >> 0x20 | uVar20 << 0x20) ^ 0xff);
  uVar20 = uVar26 + uVar8;
  uVar8 = uVar8 ^ (uVar18 >> 0x30 | uVar18 << 0x10);
  uVar26 = uVar20 ^ (uVar26 >> 0x2f | uVar26 << 0x11);
  uVar21 = uVar8 + (uVar21 >> 0x20 | uVar21 << 0x20);
  uVar18 = uVar26 + uVar21;
  uVar21 = uVar21 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
  uVar26 = uVar18 ^ (uVar26 >> 0x33 | uVar26 << 0xd);
  uVar8 = uVar21 + (uVar20 >> 0x20 | uVar20 << 0x20);
  uVar20 = uVar26 + uVar8;
  uVar8 = uVar8 ^ (uVar21 >> 0x30 | uVar21 << 0x10);
  uVar26 = uVar20 ^ (uVar26 >> 0x2f | uVar26 << 0x11);
  uVar21 = uVar8 + (uVar18 >> 0x20 | uVar18 << 0x20);
  uVar18 = uVar21 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
  uVar26 = uVar26 + uVar21 ^ (uVar26 >> 0x33 | uVar26 << 0xd);
  uVar21 = uVar18 + (uVar20 >> 0x20 | uVar20 << 0x20);
  uVar8 = uVar26 + uVar21;
  uVar21 = uVar21 ^ (uVar18 >> 0x30 | uVar18 << 0x10);
  uVar8 = (uVar21 >> 0x2b | uVar21 << 0x15) ^ (uVar26 >> 0x2f | uVar26 << 0x11) ^
          (uVar8 >> 0x20 | uVar8 << 0x20) ^ uVar8;
  lVar7 = *(long *)(in_stack_00000068 + 0xf8);
  uVar20 = *(ulong *)(in_stack_00000068 + 0x100);
  bVar4 = (byte)(uVar8 >> 0x38);
  bVar13 = bVar4 >> 1;
  uVar18 = uVar8 & uVar20;
  uVar28 = *(undefined8 *)(lVar7 + uVar18);
  uVar21 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar13),
                    CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar13),
                             CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar13),
                                      CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar13),
                                               CONCAT13(-((byte)((ulong)uVar28 >> 0x18) == bVar13),
                                                        CONCAT12(-((byte)((ulong)uVar28 >> 0x10) ==
                                                                  bVar13),CONCAT11(-((byte)((ulong)
                                                  uVar28 >> 8) == bVar13),-((byte)uVar28 == bVar13))
                                                  ))))));
  while( true ) {
    uVar21 = uVar21 & 0x8080808080808080;
    if (uVar21 != 0) {
      if (lVar22 == 0) {
        do {
          uVar26 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
          plVar25 = *(long **)(lVar7 + (uVar18 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                 3) & uVar20) * -0x28 + -0x20);
          in_stack_00000230 = (long *)CONCAT71((int7)((ulong)in_stack_00000230 >> 8),6);
          uVar26 = FUN_1019a7450(&stack0x00000220,&stack0x000004c0);
          if ((uVar26 & 1) != 0) goto LAB_1018cb708;
          uVar21 = uVar21 - 1 & uVar21;
        } while (uVar21 != 0);
      }
      else {
        do {
          uVar26 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
          plVar25 = *(long **)(lVar7 + (uVar18 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                 3) & uVar20) * -0x28 + -0x20);
          in_stack_00000230 = (long *)CONCAT71((int7)((ulong)in_stack_00000230 >> 8),6);
          uVar26 = FUN_1019a7450(&stack0x00000220,&stack0x000004c0);
          if ((uVar26 & 1) != 0) goto LAB_1018cb708;
          uVar21 = uVar21 - 1 & uVar21;
        } while (uVar21 != 0);
      }
    }
    bVar31 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar28 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar28 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar28 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar28 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar28 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar28 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar28 >> 8) == -1),
                                                           -((char)uVar28 == -1)))))))),1);
    if ((bVar31 & 1) != 0) break;
    lVar32 = lVar32 + 8;
    uVar18 = uVar18 + lVar32 & uVar20;
    uVar28 = *(undefined8 *)(lVar7 + uVar18);
    uVar21 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar13),
                      CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar13),
                               CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar13),
                                        CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar13),
                                                 CONCAT13(-((byte)((ulong)uVar28 >> 0x18) == bVar13)
                                                          ,CONCAT12(-((byte)((ulong)uVar28 >> 0x10)
                                                                     == bVar13),
                                                                    CONCAT11(-((byte)((ulong)uVar28
                                                                                     >> 8) == bVar13
                                                                              ),-((byte)uVar28 ==
                                                                                 bVar13))))))));
  }
  if (*in_stack_00000030 == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hdc1bae1ac9828523E
              (in_stack_00000068 + 0xf8,1,in_stack_00000030 + 2,1);
  }
  if (lVar22 != -0x8000000000000000) {
    lVar7 = *(long *)(in_stack_00000068 + 0x1f8);
    plVar10 = *(long **)(in_stack_00000068 + 0x1f0);
    lVar32 = *plVar10;
    *plVar10 = lVar32 + 1;
    if (lVar32 < 0) goto LAB_1018ca324;
    plVar27 = *(long **)(in_stack_00000068 + 0xf8);
    uVar21 = *(ulong *)(in_stack_00000068 + 0x100);
    uVar8 = uVar21 & uVar8;
    lVar32 = *(long *)((long)plVar27 + uVar8);
    uVar20 = CONCAT17(-(lVar32 < 0),
                      CONCAT16(-((char)((ulong)lVar32 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar32 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar32 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar32 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar32 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar32 >> 8) < '\0'),-((char)lVar32 < '\0'))))))))
    ;
    if (uVar20 == 0) {
      lVar32 = 8;
      do {
        uVar8 = uVar8 + lVar32 & uVar21;
        lVar12 = *(long *)((long)plVar27 + uVar8);
        uVar20 = CONCAT17(-(lVar12 < 0),
                          CONCAT16(-((char)((ulong)lVar12 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar12 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar12 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar12 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar12 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar12 >> 8) < '\0'),-((char)lVar12 < '\0'))))))))
        ;
        lVar32 = lVar32 + 8;
      } while (uVar20 == 0);
    }
    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar8 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar21;
    uVar8 = (ulong)*(char *)((long)plVar27 + uVar20);
    if (-1 < *(char *)((long)plVar27 + uVar20)) {
      lVar32 = *plVar27;
      uVar8 = CONCAT17(-(lVar32 < 0),
                       CONCAT16(-((char)((ulong)lVar32 >> 0x30) < '\0'),
                                CONCAT15(-((char)((ulong)lVar32 >> 0x28) < '\0'),
                                         CONCAT14(-((char)((ulong)lVar32 >> 0x20) < '\0'),
                                                  CONCAT13(-((char)((ulong)lVar32 >> 0x18) < '\0'),
                                                           CONCAT12(-((char)((ulong)lVar32 >> 0x10)
                                                                     < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar32 >> 8) < '\0'),-((char)lVar32 < '\0'))
                                                  ))))));
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3;
      uVar8 = (ulong)*(byte *)((long)plVar27 + uVar20);
    }
    *(byte *)((long)plVar27 + uVar20) = bVar4 >> 1;
    *(byte *)((long)plVar27 + (uVar20 - 8 & uVar21) + 8) = bVar4 >> 1;
    plVar27[uVar20 * -5 + -5] = lVar22;
    plVar27[uVar20 * -5 + -4] = lVar29;
    plVar27[uVar20 * -5 + -3] = lVar22;
    plVar27[uVar20 * -5 + -1] = lVar7;
    plVar27[uVar20 * -5 + -2] = (long)plVar10;
    in_stack_00000030[1] = in_stack_00000030[1] + 1;
    *in_stack_00000030 = *in_stack_00000030 - (uVar8 & 1);
  }
LAB_1018cafa8:
  lVar22 = lVar33;
  unaff_x27 = in_stack_00000068;
  if (lVar33 == lVar17 + uVar24 * 0x148) goto LAB_1018cad6c;
  goto LAB_1018cafb4;
LAB_1018cb708:
  if (lVar22 != 0) {
    _free(lVar29);
  }
  goto LAB_1018cafa8;
  while( true ) {
    lVar22 = lVar22 + 1;
    lVar33 = lVar33 + 0x148;
    if (lVar22 == 1) break;
LAB_1018c8b50:
    lVar32 = lVar29 + lVar33;
    uVar28 = *(undefined8 *)(lVar32 + 0x38);
    lVar32 = *(long *)(lVar32 + 0x40);
    if (lVar32 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(lVar32);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar32);
        goto LAB_1018ca324;
      }
    }
    _memcpy(lVar7,uVar28,lVar32);
    uVar21 = FUN_101ba78c4(&stack0x00000090,&stack0x000004c0);
    if ((uVar21 & 1) != 0) {
      lVar29 = lVar29 + lVar33;
      FUN_10195601c(lVar29);
      if (lVar22 != 0) {
        lVar22 = -lVar22;
        lVar33 = 1;
        goto LAB_1018c8c0c;
      }
      lVar33 = 1;
      goto LAB_1018c8c7c;
    }
  }
  lVar33 = 0;
  goto LAB_1018c8c7c;
  while( true ) {
    _memcpy(lVar7,uVar28,lVar29);
    iVar6 = FUN_101ba78c4(&stack0x00000090,&stack0x000004c0);
    if (iVar6 == 0) {
      _memcpy(lVar32 + lVar33 * -0x148,lVar32,0x148);
    }
    else {
      lVar33 = lVar33 + 1;
      FUN_10195601c(lVar32);
    }
    lVar22 = lVar22 + -1;
    lVar29 = lVar32;
    if (lVar22 == 0) break;
LAB_1018c8c0c:
    lVar32 = lVar29 + 0x148;
    uVar28 = *(undefined8 *)(lVar29 + 0x180);
    lVar29 = *(long *)(lVar29 + 0x188);
    if (lVar29 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(lVar29);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar29);
        goto LAB_1018ca324;
      }
    }
  }
LAB_1018c8c7c:
  lVar17 = lVar17 - lVar33;
  *(long *)(in_stack_00000068 + 0x28) = lVar17;
  lVar29 = *(long *)(in_stack_00000068 + 0x20);
  lVar33 = in_stack_00000068;
  if (pauVar9[1][0] == '\x01') {
    lVar22 = *(long *)*pauVar9;
  }
  else {
    auVar40 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    lVar22 = auVar40._0_8_;
    *(long *)(*pauVar9 + 8) = auVar40._8_8_;
    pauVar9[1][0] = 1;
  }
LAB_1018c8ca0:
  *(long *)*pauVar9 = lVar22 + 1;
  if (lVar17 != 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc3b8f914eb258a7E
              (&stack0x000004c0,lVar17,&stack0x000004e0,1);
    plVar25 = (long *)(lVar29 + 0x40);
    do {
      lVar22 = plVar25[-1];
      lVar29 = *plVar25;
      if (lVar29 == 0) {
        lVar32 = 1;
      }
      else {
        lVar32 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar29,1);
        if (lVar32 == 0) {
          func_0x0001087c9084(1,lVar29);
          goto LAB_1018ca324;
        }
      }
      _memcpy(lVar32,lVar22,lVar29);
      FUN_101ba78c4(&stack0x000004c0,&stack0x00000220);
      plVar25 = plVar25 + 0x29;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  plVar25 = *(long **)(lVar33 + 200);
  lVar17 = *(long *)(lVar33 + 0xe0);
  lVar22 = 0;
  unaff_x27 = lVar33;
  if (lVar17 != 0) {
    uVar24 = *(ulong *)(lVar33 + 0xd0);
    plVar27 = plVar25 + 1;
    lVar22 = *plVar25;
    uVar21 = CONCAT17(-(-1 < lVar22),
                      CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar22 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
             0x8080808080808080;
    lVar22 = *(long *)(lVar33 + 0xd8);
    plVar10 = plVar25;
    lVar29 = lVar17;
    do {
      while (uVar21 == 0) {
        lVar32 = *plVar27;
        plVar10 = plVar10 + -0x30;
        plVar27 = plVar27 + 1;
        uVar21 = CONCAT17(-(-1 < lVar32),
                          CONCAT16(-(-1 < (char)((ulong)lVar32 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar32 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar32 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar32 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar32
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar32 >> 8)),-(-1 < (char)lVar32)))))))) &
                 0x8080808080808080;
      }
      uVar8 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      plVar14 = plVar10 + (long)-(int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) * 6;
      uVar8 = FUN_101ba5c3c(&stack0x00000370,plVar14[-5],plVar14[-4]);
      if ((uVar8 & 1) == 0) {
        lVar32 = ((long)plVar25 - (long)plVar14 >> 4) * -0x5555555555555555;
        puVar23 = (undefined8 *)((long)plVar25 + (lVar32 - 8U & uVar24));
        uVar28 = *puVar23;
        uVar30 = *(undefined8 *)((long)plVar25 + lVar32);
        uVar8 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                         CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                  CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                           CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1),
                                                    CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                             CONCAT12(-((char)((ulong)uVar30 >> 0x10
                                                                              ) == -1),
                                                                      CONCAT11(-((char)((ulong)
                                                  uVar30 >> 8) == -1),-((char)uVar30 == -1))))))));
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) +
            ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar28 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar28 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar28 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar28 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar28
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar28 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar28 >> 8) == -1),
                                                           -((char)uVar28 == -1))))))))) >> 3) < 8)
        {
          lVar22 = lVar22 + 1;
          *(long *)(in_stack_00000068 + 0xd8) = lVar22;
          *(undefined1 *)((long)plVar25 + lVar32) = 0xff;
          *(undefined1 *)(puVar23 + 1) = 0xff;
          *(long *)(in_stack_00000068 + 0xe0) = lVar29 + -1;
          lVar32 = plVar14[-6];
        }
        else {
          *(undefined1 *)((long)plVar25 + lVar32) = 0x80;
          *(undefined1 *)(puVar23 + 1) = 0x80;
          *(long *)(in_stack_00000068 + 0xe0) = lVar29 + -1;
          lVar32 = plVar14[-6];
        }
        if (lVar32 != 0) {
          _free(plVar14[-5]);
        }
        lVar29 = lVar29 + -1;
        if (plVar14[-3] != 0) {
          _free(plVar14[-2]);
        }
      }
      uVar21 = uVar21 - 1 & uVar21;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    plVar25 = *(long **)(in_stack_00000068 + 200);
    lVar22 = *(long *)(in_stack_00000068 + 0xe0);
    unaff_x27 = in_stack_00000068;
  }
  plVar10 = plVar25 + 1;
  lVar17 = *plVar25;
  if (pauVar9[1][0] == '\x01') {
    lVar29 = *(long *)*pauVar9;
  }
  else {
    auVar40 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    lVar29 = auVar40._0_8_;
    *(long *)(*pauVar9 + 8) = auVar40._8_8_;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = lVar29 + 1;
  if (lVar22 != 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc3b8f914eb258a7E
              (&stack0x000004c0,lVar22,&stack0x000004e0,1);
  }
  uVar21 = CONCAT17(-(-1 < lVar17),
                    CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                             CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                      CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                               CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                        CONCAT12(-(-1 < (char)((ulong)lVar17 >> 0x10
                                                                              )),
                                                                 CONCAT11(-(-1 < (char)((ulong)
                                                  lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
           0x8080808080808080;
  do {
    if (uVar21 == 0) {
      plVar27 = plVar10;
      if (lVar22 == 0) {
        lVar22 = *(long *)(unaff_x27 + 0xc0);
        if (lVar22 == 0) goto LAB_1018c8ffc;
        lVar29 = 0;
        *(undefined8 *)(unaff_x27 + 0xc0) = 0;
        lVar32 = *(long *)(unaff_x27 + 0xb8);
        lVar17 = 1 - lVar22;
        goto LAB_1018c8f48;
      }
      do {
        plVar10 = plVar27 + 1;
        lVar17 = *plVar27;
        plVar25 = plVar25 + -0x30;
        uVar21 = CONCAT17(-(-1 < lVar17),
                          CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar17
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
                 0x8080808080808080;
        plVar27 = plVar10;
      } while (uVar21 == 0);
    }
    uVar24 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    iVar6 = (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
    lVar17 = plVar25[(long)-iVar6 * 6 + -2];
    lVar29 = plVar25[(long)-iVar6 * 6 + -1];
    if (lVar29 == 0) {
      lVar32 = 1;
    }
    else {
      lVar32 = _malloc(lVar29);
      if (lVar32 == 0) break;
    }
    _memcpy(lVar32,lVar17,lVar29);
    FUN_101ba78c4(&stack0x000004c0,&stack0x00000490);
    uVar21 = uVar21 - 1 & uVar21;
    lVar22 = lVar22 + -1;
  } while( true );
  func_0x0001087c9084(1,lVar29);
  goto LAB_1018ca324;
LAB_1018ca434:
  if (*(long *)(in_stack_00000068 + 0x220) != 0) {
    lVar22 = *(long *)(in_stack_00000068 + 0x218);
    uVar21 = lVar22 + 1;
    uVar24 = 0;
    if (*(ulong *)(in_stack_00000068 + 0x208) <= uVar21) {
      uVar24 = *(ulong *)(in_stack_00000068 + 0x208);
    }
    *(ulong *)(in_stack_00000068 + 0x218) = uVar21 - uVar24;
    *(long *)(in_stack_00000068 + 0x220) = *(long *)(in_stack_00000068 + 0x220) + -1;
    puVar23 = (undefined8 *)(*(long *)(in_stack_00000068 + 0x210) + lVar22 * 0x20);
    uVar36 = *puVar23;
    uVar30 = puVar23[3];
    uVar28 = puVar23[2];
    *(undefined8 *)(in_stack_00000068 + 0x230) = puVar23[1];
    *(undefined8 *)(in_stack_00000068 + 0x228) = uVar36;
    *(undefined8 *)(in_stack_00000068 + 0x240) = uVar30;
    *(undefined8 *)(in_stack_00000068 + 0x238) = uVar28;
    if (*(long *)(in_stack_00000068 + 0x228) == -0x8000000000000000) goto LAB_1018ca704;
    uVar30 = puVar23[1];
    uVar28 = *puVar23;
    *(undefined8 *)(in_stack_00000068 + 0x328) = puVar23[2];
    *(undefined8 *)(in_stack_00000068 + 800) = uVar30;
    *(undefined8 *)(in_stack_00000068 + 0x318) = uVar28;
    *(undefined8 *)(in_stack_00000068 + 0x330) = *(undefined8 *)(in_stack_00000068 + 0x240);
    auVar40 = (**(code **)(*(long *)(in_stack_00000068 + 0x2a0) + 0x40))
                        (*(undefined8 *)(in_stack_00000068 + 0x298),
                         (undefined8 *)(in_stack_00000068 + 0x318),0);
    *(undefined1 (*) [16])(in_stack_00000068 + 0x380) = auVar40;
    (**(code **)(auVar40._8_8_ + 0x18))(&stack0x00000220,auVar40._0_8_,in_stack_00000010);
    if (in_stack_00000220 == (long *)0x8000000000000001) {
      uVar19 = 4;
      unaff_x27 = in_stack_00000068;
LAB_1018cbdb8:
      *unaff_x28 = uVar19;
      *in_stack_00000008 = 0x8000000000000000;
      uVar19 = 3;
      goto LAB_1018cbdcc;
    }
    uVar28 = *(undefined8 *)(in_stack_00000068 + 0x380);
    puVar23 = *(undefined8 **)(in_stack_00000068 + 0x388);
    pcVar15 = (code *)*puVar23;
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(uVar28);
    }
    if (puVar23[1] != 0) {
      _free(uVar28);
    }
    if (in_stack_00000220 == (long *)0x8000000000000000) {
      in_stack_000001d8 = plVar25;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
          ((bRam000000010b62bf10 - 1 < 2 ||
           ((bRam000000010b62bf10 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                               ), cVar5 != '\0')))))) &&
         (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                             ),
         lVar22 = 
         ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
         , (uVar21 & 1) != 0)) {
        lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                 + 0x30;
        uVar28 = *(undefined8 *)(in_stack_00000068 + 0x328);
        *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(in_stack_00000068 + 800);
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar28;
        in_stack_00000090 = (long *)(unaff_x29 + -0xc0);
        in_stack_00000098 =
             (long *)&
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        in_stack_000000a0 = (code *)&stack0x000001d8;
        in_stack_000000a8 =
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x000001f8;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long *)(unaff_x29 + -200) = lVar17;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar22,unaff_x29 + -0xe0);
        lVar22 = 
        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          uVar28 = *(undefined8 *)
                    (
                    ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                    + 0x20);
          uVar30 = *(undefined8 *)
                    (
                    ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                    + 0x28);
          *(undefined8 *)(unaff_x29 + -0xb0) = 1;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar28;
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar30;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xb0);
          if (iVar6 != 0) {
            in_stack_00000240 = *(code **)(lVar22 + 0x60);
            in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
            plVar25 = *(long **)(lVar22 + 0x50);
            in_stack_00000230 = *(long **)(lVar22 + 0x58);
            in_stack_00000220 = (long *)0x1;
            if (plVar25 == (long *)0x0) {
              in_stack_00000220 = (long *)0x2;
            }
            *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xe0;
            *(undefined1 *)(unaff_x29 + -0x88) = 1;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x90;
            *(undefined **)(unaff_x29 + -0x78) = &DAT_1061c2098;
            in_stack_00000238 = (code *)0x1;
            if (in_stack_00000240 == (code *)0x0) {
              in_stack_00000238 = (code *)0x2;
            }
            (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
          }
        }
      }
      else {
        lVar22 = 
        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          in_stack_00000198 =
               *(undefined8 *)
                (
                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                + 0x20);
          in_stack_000001a0 =
               *(undefined8 *)
                (
                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                + 0x28);
          in_stack_00000190 = 1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000190);
          if (iVar6 != 0) {
            lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                     + 0x30;
            uVar28 = *(undefined8 *)(in_stack_00000068 + 0x328);
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(in_stack_00000068 + 800);
            *(undefined8 *)(unaff_x29 + -0x88) = uVar28;
            in_stack_00000090 = (long *)(unaff_x29 + -0x90);
            in_stack_00000098 =
                 (long *)&
                         __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            in_stack_000000a0 = (code *)&stack0x000001d8;
            in_stack_000000a8 =
                 __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cf0b9c;
            *(long ***)(unaff_x29 + -0xb8) = &stack0x00000090;
            *(undefined8 *)(unaff_x29 + -0xe0) = 1;
            *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000608;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = lVar17;
            in_stack_00000240 = *(code **)(lVar22 + 0x60);
            in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
            plVar25 = *(long **)(lVar22 + 0x50);
            in_stack_00000230 = *(long **)(lVar22 + 0x58);
            in_stack_00000220 = (long *)0x1;
            if (plVar25 == (long *)0x0) {
              in_stack_00000220 = (long *)0x2;
            }
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xe0;
            *(undefined1 *)(unaff_x29 + -0x78) = 1;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x80;
            *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
            in_stack_00000238 = (code *)0x1;
            if (in_stack_00000240 == (code *)0x0) {
              in_stack_00000238 = (code *)0x2;
            }
            (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
          }
        }
      }
      if (((ulong)in_stack_000001d8 & 3) == 1) {
        puVar23 = (undefined8 *)((long)in_stack_000001d8 + -1);
        uVar28 = *puVar23;
        puVar16 = *(undefined8 **)((long)in_stack_000001d8 + 7);
        pcVar15 = (code *)*puVar16;
        if (pcVar15 != (code *)0x0) {
          (*pcVar15)(uVar28);
        }
        if (puVar16[1] != 0) {
          _free(uVar28);
        }
LAB_1018cc170:
        _free(puVar23);
      }
    }
    else {
      *(undefined1 *)(in_stack_00000068 + 0x37b) = 0;
      *(long **)(in_stack_00000068 + 0x248) = plVar25;
      *(long **)(in_stack_00000068 + 0x250) = plVar25;
      *(long **)(in_stack_00000068 + 600) = in_stack_00000220;
      *(long **)(in_stack_00000068 + 0x260) = plVar25 + (long)in_stack_00000230 * 4;
      in_stack_00000178 = in_stack_00000220;
      in_stack_00000180 = plVar25;
      in_stack_00000188 = in_stack_00000230;
      while( true ) {
        puVar23 = *(undefined8 **)(in_stack_00000068 + 0x250);
        if (puVar23 == *(undefined8 **)(in_stack_00000068 + 0x260)) break;
        *(undefined8 **)(in_stack_00000068 + 0x250) = puVar23 + 4;
        uVar36 = *puVar23;
        uVar30 = puVar23[3];
        uVar28 = puVar23[2];
        *(undefined8 *)(in_stack_00000068 + 0x270) = puVar23[1];
        *(undefined8 *)(in_stack_00000068 + 0x268) = uVar36;
        *(undefined8 *)(in_stack_00000068 + 0x280) = uVar30;
        *(undefined8 *)(in_stack_00000068 + 0x278) = uVar28;
        puVar16 = puVar23 + 4;
        if (*(long *)(in_stack_00000068 + 0x268) == -0x8000000000000000) goto LAB_1018cc130;
        lVar22 = puVar23[2];
        uVar28 = *puVar23;
        *(undefined8 *)(in_stack_00000068 + 0x340) = puVar23[1];
        *(undefined8 *)(in_stack_00000068 + 0x338) = uVar28;
        *(long *)(in_stack_00000068 + 0x348) = lVar22;
        if ((lVar22 == 0) || (**(char **)(in_stack_00000068 + 0x340) != '.')) {
          uVar28 = *(undefined8 *)(in_stack_00000068 + 800);
          uVar30 = *(undefined8 *)(in_stack_00000068 + 0x328);
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&stack0x00000090);
          plVar10 = in_stack_00000098;
          __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                    (&stack0x00000220,in_stack_00000098,in_stack_000000a0,uVar28,uVar30);
          *(long **)(in_stack_00000068 + 0x358) = plVar25;
          *(undefined8 *)(in_stack_00000068 + 0x350) = in_stack_00000220;
          *(long **)(in_stack_00000068 + 0x360) = in_stack_00000230;
          if (in_stack_00000090 != (long *)0x0) {
            _free(plVar10);
          }
          auVar40 = (**(code **)(*(long *)(in_stack_00000068 + 0x2a0) + 0x38))
                              (*(undefined8 *)(in_stack_00000068 + 0x298),
                               (undefined8 *)(in_stack_00000068 + 0x350),0);
          *(undefined1 (*) [16])(in_stack_00000068 + 0x380) = auVar40;
          (**(code **)(auVar40._8_8_ + 0x18))(&stack0x00000220,auVar40._0_8_,in_stack_00000010);
          cVar5 = (char)((ulong)in_stack_00000230 >> 0x10);
          if (cVar5 == '\x03') {
            uVar19 = 5;
            unaff_x27 = in_stack_00000068;
            goto LAB_1018cbdb8;
          }
          uVar28 = *(undefined8 *)(in_stack_00000068 + 0x380);
          puVar23 = *(undefined8 **)(in_stack_00000068 + 0x388);
          pcVar15 = (code *)*puVar23;
          if (pcVar15 != (code *)0x0) {
            (*pcVar15)(uVar28);
          }
          if (puVar23[1] != 0) {
            _free(uVar28);
          }
          if (cVar5 == '\x02') {
            in_stack_000001d8 = in_stack_00000220;
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
                ((bRam000000010b62bf28 - 1 < 2 ||
                 ((bRam000000010b62bf28 != 0 &&
                  (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                     ), cVar5 != '\0')))))) &&
               (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                   ),
               lVar22 = 
               ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
               , (uVar21 & 1) != 0)) {
              lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                       + 0x30;
              uVar28 = *(undefined8 *)(in_stack_00000068 + 0x360);
              *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(in_stack_00000068 + 0x358);
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar28;
              in_stack_00000090 = (long *)(unaff_x29 + -0xc0);
              in_stack_00000098 =
                   (long *)&
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              in_stack_000000a0 = (code *)&stack0x000001d8;
              in_stack_000000a8 =
                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              *(undefined8 *)(unaff_x29 + -0xe0) = 1;
              *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x000001f8;
              *(undefined8 *)(unaff_x29 + -0xd0) = 1;
              *(long *)(unaff_x29 + -200) = lVar17;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar22,unaff_x29 + -0xe0);
              lVar22 = 
              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                uVar28 = *(undefined8 *)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                          + 0x20);
                uVar30 = *(undefined8 *)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                          + 0x28);
                *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                *(undefined8 *)(unaff_x29 + -0xa8) = uVar28;
                *(undefined8 *)(unaff_x29 + -0xa0) = uVar30;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xb0);
                if (iVar6 != 0) {
                  in_stack_00000240 = *(code **)(lVar22 + 0x60);
                  in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
                  plVar25 = *(long **)(lVar22 + 0x50);
                  in_stack_00000230 = *(long **)(lVar22 + 0x58);
                  in_stack_00000220 = (long *)0x1;
                  if (plVar25 == (long *)0x0) {
                    in_stack_00000220 = (long *)0x2;
                  }
                  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xe0;
                  *(undefined1 *)(unaff_x29 + -0x88) = 1;
                  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x90;
                  *(undefined **)(unaff_x29 + -0x78) = &DAT_1061c2098;
                  in_stack_00000238 = (code *)0x1;
                  if (in_stack_00000240 == (code *)0x0) {
                    in_stack_00000238 = (code *)0x2;
                  }
                  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
                }
              }
            }
            else {
              lVar22 = 
              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                in_stack_000001b0 =
                     *(undefined8 *)
                      (
                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                      + 0x20);
                in_stack_000001b8 =
                     *(undefined8 *)
                      (
                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                      + 0x28);
                in_stack_000001a8 = 1;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001a8);
                if (iVar6 != 0) {
                  lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                           + 0x30;
                  uVar28 = *(undefined8 *)(in_stack_00000068 + 0x360);
                  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(in_stack_00000068 + 0x358);
                  *(undefined8 *)(unaff_x29 + -0x88) = uVar28;
                  in_stack_00000090 = (long *)(unaff_x29 + -0x90);
                  in_stack_00000098 =
                       (long *)&
                               __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  in_stack_000000a0 = (code *)&stack0x000001d8;
                  in_stack_000000a8 =
                       __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                  ;
                  *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cf0bee;
                  *(long ***)(unaff_x29 + -0xb8) = &stack0x00000090;
                  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                  *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000608;
                  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                  *(long *)(unaff_x29 + -200) = lVar17;
                  in_stack_00000240 = *(code **)(lVar22 + 0x60);
                  in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
                  plVar25 = *(long **)(lVar22 + 0x50);
                  in_stack_00000230 = *(long **)(lVar22 + 0x58);
                  in_stack_00000220 = (long *)0x1;
                  if (plVar25 == (long *)0x0) {
                    in_stack_00000220 = (long *)0x2;
                  }
                  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xe0;
                  *(undefined1 *)(unaff_x29 + -0x78) = 1;
                  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x80;
                  *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
                  in_stack_00000238 = (code *)0x1;
                  if (in_stack_00000240 == (code *)0x0) {
                    in_stack_00000238 = (code *)0x2;
                  }
                  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
                }
              }
            }
            if (((ulong)in_stack_000001d8 & 3) == 1) {
              puVar23 = (undefined8 *)((long)in_stack_000001d8 + -1);
              uVar28 = *puVar23;
              puVar16 = *(undefined8 **)((long)in_stack_000001d8 + 7);
              if ((code *)*puVar16 != (code *)0x0) {
                (*(code *)*puVar16)(uVar28);
              }
              goto LAB_1018cc25c;
            }
          }
          else if (((ulong)in_stack_00000230 & 0x10000) == 0) {
            if (((ulong)in_stack_00000230 & 1) == 0) {
              if (((((ulong)in_stack_00000230 & 0x100) != 0) &&
                  (*(long *)(in_stack_00000068 + 0x348) == 8)) &&
                 (**(long **)(in_stack_00000068 + 0x340) == 0x646d2e4c4c494b53)) {
                *(undefined8 *)(in_stack_00000068 + 0x380) =
                     *(undefined8 *)(in_stack_00000068 + 0x2a8);
                *(undefined8 *)(in_stack_00000068 + 0x388) =
                     *(undefined8 *)(in_stack_00000068 + 0x2b0);
                lVar22 = in_stack_00000030[0x32];
                *(long *)(in_stack_00000068 + 0x3b8) = in_stack_00000030[0x33];
                *(long *)(in_stack_00000068 + 0x3b0) = lVar22;
                *(long *)(in_stack_00000068 + 0x470) = in_stack_00000068 + 0x350;
                *(undefined1 *)(in_stack_00000068 + 0x47c) = 0;
                *(undefined1 *)(in_stack_00000068 + 0x47d) =
                     *(undefined1 *)(in_stack_00000068 + 0x378);
                FUN_1018c4f88(&stack0x00000220,in_stack_00000068 + 0x380,in_stack_00000010);
                if (in_stack_00000220 == (long *)0x8000000000000001) {
                  uVar19 = 7;
                  unaff_x27 = in_stack_00000068;
                  goto LAB_1018cbdb8;
                }
                _memcpy(&stack0x00000370,&stack0x00000250,0x118);
                FUN_10196a9b8(in_stack_00000068 + 0x380);
                if (in_stack_00000220 == (long *)0x8000000000000000) {
                  in_stack_00000090 = plVar25;
                  in_stack_00000098 = in_stack_00000230;
                  in_stack_000000a0 = in_stack_00000238;
                  in_stack_000000a8 = in_stack_00000240;
                  in_stack_000000b0 = in_stack_00000248;
                  if (*(char *)(in_stack_00000068 + 0x378) != '\x02') {
                    lVar22 = *(long *)(in_stack_00000068 + 0x2f8);
                    uVar28 = *(undefined8 *)(in_stack_00000068 + 0x358);
                    plVar25 = (long *)0x1;
                    in_stack_00000220 = *(long **)(in_stack_00000068 + 0x360);
                    if ((in_stack_00000220 != (long *)0x0) &&
                       (plVar25 = (long *)_malloc(in_stack_00000220), plVar25 == (long *)0x0)) {
                      func_0x0001087c9084(1,in_stack_00000220);
                      goto LAB_1018ca324;
                    }
                    _memcpy(plVar25,uVar28,in_stack_00000220);
                    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
                    *(undefined8 *)(unaff_x29 + -0xa8) = 1;
                    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
                    *(undefined8 *)(unaff_x29 + -0xd0) = 0x60000020;
                    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
                    *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25d2c0;
                    iVar6 = __ZN81__LT_codex_core_skills__loader__SkillParseError_u20_as_u20_core__fmt__Display_GT_3fmt17hafef5d32872f1dceE
                                      (&stack0x00000090,unaff_x29 + -0xe0);
                    if (iVar6 != 0) {
                      func_0x000108a07a3c(&UNK_108cf1f7a,0x37,unaff_x29 + -0x80,&UNK_10b268ec0,
                                          &UNK_10b268df0);
                      goto LAB_1018ca324;
                    }
                    in_stack_00000240 = *(code **)(unaff_x29 + -0xa8);
                    in_stack_00000238 = *(code **)(unaff_x29 + -0xb0);
                    in_stack_00000248 = *(undefined8 *)(unaff_x29 + -0xa0);
                    lVar17 = *(long *)(lVar22 + 0x28);
                    if (lVar17 == *(long *)(lVar22 + 0x18)) {
                      func_0x0001089508dc(lVar22 + 0x18);
                    }
                    puVar23 = (undefined8 *)(*(long *)(lVar22 + 0x20) + lVar17 * 0x30);
                    puVar23[1] = plVar25;
                    *puVar23 = in_stack_00000220;
                    puVar23[3] = in_stack_00000238;
                    puVar23[2] = in_stack_00000220;
                    puVar23[5] = in_stack_00000248;
                    puVar23[4] = in_stack_00000240;
                    *(long *)(lVar22 + 0x28) = lVar17 + 1;
                    in_stack_00000230 = in_stack_00000220;
                  }
                  FUN_1019589cc(in_stack_00000090,in_stack_00000098);
                }
                else {
                  _memcpy(&stack0x000004f0,&stack0x00000370,0x118);
                  plVar10 = *(long **)(in_stack_00000068 + 0x2f8);
                  lVar22 = plVar10[2];
                  if (lVar22 == *plVar10) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h5b404ffd06373565E(plVar10);
                  }
                  _memcpy(plVar10[1] + lVar22 * 0x148,&stack0x000004c0,0x148);
                  plVar10[2] = lVar22 + 1;
                }
              }
            }
            else {
              __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                        (&stack0x00000208,in_stack_00000068 + 0x350);
              __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_11enqueue_dir17h86578808062bd9aaE
                        (unaff_x23,in_stack_00000068 + 0x2b8,in_stack_00000068 + 0x37a,
                         &stack0x00000208,*(long *)(in_stack_00000068 + 0x330) + 1);
            }
          }
          else if ((*(byte *)(in_stack_00000068 + 0x379) & 1) != 0) {
            auVar40 = (**(code **)(*(long *)(in_stack_00000068 + 0x2a0) + 0x40))
                                (*(undefined8 *)(in_stack_00000068 + 0x298),
                                 in_stack_00000068 + 0x350,0);
            *(undefined1 (*) [16])(in_stack_00000068 + 0x380) = auVar40;
            (**(code **)(auVar40._8_8_ + 0x18))(&stack0x00000220,auVar40._0_8_,in_stack_00000010);
            if (in_stack_00000220 == (long *)0x8000000000000001) {
              uVar19 = 6;
              unaff_x27 = in_stack_00000068;
              goto LAB_1018cbdb8;
            }
            *(long **)(unaff_x29 + -0xa8) = plVar25;
            *(long **)(unaff_x29 + -0xb0) = in_stack_00000220;
            *(long **)(unaff_x29 + -0xa0) = in_stack_00000230;
            uVar28 = *(undefined8 *)(in_stack_00000068 + 0x380);
            puVar23 = *(undefined8 **)(in_stack_00000068 + 0x388);
            pcVar15 = (code *)*puVar23;
            if (pcVar15 != (code *)0x0) {
              (*pcVar15)(uVar28);
            }
            if (puVar23[1] != 0) {
              _free(uVar28);
            }
            lVar22 = *(long *)(unaff_x29 + -0xb0);
            if (lVar22 == -0x8000000000000000) {
              plVar10 = *(long **)(unaff_x29 + -0xa8);
              cVar5 = FUN_10192b4fc(plVar10);
              if ((cVar5 == '\0') || (cVar5 == '\x0e')) {
                if (((ulong)plVar10 & 3) == 1) {
                  puVar23 = (undefined8 *)((long)plVar10 + -1);
                  uVar28 = *puVar23;
                  puVar16 = *(undefined8 **)((long)plVar10 + 7);
                  if ((code *)*puVar16 != (code *)0x0) {
                    (*(code *)*puVar16)(uVar28);
                  }
                  goto LAB_1018cc25c;
                }
              }
              else {
                in_stack_000001d8 = plVar10;
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
                   (((bRam000000010b62bee0 - 1 < 2 ||
                     ((bRam000000010b62bee0 != 0 &&
                      (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                         ), cVar5 != '\0')))) &&
                    (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                        ),
                    lVar22 = 
                    ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                    , (uVar21 & 1) != 0)))) {
                  in_stack_000000a8 =
                       (code *)(
                               ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                               + 0x30);
                  uVar28 = *(undefined8 *)(in_stack_00000068 + 0x360);
                  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(in_stack_00000068 + 0x358);
                  *(undefined8 *)(unaff_x29 + -0x78) = uVar28;
                  in_stack_00000220 = (long *)(unaff_x29 + -0x80);
                  plVar25 = (long *)&
                                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  in_stack_00000230 = (long *)&stack0x000001d8;
                  in_stack_00000238 =
                       __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                  ;
                  *(undefined **)(unaff_x29 + -0x90) = &UNK_108cf0bc1;
                  *(undefined1 **)(unaff_x29 + -0x88) = &stack0x00000220;
                  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x90;
                  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25d1e8;
                  in_stack_00000098 = (long *)(unaff_x29 + -0xc0);
                  in_stack_00000090 = (long *)0x1;
                  in_stack_000000a0 = (code *)0x1;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (lVar22,&stack0x00000090);
                  lVar22 = 
                  ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                    uVar28 = *(undefined8 *)
                              (
                              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                              + 0x20);
                    uVar30 = *(undefined8 *)
                              (
                              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                              + 0x28);
                    *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                    *(undefined8 *)(unaff_x29 + -0xd8) = uVar28;
                    *(undefined8 *)(unaff_x29 + -0xd0) = uVar30;
                    puVar1 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar1 = &UNK_10b3c24c8;
                    }
                    puVar2 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_109adfc03;
                    }
                    iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xe0);
                    if (iVar6 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar2,puVar1,unaff_x29 + -0xe0,&stack0x00000090);
                    }
                  }
                }
                else {
                  lVar22 = 
                  ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                    in_stack_000001e8 =
                         *(undefined8 *)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                          + 0x20);
                    in_stack_000001e0 = 1;
                    puVar1 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar1 = &UNK_10b3c24c8;
                    }
                    puVar2 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_109adfc03;
                    }
                    iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001e0);
                    if (iVar6 != 0) {
                      lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                               + 0x30;
                      uVar28 = *(undefined8 *)(in_stack_00000068 + 0x360);
                      *(undefined8 *)(unaff_x29 + -0xc0) =
                           *(undefined8 *)(in_stack_00000068 + 0x358);
                      *(undefined8 *)(unaff_x29 + -0xb8) = uVar28;
                      in_stack_00000090 = (long *)(unaff_x29 + -0xc0);
                      in_stack_00000098 =
                           (long *)&
                                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                      ;
                      in_stack_000000a0 = (code *)&stack0x000001d8;
                      in_stack_000000a8 =
                           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                      ;
                      *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                      *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x000001f8;
                      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                      *(long *)(unaff_x29 + -200) = lVar17;
                      in_stack_00000240 = *(code **)(lVar22 + 0x60);
                      in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
                      plVar25 = *(long **)(lVar22 + 0x50);
                      in_stack_00000230 = *(long **)(lVar22 + 0x58);
                      in_stack_00000220 = (long *)0x1;
                      if (plVar25 == (long *)0x0) {
                        in_stack_00000220 = (long *)0x2;
                      }
                      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xe0;
                      *(undefined1 *)(unaff_x29 + -0x88) = 1;
                      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x90;
                      *(undefined **)(unaff_x29 + -0x78) = &DAT_1061c2098;
                      in_stack_00000238 = (code *)0x1;
                      if (in_stack_00000240 == (code *)0x0) {
                        in_stack_00000238 = (code *)0x2;
                      }
                      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
                    }
                  }
                }
                if (((ulong)in_stack_000001d8 & 3) == 1) {
                  puVar23 = (undefined8 *)((long)in_stack_000001d8 + -1);
                  uVar28 = *puVar23;
                  puVar16 = *(undefined8 **)((long)in_stack_000001d8 + 7);
                  if ((code *)*puVar16 != (code *)0x0) {
                    (*(code *)*puVar16)(uVar28);
                  }
LAB_1018cc25c:
                  if (puVar16[1] != 0) {
                    _free(uVar28);
                  }
                  goto LAB_1018cc26c;
                }
              }
            }
            else {
              __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                        (&stack0x000001c0,in_stack_00000068 + 0x350);
              __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_11enqueue_dir17h86578808062bd9aaE
                        (unaff_x23,in_stack_00000068 + 0x2b8,in_stack_00000068 + 0x37a,
                         &stack0x000001c0,*(long *)(in_stack_00000068 + 0x330) + 1);
              puVar23 = *(undefined8 **)(unaff_x29 + -0xa8);
              lVar17 = *(long *)(unaff_x29 + -0xa0);
              if (lVar17 != 0) {
                puVar16 = puVar23 + 1;
                do {
                  if (puVar16[-1] != 0) {
                    _free(*puVar16);
                  }
                  puVar16 = puVar16 + 4;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
              }
              if (lVar22 == 0) goto LAB_1018cbdf4;
LAB_1018cc26c:
              _free(puVar23);
            }
          }
LAB_1018cbdf4:
          if (*(long *)(in_stack_00000068 + 0x350) != 0) {
            _free(*(undefined8 *)(in_stack_00000068 + 0x358));
          }
        }
        if (*(long *)(in_stack_00000068 + 0x338) != 0) {
          _free(*(undefined8 *)(in_stack_00000068 + 0x340));
        }
      }
      *(undefined8 *)(in_stack_00000068 + 0x268) = 0x8000000000000000;
      puVar16 = puVar23;
LAB_1018cc130:
      uVar21 = (long)*(undefined8 **)(in_stack_00000068 + 0x260) - (long)puVar16;
      if (uVar21 != 0) {
        uVar21 = uVar21 >> 5;
        puVar16 = puVar16 + 1;
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (*(long *)(in_stack_00000068 + 600) != 0) {
        puVar23 = *(undefined8 **)(in_stack_00000068 + 0x248);
        goto LAB_1018cc170;
      }
    }
    *(undefined1 *)(in_stack_00000068 + 0x37b) = 0;
    if (*(long *)(in_stack_00000068 + 0x318) != 0) {
      _free(*(undefined8 *)(in_stack_00000068 + 800));
    }
    goto LAB_1018ca434;
  }
  *(undefined8 *)(in_stack_00000068 + 0x228) = 0x8000000000000000;
LAB_1018ca704:
  unaff_x27 = in_stack_00000068;
  if ((*(byte *)(in_stack_00000068 + 0x37a) & 1) != 0) {
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
      unaff_x19 = (long *)&
                          __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
      ;
      if (((bRam000000010b62bef8 - 1 < 2) ||
          ((bRam000000010b62bef8 != 0 &&
           (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                              ), cVar5 != '\0')))) &&
         (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                             ),
         param_1 = 
         ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
         , (uVar21 & 1) != 0)) goto code_r0x0001018ca744;
    }
    lVar22 = 
    ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar28 = *(undefined8 *)
                (
                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                + 0x20);
      uVar30 = *(undefined8 *)
                (
                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                + 0x28);
      *(undefined8 *)(unaff_x29 + -0xf8) = 2;
      *(undefined8 *)(unaff_x29 + -0xf0) = uVar28;
      *(undefined8 *)(unaff_x29 + -0xe8) = uVar30;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xf8);
      if (iVar6 != 0) {
        lVar17 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                 + 0x30;
        uVar28 = *(undefined8 *)(in_stack_00000068 + 0x310);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(in_stack_00000068 + 0x308);
        *(undefined8 *)(unaff_x29 + -0x78) = uVar28;
        in_stack_00000090 = (long *)&UNK_108c983c8;
        in_stack_00000098 =
             (long *)&
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        in_stack_000000a0 = (code *)(unaff_x29 + -0x80);
        in_stack_000000a8 =
             (code *)&
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        *(char **)(unaff_x29 + -0x90) = s_skills_scan_truncated_after_dire_108acddbc;
        *(long ***)(unaff_x29 + -0x88) = &stack0x00000090;
        *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25d1e8;
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xc0;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long *)(unaff_x29 + -200) = lVar17;
        in_stack_00000240 = *(code **)(lVar22 + 0x60);
        in_stack_00000248 = *(undefined8 *)(lVar22 + 0x68);
        in_stack_00000230 = *(long **)(lVar22 + 0x58);
        in_stack_00000220 = (long *)0x1;
        if (*(long *)(lVar22 + 0x50) == 0) {
          in_stack_00000220 = (long *)0x2;
        }
        in_stack_00000178 = (long *)(unaff_x29 + -0xe0);
        in_stack_00000180 = (long *)CONCAT71(in_stack_00000180._1_7_,1);
        *(long ***)(unaff_x29 + -0xb0) = &stack0x00000178;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
        in_stack_00000238 = (code *)0x1;
        if (in_stack_00000240 == (code *)0x0) {
          in_stack_00000238 = (code *)0x2;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000220);
      }
    }
  }
  goto LAB_1018cac18;
code_r0x0001018ca744:
  uVar28 = *(undefined8 *)(in_stack_00000068 + 0x310);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(in_stack_00000068 + 0x308);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar28;
  in_x10 = param_1 + 0x30;
  in_stack_00000090 = (long *)&UNK_108c983c8;
  in_stack_00000098 =
       (long *)&
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  in_stack_000000a0 = (code *)(unaff_x29 + -0x90);
  in_stack_000000a8 =
       (code *)&
               __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
  ;
  goto code_r0x0001018ca77c;
  while( true ) {
    lVar17 = lVar17 + 1;
    lVar29 = lVar29 + 0x18;
    if (lVar17 == 1) break;
LAB_1018c8f48:
    lVar7 = lVar32 + lVar29;
    uVar21 = FUN_101ba5c3c(&stack0x00000220,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10)
                          );
    if ((uVar21 & 1) == 0) {
      plVar25 = (long *)(lVar32 + lVar29);
      if (*plVar25 != 0) {
        _free(plVar25[1]);
      }
      if (lVar17 == 0) {
        lVar29 = 1;
      }
      else {
        lVar17 = -lVar17;
        lVar29 = 1;
        do {
          plVar10 = plVar25 + 3;
          uVar21 = FUN_101ba5c3c(&stack0x00000220,plVar25[4],plVar25[5]);
          if ((uVar21 & 1) == 0) {
            lVar29 = lVar29 + 1;
            if (*plVar10 != 0) {
              _free(plVar25[4]);
            }
          }
          else {
            lVar7 = plVar25[4];
            lVar32 = *plVar10;
            plVar27 = plVar10 + lVar29 * -3;
            plVar27[2] = plVar25[5];
            plVar27[1] = lVar7;
            *plVar27 = lVar32;
          }
          lVar17 = lVar17 + -1;
          plVar25 = plVar10;
        } while (lVar17 != 0);
      }
      goto LAB_1018c8ff4;
    }
  }
  lVar29 = 0;
LAB_1018c8ff4:
  *(long *)(unaff_x27 + 0xc0) = lVar22 - lVar29;
LAB_1018c8ffc:
  lVar22 = *(long *)(unaff_x27 + 0x110);
  if (lVar22 != 0) {
    plVar25 = *(long **)(unaff_x27 + 0xf8);
    plVar10 = plVar25 + 1;
    lVar17 = *plVar25;
    uVar21 = CONCAT17(-(-1 < lVar17),
                      CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar17 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
             0x8080808080808080;
    do {
      while (uVar21 == 0) {
        lVar17 = *plVar10;
        plVar25 = plVar25 + -0x28;
        plVar10 = plVar10 + 1;
        uVar21 = CONCAT17(-(-1 < lVar17),
                          CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar17
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
                 0x8080808080808080;
      }
      uVar24 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      plVar27 = plVar25 + (long)-(int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) * 5;
      uVar24 = FUN_101ba5c3c(&stack0x00000370,plVar27[-4],plVar27[-3]);
      if ((uVar24 & 1) == 0) {
        lVar17 = *(long *)(unaff_x27 + 0xf8);
        lVar29 = (lVar17 - (long)plVar27 >> 3) * -0x3333333333333333;
        puVar23 = (undefined8 *)(lVar17 + (lVar29 - 8U & *(ulong *)(unaff_x27 + 0x100)));
        uVar28 = *puVar23;
        uVar30 = *(undefined8 *)(lVar17 + lVar29);
        uVar24 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                          CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                   CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                            CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1),
                                                     CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1)
                                                              ,CONCAT12(-((char)((ulong)uVar30 >>
                                                                                0x10) == -1),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar30 >> 8) == -1),-((char)uVar30 == -1))))))));
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) +
            ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar28 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar28 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar28 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar28 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar28
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar28 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar28 >> 8) == -1),
                                                           -((char)uVar28 == -1))))))))) >> 3) < 8)
        {
          *(long *)(unaff_x27 + 0x108) = *(long *)(unaff_x27 + 0x108) + 1;
          uVar19 = 0xff;
        }
        else {
          uVar19 = 0x80;
        }
        *(undefined1 *)(lVar17 + lVar29) = uVar19;
        *(undefined1 *)(puVar23 + 1) = uVar19;
        *(long *)(unaff_x27 + 0x110) = *(long *)(unaff_x27 + 0x110) + -1;
        if (plVar27[-5] != 0) {
          _free(plVar27[-4]);
        }
        plVar14 = (long *)plVar27[-2];
        lVar17 = *plVar14;
        *plVar14 = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(plVar27 + -2);
        }
      }
      uVar21 = uVar21 - 1 & uVar21;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  *(undefined1 *)(unaff_x27 + 0x5bc) = 0;
  uVar36 = *(undefined8 *)(unaff_x27 + 0xb8);
  uVar30 = *(undefined8 *)(unaff_x27 + 0xb0);
  uVar28 = *(undefined8 *)(unaff_x27 + 0xc0);
  lVar22 = *(long *)(unaff_x27 + 0x50);
  lVar17 = *(long *)(unaff_x27 + 0x58);
  if (lVar17 != 0) {
    puVar23 = (undefined8 *)(lVar22 + 8);
    do {
      if (puVar23[-1] != 0) {
        _free(*puVar23);
      }
      puVar23 = puVar23 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(long *)(unaff_x27 + 0x48) != 0) {
    _free(lVar22);
  }
  *(undefined1 *)(unaff_x27 + 0x5c0) = 1;
  *(undefined8 *)(unaff_x27 + 0x50) = uVar36;
  *(undefined8 *)(unaff_x27 + 0x48) = uVar30;
  *(undefined8 *)(unaff_x27 + 0x58) = uVar28;
  *(undefined1 *)(unaff_x27 + 0x5bb) = 0;
  uVar28 = *(undefined8 *)(lVar33 + 0xd0);
  lVar22 = *(long *)(lVar33 + 200);
  uVar36 = *(undefined8 *)(lVar33 + 0xe0);
  uVar30 = *(undefined8 *)(lVar33 + 0xd8);
  uVar38 = *(undefined8 *)(lVar33 + 0xf0);
  uVar37 = *(undefined8 *)(lVar33 + 0xe8);
  puVar23 = (undefined8 *)_malloc(0x40);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0001087c906c(8,0x40);
  }
  else {
    puVar23[1] = 1;
    *puVar23 = 1;
    puVar23[3] = uVar28;
    puVar23[2] = lVar22;
    puVar23[5] = uVar36;
    puVar23[4] = uVar30;
    puVar23[7] = uVar38;
    puVar23[6] = uVar37;
    lVar22 = **(long **)(unaff_x27 + 0x90);
    **(long **)(unaff_x27 + 0x90) = lVar22 + -1;
    LORelease();
    if (lVar22 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h516dbdaead00933fE();
    }
    *(undefined1 *)(unaff_x27 + 0x5bf) = 1;
    *(undefined8 **)(unaff_x27 + 0x90) = puVar23;
    *(undefined1 *)(unaff_x27 + 0x5ba) = 0;
    uVar30 = *(undefined8 *)(unaff_x27 + 0x100);
    uVar28 = *(undefined8 *)(unaff_x27 + 0xf8);
    uVar37 = *(undefined8 *)(unaff_x27 + 0x110);
    uVar36 = *(undefined8 *)(unaff_x27 + 0x108);
    uVar39 = *(undefined8 *)(unaff_x27 + 0x120);
    uVar38 = *(undefined8 *)(unaff_x27 + 0x118);
    puVar23 = (undefined8 *)_malloc(0x40);
    if (puVar23 != (undefined8 *)0x0) {
      puVar23[1] = 1;
      *puVar23 = 1;
      puVar23[3] = uVar30;
      puVar23[2] = uVar28;
      puVar23[5] = uVar37;
      puVar23[4] = uVar36;
      puVar23[7] = uVar39;
      puVar23[6] = uVar38;
      lVar22 = **(long **)(unaff_x27 + 0x98);
      **(long **)(unaff_x27 + 0x98) = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbcd0bfd41f3bc2f3E();
      }
      *(undefined1 *)(unaff_x27 + 0x5be) = 1;
      *(undefined8 **)(unaff_x27 + 0x98) = puVar23;
      uVar21 = *(ulong *)(unaff_x27 + 0x28);
      if (1 < uVar21) {
        if (uVar21 < 0x15) {
          FUN_101973de4();
        }
        else {
          func_0x00010394e858(*(undefined8 *)(unaff_x27 + 0x20),uVar21,&stack0x000004c0);
        }
      }
      plVar25 = in_stack_00000098;
      *(undefined4 *)((long)in_stack_00000030 + 0x4b5) = 0;
      in_stack_00000128 = *(undefined8 *)(unaff_x27 + 0x80);
      in_stack_00000120 = *(undefined8 *)(unaff_x27 + 0x78);
      in_stack_00000138 = *(undefined8 *)(unaff_x27 + 0x90);
      in_stack_00000130 = *(undefined8 *)(unaff_x27 + 0x88);
      in_stack_00000148 = *(undefined8 *)(unaff_x27 + 0xa0);
      in_stack_00000140 = *(undefined8 *)(unaff_x27 + 0x98);
      in_stack_00000150 = *(undefined8 *)(unaff_x27 + 0xa8);
      in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0x40);
      in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0x38);
      in_stack_000000f8 = *(undefined8 *)(unaff_x27 + 0x50);
      in_stack_000000f0 = *(undefined8 *)(unaff_x27 + 0x48);
      in_stack_00000108 = *(undefined8 *)(unaff_x27 + 0x60);
      in_stack_00000100 = *(undefined8 *)(unaff_x27 + 0x58);
      in_stack_00000118 = *(undefined8 *)(unaff_x27 + 0x70);
      in_stack_00000110 = *(undefined8 *)(unaff_x27 + 0x68);
      in_stack_000000c8 = *(undefined8 *)(unaff_x27 + 0x20);
      in_stack_000000c0 = *(undefined8 *)(unaff_x27 + 0x18);
      in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x30);
      in_stack_000000d0 = *(undefined8 *)(unaff_x27 + 0x28);
      if (in_stack_00000098 != (long *)0x0) {
        if (in_stack_000000a8 != (code *)0x0) {
          plVar27 = in_stack_00000090 + 1;
          lVar22 = *in_stack_00000090;
          uVar21 = CONCAT17(-(-1 < lVar22),
                            CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                   0x8080808080808080;
          plVar10 = in_stack_00000090;
          pcVar15 = in_stack_000000a8;
          do {
            while (uVar21 == 0) {
              lVar22 = *plVar27;
              plVar10 = plVar10 + -0x18;
              plVar27 = plVar27 + 1;
              uVar21 = CONCAT17(-(-1 < lVar22),
                                CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                       0x8080808080808080;
            }
            uVar24 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            iVar6 = (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            if (plVar10[(long)-iVar6 * 3 + -3] != 0) {
              _free(plVar10[(long)-iVar6 * 3 + -2]);
            }
            uVar21 = uVar21 - 1 & uVar21;
            pcVar15 = pcVar15 + -1;
          } while (pcVar15 != (code *)0x0);
        }
        if ((long)plVar25 * 0x19 != -0x21) {
          _free(in_stack_00000090 + (long)plVar25 * -3 + -3);
        }
      }
      *(undefined8 *)((long)in_stack_00000030 + 0x4b2) = 0;
      in_stack_00000008[0xd] = in_stack_00000128;
      in_stack_00000008[0xc] = in_stack_00000120;
      in_stack_00000008[0xf] = in_stack_00000138;
      in_stack_00000008[0xe] = in_stack_00000130;
      in_stack_00000008[0x11] = in_stack_00000148;
      in_stack_00000008[0x10] = in_stack_00000140;
      in_stack_00000008[0x12] = in_stack_00000150;
      in_stack_00000008[5] = in_stack_000000e8;
      in_stack_00000008[4] = in_stack_000000e0;
      in_stack_00000008[7] = in_stack_000000f8;
      in_stack_00000008[6] = in_stack_000000f0;
      in_stack_00000008[9] = in_stack_00000108;
      in_stack_00000008[8] = in_stack_00000100;
      in_stack_00000008[0xb] = in_stack_00000118;
      in_stack_00000008[10] = in_stack_00000110;
      uVar19 = 1;
      in_stack_00000008[1] = in_stack_000000c8;
      *in_stack_00000008 = in_stack_000000c0;
      in_stack_00000008[3] = in_stack_000000d8;
      in_stack_00000008[2] = in_stack_000000d0;
LAB_1018cbdcc:
      *(undefined1 *)(unaff_x27 + 0x5b8) = uVar19;
      return;
    }
    func_0x0001087c906c(8,0x40);
  }
LAB_1018ca324:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1018ca328);
  (*pcVar15)();
}

