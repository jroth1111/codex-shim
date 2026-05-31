
void __ZN25codex_model_provider_info17ModelProviderInfo15to_api_provider17h1077559709beb6f4E
               (undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  bool bVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 extraout_x13;
  undefined8 extraout_x14;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  undefined *puVar34;
  long *plVar35;
  long lVar36;
  ulong uVar37;
  long unaff_x23;
  long *plVar38;
  long lVar39;
  long lVar40;
  long *plVar41;
  undefined *puVar42;
  long *plVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  undefined *puStack_2f8;
  undefined *puStack_2b8;
  undefined *puStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  char cStack_158;
  undefined7 uStack_157;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 *apuStack_c8 [2];
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  char cStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puVar26;
  
  bVar18 = 2 < (param_3 & 0xff) - 1;
  lVar36 = 0x25;
  if (bVar18) {
    lVar36 = 0x19;
  }
  puVar23 = &UNK_108e0c097;
  if (bVar18) {
    puVar23 = &UNK_108e0c0bc;
  }
  if (param_2[0xb] == -0x8000000000000000) {
LAB_1046cd6d0:
    lVar20 = _malloc(lVar36);
    if (lVar20 != 0) goto LAB_1046cd6dc;
    func_0x0001087c9084(1,lVar36);
LAB_1046ce1dc:
    func_0x0001087c9084(1,unaff_x23);
    goto LAB_1046ce214;
  }
  puVar23 = (undefined *)param_2[0xc];
  lVar36 = param_2[0xd];
  if (lVar36 != 0) goto LAB_1046cd6d0;
  lVar20 = 1;
LAB_1046cd6dc:
  _memcpy(lVar20,puVar23,lVar36);
  plVar38 = (long *)param_2[0x2e];
  lVar39 = param_2[0x31];
  lVar30 = 0;
  if (plVar38 != (long *)0x0) {
    lVar30 = lVar39;
  }
  plVar41 = (long *)param_2[0x34];
  puVar42 = (undefined *)param_2[0x37];
  puVar23 = (undefined *)0x0;
  if (plVar41 != (long *)0x0) {
    puVar23 = puVar42;
  }
  puVar23 = puVar23 + lVar30;
  if (puVar23 != (undefined *)0x0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = puVar23;
    auVar11._8_8_ = 2;
    auVar11._0_8_ = 0xaaaaaaaaaaaaaaab;
    uVar44 = SUB168(auVar9 * auVar11,8) >> 1;
    if (!CARRY8((ulong)puVar23,(ulong)puVar23 / 3)) {
      uVar33 = 0;
      if (1 < uVar44) {
        uVar33 = 0xffffffffffffffff >> (LZCOUNT(uVar44 - 1) & 0x3fU);
      }
      if (uVar33 >> 0xf == 0) {
        uVar44 = uVar33 + 1;
        lVar30 = uVar44 * 4;
        puVar21 = (undefined8 *)_malloc(lVar30);
        if (puVar21 == (undefined8 *)0x0) {
          func_0x0001087c9084(2,lVar30);
          goto LAB_1046ce214;
        }
        puVar25 = puVar21;
        if (1 < uVar44) {
          if (uVar33 < 0x20) {
            uVar28 = 1;
            puVar26 = puVar21;
          }
          else {
            uVar29 = uVar33 & 0x7fe0;
            puVar26 = (undefined8 *)((long)puVar21 + uVar29 * 4);
            uVar28 = uVar29 | 1;
            puVar25 = puVar21 + 8;
            do {
              puVar25[-7] = 0xffff0000ffff;
              puVar25[-8] = 0xffff0000ffff;
              puVar25[-5] = 0xffff0000ffff;
              puVar25[-6] = 0xffff0000ffff;
              puVar25[-3] = 0xffff0000ffff;
              puVar25[-4] = 0xffff0000ffff;
              puVar25[-1] = 0xffff0000ffff;
              puVar25[-2] = 0xffff0000ffff;
              puVar25[1] = 0xffff0000ffff;
              *puVar25 = 0xffff0000ffff;
              puVar25[3] = 0xffff0000ffff;
              puVar25[2] = 0xffff0000ffff;
              puVar25[5] = 0xffff0000ffff;
              puVar25[4] = 0xffff0000ffff;
              puVar25[7] = 0xffff0000ffff;
              puVar25[6] = 0xffff0000ffff;
              puVar25 = puVar25 + 0x10;
              uVar29 = uVar29 - 0x20;
            } while (uVar29 != 0);
          }
          lVar45 = (uVar33 - uVar28) + 1;
          do {
            puVar25 = (undefined8 *)((long)puVar26 + 4);
            *(undefined4 *)puVar26 = 0xffff;
            lVar45 = lVar45 + -1;
            puVar26 = puVar25;
          } while (lVar45 != 0);
        }
        *(undefined4 *)puVar25 = 0xffff;
        puVar25 = (undefined8 *)(uVar44 - (uVar44 >> 2));
        if (puVar25 < (undefined8 *)0x13b13b13b13b13c) {
          lVar30 = (long)puVar25 * 0x68;
          if (puVar25 == (undefined8 *)0x0) {
            puStack_250 = (undefined *)0x0;
            iVar19 = _posix_memalign(&puStack_250,8,0);
            puVar23 = puStack_250;
            if (iVar19 == 0) goto joined_r0x0001046cd894;
            lVar30 = 0;
          }
          else {
            puVar23 = (undefined *)_malloc(lVar30);
joined_r0x0001046cd894:
            if (puVar23 != (undefined *)0x0) goto LAB_1046cd89c;
          }
          uVar22 = 8;
        }
        else {
          uVar22 = 0;
        }
        func_0x0001087c9084(uVar22,lVar30);
        goto LAB_1046ce214;
      }
    }
    func_0x000108a07a3c(&UNK_108e0c0d5,0x17,&puStack_150,&UNK_10b32d038,&UNK_10b32cff8);
    goto LAB_1046ce214;
  }
  puVar25 = (undefined8 *)0x0;
  uVar44 = 0;
  uVar33 = 0;
  puVar21 = (undefined8 *)0x2;
  puVar23 = (undefined *)0x8;
LAB_1046cd89c:
  puStack_250 = (undefined *)0x0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 8;
  uStack_210 = 0;
  uStack_1f8 = (undefined2)uVar33;
  puStack_238 = puVar25;
  puStack_230 = puVar23;
  puStack_208 = puVar21;
  uStack_200 = uVar44;
  if ((plVar38 != (long *)0x0) && (lVar39 != 0)) {
    plVar35 = plVar38 + 1;
    lVar30 = *plVar38;
    uVar44 = CONCAT17(-(-1 < lVar30),
                      CONCAT16(-(-1 < (char)((ulong)lVar30 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar30 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar30 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar30 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar30 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar30 >> 8)),-(-1 < (char)lVar30)))))))) &
             0x8080808080808080;
    puVar23 = puVar42;
    do {
      while (uVar44 == 0) {
        lVar30 = *plVar35;
        plVar38 = plVar38 + -0x30;
        plVar35 = plVar35 + 1;
        uVar44 = CONCAT17(-(-1 < lVar30),
                          CONCAT16(-(-1 < (char)((ulong)lVar30 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar30 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar30 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar30 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar30
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar30 >> 8)),-(-1 < (char)lVar30)))))))) &
                 0x8080808080808080;
      }
      uVar33 = (uVar44 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar44 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      iVar19 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
      __ZN4http6header4name10HeaderName10from_bytes17h99cd8f22dc0ad085E
                (&puStack_b8,plVar38[(long)-iVar19 * 6 + -5],plVar38[(long)-iVar19 * 6 + -4]);
      puVar34 = (undefined *)plVar38[(long)-iVar19 * 6 + -1];
      if (puVar34 == (undefined *)0x0) {
        puVar25 = (undefined8 *)0x0;
        bVar18 = false;
        cStack_158 = '\0';
        puVar23 = &UNK_10b205a90;
        puVar21 = (undefined8 *)0x1;
      }
      else {
        puVar27 = (undefined *)0x0;
        lVar30 = plVar38[(long)-iVar19 * 6 + -2];
        do {
          bVar8 = puVar27[lVar30];
          if (bVar8 < 0x20) {
            if (bVar8 != 9) {
LAB_1046cd960:
              cStack_158 = '\x02';
              bVar18 = true;
              puVar34 = puStack_2b8;
              goto LAB_1046cd9d0;
            }
          }
          else if (bVar8 == 0x7f) goto LAB_1046cd960;
          puVar27 = puVar27 + 1;
        } while (puVar34 != puVar27);
        puVar21 = (undefined8 *)_malloc(puVar34);
        if (puVar21 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,puVar34);
          goto LAB_1046ce214;
        }
        _memcpy(puVar21,lVar30,puVar34);
        puVar25 = puVar21;
        puVar23 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        if (((ulong)puVar21 & 1) == 0) {
          puVar25 = (undefined8 *)((ulong)puVar21 | 1);
          puVar23 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        }
        bVar18 = false;
        cStack_158 = '\0';
      }
LAB_1046cd9d0:
      puStack_198 = puStack_b0;
      puStack_1a0 = puStack_b8;
      puStack_188 = puStack_a0;
      puStack_190 = puStack_a8;
      puStack_178 = puVar23;
      puStack_170 = puVar21;
      puStack_168 = puVar34;
      puStack_160 = puVar25;
      if ((bVar18) || (((ulong)puStack_b8 & 1) != 0)) {
        if ((((ulong)puStack_b8 & 1) == 0) && (puStack_b0 != (undefined8 *)0x0)) {
          (*(code *)puStack_b0[4])(auStack_180,puStack_a8,puStack_a0);
        }
        if (cStack_158 != '\x02') {
          (**(code **)(puStack_178 + 0x20))(&puStack_160,puStack_170,puStack_168);
        }
      }
      else {
        puStack_1e8 = puStack_a8;
        puStack_1f0 = puStack_b0;
        puStack_1e0 = puStack_a0;
        uStack_1b0 = CONCAT71(uStack_157,cStack_158);
        puStack_1d0 = puVar23;
        puStack_1c8 = puVar21;
        puStack_1c0 = puVar34;
        puStack_1b8 = puVar25;
        func_0x0001046d0a44(&puStack_b8,&puStack_250,&puStack_1f0,&puStack_1d0);
        if (cStack_98 == '\x03') {
          func_0x000108a07a3c(&UNK_108e0c0d5,0x17,&puStack_150,&UNK_10b32d038,&UNK_10b32d010);
          goto LAB_1046ce214;
        }
        puStack_d8 = puStack_b0;
        puStack_e0 = puStack_b8;
        apuStack_c8[0] = puStack_a0;
        puStack_d0 = puStack_a8;
        if (cStack_98 != '\x02') {
          (**(code **)(puStack_b8 + 0x20))(apuStack_c8,puStack_b0,puStack_a8);
        }
      }
      uVar44 = uVar44 - 1 & uVar44;
      lVar39 = lVar39 + -1;
      puStack_2b8 = puVar34;
    } while (lVar39 != 0);
  }
  if ((plVar41 != (long *)0x0) && (puVar42 != (undefined *)0x0)) {
    plVar38 = plVar41 + 1;
    lVar30 = *plVar41;
    uVar44 = CONCAT17(-(-1 < lVar30),
                      CONCAT16(-(-1 < (char)((ulong)lVar30 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar30 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar30 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar30 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar30 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar30 >> 8)),-(-1 < (char)lVar30)))))))) &
             0x8080808080808080;
    do {
      while (uVar44 == 0) {
        lVar30 = *plVar38;
        plVar41 = plVar41 + -0x30;
        plVar38 = plVar38 + 1;
        uVar44 = CONCAT17(-(-1 < lVar30),
                          CONCAT16(-(-1 < (char)((ulong)lVar30 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar30 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar30 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar30 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar30
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar30 >> 8)),-(-1 < (char)lVar30)))))))) &
                 0x8080808080808080;
      }
      uVar33 = (uVar44 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar44 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      iVar19 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
      __ZN3std3env7_var_os17h6bd9111edd9950c4E
                (&puStack_b8,plVar41[(long)-iVar19 * 6 + -2],plVar41[(long)-iVar19 * 6 + -1]);
      puVar34 = puStack_a8;
      puVar21 = puStack_b0;
      puVar23 = puStack_b8;
      if (puStack_b8 != (undefined *)0x8000000000000000) {
        func_0x0001055bf348(&puStack_1a0,puStack_b0,puStack_a8);
        if ((((ulong)puStack_1a0 & 1) == 0) &&
           (lVar30 = func_0x0001046d0514(puVar21,puVar34), lVar30 != 0)) {
          __ZN4http6header4name10HeaderName10from_bytes17h99cd8f22dc0ad085E
                    (&puStack_b8,plVar41[(long)-iVar19 * 6 + -5],plVar41[(long)-iVar19 * 6 + -4]);
          if (puVar34 == puVar23) {
            if (puVar23 == (undefined *)0x0) {
              puStack_d0 = (undefined *)0x0;
              apuStack_c8[0] = (undefined8 *)0x0;
              puStack_d8 = (undefined8 *)0x1;
              puStack_e0 = &UNK_10b205a90;
            }
            else {
              bVar18 = ((ulong)puVar21 & 1) == 0;
              apuStack_c8[0] = puVar21;
              if (bVar18) {
                apuStack_c8[0] = (undefined8 *)((long)puVar21 + 1);
              }
              puStack_e0 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
              if (!bVar18) {
                puStack_e0 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
              }
LAB_1046cdbf8:
              puStack_d8 = puVar21;
              puVar34 = (undefined *)0x0;
              do {
                bVar8 = *(byte *)((long)puVar21 + (long)puVar34);
                puStack_d0 = puVar23;
                if (bVar8 < 0x20) {
                  if (bVar8 != 9) goto LAB_1046cdc28;
                }
                else if (bVar8 == 0x7f) {
LAB_1046cdc28:
                  (**(code **)(puStack_e0 + 0x20))(apuStack_c8,puVar21,puVar23);
                  cStack_158 = '\x02';
                  bVar18 = true;
                  goto LAB_1046cdc78;
                }
                puVar34 = puVar34 + 1;
              } while (puVar23 != puVar34);
            }
          }
          else {
            puVar25 = (undefined8 *)_malloc(0x18);
            if (puVar25 == (undefined8 *)0x0) {
              func_0x0001087c906c(8,0x18);
              goto LAB_1046ce214;
            }
            *puVar25 = puVar21;
            puVar25[1] = puVar23;
            puVar25[2] = 1;
            puStack_d0 = puVar34;
            puStack_e0 = &UNK_10b205b08;
            puStack_d8 = puVar21;
            puVar23 = puVar34;
            apuStack_c8[0] = puVar25;
            if (puVar34 != (undefined *)0x0) goto LAB_1046cdbf8;
          }
          bVar18 = false;
          cStack_158 = '\0';
          puStack_148 = puStack_d8;
          puStack_150 = puStack_e0;
          puStack_138 = apuStack_c8[0];
          puStack_140 = puStack_d0;
LAB_1046cdc78:
          puStack_198 = puStack_b0;
          puStack_1a0 = puStack_b8;
          puStack_188 = puStack_a0;
          puStack_190 = puStack_a8;
          puStack_170 = puStack_148;
          puStack_178 = puStack_150;
          puStack_160 = puStack_138;
          puStack_168 = puStack_140;
          if ((bVar18) || (((ulong)puStack_b8 & 1) != 0)) {
            if ((((ulong)puStack_b8 & 1) == 0) && (puStack_b0 != (undefined8 *)0x0)) {
              (*(code *)puStack_b0[4])(auStack_180,puStack_a8,puStack_a0);
            }
            if (cStack_158 != '\x02') {
              (**(code **)(puStack_178 + 0x20))(&puStack_160,puStack_170,puStack_168);
            }
          }
          else {
            puStack_128 = puStack_a8;
            puStack_130 = puStack_b0;
            puStack_120 = puStack_a0;
            puStack_108 = puStack_148;
            puStack_110 = puStack_150;
            puStack_f8 = puStack_138;
            puStack_100 = puStack_140;
            uStack_f0 = CONCAT71(uStack_157,cStack_158);
            func_0x0001046d0a44(&puStack_b8,&puStack_250,&puStack_130,&puStack_110);
            if (cStack_98 == '\x03') {
              func_0x000108a07a3c(&UNK_108e0c0d5,0x17,&puStack_150,&UNK_10b32d038,&UNK_10b32d010);
              goto LAB_1046ce214;
            }
            puStack_d8 = puStack_b0;
            puStack_e0 = puStack_b8;
            apuStack_c8[0] = puStack_a0;
            puStack_d0 = puStack_a8;
            if (cStack_98 != '\x02') {
              (**(code **)(puStack_b8 + 0x20))(apuStack_c8,puStack_b0,puStack_a8);
            }
          }
        }
        else if (puVar23 != (undefined *)0x0) {
          _free(puVar21);
        }
      }
      uVar44 = uVar44 - 1 & uVar44;
      puVar42 = puVar42 + -1;
    } while (puVar42 != (undefined *)0x0);
  }
  uVar28 = uStack_200;
  puVar25 = puStack_208;
  uVar16 = uStack_210;
  uVar15 = uStack_218;
  uVar14 = uStack_220;
  uVar13 = uStack_228;
  puVar42 = puStack_230;
  puVar21 = puStack_238;
  uVar29 = uStack_240;
  uVar33 = uStack_248;
  puVar23 = puStack_250;
  uVar12 = CONCAT62(uStack_1f6,uStack_1f8);
  uVar22 = *param_2;
  uVar44 = param_2[1];
  uVar4 = param_2[9];
  unaff_x23 = param_2[10];
  if (unaff_x23 == 0) {
    lVar30 = 1;
  }
  else {
    lVar30 = _malloc(unaff_x23);
    if (lVar30 == 0) goto LAB_1046ce1dc;
  }
  _memcpy(lVar30,uVar4,unaff_x23);
  plVar38 = (long *)param_2[0x28];
  if (plVar38 == (long *)0x0) {
    puStack_2f8 = (undefined *)0x0;
    uVar7 = *(uint *)(param_2 + 4);
    uVar4 = extraout_x13;
    uVar5 = extraout_x14;
    lVar39 = lStack_80;
    goto joined_r0x0001046cde4c;
  }
  uVar4 = param_2[0x2c];
  uVar5 = param_2[0x2d];
  uVar31 = param_2[0x29];
  if (uVar31 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_2f8 = &UNK_108c56c70;
    lStack_80 = 0;
    uVar7 = *(uint *)(param_2 + 4);
    lVar39 = lStack_80;
    goto joined_r0x0001046cde4c;
  }
  uVar1 = uVar31 + 1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  if (SUB168(auVar10 * ZEXT816(0x30),8) == 0) {
    uVar37 = uVar1 * 0x30;
    uVar2 = uVar31 + 9;
    uVar3 = uVar37 + uVar2;
    if ((!CARRY8(uVar37,uVar2)) && (uVar3 < 0x7ffffffffffffff9)) {
      if (uVar3 == 0) {
        puStack_2f8 = (undefined *)0x8;
LAB_1046cdf9c:
        puStack_2f8 = puStack_2f8 + uVar37;
        uStack_240 = uVar31;
        if (7 < uVar31) {
          uStack_240 = (uVar1 >> 3) * 7;
        }
        puStack_238 = (undefined8 *)0x0;
        puStack_250 = puStack_2f8;
        uStack_248 = uVar31;
        _memcpy(puStack_2f8,plVar38,uVar2);
        lVar39 = param_2[0x2b];
        if (lVar39 != 0) {
          plVar35 = plVar38 + 1;
          lVar45 = *plVar38;
          uVar31 = CONCAT17(-(-1 < lVar45),
                            CONCAT16(-(-1 < (char)((ulong)lVar45 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar45 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar45 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar45 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar45 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar45 >> 8)),
                                                           -(-1 < (char)lVar45)))))))) &
                   0x8080808080808080;
          plVar41 = plVar38;
          lVar45 = lVar39;
          do {
            while (uVar31 == 0) {
              lVar46 = *plVar35;
              plVar41 = plVar41 + -0x30;
              plVar35 = plVar35 + 1;
              uVar31 = CONCAT17(-(-1 < lVar46),
                                CONCAT16(-(-1 < (char)((ulong)lVar46 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar46 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar46 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar46 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar46 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar46 >> 8)),
                                                           -(-1 < (char)lVar46)))))))) &
                       0x8080808080808080;
            }
            uVar1 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            plVar43 = plVar41 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6
            ;
            lVar46 = plVar43[-5];
            lVar6 = plVar43[-4];
            if (lVar6 == 0) {
              lVar24 = 1;
              _memcpy(1,lVar46,0);
              lVar46 = plVar43[-2];
              lVar32 = plVar43[-1];
              if (lVar32 == 0) goto LAB_1046ce010;
LAB_1046ce0e0:
              lVar40 = _malloc(lVar32);
              if (lVar40 == 0) {
                func_0x0001087c9084(1,lVar32);
                goto LAB_1046ce214;
              }
            }
            else {
              lVar24 = _malloc(lVar6);
              if (lVar24 == 0) {
                func_0x0001087c9084(1,lVar6);
                goto LAB_1046ce214;
              }
              _memcpy(lVar24,lVar46,lVar6);
              lVar46 = plVar43[-2];
              lVar32 = plVar43[-1];
              if (lVar32 != 0) goto LAB_1046ce0e0;
LAB_1046ce010:
              lVar40 = 1;
            }
            uVar31 = uVar31 - 1 & uVar31;
            lVar45 = lVar45 + -1;
            _memcpy(lVar40,lVar46,lVar32);
            plVar43 = (long *)(puStack_2f8 + ((long)plVar38 - (long)plVar43 >> 4) * -0x10 + -0x30);
            *plVar43 = lVar6;
            plVar43[1] = lVar24;
            plVar43[2] = lVar6;
            plVar43[3] = lVar32;
            plVar43[4] = lVar40;
            plVar43[5] = lVar32;
          } while (lVar45 != 0);
        }
        uStack_88 = param_2[0x2a];
        uVar7 = *(uint *)(param_2 + 4);
        uStack_90 = uStack_248;
joined_r0x0001046cde4c:
        if ((uVar7 & 1) == 0) {
          iVar19 = 0;
          uVar31 = 300;
        }
        else {
          uVar31 = (ulong)param_2[5] / 1000;
          iVar19 = ((int)param_2[5] + (int)uVar31 * -1000) * 1000000;
        }
        if (99 < uVar44) {
          uVar44 = 100;
        }
        if ((int)uVar22 == 0) {
          uVar44 = 4;
        }
        param_1[5] = uVar13;
        param_1[4] = puVar42;
        param_1[7] = uVar15;
        param_1[6] = uVar14;
        param_1[9] = puVar25;
        param_1[8] = uVar16;
        param_1[0xb] = uVar12;
        param_1[10] = uVar28;
        param_1[1] = uVar33;
        *param_1 = puVar23;
        param_1[3] = puVar21;
        param_1[2] = uVar29;
        param_1[0xc] = unaff_x23;
        param_1[0xd] = lVar30;
        param_1[0xe] = unaff_x23;
        param_1[0xf] = lVar36;
        param_1[0x10] = lVar20;
        param_1[0x11] = lVar36;
        param_1[0x12] = 0;
        *(undefined4 *)(param_1 + 0x13) = 200000000;
        param_1[0x14] = uVar44;
        *(undefined2 *)(param_1 + 0x15) = 0x100;
        *(undefined1 *)((long)param_1 + 0xaa) = 1;
        param_1[0x16] = uVar31;
        *(int *)(param_1 + 0x17) = iVar19;
        param_1[0x18] = puStack_2f8;
        param_1[0x1a] = uStack_88;
        param_1[0x19] = uStack_90;
        param_1[0x1b] = lVar39;
        param_1[0x1c] = uVar4;
        param_1[0x1d] = uVar5;
        return;
      }
      if (uVar3 < 8) {
        puStack_250 = (undefined *)0x0;
        iVar19 = _posix_memalign(&puStack_250,8,uVar3);
        puStack_2f8 = puStack_250;
        if (iVar19 == 0) goto LAB_1046cdf98;
      }
      else {
        puStack_2f8 = (undefined *)_malloc(uVar3);
LAB_1046cdf98:
        if (puStack_2f8 != (undefined *)0x0) goto LAB_1046cdf9c;
      }
      func_0x0001087c906c(8,uVar3);
      goto LAB_1046ce214;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
LAB_1046ce214:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x1046ce218);
  (*pcVar17)();
}

