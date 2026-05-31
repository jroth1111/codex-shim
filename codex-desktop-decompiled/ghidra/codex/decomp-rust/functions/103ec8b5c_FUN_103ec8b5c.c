
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec8b5c(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  long lVar6;
  undefined8 **ppuVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *extraout_x8;
  undefined8 **unaff_x21;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x24;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 **ppuStack_180;
  ulong uStack_178;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *puStack_120;
  undefined8 **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  uint uStack_a0;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  ppuVar5 = (undefined8 **)_malloc(0x80);
  if (ppuVar5 == (undefined8 **)0x0) {
    uVar12 = func_0x0001087c9084(1,0x80);
    if (*(long *)(unaff_x24 + 8) != 0) {
      _free();
    }
    _free();
    _free();
    uVar12 = __Unwind_Resume(uVar12);
    if (lStack_1a0 != 0) {
      _free();
    }
    if (puStack_120 != (undefined8 *)0x0) {
      _free(param_2);
    }
    if (uStack_90 != 0) {
      _free(pppuStack_88);
    }
    if (unaff_x24 == 0) {
      uVar12 = __Unwind_Resume();
      unaff_x21 = ppuStack_180;
    }
    _free(unaff_x21);
    lVar6 = __Unwind_Resume(uVar12);
    pcStack_1a8 = __ZN9codex_mcp10codex_apps26codex_apps_tools_cache_key17h99c3928f650a5af9E;
    if (lVar6 == 0) {
      bVar3 = false;
      uStack_1f0 = 0x8000000000000000;
      uStack_1d8 = 0x8000000000000000;
    }
    else {
      lStack_1c0 = param_2;
      uStack_1b8 = uVar12;
      puStack_1b0 = &stack0xfffffffffffffff0;
      __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E(&uStack_1f0);
      __ZN11codex_login4auth7manager9CodexAuth19get_chatgpt_user_id17h4b48c11e95af171bE
                (&uStack_1d8,lVar6);
      uVar4 = __ZN11codex_login4auth7manager9CodexAuth17account_plan_type17h5350a920d870e913E(lVar6)
      ;
      bVar3 = (uVar4 & 0xff) - 5 < 6;
    }
    extraout_x8[1] = uStack_1e8;
    *extraout_x8 = uStack_1f0;
    extraout_x8[2] = uStack_1e0;
    extraout_x8[4] = uStack_1d0;
    extraout_x8[3] = uStack_1d8;
    extraout_x8[5] = uStack_1c8;
    *(bool *)(extraout_x8 + 6) = bVar3;
    return;
  }
  puStack_188 = (undefined8 *)0x80;
  ppuStack_b0 = &puStack_188;
  *(undefined1 *)ppuVar5 = 0x7b;
  uStack_178 = 1;
  uStack_90 = CONCAT62(uStack_90._2_6_,0x100);
  pppuStack_88 = &ppuStack_b0;
  ppuStack_180 = ppuVar5;
  func_0x000103d3558c(&uStack_90,&UNK_108dc6f8d,10,param_2 + 0x18);
  if (((uStack_90 & 1) == 0) &&
     (func_0x000103d3558c(&uStack_90,&UNK_108dc6f97,0xf,param_2 + 0x30), (uStack_90 & 1) == 0)) {
    bVar1 = *(byte *)(param_2 + 0x48);
    func_0x000103ea78b0(&uStack_90,&UNK_108dc6fa6,0x14);
    pppuVar2 = pppuStack_88;
    if ((char)uStack_90 == '\x01') {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff50);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103ec9014);
      (*pcVar9)();
    }
    ppuVar5 = *pppuStack_88;
    puVar13 = ppuVar5[2];
    if (*ppuVar5 == puVar13) {
      FUN_10897c4d0(ppuVar5,puVar13,1,1,1);
      puVar13 = ppuVar5[2];
    }
    *(undefined1 *)((long)ppuVar5[1] + (long)puVar13) = 0x3a;
    ppuVar5[2] = (undefined8 *)((long)puVar13 + 1);
    ppuVar5 = *pppuVar2;
    if ((bVar1 & 1) == 0) {
      puVar13 = ppuVar5[2];
      if ((ulong)((long)*ppuVar5 - (long)puVar13) < 5) {
        FUN_10897c4d0(ppuVar5,puVar13,5,1,1);
        puVar13 = ppuVar5[2];
      }
      puVar10 = ppuVar5[1];
      *(undefined4 *)((long)puVar10 + (long)puVar13) = 0x736c6166;
      *(undefined1 *)((undefined4 *)((long)puVar10 + (long)puVar13) + 1) = 0x65;
      ppuVar5[2] = (undefined8 *)((long)puVar13 + 5);
    }
    else {
      puVar13 = ppuVar5[2];
      if ((ulong)((long)*ppuVar5 - (long)puVar13) < 4) {
        FUN_10897c4d0(ppuVar5,puVar13,4,1,1);
        puVar13 = ppuVar5[2];
      }
      *(undefined4 *)((long)ppuVar5[1] + (long)puVar13) = 0x65757274;
      ppuVar5[2] = (undefined8 *)((long)puVar13 + 4);
    }
    ppuVar5 = ppuStack_180;
    uVar11 = uStack_178;
    puVar13 = puStack_188;
    if (uStack_90._1_1_ != '\0') {
      ppuVar5 = *pppuVar2;
      puVar13 = ppuVar5[2];
      if (*ppuVar5 == puVar13) {
        FUN_10897c4d0(ppuVar5,puVar13,1,1,1);
        puVar13 = ppuVar5[2];
      }
      *(undefined1 *)((long)ppuVar5[1] + (long)puVar13) = 0x7d;
      ppuVar5[2] = (undefined8 *)((long)puVar13 + 1);
      ppuVar5 = ppuStack_180;
      uVar11 = uStack_178;
      puVar13 = puStack_188;
    }
    puStack_188 = puVar13;
    ppuStack_180 = ppuVar5;
    uStack_178 = uVar11;
    if (puVar13 != (undefined8 *)0x8000000000000000) goto LAB_103ec8d14;
  }
  else {
    puStack_120 = (undefined8 *)0xa;
    ppuVar5 = (undefined8 **)func_0x000108a4a0f8(&puStack_120,0,0);
    if (puStack_188 != (undefined8 *)0x0) {
      _free(ppuStack_180);
    }
  }
  if (*ppuVar5 == (undefined8 *)0x1) {
    puVar13 = ppuVar5[1];
    if (((ulong)puVar13 & 3) == 1) {
      puVar10 = (undefined8 *)((long)puVar13 - 1);
      uVar12 = *puVar10;
      puVar13 = *(undefined8 **)((long)puVar13 + 7);
      pcVar9 = (code *)*puVar13;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar12);
      }
      if (puVar13[1] != 0) {
        _free(uVar12);
      }
      goto LAB_103ec8ce4;
    }
  }
  else if ((*ppuVar5 == (undefined8 *)0x0) && (ppuVar5[2] != (undefined8 *)0x0)) {
    puVar10 = ppuVar5[1];
LAB_103ec8ce4:
    _free(puVar10);
  }
  _free(ppuVar5);
  uVar11 = 0;
  puVar13 = (undefined8 *)0x0;
  ppuVar5 = (undefined8 **)0x1;
LAB_103ec8d14:
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  puStack_188 = (undefined8 *)0x0;
  uStack_178 = UNK_108c84140._8_8_;
  ppuStack_180 = (undefined8 **)UNK_108c84140;
  uStack_170 = 0xc3d2e1f0;
  ppuVar7 = ppuVar5;
  if (0x3f < uVar11) {
    puStack_188 = (undefined8 *)(uVar11 >> 6);
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&ppuStack_180,ppuVar5);
    uVar8 = uVar11 & 0x7fffffffffffffc0;
    uVar11 = uVar11 & 0x3f;
    ppuVar7 = (undefined8 **)((long)ppuVar5 + uVar8);
  }
  _memcpy(&uStack_168,ppuVar7,uVar11);
  uStack_128 = (undefined1)uVar11;
  uStack_d8 = uStack_140;
  uStack_e0 = uStack_148;
  uStack_c8 = uStack_130;
  uStack_d0 = uStack_138;
  uStack_c0 = CONCAT71(uStack_127,uStack_128);
  uStack_108 = CONCAT44(uStack_16c,uStack_170);
  ppuStack_118 = ppuStack_180;
  puStack_120 = puStack_188;
  uStack_110 = uStack_178;
  uStack_f8 = uStack_160;
  uStack_100 = uStack_168;
  uStack_e8 = uStack_150;
  uStack_f0 = uStack_158;
  uVar4 = (uint)uStack_c0;
  uVar11 = uVar11 & 0xff;
  uVar8 = (long)puStack_188 << 9 | uVar11 << 3;
  puStack_a8 = (undefined *)uStack_178;
  ppuStack_b0 = ppuStack_180;
  uStack_a0 = uStack_170;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  *(undefined1 *)((long)&uStack_100 + uVar11) = 0x80;
  if (((uVar4 & 0xff) == 0x3f) ||
     (_bzero((long)&uStack_100 + uVar11 + 1,uVar11 ^ 0x3f), (uVar11 ^ 0x38) < 8)) {
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&ppuStack_b0,&uStack_100,1);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    pppuStack_88 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_60 = 0;
    uStack_58 = uVar8;
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&ppuStack_b0,&uStack_90,1);
  }
  else {
    uStack_c8 = uVar8;
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&ppuStack_b0,&uStack_100,1);
  }
  uVar4 = (uStack_a0 & 0xff00ff00) >> 8 | (uStack_a0 & 0xff00ff) << 8;
  auVar14._8_8_ = puStack_a8;
  auVar14._0_8_ = ppuStack_b0;
  auVar14 = NEON_rev32(auVar14,1);
  ppuStack_118 = auVar14._8_8_;
  puStack_120 = auVar14._0_8_;
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar4 >> 0x10 | uVar4 << 0x10);
  ppuStack_b0 = &puStack_120;
  puStack_a8 = &DAT_103d517d4;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_90,s__108b1bd74,&ppuStack_b0);
  __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
            (&puStack_120,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
             &UNK_108dc6fba,0x16);
  uVar12 = uStack_110;
  ppuVar7 = ppuStack_118;
  puStack_188 = &uStack_90;
  ppuStack_180 = (undefined8 **)&DAT_103e63590;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_1a0,s__json_108ad0b37,&puStack_188);
  __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(param_1,ppuVar7,uVar12,uStack_198,uStack_190);
  if (lStack_1a0 != 0) {
    _free(uStack_198);
  }
  if (puStack_120 != (undefined8 *)0x0) {
    _free(ppuVar7);
  }
  if (uStack_90 != 0) {
    _free(pppuStack_88);
  }
  if (puVar13 != (undefined8 *)0x0) {
    _free(ppuVar5);
  }
  return;
}

