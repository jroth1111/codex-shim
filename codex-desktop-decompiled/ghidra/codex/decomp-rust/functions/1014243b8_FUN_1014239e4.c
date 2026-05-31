
/* WARNING: Type propagation algorithm not settling */

void FUN_1014239e4(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  bool bVar9;
  uint in_w13;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte *unaff_x22;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  int unaff_w28;
  int iVar18;
  ulong uVar19;
  undefined4 unaff_s8;
  undefined4 uVar20;
  uint uStack_154;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  int iStack_124;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  undefined2 uStack_be;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  
  bVar2 = *param_2;
  uVar20 = unaff_s8;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      pbStack_138 = (byte *)FUN_108855b04(param_2,&uStack_d8,&UNK_10b20b6c0);
      goto LAB_101424250;
    }
    uStack_f0 = *(undefined8 *)(param_2 + 8);
    pbStack_100 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar7 = pbStack_100 + lVar8;
    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
    lStack_e0 = 0;
    pbStack_e8 = pbVar7;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar9 = false;
      iStack_124 = 2;
      uVar19 = 0x8000000000000001;
      pbVar15 = pbStack_100;
      lVar11 = lStack_e0;
    }
    else {
      lVar16 = 0;
      puVar10 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_120 | 1);
      pbVar13 = (byte *)((ulong)&bStack_c0 | 1);
      bVar9 = false;
      iStack_124 = 2;
      uVar19 = 0x8000000000000001;
      pbVar4 = pbStack_100;
      pbStack_f8 = pbStack_100;
      do {
        pbVar17 = pbVar4 + 0x40;
        bVar1 = *pbVar4;
        pbVar15 = pbVar17;
        in_w13 = uStack_154;
        lVar11 = lVar16;
        if (bVar1 == 0x16) break;
        uVar5 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)puVar10 + 0xf) = uVar5;
        uVar5 = *(undefined8 *)(pbVar4 + 1);
        puVar10[1] = *(undefined8 *)(pbVar4 + 9);
        *puVar10 = uVar5;
        pbStack_118 = *(byte **)(pbVar4 + 0x28);
        pbStack_120 = *(byte **)(pbVar4 + 0x20);
        pbStack_108 = *(byte **)(pbVar4 + 0x38);
        lStack_110 = *(long *)(pbVar4 + 0x30);
        pbVar15 = (byte *)CONCAT71(uStack_97,uStack_98);
        pbVar4 = (byte *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar1;
        if (0xc < bVar1) {
          if (bVar1 == 0xd) {
            if (pbVar4 == (byte *)0xc) {
              if (*(long *)pbVar15 == 0x69646f4d7473616c && *(int *)(pbVar15 + 8) == 0x64656966) {
                bStack_bf = 2;
                goto LAB_101423d28;
              }
            }
            else if (pbVar4 == (byte *)0x8) {
              if (*(long *)pbVar15 == 0x65636e6569647561) {
                bStack_bf = 0;
              }
              else {
                if (*(long *)pbVar15 != 0x797469726f697270) goto LAB_101423d20;
                bStack_bf = 1;
              }
              goto LAB_101423d28;
            }
LAB_101423d20:
            bStack_bf = 3;
            goto LAB_101423d28;
          }
          if (bVar1 == 0xe) {
            FUN_100ac2f28(&bStack_c0,pbVar4);
joined_r0x000101423cdc:
            pbVar6 = pbStack_120;
            if (pbVar15 != (byte *)0x0) {
              _free(pbVar4);
              pbVar6 = pbStack_120;
            }
            goto joined_r0x000101423cec;
          }
          if (bVar1 == 0xf) {
            FUN_100ac2f28(&bStack_c0,pbVar15,pbVar4);
            goto LAB_101423d2c;
          }
LAB_101423f7c:
          uVar5 = FUN_108855b04(&bStack_a0,&uStack_d8,&UNK_10b20eb00);
          uStack_b8 = (undefined4)uVar5;
          uStack_b4 = (undefined4)((ulong)uVar5 >> 0x20);
          bStack_c0 = 1;
LAB_101423fa4:
          lStack_e0 = lVar16 + 1;
          pbVar6 = (byte *)CONCAT44(uStack_b4,uStack_b8);
          pbStack_f8 = pbVar17;
LAB_101423fb4:
          uVar12 = uVar19;
          if (-0x7fffffffffffffff < (long)uVar19) {
joined_r0x000101424418:
            if (uVar12 != 0) {
              _free(pbStack_138);
            }
          }
LAB_10142420c:
          iVar18 = (int)uVar19;
          FUN_100d34830(&pbStack_100);
          if ((byte)pbStack_120 != '\x16') {
            FUN_100e077ec(&pbStack_120);
          }
          uVar12 = 0x8000000000000001;
          pbStack_138 = pbVar6;
          pbStack_140 = pbVar15;
          pbStack_148 = pbVar4;
          goto LAB_101424230;
        }
        if (bVar1 == 1) {
          bStack_bf = bStack_9f;
          if (2 < bStack_9f) {
            bStack_bf = 3;
          }
        }
        else {
          if (bVar1 != 4) {
            if (bVar1 != 0xc) goto LAB_101423f7c;
            if (lStack_88 == 0xc) {
              if (*(long *)pbVar4 == 0x69646f4d7473616c && *(int *)(pbVar4 + 8) == 0x64656966) {
                bStack_bf = 2;
                goto LAB_101423cd4;
              }
LAB_101423cd0:
              bStack_bf = 3;
            }
            else {
              if (lStack_88 != 8) goto LAB_101423cd0;
              if (*(long *)pbVar4 == 0x65636e6569647561) {
                bStack_bf = 0;
              }
              else {
                if (*(long *)pbVar4 != 0x797469726f697270) goto LAB_101423cd0;
                bStack_bf = 1;
              }
            }
LAB_101423cd4:
            bStack_c0 = 0;
            goto joined_r0x000101423cdc;
          }
          pbVar6 = pbVar15;
          if ((byte *)0x2 < pbVar15) {
            pbVar6 = (byte *)0x3;
          }
          bStack_bf = (byte)pbVar6;
        }
LAB_101423d28:
        bStack_c0 = 0;
LAB_101423d2c:
        FUN_100e077ec(&bStack_a0);
        pbVar6 = pbStack_120;
joined_r0x000101423cec:
        pbStack_120 = pbVar6;
        if ((bStack_c0 & 1) != 0) goto LAB_101423fa4;
        pbStack_120._0_1_ = (byte)pbVar6;
        bVar1 = (byte)pbStack_120;
        pbStack_120._1_7_ = (undefined7)((ulong)pbVar6 >> 8);
        if (bStack_bf < 2) {
          if (bStack_bf != 0) {
            if (iStack_124 != 2) {
              lStack_e0 = lVar16 + 1;
              bStack_c0 = 0x48;
              bStack_bf = 0x81;
              uStack_be = 0x8c9;
              iStack_bc = 1;
              uStack_b8 = 8;
              uStack_b4 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_f8 = pbVar17;
              pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              goto LAB_101423fb4;
            }
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar1 == 0x16) goto LAB_1014242e0;
            uVar5 = *puVar14;
            puVar10[1] = puVar14[1];
            *puVar10 = uVar5;
            uVar5 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar10 + 0xf) = uVar5;
            bStack_a0 = bVar1;
            FUN_10137ed64(&bStack_c0,&bStack_a0);
            if (CONCAT22(uStack_be,CONCAT11(bStack_bf,bStack_c0)) != 1) {
              iStack_124 = iStack_bc;
              uVar20 = uStack_b8;
              goto LAB_101423b2c;
            }
            goto LAB_101423fa4;
          }
          if (uVar19 != 0x8000000000000001) {
            lStack_e0 = lVar16 + 1;
            bStack_c0 = 8;
            bStack_bf = 0xe9;
            uStack_be = 0x8c6;
            iStack_bc = 1;
            uStack_b8 = 8;
            uStack_b4 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_f8 = pbVar17;
            pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            uVar12 = uVar19 & 0x7fffffffffffffff;
            goto joined_r0x000101424418;
          }
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_e0 = lVar16 + 1;
            pbStack_f8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10142448c;
          }
          uVar5 = *puVar14;
          *(undefined8 *)(pbVar13 + 8) = puVar14[1];
          *(undefined8 *)pbVar13 = uVar5;
          uVar5 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)(pbVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)(pbVar13 + 0xf) = uVar5;
          bStack_c0 = bVar1;
          if (bVar1 == 0x10) {
LAB_101423d98:
            uStack_d8 = 0x8000000000000000;
            FUN_100e077ec(&bStack_c0);
            uVar19 = 0x8000000000000000;
LAB_101423b24:
            pbStack_140 = pbStack_c8;
            pbStack_138 = pbStack_d0;
            goto LAB_101423b2c;
          }
          if (bVar1 == 0x11) {
            pbVar15 = (byte *)CONCAT44(uStack_b4,uStack_b8);
            uVar5 = *(undefined8 *)pbVar15;
            uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 8);
            uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 8) >> 8);
            bStack_a0 = (byte)uVar5;
            bStack_9f = (byte)((ulong)uVar5 >> 8);
            uStack_9e = (undefined6)((ulong)uVar5 >> 0x10);
            lStack_88 = *(long *)(pbVar15 + 0x18);
            uStack_90 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
            uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
            FUN_10142a868(&uStack_d8,&bStack_a0);
            _free(pbVar15);
            uVar19 = uStack_d8;
            pbVar6 = pbStack_d0;
          }
          else {
            if (bVar1 == 0x12) goto LAB_101423d98;
            bStack_c0 = bVar1;
            FUN_10142a868(&uStack_d8,&bStack_c0);
            uVar19 = uStack_d8;
            pbVar6 = pbStack_d0;
          }
          uStack_d8 = uVar19;
          pbStack_d0 = pbVar6;
          if (uVar19 != 0x8000000000000001) goto LAB_101423b24;
          lStack_e0 = lVar16 + 1;
          pbStack_f8 = pbVar17;
          goto LAB_10142420c;
        }
        if (bStack_bf == 2) {
          if (bVar9) {
            lStack_e0 = lVar16 + 1;
            bStack_c0 = 0xa8;
            bStack_bf = 0x62;
            uStack_be = 0x8cb;
            iStack_bc = 1;
            uStack_b8 = 0xc;
            uStack_b4 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_f8 = pbVar17;
            pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          }
          else {
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar1 == 0x16) goto LAB_1014242e0;
            uVar5 = *puVar14;
            *(undefined8 *)(pbVar13 + 8) = puVar14[1];
            *(undefined8 *)pbVar13 = uVar5;
            uVar5 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)(pbVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)(pbVar13 + 0xf) = uVar5;
            bStack_c0 = bVar1;
            if (bVar1 == 0x10) {
LAB_101423e10:
              uStack_d8 = 0;
              FUN_100e077ec(&bStack_c0);
LAB_101423f34:
              uVar12 = uStack_d8;
              pbVar6 = pbStack_d0;
            }
            else {
              if (bVar1 != 0x11) {
                if (bVar1 == 0x12) goto LAB_101423e10;
                FUN_10141cc00(&uStack_d8,&bStack_c0);
                goto LAB_101423f34;
              }
              pbVar15 = (byte *)CONCAT44(uStack_b4,uStack_b8);
              uVar5 = *(undefined8 *)pbVar15;
              uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 8);
              uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 8) >> 8);
              bStack_a0 = (byte)uVar5;
              bStack_9f = (byte)((ulong)uVar5 >> 8);
              uStack_9e = (undefined6)((ulong)uVar5 >> 0x10);
              lStack_88 = *(long *)(pbVar15 + 0x18);
              uStack_90 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
              uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
              FUN_10141cc00(&uStack_d8,&bStack_a0);
              _free(pbVar15);
              uVar12 = uStack_d8;
              pbVar6 = pbStack_d0;
            }
            uStack_d8 = uVar12;
            if ((int)uStack_d8 != 1) {
              uStack_d8._4_4_ = (uint)(uVar12 >> 0x20);
              uStack_154 = uStack_d8._4_4_;
              bVar9 = true;
              pbStack_148 = pbVar6;
              pbStack_d0 = pbVar6;
              goto LAB_101423b2c;
            }
            lStack_e0 = lVar16 + 1;
            pbStack_f8 = pbVar17;
          }
          goto LAB_101423fb4;
        }
        pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
        if (bVar1 == 0x16) {
LAB_1014242e0:
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          lStack_e0 = lVar16 + 1;
          pbStack_f8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10142448c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101424490);
          (*pcVar3)();
        }
        uVar5 = *puVar14;
        puVar10[1] = puVar14[1];
        *puVar10 = uVar5;
        uVar5 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar10 + 0xf) = uVar5;
        bStack_a0 = bVar1;
        FUN_100e077ec(&bStack_a0);
LAB_101423b2c:
        lVar16 = lVar16 + 1;
        pbVar15 = pbVar7;
        in_w13 = uStack_154;
        pbVar4 = pbVar17;
        lVar11 = (lVar8 - 0x40U >> 6) + 1;
      } while (pbVar17 != pbVar7);
    }
    lStack_e0 = lVar11;
    lVar8 = lStack_e0;
    uVar12 = 0x8000000000000000;
    if (uVar19 != 0x8000000000000001) {
      uVar12 = uVar19;
    }
    iVar18 = 0;
    if (iStack_124 != 2) {
      iVar18 = iStack_124;
    }
    if (!bVar9) {
      in_w13 = 0;
    }
    pbVar13 = (byte *)(ulong)in_w13;
    pbStack_f8 = pbVar15;
    FUN_100d34830(&pbStack_100);
    if (pbVar7 != pbVar15) {
      bStack_a0 = (byte)lVar8;
      bStack_9f = (byte)((ulong)lVar8 >> 8);
      uStack_9e = (undefined6)((ulong)lVar8 >> 0x10);
      pbVar7 = (byte *)FUN_1087e422c(((ulong)((long)pbVar7 - (long)pbVar15) >> 6) + lVar8,&bStack_a0
                                     ,&UNK_10b23a190);
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
        _free(pbStack_138);
      }
      uVar12 = 0x8000000000000001;
      pbStack_138 = pbVar7;
    }
    goto LAB_101424230;
  }
  lVar8 = *(long *)(param_2 + 8);
  pbVar15 = *(byte **)(param_2 + 0x10);
  pbStack_148 = *(byte **)(param_2 + 0x18);
  pbVar13 = pbVar15 + (long)pbStack_148 * 0x20;
  pbStack_100 = (byte *)0x0;
  pbVar7 = pbVar15;
  iVar18 = unaff_w28;
  pbStack_120 = pbVar15;
  lStack_110 = lVar8;
  pbStack_108 = pbVar13;
  if (pbStack_148 == (byte *)0x0) {
LAB_101423acc:
    pbStack_118 = pbVar7;
    pbVar4 = (byte *)FUN_1087e422c(0,&UNK_10b22b808,&UNK_10b20a590);
LAB_101424168:
    lVar11 = ((ulong)((long)pbVar13 - (long)pbVar7) >> 5) + 1;
    pbStack_140 = pbVar7;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      pbStack_148 = pbStack_140 + 0x20;
      FUN_100e077ec(pbStack_140);
      pbStack_140 = pbStack_148;
    }
    unaff_x22 = pbVar15;
    if (lVar8 == 0) {
      uVar12 = 0x8000000000000001;
      pbStack_138 = pbVar4;
    }
    else {
LAB_101424194:
      _free(unaff_x22);
      uVar12 = 0x8000000000000001;
      pbStack_138 = pbVar4;
    }
  }
  else {
    pbVar7 = pbVar15 + 0x20;
    bVar1 = *pbVar15;
    if (bVar1 == 0x16) goto LAB_101423acc;
    uVar5 = *(undefined8 *)(pbVar15 + 1);
    uStack_b8._1_3_ = (undefined3)*(undefined8 *)(pbVar15 + 9);
    uStack_b4 = (undefined4)((ulong)*(undefined8 *)(pbVar15 + 9) >> 0x18);
    bStack_bf = (byte)uVar5;
    uStack_be = (undefined2)((ulong)uVar5 >> 8);
    iStack_bc = (int)((ulong)uVar5 >> 0x18);
    uStack_b8._0_1_ = (undefined1)((ulong)uVar5 >> 0x38);
    uStack_a8 = *(undefined8 *)(pbVar15 + 0x18);
    uStack_b0 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
    pbStack_100 = (byte *)0x1;
    pbStack_118 = pbVar7;
    bStack_c0 = bVar1;
    if (bVar1 != 0x10) {
      if (bVar1 == 0x11) {
        puVar10 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
        uVar5 = *puVar10;
        uStack_98 = (undefined1)puVar10[1];
        uStack_97 = (undefined7)((ulong)puVar10[1] >> 8);
        bStack_a0 = (byte)uVar5;
        bStack_9f = (byte)((ulong)uVar5 >> 8);
        uStack_9e = (undefined6)((ulong)uVar5 >> 0x10);
        lStack_88 = puVar10[3];
        uStack_90 = (undefined1)puVar10[2];
        uStack_8f = (undefined7)((ulong)puVar10[2] >> 8);
        FUN_10142a868(&uStack_d8,&bStack_a0);
        _free(puVar10);
      }
      else {
        if (bVar1 == 0x12) goto LAB_101424010;
        FUN_10142a868(&uStack_d8,&bStack_c0);
      }
      pbVar4 = pbStack_d0;
      if ((uStack_d8 != 0x8000000000000001) && (uStack_d8 != 0x8000000000000002)) {
        pbStack_140 = pbStack_c8;
        uVar12 = uStack_d8;
        unaff_x22 = pbStack_d0;
        if (pbStack_148 != (byte *)0x1) goto LAB_101424024;
        goto LAB_101424138;
      }
      goto LAB_101424168;
    }
LAB_101424010:
    FUN_100e077ec(&bStack_c0);
    uVar12 = 0x8000000000000000;
    if (pbStack_148 == (byte *)0x1) {
LAB_101424138:
      uVar5 = 1;
LAB_10142413c:
      pbVar4 = (byte *)FUN_1087e422c(uVar5,&UNK_10b22b808,&UNK_10b20a590);
      pbStack_148 = pbVar4;
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
LAB_10142415c:
        _free(unaff_x22);
        pbStack_148 = pbVar4;
      }
      goto LAB_101424168;
    }
LAB_101424024:
    pbVar7 = pbVar15 + 0x40;
    pbStack_118 = pbVar7;
    if (pbVar15[0x20] == 0x16) goto LAB_101424138;
    uVar5 = *(undefined8 *)(pbVar15 + 0x21);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar15 + 0x29);
    bStack_9f = (byte)uVar5;
    uStack_9e = (undefined6)((ulong)uVar5 >> 8);
    uStack_98 = (undefined1)((ulong)uVar5 >> 0x38);
    lStack_88 = *(long *)(pbVar15 + 0x38);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar15 + 0x30);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x30) >> 8);
    pbStack_100 = (byte *)0x2;
    bStack_a0 = pbVar15[0x20];
    FUN_10137ed64(&bStack_c0,&bStack_a0);
    uVar20 = uStack_b8;
    iVar18 = iStack_bc;
    if ((bStack_c0 & 1) != 0) {
      pbVar4 = (byte *)CONCAT44(uStack_b4,uStack_b8);
      uVar20 = unaff_s8;
      iVar18 = unaff_w28;
joined_r0x000101424070:
      pbStack_148 = pbVar4;
      if ((uVar12 & 0x7fffffffffffffff) == 0) goto LAB_101424168;
      goto LAB_10142415c;
    }
    if (pbStack_148 == (byte *)0x2) {
LAB_1014241ec:
      uVar5 = 2;
      uVar20 = unaff_s8;
      iVar18 = unaff_w28;
      goto LAB_10142413c;
    }
    pbVar7 = pbVar15 + 0x60;
    bVar1 = pbVar15[0x40];
    pbStack_118 = pbVar7;
    unaff_s8 = uStack_b8;
    unaff_w28 = iStack_bc;
    if (bVar1 == 0x16) goto LAB_1014241ec;
    uVar5 = *(undefined8 *)(pbVar15 + 0x41);
    uStack_b8._1_3_ = (undefined3)*(undefined8 *)(pbVar15 + 0x49);
    uStack_b4 = (undefined4)((ulong)*(undefined8 *)(pbVar15 + 0x49) >> 0x18);
    bStack_bf = (byte)uVar5;
    uStack_be = (undefined2)((ulong)uVar5 >> 8);
    iStack_bc = (int)((ulong)uVar5 >> 0x18);
    uStack_b8._0_1_ = (undefined1)((ulong)uVar5 >> 0x38);
    uStack_a8 = *(undefined8 *)(pbVar15 + 0x58);
    uStack_b0 = (undefined1)*(undefined8 *)(pbVar15 + 0x50);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x50) >> 8);
    pbStack_100 = (byte *)0x3;
    bStack_c0 = bVar1;
    if (bVar1 == 0x10) {
LAB_1014242d0:
      uStack_d8 = 0;
      FUN_100e077ec(&bStack_c0);
    }
    else if (bVar1 == 0x11) {
      puVar10 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
      uVar5 = *puVar10;
      uStack_98 = (undefined1)puVar10[1];
      uStack_97 = (undefined7)((ulong)puVar10[1] >> 8);
      bStack_a0 = (byte)uVar5;
      bStack_9f = (byte)((ulong)uVar5 >> 8);
      uStack_9e = (undefined6)((ulong)uVar5 >> 0x10);
      lStack_88 = puVar10[3];
      uStack_90 = (undefined1)puVar10[2];
      uStack_8f = (undefined7)((ulong)puVar10[2] >> 8);
      FUN_10141cc00(&uStack_d8,&bStack_a0);
      _free(puVar10);
    }
    else {
      if (bVar1 == 0x12) goto LAB_1014242d0;
      FUN_10141cc00(&uStack_d8,&bStack_c0);
    }
    pbVar4 = pbStack_d0;
    if ((int)uStack_d8 == 1) goto joined_r0x000101424070;
    pbVar13 = (byte *)(uStack_d8 >> 0x20);
    pbVar4 = (byte *)FUN_100fbc738(&pbStack_120);
    pbStack_138 = unaff_x22;
    pbStack_148 = pbStack_d0;
    if (pbVar4 != (byte *)0x0) {
      if ((uVar12 & 0x7fffffffffffffff) == 0) {
        uVar12 = 0x8000000000000001;
        pbStack_138 = pbVar4;
        goto LAB_101424230;
      }
      goto LAB_101424194;
    }
  }
LAB_101424230:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (uVar12 != 0x8000000000000001) {
    *param_1 = uVar12;
    param_1[1] = (ulong)pbStack_138;
    param_1[2] = (ulong)pbStack_140;
    *(int *)(param_1 + 3) = iVar18;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar20;
    *(int *)(param_1 + 4) = (int)pbVar13;
    *(byte **)((long)param_1 + 0x24) = pbStack_148;
    return;
  }
LAB_101424250:
  *param_1 = 0x8000000000000002;
  param_1[1] = (ulong)pbStack_138;
  return;
}

