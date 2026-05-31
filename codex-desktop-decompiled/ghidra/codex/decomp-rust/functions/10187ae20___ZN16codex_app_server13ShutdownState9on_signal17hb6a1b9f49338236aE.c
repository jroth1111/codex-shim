
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN16codex_app_server13ShutdownState9on_signal17hb6a1b9f49338236aE
               (undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ****ppppuStack_120;
  char ***pppcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  char **ppcStack_100;
  undefined *puStack_f8;
  char *pcStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  char ******ppppppcStack_68;
  char ******ppppppcStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_50;
  undefined8 **ppuStack_48;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    if ((param_2 & 1) != 0) {
      return;
    }
    *(undefined1 *)((long)param_1 + 0x11) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = 0;
  uStack_148 = param_3;
  uStack_140 = param_4;
  if ((2 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) ||
     (((bVar4 = bRam000000010b627468, 1 < bRam000000010b627468 - 1 &&
       ((bRam000000010b627468 == 0 ||
        (bVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b627458), bVar4 == 0)))) ||
      (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (lRam000000010b627458,bVar4), iVar5 == 0)))) {
    lVar3 = lRam000000010b627458;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_130 = *(undefined8 *)(lRam000000010b627458 + 0x20);
      uStack_128 = *(undefined8 *)(lRam000000010b627458 + 0x28);
      uStack_138 = 3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_138);
      if (iVar5 != 0) {
        lStack_108 = lRam000000010b627458 + 0x30;
        puStack_e0 = &uStack_148;
        ppppppuStack_d8 =
             (undefined8 ******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        puStack_d0 = &uStack_140;
        puStack_c8 = &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        ppuStack_e8 = &puStack_e0;
        pcStack_f0 = s_Greceived_shutdown_signal__enter_108add481;
        ppcStack_100 = &pcStack_f0;
        puStack_f8 = &UNK_10b25d1e8;
        pppcStack_118 = &ppcStack_100;
        ppppuStack_120 = (char *****)0x1;
        uStack_110 = 1;
        lStack_a0 = *(long *)(lVar3 + 0x60);
        uStack_98 = *(undefined8 *)(lVar3 + 0x68);
        puStack_b8 = *(undefined1 **)(lVar3 + 0x50);
        puStack_b0 = *(undefined8 **)(lVar3 + 0x58);
        puStack_c0 = (undefined8 *)0x1;
        if (puStack_b8 == (undefined1 *)0x0) {
          puStack_c0 = (undefined8 *)0x2;
        }
        uStack_78 = *(undefined4 *)(lVar3 + 8);
        uStack_74 = *(undefined4 *)(lVar3 + 0xc);
        ppppppcStack_60 = (char ******)&ppppuStack_120;
        puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
        ppppppuStack_50 = &ppppppcStack_60;
        ppuStack_48 = (undefined8 **)&DAT_1061c2098;
        puStack_a8 = (undefined1 *)0x1;
        if (lStack_a0 == 0) {
          puStack_a8 = (undefined1 *)0x2;
        }
        uStack_88 = uStack_130;
        uStack_90 = uStack_138;
        uStack_80 = uStack_128;
        ppppppcStack_68 = (char ******)&ppppppuStack_50;
        pcStack_70 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&puStack_c0);
      }
    }
    return;
  }
  puStack_c8 = (undefined1 *)(lRam000000010b627458 + 0x30);
  puStack_c0 = &uStack_148;
  puStack_b8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  puStack_b0 = &uStack_140;
  puStack_a8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  ppuStack_48 = &puStack_c0;
  ppppppuStack_50 = (undefined8 ******)s_Greceived_shutdown_signal__enter_108add481;
  ppppppcStack_60 = (char ******)&ppppppuStack_50;
  puStack_58 = &UNK_10b25d1e8;
  ppppppuStack_d8 = &ppppppcStack_60;
  puStack_e0 = (undefined8 *)0x1;
  puStack_d0 = (undefined8 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b627458,&puStack_e0);
  lVar3 = lRam000000010b627458;
  if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
    return;
  }
  if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 3) {
    return;
  }
  pppcStack_118 = *(char ****)(lRam000000010b627458 + 0x20);
  uStack_110 = *(undefined8 *)(lRam000000010b627458 + 0x28);
  ppppuStack_120 = (char *****)0x3;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppuStack_120);
  if (iVar5 == 0) {
    return;
  }
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
            (lVar3,puVar2,puVar1,&ppppuStack_120,&puStack_e0);
  return;
}

