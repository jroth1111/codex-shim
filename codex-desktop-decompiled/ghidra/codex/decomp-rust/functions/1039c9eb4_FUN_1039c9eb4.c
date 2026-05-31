
bool FUN_1039c9eb4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ushort uVar5;
  ulong uVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar13;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  long lVar21;
  byte bVar28;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  long lVar29;
  byte bVar37;
  ulong uVar30;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  long lVar38;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  long lVar46;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  long lVar54;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  long lVar62;
  byte bVar69;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  long lVar70;
  byte bVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined2 uStack_58;
  ulong uStack_50;
  
  if (param_2 == 0) {
    return false;
  }
  plVar4 = (long *)_malloc(param_2);
  if (plVar4 == (long *)0x0) {
    auVar78 = func_0x0001087c9084(1,param_2);
    uStack_60 = auVar78._8_8_;
    plStack_80 = auVar78._0_8_;
    if (5 < uStack_60) {
      if ((int)*plStack_80 == 0x3a707061 && *(short *)((long)plStack_80 + 4) == 0x2f2f) {
        return false;
      }
      if ((int)*plStack_80 == 0x3a70636d && *(short *)((long)plStack_80 + 4) == 0x2f2f) {
        return true;
      }
      if (uStack_60 < 9) {
        if (uStack_60 != 8) goto LAB_1039ca18c;
      }
      else if (*plStack_80 == 0x2f3a6e6967756c70 && (char)plStack_80[1] == '/') {
        return (bool)2;
      }
      if (*plStack_80 == 0x2f2f3a6c6c696b73) {
        return (bool)3;
      }
    }
LAB_1039ca18c:
    lStack_78 = (long)plStack_80 + uStack_60;
    uStack_98 = 0x5c0000002f;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 1;
    uStack_50 = param_2;
    auStack_90 = auVar78;
    auVar79 = func_0x0001039cef1c(&uStack_98);
    if (auVar79._0_8_ != 0) {
      auVar78 = auVar79;
    }
    pbVar7 = auVar78._0_8_;
    if (auVar78._8_8_ == 8) {
      uVar9 = 0x20;
      uVar1 = uVar9;
      if (0x19 < *pbVar7 - 0x41) {
        uVar1 = 0;
      }
      if ((uVar1 | *pbVar7) == 0x73) {
        if (0x19 < pbVar7[1] - 0x41) {
          uVar9 = 0;
        }
        if ((uVar9 | pbVar7[1]) == 0x6b) {
          uVar9 = 0x20;
          uVar1 = uVar9;
          if (0x19 < pbVar7[2] - 0x41) {
            uVar1 = 0;
          }
          if ((uVar1 | pbVar7[2]) == 0x69) {
            if (0x19 < pbVar7[3] - 0x41) {
              uVar9 = 0;
            }
            if ((uVar9 | pbVar7[3]) == 0x6c) {
              uVar9 = 0x20;
              uVar1 = uVar9;
              if (0x19 < pbVar7[4] - 0x41) {
                uVar1 = 0;
              }
              if ((uVar1 | pbVar7[4]) == 0x6c) {
                if (0x19 < pbVar7[5] - 0x41) {
                  uVar9 = 0;
                }
                if ((uVar9 | pbVar7[5]) == 0x2e) {
                  uVar9 = 0x20;
                  uVar1 = uVar9;
                  if (0x19 < pbVar7[6] - 0x41) {
                    uVar1 = 0;
                  }
                  if ((uVar1 | pbVar7[6]) == 0x6d) {
                    if (0x19 < pbVar7[7] - 0x41) {
                      uVar9 = 0;
                    }
                    if ((uVar9 | pbVar7[7]) == 100) {
                      return (bool)3;
                    }
                    return (bool)4;
                  }
                }
              }
            }
          }
        }
      }
    }
    return (bool)4;
  }
  _memcpy(plVar4,param_1,param_2);
  if (param_2 < 8) {
    uVar6 = 0;
LAB_1039c9fd8:
    lVar11 = param_2 - uVar6;
    pbVar7 = (byte *)((long)plVar4 + uVar6);
    do {
      bVar14 = 0x20;
      if (0x19 < *pbVar7 - 0x61) {
        bVar14 = 0;
      }
      *pbVar7 = bVar14 ^ *pbVar7;
      lVar11 = lVar11 + -1;
      pbVar7 = pbVar7 + 1;
    } while (lVar11 != 0);
  }
  else if (param_2 < 0x40) {
    uVar30 = 0;
LAB_1039c9f94:
    uVar6 = param_2 & 0xfffffffffffffff8;
    lVar11 = uVar30 - uVar6;
    puVar12 = (undefined8 *)((long)plVar4 + uVar30);
    do {
      uVar13 = *puVar12;
      bVar14 = (byte)((ulong)uVar13 >> 8);
      bVar15 = (byte)((ulong)uVar13 >> 0x10);
      bVar16 = (byte)((ulong)uVar13 >> 0x18);
      bVar17 = (byte)((ulong)uVar13 >> 0x20);
      bVar18 = (byte)((ulong)uVar13 >> 0x28);
      bVar19 = (byte)((ulong)uVar13 >> 0x30);
      bVar20 = (byte)((ulong)uVar13 >> 0x38);
      uVar30 = CONCAT17(-((byte)(bVar20 + 0x9f) < 0x1a),
                        CONCAT16(-((byte)(bVar19 + 0x9f) < 0x1a),
                                 CONCAT15(-((byte)(bVar18 + 0x9f) < 0x1a),
                                          CONCAT14(-((byte)(bVar17 + 0x9f) < 0x1a),
                                                   CONCAT13(-((byte)(bVar16 + 0x9f) < 0x1a),
                                                            CONCAT12(-((byte)(bVar15 + 0x9f) < 0x1a)
                                                                     ,CONCAT11(-((byte)(bVar14 + 
                                                  0x9f) < 0x1a),
                                                  -((byte)((byte)uVar13 + 0x9f) < 0x1a)))))))) &
               0x2020202020202020;
      *puVar12 = CONCAT17((byte)(uVar30 >> 0x38) ^ bVar20,
                          CONCAT16((byte)(uVar30 >> 0x30) ^ bVar19,
                                   CONCAT15((byte)(uVar30 >> 0x28) ^ bVar18,
                                            CONCAT14((byte)(uVar30 >> 0x20) ^ bVar17,
                                                     CONCAT13((byte)(uVar30 >> 0x18) ^ bVar16,
                                                              CONCAT12((byte)(uVar30 >> 0x10) ^
                                                                       bVar15,CONCAT11((byte)(uVar30
                                                                                             >> 8) ^
                                                                                       bVar14,(byte)
                                                  uVar30 ^ (byte)uVar13)))))));
      lVar11 = lVar11 + 8;
      puVar12 = puVar12 + 1;
    } while (lVar11 != 0);
    if (param_2 != uVar6) goto LAB_1039c9fd8;
  }
  else {
    uVar6 = param_2 & 0xffffffffffffffc0;
    plVar10 = plVar4 + 4;
    uVar30 = uVar6;
    do {
      lVar21 = plVar10[-3];
      lVar11 = plVar10[-4];
      lVar38 = plVar10[-1];
      lVar29 = plVar10[-2];
      lVar54 = plVar10[1];
      lVar46 = *plVar10;
      lVar70 = plVar10[3];
      lVar62 = plVar10[2];
      bVar14 = (byte)((ulong)lVar11 >> 8);
      bVar15 = (byte)((ulong)lVar11 >> 0x10);
      bVar16 = (byte)((ulong)lVar11 >> 0x18);
      bVar17 = (byte)((ulong)lVar11 >> 0x20);
      bVar18 = (byte)((ulong)lVar11 >> 0x28);
      bVar19 = (byte)((ulong)lVar11 >> 0x30);
      bVar20 = (byte)((ulong)lVar11 >> 0x38);
      bVar22 = (byte)((ulong)lVar21 >> 8);
      bVar23 = (byte)((ulong)lVar21 >> 0x10);
      bVar24 = (byte)((ulong)lVar21 >> 0x18);
      bVar25 = (byte)((ulong)lVar21 >> 0x20);
      bVar26 = (byte)((ulong)lVar21 >> 0x28);
      bVar27 = (byte)((ulong)lVar21 >> 0x30);
      bVar28 = (byte)((ulong)lVar21 >> 0x38);
      bVar31 = (byte)((ulong)lVar29 >> 8);
      bVar32 = (byte)((ulong)lVar29 >> 0x10);
      bVar33 = (byte)((ulong)lVar29 >> 0x18);
      bVar34 = (byte)((ulong)lVar29 >> 0x20);
      bVar35 = (byte)((ulong)lVar29 >> 0x28);
      bVar36 = (byte)((ulong)lVar29 >> 0x30);
      bVar37 = (byte)((ulong)lVar29 >> 0x38);
      bVar39 = (byte)((ulong)lVar38 >> 8);
      bVar40 = (byte)((ulong)lVar38 >> 0x10);
      bVar41 = (byte)((ulong)lVar38 >> 0x18);
      bVar42 = (byte)((ulong)lVar38 >> 0x20);
      bVar43 = (byte)((ulong)lVar38 >> 0x28);
      bVar44 = (byte)((ulong)lVar38 >> 0x30);
      bVar45 = (byte)((ulong)lVar38 >> 0x38);
      bVar47 = (byte)((ulong)lVar46 >> 8);
      bVar48 = (byte)((ulong)lVar46 >> 0x10);
      bVar49 = (byte)((ulong)lVar46 >> 0x18);
      bVar50 = (byte)((ulong)lVar46 >> 0x20);
      bVar51 = (byte)((ulong)lVar46 >> 0x28);
      bVar52 = (byte)((ulong)lVar46 >> 0x30);
      bVar53 = (byte)((ulong)lVar46 >> 0x38);
      bVar55 = (byte)((ulong)lVar54 >> 8);
      bVar56 = (byte)((ulong)lVar54 >> 0x10);
      bVar57 = (byte)((ulong)lVar54 >> 0x18);
      bVar58 = (byte)((ulong)lVar54 >> 0x20);
      bVar59 = (byte)((ulong)lVar54 >> 0x28);
      bVar60 = (byte)((ulong)lVar54 >> 0x30);
      bVar61 = (byte)((ulong)lVar54 >> 0x38);
      bVar63 = (byte)((ulong)lVar62 >> 8);
      bVar64 = (byte)((ulong)lVar62 >> 0x10);
      bVar65 = (byte)((ulong)lVar62 >> 0x18);
      bVar66 = (byte)((ulong)lVar62 >> 0x20);
      bVar67 = (byte)((ulong)lVar62 >> 0x28);
      bVar68 = (byte)((ulong)lVar62 >> 0x30);
      bVar69 = (byte)((ulong)lVar62 >> 0x38);
      bVar71 = (byte)((ulong)lVar70 >> 8);
      bVar72 = (byte)((ulong)lVar70 >> 0x10);
      bVar73 = (byte)((ulong)lVar70 >> 0x18);
      bVar74 = (byte)((ulong)lVar70 >> 0x20);
      bVar75 = (byte)((ulong)lVar70 >> 0x28);
      bVar76 = (byte)((ulong)lVar70 >> 0x30);
      bVar77 = (byte)((ulong)lVar70 >> 0x38);
      plVar10[-3] = CONCAT17(-((byte)(bVar28 + 0x9f) < 0x1a) & 0x20U ^ bVar28,
                             CONCAT16(-((byte)(bVar27 + 0x9f) < 0x1a) & 0x20U ^ bVar27,
                                      CONCAT15(-((byte)(bVar26 + 0x9f) < 0x1a) & 0x20U ^ bVar26,
                                               CONCAT14(-((byte)(bVar25 + 0x9f) < 0x1a) & 0x20U ^
                                                        bVar25,CONCAT13(-((byte)(bVar24 + 0x9f) <
                                                                         0x1a) & 0x20U ^ bVar24,
                                                                        CONCAT12(-((byte)(bVar23 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar23,
                                                  CONCAT11(-((byte)(bVar22 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar22,-((byte)((byte)lVar21 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar21)))))
                                     ));
      plVar10[-4] = CONCAT17(-((byte)(bVar20 + 0x9f) < 0x1a) & 0x20U ^ bVar20,
                             CONCAT16(-((byte)(bVar19 + 0x9f) < 0x1a) & 0x20U ^ bVar19,
                                      CONCAT15(-((byte)(bVar18 + 0x9f) < 0x1a) & 0x20U ^ bVar18,
                                               CONCAT14(-((byte)(bVar17 + 0x9f) < 0x1a) & 0x20U ^
                                                        bVar17,CONCAT13(-((byte)(bVar16 + 0x9f) <
                                                                         0x1a) & 0x20U ^ bVar16,
                                                                        CONCAT12(-((byte)(bVar15 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar15,
                                                  CONCAT11(-((byte)(bVar14 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar14,-((byte)((byte)lVar11 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar11)))))
                                     ));
      plVar10[-1] = CONCAT17(-((byte)(bVar45 + 0x9f) < 0x1a) & 0x20U ^ bVar45,
                             CONCAT16(-((byte)(bVar44 + 0x9f) < 0x1a) & 0x20U ^ bVar44,
                                      CONCAT15(-((byte)(bVar43 + 0x9f) < 0x1a) & 0x20U ^ bVar43,
                                               CONCAT14(-((byte)(bVar42 + 0x9f) < 0x1a) & 0x20U ^
                                                        bVar42,CONCAT13(-((byte)(bVar41 + 0x9f) <
                                                                         0x1a) & 0x20U ^ bVar41,
                                                                        CONCAT12(-((byte)(bVar40 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar40,
                                                  CONCAT11(-((byte)(bVar39 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar39,-((byte)((byte)lVar38 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar38)))))
                                     ));
      plVar10[-2] = CONCAT17(-((byte)(bVar37 + 0x9f) < 0x1a) & 0x20U ^ bVar37,
                             CONCAT16(-((byte)(bVar36 + 0x9f) < 0x1a) & 0x20U ^ bVar36,
                                      CONCAT15(-((byte)(bVar35 + 0x9f) < 0x1a) & 0x20U ^ bVar35,
                                               CONCAT14(-((byte)(bVar34 + 0x9f) < 0x1a) & 0x20U ^
                                                        bVar34,CONCAT13(-((byte)(bVar33 + 0x9f) <
                                                                         0x1a) & 0x20U ^ bVar33,
                                                                        CONCAT12(-((byte)(bVar32 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar32,
                                                  CONCAT11(-((byte)(bVar31 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar31,-((byte)((byte)lVar29 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar29)))))
                                     ));
      plVar10[1] = CONCAT17(-((byte)(bVar61 + 0x9f) < 0x1a) & 0x20U ^ bVar61,
                            CONCAT16(-((byte)(bVar60 + 0x9f) < 0x1a) & 0x20U ^ bVar60,
                                     CONCAT15(-((byte)(bVar59 + 0x9f) < 0x1a) & 0x20U ^ bVar59,
                                              CONCAT14(-((byte)(bVar58 + 0x9f) < 0x1a) & 0x20U ^
                                                       bVar58,CONCAT13(-((byte)(bVar57 + 0x9f) <
                                                                        0x1a) & 0x20U ^ bVar57,
                                                                       CONCAT12(-((byte)(bVar56 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar56,
                                                  CONCAT11(-((byte)(bVar55 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar55,-((byte)((byte)lVar54 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar54)))))
                                    ));
      *plVar10 = CONCAT17(-((byte)(bVar53 + 0x9f) < 0x1a) & 0x20U ^ bVar53,
                          CONCAT16(-((byte)(bVar52 + 0x9f) < 0x1a) & 0x20U ^ bVar52,
                                   CONCAT15(-((byte)(bVar51 + 0x9f) < 0x1a) & 0x20U ^ bVar51,
                                            CONCAT14(-((byte)(bVar50 + 0x9f) < 0x1a) & 0x20U ^
                                                     bVar50,CONCAT13(-((byte)(bVar49 + 0x9f) < 0x1a)
                                                                     & 0x20U ^ bVar49,
                                                                     CONCAT12(-((byte)(bVar48 + 0x9f
                                                                                      ) < 0x1a) &
                                                                              0x20U ^ bVar48,
                                                                              CONCAT11(-((byte)(
                                                  bVar47 + 0x9f) < 0x1a) & 0x20U ^ bVar47,
                                                  -((byte)((byte)lVar46 + 0x9f) < 0x1a) & 0x20U ^
                                                  (byte)lVar46)))))));
      plVar10[3] = CONCAT17(-((byte)(bVar77 + 0x9f) < 0x1a) & 0x20U ^ bVar77,
                            CONCAT16(-((byte)(bVar76 + 0x9f) < 0x1a) & 0x20U ^ bVar76,
                                     CONCAT15(-((byte)(bVar75 + 0x9f) < 0x1a) & 0x20U ^ bVar75,
                                              CONCAT14(-((byte)(bVar74 + 0x9f) < 0x1a) & 0x20U ^
                                                       bVar74,CONCAT13(-((byte)(bVar73 + 0x9f) <
                                                                        0x1a) & 0x20U ^ bVar73,
                                                                       CONCAT12(-((byte)(bVar72 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar72,
                                                  CONCAT11(-((byte)(bVar71 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar71,-((byte)((byte)lVar70 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar70)))))
                                    ));
      plVar10[2] = CONCAT17(-((byte)(bVar69 + 0x9f) < 0x1a) & 0x20U ^ bVar69,
                            CONCAT16(-((byte)(bVar68 + 0x9f) < 0x1a) & 0x20U ^ bVar68,
                                     CONCAT15(-((byte)(bVar67 + 0x9f) < 0x1a) & 0x20U ^ bVar67,
                                              CONCAT14(-((byte)(bVar66 + 0x9f) < 0x1a) & 0x20U ^
                                                       bVar66,CONCAT13(-((byte)(bVar65 + 0x9f) <
                                                                        0x1a) & 0x20U ^ bVar65,
                                                                       CONCAT12(-((byte)(bVar64 + 
                                                  0x9f) < 0x1a) & 0x20U ^ bVar64,
                                                  CONCAT11(-((byte)(bVar63 + 0x9f) < 0x1a) & 0x20U ^
                                                           bVar63,-((byte)((byte)lVar62 + 0x9f) <
                                                                   0x1a) & 0x20U ^ (byte)lVar62)))))
                                    ));
      uVar30 = uVar30 - 0x40;
      plVar10 = plVar10 + 8;
    } while (uVar30 != 0);
    if (param_2 != uVar6) {
      uVar30 = uVar6;
      if ((param_2 & 0x38) == 0) goto LAB_1039c9fd8;
      goto LAB_1039c9f94;
    }
  }
  bVar2 = false;
  if ((long)param_2 < 5) {
    if (param_2 == 3) {
      if ((short)*plVar4 != 0x5750 || *(char *)((long)plVar4 + 2) != 'D') {
        uVar8 = (ushort)*(byte *)((long)plVar4 + 2);
        bVar3 = (short)*plVar4 == 0x4d54;
        uVar5 = 0x50;
        goto LAB_1039ca14c;
      }
    }
    else {
      if (param_2 != 4) goto LAB_1039ca15c;
      if (((((int)*plVar4 != 0x48544150) && ((int)*plVar4 != 0x454d4f48)) &&
          ((int)*plVar4 != 0x52455355)) &&
         (((int)*plVar4 != 0x504d4554 && ((int)*plVar4 != 0x474e414c)))) {
        bVar2 = (int)*plVar4 == 0x4d524554;
        goto LAB_1039ca15c;
      }
    }
    bVar2 = true;
  }
  else {
    if (param_2 == 5) {
      uVar8 = (ushort)*(byte *)((long)plVar4 + 4);
      bVar3 = (int)*plVar4 == 0x4c454853;
      uVar5 = 0x4c;
    }
    else {
      if (param_2 != 6) {
        if (param_2 == 0xf) {
          bVar2 = *plVar4 == 0x464e4f435f474458 && *(long *)((long)plVar4 + 7) == 0x454d4f485f474946
          ;
        }
        goto LAB_1039ca15c;
      }
      uVar8 = *(ushort *)((long)plVar4 + 4);
      bVar3 = (int)*plVar4 == 0x44504d54;
      uVar5 = 0x5249;
    }
LAB_1039ca14c:
    bVar2 = false;
    if (bVar3) {
      bVar2 = uVar8 == uVar5;
    }
  }
LAB_1039ca15c:
  _free(plVar4);
  return bVar2;
}

