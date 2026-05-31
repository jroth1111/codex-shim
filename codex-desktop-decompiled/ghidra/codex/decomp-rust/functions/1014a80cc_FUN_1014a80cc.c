
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a80cc(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  ulong *puVar3;
  char *extraout_x8;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 *unaff_x21;
  ulong uVar4;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010150b194(&pcStack_98);
  pcStack_a8 = pcStack_88;
  pcStack_b0 = pcStack_90;
  pcStack_a0 = pcStack_80;
  if (pcStack_98 != (char *)0x2) goto LAB_1014a8164;
  pcStack_e8 = pcStack_88;
  pcStack_f0 = pcStack_90;
  pcStack_e0 = pcStack_80;
  puVar3 = (ulong *)(*
                    ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                    )();
  if ((char)puVar3[4] != '\x01') {
    if ((char)puVar3[4] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar3,&DAT_100c35cd4);
      *(undefined1 *)(puVar3 + 4) = 1;
      goto LAB_1014a81ac;
    }
    if (pcStack_f0 != (char *)0x0) {
      _free(pcStack_e8);
    }
LAB_1014a8158:
    func_0x000108a82a50(&UNK_10b234430);
    pcStack_98 = extraout_x8;
LAB_1014a8164:
    param_1[5] = uStack_70;
    param_1[4] = puStack_78;
    param_1[7] = uStack_60;
    param_1[6] = uStack_68;
    param_1[9] = uStack_50;
    param_1[8] = uStack_58;
    param_1[10] = uStack_48;
    param_1[2] = pcStack_a8;
    param_1[1] = pcStack_b0;
    param_1[3] = pcStack_a0;
    *param_1 = pcStack_98;
    return;
  }
LAB_1014a81ac:
  pcVar1 = pcStack_e8;
  uVar4 = *puVar3;
  if (0x7ffffffffffffffe < uVar4) {
    func_0x000108a07858(&UNK_10b24de60);
LAB_1014a8340:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a8344);
    (*pcVar2)();
  }
  *puVar3 = uVar4 + 1;
  if (puVar3[1] == 0x8000000000000000) {
    if ((pcStack_e0 == (char *)0x0) || (*pcStack_e8 != '/')) {
      unaff_x21 = (undefined8 *)_malloc(0x30);
      if (unaff_x21 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x30);
        goto LAB_1014a8340;
      }
      unaff_x21[1] = 0x2066754268746150;
      *unaff_x21 = 0x6574756c6f736241;
      unaff_x21[3] = 0x7469772064657a69;
      unaff_x21[2] = 0x6c61697265736564;
      unaff_x21[5] = 0x6874617020657361;
      unaff_x21[4] = 0x6220612074756f68;
      *puVar3 = uVar4;
      uStack_48 = extraout_x11_01;
      if (pcStack_f0 != (char *)0x0) {
        _free(pcVar1);
        uStack_48 = extraout_x11_02;
      }
      pcStack_98 = (char *)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_60 = 8;
      pcStack_80 = (char *)0x30;
      uStack_68 = 0;
      uStack_70 = 0x30;
      goto LAB_1014a82d8;
    }
    FUN_100bdc488(&pcStack_b0,&pcStack_f0);
    if (pcStack_b0 == (char *)0x8000000000000000) {
      FUN_10112cf64(&pcStack_98,pcStack_a8);
      uStack_c8 = uStack_50;
      uStack_d0 = uStack_58;
      pcStack_b8 = pcStack_88;
      pcStack_c0 = pcStack_90;
      *puVar3 = *puVar3 - 1;
      unaff_x21 = puStack_78;
      if (pcStack_98 != (char *)0x3) goto LAB_1014a82d8;
      goto LAB_1014a8158;
    }
    pcStack_b8 = pcStack_a8;
    pcStack_c0 = pcStack_b0;
    uStack_48 = extraout_x11;
  }
  else {
    FUN_100bdc6e8(&pcStack_98,&pcStack_f0,puVar3[2],puVar3[3]);
    pcStack_b8 = pcStack_90;
    pcStack_c0 = pcStack_98;
    pcStack_a0 = pcStack_88;
    uStack_48 = extraout_x11_00;
  }
  *puVar3 = *puVar3 - 1;
  uStack_68 = 0;
  uStack_70 = 0x30;
  uStack_60 = 8;
  pcStack_98 = (char *)0x2;
  pcStack_80 = pcStack_a0;
LAB_1014a82d8:
  *param_1 = pcStack_98;
  param_1[2] = pcStack_b8;
  param_1[1] = pcStack_c0;
  param_1[3] = pcStack_80;
  param_1[4] = unaff_x21;
  param_1[6] = uStack_68;
  param_1[5] = uStack_70;
  param_1[7] = uStack_60;
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[10] = uStack_48;
  return;
}

