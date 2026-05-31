
void FUN_10091ce50(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  ulong uVar7;
  long unaff_x24;
  long unaff_x25;
  ulong uVar8;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000000;
  undefined1 *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined7 uStack0000000000000058;
  undefined1 uStack000000000000005f;
  undefined7 uStack0000000000000060;
  undefined8 uStack0000000000000067;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xd8,s_invalid_login_id__108acb434,unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0x78) = 0xffffffffffff80a8;
  *(undefined8 *)(unaff_x29 + -0xc0) = unaff_x22;
  uVar7 = *(ulong *)(unaff_x29 + -0xd8);
  bVar2 = *(byte *)(unaff_x29 + -0xd0);
  uVar8 = (ulong)bVar2;
  uVar5 = *(undefined8 *)(unaff_x27 + 0xf1);
  *(undefined8 *)(unaff_x27 + 7) = *(undefined8 *)(unaff_x29 + -200);
  uVar11 = *(undefined8 *)(unaff_x29 + -0xa8);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar15 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar19 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar18 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar16 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
  uVar17 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xc0);
  if (uVar7 == 0x8000000000000000) {
    *(undefined8 *)(unaff_x25 + 199) = *(undefined8 *)(unaff_x27 + 7);
    *(undefined8 *)(unaff_x25 + 0xd7) = *(undefined8 *)(unaff_x25 + 199);
    *(long *)(unaff_x19 + 0x58) = unaff_x24;
    *(byte *)(unaff_x19 + 0x60) = bVar2;
    *(undefined8 *)(unaff_x19 + 0x61) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x25 + 0xd7);
    *(undefined1 *)(unaff_x19 + 0xf8) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x19 + 0x60);
    *(long *)(unaff_x19 + 0x80) = *(long *)(unaff_x24 + 0x158) + 0x10;
    *(undefined1 *)(unaff_x19 + 0xf0) = 0;
    auVar20 = FUN_100fd3e50(unaff_x19 + 0x80);
    uVar5 = auVar20._8_8_;
    pcVar3 = auVar20._0_8_;
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(unaff_x19 + 0xf8) = 3;
      *in_stack_00000008 = 3;
      goto LAB_10091d0c4;
    }
    if (((*(char *)(unaff_x19 + 0xf0) == '\x03') && (*(char *)(unaff_x19 + 0xe8) == '\x03')) &&
       (*(char *)(unaff_x19 + 0xa0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0xa8);
      uVar5 = extraout_x1;
      if (*(long *)(unaff_x19 + 0xb0) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0xb0) + 0x18))(*(undefined8 *)(unaff_x19 + 0xb8));
        uVar5 = extraout_x1_00;
      }
    }
    cVar1 = pcVar3[0x28];
    uVar8 = 1;
    if (cVar1 != '\x02') {
      if (*(long *)(pcVar3 + 0x31) == *(long *)(unaff_x19 + 0x78) &&
          *(long *)(pcVar3 + 0x29) == *(long *)(unaff_x19 + 0x70)) {
        lVar10 = *(long *)(pcVar3 + 0x29);
        *(undefined8 *)(unaff_x29 + -0xcf) = *(undefined8 *)(pcVar3 + 0x31);
        *(long *)(unaff_x29 + -0xd7) = lVar10;
        uVar5 = *(undefined8 *)(pcVar3 + 0x38);
        *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(pcVar3 + 0x40);
        *(undefined8 *)(unaff_x29 + -200) = uVar5;
        pcVar3[0x28] = '\x02';
        *(char *)(unaff_x29 + -0xd8) = cVar1;
        FUN_100e65408(unaff_x29 + -0xd8);
        uVar8 = 0;
        uVar5 = extraout_x1_01;
      }
      else {
        uVar8 = 1;
      }
    }
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar3,uVar5,1000000000);
    }
    FUN_1060fa678(pcVar3,1,pcVar3);
    *(undefined1 *)(unaff_x19 + 0xf8) = 1;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x48));
    }
    uStack0000000000000038 = *(undefined8 *)(unaff_x27 + 0xb0);
    uStack0000000000000030 = *(undefined8 *)(unaff_x27 + 0xa8);
    uStack0000000000000048 = *(undefined8 *)(unaff_x27 + 0xc0);
    uStack0000000000000040 = *(undefined8 *)(unaff_x27 + 0xb8);
    uStack0000000000000050 = *(undefined8 *)(unaff_x27 + 200);
    uStack0000000000000058 = (undefined7)*(undefined8 *)(unaff_x27 + 0xd0);
    uStack0000000000000067 = *(undefined8 *)(unaff_x27 + 0xdf);
    uStack000000000000005f = (undefined1)*(undefined8 *)(unaff_x27 + 0xd7);
    uStack0000000000000060 = (undefined7)((ulong)*(undefined8 *)(unaff_x27 + 0xd7) >> 8);
    uStack0000000000000018 = *(undefined8 *)(unaff_x27 + 0x90);
    uStack0000000000000010 = *(undefined8 *)(unaff_x27 + 0x88);
    uStack0000000000000028 = *(undefined8 *)(unaff_x27 + 0xa0);
    uStack0000000000000020 = *(undefined8 *)(unaff_x27 + 0x98);
    *in_stack_00000008 = 1;
    uVar7 = 0x8000000000000000;
  }
  else {
    *(undefined8 *)(unaff_x25 + 199) = *(undefined8 *)(unaff_x27 + 7);
    *(undefined8 *)(unaff_x27 + 0x8f) = *(undefined8 *)(unaff_x25 + 199);
    *(undefined8 *)(unaff_x27 + 0x9f) = uVar17;
    *(undefined8 *)(unaff_x27 + 0x97) = uVar14;
    *(undefined8 *)(unaff_x27 + 0xdf) = uVar16;
    *(undefined8 *)(unaff_x27 + 0xd7) = uVar13;
    *(undefined8 *)(unaff_x27 + 0xcf) = uVar19;
    *(undefined8 *)(unaff_x27 + 199) = uVar18;
    *(undefined8 *)(unaff_x27 + 0xbf) = uVar15;
    *(undefined8 *)(unaff_x27 + 0xb7) = uVar12;
    *(undefined8 *)(unaff_x27 + 0xaf) = uVar11;
    *(undefined8 *)(unaff_x27 + 0xa7) = uVar9;
    if (*unaff_x28 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x48));
    }
    uStack0000000000000038 = *(undefined8 *)(unaff_x27 + 0xb0);
    uStack0000000000000030 = *(undefined8 *)(unaff_x27 + 0xa8);
    uStack0000000000000048 = *(undefined8 *)(unaff_x27 + 0xc0);
    uStack0000000000000040 = *(undefined8 *)(unaff_x27 + 0xb8);
    uStack0000000000000050 = *(undefined8 *)(unaff_x27 + 200);
    uStack0000000000000058 = (undefined7)*(undefined8 *)(unaff_x27 + 0xd0);
    uStack0000000000000067 = *(undefined8 *)(unaff_x27 + 0xdf);
    uStack000000000000005f = (undefined1)*(undefined8 *)(unaff_x27 + 0xd7);
    uStack0000000000000060 = (undefined7)((ulong)*(undefined8 *)(unaff_x27 + 0xd7) >> 8);
    uStack0000000000000018 = *(undefined8 *)(unaff_x27 + 0x90);
    uStack0000000000000010 = *(undefined8 *)(unaff_x27 + 0x88);
    uStack0000000000000028 = *(undefined8 *)(unaff_x27 + 0xa0);
    uStack0000000000000020 = *(undefined8 *)(unaff_x27 + 0x98);
    *in_stack_00000008 = 1;
    if (uVar7 == 0x8000000000000001) {
LAB_10091d0c4:
      *unaff_x21 = 0x8000000000000071;
      uVar4 = 3;
      goto LAB_10091d228;
    }
  }
  uVar4 = (undefined1)uVar8;
  uVar5 = CONCAT17(uStack000000000000005f,uStack0000000000000058);
  *(undefined8 *)(unaff_x25 + 0x57) = uStack0000000000000067;
  *(ulong *)(unaff_x25 + 0x4f) = CONCAT71(uStack0000000000000060,uStack000000000000005f);
  FUN_100d526e8(in_stack_00000000);
  if (uVar7 == 0x8000000000000000) {
    uVar6 = 0;
    uVar9 = 0x8000000000000053;
    uVar7 = uVar8;
    uVar4 = extraout_w10;
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff00;
    in_stack_000000f8 = uStack0000000000000038;
    in_stack_000000f0 = uStack0000000000000030;
    in_stack_00000108 = uStack0000000000000048;
    in_stack_00000100 = uStack0000000000000040;
    in_stack_00000110 = uStack0000000000000050;
    *(undefined8 *)(unaff_x25 + 0xb7) = *(undefined8 *)(unaff_x25 + 0x57);
    *(undefined8 *)(unaff_x25 + 0xaf) = *(undefined8 *)(unaff_x25 + 0x4f);
    uVar9 = 0x8000000000000070;
    in_stack_000000d8 = uStack0000000000000018;
    in_stack_000000d0 = uStack0000000000000010;
    in_stack_000000e8 = uStack0000000000000028;
    in_stack_000000e0 = uStack0000000000000020;
    in_stack_00000118 = uVar5;
  }
  *(undefined8 *)((long)unaff_x21 + 0x39) = in_stack_000000f8;
  *(undefined8 *)((long)unaff_x21 + 0x31) = in_stack_000000f0;
  *(undefined8 *)((long)unaff_x21 + 0x49) = in_stack_00000108;
  *(undefined8 *)((long)unaff_x21 + 0x41) = in_stack_00000100;
  *(undefined8 *)((long)unaff_x21 + 0x59) = in_stack_00000118;
  *(undefined8 *)((long)unaff_x21 + 0x51) = in_stack_00000110;
  uVar5 = *(undefined8 *)(unaff_x25 + 0xaf);
  unaff_x21[0xd] = *(undefined8 *)(unaff_x25 + 0xb7);
  unaff_x21[0xc] = uVar5;
  *(undefined8 *)((long)unaff_x21 + 0x19) = in_stack_000000d8;
  *(undefined8 *)((long)unaff_x21 + 0x11) = in_stack_000000d0;
  *unaff_x21 = uVar9;
  unaff_x21[1] = uVar6 | uVar7 & 0xff;
  *(undefined1 *)(unaff_x21 + 2) = uVar4;
  uVar4 = 1;
  *(undefined8 *)((long)unaff_x21 + 0x29) = in_stack_000000e8;
  *(undefined8 *)((long)unaff_x21 + 0x21) = in_stack_000000e0;
LAB_10091d228:
  *(undefined1 *)(unaff_x19 + 0x108) = uVar4;
  return;
}

