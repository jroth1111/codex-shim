
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core2h25proto7streams4recv4Recv10recv_reset17h0ffe145d4461eafbE
               (undefined2 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  char *******pppppppcVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  char *******pppppppcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  char ******ppppppcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  byte bStack_171;
  byte *pbStack_170;
  char *******pppppppcStack_168;
  char *******pppppppcStack_160;
  undefined8 uStack_158;
  char *******pppppppcStack_150;
  char *******pppppppcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  char **ppcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *******pppppppcStack_118;
  char *******pppppppcStack_110;
  char *******pppppppcStack_108;
  byte **ppbStack_100;
  undefined *puStack_f8;
  byte *pbStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  char *******pppppppcStack_d8;
  byte **ppbStack_d0;
  undefined *puStack_c8;
  byte *pbStack_c0;
  undefined *puStack_b8;
  char ******ppppppcStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  char *******pppppppcStack_88;
  char *******pppppppcStack_80;
  undefined1 uStack_78;
  char *******pppppppcStack_70;
  undefined *puStack_68;
  
  if ((*(byte *)(param_5 + 0x14e) & 1) == 0) {
LAB_105a8505c:
    bStack_171 = *(byte *)(param_5 + 0x149);
    pbVar9 = (byte *)(param_5 + 0x68);
    uStack_180 = param_3;
    uStack_17c = param_4;
    if ((6 < *pbVar9) || ((bStack_171 & 1) != 0)) {
      pbStack_170 = pbVar9;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bVar3 = bRam000000010b6385f8, bRam000000010b6385f8 - 1 < 2 ||
           ((bRam000000010b6385f8 != 0 &&
            (bVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b6385e8), bVar3 != 0)))))) &&
         (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b6385e8,bVar3), iVar4 != 0)) {
        puStack_f8 = (undefined *)(lRam000000010b6385e8 + 0x30);
        puStack_e0 = (undefined8 *)&uStack_180;
        pppppppcStack_d8 = (char *******)&DAT_105ab9608;
        ppbStack_d0 = &pbStack_170;
        puStack_c8 = &DAT_105aa9e60;
        pbStack_c0 = &bStack_171;
        puStack_b8 = &DAT_105aa81c8;
        pppppppcStack_160 = (char *******)&puStack_e0;
        pppppppcStack_168 = (char *******)s_recv_reset__frame____state____qu_108b17056;
        pppppppcStack_70 = (char *******)&pppppppcStack_168;
        puStack_68 = &UNK_10b3f92b0;
        pppppppcStack_108 = (char *******)&pppppppcStack_70;
        pppppppcStack_110 = (char *******)0x1;
        ppbStack_100 = (byte **)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b6385e8,&pppppppcStack_110);
        lVar6 = lRam000000010b6385e8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_148 = *(char ********)(lRam000000010b6385e8 + 0x20);
          uStack_140 = *(undefined8 *)(lRam000000010b6385e8 + 0x28);
          pppppppcStack_150 = (char *******)0x5;
          puVar7 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_10b3c24c8;
          }
          puVar8 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar8 = &UNK_109adfc03;
          }
          iVar4 = (**(code **)(puVar7 + 0x18))(puVar8,&pppppppcStack_150);
          if (iVar4 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar6,puVar8,puVar7,&pppppppcStack_150,&pppppppcStack_110);
          }
        }
      }
      else {
        lVar6 = lRam000000010b6385e8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_160 = *(char ********)(lRam000000010b6385e8 + 0x20);
          uStack_158 = *(undefined8 *)(lRam000000010b6385e8 + 0x28);
          pppppppcStack_168 = (char *******)0x5;
          puVar7 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_10b3c24c8;
          }
          puVar8 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar8 = &UNK_109adfc03;
          }
          iVar4 = (**(code **)(puVar7 + 0x18))(puVar8,&pppppppcStack_168);
          if (iVar4 != 0) {
            lStack_138 = lRam000000010b6385e8 + 0x30;
            pppppppcStack_110 = (char *******)&uStack_180;
            pppppppcStack_108 = (char *******)&DAT_105ab9608;
            ppbStack_100 = &pbStack_170;
            puStack_f8 = &DAT_105aa9e60;
            pbStack_f0 = &bStack_171;
            puStack_e8 = &DAT_105aa81c8;
            pppppppcStack_118 = (char *******)&pppppppcStack_110;
            pcStack_120 = s_recv_reset__frame____state____qu_108b17056;
            ppcStack_130 = &pcStack_120;
            puStack_128 = &UNK_10b3f92b0;
            pppppppcStack_148 = (char *******)&ppcStack_130;
            pppppppcStack_150 = (char *******)0x1;
            uStack_140 = 1;
            pbStack_c0 = *(byte **)(lVar6 + 0x60);
            puStack_b8 = *(undefined **)(lVar6 + 0x68);
            pppppppcStack_d8 = *(char ********)(lVar6 + 0x50);
            ppbStack_d0 = *(byte ***)(lVar6 + 0x58);
            puStack_e0 = (undefined8 *)0x1;
            if (pppppppcStack_d8 == (char *******)0x0) {
              puStack_e0 = (undefined8 *)0x2;
            }
            uStack_98 = *(undefined4 *)(lVar6 + 8);
            uStack_94 = *(undefined4 *)(lVar6 + 0xc);
            pppppppcStack_80 = (char *******)&pppppppcStack_150;
            uStack_78 = 1;
            pppppppcStack_70 = (char *******)&pppppppcStack_80;
            puStack_68 = &DAT_1061c2098;
            puStack_c8 = (undefined *)0x1;
            if (pbStack_c0 == (byte *)0x0) {
              puStack_c8 = (undefined *)0x2;
            }
            ppuStack_a8 = pppppppcStack_160;
            ppppppcStack_b0 = (char ******)pppppppcStack_168;
            uStack_a0 = uStack_158;
            pppppppcStack_88 = (char *******)&pppppppcStack_70;
            pcStack_90 = s__108b39f4f;
            (**(code **)(puVar7 + 0x20))(puVar8,&puStack_e0);
          }
        }
      }
      uVar2 = CONCAT44(uStack_17c,uStack_180);
      bVar3 = *pbVar9;
      if (5 < bVar3 - 7 && bVar3 < 4) {
        if (bVar3 == 2) {
          if ((*(ulong *)(param_5 + 0x70) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)(param_5 + 0x78));
          }
        }
        else if (bVar3 == 1) {
          (**(code **)(*(long *)(param_5 + 0x70) + 0x20))
                    (param_5 + 0x88,*(undefined8 *)(param_5 + 0x78),*(undefined8 *)(param_5 + 0x80))
          ;
        }
      }
      *(undefined2 *)(param_5 + 0x68) = 0x200;
      *(undefined8 *)(param_5 + 0x6c) = uVar2;
    }
    lVar6 = *(long *)(param_5 + 0xa8);
    *(undefined8 *)(param_5 + 0xa8) = 0;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 8))(*(undefined8 *)(param_5 + 0xb0));
    }
    lVar6 = *(long *)(param_5 + 0xc0);
    *(undefined8 *)(param_5 + 0xc0) = 0;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 8))(*(undefined8 *)(param_5 + 200));
    }
    lVar6 = *(long *)(param_5 + 0xd0);
    *(undefined8 *)(param_5 + 0xd0) = 0;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 8))(*(undefined8 *)(param_5 + 0xd8));
    }
    *(undefined1 *)param_1 = 4;
    return;
  }
  pppppppcVar1 = *(char ********)(param_6 + 0x40);
  if (*(char ********)(param_6 + 0x48) < pppppppcVar1) {
    *(ulong *)(param_6 + 0x48) = (long)*(char ********)(param_6 + 0x48) + 1;
    goto LAB_105a8505c;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
     (((bVar3 = bRam000000010b638298, bRam000000010b638298 - 1 < 2 ||
       ((bRam000000010b638298 != 0 &&
        (bVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b638288), bVar3 != 0)))) &&
      (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (lRam000000010b638288,bVar3), iVar4 != 0)))) {
    puStack_c8 = (undefined *)(lRam000000010b638288 + 0x30);
    pppppppcStack_150 = (char *******)&pppppppcStack_80;
    pppppppcStack_148 = (char *******)&DAT_105aabfcc;
    pppppppcStack_160 = (char *******)&pppppppcStack_150;
    pppppppcStack_168 = (char *******)s_Arecv_reset__remotely_reset_pend_108b165e7;
    pppppppcStack_70 = (char *******)&pppppppcStack_168;
    puStack_68 = &UNK_10b3f92b0;
    pppppppcStack_d8 = (char *******)&pppppppcStack_70;
    puStack_e0 = (undefined8 *)0x1;
    ppbStack_d0 = (byte **)0x1;
    pppppppcStack_80 = pppppppcVar1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638288,&puStack_e0);
    lVar6 = lRam000000010b638288;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 2)) goto LAB_105a855e8;
    pppppppcStack_108 = *(char ********)(lRam000000010b638288 + 0x20);
    ppbStack_100 = *(byte ***)(lRam000000010b638288 + 0x28);
    pppppppcStack_110 = (char *******)0x2;
    puVar7 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar7 = &UNK_10b3c24c8;
    }
    puVar8 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar8 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar7 + 0x18))(puVar8,&pppppppcStack_110);
    if (iVar4 == 0) goto LAB_105a855e8;
    pppppppcVar5 = (char *******)&pppppppcStack_110;
  }
  else {
    lVar6 = lRam000000010b638288;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 2)) goto LAB_105a855e8;
    uStack_190 = *(undefined8 *)(lRam000000010b638288 + 0x20);
    uStack_188 = *(undefined8 *)(lRam000000010b638288 + 0x28);
    ppppppcStack_198 = (char ******)0x2;
    puVar7 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar7 = &UNK_10b3c24c8;
    }
    puVar8 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar8 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar7 + 0x18))(puVar8,&ppppppcStack_198);
    if (iVar4 == 0) goto LAB_105a855e8;
    puStack_c8 = (undefined *)(lRam000000010b638288 + 0x30);
    pppppppcStack_110 = (char *******)&pppppppcStack_70;
    pppppppcStack_108 = (char *******)&DAT_105aabfcc;
    pppppppcStack_148 = (char *******)&pppppppcStack_110;
    pppppppcStack_150 = (char *******)s_Arecv_reset__remotely_reset_pend_108b165e7;
    pppppppcStack_168 = (char *******)&pppppppcStack_150;
    pppppppcStack_160 = (char *******)&UNK_10b3f92b0;
    pppppppcStack_d8 = (char *******)&pppppppcStack_168;
    puStack_e0 = (undefined8 *)0x1;
    ppbStack_d0 = (byte **)0x1;
    pppppppcVar5 = &ppppppcStack_198;
    pppppppcStack_70 = pppppppcVar1;
  }
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
            (lVar6,puVar8,puVar7,pppppppcVar5,&puStack_e0);
LAB_105a855e8:
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 0xb;
  *(undefined **)(param_1 + 4) = &UNK_10b3fb1a0;
  *(undefined **)(param_1 + 8) = &UNK_109b0b469;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xf;
  return;
}

