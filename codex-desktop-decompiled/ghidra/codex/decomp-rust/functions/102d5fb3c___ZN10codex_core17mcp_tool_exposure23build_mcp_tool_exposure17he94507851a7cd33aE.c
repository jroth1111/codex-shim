
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core17mcp_tool_exposure23build_mcp_tool_exposure17he94507851a7cd33aE
               (undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,long param_6
               ,ulong param_7)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined1 auStack_430 [16];
  long lStack_418;
  long lStack_410;
  undefined **ppuStack_408;
  long lStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined **ppuStack_3d0;
  long lStack_3c8;
  long alStack_3b8 [53];
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 aauStack_1f0 [25] [16];
  
  param_3 = param_3 * 0x1a8;
  lVar6 = param_2 + param_3;
  lVar7 = param_2;
  do {
    if (param_3 == 0) goto LAB_102d5fbe8;
    lVar14 = lVar7 + 0x1a8;
  } while ((*(long *)(lVar7 + 0x10) == 10) &&
          (plVar2 = (long *)(lVar7 + 8), param_3 = param_3 + -0x1a8, lVar7 = lVar14,
          *(long *)*plVar2 == 0x70615f7865646f63 && (short)((long *)*plVar2)[1] == 0x7370));
  func_0x00010359d4d8(alStack_3b8);
  if (alStack_3b8[0] == -0x8000000000000000) {
LAB_102d5fbe8:
    puStack_470 = (undefined *)0x0;
    puStack_468 = (undefined *)0x8;
    puStack_460 = (undefined *)0x0;
    if (param_4 == 0) goto LAB_102d5fda0;
LAB_102d5fbf8:
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      aauStack_1f0[0] = *pauVar5;
    }
    else {
      aauStack_1f0[0] = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = aauStack_1f0[0]._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = aauStack_1f0[0]._0_8_ + 1;
    puStack_208 = (undefined *)0x0;
    puStack_210 = &UNK_108d52778;
    puStack_1f8 = (undefined *)0x0;
    puStack_200 = (undefined *)0x0;
    if (param_5 != 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6d580482a7a70562E
                (&puStack_210,param_5,aauStack_1f0,1);
      puVar12 = (undefined8 *)(param_4 + 0x10);
      do {
        FUN_1038764e8(&puStack_210,puVar12[-1],*puVar12);
        puVar12 = puVar12 + 0x4e;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    puStack_448 = puStack_208;
    puStack_450 = puStack_210;
    puStack_438 = puStack_1f8;
    puStack_440 = puStack_200;
    ppuStack_408 = &puStack_450;
    lStack_418 = param_2;
    lStack_410 = lVar6;
    lStack_400 = param_6;
    auStack_430 = aauStack_1f0[0];
    func_0x000102c8192c(alStack_3b8,&lStack_418);
    if (alStack_3b8[0] == -0x8000000000000000) {
      puVar15 = (undefined *)0x0;
      puVar13 = (undefined *)0x8;
      puVar16 = (undefined *)0x0;
    }
    else {
      _memcpy(&puStack_210,alStack_3b8,0x1a8);
      puVar13 = (undefined *)_malloc(0x6a0);
      if (puVar13 == (undefined *)0x0) {
        func_0x0001087c9084(8,0x6a0);
LAB_102d60078:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d6007c);
        (*pcVar4)();
      }
      lVar6 = 0x1a8;
      _memcpy(puVar13,alStack_3b8,0x1a8);
      puStack_3f8 = (undefined *)0x4;
      puStack_3e8 = (undefined *)0x1;
      lStack_3d8 = lStack_410;
      lStack_3e0 = lStack_418;
      lStack_3c8 = lStack_400;
      ppuStack_3d0 = ppuStack_408;
      puStack_3f0 = puVar13;
      while( true ) {
        puVar15 = puStack_3e8;
        func_0x000102c8192c(alStack_3b8,&lStack_3e0);
        puVar16 = puStack_3f8;
        if (alStack_3b8[0] == -0x8000000000000000) break;
        _memcpy(&puStack_210,alStack_3b8,0x1a8);
        if (puVar15 == puStack_3f8) {
          FUN_10893e30c(&puStack_3f8,puVar15,1,8,0x1a8);
          puVar13 = puStack_3f0;
        }
        _memcpy(puVar13 + lVar6,alStack_3b8,0x1a8);
        puStack_3e8 = puVar15 + 1;
        lVar6 = lVar6 + 0x1a8;
      }
    }
    if ((puStack_448 != (undefined *)0x0) && ((long)puStack_448 * 0x11 != -0x19)) {
      _free(puStack_450 + (long)puStack_448 * -0x10 + -0x10);
    }
    puStack_1f8 = puVar13 + (long)puVar15 * 0x1a8;
    puStack_210 = puVar13;
    puStack_208 = puVar13;
    puStack_200 = puVar16;
    if (puStack_470 + -(long)puStack_460 < puVar15) {
      FUN_10893e30c(&puStack_470,puStack_460,puVar15,8,0x1a8);
    }
    puVar3 = puStack_460;
    _memcpy(puStack_468 + (long)puStack_460 * 0x1a8,puVar13,(long)puVar15 * 0x1a8);
    puStack_460 = puVar3 + (long)puVar15;
    puStack_1f8 = puVar13;
    if (puVar16 != (undefined *)0x0) {
      _free(puVar13);
    }
  }
  else {
    _memcpy(&puStack_210,alStack_3b8,0x1a8);
    puVar13 = (undefined *)_malloc(0x6a0);
    if (puVar13 == (undefined *)0x0) {
      func_0x0001087c9084(8,0x6a0);
      goto LAB_102d60078;
    }
    _memcpy(puVar13,alStack_3b8,0x1a8);
    puStack_450 = (undefined *)0x4;
    puVar16 = (undefined *)0x1;
    puStack_440 = (undefined *)0x1;
    puStack_448 = puVar13;
    while (lVar14 != lVar6) {
      lVar7 = lVar14 + 0x1a8;
      if ((*(long *)(lVar14 + 0x10) != 10) ||
         (plVar2 = (long *)(lVar14 + 8), lVar14 = lVar7,
         *(long *)*plVar2 != 0x70615f7865646f63 || (short)((long *)*plVar2)[1] != 0x7370)) {
        func_0x00010359d4d8(alStack_3b8);
        if (alStack_3b8[0] == -0x8000000000000000) break;
        _memcpy(&puStack_210,alStack_3b8,0x1a8);
        if (puVar16 == puStack_450) {
          FUN_10893e30c(&puStack_450,puVar16,1,8,0x1a8);
          puVar13 = puStack_448;
        }
        _memcpy(puVar13 + (long)puVar16 * 0x1a8,alStack_3b8,0x1a8);
        puVar16 = puVar16 + 1;
        lVar14 = lVar7;
        puStack_440 = puVar16;
      }
    }
    puStack_468 = puStack_448;
    puStack_470 = puStack_450;
    puStack_460 = puStack_440;
    param_7 = param_7 & 0xffffffff;
    if (param_4 != 0) goto LAB_102d5fbf8;
LAB_102d5fda0:
  }
  if ((param_7 & 1) != 0) {
    lVar6 = *(long *)(param_6 + 0x2388);
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_6 + 0x2390);
      do {
        uVar10 = (ulong)*(ushort *)(lVar6 + 10);
        uVar8 = 0xffffffffffffffff;
        pbVar9 = (byte *)(lVar6 + 0xc);
        uVar11 = uVar10;
        do {
          if (uVar11 == 0) goto LAB_102d5ff54;
          cVar1 = *pbVar9 < 0x1b;
          if (0x1b < *pbVar9) {
            cVar1 = -1;
          }
          uVar11 = uVar11 - 1;
          uVar8 = uVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (cVar1 == '\x01');
        uVar10 = uVar8;
        if (cVar1 == '\0') {
          if (puStack_460 == (undefined *)0x0) {
            if (puStack_470 != (undefined *)0x0) {
              puStack_468 = (undefined *)_free();
            }
            puStack_460 = (undefined *)0x0;
            puStack_470 = (undefined *)0x8000000000000000;
          }
          goto LAB_102d5ff98;
        }
LAB_102d5ff54:
        if (lVar7 == 0) break;
        lVar6 = *(long *)(lVar6 + uVar10 * 8 + 0x18);
        lVar7 = lVar7 + -1;
      } while( true );
    }
    if ((undefined *)0x63 < puStack_460) {
LAB_102d5ff98:
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      param_1[3] = puStack_470;
      lVar6 = 0x28;
      param_1[4] = puStack_468;
      goto LAB_102d5ffc8;
    }
  }
  param_1[1] = puStack_468;
  *param_1 = puStack_470;
  param_1[2] = puStack_460;
  puStack_460 = (undefined *)0x8000000000000000;
  lVar6 = 0x18;
LAB_102d5ffc8:
  *(undefined **)((long)param_1 + lVar6) = puStack_460;
  return;
}

