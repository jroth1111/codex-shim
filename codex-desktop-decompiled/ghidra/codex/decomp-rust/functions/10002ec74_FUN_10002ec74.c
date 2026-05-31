
long FUN_10002ec74(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 != 0) {
    pbVar5 = param_1 + param_2;
    do {
      pbVar6 = pbVar5 + -1;
      bVar1 = *pbVar6;
      uVar8 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar6 = pbVar5 + -2;
        bVar2 = *pbVar6;
        if ((char)bVar2 < -0x40) {
          pbVar6 = pbVar5 + -3;
          bVar3 = *pbVar6;
          if ((char)bVar3 < -0x40) {
            pbVar6 = pbVar5 + -4;
            uVar7 = bVar3 & 0x3f | (*pbVar6 & 7) << 6;
          }
          else {
            uVar7 = (int)(char)bVar3 & 0xf;
          }
          uVar7 = bVar2 & 0x3f | uVar7 << 6;
        }
        else {
          uVar7 = (int)(char)bVar2 & 0x1f;
        }
        uVar8 = (ulong)((int)(char)bVar1 & 0x3fU | uVar7 << 6);
      }
      uVar7 = (uint)uVar8;
      if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) goto LAB_10002eca4;
      if (uVar7 < 0x80) goto LAB_10002ed70;
      uVar4 = uVar7 >> 8;
      if (uVar4 < 0x20) {
        if (uVar4 == 0) {
          bVar1 = (&__ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                  )[uVar8 & 0xff];
joined_r0x00010002ed6c:
          if ((bVar1 & 1) == 0) {
LAB_10002ed70:
            return (long)pbVar5 - (long)param_1;
          }
        }
        else if ((uVar4 != 0x16) || (uVar7 != 0x1680)) goto LAB_10002ed70;
      }
      else {
        if (uVar4 == 0x20) {
          bVar1 = (byte)(&
                        __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                        )[uVar8 & 0xff] >> 1;
          goto joined_r0x00010002ed6c;
        }
        if ((uVar4 != 0x30) || (uVar7 != 0x3000)) goto LAB_10002ed70;
      }
LAB_10002eca4:
      pbVar5 = pbVar6;
    } while (param_1 != pbVar6);
  }
  return 0;
}

