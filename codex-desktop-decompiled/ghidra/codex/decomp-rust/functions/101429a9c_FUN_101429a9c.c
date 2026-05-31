
/* WARNING: Removing unreachable block (ram,0x00010142a2f8) */

void FUN_101429a9c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char cVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x26;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_1a8;
  undefined8 uStack_190;
  long *plStack_188;
  long *plStack_180;
  long lStack_178;
  char cStack_170;
  undefined7 uStack_16f;
  long *plStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  long lStack_120;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  char cStack_c0;
  char cStack_bf;
  undefined6 uStack_be;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    lVar12 = *(long *)(param_2 + 8);
    plVar3 = *(long **)(param_2 + 0x10);
    lVar21 = *(long *)(param_2 + 0x18);
    plVar2 = plVar3 + lVar21 * 4;
    uStack_f0 = 0;
    plVar20 = plVar3;
    plStack_110 = plVar3;
    plStack_100 = (long *)lVar12;
    plStack_f8 = plVar2;
    if (lVar21 == 0) {
LAB_101429b84:
      plStack_108 = plVar20;
      lStack_1a8 = FUN_1087e422c(0,&UNK_10b22e358,&UNK_10b20a590);
LAB_101429ba0:
      uStack_190 = (long *)0x8000000000000001;
      lVar21 = ((ulong)((long)plVar2 - (long)plVar20) >> 5) + 1;
      plStack_188 = (long *)lStack_1a8;
      while (lVar21 = lVar21 + -1, lVar21 != 0) {
        FUN_100e077ec(plVar20);
        plVar20 = plVar20 + 4;
      }
      if (lVar12 != 0) {
        _free(plVar3);
      }
    }
    else {
      plVar20 = plVar3 + 4;
      cVar17 = (char)*plVar3;
      if (cVar17 == '\x16') goto LAB_101429b84;
      uStack_87 = (undefined7)*(undefined8 *)((long)plVar3 + 9);
      uStack_8f = (undefined7)*(undefined8 *)((long)plVar3 + 1);
      uStack_88 = (undefined1)((ulong)*(undefined8 *)((long)plVar3 + 1) >> 0x38);
      lStack_78 = plVar3[3];
      uStack_80 = (undefined1)plVar3[2];
      uStack_7f = (undefined7)((ulong)plVar3[2] >> 8);
      uStack_f0 = 1;
      plStack_108 = plVar20;
      cStack_90 = cVar17;
      if (cVar17 != '\x10') {
        if (cVar17 != '\x11') {
          if (cVar17 == '\x12') goto LAB_10142a24c;
          FUN_10140ec48(&cStack_c0,&cStack_90);
          goto LAB_10142a3c0;
        }
        puVar15 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
        plStack_188 = (long *)puVar15[1];
        uStack_190 = (long *)*puVar15;
        lStack_178 = puVar15[3];
        plStack_180 = (long *)puVar15[2];
        FUN_10140ec48(&cStack_c0,&uStack_190);
        _free(puVar15);
        lStack_1a8 = lStack_b8;
        if (cStack_c0 != '\x01') goto LAB_10142a374;
        goto LAB_101429ba0;
      }
LAB_10142a24c:
      cStack_c0 = '\0';
      cStack_bf = '\x03';
      FUN_100e077ec(&cStack_90);
LAB_10142a3c0:
      lStack_1a8 = lStack_b8;
      if (cStack_c0 == '\x01') goto LAB_101429ba0;
LAB_10142a374:
      cVar17 = cStack_bf;
      plVar20 = plVar2;
      if (lVar21 == 1) {
LAB_10142a398:
        lStack_1a8 = FUN_1087e422c(1,&UNK_10b22e358,&UNK_10b20a590);
        goto LAB_101429ba0;
      }
      plVar20 = plVar3 + 8;
      cVar6 = (char)plVar3[4];
      plStack_108 = plVar20;
      if (cVar6 == '\x16') goto LAB_10142a398;
      uStack_87 = (undefined7)*(undefined8 *)((long)plVar3 + 0x29);
      uStack_8f = (undefined7)*(undefined8 *)((long)plVar3 + 0x21);
      uStack_88 = (undefined1)((ulong)*(undefined8 *)((long)plVar3 + 0x21) >> 0x38);
      lStack_78 = plVar3[7];
      uStack_80 = (undefined1)plVar3[6];
      uStack_7f = (undefined7)((ulong)plVar3[6] >> 8);
      uStack_f0 = 2;
      cStack_90 = cVar6;
      if (cVar6 != '\x10') {
        if (cVar6 == '\x11') {
          puVar15 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
          plStack_188 = (long *)puVar15[1];
          uStack_190 = (long *)*puVar15;
          lStack_178 = puVar15[3];
          plStack_180 = (long *)puVar15[2];
          FUN_10145ac5c(&cStack_c0,&uStack_190);
          _free(puVar15);
        }
        else {
          if (cVar6 == '\x12') goto LAB_10142a448;
          FUN_10145ac5c(&cStack_c0,&cStack_90);
        }
        plVar19 = (long *)CONCAT62(uStack_be,CONCAT11(cStack_bf,cStack_c0));
        lStack_1a8 = lStack_b8;
        if (plVar19 != (long *)0x8000000000000001) {
          lStack_d8 = lStack_a8;
          plStack_e0 = plStack_b0;
          if (plVar19 != (long *)0x8000000000000002) goto LAB_10142a454;
        }
        goto LAB_101429ba0;
      }
LAB_10142a448:
      FUN_100e077ec(&cStack_90);
      plVar19 = (long *)0x8000000000000000;
      lStack_1a8 = lVar12;
LAB_10142a454:
      lStack_178 = lStack_d8;
      plStack_180 = plStack_e0;
      cStack_170 = cVar17;
      lStack_148 = lStack_d8;
      plStack_150 = plStack_e0;
      pbStack_140 = (byte *)CONCAT71(uStack_16f,cVar17);
      uStack_190 = plVar19;
      plStack_188 = (long *)lStack_1a8;
      plStack_160 = plVar19;
      lStack_158 = lStack_1a8;
      lVar12 = FUN_100fbc738(&plStack_110);
      if (lVar12 == 0) goto LAB_101429bf8;
      uStack_190 = (long *)0x8000000000000001;
      lStack_1a8 = lVar12;
      plStack_188 = (long *)lVar12;
      if (plStack_160 != (long *)0x8000000000000000) {
        FUN_100e79780(&plStack_160);
      }
    }
LAB_101429bdc:
    plVar19 = (long *)0x8000000000000001;
    if ((bVar5 & 0x1e) != 0x14) {
      plVar19 = (long *)0x8000000000000001;
      FUN_100e077ec(param_2);
    }
  }
  else {
    if (bVar5 != 0x15) {
      lStack_1a8 = FUN_108855b04(param_2,&cStack_90,&UNK_10b20bae0);
      goto LAB_101429c04;
    }
    uStack_130 = *(undefined8 *)(param_2 + 8);
    pbStack_140 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_140 + lVar12;
    plStack_160 = (long *)CONCAT71(plStack_160._1_7_,0x16);
    lStack_120 = 0;
    pbStack_138 = pbStack_140;
    pbStack_128 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      plVar19 = (long *)0x8000000000000000;
      cStack_170 = '\x03';
      lStack_1a8 = unaff_x26;
    }
    else {
      lVar21 = 0;
      puVar16 = (undefined8 *)((ulong)&uStack_190 | 1);
      puVar15 = (undefined8 *)((ulong)&plStack_160 | 1);
      puVar18 = (undefined8 *)((ulong)&cStack_90 | 1);
      cVar17 = '\x04';
      plVar19 = (long *)0x8000000000000001;
      plVar20 = (long *)0x8000000000000001;
      pbVar7 = pbStack_140;
      do {
        uVar25 = uStack_190;
        pbVar22 = pbVar7 + 0x40;
        bVar4 = *pbVar7;
        lVar11 = lVar21;
        pbVar23 = pbVar22;
        if (bVar4 == 0x16) break;
        uStack_190 = (long *)CONCAT71(uStack_190._1_7_,bVar4);
        uVar9 = uStack_190;
        uVar24 = *(undefined8 *)(pbVar7 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar24;
        uVar24 = *(undefined8 *)(pbVar7 + 1);
        puVar16[1] = *(undefined8 *)(pbVar7 + 9);
        *puVar16 = uVar24;
        lStack_158 = *(long *)(pbVar7 + 0x28);
        plStack_160 = *(long **)(pbVar7 + 0x20);
        lStack_148 = *(long *)(pbVar7 + 0x38);
        plStack_150 = *(long **)(pbVar7 + 0x30);
        if (bVar4 < 0xd) {
          if (bVar4 == 1) {
            uStack_190._1_1_ = SUB81(uVar25,1);
            iVar14 = 1;
            if (uStack_190._1_1_ != '\x01') {
              iVar14 = 2;
            }
            iVar13 = 0;
            if (uStack_190._1_1_ != '\0') {
              iVar13 = iVar14;
            }
            goto LAB_10142a048;
          }
          if (bVar4 == 4) {
            iVar14 = 1;
            if (plStack_188 != (long *)0x1) {
              iVar14 = 2;
            }
            iVar13 = 0;
            if (plStack_188 != (long *)0x0) {
              iVar13 = iVar14;
            }
            goto LAB_10142a048;
          }
          if (bVar4 == 0xc) {
            if (lStack_178 == 0xb) {
              iVar13 = 1;
              if (*plStack_180 != 0x7379735f656c6966 ||
                  *(long *)((long)plStack_180 + 3) != 0x6d65747379735f65) {
                iVar13 = 2;
              }
            }
            else if (lStack_178 == 7) {
              iVar13 = 2;
              if ((int)*plStack_180 == 0x7774656e && *(int *)((long)plStack_180 + 3) == 0x6b726f77)
              {
                iVar13 = 0;
              }
            }
            else {
              iVar13 = 2;
            }
            goto joined_r0x000101429f6c;
          }
LAB_10142a63c:
          lStack_120 = lVar21 + 1;
          lStack_d8 = lStack_1a8;
          pbStack_138 = pbVar22;
          plStack_e0 = plVar20;
          lVar11 = FUN_108855b04(&uStack_190,&cStack_90,&UNK_10b20cec0);
LAB_10142a314:
          uStack_190 = (long *)0x8000000000000001;
          plStack_188 = (long *)lVar11;
          if (-0x7fffffffffffffff < (long)plVar19) {
LAB_10142a334:
            uStack_190 = (long *)0x8000000000000001;
            plStack_188 = (long *)lVar11;
            FUN_100e79780(&plStack_e0);
          }
LAB_10142a3f4:
          FUN_100d34830(&pbStack_140);
          lStack_1a8 = lVar11;
          if ((char)plStack_160 != '\x16') {
            FUN_100e077ec(&plStack_160);
          }
          goto LAB_101429bdc;
        }
        if (bVar4 == 0xd) {
          if (plStack_180 == (long *)0xb) {
            iVar13 = 1;
            if (*plStack_188 != 0x7379735f656c6966 ||
                *(long *)((long)plStack_188 + 3) != 0x6d65747379735f65) {
              iVar13 = 2;
            }
          }
          else {
            if (plStack_180 != (long *)0x7) goto LAB_10142a000;
            iVar13 = 2;
            if ((int)*plStack_188 == 0x7774656e && *(int *)((long)plStack_188 + 3) == 0x6b726f77) {
              iVar13 = 0;
            }
          }
LAB_10142a048:
          uStack_190 = (long *)uVar9;
          FUN_100e077ec(&uStack_190);
        }
        else {
          if (bVar4 != 0xe) {
            if (bVar4 != 0xf) goto LAB_10142a63c;
            if (plStack_180 == (long *)0xb) {
              if ((((((((char)*plStack_188 != 'f') || (*(char *)((long)plStack_188 + 1) != 'i')) ||
                     (*(char *)((long)plStack_188 + 2) != 'l')) ||
                    ((*(char *)((long)plStack_188 + 3) != 'e' ||
                     (*(char *)((long)plStack_188 + 4) != '_')))) ||
                   ((*(char *)((long)plStack_188 + 5) != 's' ||
                    ((*(char *)((long)plStack_188 + 6) != 'y' ||
                     (*(char *)((long)plStack_188 + 7) != 's')))))) || ((char)plStack_188[1] != 't')
                  ) || ((*(char *)((long)plStack_188 + 9) != 'e' ||
                        (*(char *)((long)plStack_188 + 10) != 'm')))) goto LAB_10142a000;
              iVar13 = 1;
            }
            else if ((((plStack_180 == (long *)0x7) && ((char)*plStack_188 == 'n')) &&
                     (*(char *)((long)plStack_188 + 1) == 'e')) &&
                    (((*(char *)((long)plStack_188 + 2) == 't' &&
                      (*(char *)((long)plStack_188 + 3) == 'w')) &&
                     ((*(char *)((long)plStack_188 + 4) == 'o' &&
                      ((*(char *)((long)plStack_188 + 5) == 'r' &&
                       (*(char *)((long)plStack_188 + 6) == 'k')))))))) {
              iVar13 = 0;
            }
            else {
LAB_10142a000:
              iVar13 = 2;
            }
            goto LAB_10142a048;
          }
          if (lStack_178 == 0xb) {
            if ((((((char)*plStack_180 != 'f') || (*(char *)((long)plStack_180 + 1) != 'i')) ||
                 (*(char *)((long)plStack_180 + 2) != 'l')) ||
                (((*(char *)((long)plStack_180 + 3) != 'e' ||
                  (*(char *)((long)plStack_180 + 4) != '_')) ||
                 (((*(char *)((long)plStack_180 + 5) != 's' ||
                   ((*(char *)((long)plStack_180 + 6) != 'y' ||
                    (*(char *)((long)plStack_180 + 7) != 's')))) || ((char)plStack_180[1] != 't'))))
                )) || ((*(char *)((long)plStack_180 + 9) != 'e' ||
                       (*(char *)((long)plStack_180 + 10) != 'm')))) goto LAB_101429f20;
            iVar13 = 1;
          }
          else if (((((lStack_178 == 7) && ((char)*plStack_180 == 'n')) &&
                    (*(char *)((long)plStack_180 + 1) == 'e')) &&
                   ((*(char *)((long)plStack_180 + 2) == 't' &&
                    (*(char *)((long)plStack_180 + 3) == 'w')))) &&
                  ((*(char *)((long)plStack_180 + 4) == 'o' &&
                   ((*(char *)((long)plStack_180 + 5) == 'r' &&
                    (*(char *)((long)plStack_180 + 6) == 'k')))))) {
            iVar13 = 0;
          }
          else {
LAB_101429f20:
            iVar13 = 2;
          }
joined_r0x000101429f6c:
          if (plStack_188 != (long *)0x0) {
            _free();
          }
        }
        cVar6 = (char)plStack_160;
        if (iVar13 == 0) {
          if (cVar17 == '\x04') {
            plStack_160 = (long *)CONCAT71(plStack_160._1_7_,0x16);
            if (cVar6 == '\x16') goto LAB_10142a528;
            uVar25 = *puVar15;
            puVar18[1] = puVar15[1];
            *puVar18 = uVar25;
            uVar25 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar25;
            cStack_90 = cVar6;
            if (cVar6 == '\x10') {
LAB_10142a124:
              cStack_c0 = '\0';
              cStack_bf = '\x03';
              FUN_100e077ec(&cStack_90);
              lVar11 = lStack_b8;
            }
            else if (cVar6 == '\x11') {
              puVar8 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
              plStack_188 = (long *)puVar8[1];
              uStack_190 = (long *)*puVar8;
              lStack_178 = puVar8[3];
              plStack_180 = (long *)puVar8[2];
              FUN_10140ec48(&cStack_c0,&uStack_190);
              _free(puVar8);
              lVar11 = lStack_b8;
            }
            else {
              if (cVar6 == '\x12') goto LAB_10142a124;
              FUN_10140ec48(&cStack_c0,&cStack_90);
              lVar11 = lStack_b8;
            }
            lStack_b8 = lVar11;
            cVar17 = cStack_bf;
            if (cStack_c0 != '\x01') goto LAB_101429c7c;
            lStack_120 = lVar21 + 1;
            lStack_d8 = lStack_1a8;
            pbStack_138 = pbVar22;
            plStack_e0 = plVar20;
          }
          else {
            lStack_120 = lVar21 + 1;
            lStack_d8 = lStack_1a8;
            cStack_90 = -0x30;
            uStack_8f = 0x108ca28;
            uStack_88 = 7;
            uStack_87 = 0;
            uStack_190 = (long *)&cStack_90;
            plStack_188 = (long *)&DAT_100c7b3a0;
            pbStack_138 = pbVar22;
            plStack_e0 = plVar20;
            lVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
          }
          goto LAB_10142a314;
        }
        if (iVar13 == 1) {
          if (plVar19 == (long *)0x8000000000000001) {
            plStack_160 = (long *)CONCAT71(plStack_160._1_7_,0x16);
            if (cVar6 == '\x16') {
              lStack_120 = lVar21 + 1;
              lStack_d8 = lStack_1a8;
              pbStack_138 = pbVar22;
              plStack_e0 = plVar20;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10142a638;
            }
            uVar25 = *puVar15;
            puVar18[1] = puVar15[1];
            *puVar18 = uVar25;
            uVar25 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar25;
            cStack_90 = cVar6;
            if (cVar6 == '\x10') {
LAB_10142a0bc:
              FUN_100e077ec(&cStack_90);
              plVar19 = (long *)0x8000000000000000;
            }
            else {
              if (cVar6 == '\x11') {
                puVar8 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
                plStack_188 = (long *)puVar8[1];
                uStack_190 = (long *)*puVar8;
                lStack_178 = puVar8[3];
                plStack_180 = (long *)puVar8[2];
                FUN_10145ac5c(&cStack_c0,&uStack_190);
                _free(puVar8);
                plVar19 = (long *)CONCAT62(uStack_be,CONCAT11(cStack_bf,cStack_c0));
                lVar11 = lStack_b8;
              }
              else {
                if (cVar6 == '\x12') goto LAB_10142a0bc;
                cStack_90 = cVar6;
                FUN_10145ac5c(&cStack_c0,&cStack_90);
                plVar19 = (long *)CONCAT62(uStack_be,CONCAT11(cStack_bf,cStack_c0));
                lVar11 = lStack_b8;
              }
              lStack_b8 = lVar11;
              if (plVar19 == (long *)0x8000000000000001) {
                lStack_120 = lVar21 + 1;
                uStack_190 = (long *)0x8000000000000001;
                plStack_188 = (long *)lVar11;
                pbStack_138 = pbVar22;
                goto LAB_10142a3f4;
              }
            }
            lStack_c8 = lStack_a8;
            plStack_d0 = plStack_b0;
            plVar20 = plVar19;
            lStack_1a8 = lStack_b8;
            goto LAB_101429c7c;
          }
          lStack_120 = lVar21 + 1;
          lStack_d8 = lStack_1a8;
          cStack_90 = '+';
          uStack_8f = 0x108cadf;
          uStack_88 = 0xb;
          uStack_87 = 0;
          uStack_190 = (long *)&cStack_90;
          plStack_188 = (long *)&DAT_100c7b3a0;
          pbStack_138 = pbVar22;
          plStack_e0 = plVar20;
          lVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
          uStack_190 = (long *)0x8000000000000001;
          plStack_188 = (long *)lVar11;
          if (plVar19 != (long *)0x8000000000000000) goto LAB_10142a334;
          goto LAB_10142a3f4;
        }
        plStack_160 = (long *)CONCAT71(plStack_160._1_7_,0x16);
        if (cVar6 == '\x16') {
LAB_10142a528:
          plStack_160 = (long *)CONCAT71(plStack_160._1_7_,0x16);
          lStack_120 = lVar21 + 1;
          lStack_d8 = lStack_1a8;
          pbStack_138 = pbVar22;
          plStack_e0 = plVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10142a638:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10142a63c);
          (*pcVar10)();
        }
        uVar25 = *puVar15;
        puVar16[1] = puVar15[1];
        *puVar16 = uVar25;
        uVar25 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar25;
        uStack_190 = (long *)CONCAT71(uStack_190._1_7_,cVar6);
        FUN_100e077ec(&uStack_190);
LAB_101429c7c:
        lVar21 = lVar21 + 1;
        lVar11 = (lVar12 - 0x40U >> 6) + 1;
        pbVar23 = pbVar1;
        pbVar7 = pbVar22;
      } while (pbVar22 != pbVar1);
      cStack_170 = '\x03';
      if (cVar17 != '\x04') {
        cStack_170 = cVar17;
      }
      pbStack_138 = pbVar23;
      lStack_120 = lVar11;
      if (plVar19 == (long *)0x8000000000000001) {
        plVar19 = (long *)0x8000000000000000;
      }
      else {
        lStack_98 = lStack_c8;
        plStack_a0 = plStack_d0;
      }
    }
    lVar12 = lStack_120;
    pbVar7 = pbStack_138;
    lStack_178 = lStack_98;
    plStack_180 = plStack_a0;
    plStack_f8 = (long *)lStack_98;
    plStack_100 = plStack_a0;
    uStack_f0 = CONCAT71(uStack_16f,cStack_170);
    uStack_190 = plVar19;
    plStack_188 = (long *)lStack_1a8;
    plStack_110 = plVar19;
    FUN_100d34830(&pbStack_140);
    if (pbVar1 != pbVar7) {
      cStack_90 = (char)lVar12;
      uStack_8f = (undefined7)((ulong)lVar12 >> 8);
      lStack_1a8 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar7) >> 6) + lVar12,&cStack_90,
                                 &UNK_10b23a190);
      plVar19 = (long *)0x8000000000000001;
      uStack_190 = (long *)0x8000000000000001;
      plStack_188 = (long *)lStack_1a8;
      if (plStack_110 != (long *)0x8000000000000000) {
        FUN_100e79780(&plStack_110);
      }
    }
  }
LAB_101429bf8:
  if (plVar19 != (long *)0x8000000000000001) {
    param_1[1] = plStack_188;
    *param_1 = uStack_190;
    param_1[3] = lStack_178;
    param_1[2] = plStack_180;
    param_1[4] = CONCAT71(uStack_16f,cStack_170);
    return;
  }
LAB_101429c04:
  *param_1 = 0x8000000000000002;
  param_1[1] = lStack_1a8;
  return;
}

