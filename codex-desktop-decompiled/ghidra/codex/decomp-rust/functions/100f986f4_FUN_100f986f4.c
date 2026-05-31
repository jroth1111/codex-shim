
/* WARNING: Removing unreachable block (ram,0x000100f990a0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_100f986f4(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined1 *param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  byte bVar17;
  long *plVar18;
  long lVar19;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x29;
  byte bVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  uint in_stack_00000060;
  long *in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined1 (*in_stack_00000090) [16];
  int iStack00000000000000c0;
  undefined *in_stack_000000c8;
  long in_stack_000000d0;
  undefined *in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00004ea0;
  ulong in_stack_00004ea8;
  undefined8 in_stack_00004ec0;
  undefined8 in_stack_00004ec8;
  long in_stack_00004f68;
  long in_stack_00004f70;
  long in_stack_00004f78;
  undefined *in_stack_00004f80;
  ulong in_stack_00004f88;
  long in_stack_00004f90;
  long in_stack_00004f98;
  undefined8 in_stack_00004fa0;
  undefined8 in_stack_00004fa8;
  
  auVar22._8_8_ = in_stack_00004fa8;
  auVar22._0_8_ = in_stack_00004fa0;
code_r0x000100f986f4:
  uVar12 = __ZN4core3fmt5write17h64810b21425781ecE
                     (param_1,param_2,s_requirements_____108af0630,param_4);
  lVar15 = (long)_iStack00000000000000c0;
  lVar19 = (long)in_stack_000000c8;
  lVar4 = in_stack_000000d0;
  if ((uVar12 & 1) != 0) {
    func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x00004f10,&UNK_10b235000,&UNK_10b2346c0);
LAB_100f9967c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100f99680);
    (*pcVar6)();
  }
joined_r0x000100f9871c:
  _iStack00000000000000c0 = (undefined1 *)lVar15;
  in_stack_000000c8 = (undefined *)lVar19;
  if (lVar15 == -0x8000000000000000) {
    bVar2 = true;
    lVar15 = -0x8000000000000000;
  }
  else {
    if (lVar4 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(lVar4);
      if (lVar13 == 0) {
        func_0x0001087c9084(1,lVar4);
        goto LAB_100f9967c;
      }
    }
    _memcpy(lVar13,lVar19,lVar4);
    bVar2 = false;
  }
  do {
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    if (lVar15 == 0) {
      bVar2 = true;
    }
    if (!bVar2) {
      _free(lVar19);
    }
    puVar14 = (undefined8 *)_malloc(9);
    uVar16 = 9;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994d0;
    *(undefined1 *)(puVar14 + 1) = 0x74;
    *puVar14 = 0x726f70736e617274;
    *(undefined8 *)(unaff_x29 + -0x98) = 9;
    *(undefined8 **)(unaff_x29 + -0x90) = puVar14;
    *(undefined8 *)(unaff_x29 + -0x88) = 9;
    func_0x000100684748(&stack0x000000c0,&stack0x00004f20);
    if (_iStack00000000000000c0 == (undefined1 *)0x8000000000000005) {
      func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x00004b40,&UNK_10b234f40,&UNK_10b239dc0);
      goto LAB_100f9967c;
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0x13);
    uVar16 = 0x13;
    if (puVar14 == (undefined8 *)0x0) {
LAB_100f994d0:
      func_0x0001087c9084(1,uVar16);
      goto LAB_100f9967c;
    }
    *(undefined4 *)((long)puVar14 + 0xf) = 0x6365735f;
    puVar14[1] = 0x5f74756f656d6974;
    *puVar14 = 0x5f70757472617473;
    *(undefined8 *)(unaff_x29 + -0x98) = 0x13;
    *(undefined8 **)(unaff_x29 + -0x90) = puVar14;
    *(undefined8 *)(unaff_x29 + -0x88) = 0x13;
    if (unaff_x21[0x58] != 1000000000) {
      dVar21 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x21 + 0x56));
      dVar21 = (double)(uint)unaff_x21[0x58] / 1000000000.0 + dVar21;
      _iStack00000000000000c0 = (undefined1 *)0x8000000000000000;
      if ((dVar21 != INFINITY) && (!NAN(dVar21))) {
        FUN_105dc6c20(&stack0x000000c0,0x13);
      }
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0x10);
    uVar16 = 0x10;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994d0;
    puVar14[1] = 0x6365735f74756f65;
    *puVar14 = 0x6d69745f6c6f6f74;
    *(undefined8 *)(unaff_x29 + -0x98) = 0x10;
    *(undefined8 **)(unaff_x29 + -0x90) = puVar14;
    *(undefined8 *)(unaff_x29 + -0x88) = 0x10;
    if (unaff_x21[0x5c] != 1000000000) {
      dVar21 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x21 + 0x5a));
      dVar21 = (double)(uint)unaff_x21[0x5c] / 1000000000.0 + dVar21;
      _iStack00000000000000c0 = (undefined1 *)0x8000000000000000;
      if ((dVar21 != INFINITY) && (!NAN(dVar21))) {
        FUN_105dc6c20(&stack0x000000c0,0x10);
      }
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0xb);
    uVar16 = 0xb;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994d0;
    *(undefined4 *)((long)puVar14 + 7) = 0x73757461;
    *puVar14 = 0x6174735f68747561;
    *(undefined8 *)(unaff_x29 + -0x98) = 0xb;
    *(undefined8 **)(unaff_x29 + -0x90) = puVar14;
    *(undefined8 *)(unaff_x29 + -0x88) = 0xb;
    if ((int)in_stack_00000060 < 2) {
      if (in_stack_00000060 == 0) {
        puVar14 = (undefined8 *)_malloc(0xb,0xb);
        uVar16 = 0xb;
        if (puVar14 == (undefined8 *)0x0) {
LAB_100f994f4:
          func_0x0001087c9084(1,uVar16);
          goto LAB_100f9967c;
        }
        *(undefined4 *)((long)puVar14 + 7) = 0x64657472;
        *puVar14 = 0x726f707075736e75;
      }
      else {
        puVar14 = (undefined8 *)_malloc(0xd,0xb);
        uVar16 = 0xd;
        if (puVar14 == (undefined8 *)0x0) goto LAB_100f994f4;
        *puVar14 = 0x67676f6c5f746f6e;
        *(undefined8 *)((long)puVar14 + 5) = 0x6e695f646567676f;
      }
    }
    else if (in_stack_00000060 == 2) {
      puVar14 = (undefined8 *)_malloc(0xc,0xb);
      uVar16 = 0xc;
      if (puVar14 == (undefined8 *)0x0) goto LAB_100f994f4;
      *(undefined4 *)(puVar14 + 1) = 0x6e656b6f;
      *puVar14 = 0x745f726572616562;
    }
    else {
      puVar9 = (undefined4 *)_malloc(6,0xb);
      uVar16 = 6;
      if (puVar9 == (undefined4 *)0x0) goto LAB_100f994f4;
      *(undefined2 *)(puVar9 + 1) = 0x6874;
      *puVar9 = 0x75615f6f;
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    _iStack00000000000000c0 = (undefined1 *)in_stack_00004f68;
    in_stack_000000c8 = (undefined *)in_stack_00004f70;
    in_stack_000000d0 = in_stack_00004f78;
    in_stack_000000d8 = in_stack_00004f80;
    in_stack_000000e0 = in_stack_00004f88;
    in_stack_000000e8 = in_stack_00004f90;
    in_stack_000000f0 = in_stack_00004f98;
    _in_stack_000000f8 = auVar22;
    FUN_100de6690(&stack0x00004f20);
    plVar1 = in_stack_00000068 + 2;
    plVar18 = (long *)(in_stack_00000058 + in_stack_00000070 * 0x48);
    plVar18[3] = (long)in_stack_000000d8;
    plVar18[2] = in_stack_000000d0;
    plVar18[5] = in_stack_000000e8;
    plVar18[4] = in_stack_000000e0;
    plVar18[7] = in_stack_000000f8;
    plVar18[6] = in_stack_000000f0;
    plVar18[8] = in_stack_00000100;
    plVar18[1] = (long)in_stack_000000c8;
    *plVar18 = (long)_iStack00000000000000c0;
    lVar15 = in_stack_00000070 + 1;
    if (plVar1 == in_stack_00000048) {
      if (in_stack_00000018 != 0) {
        _free(in_stack_00000008);
      }
      lVar15 = _malloc(0x80);
      if (lVar15 != 0) {
        _iStack00000000000000c0 = &stack0x00004b40;
        in_stack_000000c8 = &UNK_108ca7630;
        in_stack_000000d8 = (undefined *)0x0;
        in_stack_000000d0 = 2;
        in_stack_000000e0 = in_stack_000000e0 & 0xffffffffffffff00;
        func_0x000100633438(&stack0x000000c0,&stack0x00004ed8);
        *(undefined8 *)(unaff_x29 + -0xe0) = 0x80;
        *(long *)(unaff_x29 + -0xd8) = lVar15;
        *(undefined8 *)(unaff_x29 + -0xd0) = 0;
        _iStack00000000000000c0 = (undefined1 *)(unaff_x29 + -0xe0);
        in_stack_000000c8 = &DAT_10112965c;
        func_0x00010602ab90(s__108ac265a,&stack0x000000c0);
        if (*(long *)(unaff_x29 + -0xe0) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0xd8));
        }
        in_stack_00000070 = in_stack_00000070 + 2;
        lVar15 = in_stack_00000058;
        while (in_stack_00000070 = in_stack_00000070 + -1, in_stack_00000070 != 0) {
          FUN_100de6690(lVar15);
          lVar15 = lVar15 + 0x48;
        }
        if (in_stack_00000010 != 0) {
          _free(in_stack_00000058);
        }
        FUN_100cf8d14(&stack0x00004ea0);
        if ((*(char *)(in_stack_00000080 + 0x20) == '\x01') &&
           (*(long *)(in_stack_00000078 + 0x25c0) != 0)) {
          _free(*(undefined8 *)(in_stack_00000078 + 0x25c8));
        }
        *(undefined1 *)(in_stack_00000080 + 0x20) = 0;
        FUN_100cf0734(in_stack_00000078 + 0x30);
        FUN_100cf8c18(in_stack_00000078);
        lVar15 = **(long **)(in_stack_00000078 + 0x25a8);
        **(long **)(in_stack_00000078 + 0x25a8) = lVar15 + -1;
        LORelease();
        if (lVar15 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E
                    (in_stack_00000078 + 0x25a8);
        }
        FUN_100de93d0(in_stack_00000078 + 0x60);
        *(undefined1 *)(in_stack_00000080 + 0x21) = 0;
        *(undefined1 *)(in_stack_00000080 + 0x22) = 1;
        return ZEXT816(0) << 0x40;
      }
      func_0x0001087c9084(1,0x80);
      goto LAB_100f9967c;
    }
    unaff_x21 = (int *)in_stack_00000068[3];
    uVar3 = *(undefined8 *)(*plVar1 + 8);
    lVar4 = *(long *)(*plVar1 + 0x10);
    if (in_stack_00000050 == 0) {
      iVar7 = *unaff_x21;
    }
    else {
      uVar8 = FUN_100e8e738(in_stack_00004ec0,in_stack_00004ec8,uVar3,lVar4);
      lVar19 = 0;
      bVar17 = (byte)(uVar8 >> 0x39);
      uVar8 = uVar8 & in_stack_00004ea8;
      uVar16 = *(undefined8 *)(in_stack_00004ea0 + uVar8);
      uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar17),
                        CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar17),
                                 CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar17),
                                          CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar17),
                                                   CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                             bVar17),CONCAT12(-((byte)((ulong)uVar16
                                                                                      >> 0x10) ==
                                                                               bVar17),CONCAT11(-((
                                                  byte)((ulong)uVar16 >> 8) == bVar17),
                                                  -((byte)uVar16 == bVar17)))))))) &
               0x8080808080808080;
      while( true ) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
          uVar5 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          lVar13 = in_stack_00004ea0 +
                   (uVar8 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & in_stack_00004ea8
                   ) * -0x1d0;
          if (lVar4 == *(long *)(lVar13 + -0x1c0)) {
            iVar7 = _memcmp(uVar3,*(undefined8 *)(lVar13 + -0x1c8),lVar4);
            if (iVar7 == 0) {
              in_stack_00000060 = (uint)*(byte *)(lVar13 + -8);
              if (*unaff_x21 == 1) goto LAB_100f979c4;
              goto LAB_100f97b38;
            }
          }
        }
        bVar20 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar16 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar16
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar16 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) == -1),
                                                           -((char)uVar16 == -1)))))))),1);
        if ((bVar20 & 1) != 0) break;
        lVar19 = lVar19 + 8;
        uVar8 = uVar8 + lVar19 & in_stack_00004ea8;
        uVar16 = *(undefined8 *)(in_stack_00004ea0 + uVar8);
        uVar12 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar17),
                          CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar17),
                                   CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar17),
                                            CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar17),
                                                     CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                               bVar17),CONCAT12(-((byte)((ulong)
                                                  uVar16 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)uVar16 >> 8) == bVar17),
                                                           -((byte)uVar16 == bVar17)))))))) &
                 0x8080808080808080;
      }
      iVar7 = *unaff_x21;
    }
    in_stack_00000060 = 0;
    if (iVar7 != 1) {
LAB_100f97b38:
      if (in_stack_00000090[1][0] == '\x01') {
        lVar19 = *(long *)*in_stack_00000090;
      }
      else {
        auVar22 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        lVar19 = auVar22._0_8_;
        *(long *)(*in_stack_00000090 + 8) = auVar22._8_8_;
        in_stack_00000090[1][0] = 1;
      }
      *(long *)*in_stack_00000090 = lVar19 + 1;
      puVar9 = (undefined4 *)_malloc(4);
      uVar16 = 4;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0x65707974;
        puVar9 = (undefined4 *)_malloc(5,4);
        if (puVar9 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,5);
          goto LAB_100f9967c;
        }
        *(undefined1 *)(puVar9 + 1) = 0x6f;
        *puVar9 = 0x69647473;
        FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
        if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
          FUN_100de6690(unaff_x29 + -0xe0);
        }
        puVar9 = (undefined4 *)_malloc(7);
        uVar16 = 7;
        if (puVar9 != (undefined4 *)0x0) {
          *(undefined4 *)((long)puVar9 + 3) = 0x646e616d;
          *puVar9 = 0x6d6d6f63;
          uVar16 = *(undefined8 *)(unaff_x21 + 0x16);
          lVar19 = *(long *)(unaff_x21 + 0x18);
          if (lVar19 == 0) {
            lVar13 = 1;
          }
          else {
            lVar13 = _malloc(lVar19,7);
            if (lVar13 == 0) {
              func_0x0001087c9084(1,lVar19);
              goto LAB_100f9967c;
            }
          }
          _memcpy(lVar13,uVar16,lVar19);
          FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
          if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
            FUN_100de6690(unaff_x29 + -0xe0);
          }
          puVar9 = (undefined4 *)_malloc(4);
          uVar16 = 4;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0x73677261;
            func_0x000100633f00(&stack0x000000c0,*(undefined8 *)(unaff_x21 + 0x1c),
                                *(undefined8 *)(unaff_x21 + 0x1e));
            if (_iStack00000000000000c0 == (undefined1 *)0x8000000000000005) {
              func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x00004b40,&UNK_10b234f40,&UNK_10b239d90
                                 );
              goto LAB_100f9967c;
            }
            FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
            *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
            if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
              FUN_100de6690(unaff_x29 + -0xe0);
            }
            puVar10 = (undefined2 *)_malloc(3);
            uVar16 = 3;
            if (puVar10 != (undefined2 *)0x0) {
              *(undefined1 *)(puVar10 + 1) = 0x76;
              *puVar10 = 0x6e65;
              if (*(long *)(unaff_x21 + 2) == 0) {
                _iStack00000000000000c0 = (undefined1 *)0x8000000000000000;
              }
              else {
                FUN_100645a24(&stack0x000000c0,*(long *)(unaff_x21 + 2),
                              *(undefined8 *)(unaff_x21 + 8));
                if (_iStack00000000000000c0 == (undefined1 *)0x8000000000000005) {
                  func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x00004b40,&UNK_10b234f40,
                                      &UNK_10b239d90);
                  goto LAB_100f9967c;
                }
              }
              FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
              *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
              if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
                FUN_100de6690(unaff_x29 + -0xe0);
              }
              puVar14 = (undefined8 *)_malloc(8);
              uVar16 = 8;
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = 0x737261765f766e65;
                FUN_1006487f0(&stack0x000000c0,*(undefined8 *)(unaff_x21 + 0x22),
                              *(undefined8 *)(unaff_x21 + 0x24));
                if (_iStack00000000000000c0 == (undefined1 *)0x8000000000000005) {
                  func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x00004b40,&UNK_10b234f40,
                                      &UNK_10b239d90);
                  goto LAB_100f9967c;
                }
                FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
                *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
                if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
                  FUN_100de6690(unaff_x29 + -0xe0);
                }
                puVar10 = (undefined2 *)_malloc(3);
                uVar16 = 3;
                if (puVar10 != (undefined2 *)0x0) {
                  *(undefined1 *)(puVar10 + 1) = 100;
                  *puVar10 = 0x7763;
                  if (*(long *)(unaff_x21 + 0xe) != -0x8000000000000000) {
                    func_0x0001055bf348(&stack0x000000c0,*(undefined8 *)(unaff_x21 + 0x10),
                                        *(undefined8 *)(unaff_x21 + 0x12));
                    lVar13 = in_stack_000000d0;
                    lVar19 = (long)in_stack_000000c8;
                    if (iStack00000000000000c0 == 1) {
                      _iStack00000000000000c0 = (undefined1 *)FUN_1088564ec(&UNK_108ca7604,0x26);
                      func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x000000c0,&UNK_10b234f40,
                                          &UNK_10b239d90);
                      goto LAB_100f9967c;
                    }
                    if (in_stack_000000d0 == 0) {
                      lVar11 = 1;
                    }
                    else {
                      lVar11 = _malloc(in_stack_000000d0);
                      if (lVar11 == 0) {
                        func_0x0001087c9084(1,lVar13);
                        goto LAB_100f9967c;
                      }
                    }
                    _memcpy(lVar11,lVar19,lVar13);
                  }
                  FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40)
                  ;
                  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
                  if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
                    FUN_100de6690(unaff_x29 + -0xe0);
                  }
                  goto LAB_100f983f4;
                }
              }
            }
          }
        }
      }
      func_0x0001087c9084(1,uVar16);
      goto LAB_100f9967c;
    }
LAB_100f979c4:
    if (in_stack_00000090[1][0] == '\x01') {
      lVar19 = *(long *)*in_stack_00000090;
    }
    else {
      auVar22 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      lVar19 = auVar22._0_8_;
      *(long *)(*in_stack_00000090 + 8) = auVar22._8_8_;
      in_stack_00000090[1][0] = 1;
    }
    *(long *)*in_stack_00000090 = lVar19 + 1;
    puVar9 = (undefined4 *)_malloc(4);
    uVar16 = 4;
    if (puVar9 == (undefined4 *)0x0) goto LAB_100f994e8;
    *puVar9 = 0x65707974;
    puVar14 = (undefined8 *)_malloc(0xf,4);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0xf);
      goto LAB_100f9967c;
    }
    *puVar14 = 0x62616d6165727473;
    *(undefined8 *)((long)puVar14 + 7) = 0x707474685f656c62;
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar10 = (undefined2 *)_malloc(3);
    uVar16 = 3;
    if (puVar10 == (undefined2 *)0x0) {
LAB_100f994e8:
      func_0x0001087c9084(1,uVar16);
      goto LAB_100f9967c;
    }
    *(undefined1 *)(puVar10 + 1) = 0x6c;
    *puVar10 = 0x7275;
    uVar16 = *(undefined8 *)(unaff_x21 + 0x22);
    lVar19 = *(long *)(unaff_x21 + 0x24);
    if (lVar19 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(lVar19,3);
      if (lVar13 == 0) {
        func_0x0001087c9084(1,lVar19);
        goto LAB_100f9967c;
      }
    }
    _memcpy(lVar13,uVar16,lVar19);
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0x14);
    uVar16 = 0x14;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994e8;
    *(undefined4 *)(puVar14 + 2) = 0x7261765f;
    puVar14[1] = 0x766e655f6e656b6f;
    *puVar14 = 0x745f726572616562;
    if (*(long *)(unaff_x21 + 0x1a) != -0x8000000000000000) {
      uVar16 = *(undefined8 *)(unaff_x21 + 0x1c);
      lVar19 = *(long *)(unaff_x21 + 0x1e);
      if (lVar19 == 0) {
        lVar13 = 1;
      }
      else {
        lVar13 = _malloc(lVar19,0x14);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,lVar19);
          goto LAB_100f9967c;
        }
      }
      _memcpy(lVar13,uVar16,lVar19);
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0xc);
    uVar16 = 0xc;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994e8;
    *(undefined4 *)(puVar14 + 1) = 0x73726564;
    *puVar14 = 0x6165685f70747468;
    if (*(long *)(unaff_x21 + 2) == 0) {
      _iStack00000000000000c0 = (undefined1 *)0x8000000000000000;
    }
    else {
      FUN_100645a24(&stack0x000000c0,*(long *)(unaff_x21 + 2),*(undefined8 *)(unaff_x21 + 8));
      if (_iStack00000000000000c0 == (undefined1 *)0x8000000000000005) {
        func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x00004b40,&UNK_10b234f40,&UNK_10b239da8);
        goto LAB_100f9967c;
      }
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0x10);
    uVar16 = 0x10;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994e8;
    puVar14[1] = 0x737265646165685f;
    *puVar14 = 0x707474685f766e65;
    if (*(long *)(unaff_x21 + 0xe) == 0) {
      _iStack00000000000000c0 = (undefined1 *)0x8000000000000000;
    }
    else {
      FUN_100645a24(&stack0x000000c0,*(long *)(unaff_x21 + 0xe),*(undefined8 *)(unaff_x21 + 0x14));
      if (_iStack00000000000000c0 == (undefined1 *)0x8000000000000005) {
        func_0x000108a07a3c(&UNK_108cc408f,0x2b,&stack0x00004b40,&UNK_10b234f40,&UNK_10b239da8);
        goto LAB_100f9967c;
      }
    }
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,&stack0x00004f20,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
LAB_100f983f4:
    lVar19 = -0x7ffffffffffffffb;
    if (in_stack_00000090[1][0] == '\x01') {
      auVar22 = *in_stack_00000090;
    }
    else {
      auVar22 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*in_stack_00000090 + 8) = auVar22._8_8_;
      in_stack_00000090[1][0] = 1;
    }
    *(long *)*in_stack_00000090 = auVar22._0_8_ + 1;
    in_stack_00004f68 = 0;
    in_stack_00004f70 = 8;
    in_stack_00004f88 = 0;
    in_stack_00004f80 = &UNK_108c56c70;
    in_stack_00004f98 = 0;
    in_stack_00004f90 = 0;
    in_stack_00004f78 = 0;
    puVar9 = (undefined4 *)_malloc(4);
    uVar16 = 4;
    if (puVar9 == (undefined4 *)0x0) goto LAB_100f994d0;
    *puVar9 = 0x656d616e;
    *(undefined8 *)(unaff_x29 + -0x98) = 4;
    *(undefined4 **)(unaff_x29 + -0x90) = puVar9;
    *(undefined8 *)(unaff_x29 + -0x88) = 4;
    if (lVar4 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(lVar4,4);
      if (lVar13 == 0) {
        func_0x0001087c9084(1,lVar4);
        goto LAB_100f9967c;
      }
    }
    _memcpy(lVar13,uVar3,lVar4);
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar9 = (undefined4 *)_malloc(7);
    uVar16 = 7;
    if (puVar9 == (undefined4 *)0x0) goto LAB_100f994d0;
    *(undefined4 *)((long)puVar9 + 3) = 0x64656c62;
    *puVar9 = 0x62616e65;
    *(undefined8 *)(unaff_x29 + -0x98) = 7;
    *(undefined4 **)(unaff_x29 + -0x90) = puVar9;
    *(undefined8 *)(unaff_x29 + -0x88) = 7;
    FUN_101497a9c(&stack0x000000c0,&stack0x00004f68,unaff_x29 + -0x98,&stack0x00004b40);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
    if (*(long *)(unaff_x29 + -0xe0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar14 = (undefined8 *)_malloc(0xf);
    uVar16 = 0xf;
    if (puVar14 == (undefined8 *)0x0) goto LAB_100f994d0;
    *puVar14 = 0x64656c6261736964;
    *(undefined8 *)((long)puVar14 + 7) = 0x6e6f736165725f64;
    *(undefined8 *)(unaff_x29 + -0x98) = 0xf;
    *(undefined8 **)(unaff_x29 + -0x90) = puVar14;
    *(undefined8 *)(unaff_x29 + -0x88) = 0xf;
    in_stack_00000068 = plVar1;
    in_stack_00000070 = lVar15;
    if (*(long *)(unaff_x21 + 0x4a) != -0x7ffffffffffffff9) break;
    lVar15 = -0x8000000000000000;
    bVar2 = true;
  } while( true );
  _iStack00000000000000c0 = (undefined1 *)0x0;
  in_stack_000000c8 = (undefined *)0x1;
  in_stack_000000d0 = 0;
  if (*(long *)(unaff_x21 + 0x4a) != -0x7ffffffffffffffa) goto LAB_100f986c4;
  FUN_108855060(&stack0x000000c0,0,7,1,1);
  *(undefined4 *)((long)in_stack_000000c8 + in_stack_000000d0) = 0x6e6b6e75;
  *(undefined4 *)((long)in_stack_000000c8 + in_stack_000000d0 + 3) = 0x6e776f6e;
  lVar15 = (long)_iStack00000000000000c0;
  lVar19 = (long)in_stack_000000c8;
  lVar4 = in_stack_000000d0 + 7;
  goto joined_r0x000100f9871c;
LAB_100f986c4:
  *(int **)(unaff_x29 + -0xe0) = unaff_x21 + 0x4a;
  param_1 = (undefined8 *)&stack0x000000c0;
  param_4 = &stack0x00004b40;
  param_2 = &UNK_10b209290;
  goto code_r0x000100f986f4;
}

