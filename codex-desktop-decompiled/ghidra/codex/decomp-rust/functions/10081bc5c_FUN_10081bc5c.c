
long * FUN_10081bc5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long *plStack_58;
  
  uVar10 = *(ulong *)(param_1 + 0x178);
  if (uVar10 < 0x8000000000000003) {
    uVar3 = uVar10;
    if (uVar10 < 0x8000000000000001) {
      uVar3 = 0;
    }
    if ((uVar3 & 0x7fffffffffffffff) == 0) {
      uStack_a8 = 3;
      puStack_a0 = &UNK_108cb0ee3;
      uStack_98 = 5;
      FUN_100813d9c(param_1 + 0x48,&uStack_a8);
      uVar10 = *(ulong *)(param_1 + 0x178);
    }
    else if (((uVar3 & 0x7fffffffffffffff) == 1) && (lVar9 = *(long *)(param_1 + 0x180), lVar9 != 0)
            ) {
      *(undefined8 *)(param_1 + 0x178) = 0x8000000000000006;
      plVar6 = (long *)_malloc(0x18);
      if (plVar6 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      }
      else {
        *plVar6 = 0;
        *(undefined2 *)(plVar6 + 2) = 0x101;
        plStack_58 = plVar6;
        plVar7 = (long *)_malloc(8);
        if (plVar7 != (long *)0x0) {
          *plVar7 = lVar9;
          *plVar6 = (long)plVar7;
          plVar6[1] = (long)&UNK_10b2386b8;
          return plVar6;
        }
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10081be08);
      (*pcVar5)();
    }
    uVar3 = uVar10;
    if (uVar10 < 0x8000000000000001) {
      uVar3 = 0;
    }
    uVar1 = 0x8000000000000006;
    if ((uVar3 & 0x7fffffffffffffff) != 2) {
      uVar1 = 0x8000000000000005;
    }
    uVar2 = 0x8000000000000006;
    if ((*(byte *)(param_1 + 400) & 1) == 0) {
      uVar2 = uVar1;
    }
    if (uVar10 < 0x8000000000000003) {
      uVar3 = uVar10;
      if (uVar10 < 0x8000000000000001) {
        uVar3 = 0;
      }
      if (((uVar3 & 0x7fffffffffffffff) == 0) && (uVar10 != 0x8000000000000000)) {
        lVar4 = *(long *)(param_1 + 0x180);
        lVar9 = *(long *)(param_1 + 0x188) + 1;
        lVar8 = lVar4 + 0x18;
        while (lVar9 = lVar9 + -1, lVar9 != 0) {
          (**(code **)(*(long *)(lVar8 + -0x18) + 0x20))
                    (lVar8,*(undefined8 *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8));
          lVar8 = lVar8 + 0x28;
        }
        if (uVar10 != 0) {
          _free(lVar4);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x178) = uVar2;
  }
  return (long *)0x0;
}

