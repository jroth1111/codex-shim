
void __ZN14codex_protocol5items21ContextCompactionItem3new17hb47e65774429ec2aE(ulong *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 *extraout_x8;
  long lVar13;
  undefined1 auVar14 [16];
  ulong uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_60 = 0;
  uStack_58 = 0;
  iVar7 = _getentropy(&uStack_60,0x10);
  if (iVar7 == 0) {
    uVar3 = (uStack_60 & 0x3f00ff00ff00ff00 | 0x8000000000000000) >> 8 |
            (uStack_60 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uStack_68 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar3 = (uStack_58 & 0xff00ff00ff000f00 | 0x4000) >> 8 | (uStack_58 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uStack_70 = uVar3 >> 0x20 | uVar3 << 0x20;
    uStack_60 = 0;
    uStack_58 = 1;
    lStack_50 = 0;
    FUN_10624142c(&puStack_48,&uStack_70,0);
    FUN_1089a4f48(&uStack_60,0,0x24,1,1);
    puVar1 = (undefined8 *)(uStack_58 + lStack_50);
    puVar1[1] = puStack_40;
    *puVar1 = puStack_48;
    puVar1[3] = uStack_30;
    puVar1[2] = uStack_38;
    *(undefined4 *)(puVar1 + 4) = uStack_28;
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = lStack_50 + 0x24;
    return;
  }
  uVar8 = __ZN9getrandom8backends10getentropy9util_libc13last_os_error17h2459205b658a582bE();
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
  puStack_40 = &
               __ZN62__LT_getrandom__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hbded66845035e9f5E
  ;
  puStack_48 = (undefined1 *)&uStack_70;
  uVar9 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__could_not_retrieve_random_bytes_108b3c856,&puStack_48,&UNK_10b4dc178);
  if (uStack_60 != 0) {
    _free(uStack_58);
  }
  auVar14 = __Unwind_Resume(uVar9);
  uStack_130 = auVar14._0_8_;
  lStack_128 = uStack_130 + auVar14._8_8_ * 0x30;
  FUN_1048ee73c(&uStack_100,&uStack_130);
  lVar13 = lStack_128;
  uVar3 = uStack_130;
  if (uStack_100 != 0x8000000000000003) {
    puVar10 = (ulong *)_malloc(0x80);
    if (puVar10 == (ulong *)0x0) {
      func_0x0001087c9084(8,0x80);
    }
    else {
      puVar10[1] = uStack_f8;
      *puVar10 = uStack_100;
      puVar10[3] = uStack_e8;
      puVar10[2] = uStack_f0;
      uStack_120 = 4;
      uStack_110 = 1;
      puStack_148 = (ulong *)lVar13;
      uStack_150 = uVar3;
      lVar13 = 0x20;
      puStack_118 = puVar10;
      while (uVar3 = uStack_110, FUN_1048ee73c(&puStack_d8,&uStack_150),
            puStack_d8 != (ulong *)0x8000000000000003) {
        if (uVar3 == uStack_120) {
          FUN_1089a4f48(&uStack_120,uVar3,1,8,0x20);
          puVar10 = puStack_118;
        }
        plVar2 = (long *)((long)puVar10 + lVar13);
        plVar2[1] = (long)puStack_d0;
        *plVar2 = (long)puStack_d8;
        plVar2[3] = lStack_c0;
        plVar2[2] = lStack_c8;
        uStack_110 = uVar3 + 1;
        lVar13 = lVar13 + 0x20;
      }
      puStack_148 = puStack_118;
      uStack_150 = uStack_120;
      uStack_140 = uStack_110;
      if (uStack_110 == 0) {
        *extraout_x8 = 0x11;
        if (uStack_120 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(puStack_118);
        return;
      }
      uStack_100 = 0;
      uStack_f8 = 0;
      iVar7 = _getentropy(&uStack_100,0x10);
      if (iVar7 == 0) {
        uVar3 = (uStack_100 & 0x3f00ff00ff00ff00 | 0x8000000000000000) >> 8 |
                (uStack_100 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        puStack_118 = (ulong *)(uVar3 >> 0x20 | uVar3 << 0x20);
        uVar3 = (uStack_f8 & 0xff00ff00ff000f00 | 0x4000) >> 8 | (uStack_f8 & 0xff00ff00ff00ff) << 8
        ;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uStack_120 = uVar3 >> 0x20 | uVar3 << 0x20;
        uStack_100 = 0;
        uStack_f8 = 1;
        uStack_f0 = 0;
        FUN_10624142c(&puStack_d8,&uStack_120,0);
        FUN_1089a4f48(&uStack_100,0,0x24,1,1);
        uVar5 = uStack_f0;
        uVar4 = uStack_f8;
        uVar3 = uStack_100;
        plVar2 = (long *)(uStack_f8 + uStack_f0);
        plVar2[1] = (long)puStack_d0;
        *plVar2 = (long)puStack_d8;
        plVar2[3] = lStack_c0;
        plVar2[2] = lStack_c8;
        *(undefined4 *)(plVar2 + 4) = uStack_b8;
        puVar11 = (undefined4 *)_malloc(4);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0x72657375;
          extraout_x8[5] = puStack_148;
          extraout_x8[4] = uStack_150;
          extraout_x8[1] = 4;
          *extraout_x8 = 2;
          extraout_x8[2] = puVar11;
          extraout_x8[3] = 4;
          extraout_x8[6] = uStack_140;
          extraout_x8[7] = uVar3;
          extraout_x8[8] = uVar4;
          extraout_x8[9] = uVar5 + 0x24;
          *(undefined1 *)(extraout_x8 + 10) = 2;
          return;
        }
        func_0x0001087c9084(1,4);
      }
      else {
        piVar12 = (int *)___error();
        iVar7 = 0x10001;
        if (0 < *piVar12) {
          iVar7 = -*piVar12;
        }
        uStack_120 = CONCAT44(uStack_120._4_4_,iVar7);
        puStack_d8 = &uStack_120;
        puStack_d0 = &
                     __ZN62__LT_getrandom__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hbded66845035e9f5E
        ;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__could_not_retrieve_random_bytes_108b3c856,&puStack_d8,&UNK_10b4dc178);
      }
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104921c6c);
    (*pcVar6)();
  }
  *extraout_x8 = 0x11;
  return;
}

