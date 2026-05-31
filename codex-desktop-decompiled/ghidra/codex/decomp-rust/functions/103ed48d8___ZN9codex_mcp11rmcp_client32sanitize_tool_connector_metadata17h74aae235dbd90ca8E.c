
void __ZN9codex_mcp11rmcp_client32sanitize_tool_connector_metadata17h74aae235dbd90ca8E
               (long *param_1,long *param_2,long param_3,long param_4,long *param_5,long *param_6,
               long *param_7)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  if ((param_3 == 10) && (*param_2 == 0x70615f7865646f63 && (short)param_2[1] == 0x7370)) {
    lVar6 = *param_5;
    param_1[1] = param_5[1];
    *param_1 = lVar6;
    param_1[2] = param_5[2];
    lVar6 = *param_6;
    param_1[4] = param_6[1];
    param_1[3] = lVar6;
    param_1[5] = param_6[2];
    lVar6 = *param_7;
    param_1[7] = param_7[1];
    param_1[6] = lVar6;
    param_1[8] = param_7[2];
    return;
  }
  if (*(long *)(param_4 + 0x48) != -0x8000000000000000) {
    lVar6 = *(long *)(param_4 + 0x58);
    if (lVar6 != 0) {
      *(undefined8 *)(param_4 + 0x58) = 0;
      lVar12 = lVar6 + -1;
      plVar11 = *(long **)(param_4 + 0x50);
      do {
        plVar9 = plVar11 + 0xd;
        plVar1 = (long *)plVar11[1];
        lVar8 = plVar11[2];
        if (lVar8 < 0x14) {
          if (lVar8 == 0xc) {
            if (*plVar1 == 0x6f7463656e6e6f63 && (int)plVar1[1] == 0x64695f72) goto LAB_103ed4ab4;
          }
          else if ((lVar8 == 0xe) &&
                  (*plVar1 == 0x6f7463656e6e6f63 &&
                   *(long *)((long)plVar1 + 6) == 0x656d616e5f726f74)) {
LAB_103ed4ab4:
            if (*plVar11 != 0) {
              _free();
            }
            uVar5 = plVar11[3] ^ 0x8000000000000000;
            if (-1 < plVar11[3]) {
              uVar5 = 5;
            }
            if (2 < uVar5) {
              if (uVar5 == 3) {
                if (plVar11[4] != 0) {
                  _free(plVar11[5]);
                }
              }
              else if (uVar5 == 4) {
                func_0x000103db7db8(plVar11 + 4);
              }
              else {
                func_0x000103dc1800();
              }
            }
            if (lVar12 != 0) {
              lVar8 = 1;
              goto LAB_103ed4bb8;
            }
            lVar8 = 1;
            goto LAB_103ed4d48;
          }
        }
        else if (lVar8 == 0x14) {
          if ((*plVar1 == 0x6f7463656e6e6f63 && plVar1[1] == 0x7069726373654472) &&
              (int)plVar1[2] == 0x6e6f6974) goto LAB_103ed4ab4;
        }
        else if (lVar8 == 0x15) {
          if ((*plVar1 == 0x6f7463656e6e6f63 && plVar1[1] == 0x6972637365645f72) &&
              *(long *)((long)plVar1 + 0xd) == 0x6e6f697470697263) goto LAB_103ed4ab4;
        }
        else if ((lVar8 == 0x16) &&
                ((*plVar1 == 0x6f7463656e6e6f63 && plVar1[1] == 0x616c707369645f72) &&
                 *(long *)((long)plVar1 + 0xe) == 0x656d616e5f79616c)) goto LAB_103ed4ab4;
        lVar12 = lVar12 + -1;
        plVar11 = plVar9;
      } while (lVar12 != -1);
      lVar8 = 0;
      goto LAB_103ed4d48;
    }
    uVar5 = 0;
    if (*(long *)(param_4 + 0x78) == 0) goto LAB_103ed4ebc;
    goto LAB_103ed4d60;
  }
  goto LAB_103ed4ebc;
LAB_103ed4bb8:
  do {
    plVar11 = (long *)plVar9[1];
    lVar13 = plVar9[2];
    if (lVar13 < 0x14) {
      if (lVar13 == 0xc) {
        if (*plVar11 != 0x6f7463656e6e6f63 || (int)plVar11[1] != 0x64695f72) goto LAB_103ed4b78;
        goto LAB_103ed4cdc;
      }
      if ((lVar13 == 0xe) &&
         (*plVar11 == 0x6f7463656e6e6f63 && *(long *)((long)plVar11 + 6) == 0x656d616e5f726f74))
      goto LAB_103ed4cdc;
LAB_103ed4b78:
      plVar11 = plVar9 + lVar8 * -0xd;
      lVar14 = plVar9[1];
      lVar13 = *plVar9;
      lVar15 = plVar9[2];
      lVar17 = plVar9[5];
      lVar16 = plVar9[4];
      plVar11[3] = plVar9[3];
      plVar11[2] = lVar15;
      plVar11[5] = lVar17;
      plVar11[4] = lVar16;
      plVar11[1] = lVar14;
      *plVar11 = lVar13;
      lVar14 = plVar9[7];
      lVar13 = plVar9[6];
      lVar16 = plVar9[9];
      lVar15 = plVar9[8];
      lVar18 = plVar9[0xb];
      lVar17 = plVar9[10];
      plVar11[0xc] = plVar9[0xc];
      plVar11[9] = lVar16;
      plVar11[8] = lVar15;
      plVar11[0xb] = lVar18;
      plVar11[10] = lVar17;
      plVar11[7] = lVar14;
      plVar11[6] = lVar13;
    }
    else {
      if (lVar13 == 0x14) {
        if ((*plVar11 != 0x6f7463656e6e6f63 || plVar11[1] != 0x7069726373654472) ||
            (int)plVar11[2] != 0x6e6f6974) goto LAB_103ed4b78;
      }
      else if (lVar13 == 0x15) {
        if ((*plVar11 != 0x6f7463656e6e6f63 || plVar11[1] != 0x6972637365645f72) ||
            *(long *)((long)plVar11 + 0xd) != 0x6e6f697470697263) goto LAB_103ed4b78;
      }
      else if ((lVar13 != 0x16) ||
              ((*plVar11 != 0x6f7463656e6e6f63 || plVar11[1] != 0x616c707369645f72) ||
               *(long *)((long)plVar11 + 0xe) != 0x656d616e5f79616c)) goto LAB_103ed4b78;
LAB_103ed4cdc:
      if (*plVar9 != 0) {
        _free();
      }
      lVar8 = lVar8 + 1;
      uVar5 = plVar9[3] ^ 0x8000000000000000;
      if (-1 < plVar9[3]) {
        uVar5 = 5;
      }
      if (2 < uVar5) {
        if (uVar5 == 3) {
          if (plVar9[4] != 0) {
            _free(plVar9[5]);
          }
        }
        else if (uVar5 == 4) {
          func_0x000103db7db8(plVar9 + 4);
        }
        else {
          func_0x000103dc1800();
        }
      }
    }
    plVar9 = plVar9 + 0xd;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
LAB_103ed4d48:
  uVar5 = lVar6 - lVar8;
  *(ulong *)(param_4 + 0x58) = uVar5;
  if (uVar5 < *(ulong *)(param_4 + 0x78)) {
LAB_103ed4d60:
    uVar7 = *(ulong *)(param_4 + 0x68);
    if (uVar7 == 0) {
      *(undefined8 *)(param_4 + 0x70) = 0;
      *(undefined8 *)(param_4 + 0x78) = 0;
      if (uVar5 != 0) goto LAB_103ed4f90;
    }
    else {
      _memset(*(undefined8 *)(param_4 + 0x60),0xff,uVar7 + 9);
      if (7 < uVar7) {
        uVar7 = (uVar7 + 1 >> 3) * 7;
      }
      *(ulong *)(param_4 + 0x70) = uVar7;
      *(undefined8 *)(param_4 + 0x78) = 0;
      if (uVar7 < uVar5) {
LAB_103ed4f90:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc6c51,0x45,&UNK_10b300188);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ed4fb0);
        (*pcVar3)();
      }
    }
    if (uVar5 != 0) {
      lVar6 = *(long *)(param_4 + 0x50);
      lVar12 = lVar6 + uVar5 * 0x68;
      do {
        uVar10 = *(ulong *)(lVar6 + 0x60);
        plVar11 = *(long **)(param_4 + 0x60);
        uVar5 = *(ulong *)(param_4 + 0x68);
        uVar7 = uVar5 & uVar10;
        lVar8 = *(long *)((long)plVar11 + uVar7);
        uVar4 = CONCAT17(-(lVar8 < 0),
                         CONCAT16(-((char)((ulong)lVar8 >> 0x30) < '\0'),
                                  CONCAT15(-((char)((ulong)lVar8 >> 0x28) < '\0'),
                                           CONCAT14(-((char)((ulong)lVar8 >> 0x20) < '\0'),
                                                    CONCAT13(-((char)((ulong)lVar8 >> 0x18) < '\0'),
                                                             CONCAT12(-((char)((ulong)lVar8 >> 0x10)
                                                                       < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar8 >> 8) < '\0'),-((char)lVar8 < '\0'))))
                                                  ))));
        if (uVar4 == 0) {
          lVar8 = 8;
          do {
            uVar7 = uVar7 + lVar8 & uVar5;
            lVar13 = *(long *)((long)plVar11 + uVar7);
            uVar4 = CONCAT17(-(lVar13 < 0),
                             CONCAT16(-((char)((ulong)lVar13 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar13 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar13 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar13 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar13 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar13 >> 8) < '\0'),
                                                           -((char)lVar13 < '\0'))))))));
            lVar8 = lVar8 + 8;
          } while (uVar4 == 0);
        }
        uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar5;
        bVar2 = *(byte *)((long)plVar11 + uVar7);
        if ((char)bVar2 < '\0') {
          lVar8 = *(long *)(param_4 + 0x70);
          lVar13 = *(long *)(param_4 + 0x78);
        }
        else {
          lVar8 = *plVar11;
          uVar7 = CONCAT17(-(lVar8 < 0),
                           CONCAT16(-((char)((ulong)lVar8 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar8 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar8 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar8 >> 0x18) < '\0'
                                                                ),CONCAT12(-((char)((ulong)lVar8 >>
                                                                                   0x10) < '\0'),
                                                                           CONCAT11(-((char)((ulong)
                                                  lVar8 >> 8) < '\0'),-((char)lVar8 < '\0'))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          bVar2 = *(byte *)((long)plVar11 + uVar7);
          lVar8 = *(long *)(param_4 + 0x70);
          lVar13 = *(long *)(param_4 + 0x78);
        }
        uVar4 = (ulong)(bVar2 & 1);
        lVar14 = lVar13;
        if (((bVar2 & 1) != 0) && (lVar8 == 0)) {
          func_0x000108a4ad30(param_4 + 0x60,1,1);
          plVar11 = *(long **)(param_4 + 0x60);
          uVar5 = *(ulong *)(param_4 + 0x68);
          uVar7 = func_0x000103edf9bc(plVar11,uVar5,uVar10);
          uVar4 = (ulong)(*(byte *)((long)plVar11 + uVar7) & 1);
          lVar8 = *(long *)(param_4 + 0x70);
          lVar14 = *(long *)(param_4 + 0x78);
        }
        lVar6 = lVar6 + 0x68;
        bVar2 = (byte)(uVar10 >> 0x38);
        *(byte *)((long)plVar11 + uVar7) = bVar2 >> 1;
        *(byte *)((long)plVar11 + (uVar7 - 8 & uVar5) + 8) = bVar2 >> 1;
        *(ulong *)(param_4 + 0x70) = lVar8 - uVar4;
        *(long *)(param_4 + 0x78) = lVar14 + 1;
        plVar11[-1 - uVar7] = lVar13;
      } while (lVar6 != lVar12);
    }
  }
LAB_103ed4ebc:
  *param_1 = -0x8000000000000000;
  param_1[3] = -0x8000000000000000;
  param_1[6] = -0x8000000000000000;
  if (*param_7 == -0x8000000000000000 || *param_7 == 0) {
    if (*param_6 != -0x8000000000000000 && *param_6 != 0) {
LAB_103ed4f24:
      _free(param_6[1]);
      lVar6 = *param_5;
      goto joined_r0x000103ed4efc;
    }
  }
  else {
    _free(param_7[1]);
    if (*param_6 != -0x8000000000000000 && *param_6 != 0) goto LAB_103ed4f24;
  }
  lVar6 = *param_5;
joined_r0x000103ed4efc:
  if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_5[1]);
    return;
  }
  return;
}

