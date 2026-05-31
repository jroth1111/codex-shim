
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100f4ab90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long **pplVar11;
  long **pplVar12;
  char *pcVar13;
  undefined1 uVar14;
  code *pcVar15;
  ulong uVar16;
  long **pplVar17;
  undefined8 unaff_x21;
  undefined8 uVar18;
  ulong unaff_x22;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong unaff_x23;
  long *plVar22;
  int unaff_w24;
  undefined1 auVar23 [16];
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  long *plStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long **pplStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_d0 [16];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 auStack_60 [16];
  
  auVar23._8_8_ = auStack_d0._8_8_;
  auVar23._0_8_ = auStack_d0._0_8_;
  bVar3 = *(byte *)((long)param_1 + 0x89);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      uVar18 = func_0x000108a07af4(&UNK_10b238ec0);
      if (*(long *)(unaff_x22 + 8) != 0) {
        _free();
      }
      _free(param_2);
      if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
        plVar10 = (long *)*param_1;
        if (*plVar10 == 0xcc) {
          *plVar10 = 0x84;
        }
        else {
          (**(code **)(plVar10[2] + 0x20))(plVar10);
        }
      }
      *(undefined2 *)(param_1 + 0x11) = 0x200;
      __Unwind_Resume(uVar18);
      auVar23 = func_0x000108a07bc4();
      pplVar11 = auVar23._0_8_;
      if ((auVar23._8_8_ & 1) == 0) {
        FUN_100f4e864(&plStack_208,pplVar11,0);
        plVar4 = plStack_1f8;
        plVar10 = plStack_200;
        plVar5 = plStack_208;
        if (plStack_208 == (long *)0x8000000000000000) {
          return plStack_200;
        }
        plVar22 = plStack_200 + (long)plStack_1f8 * 3;
        plStack_208 = plStack_200;
        plStack_1f8 = plVar5;
        plVar21 = plStack_200;
        plStack_1f0 = plVar22;
        if (plVar4 == (long *)0x0) {
LAB_100f4b198:
          plStack_200 = plVar21;
          if ((long)plVar22 - (long)plVar21 != 0) {
            uVar9 = (ulong)((long)plVar22 - (long)plVar21) / 0x18;
            plVar21 = plVar21 + 1;
            do {
              if (plVar21[-1] != 0) {
                _free(*plVar21);
              }
              plVar21 = plVar21 + 3;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else {
          plVar4 = plStack_200;
          do {
            plVar21 = plVar4 + 3;
            if ((long *)*plVar4 == (long *)0x8000000000000000) goto LAB_100f4b198;
            lStack_1c8 = plVar4[2];
            plStack_1d0 = (long *)plVar4[1];
            puStack_1b8 = &DAT_10112965c;
            plStack_1d8 = (long *)*plVar4;
            pplStack_1c0 = &plStack_1d8;
            func_0x00010602ab90(s__108ac265a,&pplStack_1c0);
            if (plStack_1d8 != (long *)0x0) {
              _free(plStack_1d0);
            }
            plVar4 = plVar21;
          } while (plVar21 != plVar22);
        }
      }
      else {
        bStack_1e0 = *(byte *)((long)pplVar11 + 0x31);
        if (1 < bStack_1e0 - 1) {
          if (bStack_1e0 == 0) {
            pcVar13 = s_Remote_control_is_disabled_on___108ad46d6;
            pplVar17 = &plStack_208;
            pplVar12 = &plStack_208;
          }
          else {
            pcVar13 = s_Remote_control_is_enabled_on_but_108ad46f9;
            pplVar17 = &plStack_1d8;
            pplVar12 = &plStack_1d8;
          }
          puStack_1b8 = &DAT_10112965c;
          pplStack_1c0 = pplVar11;
          FUN_100f3f484(pplVar12,pcVar13,&pplStack_1c0);
          plVar10 = (long *)FUN_108856624(pplVar17);
          return plVar10;
        }
        plStack_1f8 = pplVar11[1];
        plStack_1f0 = pplVar11[2];
        plStack_200 = pplVar11[5];
        plStack_208 = (long *)0x0;
        if (pplVar11[3] != (long *)0x8000000000000000) {
          plStack_208 = pplVar11[4];
        }
        uStack_1de = *(undefined1 *)(pplVar11 + 6);
        uStack_1df = 0;
        uStack_1e8 = 0;
        func_0x0001006579e8(&plStack_1d8,&plStack_208);
        if (plStack_1d8 == (long *)0x8000000000000000) {
          plStack_1d8 = plStack_1d0;
          __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0xfffffffffffffe60);
          plVar10 = (long *)FUN_1088577dc(plStack_1d0,&plStack_1d0);
          return plVar10;
        }
        puStack_1b8 = &DAT_10112965c;
        pplStack_1c0 = &plStack_1d8;
        func_0x00010602ab90(s__108ac265a,&pplStack_1c0);
        plVar10 = plStack_1d0;
        plVar5 = plStack_1d8;
      }
      if (plVar5 != (long *)0x0) {
        _free(plVar10);
      }
      return (long *)0x0;
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
    puVar7 = (ulong *)param_1[0x10];
    *param_1 = puVar7;
    uVar9 = *puVar7;
    uVar18 = auStack_d0._0_8_;
    do {
      auStack_d0._0_8_ = uVar18;
      if ((uVar9 & 0x22) != 0) {
        bVar6 = false;
        auStack_d0._0_8_ = 0;
        goto LAB_100f4ac64;
      }
      if ((uVar9 & 1) == 0) {
        if (((uint)uVar9 >> 2 & 1) == 0) {
          if ((long)uVar9 < 0) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
            goto LAB_100f4af24;
          }
          uVar16 = uVar9 + 100;
          bVar6 = true;
        }
        else {
          bVar6 = false;
          uVar16 = uVar9 | 0x20;
        }
      }
      else {
        bVar6 = false;
        uVar16 = uVar9 | 0x24;
      }
      auStack_d0._0_8_ = 1;
      uVar18 = auStack_d0._0_8_;
      auStack_d0._0_8_ = 1;
      bVar2 = *puVar7 != uVar9;
      uVar9 = *puVar7;
    } while (bVar2);
    *puVar7 = uVar16;
LAB_100f4ac64:
    if (bVar6) {
      (**(code **)(puVar7[2] + 8))();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
    unaff_x21 = *param_1;
    auVar23 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
    unaff_x22 = auVar23._8_8_;
    lVar8 = auVar23._0_8_;
    unaff_x23 = lVar8 + 1;
    if (!SCARRY8(lVar8,1)) {
      unaff_w24 = 1000000000;
      if ((auVar23._8_4_ < 1000000000) ||
         ((bVar6 = SCARRY8(unaff_x23,1), unaff_x23 = lVar8 + 2, !bVar6 &&
          (uVar1 = auVar23._8_4_ + 0xc4653600, unaff_x22 = (ulong)uVar1, uVar1 != 1000000000))))
      goto LAB_100f4ace0;
    }
    __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(auStack_d0,0);
    auVar23._8_8_ = auStack_d0._8_8_;
    auVar23._0_8_ = auStack_d0._0_8_;
LAB_100f4ad24:
    param_1[8] = uStack_98;
    param_1[7] = uStack_a0;
    param_1[10] = uStack_88;
    param_1[9] = uStack_90;
    param_1[0xc] = uStack_78;
    param_1[0xb] = uStack_80;
    param_1[0xe] = CONCAT71(uStack_67,uStack_68);
    param_1[0xd] = CONCAT44(uStack_6c,uStack_70);
    *(undefined1 (*) [16])(param_1 + 1) = auVar23;
    param_1[4] = puStack_b8;
    param_1[3] = puStack_c0;
    param_1[6] = uStack_a8;
    param_1[5] = uStack_b0;
    param_1[0xf] = unaff_x21;
  }
  else if (bVar3 != 3) {
    func_0x000108a07b10(&UNK_10b238ec0);
LAB_100f4ace0:
    auVar23 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b238ea8);
    lVar8 = 0x140;
    if ((auVar23._0_8_ & 1) == 0) {
      lVar8 = 0x200;
    }
    auStack_60 = auVar23;
    if (*(int *)(auVar23._8_8_ + lVar8 + 0xd8) == unaff_w24) {
      func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b238ea8);
LAB_100f4af24:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100f4af28);
      (*pcVar15)();
    }
    puStack_c0 = (undefined8 *)0x0;
    uStack_70 = (undefined4)unaff_x22;
    uStack_68 = 0;
    uStack_78 = unaff_x23;
    goto LAB_100f4ad24;
  }
  auStack_d0 = auVar23;
  lVar8 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  bVar3 = *(byte *)(lVar8 + 0x48);
  puVar19 = (undefined8 *)(ulong)bVar3;
  if (bVar3 == 1) {
LAB_100f4ada4:
    puVar19 = (undefined8 *)
              (ulong)((uint)(*(char *)(lVar8 + 0x45) != '\0') |
                     (*(byte *)(lVar8 + 0x44) ^ 0xffffffff) & 1);
  }
  else if (bVar3 != 2) {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar8,&DAT_100c35d48);
    *(undefined1 *)(lVar8 + 0x48) = 1;
    goto LAB_100f4ada4;
  }
  FUN_10151ba30(auStack_d0,param_1[0xf],*param_2);
  uVar18 = auStack_d0._0_8_;
  if (auStack_d0._0_4_ == 1) {
    uVar9 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                      ((uint)((uint)puVar19 == 2) | (uint)puVar19 & 1,param_1 + 1,param_2);
    if ((uVar9 & 1) != 0) {
      uVar14 = 3;
      plVar10 = (long *)0x1;
      goto LAB_100f4aed0;
    }
    plVar10 = (long *)param_1[0xf];
    if (*plVar10 != 0xcc) goto LAB_100f4ae4c;
    *plVar10 = 0x84;
  }
  else {
    unaff_x23 = (ulong)(auStack_d0._8_8_ == 0);
    plVar10 = (long *)param_1[0xf];
    param_2 = puStack_c0;
    puVar19 = puStack_b8;
    if (*plVar10 == 0xcc) {
      *plVar10 = 0x84;
    }
    else {
LAB_100f4ae4c:
      (**(code **)(plVar10[2] + 0x20))();
    }
  }
  FUN_100de8a5c(param_1 + 1);
  if ((uVar18 & 1) == 0) {
    if ((unaff_x23 & 1) == 0) {
      if (param_2 != (undefined8 *)0x0) {
        if ((code *)*puVar19 != (code *)0x0) {
          (*(code *)*puVar19)(param_2);
        }
        if (puVar19[1] != 0) goto LAB_100f4aebc;
      }
    }
    else if (((ulong)param_2 & 3) == 1) {
      puVar19 = (undefined8 *)((long)param_2 + -1);
      uVar18 = *puVar19;
      puVar20 = *(undefined8 **)((long)param_2 + 7);
      pcVar15 = (code *)*puVar20;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar18);
      }
      param_2 = puVar19;
      if (puVar20[1] != 0) {
        _free(uVar18);
      }
LAB_100f4aebc:
      _free(param_2);
    }
  }
  plVar10 = (long *)0x0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  uVar14 = 1;
LAB_100f4aed0:
  *(undefined1 *)((long)param_1 + 0x89) = uVar14;
  return plVar10;
}

