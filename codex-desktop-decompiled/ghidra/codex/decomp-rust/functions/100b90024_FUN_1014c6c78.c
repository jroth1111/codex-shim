
/* WARNING: Removing unreachable block (ram,0x000100b8fef4) */
/* WARNING: Removing unreachable block (ram,0x000100b8fec8) */

long FUN_1014c6c78(byte *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x1;
  long *plVar6;
  long *extraout_x1_00;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined2 uStack_88;
  long *plStack_80;
  undefined8 auStack_78 [2];
  long *plStack_68;
  
  if ((*param_1 & 1) != 0) {
    lVar8 = func_0x000108a4a0f8(&stack0xffffffffffffffb8,0,0);
    return lVar8;
  }
  FUN_1013fe3ec(param_1,&UNK_108cc6b2d,6);
  if (*param_1 == 1) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    plVar6 = extraout_x1_00;
    lVar8 = extraout_x8;
LAB_1014c6d68:
    FUN_108855060(param_1,lVar8,1,1,1);
    lVar8 = *(long *)(param_1 + 0x10);
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    param_1 = (byte *)*plVar6;
    lVar8 = *(long *)(param_1 + 0x10);
    if (*(long *)param_1 == lVar8) goto LAB_1014c6d68;
  }
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar8) = 0x3a;
  *(long *)(param_1 + 0x10) = lVar8 + 1;
  if (*param_2 == -0x8000000000000000) {
    plVar10 = (long *)*plVar6;
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x7b;
    plVar10[2] = lVar8 + 1;
    FUN_1013fe3ec(&stack0xffffffffffffffa8,&UNK_108ca105e,6);
    plVar10 = (long *)*plVar6;
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x3a;
    plVar10[2] = lVar8 + 1;
    plVar10 = (long *)*plVar6;
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x22;
    plVar10[2] = lVar8 + 1;
    FUN_100657654(plVar10,&UNK_108cbf94f,0xc);
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x22;
    plVar10[2] = lVar8 + 1;
    FUN_1013fe3ec(&stack0xffffffffffffffa8,&UNK_108cbf8f3,7);
    plVar10 = (long *)*plVar6;
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x3a;
    plVar10[2] = lVar8 + 1;
    plVar10 = (long *)*plVar6;
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x22;
    plVar10[2] = lVar8 + 1;
    FUN_100657654(plVar10,&UNK_108cbb521,3);
    lVar8 = plVar10[2];
    if (*plVar10 == lVar8) {
      FUN_108855060(plVar10,lVar8,1,1,1);
      lVar8 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar8) = 0x22;
    plVar10[2] = lVar8 + 1;
    lVar8 = FUN_1014b169c(&stack0xffffffffffffffa8,&UNK_108cbf92b,0x11,(char)param_2[0x10]);
    if ((lVar8 == 0) &&
       (lVar8 = FUN_1014b169c(&stack0xffffffffffffffa8,&UNK_108cbaac5,0x14,
                              *(undefined1 *)((long)param_2 + 0x81)), lVar8 == 0)) {
      lVar8 = param_2[2];
      lVar14 = param_2[3];
      FUN_1013fe3ec(&stack0xffffffffffffffa8,&UNK_108cdd100,0x10);
      plVar9 = (long *)*plVar6;
      lVar4 = plVar9[2];
      plVar10 = plVar6;
      if (*plVar9 == lVar4) {
        plStack_68 = plVar6;
        FUN_108855060(plVar9,lVar4,1,1,1);
        lVar4 = plVar9[2];
        plVar10 = plStack_68;
      }
      *(undefined1 *)(plVar9[1] + lVar4) = 0x3a;
      plVar9[2] = lVar4 + 1;
      lVar8 = FUN_10064c13c(lVar8,lVar14,*plVar10);
      if (lVar8 == 0) {
        func_0x00010063ba6c(&stack0xffffffffffffffa8,&UNK_108cbf93c,0x13,param_2 + 0xd);
        lVar8 = param_2[5];
        lVar14 = param_2[6];
        FUN_1013fe3ec(&stack0xffffffffffffffa8,&UNK_108cbf8fa,10);
        plVar10 = (long *)*plVar6;
        lVar4 = plVar10[2];
        if (*plVar10 == lVar4) {
          plStack_68 = plVar6;
          FUN_108855060(plVar10,lVar4,1,1,1);
          lVar4 = plVar10[2];
          plVar6 = plStack_68;
        }
        *(undefined1 *)(plVar10[1] + lVar4) = 0x3a;
        plVar10[2] = lVar4 + 1;
        lVar8 = FUN_10064c13c(lVar8,lVar14,*plVar6);
        if (lVar8 == 0) {
          FUN_100634920(&stack0xffffffffffffffa8,&UNK_108cbf904,10,param_2[8],param_2[9]);
          FUN_100634920(&stack0xffffffffffffffa8,&UNK_108cdd0f0,0x10,param_2[0xb],param_2[0xc]);
          FUN_1014dfa8c(&stack0xffffffffffffffa8);
          lVar8 = 0;
        }
      }
    }
    return lVar8;
  }
  plVar11 = param_2 + 9;
  lVar4 = *plVar11;
  bVar2 = *(byte *)(param_2 + 0x10);
  plVar13 = (long *)(ulong)bVar2;
  uVar1 = *(uint *)(param_2 + 0xf);
  uVar12 = (ulong)uVar1;
  plVar9 = param_2 + 0xc;
  lVar14 = *plVar9;
  plVar10 = (long *)*plVar6;
  lVar8 = plVar10[2];
  if (*plVar10 == lVar8) {
    FUN_108855060(plVar10,lVar8,1,1,1);
    lVar8 = plVar10[2];
  }
  *(undefined1 *)(plVar10[1] + lVar8) = 0x7b;
  plVar10[2] = lVar8 + 1;
  uStack_88 = 0x100;
  bVar3 = *(byte *)((long)param_2 + 0x81);
  plVar15 = (long *)(ulong)bVar3;
  plStack_80 = plVar6;
  FUN_1013fe3ec(&uStack_88,&UNK_108ca105e,6);
  plVar6 = plStack_80;
  if ((byte)uStack_88 == '\x01') goto LAB_100b904ec;
  plVar10 = (long *)*plStack_80;
  lVar8 = plVar10[2];
  if (*plVar10 == lVar8) {
    FUN_108855060(plVar10,lVar8,1,1,1);
    lVar8 = plVar10[2];
  }
  *(undefined1 *)(plVar10[1] + lVar8) = 0x3a;
  plVar10[2] = lVar8 + 1;
  plVar6 = (long *)*plVar6;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      lVar8 = plVar6[2];
      if (*plVar6 == lVar8) {
        FUN_108855060(plVar6,lVar8,1,1,1);
        lVar8 = plVar6[2];
      }
      *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
      plVar6[2] = lVar8 + 1;
      puVar5 = &UNK_108cbf95b;
      uVar7 = 0xe;
    }
    else {
      if (bVar3 == 1) {
        lVar8 = plVar6[2];
        if (*plVar6 == lVar8) {
          FUN_108855060(plVar6,lVar8,1,1,1);
          lVar8 = plVar6[2];
        }
        *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
        plVar6[2] = lVar8 + 1;
        puVar5 = &UNK_108cbf969;
        goto LAB_100b90240;
      }
      lVar8 = plVar6[2];
      if (*plVar6 == lVar8) {
        FUN_108855060(plVar6,lVar8,1,1,1);
        lVar8 = plVar6[2];
      }
      *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
      plVar6[2] = lVar8 + 1;
      puVar5 = &UNK_108cbf970;
      uVar7 = 9;
    }
  }
  else {
    if (bVar3 == 3) {
      lVar8 = plVar6[2];
      if (*plVar6 == lVar8) {
        FUN_108855060(plVar6,lVar8,1,1,1);
        lVar8 = plVar6[2];
      }
      *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
      plVar6[2] = lVar8 + 1;
      puVar5 = &UNK_108cafde1;
    }
    else {
      if (bVar3 == 4) {
        lVar8 = plVar6[2];
        if (*plVar6 == lVar8) {
          FUN_108855060(plVar6,lVar8,1,1,1);
          lVar8 = plVar6[2];
        }
        *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
        plVar6[2] = lVar8 + 1;
        puVar5 = &UNK_108cbf979;
        uVar7 = 10;
        goto LAB_100b90248;
      }
      lVar8 = plVar6[2];
      if (*plVar6 == lVar8) {
        FUN_108855060(plVar6,lVar8,1,1,1);
        lVar8 = plVar6[2];
      }
      *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
      plVar6[2] = lVar8 + 1;
      puVar5 = &UNK_108ca8165;
    }
LAB_100b90240:
    uVar7 = 7;
  }
LAB_100b90248:
  plVar15 = (long *)0x22;
  FUN_100657654(plVar6,puVar5,uVar7);
  lVar8 = plVar6[2];
  if (*plVar6 == lVar8) {
    FUN_108855060(plVar6,lVar8,1,1,1);
    lVar8 = plVar6[2];
    *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
    plVar6[2] = lVar8 + 1;
    if (bVar2 != 0) goto LAB_100b90270;
LAB_100b902f8:
    if (uVar1 != 0) {
LAB_100b902fc:
      func_0x00010063c0cc(&uStack_88,&UNK_108cbb521,3,uVar12,*(undefined4 *)((long)param_2 + 0x7c));
LAB_100b9031c:
      if (((byte)uStack_88 & 1) != 0) goto LAB_100b904b4;
    }
    uVar12 = param_2[1];
    plVar10 = (long *)param_2[2];
    FUN_1013fe3ec(&uStack_88,&UNK_108cdd100,0x10);
    if ((byte)uStack_88 == '\x01') goto LAB_100b904ec;
    plVar13 = (long *)*plStack_80;
    lVar8 = plVar13[2];
    plVar15 = plStack_80;
    if (*plVar13 == lVar8) goto LAB_100b90504;
    while( true ) {
      *(undefined1 *)(plVar13[1] + lVar8) = 0x3a;
      plVar13[2] = lVar8 + 1;
      lVar8 = FUN_10064c13c(uVar12,plVar10,*plVar15);
      if (lVar8 != 0) break;
      func_0x00010063ba6c(&uStack_88,&UNK_108cbf93c,0x13,param_2 + 6);
      if ((uStack_88 & 1) != 0) goto LAB_100b904b4;
      uVar12 = param_2[4];
      param_2 = (long *)param_2[5];
      FUN_1013fe3ec(&uStack_88,&UNK_108cbf8fa,10);
      plVar6 = plStack_80;
      if ((byte)uStack_88 != '\x01') {
        plVar10 = (long *)*plStack_80;
        lVar8 = plVar10[2];
        if (*plVar10 == lVar8) {
          FUN_108855060(plVar10,lVar8,1,1,1);
          lVar8 = plVar10[2];
        }
        *(undefined1 *)(plVar10[1] + lVar8) = 0x3a;
        plVar10[2] = lVar8 + 1;
        lVar8 = FUN_10064c13c(uVar12,param_2,*plVar6);
        if (lVar8 != 0) {
          return lVar8;
        }
        if (lVar4 == -0x8000000000000000) {
          if (lVar14 == -0x8000000000000000) goto LAB_100b90470;
LAB_100b90450:
          func_0x00010063ba6c(&uStack_88,&UNK_108cdd0f0,0x10,plVar9);
        }
        else {
          func_0x00010063ba6c(&uStack_88,&UNK_108cbf904,10,plVar11);
          if (lVar14 != -0x8000000000000000) {
            if ((uStack_88 & 1) == 0) goto LAB_100b90450;
            goto LAB_100b904b4;
          }
        }
        if ((uStack_88 & 1) != 0) {
          return 0;
        }
LAB_100b90470:
        if (uStack_88._1_1_ == '\0') {
          return 0;
        }
        plVar6 = (long *)*plStack_80;
        lVar8 = plVar6[2];
        if (*plVar6 == lVar8) {
          FUN_108855060(plVar6,lVar8,1,1,1);
          lVar8 = plVar6[2];
        }
        *(undefined1 *)(plVar6[1] + lVar8) = 0x7d;
        plVar6[2] = lVar8 + 1;
        return 0;
      }
LAB_100b904ec:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
      lVar8 = extraout_x1;
LAB_100b90504:
      FUN_108855060(plVar13,lVar8,1,1,1);
      lVar8 = plVar13[2];
    }
  }
  else {
    *(undefined1 *)(plVar6[1] + lVar8) = 0x22;
    plVar6[2] = lVar8 + 1;
    if (bVar2 == 0) goto LAB_100b902f8;
LAB_100b90270:
    lVar8 = FUN_1014de498(&uStack_88);
    if (lVar8 != 0) {
      return lVar8;
    }
    if (uVar1 == 0) goto LAB_100b9031c;
    if ((uStack_88 & 1) == 0) goto LAB_100b902fc;
LAB_100b904b4:
    auStack_78[0] = 10;
    lVar8 = func_0x000108a4a0f8(auStack_78,0,0);
  }
  return lVar8;
}

