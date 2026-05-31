
byte ** FUN_105ab3f7c(byte *param_1,undefined8 *param_2,undefined8 param_3,
                     code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  byte **ppbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 *unaff_x21;
  code *unaff_x22;
  long unaff_x23;
  byte *pbStack_80;
  byte *pbStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_59;
  byte **ppbStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppbVar2 = (byte **)(param_1 + 1);
  uVar5 = (ulong)*param_1;
  puVar4 = param_2;
  switch(*param_1) {
  case 0:
  case 0xc:
  case 0x18:
    unaff_x19 = (byte *)*param_2;
    unaff_x23 = param_2[1];
    unaff_x22 = *(code **)(unaff_x23 + 0x18);
    puVar4 = (undefined8 *)&UNK_109b15edc;
    unaff_x21 = param_2;
    pbStack_80 = (byte *)ppbVar2;
  case 0x1c:
    uVar5 = (*unaff_x22)(unaff_x19,puVar4,5);
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)unaff_x21 + 0x12) < '\0') {
code_r0x000105ab4188:
        param_2 = (undefined8 *)&UNK_108f5892f;
code_r0x000105ab4190:
        ppbVar2 = (byte **)unaff_x19;
        unaff_x19 = (byte *)ppbVar2;
code_r0x000105ab4194:
        uVar5 = (*unaff_x22)(ppbVar2,param_2,2);
        unaff_x20 = (byte *)0x1;
        if ((uVar5 & 1) == 0) {
          uStack_59 = 1;
          puStack_68 = &uStack_59;
          uStack_48 = unaff_x21[2];
          ppbStack_58 = &pbStack_78;
          puStack_50 = &UNK_10b392408;
          pbStack_78 = unaff_x19;
          lStack_70 = unaff_x23;
          iVar1 = func_0x000105aab4a0(&pbStack_80,&ppbStack_58);
          if (iVar1 == 0) {
code_r0x000105ab4234:
            uVar5 = __ZN68__LT_core__fmt__builders__PadAdapter_u20_as_u20_core__fmt__Write_GT_9write_str17h0a67632c7cefcdb4E
                              (&pbStack_78,&UNK_108f5892c,2);
            if ((uVar5 & 1) == 0) goto code_r0x000105ab424c;
          }
          goto code_r0x000105ab40bc;
        }
      }
      else {
code_r0x000105ab3fe0:
        uVar5 = (*unaff_x22)(unaff_x19,&UNK_108f5892e,1);
        unaff_x20 = (byte *)0x1;
        if ((uVar5 & 1) == 0) {
          uVar5 = func_0x000105aab4a0(&pbStack_80,unaff_x21);
          if ((uVar5 & 1) != 0) goto code_r0x000105ab40bc;
code_r0x000105ab424c:
          unaff_x20 = (byte *)(*unaff_x22)(unaff_x19,&UNK_108f58934,1);
        }
      }
    }
    else {
code_r0x000105ab40bc:
      unaff_x20 = (byte *)0x1;
    }
code_r0x000105ab40c0:
    ppbVar2 = (byte **)unaff_x20;
code_r0x000105ab40d0:
    return ppbVar2;
  case 1:
  case 0x5b:
  case 0x5d:
  case 0xa0:
  case 0xfc:
  case 0xfe:
    pbStack_80 = (byte *)ppbVar2;
  case 0x9e:
  case 0xb0:
  case 0xb1:
  case 0xb8:
  case 0xb9:
    unaff_x19 = (byte *)*param_2;
    unaff_x23 = param_2[1];
    unaff_x21 = param_2;
code_r0x000105ab40a0:
    unaff_x22 = *(code **)(unaff_x23 + 0x18);
code_r0x000105ab40a4:
    ppbVar2 = (byte **)(*unaff_x22)(unaff_x19,&UNK_108c61050,4);
code_r0x000105ab40b8:
    if (((ulong)ppbVar2 & 1) != 0) goto code_r0x000105ab40bc;
code_r0x000105ab4150:
    uVar5 = (ulong)*(byte *)((long)unaff_x21 + 0x12);
code_r0x000105ab4154:
    if ((uint)uVar5 >> 7 != 0) {
      uVar5 = (*unaff_x22)(unaff_x19,&UNK_108f5892f,2);
      unaff_x20 = (byte *)0x1;
      if ((uVar5 & 1) != 0) goto code_r0x000105ab40c0;
      uStack_59 = 1;
      puStack_68 = &uStack_59;
      uStack_48 = unaff_x21[2];
      ppbStack_58 = &pbStack_78;
      puStack_50 = &UNK_10b392408;
      pbStack_78 = unaff_x19;
      lStack_70 = unaff_x23;
      iVar1 = func_0x000105aa8d84(&pbStack_80,&ppbStack_58);
      if (iVar1 != 0) goto code_r0x000105ab40bc;
      goto code_r0x000105ab4234;
    }
    param_2 = (undefined8 *)&UNK_108f5892e;
code_r0x000105ab4160:
    unaff_x20 = (byte *)0x1;
code_r0x000105ab4164:
    ppbVar2 = (byte **)unaff_x19;
    unaff_x19 = (byte *)ppbVar2;
code_r0x000105ab4168:
    param_3 = 1;
code_r0x000105ab416c:
    ppbVar2 = (byte **)(*unaff_x22)(ppbVar2,param_2,param_3);
code_r0x000105ab4170:
    uVar5 = (ulong)ppbVar2 & 1;
    ppbVar2 = &pbStack_80;
    if (uVar5 == 0) {
code_r0x000105ab4178:
      param_2 = unaff_x21;
code_r0x000105ab417c:
      ppbVar2 = (byte **)func_0x000105aa8d84(ppbVar2,param_2);
code_r0x000105ab4180:
      if (((ulong)ppbVar2 & 1) != 0) goto code_r0x000105ab40bc;
code_r0x000105ab4184:
      goto code_r0x000105ab424c;
    }
    goto code_r0x000105ab40c0;
  case 2:
    uVar5 = param_2[1];
  case 0x1b:
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18);
code_r0x000105ab405c:
code_r0x000105ab4064:
code_r0x000105ab4078:
code_r0x000105ab407c:
    break;
  case 3:
  case 0x36:
  case 0x4f:
  case 0x56:
  case 0x7b:
  case 0x7d:
  case 0x85:
  case 0x9b:
  case 0xd7:
  case 0xf0:
  case 0xf7:
    uVar5 = param_2[1];
  case 0x28:
  case 0x2e:
  case 0x35:
  case 0x3c:
  case 0x45:
  case 0x49:
  case 0x6a:
  case 0x87:
  case 0x8b:
  case 0x92:
  case 0xc9:
  case 0xcf:
  case 0xd6:
  case 0xdd:
  case 0xe6:
  case 0xea:
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18);
code_r0x000105ab4070:
code_r0x000105ab4074:
    goto code_r0x000105ab4078;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  case 0x27:
    break;
  case 5:
  case 0x11:
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
    break;
  case 6:
    uVar5 = param_2[1];
  case 0x12:
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18);
code_r0x000105ab4104:
    break;
  case 7:
  case 0x5c:
  case 0x86:
  case 0xfd:
    uVar5 = param_2[1];
  case 100:
  case 0x66:
  case 0x67:
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18);
code_r0x000105ab4088:
code_r0x000105ab408c:
code_r0x000105ab4090:
    break;
  case 8:
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  case 0xa6:
  case 0xab:
code_r0x000105ab4130:
code_r0x000105ab4134:
    break;
  case 9:
    uVar5 = param_2[1];
  case 0x10:
  case 0x1a:
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18);
    break;
  case 10:
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  case 0x16:
    break;
  case 0xb:
    uVar5 = param_2[1];
  case 0xe:
    UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18);
code_r0x000105ab4024:
    break;
  case 0xd:
    goto code_r0x000105ab4078;
  case 0xf:
    goto code_r0x000105ab40a4;
  case 0x13:
    goto code_r0x000105ab40c0;
  case 0x14:
    goto code_r0x000105ab4130;
  case 0x15:
    goto code_r0x000105ab405c;
  case 0x17:
    goto code_r0x000105ab4024;
  case 0x19:
  case 0x62:
    goto code_r0x000105ab4088;
  case 0x1d:
    goto code_r0x000105ab40a0;
  case 0x1e:
    goto code_r0x000105ab40b8;
  case 0x1f:
  case 0x7a:
  case 0x7e:
    goto code_r0x000105ab4070;
  case 0x20:
    goto code_r0x000105ab40d0;
  case 0x21:
    goto code_r0x000105ab3fe0;
  case 0x22:
  case 0x24:
  case 0x2b:
  case 0x33:
  case 0x3e:
  case 0x4d:
  case 0x54:
  case 0x78:
  case 0x8f:
  case 0xaf:
  case 0xb5:
  case 0xc3:
  case 200:
  case 0xcc:
  case 0xd4:
  case 0xdf:
  case 0xee:
  case 0xf5:
    goto code_r0x000105ab4144;
  case 0x23:
    goto code_r0x000105ab4188;
  case 0x25:
  case 0x31:
  case 0x32:
  case 0x4b:
  case 0x90:
  case 0xb6:
  case 0xd2:
  case 0xd3:
  case 0xec:
    goto code_r0x000105ab4168;
  case 0x26:
  case 0x42:
  case 0x53:
  case 0x71:
  case 0x72:
  case 0x91:
  case 0x98:
  case 0xa8:
  case 0xa9:
  case 0xb7:
  case 0xbf:
  case 0xe3:
  case 0xf4:
    goto code_r0x000105ab4180;
  case 0x29:
  case 0xca:
    goto code_r0x000105ab4104;
  case 0x2a:
  case 0x2d:
  case 0x41:
  case 0x46:
  case 0x55:
  case 0x88:
  case 0x95:
  case 0x9d:
  case 0xbc:
  case 0xc4:
  case 0xc5:
  case 0xcb:
  case 0xce:
  case 0xe2:
  case 0xe7:
  case 0xf6:
    goto code_r0x000105ab417c;
  default:
    goto code_r0x000105ab4178;
  case 0x30:
  case 0xd1:
    goto code_r0x000105ab4184;
  case 0x37:
  case 0x48:
  case 0x50:
  case 0x5e:
  case 0x61:
  case 0x75:
  case 0x8a:
  case 0x8c:
  case 0x99:
  case 0xac:
  case 0xb2:
  case 0xc0:
  case 0xd8:
  case 0xe9:
  case 0xf1:
  case 0xff:
    goto code_r0x000105ab413c;
  case 0x38:
  case 0x52:
  case 0x6c:
  case 0x6e:
  case 0x80:
  case 0x84:
  case 0x97:
  case 0xa3:
  case 0xa5:
  case 0xbe:
  case 0xc6:
  case 0xd9:
  case 0xf3:
    goto code_r0x000105ab4134;
  case 0x3a:
  case 0x3f:
  case 199:
  case 0xdb:
  case 0xe0:
    goto code_r0x000105ab414c;
  case 0x3b:
  case 0x58:
  case 0x76:
  case 0xad:
  case 0xdc:
  case 0xf9:
    goto code_r0x000105ab416c;
  case 0x40:
  case 0x4a:
  case 0x57:
  case 0x8e:
  case 0x94:
  case 0xb4:
  case 0xbb:
  case 0xe1:
  case 0xeb:
  case 0xf8:
    goto code_r0x000105ab4154;
  case 0x44:
  case 0xe5:
    goto code_r0x000105ab4194;
  case 0x4c:
  case 0x93:
  case 0xba:
  case 0xed:
    goto code_r0x000105ab4140;
  case 0x4e:
  case 0xef:
    goto code_r0x000105ab4190;
  case 0x59:
  case 0x6f:
  case 0x74:
  case 0x79:
  case 0x7f:
  case 0xfa:
    goto code_r0x000105ab4064;
  case 0x5a:
  case 0xa1:
  case 0xfb:
    goto code_r0x000105ab4074;
  case 0x5f:
  case 0x69:
    goto code_r0x000105ab4148;
  case 0x60:
    goto code_r0x000105ab4090;
  case 99:
  case 0x65:
    break;
  case 0x68:
    goto code_r0x000105ab408c;
  case 0x6d:
  case 0xa4:
  case 0xc2:
    goto code_r0x000105ab4164;
  case 0x70:
  case 0x83:
  case 0x9a:
  case 0xa7:
  case 0xc1:
    goto code_r0x000105ab4150;
  case 0x73:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xbd:
    goto code_r0x000105ab4170;
  case 0x7c:
  case 0x9f:
    goto code_r0x000105ab407c;
  case 0x81:
  case 0x8d:
  case 0xb3:
    goto code_r0x000105ab4160;
  }
code_r0x000105ab413c:
code_r0x000105ab4140:
code_r0x000105ab4144:
code_r0x000105ab4148:
code_r0x000105ab414c:
                    /* WARNING: Could not recover jumptable at 0x000105ab414c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar3 = (byte *)(*UNRECOVERED_JUMPTABLE)();
  return (byte **)pbVar3;
}

