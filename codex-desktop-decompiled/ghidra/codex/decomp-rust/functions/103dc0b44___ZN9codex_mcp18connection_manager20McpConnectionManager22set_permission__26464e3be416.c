
/* WARNING: Possible PIC construction at 0x000103ed6b70: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN9codex_mcp18connection_manager20McpConnectionManager22set_permission_profile17h4601d5069dc32cdeE
               (long param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar12;
  undefined1 *unaff_x22;
  undefined *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar12 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar12 + 0x10) == 0) {
    FUN_10897bf38(lVar12 + 0x10);
  }
  iVar6 = _pthread_mutex_lock();
  if (iVar6 != 0) {
    FUN_108a81ad4();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103ed6bd4);
    (*pcVar4)();
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    if (*(char *)(lVar12 + 0x18) == '\0') {
      unaff_x24 = 0;
LAB_103ed6b50:
      unaff_x22 = (undefined1 *)(lVar12 + 0x18);
      unaff_x20 = (ulong *)(lVar12 + 0x20);
      uVar10 = *unaff_x20;
      bVar5 = uVar10 == 0x8000000000000000;
      if (uVar10 < 0x8000000000000001) {
        uVar10 = 0;
      }
      if (bVar5 || (uVar10 & 0x7fffffffffffffff) != 0) {
        uVar10 = *param_2;
        uVar11 = param_2[3];
        uVar9 = param_2[2];
        *(ulong *)(lVar12 + 0x28) = param_2[1];
        *unaff_x20 = uVar10;
        *(ulong *)(lVar12 + 0x38) = uVar11;
        *(ulong *)(lVar12 + 0x30) = uVar9;
        *(ulong *)(lVar12 + 0x40) = param_2[4];
        if ((((unaff_x24 & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar10 = func_0x000108a82c0c(), (uVar10 & 1) == 0)) {
          *unaff_x22 = 1;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(*(undefined8 *)(lVar12 + 0x10));
        return;
      }
      unaff_x30 = 0x103ed6b74;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      puVar8 = unaff_x20;
      unaff_x19 = param_2;
      unaff_x21 = lVar12;
      unaff_x23 = &__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
      unaff_x29 = puVar2;
      goto SUB_103dc0b44;
    }
LAB_103ed6b04:
    if (((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0) && (uVar10 = func_0x000108a82c0c(), (uVar10 & 1) == 0)) {
      *(undefined1 *)(lVar12 + 0x18) = 1;
    }
  }
  else {
    uVar7 = func_0x000108a82c0c();
    if (*(char *)(lVar12 + 0x18) == '\0') {
      unaff_x24 = (ulong)(uVar7 ^ 1);
      goto LAB_103ed6b50;
    }
    if (uVar7 != 0) goto LAB_103ed6b04;
  }
  _pthread_mutex_unlock(*(undefined8 *)(lVar12 + 0x10));
  uVar10 = *param_2;
  bVar5 = uVar10 == 0x8000000000000000;
  if (uVar10 < 0x8000000000000001) {
    uVar10 = 0;
  }
  if ((bVar5) || (puVar8 = param_2, (uVar10 & 0x7fffffffffffffff) != 0)) {
    return;
  }
SUB_103dc0b44:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = (ulong *)puVar8[1];
  uVar10 = puVar8[2];
  puVar1 = puVar3;
  do {
    if (uVar10 == 0) {
      if (*puVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(puVar3);
        return;
      }
      return;
    }
    uVar9 = *puVar1;
    lVar12 = uVar9 + 0x7ffffffffffffffb;
    if (uVar9 < 0x8000000000000005) {
      lVar12 = 2;
    }
    if ((lVar12 == 0) || (lVar12 == 1)) {
      uVar9 = puVar1[1];
joined_r0x000103dc0b84:
      if (uVar9 != 0) {
        lVar12 = 0x10;
LAB_103dc0b8c:
        _free(*(undefined8 *)((long)puVar1 + lVar12));
      }
    }
    else {
      uVar11 = uVar9 ^ 0x8000000000000000;
      if (-1 < (long)uVar9) {
        uVar11 = 5;
      }
      if (uVar11 < 5) {
        if (uVar11 == 2) {
          uVar9 = puVar1[1] & 0x7fffffffffffffff;
          goto joined_r0x000103dc0b84;
        }
      }
      else {
        if (uVar9 != 0) {
          _free(puVar1[1]);
        }
        if ((puVar1[3] & 0x7fffffffffffffff) != 0) {
          lVar12 = 0x20;
          goto LAB_103dc0b8c;
        }
      }
    }
    puVar1 = puVar1 + 7;
    uVar10 = uVar10 - 1;
  } while( true );
}

