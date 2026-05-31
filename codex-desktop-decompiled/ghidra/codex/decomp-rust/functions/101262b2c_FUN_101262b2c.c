
/* WARNING: Type propagation algorithm not settling */

void FUN_101262b2c(undefined8 *param_1,undefined8 *******param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ******ppppppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  long unaff_x25;
  long *plStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined1 uStack_a0;
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
        if (bVar4 != 0x6e) goto LAB_101262c18;
        ppppppuVar1 = (undefined8 ******)((long)ppppppuVar10 + 1);
        param_2[5] = ppppppuVar1;
        bVar6 = ppppppuVar1 < ppppppuVar2;
        if (ppppppuVar2 < ppppppuVar1) {
          ppppppuVar2 = (undefined8 ******)((long)ppppppuVar10 + 1);
        }
        if (bVar6) {
          cVar3 = *(char *)((long)ppppppuVar13 + (long)ppppppuVar10 + 1);
          param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 2U);
          if (cVar3 == 'u') {
            if ((undefined8 ******)((long)ppppppuVar10 + 2U) == ppppppuVar2) goto LAB_101262f70;
            cVar3 = *(char *)((long)ppppppuVar13 + (long)ppppppuVar10 + 2);
            param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 3U);
            if (cVar3 == 'l') {
              if ((undefined8 ******)((long)ppppppuVar10 + 3U) == ppppppuVar2) goto LAB_101262f70;
              cVar3 = *(char *)((long)ppppppuVar13 + (long)ppppppuVar10 + 3);
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 4);
              if (cVar3 == 'l') {
                uVar12 = 0x8000000000000000;
                goto LAB_101263038;
              }
            }
          }
          uStack_80 = (undefined8 *******)0x9;
        }
        else {
LAB_101262f70:
          uStack_80 = (undefined8 *******)0x5;
        }
        uVar7 = FUN_108832904(param_2,&uStack_80);
        goto LAB_101263030;
      }
      ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
      param_2[5] = ppppppuVar10;
    } while (ppppppuVar2 != ppppppuVar10);
  }
  else {
LAB_101262c18:
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
              plStack_b0 = plStack_78;
              if ((char)uStack_80 == '\x01') {
LAB_101262ea4:
                pppppppuVar14 = (undefined8 *******)0x8000000000000000;
                lStack_70 = unaff_x25;
              }
              else {
                if (uStack_80._1_1_ != '\x01') {
                  plStack_b0 = (long *)FUN_1087e422c(0,&UNK_10b22fc28,&UNK_10b20a590);
                  goto LAB_101262ea4;
                }
                FUN_10160c650(&uStack_80,pppppppuStack_98);
                pppppppuVar14 = uStack_80;
                plStack_b0 = plStack_78;
                if (uStack_80 == (undefined8 *******)0x8000000000000000) goto LAB_101262ea4;
              }
              *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
              plVar9 = (long *)FUN_100654840(param_2);
              plVar8 = plStack_b0;
              unaff_x25 = lStack_70;
              if (pppppppuVar14 != (undefined8 *******)0x8000000000000000)
              goto joined_r0x000101262ed0;
              if (plVar9 == (long *)0x0) goto LAB_101263024;
              lVar11 = *plVar9;
              if (lVar11 != 1) goto LAB_101262fc0;
              FUN_100de21d4(plVar9 + 1);
              goto LAB_10126301c;
            }
          }
          else {
            if (bVar4 != 0x7b) {
              plStack_b0 = (long *)FUN_108831eec(param_2,&uStack_61,&UNK_10b24f098);
              goto LAB_101263024;
            }
            cVar3 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              param_2[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
              uStack_a0 = 1;
              pppppppuVar14 = (undefined8 *******)0x8000000000000000;
              pppppppuStack_a8 = param_2;
              goto LAB_101262cc0;
            }
          }
          uStack_80 = (undefined8 *******)0x18;
          goto LAB_101262c5c;
        }
        ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
        param_2[5] = ppppppuVar10;
      } while (ppppppuVar2 != ppppppuVar10);
    }
  }
  uStack_80 = (undefined8 *******)0x5;
LAB_101262c5c:
  uVar7 = FUN_108831e2c(param_2,&uStack_80);
  goto LAB_101263030;
LAB_101262cc0:
  do {
    FUN_1011dda68(&uStack_80,&pppppppuStack_a8);
    pppppppuVar5 = pppppppuStack_a8;
    plVar8 = plStack_78;
    lVar11 = unaff_x25;
    if ((char)uStack_80 == '\x01') {
LAB_101262ee4:
      pppppppuVar14 = (undefined8 *******)((ulong)pppppppuVar14 & 0x7fffffffffffffff);
      goto joined_r0x0001012630f4;
    }
    if (uStack_80._1_1_ != '\x01') {
      if (pppppppuVar14 == (undefined8 *******)0x8000000000000000) {
        pppppppuStack_98 = (undefined8 *******)&UNK_108ca105e;
        plStack_90 = (long *)0x6;
        uStack_80 = &pppppppuStack_98;
        plStack_78 = (long *)&DAT_100c7b3a0;
        pppppppuVar14 = (undefined8 *******)0x8000000000000000;
        plStack_b0 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_80);
      }
      goto LAB_101262ef8;
    }
    pppppppuStack_a8[5] = (undefined8 ******)((long)pppppppuStack_a8[5] + 1);
    pppppppuStack_a8[2] = (undefined8 ******)0x0;
    __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
              (&uStack_80,pppppppuStack_a8 + 3,pppppppuStack_a8);
    plVar8 = plStack_78;
    if (uStack_80 == (undefined8 *******)0x2) goto LAB_101262ee4;
    if ((lStack_70 != 6) ||
       ((int)*plStack_78 != 0x74617473 || *(short *)((long)plStack_78 + 4) != 0x7375)) {
      ppppppuVar10 = pppppppuVar5[5];
      if (ppppppuVar10 < pppppppuVar5[4]) {
        while( true ) {
          bVar4 = *(byte *)((long)pppppppuVar5[3] + (long)ppppppuVar10);
          if (0x3a < bVar4) goto LAB_10126307c;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
          pppppppuVar5[5] = ppppppuVar10;
          if (pppppppuVar5[4] == ppppppuVar10) goto LAB_101262e58;
        }
        if ((ulong)bVar4 == 0x3a) {
          pppppppuVar5[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
          plVar8 = (long *)FUN_100651420(pppppppuVar5);
          if (plVar8 != (long *)0x0) goto LAB_101262ee4;
          goto LAB_101262cc0;
        }
LAB_10126307c:
        uStack_80 = (undefined8 *******)0x6;
        plVar8 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
      }
      else {
LAB_101262e58:
        uStack_80 = (undefined8 *******)0x3;
        plVar8 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
      }
      pppppppuVar14 = (undefined8 *******)((ulong)pppppppuVar14 & 0x7fffffffffffffff);
joined_r0x0001012630f4:
      if (pppppppuVar14 != (undefined8 *******)0x0) {
        _free(plStack_b0);
      }
      break;
    }
    lVar11 = -0x8000000000000000;
    if (pppppppuVar14 != (undefined8 *******)0x8000000000000000) {
      pppppppuStack_98 = (undefined8 *******)&UNK_108ca105e;
      plStack_90 = (long *)0x6;
      uStack_80 = &pppppppuStack_98;
      plStack_78 = (long *)&DAT_100c7b3a0;
      plVar8 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
      goto joined_r0x0001012630f4;
    }
    ppppppuVar10 = pppppppuVar5[5];
    if (pppppppuVar5[4] <= ppppppuVar10) {
LAB_10126305c:
      uStack_80 = (undefined8 *******)0x3;
      plVar8 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
      break;
    }
    while( true ) {
      bVar4 = *(byte *)((long)pppppppuVar5[3] + (long)ppppppuVar10);
      if (0x3a < bVar4) goto LAB_1012630fc;
      if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
      ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
      pppppppuVar5[5] = ppppppuVar10;
      if (pppppppuVar5[4] == ppppppuVar10) goto LAB_10126305c;
    }
    if ((ulong)bVar4 != 0x3a) {
LAB_1012630fc:
      uStack_80 = (undefined8 *******)0x6;
      plVar8 = (long *)FUN_108831e2c(pppppppuVar5,&uStack_80);
      break;
    }
    pppppppuVar5[5] = (undefined8 ******)((long)ppppppuVar10 + 1);
    FUN_10160c650(&pppppppuStack_98,pppppppuVar5);
    plStack_b0 = plStack_90;
    pppppppuVar14 = pppppppuStack_98;
    plVar8 = plStack_90;
    unaff_x25 = lStack_88;
  } while (pppppppuStack_98 != (undefined8 *******)0x8000000000000000);
  pppppppuVar14 = (undefined8 *******)0x8000000000000000;
  plStack_b0 = plVar8;
  unaff_x25 = lVar11;
LAB_101262ef8:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  plVar9 = (long *)FUN_1006546a8(param_2);
  plVar8 = plStack_b0;
  if (pppppppuVar14 == (undefined8 *******)0x8000000000000000) {
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      if (lVar11 == 1) {
        FUN_100de21d4(plVar9 + 1);
      }
      else {
LAB_101262fc0:
        if ((lVar11 == 0) && (plVar9[2] != 0)) {
          _free(plVar9[1]);
        }
      }
LAB_10126301c:
      _free(plVar9);
    }
  }
  else {
joined_r0x000101262ed0:
    plStack_b0 = plVar9;
    if (plStack_b0 == (long *)0x0) {
      *param_1 = pppppppuVar14;
      param_1[1] = plVar8;
      param_1[2] = unaff_x25;
      return;
    }
    if (pppppppuVar14 != (undefined8 *******)0x0) {
      _free(plVar8);
    }
  }
LAB_101263024:
  uVar7 = FUN_108832dfc(plStack_b0,param_2);
LAB_101263030:
  uVar12 = 0x8000000000000001;
  param_1[1] = uVar7;
LAB_101263038:
  *param_1 = uVar12;
  return;
}

