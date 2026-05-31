
void FUN_101359504(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong *puVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  byte *pbVar17;
  long unaff_x23;
  undefined8 *puVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 uStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  long lStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  char cStack_b7;
  undefined6 uStack_b6;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  bVar4 = *param_2;
  if (bVar4 != 0x14) {
    if (bVar4 != 0x15) {
      uVar16 = FUN_108855b04(param_2,&puStack_d8,&UNK_10b20c1c0);
      *param_1 = 1;
      param_1[1] = uVar16;
      return;
    }
    uStack_110 = *(undefined8 *)(param_2 + 8);
    pbStack_120 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_120 + lVar12;
    pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
    lStack_100 = 0;
    pbStack_118 = pbStack_120;
    pbStack_108 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      uStack_f8 = 0;
    }
    else {
      lVar19 = 0;
      bVar7 = false;
      uStack_148 = 0;
      puVar18 = (undefined8 *)((ulong)&bStack_b8 | 1);
      puVar15 = (undefined8 *)((ulong)&pbStack_140 | 1);
      pbVar2 = pbStack_120;
      do {
        pbVar20 = pbVar2 + 0x40;
        bVar3 = *pbVar2;
        lVar10 = lVar19;
        pbVar17 = pbVar20;
        if (bVar3 == 0x16) break;
        uVar16 = *(undefined8 *)(pbVar2 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar2 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar16;
        uVar16 = *(undefined8 *)(pbVar2 + 1);
        puVar18[1] = *(undefined8 *)(pbVar2 + 9);
        *puVar18 = uVar16;
        pbStack_138 = *(byte **)(pbVar2 + 0x28);
        pbStack_140 = *(byte **)(pbVar2 + 0x20);
        pbStack_128 = *(byte **)(pbVar2 + 0x38);
        lStack_130 = *(long *)(pbVar2 + 0x30);
        plVar5 = (long *)CONCAT71(uStack_af,uStack_b0);
        puVar6 = (ulong *)CONCAT71(uStack_a7,uStack_a8);
        bStack_b8 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 != 1) {
            if (bVar3 == 4) {
              bVar9 = plVar5 == (long *)0x0;
              goto LAB_1013597b0;
            }
            if (bVar3 == 0xc) {
              if (lStack_a0 == 10) {
                uVar13 = *puVar6;
                uVar14 = (ushort)puVar6[1] ^ 0x746e;
                bVar9 = (uVar13 ^ 0x656d656c62616e65) != 0 || uVar14 != 0;
                if (plVar5 == (long *)0x0) goto LAB_1013597c4;
                _free();
                if ((uVar13 ^ 0x656d656c62616e65) == 0 && uVar14 == 0) goto LAB_10135980c;
              }
              else if (plVar5 != (long *)0x0) {
                _free();
              }
              goto LAB_1013597c8;
            }
LAB_101359bc0:
            lStack_100 = lVar19 + 1;
            uStack_f8 = uStack_148;
            pbStack_118 = pbVar20;
            uVar16 = FUN_108855b04(&bStack_b8,&puStack_d8,&UNK_10b211880);
            goto LAB_101359bf4;
          }
          bVar9 = cStack_b7 == '\0';
LAB_1013597b0:
          bVar9 = !bVar9;
LAB_1013597bc:
          FUN_100e077ec(&bStack_b8);
LAB_1013597c4:
          if (!bVar9) goto LAB_10135980c;
LAB_1013597c8:
          bVar3 = (byte)pbStack_140;
          pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_100 = lVar19 + 1;
            uStack_f8 = uStack_148;
            pbStack_118 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101359bbc;
          }
          uVar16 = *puVar15;
          puVar18[1] = puVar15[1];
          *puVar18 = uVar16;
          uVar16 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar16;
          bStack_b8 = bVar3;
          FUN_100e077ec(&bStack_b8);
        }
        else {
          if (bVar3 == 0xd) {
            if (puVar6 == (ulong *)0xa) {
              bVar9 = false;
              if (*plVar5 == 0x656d656c62616e65) {
                bVar9 = (short)plVar5[1] == 0x746e;
              }
              goto LAB_1013597b0;
            }
LAB_1013597b8:
            bVar9 = true;
            goto LAB_1013597bc;
          }
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_101359bc0;
            if (((((((puVar6 != (ulong *)0xa) || ((char)*plVar5 != 'e')) ||
                   (*(char *)((long)plVar5 + 1) != 'n')) ||
                  ((*(char *)((long)plVar5 + 2) != 'a' || (*(char *)((long)plVar5 + 3) != 'b')))) ||
                 ((*(char *)((long)plVar5 + 4) != 'l' ||
                  ((*(char *)((long)plVar5 + 5) != 'e' || (*(char *)((long)plVar5 + 6) != 'm'))))))
                || (*(char *)((long)plVar5 + 7) != 'e')) || ((char)plVar5[1] != 'n'))
            goto LAB_1013597b8;
            bVar9 = *(char *)((long)plVar5 + 9) == 't';
            goto LAB_1013597b0;
          }
          if (((((lStack_a0 == 10) && ((char)*puVar6 == 'e')) &&
               (*(char *)((long)puVar6 + 1) == 'n')) &&
              (((*(char *)((long)puVar6 + 2) == 'a' && (*(char *)((long)puVar6 + 3) == 'b')) &&
               ((*(char *)((long)puVar6 + 4) == 'l' &&
                ((*(char *)((long)puVar6 + 5) == 'e' && (*(char *)((long)puVar6 + 6) == 'm'))))))))
             && ((*(char *)((long)puVar6 + 7) == 'e' && ((char)puVar6[1] == 'n')))) {
            bVar9 = *(char *)((long)puVar6 + 9) != 't';
          }
          else {
            bVar9 = true;
          }
          if (plVar5 == (long *)0x0) goto LAB_1013597c4;
          _free();
          if (bVar9) goto LAB_1013597c8;
LAB_10135980c:
          if (bVar7) {
            lStack_100 = lVar19 + 1;
            uStack_f8 = uStack_148;
            puStack_d8 = &UNK_108cc1f3b;
            lStack_d0 = 10;
            bStack_b8 = (byte)&puStack_d8;
            cStack_b7 = (char)((ulong)&puStack_d8 >> 8);
            uStack_b6 = (undefined6)((ulong)&puStack_d8 >> 0x10);
            uStack_b0 = 0xa0;
            uStack_af = 0x100c7b3;
            pbStack_118 = pbVar20;
            uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b8);
LAB_101359bf4:
            *param_1 = 1;
            param_1[1] = uVar16;
            if (bVar7) {
              if (unaff_x23 == 0) {
                uStack_e0 = 0;
              }
              else {
                uStack_b0 = 0;
                uStack_af = 0;
                uStack_a8 = (undefined1)unaff_x23;
                uStack_a7 = (undefined7)((ulong)unaff_x23 >> 8);
                lStack_a0 = lStack_e8;
                uStack_90 = 0;
                lStack_80 = lStack_e8;
                lStack_88 = unaff_x23;
              }
              bStack_b8 = unaff_x23 != 0;
              uStack_98 = (ulong)bStack_b8;
              cStack_b7 = '\0';
              uStack_b6 = 0;
              uStack_78 = uStack_e0;
              while (FUN_100f3a554(&puStack_d8,&bStack_b8), puStack_d8 != (undefined *)0x0) {
                if (*(long *)(puStack_d8 + lStack_c8 * 0x18 + 8) != 0) {
                  _free(*(undefined8 *)(puStack_d8 + lStack_c8 * 0x18 + 0x10));
                }
              }
            }
            goto LAB_101359a3c;
          }
          bVar3 = (byte)pbStack_140;
          pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_100 = lVar19 + 1;
            uStack_f8 = uStack_148;
            pbStack_118 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101359bbc:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101359bc0);
            (*pcVar8)();
          }
          uVar16 = *puVar15;
          puVar18[1] = puVar15[1];
          *puVar18 = uVar16;
          uVar16 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar16;
          bStack_b8 = bVar3;
          FUN_101284e0c(&puStack_d8,&bStack_b8);
          if ((int)puStack_d8 == 1) {
            lStack_100 = lVar19 + 1;
            *param_1 = 1;
            param_1[1] = lStack_d0;
            pbStack_118 = pbVar20;
            goto LAB_101359a3c;
          }
          uStack_e0 = uStack_c0;
          lStack_e8 = lStack_c8;
          uStack_148 = 1;
          bVar7 = true;
          unaff_x23 = lStack_d0;
        }
        lVar19 = lVar19 + 1;
        lVar10 = (lVar12 - 0x40U >> 6) + 1;
        pbVar17 = pbVar1;
        pbVar2 = pbVar20;
      } while (pbVar20 != pbVar1);
      uStack_f8 = uStack_148;
      pbStack_118 = pbVar17;
      lStack_100 = lVar10;
      if (bVar7) {
        param_1[3] = uStack_e0;
        param_1[2] = lStack_e8;
        param_1[1] = unaff_x23;
        *param_1 = 0;
        lVar12 = param_1[2];
        uVar16 = param_1[3];
        FUN_100d34830(&pbStack_120);
        if (pbVar1 == pbVar17) {
          *param_1 = 0;
        }
        else {
          bStack_b8 = (byte)lVar10;
          cStack_b7 = (char)((ulong)lVar10 >> 8);
          uStack_b6 = (undefined6)((ulong)lVar10 >> 0x10);
          uVar11 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar17) >> 6) + lVar10,&bStack_b8,
                                 &UNK_10b23a190);
          *param_1 = 1;
          param_1[1] = uVar11;
          if (unaff_x23 == 0) {
            uVar16 = 0;
          }
          else {
            uStack_b0 = 0;
            uStack_af = 0;
            uStack_a8 = (undefined1)unaff_x23;
            uStack_a7 = (undefined7)((ulong)unaff_x23 >> 8);
            uStack_90 = 0;
            lStack_a0 = lVar12;
            lStack_88 = unaff_x23;
            lStack_80 = lVar12;
          }
          bStack_b8 = unaff_x23 != 0;
          uStack_98 = (ulong)bStack_b8;
          cStack_b7 = '\0';
          uStack_b6 = 0;
          uStack_78 = uVar16;
          while (FUN_100f3a554(&puStack_d8,&bStack_b8), puStack_d8 != (undefined *)0x0) {
            if (*(long *)(puStack_d8 + lStack_c8 * 0x18 + 8) != 0) {
              _free(*(undefined8 *)(puStack_d8 + lStack_c8 * 0x18 + 0x10));
            }
          }
        }
        goto LAB_101359a5c;
      }
    }
    puStack_d8 = &UNK_108cc1f3b;
    lStack_d0 = 10;
    bStack_b8 = (byte)&puStack_d8;
    cStack_b7 = (char)((ulong)&puStack_d8 >> 8);
    uStack_b6 = (undefined6)((ulong)&puStack_d8 >> 0x10);
    uStack_b0 = 0xa0;
    uStack_af = 0x100c7b3;
    uVar16 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_b8);
    *param_1 = 1;
    param_1[1] = uVar16;
LAB_101359a3c:
    FUN_100d34830(&pbStack_120);
    if ((byte)pbStack_140 != '\x16') {
      FUN_100e077ec(&pbStack_140);
    }
    goto LAB_101359a5c;
  }
  lVar12 = *(long *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar1 = pbVar2 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_120 = (byte *)0x0;
  pbVar17 = pbVar2;
  pbStack_140 = pbVar2;
  lStack_130 = lVar12;
  pbStack_128 = pbVar1;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_1013598b8:
    pbStack_138 = pbVar17;
    lVar19 = FUN_1087e422c(0,&UNK_10b233370,&UNK_10b20a590);
  }
  else {
    pbVar17 = pbVar2 + 0x20;
    if (*pbVar2 == 0x16) goto LAB_1013598b8;
    uVar16 = *(undefined8 *)(pbVar2 + 1);
    uStack_af = (undefined7)*(undefined8 *)(pbVar2 + 9);
    cStack_b7 = (char)uVar16;
    uStack_b6 = (undefined6)((ulong)uVar16 >> 8);
    uStack_b0 = (undefined1)((ulong)uVar16 >> 0x38);
    lStack_a0 = *(long *)(pbVar2 + 0x18);
    uStack_a8 = (undefined1)*(undefined8 *)(pbVar2 + 0x10);
    uStack_a7 = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x10) >> 8);
    pbStack_120 = (byte *)0x1;
    pbStack_138 = pbVar17;
    bStack_b8 = *pbVar2;
    FUN_101284e0c(&puStack_d8,&bStack_b8);
    lVar19 = lStack_d0;
    if ((int)puStack_d8 != 1) {
      param_1[3] = uStack_c0;
      param_1[2] = lStack_c8;
      param_1[1] = lStack_d0;
      *param_1 = 0;
      lVar12 = param_1[2];
      uVar16 = param_1[3];
      lVar10 = FUN_100fbc738(&pbStack_140);
      if (lVar10 == 0) {
        *param_1 = 0;
      }
      else {
        *param_1 = 1;
        param_1[1] = lVar10;
        if (lVar19 == 0) {
          uVar16 = 0;
        }
        else {
          uStack_b0 = 0;
          uStack_af = 0;
          uStack_a8 = (undefined1)lVar19;
          uStack_a7 = (undefined7)((ulong)lVar19 >> 8);
          uStack_90 = 0;
          lStack_88 = lVar19;
          lStack_a0 = lVar12;
          lStack_80 = lVar12;
        }
        bStack_b8 = lVar19 != 0;
        uStack_98 = (ulong)bStack_b8;
        cStack_b7 = '\0';
        uStack_b6 = 0;
        uStack_78 = uVar16;
        while (FUN_100f3a554(&puStack_d8,&bStack_b8), puStack_d8 != (undefined *)0x0) {
          if (*(long *)(puStack_d8 + lStack_c8 * 0x18 + 8) != 0) {
            _free(*(undefined8 *)(puStack_d8 + lStack_c8 * 0x18 + 0x10));
          }
        }
      }
      goto LAB_101359a5c;
    }
  }
  *param_1 = 1;
  param_1[1] = lVar19;
  lVar19 = ((ulong)((long)pbVar1 - (long)pbVar17) >> 5) + 1;
  while (lVar19 = lVar19 + -1, lVar19 != 0) {
    FUN_100e077ec(pbVar17);
    pbVar17 = pbVar17 + 0x20;
  }
  if (lVar12 != 0) {
    _free(pbVar2);
  }
LAB_101359a5c:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

