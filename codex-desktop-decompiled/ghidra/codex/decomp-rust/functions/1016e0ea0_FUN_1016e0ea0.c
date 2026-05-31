
/* WARNING: Removing unreachable block (ram,0x0001016e0764) */
/* WARNING: Removing unreachable block (ram,0x0001016dfeec) */
/* WARNING: Removing unreachable block (ram,0x0001016df928) */
/* WARNING: Removing unreachable block (ram,0x0001016dfacc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0ea0(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *extraout_x1;
  undefined1 *puVar19;
  undefined8 uVar20;
  bool bVar21;
  ulong uVar22;
  long unaff_x19;
  undefined8 uVar23;
  long *plVar24;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  byte *unaff_x25;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long lStack0000000000000050;
  undefined1 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  byte *in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined1 *in_stack_00000090;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_00001bd0;
  long in_stack_00001bd8;
  long in_stack_00001be0;
  undefined8 in_stack_00001be8;
  undefined8 in_stack_00001bf0;
  undefined8 in_stack_00001bf8;
  long in_stack_00001c00;
  char in_stack_00004198;
  undefined7 in_stack_00004199;
  undefined8 in_stack_000041a0;
  long *in_stack_00006ae0;
  long *in_stack_00006ae8;
  long *in_stack_00006af0;
  byte in_stack_00007620;
  long *in_stack_00007640;
  long *in_stack_00007648;
  long *in_stack_00007650;
  byte in_stack_00007f88;
  byte in_stack_000081b8;
  long *in_stack_000088f0;
  long *in_stack_000088f8;
  undefined4 uVar35;
  long in_stack_00008918;
  byte in_stack_00009618;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  undefined *puVar40;
  undefined8 in_stack_0000b2b0;
  undefined8 in_stack_0000b2b8;
  byte in_stack_0000bfb8;
  long *in_stack_0000dc90;
  long *in_stack_0000dc98;
  ulong in_stack_0000dca0;
  byte in_stack_0000e9b8;
  undefined *in_stack_00010280;
  code *in_stack_00010288;
  undefined *in_stack_00010290;
  long in_stack_00010298;
  undefined *in_stack_000102a0;
  long in_stack_000102a8;
  long in_stack_000102b0;
  long in_stack_000102b8;
  long in_stack_000102c0;
  long in_stack_000102c8;
  long in_stack_000102d0;
  long in_stack_000102d8;
  long *in_stack_000102e0;
  long *in_stack_000102e8;
  long *in_stack_000102f0;
  code *in_stack_000102f8;
  undefined *in_stack_00010300;
  long in_stack_00010308;
  undefined *in_stack_00010310;
  long in_stack_00010318;
  long in_stack_00010320;
  long in_stack_00010328;
  long in_stack_00010330;
  long in_stack_00010338;
  long in_stack_00010340;
  long in_stack_00010348;
  undefined8 in_stack_00010350;
  undefined8 in_stack_00010358;
  
  uVar35 = (undefined4)((ulong)in_stack_00008918 >> 0x20);
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100de21d4(&stack0x00006840);
  FUN_100d2a2c0(&stack0x0000dc90);
  FUN_100e1d208(&stack0x000088f0);
  *in_stack_00000060 = 1;
  if (unaff_x21 == 0xd) {
    if (*unaff_x20 != 0x4c45434e41435f5f || *(long *)((long)unaff_x20 + 5) != 0x5f5f44454c4c4543) {
      unaff_x21 = 0xd;
      goto LAB_1016e0f7c;
    }
    plVar14 = (long *)FUN_100c35750(&UNK_108cd9321,0x2c);
    if (unaff_x28 != 0) {
      _free();
    }
LAB_1016e0930:
    FUN_100dd8a98(unaff_x19 + 0x20f0);
    unaff_x25[0xa6] = 0;
    unaff_x25[0xb9] = 0;
    FUN_100e04ad4(unaff_x19 + 0x6c0);
    FUN_100e01cdc(unaff_x19 + 0x610);
    unaff_x25[0xa7] = 0;
    unaff_x25[0xa8] = 0;
    unaff_x25[0xa9] = 0;
    if ((*(ulong *)(unaff_x19 + 0x5f8) & 0x7fffffffffffffff) == 0) {
      bVar10 = unaff_x25[0x9d];
    }
    else {
      _free(*(undefined8 *)(unaff_x19 + 0x600));
      bVar10 = unaff_x25[0x9d];
    }
    if ((((bVar10 & 1) != 0) && (*(long *)(unaff_x19 + 0x5e0) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x5e0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5e8));
    }
    unaff_x25[0x9d] = 0;
    lVar29 = **(long **)(unaff_x19 + 0x5d8);
    **(long **)(unaff_x19 + 0x5d8) = lVar29 + -1;
    LORelease();
    if (lVar29 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x19 + 0x5d8);
    }
    unaff_x25[0xaa] = 0;
    unaff_x25[0xba] = 0;
    if ((*(long *)(unaff_x19 + 0x5c0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x5c0) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x5c8));
    }
    unaff_x25[0xab] = 0;
    FUN_100dea73c(unaff_x19 + 0x588);
    unaff_x25[0xac] = 0;
    FUN_100e01cdc(unaff_x19 + 0x4d8);
    if (*(long *)(unaff_x19 + 0x4c0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x4c8));
    }
    FUN_100e76384(unaff_x19 + 0x4a8);
    unaff_x25[0xad] = 0;
    lVar31 = *(long *)(unaff_x19 + 0x498);
    lVar29 = *(long *)(unaff_x19 + 0x4a0);
    if (lVar29 != 0) {
      puVar15 = (undefined8 *)(lVar31 + 8);
      do {
        if (puVar15[-1] != 0) {
          _free(*puVar15);
        }
        puVar15 = puVar15 + 3;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    if (*(long *)(unaff_x19 + 0x490) != 0) {
      _free(lVar31);
    }
    unaff_x25[0xae] = 0;
    if ((unaff_x25[0x9e] & 1) != 0) {
      FUN_100e01cdc(unaff_x19 + 0x3b0);
    }
    unaff_x25[0x9e] = 0;
    if ((*(long *)(unaff_x19 + 0x368) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x368) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x370));
    }
    if ((*(long *)(unaff_x19 + 0x380) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x380) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x388));
    }
    if ((*(long *)(unaff_x19 + 0x398) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x398) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x3a0));
    }
    unaff_x25[0xaf] = 0;
    FUN_100ddd750(unaff_x19 + 0x248);
    lVar29 = -0x7fffffffffffffff;
LAB_1016e0ad8:
    unaff_x25[0xb0] = 0;
    *in_stack_000000a0 = lVar29;
    in_stack_000000a0[1] = (long)plVar14;
    in_stack_000000a0[7] = in_stack_000102a8;
    in_stack_000000a0[6] = (long)in_stack_000102a0;
    in_stack_000000a0[9] = in_stack_000102b8;
    in_stack_000000a0[8] = in_stack_000102b0;
    in_stack_000000a0[0xb] = in_stack_000102c8;
    in_stack_000000a0[10] = in_stack_000102c0;
    in_stack_000000a0[0xd] = in_stack_000102d8;
    in_stack_000000a0[0xc] = in_stack_000102d0;
    bVar10 = 1;
    in_stack_000000a0[3] = (long)in_stack_00010288;
    in_stack_000000a0[2] = (long)in_stack_00010280;
    in_stack_000000a0[5] = in_stack_00010298;
    in_stack_000000a0[4] = (long)in_stack_00010290;
  }
  else {
LAB_1016e0f7c:
    *(long *)(unaff_x19 + 0x2100) = unaff_x28;
    *(long **)(unaff_x19 + 0x2108) = unaff_x20;
    *(long *)(unaff_x19 + 0x2110) = unaff_x21;
    if (*(long *)(unaff_x19 + 0x278) == -0x8000000000000000) {
      if ((*(byte *)(unaff_x19 + 0x2f0) & 1) == 0) {
        unaff_x25[0xb8] = 1;
        in_stack_00001bd0 = -0x8000000000000000;
      }
      else {
        lVar29 = 0;
        if (*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000) {
          lVar29 = unaff_x19 + 0x2100;
        }
        auVar34 = FUN_100e9d3e0(lVar29);
        FUN_100e9cef0(&stack0x00001bd0,auVar34._0_8_,auVar34._8_8_);
        unaff_x25[0xb8] = 1;
      }
    }
    else {
      uVar23 = *(undefined8 *)(unaff_x19 + 0x280);
      unaff_x21 = *(long *)(unaff_x19 + 0x288);
      if (unaff_x21 == 0) {
        in_stack_00001bd8 = 1;
      }
      else {
        in_stack_00001bd8 = _malloc(unaff_x21);
        if (in_stack_00001bd8 == 0) {
          func_0x0001087c9084(1,unaff_x21);
          goto LAB_1016e14bc;
        }
      }
      _memcpy(in_stack_00001bd8,uVar23,unaff_x21);
      unaff_x25[0xb8] = 1;
      in_stack_00001bd0 = unaff_x21;
      in_stack_00001be0 = unaff_x21;
    }
    FUN_101148a98(&stack0x00001be8,*(undefined8 *)(unaff_x19 + 0x268),
                  *(undefined8 *)(unaff_x19 + 0x270));
    unaff_x25[0xb7] = 1;
    unaff_x25[0xb8] = 0;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x7daf);
    uVar5 = *(undefined1 *)(unaff_x19 + 0x7db3);
    lVar29 = -0x8000000000000000;
    if (*(long *)(unaff_x19 + 0x588) == 2) {
      lStack0000000000000050 = -0x8000000000000000;
      bVar10 = unaff_x25[0x96];
      if (*(long *)(unaff_x19 + 0x2100) == -0x8000000000000000) goto LAB_1016df160;
LAB_1016df10c:
      unaff_x21 = *(long *)(unaff_x19 + 0x2108);
      lVar29 = *(long *)(unaff_x19 + 0x2110);
      if (lVar29 == 0) {
        in_stack_00000020 = 1;
      }
      else {
        in_stack_00000020 = _malloc(lVar29);
        if (in_stack_00000020 == 0) {
          func_0x0001087c9084(1,lVar29);
          goto LAB_1016e14bc;
        }
      }
      _memcpy(in_stack_00000020,unaff_x21,lVar29);
      if (*(long *)(unaff_x19 + 0x2a8) == -0x8000000000000000) goto LAB_1016df178;
LAB_1016df1dc:
      unaff_x21 = *(long *)(unaff_x19 + 0x2b0);
      lVar31 = *(long *)(unaff_x19 + 0x2b8);
      if (lVar31 == 0) {
        in_stack_00000010 = 1;
      }
      else {
        in_stack_00000010 = _malloc(lVar31);
        if (in_stack_00000010 == 0) {
          func_0x0001087c9084(1,lVar31);
          goto LAB_1016e14bc;
        }
      }
      _memcpy(in_stack_00000010,unaff_x21,lVar31);
      if (*(long *)(unaff_x19 + 0x368) == -0x8000000000000000) goto LAB_1016df18c;
LAB_1016df228:
      unaff_x21 = *(long *)(unaff_x19 + 0x370);
      lVar26 = *(long *)(unaff_x19 + 0x378);
      if (lVar26 == 0) {
        in_stack_00000008 = 1;
      }
      else {
        in_stack_00000008 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar26,1);
        if (in_stack_00000008 == 0) {
          func_0x0001087c9084(1,lVar26);
          goto LAB_1016e14bc;
        }
      }
      _memcpy(in_stack_00000008,unaff_x21,lVar26);
      if (*(long *)(unaff_x19 + 0x380) == -0x8000000000000000) goto LAB_1016df19c;
LAB_1016df278:
      unaff_x21 = *(long *)(unaff_x19 + 0x388);
      lVar28 = *(long *)(unaff_x19 + 0x390);
      if (lVar28 == 0) {
        lVar17 = 1;
      }
      else {
        lVar17 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar28,1);
        if (lVar17 == 0) {
          func_0x0001087c9084(1,lVar28);
          goto LAB_1016e14bc;
        }
      }
      _memcpy(lVar17,unaff_x21,lVar28);
      if (*(long *)(unaff_x19 + 0x398) == -0x8000000000000000) goto LAB_1016df1ac;
LAB_1016df2c8:
      uVar23 = *(undefined8 *)(unaff_x19 + 0x3a0);
      lVar27 = *(long *)(unaff_x19 + 0x3a8);
      if (lVar27 == 0) {
        unaff_x21 = 1;
      }
      else {
        unaff_x21 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar27,1);
        if (unaff_x21 == 0) {
          func_0x0001087c9084(1,lVar27);
          goto LAB_1016e14bc;
        }
      }
      _memcpy(unaff_x21,uVar23,lVar27);
    }
    else {
      unaff_x25[0x9d] = 0;
      lStack0000000000000050 = *(long *)(unaff_x19 + 0x5e0);
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x5e8);
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x5f0);
      bVar10 = unaff_x25[0x96];
      if (*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000) goto LAB_1016df10c;
LAB_1016df160:
      if (*(long *)(unaff_x19 + 0x2a8) != -0x8000000000000000) goto LAB_1016df1dc;
LAB_1016df178:
      lVar31 = -0x8000000000000000;
      if (*(long *)(unaff_x19 + 0x368) != -0x8000000000000000) goto LAB_1016df228;
LAB_1016df18c:
      lVar26 = -0x8000000000000000;
      if (*(long *)(unaff_x19 + 0x380) != -0x8000000000000000) goto LAB_1016df278;
LAB_1016df19c:
      lVar28 = -0x8000000000000000;
      lVar17 = lStack0000000000000050;
      if (*(long *)(unaff_x19 + 0x398) != -0x8000000000000000) goto LAB_1016df2c8;
LAB_1016df1ac:
      lVar27 = -0x8000000000000000;
    }
    cVar11 = *(char *)(unaff_x19 + 0x2f0);
    cVar12 = *(char *)(unaff_x19 + 0x2f2);
    unaff_x25[0xb7] = 0;
    unaff_x25[0xa5] = 1;
    *(long *)(unaff_x19 + 0x2130) = in_stack_00001bd0;
    *(long *)(unaff_x19 + 0x2138) = in_stack_00001bd8;
    *(long *)(unaff_x19 + 0x2140) = in_stack_00001be0;
    *(undefined8 *)(unaff_x19 + 0x2148) = 0x8000000000000000;
    *(long *)(unaff_x19 + 0x2160) = lStack0000000000000050;
    *(undefined8 *)(unaff_x19 + 0x2168) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x2170) = in_stack_00000018;
    *(undefined4 *)(unaff_x19 + 0x22c7) = uVar3;
    *(undefined1 *)(unaff_x19 + 0x22cb) = uVar5;
    *(undefined1 *)(in_stack_00000088 + 0x1e0) = 2;
    *(byte *)(in_stack_00000088 + 0x1e5) = bVar10;
    *(undefined8 *)(unaff_x19 + 0x2298) = 0x8000000000000003;
    *(undefined8 *)(unaff_x19 + 0x2178) = 0x8000000000000000;
    *(long *)(unaff_x19 + 0x2190) = lVar29;
    *(long *)(unaff_x19 + 0x2198) = in_stack_00000020;
    *(long *)(unaff_x19 + 0x21a0) = lVar29;
    *(undefined8 *)(unaff_x19 + 0x2280) = 0x8000000000000001;
    *(long *)(unaff_x19 + 0x21a8) = lVar31;
    *(long *)(unaff_x19 + 0x21b0) = in_stack_00000010;
    *(long *)(unaff_x19 + 0x21b8) = lVar31;
    *(long *)(unaff_x19 + 0x21c0) = lVar26;
    *(long *)(unaff_x19 + 0x21c8) = in_stack_00000008;
    *(long *)(unaff_x19 + 0x21d0) = lVar26;
    *(long *)(unaff_x19 + 0x21d8) = lVar28;
    *(long *)(unaff_x19 + 0x21e0) = lVar17;
    *(long *)(unaff_x19 + 0x21e8) = lVar28;
    *(long *)(unaff_x19 + 0x21f0) = lVar27;
    *(long *)(unaff_x19 + 0x21f8) = unaff_x21;
    *(long *)(unaff_x19 + 0x2200) = lVar27;
    *(undefined8 *)(unaff_x19 + 0x2208) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x2220) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x2238) = 0x8000000000000000;
    *(undefined1 *)(in_stack_00000088 + 0x1e6) = 3;
    *(undefined8 *)(unaff_x19 + 0x2250) = 0x8000000000000000;
    *(char *)(in_stack_00000088 + 0x1e1) = '\x02' - cVar11;
    *(undefined2 *)(in_stack_00000088 + 0x1e2) = 0x202;
    *(char *)(in_stack_00000088 + 0x1e4) = '\x02' - cVar12;
    *(undefined8 *)(unaff_x19 + 0x2128) = in_stack_00001bf8;
    *(undefined8 *)(unaff_x19 + 0x2120) = in_stack_00001bf0;
    *(undefined8 *)(unaff_x19 + 0x2118) = in_stack_00001be8;
    *(undefined8 *)(unaff_x19 + 0x2268) = 0x8000000000000000;
    func_0x0001013edc8c(&stack0x00007640,*(undefined8 *)(unaff_x19 + 0x4b0),
                        *(undefined8 *)(unaff_x19 + 0x4b8));
    FUN_1011accf0(&stack0x0000dc90,unaff_x19 + 0x2118);
    FUN_1011b4ddc(&stack0x00006ae0,unaff_x19 + 0x610);
    plVar24 = *(long **)(unaff_x19 + 0x20f0);
    if ((plVar24 != (long *)0x0) && (lVar29 = *plVar24, *plVar24 = lVar29 + 1, lVar29 < 0))
    goto LAB_1016e14bc;
    bVar10 = unaff_x25[0x95];
    _memcpy(&stack0x0000b2a8,&stack0x0000dc90,0x1b8);
    _memcpy(&stack0x000088f0,&stack0x0000b290,0x280);
    _memcpy(unaff_x19 + 0x7dd8,&stack0x000088f0,0x280);
    *(long **)(unaff_x25 + 0x340) = plVar24;
    unaff_x25[0x348] = 0xff;
    unaff_x25[0x349] = 0xff;
    unaff_x25[0x34a] = 0xff;
    unaff_x25[0x34b] = 0xff;
    unaff_x25[0x34c] = 0xff;
    unaff_x25[0x34d] = 0xff;
    unaff_x25[0x34e] = 0xff;
    unaff_x25[0x34f] = 0xff;
    unaff_x25[0x8e8] = bVar10;
    unaff_x25[0x8e9] = 0;
    FUN_10167442c(&stack0x00001c00,unaff_x19 + 0x7dd8,in_stack_000000a8);
    if (in_stack_00001c00 == 2) {
      *in_stack_000000a0 = -0x7ffffffffffffffe;
      bVar10 = 9;
      goto LAB_1016e0b0c;
    }
    unaff_x25[0xa4] = 1;
    lVar29 = unaff_x19 + 0x22d0;
    _memcpy(lVar29,&stack0x00001c00,0x2548);
    FUN_100e49154(unaff_x19 + 0x7dd8);
    __ZN11codex_login4auth14default_client10originator17h4cdfc414e6d2fa8eE(&stack0x0000b290);
    *(long **)(unaff_x19 + 0x4820) = in_stack_00007648;
    *(long **)(unaff_x19 + 0x4818) = in_stack_00007640;
    *(long **)(unaff_x19 + 0x4828) = in_stack_00007650;
    (**(code **)(param_1 + 0x20))(&stack0x0000b2c0,in_stack_0000b2b0,in_stack_0000b2b8);
    __ZN10codex_core9otel_init14build_provider17h94dafb1f6dca3a9eE
              (unaff_x29 + -0xe0,lVar29,&UNK_108ca5cab,7,0);
    if (in_stack_000102e0 == (long *)0x8000000000000002) {
      in_stack_000088f0 = (long *)&stack0x0000dc90;
      in_stack_000088f8 = (long *)0x10117aba8;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Could_not_create_otel_exporter__108ac27a0,&stack0x000088f0);
      *(undefined8 *)(unaff_x19 + 0x4830) = 0x8000000000000001;
      FUN_100c9623c(in_stack_000102e8,in_stack_000102f0);
      in_stack_0000dc90 = in_stack_000102e8;
      in_stack_0000dc98 = in_stack_000102f0;
    }
    else if (in_stack_000102e0 == (long *)0x8000000000000003) {
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(&UNK_108ca7554,0x7f);
      *(undefined8 *)(unaff_x19 + 0x4830) = 0x8000000000000001;
    }
    else {
      *(long *)(unaff_x19 + 0x4878) = in_stack_00010328;
      *(long *)(unaff_x19 + 0x4870) = in_stack_00010320;
      *(long *)(unaff_x19 + 0x4888) = in_stack_00010338;
      *(long *)(unaff_x19 + 0x4880) = in_stack_00010330;
      *(long *)(unaff_x19 + 0x4898) = in_stack_00010348;
      *(long *)(unaff_x19 + 0x4890) = in_stack_00010340;
      *(undefined8 *)(unaff_x19 + 0x48a8) = in_stack_00010358;
      *(undefined8 *)(unaff_x19 + 0x48a0) = in_stack_00010350;
      *(long **)(unaff_x19 + 0x4838) = in_stack_000102e8;
      *(long **)(unaff_x19 + 0x4830) = in_stack_000102e0;
      *(code **)(unaff_x19 + 0x4848) = in_stack_000102f8;
      *(long **)(unaff_x19 + 0x4840) = in_stack_000102f0;
      *(long *)(unaff_x19 + 0x4858) = in_stack_00010308;
      *(undefined **)(unaff_x19 + 0x4850) = in_stack_00010300;
      *(long *)(unaff_x19 + 0x4868) = in_stack_00010318;
      *(undefined **)(unaff_x19 + 0x4860) = in_stack_00010310;
    }
    if (in_stack_000102e0 == (long *)0x8000000000000003) {
      FUN_100db50cc(&stack0x0000b290);
    }
    if (*(long *)(unaff_x19 + 0x4830) != -0x7fffffffffffffff) {
      uVar23 = *(undefined8 *)(unaff_x19 + 0x4820);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x4828);
      if (*(long *)(unaff_x19 + 0x48a8) != 0) {
        if (cRam000000010b66da58 == '\0') {
          cRam000000010b66da58 = '\x01';
          in_stack_0000dca0 =
               __ZN10codex_otel7metrics4tags28bounded_originator_tag_value17h5f91266f84828ca0E
                         (uVar23,uVar20);
          in_stack_0000dc90 = (long *)&UNK_108e4e33f;
          in_stack_0000dc98 = (long *)0xa;
          __ZN10codex_otel7metrics6client13MetricsClient7counter17h17eba62d7595813aE
                    (&stack0x0000b290,unaff_x19 + 0x48a8,&UNK_108e4f5aa,0x13,1,&stack0x0000dc90,1);
          if ((in_stack_000102e0 != (long *)0xb) &&
             (in_stack_000088f0 = in_stack_000102e0, in_stack_000088f8 = in_stack_000102e8,
             in_stack_00008918 = in_stack_00010308, in_stack_000102e0 != (long *)0xb)) {
            FUN_1033a1e7c(&stack0x000088f0);
          }
        }
        uVar35 = (undefined4)((ulong)in_stack_00008918 >> 0x20);
        if (*(long *)(unaff_x19 + 0x4830) == -0x7fffffffffffffff) goto LAB_1016df848;
        uVar23 = *(undefined8 *)(unaff_x19 + 0x4820);
        uVar20 = *(undefined8 *)(unaff_x19 + 0x4828);
      }
      plVar24 = *(long **)(unaff_x19 + 0x48a8);
      if (plVar24 != (long *)0x0) {
        lVar31 = *plVar24;
        *plVar24 = lVar31 + 1;
        if (lVar31 < 0) goto LAB_1016e14bc;
        __ZN13codex_rollout8state_db25sqlite_telemetry_recorder17h5184d94f63a61f8aE
                  (plVar24,uVar23,uVar20);
        __ZN11codex_state9telemetry28install_process_db_telemetry17h557d8365d5bfb162E();
      }
    }
LAB_1016df848:
    auVar7._8_8_ = in_stack_0000dc98;
    auVar7._0_8_ = in_stack_0000dc90;
    auVar6._8_8_ = in_stack_0000dc98;
    auVar6._0_8_ = in_stack_0000dc90;
    auVar34._8_8_ = in_stack_0000dc98;
    auVar34._0_8_ = in_stack_0000dc90;
    *(long *)(unaff_x19 + 0x7dd8) = lVar29;
    *(long **)(unaff_x19 + 0x7de0) = (long *)(unaff_x19 + 0x588);
    pbVar30 = unaff_x25 + 0xd8;
    *pbVar30 = 0;
    *(long *)(unaff_x19 + 0x7de8) = lVar29;
    if (*(long *)(unaff_x19 + 0x588) == 0) {
      *(long *)(unaff_x19 + 0x7df8) = lVar29;
      *(undefined1 *)(in_stack_00000080 + 0x2c0) = 0;
      auVar34 = FUN_10077b744(unaff_x19 + 0x7df8,in_stack_000000a8);
      plVar24 = auVar34._8_8_;
      if (auVar34._0_8_ == 2) {
        *pbVar30 = 3;
        goto LAB_1016dffa0;
      }
      FUN_100ccf6e0(unaff_x19 + 0x7df8);
      plVar14 = plVar24;
      if ((auVar34._0_8_ & 1) == 0) goto LAB_1016dff84;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (&stack0x00006ae0,*(undefined8 *)(*(long *)(unaff_x19 + 0x7de8) + 0x1c18),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x7de8) + 0x1c20),&UNK_108ed2e30,0xe);
      auVar7 = ZEXT816(1) << 0x40;
      in_stack_0000dca0 = 0;
      in_stack_000088f0 = (long *)&stack0x0000dc90;
      in_stack_000088f8 = (long *)&UNK_10b209290;
      iVar13 = __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                         (&stack0x00007640,&stack0x000088f0);
      if (iVar13 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000081c0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1016e14bc;
      }
      in_stack_00010300 = (undefined *)0x1;
      in_stack_000102f8 = (code *)0x0;
      in_stack_00010308 = 0;
      puVar15 = (undefined8 *)_malloc(0x30);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x30);
        goto LAB_1016e14bc;
      }
      puVar15[1] = in_stack_00006ae8;
      *puVar15 = in_stack_00006ae0;
      puVar15[3] = 0;
      puVar15[2] = in_stack_00006af0;
      puVar15[5] = 0;
      puVar15[4] = 1;
      plVar14 = (long *)func_0x000106029c30(0x28,puVar15,&UNK_10b251420);
      (**(code **)*plVar24)(plVar24);
      lVar29 = 1;
      in_stack_000102e0 = in_stack_00006ae0;
      in_stack_000102e8 = in_stack_00006ae8;
LAB_1016dff88:
      *pbVar30 = 1;
      if (lVar29 != 2) {
        if (lVar29 != 0) {
LAB_1016dfadc:
          unaff_x25[0xa3] = 0;
          if (*(long *)(unaff_x19 + 0x4830) != -0x7fffffffffffffff) {
            FUN_100dfc5b8(unaff_x19 + 0x4830);
          }
          if (*(long *)(unaff_x19 + 0x4818) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x4820));
          }
          FUN_100de93d0(unaff_x19 + 0x22d0);
          unaff_x25[0xa4] = 0;
          FUN_100dff6cc(unaff_x19 + 0x2118);
          unaff_x25[0xa5] = 0;
          unaff_x25[0xb7] = 0;
          unaff_x25[0xb8] = 0;
          if ((*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x2100) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x2108));
          }
          goto LAB_1016e0930;
        }
        unaff_x25[0xa3] = 1;
        *(long **)(unaff_x19 + 0x48b0) = plVar14;
        __ZN12codex_config5state16ConfigLayerStack16effective_config17hb81929d75e8817f7E
                  (&stack0x00004148,unaff_x19 + 0x22d0);
        FUN_100f141b4(unaff_x19 + 0x48b8,&stack0x00004148);
        if (*(long *)(unaff_x19 + 0x48b8) == 2) {
          in_stack_00010308 = *(long *)(unaff_x19 + 0x48e8);
          in_stack_00010300 = *(undefined **)(unaff_x19 + 0x48e0);
          in_stack_00010318 = *(long *)(unaff_x19 + 0x48f8);
          in_stack_00010310 = *(undefined **)(unaff_x19 + 0x48f0);
          in_stack_00010328 = *(long *)(unaff_x19 + 0x4908);
          in_stack_00010320 = *(long *)(unaff_x19 + 0x4900);
          in_stack_00010330 = *(long *)(unaff_x19 + 0x4910);
          in_stack_000102e8 = *(long **)(unaff_x19 + 0x48c8);
          in_stack_000102e0 = *(long **)(unaff_x19 + 0x48c0);
          in_stack_000102f8 = *(code **)(unaff_x19 + 0x48d8);
          in_stack_00006af0 = *(long **)(unaff_x19 + 0x48d0);
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bRam000000010b631508 - 1 < 2 ||
               ((bRam000000010b631508 != 0 &&
                (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E
                                    ), cVar11 != '\0')))) &&
              (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E
                                  ), (uVar18 & 1) != 0)))) {
            in_stack_00006ae0 = (long *)&UNK_108cd934d;
            in_stack_000088f0 = (long *)&stack0x00006ae0;
            in_stack_000088f8 = (long *)&UNK_10b208fd0;
            auVar7._8_8_ = &stack0x000088f0;
            auVar7._0_8_ = 1;
            in_stack_0000dca0 = 2;
            FUN_1016e2a58(&stack0x0000dc90);
            in_stack_00006ae8 = (long *)0x6d;
          }
          else {
            lVar29 = 
            ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              plVar24 = *(long **)(
                                  ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E
                                  + 0x20);
              puVar40 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar40 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar13 = (**(code **)(puVar40 + 0x18))(puVar2,&stack0x00006708);
              if (iVar13 != 0) {
                in_stack_000088f0 = (long *)&stack0x00007640;
                in_stack_000088f8 = (long *)&UNK_10b208fd0;
                auVar7._8_8_ = &stack0x000088f0;
                auVar7._0_8_ = 1;
                in_stack_0000dca0 = 2;
                in_stack_00006ae0 = (long *)0x2;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar2,puVar40,&stack0x00006ae0,&stack0x0000dc90);
                in_stack_00006ae8 = plVar24;
              }
            }
          }
          FUN_100de3b58(&stack0x0000b290);
        }
        else {
          _memcpy(unaff_x19 + 0x62e8,unaff_x19 + 0x48b8,0x1a30);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x3ed0);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x3ed8);
          plVar14 = *(long **)(unaff_x19 + 0x48b0);
          if ((plVar14 != (long *)0x0) && (lVar29 = *plVar14, *plVar14 = lVar29 + 1, lVar29 < 0))
          goto LAB_1016e14bc;
          *(undefined8 *)(unaff_x19 + 0x7de8) = uVar23;
          *(undefined8 *)(unaff_x19 + 0x7df0) = uVar20;
          *(long **)(unaff_x19 + 0x7df8) = plVar14;
          *(long *)(unaff_x25 + 0x420) = unaff_x19 + 0x62e8;
          unaff_x25[0x42a] = 0;
          FUN_100520840(&stack0x00004198,unaff_x19 + 0x7dd8,in_stack_000000a8);
          if (in_stack_00004198 == '\x02') {
            *in_stack_000000a0 = -0x7ffffffffffffffe;
            bVar10 = 0xb;
            goto LAB_1016e0b0c;
          }
          *(undefined8 *)(unaff_x25 + 8) = in_stack_000041a0;
          *(ulong *)unaff_x25 = CONCAT71(in_stack_00004199,in_stack_00004198);
          FUN_100cc4448(unaff_x19 + 0x7dd8);
          if ((*unaff_x25 & 1) == 0) {
            if (unaff_x25[1] == 3) {
              func_0x0001013edc8c(&stack0x00007640,*(undefined8 *)(unaff_x19 + 0x4b0),
                                  *(undefined8 *)(unaff_x19 + 0x4b8));
              FUN_1011accf0(&stack0x0000dc90,unaff_x19 + 0x2118);
              FUN_1011b4ddc(&stack0x00006ae0,unaff_x19 + 0x610);
              plVar14 = *(long **)(unaff_x19 + 0x20f0);
              if ((plVar14 != (long *)0x0) && (lVar29 = *plVar14, *plVar14 = lVar29 + 1, lVar29 < 0)
                 ) goto LAB_1016e14bc;
              bVar10 = unaff_x25[0x95];
              _memcpy(&stack0x0000b2a8,&stack0x0000dc90,0x1b8);
              _memcpy(&stack0x000088f0,&stack0x0000b290,0x280);
              _memcpy(unaff_x19 + 0x7dd8,&stack0x000088f0,0x280);
              *(long **)(unaff_x25 + 0x340) = plVar14;
              unaff_x25[0x348] = 0xff;
              unaff_x25[0x349] = 0xff;
              unaff_x25[0x34a] = 0xff;
              unaff_x25[0x34b] = 0xff;
              unaff_x25[0x34c] = 0xff;
              unaff_x25[0x34d] = 0xff;
              unaff_x25[0x34e] = 0xff;
              unaff_x25[0x34f] = 0xff;
              unaff_x25[0x8e8] = bVar10;
              unaff_x25[0x8e9] = 0;
              FUN_10167442c(&stack0x0000b290,unaff_x19 + 0x7dd8,in_stack_000000a8);
              if (plVar24 == (long *)0x2) {
                *in_stack_000000a0 = -0x7ffffffffffffffe;
                bVar10 = 0xc;
                goto LAB_1016e0b0c;
              }
              _memcpy(&stack0x000041a8,&stack0x0000b290,0x2548);
              FUN_100e49154(unaff_x19 + 0x7dd8);
              FUN_100de93d0(unaff_x19 + 0x22d0);
              unaff_x25[0xa4] = 1;
              _memcpy(unaff_x19 + 0x22d0,&stack0x000041a8,0x2548);
              in_stack_000102e0 = plVar24;
              in_stack_000102e8 = in_stack_00007648;
              in_stack_00006af0 = in_stack_00007650;
            }
          }
          else {
            uVar18 = *(ulong *)(unaff_x19 + 0x7d20);
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b6314f0 - 1 < 2 ||
                 ((bRam000000010b6314f0 != 0 &&
                  (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                                      ), cVar11 != '\0')))))) &&
               (uVar22 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                                   ), (uVar22 & 1) != 0)) {
              auVar7._8_8_ = 0x47;
              auVar7._0_8_ = &UNK_108cd9383;
              in_stack_00006ae0 = (long *)&stack0x000081c0;
              in_stack_000102e0 = (long *)&stack0x0000dc90;
              in_stack_000102e8 = (long *)&UNK_10b208fd0;
              in_stack_00006af0 = (long *)&stack0x00006ae0;
              in_stack_000102f8 = (code *)&UNK_10b217808;
              in_stack_000088f0 = (long *)0x1;
              in_stack_000088f8 = (long *)&stack0x0000b290;
              FUN_1016e2818(&stack0x000088f0);
            }
            else {
              lVar29 = 
              ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar23 = *(undefined8 *)
                          (
                          ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                          + 0x20);
                uVar22 = *(ulong *)(
                                   ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                                   + 0x28);
                puVar40 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar40 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar13 = (**(code **)(puVar40 + 0x18))(puVar2,&stack0x000066f0);
                if (iVar13 != 0) {
                  in_stack_00006ae0 = (long *)&UNK_108cd9383;
                  in_stack_00006ae8 = (long *)0x47;
                  in_stack_000102e0 = (long *)&stack0x00006ae0;
                  in_stack_000102e8 = (long *)&UNK_10b208fd0;
                  in_stack_00006af0 = (long *)&stack0x00007640;
                  in_stack_000102f8 = (code *)&UNK_10b217808;
                  in_stack_000088f0 = (long *)0x1;
                  in_stack_000088f8 = (long *)&stack0x0000b290;
                  auVar7._8_8_ = uVar23;
                  auVar7._0_8_ = 2;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar29,puVar2,puVar40,&stack0x0000dc90,&stack0x000088f0);
                  in_stack_0000dca0 = uVar22;
                }
              }
            }
            if ((uVar18 & 3) == 1) {
              uVar23 = *(undefined8 *)(uVar18 - 1);
              puVar15 = *(undefined8 **)(uVar18 + 7);
              pcVar9 = (code *)*puVar15;
              if (pcVar9 != (code *)0x0) {
                (*pcVar9)(uVar23);
              }
              if (puVar15[1] != 0) {
                _free(uVar23);
              }
              _free((undefined8 *)(uVar18 - 1));
            }
          }
          FUN_100e04ad4(unaff_x19 + 0x62e8);
        }
        uVar23 = auVar7._8_8_;
        *(long *)(unaff_x19 + 0x7dd8) = unaff_x19 + 0x22d0;
        unaff_x25[0x2d0] = 0;
        func_0x0001004eedb8(&stack0x0000b290,unaff_x19 + 0x7dd8,in_stack_000000a8);
        if (in_stack_000102e0 == (long *)0x2) {
          *in_stack_000000a0 = -0x7ffffffffffffffe;
          bVar10 = 0xd;
          goto LAB_1016e0b0c;
        }
        if ((unaff_x25[0x2d0] == 3) && (unaff_x25[0x2c8] == 3)) {
          FUN_100e6ae88(unaff_x19 + 0x7de8);
        }
        if ((((ulong)in_stack_000102e0 & 1) != 0) || (in_stack_000102e8 != (long *)0x9)) {
          __ZN10codex_core11exec_policy36format_exec_policy_error_with_source17h2aded56d5eca2b76E
                    (&stack0x000088f0,&stack0x0000b290);
          __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                    (s_Error_loading_rules__108ac2786,&stack0x0000dc90);
          if (in_stack_000088f0 != (long *)0x0) {
            _free(in_stack_000088f8);
          }
          __ZN3std7process4exit17h656c4fcb5bd11385E(1);
          goto LAB_1016e14bc;
        }
        __ZN11codex_login4auth14default_client40set_default_client_residency_requirement17h4620080bb8df219dE
                  (*in_stack_00000090);
        uVar20 = *(undefined8 *)(unaff_x19 + 0x268);
        uVar25 = *(undefined8 *)(unaff_x19 + 0x270);
        lVar29 = *(long *)(unaff_x19 + 0x3148);
        if (-1 < lVar29) {
          lVar29 = 2;
        }
        lVar29 = unaff_x19 + *(long *)(&UNK_108cdb7a8 + lVar29 * 8);
        uVar22 = *(ulong *)(lVar29 + 0x2f00);
        uVar18 = uVar22;
        if (uVar22 < 0x8000000000000001) {
          uVar18 = 0;
        }
        plVar24 = (long *)0x9;
        if ((uVar18 & 0x7fffffffffffffff) == 0) {
          if (uVar22 == 0x8000000000000000) {
            in_stack_000102f8 = (code *)0x8000000000000000;
            in_stack_000102e0 = (long *)0x8000000000000000;
            plVar24 = in_stack_00006ae0;
            in_stack_00006af0 = in_stack_00006ae8;
          }
          else {
            FUN_1035ab934(&stack0x0000b290,*(undefined8 *)(lVar29 + 0x2f08),
                          *(undefined8 *)(lVar29 + 0x2f10));
            in_stack_000102f8 = *(code **)(lVar29 + 0x2f18);
          }
          in_stack_00010300 =
               (undefined *)
               CONCAT71((int7)((ulong)in_stack_00010300 >> 8),*(undefined1 *)(lVar29 + 0x2f20));
          in_stack_00006ae0 = plVar24;
          in_stack_00006ae8 = in_stack_00006af0;
        }
        else if ((uVar18 & 0x7fffffffffffffff) == 1) {
          in_stack_000102e0 = (long *)0x8000000000000001;
        }
        else {
          plVar24 = *(long **)(lVar29 + 0x2f08);
          in_stack_000102e0 = *(long **)(lVar29 + 0x2f00);
          in_stack_000102f8 = *(code **)(lVar29 + 0x2f18);
          in_stack_00006af0 = *(long **)(lVar29 + 0x2f10);
          in_stack_00010300 = *(undefined **)(lVar29 + 0x2f20);
        }
        func_0x000104922e0c(&stack0x000088f0,&stack0x0000b290,*(undefined8 *)(unaff_x19 + 0x30d0),
                            *(undefined8 *)(unaff_x19 + 0x30d8));
        __ZN9codex_tui15additional_dirs23add_dir_warning_message17h9f8dbd9f33155150E
                  (&stack0x0000dc90,uVar20,uVar25,&stack0x000088f0,
                   *(undefined8 *)(unaff_x19 + 0x3e88),*(undefined8 *)(unaff_x19 + 0x3e90));
        if (auVar7._0_8_ != -0x8000000000000000) {
          __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                    (s_Error_adding_directories__108adbcba,&stack0x00006ae0);
          __ZN3std7process4exit17h656c4fcb5bd11385E(1);
          goto LAB_1016e14bc;
        }
        plVar14 = in_stack_000088f0;
        if (in_stack_000088f0 < (long *)0x8000000000000001) {
          plVar14 = (long *)0x0;
        }
        if ((in_stack_000088f0 != (long *)0x8000000000000000) &&
           (((ulong)plVar14 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(&stack0x000088f0);
        }
        if (*(long *)(unaff_x19 + 0x588) != 2) {
          uVar20 = *(undefined8 *)(unaff_x19 + 0x3ed0);
          lVar29 = *(long *)(unaff_x19 + 0x3ed8);
          if (lVar29 == 0) {
            lVar31 = 1;
          }
          else {
            lVar31 = _malloc(lVar29);
            if (lVar31 == 0) {
              func_0x0001087c9084(1,lVar29);
              goto LAB_1016e14bc;
            }
          }
          _memcpy(lVar31,uVar20,lVar29);
          bVar10 = in_stack_00000090[0x13f];
          bVar4 = in_stack_00000090[0x13b];
          if (*(long *)(unaff_x19 + 0x44e0) == -0x8000000000000000) {
            in_stack_000102e0 = (long *)0x8000000000000000;
          }
          else {
            FUN_101146714(&stack0x0000b290,*(undefined8 *)(unaff_x19 + 0x44e8),
                          *(undefined8 *)(unaff_x19 + 0x44f0));
          }
          uVar20 = *(undefined8 *)(unaff_x19 + 0x3f18);
          lVar26 = *(long *)(unaff_x19 + 0x3f20);
          if (lVar26 == 0) {
            lVar17 = 1;
          }
          else {
            lVar17 = _malloc(lVar26);
            if (lVar17 == 0) {
              func_0x0001087c9084(1,lVar26);
              goto LAB_1016e14bc;
            }
          }
          _memcpy(lVar17,uVar20,lVar26);
          *(long *)(unaff_x25 + 0xbd8) = lVar29;
          *(long *)(unaff_x25 + 0xbe0) = lVar31;
          *(long *)(unaff_x25 + 0xbe8) = lVar29;
          unaff_x25[0xc21] = bVar10;
          unaff_x25[0xc20] = bVar4;
          *(long *)(unaff_x25 + 0xbf0) = lVar26;
          *(long *)(unaff_x25 + 0xbf8) = lVar17;
          *(long *)(unaff_x25 + 0xc00) = lVar26;
          *(long **)(unaff_x19 + 0x8928) = plVar24;
          *(long **)(unaff_x19 + 0x8920) = in_stack_000102e0;
          *(long **)(unaff_x19 + 0x8930) = in_stack_00006af0;
          *(byte **)(unaff_x19 + 0x7dd8) = unaff_x25 + 0xbd8;
          unaff_x25[0xbd0] = 0;
          auVar34 = FUN_1006df03c(unaff_x19 + 0x7dd8,in_stack_000000a8);
          if ((auVar34._0_8_ & 1) != 0) {
            *in_stack_000000a0 = -0x7ffffffffffffffe;
            bVar10 = 0xe;
            goto LAB_1016e0b0c;
          }
          if (unaff_x25[0xbd0] == 3) {
            FUN_100e5e3e0(unaff_x19 + 0x7de8);
          }
          if (auVar34._8_8_ != 0) {
            __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s__108ac265a,&stack0x0000b290);
            __ZN3std7process4exit17h656c4fcb5bd11385E(1);
            goto LAB_1016e14bc;
          }
          if (*(long *)(unaff_x25 + 0xbd8) != 0) {
            _free(*(undefined8 *)(unaff_x25 + 0xbe0));
          }
          if ((*(long *)(unaff_x25 + 0xbf0) != -0x8000000000000000) &&
             (*(long *)(unaff_x25 + 0xbf0) != 0)) {
            _free(*(undefined8 *)(unaff_x25 + 0xbf8));
          }
          lVar29 = *(long *)(unaff_x25 + 0xc08);
          if (lVar29 != -0x8000000000000000) {
            lVar26 = *(long *)(unaff_x25 + 0xc10);
            lVar31 = *(long *)(unaff_x25 + 0xc18);
            if (lVar31 != 0) {
              puVar15 = (undefined8 *)(lVar26 + 8);
              do {
                if (puVar15[-1] != 0) {
                  _free(*puVar15);
                }
                puVar15 = puVar15 + 3;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
            }
            if (lVar29 != 0) {
              _free(lVar26);
            }
          }
        }
        uVar20 = *(undefined8 *)(unaff_x19 + 0x3f00);
        lVar29 = *(long *)(unaff_x19 + 0x3f08);
        if (lVar29 == 0) {
          lVar31 = 1;
        }
        else {
          lVar31 = _malloc(lVar29);
          if (lVar31 == 0) {
            func_0x0001087c9084(1,lVar29);
            goto LAB_1016e14bc;
          }
        }
        _memcpy(lVar31,uVar20,lVar29);
        *(long *)(unaff_x19 + 0x7d28) = lVar29;
        *(long *)(unaff_x19 + 0x7d30) = lVar31;
        *(long *)(unaff_x19 + 0x7d38) = lVar29;
        uVar18 = CONCAT53((int5)((ulong)in_stack_000102e0 >> 0x18),0x101ff);
        plVar14 = (long *)__ZN3std2fs10DirBuilder7_create17h88524462c4c2be57E
                                    (&stack0x0000b290,lVar31,lVar29);
        if (plVar14 != (long *)0x0) {
LAB_1016dc7d4:
          if (*(long *)(unaff_x19 + 0x7d28) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x7d30));
          }
          plVar24 = *(long **)(unaff_x19 + 0x48b0);
          if (plVar24 != (long *)0x0) {
            lVar29 = *plVar24;
            *plVar24 = lVar29 + -1;
            LORelease();
            if (lVar29 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x48b0);
            }
          }
          goto LAB_1016dfadc;
        }
        pbVar30 = unaff_x25 + 0x88;
        pbVar30[0] = 0;
        pbVar30[1] = 0;
        pbVar30[2] = 0;
        pbVar30[3] = 0;
        *(undefined2 *)(unaff_x19 + 0x7daa) = 0;
        *(undefined4 *)(unaff_x19 + 0x7da6) = 0;
        unaff_x25[0x92] = 1;
        unaff_x25[0x90] = 1;
        unaff_x25[0x8c] = 0x80;
        unaff_x25[0x8d] = 1;
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                  (&stack0x0000dc90,*(undefined8 *)(unaff_x19 + 0x7d30),
                   *(undefined8 *)(unaff_x19 + 0x7d38),&UNK_108cd93a6,0xd);
        plVar14 = in_stack_00006ae8;
        if (in_stack_0000dca0 < 0x180) {
          _memcpy(&stack0x0000b290,uVar23,in_stack_0000dca0);
          (&stack0x0000b290)[in_stack_0000dca0] = 0;
          __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                    (&stack0x000088f0,&stack0x0000b290,in_stack_0000dca0 + 1);
          if ((int)in_stack_000088f0 == 1) {
            in_stack_00006ae0 = (long *)CONCAT44((int)((ulong)in_stack_00006ae0 >> 0x20),1);
            plVar14 = (long *)&UNK_10b4add80;
          }
          else {
            FUN_10602e6c4(&stack0x00006ae0,in_stack_000088f8,pbVar30);
          }
        }
        else {
          FUN_108a81cfc(&stack0x00006ae0,uVar23,in_stack_0000dca0,pbVar30);
        }
        _free(uVar23);
        if (((ulong)in_stack_00006ae0 & 1) != 0) {
LAB_1016dc7d0:
          unaff_x25[0xb6] = 0;
          goto LAB_1016dc7d4;
        }
        unaff_x25[0xb6] = 0;
        FUN_1009db6c0(&stack0x0000b290);
        unaff_x25[0xb5] = 1;
        *(long *)(unaff_x19 + 0x7d48) = in_stack_00010308;
        *(undefined **)(unaff_x19 + 0x7d40) = in_stack_00010300;
        *(long *)(unaff_x19 + 0x7d58) = in_stack_00010318;
        *(undefined **)(unaff_x19 + 0x7d50) = in_stack_00010310;
        *(long *)(unaff_x19 + 0x7d68) = in_stack_00010328;
        *(long *)(unaff_x19 + 0x7d60) = in_stack_00010320;
        *(long *)(unaff_x19 + 0x7d70) = in_stack_00010330;
        FUN_100a888d0(&stack0x0000b290);
        unaff_x25[0xb5] = 0;
        FUN_1016e2954(&stack0x0000b290);
        _memcpy(unaff_x19 + 0x8520,&stack0x0000b290,0x6f8);
        *(long **)(unaff_x19 + 0x8c20) = plVar24;
        *(ulong *)(unaff_x19 + 0x8c18) = uVar18;
        *(code **)(unaff_x19 + 0x8c30) = in_stack_000102f8;
        *(long **)(unaff_x19 + 0x8c28) = in_stack_00006af0;
        *(ulong *)(unaff_x19 + 0x8c40) =
             CONCAT44(uVar35,CONCAT13((char)((ulong)in_stack_00006af0 >> 0x18),
                                      CONCAT21(9,(char)in_stack_00006af0)));
        *(ulong *)(unaff_x19 + 0x8c38) = uVar18 & 0xffffffffffff00ff | 0x100;
        unaff_x25[0xf30] = 0xff;
        unaff_x25[0xf31] = 0xff;
        unaff_x25[0xf32] = 0xff;
        unaff_x25[0xf33] = 0xff;
        unaff_x25[0xf34] = 0xff;
        unaff_x25[0xf35] = 0xff;
        unaff_x25[0xf36] = 0xff;
        unaff_x25[0xf37] = 0xff;
        unaff_x25[0xa2] = 1;
        uVar23 = __ZN14codex_feedback13CodexFeedback3new17h789d83cb1c9a7f6eE();
        *(undefined8 *)(unaff_x19 + 0x7d78) = uVar23;
        unaff_x25[0xa1] = 1;
        FUN_100788bf0(unaff_x19 + 0x7dd8);
        unaff_x25[0xa0] = 1;
        FUN_100788d84(unaff_x19 + 0x7fd0,*(undefined8 *)(unaff_x19 + 0x7d78));
        unaff_x25[0x9f] = 1;
        if ((*(char *)(unaff_x19 + 0x2f0) == '\x01') &&
           (*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000)) {
          uVar23 = *(undefined8 *)(unaff_x19 + 0x2110);
          *(undefined8 *)(unaff_x25 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x2108);
          *(undefined8 *)(unaff_x25 + 0x4a8) = uVar23;
          *(long *)(unaff_x25 + 0x4b0) = unaff_x19 + 0x22d0;
          unaff_x25[0x4c0] = 0;
          auVar34 = FUN_10085cb28(unaff_x19 + 0x81b8,in_stack_000000a8);
          plVar14 = auVar34._8_8_;
          if ((auVar34._0_8_ & 1) != 0) {
            *in_stack_000000a0 = -0x7ffffffffffffffe;
            bVar10 = 0xf;
            goto LAB_1016e0b0c;
          }
          bVar10 = unaff_x25[0x4c0];
          if (bVar10 == 5) {
            FUN_100e48c8c(unaff_x19 + 0x81e0);
          }
          else if (bVar10 == 4) {
            FUN_100e68d90(unaff_x19 + 0x81e0);
          }
          else if (bVar10 == 3) {
            FUN_100e4d670(unaff_x19 + 0x81e0);
          }
          if (plVar14 != (long *)0x0) {
            FUN_100d133f0(unaff_x19 + 0x7fd0);
            lVar29 = **(long **)(unaff_x25 + 0x490);
            **(long **)(unaff_x25 + 0x490) = lVar29 + -1;
            LORelease();
            if (lVar29 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(unaff_x25 + 0x490);
            }
            unaff_x25[0x9f] = 0;
            FUN_100d133f0(unaff_x19 + 0x7dd8);
            lVar29 = **(long **)(unaff_x19 + 0x7fb8);
            **(long **)(unaff_x19 + 0x7fb8) = lVar29 + -1;
            LORelease();
            if (lVar29 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(unaff_x19 + 0x7fb8);
            }
            unaff_x25[0xa0] = 0;
            lVar29 = **(long **)(unaff_x19 + 0x7d78);
            **(long **)(unaff_x19 + 0x7d78) = lVar29 + -1;
            LORelease();
            if (lVar29 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(unaff_x19 + 0x7d78);
            }
            unaff_x25[0xa1] = 0;
            FUN_100ddcc28(unaff_x19 + 0x8520);
            unaff_x25[0xa2] = 0;
            FUN_100e1ab64(unaff_x19 + 0x7d40);
            unaff_x25[0xb5] = 0;
            goto LAB_1016dc7d0;
          }
        }
        lVar29 = *(long *)(unaff_x19 + 0x4830);
        if (lVar29 == -0x7fffffffffffffff) {
          lVar31 = 7;
          unaff_x25[0xb4] = 1;
LAB_1016dca24:
          lVar29 = 7;
          unaff_x25[0xb3] = 1;
          plVar24 = *(long **)(unaff_x19 + 0x48b0);
          if (plVar24 == (long *)0x0) goto LAB_1016dcc7c;
LAB_1016dca3c:
          lVar26 = *plVar24;
          *plVar24 = lVar26 + 1;
          if (lVar26 < 0) goto LAB_1016e14bc;
          in_stack_000102f8 = (code *)((ulong)in_stack_000102f8 & 0xffffffff00000000);
          __ZN11codex_state6log_db10LogDbLayer17start_with_config17h272dec35bf794744E
                    (unaff_x19 + 0x7d80,plVar24,&stack0x0000b290);
          lVar26 = *(long *)(unaff_x19 + 0x7d80);
          unaff_x25[0xb2] = 1;
          if (lVar26 == -0x8000000000000000) goto LAB_1016dcc90;
          __ZN70__LT_codex_state__log_db__LogDbLayer_u20_as_u20_core__clone__Clone_GT_5clone17ha458d0af0f700332E
                    (&stack0x00006ae0,unaff_x19 + 0x7d80);
          if (in_stack_00006ae0 != (long *)0x8000000000000000) {
            in_stack_00010300 = (undefined *)0x8000000000000000;
            in_stack_000102f8 = (code *)0x0;
            FUN_100a8b354(&stack0x000088f0,&stack0x0000b290);
            _memcpy(&stack0x0000b290,&stack0x000088f0,0x1d8);
            _memcpy(&stack0x000068e0,&stack0x0000b290,0x1f8);
          }
        }
        else {
          if (*(long *)(unaff_x19 + 0x4898) == 0) {
            lVar31 = 7;
            unaff_x25[0xb4] = 1;
          }
          else {
            in_stack_00010300 = (undefined *)0x1;
            in_stack_00010310 = (undefined *)0x8000000000000001;
            in_stack_00010308 = 0;
            in_stack_00010328 = -0x7fffffffffffffff;
            in_stack_000102f8 = (code *)0x8000000000000000;
            __ZN123__LT_opentelemetry_sdk__logs__logger_provider__SdkLoggerProvider_u20_as_u20_opentelemetry__logs__logger__LoggerProvider_GT_17logger_with_scope17hbfa78e9946fcc212E
                      (&stack0x000067d0,unaff_x19 + 0x4898,&stack0x0000b290);
            lVar29 = *(long *)(unaff_x19 + 0x4830);
            lVar31 = 6;
            unaff_x25[0xb4] = 1;
            if (lVar29 == -0x7fffffffffffffff) goto LAB_1016dca24;
          }
          if (lVar29 == -0x8000000000000000) goto LAB_1016dca24;
          FUN_1011e8b94(&stack0x0000b290,unaff_x19 + 0x4830);
          lVar29 = **(long **)(unaff_x19 + 0x4890);
          **(long **)(unaff_x19 + 0x4890) = lVar29 + 1;
          if (lVar29 < 0) goto LAB_1016e14bc;
          lVar29 = 6;
          unaff_x25[0xb3] = 1;
          plVar24 = *(long **)(unaff_x19 + 0x48b0);
          if (plVar24 != (long *)0x0) goto LAB_1016dca3c;
LAB_1016dcc7c:
          *(undefined8 *)(unaff_x19 + 0x7d80) = 0x8000000000000000;
          unaff_x25[0xb2] = 1;
LAB_1016dcc90:
          in_stack_00006ae0 = (long *)0x8000000000000000;
        }
        unaff_x25[0xb1] = 1;
        __ZN90__LT_tracing_subscriber__registry__sharded__Registry_u20_as_u20_core__default__Default_GT_7default17h310ae85e486ce566E
                  (&stack0x00007fa0);
        unaff_x25[0xa2] = 0;
        _memcpy(&stack0x000081c0,unaff_x19 + 0x8520,0x730);
        if (0x3f < in_stack_000081b8) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x00007640,&stack0x000081c0,0x730);
        _memcpy(&stack0x00007d70,&stack0x00007fa0,0x220);
        unaff_x25[0xa0] = 0;
        _memcpy(&stack0x000081c0,unaff_x19 + 0x7dd8,0x1f8);
        if (0x3f < in_stack_00007f88) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x00006ae0,&stack0x000081c0,0x1f8);
        _memcpy(&stack0x00006cd8,&stack0x00007640,0x958);
        unaff_x25[0x9f] = 0;
        _memcpy(&stack0x00007640,unaff_x19 + 0x7fd0,0x1e8);
        if (0x3f < in_stack_00007620) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x0000dc90,&stack0x00007640,0x1e8);
        _memcpy(&stack0x0000de78,&stack0x00006ae0,0xb58);
        unaff_x25[0xb1] = 0;
        _memcpy(&stack0x00006ae0,&stack0x000068e0,0x200);
        if ((in_stack_00006ae0 != (long *)0x2) && (0x3f < in_stack_0000e9b8)) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x0000bfe0,&stack0x00006ae8,0x1f8);
        _memcpy(&stack0x0000b290,&stack0x0000dc90,0xd48);
        unaff_x25[0xb4] = 0;
        FUN_100696230(&stack0x0000b290,0xd4434e71b846d36,0x889f678fecebcd05);
        if ((lVar31 != 7) && (0x3f < in_stack_0000bfb8)) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x000088f0,&stack0x0000b290,0xf50);
        unaff_x25[0xb3] = 0;
        if (lVar31 == 7) {
          bVar10 = FUN_100696230(&stack0x000088f0,0xd4434e71b846d36,0x889f678fecebcd05);
          puVar19 = extraout_x1;
        }
        else {
          puVar19 = &stack0x000098b0;
          bVar10 = 1;
        }
        if ((lVar29 != 7) && (0x3f < in_stack_00009618)) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x0000b2a0,&stack0x000088f0,0xfd0);
        *(undefined1 *)(in_stack_00000078 + 0x80) = 0;
        *(bool *)(in_stack_00000078 + 0x81) = lVar29 != 7;
        *(byte *)(in_stack_00000078 + 0x82) = bVar10 & puVar19 != (undefined1 *)0x0;
        plVar14 = (long *)_malloc(0x1088);
        if (plVar14 == (long *)0x0) {
          func_0x0001087c906c(8,0x1088);
          goto LAB_1016e14bc;
        }
        _memcpy(plVar14,&stack0x0000b290,0x1088);
        lVar29 = 1;
        puVar40 = &UNK_10b2214a0;
        __ZN12tracing_core8callsite17register_dispatch17hc97428c55d0217f6E(&stack0x0000b290);
        if (___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE == 0) {
          ___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE = 1;
          plVar24 = plVar14 + 2;
          if (___ZN12tracing_core10dispatcher15GLOBAL_DISPATCH17ha0df1ee9753ea710E != 0) {
            lVar29 = *plRam000000010b63daa8;
            *plRam000000010b63daa8 = lVar29 + -1;
            LORelease();
            if (lVar29 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E(0x10b63daa8);
            }
          }
          ___ZN12tracing_core10dispatcher15GLOBAL_DISPATCH17ha0df1ee9753ea710E = 0;
          puRam000000010b63dab0 = &UNK_10b2214a0;
          ___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE = 2;
          ___ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE = 1;
          lVar29 = 5 - ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
          puVar40 = (undefined *)0x8;
          in_stack_000102f8 = (code *)0x0;
          plVar14 = (long *)0x0;
          plRam000000010b63daa8 = plVar24;
          uVar18 = __ZN11tracing_log10log_tracer7Builder4init17h60d7de083b368112E(&stack0x0000b290);
          if ((uVar18 & 1) != 0) {
            puVar15 = (undefined8 *)&UNK_10b22c598;
            goto LAB_1016dd2bc;
          }
        }
        else {
          lVar31 = *plVar14;
          *plVar14 = lVar31 + -1;
          LORelease();
          if (lVar31 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E
                      ((ulong)&stack0x000088f0 | 8);
          }
          puVar15 = (undefined8 *)&UNK_10b22c610;
LAB_1016dd2bc:
          if ((code *)*puVar15 != (code *)0x0) {
            (*(code *)*puVar15)(1);
          }
          if (puVar15[1] != 0) {
            _free(1);
          }
        }
        unaff_x25[0xb0] = 0;
        _memcpy(&stack0x00007640,unaff_x19 + 0x248,0x120);
        unaff_x25[0xaf] = 0;
        unaff_x25[0xa8] = 0;
        unaff_x25[0xa9] = 0;
        bVar10 = unaff_x25[0x95];
        unaff_x25[0xac] = 0;
        unaff_x25[0xab] = 0;
        _memcpy(&stack0x0000dc90,unaff_x19 + 0x22d0,0x2548);
        _memcpy(&stack0x00006ae0,unaff_x19 + 0x2118,0x1b8);
        unaff_x25[0xad] = 0;
        unaff_x25[0xa4] = 0;
        unaff_x25[0xa5] = 0;
        unaff_x25[0xa6] = 0;
        unaff_x25[0xa7] = 0;
        uVar33 = *(undefined8 *)(unaff_x19 + 0x20f8);
        uVar32 = *(undefined8 *)(unaff_x19 + 0x20f0);
        unaff_x25[0xa1] = 0;
        uVar20 = *(undefined8 *)(unaff_x19 + 0x7d78);
        unaff_x25[0xb2] = 0;
        unaff_x25[0xa3] = 0;
        uVar23 = *(undefined8 *)(unaff_x19 + 0x48b0);
        unaff_x25[0xaa] = 0;
        uVar25 = *(undefined8 *)(unaff_x19 + 0x5d8);
        _memcpy(&stack0x0000d810,&stack0x00007640,0x120);
        _memcpy(&stack0x0000b290,&stack0x0000dc90,0x2548);
        _memcpy(&stack0x0000d930,&stack0x00006ae0,0x1b8);
        _memcpy(&stack0x000088f0,&stack0x0000b290,0x29a0);
        _memcpy(unaff_x19 + 0x7de0,&stack0x000088f0,0x29a0);
        *in_stack_00000068 = uVar20;
        in_stack_00000068[1] = uVar25;
        in_stack_00000068[3] = uVar33;
        in_stack_00000068[2] = uVar32;
        in_stack_00000068[4] = uVar23;
        *in_stack_00000070 = bVar10;
        in_stack_00000070[1] = 0;
        FUN_10165a0fc(&stack0x0000b290,unaff_x19 + 0x7de0,in_stack_000000a8);
        if (lVar29 == -0x7ffffffffffffffe) {
          *in_stack_000000a0 = -0x7ffffffffffffffe;
          bVar10 = 0x10;
          goto LAB_1016e0b0c;
        }
        FUN_100e3ede4(unaff_x19 + 0x7de0);
        if (lVar29 == -0x7fffffffffffffff) {
          lVar31 = plVar14[1];
          if (lVar31 == 0) {
            auVar34 = (**(code **)(*plVar14 + 8))(plVar14);
            iVar13 = (**(code **)(auVar34._8_8_ + 0x20))(auVar34._0_8_,&stack0x0000b290);
          }
          else {
            lVar26 = plVar14[2];
            auVar34 = (**(code **)(*plVar14 + 8))(plVar14);
            iVar13 = (**(code **)(lVar26 + 0x28))
                               (lVar31,auVar34._0_8_,auVar34._8_8_,&stack0x0000b290);
          }
          if (iVar13 != 0) {
            func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000081c0,&UNK_10b235000,&UNK_10b2346c0);
LAB_1016e14bc:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1016e14c0);
            (*pcVar9)();
          }
          puVar15 = (undefined8 *)_malloc(0x18);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x18);
            goto LAB_1016e14bc;
          }
          *puVar15 = 0;
          puVar15[1] = 1;
          puVar15[2] = 0;
          puVar16 = (undefined8 *)_malloc(0x18);
          if (puVar16 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x18);
            goto LAB_1016e14bc;
          }
          *puVar16 = puVar15;
          puVar16[1] = &UNK_10b209118;
          *(undefined1 *)(puVar16 + 2) = 0x28;
          (**(code **)*plVar14)(plVar14);
          plVar14 = (long *)((long)puVar16 + 1);
          puVar40 = in_stack_00010280;
          in_stack_000102f8 = in_stack_00010288;
          in_stack_00010300 = in_stack_00010290;
          in_stack_00010308 = in_stack_00010298;
          in_stack_00010310 = in_stack_000102a0;
          in_stack_00010318 = in_stack_000102a8;
          in_stack_00010320 = in_stack_000102b0;
          in_stack_00010328 = in_stack_000102b8;
          in_stack_00010330 = in_stack_000102c0;
          in_stack_00010338 = in_stack_000102c8;
          in_stack_00010340 = in_stack_000102d0;
          in_stack_00010348 = in_stack_000102d8;
        }
        in_stack_000102d8 = in_stack_00010348;
        in_stack_000102d0 = in_stack_00010340;
        in_stack_000102c8 = in_stack_00010338;
        in_stack_000102c0 = in_stack_00010330;
        in_stack_000102b8 = in_stack_00010328;
        in_stack_000102b0 = in_stack_00010320;
        in_stack_000102a8 = in_stack_00010318;
        in_stack_000102a0 = in_stack_00010310;
        in_stack_00010298 = in_stack_00010308;
        in_stack_00010290 = in_stack_00010300;
        in_stack_00010288 = in_stack_000102f8;
        in_stack_00010280 = puVar40;
        unaff_x25[0xb1] = 0;
        unaff_x25[0xb2] = 0;
        unaff_x25[0xb3] = 0;
        unaff_x25[0xb4] = 0;
        unaff_x25[0x9f] = 0;
        unaff_x25[0xa0] = 0;
        unaff_x25[0xa1] = 0;
        unaff_x25[0xa2] = 0;
        FUN_100e1ab64(unaff_x19 + 0x7d40);
        unaff_x25[0xb5] = 0;
        unaff_x25[0xb6] = 0;
        if (*(long *)(unaff_x19 + 0x7d28) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x7d30));
        }
        unaff_x25[0xa3] = 0;
        if (*(long *)(unaff_x19 + 0x4830) != -0x7fffffffffffffff) {
          FUN_100dfc5b8(unaff_x19 + 0x4830);
        }
        if (*(long *)(unaff_x19 + 0x4818) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4820));
        }
        unaff_x25[0xa4] = 0;
        unaff_x25[0xa5] = 0;
        unaff_x25[0xb7] = 0;
        unaff_x25[0xb8] = 0;
        if ((*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x2100) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x2108));
        }
        unaff_x25[0xa6] = 0;
        unaff_x25[0xb9] = 0;
        FUN_100e04ad4(unaff_x19 + 0x6c0);
        unaff_x25[0xa7] = 0;
        unaff_x25[0xa8] = 0;
        unaff_x25[0xa9] = 0;
        if ((*(ulong *)(unaff_x19 + 0x5f8) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x600));
        }
        if ((((unaff_x25[0x9d] & 1) != 0) && (*(long *)(unaff_x19 + 0x5e0) != -0x8000000000000000))
           && (*(long *)(unaff_x19 + 0x5e0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x5e8));
        }
        unaff_x25[0x9d] = 0;
        unaff_x25[0xaa] = 0;
        unaff_x25[0xba] = 0;
        unaff_x25[0xab] = 0;
        unaff_x25[0xac] = 0;
        FUN_100e01cdc(unaff_x19 + 0x4d8);
        if (*(long *)(unaff_x19 + 0x4c0) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4c8));
        }
        unaff_x25[0xad] = 0;
        lVar26 = *(long *)(unaff_x19 + 0x498);
        lVar31 = *(long *)(unaff_x19 + 0x4a0);
        if (lVar31 != 0) {
          puVar15 = (undefined8 *)(lVar26 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        if (*(long *)(unaff_x19 + 0x490) != 0) {
          _free(lVar26);
        }
        unaff_x25[0xae] = 0;
        unaff_x25[0xaf] = 0;
        unaff_x25[0x9e] = 0;
        goto LAB_1016e0ad8;
      }
    }
    else {
      *(long *)(unaff_x19 + 0x7e18) = lVar29;
      pbVar1 = unaff_x25 + 0x109;
      unaff_x25[0x109] = 0;
      plVar24 = (long *)(unaff_x19 + 0x7df8);
      unaff_x25[0x108] = 0;
      *(long *)(unaff_x19 + 0x7df8) = lVar29;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (unaff_x19 + 0x7e00,*(undefined8 *)(unaff_x19 + 0x3ee8),
                 *(undefined8 *)(unaff_x19 + 0x3ef0),&UNK_108ed2e30,0xe);
      *(long *)(unaff_x19 + 0x7e28) = unaff_x19 + 0x7e00;
      unaff_x25[0x148] = 0;
      plVar14 = (long *)(unaff_x19 + 0x7e28);
      FUN_100fbca20(&stack0x0000b290,plVar14,in_stack_000000a8);
      if ((char)in_stack_000102e0 != '\x02') {
        if (unaff_x25[0x148] == 3) {
          if (unaff_x25[0x140] == 3) {
            plVar36 = *(long **)(unaff_x19 + 0x7e50);
            if (*plVar36 == 0xcc) {
              *plVar36 = 0x84;
            }
            else {
              (**(code **)(plVar36[2] + 0x20))();
            }
          }
          else if ((unaff_x25[0x140] == 0) && (*(long *)(unaff_x19 + 0x7e38) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x7e40));
          }
        }
        if (((ulong)in_stack_000102e0 & 1) == 0) {
          if (((ulong)in_stack_000102e0 & 0x100) == 0) goto LAB_1016dfd80;
          __ZN3std4path4Path11to_path_buf17hc9bd4cca887f646eE
                    (&stack0x0000b290,*(undefined8 *)(*plVar24 + 0x1c18),
                     *(undefined8 *)(*plVar24 + 0x1c20));
          uVar23 = *(undefined8 *)(*plVar24 + 0x1b88);
          lVar29 = *(long *)(*plVar24 + 0x1b90);
          if (lVar29 == 0) {
            lVar31 = 1;
          }
          else {
            lVar31 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar29,1);
            if (lVar31 == 0) {
              func_0x0001087c9084(1,lVar29);
              goto LAB_1016e14bc;
            }
          }
          _memcpy(lVar31,uVar23,lVar29);
          *(long **)(unaff_x19 + 0x7e30) = in_stack_000102e8;
          *plVar14 = (long)in_stack_000102e0;
          *(long **)(unaff_x19 + 0x7e38) = in_stack_000102f0;
          *(long *)(unaff_x19 + 0x7e40) = lVar29;
          *(long *)(unaff_x19 + 0x7e48) = lVar31;
          *(long *)(unaff_x19 + 0x7e50) = lVar29;
          unaff_x25[0xb10] = 0;
          in_stack_000102f0 = *(long **)(unaff_x19 + 0x7e38);
          plVar38 = *(long **)(unaff_x19 + 0x7e30);
          plVar36 = (long *)*plVar14;
          in_stack_00010300 = *(undefined **)(unaff_x19 + 0x7e48);
          in_stack_000102f8 = *(code **)(unaff_x19 + 0x7e40);
          in_stack_00010308 = *(long *)(unaff_x19 + 0x7e50);
          *(long **)(unaff_x19 + 0x7e60) = plVar38;
          *(long **)(unaff_x19 + 0x7e58) = plVar36;
          *(code **)(unaff_x19 + 0x7e70) = in_stack_000102f8;
          *(long **)(unaff_x19 + 0x7e68) = in_stack_000102f0;
          *(long *)(unaff_x19 + 0x7e80) = in_stack_00010308;
          *(undefined **)(unaff_x19 + 0x7e78) = in_stack_00010300;
          *(undefined8 *)(unaff_x19 + 0x7e88) = 0;
          unaff_x25[0x2a8] = 0;
          auVar34 = FUN_1006e8198(unaff_x19 + 0x7e58,in_stack_000000a8);
          puVar15 = auVar34._8_8_;
          if (auVar34._0_8_ == 2) {
            unaff_x25[0xb10] = 3;
            *pbVar1 = 4;
            goto LAB_1016df8fc;
          }
          FUN_100e7fdb8(unaff_x19 + 0x7e58);
          unaff_x25[0xb10] = 1;
          if ((auVar34._0_8_ & 1) != 0) {
            __ZN11codex_state9telemetry15record_fallback17h4fef7a0f859d97adE
                      (&UNK_108cad326,0xc,&UNK_108c98240,8,0);
            (**(code **)*puVar15)();
            unaff_x25[0x108] = 0;
            goto LAB_1016dff50;
          }
          unaff_x25[0x108] = 0;
          uVar23 = *(undefined8 *)(*(long *)(unaff_x19 + 0x7df8) + 0x1c18);
          uVar20 = *(undefined8 *)(*(long *)(unaff_x19 + 0x7df8) + 0x1c20);
          *(undefined8 *)(unaff_x19 + 0x7ec8) = uVar23;
          *(undefined8 *)(unaff_x19 + 0x7ed0) = uVar20;
          *(undefined8 **)(unaff_x19 + 0x7ee0) = puVar15;
          unaff_x25[0x1d1] = 0;
          unaff_x25[0x1d0] = 1;
          *(undefined8 **)(unaff_x19 + 0x7ed8) = puVar15;
          *(undefined8 *)(unaff_x19 + 0x7e28) = uVar23;
          *(undefined8 *)(unaff_x19 + 0x7e30) = uVar20;
          *(undefined8 **)(unaff_x19 + 0x7e38) = puVar15 + 2;
          unaff_x25[0x130] = 0;
          FUN_1006f0d5c(&stack0x0000b290,unaff_x19 + 0x7e38,in_stack_000000a8);
          if (plVar36 == (long *)0x8000000000000002) {
            unaff_x25[0x1d1] = 3;
            bVar21 = true;
          }
          else {
            cVar11 = (char)((ulong)in_stack_00010300 >> 0x20);
            FUN_100d535a0(unaff_x19 + 0x7e38);
            plVar39 = plVar38;
            if (plVar36 == (long *)0x8000000000000001) {
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                  ((bRam000000010b62ff10 - 1 < 2 ||
                   ((bRam000000010b62ff10 != 0 &&
                    (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                                        ), cVar11 != '\0')))))) &&
                 (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                                     ), (uVar18 & 1) != 0)) {
                in_stack_00007640 = *(long **)(unaff_x19 + 0x7e28);
                in_stack_00007648 = *(long **)(unaff_x19 + 0x7e30);
                plVar36 = (long *)&stack0x00007640;
                in_stack_000102f0 = (long *)&stack0x000068e0;
                in_stack_000102f8 =
                     __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                ;
                in_stack_000102e0 = (long *)0x1;
                in_stack_000102e8 = (long *)&stack0x00007fa0;
                FUN_10077b390(&stack0x000088f0);
                plVar39 = (long *)&
                                  __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                ;
              }
              else {
                lVar29 = 
                ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_0000dca0 =
                       *(ulong *)(
                                 ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                                 + 0x28);
                  auVar8._8_8_ = *(undefined8 *)
                                  (
                                  ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                                  + 0x20);
                  auVar8._0_8_ = 2;
                  auVar34._8_8_ =
                       *(undefined8 *)
                        (
                        ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                        + 0x20);
                  auVar34._0_8_ = 2;
                  puVar40 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar40 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar13 = (**(code **)(puVar40 + 0x18))(puVar2,&stack0x0000dc90);
                  if (iVar13 != 0) {
                    in_stack_00007640 = *(long **)(unaff_x19 + 0x7e28);
                    in_stack_00007648 = *(long **)(unaff_x19 + 0x7e30);
                    plVar36 = (long *)&stack0x00007640;
                    plVar39 = (long *)&
                                      __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                    ;
                    in_stack_000102f0 = (long *)&stack0x000068e0;
                    in_stack_000102f8 =
                         __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                    ;
                    in_stack_000102e0 = (long *)0x1;
                    in_stack_000102e8 = (long *)&stack0x00007fa0;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar29,puVar2,puVar40,&stack0x0000dc90,&stack0x000088f0);
                    auVar34 = auVar8;
                  }
                }
              }
              __ZN11codex_state9telemetry15record_fallback17h4fef7a0f859d97adE
                        (&UNK_108cad326,0xc,&UNK_108c98240,8,0);
              (**(code **)*plVar38)();
              plVar37 = plVar36;
LAB_1016e070c:
              plVar14 = (long *)0x0;
              plVar36 = plVar37;
              plVar38 = plVar39;
            }
            else {
              if (cVar11 != '\x02') {
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                   (((bRam000000010b62ff28 - 1 < 2 ||
                     ((bRam000000010b62ff28 != 0 &&
                      (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                                          ), cVar12 != '\0')))) &&
                    (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                                        ), (uVar18 & 1) != 0)))) {
                  in_stack_00007640 = (long *)&UNK_108ca815e;
                  if (cVar11 != '\0') {
                    in_stack_00007640 = (long *)&UNK_108ca8165;
                  }
                  in_stack_00007648 = (long *)0x7;
                  in_stack_000102f0 = (long *)&stack0x00007640;
                  in_stack_000102f8 = (code *)&DAT_100c7b3a0;
                  in_stack_000102e0 = (long *)0x1;
                  in_stack_000102e8 = (long *)&stack0x000068e0;
                  FUN_10077b4cc(&stack0x000088f0);
                  plVar37 = (long *)&stack0x000081c0;
                  plVar39 = (long *)&
                                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                }
                else {
                  lVar29 = 
                  ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                  ;
                  plVar37 = plVar36;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    in_stack_00006ae8 =
                         *(long **)(
                                   ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                                   + 0x20);
                    in_stack_00006ae0 = (long *)0x2;
                    puVar40 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar40 = &UNK_10b3c24c8;
                    }
                    puVar2 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_109adfc03;
                    }
                    iVar13 = (**(code **)(puVar40 + 0x18))(puVar2,&stack0x00006ae0);
                    if (iVar13 != 0) {
                      in_stack_00007640 = (long *)&UNK_108ca815e;
                      if (cVar11 != '\0') {
                        in_stack_00007640 = (long *)&UNK_108ca8165;
                      }
                      in_stack_00007648 = (long *)0x7;
                      plVar37 = (long *)&stack0x000081c0;
                      plVar39 = (long *)&
                                        __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                      ;
                      in_stack_000102f0 = (long *)&stack0x00007640;
                      in_stack_000102f8 = (code *)&DAT_100c7b3a0;
                      in_stack_000102e0 = (long *)0x1;
                      in_stack_000102e8 = (long *)&stack0x000068e0;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar29,puVar2,puVar40,&stack0x00006ae0,&stack0x000088f0);
                    }
                  }
                }
                __ZN11codex_state9telemetry15record_fallback17h4fef7a0f859d97adE
                          (&UNK_108cad326,0xc,&UNK_108cad3e1,0x13,0);
                if (((ulong)plVar36 & 0x7fffffffffffffff) != 0) {
                  _free(plVar38);
                }
                goto LAB_1016e070c;
              }
              unaff_x25[0x1d0] = 0;
              plVar14 = *(long **)(unaff_x19 + 0x7ed8);
              if (((ulong)plVar36 & 0x7fffffffffffffff) != 0) {
                _free(plVar38);
              }
            }
            if ((unaff_x25[0x1d0] & 1) != 0) {
              lVar29 = **(long **)(unaff_x19 + 0x7ed8);
              **(long **)(unaff_x19 + 0x7ed8) = lVar29 + -1;
              LORelease();
              if (lVar29 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x7ed8);
              }
            }
            bVar21 = false;
            unaff_x25[0x1d0] = 0;
            unaff_x25[0x1d1] = 1;
          }
          if (bVar21) {
            *pbVar1 = 5;
            goto LAB_1016df8fc;
          }
          FUN_100c97dac(unaff_x19 + 0x7e28);
          unaff_x25[0x108] = 0;
          lVar29 = *(long *)(unaff_x19 + 0x7e00);
          in_stack_000088f0 = in_stack_000102e0;
          in_stack_000088f8 = in_stack_000102e8;
          in_stack_000102e0 = plVar36;
          in_stack_000102e8 = plVar38;
          auVar7 = auVar34;
        }
        else {
          if (((ulong)in_stack_000102e8 & 3) == 1) {
            uVar23 = *(undefined8 *)((long)in_stack_000102e8 + -1);
            puVar15 = *(undefined8 **)((long)in_stack_000102e8 + 7);
            pcVar9 = (code *)*puVar15;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(uVar23);
            }
            if (puVar15[1] != 0) {
              _free(uVar23);
            }
            _free((undefined8 *)((long)in_stack_000102e8 + -1));
          }
LAB_1016dfd80:
          plVar36 = (long *)&UNK_108ed3a13;
          plVar38 = (long *)0x6;
          in_stack_000102f0 = (long *)&UNK_108cad326;
          in_stack_000102f8 = (code *)0xc;
          in_stack_00010300 = &UNK_108ed3a19;
          in_stack_00010308 = 6;
          in_stack_00010310 = &UNK_108cad16e;
          in_stack_00010318 = 0xe;
          in_stack_000102e0 = in_stack_000088f0;
          in_stack_000102e8 = in_stack_000088f8;
          if ((lRam000000010b6302b0 == 0) &&
             (lVar29 = lRam000000010b6302a0 +
                       (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
             auVar34 = auVar6, lVar29 != 0)) {
            (**(code **)(lRam000000010b6302a8 + 0x18))
                      (lVar29,&UNK_108ed3a1f,0x1b,1,&stack0x0000b290,2);
            auVar34 = auVar7;
          }
LAB_1016dff50:
          plVar14 = (long *)0x0;
          lVar29 = *(long *)(unaff_x19 + 0x7e00);
          in_stack_000088f0 = in_stack_000102e0;
          in_stack_000088f8 = in_stack_000102e8;
          in_stack_000102e0 = plVar36;
          in_stack_000102e8 = plVar38;
          auVar7 = auVar34;
        }
        if (lVar29 != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x7e08));
        }
        *pbVar1 = 1;
        FUN_100ceba70(plVar24);
LAB_1016dff84:
        lVar29 = 0;
        plVar24 = in_stack_00007640;
        in_stack_00006af0 = in_stack_000102f0;
        goto LAB_1016dff88;
      }
      *pbVar1 = 3;
LAB_1016df8fc:
      *pbVar30 = 4;
    }
LAB_1016dffa0:
    *in_stack_000000a0 = -0x7ffffffffffffffe;
    bVar10 = 10;
  }
LAB_1016e0b0c:
  unaff_x25[0x94] = bVar10;
  return;
}

