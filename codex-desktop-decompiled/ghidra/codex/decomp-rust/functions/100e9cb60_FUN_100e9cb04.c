
void FUN_100e9cb04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if (param_1 == 0) {
    return;
  }
  puVar5 = (undefined8 *)_malloc(0x48);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 1;
    *puVar5 = 1;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    puVar5[6] = 0x3ffffffe;
    *(undefined4 *)(puVar5 + 7) = 0x1fffffff;
    puVar5[8] = 0xffffffffffffffff;
    return;
  }
  auVar13 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
  lVar9 = auVar13._8_8_;
  plVar6 = auVar13._0_8_;
  lVar12 = *(long *)(lVar9 + 0x30);
  lVar2 = *(long *)(lVar9 + 0x38);
  if (lVar2 == 0) {
    lVar7 = 1;
    _memcpy(1,lVar12,0);
    uVar1 = *(undefined8 *)(lVar9 + 0x18);
    lVar12 = *(long *)(lVar9 + 0x20);
joined_r0x000100e9cbac:
    if (lVar12 == 0) {
      lVar8 = 1;
    }
    else {
      lVar8 = _malloc(lVar12);
      if (lVar8 == 0) goto LAB_100e9cce0;
    }
    _memcpy(lVar8,uVar1,lVar12);
    uVar10 = *(ulong *)(lVar9 + 0x128);
    if ((((*(byte *)(lVar9 + 0x131) & 1) == 0) && (uVar10 < *(ulong *)(lVar9 + 0xd8))) &&
       (lVar11 = *(long *)(lVar9 + 0xd0) + uVar10 * 0x90,
       *(long *)(lVar11 + 0x70) != -0x8000000000000000)) {
      bVar4 = *(long *)(lVar11 + 0x80) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((uVar10 < *(ulong *)(lVar9 + 0xd8)) &&
       (lVar11 = *(long *)(lVar9 + 0xd0) + uVar10 * 0x90,
       *(long *)(lVar11 + 0x70) != -0x8000000000000000)) {
      uVar1 = *(undefined8 *)(lVar11 + 0x78);
      lVar11 = *(long *)(lVar11 + 0x80);
      if (lVar11 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar11);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar11);
          goto LAB_100e9ccfc;
        }
      }
      _memcpy(lVar9,uVar1,lVar11);
    }
    else {
      lVar11 = -0x8000000000000000;
    }
    plVar6[4] = lVar8;
    plVar6[5] = lVar12;
    *plVar6 = lVar2;
    plVar6[1] = lVar7;
    plVar6[2] = lVar2;
    plVar6[3] = lVar12;
    *(bool *)(plVar6 + 6) = bVar4;
    plVar6[7] = lVar11;
    plVar6[8] = lVar9;
    plVar6[9] = lVar11;
    return;
  }
  lVar7 = _malloc(lVar2);
  if (lVar7 != 0) {
    _memcpy(lVar7,lVar12,lVar2);
    uVar1 = *(undefined8 *)(lVar9 + 0x18);
    lVar12 = *(long *)(lVar9 + 0x20);
    goto joined_r0x000100e9cbac;
  }
  func_0x0001087c9084(1,lVar2);
LAB_100e9cce0:
  func_0x0001087c9084(1,lVar12);
LAB_100e9ccfc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100e9cd00);
  (*pcVar3)();
}

