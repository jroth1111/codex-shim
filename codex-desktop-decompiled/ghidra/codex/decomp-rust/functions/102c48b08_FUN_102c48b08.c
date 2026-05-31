
void FUN_102c48b08(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar14;
  uint uVar13;
  
  if (*(char *)(param_1 + 0x268) == *(char *)(param_1 + 0x4d8)) {
    uVar6 = *(ulong *)(param_1 + 0x298);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar10 = uVar6;
    if (uVar2 <= uVar6) {
      uVar10 = uVar2;
    }
    iVar4 = _memcmp(*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x20),uVar10);
    uVar10 = uVar6 - uVar2;
    if (iVar4 != 0) {
      uVar10 = (long)iVar4;
    }
    if (uVar10 == 0) {
      uVar6 = *(ulong *)(param_1 + 0x280);
      uVar2 = *(ulong *)(param_1 + 0x10);
      uVar10 = uVar6;
      if (uVar2 <= uVar6) {
        uVar10 = uVar2;
      }
      iVar4 = _memcmp(*(undefined8 *)(param_1 + 0x278),*(undefined8 *)(param_1 + 8),uVar10);
      uVar10 = uVar6 - uVar2;
      if (iVar4 != 0) {
        uVar10 = (long)iVar4;
      }
      uVar10 = uVar10 >> 0x3f;
      cVar5 = *(char *)(param_1 + 0x748) - *(char *)(param_1 + 0x9b8);
      goto joined_r0x000102c48c08;
    }
    uVar10 = uVar10 >> 0x3f;
    cVar5 = *(char *)(param_1 + 0x748) - *(char *)(param_1 + 0x9b8);
    if (cVar5 == '\0') goto LAB_102c48c0c;
LAB_102c48ba0:
    if (cVar5 == '\x01') {
      lVar14 = param_1 + uVar10 * 0x270;
      lVar11 = param_1 + (ulong)((uint)uVar10 ^ 1) * 0x270;
      goto LAB_102c48c4c;
    }
    lVar14 = param_1 + uVar10 * 0x270;
    lVar11 = param_1 + (ulong)((uint)uVar10 ^ 1) * 0x270;
LAB_102c48c94:
    lVar7 = 2;
    lVar9 = 0x750;
  }
  else {
    uVar10 = (ulong)((char)(*(char *)(param_1 + 0x268) - *(char *)(param_1 + 0x4d8)) != '\x01');
    cVar5 = *(char *)(param_1 + 0x748) - *(char *)(param_1 + 0x9b8);
joined_r0x000102c48c08:
    if (cVar5 != '\0') goto LAB_102c48ba0;
LAB_102c48c0c:
    uVar6 = *(ulong *)(param_1 + 0x778);
    uVar8 = *(ulong *)(param_1 + 0x508);
    uVar2 = uVar6;
    if (uVar8 <= uVar6) {
      uVar2 = uVar8;
    }
    iVar4 = _memcmp(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(param_1 + 0x500),uVar2);
    lVar9 = uVar6 - uVar8;
    if (iVar4 != 0) {
      lVar9 = (long)iVar4;
    }
    if (lVar9 == 0) {
      uVar6 = *(ulong *)(param_1 + 0x760);
      uVar8 = *(ulong *)(param_1 + 0x4f0);
      uVar2 = uVar6;
      if (uVar8 <= uVar6) {
        uVar2 = uVar8;
      }
      iVar4 = _memcmp(*(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x4e8),uVar2);
      lVar9 = uVar6 - uVar8;
      if (iVar4 != 0) {
        lVar9 = (long)iVar4;
      }
      lVar14 = param_1 + uVar10 * 0x270;
      lVar11 = param_1 + (ulong)((uint)uVar10 ^ 1) * 0x270;
      if (-1 < lVar9) goto LAB_102c48c4c;
      goto LAB_102c48c94;
    }
    lVar14 = param_1 + uVar10 * 0x270;
    lVar11 = param_1 + (ulong)((uint)uVar10 ^ 1) * 0x270;
    if (lVar9 < 0) goto LAB_102c48c94;
LAB_102c48c4c:
    lVar7 = 3;
    lVar9 = 0x4e0;
  }
  lVar9 = param_1 + lVar9;
  param_1 = param_1 + lVar7 * 0x270;
  cVar5 = *(char *)(lVar14 + 0x268) - *(char *)(lVar9 + 0x268);
  lVar7 = lVar9;
  if (cVar5 == -1) {
    uVar13 = 1;
    uVar12 = 1;
    cVar5 = *(char *)(lVar11 + 0x268) - *(char *)(param_1 + 0x268);
joined_r0x000102c48cf8:
    if (cVar5 != '\0') goto LAB_102c48d3c;
LAB_102c48d94:
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar6 = *(ulong *)(lVar11 + 0x28);
    uVar10 = uVar2;
    if (uVar6 <= uVar2) {
      uVar10 = uVar6;
    }
    iVar4 = _memcmp(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar11 + 0x20),uVar10);
    lVar1 = uVar2 - uVar6;
    if (iVar4 != 0) {
      lVar1 = (long)iVar4;
    }
    if (lVar1 != 0) {
      if (uVar12 == 0) {
        lVar7 = lVar14;
      }
      bVar3 = uVar12 == 0;
      if (-1 < lVar1) goto LAB_102c48dc8;
      goto LAB_102c48e24;
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar6 = *(ulong *)(lVar11 + 0x10);
    uVar10 = uVar2;
    if (uVar6 <= uVar2) {
      uVar10 = uVar6;
    }
    iVar4 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar11 + 8),uVar10);
    lVar1 = uVar2 - uVar6;
    if (iVar4 != 0) {
      lVar1 = (long)iVar4;
    }
    if (uVar12 == 0) {
      lVar7 = lVar14;
    }
    bVar3 = uVar12 == 0;
    if (lVar1 < 0) goto LAB_102c48e24;
LAB_102c48dc8:
    lVar1 = lVar11;
    if (bVar3) {
      lVar1 = lVar9;
      lVar14 = lVar11;
    }
    cVar5 = *(char *)(lVar14 + 0x268) - *(char *)(lVar1 + 0x268);
  }
  else {
    if (cVar5 == '\x01') {
      uVar13 = 0;
      uVar12 = 0;
      cVar5 = *(char *)(lVar11 + 0x268) - *(char *)(param_1 + 0x268);
      goto joined_r0x000102c48cf8;
    }
    uVar2 = *(ulong *)(lVar9 + 0x28);
    uVar6 = *(ulong *)(lVar14 + 0x28);
    uVar10 = uVar2;
    if (uVar6 <= uVar2) {
      uVar10 = uVar6;
    }
    iVar4 = _memcmp(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar14 + 0x20),uVar10);
    lVar1 = uVar2 - uVar6;
    if (iVar4 != 0) {
      lVar1 = (long)iVar4;
    }
    if (lVar1 != 0) {
      uVar12 = (uint)((ulong)lVar1 >> 0x20);
      uVar13 = uVar12 >> 0x1f;
      uVar12 = uVar12 >> 0x1f;
      cVar5 = *(char *)(lVar11 + 0x268) - *(char *)(param_1 + 0x268);
      goto joined_r0x000102c48cf8;
    }
    uVar2 = *(ulong *)(lVar9 + 0x10);
    uVar6 = *(ulong *)(lVar14 + 0x10);
    uVar10 = uVar2;
    if (uVar6 <= uVar2) {
      uVar10 = uVar6;
    }
    iVar4 = _memcmp(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar14 + 8),uVar10);
    uVar12 = (uint)(uVar2 - uVar6 >> 0x20);
    if (iVar4 != 0) {
      uVar12 = iVar4 >> 0x1f;
    }
    uVar12 = uVar12 >> 0x1f;
    cVar5 = *(char *)(lVar11 + 0x268) - *(char *)(param_1 + 0x268);
    uVar13 = uVar12;
    if (cVar5 == '\0') goto LAB_102c48d94;
LAB_102c48d3c:
    if (cVar5 == '\x01') {
      bVar3 = uVar13 == 0;
      if (bVar3) {
        lVar7 = lVar14;
      }
      goto LAB_102c48dc8;
    }
    bVar3 = uVar13 == 0;
    if (bVar3) {
      lVar7 = lVar14;
    }
LAB_102c48e24:
    if (bVar3) {
      lVar14 = lVar9;
    }
    cVar5 = *(char *)(lVar14 + 0x268) - *(char *)(param_1 + 0x268);
    lVar1 = param_1;
    param_1 = lVar11;
  }
  if (cVar5 != -1) {
    lVar9 = lVar1;
    if (cVar5 == '\x01') goto LAB_102c48eb0;
    uVar2 = *(ulong *)(lVar1 + 0x28);
    uVar6 = *(ulong *)(lVar14 + 0x28);
    uVar10 = uVar2;
    if (uVar6 <= uVar2) {
      uVar10 = uVar6;
    }
    iVar4 = _memcmp(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar14 + 0x20),uVar10);
    lVar11 = uVar2 - uVar6;
    if (iVar4 != 0) {
      lVar11 = (long)iVar4;
    }
    if (lVar11 == 0) {
      uVar2 = *(ulong *)(lVar1 + 0x10);
      uVar6 = *(ulong *)(lVar14 + 0x10);
      uVar10 = uVar2;
      if (uVar6 <= uVar2) {
        uVar10 = uVar6;
      }
      iVar4 = _memcmp(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar14 + 8),uVar10);
      lVar11 = uVar2 - uVar6;
      if (iVar4 != 0) {
        lVar11 = (long)iVar4;
      }
    }
    if (-1 < lVar11) goto LAB_102c48eb0;
  }
  lVar9 = lVar14;
  lVar14 = lVar1;
LAB_102c48eb0:
  _memcpy(param_2,lVar7,0x270);
  _memcpy(param_2 + 0x270,lVar14,0x270);
  _memcpy(param_2 + 0x4e0,lVar9,0x270);
                    /* WARNING: Could not recover jumptable at 0x000108aa9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_10b61b3a8)(param_2 + 0x750,param_1,0x270);
  return;
}

