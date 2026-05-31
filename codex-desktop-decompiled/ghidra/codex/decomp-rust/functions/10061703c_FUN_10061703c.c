
void FUN_10061703c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 extraout_d0;
  undefined1 auVar7 [16];
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  uint auStack_100 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_b8 [3];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  uVar6 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar6 = 6;
  }
  puVar5 = param_2 + 1;
  if ((long)uVar6 < 3) {
    if (uVar6 == 1) {
      uStack_118 = param_2[2];
      uStack_120 = *puVar5;
      uStack_108 = param_2[4];
      uStack_110 = param_2[3];
      auVar7 = func_0x00010612451c(&uStack_120);
      if ((auVar7._0_8_ & 1) == 0) {
        auVar7 = func_0x0001061247b8(&uStack_120);
        if ((auVar7._0_8_ & 1) == 0) {
          func_0x0001061249a4(auStack_100,&uStack_120);
          if ((auStack_100[0] & 1) == 0) {
            func_0x000106124cf8(&uStack_e0,&uStack_120);
            if (((uint)uStack_e0 & 1) == 0) {
              auStack_b8[0] = 0;
              func_0x000100f1395c(&uStack_a0,auStack_b8);
              uStack_158 = uStack_78;
              puStack_160 = puStack_80;
              uStack_148 = uStack_68;
              uStack_150 = uStack_70;
              uStack_138 = uStack_58;
              uStack_140 = uStack_60;
              uStack_130 = uStack_50;
              uStack_178 = uStack_98;
              uStack_180 = uStack_a0;
              uStack_168 = uStack_88;
              uStack_170 = uStack_90;
              if ((uStack_120 & 0x7fffffffffffffff) != 0) {
                _free(uStack_118);
                uStack_a0 = uStack_180;
              }
              goto LAB_10061737c;
            }
            func_0x000107c04a30(&uStack_180,uStack_d0,uStack_c8);
          }
          else {
            func_0x000107c04604(&uStack_180,uStack_f0,uStack_e8);
          }
        }
        else {
          uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
          uStack_98 = auVar7._8_8_;
          thunk_FUN_1087e3db0(&uStack_180,&uStack_a0,auStack_100,&UNK_10b20a560);
        }
      }
      else {
        uStack_a0 = CONCAT71(uStack_a0._1_7_,2);
        uStack_98 = auVar7._8_8_;
        thunk_FUN_1087e3db0(&uStack_180,&uStack_a0,auStack_100,&UNK_10b20a560);
      }
      uVar6 = uStack_180;
      if ((uStack_120 & 0x7fffffffffffffff) != 0) {
        _free(uStack_118);
        uVar6 = uStack_180;
      }
joined_r0x000100617270:
      uStack_a0 = uVar6;
      if (uStack_a0 == 2) goto LAB_100617348;
    }
    else {
      if (uVar6 != 2) {
        if (*puVar5 == 0x8000000000000000) {
          uStack_98 = param_2[2];
          uStack_90 = param_2[3];
          uVar4 = 5;
          goto LAB_100617320;
        }
        func_0x000107c04ac8(&uStack_180,puVar5);
        uVar6 = uStack_180;
        goto joined_r0x000100617270;
      }
      uStack_d8 = param_2[2];
      uStack_e0 = *puVar5;
      uStack_d0 = param_2[3];
      uVar6 = func_0x0001061240c0(&uStack_e0);
      if ((uVar6 & 1) != 0) {
        uStack_a0 = CONCAT71(uStack_a0._1_7_,3);
        uStack_98 = extraout_d0;
        thunk_FUN_1087e3db0(&uStack_180,&uStack_a0,auStack_100,&UNK_10b20a560);
        uVar6 = uStack_180;
        if ((uStack_e0 & 0x7fffffffffffffff) != 0) {
          _free(uStack_d8);
          uVar6 = uStack_180;
        }
        goto joined_r0x000100617270;
      }
      puStack_160 = (undefined8 *)_malloc(0x20);
      if (puStack_160 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0x20);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006173e0);
        (*pcVar3)();
      }
      puStack_160[1] = 0x6e20746e696f702d;
      *puStack_160 = 0x676e6974616f6c66;
      puStack_160[3] = 0x6465776f6c667265;
      puStack_160[2] = 0x766f207265626d75;
      uStack_168 = 0x20;
      uStack_150 = 0;
      uStack_158 = 0x20;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_148 = 8;
      if ((uStack_e0 & 0x7fffffffffffffff) != 0) {
        _free(uStack_d8);
      }
      uStack_a0 = 0;
    }
LAB_10061737c:
    param_1[4] = puStack_160;
    param_1[3] = uStack_168;
    param_1[6] = uStack_150;
    param_1[5] = uStack_158;
    param_1[8] = uStack_140;
    param_1[7] = uStack_148;
    param_1[10] = uStack_130;
    param_1[9] = uStack_138;
    if ((uStack_a0 & 1) == 0) {
      uStack_170 = uVar2;
      uStack_178 = uVar1;
    }
    *param_1 = 1;
    param_1[1] = uStack_178;
    param_1[2] = uStack_170;
  }
  else {
    if (3 < (long)uVar6) {
      if (uVar6 == 4) {
        uVar4 = 0xb;
LAB_100617320:
        uStack_a0 = CONCAT71(uStack_a0._1_7_,uVar4);
        thunk_FUN_1087e3db0(&uStack_180,&uStack_a0,auStack_100,&UNK_10b20a560);
        uVar6 = uStack_180;
        goto joined_r0x000100617270;
      }
      if (uVar6 == 5) {
        uStack_90 = param_2[1];
        uStack_a0 = param_2[2];
        uStack_88 = uStack_a0 + param_2[3] * 0x60;
        uStack_98 = uStack_a0;
        func_0x000107c055ec(&uStack_180,&uStack_a0);
        uVar6 = uStack_180;
        goto joined_r0x000100617270;
      }
      uStack_78 = param_2[5];
      puStack_80 = (undefined8 *)param_2[4];
      uStack_68 = param_2[7];
      uStack_70 = param_2[6];
      uStack_58 = param_2[9];
      uStack_60 = param_2[8];
      uStack_98 = param_2[1];
      uStack_a0 = *param_2;
      uStack_88 = param_2[3];
      uStack_90 = param_2[2];
      uStack_50 = uVar1;
      uStack_48 = uVar2;
      func_0x000107c059d4(&uStack_180,&uStack_a0);
      uStack_a0 = uStack_180;
      if (uStack_180 != 2) goto LAB_10061737c;
LAB_100617348:
      puVar5 = &uStack_178;
    }
    *(char *)(param_1 + 1) = (char)*puVar5;
    *param_1 = 2;
  }
  return;
}

