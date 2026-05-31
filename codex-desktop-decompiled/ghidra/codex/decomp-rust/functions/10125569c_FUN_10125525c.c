
/* WARNING: Type propagation algorithm not settling */

void FUN_10125525c(undefined8 *param_1,undefined8 *******param_2)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  long unaff_x25;
  long *plStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined1 uStack_98;
  undefined8 *******pppppppuStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  ppppppuVar7 = param_2[5];
  if (ppppppuVar7 < param_2[4]) {
    do {
      bVar2 = *(byte *)((long)param_2[3] + (long)ppppppuVar7);
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if (bVar2 == 0x5b) {
          cVar1 = *(char *)(param_2 + 9);
          *(char *)(param_2 + 9) = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            param_2[5] = (undefined8 ******)((long)ppppppuVar7 + 1);
            plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
            pppppppuStack_90 = param_2;
            FUN_1011de3f0(&uStack_78,&pppppppuStack_90);
            plVar5 = plStack_70;
            if ((char)uStack_78 == '\x01') {
LAB_1012554bc:
              pppppppuVar9 = (undefined8 *******)0x8000000000000001;
              lVar8 = unaff_x25;
            }
            else {
              if (uStack_78._1_1_ != '\x01') {
                plVar5 = (long *)FUN_1087e422c(0,&UNK_10b22e638,&UNK_10b20a590);
                goto LAB_1012554bc;
              }
              FUN_101608e44(&uStack_78,pppppppuStack_90);
              plVar5 = plStack_70;
              pppppppuVar9 = uStack_78;
              lVar8 = lStack_68;
              if (uStack_78 == (undefined8 *******)0x8000000000000001) goto LAB_1012554bc;
            }
            *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
            plVar6 = (long *)FUN_10065474c(param_2);
            plVar3 = plVar5;
            if (pppppppuVar9 != (undefined8 *******)0x8000000000000001) goto joined_r0x00010125555c;
            if (plVar6 == (long *)0x0) goto LAB_101255640;
            lVar8 = *plVar6;
            if (lVar8 != 1) goto LAB_1012555b8;
            FUN_100de21d4(plVar6 + 1);
            goto LAB_101255638;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            plVar5 = (long *)FUN_108832208(param_2,&uStack_78,&UNK_10b24f318);
            goto LAB_101255640;
          }
          cVar1 = *(char *)(param_2 + 9);
          *(char *)(param_2 + 9) = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            param_2[5] = (undefined8 ******)((long)ppppppuVar7 + 1);
            uStack_98 = 1;
            pppppppuVar10 = (undefined8 *******)0x8000000000000001;
            pppppppuStack_a0 = param_2;
            goto LAB_101255344;
          }
        }
        uStack_78 = (undefined8 *******)0x18;
        goto LAB_1012552cc;
      }
      ppppppuVar7 = (undefined8 ******)((long)ppppppuVar7 + 1);
      param_2[5] = ppppppuVar7;
    } while (param_2[4] != ppppppuVar7);
  }
  uStack_78 = (undefined8 *******)0x5;
LAB_1012552cc:
  uVar4 = FUN_108831e8c(param_2,&uStack_78);
  goto LAB_10125564c;
LAB_101255344:
  do {
    lVar8 = unaff_x25;
    FUN_1011ddbc4(&uStack_78,&pppppppuStack_a0);
    pppppppuVar9 = pppppppuStack_a0;
    plVar5 = plStack_70;
    if ((char)uStack_78 == '\x01') goto LAB_1012554c8;
    if (uStack_78._1_1_ != '\x01') {
      plVar5 = plStack_a8;
      pppppppuVar9 = (undefined8 *******)0x8000000000000000;
      if (pppppppuVar10 != (undefined8 *******)0x8000000000000001) {
        pppppppuVar9 = pppppppuVar10;
      }
      goto LAB_101255504;
    }
    pppppppuStack_a0[5] = (undefined8 ******)((long)pppppppuStack_a0[5] + 1);
    pppppppuStack_a0[2] = (undefined8 ******)0x0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_78,pppppppuStack_a0 + 3,pppppppuStack_a0);
    plVar5 = plStack_70;
    if (uStack_78 == (undefined8 *******)0x2) {
LAB_1012554c8:
      pppppppuVar9 = (undefined8 *******)0x8000000000000001;
      if ((-0x7fffffffffffffff < (long)pppppppuVar10) && (pppppppuVar10 != (undefined8 *******)0x0))
      {
LAB_1012554e0:
        _free(plStack_a8);
        pppppppuVar9 = (undefined8 *******)0x8000000000000001;
      }
      goto LAB_101255504;
    }
    if ((lStack_68 != 0xf) ||
       (*plStack_70 != 0x6761705f7478656e || *(long *)((long)plStack_70 + 7) != 0x6e656b6f745f6567))
    {
      plVar5 = (long *)FUN_10062a8ec(pppppppuVar9);
      unaff_x25 = lVar8;
      if (plVar5 != (long *)0x0) goto LAB_1012554c8;
      goto LAB_101255344;
    }
    if (pppppppuVar10 != (undefined8 *******)0x8000000000000001) {
      pppppppuStack_90 = (undefined8 *******)&UNK_108cb6926;
      plStack_88 = (long *)0xf;
      uStack_78 = &pppppppuStack_90;
      plStack_70 = (long *)&DAT_100c7b3a0;
      plVar5 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_78);
      if (((ulong)pppppppuVar10 & 0x7fffffffffffffff) != 0) goto LAB_1012554e0;
      break;
    }
    ppppppuVar7 = pppppppuVar9[5];
    if (pppppppuVar9[4] <= ppppppuVar7) {
LAB_101255608:
      uStack_78 = (undefined8 *******)0x3;
      plVar5 = (long *)FUN_108831e8c(pppppppuVar9,&uStack_78);
LAB_101255620:
      pppppppuVar9 = (undefined8 *******)0x8000000000000001;
      goto LAB_101255504;
    }
    while( true ) {
      bVar2 = *(byte *)((long)pppppppuVar9[3] + (long)ppppppuVar7);
      if (0x3a < bVar2) goto LAB_1012556c0;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      ppppppuVar7 = (undefined8 ******)((long)ppppppuVar7 + 1);
      pppppppuVar9[5] = ppppppuVar7;
      if (pppppppuVar9[4] == ppppppuVar7) goto LAB_101255608;
    }
    if ((ulong)bVar2 != 0x3a) {
LAB_1012556c0:
      uStack_78 = (undefined8 *******)0x6;
      plVar5 = (long *)FUN_108831e8c(pppppppuVar9,&uStack_78);
      goto LAB_101255620;
    }
    pppppppuVar9[5] = (undefined8 ******)((long)ppppppuVar7 + 1);
    FUN_101608e44(&pppppppuStack_90,pppppppuVar9);
    plStack_a8 = plStack_88;
    plVar5 = plStack_88;
    pppppppuVar10 = pppppppuStack_90;
    unaff_x25 = lStack_80;
  } while (pppppppuStack_90 != (undefined8 *******)0x8000000000000001);
  pppppppuVar9 = (undefined8 *******)0x8000000000000001;
LAB_101255504:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  plVar6 = (long *)FUN_100654604(param_2);
  plVar3 = plVar5;
  if (pppppppuVar9 == (undefined8 *******)0x8000000000000001) {
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      if (lVar8 == 1) {
        FUN_100de21d4(plVar6 + 1);
      }
      else {
LAB_1012555b8:
        if ((lVar8 == 0) && (plVar6[2] != 0)) {
          _free(plVar6[1]);
        }
      }
LAB_101255638:
      _free(plVar6);
    }
  }
  else {
joined_r0x00010125555c:
    plVar5 = plVar6;
    if (plVar5 == (long *)0x0) {
      *param_1 = pppppppuVar9;
      param_1[1] = plVar3;
      param_1[2] = lVar8;
      return;
    }
    if (((ulong)pppppppuVar9 & 0x7fffffffffffffff) != 0) {
      _free(plVar3);
    }
  }
LAB_101255640:
  uVar4 = FUN_108832da4(plVar5,param_2);
LAB_10125564c:
  *param_1 = 0x8000000000000001;
  param_1[1] = uVar4;
  return;
}

