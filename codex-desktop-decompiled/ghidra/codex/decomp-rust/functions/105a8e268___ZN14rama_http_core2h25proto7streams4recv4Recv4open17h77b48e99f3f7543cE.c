
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core2h25proto7streams4recv4Recv4open17h77b48e99f3f7543cE
               (undefined2 *param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  char *****pppppcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_154;
  char ****ppppcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  char ***pppcStack_138;
  uint **ppuStack_130;
  undefined8 uStack_128;
  char *****pppppcStack_120;
  char ****ppppcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  char **ppcStack_100;
  undefined *puStack_f8;
  char *pcStack_f0;
  char *******pppppppcStack_e8;
  char *******pppppppcStack_e0;
  undefined *puStack_d8;
  uint *puStack_d0;
  char *******pppppppcStack_c8;
  char *******pppppppcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  char ***pppcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  char *******pppppppcStack_78;
  char *******pppppppcStack_70;
  char *******pppppppcStack_68;
  char *******pppppppcStack_60;
  char *****pppppcStack_58;
  
  uStack_174 = param_3;
  uStack_154 = param_3;
  if ((*(byte *)(param_5 + 0x58) & 1) == 0) {
    if ((((param_4 & 1) == 0) && (param_3 != 0)) && ((param_3 & 1) == 0)) goto LAB_105a8e478;
    if ((1 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) ||
       (((bVar1 = bRam000000010b638160, 1 < bRam000000010b638160 - 1 &&
         ((bRam000000010b638160 == 0 ||
          (bVar1 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b638150), bVar1 == 0)))) ||
        (iVar2 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b638150,bVar1), iVar2 == 0)))) {
      lVar4 = lRam000000010b638150;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        ppuStack_130 = *(uint ***)(lRam000000010b638150 + 0x20);
        uStack_128 = *(undefined8 *)(lRam000000010b638150 + 0x28);
        pppcStack_138 = (char ***)0x4;
        puVar5 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        iVar2 = (**(code **)(puVar5 + 0x18))(puVar6,&pppcStack_138);
        if (iVar2 != 0) {
          lStack_108 = lRam000000010b638150 + 0x30;
          pppppppcStack_e0 = (char *******)&uStack_154;
          puStack_d8 = &DAT_105abf048;
          pppppppcStack_e8 = (char *******)&pppppppcStack_e0;
          pcStack_f0 = s_6connection_error_PROTOCOL_ERROR_108b162cd;
          ppcStack_100 = &pcStack_f0;
          puStack_f8 = &UNK_10b3f92b0;
          ppppcStack_118 = (char ****)&ppcStack_100;
          pppppcStack_120 = (char *****)0x1;
          uStack_110 = 1;
          lStack_b0 = *(long *)(lVar4 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar4 + 0x68);
          pppppppcStack_c8 = *(char ********)(lVar4 + 0x50);
          pppppppcStack_c0 = *(char ********)(lVar4 + 0x58);
          puStack_d0 = (uint *)0x1;
          if (pppppppcStack_c8 == (char *******)0x0) {
            puStack_d0 = (uint *)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar4 + 8);
          uStack_84 = *(undefined4 *)(lVar4 + 0xc);
          pppppppcStack_70 = (char *******)&pppppcStack_120;
          pppppppcStack_68 = (char *******)CONCAT71(pppppppcStack_68._1_7_,1);
          pppppppcStack_60 = (char *******)&pppppppcStack_70;
          pppppcStack_58 = (char *****)&DAT_1061c2098;
          puStack_b8 = (undefined *)0x1;
          if (lStack_b0 == 0) {
            puStack_b8 = (undefined *)0x2;
          }
          uStack_98 = ppuStack_130;
          pppcStack_a0 = pppcStack_138;
          uStack_90 = uStack_128;
          pppppppcStack_78 = (char *******)&pppppppcStack_60;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar5 + 0x20))(puVar6,&puStack_d0);
        }
      }
      goto LAB_105a8e7a0;
    }
    puStack_b8 = (undefined *)(lRam000000010b638150 + 0x30);
    pppppppcStack_60 = (char *******)&uStack_154;
    pppppcStack_58 = (char *****)&DAT_105abf048;
    pppppppcStack_68 = (char *******)&pppppppcStack_60;
    pppppppcStack_70 = (char *******)s_6connection_error_PROTOCOL_ERROR_108b162cd;
    pppppppcStack_e0 = (char *******)&pppppppcStack_70;
    puStack_d8 = &UNK_10b3f92b0;
    pppppppcStack_c8 = (char *******)&pppppppcStack_e0;
    puStack_d0 = (uint *)0x1;
    pppppppcStack_c0 = (char *******)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638150,&puStack_d0);
    lVar4 = lRam000000010b638150;
joined_r0x000105a8e3f0:
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 4)) goto LAB_105a8e7a0;
    ppppcStack_118 = *(char *****)(lVar4 + 0x20);
    uStack_110 = *(undefined8 *)(lVar4 + 0x28);
    pppppcStack_120 = (char *****)0x4;
    puVar5 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_10b3c24c8;
    }
    puVar6 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_109adfc03;
    }
    iVar2 = (**(code **)(puVar5 + 0x18))(puVar6,&pppppcStack_120);
    if (iVar2 == 0) goto LAB_105a8e7a0;
    pppppcVar3 = (char *****)&pppppcStack_120;
  }
  else {
    if ((param_4 != 0) && ((param_3 & 1) != 0)) {
LAB_105a8e478:
      if (*(int *)(param_2 + 0x28) != 1) {
        pppppppcStack_60 = (char *******)CONCAT44(pppppppcStack_60._4_4_,*(uint *)(param_2 + 0x2c));
        if (*(uint *)(param_2 + 0x2c) <= param_3) {
          *(uint *)(param_2 + 0x28) = param_3 + 2 >> 0x1f;
          *(uint *)(param_2 + 0x2c) = param_3 + 2;
          if (*(ulong *)(param_5 + 0x28) < *(ulong *)(param_5 + 0x20)) {
            *(undefined4 *)(param_1 + 2) = 1;
            *(uint *)(param_1 + 4) = param_3;
          }
          else {
            *(undefined4 *)(param_2 + 0x30) = 1;
            *(uint *)(param_2 + 0x34) = param_3;
            *(undefined4 *)(param_1 + 2) = 0;
          }
          *(undefined1 *)param_1 = 4;
          return;
        }
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
            ((bVar1 = bRam000000010b638490, bRam000000010b638490 - 1 < 2 ||
             ((bRam000000010b638490 != 0 &&
              (bVar1 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (0x10b638480), bVar1 != 0)))))) &&
           (iVar2 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b638480,bVar1), iVar2 != 0)) {
          lStack_108 = lRam000000010b638480 + 0x30;
          puStack_d0 = &uStack_174;
          pppppppcStack_c8 = (char *******)&DAT_105abf048;
          pppppppcStack_c0 = (char *******)&pppppppcStack_60;
          puStack_b8 = &DAT_105abf048;
          ppuStack_130 = &puStack_d0;
          pppcStack_138 = (char ***)s__connection_error_PROTOCOL_ERROR_108b16d1c;
          ppppcStack_150 = &pppcStack_138;
          puStack_148 = &UNK_10b3f92b0;
          ppppcStack_118 = (char ****)&ppppcStack_150;
          pppppcStack_120 = (char *****)0x1;
          uStack_110 = 1;
          func_0x000105a8e93c(&pppppcStack_120);
        }
        else {
          lVar4 = lRam000000010b638480;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_168 = *(undefined8 *)(lRam000000010b638480 + 0x20);
            uStack_160 = *(undefined8 *)(lRam000000010b638480 + 0x28);
            uStack_170 = 4;
            puVar5 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_10b3c24c8;
            }
            puVar6 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar6 = &UNK_109adfc03;
            }
            iVar2 = (**(code **)(puVar5 + 0x18))(puVar6,&uStack_170);
            if (iVar2 != 0) {
              lStack_108 = lRam000000010b638480 + 0x30;
              puStack_d0 = &uStack_174;
              pppppppcStack_c8 = (char *******)&DAT_105abf048;
              pppppppcStack_c0 = (char *******)&pppppppcStack_60;
              puStack_b8 = &DAT_105abf048;
              ppuStack_130 = &puStack_d0;
              pppcStack_138 = (char ***)s__connection_error_PROTOCOL_ERROR_108b16d1c;
              ppppcStack_150 = &pppcStack_138;
              puStack_148 = &UNK_10b3f92b0;
              ppppcStack_118 = (char ****)&ppppcStack_150;
              pppppcStack_120 = (char *****)0x1;
              uStack_110 = 1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar4,puVar6,puVar5,&uStack_170,&pppppcStack_120);
            }
          }
        }
      }
      *param_1 = 0x101;
      *(undefined4 *)(param_1 + 2) = 1;
      *(undefined **)(param_1 + 4) = &UNK_10b3fb1a0;
      *(undefined8 *)(param_1 + 8) = 1;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      return;
    }
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bVar1 = bRam000000010b638178, bRam000000010b638178 - 1 < 2 ||
         ((bRam000000010b638178 != 0 &&
          (bVar1 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b638168), bVar1 != 0)))))) &&
       (iVar2 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b638168,bVar1), iVar2 != 0)) {
      puStack_b8 = (undefined *)(lRam000000010b638168 + 0x30);
      pppppppcStack_60 = (char *******)&uStack_154;
      pppppcStack_58 = (char *****)&DAT_105abf048;
      pppppppcStack_68 = (char *******)&pppppppcStack_60;
      pppppppcStack_70 = (char *******)s_6connection_error_PROTOCOL_ERROR_108b1631f;
      pppppppcStack_e0 = (char *******)&pppppppcStack_70;
      puStack_d8 = &UNK_10b3f92b0;
      pppppppcStack_c8 = (char *******)&pppppppcStack_e0;
      puStack_d0 = (uint *)0x1;
      pppppppcStack_c0 = (char *******)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638168,&puStack_d0);
      lVar4 = lRam000000010b638168;
      goto joined_r0x000105a8e3f0;
    }
    lVar4 = lRam000000010b638168;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 4)) goto LAB_105a8e7a0;
    puStack_148 = *(undefined **)(lRam000000010b638168 + 0x20);
    uStack_140 = *(undefined8 *)(lRam000000010b638168 + 0x28);
    ppppcStack_150 = (char ****)0x4;
    puVar5 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_10b3c24c8;
    }
    puVar6 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_109adfc03;
    }
    iVar2 = (**(code **)(puVar5 + 0x18))(puVar6,&ppppcStack_150);
    if (iVar2 == 0) goto LAB_105a8e7a0;
    puStack_b8 = (undefined *)(lRam000000010b638168 + 0x30);
    pppppcStack_120 = (char *****)&uStack_154;
    ppppcStack_118 = (char ****)&DAT_105abf048;
    pppppcStack_58 = (char *****)&pppppcStack_120;
    pppppppcStack_60 = (char *******)s_6connection_error_PROTOCOL_ERROR_108b1631f;
    pppppppcStack_70 = (char *******)&pppppppcStack_60;
    pppppppcStack_68 = (char *******)&UNK_10b3f92b0;
    pppppppcStack_c8 = (char *******)&pppppppcStack_70;
    puStack_d0 = (uint *)0x1;
    pppppppcStack_c0 = (char *******)0x1;
    pppppcVar3 = &ppppcStack_150;
  }
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
            (lVar4,puVar6,puVar5,pppppcVar3,&puStack_d0);
LAB_105a8e7a0:
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined **)(param_1 + 4) = &UNK_10b3fb1a0;
  *(undefined8 *)(param_1 + 8) = 1;
  return;
}

