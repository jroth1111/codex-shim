
undefined8 * FUN_102d4ec78(ulong *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  
  lVar9 = 2;
  if (1 < *param_1) {
    lVar9 = *param_1 - 2;
  }
  if (lVar9 == 1) {
    if (param_1[10] != 0x8000000000000000) {
      lVar9 = 0x50;
      goto LAB_102d4ee2c;
    }
  }
  else if ((lVar9 == 0xb) || ((lVar9 == 0xd && (param_1[1] != 0x8000000000000000)))) {
    lVar9 = 8;
LAB_102d4ee2c:
    uVar10 = *(ulong *)((long)param_1 + lVar9 + 0x10);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar10;
    uVar10 = uVar10 * 3;
    if (SUB168(auVar13 * ZEXT816(3),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)0x0;
    if (0x289 < uVar10 >> 2) {
      puVar4 = (undefined8 *)((uVar10 >> 2) - 0x28a);
    }
    return puVar4;
  }
  lStack_1a8 = _malloc(0x80);
  if (lStack_1a8 != 0) {
    uStack_1b0 = 0x80;
    puStack_198 = &uStack_1b0;
    uStack_1a0 = 0;
                    /* WARNING: Could not recover jumptable at 0x000102d4ed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)
             (*(code *)(&UNK_102d4ed20 + (ulong)*(ushort *)(&UNK_108d4e698 + lVar9 * 2) * 4))();
    return puVar4;
  }
  uVar5 = func_0x0001087c9084(1,0x80);
  if (*(long *)(unaff_x22 + 8) != 0) {
    _free();
  }
  _free();
  _free();
  auVar13 = __Unwind_Resume(uVar5);
  puVar4 = auVar13._0_8_;
  uVar10 = param_4[2];
  if (uVar10 == 0) {
    *puVar4 = 0x11;
    if (*param_4 == 0) {
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(param_4[1]);
    return puVar4;
  }
  lVar7 = *param_4;
  lVar2 = param_4[1];
  if (uVar10 >> 0x3a == 0) {
    lVar9 = uVar10 << 5;
    lVar6 = _malloc(lVar9);
    if (lVar6 != 0) {
      lVar11 = 0;
      lVar9 = 0;
      puVar8 = (undefined8 *)(lVar6 + 8);
      do {
        puVar1 = (undefined8 *)(lVar2 + lVar11);
        puVar8[-1] = 0x8000000000000000;
        uVar12 = puVar1[1];
        uVar5 = *puVar1;
        puVar8[2] = puVar1[2];
        puVar8[1] = uVar12;
        *puVar8 = uVar5;
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x18;
        puVar8 = puVar8 + 4;
      } while (uVar10 * 0x18 - lVar11 != 0);
      if (lVar7 != 0) {
        _free(lVar2);
      }
      lVar7 = _malloc(param_3);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)_memcpy(lVar7,auVar13._8_8_,param_3);
        puVar4[5] = lVar6;
        puVar4[4] = uVar10;
        *puVar4 = 2;
        puVar4[1] = param_3;
        puVar4[2] = lVar7;
        puVar4[3] = param_3;
        puVar4[6] = lVar9;
        puVar4[7] = 0x8000000000000000;
        *(undefined1 *)(puVar4 + 10) = 2;
        return puVar8;
      }
      func_0x0001087c9084(1,param_3);
      goto LAB_102d50ae0;
    }
    uVar5 = 8;
  }
  else {
    uVar5 = 0;
  }
  func_0x0001087c9084(uVar5,lVar9);
LAB_102d50ae0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d50ae4);
  (*pcVar3)();
}

