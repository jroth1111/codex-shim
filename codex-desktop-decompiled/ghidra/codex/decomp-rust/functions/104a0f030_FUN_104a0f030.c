
ulong * FUN_104a0f030(long *param_1,long param_2,undefined *param_3,undefined *param_4,
                     undefined *param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long extraout_x1;
  long extraout_x1_00;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  long *unaff_x19;
  long *plVar17;
  ulong *puVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  uint *puVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  byte bStack_160;
  char cStack_15f;
  short sStack_15e;
  int iStack_15c;
  undefined1 uStack_158;
  int7 iStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined1 uStack_121;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 ***pppuStack_110;
  undefined8 uStack_108;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  uVar27 = (long)param_5 - (long)param_4;
  uVar4 = uVar27 == 0;
  puVar9 = param_4;
  if (param_5 < param_4) goto LAB_104a0f098;
  unaff_x19 = param_1;
  if (param_4 == (undefined *)0x0) {
LAB_104a0f080:
    puVar11 = param_5;
    if (param_5 != (undefined *)0x0) {
      uVar4 = param_5 == param_3;
      if (param_3 <= param_5) goto LAB_104a0f0b4;
      uVar4 = param_5[param_2] == -0x40;
      if ((char)param_5[param_2] < -0x40) goto LAB_104a0f098;
    }
  }
  else {
    if (param_4 < param_3) {
      uVar4 = param_4[param_2] == -0x40;
      if (-0x41 < (char)param_4[param_2]) goto LAB_104a0f080;
    }
    else {
      uVar4 = 0;
      if (param_4 == param_3) goto LAB_104a0f080;
    }
LAB_104a0f098:
    do {
      puVar11 = &UNK_10b340860;
      param_4 = param_5;
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E(param_2,param_3,puVar9);
      param_1 = unaff_x19;
LAB_104a0f0b4:
      puVar9 = param_4;
      unaff_x19 = param_1;
    } while (!(bool)uVar4);
  }
  plVar24 = *(long **)*param_1;
  lVar25 = plVar24[2];
  if ((ulong)(*plVar24 - lVar25) < uVar27) {
    puVar11 = (undefined *)0x1;
    FUN_1089a4f48(plVar24,lVar25,uVar27,1);
    lVar25 = plVar24[2];
  }
  puVar5 = (ulong *)_memcpy(plVar24[1] + lVar25,param_4 + param_2,uVar27);
  plVar24[2] = lVar25 + uVar27;
  if (param_3 <= param_5) {
    puVar9 = &UNK_10b340878;
    auVar28 = func_0x000108a07bdc(param_5,param_3);
    lVar25 = auVar28._8_8_;
    plVar17 = auVar28._0_8_;
    uStack_58 = 0x104a0f49c;
    uVar26 = (long)puVar11 - (long)param_4;
    uVar4 = uVar26 == 0;
    puVar10 = param_4;
    plStack_90 = plVar24;
    uStack_88 = uVar27;
    lStack_80 = param_2;
    puStack_78 = param_3;
    puStack_70 = param_5;
    plStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (puVar11 < param_4) goto LAB_104a0f500;
    param_1 = plVar17;
    if (param_4 == (undefined *)0x0) {
LAB_104a0f4e8:
      if (puVar11 != (undefined *)0x0) {
        uVar4 = puVar11 == puVar9;
        if (puVar9 <= puVar11) goto LAB_104a0f51c;
        uVar4 = puVar11[lVar25] == -0x40;
        if ((char)puVar11[lVar25] < -0x40) goto LAB_104a0f500;
      }
    }
    else {
      if (param_4 < puVar9) {
        uVar4 = param_4[lVar25] == -0x40;
        if (-0x41 < (char)param_4[lVar25]) goto LAB_104a0f4e8;
      }
      else {
        uVar4 = 0;
        if (param_4 == puVar9) goto LAB_104a0f4e8;
      }
LAB_104a0f500:
      do {
        param_4 = puVar11;
        __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                  (lVar25,puVar9,puVar10,puVar11,&UNK_10b340860);
        plVar17 = param_1;
LAB_104a0f51c:
        puVar10 = param_4;
        param_1 = plVar17;
      } while (!(bool)uVar4);
    }
    lVar12 = plVar17[2];
    if ((ulong)(*plVar17 - lVar12) < uVar26) {
      FUN_1089a4f48(plVar17,lVar12,uVar26,1,1);
      lVar12 = plVar17[2];
    }
    puVar5 = (ulong *)_memcpy(plVar17[1] + lVar12,param_4 + lVar25,uVar26);
    lVar12 = lVar12 + uVar26;
    plVar17[2] = lVar12;
    if (puVar9 <= puVar11) {
      puVar10 = &UNK_10b340878;
      auVar28 = func_0x000108a07bdc(puVar11,puVar9);
      pbVar8 = auVar28._8_8_;
      puVar5 = auVar28._0_8_;
      uStack_98 = 0x104a0f88c;
      pbVar21 = pbVar8 + 1;
      uVar19 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') {
        if (uVar19 < 0xe0) {
          pbVar21 = pbVar8 + 2;
          uVar19 = pbVar8[1] & 0x3f | (uVar19 & 0x1f) << 6;
        }
        else {
          uVar2 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (uVar19 < 0xf0) {
            pbVar21 = pbVar8 + 3;
            uVar19 = uVar2 | (uVar19 & 0x1f) << 0xc;
          }
          else {
            uVar19 = pbVar8[3] & 0x3f | uVar2 << 6 | (uVar19 & 7) << 0x12;
            if (uVar19 == 0x110000) {
              uVar20 = 0;
              uVar26 = 0;
              uVar27 = 0;
              puVar18 = (ulong *)0x4;
              puVar6 = puVar5;
              goto LAB_104a0fb40;
            }
            pbVar21 = pbVar8 + 4;
          }
        }
      }
      puVar6 = (ulong *)0x0;
      pbVar8 = pbVar8 + (long)puVar10;
      uVar27 = (ulong)((long)pbVar8 - (long)pbVar21) >> 2;
      if (((long)pbVar8 - (long)pbVar21 & 3U) != 0) {
        uVar27 = uVar27 + 1;
      }
      uVar26 = uVar27;
      if (uVar27 < 4) {
        uVar26 = 3;
      }
      uVar26 = uVar26 + 1;
      uVar20 = uVar26 * 4;
      ppuStack_a0 = &puStack_60;
      if ((uVar27 < 0x3fffffffffffffff) && (uVar20 < 0x7ffffffffffffffd)) {
        if (uVar20 == 0) {
          uStack_f8 = 0;
          puStack_f0 = (ulong *)0x4;
          uRam0000000000000004 = uVar19;
          puVar18 = puStack_f0;
        }
        else {
          puVar6 = (ulong *)_malloc(uVar20);
          if (puVar6 == (ulong *)0x0) {
            puVar6 = (ulong *)0x4;
            goto LAB_104a0fb78;
          }
          *(uint *)puVar6 = uVar19;
          uStack_f8 = uVar26;
          puVar18 = puVar6;
        }
        uStack_e8 = 1;
        puStack_f0 = puVar18;
        if (pbVar21 != pbVar8) {
          uStack_e8 = 1;
          do {
            uVar27 = uStack_e8;
            uVar19 = (uint)*pbVar21;
            pbVar3 = pbVar21 + 1;
            if ((char)*pbVar21 < '\0') {
              if (uVar19 < 0xe0) {
                uVar19 = pbVar21[1] & 0x3f | (uVar19 & 0x1f) << 6;
                pbVar3 = pbVar21 + 2;
              }
              else {
                uVar2 = pbVar21[2] & 0x3f | (pbVar21[1] & 0x3f) << 6;
                if (uVar19 < 0xf0) {
                  uVar19 = uVar2 | (uVar19 & 0x1f) << 0xc;
                  pbVar3 = pbVar21 + 3;
                }
                else {
                  uVar19 = pbVar21[3] & 0x3f | uVar2 << 6 | (uVar19 & 7) << 0x12;
                  if (uVar19 == 0x110000) break;
                  pbVar3 = pbVar21 + 4;
                }
              }
            }
            pbVar21 = pbVar3;
            if (uStack_e8 == uStack_f8) {
              uVar26 = (ulong)((long)pbVar8 - (long)pbVar21) >> 2;
              if (((long)pbVar8 - (long)pbVar21 & 3U) != 0) {
                uVar26 = uVar26 + 1;
              }
              puVar6 = (ulong *)FUN_1089a4f48(&uStack_f8,uStack_e8,uVar26 + 1,4,4);
              puVar18 = puStack_f0;
            }
            *(uint *)((long)puVar18 + uVar27 * 4) = uVar19;
            uStack_e8 = uVar27 + 1;
          } while (pbVar21 != pbVar8);
        }
        uVar20 = uStack_e8;
        puVar18 = puStack_f0;
        uVar26 = uStack_f8;
        uVar22 = 0;
        uVar14 = 0;
        puVar23 = (uint *)((long)puStack_f0 + uStack_e8 * 4);
        uVar27 = uStack_e8;
        do {
          if (puVar23[-1] == 0x2a) {
            uVar14 = uVar14 + 1;
          }
          else {
            lVar25 = uVar14 - 1;
            if (uVar14 == 0 || lVar25 == 0) {
              uVar14 = 0;
            }
            else {
              puVar6 = (ulong *)func_0x0001049aa444(puVar23,uVar22,lVar25);
              uVar14 = 0;
              uVar27 = uVar27 - lVar25;
            }
          }
          puVar23 = puVar23 + -1;
          uVar22 = uVar22 + 1;
        } while (uVar20 != uVar22);
        if (1 < uVar14) {
          puVar6 = (ulong *)func_0x0001049aa444(puVar18,uVar20,uVar14 - 1);
          uVar27 = uVar27 - (uVar14 - 1);
        }
LAB_104a0fb40:
        if (uVar20 <= uVar27) {
          uVar27 = uVar20;
        }
        *puVar5 = uVar26;
        puVar5[1] = (ulong)puVar18;
        puVar5[2] = uVar27;
        *(undefined1 *)(puVar5 + 3) = 0;
        return puVar6;
      }
LAB_104a0fb78:
      uVar7 = func_0x0001087c9084(puVar6,uVar20);
      if (uVar26 != 0) {
        _free(puVar11);
      }
      pbVar21 = (byte *)__Unwind_Resume(uVar7);
      uStack_108 = 0x104a0fbac;
      bStack_160 = *pbVar21;
      *pbVar21 = 0x16;
      puStack_120 = puVar11;
      uStack_118 = uVar7;
      pppuStack_110 = &ppuStack_a0;
      if (bStack_160 == 0x16) {
        func_0x0001089a74f8();
        return (ulong *)0x1;
      }
      uVar7 = *(undefined8 *)(pbVar21 + 1);
      iStack_157 = (int7)*(undefined8 *)(pbVar21 + 9);
      cStack_15f = (char)uVar7;
      sStack_15e = (short)((ulong)uVar7 >> 8);
      iStack_15c = (int)((ulong)uVar7 >> 0x18);
      uStack_158 = (undefined1)((ulong)uVar7 >> 0x38);
      uStack_148 = *(undefined8 *)(pbVar21 + 0x18);
      uStack_150 = (undefined1)*(undefined8 *)(pbVar21 + 0x10);
      uStack_14f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x10) >> 8);
      if (bStack_160 < 5) {
        if (bStack_160 < 3) {
          if (bStack_160 == 1) {
            puVar5 = (ulong *)0x0;
          }
          else {
            if (bStack_160 != 2) {
LAB_104a0fd2c:
              func_0x0001089a73f4(&bStack_160,&uStack_121,&UNK_10b341200);
              return (ulong *)0x1;
            }
            puVar5 = (ulong *)0x0;
          }
        }
        else if (bStack_160 == 3) {
          puVar5 = (ulong *)0x0;
        }
        else {
          if (bStack_160 != 4) goto LAB_104a0fd2c;
          puVar5 = (ulong *)0x0;
        }
        goto LAB_104a0fcfc;
      }
      if (bStack_160 < 7) {
        if (bStack_160 == 5) {
          if (-1 < (long)cStack_15f) {
LAB_104a0fcf8:
            puVar5 = (ulong *)0x0;
            goto LAB_104a0fcfc;
          }
          auStack_140[0] = 2;
          lStack_138 = (long)cStack_15f;
          __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                    (auStack_140,&uStack_121,&UNK_10b341200);
        }
        else {
          if (bStack_160 != 6) goto LAB_104a0fd2c;
          if (-1 < (long)sStack_15e) goto LAB_104a0fcf8;
          auStack_140[0] = 2;
          lStack_138 = (long)sStack_15e;
          __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                    (auStack_140,&uStack_121,&UNK_10b341200);
        }
      }
      else if (bStack_160 == 7) {
        if (-1 < iStack_15c) goto LAB_104a0fcf8;
        auStack_140[0] = 2;
        lStack_138 = (long)iStack_15c;
        __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                  (auStack_140,&uStack_121,&UNK_10b341200);
      }
      else {
        if (bStack_160 != 8) goto LAB_104a0fd2c;
        if (-1 < iStack_157) goto LAB_104a0fcf8;
        auStack_140[0] = 2;
        lStack_138 = CONCAT71(iStack_157,uStack_158);
        __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                  (auStack_140,&uStack_121,&UNK_10b341200);
      }
      puVar5 = (ulong *)0x1;
LAB_104a0fcfc:
      func_0x000104a39e6c(&bStack_160);
      return puVar5;
    }
    bVar1 = puVar11[lVar25];
    if (0x21 < bVar1) {
      if (bVar1 < 0x27) {
        if (bVar1 != 0x22) {
          if (bVar1 != 0x26) goto LAB_104a0f764;
          if ((ulong)(*plVar17 - lVar12) < 5) {
            puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,5,1,1);
            lVar12 = plVar17[2];
          }
          puVar13 = (undefined4 *)(plVar17[1] + lVar12);
          uVar16 = 0x706d6126;
          goto LAB_104a0f688;
        }
        if ((ulong)(*plVar17 - lVar12) < 6) {
          puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,6,1,1);
          lVar12 = plVar17[2];
        }
        puVar13 = (undefined4 *)(plVar17[1] + lVar12);
        *puVar13 = 0x6f757126;
        uVar15 = 0x3b74;
      }
      else {
        if (bVar1 != 0x27) {
          if (bVar1 == 0x3c) {
            if ((ulong)(*plVar17 - lVar12) < 4) {
              puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,4,1,1);
              lVar12 = plVar17[2];
            }
            lVar25 = plVar17[1];
            uVar16 = 0x3b746c26;
          }
          else {
            if (bVar1 != 0x3e) goto LAB_104a0f764;
            if ((ulong)(*plVar17 - lVar12) < 4) {
              puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,4,1,1);
              lVar12 = plVar17[2];
            }
            lVar25 = plVar17[1];
            uVar16 = 0x3b746726;
          }
          goto LAB_104a0f6e8;
        }
        if ((ulong)(*plVar17 - lVar12) < 6) {
          puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,6,1,1);
          lVar12 = plVar17[2];
        }
        puVar13 = (undefined4 *)(plVar17[1] + lVar12);
        *puVar13 = 0x6f706126;
        uVar15 = 0x3b73;
      }
      *(undefined2 *)(puVar13 + 1) = uVar15;
      lVar12 = lVar12 + 6;
      goto LAB_104a0f724;
    }
    if (bVar1 < 0xd) {
      if (bVar1 == 9) {
        if ((ulong)(*plVar17 - lVar12) < 4) {
          puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,4,1,1);
          lVar12 = plVar17[2];
        }
        lVar25 = plVar17[1];
        uVar16 = 0x3b392326;
LAB_104a0f6e8:
        *(undefined4 *)(lVar25 + lVar12) = uVar16;
        lVar12 = lVar12 + 4;
        goto LAB_104a0f724;
      }
      if (bVar1 == 10) {
        if ((ulong)(*plVar17 - lVar12) < 5) goto LAB_104a0f77c;
      }
      else {
LAB_104a0f764:
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108e645b5,0xd7,&UNK_10b340890);
        lVar12 = extraout_x1_00;
LAB_104a0f77c:
        puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,5,1,1);
        lVar12 = plVar17[2];
      }
      puVar13 = (undefined4 *)(plVar17[1] + lVar12);
      uVar16 = 0x30312326;
    }
    else if (bVar1 == 0xd) {
      if ((ulong)(*plVar17 - lVar12) < 5) {
        puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,5,1,1);
        lVar12 = plVar17[2];
      }
      puVar13 = (undefined4 *)(plVar17[1] + lVar12);
      uVar16 = 0x33312326;
    }
    else {
      if (bVar1 != 0x20) goto LAB_104a0f764;
      if ((ulong)(*plVar17 - lVar12) < 5) {
        puVar5 = (ulong *)FUN_1089a4f48(plVar17,lVar12,5,1,1);
        lVar12 = plVar17[2];
      }
      puVar13 = (undefined4 *)(plVar17[1] + lVar12);
      uVar16 = 0x32332326;
    }
LAB_104a0f688:
    *puVar13 = uVar16;
    *(undefined1 *)(puVar13 + 1) = 0x3b;
    lVar12 = lVar12 + 5;
LAB_104a0f724:
    plVar17[2] = lVar12;
    return puVar5;
  }
  bVar1 = param_5[param_2];
  if (0x21 < bVar1) {
    if (bVar1 < 0x27) {
      if (bVar1 != 0x22) {
        if (bVar1 != 0x26) goto LAB_104a0f374;
        param_1 = *(long **)*param_1;
        lVar25 = param_1[2];
        if ((ulong)(*param_1 - lVar25) < 5) {
          puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,5,1,1);
          lVar25 = param_1[2];
        }
        puVar13 = (undefined4 *)(param_1[1] + lVar25);
        uVar16 = 0x706d6126;
        goto LAB_104a0f270;
      }
      param_1 = *(long **)*param_1;
      lVar25 = param_1[2];
      if ((ulong)(*param_1 - lVar25) < 6) {
        puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,6,1,1);
        lVar25 = param_1[2];
      }
      puVar13 = (undefined4 *)(param_1[1] + lVar25);
      *puVar13 = 0x6f757126;
      uVar15 = 0x3b74;
    }
    else {
      if (bVar1 != 0x27) {
        if (bVar1 == 0x3c) {
          param_1 = *(long **)*param_1;
          lVar25 = param_1[2];
          if ((ulong)(*param_1 - lVar25) < 4) {
            puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,4,1,1);
            lVar25 = param_1[2];
          }
          lVar12 = param_1[1];
          uVar16 = 0x3b746c26;
        }
        else {
          if (bVar1 != 0x3e) goto LAB_104a0f374;
          param_1 = *(long **)*param_1;
          lVar25 = param_1[2];
          if ((ulong)(*param_1 - lVar25) < 4) {
            puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,4,1,1);
            lVar25 = param_1[2];
          }
          lVar12 = param_1[1];
          uVar16 = 0x3b746726;
        }
        goto LAB_104a0f2e8;
      }
      param_1 = *(long **)*param_1;
      lVar25 = param_1[2];
      if ((ulong)(*param_1 - lVar25) < 6) {
        puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,6,1,1);
        lVar25 = param_1[2];
      }
      puVar13 = (undefined4 *)(param_1[1] + lVar25);
      *puVar13 = 0x6f706126;
      uVar15 = 0x3b73;
    }
    *(undefined2 *)(puVar13 + 1) = uVar15;
    lVar25 = lVar25 + 6;
    goto LAB_104a0f330;
  }
  if (bVar1 < 0xd) {
    if (bVar1 == 9) {
      param_1 = *(long **)*param_1;
      lVar25 = param_1[2];
      if ((ulong)(*param_1 - lVar25) < 4) {
        puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,4,1,1);
        lVar25 = param_1[2];
      }
      lVar12 = param_1[1];
      uVar16 = 0x3b392326;
LAB_104a0f2e8:
      *(undefined4 *)(lVar12 + lVar25) = uVar16;
      lVar25 = lVar25 + 4;
      goto LAB_104a0f330;
    }
    if (bVar1 == 10) {
      param_1 = *(long **)*param_1;
      lVar25 = param_1[2];
      if ((ulong)(*param_1 - lVar25) < 5) goto LAB_104a0f38c;
    }
    else {
LAB_104a0f374:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108e645b5,0xd7,&UNK_10b340890);
      lVar25 = extraout_x1;
LAB_104a0f38c:
      puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,5,1,1);
      lVar25 = param_1[2];
    }
    puVar13 = (undefined4 *)(param_1[1] + lVar25);
    uVar16 = 0x30312326;
  }
  else if (bVar1 == 0xd) {
    param_1 = *(long **)*param_1;
    lVar25 = param_1[2];
    if ((ulong)(*param_1 - lVar25) < 5) {
      puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,5,1,1);
      lVar25 = param_1[2];
    }
    puVar13 = (undefined4 *)(param_1[1] + lVar25);
    uVar16 = 0x33312326;
  }
  else {
    if (bVar1 != 0x20) goto LAB_104a0f374;
    param_1 = *(long **)*param_1;
    lVar25 = param_1[2];
    if ((ulong)(*param_1 - lVar25) < 5) {
      puVar5 = (ulong *)FUN_1089a4f48(param_1,lVar25,5,1,1);
      lVar25 = param_1[2];
    }
    puVar13 = (undefined4 *)(param_1[1] + lVar25);
    uVar16 = 0x32332326;
  }
LAB_104a0f270:
  *puVar13 = uVar16;
  *(undefined1 *)(puVar13 + 1) = 0x3b;
  lVar25 = lVar25 + 5;
LAB_104a0f330:
  param_1[2] = lVar25;
  return puVar5;
}

