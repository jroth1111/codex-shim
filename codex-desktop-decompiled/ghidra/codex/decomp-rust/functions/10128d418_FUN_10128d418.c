
/* WARNING: Type propagation algorithm not settling */

void FUN_10128d418(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  code *pcVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  ulong unaff_x21;
  char *pcVar11;
  undefined8 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  char cVar17;
  byte *pbVar18;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  ulong uStack_f0;
  char *pcStack_e8;
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
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char *pcStack_78;
  byte *pbVar19;
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      uVar16 = FUN_108855b04(param_2,&cStack_90,&UNK_10b20c760);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar16;
      return;
    }
    uStack_d0 = *(undefined8 *)(param_2 + 8);
    pbStack_e0 = *(byte **)(param_2 + 0x10);
    pbStack_c8 = pbStack_e0 + *(long *)(param_2 + 0x18) * 0x40;
    pcStack_100 = (char *)CONCAT71(pcStack_100._1_7_,0x16);
    lStack_c0 = 0;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar16 = 0x8000000000000001;
      pbStack_d8 = pbStack_e0;
    }
    else {
      puVar21 = (undefined8 *)((ulong)&uStack_b0 | 1);
      puVar20 = (undefined8 *)((ulong)&pcStack_100 | 1);
      puVar12 = (undefined8 *)((ulong)&cStack_90 | 1);
      cVar17 = '\x02';
      uVar16 = 0x8000000000000001;
      pbVar14 = pbStack_c8;
      pbVar19 = pbStack_e0;
      do {
        pbVar10 = pbVar14;
        pbVar18 = pbVar19 + 0x40;
        bVar1 = *pbVar19;
        pbStack_d8 = pbVar18;
        if (bVar1 == 0x16) break;
        lStack_c0 = lStack_c0 + 1;
        uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,bVar1);
        uVar22 = *(undefined8 *)(pbVar19 + 1);
        uVar24 = *(undefined8 *)(pbVar19 + 0x18);
        uVar23 = *(undefined8 *)(pbVar19 + 0x10);
        uVar26 = *(undefined8 *)(pbVar19 + 0x28);
        uVar25 = *(undefined8 *)(pbVar19 + 0x20);
        puVar21[1] = *(undefined8 *)(pbVar19 + 9);
        *puVar21 = uVar22;
        *(undefined8 *)((long)puVar21 + 0x17) = uVar24;
        *(undefined8 *)((long)puVar21 + 0xf) = uVar23;
        pcStack_78 = *(char **)(pbVar19 + 0x38);
        uStack_88 = (undefined1)uVar26;
        uStack_87 = (undefined7)((ulong)uVar26 >> 8);
        cStack_90 = (char)uVar25;
        uStack_8f = (undefined7)((ulong)uVar25 >> 8);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar19 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x30) >> 8);
        if ((char)pcStack_100 != '\x16') {
          FUN_100e077ec(&pcStack_100);
        }
        pcStack_f8 = (char *)CONCAT71(uStack_87,uStack_88);
        pcStack_100 = (char *)CONCAT71(uStack_8f,cStack_90);
        uStack_f0 = CONCAT71(uStack_7f,uStack_80);
        pcStack_e8 = pcStack_78;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            iVar9 = 1;
            if (uStack_b0._1_1_ != '\x01') {
              iVar9 = 2;
            }
            iVar8 = 0;
            if (uStack_b0._1_1_ != '\0') {
              iVar8 = iVar9;
            }
          }
          else {
            if (bVar1 != 4) {
              if (bVar1 == 0xc) {
                if (lStack_98 == 3) {
                  iVar8 = 1;
                  if ((short)*piStack_a0 != 0x7763 || *(char *)((long)piStack_a0 + 2) != 'd') {
                    iVar8 = 2;
                  }
                }
                else if (lStack_98 == 4) {
                  iVar8 = 2;
                  if (*piStack_a0 == 0x65646f6d) {
                    iVar8 = 0;
                  }
                }
                else {
                  iVar8 = 2;
                }
                goto joined_r0x00010128d6d0;
              }
LAB_10128db90:
              uVar7 = FUN_108855b04(&uStack_b0,&cStack_90,&UNK_10b20e980);
              goto LAB_10128d93c;
            }
            iVar9 = 1;
            if (piStack_a8 != (int *)0x1) {
              iVar9 = 2;
            }
            iVar8 = 0;
            if (piStack_a8 != (int *)0x0) {
              iVar8 = iVar9;
            }
          }
LAB_10128d734:
          FUN_100e077ec(&uStack_b0);
        }
        else {
          if (bVar1 == 0xd) {
            if (piStack_a0 == (int *)0x3) {
              iVar8 = 1;
              if ((short)*piStack_a8 != 0x7763 || *(char *)((long)piStack_a8 + 2) != 'd') {
                iVar8 = 2;
              }
            }
            else {
              if (piStack_a0 != (int *)0x4) goto LAB_10128d704;
              iVar8 = 2;
              if (*piStack_a8 == 0x65646f6d) {
                iVar8 = 0;
              }
            }
            goto LAB_10128d734;
          }
          if (bVar1 != 0xe) {
            if (bVar1 != 0xf) goto LAB_10128db90;
            if (piStack_a0 == (int *)0x3) {
              if ((((char)*piStack_a8 != 'c') || (*(char *)((long)piStack_a8 + 1) != 'w')) ||
                 (*(char *)((long)piStack_a8 + 2) != 'd')) goto LAB_10128d704;
              iVar8 = 1;
            }
            else if (((piStack_a0 == (int *)0x4) && ((char)*piStack_a8 == 'm')) &&
                    ((*(char *)((long)piStack_a8 + 1) == 'o' &&
                     ((*(char *)((long)piStack_a8 + 2) == 'd' &&
                      (*(char *)((long)piStack_a8 + 3) == 'e')))))) {
              iVar8 = 0;
            }
            else {
LAB_10128d704:
              iVar8 = 2;
            }
            goto LAB_10128d734;
          }
          if (lStack_98 == 3) {
            if ((((char)*piStack_a0 != 'c') || (*(char *)((long)piStack_a0 + 1) != 'w')) ||
               (*(char *)((long)piStack_a0 + 2) != 'd')) goto LAB_10128d69c;
            iVar8 = 1;
          }
          else if (((lStack_98 == 4) && ((char)*piStack_a0 == 'm')) &&
                  ((*(char *)((long)piStack_a0 + 1) == 'o' &&
                   ((*(char *)((long)piStack_a0 + 2) == 'd' &&
                    (*(char *)((long)piStack_a0 + 3) == 'e')))))) {
            iVar8 = 0;
          }
          else {
LAB_10128d69c:
            iVar8 = 2;
          }
joined_r0x00010128d6d0:
          if (piStack_a8 != (int *)0x0) {
            _free();
          }
        }
        cVar3 = (char)pcStack_100;
        pbVar14 = pbVar10;
        pbVar10 = pbVar18;
        if (iVar8 == 0) {
          if (cVar17 != '\x02') {
            uStack_b0 = &UNK_108c60ff4;
            piStack_a8 = (int *)0x4;
            cStack_90 = (char)&uStack_b0;
            uStack_8f = (undefined7)((ulong)&uStack_b0 >> 8);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
            goto LAB_10128d93c;
          }
          pcStack_100 = (char *)CONCAT71(pcStack_100._1_7_,0x16);
          if (cVar3 == '\x16') goto LAB_10128dae0;
          uVar22 = *puVar20;
          puVar12[1] = puVar20[1];
          *puVar12 = uVar22;
          uVar22 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar22;
          cStack_90 = cVar3;
          func_0x000101304478(&uStack_b0,&cStack_90);
          if ((char)uStack_b0 == '\x01') {
            *param_1 = 0x8000000000000001;
            param_1[1] = (ulong)piStack_a8;
            goto joined_r0x00010128da8c;
          }
          cVar17 = uStack_b0._1_1_;
        }
        else if (iVar8 == 1) {
          if (uVar16 != 0x8000000000000001) {
            uStack_b0 = &UNK_108ca1f1d;
            piStack_a8 = (int *)0x3;
            cStack_90 = (char)&uStack_b0;
            uStack_8f = (undefined7)((ulong)&uStack_b0 >> 8);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar7;
            uVar16 = uVar16 & 0x7fffffffffffffff;
            goto joined_r0x00010128db48;
          }
          func_0x000100f21808(&cStack_90,&pcStack_100);
          uVar16 = CONCAT71(uStack_8f,cStack_90);
          unaff_x21 = CONCAT71(uStack_87,uStack_88);
          if (uVar16 == 0x8000000000000001) {
            *param_1 = 0x8000000000000001;
            param_1[1] = unaff_x21;
            goto LAB_10128da90;
          }
          uStack_108 = CONCAT71(uStack_7f,uStack_80);
          pbVar14 = pbStack_c8;
          pbVar10 = pbStack_d8;
        }
        else {
          pcStack_100 = (char *)CONCAT71(pcStack_100._1_7_,0x16);
          if (cVar3 == '\x16') {
LAB_10128dae0:
            pcStack_100 = (char *)CONCAT71(pcStack_100._1_7_,0x16);
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10128db00);
            (*pcVar5)();
          }
          uVar22 = *puVar20;
          puVar12[1] = puVar20[1];
          *puVar12 = uVar22;
          uVar22 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar22;
          cStack_90 = cVar3;
          FUN_100e077ec(&cStack_90);
        }
        pbVar19 = pbVar10;
        pbVar18 = pbVar10;
      } while (pbVar10 != pbVar14);
      if (cVar17 != '\x02') {
        uVar7 = 0x8000000000000000;
        if (uVar16 != 0x8000000000000001) {
          uVar7 = uVar16;
        }
        *param_1 = uVar7;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_108;
        *(char *)(param_1 + 3) = cVar17;
        FUN_100d34830(&pbStack_e0);
        if (pbVar10 == pbVar18) {
          uVar16 = 0;
        }
        else {
          cStack_90 = (char)lStack_c0;
          uStack_8f = (undefined7)((ulong)lStack_c0 >> 8);
          uVar16 = FUN_1087e422c(lStack_c0 + ((ulong)((long)pbVar10 - (long)pbVar18) >> 6),
                                 &cStack_90,&UNK_10b23a190);
        }
        if ((char)pcStack_100 != '\x16') {
          FUN_100e077ec(&pcStack_100);
        }
        if (uVar16 != 0) {
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar16;
          if ((uVar7 & 0x7fffffffffffffff) != 0) {
            _free(unaff_x21);
          }
        }
        goto LAB_10128daac;
      }
    }
    uStack_b0 = &UNK_108c60ff4;
    piStack_a8 = (int *)0x4;
    cStack_90 = (char)&uStack_b0;
    uStack_8f = (undefined7)((ulong)&uStack_b0 >> 8);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar7 = FUN_108856088(s_missing_field_____108ac28f7,&cStack_90);
LAB_10128d93c:
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar7;
joined_r0x00010128da8c:
    if (-0x7fffffffffffffff < (long)uVar16) {
joined_r0x00010128db48:
      if (uVar16 != 0) {
        _free(unaff_x21);
      }
    }
LAB_10128da90:
    FUN_100d34830(&pbStack_e0);
    if ((char)pcStack_100 != '\x16') {
      FUN_100e077ec(&pcStack_100);
    }
    goto LAB_10128daac;
  }
  uStack_f0 = *(ulong *)(param_2 + 8);
  pcStack_100 = *(char **)(param_2 + 0x10);
  pcVar13 = pcStack_100 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_e0 = (byte *)0x0;
  pcVar11 = pcStack_100;
  pcStack_e8 = pcVar13;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_10128d88c:
    pcStack_f8 = pcVar11;
    piVar6 = (int *)FUN_1087e422c(0,&UNK_10b233238,&UNK_10b20a590);
LAB_10128d8a4:
    param_1[1] = (ulong)piVar6;
LAB_10128d8a8:
    *param_1 = 0x8000000000000001;
    lVar15 = ((ulong)((long)pcVar13 - (long)pcVar11) >> 5) + 1;
    while (lVar15 = lVar15 + -1, pcVar13 = pcStack_100, uVar16 = uStack_f0, lVar15 != 0) {
      FUN_100e077ec(pcVar11);
      pcVar11 = pcVar11 + 0x20;
    }
  }
  else {
    pcVar11 = pcStack_100 + 0x20;
    if (*pcStack_100 == '\x16') goto LAB_10128d88c;
    uStack_87 = (undefined7)*(undefined8 *)(pcStack_100 + 9);
    uStack_8f = (undefined7)*(undefined8 *)(pcStack_100 + 1);
    uStack_88 = (undefined1)((ulong)*(undefined8 *)(pcStack_100 + 1) >> 0x38);
    pcStack_78 = *(char **)(pcStack_100 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pcStack_100 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pcStack_100 + 0x10) >> 8);
    pbStack_e0 = (byte *)0x1;
    pcStack_f8 = pcVar11;
    cStack_90 = *pcStack_100;
    func_0x000101304478(&uStack_b0,&cStack_90);
    piVar6 = piStack_a8;
    if ((char)uStack_b0 == '\x01') goto LAB_10128d8a4;
    uVar4 = uStack_b0._1_1_;
    FUN_100f25bc4(&cStack_90,&pcStack_100);
    uVar16 = CONCAT71(uStack_8f,cStack_90);
    pcVar13 = (char *)CONCAT71(uStack_87,uStack_88);
    if (uVar16 == 0x8000000000000002) {
      param_1[1] = (ulong)pcVar13;
      pcVar11 = pcStack_f8;
      pcVar13 = pcStack_e8;
      goto LAB_10128d8a8;
    }
    if (uVar16 == 0x8000000000000001) {
      uVar16 = FUN_1087e422c(1,&UNK_10b233238,&UNK_10b20a590);
      param_1[1] = uVar16;
      pcVar11 = pcStack_f8;
      pcVar13 = pcStack_e8;
      goto LAB_10128d8a8;
    }
    *param_1 = uVar16;
    param_1[1] = (ulong)pcVar13;
    param_1[2] = CONCAT71(uStack_7f,uStack_80);
    *(undefined1 *)(param_1 + 3) = uVar4;
    uVar7 = FUN_100fbc738(&pcStack_100);
    if (uVar7 == 0) goto LAB_10128daac;
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar7;
    uVar16 = uVar16 & 0x7fffffffffffffff;
  }
  if (uVar16 != 0) {
    _free(pcVar13);
  }
LAB_10128daac:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

