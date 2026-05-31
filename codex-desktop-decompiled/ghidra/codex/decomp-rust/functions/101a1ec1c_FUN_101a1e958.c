
void FUN_101a1e958(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong unaff_x19;
  long *unaff_x21;
  long *plVar11;
  long unaff_x25;
  byte bVar12;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  byte bVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  long lVar14;
  ulong in_stack_00000008;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  ulong uStack0000000000000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000090;
  char cStack00000000000000a0;
  char cStack00000000000000a1;
  long *in_stack_000000a8;
  long *in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
code_r0x000101a1e958:
  plVar4 = (long *)FUN_1088bbbb8(s_missing_field_____108ac28f7,param_2);
LAB_101a1e97c:
  uStack0000000000000038 = 0x8000000000000000;
LAB_101a1e994:
  *(char *)(unaff_x27 + 0x48) = *(char *)(unaff_x27 + 0x48) + '\x01';
  plVar5 = (long *)FUN_1018394e4(unaff_x27);
  plVar11 = plVar4;
  if (uStack0000000000000038 != unaff_x19) {
    do {
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5;
        plVar5 = plVar11;
        if (uStack0000000000000038 != 0) goto LAB_101a1ed38;
        goto LAB_101a1ed48;
      }
      uVar6 = FUN_10196fc70(in_stack_00000080,in_stack_00000088,unaff_x21,in_stack_00000030);
      if (in_stack_00000070 == 0) {
        __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h3dcfdf2762f77a02E
                  (&stack0x00000060,1,&stack0x00000080,1);
      }
      plVar5 = in_stack_00000068;
      plVar4 = in_stack_00000060;
      bVar2 = false;
      lVar9 = 0;
      bVar1 = (byte)(uVar6 >> 0x38);
      bVar12 = bVar1 >> 1;
      uVar6 = uVar6 & (ulong)in_stack_00000068;
      lVar14 = *(long *)((long)in_stack_00000060 + uVar6);
      uVar10 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar12),
                        CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar12),
                                 CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar12),
                                          CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar12),
                                                   CONCAT13(-((byte)((ulong)lVar14 >> 0x18) ==
                                                             bVar12),CONCAT12(-((byte)((ulong)lVar14
                                                                                      >> 0x10) ==
                                                                               bVar12),CONCAT11(-((
                                                  byte)((ulong)lVar14 >> 8) == bVar12),
                                                  -((byte)lVar14 == bVar12)))))))) &
               0x8080808080808080;
joined_r0x000101a1e9fc:
      while (uVar10 == 0) {
        cVar15 = (char)((ulong)lVar14 >> 8);
        cVar16 = (char)((ulong)lVar14 >> 0x10);
        cVar17 = (char)((ulong)lVar14 >> 0x18);
        cVar18 = (char)((ulong)lVar14 >> 0x20);
        cVar19 = (char)((ulong)lVar14 >> 0x28);
        cVar20 = (char)((ulong)lVar14 >> 0x30);
        uVar10 = in_stack_00000008;
        if (bVar2) {
LAB_101a1ea84:
          bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar14 >> 0x38) == -1),
                                       CONCAT16(-(cVar20 == -1),
                                                CONCAT15(-(cVar19 == -1),
                                                         CONCAT14(-(cVar18 == -1),
                                                                  CONCAT13(-(cVar17 == -1),
                                                                           CONCAT12(-(cVar16 == -1),
                                                                                    CONCAT11(-(
                                                  cVar15 == -1),-((char)lVar14 == -1)))))))),1);
          if ((bVar13 & 1) != 0) {
            uVar6 = (ulong)*(char *)((long)plVar4 + uVar10);
            if (-1 < *(char *)((long)plVar4 + uVar10)) {
              lVar9 = *plVar4;
              uVar6 = CONCAT17(-(lVar9 < 0),
                               CONCAT16(-((char)((ulong)lVar9 >> 0x30) < '\0'),
                                        CONCAT15(-((char)((ulong)lVar9 >> 0x28) < '\0'),
                                                 CONCAT14(-((char)((ulong)lVar9 >> 0x20) < '\0'),
                                                          CONCAT13(-((char)((ulong)lVar9 >> 0x18) <
                                                                    '\0'),CONCAT12(-((char)((ulong)
                                                  lVar9 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar9 >> 8) < '\0'),
                                                           -((char)lVar9 < '\0'))))))));
              uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
              uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              uVar10 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
              uVar6 = (ulong)*(byte *)((long)plVar4 + uVar10);
            }
            *(byte *)((long)plVar4 + uVar10) = bVar1 >> 1;
            *(byte *)((long)plVar4 + (uVar10 - 8 & (ulong)plVar5) + 8) = bVar1 >> 1;
            in_stack_00000070 = in_stack_00000070 - (uVar6 & 1);
            in_stack_00000078 = in_stack_00000078 + 1;
            plVar4[uVar10 * -6 + -6] = unaff_x25;
            plVar4[uVar10 * -6 + -5] = (long)unaff_x21;
            plVar4[uVar10 * -6 + -4] = in_stack_00000030;
            plVar4[uVar10 * -6 + -3] = uStack0000000000000038;
            plVar4[uVar10 * -6 + -2] = (long)plVar11;
            plVar4[uVar10 * -6 + -1] = (long)in_stack_00000028;
            goto LAB_101a1e64c;
          }
          bVar2 = true;
          in_stack_00000008 = uVar10;
        }
        else {
          uVar10 = CONCAT17(-(lVar14 < 0),
                            CONCAT16(-(cVar20 < '\0'),
                                     CONCAT15(-(cVar19 < '\0'),
                                              CONCAT14(-(cVar18 < '\0'),
                                                       CONCAT13(-(cVar17 < '\0'),
                                                                CONCAT12(-(cVar16 < '\0'),
                                                                         CONCAT11(-(cVar15 < '\0'),
                                                                                  -((char)lVar14 <
                                                                                   '\0'))))))));
          if (uVar10 != 0) {
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & (ulong)plVar5;
            goto LAB_101a1ea84;
          }
          bVar2 = false;
        }
        lVar9 = lVar9 + 8;
        uVar6 = lVar9 + uVar6 & (ulong)plVar5;
        lVar14 = *(long *)((long)plVar4 + uVar6);
        uVar10 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar12),
                          CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar12),
                                   CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar12),
                                            CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar12),
                                                     CONCAT13(-((byte)((ulong)lVar14 >> 0x18) ==
                                                               bVar12),CONCAT12(-((byte)((ulong)
                                                  lVar14 >> 0x10) == bVar12),
                                                  CONCAT11(-((byte)((ulong)lVar14 >> 8) == bVar12),
                                                           -((byte)lVar14 == bVar12)))))))) &
                 0x8080808080808080;
      }
      uVar8 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & (ulong)plVar5;
      if ((in_stack_00000030 != plVar4[uVar8 * -6 + -4]) ||
         (iVar3 = _memcmp(unaff_x21,plVar4[uVar8 * -6 + -5]), iVar3 != 0)) {
        uVar10 = uVar10 - 1 & uVar10;
        goto joined_r0x000101a1e9fc;
      }
      uVar6 = plVar4[uVar8 * -6 + -3];
      lVar9 = plVar4[uVar8 * -6 + -2];
      plVar4[uVar8 * -6 + -3] = uStack0000000000000038;
      plVar4[uVar8 * -6 + -2] = (long)plVar11;
      plVar4[uVar8 * -6 + -1] = (long)in_stack_00000028;
      if (unaff_x25 != 0) {
        _free(unaff_x21);
      }
      if ((uVar6 & 0x7fffffffffffffff) != 0) {
        _free(lVar9);
      }
LAB_101a1e64c:
      unaff_x19 = 0x8000000000000000;
      FUN_1019e35c0(unaff_x29 + -0xb0,unaff_x29 + -0xc0);
      unaff_x25 = *(long *)(unaff_x29 + -0xb0);
      unaff_x21 = *(long **)(unaff_x29 + -0xa8);
      plVar4 = unaff_x21;
      if (unaff_x25 == -0x7fffffffffffffff) goto LAB_101a1ed60;
      if (unaff_x25 == -0x8000000000000000) {
        in_stack_00000048 = in_stack_00000078;
        in_stack_00000040 = in_stack_00000070;
        in_stack_00000058 = in_stack_00000088;
        in_stack_00000050 = in_stack_00000080;
        _cStack00000000000000a0 = in_stack_00000060;
        in_stack_000000a8 = in_stack_00000068;
        goto LAB_101a1ed6c;
      }
      unaff_x27 = *(long *)(unaff_x29 + -0xc0);
      uVar10 = *(ulong *)(unaff_x27 + 0x20);
      uVar6 = *(ulong *)(unaff_x27 + 0x28);
      if (uVar10 <= uVar6) {
LAB_101a1ec6c:
        _cStack00000000000000a0 = (long *)0x3;
        plVar4 = (long *)FUN_10889a21c(unaff_x27,&stack0x000000a0);
        goto LAB_101a1ed50;
      }
      in_stack_00000030 = *(long *)(unaff_x29 + -0xa0);
      while( true ) {
        bVar1 = *(byte *)(*(long *)(unaff_x27 + 0x18) + uVar6);
        if (0x3a < bVar1) goto LAB_101a1ee4c;
        if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
        uVar6 = uVar6 + 1;
        *(ulong *)(unaff_x27 + 0x28) = uVar6;
        if (uVar10 == uVar6) goto LAB_101a1ec6c;
      }
      if ((ulong)bVar1 != 0x3a) {
LAB_101a1ee4c:
        _cStack00000000000000a0 = (long *)0x6;
        plVar4 = (long *)FUN_10889a21c(unaff_x27,&stack0x000000a0);
        goto LAB_101a1ed50;
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(unaff_x27 + 0x28) = uVar6;
      if (uVar10 <= uVar6) {
LAB_101a1ec84:
        _cStack00000000000000a0 = (long *)0x5;
        plVar4 = (long *)FUN_10889a21c(unaff_x27,&stack0x000000a0);
        goto LAB_101a1ed50;
      }
      while (bVar1 = *(byte *)(*(long *)(unaff_x27 + 0x18) + uVar6),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar6 = uVar6 + 1;
        *(ulong *)(unaff_x27 + 0x28) = uVar6;
        if (uVar10 == uVar6) goto LAB_101a1ec84;
      }
      if (bVar1 != 0x5b) goto code_r0x000101a1e700;
      cVar15 = *(char *)(unaff_x27 + 0x48) + -1;
      *(char *)(unaff_x27 + 0x48) = cVar15;
      if (cVar15 == '\0') {
        _cStack00000000000000a0 = (long *)0x18;
        plVar4 = (long *)FUN_10889a21c(unaff_x27,&stack0x000000a0);
        goto LAB_101a1ed50;
      }
      *(ulong *)(unaff_x27 + 0x28) = uVar6 + 1;
      *(long *)(unaff_x29 + -0x88) = unaff_x27;
      *(undefined1 *)(unaff_x29 + -0x80) = 1;
      FUN_1019e3854(&stack0x000000a0,unaff_x29 + -0x88);
      plVar4 = in_stack_000000a8;
      if (cStack00000000000000a0 == '\x01') {
LAB_101a1e8f0:
        uStack0000000000000038 = 0x8000000000000000;
      }
      else {
        if (cStack00000000000000a1 != '\x01') {
          plVar4 = (long *)FUN_108880da4(0,&UNK_10b268630,&UNK_10b25d520);
          goto LAB_101a1e8f0;
        }
        FUN_101821454(&stack0x000000a0,*(undefined8 *)(unaff_x29 + -0x88));
        uStack0000000000000038 = (ulong)_cStack00000000000000a0;
        plVar4 = in_stack_000000a8;
        if (_cStack00000000000000a0 == (long *)0x8000000000000000) goto LAB_101a1e8f0;
        in_stack_00000028 = in_stack_000000b0;
      }
      *(char *)(unaff_x27 + 0x48) = *(char *)(unaff_x27 + 0x48) + '\x01';
      plVar5 = (long *)FUN_101839588(unaff_x27);
      plVar11 = plVar4;
      if (uStack0000000000000038 == 0x8000000000000000) {
        if (plVar5 == (long *)0x0) goto LAB_101a1ed48;
        lVar9 = *plVar5;
        if (lVar9 != 1) goto LAB_101a1ecf8;
        FUN_10194d0ac(plVar5 + 1);
        goto LAB_101a1ed38;
      }
    } while( true );
  }
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if (lVar9 == 1) {
      FUN_10194d0ac(plVar5 + 1);
    }
    else {
LAB_101a1ecf8:
      if ((lVar9 == 0) && (plVar5[2] != 0)) {
        _free(plVar5[1]);
      }
    }
LAB_101a1ed38:
    _free(plVar5);
  }
  goto LAB_101a1ed48;
LAB_101a1e974:
  unaff_x19 = 0x8000000000000000;
  _free(plVar5);
  goto LAB_101a1e97c;
code_r0x000101a1e700:
  if (bVar1 == 0x7b) {
    cVar15 = *(char *)(unaff_x27 + 0x48) + -1;
    *(char *)(unaff_x27 + 0x48) = cVar15;
    if (cVar15 != '\0') {
      *(ulong *)(unaff_x27 + 0x28) = uVar6 + 1;
      *(long *)(unaff_x29 + -0x98) = unaff_x27;
      *(undefined1 *)(unaff_x29 + -0x90) = 1;
      uStack0000000000000038 = 0x8000000000000000;
      plVar5 = (long *)0x8000000000000001;
LAB_101a1e734:
      do {
        FUN_1019e3464(&stack0x000000a0,unaff_x29 + -0x98);
        plVar4 = in_stack_000000a8;
        if (cStack00000000000000a0 == '\x01') break;
        if (cStack00000000000000a1 != '\x01') {
          plVar4 = plVar5;
          if (uStack0000000000000038 != 0x8000000000000000) goto LAB_101a1e98c;
          *(undefined **)(unaff_x29 + -0x88) = &UNK_108cea1d8;
          *(undefined8 *)(unaff_x29 + -0x80) = 2;
          _cStack00000000000000a0 = (long *)(unaff_x29 - 0x88);
          in_stack_000000a8 = (long *)&DAT_10192d9a4;
          param_2 = (undefined8 *)&stack0x000000a0;
          in_stack_00000028 = plVar5;
          goto code_r0x000101a1e958;
        }
        lVar9 = *(long *)(unaff_x29 + -0x98);
        *(long *)(lVar9 + 0x28) = *(long *)(lVar9 + 0x28) + 1;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                  (&stack0x000000a0,lVar9 + 0x18,lVar9);
        plVar4 = in_stack_000000a8;
        if (_cStack00000000000000a0 == (long *)0x2) break;
        if ((in_stack_000000b0 == (long *)0x2) && ((short)*in_stack_000000a8 == 0x6469)) {
          if (uStack0000000000000038 != 0x8000000000000000) {
            *(undefined **)(unaff_x29 + -0x88) = &UNK_108cea1d8;
            *(undefined8 *)(unaff_x29 + -0x80) = 2;
            _cStack00000000000000a0 = (long *)(unaff_x29 - 0x88);
            in_stack_000000a8 = (long *)&DAT_10192d9a4;
            plVar4 = (long *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x000000a0);
            in_stack_00000028 = plVar5;
            if (uStack0000000000000038 != 0) goto LAB_101a1e974;
            uStack0000000000000038 = 0x8000000000000000;
            goto LAB_101a1e98c;
          }
          uVar6 = *(ulong *)(lVar9 + 0x28);
          if (uVar6 < *(ulong *)(lVar9 + 0x20)) {
            while( true ) {
              bVar1 = *(byte *)(*(long *)(lVar9 + 0x18) + uVar6);
              if (0x3a < bVar1) goto LAB_101a1ec3c;
              if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
              uVar6 = uVar6 + 1;
              *(ulong *)(lVar9 + 0x28) = uVar6;
              if (*(ulong *)(lVar9 + 0x20) == uVar6) goto LAB_101a1eb80;
            }
            if ((ulong)bVar1 == 0x3a) {
              *(ulong *)(lVar9 + 0x28) = uVar6 + 1;
              FUN_101821454(unaff_x29 + -0x88,lVar9);
              uStack0000000000000038 = *(ulong *)(unaff_x29 + -0x88);
              plVar4 = *(long **)(unaff_x29 + -0x80);
              if (uStack0000000000000038 != 0x8000000000000000) {
                in_stack_00000028 = *(long **)(unaff_x29 + -0x78);
                plVar5 = plVar4;
                goto LAB_101a1e734;
              }
            }
            else {
LAB_101a1ec3c:
              _cStack00000000000000a0 = (long *)0x6;
              plVar4 = (long *)FUN_10889a21c(lVar9,&stack0x000000a0);
            }
          }
          else {
LAB_101a1eb80:
            _cStack00000000000000a0 = (long *)0x3;
            plVar4 = (long *)FUN_10889a21c(lVar9,&stack0x000000a0);
          }
          uStack0000000000000038 = 0x8000000000000000;
          in_stack_00000028 = plVar5;
          goto LAB_101a1e994;
        }
        plVar4 = (long *)FUN_1018300f4(lVar9);
      } while (plVar4 == (long *)0x0);
      if ((uStack0000000000000038 & 0x7fffffffffffffff) != 0) goto LAB_101a1e974;
      uStack0000000000000038 = 0x8000000000000000;
LAB_101a1e98c:
      unaff_x19 = 0x8000000000000000;
      goto LAB_101a1e994;
    }
    _cStack00000000000000a0 = (long *)0x18;
    plVar4 = (long *)FUN_10889a21c(unaff_x27,&stack0x000000a0);
  }
  else {
    plVar4 = (long *)FUN_10889a27c(unaff_x27,unaff_x29 + -0x69,&UNK_10b26a430);
LAB_101a1ed48:
    plVar4 = (long *)FUN_10889a5f0(plVar4,unaff_x27);
  }
LAB_101a1ed50:
  if (unaff_x25 != 0) {
    _free(unaff_x21);
  }
LAB_101a1ed60:
  FUN_10193b78c(&stack0x00000060);
  _cStack00000000000000a0 = (long *)0x0;
  in_stack_000000a8 = plVar4;
LAB_101a1ed6c:
  *(char *)(unaff_x28 + 0x48) = *(char *)(unaff_x28 + 0x48) + '\x01';
  in_stack_000000b8 = in_stack_00000048;
  in_stack_000000b0 = (long *)in_stack_00000040;
  in_stack_000000c8 = in_stack_00000058;
  in_stack_000000c0 = in_stack_00000050;
  plVar5 = (long *)FUN_1018394e4(unaff_x28);
  plVar4 = in_stack_000000a8;
  in_stack_00000068 = in_stack_000000a8;
  in_stack_00000060 = _cStack00000000000000a0;
  in_stack_00000078 = in_stack_000000b8;
  in_stack_00000070 = (long)in_stack_000000b0;
  in_stack_00000088 = in_stack_000000c8;
  in_stack_00000080 = in_stack_000000c0;
  in_stack_00000090 = plVar5;
  if (_cStack00000000000000a0 == (long *)0x0) {
    if (plVar5 != (long *)0x0) {
      if (*plVar5 == 1) {
        FUN_10194d0ac(plVar5 + 1);
      }
      else if ((*plVar5 == 0) && (plVar5[2] != 0)) {
        _free(plVar5[1]);
      }
      _free(plVar5);
    }
  }
  else {
    if (plVar5 == (long *)0x0) {
      in_stack_00000020[3] = in_stack_000000b8;
      in_stack_00000020[2] = in_stack_000000b0;
      in_stack_00000020[5] = in_stack_000000c8;
      in_stack_00000020[4] = in_stack_000000c0;
      *in_stack_00000020 = _cStack00000000000000a0;
      in_stack_00000020[1] = in_stack_000000a8;
      return;
    }
    FUN_10193b78c(&stack0x00000060);
    plVar4 = plVar5;
  }
  uVar7 = FUN_10889a5f0(plVar4,unaff_x28);
  *in_stack_00000020 = 0;
  in_stack_00000020[1] = uVar7;
  return;
}

