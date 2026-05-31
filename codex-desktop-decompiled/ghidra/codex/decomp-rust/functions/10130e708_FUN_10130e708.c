
void FUN_10130e708(undefined8 *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  char cStack_120;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  undefined8 uStack_118;
  long lStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined1 uStack_61;
  
  cVar2 = *param_2;
  uVar12 = *(undefined8 *)(param_2 + 8);
  if (cVar2 != '\x16') {
    uStack_11f._0_3_ = (undefined3)*(undefined4 *)(param_2 + 1);
    uStack_11f._3_1_ = (undefined1)*(undefined4 *)(param_2 + 4);
    uStack_11b = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
    puStack_108 = *(ulong **)(param_2 + 0x18);
    lStack_110 = *(long *)(param_2 + 0x10);
    cStack_120 = cVar2;
    uStack_118 = uVar12;
    FUN_1004e07f8(&puStack_b0,&cStack_120);
    puVar14 = puStack_a8;
    puVar8 = puStack_b0;
    if (puStack_b0 != (ulong *)0x8000000000000000) {
      uVar12 = 0;
      puStack_78 = puStack_a8;
      puStack_80 = puStack_b0;
      puStack_70 = puStack_a0;
      puStack_a8 = puStack_a0;
      puStack_b0 = puVar14;
LAB_10130e978:
      FUN_100e077ec(&cStack_120);
      *param_1 = uVar12;
      param_1[1] = puVar8;
      param_1[3] = puStack_a8;
      param_1[2] = puStack_b0;
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    puStack_88 = (ulong *)0x2;
    puStack_80 = puStack_a8;
    func_0x000100cf0488(&puStack_88);
    lVar10 = lStack_110;
    if (cVar2 == '\x14') {
      lVar15 = (long)puStack_108 * 0x20;
      lVar1 = lStack_110 + lVar15;
      puVar8 = puStack_108;
      if ((ulong *)0x7fff < puStack_108) {
        puVar8 = (ulong *)0x8000;
      }
      if (puStack_108 == (ulong *)0x0) {
        puVar14 = (ulong *)0x0;
        puStack_c8 = (ulong *)0x0;
        puStack_c0 = (ulong *)0x8;
        puStack_b8 = (ulong *)0x0;
        lVar13 = lStack_110;
      }
      else {
        puStack_c0 = (ulong *)_malloc((long)puVar8 << 5);
        if (puStack_c0 == (ulong *)0x0) {
          func_0x0001087c9084(8,(long)puVar8 << 5);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10130ea60);
          (*pcVar7)();
        }
        puStack_b8 = (ulong *)0x0;
        puVar14 = (ulong *)((lVar15 - 0x20U >> 5) + 1);
        puStack_c8 = puVar8;
        do {
          func_0x00010079ba80(&puStack_88,lVar10);
          puVar8 = puStack_80;
          puVar6 = puStack_b8;
          puVar4 = puStack_c0;
          puVar3 = puStack_c0;
          if (puStack_88 == (ulong *)0x8000000000000003) goto joined_r0x00010130e888;
          puStack_98 = puStack_70;
          puStack_a0 = puStack_78;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          if (puStack_b8 == puStack_c8) {
            func_0x0001089a4bf8(&puStack_c8);
          }
          lVar10 = lVar10 + 0x20;
          puVar8 = puStack_c0 + (long)puVar6 * 4;
          puVar8[1] = (ulong)puStack_a8;
          *puVar8 = (ulong)puStack_b0;
          puVar8[3] = (ulong)puStack_98;
          puVar8[2] = (ulong)puStack_a0;
          puStack_b8 = (ulong *)((long)puVar6 + 1);
          lVar15 = lVar15 + -0x20;
          lVar13 = lVar1;
        } while (lVar15 != 0);
      }
      puVar3 = puStack_b8;
      puVar4 = puStack_c0;
      puVar5 = puStack_c8;
      puStack_d8 = puStack_c0;
      puStack_e0 = puStack_c8;
      puStack_d0 = puStack_b8;
      puVar8 = puStack_c0;
      if (puStack_c8 != (ulong *)0x8000000000000000) {
        uVar11 = lVar1 - lVar13;
        if (uVar11 == 0) {
          puStack_f0 = puStack_c0;
          puStack_f8 = puStack_c8;
          puStack_e8 = puStack_b8;
          puStack_a8 = puStack_b8;
          puStack_b0 = puStack_c0;
          uVar12 = 1;
          puVar8 = puStack_c8;
          goto LAB_10130e978;
        }
        puStack_88 = puVar14;
        puVar8 = (ulong *)FUN_1087e422c((long)puVar14 + (uVar11 >> 5),&puStack_88,&UNK_10b23a1b0);
        puVar14 = puVar4;
        for (; puVar3 != (ulong *)0x0; puVar3 = (ulong *)((long)puVar3 + -1)) {
          uVar9 = *puVar14;
          uVar11 = uVar9 ^ 0x8000000000000000;
          if (-1 < (long)uVar9) {
            uVar11 = 1;
          }
          if ((uVar11 == 0) || (uVar11 != 1)) {
            if (puVar14[1] != 0) {
              lVar10 = 0x10;
              goto LAB_10130ea08;
            }
          }
          else if (uVar9 != 0) {
            lVar10 = 8;
LAB_10130ea08:
            _free(*(undefined8 *)((long)puVar14 + lVar10));
          }
          puVar14 = puVar14 + 4;
        }
joined_r0x00010130e8e4:
        if (puVar5 != (ulong *)0x0) {
          _free(puVar4);
        }
      }
    }
    else {
      puVar8 = (ulong *)FUN_108855c40(&cStack_120,&uStack_61,&UNK_10b213728);
    }
    uStack_100 = 2;
    puStack_f8 = puVar8;
    func_0x000100cf0488(&uStack_100);
    uVar12 = FUN_1088561c0(&UNK_108cae276,0x46);
    FUN_100e077ec(&cStack_120);
  }
  *param_1 = 2;
  param_1[1] = uVar12;
  return;
joined_r0x00010130e888:
  puVar5 = puStack_c8;
  if (puVar6 == (ulong *)0x0) goto joined_r0x00010130e8e4;
  uVar9 = *puVar3;
  uVar11 = uVar9 ^ 0x8000000000000000;
  if (-1 < (long)uVar9) {
    uVar11 = 1;
  }
  if ((uVar11 == 0) || (uVar11 != 1)) {
    if (puVar3[1] != 0) {
      lVar10 = 0x10;
      goto LAB_10130e894;
    }
  }
  else if (uVar9 != 0) {
    lVar10 = 8;
LAB_10130e894:
    _free(*(undefined8 *)((long)puVar3 + lVar10));
  }
  puVar3 = puVar3 + 4;
  puVar6 = (ulong *)((long)puVar6 + -1);
  goto joined_r0x00010130e888;
}

