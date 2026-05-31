
/* WARNING: Possible PIC construction at 0x000100a40820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a40934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a40824) */
/* WARNING: Removing unreachable block (ram,0x000100a40840) */
/* WARNING: Removing unreachable block (ram,0x000100a40830) */
/* WARNING: Removing unreachable block (ram,0x000100a40850) */
/* WARNING: Removing unreachable block (ram,0x000100a40938) */
/* WARNING: Removing unreachable block (ram,0x000100a40954) */
/* WARNING: Removing unreachable block (ram,0x000100a40944) */
/* WARNING: Removing unreachable block (ram,0x000100a40964) */
/* WARNING: Removing unreachable block (ram,0x000100a413cc) */
/* WARNING: Removing unreachable block (ram,0x000100a41e54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100a40794(undefined8 *param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar16;
  long *unaff_x23;
  byte bVar17;
  undefined8 unaff_x24;
  undefined8 uVar18;
  undefined8 unaff_x25;
  long lVar19;
  long lVar20;
  char cVar21;
  undefined8 unaff_x26;
  ulong uVar22;
  undefined8 *puVar23;
  char cVar24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  char acStack_1408 [96];
  undefined1 auStack_13a8 [2408];
  char acStack_a40 [1352];
  char acStack_4f8 [1176];
  undefined8 *puStack_60;
  undefined8 *******pppppppuStack_40;
  undefined8 uStack_38;
  
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = param_1;
  puVar23 = param_1 + 0x400;
  bVar17 = *(byte *)((long)param_1 + 0x2895);
  if (bVar17 < 2) {
    if (bVar17 == 0) {
      param_1[0x19] = param_1[1];
      param_1[0x18] = *param_1;
      param_1[0x1b] = param_1[3];
      param_1[0x1a] = param_1[2];
      param_1[0x1c] = param_1[4];
      param_1[0x1d] = param_1[5];
      param_1[0x1f] = param_1[7];
      param_1[0x1e] = param_1[6];
      param_1[0x21] = param_1[9];
      param_1[0x20] = param_1[8];
      param_1[0x23] = param_1[0xb];
      param_1[0x22] = param_1[10];
      param_1[0x25] = param_1[0xd];
      param_1[0x24] = param_1[0xc];
      param_1[0x27] = param_1[0xf];
      param_1[0x26] = param_1[0xe];
      param_1[0x29] = param_1[0x11];
      param_1[0x28] = param_1[0x10];
      param_1[0x2b] = param_1[0x13];
      param_1[0x2a] = param_1[0x12];
      param_1[0x2d] = param_1[0x15];
      param_1[0x2c] = param_1[0x14];
      param_1[0x2e] = param_1[0x16];
      param_1[0x2f] = param_1[0x17];
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x512);
      *(undefined1 *)((long)param_1 + 0x184) = 1;
      *(undefined1 *)((long)param_1 + 0x185) = *(undefined1 *)((long)param_1 + 0x2894);
      *(undefined1 *)((long)param_1 + 0x186) = 0;
      goto LAB_100a4081c;
    }
    func_0x000108a07af4(&UNK_10b22aef8);
LAB_100a40874:
    func_0x000108a07b10(&UNK_10b22aef8);
    *(undefined1 *)((long)param_1 + 0x2895) = 2;
    unaff_x20 = (undefined8 *)__Unwind_Resume();
    FUN_100d03a44(param_1 + 0x18);
    *(undefined1 *)((long)param_1 + 0x2895) = 2;
    __Unwind_Resume(unaff_x20);
    auVar36 = func_0x000108a07bc4();
    param_1 = auVar36._0_8_;
    ppuVar1 = &puStack_60;
    uStack_38 = 0x100a408ac;
    pppppppuVar25 = &pppppppuStack_40;
    puVar6 = param_1 + 0x400;
    bVar17 = *(byte *)((long)param_1 + 0x2895);
    puStack_60 = puVar23;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if (bVar17 < 2) {
      if (bVar17 == 0) {
        param_1[0x19] = param_1[1];
        param_1[0x18] = *param_1;
        param_1[0x1b] = param_1[3];
        param_1[0x1a] = param_1[2];
        param_1[0x1c] = param_1[4];
        param_1[0x1d] = param_1[5];
        param_1[0x1f] = param_1[7];
        param_1[0x1e] = param_1[6];
        param_1[0x21] = param_1[9];
        param_1[0x20] = param_1[8];
        param_1[0x23] = param_1[0xb];
        param_1[0x22] = param_1[10];
        param_1[0x25] = param_1[0xd];
        param_1[0x24] = param_1[0xc];
        param_1[0x27] = param_1[0xf];
        param_1[0x26] = param_1[0xe];
        param_1[0x29] = param_1[0x11];
        param_1[0x28] = param_1[0x10];
        param_1[0x2b] = param_1[0x13];
        param_1[0x2a] = param_1[0x12];
        param_1[0x2d] = param_1[0x15];
        param_1[0x2c] = param_1[0x14];
        param_1[0x2e] = param_1[0x16];
        param_1[0x2f] = param_1[0x17];
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x512);
        *(undefined1 *)((long)param_1 + 0x184) = 0;
        *(undefined1 *)((long)param_1 + 0x185) = *(undefined1 *)((long)param_1 + 0x2894);
        *(undefined1 *)((long)param_1 + 0x186) = 0;
        goto LAB_100a40930;
      }
      func_0x000108a07af4(&UNK_10b22af28);
LAB_100a40988:
      func_0x000108a07b10(&UNK_10b22af28);
      *(undefined1 *)((long)param_1 + 0x2895) = 2;
      unaff_x20 = (undefined8 *)__Unwind_Resume();
      FUN_100d03a44(param_1 + 0x18);
      *(undefined1 *)((long)param_1 + 0x2895) = 2;
      __Unwind_Resume(unaff_x20);
      uVar26 = 0x100a409c0;
      auVar37 = func_0x000108a07bc4();
      auVar36._8_8_ = auVar37._8_8_;
      auVar36._0_8_ = param_1;
      param_1 = auVar37._0_8_;
    }
    else {
      if (bVar17 != 3) goto LAB_100a40988;
LAB_100a40930:
      param_1 = param_1 + 0x18;
      uVar26 = 0x100a40938;
      ppuVar1 = &puStack_60;
    }
  }
  else {
    if (bVar17 != 3) goto LAB_100a40874;
LAB_100a4081c:
    param_1 = param_1 + 0x18;
    uVar26 = 0x100a40824;
    ppuVar1 = (undefined8 **)&stack0xffffffffffffffd0;
    puVar6 = puVar23;
    pppppppuVar25 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  plVar7 = auVar36._8_8_;
  *(undefined8 *)((long)ppuVar1 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppuVar1 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppuVar1 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppuVar1 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppuVar1 + -0x40) = unaff_x24;
  *(long **)((long)ppuVar1 + -0x38) = unaff_x23;
  *(undefined8 **)((long)ppuVar1 + -0x30) = puVar6;
  *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
  *(undefined8 **)((long)ppuVar1 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar1 + -0x18) = auVar36._0_8_;
  *(undefined8 ********)((long)ppuVar1 + -0x10) = pppppppuVar25;
  *(undefined8 *)((long)ppuVar1 + -8) = uVar26;
  *(undefined8 *)((long)ppuVar1 + -0x1060) = 0;
  *(undefined8 *)((long)ppuVar1 + -0x1fd0) = 0;
  bVar17 = *(byte *)((long)param_1 + 0xc6);
  if (bVar17 < 3) {
    if (bVar17 != 0) {
      if (bVar17 == 1) {
        func_0x000108a07af4(&UNK_10b22af58);
      }
      func_0x000108a07b10();
LAB_100a41ef8:
      *(undefined8 **)((long)ppuVar1 + -0x1fb0) = unaff_x20;
      func_0x000108a07af4(&UNK_10b22ae98);
      goto LAB_100a41fe4;
    }
    uVar18 = param_1[1];
    uVar26 = *param_1;
    uVar15 = param_1[3];
    uVar14 = param_1[2];
    uVar9 = *(undefined1 *)((long)param_1 + 0xc5);
    uVar27 = param_1[6];
    uVar29 = param_1[9];
    uVar28 = param_1[8];
    *(undefined8 *)((long)ppuVar1 + -0x1f98) = param_1[7];
    *(undefined8 *)((long)ppuVar1 + -0x1fa0) = uVar27;
    *(undefined8 *)((long)ppuVar1 + -0x1f88) = uVar29;
    *(undefined8 *)((long)ppuVar1 + -0x1f90) = uVar28;
    uVar27 = param_1[10];
    uVar29 = param_1[0xd];
    uVar28 = param_1[0xc];
    *(undefined8 *)((long)ppuVar1 + -0x1f78) = param_1[0xb];
    *(undefined8 *)((long)ppuVar1 + -0x1f80) = uVar27;
    *(undefined8 *)((long)ppuVar1 + -0x1f68) = uVar29;
    *(undefined8 *)((long)ppuVar1 + -0x1f70) = uVar28;
    uVar27 = param_1[0xe];
    uVar29 = param_1[0x11];
    uVar28 = param_1[0x10];
    *(undefined8 *)((long)ppuVar1 + -0x1f58) = param_1[0xf];
    *(undefined8 *)((long)ppuVar1 + -0x1f60) = uVar27;
    *(undefined8 *)((long)ppuVar1 + -0x1f48) = uVar29;
    *(undefined8 *)((long)ppuVar1 + -0x1f50) = uVar28;
    *(undefined1 *)((long)param_1 + 199) = *(undefined1 *)((long)param_1 + 0xc4);
    param_1[0x19] = 0;
    param_1[0x1c] = uVar18;
    param_1[0x1b] = uVar26;
    param_1[0x1e] = uVar15;
    param_1[0x1d] = uVar14;
    param_1[0x1f] = param_1[4];
    param_1[0x20] = param_1[5];
    uVar26 = *(undefined8 *)((long)ppuVar1 + -0x1f80);
    uVar14 = *(undefined8 *)((long)ppuVar1 + -0x1f68);
    uVar18 = *(undefined8 *)((long)ppuVar1 + -0x1f70);
    param_1[0x26] = *(undefined8 *)((long)ppuVar1 + -0x1f78);
    param_1[0x25] = uVar26;
    param_1[0x28] = uVar14;
    param_1[0x27] = uVar18;
    uVar26 = *(undefined8 *)((long)ppuVar1 + -0x1f60);
    uVar14 = *(undefined8 *)((long)ppuVar1 + -0x1f48);
    uVar18 = *(undefined8 *)((long)ppuVar1 + -0x1f50);
    param_1[0x2a] = *(undefined8 *)((long)ppuVar1 + -0x1f58);
    param_1[0x29] = uVar26;
    param_1[0x2c] = uVar14;
    param_1[0x2b] = uVar18;
    uVar26 = *(undefined8 *)((long)ppuVar1 + -0x1fa0);
    uVar14 = *(undefined8 *)((long)ppuVar1 + -0x1f88);
    uVar18 = *(undefined8 *)((long)ppuVar1 + -0x1f90);
    param_1[0x22] = *(undefined8 *)((long)ppuVar1 + -0x1f98);
    param_1[0x21] = uVar26;
    param_1[0x24] = uVar14;
    param_1[0x23] = uVar18;
    param_1[0x2e] = param_1[0x13];
    param_1[0x2d] = param_1[0x12];
    param_1[0x30] = param_1[0x15];
    param_1[0x2f] = param_1[0x14];
    param_1[0x31] = param_1[0x16];
    param_1[0x32] = param_1[0x17];
    *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)((long)param_1 + 0x33c) = 1;
    *(undefined1 *)((long)param_1 + 0x33d) = uVar9;
    *(undefined1 *)((long)param_1 + 0x33e) = 0;
LAB_100a40ac0:
    puVar23 = param_1 + 0x19;
    FUN_100a3ceec((undefined1 *)((long)ppuVar1 + -0x13b0),puVar23,plVar7);
    lVar20 = *(long *)((long)ppuVar1 + -0x13b0);
    if (lVar20 == -0x7fffffffffffffff) {
      uVar9 = 3;
LAB_100a41924:
      *(undefined1 *)((long)param_1 + 0xc6) = uVar9;
      uVar26 = 1;
      goto LAB_100a4192c;
    }
    unaff_x23 = *(long **)((long)ppuVar1 + -0x13a8);
    _memcpy((undefined1 *)((long)ppuVar1 + -0xed8),(undefined1 *)((long)ppuVar1 + -0x13a0),0x4c0);
    func_0x000100cc2360(puVar23);
    if (lVar20 != -0x8000000000000000) {
      param_1[0x18c] = lVar20;
      param_1[0x18d] = unaff_x23;
      _memcpy(param_1 + 0x18e,(undefined1 *)((long)ppuVar1 + -0xed8),0x4c0);
      _memcpy((undefined1 *)((long)ppuVar1 + -8000),param_1 + 0x18c,0x4d0);
      bVar17 = *(byte *)((long)param_1 + 199);
      _memcpy(puVar23,(undefined1 *)((long)ppuVar1 + -8000),0xb90);
      *(byte *)(param_1 + 0x18b) = bVar17;
      *(undefined1 *)((long)param_1 + 0xc59) = 0;
      goto LAB_100a40ba4;
    }
    param_1[0x18d] = unaff_x23;
    param_1[0x18c] = 0x8000000000000000;
  }
  else {
    if (bVar17 == 3) goto LAB_100a40ac0;
    bVar17 = *(byte *)((long)param_1 + 0xc59);
    unaff_x20 = param_1 + 0x19;
    if (bVar17 < 2) {
      if (bVar17 != 0) goto LAB_100a41ef8;
      bVar17 = *(byte *)(param_1 + 0x18b);
LAB_100a40ba4:
      *(undefined1 *)((long)param_1 + 0xc5a) = 1;
      _memcpy(param_1 + 0xb3,param_1 + 0x19,0x4d0);
      cVar24 = *(char *)(param_1 + 0x14c);
      *(undefined8 **)((long)ppuVar1 + -0x1fb0) = param_1 + 0x19;
      if (cVar24 == '\x01') {
        *(undefined8 **)((long)ppuVar1 + -0x4a0) = param_1 + 0xb6;
        *(undefined8 **)((long)ppuVar1 + -0xa18) = param_1 + 0xb3;
        if ((bVar17 & 1) != 0) {
          *(undefined1 **)((long)ppuVar1 + -0x13b0) = (undefined1 *)((long)ppuVar1 + -0x4a0);
          *(undefined **)((long)ppuVar1 + -0x13a8) = &DAT_100c7b524;
          *(undefined1 **)((long)ppuVar1 + -0x13a0) = (undefined1 *)((long)ppuVar1 + -0xa18);
          *(undefined **)((long)ppuVar1 + -0x1398) = &DAT_100c7b524;
          func_0x00010602ab90(s_Authorize______by_opening_this_U_108ace96d,
                              (undefined1 *)((long)ppuVar1 + -0x13b0));
        }
        uVar26 = param_1[0xb4];
        uVar18 = param_1[0xb5];
        puVar3 = (undefined4 *)_malloc(6);
        if (puVar3 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,6);
          goto LAB_100a41fe4;
        }
        *puVar3 = 0x616c625f;
        *(undefined2 *)(puVar3 + 1) = 0x6b6e;
        *(undefined2 *)((long)ppuVar1 + -0x1398) = 1;
        *(undefined8 *)((long)ppuVar1 + -0x13b0) = 6;
        *(undefined4 **)((long)ppuVar1 + -0x13a8) = puVar3;
        *(undefined8 *)((long)ppuVar1 + -0x13a0) = 6;
        uVar4 = func_0x000106249b84(0,uVar26,uVar18,(undefined1 *)((long)ppuVar1 + -0x13b0));
        _free(puVar3);
        if (uVar4 != 0) {
          if ((uVar4 & 3) == 1) {
            uVar26 = *(undefined8 *)(uVar4 - 1);
            puVar23 = *(undefined8 **)(uVar4 + 7);
            pcVar12 = (code *)*puVar23;
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(uVar26);
            }
            if (puVar23[1] != 0) {
              _free(uVar26);
            }
            _free((undefined8 *)(uVar4 - 1));
          }
          if ((bVar17 & 1) == 0) {
            *(undefined1 **)((long)ppuVar1 + -0x13b0) = (undefined1 *)((long)ppuVar1 + -0x4a0);
            *(undefined **)((long)ppuVar1 + -0x13a8) = &DAT_100c7b524;
            *(undefined1 **)((long)ppuVar1 + -0x13a0) = (undefined1 *)((long)ppuVar1 + -0xa18);
            *(undefined **)((long)ppuVar1 + -0x1398) = &DAT_100c7b524;
            __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                      (s_Authorize______by_opening_this_U_108ace96d,
                       (undefined1 *)((long)ppuVar1 + -0x13b0));
          }
          __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(&UNK_108cb56e4,0x7b);
        }
      }
      param_1[0x15a] = param_1 + 0xbc;
      puVar23 = param_1 + 0x14b;
      param_1[0x15b] = puVar23;
      param_1[0x15c] = param_1 + 0xb6;
      plVar5 = param_1 + 0x148;
      param_1[0x15d] = param_1 + 0xb9;
      param_1[0x15e] = (long)param_1 + 0xa61;
      param_1[0x15f] = plVar5;
      *(long *)((long)ppuVar1 + -0x1fa8) = (long)param_1 + 0xb02;
      *(undefined1 *)((long)param_1 + 0xb02) = 0;
LAB_100a40d1c:
      *(undefined2 *)(param_1 + 0x160) = 0;
      lVar19 = *plVar5;
      lVar16 = plVar5[1];
      auVar38 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
      lVar20 = auVar38._0_8_ + lVar19;
      if ((lVar19 < 0 != SCARRY8(auVar38._0_8_,lVar19)) ||
         ((uVar10 = auVar38._8_4_ + (int)lVar16, 999999999 < uVar10 &&
          ((bVar2 = SCARRY8(lVar20,1), lVar20 = lVar20 + 1, bVar2 ||
           (uVar10 = uVar10 + 0xc4653600, uVar10 == 1000000000)))))) {
        __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E
                  ((undefined1 *)((long)ppuVar1 + -0x13b0),0);
      }
      else {
        auVar36 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b22aeb0);
        *(undefined1 (*) [16])((long)ppuVar1 + -0x8b0) = auVar36;
        lVar16 = 0x140;
        if ((auVar36._0_8_ & 1) == 0) {
          lVar16 = 0x200;
        }
        if (*(int *)(auVar36._8_8_ + lVar16 + 0xd8) == 1000000000) {
          func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b22aeb0);
          goto LAB_100a41fe4;
        }
        *(undefined1 (*) [16])((long)ppuVar1 + -0x13b0) = auVar36;
        *(undefined8 *)((long)ppuVar1 + -0x13a0) = 0;
        *(long *)((long)ppuVar1 + -0x1358) = lVar20;
        *(uint *)((long)ppuVar1 + -0x1350) = uVar10;
        *(undefined1 *)((long)ppuVar1 + -0x1348) = 0;
      }
      uVar26 = *(undefined8 *)((long)ppuVar1 + -0x1370);
      uVar14 = *(undefined8 *)((long)ppuVar1 + -0x1358);
      uVar18 = *(undefined8 *)((long)ppuVar1 + -0x1360);
      *(undefined8 *)((long)ppuVar1 + -0x458) = *(undefined8 *)((long)ppuVar1 + -0x1368);
      *(undefined8 *)((long)ppuVar1 + -0x460) = uVar26;
      *(undefined8 *)((long)ppuVar1 + -0x448) = uVar14;
      *(undefined8 *)((long)ppuVar1 + -0x450) = uVar18;
      uVar27 = *(undefined8 *)((long)ppuVar1 + -0x1348);
      uVar15 = *(undefined8 *)((long)ppuVar1 + -0x1350);
      *(undefined8 *)((long)ppuVar1 + -0x438) = uVar27;
      *(undefined8 *)((long)ppuVar1 + -0x440) = uVar15;
      uVar29 = *(undefined8 *)((long)ppuVar1 + -0x13a8);
      uVar28 = *(undefined8 *)((long)ppuVar1 + -0x13b0);
      uVar31 = *(undefined8 *)((long)ppuVar1 + -0x1398);
      uVar30 = *(undefined8 *)((long)ppuVar1 + -0x13a0);
      *(undefined8 *)((long)ppuVar1 + -0x498) = uVar29;
      *(undefined8 *)((long)ppuVar1 + -0x4a0) = uVar28;
      *(undefined8 *)((long)ppuVar1 + -0x488) = uVar31;
      *(undefined8 *)((long)ppuVar1 + -0x490) = uVar30;
      uVar33 = *(undefined8 *)((long)ppuVar1 + -0x1378);
      uVar32 = *(undefined8 *)((long)ppuVar1 + -0x1380);
      uVar35 = *(undefined8 *)((long)ppuVar1 + -5000);
      uVar34 = *(undefined8 *)((long)ppuVar1 + -0x1390);
      *(undefined8 *)((long)ppuVar1 + -0x468) = uVar33;
      *(undefined8 *)((long)ppuVar1 + -0x470) = uVar32;
      *(undefined8 *)((long)ppuVar1 + -0x478) = uVar35;
      *(undefined8 *)((long)ppuVar1 + -0x480) = uVar34;
      param_1[0x16a] = *(undefined8 *)((long)ppuVar1 + -0x1368);
      param_1[0x169] = uVar26;
      param_1[0x16c] = uVar14;
      param_1[0x16b] = uVar18;
      param_1[0x16e] = uVar27;
      param_1[0x16d] = uVar15;
      param_1[0x162] = uVar29;
      param_1[0x161] = uVar28;
      param_1[0x164] = uVar31;
      param_1[0x163] = uVar30;
      param_1[0x166] = uVar35;
      param_1[0x165] = uVar34;
      param_1[0x168] = uVar33;
      param_1[0x167] = uVar32;
      param_1[0x16f] = puVar23;
LAB_100a40e24:
      plVar5 = (long *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
      if ((char)plVar5[9] == '\x01') {
LAB_100a41008:
        bVar2 = false;
        bVar17 = *(char *)((long)plVar5 + 0x45) != '\0' |
                 (*(byte *)((long)plVar5 + 0x44) ^ 0xff) & 1;
      }
      else {
        if ((char)plVar5[9] != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (plVar5,&DAT_100c35d48);
          *(undefined1 *)(plVar5 + 9) = 1;
          goto LAB_100a41008;
        }
        bVar2 = true;
        bVar17 = 2;
      }
      uVar4 = (ulong)(bVar17 == 2);
      unaff_x23 = (long *)param_1[0x16f];
      lVar20 = *unaff_x23;
      if (lVar20 == 0) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd5b1c,0x2b,&UNK_10b24d460);
        goto LAB_100a41fe4;
      }
      if (bVar2) {
        cVar24 = '\0';
        cVar21 = '\0';
        *(undefined1 *)((long)ppuVar1 + -0x9c0) = 0;
        *(undefined1 *)((long)ppuVar1 + -0x9bf) = 0;
        uVar10 = (uint)*(undefined8 *)(lVar20 + 0x30);
        if ((uVar10 >> 1 & 1) != 0) goto LAB_100a41078;
LAB_100a410b0:
        if ((uVar10 >> 2 & 1) != 0) goto LAB_100a411b8;
        if ((uVar10 & 1) == 0) {
LAB_100a41108:
          auVar36 = (*(code *)**(undefined8 **)*plVar7)(((undefined8 *)*plVar7)[1]);
          *(undefined1 (*) [16])(lVar20 + 0x20) = auVar36;
          LOAcquire();
          uVar22 = *(ulong *)(lVar20 + 0x30);
          *(ulong *)(lVar20 + 0x30) = uVar22 | 1;
          LORelease();
          if (((uint)uVar22 >> 1 & 1) != 0) {
LAB_100a411a0:
            uVar22 = *(ulong *)(lVar20 + 0x38);
            *(undefined8 *)(lVar20 + 0x38) = 2;
            goto joined_r0x000100a411b4;
          }
        }
        else if ((*(long *)(lVar20 + 0x28) != ((long *)*plVar7)[1]) ||
                (*(long *)(lVar20 + 0x20) != *(long *)*plVar7)) {
          puVar11 = (ulong *)(lVar20 + 0x30);
          LOAcquire();
          uVar22 = *puVar11;
          *puVar11 = uVar22 & 0xfffffffffffffffe;
          LORelease();
          if (((uint)uVar22 >> 1 & 1) == 0) {
            (**(code **)(*(long *)(lVar20 + 0x20) + 0x18))(*(undefined8 *)(lVar20 + 0x28));
            goto LAB_100a41108;
          }
          LOAcquire();
          *puVar11 = *puVar11 | 1;
          LORelease();
          goto LAB_100a411a0;
        }
        if (cVar24 != '\0') {
          if ((char)plVar5[9] != '\x01') {
            if ((char)plVar5[9] == '\x02') goto LAB_100a411dc;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (plVar5,&DAT_1060edbcc);
            *(undefined1 *)(plVar5 + 9) = 1;
            unaff_x23 = plVar5;
          }
          *(undefined1 *)((long)plVar5 + 0x44) = 1;
          *(char *)((long)plVar5 + 0x45) = cVar21;
        }
LAB_100a411dc:
        uVar22 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                           (bVar17 == 2 | bVar17 & 1,param_1 + 0x161,plVar7);
        if ((uVar22 & 1) == 0) {
          uVar22 = 3;
          goto LAB_100a41318;
        }
LAB_100a4126c:
        **(undefined1 **)((long)ppuVar1 + -0x1fa8) = 3;
LAB_100a41918:
        *(undefined1 *)((long)param_1 + 0xc59) = 3;
        uVar9 = 4;
        goto LAB_100a41924;
      }
      cVar24 = *(char *)((long)plVar5 + 0x44);
      cVar21 = *(char *)((long)plVar5 + 0x45);
      cVar8 = cVar21;
      if (cVar24 == '\x01') {
        if (cVar21 != '\0') {
          cVar8 = cVar21 + -1;
          goto LAB_100a4105c;
        }
        FUN_10610bbb4(*(undefined8 *)*plVar7,((undefined8 *)*plVar7)[1]);
        goto LAB_100a411dc;
      }
LAB_100a4105c:
      *(char *)((long)plVar5 + 0x45) = cVar8;
      *(char *)((long)ppuVar1 + -0x9c0) = cVar24;
      *(char *)((long)ppuVar1 + -0x9bf) = cVar21;
      uVar10 = (uint)*(undefined8 *)(lVar20 + 0x30);
      if ((uVar10 >> 1 & 1) == 0) goto LAB_100a410b0;
LAB_100a41078:
      uVar22 = *(ulong *)(lVar20 + 0x38);
      *(undefined8 *)(lVar20 + 0x38) = 2;
joined_r0x000100a411b4:
      if (uVar22 == 2) {
LAB_100a411b8:
        uVar22 = 2;
      }
      else {
        uVar26 = *(undefined8 *)(lVar20 + 0x40);
        uVar14 = *(undefined8 *)(lVar20 + 0x58);
        uVar18 = *(undefined8 *)(lVar20 + 0x50);
        *(undefined8 *)((long)ppuVar1 + -0x8a8) = *(undefined8 *)(lVar20 + 0x48);
        *(undefined8 *)((long)ppuVar1 + -0x8b0) = uVar26;
        *(undefined8 *)((long)ppuVar1 + -0x898) = uVar14;
        *(undefined8 *)((long)ppuVar1 + -0x8a0) = uVar18;
        uVar26 = *(undefined8 *)(lVar20 + 0x60);
        *(undefined8 *)((long)ppuVar1 + -0x888) = *(undefined8 *)(lVar20 + 0x68);
        *(undefined8 *)((long)ppuVar1 + -0x890) = uVar26;
        if (uVar22 == 3) goto LAB_100a411dc;
      }
      *(undefined8 *)((long)ppuVar1 + -0x13a0) = *(undefined8 *)((long)ppuVar1 + -0x8a8);
      *(undefined8 *)((long)ppuVar1 + -0x13a8) = *(undefined8 *)((long)ppuVar1 + -0x8b0);
      *(undefined8 *)((long)ppuVar1 + -0x1390) = *(undefined8 *)((long)ppuVar1 + -0x898);
      *(undefined8 *)((long)ppuVar1 + -0x1398) = *(undefined8 *)((long)ppuVar1 + -0x8a0);
      *(undefined8 *)((long)ppuVar1 + -0x1380) = *(undefined8 *)((long)ppuVar1 + -0x888);
      *(undefined8 *)((long)ppuVar1 + -5000) = *(undefined8 *)((long)ppuVar1 + -0x890);
      *(ulong *)((long)ppuVar1 + -0x13b0) = uVar22;
      plVar5 = (long *)*unaff_x23;
      if (plVar5 != (long *)0x0) {
        lVar20 = *plVar5;
        *plVar5 = lVar20 + -1;
        LORelease();
        if (lVar20 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4872a6ae425cc16E(unaff_x23);
        }
      }
      *unaff_x23 = 0;
      uVar4 = *(ulong *)((long)ppuVar1 + -0x13a8);
      *(undefined8 *)((long)ppuVar1 + -0x908) = *(undefined8 *)((long)ppuVar1 + -0x1398);
      *(undefined8 *)((long)ppuVar1 + -0x910) = *(undefined8 *)((long)ppuVar1 + -0x13a0);
      *(undefined8 *)((long)ppuVar1 + -0x8f8) = *(undefined8 *)((long)ppuVar1 + -5000);
      *(undefined8 *)((long)ppuVar1 + -0x900) = *(undefined8 *)((long)ppuVar1 + -0x1390);
      *(undefined8 *)((long)ppuVar1 + -0x8f0) = *(undefined8 *)((long)ppuVar1 + -0x1380);
      if (uVar22 == 4) goto LAB_100a4126c;
LAB_100a41318:
      *(undefined8 *)((long)ppuVar1 + -0xa08) = *(undefined8 *)((long)ppuVar1 + -0x908);
      *(undefined8 *)((long)ppuVar1 + -0xa10) = *(undefined8 *)((long)ppuVar1 + -0x910);
      *(undefined8 *)((long)ppuVar1 + -0x9f8) = *(undefined8 *)((long)ppuVar1 + -0x8f8);
      *(undefined8 *)((long)ppuVar1 + -0xa00) = *(undefined8 *)((long)ppuVar1 + -0x900);
      *(undefined8 *)((long)ppuVar1 + -0x9f0) = *(undefined8 *)((long)ppuVar1 + -0x8f0);
      FUN_100de8a5c(param_1 + 0x161);
      if (uVar22 == 2) {
        unaff_x23 = (long *)FUN_108854910();
      }
      else if (uVar22 == 3) {
        unaff_x23 = (long *)FUN_108854938(&UNK_108cb5721,0x24);
      }
      else {
        *(undefined2 *)(param_1 + 0x160) = 0x101;
        param_1[0x14d] = uVar22;
        param_1[0x14e] = uVar4;
        param_1[0x153] = *(undefined8 *)((long)ppuVar1 + -0x9f0);
        uVar26 = *(undefined8 *)((long)ppuVar1 + -0xa10);
        uVar14 = *(undefined8 *)((long)ppuVar1 + -0x9f8);
        uVar18 = *(undefined8 *)((long)ppuVar1 + -0xa00);
        param_1[0x150] = *(undefined8 *)((long)ppuVar1 + -0xa08);
        param_1[0x14f] = uVar26;
        param_1[0x152] = uVar14;
        param_1[0x151] = uVar18;
        if ((uVar22 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x160) = 0;
          param_1[0x155] = param_1[0x14f];
          param_1[0x154] = param_1[0x14e];
          uVar26 = param_1[0x150];
          param_1[0x156] = uVar26;
          uVar18 = *(undefined8 *)((long)ppuVar1 + -0xa00);
          param_1[0x158] = *(undefined8 *)((long)ppuVar1 + -0x9f8);
          param_1[0x157] = uVar18;
          uVar14 = *(undefined8 *)((long)ppuVar1 + -0x9f0);
          param_1[0x159] = uVar14;
          puVar11 = (ulong *)param_1[0x15a];
          uVar18 = param_1[0x155];
          uVar15 = param_1[0x158];
          param_1[0x161] = puVar11;
          param_1[0x162] = uVar18;
          param_1[0x163] = uVar26;
          param_1[0x164] = uVar15;
          param_1[0x165] = uVar14;
          *(undefined1 *)(param_1 + 0x167) = 0;
LAB_100a41428:
          puVar23 = param_1 + 0x167;
          param_1[0x166] = puVar11;
          uVar4 = *puVar11 ^ 0x8000000000000000;
          if (-1 < (long)*puVar11) {
            uVar4 = 1;
          }
          if ((long)uVar4 < 2) {
            if (uVar4 != 0) {
              param_1[0x168] = puVar11;
              param_1[0x169] = uVar18;
              param_1[0x16a] = uVar26;
              param_1[0x16b] = uVar15;
              param_1[0x16c] = uVar14;
              *(undefined1 *)(param_1 + 0x18a) = 0;
LAB_100a414c4:
              param_1[0x171] = uVar18;
              param_1[0x172] = uVar26;
              param_1[0x173] = uVar15;
              param_1[0x174] = uVar14;
              param_1[0x178] = puVar11;
              *(undefined1 *)((long)param_1 + 0xbcb) = 0;
              goto LAB_100a414dc;
            }
            puVar6 = (undefined8 *)_malloc(0x14);
            if (puVar6 == (undefined8 *)0x0) {
              *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
              func_0x0001087c9084(1,0x14);
              goto LAB_100a41fe4;
            }
            *(undefined4 *)(puVar6 + 2) = 0x65746174;
            puVar6[1] = 0x73206e6f69737365;
            *puVar6 = 0x73206e6920746f4e;
            cVar24 = '\t';
            uVar26 = 0x14;
            uVar18 = 0x14;
          }
          else {
            if (uVar4 == 2) {
              puVar6 = (undefined8 *)_malloc(0x12);
              if (puVar6 == (undefined8 *)0x0) {
                *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
                func_0x0001087c9084(1,0x12);
                goto LAB_100a41fe4;
              }
            }
            else {
              puVar6 = (undefined8 *)_malloc(0x12);
              if (puVar6 == (undefined8 *)0x0) {
                *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
                func_0x0001087c9084(1,0x12);
                goto LAB_100a41fe4;
              }
            }
            *(undefined2 *)(puVar6 + 2) = 0x6465;
            puVar6[1] = 0x7a69726f68747561;
            *puVar6 = 0x2079646165726c41;
            cVar24 = '\t';
            uVar26 = 0x12;
            uVar18 = 0x12;
          }
LAB_100a41530:
          *(undefined4 *)((long)ppuVar1 + -0x9e8) = *(undefined4 *)((long)ppuVar1 + -0x8b8);
          *(undefined4 *)((long)ppuVar1 + -0x9e5) = *(undefined4 *)((long)ppuVar1 + -0x8b5);
          *(undefined1 *)puVar23 = 1;
LAB_100a41550:
          *(char *)((long)ppuVar1 + -0x9e0) = cVar24;
          *(undefined4 *)((long)ppuVar1 + -0x9df) = *(undefined4 *)((long)ppuVar1 + -0x9e8);
          *(undefined4 *)((long)ppuVar1 + -0x9dc) = *(undefined4 *)((long)ppuVar1 + -0x9e5);
          *(undefined8 *)((long)ppuVar1 + -0x9d8) = uVar26;
          *(undefined8 **)((long)ppuVar1 + -0x9d0) = puVar6;
          *(undefined8 *)((long)ppuVar1 + -0x9c8) = uVar18;
          if (cVar24 == '\x0e') {
            param_1[0x161] = param_1[0x15a];
            *(undefined1 *)(param_1 + 0x162) = 0;
            goto LAB_100a4158c;
          }
          unaff_x23 = (long *)FUN_1088549f4((undefined1 *)((long)ppuVar1 + -0x9e0),&UNK_108cb5761,
                                            0x1f);
          goto LAB_100a418e4;
        }
        *(undefined1 *)((long)param_1 + 0xb01) = 0;
        uVar26 = param_1[0x14e];
        uVar14 = param_1[0x151];
        uVar18 = param_1[0x150];
        *(undefined8 *)((long)ppuVar1 + -0x13a8) = param_1[0x14f];
        *(undefined8 *)((long)ppuVar1 + -0x13b0) = uVar26;
        *(undefined8 *)((long)ppuVar1 + -0x1398) = uVar14;
        *(undefined8 *)((long)ppuVar1 + -0x13a0) = uVar18;
        uVar26 = param_1[0x152];
        *(undefined8 *)((long)ppuVar1 + -5000) = param_1[0x153];
        *(undefined8 *)((long)ppuVar1 + -0x1390) = uVar26;
        unaff_x23 = (long *)FUN_108858d2c((undefined1 *)((long)ppuVar1 + -0x13b0));
      }
      *(undefined2 *)(param_1 + 0x160) = 0;
      *(undefined1 *)((long)param_1 + 0xb02) = 1;
    }
    else {
      *(undefined8 **)((long)ppuVar1 + -0x1fb0) = unaff_x20;
      if (bVar17 != 3) {
        func_0x000108a07b10(&UNK_10b22ae98);
        goto LAB_100a41fe4;
      }
      *(long *)((long)ppuVar1 + -0x1fa8) = (long)param_1 + 0xb02;
      bVar17 = *(byte *)((long)param_1 + 0xb02);
      if (bVar17 < 3) {
        if (bVar17 != 0) {
          if (bVar17 == 1) {
            func_0x000108a07af4(&UNK_10b22aec8);
          }
          else {
            func_0x000108a07b10(&UNK_10b22aec8);
          }
          goto LAB_100a41fe4;
        }
        plVar5 = (long *)param_1[0x15f];
        puVar23 = (undefined8 *)param_1[0x15b];
        goto LAB_100a40d1c;
      }
      if (bVar17 == 3) goto LAB_100a40e24;
      if (bVar17 == 4) {
        puVar23 = param_1 + 0x167;
        bVar17 = *(byte *)(param_1 + 0x167);
        if (bVar17 < 3) {
          if (bVar17 != 0) {
            if (bVar17 == 1) {
              func_0x000108a07af4(&UNK_10b236ef8);
            }
            else {
              func_0x000108a07b10(&UNK_10b236ef8);
            }
            goto LAB_100a41fe4;
          }
          puVar11 = (ulong *)param_1[0x161];
          uVar18 = param_1[0x162];
          uVar26 = param_1[0x163];
          uVar15 = param_1[0x164];
          uVar14 = param_1[0x165];
          goto LAB_100a41428;
        }
        if (bVar17 == 3) {
          bVar17 = *(byte *)(param_1 + 0x18a);
          if (bVar17 < 2) {
            if (bVar17 != 0) {
              *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
              func_0x000108a07af4(&UNK_10b237180);
              goto LAB_100a41fe4;
            }
            puVar11 = (ulong *)param_1[0x168];
            uVar18 = param_1[0x169];
            uVar26 = param_1[0x16a];
            uVar15 = param_1[0x16b];
            uVar14 = param_1[0x16c];
            goto LAB_100a414c4;
          }
          if (bVar17 != 3) {
            *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
            func_0x000108a07b10(&UNK_10b237180);
            goto LAB_100a41fe4;
          }
LAB_100a414dc:
          puVar23 = param_1 + 0x167;
          FUN_100f079c4((undefined1 *)((long)ppuVar1 + -0x13b0),param_1 + 0x16d,plVar7);
          unaff_x23 = *(long **)((long)ppuVar1 + -0x13b0);
          if (unaff_x23 != (long *)0x3) {
            FUN_100cdf770(param_1 + 0x16d);
            *(undefined1 *)(param_1 + 0x18a) = 1;
            cVar24 = *(char *)((long)ppuVar1 + -0x13a8);
            *(undefined4 *)((long)ppuVar1 + -0x8c8) = *(undefined4 *)((long)ppuVar1 + -0x13a7);
            *(undefined4 *)((long)ppuVar1 + -0x8c5) = *(undefined4 *)((long)ppuVar1 + -0x13a4);
            uVar26 = *(undefined8 *)((long)ppuVar1 + -0x13a0);
            puVar6 = *(undefined8 **)((long)ppuVar1 + -0x1398);
            *(undefined8 *)((long)ppuVar1 + -0x8e8) = *(undefined8 *)((long)ppuVar1 + -0x1360);
            *(undefined8 *)((long)ppuVar1 + -0x8f0) = *(undefined8 *)((long)ppuVar1 + -0x1368);
            *(undefined8 *)((long)ppuVar1 + -0x8d8) = *(undefined8 *)((long)ppuVar1 + -0x1350);
            *(undefined8 *)((long)ppuVar1 + -0x8e0) = *(undefined8 *)((long)ppuVar1 + -0x1358);
            uVar18 = *(undefined8 *)((long)ppuVar1 + -0x1390);
            *(undefined8 *)((long)ppuVar1 + -0x8d0) = *(undefined8 *)((long)ppuVar1 + -0x1348);
            *(undefined8 *)((long)ppuVar1 + -0x8f8) = *(undefined8 *)((long)ppuVar1 + -0x1370);
            *(undefined8 *)((long)ppuVar1 + -0x900) = *(undefined8 *)((long)ppuVar1 + -0x1378);
            *(undefined8 *)((long)ppuVar1 + -0x908) = *(undefined8 *)((long)ppuVar1 + -0x1380);
            *(undefined8 *)((long)ppuVar1 + -0x910) = *(undefined8 *)((long)ppuVar1 + -5000);
            if (unaff_x23 != (long *)0x2) {
              *(undefined8 *)((long)ppuVar1 + -0x460) = *(undefined8 *)((long)ppuVar1 + -0x8f8);
              *(undefined8 *)((long)ppuVar1 + -0x468) = *(undefined8 *)((long)ppuVar1 + -0x900);
              *(undefined8 *)((long)ppuVar1 + -0x450) = *(undefined8 *)((long)ppuVar1 + -0x8e8);
              *(undefined8 *)((long)ppuVar1 + -0x458) = *(undefined8 *)((long)ppuVar1 + -0x8f0);
              *(undefined8 *)((long)ppuVar1 + -0x440) = *(undefined8 *)((long)ppuVar1 + -0x8d8);
              *(undefined8 *)((long)ppuVar1 + -0x448) = *(undefined8 *)((long)ppuVar1 + -0x8e0);
              *(undefined4 *)((long)ppuVar1 + -0x497) = *(undefined4 *)((long)ppuVar1 + -0x8c8);
              *(undefined4 *)((long)ppuVar1 + -0x494) = *(undefined4 *)((long)ppuVar1 + -0x8c5);
              *(undefined8 *)((long)ppuVar1 + -0x470) = *(undefined8 *)((long)ppuVar1 + -0x908);
              *(undefined8 *)((long)ppuVar1 + -0x478) = *(undefined8 *)((long)ppuVar1 + -0x910);
              *(long **)((long)ppuVar1 + -0x4a0) = unaff_x23;
              *(char *)((long)ppuVar1 + -0x498) = cVar24;
              *(undefined8 *)((long)ppuVar1 + -0x490) = uVar26;
              *(undefined8 **)((long)ppuVar1 + -0x488) = puVar6;
              *(undefined8 *)((long)ppuVar1 + -0x438) = *(undefined8 *)((long)ppuVar1 + -0x8d0);
              *(undefined8 *)((long)ppuVar1 + -0x480) = uVar18;
              FUN_100d0f028((undefined1 *)((long)ppuVar1 + -0x4a0));
              param_1[0x168] = param_1[0x166];
              *(undefined1 *)(param_1 + 0x16e) = 0;
              goto LAB_100a41c20;
            }
            *(undefined4 *)((long)ppuVar1 + -0x9e8) = *(undefined4 *)((long)ppuVar1 + -0x8c8);
            *(undefined4 *)((long)ppuVar1 + -0x9e5) = *(undefined4 *)((long)ppuVar1 + -0x8c5);
            *(undefined1 *)puVar23 = 1;
            if (cVar24 == '\x0f') {
              **(undefined1 **)((long)ppuVar1 + -0x1fa8) = 4;
              goto LAB_100a41918;
            }
            goto LAB_100a41550;
          }
          uVar9 = 3;
          *(undefined1 *)(param_1 + 0x18a) = 3;
        }
        else {
          bVar17 = *(byte *)(param_1 + 0x16e);
          if (bVar17 < 2) {
            if (bVar17 != 0) {
              *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
              func_0x000108a07af4(&UNK_10b236f58);
              goto LAB_100a41fe4;
            }
LAB_100a41c20:
            param_1[0x169] = param_1[0x168];
            param_1[0x16a] = param_1[0x168];
            param_1[0x16b] = &UNK_108cdde20;
            param_1[0x16c] = 0x10;
            *(undefined1 *)(param_1 + 0x16d) = 0;
          }
          else if (bVar17 != 3) {
            *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
            func_0x000108a07b10(&UNK_10b236f58);
            goto LAB_100a41fe4;
          }
          unaff_x23 = param_1 + 0x16e;
          puVar23 = param_1 + 0x167;
          FUN_100f0fba0((undefined1 *)((long)ppuVar1 + -0x4a0),param_1 + 0x16b);
          lVar20 = *(long *)((long)ppuVar1 + -0x4a0);
          if (lVar20 != -0x7fffffffffffffff) {
            cVar24 = *(char *)((long)ppuVar1 + -0x498);
            *(undefined4 *)((long)ppuVar1 + -0x9c0) = *(undefined4 *)((long)ppuVar1 + -0x497);
            *(undefined4 *)((long)ppuVar1 + -0x9bd) = *(undefined4 *)((long)ppuVar1 + -0x494);
            uVar26 = *(undefined8 *)((long)ppuVar1 + -0x490);
            *(undefined8 *)((long)ppuVar1 + -0x1fc0) = *(undefined8 *)((long)ppuVar1 + -0x488);
            *(undefined8 **)((long)ppuVar1 + -0x1fb8) = puVar23;
            uVar18 = *(undefined8 *)((long)ppuVar1 + -0x480);
            _memcpy((undefined1 *)((long)ppuVar1 + -0x8b0),(undefined1 *)((long)ppuVar1 + -0x478),
                    0x408);
            if (lVar20 == -0x8000000000000000) {
              *(undefined4 *)((long)ppuVar1 + -0x8c0) = *(undefined4 *)((long)ppuVar1 + -0x9c0);
              *(undefined4 *)((long)ppuVar1 + -0x8bd) = *(undefined4 *)((long)ppuVar1 + -0x9bd);
              *(undefined1 *)unaff_x23 = 1;
              puVar6 = *(undefined8 **)((long)ppuVar1 + -0x1fc0);
              puVar23 = *(undefined8 **)((long)ppuVar1 + -0x1fb8);
              if (cVar24 == '\x0f') goto LAB_100a41c6c;
            }
            else {
              *(long **)((long)ppuVar1 + -0x1fc8) = unaff_x23;
              puVar23 = (undefined8 *)param_1[0x16a];
              _memcpy((undefined1 *)((long)ppuVar1 + -0x13b0),puVar23,0x460);
              *puVar23 = 0x8000000000000000;
              puVar23[1] = lVar20;
              *(char *)(puVar23 + 2) = cVar24;
              *(undefined4 *)((long)puVar23 + 0x11) = *(undefined4 *)((long)ppuVar1 + -0x9c0);
              *(undefined4 *)((long)puVar23 + 0x14) = *(undefined4 *)((long)ppuVar1 + -0x9bd);
              uVar14 = *(undefined8 *)((long)ppuVar1 + -0x1fc0);
              puVar23[3] = uVar26;
              puVar23[4] = uVar14;
              puVar23[5] = uVar18;
              _memcpy(puVar23 + 6,(undefined1 *)((long)ppuVar1 + -0x8b0),0x408);
              if (*(long *)((long)ppuVar1 + -0x13b0) < 0) {
                puVar23 = *(undefined8 **)((long)ppuVar1 + -0x1fb8);
                FUN_100dfb3ec((undefined1 *)((long)ppuVar1 + -0x13b0));
                puVar6 = (undefined8 *)_malloc(0x14);
                puVar13 = *(undefined1 **)((long)ppuVar1 + -0x1fc8);
                if (puVar6 == (undefined8 *)0x0) {
                  func_0x0001087c9084(1,0x14);
LAB_100a41fe4:
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x100a41fe8);
                  (*pcVar12)();
                }
                *(undefined4 *)(puVar6 + 2) = 0x65746174;
                puVar6[1] = 0x73206e6f69737365;
                *puVar6 = 0x73206e6920746f4e;
                cVar24 = '\t';
              }
              else {
                _memcpy((undefined1 *)((long)ppuVar1 + -0x4a0),
                        (undefined1 *)((long)ppuVar1 + -0x13b0),0x430);
                lVar16 = *(long *)((long)ppuVar1 + -0xf80);
                uVar18 = *(undefined8 *)((long)ppuVar1 + -0xf78);
                lVar20 = *(long *)((long)ppuVar1 + -0xf68);
                uVar26 = *(undefined8 *)((long)ppuVar1 + -0xf60);
                puVar23 = *(undefined8 **)((long)ppuVar1 + -0x1fb8);
                FUN_100dfb3ec(param_1[0x169]);
                puVar6 = (undefined8 *)param_1[0x169];
                *puVar6 = 0x8000000000000002;
                puVar6 = (undefined8 *)
                         _memcpy(puVar6 + 1,(undefined1 *)((long)ppuVar1 + -0x4a0),0x430);
                if (lVar16 != 0) {
                  puVar6 = (undefined8 *)_free(uVar18);
                }
                if (lVar20 != 0) {
                  puVar6 = (undefined8 *)_free(uVar26);
                }
                if (*(long *)((long)ppuVar1 + -0x13b0) < 0) {
                  puVar6 = (undefined8 *)FUN_100dfb3ec((undefined1 *)((long)ppuVar1 + -0x13b0));
                }
                cVar24 = '\x0e';
                puVar13 = *(undefined1 **)((long)ppuVar1 + -0x1fc8);
              }
              *puVar13 = 1;
              uVar18 = 0x14;
              uVar26 = 0x14;
            }
            *(undefined4 *)((long)ppuVar1 + -0x8b8) = *(undefined4 *)((long)ppuVar1 + -0x8c0);
            *(undefined4 *)((long)ppuVar1 + -0x8b5) = *(undefined4 *)((long)ppuVar1 + -0x8bd);
            goto LAB_100a41530;
          }
          *(undefined1 *)unaff_x23 = 3;
LAB_100a41c6c:
          uVar9 = 4;
        }
        *(undefined1 *)puVar23 = uVar9;
        **(undefined1 **)((long)ppuVar1 + -0x1fa8) = 4;
        goto LAB_100a41918;
      }
      bVar17 = *(byte *)(param_1 + 0x162);
      if (bVar17 < 3) {
        if (bVar17 != 0) {
          if (bVar17 == 1) {
            func_0x000108a07af4(&UNK_10b236ee0);
          }
          else {
            func_0x000108a07b10(&UNK_10b236ee0);
          }
          goto LAB_100a41fe4;
        }
LAB_100a4158c:
        puVar11 = (ulong *)param_1[0x161];
        uVar4 = *puVar11 ^ 0x8000000000000000;
        if (-1 < (long)*puVar11) {
          uVar4 = 1;
        }
        if ((long)uVar4 < 2) {
          if (uVar4 != 0) {
            param_1[0x163] = puVar11;
            *(undefined1 *)(param_1 + 0x169) = 0;
LAB_100a415bc:
            param_1[0x164] = puVar11;
            *(undefined1 *)(param_1 + 0x168) = 0;
            goto LAB_100a415c4;
          }
LAB_100a41614:
          param_1[0x163] = puVar11 + 1;
          *(undefined1 *)(param_1 + 0x167) = 0;
LAB_100a41620:
          FUN_100f01594((undefined1 *)((long)ppuVar1 + -0x13b0),param_1 + 0x163,plVar7);
          lVar20 = *(long *)((long)ppuVar1 + -0x1398);
          if (lVar20 == 4) {
            uVar9 = 3;
LAB_100a41780:
            unaff_x23 = param_1 + 0x162;
            *(undefined1 *)unaff_x23 = uVar9;
            **(undefined1 **)((long)ppuVar1 + -0x1fa8) = 5;
            goto LAB_100a41918;
          }
          *(undefined8 *)((long)ppuVar1 + -0x908) = *(undefined8 *)((long)ppuVar1 + -0x13a8);
          *(undefined8 *)((long)ppuVar1 + -0x910) = *(undefined8 *)((long)ppuVar1 + -0x13b0);
          *(undefined8 *)((long)ppuVar1 + -0x900) = *(undefined8 *)((long)ppuVar1 + -0x13a0);
          *(undefined8 *)((long)ppuVar1 + -0x458) = *(undefined8 *)((long)ppuVar1 + -0x1348);
          *(undefined8 *)((long)ppuVar1 + -0x460) = *(undefined8 *)((long)ppuVar1 + -0x1350);
          *(undefined8 *)((long)ppuVar1 + -0x448) = *(undefined8 *)((long)ppuVar1 + -0x1338);
          *(undefined8 *)((long)ppuVar1 + -0x450) = *(undefined8 *)((long)ppuVar1 + -0x1340);
          *(undefined8 *)((long)ppuVar1 + -0x440) = *(undefined8 *)((long)ppuVar1 + -0x1330);
          *(undefined8 *)((long)ppuVar1 + -0x498) = *(undefined8 *)((long)ppuVar1 + -5000);
          *(undefined8 *)((long)ppuVar1 + -0x4a0) = *(undefined8 *)((long)ppuVar1 + -0x1390);
          *(undefined8 *)((long)ppuVar1 + -0x488) = *(undefined8 *)((long)ppuVar1 + -0x1378);
          *(undefined8 *)((long)ppuVar1 + -0x490) = *(undefined8 *)((long)ppuVar1 + -0x1380);
          *(undefined8 *)((long)ppuVar1 + -0x468) = *(undefined8 *)((long)ppuVar1 + -0x1358);
          *(undefined8 *)((long)ppuVar1 + -0x470) = *(undefined8 *)((long)ppuVar1 + -0x1360);
          *(undefined8 *)((long)ppuVar1 + -0x478) = *(undefined8 *)((long)ppuVar1 + -0x1368);
          *(undefined8 *)((long)ppuVar1 + -0x480) = *(undefined8 *)((long)ppuVar1 + -0x1370);
          if (*(char *)(param_1 + 0x167) == '\x03') {
            uVar26 = param_1[0x165];
            puVar23 = (undefined8 *)param_1[0x166];
            if ((code *)*puVar23 != (code *)0x0) {
              (*(code *)*puVar23)(uVar26);
            }
LAB_100a41808:
            if (puVar23[1] != 0) {
              _free(uVar26);
            }
          }
        }
        else {
          if (uVar4 == 2) goto LAB_100a41614;
          param_1[0x163] = puVar11[1] + 0x10;
          *(undefined1 *)(param_1 + 0x167) = 0;
LAB_100a41760:
          FUN_100f01594((undefined1 *)((long)ppuVar1 + -0x13b0),param_1 + 0x163,plVar7);
          lVar20 = *(long *)((long)ppuVar1 + -0x1398);
          if (lVar20 == 4) {
            uVar9 = 5;
            goto LAB_100a41780;
          }
          *(undefined8 *)((long)ppuVar1 + -0x908) = *(undefined8 *)((long)ppuVar1 + -0x13a8);
          *(undefined8 *)((long)ppuVar1 + -0x910) = *(undefined8 *)((long)ppuVar1 + -0x13b0);
          *(undefined8 *)((long)ppuVar1 + -0x900) = *(undefined8 *)((long)ppuVar1 + -0x13a0);
          *(undefined8 *)((long)ppuVar1 + -0x458) = *(undefined8 *)((long)ppuVar1 + -0x1348);
          *(undefined8 *)((long)ppuVar1 + -0x460) = *(undefined8 *)((long)ppuVar1 + -0x1350);
          *(undefined8 *)((long)ppuVar1 + -0x448) = *(undefined8 *)((long)ppuVar1 + -0x1338);
          *(undefined8 *)((long)ppuVar1 + -0x450) = *(undefined8 *)((long)ppuVar1 + -0x1340);
          *(undefined8 *)((long)ppuVar1 + -0x440) = *(undefined8 *)((long)ppuVar1 + -0x1330);
          *(undefined8 *)((long)ppuVar1 + -0x498) = *(undefined8 *)((long)ppuVar1 + -5000);
          *(undefined8 *)((long)ppuVar1 + -0x4a0) = *(undefined8 *)((long)ppuVar1 + -0x1390);
          *(undefined8 *)((long)ppuVar1 + -0x488) = *(undefined8 *)((long)ppuVar1 + -0x1378);
          *(undefined8 *)((long)ppuVar1 + -0x490) = *(undefined8 *)((long)ppuVar1 + -0x1380);
          *(undefined8 *)((long)ppuVar1 + -0x468) = *(undefined8 *)((long)ppuVar1 + -0x1358);
          *(undefined8 *)((long)ppuVar1 + -0x470) = *(undefined8 *)((long)ppuVar1 + -0x1360);
          *(undefined8 *)((long)ppuVar1 + -0x478) = *(undefined8 *)((long)ppuVar1 + -0x1368);
          *(undefined8 *)((long)ppuVar1 + -0x480) = *(undefined8 *)((long)ppuVar1 + -0x1370);
          if (*(char *)(param_1 + 0x167) == '\x03') {
            uVar26 = param_1[0x165];
            puVar23 = (undefined8 *)param_1[0x166];
            if ((code *)*puVar23 != (code *)0x0) {
              (*(code *)*puVar23)(uVar26);
            }
            goto LAB_100a41808;
          }
        }
        *(undefined8 *)((long)ppuVar1 + -0x9b8) = *(undefined8 *)((long)ppuVar1 + -0x908);
        *(undefined8 *)((long)ppuVar1 + -0x9c0) = *(undefined8 *)((long)ppuVar1 + -0x910);
        *(undefined8 *)((long)ppuVar1 + -0x9b0) = *(undefined8 *)((long)ppuVar1 + -0x900);
        *(undefined8 *)((long)ppuVar1 + -0x868) = *(undefined8 *)((long)ppuVar1 + -0x458);
        *(undefined8 *)((long)ppuVar1 + -0x870) = *(undefined8 *)((long)ppuVar1 + -0x460);
        *(undefined8 *)((long)ppuVar1 + -0x858) = *(undefined8 *)((long)ppuVar1 + -0x448);
        *(undefined8 *)((long)ppuVar1 + -0x860) = *(undefined8 *)((long)ppuVar1 + -0x450);
        *(undefined8 *)((long)ppuVar1 + -0x850) = *(undefined8 *)((long)ppuVar1 + -0x440);
        *(undefined8 *)((long)ppuVar1 + -0x8a8) = *(undefined8 *)((long)ppuVar1 + -0x498);
        *(undefined8 *)((long)ppuVar1 + -0x8b0) = *(undefined8 *)((long)ppuVar1 + -0x4a0);
        *(undefined8 *)((long)ppuVar1 + -0x898) = *(undefined8 *)((long)ppuVar1 + -0x488);
        *(undefined8 *)((long)ppuVar1 + -0x8a0) = *(undefined8 *)((long)ppuVar1 + -0x490);
        *(undefined8 *)((long)ppuVar1 + -0x878) = *(undefined8 *)((long)ppuVar1 + -0x468);
        *(undefined8 *)((long)ppuVar1 + -0x880) = *(undefined8 *)((long)ppuVar1 + -0x470);
        *(undefined8 *)((long)ppuVar1 + -0x888) = *(undefined8 *)((long)ppuVar1 + -0x478);
        *(undefined8 *)((long)ppuVar1 + -0x890) = *(undefined8 *)((long)ppuVar1 + -0x480);
        *(undefined1 *)(param_1 + 0x162) = 1;
      }
      else {
        if (bVar17 == 3) goto LAB_100a41620;
        if (bVar17 != 4) goto LAB_100a41760;
        bVar17 = *(byte *)(param_1 + 0x169);
        if (bVar17 < 2) {
          if (bVar17 != 0) {
            func_0x000108a07af4(&UNK_10b237168);
            goto LAB_100a41fe4;
          }
          puVar11 = (ulong *)param_1[0x163];
          goto LAB_100a415bc;
        }
        if (bVar17 != 3) {
          func_0x000108a07b10(&UNK_10b237168);
          goto LAB_100a41fe4;
        }
LAB_100a415c4:
        unaff_x23 = param_1 + 0x162;
        FUN_100f01594((undefined1 *)((long)ppuVar1 + -0x13b0),param_1 + 0x164,plVar7);
        if (*(long *)((long)ppuVar1 + -0x1398) == 4) {
          *(undefined1 *)(param_1 + 0x169) = 3;
          uVar9 = 4;
          goto LAB_100a41780;
        }
        if (*(char *)(param_1 + 0x168) == '\x03') {
          uVar26 = param_1[0x166];
          puVar23 = (undefined8 *)param_1[0x167];
          pcVar12 = (code *)*puVar23;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(uVar26);
          }
          if (puVar23[1] != 0) {
            _free(uVar26);
          }
        }
        *(undefined1 *)(param_1 + 0x169) = 1;
        *(undefined8 *)((long)ppuVar1 + -0x908) = *(undefined8 *)((long)ppuVar1 + -0x13a8);
        *(undefined8 *)((long)ppuVar1 + -0x910) = *(undefined8 *)((long)ppuVar1 + -0x13b0);
        lVar20 = *(long *)((long)ppuVar1 + -0x1398);
        *(undefined8 *)((long)ppuVar1 + -0x900) = *(undefined8 *)((long)ppuVar1 + -0x13a0);
        *(undefined8 *)((long)ppuVar1 + -0x458) = *(undefined8 *)((long)ppuVar1 + -0x1348);
        *(undefined8 *)((long)ppuVar1 + -0x460) = *(undefined8 *)((long)ppuVar1 + -0x1350);
        *(undefined8 *)((long)ppuVar1 + -0x448) = *(undefined8 *)((long)ppuVar1 + -0x1338);
        *(undefined8 *)((long)ppuVar1 + -0x450) = *(undefined8 *)((long)ppuVar1 + -0x1340);
        *(undefined8 *)((long)ppuVar1 + -0x440) = *(undefined8 *)((long)ppuVar1 + -0x1330);
        *(undefined8 *)((long)ppuVar1 + -0x498) = *(undefined8 *)((long)ppuVar1 + -5000);
        *(undefined8 *)((long)ppuVar1 + -0x4a0) = *(undefined8 *)((long)ppuVar1 + -0x1390);
        *(undefined8 *)((long)ppuVar1 + -0x488) = *(undefined8 *)((long)ppuVar1 + -0x1378);
        *(undefined8 *)((long)ppuVar1 + -0x490) = *(undefined8 *)((long)ppuVar1 + -0x1380);
        *(undefined8 *)((long)ppuVar1 + -0x468) = *(undefined8 *)((long)ppuVar1 + -0x1358);
        *(undefined8 *)((long)ppuVar1 + -0x470) = *(undefined8 *)((long)ppuVar1 + -0x1360);
        *(undefined8 *)((long)ppuVar1 + -0x478) = *(undefined8 *)((long)ppuVar1 + -0x1368);
        *(undefined8 *)((long)ppuVar1 + -0x480) = *(undefined8 *)((long)ppuVar1 + -0x1370);
        *(undefined8 *)((long)ppuVar1 + -0x9b8) = *(undefined8 *)((long)ppuVar1 + -0x908);
        *(undefined8 *)((long)ppuVar1 + -0x9c0) = *(undefined8 *)((long)ppuVar1 + -0x910);
        *(undefined8 *)((long)ppuVar1 + -0x9b0) = *(undefined8 *)((long)ppuVar1 + -0x900);
        *(undefined8 *)((long)ppuVar1 + -0x868) = *(undefined8 *)((long)ppuVar1 + -0x458);
        *(undefined8 *)((long)ppuVar1 + -0x870) = *(undefined8 *)((long)ppuVar1 + -0x460);
        *(undefined8 *)((long)ppuVar1 + -0x858) = *(undefined8 *)((long)ppuVar1 + -0x448);
        *(undefined8 *)((long)ppuVar1 + -0x860) = *(undefined8 *)((long)ppuVar1 + -0x450);
        *(undefined8 *)((long)ppuVar1 + -0x850) = *(undefined8 *)((long)ppuVar1 + -0x440);
        *(undefined8 *)((long)ppuVar1 + -0x8a8) = *(undefined8 *)((long)ppuVar1 + -0x498);
        *(undefined8 *)((long)ppuVar1 + -0x8b0) = *(undefined8 *)((long)ppuVar1 + -0x4a0);
        *(undefined8 *)((long)ppuVar1 + -0x898) = *(undefined8 *)((long)ppuVar1 + -0x488);
        *(undefined8 *)((long)ppuVar1 + -0x8a0) = *(undefined8 *)((long)ppuVar1 + -0x490);
        *(undefined8 *)((long)ppuVar1 + -0x878) = *(undefined8 *)((long)ppuVar1 + -0x468);
        *(undefined8 *)((long)ppuVar1 + -0x880) = *(undefined8 *)((long)ppuVar1 + -0x470);
        *(undefined8 *)((long)ppuVar1 + -0x888) = *(undefined8 *)((long)ppuVar1 + -0x478);
        *(undefined8 *)((long)ppuVar1 + -0x890) = *(undefined8 *)((long)ppuVar1 + -0x480);
        *(undefined1 *)unaff_x23 = 1;
        if (lVar20 == 4) {
          **(undefined1 **)((long)ppuVar1 + -0x1fa8) = 5;
          goto LAB_100a41918;
        }
      }
      *(undefined8 *)((long)ppuVar1 + -0x998) = *(undefined8 *)((long)ppuVar1 + -0x9b8);
      *(undefined8 *)((long)ppuVar1 + -0x9a0) = *(undefined8 *)((long)ppuVar1 + -0x9c0);
      *(undefined8 *)((long)ppuVar1 + -0x990) = *(undefined8 *)((long)ppuVar1 + -0x9b0);
      *(long *)((long)ppuVar1 + -0x988) = lVar20;
      *(undefined8 *)((long)ppuVar1 + -0x938) = *(undefined8 *)((long)ppuVar1 + -0x868);
      *(undefined8 *)((long)ppuVar1 + -0x940) = *(undefined8 *)((long)ppuVar1 + -0x870);
      *(undefined8 *)((long)ppuVar1 + -0x928) = *(undefined8 *)((long)ppuVar1 + -0x858);
      *(undefined8 *)((long)ppuVar1 + -0x930) = *(undefined8 *)((long)ppuVar1 + -0x860);
      *(undefined8 *)((long)ppuVar1 + -0x920) = *(undefined8 *)((long)ppuVar1 + -0x850);
      *(undefined8 *)((long)ppuVar1 + -0x978) = *(undefined8 *)((long)ppuVar1 + -0x8a8);
      *(undefined8 *)((long)ppuVar1 + -0x980) = *(undefined8 *)((long)ppuVar1 + -0x8b0);
      *(undefined8 *)((long)ppuVar1 + -0x968) = *(undefined8 *)((long)ppuVar1 + -0x898);
      *(undefined8 *)((long)ppuVar1 + -0x970) = *(undefined8 *)((long)ppuVar1 + -0x8a0);
      *(undefined8 *)((long)ppuVar1 + -0x948) = *(undefined8 *)((long)ppuVar1 + -0x878);
      *(undefined8 *)((long)ppuVar1 + -0x950) = *(undefined8 *)((long)ppuVar1 + -0x880);
      *(undefined8 *)((long)ppuVar1 + -0x958) = *(undefined8 *)((long)ppuVar1 + -0x888);
      *(undefined8 *)((long)ppuVar1 + -0x960) = *(undefined8 *)((long)ppuVar1 + -0x890);
      FUN_100c98870(param_1 + 0x161);
      if (lVar20 == 3) {
        unaff_x23 = (long *)FUN_1088549f4((undefined1 *)((long)ppuVar1 + -0x980),&UNK_108cb5780,0x24
                                         );
      }
      else {
        lVar16 = *(long *)((long)ppuVar1 + -0x9a0);
        uVar26 = *(undefined8 *)((long)ppuVar1 + -0x998);
        if (lVar20 == 2) {
          unaff_x23 = (long *)func_0x000108856688(&UNK_108cb57a4,0x29);
          if (lVar16 != 0) {
            _free(uVar26);
          }
        }
        else {
          uVar18 = *(undefined8 *)((long)ppuVar1 + -0x990);
          *(undefined8 *)((long)ppuVar1 + -0x468) = *(undefined8 *)((long)ppuVar1 + -0x950);
          *(undefined8 *)((long)ppuVar1 + -0x470) = *(undefined8 *)((long)ppuVar1 + -0x958);
          *(undefined8 *)((long)ppuVar1 + -0x458) = *(undefined8 *)((long)ppuVar1 + -0x940);
          *(undefined8 *)((long)ppuVar1 + -0x460) = *(undefined8 *)((long)ppuVar1 + -0x948);
          *(undefined8 *)((long)ppuVar1 + -0x448) = *(undefined8 *)((long)ppuVar1 + -0x930);
          *(undefined8 *)((long)ppuVar1 + -0x450) = *(undefined8 *)((long)ppuVar1 + -0x938);
          *(undefined8 *)((long)ppuVar1 + -0x438) = *(undefined8 *)((long)ppuVar1 + -0x920);
          *(undefined8 *)((long)ppuVar1 + -0x440) = *(undefined8 *)((long)ppuVar1 + -0x928);
          *(undefined8 *)((long)ppuVar1 + -0x488) = *(undefined8 *)((long)ppuVar1 + -0x970);
          *(undefined8 *)((long)ppuVar1 + -0x490) = *(undefined8 *)((long)ppuVar1 + -0x978);
          *(undefined8 *)((long)ppuVar1 + -0x478) = *(undefined8 *)((long)ppuVar1 + -0x960);
          *(undefined8 *)((long)ppuVar1 + -0x480) = *(undefined8 *)((long)ppuVar1 + -0x968);
          *(long *)((long)ppuVar1 + -0x4a0) = lVar20;
          *(undefined8 *)((long)ppuVar1 + -0x498) = *(undefined8 *)((long)ppuVar1 + -0x980);
          auVar36 = __ZN17codex_rmcp_client5oauth25compute_expires_at_millis17hf99df2a07cd89284E
                              ((undefined1 *)((long)ppuVar1 + -0x4a0));
          func_0x000100025ae8((undefined1 *)((long)ppuVar1 + -0x910),param_1[0x15c]);
          func_0x000100025ae8((undefined1 *)((long)ppuVar1 + -0x8b0),param_1[0x15d]);
          *(undefined8 *)((long)ppuVar1 + -0x1368) = *(undefined8 *)((long)ppuVar1 + -0x458);
          *(undefined8 *)((long)ppuVar1 + -0x1370) = *(undefined8 *)((long)ppuVar1 + -0x460);
          *(undefined8 *)((long)ppuVar1 + -0x1358) = *(undefined8 *)((long)ppuVar1 + -0x448);
          *(undefined8 *)((long)ppuVar1 + -0x1360) = *(undefined8 *)((long)ppuVar1 + -0x450);
          *(undefined8 *)((long)ppuVar1 + -0x1348) = *(undefined8 *)((long)ppuVar1 + -0x438);
          *(undefined8 *)((long)ppuVar1 + -0x1350) = *(undefined8 *)((long)ppuVar1 + -0x440);
          *(undefined8 *)((long)ppuVar1 + -0x13a8) = *(undefined8 *)((long)ppuVar1 + -0x498);
          *(undefined8 *)((long)ppuVar1 + -0x13b0) = *(undefined8 *)((long)ppuVar1 + -0x4a0);
          *(undefined8 *)((long)ppuVar1 + -0x1398) = *(undefined8 *)((long)ppuVar1 + -0x488);
          *(undefined8 *)((long)ppuVar1 + -0x13a0) = *(undefined8 *)((long)ppuVar1 + -0x490);
          *(undefined8 *)((long)ppuVar1 + -0x1378) = *(undefined8 *)((long)ppuVar1 + -0x468);
          *(undefined8 *)((long)ppuVar1 + -0x1380) = *(undefined8 *)((long)ppuVar1 + -0x470);
          *(undefined8 *)((long)ppuVar1 + -5000) = *(undefined8 *)((long)ppuVar1 + -0x478);
          *(undefined8 *)((long)ppuVar1 + -0x1390) = *(undefined8 *)((long)ppuVar1 + -0x480);
          *(undefined8 *)((long)ppuVar1 + -0x1328) = *(undefined8 *)((long)ppuVar1 + -0x908);
          *(undefined8 *)((long)ppuVar1 + -0x1330) = *(undefined8 *)((long)ppuVar1 + -0x910);
          *(undefined8 *)((long)ppuVar1 + -0x1320) = *(undefined8 *)((long)ppuVar1 + -0x900);
          *(undefined8 *)((long)ppuVar1 + -0x1308) = *(undefined8 *)((long)ppuVar1 + -0x8a0);
          *(undefined8 *)((long)ppuVar1 + -0x1310) = *(undefined8 *)((long)ppuVar1 + -0x8a8);
          *(undefined8 *)((long)ppuVar1 + -0x1318) = *(undefined8 *)((long)ppuVar1 + -0x8b0);
          *(long *)((long)ppuVar1 + -0x1300) = lVar16;
          *(undefined8 *)((long)ppuVar1 + -0x12f8) = uVar26;
          *(undefined8 *)((long)ppuVar1 + -0x12f0) = uVar18;
          *(undefined1 (*) [16])((long)ppuVar1 + -0x1340) = auVar36;
          unaff_x23 = (long *)__ZN17codex_rmcp_client5oauth17save_oauth_tokens17h1caaf87a051e8e32E
                                        (*(undefined8 *)(param_1[0x15c] + 8),
                                         *(undefined8 *)(param_1[0x15c] + 0x10),
                                         (undefined1 *)((long)ppuVar1 + -0x13b0),
                                         *(undefined1 *)param_1[0x15e]);
          if (unaff_x23 == (long *)0x0) {
            FUN_100e19d38((undefined1 *)((long)ppuVar1 + -0x13b0));
            if (param_1[0x157] != 0) {
              _free(param_1[0x158]);
            }
            if (param_1[0x154] != 0) {
              _free(param_1[0x155]);
            }
            unaff_x23 = (long *)0x0;
            *(undefined2 *)(param_1 + 0x160) = 0;
            *(undefined1 *)((long)param_1 + 0xb02) = 1;
            goto LAB_100a41280;
          }
          if (*(long *)((long)ppuVar1 + -0x1330) != 0) {
            _free(*(undefined8 *)((long)ppuVar1 + -0x1328));
          }
          if (*(long *)((long)ppuVar1 + -0x1318) != 0) {
            _free(*(undefined8 *)((long)ppuVar1 + -0x1310));
          }
          if (lVar16 != 0) {
            _free(uVar26);
          }
          FUN_100d0f028((undefined1 *)((long)ppuVar1 + -0x13b0));
        }
      }
LAB_100a418e4:
      if (param_1[0x157] != 0) {
        _free(param_1[0x158]);
      }
      if (param_1[0x154] != 0) {
        _free(param_1[0x155]);
      }
      *(undefined2 *)(param_1 + 0x160) = 0;
      *(undefined1 *)((long)param_1 + 0xb02) = 1;
    }
LAB_100a41280:
    FUN_100d29e38(param_1 + 0x14d);
    *(undefined1 *)((long)param_1 + 0xc5a) = 0;
    lVar20 = param_1[0x14a];
    *(long *)((long)ppuVar1 + -0x13b0) = lVar20;
    __ZN9tiny_http6Server7unblock17hb32adb7cb1be293cE(lVar20 + 0x10);
    lVar20 = **(long **)((long)ppuVar1 + -0x13b0);
    **(long **)((long)ppuVar1 + -0x13b0) = lVar20 + -1;
    LORelease();
    if (lVar20 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc30b05d0526cb26eE
                ((undefined1 *)((long)ppuVar1 + -0x13b0));
    }
    if (param_1[0xb3] != 0) {
      _free(param_1[0xb4]);
    }
    FUN_100dfb3ec(param_1 + 0xbc);
    FUN_100cd0ad8(param_1 + 0x14b);
    if (param_1[0xb6] != 0) {
      _free(param_1[0xb7]);
    }
    if (param_1[0xb9] != 0) {
      _free(param_1[0xba]);
    }
    *(undefined2 *)((long)param_1 + 0xc59) = 1;
  }
  uVar26 = 0;
  *(undefined1 *)((long)param_1 + 0xc6) = 1;
LAB_100a4192c:
  auVar37._8_8_ = unaff_x23;
  auVar37._0_8_ = uVar26;
  return auVar37;
}

