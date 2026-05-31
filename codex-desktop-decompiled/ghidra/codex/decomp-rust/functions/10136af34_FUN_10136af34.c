
void FUN_10136af34(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  char unaff_w24;
  ulong unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uStack_1f8;
  char cStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  ulong uStack_1d0;
  ulong *puStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_190;
  ulong *puStack_188;
  ulong uStack_180;
  ulong *puStack_178;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
  byte bStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  char cStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar12 = *param_2;
  uVar9 = uVar12 ^ 0x8000000000000000;
  if (-1 < (long)uVar12) {
    uVar9 = 6;
  }
  if (uVar9 == 0) {
    func_0x00010061f4ac(&uStack_1f8,param_2 + 1);
    uStack_c0 = unaff_x25;
    uStack_d0 = unaff_x27;
    uStack_b0 = unaff_x28;
    cStack_e0 = cStack_1f0;
    if (uStack_1f8 != 2) {
      uStack_150 = uStack_1ef;
      uStack_149 = uStack_1e8;
      uStack_148 = uStack_1e7;
      uStack_158 = uStack_1b0;
      uStack_160 = uStack_1b8;
      unaff_x20 = puStack_1d8;
      param_2 = puStack_1c8;
      uStack_c0 = uStack_1d0;
      uVar9 = uStack_1a8;
      uStack_d0 = uStack_1e0;
      uStack_b0 = uStack_1c0;
    }
    goto LAB_10136b0b4;
  }
  if (uVar9 == 6) {
    if (param_2[6] == 0) {
      uVar13 = 0x2a;
      unaff_x20 = (undefined8 *)_malloc(0x2a);
      if (unaff_x20 == (undefined8 *)0x0) {
LAB_10136b3d4:
        func_0x0001087c9084(1,uVar13);
        goto LAB_10136b3f0;
      }
      unaff_x20[1] = 0x3120796c74636178;
      *unaff_x20 = 0x65206465746e6177;
      unaff_x20[3] = 0x20646e756f66202c;
      unaff_x20[2] = 0x746e656d656c6520;
      *(undefined8 *)((long)unaff_x20 + 0x22) = 0x73746e656d656c65;
      *(undefined8 *)((long)unaff_x20 + 0x1a) = 0x203020646e756f66;
      uVar12 = 0x2a;
      uVar11 = param_2[4];
    }
    else {
      if (param_2[6] == 1) {
        puVar2 = (ulong *)param_2[1];
        uVar11 = param_2[2];
        uVar10 = param_2[4];
        if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
          _free(param_2[3] + uVar10 * -8 + -8);
        }
        puStack_178 = puVar2 + uVar11 * 0xe;
        uStack_1f8 = 0x8000000000000000;
        puStack_188 = puVar2;
        puStack_190 = puVar2;
        uStack_180 = uVar12;
        if (uVar11 == 0) {
LAB_10136aff0:
          puStack_c8 = (undefined8 *)_malloc(0x36);
          if (puStack_c8 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x36);
LAB_10136b3f0:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10136b3f4);
            (*pcVar8)();
          }
          uVar12 = 0;
          puStack_c8[1] = 0x7720656c62617420;
          *puStack_c8 = 0x6465746365707865;
          puStack_c8[3] = 0x6e65203120796c74;
          puStack_c8[2] = 0x6361786520687469;
          puStack_c8[5] = 0x7974706d6520646e;
          puStack_c8[4] = 0x756f66202c797274;
          *(undefined8 *)((long)puStack_c8 + 0x2e) = 0x656c626174207974;
          uStack_160 = 0;
          uStack_158 = 0;
          puStack_b8 = (ulong *)0x0;
          uStack_c0 = 0x36;
          uStack_d0 = 0x36;
          uStack_b0 = 8;
LAB_10136b03c:
          FUN_100deffc0(&uStack_1f8);
          unaff_x20 = puStack_c8;
          param_2 = puStack_b8;
          uStack_1f8 = uVar12;
          cStack_e0 = unaff_w24;
        }
        else {
          puStack_188 = puVar2 + 0xe;
          if (*puVar2 == 0x8000000000000000) goto LAB_10136aff0;
          uStack_80 = puVar2[2];
          uStack_88 = puVar2[1];
          uStack_128 = puVar2[6];
          uStack_130 = puVar2[5];
          uStack_118 = puVar2[8];
          uStack_120 = puVar2[7];
          uStack_108 = puVar2[10];
          puStack_110 = (ulong *)puVar2[9];
          uStack_f8 = puVar2[0xc];
          uStack_100 = puVar2[0xb];
          uStack_138 = (undefined1)puVar2[4];
          uStack_137 = (undefined7)(puVar2[4] >> 8);
          bStack_140 = (byte)puVar2[3];
          uStack_13f = (undefined7)(puVar2[3] >> 8);
          uStack_90 = *puVar2;
          func_0x00010061f4ac(&uStack_e8,&uStack_90);
          cVar7 = cStack_e0;
          uVar6 = uStack_f8;
          param_2 = puStack_110;
          uVar5 = uStack_118;
          uVar4 = uStack_120;
          uVar10 = uStack_128;
          uVar11 = uStack_130;
          bVar3 = bStack_140;
          uVar12 = CONCAT71(uStack_e7,uStack_e8);
          if (uVar12 != 2) {
            uStack_150 = uStack_df;
            uStack_149 = uStack_d8;
            uStack_148 = uStack_d7;
            uStack_158 = uStack_a0;
            uStack_160 = uStack_a8;
            FUN_100ddb5bc(&bStack_140);
            uVar9 = uStack_98;
            unaff_w24 = cStack_e0;
            goto LAB_10136b03c;
          }
          unaff_x20 = (undefined8 *)(ulong)bStack_140;
          uStack_150 = uStack_13f;
          uStack_149 = uStack_138;
          uStack_148 = uStack_137;
          uStack_158 = uStack_100;
          uStack_160 = uStack_108;
          FUN_100deffc0(&uStack_1f8);
          uStack_168 = uStack_148;
          uStack_170 = uStack_150;
          uStack_169 = uStack_149;
          uStack_88 = uStack_158;
          uStack_90 = uStack_160;
          uStack_13f = uStack_150;
          uStack_138 = uStack_149;
          uStack_137 = uStack_148;
          uStack_100 = uStack_158;
          uStack_108 = uStack_160;
          bStack_140 = bVar3;
          uStack_130 = uVar11;
          uStack_128 = uVar10;
          uStack_120 = uVar4;
          uStack_118 = uVar5;
          puStack_110 = param_2;
          uStack_f8 = uVar6;
          if (cVar7 == '\0') {
            func_0x000106128f78(&uStack_e8,&bStack_140);
            uStack_1f8 = CONCAT71(uStack_e7,uStack_e8);
            if (uStack_1f8 != 2) goto LAB_10136b324;
            cStack_e0 = '\0';
            uStack_c0 = unaff_x25;
            uStack_d0 = unaff_x27;
            uStack_b0 = unaff_x28;
          }
          else if (cVar7 == '\x01') {
            func_0x000106128f78(&uStack_e8,&bStack_140);
            uStack_1f8 = CONCAT71(uStack_e7,uStack_e8);
            if (uStack_1f8 == 2) {
              cStack_e0 = '\x01';
              uStack_c0 = unaff_x25;
              uStack_d0 = unaff_x27;
              uStack_b0 = unaff_x28;
            }
            else {
LAB_10136b324:
              uStack_150 = uStack_df;
              uStack_149 = uStack_d8;
              uStack_148 = uStack_d7;
              uStack_158 = uStack_a0;
              uStack_160 = uStack_a8;
              unaff_x20 = puStack_c8;
              param_2 = puStack_b8;
              uVar9 = uStack_98;
            }
          }
          else {
            func_0x000106128f78(&uStack_e8,&bStack_140);
            uStack_1f8 = CONCAT71(uStack_e7,uStack_e8);
            if (uStack_1f8 != 2) goto LAB_10136b324;
            cStack_e0 = '\x02';
            uStack_c0 = unaff_x25;
            uStack_d0 = unaff_x27;
            uStack_b0 = unaff_x28;
          }
        }
LAB_10136b0b4:
        uStack_1f8 = uStack_1f8 & 0xff;
        unaff_w24 = cStack_e0;
        uVar12 = uStack_c0;
        puStack_1c8 = param_2;
        goto joined_r0x00010136b3cc;
      }
      uVar13 = 0x2d;
      unaff_x20 = (undefined8 *)_malloc(0x2d);
      if (unaff_x20 == (undefined8 *)0x0) goto LAB_10136b3d4;
      unaff_x20[1] = 0x3120796c74636178;
      *unaff_x20 = 0x65206465746e6177;
      unaff_x20[3] = 0x742065726f6d202c;
      unaff_x20[2] = 0x746e656d656c6520;
      *(undefined8 *)((long)unaff_x20 + 0x25) = 0x746e656d656c6520;
      *(undefined8 *)((long)unaff_x20 + 0x1d) = 0x31206e6168742065;
      uVar12 = 0x2d;
      uVar11 = param_2[4];
    }
    uStack_158 = 0;
    uStack_160 = 0;
    if (uVar11 != 0) {
      uStack_158 = 0;
      uStack_160 = 0;
      if (uVar11 * 9 != -0x11) {
        _free(param_2[3] + uVar11 * -8 + -8);
      }
    }
    func_0x000100cc34ac(param_2);
    puStack_1c8 = (ulong *)0x0;
    uStack_b0 = 8;
    uStack_1f8 = 0;
    uStack_d0 = uVar12;
  }
  else {
    uStack_e8 = 0xd;
    FUN_1087e3db0(&uStack_1f8,&uStack_e8,&UNK_10b2446c0,&UNK_10b20a590);
    uStack_150 = uStack_1ef;
    uStack_149 = uStack_1e8;
    uStack_148 = uStack_1e7;
    uStack_158 = uStack_1b0;
    uStack_160 = uStack_1b8;
    bVar1 = uVar9 != 0;
    unaff_w24 = cStack_1f0;
    uStack_d0 = uStack_1e0;
    unaff_x20 = puStack_1d8;
    uVar12 = uStack_1d0;
    uStack_b0 = uStack_1c0;
    uVar9 = uStack_1a8;
    if (bVar1) {
      FUN_100ddb5bc(param_2);
    }
joined_r0x00010136b3cc:
    if (uStack_1f8 == 2) goto LAB_10136b0ec;
  }
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_149,uStack_150);
  param_1[9] = uStack_158;
  param_1[8] = uStack_160;
  param_1[2] = CONCAT71(uStack_148,uStack_149);
  param_1[3] = uStack_d0;
  param_1[4] = (ulong)unaff_x20;
  param_1[5] = uVar12;
  param_1[6] = (ulong)puStack_1c8;
  param_1[7] = uStack_b0;
  param_1[10] = uVar9;
LAB_10136b0ec:
  *(char *)(param_1 + 1) = unaff_w24;
  *param_1 = uStack_1f8;
  return;
}

