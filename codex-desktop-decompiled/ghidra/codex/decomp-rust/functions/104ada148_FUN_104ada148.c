
undefined1  [16] FUN_104ada148(byte *param_1,long param_2)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar5 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
      uVar11 = (ulong)uVar10;
      if ((char)*pbVar6 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar11 = (ulong)(pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            pbVar7 = pbVar6 + 3;
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
          }
          else {
            pbVar7 = pbVar6 + 4;
            uVar11 = (ulong)(pbVar6[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
          }
        }
      }
      pbVar9 = pbVar7 + ((long)pbVar8 - (long)pbVar6);
      uVar10 = (uint)uVar11;
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x80) goto joined_r0x000104ada280;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = (&
                    __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                    )[uVar11 & 0xff];
joined_r0x000104ada258:
            if ((bVar1 & 1) == 0) goto joined_r0x000104ada280;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x000104ada280;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)(&
                          __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                          )[uVar11 & 0xff] >> 1;
            goto joined_r0x000104ada258;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x000104ada280;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_104ada268:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x000104ada280:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_104ada268;
      pbVar5 = pbVar6 + -1;
      bVar1 = *pbVar5;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar5 = pbVar6 + -2;
        bVar2 = *pbVar5;
        if ((char)bVar2 < -0x40) {
          pbVar5 = pbVar6 + -3;
          bVar3 = *pbVar5;
          if ((char)bVar3 < -0x40) {
            pbVar5 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar5 & 7) << 6;
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
    if (uVar10 < 0x80) goto LAB_104ada378;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = (&__ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E)
                [uVar11 & 0xff];
joined_r0x000104ada374:
        if ((bVar1 & 1) == 0) {
LAB_104ada378:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_104ada378;
      goto joined_r0x000104ada280;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)(&
                    __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                    )[uVar11 & 0xff] >> 1;
      goto joined_r0x000104ada374;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_104ada378;
  } while( true );
}

