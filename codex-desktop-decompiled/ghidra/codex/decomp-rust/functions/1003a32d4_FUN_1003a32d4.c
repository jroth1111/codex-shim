
void FUN_1003a32d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar7;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x19;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 *unaff_x21;
  undefined8 *puVar19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  undefined1 uStack_24a;
  uint auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  undefined1 (*pauVar6) [12];
  long lVar8;
  
  puVar17 = in_stack_00000008;
  lVar8 = in_stack_00000000;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xd0,s___108ab8993,unaff_x29 + -0xb8);
  uVar5 = *(undefined8 *)(unaff_x29 + -200);
  __ZN3std2fs4read5inner17h25df2b93c807d4faE(uVar5,*(undefined8 *)(unaff_x29 + -0xc0));
  if (*(long *)(unaff_x29 + -0xd0) != 0) {
    _free(uVar5);
  }
  if (in_stack_00000000 == -0x8000000000000000) {
    if (((ulong)in_stack_00000008 & 3) == 1) {
      puVar17 = (undefined8 *)((long)in_stack_00000008 + -1);
      unaff_x21 = (undefined8 *)*puVar17;
      unaff_x22 = *(undefined8 **)((long)in_stack_00000008 + 7);
      if ((code *)*unaff_x22 != (code *)0x0) {
        (*(code *)*unaff_x22)(unaff_x21);
      }
      if (unaff_x22[1] != 0) {
        _free(unaff_x21);
      }
      _free(puVar17);
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_000000f0);
    }
  }
  else {
    unaff_x21 = (undefined8 *)(unaff_x29 + -0xb8);
    param_3 = in_stack_00000010;
    FUN_1003a6b64(unaff_x29 + -0xb8,in_stack_00000008);
    lVar4 = *(long *)(unaff_x29 + -0xb8);
    if (lVar4 == -0x8000000000000000) {
      if ((*(char *)(unaff_x29 + -0xb0) == '\x06') &&
         (puVar19 = *(undefined8 **)(unaff_x29 + -0xa8), unaff_x21 = puVar19,
         ((ulong)puVar19 & 3) == 1)) {
        unaff_x21 = (undefined8 *)((long)puVar19 + -1);
        unaff_x22 = (undefined8 *)*unaff_x21;
        unaff_x25 = *(undefined8 **)((long)puVar19 + 7);
        if ((code *)*unaff_x25 != (code *)0x0) {
          (*(code *)*unaff_x25)(unaff_x22);
        }
        if (unaff_x25[1] != 0) {
          _free(unaff_x22);
        }
        _free(unaff_x21);
      }
    }
    else {
      in_stack_00000038 = *(long *)(unaff_x29 + -0x78);
      in_stack_00000030 = *(long *)(unaff_x29 + -0x80);
      in_stack_00000048 = *(long *)(unaff_x29 + -0x68);
      in_stack_00000040 = *(long *)(unaff_x29 + -0x70);
      in_stack_00000058 = *(long *)(unaff_x29 + -0x58);
      in_stack_00000050 = *(long *)(unaff_x29 + -0x60);
      in_stack_00000068 = *(long *)(unaff_x29 + -0x48);
      in_stack_00000060 = *(long *)(unaff_x29 + -0x50);
      in_stack_00000008 = *(undefined8 **)(unaff_x29 + -0xa8);
      in_stack_00000000 = *(long *)(unaff_x29 + -0xb0);
      in_stack_00000018 = *(long *)(unaff_x29 + -0x98);
      in_stack_00000010 = *(ulong *)(unaff_x29 + -0xa0);
      in_stack_00000028 = *(long *)(unaff_x29 + -0x88);
      in_stack_00000020 = *(long *)(unaff_x29 + -0x90);
    }
    if (lVar8 != 0) {
      _free(puVar17);
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_000000f0);
    }
    if (lVar4 != -0x8000000000000000) {
      unaff_x19[8] = in_stack_00000038;
      unaff_x19[7] = in_stack_00000030;
      unaff_x19[10] = in_stack_00000048;
      unaff_x19[9] = in_stack_00000040;
      unaff_x19[0xc] = in_stack_00000058;
      unaff_x19[0xb] = in_stack_00000050;
      unaff_x19[0xe] = in_stack_00000068;
      unaff_x19[0xd] = in_stack_00000060;
      unaff_x19[2] = (long)in_stack_00000008;
      unaff_x19[1] = in_stack_00000000;
      unaff_x19[4] = in_stack_00000018;
      unaff_x19[3] = in_stack_00000010;
      *unaff_x19 = lVar4;
      unaff_x19[6] = in_stack_00000028;
      unaff_x19[5] = in_stack_00000020;
      return;
    }
  }
  lVar4 = _calloc(0x10,1);
  if (lVar4 != 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 8;
    unaff_x19[3] = 1;
    unaff_x19[2] = 0;
    unaff_x19[4] = lVar4;
    unaff_x19[6] = 0;
    unaff_x19[5] = 1;
    unaff_x19[7] = 8;
    unaff_x19[8] = 0;
    *(undefined1 *)((long)unaff_x19 + 0x75) = 3;
    return;
  }
  uVar5 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x10);
  if (unaff_x25[1] != 0) {
    _free(unaff_x22);
  }
  _free(unaff_x21);
  if (lVar8 != 0) {
    _free(puVar17);
  }
  if (in_stack_000000e8 != 0) {
    _free(in_stack_000000f0);
    FUN_10039b13c(&stack0x00000070);
    uVar5 = __Unwind_Resume(uVar5);
  }
  FUN_10039b13c(&stack0x00000070);
  auVar20 = __Unwind_Resume(uVar5);
  lVar8 = auVar20._8_8_;
  pauVar6 = auVar20._0_8_;
  if (lVar8 == 0) {
    uStack_258 = 0x6c2f6374652f;
    uStack_252 = 0x636f;
    uStack_250 = 0x656d69746c61;
    uStack_24a = 0;
    puStack_30 = unaff_x22;
    puStack_28 = unaff_x21;
    puStack_20 = puVar17;
    uStack_18 = uVar5;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E(auStack_d8,&uStack_258,0xf);
    if ((auStack_d8[0] & 1) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      lStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      iVar3 = _lstat(uStack_d0,&uStack_c0);
      if (iVar3 != -1) {
        uVar2 = (uint)(lStack_90 + 0x7fffffffffffffffU < 0x8000000000000000 &&
                      0xffffffffc4653600 < uStack_88);
        uVar13 = uStack_88 + 1000000000;
        if (uVar2 == 0) {
          uVar13 = uStack_88;
        }
        auVar20._8_8_ = uVar13;
        auVar20._0_8_ = lStack_90 - (ulong)uVar2;
        auVar21 = auVar20._0_12_;
        if (999999999 < uVar13) {
          auVar20 = func_0x000106032954(0);
          auVar21 = auVar20._0_12_;
        }
        *(long *)*pauVar6 = auVar21._0_8_;
        *(int *)(*pauVar6 + 8) = auVar21._8_4_;
        return;
      }
      puVar7 = (uint *)___error();
      puVar18 = (undefined *)((ulong)*puVar7 << 0x20 | 2);
    }
    else {
      puVar18 = &UNK_10b4add80;
    }
    auVar21 = func_0x000106032954(0);
    *pauVar6 = auVar21;
    if (((ulong)puVar18 & 3) != 1) {
      return;
    }
    uVar5 = *(undefined8 *)(puVar18 + -1);
    puVar17 = *(undefined8 **)(puVar18 + 7);
    pcVar10 = (code *)*puVar17;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar5);
    }
    if (puVar17[1] != 0) {
      _free(uVar5);
    }
    _free(puVar18 + -1);
    return;
  }
  uVar13 = 0x7465646279746573;
  uVar12 = 0x736f6d6570736575;
  uVar11 = 0x6c7967656e657261;
  uVar9 = 0x646f72616e646f6d;
  uVar14 = param_3 & 7;
  uVar1 = param_3 & 0xfffffffffffffff8;
  if (uVar1 != 0) {
    uVar15 = 0;
    do {
      uVar13 = *(ulong *)(lVar8 + uVar15) ^ uVar13;
      uVar12 = uVar12 + uVar9;
      uVar9 = uVar12 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
      uVar16 = uVar13 + uVar11 + uVar9;
      uVar11 = uVar13 + uVar11 ^ (uVar13 >> 0x30 | uVar13 << 0x10);
      uVar9 = uVar16 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
      uVar13 = uVar11 + (uVar12 >> 0x20 | uVar12 << 0x20);
      uVar12 = uVar13 ^ *(ulong *)(lVar8 + uVar15);
      uVar13 = uVar13 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
      uVar11 = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar15 = uVar15 + 8;
    } while (uVar15 < uVar1);
  }
  if (uVar14 < 4) {
    uVar16 = 0;
    uVar15 = 0;
    if (uVar14 < 2) goto LAB_1003a3734;
  }
  else {
    uVar15 = (ulong)*(uint *)(lVar8 + uVar1);
    uVar16 = 4;
    if (uVar14 < 6) goto LAB_1003a3734;
  }
  uVar15 = (ulong)*(ushort *)(lVar8 + uVar1 + uVar16) << (uVar16 << 3) | uVar15;
  uVar16 = uVar16 | 2;
LAB_1003a3734:
  if (uVar16 < uVar14) {
    uVar15 = (ulong)*(byte *)(lVar8 + uVar16 + uVar1) << (uVar16 << 3) | uVar15;
  }
  uVar15 = uVar15 | param_3 << 0x38;
  uVar13 = uVar15 ^ uVar13;
  uVar12 = uVar12 + uVar9;
  uVar9 = uVar12 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
  uVar1 = uVar13 + uVar11 + uVar9;
  uVar11 = uVar13 + uVar11 ^ (uVar13 >> 0x30 | uVar13 << 0x10);
  uVar9 = uVar1 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
  uVar13 = uVar11 + (uVar12 >> 0x20 | uVar12 << 0x20);
  uVar11 = uVar13 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
  uVar13 = (uVar13 ^ uVar15) + uVar9;
  uVar9 = uVar13 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
  uVar12 = uVar11 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar1 = uVar9 + uVar12;
  uVar12 = uVar12 ^ (uVar11 >> 0x30 | uVar11 << 0x10);
  uVar11 = uVar1 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
  uVar13 = uVar12 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar9 = uVar11 + uVar13;
  uVar13 = uVar13 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
  uVar11 = uVar9 ^ (uVar11 >> 0x33 | uVar11 << 0xd);
  uVar12 = uVar13 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar1 = uVar11 + uVar12;
  uVar12 = uVar12 ^ (uVar13 >> 0x30 | uVar13 << 0x10);
  uVar11 = uVar1 ^ (uVar11 >> 0x2f | uVar11 << 0x11);
  uVar13 = uVar12 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar14 = uVar13 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
  uVar9 = uVar11 + uVar13 ^ (uVar11 >> 0x33 | uVar11 << 0xd);
  uVar13 = uVar14 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar12 = uVar9 + uVar13;
  uVar13 = uVar13 ^ (uVar14 >> 0x30 | uVar14 << 0x10);
  *(ulong *)*pauVar6 =
       (uVar13 >> 0x2b | uVar13 << 0x15) ^ (uVar9 >> 0x2f | uVar9 << 0x11) ^
       (uVar12 >> 0x20 | uVar12 << 0x20) ^ uVar12;
  *(undefined4 *)(*pauVar6 + 8) = 1000000000;
  return;
}

