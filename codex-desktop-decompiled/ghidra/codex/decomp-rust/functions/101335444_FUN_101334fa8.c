
/* WARNING: Removing unreachable block (ram,0x0001013354dc) */

void FUN_101334fa8(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long *plVar6;
  ulong *puVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  char cVar19;
  undefined8 *puVar20;
  byte *pbStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  byte bStack_98;
  char cStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    lVar13 = *(long *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar1 = pbVar2 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar16 = pbVar2;
    pbStack_e0 = pbVar2;
    lStack_d0 = lVar13;
    pbStack_c8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101335358:
      pbStack_d8 = pbVar16;
      uVar10 = FUN_1087e422c(0,&UNK_10b232540,&UNK_10b20a590);
    }
    else {
      pbVar16 = pbVar2 + 0x20;
      if (*pbVar2 == 0x16) goto LAB_101335358;
      uVar10 = *(undefined8 *)(pbVar2 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar2 + 9);
      cStack_97 = (char)uVar10;
      uStack_96 = (undefined6)((ulong)uVar10 >> 8);
      uStack_90 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_80 = *(long *)(pbVar2 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar2 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar16;
      bStack_98 = *pbVar2;
      FUN_1013bf2f0(&uStack_78,&bStack_98);
      uVar10 = uStack_70;
      if ((char)uStack_78 != '\x01') {
        param_1[1] = uStack_78._1_1_;
        lVar13 = FUN_100fbc738(&pbStack_e0);
        if (lVar13 == 0) {
          *param_1 = 0;
          return;
        }
        goto LAB_1013354f4;
      }
    }
    *(undefined8 *)(param_1 + 8) = uVar10;
    *param_1 = 1;
    lVar17 = ((ulong)((long)pbVar1 - (long)pbVar16) >> 5) + 1;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      FUN_100e077ec(pbVar16);
      pbVar16 = pbVar16 + 0x20;
    }
    if (lVar13 != 0) {
      _free(pbVar2);
      return;
    }
    goto joined_r0x000101335508;
  }
  if (bVar4 != 0x15) {
    uVar10 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20c160);
    *(undefined8 *)(param_1 + 8) = uVar10;
    *param_1 = 1;
    return;
  }
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  pbStack_c0 = *(byte **)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar1 = pbStack_c0 + lVar13;
  pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
  lStack_a0 = 0;
  pbStack_b8 = pbStack_c0;
  pbStack_a8 = pbVar1;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar17 = 0;
    puVar20 = (undefined8 *)((ulong)&bStack_98 | 1);
    puVar14 = (undefined8 *)((ulong)&pbStack_e0 | 1);
    cVar19 = '\x02';
    pbVar2 = pbStack_c0;
    pbStack_b8 = pbStack_c0;
LAB_101335060:
    cVar5 = cStack_97;
    pbVar15 = pbVar2 + 0x40;
    bVar3 = *pbVar2;
    pbVar16 = pbVar15;
    lVar18 = lVar17;
    if (bVar3 == 0x16) goto LAB_101335404;
    uVar10 = *(undefined8 *)(pbVar2 + 0x10);
    *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar2 + 0x18);
    *(undefined8 *)((long)puVar20 + 0xf) = uVar10;
    uVar10 = *(undefined8 *)(pbVar2 + 1);
    puVar20[1] = *(undefined8 *)(pbVar2 + 9);
    *puVar20 = uVar10;
    pbStack_d8 = *(byte **)(pbVar2 + 0x28);
    pbStack_e0 = *(byte **)(pbVar2 + 0x20);
    pbStack_c8 = *(byte **)(pbVar2 + 0x38);
    lStack_d0 = *(long *)(pbVar2 + 0x30);
    plVar6 = (long *)CONCAT71(uStack_8f,uStack_90);
    puVar7 = (ulong *)CONCAT71(uStack_87,uStack_88);
    bStack_98 = bVar3;
    if (bVar3 < 0xd) {
      if (bVar3 == 1) {
        FUN_100e077ec(&bStack_98);
LAB_10133527c:
        if (cVar5 != '\0') goto LAB_1013352f0;
LAB_1013352a0:
        if (cVar19 != '\x02') {
          lStack_a0 = lVar17 + 1;
          uStack_78 = &UNK_108cc1a5f;
          uStack_70 = 10;
          bStack_98 = (byte)&uStack_78;
          cStack_97 = (char)((ulong)&uStack_78 >> 8);
          uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_b8 = pbVar15;
          uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          goto LAB_101335454;
        }
        bVar3 = (byte)pbStack_e0;
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_101335548;
        uVar10 = *puVar14;
        puVar20[1] = puVar14[1];
        *puVar20 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar10;
        bStack_98 = bVar3;
        FUN_1013bf2f0(&uStack_78,&bStack_98);
        if (((ulong)uStack_78 & 1) != 0) {
          lStack_a0 = lVar17 + 1;
          uVar10 = uStack_70;
          pbStack_b8 = pbVar15;
          goto LAB_101335454;
        }
        cVar19 = uStack_78._1_1_;
        goto LAB_10133504c;
      }
      if (bVar3 == 4) {
        FUN_100e077ec(&bStack_98);
        if (plVar6 == (long *)0x0) goto LAB_1013352a0;
        goto LAB_1013352f0;
      }
      if (bVar3 != 0xc) {
LAB_1013355c8:
        lStack_a0 = lVar17 + 1;
        pbStack_b8 = pbVar15;
        uVar10 = FUN_108855b04(&bStack_98,&uStack_78,&UNK_10b20f6c0);
        goto LAB_101335454;
      }
      if (lStack_80 == 10) {
        uVar11 = *puVar7;
        uVar12 = (ushort)puVar7[1] ^ 0x6570;
        bVar9 = (uVar11 ^ 0x7954746964657263) != 0 || uVar12 != 0;
        if (plVar6 == (long *)0x0) goto LAB_10133529c;
        _free();
        if ((uVar11 ^ 0x7954746964657263) == 0 && uVar12 == 0) goto LAB_1013352a0;
      }
      else if (plVar6 != (long *)0x0) {
        _free();
      }
    }
    else if (bVar3 == 0xd) {
      if (puVar7 == (ulong *)0xa) {
        cVar5 = *plVar6 != 0x7954746964657263 || (short)plVar6[1] != 0x6570;
        FUN_100e077ec(&bStack_98);
        goto LAB_10133527c;
      }
LAB_101335284:
      FUN_100e077ec(&bStack_98);
    }
    else if (bVar3 == 0xe) {
      if (((((((lStack_80 == 10) && ((char)*puVar7 == 'c')) && (*(char *)((long)puVar7 + 1) == 'r'))
            && ((*(char *)((long)puVar7 + 2) == 'e' && (*(char *)((long)puVar7 + 3) == 'd')))) &&
           ((*(char *)((long)puVar7 + 4) == 'i' &&
            ((*(char *)((long)puVar7 + 5) == 't' && (*(char *)((long)puVar7 + 6) == 'T')))))) &&
          (*(char *)((long)puVar7 + 7) == 'y')) && ((char)puVar7[1] == 'p')) {
        bVar9 = *(char *)((long)puVar7 + 9) != 'e';
      }
      else {
        bVar9 = true;
      }
      if (plVar6 != (long *)0x0) {
        _free();
      }
LAB_10133529c:
      if (!bVar9) goto LAB_1013352a0;
    }
    else {
      if (bVar3 != 0xf) goto LAB_1013355c8;
      if (((((puVar7 != (ulong *)0xa) || ((char)*plVar6 != 'c')) ||
           (*(char *)((long)plVar6 + 1) != 'r')) ||
          (((*(char *)((long)plVar6 + 2) != 'e' || (*(char *)((long)plVar6 + 3) != 'd')) ||
           ((*(char *)((long)plVar6 + 4) != 'i' ||
            ((*(char *)((long)plVar6 + 5) != 't' || (*(char *)((long)plVar6 + 6) != 'T')))))))) ||
         ((*(char *)((long)plVar6 + 7) != 'y' || ((char)plVar6[1] != 'p')))) goto LAB_101335284;
      cVar5 = *(char *)((long)plVar6 + 9);
      FUN_100e077ec(&bStack_98);
      if (cVar5 == 'e') goto LAB_1013352a0;
    }
LAB_1013352f0:
    bVar3 = (byte)pbStack_e0;
    pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
    if (bVar3 == 0x16) {
LAB_101335548:
      lStack_a0 = lVar17 + 1;
      pbStack_b8 = pbVar15;
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101335578);
      (*pcVar8)();
    }
    uVar10 = *puVar14;
    puVar20[1] = puVar14[1];
    *puVar20 = uVar10;
    uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
    *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
    *(undefined8 *)((long)puVar20 + 0xf) = uVar10;
    bStack_98 = bVar3;
    FUN_100e077ec(&bStack_98);
LAB_10133504c:
    lVar17 = lVar17 + 1;
    pbVar16 = pbVar1;
    lVar18 = (lVar13 - 0x40U >> 6) + 1;
    pbVar2 = pbVar15;
    if (pbVar15 == pbVar1) goto LAB_101335404;
    goto LAB_101335060;
  }
  goto LAB_101335424;
LAB_101335404:
  pbStack_b8 = pbVar16;
  lStack_a0 = lVar18;
  if (cVar19 != '\x02') {
    param_1[1] = cVar19;
    *param_1 = 0;
    FUN_100d34830(&pbStack_c0);
    if (pbVar1 == pbVar16) {
      *param_1 = 0;
      return;
    }
    bStack_98 = (byte)lVar18;
    cStack_97 = (char)((ulong)lVar18 >> 8);
    uStack_96 = (undefined6)((ulong)lVar18 >> 0x10);
    lVar13 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar16) >> 6) + lVar18,&bStack_98,
                           &UNK_10b23a190);
LAB_1013354f4:
    *(long *)(param_1 + 8) = lVar13;
    *param_1 = 1;
    goto joined_r0x000101335508;
  }
LAB_101335424:
  uStack_78 = &UNK_108cc1a5f;
  uStack_70 = 10;
  bStack_98 = (byte)&uStack_78;
  cStack_97 = (char)((ulong)&uStack_78 >> 8);
  uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
  uStack_90 = 0xa0;
  uStack_8f = 0x100c7b3;
  uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
LAB_101335454:
  *(undefined8 *)(param_1 + 8) = uVar10;
  *param_1 = 1;
  FUN_100d34830(&pbStack_c0);
  if ((byte)pbStack_e0 != '\x16') {
    FUN_100e077ec(&pbStack_e0);
  }
joined_r0x000101335508:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

