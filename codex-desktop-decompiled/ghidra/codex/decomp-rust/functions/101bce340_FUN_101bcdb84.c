
/* WARNING: Possible PIC construction at 0x000101bbf3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bcde40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bce25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bce430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bcdf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bcdef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bce3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bcdcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bce018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bce4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bce4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bce4d4) */
/* WARNING: Removing unreachable block (ram,0x000101bce01c) */
/* WARNING: Removing unreachable block (ram,0x000101bce3f8) */
/* WARNING: Removing unreachable block (ram,0x000101bcdef4) */
/* WARNING: Removing unreachable block (ram,0x000101bcdf5c) */
/* WARNING: Removing unreachable block (ram,0x000101bce434) */
/* WARNING: Removing unreachable block (ram,0x000101bcde44) */
/* WARNING: Removing unreachable block (ram,0x000101bbf3b4) */
/* WARNING: Removing unreachable block (ram,0x000101bce4ac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101bcdb84(ulong *******param_1,ulong *******param_2)

{
  ulong *******pppppppuVar1;
  ulong uVar2;
  int iVar3;
  ulong ******ppppppuVar4;
  ulong *******pppppppuVar5;
  ulong ******ppppppuVar6;
  ulong *******in_x11;
  ulong *******extraout_x11;
  ulong *******in_x12;
  ulong *******extraout_x12;
  ulong *******in_x14;
  ulong *******extraout_x14;
  ulong *******in_x15;
  ulong *******extraout_x15;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******pppppppuVar7;
  ulong *******unaff_x21;
  ulong ******ppppppuVar8;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  long lVar9;
  ulong *******unaff_x24;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******unaff_x28;
  ulong *******pppppppuVar12;
  undefined1 *puVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong *******pppppppuVar14;
  ulong ******ppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  ulong *******pppppppuStack_190;
  ulong *******pppppppuStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  ulong *******pppppppuStack_148;
  ulong *******pppppppuStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  ulong *******pppppppuStack_110;
  ulong *******pppppppuStack_108;
  ulong *******pppppppuStack_100;
  ulong *******pppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  ulong ******ppppppuStack_e8;
  ulong ******ppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong ******ppppppuStack_70;
  
  ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
  puVar13 = &stack0xfffffffffffffff0;
  pppppppuVar10 = (ulong *******)*param_2;
  if (pppppppuVar10 == (ulong *******)0x8000000000000000) {
    *param_1 = (ulong ******)0x8000000000000001;
    ppppppuVar4 = (ulong ******)register0x00000008;
    pppppppuVar5 = param_2;
    param_1 = unaff_x22;
    puVar13 = unaff_x29;
    goto SUB_101bbf344;
  }
  unaff_x19 = (ulong *******)0x8000000000000005;
  uVar2 = (ulong)pppppppuVar10 ^ 0x8000000000000000;
  pppppppuVar5 = (ulong *******)0x5;
  if (-1 < (long)pppppppuVar10) {
    uVar2 = 5;
  }
  if (uVar2 == 4) {
    pppppppuVar7 = (ulong *******)param_2[1];
    unaff_x21 = (ulong *******)param_2[2];
    unaff_x23 = (ulong *******)param_2[3];
    unaff_x20 = unaff_x21 + (long)unaff_x23 * 9;
    pppppppuStack_b0 = unaff_x21;
    pppppppuStack_a8 = unaff_x21;
    pppppppuStack_a0 = pppppppuVar7;
    pppppppuStack_98 = unaff_x20;
    unaff_x24 = unaff_x21;
    if (unaff_x23 == (ulong *******)0x0) {
LAB_101bcdcf4:
      pppppppuVar1 = (ulong *******)0x8000000000000000;
      pppppppuStack_110 = pppppppuVar5;
      pppppppuStack_a8 = unaff_x24;
      if (unaff_x24 == unaff_x20) {
LAB_101bce1b0:
        pppppppuStack_118 = (ulong *******)0x8000000000000001;
        pppppppuVar14 = pppppppuStack_a8;
        pppppppuVar11 = unaff_x20;
      }
      else {
LAB_101bcdd04:
        pppppppuVar12 = unaff_x24 + 9;
        pppppppuStack_120 = (ulong *******)*unaff_x24;
        pppppppuStack_a8 = pppppppuVar12;
        pppppppuVar11 = pppppppuVar12;
        if (pppppppuStack_120 == (ulong *******)0x8000000000000005) {
          pppppppuStack_118 = (ulong *******)0x8000000000000001;
          pppppppuVar5 = pppppppuStack_110;
          pppppppuVar14 = unaff_x24;
        }
        else {
          pppppppuVar14 = (ulong *******)unaff_x24[2];
          pppppppuStack_118 = (ulong *******)unaff_x24[1];
          pppppppuStack_110 = pppppppuVar14;
          ppppppuStack_e0 = unaff_x24[8];
          ppppppuStack_e8 = unaff_x24[7];
          ppppppuStack_f0 = unaff_x24[6];
          pppppppuStack_f8 = (ulong *******)unaff_x24[5];
          pppppppuStack_100 = (ulong *******)unaff_x24[4];
          pppppppuStack_108 = (ulong *******)unaff_x24[3];
          if (pppppppuStack_120 == (ulong *******)0x8000000000000000) {
            unaff_x30 = 0x101bce01c;
            ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
            pppppppuVar5 = (ulong *******)&pppppppuStack_120;
            pppppppuStack_160 = param_2;
            pppppppuStack_158 = pppppppuVar10;
            goto SUB_101bbf344;
          }
          if (pppppppuStack_120 != (ulong *******)0x8000000000000003) {
            pppppppuStack_160 = param_2;
            pppppppuStack_158 = pppppppuVar10;
            unaff_x24 = (ulong *******)
                        FUN_1088c6060(&pppppppuStack_120,&pppppppuStack_150,&UNK_10b26a8b0);
            unaff_x30 = 0x101bce4d4;
            ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
            pppppppuVar5 = (ulong *******)&pppppppuStack_120;
            goto SUB_101bbf344;
          }
          if (((long)pppppppuStack_118 < -0x7ffffffffffffffe) ||
             (pppppppuVar5 = pppppppuStack_108,
             pppppppuStack_118 == (ulong *******)0x8000000000000002)) {
            pppppppuStack_150 = (ulong *******)0x8000000000000001;
            pppppppuStack_160 = param_2;
            pppppppuStack_158 = pppppppuVar10;
            pppppppuStack_148 = pppppppuVar14;
            if (((ulong)pppppppuVar1 & 0x7fffffffffffffff) != 0) {
              _free(pppppppuStack_168);
            }
            goto LAB_101bce1f8;
          }
        }
      }
      pppppppuStack_138 = (ulong *******)0x8000000000000000;
      if (pppppppuStack_118 != (ulong *******)0x8000000000000001) {
        pppppppuStack_138 = pppppppuStack_118;
      }
      pppppppuStack_148 = pppppppuStack_168;
      pppppppuStack_108 = pppppppuStack_138;
      pppppppuStack_110 = unaff_x28;
      pppppppuStack_f8 = pppppppuVar5;
      pppppppuStack_100 = pppppppuVar14;
      pppppppuStack_118 = pppppppuStack_168;
      pppppppuStack_120 = pppppppuVar1;
      pppppppuVar12 = unaff_x20;
      pppppppuStack_160 = param_2;
      pppppppuStack_158 = pppppppuVar10;
      pppppppuStack_150 = pppppppuVar1;
      pppppppuStack_140 = unaff_x28;
      pppppppuStack_130 = pppppppuVar14;
      pppppppuStack_128 = pppppppuVar5;
      if (unaff_x20 != pppppppuVar11) {
        pppppppuStack_148 = (ulong *******)FUN_1088c5bd8(unaff_x23,&UNK_10b26a8d0);
        pppppppuStack_150 = (ulong *******)0x8000000000000001;
        FUN_101bc1318(&pppppppuStack_120);
        pppppppuVar12 = pppppppuVar11;
      }
    }
    else {
      unaff_x24 = unaff_x21 + 9;
      pppppppuStack_120 = (ulong *******)*unaff_x21;
      pppppppuStack_a8 = unaff_x24;
      if (pppppppuStack_120 == (ulong *******)0x8000000000000005) goto LAB_101bcdcf4;
      pppppppuVar5 = (ulong *******)unaff_x21[2];
      pppppppuVar1 = (ulong *******)unaff_x21[1];
      pppppppuStack_110 = pppppppuVar5;
      pppppppuStack_118 = pppppppuVar1;
      unaff_x28 = (ulong *******)unaff_x21[3];
      pppppppuStack_100 = (ulong *******)unaff_x21[4];
      pppppppuStack_108 = unaff_x28;
      ppppppuStack_f0 = unaff_x21[6];
      pppppppuStack_f8 = (ulong *******)unaff_x21[5];
      ppppppuStack_e0 = unaff_x21[8];
      ppppppuStack_e8 = unaff_x21[7];
      if (pppppppuStack_120 == (ulong *******)0x8000000000000000) {
        unaff_x30 = 0x101bcdcf4;
        ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
        pppppppuVar5 = (ulong *******)&pppppppuStack_120;
        param_1 = param_2;
        pppppppuStack_160 = param_2;
        pppppppuStack_158 = pppppppuVar10;
        goto SUB_101bbf344;
      }
      if (pppppppuStack_120 != (ulong *******)0x8000000000000003) {
        pppppppuStack_160 = param_2;
        pppppppuStack_158 = pppppppuVar10;
        unaff_x23 = (ulong *******)
                    FUN_1088c6060(&pppppppuStack_120,&pppppppuStack_150,&UNK_10b26a8b0);
        unaff_x30 = 0x101bce4ac;
        pppppppuVar5 = (ulong *******)&pppppppuStack_120;
        goto SUB_101bbf344;
      }
      if ((-0x7fffffffffffffff < (long)pppppppuVar1) &&
         (pppppppuVar1 != (ulong *******)0x8000000000000002)) {
        pppppppuVar1 = pppppppuStack_118;
        unaff_x28 = pppppppuStack_108;
        pppppppuStack_168 = pppppppuVar5;
        if (unaff_x24 != unaff_x20) goto LAB_101bcdd04;
        goto LAB_101bce1b0;
      }
      pppppppuStack_150 = (ulong *******)0x8000000000000001;
      pppppppuVar12 = unaff_x24;
      pppppppuStack_160 = param_2;
      pppppppuStack_158 = pppppppuVar10;
      pppppppuStack_148 = pppppppuVar5;
    }
LAB_101bce1f8:
    lVar9 = ((ulong)((long)unaff_x20 - (long)pppppppuVar12) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
      func_0x000101bbf344(pppppppuVar12);
      pppppppuVar12 = pppppppuVar12 + 9;
    }
    if (pppppppuVar7 != (ulong *******)0x0) {
      _free(unaff_x21);
    }
    unaff_x23 = (ulong *******)0x0;
    unaff_x24 = pppppppuStack_158;
    param_2 = pppppppuStack_160;
  }
  else if (uVar2 == 5) {
    ppppppuVar8 = param_2[6];
    pppppppuVar5 = (ulong *******)param_2[1];
    ppppppuVar4 = param_2[2];
    ppppppuVar6 = param_2[4];
    if ((ppppppuVar6 != (ulong ******)0x0) && ((long)ppppppuVar6 * 9 != -0x11)) {
      _free(param_2[3] + (-1 - (long)ppppppuVar6));
      in_x11 = extraout_x11;
      in_x12 = extraout_x12;
      in_x14 = extraout_x14;
      in_x15 = extraout_x15;
    }
    pppppppuStack_d0 = pppppppuVar5;
    pppppppuStack_c8 = pppppppuVar10;
    unaff_x21 = pppppppuVar5 + (long)ppppppuVar4 * 0xd;
    pppppppuStack_c0 = unaff_x21;
    pppppppuStack_d8 = pppppppuVar5;
    if (ppppppuVar4 == (ulong ******)0x0) {
      unaff_x23 = (ulong *******)0x8000000000000001;
      pppppppuVar12 = (ulong *******)0x8000000000000001;
      pppppppuVar1 = unaff_x21;
      pppppppuVar7 = (ulong *******)0x0;
      pppppppuVar11 = pppppppuStack_d0;
    }
    else {
      unaff_x20 = (ulong *******)&pppppppuStack_120;
      pppppppuVar12 = (ulong *******)0x8000000000000001;
      unaff_x23 = (ulong *******)0x8000000000000001;
      ppppppuStack_1a0 = ppppppuVar8;
      pppppppuStack_188 = param_1;
      pppppppuStack_160 = param_2;
      pppppppuStack_158 = pppppppuVar10;
      while( true ) {
        unaff_x24 = pppppppuVar5 + 0xd;
        pppppppuVar1 = unaff_x24;
        in_x11 = pppppppuStack_168;
        in_x12 = pppppppuStack_170;
        in_x14 = pppppppuStack_190;
        in_x15 = pppppppuStack_198;
        pppppppuVar7 = unaff_x20;
        param_2 = pppppppuStack_160;
        pppppppuVar10 = pppppppuStack_158;
        ppppppuVar8 = ppppppuStack_1a0;
        param_1 = pppppppuStack_188;
        pppppppuVar11 = unaff_x24;
        if (*pppppppuVar5 == (ulong ******)0x8000000000000000) break;
        ppppppuVar4 = pppppppuVar5[1];
        pppppppuStack_f8 = (ulong *******)pppppppuVar5[8];
        pppppppuStack_100 = (ulong *******)pppppppuVar5[7];
        ppppppuStack_e8 = pppppppuVar5[10];
        ppppppuStack_f0 = pppppppuVar5[9];
        ppppppuStack_e0 = pppppppuVar5[0xb];
        pppppppuStack_120 = (ulong *******)pppppppuVar5[3];
        pppppppuStack_118 = (ulong *******)pppppppuVar5[4];
        pppppppuStack_108 = (ulong *******)pppppppuVar5[6];
        pppppppuStack_110 = (ulong *******)pppppppuVar5[5];
        if (pppppppuVar5[2] == (ulong ******)0xa) {
          iVar3 = 1;
          if (*ppppppuVar4 != (ulong *****)0x6174736563617274 ||
              *(short *)(ppppppuVar4 + 1) != 0x6574) {
            iVar3 = 2;
          }
        }
        else if (pppppppuVar5[2] == (ulong ******)0xb) {
          iVar3 = 2;
          if (*ppppppuVar4 == (ulong *****)0x7261706563617274 &&
              *(long *)((long)ppppppuVar4 + 3) == 0x746e657261706563) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 2;
        }
        if (*pppppppuVar5 != (ulong ******)0x0) {
          _free();
        }
        pppppppuVar5 = pppppppuStack_120;
        pppppppuVar10 = pppppppuStack_158;
        param_2 = pppppppuStack_160;
        pppppppuVar7 = pppppppuStack_168;
        param_1 = (ulong *******)&pppppppuStack_b0;
        if (iVar3 == 0) {
          if (pppppppuVar12 == (ulong *******)0x8000000000000001) {
            pppppppuStack_120 = (ulong *******)0x8000000000000005;
            unaff_x19 = (ulong *******)0x8000000000000005;
            if (pppppppuVar5 == (ulong *******)0x8000000000000005) {
              pppppppuStack_d0 = unaff_x24;
              pppppppuVar1 = (ulong *******)func_0x0001088c66fc(&UNK_108cde170,0x10);
              pppppppuVar12 = pppppppuStack_d0;
            }
            else {
              pppppppuStack_b0 = pppppppuVar5;
              pppppppuStack_a0 = pppppppuStack_110;
              pppppppuStack_a8 = pppppppuStack_118;
              pppppppuStack_90 = pppppppuStack_100;
              pppppppuStack_98 = pppppppuStack_108;
              ppppppuStack_80 = ppppppuStack_f0;
              pppppppuStack_88 = pppppppuStack_f8;
              ppppppuStack_70 = ppppppuStack_e0;
              ppppppuStack_78 = ppppppuStack_e8;
              if (pppppppuVar5 == (ulong *******)0x8000000000000000) {
                unaff_x30 = 0x101bcdef4;
                ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
                pppppppuVar5 = (ulong *******)&pppppppuStack_b0;
                goto SUB_101bbf344;
              }
              if (pppppppuVar5 != (ulong *******)0x8000000000000003) {
                pppppppuStack_d0 = unaff_x24;
                unaff_x21 = (ulong *******)
                            FUN_1088c6060(&pppppppuStack_b0,&pppppppuStack_150,&UNK_10b26a8b0);
                unaff_x30 = 0x101bce3f8;
                ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
                pppppppuVar5 = (ulong *******)&pppppppuStack_b0;
                unaff_x20 = pppppppuStack_168;
                param_1 = pppppppuStack_160;
                unaff_x24 = pppppppuStack_158;
                goto SUB_101bbf344;
              }
              pppppppuVar1 = pppppppuStack_110;
              pppppppuVar12 = unaff_x24;
              if (pppppppuStack_118 != (ulong *******)0x8000000000000000) {
                if (pppppppuStack_118 != (ulong *******)0x8000000000000001) {
                  pppppppuStack_178 = pppppppuStack_110;
                  pppppppuStack_168 = pppppppuStack_110;
                  pppppppuVar12 = pppppppuStack_a8;
                  pppppppuStack_198 = pppppppuStack_108;
                  goto LAB_101bcdd30;
                }
                pppppppuVar12 = (ulong *******)0x8000000000000001;
                pppppppuStack_d0 = unaff_x24;
                goto LAB_101bce2d8;
              }
            }
            pppppppuStack_d0 = pppppppuVar12;
            pppppppuVar12 = (ulong *******)0x8000000000000001;
          }
          else {
            pppppppuStack_150 = (ulong *******)&UNK_108cf32ab;
            pppppppuStack_148 = (ulong *******)0xb;
            pppppppuStack_b0 = (ulong *******)&pppppppuStack_150;
            pppppppuStack_a8 = (ulong *******)&DAT_101bbc878;
            pppppppuStack_d0 = unaff_x24;
            pppppppuVar1 = (ulong *******)
                           func_0x0001088c6670(s_duplicate_field_____108ac2973,&pppppppuStack_b0);
          }
LAB_101bce2d8:
          param_1 = pppppppuStack_188;
          pppppppuStack_150 = (ulong *******)0x8000000000000001;
          pppppppuStack_148 = pppppppuVar1;
          if ((-0x7fffffffffffffff < (long)unaff_x23) && (unaff_x23 != (ulong *******)0x0)) {
            _free(pppppppuStack_170);
          }
LAB_101bce2fc:
          if ((-0x7fffffffffffffff < (long)pppppppuVar12) && (pppppppuVar12 != (ulong *******)0x0))
          {
            _free(pppppppuVar7);
          }
          goto LAB_101bce080;
        }
        if (iVar3 != 1) {
          pppppppuStack_120 = (ulong *******)0x8000000000000005;
          unaff_x19 = (ulong *******)0x8000000000000005;
          if (pppppppuVar5 == (ulong *******)0x8000000000000005) {
            pppppppuStack_d0 = unaff_x24;
            pppppppuVar1 = (ulong *******)func_0x0001088c66fc(&UNK_108cde170,0x10);
            goto LAB_101bce2d8;
          }
          pppppppuStack_b0 = pppppppuVar5;
          pppppppuStack_a0 = pppppppuStack_110;
          pppppppuStack_a8 = pppppppuStack_118;
          pppppppuStack_90 = pppppppuStack_100;
          pppppppuStack_98 = pppppppuStack_108;
          ppppppuStack_80 = ppppppuStack_f0;
          pppppppuStack_88 = pppppppuStack_f8;
          ppppppuStack_70 = ppppppuStack_e0;
          ppppppuStack_78 = ppppppuStack_e8;
          unaff_x30 = 0x101bcdf5c;
          ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
          pppppppuVar5 = (ulong *******)&pppppppuStack_b0;
          goto SUB_101bbf344;
        }
        if (unaff_x23 != (ulong *******)0x8000000000000001) {
          pppppppuStack_150 = (ulong *******)&UNK_108cf32b6;
          pppppppuStack_148 = (ulong *******)0xa;
          pppppppuStack_b0 = (ulong *******)&pppppppuStack_150;
          pppppppuStack_a8 = (ulong *******)&DAT_101bbc878;
          pppppppuStack_d0 = unaff_x24;
          pppppppuVar1 = (ulong *******)
                         func_0x0001088c6670(s_duplicate_field_____108ac2973,&pppppppuStack_b0);
          goto LAB_101bce2d8;
        }
        pppppppuStack_120 = (ulong *******)0x8000000000000005;
        unaff_x19 = (ulong *******)0x8000000000000005;
        if (pppppppuVar5 == (ulong *******)0x8000000000000005) {
          pppppppuStack_d0 = unaff_x24;
          pppppppuVar1 = (ulong *******)func_0x0001088c66fc(&UNK_108cde170,0x10);
          unaff_x23 = (ulong *******)0x8000000000000001;
          pppppppuVar11 = pppppppuStack_d0;
LAB_101bce188:
          pppppppuStack_d0 = pppppppuVar11;
          pppppppuStack_150 = (ulong *******)0x8000000000000001;
          param_1 = pppppppuStack_188;
          pppppppuStack_148 = pppppppuVar1;
          goto LAB_101bce2fc;
        }
        pppppppuStack_b0 = pppppppuVar5;
        pppppppuStack_a0 = pppppppuStack_110;
        pppppppuStack_a8 = pppppppuStack_118;
        pppppppuStack_90 = pppppppuStack_100;
        pppppppuStack_98 = pppppppuStack_108;
        ppppppuStack_80 = ppppppuStack_f0;
        pppppppuStack_88 = pppppppuStack_f8;
        ppppppuStack_70 = ppppppuStack_e0;
        ppppppuStack_78 = ppppppuStack_e8;
        if (pppppppuVar5 == (ulong *******)0x8000000000000000) {
          unaff_x23 = (ulong *******)0x8000000000000001;
          unaff_x30 = 0x101bcde44;
          ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
          pppppppuVar5 = (ulong *******)&pppppppuStack_b0;
          goto SUB_101bbf344;
        }
        if (pppppppuVar5 != (ulong *******)0x8000000000000003) {
          pppppppuStack_d0 = unaff_x24;
          unaff_x21 = (ulong *******)
                      FUN_1088c6060(&pppppppuStack_b0,&pppppppuStack_150,&UNK_10b26a8b0);
          unaff_x23 = (ulong *******)0x8000000000000001;
          unaff_x30 = 0x101bce434;
          ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
          pppppppuVar5 = (ulong *******)&pppppppuStack_b0;
          unaff_x20 = pppppppuStack_168;
          param_1 = pppppppuStack_160;
          unaff_x24 = pppppppuStack_158;
          goto SUB_101bbf344;
        }
        pppppppuVar1 = pppppppuStack_110;
        unaff_x23 = pppppppuStack_118;
        pppppppuVar11 = unaff_x24;
        if ((pppppppuStack_118 == (ulong *******)0x8000000000000000) ||
           (pppppppuVar11 = unaff_x24, pppppppuStack_118 == (ulong *******)0x8000000000000001))
        goto LAB_101bce188;
        pppppppuStack_190 = pppppppuStack_108;
        unaff_x23 = pppppppuStack_a8;
        pppppppuStack_180 = pppppppuStack_110;
        pppppppuStack_170 = pppppppuStack_110;
LAB_101bcdd30:
        ppppppuStack_70 = ppppppuStack_e0;
        ppppppuStack_78 = ppppppuStack_e8;
        ppppppuStack_80 = ppppppuStack_f0;
        pppppppuStack_88 = pppppppuStack_f8;
        pppppppuStack_90 = pppppppuStack_100;
        pppppppuStack_98 = pppppppuStack_108;
        pppppppuStack_a0 = pppppppuStack_110;
        pppppppuStack_a8 = pppppppuStack_118;
        pppppppuStack_b0 = pppppppuVar5;
        pppppppuVar1 = unaff_x21;
        in_x11 = pppppppuStack_168;
        in_x12 = pppppppuStack_170;
        in_x14 = pppppppuStack_190;
        in_x15 = pppppppuStack_198;
        pppppppuVar7 = unaff_x20;
        ppppppuVar8 = ppppppuStack_1a0;
        param_1 = pppppppuStack_188;
        pppppppuVar5 = unaff_x24;
        pppppppuVar11 = unaff_x24;
        if (unaff_x24 == unaff_x21) break;
      }
    }
    pppppppuStack_d0 = pppppppuVar11;
    pppppppuStack_120 = (ulong *******)0x8000000000000005;
    pppppppuStack_150 = (ulong *******)0x8000000000000000;
    if (pppppppuVar12 != (ulong *******)0x8000000000000001) {
      pppppppuStack_150 = pppppppuVar12;
    }
    pppppppuStack_138 = (ulong *******)0x8000000000000000;
    if (unaff_x23 != (ulong *******)0x8000000000000001) {
      pppppppuStack_138 = unaff_x23;
    }
    pppppppuStack_148 = in_x11;
    pppppppuStack_140 = in_x15;
    pppppppuStack_130 = in_x12;
    pppppppuStack_128 = in_x14;
    pppppppuStack_b0 = pppppppuStack_150;
    pppppppuStack_a8 = in_x11;
    pppppppuStack_a0 = in_x15;
    pppppppuStack_98 = pppppppuStack_138;
    pppppppuStack_90 = in_x12;
    pppppppuStack_88 = in_x14;
    if (unaff_x21 != pppppppuVar1) {
      pppppppuStack_148 = (ulong *******)FUN_1088c5bd8(ppppppuVar8,&UNK_10b26a900);
      pppppppuStack_150 = (ulong *******)0x8000000000000001;
      FUN_101bc1318(&pppppppuStack_b0);
    }
LAB_101bce080:
    FUN_101bc013c(&pppppppuStack_120);
    unaff_x24 = pppppppuVar10;
    unaff_x20 = pppppppuVar7;
  }
  else {
    pppppppuStack_148 = (ulong *******)FUN_1088c6060(param_2,&pppppppuStack_150,&UNK_10b26a950);
    pppppppuStack_150 = (ulong *******)0x8000000000000001;
    unaff_x24 = pppppppuVar10;
  }
  if ((-1 < (long)unaff_x24) ||
     (unaff_x19 = (ulong *******)0x8000000000000005,
     ((ulong)unaff_x24 & 0xfffffffffffffffe) == 0x8000000000000004)) {
    if (pppppppuStack_150 == (ulong *******)0x8000000000000001) {
      *param_1 = (ulong ******)0x8000000000000002;
      param_1[1] = (ulong ******)pppppppuStack_148;
    }
    else {
      param_1[1] = (ulong ******)pppppppuStack_148;
      *param_1 = (ulong ******)pppppppuStack_150;
      param_1[3] = (ulong ******)pppppppuStack_138;
      param_1[2] = (ulong ******)pppppppuStack_140;
      param_1[5] = (ulong ******)pppppppuStack_128;
      param_1[4] = (ulong ******)pppppppuStack_130;
    }
    return;
  }
  unaff_x30 = 0x101bce260;
  ppppppuVar4 = (ulong ******)&ppppppuStack_1a0;
  pppppppuVar5 = param_2;
  param_1 = param_2;
SUB_101bbf344:
  do {
    pppppppuVar10 = pppppppuVar5;
    *(ulong ********)((long)ppppppuVar4 + -0x40) = unaff_x24;
    *(ulong ********)((long)ppppppuVar4 + -0x38) = unaff_x23;
    *(ulong ********)((long)ppppppuVar4 + -0x30) = param_1;
    *(ulong ********)((long)ppppppuVar4 + -0x28) = unaff_x21;
    *(ulong ********)((long)ppppppuVar4 + -0x20) = unaff_x20;
    *(ulong ********)((long)ppppppuVar4 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppppppuVar4 + -0x10) = puVar13;
    *(undefined8 *)((long)ppppppuVar4 + -8) = unaff_x30;
    puVar13 = (undefined1 *)((long)ppppppuVar4 + -0x10);
    ppppppuVar8 = *pppppppuVar10;
    uVar2 = (ulong)ppppppuVar8 ^ 0x8000000000000000;
    if (-1 < (long)ppppppuVar8) {
      uVar2 = 5;
    }
    if (uVar2 < 3) {
      return;
    }
    if (uVar2 == 3) {
      if (pppppppuVar10[1] == (ulong ******)0x0) {
        return;
      }
      unaff_x20 = (ulong *******)pppppppuVar10[2];
      goto LAB_101bbf410;
    }
    if (uVar2 != 4) {
      ppppppuVar4 = pppppppuVar10[4];
      if ((ppppppuVar4 != (ulong ******)0x0) && ((long)ppppppuVar4 * 9 != -0x11)) {
        _free(pppppppuVar10[3] + (-1 - (long)ppppppuVar4));
      }
      unaff_x20 = (ulong *******)pppppppuVar10[1];
      FUN_101bbcefc(unaff_x20,pppppppuVar10[2]);
      goto joined_r0x000101bbf400;
    }
    unaff_x20 = (ulong *******)pppppppuVar10[2];
    unaff_x23 = (ulong *******)pppppppuVar10[3];
    if (unaff_x23 == (ulong *******)0x0) {
      ppppppuVar8 = pppppppuVar10[1];
joined_r0x000101bbf400:
      if (ppppppuVar8 == (ulong ******)0x0) {
        return;
      }
LAB_101bbf410:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(unaff_x20);
      return;
    }
    unaff_x30 = 0x101bbf3b4;
    ppppppuVar4 = (ulong ******)((long)ppppppuVar4 + -0x40);
    pppppppuVar5 = unaff_x20;
    unaff_x19 = pppppppuVar10;
    param_1 = unaff_x20 + 9;
  } while( true );
}

