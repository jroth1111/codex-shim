
void FUN_1017bafc4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  char cVar13;
  char cVar14;
  undefined8 *puVar15;
  long unaff_x27;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  uVar2 = param_2[4];
  uVar9 = param_2[5];
  if (uVar9 < uVar2) {
    lVar11 = param_2[3];
    do {
      bVar3 = *(byte *)(lVar11 + uVar9);
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if (bVar3 != 0x6e) goto LAB_1017bb0b0;
        uVar1 = uVar9 + 1;
        param_2[5] = uVar1;
        bVar5 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar9 + 1;
        }
        if (bVar5) {
          cVar13 = *(char *)(lVar11 + uVar9 + 1);
          param_2[5] = uVar9 + 2;
          if (cVar13 == 'u') {
            if (uVar9 + 2 == uVar2) goto LAB_1017bb5a0;
            cVar13 = *(char *)(lVar11 + uVar9 + 2);
            param_2[5] = uVar9 + 3;
            if (cVar13 == 'l') {
              if (uVar9 + 3 == uVar2) goto LAB_1017bb5a0;
              cVar13 = *(char *)(lVar11 + uVar9 + 3);
              param_2[5] = uVar9 + 4;
              if (cVar13 == 'l') {
                uVar10 = 0x8000000000000001;
                goto LAB_1017bb648;
              }
            }
          }
          uStack_80 = (undefined8 *)0x9;
        }
        else {
LAB_1017bb5a0:
          uStack_80 = (undefined8 *)0x5;
        }
        uVar6 = FUN_10887f4a4(param_2,&uStack_80);
        goto LAB_1017bb63c;
      }
      uVar9 = uVar9 + 1;
      param_2[5] = uVar9;
    } while (uVar2 != uVar9);
  }
  else {
LAB_1017bb0b0:
    if (uVar9 < uVar2) {
      do {
        bVar3 = *(byte *)(param_2[3] + uVar9);
        if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
          if (bVar3 == 0x5b) {
            cVar13 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar13 + -1;
            if ((char)(cVar13 + -1) != '\0') {
              param_2[5] = uVar9 + 1;
              plStack_90 = (long *)CONCAT71(plStack_90._1_7_,1);
              uStack_98 = param_2;
              FUN_1017b8fd0(&uStack_80,&uStack_98);
              plVar8 = plStack_78;
              if ((char)uStack_80 == '\x01') {
LAB_1017bb4a8:
                cVar14 = '\0';
                cVar13 = '\0';
                puVar12 = (undefined8 *)0x8000000000000001;
                lVar11 = unaff_x27;
              }
              else {
                if (uStack_80._1_1_ != '\x01') {
                  uVar6 = 0;
LAB_1017bb680:
                  plVar8 = (long *)FUN_108878f3c(uVar6,&UNK_10b259a90,&UNK_10b258940);
                  goto LAB_1017bb4a8;
                }
                FUN_1017c4cc4(&uStack_80,uStack_98);
                plVar8 = plStack_78;
                if ((char)uStack_80 == '\x01') goto LAB_1017bb4a8;
                cVar13 = uStack_80._1_1_;
                FUN_1017b8fd0(&uStack_80,&uStack_98);
                plVar8 = plStack_78;
                if ((char)uStack_80 == '\x01') goto LAB_1017bb4a8;
                if (uStack_80._1_1_ != '\x01') {
                  uVar6 = 1;
                  goto LAB_1017bb680;
                }
                FUN_1017c4cc4(&uStack_80,uStack_98);
                plVar8 = plStack_78;
                if ((char)uStack_80 == '\x01') goto LAB_1017bb4a8;
                cVar14 = uStack_80._1_1_;
                FUN_1017b8fd0(&uStack_80,&uStack_98);
                plVar8 = plStack_78;
                if ((char)uStack_80 == '\x01') goto LAB_1017bb4a8;
                if (uStack_80._1_1_ != '\x01') {
                  uVar6 = 2;
                  goto LAB_1017bb680;
                }
                FUN_1017c0610(&uStack_80,uStack_98);
                plVar8 = plStack_78;
                puVar12 = uStack_80;
                lVar11 = lStack_70;
                if (uStack_80 == (undefined8 *)0x8000000000000001) goto LAB_1017bb4a8;
              }
              *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
              plVar7 = (long *)FUN_10177b5dc(param_2);
              plVar4 = plVar8;
              if (puVar12 != (undefined8 *)0x8000000000000001) goto joined_r0x0001017bb4cc;
              if (plVar7 == (long *)0x0) goto LAB_1017bb634;
              FUN_1017a4f34();
              goto LAB_1017bb628;
            }
          }
          else {
            if (bVar3 != 0x7b) {
              plVar8 = (long *)FUN_10887eaf8(param_2,&uStack_61,&UNK_10b25ae78);
              goto LAB_1017bb634;
            }
            cVar13 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar13 + -1;
            if ((char)(cVar13 + -1) != '\0') {
              param_2[5] = uVar9 + 1;
              uStack_a0 = 1;
              puVar15 = (undefined8 *)0x8000000000000001;
              puStack_a8 = param_2;
              cVar14 = '\x02';
              cVar13 = '\x02';
              goto LAB_1017bb158;
            }
          }
          uStack_80 = (undefined8 *)0x18;
          goto LAB_1017bb0f4;
        }
        uVar9 = uVar9 + 1;
        param_2[5] = uVar9;
      } while (uVar2 != uVar9);
    }
  }
  uStack_80 = (undefined8 *)0x5;
LAB_1017bb0f4:
  uVar6 = FUN_10887ea38(param_2,&uStack_80);
  goto LAB_1017bb63c;
LAB_1017bb158:
  lVar11 = unaff_x27;
  FUN_1017b89cc(&uStack_80,&puStack_a8);
  puVar12 = puStack_a8;
  plVar8 = plStack_78;
  if ((char)uStack_80 != '\x01') {
    if (uStack_80._1_1_ == '\x01') {
      puStack_a8[5] = puStack_a8[5] + 1;
      puStack_a8[2] = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (&uStack_80,puStack_a8 + 3,puStack_a8);
      plVar8 = plStack_78;
      if (uStack_80 == (undefined8 *)0x2) goto joined_r0x0001017bb748;
      unaff_x27 = lVar11;
      if (lStack_70 == 7) {
        if ((int)*plStack_78 != 0x616c6162 || *(int *)((long)plStack_78 + 3) != 0x65636e61)
        goto LAB_1017bb2dc;
        if (puVar15 != (undefined8 *)0x8000000000000001) {
          uStack_98 = (undefined8 *)&UNK_108ce3c5e;
          plStack_90 = (long *)0x7;
          uStack_80 = &uStack_98;
          plStack_78 = (long *)&DAT_10179e9f8;
          plVar8 = (long *)FUN_108880790(s_duplicate_field_____108ac2973,&uStack_80);
          if (((ulong)puVar15 & 0x7fffffffffffffff) != 0) goto LAB_1017bb590;
          goto LAB_1017bb834;
        }
        uVar9 = puVar12[5];
        if ((ulong)puVar12[4] <= uVar9) {
LAB_1017bb6c8:
          uStack_80 = (undefined8 *)0x3;
          plVar8 = (long *)FUN_10887ea38(puVar12,&uStack_80);
LAB_1017bb6e0:
          puVar12 = (undefined8 *)0x8000000000000001;
          goto LAB_1017bb5cc;
        }
        while( true ) {
          bVar3 = *(byte *)(puVar12[3] + uVar9);
          if (0x3a < bVar3) goto LAB_1017bb854;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
          uVar9 = uVar9 + 1;
          puVar12[5] = uVar9;
          if (puVar12[4] == uVar9) goto LAB_1017bb6c8;
        }
        if ((ulong)bVar3 != 0x3a) {
LAB_1017bb854:
          uStack_80 = (undefined8 *)0x6;
          plVar8 = (long *)FUN_10887ea38(puVar12,&uStack_80);
          goto LAB_1017bb6e0;
        }
        puVar12[5] = uVar9 + 1;
        FUN_1017c0610(&uStack_98,puVar12);
        plStack_b0 = plStack_90;
        plVar8 = plStack_90;
        puVar15 = uStack_98;
        unaff_x27 = lStack_88;
        if (uStack_98 == (undefined8 *)0x8000000000000001) goto LAB_1017bb834;
        goto LAB_1017bb158;
      }
      if (lStack_70 == 9) {
        if (*plStack_78 != 0x6574696d696c6e75 || (char)plStack_78[1] != 'd') goto LAB_1017bb2dc;
        if (cVar14 == '\x02') {
          uVar9 = puVar12[5];
          if (uVar9 < (ulong)puVar12[4]) {
            while( true ) {
              bVar3 = *(byte *)(puVar12[3] + uVar9);
              if (0x3a < bVar3) goto LAB_1017bb83c;
              if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
              uVar9 = uVar9 + 1;
              puVar12[5] = uVar9;
              if (puVar12[4] == uVar9) goto LAB_1017bb704;
            }
            if ((ulong)bVar3 == 0x3a) {
              puVar12[5] = uVar9 + 1;
              FUN_1017c4cc4(&uStack_98,puVar12);
              plVar8 = plStack_90;
              if ((char)uStack_98 != '\x01') {
                cVar14 = uStack_98._1_1_;
                goto LAB_1017bb158;
              }
            }
            else {
LAB_1017bb83c:
              uStack_80 = (undefined8 *)0x6;
              plVar8 = (long *)FUN_10887ea38(puVar12,&uStack_80);
            }
          }
          else {
LAB_1017bb704:
            uStack_80 = (undefined8 *)0x3;
            plVar8 = (long *)FUN_10887ea38(puVar12,&uStack_80);
          }
        }
        else {
          uStack_98 = (undefined8 *)&UNK_108ce3c55;
          plStack_90 = (long *)0x9;
          uStack_80 = &uStack_98;
          plStack_78 = (long *)&DAT_10179e9f8;
          plVar8 = (long *)FUN_108880790(s_duplicate_field_____108ac2973,&uStack_80);
        }
      }
      else if ((lStack_70 == 0xb) &&
              (*plStack_78 == 0x646572635f736168 &&
               *(long *)((long)plStack_78 + 3) == 0x737469646572635f)) {
        if (cVar13 == '\x02') {
          uVar9 = puVar12[5];
          if (uVar9 < (ulong)puVar12[4]) {
            while( true ) {
              bVar3 = *(byte *)(puVar12[3] + uVar9);
              if (0x3a < bVar3) goto LAB_1017bb870;
              if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
              uVar9 = uVar9 + 1;
              puVar12[5] = uVar9;
              if (puVar12[4] == uVar9) goto LAB_1017bb6ec;
            }
            if ((ulong)bVar3 == 0x3a) {
              puVar12[5] = uVar9 + 1;
              FUN_1017c4cc4(&uStack_98,puVar12);
              plVar8 = plStack_90;
              if ((char)uStack_98 == '\x01') goto joined_r0x0001017bb748;
              cVar13 = uStack_98._1_1_;
              goto LAB_1017bb158;
            }
LAB_1017bb870:
            uStack_80 = (undefined8 *)0x6;
            plVar8 = (long *)FUN_10887ea38(puVar12,&uStack_80);
          }
          else {
LAB_1017bb6ec:
            uStack_80 = (undefined8 *)0x3;
            plVar8 = (long *)FUN_10887ea38(puVar12,&uStack_80);
          }
        }
        else {
          uStack_98 = (undefined8 *)&UNK_108ce3c4a;
          plStack_90 = (long *)0xb;
          uStack_80 = &uStack_98;
          plStack_78 = (long *)&DAT_10179e9f8;
          plVar8 = (long *)FUN_108880790(s_duplicate_field_____108ac2973,&uStack_80);
        }
      }
      else {
LAB_1017bb2dc:
        plVar8 = (long *)FUN_101779248(puVar12);
        if (plVar8 == (long *)0x0) goto LAB_1017bb158;
      }
    }
    else {
      if (cVar13 != '\x02') {
        if (cVar14 == '\x02') {
          uStack_98 = (undefined8 *)&UNK_108ce3c55;
          plStack_90 = (long *)0x9;
          uStack_80 = &uStack_98;
          plStack_78 = (long *)&DAT_10179e9f8;
          plVar8 = (long *)FUN_108880790(s_missing_field_____108ac28f7,&uStack_80);
          goto joined_r0x0001017bb748;
        }
        plVar8 = plStack_b0;
        puVar12 = (undefined8 *)0x8000000000000000;
        if (puVar15 != (undefined8 *)0x8000000000000001) {
          puVar12 = puVar15;
        }
        goto LAB_1017bb5cc;
      }
      uStack_98 = (undefined8 *)&UNK_108ce3c4a;
      plStack_90 = (long *)0xb;
      uStack_80 = &uStack_98;
      plStack_78 = (long *)&DAT_10179e9f8;
      plVar8 = (long *)FUN_108880790(s_missing_field_____108ac28f7,&uStack_80);
    }
  }
joined_r0x0001017bb748:
  puVar12 = (undefined8 *)0x8000000000000001;
  if ((-0x7fffffffffffffff < (long)puVar15) &&
     (puVar12 = (undefined8 *)0x8000000000000001, puVar15 != (undefined8 *)0x0)) {
LAB_1017bb590:
    _free(plStack_b0);
    puVar12 = (undefined8 *)0x8000000000000001;
  }
  goto LAB_1017bb5cc;
LAB_1017bb834:
  puVar12 = (undefined8 *)0x8000000000000001;
LAB_1017bb5cc:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  plVar7 = (long *)FUN_10177b538(param_2);
  plVar4 = plVar8;
  if (puVar12 == (undefined8 *)0x8000000000000001) {
    if (plVar7 != (long *)0x0) {
      FUN_1017a4f34();
LAB_1017bb628:
      _free(plVar7);
    }
  }
  else {
joined_r0x0001017bb4cc:
    plVar8 = plVar7;
    if (plVar8 == (long *)0x0) {
      *param_1 = puVar12;
      param_1[1] = plVar4;
      param_1[2] = lVar11;
      *(char *)(param_1 + 3) = cVar13;
      *(char *)((long)param_1 + 0x19) = cVar14;
      return;
    }
    if (((ulong)puVar12 & 0x7fffffffffffffff) != 0) {
      _free(plVar4);
    }
  }
LAB_1017bb634:
  uVar6 = FUN_10887f554(plVar8,param_2);
LAB_1017bb63c:
  uVar10 = 0x8000000000000002;
  param_1[1] = uVar6;
LAB_1017bb648:
  *param_1 = uVar10;
  return;
}

