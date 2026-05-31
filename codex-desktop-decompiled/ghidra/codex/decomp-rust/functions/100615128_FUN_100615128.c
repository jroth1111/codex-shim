
/* WARNING: Possible PIC construction at 0x0001006153a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006153ac) */

void FUN_100615128(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar4;
  ulong *unaff_x21;
  ulong uVar5;
  undefined8 unaff_x22;
  ulong uVar6;
  long lVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_1b0 [88];
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_70 [31];
  undefined1 uStack_51;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar6 = *param_2;
  uVar2 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar2 = 6;
  }
  if ((long)uVar2 < 4) {
    if (1 < (long)uVar2) {
      if (uVar2 == 2) {
        uStack_150 = param_2[1];
        uStack_158 = CONCAT71(uStack_158._1_7_,3);
      }
      else {
        uStack_158 = (ulong)CONCAT61(uStack_158._2_6_,(char)param_2[1]) << 8;
      }
      thunk_FUN_1087e3db0(param_1,&uStack_158,&uStack_51,&UNK_10b2199d0);
      return;
    }
    if (uVar2 == 1) {
      uVar2 = param_2[1];
      *param_1 = 2;
      param_1[1] = uVar2;
      return;
    }
    param_2 = param_2 + 1;
SUB_107c04a90:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    *(ulong *)((long)register0x00000008 + -0x48) = uVar2;
    *(ulong *)((long)register0x00000008 + -0x40) = uVar6;
    *(undefined1 *)((long)register0x00000008 + -0x50) = 5;
    FUN_1087e3db0(param_1,(undefined1 *)((long)register0x00000008 + -0x50),
                  (undefined1 *)((long)register0x00000008 + -0x31),&UNK_10b2199d0);
    if (*param_2 != 0) {
      _free(uVar2);
    }
    return;
  }
  if (uVar2 == 5) {
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    uStack_b8 = uVar6 + uVar5 * 0x50;
    auStack_70[0] = 10;
    uStack_d0 = uVar6;
    uStack_c8 = uVar6;
    uStack_c0 = uVar2;
    thunk_FUN_1087e3db0(&uStack_158,auStack_70,&uStack_51,&UNK_10b2199d0);
    if (uStack_158 == 2) {
      if (uVar5 == 0) {
        *param_1 = 2;
        param_1[1] = uStack_150;
      }
      else {
        thunk_FUN_1087e427c(&uStack_158,uVar5,&UNK_10b21cb80,&UNK_10b20a590);
        param_1[5] = uStack_130;
        param_1[4] = uStack_138;
        param_1[7] = uStack_120;
        param_1[6] = uStack_128;
        param_1[9] = uStack_110;
        param_1[8] = uStack_118;
        param_1[10] = uStack_108;
        param_1[1] = uStack_150;
        *param_1 = uStack_158;
        param_1[3] = uStack_140;
        param_1[2] = uStack_148;
      }
      lVar7 = uVar5 + 1;
      uVar5 = uVar6;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        FUN_100ddb5bc(uVar5);
        uVar5 = uVar5 + 0x50;
      }
    }
    else {
      param_1[7] = uStack_120;
      param_1[6] = uStack_128;
      param_1[9] = uStack_110;
      param_1[8] = uStack_118;
      param_1[10] = uStack_108;
      param_1[3] = uStack_140;
      param_1[2] = uStack_148;
      param_1[5] = uStack_130;
      param_1[4] = uStack_138;
      lVar7 = uVar5 + 1;
      *param_1 = uStack_158;
      param_1[1] = uStack_150;
      uVar5 = uVar6;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        FUN_100ddb5bc(uVar5);
        uVar5 = uVar5 + 0x50;
      }
    }
    if (uVar2 == 0) {
      return;
    }
    _free(uVar6);
    return;
  }
  unaff_x21 = &uStack_d0;
  if (uVar2 != 6) {
    uStack_c8 = param_2[2];
    uStack_d0 = param_2[1];
    uStack_c0 = param_2[3];
    FUN_100c820ec(&uStack_158,&uStack_d0);
    param_2 = &uStack_158;
    unaff_x30 = 0x1006153ac;
    register0x00000008 = (BADSPACEBASE *)(auStack_1b0 + 0x50);
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
    goto SUB_107c04a90;
  }
  uVar4 = param_2[6];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = param_2[4];
  if ((uVar3 != 0) && (uVar3 * 9 != -0x11)) {
    _free(param_2[3] + uVar3 * -8 + -8);
  }
  lStack_d8 = uVar2 + uVar5 * 0x70;
  uStack_158 = 0x8000000000000000;
  auStack_70[0] = 0xb;
  uStack_f0 = uVar2;
  uStack_e8 = uVar2;
  uStack_e0 = uVar6;
  thunk_FUN_1087e3db0(&uStack_d0,auStack_70,&uStack_51,&UNK_10b2199d0);
  if (uStack_d0 == 2) {
    if (uVar5 != 0) {
      thunk_FUN_1087e427c(&uStack_d0,uVar4,&UNK_10b21cb90,&UNK_10b20a590);
      param_1[5] = uStack_a8;
      param_1[4] = uStack_b0;
      param_1[7] = uStack_98;
      param_1[6] = uStack_a0;
      param_1[9] = uStack_88;
      param_1[8] = uStack_90;
      param_1[10] = uStack_80;
      param_1[1] = uStack_c8;
      *param_1 = uStack_d0;
      param_1[3] = uStack_b8;
      param_1[2] = uStack_c0;
      goto LAB_1006152a4;
    }
    uStack_d0 = 2;
  }
  else {
    param_1[7] = uStack_98;
    param_1[6] = uStack_a0;
    param_1[9] = uStack_88;
    param_1[8] = uStack_90;
    param_1[10] = uStack_80;
    param_1[3] = uStack_b8;
    param_1[2] = uStack_c0;
    param_1[5] = uStack_a8;
    param_1[4] = uStack_b0;
  }
  *param_1 = uStack_d0;
  param_1[1] = uStack_c8;
LAB_1006152a4:
  FUN_100deffc0(&uStack_158);
  return;
}

