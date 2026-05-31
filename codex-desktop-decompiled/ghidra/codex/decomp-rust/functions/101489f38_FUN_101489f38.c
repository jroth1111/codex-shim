
long FUN_101489f38(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_a0 = 10;
    lVar6 = func_0x000108a4a0f8(&lStack_a0,0,0);
    return lVar6;
  }
  puVar2 = (undefined8 *)_malloc(0x22);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar2 + 4) = 0x7374;
    puVar2[1] = 0x6b726f7774656e5f;
    *puVar2 = 0x6465736f706f7270;
    puVar2[3] = 0x6e656d646e656d61;
    puVar2[2] = 0x5f7963696c6f705f;
    uVar7 = 0x8000000000000000;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 0x22;
    param_1[9] = -0x8000000000000000;
    lStack_128 = param_1[0xb];
    lStack_130 = param_1[10];
    uStack_138 = 0x22;
    if (*param_2 == -0x8000000000000000) {
      uStack_e8 = 0x8000000000000000;
      goto LAB_10148a12c;
    }
    uVar7 = param_2[2];
    unaff_x21 = uVar7 * 0x48;
    if (0x1c71c71c71c71c7 < uVar7) {
      uVar3 = 0;
      goto LAB_10148a008;
    }
    lVar6 = param_2[1];
    if (unaff_x21 == 0) {
      uStack_e0 = 8;
      uStack_e8 = 0;
    }
    else {
      uStack_e0 = _malloc(unaff_x21);
      uStack_e8 = uVar7;
      if (uStack_e0 == 0) goto LAB_10148a1e4;
    }
    uStack_d8 = 0;
    if (uVar7 != 0) {
      uStack_d8 = 0;
      lVar8 = uVar7 << 5;
      do {
        func_0x0001006484d0(&lStack_a0,lVar6);
        uVar4 = uStack_d8;
        uVar7 = uStack_e0;
        if (lStack_a0 == -0x7ffffffffffffffb) {
          lVar6 = uStack_d8 + 1;
          uVar4 = uStack_e0;
          while (lVar6 = lVar6 + -1, lVar6 != 0) {
            FUN_100de6690(uVar4);
            uVar4 = uVar4 + 0x48;
          }
          if (uStack_e8 != 0) {
            _free(uVar7);
          }
          _free(lStack_130);
          return lStack_98;
        }
        if (uStack_d8 == uStack_e8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_e8);
        }
        lVar6 = lVar6 + 0x20;
        plVar5 = (long *)(uStack_e0 + uVar4 * 0x48);
        plVar5[1] = lStack_98;
        *plVar5 = lStack_a0;
        plVar5[3] = lStack_88;
        plVar5[2] = lStack_90;
        plVar5[5] = lStack_78;
        plVar5[4] = lStack_80;
        plVar5[7] = lStack_68;
        plVar5[6] = lStack_70;
        plVar5[8] = lStack_60;
        uStack_d8 = uVar4 + 1;
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != 0);
    }
    uStack_118 = uStack_d8;
    lStack_120 = uStack_e0;
    uVar7 = 0x8000000000000004;
LAB_10148a12c:
    uStack_d0 = uStack_118;
    uStack_d8 = lStack_120;
    uStack_c0 = uStack_108;
    uStack_c8 = uStack_110;
    uStack_b0 = uStack_f8;
    uStack_b8 = uStack_100;
    uStack_a8 = uStack_f0;
    uStack_e0 = uStack_e8;
    uStack_e8 = uVar7;
    FUN_101497a9c(&lStack_a0,param_1,&uStack_138,&uStack_e8);
    lStack_178 = lStack_90;
    lStack_180 = lStack_98;
    lStack_168 = lStack_80;
    lStack_170 = lStack_88;
    lStack_158 = lStack_70;
    lStack_160 = lStack_78;
    lStack_148 = lStack_60;
    lStack_150 = lStack_68;
    uStack_140 = uStack_58;
    if (lStack_98 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_180);
    }
    return 0;
  }
  func_0x0001087c9084(1,0x22);
LAB_10148a1e4:
  uVar3 = 8;
LAB_10148a008:
  func_0x0001087c9084(uVar3,unaff_x21);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10148a010);
  (*pcVar1)();
}

