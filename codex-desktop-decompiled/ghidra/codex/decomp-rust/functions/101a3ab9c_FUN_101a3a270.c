
/* WARNING: Possible PIC construction at 0x00010194dc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101938048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3a544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3a958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3ab34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3a648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3a6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3a870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3a7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3acdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a3acb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a3ace0) */
/* WARNING: Removing unreachable block (ram,0x000101a3a874) */
/* WARNING: Removing unreachable block (ram,0x000101a3a6b0) */
/* WARNING: Removing unreachable block (ram,0x000101a3a64c) */
/* WARNING: Removing unreachable block (ram,0x000101a3aa94) */
/* WARNING: Removing unreachable block (ram,0x000101a3a658) */
/* WARNING: Removing unreachable block (ram,0x000101a3ab38) */
/* WARNING: Removing unreachable block (ram,0x000101a3a548) */
/* WARNING: Removing unreachable block (ram,0x000101a3ab3c) */
/* WARNING: Removing unreachable block (ram,0x000101a3ab68) */
/* WARNING: Removing unreachable block (ram,0x000101a3a554) */
/* WARNING: Removing unreachable block (ram,0x00010193804c) */
/* WARNING: Removing unreachable block (ram,0x00010194dc98) */
/* WARNING: Removing unreachable block (ram,0x000101a3acbc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101a3a270(ulong *******param_1,ulong *******param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  ulong uVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  ulong *******in_x12;
  ulong *******extraout_x12;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar8;
  ulong *******unaff_x24;
  ulong ******unaff_x25;
  uint uVar9;
  undefined1 *puVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_1d0 [8];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong ******ppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong uStack_1a0;
  ulong *******pppppppuStack_198;
  int iStack_190;
  int iStack_18c;
  ulong *******pppppppuStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  ulong ******ppppppuStack_170;
  byte bStack_168;
  byte bStack_167;
  undefined6 uStack_166;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong ******ppppppuStack_150;
  ulong *******pppppppuStack_148;
  ulong ******ppppppuStack_140;
  ulong ******ppppppuStack_138;
  ulong ******ppppppuStack_130;
  ulong ******ppppppuStack_128;
  ulong ******ppppppuStack_120;
  ulong *******pppppppuStack_118;
  ulong *******pppppppuStack_110;
  ulong *******pppppppuStack_108;
  ulong *******pppppppuStack_100;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  ulong ******ppppppuStack_e0;
  undefined8 uStack_d8;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong ******ppppppuStack_90;
  ulong ******ppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong ******ppppppuStack_70;
  uint uVar10;
  
  puVar2 = auStack_1d0;
  puVar11 = &stack0xfffffffffffffff0;
  pppppppuVar8 = (ulong *******)*param_2;
  if (pppppppuVar8 == (ulong *******)0x8000000000000000) {
    *param_1 = (ulong ******)0x8000000000000001;
    puVar2 = (undefined1 *)register0x00000008;
    pppppppuVar8 = param_2;
    param_2 = unaff_x22;
    puVar11 = unaff_x29;
    goto SUB_10194dc28;
  }
  unaff_x19 = (ulong *******)0x8000000000000005;
  uVar5 = (ulong)pppppppuVar8 ^ 0x8000000000000000;
  if (-1 < (long)pppppppuVar8) {
    uVar5 = 5;
  }
  pppppppuStack_188 = pppppppuVar8;
  if (uVar5 == 4) {
    ppppppuVar6 = param_2[1];
    unaff_x21 = (ulong *******)param_2[2];
    pppppppuStack_198 = param_2;
    unaff_x23 = (ulong *******)param_2[3];
    unaff_x20 = unaff_x21 + (long)unaff_x23 * 9;
    pppppppuStack_b0 = unaff_x21;
    ppppppuStack_a0 = ppppppuVar6;
    pppppppuStack_98 = unaff_x20;
    if (unaff_x23 == (ulong *******)0x0) {
      unaff_x24 = (ulong *******)0x0;
      param_2 = unaff_x21;
      pppppppuStack_a8 = unaff_x21;
    }
    else {
      param_2 = unaff_x21 + 9;
      pppppppuVar8 = (ulong *******)*unaff_x21;
      pppppppuStack_a8 = param_2;
      if (pppppppuVar8 == (ulong *******)0x8000000000000005) {
        unaff_x24 = (ulong *******)0x0;
      }
      else {
        ppppppuStack_150 = unaff_x21[2];
        pppppppuStack_158 = (ulong *******)unaff_x21[1];
        ppppppuStack_140 = unaff_x21[4];
        pppppppuStack_148 = (ulong *******)unaff_x21[3];
        ppppppuStack_130 = unaff_x21[6];
        ppppppuStack_138 = unaff_x21[5];
        ppppppuStack_120 = unaff_x21[8];
        ppppppuStack_128 = unaff_x21[7];
        pppppppuStack_160 = pppppppuVar8;
        if (pppppppuVar8 != (ulong *******)0x8000000000000001) {
          unaff_x24 = (ulong *******)
                      FUN_10889a648(&pppppppuStack_160,&pppppppuStack_180,&UNK_10b25d4f0);
          unaff_x30 = 0x101a3acbc;
          pppppppuVar8 = (ulong *******)&pppppppuStack_160;
          goto SUB_10194dc28;
        }
        unaff_x24 = (ulong *******)((ulong)pppppppuStack_158 & 0xff);
        func_0x00010194dc28(&pppppppuStack_160);
      }
    }
    pppppppuVar8 = unaff_x20;
    if (param_2 == unaff_x20) goto LAB_101a3a81c;
    pppppppuVar4 = (ulong *******)*param_2;
    pppppppuStack_a8 = param_2 + 9;
    if (pppppppuVar4 != (ulong *******)0x8000000000000005) {
      pppppppuStack_160 = pppppppuVar4;
      ppppppuStack_150 = param_2[2];
      pppppppuStack_158 = (ulong *******)param_2[1];
      ppppppuStack_140 = param_2[4];
      pppppppuStack_148 = (ulong *******)param_2[3];
      ppppppuStack_130 = param_2[6];
      ppppppuStack_138 = param_2[5];
      ppppppuStack_120 = param_2[8];
      ppppppuStack_128 = param_2[7];
      if (pppppppuVar4 == (ulong *******)0x8000000000000001) {
        unaff_x30 = 0x101a3a7f4;
        puVar2 = auStack_1d0;
        pppppppuVar8 = (ulong *******)&pppppppuStack_160;
      }
      else {
        unaff_x24 = (ulong *******)
                    FUN_10889a648(&pppppppuStack_160,&pppppppuStack_180,&UNK_10b25d4f0);
        unaff_x30 = 0x101a3ace0;
        puVar2 = auStack_1d0;
        pppppppuVar8 = (ulong *******)&pppppppuStack_160;
      }
      goto SUB_10194dc28;
    }
    if (param_2 + 9 == unaff_x20) {
LAB_101a3a81c:
      pppppppuStack_178 = (ulong *******)FUN_108880da4(2,&UNK_10b268a78,&UNK_10b25d520);
LAB_101a3a838:
      pppppppuStack_180 = (ulong *******)0x8000000000000001;
      param_2 = pppppppuVar8;
    }
    else {
      pppppppuVar8 = param_2 + 0x12;
      pppppppuStack_a8 = pppppppuVar8;
      if ((ulong *******)param_2[9] == (ulong *******)0x8000000000000005) goto LAB_101a3a81c;
      ppppppuStack_150 = param_2[0xb];
      pppppppuStack_158 = (ulong *******)param_2[10];
      ppppppuStack_140 = param_2[0xd];
      pppppppuStack_148 = (ulong *******)param_2[0xc];
      ppppppuStack_130 = param_2[0xf];
      ppppppuStack_138 = param_2[0xe];
      ppppppuStack_120 = param_2[0x11];
      ppppppuStack_128 = param_2[0x10];
      pppppppuStack_160 = (ulong *******)param_2[9];
      FUN_101a20944(&pppppppuStack_f0,&pppppppuStack_160);
      pppppppuStack_178 = pppppppuStack_e8;
      if (pppppppuStack_f0 == (ulong *******)0x8000000000000001) goto LAB_101a3a838;
      pppppppuStack_180 = pppppppuStack_f0;
      ppppppuStack_170 = ppppppuStack_e0;
      bStack_168 = (byte)unaff_x24;
      bStack_167 = 0;
      pppppppuStack_158 = pppppppuStack_e8;
      pppppppuStack_160 = pppppppuStack_f0;
      pppppppuStack_148 = (ulong *******)CONCAT62(uStack_166,(ushort)(byte)unaff_x24);
      ppppppuStack_150 = ppppppuStack_e0;
      param_2 = unaff_x20;
      if (unaff_x20 != pppppppuVar8) {
        pppppppuStack_178 = (ulong *******)FUN_108880da4(unaff_x23,&UNK_10b25f958,&UNK_10b25d520);
        pppppppuStack_180 = (ulong *******)0x8000000000000001;
        FUN_10195ac8c(&pppppppuStack_160);
        param_2 = pppppppuVar8;
      }
    }
    unaff_x24 = (ulong *******)
                (((ulong)((long)unaff_x20 - (long)param_2) >> 3) * -0x71c71c71c71c71c7);
    if (unaff_x24 != (ulong *******)0x0) {
      unaff_x23 = param_2 + 9;
      unaff_x30 = 0x101a3a874;
      puVar2 = auStack_1d0;
      pppppppuVar8 = param_2;
      goto SUB_10194dc28;
    }
    param_2 = pppppppuStack_198;
    unaff_x23 = pppppppuStack_188;
    unaff_x24 = param_1;
    if (ppppppuVar6 != (ulong ******)0x0) {
      _free(unaff_x21);
      param_2 = pppppppuStack_198;
      unaff_x23 = pppppppuStack_188;
    }
  }
  else if (uVar5 == 5) {
    ppppppuStack_1b8 = param_2[6];
    unaff_x20 = (ulong *******)param_2[1];
    ppppppuVar6 = param_2[2];
    ppppppuVar7 = param_2[4];
    if ((ppppppuVar7 != (ulong ******)0x0) && ((long)ppppppuVar7 * 9 != -0x11)) {
      _free(param_2[3] + (-1 - (long)ppppppuVar7));
      in_x12 = extraout_x12;
    }
    pppppppuStack_1b0 = param_1;
    pppppppuStack_110 = unaff_x20;
    pppppppuStack_108 = pppppppuVar8;
    unaff_x23 = unaff_x20 + (long)ppppppuVar6 * 0xd;
    pppppppuStack_100 = unaff_x23;
    pppppppuStack_118 = unaff_x20;
    pppppppuStack_160 = (ulong *******)0x8000000000000005;
    if (ppppppuVar6 == (ulong ******)0x0) {
      bStack_167 = 0;
      bStack_168 = 0;
      unaff_x24 = (ulong *******)0x8000000000000001;
      unaff_x21 = (ulong *******)0x0;
      pppppppuVar8 = unaff_x23;
      pppppppuVar4 = param_2;
    }
    else {
      uStack_1a0 = 0;
      pppppppuStack_198 = param_2;
      unaff_x21 = (ulong *******)&pppppppuStack_b0;
      iStack_190 = 2;
      iStack_18c = 2;
      unaff_x24 = (ulong *******)0x8000000000000001;
      param_2 = unaff_x20;
      do {
        unaff_x20 = param_2;
        param_2 = unaff_x20 + 0xd;
        pppppppuVar8 = param_2;
        if (*unaff_x20 == (ulong ******)0x8000000000000000) break;
        ppppppuVar6 = unaff_x20[1];
        ppppppuVar7 = unaff_x20[2];
        ppppppuStack_138 = unaff_x20[8];
        ppppppuStack_140 = unaff_x20[7];
        ppppppuStack_128 = unaff_x20[10];
        ppppppuStack_130 = unaff_x20[9];
        ppppppuStack_120 = unaff_x20[0xb];
        pppppppuStack_160 = (ulong *******)unaff_x20[3];
        pppppppuStack_158 = (ulong *******)unaff_x20[4];
        pppppppuStack_148 = (ulong *******)unaff_x20[6];
        ppppppuStack_150 = unaff_x20[5];
        if (ppppppuVar7 == (ulong ******)0x19) {
          if (((*ppppppuVar6 != (ulong *****)0x6f4e74754f74706f ||
               ppppppuVar6[1] != (ulong *****)0x6974616369666974) ||
              ppppppuVar6[2] != (ulong *****)0x646f6874654d6e6f) ||
              *(char *)(ppppppuVar6 + 3) != 's') goto LAB_101a3a4c4;
          uVar10 = 2;
          uVar9 = 2;
        }
        else if (ppppppuVar7 == (ulong ******)0x12) {
          if ((*ppppppuVar6 != (ulong *****)0x4174736575716572 ||
              ppppppuVar6[1] != (ulong *****)0x6974617473657474) ||
              *(short *)(ppppppuVar6 + 2) != 0x6e6f) goto LAB_101a3a4c4;
          uVar10 = 1;
          uVar9 = 1;
        }
        else if ((ppppppuVar7 == (ulong ******)0xf) &&
                (*ppppppuVar6 == (ulong *****)0x656d697265707865 &&
                 *(long *)((long)ppppppuVar6 + 7) == 0x6970416c61746e65)) {
          uVar10 = 0;
          uVar9 = 0;
        }
        else {
LAB_101a3a4c4:
          uVar10 = 3;
          uVar9 = 3;
        }
        if (*unaff_x20 != (ulong ******)0x0) {
          _free();
          uVar9 = uVar10;
        }
        pppppppuVar4 = pppppppuStack_a8;
        pppppppuVar8 = pppppppuStack_160;
        if (uVar9 < 2) {
          pppppppuStack_a8._0_1_ = (byte)pppppppuStack_158;
          bVar1 = (byte)pppppppuStack_a8;
          pppppppuStack_a8 = pppppppuVar4;
          if (uVar9 == 0) {
            if (iStack_18c == 2) {
              pppppppuStack_160 = (ulong *******)0x8000000000000005;
              unaff_x19 = (ulong *******)0x8000000000000005;
              if (pppppppuVar8 != (ulong *******)0x8000000000000005) {
                pppppppuStack_b0 = pppppppuVar8;
                ppppppuStack_a0 = ppppppuStack_150;
                pppppppuStack_a8 = pppppppuStack_158;
                ppppppuStack_90 = ppppppuStack_140;
                pppppppuStack_98 = pppppppuStack_148;
                ppppppuStack_80 = ppppppuStack_130;
                ppppppuStack_88 = ppppppuStack_138;
                ppppppuStack_70 = ppppppuStack_120;
                ppppppuStack_78 = ppppppuStack_128;
                if (pppppppuVar8 == (ulong *******)0x8000000000000001) {
                  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(uint)bVar1);
                }
                else {
                  uStack_1c0 = FUN_10889a648(&pppppppuStack_b0,&pppppppuStack_180,&UNK_10b25d4f0);
                }
                unaff_x30 = 0x101a3a548;
                puVar2 = auStack_1d0;
                pppppppuVar8 = (ulong *******)&pppppppuStack_b0;
                goto SUB_10194dc28;
              }
              pppppppuStack_c0 = pppppppuStack_1a8;
              pppppppuStack_110 = param_2;
              pppppppuStack_c8 = unaff_x24;
              pppppppuStack_178 = (ulong *******)FUN_1088bbd80(&UNK_108cde170,0x10);
            }
            else {
              pppppppuStack_c0 = pppppppuStack_1a8;
              pppppppuStack_180 = (ulong *******)&UNK_108cf1ae9;
              pppppppuStack_178 = (ulong *******)0xf;
              pppppppuStack_b0 = (ulong *******)&pppppppuStack_180;
              pppppppuStack_a8 = (ulong *******)&DAT_10192d9a4;
              pppppppuStack_110 = param_2;
              pppppppuStack_c8 = unaff_x24;
              pppppppuStack_178 =
                   (ulong *******)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&pppppppuStack_b0);
            }
          }
          else if (iStack_190 == 2) {
            pppppppuStack_160 = (ulong *******)0x8000000000000005;
            unaff_x19 = (ulong *******)0x8000000000000005;
            if (pppppppuVar8 != (ulong *******)0x8000000000000005) {
              pppppppuStack_b0 = pppppppuVar8;
              ppppppuStack_a0 = ppppppuStack_150;
              pppppppuStack_a8 = pppppppuStack_158;
              ppppppuStack_90 = ppppppuStack_140;
              pppppppuStack_98 = pppppppuStack_148;
              ppppppuStack_80 = ppppppuStack_130;
              ppppppuStack_88 = ppppppuStack_138;
              ppppppuStack_70 = ppppppuStack_120;
              ppppppuStack_78 = ppppppuStack_128;
              if (pppppppuVar8 == (ulong *******)0x8000000000000001) {
                uStack_1a0 = (ulong)CONCAT14(bVar1,(undefined4)uStack_1a0);
              }
              else {
                uStack_1c8 = FUN_10889a648(&pppppppuStack_b0,&pppppppuStack_180,&UNK_10b25d4f0);
              }
              unaff_x30 = 0x101a3a64c;
              puVar2 = auStack_1d0;
              pppppppuVar8 = (ulong *******)&pppppppuStack_b0;
              goto SUB_10194dc28;
            }
            pppppppuStack_c0 = pppppppuStack_1a8;
            pppppppuStack_110 = param_2;
            pppppppuStack_c8 = unaff_x24;
            pppppppuStack_178 = (ulong *******)FUN_1088bbd80(&UNK_108cde170,0x10);
          }
          else {
            pppppppuStack_c0 = pppppppuStack_1a8;
            pppppppuStack_180 = (ulong *******)&UNK_108cf1af8;
            pppppppuStack_178 = (ulong *******)0x12;
            pppppppuStack_b0 = (ulong *******)&pppppppuStack_180;
            pppppppuStack_a8 = (ulong *******)&DAT_10192d9a4;
            pppppppuStack_110 = param_2;
            pppppppuStack_c8 = unaff_x24;
            pppppppuStack_178 =
                 (ulong *******)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&pppppppuStack_b0);
          }
LAB_101a3aaa8:
          pppppppuStack_180 = (ulong *******)0x8000000000000001;
          param_2 = pppppppuStack_198;
          if (-0x7fffffffffffffff < (long)unaff_x24) {
LAB_101a3aac0:
            param_2 = pppppppuStack_198;
            pppppppuStack_180 = (ulong *******)0x8000000000000001;
            if (unaff_x25 != (ulong ******)0x0) {
              unaff_x20 = pppppppuStack_1a8 + 1;
              do {
                if (unaff_x20[-1] != (ulong ******)0x0) {
                  _free(*unaff_x20);
                }
                unaff_x20 = unaff_x20 + 3;
                unaff_x25 = (ulong ******)((long)unaff_x25 + -1);
              } while (unaff_x25 != (ulong ******)0x0);
            }
            if (unaff_x24 != (ulong *******)0x0) {
              _free(pppppppuStack_1a8);
            }
          }
LAB_101a3ab14:
          unaff_x19 = (ulong *******)0x8000000000000005;
          FUN_10194df64(&pppppppuStack_118);
          unaff_x23 = pppppppuStack_188;
          unaff_x24 = pppppppuStack_1b0;
          if (pppppppuStack_160 == (ulong *******)0x8000000000000005) goto LAB_101a3a940;
          unaff_x30 = 0x101a3ab38;
          puVar2 = auStack_1d0;
          pppppppuVar8 = (ulong *******)&pppppppuStack_160;
          goto SUB_10194dc28;
        }
        if (uVar9 != 2) {
          pppppppuStack_160 = (ulong *******)0x8000000000000005;
          unaff_x19 = (ulong *******)0x8000000000000005;
          if (pppppppuVar8 == (ulong *******)0x8000000000000005) {
            pppppppuStack_c0 = pppppppuStack_1a8;
            pppppppuStack_110 = param_2;
            pppppppuStack_c8 = unaff_x24;
            pppppppuStack_178 = (ulong *******)FUN_1088bbd80(&UNK_108cde170,0x10);
            goto LAB_101a3aaa8;
          }
          pppppppuStack_b0 = pppppppuVar8;
          ppppppuStack_a0 = ppppppuStack_150;
          pppppppuStack_a8 = pppppppuStack_158;
          ppppppuStack_90 = ppppppuStack_140;
          pppppppuStack_98 = pppppppuStack_148;
          ppppppuStack_80 = ppppppuStack_130;
          ppppppuStack_88 = ppppppuStack_138;
          ppppppuStack_70 = ppppppuStack_120;
          ppppppuStack_78 = ppppppuStack_128;
          unaff_x30 = 0x101a3a6b0;
          puVar2 = auStack_1d0;
          pppppppuVar8 = (ulong *******)&pppppppuStack_b0;
          goto SUB_10194dc28;
        }
        if (unaff_x24 != (ulong *******)0x8000000000000001) {
          pppppppuStack_c0 = pppppppuStack_1a8;
          pppppppuStack_180 = (ulong *******)&UNK_108cf1b0a;
          pppppppuStack_178 = (ulong *******)0x19;
          pppppppuStack_b0 = (ulong *******)&pppppppuStack_180;
          pppppppuStack_a8 = (ulong *******)&DAT_10192d9a4;
          pppppppuStack_110 = param_2;
          pppppppuStack_c8 = unaff_x24;
          pppppppuStack_178 =
               (ulong *******)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&pppppppuStack_b0);
          pppppppuStack_180 = (ulong *******)0x8000000000000001;
          param_2 = pppppppuStack_198;
          if (unaff_x24 != (ulong *******)0x8000000000000000) goto LAB_101a3aac0;
          goto LAB_101a3ab14;
        }
        pppppppuStack_160 = (ulong *******)0x8000000000000005;
        if (pppppppuVar8 == (ulong *******)0x8000000000000005) {
          pppppppuStack_c0 = pppppppuStack_1a8;
          pppppppuStack_110 = param_2;
          pppppppuStack_c8 = unaff_x24;
          pppppppuStack_178 = (ulong *******)FUN_1088bbd80(&UNK_108cde170,0x10);
          pppppppuVar8 = pppppppuStack_110;
LAB_101a3ab0c:
          pppppppuStack_110 = pppppppuVar8;
          pppppppuStack_180 = (ulong *******)0x8000000000000001;
          param_2 = pppppppuStack_198;
          goto LAB_101a3ab14;
        }
        pppppppuStack_b0 = pppppppuVar8;
        ppppppuStack_a0 = ppppppuStack_150;
        pppppppuStack_a8 = pppppppuStack_158;
        ppppppuStack_90 = ppppppuStack_140;
        pppppppuStack_98 = pppppppuStack_148;
        ppppppuStack_80 = ppppppuStack_130;
        ppppppuStack_88 = ppppppuStack_138;
        ppppppuStack_70 = ppppppuStack_120;
        ppppppuStack_78 = ppppppuStack_128;
        FUN_101a20944(&pppppppuStack_180,&pppppppuStack_b0);
        pppppppuStack_1a8 = pppppppuStack_178;
        pppppppuVar8 = param_2;
        if (pppppppuStack_180 == (ulong *******)0x8000000000000001) goto LAB_101a3ab0c;
        pppppppuVar8 = unaff_x23;
        unaff_x25 = ppppppuStack_170;
        unaff_x24 = pppppppuStack_180;
      } while (param_2 != unaff_x23);
      bStack_168 = (byte)iStack_18c & 1;
      bStack_167 = (byte)iStack_190 & 1;
      in_x12 = pppppppuStack_1a8;
      pppppppuVar4 = pppppppuStack_198;
      pppppppuStack_110 = param_2;
    }
    param_2 = pppppppuVar4;
    pppppppuVar3 = pppppppuStack_188;
    pppppppuVar4 = pppppppuStack_1b0;
    pppppppuStack_180 = (ulong *******)0x8000000000000000;
    if (unaff_x24 != (ulong *******)0x8000000000000001) {
      pppppppuStack_180 = unaff_x24;
    }
    uStack_d8 = CONCAT62(uStack_166,CONCAT11(bStack_167,bStack_168));
    pppppppuStack_178 = in_x12;
    ppppppuStack_170 = unaff_x25;
    pppppppuStack_f0 = pppppppuStack_180;
    pppppppuStack_e8 = in_x12;
    if (unaff_x23 != pppppppuVar8) {
      pppppppuStack_178 =
           (ulong *******)FUN_108880da4(ppppppuStack_1b8,&UNK_10b25f968,&UNK_10b25d520);
      pppppppuStack_180 = (ulong *******)0x8000000000000001;
      FUN_10195ac8c(&pppppppuStack_f0);
    }
    FUN_10194df64(&pppppppuStack_118);
    unaff_x23 = pppppppuVar3;
    unaff_x24 = pppppppuVar4;
  }
  else {
    pppppppuStack_178 = (ulong *******)FUN_10889a648(param_2,&pppppppuStack_180,&UNK_10b25d5f0);
    pppppppuStack_180 = (ulong *******)0x8000000000000001;
    unaff_x23 = pppppppuVar8;
    unaff_x24 = param_1;
  }
LAB_101a3a940:
  unaff_x19 = (ulong *******)0x8000000000000005;
  if ((-1 < (long)unaff_x23) || (((ulong)unaff_x23 & 0xfffffffffffffffe) == 0x8000000000000004)) {
    if (pppppppuStack_180 == (ulong *******)0x8000000000000001) {
      *unaff_x24 = (ulong ******)0x8000000000000002;
      unaff_x24[1] = (ulong ******)pppppppuStack_178;
    }
    else {
      unaff_x24[1] = (ulong ******)pppppppuStack_178;
      *unaff_x24 = (ulong ******)pppppppuStack_180;
      unaff_x24[3] = (ulong ******)CONCAT62(uStack_166,CONCAT11(bStack_167,bStack_168));
      unaff_x24[2] = ppppppuStack_170;
    }
    return;
  }
  unaff_x30 = 0x101a3a95c;
  puVar2 = auStack_1d0;
  pppppppuVar8 = param_2;
SUB_10194dc28:
  do {
    pppppppuVar4 = pppppppuVar8;
    *(ulong ********)(puVar2 + -0x40) = unaff_x24;
    *(ulong ********)(puVar2 + -0x38) = unaff_x23;
    *(ulong ********)(puVar2 + -0x30) = param_2;
    *(ulong ********)(puVar2 + -0x28) = unaff_x21;
    *(ulong ********)(puVar2 + -0x20) = unaff_x20;
    *(ulong ********)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar11;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    puVar11 = puVar2 + -0x10;
    uVar5 = (ulong)*pppppppuVar4 ^ 0x8000000000000000;
    if (-1 < (long)*pppppppuVar4) {
      uVar5 = 5;
    }
    if (uVar5 < 3) {
      return;
    }
    if (uVar5 == 3) {
      if (pppppppuVar4[1] == (ulong ******)0x0) {
        return;
      }
      pppppppuVar3 = (ulong *******)pppppppuVar4[2];
      goto code_r0x000108aa97c4;
    }
    if (uVar5 == 4) {
      pppppppuVar3 = (ulong *******)pppppppuVar4[2];
      unaff_x23 = (ulong *******)pppppppuVar4[3];
      if (unaff_x23 == (ulong *******)0x0) {
        if (pppppppuVar4[1] == (ulong ******)0x0) {
          return;
        }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(pppppppuVar3);
        return;
      }
      param_2 = pppppppuVar3 + 9;
      unaff_x30 = 0x10194dc98;
      puVar2 = puVar2 + -0x40;
      pppppppuVar8 = pppppppuVar3;
      unaff_x19 = pppppppuVar4;
      unaff_x20 = pppppppuVar3;
    }
    else {
      ppppppuVar6 = pppppppuVar4[4];
      if ((ppppppuVar6 != (ulong ******)0x0) && ((long)ppppppuVar6 * 9 != -0x11)) {
        _free(pppppppuVar4[3] + (-1 - (long)ppppppuVar6));
      }
      unaff_x24 = *(ulong ********)(puVar2 + -0x40);
      *(ulong ********)(puVar2 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
      *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
      *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      puVar11 = puVar2 + -0x10;
      pppppppuVar3 = (ulong *******)pppppppuVar4[1];
      unaff_x23 = (ulong *******)pppppppuVar4[2];
      if (unaff_x23 == (ulong *******)0x0) {
        if (*pppppppuVar4 == (ulong ******)0x0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (*pppppppuVar3 != (ulong ******)0x0) {
        _free(pppppppuVar3[1]);
      }
      param_2 = pppppppuVar3 + 0xd;
      unaff_x30 = 0x10193804c;
      puVar2 = puVar2 + -0x40;
      pppppppuVar8 = pppppppuVar3 + 3;
      unaff_x19 = pppppppuVar3;
      unaff_x20 = pppppppuVar4;
      unaff_x21 = pppppppuVar3;
    }
  } while( true );
}

