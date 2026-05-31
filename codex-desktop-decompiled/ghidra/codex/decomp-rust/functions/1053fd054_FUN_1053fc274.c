
void FUN_1053fc274(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long *plVar14;
  byte *extraout_x1;
  undefined1 uVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  byte bVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *extraout_x12;
  byte *pbVar25;
  byte bVar26;
  ulong extraout_x13;
  byte *pbVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  undefined1 *puVar31;
  long *plVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  byte *pbVar35;
  undefined1 *puVar36;
  byte *pbVar37;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  undefined1 auVar38 [16];
  ulong auStack_3f8 [4];
  long *plStack_3d8;
  ulong *puStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long *plStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  undefined1 *puStack_370;
  undefined8 uStack_368;
  undefined1 *puStack_360;
  undefined1 *puStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  byte *pbStack_340;
  undefined8 uStack_338;
  undefined1 **ppuStack_330;
  undefined8 uStack_328;
  byte *pbStack_320;
  undefined1 *puStack_318;
  undefined1 *puStack_310;
  long lStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined1 **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined7 uStack_280;
  undefined4 uStack_279;
  undefined2 uStack_6c;
  byte bStack_6a;
  
  puVar34 = *(undefined1 **)(param_2 + 0xf8);
  puVar36 = *(undefined1 **)(param_2 + 0x100);
  puVar31 = (undefined1 *)((long)puVar36 * 0xc);
  if (puVar36 == (undefined1 *)0x0) goto LAB_1053fc360;
  lVar10 = _malloc(puVar31);
  puVar33 = (undefined1 *)0x0;
  if (lVar10 != 0) {
    _memcpy(lVar10,puVar34);
    lVar17 = *(long *)(param_1 + 0xa88);
    param_3 = puVar31;
    while( true ) {
      if (lVar17 != 0) {
        _free(*(undefined8 *)(param_1 + 0xa90));
      }
      *(undefined1 **)(param_1 + 0xa88) = puVar36;
      *(long *)(param_1 + 0xa90) = lVar10;
      *(undefined1 **)(param_1 + 0xa98) = puVar36;
      puVar31 = *(undefined1 **)(param_2 + 0x110);
      lVar10 = *(long *)(param_2 + 0x118);
      puVar33 = (undefined1 *)(lVar10 * 0xc);
      if (lVar10 == 0) {
        lVar17 = 4;
        _memcpy(4,puVar31,0);
        lVar18 = *(long *)(param_1 + 0xaa0);
      }
      else {
        lVar17 = _malloc(puVar33);
        puVar34 = (undefined1 *)0x0;
        if (lVar17 == 0) goto LAB_1053fc814;
        _memcpy(lVar17,puVar31,puVar33);
        lVar18 = *(long *)(param_1 + 0xaa0);
      }
      if (lVar18 != 0) {
        _free(*(undefined8 *)(param_1 + 0xaa8));
      }
      *(long *)(param_1 + 0xaa0) = lVar10;
      *(long *)(param_1 + 0xaa8) = lVar17;
      *(long *)(param_1 + 0xab0) = lVar10;
      puVar33 = *(undefined1 **)(param_2 + 0x128);
      lVar17 = *(long *)(param_2 + 0x130);
      puVar34 = (undefined1 *)(lVar17 * 0xc);
      if (lVar17 == 0) break;
      lVar18 = _malloc(puVar34);
      if (lVar18 != 0) goto LAB_1053fc3a4;
      func_0x0001087c9084(4,puVar34);
      puVar36 = (undefined1 *)0x0;
LAB_1053fc360:
      lVar10 = 4;
      _memcpy(4,puVar34);
      lVar17 = *(long *)(param_1 + 0xa88);
      param_3 = puVar31;
    }
    lVar18 = 4;
LAB_1053fc3a4:
    param_3 = puVar34;
    puStack_290 = puVar31;
    _memcpy(lVar18,puVar33);
    if (*(long *)(param_1 + 0xab8) != 0) {
      _free(*(undefined8 *)(param_1 + 0xac0));
    }
    *(long *)(param_1 + 0xab8) = lVar17;
    *(long *)(param_1 + 0xac0) = lVar18;
    *(long *)(param_1 + 0xac8) = lVar17;
    puVar1 = *(undefined1 **)(param_2 + 0x140);
    puVar31 = *(undefined1 **)(param_2 + 0x148);
    puVar36 = (undefined1 *)((long)puVar31 * 0xc);
    if (puVar31 == (undefined1 *)0x0) {
      lVar18 = 4;
LAB_1053fc3fc:
      puStack_288 = puVar33;
      _memcpy(lVar18,puVar1);
      param_3 = puVar36;
      if (*(long *)(param_1 + 0xad0) != 0) {
        _free(*(undefined8 *)(param_1 + 0xad8));
        param_3 = puVar36;
      }
      *(undefined1 **)(param_1 + 0xad0) = puVar31;
      *(long *)(param_1 + 0xad8) = lVar18;
      *(undefined1 **)(param_1 + 0xae0) = puVar31;
      unaff_x26 = *(undefined1 **)(param_2 + 0x158);
      puVar33 = *(undefined1 **)(param_2 + 0x160);
      puVar36 = (undefined1 *)((long)puVar33 * 0xc);
      if (puVar33 == (undefined1 *)0x0) {
        lVar18 = 4;
        _memcpy(4,unaff_x26,0);
        lVar19 = *(long *)(param_1 + 0xae8);
joined_r0x0001053fc56c:
        if (lVar19 != 0) {
          _free(*(undefined8 *)(param_1 + 0xaf0));
        }
        *(undefined1 **)(param_1 + 0xae8) = puVar33;
        *(long *)(param_1 + 0xaf0) = lVar18;
        *(undefined1 **)(param_1 + 0xaf8) = puVar33;
        func_0x000105273c90(&uStack_280,param_2 + 0x168);
        FUN_10518d200(param_1 + 0xb00);
        _memcpy(param_1 + 0xb00,&uStack_280,0x198);
        func_0x00010527ab1c(&uStack_280,param_2 + 0x300);
        FUN_1051904f0(param_1 + 0xc98);
        _memcpy(param_1 + 0xc98,&uStack_280,0x210);
        func_0x000105273c90(&uStack_280,param_2 + 0x168);
        FUN_10518d200(param_1 + 0x58);
        _memcpy(param_1 + 0x58,&uStack_280,0x198);
        func_0x00010527ab1c(&uStack_280,param_2 + 0x300);
        FUN_1051904f0(param_1 + 0x1f0);
        _memcpy(param_1 + 0x1f0,&uStack_280,0x210);
        func_0x000105281750(&uStack_280,param_2 + 0x510);
        FUN_105192184(param_1 + 0x400);
        _memcpy(param_1 + 0x400,&uStack_280,0x120);
        bVar26 = (byte)extraout_x13;
        if (*(long *)(param_2 + 0x28) == 0) {
          uVar15 = 0x1b;
        }
        else {
          puVar34 = *(undefined1 **)(param_2 + 0x20);
          uVar15 = *puVar34;
          uStack_280 = (undefined7)*(undefined8 *)(puVar34 + 1);
          uStack_279 = *(undefined4 *)(puVar34 + 8);
        }
        *(undefined1 *)(param_1 + 0x8c4) = uVar15;
        *(undefined4 *)(param_1 + 0x8cc) = uStack_279;
        *(ulong *)(param_1 + 0x8c5) = CONCAT17((undefined1)uStack_279,uStack_280);
        if (*(long *)(param_2 + 0x10) == 0) {
          uVar15 = 0x1b;
        }
        else {
          puVar34 = *(undefined1 **)(param_2 + 8);
          uVar15 = *puVar34;
          uStack_280 = (undefined7)*(undefined8 *)(puVar34 + 1);
          uStack_279 = *(undefined4 *)(puVar34 + 8);
        }
        *(undefined1 *)(param_1 + 0x8d0) = uVar15;
        *(undefined4 *)(param_1 + 0x8d8) = uStack_279;
        *(ulong *)(param_1 + 0x8d1) = CONCAT17((undefined1)uStack_279,uStack_280);
        pbVar27 = *(byte **)(param_2 + 0x170);
        lVar18 = *(long *)(param_2 + 0x178);
        pbVar25 = extraout_x12;
        if ((*(byte *)(param_1 + 0x925) & 1) == 0) {
LAB_1053fc614:
          if (lVar18 == 0) {
            bVar21 = 0;
            bVar16 = 0x1b;
          }
          else {
            lVar18 = lVar18 * 0xc;
            pbVar12 = pbVar27;
            do {
              bVar16 = *pbVar12;
              if (bVar16 != 0x1b) {
                bVar21 = pbVar12[8];
                if (bVar16 != 1) goto LAB_1053fc66c;
                if (bVar21 != 0) {
                  bVar16 = 1;
                  goto LAB_1053fc66c;
                }
              }
              pbVar12 = pbVar12 + 0xc;
              lVar18 = lVar18 + -0xc;
            } while (lVar18 != 0);
            bVar16 = *pbVar27;
            bVar21 = pbVar27[8];
            pbVar12 = pbVar27;
LAB_1053fc66c:
            pbVar27 = (byte *)(ulong)*(uint *)(pbVar12 + 4);
            pbVar25 = (byte *)(ulong)*(ushort *)(pbVar12 + 2);
            bVar26 = pbVar12[1];
            uStack_6c = *(undefined2 *)(pbVar12 + 9);
            bStack_6a = pbVar12[0xb];
          }
        }
        else {
          lVar19 = lVar18 * 0xc;
          pbVar25 = pbVar27;
          uVar29 = extraout_x13;
          do {
            bVar26 = (byte)uVar29;
            if (lVar19 == 0) goto LAB_1053fc614;
            bVar26 = *pbVar25;
            uVar29 = (ulong)bVar26;
            pbVar12 = pbVar25 + 8;
            pbVar25 = pbVar25 + 0xc;
            lVar19 = lVar19 + -0xc;
          } while (bVar26 != 1 || *pbVar12 != 1);
          bVar16 = 1;
          bVar21 = 1;
        }
        *(byte *)(param_1 + 0x8dc) = bVar16;
        *(byte *)(param_1 + 0x8dd) = bVar26;
        *(short *)(param_1 + 0x8de) = (short)pbVar25;
        *(int *)(param_1 + 0x8e0) = (int)pbVar27;
        *(byte *)(param_1 + 0x8e4) = bVar21;
        *(byte *)(param_1 + 0x8e7) = bStack_6a;
        *(undefined2 *)(param_1 + 0x8e5) = uStack_6c;
        if (lVar10 == 0) {
          uVar15 = 0x1b;
        }
        else {
          uVar15 = *puStack_290;
          uStack_280 = (undefined7)*(undefined8 *)(puStack_290 + 1);
          uStack_279 = *(undefined4 *)(puStack_290 + 8);
        }
        *(undefined1 *)(param_1 + 0x8e8) = uVar15;
        *(undefined4 *)(param_1 + 0x8f0) = uStack_279;
        *(ulong *)(param_1 + 0x8e9) = CONCAT17((undefined1)uStack_279,uStack_280);
        if (lVar17 == 0) {
          uVar15 = 0x1b;
        }
        else {
          uVar15 = *puStack_288;
          uStack_280 = (undefined7)*(undefined8 *)(puStack_288 + 1);
          uStack_279 = *(undefined4 *)(puStack_288 + 8);
        }
        *(undefined1 *)(param_1 + 0x8f4) = uVar15;
        *(undefined4 *)(param_1 + 0x8fc) = uStack_279;
        *(ulong *)(param_1 + 0x8f5) = CONCAT17((undefined1)uStack_279,uStack_280);
        if (puVar31 == (undefined1 *)0x0) {
          uVar15 = 0x1b;
        }
        else {
          uVar15 = *puVar1;
          uStack_280 = (undefined7)*(undefined8 *)(puVar1 + 1);
          uStack_279 = *(undefined4 *)(puVar1 + 8);
        }
        *(undefined1 *)(param_1 + 0x900) = uVar15;
        *(undefined4 *)(param_1 + 0x908) = uStack_279;
        *(ulong *)(param_1 + 0x901) = CONCAT17((undefined1)uStack_279,uStack_280);
        if (*(long *)(param_2 + 0xb8) == 0) {
          uVar15 = 0x1b;
        }
        else {
          puVar34 = *(undefined1 **)(param_2 + 0xb0);
          uVar15 = *puVar34;
          uStack_280 = (undefined7)*(undefined8 *)(puVar34 + 1);
          uStack_279 = *(undefined4 *)(puVar34 + 8);
        }
        *(undefined1 *)(param_1 + 0x90c) = uVar15;
        *(undefined4 *)(param_1 + 0x914) = uStack_279;
        *(ulong *)(param_1 + 0x90d) = CONCAT17((undefined1)uStack_279,uStack_280);
        if (*(long *)(param_2 + 0xd0) == 0) {
          uVar15 = 0x1b;
        }
        else {
          puVar34 = *(undefined1 **)(param_2 + 200);
          uVar15 = *puVar34;
          uStack_280 = (undefined7)*(undefined8 *)(puVar34 + 1);
          uStack_279 = *(undefined4 *)(puVar34 + 8);
        }
        *(undefined1 *)(param_1 + 0x918) = uVar15;
        *(undefined4 *)(param_1 + 0x920) = uStack_279;
        *(ulong *)(param_1 + 0x919) = CONCAT17((undefined1)uStack_279,uStack_280);
        return;
      }
      lVar18 = _malloc(puVar36);
      puVar34 = puVar1;
      if (lVar18 != 0) {
        _memcpy(lVar18,unaff_x26,puVar36);
        lVar19 = *(long *)(param_1 + 0xae8);
        goto joined_r0x0001053fc56c;
      }
    }
    else {
      lVar18 = _malloc(puVar36);
      unaff_x26 = puVar1;
      if (lVar18 != 0) goto LAB_1053fc3fc;
    }
    unaff_x25 = 0;
    func_0x0001087c9084(4,puVar36);
  }
  func_0x0001087c9084(4,puVar31);
LAB_1053fc814:
  auVar38 = func_0x0001087c9084(4,puVar33);
  pbVar27 = auVar38._8_8_;
  puVar11 = auVar38._0_8_;
  uStack_298 = 0x1053fc820;
  pbVar22 = (byte *)puVar11[0xa4];
  pbVar12 = (byte *)puVar11[3];
  pbVar20 = (byte *)puVar11[4];
  pbVar25 = pbVar20;
  if (pbVar22 <= pbVar20) {
    pbVar25 = pbVar22;
  }
  pbVar30 = pbVar25;
  pbStack_320 = pbVar27;
  puStack_318 = param_3;
  puStack_2d0 = puVar36;
  puStack_2c8 = puVar34;
  puStack_2c0 = puVar33;
  puStack_2b8 = puVar31;
  lStack_2b0 = param_2;
  lStack_2a8 = param_1;
  puStack_2a0 = &stack0xfffffffffffffff0;
  if (pbVar22 < pbVar20 && pbVar25 != (byte *)0x0) {
    if (-0x41 < (char)pbVar12[(long)pbVar25]) goto LAB_1053fc888;
    bVar26 = *pbVar12;
    pbVar22 = pbVar12 + 3;
    if (0xef < bVar26) {
      pbVar22 = pbVar12 + 4;
    }
    pbVar30 = pbVar12 + 2;
    if (0xdf < bVar26) {
      pbVar30 = pbVar22;
    }
    pbVar22 = pbVar12 + 1;
    if (((int)(char)bVar26 & 0x80000000U) != 0) {
      pbVar22 = pbVar30;
    }
    if (pbVar22 != pbVar12 + (long)pbVar20) {
      pbVar30 = (byte *)0x0;
      pbVar35 = pbVar22 + -(long)pbVar12;
      do {
        bVar26 = *pbVar22;
        pbVar37 = pbVar22 + 3;
        if (0xef < bVar26) {
          pbVar37 = pbVar22 + 4;
        }
        pbVar24 = pbVar22 + 2;
        if (0xdf < bVar26) {
          pbVar24 = pbVar37;
        }
        pbVar37 = pbVar22 + 1;
        if (((int)(char)bVar26 & 0x80000000U) != 0) {
          pbVar37 = pbVar24;
        }
      } while ((pbVar35 <= pbVar25) &&
              (lVar10 = (long)pbVar35 - (long)pbVar22, pbVar22 = pbVar37, pbVar30 = pbVar35,
              pbVar35 = pbVar37 + lVar10, pbVar37 != pbVar12 + (long)pbVar20));
      goto LAB_1053fc870;
    }
    pbVar30 = (byte *)0x0;
LAB_1053fca90:
    pbVar37 = (byte *)0x0;
    pbVar25 = pbVar12;
    pbVar35 = pbVar20;
  }
  else {
LAB_1053fc870:
    pbVar25 = pbVar30;
    if (pbVar30 == (byte *)0x0) goto LAB_1053fca90;
LAB_1053fc888:
    if (pbVar25 < pbVar20) {
      pbVar30 = pbVar25;
      if ((char)pbVar12[(long)pbVar25] < -0x40) {
LAB_1053fd00c:
        uVar13 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                           (pbVar12,pbVar20,0,pbVar25,&UNK_10b380a80);
        if (param_3 != (undefined1 *)0x0) {
          _free(pbVar25);
        }
        if (puStack_310 != (undefined1 *)0x0) {
          _free(lStack_308);
        }
        auVar38 = __Unwind_Resume(uVar13);
        plVar14 = auVar38._0_8_;
        uStack_328 = 0x1053fd054;
        auStack_3f8[0] = (ulong)*(byte *)(auVar38._8_8_ + 0x640);
        puStack_370 = unaff_x26;
        uStack_368 = unaff_x25;
        puStack_360 = puVar36;
        puStack_358 = puVar34;
        puStack_350 = puVar33;
        puStack_348 = param_3;
        pbStack_340 = pbVar25;
        uStack_338 = uVar13;
        ppuStack_330 = &puStack_2a0;
        func_0x00010543d178(&lStack_3a0);
        plVar6 = plStack_398;
        lVar17 = lStack_3a0;
        lVar10 = lStack_390 * 0x28;
        plStack_3d8 = plStack_398 + lStack_390 * 5;
        puStack_3d0 = auStack_3f8;
        plVar32 = plStack_398;
        plVar5 = plStack_398;
        while (lStack_390 != 0) {
          plStack_398 = (long *)plVar5[1];
          lStack_3a0 = *plVar5;
          lStack_388 = plVar5[3];
          lStack_390 = plVar5[2];
          lStack_380 = plVar5[4];
          func_0x0001053fb2e0(&lStack_3c8,&lStack_3a0,auStack_3f8[0]);
          if (lStack_3c8 != -0x7fffffffffffffff) {
            plVar32[4] = lStack_3a8;
            plVar32[1] = lStack_3c0;
            *plVar32 = lStack_3c8;
            plVar32[3] = lStack_3b0;
            plVar32[2] = lStack_3b8;
            plVar32 = plVar32 + 5;
          }
          lVar10 = lVar10 + -0x28;
          plVar5 = plVar5 + 5;
          lStack_390 = lVar10;
        }
        *plVar14 = lVar17;
        plVar14[1] = (long)plVar6;
        plVar14[2] = ((ulong)((long)plVar32 - (long)plVar6) >> 3) * -0x3333333333333333;
        return;
      }
    }
    else {
      pbVar30 = pbVar20;
      if (pbVar25 != pbVar20) goto LAB_1053fd00c;
    }
    pbVar35 = pbVar20 + -(long)pbVar30;
    pbVar25 = pbVar12 + (long)pbVar30;
    pbVar22 = pbVar25;
    do {
      pbVar37 = pbVar22 + -1;
      bVar26 = *pbVar37;
      uVar29 = (ulong)(char)bVar26;
      if ((char)bVar26 < 0) {
        pbVar37 = pbVar22 + -2;
        bVar16 = *pbVar37;
        if ((char)bVar16 < -0x40) {
          pbVar37 = pbVar22 + -3;
          bVar21 = *pbVar37;
          if ((char)bVar21 < -0x40) {
            pbVar37 = pbVar22 + -4;
            uVar28 = bVar21 & 0x3f | (*pbVar37 & 7) << 6;
          }
          else {
            uVar28 = (int)(char)bVar21 & 0xf;
          }
          uVar28 = bVar16 & 0x3f | uVar28 << 6;
        }
        else {
          uVar28 = (int)(char)bVar16 & 0x1f;
        }
        uVar28 = (int)(char)bVar26 & 0x3fU | uVar28 << 6;
        uVar29 = (ulong)uVar28;
        if (uVar28 < 0x21 && (1L << (uVar29 & 0x3f) & 0x100003e00U) != 0) goto LAB_1053fc9e4;
      }
      else if (bVar26 < 0x21 && (1L << (uVar29 & 0x3f) & 0x100003e00U) != 0) {
LAB_1053fc9e4:
        pbVar37 = pbVar37 + (1 - (long)pbVar12);
        goto LAB_1053fcaa4;
      }
      uVar28 = (uint)uVar29;
      if (0x7f < uVar28) {
        uVar3 = uVar28 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar26 = (&
                     __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                     )[uVar29 & 0xff];
joined_r0x0001053fc8d0:
            if ((bVar26 & 1) != 0) {
              if (uVar28 < 0x800) {
                pbVar37 = pbVar37 + (2 - (long)pbVar12);
              }
              else {
                lVar10 = 3;
                if (0xffff < uVar28) {
                  lVar10 = 4;
                }
                pbVar37 = pbVar37 + (lVar10 - (long)pbVar12);
              }
              goto LAB_1053fcaa4;
            }
          }
          else if ((uVar3 == 0x16) && (uVar28 == 0x1680)) {
LAB_1053fcfec:
            pbVar37 = pbVar37 + (3 - (long)pbVar12);
            goto LAB_1053fcaa4;
          }
        }
        else {
          if (uVar3 == 0x20) {
            bVar26 = (byte)(&
                           __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                           )[uVar29 & 0xff] >> 1;
            goto joined_r0x0001053fc8d0;
          }
          if ((uVar3 == 0x30) && (uVar28 == 0x3000)) goto LAB_1053fcfec;
        }
      }
      pbVar22 = pbVar37;
    } while (pbVar12 != pbVar37);
    pbVar37 = (byte *)0x0;
  }
LAB_1053fcaa4:
  pbVar22 = pbVar35;
  if (pbVar30 != pbVar20) {
    pbVar24 = (byte *)0x0;
    do {
      pbVar23 = pbVar25 + 1;
      uVar28 = (uint)*pbVar25;
      uVar29 = (ulong)uVar28;
      pbVar22 = pbVar24;
      if ((char)*pbVar25 < '\0') {
        if (uVar28 < 0xe0) {
          pbVar23 = pbVar25 + 2;
          uVar28 = pbVar25[1] & 0x3f | (uVar28 & 0x1f) << 6;
          uVar29 = (ulong)uVar28;
          if (uVar28 < 0x21 && (1L << (uVar29 & 0x3f) & 0x100003e00U) != 0) break;
        }
        else {
          uVar3 = pbVar25[2] & 0x3f | (pbVar25[1] & 0x3f) << 6;
          if (uVar28 < 0xf0) {
            pbVar23 = pbVar25 + 3;
            uVar3 = uVar3 | (uVar28 & 0x1f) << 0xc;
            uVar29 = (ulong)uVar3;
            if (uVar3 < 0x21 && (1L << (uVar29 & 0x3f) & 0x100003e00U) != 0) break;
          }
          else {
            pbVar23 = pbVar25 + 4;
            uVar28 = pbVar25[3] & 0x3f | uVar3 << 6 | (uVar28 & 7) << 0x12;
            uVar29 = (ulong)uVar28;
            if (uVar28 < 0x21 && (1L << (uVar29 & 0x3f) & 0x100003e00U) != 0) break;
          }
        }
      }
      else if (uVar28 < 0x21 && (1L << (uVar29 & 0x3f) & 0x100003e00U) != 0) break;
      uVar28 = (uint)uVar29;
      if (0x7f < uVar28) {
        uVar3 = uVar28 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar26 = (&
                     __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                     )[uVar29 & 0xff];
joined_r0x0001053fcad0:
            if ((bVar26 & 1) != 0) break;
          }
          else if ((uVar3 == 0x16) && (uVar28 == 0x1680)) break;
        }
        else {
          if (uVar3 == 0x20) {
            bVar26 = (byte)(&
                           __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                           )[uVar29 & 0xff] >> 1;
            goto joined_r0x0001053fcad0;
          }
          if ((uVar3 == 0x30) && (uVar28 == 0x3000)) break;
        }
      }
      pbVar24 = pbVar23 + ((long)pbVar24 - (long)pbVar25);
      pbVar25 = pbVar23;
      pbVar22 = pbVar35;
    } while (pbVar23 != pbVar12 + (long)pbVar20);
  }
  if (param_3 != (undefined1 *)0x0) {
    pbVar25 = pbVar27;
    do {
      pbVar12 = pbVar25 + 1;
      uVar28 = (uint)*pbVar25;
      uVar29 = (ulong)uVar28;
      if (-1 < (char)*pbVar25) {
        if (0x20 < uVar28 || (1L << (uVar29 & 0x3f) & 0x100003e00U) == 0) goto LAB_1053fcd14;
LAB_1053fcd68:
        pbVar25 = pbVar27;
        puVar34 = param_3;
        if ((undefined1 *)0xf < param_3) goto LAB_1053fcdb8;
        goto LAB_1053fcd78;
      }
      if (uVar28 < 0xe0) {
        pbVar12 = pbVar25 + 2;
        uVar28 = pbVar25[1] & 0x3f | (uVar28 & 0x1f) << 6;
        uVar29 = (ulong)uVar28;
        if (0x20 < uVar28 || (1L << (uVar29 & 0x3f) & 0x100003e00U) == 0) goto LAB_1053fcd14;
        goto LAB_1053fcd68;
      }
      uVar3 = pbVar25[2] & 0x3f | (pbVar25[1] & 0x3f) << 6;
      if (uVar28 < 0xf0) {
        pbVar12 = pbVar25 + 3;
        uVar3 = uVar3 | (uVar28 & 0x1f) << 0xc;
        uVar29 = (ulong)uVar3;
        if (0x20 < uVar3 || (1L << (uVar29 & 0x3f) & 0x100003e00U) == 0) goto LAB_1053fcd14;
        goto LAB_1053fcd68;
      }
      uVar28 = pbVar25[3] & 0x3f | uVar3 << 6 | (uVar28 & 7) << 0x12;
      uVar29 = (ulong)uVar28;
      if (uVar28 == 0x110000) break;
      pbVar12 = pbVar25 + 4;
      if (uVar28 < 0x21 && (1L << ((ulong)uVar28 & 0x3f) & 0x100003e00U) != 0) goto LAB_1053fcd68;
LAB_1053fcd14:
      uVar28 = (uint)uVar29;
      if (0x7f < uVar28) {
        uVar3 = uVar28 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar26 = (&
                     __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                     )[uVar29 & 0xff];
joined_r0x0001053fcd64:
            if ((bVar26 & 1) != 0) goto LAB_1053fcd68;
          }
          else if ((uVar3 == 0x16) && (uVar28 == 0x1680)) goto LAB_1053fcd68;
        }
        else {
          if (uVar3 == 0x20) {
            bVar26 = (byte)(&
                           __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                           )[uVar29 & 0xff] >> 1;
            goto joined_r0x0001053fcd64;
          }
          if ((uVar3 == 0x30) && (uVar28 == 0x3000)) goto LAB_1053fcd68;
        }
      }
      pbVar25 = pbVar12;
    } while (pbVar12 != pbVar27 + (long)param_3);
  }
LAB_1053fcd90:
  if (param_3 == (undefined1 *)0x0) {
    lVar10 = 1;
  }
  else {
LAB_1053fcd94:
    lVar10 = _malloc(param_3);
    if (lVar10 == 0) {
      func_0x0001087c9084(1,param_3);
      pbVar27 = extraout_x1;
LAB_1053fcdb8:
      puVar34 = (undefined1 *)(((ulong)(pbVar27 + 7) & 0xfffffffffffffff8) - (long)pbVar27);
      if (puVar34 != (undefined1 *)0x0) goto LAB_1053fce30;
      goto LAB_1053fcdcc;
    }
  }
  _memcpy(lVar10,pbVar27,param_3);
  puStack_310 = param_3;
  lStack_308 = lVar10;
  puStack_300 = param_3;
LAB_1053fce9c:
  ppuStack_2e0 = &puStack_310;
  puStack_2d8 = &DAT_1052544b0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&puStack_2f8,s__108ac988c,&ppuStack_2e0);
  puVar7 = puStack_2f0;
  puVar34 = puStack_2f8;
  pbVar22 = pbVar22 + (long)pbVar30;
  pbVar25 = pbVar37;
  if (puVar11[7] != 0) {
    bVar8 = false;
    lVar17 = puVar11[6];
    lVar18 = lVar17 + puVar11[7] * 0x30;
    lVar10 = lVar17;
    do {
      pbVar27 = *(byte **)(lVar10 + 0x20);
      bVar4 = bVar8;
      if (pbVar27 < pbVar22) {
        pbVar20 = *(byte **)(lVar10 + 0x28);
        pbVar12 = pbVar20;
        if (pbVar20 <= pbVar22) {
          pbVar12 = pbVar22;
        }
        pbVar30 = pbVar27;
        if (pbVar25 <= pbVar27) {
          pbVar30 = pbVar25;
        }
        pbVar35 = pbVar25;
        pbVar24 = pbVar22;
        if (pbVar27 < pbVar25 || pbVar22 < pbVar20) {
          bVar4 = true;
          pbVar35 = pbVar30;
          pbVar24 = pbVar12;
        }
        if (pbVar20 <= pbVar25) {
          pbVar35 = pbVar25;
          pbVar24 = pbVar22;
          bVar4 = bVar8;
        }
        lVar19 = lVar10 + 0x30;
        bVar9 = lVar19 != lVar18;
        lVar10 = lVar17;
        if (bVar9) {
          lVar10 = lVar19;
        }
        bVar8 = (bool)(bVar9 & bVar4);
        pbVar25 = pbVar35;
        pbVar22 = pbVar24;
      }
      else {
        lVar19 = lVar10 + 0x30;
        bVar9 = lVar19 != lVar18;
        lVar10 = lVar17;
        if (bVar9) {
          lVar10 = lVar19;
        }
        bVar8 = (bool)(bVar9 & bVar8);
      }
    } while ((bVar9) || (bVar4));
  }
  func_0x00010543f594(puVar11,pbVar25,pbVar22,puStack_2f0,uStack_2e8);
  if (puVar34 != (undefined1 *)0x0) {
    _free(puVar7);
  }
  pbVar25 = pbVar37 + (long)puStack_300;
  if (CARRY8((ulong)pbVar37,(ulong)puStack_300)) {
    pbVar25 = (byte *)0xffffffffffffffff;
  }
  pbVar27 = pbVar25 + 1;
  if (pbVar25 == (byte *)0xffffffffffffffff) {
    pbVar27 = (byte *)0xffffffffffffffff;
  }
  if ((byte *)puVar11[4] <= pbVar27) {
    pbVar27 = (byte *)puVar11[4];
  }
  puVar11[0xa4] = pbVar27;
  uVar13 = func_0x00010544096c(puVar11);
  puVar11[0xa4] = uVar13;
  *puVar11 = 0;
  if (puStack_310 != (undefined1 *)0x0) {
    _free(lStack_308);
  }
  return;
  while (puVar34 = puVar34 + -1, pbVar25 = pbVar25 + 1, puVar34 != (undefined1 *)0x0) {
LAB_1053fcd78:
    if (*pbVar25 == 0x22) goto LAB_1053fcd90;
  }
LAB_1053fce78:
  puStack_2f0 = &DAT_105150c8c;
  puStack_2f8 = (undefined1 *)&pbStack_320;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&puStack_310,s_____108aee836,&puStack_2f8)
  ;
  goto LAB_1053fce9c;
LAB_1053fce30:
  lVar10 = (long)pbVar27 - ((ulong)(pbVar27 + 7) & 0xfffffffffffffff8);
  pbVar25 = pbVar27;
  do {
    if (*pbVar25 == 0x22) goto LAB_1053fcd94;
    bVar8 = lVar10 != -1;
    lVar10 = lVar10 + 1;
    pbVar25 = pbVar25 + 1;
  } while (bVar8);
  if (puVar34 <= param_3 + -0x10) {
LAB_1053fcdcc:
    do {
      uVar29 = *(ulong *)(pbVar27 + (long)puVar34);
      uVar2 = *(ulong *)((long)(pbVar27 + (long)puVar34) + 8);
      if ((((0x101010101010100 - (uVar29 ^ 0x2222222222222222) | uVar29) &
            (0x101010101010100 - (uVar2 ^ 0x2222222222222222) | uVar2) ^ 0xffffffffffffffff) &
          0x8080808080808080) != 0) break;
      puVar34 = puVar34 + 0x10;
    } while (puVar34 <= param_3 + -0x10);
  }
  lVar10 = (long)param_3 - (long)puVar34;
  if (lVar10 == 0) goto LAB_1053fce78;
  pbVar25 = pbVar27 + (long)puVar34;
  while (*pbVar25 != 0x22) {
    lVar10 = lVar10 + -1;
    pbVar25 = pbVar25 + 1;
    if (lVar10 == 0) goto LAB_1053fce78;
  }
  goto LAB_1053fcd94;
}

