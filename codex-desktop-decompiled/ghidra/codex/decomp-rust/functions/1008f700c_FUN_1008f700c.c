
void FUN_1008f700c(void)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x19;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  undefined1 *in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00001088;
  undefined8 in_stack_00001090;
  undefined4 in_stack_00001098;
  undefined4 in_stack_0000109c;
  long in_stack_00001278;
  long in_stack_00001280;
  long in_stack_00001288;
  long in_stack_00001570;
  undefined8 in_stack_00001578;
  undefined8 in_stack_00001580;
  undefined8 in_stack_00001590;
  undefined8 in_stack_00001598;
  undefined8 in_stack_000015a0;
  undefined8 in_stack_000015a8;
  undefined8 in_stack_000015b0;
  undefined8 in_stack_000015b8;
  undefined8 in_stack_000015c0;
  undefined8 in_stack_000015c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001570,s_invalid_thread_id__108aca2c9,&stack0x00001030);
  uVar12 = (undefined4)in_stack_00001580;
  uVar16 = (undefined4)((ulong)in_stack_00001580 >> 0x20);
  unaff_x23[0xf] = in_stack_000015b0;
  unaff_x23[0xe] = in_stack_000015a8;
  unaff_x23[0x11] = in_stack_000015c0;
  unaff_x23[0x10] = in_stack_000015b8;
  unaff_x23[0x13] = 0xffffffffffff80a8;
  unaff_x23[0x12] = in_stack_000015c8;
  unaff_x23[0xb] = in_stack_00001590;
  unaff_x23[10] = 0x8000000000000005;
  unaff_x23[0xd] = in_stack_000015a0;
  unaff_x23[0xc] = in_stack_00001598;
  if (in_stack_00001570 == -0x8000000000000000) {
    *(undefined8 *)(unaff_x19 + 0x300) = in_stack_00001578;
    *(undefined4 *)(unaff_x19 + 0x308) = uVar12;
    *(undefined4 *)(unaff_x19 + 0x30c) = uVar16;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x2e0) + 0x198);
    uVar13 = *(undefined8 *)(lVar7 + 0x1b98);
    lVar7 = *(long *)(lVar7 + 0x1ba0);
    if (lVar7 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(lVar7);
      if (lVar3 == 0) {
        func_0x0001087c9084(1,lVar7);
        goto LAB_1008f78a0;
      }
    }
    _memcpy(lVar3,uVar13,lVar7);
    *(long *)(unaff_x19 + 0x310) = lVar7;
    *(long *)(unaff_x19 + 0x318) = lVar3;
    *(long *)(unaff_x19 + 800) = lVar7;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x2e0) + 0x1a8);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x308);
    lVar3 = *(long *)(unaff_x19 + 0x300);
    auVar25 = (**(code **)(lVar7 + 0xa0))
                        (*(long *)(*(long *)(unaff_x19 + 0x2e0) + 0x1a0) +
                         (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&stack0x00001570
                        );
    *(undefined1 (*) [16])(unaff_x19 + 0x528) = auVar25;
    (**(code **)(auVar25._8_8_ + 0x18))(&stack0x00001570);
    if (lVar3 == 3) {
      uVar5 = 3;
    }
    else {
      unaff_x23[0xa5] = in_stack_00001580;
      unaff_x23[0xa4] = uVar13;
      unaff_x23[0xa7] = in_stack_00001590;
      unaff_x23[0xa6] = 0x8000000000000005;
      _memcpy(&stack0x00001300,&stack0x00001598,0x250);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x528);
      puVar14 = *(undefined8 **)(unaff_x19 + 0x530);
      pcVar8 = (code *)*puVar14;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar10);
      }
      if (puVar14[1] != 0) {
        _free(uVar10);
      }
      if (lVar3 == 2) {
        __ZN16codex_app_server18request_processors16thread_processor26thread_store_archive_error17hc2330e62bdfebbb5E
                  (&stack0x00001088,&UNK_108cb299f,9,&stack0x00001550);
        uVar10 = unaff_x23[0x13];
        uVar13 = unaff_x23[0x12];
        uVar22 = unaff_x23[0x15];
        uVar19 = unaff_x23[0x14];
        unaff_x23[5] = uVar10;
        unaff_x23[4] = uVar13;
        unaff_x23[7] = uVar22;
        unaff_x23[6] = uVar19;
        uVar21 = unaff_x23[0x17];
        uVar18 = unaff_x23[0x16];
        uVar24 = unaff_x23[0xf];
        uVar23 = unaff_x23[0xe];
        uVar20 = unaff_x23[0x11];
        uVar17 = unaff_x23[0x10];
        *(undefined1 *)(unaff_x19 + 0x521) = 0;
        if (*(long *)(unaff_x19 + 0x310) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x318));
        }
        lVar7 = *(long *)(unaff_x19 + 0x2e8);
        in_stack_00001570 = in_stack_00001088;
        in_stack_00001578 = in_stack_00001090;
        uVar12 = in_stack_00001098;
        uVar16 = in_stack_0000109c;
        goto joined_r0x0001008f6fa0;
      }
      unaff_x23[0xc] = unaff_x23[0xa5];
      unaff_x23[0xb] = unaff_x23[0xa4];
      unaff_x23[0xe] = unaff_x23[0xa7];
      unaff_x23[0xd] = unaff_x23[0xa6];
      _memcpy(&stack0x000010a8,&stack0x00001300,0x250);
      unaff_x23[5] = unaff_x23[0x13];
      unaff_x23[4] = unaff_x23[0x12];
      unaff_x23[7] = unaff_x23[0x15];
      unaff_x23[6] = unaff_x23[0x14];
      unaff_x23[9] = unaff_x23[0x17];
      unaff_x23[8] = unaff_x23[0x16];
      unaff_x23[1] = unaff_x23[0xf];
      *unaff_x23 = unaff_x23[0xe];
      unaff_x23[3] = unaff_x23[0x11];
      unaff_x23[2] = unaff_x23[0x10];
      _memcpy(&stack0x00000e28,&stack0x00001348,0x208);
      *(undefined1 *)(unaff_x19 + 0x521) = 0;
      _memcpy(&stack0x00001570,&stack0x00000db8,0x278);
      __ZN16codex_app_server18request_processors16thread_processor25thread_from_stored_thread17h9999c464848c4bd4E
                (&stack0x00001080,&stack0x00001570,*(undefined8 *)(unaff_x19 + 0x318),
                 *(undefined8 *)(unaff_x19 + 800),
                 *(long *)(*(long *)(unaff_x19 + 0x2e0) + 0x198) + 0x1bc0);
      _memcpy(unaff_x19 + 0x328,&stack0x00001080,0x1f8);
      if (in_stack_00001278 != -0x8000000000000000) {
        lVar7 = in_stack_00001288 + 1;
        lVar4 = in_stack_00001280;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_100e068b8(lVar4);
          lVar4 = lVar4 + 0x1e0;
        }
        if (in_stack_00001278 != 0) {
          _free(in_stack_00001280);
        }
      }
      *(long *)(unaff_x19 + 0x528) = *(long *)(unaff_x19 + 0x2e0) + 0x1c0;
      *(undefined8 *)(unaff_x19 + 0x530) = *(undefined8 *)(unaff_x19 + 0x330);
      *(undefined8 *)(unaff_x19 + 0x538) = *(undefined8 *)(unaff_x19 + 0x338);
      *(undefined1 *)(unaff_x19 + 0x5c8) = 0;
      FUN_10088f808(&stack0x00001570,unaff_x19 + 0x528);
      if (lVar3 == -0x7ffffffffffffffd) {
        uVar5 = 4;
      }
      else {
        if ((((*(char *)(unaff_x19 + 0x5c8) == '\x03') && (*(char *)(unaff_x19 + 0x5c0) == '\x03'))
            && (*(char *)(unaff_x19 + 0x5b8) == '\x03')) && (*(char *)(unaff_x19 + 0x570) == '\x04')
           ) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x578);
          if (*(long *)(unaff_x19 + 0x580) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x580) + 0x18))(*(undefined8 *)(unaff_x19 + 0x588));
          }
        }
        if ((-0x7ffffffffffffffe < *(long *)(unaff_x19 + 0x490)) &&
           (*(long *)(unaff_x19 + 0x490) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x498));
        }
        *(long *)(unaff_x19 + 0x490) = lVar3;
        *(undefined8 *)(unaff_x19 + 0x4a0) = in_stack_00001580;
        *(undefined8 *)(unaff_x19 + 0x498) = uVar13;
        *(undefined8 *)(unaff_x19 + 0x528) = *(undefined8 *)(unaff_x19 + 0x2e0);
        *(long *)(unaff_x19 + 0x530) = unaff_x19 + 0x328;
        *(undefined8 *)(unaff_x19 + 0x540) = *(undefined8 *)(unaff_x19 + 0x308);
        *(undefined8 *)(unaff_x19 + 0x538) = *(undefined8 *)(unaff_x19 + 0x300);
        *(undefined1 *)(unaff_x19 + 0x560) = 0;
        iVar2 = FUN_10090196c(unaff_x19 + 0x528);
        if (iVar2 == 0) {
          if (*(char *)(unaff_x19 + 0x560) == '\x03') {
            uVar13 = *(undefined8 *)(unaff_x19 + 0x550);
            puVar14 = *(undefined8 **)(unaff_x19 + 0x558);
            pcVar8 = (code *)*puVar14;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar13);
            }
            if (puVar14[1] != 0) {
              _free(uVar13);
            }
          }
          uVar13 = *(undefined8 *)(unaff_x19 + 0x330);
          in_stack_00000000 = *(long *)(unaff_x19 + 0x338);
          if (in_stack_00000000 == 0) {
            in_stack_00000008 = 1;
          }
          else {
            in_stack_00000008 = _malloc(in_stack_00000000);
            if (in_stack_00000008 == 0) {
              func_0x0001087c9084(1,in_stack_00000000);
              goto LAB_1008f78a0;
            }
          }
          _memcpy(in_stack_00000008,uVar13,in_stack_00000000);
          uVar24 = *(undefined8 *)(unaff_x19 + 0x350);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x348);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x360);
          uVar17 = *(undefined8 *)(unaff_x19 + 0x358);
          uVar10 = *(undefined8 *)(unaff_x19 + 0x370);
          uVar13 = *(undefined8 *)(unaff_x19 + 0x368);
          uVar22 = *(undefined8 *)(unaff_x19 + 0x380);
          uVar19 = *(undefined8 *)(unaff_x19 + 0x378);
          uVar21 = *(undefined8 *)(unaff_x19 + 0x390);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x388);
          lVar7 = *(long *)(unaff_x19 + 0x328);
          in_stack_00001570 = *(long *)(unaff_x19 + 0x330);
          in_stack_00001578 = *(undefined8 *)(unaff_x19 + 0x338);
          uVar12 = *(undefined4 *)(unaff_x19 + 0x340);
          uVar16 = *(undefined4 *)(unaff_x19 + 0x344);
          _memcpy(&stack0x00001808,unaff_x19 + 0x398,0x188);
          *(undefined1 *)(unaff_x19 + 0x521) = 0;
          if (*(long *)(unaff_x19 + 0x310) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x318));
          }
          if (*(long *)(unaff_x19 + 0x2e8) != 0) goto LAB_1008f7660;
          goto LAB_1008f7668;
        }
        uVar5 = 5;
      }
    }
    *in_stack_00000020 = uVar5;
LAB_1008f7380:
    *in_stack_00000018 = 4;
    *in_stack_00000030 = 0x8000000000000071;
    uVar5 = 3;
    goto LAB_1008f7544;
  }
  uVar24 = unaff_x23[0xb];
  uVar23 = unaff_x23[10];
  uVar20 = unaff_x23[0xd];
  uVar17 = unaff_x23[0xc];
  uVar10 = unaff_x23[0xf];
  uVar13 = unaff_x23[0xe];
  uVar22 = unaff_x23[0x11];
  uVar19 = unaff_x23[0x10];
  uVar21 = unaff_x23[0x13];
  uVar18 = unaff_x23[0x12];
  lVar7 = *(long *)(unaff_x19 + 0x2e8);
joined_r0x0001008f6fa0:
  if (lVar7 == 0) {
    unaff_x27[0xff] = uVar20;
    unaff_x27[0xfe] = uVar17;
    unaff_x27[0x101] = uVar10;
    unaff_x27[0x100] = uVar13;
    unaff_x27[0x103] = uVar22;
    unaff_x27[0x102] = uVar19;
    unaff_x27[0x105] = uVar21;
    unaff_x27[0x104] = uVar18;
    unaff_x27[0xfd] = uVar24;
    unaff_x27[0xfc] = uVar23;
    _memcpy(&stack0x00000818,&stack0x00001808,0x188);
    *in_stack_00000020 = 1;
    lVar7 = -0x8000000000000000;
  }
  else {
    lVar7 = -0x8000000000000000;
LAB_1008f7660:
    _free(*(undefined8 *)(unaff_x19 + 0x2f0));
LAB_1008f7668:
    unaff_x27[0xff] = uVar20;
    unaff_x27[0xfe] = uVar17;
    unaff_x27[0x101] = uVar10;
    unaff_x27[0x100] = uVar13;
    unaff_x27[0x103] = uVar22;
    unaff_x27[0x102] = uVar19;
    unaff_x27[0x105] = uVar21;
    unaff_x27[0x104] = uVar18;
    unaff_x27[0xfd] = uVar24;
    unaff_x27[0xfc] = uVar23;
    _memcpy(&stack0x00000818,&stack0x00001808,0x188);
    *in_stack_00000020 = 1;
    if (lVar7 == -0x7fffffffffffffff) goto LAB_1008f7380;
  }
  unaff_x27[0x13b] = unaff_x27[0xff];
  unaff_x27[0x13a] = unaff_x27[0xfe];
  unaff_x27[0x13d] = unaff_x27[0x101];
  unaff_x27[0x13c] = unaff_x27[0x100];
  unaff_x27[0x13f] = unaff_x27[0x103];
  unaff_x27[0x13e] = unaff_x27[0x102];
  unaff_x27[0x141] = unaff_x27[0x105];
  unaff_x27[0x140] = unaff_x27[0x104];
  unaff_x27[0x139] = unaff_x27[0xfd];
  unaff_x27[0x138] = unaff_x27[0xfc];
  _memcpy(&stack0x000009f8,&stack0x00000818,0x188);
  FUN_100d58550(unaff_x26);
  unaff_x27[0x177] = unaff_x27[0x13b];
  unaff_x27[0x176] = unaff_x27[0x13a];
  unaff_x27[0x179] = unaff_x27[0x13d];
  unaff_x27[0x178] = unaff_x27[0x13c];
  unaff_x27[0x17b] = unaff_x27[0x13f];
  unaff_x27[0x17a] = unaff_x27[0x13e];
  unaff_x27[0x17d] = unaff_x27[0x141];
  unaff_x27[0x17c] = unaff_x27[0x140];
  unaff_x27[0x175] = unaff_x27[0x139];
  unaff_x27[0x174] = unaff_x27[0x138];
  if (lVar7 == -0x8000000000000000) {
    iVar2 = *(int *)(unaff_x19 + 0x2b0);
    if (iVar2 != 0) {
      pcVar11 = *(char **)(unaff_x19 + 0x2a8);
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar11,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar11,iVar2,pcVar11);
    }
    if (((*(byte *)(unaff_x19 + 0x2b9) & 1) != 0) && (*(long *)(unaff_x19 + 0x2c0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x2c8));
    }
    *(undefined1 *)(unaff_x19 + 0x2b9) = 0;
    lVar7 = -0x8000000000000000;
  }
  else {
    _memcpy(&stack0x00000bd8,&stack0x000009f8,0x188);
    iVar2 = *(int *)(unaff_x19 + 0x2b0);
    if (iVar2 != 0) {
      pcVar11 = *(char **)(unaff_x19 + 0x2a8);
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar11,extraout_x1_00,1000000000);
      }
      FUN_1060fa678(pcVar11,iVar2,pcVar11);
    }
    *(undefined1 *)(unaff_x19 + 0x2b9) = 0;
    unaff_x26 = in_stack_00000000;
  }
  unaff_x27[5] = unaff_x27[0x179];
  unaff_x27[4] = unaff_x27[0x178];
  unaff_x27[7] = unaff_x27[0x17b];
  unaff_x27[6] = unaff_x27[0x17a];
  unaff_x27[9] = unaff_x27[0x17d];
  unaff_x27[8] = unaff_x27[0x17c];
  unaff_x27[1] = unaff_x27[0x175];
  *unaff_x27 = unaff_x27[0x174];
  unaff_x27[3] = unaff_x27[0x177];
  unaff_x27[2] = unaff_x27[0x176];
  _memcpy(&stack0x00000038,&stack0x00000bd8,0x188);
  *(undefined1 *)(unaff_x19 + 0x2b8) = 1;
  plVar9 = (long *)(unaff_x19 + 0x68);
  *plVar9 = lVar7;
  *(long *)(unaff_x19 + 0x70) = in_stack_00001570;
  *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00001578;
  *(undefined4 *)(unaff_x19 + 0x80) = uVar12;
  *(undefined4 *)(unaff_x19 + 0x84) = uVar16;
  uVar13 = unaff_x27[4];
  uVar19 = unaff_x27[7];
  uVar10 = unaff_x27[6];
  *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x27[5];
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar13;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar19;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar10;
  uVar13 = unaff_x27[8];
  *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x27[9];
  *(undefined8 *)(unaff_x19 + 200) = uVar13;
  uVar19 = *unaff_x27;
  uVar10 = unaff_x27[3];
  uVar13 = unaff_x27[2];
  *(undefined8 *)(unaff_x19 + 0x90) = unaff_x27[1];
  *(undefined8 *)(unaff_x19 + 0x88) = uVar19;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar13;
  _memcpy(unaff_x19 + 0xd8,&stack0x00000038,0x188);
  *(long *)(unaff_x19 + 0x260) = unaff_x26;
  *(long *)(unaff_x19 + 0x268) = in_stack_00000008;
  *(long *)(unaff_x19 + 0x270) = unaff_x26;
  FUN_100d50738(in_stack_00000028);
  if (*plVar9 == -0x8000000000000000) {
    uVar13 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar19 = *(undefined8 *)(unaff_x19 + 200);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    unaff_x27[0x53] = *(undefined8 *)(unaff_x19 + 0xb8);
    unaff_x27[0x52] = uVar13;
    unaff_x27[0x55] = uVar19;
    unaff_x27[0x54] = uVar10;
    lVar7 = *(long *)(unaff_x19 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x80);
    unaff_x27[0x4b] = *(undefined8 *)(unaff_x19 + 0x78);
    unaff_x27[0x4a] = lVar7;
    unaff_x27[0x4d] = uVar10;
    unaff_x27[0x4c] = uVar13;
    uVar22 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar19 = *(undefined8 *)(unaff_x19 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
    uVar13 = 0x8000000000000070;
    unaff_x27[0x4f] = *(undefined8 *)(unaff_x19 + 0x98);
    unaff_x27[0x4e] = uVar22;
    unaff_x27[0x51] = uVar19;
    unaff_x27[0x50] = uVar10;
    uVar6 = *(ulong *)(unaff_x19 + 0x48);
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x27a) = 1;
    _memcpy(&stack0x00000218,plVar9,0x1f8);
    *(undefined1 *)(unaff_x19 + 0x279) = 1;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x268);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x260);
    in_stack_00000028[2] = *(undefined8 *)(unaff_x19 + 0x270);
    in_stack_00000028[1] = uVar10;
    *in_stack_00000028 = uVar13;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x40) + 400);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x60);
    if (*(long *)(unaff_x19 + 0x48) == -0x8000000000000000) {
      lVar4 = *(long *)(unaff_x19 + 0x50);
      lVar3 = -0x8000000000000000;
      lVar15 = *(long *)(unaff_x19 + 0x58);
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x50);
      lVar3 = *(long *)(unaff_x19 + 0x58);
      if (lVar3 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar3);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar3);
LAB_1008f78a0:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008f78a4);
          (*pcVar8)();
        }
      }
      _memcpy(lVar4,uVar10,lVar3);
      lVar15 = lVar3;
    }
    lVar7 = lVar7 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x27a) = 0;
    _memcpy(unaff_x19 + 0x298,&stack0x00000218,0x1f8);
    *(long *)(unaff_x19 + 0x490) = lVar3;
    *(long *)(unaff_x19 + 0x498) = lVar4;
    *(long *)(unaff_x19 + 0x4a0) = lVar15;
    *(undefined8 *)(unaff_x19 + 0x4a8) = uVar13;
    *(long *)(unaff_x19 + 0x4b0) = lVar7;
    puVar1 = (undefined1 *)(unaff_x19 + 0x12b8);
    *puVar1 = 0;
    *(long *)(unaff_x19 + 0x4b8) = lVar3;
    *(long *)(unaff_x19 + 0x4c0) = lVar4;
    *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(unaff_x19 + 0x4a8);
    *(undefined8 *)(unaff_x19 + 0x4c8) = *(undefined8 *)(unaff_x19 + 0x4a0);
    *(undefined8 *)(unaff_x19 + 0x4d8) = 0x8000000000000010;
    _memcpy(unaff_x19 + 0x4e0,unaff_x19 + 0x298,0x1f8);
    *(long *)(unaff_x19 + 0x890) = lVar7;
    *(undefined1 *)(unaff_x19 + 0x928) = 0;
    uVar6 = FUN_100892e70(unaff_x19 + 0x4b8);
    if ((uVar6 & 1) != 0) {
      *puVar1 = 3;
      *in_stack_00000030 = 0x8000000000000071;
      uVar5 = 4;
      goto LAB_1008f7544;
    }
    FUN_100cf6de0(unaff_x19 + 0x4b8);
    *puVar1 = 1;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x40) + 400) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x279) = 0;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x280);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x290);
    *(undefined8 *)(unaff_x19 + 0x280) = 0x8000000000000004;
    *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x288);
    *(undefined8 *)(unaff_x19 + 0x288) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x298) = uVar13;
    *(long *)(unaff_x19 + 0x478) = lVar7;
    *(undefined1 *)(unaff_x19 + 0xf50) = 0;
    _memcpy(unaff_x19 + 0x480,unaff_x19 + 0x280,0x1f8);
    *(long *)(unaff_x19 + 0x678) = lVar7;
    *(undefined8 *)(unaff_x19 + 0x680) = 8;
    *(undefined8 *)(unaff_x19 + 0x688) = 0;
    *(undefined1 *)(unaff_x19 + 0x890) = 0;
    uVar6 = FUN_100897c70(unaff_x19 + 0x480);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0xf50) = 3;
      *in_stack_00000030 = 0x8000000000000071;
      uVar5 = 5;
      goto LAB_1008f7544;
    }
    FUN_100d40d08(unaff_x19 + 0x480);
    *(undefined1 *)(unaff_x19 + 0xf50) = 1;
    *(undefined2 *)(unaff_x19 + 0x279) = 0;
    uVar13 = 0x800000000000006f;
    uVar6 = *(ulong *)(unaff_x19 + 0x48);
  }
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x50));
  }
  *in_stack_00000030 = uVar13;
  _memcpy(in_stack_00000030 + 1,&stack0x00000410,0x3b0);
  uVar5 = 1;
LAB_1008f7544:
  *(undefined1 *)(unaff_x19 + 0x278) = uVar5;
  return;
}

