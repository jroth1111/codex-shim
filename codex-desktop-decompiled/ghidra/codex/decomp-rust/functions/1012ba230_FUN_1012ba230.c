
/* WARNING: Type propagation algorithm not settling */

void FUN_1012ba230(ulong *param_1,byte *param_2)

{
  int *piVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int *piVar23;
  undefined *puVar24;
  char cVar25;
  byte *pbVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int *piStack_120;
  ulong uStack_118;
  ulong uStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f8;
  ulong uStack_f0;
  int *piStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  long lStack_98;
  char cStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  int *piStack_78;
  undefined1 auStack_69 [9];
  byte *pbVar17;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uStack_f0 = *(ulong *)(param_2 + 8);
    piStack_100 = *(int **)(param_2 + 0x10);
    piStack_e8 = piStack_100 + *(long *)(param_2 + 0x18) * 8;
    pbStack_e0 = (byte *)0x0;
    piStack_f8 = piStack_100;
    func_0x000100f25bc4(&cStack_90,&piStack_100);
    pbVar14 = pbStack_e0;
    piVar23 = piStack_e8;
    piVar1 = piStack_f8;
    uVar21 = CONCAT62(uStack_8e,CONCAT11(cStack_8f,cStack_90));
    uVar12 = CONCAT71(uStack_87,uStack_88);
    if (uVar21 == 0x8000000000000002) {
LAB_1012ba780:
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar12;
      piVar20 = piStack_f8;
      piVar23 = piStack_e8;
    }
    else {
      if (uVar21 == 0x8000000000000001) {
        uVar12 = FUN_1087e422c(0,&UNK_10b232148,&UNK_10b20a590);
        goto LAB_1012ba780;
      }
      piVar20 = piStack_f8;
      if (piStack_f8 == piStack_e8) {
LAB_1012ba98c:
        piStack_f8 = piVar20;
        piVar20 = piStack_f8;
        piVar11 = (int *)FUN_1087e422c(1,&UNK_10b232148,&UNK_10b20a590);
LAB_1012ba9a8:
        *param_1 = 0x8000000000000001;
        param_1[1] = (ulong)piVar11;
      }
      else {
        uVar10 = CONCAT71(uStack_7f,uStack_80);
        piVar20 = piStack_f8 + 8;
        iVar5 = *piStack_f8;
        if ((char)iVar5 == '\x16') goto LAB_1012ba98c;
        uVar27 = *(undefined8 *)((long)piStack_f8 + 1);
        uStack_87 = (undefined7)*(undefined8 *)((long)piStack_f8 + 9);
        cStack_8f = (char)uVar27;
        uStack_8e = (undefined6)((ulong)uVar27 >> 8);
        uStack_88 = (undefined1)((ulong)uVar27 >> 0x38);
        piStack_78 = *(int **)(piStack_f8 + 6);
        uStack_80 = (undefined1)*(undefined8 *)(piStack_f8 + 4);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(piStack_f8 + 4) >> 8);
        pbStack_e0 = pbStack_e0 + 1;
        piStack_f8 = piVar20;
        cStack_90 = (char)iVar5;
        FUN_1004b60cc(&uStack_b0,&cStack_90);
        piStack_108 = piStack_a8;
        puVar24 = uStack_b0;
        piVar11 = piStack_a8;
        if (uStack_b0 == (undefined *)0x8000000000000001) goto LAB_1012ba9a8;
        if (piVar20 == piVar23) {
LAB_1012ba830:
          uVar10 = FUN_1087e422c(2,&UNK_10b232148,&UNK_10b20a590);
        }
        else {
          piVar20 = piVar1 + 0x10;
          cVar25 = (char)piVar1[8];
          piStack_f8 = piVar20;
          if (cVar25 == '\x16') goto LAB_1012ba830;
          uVar27 = *(undefined8 *)((long)piVar1 + 0x21);
          uStack_87 = (undefined7)*(undefined8 *)((long)piVar1 + 0x29);
          cStack_8f = (char)uVar27;
          cVar6 = cStack_8f;
          uStack_8e = (undefined6)((ulong)uVar27 >> 8);
          uStack_88 = (undefined1)((ulong)uVar27 >> 0x38);
          piStack_78 = *(int **)(piVar1 + 0xe);
          uStack_80 = (undefined1)*(undefined8 *)(piVar1 + 0xc);
          uStack_7f = (undefined7)((ulong)*(undefined8 *)(piVar1 + 0xc) >> 8);
          pbStack_e0 = pbVar14 + 2;
          cStack_90 = cVar25;
          if (cVar25 == '\0') {
            FUN_100e077ec(&cStack_90);
            *param_1 = uVar21;
            param_1[1] = uVar12;
            param_1[2] = uVar10;
            param_1[3] = (ulong)puVar24;
            param_1[4] = (ulong)piStack_108;
            param_1[5] = (ulong)piStack_a0;
            *(char *)(param_1 + 6) = cVar6;
            uVar10 = FUN_100fbc738(&piStack_100);
            if (uVar10 == 0) goto LAB_1012baaec;
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar10;
            if ((uVar21 & 0x7fffffffffffffff) != 0) {
              _free(uVar12);
            }
            uVar21 = (ulong)puVar24 & 0x7fffffffffffffff;
            goto joined_r0x0001012bab94;
          }
          uVar10 = FUN_108855b04(&cStack_90,auStack_69,&UNK_10b20a560);
        }
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar10;
        if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
          _free(piStack_108);
        }
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        _free(uVar12);
      }
    }
    lVar15 = ((ulong)((long)piVar23 - (long)piVar20) >> 5) + 1;
    while (lVar15 = lVar15 + -1, piStack_108 = piStack_100, uVar21 = uStack_f0, lVar15 != 0) {
      FUN_100e077ec(piVar20);
      piVar20 = piVar20 + 8;
    }
  }
  else {
    if (bVar4 != 0x15) {
      uVar21 = FUN_108855b04(param_2,auStack_69,&UNK_10b20cc80);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar21;
      return;
    }
    uStack_d0 = *(undefined8 *)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    pbVar14 = pbVar16 + *(long *)(param_2 + 0x18) * 0x40;
    piStack_100 = (int *)CONCAT71(piStack_100._1_7_,0x16);
    lStack_c0 = 0;
    pbStack_e0 = pbVar16;
    pbStack_c8 = pbVar14;
    if (*(long *)(param_2 + 0x18) == 0) {
      cVar25 = '\x02';
      puVar24 = (undefined *)0x8000000000000001;
      uVar21 = 0x8000000000000001;
      pbVar26 = pbVar14;
      pbStack_d8 = pbVar16;
    }
    else {
      puVar22 = (undefined8 *)((ulong)&uStack_b0 | 1);
      puVar19 = (undefined8 *)((ulong)&piStack_100 | 1);
      puVar18 = (undefined8 *)((ulong)&cStack_90 | 1);
      cVar25 = '\x02';
      uVar21 = 0x8000000000000001;
      puVar24 = (undefined *)0x8000000000000001;
      pbVar17 = pbVar16;
      do {
        pbVar16 = pbVar17 + 0x40;
        bVar3 = *pbVar17;
        pbVar26 = pbVar14;
        pbStack_d8 = pbVar16;
        if (bVar3 == 0x16) break;
        lStack_c0 = lStack_c0 + 1;
        uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,bVar3);
        uVar27 = *(undefined8 *)(pbVar17 + 1);
        uVar29 = *(undefined8 *)(pbVar17 + 0x18);
        uVar28 = *(undefined8 *)(pbVar17 + 0x10);
        uVar31 = *(undefined8 *)(pbVar17 + 0x28);
        uVar30 = *(undefined8 *)(pbVar17 + 0x20);
        puVar22[1] = *(undefined8 *)(pbVar17 + 9);
        *puVar22 = uVar27;
        *(undefined8 *)((long)puVar22 + 0x17) = uVar29;
        *(undefined8 *)((long)puVar22 + 0xf) = uVar28;
        piStack_78 = *(int **)(pbVar17 + 0x38);
        uStack_88 = (undefined1)uVar31;
        uStack_87 = (undefined7)((ulong)uVar31 >> 8);
        cStack_90 = (char)uVar30;
        cStack_8f = (char)((ulong)uVar30 >> 8);
        uStack_8e = (undefined6)((ulong)uVar30 >> 0x10);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar17 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x30) >> 8);
        if ((char)piStack_100 != '\x16') {
          FUN_100e077ec(&piStack_100);
        }
        piStack_f8 = (int *)CONCAT71(uStack_87,uStack_88);
        piStack_100 = (int *)CONCAT62(uStack_8e,CONCAT11(cStack_8f,cStack_90));
        uStack_f0 = CONCAT71(uStack_7f,uStack_80);
        piStack_e8 = piStack_78;
        if (bVar3 < 0xd) {
          if (bVar3 == 1) {
            uVar13 = (uint)uStack_b0._1_1_;
            if (2 < uVar13) {
              uVar13 = 3;
            }
LAB_1012ba61c:
            FUN_100e077ec(&uStack_b0);
            goto LAB_1012ba624;
          }
          if (bVar3 == 4) {
            piVar1 = piStack_a8;
            if ((int *)0x2 < piStack_a8) {
              piVar1 = (int *)0x3;
            }
            uVar13 = (uint)piVar1;
            goto LAB_1012ba61c;
          }
          if (bVar3 == 0xc) {
            if (lStack_98 == 7) {
              if (*piStack_a0 == 0x62616e65 && *(int *)((long)piStack_a0 + 3) == 0x64656c62)
              goto LAB_1012ba52c;
            }
            else if (lStack_98 == 4) {
              if (*piStack_a0 == 0x68746170) goto LAB_1012ba454;
              if (*piStack_a0 == 0x656d616e) goto LAB_1012ba390;
            }
            goto LAB_1012ba5e4;
          }
LAB_1012bac90:
          uVar12 = FUN_108855b04(&uStack_b0,auStack_69,&UNK_10b2107e0);
          goto LAB_1012baca4;
        }
        if (bVar3 == 0xd) {
          if (piStack_a0 == (int *)0x7) {
            if (*piStack_a8 == 0x62616e65 && *(int *)((long)piStack_a8 + 3) == 0x64656c62) {
LAB_1012ba5b0:
              uVar13 = 2;
              goto LAB_1012ba61c;
            }
          }
          else if (piStack_a0 == (int *)0x4) {
            if (*piStack_a8 == 0x68746170) {
LAB_1012ba5b8:
              uVar13 = 0;
            }
            else {
              if (*piStack_a8 != 0x656d616e) goto LAB_1012ba618;
LAB_1012ba4a8:
              uVar13 = 1;
            }
            goto LAB_1012ba61c;
          }
LAB_1012ba618:
          uVar13 = 3;
          goto LAB_1012ba61c;
        }
        if (bVar3 != 0xe) {
          if (bVar3 != 0xf) goto LAB_1012bac90;
          if (piStack_a0 == (int *)0x7) {
            if (((((char)*piStack_a8 == 'e') && (*(char *)((long)piStack_a8 + 1) == 'n')) &&
                (*(char *)((long)piStack_a8 + 2) == 'a')) &&
               (((*(char *)((long)piStack_a8 + 3) == 'b' && ((char)piStack_a8[1] == 'l')) &&
                ((*(char *)((long)piStack_a8 + 5) == 'e' && (*(char *)((long)piStack_a8 + 6) == 'd')
                 ))))) goto LAB_1012ba5b0;
          }
          else if (piStack_a0 == (int *)0x4) {
            if ((char)*piStack_a8 == 'n') {
              if (((*(char *)((long)piStack_a8 + 1) == 'a') &&
                  (*(char *)((long)piStack_a8 + 2) == 'm')) &&
                 (*(char *)((long)piStack_a8 + 3) == 'e')) goto LAB_1012ba4a8;
            }
            else if (((((char)*piStack_a8 == 'p') && (*(char *)((long)piStack_a8 + 1) == 'a')) &&
                     (*(char *)((long)piStack_a8 + 2) == 't')) &&
                    (*(char *)((long)piStack_a8 + 3) == 'h')) goto LAB_1012ba5b8;
          }
          goto LAB_1012ba618;
        }
        if (lStack_98 == 7) {
          if ((((((char)*piStack_a0 == 'e') && (*(char *)((long)piStack_a0 + 1) == 'n')) &&
               ((*(char *)((long)piStack_a0 + 2) == 'a' &&
                ((*(char *)((long)piStack_a0 + 3) == 'b' && ((char)piStack_a0[1] == 'l')))))) &&
              (*(char *)((long)piStack_a0 + 5) == 'e')) && (*(char *)((long)piStack_a0 + 6) == 'd'))
          {
LAB_1012ba52c:
            uVar13 = 2;
            goto LAB_1012ba5e8;
          }
LAB_1012ba5e4:
          uVar13 = 3;
        }
        else {
          if (lStack_98 != 4) goto LAB_1012ba5e4;
          if ((char)*piStack_a0 == 'n') {
            if (((*(char *)((long)piStack_a0 + 1) != 'a') ||
                (*(char *)((long)piStack_a0 + 2) != 'm')) ||
               (*(char *)((long)piStack_a0 + 3) != 'e')) goto LAB_1012ba5e4;
LAB_1012ba390:
            uVar13 = 1;
          }
          else {
            if ((((char)*piStack_a0 != 'p') || (*(char *)((long)piStack_a0 + 1) != 'a')) ||
               ((*(char *)((long)piStack_a0 + 2) != 't' || (*(char *)((long)piStack_a0 + 3) != 'h'))
               )) goto LAB_1012ba5e4;
LAB_1012ba454:
            uVar13 = 0;
          }
        }
LAB_1012ba5e8:
        if (piStack_a8 != (int *)0x0) {
          _free();
        }
LAB_1012ba624:
        cVar7 = cStack_8f;
        uVar13 = uVar13 & 0xff;
        cVar6 = (char)piStack_100;
        if (1 < uVar13) {
          if (uVar13 != 2) {
            piStack_100 = (int *)CONCAT71(piStack_100._1_7_,0x16);
            if (cVar6 != '\x16') {
              uVar27 = *puVar19;
              puVar18[1] = puVar19[1];
              *puVar18 = uVar27;
              uVar27 = *(undefined8 *)((long)puVar19 + 0xf);
              *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
              *(undefined8 *)((long)puVar18 + 0xf) = uVar27;
              cStack_90 = cVar6;
              FUN_100e077ec(&cStack_90);
              goto LAB_1012ba2cc;
            }
LAB_1012baba0:
            piStack_100 = (int *)CONCAT71(piStack_100._1_7_,0x16);
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012bac74:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1012bac78);
            (*pcVar8)();
          }
          if (cVar25 == '\x02') {
            piStack_100 = (int *)CONCAT71(piStack_100._1_7_,0x16);
            if (cVar6 == '\x16') goto LAB_1012baba0;
            uVar27 = *puVar19;
            puVar18[1] = puVar19[1];
            *puVar18 = uVar27;
            uVar27 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar27;
            cStack_90 = cVar6;
            if (cVar6 == '\0') {
              FUN_100e077ec(&cStack_90);
              cVar25 = cVar7;
              goto LAB_1012ba2cc;
            }
            uVar12 = FUN_108855b04(&cStack_90,auStack_69,&UNK_10b20a560);
          }
          else {
            uStack_b0 = &UNK_108ca2209;
            piStack_a8 = (int *)0x7;
            cStack_90 = (char)&uStack_b0;
            cStack_8f = (char)((ulong)&uStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
          }
LAB_1012baca4:
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar12;
LAB_1012baa58:
          bVar9 = true;
          if ((puVar24 != (undefined *)0x8000000000000001) &&
             (bVar9 = true, ((ulong)puVar24 & 0x7fffffffffffffff) != 0)) {
            _free(piStack_108);
          }
          goto LAB_1012baab0;
        }
        if (uVar13 == 0) {
          if (uVar21 != 0x8000000000000001) {
            uStack_b0 = &UNK_108c61038;
            piStack_a8 = (int *)0x4;
            cStack_90 = (char)&uStack_b0;
            cStack_8f = (char)((ulong)&uStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
            goto LAB_1012baca4;
          }
          func_0x000100f21808(&cStack_90,&piStack_100);
          uVar21 = CONCAT62(uStack_8e,CONCAT11(cStack_8f,cStack_90));
          if (uVar21 != 0x8000000000000001) {
            uStack_118 = CONCAT71(uStack_7f,uStack_80);
            pbVar14 = pbStack_c8;
            pbVar16 = pbStack_d8;
            uStack_110 = CONCAT71(uStack_87,uStack_88);
            goto LAB_1012ba2cc;
          }
          uVar21 = 0x8000000000000001;
          *param_1 = 0x8000000000000001;
          param_1[1] = CONCAT71(uStack_87,uStack_88);
          goto LAB_1012baa58;
        }
        if (puVar24 != (undefined *)0x8000000000000001) {
          uStack_b0 = &UNK_108c61018;
          piStack_a8 = (int *)0x4;
          cStack_90 = (char)&uStack_b0;
          cStack_8f = (char)((ulong)&uStack_b0 >> 8);
          uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
          goto LAB_1012baca4;
        }
        piStack_100 = (int *)CONCAT71(piStack_100._1_7_,0x16);
        if (cVar6 == '\x16') {
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1012bac74;
        }
        uVar27 = *puVar19;
        puVar18[1] = puVar19[1];
        *puVar18 = uVar27;
        uVar27 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar27;
        cStack_90 = cVar6;
        FUN_1004b60cc(&uStack_b0,&cStack_90);
        piStack_108 = piStack_a8;
        if (uStack_b0 == (undefined *)0x8000000000000001) {
          *param_1 = 0x8000000000000001;
          param_1[1] = (ulong)piStack_a8;
          bVar9 = true;
          goto LAB_1012baab0;
        }
        piStack_120 = piStack_a0;
        puVar24 = uStack_b0;
LAB_1012ba2cc:
        pbVar17 = pbVar16;
        pbVar26 = pbVar16;
      } while (pbVar16 != pbVar14);
    }
    bVar9 = uVar21 == 0x8000000000000001;
    uVar12 = 0x8000000000000000;
    if (!bVar9) {
      uVar12 = uVar21;
    }
    puVar2 = (undefined *)0x8000000000000000;
    if (puVar24 != (undefined *)0x8000000000000001) {
      puVar2 = puVar24;
    }
    if (cVar25 == '\x02') {
      uStack_b0 = &UNK_108ca2209;
      piStack_a8 = (int *)0x7;
      cStack_90 = (char)&uStack_b0;
      cStack_8f = (char)((ulong)&uStack_b0 >> 8);
      uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&cStack_90);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar10;
      if (((ulong)puVar2 & 0x7fffffffffffffff) != 0) {
        _free(piStack_108);
      }
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
        _free(uStack_110);
      }
LAB_1012baab0:
      if (((uVar21 != 0x8000000000000001) && (bVar9)) && ((uVar21 & 0x7fffffffffffffff) != 0)) {
        _free(uStack_110);
      }
      FUN_100d34830(&pbStack_e0);
      if ((char)piStack_100 != '\x16') {
        FUN_100e077ec(&piStack_100);
      }
      goto LAB_1012baaec;
    }
    *param_1 = uVar12;
    param_1[1] = uStack_110;
    param_1[2] = uStack_118;
    param_1[3] = (ulong)puVar2;
    param_1[4] = (ulong)piStack_108;
    param_1[5] = (ulong)piStack_120;
    *(char *)(param_1 + 6) = cVar25;
    FUN_100d34830(&pbStack_e0);
    if (pbVar26 == pbVar16) {
      uVar21 = 0;
    }
    else {
      cStack_90 = (char)lStack_c0;
      cStack_8f = (char)((ulong)lStack_c0 >> 8);
      uStack_8e = (undefined6)((ulong)lStack_c0 >> 0x10);
      uVar21 = FUN_1087e422c(lStack_c0 + ((ulong)((long)pbVar26 - (long)pbVar16) >> 6),&cStack_90,
                             &UNK_10b23a190);
    }
    if ((char)piStack_100 != '\x16') {
      FUN_100e077ec(&piStack_100);
    }
    if (uVar21 == 0) goto LAB_1012baaec;
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar21;
    if ((uVar12 & 0x7fffffffffffffff) == 0) {
      uVar21 = (ulong)puVar2 & 0x7fffffffffffffff;
    }
    else {
      _free(uStack_110);
      uVar21 = (ulong)puVar2 & 0x7fffffffffffffff;
    }
  }
joined_r0x0001012bab94:
  if (uVar21 != 0) {
    _free(piStack_108);
  }
LAB_1012baaec:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

