
/* WARNING: Type propagation algorithm not settling */

void FUN_1012e1bbc(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  byte bVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x27;
  long lStack_238;
  byte bStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  long lStack_1e8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  uVar14 = *param_2;
  uVar9 = uVar14 ^ 0x8000000000000000;
  if (-1 < (long)uVar14) {
    uVar9 = 6;
  }
  if (uVar9 == 0) {
    uVar9 = param_2[1];
    plVar2 = (long *)param_2[2];
    uVar14 = param_2[3];
    if (uVar14 == 9) {
      if (*plVar2 == 0x6f7463656e6e6f63 && (char)plVar2[1] == 'r') {
        bStack_230 = 0;
        lStack_238 = 2;
      }
      else {
LAB_1012e1d4c:
        func_0x0001087e44e4(&lStack_238,plVar2,uVar14,&UNK_10b2207d8,2);
      }
    }
    else {
      if ((uVar14 != 6) || ((int)*plVar2 != 0x67756c70 || *(short *)((long)plVar2 + 4) != 0x6e69))
      goto LAB_1012e1d4c;
      bStack_230 = 1;
      lStack_238 = 2;
    }
    if (uVar9 != 0) {
      _free(plVar2);
    }
    if (lStack_238 == 2) {
      bStack_230 = bStack_230 & 1;
    }
    else {
      *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_210,uStack_217);
      *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_218,uStack_21f);
      *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_200,uStack_207);
      *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_208,uStack_20f);
      *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_1f0,uStack_1f7);
      *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_1f8,uStack_1ff);
      param_1[10] = lStack_1e8;
      param_1[9] = CONCAT71(uStack_1ef,uStack_1f0);
      *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_220,uStack_227);
      *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_228,uStack_22f);
    }
    *(byte *)(param_1 + 1) = bStack_230;
    goto LAB_1012e1df4;
  }
  if (uVar9 != 6) {
    lStack_c8 = CONCAT71(lStack_c8._1_7_,0xd);
    FUN_1087e3db0(&lStack_238,&lStack_c8,&UNK_10b2446c0,&UNK_10b20a590);
    param_1[5] = CONCAT71(uStack_20f,uStack_210);
    param_1[4] = CONCAT71(uStack_217,uStack_218);
    param_1[7] = CONCAT71(uStack_1ff,uStack_200);
    param_1[6] = CONCAT71(uStack_207,uStack_208);
    param_1[9] = CONCAT71(uStack_1ef,uStack_1f0);
    param_1[8] = CONCAT71(uStack_1f7,uStack_1f8);
    param_1[10] = lStack_1e8;
    param_1[1] = CONCAT71(uStack_22f,bStack_230);
    *param_1 = lStack_238;
    param_1[3] = CONCAT71(uStack_21f,uStack_220);
    param_1[2] = CONCAT71(uStack_227,uStack_228);
    if (uVar9 == 0) {
      return;
    }
    FUN_100ddb5bc(param_2);
    return;
  }
  if (param_2[6] == 0) {
    uVar12 = 0x2a;
    puVar7 = (undefined8 *)_malloc(0x2a);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0x3120796c74636178;
      *puVar7 = 0x65206465746e6177;
      puVar7[3] = 0x20646e756f66202c;
      puVar7[2] = 0x746e656d656c6520;
      *(undefined8 *)((long)puVar7 + 0x22) = 0x73746e656d656c65;
      *(undefined8 *)((long)puVar7 + 0x1a) = 0x203020646e756f66;
      lVar15 = 0x2a;
LAB_1012e1e74:
      *param_1 = 0;
      param_1[3] = lVar15;
      param_1[4] = (long)puVar7;
      param_1[5] = lVar15;
      param_1[6] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[7] = 8;
      uVar9 = param_2[4];
      if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
        _free(param_2[3] + uVar9 * -8 + -8);
      }
      plVar2 = (long *)param_2[1];
      lVar15 = param_2[2] + 1;
      plVar11 = plVar2;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        if (*plVar11 != 0) {
          _free(plVar11[1]);
        }
        FUN_100ddb5bc(plVar11 + 3);
        plVar11 = plVar11 + 0xe;
      }
      if (*param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar2);
      return;
    }
  }
  else {
    if (param_2[6] == 1) {
      puVar1 = (ulong *)param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[4];
      if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
        _free(param_2[3] + uVar10 * -8 + -8);
      }
      puStack_1b8 = puVar1 + uVar9 * 0xe;
      lStack_238 = -0x8000000000000000;
      puStack_1c8 = puVar1;
      puStack_1d0 = puVar1;
      uStack_1c0 = uVar14;
      if (uVar9 != 0) {
        puStack_1c8 = puVar1 + 0xe;
        uVar14 = *puVar1;
        if (uVar14 != 0x8000000000000000) {
          plVar2 = (long *)puVar1[1];
          uVar9 = puVar1[2];
          uStack_108 = puVar1[6];
          uStack_110 = puVar1[5];
          uStack_f8 = puVar1[8];
          uStack_100 = puVar1[7];
          uStack_e8 = puVar1[10];
          uStack_f0 = puVar1[9];
          uStack_d8 = puVar1[0xc];
          uStack_e0 = puVar1[0xb];
          uStack_118 = (undefined1)puVar1[4];
          uStack_117 = (undefined7)(puVar1[4] >> 8);
          uStack_120 = (undefined1)puVar1[3];
          uStack_11f = (undefined7)(puVar1[3] >> 8);
          if (uVar9 == 9) {
            if (*plVar2 != 0x6f7463656e6e6f63 || (char)plVar2[1] != 'r') goto LAB_1012e1f44;
            bStack_c0 = 0;
LAB_1012e1f94:
            lStack_c8 = 2;
          }
          else {
            if ((uVar9 == 6) &&
               ((int)*plVar2 == 0x67756c70 && *(short *)((long)plVar2 + 4) == 0x6e69)) {
              bStack_c0 = 1;
              goto LAB_1012e1f94;
            }
LAB_1012e1f44:
            func_0x0001087e44e4(&lStack_c8,plVar2,uVar9,&UNK_10b2207d8,2);
          }
          if (uVar14 != 0) {
            _free(plVar2);
          }
          bVar13 = bStack_c0;
          lVar15 = lStack_c8;
          uVar5 = uStack_d8;
          uVar4 = uStack_f0;
          uVar3 = uStack_f8;
          uVar10 = uStack_100;
          uVar14 = uStack_108;
          uVar9 = uStack_110;
          uVar8 = uStack_120;
          if (lStack_c8 == 2) {
            uStack_180 = uStack_11f;
            uStack_179 = uStack_118;
            uStack_178 = uStack_117;
            uStack_188 = uStack_e0;
            uStack_190 = uStack_e8;
            FUN_100deffc0(&lStack_238);
            uStack_198 = uStack_178;
            uStack_1a0 = uStack_180;
            uStack_199 = uStack_179;
            uStack_1a8 = uStack_188;
            uStack_1b0 = uStack_190;
            uStack_170 = uVar8;
            uStack_16f = uStack_180;
            uStack_158 = uVar14;
            uStack_160 = uVar9;
            uStack_148 = uVar3;
            uStack_150 = uVar10;
            uStack_168 = uStack_179;
            uStack_167 = uStack_178;
            uStack_140 = uVar4;
            uStack_130 = uStack_188;
            uStack_138 = uStack_190;
            uStack_128 = uVar5;
            if ((bVar13 & 1) == 0) {
              func_0x000106128f78(&lStack_c8,&uStack_170);
              if (lStack_c8 != 2) goto LAB_1012e20a0;
              uVar8 = 0;
            }
            else {
              func_0x000106128f78(&lStack_c8,&uStack_170);
              if (lStack_c8 != 2) {
LAB_1012e20a0:
                param_1[5] = lStack_a0;
                param_1[4] = (long)puStack_a8;
                param_1[7] = lStack_90;
                param_1[6] = lStack_98;
                param_1[9] = lStack_80;
                param_1[8] = lStack_88;
                param_1[10] = lStack_78;
                param_1[1] = CONCAT71(uStack_bf,bStack_c0);
                *param_1 = lStack_c8;
                param_1[3] = lStack_b0;
                param_1[2] = CONCAT71(uStack_b7,uStack_b8);
                return;
              }
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 1) = uVar8;
            lStack_238 = 2;
LAB_1012e1df4:
            *param_1 = lStack_238;
            return;
          }
          uStack_180 = uStack_bf;
          uStack_179 = uStack_b8;
          uStack_178 = uStack_b7;
          uStack_188 = lStack_80;
          uStack_190 = lStack_88;
          FUN_100ddb5bc(&uStack_120);
          unaff_x27 = lStack_78;
          goto LAB_1012e1cc0;
        }
      }
      bVar13 = (byte)uVar14;
      puStack_a8 = (undefined8 *)_malloc(0x36);
      if (puStack_a8 != (undefined8 *)0x0) {
        lVar15 = 0;
        puStack_a8[1] = 0x7720656c62617420;
        *puStack_a8 = 0x6465746365707865;
        puStack_a8[3] = 0x6e65203120796c74;
        puStack_a8[2] = 0x6361786520687469;
        puStack_a8[5] = 0x7974706d6520646e;
        puStack_a8[4] = 0x756f66202c797274;
        *(undefined8 *)((long)puStack_a8 + 0x2e) = 0x656c626174207974;
        uStack_190 = 0;
        uStack_188 = 0;
        lStack_98 = 0;
        lStack_a0 = 0x36;
        lStack_90 = 8;
        lStack_b0 = 0x36;
LAB_1012e1cc0:
        FUN_100deffc0(&lStack_238);
        *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_179,uStack_180);
        param_1[9] = uStack_188;
        param_1[8] = uStack_190;
        *(char *)param_1 = (char)lVar15;
        *(undefined1 *)((long)param_1 + 7) = 0;
        *(undefined2 *)((long)param_1 + 5) = 0;
        *(undefined4 *)((long)param_1 + 1) = 0;
        *(byte *)(param_1 + 1) = bVar13;
        param_1[2] = CONCAT71(uStack_178,uStack_179);
        param_1[3] = lStack_b0;
        param_1[4] = (long)puStack_a8;
        param_1[5] = lStack_a0;
        param_1[6] = lStack_98;
        param_1[7] = lStack_90;
        param_1[10] = unaff_x27;
        return;
      }
      func_0x0001087c9084(1,0x36);
      goto LAB_1012e2144;
    }
    uVar12 = 0x2d;
    puVar7 = (undefined8 *)_malloc(0x2d);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0x3120796c74636178;
      *puVar7 = 0x65206465746e6177;
      puVar7[3] = 0x742065726f6d202c;
      puVar7[2] = 0x746e656d656c6520;
      *(undefined8 *)((long)puVar7 + 0x25) = 0x746e656d656c6520;
      *(undefined8 *)((long)puVar7 + 0x1d) = 0x31206e6168742065;
      lVar15 = 0x2d;
      goto LAB_1012e1e74;
    }
  }
  func_0x0001087c9084(1,uVar12);
LAB_1012e2144:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1012e2148);
  (*pcVar6)();
}

