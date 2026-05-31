
void FUN_101333138(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined8 in_x12;
  byte bVar15;
  byte *unaff_x21;
  byte bVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  byte bStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uVar5 = *(ulong *)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar1 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbStack_f0 = unaff_x21;
    uStack_e0 = uVar5;
    pbStack_d8 = pbVar1;
    pbVar10 = pbStack_d0;
    bVar15 = bStack_88;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar16 = 0;
      pbVar6 = unaff_x21;
      pbStack_e8 = unaff_x21;
      pbVar19 = (byte *)0x1;
joined_r0x0001013336bc:
      pbStack_d0 = pbVar19;
      pbVar19 = pbVar1;
      if (pbVar6 != pbVar1) {
        pbVar19 = pbVar6 + 0x20;
        bStack_88 = *pbVar6;
        pbStack_e8 = pbVar19;
        if (bStack_88 != 0x16) {
          uVar11 = *(undefined8 *)(pbVar6 + 1);
          uStack_7f = (undefined7)*(undefined8 *)(pbVar6 + 9);
          bStack_87 = (byte)uVar11;
          uStack_86 = (undefined6)((ulong)uVar11 >> 8);
          uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
          lStack_70 = *(long *)(pbVar6 + 0x18);
          uStack_78 = (undefined1)*(undefined8 *)(pbVar6 + 0x10);
          uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar6 + 0x10) >> 8);
          FUN_1004b60cc(&puStack_a0,&bStack_88);
          pbVar10 = pbStack_98;
          puVar17 = puStack_a0;
          if (puStack_a0 != (undefined *)0x8000000000000001) {
            *param_1 = puStack_a0;
            param_1[1] = pbStack_98;
            param_1[2] = uStack_90;
            *(byte *)(param_1 + 3) = bVar16;
            lVar13 = FUN_100fbc738(&pbStack_f0);
            if (lVar13 == 0) goto LAB_10133380c;
            *param_1 = 0x8000000000000001;
            param_1[1] = lVar13;
            uVar5 = (ulong)puVar17 & 0x7fffffffffffffff;
            unaff_x21 = pbVar10;
            goto joined_r0x00010133386c;
          }
          goto LAB_1013336f0;
        }
      }
      pbStack_d0 = pbVar10;
      bStack_88 = bVar15;
      pbVar10 = (byte *)FUN_1087e422c(1,&UNK_10b231798,&UNK_10b20a590);
    }
    else {
      pbVar19 = unaff_x21 + 0x20;
      bVar3 = *unaff_x21;
      pbStack_e8 = pbVar19;
      pbVar6 = pbVar19;
      if (bVar3 == 0x16) {
        bVar16 = 0;
        pbVar19 = (byte *)0x1;
        goto joined_r0x0001013336bc;
      }
      uVar11 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      bStack_87 = (byte)uVar11;
      bVar16 = bStack_87;
      uStack_86 = (undefined6)((ulong)uVar11 >> 8);
      uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      bStack_88 = bVar3;
      if (bVar3 == 0) {
        FUN_100e077ec(&bStack_88);
        pbVar19 = (byte *)0x2;
        pbVar10 = pbStack_d0;
        bVar15 = bStack_88;
        goto joined_r0x0001013336bc;
      }
      pbVar10 = (byte *)FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20a560);
    }
LAB_1013336f0:
    *param_1 = 0x8000000000000001;
    param_1[1] = pbVar10;
    lVar13 = ((ulong)((long)pbVar1 - (long)pbVar19) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100e077ec(pbVar19);
      pbVar19 = pbVar19 + 0x20;
    }
  }
  else {
    if (bVar4 != 0x15) {
      uVar11 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20c3a0);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar11;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbVar10 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbVar10 + lVar13;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_d0 = pbVar10;
    pbStack_b8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar15 = 0;
      puVar17 = (undefined *)0x8000000000000001;
      uStack_f8 = in_x12;
    }
    else {
      lVar20 = 0;
      puVar18 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar22 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar17 = (undefined *)0x8000000000000001;
      pbVar6 = pbVar10;
      pbStack_c8 = pbVar10;
      bVar16 = 2;
      do {
        pbVar19 = pbVar6 + 0x40;
        bVar3 = *pbVar6;
        pbVar10 = pbVar19;
        lVar21 = lVar20;
        bVar15 = bVar16;
        if (bVar3 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar6 + 1);
        puVar18[1] = *(undefined8 *)(pbVar6 + 9);
        *puVar18 = uVar11;
        pbStack_e8 = *(byte **)(pbVar6 + 0x28);
        pbStack_f0 = *(byte **)(pbVar6 + 0x20);
        pbStack_d8 = *(byte **)(pbVar6 + 0x38);
        uStack_e0 = *(ulong *)(pbVar6 + 0x30);
        plVar7 = (long *)CONCAT71(uStack_7f,uStack_80);
        plVar8 = (long *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 == 1) {
            iVar14 = 1;
            if (bStack_87 != 1) {
              iVar14 = 2;
            }
            iVar12 = 0;
            if (bStack_87 != 0) {
              iVar12 = iVar14;
            }
            goto LAB_10133356c;
          }
          if (bVar3 == 4) {
            iVar14 = 1;
            if (plVar7 != (long *)0x1) {
              iVar14 = 2;
            }
            iVar12 = 0;
            if (plVar7 != (long *)0x0) {
              iVar12 = iVar14;
            }
            goto LAB_10133356c;
          }
          if (bVar3 == 0xc) {
            if (lStack_70 == 3) {
              iVar12 = 1;
              if ((short)*plVar8 != 0x7763 || *(char *)((long)plVar8 + 2) != 'd') {
                iVar12 = 2;
              }
            }
            else if (lStack_70 == 0xd) {
              iVar12 = 2;
              if (*plVar8 == 0x4c6564756c636e69 && *(long *)((long)plVar8 + 5) == 0x73726579614c6564
                 ) {
                iVar12 = 0;
              }
            }
            else {
              iVar12 = 2;
            }
            goto joined_r0x000101333508;
          }
LAB_1013339d0:
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar19;
          uVar11 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b2112e0);
LAB_1013339f4:
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar11;
          if ((-0x7fffffffffffffff < (long)puVar17) && (puVar17 != (undefined *)0x0)) {
LAB_101333a18:
            _free(unaff_x21);
          }
LAB_101333894:
          FUN_100d34830(&pbStack_d0);
          if ((byte)pbStack_f0 != '\x16') {
            FUN_100e077ec(&pbStack_f0);
          }
          goto LAB_10133380c;
        }
        if (bVar3 == 0xd) {
          if (plVar8 == (long *)0x3) {
            iVar12 = 1;
            if ((short)*plVar7 != 0x7763 || *(char *)((long)plVar7 + 2) != 'd') {
              iVar12 = 2;
            }
          }
          else {
            if (plVar8 != (long *)0xd) goto LAB_10133353c;
            iVar12 = 2;
            if (*plVar7 == 0x4c6564756c636e69 && *(long *)((long)plVar7 + 5) == 0x73726579614c6564)
            {
              iVar12 = 0;
            }
          }
LAB_10133356c:
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_1013339d0;
            if (plVar8 == (long *)0x3) {
              if ((((char)*plVar7 != 'c') || (*(char *)((long)plVar7 + 1) != 'w')) ||
                 (*(char *)((long)plVar7 + 2) != 'd')) goto LAB_10133353c;
              iVar12 = 1;
            }
            else if ((((((plVar8 == (long *)0xd) && ((char)*plVar7 == 'i')) &&
                       ((*(char *)((long)plVar7 + 1) == 'n' &&
                        ((*(char *)((long)plVar7 + 2) == 'c' && (*(char *)((long)plVar7 + 3) == 'l')
                         ))))) && (*(char *)((long)plVar7 + 4) == 'u')) &&
                     (((((*(char *)((long)plVar7 + 5) == 'd' && (*(char *)((long)plVar7 + 6) == 'e')
                         ) && (*(char *)((long)plVar7 + 7) == 'L')) &&
                       (((char)plVar7[1] == 'a' && (*(char *)((long)plVar7 + 9) == 'y')))) &&
                      (*(char *)((long)plVar7 + 10) == 'e')))) &&
                    ((*(char *)((long)plVar7 + 0xb) == 'r' && (*(char *)((long)plVar7 + 0xc) == 's')
                     ))) {
              iVar12 = 0;
            }
            else {
LAB_10133353c:
              iVar12 = 2;
            }
            goto LAB_10133356c;
          }
          if (lStack_70 == 3) {
            if ((((char)*plVar8 != 'c') || (*(char *)((long)plVar8 + 1) != 'w')) ||
               (*(char *)((long)plVar8 + 2) != 'd')) goto LAB_1013334d4;
            iVar12 = 1;
          }
          else if (((((lStack_70 == 0xd) && ((char)*plVar8 == 'i')) &&
                    ((*(char *)((long)plVar8 + 1) == 'n' &&
                     ((*(char *)((long)plVar8 + 2) == 'c' && (*(char *)((long)plVar8 + 3) == 'l'))))
                    )) && ((*(char *)((long)plVar8 + 4) == 'u' &&
                           ((((*(char *)((long)plVar8 + 5) == 'd' &&
                              (*(char *)((long)plVar8 + 6) == 'e')) &&
                             (*(char *)((long)plVar8 + 7) == 'L')) &&
                            (((char)plVar8[1] == 'a' && (*(char *)((long)plVar8 + 9) == 'y'))))))))
                  && ((*(char *)((long)plVar8 + 10) == 'e' &&
                      ((*(char *)((long)plVar8 + 0xb) == 'r' &&
                       (*(char *)((long)plVar8 + 0xc) == 's')))))) {
            iVar12 = 0;
          }
          else {
LAB_1013334d4:
            iVar12 = 2;
          }
joined_r0x000101333508:
          if (plVar7 != (long *)0x0) {
            _free();
          }
        }
        bVar15 = bStack_87;
        bVar3 = (byte)pbStack_f0;
        if (iVar12 == 0) {
          if (bVar16 == 2) {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar3 == 0x16) goto LAB_1013338b4;
            uVar11 = *puVar22;
            puVar18[1] = puVar22[1];
            *puVar18 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
            bStack_88 = bVar3;
            if (bVar3 == 0) {
              FUN_100e077ec(&bStack_88);
              goto LAB_1013331e4;
            }
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20a560);
          }
          else {
            lStack_b0 = lVar20 + 1;
            puStack_a0 = &UNK_108cbff94;
            pbStack_98 = (byte *)0xd;
            bStack_88 = (byte)&puStack_a0;
            bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          }
          goto LAB_1013339f4;
        }
        if (iVar12 == 1) {
          if (puVar17 != (undefined *)0x8000000000000001) {
            lStack_b0 = lVar20 + 1;
            puStack_a0 = &UNK_108ca1f1d;
            pbStack_98 = (byte *)0x3;
            bStack_88 = (byte)&puStack_a0;
            bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar11;
            if (((ulong)puVar17 & 0x7fffffffffffffff) == 0) goto LAB_101333894;
            goto LAB_101333a18;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1013339a4;
          }
          uVar11 = *puVar22;
          puVar18[1] = puVar22[1];
          *puVar18 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
          bStack_88 = bVar3;
          FUN_1004b60cc(&puStack_a0,&bStack_88);
          if (puStack_a0 != (undefined *)0x8000000000000001) {
            uStack_f8 = uStack_90;
            unaff_x21 = pbStack_98;
            puVar17 = puStack_a0;
            bVar15 = bVar16;
            goto LAB_1013331e4;
          }
          lStack_b0 = lVar20 + 1;
          *param_1 = 0x8000000000000001;
          param_1[1] = pbStack_98;
          pbStack_c8 = pbVar19;
          goto LAB_101333894;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar3 == 0x16) {
LAB_1013338b4:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013339a4:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1013339a8);
          (*pcVar9)();
        }
        uVar11 = *puVar22;
        puVar18[1] = puVar22[1];
        *puVar18 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar22 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
        bStack_88 = bVar3;
        FUN_100e077ec(&bStack_88);
        bVar15 = bVar16;
LAB_1013331e4:
        lVar20 = lVar20 + 1;
        pbVar10 = pbVar1;
        lVar21 = (lVar13 - 0x40U >> 6) + 1;
        pbVar6 = pbVar19;
        bVar16 = bVar15;
      } while (pbVar19 != pbVar1);
      bVar15 = bVar15 & 1;
      lStack_b0 = lVar21;
    }
    lVar13 = lStack_b0;
    puVar2 = (undefined *)0x8000000000000000;
    if (puVar17 != (undefined *)0x8000000000000001) {
      puVar2 = puVar17;
    }
    *param_1 = puVar2;
    param_1[1] = unaff_x21;
    param_1[2] = uStack_f8;
    *(byte *)(param_1 + 3) = bVar15;
    pbStack_c8 = pbVar10;
    FUN_100d34830(&pbStack_d0);
    if (pbVar1 == pbVar10) goto LAB_10133380c;
    bStack_88 = (byte)lVar13;
    bStack_87 = (byte)((ulong)lVar13 >> 8);
    uStack_86 = (undefined6)((ulong)lVar13 >> 0x10);
    uVar11 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar10) >> 6) + lVar13,&bStack_88,
                           &UNK_10b23a190);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar11;
    uVar5 = (ulong)puVar2 & 0x7fffffffffffffff;
  }
joined_r0x00010133386c:
  if (uVar5 != 0) {
    _free(unaff_x21);
  }
LAB_10133380c:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

