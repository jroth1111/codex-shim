
/* WARNING: Type propagation algorithm not settling */

void FUN_1004e18a8(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uStack_250;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lVar20 = *(long *)(param_2 + 0x10);
      lVar15 = *(long *)(param_2 + 0x18) * 0x40;
      lVar14 = lVar20 + lVar15;
      uStack_210 = 0x8000000000000002;
      bVar16 = 3;
      if (*(long *)(param_2 + 0x18) == 0) {
        uStack_250 = 0;
        uVar25 = 0x8000000000000000;
        uVar26 = 0x8000000000000001;
      }
      else {
        lVar22 = 0;
        uStack_250 = (lVar15 - 0x40U >> 6) + 1;
        bVar13 = 4;
        uVar26 = 0x8000000000000002;
        uVar25 = 0x8000000000000001;
        do {
          pbVar1 = (byte *)(lVar20 + lVar22);
          pbVar17 = pbVar1 + 0x20;
          bVar16 = *pbVar1;
          if (0xc < bVar16) {
            if (bVar16 == 0xd) {
              plVar2 = *(long **)(lVar20 + lVar22 + 8);
              lVar12 = *(long *)(lVar20 + lVar22 + 0x10);
joined_r0x0001004e19d0:
              if (lVar12 == 8) {
                if (*plVar2 != 0x6e6f697461636f6c) goto LAB_1004e1cdc;
LAB_1004e1e54:
                uVar9 = 2;
              }
              else if (lVar12 == 0xf) {
                if (*plVar2 != 0x5f6465776f6c6c61 ||
                    *(long *)((long)plVar2 + 7) != 0x736e69616d6f645f) goto LAB_1004e1cdc;
LAB_1004e1cb8:
                uVar9 = 1;
              }
              else {
                if ((lVar12 != 0xc) ||
                   (*plVar2 != 0x5f747865746e6f63 || *(int *)((long)plVar2 + 8) != 0x657a6973))
                goto LAB_1004e1cdc;
LAB_1004e1bc4:
                uVar9 = 0;
              }
              goto LAB_1004e1ce0;
            }
            if (bVar16 == 0xe) {
              pcVar10 = *(char **)(lVar20 + 0x10 + lVar22);
              lVar12 = *(long *)(lVar20 + 0x18 + lVar22);
joined_r0x0001004e1ab8:
              if (lVar12 == 8) {
                if (((((*pcVar10 == 'l') && (pcVar10[1] == 'o')) && (pcVar10[2] == 'c')) &&
                    ((pcVar10[3] == 'a' && (pcVar10[4] == 't')))) &&
                   ((pcVar10[5] == 'i' && ((pcVar10[6] == 'o' && (pcVar10[7] == 'n'))))))
                goto LAB_1004e1e54;
              }
              else if (lVar12 == 0xf) {
                if ((((((*pcVar10 == 'a') && (pcVar10[1] == 'l')) && (pcVar10[2] == 'l')) &&
                     ((pcVar10[3] == 'o' && (pcVar10[4] == 'w')))) &&
                    ((pcVar10[5] == 'e' && ((pcVar10[6] == 'd' && (pcVar10[7] == '_')))))) &&
                   ((pcVar10[8] == 'd' &&
                    ((((pcVar10[9] == 'o' && (pcVar10[10] == 'm')) && (pcVar10[0xb] == 'a')) &&
                     (((pcVar10[0xc] == 'i' && (pcVar10[0xd] == 'n')) && (pcVar10[0xe] == 's')))))))
                   ) goto LAB_1004e1cb8;
              }
              else if ((((lVar12 == 0xc) && (*pcVar10 == 'c')) &&
                       ((((pcVar10[1] == 'o' &&
                          (((pcVar10[2] == 'n' && (pcVar10[3] == 't')) && (pcVar10[4] == 'e')))) &&
                         ((pcVar10[5] == 'x' && (pcVar10[6] == 't')))) && (pcVar10[7] == '_')))) &&
                      (((pcVar10[8] == 's' && (pcVar10[9] == 'i')) &&
                       ((pcVar10[10] == 'z' && (pcVar10[0xb] == 'e')))))) goto LAB_1004e1bc4;
LAB_1004e1cdc:
              uVar9 = 3;
              goto LAB_1004e1ce0;
            }
            if (bVar16 == 0xf) {
              pcVar10 = *(char **)(lVar20 + 8 + lVar22);
              lVar12 = *(long *)(lVar20 + 0x10 + lVar22);
              goto joined_r0x0001004e1ab8;
            }
LAB_1004e1e5c:
            thunk_FUN_108855bf0(&uStack_140,pbVar1,&uStack_1a0,&UNK_10b214688);
            uVar9 = (uint)bStack_138;
            if (uStack_140 == 2) goto LAB_1004e1ce0;
            *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_118,uStack_11f);
            *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_120,uStack_127);
            *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_108,uStack_10f);
            *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_110,uStack_117);
            *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_f8,uStack_ff);
            *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_100,uStack_107);
            param_1[0xb] = uStack_f0;
            param_1[10] = CONCAT71(uStack_f7,uStack_f8);
            *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_128,uStack_12f);
            *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_130,uStack_137);
            *(byte *)(param_1 + 2) = bStack_138;
            *param_1 = 0x8000000000000001;
            param_1[1] = uStack_140;
            if (1 < uVar26 + 0x7fffffffffffffff) goto LAB_1004e2544;
LAB_1004e25a4:
            if (uVar25 == 0x8000000000000001) {
              return;
            }
            if (uVar25 == 0x8000000000000000) {
              return;
            }
            if (uStack_218 != 0) {
              puVar19 = (undefined8 *)(uStack_220 + 8);
              do {
                if (puVar19[-1] != 0) {
                  _free(*puVar19);
                }
                puVar19 = puVar19 + 3;
                uStack_218 = uStack_218 - 1;
              } while (uStack_218 != 0);
            }
            goto joined_r0x0001004e227c;
          }
          if (bVar16 == 1) {
            uVar9 = (uint)*(byte *)(lVar20 + lVar22 + 1);
            if (2 < uVar9) {
              uVar9 = 3;
            }
          }
          else {
            if (bVar16 != 4) {
              if (bVar16 != 0xc) goto LAB_1004e1e5c;
              plVar2 = *(long **)(lVar20 + lVar22 + 0x10);
              lVar12 = *(long *)(lVar20 + lVar22 + 0x18);
              goto joined_r0x0001004e19d0;
            }
            uVar11 = *(ulong *)(lVar20 + lVar22 + 8);
            if (2 < uVar11) {
              uVar11 = 3;
            }
            uVar9 = (uint)uVar11;
          }
LAB_1004e1ce0:
          uVar9 = uVar9 & 0xff;
          if (1 < uVar9) {
            if (uVar9 != 2) goto LAB_1004e198c;
            if (uVar26 == 0x8000000000000002) {
              bVar16 = *pbVar17;
              uVar26 = 0x8000000000000001;
              if (bVar16 != 0x10) {
                if (bVar16 == 0x11) {
                  pbVar17 = *(byte **)(lVar20 + lVar22 + 0x28);
                }
                else if (bVar16 == 0x12) goto LAB_1004e194c;
                FUN_10144b068(&uStack_140,pbVar17);
                uVar26 = uStack_140;
                if (uStack_140 == 0x8000000000000002) {
                  uStack_158 = uStack_f0;
                  uStack_150 = uStack_e8;
                  param_1[6] = CONCAT71(uStack_10f,uStack_110);
                  param_1[5] = CONCAT71(uStack_117,uStack_118);
                  param_1[8] = CONCAT71(uStack_ff,uStack_100);
                  param_1[7] = CONCAT71(uStack_107,uStack_108);
                  param_1[10] = uStack_f0;
                  param_1[9] = CONCAT71(uStack_f7,uStack_f8);
                  param_1[0xb] = uStack_e8;
                  param_1[2] = CONCAT71(uStack_12f,uStack_130);
                  param_1[1] = CONCAT71(uStack_137,bStack_138);
                  param_1[4] = CONCAT71(uStack_11f,uStack_120);
                  param_1[3] = CONCAT71(uStack_127,uStack_128);
                  *param_1 = 0x8000000000000001;
                  goto LAB_1004e25a4;
                }
              }
LAB_1004e194c:
              uStack_1e0 = CONCAT71(uStack_10f,uStack_110);
              uStack_1e8 = CONCAT71(uStack_117,uStack_118);
              uStack_1d0 = CONCAT71(uStack_ff,uStack_100);
              uStack_1d8 = CONCAT71(uStack_107,uStack_108);
              uStack_1c8 = CONCAT71(uStack_f7,uStack_f8);
              uStack_158 = uStack_f0;
              uStack_150 = uStack_e8;
              uStack_200 = CONCAT71(uStack_12f,uStack_130);
              uStack_208 = CONCAT71(uStack_137,bStack_138);
              uStack_1f0 = CONCAT71(uStack_11f,uStack_120);
              uStack_1f8 = CONCAT71(uStack_127,uStack_128);
              uStack_1c0 = uStack_f0;
              uStack_1b8 = uStack_e8;
              uStack_1a0 = uStack_208;
              uStack_198 = uStack_200;
              goto LAB_1004e198c;
            }
            uStack_210 = uVar26;
            thunk_FUN_1087e4364(&uStack_140,&UNK_108c57da0,8);
            param_1[6] = CONCAT71(uStack_117,uStack_118);
            param_1[5] = CONCAT71(uStack_11f,uStack_120);
            param_1[8] = CONCAT71(uStack_107,uStack_108);
            param_1[7] = CONCAT71(uStack_10f,uStack_110);
            param_1[10] = CONCAT71(uStack_f7,uStack_f8);
            param_1[9] = CONCAT71(uStack_ff,uStack_100);
            param_1[2] = CONCAT71(uStack_137,bStack_138);
            param_1[1] = uStack_140;
            param_1[0xb] = uStack_f0;
            param_1[4] = CONCAT71(uStack_127,uStack_128);
            param_1[3] = CONCAT71(uStack_12f,uStack_130);
            *param_1 = 0x8000000000000001;
            if (uVar26 == 0x8000000000000001) goto LAB_1004e25a4;
LAB_1004e2544:
            if ((uVar26 != 0x8000000000000000) && (uVar26 != 0)) {
              _free(uStack_208);
            }
            if ((uStack_1f8 != 0x8000000000000000) && (uStack_1f8 != 0)) {
              _free(uStack_1f0);
            }
            if ((uStack_1e0 != 0x8000000000000000) && (uStack_1e0 != 0)) {
              _free(uStack_1d8);
            }
            if ((uStack_1c8 != 0x8000000000000000) && (uStack_1c8 != 0)) {
              _free(uStack_1c0);
            }
            goto LAB_1004e25a4;
          }
          if (uVar9 != 0) {
            if (uVar25 == 0x8000000000000001) {
              bVar16 = *pbVar17;
              uVar25 = 0x8000000000000000;
              if (bVar16 != 0x10) {
                if (bVar16 == 0x11) {
                  FUN_1004dfff4(&uStack_140,*(undefined8 *)(lVar20 + lVar22 + 0x28));
                }
                else {
                  if (bVar16 == 0x12) goto LAB_1004e1e3c;
                  FUN_1004dfff4(&uStack_140,pbVar17);
                }
                uVar25 = CONCAT71(uStack_137,bStack_138);
                if (uStack_140 != 2) {
                  param_1[6] = CONCAT71(uStack_117,uStack_118);
                  param_1[5] = CONCAT71(uStack_11f,uStack_120);
                  param_1[8] = CONCAT71(uStack_107,uStack_108);
                  param_1[7] = CONCAT71(uStack_10f,uStack_110);
                  param_1[10] = CONCAT71(uStack_f7,uStack_f8);
                  param_1[9] = CONCAT71(uStack_ff,uStack_100);
                  param_1[0xb] = uStack_f0;
                  param_1[4] = CONCAT71(uStack_127,uStack_128);
                  param_1[3] = CONCAT71(uStack_12f,uStack_130);
                  param_1[1] = uStack_140;
                  param_1[2] = uVar25;
                  uVar25 = 0x8000000000000001;
                  *param_1 = 0x8000000000000001;
                  goto joined_r0x0001004e2700;
                }
                uStack_198 = CONCAT71(uStack_127,uStack_128);
                uStack_1a0 = CONCAT71(uStack_12f,uStack_130);
              }
LAB_1004e1e3c:
              uStack_218 = uStack_198;
              uStack_220 = uStack_1a0;
              goto LAB_1004e198c;
            }
            uStack_210 = uVar26;
            thunk_FUN_1087e4364(&uStack_140,&UNK_108ca2284,0xf);
LAB_1004e26c0:
            param_1[6] = CONCAT71(uStack_117,uStack_118);
            param_1[5] = CONCAT71(uStack_11f,uStack_120);
            param_1[8] = CONCAT71(uStack_107,uStack_108);
            param_1[7] = CONCAT71(uStack_10f,uStack_110);
            param_1[10] = CONCAT71(uStack_f7,uStack_f8);
            param_1[9] = CONCAT71(uStack_ff,uStack_100);
            param_1[0xb] = uStack_f0;
            param_1[2] = CONCAT71(uStack_137,bStack_138);
            param_1[1] = uStack_140;
            param_1[4] = CONCAT71(uStack_127,uStack_128);
            param_1[3] = CONCAT71(uStack_12f,uStack_130);
            *param_1 = 0x8000000000000001;
joined_r0x0001004e2700:
            if (uVar26 + 0x7fffffffffffffff < 2) goto LAB_1004e25a4;
            goto LAB_1004e2544;
          }
          if (bVar13 != 4) {
            uStack_210 = uVar26;
            thunk_FUN_1087e4364(&uStack_140,&UNK_108cab7df,0xc);
            goto LAB_1004e26c0;
          }
          bVar16 = *pbVar17;
          bVar13 = 3;
          if (bVar16 != 0x10) {
            if (bVar16 == 0x11) {
              pbVar17 = *(byte **)(lVar20 + lVar22 + 0x28);
            }
            else if (bVar16 == 0x12) goto LAB_1004e198c;
            func_0x000101435970(&uStack_140,pbVar17);
            bVar13 = bStack_138;
            if (uStack_140 == 2) goto LAB_1004e198c;
            *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_118,uStack_11f);
            *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_120,uStack_127);
            *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_108,uStack_10f);
            *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_110,uStack_117);
            *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_f8,uStack_ff);
            *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_100,uStack_107);
            param_1[0xb] = uStack_f0;
            param_1[10] = CONCAT71(uStack_f7,uStack_f8);
            *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_128,uStack_12f);
            *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_130,uStack_137);
            *(byte *)(param_1 + 2) = bStack_138;
            *param_1 = 0x8000000000000001;
            param_1[1] = uStack_140;
            goto joined_r0x0001004e2700;
          }
LAB_1004e198c:
          lVar22 = lVar22 + 0x40;
        } while (lVar15 - lVar22 != 0);
        bVar16 = 3;
        if (bVar13 != 4) {
          bVar16 = bVar13;
        }
        uVar11 = uStack_220;
        uVar3 = uStack_218;
        if (uVar25 == 0x8000000000000001) {
          uVar25 = 0x8000000000000000;
          uVar11 = uStack_e0;
          uVar3 = uStack_d8;
        }
        uStack_d8 = uVar3;
        uStack_e0 = uVar11;
        lVar20 = lVar14;
        if (uVar26 == 0x8000000000000002) {
          uVar26 = 0x8000000000000001;
        }
        else {
          uStack_a8 = uStack_1e0;
          uStack_b0 = uStack_1e8;
          uStack_98 = uStack_1d0;
          uStack_a0 = uStack_1d8;
          uStack_88 = uStack_1c0;
          uStack_90 = uStack_1c8;
          uStack_80 = uStack_1b8;
          uStack_c8 = uStack_200;
          uStack_d0 = uStack_208;
          uStack_b8 = uStack_1f0;
          uStack_c0 = uStack_1f8;
        }
      }
      param_1[2] = uStack_d8;
      param_1[1] = uStack_e0;
      param_1[9] = uStack_a8;
      param_1[8] = uStack_b0;
      param_1[0xb] = uStack_98;
      param_1[10] = uStack_a0;
      param_1[0xd] = uStack_88;
      param_1[0xc] = uStack_90;
      *param_1 = uVar25;
      param_1[3] = uVar26;
      param_1[0xe] = uStack_80;
      param_1[5] = uStack_c8;
      param_1[4] = uStack_d0;
      param_1[7] = uStack_b8;
      param_1[6] = uStack_c0;
      *(byte *)(param_1 + 0xf) = bVar16;
      if (lVar14 - lVar20 == 0) {
        return;
      }
      uVar24 = param_1[1];
      uVar18 = param_1[2];
      uVar23 = param_1[4];
      uVar11 = param_1[6];
      uVar5 = param_1[7];
      uVar3 = param_1[9];
      uVar21 = param_1[10];
      uVar4 = param_1[0xc];
      uStack_220 = param_1[0xd];
      uStack_210 = uStack_250;
      thunk_FUN_1087e427c(&uStack_140,uStack_250 + ((ulong)(lVar14 - lVar20) >> 6),&uStack_210,
                          &UNK_10b23a190);
      if (uStack_140 == 2) {
        return;
      }
      param_1[6] = CONCAT71(uStack_117,uStack_118);
      param_1[5] = CONCAT71(uStack_11f,uStack_120);
      param_1[8] = CONCAT71(uStack_107,uStack_108);
      param_1[7] = CONCAT71(uStack_10f,uStack_110);
      param_1[10] = CONCAT71(uStack_f7,uStack_f8);
      param_1[9] = CONCAT71(uStack_ff,uStack_100);
      param_1[2] = CONCAT71(uStack_137,bStack_138);
      param_1[1] = uStack_140;
      param_1[0xb] = uStack_f0;
      param_1[4] = CONCAT71(uStack_127,uStack_128);
      param_1[3] = CONCAT71(uStack_12f,uStack_130);
      *param_1 = 0x8000000000000001;
      if (uVar25 != 0x8000000000000000) {
        if (uVar18 != 0) {
          puVar19 = (undefined8 *)(uVar24 + 8);
          do {
            if (puVar19[-1] != 0) {
              _free(*puVar19);
            }
            puVar19 = puVar19 + 3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar25 != 0) {
          _free(uVar24);
        }
      }
      if (uVar26 != 0x8000000000000000) {
        if (uVar26 == 0x8000000000000001) {
          return;
        }
        if (uVar26 != 0) {
          _free(uVar23);
        }
      }
      if ((uVar11 & 0x7fffffffffffffff) != 0) {
        _free(uVar5);
      }
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
        _free(uVar21);
      }
      uVar25 = uVar4 & 0x7fffffffffffffff;
      goto joined_r0x0001004e227c;
    }
    thunk_FUN_108855bf0(&uStack_140,param_2,&uStack_1a0,&UNK_10b213848);
    param_1[6] = CONCAT71(uStack_117,uStack_118);
    param_1[5] = CONCAT71(uStack_11f,uStack_120);
    param_1[8] = CONCAT71(uStack_107,uStack_108);
    param_1[7] = CONCAT71(uStack_10f,uStack_110);
    param_1[10] = CONCAT71(uStack_f7,uStack_f8);
    param_1[9] = CONCAT71(uStack_ff,uStack_100);
    param_1[0xb] = uStack_f0;
    param_1[2] = CONCAT71(uStack_137,bStack_138);
    param_1[1] = uStack_140;
    param_1[4] = CONCAT71(uStack_127,uStack_128);
    param_1[3] = CONCAT71(uStack_12f,uStack_130);
    goto LAB_1004e243c;
  }
  lVar14 = *(long *)(param_2 + 0x18);
  if (lVar14 == 0) {
    uVar7 = 0;
  }
  else {
    pcVar10 = *(char **)(param_2 + 0x10);
    cVar6 = *pcVar10;
    if (cVar6 == '\x10' || cVar6 == '\x12') {
      bVar16 = 3;
    }
    else {
      pcVar8 = pcVar10;
      if (cVar6 == '\x11') {
        pcVar8 = *(char **)(pcVar10 + 8);
      }
      func_0x000101435970(&uStack_140,pcVar8);
      bVar16 = bStack_138;
      if (uStack_140 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_118,uStack_11f);
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_120,uStack_127);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_108,uStack_10f);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_110,uStack_117);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_f8,uStack_ff);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_100,uStack_107);
        param_1[0xb] = uStack_f0;
        param_1[10] = CONCAT71(uStack_f7,uStack_f8);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_128,uStack_12f);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_130,uStack_137);
        param_1[1] = uStack_140;
        *(byte *)(param_1 + 2) = bStack_138;
        goto LAB_1004e243c;
      }
    }
    if (lVar14 != 1) {
      cVar6 = pcVar10[0x20];
      if (cVar6 == '\x10') {
LAB_1004e1f40:
        uVar25 = 0x8000000000000000;
      }
      else {
        if (cVar6 == '\x11') {
          FUN_1004dfff4(&uStack_140,*(undefined8 *)(pcVar10 + 0x28));
          uVar25 = CONCAT71(uStack_137,bStack_138);
          if (uStack_140 != 2) goto LAB_1004e222c;
LAB_1004e21c4:
          uStack_208 = CONCAT71(uStack_127,uStack_128);
          uStack_210 = CONCAT71(uStack_12f,uStack_130);
        }
        else {
          if (cVar6 == '\x12') goto LAB_1004e1f40;
          FUN_1004dfff4(&uStack_140,pcVar10 + 0x20);
          uVar25 = CONCAT71(uStack_137,bStack_138);
          if (uStack_140 == 2) goto LAB_1004e21c4;
LAB_1004e222c:
          uStack_1e8 = CONCAT71(uStack_107,uStack_108);
          uStack_1f0 = CONCAT71(uStack_10f,uStack_110);
          uStack_1d8 = CONCAT71(uStack_f7,uStack_f8);
          uStack_1e0 = CONCAT71(uStack_ff,uStack_100);
          uStack_208 = CONCAT71(uStack_127,uStack_128);
          uStack_210 = CONCAT71(uStack_12f,uStack_130);
          uStack_1f8 = CONCAT71(uStack_117,uStack_118);
          uStack_200 = CONCAT71(uStack_11f,uStack_120);
          uStack_1d0 = uStack_f0;
        }
        if (uStack_140 != 2) {
          param_1[6] = uStack_1f8;
          param_1[5] = uStack_200;
          param_1[8] = uStack_1e8;
          param_1[7] = uStack_1f0;
          param_1[10] = uStack_1d8;
          param_1[9] = uStack_1e0;
          param_1[0xb] = uStack_1d0;
          param_1[4] = uStack_208;
          param_1[3] = uStack_210;
          param_1[1] = uStack_140;
          param_1[2] = uVar25;
          goto LAB_1004e243c;
        }
        uStack_140 = 2;
        uStack_e0 = uStack_210;
        uStack_d8 = uStack_208;
        if (uVar25 == 0x8000000000000001) goto LAB_1004e2260;
      }
      if (lVar14 == 2) {
        thunk_FUN_1087e427c(&uStack_140,2,&UNK_10b22e728,&UNK_10b20a590);
        param_1[6] = CONCAT71(uStack_117,uStack_118);
        param_1[5] = CONCAT71(uStack_11f,uStack_120);
        param_1[8] = CONCAT71(uStack_107,uStack_108);
        param_1[7] = CONCAT71(uStack_10f,uStack_110);
        param_1[10] = CONCAT71(uStack_f7,uStack_f8);
        param_1[9] = CONCAT71(uStack_ff,uStack_100);
        param_1[0xb] = uStack_f0;
        param_1[2] = CONCAT71(uStack_137,bStack_138);
        param_1[1] = uStack_140;
        param_1[4] = CONCAT71(uStack_127,uStack_128);
        param_1[3] = CONCAT71(uStack_12f,uStack_130);
        *param_1 = 0x8000000000000001;
joined_r0x0001004e231c:
        if (uVar25 == 0x8000000000000000) {
          return;
        }
        uStack_220 = uStack_e0;
        if (uStack_d8 != 0) {
          puVar19 = (undefined8 *)(uStack_e0 + 8);
          uVar26 = uStack_d8;
          do {
            if (puVar19[-1] != 0) {
              _free(*puVar19);
            }
            puVar19 = puVar19 + 3;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
      }
      else {
        pcVar8 = pcVar10 + 0x40;
        cVar6 = *pcVar8;
        if (cVar6 == '\x10' || cVar6 == '\x12') {
          uVar26 = 0x8000000000000001;
        }
        else {
          if (cVar6 == '\x11') {
            pcVar8 = *(char **)(pcVar10 + 0x48);
          }
          FUN_10144b068(&uStack_140,pcVar8);
          uStack_1e8 = CONCAT71(uStack_10f,uStack_110);
          uStack_1f0 = CONCAT71(uStack_117,uStack_118);
          uStack_1d8 = CONCAT71(uStack_ff,uStack_100);
          uStack_1e0 = CONCAT71(uStack_107,uStack_108);
          uStack_1d0 = CONCAT71(uStack_f7,uStack_f8);
          uStack_1c8 = uStack_f0;
          uStack_1c0 = uStack_e8;
          uStack_208 = CONCAT71(uStack_12f,uStack_130);
          uStack_210 = CONCAT71(uStack_137,bStack_138);
          uStack_1f8 = CONCAT71(uStack_11f,uStack_120);
          uStack_200 = CONCAT71(uStack_127,uStack_128);
          uVar26 = uStack_140;
          if (uStack_140 >> 1 == 0x4000000000000001) {
            param_1[6] = uStack_1e8;
            param_1[5] = uStack_1f0;
            param_1[8] = uStack_1d8;
            param_1[7] = uStack_1e0;
            param_1[10] = uStack_f0;
            param_1[9] = uStack_1d0;
            param_1[0xb] = uStack_e8;
            param_1[2] = uStack_208;
            param_1[1] = uStack_210;
            param_1[4] = uStack_1f8;
            param_1[3] = uStack_200;
            *param_1 = 0x8000000000000001;
            uStack_80 = uStack_e8;
            uStack_88 = uStack_f0;
            uStack_d0 = uStack_210;
            uStack_c8 = uStack_208;
            uStack_c0 = uStack_200;
            uStack_b8 = uStack_1f8;
            uStack_b0 = uStack_1f0;
            uStack_a8 = uStack_1e8;
            uStack_a0 = uStack_1e0;
            uStack_98 = uStack_1d8;
            uStack_90 = uStack_1d0;
            goto joined_r0x0001004e231c;
          }
        }
        uStack_a8 = uStack_1e8;
        uStack_b0 = uStack_1f0;
        uStack_98 = uStack_1d8;
        uStack_a0 = uStack_1e0;
        uStack_88 = uStack_1c8;
        uStack_90 = uStack_1d0;
        uStack_80 = uStack_1c0;
        uStack_c8 = uStack_208;
        uStack_d0 = uStack_210;
        uStack_b8 = uStack_1f8;
        uStack_c0 = uStack_200;
        param_1[9] = uStack_1e8;
        param_1[8] = uStack_1f0;
        param_1[0xb] = uStack_1d8;
        param_1[10] = uStack_1e0;
        param_1[0xd] = uStack_1c8;
        param_1[0xc] = uStack_1d0;
        param_1[0xe] = uStack_1c0;
        param_1[5] = uStack_208;
        param_1[4] = uStack_210;
        param_1[7] = uStack_1f8;
        param_1[6] = uStack_200;
        param_1[1] = uStack_e0;
        *param_1 = uVar25;
        param_1[2] = uStack_d8;
        param_1[3] = uVar26;
        *(byte *)(param_1 + 0xf) = bVar16;
        uVar11 = *param_1;
        if (uVar11 == 0x8000000000000001) {
          return;
        }
        if (lVar14 == 3) {
          return;
        }
        uVar3 = param_1[1];
        uVar21 = param_1[2];
        uVar24 = param_1[4];
        uVar4 = param_1[6];
        uVar18 = param_1[7];
        uVar5 = param_1[9];
        uVar23 = param_1[10];
        uVar25 = param_1[0xc];
        uStack_220 = param_1[0xd];
        uStack_210 = 3;
        thunk_FUN_1087e427c(&uStack_140,(lVar14 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,
                            &uStack_210,&UNK_10b23a1b0);
        if (uStack_140 == 2) {
          return;
        }
        param_1[6] = CONCAT71(uStack_117,uStack_118);
        param_1[5] = CONCAT71(uStack_11f,uStack_120);
        param_1[8] = CONCAT71(uStack_107,uStack_108);
        param_1[7] = CONCAT71(uStack_10f,uStack_110);
        param_1[10] = CONCAT71(uStack_f7,uStack_f8);
        param_1[9] = CONCAT71(uStack_ff,uStack_100);
        param_1[0xb] = uStack_f0;
        param_1[2] = CONCAT71(uStack_137,bStack_138);
        param_1[1] = uStack_140;
        param_1[4] = CONCAT71(uStack_127,uStack_128);
        param_1[3] = CONCAT71(uStack_12f,uStack_130);
        *param_1 = 0x8000000000000001;
        if (uVar11 != 0x8000000000000000) {
          if (uVar21 != 0) {
            puVar19 = (undefined8 *)(uVar3 + 8);
            do {
              if (puVar19[-1] != 0) {
                _free(*puVar19);
              }
              puVar19 = puVar19 + 3;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          if (uVar11 != 0) {
            _free(uVar3);
          }
        }
        if (uVar26 != 0x8000000000000000) {
          if (uVar26 == 0x8000000000000001) {
            return;
          }
          if (uVar26 != 0) {
            _free(uVar24);
          }
        }
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          _free(uVar18);
        }
        if ((uVar5 & 0x7fffffffffffffff) == 0) {
          uVar25 = uVar25 & 0x7fffffffffffffff;
        }
        else {
          _free(uVar23);
          uVar25 = uVar25 & 0x7fffffffffffffff;
        }
      }
joined_r0x0001004e227c:
      if (uVar25 == 0) {
        return;
      }
      _free(uStack_220);
      return;
    }
LAB_1004e2260:
    uVar7 = 1;
  }
  thunk_FUN_1087e427c(param_1 + 1,uVar7,&UNK_10b22e728,&UNK_10b20a590);
LAB_1004e243c:
  *param_1 = 0x8000000000000001;
  return;
}

