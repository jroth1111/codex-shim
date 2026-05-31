
void FUN_10085c0c8(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  undefined1 *puVar9;
  long extraout_x1;
  long *plVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  code *pcVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x23;
  undefined8 *puVar21;
  long unaff_x24;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long unaff_x26;
  undefined8 **ppuVar25;
  long lVar26;
  undefined1 auVar27 [16];
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  byte bStack_68;
  undefined1 uStack_67;
  char cStack_66;
  undefined5 uStack_65;
  
  bVar1 = *(byte *)((long)param_2 + 0x59);
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      lVar11 = param_3;
      if (bVar1 == 1) {
        FUN_107c05cc0(&UNK_10b223b00);
      }
      uVar17 = FUN_107c05cc4();
      if (unaff_x24 != 0) {
        _free(uStack_88);
      }
      if (unaff_x23 != 0) {
        _free();
      }
      if (uStack_e0 != 0) {
        _free(uStack_d8);
      }
      if (unaff_x26 != 0) {
        _free(param_3);
      }
      if (param_2[7] != 0) {
        _free(param_2[8]);
      }
      if (((*(byte *)(param_2 + 0xb) & 1) != 0) && (param_2[4] != 0)) {
        _free(param_2[5]);
        *(undefined2 *)(param_2 + 0xb) = 0x200;
        uVar17 = __Unwind_Resume(uVar17);
        FUN_100e86ecc(param_2 + 0xc);
      }
      *(undefined2 *)(param_2 + 0xb) = 0x200;
      __Unwind_Resume(uVar17);
      auVar27 = FUN_107c05ccc();
      plVar10 = auVar27._8_8_;
      puVar20 = auVar27._0_8_;
      lVar24 = 8;
      lStack_1d8 = 0;
      lStack_1d0 = 8;
      lStack_1c8 = 0;
      if (plVar10 == (long *)0x0) {
        lVar18 = 0;
        goto joined_r0x00010085c8fc;
      }
      plStack_1a8 = (long *)*plVar10;
      lStack_190 = (long)plStack_1a8 + plVar10[1] + 1;
      plStack_198 = plStack_1a8 + 1;
      lVar24 = *plStack_1a8;
      uStack_1a0 = CONCAT17(-(-1 < lVar24),
                            CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                   0x8080808080808080;
      lStack_188 = plVar10[3];
      FUN_10068cabc(&ppuStack_1c0,&plStack_1a8);
      puVar2 = puStack_1b8;
      ppuStack_178 = &puStack_160;
      if (uStack_1b0 < 2) {
        if (uStack_1b0 != 0) goto LAB_10085ca10;
        lVar24 = 8;
        lVar18 = 0;
        ppuVar25 = ppuStack_1c0;
      }
      else {
        if (uStack_1b0 < 0x15) {
          FUN_100e9492c(puStack_1b8,uStack_1b0);
        }
        else {
          __ZN4core5slice4sort6stable14driftsort_main17h4e64b4c67cbd7879E
                    (puStack_1b8,uStack_1b0,&ppuStack_178);
        }
LAB_10085ca10:
        ppuVar25 = ppuStack_1c0;
        FUN_108855060(&lStack_1d8,0,uStack_1b0,8,0x18);
        lVar24 = lStack_1d0;
        lVar26 = 0;
        lVar23 = lStack_1c8 * 0x18;
        lVar18 = lStack_1c8;
        do {
          uStack_180 = *(undefined8 *)(puVar2 + lVar26);
          puStack_160 = &uStack_180;
          puStack_158 = (undefined8 *)&DAT_100c7b524;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&ppuStack_178,s________108ac942d,&puStack_160);
          puVar21 = (undefined8 *)(lVar24 + lVar23);
          puVar21[1] = uStack_170;
          *puVar21 = ppuStack_178;
          puVar21[2] = uStack_168;
          lVar18 = lVar18 + 1;
          lVar23 = lVar23 + 0x18;
          lVar26 = lVar26 + 0x10;
        } while (uStack_1b0 * 0x10 - lVar26 != 0);
      }
      lStack_1c8 = lVar18;
      if (ppuVar25 != (undefined8 **)0x0) {
        _free(puVar2);
      }
joined_r0x00010085c8fc:
      lVar23 = lStack_1d0;
      lVar26 = lStack_1c8;
      if (param_4 != 0) {
        if ((ulong)(lStack_1d8 - lVar18) < param_4) {
          FUN_108855060(&lStack_1d8,lVar18,param_4,8,0x18);
          lVar18 = lStack_1c8;
          lVar24 = lStack_1d0;
        }
        puVar21 = (undefined8 *)(lVar24 + lVar18 * 0x18);
        puVar22 = (undefined8 *)(lVar11 + 0x10);
        do {
          puStack_158 = (undefined8 *)puVar22[1];
          puStack_160 = (undefined8 *)*puVar22;
          if (puVar22[-2] != -0x8000000000000000) {
            puStack_158 = (undefined8 *)*puVar22;
            puStack_160 = (undefined8 *)puVar22[-1];
          }
          puStack_1b8 = &DAT_100c7b3a0;
          ppuStack_1c0 = &puStack_160;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&ppuStack_178,s________108ac942d,&ppuStack_1c0);
          puVar21[2] = uStack_168;
          puVar21[1] = uStack_170;
          *puVar21 = ppuStack_178;
          lVar18 = lVar18 + 1;
          param_4 = param_4 - 1;
          puVar21 = puVar21 + 3;
          puVar22 = puVar22 + 6;
          lVar23 = lStack_1d0;
          lVar26 = lVar18;
        } while (param_4 != 0);
      }
      lStack_1c8 = lVar26;
      lStack_1d0 = lVar23;
      if (lVar18 == 0) {
        puVar9 = (undefined1 *)_malloc(1);
        if (puVar9 == (undefined1 *)0x0) {
          func_0x0001087c9084(1,1);
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x10085caa8);
          (*pcVar15)();
        }
        *puVar9 = 0x2d;
        *puVar20 = 1;
        puVar20[1] = puVar9;
        puVar20[2] = 1;
        lVar23 = lStack_1d0;
      }
      else {
        FUN_100f3f514(&ppuStack_178,lVar23,lVar18,&UNK_108ca7fce,2);
        puVar20[1] = uStack_170;
        *puVar20 = ppuStack_178;
        puVar20[2] = uStack_168;
        puVar20 = (undefined8 *)(lVar23 + 8);
        do {
          if (puVar20[-1] != 0) {
            _free(*puVar20);
          }
          puVar20 = puVar20 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if (lStack_1d8 != 0) {
        _free(lVar23);
      }
      return;
    }
    *(undefined1 *)(param_2 + 0xb) = 0;
    *param_2 = param_2[2];
    param_2[1] = param_2[3];
    param_2[0xc] = param_2[2];
    param_2[0xd] = param_2[3];
    param_2[0xe] = param_2[10];
    *(undefined1 *)(param_2 + 0x12) = 0;
LAB_10085c140:
    FUN_10085b404(&uStack_78,param_2 + 0xc,param_3);
    uVar5 = uStack_70;
    uVar3 = uStack_78;
    if (uStack_78 == 0x8000000000000001) {
      *param_1 = 0x8000000000000001;
      uVar12 = 3;
      goto LAB_10085c488;
    }
    uVar17 = CONCAT53(uStack_65,CONCAT12(cStack_66,CONCAT11(uStack_67,bStack_68)));
    if (*(char *)(param_2 + 0x12) == '\x03') {
      uVar19 = param_2[0x13];
      puVar20 = (undefined8 *)param_2[0x14];
      pcVar15 = (code *)*puVar20;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar19);
      }
      if (puVar20[1] != 0) goto LAB_10085c1ec;
    }
    else if ((*(char *)(param_2 + 0x12) == '\x04') &&
            (FUN_100cab34c(param_2 + 0x16), param_2[0x13] != 0)) {
      uVar19 = param_2[0x14];
LAB_10085c1ec:
      _free(uVar19);
    }
    if (uVar3 != 0x8000000000000000) {
      *(undefined1 *)(param_2 + 0xb) = 1;
      param_2[4] = uVar3;
      param_2[6] = uVar17;
      param_2[5] = uVar5;
      uVar17 = param_2[5];
      uVar19 = param_2[6];
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&uStack_90,&UNK_108cde3c0,4);
      uVar3 = uStack_88;
      __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                (&uStack_78,uStack_88,uStack_80,uVar17,uVar19);
      param_2[8] = uStack_70;
      param_2[7] = uStack_78;
      param_2[9] = CONCAT53(uStack_65,CONCAT12(cStack_66,CONCAT11(uStack_67,bStack_68)));
      if (uStack_90 != 0) {
        _free(uVar3);
      }
      auVar27 = (**(code **)(param_2[1] + 0x38))(*param_2,param_2 + 7,0);
      *(undefined1 (*) [16])(param_2 + 0xc) = auVar27;
LAB_10085c284:
      (**(code **)(auVar27._8_8_ + 0x18))(&uStack_78,auVar27._0_8_,param_3);
      cVar7 = cStack_66;
      bVar1 = bStack_68;
      uVar3 = uStack_78;
      if (cStack_66 == '\x03') {
        *param_1 = 0x8000000000000001;
        uVar12 = 4;
        goto LAB_10085c488;
      }
      uVar17 = param_2[0xc];
      puVar20 = (undefined8 *)param_2[0xd];
      pcVar15 = (code *)*puVar20;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar17);
      }
      if (puVar20[1] != 0) {
        _free(uVar17);
      }
      if (cVar7 == '\x02') {
        if ((uVar3 & 3) == 1) {
          puVar20 = (undefined8 *)(uVar3 - 1);
          uVar17 = *puVar20;
          puVar21 = *(undefined8 **)(uVar3 + 7);
          pcVar15 = (code *)*puVar21;
          if (pcVar15 != (code *)0x0) {
            (*pcVar15)(uVar17);
          }
          if (puVar21[1] != 0) {
            _free(uVar17);
          }
          goto LAB_10085c38c;
        }
        goto LAB_10085c390;
      }
      if ((bVar1 & 1) == 0) {
        auVar27 = (**(code **)(param_2[1] + 0x20))(*param_2,param_2 + 7,0);
        *(undefined1 (*) [16])(param_2 + 0xc) = auVar27;
        goto LAB_10085c1a4;
      }
      *(undefined1 *)(param_2 + 0xb) = 0;
      uStack_a8 = param_2[5];
      uStack_b0 = param_2[4];
      uStack_a0 = param_2[6];
      goto LAB_10085c444;
    }
    uStack_b0 = 0x8000000000000000;
  }
  else {
    if (bVar1 == 3) goto LAB_10085c140;
    if (bVar1 == 4) {
      auVar27 = *(undefined1 (*) [16])(param_2 + 0xc);
      goto LAB_10085c284;
    }
    auVar27 = *(undefined1 (*) [16])(param_2 + 0xc);
LAB_10085c1a4:
    (**(code **)(auVar27._8_8_ + 0x18))(&uStack_78,auVar27._0_8_,param_3);
    uVar5 = uStack_70;
    uVar3 = uStack_78;
    if (uStack_78 == 0x8000000000000001) {
      *param_1 = 0x8000000000000001;
      uVar12 = 5;
      goto LAB_10085c488;
    }
    uVar19 = CONCAT53(uStack_65,CONCAT12(cStack_66,CONCAT11(uStack_67,bStack_68)));
    uVar17 = param_2[0xc];
    puVar20 = (undefined8 *)param_2[0xd];
    pcVar15 = (code *)*puVar20;
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(uVar17);
    }
    if (puVar20[1] != 0) {
      _free(uVar17);
    }
    if (uVar3 == 0x8000000000000000) {
      if ((uVar5 & 3) == 1) {
        puVar20 = (undefined8 *)(uVar5 - 1);
        uVar17 = *puVar20;
        puVar21 = *(undefined8 **)(uVar5 + 7);
        pcVar15 = (code *)*puVar21;
        if (pcVar15 != (code *)0x0) {
          (*pcVar15)(uVar17);
        }
        if (puVar21[1] != 0) {
          _free(uVar17);
        }
LAB_10085c38c:
        _free(puVar20);
      }
LAB_10085c390:
      uStack_b0 = 0x8000000000000000;
LAB_10085c444:
      if (param_2[7] != 0) {
        _free(param_2[8]);
      }
      if (*(char *)(param_2 + 0xb) != '\x01') goto LAB_10085c470;
    }
    else {
      auVar27 = FUN_100e8d6f8(uVar5,uVar19);
      puVar8 = auVar27._0_8_;
      if (auVar27._8_8_ < 7) {
LAB_10085c430:
        uStack_b0 = 0x8000000000000000;
LAB_10085c438:
        if (uVar3 != 0) {
          _free(uVar5);
        }
        goto LAB_10085c444;
      }
      uVar13 = 0x67697464;
      uVar16 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (uVar16 == 0x67697464) {
        uVar13 = 0x6469723a;
        uVar16 = (*(uint *)((long)puVar8 + 3) & 0xff00ff00) >> 8 |
                 (*(uint *)((long)puVar8 + 3) & 0xff00ff) << 8;
        uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
        if (uVar16 != 0x6469723a) goto LAB_10085c420;
        iVar14 = 0;
      }
      else {
LAB_10085c420:
        iVar14 = 1;
        if (uVar13 < uVar16) {
          iVar14 = -1;
        }
      }
      if ((iVar14 != 0) || (FUN_100e8d6f8((long)puVar8 + 7,auVar27._8_8_ - 7), extraout_x1 == 0))
      goto LAB_10085c430;
      uVar17 = param_2[5];
      uVar19 = param_2[6];
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&uStack_90);
      uVar4 = uStack_88;
      __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                (&uStack_78,uStack_88,uStack_80,uVar17,uVar19);
      uStack_d8 = uStack_70;
      uStack_e0 = uStack_78;
      if (uStack_90 != 0) {
        _free(uVar4);
      }
      func_0x0001055614c0(&uStack_78,&uStack_e0);
      uVar6 = uStack_70;
      uVar4 = uStack_78;
      if (uStack_78 == 0x8000000000000000) {
        uStack_b0 = 0x8000000000000000;
LAB_10085c580:
        if (uStack_e0 != 0) {
          _free(uStack_d8);
        }
        goto LAB_10085c438;
      }
      uStack_c0 = uStack_70;
      uStack_c8 = uStack_78;
      auVar27 = __ZN3std4path4Path9file_name17h4ab5db2cd370dd44E
                          (uStack_70,
                           CONCAT53(uStack_65,CONCAT12(cStack_66,CONCAT11(uStack_67,bStack_68))));
      plVar10 = auVar27._0_8_;
      if ((((plVar10 == (long *)0x0) || (auVar27._8_8_ != 9)) ||
          (*plVar10 != 0x656572746b726f77 || (char)plVar10[1] != 's')) ||
         (func_0x0001055614c0(&uStack_78,&uStack_c8), uStack_78 == 0x8000000000000000)) {
        uStack_b0 = 0x8000000000000000;
        if (uVar4 != 0) {
          _free(uVar6);
        }
        goto LAB_10085c580;
      }
      uStack_88 = uStack_70;
      uStack_90 = uStack_78;
      func_0x0001055614c0(&uStack_b0,&uStack_90);
      if (uStack_78 != 0) {
        _free(uStack_88);
      }
      if (uVar4 != 0) {
        _free(uVar6);
      }
      if (uStack_e0 != 0) {
        _free(uStack_d8);
      }
      if (uVar3 != 0) {
        _free(uVar5);
      }
      if (param_2[7] != 0) {
        _free(param_2[8]);
      }
    }
    if (param_2[4] != 0) {
      _free(param_2[5]);
    }
  }
LAB_10085c470:
  *(undefined1 *)(param_2 + 0xb) = 0;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[2] = uStack_a0;
  uVar12 = 1;
LAB_10085c488:
  *(undefined1 *)((long)param_2 + 0x59) = uVar12;
  return;
}

