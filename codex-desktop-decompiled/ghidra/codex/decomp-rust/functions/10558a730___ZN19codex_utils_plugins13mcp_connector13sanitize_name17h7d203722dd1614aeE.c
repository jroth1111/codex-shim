
/* WARNING: Type propagation algorithm not settling */

void __ZN19codex_utils_plugins13mcp_connector13sanitize_name17h7d203722dd1614aeE
               (ulong *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
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
  code *pcVar66;
  long lVar67;
  undefined2 *puVar68;
  undefined8 uVar69;
  ulong uVar70;
  ulong *extraout_x8;
  byte *pbVar71;
  long lVar72;
  byte *pbVar73;
  ulong uVar74;
  char *pcVar75;
  long lVar76;
  ulong *puVar77;
  char *pcVar78;
  uint uVar79;
  ulong *puVar80;
  byte *pbVar81;
  ulong uVar82;
  long lVar83;
  uint uVar84;
  ulong uVar85;
  undefined1 auVar86 [16];
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  auVar86._8_8_ = param_3;
  auVar86._0_8_ = param_2;
  if (param_3 < 0) {
    auVar86 = func_0x0001087c9084(0);
    param_1 = extraout_x8;
  }
  uVar82 = auVar86._8_8_;
  if (uVar82 == 0) {
    uStack_58 = 0;
    lStack_50 = 1;
    uStack_48 = 0;
LAB_10558a8e4:
    lVar67 = lStack_50;
    lVar72 = 0;
    do {
      lVar83 = lVar72;
      if (lVar83 == uStack_48) {
        lVar72 = 0;
        lVar83 = 0;
        uVar82 = uStack_48;
        break;
      }
      pbVar71 = (byte *)(lStack_50 + lVar83);
      pbVar73 = pbVar71 + 1;
      uVar79 = (uint)*pbVar71;
      if ((char)*pbVar71 < '\0') {
        if (uVar79 < 0xe0) {
          pbVar73 = pbVar71 + 2;
          uVar79 = pbVar71[1] & 0x3f | (uVar79 & 0x1f) << 6;
        }
        else {
          uVar84 = pbVar71[2] & 0x3f | (pbVar71[1] & 0x3f) << 6;
          if (uVar79 < 0xf0) {
            pbVar73 = pbVar71 + 3;
            uVar79 = uVar84 | (uVar79 & 0x1f) << 0xc;
          }
          else {
            pbVar73 = pbVar71 + 4;
            uVar79 = pbVar71[3] & 0x3f | uVar84 << 6 | (uVar79 & 7) << 0x12;
          }
        }
      }
      lVar72 = (long)pbVar73 - lStack_50;
      uVar82 = lVar72;
    } while (uVar79 == 0x2d);
    uVar70 = uStack_48;
    do {
      lVar76 = lVar72;
      if (uVar82 == uVar70) break;
      lVar76 = lStack_50 + uVar70;
      pbVar73 = (byte *)(lVar76 + -1);
      uVar79 = (uint)(char)*pbVar73;
      if ((int)uVar79 < 0) {
        pbVar73 = (byte *)(lVar76 + -2);
        bVar2 = *pbVar73;
        if ((char)bVar2 < -0x40) {
          pbVar73 = (byte *)(lVar76 + -3);
          bVar3 = *pbVar73;
          if ((char)bVar3 < -0x40) {
            pbVar73 = (byte *)(lVar76 + -4);
            uVar84 = bVar3 & 0x3f | (*pbVar73 & 7) << 6;
          }
          else {
            uVar84 = (int)(char)bVar3 & 0xf;
          }
          uVar84 = bVar2 & 0x3f | uVar84 << 6;
        }
        else {
          uVar84 = (int)(char)bVar2 & 0x1f;
        }
        uVar79 = uVar79 & 0x3f | uVar84 << 6;
      }
      lVar76 = uVar70;
      uVar70 = (long)pbVar73 - lStack_50;
    } while (uVar79 == 0x2d);
    uVar82 = lVar76 - lVar83;
    if (uVar82 == 0) {
      uVar82 = 3;
      puVar68 = (undefined2 *)_malloc(3);
      if (puVar68 == (undefined2 *)0x0) {
LAB_10558aba8:
        func_0x0001087c9084(1,uVar82);
        goto LAB_10558abb4;
      }
      *(undefined1 *)(puVar68 + 1) = 0x70;
      *puVar68 = 0x7061;
      uVar82 = 3;
    }
    else {
      puVar68 = (undefined2 *)_malloc(uVar82);
      if (puVar68 == (undefined2 *)0x0) goto LAB_10558aba8;
      _memcpy(puVar68,lVar67 + lVar83,uVar82);
    }
    if (uStack_58 != 0) {
      _free(lVar67);
    }
    if (-1 < (long)uVar82) {
      uVar70 = _malloc(uVar82);
      if (uVar70 != 0) {
        if (uVar82 < 8) {
          uVar74 = 0;
        }
        else {
          if (uVar82 < 0x40) {
            uVar85 = 0;
          }
          else {
            uVar74 = uVar82 & 0x7fffffffffffffc0;
            pbVar73 = (byte *)(puVar68 + 0x10);
            pbVar71 = (byte *)(uVar70 + 0x20);
            uVar85 = uVar74;
            do {
              bVar2 = pbVar73[-0x20];
              bVar3 = pbVar73[-0x1f];
              bVar4 = pbVar73[-0x1e];
              bVar5 = pbVar73[-0x1d];
              bVar6 = pbVar73[-0x1c];
              bVar7 = pbVar73[-0x1b];
              bVar8 = pbVar73[-0x1a];
              bVar9 = pbVar73[-0x19];
              bVar10 = pbVar73[-0x18];
              bVar11 = pbVar73[-0x17];
              bVar12 = pbVar73[-0x16];
              bVar13 = pbVar73[-0x15];
              bVar14 = pbVar73[-0x14];
              bVar15 = pbVar73[-0x13];
              bVar16 = pbVar73[-0x12];
              bVar17 = pbVar73[-0x11];
              bVar18 = pbVar73[-0x10];
              bVar19 = pbVar73[-0xf];
              bVar20 = pbVar73[-0xe];
              bVar21 = pbVar73[-0xd];
              bVar22 = pbVar73[-0xc];
              bVar23 = pbVar73[-0xb];
              bVar24 = pbVar73[-10];
              bVar25 = pbVar73[-9];
              bVar26 = pbVar73[-8];
              bVar27 = pbVar73[-7];
              bVar28 = pbVar73[-6];
              bVar29 = pbVar73[-5];
              bVar30 = pbVar73[-4];
              bVar31 = pbVar73[-3];
              bVar32 = pbVar73[-2];
              bVar33 = pbVar73[-1];
              bVar34 = *pbVar73;
              bVar35 = pbVar73[1];
              bVar36 = pbVar73[2];
              bVar37 = pbVar73[3];
              bVar38 = pbVar73[4];
              bVar39 = pbVar73[5];
              bVar40 = pbVar73[6];
              bVar41 = pbVar73[7];
              bVar42 = pbVar73[8];
              bVar43 = pbVar73[9];
              bVar44 = pbVar73[10];
              bVar45 = pbVar73[0xb];
              bVar46 = pbVar73[0xc];
              bVar47 = pbVar73[0xd];
              bVar48 = pbVar73[0xe];
              bVar49 = pbVar73[0xf];
              bVar50 = pbVar73[0x10];
              bVar51 = pbVar73[0x11];
              bVar52 = pbVar73[0x12];
              bVar53 = pbVar73[0x13];
              bVar54 = pbVar73[0x14];
              bVar55 = pbVar73[0x15];
              bVar56 = pbVar73[0x16];
              bVar57 = pbVar73[0x17];
              bVar58 = pbVar73[0x18];
              bVar59 = pbVar73[0x19];
              bVar60 = pbVar73[0x1a];
              bVar61 = pbVar73[0x1b];
              bVar62 = pbVar73[0x1c];
              bVar63 = pbVar73[0x1d];
              bVar64 = pbVar73[0x1e];
              bVar65 = pbVar73[0x1f];
              pbVar71[-0x18] = bVar10 ^ (bVar10 ^ 0x5f) & -(bVar10 == 0x2d);
              pbVar71[-0x17] = bVar11 ^ (bVar11 ^ 0x5f) & -(bVar11 == 0x2d);
              pbVar71[-0x16] = bVar12 ^ (bVar12 ^ 0x5f) & -(bVar12 == 0x2d);
              pbVar71[-0x15] = bVar13 ^ (bVar13 ^ 0x5f) & -(bVar13 == 0x2d);
              pbVar71[-0x14] = bVar14 ^ (bVar14 ^ 0x5f) & -(bVar14 == 0x2d);
              pbVar71[-0x13] = bVar15 ^ (bVar15 ^ 0x5f) & -(bVar15 == 0x2d);
              pbVar71[-0x12] = bVar16 ^ (bVar16 ^ 0x5f) & -(bVar16 == 0x2d);
              pbVar71[-0x11] = bVar17 ^ (bVar17 ^ 0x5f) & -(bVar17 == 0x2d);
              pbVar71[-0x20] = bVar2 ^ (bVar2 ^ 0x5f) & -(bVar2 == 0x2d);
              pbVar71[-0x1f] = bVar3 ^ (bVar3 ^ 0x5f) & -(bVar3 == 0x2d);
              pbVar71[-0x1e] = bVar4 ^ (bVar4 ^ 0x5f) & -(bVar4 == 0x2d);
              pbVar71[-0x1d] = bVar5 ^ (bVar5 ^ 0x5f) & -(bVar5 == 0x2d);
              pbVar71[-0x1c] = bVar6 ^ (bVar6 ^ 0x5f) & -(bVar6 == 0x2d);
              pbVar71[-0x1b] = bVar7 ^ (bVar7 ^ 0x5f) & -(bVar7 == 0x2d);
              pbVar71[-0x1a] = bVar8 ^ (bVar8 ^ 0x5f) & -(bVar8 == 0x2d);
              pbVar71[-0x19] = bVar9 ^ (bVar9 ^ 0x5f) & -(bVar9 == 0x2d);
              pbVar71[-8] = bVar26 ^ (bVar26 ^ 0x5f) & -(bVar26 == 0x2d);
              pbVar71[-7] = bVar27 ^ (bVar27 ^ 0x5f) & -(bVar27 == 0x2d);
              pbVar71[-6] = bVar28 ^ (bVar28 ^ 0x5f) & -(bVar28 == 0x2d);
              pbVar71[-5] = bVar29 ^ (bVar29 ^ 0x5f) & -(bVar29 == 0x2d);
              pbVar71[-4] = bVar30 ^ (bVar30 ^ 0x5f) & -(bVar30 == 0x2d);
              pbVar71[-3] = bVar31 ^ (bVar31 ^ 0x5f) & -(bVar31 == 0x2d);
              pbVar71[-2] = bVar32 ^ (bVar32 ^ 0x5f) & -(bVar32 == 0x2d);
              pbVar71[-1] = bVar33 ^ (bVar33 ^ 0x5f) & -(bVar33 == 0x2d);
              pbVar71[-0x10] = bVar18 ^ (bVar18 ^ 0x5f) & -(bVar18 == 0x2d);
              pbVar71[-0xf] = bVar19 ^ (bVar19 ^ 0x5f) & -(bVar19 == 0x2d);
              pbVar71[-0xe] = bVar20 ^ (bVar20 ^ 0x5f) & -(bVar20 == 0x2d);
              pbVar71[-0xd] = bVar21 ^ (bVar21 ^ 0x5f) & -(bVar21 == 0x2d);
              pbVar71[-0xc] = bVar22 ^ (bVar22 ^ 0x5f) & -(bVar22 == 0x2d);
              pbVar71[-0xb] = bVar23 ^ (bVar23 ^ 0x5f) & -(bVar23 == 0x2d);
              pbVar71[-10] = bVar24 ^ (bVar24 ^ 0x5f) & -(bVar24 == 0x2d);
              pbVar71[-9] = bVar25 ^ (bVar25 ^ 0x5f) & -(bVar25 == 0x2d);
              pbVar71[8] = bVar42 ^ (bVar42 ^ 0x5f) & -(bVar42 == 0x2d);
              pbVar71[9] = bVar43 ^ (bVar43 ^ 0x5f) & -(bVar43 == 0x2d);
              pbVar71[10] = bVar44 ^ (bVar44 ^ 0x5f) & -(bVar44 == 0x2d);
              pbVar71[0xb] = bVar45 ^ (bVar45 ^ 0x5f) & -(bVar45 == 0x2d);
              pbVar71[0xc] = bVar46 ^ (bVar46 ^ 0x5f) & -(bVar46 == 0x2d);
              pbVar71[0xd] = bVar47 ^ (bVar47 ^ 0x5f) & -(bVar47 == 0x2d);
              pbVar71[0xe] = bVar48 ^ (bVar48 ^ 0x5f) & -(bVar48 == 0x2d);
              pbVar71[0xf] = bVar49 ^ (bVar49 ^ 0x5f) & -(bVar49 == 0x2d);
              *pbVar71 = bVar34 ^ (bVar34 ^ 0x5f) & -(bVar34 == 0x2d);
              pbVar71[1] = bVar35 ^ (bVar35 ^ 0x5f) & -(bVar35 == 0x2d);
              pbVar71[2] = bVar36 ^ (bVar36 ^ 0x5f) & -(bVar36 == 0x2d);
              pbVar71[3] = bVar37 ^ (bVar37 ^ 0x5f) & -(bVar37 == 0x2d);
              pbVar71[4] = bVar38 ^ (bVar38 ^ 0x5f) & -(bVar38 == 0x2d);
              pbVar71[5] = bVar39 ^ (bVar39 ^ 0x5f) & -(bVar39 == 0x2d);
              pbVar71[6] = bVar40 ^ (bVar40 ^ 0x5f) & -(bVar40 == 0x2d);
              pbVar71[7] = bVar41 ^ (bVar41 ^ 0x5f) & -(bVar41 == 0x2d);
              pbVar71[0x18] = bVar58 ^ (bVar58 ^ 0x5f) & -(bVar58 == 0x2d);
              pbVar71[0x19] = bVar59 ^ (bVar59 ^ 0x5f) & -(bVar59 == 0x2d);
              pbVar71[0x1a] = bVar60 ^ (bVar60 ^ 0x5f) & -(bVar60 == 0x2d);
              pbVar71[0x1b] = bVar61 ^ (bVar61 ^ 0x5f) & -(bVar61 == 0x2d);
              pbVar71[0x1c] = bVar62 ^ (bVar62 ^ 0x5f) & -(bVar62 == 0x2d);
              pbVar71[0x1d] = bVar63 ^ (bVar63 ^ 0x5f) & -(bVar63 == 0x2d);
              pbVar71[0x1e] = bVar64 ^ (bVar64 ^ 0x5f) & -(bVar64 == 0x2d);
              pbVar71[0x1f] = bVar65 ^ (bVar65 ^ 0x5f) & -(bVar65 == 0x2d);
              pbVar71[0x10] = bVar50 ^ (bVar50 ^ 0x5f) & -(bVar50 == 0x2d);
              pbVar71[0x11] = bVar51 ^ (bVar51 ^ 0x5f) & -(bVar51 == 0x2d);
              pbVar71[0x12] = bVar52 ^ (bVar52 ^ 0x5f) & -(bVar52 == 0x2d);
              pbVar71[0x13] = bVar53 ^ (bVar53 ^ 0x5f) & -(bVar53 == 0x2d);
              pbVar71[0x14] = bVar54 ^ (bVar54 ^ 0x5f) & -(bVar54 == 0x2d);
              pbVar71[0x15] = bVar55 ^ (bVar55 ^ 0x5f) & -(bVar55 == 0x2d);
              pbVar71[0x16] = bVar56 ^ (bVar56 ^ 0x5f) & -(bVar56 == 0x2d);
              pbVar71[0x17] = bVar57 ^ (bVar57 ^ 0x5f) & -(bVar57 == 0x2d);
              uVar85 = uVar85 - 0x40;
              pbVar73 = pbVar73 + 0x40;
              pbVar71 = pbVar71 + 0x40;
            } while (uVar85 != 0);
            if (uVar82 == uVar74) goto LAB_10558ab84;
            uVar85 = uVar74;
            if ((uVar82 & 0x38) == 0) goto LAB_10558ab5c;
          }
          uVar74 = uVar82 & 0x7ffffffffffffff8;
          lVar67 = uVar85 - uVar74;
          puVar77 = (ulong *)(uVar70 + uVar85);
          puVar80 = (ulong *)((long)puVar68 + uVar85);
          do {
            uVar85 = *puVar80;
            *puVar77 = uVar85 ^ (uVar85 ^ 0x5f5f5f5f5f5f5f5f) &
                                CONCAT17(-((char)(uVar85 >> 0x38) == '-'),
                                         CONCAT16(-((char)(uVar85 >> 0x30) == '-'),
                                                  CONCAT15(-((char)(uVar85 >> 0x28) == '-'),
                                                           CONCAT14(-((char)(uVar85 >> 0x20) == '-')
                                                                    ,CONCAT13(-((char)(uVar85 >>
                                                                                      0x18) == '-'),
                                                                              CONCAT12(-((char)(
                                                  uVar85 >> 0x10) == '-'),
                                                  CONCAT11(-((char)(uVar85 >> 8) == '-'),
                                                           -((char)uVar85 == '-'))))))));
            lVar67 = lVar67 + 8;
            puVar77 = puVar77 + 1;
            puVar80 = puVar80 + 1;
          } while (lVar67 != 0);
          if (uVar82 == uVar74) goto LAB_10558ab84;
        }
LAB_10558ab5c:
        lVar67 = uVar82 - uVar74;
        pcVar75 = (char *)((long)puVar68 + uVar74);
        pcVar78 = (char *)(uVar70 + uVar74);
        do {
          cVar1 = '_';
          if (*pcVar75 != '-') {
            cVar1 = *pcVar75;
          }
          *pcVar78 = cVar1;
          lVar67 = lVar67 + -1;
          pcVar75 = pcVar75 + 1;
          pcVar78 = pcVar78 + 1;
        } while (lVar67 != 0);
LAB_10558ab84:
        *param_1 = uVar82;
        param_1[1] = uVar70;
        param_1[2] = uVar82;
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(puVar68);
        return;
      }
      goto LAB_10558abc4;
    }
    uVar69 = 0;
  }
  else {
    lVar67 = _malloc(uVar82);
    if (lVar67 != 0) {
      pbVar73 = (byte *)(auVar86._0_8_ + uVar82);
      uStack_48 = 0;
      lStack_50 = lVar67;
      do {
        while( true ) {
          uVar82 = uStack_48;
          uStack_58 = auVar86._8_8_;
          pbVar81 = auVar86._0_8_;
          pbVar71 = pbVar81 + 1;
          uVar79 = (uint)*pbVar81;
          if (-1 < (char)*pbVar81) break;
          if (uVar79 < 0xe0) {
            pbVar71 = pbVar81 + 2;
            uVar79 = pbVar81[1] & 0x3f | (uVar79 & 0x1f) << 6;
          }
          else {
            uVar84 = pbVar81[2] & 0x3f | (pbVar81[1] & 0x3f) << 6;
            if (0xef < uVar79) {
              pbVar71 = pbVar81 + 4;
              uVar79 = pbVar81[3] & 0x3f | uVar84 << 6 | (uVar79 & 7) << 0x12;
              break;
            }
            pbVar71 = pbVar81 + 3;
            uVar79 = uVar84 | (uVar79 & 0x1f) << 0xc;
          }
          if (0x40 < uVar79) goto LAB_10558a850;
LAB_10558a880:
          uVar84 = uVar79;
          if (9 < uVar79 - 0x30) goto LAB_10558a788;
LAB_10558a88c:
          if (uStack_48 == uStack_58) {
            func_0x000108a0544c(&uStack_58,uStack_48);
          }
          auVar86._8_8_ = uStack_58;
          auVar86._0_8_ = pbVar71;
          *(char *)(lStack_50 + uStack_48) = (char)uVar84;
          lVar67 = lStack_50;
joined_r0x00010558a7d0:
          uStack_48 = uVar82 + 1;
          lStack_50 = lVar67;
          if (pbVar71 == pbVar73) goto LAB_10558a8cc;
        }
        if (uVar79 < 0x41) goto LAB_10558a880;
LAB_10558a850:
        if (uVar79 < 0x5b || uVar79 - 0x61 < 0x1a) {
          uVar84 = uVar79 ^ 0x20;
          if (0x5a < uVar79) {
            uVar84 = uVar79;
          }
          goto LAB_10558a88c;
        }
LAB_10558a788:
        auVar86._8_8_ = uStack_58;
        auVar86._0_8_ = pbVar71;
        if (uStack_48 == uStack_58) {
          func_0x000108a0544c(&uStack_58,uStack_48);
          auVar86._8_8_ = uStack_58;
          *(undefined1 *)(lStack_50 + uStack_48) = 0x2d;
          lVar67 = lStack_50;
          goto joined_r0x00010558a7d0;
        }
        *(undefined1 *)(lVar67 + uStack_48) = 0x2d;
        uStack_48 = uStack_48 + 1;
      } while (pbVar71 != pbVar73);
LAB_10558a8cc:
      uStack_48 = uVar82 + 1;
      goto LAB_10558a8e4;
    }
    func_0x0001087c9084(1,uVar82);
LAB_10558abc4:
    uVar69 = 1;
  }
  func_0x0001087c9084(uVar69,uVar82);
LAB_10558abb4:
                    /* WARNING: Does not return */
  pcVar66 = (code *)SoftwareBreakpoint(1,0x10558abb8);
  (*pcVar66)();
}

