
void FUN_101703484(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x29;
  undefined8 uVar5;
  undefined1 in_stack_000000d0;
  undefined1 in_stack_000000d8;
  undefined1 in_stack_000000e0;
  undefined1 in_stack_000000e8;
  char cStack00000000000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined1 uStack0000000000000110;
  undefined7 uStack0000000000000111;
  undefined1 uStack0000000000000118;
  undefined7 uStack0000000000000119;
  undefined1 uStack0000000000000120;
  undefined7 uStack0000000000000121;
  undefined1 uStack0000000000000128;
  undefined7 uStack0000000000000129;
  undefined1 in_stack_00000130;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xb0,s___108ac02d4,&stack0x000000f0);
  lVar1 = *(long *)(unaff_x29 + -0xb0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xa8);
  __ZN106__LT_ed25519_dalek__signing__SigningKey_u20_as_u20_signature__signer__Signer_LT_ed25519__Signature_GT__GT_8try_sign17h248b0bb7200af3eaE
            (&stack0x000000f0,&stack0x00000010,uVar5,*(undefined8 *)(unaff_x29 + -0xa0));
  if (cStack00000000000000f0 != '\x01') {
    in_stack_000000f8 = *(undefined8 *)(unaff_x22 + 0xe9);
    _cStack00000000000000f0 = *(undefined8 *)(unaff_x22 + 0xe1);
    in_stack_00000108 = *(undefined8 *)(unaff_x22 + 0xf9);
    in_stack_00000100 = *(undefined8 *)(unaff_x22 + 0xf1);
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_000000f8;
    *(undefined8 *)(unaff_x29 + -0xb0) = _cStack00000000000000f0;
    *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000108;
    *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000100;
    uVar2 = CONCAT17(uStack0000000000000118,uStack0000000000000111);
    uVar3 = CONCAT17(uStack0000000000000128,uStack0000000000000121);
    *(ulong *)(unaff_x29 + -0x88) = CONCAT17(uStack0000000000000120,uStack0000000000000119);
    *(undefined8 *)(unaff_x29 + -0x90) = uVar2;
    *(ulong *)(unaff_x29 + -0x78) = CONCAT17(in_stack_00000130,uStack0000000000000129);
    *(undefined8 *)(unaff_x29 + -0x80) = uVar3;
    uStack0000000000000118 = (undefined1)uStack0000000000000119;
    uStack0000000000000119 =
         (undefined7)(CONCAT17(uStack0000000000000120,uStack0000000000000119) >> 8);
    uStack0000000000000110 = (undefined1)uStack0000000000000111;
    uStack0000000000000111 = (undefined7)((ulong)uVar2 >> 8);
    uStack0000000000000128 = (undefined1)uStack0000000000000129;
    uStack0000000000000129 = (undefined7)(CONCAT17(in_stack_00000130,uStack0000000000000129) >> 8);
    uStack0000000000000120 = (undefined1)uStack0000000000000121;
    uStack0000000000000121 = (undefined7)((ulong)uVar3 >> 8);
    func_0x00010170b5f8(unaff_x29 + -200,&UNK_108cdebab,&stack0x000000f0,0x40);
    unaff_x19[1] = in_stack_000001e0;
    *unaff_x19 = in_stack_000001d8;
    unaff_x19[2] = *(undefined8 *)(unaff_x29 + -0xb8);
    if (lVar1 != 0) {
      _free(uVar5);
    }
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar5;
  func_0x000108a07a3c(&UNK_108cdee53,0x1a,unaff_x29 + -0xb0,&UNK_10b255028,&UNK_10b254fa8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1017035dc);
  (*pcVar4)();
}

