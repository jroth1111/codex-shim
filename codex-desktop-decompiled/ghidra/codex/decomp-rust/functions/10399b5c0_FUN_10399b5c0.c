
/* WARNING: Possible PIC construction at 0x00010399b878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399b87c) */

void FUN_10399b5c0(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar6;
  ulong *unaff_x21;
  ulong uVar7;
  undefined8 unaff_x22;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_1b0 [88];
  ulong uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  ulong uStack_108;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  undefined1 auStack_70 [31];
  undefined1 uStack_51;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar8 = *param_2;
  uVar3 = uVar8 ^ 0x8000000000000000;
  if (-1 < (long)uVar8) {
    uVar3 = 6;
  }
  if ((long)uVar3 < 4) {
    if ((long)uVar3 < 3) {
      if (uVar3 == 0) {
        param_2 = param_2 + 1;
        goto SUB_10894ef08;
      }
      if (uVar3 == 1) {
        uStack_150 = (undefined1)param_2[1];
        uStack_14f = (undefined7)(param_2[1] >> 8);
        uVar2 = 2;
      }
      else {
        uStack_150 = (undefined1)param_2[1];
        uStack_14f = (undefined7)(param_2[1] >> 8);
        uVar2 = 3;
      }
      uStack_158 = CONCAT71(uStack_158._1_7_,uVar2);
      func_0x00010894d4c4(param_1,&uStack_158,&uStack_51,&UNK_10b2d5890);
    }
    else {
      *(char *)(param_1 + 1) = (char)param_2[1];
      *param_1 = 2;
    }
  }
  else if (uVar3 == 5) {
    uVar3 = param_2[1];
    uVar8 = param_2[2];
    uVar7 = param_2[3];
    lVar4 = uVar8 + uVar7 * 0x50;
    uStack_c8 = (undefined1)uVar8;
    uStack_c7 = (undefined7)(uVar8 >> 8);
    uStack_c0 = (undefined1)uVar3;
    uStack_bf = (undefined7)(uVar3 >> 8);
    uStack_b8 = (undefined1)lVar4;
    uStack_b7 = (undefined7)((ulong)lVar4 >> 8);
    auStack_70[0] = 10;
    uStack_d0 = uVar8;
    func_0x00010894d4c4(&uStack_158,auStack_70,&uStack_51,&UNK_10b2d5890);
    if (uStack_158 == 2) {
      if (uVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = uStack_150;
        *param_1 = 2;
      }
      else {
        func_0x00010894d650(&uStack_158,uVar7,&UNK_10b2d6310);
        param_1[5] = CONCAT71(uStack_12f,uStack_130);
        param_1[4] = CONCAT71(uStack_137,uStack_138);
        param_1[7] = CONCAT71(uStack_11f,uStack_120);
        param_1[6] = CONCAT71(uStack_127,uStack_128);
        param_1[9] = CONCAT71(uStack_10f,uStack_110);
        param_1[8] = CONCAT71(uStack_117,uStack_118);
        param_1[10] = uStack_108;
        param_1[1] = CONCAT71(uStack_14f,uStack_150);
        *param_1 = uStack_158;
        param_1[3] = CONCAT71(uStack_13f,uStack_140);
        param_1[2] = CONCAT71(uStack_147,uStack_148);
      }
      lVar4 = uVar7 + 1;
      uVar7 = uVar8;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_103938604(uVar7);
        uVar7 = uVar7 + 0x50;
      }
    }
    else {
      *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_130,uStack_137);
      *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_138,uStack_13f);
      *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_120,uStack_127);
      *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_128,uStack_12f);
      *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_110,uStack_117);
      *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_118,uStack_11f);
      param_1[10] = uStack_108;
      param_1[9] = CONCAT71(uStack_10f,uStack_110);
      *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_140,uStack_147);
      *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_148,uStack_14f);
      *param_1 = uStack_158;
      lVar4 = uVar7 + 1;
      *(undefined1 *)(param_1 + 1) = uStack_150;
      uVar7 = uVar8;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_103938604(uVar7);
        uVar7 = uVar7 + 0x50;
      }
    }
    if (uVar3 != 0) {
      _free(uVar8);
    }
  }
  else {
    unaff_x21 = &uStack_d0;
    if (uVar3 != 6) {
      uStack_d0 = param_2[1];
      uStack_c8 = (undefined1)param_2[2];
      uStack_c7 = (undefined7)(param_2[2] >> 8);
      uStack_c0 = (undefined1)param_2[3];
      uStack_bf = (undefined7)(param_2[3] >> 8);
      func_0x0001039263dc(&uStack_158,&uStack_d0);
      param_2 = &uStack_158;
      unaff_x30 = 0x10399b87c;
      register0x00000008 = (BADSPACEBASE *)(auStack_1b0 + 0x50);
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
SUB_10894ef08:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar3 = param_2[1];
      uVar8 = param_2[2];
      *(ulong *)((long)register0x00000008 + -0x48) = uVar3;
      *(ulong *)((long)register0x00000008 + -0x40) = uVar8;
      *(undefined1 *)((long)register0x00000008 + -0x50) = 5;
      func_0x00010894d4c4(param_1,(undefined1 *)((long)register0x00000008 + -0x50),
                          (undefined1 *)((long)register0x00000008 + -0x31),&UNK_10b2d5890);
      if (*param_2 != 0) {
        _free(uVar3);
      }
      return;
    }
    uVar6 = param_2[6];
    uVar3 = param_2[1];
    uVar7 = param_2[2];
    uVar5 = param_2[4];
    if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
      _free(param_2[3] + uVar5 * -8 + -8);
    }
    lStack_d8 = uVar3 + uVar7 * 0x70;
    uStack_158 = 0x8000000000000000;
    auStack_70[0] = 0xb;
    uStack_f0 = uVar3;
    uStack_e8 = uVar3;
    uStack_e0 = uVar8;
    func_0x00010894d4c4(&uStack_d0,auStack_70,&uStack_51,&UNK_10b2d5890);
    if (uStack_d0 == 2) {
      if (uVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = uStack_c8;
        *param_1 = 2;
      }
      else {
        func_0x00010894d650(&uStack_d0,uVar6,&UNK_10b2d6320);
        param_1[5] = CONCAT71(uStack_a7,uStack_a8);
        param_1[4] = CONCAT71(uStack_af,uStack_b0);
        param_1[7] = CONCAT71(uStack_97,uStack_98);
        param_1[6] = CONCAT71(uStack_9f,uStack_a0);
        param_1[9] = CONCAT71(uStack_87,uStack_88);
        param_1[8] = CONCAT71(uStack_8f,uStack_90);
        param_1[10] = uStack_80;
        param_1[1] = CONCAT71(uStack_c7,uStack_c8);
        *param_1 = uStack_d0;
        param_1[3] = CONCAT71(uStack_b7,uStack_b8);
        param_1[2] = CONCAT71(uStack_bf,uStack_c0);
      }
    }
    else {
      *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_a8,uStack_af);
      *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_b0,uStack_b7);
      *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_98,uStack_9f);
      *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_a0,uStack_a7);
      *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_88,uStack_8f);
      *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_90,uStack_97);
      param_1[10] = uStack_80;
      param_1[9] = CONCAT71(uStack_87,uStack_88);
      *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_b8,uStack_bf);
      *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_c0,uStack_c7);
      *param_1 = uStack_d0;
      *(undefined1 *)(param_1 + 1) = uStack_c8;
    }
    FUN_103939e10(&uStack_158);
  }
  return;
}

