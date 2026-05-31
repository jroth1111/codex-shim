
void FUN_10605336c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5,undefined8 param_6,undefined8 param_7,ulong *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *unaff_x19;
  ulong *puVar14;
  ulong *unaff_x21;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puStack_68;
  
  uVar7 = param_2[5];
  if (uVar7 != 0) {
    uVar20 = 0;
    uVar11 = param_2[3];
    puVar16 = (ulong *)param_2[4];
    uVar5 = *(uint *)(param_2 + 6);
    uVar9 = (ulong)uVar5;
    uVar10 = 0xffffffffffffffff >> (uVar5 * -8 & 0x38);
    puVar3 = (uint *)*param_2;
    uVar4 = param_2[1];
    puVar14 = (ulong *)param_2[2];
    uVar12 = uVar4 - uVar11;
    puVar1 = (uint *)((long)puVar3 + uVar11);
    uVar13 = uVar9 & 0xff;
    do {
      puVar15 = unaff_x19;
      if ((*(byte *)((long)param_2 + 0x34) & 1) != 0) {
        uVar23 = uVar7 - 1;
        puVar19 = (ulong *)((long)puVar16 + 1);
        bVar6 = (byte)*puVar16;
        if (3 < bVar6) {
          if (bVar6 < 6) {
            if (bVar6 == 4) {
              if (uVar7 == 1) goto LAB_106053e6c;
              uVar20 = 0;
              uVar24 = 0;
              unaff_x21 = (ulong *)0x0;
              while( true ) {
                bVar6 = *(byte *)((long)puVar16 + uVar20 + 1);
                if (((int)unaff_x21 == 0x3f) && (1 < bVar6)) goto LAB_106053e48;
                uVar24 = ((ulong)bVar6 & 0x7f) << ((ulong)unaff_x21 & 0x3f) | uVar24;
                if (-1 < (char)bVar6) break;
                unaff_x21 = (ulong *)(ulong)((int)unaff_x21 + 7);
                uVar20 = uVar20 + 1;
                if (uVar23 == uVar20) goto LAB_106053e64;
              }
              unaff_x21 = (ulong *)((long)puVar16 + uVar20 + 2);
              param_2[4] = (long)unaff_x21;
              param_2[5] = (uVar7 - uVar20) + -2;
              if (uVar7 - 2 == uVar20) goto LAB_106053f20;
              unaff_x21 = (ulong *)0x0;
              uVar25 = 0;
              uVar23 = uVar20;
              while( true ) {
                bVar6 = *(byte *)((long)puVar16 + uVar23 + 2);
                if (((int)uVar25 == 0x3f) && (1 < bVar6)) {
                  uVar20 = 0;
                  uVar9 = 0;
                  uVar24 = 6;
                  unaff_x21 = puStack_68;
                  goto LAB_106053f58;
                }
                unaff_x21 = (ulong *)(((ulong)bVar6 & 0x7f) << (uVar25 & 0x3f) | (ulong)unaff_x21);
                if (-1 < (char)bVar6) break;
                uVar25 = (ulong)((int)uVar25 + 7);
                uVar23 = uVar23 + 1;
                if (uVar7 - 2 == uVar23) {
                  lVar21 = (uVar7 - uVar20) + uVar20;
                  goto LAB_106053f1c;
                }
              }
              puVar19 = (ulong *)((long)puVar16 + uVar23 + 3);
              uVar7 = (uVar7 - uVar23) - 3;
              param_2[4] = (long)puVar19;
              param_2[5] = uVar7;
              uVar20 = uVar24 >> 0x10;
              puStack_68 = unaff_x21;
              goto LAB_106053c88;
            }
            if (bVar6 != 5) goto LAB_106053fac;
            uVar20 = 0;
            uVar2 = uVar5 & 0xff;
            if (uVar2 < 4) {
              if (uVar2 == 1) {
                if (uVar7 == 1) goto LAB_106053e6c;
                uVar7 = uVar7 - 2;
                puVar19 = (ulong *)((long)puVar16 + 2);
                param_2[4] = (long)puVar19;
                param_2[5] = uVar7;
                uVar20 = 0;
                unaff_x21 = (ulong *)(ulong)*(byte *)((long)puVar16 + 1);
              }
              else {
                uVar24 = 0x19;
                if (uVar2 != 2) goto LAB_106053f58;
                if (uVar23 < 2) goto LAB_106053e6c;
                uVar7 = uVar7 - 3;
                puVar19 = (ulong *)((long)puVar16 + 3);
                param_2[4] = (long)puVar19;
                param_2[5] = uVar7;
                uVar20 = 0;
                unaff_x21 = (ulong *)(ulong)*(ushort *)((long)puVar16 + 1);
              }
            }
            else if (uVar2 == 4) {
              if (uVar23 < 4) goto LAB_106053e6c;
              uVar7 = uVar7 - 5;
              puVar19 = (ulong *)((long)puVar16 + 5);
              param_2[4] = (long)puVar19;
              param_2[5] = uVar7;
              uVar20 = (ulong)(*(uint *)((long)puVar16 + 1) >> 0x10);
              unaff_x21 = (ulong *)(ulong)*(uint *)((long)puVar16 + 1);
            }
            else {
              uVar24 = 0x19;
              if (uVar2 != 8) goto LAB_106053f58;
              if (uVar23 < 8) goto LAB_106053e6c;
              uVar7 = uVar7 - 9;
              puVar19 = (ulong *)((long)puVar16 + 9);
              param_2[4] = (long)puVar19;
              param_2[5] = uVar7;
              unaff_x21 = (ulong *)(((ulong)*(uint *)((long)puVar16 + 1) << 8 |
                                    (ulong)*(uint3 *)((long)puVar16 + 5) << 0x28) >> 8 |
                                   (ulong)(byte)puVar16[1] << 0x38);
              uVar20 = (ulong)unaff_x21 >> 0x10;
            }
            goto LAB_10605363c;
          }
          if (bVar6 == 6) {
            uVar20 = 0;
            uVar2 = uVar5 & 0xff;
            if (uVar2 < 4) {
              if (uVar2 == 1) {
                if (uVar7 != 1) {
                  unaff_x21 = (ulong *)((long)puVar16 + 2);
                  param_2[4] = (long)unaff_x21;
                  param_2[5] = uVar7 - 2;
                  if (uVar7 - 2 == 0) goto LAB_106053f20;
                  puVar22 = (ulong *)(ulong)*(byte *)((long)puVar16 + 1);
                  uVar7 = uVar7 - 3;
                  puVar19 = (ulong *)((long)puVar16 + 3);
                  param_2[4] = (long)puVar19;
                  param_2[5] = uVar7;
                  puVar18 = (ulong *)(ulong)*(byte *)((long)puVar16 + 2);
LAB_106053b74:
                  uVar20 = (ulong)puVar22 >> 0x10;
                  unaff_x21 = puVar18;
                  goto LAB_106053ca0;
                }
              }
              else {
                uVar24 = 0x19;
                if (uVar2 != 2) goto LAB_106053f58;
                if (1 < uVar23) {
                  unaff_x21 = (ulong *)((long)puVar16 + 3);
                  param_2[4] = (long)unaff_x21;
                  param_2[5] = uVar7 - 3;
                  if (1 < uVar7 - 3) {
                    puVar22 = (ulong *)(ulong)*(ushort *)((long)puVar16 + 1);
                    uVar7 = uVar7 - 5;
                    puVar19 = (ulong *)((long)puVar16 + 5);
                    param_2[4] = (long)puVar19;
                    param_2[5] = uVar7;
                    puVar18 = (ulong *)(ulong)*(ushort *)((long)puVar16 + 3);
                    goto LAB_106053b74;
                  }
                  goto LAB_106053f20;
                }
              }
              goto LAB_106053e6c;
            }
            if (uVar2 != 4) {
              uVar24 = 0x19;
              if (uVar2 != 8) goto LAB_106053f58;
              if (7 < uVar23) {
                unaff_x21 = (ulong *)((long)puVar16 + 9);
                param_2[4] = (long)unaff_x21;
                param_2[5] = uVar7 - 9;
                if (7 < uVar7 - 9) {
                  puVar22 = *(ulong **)((long)puVar16 + 1);
                  uVar7 = uVar7 - 0x11;
                  puVar19 = (ulong *)((long)puVar16 + 0x11);
                  param_2[4] = (long)puVar19;
                  param_2[5] = uVar7;
                  puVar18 = (ulong *)(((ulong)*(uint *)((long)puVar16 + 9) << 8 |
                                      (ulong)*(uint3 *)((long)puVar16 + 0xd) << 0x28) >> 8 |
                                     (ulong)(byte)puVar16[2] << 0x38);
                  goto LAB_106053b74;
                }
                goto LAB_106053f20;
              }
              goto LAB_106053e6c;
            }
            if (uVar23 < 4) goto LAB_106053e6c;
            unaff_x21 = (ulong *)((long)puVar16 + 5);
            param_2[4] = (long)unaff_x21;
            param_2[5] = uVar7 - 5;
            if (3 < uVar7 - 5) {
              puVar22 = (ulong *)(ulong)*(uint *)((long)puVar16 + 1);
              uVar7 = uVar7 - 9;
              puVar19 = (ulong *)((long)puVar16 + 9);
              param_2[4] = (long)puVar19;
              param_2[5] = uVar7;
              puVar18 = (ulong *)(ulong)*(uint *)((long)puVar16 + 5);
              goto LAB_106053b74;
            }
            goto LAB_106053f20;
          }
          if (bVar6 != 7) goto LAB_106053fac;
          uVar20 = 0;
          uVar2 = uVar5 & 0xff;
          if (uVar2 < 4) {
            if (uVar2 == 1) {
              if (uVar7 != 1) {
                lVar21 = uVar7 - 2;
                puVar18 = (ulong *)((long)puVar16 + 2);
                param_2[4] = (long)puVar18;
                param_2[5] = lVar21;
                puVar22 = (ulong *)(ulong)*(byte *)((long)puVar16 + 1);
LAB_106053aac:
                if (lVar21 == 0) {
LAB_106053ea0:
                  uVar20 = 0;
                  uVar9 = 0;
                  uVar24 = 0x13;
                  unaff_x21 = puVar18;
                  goto LAB_106053f58;
                }
                unaff_x21 = (ulong *)0x0;
                uVar7 = 0;
                lVar17 = 1 - lVar21;
                puVar16 = puVar18;
                while( true ) {
                  puVar19 = (ulong *)((long)puVar16 + 1);
                  bVar6 = (byte)*puVar16;
                  if (((int)uVar7 == 0x3f) && (1 < bVar6)) {
                    uVar20 = 0;
                    uVar9 = 0;
                    param_2[4] = (long)puVar19;
                    uVar24 = 6;
                    unaff_x21 = param_5;
                    goto LAB_106053f58;
                  }
                  unaff_x21 = (ulong *)(((ulong)bVar6 & 0x7f) << (uVar7 & 0x3f) | (ulong)unaff_x21);
                  if (-1 < (char)bVar6) break;
                  uVar7 = (ulong)((int)uVar7 + 7);
                  lVar17 = lVar17 + 1;
                  puVar16 = puVar19;
                  if (lVar17 == 1) {
                    puVar18 = (ulong *)((long)puVar18 + lVar21);
                    param_2[4] = (long)puVar18;
                    param_2[5] = 0;
                    goto LAB_106053ea0;
                  }
                }
                uVar7 = -lVar17;
                param_2[4] = (long)puVar19;
                param_2[5] = uVar7;
                uVar20 = (ulong)puVar22 >> 0x10;
                puVar18 = (ulong *)((long)unaff_x21 + (long)puVar22 & uVar10);
                param_5 = unaff_x21;
                goto LAB_106053ca0;
              }
            }
            else {
              uVar24 = 0x19;
              if (uVar2 != 2) goto LAB_106053f58;
              if (1 < uVar23) {
                lVar21 = uVar7 - 3;
                puVar18 = (ulong *)((long)puVar16 + 3);
                param_2[4] = (long)puVar18;
                param_2[5] = lVar21;
                puVar22 = (ulong *)(ulong)*(ushort *)((long)puVar16 + 1);
                goto LAB_106053aac;
              }
            }
          }
          else if (uVar2 == 4) {
            if (3 < uVar23) {
              lVar21 = uVar7 - 5;
              puVar18 = (ulong *)((long)puVar16 + 5);
              param_2[4] = (long)puVar18;
              param_2[5] = lVar21;
              puVar22 = (ulong *)(ulong)*(uint *)((long)puVar16 + 1);
              goto LAB_106053aac;
            }
          }
          else {
            uVar24 = 0x19;
            if (uVar2 != 8) goto LAB_106053f58;
            if (7 < uVar23) {
              lVar21 = uVar7 - 9;
              puVar18 = (ulong *)((long)puVar16 + 9);
              param_2[4] = (long)puVar18;
              param_2[5] = lVar21;
              puVar22 = (ulong *)(((ulong)*(uint *)((long)puVar16 + 1) << 8 |
                                  (ulong)*(uint3 *)((long)puVar16 + 5) << 0x28) >> 8 |
                                 (ulong)(byte)puVar16[1] << 0x38);
              goto LAB_106053aac;
            }
          }
          goto LAB_106053e6c;
        }
        if (1 < bVar6) {
          if (bVar6 == 2) {
            if (uVar7 != 1) {
              uVar24 = 0;
              uVar20 = 0;
              unaff_x21 = (ulong *)0x0;
              while( true ) {
                bVar6 = *(byte *)((long)puVar16 + uVar24 + 1);
                if (((int)unaff_x21 == 0x3f) && (1 < bVar6)) goto LAB_106053e48;
                uVar20 = ((ulong)bVar6 & 0x7f) << ((ulong)unaff_x21 & 0x3f) | uVar20;
                if (-1 < (char)bVar6) break;
                unaff_x21 = (ulong *)(ulong)((int)unaff_x21 + 7);
                uVar24 = uVar24 + 1;
                if (uVar23 == uVar24) goto LAB_106053e58;
              }
              unaff_x21 = (ulong *)((long)puVar16 + uVar24 + 2);
              lVar21 = uVar7 - uVar24;
              param_2[4] = (long)unaff_x21;
              param_2[5] = lVar21 + -2;
              if (uVar7 - 2 == uVar24) goto LAB_106053f20;
              puVar15 = (ulong *)0x0;
              uVar25 = 0;
              uVar23 = uVar24;
              while( true ) {
                bVar6 = *(byte *)((long)puVar16 + uVar23 + 2);
                if (((int)uVar25 == 0x3f) && (1 < bVar6)) {
                  uVar20 = 0;
                  uVar9 = 0;
                  uVar24 = 6;
                  unaff_x21 = unaff_x19;
                  goto LAB_106053f58;
                }
                puVar15 = (ulong *)(((ulong)bVar6 & 0x7f) << (uVar25 & 0x3f) | (ulong)puVar15);
                if (-1 < (char)bVar6) break;
                uVar25 = (ulong)((int)uVar25 + 7);
                uVar23 = uVar23 + 1;
                if (uVar7 - 2 == uVar23) goto LAB_106053ebc;
              }
              puVar19 = (ulong *)((long)puVar16 + uVar23 + 3);
              uVar7 = (uVar7 - uVar23) - 3;
              param_2[4] = (long)puVar19;
              param_2[5] = uVar7;
              if (uVar4 < uVar11) goto LAB_106053fc8;
              uVar24 = uVar20 * uVar13;
              uVar23 = uVar12 - uVar24;
              if (uVar12 < uVar24) goto LAB_106053fb8;
              puVar8 = (uint *)((long)puVar1 + uVar24);
              uVar2 = uVar5 & 0xff;
              if (uVar2 < 4) {
                if (uVar2 == 1) {
                  if (uVar12 != uVar24) {
                    puVar22 = (ulong *)(ulong)(byte)*puVar8;
LAB_106053da0:
                    uVar24 = (long)puVar15 * uVar13;
                    uVar23 = uVar12 - uVar24;
                    if (uVar12 < uVar24) goto LAB_106053fb8;
                    uVar20 = uVar20 >> 0x10;
                    puVar8 = (uint *)((long)puVar1 + uVar24);
                    uVar2 = uVar5 & 0xff;
                    unaff_x21 = puVar15;
                    if (uVar2 < 4) {
                      if (uVar2 == 1) {
                        if (uVar12 == uVar24) goto LAB_106053fe4;
                        puVar18 = (ulong *)(ulong)(byte)*puVar8;
                      }
                      else {
                        if (uVar2 != 2) {
LAB_106053ff4:
                          uVar7 = (uVar9 & 0xff) << 8;
                          uVar11 = 0x19;
                          puVar8 = puVar3;
                          goto LAB_10605400c;
                        }
                        if (uVar23 < 2) goto LAB_106053fe4;
                        puVar18 = (ulong *)(ulong)(ushort)*puVar8;
                      }
                    }
                    else if (uVar2 == 4) {
                      if (uVar23 < 4) goto LAB_106053fe4;
                      puVar18 = (ulong *)(ulong)*puVar8;
                    }
                    else {
                      if (uVar2 != 8) goto LAB_106053ff4;
                      if (uVar23 < 8) goto LAB_106053fe4;
                      puVar18 = (ulong *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >>
                                          8 | (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
                    }
                    goto LAB_106053ca0;
                  }
                }
                else {
                  if (uVar2 != 2) goto LAB_106053ff4;
                  if (1 < uVar23) {
                    puVar22 = (ulong *)(ulong)(ushort)*puVar8;
                    goto LAB_106053da0;
                  }
                }
              }
              else if (uVar2 == 4) {
                if (3 < uVar23) {
                  puVar22 = (ulong *)(ulong)*puVar8;
                  goto LAB_106053da0;
                }
              }
              else {
                if (uVar2 != 8) goto LAB_106053ff4;
                if (7 < uVar23) {
                  puVar22 = (ulong *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                                     (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
                  goto LAB_106053da0;
                }
              }
LAB_106053fe4:
              uVar7 = 0;
              uVar11 = 0x13;
              goto LAB_10605400c;
            }
          }
          else {
            if (bVar6 != 3) goto LAB_106053fac;
            if (uVar7 != 1) {
              uVar24 = 0;
              uVar20 = 0;
              unaff_x21 = (ulong *)0x0;
              while( true ) {
                bVar6 = *(byte *)((long)puVar16 + uVar24 + 1);
                if (((int)unaff_x21 == 0x3f) && (1 < bVar6)) goto LAB_106053e48;
                uVar20 = ((ulong)bVar6 & 0x7f) << ((ulong)unaff_x21 & 0x3f) | uVar20;
                if (-1 < (char)bVar6) break;
                unaff_x21 = (ulong *)(ulong)((int)unaff_x21 + 7);
                uVar24 = uVar24 + 1;
                if (uVar23 == uVar24) goto LAB_106053e64;
              }
              unaff_x21 = (ulong *)((long)puVar16 + uVar24 + 2);
              lVar21 = uVar7 - uVar24;
              param_2[4] = (long)unaff_x21;
              param_2[5] = lVar21 + -2;
              if (uVar7 - 2 == uVar24) goto LAB_106053f20;
              unaff_x21 = (ulong *)0x0;
              uVar25 = 0;
              uVar23 = uVar24;
              while( true ) {
                bVar6 = *(byte *)((long)puVar16 + uVar23 + 2);
                if (((int)uVar25 == 0x3f) && (1 < bVar6)) {
                  uVar20 = 0;
                  uVar9 = 0;
                  uVar24 = 6;
                  unaff_x21 = param_8;
                  goto LAB_106053f58;
                }
                unaff_x21 = (ulong *)(((ulong)bVar6 & 0x7f) << (uVar25 & 0x3f) | (ulong)unaff_x21);
                if (-1 < (char)bVar6) break;
                uVar25 = (ulong)((int)uVar25 + 7);
                uVar23 = uVar23 + 1;
                if (uVar7 - 2 == uVar23) goto LAB_106053ebc;
              }
              puVar19 = (ulong *)((long)puVar16 + uVar23 + 3);
              uVar7 = (uVar7 - uVar23) - 3;
              param_2[4] = (long)puVar19;
              param_2[5] = uVar7;
              if (uVar4 < uVar11) goto LAB_106053fc8;
              uVar24 = uVar20 * uVar13;
              uVar23 = uVar12 - uVar24;
              if (uVar12 < uVar24) goto LAB_106053fb8;
              puVar8 = (uint *)((long)puVar1 + uVar24);
              uVar2 = uVar5 & 0xff;
              if (uVar2 < 4) {
                if (uVar2 == 1) {
                  if (uVar12 == uVar24) {
LAB_106054000:
                    uVar7 = 0;
                    uVar11 = 0x13;
                    goto LAB_10605400c;
                  }
                  puVar22 = (ulong *)(ulong)(byte)*puVar8;
                }
                else {
                  if (uVar2 != 2) goto LAB_106053ff4;
                  if (uVar23 < 2) goto LAB_106054000;
                  puVar22 = (ulong *)(ulong)(ushort)*puVar8;
                }
              }
              else if (uVar2 == 4) {
                if (uVar23 < 4) goto LAB_106054000;
                puVar22 = (ulong *)(ulong)*puVar8;
              }
              else {
                if (uVar2 != 8) goto LAB_106053ff4;
                if (uVar23 < 8) goto LAB_106054000;
                puVar22 = (ulong *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                                   (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
              }
              uVar20 = uVar20 >> 0x10;
              puVar18 = (ulong *)((long)puVar22 + (long)unaff_x21 & uVar10);
              param_8 = unaff_x21;
              goto LAB_106053ca0;
            }
          }
          goto LAB_106053e6c;
        }
        if (bVar6 == 1) {
          if (uVar7 == 1) goto LAB_106053e6c;
          uVar20 = 0;
          uVar23 = 0;
          unaff_x21 = (ulong *)(2 - uVar7);
          puVar19 = (ulong *)((long)puVar16 + 2);
          while( true ) {
            bVar6 = *(byte *)((long)puVar19 - 1);
            if (((int)uVar23 == 0x3f) && (1 < bVar6)) goto LAB_106053e48;
            uVar20 = ((ulong)bVar6 & 0x7f) << (uVar23 & 0x3f) | uVar20;
            if (-1 < (char)bVar6) break;
            puVar19 = (ulong *)((long)puVar19 + 1);
            uVar23 = (ulong)((int)uVar23 + 7);
            unaff_x21 = (ulong *)((long)unaff_x21 + 1);
            if (unaff_x21 == (ulong *)0x1) goto LAB_106053e58;
          }
          uVar7 = -(long)unaff_x21;
          param_2[4] = (long)puVar19;
          param_2[5] = uVar7;
          if (uVar4 < uVar11) {
LAB_106053fc8:
            uVar7 = 0;
            uVar11 = 0x13;
            puVar8 = puVar3;
          }
          else {
            uVar24 = uVar20 * uVar13;
            uVar23 = uVar12 - uVar24;
            if (uVar24 <= uVar12) {
              uVar20 = uVar20 >> 0x10;
              puVar8 = (uint *)((long)puVar1 + uVar24);
              uVar2 = uVar5 & 0xff;
              if (uVar2 < 4) {
                if (uVar2 == 1) {
                  if (uVar12 == uVar24) {
LAB_106053fd4:
                    uVar7 = 0;
                    uVar11 = 0x13;
                    goto LAB_10605400c;
                  }
                  unaff_x21 = (ulong *)(ulong)(byte)*puVar8;
                }
                else {
                  if (uVar2 != 2) goto LAB_106053ff4;
                  if (uVar23 < 2) goto LAB_106053fd4;
                  unaff_x21 = (ulong *)(ulong)(ushort)*puVar8;
                }
              }
              else if (uVar2 == 4) {
                if (uVar23 < 4) goto LAB_106053fd4;
                unaff_x21 = (ulong *)(ulong)*puVar8;
              }
              else {
                if (uVar2 != 8) goto LAB_106053ff4;
                if (uVar23 < 8) goto LAB_106053fd4;
                unaff_x21 = (ulong *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                                     (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
              }
              goto LAB_10605363c;
            }
LAB_106053fb8:
            uVar7 = 0;
            uVar11 = 0x13;
            puVar8 = puVar1;
          }
LAB_10605400c:
          param_1[1] = uVar11 | uVar7;
          param_1[2] = puVar8;
          goto LAB_106053f70;
        }
        if (bVar6 == 0) goto LAB_106053f9c;
LAB_106053fac:
        uVar20 = uVar20 << 8;
        uVar24 = 0x18;
        uVar9 = (ulong)bVar6;
        goto LAB_106053f58;
      }
      uVar2 = uVar5 & 0xff;
      unaff_x21 = (ulong *)(ulong)uVar2;
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          unaff_x21 = (ulong *)((long)puVar16 + 1);
          uVar24 = (ulong)(byte)*puVar16;
          param_2[4] = (long)unaff_x21;
          param_2[5] = uVar7 - 1;
          if (uVar7 - 1 == 0) {
LAB_106053eb4:
            uVar24 = 0x13;
            goto LAB_106053f4c;
          }
          uVar7 = uVar7 - 2;
          puVar19 = (ulong *)((long)puVar16 + 2);
          param_2[4] = (long)puVar19;
          param_2[5] = uVar7;
          unaff_x21 = (ulong *)(ulong)*(byte *)((long)puVar16 + 1);
        }
        else {
          if (uVar2 != 2) goto LAB_106053f40;
          if (uVar7 == 1) goto LAB_106053ec8;
          unaff_x21 = (ulong *)((long)puVar16 + 2);
          uVar24 = (ulong)(ushort)*puVar16;
          param_2[4] = (long)unaff_x21;
          param_2[5] = uVar7 - 2;
          if (uVar7 - 2 < 2) goto LAB_106053eb4;
          uVar7 = uVar7 - 4;
          puVar19 = (ulong *)((long)puVar16 + 4);
          param_2[4] = (long)puVar19;
          param_2[5] = uVar7;
          unaff_x21 = (ulong *)(ulong)*(ushort *)((long)puVar16 + 2);
        }
      }
      else if (uVar2 == 4) {
        if (uVar7 < 4) {
LAB_106053ec8:
          uVar24 = 0x13;
          unaff_x21 = puVar16;
          goto LAB_106053f4c;
        }
        unaff_x21 = (ulong *)((long)puVar16 + 4);
        uVar24 = (ulong)(uint)*puVar16;
        param_2[4] = (long)unaff_x21;
        param_2[5] = uVar7 - 4;
        if (uVar7 - 4 < 4) goto LAB_106053eb4;
        uVar7 = uVar7 - 8;
        puVar19 = puVar16 + 1;
        param_2[4] = (long)puVar19;
        param_2[5] = uVar7;
        unaff_x21 = (ulong *)(ulong)*(uint *)((long)puVar16 + 4);
      }
      else {
        if (uVar2 != 8) {
LAB_106053f40:
          uVar24 = (uVar9 & 0xff) << 8 | 0x19;
LAB_106053f4c:
          uVar20 = 0;
          uVar9 = uVar24 >> 8;
          uVar24 = uVar24 & 0xff;
          goto LAB_106053f58;
        }
        if (uVar7 < 8) goto LAB_106053ec8;
        unaff_x21 = puVar16 + 1;
        param_2[4] = (long)unaff_x21;
        param_2[5] = uVar7 - 8;
        if (uVar7 - 8 < 8) goto LAB_106053eb4;
        uVar24 = *puVar16;
        uVar7 = uVar7 - 0x10;
        puVar19 = puVar16 + 2;
        param_2[4] = (long)puVar19;
        param_2[5] = uVar7;
        unaff_x21 = (ulong *)(((ulong)(uint)puVar16[1] << 8 |
                              (ulong)*(uint3 *)((long)puVar16 + 0xc) << 0x28) >> 8 |
                             (ulong)*(byte *)((long)puVar16 + 0xf) << 0x38);
      }
      if (unaff_x21 == (ulong *)0x0 && uVar24 == 0) {
LAB_106053f9c:
        param_2[4] = 1;
        param_2[5] = 0;
        *param_1 = 0;
        return;
      }
      puVar16 = unaff_x21;
      if (uVar24 != uVar10) {
        puVar16 = (ulong *)uVar24;
      }
      uVar20 = (ulong)puVar16 >> 0x10;
      if (uVar24 != uVar10) {
LAB_106053c88:
        puVar16 = puVar19;
        if (puVar14 < (ulong *)(uVar10 & 0xfffffffffffffffe)) {
          puVar22 = (ulong *)(uVar24 + (long)puVar14 & uVar10);
          puVar18 = (ulong *)((long)unaff_x21 + (long)puVar14 & uVar10);
LAB_106053ca0:
          puVar16 = puVar19;
          if ((puVar22 < (ulong *)(uVar10 & 0xfffffffffffffffe)) && (puVar22 < puVar18)) {
            *param_1 = 1;
            param_1[1] = puVar22;
            param_1[2] = puVar18;
            return;
          }
        }
      }
      else {
LAB_10605363c:
        puVar14 = unaff_x21;
        param_2[2] = (long)puVar14;
        unaff_x21 = puVar14;
        puVar16 = puVar19;
      }
      unaff_x19 = puVar15;
    } while (uVar7 != 0);
  }
  *param_1 = 0;
  return;
LAB_106053ebc:
  lVar21 = lVar21 + uVar24;
LAB_106053f1c:
  unaff_x21 = (ulong *)((long)puVar16 + lVar21);
  param_2[4] = (long)unaff_x21;
  param_2[5] = 0;
LAB_106053f20:
  uVar20 = 0;
  uVar9 = 0;
  uVar24 = 0x13;
  goto LAB_106053f58;
LAB_106053e58:
  puVar19 = (ulong *)((long)puVar16 + uVar7);
  param_2[4] = (long)puVar19;
  goto LAB_106053e6c;
LAB_106053e48:
  uVar20 = 0;
  uVar9 = 0;
  uVar24 = 6;
  goto LAB_106053f58;
LAB_106053e64:
  puVar19 = (ulong *)((long)puVar16 + uVar7);
  param_2[4] = (long)puVar19;
  param_2[5] = 0;
LAB_106053e6c:
  uVar20 = 0;
  uVar24 = 0x13;
  unaff_x21 = puVar19;
  uVar9 = 0;
LAB_106053f58:
  param_2[4] = 1;
  param_2[5] = 0;
  param_1[1] = uVar24 | (uVar20 | uVar9 & 0xff) << 8;
  param_1[2] = unaff_x21;
LAB_106053f70:
  *param_1 = 2;
  return;
}

