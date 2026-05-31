
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN16codex_app_server18request_processors16thread_lifecycle26log_listener_attach_result17h2ca3ef2f5c64b959E
               (long *param_1,char *******param_2,char ******param_3,char ***param_4,
               undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *****pppppcVar7;
  char *****pppppcStack_1e0;
  char ***pppcStack_1d8;
  undefined8 uStack_1d0;
  char ***pppcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  char *****pppppcStack_1b0;
  undefined *puStack_1a8;
  char ******ppppppcStack_1a0;
  undefined *puStack_198;
  char ******ppppppcStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *****pppppcStack_130;
  char ***pppcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char **ppcStack_110;
  undefined *puStack_108;
  char *pcStack_100;
  char ****ppppcStack_f8;
  char ****ppppcStack_f0;
  char ******ppppppcStack_e8;
  char ******ppppppcStack_e0;
  undefined *puStack_d8;
  char *****pppppcStack_d0;
  undefined *puStack_c8;
  char ***pppcStack_c0;
  char *****pppppcStack_b8;
  char ******ppppppcStack_b0;
  undefined *puStack_a8;
  char *****pppppcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  char ******ppppppcStack_68;
  char ******ppppppcStack_60;
  undefined *puStack_58;
  char ******ppppppcStack_50;
  char ***pppcStack_48;
  
  pppppcStack_1e0 = (char *****)param_3;
  pppcStack_1d8 = param_4;
  uStack_1d0 = param_5;
  if (*param_1 != -0x8000000000000000) {
    lStack_168 = param_1[9];
    lStack_170 = param_1[8];
    lStack_158 = param_1[0xb];
    lStack_160 = param_1[10];
    lStack_150 = param_1[0xc];
    puStack_1a8 = (undefined *)param_1[1];
    pppppcStack_1b0 = (char *****)*param_1;
    puStack_198 = (undefined *)param_1[3];
    ppppppcStack_1a0 = (char ******)param_1[2];
    puStack_188 = (undefined *)param_1[5];
    ppppppcStack_190 = (char ******)param_1[4];
    lStack_178 = param_1[7];
    lStack_180 = param_1[6];
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b6283b0 - 1 < 2 ||
         ((bRam000000010b6283b0 != 0 &&
          (cVar1 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b6283a0), cVar1 != '\0')))) &&
        (iVar3 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b6283a0), iVar3 != 0)))) {
      pppcStack_c0 = (char ***)&pppcStack_1d8;
      pppppcStack_b8 = (char *****)&DAT_10192d9a4;
      puStack_d8 = (undefined *)(lRam000000010b6283a0 + 0x30);
      puStack_a8 = &
                   __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      pppppcStack_a0 = (char *****)&pppppcStack_1b0;
      puStack_98 = &DAT_1019a7324;
      pppcStack_48 = (char ***)&pppcStack_c0;
      ppppppcStack_50 = (char ******)s_failed_to_attach_listener_for___108add6cd;
      ppppppcStack_60 = (char ******)&ppppppcStack_50;
      puStack_58 = &UNK_10b25d1e8;
      ppppppcStack_e8 = (char ******)&ppppppcStack_60;
      ppppcStack_f0 = (char ****)0x1;
      ppppppcStack_e0 = (char ******)0x1;
      ppppppcStack_b0 = (char ******)param_2;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b6283a0,&ppppcStack_f0);
      lVar4 = lRam000000010b6283a0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_128 = *(char ****)(lRam000000010b6283a0 + 0x20);
        uStack_120 = *(undefined8 *)(lRam000000010b6283a0 + 0x28);
        pppppcStack_130 = (char *****)0x2;
        puVar6 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar3 = (**(code **)(puVar6 + 0x18))(puVar5,&pppppcStack_130);
        if (iVar3 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar5,puVar6,&pppppcStack_130,&ppppcStack_f0);
        }
      }
    }
    else {
      lVar4 = lRam000000010b6283a0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_140 = *(undefined8 *)(lRam000000010b6283a0 + 0x20);
        uStack_138 = *(undefined8 *)(lRam000000010b6283a0 + 0x28);
        uStack_148 = 2;
        puVar6 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar3 = (**(code **)(puVar6 + 0x18))(puVar5,&uStack_148);
        if (iVar3 != 0) {
          lStack_118 = lRam000000010b6283a0 + 0x30;
          ppppcStack_f0 = &pppcStack_1d8;
          ppppppcStack_e8 = (char ******)&DAT_10192d9a4;
          puStack_d8 = &
                       __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          pppppcStack_d0 = (char *****)&pppppcStack_1b0;
          puStack_c8 = &DAT_1019a7324;
          ppppcStack_f8 = (char ****)&ppppcStack_f0;
          pcStack_100 = s_failed_to_attach_listener_for___108add6cd;
          ppcStack_110 = &pcStack_100;
          puStack_108 = &UNK_10b25d1e8;
          pppcStack_128 = &ppcStack_110;
          pppppcStack_130 = (char *****)0x1;
          uStack_120 = 1;
          pppppcStack_a0 = *(char ******)(lVar4 + 0x60);
          puStack_98 = *(undefined **)(lVar4 + 0x68);
          pppppcStack_b8 = *(char ******)(lVar4 + 0x50);
          ppppppcStack_b0 = *(char *******)(lVar4 + 0x58);
          pppcStack_c0 = (char ***)0x1;
          if (pppppcStack_b8 == (char *****)0x0) {
            pppcStack_c0 = (char ***)0x2;
          }
          uStack_78 = *(undefined4 *)(lVar4 + 8);
          uStack_74 = *(undefined4 *)(lVar4 + 0xc);
          ppppppcStack_60 = &pppppcStack_130;
          puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
          ppppppcStack_50 = (char ******)&ppppppcStack_60;
          pppcStack_48 = (char ***)&DAT_1061c2098;
          puStack_a8 = (undefined *)0x1;
          if ((char ******)pppppcStack_a0 == (char ******)0x0) {
            puStack_a8 = (undefined *)0x2;
          }
          uStack_88 = uStack_140;
          uStack_90 = uStack_148;
          uStack_80 = uStack_138;
          ppppppcStack_68 = (char ******)&ppppppcStack_50;
          pcStack_70 = s__108b39f4f;
          ppppppcStack_e0 = (char ******)param_2;
          (**(code **)(puVar6 + 0x20))(puVar5,&pppcStack_c0);
        }
      }
    }
    if (puStack_198 != (undefined *)0x8000000000000005) {
      func_0x00010194dc28(&puStack_198);
    }
    if (pppppcStack_1b0 == (char *****)0x0) {
      return;
    }
    _free(puStack_1a8);
    return;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
      ((bVar2 = bRam000000010b6283c8, bRam000000010b6283c8 - 1 < 2 ||
       ((bRam000000010b6283c8 != 0 &&
        (bVar2 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b6283b8), bVar2 != 0)))))) &&
     (iVar3 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (lRam000000010b6283b8,bVar2), iVar3 != 0)) {
    puStack_a8 = (undefined *)(lRam000000010b6283b8 + 0x30);
    pppppcStack_130 = (char *****)&UNK_108cee186;
    pppcStack_128 = (char ***)0x55;
    pppppcStack_1b0 = (char *****)&pppppcStack_130;
    puStack_1a8 = &UNK_10b25d1e8;
    ppppppcStack_1a0 = (char ******)&ppppppcStack_60;
    puStack_198 = &UNK_10b25e3d8;
    ppppppcStack_190 = (char ******)&ppppppcStack_50;
    puStack_188 = &UNK_10b263858;
    pppppcStack_b8 = (char *****)&pppppcStack_1b0;
    pppcStack_c0 = (char ***)0x1;
    ppppppcStack_b0 = (char ******)0x3;
    ppppppcStack_60 = (char ******)param_2;
    ppppppcStack_50 = &pppppcStack_1e0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b6283b8,&pppcStack_c0);
    lVar4 = lRam000000010b6283b8;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 4) {
      return;
    }
    ppppppcStack_e8 = *(char *******)(lRam000000010b6283b8 + 0x20);
    ppppppcStack_e0 = *(char *******)(lRam000000010b6283b8 + 0x28);
    ppppcStack_f0 = (char ****)0x4;
    puVar6 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar6 + 0x18))(puVar5,&ppppcStack_f0);
    if (iVar3 == 0) {
      return;
    }
    pppppcVar7 = &ppppcStack_f0;
  }
  else {
    lVar4 = lRam000000010b6283b8;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 4) {
      return;
    }
    uStack_1c0 = *(undefined8 *)(lRam000000010b6283b8 + 0x20);
    uStack_1b8 = *(undefined8 *)(lRam000000010b6283b8 + 0x28);
    pppcStack_1c8 = (char ***)0x4;
    puVar6 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar6 + 0x18))(puVar5,&pppcStack_1c8);
    if (iVar3 == 0) {
      return;
    }
    puStack_a8 = (undefined *)(lRam000000010b6283b8 + 0x30);
    ppppcStack_f0 = (char ****)&UNK_108cee186;
    ppppppcStack_e8 = (char ******)0x55;
    pppppcStack_1b0 = &ppppcStack_f0;
    puStack_1a8 = &UNK_10b25d1e8;
    ppppppcStack_1a0 = (char ******)&ppppppcStack_50;
    puStack_198 = &UNK_10b25e3d8;
    ppppppcStack_190 = &pppppcStack_130;
    puStack_188 = &UNK_10b263858;
    pppppcStack_b8 = (char *****)&pppppcStack_1b0;
    pppcStack_c0 = (char ***)0x1;
    ppppppcStack_b0 = (char ******)0x3;
    pppppcVar7 = (char *****)&pppcStack_1c8;
    pppppcStack_130 = (char *****)&pppppcStack_1e0;
    ppppppcStack_50 = (char ******)param_2;
  }
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
            (lVar4,puVar5,puVar6,pppppcVar7,&pppcStack_c0);
  return;
}

