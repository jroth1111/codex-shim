
void FUN_10073431c(undefined8 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****unaff_x21;
  undefined8 *****unaff_x23;
  undefined8 *****pppppuVar6;
  undefined8 *****unaff_x25;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ****ppppuStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 ****ppppuStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 ****ppppuStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined8 uStack_190;
  undefined8 ****ppppuStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined1 uStack_61;
  
  FUN_10116a9e0(&ppppuStack_f0);
  pppppuVar5 = (undefined8 *****)ppppuStack_d0;
  pppppuVar3 = (undefined8 *****)ppppuStack_d8;
  ppppuStack_168 = ppppuStack_e0;
  ppppuStack_170 = ppppuStack_e8;
  if ((undefined8 *****)ppppuStack_f0 != (undefined8 *****)0x2) {
    ppppuStack_1a8 = ppppuStack_a8;
    ppppuStack_1b0 = ppppuStack_b0;
    ppppuStack_198 = ppppuStack_e0;
    ppppuStack_1a0 = ppppuStack_e8;
    unaff_x25 = (undefined8 *****)ppppuStack_a0;
LAB_1007343d8:
    uVar4 = 0;
    ppppuStack_208 = ppppuStack_1a8;
    ppppuStack_210 = ppppuStack_1b0;
    ppppuStack_1f8 = ppppuStack_198;
    ppppuStack_200 = ppppuStack_1a0;
    unaff_x21 = (undefined8 *****)ppppuStack_c0;
    pppppuVar3 = (undefined8 *****)ppppuStack_d8;
    unaff_x23 = (undefined8 *****)ppppuStack_c8;
    pppppuVar7 = (undefined8 *****)ppppuStack_f0;
    goto LAB_1007343e4;
  }
  ppppuStack_188 = ppppuStack_e0;
  uStack_190 = (undefined8 *****)ppppuStack_e8;
  pppppuVar7 = uStack_190;
  ppppuStack_180 = ppppuStack_d8;
  ppppuStack_178 = ppppuStack_d0;
  uStack_190._0_1_ = (char)ppppuStack_e8;
  uStack_190 = pppppuVar7;
  if ((char)uStack_190 == '\0') {
    uStack_190._1_1_ = (undefined1)((ulong)ppppuStack_e8 >> 8);
    uVar1 = uStack_190._1_1_;
LAB_10073437c:
    ppppuStack_e8 = (undefined8 ****)CONCAT71(ppppuStack_e8._1_7_,uVar1);
    pppppuVar6 = &ppppuStack_170;
    pppppuVar8 = (undefined8 *****)0x8000000000000001;
  }
  else {
    thunk_FUN_108855bf0(&ppppuStack_170,&uStack_190,&uStack_61,&UNK_10b20a560);
    if ((undefined8 *****)ppppuStack_170 == (undefined8 *****)0x2) {
      uVar1 = ppppuStack_168._0_1_;
      goto LAB_10073437c;
    }
    ppppuStack_c0 = ppppuStack_148;
    ppppuStack_c8 = ppppuStack_150;
    ppppuStack_b0 = ppppuStack_138;
    ppppuStack_b8 = ppppuStack_140;
    ppppuStack_a0 = ppppuStack_128;
    ppppuStack_a8 = ppppuStack_130;
    ppppuStack_e0 = ppppuStack_168;
    ppppuStack_e8 = ppppuStack_170;
    ppppuStack_d0 = ppppuStack_158;
    ppppuStack_d8 = ppppuStack_160;
    ppppuStack_98 = ppppuStack_120;
    ppppuStack_f0 = (undefined8 *****)0x8000000000000002;
    func_0x000100cf8934(&ppppuStack_f0);
    func_0x0001004e18a8(&ppppuStack_f0,&uStack_190);
    if ((undefined8 *****)ppppuStack_f0 == (undefined8 *****)0x8000000000000001) {
      ppppuStack_170 = (undefined8 *****)0x8000000000000002;
LAB_10073458c:
      ppppuStack_118 = ppppuStack_98;
      ppppuStack_120 = ppppuStack_a0;
      ppppuStack_128 = ppppuStack_a8;
      ppppuStack_130 = ppppuStack_b0;
      ppppuStack_138 = ppppuStack_b8;
      ppppuStack_140 = ppppuStack_c0;
      ppppuStack_148 = ppppuStack_c8;
      ppppuStack_150 = ppppuStack_d0;
      ppppuStack_158 = ppppuStack_d8;
      ppppuStack_160 = ppppuStack_e0;
      ppppuStack_168 = ppppuStack_e8;
      func_0x000100cf8934(&ppppuStack_170);
      pppppuVar3 = (undefined8 *****)_malloc(0x48);
      if (pppppuVar3 == (undefined8 *****)0x0) {
        FUN_107c03c64(1,0x48);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100734624);
        (*pcVar2)();
      }
      pppppuVar3[5] = (undefined8 ****)0x206d756e65206465;
      pppppuVar3[4] = (undefined8 ****)0x676761746e752066;
      pppppuVar3[7] = (undefined8 ****)0x6e6f436c6f6f5468;
      pppppuVar3[6] = (undefined8 ****)0x6372616553626557;
      pppppuVar3[8] = (undefined8 ****)0x7475706e49676966;
      pppppuVar3[1] = (undefined8 ****)0x74616d20746f6e20;
      *pppppuVar3 = (undefined8 ****)0x6469642061746164;
      pppppuVar3[3] = (undefined8 ****)0x6f20746e61697261;
      pppppuVar3[2] = (undefined8 ****)0x7620796e61206863;
      ppppuStack_1b0 = (undefined8 *****)0x0;
      ppppuStack_1a8 = (undefined8 *****)0x0;
      FUN_100e077ec(&uStack_190);
      ppppuStack_c0 = (undefined8 *****)0x0;
      ppppuStack_f0 = (undefined8 *****)0x0;
      ppppuStack_c8 = (undefined8 *****)0x48;
      ppppuStack_b8 = (undefined8 *****)0x8;
      ppppuStack_d8 = (undefined8 *****)0x48;
      ppppuStack_d0 = pppppuVar3;
      goto LAB_1007343d8;
    }
    ppppuStack_128 = ppppuStack_a8;
    ppppuStack_130 = ppppuStack_b0;
    ppppuStack_118 = ppppuStack_98;
    ppppuStack_120 = ppppuStack_a0;
    ppppuStack_108 = ppppuStack_88;
    ppppuStack_110 = ppppuStack_90;
    ppppuStack_f8 = ppppuStack_78;
    ppppuStack_100 = ppppuStack_80;
    ppppuStack_168 = ppppuStack_e8;
    ppppuStack_170 = ppppuStack_f0;
    ppppuStack_158 = ppppuStack_d8;
    ppppuStack_160 = ppppuStack_e0;
    ppppuStack_148 = ppppuStack_c8;
    ppppuStack_150 = ppppuStack_d0;
    ppppuStack_138 = ppppuStack_b8;
    ppppuStack_140 = ppppuStack_c0;
    if ((undefined8 *****)ppppuStack_f0 == (undefined8 *****)0x8000000000000002) goto LAB_10073458c;
    ppppuStack_198 = ppppuStack_d8;
    ppppuStack_1a0 = ppppuStack_e0;
    ppppuStack_1a8 = ppppuStack_a0;
    ppppuStack_1b0 = ppppuStack_a8;
    ppppuStack_1c8 = ppppuStack_88;
    ppppuStack_1d0 = ppppuStack_90;
    ppppuStack_1b8 = ppppuStack_78;
    ppppuStack_1c0 = ppppuStack_80;
    pppppuVar5 = (undefined8 *****)ppppuStack_c8;
    unaff_x21 = (undefined8 *****)ppppuStack_b8;
    pppppuVar3 = (undefined8 *****)ppppuStack_d0;
    unaff_x23 = (undefined8 *****)ppppuStack_c0;
    pppppuVar6 = (undefined8 *****)ppppuStack_b0;
    unaff_x25 = (undefined8 *****)ppppuStack_98;
    pppppuVar8 = (undefined8 *****)ppppuStack_f0;
  }
  pppppuVar7 = (undefined8 *****)ppppuStack_e8;
  FUN_100e077ec(&uStack_190);
  ppppuStack_208 = ppppuStack_1a8;
  ppppuStack_210 = ppppuStack_1b0;
  ppppuStack_1f8 = ppppuStack_198;
  ppppuStack_200 = ppppuStack_1a0;
  uVar4 = (ulong)pppppuVar7 >> 8;
  ppppuStack_d0 = pppppuVar5;
  ppppuStack_b8 = pppppuVar6;
  if (pppppuVar8 != (undefined8 *****)0x8000000000000003) {
    if (pppppuVar8 != (undefined8 *****)0x8000000000000001) {
      ppppuStack_168 = ppppuStack_198;
      ppppuStack_170 = ppppuStack_1a0;
      ppppuStack_188 = ppppuStack_1a8;
      uStack_190 = (undefined8 *****)ppppuStack_1b0;
      ppppuStack_e8 = ppppuStack_1c8;
      ppppuStack_f0 = ppppuStack_1d0;
      ppppuStack_d8 = ppppuStack_1b8;
      ppppuStack_e0 = ppppuStack_1c0;
    }
    *param_1 = pppppuVar8;
    *(char *)(param_1 + 1) = (char)pppppuVar7;
    *(int *)((long)param_1 + 9) = (int)((ulong)pppppuVar7 >> 8);
    *(char *)((long)param_1 + 0xf) = (char)((ulong)pppppuVar7 >> 0x38);
    *(short *)((long)param_1 + 0xd) = (short)((ulong)pppppuVar7 >> 0x28);
    param_1[3] = ppppuStack_168;
    param_1[2] = ppppuStack_170;
    param_1[4] = pppppuVar3;
    param_1[5] = pppppuVar5;
    param_1[6] = unaff_x23;
    param_1[7] = unaff_x21;
    param_1[8] = pppppuVar6;
    param_1[10] = ppppuStack_188;
    param_1[9] = uStack_190;
    param_1[0xb] = unaff_x25;
    param_1[0xd] = ppppuStack_e8;
    param_1[0xc] = ppppuStack_f0;
    param_1[0xf] = ppppuStack_d8;
    param_1[0xe] = ppppuStack_e0;
    return;
  }
LAB_1007343e4:
  param_1[3] = ppppuStack_1f8;
  param_1[2] = ppppuStack_200;
  param_1[10] = ppppuStack_208;
  param_1[9] = ppppuStack_210;
  *(char *)(param_1 + 1) = (char)pppppuVar7;
  *(char *)((long)param_1 + 0xf) = (char)(uVar4 >> 0x30);
  *(short *)((long)param_1 + 0xd) = (short)(uVar4 >> 0x20);
  *(int *)((long)param_1 + 9) = (int)uVar4;
  param_1[4] = pppppuVar3;
  param_1[5] = ppppuStack_d0;
  param_1[6] = unaff_x23;
  param_1[7] = unaff_x21;
  param_1[8] = ppppuStack_b8;
  param_1[0xb] = unaff_x25;
  *param_1 = 0x8000000000000002;
  return;
}

