
undefined1  [16] FUN_1006df03c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *unaff_x21;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined8 **ppuStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 **ppuStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 **ppuStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 **ppuStack_220;
  undefined8 *puStack_218;
  undefined8 **ppuStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 **ppuStack_1b8;
  long lStack_1b0;
  undefined8 **ppuStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 **ppuStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 **ppuStack_98;
  code *pcStack_90;
  undefined8 **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  bVar4 = *(byte *)(param_1 + 0x162);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      lVar11 = *param_1;
      param_1[1] = lVar11;
      lVar1 = *(long *)(lVar11 + 8);
      lVar2 = *(long *)(lVar11 + 0x10);
      uVar5 = *(undefined1 *)(lVar11 + 0x49);
      lVar12 = *(long *)(lVar11 + 0x28);
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x18) != -0x8000000000000000) {
        lVar15 = *(long *)(lVar11 + 0x20);
      }
      param_1[2] = lVar15;
      param_1[3] = lVar12;
      param_1[6] = lVar1;
      param_1[7] = lVar2;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      *(undefined1 *)((long)param_1 + 0x43) = uVar5;
      *(undefined1 *)((long)param_1 + 0x44) = 1;
      goto LAB_1006df0bc;
    }
    FUN_107c05cc0(&UNK_10b21e330,param_2,param_2);
LAB_1006df558:
    FUN_107c05cc4(&UNK_10b21e330);
LAB_1006df564:
    FUN_107c03c64(1,0x4f);
LAB_1006df580:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1006df584);
    (*pcVar8)();
  }
  if (bVar4 != 3) goto LAB_1006df558;
LAB_1006df0bc:
  FUN_1006e3428(&ppuStack_180,param_1 + 2);
  puVar14 = puStack_178;
  ppuStack_2e8 = ppuStack_180;
  if ((undefined8 ***)ppuStack_180 == (undefined8 ***)0x8000000000000005) {
    *(undefined1 *)(param_1 + 0x162) = 3;
    uVar10 = 1;
    puVar14 = unaff_x21;
    goto LAB_1006df528;
  }
  uStack_1e8 = uStack_108;
  uStack_1f0 = uStack_110;
  uStack_1d8 = uStack_f8;
  lStack_1e0 = lStack_100;
  uStack_1d0 = uStack_f0;
  uStack_228 = uStack_148;
  uStack_230 = uStack_150;
  puStack_218 = puStack_138;
  ppuStack_220 = ppuStack_140;
  lStack_208 = lStack_128;
  ppuStack_210 = ppuStack_130;
  uStack_1f8 = uStack_118;
  lStack_200 = lStack_120;
  puStack_248 = puStack_168;
  ppuStack_250 = ppuStack_170;
  uStack_238 = uStack_158;
  uStack_240 = uStack_160;
  FUN_100e5e3e0(param_1 + 2);
  if ((undefined8 ***)ppuStack_2e8 == (undefined8 ***)0x8000000000000003) {
LAB_1006df1a4:
    puVar14 = (undefined8 *)0x0;
  }
  else if ((undefined8 ***)ppuStack_2e8 != (undefined8 ***)0x8000000000000004) {
    puStack_2e0 = puVar14;
    uStack_258 = uStack_1d0;
    uStack_260 = uStack_1d8;
    lStack_268 = lStack_1e0;
    uStack_270 = uStack_1e8;
    uStack_278 = uStack_1f0;
    lStack_290 = lStack_208;
    ppuStack_298 = ppuStack_210;
    uStack_280 = uStack_1f8;
    lStack_288 = lStack_200;
    puStack_2a0 = puStack_218;
    ppuStack_2a8 = ppuStack_220;
    uStack_2b0 = uStack_228;
    uStack_2b8 = uStack_230;
    uStack_2c0 = uStack_238;
    uStack_2c8 = uStack_240;
    puStack_2d0 = puStack_248;
    ppuStack_2d8 = ppuStack_250;
    lVar15 = param_1[1];
    bVar4 = *(byte *)(lVar15 + 0x48);
    if (bVar4 != 2) {
      if ((undefined8 ***)ppuStack_2e8 != (undefined8 ***)0x8000000000000000) {
        if ((bVar4 & 1) != 0) {
          puStack_178 = (undefined8 *)_malloc(0x4c);
          if (puStack_178 == (undefined8 *)0x0) {
            FUN_107c03c64(1,0x4c);
            goto LAB_1006df580;
          }
          puStack_178[5] = 0x6e65727275632073;
          puStack_178[4] = 0x6920545047746168;
          puStack_178[7] = 0x202e646573752067;
          puStack_178[6] = 0x6e69656220796c74;
          *(undefined8 *)((long)puStack_178 + 0x44) = 0x2e74756f20676e69;
          *(undefined8 *)((long)puStack_178 + 0x3c) = 0x67676f4c202e6465;
          puStack_178[1] = 0x7369206e69676f6c;
          *puStack_178 = 0x2079656b20495041;
          puStack_178[3] = 0x4320747562202c64;
          puStack_178[2] = 0x6572697571657220;
          ppuStack_180 = (undefined8 ***)0x4c;
          goto LAB_1006df2cc;
        }
        goto LAB_1006df18c;
      }
      if ((bVar4 & 1) != 0) goto LAB_1006df18c;
      puStack_178 = (undefined8 *)_malloc(0x4f);
      if (puStack_178 == (undefined8 *)0x0) goto LAB_1006df564;
      puStack_178[5] = 0x7275632073692079;
      puStack_178[4] = 0x656b20495041206e;
      puStack_178[7] = 0x65737520676e6965;
      puStack_178[6] = 0x6220796c746e6572;
      *(undefined8 *)((long)puStack_178 + 0x47) = 0x2e74756f20676e69;
      *(undefined8 *)((long)puStack_178 + 0x3f) = 0x67676f4c202e6465;
      puStack_178[1] = 0x7369206e69676f6c;
      *puStack_178 = 0x2054504774616843;
      puStack_178[3] = 0x6120747562202c64;
      puStack_178[2] = 0x6572697571657220;
      ppuStack_180 = (undefined8 ***)0x4f;
LAB_1006df2cc:
      ppuStack_170 = ppuStack_180;
      puVar14 = (undefined8 *)
                __ZN11codex_login4auth7manager19logout_with_message17h7c115205776ed118E
                          (*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),&ppuStack_180,
                           *(undefined1 *)(lVar15 + 0x49));
      goto LAB_1006df514;
    }
LAB_1006df18c:
    if (*(long *)(lVar15 + 0x30) == -0x8000000000000000) {
LAB_1006df19c:
      FUN_100e0609c(&ppuStack_2e8);
      goto LAB_1006df1a4;
    }
    lVar1 = *(long *)(lVar15 + 0x38);
    lVar15 = *(long *)(lVar15 + 0x40);
    uVar13 = (ulong)ppuStack_2e8 ^ 0x8000000000000000;
    if (-1 < (long)ppuStack_2e8) {
      uVar13 = 3;
    }
    if (uVar13 - 1 < 2) {
      __ZN11codex_login4auth7manager9CodexAuth14get_token_data17h095fbfd8845cb054E
                (&ppuStack_180,&ppuStack_2e8);
      puVar14 = puStack_178;
      ppuVar7 = ppuStack_180;
      if ((undefined8 ***)ppuStack_180 == (undefined8 ***)0x8000000000000000) {
        puStack_b8 = puStack_178;
        uVar10 = *(undefined8 *)(param_1[1] + 8);
        uVar3 = *(undefined8 *)(param_1[1] + 0x10);
        ppuStack_98 = &puStack_b8;
        pcStack_90 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        FUN_100f3f484(&ppuStack_88,s_KFailed_to_load_ChatGPT_credenti_108ac3718,&ppuStack_98);
        lStack_a8 = lStack_80;
        ppuStack_b0 = ppuStack_88;
        uStack_a0 = uStack_78;
        puVar14 = (undefined8 *)
                  __ZN11codex_login4auth7manager19logout_with_message17h7c115205776ed118E
                            (uVar10,uVar3,&ppuStack_b0,*(undefined1 *)(param_1[1] + 0x49));
        FUN_100de21d4(&puStack_b8);
      }
      else {
        puStack_198 = puStack_138;
        ppuStack_1a0 = ppuStack_140;
        lStack_188 = lStack_128;
        ppuStack_190 = ppuStack_130;
        lStack_1b0 = lStack_128;
        ppuStack_1b8 = ppuStack_130;
        puStack_1c0 = puStack_138;
        if (((ulong)puStack_168 & 0x7fffffffffffffff) != 0) {
          _free(uStack_160);
        }
        if ((-0x7fffffffffffffff < lStack_120) && (lStack_120 != 0)) {
          _free(uStack_118);
        }
        if ((uStack_150 & 0x7fffffffffffffff) != 0) {
          _free(uStack_148);
        }
        if ((undefined8 ***)ppuVar7 != (undefined8 ***)0x0) {
          _free(puVar14);
        }
        if (lStack_100 != 0) {
          _free(uStack_f8);
        }
        if (lStack_e8 != 0) {
          _free(uStack_e0);
        }
        if ((uStack_d0 & 0x7fffffffffffffff) != 0) {
          _free(uStack_c8);
        }
LAB_1006df3d8:
        lVar2 = lStack_1b0;
        ppuVar7 = ppuStack_1b8;
        puVar6 = puStack_1c0;
        if ((puStack_1c0 != (undefined8 *)0x8000000000000000) && (lVar15 != 0)) {
          lVar11 = lVar15 * 0x18;
          plVar16 = (long *)(lVar1 + 0x10);
          do {
            if ((*plVar16 == lVar2) && (iVar9 = _memcmp(plVar16[-1],ppuVar7,lVar2), iVar9 == 0)) {
              if (puVar6 != (undefined8 *)0x0) {
                _free(ppuVar7);
              }
              goto LAB_1006df19c;
            }
            plVar16 = plVar16 + 3;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != 0);
        }
        FUN_100f3f514(&ppuStack_88,lVar1,lVar15,&UNK_108ca7fce,2);
        if (puVar6 == (undefined8 *)0x8000000000000000) {
          ppuStack_1a0 = &ppuStack_88;
          puStack_198 = (undefined8 *)&DAT_10112965c;
          FUN_100f3f484(&ppuStack_180,s__Login_is_restricted_to_workspac_108ac3775,&ppuStack_1a0);
        }
        else {
          ppuStack_b0 = ppuVar7;
          lStack_a8 = lVar2;
          ppuStack_180 = &ppuStack_88;
          puStack_178 = (undefined8 *)&DAT_10112965c;
          ppuStack_170 = &ppuStack_b0;
          puStack_168 = &DAT_100c7b3a0;
          FUN_100f3f484(&ppuStack_1a0,s__Login_is_restricted_to_workspac_108ac37e0,&ppuStack_180);
          ppuStack_180 = ppuStack_1a0;
          puStack_178 = puStack_198;
          ppuStack_170 = ppuStack_190;
        }
        lVar15 = param_1[1];
        puVar14 = (undefined8 *)
                  __ZN11codex_login4auth7manager19logout_with_message17h7c115205776ed118E
                            (*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),
                             &ppuStack_180,*(undefined1 *)(lVar15 + 0x49));
        if ((undefined8 ***)ppuStack_88 != (undefined8 ***)0x0) {
          _free(lStack_80);
        }
        if (((ulong)puVar6 & 0x7fffffffffffffff) != 0) {
          _free(ppuVar7);
        }
      }
    }
    else {
      if (uVar13 != 0) {
        __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                  (&puStack_1c0,&ppuStack_2e8);
        goto LAB_1006df3d8;
      }
      puVar14 = (undefined8 *)0x0;
    }
LAB_1006df514:
    FUN_100e0609c(&ppuStack_2e8);
  }
  uVar10 = 0;
  *(undefined1 *)(param_1 + 0x162) = 1;
LAB_1006df528:
  auVar17._8_8_ = puVar14;
  auVar17._0_8_ = uVar10;
  return auVar17;
}

