
undefined1  [16] FUN_1033f8ff0(long *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 auVar12 [16];
  
  pbVar1 = (byte *)param_1[1];
  pbVar11 = (byte *)param_1[4];
  pbVar5 = (byte *)param_1[6];
  bVar6 = *(byte *)((long)param_1 + 0x39);
  pbVar9 = (byte *)*param_1;
  while (pbVar10 = pbVar9, (bVar6 & 1) == 0) {
    pbVar4 = pbVar5;
    pbVar9 = pbVar11;
    if (pbVar11 == (byte *)param_1[5]) {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
    }
    else {
      do {
        pbVar11 = pbVar9 + 1;
        uVar7 = (uint)*pbVar9;
        uVar8 = (ulong)uVar7;
        if ((char)*pbVar9 < '\0') {
          if (uVar7 < 0xe0) {
            pbVar11 = pbVar9 + 2;
            uVar8 = (ulong)(pbVar9[1] & 0x3f | (uVar7 & 0x1f) << 6);
          }
          else {
            uVar2 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar7 < 0xf0) {
              pbVar11 = pbVar9 + 3;
              uVar8 = (ulong)(uVar2 | (uVar7 & 0x1f) << 0xc);
            }
            else {
              pbVar11 = pbVar9 + 4;
              uVar8 = (ulong)(pbVar9[3] & 0x3f | uVar2 << 6 | (uVar7 & 7) << 0x12);
            }
          }
        }
        pbVar5 = pbVar11 + ((long)pbVar4 - (long)pbVar9);
        uVar7 = (uint)uVar8;
        if (uVar7 < 0x21 && (1L << (uVar8 & 0x3f) & 0x100003e00U) != 0) {
LAB_1033f9024:
          bVar6 = 0;
          param_1[4] = (long)pbVar11;
          param_1[6] = (long)pbVar5;
          *param_1 = (long)pbVar5;
          pbVar9 = pbVar5;
          goto LAB_1033f9038;
        }
        if (0x7f < uVar7) {
          uVar2 = uVar7 >> 8;
          if (uVar2 < 0x20) {
            if (uVar2 == 0) {
              bVar6 = (&
                      __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                      )[uVar8 & 0xff];
joined_r0x0001033f9078:
              if ((bVar6 & 1) != 0) goto LAB_1033f9024;
            }
            else if ((uVar2 == 0x16) && (uVar7 == 0x1680)) goto LAB_1033f9024;
          }
          else {
            if (uVar2 == 0x20) {
              bVar6 = (byte)(&
                            __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                            )[uVar8 & 0xff] >> 1;
              goto joined_r0x0001033f9078;
            }
            if ((uVar2 == 0x30) && (uVar7 == 0x3000)) goto LAB_1033f9024;
          }
        }
        pbVar4 = pbVar5;
        pbVar9 = pbVar11;
      } while (pbVar11 != (byte *)param_1[5]);
      param_1[4] = (long)pbVar11;
      param_1[6] = (long)pbVar5;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
    }
    bVar6 = 1;
    pbVar4 = pbVar1;
    pbVar9 = pbVar10;
    if (((*(byte *)(param_1 + 7) & 1) == 0) && (bVar6 = 1, param_2 = pbVar1, pbVar1 == pbVar10))
    break;
LAB_1033f9038:
    param_2 = (byte *)0x0;
    if ((long)pbVar4 - (long)pbVar10 != 0) {
      auVar12._8_8_ = (long)pbVar4 - (long)pbVar10;
      auVar12._0_8_ = pbVar10 + param_1[2];
      return auVar12;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}

