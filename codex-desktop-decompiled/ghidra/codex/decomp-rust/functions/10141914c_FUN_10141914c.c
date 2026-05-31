
void FUN_10141914c(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 extraout_w0;
  undefined1 extraout_w0_00;
  undefined1 extraout_w0_01;
  undefined1 extraout_w0_02;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  byte bVar10;
  byte *pbVar11;
  byte *unaff_x21;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long unaff_x27;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *pbStack_138;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined1 auStack_71 [17];
  byte *pbVar12;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lStack_110 = *(long *)(param_2 + 8);
    pbStack_120 = *(byte **)(param_2 + 0x10);
    pbVar8 = pbStack_120 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_100 = (byte *)0x0;
    pbVar11 = pbStack_120;
    pbStack_108 = pbVar8;
    if (*(long *)(param_2 + 0x18) == 0) {
joined_r0x0001014196e0:
      bVar2 = 0;
      pbVar12 = pbStack_100;
      bVar10 = bStack_a0;
      pbStack_118 = pbVar11;
      pbStack_100 = (byte *)0x1;
joined_r0x0001014196e0:
      if (pbVar11 == pbVar8) {
LAB_101419744:
        bVar16 = 0;
        pbStack_100 = pbVar12;
        bStack_a0 = bVar10;
      }
      else {
        pbStack_118 = pbVar11 + 0x20;
        bStack_a0 = *pbVar11;
        if (bStack_a0 == 0x16) goto LAB_101419744;
        uVar9 = *(undefined8 *)(pbVar11 + 1);
        uStack_97 = (undefined7)*(undefined8 *)(pbVar11 + 9);
        bStack_9f = (byte)uVar9;
        bVar16 = bStack_9f;
        uStack_9e = (undefined6)((ulong)uVar9 >> 8);
        uStack_98 = (undefined1)((ulong)uVar9 >> 0x38);
        uStack_88 = *(byte **)(pbVar11 + 0x18);
        uStack_90 = (undefined1)*(undefined8 *)(pbVar11 + 0x10);
        uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x10) >> 8);
        if (bStack_a0 != 0) {
          pbStack_138 = (byte *)FUN_108855b04(&bStack_a0,auStack_71,&UNK_10b20a560);
          goto LAB_10141978c;
        }
        FUN_100e077ec(&bStack_a0);
      }
      FUN_100f26234(&bStack_a0,&pbStack_120);
      lVar14 = CONCAT62(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
      pbStack_138 = (byte *)CONCAT71(uStack_97,uStack_98);
      if (lVar14 == -0x7ffffffffffffffe) goto LAB_10141978c;
      if (lVar14 == -0x7fffffffffffffff) {
        pbStack_138 = (byte *)FUN_1087e422c(2,&UNK_10b22fc48,&UNK_10b20a590);
        goto LAB_10141978c;
      }
      lVar15 = CONCAT71(uStack_8f,uStack_90);
      uStack_88._0_2_ = CONCAT11(bVar16,bVar2);
      lVar7 = FUN_100fbc738(&pbStack_120);
      if (lVar7 != 0) {
        bStack_a0 = 1;
        bStack_9f = 0;
        uStack_9e = 0x800000000000;
        uStack_98 = (undefined1)lVar7;
        uStack_97 = (undefined7)((ulong)lVar7 >> 8);
        if (lVar14 == -0x8000000000000000) goto LAB_101419978;
        if (lVar15 != 0) {
          pbVar8 = pbStack_138 + 8;
          do {
            if (*(long *)(pbVar8 + -8) != 0) {
              _free(*(undefined8 *)pbVar8);
            }
            pbVar8 = pbVar8 + 0x18;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        goto joined_r0x00010141996c;
      }
    }
    else {
      pbVar11 = pbStack_120 + 0x20;
      bVar10 = *pbStack_120;
      if (bVar10 == 0x16) goto joined_r0x0001014196e0;
      uVar9 = *(undefined8 *)(pbStack_120 + 1);
      uStack_97 = (undefined7)*(undefined8 *)(pbStack_120 + 9);
      bStack_9f = (byte)uVar9;
      bVar2 = bStack_9f;
      uStack_9e = (undefined6)((ulong)uVar9 >> 8);
      uStack_98 = (undefined1)((ulong)uVar9 >> 0x38);
      uStack_88 = *(byte **)(pbStack_120 + 0x18);
      uStack_90 = (undefined1)*(undefined8 *)(pbStack_120 + 0x10);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbStack_120 + 0x10) >> 8);
      pbStack_100 = (byte *)0x1;
      pbStack_118 = pbVar11;
      bStack_a0 = bVar10;
      if (bVar10 == 0) {
        FUN_100e077ec(&bStack_a0);
        pbVar12 = pbStack_100;
        bVar10 = bStack_a0;
        pbStack_100 = (byte *)0x2;
        goto joined_r0x0001014196e0;
      }
      pbStack_138 = (byte *)FUN_108855b04(&bStack_a0,auStack_71,&UNK_10b20a560);
LAB_10141978c:
      bStack_a0 = 1;
      bStack_9f = 0;
      uStack_9e = 0x800000000000;
      uStack_98 = SUB81(pbStack_138,0);
      uStack_97 = (undefined7)((ulong)pbStack_138 >> 8);
      lVar15 = ((ulong)((long)pbStack_108 - (long)pbStack_118) >> 5) + 1;
      pbVar8 = pbStack_118;
      while (lVar15 = lVar15 + -1, pbStack_138 = pbStack_120, lVar14 = lStack_110, lVar15 != 0) {
        FUN_100e077ec(pbVar8);
        pbVar8 = pbVar8 + 0x20;
      }
joined_r0x00010141996c:
      if (lVar14 != 0) goto LAB_101419974;
    }
  }
  else {
    if (bVar3 != 0x15) {
      uVar9 = FUN_108855b04(param_2,auStack_71,&UNK_10b20bb20);
      goto LAB_1014199a0;
    }
    uStack_f0 = *(undefined8 *)(param_2 + 8);
    pbVar11 = *(byte **)(param_2 + 0x10);
    pbVar8 = pbVar11 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
    puStack_e0 = (undefined *)0x0;
    lStack_d8 = -0x7fffffffffffffff;
    pbStack_100 = pbVar11;
    pbStack_e8 = pbVar8;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar10 = 0;
      lStack_128 = -0x7fffffffffffffff;
      pbStack_138 = unaff_x21;
      pbStack_f8 = pbVar11;
    }
    else {
      puVar17 = (undefined8 *)((ulong)&uStack_c0 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_120 | 1);
      puVar13 = (undefined8 *)((ulong)&bStack_a0 | 1);
      bVar10 = 2;
      bVar4 = true;
      lStack_128 = -0x7fffffffffffffff;
      lVar14 = -0x7fffffffffffffff;
      pbVar12 = pbVar11;
      pbVar18 = pbVar8;
      do {
        pbVar8 = pbVar18;
        pbVar11 = pbVar12 + 0x40;
        bVar2 = *pbVar12;
        pbStack_f8 = pbVar11;
        if (bVar2 == 0x16) break;
        puStack_e0 = puStack_e0 + 1;
        uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,bVar2);
        uVar9 = *(undefined8 *)(pbVar12 + 1);
        uVar21 = *(undefined8 *)(pbVar12 + 0x18);
        uVar20 = *(undefined8 *)(pbVar12 + 0x10);
        uVar23 = *(undefined8 *)(pbVar12 + 0x28);
        uVar22 = *(undefined8 *)(pbVar12 + 0x20);
        puVar17[1] = *(undefined8 *)(pbVar12 + 9);
        *puVar17 = uVar9;
        *(undefined8 *)((long)puVar17 + 0x17) = uVar21;
        *(undefined8 *)((long)puVar17 + 0xf) = uVar20;
        uStack_88 = *(byte **)(pbVar12 + 0x38);
        uStack_98 = (undefined1)uVar23;
        uStack_97 = (undefined7)((ulong)uVar23 >> 8);
        bStack_a0 = (byte)uVar22;
        bStack_9f = (byte)((ulong)uVar22 >> 8);
        uStack_9e = (undefined6)((ulong)uVar22 >> 0x10);
        uStack_90 = (undefined1)*(undefined8 *)(pbVar12 + 0x30);
        uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar12 + 0x30) >> 8);
        if ((byte)pbStack_120 != '\x16') {
          FUN_100e077ec(&pbStack_120);
        }
        plVar5 = plStack_b0;
        plVar1 = plStack_b8;
        pbStack_118 = (byte *)CONCAT71(uStack_97,uStack_98);
        pbStack_120 = (byte *)CONCAT62(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
        lStack_110 = CONCAT71(uStack_8f,uStack_90);
        pbStack_108 = uStack_88;
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            bStack_9f = uStack_c0._1_1_;
            if (2 < uStack_c0._1_1_) {
              bStack_9f = 3;
            }
LAB_101419514:
            bStack_a0 = 0;
            goto LAB_101419518;
          }
          if (bVar2 == 4) {
            if ((long *)0x2 < plStack_b8) {
              plVar1 = (long *)0x3;
            }
            bStack_9f = (byte)plVar1;
            goto LAB_101419514;
          }
          if (bVar2 == 0xc) {
            if (lStack_a8 == 0x19) {
              if (((*plStack_b0 != 0x6f4e74754f74706f || plStack_b0[1] != 0x6974616369666974) ||
                  plStack_b0[2] != 0x646f6874654d6e6f) || (char)plStack_b0[3] != 's')
              goto LAB_101419458;
              bStack_9f = 2;
joined_r0x000101419654:
              bStack_a0 = 0;
            }
            else if (lStack_a8 == 0x12) {
              if ((*plStack_b0 != 0x4174736575716572 || plStack_b0[1] != 0x6974617473657474) ||
                  (short)plStack_b0[2] != 0x6e6f) goto LAB_101419458;
              bStack_9f = 1;
              bStack_a0 = 0;
            }
            else {
              if ((lStack_a8 != 0xf) ||
                 (*plStack_b0 != 0x656d697265707865 ||
                  *(long *)((long)plStack_b0 + 7) != 0x6970416c61746e65)) {
LAB_101419458:
                bStack_9f = 3;
                goto joined_r0x000101419654;
              }
              bStack_9f = 0;
              bStack_a0 = 0;
            }
joined_r0x0001014193fc:
            if (plVar1 != (long *)0x0) {
              _free(plVar5);
            }
          }
          else {
LAB_101419664:
            uVar9 = FUN_108855b04(&uStack_c0,auStack_71,&UNK_10b20e080);
            uStack_98 = (undefined1)uVar9;
            uStack_97 = (undefined7)((ulong)uVar9 >> 8);
            bStack_a0 = 1;
          }
        }
        else {
          if (bVar2 == 0xd) {
            if (plStack_b0 == (long *)0x19) {
              if (((*plStack_b8 != 0x6f4e74754f74706f || plStack_b8[1] != 0x6974616369666974) ||
                  plStack_b8[2] != 0x646f6874654d6e6f) || (char)plStack_b8[3] != 's')
              goto LAB_10141950c;
              bStack_9f = 2;
            }
            else if (plStack_b0 == (long *)0x12) {
              if ((*plStack_b8 != 0x4174736575716572 || plStack_b8[1] != 0x6974617473657474) ||
                  (short)plStack_b8[2] != 0x6e6f) goto LAB_10141950c;
              bStack_9f = 1;
            }
            else if ((plStack_b0 == (long *)0xf) &&
                    (*plStack_b8 == 0x656d697265707865 &&
                     *(long *)((long)plStack_b8 + 7) == 0x6970416c61746e65)) {
              bStack_9f = 0;
            }
            else {
LAB_10141950c:
              bStack_9f = 3;
            }
            goto LAB_101419514;
          }
          if (bVar2 == 0xe) {
            func_0x000100b72a18(&bStack_a0,plStack_b0);
            goto joined_r0x0001014193fc;
          }
          if (bVar2 != 0xf) goto LAB_101419664;
          func_0x000100b72a18(&bStack_a0,plStack_b8,plStack_b0);
LAB_101419518:
          FUN_100e077ec(&uStack_c0);
        }
        bVar2 = bStack_9f;
        if ((bStack_a0 & 1) != 0) {
          pbStack_d0 = pbStack_138;
          lStack_d8 = lVar14;
          lStack_c8 = unaff_x27;
LAB_101419914:
          bStack_a0 = 1;
          bStack_9f = 0;
          uStack_9e = 0x800000000000;
          if (-0x7fffffffffffffff < lStack_128) {
LAB_101419940:
            uStack_9e = 0x800000000000;
            bStack_9f = 0;
            bStack_a0 = 1;
            if (unaff_x27 != 0) {
              pbVar8 = pbStack_138 + 8;
              do {
                if (*(long *)(pbVar8 + -8) != 0) {
                  _free(*(undefined8 *)pbVar8);
                }
                pbVar8 = pbVar8 + 0x18;
                unaff_x27 = unaff_x27 + -1;
              } while (unaff_x27 != 0);
            }
            if (lStack_128 != 0) {
              _free(pbStack_138);
            }
          }
LAB_101419a00:
          FUN_100d34830(&pbStack_100);
          if ((byte)pbStack_120 != '\x16') {
            FUN_100e077ec(&pbStack_120);
          }
          goto LAB_101419978;
        }
        bVar16 = (byte)pbStack_120;
        pbVar18 = pbVar8;
        if (bStack_9f < 2) {
          if (bStack_9f == 0) {
            if (bVar4) {
              pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
              if (bVar16 == 0x16) {
LAB_101419a20:
                pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                pbStack_d0 = pbStack_138;
                lStack_d8 = lVar14;
                lStack_c8 = unaff_x27;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x101419a48);
                (*pcVar6)();
              }
              uVar9 = *puVar19;
              puVar13[1] = puVar19[1];
              *puVar13 = uVar9;
              uVar9 = *(undefined8 *)((long)puVar19 + 0xf);
              *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
              *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
              bStack_a0 = bVar16;
              if (bVar16 == 0) {
                bVar4 = false;
                FUN_100e077ec(&bStack_a0);
                goto LAB_10141920c;
              }
              pbStack_d0 = pbStack_138;
              lStack_d8 = lVar14;
              lStack_c8 = unaff_x27;
              FUN_108855b04(&bStack_a0,auStack_71,&UNK_10b20a560);
              uStack_98 = extraout_w0_01;
              uStack_97 = extraout_var_01;
            }
            else {
              pbStack_d0 = pbStack_138;
              uStack_c0 = &UNK_108cbde9a;
              plStack_b8 = (long *)0xf;
              bStack_a0 = (byte)&uStack_c0;
              bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
              uStack_9e = (undefined6)((ulong)&uStack_c0 >> 0x10);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              lStack_d8 = lVar14;
              lStack_c8 = unaff_x27;
              FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              uStack_98 = extraout_w0_00;
              uStack_97 = extraout_var_00;
            }
          }
          else if (bVar10 == 2) {
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar16 == 0x16) goto LAB_101419a20;
            uVar9 = *puVar19;
            puVar13[1] = puVar19[1];
            *puVar13 = uVar9;
            uVar9 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
            bStack_a0 = bVar16;
            if (bVar16 == 0) {
              FUN_100e077ec(&bStack_a0);
              bVar10 = bVar2;
              goto LAB_10141920c;
            }
            pbStack_d0 = pbStack_138;
            lStack_d8 = lVar14;
            lStack_c8 = unaff_x27;
            FUN_108855b04(&bStack_a0,auStack_71,&UNK_10b20a560);
            uStack_98 = extraout_w0_02;
            uStack_97 = extraout_var_02;
          }
          else {
            pbStack_d0 = pbStack_138;
            uStack_c0 = &UNK_108cbdea9;
            plStack_b8 = (long *)0x12;
            bStack_a0 = (byte)&uStack_c0;
            bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
            uStack_9e = (undefined6)((ulong)&uStack_c0 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            lStack_d8 = lVar14;
            lStack_c8 = unaff_x27;
            FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            uStack_98 = extraout_w0;
            uStack_97 = extraout_var;
          }
          goto LAB_101419914;
        }
        if (bStack_9f == 2) {
          if (lStack_128 == -0x7fffffffffffffff) {
            FUN_100f21028(&bStack_a0,&pbStack_120);
            lVar14 = CONCAT62(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
            pbStack_138 = (byte *)CONCAT71(uStack_97,uStack_98);
            if (lVar14 != -0x7fffffffffffffff) {
              unaff_x27 = CONCAT71(uStack_8f,uStack_90);
              pbVar11 = pbStack_f8;
              pbVar18 = pbStack_e8;
              lStack_128 = lVar14;
              goto LAB_10141920c;
            }
            bStack_a0 = 1;
            bStack_9f = 0;
            uStack_9e = 0x800000000000;
          }
          else {
            pbStack_d0 = pbStack_138;
            uStack_c0 = &UNK_108cbdebb;
            plStack_b8 = (long *)0x19;
            bStack_a0 = (byte)&uStack_c0;
            bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
            uStack_9e = (undefined6)((ulong)&uStack_c0 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            lStack_d8 = lVar14;
            lStack_c8 = unaff_x27;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            bStack_a0 = 1;
            bStack_9f = 0;
            uStack_9e = 0x800000000000;
            uStack_98 = (undefined1)uVar9;
            uStack_97 = (undefined7)((ulong)uVar9 >> 8);
            if (lStack_128 != -0x8000000000000000) goto LAB_101419940;
          }
          goto LAB_101419a00;
        }
        pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
        if (bVar16 == 0x16) goto LAB_101419a20;
        uVar9 = *puVar19;
        puVar13[1] = puVar19[1];
        *puVar13 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
        bStack_a0 = bVar16;
        FUN_100e077ec(&bStack_a0);
LAB_10141920c:
        pbVar8 = pbVar11;
        pbVar12 = pbVar8;
        pbVar11 = pbVar8;
      } while (pbVar8 != pbVar18);
      bVar10 = bVar10 & 1;
    }
    lVar14 = -0x8000000000000000;
    if (lStack_128 != -0x7fffffffffffffff) {
      lVar14 = lStack_128;
    }
    bStack_a0 = (byte)lVar14;
    bStack_9f = (byte)((ulong)lVar14 >> 8);
    uStack_9e = (undefined6)((ulong)lVar14 >> 0x10);
    uStack_98 = SUB81(pbStack_138,0);
    uStack_97 = (undefined7)((ulong)pbStack_138 >> 8);
    uStack_90 = (undefined1)unaff_x27;
    uStack_8f = (undefined7)((ulong)unaff_x27 >> 8);
    uStack_88 = (byte *)((ulong)CONCAT61(uStack_88._2_6_,bVar10) << 8);
    FUN_100d34830(&pbStack_100);
    if (pbVar8 == pbVar11) {
      lVar15 = 0;
    }
    else {
      uStack_c0 = puStack_e0;
      lVar15 = FUN_1087e422c(puStack_e0 + ((ulong)((long)pbVar8 - (long)pbVar11) >> 6),&uStack_c0,
                             &UNK_10b23a190);
    }
    if ((byte)pbStack_120 != '\x16') {
      FUN_100e077ec(&pbStack_120);
    }
    if (lVar15 == 0) goto LAB_101419978;
    bStack_a0 = 1;
    bStack_9f = 0;
    uStack_9e = 0x800000000000;
    uStack_98 = (undefined1)lVar15;
    uStack_97 = (undefined7)((ulong)lVar15 >> 8);
    if (lVar14 == -0x8000000000000000) goto LAB_101419978;
    if (unaff_x27 != 0) {
      pbVar8 = pbStack_138 + 8;
      do {
        if (*(long *)(pbVar8 + -8) != 0) {
          _free(*(undefined8 *)pbVar8);
        }
        pbVar8 = pbVar8 + 0x18;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (lVar14 == 0) goto LAB_101419978;
LAB_101419974:
    _free(pbStack_138);
  }
LAB_101419978:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_9e,CONCAT11(bStack_9f,bStack_a0)) != -0x7fffffffffffffff) {
    param_1[1] = CONCAT71(uStack_97,uStack_98);
    *param_1 = CONCAT62(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
    param_1[3] = uStack_88;
    param_1[2] = CONCAT71(uStack_8f,uStack_90);
    return;
  }
  uVar9 = CONCAT71(uStack_97,uStack_98);
LAB_1014199a0:
  *param_1 = 0x8000000000000002;
  param_1[1] = uVar9;
  return;
}

