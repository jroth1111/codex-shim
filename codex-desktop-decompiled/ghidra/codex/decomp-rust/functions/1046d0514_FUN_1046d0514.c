
long FUN_1046d0514(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  
  pbVar7 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  if (param_2 != 0) {
    do {
      pbVar6 = param_1 + 1;
      uVar10 = (uint)*param_1;
      uVar11 = (ulong)uVar10;
      if ((char)*param_1 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar6 = param_1 + 2;
          uVar11 = (ulong)(param_1[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            pbVar6 = param_1 + 3;
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
          }
          else {
            pbVar6 = param_1 + 4;
            uVar11 = (ulong)(param_1[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
          }
        }
      }
      pbVar9 = pbVar8 + ((long)pbVar6 - (long)param_1);
      uVar10 = (uint)uVar11;
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x80) goto joined_r0x0001046d0638;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = (&
                    __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                    )[uVar11 & 0xff];
joined_r0x0001046d0620:
            if ((bVar1 & 1) == 0) goto joined_r0x0001046d0638;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x0001046d0638;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)(&
                          __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                          )[uVar11 & 0xff] >> 1;
            goto joined_r0x0001046d0620;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x0001046d0638;
        }
      }
      param_1 = pbVar6;
      pbVar8 = pbVar9;
      if (pbVar6 == pbVar7) {
        return 0;
      }
    } while( true );
  }
  pbVar9 = pbVar8;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
joined_r0x0001046d0638:
  do {
    do {
      pbVar5 = pbVar7;
      if (pbVar6 == pbVar5) goto LAB_1046d0738;
      pbVar7 = pbVar5 + -1;
      bVar1 = *pbVar7;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar7 = pbVar5 + -2;
        bVar2 = *pbVar7;
        if ((char)bVar2 < -0x40) {
          pbVar7 = pbVar5 + -3;
          bVar3 = *pbVar7;
          if ((char)bVar3 < -0x40) {
            pbVar7 = pbVar5 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar7 & 7) << 6;
          }
          else {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        else {
          uVar10 = (int)(char)bVar2 & 0x1f;
        }
        uVar11 = (ulong)((int)(char)bVar1 & 0x3fU | uVar10 << 6);
      }
      uVar10 = (uint)uVar11;
    } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
    if (uVar10 < 0x80) goto LAB_1046d0730;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = (&__ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E)
                [uVar11 & 0xff];
joined_r0x0001046d072c:
        if ((bVar1 & 1) == 0) {
LAB_1046d0730:
          pbVar9 = pbVar5 + ((long)pbVar9 - (long)pbVar6);
LAB_1046d0738:
          return (long)pbVar9 - (long)pbVar8;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_1046d0730;
      goto joined_r0x0001046d0638;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)(&
                    __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                    )[uVar11 & 0xff] >> 1;
      goto joined_r0x0001046d072c;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_1046d0730;
  } while( true );
}

