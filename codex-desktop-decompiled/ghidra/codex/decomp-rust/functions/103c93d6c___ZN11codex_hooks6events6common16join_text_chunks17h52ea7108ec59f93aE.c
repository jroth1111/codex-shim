
void __ZN11codex_hooks6events6common16join_text_chunks17h52ea7108ec59f93aE
               (ulong *param_1,long *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar16 = param_2[2];
  if (lVar16 != 0) {
    lVar9 = param_2[1];
    lVar7 = lVar16 * 0x18;
    uVar17 = lVar7 - 0x18;
    uVar10 = (uVar17 >> 3) * 0x5555555555555556;
    lVar8 = lVar9;
    do {
      if (lVar7 == 0) {
        if ((long)uVar10 < 0) {
          uVar5 = 0;
LAB_103c93df8:
          func_0x0001087c9084(uVar5,uVar10);
          goto LAB_103c93f5c;
        }
        if (uVar10 == 0) {
          uStack_70 = 1;
          lStack_68 = 0;
          uVar5 = *(undefined8 *)(lVar9 + 8);
          uVar14 = *(ulong *)(lVar9 + 0x10);
          uStack_78 = uVar10;
          if (uVar14 != 0) {
LAB_103c93f60:
            lStack_68 = 0;
            uStack_78 = uVar10;
            FUN_1089762d4(&uStack_78,0,uVar14,1,1);
          }
        }
        else {
          uVar6 = _malloc(uVar10);
          if (uVar6 == 0) {
            uVar5 = 1;
            goto LAB_103c93df8;
          }
          lStack_68 = 0;
          uVar5 = *(undefined8 *)(lVar9 + 8);
          uVar14 = *(ulong *)(lVar9 + 0x10);
          uStack_78 = uVar10;
          uStack_70 = uVar6;
          if (uVar10 < uVar14) goto LAB_103c93f60;
        }
        lVar8 = lStack_68;
        uVar13 = uStack_70;
        _memcpy(uStack_70 + lStack_68,uVar5,uVar14);
        uVar6 = uVar10 - (lVar8 + uVar14);
        if (lVar16 == 1) goto LAB_103c93f0c;
        puVar12 = (undefined2 *)(uVar13 + lVar8 + uVar14);
        puVar15 = (ulong *)(lVar9 + 0x28);
        goto LAB_103c93ed8;
      }
      puVar15 = (ulong *)(lVar8 + 0x10);
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -0x18;
      bVar4 = CARRY8(*puVar15,uVar10);
      uVar10 = *puVar15 + uVar10;
    } while (!bVar4);
    func_0x000108a079f0(&UNK_108db8eed,0x35,&UNK_10b2f2a78);
LAB_103c93f5c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c93f60);
    (*pcVar3)();
  }
  *param_1 = 0x8000000000000000;
  lVar9 = param_2[1];
  goto LAB_103c93e10;
  while( true ) {
    uVar13 = puVar15[-1];
    uVar2 = *puVar15;
    *puVar12 = 0xa0a;
    uVar6 = uVar14 - uVar2;
    if (uVar14 < uVar2) goto LAB_103c93f44;
    puVar15 = puVar15 + 3;
    puVar1 = puVar12 + 1;
    puVar12 = (undefined2 *)((long)puVar1 + uVar2);
    _memcpy(puVar1,uVar13);
    uVar17 = uVar17 - 0x18;
    uVar13 = uStack_70;
    if (uVar17 == 0) break;
LAB_103c93ed8:
    uVar14 = uVar6 - 2;
    if (uVar6 < 2) {
LAB_103c93f44:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108db8edf,0x13,&UNK_10b2f2a90);
      goto LAB_103c93f5c;
    }
  }
LAB_103c93f0c:
  *param_1 = uStack_78;
  param_1[1] = uVar13;
  param_1[2] = uVar10 - uVar6;
  puVar11 = (undefined8 *)(lVar9 + 8);
  do {
    if (puVar11[-1] != 0) {
      _free(*puVar11);
    }
    puVar11 = puVar11 + 3;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
LAB_103c93e10:
  if (*param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar9);
  return;
}

