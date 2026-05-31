
void FUN_104a09e38(long *param_1,long *param_2,int *param_3,long param_4,long param_5,ulong param_6)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 uVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  byte bVar11;
  long lVar12;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long *plStack_a0;
  undefined1 uStack_98;
  byte bStack_97;
  undefined1 uStack_96;
  byte bStack_95;
  byte bStack_94;
  long *plStack_90;
  undefined1 uStack_88;
  byte bStack_87;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((char)*param_3 == '@') {
    func_0x000105a1b790(&lStack_d0,(long)param_3 + 1,param_4 + -1);
    if (lStack_d0 != 5) {
      *param_1 = lStack_d0;
      param_1[1] = (long)puStack_c8;
      param_1[2] = uStack_c0;
      param_1[3] = lStack_b8;
      return;
    }
    plVar4 = param_2 + 9;
    plVar7 = *(long **)*plVar4;
    lVar8 = plVar7[2];
    lVar9 = lVar8;
    if (*plVar7 == lVar8) {
      FUN_1089a4f48(plVar7,lVar8,1,1,1);
      lVar9 = plVar7[2];
    }
    *(undefined1 *)(plVar7[1] + lVar9) = 0x20;
    plVar7[2] = lVar8 + 1;
    plVar7 = *(long **)*plVar4;
    lVar9 = plVar7[2];
    if ((ulong)(*plVar7 - lVar9) < uStack_c0) {
      FUN_1089a4f48(plVar7,lVar9,uStack_c0,1,1);
      lVar9 = plVar7[2];
    }
    _memcpy(plVar7[1] + lVar9,puStack_c8,uStack_c0);
    plVar7[2] = lVar9 + uStack_c0;
    plVar7 = *(long **)*plVar4;
    lVar8 = plVar7[2];
    lVar9 = lVar8;
    if (*plVar7 == lVar8) {
      FUN_1089a4f48(plVar7,lVar8,1,1,1);
      lVar9 = plVar7[2];
    }
    *(undefined1 *)(plVar7[1] + lVar9) = 0x3d;
    plVar7[2] = lVar8 + 1;
    plVar7 = *(long **)*plVar4;
    lVar9 = plVar7[2];
    if (*plVar7 == lVar9) {
      FUN_1089a4f48(plVar7,lVar9,1,1,1);
      *(undefined1 *)(plVar7[1] + plVar7[2]) = 0x22;
      plVar7[2] = lVar9 + 1;
    }
    else {
      *(undefined1 *)(plVar7[1] + lVar9) = 0x22;
      plVar7[2] = lVar9 + 1;
    }
    if (param_6 == 0) goto LAB_104a0a560;
    lVar9 = param_5 + param_6;
    if (*(char *)((long)param_2 + 0x54) == '\0') {
      uVar3 = 0;
      lVar8 = param_5;
      do {
        lVar12 = 0;
        while (0x3e < *(byte *)(lVar8 + lVar12) ||
               (1L << ((ulong)*(byte *)(lVar8 + lVar12) & 0x3f) & 0x500000c400000000U) == 0) {
          lVar12 = lVar12 + 1;
          if (lVar8 + lVar12 == lVar9) goto LAB_104a0a504;
        }
        func_0x000104a0f030(plVar4,param_5,param_6,uVar3,uVar3 + lVar12);
        uVar3 = uVar3 + lVar12 + 1;
        lVar8 = lVar8 + lVar12 + 1;
      } while (lVar8 != lVar9);
    }
    else if (*(char *)((long)param_2 + 0x54) == '\x01') {
      uVar3 = 0;
      lVar8 = param_5;
      do {
        lVar12 = 0;
        while (0x3e < *(byte *)(lVar8 + lVar12) ||
               (1L << ((ulong)*(byte *)(lVar8 + lVar12) & 0x3f) & 0x5000004400000000U) == 0) {
          lVar12 = lVar12 + 1;
          if (lVar8 + lVar12 == lVar9) goto LAB_104a0a504;
        }
        func_0x000104a0f030(plVar4,param_5,param_6,uVar3,uVar3 + lVar12);
        uVar3 = uVar3 + lVar12 + 1;
        lVar8 = lVar8 + lVar12 + 1;
      } while (lVar8 != lVar9);
    }
    else {
      uVar3 = 0;
      lVar8 = param_5;
      do {
        lVar12 = 0;
        while (0x3c < *(byte *)(lVar8 + lVar12) ||
               (1L << ((ulong)*(byte *)(lVar8 + lVar12) & 0x3f) & 0x1000004400000000U) == 0) {
          lVar12 = lVar12 + 1;
          if (lVar8 + lVar12 == lVar9) goto LAB_104a0a504;
        }
        func_0x000104a0f030(plVar4,param_5,param_6,uVar3,uVar3 + lVar12);
        uVar3 = uVar3 + lVar12 + 1;
        lVar8 = lVar8 + lVar12 + 1;
      } while (lVar8 != lVar9);
    }
LAB_104a0a504:
    if (uVar3 == 0) {
LAB_104a0a524:
      param_6 = param_6 - uVar3;
      plVar7 = *(long **)*plVar4;
      lVar9 = plVar7[2];
      if ((ulong)(*plVar7 - lVar9) < param_6) {
        FUN_1089a4f48(plVar7,lVar9,param_6,1,1);
        lVar9 = plVar7[2];
      }
      _memcpy(plVar7[1] + lVar9,param_5 + uVar3,param_6);
      plVar7[2] = lVar9 + param_6;
    }
    else if (uVar3 < param_6) {
      if (-0x41 < *(char *)(param_5 + uVar3)) goto LAB_104a0a524;
    }
    else if (param_6 == uVar3) goto LAB_104a0a524;
LAB_104a0a560:
    plVar4 = *(long **)*plVar4;
    lVar8 = plVar4[2];
    lVar9 = lVar8;
    if (*plVar4 == lVar8) {
      FUN_1089a4f48(plVar4,lVar8,1,1,1);
      lVar9 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar9) = 0x22;
    plVar4[2] = lVar8 + 1;
    goto LAB_104a0a66c;
  }
  puVar10 = (ulong *)(param_2 + 3);
  bVar1 = *(byte *)((long)param_2 + 0x54);
  uVar3 = *puVar10 ^ 0x8000000000000000;
  if (-1 < (long)*puVar10) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    lVar9 = -0x8000000000000000;
    uVar5 = (undefined1)param_2[0xd];
    bVar11 = *(byte *)((long)param_2 + 0x51);
    bVar6 = *(byte *)((long)param_2 + 0x53);
    if (param_4 != 6) goto LAB_104a09fcc;
LAB_104a0a0c0:
    if (*param_3 == 0x6c617624 && (short)param_3[1] == 0x6575) {
      if (param_6 != 0) {
        uVar3 = 3;
        if (bVar11 == 0) {
          uVar3 = 0;
        }
        plStack_78 = (long *)(uVar3 | (ulong)bVar1 << 8);
        plStack_80 = param_2;
        func_0x0001048ea234(&lStack_d0,&plStack_80,param_5,param_6);
        if (lStack_d0 != 5) {
          *param_1 = lStack_d0;
          *(char *)(param_1 + 1) = (char)puStack_c8;
          *(char *)((long)param_1 + 0xf) = (char)((ulong)puStack_c8 >> 0x38);
          *(short *)((long)param_1 + 0xd) = (short)((ulong)puStack_c8 >> 0x28);
          *(int *)((long)param_1 + 9) = (int)((ulong)puStack_c8 >> 8);
          param_1[2] = uStack_c0;
          param_1[3] = lStack_b8;
          return;
        }
      }
LAB_104a0a418:
      *(undefined1 *)(param_2 + 0xd) = 0;
      goto LAB_104a0a66c;
    }
  }
  else {
    if (uVar3 != 1) {
      puVar10 = (ulong *)param_2[4];
    }
    lVar9 = -0x7ffffffffffffffe;
    uVar5 = (undefined1)param_2[0xd];
    bVar11 = *(byte *)((long)param_2 + 0x51);
    bVar6 = *(byte *)((long)param_2 + 0x53);
    if (param_4 == 6) goto LAB_104a0a0c0;
LAB_104a09fcc:
    if ((param_4 == 5) && (*param_3 == 0x78657424 && (char)param_3[1] == 't')) {
      uVar3 = 3;
      if (bVar11 == 0) {
        uVar3 = 0;
      }
      plStack_78 = (long *)(uVar3 | (ulong)bVar1 << 8);
      plStack_80 = param_2;
      func_0x0001048ea234(&lStack_d0,&plStack_80,param_5,param_6);
      if (lStack_d0 != 5) {
        param_1[3] = lStack_b8;
        param_1[2] = uStack_c0;
        *param_1 = lStack_d0;
        param_1[1] = (long)puStack_c8;
        return;
      }
      goto LAB_104a0a418;
    }
  }
  func_0x000105a1b790(&lStack_d0,param_3,param_4);
  puVar2 = puStack_c8;
  if (lStack_d0 != 5) {
    *param_1 = lStack_d0;
    param_1[1] = (long)puStack_c8;
    param_1[2] = uStack_c0;
    param_1[3] = lStack_b8;
    return;
  }
  lStack_d0 = lVar9;
  puStack_c8 = puVar10;
  plStack_a0 = param_2;
  uStack_98 = uVar5;
  bStack_97 = bVar11;
  bStack_95 = bVar6;
  bStack_94 = bVar1;
  if (param_6 == 0) {
    uStack_96 = 1;
    func_0x000104a0ee2c(&plStack_80,&lStack_d0);
    plVar4 = plStack_a0;
    if (plStack_80 != (long *)0x5) goto LAB_104a0a3c4;
    if ((bStack_95 & 1) == 0) {
      lVar9 = plStack_a0[2];
      if (*plStack_a0 == lVar9) {
        FUN_1089a4f48(plStack_a0,lVar9,1,1,1);
        lVar9 = plVar4[2];
      }
      *(undefined1 *)(plVar4[1] + lVar9) = 0x3c;
      lVar9 = lVar9 + 1;
      plVar4[2] = lVar9;
      if ((ulong)(*plVar4 - lVar9) < uStack_c0) {
        FUN_1089a4f48(plVar4,lVar9,uStack_c0,1,1);
        lVar9 = plVar4[2];
      }
      _memcpy(plVar4[1] + lVar9,puVar2,uStack_c0);
      lVar9 = lVar9 + uStack_c0;
      plVar4[2] = lVar9;
      if ((ulong)(*plVar4 - lVar9) < 2) {
        FUN_1089a4f48(plVar4,lVar9,2,1,1);
        lVar9 = plVar4[2];
      }
      *(undefined2 *)(plVar4[1] + lVar9) = 0x3e2f;
      lVar9 = lVar9 + 2;
    }
    else {
      lVar9 = plStack_a0[2];
      lVar8 = lVar9;
      if (*plStack_a0 == lVar9) {
        FUN_1089a4f48(plStack_a0,lVar9,1,1,1);
        lVar8 = plVar4[2];
      }
      *(undefined1 *)(plVar4[1] + lVar8) = 0x3c;
      lVar9 = lVar9 + 1;
      plVar4[2] = lVar9;
      if ((ulong)(*plVar4 - lVar9) < uStack_c0) {
        FUN_1089a4f48(plVar4,lVar9,uStack_c0,1,1);
        lVar9 = plVar4[2];
      }
      _memcpy(plVar4[1] + lVar9,puVar2,uStack_c0);
      lVar9 = lVar9 + uStack_c0;
      plVar4[2] = lVar9;
      if ((ulong)(*plVar4 - lVar9) < 3) {
        FUN_1089a4f48(plVar4,lVar9,3,1,1);
        lVar9 = plVar4[2];
      }
      lVar8 = plVar4[1];
      *(undefined2 *)(lVar8 + lVar9) = 0x3c3e;
      *(undefined1 *)((undefined2 *)(lVar8 + lVar9) + 1) = 0x2f;
      lVar9 = lVar9 + 3;
      plVar4[2] = lVar9;
      if ((ulong)(*plVar4 - lVar9) < uStack_c0) {
        FUN_1089a4f48(plVar4,lVar9,uStack_c0,1,1);
        lVar9 = plVar4[2];
      }
      _memcpy(plVar4[1] + lVar9,puVar2,uStack_c0);
      lVar9 = lVar9 + uStack_c0;
      plVar4[2] = lVar9;
      lVar8 = lVar9;
      if (*plVar4 == lVar9) {
        FUN_1089a4f48(plVar4,lVar9,1,1,1);
        lVar8 = plVar4[2];
      }
      *(undefined1 *)(plVar4[1] + lVar8) = 0x3e;
      lVar9 = lVar9 + 1;
    }
    plVar4[2] = lVar9;
    plStack_78 = (long *)0x1;
    plVar4 = plStack_78;
    plVar7 = plStack_80;
    if (lStack_d0 < 1) goto LAB_104a0a65c;
LAB_104a0a654:
    _free(puStack_c8);
    plStack_78 = plVar4;
    plStack_80 = plVar7;
  }
  else {
    uStack_96 = 1;
    func_0x000104a0ee2c(&plStack_80,&lStack_d0);
    plVar4 = plStack_a0;
    if (plStack_80 == (long *)0x5) {
      lVar9 = plStack_a0[2];
      lVar8 = lVar9;
      if (*plStack_a0 == lVar9) {
        FUN_1089a4f48(plStack_a0,lVar9,1,1,1);
        lVar8 = plVar4[2];
      }
      *(undefined1 *)(plVar4[1] + lVar8) = 0x3c;
      lVar9 = lVar9 + 1;
      plVar4[2] = lVar9;
      if ((ulong)(*plVar4 - lVar9) < uStack_c0) {
        FUN_1089a4f48(plVar4,lVar9,uStack_c0,1,1);
        lVar9 = plVar4[2];
      }
      _memcpy(plVar4[1] + lVar9,puVar2,uStack_c0);
      lVar9 = lVar9 + uStack_c0;
      plVar4[2] = lVar9;
      lVar8 = lVar9;
      if (*plVar4 == lVar9) {
        FUN_1089a4f48(plVar4,lVar9,1,1,1);
        lVar8 = plVar4[2];
      }
      bVar1 = bStack_94;
      *(undefined1 *)(plVar4[1] + lVar8) = 0x3e;
      plVar4[2] = lVar9 + 1;
      uVar5 = 3;
      if ((bStack_97 & 1) == 0) {
        uVar5 = 0;
      }
      if (0 < lStack_d0) {
        _free(puStack_c8);
      }
      plStack_90 = plVar4;
      bStack_87 = bVar1;
      uStack_88 = uVar5;
      func_0x0001048ea234(&plStack_80,&plStack_90,param_5,param_6);
      if (plStack_80 == (long *)0x5) {
        lVar9 = plStack_78[2];
        if ((ulong)(*plStack_78 - lVar9) < 2) {
          FUN_1089a4f48(plStack_78,lVar9,2,1,1);
          lVar9 = plStack_78[2];
        }
        *(undefined2 *)(plStack_78[1] + lVar9) = 0x2f3c;
        lVar9 = lVar9 + 2;
        plStack_78[2] = lVar9;
        if ((ulong)(*plStack_78 - lVar9) < uStack_c0) {
          FUN_1089a4f48(plStack_78,lVar9,uStack_c0,1,1);
          lVar9 = plStack_78[2];
        }
        _memcpy(plStack_78[1] + lVar9,puVar2,uStack_c0);
        lVar9 = lVar9 + uStack_c0;
        plStack_78[2] = lVar9;
        lVar8 = lVar9;
        if (*plStack_78 == lVar9) {
          FUN_1089a4f48(plStack_78,lVar9,1,1,1);
          lVar8 = plStack_78[2];
        }
        *(undefined1 *)(plStack_78[1] + lVar8) = 0x3e;
        plStack_78[2] = lVar9 + 1;
        plStack_78 = (long *)0x1;
        plStack_80 = (long *)0x5;
      }
      else {
        lStack_d8 = lStack_68;
        lStack_e0 = lStack_70;
      }
    }
    else {
LAB_104a0a3c4:
      lStack_d8 = lStack_68;
      lStack_e0 = lStack_70;
      plVar4 = plStack_78;
      plVar7 = plStack_80;
      if (0 < lStack_d0) goto LAB_104a0a654;
    }
  }
LAB_104a0a65c:
  if (plStack_80 != (long *)0x5) {
    param_1[3] = lStack_d8;
    param_1[2] = lStack_e0;
    *param_1 = (long)plStack_80;
    *(char *)(param_1 + 1) = (char)plStack_78;
    *(char *)((long)param_1 + 0xf) = (char)((ulong)plStack_78 >> 0x38);
    *(short *)((long)param_1 + 0xd) = (short)((ulong)plStack_78 >> 0x28);
    *(int *)((long)param_1 + 9) = (int)((ulong)plStack_78 >> 8);
    return;
  }
  *(undefined1 *)(param_2 + 0xd) = 1;
LAB_104a0a66c:
  *param_1 = 5;
  return;
}

