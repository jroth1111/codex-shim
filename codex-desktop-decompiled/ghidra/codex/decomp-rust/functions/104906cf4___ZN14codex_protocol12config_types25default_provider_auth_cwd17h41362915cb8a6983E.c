
/* WARNING: Removing unreachable block (ram,0x000104906e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14codex_protocol12config_types25default_provider_auth_cwd17h41362915cb8a6983E
               (long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  char *pcVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long lStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  code *pcStack_60;
  long lStack_58;
  
  pcVar7 = (char *)_malloc(1);
  if (pcVar7 == (char *)0x0) {
    func_0x0001087c9084(1,1);
  }
  else {
    *pcVar7 = '.';
    lStack_98 = 1;
    uStack_88 = 1;
    pcStack_90 = pcVar7;
    puVar8 = (ulong *)(*
                      ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                      )();
    if ((char)puVar8[4] == '\x01') goto LAB_104906d8c;
    if ((char)puVar8[4] != '\x02') goto LAB_104906d74;
    _free(pcVar7);
    do {
      func_0x000108a82a50(&UNK_10b33fbf8);
LAB_104906d74:
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar8,&DAT_104998bbc);
      *(undefined1 *)(puVar8 + 4) = 1;
LAB_104906d8c:
      if (0x7ffffffffffffffe < *puVar8) {
        func_0x000108a07858(&UNK_10b340690);
        goto LAB_104906f80;
      }
      *puVar8 = *puVar8 + 1;
      if (puVar8[1] == 0x8000000000000000) {
        if (*pcVar7 != '/') {
          uVar9 = func_0x0001089a554c();
          *puVar8 = *puVar8 - 1;
          _free(pcVar7);
          goto LAB_104906e9c;
        }
        func_0x000104998aec(&plStack_68,&lStack_98);
        if (plStack_68 == (long *)0x8000000000000000) {
          auVar10 = func_0x0001089a558c(pcStack_60);
          *puVar8 = *puVar8 - 1;
          goto LAB_104906e78;
        }
        *puVar8 = *puVar8 - 1;
        plVar3 = plStack_68;
        pcVar6 = pcStack_60;
        lVar4 = lStack_58;
        break;
      }
      uVar1 = puVar8[2];
      uVar2 = puVar8[3];
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&plStack_80,pcVar7,1);
      lVar5 = lStack_78;
      __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                (&plStack_68,lStack_78,lStack_70,uVar1,uVar2);
      lVar4 = lStack_58;
      pcVar6 = pcStack_60;
      plVar3 = plStack_68;
      if (plStack_80 != (long *)0x0) {
        _free(lVar5);
      }
      _free(pcVar7);
      *puVar8 = *puVar8 - 1;
    } while (plVar3 == (long *)0x8000000000000001);
    auVar10._8_8_ = lVar4;
    auVar10._0_8_ = pcVar6;
    if (plVar3 != (long *)0x8000000000000000) {
      *param_1 = (long)plVar3;
      param_1[1] = (long)pcVar6;
      param_1[2] = lVar4;
      return;
    }
LAB_104906e78:
    uVar9 = auVar10._0_8_;
    if (auVar10._8_8_ != 0) {
LAB_104906e9c:
      _free(uVar9);
    }
    __ZN3std3env11current_dir17he7f55ba519818f7aE(&plStack_80);
    if (plStack_80 != (long *)0x8000000000000000) {
      plStack_68 = plStack_80;
      pcStack_60 = (code *)lStack_78;
      lStack_58 = lStack_70;
      FUN_105561214(&plStack_80,&plStack_68);
      if (plStack_80 != (long *)0x8000000000000000) {
        param_1[1] = lStack_78;
        *param_1 = (long)plStack_80;
        param_1[2] = lStack_70;
        return;
      }
    }
  }
  plStack_68 = &lStack_98;
  pcStack_60 = 
  __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
  lStack_98 = lStack_78;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_provider_auth_cwd_must_resolve__108b03d5c,&plStack_68,&UNK_10b33f720);
LAB_104906f80:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x104906f84);
  (*pcVar6)();
}

