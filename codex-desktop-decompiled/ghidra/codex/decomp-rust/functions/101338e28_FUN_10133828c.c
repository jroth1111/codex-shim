
void FUN_10133828c(ulong *param_1,byte *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong unaff_x22;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
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
  undefined7 uStack_bf;
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
  undefined4 uStack_78;
  uint uStack_74;
  ulong uStack_70;
  
  bVar6 = *param_2;
  if (bVar6 != 0x14) {
    if (bVar6 != 0x15) {
      uVar21 = FUN_108855b04(param_2,&bStack_c0,&UNK_10b20bc20);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar21;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar18 = pbVar20 + lVar14;
    uVar15 = 0x16;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_f0 = pbVar20;
    pbStack_d8 = pbVar18;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar21 = 0x8000000000000001;
      iStack_118 = 2;
      uStack_120._0_4_ = 3;
    }
    else {
      lVar24 = 0;
      puVar17 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar22 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar16 = (undefined8 *)((ulong)&bStack_c0 | 1);
      iStack_118 = 2;
      uStack_120._0_4_ = 3;
      uStack_130 = 3;
      uVar21 = 0x8000000000000001;
      pbVar4 = pbVar20;
      pbStack_e8 = pbVar20;
      do {
        pbVar19 = pbVar4 + 0x40;
        bVar5 = *pbVar4;
        pbVar20 = pbVar19;
        lVar25 = lVar24;
        if (bVar5 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar4 + 1);
        puVar17[1] = *(undefined8 *)(pbVar4 + 9);
        *puVar17 = uVar11;
        pbStack_108 = *(byte **)(pbVar4 + 0x28);
        pbStack_110 = *(byte **)(pbVar4 + 0x20);
        pbStack_f8 = *(byte **)(pbVar4 + 0x38);
        uStack_100 = *(ulong *)(pbVar4 + 0x30);
        piVar3 = (int *)CONCAT71(uStack_97,uStack_98);
        piVar9 = (int *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar5;
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            uVar13 = (uint)bStack_9f;
            if (2 < uVar13) {
              uVar13 = 3;
            }
LAB_101338780:
            FUN_100e077ec(&bStack_a0);
            goto LAB_101338788;
          }
          if (bVar5 == 4) {
            if ((int *)0x2 < piVar3) {
              piVar3 = (int *)0x3;
            }
            uVar13 = (uint)piVar3;
            goto LAB_101338780;
          }
          if (bVar5 == 0xc) {
            if (lStack_88 == 5) {
              if (*piVar9 == 0x696d696c && (char)piVar9[1] == 't') goto LAB_101338674;
            }
            else if (lStack_88 == 6) {
              if (*piVar9 == 0x73727563 && (short)piVar9[1] == 0x726f) goto LAB_101338720;
              if (*piVar9 == 0x61746564 && (short)piVar9[1] == 0x6c69) goto LAB_1013384b0;
            }
            goto LAB_101338728;
          }
LAB_101338f04:
          lStack_d0 = lVar24 + 1;
          pbStack_e8 = pbVar19;
          uStack_70 = FUN_108855b04(&bStack_a0,&bStack_c0,&UNK_10b20e380);
LAB_101338b74:
          *param_1 = 0x8000000000000001;
          param_1[1] = uStack_70;
          if (-0x7fffffffffffffff < (long)uVar21) {
LAB_101338c1c:
            if (uVar21 != 0) {
LAB_101338c20:
              _free(unaff_x22);
            }
          }
LAB_101338c28:
          FUN_100d34830(&pbStack_f0);
          if ((byte)pbStack_110 != '\x16') {
            FUN_100e077ec(&pbStack_110);
          }
          goto LAB_101338ab8;
        }
        if (bVar5 == 0xd) {
          if (piVar9 == (int *)0x5) {
            if (*piVar3 == 0x696d696c && (char)piVar3[1] == 't') {
LAB_1013386dc:
              uVar13 = 1;
              goto LAB_101338780;
            }
          }
          else if (piVar9 == (int *)0x6) {
            if (*piVar3 == 0x73727563 && (short)piVar3[1] == 0x726f) {
LAB_101338774:
              uVar13 = 0;
            }
            else {
              if (*piVar3 != 0x61746564 || (short)piVar3[1] != 0x6c69) goto LAB_10133877c;
LAB_10133860c:
              uVar13 = 2;
            }
            goto LAB_101338780;
          }
LAB_10133877c:
          uVar13 = 3;
          goto LAB_101338780;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_101338f04;
          if (piVar9 == (int *)0x5) {
            if (((((char)*piVar3 == 'l') && (*(char *)((long)piVar3 + 1) == 'i')) &&
                (*(char *)((long)piVar3 + 2) == 'm')) &&
               ((*(char *)((long)piVar3 + 3) == 'i' && ((char)piVar3[1] == 't'))))
            goto LAB_1013386dc;
          }
          else if (piVar9 == (int *)0x6) {
            if ((char)*piVar3 == 'c') {
              if (((*(char *)((long)piVar3 + 1) == 'u') && (*(char *)((long)piVar3 + 2) == 'r')) &&
                 ((*(char *)((long)piVar3 + 3) == 's' &&
                  (((char)piVar3[1] == 'o' && (*(char *)((long)piVar3 + 5) == 'r'))))))
              goto LAB_101338774;
            }
            else if (((((char)*piVar3 == 'd') && (*(char *)((long)piVar3 + 1) == 'e')) &&
                     (*(char *)((long)piVar3 + 2) == 't')) &&
                    (((*(char *)((long)piVar3 + 3) == 'a' && ((char)piVar3[1] == 'i')) &&
                     (*(char *)((long)piVar3 + 5) == 'l')))) goto LAB_10133860c;
          }
          goto LAB_10133877c;
        }
        if (lStack_88 == 5) {
          if ((((char)*piVar9 == 'l') && (*(char *)((long)piVar9 + 1) == 'i')) &&
             ((*(char *)((long)piVar9 + 2) == 'm' &&
              ((*(char *)((long)piVar9 + 3) == 'i' && ((char)piVar9[1] == 't')))))) {
LAB_101338674:
            uVar13 = 1;
            goto LAB_10133872c;
          }
LAB_101338728:
          uVar13 = 3;
        }
        else {
          if (lStack_88 != 6) goto LAB_101338728;
          if ((char)*piVar9 == 'c') {
            if (((*(char *)((long)piVar9 + 1) != 'u') || (*(char *)((long)piVar9 + 2) != 'r')) ||
               ((*(char *)((long)piVar9 + 3) != 's' ||
                (((char)piVar9[1] != 'o' || (*(char *)((long)piVar9 + 5) != 'r'))))))
            goto LAB_101338728;
LAB_101338720:
            uVar13 = 0;
          }
          else {
            if ((((((char)*piVar9 != 'd') || (*(char *)((long)piVar9 + 1) != 'e')) ||
                 (*(char *)((long)piVar9 + 2) != 't')) ||
                ((*(char *)((long)piVar9 + 3) != 'a' || ((char)piVar9[1] != 'i')))) ||
               (*(char *)((long)piVar9 + 5) != 'l')) goto LAB_101338728;
LAB_1013384b0:
            uVar13 = 2;
          }
        }
LAB_10133872c:
        if (piVar3 != (int *)0x0) {
          _free();
        }
LAB_101338788:
        uVar13 = uVar13 & 0xff;
        bVar5 = (byte)pbStack_110;
        if (1 < uVar13) {
          if (uVar13 != 2) {
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar5 == 0x16) {
LAB_101338d44:
              pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
              lStack_d0 = lVar24 + 1;
              pbStack_e8 = pbVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101338f00:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101338f04);
              (*pcVar10)();
            }
            uVar11 = *puVar22;
            puVar17[1] = puVar22[1];
            *puVar17 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
            bStack_a0 = bVar5;
            FUN_100e077ec(&bStack_a0);
            goto LAB_1013383f0;
          }
          if ((uint)uStack_120 != 3) {
            lStack_d0 = lVar24 + 1;
            bStack_c0 = 0x8c;
            uStack_bf = 0x108cad8;
            uStack_b8 = 6;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar19;
            uStack_70 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_101338b74;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_101338d44;
          uVar11 = *puVar22;
          puVar16[1] = puVar22[1];
          *puVar16 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
          bStack_c0 = bVar5;
          if (bVar5 == 0x10) {
LAB_10133884c:
            uStack_78 = CONCAT22(uStack_78._2_2_,0x200);
            FUN_100e077ec(&bStack_c0);
LAB_1013389d0:
          }
          else {
            if (bVar5 != 0x11) {
              if (bVar5 == 0x12) goto LAB_10133884c;
              FUN_101454278(&uStack_78,&bStack_c0);
              goto LAB_1013389d0;
            }
            puVar7 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
            uVar11 = *puVar7;
            uStack_98 = (undefined1)puVar7[1];
            uStack_97 = (undefined7)((ulong)puVar7[1] >> 8);
            bStack_a0 = (byte)uVar11;
            bStack_9f = (byte)((ulong)uVar11 >> 8);
            uStack_9e = (undefined2)((ulong)uVar11 >> 0x10);
            uStack_9c = (uint)((ulong)uVar11 >> 0x20);
            lStack_88 = puVar7[3];
            uStack_90 = (undefined1)puVar7[2];
            uStack_8f = (undefined7)((ulong)puVar7[2] >> 8);
            FUN_101454278(&uStack_78,&bStack_a0);
            _free(puVar7);
          }
          if ((char)uStack_78 != '\x01') {
            uStack_120._0_4_ = uStack_78 >> 8 & 0xff;
            goto LAB_1013383f0;
          }
          lStack_d0 = lVar24 + 1;
          pbStack_e8 = pbVar19;
          goto LAB_101338b74;
        }
        if (uVar13 == 0) {
          if (uVar21 != 0x8000000000000001) {
            lStack_d0 = lVar24 + 1;
            bStack_c0 = 0xa9;
            uStack_bf = 0x108cac7;
            uStack_b8 = 6;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar19;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar12;
            if ((uVar21 & 0x7fffffffffffffff) == 0) goto LAB_101338c28;
            goto LAB_101338c20;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_d0 = lVar24 + 1;
            pbStack_e8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101338f00;
          }
          uVar11 = *puVar22;
          puVar17[1] = puVar22[1];
          *puVar17 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
          bStack_a0 = bVar5;
          FUN_1004b60cc(&bStack_c0,&bStack_a0);
          uVar21 = CONCAT71(uStack_bf,bStack_c0);
          unaff_x22 = CONCAT71(uStack_b7,uStack_b8);
          if (uVar21 != 0x8000000000000001) {
            uStack_138 = CONCAT71(uStack_af,uStack_b0);
            goto LAB_1013383f0;
          }
          lStack_d0 = lVar24 + 1;
          *param_1 = 0x8000000000000001;
          param_1[1] = unaff_x22;
          pbStack_e8 = pbVar19;
          goto LAB_101338c28;
        }
        if (iStack_118 != 2) {
          lStack_d0 = lVar24 + 1;
          bStack_c0 = 0x21;
          uStack_bf = 0x108cadc;
          uStack_b8 = 5;
          uStack_b7 = 0;
          bStack_a0 = (byte)&bStack_c0;
          bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
          uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
          uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_e8 = pbVar19;
          uStack_70 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_101338b74;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar5 == 0x16) goto LAB_101338d44;
        uVar11 = *puVar22;
        puVar16[1] = puVar22[1];
        *puVar16 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
        bStack_c0 = bVar5;
        if (bVar5 != 0x10) {
          if (bVar5 == 0x11) {
            puVar7 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
            uVar11 = *puVar7;
            uStack_98 = (undefined1)puVar7[1];
            uStack_97 = (undefined7)((ulong)puVar7[1] >> 8);
            bStack_a0 = (byte)uVar11;
            bStack_9f = (byte)((ulong)uVar11 >> 8);
            uStack_9e = (undefined2)((ulong)uVar11 >> 0x10);
            uStack_9c = (uint)((ulong)uVar11 >> 0x20);
            lStack_88 = puVar7[3];
            uStack_90 = (undefined1)puVar7[2];
            uStack_8f = (undefined7)((ulong)puVar7[2] >> 8);
            FUN_100615890(&uStack_78,&bStack_a0);
            uVar13 = uStack_78;
            uVar12 = uStack_70;
            if (uStack_78 == 0) {
              iStack_118 = 1;
              uVar12 = uStack_130 & 0xffffffff00000000 | (ulong)uStack_74;
            }
            _free(puVar7);
            uStack_130 = uVar12;
          }
          else {
            if (bVar5 == 0x12) goto LAB_1013383e4;
            FUN_100615890(&bStack_a0,&bStack_c0);
            uVar13 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
            uVar12 = uStack_130 & 0xffffffff00000000;
            uStack_130 = CONCAT71(uStack_97,uStack_98);
            if (uVar13 == 0) {
              iStack_118 = 1;
              uStack_130 = uVar12 | uStack_9c;
            }
          }
          if (uVar13 == 0) goto LAB_1013383f0;
          lStack_d0 = lVar24 + 1;
          *param_1 = 0x8000000000000001;
          param_1[1] = uStack_130;
          pbStack_e8 = pbVar19;
          if ((long)uVar21 < -0x7ffffffffffffffe) goto LAB_101338c28;
          goto LAB_101338c1c;
        }
LAB_1013383e4:
        bStack_c0 = bVar5;
        FUN_100e077ec(&bStack_c0);
        iStack_118 = 0;
LAB_1013383f0:
        lVar24 = lVar24 + 1;
        pbVar20 = pbVar18;
        lVar25 = (lVar14 - 0x40U >> 6) + 1;
        pbVar4 = pbVar19;
      } while (pbVar19 != pbVar18);
      uVar15 = (undefined4)uStack_130;
      lStack_d0 = lVar25;
    }
    lVar14 = lStack_d0;
    uVar12 = 0x8000000000000000;
    if (uVar21 != 0x8000000000000001) {
      uVar12 = uVar21;
    }
    iVar2 = 0;
    if (iStack_118 != 2) {
      iVar2 = iStack_118;
    }
    uVar23 = 0;
    if (iStack_118 != 2) {
      uVar23 = uVar15;
    }
    *param_1 = uVar12;
    param_1[1] = unaff_x22;
    param_1[2] = uStack_138;
    uVar1 = 2;
    if ((uint)uStack_120 != 3) {
      uVar1 = (char)(uint)uStack_120;
    }
    *(int *)(param_1 + 3) = iVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar23;
    *(undefined1 *)(param_1 + 4) = uVar1;
    pbStack_e8 = pbVar20;
    FUN_100d34830(&pbStack_f0);
    if (pbVar18 != pbVar20) {
      bStack_a0 = (byte)lVar14;
      bStack_9f = (byte)((ulong)lVar14 >> 8);
      uStack_9e = (undefined2)((ulong)lVar14 >> 0x10);
      uStack_9c = (uint)((ulong)lVar14 >> 0x20);
      uVar21 = FUN_1087e422c(((ulong)((long)pbVar18 - (long)pbVar20) >> 6) + lVar14,&bStack_a0,
                             &UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar21;
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x22);
      }
    }
    goto LAB_101338ab8;
  }
  uVar21 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18);
  pbVar20 = pbVar4 + lVar14 * 0x20;
  pbStack_f0 = (byte *)0x0;
  pbVar18 = pbVar4;
  pbStack_110 = pbVar4;
  uStack_100 = uVar21;
  pbStack_f8 = pbVar20;
  if (lVar14 == 0) {
LAB_101338384:
    pbStack_108 = pbVar18;
    pbVar19 = (byte *)FUN_1087e422c(0,&UNK_10b231bb8,&UNK_10b20a590);
LAB_1013383a0:
    *param_1 = 0x8000000000000001;
    param_1[1] = (ulong)pbVar19;
LAB_1013383a8:
    lVar14 = ((ulong)((long)pbVar20 - (long)pbVar18) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
  }
  else {
    pbVar18 = pbVar4 + 0x20;
    if (*pbVar4 == 0x16) goto LAB_101338384;
    uVar11 = *(undefined8 *)(pbVar4 + 1);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar4 + 9);
    bStack_9f = (byte)uVar11;
    uStack_9e = (undefined2)((ulong)uVar11 >> 8);
    uStack_9c = (uint)((ulong)uVar11 >> 0x18);
    uStack_98 = (undefined1)((ulong)uVar11 >> 0x38);
    lStack_88 = *(long *)(pbVar4 + 0x18);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar4 + 0x10);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x10) >> 8);
    pbStack_f0 = (byte *)0x1;
    pbStack_108 = pbVar18;
    bStack_a0 = *pbVar4;
    FUN_1004b60cc(&bStack_c0,&bStack_a0);
    uVar12 = CONCAT71(uStack_bf,bStack_c0);
    pbVar19 = (byte *)CONCAT71(uStack_b7,uStack_b8);
    if (uVar12 == 0x8000000000000001) goto LAB_1013383a0;
    if (lVar14 == 1) {
LAB_101338b0c:
      uVar11 = 1;
LAB_101338b10:
      uStack_120 = FUN_1087e422c(uVar11,&UNK_10b231bb8,&UNK_10b20a590);
LAB_101338b24:
      *param_1 = 0x8000000000000001;
      param_1[1] = uStack_120;
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
        _free(pbVar19);
      }
      goto LAB_1013383a8;
    }
    uVar8 = CONCAT71(uStack_af,uStack_b0);
    pbVar18 = pbVar4 + 0x40;
    bVar5 = pbVar4[0x20];
    pbStack_108 = pbVar18;
    if (bVar5 == 0x16) goto LAB_101338b0c;
    uStack_b7 = (undefined7)*(undefined8 *)(pbVar4 + 0x29);
    uStack_bf = (undefined7)*(undefined8 *)(pbVar4 + 0x21);
    uStack_b8 = (undefined1)((ulong)*(undefined8 *)(pbVar4 + 0x21) >> 0x38);
    uStack_a8 = *(undefined8 *)(pbVar4 + 0x38);
    uStack_b0 = (undefined1)*(undefined8 *)(pbVar4 + 0x30);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x30) >> 8);
    pbStack_f0 = (byte *)0x2;
    bStack_c0 = bVar5;
    if (bVar5 != 0x10) {
      if (bVar5 == 0x11) {
        puVar16 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
        uVar11 = *puVar16;
        uStack_98 = (undefined1)puVar16[1];
        uStack_97 = (undefined7)((ulong)puVar16[1] >> 8);
        bStack_a0 = (byte)uVar11;
        bStack_9f = (byte)((ulong)uVar11 >> 8);
        uStack_9e = (undefined2)((ulong)uVar11 >> 0x10);
        uStack_9c = (uint)((ulong)uVar11 >> 0x20);
        lStack_88 = puVar16[3];
        uStack_90 = (undefined1)puVar16[2];
        uStack_8f = (undefined7)((ulong)puVar16[2] >> 8);
        FUN_100615890(&uStack_78,&bStack_a0);
        uVar13 = uStack_78;
        uStack_120 = uStack_70;
        if (uStack_78 == 0) {
          uStack_120 = (ulong)uStack_74;
        }
        _free(puVar16);
      }
      else {
        if (bVar5 == 0x12) goto LAB_101338bd4;
        FUN_100615890(&bStack_a0,&bStack_c0);
        uVar13 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
        uStack_120 = CONCAT71(uStack_97,uStack_98);
        if (uVar13 == 0) {
          uStack_120 = (ulong)uStack_9c;
        }
      }
      if ((uVar13 & 1) == 0) {
        uVar15 = 1;
        goto LAB_101338cd0;
      }
      goto LAB_101338b24;
    }
LAB_101338bd4:
    FUN_100e077ec(&bStack_c0);
    uVar15 = 0;
LAB_101338cd0:
    if (lVar14 == 2) {
LAB_101338cec:
      uVar11 = 2;
      goto LAB_101338b10;
    }
    pbVar18 = pbVar4 + 0x60;
    bVar5 = pbVar4[0x40];
    pbStack_108 = pbVar18;
    if (bVar5 == 0x16) goto LAB_101338cec;
    uStack_b7 = (undefined7)*(undefined8 *)(pbVar4 + 0x49);
    uStack_bf = (undefined7)*(undefined8 *)(pbVar4 + 0x41);
    uStack_b8 = (undefined1)((ulong)*(undefined8 *)(pbVar4 + 0x41) >> 0x38);
    uStack_a8 = *(undefined8 *)(pbVar4 + 0x58);
    uStack_b0 = (undefined1)*(undefined8 *)(pbVar4 + 0x50);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x50) >> 8);
    pbStack_f0 = (byte *)0x3;
    bStack_c0 = bVar5;
    if (bVar5 == 0x10) {
LAB_101338d30:
      uStack_78 = CONCAT22(uStack_78._2_2_,0x200);
      FUN_100e077ec(&bStack_c0);
    }
    else if (bVar5 == 0x11) {
      puVar16 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
      uVar11 = *puVar16;
      uStack_98 = (undefined1)puVar16[1];
      uStack_97 = (undefined7)((ulong)puVar16[1] >> 8);
      bStack_a0 = (byte)uVar11;
      bStack_9f = (byte)((ulong)uVar11 >> 8);
      uStack_9e = (undefined2)((ulong)uVar11 >> 0x10);
      uStack_9c = (uint)((ulong)uVar11 >> 0x20);
      lStack_88 = puVar16[3];
      uStack_90 = (undefined1)puVar16[2];
      uStack_8f = (undefined7)((ulong)puVar16[2] >> 8);
      FUN_101454278(&uStack_78,&bStack_a0);
      _free(puVar16);
    }
    else {
      if (bVar5 == 0x12) goto LAB_101338d30;
      FUN_101454278(&uStack_78,&bStack_c0);
    }
    uVar23 = (undefined4)uStack_120;
    uStack_120 = uStack_70;
    if ((char)uStack_78 == '\x01') goto LAB_101338b24;
    *param_1 = uVar12;
    param_1[1] = (ulong)pbVar19;
    param_1[2] = uVar8;
    *(undefined4 *)(param_1 + 3) = uVar15;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar23;
    *(undefined1 *)(param_1 + 4) = uStack_78._1_1_;
    uVar21 = FUN_100fbc738(&pbStack_110);
    if (uVar21 == 0) goto LAB_101338ab8;
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar21;
    uVar21 = uVar12 & 0x7fffffffffffffff;
    pbVar4 = pbVar19;
  }
  if (uVar21 != 0) {
    _free(pbVar4);
  }
LAB_101338ab8:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

