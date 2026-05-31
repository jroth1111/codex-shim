
void FUN_100f38238(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x25;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_80 [32];
  
  lVar12 = *param_2;
  if (lVar12 != 0) {
    lVar14 = param_2[1];
    lVar4 = param_3[1];
    uVar5 = param_3[2];
    do {
      uVar7 = *(ushort *)(lVar12 + 0x21a);
      lVar11 = (long)(ulong)uVar7 * 0x18;
      plVar13 = (long *)0xffffffffffffffff;
      lVar9 = lVar12 + 8;
      do {
        plStack_88 = (long *)(ulong)uVar7;
        if (lVar11 == 0) goto LAB_100f382e0;
        uVar6 = *(ulong *)(lVar9 + 0x10);
        uVar2 = uVar5;
        if (uVar6 <= uVar5) {
          uVar2 = uVar6;
        }
        iVar8 = _memcmp(lVar4,*(undefined8 *)(lVar9 + 8),uVar2);
        lVar3 = uVar5 - uVar6;
        if (iVar8 != 0) {
          lVar3 = (long)iVar8;
        }
        cVar1 = 0 < lVar3;
        if (lVar3 < 0) {
          cVar1 = -1;
        }
        lVar11 = lVar11 + -0x18;
        plVar13 = (long *)((long)plVar13 + 1);
        lVar9 = lVar9 + 0x18;
      } while (cVar1 == '\x01');
      plStack_88 = plVar13;
      if (cVar1 == '\0') {
        param_2 = plVar13;
        if (*param_3 != 0) {
          _free(lVar4);
        }
        goto LAB_100f38328;
      }
LAB_100f382e0:
      if (lVar14 == 0) goto LAB_100f38364;
      lVar12 = *(long *)(lVar12 + (long)plStack_88 * 8 + 0x220);
      lVar14 = lVar14 + -1;
    } while( true );
  }
  lStack_b8 = *param_3;
  lStack_98 = lVar12;
  lVar12 = param_3[1];
  uStack_a8 = param_3[2];
  plStack_88 = unaff_x25;
joined_r0x000100f3831c:
  if (lStack_b8 == -0x8000000000000000) {
LAB_100f38328:
    lVar12 = lVar12 + (long)param_2 * 0x18;
    uVar17 = *(undefined8 *)(lVar12 + 0x118);
    uVar15 = *(undefined8 *)(lVar12 + 0x110);
    uVar10 = *(undefined8 *)(lVar12 + 0x120);
    uVar18 = param_4[1];
    uVar16 = *param_4;
    *(undefined8 *)(lVar12 + 0x120) = param_4[2];
    *(undefined8 *)(lVar12 + 0x118) = uVar18;
    *(undefined8 *)(lVar12 + 0x110) = uVar16;
    param_1[1] = uVar17;
    *param_1 = uVar15;
    param_1[2] = uVar10;
  }
  else {
    uStack_90 = 0;
    lStack_b0 = lVar12;
    plStack_a0 = param_2;
    FUN_100f3cb90(auStack_80,&lStack_b8,param_4);
    *param_1 = 0x8000000000000000;
  }
  return;
LAB_100f38364:
  lStack_b8 = *param_3;
  lStack_98 = lVar12;
  lVar12 = lVar4;
  uStack_a8 = uVar5;
  goto joined_r0x000100f3831c;
}

