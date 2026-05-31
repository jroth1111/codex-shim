
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
__ZN4want5Giver9poll_want17hc7bfb86c1b86effdE
          (long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined1 in_wzr;
  undefined1 auVar18 [16];
  undefined8 ****ppppuStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  char *pcStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  char *pcStack_530;
  byte bStack_521;
  undefined8 *****pppppuStack_520;
  undefined8 *******pppppppuStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined8 uStack_4fc;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******pppppppuStack_4e8;
  undefined *puStack_4e0;
  undefined8 *******pppppppuStack_4d8;
  undefined *puStack_4d0;
  undefined8 *******pppppppuStack_4c8;
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  char *pcStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  char *pcStack_470;
  undefined8 *******pppppppuStack_468;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long lStack_38;
  long *plStack_30;
  undefined1 *puStack_28;
  
  lVar17 = *param_1;
LAB_106249a34:
  lStack_38 = *(long *)(lVar17 + 0x10);
  if (lStack_38 < 2) {
    if (lStack_38 != 0) {
      if (lStack_38 == 1) {
        return (undefined *)0x0;
      }
      goto LAB_106249b08;
    }
  }
  else if (lStack_38 != 2) goto LAB_106249a90;
  LOAcquire();
  cVar2 = *(char *)(lVar17 + 0x28);
  *(char *)(lVar17 + 0x28) = '\x01';
  LORelease();
  if (cVar2 == '\0') {
    if (*(long *)(lVar17 + 0x10) == lStack_38) {
      *(long *)(lVar17 + 0x10) = 2;
      plVar16 = (long *)*param_2;
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)*plVar16;
        lVar11 = plVar16[1];
      }
      else {
        puVar15 = (undefined8 *)*plVar16;
        lVar11 = plVar16[1];
        if (*(long *)(lVar17 + 0x20) == lVar11 && *(undefined8 **)(lVar17 + 0x18) == puVar15) {
          *(undefined1 *)(lVar17 + 0x28) = in_wzr;
          return (undefined *)0x2;
        }
      }
      auVar18 = (*(code *)*puVar15)(lVar11);
      lVar11 = *(long *)(lVar17 + 0x18);
      *(undefined1 (*) [16])(lVar17 + 0x18) = auVar18;
      *(undefined1 *)(lVar17 + 0x28) = in_wzr;
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x20));
      }
      return (undefined *)0x2;
    }
    *(undefined1 *)(lVar17 + 0x28) = in_wzr;
  }
  goto LAB_106249a34;
LAB_106249a90:
  if (lStack_38 == 3) {
    return (undefined *)0x1;
  }
LAB_106249b08:
  plStack_30 = &lStack_38;
  puStack_28 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_9internal_error__entered_unreach_108b3cbc2,&plStack_30,&UNK_10b4dc678);
  *(undefined1 *)(lVar17 + 0x28) = in_wzr;
  puStack_68 = (undefined *)__Unwind_Resume();
  uStack_48 = 0x106249b38;
  if (puStack_68 < (undefined *)0x4) {
    return puStack_68;
  }
  ppuStack_60 = &puStack_68;
  puStack_58 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  puVar13 = &UNK_10b4dc678;
  puStack_50 = &stack0xfffffffffffffff0;
  bVar5 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s_9internal_error__entered_unreach_108b3cbc2,&ppuStack_60,&UNK_10b4dc678);
  ppppuStack_580 = (undefined8 ****)0x0;
  __ZN80__LT_webbrowser__TargetType_u20_as_u20_core__convert__TryFrom_LT__RF_str_GT__GT_8try_from17h916dc0be4d488ae7E
            (&pppuStack_4c0,extraout_x1,puVar13);
  if (pppuStack_4c0 == (undefined8 ***)0x8000000000000000) {
    return puStack_4b8;
  }
  uVar7 = 0;
  pcStack_530 = pcStack_470;
  puStack_548 = puStack_488;
  uStack_550 = uStack_490;
  uStack_538 = uStack_478;
  uStack_540 = uStack_480;
  uStack_568 = uStack_4a8;
  puStack_570 = puStack_4b0;
  uStack_558 = uStack_498;
  pcStack_560 = pcStack_4a0;
  ppppuStack_580 = (undefined8 ****)pppuStack_4c0;
  puStack_578 = puStack_4b8;
  puVar13 = &UNK_109d29c14;
  uVar14 = 0x1e;
  bVar3 = *(byte *)(param_4 + 0x19);
  bStack_521 = bVar5;
  if (2 < bVar5) {
    if (bVar5 == 3) {
      pppppuStack_520 = &ppppuStack_580;
      pppppppuVar8 = (undefined8 *******)_CFURLCreateWithBytes(0,&UNK_109d29b86,0x27,0x8000100,0);
    }
    else if (bVar5 == 4) {
      pppppuStack_520 = &ppppuStack_580;
      pppppppuVar8 = (undefined8 *******)_CFURLCreateWithBytes(0,&UNK_109d29bad,0x1f,0x8000100,0);
    }
    else {
      puVar13 = &UNK_109d29c14;
      pppppuStack_520 = &ppppuStack_580;
      if (bVar5 != 5) goto LAB_10624a2d4;
      pppppuStack_520 = &ppppuStack_580;
      pppppppuVar8 = (undefined8 *******)_CFURLCreateWithBytes(0,&UNK_109d29b23,0x20,0x8000100,0);
    }
    goto joined_r0x000106249cd4;
  }
  if (bVar5 != 0) {
    pppppuStack_520 = &ppppuStack_580;
    if (bVar5 == 1) {
      pppppuStack_520 = &ppppuStack_580;
      pppppppuVar8 = (undefined8 *******)_CFURLCreateWithBytes(0,&UNK_109d29b65,0x21,0x8000100,0);
      goto joined_r0x000106249cd4;
    }
LAB_10624a2d4:
    puVar13 = (undefined *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(uVar7,puVar13,uVar14);
    goto joined_r0x000106249f08;
  }
  pppppuStack_520 = &ppppuStack_580;
  lVar17 = _CFURLCreateWithBytes(0,&UNK_108c64888,8,0x8000100,0);
  if (lVar17 == 0) {
    pppppppuVar8 = (undefined8 *******)_CFURLCreateWithBytes(0,&UNK_109d29b23,0x20,0x8000100,0);
joined_r0x000106249cd4:
    if (pppppppuVar8 == (undefined8 *******)0x0) {
      puVar13 = &UNK_109d29bcc;
      uVar7 = 0x28;
      uVar14 = 0x16;
      goto LAB_10624a2d4;
    }
  }
  else {
    pppppppuStack_4f0 = (undefined8 *******)0x0;
    pppppppuVar8 = (undefined8 *******)
                   _LSCopyDefaultApplicationURLForURL(lVar17,2,&pppppppuStack_4f0);
    if (pppppppuVar8 == (undefined8 *******)0x0) {
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0) {
        if (pppppppuStack_4f0 == (undefined8 *******)0x0) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109d29b43,0x45,&UNK_10b4dc6a8);
          goto LAB_10624a3ac;
        }
        pppppppuStack_4e8 = pppppppuStack_4f0;
        pppppppuStack_518 = &pppppppuStack_4e8;
        puStack_510 = &
                      __ZN70__LT_core_foundation__error__CFError_u20_as_u20_core__fmt__Display_GT_3fmt17h96e788fe14194c9dE
        ;
        pppuStack_4c0 = (undefined8 ***)&UNK_109d29b15;
        puStack_4b8 = (undefined *)0xe;
        puStack_4b0 = &UNK_109d29b15;
        uStack_4a8 = 0xe;
        pcStack_4a0 = &UNK_10b4dc690;
        FUN_10624a584(s_failed_to_get_default_browser__108b3ccce,&pppppppuStack_518,1,&pppuStack_4c0
                     );
        _CFRelease(pppppppuStack_4e8);
      }
      pppppppuVar8 = (undefined8 *******)_CFURLCreateWithBytes(0,&UNK_109d29b23,0x20,0x8000100,0);
      _CFRelease(lVar17);
      goto joined_r0x000106249cd4;
    }
    pppppppuStack_4c8 = pppppppuVar8;
    if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
      pppppppuStack_4e8 = &pppppppuStack_4c8;
      pppppppuStack_518 = &pppppppuStack_4e8;
      puStack_510 = &DAT_10624a6d8;
      puStack_488 = &UNK_109d29b15;
      uStack_480 = 0xe;
      pppppppuStack_468 = &pppppppuStack_518;
      pcStack_470 = s_default_browser_is_108b3cc57;
      pppuStack_4c0 = (undefined8 ***)0x0;
      puStack_4b8 = &UNK_109d29b15;
      uStack_4a8 = 0;
      puStack_4b0 = (undefined *)0xe;
      pcStack_4a0 = 
      "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/webbrowser-1.0.6/src/macos.rs"
      ;
      uStack_490 = 5;
      uStack_498 = 0x60;
      uStack_478 = 0x2500000001;
      puVar13 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar13 = &UNK_10b3c24c8;
      }
      puVar9 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar9 = &UNK_109adfc03;
      }
      (**(code **)(puVar13 + 0x20))(puVar9,&pppuStack_4c0);
    }
    pppppppuVar8 = pppppppuStack_4c8;
    _CFRelease(lVar17);
  }
  lVar17 = _CFURLCreateWithBytes(0,puStack_578,puStack_570,0x8000100,0);
  if (lVar17 == 0) {
    puVar13 = (undefined *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_109d29bcc,0x16)
    ;
    _CFRelease(pppppppuVar8);
    goto joined_r0x000106249f08;
  }
  plVar16 = (long *)_malloc(8);
  if (plVar16 == (long *)0x0) {
    func_0x0001087c9084(8,8);
LAB_10624a3ac:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10624a3b0);
    (*pcVar4)();
  }
  *plVar16 = lVar17;
  puVar9 = (undefined *)
           _CFArrayCreate(*(undefined8 *)PTR__kCFAllocatorDefault_10b1d0328,plVar16,1,
                          PTR__kCFTypeArrayCallBacks_10b1d0360);
  if (puVar9 == (undefined *)0x0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109d29b43,0x45,&UNK_10b4dc6f0);
    goto LAB_10624a3ac;
  }
  _free(plVar16);
  uStack_508 = 0;
  uStack_500 = 0x10001;
  uStack_4fc = 0;
  pppppppuStack_518 = pppppppuVar8;
  puStack_510 = puVar9;
  if ((bVar3 & 1) == 0) {
    if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
      pppppppuStack_4f0 = (undefined8 *******)&bStack_521;
      pppppppuStack_4c8 = (undefined8 *******)&pppppuStack_520;
      pppuStack_4c0 = (undefined8 ***)0x0;
      pppppppuStack_4e8 = &pppppppuStack_4f0;
      puStack_4e0 = &DAT_10624a7ec;
      pppppppuStack_4d8 = &pppppppuStack_4c8;
      puStack_4d0 = &DAT_10624a7f4;
      puStack_488 = &UNK_109d29b15;
      uStack_480 = 0xe;
      pppppppuStack_468 = &pppppppuStack_4e8;
      pcStack_470 = s_about_to_start_browser__for_108b3cd57;
      puStack_4b8 = &UNK_109d29b15;
      uStack_4a8 = 0;
      puStack_4b0 = (undefined *)0xe;
      pcStack_4a0 = 
      "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/webbrowser-1.0.6/src/macos.rs"
      ;
      uStack_490 = 5;
      uStack_498 = 0x60;
      uStack_478 = 0x5500000001;
      puVar13 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar13 = &UNK_10b3c24c8;
      }
      puVar1 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_109adfc03;
      }
      (**(code **)(puVar13 + 0x20))(puVar1,&pppuStack_4c0);
    }
    pppppppuStack_4c8 = (undefined8 *******)0x0;
    iVar6 = _LSOpenFromURLSpec(&pppppppuStack_518,&pppppppuStack_4c8);
    pppppppuStack_4f0 = (undefined8 *******)CONCAT44(pppppppuStack_4f0._4_4_,iVar6);
    if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
      pppppppuStack_4e8 = &pppppppuStack_4f0;
      puStack_4e0 = &
                    __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hc1020c4dffdb8fa5E
      ;
      puStack_488 = &UNK_109d29b15;
      uStack_480 = 0xe;
      pppppppuStack_468 = &pppppppuStack_4e8;
      pcStack_470 = s_received_status__108b3cd79;
      pppuStack_4c0 = (undefined8 ***)0x0;
      puStack_4b8 = &UNK_109d29b15;
      uStack_4a8 = 0;
      puStack_4b0 = (undefined *)0xe;
      pcStack_4a0 = 
      "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/webbrowser-1.0.6/src/macos.rs"
      ;
      uStack_490 = 5;
      uStack_498 = 0x60;
      uStack_478 = 0x5800000001;
      puVar13 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar13 = &UNK_10b3c24c8;
      }
      puVar1 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_109adfc03;
      }
      (**(code **)(puVar13 + 0x20))(puVar1,&pppuStack_4c0);
      iVar6 = (int)pppppppuStack_4f0;
    }
    uVar7 = 0;
    if (iVar6 < -0x2b) {
      if (iVar6 == -0x2a4a) {
        uVar7 = 2;
      }
      else if (iVar6 == -0x2a3e) goto LAB_10624a0f8;
    }
    else if (iVar6 == -0x2b) {
LAB_10624a0f8:
      uVar7 = 1;
    }
    else if (iVar6 == 0) {
      puVar13 = (undefined *)0x0;
      goto LAB_10624a318;
    }
    puVar13 = (undefined *)
              __ZN10webbrowser2os102__LT_impl_u20_core__convert__From_LT_webbrowser__os__LSError_GT__u20_for_u20_std__io__error__Error_GT_4from17hfe51b0738a424766E
                        (uVar7);
  }
  else {
    _bzero(&pppuStack_4c0,0x400);
    iVar6 = _CFURLGetFileSystemRepresentation(pppppppuVar8,1,&pppuStack_4c0,0x400);
    if (iVar6 == 0) {
      puVar13 = (undefined *)
                __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_109d29bf3,0x21);
    }
    else {
      uVar10 = _strlen(&pppuStack_4c0);
      if (0x400 < uVar10) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar10,0x400,&UNK_10b393028);
        goto LAB_10624a3ac;
      }
      if (uVar10 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = _malloc(uVar10);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,uVar10);
          goto LAB_10624a3ac;
        }
      }
      _memcpy(lVar11,&pppuStack_4c0,uVar10);
      uVar12 = __ZN3std4path4Path6is_dir17h70f322681d113b19E(lVar11,uVar10);
      if ((uVar12 & 1) == 0) {
        if (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
          pppppppuStack_4c8 = (undefined8 *******)&bStack_521;
          pppppppuStack_4e8 = &pppppppuStack_4c8;
          puStack_4e0 = &DAT_10624a7ec;
          pppuStack_4c0 = (undefined8 ***)&UNK_109d29b15;
          puStack_4b8 = (undefined *)0xe;
          puStack_4b0 = &UNK_109d29b15;
          uStack_4a8 = 0xe;
          pcStack_4a0 = &UNK_10b4dc6c0;
          FUN_10624a584(s_dry_run__browser_not_found_108b3cd8d,&pppppppuStack_4e8,4,&pppuStack_4c0);
        }
        puVar13 = (undefined *)
                  __ZN3std2io5error5Error3new17h949302c01fe11b24E(0,&UNK_109d29be2,0x11);
      }
      else {
        if (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
          pppppppuStack_4c8 = (undefined8 *******)&bStack_521;
          pppppppuStack_4e8 = &pppppppuStack_4c8;
          puStack_4e0 = &DAT_10624a7ec;
          pppuStack_4c0 = (undefined8 ***)&UNK_109d29b15;
          puStack_4b8 = (undefined *)0xe;
          puStack_4b0 = &UNK_109d29b15;
          uStack_4a8 = 0xe;
          pcStack_4a0 = &UNK_10b4dc6d8;
          FUN_10624a584(s__dry_run__not_actually_opening_t_108b3cdac,&pppppppuStack_4e8,4,
                        &pppuStack_4c0);
        }
        puVar13 = (undefined *)0x0;
      }
      if (uVar10 != 0) {
        _free(lVar11);
      }
    }
  }
LAB_10624a318:
  _CFRelease(puVar9);
  _CFRelease(lVar17);
  _CFRelease(pppppppuVar8);
joined_r0x000106249f08:
  if (ppppuStack_580 != (undefined8 ****)0x0) {
    _free(puStack_578);
  }
  return puVar13;
}

