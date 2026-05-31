
/* WARNING: Type propagation algorithm not settling */

void FUN_1013833b8(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte **ppbVar10;
  ulong uVar11;
  char cVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong unaff_d8;
  ulong uStack_110;
  byte *pbStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  byte bStack_b8;
  char cStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  byte bStack_a0;
  char cStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  undefined1 auStack_79 [9];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    uVar19 = *(ulong *)(param_2 + 8);
    pbVar18 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar18 + lVar13 * 0x20;
    pbStack_e0 = (byte *)0x0;
    pbVar15 = pbVar18;
    pbStack_100 = pbVar18;
    uStack_f0 = uVar19;
    pbStack_e8 = pbVar1;
    if (lVar13 == 0) {
LAB_101383860:
      pbStack_f8 = pbVar15;
      pbVar17 = (byte *)FUN_1087e422c(0,&UNK_10b22d7d0,&UNK_10b20a590);
LAB_10138387c:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbVar17;
LAB_101383884:
      lVar13 = ((ulong)((long)pbVar1 - (long)pbVar15) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pbVar15);
        pbVar15 = pbVar15 + 0x20;
      }
    }
    else {
      pbVar15 = pbVar18 + 0x20;
      if (*pbVar18 == 0x16) goto LAB_101383860;
      uVar8 = *(undefined8 *)(pbVar18 + 1);
      uStack_97 = (undefined7)*(undefined8 *)(pbVar18 + 9);
      cStack_9f = (char)uVar8;
      uStack_9e = (undefined6)((ulong)uVar8 >> 8);
      uStack_98 = (undefined1)((ulong)uVar8 >> 0x38);
      lStack_88 = *(long *)(pbVar18 + 0x18);
      uStack_90 = (undefined1)*(undefined8 *)(pbVar18 + 0x10);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x10) >> 8);
      pbStack_e0 = (byte *)0x1;
      pbStack_f8 = pbVar15;
      bStack_a0 = *pbVar18;
      FUN_1004b64d4(&bStack_b8,&bStack_a0);
      uVar11 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)));
      pbVar17 = (byte *)CONCAT44(uStack_ac,uStack_b0);
      if (uVar11 == 0x8000000000000000) goto LAB_10138387c;
      if (lVar13 == 1) {
LAB_101383920:
        uVar9 = FUN_1087e422c(1,&UNK_10b22d7d0,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar9;
joined_r0x000101383940:
        if (uVar11 != 0) {
          _free(pbVar17);
        }
        goto LAB_101383884;
      }
      pbVar15 = pbVar18 + 0x40;
      pbStack_f8 = pbVar15;
      if (pbVar18[0x20] == 0x16) goto LAB_101383920;
      uVar8 = *(undefined8 *)(pbVar18 + 0x21);
      uStack_97 = (undefined7)*(undefined8 *)(pbVar18 + 0x29);
      cStack_9f = (char)uVar8;
      uStack_9e = (undefined6)((ulong)uVar8 >> 8);
      uStack_98 = (undefined1)((ulong)uVar8 >> 0x38);
      lStack_88 = *(long *)(pbVar18 + 0x38);
      uStack_90 = (undefined1)*(undefined8 *)(pbVar18 + 0x30);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x30) >> 8);
      pbStack_e0 = (byte *)0x2;
      bStack_a0 = pbVar18[0x20];
      FUN_1012b108c(&bStack_b8,&bStack_a0);
      if ((bStack_b8 & 1) != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = CONCAT44(uStack_ac,uStack_b0);
        goto joined_r0x000101383940;
      }
      *param_1 = uVar11;
      param_1[1] = (ulong)pbVar17;
      param_1[2] = uStack_a8;
      param_1[3] = CONCAT44(uStack_b0,uStack_b4);
      uVar19 = FUN_100fbc738(&pbStack_100);
      if (uVar19 == 0) goto LAB_1013839d8;
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar19;
      pbVar18 = pbVar17;
      uVar19 = uVar11;
    }
    if (uVar19 != 0) {
      _free(pbVar18);
    }
    goto LAB_1013839d8;
  }
  if (bVar3 != 0x15) {
    uVar19 = FUN_108855b04(param_2,auStack_79,&UNK_10b20a880);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
    return;
  }
  uStack_d0 = *(undefined8 *)(param_2 + 8);
  pbStack_e0 = *(byte **)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar15 = pbStack_e0 + lVar13;
  ppbVar10 = &pbStack_100;
  pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
  lStack_c0 = 0;
  pbStack_d8 = pbStack_e0;
  pbStack_c8 = pbVar15;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_101383980:
    bStack_b8 = 0x79;
    cStack_b7 = -0x17;
    uStack_b6 = 0x8ca;
    uStack_b4 = 1;
    uStack_b0 = 0x12;
    uStack_ac = 0;
    bStack_a0 = (byte)&bStack_b8;
    cStack_9f = (char)((ulong)&bStack_b8 >> 8);
    uStack_9e = (undefined6)((ulong)&bStack_b8 >> 0x10);
    uStack_98 = 0xa0;
    uStack_97 = 0x100c7b3;
    ppbVar10 = (byte **)FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
LAB_1013839b4:
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)ppbVar10;
  }
  else {
    lVar20 = 0;
    bVar6 = false;
    puVar16 = (undefined8 *)((ulong)&bStack_a0 | 1);
    puVar14 = (undefined8 *)((ulong)ppbVar10 | 1);
    uVar19 = 0x8000000000000000;
    pbVar1 = pbStack_e0;
    pbStack_d8 = pbStack_e0;
    do {
      pbVar17 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      pbVar18 = pbVar17;
      lVar21 = lVar20;
      if (bVar2 == 0x16) break;
      uVar8 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar16 + 0xf) = uVar8;
      uVar8 = *(undefined8 *)(pbVar1 + 1);
      puVar16[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar16 = uVar8;
      pbStack_f8 = *(byte **)(pbVar1 + 0x28);
      pbStack_100 = *(byte **)(pbVar1 + 0x20);
      pbStack_e8 = *(byte **)(pbVar1 + 0x38);
      uStack_f0 = *(ulong *)(pbVar1 + 0x30);
      plVar4 = (long *)CONCAT71(uStack_97,uStack_98);
      plVar5 = (long *)CONCAT71(uStack_8f,uStack_90);
      bStack_a0 = bVar2;
      if (0xc < bVar2) {
        if (bVar2 == 0xd) {
          if (plVar5 == (long *)0xa) {
            cStack_b7 = '\x01';
            if (*plVar4 != 0x6e61725f656e696c || (short)plVar4[1] != 0x6567) {
              cStack_b7 = '\x02';
            }
          }
          else if (plVar5 == (long *)0x12) {
            cStack_b7 = '\x02';
            if ((*plVar4 == 0x6574756c6f736261 && plVar4[1] == 0x61705f656c69665f) &&
                (short)plVar4[2] == 0x6874) {
              cStack_b7 = '\0';
            }
          }
          else {
            cStack_b7 = '\x02';
          }
          goto LAB_1013836ac;
        }
        if (bVar2 == 0xe) {
          FUN_100b23edc(&bStack_b8,plVar5);
joined_r0x00010138352c:
          pbVar1 = pbStack_100;
          if (plVar4 != (long *)0x0) {
            _free(plVar5);
            pbVar1 = pbStack_100;
          }
          goto joined_r0x0001013836a0;
        }
        if (bVar2 == 0xf) {
          FUN_100b23edc(&bStack_b8,plVar4,plVar5);
          goto LAB_1013836b4;
        }
LAB_1013837c4:
        uVar8 = FUN_108855b04(&bStack_a0,auStack_79,&UNK_10b210420);
        uStack_b0 = (undefined4)uVar8;
        uStack_ac = (undefined4)((ulong)uVar8 >> 0x20);
        bStack_b8 = 1;
LAB_1013837ec:
        lStack_c0 = lVar20 + 1;
        uVar11 = CONCAT44(uStack_ac,uStack_b0);
        pbStack_d8 = pbVar17;
LAB_101383810:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        uVar19 = uVar19 & 0x7fffffffffffffff;
        goto joined_r0x00010138381c;
      }
      if (bVar2 == 1) {
        cVar12 = '\x01';
        if (cStack_9f != '\x01') {
          cVar12 = '\x02';
        }
        cStack_b7 = '\0';
        if (cStack_9f != '\0') {
          cStack_b7 = cVar12;
        }
      }
      else {
        if (bVar2 != 4) {
          if (bVar2 != 0xc) goto LAB_1013837c4;
          if (lStack_88 == 10) {
            cStack_b7 = '\x01';
            if (*plVar5 != 0x6e61725f656e696c || (short)plVar5[1] != 0x6567) {
              cStack_b7 = '\x02';
            }
            bStack_b8 = 0;
          }
          else if (lStack_88 == 0x12) {
            cStack_b7 = '\x02';
            if ((*plVar5 == 0x6574756c6f736261 && plVar5[1] == 0x61705f656c69665f) &&
                (short)plVar5[2] == 0x6874) {
              cStack_b7 = '\0';
            }
            bStack_b8 = 0;
          }
          else {
            cStack_b7 = '\x02';
            bStack_b8 = 0;
          }
          goto joined_r0x00010138352c;
        }
        cVar12 = '\x01';
        if (plVar4 != (long *)0x1) {
          cVar12 = '\x02';
        }
        cStack_b7 = '\0';
        if (plVar4 != (long *)0x0) {
          cStack_b7 = cVar12;
        }
      }
LAB_1013836ac:
      bStack_b8 = 0;
LAB_1013836b4:
      FUN_100e077ec(&bStack_a0);
      pbVar1 = pbStack_100;
joined_r0x0001013836a0:
      pbStack_100 = pbVar1;
      if ((bStack_b8 & 1) != 0) goto LAB_1013837ec;
      pbStack_100._0_1_ = (byte)pbVar1;
      bVar2 = (byte)pbStack_100;
      pbStack_100._1_7_ = (undefined7)((ulong)pbVar1 >> 8);
      if (cStack_b7 == '\0') {
        if (uVar19 != 0x8000000000000000) {
          lStack_c0 = lVar20 + 1;
          bStack_b8 = 0x79;
          cStack_b7 = -0x17;
          uStack_b6 = 0x8ca;
          uStack_b4 = 1;
          uStack_b0 = 0x12;
          uStack_ac = 0;
          bStack_a0 = (byte)&bStack_b8;
          cStack_9f = (char)((ulong)&bStack_b8 >> 8);
          uStack_9e = (undefined6)((ulong)&bStack_b8 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_d8 = pbVar17;
          uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_101383810;
        }
        pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_c0 = lVar20 + 1;
          pbStack_d8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101383c7c;
        }
        uVar8 = *puVar14;
        puVar16[1] = puVar14[1];
        *puVar16 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar8;
        bStack_a0 = bVar2;
        FUN_1004b64d4(&bStack_b8,&bStack_a0);
        uVar19 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)));
        ppbVar10 = (byte **)CONCAT44(uStack_ac,uStack_b0);
        if (uVar19 != 0x8000000000000000) {
          uStack_110 = uStack_a8;
          goto LAB_101383460;
        }
        lStack_c0 = lVar20 + 1;
        pbStack_d8 = pbVar17;
        goto LAB_1013839b4;
      }
      if (cStack_b7 == '\x01') {
        if (bVar6) {
          lStack_c0 = lVar20 + 1;
          bStack_b8 = 0x8b;
          cStack_b7 = -0x17;
          uStack_b6 = 0x8ca;
          uStack_b4 = 1;
          uStack_b0 = 10;
          uStack_ac = 0;
          bStack_a0 = (byte)&bStack_b8;
          cStack_9f = (char)((ulong)&bStack_b8 >> 8);
          uStack_9e = (undefined6)((ulong)&bStack_b8 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_d8 = pbVar17;
          uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_101383810;
        }
        pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
        if (bVar2 == 0x16) goto LAB_101383b6c;
        uVar8 = *puVar14;
        puVar16[1] = puVar14[1];
        *puVar16 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar8;
        bStack_a0 = bVar2;
        FUN_1012b108c(&bStack_b8,&bStack_a0);
        if (CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)) == 1) goto LAB_1013837ec;
        unaff_d8 = CONCAT44(uStack_b0,uStack_b4);
        bVar6 = true;
      }
      else {
        pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
        if (bVar2 == 0x16) {
LAB_101383b6c:
          pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
          lStack_c0 = lVar20 + 1;
          pbStack_d8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101383c7c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101383c80);
          (*pcVar7)();
        }
        uVar8 = *puVar14;
        puVar16[1] = puVar14[1];
        *puVar16 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar8;
        bStack_a0 = bVar2;
        FUN_100e077ec(&bStack_a0);
      }
LAB_101383460:
      lVar20 = lVar20 + 1;
      pbVar18 = pbVar15;
      lVar21 = (lVar13 - 0x40U >> 6) + 1;
      pbVar1 = pbVar17;
    } while (pbVar17 != pbVar15);
    pbStack_d8 = pbVar18;
    lStack_c0 = lVar21;
    if (uVar19 == 0x8000000000000000) goto LAB_101383980;
    if (bVar6) {
      *param_1 = uVar19;
      param_1[1] = (ulong)ppbVar10;
      param_1[2] = uStack_110;
      param_1[3] = unaff_d8;
      FUN_100d34830(&pbStack_e0);
      if (pbVar15 != pbVar18) {
        bStack_a0 = (byte)lVar21;
        cStack_9f = (char)((ulong)lVar21 >> 8);
        uStack_9e = (undefined6)((ulong)lVar21 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar15 - (long)pbVar18) >> 6) + lVar21,&bStack_a0,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        if (uVar19 != 0) {
          _free(ppbVar10);
        }
      }
      goto LAB_1013839d8;
    }
    bStack_b8 = 0x8b;
    cStack_b7 = -0x17;
    uStack_b6 = 0x8ca;
    uStack_b4 = 1;
    uStack_b0 = 10;
    uStack_ac = 0;
    bStack_a0 = (byte)&bStack_b8;
    cStack_9f = (char)((ulong)&bStack_b8 >> 8);
    uStack_9e = (undefined6)((ulong)&bStack_b8 >> 0x10);
    uStack_98 = 0xa0;
    uStack_97 = 0x100c7b3;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
joined_r0x00010138381c:
    if (uVar19 != 0) {
      _free(ppbVar10);
    }
  }
  FUN_100d34830(&pbStack_e0);
  if ((byte)pbStack_100 != '\x16') {
    FUN_100e077ec(&pbStack_100);
  }
LAB_1013839d8:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

