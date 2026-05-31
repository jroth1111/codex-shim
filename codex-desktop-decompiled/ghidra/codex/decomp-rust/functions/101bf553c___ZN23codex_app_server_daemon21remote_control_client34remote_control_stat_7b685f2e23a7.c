
/* WARNING: Type propagation algorithm not settling */

void __ZN23codex_app_server_daemon21remote_control_client34remote_control_status_notification17h4a782c311c1eb059E
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *extraout_x9;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plStack_280;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_230;
  ulong uStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_1f8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  char cStack_198;
  undefined7 uStack_197;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_138;
  long *plStack_130;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  uint uVar12;
  
  if (((*(long *)(param_2 + 0x10) != 0x1c) ||
      (plVar3 = *(long **)(param_2 + 8),
      ((*plVar3 != 0x6f4365746f6d6572 || plVar3[1] != 0x74732f6c6f72746e) ||
      plVar3[2] != 0x6168632f73757461) || (int)plVar3[3] != 0x6465676e)) ||
     (*(long *)(param_2 + 0x18) == -0x7ffffffffffffffb)) {
    *param_1 = 0x8000000000000000;
    return;
  }
  FUN_101bf89fc(&uStack_228);
  uVar4 = uStack_228 ^ 0x8000000000000000;
  if (-1 < (long)uStack_228) {
    uVar4 = 5;
  }
  if (uVar4 != 4) {
    if (uVar4 != 5) {
      plStack_1d8 = (long *)FUN_1088c6880(&uStack_228,&uStack_80,&UNK_10b26b150);
      plStack_1e0 = (long *)0x8000000000000000;
      goto LAB_101bf5868;
    }
    if ((lStack_208 != 0) && (lStack_208 * 9 != -0x11)) {
      _free(lStack_210 + lStack_208 * -8 + -8);
    }
    plVar3 = plStack_220 + (long)plStack_218 * 0xd;
    plStack_140 = plStack_220;
    uStack_138 = uStack_228;
    plStack_148 = plStack_220;
    plStack_190 = (long *)0x8000000000000005;
    plStack_230 = (long *)0x0;
    plStack_130 = plVar3;
    if (plStack_218 == (long *)0x0) {
      plVar8 = (long *)0x0;
      plVar13 = (long *)0x8000000000000001;
LAB_101bf551c:
      uStack_80 = &UNK_108cf483d;
      plStack_78 = (long *)0x6;
      plStack_c8 = &uStack_80;
      plStack_c0 = (long *)&DAT_101bf73d4;
      plStack_1d8 = (long *)FUN_1088c6b64(s_missing_field_____108ac28f7,&plStack_c8);
LAB_101bf554c:
      plStack_1e0 = (long *)0x8000000000000000;
      bVar9 = true;
      bVar10 = true;
    }
    else {
      cVar2 = '\x04';
      plStack_230 = (long *)0x8000000000000000;
      plVar8 = (long *)0x8000000000000000;
      plVar13 = (long *)0x8000000000000001;
      do {
        plVar14 = plStack_220 + 0xd;
        plVar5 = plVar14;
        if (*plStack_220 == -0x8000000000000000) break;
        plVar5 = (long *)plStack_220[1];
        lVar1 = plStack_220[2];
        plStack_178 = (long *)plStack_220[6];
        plStack_180 = (long *)plStack_220[5];
        plStack_168 = (long *)plStack_220[8];
        plStack_170 = (long *)plStack_220[7];
        plStack_158 = (long *)plStack_220[10];
        plStack_160 = (long *)plStack_220[9];
        plStack_150 = (long *)plStack_220[0xb];
        plStack_188 = (long *)plStack_220[4];
        plStack_190 = (long *)plStack_220[3];
        if (lVar1 < 0xd) {
          if (lVar1 == 6) {
            if ((int)*plVar5 != 0x74617473 || *(short *)((long)plVar5 + 4) != 0x7375)
            goto LAB_101bf5234;
            uVar12 = 0;
            uVar11 = 0;
          }
          else if ((lVar1 == 10) && (*plVar5 == 0x614e726576726573 && (short)plVar5[1] == 0x656d)) {
            uVar12 = 1;
            uVar11 = 1;
          }
          else {
LAB_101bf5234:
            uVar12 = 4;
            uVar11 = 4;
          }
        }
        else if (lVar1 == 0xd) {
          if (*plVar5 != 0x6d6e6f7269766e65 || *(long *)((long)plVar5 + 5) != 0x6449746e656d6e6f)
          goto LAB_101bf5234;
          uVar12 = 3;
          uVar11 = 3;
        }
        else {
          if ((lVar1 != 0xe) ||
             (*plVar5 != 0x616c6c6174736e69 || *(long *)((long)plVar5 + 6) != 0x64496e6f6974616c))
          goto LAB_101bf5234;
          uVar12 = 2;
          uVar11 = 2;
        }
        if (*plStack_220 != 0) {
          _free();
          uVar11 = uVar12;
        }
        plVar5 = plStack_190;
        plStack_1d8 = plStack_180;
        if (uVar11 < 2) {
          if (uVar11 == 0) {
            if (cVar2 != '\x04') {
              uStack_80 = &UNK_108cf483d;
              plStack_78 = (long *)0x6;
              plStack_c8 = &uStack_80;
              plStack_c0 = (long *)&DAT_101bf73d4;
              plStack_140 = plVar14;
              plStack_1d8 = (long *)FUN_1088c6b64(s_duplicate_field_____108ac2973,&plStack_c8);
              goto LAB_101bf554c;
            }
            plStack_190 = (long *)0x8000000000000005;
            if (plVar5 == (long *)0x8000000000000005) {
              plStack_140 = plVar14;
              plStack_1d8 = (long *)FUN_1088c6b10();
              plVar14 = plStack_140;
            }
            else {
              plStack_c8 = plVar5;
              plStack_b8 = plStack_180;
              plStack_c0 = plStack_188;
              plStack_a8 = plStack_170;
              plStack_b0 = plStack_178;
              plStack_98 = plStack_160;
              plStack_a0 = plStack_168;
              plStack_88 = plStack_150;
              plStack_90 = plStack_158;
              FUN_101bfa604(&uStack_80,&plStack_c8);
              plStack_1d8 = plStack_78;
              if ((char)uStack_80 != '\x01') {
                cVar2 = uStack_80._1_1_;
                goto LAB_101bf50ec;
              }
            }
            plStack_140 = plVar14;
            plStack_1e0 = (long *)0x8000000000000000;
            bVar9 = true;
            bVar10 = true;
            goto joined_r0x000101bf57bc;
          }
          if (plStack_230 != (long *)0x8000000000000000) {
            uStack_80 = &UNK_108cf4843;
            plStack_78 = (long *)0xa;
            plStack_c8 = &uStack_80;
            plStack_c0 = (long *)&DAT_101bf73d4;
            plStack_140 = plVar14;
            plStack_1d8 = (long *)FUN_1088c6b64(s_duplicate_field_____108ac2973,&plStack_c8);
            goto LAB_101bf554c;
          }
          plStack_190 = (long *)0x8000000000000005;
          if (plVar5 == (long *)0x8000000000000005) {
            plStack_140 = plVar14;
            plStack_1d8 = (long *)FUN_1088c6b10();
            plVar14 = plStack_140;
            goto LAB_101bf57fc;
          }
          plStack_c8 = plVar5;
          plStack_b8 = plStack_180;
          plStack_c0 = plStack_188;
          plStack_a8 = plStack_170;
          plStack_b0 = plStack_178;
          plStack_98 = plStack_160;
          plStack_a0 = plStack_168;
          plStack_88 = plStack_150;
          plStack_90 = plStack_158;
          if (plVar5 != (long *)0x8000000000000003) {
            plStack_140 = plVar14;
            plVar3 = (long *)FUN_1088c6880(&plStack_c8,&uStack_80,&UNK_10b26b0d0);
            FUN_101bf7ce4(&plStack_c8);
            plStack_1d8 = plVar3;
            plVar14 = plStack_140;
            goto LAB_101bf57fc;
          }
          plStack_230 = plStack_188;
          if (plStack_188 == (long *)0x8000000000000000) goto LAB_101bf57fc;
          plStack_260 = plStack_178;
          plStack_248 = plStack_180;
        }
        else {
          if (uVar11 == 2) {
            if (plVar8 != (long *)0x8000000000000000) {
              uStack_80 = &UNK_108cf484d;
              plStack_78 = (long *)0xe;
              plStack_c8 = &uStack_80;
              plStack_c0 = (long *)&DAT_101bf73d4;
              plStack_140 = plVar14;
              plStack_1d8 = (long *)FUN_1088c6b64(s_duplicate_field_____108ac2973,&plStack_c8);
              goto LAB_101bf554c;
            }
            plStack_190 = (long *)0x8000000000000005;
            if (plVar5 == (long *)0x8000000000000005) {
              plStack_140 = plVar14;
              plStack_1d8 = (long *)FUN_1088c6b10();
              plVar14 = plStack_140;
            }
            else {
              plStack_c8 = plVar5;
              plStack_b8 = plStack_180;
              plStack_c0 = plStack_188;
              plStack_a8 = plStack_170;
              plStack_b0 = plStack_178;
              plStack_98 = plStack_160;
              plStack_a0 = plStack_168;
              plStack_88 = plStack_150;
              plStack_90 = plStack_158;
              if (plVar5 == (long *)0x8000000000000003) {
                if (plStack_188 != (long *)0x8000000000000000) {
                  plStack_268 = plStack_178;
                  plVar8 = plStack_188;
                  plStack_250 = plStack_180;
                  goto LAB_101bf50ec;
                }
              }
              else {
                plStack_140 = plVar14;
                plVar3 = (long *)FUN_1088c6880(&plStack_c8,&uStack_80,&UNK_10b26b0d0);
                FUN_101bf7ce4(&plStack_c8);
                plStack_1d8 = plVar3;
                plVar14 = plStack_140;
              }
            }
            plStack_140 = plVar14;
            plVar8 = (long *)0x0;
            plStack_1e0 = (long *)0x8000000000000000;
            bVar9 = true;
            bVar10 = true;
            goto joined_r0x000101bf57bc;
          }
          if (uVar11 == 3) {
            if (plVar13 != (long *)0x8000000000000001) {
              uStack_80 = &UNK_108cf485b;
              plStack_78 = (long *)0xd;
              plStack_c8 = &uStack_80;
              plStack_c0 = (long *)&DAT_101bf73d4;
              plStack_140 = plVar14;
              plStack_1d8 = (long *)FUN_1088c6b64(s_duplicate_field_____108ac2973,&plStack_c8);
              plStack_1e0 = (long *)0x8000000000000000;
              bVar9 = true;
              goto joined_r0x000101bf5a7c;
            }
            plStack_190 = (long *)0x8000000000000005;
            if (plVar5 == (long *)0x8000000000000005) {
              plStack_140 = plVar14;
              plStack_1d8 = (long *)FUN_1088c6b10();
              plVar14 = plStack_140;
            }
            else {
              plStack_c8 = plVar5;
              plStack_b8 = plStack_180;
              plStack_c0 = plStack_188;
              plStack_a8 = plStack_170;
              plStack_b0 = plStack_178;
              plStack_98 = plStack_160;
              plStack_a0 = plStack_168;
              plStack_88 = plStack_150;
              plStack_90 = plStack_158;
              if (plVar5 == (long *)0x8000000000000000) {
                FUN_101bf7ce4(&plStack_c8);
                plStack_258 = plStack_270;
                plVar13 = (long *)0x8000000000000000;
                goto LAB_101bf50ec;
              }
              if (plVar5 == (long *)0x8000000000000003) {
                plStack_270 = plStack_180;
                if ((plStack_188 != (long *)0x8000000000000000) &&
                   (plStack_188 != (long *)0x8000000000000001)) {
                  plStack_280 = plStack_178;
                  plStack_258 = plStack_180;
                  plVar13 = plStack_188;
                  plStack_c8 = plVar5;
                  goto LAB_101bf50ec;
                }
              }
              else {
                plStack_140 = plVar14;
                plVar3 = (long *)FUN_1088c6880(&plStack_c8,&uStack_80,&UNK_10b26b0d0);
                FUN_101bf7ce4(&plStack_c8);
                plStack_1d8 = plVar3;
                plVar14 = plStack_140;
              }
            }
            plStack_140 = plVar14;
            plStack_1e0 = (long *)0x8000000000000000;
            bVar10 = true;
            goto LAB_101bf5828;
          }
          plStack_190 = (long *)0x8000000000000005;
          if (plVar5 == (long *)0x8000000000000005) {
            plStack_140 = plVar14;
            plStack_1d8 = (long *)FUN_1088c6b10();
            goto LAB_101bf554c;
          }
          plStack_c8 = plVar5;
          plStack_b8 = plStack_180;
          plStack_c0 = plStack_188;
          plStack_a8 = plStack_170;
          plStack_b0 = plStack_178;
          plStack_98 = plStack_160;
          plStack_a0 = plStack_168;
          plStack_88 = plStack_150;
          plStack_90 = plStack_158;
          FUN_101bf7ce4(&plStack_c8);
        }
LAB_101bf50ec:
        plVar5 = plVar3;
        plStack_220 = plVar14;
      } while (plVar14 != plVar3);
      plStack_140 = plVar14;
      if (cVar2 == '\x04') goto LAB_101bf551c;
      if (plStack_230 == (long *)0x8000000000000000) {
        uStack_80 = &UNK_108cf4843;
        plStack_78 = (long *)0xa;
        plStack_c8 = &uStack_80;
        plStack_c0 = (long *)&DAT_101bf73d4;
        plStack_1d8 = (long *)FUN_1088c6b64(s_missing_field_____108ac28f7,&plStack_c8);
        plVar14 = plStack_140;
LAB_101bf57fc:
        plStack_140 = plVar14;
        plStack_230 = (long *)0x0;
        plStack_1e0 = (long *)0x8000000000000000;
        bVar9 = true;
        bVar10 = true;
      }
      else {
        if (plVar8 != (long *)0x8000000000000000) {
          plStack_1e0 = plStack_230;
          plStack_1d8 = plStack_248;
          plStack_1b0 = (long *)0x8000000000000000;
          if (plVar13 != (long *)0x8000000000000001) {
            plStack_1b0 = plVar13;
          }
          plStack_1d0 = plStack_260;
          plStack_1c0 = plStack_250;
          plStack_1b8 = plStack_268;
          plStack_1a8 = plStack_258;
          plStack_1a0 = plStack_280;
          uStack_d8 = CONCAT71(uStack_197,cVar2);
          plStack_118 = plStack_248;
          plStack_120 = plStack_230;
          plStack_110 = plStack_260;
          plStack_f8 = plStack_268;
          plStack_100 = plStack_250;
          plStack_e8 = plStack_258;
          plStack_e0 = plStack_280;
          plStack_1c8 = plVar8;
          cStack_198 = cVar2;
          plStack_108 = plVar8;
          plStack_f0 = plStack_1b0;
          if (plVar3 != plVar5) {
            plStack_1d8 = (long *)func_0x0001088c67cc(uStack_1f8,&UNK_10b26b120);
            plStack_1e0 = (long *)0x8000000000000000;
            FUN_101bf76d8(&plStack_120);
          }
          FUN_101bf7e34(&plStack_148);
          goto LAB_101bf5868;
        }
        uStack_80 = &UNK_108cf484d;
        plStack_78 = (long *)0xe;
        plStack_c8 = &uStack_80;
        plStack_c0 = (long *)&DAT_101bf73d4;
        plStack_1d8 = (long *)FUN_1088c6b64(s_missing_field_____108ac28f7,&plStack_c8);
        plVar8 = (long *)0x0;
        plStack_1e0 = (long *)0x8000000000000000;
        if (plStack_230 != (long *)0x0) {
          _free(plStack_248);
        }
        bVar9 = false;
        bVar10 = false;
      }
    }
joined_r0x000101bf57bc:
    if (plVar13 != (long *)0x8000000000000001) {
joined_r0x000101bf5a7c:
      bVar10 = bVar9;
      if (((ulong)plVar13 & 0x7fffffffffffffff) != 0) {
        _free(plStack_258);
      }
    }
LAB_101bf5828:
    if (((ulong)plVar8 & 0x7fffffffffffffff) != 0) {
      _free(plStack_250);
    }
    bVar9 = false;
    if (((ulong)plStack_230 & 0x7fffffffffffffff) != 0) {
      bVar9 = bVar10;
    }
    if (bVar9) {
      _free(plStack_248);
    }
    FUN_101bf7e34(&plStack_148);
    if (plStack_190 != (long *)0x8000000000000005) {
      FUN_101bf7ce4(&plStack_190);
    }
    goto LAB_101bf5868;
  }
  plVar8 = plStack_218 + lStack_210 * 9;
  plStack_c8 = plStack_218;
  plStack_b8 = plStack_220;
  plVar3 = plStack_218;
  plStack_b0 = plVar8;
  if (lStack_210 == 0) {
LAB_101bf5094:
    plStack_c0 = plVar3;
    plStack_1d8 = (long *)func_0x0001088c67cc(0,&UNK_10b26b1b0);
LAB_101bf50a4:
    plStack_1e0 = (long *)0x8000000000000000;
LAB_101bf50ac:
    FUN_101bf7f14(plVar3,((ulong)((long)plVar8 - (long)plVar3) >> 3) * -0x71c71c71c71c71c7);
  }
  else {
    plVar3 = plStack_218 + 9;
    if ((long *)*plStack_218 == (long *)0x8000000000000005) goto LAB_101bf5094;
    plStack_110 = (long *)plStack_218[2];
    plStack_118 = (long *)plStack_218[1];
    plStack_100 = (long *)plStack_218[4];
    plStack_108 = (long *)plStack_218[3];
    plStack_f0 = (long *)plStack_218[6];
    plStack_f8 = (long *)plStack_218[5];
    plStack_e0 = (long *)plStack_218[8];
    plStack_e8 = (long *)plStack_218[7];
    plStack_120 = (long *)*plStack_218;
    plStack_c0 = plVar3;
    FUN_101bfa604(&uStack_80,&plStack_120);
    plStack_1d8 = plStack_78;
    if ((char)uStack_80 == '\x01') goto LAB_101bf50a4;
    if (lStack_210 == 1) {
LAB_101bf55f0:
      plVar5 = (long *)func_0x0001088c67cc(1,&UNK_10b26b1b0);
LAB_101bf5604:
      plStack_1e0 = (long *)0x8000000000000000;
      plStack_1d8 = plVar5;
      goto LAB_101bf50ac;
    }
    cVar2 = uStack_80._1_1_;
    plVar3 = plStack_218 + 0x12;
    plVar13 = (long *)plStack_218[9];
    plStack_c0 = plVar3;
    if (plVar13 == (long *)0x8000000000000005) goto LAB_101bf55f0;
    plVar5 = (long *)plStack_218[0xb];
    plVar14 = (long *)plStack_218[10];
    plStack_100 = (long *)plStack_218[0xd];
    plVar17 = (long *)plStack_218[0xc];
    plStack_f0 = (long *)plStack_218[0xf];
    plStack_f8 = (long *)plStack_218[0xe];
    plStack_e0 = (long *)plStack_218[0x11];
    plStack_e8 = (long *)plStack_218[0x10];
    plStack_120 = plVar13;
    plStack_118 = plVar14;
    plStack_110 = plVar5;
    plStack_108 = plVar17;
    if (plVar13 != (long *)0x8000000000000003) {
      plVar5 = (long *)FUN_1088c6880(&plStack_120,&uStack_80,&UNK_10b26b0d0);
      FUN_101bf7ce4(&plStack_120);
      goto LAB_101bf5604;
    }
    if ((plVar14 == (long *)0x8000000000000000) || (plVar14 == (long *)0x8000000000000001))
    goto LAB_101bf5604;
    if (lStack_210 == 2) {
LAB_101bf591c:
      plStack_120 = plVar13;
      plStack_c0 = plVar3;
      plVar13 = (long *)func_0x0001088c67cc(2,&UNK_10b26b1b0);
joined_r0x000101bf593c:
      plStack_1e0 = (long *)0x8000000000000000;
      plStack_1d8 = plVar13;
joined_r0x000101bf593c:
      if (plVar14 != (long *)0x0) {
        _free(plVar5);
      }
      goto LAB_101bf50ac;
    }
    plVar3 = plStack_218 + 0x1b;
    plStack_120 = (long *)plStack_218[0x12];
    if (plStack_120 == (long *)0x8000000000000005) goto LAB_101bf591c;
    plVar13 = (long *)plStack_218[0x14];
    plVar15 = (long *)plStack_218[0x13];
    plStack_100 = (long *)plStack_218[0x16];
    plVar16 = (long *)plStack_218[0x15];
    plStack_f0 = (long *)plStack_218[0x18];
    plStack_f8 = (long *)plStack_218[0x17];
    plStack_e0 = (long *)plStack_218[0x1a];
    plStack_e8 = (long *)plStack_218[0x19];
    plStack_118 = plVar15;
    plStack_110 = plVar13;
    plStack_108 = plVar16;
    plStack_c0 = plVar3;
    if (plStack_120 != (long *)0x8000000000000003) {
      plVar13 = (long *)FUN_1088c6880(&plStack_120,&uStack_80,&UNK_10b26b0d0);
      FUN_101bf7ce4(&plStack_120);
      goto joined_r0x000101bf593c;
    }
    if ((plVar15 == (long *)0x8000000000000000) || (plVar15 == (long *)0x8000000000000001))
    goto joined_r0x000101bf593c;
    if (lStack_210 == 3) {
LAB_101bf59e8:
      plStack_c0 = plVar3;
      plStack_250 = (long *)func_0x0001088c67cc(3,&UNK_10b26b1b0);
LAB_101bf59fc:
      plStack_1e0 = (long *)0x8000000000000000;
      plStack_1d8 = plStack_250;
      if (plVar15 != (long *)0x0) {
        _free(plVar13);
      }
      goto joined_r0x000101bf593c;
    }
    plVar3 = plStack_218 + 0x24;
    plVar6 = (long *)plStack_218[0x1b];
    if (plVar6 == (long *)0x8000000000000005) goto LAB_101bf59e8;
    plStack_110 = (long *)plStack_218[0x1d];
    plVar7 = (long *)plStack_218[0x1c];
    plStack_100 = (long *)plStack_218[0x1f];
    plVar18 = (long *)plStack_218[0x1e];
    plStack_f0 = (long *)plStack_218[0x21];
    plStack_f8 = (long *)plStack_218[0x20];
    plStack_e0 = (long *)plStack_218[0x23];
    plStack_e8 = (long *)plStack_218[0x22];
    plStack_120 = plVar6;
    plStack_118 = plVar7;
    plStack_108 = plVar18;
    plStack_c0 = plVar3;
    if (plVar6 != (long *)0x8000000000000000) {
      if (plVar6 == (long *)0x8000000000000003) {
        plStack_250 = plStack_110;
        if ((-0x7fffffffffffffff < (long)plVar7) && (plVar7 != (long *)0x8000000000000002))
        goto LAB_101bf5c5c;
      }
      else {
        plStack_250 = (long *)FUN_1088c6880(&plStack_120,&uStack_80,&UNK_10b26b0d0);
        FUN_101bf7ce4(&plStack_120);
      }
      goto LAB_101bf59fc;
    }
    FUN_101bf7ce4(&plStack_120);
    plVar7 = (long *)0x8000000000000000;
    plVar18 = extraout_x9;
LAB_101bf5c5c:
    plStack_1a8 = plStack_250;
    cStack_198 = cVar2;
    plStack_158 = plStack_250;
    plStack_148 = (long *)CONCAT71(uStack_197,cVar2);
    plStack_1e0 = plVar14;
    plStack_1d8 = plVar5;
    plStack_1d0 = plVar17;
    plStack_1c8 = plVar15;
    plStack_1c0 = plVar13;
    plStack_1b8 = plVar16;
    plStack_1b0 = plVar7;
    plStack_1a0 = plVar18;
    plStack_190 = plVar14;
    plStack_188 = plVar5;
    plStack_180 = plVar17;
    plStack_178 = plVar15;
    plStack_170 = plVar13;
    plStack_168 = plVar16;
    plStack_160 = plVar7;
    plStack_150 = plVar18;
    if (lStack_210 != 4) {
      plStack_1d8 = (long *)func_0x0001088c67cc(lStack_210,&UNK_10b26b0f0);
      plStack_1e0 = (long *)0x8000000000000000;
      FUN_101bf76d8(&plStack_190);
    }
    FUN_101bf7f14(plVar3,(lStack_210 * 0x48 - 0x120U >> 3) * -0x71c71c71c71c71c7);
  }
  if (plStack_220 != (long *)0x0) {
    _free(plStack_218);
  }
LAB_101bf5868:
  if (((long)uStack_228 < 0) && ((uStack_228 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_101bf7ce4(&uStack_228);
  }
  plVar3 = plStack_1d8;
  if (plStack_1e0 == (long *)0x8000000000000000) {
    *param_1 = 0x8000000000000000;
    if (*plStack_1d8 == 1) {
      FUN_101bf7a00(plStack_1d8 + 1);
    }
    else if ((*plStack_1d8 == 0) && (plStack_1d8[2] != 0)) {
      _free(plStack_1d8[1]);
    }
    _free(plVar3);
  }
  else {
    param_1[5] = plStack_1b8;
    param_1[4] = plStack_1c0;
    param_1[7] = plStack_1a8;
    param_1[6] = plStack_1b0;
    param_1[9] = CONCAT71(uStack_197,cStack_198);
    param_1[8] = plStack_1a0;
    param_1[1] = plStack_1d8;
    *param_1 = plStack_1e0;
    param_1[3] = plStack_1c8;
    param_1[2] = plStack_1d0;
  }
  return;
}

