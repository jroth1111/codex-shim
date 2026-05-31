
void FUN_105dc99f8(ulong *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long extraout_x1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong unaff_x20;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a0;
  ulong uStack_98;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[3] = (ulong)&UNK_109b9f7e8;
    param_1[6] = 0;
    param_1[5] = 0;
    goto LAB_105dc9bb0;
  }
  if (param_2 < 0xf) {
    unaff_x23 = 4;
    if (3 < param_2) {
      unaff_x23 = (param_2 & 8) + 8;
    }
    uVar9 = unaff_x23 * 8;
    uVar4 = unaff_x23 + 8;
    unaff_x20 = uVar4 + uVar9;
    if (CARRY8(uVar4,uVar9)) goto LAB_105dc9b34;
LAB_105dc9acc:
    if (0x7ffffffffffffff8 < unaff_x20) goto LAB_105dc9b34;
    puVar8 = param_3;
    puVar7 = param_4;
    lVar3 = _malloc(unaff_x20);
    if (lVar3 == 0) {
      uVar5 = func_0x0001087c906c(8,unaff_x20);
      _free(unaff_x20 + unaff_x22 * -8 + -8);
      auVar10 = __Unwind_Resume(uVar5);
      uStack_b0 = auVar10._8_8_;
      puVar6 = auVar10._0_8_;
      uVar9 = puVar6[2];
      uVar4 = *puVar6;
      puStack_a0 = param_1;
      uStack_98 = unaff_x23;
      if (uVar9 == uVar4) {
        uVar1 = puVar6[5] + puVar6[6];
        uVar4 = uVar1;
        if (0x13b13b13b13b13a < uVar1) {
          uVar4 = 0x13b13b13b13b13b;
        }
        if ((uVar4 - uVar9 < 2 || uVar1 < uVar9) ||
           (func_0x000108a4a344(&uStack_110,uVar9,puVar6[1],uVar4,8,0x68), (int)uStack_110 == 1)) {
          func_0x000108a4a344(&uStack_110,uVar9,puVar6[1],uVar9 + 1,8,0x68);
          if ((int)uStack_110 == 1) {
            func_0x0001087c9084(uStack_108,uStack_100);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x105dc9d9c);
            (*pcVar2)();
          }
          uVar5 = puVar8[1];
          uStack_110 = *puVar8;
          uStack_f0 = puVar7[1];
          uStack_f8 = *puVar7;
          uStack_e0 = puVar7[3];
          uStack_e8 = puVar7[2];
          uStack_d0 = puVar7[5];
          uStack_d8 = puVar7[4];
          uStack_c0 = puVar7[7];
          uStack_c8 = puVar7[6];
          *puVar6 = uVar9 + 1;
          puVar6[1] = uStack_108;
          uStack_100 = puVar8[2];
          uStack_b8 = puVar7[8];
          uStack_108 = uVar5;
          goto LAB_105dc9c60;
        }
        *puVar6 = uVar4;
        puVar6[1] = uStack_108;
      }
      uStack_108 = puVar8[1];
      uStack_110 = *puVar8;
      uStack_f0 = puVar7[1];
      uStack_f8 = *puVar7;
      uStack_e0 = puVar7[3];
      uStack_e8 = puVar7[2];
      uStack_d0 = puVar7[5];
      uStack_d8 = puVar7[4];
      uStack_c0 = puVar7[7];
      uStack_c8 = puVar7[6];
      uStack_100 = puVar8[2];
      uStack_b8 = puVar7[8];
      if (uVar9 == uVar4) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc156c7e9c582a628E(puVar6);
      }
LAB_105dc9c60:
      puVar8 = (undefined8 *)(puVar6[1] + uVar9 * 0x68);
      puVar8[9] = uStack_c8;
      puVar8[8] = uStack_d0;
      puVar8[0xb] = uStack_b8;
      puVar8[10] = uStack_c0;
      puVar8[0xc] = uStack_b0;
      puVar8[1] = uStack_108;
      *puVar8 = uStack_110;
      puVar8[3] = uStack_f8;
      puVar8[2] = uStack_100;
      puVar8[5] = uStack_e8;
      puVar8[4] = uStack_f0;
      puVar8[7] = uStack_d8;
      puVar8[6] = uStack_e0;
      puVar6[2] = uVar9 + 1;
      return;
    }
    unaff_x22 = unaff_x23 - 1;
    unaff_x20 = lVar3 + uVar9;
    _memset(unaff_x20,0xff,uVar4);
    lVar3 = param_2 * 0x68;
    if (0x13b13b13b13b13b < param_2) {
      uVar5 = 0;
      goto LAB_105dc9b2c;
    }
  }
  else {
    if ((param_2 >> 0x3d == 0) &&
       (uVar4 = 0xffffffffffffffff >> (LZCOUNT((param_2 * 8) / 7 - 1) & 0x3fU),
       uVar4 < 0x1fffffffffffffff)) {
      unaff_x23 = uVar4 + 1;
      uVar9 = unaff_x23 * 8;
      uVar4 = uVar4 + 9;
      unaff_x20 = uVar4 + uVar9;
      if (!CARRY8(uVar4,uVar9)) goto LAB_105dc9acc;
    }
LAB_105dc9b34:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109b9f7f0,0x39,&UNK_10b46a610);
    lVar3 = extraout_x1;
    param_1 = unaff_x24;
    param_3 = unaff_x25;
    param_4 = unaff_x26;
  }
  if (lVar3 == 0) {
    param_2 = 0;
    uVar4 = 8;
  }
  else {
    uVar4 = _malloc(lVar3);
    if (uVar4 == 0) {
      uVar5 = 8;
LAB_105dc9b2c:
      func_0x0001087c9084(uVar5,lVar3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x105dc9b34);
      (*pcVar2)();
    }
  }
  *param_1 = param_2;
  param_1[1] = uVar4;
  uVar4 = unaff_x22;
  if (7 < unaff_x22) {
    uVar4 = (unaff_x23 >> 3) * 7;
  }
  param_1[2] = 0;
  param_1[3] = unaff_x20;
  param_1[4] = unaff_x22;
  param_1[5] = uVar4;
  param_1[6] = 0;
LAB_105dc9bb0:
  param_1[7] = (ulong)param_3;
  param_1[8] = (ulong)param_4;
  return;
}

