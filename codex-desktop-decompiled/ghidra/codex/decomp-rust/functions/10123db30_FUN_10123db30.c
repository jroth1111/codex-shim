
void FUN_10123db30(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined1 uVar12;
  long lVar13;
  char cVar14;
  char cVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  byte bStack_a0;
  char cStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      uVar9 = FUN_108855b04(param_2,auStack_69,&UNK_10b20c720);
      *(undefined8 *)(param_1 + 8) = uVar9;
      *param_1 = 1;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbVar22 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar16 = pbVar22 + lVar13;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_d0 = pbVar22;
    pbStack_b8 = pbVar16;
    if (*(long *)(param_2 + 0x18) == 0) {
      cVar11 = '\x02';
      cVar14 = '\x02';
    }
    else {
      lVar19 = 0;
      puVar18 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      cVar15 = '\x03';
      cVar14 = '\x03';
      pbVar1 = pbVar22;
      pbStack_c8 = pbVar22;
      do {
        pbVar21 = pbVar1 + 0x40;
        bVar2 = *pbVar1;
        lVar20 = lVar19;
        pbVar22 = pbVar21;
        if (bVar2 == 0x16) break;
        uVar9 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 1);
        puVar18[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar18 = uVar9;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        lStack_e0 = *(long *)(pbVar1 + 0x30);
        plVar4 = (long *)CONCAT71(uStack_97,uStack_98);
        plVar5 = (long *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar2;
        if (0xc < bVar2) {
          if (bVar2 == 0xd) {
            if (plVar5 == (long *)0xc) {
              if (*plVar4 == 0x546564756c636e69 && (int)plVar4[1] == 0x6e656b6f) {
                uVar10 = 0;
              }
              else {
                uVar10 = 1;
                if (*plVar4 != 0x5468736572666572 || (int)plVar4[1] != 0x6e656b6f) {
                  uVar10 = 2;
                }
              }
            }
            else {
              uVar10 = 2;
            }
            goto LAB_10123ddd4;
          }
          if (bVar2 == 0xe) {
            FUN_100b7181c(&uStack_80,plVar5);
            if (plVar4 != (long *)0x0) goto LAB_10123ddb8;
            goto LAB_10123dde4;
          }
          if (bVar2 == 0xf) {
            FUN_100b7181c(&uStack_80,plVar4,plVar5);
            goto LAB_10123dddc;
          }
LAB_10123ded4:
          uStack_78 = FUN_108855b04(&bStack_a0,auStack_69,&UNK_10b211c20);
          uStack_80 = (undefined *)CONCAT71(uStack_80._1_7_,1);
LAB_10123df00:
          lStack_b0 = lVar19 + 1;
          uVar9 = uStack_78;
          pbStack_c8 = pbVar21;
LAB_10123df10:
          *(undefined8 *)(param_1 + 8) = uVar9;
          *param_1 = 1;
          FUN_100d34830(&pbStack_d0);
          if ((byte)pbStack_f0 != '\x16') {
            FUN_100e077ec(&pbStack_f0);
          }
          goto LAB_10123e0d4;
        }
        if (bVar2 == 1) {
          uVar12 = 1;
          if (cStack_9f != '\x01') {
            uVar12 = 2;
          }
          uVar10 = 0;
          if (cStack_9f != '\0') {
            uVar10 = uVar12;
          }
LAB_10123ddd4:
          uStack_80 = (undefined *)((ulong)CONCAT61(uStack_80._2_6_,uVar10) << 8);
LAB_10123dddc:
          FUN_100e077ec(&bStack_a0);
LAB_10123dde4:
          pbVar22 = pbStack_f0;
          puVar7 = uStack_80;
        }
        else {
          if (bVar2 == 4) {
            uVar12 = 1;
            if (plVar4 != (long *)0x1) {
              uVar12 = 2;
            }
            uVar10 = 0;
            if (plVar4 != (long *)0x0) {
              uVar10 = uVar12;
            }
            goto LAB_10123ddd4;
          }
          if (bVar2 != 0xc) goto LAB_10123ded4;
          if (lStack_88 == 0xc) {
            if (*plVar5 == 0x546564756c636e69 && (int)plVar5[1] == 0x6e656b6f) {
              uStack_80 = (undefined *)((ulong)uStack_80._2_6_ << 0x10);
            }
            else {
              uVar12 = 1;
              if (*plVar5 != 0x5468736572666572 || (int)plVar5[1] != 0x6e656b6f) {
                uVar12 = 2;
              }
              uStack_80 = (undefined *)((ulong)CONCAT61(uStack_80._2_6_,uVar12) << 8);
            }
          }
          else {
            uStack_80 = (undefined *)CONCAT62(uStack_80._2_6_,0x200);
          }
          if (plVar4 == (long *)0x0) goto LAB_10123dde4;
LAB_10123ddb8:
          _free(plVar5);
          pbVar22 = pbStack_f0;
          puVar7 = uStack_80;
        }
        bVar6 = (char)uStack_80 == '\x01';
        pbStack_f0 = pbVar22;
        uStack_80 = puVar7;
        if (bVar6) goto LAB_10123df00;
        uStack_80._1_1_ = (char)((ulong)puVar7 >> 8);
        pbStack_f0._0_1_ = (byte)pbVar22;
        bVar2 = (byte)pbStack_f0;
        pbStack_f0._1_7_ = (undefined7)((ulong)pbVar22 >> 8);
        if (uStack_80._1_1_ == '\0') {
          if (cVar14 == '\x03') {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar2 == 0x16) goto LAB_10123e170;
            uVar9 = *puVar17;
            puVar18[1] = puVar17[1];
            *puVar18 = uVar9;
            uVar9 = *(undefined8 *)((long)puVar17 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar9;
            bStack_a0 = bVar2;
            FUN_101226150(&uStack_80,&bStack_a0);
            if (((ulong)uStack_80 & 1) != 0) goto LAB_10123df00;
            cVar14 = uStack_80._1_1_;
            goto LAB_10123dbd4;
          }
          lStack_b0 = lVar19 + 1;
          uStack_80 = &UNK_108cbc0df;
          uStack_78 = 0xc;
          bStack_a0 = (byte)&uStack_80;
          cStack_9f = (char)((ulong)&uStack_80 >> 8);
          uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_c8 = pbVar21;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_10123df10;
        }
        if (uStack_80._1_1_ == '\x01') {
          if (cVar15 != '\x03') {
            lStack_b0 = lVar19 + 1;
            uStack_80 = &UNK_108cbc0eb;
            uStack_78 = 0xc;
            bStack_a0 = (byte)&uStack_80;
            cStack_9f = (char)((ulong)&uStack_80 >> 8);
            uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_c8 = pbVar21;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_10123df10;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar2 == 0x16) goto LAB_10123e170;
          uVar9 = *puVar17;
          puVar18[1] = puVar17[1];
          *puVar18 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar9;
          bStack_a0 = bVar2;
          FUN_101226150(&uStack_80,&bStack_a0);
          if (((ulong)uStack_80 & 1) != 0) goto LAB_10123df00;
          cVar15 = uStack_80._1_1_;
        }
        else {
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar2 == 0x16) {
LAB_10123e170:
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            lStack_b0 = lVar19 + 1;
            pbStack_c8 = pbVar21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10123e198);
            (*pcVar8)();
          }
          uVar9 = *puVar17;
          puVar18[1] = puVar17[1];
          *puVar18 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar9;
          bStack_a0 = bVar2;
          FUN_100e077ec(&bStack_a0);
        }
LAB_10123dbd4:
        lVar19 = lVar19 + 1;
        lVar20 = (lVar13 - 0x40U >> 6) + 1;
        pbVar22 = pbVar16;
        pbVar1 = pbVar21;
      } while (pbVar21 != pbVar16);
      cVar11 = '\x02';
      if (cVar14 != '\x03') {
        cVar11 = cVar14;
      }
      lStack_b0 = lVar20;
      cVar14 = '\x02';
      if (cVar15 != '\x03') {
        cVar14 = cVar15;
      }
    }
    lVar13 = lStack_b0;
    param_1[1] = cVar11;
    param_1[2] = cVar14;
    *param_1 = 0;
    pbStack_c8 = pbVar22;
    FUN_100d34830(&pbStack_d0);
    if (pbVar16 == pbVar22) {
      uVar12 = 0;
    }
    else {
      bStack_a0 = (byte)lVar13;
      cStack_9f = (char)((ulong)lVar13 >> 8);
      uStack_9e = (undefined6)((ulong)lVar13 >> 0x10);
      lVar13 = FUN_1087e422c(((ulong)((long)pbVar16 - (long)pbVar22) >> 6) + lVar13,&bStack_a0,
                             &UNK_10b23a190);
LAB_10123e150:
      *(long *)(param_1 + 8) = lVar13;
      uVar12 = 1;
    }
    *param_1 = uVar12;
    goto LAB_10123e0d4;
  }
  lVar13 = *(long *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  lVar19 = *(long *)(param_2 + 0x18);
  pbVar22 = pbVar1 + lVar19 * 0x20;
  pbStack_d0 = (byte *)0x0;
  pbVar16 = pbVar1;
  pbStack_f0 = pbVar1;
  lStack_e0 = lVar13;
  pbStack_d8 = pbVar22;
  if (lVar19 == 0) {
LAB_10123df80:
    pbStack_e8 = pbVar16;
    uVar9 = FUN_1087e422c(0,&UNK_10b22f4d8,&UNK_10b20a590);
  }
  else {
    pbVar16 = pbVar1 + 0x20;
    if (*pbVar1 == 0x16) goto LAB_10123df80;
    uVar9 = *(undefined8 *)(pbVar1 + 1);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar1 + 9);
    cStack_9f = (char)uVar9;
    uStack_9e = (undefined6)((ulong)uVar9 >> 8);
    uStack_98 = (undefined1)((ulong)uVar9 >> 0x38);
    lStack_88 = *(long *)(pbVar1 + 0x18);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
    pbStack_d0 = (byte *)0x1;
    pbStack_e8 = pbVar16;
    bStack_a0 = *pbVar1;
    FUN_101226150(&uStack_80,&bStack_a0);
    uVar9 = uStack_78;
    if ((char)uStack_80 != '\x01') {
      if (lVar19 != 1) {
        uVar12 = uStack_80._1_1_;
        pbVar16 = pbVar1 + 0x40;
        pbStack_e8 = pbVar16;
        if (pbVar1[0x20] != 0x16) {
          uVar9 = *(undefined8 *)(pbVar1 + 0x21);
          uStack_97 = (undefined7)*(undefined8 *)(pbVar1 + 0x29);
          cStack_9f = (char)uVar9;
          uStack_9e = (undefined6)((ulong)uVar9 >> 8);
          uStack_98 = (undefined1)((ulong)uVar9 >> 0x38);
          lStack_88 = *(long *)(pbVar1 + 0x38);
          uStack_90 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
          uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
          pbStack_d0 = (byte *)0x2;
          bStack_a0 = pbVar1[0x20];
          FUN_101226150(&uStack_80,&bStack_a0);
          uVar9 = uStack_78;
          if (((ulong)uStack_80 & 1) == 0) {
            param_1[1] = uVar12;
            param_1[2] = uStack_80._1_1_;
            lVar13 = FUN_100fbc738(&pbStack_f0);
            if (lVar13 == 0) {
              *param_1 = 0;
              return;
            }
            goto LAB_10123e150;
          }
          goto LAB_10123e084;
        }
      }
      uVar9 = FUN_1087e422c(1,&UNK_10b22f4d8,&UNK_10b20a590);
    }
  }
LAB_10123e084:
  *(undefined8 *)(param_1 + 8) = uVar9;
  *param_1 = 1;
  lVar19 = ((ulong)((long)pbVar22 - (long)pbVar16) >> 5) + 1;
  while (lVar19 = lVar19 + -1, lVar19 != 0) {
    FUN_100e077ec(pbVar16);
    pbVar16 = pbVar16 + 0x20;
  }
  if (lVar13 != 0) {
    _free(pbVar1);
    return;
  }
LAB_10123e0d4:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

