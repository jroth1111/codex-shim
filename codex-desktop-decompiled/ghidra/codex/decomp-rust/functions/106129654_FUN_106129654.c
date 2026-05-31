
void FUN_106129654(undefined8 *param_1,long *param_2,ulong *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  ulong **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  long extraout_x1;
  undefined4 uVar12;
  ulong *puVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulong uVar18;
  byte *pbVar19;
  char cVar20;
  char cVar21;
  byte bVar22;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  long lVar23;
  ulong *puStack_110;
  long lStack_108;
  long lStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong **ppuStack_d8;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  ulong **ppuStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong **ppuStack_98;
  undefined *puStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  ulong *puStack_70;
  ulong **ppuStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  puVar13 = (ulong *)*param_2;
  if (puVar13 == (ulong *)0x8000000000000001) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beccb5,0xc5,&UNK_10b4cf748);
LAB_106129e10:
    func_0x000108a079f0(&UNK_109becd3d,0x23,&UNK_10b4cf760);
    lVar11 = extraout_x1;
LAB_106129e28:
    FUN_108a8c380(unaff_x21,lVar11,1,1,1);
    lVar11 = unaff_x21[2];
LAB_106129c84:
    *(undefined1 *)(unaff_x21[1] + lVar11) = 0x20;
    unaff_x21[2] = lVar11 + 1;
    puStack_90 = &DAT_1061269e4;
    ppuStack_98 = &puStack_110;
    iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                      (unaff_x21,&UNK_10b4cf200,s__108b38569,&ppuStack_98);
    if (iVar8 == 0) {
      lVar11 = unaff_x21[2];
      if (*unaff_x21 == lVar11) {
        FUN_108a8c380(unaff_x21,lVar11,1,1,1);
        lVar11 = unaff_x21[2];
      }
      *(undefined1 *)(unaff_x21[1] + lVar11) = 0x20;
      lVar11 = lVar11 + 1;
      unaff_x21[2] = lVar11;
      if (*unaff_x21 == lVar11) {
        FUN_108a8c380(unaff_x21,lVar11,1,1,1);
        lVar11 = unaff_x21[2];
      }
      *(undefined1 *)(unaff_x21[1] + lVar11) = 0x3d;
      lVar11 = lVar11 + 1;
      unaff_x21[2] = lVar11;
      if (*unaff_x21 == lVar11) {
        FUN_108a8c380(unaff_x21,lVar11,1,1,1);
        lVar11 = unaff_x21[2];
      }
      *(undefined1 *)(unaff_x21[1] + lVar11) = 0x20;
      unaff_x21[2] = lVar11 + 1;
      ppuStack_98 = &puStack_f8;
      puStack_90 = &DAT_1061269e4;
      iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                        (unaff_x21,&UNK_10b4cf200,s__108b38569,&ppuStack_98);
      if (iVar8 == 0) {
        *unaff_x19 = unaff_x22;
        goto joined_r0x000106129d88;
      }
    }
    puVar10 = (undefined8 *)_malloc(0x26);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = 0x6572727563636f20;
      *puVar10 = 0x726f727265206e61;
      puVar10[3] = 0x6120676e69746972;
      puVar10[2] = 0x77206e6568772064;
      *(undefined8 *)((long)puVar10 + 0x1e) = 0x65756c6176206120;
      *unaff_x19 = 0x26;
      unaff_x19[1] = puVar10;
      unaff_x19[2] = 0x26;
joined_r0x000106129d88:
      if (puStack_f8 != (ulong *)0x0) {
        _free(lStack_f0);
      }
      if (puStack_110 != (ulong *)0x0) {
        _free(lStack_108);
      }
      return;
    }
  }
  else {
    *param_2 = -0x8000000000000000;
    if (puVar13 == (ulong *)0x8000000000000000) goto LAB_106129e10;
    unaff_x22 = 0x8000000000000004;
    lStack_100 = param_2[2];
    lStack_108 = param_2[1];
    puStack_f8 = (ulong *)0x0;
    lStack_f0 = 1;
    puStack_e8 = (ulong *)0x0;
    uVar14 = *param_3 ^ 0x8000000000000000;
    if (-1 < (long)*param_3) {
      uVar14 = 6;
    }
    puStack_110 = puVar13;
    if (2 < (long)uVar14) {
      if ((long)uVar14 < 5) {
        if (uVar14 == 3) {
          uStack_b0 = CONCAT71(uStack_b0._1_7_,(char)param_3[1]);
          puStack_70 = &uStack_b0;
          ppuStack_98 = &puStack_70;
          puStack_90 = &DAT_10611f610;
          iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                            (&puStack_f8,&UNK_10b4cf200,s__108b38569,&ppuStack_98);
          goto LAB_106129bb8;
        }
        uStack_a0 = 0;
        ppuStack_98 = (ulong **)0x8000000000000001;
        puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,2);
        ppuStack_80 = &puStack_f8;
        uStack_b0 = 0;
        uStack_a8 = 1;
        uStack_60 = 0x60000020;
        puStack_70 = &uStack_b0;
        ppuStack_68 = (ulong **)&UNK_10b4cf200;
        ppuStack_78 = ppuStack_80;
        iVar8 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                          (param_3 + 1,&puStack_70);
        uVar6 = uStack_a8;
        uVar14 = uStack_b0;
        if (iVar8 != 0) {
          func_0x000108a07a3c(&UNK_109becab3,0x37,&uStack_51,&UNK_10b4cf348,&UNK_10b4cf298);
          goto LAB_106129f3c;
        }
        func_0x00010612a044(&puStack_c8,&ppuStack_98,uStack_a8,uStack_a0);
        if (puStack_c8 == (ulong *)0x8000000000000004) {
          if (uVar14 != 0) {
            _free(uVar6);
          }
          __ZN88__LT_toml__ser__value__map__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17h95df88aea6058f62E
                    (&puStack_e0,&ppuStack_98);
        }
        else {
          ppuStack_d8 = ppuStack_c0;
          puStack_e0 = puStack_c8;
          uStack_d0 = uStack_b8;
          if (uVar14 != 0) {
            _free(uVar6);
          }
          if ((-0x7fffffffffffffff < (long)ppuStack_98) && (ppuStack_98 != (ulong **)0x0)) {
LAB_106129ae0:
            _free(puStack_90);
          }
        }
      }
      else {
        bVar17 = *(byte *)((long)param_2 + 0x21);
        if (uVar14 == 5) {
          uVar14 = param_3[2];
          puVar2 = (undefined *)param_3[3];
          FUN_108a8c380(&puStack_f8,0,1,1,1);
          *(undefined1 *)(lStack_f0 + (long)puStack_e8) = 0x5b;
          puVar13 = (ulong *)((long)puStack_e8 + 1);
          puStack_e8 = puVar13;
          ppuStack_98 = (ulong **)0x1;
          puStack_90 = puVar2;
          ppuStack_88 = &puStack_f8;
          ppuStack_80 = (ulong **)((ulong)CONCAT61((int6)((ulong)ppuStack_80 >> 0x10),bVar17) << 8);
          if (puVar2 == (undefined *)0x0) {
            ppuVar9 = &puStack_f8;
            if (puStack_f8 == puVar13) goto LAB_106129edc;
          }
          else {
            lVar11 = (long)puVar2 * 0x50;
            do {
              uStack_b0 = uVar14;
              func_0x00010612adb0(&puStack_70,&ppuStack_98,&uStack_b0);
              ppuVar9 = ppuStack_88;
              puStack_e0 = puStack_70;
              if (puStack_70 != (ulong *)0x8000000000000004) {
                uStack_d0 = uStack_60;
                ppuStack_d8 = ppuStack_68;
                goto LAB_106129b18;
              }
              uVar14 = uVar14 + 0x50;
              lVar11 = lVar11 + -0x50;
            } while (lVar11 != 0);
            if (((((ulong)ppuStack_80 & 0x100) == 0) ||
                ((((uint)ppuStack_98 ^ 1) & 1) == 0 && puStack_90 < (undefined *)0x2)) ||
               (((ulong)ppuStack_80 & 1) == 0)) {
              puVar13 = ppuStack_88[2];
              if (*ppuStack_88 == puVar13) goto LAB_106129edc;
            }
            else {
              puVar13 = ppuStack_88[2];
              if (*ppuStack_88 == puVar13) {
                FUN_108a8c380(ppuStack_88,puVar13,1,1,1);
                puVar13 = ppuVar9[2];
              }
              *(undefined1 *)((long)ppuVar9[1] + (long)puVar13) = 10;
              puVar13 = (ulong *)((long)puVar13 + 1);
              ppuVar9[2] = puVar13;
              if (*ppuVar9 == puVar13) {
LAB_106129edc:
                FUN_108a8c380(ppuVar9,puVar13,1,1,1);
                puVar13 = ppuVar9[2];
              }
            }
          }
          *(undefined1 *)((long)ppuVar9[1] + (long)puVar13) = 0x5d;
          ppuVar9[2] = (ulong *)((long)puVar13 + 1);
          puStack_e0 = (ulong *)0x8000000000000004;
          ppuStack_d8 = ppuVar9;
        }
        else {
          FUN_108a8c380(&puStack_f8,0,1,1,1);
          *(undefined1 *)(lStack_f0 + (long)puStack_e8) = 0x7b;
          puStack_e8 = (ulong *)((long)puStack_e8 + 1);
          ppuStack_78 = (ulong **)((ulong)bVar17 << 8);
          ppuStack_98 = (ulong **)0x8000000000000000;
          ppuStack_80 = &puStack_f8;
          if (param_3[2] != 0) {
            lVar23 = param_3[2] * 0x70;
            lVar11 = param_3[1] + 0x18;
            do {
              func_0x000106129454(&puStack_70,&ppuStack_98,*(undefined8 *)(lVar11 + -0x10),
                                  *(undefined8 *)(lVar11 + -8));
              if ((puStack_70 != (ulong *)0x8000000000000004) ||
                 (FUN_106129654(&puStack_70,&ppuStack_98,lVar11),
                 puStack_70 != (ulong *)0x8000000000000004)) {
                ppuStack_d8 = ppuStack_68;
                puStack_e0 = puStack_70;
                uStack_d0 = uStack_60;
                if (-0x7fffffffffffffff < (long)ppuStack_98 && ppuStack_98 != (ulong **)0x0)
                goto LAB_106129ae0;
                goto LAB_106129b18;
              }
              lVar11 = lVar11 + 0x70;
              lVar23 = lVar23 + -0x70;
            } while (lVar23 != 0);
            if (ppuStack_98 == (ulong **)0x8000000000000001) {
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beccb5,0xc5,&UNK_10b4cf838);
              goto LAB_106129f3c;
            }
          }
          FUN_106125dd8(&puStack_e0,&ppuStack_98);
        }
      }
LAB_106129b18:
      if (puStack_e0 != (ulong *)0x8000000000000004) {
LAB_106129bec:
        param_1[1] = ppuStack_d8;
        *param_1 = puStack_e0;
        param_1[2] = uStack_d0;
        goto joined_r0x000106129d88;
      }
LAB_106129c38:
      unaff_x21 = (long *)param_2[3];
      if ((*(byte *)(param_2 + 4) & 1) == 0) {
        lVar11 = unaff_x21[2];
      }
      else {
        lVar11 = unaff_x21[2];
        if (*unaff_x21 == lVar11) {
          FUN_108a8c380(unaff_x21,lVar11,1,1,1);
          lVar11 = unaff_x21[2];
        }
        *(undefined1 *)(unaff_x21[1] + lVar11) = 0x2c;
        lVar11 = lVar11 + 1;
        unaff_x21[2] = lVar11;
      }
      *(undefined1 *)(param_2 + 4) = 1;
      unaff_x19 = param_1;
      if (*unaff_x21 == lVar11) goto LAB_106129e28;
      goto LAB_106129c84;
    }
    if (uVar14 == 0) {
      uVar14 = param_3[3];
      if (uVar14 == 0) {
        bVar17 = 0;
        bVar15 = 0;
        iVar8 = 0;
        bVar5 = false;
        bVar4 = false;
      }
      else {
        bVar4 = false;
        bVar5 = false;
        iVar8 = 0;
        bVar15 = 0;
        bVar17 = 0;
        cVar21 = '\0';
        bVar22 = 0;
        uVar18 = uVar14;
        pbVar19 = (byte *)param_3[2];
        do {
          bVar3 = *pbVar19;
          bVar16 = bVar17;
          if (bVar3 < 0x22) {
            if (bVar3 == 9) {
              bVar22 = 0;
              cVar21 = '\0';
            }
            else {
              if (bVar3 != 10) {
                bVar22 = 0;
                cVar20 = '\0';
                goto LAB_1061298ac;
              }
              bVar22 = 0;
              cVar21 = '\0';
              iVar8 = 1;
            }
          }
          else {
            if (bVar3 == 0x22) {
              cVar20 = '\0';
              bVar22 = bVar22 + 1;
              bVar16 = bVar22;
              if (bVar22 <= bVar17) {
                bVar16 = bVar17;
              }
            }
            else {
              if (bVar3 == 0x5c) {
                bVar22 = 0;
                cVar21 = '\0';
                bVar5 = true;
                goto LAB_1061298bc;
              }
              bVar17 = cVar21 + 1U;
              if ((byte)(cVar21 + 1U) <= bVar15) {
                bVar17 = bVar15;
              }
              bVar22 = 0;
              cVar20 = '\0';
              if (bVar3 == 0x27) {
                cVar20 = cVar21 + '\x01';
                bVar15 = bVar17;
              }
            }
LAB_1061298ac:
            bVar4 = (bool)((bVar3 < 0x20 || bVar3 == 0x7f) | bVar4);
            bVar17 = bVar16;
            cVar21 = cVar20;
          }
LAB_1061298bc:
          uVar18 = uVar18 - 1;
          pbVar19 = pbVar19 + 1;
        } while (uVar18 != 0);
      }
      if (((bVar4 || bVar5) || (bVar17 != 0)) || (iVar8 != 0)) {
        uVar12 = 3;
        if (iVar8 == 0) {
          uVar12 = 1;
        }
        if (!bVar4 && bVar15 < 3) {
          uVar12 = 2;
        }
        uVar1 = 3;
        if ((bVar4 || bVar5) || 2 < bVar17) {
          uVar1 = uVar12;
        }
        uVar12 = 0;
        if ((bVar4 || iVar8 != 0) || bVar15 != 0) {
          uVar12 = uVar1;
        }
      }
      else {
        uVar12 = 1;
      }
      iVar8 = FUN_10611e800((byte *)param_3[2],uVar14,uVar12,iVar8,&puStack_f8);
    }
    else {
      if (uVar14 != 1) {
        func_0x00010612882c(&puStack_e0,param_3[1],&puStack_f8);
        goto LAB_106129b18;
      }
      uStack_b0 = param_3[1];
      puStack_70 = &uStack_b0;
      ppuStack_98 = &puStack_70;
      puStack_90 = &DAT_10611f7b8;
      iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&puStack_f8,&UNK_10b4cf200,s__108b38569,&ppuStack_98);
    }
LAB_106129bb8:
    if (iVar8 == 0) goto LAB_106129c38;
    ppuVar9 = (ulong **)_malloc(0x26);
    if (ppuVar9 != (ulong **)0x0) {
      ppuVar9[1] = (ulong *)0x6572727563636f20;
      *ppuVar9 = (ulong *)0x726f727265206e61;
      ppuVar9[3] = (ulong *)0x6120676e69746972;
      ppuVar9[2] = (ulong *)0x77206e6568772064;
      *(undefined8 *)((long)ppuVar9 + 0x1e) = 0x65756c6176206120;
      puStack_e0 = (ulong *)0x26;
      uStack_d0 = 0x26;
      ppuStack_d8 = ppuVar9;
      goto LAB_106129bec;
    }
  }
  func_0x0001087c9084(1,0x26);
LAB_106129f3c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x106129f40);
  (*pcVar7)();
}

