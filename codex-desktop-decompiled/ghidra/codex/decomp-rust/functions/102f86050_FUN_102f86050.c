
/* WARNING: Type propagation algorithm not settling */

void FUN_102f86050(long *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long ****pppplVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long ******pppppplVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *******ppppppplVar16;
  undefined *puVar17;
  byte bVar18;
  ulong uVar19;
  long *plVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  bool bVar23;
  long ******pppppplVar24;
  long *******ppppppplVar25;
  long lVar26;
  undefined1 uVar27;
  long lVar28;
  long ******pppppplVar29;
  long lVar30;
  long lVar31;
  long *******ppppppplVar32;
  long *plVar33;
  long *plVar34;
  long *******ppppppplVar35;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined8 uVar37;
  byte bVar43;
  undefined1 auVar44 [16];
  undefined8 uStack_360;
  long lStack_358;
  long *******ppppppplStack_310;
  long lStack_2e8;
  long ****pppplStack_2e0;
  long ******pppppplStack_2d8;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long ******pppppplStack_2b0;
  undefined8 uStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long lStack_288;
  long ****pppplStack_280;
  long ******pppppplStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  undefined8 uStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long lStack_228;
  long *plStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long ******pppppplStack_1b0;
  undefined8 *puStack_1a8;
  long ******pppppplStack_1a0;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long ****apppplStack_158 [3];
  long *plStack_140;
  long *******ppppppplStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_2 + 4) == 0) {
LAB_102f860e4:
    if (*param_2 == 1) {
      lVar30 = *(long *)(param_2 + 2);
      param_2[2] = 0;
      param_2[3] = 0;
      if (lVar30 != 0) {
        lVar31 = *(long *)(lVar30 + 8);
        lVar7 = *(long *)(lVar30 + 0x10);
        lVar30 = lVar7 * 0x20;
        *(long *)(param_2 + 6) = lVar31 + lVar30;
        while (lVar7 != 0) {
          *(long *)(param_2 + 4) = lVar31 + 0x20;
          auVar44 = FUN_1033f63d0(*(undefined8 *)(lVar31 + 8),*(undefined8 *)(lVar31 + 0x10));
          lVar15 = auVar44._8_8_;
          if (lVar15 != 0) {
            uVar27 = *(undefined1 *)(lVar31 + 0x18);
            lVar7 = _malloc(lVar15);
            if (lVar7 == 0) goto LAB_102f86218;
            _memcpy(lVar7,auVar44._0_8_,lVar15);
            if (lVar15 != -0x8000000000000000) goto LAB_102f861e0;
          }
          lVar30 = lVar30 + -0x20;
          lVar31 = lVar31 + 0x20;
          lVar7 = lVar30;
        }
        param_2[2] = 0;
        param_2[3] = 0;
      }
    }
    param_2[4] = 0;
    param_2[5] = 0;
    if (*(long *)(param_2 + 8) == 0) {
LAB_102f861f0:
      param_2[8] = 0;
      param_2[9] = 0;
      *param_1 = -0x8000000000000000;
      return;
    }
    lVar30 = *(long *)(param_2 + 10);
    lVar31 = *(long *)(param_2 + 8);
    do {
      do {
        lVar7 = lVar31;
        if (lVar7 == lVar30) goto LAB_102f861f0;
        lVar31 = lVar7 + 0x20;
        *(long *)(param_2 + 8) = lVar31;
        auVar44 = FUN_1033f63d0(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
        lVar15 = auVar44._8_8_;
      } while (lVar15 == 0);
      uVar27 = *(undefined1 *)(lVar7 + 0x18);
      lVar7 = _malloc(lVar15);
      if (lVar7 == 0) goto LAB_102f86218;
      _memcpy(lVar7,auVar44._0_8_,lVar15);
    } while (lVar15 == -0x8000000000000000);
  }
  else {
    lVar30 = *(long *)(param_2 + 6);
    lVar31 = *(long *)(param_2 + 4);
    do {
      do {
        lVar7 = lVar31;
        if (lVar7 == lVar30) goto LAB_102f860e4;
        lVar31 = lVar7 + 0x20;
        *(long *)(param_2 + 4) = lVar31;
        auVar44 = FUN_1033f63d0(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
        lVar15 = auVar44._8_8_;
      } while (lVar15 == 0);
      uVar27 = *(undefined1 *)(lVar7 + 0x18);
      lVar7 = _malloc(lVar15);
      if (lVar7 == 0) goto LAB_102f86218;
      _memcpy(lVar7,auVar44._0_8_,lVar15);
    } while (lVar15 == -0x8000000000000000);
  }
LAB_102f861e0:
  *param_1 = lVar15;
  param_1[1] = lVar7;
  param_1[2] = lVar15;
  *(undefined1 *)(param_1 + 3) = uVar27;
  return;
LAB_102f864ac:
  if (lVar28 == lVar2) {
    *puVar10 = 0x11;
    return;
  }
  *plVar14 = lVar28 + 0x80;
  if (plVar14[3] != 0) {
    lVar7 = plVar14[2] + plVar14[3] * 0x1a8;
    uVar3 = *(undefined8 *)(lVar28 + 0x20);
    lVar30 = *(long *)(lVar28 + 0x28);
    lVar31 = plVar14[2];
    do {
      lVar15 = lVar31 + 0x1a8;
      pppppplVar29 = *(long *******)(lVar31 + 0x10);
      if (((pppppplVar29 != (long ******)0xa) ||
          (**(long **)(lVar31 + 8) != 0x70615f7865646f63 ||
           (short)(*(long **)(lVar31 + 8))[1] != 0x7370)) && (*(long *)(lVar31 + 0x58) != 0)) {
        lVar26 = *(long *)(lVar31 + 0x58) * 0x18;
        plVar33 = (long *)(*(long *)(lVar31 + 0x50) + 0x10);
        do {
          if ((*plVar33 == lVar30) && (iVar6 = _memcmp(plVar33[-1],uVar3,lVar30), iVar6 == 0)) {
            if (pppppplVar29 == (long ******)0x0) {
              pppppplVar11 = (long ******)0x1;
            }
            else {
              uVar37 = *(undefined8 *)(lVar31 + 8);
              pppppplVar11 = (long ******)_malloc(pppppplVar29);
              if (pppppplVar11 == (long ******)0x0) {
                func_0x0001087c9084(1,pppppplVar29);
                goto LAB_102f87138;
              }
              _memcpy(pppppplVar11,uVar37,pppppplVar29);
              if (pppppplVar29 == (long ******)0x8000000000000000) goto LAB_102f865b0;
            }
            ppppppplVar25 = (long *******)_malloc(0x60);
            if (ppppppplVar25 == (long *******)0x0) {
              func_0x0001087c9084(8,0x60);
              goto LAB_102f87154;
            }
            *ppppppplVar25 = pppppplVar29;
            ppppppplVar25[1] = pppppplVar11;
            ppppppplVar25[2] = pppppplVar29;
            ppppppplStack_270 = (long *******)0x4;
            ppppppplStack_260 = (long *******)0x1;
            ppppppplStack_268 = ppppppplVar25;
            if (lVar15 == lVar7) goto LAB_102f86714;
            ppppppplVar35 = (long *******)0x1;
            goto LAB_102f8661c;
          }
          plVar33 = plVar33 + 3;
          lVar26 = lVar26 + -0x18;
        } while (lVar26 != 0);
      }
      lVar31 = lVar15;
    } while (lVar15 != lVar7);
  }
LAB_102f865b0:
  ppppppplStack_2c0 = (long *******)0x0;
  ppppppplStack_290 = (long *******)0x0;
  goto LAB_102f86788;
LAB_102f8661c:
  do {
    lVar31 = lVar15 + 0x1a8;
    pppppplVar29 = *(long *******)(lVar15 + 0x10);
    if (((pppppplVar29 != (long ******)0xa) ||
        (**(long **)(lVar15 + 8) != 0x70615f7865646f63 ||
         (short)(*(long **)(lVar15 + 8))[1] != 0x7370)) && (*(long *)(lVar15 + 0x58) != 0)) {
      lVar26 = *(long *)(lVar15 + 0x58) * 0x18;
      plVar33 = (long *)(*(long *)(lVar15 + 0x50) + 0x10);
      do {
        if ((*plVar33 == lVar30) && (iVar6 = _memcmp(plVar33[-1],uVar3,lVar30), iVar6 == 0)) {
          if (pppppplVar29 == (long ******)0x0) {
            pppppplVar11 = (long ******)0x1;
          }
          else {
            uVar37 = *(undefined8 *)(lVar15 + 8);
            pppppplVar11 = (long ******)_malloc(pppppplVar29);
            if (pppppplVar11 == (long ******)0x0) {
              func_0x0001087c9084(1,pppppplVar29);
              goto LAB_102f87154;
            }
            _memcpy(pppppplVar11,uVar37,pppppplVar29);
            if (pppppplVar29 == (long ******)0x8000000000000000) goto LAB_102f86714;
          }
          if (ppppppplVar35 == ppppppplStack_270) {
            FUN_10893e30c(&ppppppplStack_270,ppppppplVar35,1,8,0x18);
            ppppppplVar25 = ppppppplStack_268;
          }
          ppppppplVar16 = ppppppplVar25 + (long)ppppppplVar35 * 3;
          *ppppppplVar16 = pppppplVar29;
          ppppppplVar16[1] = pppppplVar11;
          ppppppplVar16[2] = pppppplVar29;
          ppppppplVar35 = (long *******)((long)ppppppplVar35 + 1);
          ppppppplStack_260 = ppppppplVar35;
          break;
        }
        plVar33 = plVar33 + 3;
        lVar26 = lVar26 + -0x18;
      } while (lVar26 != 0);
    }
    lVar15 = lVar31;
  } while (lVar31 != lVar7);
LAB_102f86714:
  ppppppplVar35 = ppppppplStack_260;
  ppppppplVar25 = ppppppplStack_268;
  ppppppplStack_2c8 = ppppppplStack_268;
  ppppppplStack_2d0 = ppppppplStack_270;
  ppppppplStack_2c0 = ppppppplStack_260;
  if (ppppppplStack_260 == (long *******)0x0) {
    if (ppppppplStack_270 == (long *******)0x0) {
      ppppppplStack_290 = (long *******)0x0;
      ppppppplStack_2c0 = (long *******)0x0;
    }
    else {
      _free(ppppppplStack_268);
      ppppppplStack_290 = (long *******)0x0;
      ppppppplStack_2c0 = (long *******)0x0;
    }
  }
  else {
    if (ppppppplStack_260 != (long *******)0x1) {
      if (ppppppplStack_260 < (long *******)0x15) {
        FUN_103403884(ppppppplStack_268,ppppppplStack_260);
      }
      else {
        __ZN4core5slice4sort6stable14driftsort_main17h4ffe93e4230e1abbE
                  (ppppppplStack_268,ppppppplStack_260,&ppppppplStack_270);
      }
    }
    ppppppplStack_258 = ppppppplVar25 + (long)ppppppplVar35 * 3;
    ppppppplStack_270 = ppppppplVar25;
    ppppppplStack_260 = ppppppplStack_2d0;
    ppppppplStack_268 = ppppppplVar25;
    FUN_1034c00b4(&ppppppplStack_170,&ppppppplStack_270);
    ppppppplStack_2c0 = ppppppplStack_170;
    ppppppplStack_290 = ppppppplStack_160;
  }
LAB_102f86788:
  if (ppppppplStack_2c0 == (long *******)0x0) {
    ppppppplStack_290 = (long *******)0x0;
  }
  ppppppplStack_2d0 = (long *******)(ulong)(ppppppplStack_2c0 != (long *******)0x0);
  ppppppplStack_2c8 = (long *******)0x0;
  ppppppplStack_2b8 = ppppppplStack_168;
  uStack_2a8 = 0;
  ppppppplStack_298 = ppppppplStack_168;
  pppppplStack_2b0 = (long ******)ppppppplStack_2d0;
  ppppppplStack_2a0 = ppppppplStack_2c0;
  func_0x000102f7f4f8(&lStack_2e8,&ppppppplStack_2d0);
  if (plVar14[5] != 0) {
    lVar7 = plVar14[4] + plVar14[5] * 0x270;
    uVar3 = *(undefined8 *)(lVar28 + 0x20);
    lVar30 = *(long *)(lVar28 + 0x28);
    lVar31 = plVar14[4];
    do {
      lVar15 = lVar31 + 0x270;
      if ((*(char *)(lVar31 + 0x269) == '\x01') && (*(long *)(lVar31 + 0x40) != 0)) {
        lVar26 = *(long *)(lVar31 + 0x40) * 0x18;
        plVar33 = (long *)(*(long *)(lVar31 + 0x38) + 0x10);
        do {
          if ((*plVar33 == lVar30) && (iVar6 = _memcmp(plVar33[-1],uVar3,lVar30), iVar6 == 0)) {
            pppppplVar29 = *(long *******)(lVar31 + 0x28);
            if (pppppplVar29 == (long ******)0x0) {
              pppppplVar11 = (long ******)0x1;
            }
            else {
              uVar37 = *(undefined8 *)(lVar31 + 0x20);
              pppppplVar11 = (long ******)_malloc(pppppplVar29);
              if (pppppplVar11 == (long ******)0x0) goto LAB_102f87138;
              _memcpy(pppppplVar11,uVar37,pppppplVar29);
              if (pppppplVar29 == (long ******)0x8000000000000000) goto LAB_102f86874;
            }
            ppppppplVar25 = (long *******)_malloc(0x60);
            if (ppppppplVar25 == (long *******)0x0) {
              func_0x0001087c9084(8,0x60);
              goto LAB_102f87154;
            }
            *ppppppplVar25 = pppppplVar29;
            ppppppplVar25[1] = pppppplVar11;
            ppppppplVar25[2] = pppppplVar29;
            ppppppplStack_270 = (long *******)0x4;
            ppppppplStack_260 = (long *******)0x1;
            ppppppplStack_268 = ppppppplVar25;
            if (lVar15 == lVar7) goto LAB_102f869b8;
            ppppppplVar35 = (long *******)0x1;
            goto LAB_102f868ec;
          }
          plVar33 = plVar33 + 3;
          lVar26 = lVar26 + -0x18;
        } while (lVar26 != 0);
      }
      lVar31 = lVar15;
    } while (lVar15 != lVar7);
  }
LAB_102f86874:
  ppppppplStack_260 = (long *******)0x0;
  ppppppplStack_230 = (long *******)0x0;
LAB_102f86a40:
  if (ppppppplStack_260 == (long *******)0x0) {
    ppppppplStack_230 = (long *******)0x0;
  }
  ppppppplStack_270 = (long *******)(ulong)(ppppppplStack_260 != (long *******)0x0);
  ppppppplStack_268 = (long *******)0x0;
  ppppppplStack_258 = ppppppplStack_188;
  uStack_248 = 0;
  ppppppplStack_238 = ppppppplStack_188;
  ppppppplStack_250 = ppppppplStack_270;
  ppppppplStack_240 = ppppppplStack_260;
  func_0x000102f7f4f8(&lStack_288,&ppppppplStack_270);
  pppppplVar29 = pppppplStack_278;
  pppplVar22 = pppplStack_280;
  pppppplVar11 = pppppplStack_2d8;
  pppplVar4 = pppplStack_2e0;
  plVar33 = (long *)_malloc(0x18);
  if (plVar33 == (long *)0x0) {
    func_0x0001087c906c(8,0x18);
    goto LAB_102f87154;
  }
  ppppppplStack_168 = (long *******)&DAT_103592578;
  ppppppplStack_170 = (long *******)(lVar28 + 0x18);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_210,s_Capabilities_from_the_____plugin_108af5b21,&ppppppplStack_170);
  plVar33[2] = lStack_200;
  plVar33[1] = lStack_208;
  *plVar33 = lStack_210;
  lStack_228 = 1;
  lStack_218 = 1;
  plStack_220 = plVar33;
  if ((*(byte *)(lVar28 + 0x78) & 1) != 0) {
    ppppppplStack_168 = (long *******)&DAT_103592578;
    ppppppplStack_170 = (long *******)(lVar28 + 0x18);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_1f8,s____Skills_from_this_plugin_are_p_108af5b45,&ppppppplStack_170);
    lVar30 = lStack_218;
    if (lStack_218 == lStack_228) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_228);
    }
    plVar33 = plStack_220 + lVar30 * 3;
    plVar33[1] = lStack_1f0;
    *plVar33 = lStack_1f8;
    plVar33[2] = lStack_1e8;
    lStack_218 = lVar30 + 1;
  }
  if (pppppplVar11 != (long ******)0x0) {
    puVar12 = (undefined8 *)_malloc((long)pppppplVar11 * 0x18);
    lVar30 = (long)pppppplVar11 * 0x18;
    if (puVar12 != (undefined8 *)0x0) {
      pppppplVar24 = (long ******)0x0;
      ppppppplStack_190 = (long *******)pppppplVar11;
      pppplVar21 = pppplVar4;
      ppppppplStack_188 = (long *******)puVar12;
      do {
        pppppplStack_1b0 = (long ******)apppplStack_158;
        puStack_1a8 = (undefined8 *)&DAT_103296ba4;
        apppplStack_158[0] = pppplVar21;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&ppppppplStack_170,s_____108ad9d60,&pppppplStack_1b0);
        ppppppplVar25 = ppppppplStack_188;
        puVar12[1] = ppppppplStack_168;
        *puVar12 = ppppppplStack_170;
        puVar12[2] = ppppppplStack_160;
        pppppplVar24 = (long ******)((long)pppppplVar24 + 1);
        puVar12 = puVar12 + 3;
        pppplVar21 = pppplVar21 + 3;
      } while (pppppplVar11 != pppppplVar24);
      puStack_1a8 = ppppppplStack_188;
      pppppplStack_1b0 = (long ******)ppppppplStack_190;
      pppppplStack_1a0 = pppppplVar11;
      FUN_1034c1c4c(&ppppppplStack_170,ppppppplStack_188,pppppplVar11,&UNK_108d5811e,2);
      ppppppplStack_188 = ppppppplStack_168;
      ppppppplStack_190 = ppppppplStack_170;
      ppppppplStack_180 = ppppppplStack_160;
      ppppppplStack_170 = (long *******)&ppppppplStack_190;
      ppppppplStack_168 = (long *******)&DAT_103592578;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_1e0,s____MCP_servers_from_this_plugin_a_108af5b79,&ppppppplStack_170);
      if (ppppppplStack_190 != (long *******)0x0) {
        _free(ppppppplStack_188);
      }
      if (pppppplVar11 != (long ******)0x0) {
        puVar12 = ppppppplVar25 + 1;
        pppppplVar24 = pppppplVar11;
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          pppppplVar24 = (long ******)((long)pppppplVar24 + -1);
        } while (pppppplVar24 != (long ******)0x0);
      }
      if (pppppplStack_1b0 != (long ******)0x0) {
        _free(ppppppplVar25);
      }
      lVar30 = lStack_218;
      if (lStack_218 == lStack_228) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_228);
      }
      plVar33 = plStack_220 + lVar30 * 3;
      plVar33[1] = lStack_1d8;
      *plVar33 = lStack_1e0;
      plVar33[2] = lStack_1d0;
      lStack_218 = lVar30 + 1;
      goto LAB_102f86c7c;
    }
LAB_102f870e0:
    lStack_358 = lVar30;
    func_0x0001087c9084(uStack_360,lStack_358);
    goto LAB_102f87154;
  }
LAB_102f86c7c:
  if (pppppplVar29 != (long ******)0x0) {
    puVar12 = (undefined8 *)_malloc((long)pppppplVar29 * 0x18);
    lVar30 = (long)pppppplVar29 * 0x18;
    if (puVar12 == (undefined8 *)0x0) goto LAB_102f870e0;
    pppppplVar24 = (long ******)0x0;
    ppppppplStack_190 = (long *******)pppppplVar29;
    pppplVar21 = pppplVar22;
    ppppppplStack_188 = (long *******)puVar12;
    do {
      pppppplStack_1b0 = (long ******)apppplStack_158;
      puStack_1a8 = (undefined8 *)&DAT_103296ba4;
      apppplStack_158[0] = pppplVar21;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppppppplStack_170,s_____108ad9d60,&pppppplStack_1b0);
      ppppppplVar25 = ppppppplStack_188;
      puVar12[1] = ppppppplStack_168;
      *puVar12 = ppppppplStack_170;
      puVar12[2] = ppppppplStack_160;
      pppppplVar24 = (long ******)((long)pppppplVar24 + 1);
      puVar12 = puVar12 + 3;
      pppplVar21 = pppplVar21 + 3;
    } while (pppppplVar29 != pppppplVar24);
    puStack_1a8 = ppppppplStack_188;
    pppppplStack_1b0 = (long ******)ppppppplStack_190;
    pppppplStack_1a0 = pppppplVar29;
    FUN_1034c1c4c(&ppppppplStack_170,ppppppplStack_188,pppppplVar29,&UNK_108d5811e,2);
    ppppppplStack_188 = ppppppplStack_168;
    ppppppplStack_190 = ppppppplStack_170;
    ppppppplStack_180 = ppppppplStack_160;
    ppppppplStack_170 = (long *******)&ppppppplStack_190;
    ppppppplStack_168 = (long *******)&DAT_103592578;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_1c8,s_3__Apps_from_this_plugin_availab_108af5bb8,&ppppppplStack_170);
    if (ppppppplStack_190 != (long *******)0x0) {
      _free(ppppppplStack_188);
    }
    if (pppppplVar29 != (long ******)0x0) {
      puVar12 = ppppppplVar25 + 1;
      pppppplVar24 = pppppplVar29;
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        pppppplVar24 = (long ******)((long)pppppplVar24 + -1);
      } while (pppppplVar24 != (long ******)0x0);
    }
    if (pppppplStack_1b0 != (long ******)0x0) {
      _free(ppppppplVar25);
    }
    lVar30 = lStack_218;
    if (lStack_218 == lStack_228) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_228);
    }
    plVar33 = plStack_220 + lVar30 * 3;
    plVar33[1] = lStack_1c0;
    *plVar33 = lStack_1c8;
    plVar33[2] = lStack_1b8;
    lStack_218 = lVar30 + 1;
  }
  lVar30 = lStack_218;
  plVar33 = plStack_220;
  if (lStack_218 == 1) {
    if (*plStack_220 != 0) {
      _free(plStack_220[1]);
    }
    if (lStack_228 != 0) {
      ppppppplVar25 = (long *******)0x8000000000000000;
LAB_102f86ebc:
      _free(plVar33);
      goto LAB_102f86ec4;
    }
  }
  else {
    puVar12 = (undefined8 *)_malloc(0x40);
    if (puVar12 == (undefined8 *)0x0) {
      uStack_360 = 1;
      lVar30 = lStack_358;
      goto LAB_102f870e0;
    }
    puVar12[1] = 0x6e6967756c702065;
    *puVar12 = 0x7365687420657355;
    puVar12[3] = 0x6170616320646574;
    puVar12[2] = 0x6169636f7373612d;
    puVar12[5] = 0x706c6568206f7420;
    puVar12[4] = 0x73656974696c6962;
    puVar12[7] = 0x2e6b736174206568;
    puVar12[6] = 0x742065766c6f7320;
    if (lVar30 == lStack_228) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_228);
    }
    plVar33 = plStack_220 + lVar30 * 3;
    *plVar33 = 0x40;
    plVar33[1] = (long)puVar12;
    plVar33[2] = 0x40;
    lStack_218 = lVar30 + 1;
    FUN_1034c1c4c(&ppppppplStack_170,plStack_220,lStack_218,&UNK_108d5275f,1);
    ppppppplVar32 = ppppppplStack_168;
    ppppppplVar25 = ppppppplStack_170;
    plVar33 = plStack_220;
    ppppppplStack_310 = ppppppplStack_160;
    if (lStack_218 != 0) {
      plVar20 = plStack_220 + 1;
      lVar30 = lStack_218;
      do {
        if (plVar20[-1] != 0) {
          _free(*plVar20);
        }
        plVar20 = plVar20 + 3;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    if (lStack_228 != 0) goto LAB_102f86ebc;
LAB_102f86ec4:
    if (ppppppplVar25 != (long *******)0x8000000000000000) {
      puVar12 = (undefined8 *)_malloc(9);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,9);
LAB_102f87154:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102f87158);
        (*pcVar5)();
      }
      *(undefined1 *)(puVar12 + 1) = 0x72;
      *puVar12 = 0x65706f6c65766564;
      puVar13 = (undefined8 *)_malloc(0x20);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x20);
        goto LAB_102f87154;
      }
      if (ppppppplStack_310 == (long *******)0x0) {
        lVar30 = 1;
      }
      else {
        lVar30 = _malloc(ppppppplStack_310);
        if (lVar30 == 0) {
          func_0x0001087c9084(1,ppppppplStack_310);
          goto LAB_102f87154;
        }
      }
      _memcpy(lVar30,ppppppplVar32);
      puVar13[2] = lVar30;
      puVar13[3] = ppppppplStack_310;
      *puVar13 = 0x8000000000000000;
      puVar13[1] = ppppppplStack_310;
      if (ppppppplVar25 != (long *******)0x0) {
        _free(ppppppplVar32);
      }
      bVar23 = false;
      puVar10[1] = 9;
      *puVar10 = 2;
      puVar10[2] = puVar12;
      puVar10[4] = 1;
      puVar10[3] = 9;
      puVar10[5] = puVar13;
      puVar10[7] = 0x8000000000000000;
      puVar10[6] = 1;
      *(undefined1 *)(puVar10 + 10) = 2;
      goto joined_r0x000102f86fa0;
    }
  }
  *puVar10 = 0x11;
  bVar23 = true;
joined_r0x000102f86fa0:
  if (pppppplVar29 != (long ******)0x0) {
    pppplVar21 = pppplVar22 + 1;
    do {
      if (pppplVar21[-1] != (long ***)0x0) {
        _free(*pppplVar21);
      }
      pppplVar21 = pppplVar21 + 3;
      pppppplVar29 = (long ******)((long)pppppplVar29 + -1);
    } while (pppppplVar29 != (long ******)0x0);
  }
  if (lStack_288 != 0) {
    _free(pppplVar22);
  }
  if (pppppplVar11 != (long ******)0x0) {
    pppplVar22 = pppplVar4 + 1;
    do {
      if (pppplVar22[-1] != (long ***)0x0) {
        _free(*pppplVar22);
      }
      pppplVar22 = pppplVar22 + 3;
      pppppplVar11 = (long ******)((long)pppppplVar11 + -1);
    } while (pppppplVar11 != (long ******)0x0);
  }
  if (lStack_2e8 != 0) {
    _free(pppplVar4);
  }
  lVar28 = lVar28 + 0x80;
  if (!bVar23) {
    return;
  }
  goto LAB_102f864ac;
LAB_102f87138:
  func_0x0001087c9084(1,pppppplVar29);
  goto LAB_102f87154;
LAB_102f868ec:
  do {
    lVar31 = lVar15 + 0x270;
    if ((*(char *)(lVar15 + 0x269) == '\x01') && (*(long *)(lVar15 + 0x40) != 0)) {
      lVar26 = *(long *)(lVar15 + 0x40) * 0x18;
      plVar33 = (long *)(*(long *)(lVar15 + 0x38) + 0x10);
      do {
        if ((*plVar33 == lVar30) && (iVar6 = _memcmp(plVar33[-1],uVar3,lVar30), iVar6 == 0)) {
          pppppplVar29 = *(long *******)(lVar15 + 0x28);
          if (pppppplVar29 == (long ******)0x0) {
            pppppplVar11 = (long ******)0x1;
          }
          else {
            uVar37 = *(undefined8 *)(lVar15 + 0x20);
            pppppplVar11 = (long ******)_malloc(pppppplVar29);
            if (pppppplVar11 == (long ******)0x0) {
              func_0x0001087c9084(1,pppppplVar29);
              goto LAB_102f87154;
            }
            _memcpy(pppppplVar11,uVar37,pppppplVar29);
            if (pppppplVar29 == (long ******)0x8000000000000000) goto LAB_102f869b8;
          }
          if (ppppppplVar35 == ppppppplStack_270) {
            FUN_10893e30c(&ppppppplStack_270,ppppppplVar35,1,8,0x18);
            ppppppplVar25 = ppppppplStack_268;
          }
          ppppppplVar16 = ppppppplVar25 + (long)ppppppplVar35 * 3;
          *ppppppplVar16 = pppppplVar29;
          ppppppplVar16[1] = pppppplVar11;
          ppppppplVar16[2] = pppppplVar29;
          ppppppplVar35 = (long *******)((long)ppppppplVar35 + 1);
          ppppppplStack_260 = ppppppplVar35;
          break;
        }
        plVar33 = plVar33 + 3;
        lVar26 = lVar26 + -0x18;
      } while (lVar26 != 0);
    }
    lVar15 = lVar31;
  } while (lVar31 != lVar7);
LAB_102f869b8:
  ppppppplVar35 = ppppppplStack_260;
  ppppppplVar25 = ppppppplStack_268;
  ppppppplStack_168 = ppppppplStack_268;
  ppppppplStack_170 = ppppppplStack_270;
  ppppppplStack_160 = ppppppplStack_260;
  if (ppppppplStack_260 == (long *******)0x0) {
    if (ppppppplStack_270 == (long *******)0x0) {
      ppppppplStack_230 = (long *******)0x0;
      ppppppplStack_260 = (long *******)0x0;
    }
    else {
      _free(ppppppplStack_268);
      ppppppplStack_230 = (long *******)0x0;
      ppppppplStack_260 = (long *******)0x0;
    }
  }
  else {
    if (ppppppplStack_260 != (long *******)0x1) {
      if (ppppppplStack_260 < (long *******)0x15) {
        FUN_103403884(ppppppplStack_268,ppppppplStack_260);
      }
      else {
        __ZN4core5slice4sort6stable14driftsort_main17h4ffe93e4230e1abbE
                  (ppppppplStack_268,ppppppplStack_260,&ppppppplStack_270);
      }
    }
    ppppppplStack_258 = ppppppplVar25 + (long)ppppppplVar35 * 3;
    ppppppplStack_270 = ppppppplVar25;
    ppppppplStack_260 = ppppppplStack_170;
    ppppppplStack_268 = ppppppplVar25;
    FUN_1034c00b4(&ppppppplStack_190,&ppppppplStack_270);
    ppppppplStack_260 = ppppppplStack_190;
    ppppppplStack_230 = ppppppplStack_180;
  }
  goto LAB_102f86a40;
LAB_102f86218:
  auVar44 = func_0x0001087c9084(1,lVar15);
  lVar31 = auVar44._8_8_;
  plStack_e0 = auVar44._0_8_;
  uStack_68 = 0x102f86224;
  ppppppplVar32 = *(long ********)(lVar31 + 0x20);
  if (ppppppplVar32 != (long *******)0x0) {
    plVar20 = *(long **)(lVar31 + 0x18);
    plVar33 = *(long **)(lVar31 + 8);
    if (plVar33 != plVar20) {
      lVar7 = *(long *)(lVar31 + 0x28);
      if (*(long *)(lVar7 + 0x78) == 0) {
        plVar14 = plVar33 + (long)ppppppplVar32 * 2;
        puVar17 = (undefined *)((ulong)((long)plVar20 + (-0x10 - (long)plVar33)) >> 4);
        if ((undefined *)((long)ppppppplVar32 + -1) <= puVar17) {
          puVar17 = (undefined *)((long)ppppppplVar32 + -1);
        }
        if (((undefined *)0x3 < puVar17) && (((int)plVar20 - (int)plVar33 & 0xfU) == 0)) {
          uVar9 = (ulong)(puVar17 + 1) & 3;
          uVar1 = 4;
          if (uVar9 != 0) {
            uVar1 = uVar9;
          }
          lVar30 = (long)(puVar17 + 1) - uVar1;
          ppppppplVar32 = (long *******)((long)ppppppplVar32 - lVar30);
          plVar33 = plVar33 + lVar30 * 2;
          do {
            lVar30 = lVar30 + -4;
          } while (lVar30 != 0);
        }
        do {
          ppppppplVar32 = (long *******)((long)ppppppplVar32 + -1);
          plVar34 = plVar14;
          if (ppppppplVar32 == (long *******)0x0) break;
          plVar33 = plVar33 + 2;
          plVar34 = plVar33;
        } while (plVar33 != plVar20);
        *(long **)(lVar31 + 8) = plVar34;
        *(long ********)(lVar31 + 0x20) = ppppppplVar32;
      }
      else {
        uStack_d8 = *(undefined8 *)(lVar7 + 0x80);
        uVar3 = *(undefined8 *)(lVar7 + 0x88);
        puStack_70 = &stack0xfffffffffffffff0;
        do {
          lVar26 = *plVar33;
          lVar28 = plVar33[1];
          plVar33 = plVar33 + 2;
          *(long **)(lVar31 + 8) = plVar33;
          ppppppplVar32 = (long *******)((long)ppppppplVar32 + -1);
          *(long ********)(lVar31 + 0x20) = ppppppplVar32;
          uVar9 = func_0x0001033f7ffc(uStack_d8,uVar3,lVar26);
          lVar15 = 0;
          lVar2 = *(long *)(lVar7 + 0x60);
          bVar18 = (byte)(uVar9 >> 0x39);
          while( true ) {
            uVar9 = uVar9 & *(ulong *)(lVar7 + 0x68);
            uVar37 = *(undefined8 *)(lVar2 + uVar9);
            bVar36 = (byte)((ulong)uVar37 >> 8);
            bVar38 = (byte)((ulong)uVar37 >> 0x10);
            bVar39 = (byte)((ulong)uVar37 >> 0x18);
            bVar40 = (byte)((ulong)uVar37 >> 0x20);
            bVar41 = (byte)((ulong)uVar37 >> 0x28);
            bVar42 = (byte)((ulong)uVar37 >> 0x30);
            bVar43 = (byte)((ulong)uVar37 >> 0x38);
            for (uVar1 = CONCAT17(-(bVar43 == bVar18),
                                  CONCAT16(-(bVar42 == bVar18),
                                           CONCAT15(-(bVar41 == bVar18),
                                                    CONCAT14(-(bVar40 == bVar18),
                                                             CONCAT13(-(bVar39 == bVar18),
                                                                      CONCAT12(-(bVar38 == bVar18),
                                                                               CONCAT11(-(bVar36 ==
                                                                                         bVar18),-((
                                                  byte)uVar37 == bVar18)))))))) & 0x8080808080808080
                ; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
              uVar19 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8
              ;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar9 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) &
                       *(ulong *)(lVar7 + 0x68);
              if (lVar26 == *(long *)(lVar2 + -0x20 + uVar19 * -0x20)) {
                lVar2 = lVar2 + uVar19 * -0x20;
                lVar15 = *(long *)(lVar2 + -8);
                if (lVar15 == 0) {
                  lVar8 = 1;
                }
                else {
                  uVar37 = *(undefined8 *)(lVar2 + -0x10);
                  lVar8 = _malloc(lVar15);
                  if (lVar8 == 0) {
                    auVar44 = func_0x0001087c9084(1,lVar15);
                    plVar14 = auVar44._8_8_;
                    puVar10 = auVar44._0_8_;
                    pcStack_e8 = FUN_102f86444;
                    lVar2 = plVar14[1];
                    lStack_358 = 0x40;
                    uStack_360 = 8;
                    lVar28 = *plVar14;
                    plStack_140 = plVar33;
                    ppppppplStack_138 = ppppppplVar32;
                    uStack_130 = uVar37;
                    lStack_128 = lVar30;
                    lStack_120 = lVar15;
                    lStack_118 = lVar26;
                    uStack_110 = uVar3;
                    lStack_108 = lVar7;
                    lStack_100 = lVar31;
                    plStack_f8 = plVar20;
                    ppuStack_f0 = &puStack_70;
                    goto LAB_102f864ac;
                  }
                  _memcpy(lVar8,uVar37,lVar15);
                  if (lVar15 == -0x7fffffffffffffff) goto LAB_102f86330;
                  if (lVar15 == -0x8000000000000000) goto LAB_102f8632c;
                }
                plStack_e0[2] = lVar15;
                plStack_e0[3] = lVar26;
                *plStack_e0 = lVar15;
                plStack_e0[1] = lVar8;
                *(int *)(plStack_e0 + 4) = (int)lVar28;
                return;
              }
            }
            bVar36 = NEON_umaxv(CONCAT17(-(bVar43 == 0xff),
                                         CONCAT16(-(bVar42 == 0xff),
                                                  CONCAT15(-(bVar41 == 0xff),
                                                           CONCAT14(-(bVar40 == 0xff),
                                                                    CONCAT13(-(bVar39 == 0xff),
                                                                             CONCAT12(-(bVar38 ==
                                                                                       0xff),
                                                  CONCAT11(-(bVar36 == 0xff),-((byte)uVar37 == 0xff)
                                                          ))))))),1);
            lVar8 = lVar30;
            if ((bVar36 & 1) != 0) break;
            lVar15 = lVar15 + 8;
            uVar9 = uVar9 + lVar15;
          }
LAB_102f8632c:
          if (ppppppplVar32 == (long *******)0x0) break;
LAB_102f86330:
          lVar30 = lVar8;
        } while (plVar33 != plVar20);
      }
    }
  }
  *plStack_e0 = -0x8000000000000000;
  return;
}

