
void FUN_1034c22bc(ulong *param_1,long param_2,ulong param_3,byte *param_4,ulong param_5,
                  byte *param_6,ulong param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  long lVar67;
  ulong uVar68;
  undefined8 uVar69;
  ulong extraout_x1;
  ulong uVar70;
  ulong extraout_x8;
  byte *pbVar71;
  byte *pbVar72;
  long lVar73;
  ulong uVar74;
  long lVar75;
  ulong uVar76;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int aiStack_d0 [2];
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((param_5 == 1) && (param_7 == 1)) {
    if (-1 < (long)param_3) {
      if (param_3 == 0) {
        uVar74 = 1;
      }
      else {
        bVar2 = *param_4;
        bVar3 = *param_6;
        uVar74 = _malloc(param_3);
        if (uVar74 == 0) {
          uVar69 = func_0x0001087c9084(1,param_3);
          if (uStack_158 != 0) {
            _free(uStack_150);
          }
          uVar74 = __Unwind_Resume(uVar69);
          uVar68 = extraout_x8;
        }
        else if (param_3 < 8) {
          uVar68 = 0;
        }
        else {
          if (param_3 < 0x40) {
            uVar70 = 0;
LAB_1034c2544:
            uVar68 = param_3 & 0x7ffffffffffffff8;
            do {
              uVar76 = *(ulong *)(param_2 + uVar70);
              *(ulong *)(uVar74 + uVar70) =
                   uVar76 ^ (uVar76 ^ CONCAT17(bVar3,CONCAT16(bVar3,CONCAT15(bVar3,CONCAT14(bVar3,
                                                  CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3
                                                                                        )))))))) &
                            CONCAT17(-((byte)(uVar76 >> 0x38) == bVar2),
                                     CONCAT16(-((byte)(uVar76 >> 0x30) == bVar2),
                                              CONCAT15(-((byte)(uVar76 >> 0x28) == bVar2),
                                                       CONCAT14(-((byte)(uVar76 >> 0x20) == bVar2),
                                                                CONCAT13(-((byte)(uVar76 >> 0x18) ==
                                                                          bVar2),CONCAT12(-((byte)(
                                                  uVar76 >> 0x10) == bVar2),
                                                  CONCAT11(-((byte)(uVar76 >> 8) == bVar2),
                                                           -((byte)uVar76 == bVar2))))))));
              uVar70 = uVar70 + 8;
              if (uVar68 == uVar70) goto LAB_1034c25d8;
            } while( true );
          }
          uVar68 = param_3 & 0x7fffffffffffffc0;
          pbVar71 = (byte *)(uVar74 + 0x20);
          pbVar72 = (byte *)(param_2 + 0x20);
          uVar70 = uVar68;
          do {
            bVar1 = pbVar72[-0x20];
            bVar4 = pbVar72[-0x1f];
            bVar5 = pbVar72[-0x1e];
            bVar6 = pbVar72[-0x1d];
            bVar7 = pbVar72[-0x1c];
            bVar8 = pbVar72[-0x1b];
            bVar9 = pbVar72[-0x1a];
            bVar10 = pbVar72[-0x19];
            bVar11 = pbVar72[-0x18];
            bVar12 = pbVar72[-0x17];
            bVar13 = pbVar72[-0x16];
            bVar14 = pbVar72[-0x15];
            bVar15 = pbVar72[-0x14];
            bVar16 = pbVar72[-0x13];
            bVar17 = pbVar72[-0x12];
            bVar18 = pbVar72[-0x11];
            bVar19 = pbVar72[-0x10];
            bVar20 = pbVar72[-0xf];
            bVar21 = pbVar72[-0xe];
            bVar22 = pbVar72[-0xd];
            bVar23 = pbVar72[-0xc];
            bVar24 = pbVar72[-0xb];
            bVar25 = pbVar72[-10];
            bVar26 = pbVar72[-9];
            bVar27 = pbVar72[-8];
            bVar28 = pbVar72[-7];
            bVar29 = pbVar72[-6];
            bVar30 = pbVar72[-5];
            bVar31 = pbVar72[-4];
            bVar32 = pbVar72[-3];
            bVar33 = pbVar72[-2];
            bVar34 = pbVar72[-1];
            bVar35 = *pbVar72;
            bVar36 = pbVar72[1];
            bVar37 = pbVar72[2];
            bVar38 = pbVar72[3];
            bVar39 = pbVar72[4];
            bVar40 = pbVar72[5];
            bVar41 = pbVar72[6];
            bVar42 = pbVar72[7];
            bVar43 = pbVar72[8];
            bVar44 = pbVar72[9];
            bVar45 = pbVar72[10];
            bVar46 = pbVar72[0xb];
            bVar47 = pbVar72[0xc];
            bVar48 = pbVar72[0xd];
            bVar49 = pbVar72[0xe];
            bVar50 = pbVar72[0xf];
            bVar51 = pbVar72[0x10];
            bVar52 = pbVar72[0x11];
            bVar53 = pbVar72[0x12];
            bVar54 = pbVar72[0x13];
            bVar55 = pbVar72[0x14];
            bVar56 = pbVar72[0x15];
            bVar57 = pbVar72[0x16];
            bVar58 = pbVar72[0x17];
            bVar59 = pbVar72[0x18];
            bVar60 = pbVar72[0x19];
            bVar61 = pbVar72[0x1a];
            bVar62 = pbVar72[0x1b];
            bVar63 = pbVar72[0x1c];
            bVar64 = pbVar72[0x1d];
            bVar65 = pbVar72[0x1e];
            bVar66 = pbVar72[0x1f];
            pbVar71[-0x18] = bVar11 ^ (bVar11 ^ bVar3) & -(bVar11 == bVar2);
            pbVar71[-0x17] = bVar12 ^ (bVar12 ^ bVar3) & -(bVar12 == bVar2);
            pbVar71[-0x16] = bVar13 ^ (bVar13 ^ bVar3) & -(bVar13 == bVar2);
            pbVar71[-0x15] = bVar14 ^ (bVar14 ^ bVar3) & -(bVar14 == bVar2);
            pbVar71[-0x14] = bVar15 ^ (bVar15 ^ bVar3) & -(bVar15 == bVar2);
            pbVar71[-0x13] = bVar16 ^ (bVar16 ^ bVar3) & -(bVar16 == bVar2);
            pbVar71[-0x12] = bVar17 ^ (bVar17 ^ bVar3) & -(bVar17 == bVar2);
            pbVar71[-0x11] = bVar18 ^ (bVar18 ^ bVar3) & -(bVar18 == bVar2);
            pbVar71[-0x20] = bVar1 ^ (bVar1 ^ bVar3) & -(bVar1 == bVar2);
            pbVar71[-0x1f] = bVar4 ^ (bVar4 ^ bVar3) & -(bVar4 == bVar2);
            pbVar71[-0x1e] = bVar5 ^ (bVar5 ^ bVar3) & -(bVar5 == bVar2);
            pbVar71[-0x1d] = bVar6 ^ (bVar6 ^ bVar3) & -(bVar6 == bVar2);
            pbVar71[-0x1c] = bVar7 ^ (bVar7 ^ bVar3) & -(bVar7 == bVar2);
            pbVar71[-0x1b] = bVar8 ^ (bVar8 ^ bVar3) & -(bVar8 == bVar2);
            pbVar71[-0x1a] = bVar9 ^ (bVar9 ^ bVar3) & -(bVar9 == bVar2);
            pbVar71[-0x19] = bVar10 ^ (bVar10 ^ bVar3) & -(bVar10 == bVar2);
            pbVar71[-8] = bVar27 ^ (bVar27 ^ bVar3) & -(bVar27 == bVar2);
            pbVar71[-7] = bVar28 ^ (bVar28 ^ bVar3) & -(bVar28 == bVar2);
            pbVar71[-6] = bVar29 ^ (bVar29 ^ bVar3) & -(bVar29 == bVar2);
            pbVar71[-5] = bVar30 ^ (bVar30 ^ bVar3) & -(bVar30 == bVar2);
            pbVar71[-4] = bVar31 ^ (bVar31 ^ bVar3) & -(bVar31 == bVar2);
            pbVar71[-3] = bVar32 ^ (bVar32 ^ bVar3) & -(bVar32 == bVar2);
            pbVar71[-2] = bVar33 ^ (bVar33 ^ bVar3) & -(bVar33 == bVar2);
            pbVar71[-1] = bVar34 ^ (bVar34 ^ bVar3) & -(bVar34 == bVar2);
            pbVar71[-0x10] = bVar19 ^ (bVar19 ^ bVar3) & -(bVar19 == bVar2);
            pbVar71[-0xf] = bVar20 ^ (bVar20 ^ bVar3) & -(bVar20 == bVar2);
            pbVar71[-0xe] = bVar21 ^ (bVar21 ^ bVar3) & -(bVar21 == bVar2);
            pbVar71[-0xd] = bVar22 ^ (bVar22 ^ bVar3) & -(bVar22 == bVar2);
            pbVar71[-0xc] = bVar23 ^ (bVar23 ^ bVar3) & -(bVar23 == bVar2);
            pbVar71[-0xb] = bVar24 ^ (bVar24 ^ bVar3) & -(bVar24 == bVar2);
            pbVar71[-10] = bVar25 ^ (bVar25 ^ bVar3) & -(bVar25 == bVar2);
            pbVar71[-9] = bVar26 ^ (bVar26 ^ bVar3) & -(bVar26 == bVar2);
            pbVar71[8] = bVar43 ^ (bVar43 ^ bVar3) & -(bVar43 == bVar2);
            pbVar71[9] = bVar44 ^ (bVar44 ^ bVar3) & -(bVar44 == bVar2);
            pbVar71[10] = bVar45 ^ (bVar45 ^ bVar3) & -(bVar45 == bVar2);
            pbVar71[0xb] = bVar46 ^ (bVar46 ^ bVar3) & -(bVar46 == bVar2);
            pbVar71[0xc] = bVar47 ^ (bVar47 ^ bVar3) & -(bVar47 == bVar2);
            pbVar71[0xd] = bVar48 ^ (bVar48 ^ bVar3) & -(bVar48 == bVar2);
            pbVar71[0xe] = bVar49 ^ (bVar49 ^ bVar3) & -(bVar49 == bVar2);
            pbVar71[0xf] = bVar50 ^ (bVar50 ^ bVar3) & -(bVar50 == bVar2);
            *pbVar71 = bVar35 ^ (bVar35 ^ bVar3) & -(bVar35 == bVar2);
            pbVar71[1] = bVar36 ^ (bVar36 ^ bVar3) & -(bVar36 == bVar2);
            pbVar71[2] = bVar37 ^ (bVar37 ^ bVar3) & -(bVar37 == bVar2);
            pbVar71[3] = bVar38 ^ (bVar38 ^ bVar3) & -(bVar38 == bVar2);
            pbVar71[4] = bVar39 ^ (bVar39 ^ bVar3) & -(bVar39 == bVar2);
            pbVar71[5] = bVar40 ^ (bVar40 ^ bVar3) & -(bVar40 == bVar2);
            pbVar71[6] = bVar41 ^ (bVar41 ^ bVar3) & -(bVar41 == bVar2);
            pbVar71[7] = bVar42 ^ (bVar42 ^ bVar3) & -(bVar42 == bVar2);
            pbVar71[0x18] = bVar59 ^ (bVar59 ^ bVar3) & -(bVar59 == bVar2);
            pbVar71[0x19] = bVar60 ^ (bVar60 ^ bVar3) & -(bVar60 == bVar2);
            pbVar71[0x1a] = bVar61 ^ (bVar61 ^ bVar3) & -(bVar61 == bVar2);
            pbVar71[0x1b] = bVar62 ^ (bVar62 ^ bVar3) & -(bVar62 == bVar2);
            pbVar71[0x1c] = bVar63 ^ (bVar63 ^ bVar3) & -(bVar63 == bVar2);
            pbVar71[0x1d] = bVar64 ^ (bVar64 ^ bVar3) & -(bVar64 == bVar2);
            pbVar71[0x1e] = bVar65 ^ (bVar65 ^ bVar3) & -(bVar65 == bVar2);
            pbVar71[0x1f] = bVar66 ^ (bVar66 ^ bVar3) & -(bVar66 == bVar2);
            pbVar71[0x10] = bVar51 ^ (bVar51 ^ bVar3) & -(bVar51 == bVar2);
            pbVar71[0x11] = bVar52 ^ (bVar52 ^ bVar3) & -(bVar52 == bVar2);
            pbVar71[0x12] = bVar53 ^ (bVar53 ^ bVar3) & -(bVar53 == bVar2);
            pbVar71[0x13] = bVar54 ^ (bVar54 ^ bVar3) & -(bVar54 == bVar2);
            pbVar71[0x14] = bVar55 ^ (bVar55 ^ bVar3) & -(bVar55 == bVar2);
            pbVar71[0x15] = bVar56 ^ (bVar56 ^ bVar3) & -(bVar56 == bVar2);
            pbVar71[0x16] = bVar57 ^ (bVar57 ^ bVar3) & -(bVar57 == bVar2);
            pbVar71[0x17] = bVar58 ^ (bVar58 ^ bVar3) & -(bVar58 == bVar2);
            uVar70 = uVar70 - 0x40;
            pbVar71 = pbVar71 + 0x40;
            pbVar72 = pbVar72 + 0x40;
          } while (uVar70 != 0);
          if (param_3 == uVar68) goto LAB_1034c25e0;
          uVar70 = uVar68;
          if ((param_3 & 0x38) != 0) goto LAB_1034c2544;
        }
        do {
          bVar1 = bVar3;
          if (*(byte *)(param_2 + uVar68) != bVar2) {
            bVar1 = *(byte *)(param_2 + uVar68);
          }
          *(byte *)(uVar74 + uVar68) = bVar1;
          uVar68 = uVar68 + 1;
LAB_1034c25d8:
        } while (param_3 != uVar68);
      }
LAB_1034c25e0:
      *param_1 = param_3;
      param_1[1] = uVar74;
      param_1[2] = param_3;
      return;
    }
    func_0x0001087c9084(0,param_3);
  }
  uVar74 = 0;
  if (param_5 <= param_7) {
    uVar74 = param_3;
  }
  if ((long)uVar74 < 0) {
    func_0x0001087c9084(0);
    uVar74 = extraout_x1;
  }
  if (uVar74 != 0) {
    uVar68 = _malloc(uVar74);
    uStack_158 = param_3;
    if (uVar68 != 0) goto LAB_1034c2364;
    func_0x0001087c9084(1,uVar74);
  }
  uStack_158 = 0;
  uVar68 = 1;
LAB_1034c2364:
  lStack_148 = 0;
  uStack_150 = uVar68;
  __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
            (aiStack_d0,param_2,param_3,param_4,param_5);
  lVar73 = 0;
  uStack_e0 = uStack_70;
  uStack_f8 = uStack_88;
  uStack_100 = uStack_90;
  uStack_e8 = uStack_78;
  uStack_f0 = uStack_80;
  lStack_138 = lStack_c8;
  uStack_128 = uStack_b8;
  lStack_130 = lStack_c0;
  uStack_118 = uStack_a8;
  uStack_120 = uStack_b0;
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  lVar75 = 0;
  while (func_0x0001036324b0(aiStack_d0,auStack_140), lVar67 = lStack_c0, aiStack_d0[0] == 1) {
    uVar74 = lStack_c8 - lVar75;
    if (uStack_158 - lVar73 < uVar74) {
      FUN_10893e30c(&uStack_158,lVar73,uVar74,1,1);
      uVar68 = uStack_150;
      lVar73 = lStack_148;
    }
    uVar70 = uStack_158;
    _memcpy(uVar68 + lVar73,param_2 + lVar75,uVar74);
    lStack_148 = lVar73 + uVar74;
    if (uVar70 - lStack_148 < param_7) {
      FUN_10893e30c(&uStack_158,lStack_148,param_7,1,1);
      uVar68 = uStack_150;
    }
    lVar73 = lStack_148;
    _memcpy(uVar68 + lStack_148,param_6,param_7);
    lVar73 = lVar73 + param_7;
    lVar75 = lVar67;
    lStack_148 = lVar73;
  }
  param_3 = param_3 - lVar75;
  if (uStack_158 - lVar73 < param_3) {
    FUN_10893e30c(&uStack_158,lVar73,param_3,1,1);
    uVar68 = uStack_150;
    lVar73 = lStack_148;
  }
  _memcpy(uVar68 + lVar73,param_2 + lVar75,param_3);
  param_1[2] = lVar73 + param_3;
  param_1[1] = uStack_150;
  *param_1 = uStack_158;
  return;
}

