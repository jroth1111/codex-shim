
long FUN_10612ac08(long param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  plVar13 = *(long **)(param_1 + 0x18);
  uVar12 = *(ulong *)(param_1 + 0x20);
  uVar7 = uVar12 & param_2;
  lVar14 = *(long *)((long)plVar13 + uVar7);
  uVar9 = CONCAT17(-(lVar14 < 0),
                   CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                            CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                     CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                              CONCAT13(-((char)((ulong)lVar14 >> 0x18) < '\0'),
                                                       CONCAT12(-((char)((ulong)lVar14 >> 0x10) <
                                                                 '\0'),CONCAT11(-((char)((ulong)
                                                  lVar14 >> 8) < '\0'),-((char)lVar14 < '\0'))))))))
  ;
  if (uVar9 == 0) {
    lVar14 = 8;
    do {
      uVar7 = uVar7 + lVar14 & uVar12;
      lVar5 = *(long *)((long)plVar13 + uVar7);
      uVar9 = CONCAT17(-(lVar5 < 0),
                       CONCAT16(-((char)((ulong)lVar5 >> 0x30) < '\0'),
                                CONCAT15(-((char)((ulong)lVar5 >> 0x28) < '\0'),
                                         CONCAT14(-((char)((ulong)lVar5 >> 0x20) < '\0'),
                                                  CONCAT13(-((char)((ulong)lVar5 >> 0x18) < '\0'),
                                                           CONCAT12(-((char)((ulong)lVar5 >> 0x10) <
                                                                     '\0'),CONCAT11(-((char)((ulong)
                                                  lVar5 >> 8) < '\0'),-((char)lVar5 < '\0'))))))));
      lVar14 = lVar14 + 8;
    } while (uVar9 == 0);
  }
  uVar11 = *(ulong *)(param_1 + 0x30);
  uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar12;
  bVar2 = *(byte *)((long)plVar13 + uVar7);
  if ((char)bVar2 < '\0') {
    lVar14 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar14 = *plVar13;
    uVar7 = CONCAT17(-(lVar14 < 0),
                     CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                              CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                       CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                                CONCAT13(-((char)((ulong)lVar14 >> 0x18) < '\0'),
                                                         CONCAT12(-((char)((ulong)lVar14 >> 0x10) <
                                                                   '\0'),CONCAT11(-((char)((ulong)
                                                  lVar14 >> 8) < '\0'),-((char)lVar14 < '\0'))))))))
    ;
    uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
    bVar2 = *(byte *)((long)plVar13 + uVar7);
    lVar14 = *(long *)(param_1 + 0x28);
  }
  uVar8 = bVar2 & 1;
  uVar9 = uVar11;
  if (((bVar2 & 1) != 0) && (lVar14 == 0)) {
    func_0x000108a8c40c((long *)(param_1 + 0x18),1,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),1);
    plVar13 = *(long **)(param_1 + 0x18);
    uVar12 = *(ulong *)(param_1 + 0x20);
    uVar7 = func_0x00010612b0d8(plVar13,uVar12,param_2);
    uVar8 = *(byte *)((long)plVar13 + uVar7) & 1;
    lVar14 = *(long *)(param_1 + 0x28);
    uVar9 = *(ulong *)(param_1 + 0x30);
  }
  bVar2 = (byte)(param_2 >> 0x38);
  *(byte *)((long)plVar13 + uVar7) = bVar2 >> 1;
  *(byte *)((long)plVar13 + (uVar7 - 8 & uVar12) + 8) = bVar2 >> 1;
  *(ulong *)(param_1 + 0x28) = lVar14 - (ulong)uVar8;
  *(ulong *)(param_1 + 0x30) = uVar9 + 1;
  plVar13[-1 - uVar7] = uVar11;
  func_0x00010612aa04(param_1,param_2,param_3,param_4);
  if (uVar11 < *(ulong *)(param_1 + 0x10)) {
    return *(long *)(param_1 + 8) + uVar11 * 0x90;
  }
  puVar6 = (undefined8 *)&UNK_10b4cf7d8;
  uVar3 = func_0x000108a07bdc(uVar11);
  func_0x0001061200fc(param_4);
  if ((*param_3 & 0x7fffffffffffffff) != 0) {
    _free(param_3[1]);
  }
  __Unwind_Resume(uVar3);
  auVar15 = func_0x000108a07bc4();
  piVar4 = auVar15._8_8_;
  plVar13 = auVar15._0_8_;
  uStack_58 = 0x10612adb0;
  cVar1 = *(char *)((long)piVar4 + 0x19);
  uStack_90 = uVar12;
  uStack_88 = uVar11;
  uStack_80 = param_2;
  uStack_78 = uVar3;
  uStack_70 = param_4;
  puStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((cVar1 == '\x01') && (*piVar4 != 1 || 1 < *(ulong *)(piVar4 + 2))) {
    plVar10 = *(long **)(piVar4 + 4);
    lVar14 = plVar10[2];
    if (*plVar10 == lVar14) {
      func_0x000108a8c380(plVar10,lVar14,1,1,1);
      lVar14 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar14) = 10;
    lVar14 = lVar14 + 1;
    plVar10[2] = lVar14;
    if ((ulong)(*plVar10 - lVar14) < 4) {
      func_0x000108a8c380(plVar10,lVar14,4,1,1);
      lVar14 = plVar10[2];
    }
    *(undefined4 *)(plVar10[1] + lVar14) = 0x20202020;
    lVar14 = lVar14 + 4;
  }
  else {
    plVar10 = *(long **)(piVar4 + 4);
    if ((*(byte *)(piVar4 + 6) & 1) == 0) goto LAB_10612ae8c;
    lVar14 = plVar10[2];
    if (*plVar10 == lVar14) {
      func_0x000108a8c380(plVar10,lVar14,1,1,1);
      lVar14 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar14) = 0x2c;
    lVar14 = lVar14 + 1;
    plVar10[2] = lVar14;
    if (*plVar10 == lVar14) {
      func_0x000108a8c380(plVar10,lVar14,1,1,1);
      lVar14 = plVar10[2];
    }
    *(undefined1 *)(plVar10[1] + lVar14) = 0x20;
    lVar14 = lVar14 + 1;
  }
  plVar10[2] = lVar14;
LAB_10612ae8c:
  *(undefined1 *)(piVar4 + 6) = 1;
  lVar14 = func_0x000106127690(&lStack_a8,*puVar6,plVar10,cVar1);
  if (lStack_a8 == -0x7ffffffffffffffc) {
    if ((cVar1 == '\0') || ((*piVar4 == 1 && (*(ulong *)(piVar4 + 2) < 2)))) {
      *plVar13 = -0x7ffffffffffffffc;
    }
    else {
      lVar5 = plVar10[2];
      if (*plVar10 == lVar5) {
        lVar14 = func_0x000108a8c380(plVar10,lVar5,1,1,1);
        lVar5 = plVar10[2];
      }
      *(undefined1 *)(plVar10[1] + lVar5) = 0x2c;
      plVar10[2] = lVar5 + 1;
      *plVar13 = -0x7ffffffffffffffc;
    }
  }
  else {
    *plVar13 = lStack_a8;
    plVar13[1] = lStack_a0;
    plVar13[2] = lStack_98;
  }
  return lVar14;
}

