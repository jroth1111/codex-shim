
/* WARNING: Removing unreachable block (ram,0x000100f95ce0) */

undefined1  [16] FUN_100f9565c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  bool bVar5;
  long lVar6;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  double dVar7;
  long lVar8;
  long lVar9;
  undefined1 *in_stack_00000020;
  undefined *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined1 uStack0000000000000040;
  undefined7 uStack0000000000000041;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  uVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x00000020,param_2,s_requirements_____108af0630,unaff_x29 + -0xf8);
  lVar9 = in_stack_00000030;
  lVar8 = (long)in_stack_00000028;
  lVar6 = (long)in_stack_00000020;
  if ((uVar2 & 1) != 0) {
    func_0x000108a07a3c(&UNK_108cc3daa,0x37,unaff_x29 + -0xf8,&UNK_10b235000,&UNK_10b2346c0);
    goto LAB_100f9616c;
  }
  if (in_stack_00000020 == (undefined1 *)0x8000000000000000) {
    bVar5 = true;
    lVar6 = -0x8000000000000000;
  }
  else {
    if (in_stack_00000030 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00000030,1);
      if (lVar3 == 0) {
        func_0x0001087c9084(1,lVar9);
        goto LAB_100f9616c;
      }
    }
    _memcpy(lVar3,lVar8,lVar9);
    bVar5 = false;
  }
  FUN_101497a9c(&stack0x00000020,&stack0x00004e80,unaff_x29 + -0x90,&stack0x00004aa0);
  unaff_x27[0xd] = in_stack_00000030;
  unaff_x27[0xc] = (long)in_stack_00000028;
  unaff_x27[0xf] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x27[0xe] = in_stack_00000038;
  unaff_x27[0x11] = in_stack_00000050;
  unaff_x27[0x10] = in_stack_00000048;
  unaff_x27[0x13] = in_stack_00000060;
  unaff_x27[0x12] = in_stack_00000058;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000068;
  if (*(long *)(unaff_x29 + -0xe0) != unaff_x28) {
    FUN_100de6690(unaff_x29 + -0xe0);
  }
  if (lVar6 == 0) {
    bVar5 = true;
  }
  if (!bVar5) {
    _free(lVar8);
  }
  puVar4 = (undefined8 *)_malloc(9);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,9);
    goto LAB_100f9616c;
  }
  *(undefined1 *)(puVar4 + 1) = 0x74;
  *puVar4 = 0x726f70736e617274;
  *(undefined8 *)(unaff_x29 + -0x90) = 9;
  *(undefined8 **)(unaff_x29 + -0x88) = puVar4;
  *(undefined8 *)(unaff_x29 + -0x80) = 9;
  func_0x000100684748(&stack0x00000020,&stack0x00004dd0);
  if (in_stack_00000020 == (undefined1 *)unaff_x28) {
    *(undefined **)(unaff_x29 + -0xf8) = in_stack_00000028;
    func_0x000108a07a3c(&UNK_108cc408f,0x2b,unaff_x29 + -0xf8,&UNK_10b234f40,&UNK_10b239ca0);
    goto LAB_100f9616c;
  }
  unaff_x26[5] = in_stack_00000048;
  unaff_x26[4] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x26[7] = in_stack_00000058;
  unaff_x26[6] = in_stack_00000050;
  unaff_x26[1] = (long)in_stack_00000028;
  *unaff_x26 = (long)in_stack_00000020;
  unaff_x26[3] = in_stack_00000038;
  unaff_x26[2] = in_stack_00000030;
  FUN_101497a9c(&stack0x00000020,&stack0x00004e80,unaff_x29 + -0x90,&stack0x00004aa0);
  unaff_x27[0xd] = in_stack_00000030;
  unaff_x27[0xc] = (long)in_stack_00000028;
  unaff_x27[0xf] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x27[0xe] = in_stack_00000038;
  unaff_x27[0x11] = in_stack_00000050;
  unaff_x27[0x10] = in_stack_00000048;
  unaff_x27[0x13] = in_stack_00000060;
  unaff_x27[0x12] = in_stack_00000058;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000068;
  if (*(long *)(unaff_x29 + -0xe0) != unaff_x28) {
    FUN_100de6690(unaff_x29 + -0xe0);
  }
  puVar4 = (undefined8 *)_malloc(0xd);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xd);
    goto LAB_100f9616c;
  }
  *puVar4 = 0x5f64656c62616e65;
  *(undefined8 *)((long)puVar4 + 5) = 0x736c6f6f745f6465;
  *(undefined8 *)(unaff_x29 + -0xf8) = 0xd;
  *(undefined8 **)(unaff_x29 + -0xf0) = puVar4;
  *(undefined8 *)(unaff_x29 + -0xe8) = 0xd;
  if (*(long *)(unaff_x25 + -0x100) == -0x8000000000000000) {
    *(undefined8 *)(unaff_x29 + -0x90) = 0x8000000000000000;
LAB_100f95878:
    lVar6 = -0x8000000000000000;
    in_stack_00000020 = (undefined1 *)0x8000000000000000;
    bVar5 = true;
  }
  else {
    FUN_101146714(unaff_x29 + -0x90,*(undefined8 *)(unaff_x25 + -0xf8),
                  *(undefined8 *)(unaff_x25 + -0xf0));
    lVar6 = *(long *)(unaff_x29 + -0x90);
    if (lVar6 == -0x8000000000000000) goto LAB_100f95878;
    func_0x000100633f00(&stack0x00000020,*(undefined8 *)(unaff_x29 + -0x88),
                        *(undefined8 *)(unaff_x29 + -0x80));
    if (in_stack_00000020 == (undefined1 *)unaff_x28) {
      *(undefined **)(unaff_x29 + -0x78) = in_stack_00000028;
      func_0x000108a07a3c(&UNK_108cc408f,0x2b,unaff_x29 + -0x78,&UNK_10b234f40,&UNK_10b239ca0);
      goto LAB_100f9616c;
    }
    bVar5 = false;
  }
  unaff_x26[5] = in_stack_00000048;
  unaff_x26[4] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x26[7] = in_stack_00000058;
  unaff_x26[6] = in_stack_00000050;
  unaff_x26[1] = (long)in_stack_00000028;
  *unaff_x26 = (long)in_stack_00000020;
  unaff_x26[3] = in_stack_00000038;
  unaff_x26[2] = in_stack_00000030;
  FUN_101497a9c(&stack0x00000020,&stack0x00004e80,unaff_x29 + -0xf8,&stack0x00004aa0);
  unaff_x27[0xd] = in_stack_00000030;
  unaff_x27[0xc] = (long)in_stack_00000028;
  unaff_x27[0xf] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x27[0xe] = in_stack_00000038;
  unaff_x27[0x11] = in_stack_00000050;
  unaff_x27[0x10] = in_stack_00000048;
  unaff_x27[0x13] = in_stack_00000060;
  unaff_x27[0x12] = in_stack_00000058;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000068;
  if (*(long *)(unaff_x29 + -0xe0) != unaff_x28) {
    FUN_100de6690(unaff_x29 + -0xe0);
  }
  if (!bVar5) {
    lVar8 = *(long *)(unaff_x29 + -0x88);
    lVar9 = *(long *)(unaff_x29 + -0x80);
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar6 != 0) {
      _free(lVar8);
    }
  }
  puVar4 = (undefined8 *)_malloc(0xe);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xe);
    goto LAB_100f9616c;
  }
  *puVar4 = 0x64656c6261736964;
  *(undefined8 *)((long)puVar4 + 6) = 0x736c6f6f745f6465;
  *(undefined8 *)(unaff_x29 + -0xf8) = 0xe;
  *(undefined8 **)(unaff_x29 + -0xf0) = puVar4;
  *(undefined8 *)(unaff_x29 + -0xe8) = 0xe;
  if (*(long *)(unaff_x25 + -0xe8) == -0x8000000000000000) {
    *(undefined8 *)(unaff_x29 + -0x90) = 0x8000000000000000;
LAB_100f959b4:
    lVar6 = -0x8000000000000000;
    in_stack_00000020 = (undefined1 *)0x8000000000000000;
    bVar5 = true;
  }
  else {
    FUN_101146714(unaff_x29 + -0x90,*(undefined8 *)(unaff_x25 + -0xe0),
                  *(undefined8 *)(unaff_x25 + -0xd8));
    lVar6 = *(long *)(unaff_x29 + -0x90);
    if (lVar6 == -0x8000000000000000) goto LAB_100f959b4;
    func_0x000100633f00(&stack0x00000020,*(undefined8 *)(unaff_x29 + -0x88),
                        *(undefined8 *)(unaff_x29 + -0x80));
    if (in_stack_00000020 == (undefined1 *)unaff_x28) {
      *(undefined **)(unaff_x29 + -0x78) = in_stack_00000028;
      func_0x000108a07a3c(&UNK_108cc408f,0x2b,unaff_x29 + -0x78,&UNK_10b234f40,&UNK_10b239ca0);
      goto LAB_100f9616c;
    }
    bVar5 = false;
  }
  unaff_x26[5] = in_stack_00000048;
  unaff_x26[4] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x26[7] = in_stack_00000058;
  unaff_x26[6] = in_stack_00000050;
  unaff_x26[1] = (long)in_stack_00000028;
  *unaff_x26 = (long)in_stack_00000020;
  unaff_x26[3] = in_stack_00000038;
  unaff_x26[2] = in_stack_00000030;
  FUN_101497a9c(&stack0x00000020,&stack0x00004e80,unaff_x29 + -0xf8,&stack0x00004aa0);
  unaff_x27[0xd] = in_stack_00000030;
  unaff_x27[0xc] = (long)in_stack_00000028;
  unaff_x27[0xf] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
  unaff_x27[0xe] = in_stack_00000038;
  unaff_x27[0x11] = in_stack_00000050;
  unaff_x27[0x10] = in_stack_00000048;
  unaff_x27[0x13] = in_stack_00000060;
  unaff_x27[0x12] = in_stack_00000058;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000068;
  if (*(long *)(unaff_x29 + -0xe0) != unaff_x28) {
    FUN_100de6690(unaff_x29 + -0xe0);
  }
  if (!bVar5) {
    lVar8 = *(long *)(unaff_x29 + -0x88);
    lVar9 = *(long *)(unaff_x29 + -0x80);
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar6 != 0) {
      _free(lVar8);
    }
  }
  puVar4 = (undefined8 *)_malloc(0x13);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x13);
  }
  else {
    *(undefined4 *)((long)puVar4 + 0xf) = 0x6365735f;
    puVar4[1] = 0x5f74756f656d6974;
    *puVar4 = 0x5f70757472617473;
    *(undefined8 *)(unaff_x29 + -0x90) = 0x13;
    *(undefined8 **)(unaff_x29 + -0x88) = puVar4;
    *(undefined8 *)(unaff_x29 + -0x80) = 0x13;
    if (*(uint *)(unaff_x25 + -0x50) != 1000000000) {
      dVar7 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x25 + -0x58));
      dVar7 = (double)*(uint *)(unaff_x25 + -0x50) / 1000000000.0 + dVar7;
      in_stack_00000020 = (undefined1 *)0x8000000000000000;
      if ((dVar7 != INFINITY) && (!NAN(dVar7))) {
        FUN_105dc6c20(&stack0x00000020);
      }
    }
    FUN_101497a9c(&stack0x00000020,&stack0x00004e80,unaff_x29 + -0x90,&stack0x00004aa0);
    unaff_x27[0xd] = in_stack_00000030;
    unaff_x27[0xc] = (long)in_stack_00000028;
    unaff_x27[0xf] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
    unaff_x27[0xe] = in_stack_00000038;
    unaff_x27[0x11] = in_stack_00000050;
    unaff_x27[0x10] = in_stack_00000048;
    unaff_x27[0x13] = in_stack_00000060;
    unaff_x27[0x12] = in_stack_00000058;
    *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000068;
    if (*(long *)(unaff_x29 + -0xe0) != unaff_x28) {
      FUN_100de6690(unaff_x29 + -0xe0);
    }
    puVar4 = (undefined8 *)_malloc(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x10);
    }
    else {
      puVar4[1] = 0x6365735f74756f65;
      *puVar4 = 0x6d69745f6c6f6f74;
      *(undefined8 *)(unaff_x29 + -0x90) = 0x10;
      *(undefined8 **)(unaff_x29 + -0x88) = puVar4;
      *(undefined8 *)(unaff_x29 + -0x80) = 0x10;
      if (*(uint *)(unaff_x25 + -0x40) != 1000000000) {
        dVar7 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x25 + -0x48));
        dVar7 = (double)*(uint *)(unaff_x25 + -0x40) / 1000000000.0 + dVar7;
        in_stack_00000020 = (undefined1 *)0x8000000000000000;
        if ((dVar7 != INFINITY) && (!NAN(dVar7))) {
          FUN_105dc6c20(&stack0x00000020);
        }
      }
      FUN_101497a9c(&stack0x00000020,&stack0x00004e80,unaff_x29 + -0x90,&stack0x00004aa0);
      unaff_x27[0xd] = in_stack_00000030;
      unaff_x27[0xc] = (long)in_stack_00000028;
      unaff_x27[0xf] = CONCAT71(uStack0000000000000041,uStack0000000000000040);
      unaff_x27[0xe] = in_stack_00000038;
      unaff_x27[0x11] = in_stack_00000050;
      unaff_x27[0x10] = in_stack_00000048;
      unaff_x27[0x13] = in_stack_00000060;
      unaff_x27[0x12] = in_stack_00000058;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000068;
      if (*(long *)(unaff_x29 + -0xe0) != unaff_x28) {
        FUN_100de6690(unaff_x29 + -0xe0);
      }
      lVar6 = unaff_x27[4];
      lVar9 = unaff_x27[7];
      lVar8 = unaff_x27[6];
      unaff_x26[0x77] = unaff_x27[5];
      unaff_x26[0x76] = lVar6;
      unaff_x26[0x79] = lVar9;
      unaff_x26[0x78] = lVar8;
      lVar9 = *unaff_x27;
      lVar8 = unaff_x27[3];
      lVar6 = unaff_x27[2];
      unaff_x26[0x73] = unaff_x27[1];
      unaff_x26[0x72] = lVar9;
      unaff_x26[0x75] = lVar8;
      unaff_x26[0x74] = lVar6;
      lVar6 = _malloc(0x80);
      if (lVar6 != 0) {
        in_stack_00000020 = &stack0x00004aa0;
        in_stack_00000028 = &UNK_108ca7630;
        in_stack_00000038 = 0;
        in_stack_00000030 = 2;
        uStack0000000000000040 = 0;
        func_0x00010068776c(&stack0x00004e30,&stack0x00000020);
        FUN_100de6690(&stack0x00004e30);
        in_stack_00000020 = &stack0x00004e18;
        in_stack_00000028 = &DAT_10112965c;
        func_0x00010602ab90(s__108ac265a,&stack0x00000020);
        _free(lVar6);
        FUN_100de6690(&stack0x00004dd0);
        FUN_100cf8c18(&stack0x00004da0);
        lVar6 = **(long **)(unaff_x19 + 0x2598);
        **(long **)(unaff_x19 + 0x2598) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(unaff_x19 + 0x2598);
        }
        FUN_100de93d0(unaff_x19 + 0x50);
        *(undefined1 *)(unaff_x19 + 0x49) = 0;
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x30));
        }
        *(undefined1 *)(unaff_x19 + 0x48) = 1;
        return ZEXT816(0) << 0x40;
      }
      func_0x0001087c9084(1,0x80);
    }
  }
LAB_100f9616c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f96170);
  (*pcVar1)();
}

