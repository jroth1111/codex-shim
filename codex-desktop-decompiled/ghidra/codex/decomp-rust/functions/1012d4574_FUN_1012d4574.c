
/* WARNING: Type propagation algorithm not settling */

void FUN_1012d4574(undefined8 *param_1,undefined8 *******param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 ******ppppppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  long *unaff_x21;
  long *plVar14;
  long *plVar15;
  undefined8 *******pppppppuVar16;
  long unaff_x25;
  long lVar17;
  undefined8 *******pppppppuStack_c0;
  undefined1 uStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  ppppppuVar2 = param_2[4];
  ppppppuVar10 = param_2[5];
  if (ppppppuVar10 < ppppppuVar2) {
    ppppppuVar13 = param_2[3];
    do {
      bVar4 = *(byte *)((long)ppppppuVar13 + (long)ppppppuVar10);
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
        if (bVar4 != 0x6e) goto LAB_1012d4660;
        ppppppuVar1 = (undefined8 ******)((long)ppppppuVar10 + 1);
        param_2[5] = ppppppuVar1;
        bVar7 = ppppppuVar1 < ppppppuVar2;
        if (ppppppuVar2 < ppppppuVar1) {
          ppppppuVar2 = (undefined8 ******)((long)ppppppuVar10 + 1);
        }
        if (bVar7) {
          cVar3 = *(char *)((long)ppppppuVar13 + (long)ppppppuVar10 + 1);
          param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 2U);
          if (cVar3 == 'u') {
            if ((undefined8 ******)((long)ppppppuVar10 + 2U) == ppppppuVar2) goto LAB_1012d49f4;
            cVar3 = *(char *)((long)ppppppuVar13 + (long)ppppppuVar10 + 2);
            param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 3U);
            if (cVar3 == 'l') {
              if ((undefined8 ******)((long)ppppppuVar10 + 3U) == ppppppuVar2) goto LAB_1012d49f4;
              cVar3 = *(char *)((long)ppppppuVar13 + (long)ppppppuVar10 + 3);
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 4);
              if (cVar3 == 'l') {
                uVar12 = 0x8000000000000000;
                goto LAB_1012d4c14;
              }
            }
          }
          uStack_80 = (undefined8 *******)0x9;
        }
        else {
LAB_1012d49f4:
          uStack_80 = (undefined8 *******)0x5;
        }
        uVar8 = FUN_108832904(param_2,&uStack_80);
        goto LAB_1012d4c0c;
      }
      ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
      param_2[5] = ppppppuVar10;
    } while (ppppppuVar2 != ppppppuVar10);
  }
  else {
LAB_1012d4660:
    if (ppppppuVar10 < ppppppuVar2) {
      do {
        bVar4 = *(byte *)((long)param_2[3] + (long)ppppppuVar10);
        if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
          if (bVar4 == 0x5b) {
            cVar3 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
              plStack_90 = (long *)CONCAT71(plStack_90._1_7_,1);
              pppppppuStack_98 = param_2;
              FUN_1011de2a4(&uStack_80,&pppppppuStack_98);
              if ((char)uStack_80 == '\x01') {
LAB_1012d4900:
                unaff_x21 = plStack_78;
                pppppppuVar16 = (undefined8 *******)0x8000000000000000;
                lVar11 = unaff_x25;
              }
              else {
                if (uStack_80._1_1_ != '\x01') {
                  plStack_78 = (long *)FUN_1087e422c(0,&UNK_10b22c9e8,&UNK_10b20a590);
                  goto LAB_1012d4900;
                }
                func_0x000101366828(&uStack_80,pppppppuStack_98);
                unaff_x21 = plStack_78;
                pppppppuVar16 = uStack_80;
                lVar11 = lStack_70;
                if (uStack_80 == (undefined8 *******)0x8000000000000000) goto LAB_1012d4900;
              }
              *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
              uStack_80 = pppppppuVar16;
              plStack_78 = unaff_x21;
              lStack_70 = lVar11;
              plVar9 = (long *)FUN_100654840(param_2);
              if (pppppppuVar16 != (undefined8 *******)0x8000000000000000) {
                if (plVar9 == (long *)0x0) goto LAB_1012d4b78;
                plVar14 = unaff_x21;
                if (lVar11 != 0) {
                  plVar15 = unaff_x21 + 1;
                  do {
                    if ((plVar15[-1] & 0x7fffffffffffffffU) != 0) {
                      _free(*plVar15);
                    }
                    plVar15 = plVar15 + 3;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                goto joined_r0x0001012d4940;
              }
              if (plVar9 == (long *)0x0) goto LAB_1012d4c00;
              lVar11 = *plVar9;
              if (lVar11 != 1) goto LAB_1012d4b94;
              FUN_100de21d4(plVar9 + 1);
              goto LAB_1012d4bf8;
            }
          }
          else {
            if (bVar4 != 0x7b) {
              unaff_x21 = (long *)FUN_108831eec(param_2,&uStack_61,&UNK_10b24f258);
              goto LAB_1012d4c00;
            }
            cVar3 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
              uStack_b8 = 1;
              pppppppuVar16 = (undefined8 *******)0x8000000000000000;
              pppppppuStack_c0 = param_2;
              goto LAB_1012d4704;
            }
          }
          uStack_80 = (undefined8 *******)0x18;
          goto LAB_1012d46a4;
        }
        ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
        param_2[5] = ppppppuVar10;
      } while (ppppppuVar2 != ppppppuVar10);
    }
  }
  uStack_80 = (undefined8 *******)0x5;
LAB_1012d46a4:
  uVar8 = FUN_108831e2c(param_2,&uStack_80);
  goto LAB_1012d4c0c;
LAB_1012d4704:
  lVar11 = unaff_x25;
  FUN_1011dda68(&uStack_80,&pppppppuStack_c0);
  pppppppuVar5 = pppppppuStack_c0;
  plVar9 = plStack_78;
  pppppppuVar6 = pppppppuVar16;
  if ((char)uStack_80 == '\x01') goto joined_r0x0001012d495c;
  if (uStack_80._1_1_ != '\x01') {
    if (pppppppuVar16 == (undefined8 *******)0x8000000000000000) {
      pppppppuStack_98 = (undefined8 *******)&UNK_108cad13b;
      plStack_90 = (long *)0xc;
      uStack_80 = &pppppppuStack_98;
      plStack_78 = (long *)&DAT_100c7b3a0;
      unaff_x21 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_80);
      pppppppuVar16 = (undefined8 *******)0x8000000000000000;
    }
    goto LAB_1012d4b48;
  }
  pppppppuStack_c0[5] = (undefined8 ******)((long)pppppppuStack_c0[5] + 1);
  pppppppuStack_c0[2] = (undefined8 ******)0x0;
  __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
            (&uStack_80,pppppppuStack_c0 + 3,pppppppuStack_c0);
  plVar9 = plStack_78;
  if (uStack_80 != (undefined8 *******)0x2) {
    if ((lStack_70 == 0xc) &&
       (*plStack_78 == 0x695f74757074756f && (int)plStack_78[1] == 0x736d6574)) {
      if (pppppppuVar16 != (undefined8 *******)0x8000000000000000) {
        pppppppuStack_98 = (undefined8 *******)&UNK_108cad13b;
        plStack_90 = (long *)0xc;
        uStack_80 = &pppppppuStack_98;
        plStack_78 = (long *)&DAT_100c7b3a0;
        pppppppuStack_b0 = pppppppuVar16;
        plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
        goto joined_r0x0001012d4b30;
      }
      ppppppuVar10 = pppppppuVar5[5];
      if (pppppppuVar5[4] <= ppppppuVar10) {
LAB_1012d4a74:
        uStack_80 = (undefined8 *******)0x3;
        pppppppuStack_b0 = pppppppuVar16;
        unaff_x21 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
LAB_1012d4a94:
        pppppppuVar16 = (undefined8 *******)0x8000000000000000;
        goto LAB_1012d4b48;
      }
      while( true ) {
        bVar4 = *(byte *)((long)pppppppuVar5[3] + (long)ppppppuVar10);
        if (0x3a < bVar4) goto LAB_1012d4c38;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
        pppppppuVar5[5] = ppppppuVar10;
        if (pppppppuVar5[4] == ppppppuVar10) goto LAB_1012d4a74;
      }
      if ((ulong)bVar4 != 0x3a) {
LAB_1012d4c38:
        uStack_80 = (undefined8 *******)0x6;
        pppppppuStack_b0 = pppppppuVar16;
        unaff_x21 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
        goto LAB_1012d4a94;
      }
      pppppppuVar5[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
      func_0x000101366828(&pppppppuStack_98,pppppppuVar5);
      unaff_x21 = plStack_90;
      pppppppuVar16 = pppppppuStack_98;
      unaff_x25 = lStack_88;
      if (pppppppuStack_98 == (undefined8 *******)0x8000000000000000) goto LAB_1012d4ac0;
      goto LAB_1012d4704;
    }
    ppppppuVar10 = pppppppuVar5[5];
    if (ppppppuVar10 < pppppppuVar5[4]) {
      while( true ) {
        bVar4 = *(byte *)((long)pppppppuVar5[3] + (long)ppppppuVar10);
        if (0x3a < bVar4) goto LAB_1012d4aa0;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
        pppppppuVar5[5] = ppppppuVar10;
        if (pppppppuVar5[4] == ppppppuVar10) goto LAB_1012d48a8;
      }
      if ((ulong)bVar4 != 0x3a) {
LAB_1012d4aa0:
        uStack_80 = (undefined8 *******)0x6;
        pppppppuStack_b0 = pppppppuVar16;
        plVar9 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
        pppppppuVar6 = pppppppuStack_b0;
        goto joined_r0x0001012d495c;
      }
      pppppppuVar5[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
      plVar9 = (long *)FUN_100651420(pppppppuVar5);
      unaff_x25 = lVar11;
      if (plVar9 == (long *)0x0) goto LAB_1012d4704;
    }
    else {
LAB_1012d48a8:
      uStack_80 = (undefined8 *******)0x3;
      pppppppuStack_b0 = pppppppuVar16;
      plVar9 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
      pppppppuVar6 = pppppppuStack_b0;
    }
  }
joined_r0x0001012d495c:
  pppppppuStack_b0 = pppppppuVar6;
  if (pppppppuVar16 != (undefined8 *******)0x8000000000000000) {
joined_r0x0001012d4b30:
    if (lVar11 != 0) {
      plVar14 = unaff_x21 + 1;
      lVar17 = lVar11;
      do {
        if ((plVar14[-1] & 0x7fffffffffffffffU) != 0) {
          _free(*plVar14);
        }
        plVar14 = plVar14 + 3;
        lVar17 = lVar17 + -1;
        lVar11 = 0;
      } while (lVar17 != 0);
    }
    if (pppppppuVar16 != (undefined8 *******)0x0) {
      _free(unaff_x21);
    }
  }
  pppppppuVar16 = (undefined8 *******)0x8000000000000000;
  unaff_x21 = plVar9;
  goto LAB_1012d4b48;
LAB_1012d4ac0:
  pppppppuVar16 = (undefined8 *******)0x8000000000000000;
LAB_1012d4b48:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  uStack_80 = pppppppuVar16;
  plStack_78 = unaff_x21;
  lStack_70 = lVar11;
  plVar9 = (long *)FUN_1006546a8(param_2);
  if (pppppppuVar16 == (undefined8 *******)0x8000000000000000) {
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      if (lVar11 == 1) {
        FUN_100de21d4(plVar9 + 1);
      }
      else {
LAB_1012d4b94:
        if ((lVar11 == 0) && (plVar9[2] != 0)) {
          _free(plVar9[1]);
        }
      }
LAB_1012d4bf8:
      _free(plVar9);
    }
  }
  else {
    if (plVar9 == (long *)0x0) {
LAB_1012d4b78:
      *param_1 = pppppppuVar16;
      param_1[1] = unaff_x21;
      param_1[2] = lVar11;
      return;
    }
    plVar14 = unaff_x21;
    if (lVar11 != 0) {
      plVar15 = unaff_x21 + 1;
      do {
        if ((plVar15[-1] & 0x7fffffffffffffffU) != 0) {
          _free(*plVar15);
        }
        plVar15 = plVar15 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
joined_r0x0001012d4940:
    unaff_x21 = plVar9;
    if (pppppppuVar16 != (undefined8 *******)0x0) {
      _free(plVar14);
    }
  }
LAB_1012d4c00:
  uVar8 = FUN_108832dfc(unaff_x21,param_2);
LAB_1012d4c0c:
  uVar12 = 0x8000000000000001;
  param_1[1] = uVar8;
LAB_1012d4c14:
  *param_1 = uVar12;
  return;
}

