
undefined8
__ZN10codex_core15context_manager7history14ContextManager24replace_last_turn_images17h047781f21f473a75E
          (long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar11;
  
  lVar4 = *(long *)(param_1 + 0x1e0) * -0xc0;
  plVar13 = (long *)(*(long *)(param_1 + 0x1d8) + *(long *)(param_1 + 0x1e0) * 0xc0);
  do {
    plVar7 = plVar13;
    plVar13 = plVar7 + -0x18;
    if (lVar4 == 0) {
      return 0;
    }
    if (*plVar13 == 7) break;
    iVar3 = __ZN10codex_core15context_manager7history21is_user_turn_boundary17h2d78a4a7b7fd1ac3E
                      (plVar13);
    lVar4 = lVar4 + 0xc0;
  } while (iVar3 == 0);
  if ((*plVar13 != 7) || ((*(uint *)(plVar7 + -0x17) & 1) == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    lVar4 = 1;
    _memcpy(1,param_2,0);
    if (plVar7[-0x14] != 0) {
      lVar4 = 0;
      plVar13 = (long *)plVar7[-0x15];
      plVar7 = plVar13 + plVar7[-0x14] * 4;
      do {
        iVar3 = (int)lVar4;
        plVar14 = plVar13;
        while( true ) {
          plVar13 = plVar14 + 4;
          if (-1 < *plVar14) break;
          plVar14 = plVar13;
          lVar4 = 1;
          if (plVar13 == plVar7) goto LAB_102d4d380;
        }
        if (*plVar14 != 0) {
          _free(plVar14[1]);
        }
        plVar13 = plVar14 + 4;
        plVar14[1] = 0;
        *plVar14 = -0x8000000000000000;
        lVar4 = 1;
        plVar14[2] = 1;
        plVar14[3] = 0;
      } while (plVar13 != plVar7);
      goto LAB_102d4d388;
    }
LAB_102d4d3a4:
    uVar6 = 0;
  }
  else {
    lVar4 = _malloc(param_3);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,param_3);
LAB_102d4d3d4:
      func_0x0001087c9084(1,param_3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d4d3e4);
      (*pcVar2)();
    }
    _memcpy(lVar4,param_2,param_3);
    if (plVar7[-0x14] == 0) {
      uVar6 = 0;
      goto LAB_102d4d3b4;
    }
    iVar3 = 0;
    puVar1 = (ulong *)plVar7[-0x15] + plVar7[-0x14] * 4;
    puVar10 = (ulong *)plVar7[-0x15];
    do {
      while (puVar11 = puVar10 + 4, -1 < (long)*puVar10) {
        uVar5 = _malloc(param_3);
        if (uVar5 == 0) goto LAB_102d4d3d4;
        _memcpy(uVar5,lVar4,param_3);
        uVar8 = *puVar10;
        uVar12 = uVar8 ^ 0x8000000000000000;
        if (-1 < (long)uVar8) {
          uVar12 = 1;
        }
        if ((uVar12 == 0) || (uVar12 != 1)) {
          if (puVar10[1] != 0) {
            lVar9 = 0x10;
            goto LAB_102d4d2bc;
          }
        }
        else if (uVar8 != 0) {
          lVar9 = 8;
LAB_102d4d2bc:
          _free(*(undefined8 *)((long)puVar10 + lVar9));
        }
        puVar11 = puVar10 + 4;
        *puVar10 = 0x8000000000000000;
        puVar10[1] = param_3;
        puVar10[2] = uVar5;
        puVar10[3] = param_3;
        iVar3 = 1;
        puVar10 = puVar11;
        if (puVar11 == puVar1) goto LAB_102d4d388;
      }
      puVar10 = puVar11;
    } while (puVar11 != puVar1);
LAB_102d4d380:
    if (iVar3 == 0) goto LAB_102d4d3a4;
LAB_102d4d388:
    lVar9 = *(long *)(param_1 + 0x1e8) + 1;
    if (*(long *)(param_1 + 0x1e8) == -1) {
      lVar9 = -1;
    }
    *(long *)(param_1 + 0x1e8) = lVar9;
    uVar6 = 1;
  }
  if (param_3 == 0) {
    return uVar6;
  }
LAB_102d4d3b4:
  _free(lVar4);
  return uVar6;
}

