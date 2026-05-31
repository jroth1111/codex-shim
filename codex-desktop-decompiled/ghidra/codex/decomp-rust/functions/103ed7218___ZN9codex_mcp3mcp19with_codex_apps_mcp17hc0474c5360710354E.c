
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN9codex_mcp3mcp19with_codex_apps_mcp17hc0474c5360710354E
               (long *param_1,long *param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  long *******ppppppplVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *******ppppppplVar12;
  undefined1 (*pauVar13) [16];
  long extraout_x1;
  uint uVar14;
  undefined *puVar15;
  long lVar16;
  long *******ppppppplVar17;
  byte *pbVar18;
  undefined1 uVar19;
  byte bVar20;
  long lVar21;
  ulong uVar22;
  long *******unaff_x25;
  undefined8 uVar23;
  long lVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  long *******ppppppplStack_380;
  long *******ppppppplStack_378;
  long *******ppppppplStack_370;
  long *******ppppppplStack_368;
  long *******ppppppplStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *******ppppppplStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long ******pppppplStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_280;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined4 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *******ppppppplStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long ******pppppplStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (((param_3 == (long *)0x0) || ((*(byte *)(param_4 + 0x138) & 1) == 0)) ||
     ((*param_3 < 0 && (2 < *param_3 + 0x7fffffffffffffffU)))) {
    uVar9 = FUN_103dc25f4(param_2[4],param_2[5],&UNK_108dc6fd0,10);
    lVar16 = 0;
    lVar24 = *param_2;
    uVar3 = param_2[1];
    bVar20 = (byte)(uVar9 >> 0x39);
    uVar9 = uVar9 & uVar3;
    uVar26 = *(undefined8 *)(lVar24 + uVar9);
    uVar11 = CONCAT17(-((byte)((ulong)uVar26 >> 0x38) == bVar20),
                      CONCAT16(-((byte)((ulong)uVar26 >> 0x30) == bVar20),
                               CONCAT15(-((byte)((ulong)uVar26 >> 0x28) == bVar20),
                                        CONCAT14(-((byte)((ulong)uVar26 >> 0x20) == bVar20),
                                                 CONCAT13(-((byte)((ulong)uVar26 >> 0x18) == bVar20)
                                                          ,CONCAT12(-((byte)((ulong)uVar26 >> 0x10)
                                                                     == bVar20),
                                                                    CONCAT11(-((byte)((ulong)uVar26
                                                                                     >> 8) == bVar20
                                                                              ),-((byte)uVar26 ==
                                                                                 bVar20)))))))) &
             0x8080808080808080;
    while( true ) {
      while (uVar11 == 0) {
        bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar26 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar26 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar26 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar26 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar26
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar26 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar26 >> 8) == -1),
                                                           -((char)uVar26 == -1)))))))),1);
        if ((bVar25 & 1) != 0) goto LAB_103ed7a80;
        lVar16 = lVar16 + 8;
        uVar9 = uVar9 + lVar16 & uVar3;
        uVar26 = *(undefined8 *)(lVar24 + uVar9);
        uVar11 = CONCAT17(-((byte)((ulong)uVar26 >> 0x38) == bVar20),
                          CONCAT16(-((byte)((ulong)uVar26 >> 0x30) == bVar20),
                                   CONCAT15(-((byte)((ulong)uVar26 >> 0x28) == bVar20),
                                            CONCAT14(-((byte)((ulong)uVar26 >> 0x20) == bVar20),
                                                     CONCAT13(-((byte)((ulong)uVar26 >> 0x18) ==
                                                               bVar20),CONCAT12(-((byte)((ulong)
                                                  uVar26 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)uVar26 >> 8) == bVar20),
                                                           -((byte)uVar26 == bVar20)))))))) &
                 0x8080808080808080;
      }
      uVar22 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = uVar9 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar3;
      lVar21 = lVar24 + uVar22 * -0x20;
      if ((*(long *)(lVar21 + -0x10) == 10) &&
         (**(long **)(lVar21 + -0x18) == 0x70615f7865646f63 &&
          (short)(*(long **)(lVar21 + -0x18))[1] == 0x7370)) break;
      uVar11 = uVar11 - 1 & uVar11;
    }
    puVar10 = (undefined8 *)(lVar24 + (uVar22 - 8 & uVar3));
    uVar26 = *puVar10;
    uVar23 = *(undefined8 *)(lVar24 + uVar22);
    uVar11 = CONCAT17(-((char)((ulong)uVar23 >> 0x38) == -1),
                      CONCAT16(-((char)((ulong)uVar23 >> 0x30) == -1),
                               CONCAT15(-((char)((ulong)uVar23 >> 0x28) == -1),
                                        CONCAT14(-((char)((ulong)uVar23 >> 0x20) == -1),
                                                 CONCAT13(-((char)((ulong)uVar23 >> 0x18) == -1),
                                                          CONCAT12(-((char)((ulong)uVar23 >> 0x10)
                                                                    == -1),CONCAT11(-((char)((ulong)
                                                  uVar23 >> 8) == -1),-((char)uVar23 == -1))))))));
    uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) +
        ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar26 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar26 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar26 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar26 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar26 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar26 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar26 >> 8) == -1),
                                                           -((char)uVar26 == -1))))))))) >> 3) < 8)
    {
      param_2[2] = param_2[2] + 1;
      uVar19 = 0xff;
    }
    else {
      uVar19 = 0x80;
    }
    *(undefined1 *)(lVar24 + uVar22) = uVar19;
    *(undefined1 *)(puVar10 + 1) = uVar19;
    param_2[3] = param_2[3] + -1;
    if (*(long *)(lVar21 + -0x20) != -0x8000000000000000) {
      lVar16 = *(long *)(lVar21 + -8);
      if (*(long *)(lVar21 + -0x20) != 0) {
        _free(*(undefined8 *)(lVar21 + -0x18));
      }
      goto joined_r0x000103ed748c;
    }
    goto LAB_103ed7a80;
  }
  puVar10 = (undefined8 *)_malloc(10);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,10);
    goto LAB_103ed7b34;
  }
  *(undefined2 *)(puVar10 + 1) = 0x7370;
  *puVar10 = 0x70615f7865646f63;
  uStack_3a8 = 10;
  uStack_398 = 10;
  lVar16 = *(long *)(param_4 + 8);
  lVar24 = *(long *)(param_4 + 0x48);
  puVar4 = *(undefined **)(param_4 + 0x50);
  lVar21 = *(long *)(param_4 + 0x58);
  ppppppplVar12 = *(long ********)(param_4 + 0x10);
  do {
    ppppppplVar17 = ppppppplVar12;
    puStack_3a0 = puVar10;
    if (ppppppplVar17 == (long *******)0x0) {
      ppppppplStack_190 = (long *******)0x0;
      ppppppplStack_188 = (long *******)0x1;
      ppppppplStack_180 = (long *******)0x0;
      goto LAB_103ed75c4;
    }
    pbVar18 = (byte *)((long)ppppppplVar17 + lVar16 + -1);
    bVar20 = *pbVar18;
    uVar14 = (uint)(char)bVar20;
    if ((char)bVar20 < 0) {
      pbVar18 = (byte *)((long)ppppppplVar17 + lVar16 + -2);
      bVar25 = *pbVar18;
      if ((char)bVar25 < -0x40) {
        pbVar18 = (byte *)((long)ppppppplVar17 + lVar16 + -3);
        bVar5 = *pbVar18;
        if ((char)bVar5 < -0x40) {
          pbVar18 = (byte *)((long)ppppppplVar17 + lVar16 + -4);
          uVar14 = bVar5 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          uVar14 = (int)(char)bVar5 & 0xf;
        }
        uVar14 = bVar25 & 0x3f | uVar14 << 6;
      }
      else {
        uVar14 = (int)(char)bVar25 & 0x1f;
      }
      uVar14 = (int)(char)bVar20 & 0x3fU | uVar14 << 6;
    }
    ppppppplVar12 = (long *******)(pbVar18 + -lVar16);
  } while (uVar14 == 0x2f);
  unaff_x25 = (long *******)_malloc(ppppppplVar17);
  if (unaff_x25 == (long *******)0x0) {
    func_0x0001087c9084(1,ppppppplVar17);
    goto LAB_103ed7b34;
  }
  _memcpy(unaff_x25,lVar16,ppppppplVar17);
  ppppppplStack_190 = ppppppplVar17;
  ppppppplStack_188 = unaff_x25;
  ppppppplStack_180 = ppppppplVar17;
  if (((long *******)0x12 < ppppppplVar17) &&
     ((((*unaff_x25 == (long ******)0x2f2f3a7370747468 &&
        unaff_x25[1] == (long ******)0x2e74706774616863) &&
        *(long *)((long)unaff_x25 + 0xb) == 0x6d6f632e74706774 ||
       (((long *******)0x16 < ppppppplVar17 &&
        ((*unaff_x25 == (long ******)0x2f2f3a7370747468 &&
         unaff_x25[1] == (long ******)0x65706f2e74616863) &&
         *(long *)((long)unaff_x25 + 0xf) == 0x6d6f632e69616e65)))) &&
      (uVar11 = func_0x000103e2d558(&UNK_108dc7610,0xc,unaff_x25,ppppppplVar17), (uVar11 & 1) == 0))
     )) {
    ppppppplStack_f0 = (long *******)&ppppppplStack_190;
    ppppppplStack_e8 = (long *******)&DAT_103e63590;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&ppppppplStack_390,s__backend_api_108ad0cfb,&ppppppplStack_f0);
    if (ppppppplStack_190 != (long *******)0x0) {
      _free(ppppppplStack_188);
    }
    ppppppplStack_188 = ppppppplStack_388;
    ppppppplStack_190 = ppppppplStack_390;
    ppppppplStack_180 = ppppppplStack_380;
  }
LAB_103ed75c4:
  ppppppplVar17 = ppppppplStack_180;
  ppppppplVar12 = ppppppplStack_188;
  ppppppplStack_1b8 = ppppppplStack_188;
  ppppppplStack_1c0 = ppppppplStack_190;
  ppppppplStack_1b0 = ppppppplStack_180;
  uVar11 = func_0x000103e2d558(&UNK_108dc7610,0xc,ppppppplStack_188,ppppppplStack_180);
  if ((uVar11 & 1) == 0) {
    uVar11 = func_0x000103e2d558(&UNK_108dc7662,10,ppppppplVar12,ppppppplVar17);
    bVar2 = (uVar11 & 1) == 0;
    if (bVar2) {
      ppppppplStack_390 = (long *******)&ppppppplStack_1c0;
      ppppppplStack_388 = (long *******)&DAT_103e63590;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppppppplStack_190,s__api_codex_108affd89,&ppppppplStack_390);
    }
    else {
      ppppppplStack_188 = ppppppplStack_1b8;
      ppppppplStack_190 = ppppppplStack_1c0;
      ppppppplStack_180 = ppppppplStack_1b0;
    }
    puVar15 = &UNK_108cde3ac;
    lStack_80 = 4;
  }
  else {
    bVar2 = false;
    ppppppplStack_188 = ppppppplStack_1b8;
    ppppppplStack_190 = ppppppplStack_1c0;
    ppppppplStack_180 = ppppppplStack_1b0;
    puVar15 = &UNK_108dc766c;
    lStack_80 = 9;
  }
  ppppppplStack_e8 = ppppppplStack_188;
  ppppppplStack_f0 = ppppppplStack_190;
  ppppppplStack_e0 = ppppppplStack_180;
  if (lVar24 != -0x8000000000000000) {
    lStack_80 = lVar21;
    puVar15 = puVar4;
  }
  lVar16 = 0;
  do {
    lVar24 = lStack_80;
    if (lVar16 == lStack_80) break;
    pbVar1 = puVar15 + lVar16;
    pbVar18 = pbVar1 + 1;
    uVar14 = (uint)*pbVar1;
    if ((char)*pbVar1 < '\0') {
      if (uVar14 < 0xe0) {
        pbVar18 = pbVar1 + 2;
        uVar14 = pbVar1[1] & 0x3f | (uVar14 & 0x1f) << 6;
      }
      else {
        uVar6 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
        if (uVar14 < 0xf0) {
          pbVar18 = pbVar1 + 3;
          uVar14 = uVar6 | (uVar14 & 0x1f) << 0xc;
        }
        else {
          pbVar18 = pbVar1 + 4;
          uVar14 = pbVar1[3] & 0x3f | uVar6 << 6 | (uVar14 & 7) << 0x12;
        }
      }
    }
    lVar24 = lVar16;
    lVar16 = (long)pbVar18 - (long)puVar15;
  } while (uVar14 == 0x2f);
  lStack_80 = lStack_80 - lVar24;
  pppppplStack_88 = (long ******)(puVar15 + lVar24);
  ppppppplStack_390 = (long *******)&ppppppplStack_f0;
  ppppppplStack_388 = (long *******)&DAT_103e63590;
  ppppppplStack_380 = &pppppplStack_88;
  ppppppplStack_378 = (long *******)&DAT_103d8be04;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&uStack_1d8,s___108ab8993,&ppppppplStack_390);
  if (ppppppplStack_f0 != (long *******)0x0) {
    _free(ppppppplStack_e8);
  }
  if ((bVar2) && (ppppppplStack_1c0 != (long *******)0x0)) {
    _free(ppppppplStack_1b8);
  }
  if (*(long *)(param_4 + 0x60) == -0x8000000000000000) {
    ppppppplStack_1c0 = (long *******)0x0;
  }
  else {
    ppppppplVar12 = (long *******)_malloc(0x14);
    if (ppppppplVar12 == (long *******)0x0) {
      func_0x0001087c9084(1,0x14);
      goto LAB_103ed7b34;
    }
    *(undefined4 *)(ppppppplVar12 + 2) = 0x756b532d;
    ppppppplVar12[1] = (long ******)0x746375646f72502d;
    *ppppppplVar12 = (long ******)0x49416e65704f2d58;
    uVar26 = *(undefined8 *)(param_4 + 0x68);
    ppppppplVar17 = *(long ********)(param_4 + 0x70);
    if (ppppppplVar17 == (long *******)0x0) {
      unaff_x25 = (long *******)0x1;
    }
    else {
      unaff_x25 = (long *******)_malloc(ppppppplVar17);
      if (unaff_x25 == (long *******)0x0) {
        func_0x0001087c9084(1,ppppppplVar17);
        goto LAB_103ed7b34;
      }
    }
    _memcpy(unaff_x25,uVar26,ppppppplVar17);
    ppppppplStack_390 = (long *******)0x14;
    ppppppplStack_380 = (long *******)0x14;
    ppppppplStack_388 = ppppppplVar12;
    ppppppplStack_378 = ppppppplVar17;
    ppppppplStack_370 = unaff_x25;
    ppppppplStack_368 = ppppppplVar17;
    func_0x00010897b014(&ppppppplStack_190,&ppppppplStack_390);
    ppppppplStack_1b8 = ppppppplStack_188;
    ppppppplStack_1c0 = ppppppplStack_190;
    ppppppplStack_1a8 = ppppppplStack_178;
    ppppppplStack_1b0 = ppppppplStack_180;
    ppppppplStack_198 = ppppppplStack_168;
    ppppppplStack_1a0 = ppppppplStack_170;
  }
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppppplStack_190,&UNK_108dc7675,0x16);
  ppppppplVar7 = ppppppplStack_180;
  ppppppplVar17 = ppppppplStack_188;
  ppppppplVar12 = ppppppplStack_190;
  uVar26 = 0x8000000000000000;
  if (ppppppplStack_190 != (long *******)0x8000000000000000) {
    func_0x0001055bf348(&ppppppplStack_390,ppppppplStack_188,ppppppplStack_180);
    ppppppplStack_380 = ppppppplVar17;
    ppppppplStack_378 = ppppppplVar7;
    ppppppplStack_388 = ppppppplVar12;
    if (((ulong)ppppppplStack_390 & 1) == 0) {
      func_0x000103dc1e38(ppppppplVar17,ppppppplVar7);
      if (extraout_x1 == 0) {
        if (ppppppplVar12 != (long *******)0x0) {
          _free(ppppppplVar17);
        }
        uVar26 = 0x8000000000000000;
        unaff_x25 = ppppppplVar7;
        goto LAB_103ed7900;
      }
      unaff_x25 = (long *******)_malloc(0x16);
      if (unaff_x25 == (long *******)0x0) {
        func_0x0001087c9084(1,0x16);
        goto LAB_103ed7b34;
      }
    }
    else {
      unaff_x25 = (long *******)_malloc(0x16);
      if (unaff_x25 == (long *******)0x0) {
        func_0x0001087c9084(1,0x16);
        goto LAB_103ed7b34;
      }
    }
    unaff_x25[1] = (long ******)0x53524f5443454e4e;
    *unaff_x25 = (long ******)0x4f435f5845444f43;
    pbVar18 = (byte *)((long)unaff_x25 + 0xe);
    pbVar18[0] = 0x52;
    pbVar18[1] = 0x53;
    pbVar18[2] = 0x5f;
    pbVar18[3] = 0x54;
    pbVar18[4] = 0x4f;
    pbVar18[5] = 0x4b;
    pbVar18[6] = 0x45;
    pbVar18[7] = 0x4e;
    if (ppppppplVar12 != (long *******)0x0) {
      _free(ppppppplVar17);
    }
    uVar26 = 0x16;
  }
LAB_103ed7900:
  ppppppplStack_180 = ppppppplStack_1b8;
  ppppppplStack_188 = ppppppplStack_1c0;
  ppppppplStack_170 = ppppppplStack_1a8;
  ppppppplStack_178 = ppppppplStack_1b0;
  ppppppplStack_160 = ppppppplStack_198;
  ppppppplStack_168 = ppppppplStack_1a0;
  uStack_108 = uStack_1d0;
  uStack_100 = uStack_1c8;
  uStack_118 = 0x16;
  uStack_158 = 0;
  ppppppplStack_190 = (long *******)0x1;
  ppppppplStack_f0 = (long *******)0x8000000000000007;
  uStack_b8 = 0x8000000000000000;
  uStack_a0 = 0x8000000000000000;
  pppppplStack_88 = (long ******)0x8000000000000000;
  uStack_128 = uVar26;
  ppppppplStack_120 = unaff_x25;
  uStack_110 = uStack_1d8;
  pauVar13 = (undefined1 (*) [16])
             (*
             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
             )();
  if (pauVar13[1][0] == '\x01') {
    auStack_1f8 = *pauVar13;
  }
  else {
    auStack_1f8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar13 + 8) = auStack_1f8._8_8_;
    pauVar13[1][0] = 1;
  }
  *(long *)*pauVar13 = auStack_1f8._0_8_ + 1;
  uStack_318 = uStack_118;
  ppppppplStack_320 = ppppppplStack_120;
  uStack_308 = uStack_108;
  uStack_310 = uStack_110;
  ppppppplStack_368 = ppppppplStack_168;
  ppppppplStack_370 = ppppppplStack_170;
  uStack_358 = uStack_158;
  ppppppplStack_360 = ppppppplStack_160;
  uStack_348 = uStack_148;
  uStack_350 = uStack_150;
  uStack_338 = uStack_138;
  uStack_340 = uStack_140;
  uStack_328 = uStack_128;
  uStack_330 = uStack_130;
  ppppppplStack_388 = ppppppplStack_188;
  ppppppplStack_390 = ppppppplStack_190;
  ppppppplStack_378 = ppppppplStack_178;
  ppppppplStack_380 = ppppppplStack_180;
  uStack_300 = uStack_100;
  uStack_2f8 = 0x8000000000000000;
  ppppppplStack_260 = ppppppplStack_e8;
  ppppppplStack_268 = ppppppplStack_f0;
  uStack_250 = uStack_d8;
  ppppppplStack_258 = ppppppplStack_e0;
  uStack_240 = uStack_c8;
  uStack_248 = uStack_d0;
  uStack_230 = 0;
  uStack_220 = 1000000000;
  uStack_1e8 = 0x3000001;
  uStack_2d8 = uStack_b0;
  uStack_2e0 = uStack_b8;
  uStack_2c0 = uStack_98;
  uStack_2c8 = uStack_a0;
  uStack_2d0 = uStack_a8;
  uStack_2b8 = uStack_90;
  lStack_2a8 = lStack_80;
  pppppplStack_2b0 = pppppplStack_88;
  uStack_238 = 0x1e;
  uStack_280 = 0x8000000000000001;
  uStack_2a0 = uStack_78;
  uStack_298 = 0x8000000000000000;
  uStack_210 = 0;
  puStack_218 = &UNK_108c56c70;
  uStack_200 = 0;
  uStack_208 = 0;
  lVar16 = _malloc(0x1b0);
  if (lVar16 == 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1b0);
LAB_103ed7b34:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103ed7b38);
    (*pcVar8)();
  }
  _memcpy(lVar16,&ppppppplStack_390,0x1b0);
  lVar16 = func_0x000103edf55c(param_2,&uStack_3a8,lVar16);
joined_r0x000103ed748c:
  if (lVar16 != 0) {
    func_0x000103db3a80(lVar16);
    _free(lVar16);
  }
LAB_103ed7a80:
  lVar16 = *param_2;
  lVar21 = param_2[3];
  lVar24 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar16;
  param_1[3] = lVar21;
  param_1[2] = lVar24;
  lVar16 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar16;
  return;
}

