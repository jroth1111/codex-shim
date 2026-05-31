
long FUN_10002f03c(long param_1,ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  
  if (param_2 <= *(ulong *)(param_1 + 0x10)) {
    if (((param_2 != 0) && (param_2 < *(ulong *)(param_1 + 0x10))) &&
       (*(char *)(*(long *)(param_1 + 8) + param_2) < -0x40)) {
      auVar24 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c53386,0x30,&UNK_10b1d2fa0);
      puVar10 = auVar24._8_8_;
      pbVar4 = *(byte **)(auVar24._0_8_ + 8);
      pbVar14 = *(byte **)(auVar24._0_8_ + 0x10);
      uVar5 = *(uint *)(puVar10 + 2);
      if ((uVar5 & 0x18000000) != 0) {
        if ((uVar5 >> 0x1c & 1) == 0) {
          if (pbVar14 < (byte *)0x20) {
            if (pbVar14 == (byte *)0x0) {
              uVar11 = 0;
            }
            else {
              if ((byte *)0x7 < pbVar14) {
                pbVar12 = (byte *)((ulong)pbVar14 & 0x18);
                uVar16 = *(undefined8 *)pbVar4;
                uVar11 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 0x30)) & 1);
                uVar17 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 0x38)) & 1);
                uVar18 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 0x20)) & 1);
                uVar19 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 0x28)) & 1);
                uVar20 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 0x10)) & 1);
                uVar21 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 0x18)) & 1);
                uVar22 = (ulong)(-(-0x41 < (char)uVar16) & 1);
                uVar23 = (ulong)(-(-0x41 < (char)((ulong)uVar16 >> 8)) & 1);
                if (pbVar12 != (byte *)0x8) {
                  uVar16 = *(undefined8 *)(pbVar4 + 8);
                  uVar11 = uVar11 + (-(-0x41 < (char)((ulong)uVar16 >> 0x30)) & 1);
                  uVar17 = uVar17 + (-(-0x41 < (char)((ulong)uVar16 >> 0x38)) & 1);
                  uVar18 = uVar18 + (-(-0x41 < (char)((ulong)uVar16 >> 0x20)) & 1);
                  uVar19 = uVar19 + (-(-0x41 < (char)((ulong)uVar16 >> 0x28)) & 1);
                  uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar16 >> 0x10)) & 1);
                  uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar16 >> 0x18)) & 1);
                  uVar22 = uVar22 + (-(-0x41 < (char)uVar16) & 1);
                  uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar16 >> 8)) & 1);
                  if (pbVar12 != (byte *)0x10) {
                    uVar16 = *(undefined8 *)(pbVar4 + 0x10);
                    uVar11 = uVar11 + (-(-0x41 < (char)((ulong)uVar16 >> 0x30)) & 1);
                    uVar17 = uVar17 + (-(-0x41 < (char)((ulong)uVar16 >> 0x38)) & 1);
                    uVar18 = uVar18 + (-(-0x41 < (char)((ulong)uVar16 >> 0x20)) & 1);
                    uVar19 = uVar19 + (-(-0x41 < (char)((ulong)uVar16 >> 0x28)) & 1);
                    uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar16 >> 0x10)) & 1);
                    uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar16 >> 0x18)) & 1);
                    uVar22 = uVar22 + (-(-0x41 < (char)uVar16) & 1);
                    uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar16 >> 8)) & 1);
                  }
                }
                uVar11 = uVar22 + uVar18 + uVar20 + uVar11 + uVar23 + uVar19 + uVar21 + uVar17;
                goto LAB_1055b9000;
              }
              pbVar12 = (byte *)0x0;
              uVar11 = 0;
              do {
                if (-0x41 < (char)pbVar4[(long)pbVar12]) {
                  uVar11 = uVar11 + 1;
                }
                pbVar12 = pbVar12 + 1;
LAB_1055b9000:
              } while (pbVar14 != pbVar12);
            }
          }
          else {
            uVar11 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(pbVar4,pbVar14);
          }
        }
        else {
          uVar11 = (ulong)*(ushort *)((long)puVar10 + 0x16);
          if (uVar11 == 0) {
            pbVar14 = (byte *)0x0;
            uVar11 = 0;
          }
          else {
            pbVar12 = pbVar4 + (long)pbVar14;
            pbVar14 = (byte *)0x0;
            uVar17 = uVar11;
            pbVar13 = pbVar4;
            do {
              if (pbVar13 == pbVar12) break;
              bVar6 = *pbVar13;
              pbVar3 = pbVar13 + 3;
              if (0xef < bVar6) {
                pbVar3 = pbVar13 + 4;
              }
              pbVar2 = pbVar13 + 2;
              if (0xdf < bVar6) {
                pbVar2 = pbVar3;
              }
              pbVar3 = pbVar13 + 1;
              if (((int)(char)bVar6 & 0x80000000U) != 0) {
                pbVar3 = pbVar2;
              }
              pbVar14 = pbVar3 + ((long)pbVar14 - (long)pbVar13);
              uVar17 = uVar17 - 1;
              pbVar13 = pbVar3;
            } while (uVar17 != 0);
            uVar11 = uVar11 - uVar17;
          }
        }
        if (uVar11 < *(ushort *)((long)puVar10 + 0x14)) {
          uVar7 = (uint)*(ushort *)((long)puVar10 + 0x14) - (int)uVar11;
          uVar15 = uVar5 >> 0x1d & 3;
          uVar8 = uVar7 >> 1 & 0x7fff;
          if (uVar15 != 2) {
            uVar8 = 0;
          }
          uVar1 = 0;
          if (uVar15 != 0) {
            uVar1 = uVar7;
          }
          if (uVar15 < 2) {
            uVar8 = uVar1;
          }
          uVar15 = 0;
          uVar16 = *puVar10;
          lVar9 = puVar10[1];
          do {
            if ((uVar8 & 0xffff) <= (uVar15 & 0xffff)) {
              uVar11 = (**(code **)(lVar9 + 0x18))(uVar16,pbVar4,pbVar14);
              if ((uVar11 & 1) != 0) {
                return 1;
              }
              uVar15 = 0;
              do {
                if ((uVar7 - uVar8 & 0xffff) <= (uVar15 & 0xffff)) {
                  return 0;
                }
                uVar15 = uVar15 + 1;
                uVar11 = (**(code **)(lVar9 + 0x20))(uVar16,uVar5 & 0x1fffff);
              } while ((uVar11 & 1) == 0);
              return 1;
            }
            uVar15 = uVar15 + 1;
            uVar11 = (**(code **)(lVar9 + 0x20))(uVar16,uVar5 & 0x1fffff);
          } while ((uVar11 & 1) == 0);
          return 1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001055b9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar9 = (**(code **)(puVar10[1] + 0x18))(*puVar10,pbVar4,pbVar14);
      return lVar9;
    }
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  return param_1;
}

