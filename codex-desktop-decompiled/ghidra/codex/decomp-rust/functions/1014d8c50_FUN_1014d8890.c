
undefined8 *
FUN_1014d8890(byte *param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  int *piVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *unaff_x19;
  long lVar17;
  undefined *puVar18;
  ulong unaff_x20;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long *plVar28;
  ulong unaff_x28;
  long lVar29;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 auStack_108 [3];
  ulong uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [4];
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar5 = auStack_90;
  puVar6 = auStack_90;
  puVar7 = auStack_90;
  puVar8 = auStack_90;
  if ((*param_1 & 1) == 0) {
    puVar26 = *(undefined8 **)(param_1 + 8);
    uVar23 = (ulong)*(uint *)(puVar26 + 4);
    if (param_1[1] == 1) {
      puVar22 = &UNK_108ca14f4;
      uVar21 = 1;
      do {
        while( true ) {
          uVar9 = uVar21;
          if (0x7ffffffe < uVar21) {
            uVar9 = 0x7fffffff;
          }
          uVar9 = _write(uVar23,puVar22,uVar9);
          if (uVar9 == 0xffffffffffffffff) break;
          if (uVar9 == 0) goto LAB_1014d8b94;
          uVar24 = uVar21 - uVar9;
          if (uVar21 < uVar9) goto LAB_1014d8be4;
          puVar22 = puVar22 + uVar9;
          uVar21 = uVar24;
          if (uVar24 == 0) goto LAB_1014d8998;
        }
        piVar14 = (int *)___error();
        lVar29 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_1014d8ba0;
        uVar24 = uVar21;
      } while (uVar21 != 0);
    }
    else {
      puVar22 = &UNK_108cc4022;
      uVar21 = 2;
      do {
        while( true ) {
          uVar9 = uVar21;
          if (0x7ffffffe < uVar21) {
            uVar9 = 0x7fffffff;
          }
          uVar9 = _write(uVar23,puVar22,uVar9);
          if (uVar9 == 0xffffffffffffffff) break;
          if (uVar9 == 0) goto LAB_1014d8b94;
          uVar24 = uVar21 - uVar9;
          if (uVar21 < uVar9) goto LAB_1014d8be4;
          puVar22 = puVar22 + uVar9;
          uVar21 = uVar24;
          if (uVar24 == 0) goto LAB_1014d8998;
        }
        piVar14 = (int *)___error();
        lVar29 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_1014d8ba0;
        uVar24 = uVar21;
      } while (uVar21 != 0);
    }
LAB_1014d8998:
    lVar27 = puVar26[2];
    uStack_8c = param_4;
    uStack_88 = param_2;
    uStack_80 = param_3;
    if ((lVar27 != 0) && (unaff_x28 = puVar26[1], unaff_x28 != 0)) {
      lVar17 = 0;
      puVar19 = (undefined *)*puVar26;
      do {
        lVar17 = lVar17 + 1;
        uVar23 = (ulong)*(uint *)(puVar26 + 4);
        puVar22 = puVar19;
        uVar21 = unaff_x28;
        do {
          while( true ) {
            uVar9 = uVar21;
            if (0x7ffffffe < uVar21) {
              uVar9 = 0x7fffffff;
            }
            uVar9 = _write(uVar23,puVar22,uVar9);
            if (uVar9 == 0xffffffffffffffff) break;
            if (uVar9 == 0) goto LAB_1014d8b94;
            uVar24 = uVar21 - uVar9;
            if (uVar21 < uVar9) goto LAB_1014d8be4;
            puVar22 = puVar22 + uVar9;
            uVar21 = uVar24;
            if (uVar24 == 0) goto LAB_1014d89c0;
          }
          piVar14 = (int *)___error();
          lVar29 = (long)*piVar14;
          if (*piVar14 != 4) goto LAB_1014d8ba0;
          uVar24 = uVar21;
        } while (uVar21 != 0);
LAB_1014d89c0:
      } while (lVar17 != lVar27);
    }
    param_1[1] = 2;
    puVar19 = (undefined *)FUN_100656df8(*(undefined4 *)(puVar26 + 4),uStack_88,uStack_80);
    if (puVar19 != (undefined *)0x0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
    uVar9 = (ulong)*(uint *)(puVar26 + 4);
    puVar19 = &UNK_108cc4020;
    puVar18 = (undefined *)0x7fffffff;
    uVar21 = 2;
    do {
      while( true ) {
        uVar10 = uVar21;
        if (0x7ffffffe < uVar21) {
          uVar10 = 0x7fffffff;
        }
        uVar10 = _write(uVar9,puVar19,uVar10);
        if (uVar10 == 0xffffffffffffffff) break;
        if (uVar10 == 0) goto LAB_1014d8bf8;
        uVar2 = uVar21 - uVar10;
        if (uVar21 < uVar10) {
          puVar11 = (undefined *)
                    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                              (uVar10,uVar21,uVar21,&UNK_10b233fe0);
          goto LAB_1014d8c3c;
        }
        puVar19 = puVar19 + uVar10;
        uVar21 = uVar2;
        if (uVar2 == 0) goto LAB_1014d8aa0;
      }
      piVar14 = (int *)___error();
      if (*piVar14 != 4) {
        puVar19 = (undefined *)((long)*piVar14 << 0x20 | 2);
        goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      }
    } while (uVar21 != 0);
LAB_1014d8aa0:
    uVar9 = (ulong)*(uint *)(puVar26 + 4);
    if ((uStack_8c & 1) == 0) {
      puVar18 = &UNK_108ca1574;
      uVar21 = 0x7fffffff;
      puVar19 = (undefined *)0x5;
      do {
        while( true ) {
          puVar11 = puVar19;
          if ((undefined *)0x7ffffffe < puVar19) {
            puVar11 = (undefined *)0x7fffffff;
          }
          puVar11 = (undefined *)_write(uVar9,puVar18,puVar11);
          if (puVar11 == (undefined *)0xffffffffffffffff) break;
          if (puVar11 == (undefined *)0x0) goto LAB_1014d8c10;
          puVar16 = puVar19 + -(long)puVar11;
          if (puVar19 < puVar11) goto LAB_1014d8c3c;
          puVar18 = puVar18 + (long)puVar11;
          puVar19 = puVar16;
          if (puVar16 == (undefined *)0x0) goto LAB_1014d8b68;
        }
        piVar14 = (int *)___error();
        iVar1 = *piVar14;
        if (iVar1 != 4) goto LAB_1014d8c1c;
      } while (puVar19 != (undefined *)0x0);
    }
    else {
      puVar18 = &UNK_108c78dd0;
      uVar21 = 0x7fffffff;
      puVar19 = (undefined *)0x4;
      do {
        while( true ) {
          puVar11 = puVar19;
          if ((undefined *)0x7ffffffe < puVar19) {
            puVar11 = (undefined *)0x7fffffff;
          }
          puVar11 = (undefined *)_write(uVar9,puVar18,puVar11);
          if (puVar11 == (undefined *)0xffffffffffffffff) break;
          if (puVar11 == (undefined *)0x0) goto LAB_1014d8c10;
          puVar16 = puVar19 + -(long)puVar11;
          if (puVar19 < puVar11) goto LAB_1014d8c3c;
          puVar18 = puVar18 + (long)puVar11;
          puVar19 = puVar16;
          if (puVar16 == (undefined *)0x0) goto LAB_1014d8b68;
        }
        piVar14 = (int *)___error();
        iVar1 = *piVar14;
        if (iVar1 != 4) goto LAB_1014d8c1c;
      } while (puVar19 != (undefined *)0x0);
    }
LAB_1014d8b68:
    puVar12 = (undefined8 *)0x0;
    *(undefined1 *)(puVar26 + 3) = 1;
  }
  else {
    auStack_78[0] = 10;
    puVar12 = (undefined8 *)func_0x000108a4a0f8(auStack_78,0,0);
  }
  return puVar12;
LAB_1014d8ba0:
  puVar19 = (undefined *)(lVar29 << 0x20 | 2);
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8b94:
  puVar19 = &UNK_10b233fc8;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8be4:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar9,uVar21,uVar21,&UNK_10b233fe0);
LAB_1014d8bf8:
  puVar19 = &UNK_10b233fc8;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8c1c:
  puVar19 = (undefined *)((long)iVar1 << 0x20 | 2);
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8c10:
  puVar19 = &UNK_10b233fc8;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8ea8:
  puVar19 = (undefined *)(lVar27 << 0x20 | 2);
  register0x00000008 = (BADSPACEBASE *)auStack_90;
  unaff_x19 = puStack_a8;
  unaff_x20 = uStack_b0;
  unaff_x29 = puStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8e9c:
  puVar19 = &UNK_10b233fc8;
  register0x00000008 = (BADSPACEBASE *)auStack_90;
  unaff_x19 = puStack_a8;
  unaff_x20 = uStack_b0;
  unaff_x29 = puStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8eec:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar21,uVar23,uVar23,&UNK_10b233fe0);
LAB_1014d8f00:
  puVar19 = &UNK_10b233fc8;
  register0x00000008 = (BADSPACEBASE *)puVar5;
  unaff_x19 = puStack_a8;
  unaff_x20 = uStack_b0;
  unaff_x29 = puStack_a0;
  unaff_x30 = uStack_98;
  goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
LAB_1014d8c3c:
  puVar16 = &UNK_10b233fe0;
  puVar15 = puVar19;
  auVar33 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(puVar11,puVar19);
  pbVar13 = auVar33._0_8_;
  uStack_98 = 0x1014d8c50;
  uStack_f0 = unaff_x28;
  lStack_e8 = lVar27;
  puStack_e0 = puVar26;
  uStack_d8 = uVar24;
  puStack_d0 = puVar22;
  uStack_c8 = uVar23;
  uStack_c0 = uVar21;
  puStack_b8 = puVar19;
  uStack_b0 = uVar9;
  puStack_a8 = puVar18;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((*pbVar13 & 1) != 0) {
    auStack_108[0] = 10;
    puVar12 = (undefined8 *)func_0x000108a4a0f8(auStack_108,0,0);
    return puVar12;
  }
  plVar28 = *(long **)(pbVar13 + 8);
  lVar29 = plVar28[4];
  if (pbVar13[1] == 1) {
    puVar22 = &UNK_108ca14f4;
    uVar23 = 1;
    do {
      while( true ) {
        uVar21 = uVar23;
        if (0x7ffffffe < uVar23) {
          uVar21 = 0x7fffffff;
        }
        uVar21 = _write((int)lVar29,puVar22,uVar21);
        if (uVar21 == 0xffffffffffffffff) break;
        if (uVar21 == 0) goto LAB_1014d8e9c;
        uVar9 = uVar23 - uVar21;
        if (uVar23 < uVar21) goto LAB_1014d8eec;
        puVar22 = puVar22 + uVar21;
        uVar23 = uVar9;
        if (uVar9 == 0) goto LAB_1014d8d5c;
      }
      piVar14 = (int *)___error();
      lVar27 = (long)*piVar14;
      if (*piVar14 != 4) goto LAB_1014d8ea8;
    } while (uVar23 != 0);
  }
  else {
    puVar22 = &UNK_108cc4022;
    uVar23 = 2;
    do {
      while( true ) {
        uVar21 = uVar23;
        if (0x7ffffffe < uVar23) {
          uVar21 = 0x7fffffff;
        }
        uVar21 = _write((int)lVar29,puVar22,uVar21);
        if (uVar21 == 0xffffffffffffffff) break;
        if (uVar21 == 0) goto LAB_1014d8e9c;
        uVar9 = uVar23 - uVar21;
        if (uVar23 < uVar21) goto LAB_1014d8eec;
        puVar22 = puVar22 + uVar21;
        uVar23 = uVar9;
        if (uVar9 == 0) goto LAB_1014d8d5c;
      }
      piVar14 = (int *)___error();
      lVar27 = (long)*piVar14;
      if (*piVar14 != 4) goto LAB_1014d8ea8;
    } while (uVar23 != 0);
  }
LAB_1014d8d5c:
  lVar29 = plVar28[2];
  if ((lVar29 != 0) && (uVar9 = plVar28[1], uVar9 != 0)) {
    lVar17 = 0;
    lVar20 = *plVar28;
    do {
      lVar17 = lVar17 + 1;
      lVar3 = plVar28[4];
      lVar25 = lVar20;
      uVar23 = uVar9;
      do {
        while( true ) {
          uVar21 = uVar23;
          if (0x7ffffffe < uVar23) {
            uVar21 = 0x7fffffff;
          }
          uVar21 = _write((int)lVar3,lVar25,uVar21);
          if (uVar21 == 0xffffffffffffffff) break;
          if (uVar21 == 0) goto LAB_1014d8e9c;
          uVar24 = uVar23 - uVar21;
          if (uVar23 < uVar21) goto LAB_1014d8eec;
          lVar25 = lVar25 + uVar21;
          uVar23 = uVar24;
          if (uVar24 == 0) goto LAB_1014d8d84;
        }
        piVar14 = (int *)___error();
        lVar27 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_1014d8ea8;
      } while (uVar23 != 0);
LAB_1014d8d84:
    } while (lVar17 != lVar29);
  }
  pbVar13[1] = 2;
  puVar19 = (undefined *)FUN_100656df8((int)plVar28[4],auVar33._8_8_,puVar15);
  register0x00000008 = (BADSPACEBASE *)auStack_90;
  unaff_x19 = puStack_a8;
  unaff_x20 = uStack_b0;
  unaff_x29 = puStack_a0;
  unaff_x30 = uStack_98;
  if (puVar19 == (undefined *)0x0) {
    lVar29 = plVar28[4];
    puVar22 = &UNK_108cc4020;
    uVar23 = 2;
    do {
      while( true ) {
        uVar21 = uVar23;
        if (0x7ffffffe < uVar23) {
          uVar21 = 0x7fffffff;
        }
        uVar21 = _write((int)lVar29,puVar22,uVar21);
        if (uVar21 == 0xffffffffffffffff) break;
        if (uVar21 == 0) goto LAB_1014d8f00;
        uVar9 = uVar23 - uVar21;
        if (uVar23 < uVar21) {
          puVar19 = (undefined *)
                    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                              (uVar21,uVar23,uVar23,&UNK_10b233fe0);
          register0x00000008 = (BADSPACEBASE *)puVar8;
          unaff_x19 = puStack_a8;
          unaff_x20 = uStack_b0;
          unaff_x29 = puStack_a0;
          unaff_x30 = uStack_98;
          goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
        }
        puVar22 = puVar22 + uVar21;
        uVar23 = uVar9;
        if (uVar9 == 0) goto LAB_1014d8e64;
      }
      piVar14 = (int *)___error();
      if (*piVar14 != 4) {
        puVar19 = (undefined *)((long)*piVar14 << 0x20 | 2);
        register0x00000008 = (BADSPACEBASE *)puVar6;
        unaff_x19 = puStack_a8;
        unaff_x20 = uStack_b0;
        unaff_x29 = puStack_a0;
        unaff_x30 = uStack_98;
        goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      }
    } while (uVar23 != 0);
LAB_1014d8e64:
    puVar19 = (undefined *)FUN_100656df8((int)plVar28[4],puVar16,param_5);
    register0x00000008 = (BADSPACEBASE *)puVar7;
    unaff_x19 = puStack_a8;
    unaff_x20 = uStack_b0;
    unaff_x29 = puStack_a0;
    unaff_x30 = uStack_98;
    if (puVar19 == (undefined *)0x0) {
      *(undefined1 *)(plVar28 + 3) = 1;
      return (undefined8 *)0x0;
    }
  }
__ZN10serde_json5error5Error2io17hd03531c8cc0a8670E:
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
  *(undefined **)((long)register0x00000008 + -0x40) = puVar19;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
  puVar12 = (undefined8 *)_malloc(0x28);
  if (puVar12 != (undefined8 *)0x0) {
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    puVar12[1] = *(undefined8 *)((long)register0x00000008 + -0x40);
    *puVar12 = uVar30;
    puVar12[3] = uVar32;
    puVar12[2] = uVar31;
    puVar12[4] = *(undefined8 *)((long)register0x00000008 + -0x28);
    return puVar12;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
  (*pcVar4)();
}

