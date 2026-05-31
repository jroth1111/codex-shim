
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144491c(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  char *extraout_x9;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  
  bVar1 = *param_2;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      pcVar6 = *(char **)(param_2 + 0x18);
      if (pcVar6 == (char *)0x0) goto LAB_10144495c;
LAB_1014449ac:
      pcVar5 = (char *)_malloc(pcVar6);
      if (pcVar5 == (char *)0x0) {
        func_0x0001087c9084(1,pcVar6);
        pcVar6 = (char *)0x0;
        goto LAB_101444cbc;
      }
    }
    else {
      if (bVar1 != 0xd) {
LAB_101444c98:
        FUN_108855bf0(&pcStack_c0,param_2,&pcStack_100,&UNK_10b20a620);
        goto LAB_101444a28;
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
      pcVar6 = *(char **)(param_2 + 0x10);
      if (pcVar6 != (char *)0x0) goto LAB_1014449ac;
LAB_10144495c:
      pcVar5 = (char *)0x1;
    }
    _memcpy(pcVar5,uVar8,pcVar6);
    pcStack_b8 = pcVar6;
    pcStack_b0 = pcVar5;
LAB_101444a38:
    pcStack_c8 = pcStack_b0;
    pcStack_d0 = pcStack_b8;
    pcStack_f8 = pcStack_b0;
    pcStack_100 = pcStack_b8;
    pcStack_f0 = pcVar6;
    puVar3 = (ulong *)(*
                      ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                      )();
    if ((char)puVar3[4] == '\x01') {
LAB_101444af0:
      pcVar5 = pcStack_f8;
      uVar9 = *puVar3;
      if (0x7ffffffffffffffe < uVar9) {
        func_0x000108a07858(&UNK_10b24de60);
        goto LAB_101444cd4;
      }
      *puVar3 = uVar9 + 1;
      if (puVar3[1] == 0x8000000000000000) {
        if ((pcVar6 == (char *)0x0) || (*pcStack_f8 != '/')) {
          puVar4 = (undefined8 *)_malloc(0x30);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = 0x2066754268746150;
            *puVar4 = 0x6574756c6f736241;
            puVar4[3] = 0x7469772064657a69;
            puVar4[2] = 0x6c61697265736564;
            puVar4[5] = 0x6874617020657361;
            puVar4[4] = 0x6220612074756f68;
            *puVar3 = uVar9;
            uStack_70 = extraout_x11;
            if (pcStack_100 != (char *)0x0) {
              _free(pcVar5);
              uStack_70 = extraout_x11_00;
            }
            pcVar5 = (char *)0x0;
            pcStack_60 = (char *)0x0;
            pcStack_58 = (char *)0x0;
            uStack_88 = 8;
            pcStack_a8 = (char *)0x30;
            uStack_90 = 0;
            uStack_98 = 0x30;
            puStack_a0 = puVar4;
            goto LAB_101444c3c;
          }
          goto LAB_101444cc8;
        }
        FUN_100bdc488(&pcStack_60,&pcStack_100);
        if (pcStack_60 == (char *)0x8000000000000000) {
          FUN_10112cf64(&pcStack_c0,pcStack_58);
          pcVar6 = pcStack_b8;
          pcVar5 = pcStack_c0;
          pcStack_c8 = pcStack_b0;
          pcStack_d0 = pcStack_b8;
          *puVar3 = *puVar3 - 1;
          if (pcStack_c0 != (char *)0x3) {
            pcStack_b8 = pcStack_b0;
            pcStack_c0 = pcVar6;
            pcStack_58 = (char *)uStack_78;
            pcStack_60 = pcStack_80;
            if (pcVar5 != (char *)0x2) goto LAB_101444c3c;
            goto LAB_101444bd0;
          }
          goto LAB_101444a80;
        }
        pcStack_c8 = pcStack_58;
        pcStack_d0 = pcStack_60;
      }
      else {
        FUN_100bdc6e8(&pcStack_c0,&pcStack_100,puVar3[2],puVar3[3]);
        pcStack_c8 = pcStack_b8;
        pcStack_d0 = pcStack_c0;
        pcStack_50 = pcStack_b0;
      }
      *puVar3 = *puVar3 - 1;
      pcStack_b8 = pcStack_c8;
      pcStack_c0 = pcStack_d0;
      pcStack_a8 = pcStack_50;
LAB_101444bd0:
      param_1[2] = pcStack_b8;
      param_1[1] = pcStack_c0;
      param_1[3] = pcStack_a8;
      *param_1 = 2;
      return;
    }
    if ((char)puVar3[4] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar3,&DAT_100c35cd4);
      *(undefined1 *)(puVar3 + 4) = 1;
      goto LAB_101444af0;
    }
    if (pcStack_100 != (char *)0x0) {
      _free(pcStack_f8);
    }
LAB_101444a80:
    func_0x000108a82a50(&UNK_10b234430);
    pcVar5 = extraout_x9;
  }
  else {
    if (bVar1 == 0xe) {
      pcVar6 = *(char **)(param_2 + 0x10);
      pcVar5 = *(char **)(param_2 + 0x18);
      func_0x0001055bf348(&pcStack_60,pcVar6,pcVar5);
      if ((int)pcStack_60 == 1) goto LAB_101444ab0;
      if (pcStack_50 == (char *)0x0) goto LAB_10144499c;
LAB_1014449fc:
      pcVar6 = pcStack_50;
      pcVar5 = pcStack_58;
      pcVar7 = (char *)_malloc(pcStack_50);
      if (pcVar7 != (char *)0x0) goto LAB_101444a0c;
LAB_101444cbc:
      func_0x0001087c9084(1,pcVar6);
LAB_101444cc8:
      func_0x0001087c9084(1,0x30);
LAB_101444cd4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101444cd8);
      (*pcVar2)();
    }
    if (bVar1 != 0xf) goto LAB_101444c98;
    pcVar6 = *(char **)(param_2 + 8);
    pcVar5 = *(char **)(param_2 + 0x10);
    func_0x0001055bf348(&pcStack_60,pcVar6,pcVar5);
    if ((int)pcStack_60 != 1) {
      if (pcStack_50 != (char *)0x0) goto LAB_1014449fc;
LAB_10144499c:
      pcVar7 = (char *)0x1;
      pcVar6 = pcStack_50;
      pcVar5 = pcStack_58;
LAB_101444a0c:
      _memcpy(pcVar7,pcVar5,pcVar6);
      pcStack_c0 = (char *)0x2;
      pcStack_b8 = pcVar6;
      pcStack_b0 = pcVar7;
      pcStack_a8 = pcVar6;
      goto LAB_101444a28;
    }
LAB_101444ab0:
    pcStack_60 = (char *)CONCAT71(pcStack_60._1_7_,6);
    pcStack_58 = pcVar6;
    pcStack_50 = pcVar5;
    FUN_1087e3ee8(&pcStack_c0,&pcStack_60,&pcStack_100,&UNK_10b20a620);
LAB_101444a28:
    pcVar5 = pcStack_c0;
    pcVar6 = pcStack_a8;
    if (pcStack_c0 == (char *)0x2) goto LAB_101444a38;
  }
  pcStack_c0 = pcStack_b8;
  pcStack_58 = (char *)uStack_78;
  pcStack_60 = pcStack_80;
  pcStack_b8 = pcStack_b0;
LAB_101444c3c:
  param_1[2] = pcStack_b8;
  param_1[1] = pcStack_c0;
  param_1[9] = pcStack_58;
  param_1[8] = pcStack_60;
  *param_1 = pcVar5;
  param_1[3] = pcStack_a8;
  param_1[4] = puStack_a0;
  param_1[6] = uStack_90;
  param_1[5] = uStack_98;
  param_1[7] = uStack_88;
  param_1[10] = uStack_70;
  return;
}

