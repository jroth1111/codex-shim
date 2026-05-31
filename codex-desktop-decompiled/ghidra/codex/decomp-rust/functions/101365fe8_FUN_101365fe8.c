
void FUN_101365fe8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *unaff_x21;
  byte *pbVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 *puVar20;
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
  char cStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uVar13 = *(ulong *)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar1 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar15 = unaff_x21;
    pbStack_f0 = unaff_x21;
    uStack_e0 = uVar13;
    pbStack_d8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10136641c:
      pbStack_e8 = pbVar15;
      pbVar10 = (byte *)FUN_1087e422c(0,&UNK_10b2321e0,&UNK_10b20a590);
    }
    else {
      pbVar15 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_10136641c;
      uVar11 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar11;
      uStack_86 = (undefined6)((ulong)uVar11 >> 8);
      uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar15;
      bStack_88 = *unaff_x21;
      FUN_1004b60cc(&puStack_a0,&bStack_88);
      pbVar10 = pbStack_98;
      puVar16 = puStack_a0;
      if (puStack_a0 != (undefined *)0x8000000000000001) {
        *param_1 = puStack_a0;
        param_1[1] = pbStack_98;
        param_1[2] = uStack_90;
        lVar12 = FUN_100fbc738(&pbStack_f0);
        if (lVar12 == 0) goto LAB_101366530;
        *param_1 = 0x8000000000000001;
        param_1[1] = lVar12;
        uVar13 = (ulong)puVar16 & 0x7fffffffffffffff;
        unaff_x21 = pbVar10;
        goto joined_r0x0001013664e0;
      }
    }
    *param_1 = 0x8000000000000001;
    param_1[1] = pbVar10;
    lVar12 = ((ulong)((long)pbVar1 - (long)pbVar15) >> 5) + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
  }
  else {
    if (bVar4 != 0x15) {
      uVar11 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20c6e0);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar11;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_d0 + lVar12;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_b8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar16 = (undefined *)0x8000000000000001;
      uStack_f8 = 0;
      pbVar15 = pbStack_d0;
      lVar7 = lStack_b0;
    }
    else {
      lVar19 = 0;
      puVar17 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar20 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar16 = (undefined *)0x8000000000000001;
      pbVar10 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar18 = pbVar10 + 0x40;
        bVar3 = *pbVar10;
        pbVar15 = pbVar18;
        lVar7 = lVar19;
        if (bVar3 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar10 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar10 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar10 + 1);
        puVar17[1] = *(undefined8 *)(pbVar10 + 9);
        *puVar17 = uVar11;
        pbStack_e8 = *(byte **)(pbVar10 + 0x28);
        pbStack_f0 = *(byte **)(pbVar10 + 0x20);
        pbStack_d8 = *(byte **)(pbVar10 + 0x38);
        uStack_e0 = *(ulong *)(pbVar10 + 0x30);
        plVar5 = (long *)CONCAT71(uStack_7f,uStack_80);
        puVar6 = (ulong *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar3;
        if (0xc < bVar3) {
          if (bVar3 == 0xd) {
            if (puVar6 == (ulong *)0xf) {
              bVar9 = false;
              if (*plVar5 == 0x6c7074656b72616d) {
                bVar9 = *(long *)((long)plVar5 + 7) == 0x656d614e6563616c;
              }
              goto LAB_101366320;
            }
LAB_101366328:
            bVar9 = true;
            goto LAB_10136632c;
          }
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_101366658;
            if ((((((puVar6 != (ulong *)0xf) || ((char)*plVar5 != 'm')) ||
                  (*(char *)((long)plVar5 + 1) != 'a')) ||
                 (((*(char *)((long)plVar5 + 2) != 'r' || (*(char *)((long)plVar5 + 3) != 'k')) ||
                  ((*(char *)((long)plVar5 + 4) != 'e' ||
                   ((*(char *)((long)plVar5 + 5) != 't' || (*(char *)((long)plVar5 + 6) != 'p'))))))
                 )) || ((*(char *)((long)plVar5 + 7) != 'l' ||
                        ((((char)plVar5[1] != 'a' || (*(char *)((long)plVar5 + 9) != 'c')) ||
                         (*(char *)((long)plVar5 + 10) != 'e')))))) ||
               (((*(char *)((long)plVar5 + 0xb) != 'N' || (*(char *)((long)plVar5 + 0xc) != 'a')) ||
                (*(char *)((long)plVar5 + 0xd) != 'm')))) goto LAB_101366328;
            bVar9 = *(char *)((long)plVar5 + 0xe) == 'e';
            goto LAB_101366320;
          }
          if (((((lStack_70 == 0xf) && ((char)*puVar6 == 'm')) &&
               ((*(char *)((long)puVar6 + 1) == 'a' &&
                ((((*(char *)((long)puVar6 + 2) == 'r' && (*(char *)((long)puVar6 + 3) == 'k')) &&
                  (*(char *)((long)puVar6 + 4) == 'e')) &&
                 ((*(char *)((long)puVar6 + 5) == 't' && (*(char *)((long)puVar6 + 6) == 'p'))))))))
              && (*(char *)((long)puVar6 + 7) == 'l')) &&
             ((((char)puVar6[1] == 'a' && (*(char *)((long)puVar6 + 9) == 'c')) &&
              ((*(char *)((long)puVar6 + 10) == 'e' &&
               (((*(char *)((long)puVar6 + 0xb) == 'N' && (*(char *)((long)puVar6 + 0xc) == 'a')) &&
                (*(char *)((long)puVar6 + 0xd) == 'm')))))))) {
            bVar9 = *(char *)((long)puVar6 + 0xe) != 'e';
          }
          else {
            bVar9 = true;
          }
          if (plVar5 == (long *)0x0) goto LAB_101366334;
          _free();
          if (bVar9) goto LAB_101366338;
LAB_10136637c:
          if (puVar16 == (undefined *)0x8000000000000001) {
            bVar3 = (byte)pbStack_f0;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar3 == 0x16) {
              lStack_b0 = lVar19 + 1;
              pbStack_c8 = pbVar18;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101366654:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101366658);
              (*pcVar8)();
            }
            uVar11 = *puVar20;
            puVar17[1] = puVar20[1];
            *puVar17 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar20 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
            bStack_88 = bVar3;
            FUN_1004b60cc(&puStack_a0,&bStack_88);
            if (puStack_a0 != (undefined *)0x8000000000000001) {
              uStack_f8 = uStack_90;
              unaff_x21 = pbStack_98;
              puVar16 = puStack_a0;
              goto LAB_101366084;
            }
            lStack_b0 = lVar19 + 1;
            *param_1 = 0x8000000000000001;
            param_1[1] = pbStack_98;
            pbStack_c8 = pbVar18;
          }
          else {
            lStack_b0 = lVar19 + 1;
            puStack_a0 = &UNK_108cbffd1;
            pbStack_98 = (byte *)0xf;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar18;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar11;
            puVar16 = (undefined *)((ulong)puVar16 & 0x7fffffffffffffff);
joined_r0x00010136669c:
            if (puVar16 != (undefined *)0x0) {
              _free(unaff_x21);
            }
          }
LAB_101366584:
          FUN_100d34830(&pbStack_d0);
          if ((byte)pbStack_f0 != '\x16') {
            FUN_100e077ec(&pbStack_f0);
          }
          goto LAB_101366530;
        }
        if (bVar3 != 1) {
          if (bVar3 == 4) {
            bVar9 = plVar5 == (long *)0x0;
            goto LAB_101366320;
          }
          if (bVar3 == 0xc) {
            if (lStack_70 == 0xf) {
              uVar13 = *puVar6;
              uVar14 = *(ulong *)((long)puVar6 + 7) ^ 0x656d614e6563616c;
              bVar9 = (uVar13 ^ 0x6c7074656b72616d) != 0 || uVar14 != 0;
              if (plVar5 == (long *)0x0) goto LAB_101366334;
              _free();
              if ((uVar13 ^ 0x6c7074656b72616d) == 0 && uVar14 == 0) goto LAB_10136637c;
            }
            else if (plVar5 != (long *)0x0) {
              _free();
            }
            goto LAB_101366338;
          }
LAB_101366658:
          lStack_b0 = lVar19 + 1;
          pbStack_c8 = pbVar18;
          uVar11 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b2129a0);
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar11;
          if ((long)puVar16 < -0x7ffffffffffffffe) goto LAB_101366584;
          goto joined_r0x00010136669c;
        }
        bVar9 = cStack_87 == '\0';
LAB_101366320:
        bVar9 = !bVar9;
LAB_10136632c:
        FUN_100e077ec(&bStack_88);
LAB_101366334:
        if (!bVar9) goto LAB_10136637c;
LAB_101366338:
        bVar3 = (byte)pbStack_f0;
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar3 == 0x16) {
          lStack_b0 = lVar19 + 1;
          pbStack_c8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101366654;
        }
        uVar11 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
        bStack_88 = bVar3;
        FUN_100e077ec(&bStack_88);
LAB_101366084:
        lVar19 = lVar19 + 1;
        pbVar15 = pbVar1;
        pbVar10 = pbVar18;
        lVar7 = (lVar12 - 0x40U >> 6) + 1;
      } while (pbVar18 != pbVar1);
    }
    lStack_b0 = lVar7;
    lVar12 = lStack_b0;
    puVar2 = (undefined *)0x8000000000000000;
    if (puVar16 != (undefined *)0x8000000000000001) {
      puVar2 = puVar16;
    }
    *param_1 = puVar2;
    param_1[1] = unaff_x21;
    param_1[2] = uStack_f8;
    pbStack_c8 = pbVar15;
    FUN_100d34830(&pbStack_d0);
    if (pbVar1 == pbVar15) goto LAB_101366530;
    bStack_88 = (byte)lVar12;
    cStack_87 = (char)((ulong)lVar12 >> 8);
    uStack_86 = (undefined6)((ulong)lVar12 >> 0x10);
    uVar11 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar15) >> 6) + lVar12,&bStack_88,
                           &UNK_10b23a190);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar11;
    uVar13 = (ulong)puVar2 & 0x7fffffffffffffff;
  }
joined_r0x0001013664e0:
  if (uVar13 != 0) {
    _free(unaff_x21);
  }
LAB_101366530:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

