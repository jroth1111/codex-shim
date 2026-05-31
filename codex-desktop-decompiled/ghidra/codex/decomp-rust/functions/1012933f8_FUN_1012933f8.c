
/* WARNING: Type propagation algorithm not settling */

void FUN_1012933f8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  byte *unaff_x19;
  undefined8 *puVar15;
  byte *pbVar16;
  byte *unaff_x22;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uVar6 = *(ulong *)(param_2 + 8);
    pbStack_108 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar1 = pbStack_108 + lVar13 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar11 = pbStack_108;
    pbStack_f0 = pbStack_108;
    uStack_e0 = uVar6;
    pbStack_d8 = pbVar1;
    if (lVar13 == 0) {
LAB_101293910:
      pbStack_e8 = pbVar11;
      pbVar10 = (byte *)FUN_1087e422c(0,&UNK_10b2322d0,&UNK_10b20a590);
LAB_10129392c:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar10;
    }
    else {
      pbVar11 = pbStack_108 + 0x20;
      if (*pbStack_108 == 0x16) goto LAB_101293910;
      uVar12 = *(undefined8 *)(pbStack_108 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbStack_108 + 9);
      bStack_8f = (byte)uVar12;
      uStack_8e = (undefined6)((ulong)uVar12 >> 8);
      uStack_88 = (undefined1)((ulong)uVar12 >> 0x38);
      lStack_78 = *(long *)(pbStack_108 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbStack_108 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_108 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar11;
      bStack_90 = *pbStack_108;
      FUN_1004b62d4(&uStack_a8,&bStack_90);
      uVar12 = uStack_98;
      pbVar10 = pbStack_a0;
      puVar17 = uStack_a8;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_10129392c;
      if (lVar13 == 1) {
LAB_101293b2c:
        pbStack_f8 = (byte *)FUN_1087e422c(1,&UNK_10b2322d0,&UNK_10b20a590);
LAB_101293b48:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_f8;
      }
      else {
        pbVar11 = pbStack_108 + 0x40;
        pbStack_e8 = pbVar11;
        if (pbStack_108[0x20] == 0x16) goto LAB_101293b2c;
        uVar22 = *(undefined8 *)(pbStack_108 + 0x21);
        uStack_87 = (undefined7)*(undefined8 *)(pbStack_108 + 0x29);
        bStack_8f = (byte)uVar22;
        uStack_8e = (undefined6)((ulong)uVar22 >> 8);
        uStack_88 = (undefined1)((ulong)uVar22 >> 0x38);
        lStack_78 = *(long *)(pbStack_108 + 0x38);
        uStack_80 = (undefined1)*(undefined8 *)(pbStack_108 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_108 + 0x30) >> 8);
        pbStack_d0 = (byte *)0x2;
        bStack_90 = pbStack_108[0x20];
        FUN_1004b60cc(&uStack_a8,&bStack_90);
        pbVar16 = pbStack_a0;
        puVar19 = uStack_a8;
        pbStack_f8 = pbStack_a0;
        if (uStack_a8 == (undefined *)0x8000000000000001) goto LAB_101293b48;
        if (lVar13 == 2) {
LAB_101293c0c:
          bVar14 = 0;
LAB_101293c50:
          *param_1 = puVar17;
          param_1[1] = pbVar10;
          param_1[2] = uVar12;
          param_1[3] = puVar19;
          param_1[4] = pbVar16;
          param_1[5] = uStack_98;
          *(byte *)(param_1 + 6) = bVar14;
          lVar13 = FUN_100fbc738(&pbStack_f0);
          if (lVar13 == 0) goto LAB_101293ad8;
          *param_1 = 0x8000000000000000;
          param_1[1] = lVar13;
          if (puVar17 != (undefined *)0x0) {
            _free(pbVar10);
          }
          uVar6 = (ulong)puVar19 & 0x7fffffffffffffff;
          pbStack_108 = pbVar16;
          goto joined_r0x000101293c8c;
        }
        pbVar11 = pbStack_108 + 0x60;
        bVar5 = pbStack_108[0x40];
        pbStack_e8 = pbVar11;
        if (bVar5 == 0x16) goto LAB_101293c0c;
        uVar22 = *(undefined8 *)(pbStack_108 + 0x41);
        uStack_87 = (undefined7)*(undefined8 *)(pbStack_108 + 0x49);
        bStack_8f = (byte)uVar22;
        bVar14 = bStack_8f;
        uStack_8e = (undefined6)((ulong)uVar22 >> 8);
        uStack_88 = (undefined1)((ulong)uVar22 >> 0x38);
        lStack_78 = *(long *)(pbStack_108 + 0x58);
        uStack_80 = (undefined1)*(undefined8 *)(pbStack_108 + 0x50);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_108 + 0x50) >> 8);
        pbStack_d0 = (byte *)0x3;
        bStack_90 = bVar5;
        if (bVar5 == 0) {
          FUN_100e077ec(&bStack_90);
          goto LAB_101293c50;
        }
        uVar12 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar12;
        if (((ulong)puVar19 & 0x7fffffffffffffff) != 0) {
          _free(pbVar16);
        }
      }
      if (puVar17 != (undefined *)0x0) {
        _free(pbVar10);
      }
    }
    lVar13 = ((ulong)((long)pbVar1 - (long)pbVar11) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100e077ec(pbVar11);
      pbVar11 = pbVar11 + 0x20;
    }
joined_r0x000101293c8c:
    if (uVar6 != 0) {
      _free(pbStack_108);
    }
  }
  else {
    if (bVar4 != 0x15) {
      uVar12 = FUN_108855b04(param_2,auStack_69,&UNK_10b20afa0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar11 = pbStack_d0 + lVar13;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_b8 = pbVar11;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar17 = (undefined *)0x8000000000000001;
      pbStack_100 = unaff_x19;
      pbStack_108 = unaff_x22;
      pbStack_c8 = pbStack_d0;
    }
    else {
      lVar20 = 0;
      puVar18 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar15 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      bVar5 = 2;
      puVar19 = (undefined *)0x8000000000000000;
      puVar17 = (undefined *)0x8000000000000001;
      pbVar1 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar16 = pbVar1 + 0x40;
        bVar14 = *pbVar1;
        pbVar10 = pbVar16;
        lVar21 = lVar20;
        if (bVar14 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar1 + 1);
        puVar18[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar18 = uVar12;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        uStack_e0 = *(ulong *)(pbVar1 + 0x30);
        plVar2 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar7 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar14;
        if (bVar14 < 0xd) {
          if (bVar14 == 1) {
            bVar14 = bStack_8f;
            if (2 < bStack_8f) {
              bVar14 = 3;
            }
LAB_101293728:
            uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,bVar14);
            uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
            goto LAB_10129372c;
          }
          if (bVar14 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bVar14 = (byte)plVar2;
            goto LAB_101293728;
          }
          if (bVar14 == 0xc) {
            if (lStack_78 == 10) {
              if (*plVar7 != 0x64745365736f6c63 || (short)plVar7[1] != 0x6e69) goto LAB_1012936a0;
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
            }
            else if (lStack_78 == 0xb) {
              if (*plVar7 != 0x73614261746c6564 || *(long *)((long)plVar7 + 3) != 0x3436657361426174
                 ) goto LAB_1012936a0;
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x100);
            }
            else if ((lStack_78 == 0xd) &&
                    (*plVar7 == 0x48737365636f7270 &&
                     *(long *)((long)plVar7 + 5) == 0x656c646e61487373)) {
              uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
            }
            else {
LAB_1012936a0:
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x300);
            }
joined_r0x000101293670:
            if (plVar2 != (long *)0x0) {
              _free(plVar7);
            }
          }
          else {
LAB_1012938b8:
            pbStack_a0 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b211480);
            uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
          }
        }
        else {
          if (bVar14 == 0xd) {
            if (plVar7 == (long *)0xa) {
              if (*plVar2 != 0x64745365736f6c63 || (short)plVar2[1] != 0x6e69) goto LAB_101293720;
              bVar14 = 2;
            }
            else if (plVar7 == (long *)0xb) {
              if (*plVar2 != 0x73614261746c6564 || *(long *)((long)plVar2 + 3) != 0x3436657361426174
                 ) goto LAB_101293720;
              bVar14 = 1;
            }
            else if ((plVar7 == (long *)0xd) &&
                    (*plVar2 == 0x48737365636f7270 &&
                     *(long *)((long)plVar2 + 5) == 0x656c646e61487373)) {
              bVar14 = 0;
            }
            else {
LAB_101293720:
              bVar14 = 3;
            }
            goto LAB_101293728;
          }
          if (bVar14 == 0xe) {
            func_0x000100bb6150(&uStack_a8,plVar7);
            goto joined_r0x000101293670;
          }
          if (bVar14 != 0xf) goto LAB_1012938b8;
          func_0x000100bb6150(&uStack_a8,plVar2,plVar7);
LAB_10129372c:
          FUN_100e077ec(&bStack_90);
        }
        bVar14 = bStack_8f;
        if (((ulong)uStack_a8 & 1) != 0) {
LAB_1012939c8:
          lStack_b0 = lVar20 + 1;
          pbVar11 = pbStack_a0;
          pbStack_c8 = pbVar16;
          goto LAB_101293a44;
        }
        bVar8 = (byte)pbStack_f0;
        if (uStack_a8._1_1_ < 2) {
          if (uStack_a8._1_1_ == 0) {
            if (puVar19 != (undefined *)0x8000000000000000) {
              lStack_b0 = lVar20 + 1;
              uStack_a8 = &UNK_108cc0902;
              pbStack_a0 = (byte *)0xd;
              bStack_90 = (byte)&uStack_a8;
              bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_c8 = pbVar16;
              pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto LAB_101293a44;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar8 == 0x16) {
              lStack_b0 = lVar20 + 1;
              pbStack_c8 = pbVar16;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101293e44;
            }
            uVar12 = *puVar15;
            puVar18[1] = puVar15[1];
            *puVar18 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
            bStack_90 = bVar8;
            FUN_1004b62d4(&uStack_a8,&bStack_90);
            if (uStack_a8 == (undefined *)0x8000000000000000) {
              puVar19 = (undefined *)0x0;
              goto LAB_1012939c8;
            }
            pbStack_100 = pbStack_a0;
            uStack_110 = uStack_98;
            puVar19 = uStack_a8;
          }
          else {
            if (puVar17 != (undefined *)0x8000000000000001) {
              lStack_b0 = lVar20 + 1;
              uStack_a8 = &UNK_108cc1562;
              pbStack_a0 = (byte *)0xb;
              bStack_90 = (byte)&uStack_a8;
              bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_c8 = pbVar16;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar12;
              puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
              goto joined_r0x000101293d28;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar8 == 0x16) {
              lStack_b0 = lVar20 + 1;
              pbStack_c8 = pbVar16;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101293e44;
            }
            uVar12 = *puVar15;
            puVar18[1] = puVar15[1];
            *puVar18 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
            bStack_90 = bVar8;
            FUN_1004b60cc(&uStack_a8,&bStack_90);
            if (uStack_a8 == (undefined *)0x8000000000000001) {
              lStack_b0 = lVar20 + 1;
              *param_1 = 0x8000000000000000;
              param_1[1] = pbStack_a0;
              pbStack_c8 = pbVar16;
              goto LAB_101293a68;
            }
            pbStack_108 = pbStack_a0;
            uStack_118 = uStack_98;
            puVar17 = uStack_a8;
          }
        }
        else if (uStack_a8._1_1_ == 2) {
          if (bVar5 != 2) {
            lStack_b0 = lVar20 + 1;
            uStack_a8 = &UNK_108cc156d;
            pbStack_a0 = (byte *)0xa;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar16;
            pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_101293a44;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar8 == 0x16) goto LAB_101293c98;
          uVar12 = *puVar15;
          puVar18[1] = puVar15[1];
          *puVar18 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
          bStack_90 = bVar8;
          if (bVar8 != 0) {
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar16;
            pbVar11 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
            goto LAB_101293a44;
          }
          FUN_100e077ec(&bStack_90);
          bVar5 = bVar14;
        }
        else {
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar8 == 0x16) {
LAB_101293c98:
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101293e44:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x101293e48);
            (*pcVar9)();
          }
          uVar12 = *puVar15;
          puVar18[1] = puVar15[1];
          *puVar18 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
          bStack_90 = bVar8;
          FUN_100e077ec(&bStack_90);
        }
        lVar20 = lVar20 + 1;
        pbVar10 = pbVar11;
        lVar21 = (lVar13 - 0x40U >> 6) + 1;
        pbVar1 = pbVar16;
      } while (pbVar16 != pbVar11);
      pbStack_c8 = pbVar10;
      lStack_b0 = lVar21;
      if (puVar19 != (undefined *)0x8000000000000000) {
        *param_1 = puVar19;
        param_1[1] = pbStack_100;
        puVar3 = (undefined *)0x8000000000000000;
        if (puVar17 != (undefined *)0x8000000000000001) {
          puVar3 = puVar17;
        }
        param_1[2] = uStack_110;
        param_1[3] = puVar3;
        param_1[4] = pbStack_108;
        param_1[5] = uStack_118;
        *(byte *)(param_1 + 6) = bVar5 & 1;
        FUN_100d34830(&pbStack_d0);
        if (pbVar11 == pbVar10) goto LAB_101293ad8;
        bStack_90 = (byte)lVar21;
        bStack_8f = (byte)((ulong)lVar21 >> 8);
        uStack_8e = (undefined6)((ulong)lVar21 >> 0x10);
        uVar12 = FUN_1087e422c(((ulong)((long)pbVar11 - (long)pbVar10) >> 6) + lVar21,&bStack_90,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar12;
        if (puVar19 != (undefined *)0x0) {
          _free(pbStack_100);
        }
        uVar6 = (ulong)puVar3 & 0x7fffffffffffffff;
        goto joined_r0x000101293c8c;
      }
    }
    uStack_a8 = &UNK_108cc0902;
    pbStack_a0 = (byte *)0xd;
    bStack_90 = (byte)&uStack_a8;
    bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    puVar19 = (undefined *)0x0;
    pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_101293a44:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar11;
    if (-0x7fffffffffffffff < (long)puVar17) {
joined_r0x000101293d28:
      if (puVar17 != (undefined *)0x0) {
        _free(pbStack_108);
      }
    }
LAB_101293a68:
    if (((ulong)puVar19 & 0x7fffffffffffffff) != 0) {
      _free(pbStack_100);
    }
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
  }
LAB_101293ad8:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

