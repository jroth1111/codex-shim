
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e76334(long *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined1 **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long extraout_x14;
  long extraout_x15;
  long *plVar4;
  char *pcStack_f0;
  undefined1 **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *pcStack_50;
  undefined1 **ppuStack_48;
  
  plVar4 = (long *)param_1[4];
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5U - *plVar4) {
    return;
  }
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  uStack_e0 = 5;
  pcStack_f0 = param_4;
  ppuStack_e8 = param_5;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_e0);
  if (iVar3 == 0) {
    return;
  }
  lStack_90 = *param_1;
  if (lStack_90 == 2) {
    lStack_98 = plVar4[10];
    lStack_90 = plVar4[0xb];
    lStack_80 = plVar4[0xc];
    uStack_a0 = 1;
    if (lStack_98 == 0) {
      uStack_a0 = 2;
    }
    if (lStack_80 == 0) {
      uStack_88 = 2;
      lStack_78 = extraout_x15;
    }
    else {
      lStack_78 = plVar4[0xd];
      uStack_88 = 1;
    }
    uStack_58 = (undefined4)plVar4[1];
    uStack_54 = *(undefined4 *)((long)plVar4 + 0xc);
    pcStack_50 = param_4;
    ppuStack_48 = param_5;
    goto LAB_103e764d4;
  }
  lStack_98 = plVar4[10];
  if (lStack_98 == 0) {
    uStack_a0 = 2;
    lStack_80 = plVar4[0xc];
    if (lStack_80 != 0) goto LAB_103e7642c;
LAB_103e76474:
    uStack_88 = 2;
    lStack_78 = extraout_x14;
  }
  else {
    lStack_90 = plVar4[0xb];
    lStack_80 = plVar4[0xc];
    uStack_a0 = 1;
    if (lStack_80 == 0) goto LAB_103e76474;
LAB_103e7642c:
    lStack_78 = plVar4[0xd];
    uStack_88 = 1;
  }
  uStack_58 = (undefined4)plVar4[1];
  uStack_54 = *(undefined4 *)((long)plVar4 + 0xc);
  lStack_c8 = param_1[3];
  puStack_b8 = &
               __ZN59__LT_core__fmt__Arguments_u20_as_u20_core__fmt__Display_GT_3fmt17h37475dbdb5fb4019E
  ;
  plStack_b0 = &lStack_c8;
  puStack_a8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  ppuStack_48 = &puStack_c0;
  pcStack_50 = s_span__108ab67bb;
  puStack_c0 = (undefined1 *)&pcStack_f0;
LAB_103e764d4:
  uStack_60 = uStack_d0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  (**(code **)(puVar1 + 0x20))(puVar2,&uStack_a0);
  return;
}

