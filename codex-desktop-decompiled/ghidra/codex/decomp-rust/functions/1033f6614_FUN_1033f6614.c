
void FUN_1033f6614(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    return;
  }
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
    if ((4 < uVar7 - 9) && (uVar7 != 0x20)) {
      if (uVar7 < 0x80) {
        return;
      }
      uVar4 = uVar7 >> 8;
      if (uVar4 < 0x20) {
        if (uVar4 == 0) {
          bVar1 = (&__ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                  )[uVar8 & 0xff];
joined_r0x0001033f670c:
          if ((bVar1 & 1) == 0) {
            return;
          }
        }
        else {
          if (uVar4 != 0x16) {
            return;
          }
          if (uVar7 != 0x1680) {
            return;
          }
        }
      }
      else {
        if (uVar4 == 0x20) {
          bVar1 = (byte)(&
                        __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                        )[uVar8 & 0xff] >> 1;
          goto joined_r0x0001033f670c;
        }
        if (uVar4 != 0x30) {
          return;
        }
        if (uVar7 != 0x3000) {
          return;
        }
      }
    }
    pbVar5 = pbVar6;
    if (param_1 == pbVar6) {
      return;
    }
  } while( true );
}

