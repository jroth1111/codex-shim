
void FUN_101394de4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 extraout_x10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x0001015f3754(&puStack_98);
  puStack_e8 = puStack_88;
  puStack_f0 = puStack_90;
  if (puStack_98 == (undefined8 *)0x2) {
    puStack_108 = puStack_88;
    puStack_110 = puStack_90;
    puStack_100 = puStack_80;
    puStack_f8 = puStack_78;
    FUN_1013f91dc(&puStack_98,&puStack_110);
    if (puStack_98 == (undefined8 *)0x2) {
      puStack_d8 = puStack_88;
      puStack_e0 = puStack_90;
      puStack_d0 = puStack_80;
      puStack_e8 = (undefined8 *)0x0;
    }
    else {
      uStack_c8 = uStack_70;
      puStack_d0 = puStack_78;
      uStack_b8 = uStack_60;
      uStack_c0 = uStack_68;
      uStack_a8 = uStack_50;
      uStack_b0 = uStack_58;
      uStack_a0 = uStack_48;
      puStack_e8 = puStack_90;
      puStack_f0 = puStack_98;
      puStack_d8 = puStack_80;
      puStack_e0 = puStack_88;
      if (puStack_98 != (undefined8 *)0x2) {
        FUN_100de3b58(&puStack_f0);
        func_0x0001004e052c(&puStack_98,&puStack_110);
        if (puStack_98 == (undefined8 *)0x2) {
          puStack_d8 = puStack_88;
          puStack_e0 = puStack_90;
          puStack_d0 = puStack_80;
          puStack_e8 = (undefined8 *)0x1;
        }
        else {
          uStack_c8 = uStack_70;
          puStack_d0 = puStack_78;
          uStack_b8 = uStack_60;
          uStack_c0 = uStack_68;
          uStack_a8 = uStack_50;
          uStack_b0 = uStack_58;
          uStack_a0 = uStack_48;
          puStack_e8 = puStack_90;
          puStack_f0 = puStack_98;
          puStack_d8 = puStack_80;
          puStack_e0 = puStack_88;
          if (puStack_98 != (undefined8 *)0x2) {
            FUN_100de3b58(&puStack_f0);
            puVar9 = (undefined8 *)_malloc(0x3f);
            if (puVar9 == (undefined8 *)0x0) {
              func_0x0001087c9084(1,0x3f);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101394ffc);
              (*pcVar8)();
            }
            puVar9[1] = 0x74616d20746f6e20;
            *puVar9 = 0x6469642061746164;
            puVar9[3] = 0x6f20746e61697261;
            puVar9[2] = 0x7620796e61206863;
            puVar9[5] = 0x206d756e65206465;
            puVar9[4] = 0x676761746e752066;
            *(undefined8 *)((long)puVar9 + 0x37) = 0x6365705373676e69;
            *(undefined8 *)((long)puVar9 + 0x2f) = 0x646e696279654b20;
            uStack_130 = 0;
            uStack_128 = 0;
            FUN_100e077ec(&puStack_110);
            puStack_98 = (undefined8 *)0x0;
            uStack_68 = 0;
            uStack_70 = 0x3f;
            puStack_80 = (undefined8 *)0x3f;
            uStack_60 = 8;
            uStack_48 = extraout_x10;
            puStack_78 = puVar9;
            goto LAB_101394e7c;
          }
        }
      }
    }
    puVar7 = puStack_d0;
    puVar6 = puStack_d8;
    puVar5 = puStack_e0;
    puVar9 = puStack_e8;
    FUN_100e077ec(&puStack_110);
    param_1[2] = puVar5;
    param_1[1] = puVar9;
    param_1[3] = puVar6;
    param_1[4] = puVar7;
    *param_1 = 2;
  }
  else {
    uStack_128 = uStack_50;
    uStack_130 = uStack_58;
    puStack_118 = puStack_88;
    puStack_120 = puStack_90;
LAB_101394e7c:
    param_1[2] = puStack_118;
    param_1[1] = puStack_120;
    param_1[3] = puStack_80;
    param_1[4] = puStack_78;
    param_1[6] = uStack_68;
    param_1[5] = uStack_70;
    param_1[7] = uStack_60;
    param_1[9] = uStack_128;
    param_1[8] = uStack_130;
    param_1[10] = uStack_48;
    uVar1 = param_1[1];
    uVar4 = param_1[2];
    if (((ulong)puStack_98 & 1) == 0) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    *param_1 = 1;
    param_1[1] = uVar1;
    param_1[2] = uVar4;
  }
  return;
}

