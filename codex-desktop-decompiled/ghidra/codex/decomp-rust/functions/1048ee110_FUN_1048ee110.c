
void FUN_1048ee110(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  byte *pbVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_168;
  ulong *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  undefined4 *puStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong *puStack_110;
  ulong uStack_108;
  undefined4 *puStack_100;
  ulong uStack_f8;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 *puStack_98;
  ulong *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  code *pcStack_78;
  
  puVar20 = (undefined8 *)((ulong)&uStack_150 | 1);
  puVar5 = (ulong *)param_2[1];
  lVar14 = param_2[2];
  puVar12 = (ulong *)param_2[3];
  puVar15 = (ulong *)*param_2;
  pbVar16 = (byte *)param_2[9];
  do {
    if (puVar15 != (ulong *)0x0) {
      puVar13 = puVar5;
      if (puVar5 != puVar12) {
        puVar13 = puVar5 + 4;
        uVar10 = *puVar5;
        param_2[1] = puVar13;
        if (uVar10 != 0x8000000000000003) {
          uStack_140 = puVar5[3];
          *param_1 = uVar10;
          uVar10 = puVar5[1];
          param_1[2] = puVar5[2];
          param_1[1] = uVar10;
          goto LAB_1048ee5d8;
        }
      }
      if ((long)puVar12 - (long)puVar13 != 0) {
        uVar10 = (ulong)((long)puVar12 - (long)puVar13) >> 5;
        do {
          uVar8 = *puVar13;
          uVar11 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar11 = 1;
          }
          if ((uVar11 == 0) || (uVar11 != 1)) {
            if (puVar13[1] != 0) {
              lVar9 = 0x10;
              goto LAB_1048ee1e8;
            }
          }
          else if (uVar8 != 0) {
            lVar9 = 8;
LAB_1048ee1e8:
            _free(*(undefined8 *)((long)puVar13 + lVar9));
          }
          puVar13 = puVar13 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (lVar14 != 0) {
        _free(puVar15);
      }
      *param_2 = 0;
    }
    puVar3 = puStack_138;
    uVar10 = uStack_140;
    puVar12 = puStack_148;
    uVar11 = uStack_150;
    if ((param_2[8] == 0) || (pbVar16 == (byte *)param_2[0xb])) break;
    bVar1 = *pbVar16;
    param_2[9] = pbVar16 + 0x38;
    if (bVar1 == 5) break;
    uVar18 = *(undefined8 *)(pbVar16 + 1);
    uVar22 = *(undefined8 *)(pbVar16 + 0x19);
    uVar21 = *(undefined8 *)(pbVar16 + 0x11);
    puVar20[1] = *(undefined8 *)(pbVar16 + 9);
    *puVar20 = uVar18;
    puVar20[3] = uVar22;
    puVar20[2] = uVar21;
    uVar18 = *(undefined8 *)(pbVar16 + 0x21);
    puVar20[5] = *(undefined8 *)(pbVar16 + 0x29);
    puVar20[4] = uVar18;
    *(undefined8 *)((long)puVar20 + 0x2f) = *(undefined8 *)(pbVar16 + 0x30);
    uStack_150 = CONCAT71(uStack_150._1_7_,bVar1);
    uVar8 = uStack_150;
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        puVar5 = (ulong *)_malloc(0x20);
        if (puVar5 == (ulong *)0x0) {
          func_0x0001087c906c(8,0x20);
          goto LAB_1048ee670;
        }
        *puVar5 = 0x8000000000000000;
        puVar5[1] = (ulong)puVar12;
        puVar5[2] = uVar10;
        puVar5[3] = (ulong)puVar3;
        lStack_168 = 1;
        lStack_158 = 1;
        puStack_160 = puVar5;
        uVar10 = uStack_128;
        puVar12 = puStack_130;
        if (lStack_120 != 0) {
          puVar7 = (undefined8 *)(uStack_128 + 8);
          lVar14 = lStack_120;
          do {
            if ((puVar7[-1] & 0x7fffffffffffffff) != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 5;
            lVar14 = lVar14 + -1;
            puVar12 = puStack_130;
          } while (lVar14 != 0);
        }
      }
      else {
        plVar17 = (long *)param_2[0xc];
        uStack_150._1_1_ = SUB81(uVar11,1);
        bVar2 = uStack_150._1_1_;
        uStack_150 = uVar8;
        if (bVar1 == 1) {
          *plVar17 = *plVar17 + 1;
          puVar5 = (ulong *)_malloc(0x60);
          if (puVar5 == (ulong *)0x0) {
            func_0x0001087c906c(8,0x60);
LAB_1048ee670:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1048ee674);
            (*pcVar4)();
          }
          puVar6 = (undefined4 *)_malloc(7);
          if (puVar6 == (undefined4 *)0x0) {
            func_0x0001087c9084(1,7);
            goto LAB_1048ee670;
          }
          *(undefined4 *)((long)puVar6 + 3) = 0x3e656761;
          *puVar6 = 0x616d693c;
          uStack_f8 = 7;
          uStack_108 = 7;
          puStack_110 = (ulong *)0x8000000000000000;
          puStack_90 = puVar12;
          puStack_88 = (undefined *)uVar10;
          puStack_80 = (ulong *)puVar3;
          pcStack_78 = (code *)(CONCAT71(pcStack_78._1_7_,bVar2) & 0xffffffffffffff01);
          puStack_100 = puVar6;
          puVar7 = (undefined8 *)_malloc(8);
          if (puVar7 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,8);
            goto LAB_1048ee670;
          }
          *puVar7 = 0x3e6567616d692f3c;
          puVar5[1] = uStack_108;
          *puVar5 = (ulong)puStack_110;
          puVar5[3] = uStack_f8;
          puVar5[2] = (ulong)puStack_100;
          puVar5[5] = (ulong)puStack_88;
          puVar5[4] = (ulong)puStack_90;
          puVar5[7] = (ulong)pcStack_78;
          puVar5[6] = (ulong)puStack_80;
          puVar5[9] = 8;
          puVar5[8] = 0x8000000000000000;
          puVar5[10] = (ulong)puVar7;
          puVar5[0xb] = 8;
          lVar9 = 3;
          lVar14 = 3;
          goto LAB_1048ee190;
        }
        *plVar17 = *plVar17 + 1;
        __ZN3std2fs4read5inner17h25df2b93c807d4faE(&lStack_e8,uStack_140,puStack_138);
        uVar11 = uStack_e0;
        if (lStack_e8 == -0x8000000000000000) {
          uStack_b0 = uStack_e0;
          puVar5 = (ulong *)_malloc(0x20);
          if (puVar5 == (ulong *)0x0) {
            func_0x0001087c906c(8,0x20);
            goto LAB_1048ee670;
          }
          uStack_a8 = uVar11;
          uStack_a0 = uVar10;
          puStack_90 = &uStack_a0;
          puStack_98 = puVar3;
          puStack_80 = &uStack_a8;
          puStack_88 = &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
          ;
          pcStack_78 = 
          __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&puStack_110,s__Codex_could_not_read_the_local_i_108b03e44,&puStack_90);
          puStack_88 = (undefined *)uStack_108;
          puStack_90 = puStack_110;
          puStack_80 = (ulong *)puStack_100;
          if ((uStack_a8 & 3) == 1) {
            puVar7 = (undefined8 *)(uStack_a8 - 1);
            uVar18 = *puVar7;
            puVar19 = *(undefined8 **)(uStack_a8 + 7);
            pcVar4 = (code *)*puVar19;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar18);
            }
            if (puVar19[1] != 0) {
              _free(uVar18);
            }
            _free(puVar7);
          }
          *puVar5 = 0x8000000000000000;
          puVar5[2] = (ulong)puStack_88;
          puVar5[1] = (ulong)puStack_90;
          puVar5[3] = (ulong)puStack_80;
          lStack_168 = 1;
          lStack_158 = 1;
          puStack_160 = puVar5;
        }
        else {
          uStack_c8 = uStack_e0;
          lStack_d0 = lStack_e8;
          uStack_c0 = uStack_d8;
          func_0x00010493438c(&lStack_168,uVar10,puVar3,&lStack_d0,1,*plVar17,bVar2 & 1);
        }
      }
      if (puVar12 != (ulong *)0x0) {
        _free(uVar10);
      }
      lVar9 = lStack_158;
      lVar14 = lStack_168;
      puVar5 = puStack_160;
      if (lStack_168 == -0x8000000000000000) break;
    }
    else {
      lStack_168 = 0;
      puStack_160 = (ulong *)0x8;
      lStack_158 = 0;
      FUN_1049a2ce4(&uStack_150);
      lVar9 = 0;
      lVar14 = 0;
      puVar5 = (ulong *)0x8;
    }
LAB_1048ee190:
    *param_2 = puVar5;
    param_2[1] = puVar5;
    puVar12 = puVar5 + lVar9 * 4;
    param_2[2] = lVar14;
    param_2[3] = puVar12;
    puVar15 = puVar5;
    pbVar16 = pbVar16 + 0x38;
  } while( true );
  lVar14 = param_2[4];
  if (lVar14 == 0) {
    *param_1 = 0x8000000000000003;
    return;
  }
  puVar12 = (ulong *)param_2[5];
  if (puVar12 != (ulong *)param_2[7]) {
    uVar10 = *puVar12;
    puStack_148 = (ulong *)puVar12[2];
    uStack_150 = puVar12[1];
    uStack_140 = puVar12[3];
    puVar12 = puVar12 + 4;
    param_2[5] = puVar12;
    if (uVar10 != 0x8000000000000003) goto LAB_1048ee5c4;
  }
  uVar10 = (long)param_2[7] - (long)puVar12;
  if (uVar10 != 0) {
    uVar10 = uVar10 >> 5;
    do {
      uVar8 = *puVar12;
      uVar11 = uVar8 ^ 0x8000000000000000;
      if (-1 < (long)uVar8) {
        uVar11 = 1;
      }
      if ((uVar11 == 0) || (uVar11 != 1)) {
        if (puVar12[1] != 0) {
          lVar9 = 0x10;
          goto LAB_1048ee56c;
        }
      }
      else if (uVar8 != 0) {
        lVar9 = 8;
LAB_1048ee56c:
        _free(*(undefined8 *)((long)puVar12 + lVar9));
      }
      puVar12 = puVar12 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (param_2[6] != 0) {
    _free(lVar14);
  }
  param_2[4] = 0;
  uVar10 = 0x8000000000000003;
LAB_1048ee5c4:
  *param_1 = uVar10;
  param_1[2] = (ulong)puStack_148;
  param_1[1] = uStack_150;
LAB_1048ee5d8:
  param_1[3] = uStack_140;
  return;
}

