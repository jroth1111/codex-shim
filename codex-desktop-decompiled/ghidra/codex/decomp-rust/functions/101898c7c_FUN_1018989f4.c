
/* WARNING: Type propagation algorithm not settling */

void FUN_1018989f4(ulong *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long lVar5;
  long *******ppppppplVar6;
  undefined8 uVar7;
  long *****ppppplVar8;
  char *pcVar9;
  long *****ppppplVar10;
  code *pcVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long unaff_x25;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long *******ppppppplStack_88;
  ulong uStack_80;
  long *******ppppppplStack_70;
  long ******pppppplStack_68;
  long *******ppppppplStack_60;
  ulong uStack_58;
  
  if (param_3 == 0) {
    lVar5 = 1;
    _memcpy(1,param_2,0);
    ppppppplVar6 = (long *******)_malloc(0x80);
  }
  else {
    lVar5 = _malloc(param_3);
    if (lVar5 == 0) {
      uVar7 = func_0x0001087c9084(1,param_3);
      if (*(long *)(unaff_x25 + 8) != 0) {
        _free();
      }
      _free();
      _free(param_4);
      if (param_3 != 0) {
        _free(0);
      }
      auVar16 = __Unwind_Resume(uVar7);
      pcVar9 = auVar16._8_8_;
      plStack_e0 = auVar16._0_8_;
      pcStack_98 = 
      __ZN16codex_app_server18request_processors16thread_processor30thread_read_history_load_error17h5bb707090fe7cbf5E
      ;
      cVar1 = *pcVar9;
      uStack_c0 = param_4;
      uStack_b8 = uVar7;
      lStack_b0 = lVar5;
      lStack_a8 = param_3;
      puStack_a0 = &stack0xfffffffffffffff0;
      if (cVar1 == '\0') {
        if (*(long *)(pcVar9 + 9) == plStack_e0[1] && *(long *)(pcVar9 + 1) == *plStack_e0) {
          puStack_d8 = &
                       __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_138,s_thread_O_is_not_materialized_yet_108adda88,&plStack_e0);
          extraout_x8[2] = uStack_130;
          extraout_x8[1] = uStack_138;
LAB_101898fc0:
          extraout_x8[3] = uStack_128;
          *extraout_x8 = 0;
          return;
        }
      }
      else {
        if (cVar1 == '\x01') {
          if ((*(ulong *)(pcVar9 + 0x18) < 0x20) ||
             (plVar12 = *(long **)(pcVar9 + 0x10),
             ((*plVar12 != 0x742064656c696166 || plVar12[1] != 0x766c6f736572206f) ||
             plVar12[2] != 0x756f6c6c6f722065) || plVar12[3] != 0x6020687461702074)) {
            uVar7 = *(undefined8 *)(pcVar9 + 8);
            extraout_x8[2] = *(undefined8 *)(pcVar9 + 0x10);
            extraout_x8[1] = uVar7;
            uStack_128 = *(undefined8 *)(pcVar9 + 0x18);
            goto LAB_101898fc0;
          }
          lVar5 = *(long *)(pcVar9 + 8);
          puStack_d8 = &
                       __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_150,s_thread_O_is_not_materialized_yet_108adda88,&plStack_e0);
          extraout_x8[2] = uStack_148;
          extraout_x8[1] = uStack_150;
          extraout_x8[3] = uStack_140;
          *extraout_x8 = 0;
          goto joined_r0x000101899048;
        }
        if (cVar1 == '\x03') {
          uVar7 = *(undefined8 *)(pcVar9 + 0x10);
          extraout_x8[1] = *(undefined8 *)(pcVar9 + 8);
          extraout_x8[2] = uVar7;
          *extraout_x8 = 1;
          return;
        }
      }
      lStack_118 = *(long *)(pcVar9 + 8);
      uStack_120 = *(undefined8 *)pcVar9;
      uStack_108 = *(undefined8 *)(pcVar9 + 0x18);
      plStack_110 = *(long **)(pcVar9 + 0x10);
      puStack_d8 = &
                   __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      puStack_d0 = &uStack_120;
      puStack_c8 = &
                   __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_f8,s__failed_to_load_thread_history_f_108addae2,&plStack_e0);
      extraout_x8[2] = uStack_f0;
      extraout_x8[1] = uStack_f8;
      extraout_x8[3] = uStack_e8;
      *extraout_x8 = 2;
      plVar12 = plStack_110;
      lVar5 = lStack_118;
      if ((byte)uStack_120 < 2) {
        if ((byte)uStack_120 == 0) {
          return;
        }
      }
      else if (((byte)uStack_120 != 2) && ((byte)uStack_120 == 3)) {
        return;
      }
joined_r0x000101899048:
      if (lVar5 != 0) {
        _free(plVar12);
      }
      return;
    }
    _memcpy(lVar5,param_2,param_3);
    ppppppplVar6 = (long *******)_malloc(0x80);
  }
  if (ppppppplVar6 == (long *******)0x0) {
    func_0x0001087c9084(1,0x80);
    goto LAB_101898d7c;
  }
  pppppplStack_68 = (long ******)0x80;
  ppppppplStack_70 = &pppppplStack_68;
  *(undefined1 *)ppppppplVar6 = 0x7b;
  uStack_58 = 1;
  uVar2 = (ulong)uStack_90 >> 0x10;
  uStack_90 = (long *******)CONCAT62((int6)uVar2,0x100);
  ppppppplStack_88 = (long *******)&ppppppplStack_70;
  ppppppplStack_60 = ppppppplVar6;
  FUN_101a8d0cc(&uStack_90,&UNK_108cecafa,6);
  ppppppplVar6 = ppppppplStack_88;
  if (((ulong)uStack_90 & 1) == 0) {
    pppppplVar13 = *ppppppplStack_88;
    ppppplVar8 = pppppplVar13[2];
    if (*pppppplVar13 == ppppplVar8) {
      FUN_1088bb36c(pppppplVar13,ppppplVar8,1,1,1);
      ppppplVar8 = pppppplVar13[2];
    }
    *(undefined1 *)((long)pppppplVar13[1] + (long)ppppplVar8) = 0x3a;
    pppppplVar13[2] = (long *****)((long)ppppplVar8 + 1);
    pppppplVar13 = *ppppppplVar6;
    ppppplVar8 = pppppplVar13[2];
    if (*pppppplVar13 == ppppplVar8) {
      FUN_1088bb36c(pppppplVar13,ppppplVar8,1,1,1);
      ppppplVar8 = pppppplVar13[2];
    }
    *(undefined1 *)((long)pppppplVar13[1] + (long)ppppplVar8) = 0x22;
    pppppplVar13[2] = (long *****)((long)ppppplVar8 + 1);
    FUN_10183967c(pppppplVar13,lVar5,param_3);
    ppppplVar8 = pppppplVar13[2];
    if (*pppppplVar13 == ppppplVar8) {
      FUN_1088bb36c(pppppplVar13,ppppplVar8,1,1,1);
      ppppplVar8 = pppppplVar13[2];
    }
    *(undefined1 *)((long)pppppplVar13[1] + (long)ppppplVar8) = 0x22;
    pppppplVar13[2] = (long *****)((long)ppppplVar8 + 1);
    FUN_101a8d0cc(&uStack_90,&UNK_108cee498,0xd);
    ppppppplVar6 = ppppppplStack_88;
    if ((char)uStack_90 != '\x01') {
      pppppplVar13 = *ppppppplStack_88;
      ppppplVar8 = pppppplVar13[2];
      if (*pppppplVar13 == ppppplVar8) {
        FUN_1088bb36c(pppppplVar13,ppppplVar8,1,1,1);
        ppppplVar8 = pppppplVar13[2];
      }
      *(undefined1 *)((long)pppppplVar13[1] + (long)ppppplVar8) = 0x3a;
      pppppplVar13[2] = (long *****)((long)ppppplVar8 + 1);
      pppppplVar13 = *ppppppplVar6;
      if ((param_4 & 1) == 0) {
        ppppplVar8 = pppppplVar13[2];
        if ((ulong)((long)*pppppplVar13 - (long)ppppplVar8) < 5) {
          FUN_1088bb36c(pppppplVar13,ppppplVar8,5,1,1);
          ppppplVar8 = pppppplVar13[2];
        }
        ppppplVar10 = pppppplVar13[1];
        *(undefined4 *)((long)ppppplVar10 + (long)ppppplVar8) = 0x736c6166;
        *(undefined1 *)((undefined4 *)((long)ppppplVar10 + (long)ppppplVar8) + 1) = 0x65;
        pppppplVar13[2] = (long *****)((long)ppppplVar8 + 5);
      }
      else {
        ppppplVar8 = pppppplVar13[2];
        if ((ulong)((long)*pppppplVar13 - (long)ppppplVar8) < 4) {
          FUN_1088bb36c(pppppplVar13,ppppplVar8,4,1,1);
          ppppplVar8 = pppppplVar13[2];
        }
        *(undefined4 *)((long)pppppplVar13[1] + (long)ppppplVar8) = 0x65757274;
        pppppplVar13[2] = (long *****)((long)ppppplVar8 + 4);
      }
      ppppppplVar3 = ppppppplStack_70;
      ppppppplVar4 = ppppppplStack_60;
      if (uStack_90._1_1_ != '\0') {
        pppppplVar13 = *ppppppplVar6;
        ppppplVar8 = pppppplVar13[2];
        if (*pppppplVar13 == ppppplVar8) {
          FUN_1088bb36c(pppppplVar13,ppppplVar8,1,1,1);
          ppppplVar8 = pppppplVar13[2];
        }
        *(undefined1 *)((long)pppppplVar13[1] + (long)ppppplVar8) = 0x7d;
        pppppplVar13[2] = (long *****)((long)ppppplVar8 + 1);
        ppppppplVar3 = ppppppplStack_70;
        ppppppplVar4 = ppppppplStack_60;
      }
      ppppppplStack_70 = ppppppplVar4;
      ppppppplStack_60 = ppppppplStack_70;
      if (pppppplStack_68 != (long ******)0x8000000000000000) {
        param_1[2] = (ulong)ppppppplStack_70;
        param_1[3] = uStack_58;
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pppppplStack_68;
        goto joined_r0x000101898d30;
      }
      uStack_90 = (long *******)&ppppppplStack_70;
      ppppppplStack_88 =
           (long *******)
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pppppplStack_68,s_failed_to_serialize_cursor__108adda69,&uStack_90);
      ppppppplVar6 = ppppppplStack_70;
      ppppppplStack_88 = ppppppplStack_60;
      uStack_90 = (long *******)pppppplStack_68;
      uStack_80 = uStack_58;
      if (*ppppppplStack_70 == (long ******)0x1) {
        pppppplVar13 = ppppppplStack_70[1];
        if (((ulong)pppppplVar13 & 3) == 1) {
          pppppplVar14 = (long ******)((long)pppppplVar13 + -1);
          ppppplVar8 = *pppppplVar14;
          puVar15 = *(undefined8 **)((long)pppppplVar13 + 7);
          pcVar11 = (code *)*puVar15;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(ppppplVar8);
          }
          if (puVar15[1] != 0) {
            _free(ppppplVar8);
          }
          goto LAB_101898cc0;
        }
      }
      else if ((*ppppppplStack_70 == (long ******)0x0) && (ppppppplStack_70[2] != (long ******)0x0))
      {
        pppppplVar14 = ppppppplStack_70[1];
LAB_101898cc0:
        _free(pppppplVar14);
      }
      _free(ppppppplVar6);
      param_1[1] = (ulong)ppppppplStack_88;
      *param_1 = (ulong)uStack_90;
      param_1[2] = uStack_80;
      param_1[3] = 0x8000000000000005;
      param_1[0xc] = 0xffffffffffff80a5;
      ppppppplVar3 = ppppppplStack_70;
joined_r0x000101898d30:
      ppppppplStack_70 = ppppppplVar3;
      if (param_3 != 0) {
        _free(lVar5);
      }
      return;
    }
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce9e0f,0x28,&UNK_10b26a120);
LAB_101898d7c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x101898d80);
  (*pcVar11)();
}

