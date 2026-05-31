
void FUN_101650660(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined1 uVar6;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  ulong uVar7;
  undefined8 *unaff_x25;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long in_stack_000003f8;
  long in_stack_00000400;
  undefined8 in_stack_00000408;
  ushort in_stack_00000460;
  long *in_stack_00000500;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000003f8,s_http___localhost__108ada115);
  uVar3 = *unaff_x25;
  unaff_x19[2] = unaff_x25[1];
  unaff_x19[1] = uVar3;
  unaff_x19[3] = in_stack_00000408;
  FUN_1011d51fc(&stack0x000003f8,*unaff_x19,&UNK_108ca1660,unaff_x19[2]);
  if (in_stack_000003f8 == 2) {
    uVar7 = 1;
    lVar2 = *in_stack_00000500;
    *in_stack_00000500 = lVar2 + -1;
    LORelease();
    lVar5 = in_stack_00000400;
  }
  else {
    auVar22 = FUN_105c4eee0(in_stack_00000500,&stack0x000003f8);
    uVar7 = auVar22._0_8_;
    lVar2 = *in_stack_00000500;
    *in_stack_00000500 = lVar2 + -1;
    LORelease();
    lVar5 = auVar22._8_8_;
  }
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000500);
  }
  unaff_x19[4] = uVar7;
  unaff_x19[5] = lVar5;
  if ((uVar7 & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x000003f8,lVar5);
    if (in_stack_000003f8 == 4) {
      *unaff_x20 = 2;
      uVar6 = 3;
      goto LAB_101650820;
    }
    uVar3 = unaff_x19[4];
    uVar4 = unaff_x19[5];
    lVar5 = in_stack_00000400;
  }
  else {
    unaff_x19[5] = 0;
    if (lVar5 == 0) {
      func_0x000108a079f0(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101650880);
      (*pcVar1)();
    }
    uVar4 = 0;
    in_stack_000003f8 = 3;
    uVar3 = 1;
  }
  uVar12 = unaff_x25[0xb];
  uVar8 = unaff_x25[10];
  uVar19 = unaff_x25[0xd];
  uVar16 = unaff_x25[0xc];
  uVar13 = unaff_x25[0xf];
  uVar9 = unaff_x25[0xe];
  uVar14 = unaff_x25[3];
  uVar10 = unaff_x25[2];
  uVar20 = unaff_x25[5];
  uVar17 = unaff_x25[4];
  uVar15 = unaff_x25[7];
  uVar11 = unaff_x25[6];
  uVar21 = unaff_x25[9];
  uVar18 = unaff_x25[8];
  FUN_100e03d7c(uVar3,uVar4);
  if (in_stack_000003f8 != 3) {
    unaff_x25[0xb] = uVar12;
    unaff_x25[10] = uVar8;
    unaff_x25[0xd] = uVar19;
    unaff_x25[0xc] = uVar16;
    unaff_x25[0xf] = uVar13;
    unaff_x25[0xe] = uVar9;
    unaff_x25[3] = uVar14;
    unaff_x25[2] = uVar10;
    unaff_x25[5] = uVar20;
    unaff_x25[4] = uVar17;
    unaff_x25[7] = uVar15;
    unaff_x25[6] = uVar11;
    unaff_x25[9] = uVar21;
    unaff_x25[8] = uVar18;
    FUN_100e0d524(&stack0x000003f8);
    lVar5 = unaff_x19[1];
  }
  else {
    FUN_100de20f8(lVar5);
    _free(lVar5);
    lVar5 = unaff_x19[1];
  }
  if (lVar5 != 0) {
    _free(unaff_x19[2]);
  }
  lVar5 = *(long *)*unaff_x19;
  *(long *)*unaff_x19 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
    lVar5 = extraout_x8;
  }
  *unaff_x20 = 0;
  unaff_x20[1] = in_stack_000003f8 != 3 && in_stack_00000460 - 200 < 100;
  uVar6 = 1;
  *(long *)(unaff_x20 + 8) = lVar5;
LAB_101650820:
  *(undefined1 *)((long)unaff_x19 + 0x34) = uVar6;
  return;
}

