
/* WARNING: Type propagation algorithm not settling */

void FUN_101279ef4(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 extraout_d0;
  undefined1 auVar8 [16];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  uint auStack_e0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
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
  uVar3 = param_2[0xb];
  uVar7 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar7 = 6;
  }
  if ((long)uVar7 < 2) {
    if (uVar7 != 0) {
      uStack_f8 = param_2[2];
      uStack_100 = param_2[1];
      uStack_e8 = param_2[4];
      uStack_f0 = param_2[3];
      auVar8 = func_0x00010612451c(&uStack_100);
      if ((auVar8._0_8_ & 1) == 0) {
        auVar8 = func_0x0001061247b8(&uStack_100);
        uVar7 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) {
          func_0x0001061249a4(auStack_e0,&uStack_100);
          if ((auStack_e0[0] & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&uStack_c0,&uStack_100);
            if (((uint)uStack_c0 & 1) == 0) {
              uStack_160 = 0;
              FUN_100f1395c(&uStack_a0,&uStack_160);
              uStack_138 = uStack_78;
              puStack_140 = puStack_80;
              uStack_128 = uStack_68;
              uStack_130 = uStack_70;
              uStack_118 = uStack_58;
              uStack_120 = uStack_60;
              uStack_110 = uStack_50;
              uStack_158 = uStack_98;
              uStack_160 = uStack_a0;
              uStack_148 = uStack_88;
              uStack_150 = uStack_90;
              if ((uStack_100 & 0x7fffffffffffffff) != 0) {
                _free(uStack_f8);
                uStack_a0 = uStack_160;
              }
              goto LAB_10127a358;
            }
            func_0x0001088076a4(&uStack_160,uStack_b0,uStack_a8);
          }
          else {
            func_0x0001087fa29c(&uStack_160,uStack_d0,uStack_c8);
          }
        }
        else if (uVar7 == 0) {
          uStack_158 = (ulong)uStack_158._1_7_ << 8;
          uStack_160 = 2;
        }
        else if (uVar7 == 1) {
          uStack_158 = CONCAT71(uStack_158._1_7_,1);
          uStack_160 = 2;
        }
        else {
          uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
          uStack_98 = uVar7;
          FUN_1087e3ee8(&uStack_160,&uStack_a0,&UNK_10b2242c0,&UNK_10b20a590);
        }
      }
      else {
        uStack_a0 = CONCAT71(uStack_a0._1_7_,2);
        uStack_98 = auVar8._8_8_;
        FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b21ae90);
      }
      uVar7 = uStack_160;
      if ((uStack_100 & 0x7fffffffffffffff) != 0) {
        _free(uStack_f8);
        uVar7 = uStack_160;
      }
      goto joined_r0x000101279fd8;
    }
    uVar2 = param_2[1];
    plVar4 = (long *)param_2[2];
    uVar7 = param_2[3];
    if (uVar2 != 0x8000000000000000) {
      if (uVar7 == 5) {
        if ((int)*plVar4 == 0x61636f6c && *(char *)((long)plVar4 + 4) == 'l') {
          uVar6 = 0;
          goto LAB_10127a248;
        }
LAB_10127a054:
        FUN_1087e44e4(&uStack_160,plVar4,uVar7,&UNK_10b22e1a8,2);
      }
      else {
        if ((uVar7 != 9) || (*plVar4 != 0x726f6d656d5f6e69 || (char)plVar4[1] != 'y'))
        goto LAB_10127a054;
        uVar6 = 1;
LAB_10127a248:
        uStack_158 = CONCAT71(uStack_158._1_7_,uVar6);
        uStack_160 = 2;
      }
      uVar7 = uStack_160;
      if (uVar2 != 0) {
        _free(plVar4);
        uVar7 = uStack_160;
      }
      goto joined_r0x000101279fd8;
    }
    if (uVar7 == 5) {
      if ((int)*plVar4 != 0x61636f6c || *(char *)((long)plVar4 + 4) != 'l') {
LAB_10127a334:
        FUN_1087e44e4(&uStack_160,plVar4,uVar7,&UNK_10b22e1a8,2);
        uVar7 = uStack_160;
        goto joined_r0x000101279fd8;
      }
      uStack_158._0_1_ = 0;
    }
    else {
      if ((uVar7 != 9) || (*plVar4 != 0x726f6d656d5f6e69 || (char)plVar4[1] != 'y'))
      goto LAB_10127a334;
      uStack_158._0_1_ = 1;
    }
LAB_10127a324:
    *(undefined1 *)(param_1 + 1) = (undefined1)uStack_158;
    *param_1 = 2;
  }
  else {
    if ((long)uVar7 < 3) {
      uStack_b8 = param_2[2];
      uStack_c0 = param_2[1];
      uStack_b0 = param_2[3];
      uVar7 = func_0x0001061240c0(&uStack_c0);
      if ((uVar7 & 1) != 0) {
        uStack_a0 = CONCAT71(uStack_a0._1_7_,3);
        uStack_98 = extraout_d0;
        FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b21ae90);
        uVar7 = uStack_160;
        if ((uStack_c0 & 0x7fffffffffffffff) != 0) {
          _free(uStack_b8);
          uVar7 = uStack_160;
        }
        goto joined_r0x000101279fd8;
      }
      puStack_140 = (undefined8 *)_malloc(0x20);
      if (puStack_140 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x20);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10127a3e8);
        (*pcVar5)();
      }
      puStack_140[1] = 0x6e20746e696f702d;
      *puStack_140 = 0x676e6974616f6c66;
      puStack_140[3] = 0x6465776f6c667265;
      puStack_140[2] = 0x766f207265626d75;
      uStack_148 = 0x20;
      uStack_130 = 0;
      uStack_138 = 0x20;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 8;
      if ((uStack_c0 & 0x7fffffffffffffff) != 0) {
        _free(uStack_b8);
      }
      uStack_a0 = 0;
    }
    else {
      if ((long)uVar7 < 5) {
        if (uVar7 == 3) {
          uStack_a0 = (ulong)CONCAT61(uStack_a0._2_6_,(char)param_2[1]) << 8;
        }
        else {
          uStack_a0 = CONCAT71(uStack_a0._1_7_,0xb);
        }
        FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b21ae90);
        uVar7 = uStack_160;
      }
      else if (uVar7 == 5) {
        uStack_90 = param_2[1];
        uStack_a0 = param_2[2];
        uStack_88 = uStack_a0 + param_2[3] * 0x60;
        uStack_98 = uStack_a0;
        func_0x00010883024c(&uStack_160,&uStack_a0);
        uVar7 = uStack_160;
      }
      else {
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
        uStack_48 = uVar3;
        func_0x000108872244(&uStack_160,&uStack_a0);
        uVar7 = uStack_160;
      }
joined_r0x000101279fd8:
      uStack_a0 = uVar7;
      if (uStack_a0 == 2) {
        goto LAB_10127a324;
      }
    }
LAB_10127a358:
    param_1[4] = puStack_140;
    param_1[3] = uStack_148;
    param_1[6] = uStack_130;
    param_1[5] = uStack_138;
    param_1[8] = uStack_120;
    param_1[7] = uStack_128;
    param_1[10] = uStack_110;
    param_1[9] = uStack_118;
    if ((uStack_a0 & 1) == 0) {
      uStack_150 = uVar3;
      uStack_158 = uVar1;
    }
    *param_1 = 1;
    param_1[1] = uStack_158;
    param_1[2] = uStack_150;
  }
  return;
}

