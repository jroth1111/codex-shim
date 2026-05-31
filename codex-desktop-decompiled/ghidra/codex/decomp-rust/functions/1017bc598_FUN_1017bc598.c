
void FUN_1017bc598(ulong *param_1,char *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  char cVar5;
  code *pcVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  char acStack_88 [40];
  
  if (*param_2 != '\x14') {
    uVar13 = FUN_10888066c(param_2,&puStack_108,&UNK_10b2588f0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar13;
    return;
  }
  uVar3 = *(ulong *)(param_2 + 8);
  puVar4 = *(ulong **)(param_2 + 0x10);
  uVar9 = *(ulong *)(param_2 + 0x18);
  puVar2 = puVar4 + uVar9 * 4;
  lStack_e8 = 0;
  uVar13 = uVar9;
  if (0x7fff < uVar9) {
    uVar13 = 0x8000;
  }
  puStack_108 = puVar4;
  uStack_f8 = uVar3;
  puStack_f0 = puVar2;
  if (uVar9 == 0) {
    uStack_e0 = 0;
    puStack_d8 = (ulong *)0x8;
    uStack_d0 = 0;
    puVar7 = puVar4;
    lVar11 = lStack_e8;
  }
  else {
    puStack_100 = puVar4;
    puStack_d8 = (ulong *)_malloc(uVar13 << 5);
    if (puStack_d8 == (ulong *)0x0) {
      func_0x0001087c9084(8,uVar13 << 5);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1017bc8b4);
      (*pcVar6)();
    }
    uStack_d0 = 0;
    cVar5 = (char)*puVar4;
    uStack_e0 = uVar13;
    if (cVar5 == '\x16') {
      puVar7 = puVar4 + 4;
      lVar11 = 0;
    }
    else {
      lVar12 = 0;
      puVar14 = (undefined8 *)((ulong)acStack_88 | 1);
      uVar9 = uVar9 * 0x20 - 0x20;
      uVar13 = uVar9 >> 5;
      puVar8 = puVar4 + 4;
      do {
        uVar15 = *(undefined8 *)((long)puVar8 + -0x1f);
        puVar14[1] = *(undefined8 *)((long)puVar8 + -0x17);
        *puVar14 = uVar15;
        uVar10 = puVar8[-2];
        *(ulong *)((long)puVar14 + 0x17) = puVar8[-1];
        *(ulong *)((long)puVar14 + 0xf) = uVar10;
        acStack_88[0] = cVar5;
        func_0x0001017829ec(&uStack_a8,acStack_88);
        uVar10 = uStack_d0;
        puVar7 = puStack_d8;
        if (uStack_a8 == 0x8000000000000003) {
          lStack_e8 = lVar12 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_a0;
          puStack_100 = puVar8;
          puVar1 = puStack_d8;
          uVar13 = uStack_d0;
          goto joined_r0x0001017bc714;
        }
        uStack_b0 = uStack_90;
        uStack_b8 = uStack_98;
        uStack_c8 = uStack_a8;
        uStack_c0 = uStack_a0;
        if (uStack_d0 == uStack_e0) {
          func_0x0001089a4bf8(&uStack_e0);
        }
        puVar7 = puStack_d8 + uVar10 * 4;
        puVar7[1] = uStack_c0;
        *puVar7 = uStack_c8;
        puVar7[3] = uStack_b0;
        puVar7[2] = uStack_b8;
        uStack_d0 = uVar10 + 1;
        puVar7 = puVar2;
        lVar11 = uVar13 + 1;
        if (uVar9 == 0) break;
        puVar7 = puVar8 + 4;
        cVar5 = (char)*puVar8;
        uVar9 = uVar9 - 0x20;
        lVar12 = lVar12 + 1;
        puVar8 = puVar7;
        lVar11 = lVar12;
      } while (cVar5 != '\x16');
    }
  }
  lStack_e8 = lVar11;
  puVar8 = puVar7;
  param_1[1] = (ulong)puStack_d8;
  *param_1 = uStack_e0;
  param_1[2] = uStack_d0;
  uVar13 = *param_1;
  puStack_100 = puVar8;
  if (uVar13 != 0x8000000000000000) {
    puVar4 = (ulong *)param_1[1];
    uVar3 = param_1[2];
    uVar9 = FUN_1017aefb0(&puStack_108);
    if (uVar9 == 0) {
      return;
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    puVar2 = puVar4;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar10 = *puVar2;
      uVar9 = uVar10 ^ 0x8000000000000000;
      if (-1 < (long)uVar10) {
        uVar9 = 1;
      }
      if ((uVar9 == 0) || (uVar9 != 1)) {
        if (puVar2[1] != 0) {
          lVar11 = 0x10;
          goto LAB_1017bc80c;
        }
      }
      else if (uVar10 != 0) {
        lVar11 = 8;
LAB_1017bc80c:
        _free(*(undefined8 *)((long)puVar2 + lVar11));
      }
      puVar2 = puVar2 + 4;
    }
    goto joined_r0x0001017bc7e0;
  }
LAB_1017bc7bc:
  lVar11 = ((ulong)((long)puVar2 - (long)puVar8) >> 5) + 1;
  while (lVar11 = lVar11 + -1, uVar13 = uVar3, lVar11 != 0) {
    func_0x0001017a6a48(puVar8);
    puVar8 = puVar8 + 4;
  }
joined_r0x0001017bc7e0:
  if (uVar13 != 0) {
    _free(puVar4);
  }
  return;
joined_r0x0001017bc714:
  if (uVar13 == 0) goto LAB_1017bc76c;
  uVar10 = *puVar1;
  uVar9 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar9 = 1;
  }
  if ((uVar9 == 0) || (uVar9 != 1)) {
    if (puVar1[1] != 0) {
      lVar11 = 0x10;
      goto LAB_1017bc72c;
    }
  }
  else if (uVar10 != 0) {
    lVar11 = 8;
LAB_1017bc72c:
    _free(*(undefined8 *)((long)puVar1 + lVar11));
  }
  puVar1 = puVar1 + 4;
  uVar13 = uVar13 - 1;
  goto joined_r0x0001017bc714;
LAB_1017bc76c:
  if (uStack_e0 != 0) {
    _free(puVar7);
  }
  goto LAB_1017bc7bc;
}

