
/* WARNING: Type propagation algorithm not settling */

void FUN_1017c3330(undefined8 *param_1,undefined8 *******param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  byte bVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 ******ppppppuVar10;
  undefined8 uVar11;
  undefined8 ******ppppppuVar12;
  int *unaff_x21;
  undefined8 *******unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  long unaff_x27;
  long lVar16;
  long unaff_x28;
  long lVar17;
  int *piStack_c8;
  undefined8 uStack_c0;
  int *piStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a8;
  int *piStack_a0;
  undefined8 *******pppppppuStack_90;
  undefined1 uStack_88;
  undefined8 *******pppppppuStack_80;
  int *piStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  ppppppuVar2 = param_2[4];
  ppppppuVar10 = param_2[5];
  if (ppppppuVar10 < ppppppuVar2) {
    ppppppuVar12 = param_2[3];
    do {
      bVar4 = *(byte *)((long)ppppppuVar12 + (long)ppppppuVar10);
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
        if (bVar4 != 0x6e) goto LAB_1017c341c;
        ppppppuVar1 = (undefined8 ******)((long)ppppppuVar10 + 1);
        param_2[5] = ppppppuVar1;
        bVar6 = ppppppuVar1 < ppppppuVar2;
        if (ppppppuVar2 < ppppppuVar1) {
          ppppppuVar2 = (undefined8 ******)((long)ppppppuVar10 + 1);
        }
        if (bVar6) {
          cVar3 = *(char *)((long)ppppppuVar12 + (long)ppppppuVar10 + 1);
          param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 2U);
          if (cVar3 == 'u') {
            if ((undefined8 ******)((long)ppppppuVar10 + 2U) == ppppppuVar2) goto LAB_1017c3810;
            cVar3 = *(char *)((long)ppppppuVar12 + (long)ppppppuVar10 + 2);
            param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 3U);
            if (cVar3 == 'l') {
              if ((undefined8 ******)((long)ppppppuVar10 + 3U) == ppppppuVar2) goto LAB_1017c3810;
              cVar3 = *(char *)((long)ppppppuVar12 + (long)ppppppuVar10 + 3);
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 4);
              if (cVar3 == 'l') {
                uVar11 = 0x8000000000000001;
                goto LAB_1017c38d8;
              }
            }
          }
          uStack_c0 = (undefined8 *******)0x9;
        }
        else {
LAB_1017c3810:
          uStack_c0 = (undefined8 *******)0x5;
        }
        uVar7 = FUN_10887f4a4(param_2,&uStack_c0);
        goto LAB_1017c38cc;
      }
      ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
      param_2[5] = ppppppuVar10;
    } while (ppppppuVar2 != ppppppuVar10);
  }
  else {
LAB_1017c341c:
    if (ppppppuVar10 < ppppppuVar2) {
      do {
        bVar4 = *(byte *)((long)param_2[3] + (long)ppppppuVar10);
        if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
          if (bVar4 == 0x5b) {
            cVar3 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
              piStack_78 = (int *)CONCAT71(piStack_78._1_7_,1);
              pppppppuStack_80 = param_2;
              FUN_1017b8fd0(&uStack_c0,&pppppppuStack_80);
              lVar16 = unaff_x27;
              lVar17 = unaff_x28;
              if ((char)uStack_c0 == '\x01') {
                pppppppuVar13 = (undefined8 *******)0x8000000000000001;
                piVar9 = piStack_b8;
              }
              else if (uStack_c0._1_1_ == '\x01') {
                FUN_1017c0610(&uStack_c0,pppppppuStack_80);
                lVar16 = lStack_b0;
                piVar9 = piStack_b8;
                pppppppuVar13 = uStack_c0;
                if (uStack_c0 == (undefined8 *******)0x8000000000000001) {
                  pppppppuVar13 = (undefined8 *******)0x8000000000000001;
                  lVar16 = unaff_x27;
                }
                else {
                  FUN_1017b8fd0(&uStack_c0,&pppppppuStack_80);
                  unaff_x21 = piStack_b8;
                  if ((char)uStack_c0 != '\x01') {
                    if (uStack_c0._1_1_ == '\x01') {
                      FUN_1017c0610(&uStack_c0,pppppppuStack_80);
                      unaff_x21 = piStack_b8;
                      unaff_x22 = uStack_c0;
                      lVar17 = lStack_b0;
                      if (uStack_c0 != (undefined8 *******)0x8000000000000001) goto LAB_1017c385c;
                    }
                    else {
                      unaff_x21 = (int *)FUN_108878f3c(1,&UNK_10b259bc0,&UNK_10b258940);
                    }
                  }
                  if (((ulong)pppppppuVar13 & 0x7fffffffffffffff) != 0) {
                    _free(piVar9);
                  }
                  pppppppuVar13 = (undefined8 *******)0x8000000000000001;
                  piVar9 = unaff_x21;
                  lVar17 = unaff_x28;
                }
              }
              else {
                piVar9 = (int *)FUN_108878f3c(0,&UNK_10b259bc0,&UNK_10b258940);
                pppppppuVar13 = (undefined8 *******)0x8000000000000001;
              }
LAB_1017c385c:
              *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
              uStack_c0 = pppppppuVar13;
              piStack_b8 = piVar9;
              pppppppuStack_a8 = unaff_x22;
              piStack_a0 = unaff_x21;
              piVar8 = (int *)FUN_10177b5dc(param_2);
              piVar5 = piVar9;
              if (pppppppuVar13 != (undefined8 *******)0x8000000000000001)
              goto joined_r0x0001017c3888;
              if (piVar8 == (int *)0x0) goto LAB_1017c38c4;
              FUN_1017a4f34();
              goto LAB_1017c38b8;
            }
          }
          else {
            if (bVar4 != 0x7b) {
              piVar9 = (int *)FUN_10887eaf8(param_2,&uStack_61,&UNK_10b25ae38);
              goto LAB_1017c38c4;
            }
            cVar3 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              unaff_x22 = (undefined8 *******)0x65646f63;
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
              uStack_88 = 1;
              pppppppuVar14 = (undefined8 *******)0x8000000000000001;
              pppppppuVar15 = (undefined8 *******)0x8000000000000001;
              piVar5 = piStack_c8;
              pppppppuStack_90 = param_2;
              goto LAB_1017c34bc;
            }
          }
          uStack_c0 = (undefined8 *******)0x18;
          goto LAB_1017c3460;
        }
        ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
        param_2[5] = ppppppuVar10;
      } while (ppppppuVar2 != ppppppuVar10);
    }
  }
  uStack_c0 = (undefined8 *******)0x5;
LAB_1017c3460:
  uVar7 = FUN_10887ea38(param_2,&uStack_c0);
  goto LAB_1017c38cc;
LAB_1017c34bc:
  piStack_c8 = piVar5;
  lVar17 = unaff_x28;
  lVar16 = unaff_x27;
  FUN_1017b89cc(&uStack_c0,&pppppppuStack_90);
  pppppppuVar13 = pppppppuStack_90;
  piVar9 = piStack_b8;
  if ((char)uStack_c0 == '\x01') goto LAB_1017c36fc;
  if (uStack_c0._1_1_ != '\x01') {
    pppppppuVar13 = (undefined8 *******)0x8000000000000000;
    if (pppppppuVar14 != (undefined8 *******)0x8000000000000001) {
      pppppppuVar13 = pppppppuVar14;
    }
    unaff_x22 = (undefined8 *******)0x8000000000000000;
    piVar9 = piStack_c8;
    if (pppppppuVar15 != (undefined8 *******)0x8000000000000001) {
      unaff_x22 = pppppppuVar15;
    }
    goto LAB_1017c3758;
  }
  pppppppuStack_90[5] = (undefined8 ******)((long)pppppppuStack_90[5] + 1);
  pppppppuStack_90[2] = (undefined8 ******)0x0;
  __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
            (&uStack_c0,pppppppuStack_90 + 3,pppppppuStack_90);
  piVar9 = piStack_b8;
  if (uStack_c0 != (undefined8 *******)0x2) {
    unaff_x27 = lVar16;
    unaff_x28 = lVar17;
    piVar5 = piStack_c8;
    if (lStack_b0 == 7) {
      if (*piStack_b8 != 0x7373656d || *(int *)((long)piStack_b8 + 3) != 0x65676173)
      goto LAB_1017c35a8;
      if (pppppppuVar15 != (undefined8 *******)0x8000000000000001) {
        pppppppuStack_80 = (undefined8 *******)&UNK_108ce35f6;
        piStack_78 = (int *)0x7;
        uStack_c0 = &pppppppuStack_80;
        piStack_b8 = (int *)&DAT_10179e9f8;
        piVar9 = (int *)FUN_108880790(s_duplicate_field_____108ac2973,&uStack_c0);
        pppppppuVar15 = (undefined8 *******)((ulong)pppppppuVar15 & 0x7fffffffffffffff);
        goto joined_r0x0001017c3a0c;
      }
      ppppppuVar10 = pppppppuVar13[5];
      if (pppppppuVar13[4] <= ppppppuVar10) {
LAB_1017c3944:
        uStack_c0 = (undefined8 *******)0x3;
        piVar9 = (int *)FUN_10887ea38(pppppppuVar13,&uStack_c0);
        goto LAB_1017c3718;
      }
      while( true ) {
        bVar4 = *(byte *)((long)pppppppuVar13[3] + (long)ppppppuVar10);
        if (0x3a < bVar4) goto LAB_1017c3a30;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
        pppppppuVar13[5] = ppppppuVar10;
        if (pppppppuVar13[4] == ppppppuVar10) goto LAB_1017c3944;
      }
      if ((ulong)bVar4 != 0x3a) {
LAB_1017c3a30:
        uStack_c0 = (undefined8 *******)0x6;
        piVar9 = (int *)FUN_10887ea38(pppppppuVar13,&uStack_c0);
        goto LAB_1017c3718;
      }
      pppppppuVar13[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
      FUN_1017c0610(&pppppppuStack_80,pppppppuVar13);
      unaff_x21 = piStack_78;
      piVar9 = piStack_78;
      pppppppuVar15 = pppppppuStack_80;
      unaff_x28 = lStack_70;
      if (pppppppuStack_80 == (undefined8 *******)0x8000000000000001) goto LAB_1017c3718;
      goto LAB_1017c34bc;
    }
    if ((lStack_b0 == 4) && (*piStack_b8 == 0x65646f63)) {
      if (pppppppuVar14 == (undefined8 *******)0x8000000000000001) {
        ppppppuVar10 = pppppppuVar13[5];
        if (ppppppuVar10 < pppppppuVar13[4]) {
          while( true ) {
            bVar4 = *(byte *)((long)pppppppuVar13[3] + (long)ppppppuVar10);
            if (0x3a < bVar4) goto LAB_1017c3a14;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
            pppppppuVar13[5] = ppppppuVar10;
            if (pppppppuVar13[4] == ppppppuVar10) goto LAB_1017c3920;
          }
          if ((ulong)bVar4 == 0x3a) {
            pppppppuVar13[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
            FUN_1017c0610(&pppppppuStack_80,pppppppuVar13);
            pppppppuVar14 = pppppppuStack_80;
            unaff_x27 = lStack_70;
            piVar5 = piStack_78;
            if (pppppppuStack_80 == (undefined8 *******)0x8000000000000001) {
              pppppppuVar14 = (undefined8 *******)0x8000000000000001;
              piVar9 = piStack_78;
              goto LAB_1017c36fc;
            }
            goto LAB_1017c34bc;
          }
LAB_1017c3a14:
          uStack_c0 = (undefined8 *******)0x6;
          piVar9 = (int *)FUN_10887ea38(pppppppuVar13,&uStack_c0);
        }
        else {
LAB_1017c3920:
          uStack_c0 = (undefined8 *******)0x3;
          piVar9 = (int *)FUN_10887ea38(pppppppuVar13,&uStack_c0);
        }
        pppppppuVar14 = (undefined8 *******)0x8000000000000001;
        goto LAB_1017c36fc;
      }
      pppppppuStack_80 = (undefined8 *******)&UNK_108c520a8;
      piStack_78 = (int *)0x4;
      uStack_c0 = &pppppppuStack_80;
      piStack_b8 = (int *)&DAT_10179e9f8;
      piVar9 = (int *)FUN_108880790(s_duplicate_field_____108ac2973,&uStack_c0);
    }
    else {
LAB_1017c35a8:
      piVar9 = (int *)FUN_101779248(pppppppuVar13);
      if (piVar9 == (int *)0x0) goto LAB_1017c34bc;
    }
  }
LAB_1017c36fc:
  if (-0x7fffffffffffffff < (long)pppppppuVar15) {
joined_r0x0001017c3a0c:
    if (pppppppuVar15 != (undefined8 *******)0x0) {
      _free(unaff_x21);
    }
  }
LAB_1017c3718:
  pppppppuVar13 = (undefined8 *******)0x8000000000000001;
  if ((-0x7fffffffffffffff < (long)pppppppuVar14) && (pppppppuVar14 != (undefined8 *******)0x0)) {
    _free(piStack_c8);
  }
LAB_1017c3758:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  uStack_c0 = pppppppuVar13;
  piStack_b8 = piVar9;
  pppppppuStack_a8 = unaff_x22;
  piStack_a0 = unaff_x21;
  piVar8 = (int *)FUN_10177b538(param_2);
  piVar5 = piVar9;
  if (pppppppuVar13 == (undefined8 *******)0x8000000000000001) {
    if (piVar8 != (int *)0x0) {
      FUN_1017a4f34();
LAB_1017c38b8:
      _free(piVar8);
    }
  }
  else {
joined_r0x0001017c3888:
    piVar9 = piVar8;
    if (piVar9 == (int *)0x0) {
      *param_1 = pppppppuVar13;
      param_1[1] = piVar5;
      param_1[2] = lVar16;
      param_1[3] = unaff_x22;
      param_1[4] = unaff_x21;
      param_1[5] = lVar17;
      return;
    }
    if (((ulong)pppppppuVar13 & 0x7fffffffffffffff) != 0) {
      _free(piVar5);
    }
    if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x21);
    }
  }
LAB_1017c38c4:
  uVar7 = FUN_10887f554(piVar9,param_2);
LAB_1017c38cc:
  uVar11 = 0x8000000000000002;
  param_1[1] = uVar7;
LAB_1017c38d8:
  *param_1 = uVar11;
  return;
}

