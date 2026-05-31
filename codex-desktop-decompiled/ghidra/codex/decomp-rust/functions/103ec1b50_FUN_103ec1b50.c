
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103ec1b50(ulong *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined8 *puStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined ***pppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined ****ppppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  undefined ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined8 ***pppuStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  if (*param_1 != 2) {
    uVar8 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar8 = uVar8 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar8,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar8 = param_1[4], uVar8 != 0)) {
    ppuStack_108 = *(undefined ***)(uVar8 + 0x10);
    ppppuStack_100 = *(undefined *****)(uVar8 + 0x18);
    pppuStack_d0 = &ppuStack_108;
    puStack_c8 = &DAT_103d8be04;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&pppuStack_d0);
  }
  bVar3 = (byte)param_1[9];
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      func_0x000108a07af4(&UNK_10b2fb020);
LAB_103ec203c:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103ec2040);
      (*pcVar9)();
    }
    uVar8 = param_1[5];
    uVar7 = param_1[6];
    param_1[7] = uVar8;
    param_1[8] = uVar7;
  }
  else {
    if (bVar3 != 3) {
      func_0x000108a07b10(&UNK_10b2fb020,param_2);
      goto LAB_103ec203c;
    }
    uVar8 = param_1[7];
    uVar7 = param_1[8];
  }
  auVar13 = (**(code **)(uVar7 + 0x18))(uVar8);
  puVar10 = auVar13._8_8_;
  if ((auVar13._0_8_ & 1) == 0) {
    uVar8 = param_1[7];
    puVar12 = (undefined8 *)param_1[8];
    pcVar9 = (code *)*puVar12;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar8);
    }
    if (puVar12[1] != 0) {
      _free(uVar8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      puStack_148 = puVar10;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
         (((bRam000000010b639ef0 - 1 < 2 ||
           ((bRam000000010b639ef0 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                               ), cVar5 != '\0')))) &&
          (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                             ), (uVar8 & 1) != 0)))) {
        puStack_f0 = (undefined *)
                     (
                     ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                     + 0x30);
        ppuStack_140 = (undefined **)&UNK_108dc38a7;
        uStack_138 = 0x31;
        ppuStack_60 = &puStack_148;
        pppuStack_d0 = &ppuStack_140;
        puStack_c8 = &UNK_10b2f9280;
        pppuStack_c0 = &ppuStack_60;
        puStack_b8 = &UNK_10b2faf70;
        ppppuStack_100 = &pppuStack_d0;
        ppuStack_108 = (undefined **)0x1;
        pppuStack_f8 = (undefined8 ***)0x2;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                   ,&ppuStack_108);
        lVar4 = 
        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          pppuStack_120 =
               *(undefined ****)
                (
                ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                + 0x20);
          uStack_118 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                        + 0x28);
          uStack_128 = 1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_128);
          if (iVar6 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar4,puVar2,puVar1,&uStack_128,&ppuStack_108);
          }
        }
      }
      else {
        lVar4 = 
        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          uStack_138 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                        + 0x20);
          uStack_130 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                        + 0x28);
          ppuStack_140 = (undefined **)0x1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&ppuStack_140);
          if (iVar6 != 0) {
            lStack_110 = ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                         + 0x30;
            puStack_e8 = &UNK_108dc38a7;
            uStack_e0 = 0x31;
            ppuStack_d8 = &puStack_148;
            ppuStack_108 = &puStack_e8;
            ppppuStack_100 = (undefined ****)&UNK_10b2f9280;
            pppuStack_f8 = &ppuStack_d8;
            puStack_f0 = &UNK_10b2faf70;
            pppuStack_120 = &ppuStack_108;
            uStack_128 = 1;
            uStack_118 = 2;
            lStack_b0 = *(long *)(lVar4 + 0x60);
            uStack_a8 = *(undefined8 *)(lVar4 + 0x68);
            puStack_c8 = *(undefined **)(lVar4 + 0x50);
            pppuStack_c0 = *(undefined8 ****)(lVar4 + 0x58);
            pppuStack_d0 = (undefined ***)0x1;
            if (puStack_c8 == (undefined *)0x0) {
              pppuStack_d0 = (undefined ***)0x2;
            }
            uStack_88 = *(undefined4 *)(lVar4 + 8);
            uStack_84 = *(undefined4 *)(lVar4 + 0xc);
            puStack_70 = &uStack_128;
            uStack_68 = 1;
            ppuStack_60 = &puStack_70;
            puStack_58 = &DAT_1061c2098;
            puStack_b8 = (undefined *)0x1;
            if (lStack_b0 == 0) {
              puStack_b8 = (undefined *)0x2;
            }
            uStack_98 = uStack_138;
            ppuStack_a0 = ppuStack_140;
            uStack_90 = uStack_130;
            pppuStack_78 = &ppuStack_60;
            pcStack_80 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&pppuStack_d0);
          }
        }
      }
      if (((ulong)puStack_148 & 3) == 1) {
        puVar10 = (undefined8 *)((long)puStack_148 - 1);
        uVar11 = *puVar10;
        puVar12 = *(undefined8 **)((long)puStack_148 + 7);
        pcVar9 = (code *)*puVar12;
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(uVar11);
        }
        if (puVar12[1] != 0) {
          _free(uVar11);
        }
        _free(puVar10);
        *(undefined1 *)(param_1 + 9) = 1;
        uVar8 = *param_1;
        goto joined_r0x000103ec1de4;
      }
    }
    *(undefined1 *)(param_1 + 9) = 1;
    uVar8 = *param_1;
  }
  else {
    *(undefined1 *)(param_1 + 9) = 3;
    uVar8 = *param_1;
  }
joined_r0x000103ec1de4:
  if (uVar8 != 2) {
    uVar7 = param_1[1];
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar7 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar7,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar8 = param_1[4], uVar8 != 0)) {
    ppuStack_108 = *(undefined ***)(uVar8 + 0x10);
    ppppuStack_100 = *(undefined *****)(uVar8 + 0x18);
    pppuStack_d0 = &ppuStack_108;
    puStack_c8 = &DAT_103d8be04;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&pppuStack_d0);
  }
  return auVar13._0_4_ & 1;
}

