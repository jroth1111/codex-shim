
void FUN_10604f594(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  undefined1 extraout_w1_01;
  undefined1 extraout_w1_02;
  undefined1 extraout_w1_03;
  undefined1 extraout_w1_04;
  undefined1 extraout_w1_05;
  undefined1 extraout_w1_06;
  undefined1 extraout_w1_07;
  undefined1 extraout_w1_08;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  unkbyte10 Var5;
  
  uVar1 = *(ushort *)(param_2 + 3);
  if (0x2130 < uVar1) {
    if (uVar1 == 0x2131) {
      lVar2 = *param_2;
      if (lVar2 < 5) {
        if (lVar2 == 2) {
          uVar4 = (ulong)*(byte *)(param_2 + 1);
        }
        else if (lVar2 == 3) {
          uVar4 = (ulong)*(ushort *)(param_2 + 1);
        }
        else {
          if (lVar2 != 4) goto LAB_10604f9d8;
          uVar4 = (ulong)*(uint *)(param_2 + 1);
        }
      }
      else {
        if (lVar2 != 5) {
          if (lVar2 == 6) {
            uVar4 = param_2[1];
            if ((long)uVar4 < 0) goto LAB_10604fcb0;
            goto LAB_10604fb40;
          }
          if (lVar2 != 7) goto LAB_10604f9d8;
        }
        uVar4 = param_2[1];
      }
LAB_10604fb40:
      param_1[1] = uVar4;
      uVar3 = 0x2d;
      goto LAB_10604fd54;
    }
    if (uVar1 == 0x2132) goto LAB_10604f6d8;
    if (uVar1 == 0x2133) goto code_r0x00010604f680;
    goto LAB_10604f9d4;
  }
  switch(uVar1) {
  case 2:
  case 0x19:
  case 0x2a:
  case 0x40:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4d:
    lVar2 = *param_2;
    if (lVar2 != 1 && lVar2 != 8) {
code_r0x00010604f8bc:
      if (lVar2 == 10) {
        param_1[1] = param_2[1];
        uVar3 = 0x11;
        goto LAB_10604fd54;
      }
      goto LAB_10604f9d8;
    }
    goto code_r0x00010604f5f8;
  case 9:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_03;
      uVar3 = 0x2b;
      goto LAB_10604fd54;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x2e:
  case 0x51:
    lVar2 = *param_2;
    if (lVar2 < 5) {
code_r0x00010604f614:
      if (2 < lVar2) {
code_r0x00010604f644:
        if (lVar2 == 3) {
          uVar4 = (ulong)*(ushort *)(param_2 + 1);
        }
        else {
          if (lVar2 != 4) goto LAB_10604f9d8;
          uVar4 = (ulong)*(uint *)(param_2 + 1);
        }
        goto code_r0x00010604fa04;
      }
      if (lVar2 != 1) {
        if (lVar2 != 2) goto LAB_10604f9d8;
        goto code_r0x00010604f6e8;
      }
    }
    else {
      if (lVar2 < 7) {
code_r0x00010604f698:
        if (lVar2 == 5) goto code_r0x00010604fa00;
        if (lVar2 != 6) goto LAB_10604f9d8;
code_r0x00010604f6f0:
        uVar4 = param_2[1];
        if ((long)uVar4 < 0) {
LAB_10604fcb0:
          param_1[1] = uVar4;
          uVar3 = 6;
          goto LAB_10604fd54;
        }
        goto code_r0x00010604fa04;
      }
      if (lVar2 == 7) goto code_r0x00010604fa00;
      if (lVar2 != 8) goto LAB_10604f9d8;
    }
    goto code_r0x00010604f5f8;
  case 0x10:
    lVar2 = *param_2;
    if (lVar2 == 10) {
      param_1[1] = param_2[1];
      uVar3 = 0x10;
      goto LAB_10604fd54;
    }
    goto LAB_10604f9d8;
  case 0x12:
  case 0x39:
  case 0x3b:
  case 0x57:
  case 0x59:
    lVar2 = *param_2;
    if (lVar2 < 5) {
      if (lVar2 != 2) goto code_r0x00010604f644;
code_r0x00010604f6e8:
      uVar4 = (ulong)*(byte *)(param_2 + 1);
    }
    else {
      if (lVar2 != 5) {
        if (lVar2 == 6) goto code_r0x00010604f6f0;
        if (lVar2 != 7) goto LAB_10604f9d8;
      }
code_r0x00010604fa00:
      uVar4 = param_2[1];
    }
code_r0x00010604fa04:
    param_1[1] = uVar4;
    uVar3 = 7;
    goto LAB_10604fd54;
  case 0x13:
    Var5 = func_0x000106050128(param_2);
    if (((ulong)Var5 & 1) != 0) {
      *(short *)(param_1 + 1) = (short)((unkuint10)Var5 >> 0x40);
      uVar3 = 0x26;
      goto LAB_10604fd54;
    }
    break;
  case 0x17:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_05;
      uVar3 = 0x24;
      goto LAB_10604fd54;
    }
    break;
  case 0x20:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_06;
      uVar3 = 0x2a;
      goto LAB_10604fd54;
    }
    break;
  case 0x22:
  case 0x2f:
  case 0x37:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x71:
  case 0x7e:
  case 0x7f:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
    lVar2 = *param_2;
    if (lVar2 != 1 && lVar2 != 8) goto LAB_10604f9d8;
    goto code_r0x00010604f5f8;
  case 0x2c:
  case 0x55:
    lVar2 = *param_2;
    if (lVar2 != 10) goto LAB_10604f9d8;
    param_1[1] = param_2[1];
    uVar3 = 0x16;
    goto LAB_10604fd54;
  case 0x32:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_04;
      uVar3 = 0x23;
      goto LAB_10604fd54;
    }
    break;
  case 0x33:
    lVar2 = *param_2;
    if (lVar2 < 5) {
      if (lVar2 == 2) {
        uVar4 = (ulong)*(byte *)(param_2 + 1);
      }
      else if (lVar2 == 3) {
        uVar4 = (ulong)*(ushort *)(param_2 + 1);
      }
      else {
        if (lVar2 != 4) goto LAB_10604f9d8;
        uVar4 = (ulong)*(uint *)(param_2 + 1);
      }
    }
    else {
      if (lVar2 != 5) {
        if (lVar2 == 6) {
          uVar4 = param_2[1];
          if ((long)uVar4 < 0) goto LAB_10604fcb0;
          goto code_r0x00010604fb18;
        }
        if (lVar2 != 7) goto LAB_10604f9d8;
      }
      uVar4 = param_2[1];
    }
code_r0x00010604fb18:
    param_1[1] = uVar4;
    uVar3 = 0x27;
    goto LAB_10604fd54;
  case 0x36:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_00;
      uVar3 = 0x29;
      goto LAB_10604fd54;
    }
    break;
  case 0x38:
    lVar2 = *param_2;
    if (lVar2 < 5) goto code_r0x00010604f614;
    if (lVar2 < 7) goto code_r0x00010604f698;
    if (lVar2 == 7) goto code_r0x00010604fa00;
    if (lVar2 != 8) goto code_r0x00010604f8bc;
code_r0x00010604f5f8:
    lVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar2;
    uVar3 = 8;
    goto LAB_10604fd54;
  case 0x3a:
    lVar2 = *param_2;
    if (lVar2 < 5) {
      if (lVar2 == 2) {
code_r0x00010604fd48:
        uVar4 = (ulong)*(byte *)(param_2 + 1);
      }
      else {
        if (lVar2 != 3) goto code_r0x00010604f7cc;
code_r0x00010604f880:
        uVar4 = (ulong)*(ushort *)(param_2 + 1);
      }
    }
    else {
      if (lVar2 == 5) goto code_r0x00010604faf4;
      if (lVar2 != 6) goto code_r0x00010604facc;
code_r0x00010604fae8:
      uVar4 = param_2[1];
      if ((long)uVar4 < 0) goto LAB_10604fcb0;
    }
    goto code_r0x00010604fd4c;
  case 0x3e:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_02;
      uVar3 = 0x20;
      goto LAB_10604fd54;
    }
    break;
  case 0x42:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1;
      uVar3 = 0x28;
      goto LAB_10604fd54;
    }
    break;
  case 0x43:
    lVar2 = *param_2;
    if (lVar2 != 10) goto LAB_10604f9d8;
    param_1[1] = param_2[1];
    uVar3 = 0x14;
    goto LAB_10604fd54;
  case 0x4c:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_08;
      uVar3 = 0x25;
      goto LAB_10604fd54;
    }
    break;
  case 0x58:
    lVar2 = *param_2;
    if (lVar2 < 5) {
      if (lVar2 == 2) goto code_r0x00010604fd48;
      if (lVar2 == 3) goto code_r0x00010604f880;
code_r0x00010604f7cc:
      if (lVar2 != 4) goto LAB_10604f9d8;
      uVar4 = (ulong)*(uint *)(param_2 + 1);
    }
    else {
      if (lVar2 != 5) {
        if (lVar2 == 6) goto code_r0x00010604fae8;
code_r0x00010604facc:
        if (lVar2 != 7) goto LAB_10604f9d8;
      }
code_r0x00010604faf4:
      uVar4 = param_2[1];
    }
code_r0x00010604fd4c:
    param_1[1] = uVar4;
    uVar3 = 0x2c;
    goto LAB_10604fd54;
  case 0x5e:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_07;
      uVar3 = 0x21;
      goto LAB_10604fd54;
    }
    break;
  case 0x65:
    uVar4 = func_0x000106050094(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_01;
      uVar3 = 0x22;
      goto LAB_10604fd54;
    }
    break;
  case 0x72:
    lVar2 = *param_2;
    if (lVar2 != 10) goto LAB_10604f9d8;
    param_1[1] = param_2[1];
    uVar3 = 0x1c;
    goto LAB_10604fd54;
  case 0x73:
code_r0x00010604f680:
    lVar2 = *param_2;
    if (lVar2 == 10) {
      param_1[1] = param_2[1];
      uVar3 = 0xb;
      goto LAB_10604fd54;
    }
    goto LAB_10604f9d8;
  case 0x74:
LAB_10604f6d8:
    lVar2 = *param_2;
    if (lVar2 == 10) {
      param_1[1] = param_2[1];
      uVar3 = 0x17;
      goto LAB_10604fd54;
    }
    goto LAB_10604f9d8;
  case 0x79:
    lVar2 = *param_2;
    if (lVar2 != 10) goto LAB_10604f9d8;
    param_1[1] = param_2[1];
    uVar3 = 0x15;
    goto LAB_10604fd54;
  case 0x8c:
    lVar2 = *param_2;
    if (lVar2 != 10) goto LAB_10604f9d8;
    param_1[1] = param_2[1];
    uVar3 = 0x12;
LAB_10604fd54:
    *param_1 = uVar3;
    return;
  }
LAB_10604f9d4:
  lVar2 = *param_2;
LAB_10604f9d8:
                    /* WARNING: Could not recover jumptable at 0x00010604f9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_10604f8c4 + (ulong)*(ushort *)(&UNK_109bd5570 + lVar2 * 2) * 4))();
  return;
}

