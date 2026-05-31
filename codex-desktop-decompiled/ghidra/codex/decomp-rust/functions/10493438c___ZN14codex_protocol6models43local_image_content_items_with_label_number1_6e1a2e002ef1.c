
void __ZN14codex_protocol6models43local_image_content_items_with_label_number17h18d48e5616a4b28cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ulong param_5,undefined8 param_6,undefined1 param_7)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  func_0x0001055803b8(&puStack_170);
  if (puStack_170 == (undefined8 *)0x8000000000000004) {
    puVar6 = (undefined8 *)_malloc(0x60);
    if (puVar6 != (undefined8 *)0x0) {
      uVar8 = 0;
      uStack_118 = 3;
      uStack_108 = 0;
      puStack_110 = puVar6;
      if ((param_5 & 1) != 0) {
        puStack_100 = &uStack_a0;
        ppuStack_f8 = (undefined8 **)
                      &
                      __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        uStack_a0 = param_6;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&puStack_70,s__Image_____108b03e37,&puStack_100);
        puStack_100 = (undefined8 *)&UNK_10b33f940;
        ppuStack_f8 = (undefined8 **)&DAT_10499a23c;
        puStack_e8 = &DAT_1049b88fc;
        puStack_e0 = &UNK_10b33f950;
        puStack_d8 = &DAT_10499a23c;
        ppuStack_f0 = &puStack_70;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_a0,s__108ac137a,&puStack_100);
        if (puStack_70 != (undefined8 *)0x0) {
          _free(puStack_68);
        }
        puVar6[2] = uStack_98;
        puVar6[1] = uStack_a0;
        puVar6[3] = uStack_90;
        *puVar6 = 0x8000000000000000;
        uVar8 = 1;
        uStack_108 = 1;
      }
      ppuStack_f8 = ppuStack_160;
      puStack_100 = puStack_168;
      puStack_e8 = (undefined *)uStack_150;
      ppuStack_f0 = (undefined8 **)uStack_158;
      puStack_d8 = (undefined *)uStack_140;
      puStack_e0 = (undefined *)uStack_148;
      uStack_d0 = uStack_138;
      func_0x00010557a1b0(&puStack_70,&puStack_100);
      ppuStack_f8 = (undefined8 **)puStack_68;
      puStack_100 = puStack_70;
      ppuStack_f0 = pppuStack_60;
      puVar2 = puVar6 + uVar8 * 4;
      puVar2[1] = (ulong)puStack_68;
      *puVar2 = (ulong)puStack_70;
      puVar2[2] = (ulong)pppuStack_60;
      *(undefined1 *)(puVar2 + 3) = param_7;
      uVar1 = uVar8 + 1;
      uStack_108 = uVar1;
      if (param_5 != 0) {
        puVar7 = (undefined8 *)_malloc(8);
        if (puVar7 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,8);
          goto LAB_104934758;
        }
        *puVar7 = 0x3e6567616d692f3c;
        puVar6 = puVar6 + uVar1 * 4;
        puVar6[1] = 8;
        *puVar6 = 0x8000000000000000;
        puVar6[2] = puVar7;
        puVar6[3] = 8;
        uStack_108 = uVar8 | 2;
      }
      param_1[1] = puStack_110;
      *param_1 = uStack_118;
      param_1[2] = uStack_108;
      return;
    }
    func_0x0001087c9084(8,0x60);
    goto LAB_104934758;
  }
  puStack_d8 = (undefined *)uStack_148;
  puStack_e0 = (undefined *)uStack_150;
  uStack_c8 = uStack_138;
  uStack_d0 = uStack_140;
  uStack_b8 = uStack_128;
  uStack_c0 = uStack_130;
  uStack_b0 = uStack_120;
  ppuStack_f8 = (undefined8 **)puStack_168;
  puStack_100 = puStack_170;
  puStack_e8 = (undefined *)uStack_158;
  puVar4 = puStack_e8;
  ppuStack_f0 = ppuStack_160;
  uVar8 = (ulong)puStack_170 ^ 0x8000000000000000;
  if (-1 < (long)puStack_170) {
    uVar8 = 1;
  }
  if ((long)uVar8 < 2) {
    if (uVar8 == 0) {
LAB_1049345f4:
      puVar6 = (undefined8 *)_malloc(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        ppuStack_80 = &puStack_100;
        puStack_70 = &uStack_118;
        puStack_68 = (undefined8 *)
                     &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        pppuStack_60 = &ppuStack_80;
        puStack_58 = &DAT_10499a27c;
        uStack_118 = param_2;
        puStack_110 = (undefined8 *)param_3;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_98,s__Codex_could_not_read_the_local_i_108b03e44,&puStack_70);
LAB_1049346ec:
        uStack_a0 = 0x8000000000000000;
        puVar6[1] = uStack_98;
        *puVar6 = 0x8000000000000000;
        puVar6[3] = uStack_88;
        puVar6[2] = uStack_90;
        *param_1 = 1;
        param_1[1] = puVar6;
        param_1[2] = 1;
        func_0x0001049a52b4(&puStack_100);
        return;
      }
    }
    else {
      puStack_e8._0_1_ = (char)uStack_158;
      cVar3 = (char)puStack_e8;
      puStack_e8 = puVar4;
      puVar6 = (undefined8 *)_malloc(0x20);
      if (cVar3 == '\x04') {
        if (puVar6 != (undefined8 *)0x0) {
          ppuStack_80 = &puStack_100;
          puStack_70 = &uStack_118;
          puStack_68 = (undefined8 *)
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
          ;
          pppuStack_60 = &ppuStack_80;
          puStack_58 = &DAT_10499a27c;
          uStack_118 = param_2;
          puStack_110 = (undefined8 *)param_3;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_98,s_Image_located_at_____is_invalid__108b03e75,&puStack_70);
          goto LAB_1049346ec;
        }
      }
      else if (puVar6 != (undefined8 *)0x0) {
        ppuStack_80 = &puStack_100;
        puStack_70 = &uStack_118;
        puStack_68 = (undefined8 *)
                     &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        pppuStack_60 = &ppuStack_80;
        puStack_58 = &DAT_10499a27c;
        uStack_118 = param_2;
        puStack_110 = (undefined8 *)param_3;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_98,s__Codex_could_not_read_the_local_i_108b03e44,&puStack_70);
        goto LAB_1049346ec;
      }
    }
  }
  else {
    if (uVar8 == 2) goto LAB_1049345f4;
    puVar6 = (undefined8 *)_malloc(0x20);
    if (puVar6 != (undefined8 *)0x0) {
      ppuStack_80 = ppuStack_f0;
      uStack_78 = puStack_e8;
      puStack_70 = &uStack_118;
      puStack_68 = (undefined8 *)
                   &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      pppuStack_60 = &ppuStack_80;
      puStack_58 = &DAT_10499a23c;
      uStack_118 = param_2;
      puStack_110 = (undefined8 *)param_3;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_98,s_Codex_cannot_attach_image_at_____108b03e9a,&puStack_70);
      goto LAB_1049346ec;
    }
  }
  func_0x0001087c906c(8,0x20);
LAB_104934758:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10493475c);
  (*pcVar5)();
}

