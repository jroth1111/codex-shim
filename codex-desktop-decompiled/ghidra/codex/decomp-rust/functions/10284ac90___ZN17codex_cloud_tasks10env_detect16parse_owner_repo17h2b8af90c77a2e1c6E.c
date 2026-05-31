
void __ZN17codex_cloud_tasks10env_detect16parse_owner_repo17h2b8af90c77a2e1c6E
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  long *plVar6;
  ushort uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined8 *extraout_x8;
  int *piVar21;
  byte *pbVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  undefined *puVar26;
  int *piVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined *unaff_x24;
  long lVar31;
  long lVar32;
  undefined1 auVar33 [16];
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  long lStack_398;
  undefined8 uStack_390;
  undefined4 uStack_37c;
  undefined2 uStack_378;
  undefined4 uStack_376;
  undefined2 uStack_372;
  uint uStack_370;
  uint uStack_36c;
  undefined *puStack_368;
  long *plStack_360;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 auStack_160 [24];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [24];
  long *plStack_100;
  undefined *puStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined2 uStack_88;
  
  auVar33 = func_0x00010286cd44();
  puVar26 = auVar33._8_8_;
  if (puVar26 == (undefined *)0x0) {
    puVar12 = (ulong *)0x1;
  }
  else {
    puVar11 = (ulong *)_malloc(puVar26);
    if (puVar11 == (ulong *)0x0) {
      uVar14 = func_0x0001087c9084(1,puVar26);
      if (lStack_148 != 0) {
        _free(lStack_140);
      }
      if (puVar26 != (undefined *)0x0) {
        _free();
      }
      auVar33 = __Unwind_Resume(uVar14);
      lVar24 = auVar33._8_8_;
      piVar27 = auVar33._0_8_;
      if (lVar24 == 0) {
        *extraout_x8 = 2;
        return;
      }
      if (param_4 == 0) {
LAB_10284ad90:
        if (lVar24 != 1) {
          lVar29 = 0;
LAB_10284ae1c:
          lVar13 = lVar29;
          if (lVar24 * 0x48 - lVar13 != 0) goto code_r0x00010284ae24;
          lVar29 = *(long *)(piVar27 + 2);
          if (*piVar27 == 0) {
            lVar29 = 0;
          }
          lVar24 = (lVar24 * 0x48 - 0x48U >> 3) * -0x71c71c71c71c71c7;
          piVar5 = piVar27;
          do {
            piVar21 = piVar5 + 0x12;
            lVar13 = *(long *)(piVar5 + 0x14);
            if (*piVar21 == 0) {
              lVar13 = 0;
            }
            if (lVar29 <= lVar13) {
              lVar29 = lVar13;
              piVar27 = piVar21;
            }
            lVar24 = lVar24 + -1;
            piVar5 = piVar21;
          } while (lVar24 != 0);
          plStack_360 = (long *)(piVar27 + 4);
          puStack_358 = &DAT_102876808;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (auStack_3b0,s__env__selecting_by_task_count_fi_108aeddff,&plStack_360);
          func_0x00010285b920(auStack_3b0);
          uVar14 = *(undefined8 *)(piVar27 + 6);
          lVar24 = *(long *)(piVar27 + 8);
          if (lVar24 != 0) {
            lVar29 = _malloc(lVar24);
            if (lVar29 != 0) goto LAB_10284b0f8;
            goto LAB_10284b288;
          }
          lVar29 = 1;
LAB_10284b0f8:
          _memcpy(lVar29,uVar14,lVar24);
          if (*(long *)(piVar27 + 10) == -0x8000000000000000) goto LAB_10284b118;
          uVar14 = *(undefined8 *)(piVar27 + 0xc);
          lVar13 = *(long *)(piVar27 + 0xe);
          if (lVar13 == 0) goto LAB_10284b138;
          unaff_x24 = (undefined *)_malloc(lVar13);
          if (unaff_x24 == (undefined *)0x0) {
            func_0x0001087c9084(1,lVar13);
            goto LAB_10284b2d0;
          }
          goto LAB_10284b13c;
        }
        __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(&plStack_360);
        func_0x000102877ca8(&lStack_398,&plStack_360);
        uStack_37c = 0;
        uStack_378 = 0x1b6;
        uStack_372 = 1;
        uStack_376 = 0x10000;
        plStack_360 = (long *)0x6f6c2e726f727265;
        puStack_358 = (undefined *)CONCAT62(puStack_358._2_6_,0x67);
        __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                  (&puStack_1e0,&plStack_360,10);
        if ((int)puStack_1e0 == 1) {
          puStack_368 = &UNK_10b4add80;
LAB_10284af9c:
          if (((ulong)puStack_368 & 3) == 1) {
            puVar28 = (undefined8 *)(puStack_368 + -1);
            uVar14 = *puVar28;
            puVar30 = *(undefined8 **)(puStack_368 + 7);
            pcVar8 = (code *)*puVar30;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar14);
            }
            if (puVar30[1] != 0) {
              _free(uVar14);
            }
            _free(puVar28);
          }
        }
        else {
          FUN_10602e6c4(&uStack_370,uStack_1d8,&uStack_37c);
          if ((uStack_370 & 1) != 0) goto LAB_10284af9c;
          uStack_370 = uStack_36c;
          puStack_1e0 = &UNK_108d424d0;
          uStack_1d8 = 0x2f;
          plStack_360 = &lStack_398;
          puStack_358 = &DAT_102876808;
          ppuStack_350 = &puStack_1e0;
          puStack_348 = &DAT_10285f360;
          uVar18 = func_0x00010285eba8(&uStack_370,&plStack_360);
          if ((uVar18 & 3) == 1) {
            uVar14 = *(undefined8 *)(uVar18 - 1);
            puVar28 = *(undefined8 **)(uVar18 + 7);
            pcVar8 = (code *)*puVar28;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar14);
            }
            if (puVar28[1] != 0) {
              _free(uVar14);
            }
            _free((undefined8 *)(uVar18 - 1));
          }
          _close(uStack_370);
        }
        if (lStack_398 != 0) {
          _free(uStack_390);
        }
        uVar14 = *(undefined8 *)(piVar27 + 6);
        lVar24 = *(long *)(piVar27 + 8);
        if (lVar24 == 0) {
          lVar29 = 1;
        }
        else {
          lVar29 = _malloc(lVar24);
          if (lVar29 == 0) goto LAB_10284b288;
        }
        _memcpy(lVar29,uVar14,lVar24);
        if (*(long *)(piVar27 + 10) == -0x8000000000000000) {
LAB_10284b118:
          lVar13 = -0x8000000000000000;
        }
        else {
          uVar14 = *(undefined8 *)(piVar27 + 0xc);
          lVar13 = *(long *)(piVar27 + 0xe);
          if (lVar13 == 0) {
LAB_10284b138:
            unaff_x24 = (undefined *)0x1;
          }
          else {
            unaff_x24 = (undefined *)_malloc(lVar13);
            if (unaff_x24 == (undefined *)0x0) {
              func_0x0001087c9084(1,lVar13);
              goto LAB_10284b2d0;
            }
          }
LAB_10284b13c:
          _memcpy(unaff_x24,uVar14,lVar13);
        }
        iVar10 = piVar27[0x10];
        uVar14 = *(undefined8 *)piVar27;
        uVar15 = *(undefined8 *)(piVar27 + 2);
        extraout_x8[2] = lVar24;
        extraout_x8[3] = lVar29;
        *extraout_x8 = uVar14;
        extraout_x8[1] = uVar15;
        extraout_x8[4] = lVar24;
        extraout_x8[5] = lVar13;
        extraout_x8[6] = unaff_x24;
        extraout_x8[7] = lVar13;
        *(char *)(extraout_x8 + 8) = (char)iVar10;
        return;
      }
      lStack_3f0 = param_4;
      uStack_3e8 = param_5;
      __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
                (&puStack_1e0,param_4,param_5);
      uVar14 = uStack_1d8;
      lVar29 = 0;
      do {
        lVar13 = lVar29;
        if (lVar24 * 0x48 - lVar13 == 0) {
          if (puStack_1e0 != (undefined *)0x0) {
            _free(uVar14);
          }
          goto LAB_10284ad90;
        }
        lVar32 = *(long *)((long)piVar27 + lVar13 + 0x28);
        if (lVar32 == -0x8000000000000000) {
          uVar16 = 0;
          uVar15 = 1;
        }
        else {
          uVar15 = *(undefined8 *)((long)piVar27 + lVar13 + 0x30);
          uVar16 = *(undefined8 *)((long)piVar27 + lVar13 + 0x38);
        }
        __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
                  (&plStack_360,uVar15,uVar16);
        unaff_x24 = puStack_358;
        if (ppuStack_350 == ppuStack_1d0) {
          iVar10 = _memcmp(puStack_358,uVar14,ppuStack_1d0);
          bVar9 = iVar10 == 0;
        }
        else {
          bVar9 = false;
        }
        if (plStack_360 != (long *)0x0) {
          _free(unaff_x24);
        }
        lVar29 = lVar13 + 0x48;
      } while (!bVar9);
      ppuStack_350 = (undefined **)((long)piVar27 + lVar13 + 0x10);
      plStack_360 = &lStack_3f0;
      puStack_358 = &DAT_10285f360;
      puStack_348 = &DAT_102876808;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (auStack_3e0,s_env__matched_by_label___>_108aeddb9,&plStack_360);
      func_0x00010285b920(auStack_3e0);
      uVar15 = *(undefined8 *)((long)piVar27 + lVar13 + 0x18);
      lVar24 = *(long *)((long)piVar27 + lVar13 + 0x20);
      if (lVar24 == 0) {
        lVar29 = 1;
      }
      else {
        lVar29 = _malloc(lVar24);
        if (lVar29 == 0) goto LAB_10284b294;
      }
      _memcpy(lVar29,uVar15,lVar24);
      lVar31 = -0x8000000000000000;
      if (lVar32 == -0x8000000000000000) {
        lVar32 = -0x8000000000000000;
      }
      else {
        uVar15 = *(undefined8 *)((long)piVar27 + lVar13 + 0x30);
        lVar31 = *(long *)((long)piVar27 + lVar13 + 0x38);
        if (lVar31 == 0) {
          lVar32 = 1;
        }
        else {
          lVar32 = _malloc(lVar31);
          if (lVar32 == 0) {
            func_0x0001087c9084(1,lVar31);
            goto LAB_10284b2d0;
          }
        }
        _memcpy(lVar32,uVar15,lVar31);
      }
      uVar2 = *(undefined1 *)((long)piVar27 + lVar13 + 0x40);
      uVar16 = *(undefined8 *)((long)piVar27 + lVar13);
      uVar15 = *(undefined8 *)((long)piVar27 + lVar13 + 8);
      extraout_x8[2] = lVar24;
      extraout_x8[3] = lVar29;
      *extraout_x8 = uVar16;
      extraout_x8[1] = uVar15;
      extraout_x8[4] = lVar24;
      extraout_x8[5] = lVar31;
      extraout_x8[6] = lVar32;
      extraout_x8[7] = lVar31;
      *(undefined1 *)(extraout_x8 + 8) = uVar2;
      if (puStack_1e0 == (undefined *)0x0) {
        return;
      }
      _free(uVar14);
      return;
    }
    _memcpy(puVar11,auVar33._0_8_,puVar26);
    puVar4 = puVar26 + -6;
    puVar12 = puVar11;
    if ((undefined *)0x5 < puVar26) {
      uVar18 = ((ulong)(uint6)*puVar11 & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)(uint6)*puVar11 & 0xff00ff00ff00ff) << 8;
      uVar19 = uVar18 & 0xffff0000ffff;
      uVar18 = uVar19 >> 0x10 | ((uVar18 & 0xffff0000ffff0000) >> 0x10 | uVar19 << 0x10) << 0x20;
      uVar17 = (uint)(uVar18 < 0x7373683a2f2f0000);
      if (0x7373683a2f2f0000 < uVar18) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        if (puVar4 == (undefined *)0x0) {
          puVar12 = (ulong *)0x1;
        }
        else {
          puVar12 = (ulong *)_malloc(puVar4);
          if (puVar12 == (ulong *)0x0) {
            func_0x0001087c9084(1,puVar4);
            goto LAB_10284aaf0;
          }
        }
        _memcpy(puVar12,(long)puVar11 + 6,puVar4);
        _free(puVar11);
        puVar26 = puVar4;
      }
    }
  }
  __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
            (&lStack_d0,puVar12,puVar26,&UNK_108d423e1,0xc);
  func_0x0001028793b4(&plStack_100,&lStack_d0);
  if ((int)plStack_100 == 1) {
    puVar4 = puStack_f8 + 0xc;
    if (puVar4 != (undefined *)0x0) {
      if (puVar4 < puVar26) {
        if (*(char *)((long)puVar12 + (long)puVar4) < -0x40) {
LAB_10284a410:
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                    (puVar12,puVar26,puVar4,puVar26,&UNK_10b28e8a0);
          goto LAB_10284aaf0;
        }
      }
      else if (puVar26 != puVar4) goto LAB_10284a410;
    }
    pbVar22 = puVar26 + -(long)puVar4;
    pbVar20 = (byte *)0x0;
    do {
      pbVar23 = pbVar22;
      if (pbVar20 == pbVar22) break;
      pbVar23 = pbVar20 + (long)puVar12 + (long)puVar4;
      pbVar25 = pbVar23 + 1;
      uVar17 = (uint)*pbVar23;
      if ((char)*pbVar23 < '\0') {
        if (uVar17 < 0xe0) {
          pbVar25 = pbVar23 + 2;
          uVar17 = pbVar23[1] & 0x3f | (uVar17 & 0x1f) << 6;
        }
        else {
          uVar3 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
          if (uVar17 < 0xf0) {
            pbVar25 = pbVar23 + 3;
            uVar17 = uVar3 | (uVar17 & 0x1f) << 0xc;
          }
          else {
            pbVar25 = pbVar23 + 4;
            uVar17 = pbVar23[3] & 0x3f | uVar3 << 6 | (uVar17 & 7) << 0x12;
          }
        }
      }
      pbVar23 = pbVar20;
      pbVar20 = pbVar25 + ((long)pbVar22 - (long)((long)puVar12 + (long)puVar26));
    } while (uVar17 == 0x2f);
    auStack_b8 = func_0x00010286cf88(pbVar23 + (long)((long)puVar12 + (long)puVar4),
                                     (long)pbVar22 - (long)pbVar23);
    lStack_c0 = auStack_b8._8_8_;
    lVar24 = auStack_b8._0_8_;
    uStack_a8 = 0;
    uStack_98 = 0x2f0000002f;
    uStack_90 = 1;
    uStack_88 = 1;
    lStack_c8 = 0;
    lStack_d0 = 1;
    lStack_a0 = lStack_c0;
    func_0x000102879854(&plStack_100,auStack_b8);
    uVar7 = uStack_88;
    if ((int)plStack_100 != 1) {
      if ((uStack_88 & 0x100) == 0) {
        uStack_88 = CONCAT11(1,(undefined1)uStack_88);
        if (((uVar7 & 1) != 0) || (lStack_c0 != lStack_c8)) {
          lVar29 = lStack_c0 - lStack_c8;
          plVar6 = (long *)lStack_c8;
          lVar24 = auStack_b8._0_8_;
          goto joined_r0x00010284a9e8;
        }
      }
      goto LAB_10284a930;
    }
    lVar29 = (long)puStack_f8 - lStack_c8;
    plVar6 = plStack_f0;
joined_r0x00010284a9e8:
    lVar24 = lVar24 + lStack_c8;
    lStack_c8 = (long)plVar6;
    if (lVar29 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(lVar29);
      if (lVar13 == 0) {
        func_0x0001087c9084(1,lVar29);
        goto LAB_10284aaf0;
      }
    }
    _memcpy(lVar13,lVar24,lVar29);
    uVar7 = uStack_88;
    lVar24 = auStack_b8._0_8_;
    lStack_148 = lVar29;
    lStack_140 = lVar13;
    lStack_138 = lVar29;
    if (lStack_d0 != 0) {
      lStack_d0 = lStack_d0 + -1;
      if (lStack_d0 != 0) {
        if ((uStack_88 & 0x100) != 0) goto LAB_10284aa60;
        func_0x000102879854(&plStack_100,auStack_b8);
        uVar7 = uStack_88;
        if ((int)plStack_100 != 1) {
          if ((uStack_88 & 0x100) == 0) {
            uStack_88 = CONCAT11(1,(undefined1)uStack_88);
            if (((uVar7 & 1) != 0) || (lStack_c0 != lStack_c8)) {
              lVar29 = lStack_c0 - lStack_c8;
              plStack_f0 = (long *)lStack_c8;
              lVar24 = auStack_b8._0_8_;
              goto joined_r0x00010284ab24;
            }
          }
          goto LAB_10284aa60;
        }
        lVar29 = (long)puStack_f8 - lStack_c8;
joined_r0x00010284ab24:
        lVar24 = lVar24 + lStack_c8;
        lStack_c8 = (long)plStack_f0;
        if (lVar29 != 0) goto LAB_10284aad4;
LAB_10284ab28:
        lVar13 = 1;
LAB_10284ab2c:
        _memcpy(lVar13,lVar24,lVar29);
        plStack_100 = &lStack_148;
        puStack_f8 = &DAT_102876808;
        plStack_f0 = &lStack_130;
        puStack_e8 = &DAT_102876808;
        lStack_130 = lVar29;
        lStack_128 = lVar13;
        lStack_120 = lVar29;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (auStack_160,s__env__parsed_SSH_GitHub_origin___108aedd6a,&plStack_100);
        func_0x00010285b920(auStack_160);
LAB_10284ac00:
        param_1[1] = lStack_140;
        *param_1 = lStack_148;
        param_1[3] = lStack_130;
        param_1[2] = lStack_138;
        param_1[5] = lStack_120;
        param_1[4] = lStack_128;
        plStack_f0 = (long *)lStack_138;
        puStack_e8 = (undefined *)lStack_130;
        lStack_e0 = lStack_128;
        lStack_d8 = lStack_120;
        goto joined_r0x00010284a938;
      }
      lStack_d0 = 0;
      if ((uStack_88 & 0x100) == 0) {
        uStack_88 = CONCAT11(1,(undefined1)uStack_88);
        if (((uVar7 & 1) != 0) || ((long *)lStack_c0 != plVar6)) {
          lVar29 = lStack_c0 - (long)plVar6;
          lVar24 = auStack_b8._0_8_ + (long)plVar6;
          if (lVar29 == 0) goto LAB_10284ab28;
LAB_10284aad4:
          lVar13 = _malloc(lVar29);
          if (lVar13 == 0) {
            func_0x0001087c9084(1,lVar29);
            goto LAB_10284aaf0;
          }
          goto LAB_10284ab2c;
        }
      }
    }
  }
  else {
    pbVar20 = puVar26 + -0x13;
    if (puVar26 < (undefined *)0x13) {
      if (puVar26 == (undefined *)0x12) {
LAB_10284a4dc:
        uVar19 = 0x687474703a2f2f67;
        uVar18 = (*puVar12 & 0xff00ff00ff00ff00) >> 8 | (*puVar12 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        if (uVar18 == 0x687474703a2f2f67) {
          uVar19 = 0x69746875622e636f;
          uVar18 = (puVar12[1] & 0xff00ff00ff00ff00) >> 8 | (puVar12[1] & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
          if (uVar18 != 0x69746875622e636f) goto LAB_10284a548;
          uVar17 = (uint)(ushort)((ushort)puVar12[2] >> 8) | ((ushort)puVar12[2] & 0xff00ff) << 8;
          uVar18 = (ulong)uVar17;
          uVar19 = 0x6d2f;
          if (uVar17 != 0x6d2f) goto LAB_10284a548;
        }
        else {
LAB_10284a548:
          iVar10 = 1;
          if (uVar19 < uVar18) {
            iVar10 = -1;
          }
          if (iVar10 != 0) goto LAB_10284a558;
        }
        pbVar20 = puVar26 + -0x12;
        lVar24 = (long)puVar12 + 0x12;
      }
      else if (puVar26 < (undefined *)0x11) {
        if (puVar26 < (undefined *)0xb) {
          *param_1 = -0x8000000000000000;
          if (puVar26 == (undefined *)0x0) {
            return;
          }
          goto LAB_10284a958;
        }
LAB_10284a5c4:
        uVar19 = 0x6769746875622e63;
        uVar18 = (*puVar12 & 0xff00ff00ff00ff00) >> 8 | (*puVar12 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        if (uVar18 == 0x6769746875622e63) {
          uVar19 = 0x6875622e636f6d2f;
          uVar18 = (*(ulong *)((long)puVar12 + 3) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulong *)((long)puVar12 + 3) & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
          if (uVar18 != 0x6875622e636f6d2f) goto LAB_10284a940;
        }
        else {
LAB_10284a940:
          iVar10 = 1;
          if (uVar19 < uVar18) {
            iVar10 = -1;
          }
          if (iVar10 != 0) {
            *param_1 = -0x8000000000000000;
LAB_10284a958:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(puVar12);
            return;
          }
        }
        pbVar20 = puVar26 + -0xb;
        lVar24 = (long)puVar12 + 0xb;
      }
      else {
LAB_10284a558:
        uVar19 = 0x6769743a2f2f6769;
        uVar18 = (*puVar12 & 0xff00ff00ff00ff00) >> 8 | (*puVar12 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        if (uVar18 == 0x6769743a2f2f6769) {
          uVar19 = 0x746875622e636f6d;
          uVar18 = (puVar12[1] & 0xff00ff00ff00ff00) >> 8 | (puVar12[1] & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
          if (uVar18 != 0x746875622e636f6d) goto LAB_10284a5b4;
          if ((char)puVar12[2] != '/') goto LAB_10284a5c4;
        }
        else {
LAB_10284a5b4:
          iVar10 = 1;
          if (uVar19 < uVar18) {
            iVar10 = -1;
          }
          if (iVar10 != 0) goto LAB_10284a5c4;
        }
        pbVar20 = puVar26 + -0x11;
        lVar24 = (long)puVar12 + 0x11;
      }
    }
    else {
      uVar19 = 0x68747470733a2f2f;
      uVar18 = (*puVar12 & 0xff00ff00ff00ff00) >> 8 | (*puVar12 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
      if (uVar18 == 0x68747470733a2f2f) {
        uVar19 = 0x6769746875622e63;
        uVar18 = (puVar12[1] & 0xff00ff00ff00ff00) >> 8 | (puVar12[1] & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        if (uVar18 != 0x6769746875622e63) goto LAB_10284a4cc;
        uVar19 = 0x6875622e636f6d2f;
        uVar18 = (*(ulong *)((long)puVar12 + 0xb) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)((long)puVar12 + 0xb) & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        if (uVar18 != 0x6875622e636f6d2f) goto LAB_10284a4cc;
      }
      else {
LAB_10284a4cc:
        iVar10 = 1;
        if (uVar19 < uVar18) {
          iVar10 = -1;
        }
        if (iVar10 != 0) goto LAB_10284a4dc;
      }
      lVar24 = (long)puVar12 + 0x13;
    }
    pbVar22 = (byte *)0x0;
    do {
      pbVar23 = pbVar20;
      if (pbVar22 == pbVar20) break;
      pbVar23 = pbVar22 + lVar24;
      pbVar25 = pbVar23 + 1;
      uVar17 = (uint)*pbVar23;
      if ((char)*pbVar23 < '\0') {
        if (uVar17 < 0xe0) {
          pbVar25 = pbVar23 + 2;
          uVar17 = pbVar23[1] & 0x3f | (uVar17 & 0x1f) << 6;
        }
        else {
          uVar3 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
          if (uVar17 < 0xf0) {
            pbVar25 = pbVar23 + 3;
            uVar17 = uVar3 | (uVar17 & 0x1f) << 0xc;
          }
          else {
            pbVar25 = pbVar23 + 4;
            uVar17 = pbVar23[3] & 0x3f | uVar3 << 6 | (uVar17 & 7) << 0x12;
          }
        }
      }
      pbVar23 = pbVar22;
      pbVar22 = pbVar25 + -lVar24;
    } while (uVar17 == 0x2f);
    auStack_b8 = func_0x00010286cf88(pbVar23 + lVar24,(long)pbVar20 - (long)pbVar23);
    lStack_c0 = auStack_b8._8_8_;
    lVar24 = auStack_b8._0_8_;
    uStack_a8 = 0;
    uStack_98 = 0x2f0000002f;
    uStack_90 = 1;
    uStack_88 = 1;
    lStack_c8 = 0;
    lStack_d0 = 1;
    lStack_a0 = lStack_c0;
    func_0x000102879854(&plStack_100,auStack_b8);
    uVar7 = uStack_88;
    if ((int)plStack_100 != 1) {
      if ((uStack_88 & 0x100) == 0) {
        uStack_88 = CONCAT11(1,(undefined1)uStack_88);
        if (((uVar7 & 1) != 0) || (lStack_c0 != lStack_c8)) {
          lVar29 = lStack_c0 - lStack_c8;
          plVar6 = (long *)lStack_c8;
          lVar24 = auStack_b8._0_8_;
          goto joined_r0x00010284a76c;
        }
      }
LAB_10284a930:
      *param_1 = -0x8000000000000000;
      goto joined_r0x00010284a938;
    }
    lVar29 = (long)puStack_f8 - lStack_c8;
    plVar6 = plStack_f0;
joined_r0x00010284a76c:
    lVar24 = lVar24 + lStack_c8;
    lStack_c8 = (long)plVar6;
    if (lVar29 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(lVar29);
      if (lVar13 == 0) {
        func_0x0001087c9084(1,lVar29);
        goto LAB_10284aaf0;
      }
    }
    _memcpy(lVar13,lVar24,lVar29);
    uVar7 = uStack_88;
    uVar14 = auStack_b8._0_8_;
    lStack_148 = lVar29;
    lStack_140 = lVar13;
    lStack_138 = lVar29;
    if (lStack_d0 != 0) {
      lStack_d0 = lStack_d0 + -1;
      if (lStack_d0 == 0) {
        lStack_d0 = 0;
        if ((uStack_88 & 0x100) == 0) {
          uStack_88 = CONCAT11(1,(undefined1)uStack_88);
          if (((uVar7 & 1) != 0) || ((long *)lStack_c0 != plVar6)) {
            lVar29 = lStack_c0 - (long)plVar6;
            lVar24 = auStack_b8._0_8_ + (long)plVar6;
joined_r0x00010284abac:
            if (lVar29 != 0) goto LAB_10284a9bc;
LAB_10284abb0:
            lVar13 = 1;
LAB_10284abb4:
            _memcpy(lVar13,lVar24,lVar29);
            plStack_100 = &lStack_148;
            puStack_f8 = &DAT_102876808;
            plStack_f0 = &lStack_130;
            puStack_e8 = &DAT_102876808;
            lStack_130 = lVar29;
            lStack_128 = lVar13;
            lStack_120 = lVar29;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (auStack_118,s__env__parsed_HTTP_GitHub_origin___108aedd91,&plStack_100);
            func_0x00010285b920(auStack_118);
            goto LAB_10284ac00;
          }
        }
      }
      else if ((uStack_88 & 0x100) == 0) {
        func_0x000102879854(&plStack_100,auStack_b8);
        uVar7 = uStack_88;
        if ((int)plStack_100 == 1) {
          lVar29 = (long)puStack_f8 - lStack_c8;
          lVar24 = uVar14 + lStack_c8;
          lStack_c8 = (long)plStack_f0;
          if (lVar29 == 0) goto LAB_10284abb0;
LAB_10284a9bc:
          lVar13 = _malloc(lVar29);
          if (lVar13 == 0) {
            func_0x0001087c9084(1,lVar29);
LAB_10284aaf0:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10284aaf4);
            (*pcVar8)();
          }
          goto LAB_10284abb4;
        }
        if ((uStack_88 & 0x100) == 0) {
          uStack_88 = CONCAT11(1,(undefined1)uStack_88);
          if (((uVar7 & 1) != 0) || (lStack_c0 != lStack_c8)) {
            lVar29 = lStack_c0 - lStack_c8;
            lVar24 = auStack_b8._0_8_ + lStack_c8;
            goto joined_r0x00010284abac;
          }
        }
      }
    }
  }
LAB_10284aa60:
  *param_1 = -0x8000000000000000;
  if (lVar29 != 0) {
    _free(lVar13);
  }
joined_r0x00010284a938:
  if (puVar26 != (undefined *)0x0) {
    _free(puVar12);
  }
  return;
code_r0x00010284ae24:
  bVar1 = *(byte *)((long)piVar27 + lVar13 + 0x40);
  lVar29 = lVar13 + 0x48;
  if ((bVar1 & 1) != 0) goto code_r0x00010284ae34;
  goto LAB_10284ae1c;
code_r0x00010284ae34:
  plStack_360 = (long *)((long)piVar27 + lVar13 + 0x10);
  puStack_358 = &DAT_102876808;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (auStack_3c8,s__env__selecting_pinned_environme_108aeddd9,&plStack_360);
  func_0x00010285b920(auStack_3c8);
  uVar14 = *(undefined8 *)((long)piVar27 + lVar13 + 0x18);
  lVar24 = *(long *)((long)piVar27 + lVar13 + 0x20);
  if (lVar24 == 0) {
    lVar29 = 1;
  }
  else {
    lVar29 = _malloc(lVar24);
    if (lVar29 == 0) {
LAB_10284b288:
      func_0x0001087c9084(1,lVar24);
LAB_10284b294:
      func_0x0001087c9084(1,lVar24);
      goto LAB_10284b2d0;
    }
  }
  _memcpy(lVar29,uVar14,lVar24);
  lVar32 = -0x8000000000000000;
  if (*(long *)((long)piVar27 + lVar13 + 0x28) != -0x8000000000000000) {
    uVar14 = *(undefined8 *)((long)piVar27 + lVar13 + 0x30);
    lVar32 = *(long *)((long)piVar27 + lVar13 + 0x38);
    if (lVar32 == 0) {
      unaff_x24 = (undefined *)0x1;
    }
    else {
      unaff_x24 = (undefined *)_malloc(lVar32);
      if (unaff_x24 == (undefined *)0x0) {
        func_0x0001087c9084(1,lVar32);
LAB_10284b2d0:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10284b2d4);
        (*pcVar8)();
      }
    }
    _memcpy(unaff_x24,uVar14,lVar32);
  }
  uVar14 = *(undefined8 *)((long)piVar27 + lVar13);
  uVar15 = *(undefined8 *)((long)piVar27 + lVar13 + 8);
  extraout_x8[2] = lVar24;
  extraout_x8[3] = lVar29;
  *extraout_x8 = uVar14;
  extraout_x8[1] = uVar15;
  extraout_x8[4] = lVar24;
  extraout_x8[5] = lVar32;
  extraout_x8[6] = unaff_x24;
  extraout_x8[7] = lVar32;
  *(byte *)(extraout_x8 + 8) = bVar1;
  return;
}

