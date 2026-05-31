
void __ZN17codex_utils_image12EncodedImage13into_data_url17h8f5707ce544332d2E
               (undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined *puStack_70;
  long *plStack_68;
  undefined *puStack_60;
  long *plStack_58;
  
  uVar7 = param_2[2];
  plVar6 = (long *)((uVar7 / 3) * 4);
  if (uVar7 != (uVar7 / 3) * 3) {
    plVar6 = (long *)((long)plVar6 + 4);
  }
  if ((long)plVar6 < 0) {
    uVar9 = 0;
LAB_10557a204:
    func_0x0001087c9084(uVar9,plVar6);
    goto LAB_10557a3b0;
  }
  lVar8 = param_2[1];
  if (plVar6 == (long *)0x0) {
    lVar4 = 1;
  }
  else {
    uVar9 = 1;
    lVar4 = _calloc(plVar6,1);
    if (lVar4 == 0) goto LAB_10557a204;
  }
  plVar5 = (long *)__ZN90__LT_base64__engine__general_purpose__GeneralPurpose_u20_as_u20_base64__engine__Engine_GT_15internal_encode17h2d6957cc06403b38E
                             (&UNK_108f559c8,lVar8,uVar7,lVar4,plVar6);
  lVar8 = (long)plVar6 - (long)plVar5;
  if (plVar6 < plVar5) {
    func_0x000108a07904(plVar5,plVar6,plVar6,&UNK_10b390058);
    goto LAB_10557a3b0;
  }
  uVar2 = -(int)plVar5 & 3;
  if ((-(int)plVar5 & 3U) != 0) {
    if (plVar6 == plVar5) {
LAB_10557a368:
      func_0x000108a07bdc(lVar8,lVar8,&UNK_10b204f98);
      goto LAB_10557a3b0;
    }
    puVar1 = (undefined1 *)(lVar4 + (long)plVar5);
    *puVar1 = 0x3d;
    if (uVar2 != 1) {
      if (lVar8 == 1) goto LAB_10557a368;
      puVar1[1] = 0x3d;
      if (uVar2 != 2) {
        if (lVar8 == 2) goto LAB_10557a368;
        puVar1[2] = 0x3d;
      }
    }
  }
  func_0x0001055bf348(&plStack_78,lVar4,plVar6);
  if ((int)plStack_78 != 1) {
    puStack_70 = &DAT_10558529c;
    puStack_60 = &DAT_10558529c;
    plStack_90 = plVar6;
    lStack_88 = lVar4;
    plStack_80 = plVar6;
    plStack_78 = param_2 + 3;
    plStack_68 = (long *)&plStack_90;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s_data___base64__108aee980,&plStack_78);
    if (plStack_90 != (long *)0x0) {
      _free(lStack_88);
    }
    if (*param_2 != 0) {
      _free(param_2[1]);
    }
    if (param_2[3] != 0) {
      _free(param_2[4]);
    }
    return;
  }
  plStack_58 = plStack_68;
  puStack_60 = puStack_70;
  plStack_78 = plVar6;
  puStack_70 = (undefined *)lVar4;
  plStack_68 = plVar6;
  func_0x000108a07a3c(&UNK_108f55e47,0xc,&plStack_78,&UNK_10b38fd80,&UNK_10b390070);
LAB_10557a3b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10557a3b4);
  (*pcVar3)();
}

