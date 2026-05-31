
/* WARNING: Type propagation algorithm not settling */

void FUN_101376d2c(ulong *param_1,byte *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  code *pcVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong in_x13;
  ulong in_x14;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong unaff_x26;
  ulong uVar26;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  byte *pbStack_120;
  int iStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte bStack_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined2 uStack_9e;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  uint uStack_78;
  uint uStack_74;
  byte *pbStack_70;
  
  bVar6 = *param_2;
  if (bVar6 != 0x14) {
    if (bVar6 != 0x15) {
      uVar16 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20a740);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar16;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar24 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar21 = pbVar24 + lVar14;
    uVar16 = 0x16;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_f0 = pbVar24;
    pbStack_d8 = pbVar21;
    if (*(long *)(param_2 + 0x18) == 0) {
      iStack_118 = 2;
      uVar25 = 0x8000000000000001;
      uVar26 = 0x8000000000000001;
      pbStack_120._0_4_ = 0;
      uStack_150 = in_x13;
      uStack_158 = in_x14;
      uStack_148 = unaff_x26;
    }
    else {
      lVar20 = 0;
      puVar18 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar17 = (undefined8 *)((ulong)&bStack_c0 | 1);
      iStack_118 = 2;
      pbStack_120 = (byte *)0x2;
      uVar26 = 0x8000000000000001;
      uVar25 = 0x8000000000000001;
      pbVar4 = pbVar24;
      pbStack_e8 = pbVar24;
      do {
        pbVar23 = pbVar4 + 0x40;
        bVar5 = *pbVar4;
        lVar22 = lVar20;
        pbVar24 = pbVar23;
        if (bVar5 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar4 + 1);
        puVar18[1] = *(undefined8 *)(pbVar4 + 9);
        *puVar18 = uVar12;
        pbStack_108 = *(byte **)(pbVar4 + 0x28);
        pbStack_110 = *(byte **)(pbVar4 + 0x20);
        pbStack_f8 = *(byte **)(pbVar4 + 0x38);
        uStack_100 = *(ulong *)(pbVar4 + 0x30);
        plVar2 = (long *)CONCAT71(uStack_97,uStack_98);
        plVar9 = (long *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar5;
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            bStack_bf = bStack_9f;
            if (2 < bStack_9f) {
              bStack_bf = 3;
            }
LAB_101376ffc:
            bStack_c0 = 0;
            goto LAB_101377000;
          }
          if (bVar5 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bStack_bf = (byte)plVar2;
            goto LAB_101376ffc;
          }
          if (bVar5 == 0xc) {
            if (lStack_88 == 5) {
              if ((int)*plVar9 != 0x696d696c || *(char *)((long)plVar9 + 4) != 't')
              goto LAB_101376f94;
              bStack_bf = 1;
joined_r0x000101377228:
              bStack_c0 = 0;
            }
            else if (lStack_88 == 8) {
              if (*plVar9 != 0x6449646165726874) goto LAB_101376f94;
              bStack_bf = 2;
              bStack_c0 = 0;
            }
            else {
              if ((lStack_88 != 6) ||
                 ((int)*plVar9 != 0x73727563 || *(short *)((long)plVar9 + 4) != 0x726f)) {
LAB_101376f94:
                bStack_bf = 3;
                goto joined_r0x000101377228;
              }
              bStack_bf = 0;
              bStack_c0 = 0;
            }
joined_r0x000101376f6c:
            if (plVar2 != (long *)0x0) {
              _free(plVar9);
            }
          }
          else {
LAB_101377238:
            uVar12 = FUN_108855b04(&bStack_a0,&uStack_78,&UNK_10b2122a0);
            uStack_b8 = (undefined1)uVar12;
            uStack_b7 = (undefined7)((ulong)uVar12 >> 8);
            bStack_c0 = 1;
          }
        }
        else {
          if (bVar5 == 0xd) {
            if (plVar9 == (long *)0x5) {
              if ((int)*plVar2 != 0x696d696c || *(char *)((long)plVar2 + 4) != 't')
              goto LAB_101376ff4;
              bStack_bf = 1;
            }
            else if (plVar9 == (long *)0x8) {
              if (*plVar2 != 0x6449646165726874) goto LAB_101376ff4;
              bStack_bf = 2;
            }
            else if ((plVar9 == (long *)0x6) &&
                    ((int)*plVar2 == 0x73727563 && *(short *)((long)plVar2 + 4) == 0x726f)) {
              bStack_bf = 0;
            }
            else {
LAB_101376ff4:
              bStack_bf = 3;
            }
            goto LAB_101376ffc;
          }
          if (bVar5 == 0xe) {
            func_0x000100c0fd4c(&bStack_c0,plVar9);
            goto joined_r0x000101376f6c;
          }
          if (bVar5 != 0xf) goto LAB_101377238;
          func_0x000100c0fd4c(&bStack_c0,plVar2,plVar9);
LAB_101377000:
          FUN_100e077ec(&bStack_a0);
        }
        if ((bStack_c0 & 1) != 0) {
          lStack_d0 = lVar20 + 1;
          uVar16 = CONCAT71(uStack_b7,uStack_b8);
          pbStack_e8 = pbVar23;
          goto LAB_1013773a4;
        }
        bVar5 = (byte)pbStack_110;
        if (bStack_bf < 2) {
          if (bStack_bf == 0) {
            if (uVar26 == 0x8000000000000001) {
              pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
              if (bVar5 == 0x16) {
                lStack_d0 = lVar20 + 1;
                pbStack_e8 = pbVar23;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101377828;
              }
              uVar12 = *puVar19;
              puVar18[1] = puVar19[1];
              *puVar18 = uVar12;
              uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
              *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
              *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
              bStack_a0 = bVar5;
              FUN_1004b60cc(&bStack_c0,&bStack_a0);
              uVar26 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
              if (uVar26 != 0x8000000000000001) {
                uStack_140 = CONCAT71(uStack_b7,uStack_b8);
                uStack_158 = CONCAT71(uStack_af,uStack_b0);
                goto LAB_101376de0;
              }
              lStack_d0 = lVar20 + 1;
              uVar16 = CONCAT71(uStack_b7,uStack_b8);
              uVar26 = 0x8000000000000001;
              pbStack_e8 = pbVar23;
            }
            else {
              lStack_d0 = lVar20 + 1;
              bStack_c0 = 0xa9;
              bStack_bf = 199;
              uStack_be = 0x108ca;
              uStack_b8 = 6;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
              uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_e8 = pbVar23;
              uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            }
LAB_1013773a4:
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar16;
            if (-0x7fffffffffffffff < (long)uVar25) goto LAB_1013773c8;
          }
          else {
            if (iStack_118 != 2) {
              lStack_d0 = lVar20 + 1;
              bStack_c0 = 0x21;
              bStack_bf = 0xdc;
              uStack_be = 0x108ca;
              uStack_b8 = 5;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
              uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_e8 = pbVar23;
              uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              goto LAB_1013773a4;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar5 == 0x16) goto LAB_1013776d0;
            uVar12 = *puVar19;
            puVar17[1] = puVar19[1];
            *puVar17 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
            bStack_c0 = bVar5;
            if (bVar5 == 0x10) {
LAB_10137713c:
              FUN_100e077ec(&bStack_c0);
              iStack_118 = 0;
              goto LAB_101376de0;
            }
            if (bVar5 != 0x11) {
              if (bVar5 == 0x12) goto LAB_10137713c;
              FUN_100615890(&bStack_a0,&bStack_c0);
              pbStack_120 = (byte *)((ulong)pbStack_120 & 0xffffffff00000000 | (ulong)uStack_9c);
              pbVar24 = (byte *)CONCAT71(uStack_97,uStack_98);
              if (CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0)) != 0) goto LAB_101377548;
              iStack_118 = 1;
              goto LAB_101376de0;
            }
            puVar8 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
            uVar12 = *puVar8;
            uStack_98 = (undefined1)puVar8[1];
            uStack_97 = (undefined7)((ulong)puVar8[1] >> 8);
            bStack_a0 = (byte)uVar12;
            bStack_9f = (byte)((ulong)uVar12 >> 8);
            uStack_9e = (undefined2)((ulong)uVar12 >> 0x10);
            uStack_9c = (uint)((ulong)uVar12 >> 0x20);
            lStack_88 = puVar8[3];
            uStack_90 = (undefined1)puVar8[2];
            uStack_8f = (undefined7)((ulong)puVar8[2] >> 8);
            FUN_100615890(&uStack_78,&bStack_a0);
            uVar10 = uStack_78;
            uVar16 = (ulong)pbStack_120 & 0xffffffff00000000;
            pbStack_120 = pbStack_70;
            if (uStack_78 == 0) {
              iStack_118 = 1;
              pbStack_120 = (byte *)(uVar16 | uStack_74);
            }
            _free(puVar8);
            pbVar24 = pbStack_120;
            if (uVar10 == 0) goto LAB_101376de0;
LAB_101377548:
            pbStack_120 = pbVar24;
            lStack_d0 = lVar20 + 1;
            *param_1 = 0x8000000000000001;
            param_1[1] = (ulong)pbStack_120;
            pbStack_e8 = pbVar23;
            if ((long)uVar25 < -0x7ffffffffffffffe) goto LAB_1013774c4;
LAB_1013773c8:
            if (uVar25 != 0) goto LAB_1013773cc;
          }
LAB_1013774c4:
          if ((-0x7fffffffffffffff < (long)uVar26) && (uVar26 != 0)) {
            _free(uStack_140);
          }
          FUN_100d34830(&pbStack_f0);
          if ((byte)pbStack_110 != '\x16') {
            FUN_100e077ec(&pbStack_110);
          }
          goto LAB_101377454;
        }
        if (bStack_bf == 2) {
          if (uVar25 != 0x8000000000000001) {
            lStack_d0 = lVar20 + 1;
            bStack_c0 = 0xf8;
            bStack_bf = 0x82;
            uStack_be = 0x108c9;
            uStack_b8 = 8;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar23;
            uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar16;
            if ((uVar25 & 0x7fffffffffffffff) == 0) goto LAB_1013774c4;
LAB_1013773cc:
            _free(uStack_148);
            goto LAB_1013774c4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_d0 = lVar20 + 1;
            pbStack_e8 = pbVar23;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101377828;
          }
          uVar12 = *puVar19;
          puVar18[1] = puVar19[1];
          *puVar18 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
          bStack_a0 = bVar5;
          FUN_1004b60cc(&bStack_c0,&bStack_a0);
          uVar25 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
          if (uVar25 == 0x8000000000000001) {
            lStack_d0 = lVar20 + 1;
            *param_1 = 0x8000000000000001;
            param_1[1] = CONCAT71(uStack_b7,uStack_b8);
            pbStack_e8 = pbVar23;
            goto LAB_1013774c4;
          }
          uStack_148 = CONCAT71(uStack_b7,uStack_b8);
          uStack_150 = CONCAT71(uStack_af,uStack_b0);
        }
        else {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) {
LAB_1013776d0:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            lStack_d0 = lVar20 + 1;
            pbStack_e8 = pbVar23;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101377828:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10137782c);
            (*pcVar11)();
          }
          uVar12 = *puVar19;
          puVar18[1] = puVar19[1];
          *puVar18 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
          bStack_a0 = bVar5;
          FUN_100e077ec(&bStack_a0);
        }
LAB_101376de0:
        lVar20 = lVar20 + 1;
        lVar22 = (lVar14 - 0x40U >> 6) + 1;
        pbVar24 = pbVar21;
        pbVar4 = pbVar23;
      } while (pbVar23 != pbVar21);
      uVar16 = uStack_140;
      lStack_d0 = lVar22;
    }
    lVar14 = lStack_d0;
    uVar3 = 0x8000000000000000;
    if (uVar26 != 0x8000000000000001) {
      uVar3 = uVar26;
    }
    *param_1 = uVar3;
    param_1[1] = uVar16;
    iVar1 = 0;
    if (iStack_118 != 2) {
      iVar1 = iStack_118;
    }
    uVar15 = 0;
    if (iStack_118 != 2) {
      uVar15 = pbStack_120._0_4_;
    }
    uVar26 = 0x8000000000000000;
    if (uVar25 != 0x8000000000000001) {
      uVar26 = uVar25;
    }
    param_1[2] = uStack_158;
    param_1[3] = uVar26;
    param_1[4] = uStack_148;
    param_1[5] = uStack_150;
    *(int *)(param_1 + 6) = iVar1;
    *(undefined4 *)((long)param_1 + 0x34) = uVar15;
    pbStack_e8 = pbVar24;
    FUN_100d34830(&pbStack_f0);
    if (pbVar21 != pbVar24) {
      bStack_a0 = (byte)lVar14;
      bStack_9f = (byte)((ulong)lVar14 >> 8);
      uStack_9e = (undefined2)((ulong)lVar14 >> 0x10);
      uStack_9c = (uint)((ulong)lVar14 >> 0x20);
      uVar25 = FUN_1087e422c(((ulong)((long)pbVar21 - (long)pbVar24) >> 6) + lVar14,&bStack_a0,
                             &UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar25;
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
        _free(uVar16);
      }
      if ((uVar26 & 0x7fffffffffffffff) != 0) {
        _free(uStack_148);
      }
    }
    goto LAB_101377454;
  }
  uVar16 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18);
  pbVar24 = pbVar4 + lVar14 * 0x20;
  pbStack_f0 = (byte *)0x0;
  pbVar21 = pbVar4;
  pbStack_110 = pbVar4;
  uStack_100 = uVar16;
  pbStack_f8 = pbVar24;
  if (lVar14 == 0) {
LAB_101377294:
    pbStack_108 = pbVar21;
    uVar26 = FUN_1087e422c(0,&UNK_10b2332c8,&UNK_10b20a590);
LAB_1013772b0:
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar26;
LAB_1013772b8:
    lVar14 = ((ulong)((long)pbVar24 - (long)pbVar21) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(pbVar21);
      pbVar21 = pbVar21 + 0x20;
    }
  }
  else {
    pbVar21 = pbVar4 + 0x20;
    if (*pbVar4 == 0x16) goto LAB_101377294;
    uVar12 = *(undefined8 *)(pbVar4 + 1);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar4 + 9);
    bStack_9f = (byte)uVar12;
    uStack_9e = (undefined2)((ulong)uVar12 >> 8);
    uStack_9c = (uint)((ulong)uVar12 >> 0x18);
    uStack_98 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_88 = *(long *)(pbVar4 + 0x18);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar4 + 0x10);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x10) >> 8);
    pbStack_f0 = (byte *)0x1;
    pbStack_108 = pbVar21;
    bStack_a0 = *pbVar4;
    FUN_1004b60cc(&bStack_c0,&bStack_a0);
    uVar25 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
    uVar26 = CONCAT71(uStack_b7,uStack_b8);
    if (uVar25 == 0x8000000000000001) goto LAB_1013772b0;
    if (lVar14 == 1) {
LAB_101377360:
      uVar12 = 1;
LAB_101377364:
      pbVar23 = (byte *)FUN_1087e422c(uVar12,&UNK_10b2332c8,&UNK_10b20a590);
LAB_101377378:
      *param_1 = 0x8000000000000001;
      param_1[1] = (ulong)pbVar23;
      if ((uVar25 & 0x7fffffffffffffff) != 0) {
        _free(uVar26);
      }
      goto LAB_1013772b8;
    }
    uVar3 = CONCAT71(uStack_af,uStack_b0);
    pbVar21 = pbVar4 + 0x40;
    bVar5 = pbVar4[0x20];
    pbStack_108 = pbVar21;
    if (bVar5 == 0x16) goto LAB_101377360;
    uVar12 = *(undefined8 *)(pbVar4 + 0x21);
    uStack_b7 = (undefined7)*(undefined8 *)(pbVar4 + 0x29);
    bStack_bf = (byte)uVar12;
    uStack_be = (undefined6)((ulong)uVar12 >> 8);
    uStack_b8 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a8 = *(undefined8 *)(pbVar4 + 0x38);
    uStack_b0 = (undefined1)*(undefined8 *)(pbVar4 + 0x30);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x30) >> 8);
    pbStack_f0 = (byte *)0x2;
    bStack_c0 = bVar5;
    if (bVar5 != 0x10) {
      if (bVar5 == 0x11) {
        puVar17 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
        uVar12 = *puVar17;
        uStack_98 = (undefined1)puVar17[1];
        uStack_97 = (undefined7)((ulong)puVar17[1] >> 8);
        bStack_a0 = (byte)uVar12;
        bStack_9f = (byte)((ulong)uVar12 >> 8);
        uStack_9e = (undefined2)((ulong)uVar12 >> 0x10);
        uStack_9c = (uint)((ulong)uVar12 >> 0x20);
        lStack_88 = puVar17[3];
        uStack_90 = (undefined1)puVar17[2];
        uStack_8f = (undefined7)((ulong)puVar17[2] >> 8);
        FUN_100615890(&uStack_78,&bStack_a0);
        if (uStack_78 == 0) {
          pbStack_70 = (byte *)(ulong)uStack_74;
        }
        _free(puVar17);
        pbVar23 = pbStack_70;
      }
      else {
        if (bVar5 == 0x12) goto LAB_101377538;
        FUN_100615890(&bStack_a0,&bStack_c0);
        uStack_78 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
        pbVar23 = (byte *)CONCAT71(uStack_97,uStack_98);
        if (uStack_78 == 0) {
          pbVar23 = (byte *)(ulong)uStack_9c;
        }
      }
      if ((uStack_78 & 1) == 0) {
        uVar15 = 1;
        pbVar13 = pbVar23;
        goto LAB_10137760c;
      }
      goto LAB_101377378;
    }
LAB_101377538:
    pbVar13 = (byte *)FUN_100e077ec(&bStack_c0);
    uVar15 = 0;
LAB_10137760c:
    if (lVar14 == 2) {
LAB_101377628:
      uVar12 = 2;
      goto LAB_101377364;
    }
    pbVar21 = pbVar4 + 0x60;
    pbStack_108 = pbVar21;
    if (pbVar4[0x40] == 0x16) goto LAB_101377628;
    uVar12 = *(undefined8 *)(pbVar4 + 0x41);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar4 + 0x49);
    bStack_9f = (byte)uVar12;
    uStack_9e = (undefined2)((ulong)uVar12 >> 8);
    uStack_9c = (uint)((ulong)uVar12 >> 0x18);
    uStack_98 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_88 = *(long *)(pbVar4 + 0x58);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar4 + 0x50);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x50) >> 8);
    pbStack_f0 = (byte *)0x3;
    bStack_a0 = pbVar4[0x40];
    FUN_1004b60cc(&bStack_c0,&bStack_a0);
    uVar7 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
    pbVar23 = (byte *)CONCAT71(uStack_b7,uStack_b8);
    if (uVar7 == 0x8000000000000001) goto LAB_101377378;
    *param_1 = uVar25;
    param_1[1] = uVar26;
    param_1[2] = uVar3;
    param_1[3] = uVar7;
    param_1[4] = (ulong)pbVar23;
    param_1[5] = CONCAT71(uStack_af,uStack_b0);
    *(undefined4 *)(param_1 + 6) = uVar15;
    *(int *)((long)param_1 + 0x34) = (int)pbVar13;
    uVar16 = FUN_100fbc738(&pbStack_110);
    if (uVar16 == 0) goto LAB_101377454;
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar16;
    if ((uVar25 & 0x7fffffffffffffff) != 0) {
      _free(uVar26);
    }
    uVar16 = uVar7 & 0x7fffffffffffffff;
    pbVar4 = pbVar23;
  }
  if (uVar16 != 0) {
    _free(pbVar4);
  }
LAB_101377454:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

