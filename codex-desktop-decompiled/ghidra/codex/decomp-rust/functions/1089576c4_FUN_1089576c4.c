
/* WARNING: Possible PIC construction at 0x000108957910: Changing call to branch */

byte * FUN_1089576c4(byte *param_1,ulong param_2,byte *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *extraout_x1;
  byte *pbVar7;
  code *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  undefined8 *puVar12;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  double extraout_d0;
  double dVar17;
  undefined1 *in_stack_00000000;
  undefined *in_stack_00000008;
  undefined1 auStack_e0 [96];
  undefined1 auStack_40 [8];
  int aiStack_38 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)auStack_40;
  puVar15 = &stack0xfffffffffffffff0;
  pbVar5 = param_3 + param_2;
  if (CARRY8((ulong)param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = *(byte **)(param_1 + 8);
    pbVar9 = (byte *)(*(long *)param_1 * 2);
    if (pbVar5 <= pbVar9) {
      pbVar5 = pbVar9;
    }
    pbVar9 = (byte *)0x8;
    if (param_5 != 1) {
      pbVar9 = (byte *)0x4;
    }
    unaff_x20 = pbVar5;
    if (pbVar5 <= pbVar9) {
      unaff_x20 = pbVar9;
    }
    pbVar5 = (byte *)func_0x00010895757c(aiStack_38,*(long *)param_1,param_3,unaff_x20,param_4);
    unaff_x19 = param_1;
    if (aiStack_38[0] != 1) {
      *(byte **)param_1 = unaff_x20;
      *(long *)(param_1 + 8) = lStack_30;
      return pbVar5;
    }
  }
  puVar16 = (undefined *)0x108957750;
  pbVar5 = (byte *)func_0x0001087c9084(lStack_30,uStack_28);
  pbVar9 = extraout_x1;
LAB_108957750:
  pbVar10 = (byte *)(ulong)*pbVar9;
  pbVar7 = (byte *)0x8;
  puVar11 = &UNK_108d9e35b;
  puVar12 = (undefined8 *)auStack_40;
  puVar2 = auStack_40;
  dVar17 = extraout_d0;
  switch(*pbVar9) {
  case 0:
    pbVar5[1] = pbVar9[1];
  case 0x22:
    *pbVar5 = 0;
    return pbVar5;
  case 1:
    *(ulong *)(pbVar5 + 8) = (ulong)pbVar9[1];
    *pbVar5 = 1;
    return pbVar5;
  case 2:
    *(ulong *)(pbVar5 + 8) = (ulong)*(ushort *)(pbVar9 + 2);
    *pbVar5 = 1;
    return pbVar5;
  case 3:
    *(ulong *)(pbVar5 + 8) = (ulong)*(uint *)(pbVar9 + 4);
    *pbVar5 = 1;
    return pbVar5;
  case 4:
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 8);
    *pbVar5 = 1;
    return pbVar5;
  case 5:
  case 0x1f:
    pbVar7 = (byte *)(long)(char)pbVar9[1];
  case 0x61:
  case 0x84:
  case 0x85:
  case 0xd4:
    *(byte **)(pbVar5 + 8) = pbVar7;
    *pbVar5 = 2;
    return pbVar5;
  case 6:
  case 0xaf:
    *(long *)(pbVar5 + 8) = (long)*(short *)(pbVar9 + 2);
    *pbVar5 = 2;
    return pbVar5;
  case 7:
  case 0x1a:
    pbVar7 = (byte *)(long)*(int *)(pbVar9 + 4);
  case 0xf3:
    *(byte **)(pbVar5 + 8) = pbVar7;
    *pbVar5 = 2;
    return pbVar5;
  case 8:
  case 0x7b:
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 8);
    pbVar7 = (byte *)0x2;
  case 0x25:
    *pbVar5 = (byte)pbVar7;
    return pbVar5;
  case 9:
    dVar17 = (double)*(float *)(pbVar9 + 4);
  case 0x21:
    *(double *)(pbVar5 + 8) = dVar17;
    *pbVar5 = 3;
    return pbVar5;
  case 10:
  case 0xa7:
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 8);
    *pbVar5 = 3;
    return pbVar5;
  case 0xb:
    pbVar7 = (byte *)(ulong)*(uint *)(pbVar9 + 4);
  case 0x24:
    *(int *)(pbVar5 + 4) = (int)pbVar7;
    pbVar7 = (byte *)0x4;
code_r0x000108957798:
    *pbVar5 = (byte)pbVar7;
    return pbVar5;
  case 0xc:
    lVar1 = *(long *)(pbVar9 + 0x18);
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 0x10);
    *(long *)(pbVar5 + 0x10) = lVar1;
    *pbVar5 = 5;
    return pbVar5;
  case 0xd:
    lVar1 = *(long *)(pbVar9 + 0x10);
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 8);
    *(long *)(pbVar5 + 0x10) = lVar1;
  case 0x18:
    pbVar7 = (byte *)0x5;
code_r0x000108957874:
    *pbVar5 = (byte)pbVar7;
    return pbVar5;
  case 0xe:
    lVar1 = *(long *)(pbVar9 + 0x18);
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 0x10);
    *(long *)(pbVar5 + 0x10) = lVar1;
    *pbVar5 = 6;
    return pbVar5;
  case 0xf:
    lVar1 = *(long *)(pbVar9 + 0x10);
    *(long *)(pbVar5 + 8) = *(long *)(pbVar9 + 8);
    *(long *)(pbVar5 + 0x10) = lVar1;
    *pbVar5 = 6;
    return pbVar5;
  case 0x10:
  case 0x11:
  case 0x16:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0xfe:
  case 0xff:
    *pbVar5 = 8;
    return pbVar5;
  case 0x12:
    *pbVar5 = 7;
    return pbVar5;
  case 0x13:
    *pbVar5 = 9;
    return pbVar5;
  case 0x14:
  case 0xab:
    *pbVar5 = 10;
    return pbVar5;
  case 0x15:
    *pbVar5 = 0xb;
    return pbVar5;
  case 0x17:
  case 0x35:
  case 0x46:
  case 0x54:
  case 0x58:
  case 100:
  case 0x6c:
  case 0x86:
  case 0x9f:
  case 0xc9:
  case 0xe5:
  case 0xed:
  case 0xfb:
    goto code_r0x000108957928;
  case 0x19:
    return pbVar5;
  case 0x1b:
    goto code_r0x00010895794c;
  case 0x1c:
    goto code_r0x0001089579a8;
  case 0x1d:
  case 0xa9:
  case 0xfc:
    goto code_r0x00010895790c;
  case 0x1e:
    goto code_r0x000108957a10;
  case 0x20:
    goto code_r0x0001089579c8;
  case 0x23:
    goto code_r0x000108957968;
  case 0x2c:
  case 0x42:
  case 0x7d:
  case 0xe3:
  case 0xf2:
    goto code_r0x000108957930;
  default:
    goto code_r0x000108957904;
  case 0x2e:
  case 0x40:
  case 0x57:
  case 0x5d:
  case 0x5e:
  case 0x60:
  case 0x67:
  case 0x6d:
  case 0x9c:
  case 0xb3:
  case 199:
  case 0xd0:
  case 0xd1:
  case 0xd3:
  case 0xd8:
  case 0xf0:
  case 0xf8:
    goto code_r0x000108957938;
  case 0x2f:
  case 0xcc:
    goto code_r0x000108957924;
  case 0x30:
  case 0x33:
  case 0x38:
  case 0x41:
  case 0x44:
  case 0x53:
  case 0xa8:
  case 0xac:
  case 0xb7:
  case 0xb9:
  case 0xcb:
  case 0xe6:
  case 0xfa:
    pbVar5 = (byte *)aiStack_38;
    pbVar9 = unaff_x21;
  case 0xa4:
  case 0xae:
  case 0xe8:
code_r0x000108957920:
    pbVar5 = (byte *)func_0x000108a4a50c(pbVar5,pbVar9);
code_r0x000108957924:
    unaff_x20 = pbVar5;
    goto code_r0x000108957928;
  case 0x31:
  case 0x32:
  case 0x36:
  case 0x3e:
  case 0x82:
  case 0x83:
  case 0xad:
    goto code_r0x00010895793c;
  case 0x34:
  case 0x45:
  case 0x5f:
  case 0x78:
  case 0x9b:
  case 0xd2:
  case 0xde:
  case 0xec:
  case 0xf1:
  case 0xf7:
    goto code_r0x00010895792c;
  case 0x37:
  case 0x39:
  case 0x43:
  case 0x4d:
  case 0x55:
  case 0x65:
  case 0x89:
  case 0xa2:
  case 0xb6:
  case 0xba:
  case 0xc3:
  case 0xca:
  case 0xd6:
  case 0xf9:
    goto code_r0x000108957940;
  case 0x3a:
  case 0x4c:
  case 0x5a:
  case 0x74:
  case 0x8d:
  case 0x93:
  case 0x94:
  case 0xbc:
  case 0xc0:
  case 0xc5:
  case 0xdd:
  case 0xe1:
    goto code_r0x000108957920;
  case 0x3c:
  case 0x47:
  case 0x69:
  case 0x79:
  case 0x96:
  case 0xdb:
  case 0xea:
  case 0xef:
    goto code_r0x000108957900;
  case 0x3f:
  case 0x70:
  case 0x77:
  case 0x7f:
  case 0x80:
  case 0x91:
  case 0xb5:
  case 0xdf:
  case 0xe7:
    goto code_r0x0001089578fc;
  case 0x49:
  case 0x9a:
  case 0xc1:
    goto code_r0x000108957908;
  case 0x4a:
  case 0x59:
  case 0x6f:
  case 0x72:
  case 0x7c:
  case 0x8c:
  case 0x92:
  case 0xbd:
  case 0xc2:
  case 0xc4:
  case 0xda:
  case 0xe0:
  case 0xe4:
  case 0xf5:
    break;
  case 0x4b:
  case 0x6b:
  case 0x8e:
  case 200:
    goto code_r0x000108957944;
  case 0x5b:
  case 0x62:
  case 0x6a:
  case 0x76:
  case 0x90:
  case 0x97:
  case 0x9e:
  case 0xc6:
  case 0xce:
  case 0xd5:
  case 0xdc:
  case 0xe2:
  case 0xeb:
  case 0xee:
  case 0xf4:
    return pbVar5;
  case 0x71:
  case 0xaa:
  case 0xd7:
    goto code_r0x000108957910;
  case 0x73:
  case 0x98:
  case 0xb1:
  case 0xbe:
  case 0xf6:
    goto code_r0x0001089578f8;
  case 0x7e:
  case 0xb4:
    goto code_r0x000108957874;
  case 0x88:
  case 0xa1:
    goto code_r0x000108957950;
  case 0x8a:
  case 0xa3:
    break;
  case 0x8b:
  case 0xb8:
    goto code_r0x000108957948;
  case 0xa6:
  case 0xb0:
  case 0xbb:
    goto code_r0x000108957954;
  case 0xfd:
    goto code_r0x000108957798;
  }
  in_stack_00000000 = puVar15;
  in_stack_00000008 = puVar16;
code_r0x0001089578f8:
  puVar15 = (undefined1 *)register0x00000008;
code_r0x0001089578fc:
  unaff_x20 = param_3;
code_r0x000108957900:
  unaff_x21 = pbVar9;
code_r0x000108957904:
  unaff_x19 = pbVar5;
code_r0x000108957908:
  pbVar5 = (byte *)aiStack_38;
code_r0x00010895790c:
  pbVar9 = unaff_x19;
  unaff_x19 = pbVar9;
code_r0x000108957910:
  puVar16 = &UNK_108957914;
  goto LAB_108957750;
code_r0x000108957928:
  pbVar5 = unaff_x19;
code_r0x00010895792c:
  func_0x0001039fac2c(pbVar5);
code_r0x000108957930:
  pbVar5 = unaff_x20;
code_r0x000108957938:
code_r0x00010895793c:
code_r0x000108957940:
code_r0x000108957944:
  return pbVar5;
code_r0x000108957948:
  unaff_x20 = pbVar5;
code_r0x00010895794c:
  pbVar5 = unaff_x19;
code_r0x000108957950:
  func_0x0001039fac2c(pbVar5);
code_r0x000108957954:
  __Unwind_Resume(unaff_x20);
  puVar16 = &DAT_108957960;
  pbVar5 = (byte *)func_0x000108a07bc4();
  puVar3 = (undefined8 *)auStack_e0;
code_r0x000108957968:
  puVar3[0xe] = unaff_x22;
  puVar3[0xf] = unaff_x21;
  puVar3[0x10] = unaff_x20;
  puVar3[0x11] = unaff_x19;
  puVar3[0x12] = puVar15;
  puVar3[0x13] = puVar16;
  *puVar3 = 0;
  puVar3[1] = 1;
  puVar3[5] = 0x60000020;
  puVar3[2] = 0;
  puVar3[3] = puVar3;
  puVar3[4] = &UNK_10b2ddc28;
  puVar12 = puVar3;
  pbVar7 = pbVar5;
  unaff_x19 = pbVar5;
code_r0x0001089579a8:
  pbVar7 = pbVar7 + 0x18;
  if (*(long *)pbVar7 == 0) {
    iVar4 = func_0x000105dc8000(unaff_x19,(undefined1 *)((long)puVar12 + 0x18));
    if (iVar4 != 0) goto code_r0x000108957a44;
  }
  else {
    pbVar10 = unaff_x19 + 0x20;
    *(byte **)((long)puVar12 + 0x30) = unaff_x19;
    *(undefined8 *)((long)puVar12 + 0x38) = 0x105dc8000;
    puVar11 = &
              __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puVar2 = (undefined1 *)puVar12;
code_r0x0001089579c8:
    puVar12 = (undefined8 *)puVar2;
    *(byte **)((long)puVar12 + 0x40) = pbVar7;
    *(undefined1 **)((long)puVar12 + 0x48) = puVar11;
    *(byte **)((long)puVar12 + 0x50) = pbVar10;
    *(undefined1 **)((long)puVar12 + 0x58) = puVar11;
    uVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                      (puVar12,&UNK_10b2ddc28,s_at_line_column_108b2e1dd,
                       (undefined1 *)((long)puVar12 + 0x30));
    if ((uVar6 & 1) != 0) {
code_r0x000108957a44:
      func_0x000108a07a3c(&UNK_108d9f498,0x37,(undefined1 *)((long)puVar12 + 0x30),&UNK_10b2deaf8,
                          &UNK_10b2deaa0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x108957a6c);
      (*pcVar8)();
    }
  }
  puVar12[7] = puVar12[1];
  puVar12[6] = *puVar12;
  puVar12[8] = puVar12[2];
  unaff_x20 = (byte *)__ZN10serde_json5error10make_error17h192c88b3464e8daaE(puVar12 + 6);
  pbVar7 = *(byte **)unaff_x19;
code_r0x000108957a10:
  if (pbVar7 == (byte *)0x1) {
    uVar6 = *(ulong *)(unaff_x19 + 8);
    if ((uVar6 & 3) != 1) goto code_r0x000108957a7c;
    puVar12 = (undefined8 *)(uVar6 - 1);
    uVar13 = *puVar12;
    puVar14 = *(undefined8 **)(uVar6 + 7);
    pcVar8 = (code *)*puVar14;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar13);
    }
    if (puVar14[1] != 0) {
      _free(uVar13);
    }
  }
  else {
    if ((pbVar7 != (byte *)0x0) || (*(long *)(unaff_x19 + 0x10) == 0)) goto code_r0x000108957a7c;
    puVar12 = *(undefined8 **)(unaff_x19 + 8);
  }
  _free(puVar12);
code_r0x000108957a7c:
  _free(unaff_x19);
  return unaff_x20;
}

