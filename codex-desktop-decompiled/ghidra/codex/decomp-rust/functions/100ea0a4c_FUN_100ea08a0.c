
ulong FUN_100ea08a0(ulong param_1,int *param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  uStack_60 = param_1;
  if (*param_2 == 1) {
    uVar13 = *(ulong *)(param_2 + 4);
    uVar14 = param_3[2];
    lStack_50 = param_4[1];
    lStack_58 = *param_4;
    lStack_40 = param_4[3];
    lStack_48 = param_4[2];
    lStack_38 = param_4[4];
    uStack_78 = 1;
    uStack_68 = 0;
    uStack_70 = uVar13;
    if (uVar14 == *param_3) {
      param_1 = func_0x000108a93cb8(param_3);
    }
    puVar7 = (undefined8 *)(param_3[1] + uVar14 * 0x48);
    puVar7[1] = uStack_70;
    *puVar7 = uStack_78;
    puVar7[8] = lStack_38;
    puVar7[5] = lStack_50;
    puVar7[4] = lStack_58;
    puVar7[7] = lStack_40;
    puVar7[6] = lStack_48;
    puVar7[3] = uStack_60;
    puVar7[2] = uStack_68;
    param_3[2] = uVar14 + 1;
    if (uVar14 < uVar13) {
      uVar2 = func_0x000108a07bdc(uVar13,uVar14 + 1,&UNK_10b236110);
      (**(code **)(lStack_58 + 0x20))(&lStack_40,lStack_50,lStack_48);
      __Unwind_Resume(uVar2);
      auVar15 = func_0x000108a07bc4();
      plVar4 = auVar15._8_8_;
      plVar3 = auVar15._0_8_;
      uStack_88 = 0x100ea0a4c;
      if (*plVar3 == 2) {
        uStack_c8 = plVar3[2];
        uStack_d0 = plVar3[1];
        uStack_f0 = uStack_d0 ^ 0x736f6d6570736575;
        uStack_e8 = uStack_d0 ^ 0x6c7967656e657261;
        uStack_e0 = uStack_c8 ^ 0x646f72616e646f6d;
        uStack_d8 = uStack_c8 ^ 0x7465646279746573;
        uStack_b8 = 0;
        uStack_b0 = 0;
        lStack_c0 = 0;
        lVar8 = *plVar4;
        uStack_a8 = (ulong)(lVar8 != 0);
        puStack_a0 = param_3;
        uStack_98 = uVar2;
        puStack_90 = &stack0xfffffffffffffff0;
        FUN_10118f26c(&uStack_f0,&uStack_a8,8);
        if (lVar8 == 0) {
          uStack_a8 = (ulong)*(byte *)(plVar4 + 1);
          puVar5 = &uStack_a8;
          lVar8 = 8;
        }
        else {
          puVar5 = (ulong *)plVar4[1];
          lVar8 = plVar4[2];
        }
        FUN_10118f26c(&uStack_f0,puVar5,lVar8);
        uStack_b8 = uStack_b8 | lStack_c0 << 0x38;
        uStack_d8 = uStack_b8 ^ uStack_d8;
        uStack_f0 = uStack_e0 + uStack_f0;
        uVar14 = uStack_f0 ^ (uStack_e0 >> 0x33 | uStack_e0 << 0xd);
        uVar13 = uStack_d8 + uStack_e8 + uVar14;
        uVar10 = uStack_d8 + uStack_e8 ^ (uStack_d8 >> 0x30 | uStack_d8 << 0x10);
        uVar12 = uVar13 ^ (uVar14 >> 0x2f | uVar14 << 0x11);
        uVar14 = uVar10 + (uStack_f0 >> 0x20 | uStack_f0 << 0x20);
        uVar9 = uVar14 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
        uVar14 = (uVar14 ^ uStack_b8) + uVar12;
        uVar12 = uVar14 ^ (uVar12 >> 0x33 | uVar12 << 0xd);
        uVar13 = uVar9 + ((uVar13 >> 0x20 | uVar13 << 0x20) ^ 0xff);
        uVar10 = uVar12 + uVar13;
        uVar13 = uVar13 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
        uVar12 = uVar10 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
        uVar14 = uVar13 + (uVar14 >> 0x20 | uVar14 << 0x20);
        uVar9 = uVar12 + uVar14;
        uVar14 = uVar14 ^ (uVar13 >> 0x2b | uVar13 << 0x15);
        uVar12 = uVar9 ^ (uVar12 >> 0x33 | uVar12 << 0xd);
        uVar13 = uVar14 + (uVar10 >> 0x20 | uVar10 << 0x20);
        uVar10 = uVar12 + uVar13;
        uVar13 = uVar13 ^ (uVar14 >> 0x30 | uVar14 << 0x10);
        uVar12 = uVar10 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
        uVar14 = uVar13 + (uVar9 >> 0x20 | uVar9 << 0x20);
        uVar13 = uVar14 ^ (uVar13 >> 0x2b | uVar13 << 0x15);
        uVar14 = uVar12 + uVar14 ^ (uVar12 >> 0x33 | uVar12 << 0xd);
        lVar8 = uVar13 + (uVar10 >> 0x20 | uVar10 << 0x20);
        lVar1 = uVar14 + lVar8;
        uVar6 = ((uint)((ulong)lVar8 >> 0x20) ^ (uint)(uVar13 >> 0x10)) >> 0xb ^
                (uint)(uVar14 >> 0x2f) ^ (uint)((ulong)lVar1 >> 0x20) ^ (uint)lVar1;
      }
      else {
        uVar6 = (*plVar4 != 0 ^ 0x2325) * 0x4a21;
        if (*plVar4 == 0) {
          uVar6 = (*(byte *)(plVar4 + 1) ^ 0xa2d39c5) * 0x4a21;
        }
        else {
          lVar8 = plVar4[2];
          if (lVar8 != 0) {
            pbVar11 = (byte *)plVar4[1];
            do {
              uVar6 = (uVar6 ^ *pbVar11) * 0x1b3;
              lVar8 = lVar8 + -1;
              pbVar11 = pbVar11 + 1;
            } while (lVar8 != 0);
          }
        }
      }
      return (ulong)(uVar6 & 0x7fff);
    }
    lVar8 = param_3[1] + uVar13 * 0x48;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(ulong *)(lVar8 + 0x18) = uVar14;
    param_2[0] = 1;
    param_2[1] = 0;
    *(ulong *)(param_2 + 4) = uVar14;
  }
  else {
    uVar13 = param_3[2];
    lStack_50 = param_4[1];
    lStack_58 = *param_4;
    lStack_40 = param_4[3];
    lStack_48 = param_4[2];
    lStack_38 = param_4[4];
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_70 = param_1;
    if (uVar13 == *param_3) {
      param_1 = func_0x000108a93cb8(param_3);
    }
    puVar7 = (undefined8 *)(param_3[1] + uVar13 * 0x48);
    puVar7[1] = uStack_70;
    *puVar7 = uStack_78;
    puVar7[8] = lStack_38;
    puVar7[5] = lStack_50;
    puVar7[4] = lStack_58;
    puVar7[7] = lStack_40;
    puVar7[6] = lStack_48;
    puVar7[3] = uStack_60;
    puVar7[2] = uStack_68;
    param_3[2] = uVar13 + 1;
    param_2[0] = 1;
    param_2[1] = 0;
    *(ulong *)(param_2 + 2) = uVar13;
    *(ulong *)(param_2 + 4) = uVar13;
  }
  return param_1;
}

