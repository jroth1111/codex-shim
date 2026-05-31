
void __ZN14codex_protocol5items25build_hook_prompt_message17h7099e80f140203a9E
               (undefined8 *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  lStack_b8 = param_2 + param_3 * 0x30;
  uStack_c0 = param_2;
  func_0x0001048ee73c(&uStack_90,&uStack_c0);
  lVar10 = lStack_b8;
  uVar2 = uStack_c0;
  if (uStack_90 == 0x8000000000000003) {
    *param_1 = 0x11;
    return;
  }
  puVar7 = (ulong *)_malloc(0x80);
  if (puVar7 == (ulong *)0x0) {
    func_0x0001087c9084(8,0x80);
  }
  else {
    puVar7[1] = uStack_88;
    *puVar7 = uStack_90;
    puVar7[3] = uStack_78;
    puVar7[2] = uStack_80;
    uStack_b0 = 4;
    uStack_a0 = 1;
    puStack_d8 = (ulong *)lVar10;
    uStack_e0 = uVar2;
    lVar10 = 0x20;
    puStack_a8 = puVar7;
    while (uVar2 = uStack_a0, func_0x0001048ee73c(&puStack_68,&uStack_e0),
          puStack_68 != (ulong *)0x8000000000000003) {
      if (uVar2 == uStack_b0) {
        FUN_1089a4f48(&uStack_b0,uVar2,1,8,0x20);
        puVar7 = puStack_a8;
      }
      plVar1 = (long *)((long)puVar7 + lVar10);
      plVar1[1] = (long)puStack_60;
      *plVar1 = (long)puStack_68;
      plVar1[3] = lStack_50;
      plVar1[2] = lStack_58;
      uStack_a0 = uVar2 + 1;
      lVar10 = lVar10 + 0x20;
    }
    puStack_d8 = puStack_a8;
    uStack_e0 = uStack_b0;
    uStack_d0 = uStack_a0;
    if (uStack_a0 == 0) {
      *param_1 = 0x11;
      if (uStack_b0 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puStack_a8);
      return;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    iVar6 = _getentropy(&uStack_90,0x10);
    if (iVar6 == 0) {
      uVar2 = (uStack_90 & 0x3f00ff00ff00ff00 | 0x8000000000000000) >> 8 |
              (uStack_90 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puStack_a8 = (ulong *)(uVar2 >> 0x20 | uVar2 << 0x20);
      uVar2 = (uStack_88 & 0xff00ff00ff000f00 | 0x4000) >> 8 | (uStack_88 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uStack_b0 = uVar2 >> 0x20 | uVar2 << 0x20;
      uStack_90 = 0;
      uStack_88 = 1;
      uStack_80 = 0;
      FUN_10624142c(&puStack_68,&uStack_b0,0);
      FUN_1089a4f48(&uStack_90,0,0x24,1,1);
      uVar4 = uStack_80;
      uVar3 = uStack_88;
      uVar2 = uStack_90;
      plVar1 = (long *)(uStack_88 + uStack_80);
      plVar1[1] = (long)puStack_60;
      *plVar1 = (long)puStack_68;
      plVar1[3] = lStack_50;
      plVar1[2] = lStack_58;
      *(undefined4 *)(plVar1 + 4) = uStack_48;
      puVar8 = (undefined4 *)_malloc(4);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0x72657375;
        param_1[5] = puStack_d8;
        param_1[4] = uStack_e0;
        param_1[1] = 4;
        *param_1 = 2;
        param_1[2] = puVar8;
        param_1[3] = 4;
        param_1[6] = uStack_d0;
        param_1[7] = uVar2;
        param_1[8] = uVar3;
        param_1[9] = uVar4 + 0x24;
        *(undefined1 *)(param_1 + 10) = 2;
        return;
      }
      func_0x0001087c9084(1,4);
    }
    else {
      piVar9 = (int *)___error();
      iVar6 = 0x10001;
      if (0 < *piVar9) {
        iVar6 = -*piVar9;
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar6);
      puStack_68 = &uStack_b0;
      puStack_60 = &
                   __ZN62__LT_getrandom__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hbded66845035e9f5E
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__could_not_retrieve_random_bytes_108b3c856,&puStack_68,&UNK_10b4dc178);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104921c6c);
  (*pcVar5)();
}

