
/* WARNING: Type propagation algorithm not settling */

void FUN_10121c8ec(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined *puStack_528;
  long lStack_520;
  long lStack_518;
  char *pcStack_510;
  undefined8 ******ppppppuStack_508;
  undefined8 *******pppppppuStack_500;
  undefined *puStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined *puStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined *puStack_4d8;
  undefined8 *******pppppppuStack_4d0;
  undefined *puStack_4c8;
  undefined8 *******pppppppuStack_4c0;
  long alStack_1d0 [3];
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined4 uStack_108;
  undefined3 uStack_104;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_c0;
  char cStack_b0;
  undefined7 uStack_af;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*param_2 == '\x15') {
    lStack_520 = *(long *)(param_2 + 0x10);
    lStack_518 = lStack_520 + *(long *)(param_2 + 0x18) * 0x40;
    pcStack_510 = (char *)0x0;
    ppppppuStack_508 = (undefined8 ******)0x0;
    lStack_138 = 0;
    lStack_130 = 8;
    lStack_128 = 0;
    pppppppuVar11 = (undefined8 *******)0x8000000000000002;
    while( true ) {
      FUN_100f24408(&pppppppuStack_500,&lStack_520);
      pcVar4 = pcStack_510;
      pppppppuStack_180 = pppppppuVar11;
      if ((char)pppppppuStack_500 == '\x18') break;
      uVar2 = *(undefined4 *)((long)((ulong)&pppppppuStack_500 | 1) + 3);
      uStack_108._0_3_ = (undefined3)*(undefined4 *)((ulong)&pppppppuStack_500 | 1);
      uStack_108._3_1_ = (undefined1)uVar2;
      uStack_104 = (undefined3)((uint)uVar2 >> 8);
      puStack_118 = puStack_4e8;
      pppppppuStack_120 = pppppppuStack_4f0;
      if ((char)pppppppuStack_500 == '\x16') {
        if (pppppppuVar11 != (undefined8 *******)0x8000000000000002) {
          puStack_178 = puStack_528;
          pppppppuStack_100 = (undefined8 *******)&UNK_108cadf95;
          puStack_f8 = (undefined *)0x5;
          pppppppuStack_500 = &pppppppuStack_100;
          puStack_4f8 = &DAT_100c7b3a0;
          bVar9 = true;
          uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&pppppppuStack_500);
          *param_1 = 2;
          param_1[1] = uVar10;
          goto LAB_10121cc30;
        }
        pcStack_510 = (char *)0x0;
        if (pcVar4 == (char *)0x0) {
          puStack_178 = puStack_528;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
          goto LAB_10121cdec;
        }
        cVar3 = *pcVar4;
        pppppppuVar11 = (undefined8 *******)0x8000000000000001;
        if (cVar3 != '\x10') {
          if (cVar3 == '\x11') {
            FUN_1004de164(&pppppppuStack_500,*(undefined8 *)(pcVar4 + 8));
          }
          else {
            if (cVar3 == '\x12') goto LAB_10121cae8;
            FUN_1004de164(&pppppppuStack_500);
          }
          if (pppppppuStack_500 == (undefined8 *******)0x8000000000000000) {
            puStack_178 = puStack_528;
            *param_1 = 2;
            param_1[1] = puStack_4f8;
            bVar9 = true;
            pppppppuVar11 = (undefined8 *******)0x8000000000000002;
            goto LAB_10121cc30;
          }
          pppppppuStack_f0 = (undefined8 *******)CONCAT44(uStack_4dc,uStack_4e0);
          puStack_f8 = puStack_4e8;
          pppppppuStack_100 = pppppppuStack_4f0;
          puStack_e8 = puStack_4d8;
          puStack_d8 = puStack_4c8;
          pppppppuStack_e0 = pppppppuStack_4d0;
          pppppppuStack_d0 = pppppppuStack_4c0;
          pppppppuVar11 = pppppppuStack_500;
          puStack_528 = puStack_4f8;
        }
LAB_10121cae8:
        puStack_168 = puStack_f8;
        pppppppuStack_170 = pppppppuStack_100;
        puStack_158 = puStack_e8;
        pppppppuStack_160 = pppppppuStack_f0;
        puStack_148 = puStack_d8;
        pppppppuStack_150 = pppppppuStack_e0;
        pppppppuStack_140 = pppppppuStack_d0;
      }
      else {
        if ((char)pppppppuStack_500 == '\x17') {
          puStack_178 = puStack_528;
          bVar9 = pppppppuVar11 == (undefined8 *******)0x8000000000000002;
          if (bVar9) {
            pppppppuStack_100 = (undefined8 *******)0x8000000000000001;
          }
          else {
            puStack_d8 = puStack_158;
            pppppppuStack_e0 = pppppppuStack_160;
            puStack_c8 = puStack_148;
            pppppppuStack_d0 = pppppppuStack_150;
            pppppppuStack_c0 = pppppppuStack_140;
            puStack_f8 = puStack_528;
            puStack_e8 = puStack_168;
            pppppppuStack_f0 = pppppppuStack_170;
            pppppppuStack_100 = pppppppuVar11;
          }
          lStack_88 = lStack_130 + lStack_128 * 0x40;
          lStack_90 = lStack_130;
          cStack_b0 = '\x16';
          puStack_80 = &UNK_10b236680;
          uStack_78 = 4;
          FUN_1009eecac(&pppppppuStack_500,&cStack_b0);
          puVar6 = puStack_4f8;
          pppppppuVar5 = pppppppuStack_500;
          if (pppppppuStack_500 != (undefined8 *******)0x2) {
            _memcpy(param_1 + 2,&pppppppuStack_4f0,800);
            param_1[0x6b] = puStack_d8;
            param_1[0x6a] = pppppppuStack_e0;
            param_1[0x6d] = puStack_c8;
            param_1[0x6c] = pppppppuStack_d0;
            param_1[0x6e] = pppppppuStack_c0;
            param_1[0x67] = puStack_f8;
            param_1[0x66] = pppppppuStack_100;
            param_1[0x69] = puStack_e8;
            param_1[0x68] = pppppppuStack_f0;
            *param_1 = pppppppuVar5;
            param_1[1] = puVar6;
            FUN_100d5c778(&lStack_138);
            _memcpy(&pppppppuStack_500,param_1,0x378);
            if (lStack_518 - lStack_520 == 0) {
              return;
            }
            pppppppuStack_100 = (undefined8 *******)ppppppuStack_508;
            uVar10 = FUN_1087e422c((long)ppppppuStack_508 + ((ulong)(lStack_518 - lStack_520) >> 6),
                                   &pppppppuStack_100,&UNK_10b23a190);
            *param_1 = 2;
            param_1[1] = uVar10;
            if ((alStack_1d0[0] != -0x7fffffffffffffff) && (alStack_1d0[0] != -0x8000000000000000))
            {
              if ((lStack_1b0 != 0) && (lStack_1b0 * 9 != -0x11)) {
                _free(lStack_1b8 + lStack_1b0 * -8 + -8);
              }
              func_0x000100cd7284(alStack_1d0);
            }
            func_0x000100e03ee4(&pppppppuStack_500);
            return;
          }
          *param_1 = 2;
          param_1[1] = puStack_4f8;
          if ((pppppppuStack_100 != (undefined8 *******)0x8000000000000001) &&
             (pppppppuStack_100 != (undefined8 *******)0x8000000000000000)) {
            if ((pppppppuStack_e0 != (undefined8 *******)0x0) &&
               ((long)pppppppuStack_e0 * 9 != -0x11)) {
              _free(puStack_e8 + (long)pppppppuStack_e0 * -8 + -8);
            }
            func_0x000100cd7284(&pppppppuStack_100);
          }
          goto LAB_10121cc30;
        }
        *(undefined4 *)((ulong)&cStack_b0 | 1) = uStack_108;
        *(undefined4 *)((long)((ulong)&cStack_b0 | 1) + 3) = uVar2;
        puStack_98 = puStack_4e8;
        pppppppuStack_a0 = pppppppuStack_4f0;
        cStack_b0 = (char)pppppppuStack_500;
        puStack_a8 = puStack_4f8;
        pcStack_510 = (char *)0x0;
        if (pcVar4 == (char *)0x0) {
          puStack_178 = puStack_528;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_10121cdec:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10121cdf0);
          (*pcVar8)();
        }
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&pppppppuStack_100);
        lVar7 = lStack_128;
        if ((char)pppppppuStack_100 == '\x16') {
          puStack_178 = puStack_528;
          *param_1 = 2;
          param_1[1] = puStack_f8;
          bVar9 = true;
          FUN_100e077ec(&cStack_b0);
          goto LAB_10121cc30;
        }
        uStack_4dc = *(undefined4 *)((long)((ulong)&pppppppuStack_100 | 1) + 3);
        puStack_4d8 = puStack_f8;
        puStack_4c8 = puStack_e8;
        pppppppuStack_4d0 = pppppppuStack_f0;
        puStack_4f8 = puStack_a8;
        pppppppuStack_500 = (undefined8 *******)CONCAT71(uStack_af,cStack_b0);
        puStack_4e8 = puStack_98;
        pppppppuStack_4f0 = pppppppuStack_a0;
        uStack_4e0 = CONCAT31((int3)*(undefined4 *)((ulong)&pppppppuStack_100 | 1),
                              (char)pppppppuStack_100);
        if (lStack_128 == lStack_138) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_138);
        }
        puVar1 = (undefined8 *)(lStack_130 + lVar7 * 0x40);
        puVar1[1] = puStack_4f8;
        *puVar1 = pppppppuStack_500;
        puVar1[3] = puStack_4e8;
        puVar1[2] = pppppppuStack_4f0;
        puVar1[5] = puStack_4d8;
        puVar1[4] = CONCAT44(uStack_4dc,uStack_4e0);
        puVar1[7] = puStack_4c8;
        puVar1[6] = pppppppuStack_4d0;
        lStack_128 = lVar7 + 1;
      }
    }
    puStack_178 = puStack_528;
    *param_1 = 2;
    param_1[1] = puStack_4f8;
    bVar9 = true;
LAB_10121cc30:
    FUN_100d5c778(&lStack_138);
    bVar9 = (bool)(bVar9 ^ 1);
    if (pppppppuVar11 == (undefined8 *******)0x8000000000000002) {
      bVar9 = true;
    }
    if ((!bVar9) && (pppppppuVar11 != (undefined8 *******)0x8000000000000001)) {
      if ((pppppppuStack_160 != (undefined8 *******)0x0) && ((long)pppppppuStack_160 * 9 != -0x11))
      {
        _free(puStack_168 + (long)pppppppuStack_160 * -8 + -8);
      }
      func_0x000100cd7284(&pppppppuStack_180);
    }
  }
  else {
    uVar10 = FUN_108855c40(param_2,&pppppppuStack_500,&UNK_10b2133c8);
    *param_1 = 2;
    param_1[1] = uVar10;
  }
  return;
}

