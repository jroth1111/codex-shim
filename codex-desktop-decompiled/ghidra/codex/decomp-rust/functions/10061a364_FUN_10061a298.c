
/* WARNING: Type propagation algorithm not settling */

void FUN_10061a298(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *unaff_x20;
  byte *unaff_x21;
  undefined8 *puVar15;
  byte unaff_w22;
  char cVar16;
  ulong unaff_x24;
  char cVar17;
  byte *pbVar18;
  ulong unaff_x26;
  ulong uVar19;
  long unaff_x27;
  long unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 *in_stack_00000030;
  byte *in_stack_00000038;
  undefined8 *in_stack_00000050;
  byte *in_stack_00000058;
  byte *in_stack_00000068;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  byte in_stack_000000a0;
  long in_stack_000000a8;
  byte *in_stack_000000b0;
  ulong in_stack_000000b8;
  char cStack00000000000000c0;
  undefined7 uStack00000000000000c1;
  byte *in_stack_000000c8;
  long in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  byte *in_stack_000000e8;
  long in_stack_000000f0;
  byte *in_stack_000000f8;
  ulong in_stack_00000100;
  
code_r0x00010061a298:
  pbVar7 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10061a2a4:
  unaff_x24 = unaff_x24 & 0x7fffffffffffffff;
  pbVar8 = in_stack_00000058;
joined_r0x00010061a2ac:
  in_stack_00000058 = pbVar7;
  if (unaff_x24 != 0) {
    _free(pbVar8);
  }
LAB_10061a2bc:
  do {
    FUN_100d34830(&stack0x000000e0);
    if (cStack00000000000000c0 != '\x16') {
      FUN_100e077ec(&stack0x000000c0);
    }
    cVar17 = '\0';
    cVar16 = '\0';
    unaff_x24 = 0x8000000000000000;
    pbVar7 = unaff_x21;
LAB_10061a2e8:
    if ((unaff_w22 & 0x1e) != 0x14) {
      FUN_100e077ec(&stack0x000000a0);
    }
    lVar12 = in_stack_00000098;
    if ((long)unaff_x24 < -0x7ffffffffffffffe) {
      *in_stack_00000008 = -0x8000000000000000;
      in_stack_00000008[1] = (long)in_stack_00000058;
      unaff_x21 = pbVar7;
      lVar10 = in_stack_00000090;
joined_r0x00010061a66c:
      in_stack_00000090 = lVar10;
      in_stack_00000098 = lVar12;
      if (lVar12 != 0) {
        puVar15 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (in_stack_00000088 != 0) {
        _free(lVar10);
      }
LAB_10061a7a4:
      lVar12 = ((ulong)((long)in_stack_00000038 - (long)unaff_x21) >> 5) + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x00010061a710:
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000020);
      }
      return;
    }
    if (in_stack_00000098 == in_stack_00000088) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hce8b73d68f21d1b5E(&stack0x00000088);
    }
    uVar19 = in_stack_000000b8;
    pbVar8 = in_stack_000000b0;
    lVar10 = in_stack_000000a8;
    puVar1 = (ulong *)(in_stack_00000090 + lVar12 * 0x20);
    *puVar1 = unaff_x24;
    puVar1[1] = (ulong)in_stack_00000058;
    puVar1[2] = unaff_x26;
    *(char *)(puVar1 + 3) = cVar17;
    *(char *)((long)puVar1 + 0x19) = cVar16;
    in_stack_00000098 = lVar12 + 1;
    unaff_x21 = in_stack_00000038;
    if (pbVar7 == in_stack_00000038) {
LAB_10061a69c:
      in_stack_00000008[1] = in_stack_00000090;
      *in_stack_00000008 = in_stack_00000088;
      in_stack_00000008[2] = in_stack_00000098;
      lVar12 = *in_stack_00000008;
      if (lVar12 == -0x8000000000000000) goto LAB_10061a7a4;
      in_stack_00000020 = in_stack_00000008[1];
      lVar10 = in_stack_00000008[2];
      lVar9 = FUN_100fbc738(&stack0x00000060);
      if (lVar9 == 0) {
        return;
      }
      *in_stack_00000008 = -0x8000000000000000;
      in_stack_00000008[1] = lVar9;
      in_stack_00000010 = lVar12;
      if (lVar10 != 0) {
        puVar15 = (undefined8 *)(in_stack_00000020 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      goto joined_r0x00010061a710;
    }
    unaff_x21 = pbVar7 + 0x20;
    unaff_w22 = *pbVar7;
    in_stack_00000068 = unaff_x21;
    if (unaff_w22 == 0x16) goto LAB_10061a69c;
    uVar6 = *(undefined8 *)(pbVar7 + 1);
    in_stack_00000030[1] = *(undefined8 *)(pbVar7 + 9);
    *in_stack_00000030 = uVar6;
    uVar6 = *(undefined8 *)(pbVar7 + 0x10);
    *(undefined8 *)((long)in_stack_00000030 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
    *(undefined8 *)((long)in_stack_00000030 + 0xf) = uVar6;
    unaff_x27 = unaff_x27 + 1;
    pbVar7 = unaff_x21;
    in_stack_00000080 = unaff_x27;
    in_stack_000000a0 = unaff_w22;
    if (unaff_w22 == 0x14) {
      pbVar14 = in_stack_000000b0 + in_stack_000000b8 * 0x20;
      _cStack00000000000000c0 = in_stack_000000b0;
      in_stack_000000d0 = in_stack_000000a8;
      in_stack_000000e0 = (byte *)0x0;
      pbVar18 = in_stack_000000b0;
      in_stack_000000d8 = pbVar14;
      if (in_stack_000000b8 == 0) {
LAB_10061a174:
        in_stack_000000c8 = pbVar18;
        in_stack_00000058 = (byte *)thunk_FUN_1087e422c(0,&UNK_10b2319a8,&UNK_10b20a590);
LAB_10061a190:
        lVar12 = ((ulong)((long)pbVar14 - (long)pbVar18) >> 5) + 1;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          FUN_100e077ec(pbVar18);
          pbVar18 = pbVar18 + 0x20;
        }
        cVar17 = '\0';
        if (lVar10 != 0) {
          cVar16 = '\0';
          pbVar13 = pbVar8;
          goto LAB_10061a1c4;
        }
        unaff_x24 = 0x8000000000000000;
        cVar16 = '\0';
        unaff_x26 = uVar19;
      }
      else {
        pbVar18 = in_stack_000000b0 + 0x20;
        bVar11 = *in_stack_000000b0;
        if (bVar11 == 0x16) goto LAB_10061a174;
        uVar6 = *(undefined8 *)(in_stack_000000b0 + 1);
        unaff_x20[1] = *(undefined8 *)(in_stack_000000b0 + 9);
        *unaff_x20 = uVar6;
        uVar6 = *(undefined8 *)(in_stack_000000b0 + 0x10);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(in_stack_000000b0 + 0x18);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
        in_stack_000000e0 = (byte *)0x1;
        *(byte *)(unaff_x29 + -0x80) = bVar11;
        in_stack_000000c8 = pbVar18;
        FUN_10127f8c8(unaff_x29 + -0x98,unaff_x29 + -0x80);
        if (*(char *)(unaff_x29 + -0x98) == '\x01') {
          in_stack_00000058 = *(byte **)(unaff_x29 + -0x90);
          goto LAB_10061a190;
        }
        if (uVar19 == 1) {
LAB_10061a398:
          in_stack_00000058 = (byte *)thunk_FUN_1087e422c(1,&UNK_10b2319a8,&UNK_10b20a590);
          goto LAB_10061a190;
        }
        cVar16 = *(char *)(unaff_x29 + -0x97);
        pbVar18 = pbVar8 + 0x40;
        bVar11 = pbVar8[0x20];
        in_stack_000000c8 = pbVar18;
        if (bVar11 == 0x16) goto LAB_10061a398;
        uVar6 = *(undefined8 *)(pbVar8 + 0x21);
        unaff_x20[1] = *(undefined8 *)(pbVar8 + 0x29);
        *unaff_x20 = uVar6;
        uVar6 = *(undefined8 *)(pbVar8 + 0x30);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar8 + 0x38);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
        in_stack_000000e0 = (byte *)0x2;
        *(byte *)(unaff_x29 + -0x80) = bVar11;
        FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
        unaff_x24 = *(ulong *)(unaff_x29 + -0x98);
        pbVar13 = *(byte **)(unaff_x29 + -0x90);
        in_stack_00000058 = pbVar13;
        if (unaff_x24 == 0x8000000000000000) goto LAB_10061a190;
        if (uVar19 == 2) {
LAB_10061a494:
          in_stack_00000058 = (byte *)thunk_FUN_1087e422c(2,&UNK_10b2319a8,&UNK_10b20a590);
joined_r0x00010061a4b0:
          if (unaff_x24 != 0) {
            _free(pbVar13);
          }
          goto LAB_10061a190;
        }
        uVar19 = *(ulong *)(unaff_x29 + -0x88);
        pbVar18 = pbVar8 + 0x60;
        bVar11 = pbVar8[0x40];
        in_stack_000000c8 = pbVar18;
        if (bVar11 == 0x16) goto LAB_10061a494;
        uVar6 = *(undefined8 *)(pbVar8 + 0x41);
        unaff_x20[1] = *(undefined8 *)(pbVar8 + 0x49);
        *unaff_x20 = uVar6;
        uVar6 = *(undefined8 *)(pbVar8 + 0x50);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar8 + 0x58);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
        in_stack_000000e0 = (byte *)0x3;
        *(byte *)(unaff_x29 + -0x80) = bVar11;
        FUN_1012faaac(unaff_x29 + -0x98,unaff_x29 + -0x80);
        if ((*(byte *)(unaff_x29 + -0x98) & 1) != 0) {
          in_stack_00000058 = *(byte **)(unaff_x29 + -0x90);
          goto joined_r0x00010061a4b0;
        }
        cVar17 = *(char *)(unaff_x29 + -0x97);
        pbVar8 = (byte *)FUN_100fbc738(&stack0x000000c0);
        unaff_x26 = uVar19;
        if (pbVar8 != (byte *)0x0) {
          in_stack_00000058 = pbVar8;
          if (unaff_x24 == 0) {
            unaff_x24 = 0x8000000000000000;
          }
          else {
LAB_10061a1c4:
            _free(pbVar13);
            unaff_x24 = 0x8000000000000000;
            unaff_x26 = uVar19;
          }
        }
      }
      goto LAB_10061a2e8;
    }
    if (unaff_w22 != 0x15) {
      lVar12 = thunk_FUN_108855b04(&stack0x000000a0,unaff_x29 + -0x59,&UNK_10b20b160);
      *in_stack_00000008 = -0x8000000000000000;
      in_stack_00000008[1] = lVar12;
      lVar10 = in_stack_00000090;
      lVar12 = in_stack_00000098;
      goto joined_r0x00010061a66c;
    }
    lVar12 = in_stack_000000b8 * 0x40;
    pbVar8 = in_stack_000000b0 + lVar12;
    in_stack_000000e0 = in_stack_000000b0;
    in_stack_000000e8 = in_stack_000000b0;
    in_stack_000000f0 = in_stack_000000a8;
    _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
    in_stack_00000100 = 0;
    in_stack_000000f8 = pbVar8;
    if (in_stack_000000b8 == 0) {
      unaff_x24 = 0;
      uVar19 = unaff_x26;
      goto LAB_10061a270;
    }
    unaff_x26 = 0;
    unaff_x24 = 0x8000000000000000;
    cVar17 = '\x02';
    cVar16 = '\x03';
    pbVar18 = in_stack_000000b0;
    do {
      pbVar13 = pbVar18 + 0x40;
      bVar11 = *pbVar18;
      pbVar14 = pbVar13;
      uVar19 = unaff_x26;
      if (bVar11 == 0x16) break;
      *(byte *)(unaff_x29 + -0x80) = bVar11;
      uVar6 = *(undefined8 *)(pbVar18 + 0x10);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar18 + 0x18);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
      uVar6 = *(undefined8 *)(pbVar18 + 1);
      unaff_x20[1] = *(undefined8 *)(pbVar18 + 9);
      *unaff_x20 = uVar6;
      in_stack_000000c8 = *(byte **)(pbVar18 + 0x28);
      _cStack00000000000000c0 = *(byte **)(pbVar18 + 0x20);
      in_stack_000000d8 = *(byte **)(pbVar18 + 0x38);
      in_stack_000000d0 = *(long *)(pbVar18 + 0x30);
      plVar2 = *(long **)(unaff_x29 + -0x78);
      plVar3 = *(long **)(unaff_x29 + -0x70);
      lVar10 = *(long *)(unaff_x29 + -0x68);
      if (bVar11 < 0xd) {
        if (bVar11 == 1) {
          bVar11 = *(byte *)(unaff_x29 + -0x7f);
          if (2 < bVar11) {
            bVar11 = 3;
          }
          goto LAB_100619f74;
        }
        if (bVar11 == 4) {
          if ((long *)0x2 < plVar2) {
            plVar2 = (long *)0x3;
          }
          *(char *)(unaff_x29 + -0x97) = (char)plVar2;
          goto LAB_100619f78;
        }
        if (bVar11 == 0xc) {
          if (lVar10 == 4) {
            if ((int)*plVar3 != 0x656c6f72) goto LAB_100619f04;
            *(undefined1 *)(unaff_x29 + -0x97) = 2;
            *(undefined1 *)(unaff_x29 + -0x98) = 0;
          }
          else if (lVar10 == 0xb) {
            if (*plVar3 != 0x617069636e697270 || *(long *)((long)plVar3 + 3) != 0x64496c617069636e)
            goto LAB_100619f04;
            *(undefined1 *)(unaff_x29 + -0x97) = 1;
            *(undefined1 *)(unaff_x29 + -0x98) = 0;
          }
          else if ((lVar10 == 0xd) &&
                  (*plVar3 == 0x617069636e697270 &&
                   *(long *)((long)plVar3 + 5) == 0x657079546c617069)) {
            *(undefined1 *)(unaff_x29 + -0x97) = 0;
            *(undefined1 *)(unaff_x29 + -0x98) = 0;
          }
          else {
LAB_100619f04:
            *(undefined1 *)(unaff_x29 + -0x97) = 3;
            *(undefined1 *)(unaff_x29 + -0x98) = 0;
          }
joined_r0x000100619ee8:
          if (plVar2 != (long *)0x0) {
            _free(plVar3);
          }
        }
        else {
LAB_10061a118:
          uVar6 = thunk_FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0x59,&UNK_10b20f040);
          *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
          *(undefined1 *)(unaff_x29 + -0x98) = 1;
        }
      }
      else {
        if (bVar11 == 0xd) {
          if (plVar3 == (long *)0x4) {
            if ((int)*plVar2 != 0x656c6f72) goto LAB_100619f70;
            bVar11 = 2;
          }
          else if (plVar3 == (long *)0xb) {
            if (*plVar2 != 0x617069636e697270 || *(long *)((long)plVar2 + 3) != 0x64496c617069636e)
            goto LAB_100619f70;
            bVar11 = 1;
          }
          else if ((plVar3 == (long *)0xd) &&
                  (*plVar2 == 0x617069636e697270 &&
                   *(long *)((long)plVar2 + 5) == 0x657079546c617069)) {
            bVar11 = 0;
          }
          else {
LAB_100619f70:
            bVar11 = 3;
          }
LAB_100619f74:
          *(byte *)(unaff_x29 + -0x97) = bVar11;
LAB_100619f78:
          *(undefined1 *)(unaff_x29 + -0x98) = 0;
        }
        else {
          if (bVar11 == 0xe) {
            FUN_100bad9b8(unaff_x29 + -0x98,plVar3);
            goto joined_r0x000100619ee8;
          }
          if (bVar11 != 0xf) goto LAB_10061a118;
          FUN_100bad9b8(unaff_x29 + -0x98,plVar2,plVar3);
        }
        FUN_100e077ec(unaff_x29 + -0x80);
      }
      if ((*(byte *)(unaff_x29 + -0x98) & 1) != 0) {
LAB_10061a230:
        in_stack_00000100 = unaff_x26 + 1;
        unaff_x24 = unaff_x24 & 0x7fffffffffffffff;
        pbVar7 = *(byte **)(unaff_x29 + -0x90);
        pbVar8 = in_stack_00000058;
        in_stack_000000e8 = pbVar13;
        goto joined_r0x00010061a2ac;
      }
      bVar11 = *(byte *)(unaff_x29 + -0x97);
      cVar4 = cStack00000000000000c0;
      if (bVar11 < 2) {
        if (bVar11 == 0) {
          if (cVar16 != '\x03') {
            in_stack_00000100 = unaff_x26 + 1;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_108cc0453;
            *(undefined8 *)(unaff_x29 + -0x90) = 0xd;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
            *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
            in_stack_000000e8 = pbVar13;
            pbVar7 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
            goto LAB_10061a2a4;
          }
          _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
          if (cVar4 == '\x16') goto LAB_10061a718;
          uVar6 = *in_stack_00000050;
          unaff_x20[1] = in_stack_00000050[1];
          *unaff_x20 = uVar6;
          uVar6 = *(undefined8 *)((long)in_stack_00000050 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000050 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
          *(char *)(unaff_x29 + -0x80) = cVar4;
          FUN_10127f8c8(unaff_x29 + -0x98,unaff_x29 + -0x80);
          if (*(char *)(unaff_x29 + -0x98) == '\x01') goto LAB_10061a230;
          cVar16 = *(char *)(unaff_x29 + -0x97);
        }
        else {
          if (unaff_x24 != 0x8000000000000000) {
            in_stack_00000100 = unaff_x26 + 1;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_108cc0460;
            *(undefined8 *)(unaff_x29 + -0x90) = 0xb;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
            *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
            in_stack_000000e8 = pbVar13;
            pbVar7 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
            goto LAB_10061a2a4;
          }
          _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
          if (cVar4 == '\x16') {
            in_stack_00000100 = unaff_x26 + 1;
            in_stack_000000e8 = pbVar13;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10061a830;
          }
          uVar6 = *in_stack_00000050;
          unaff_x20[1] = in_stack_00000050[1];
          *unaff_x20 = uVar6;
          uVar6 = *(undefined8 *)((long)in_stack_00000050 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000050 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
          *(char *)(unaff_x29 + -0x80) = cVar4;
          FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
          unaff_x24 = *(ulong *)(unaff_x29 + -0x98);
          in_stack_00000058 = *(byte **)(unaff_x29 + -0x90);
          if (unaff_x24 == 0x8000000000000000) {
            in_stack_00000100 = unaff_x26 + 1;
            in_stack_000000e8 = pbVar13;
            goto LAB_10061a2bc;
          }
          in_stack_00000028 = *(ulong *)(unaff_x29 + -0x88);
        }
      }
      else if (bVar11 == 2) {
        if (cVar17 != '\x02') {
          in_stack_00000100 = unaff_x26 + 1;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_108cde374;
          *(undefined8 *)(unaff_x29 + -0x90) = 4;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          in_stack_000000e8 = pbVar13;
          pbVar7 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
          goto LAB_10061a2a4;
        }
        _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
        if (cVar4 == '\x16') goto LAB_10061a718;
        uVar6 = *in_stack_00000050;
        unaff_x20[1] = in_stack_00000050[1];
        *unaff_x20 = uVar6;
        uVar6 = *(undefined8 *)((long)in_stack_00000050 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000050 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
        *(char *)(unaff_x29 + -0x80) = cVar4;
        FUN_1012faaac(unaff_x29 + -0x98,unaff_x29 + -0x80);
        if (*(char *)(unaff_x29 + -0x98) == '\x01') goto LAB_10061a230;
        cVar17 = *(char *)(unaff_x29 + -0x97);
      }
      else {
        _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
        if (cVar4 == '\x16') {
LAB_10061a718:
          _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
          in_stack_00000100 = unaff_x26 + 1;
          in_stack_000000e8 = pbVar13;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10061a830:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10061a834);
          (*pcVar5)();
        }
        uVar6 = *in_stack_00000050;
        unaff_x20[1] = in_stack_00000050[1];
        *unaff_x20 = uVar6;
        uVar6 = *(undefined8 *)((long)in_stack_00000050 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000050 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar6;
        *(char *)(unaff_x29 + -0x80) = cVar4;
        FUN_100e077ec(unaff_x29 + -0x80);
      }
      unaff_x26 = unaff_x26 + 1;
      pbVar14 = pbVar8;
      uVar19 = (lVar12 - 0x40U >> 6) + 1;
      pbVar18 = pbVar13;
    } while (pbVar13 != pbVar8);
    in_stack_000000e8 = pbVar14;
    in_stack_00000100 = uVar19;
    if (cVar16 == '\x03') {
LAB_10061a270:
      *(undefined **)(unaff_x29 + -0x98) = &UNK_108cc0453;
      *(undefined8 *)(unaff_x29 + -0x90) = 0xd;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      param_2 = unaff_x29 + -0x80;
      unaff_x26 = uVar19;
      goto code_r0x00010061a298;
    }
    unaff_x26 = uVar19;
    if (unaff_x24 != 0x8000000000000000) {
      if (cVar17 == '\x02') {
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108cde374;
        *(undefined8 *)(unaff_x29 + -0x90) = 4;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        pbVar7 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
        pbVar8 = in_stack_00000058;
        goto joined_r0x00010061a2ac;
      }
      FUN_100d34830(&stack0x000000e0);
      unaff_x26 = in_stack_00000028;
      if (pbVar8 != pbVar14) {
        *(ulong *)(unaff_x29 + -0x80) = uVar19;
        pbVar8 = (byte *)thunk_FUN_1087e422c(((ulong)((long)pbVar8 - (long)pbVar14) >> 6) + uVar19,
                                             unaff_x29 + -0x80,&UNK_10b23a190);
        if (unaff_x24 != 0) {
          _free(in_stack_00000058);
        }
        unaff_x24 = 0x8000000000000000;
        in_stack_00000058 = pbVar8;
      }
      goto LAB_10061a2e8;
    }
    *(undefined **)(unaff_x29 + -0x98) = &UNK_108cc0460;
    *(undefined8 *)(unaff_x29 + -0x90) = 0xb;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    in_stack_00000058 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80)
    ;
  } while( true );
}

