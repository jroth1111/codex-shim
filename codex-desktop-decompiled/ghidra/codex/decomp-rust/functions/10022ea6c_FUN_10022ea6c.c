
void FUN_10022ea6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *unaff_x19;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  long lVar7;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
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
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined *in_stack_00000028;
  undefined8 in_stack_00000040;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  uint uStack00000000000000d8;
  int iStack00000000000000dc;
  long in_stack_000000e0;
  undefined1 in_stack_000000e8;
  undefined8 in_stack_000001b8;
  undefined *in_stack_00000340;
  undefined *puVar20;
  undefined *in_stack_00000348;
  undefined *in_stack_00000350;
  undefined *in_stack_00000358;
  long in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s___108aba6c8,param_3);
LAB_10022eafc:
    uVar5 = *(undefined8 *)(unaff_x29 + -0xd8);
    *(long *)(unaff_x29 + -0xc0) = *(long *)(unaff_x29 + -0xc0) + 1;
    uVar8 = *(undefined8 *)(unaff_x29 + -0x78);
    unaff_x28[0x37] = *(undefined8 *)(unaff_x29 + -0x70);
    unaff_x28[0x36] = uVar8;
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
    FUN_100216644(&stack0x00000340,unaff_x29 + -0xb0,unaff_x22);
    if (in_stack_00000340 != unaff_x26) {
      if ((*(ulong *)(unaff_x29 + -0xf0) & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xe8));
      }
      if (in_stack_00000618 != 0) {
        _free(in_stack_00000620);
      }
LAB_10022ec64:
      puVar2 = (undefined8 *)_malloc(0x18);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = in_stack_00000340;
        puVar2[1] = in_stack_00000348;
        puVar2[2] = in_stack_00000350;
        in_stack_00000010[1] = puVar2;
        in_stack_00000010[2] = &UNK_10b1ef400;
        *in_stack_00000010 = 2;
        if (in_stack_000000e0 != 3) {
          FUN_100248434(&stack0x000000e0);
        }
        goto LAB_10022efcc;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10022f0e4;
    }
    unaff_x22 = unaff_x22 + 0x18;
    unaff_x23 = unaff_x23 + -0x18;
    if (unaff_x23 == 0) {
      uVar5 = unaff_x28[0x2e];
      uVar9 = unaff_x28[0x31];
      uVar8 = unaff_x28[0x30];
      unaff_x27[1] = unaff_x28[0x2f];
      *unaff_x27 = uVar5;
      unaff_x27[3] = uVar9;
      unaff_x27[2] = uVar8;
      uVar5 = unaff_x28[0x32];
      uVar9 = unaff_x28[0x35];
      uVar8 = unaff_x28[0x34];
      unaff_x27[5] = unaff_x28[0x33];
      unaff_x27[4] = uVar5;
      unaff_x27[7] = uVar9;
      unaff_x27[6] = uVar8;
      __ZN16aws_smithy_query15QueryListWriter6finish17h313fff9157063243E(&stack0x00000340);
      puVar20 = in_stack_00000340;
      in_stack_00000340 = in_stack_00000348;
      in_stack_00000348 = in_stack_00000350;
      in_stack_00000350 = in_stack_00000358;
      if (in_stack_000000c0 != -0x8000000000000000) {
        puVar20 = (undefined *)0x8000000000000000;
        in_stack_00000340 = &UNK_108c70718;
        in_stack_00000348 = (undefined *)0x6;
        __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
                  (&stack0x00000340,in_stack_000000c8,in_stack_000000d0);
        in_stack_00000350 = in_stack_00000028;
      }
      if ((uStack00000000000000d8 & 1) == 0) {
        unaff_x28[0x2f] = in_stack_00000620;
        unaff_x28[0x2e] = in_stack_00000618;
        *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000628;
        __ZN100__LT_aws_smithy_types__body__SdkBody_u20_as_u20_core__convert__From_LT_alloc__string__String_GT__GT_4from17ha496c0af3f3542c5E
                  (&stack0x00000340,unaff_x29 + -0xf0);
      }
      else {
        puVar20 = (undefined *)0x8000000000000000;
        in_stack_00000340 = &UNK_108c7071e;
        in_stack_00000348 = (undefined *)0xf;
        *(undefined8 *)(unaff_x29 + -0xf0) = 1;
        *(long *)(unaff_x29 + -0xe8) = (long)iStack00000000000000dc;
        __ZN16aws_smithy_query16QueryValueWriter6number17ha02e422c9cf88a10E
                  (&stack0x00000340,unaff_x29 + -0xf0);
        unaff_x28[0x2f] = in_stack_00000620;
        unaff_x28[0x2e] = in_stack_00000618;
        *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000628;
        __ZN100__LT_aws_smithy_types__body__SdkBody_u20_as_u20_core__convert__From_LT_alloc__string__String_GT__GT_4from17ha496c0af3f3542c5E
                  (&stack0x00000340,unaff_x29 + -0xf0);
        in_stack_00000350 = in_stack_00000028;
      }
      uVar5 = unaff_x27[8];
      uVar9 = unaff_x27[0xb];
      uVar8 = unaff_x27[10];
      unaff_x28[5] = unaff_x27[9];
      unaff_x28[4] = uVar5;
      unaff_x28[7] = uVar9;
      unaff_x28[6] = uVar8;
      uVar5 = unaff_x27[0xc];
      unaff_x28[9] = unaff_x27[0xd];
      unaff_x28[8] = uVar5;
      uVar5 = unaff_x27[4];
      uVar9 = unaff_x27[7];
      uVar8 = unaff_x27[6];
      unaff_x28[1] = unaff_x27[5];
      *unaff_x28 = uVar5;
      unaff_x28[3] = uVar9;
      unaff_x28[2] = uVar8;
      if (puVar20 == (undefined *)0x3) goto LAB_10022ec64;
      uVar11 = unaff_x28[5];
      uVar5 = unaff_x28[4];
      uVar17 = unaff_x28[7];
      uVar14 = unaff_x28[6];
      uVar12 = unaff_x28[9];
      uVar8 = unaff_x28[8];
      uVar13 = unaff_x28[1];
      uVar9 = *unaff_x28;
      uVar18 = unaff_x28[3];
      uVar15 = unaff_x28[2];
      if (puVar20 == (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
        if (in_stack_00000340 != (undefined *)0x0) {
          puVar3 = in_stack_00000350;
        }
LAB_10022ed84:
        lVar4 = FUN_1055b41a0(puVar3,&stack0x00000340,0x14);
        lVar7 = 0x14 - lVar4;
        if (lVar4 == 0x14) {
          lVar6 = 1;
        }
        else {
          lVar6 = _malloc(lVar7);
          if (lVar6 == 0) {
            FUN_107c03c64(1,lVar7);
            goto LAB_10022f0e4;
          }
        }
        _memcpy(lVar6,&stack0x00000340 + lVar4,lVar7);
        uVar10 = unaff_x20[0x14];
        uVar19 = unaff_x20[0x17];
        uVar16 = unaff_x20[0x16];
        unaff_x27[0x15] = unaff_x20[0x15];
        unaff_x27[0x14] = uVar10;
        unaff_x27[0x17] = uVar19;
        unaff_x27[0x16] = uVar16;
        uVar10 = unaff_x20[0x18];
        uVar19 = unaff_x20[0x1b];
        uVar16 = unaff_x20[0x1a];
        unaff_x27[0x19] = unaff_x20[0x19];
        unaff_x27[0x18] = uVar10;
        unaff_x27[0x1b] = uVar19;
        unaff_x27[0x1a] = uVar16;
        uVar10 = unaff_x20[0xc];
        uVar19 = unaff_x20[0xf];
        uVar16 = unaff_x20[0xe];
        unaff_x27[0xd] = unaff_x20[0xd];
        unaff_x27[0xc] = uVar10;
        unaff_x27[0xf] = uVar19;
        unaff_x27[0xe] = uVar16;
        uVar10 = unaff_x20[0x10];
        uVar19 = unaff_x20[0x13];
        uVar16 = unaff_x20[0x12];
        unaff_x27[0x11] = unaff_x20[0x11];
        unaff_x27[0x10] = uVar10;
        unaff_x27[0x13] = uVar19;
        unaff_x27[0x12] = uVar16;
        uVar10 = unaff_x20[4];
        uVar19 = unaff_x20[7];
        uVar16 = unaff_x20[6];
        unaff_x27[5] = unaff_x20[5];
        unaff_x27[4] = uVar10;
        unaff_x27[7] = uVar19;
        unaff_x27[6] = uVar16;
        uVar10 = unaff_x20[8];
        uVar19 = unaff_x20[0xb];
        uVar16 = unaff_x20[10];
        unaff_x27[9] = unaff_x20[9];
        unaff_x27[8] = uVar10;
        unaff_x27[0xb] = uVar19;
        unaff_x27[10] = uVar16;
        uVar10 = *unaff_x20;
        uVar19 = unaff_x20[3];
        uVar16 = unaff_x20[2];
        unaff_x27[1] = unaff_x20[1];
        *unaff_x27 = uVar10;
        unaff_x27[3] = uVar19;
        unaff_x27[2] = uVar16;
        FUN_100216c84(&stack0x000004c0,in_stack_00000040._4_4_,in_stack_00000020._4_4_,
                      &stack0x00000340,&UNK_108c70810,lVar6,lVar7);
        uVar10 = unaff_x28[0x14];
        uVar19 = unaff_x28[0x17];
        uVar16 = unaff_x28[0x16];
        unaff_x20[0x15] = unaff_x28[0x15];
        unaff_x20[0x14] = uVar10;
        unaff_x20[0x17] = uVar19;
        unaff_x20[0x16] = uVar16;
        uVar10 = unaff_x28[0x18];
        uVar19 = unaff_x28[0x1b];
        uVar16 = unaff_x28[0x1a];
        unaff_x20[0x19] = unaff_x28[0x19];
        unaff_x20[0x18] = uVar10;
        unaff_x20[0x1b] = uVar19;
        unaff_x20[0x1a] = uVar16;
        uVar10 = unaff_x28[0xc];
        uVar19 = unaff_x28[0xf];
        uVar16 = unaff_x28[0xe];
        unaff_x20[0xd] = unaff_x28[0xd];
        unaff_x20[0xc] = uVar10;
        unaff_x20[0xf] = uVar19;
        unaff_x20[0xe] = uVar16;
        uVar10 = unaff_x28[0x10];
        uVar19 = unaff_x28[0x13];
        uVar16 = unaff_x28[0x12];
        unaff_x20[0x11] = unaff_x28[0x11];
        unaff_x20[0x10] = uVar10;
        unaff_x20[0x13] = uVar19;
        unaff_x20[0x12] = uVar16;
        uVar10 = unaff_x28[4];
        uVar19 = unaff_x28[7];
        uVar16 = unaff_x28[6];
        unaff_x20[5] = unaff_x28[5];
        unaff_x20[4] = uVar10;
        unaff_x20[7] = uVar19;
        unaff_x20[6] = uVar16;
        uVar10 = unaff_x28[8];
        uVar19 = unaff_x28[0xb];
        uVar16 = unaff_x28[10];
        unaff_x20[9] = unaff_x28[9];
        unaff_x20[8] = uVar10;
        unaff_x20[0xb] = uVar19;
        unaff_x20[10] = uVar16;
        uVar10 = *unaff_x28;
        uVar19 = unaff_x28[3];
        uVar16 = unaff_x28[2];
        unaff_x20[1] = unaff_x28[1];
        *unaff_x20 = uVar10;
        unaff_x20[3] = uVar19;
        unaff_x20[2] = uVar16;
        if (lVar4 != 0x14) {
          _free(lVar6);
        }
      }
      else {
        if (puVar20 != (undefined *)0x1) {
          puVar3 = (undefined *)0x0;
          goto LAB_10022ed84;
        }
        if (((ulong)in_stack_00000340 & 1) == 0) {
          (**(code **)(in_stack_00000350 + 0x30))(&stack0x00000340,in_stack_00000348);
        }
        else {
          (**(code **)(in_stack_00000350 + 0x28))(&stack0x00000340,in_stack_00000348);
        }
        puVar3 = in_stack_00000340;
        if (in_stack_00000348 == in_stack_00000340) goto LAB_10022ed84;
      }
      unaff_x27[9] = uVar11;
      unaff_x27[8] = uVar5;
      unaff_x27[0xb] = uVar17;
      unaff_x27[10] = uVar14;
      unaff_x27[0xd] = uVar12;
      unaff_x27[0xc] = uVar8;
      unaff_x27[1] = in_stack_00000340;
      *unaff_x27 = puVar20;
      unaff_x27[3] = in_stack_00000350;
      unaff_x27[2] = in_stack_00000348;
      unaff_x27[5] = uVar13;
      unaff_x27[4] = uVar9;
      unaff_x27[7] = uVar18;
      unaff_x27[6] = uVar15;
      if (in_stack_000000e0 == 3) {
        FUN_100248a54(&stack0x00000340);
        FUN_107c05cb4(&UNK_108c7144c,0xd,&stack0x00000340,&UNK_10b1f13d0,&UNK_10b1f0310);
      }
      else {
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0xaa);
        *(undefined8 *)((long)unaff_x28 + 0xb2) = *(undefined8 *)((long)unaff_x20 + 0xb2);
        *(undefined8 *)((long)unaff_x28 + 0xaa) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0xba);
        *(undefined8 *)((long)unaff_x28 + 0xc2) = *(undefined8 *)((long)unaff_x20 + 0xc2);
        *(undefined8 *)((long)unaff_x28 + 0xba) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0xca);
        *(undefined8 *)((long)unaff_x28 + 0xd2) = *(undefined8 *)((long)unaff_x20 + 0xd2);
        *(undefined8 *)((long)unaff_x28 + 0xca) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x6a);
        *(undefined8 *)((long)unaff_x28 + 0x72) = *(undefined8 *)((long)unaff_x20 + 0x72);
        *(undefined8 *)((long)unaff_x28 + 0x6a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x7a);
        *(undefined8 *)((long)unaff_x28 + 0x82) = *(undefined8 *)((long)unaff_x20 + 0x82);
        *(undefined8 *)((long)unaff_x28 + 0x7a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x8a);
        *(undefined8 *)((long)unaff_x28 + 0x92) = *(undefined8 *)((long)unaff_x20 + 0x92);
        *(undefined8 *)((long)unaff_x28 + 0x8a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x9a);
        *(undefined8 *)((long)unaff_x28 + 0xa2) = *(undefined8 *)((long)unaff_x20 + 0xa2);
        *(undefined8 *)((long)unaff_x28 + 0x9a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x2a);
        *(undefined8 *)((long)unaff_x28 + 0x32) = *(undefined8 *)((long)unaff_x20 + 0x32);
        *(undefined8 *)((long)unaff_x28 + 0x2a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x3a);
        *(undefined8 *)((long)unaff_x28 + 0x42) = *(undefined8 *)((long)unaff_x20 + 0x42);
        *(undefined8 *)((long)unaff_x28 + 0x3a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x4a);
        *(undefined8 *)((long)unaff_x28 + 0x52) = *(undefined8 *)((long)unaff_x20 + 0x52);
        *(undefined8 *)((long)unaff_x28 + 0x4a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x5a);
        *(undefined8 *)((long)unaff_x28 + 0x62) = *(undefined8 *)((long)unaff_x20 + 0x62);
        *(undefined8 *)((long)unaff_x28 + 0x5a) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 10);
        *(undefined8 *)((long)unaff_x28 + 0x12) = *(undefined8 *)((long)unaff_x20 + 0x12);
        *(undefined8 *)((long)unaff_x28 + 10) = uVar10;
        uVar10 = *(undefined8 *)((long)unaff_x20 + 0x1a);
        *(undefined8 *)((long)unaff_x28 + 0x22) = *(undefined8 *)((long)unaff_x20 + 0x22);
        *(undefined8 *)((long)unaff_x28 + 0x1a) = uVar10;
        unaff_x28[0x25] = uVar11;
        unaff_x28[0x24] = uVar5;
        unaff_x28[0x27] = uVar17;
        unaff_x28[0x26] = uVar14;
        unaff_x28[0x29] = uVar12;
        unaff_x28[0x28] = uVar8;
        unaff_x28[0x1d] = in_stack_00000340;
        unaff_x28[0x1c] = puVar20;
        unaff_x28[0x1f] = in_stack_00000350;
        unaff_x28[0x1e] = in_stack_00000348;
        unaff_x28[0x21] = uVar13;
        unaff_x28[0x20] = uVar9;
        unaff_x28[0x23] = uVar18;
        unaff_x28[0x22] = uVar15;
        FUN_1002226f8(&stack0x00000340,&stack0x000004c0);
        if (puVar20 != (undefined *)0x2) {
          _memcpy(in_stack_00000010,&stack0x00000340,0x178);
LAB_10022efcc:
          FUN_100247114(&stack0x00000048);
          return;
        }
        uVar8 = unaff_x27[4];
        uVar5 = unaff_x27[3];
        uVar9 = unaff_x27[5];
        uVar12 = unaff_x27[8];
        uVar11 = unaff_x27[7];
        unaff_x28[5] = unaff_x27[6];
        unaff_x28[4] = uVar9;
        unaff_x28[7] = uVar12;
        unaff_x28[6] = uVar11;
        uVar9 = unaff_x27[9];
        unaff_x28[9] = unaff_x27[10];
        unaff_x28[8] = uVar9;
        uVar9 = unaff_x27[1];
        unaff_x28[1] = unaff_x27[2];
        *unaff_x28 = uVar9;
        unaff_x28[3] = uVar8;
        unaff_x28[2] = uVar5;
        FUN_107c05cb4(&UNK_108c71860,0x2b,&stack0x000004c0,&UNK_10b1f1410,&UNK_10b1f0328);
      }
LAB_10022f0e4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10022f0e8);
      (*pcVar1)();
    }
    in_stack_00000340 = unaff_x25;
    in_stack_00000350 = unaff_x21;
    in_stack_00000358 = unaff_x19;
    if ((*(byte *)(unaff_x29 + -0xb8) & 1) == 0) {
      if (*(long *)(unaff_x29 + -0xd0) == 0) {
        in_stack_00000348 = &DAT_1002e96e4;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s__member__108aba6b4,&stack0x00000340);
      }
      else {
        *(long *)(unaff_x29 + -0x88) = *(long *)(unaff_x29 + -0xd0);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -200);
        in_stack_00000348 = &DAT_1002e96e4;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_____108aba6c0,&stack0x00000340);
        in_stack_00000350 = (undefined *)(unaff_x29 + -0x88);
        in_stack_00000358 = &DAT_1002e96d4;
      }
      goto LAB_10022eafc;
    }
    in_stack_00000348 = &DAT_1002e96e4;
    param_1 = unaff_x29 + -0x78;
    param_3 = &stack0x00000340;
  } while( true );
}

