
void __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  
  uStack_28 = *param_1;
  uStack_20 = param_1[1];
  puStack_18 = param_1;
  func_0x00010603625c(&uStack_28);
  uStack_38 = 0x1060213a0;
  puVar8 = &UNK_109bd56ee;
  uVar7 = 0x44;
  puStack_40 = &stack0xfffffffffffffff0;
  do {
    while( true ) {
      uVar4 = uVar7;
      if (0x7ffffffe < uVar7) {
        uVar4 = 0x7fffffff;
      }
      uVar4 = _write(2,puVar8,uVar4);
      if (uVar4 == 0xffffffffffffffff) break;
      if (uVar4 == 0) {
        puVar8 = &UNK_10b4ad878;
LAB_10602143c:
        if (((ulong)puVar8 & 3) == 1) goto LAB_10602144c;
        goto LAB_106021448;
      }
      uVar1 = uVar7 - uVar4;
      if (uVar7 < uVar4) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                  (uVar4,uVar7,uVar7,&UNK_10b4ad890);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x106021428);
        (*pcVar3)();
      }
      puVar8 = puVar8 + uVar4;
      uVar7 = uVar1;
      if (uVar1 == 0) goto LAB_106021448;
    }
    piVar5 = (int *)___error();
    if (*piVar5 != 4) {
      puVar8 = (undefined *)((long)*piVar5 << 0x20 | 2);
      goto LAB_10602143c;
    }
  } while (uVar7 != 0);
LAB_106021448:
  __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_10602144c:
  puVar9 = (undefined8 *)(puVar8 + -1);
  uVar10 = *puVar9;
  puVar12 = *(undefined8 **)(puVar8 + 7);
  if ((code *)*puVar12 != (code *)0x0) {
    (*(code *)*puVar12)(uVar10);
  }
  if (puVar12[1] != 0) {
    _free(uVar10);
  }
  _free(puVar9);
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  if (puVar12[1] != 0) {
    _free(uVar10);
  }
  _free(puVar9);
  func_0x000108a07d00();
  plVar6 = (long *)func_0x000108a07d00();
  uStack_68 = 0x1060214a0;
  uVar7 = plVar6[1];
  if (uVar7 == 0) {
    return;
  }
  lVar11 = *plVar6;
  uVar4 = *(ulong *)(lVar11 + 0x10);
  lVar2 = uVar4 - uVar7;
  uStack_80 = uVar10;
  puStack_78 = puVar9;
  ppuStack_70 = &puStack_40;
  if (uVar7 <= uVar4) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    if (lVar2 == 0) {
      return;
    }
    _memmove(*(long *)(lVar11 + 8),*(long *)(lVar11 + 8) + uVar7,lVar2);
    *(long *)(lVar11 + 0x10) = lVar2;
    return;
  }
  plVar6 = (long *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                             (0,uVar7,uVar4,&UNK_10b4ae9b0);
  uStack_88 = 0x1060214fc;
  lStack_b0 = *plVar6;
  lStack_a8 = plVar6[1];
  uStack_a0 = plVar6[2];
  pppuStack_90 = &ppuStack_70;
  if (uStack_a0 < 0x10) {
    if (uStack_a0 != 0) {
      uStack_98 = 0;
      do {
        if (*(char *)(lStack_a8 + uStack_98) == '\0') goto LAB_1060215e4;
        uStack_98 = uStack_98 + 1;
      } while (uStack_a0 != uStack_98);
    }
    goto LAB_1060215cc;
  }
  uVar7 = (lStack_a8 + 7U & 0xfffffffffffffff8) - lStack_a8;
  if (uVar7 == 0) {
LAB_106021550:
    do {
      uVar4 = *(ulong *)(lStack_a8 + uVar7);
      uVar1 = ((ulong *)(lStack_a8 + uVar7))[1];
      if ((((0x101010101010100 - uVar4 | uVar4) & (0x101010101010100 - uVar1 | uVar1) ^
           0xffffffffffffffff) & 0x8080808080808080) != 0) break;
      uVar7 = uVar7 + 0x10;
    } while (uVar7 <= uStack_a0 - 0x10);
  }
  else {
    uStack_98 = 0;
    do {
      if (*(char *)(lStack_a8 + uStack_98) == '\0') goto LAB_1060215e4;
      uStack_98 = uStack_98 + 1;
    } while (uVar7 != uStack_98);
    if (uVar7 <= uStack_a0 - 0x10) goto LAB_106021550;
  }
  for (; uStack_a0 != uVar7; uVar7 = uVar7 + 1) {
    uStack_98 = uVar7;
    if (*(char *)(lStack_a8 + uVar7) == '\0') {
LAB_1060215e4:
      if (lStack_b0 == -0x8000000000000000) {
        return;
      }
      func_0x000108a07a3c(&UNK_109bd576f,0x2f,&lStack_b0,&UNK_10b4ae650,&UNK_10b4ad630);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10602162c);
      (*pcVar3)();
    }
  }
LAB_1060215cc:
  __ZN5alloc3ffi5c_str7CString19_from_vec_unchecked17h1836188feadd5beaE(&lStack_b0);
  return;
}

