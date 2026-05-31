
/* WARNING: Removing unreachable block (ram,0x000100f7205c) */

void FUN_100f71b64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  ulong uVar11;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  ulong in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined4 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  ulong in_stack_000000d8;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  ulong in_stack_00000148;
  undefined *in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  int iStack00000000000001b8;
  undefined8 *in_stack_000001c0;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined7 in_stack_00000251;
  int in_stack_00000338;
  undefined8 in_stack_00000340;
  
code_r0x000100f71b64:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s_______108ad4adf,param_3);
  lVar7 = in_stack_000000f8;
  if (in_stack_000000f8 == in_stack_000000e8) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x000000e8);
  }
  puVar10 = (undefined8 *)(in_stack_000000f0 + lVar7 * 0x18);
  puVar10[1] = in_stack_000001a8;
  *puVar10 = in_stack_000001a0;
  puVar10[2] = in_stack_000001b0;
  in_stack_000000f8 = lVar7 + 1;
  uVar11 = *(ulong *)(unaff_x29 + -0xf0);
  if ((uVar11 & 3) != 1) goto LAB_100f71d34;
  puVar10 = (undefined8 *)(uVar11 - 1);
  uVar15 = *puVar10;
  puVar13 = *(undefined8 **)(uVar11 + 7);
  if ((code *)*puVar13 != (code *)0x0) {
    (*(code *)*puVar13)(uVar15);
  }
  do {
    if (puVar13[1] != 0) {
      _free(uVar15);
    }
    _free(puVar10);
    uVar15 = 0x2e;
    uVar14 = 0x2e;
    puVar10 = unaff_x28;
joined_r0x000100f71eb8:
    if (unaff_x23 != 0) {
      _free(unaff_x24);
    }
    do {
      if (unaff_x20 == 2) {
        puVar13 = (undefined8 *)_malloc(0xb);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0xb);
        }
        else {
          *(undefined4 *)((long)puVar13 + 7) = 0x766e652e;
          *puVar13 = 0x2e6b726f7774656e;
          puVar9 = (undefined4 *)_malloc(7);
          lVar3 = in_stack_000000f8;
          lVar2 = in_stack_000000f0;
          lVar7 = in_stack_000000e8;
          if (puVar9 != (undefined4 *)0x0) {
            *(undefined4 *)((long)puVar9 + 3) = 0x6b726f77;
            *puVar9 = 0x7774656e;
            _iStack00000000000001b8 = (undefined8 *)0xb;
            lVar12 = in_stack_000000f8 * 0x18;
            in_stack_00000058 = in_stack_000000f0 + lVar12;
            in_stack_00000040 = in_stack_000000f0;
            in_stack_00000048 = (undefined8 *)in_stack_000000f0;
            in_stack_00000050 = in_stack_000000e8;
            in_stack_000001c0 = puVar13;
            if (in_stack_000000f8 != 0) {
              FUN_108855060(&stack0x00000200,0,in_stack_000000f8,8,0x18);
            }
            _memcpy(8,lVar2,lVar12);
            if (lVar7 != 0) {
              _free(lVar2);
            }
            in_stack_000000d8 = CONCAT71(in_stack_00000251,1);
            in_stack_00000068 = 7;
            in_stack_00000048 = in_stack_000001c0;
            in_stack_00000040 = (ulong)_iStack00000000000001b8;
            in_stack_00000058 = 7;
            in_stack_00000050 = 0xb;
            in_stack_00000060 = puVar9;
            in_stack_00000070 = uVar14;
            in_stack_00000078 = puVar10;
            in_stack_00000080 = uVar15;
            in_stack_00000088 = 0;
            in_stack_00000090 = 8;
            in_stack_00000098 = lVar3;
            in_stack_000000a0 = 0;
            in_stack_000000a8 = 8;
            in_stack_000000b0 = 0;
            in_stack_000000b8 = 0x8000000000000000;
            in_stack_000000c0 = in_stack_00000238;
            in_stack_000000c8 = in_stack_00000240;
            in_stack_000000d0 = 0;
            _in_stack_00000100 = func_0x000106032954(8);
            *(undefined8 *)(unaff_x29 + -0xf0) = in_stack_00000020;
            *(undefined4 *)(unaff_x29 + -0xe8) = in_stack_00000018._4_4_;
            func_0x000106032878(&stack0x000001b8,&stack0x00000100,unaff_x29 + -0xf0);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = in_stack_000001c0;
            lVar7 = (long)in_stack_000001c0 * 1000;
            if (SUB168(auVar1 * ZEXT816(1000),8) != 0) {
              lVar7 = -1;
            }
            in_stack_000000d0 = 0;
            if (iStack00000000000001b8 == 0) {
              in_stack_000000d0 = lVar7;
            }
            (**(code **)(in_stack_00000028 + 0x28))
                      (in_stack_00000010 + 0x10,&UNK_108ca28d0,7,in_stack_000000d8 & 0xff);
            in_stack_00000008[0xd] = in_stack_000000a8;
            in_stack_00000008[0xc] = in_stack_000000a0;
            in_stack_00000008[0xf] = in_stack_000000b8;
            in_stack_00000008[0xe] = in_stack_000000b0;
            in_stack_00000008[0x11] = in_stack_000000c8;
            in_stack_00000008[0x10] = in_stack_000000c0;
            in_stack_00000008[0x13] = in_stack_000000d8;
            in_stack_00000008[0x12] = in_stack_000000d0;
            in_stack_00000008[5] = in_stack_00000068;
            in_stack_00000008[4] = in_stack_00000060;
            in_stack_00000008[7] = in_stack_00000078;
            in_stack_00000008[6] = in_stack_00000070;
            in_stack_00000008[9] = in_stack_00000088;
            in_stack_00000008[8] = in_stack_00000080;
            in_stack_00000008[0xb] = in_stack_00000098;
            in_stack_00000008[10] = in_stack_00000090;
            in_stack_00000008[1] = in_stack_00000048;
            *in_stack_00000008 = in_stack_00000040;
            in_stack_00000008[3] = in_stack_00000058;
            in_stack_00000008[2] = in_stack_00000050;
            lVar7 = *in_stack_00000030;
            *in_stack_00000030 = lVar7 + -1;
            LORelease();
            if (lVar7 == 1) {
              DataMemoryBarrier(2,1);
              FUN_100f40f90(in_stack_00000030,in_stack_00000028);
            }
            return;
          }
          func_0x0001087c9084(1,7);
        }
        goto LAB_100f72184;
      }
      unaff_x20 = 2;
      in_stack_00000100 = 2;
      in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0x10);
      in_stack_00000138 = *(undefined8 *)(unaff_x19 + 0x18);
      __ZN3std3env7_var_os17h6bd9111edd9950c4E(&stack0x00000140);
      puVar4 = in_stack_00000150;
      unaff_x24 = in_stack_00000148;
      unaff_x23 = in_stack_00000140;
    } while (in_stack_00000140 == -0x8000000000000000);
    if (in_stack_00000150 < (undefined *)0x180) {
      _memcpy(&stack0x000001b8,in_stack_00000148,in_stack_00000150);
      *(undefined1 *)((long)&stack0x000001b8 + (long)puVar4) = 0;
      __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                (&stack0x00000338,&stack0x000001b8,puVar4 + 1);
      if (in_stack_00000338 == 1) {
        in_stack_00000048 = (undefined8 *)&UNK_10b4add80;
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0xb8) = 0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 0;
        *(undefined8 *)(unaff_x29 + -0xa8) = 0;
        *(undefined8 *)(unaff_x29 + -0xb0) = 0;
        *(undefined8 *)(unaff_x29 + -0xd8) = 0;
        *(undefined8 *)(unaff_x29 + -0xe0) = 0;
        *(undefined8 *)(unaff_x29 + -200) = 0;
        *(undefined8 *)(unaff_x29 + -0xd0) = 0;
        *(undefined8 *)(unaff_x29 + -0xe8) = 0;
        *(undefined8 *)(unaff_x29 + -0xf0) = 0;
        iVar6 = _stat(in_stack_00000340,unaff_x29 + -0xf0);
        if (iVar6 != -1) {
          uVar18 = *(undefined8 *)(unaff_x29 + -0xa8);
          uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar16 = *(undefined8 *)(unaff_x29 + -0xa0);
          *(undefined8 *)(unaff_x25 + 0x60) = *(undefined8 *)(unaff_x29 + -0x98);
          *(undefined8 *)(unaff_x25 + 0x58) = uVar16;
          uVar16 = *(undefined8 *)(unaff_x29 + -0x90);
          uVar20 = *(undefined8 *)(unaff_x29 + -0x78);
          uVar19 = *(undefined8 *)(unaff_x29 + -0x80);
          *(undefined8 *)(unaff_x25 + 0x70) = *(undefined8 *)(unaff_x29 + -0x88);
          *(undefined8 *)(unaff_x25 + 0x68) = uVar16;
          *(undefined8 *)(unaff_x25 + 0x80) = uVar20;
          *(undefined8 *)(unaff_x25 + 0x78) = uVar19;
          uVar16 = *(undefined8 *)(unaff_x29 + -0x70);
          *(undefined8 *)(unaff_x25 + 0x90) = *(undefined8 *)(unaff_x29 + -0x68);
          *(undefined8 *)(unaff_x25 + 0x88) = uVar16;
          uVar20 = *(undefined8 *)(unaff_x29 + -0xe8);
          uVar19 = *(undefined8 *)(unaff_x29 + -0xf0);
          uVar16 = *(undefined8 *)(unaff_x29 + -0xe0);
          *(undefined8 *)(unaff_x25 + 0x20) = *(undefined8 *)(unaff_x29 + -0xd8);
          *(undefined8 *)(unaff_x25 + 0x18) = uVar16;
          uVar16 = *(undefined8 *)(unaff_x29 + -0xd0);
          uVar22 = *(undefined8 *)(unaff_x29 + -0xb8);
          uVar21 = *(undefined8 *)(unaff_x29 + -0xc0);
          *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)(unaff_x29 + -200);
          *(undefined8 *)(unaff_x25 + 0x28) = uVar16;
          *(undefined8 *)(unaff_x25 + 0x40) = uVar22;
          *(undefined8 *)(unaff_x25 + 0x38) = uVar21;
          *(undefined8 *)(unaff_x25 + 0x50) = uVar18;
          *(undefined8 *)(unaff_x25 + 0x48) = uVar17;
          *(undefined8 *)(unaff_x25 + 0x10) = uVar20;
          *(undefined8 *)(unaff_x25 + 8) = uVar19;
          goto LAB_100f71c48;
        }
        puVar8 = (uint *)___error();
        in_stack_00000048 = (undefined8 *)((ulong)*puVar8 << 0x20 | 2);
      }
LAB_100f71af4:
      *(undefined8 **)(unaff_x29 + -0xf0) = in_stack_00000048;
      unaff_x28 = (undefined8 *)_malloc(0x2e);
      if (unaff_x28 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x2e);
LAB_100f72184:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100f72188);
        (*pcVar5)();
      }
      unaff_x28[1] = 0x617620766e652041;
      *unaff_x28 = 0x43206d6f74737563;
      unaff_x28[3] = 0x75206e6120746120;
      unaff_x28[2] = 0x73746e696f702072;
      *(undefined8 *)((long)unaff_x28 + 0x26) = 0x6874617020656c62;
      *(undefined8 *)((long)unaff_x28 + 0x1e) = 0x61646165726e7520;
      _free(puVar10);
      in_stack_00000040 = unaff_x24;
      in_stack_00000048 = (undefined8 *)puVar4;
      _iStack00000000000001b8 = &stack0x00000130;
      in_stack_000001c0 = (undefined8 *)&DAT_100c7b3a0;
      param_1 = &stack0x000001a0;
      param_3 = (undefined8 *)&stack0x000001b8;
      goto code_r0x000100f71b64;
    }
    FUN_108a820a8(&stack0x00000040,in_stack_00000148,in_stack_00000150,&DAT_10603cc64);
    if ((in_stack_00000040 & 1) != 0) goto LAB_100f71af4;
LAB_100f71c48:
    if (((ulong)in_stack_00000048 & 0xf00000000000) != 0x800000000000) {
      puVar13 = (undefined8 *)_malloc(0x2a);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x2a);
        goto LAB_100f72184;
      }
      puVar13[1] = 0x617620766e652041;
      *puVar13 = 0x43206d6f74737563;
      puVar13[3] = 0x746e696f7020746f;
      puVar13[2] = 0x6e2073656f642072;
      *(undefined8 *)((long)puVar13 + 0x22) = 0x656c696620612074;
      *(undefined8 *)((long)puVar13 + 0x1a) = 0x6120746e696f7020;
      _free(puVar10);
      in_stack_00000040 = unaff_x24;
      in_stack_00000048 = (undefined8 *)puVar4;
      _iStack00000000000001b8 = &stack0x00000130;
      in_stack_000001c0 = (undefined8 *)&DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000188,s___not_a_file_108ad4be9,&stack0x000001b8);
      lVar7 = in_stack_000000f8;
      if (in_stack_000000f8 == in_stack_000000e8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x000000e8);
      }
      puVar10 = (undefined8 *)(in_stack_000000f0 + lVar7 * 0x18);
      puVar10[1] = in_stack_00000190;
      *puVar10 = in_stack_00000188;
      puVar10[2] = in_stack_00000198;
      uVar15 = 0x2a;
      uVar14 = 0x2a;
      puVar10 = puVar13;
joined_r0x000100f71a54:
      in_stack_000000f8 = lVar7 + 1;
      goto joined_r0x000100f71eb8;
    }
    lVar7 = FUN_100f73214(unaff_x24,puVar4);
    if (lVar7 == 0) {
      in_stack_00000040 = unaff_x24;
      in_stack_00000048 = (undefined8 *)puVar4;
      _iStack00000000000001b8 = &stack0x00000130;
      in_stack_000001c0 = (undefined8 *)&DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000170,s___readable_file_108ad4bfa,&stack0x000001b8);
      lVar7 = in_stack_000000f8;
      if (in_stack_000000f8 == in_stack_000000e8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x000000e8);
      }
      puVar13 = (undefined8 *)(in_stack_000000f0 + lVar7 * 0x18);
      puVar13[1] = in_stack_00000178;
      *puVar13 = in_stack_00000170;
      puVar13[2] = in_stack_00000180;
      goto joined_r0x000100f71a54;
    }
    *(long *)(unaff_x29 + -0xf0) = lVar7;
    unaff_x28 = (undefined8 *)_malloc(0x2e);
    if (unaff_x28 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x2e);
      goto LAB_100f72184;
    }
    unaff_x28[1] = 0x617620766e652041;
    *unaff_x28 = 0x43206d6f74737563;
    unaff_x28[3] = 0x75206e6120746120;
    unaff_x28[2] = 0x73746e696f702072;
    *(undefined8 *)((long)unaff_x28 + 0x26) = 0x656c696620656c62;
    *(undefined8 *)((long)unaff_x28 + 0x1e) = 0x61646165726e7520;
    _free(puVar10);
    in_stack_00000040 = unaff_x24;
    in_stack_00000048 = (undefined8 *)puVar4;
    _iStack00000000000001b8 = &stack0x00000130;
    in_stack_000001c0 = (undefined8 *)&DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000158,s_______108ad4adf,&stack0x000001b8);
    lVar7 = in_stack_000000f8;
    if (in_stack_000000f8 == in_stack_000000e8) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x000000e8);
    }
    puVar10 = (undefined8 *)(in_stack_000000f0 + lVar7 * 0x18);
    puVar10[1] = in_stack_00000160;
    *puVar10 = in_stack_00000158;
    puVar10[2] = in_stack_00000168;
    in_stack_000000f8 = lVar7 + 1;
    uVar11 = *(ulong *)(unaff_x29 + -0xf0);
    if ((uVar11 & 3) != 1) {
LAB_100f71d34:
      uVar15 = 0x2e;
      uVar14 = 0x2e;
      puVar10 = unaff_x28;
      goto joined_r0x000100f71eb8;
    }
    puVar10 = (undefined8 *)(uVar11 - 1);
    uVar15 = *puVar10;
    puVar13 = *(undefined8 **)(uVar11 + 7);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar15);
    }
  } while( true );
}

