
/* WARNING: Possible PIC construction at 0x000105478f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105478f08) */
/* WARNING: Type propagation algorithm not settling */

long **** __ZN9codex_tui13app_backtrack37__LT_impl_u20_codex_tui__app__App_GT_21reset_backtrack_state17h76df993651b7ef10E
                    (long ****param_1)

{
  byte *pbVar1;
  long *****ppppplVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long **pplVar5;
  long ****pppplVar6;
  bool bVar7;
  short sVar8;
  long *plVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  undefined4 uVar13;
  ushort uVar14;
  code *pcVar15;
  ulong **ppuVar16;
  long lVar17;
  long **pplVar18;
  long **pplVar19;
  long ******pppppplVar20;
  long ****pppplVar21;
  long ******pppppplVar22;
  ulong uVar23;
  ulong uVar24;
  long ****pppplVar25;
  long lVar27;
  undefined8 uVar28;
  ulong *puVar29;
  uint uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  long *******ppppppplVar40;
  long ***ppplVar41;
  long *****ppppplVar42;
  ulong uVar43;
  long *******ppppppplVar44;
  ulong uVar45;
  long lVar46;
  undefined *puVar47;
  ulong uVar48;
  long ******pppppplVar49;
  ulong uVar50;
  long ******pppppplVar51;
  undefined8 *******pppppppuVar52;
  long ******in_xzr;
  long *plVar53;
  long ***ppplVar54;
  long ******pppppplVar55;
  long ***ppplVar56;
  long ******pppppplVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [12];
  ulong uStack_5a0;
  uint uStack_594;
  ulong uStack_590;
  long lStack_588;
  ushort *puStack_580;
  long ******pppppplStack_578;
  uint uStack_56c;
  ulong uStack_568;
  short asStack_55a [5];
  undefined8 uStack_550;
  ulong uStack_548;
  short asStack_53a [5];
  long *******ppppppplStack_530;
  long lStack_528;
  long *******ppppppplStack_520;
  ushort uStack_518;
  ushort uStack_516;
  ushort uStack_514;
  ushort uStack_512;
  uint uStack_510;
  undefined4 uStack_50c;
  long *******ppppppplStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined8 uStack_4e8;
  undefined1 uStack_410;
  undefined1 uStack_40c;
  undefined1 uStack_408;
  undefined8 uStack_404;
  undefined2 uStack_3fc;
  long *******ppppppplStack_3f8;
  uint uStack_3f0;
  undefined4 uStack_3ec;
  undefined2 uStack_3e8;
  undefined2 uStack_3e6;
  undefined2 uStack_3e4;
  undefined2 uStack_3e2;
  long ******pppppplStack_3d0;
  ulong uStack_3c8;
  long ******pppppplStack_3c0;
  long ******pppppplStack_3b8;
  ulong uStack_3b0;
  long ******pppppplStack_3a8;
  long *******ppppppplStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  ulong *puStack_388;
  undefined8 *******pppppppuStack_380;
  undefined8 uStack_378;
  ulong *puStack_370;
  long ******pppppplStack_368;
  long *****ppppplStack_360;
  long lStack_358;
  long *plStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 ******ppppppuStack_50;
  undefined8 uStack_48;
  ulong *puVar26;
  
  *(undefined2 *)(param_1 + 0x116b) = 0;
  param_1[0x116a] = (long ***)0xffffffffffffffff;
  if (*(char *)((long)param_1 + 0x1ad5) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x1ad5) = 0;
    *(undefined1 *)((long)param_1 + 0x924) = 0;
    *(undefined1 *)((long)param_1 + 0x92a) = 4;
    ppplVar41 = param_1[0x357];
    auVar62 = func_0x000106032954(8);
    pplVar18 = ppplVar41[0x38];
    do {
      if (((ulong)pplVar18 & 1) != 0) {
        return auVar62._0_8_;
      }
      if (pplVar18 == (long **)0xfffffffffffffffe) {
        auVar60 = __ZN3std7process5abort17hdc01e45e25b715e8E();
        pppppplStack_368 = auVar60._8_8_;
        puVar26 = auVar60._0_8_;
        uStack_48 = 0x105479a80;
        puStack_370 = puVar26 + 0x1010;
        pppppplVar20 = (long ******)*puStack_370;
        plVar9 = (long *)puVar26[0x1011];
        uVar38 = (long)plVar9 * 0x10;
        auVar60._8_8_ = plVar9;
        auVar60._0_8_ = uVar38;
        pppppplVar22 = pppppplVar20 + (long)plVar9 * 2;
        uVar50 = uVar38 ^ 0xfffffffffffffff0;
        pppppplVar51 = (long ******)-(long)plVar9;
        uVar45 = 0xe20501945e34b382;
        pppppplVar55 = pppppplVar22;
        ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
        goto LAB_105479ae8;
      }
      pplVar19 = (long **)((long)pplVar18 + 2);
      pplVar5 = ppplVar41[0x38];
      bVar7 = pplVar5 != pplVar18;
      pplVar18 = pplVar5;
    } while (bVar7);
    ppplVar41[0x38] = pplVar19;
    LOAcquire();
    pplVar18 = ppplVar41[0x11];
    ppplVar41[0x11] = (long **)((long)pplVar18 + 1);
    param_1 = (long ****)func_0x000105217788(ppplVar41 + 0x10,pplVar18);
    *(undefined1 (*) [12])(param_1 + ((ulong)pplVar18 & 0x1f) * 2) = auVar62;
    param_1[0x42] = (long ***)((ulong)param_1[0x42] | 1L << ((ulong)pplVar18 & 0x1f));
    LORelease();
    ppplVar54 = ppplVar41 + 0x22;
    LOAcquire();
    pplVar18 = *ppplVar54;
    *ppplVar54 = (long **)((ulong)pplVar18 | 2);
    LORelease();
    if (pplVar18 == (long **)0x0) {
      pplVar18 = ppplVar41[0x20];
      param_1 = (long ****)ppplVar41[0x21];
      ppplVar41[0x20] = (long **)0x0;
      pplVar19 = *ppplVar54;
      *ppplVar54 = (long **)in_xzr;
      LORelease();
      if (pplVar18 != (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105479a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppplVar25 = (long ****)(*(code *)pplVar18[1])(pplVar19,param_1);
        return pppplVar25;
      }
    }
  }
  return param_1;
LAB_10547a120:
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  goto LAB_10547a124;
code_r0x000105478fa8:
  ppppplVar2 = (long *****)((long)ppppplVar42 + 2);
  ppppplVar4 = pppppplVar20[0x38];
  bVar7 = ppppplVar4 == ppppplVar42;
  ppppplVar42 = ppppplVar4;
  if (bVar7) {
    pppppplVar20[0x38] = ppppplVar2;
    LOAcquire();
    ppppplVar42 = pppppplVar20[0x11];
    pppppplVar20[0x11] = (long *****)((long)ppppplVar42 + 1);
    lVar27 = func_0x000105217788(pppppplVar20 + 0x10,ppppplVar42);
    puVar33 = (undefined8 *)(lVar27 + ((ulong)ppppplVar42 & 0x1f) * 0x10);
    *puVar33 = auVar60._0_8_;
    *(int *)(puVar33 + 1) = auVar60._8_4_;
    *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 1L << ((ulong)ppppplVar42 & 0x1f);
    LORelease();
    pppppplVar51 = pppppplVar20 + 0x22;
    LOAcquire();
    ppppplVar42 = *pppppplVar51;
    *pppppplVar51 = (long *****)((ulong)ppppplVar42 | 2);
    LORelease();
    if (ppppplVar42 == (long *****)0x0) {
      ppppplVar42 = pppppplVar20[0x20];
      pppppplVar20[0x20] = (long *****)0x0;
      *pppppplVar51 = (long *****)in_xzr;
      LORelease();
      if (ppppplVar42 != (long *****)0x0) {
        (*(code *)ppppplVar42[1])(pppppplVar20[0x21]);
      }
    }
LAB_105479024:
    LOAcquire();
    ppppplVar42 = pppppplVar20[0x39];
    pppppplVar20[0x39] = (long *****)((long)ppppplVar42 + -1);
    LORelease();
    if (ppppplVar42 == (long *****)0x1) {
      LOAcquire();
      ppppplVar42 = pppppplVar20[0x11];
      pppppplVar20[0x11] = (long *****)((long)ppppplVar42 + 1);
      lVar27 = func_0x000105217788(pppppplVar20 + 0x10,ppppplVar42);
      *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 0x200000000;
      LORelease();
      pppppplVar51 = pppppplVar20 + 0x22;
      LOAcquire();
      ppppplVar42 = *pppppplVar51;
      *pppppplVar51 = (long *****)((ulong)ppppplVar42 | 2);
      LORelease();
      if (ppppplVar42 == (long *****)0x0) {
        ppppplVar42 = pppppplVar20[0x20];
        pppppplVar20[0x20] = (long *****)0x0;
        *pppppplVar51 = (long *****)in_xzr;
        LORelease();
        if (ppppplVar42 != (long *****)0x0) {
          (*(code *)ppppplVar42[1])(pppppplVar20[0x21]);
        }
      }
    }
    ppppplVar42 = *pppppplVar20;
    *pppppplVar20 = (long *****)((long)ppppplVar42 + -1);
    LORelease();
    if (ppppplVar42 == (long *****)0x1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&uStack_518);
    }
    goto LAB_105479198;
  }
  goto LAB_105478f9c;
  while( true ) {
    pppppplVar49 = pppppplVar55 + -2;
    (*(code *)pppppplVar55[-1][5][3])
              (&ppppplStack_360,
               (long)*pppppplVar49 + ((long)pppppplVar55[-1][2] - 1U & 0xfffffffffffffff0) + 0x10);
    uVar50 = uVar50 + 0x10;
    pppppplVar51 = (long ******)((long)pppppplVar51 + 1);
    pppppplVar55 = pppppplVar49;
    if (lStack_358 == -0x1dfafe6ba1cb4c7e && ppppplStack_360 == (long *****)0x41474c40e5ec6ee9)
    break;
LAB_105479ae8:
    pppppplVar57 = pppppplVar20;
    if (uVar50 == 0xfffffffffffffff0) {
      uVar50 = 0xfffffffffffffff0;
      pppppplVar49 = pppppplVar55;
      goto joined_r0x000105479b50;
    }
  }
  if (pppppplVar51 != (long ******)0x1) {
    pppppplVar57 = (long ******)((long)pppppplVar20 - uVar50);
  }
joined_r0x000105479b50:
  if (pppppplVar57 == pppppplVar22) {
LAB_105479c20:
    *(undefined2 *)(puStack_370 + 0x15b) = 0;
    puStack_370[0x15a] = 0xffffffffffffffff;
    if (*(char *)((long)puVar26 + 0x1ad5) == '\x01') {
      *(undefined1 *)((long)puVar26 + 0x1ad5) = 0;
      *(undefined1 *)((long)puVar26 + 0x924) = 0;
      *(undefined1 *)((long)puVar26 + 0x92a) = 4;
      uVar45 = puVar26[0x357];
      auVar60 = func_0x000106032954(8);
      uVar38 = *(ulong *)(uVar45 + 0x1c0);
      do {
        if ((uVar38 & 1) != 0) goto LAB_105479cf0;
        if (uVar38 == 0xfffffffffffffffe) goto LAB_10547a120;
        uVar23 = uVar38 + 2;
        uVar24 = *(ulong *)(uVar45 + 0x1c0);
        bVar7 = uVar24 != uVar38;
        uVar38 = uVar24;
      } while (bVar7);
      *(ulong *)(uVar45 + 0x1c0) = uVar23;
      LOAcquire();
      pppppplVar20 = *(long *******)(uVar45 + 0x88);
      *(long *)(uVar45 + 0x88) = (long)pppppplVar20 + 1;
      lVar27 = func_0x000105217788(uVar45 + 0x80,pppppplVar20);
      puVar33 = (undefined8 *)(lVar27 + ((ulong)pppppplVar20 & 0x1f) * 0x10);
      *puVar33 = auVar60._0_8_;
      *(int *)(puVar33 + 1) = auVar60._8_4_;
      *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 1L << ((ulong)pppppplVar20 & 0x1f);
      LORelease();
      puVar29 = (ulong *)(uVar45 + 0x110);
      LOAcquire();
      uVar38 = *puVar29;
      *puVar29 = uVar38 | 2;
      LORelease();
      if (uVar38 == 0) {
        lVar27 = *(long *)(uVar45 + 0x100);
        *(undefined8 *)(uVar45 + 0x100) = 0;
        *puVar29 = (ulong)in_xzr;
        LORelease();
        if (lVar27 != 0) {
          (**(code **)(lVar27 + 8))(*(undefined8 *)(uVar45 + 0x108));
        }
      }
    }
LAB_105479cf0:
    puStack_190 = (undefined8 *)_malloc(0x1c);
    if (puStack_190 != (undefined8 *)0x0) {
      puStack_190[1] = 0x7373656d2073756f;
      *puStack_190 = 0x6976657270206f4e;
      *(undefined8 *)((long)puStack_190 + 0x14) = 0x2e74696465206f74;
      *(undefined8 *)((long)puStack_190 + 0xc) = 0x206567617373656d;
      uStack_198 = 0x1c;
      uStack_188 = 0x1c;
      ppppplStack_360 = (long *****)0x8000000000000000;
      __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE
                (puVar26,&uStack_198,&ppppplStack_360);
      pppppplStack_368[0x10][0x39] = (long ****)((long)pppppplStack_368[0x10][0x39] + 1);
      pppplVar25 = *pppppplStack_368[0x10];
      *pppppplStack_368[0x10] = (long ****)((long)pppplVar25 + 1);
      if (-1 < (long)pppplVar25) {
        ppppplVar42 = pppppplStack_368[0x10];
        ppppplStack_360 = ppppplVar42;
        auVar62 = func_0x000106032954(8);
        pppplVar25 = auVar62._0_8_;
        pppplVar21 = ppppplVar42[0x38];
        do {
          if (((ulong)pppplVar21 & 1) != 0) goto LAB_105479e00;
          if (pppplVar21 == (long ****)0xfffffffffffffffe) goto LAB_10547a120;
          pppplVar3 = (long ****)((long)pppplVar21 + 2);
          pppplVar6 = ppppplVar42[0x38];
          bVar7 = pppplVar6 != pppplVar21;
          pppplVar21 = pppplVar6;
        } while (bVar7);
        ppppplVar42[0x38] = pppplVar3;
        LOAcquire();
        pppplVar21 = ppppplVar42[0x11];
        ppppplVar42[0x11] = (long ****)((long)pppplVar21 + 1);
        pppplVar25 = (long ****)func_0x000105217788(ppppplVar42 + 0x10,pppplVar21);
        *(undefined1 (*) [12])(pppplVar25 + ((ulong)pppplVar21 & 0x1f) * 2) = auVar62;
        pppplVar25[0x42] = (long ***)((ulong)pppplVar25[0x42] | 1L << ((ulong)pppplVar21 & 0x1f));
        LORelease();
        ppppplVar2 = ppppplVar42 + 0x22;
        LOAcquire();
        pppplVar21 = *ppppplVar2;
        *ppppplVar2 = (long ****)((ulong)pppplVar21 | 2);
        LORelease();
        if (pppplVar21 == (long ****)0x0) {
          pppplVar21 = ppppplVar42[0x20];
          pppplVar25 = ppppplVar42[0x21];
          ppppplVar42[0x20] = (long ****)0x0;
          *ppppplVar2 = (long ****)in_xzr;
          LORelease();
          if (pppplVar21 != (long ****)0x0) {
            pppplVar25 = (long ****)(*(code *)pppplVar21[1])(pppplVar25);
          }
        }
LAB_105479e00:
        LOAcquire();
        pppplVar21 = ppppplVar42[0x39];
        ppppplVar42[0x39] = (long ****)((long)pppplVar21 + -1);
        LORelease();
        if (pppplVar21 == (long ****)0x1) {
          LOAcquire();
          pppplVar25 = ppppplVar42[0x11];
          ppppplVar42[0x11] = (long ****)((long)pppplVar25 + 1);
          pppplVar25 = (long ****)func_0x000105217788(ppppplVar42 + 0x10,pppplVar25);
          pppplVar25[0x42] = (long ***)((ulong)pppplVar25[0x42] | 0x200000000);
          LORelease();
          ppppplVar2 = ppppplVar42 + 0x22;
          LOAcquire();
          pppplVar21 = *ppppplVar2;
          *ppppplVar2 = (long ****)((ulong)pppplVar21 | 2);
          LORelease();
          if (pppplVar21 == (long ****)0x0) {
            pppplVar21 = ppppplVar42[0x20];
            pppplVar25 = ppppplVar42[0x21];
            ppppplVar42[0x20] = (long ****)0x0;
            *ppppplVar2 = (long ****)in_xzr;
            LORelease();
            if (pppplVar21 != (long ****)0x0) {
              pppplVar25 = (long ****)(*(code *)pppplVar21[1])(pppplVar25);
            }
          }
        }
        pppplVar21 = *ppppplVar42;
        *ppppplVar42 = (long ****)((long)pppplVar21 + -1);
        LORelease();
        if (pppplVar21 == (long ****)0x1) {
          DataMemoryBarrier(2,1);
          pppplVar25 = (long ****)
                       __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE
                                 (&ppppplStack_360);
        }
        return pppplVar25;
      }
LAB_10547a124:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10547a128);
      (*pcVar15)();
    }
    func_0x0001087c9084(1,0x1c);
    pppppplVar55 = pppppplVar22;
  }
  else {
    uVar50 = 0;
    uVar23 = (ulong)((long)pppppplVar22 - (long)pppppplVar57) >> 4;
    pppppplVar51 = pppppplVar57 + 1;
    uVar45 = 0x50a5772646a43e81;
    do {
      (*(code *)(*pppppplVar51)[5][3])
                (&ppppplStack_360,
                 (long)pppppplVar51[-1] +
                 ((long)(*pppppplVar51)[2] - 1U & 0xfffffffffffffff0) + 0x10);
      pppppplVar55 = pppppplStack_368;
      if (ppppplStack_360 == (long *****)0xa6bc4e89c9000fa6 && lStack_358 == 0x50a5772646a43e81) {
        uVar50 = uVar50 + 1;
      }
      pppppplVar51 = pppppplVar51 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    pppppplVar49 = (long ******)0x0;
    if (uVar50 == 0) goto LAB_105479c20;
    __ZN9codex_tui3tui3Tui16enter_alt_screen17h90037f44674e7892E(pppppplStack_368);
    if (plVar9 == (long *)0x0) {
      lVar27 = 8;
LAB_105479e7c:
      plStack_1b0 = plVar9;
      lStack_1a8 = lVar27;
      plStack_1a0 = plVar9;
      FUN_10526ecc0(&uStack_198,puVar26 + 0x10db);
      __ZN9codex_tui13pager_overlay7Overlay14new_transcript17h27b3c26b8c744b0dE
                (&ppppplStack_360,&plStack_1b0,&uStack_198);
      if (puVar26[0xf75] == 2) {
        FUN_1051913c8(puVar26 + 0xf76);
      }
      else if (puVar26[0xf75] != 3) {
        FUN_1051913c8(puVar26 + 0xf75);
        FUN_105163bd0(puVar26 + 0xfa6);
      }
      _memcpy(puVar26 + 0xf75,&ppppplStack_360,0x1a8);
      pppppplVar55[0x10][0x39] = (long ****)((long)pppppplVar55[0x10][0x39] + 1);
      pppplVar25 = *pppppplVar55[0x10];
      *pppppplVar55[0x10] = (long ****)((long)pppplVar25 + 1);
      if (-1 < (long)pppplVar25) {
        ppppplVar42 = pppppplVar55[0x10];
        ppppplStack_360 = ppppplVar42;
        auVar62 = func_0x000106032954(8);
        pppplVar25 = ppppplVar42[0x38];
        do {
          if (((ulong)pppplVar25 & 1) != 0) goto LAB_105479fb4;
          if (pppplVar25 == (long ****)0xfffffffffffffffe) goto LAB_10547a120;
          pppplVar21 = (long ****)((long)pppplVar25 + 2);
          pppplVar3 = ppppplVar42[0x38];
          bVar7 = pppplVar3 != pppplVar25;
          pppplVar25 = pppplVar3;
        } while (bVar7);
        ppppplVar42[0x38] = pppplVar21;
        LOAcquire();
        pppplVar25 = ppppplVar42[0x11];
        ppppplVar42[0x11] = (long ****)((long)pppplVar25 + 1);
        lVar27 = func_0x000105217788(ppppplVar42 + 0x10,pppplVar25);
        *(undefined1 (*) [12])(lVar27 + ((ulong)pppplVar25 & 0x1f) * 0x10) = auVar62;
        *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 1L << ((ulong)pppplVar25 & 0x1f);
        LORelease();
        ppppplVar2 = ppppplVar42 + 0x22;
        LOAcquire();
        pppplVar25 = *ppppplVar2;
        *ppppplVar2 = (long ****)((ulong)pppplVar25 | 2);
        LORelease();
        if (pppplVar25 == (long ****)0x0) {
          pppplVar25 = ppppplVar42[0x20];
          ppppplVar42[0x20] = (long ****)0x0;
          *ppppplVar2 = (long ****)in_xzr;
          LORelease();
          if (pppplVar25 != (long ****)0x0) {
            (*(code *)pppplVar25[1])(ppppplVar42[0x21]);
          }
        }
LAB_105479fb4:
        LOAcquire();
        pppplVar25 = ppppplVar42[0x39];
        ppppplVar42[0x39] = (long ****)((long)pppplVar25 + -1);
        LORelease();
        if (pppplVar25 == (long ****)0x1) {
          LOAcquire();
          pppplVar25 = ppppplVar42[0x11];
          ppppplVar42[0x11] = (long ****)((long)pppplVar25 + 1);
          lVar27 = func_0x000105217788(ppppplVar42 + 0x10,pppplVar25);
          *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 0x200000000;
          LORelease();
          ppppplVar2 = ppppplVar42 + 0x22;
          LOAcquire();
          pppplVar25 = *ppppplVar2;
          *ppppplVar2 = (long ****)((ulong)pppplVar25 | 2);
          LORelease();
          if (pppplVar25 == (long ****)0x0) {
            pppplVar25 = ppppplVar42[0x20];
            ppppplVar42[0x20] = (long ****)0x0;
            *ppppplVar2 = (long ****)in_xzr;
            LORelease();
            if (pppplVar25 != (long ****)0x0) {
              (*(code *)pppplVar25[1])(ppppplVar42[0x21]);
            }
          }
        }
        pppplVar25 = *ppppplVar42;
        *ppppplVar42 = (long ****)((long)pppplVar25 + -1);
        LORelease();
        if (pppplVar25 == (long ****)0x1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&ppppplStack_360);
        }
        *(undefined1 *)((long)puStack_370 + 0xaea) = 1;
        if (*(char *)((long)puVar26 + 0x1ad5) == '\x01') {
          *(undefined1 *)((long)puVar26 + 0x1ad5) = 0;
          *(undefined1 *)((long)puVar26 + 0x924) = 0;
          *(undefined1 *)((long)puVar26 + 0x92a) = 4;
          uVar45 = puVar26[0x357];
          auVar62 = func_0x000106032954(8);
          uVar50 = *(ulong *)(uVar45 + 0x1c0);
          do {
            if ((uVar50 & 1) != 0) goto LAB_10547a0f4;
            if (uVar50 == 0xfffffffffffffffe) goto LAB_10547a120;
            uVar38 = uVar50 + 2;
            uVar23 = *(ulong *)(uVar45 + 0x1c0);
            bVar7 = uVar23 != uVar50;
            uVar50 = uVar23;
          } while (bVar7);
          *(ulong *)(uVar45 + 0x1c0) = uVar38;
          LOAcquire();
          uVar50 = *(ulong *)(uVar45 + 0x88);
          *(ulong *)(uVar45 + 0x88) = uVar50 + 1;
          lVar27 = func_0x000105217788(uVar45 + 0x80,uVar50);
          *(undefined1 (*) [12])(lVar27 + (uVar50 & 0x1f) * 0x10) = auVar62;
          *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 1L << (uVar50 & 0x1f);
          LORelease();
          puVar29 = (ulong *)(uVar45 + 0x110);
          LOAcquire();
          uVar50 = *puVar29;
          *puVar29 = uVar50 | 2;
          LORelease();
          if (uVar50 == 0) {
            lVar27 = *(long *)(uVar45 + 0x100);
            *(undefined8 *)(uVar45 + 0x100) = 0;
            *puVar29 = (ulong)in_xzr;
            LORelease();
            if (lVar27 != 0) {
              (**(code **)(lVar27 + 8))(*(undefined8 *)(uVar45 + 0x108));
            }
          }
        }
LAB_10547a0f4:
        pppplVar25 = (long ****)func_0x00010547b1e8(puVar26,pppppplVar55[0x10]);
        return pppplVar25;
      }
      goto LAB_10547a124;
    }
    lVar27 = _malloc(uVar38);
    if (lVar27 != 0) {
      lVar17 = 0;
      plVar37 = plVar9;
      do {
        if (uVar38 - lVar17 == 0) break;
        uVar28 = ((undefined8 *)((long)pppppplVar20 + lVar17))[1];
        plVar53 = *(long **)((long)pppppplVar20 + lVar17);
        lVar46 = *plVar53;
        *plVar53 = lVar46 + 1;
        if (lVar46 < 0) goto LAB_10547a124;
        ((undefined8 *)(lVar27 + lVar17))[1] = uVar28;
        *(undefined8 *)(lVar27 + lVar17) = plVar53;
        lVar17 = lVar17 + 0x10;
        plVar37 = (long *)((long)plVar37 - 1);
      } while (plVar37 != (long *)0x0);
      goto LAB_105479e7c;
    }
  }
  ppppppplVar40 = auVar60._8_8_;
  lVar27 = auVar60._0_8_;
  uVar28 = func_0x0001087c9084(8,lVar27);
  FUN_105163bd0(puVar26 + 0xfa6);
  puVar29 = (ulong *)0x1a8;
  _memcpy((long)puVar26 + lVar27,&ppppplStack_360);
  uVar28 = __Unwind_Resume(uVar28);
  pppppplVar22 = *ppppppplVar40;
  *ppppppplVar40 = (long ******)((long)pppppplVar22 + -1);
  LORelease();
  if (pppppplVar22 == (long ******)0x1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&ppppplStack_360);
  }
  __Unwind_Resume(uVar28);
  auVar61 = func_0x000108a07bc4();
  lVar46 = auVar61._8_8_;
  auVar59._8_8_ = lVar46;
  auVar59._0_8_ = puVar29;
  lVar17 = auVar61._0_8_;
  uStack_378 = 0x10547a200;
  uStack_390 = uVar28;
  puStack_388 = puVar26;
  pppppppuStack_380 = &ppppppuStack_50;
  if ((*(byte *)(lVar17 + 0x8b59) & 1) != 0) {
    func_0x00010547b1e8(lVar17,*(undefined8 *)(lVar46 + 0x80));
    if (0 < (long)*puVar29) {
      _free(puVar29[1]);
    }
    return (long ****)0x0;
  }
  pppppppuVar52 = &pppppppuStack_380;
  ppuVar16 = (ulong **)&uStack_5a0;
  uVar38 = *puVar29;
  pppppplStack_3d0 = pppppplVar51;
  uStack_3c8 = uVar50;
  pppppplStack_3c0 = pppppplVar49;
  pppppplStack_3b8 = pppppplVar55;
  uStack_3b0 = uVar45;
  pppppplStack_3a8 = pppppplVar20;
  ppppppplStack_3a0 = ppppppplVar40;
  lStack_398 = lVar27;
  if (uVar38 >> 1 != 0x4000000000000001 || 1 < *(ulong *)(lVar17 + 0x7ba8)) {
    if (*(ulong *)(lVar17 + 0x7ba8) == 3) {
      if ((long)uVar38 < 1) {
        return (long ****)0x0;
      }
      _free(puVar29[1]);
      return (long ****)0x0;
    }
    uVar23 = FUN_105480628(lVar17 + 0x7ba8,lVar46,puVar29);
    auVar61._8_8_ = uStack_390;
    auVar61._0_8_ = lStack_398;
    if (uVar23 == 0) {
      lVar27 = 0x7d08;
      if (*(long *)(lVar17 + 0x7ba8) != 2) {
        lVar27 = 0x7d48;
      }
      if (*(char *)(lVar17 + lVar27) != '\x01') {
        return (long ****)0x0;
      }
      FUN_10547a7f0(lVar17,lVar46);
      plVar9 = (long *)(*(long *)(lVar46 + 0x80) + 0x1c8);
      *plVar9 = *plVar9 + 1;
      lVar27 = **(long **)(lVar46 + 0x80);
      **(long **)(lVar46 + 0x80) = lVar27 + 1;
      if (-1 < lVar27) {
        ppppppplVar40 = *(long ********)(lVar46 + 0x80);
        uStack_518 = (ushort)ppppppplVar40;
        uStack_516 = (ushort)((ulong)ppppppplVar40 >> 0x10);
        uStack_514 = (ushort)((ulong)ppppppplVar40 >> 0x20);
        uStack_512 = (ushort)((ulong)ppppppplVar40 >> 0x30);
        auVar59 = func_0x000106032954(8);
        pppppplVar51 = ppppppplVar40[0x38];
        do {
          if (((ulong)pppppplVar51 & 1) != 0) goto LAB_105478a64;
          if (pppppplVar51 == (long ******)0xfffffffffffffffe) goto LAB_105479418;
          pppppplVar22 = (long ******)((long)pppppplVar51 + 2);
          pppppplVar55 = ppppppplVar40[0x38];
          bVar7 = pppppplVar55 != pppppplVar51;
          pppppplVar51 = pppppplVar55;
        } while (bVar7);
        ppppppplVar40[0x38] = pppppplVar22;
        LOAcquire();
        pppppplVar51 = ppppppplVar40[0x11];
        ppppppplVar40[0x11] = (long ******)((long)pppppplVar51 + 1);
        lVar27 = func_0x000105217788(ppppppplVar40 + 0x10,pppppplVar51);
        puVar33 = (undefined8 *)(lVar27 + ((ulong)pppppplVar51 & 0x1f) * 0x10);
        *puVar33 = auVar59._0_8_;
        *(int *)(puVar33 + 1) = auVar59._8_4_;
        *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 1L << ((ulong)pppppplVar51 & 0x1f)
        ;
        LORelease();
        ppppppplVar44 = ppppppplVar40 + 0x22;
        LOAcquire();
        pppppplVar51 = *ppppppplVar44;
        *ppppppplVar44 = (long ******)((ulong)pppppplVar51 | 2);
        LORelease();
        if (pppppplVar51 == (long ******)0x0) {
          pppppplVar51 = ppppppplVar40[0x20];
          ppppppplVar40[0x20] = (long ******)0x0;
          *ppppppplVar44 = in_xzr;
          LORelease();
          if (pppppplVar51 != (long ******)0x0) {
            (*(code *)pppppplVar51[1])(ppppppplVar40[0x21]);
          }
        }
LAB_105478a64:
        LOAcquire();
        pppppplVar51 = ppppppplVar40[0x39];
        ppppppplVar40[0x39] = (long ******)((long)pppppplVar51 + -1);
        LORelease();
        if (pppppplVar51 == (long ******)0x1) {
          LOAcquire();
          pppppplVar51 = ppppppplVar40[0x11];
          ppppppplVar40[0x11] = (long ******)((long)pppppplVar51 + 1);
          lVar27 = func_0x000105217788(ppppppplVar40 + 0x10,pppppplVar51);
          *(ulong *)(lVar27 + 0x210) = *(ulong *)(lVar27 + 0x210) | 0x200000000;
          LORelease();
          ppppppplVar44 = ppppppplVar40 + 0x22;
          LOAcquire();
          pppppplVar51 = *ppppppplVar44;
          *ppppppplVar44 = (long ******)((ulong)pppppplVar51 | 2);
          LORelease();
          if (pppppplVar51 == (long ******)0x0) {
            pppppplVar51 = ppppppplVar40[0x20];
            ppppppplVar40[0x20] = (long ******)0x0;
            *ppppppplVar44 = in_xzr;
            LORelease();
            if (pppppplVar51 != (long ******)0x0) {
              (*(code *)pppppplVar51[1])(ppppppplVar40[0x21]);
            }
          }
        }
        pppppplVar51 = *ppppppplVar40;
        *ppppppplVar40 = (long ******)((long)pppppplVar51 + -1);
        LORelease();
        if (pppppplVar51 != (long ******)0x1) {
          return (long ****)0x0;
        }
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&uStack_518);
        return (long ****)0x0;
      }
      goto LAB_1054797a0;
    }
    puVar47 = &UNK_10b384b20;
    ppuVar16 = &puStack_370;
    puVar29 = puStack_388;
    ppppppplVar40 = ppppppplStack_3a0;
    pppppppuVar52 = pppppppuStack_380;
    uVar28 = uStack_378;
    goto SUB_1051e4bf0;
  }
  ppppppplVar40 = *(long ********)(lVar17 + 0x4bd0);
  if (*(long *)(lVar17 + 0x1b50) == 0) {
    if (ppppppplVar40 == (long *******)0x8000000000000000) {
      uStack_568 = 2;
    }
    else {
      uStack_56c = 0;
      pppppplStack_578 = *(long *******)(lVar17 + 0x1b60);
      if (*(char *)(lVar17 + 0x4be8) == '\x01') goto LAB_105478afc;
LAB_105478bb4:
      uStack_568 = 0;
    }
  }
  else {
    pppppplStack_578 = *(long *******)(lVar17 + 0x1b60);
    uStack_56c = (**(code **)(*(long *)(lVar17 + 7000) + 0x68))();
    auVar58 = (**(code **)(*(long *)(lVar17 + 7000) + 0x70))(*(undefined8 *)(lVar17 + 0x1b50));
    auVar60._8_8_ = ppppppplStack_3a0;
    auVar60._0_8_ = lStack_398;
    uVar50 = auVar58._8_8_;
    if ((auVar58._0_8_ & 1) == 0) {
      if ((ppppppplVar40 == (long *******)0x8000000000000000) ||
         (*(char *)(lVar17 + 0x4be8) != '\x01')) goto LAB_105478bb4;
LAB_105478afc:
      ppppppplStack_3a0 = auVar60._8_8_;
      lStack_398 = auVar60._0_8_;
      lVar27 = *(long *)(lVar17 + 0x4bd8);
      lVar35 = *(long *)(lVar17 + 0x4be0) * 0x60;
      puVar33 = (undefined8 *)(lVar27 + -0x28);
      do {
        puVar31 = puVar33;
        if (lVar35 == 0) goto LAB_105478bb4;
        pbVar1 = (byte *)(lVar27 + 0x30);
        lVar27 = lVar27 + 0x60;
        puVar33 = puVar31 + 0xc;
        lVar35 = lVar35 + -0x60;
      } while (*pbVar1 - 3 < 0xfffffffe);
      ppppppplVar40 = (long *******)*puVar33;
      uVar34 = *(uint *)(puVar31 + 0xd);
      auVar62 = func_0x000106032954(8);
      ppppppplStack_530 = auVar62._0_8_;
      lStack_528 = CONCAT44(lStack_528._4_4_,auVar62._8_4_);
      ppppppplStack_3f8 = ppppppplVar40;
      uStack_3f0 = uVar34;
      func_0x000106032878(&uStack_518,&ppppppplStack_530,&ppppppplStack_3f8);
      uVar50 = 0;
      if (CONCAT22(uStack_516,uStack_518) == 0) {
        uVar50 = (CONCAT44(uStack_50c,uStack_510) * 1000 +
                 ((ulong)ppppppplStack_508 & 0xffffffff) / 1000000) / 600;
      }
    }
    auVar60._8_8_ = ppppppplStack_3a0;
    auVar60._0_8_ = lStack_398;
    uStack_568 = 1;
    uVar45 = uVar50;
  }
  ppppppplStack_3a0 = auVar60._8_8_;
  lStack_398 = auVar60._0_8_;
  __ZN9codex_tui3tui11job_control14SuspendContext21prepare_resume_action17h967eeab3a53c0dcbE
            (asStack_55a,lVar46 + 0x98,lVar46,lVar46 + 0xd0);
  func_0x00010550938c(&uStack_518,lVar46);
  uVar34 = uStack_510;
  uVar11 = uStack_512;
  uVar14 = uStack_514;
  uVar12 = uStack_516;
  if (uStack_518 == 1) {
    uVar23 = CONCAT44(uStack_50c,uStack_510);
  }
  else {
    ppppppplVar40 = (long *******)(ulong)uStack_516;
    uVar13 = CONCAT22(uStack_512,uStack_514);
    uVar28 = CONCAT44(uStack_510,CONCAT22(uStack_512,uStack_514));
    uVar50 = (ulong)uStack_510;
    if (lRam000000010b63d138 != 0) {
      FUN_108a828bc();
    }
    uStack_550 = 0x10b63d0f8;
    puVar33 = (undefined8 *)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(&uStack_550);
    uStack_518 = (ushort)puVar33;
    uStack_516 = (ushort)((ulong)puVar33 >> 0x10);
    uStack_514 = (ushort)((ulong)puVar33 >> 0x20);
    uStack_512 = (ushort)((ulong)puVar33 >> 0x30);
    uVar23 = __ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                       (&uStack_518,&UNK_108c98798,8);
    iVar10 = *(int *)(puVar33 + 2);
    *(int *)(puVar33 + 2) = iVar10 + -1;
    sVar8 = asStack_55a[0];
    if (iVar10 + -1 == 0) {
      puVar33[1] = 0;
      _pthread_mutex_unlock(*puVar33);
      sVar8 = asStack_55a[0];
    }
    asStack_55a[0] = sVar8;
    if (uVar23 == 0) {
      puStack_580 = (ushort *)(lVar17 + 0x7d28);
      asStack_55a[0] = 2;
      if ((sVar8 != 2) &&
         (uVar24 = __ZN9codex_tui3tui11job_control20PreparedResumeAction5apply17h3f7d543b054d2cc1E
                             (asStack_53a,lVar46), uVar24 != 0)) goto LAB_105478e84;
      if ((uVar12 & 1) != 0) {
        uVar23 = *(ulong *)(lVar46 + 0x48);
        if (uVar23 < 2) {
          __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                    (lVar46 + uVar23 * 0x20,uVar28);
          uVar23 = 1 - *(long *)(lVar46 + 0x48);
          if (uVar23 < 2) {
            __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                      (lVar46 + uVar23 * 0x20,uVar28);
            *(ushort *)(lVar46 + 0x50) = uVar14;
            *(ushort *)(lVar46 + 0x52) = uVar11;
            *(uint *)(lVar46 + 0x54) = uVar34;
            if (*(ushort *)(lVar46 + 0x60) <= uVar11) {
              uVar11 = *(ushort *)(lVar46 + 0x60);
            }
            *(ushort *)(lVar46 + 0x60) = uVar11;
            if (((0xffff < uVar34) && ((uVar34 & 0xffff) != 0)) &&
               (uVar24 = func_0x0001054a2cac(lVar46,uVar13), uVar24 != 0)) goto LAB_105478e84;
            goto LAB_105478d24;
          }
LAB_10547976c:
          puVar47 = &UNK_10b3872d0;
        }
        else {
LAB_105479778:
          puVar47 = &UNK_10b3872e8;
        }
        func_0x000108a07bdc(uVar23,2,puVar47);
LAB_1054797a0:
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1054797a4);
        (*pcVar15)();
      }
LAB_105478d24:
      __ZN9crossterm8terminal4size17h59acbc74b9110907E(&uStack_518);
      if (uStack_518 == 1) goto LAB_105478d38;
      lStack_588 = lVar46 + 0x40;
      uVar39 = (uint)uStack_516;
      uVar50 = (ulong)uStack_514;
      uVar11 = *(ushort *)(lVar46 + 0x50);
      uVar43 = (ulong)uVar11;
      uVar12 = *(ushort *)(lVar46 + 0x52);
      uVar34 = (uint)uVar12 + (uint)uStack_514;
      if (0xfffe < uVar34) {
        uVar34 = 0xffff;
      }
      uVar30 = (uint)uStack_514;
      uVar36 = (uint)uVar11;
      uVar23 = uVar43;
      if (uVar34 < uStack_514 || uVar34 == uVar30) {
        uVar34 = (uint)*(ushort *)(lVar46 + 0x54);
        uVar24 = (ulong)uVar12;
LAB_105478dac:
        uVar32 = uVar24;
        uVar48 = uVar32;
        if ((uVar39 != uVar34) || (uVar34 = uVar39, uVar30 != *(ushort *)(lVar46 + 0x56)))
        goto LAB_105478de4;
      }
      else {
        uVar24 = FUN_105030954(lStack_588,(ulong)uVar12,uVar34 - uVar30);
        if (uVar24 != 0) goto LAB_105478e84;
        uVar32 = (ulong)*(ushort *)(lVar46 + 0x52);
        if (uVar36 == *(ushort *)(lVar46 + 0x50)) {
          uVar34 = (uint)*(ushort *)(lVar46 + 0x54);
          uVar48 = 0;
          uVar24 = 0;
          if (*(ushort *)(lVar46 + 0x52) == 0) goto LAB_105478dac;
        }
        else {
          uVar34 = (uint)*(ushort *)(lVar46 + 0x54);
          uVar23 = (ulong)*(ushort *)(lVar46 + 0x50);
          uVar48 = 0;
        }
LAB_105478de4:
        uVar30 = (uint)uVar48;
        if (uVar34 != 0 && *(short *)(lVar46 + 0x56) != 0) {
          uVar36 = (uint)uVar23;
          uVar30 = (uint)uVar32;
        }
        uVar24 = func_0x0001054a2cac(lVar46,uVar36,uVar30);
        if (uVar24 != 0) goto LAB_105478e84;
        uVar23 = *(ulong *)(lVar46 + 0x48);
        if (1 < uVar23) goto LAB_105479778;
        uVar24 = (ulong)uVar39 << 0x20 | uVar50 << 0x30;
        uVar43 = uVar43 | uVar48 << 0x10;
        __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                  (lVar46 + uVar23 * 0x20,uVar43 | uVar24);
        uVar23 = 1 - *(long *)(lVar46 + 0x48);
        if (1 < uVar23) goto LAB_10547976c;
        __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                  (lVar46 + uVar23 * 0x20,uVar43 | uVar24);
        *(ushort *)(lVar46 + 0x50) = uVar11;
        *(ushort *)(lVar46 + 0x52) = (ushort)uVar48;
        *(int *)(lVar46 + 0x54) = (int)(uVar24 >> 0x20);
        uVar11 = (ushort)uVar48;
        if ((uint)*(ushort *)(lVar46 + 0x60) <= (uint)uVar48) {
          uVar11 = *(ushort *)(lVar46 + 0x60);
        }
        *(ushort *)(lVar46 + 0x60) = uVar11;
      }
      uVar24 = __ZN9codex_tui3tui3Tui27flush_pending_history_lines17h2a052557c2988bd4E
                         (lVar46,lVar46 + 0x68);
      if (uVar24 != 0) goto LAB_105478e84;
      if ((*(char *)(*(long *)(lVar46 + 0xa8) + 0x10) == '\0') ||
         ((*(ushort *)(lVar46 + 0xd0) & 1) == 0)) {
        uVar34 = (uint)*(ushort *)(lVar46 + 0x52) + (uint)*(ushort *)(lVar46 + 0x56);
      }
      else {
        uVar34 = (uint)*(ushort *)(lVar46 + 0xd4) + (uint)*(ushort *)(lVar46 + 0xd8);
      }
      if (0xfffe < uVar34) {
        uVar34 = 0xffff;
      }
      sVar8 = 0;
      if ((uVar34 & 0xffff) != 0) {
        sVar8 = (short)uVar34 + -1;
      }
      *(short *)(*(long *)(lVar46 + 0xa0) + 0x10) = sVar8;
      __ZN9crossterm8terminal4size17h59acbc74b9110907E(&uStack_518);
      if ((uStack_518 & 1) != 0) {
LAB_105478d38:
        uVar24 = CONCAT44(uStack_50c,uStack_510);
        goto LAB_105478e84;
      }
      if ((uStack_516 != *(ushort *)(lVar46 + 0x58)) || (uStack_514 != *(ushort *)(lVar46 + 0x5a)))
      {
        *(ushort *)(lVar46 + 0x58) = uStack_516;
        *(ushort *)(lVar46 + 0x5a) = uStack_514;
      }
      uVar50 = *(ulong *)(lVar46 + 0x48);
      if (1 < uVar50) {
        func_0x000108a07bdc(uVar50,2,&UNK_10b3872e8);
        goto LAB_1054797a0;
      }
      pppppplVar20 = *(long *******)(lVar46 + 0x50);
      uVar34 = (uint)((ulong)pppppplVar20 >> 0x20) & 0xffff;
      if (((ulong)pppppplVar20 >> 0x20 & 0xfffe) == 0) {
        uVar34 = 1;
      }
      uVar23 = *(ulong *)(lVar17 + 0x7d10);
      if (uStack_568 == 2) {
        if (uVar23 == 2) goto LAB_105479648;
      }
      else if ((((uVar23 != 2) && (*puStack_580 == uVar34)) &&
               (*(long *******)(lVar17 + 0x7d20) == pppppplStack_578)) &&
              ((uint)(byte)puStack_580[1] == (uStack_56c & 0xff))) {
        if ((uVar23 & 1) == 0) {
          if ((uStack_568 & 1) == 0) goto LAB_105479648;
        }
        else if (((uint)uStack_568 & (uint)(*(ulong *)(lVar17 + 0x7d18) == uVar45)) != 0)
        goto LAB_105479648;
      }
      if (*(ulong *)(lVar17 + 0x7cf8) != 0xffffffffffffffff) {
        if (*(int *)(lVar17 + 0x7ba8) != 1) {
LAB_1054792a8:
          uStack_594 = 0;
          goto LAB_1054792ac;
        }
        if (*(long *)(lVar17 + 0x7be8) != 0) {
          if (*(int *)(lVar17 + 0x7bb8) != 1) goto LAB_1054792a8;
          if (*(ulong *)(lVar17 + 0x7bb0) < *(ulong *)(lVar17 + 0x7bc0)) {
            uStack_594 = (uint)(*(ulong *)(lVar17 + 0x7bc0) - *(ulong *)(lVar17 + 0x7bb0) <=
                               *(ulong *)(lVar17 + 0x7cf8));
            goto LAB_1054792ac;
          }
        }
      }
      uStack_594 = 1;
LAB_1054792ac:
      uStack_590 = *(ulong *)(lVar17 + 0x7be8);
      uStack_5a0 = *(ulong *)(lVar17 + 0x7d40);
      if (uStack_5a0 < uStack_590) {
        uStack_590 = uStack_590 - 1;
        *(ulong *)(lVar17 + 0x7be8) = uStack_590;
        puVar33 = (undefined8 *)(*(long *)(lVar17 + 0x7be0) + uStack_590 * 0x10);
        uVar28 = *puVar33;
        puVar33 = (undefined8 *)puVar33[1];
        pcVar15 = (code *)*puVar33;
        if (pcVar15 != (code *)0x0) {
          (*pcVar15)(uVar28);
        }
        if (puVar33[1] != 0) {
          _free(uVar28);
        }
      }
      ppppppplVar40 = (long *******)&ppppppplStack_3f8;
      *(ulong *)(lVar17 + 0x7d10) = uStack_568;
      *(ulong *)(lVar17 + 0x7d18) = uVar45;
      *(long *******)(lVar17 + 0x7d20) = pppppplStack_578;
      *puStack_580 = (ushort)uVar34;
      *(char *)(puStack_580 + 1) = (char)uStack_56c;
      if (uStack_568 == 2) {
        uVar34 = uStack_594 & 1;
        goto joined_r0x000105479330;
      }
      ppppppplStack_530 = (long *******)0x0;
      lStack_528 = 8;
      ppppppplStack_520 = (long *******)0x0;
      if (*(long *)(lVar17 + 0x1b50) == 0) goto LAB_10547941c;
      (**(code **)(*(long *)(lVar17 + 7000) + 0x58))
                (&ppppppplStack_3f8,*(long *)(lVar17 + 0x1b50),uVar34);
      ppppppplVar40 = ppppppplStack_3f8;
      lVar27 = CONCAT44(uStack_3ec,uStack_3f0);
      lVar46 = CONCAT26(uStack_3e2,CONCAT24(uStack_3e4,CONCAT22(uStack_3e6,uStack_3e8)));
      uStack_500 = lVar27 + lVar46 * 0x30;
      uStack_518 = (ushort)uStack_3f0;
      uStack_516 = (ushort)(uStack_3f0 >> 0x10);
      uStack_514 = (ushort)uStack_3ec;
      uStack_512 = (ushort)((uint)uStack_3ec >> 0x10);
      uStack_510 = uStack_3f0;
      uStack_50c = uStack_3ec;
      ppppppplStack_508 = ppppppplStack_3f8;
      pppppplStack_578 = pppppplVar20;
      if (lVar46 == 0) {
        lVar35 = 8;
        ppppppplVar44 = (long *******)0x0;
      }
      else {
        FUN_1089ed790(&ppppppplStack_530,0,lVar46,8,0x30);
        lVar35 = lStack_528;
        ppppppplVar44 = ppppppplStack_520;
      }
      _memcpy(lVar35 + (long)ppppppplVar44 * 0x30,lVar27,lVar46 * 0x30);
      ppppppplVar44 = (long *******)((long)ppppppplVar44 + lVar46);
      ppppppplStack_520 = ppppppplVar44;
      if (ppppppplVar40 != (long *******)0x0) {
        _free(lVar27);
      }
      ppppppplVar40 = (long *******)&ppppppplStack_3f8;
      pppppplVar20 = pppppplStack_578;
      do {
        if (*(long *)(lVar17 + 0x4bd0) != -0x8000000000000000) {
          __ZN101__LT_codex_tui__history_cell__hook_cell__HookCell_u20_as_u20_codex_tui__history_cell__HistoryCell_GT_13display_lines17hcea737527e657564E
                    (&ppppppplStack_3f8,lVar17 + 0x4bd0);
          pppppplStack_578 = ppppppplVar40[2];
          if ((pppppplStack_578 != (long ******)0x0) && (ppppppplVar44 != (long *******)0x0)) {
            __ZN80__LT_ratatui__text__line__Line_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17hc876cb1f4b9c1ff0E
                      (&uStack_518,1,0);
            if (ppppppplVar44 == ppppppplStack_530) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h35cbac8225a3b548E
                        (&ppppppplStack_530);
            }
            puVar33 = (undefined8 *)(lStack_528 + (long)ppppppplVar44 * 0x30);
            puVar33[1] = CONCAT44(uStack_50c,uStack_510);
            *puVar33 = CONCAT26(uStack_512,CONCAT24(uStack_514,CONCAT22(uStack_516,uStack_518)));
            puVar33[3] = uStack_500;
            puVar33[2] = ppppppplStack_508;
            puVar33[5] = CONCAT71(uStack_4ef,uStack_4f0);
            puVar33[4] = CONCAT44(uStack_4f4,uStack_4f8);
            ppppppplVar44 = (long *******)((long)ppppppplVar44 + 1);
            ppppppplStack_520 = ppppppplVar44;
          }
          ppppppplVar40 = ppppppplStack_3f8;
          lVar27 = CONCAT44(uStack_3ec,uStack_3f0);
          lVar46 = (long)pppppplStack_578 * 0x30;
          uStack_500 = lVar27 + lVar46;
          uStack_518 = (ushort)uStack_3f0;
          uStack_516 = (ushort)(uStack_3f0 >> 0x10);
          uStack_514 = (ushort)uStack_3ec;
          uStack_512 = (ushort)((uint)uStack_3ec >> 0x10);
          uStack_510 = uStack_3f0;
          uStack_50c = uStack_3ec;
          ppppppplStack_508 = ppppppplStack_3f8;
          if ((long ******)((long)ppppppplStack_530 - (long)ppppppplVar44) < pppppplStack_578) {
            FUN_1089ed790(&ppppppplStack_530,ppppppplVar44,pppppplStack_578,8,0x30);
            ppppppplVar44 = ppppppplStack_520;
          }
          _memcpy(lStack_528 + (long)ppppppplVar44 * 0x30,lVar27,lVar46);
          ppppppplStack_520 = (long *******)((long)ppppppplVar44 + (long)pppppplStack_578);
          if (ppppppplVar40 != (long *******)0x0) {
            _free(lVar27);
          }
          ppppppplVar40 = (long *******)&ppppppplStack_3f8;
          ppppppplVar44 = ppppppplStack_520;
        }
        lVar27 = uStack_500;
        uVar34 = uStack_594;
        if (ppppppplVar44 == (long *******)0x0) {
          if (ppppppplStack_530 != (long *******)0x0) {
            _free();
            uVar34 = uStack_594;
          }
        }
        else if (ppppppplStack_530 != (long *******)0x8000000000000000) {
          uStack_4f0 = 3;
          uStack_500 = CONCAT71(uStack_500._1_7_,0x13);
          uVar28 = uStack_500;
          uStack_500._5_3_ = SUB83(lVar27,5);
          uStack_500._0_5_ = CONCAT14(0x13,(int)uVar28);
          uStack_4f8 = CONCAT31(uStack_4f8._1_3_,0x13);
          uStack_4f4 = 0;
          uStack_518 = (ushort)ppppppplStack_530;
          uStack_516 = (ushort)((ulong)ppppppplStack_530 >> 0x10);
          uStack_514 = (ushort)((ulong)ppppppplStack_530 >> 0x20);
          uStack_512 = (ushort)((ulong)ppppppplStack_530 >> 0x30);
          uStack_510 = (uint)lStack_528;
          uStack_50c = (undefined4)((ulong)lStack_528 >> 0x20);
          uStack_4e8 = 0x8000000000000000;
          uStack_410 = 0x13;
          uStack_40c = 0x13;
          uStack_408 = 0x13;
          uStack_404 = 0;
          uStack_3fc = 0;
          ppppppplStack_508 = ppppppplVar44;
          pppppplVar51 = (long ******)_malloc(0x120);
          if (pppppplVar51 == (long ******)0x0) {
            func_0x0001087c906c(8,0x120);
            goto LAB_1054797a0;
          }
          _memcpy(pppppplVar51,&uStack_518,0x120);
          *ppppppplVar40 = pppppplVar51;
          ppppppplVar40[1] = (long ******)&UNK_10b378108;
          uStack_3e8 = 0;
          uStack_3e4 = 0;
          pppppplVar51 = (long ******)_malloc(0x18);
          if (pppppplVar51 == (long ******)0x0) {
            func_0x0001087c906c(8,0x18);
            goto LAB_1054797a0;
          }
          pppppplVar22 = *ppppppplVar40;
          pppppplVar51[1] = (long *****)ppppppplVar40[1];
          *pppppplVar51 = (long *****)pppppplVar22;
          pppppplVar51[2] = (long *****)ppppppplVar40[2];
          puVar47 = &UNK_10b384c70;
          if ((uStack_5a0 != 0) && ((uStack_56c & 1) == 0)) {
            *ppppppplVar40 = (long ******)0x0;
            ppppppplVar40[1] = pppppplVar51;
            ppppppplVar40[2] = (long ******)&UNK_10b384c70;
            ppppppplVar40[3] = (long ******)0x10000;
            pppppplVar51 = (long ******)_malloc(0x20);
            if (pppppplVar51 == (long ******)0x0) {
              func_0x0001087c906c(8,0x20);
              goto LAB_1054797a0;
            }
            pppppplVar22 = *ppppppplVar40;
            pppppplVar57 = ppppppplVar40[3];
            pppppplVar55 = ppppppplVar40[2];
            pppppplVar51[1] = (long *****)ppppppplVar40[1];
            *pppppplVar51 = (long *****)pppppplVar22;
            pppppplVar51[3] = (long *****)pppppplVar57;
            pppppplVar51[2] = (long *****)pppppplVar55;
            puVar47 = &UNK_10b378140;
          }
          uVar45 = uStack_590;
          if (uStack_590 == *(ulong *)(lVar17 + 0x7bd8)) {
            func_0x0001089eca80(lVar17 + 0x7bd8);
          }
          puVar33 = (undefined8 *)(*(long *)(lVar17 + 0x7be0) + uVar45 * 0x10);
          *puVar33 = pppppplVar51;
          puVar33[1] = puVar47;
          *(ulong *)(lVar17 + 0x7be8) = uVar45 + 1;
          uVar34 = uStack_594;
        }
joined_r0x000105479330:
        if (uVar34 != 0) {
          *(undefined8 *)(lVar17 + 0x7cf8) = 0xffffffffffffffff;
        }
LAB_105479648:
        lVar27 = auVar59._8_8_;
        FUN_10547fe4c(lVar17 + 0x7ba8,pppppplVar20,lVar27 + uVar50 * 0x20);
        uVar24 = func_0x0001054a2f0c(lVar27);
        if ((uVar24 == 0) &&
           (uVar24 = __ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hd12024b1cfe820f2E
                               (lStack_588,&UNK_108eed1c2,6), uVar24 == 0)) {
          uStack_518 = (ushort)lStack_588;
          uStack_516 = (ushort)((ulong)lStack_588 >> 0x10);
          uStack_514 = (ushort)((ulong)lStack_588 >> 0x20);
          uStack_512 = (ushort)((ulong)lStack_588 >> 0x30);
          uVar24 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                             (&uStack_518);
          if (uVar24 == 0) {
            *(undefined1 *)(lVar27 + 0x62) = 1;
            uVar23 = 1 - *(long *)(lVar27 + 0x48);
            if (1 < uVar23) goto LAB_10547976c;
            __ZN7ratatui6buffer6buffer6Buffer5reset17h0e531a4d8ca25097E(lVar27 + uVar23 * 0x20);
            *(long *)(lVar27 + 0x48) = 1 - *(long *)(lVar27 + 0x48);
            uStack_518 = (ushort)lStack_588;
            uStack_516 = (ushort)((ulong)lStack_588 >> 0x10);
            uStack_514 = (ushort)((ulong)lStack_588 >> 0x20);
            uStack_512 = (ushort)((ulong)lStack_588 >> 0x30);
            uVar24 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                               (&uStack_518);
          }
        }
LAB_105478e84:
        lVar27 = auVar59._8_8_;
        auVar61._8_8_ = lVar27;
        auVar61._0_8_ = lVar17;
        auVar58._8_8_ = lVar27;
        auVar58._0_8_ = lVar17;
        puVar29 = auVar59._0_8_;
        uStack_548 = uVar24;
        ppppppplVar40 = (long *******)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(&uStack_550)
        ;
        uStack_518 = (ushort)ppppppplVar40;
        uStack_516 = (ushort)((ulong)ppppppplVar40 >> 0x10);
        uStack_514 = (ushort)((ulong)ppppppplVar40 >> 0x20);
        uStack_512 = (ushort)((ulong)ppppppplVar40 >> 0x30);
        uVar23 = __ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                           (&uStack_518,&UNK_108c98788,8);
        iVar10 = *(int *)(ppppppplVar40 + 2);
        *(int *)(ppppppplVar40 + 2) = iVar10 + -1;
        if (iVar10 + -1 == 0) {
          ppppppplVar40[1] = (long ******)0x0;
          _pthread_mutex_unlock(*ppppppplVar40);
        }
        if (uVar23 != 0) {
LAB_105478ee8:
          if ((uVar24 & 3) == 1) {
            uVar28 = *(undefined8 *)(uVar24 - 1);
            auVar61._0_8_ = uVar28;
            ppppppplVar40 = *(long ********)(uVar24 + 7);
            if (*ppppppplVar40 != (long ******)0x0) {
              (*(code *)*ppppppplVar40)(uVar28);
            }
            if (ppppppplVar40[1] != (long ******)0x0) {
              _free(uVar28);
            }
            _free((undefined8 *)(uVar24 - 1));
          }
          break;
        }
        uStack_518 = (ushort)&uStack_550;
        uStack_516 = (ushort)((ulong)&uStack_550 >> 0x10);
        uStack_514 = (ushort)((ulong)&uStack_550 >> 0x20);
        uStack_512 = (ushort)((ulong)&uStack_550 >> 0x30);
        uVar23 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                           (&uStack_518);
        if (uVar23 != 0) goto LAB_105478ee8;
        uVar23 = uVar24;
        auVar61 = auVar58;
        if (uVar24 != 0) break;
        if ((puStack_580[0x10] & 1) == 0) {
          if ((uStack_568 != 1) ||
             ((*(ulong *)(lVar17 + 0x7cf8) != 0xffffffffffffffff &&
              ((*(int *)(lVar17 + 0x7ba8) != 1 ||
               ((*(long *)(lVar17 + 0x7be8) != 0 &&
                ((*(int *)(lVar17 + 0x7bb8) != 1 ||
                 ((*(ulong *)(lVar17 + 0x7bb0) < *(ulong *)(lVar17 + 0x7bc0) &&
                  (*(ulong *)(lVar17 + 0x7cf8) <
                   *(ulong *)(lVar17 + 0x7bc0) - *(ulong *)(lVar17 + 0x7bb0)))))))))))))
          goto LAB_105479198;
          plVar9 = (long *)(*(long *)(lVar27 + 0x80) + 0x1c8);
          *plVar9 = *plVar9 + 1;
          lVar17 = **(long **)(lVar27 + 0x80);
          **(long **)(lVar27 + 0x80) = lVar17 + 1;
          if (-1 < lVar17) {
            uVar28 = *(undefined8 *)(lVar27 + 0x80);
            uStack_518 = (ushort)uVar28;
            uStack_516 = (ushort)((ulong)uVar28 >> 0x10);
            uStack_514 = (ushort)((ulong)uVar28 >> 0x20);
            uStack_512 = (ushort)((ulong)uVar28 >> 0x30);
            func_0x00010550731c(&uStack_518,0,50000000);
            FUN_10519d220(&uStack_518);
LAB_105479198:
            if ((long)uVar38 < 1) {
              return (long ****)0x0;
            }
            _free(puVar29[1]);
            return (long ****)0x0;
          }
          goto LAB_1054797a0;
        }
        FUN_10547a7f0(lVar17,lVar27);
        plVar9 = (long *)(*(long *)(lVar27 + 0x80) + 0x1c8);
        *plVar9 = *plVar9 + 1;
        lVar17 = **(long **)(lVar27 + 0x80);
        **(long **)(lVar27 + 0x80) = lVar17 + 1;
        if (lVar17 < 0) goto LAB_1054797a0;
        pppppplVar20 = *(long *******)(lVar27 + 0x80);
        uStack_518 = (ushort)pppppplVar20;
        uStack_516 = (ushort)((ulong)pppppplVar20 >> 0x10);
        uStack_514 = (ushort)((ulong)pppppplVar20 >> 0x20);
        uStack_512 = (ushort)((ulong)pppppplVar20 >> 0x30);
        auVar60 = func_0x000106032954(8);
        lVar17 = auVar60._8_8_;
        auVar59._8_8_ = auVar60._0_8_;
        auVar59._0_8_ = puVar29;
        ppppplVar42 = pppppplVar20[0x38];
LAB_105478f9c:
        if (((ulong)ppppplVar42 & 1) != 0) goto LAB_105479024;
        if (ppppplVar42 != (long *****)0xfffffffffffffffe) goto code_r0x000105478fa8;
LAB_105479418:
        __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_10547941c:
        ppppppplVar44 = (long *******)0x0;
      } while( true );
    }
  }
  puVar47 = &UNK_10b384b08;
  uVar28 = 0x105478f08;
SUB_1051e4bf0:
  *(long ********)((long)ppuVar16 + -0x30) = ppppppplVar40;
  *(undefined1 (*) [16])((long)ppuVar16 + -0x28) = auVar61;
  *(ulong **)((long)ppuVar16 + -0x18) = puVar29;
  *(undefined8 ********)((long)ppuVar16 + -0x10) = pppppppuVar52;
  *(undefined8 *)((long)ppuVar16 + -8) = uVar28;
  *(ulong *)((long)ppuVar16 + -0x58) = uVar23;
  if (lRam000000010b66fc68 != 2) {
    FUN_108a0ad4c();
  }
  auVar60 = (**(code **)(lRam000000010b66fc60 + 0x28))
                      (uRam000000010b66fc58,(undefined1 *)((long)ppuVar16 + -0x58),&UNK_10b36b728);
  (**(code **)(auVar60._8_8_ + 0x30))(auVar60._0_8_,puVar47);
  *(undefined **)((long)ppuVar16 + -0x50) = &UNK_10b374a40;
  *(undefined1 (*) [16])((long)ppuVar16 + -0x48) = auVar60;
  *(undefined8 *)((long)ppuVar16 + -0x38) = *(undefined8 *)((long)ppuVar16 + -0x58);
  pppplVar25 = (long ****)_malloc(0x20);
  if (pppplVar25 == (long ****)0x0) {
    func_0x0001087c906c(8,0x20);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1051e4ca0);
    (*pcVar15)();
  }
  ppplVar41 = *(long ****)((long)ppuVar16 + -0x50);
  ppplVar56 = *(long ****)((long)ppuVar16 + -0x38);
  ppplVar54 = *(long ****)((long)ppuVar16 + -0x40);
  pppplVar25[1] = *(long ****)((long)ppuVar16 + -0x48);
  *pppplVar25 = ppplVar41;
  pppplVar25[3] = ppplVar56;
  pppplVar25[2] = ppplVar54;
  return pppplVar25;
}

