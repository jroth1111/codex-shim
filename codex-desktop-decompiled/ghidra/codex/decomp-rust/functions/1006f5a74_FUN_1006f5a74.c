
void FUN_1006f5a74(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  long unaff_x19;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long *unaff_x25;
  undefined *puVar9;
  long lVar10;
  long unaff_x29;
  undefined1 auVar11 [16];
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000020;
  long lStack0000000000000030;
  long lStack0000000000000040;
  long in_stack_00000060;
  undefined1 uStack0000000000000124;
  undefined1 uStack000000000000012c;
  undefined1 uVar12;
  long in_stack_00000230;
  long in_stack_00000238;
  
  puVar9 = &stack0x00000f10;
  FUN_1007141a4(&stack0x00000200);
  *(undefined1 *)(in_stack_00000060 + 0x370) = 1;
  *(undefined1 *)(in_stack_00000060 + 0x39a) = 0;
  *(undefined1 *)(in_stack_00000060 + 0x398) = 1;
  *(undefined1 *)(in_stack_00000060 + 0x399) = *(undefined1 *)(in_stack_00000060 + 0x371);
  *(undefined8 *)(in_stack_00000060 + 0x388) = 0;
  *(undefined8 *)(in_stack_00000060 + 0x380) = 0;
  *(undefined8 *)(in_stack_00000060 + 0x378) = 0x1a;
  *(undefined2 *)(in_stack_00000060 + 0x390) = 0;
  *(undefined8 **)(in_stack_00000060 + 0x3b0) = (undefined8 *)(in_stack_00000060 + 0x378);
  *(long *)(in_stack_00000060 + 0x3b8) = in_stack_00000060 + 0x150;
  *(undefined1 *)(in_stack_00000060 + 0x3c8) = 0;
  auVar11 = func_0x0001006f34b4(in_stack_00000060 + 0x3b0);
  if ((auVar11._0_8_ & 1) == 0) {
    if (*(char *)(in_stack_00000060 + 0x3c8) == '\x06') {
      __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                (in_stack_00000060 + 1000);
    }
    if (auVar11._8_8_ == 0) {
      if ((*(byte *)(in_stack_00000060 + 0x378) != 0x1a) &&
         (0x18 < *(byte *)(in_stack_00000060 + 0x378))) {
        lVar10 = **(long **)(in_stack_00000060 + 0x380);
        **(long **)(in_stack_00000060 + 0x380) = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(in_stack_00000060 + 0x380)
          ;
        }
      }
      uVar3 = *(undefined1 *)(in_stack_00000060 + 0x370);
      uVar12 = *(undefined1 *)(in_stack_00000060 + 0x371);
      puVar9 = &UNK_108caad35;
      *(undefined1 *)(in_stack_00000060 + 0x366) = 0;
      lStack0000000000000040 = *(long *)(in_stack_00000060 + 0x3a0);
      uVar7 = 2;
      lStack0000000000000020 = 0x1c;
      lVar10 = 2;
      lStack0000000000000030 = *(long *)(in_stack_00000060 + 0x3a8);
      puVar5 = in_stack_00000008;
    }
    else {
      __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,auVar11._8_8_);
      lVar10 = 1;
      lStack0000000000000020 = 1;
      uVar3 = (undefined1)((ulong)param_1 >> 8);
      uVar12 = (undefined1)((ulong)param_1 >> 0x10);
      *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x19 + 0x1b);
      *(char *)(unaff_x29 + -0x9c) = (char)((ulong)param_1 >> 0x38);
      *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0xa0);
      *(undefined1 *)(unaff_x29 + -0xc4) = *(undefined1 *)(unaff_x29 + -0x9c);
      if ((*(byte *)(in_stack_00000060 + 0x378) != 0x1a) &&
         (0x18 < *(byte *)(in_stack_00000060 + 0x378))) {
        lVar2 = **(long **)(in_stack_00000060 + 0x380);
        **(long **)(in_stack_00000060 + 0x380) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(in_stack_00000060 + 0x380)
          ;
        }
      }
      puVar5 = (undefined1 *)0x108caaf;
      lStack0000000000000030 = in_stack_00000238;
      lStack0000000000000040 = in_stack_00000230;
      if ((*(byte *)(in_stack_00000060 + 0x366) & 1) == 0) {
        uVar7 = 1;
      }
      else {
        puVar8 = *(undefined8 **)(in_stack_00000060 + 0x3a8);
        pcVar4 = (code *)*puVar8;
        uVar6 = *(undefined8 *)(in_stack_00000060 + 0x3a0);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar6);
        }
        if (puVar8[1] != 0) {
          _free(uVar6);
        }
        uVar7 = 1;
      }
    }
    *(undefined1 *)(in_stack_00000060 + 0x366) = 0;
    *(undefined1 *)(in_stack_00000060 + 0x365) = 0;
    if ((*(byte *)(in_stack_00000060 + 0x367) & 1) != 0) {
      FUN_100deb62c(in_stack_00000060 + 0x1d8);
    }
    *(undefined1 *)(in_stack_00000060 + 0x367) = 0;
    if ((*(byte *)(in_stack_00000060 + 0x369) & 1) != 0) {
      func_0x000100e3c8d4(in_stack_00000060 + 0x1a8);
    }
    *(undefined1 *)(in_stack_00000060 + 0x369) = 0;
    *(undefined1 *)(in_stack_00000060 + 0x36b) = 0;
    FUN_100deb62c(in_stack_00000060 + 0x150);
    func_0x000100e3c8d4(in_stack_00000060 + 0x170);
    uVar1 = *(undefined4 *)(unaff_x29 + -200);
    uStack0000000000000124 = *(undefined1 *)(unaff_x29 + -0xc4);
    *in_stack_00000008 = 1;
    if (lVar10 != 5) {
      uStack000000000000012c = uStack0000000000000124;
      FUN_100e63f8c(in_stack_00000010);
      if ((((*(byte *)(in_stack_00000060 + 0xe3) & 1) != 0) &&
          (*(byte *)(in_stack_00000060 + 0xb8) != 0x1a)) &&
         (0x18 < *(byte *)(in_stack_00000060 + 0xb8))) {
        lVar2 = **(long **)(in_stack_00000060 + 0xc0);
        **(long **)(in_stack_00000060 + 0xc0) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      *(undefined1 *)(in_stack_00000060 + 0xe3) = 0;
      *(undefined1 *)(in_stack_00000060 + 0xe5) = 0;
      if (2 < *(ulong *)(in_stack_00000060 + 0x90)) {
        _free(*(undefined8 *)(in_stack_00000060 + 0x80));
      }
      if ((*(byte *)(in_stack_00000060 + 0xe4) & 1) != 0) {
        FUN_100deb62c(in_stack_00000060 + 0x48);
        func_0x000100e3c8d4(in_stack_00000060 + 0x68);
      }
      *(undefined1 *)(in_stack_00000060 + 0xe4) = 0;
      *unaff_x25 = lVar10;
      unaff_x25[1] = (long)puVar9;
      unaff_x25[2] = lStack0000000000000020;
      *(undefined1 *)(unaff_x25 + 3) = uVar7;
      *(undefined1 *)((long)unaff_x25 + 0x19) = uVar3;
      *(undefined1 *)((long)unaff_x25 + 0x1a) = uVar12;
      *(undefined4 *)((long)unaff_x25 + 0x1b) = uVar1;
      *(undefined1 *)((long)unaff_x25 + 0x1f) = uStack000000000000012c;
      *(undefined1 *)(unaff_x25 + 4) = 0x16;
      *(int *)((long)unaff_x25 + 0x21) = (int)puVar5;
      *(char *)((long)unaff_x25 + 0x27) = (char)((ulong)puVar5 >> 0x30);
      *(short *)((long)unaff_x25 + 0x25) = (short)((ulong)puVar5 >> 0x20);
      unaff_x25[5] = 0x30;
      uVar3 = 1;
      unaff_x25[6] = lStack0000000000000040;
      unaff_x25[7] = lStack0000000000000030;
      goto LAB_1006f9938;
    }
  }
  else {
    *in_stack_00000008 = 8;
  }
  *unaff_x25 = 5;
  uVar3 = 8;
LAB_1006f9938:
  *(undefined1 *)(in_stack_00000060 + 0xe2) = uVar3;
  return;
}

