
void FUN_10160877c(undefined1 *param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x21;
  char cVar12;
  undefined *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar10 = *(ulong *)(param_2 + 0x28);
  if (uVar10 < uVar2) {
    lVar11 = *(long *)(param_2 + 0x18);
    do {
      bVar3 = *(byte *)(lVar11 + uVar10);
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if (bVar3 != 0x6e) goto LAB_10160886c;
        uVar1 = uVar10 + 1;
        *(ulong *)(param_2 + 0x28) = uVar1;
        bVar5 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar10 + 1;
        }
        if (bVar5) {
          cVar12 = *(char *)(lVar11 + uVar10 + 1);
          *(ulong *)(param_2 + 0x28) = uVar10 + 2;
          if (cVar12 == 'u') {
            if (uVar10 + 2 == uVar2) goto LAB_101608af4;
            cVar12 = *(char *)(lVar11 + uVar10 + 2);
            *(ulong *)(param_2 + 0x28) = uVar10 + 3;
            if (cVar12 == 'l') {
              if (uVar10 + 3 == uVar2) goto LAB_101608af4;
              cVar12 = *(char *)(lVar11 + uVar10 + 3);
              *(ulong *)(param_2 + 0x28) = uVar10 + 4;
              if (cVar12 == 'l') {
                uVar9 = 0;
                param_1[1] = 6;
                goto LAB_101608c0c;
              }
            }
          }
          uStack_70 = (undefined8 *)0x9;
        }
        else {
LAB_101608af4:
          uStack_70 = (undefined8 *)0x5;
        }
        uVar6 = FUN_10883295c(param_2,&uStack_70);
        goto LAB_101608c04;
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(param_2 + 0x28) = uVar10;
    } while (uVar2 != uVar10);
  }
  else {
LAB_10160886c:
    if (uVar10 < uVar2) {
      do {
        bVar3 = *(byte *)(*(long *)(param_2 + 0x18) + uVar10);
        if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
          if (bVar3 == 0x5b) {
            cVar12 = param_2[0x48];
            param_2[0x48] = cVar12 + -1;
            if ((char)(cVar12 + -1) != '\0') {
              *(ulong *)(param_2 + 0x28) = uVar10 + 1;
              plStack_78 = (long *)CONCAT71(plStack_78._1_7_,1);
              uStack_80 = param_2;
              FUN_1011de3f0(&uStack_70,&uStack_80);
              plVar8 = plStack_68;
              if ((char)uStack_70 == '\x01') {
LAB_101608988:
                bVar5 = true;
                unaff_x21 = plVar8;
                cVar12 = '\0';
              }
              else {
                if (uStack_70._1_1_ != '\x01') {
                  plVar8 = (long *)FUN_1087e422c(0,&UNK_10b233298,&UNK_10b20a590);
                  goto LAB_101608988;
                }
                FUN_1012359ec(&uStack_70,uStack_80);
                plVar8 = plStack_68;
                if ((char)uStack_70 == '\x01') goto LAB_101608988;
                bVar5 = false;
                cVar12 = uStack_70._1_1_;
              }
              param_2[0x48] = param_2[0x48] + '\x01';
              plVar8 = (long *)FUN_10065474c(param_2);
              if (!bVar5) goto LAB_101608ba4;
              if (plVar8 == (long *)0x0) goto LAB_101608bf8;
              lVar11 = *plVar8;
              if (lVar11 != 1) goto LAB_101608bc8;
              FUN_100de21d4(plVar8 + 1);
              goto LAB_101608bf0;
            }
          }
          else {
            if (bVar3 != 0x7b) {
              unaff_x21 = (long *)FUN_108832208(param_2,&uStack_51,&UNK_10b24f2b8);
              goto LAB_101608bf8;
            }
            cVar12 = param_2[0x48];
            param_2[0x48] = cVar12 + -1;
            if ((char)(cVar12 + -1) != '\0') {
              *(ulong *)(param_2 + 0x28) = uVar10 + 1;
              uStack_88 = 1;
              puStack_90 = param_2;
              FUN_1011ddbc4(&uStack_70,&puStack_90);
              plVar8 = plStack_68;
              if (((ulong)uStack_70 & 1) != 0) goto LAB_101608b88;
              cVar12 = '\x06';
              goto LAB_1016089a8;
            }
          }
          uStack_70 = (undefined8 *)0x18;
          goto LAB_1016088b0;
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(param_2 + 0x28) = uVar10;
      } while (uVar2 != uVar10);
    }
  }
  uStack_70 = (undefined8 *)0x5;
LAB_1016088b0:
  uVar6 = FUN_108831e8c(param_2,&uStack_70);
  goto LAB_101608c04;
LAB_1016089a8:
  do {
    puVar4 = puStack_90;
    if (uStack_70._1_1_ != '\x01') {
      if (cVar12 != '\x06') {
        bVar5 = false;
        goto LAB_101608b8c;
      }
      pcVar7 = s_missing_field_____108ac28f7;
LAB_101608b60:
      uStack_70 = &uStack_80;
      plStack_68 = (long *)&DAT_100c7b3a0;
      plStack_78 = (long *)0x4;
      uStack_80 = &UNK_108cde34c;
      plVar8 = (long *)FUN_108856088(pcVar7,&uStack_70);
      break;
    }
    *(long *)(puStack_90 + 0x28) = *(long *)(puStack_90 + 0x28) + 1;
    *(undefined8 *)(puStack_90 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_70,puStack_90 + 0x18,puStack_90);
    unaff_x21 = plStack_68;
    plVar8 = plStack_68;
    if (uStack_70 == (undefined8 *)0x2) break;
    if ((lStack_60 != 4) || ((int)*plStack_68 != 0x65707974)) {
      plVar8 = (long *)FUN_10062a8ec(puVar4);
      if ((plVar8 != (long *)0x0) ||
         (FUN_1011ddbc4(&uStack_70,&puStack_90), plVar8 = plStack_68, ((ulong)uStack_70 & 1) != 0))
      break;
      goto LAB_1016089a8;
    }
    if (cVar12 != '\x06') {
      pcVar7 = s_duplicate_field_____108ac2973;
      goto LAB_101608b60;
    }
    uVar10 = *(ulong *)(puVar4 + 0x28);
    if (*(ulong *)(puVar4 + 0x20) <= uVar10) {
LAB_101608b6c:
      uStack_70 = (undefined8 *)0x3;
LAB_101608b70:
      plVar8 = (long *)FUN_108831e8c(puVar4,&uStack_70);
      break;
    }
    while( true ) {
      bVar3 = *(byte *)(*(long *)(puVar4 + 0x18) + uVar10);
      if (0x3a < bVar3) goto LAB_101608c84;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar4 + 0x28) = uVar10;
      if (*(ulong *)(puVar4 + 0x20) == uVar10) goto LAB_101608b6c;
    }
    if ((ulong)bVar3 != 0x3a) {
LAB_101608c84:
      uStack_70 = (undefined8 *)0x6;
      goto LAB_101608b70;
    }
    *(ulong *)(puVar4 + 0x28) = uVar10 + 1;
    FUN_1012359ec(&uStack_80,puVar4);
    plVar8 = plStack_78;
    if (((ulong)uStack_80 & 1) != 0) break;
    cVar12 = uStack_80._1_1_;
    FUN_1011ddbc4(&uStack_70,&puStack_90);
    plVar8 = plStack_68;
  } while (((ulong)uStack_70 & 1) == 0);
LAB_101608b88:
  cVar12 = '\0';
  bVar5 = true;
  unaff_x21 = plVar8;
LAB_101608b8c:
  param_2[0x48] = param_2[0x48] + '\x01';
  plVar8 = (long *)FUN_100654604(param_2);
  if (bVar5) {
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      if (lVar11 == 1) {
        FUN_100de21d4(plVar8 + 1);
      }
      else {
LAB_101608bc8:
        if ((lVar11 == 0) && (plVar8[2] != 0)) {
          _free(plVar8[1]);
        }
      }
LAB_101608bf0:
      _free(plVar8);
    }
  }
  else {
LAB_101608ba4:
    unaff_x21 = plVar8;
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
      param_1[1] = cVar12;
      goto LAB_101608c0c;
    }
  }
LAB_101608bf8:
  uVar6 = FUN_108832da4(unaff_x21,param_2);
LAB_101608c04:
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar9 = 1;
LAB_101608c0c:
  *param_1 = uVar9;
  return;
}

