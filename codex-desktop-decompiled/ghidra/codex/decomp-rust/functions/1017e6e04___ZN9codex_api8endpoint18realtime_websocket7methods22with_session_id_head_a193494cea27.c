
void __ZN9codex_api8endpoint18realtime_websocket7methods22with_session_id_header17hc440acdac822c83dE
               (undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *****pppppuVar19;
  long lVar20;
  undefined8 uStack_188;
  char cStack_180;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  long *plStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 ****ppppuStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  if (param_3 == 0) goto LAB_1017e7108;
  if (param_4 == 0) {
    uVar12 = 1;
    uStack_d8 = 0;
    pppppuVar19 = (undefined8 *****)&UNK_10b205a90;
  }
  else {
    lVar15 = 0;
    do {
      bVar5 = *(byte *)(param_3 + lVar15);
      if (bVar5 < 0x20) {
        if (bVar5 != 9) {
LAB_1017e6df4:
          pppppuStack_a0 = &pppppuStack_a0;
          puStack_98 = &
                       __ZN78__LT_http__header__value__InvalidHeaderValue_u20_as_u20_core__fmt__Display_GT_3fmt17hf88278615a9d7b82E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_150,s__invalid_realtime_session_id_hea_108adcefe,&pppppuStack_a0);
          param_1[2] = CONCAT44(uStack_144,uStack_148);
          param_1[1] = lStack_150;
          param_1[3] = uStack_140;
          *(undefined1 *)(param_1 + 5) = 0;
          *param_1 = 9;
          FUN_1017a4dc4(param_2);
          return;
        }
      }
      else if (bVar5 == 0x7f) goto LAB_1017e6df4;
      lVar15 = lVar15 + 1;
    } while (param_4 != lVar15);
    uVar12 = _malloc(param_4);
    if (uVar12 == 0) {
      func_0x0001087c9084(1,param_4);
      goto LAB_1017e729c;
    }
    _memcpy(uVar12,param_3,param_4);
    uStack_d8 = uVar12;
    pppppuVar19 = (undefined8 *****)&__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
    if ((uVar12 & 1) == 0) {
      uStack_d8 = uVar12 | 1;
      pppppuVar19 = (undefined8 *****)&__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
    }
  }
  lStack_150 = 0x6f69737365732d78;
  uStack_148 = 0x64692d6e;
  uVar10 = func_0x000105797d50(&lStack_150,0xc);
  uVar10 = uVar10 & 0xff;
  plVar3 = &lStack_150;
  if (uVar10 != 0x51) {
    plVar3 = (long *)(ulong)uVar10;
  }
  uStack_100 = 0xc;
  uStack_f8 = 1;
  if (uVar10 != 0x51) {
    uStack_f8 = 2;
  }
  uStack_d0 = 0;
  plStack_108 = plVar3;
  ppppuStack_f0 = pppppuVar19;
  uStack_e8 = uVar12;
  lStack_e0 = param_4;
  iVar11 = FUN_1017ab888(param_2);
  if (iVar11 == 0) {
    uVar9 = FUN_1017aa9cc(param_2,&plStack_108);
    uVar6 = *(ushort *)(param_2 + 0xb);
    uVar12 = (ulong)(uVar6 & uVar9);
    uVar13 = param_2[10];
    uVar4 = param_2[5];
    if (uVar10 != 0x51) {
      uVar16 = 0;
      do {
        if (uVar13 <= uVar12) {
          uVar12 = 0;
        }
        if (uVar13 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar1 = (ushort *)(param_2[9] + uVar12 * 4);
        uVar14 = (ulong)*puVar1;
        if (uVar14 == 0xffff) goto LAB_1017e70b8;
        uVar7 = puVar1[1];
        if (((ulong)((int)uVar12 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar16)
        goto LAB_1017e7154;
        if (uVar7 == uVar9) {
          if (uVar4 <= uVar14) goto LAB_1017e7220;
          lVar15 = param_2[4] + uVar14 * 0x68;
          if ((*(long *)(lVar15 + 0x40) == 0) &&
             ((uint)*(byte *)(lVar15 + 0x48) == ((uint)plVar3 & 0xff))) goto LAB_1017e702c;
        }
        uVar16 = uVar16 + 1;
        uVar12 = uVar12 + 1;
      } while( true );
    }
    uVar16 = 0;
    do {
      if (uVar13 <= uVar12) {
        uVar12 = 0;
      }
      if (uVar13 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(param_2[9] + uVar12 * 4);
      uVar14 = (ulong)*puVar1;
      if (uVar14 == 0xffff) goto LAB_1017e70b8;
      uVar7 = puVar1[1];
      if (((ulong)((int)uVar12 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar16)
      goto LAB_1017e7154;
      if (uVar7 == uVar9) {
        if (uVar4 <= uVar14) goto LAB_1017e7220;
        lVar15 = param_2[4] + uVar14 * 0x68;
        if (((*(long *)(lVar15 + 0x40) != 0) && (*(long *)(lVar15 + 0x50) == 0xc)) &&
           (**(long **)(lVar15 + 0x48) == *plVar3 &&
            (int)(*(long **)(lVar15 + 0x48))[1] == (int)plVar3[1])) goto LAB_1017e702c;
      }
      uVar16 = uVar16 + 1;
      uVar12 = uVar12 + 1;
    } while( true );
  }
  (*(code *)pppppuVar19[4])(&uStack_d8,uVar12,param_4);
  goto LAB_1017e7254;
LAB_1017e70b8:
  func_0x000105795c40(&lStack_c8,&plStack_108);
  puStack_98 = (undefined *)uStack_e8;
  pppppuStack_a0 = (undefined8 *****)ppppuStack_f0;
  uStack_88 = uStack_d8;
  lStack_90 = lStack_e0;
  uStack_80 = CONCAT71(uStack_cf,uStack_d0);
  uVar13 = FUN_1017abbfc(param_2,uVar9,&lStack_c8,&pppppuStack_a0);
  if ((uVar13 & 1) == 0) {
    if (uVar12 < (ulong)param_2[10]) {
      puVar2 = (undefined2 *)(param_2[9] + uVar12 * 4);
      *puVar2 = (short)uVar4;
      puVar2[1] = uVar9;
      goto LAB_1017e7108;
    }
    func_0x000108a07bdc(uVar12,param_2[10],&UNK_10b259fc0);
    goto LAB_1017e729c;
  }
  goto LAB_1017e7254;
LAB_1017e7154:
  lVar15 = *param_2;
  func_0x000105795c40(&lStack_c8,&plStack_108);
  puStack_98 = (undefined *)uStack_e8;
  pppppuStack_a0 = (undefined8 *****)ppppuStack_f0;
  uStack_88 = uStack_d8;
  lStack_90 = lStack_e0;
  uStack_80 = CONCAT71(uStack_cf,uStack_d0);
  lVar18 = param_2[5];
  uVar13 = FUN_1017abbfc(param_2,uVar9,&lStack_c8,&pppppuStack_a0);
  if ((uVar13 & 1) == 0) {
    uVar13 = 0;
    lVar20 = param_2[9];
    uVar4 = param_2[10];
    uVar10 = (uint)lVar18 & 0xffff;
    if (uVar4 <= uVar12) {
      uVar12 = 0;
    }
    while( true ) {
      if (uVar4 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar20 + uVar12 * 4);
      uVar17 = (uint)*puVar1;
      if (uVar17 == 0xffff) break;
      uVar13 = uVar13 + 1;
      uVar6 = puVar1[1];
      *puVar1 = (ushort)uVar10;
      puVar1[1] = uVar9;
      uVar12 = uVar12 + 1;
      uVar10 = uVar17;
      uVar9 = uVar6;
      if (uVar4 <= uVar12) {
        uVar12 = 0;
      }
    }
    *puVar1 = (ushort)uVar10;
    puVar1[1] = uVar9;
    if ((0x7f < uVar13 || 0x1ff < uVar16 && lVar15 != 2) && (*param_2 == 0)) {
      *param_2 = 1;
    }
    goto LAB_1017e7108;
  }
  goto LAB_1017e7254;
LAB_1017e7220:
  func_0x000108a07bdc(uVar14,uVar4,&UNK_10b259fa8);
  goto LAB_1017e729c;
LAB_1017e702c:
  puStack_98 = (undefined *)uStack_e8;
  pppppuStack_a0 = (undefined8 *****)ppppuStack_f0;
  uStack_88 = uStack_d8;
  lStack_90 = lStack_e0;
  uStack_80 = CONCAT71(uStack_cf,uStack_d0);
  func_0x0001017ab3fc(&lStack_c8,param_2,uVar14,&pppppuStack_a0);
  uStack_168 = uStack_c0;
  lStack_170 = lStack_c8;
  uStack_158 = uStack_b0;
  uStack_160 = uStack_b8;
  if (cStack_a8 != '\x03') {
    uStack_188 = uStack_b0;
    cStack_180 = cStack_a8;
    if (cStack_a8 != '\x02') {
      (**(code **)(lStack_c8 + 0x20))(&uStack_188,uStack_c0,uStack_b8);
    }
LAB_1017e7108:
    lVar15 = param_2[4];
    lVar20 = param_2[7];
    lVar18 = param_2[6];
    param_1[6] = param_2[5];
    param_1[5] = lVar15;
    param_1[8] = lVar20;
    param_1[7] = lVar18;
    lVar15 = param_2[8];
    lVar20 = param_2[0xb];
    lVar18 = param_2[10];
    param_1[10] = param_2[9];
    param_1[9] = lVar15;
    param_1[0xc] = lVar20;
    param_1[0xb] = lVar18;
    lVar15 = *param_2;
    lVar20 = param_2[3];
    lVar18 = param_2[2];
    param_1[2] = param_2[1];
    param_1[1] = lVar15;
    param_1[4] = lVar20;
    param_1[3] = lVar18;
    *param_1 = 0x12;
    return;
  }
LAB_1017e7254:
  func_0x000108a07a3c(&UNK_108ce3441,0x17,&pppppuStack_a0,&UNK_10b259f18,&UNK_10b25ab10);
LAB_1017e729c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1017e72a0);
  (*pcVar8)();
}

