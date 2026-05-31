
void FUN_101303ac8(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  undefined1 uVar17;
  byte bVar18;
  ulong *puVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *unaff_x20;
  char *unaff_x21;
  char *pcVar23;
  undefined8 *puVar24;
  ulong unaff_x22;
  ulong uVar25;
  char *unaff_x23;
  ulong unaff_x24;
  char *pcVar26;
  long lVar27;
  long unaff_x26;
  long unaff_x29;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  char *in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  char *in_stack_00000058;
  undefined8 *in_stack_00000078;
  char *in_stack_00000088;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  ulong in_stack_000000c0;
  char *in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  char *in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  char *in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  char *in_stack_00000118;
  ulong in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  
code_r0x000101303ac8:
  in_stack_00000100 = (char *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  in_stack_000000f8 = unaff_x22;
joined_r0x000101303af0:
  bVar10 = true;
  pcVar15 = in_stack_00000100;
joined_r0x000101303af0:
  if (unaff_x24 == 0x8000000000000000) goto LAB_101303c20;
joined_r0x000101303c14:
  if (unaff_x24 != 0) {
    _free(unaff_x23);
  }
LAB_101303c20:
  if ((bVar10) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x29 + -0xc0);
  if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xe0);
  }
  do {
    unaff_x22 = 0x8000000000000000;
    pcVar23 = unaff_x21;
    unaff_x23 = pcVar15;
    if ((in_stack_00000048._4_1_ & 0x1e) != 0x14) {
      unaff_x22 = 0x8000000000000000;
      FUN_100e077ec(unaff_x29 + -0x100);
    }
LAB_101303c70:
    lVar20 = in_stack_000000b8;
    unaff_x21 = pcVar23;
    if (unaff_x22 == 0x8000000000000000) {
LAB_1013041dc:
      lVar20 = in_stack_000000b0;
      *in_stack_00000000 = -0x8000000000000000;
      in_stack_00000000[1] = (long)unaff_x23;
      if (in_stack_000000b8 != 0) {
        puVar24 = (undefined8 *)(in_stack_000000b0 + 0x20);
        lVar27 = in_stack_000000b8;
        do {
          if (puVar24[-4] != 0) {
            _free(puVar24[-3]);
          }
          if (puVar24[-1] != 0) {
            _free(*puVar24);
          }
          puVar24 = puVar24 + 7;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (in_stack_000000a8 != 0) {
        _free(lVar20);
      }
LAB_101304238:
      lVar20 = ((ulong)((long)in_stack_00000058 - (long)unaff_x21) >> 5) + 1;
      while (lVar20 = lVar20 + -1, lVar20 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x000101304134:
      if (in_stack_00000008 != 0) {
        _free(in_stack_00000018);
      }
      return;
    }
    in_stack_000000d8 = in_stack_00000110;
    in_stack_000000d0 = in_stack_00000108;
    in_stack_000000e8 = in_stack_00000120;
    in_stack_000000e0 = in_stack_00000118;
    in_stack_000000f0 = CONCAT44(uStack000000000000012c,uStack0000000000000128);
    in_stack_000000c0 = unaff_x22;
    in_stack_000000c8 = unaff_x23;
    if (in_stack_000000b8 == in_stack_000000a8) {
      func_0x0001088db290(&stack0x000000a8);
    }
    puVar19 = (ulong *)(in_stack_000000b0 + lVar20 * 0x38);
    puVar19[1] = (ulong)in_stack_000000c8;
    *puVar19 = in_stack_000000c0;
    puVar19[3] = in_stack_000000d8;
    puVar19[2] = in_stack_000000d0;
    puVar19[5] = in_stack_000000e8;
    puVar19[4] = (ulong)in_stack_000000e0;
    puVar19[6] = in_stack_000000f0;
    in_stack_000000b8 = lVar20 + 1;
    unaff_x21 = in_stack_00000058;
    if (pcVar23 == in_stack_00000058) {
LAB_1013040b0:
      in_stack_00000000[1] = in_stack_000000b0;
      *in_stack_00000000 = in_stack_000000a8;
      in_stack_00000000[2] = in_stack_000000b8;
      lVar20 = *in_stack_00000000;
      if (lVar20 == -0x8000000000000000) goto LAB_101304238;
      in_stack_00000018 = in_stack_00000000[1];
      lVar27 = in_stack_00000000[2];
      lVar16 = FUN_100fbc738(&stack0x00000080);
      if (lVar16 == 0) {
        return;
      }
      *in_stack_00000000 = -0x8000000000000000;
      in_stack_00000000[1] = lVar16;
      in_stack_00000008 = lVar20;
      if (lVar27 != 0) {
        puVar24 = (undefined8 *)(in_stack_00000018 + 0x20);
        do {
          if (puVar24[-4] != 0) {
            _free(puVar24[-3]);
          }
          if (puVar24[-1] != 0) {
            _free(*puVar24);
          }
          puVar24 = puVar24 + 7;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      goto joined_r0x000101304134;
    }
    unaff_x21 = pcVar23 + 0x20;
    cVar9 = *pcVar23;
    in_stack_00000088 = unaff_x21;
    if (cVar9 == '\x16') goto LAB_1013040b0;
    uVar13 = *(undefined8 *)(pcVar23 + 1);
    in_stack_00000050[1] = *(undefined8 *)(pcVar23 + 9);
    *in_stack_00000050 = uVar13;
    uVar13 = *(undefined8 *)(pcVar23 + 0x10);
    *(undefined8 *)((long)in_stack_00000050 + 0x17) = *(undefined8 *)(pcVar23 + 0x18);
    *(undefined8 *)((long)in_stack_00000050 + 0xf) = uVar13;
    unaff_x26 = unaff_x26 + 1;
    *(char *)(unaff_x29 + -0x100) = cVar9;
    pcVar23 = unaff_x21;
    in_stack_000000a0 = unaff_x26;
    if (cVar9 != '\x14') {
      if (cVar9 != '\x15') {
        unaff_x23 = (char *)FUN_108855b04(unaff_x29 + -0x100,unaff_x29 + -0x59,&UNK_10b20cae0);
        goto LAB_1013041dc;
      }
      pbVar4 = *(byte **)(unaff_x29 + -0xf0);
      lVar20 = *(long *)(unaff_x29 + -0xe8) * 0x40;
      pbVar1 = pbVar4 + lVar20;
      *(byte **)(unaff_x29 + -0xc0) = pbVar4;
      *(byte **)(unaff_x29 + -0xb8) = pbVar4;
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xf8);
      *(byte **)(unaff_x29 + -0xa8) = pbVar1;
      *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
      *(undefined8 *)(unaff_x29 + -0xa0) = 0;
      in_stack_00000048._4_1_ = 0x15;
      if (*(long *)(unaff_x29 + -0xe8) == 0) {
        unaff_x24 = 0x8000000000000000;
LAB_101303a9c:
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108c61038;
        *(undefined8 *)(unaff_x29 + -0x90) = 4;
        unaff_x22 = 0x8000000000000000;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        param_2 = unaff_x29 + -0x80;
        goto code_r0x000101303ac8;
      }
      lVar27 = 0;
      bVar10 = false;
      bVar11 = false;
      unaff_x22 = 0x8000000000000000;
      unaff_x24 = 0x8000000000000000;
      do {
        pbVar21 = pbVar4 + 0x40;
        bVar18 = *pbVar4;
        pbVar22 = pbVar21;
        lVar16 = lVar27;
        if (bVar18 == 0x16) break;
        *(byte *)(unaff_x29 + -0x80) = bVar18;
        uVar13 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
        uVar13 = *(undefined8 *)(pbVar4 + 1);
        unaff_x20[1] = *(undefined8 *)(pbVar4 + 9);
        *unaff_x20 = uVar13;
        uVar13 = *(undefined8 *)(pbVar4 + 0x20);
        *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar4 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar13;
        uVar13 = *(undefined8 *)(pbVar4 + 0x30);
        *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(pbVar4 + 0x38);
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar13;
        plVar2 = *(long **)(unaff_x29 + -0x78);
        plVar6 = *(long **)(unaff_x29 + -0x70);
        lVar16 = *(long *)(unaff_x29 + -0x68);
        unaff_x23 = in_stack_00000040;
        if (0xc < bVar18) {
          if (bVar18 == 0xd) {
            if (plVar6 == (long *)0x9) {
              if (*plVar2 == 0x72617453656e696c && (char)plVar2[1] == 't') {
                bVar18 = 1;
                goto LAB_101303760;
              }
LAB_10130375c:
              bVar18 = 4;
            }
            else {
              if (plVar6 == (long *)0x7) {
                if ((int)*plVar2 == 0x656e696c && *(int *)((long)plVar2 + 3) == 0x646e4565) {
                  bVar18 = 2;
                  goto LAB_101303760;
                }
                goto LAB_10130375c;
              }
              if (plVar6 != (long *)0x4) goto LAB_10130375c;
              if ((int)*plVar2 == 0x68746170) {
                bVar18 = 0;
              }
              else {
                if ((int)*plVar2 != 0x65746f6e) goto LAB_10130375c;
                bVar18 = 3;
              }
            }
LAB_101303760:
            *(byte *)(unaff_x29 + -0x97) = bVar18;
LAB_101303764:
            *(undefined1 *)(unaff_x29 + -0x98) = 0;
LAB_101303768:
            FUN_100e077ec(unaff_x29 + -0x80);
LAB_101303770:
            bVar18 = *(byte *)(unaff_x29 + -0x98);
            goto joined_r0x000101303774;
          }
          if (bVar18 == 0xe) {
            FUN_100b4c4b0(unaff_x29 + -0x98,plVar6);
            if (plVar2 != (long *)0x0) goto LAB_1013036f4;
            goto LAB_101303770;
          }
          if (bVar18 == 0xf) {
            FUN_100b4c4b0(unaff_x29 + -0x98,plVar2,plVar6);
            goto LAB_101303768;
          }
LAB_10130397c:
          uVar13 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0x59,&UNK_10b211d00);
          *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
          *(undefined1 *)(unaff_x29 + -0x98) = 1;
LAB_1013039a4:
          *(byte **)(unaff_x29 + -0xb8) = pbVar21;
          *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
          in_stack_00000100 = *(char **)(unaff_x29 + -0x90);
LAB_1013039bc:
          in_stack_000000f8 = 0x8000000000000000;
          bVar10 = true;
          pcVar15 = in_stack_00000100;
          goto joined_r0x000101303af0;
        }
        if (bVar18 == 1) {
          bVar18 = *(byte *)(unaff_x29 + -0x7f);
          if (3 < bVar18) {
            bVar18 = 4;
          }
          goto LAB_101303760;
        }
        if (bVar18 == 4) {
          if ((long *)0x3 < plVar2) {
            plVar2 = (long *)0x4;
          }
          *(char *)(unaff_x29 + -0x97) = (char)plVar2;
          goto LAB_101303764;
        }
        if (bVar18 != 0xc) goto LAB_10130397c;
        if (lVar16 == 9) {
          if (*plVar6 == 0x72617453656e696c && (char)plVar6[1] == 't') {
            uVar17 = 1;
            goto LAB_1013036e8;
          }
LAB_1013036e4:
          uVar17 = 4;
        }
        else {
          if (lVar16 == 7) {
            if ((int)*plVar6 == 0x656e696c && *(int *)((long)plVar6 + 3) == 0x646e4565) {
              uVar17 = 2;
              goto LAB_1013036e8;
            }
            goto LAB_1013036e4;
          }
          if (lVar16 != 4) goto LAB_1013036e4;
          if ((int)*plVar6 == 0x68746170) {
            uVar17 = 0;
          }
          else {
            if ((int)*plVar6 != 0x65746f6e) goto LAB_1013036e4;
            uVar17 = 3;
          }
        }
LAB_1013036e8:
        *(undefined1 *)(unaff_x29 + -0x97) = uVar17;
        *(undefined1 *)(unaff_x29 + -0x98) = 0;
        if (plVar2 == (long *)0x0) goto LAB_101303770;
LAB_1013036f4:
        _free(plVar6);
        bVar18 = *(byte *)(unaff_x29 + -0x98);
joined_r0x000101303774:
        if ((bVar18 & 1) != 0) goto LAB_1013039a4;
        bVar18 = *(byte *)(unaff_x29 + -0x97);
        if (bVar18 < 2) {
          if (bVar18 == 0) {
            if (unaff_x22 != 0x8000000000000000) {
              *(byte **)(unaff_x29 + -0xb8) = pbVar21;
              *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
              *(undefined **)(unaff_x29 + -0x98) = &UNK_108c61038;
              *(undefined8 *)(unaff_x29 + -0x90) = 4;
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
              *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
              in_stack_00000100 =
                   (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
              goto LAB_101303ff0;
            }
            cVar9 = *(char *)(unaff_x29 + -0xe0);
            *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
            if (cVar9 == '\x16') {
              *(byte **)(unaff_x29 + -0xb8) = pbVar21;
              *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1013042c4;
            }
            uVar13 = *in_stack_00000078;
            unaff_x20[1] = in_stack_00000078[1];
            *unaff_x20 = uVar13;
            uVar13 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) =
                 *(undefined8 *)((long)in_stack_00000078 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
            *(char *)(unaff_x29 + -0x80) = cVar9;
            FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
            unaff_x22 = *(ulong *)(unaff_x29 + -0x98);
            if (unaff_x22 == 0x8000000000000000) {
              *(byte **)(unaff_x29 + -0xb8) = pbVar21;
              *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
              in_stack_00000100 = *(char **)(unaff_x29 + -0x90);
              unaff_x22 = 0;
              goto LAB_1013039bc;
            }
            in_stack_00000038 = *(char **)(unaff_x29 + -0x90);
            in_stack_00000020 = *(ulong *)(unaff_x29 + -0x88);
          }
          else {
            if (bVar11) {
              *(byte **)(unaff_x29 + -0xb8) = pbVar21;
              *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
              *(undefined **)(unaff_x29 + -0x98) = &UNK_108cade8f;
              *(undefined8 *)(unaff_x29 + -0x90) = 9;
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
              *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
              in_stack_00000100 =
                   (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
LAB_101303ff0:
              in_stack_000000f8 = 0x8000000000000000;
              goto joined_r0x000101303af0;
            }
            cVar9 = *(char *)(unaff_x29 + -0xe0);
            *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
            if (cVar9 == '\x16') goto LAB_10130413c;
            uVar13 = *in_stack_00000078;
            unaff_x20[1] = in_stack_00000078[1];
            *unaff_x20 = uVar13;
            uVar13 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) =
                 *(undefined8 *)((long)in_stack_00000078 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
            *(char *)(unaff_x29 + -0x80) = cVar9;
            FUN_100615890(unaff_x29 + -0x98,unaff_x29 + -0x80);
            if (*(int *)(unaff_x29 + -0x98) == 1) goto LAB_1013039a4;
            uStack0000000000000034 = *(undefined4 *)(unaff_x29 + -0x94);
            bVar11 = true;
          }
        }
        else {
          if (bVar18 == 2) {
            if (bVar10) {
              *(byte **)(unaff_x29 + -0xb8) = pbVar21;
              *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
              *(undefined **)(unaff_x29 + -0x98) = &UNK_108cade98;
              *(undefined8 *)(unaff_x29 + -0x90) = 7;
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
              *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
              in_stack_00000100 =
                   (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
              goto LAB_101303ff0;
            }
            cVar9 = *(char *)(unaff_x29 + -0xe0);
            *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
            if (cVar9 == '\x16') goto LAB_10130413c;
            uVar13 = *in_stack_00000078;
            unaff_x20[1] = in_stack_00000078[1];
            *unaff_x20 = uVar13;
            uVar13 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) =
                 *(undefined8 *)((long)in_stack_00000078 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
            *(char *)(unaff_x29 + -0x80) = cVar9;
            FUN_100615890(unaff_x29 + -0x98,unaff_x29 + -0x80);
            if (*(int *)(unaff_x29 + -0x98) != 1) {
              uStack0000000000000030 = *(undefined4 *)(unaff_x29 + -0x94);
              bVar10 = true;
              goto LAB_101303528;
            }
            in_stack_00000100 = *(char **)(unaff_x29 + -0x90);
            *(byte **)(unaff_x29 + -0xb8) = pbVar21;
            *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
            goto LAB_1013039bc;
          }
          if (bVar18 == 3) {
            if (unaff_x24 == 0x8000000000000000) {
              cVar9 = *(char *)(unaff_x29 + -0xe0);
              *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
              if (cVar9 == '\x16') {
                *(byte **)(unaff_x29 + -0xb8) = pbVar21;
                *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1013042c4;
              }
              uVar13 = *in_stack_00000078;
              unaff_x20[1] = in_stack_00000078[1];
              *unaff_x20 = uVar13;
              uVar13 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
              *(undefined8 *)((long)unaff_x20 + 0x17) =
                   *(undefined8 *)((long)in_stack_00000078 + 0x17);
              *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
              *(char *)(unaff_x29 + -0x80) = cVar9;
              FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
              unaff_x24 = *(ulong *)(unaff_x29 + -0x98);
              pcVar15 = *(char **)(unaff_x29 + -0x90);
              in_stack_00000040 = pcVar15;
              if (unaff_x24 != 0x8000000000000000) {
                in_stack_00000028 = *(ulong *)(unaff_x29 + -0x88);
                goto LAB_101303528;
              }
              *(byte **)(unaff_x29 + -0xb8) = pbVar21;
              *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
              in_stack_000000f8 = 0x8000000000000000;
              bVar10 = true;
              in_stack_00000100 = pcVar15;
              goto LAB_101303c20;
            }
            *(byte **)(unaff_x29 + -0xb8) = pbVar21;
            *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_108c51c0c;
            *(undefined8 *)(unaff_x29 + -0x90) = 4;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
            *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
            pcVar15 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
            in_stack_000000f8 = 0x8000000000000000;
            bVar10 = true;
            in_stack_00000100 = pcVar15;
            goto joined_r0x000101303c14;
          }
          cVar9 = *(char *)(unaff_x29 + -0xe0);
          *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
          if (cVar9 == '\x16') {
LAB_10130413c:
            *(byte **)(unaff_x29 + -0xb8) = pbVar21;
            *(long *)(unaff_x29 + -0xa0) = lVar27 + 1;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013042c4:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1013042c8);
            (*pcVar12)();
          }
          uVar13 = *in_stack_00000078;
          unaff_x20[1] = in_stack_00000078[1];
          *unaff_x20 = uVar13;
          uVar13 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
          *(char *)(unaff_x29 + -0x80) = cVar9;
          FUN_100e077ec(unaff_x29 + -0x80);
        }
LAB_101303528:
        lVar27 = lVar27 + 1;
        pbVar22 = pbVar1;
        lVar16 = (lVar20 - 0x40U >> 6) + 1;
        pbVar4 = pbVar21;
      } while (pbVar21 != pbVar1);
      *(byte **)(unaff_x29 + -0xb8) = pbVar22;
      *(long *)(unaff_x29 + -0xa0) = lVar16;
      unaff_x23 = in_stack_00000040;
      if (unaff_x22 == 0x8000000000000000) goto LAB_101303a9c;
      if (!bVar11) {
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108cade8f;
        *(undefined8 *)(unaff_x29 + -0x90) = 9;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        pcVar15 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
joined_r0x000101303bf0:
        in_stack_000000f8 = 0x8000000000000000;
        in_stack_00000100 = pcVar15;
        if (unaff_x22 != 0) {
          in_stack_000000f8 = 0x8000000000000000;
          _free(in_stack_00000038);
        }
        bVar10 = false;
        goto joined_r0x000101303af0;
      }
      if (!bVar10) {
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108cade98;
        *(undefined8 *)(unaff_x29 + -0x90) = 7;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        pcVar15 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
        goto joined_r0x000101303bf0;
      }
      if (unaff_x24 == 0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108c51c0c;
        *(undefined8 *)(unaff_x29 + -0x90) = 4;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        pcVar15 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
        goto joined_r0x000101303bf0;
      }
      in_stack_00000100 = in_stack_00000038;
      in_stack_00000108 = in_stack_00000020;
      in_stack_00000118 = in_stack_00000040;
      in_stack_00000120 = in_stack_00000028;
      uStack0000000000000128 = uStack0000000000000034;
      uStack000000000000012c = uStack0000000000000030;
      in_stack_000000f8 = unaff_x22;
      in_stack_00000110 = unaff_x24;
      FUN_100d34830(unaff_x29 + -0xc0);
      unaff_x23 = in_stack_00000038;
      if (pbVar1 != pbVar22) {
        *(long *)(unaff_x29 + -0x80) = lVar16;
        unaff_x23 = (char *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar22) >> 6) + lVar16,
                                          unaff_x29 + -0x80,&UNK_10b23a190);
        in_stack_000000f8 = 0x8000000000000000;
        in_stack_00000100 = unaff_x23;
        if (unaff_x22 != 0) {
          _free(in_stack_00000038);
        }
        if (unaff_x24 != 0) {
          _free(in_stack_00000040);
        }
        unaff_x22 = 0x8000000000000000;
      }
      goto LAB_101303c70;
    }
    lVar20 = *(long *)(unaff_x29 + -0xf8);
    pcVar5 = *(char **)(unaff_x29 + -0xf0);
    lVar27 = *(long *)(unaff_x29 + -0xe8);
    *(char **)(unaff_x29 + -0xe0) = pcVar5;
    *(char **)(unaff_x29 + -0xd8) = pcVar5;
    *(long *)(unaff_x29 + -0xd0) = lVar20;
    *(char **)(unaff_x29 + -200) = pcVar5 + lVar27 * 0x20;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    in_stack_00000048._4_1_ = 0x14;
    pcVar26 = pcVar5;
    if (lVar27 == 0) {
LAB_1013034b0:
      unaff_x23 = (char *)FUN_1087e422c(0,&UNK_10b22edb8,&UNK_10b20a590);
LAB_1013034cc:
      in_stack_000000f8 = 0x8000000000000000;
      pcVar15 = unaff_x23;
      in_stack_00000100 = unaff_x23;
      goto LAB_1013034dc;
    }
    pcVar26 = pcVar5 + 0x20;
    cVar9 = *pcVar5;
    *(char **)(unaff_x29 + -0xd8) = pcVar26;
    if (cVar9 == '\x16') goto LAB_1013034b0;
    uVar13 = *(undefined8 *)(pcVar5 + 1);
    unaff_x20[1] = *(undefined8 *)(pcVar5 + 9);
    *unaff_x20 = uVar13;
    uVar13 = *(undefined8 *)(pcVar5 + 0x10);
    *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar5 + 0x18);
    *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(char *)(unaff_x29 + -0x80) = cVar9;
    FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
    unaff_x22 = *(ulong *)(unaff_x29 + -0x98);
    unaff_x23 = *(char **)(unaff_x29 + -0x90);
    if (unaff_x22 == 0x8000000000000000) goto LAB_1013034cc;
    if (lVar27 == 1) {
LAB_101303a40:
      uVar13 = 1;
    }
    else {
      uVar25 = *(ulong *)(unaff_x29 + -0x88);
      pcVar26 = pcVar5 + 0x40;
      *(char **)(unaff_x29 + -0xd8) = pcVar26;
      cVar9 = pcVar5[0x20];
      if (cVar9 == '\x16') goto LAB_101303a40;
      uVar13 = *(undefined8 *)(pcVar5 + 0x21);
      unaff_x20[1] = *(undefined8 *)(pcVar5 + 0x29);
      *unaff_x20 = uVar13;
      uVar13 = *(undefined8 *)(pcVar5 + 0x30);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar5 + 0x38);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
      *(undefined8 *)(unaff_x29 + -0xc0) = 2;
      *(char *)(unaff_x29 + -0x80) = cVar9;
      FUN_100615890(unaff_x29 + -0x98,unaff_x29 + -0x80);
      if ((*(uint *)(unaff_x29 + -0x98) & 1) != 0) {
LAB_101303ce4:
        pcVar14 = *(char **)(unaff_x29 + -0x90);
        goto LAB_101303a5c;
      }
      if (lVar27 == 2) {
LAB_101303db0:
        uVar13 = 2;
      }
      else {
        uVar7 = *(undefined4 *)(unaff_x29 + -0x94);
        pcVar26 = pcVar5 + 0x60;
        *(char **)(unaff_x29 + -0xd8) = pcVar26;
        cVar9 = pcVar5[0x40];
        if (cVar9 == '\x16') goto LAB_101303db0;
        uVar13 = *(undefined8 *)(pcVar5 + 0x41);
        unaff_x20[1] = *(undefined8 *)(pcVar5 + 0x49);
        *unaff_x20 = uVar13;
        uVar13 = *(undefined8 *)(pcVar5 + 0x50);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar5 + 0x58);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
        *(undefined8 *)(unaff_x29 + -0xc0) = 3;
        *(char *)(unaff_x29 + -0x80) = cVar9;
        FUN_100615890(unaff_x29 + -0x98,unaff_x29 + -0x80);
        if (*(int *)(unaff_x29 + -0x98) == 1) goto LAB_101303ce4;
        if (lVar27 != 3) {
          uVar8 = *(undefined4 *)(unaff_x29 + -0x94);
          pcVar26 = pcVar5 + 0x80;
          *(char **)(unaff_x29 + -0xd8) = pcVar26;
          cVar9 = pcVar5[0x60];
          if (cVar9 != '\x16') {
            uVar13 = *(undefined8 *)(pcVar5 + 0x61);
            unaff_x20[1] = *(undefined8 *)(pcVar5 + 0x69);
            *unaff_x20 = uVar13;
            uVar13 = *(undefined8 *)(pcVar5 + 0x70);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar5 + 0x78);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar13;
            *(undefined8 *)(unaff_x29 + -0xc0) = 4;
            *(char *)(unaff_x29 + -0x80) = cVar9;
            FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
            uVar3 = *(ulong *)(unaff_x29 + -0x98);
            pcVar14 = *(char **)(unaff_x29 + -0x90);
            if (uVar3 == 0x8000000000000000) goto LAB_101303a5c;
            in_stack_00000120 = *(ulong *)(unaff_x29 + -0x88);
            in_stack_000000f8 = unaff_x22;
            in_stack_00000100 = unaff_x23;
            in_stack_00000108 = uVar25;
            in_stack_00000110 = uVar3;
            in_stack_00000118 = pcVar14;
            uStack0000000000000128 = uVar7;
            uStack000000000000012c = uVar8;
            pcVar15 = (char *)FUN_100fbc738(unaff_x29 + -0xe0);
            if (pcVar15 != (char *)0x0) {
              in_stack_000000f8 = 0x8000000000000000;
              in_stack_00000100 = pcVar15;
              if (unaff_x22 != 0) {
                _free(unaff_x23);
              }
              if (uVar3 != 0) goto LAB_10130350c;
              unaff_x22 = 0x8000000000000000;
              unaff_x23 = pcVar15;
            }
            goto LAB_101303c70;
          }
        }
        uVar13 = 3;
      }
    }
    pcVar14 = (char *)FUN_1087e422c(uVar13,&UNK_10b22edb8,&UNK_10b20a590);
LAB_101303a5c:
    in_stack_000000f8 = 0x8000000000000000;
    pcVar15 = pcVar14;
    in_stack_00000100 = pcVar14;
    if (unaff_x22 != 0) {
      _free(unaff_x23);
    }
LAB_1013034dc:
    lVar27 = ((ulong)((long)(pcVar5 + lVar27 * 0x20) - (long)pcVar26) >> 5) + 1;
    while (lVar27 = lVar27 + -1, lVar27 != 0) {
      FUN_100e077ec(pcVar26);
      pcVar26 = pcVar26 + 0x20;
    }
    pcVar14 = pcVar5;
    if (lVar20 != 0) {
LAB_10130350c:
      _free(pcVar14);
    }
  } while( true );
}

