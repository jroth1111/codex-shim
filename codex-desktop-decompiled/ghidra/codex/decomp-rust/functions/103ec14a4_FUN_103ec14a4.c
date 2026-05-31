
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103ec14a4(ulong *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  short sVar7;
  undefined6 uVar8;
  undefined2 uVar9;
  undefined6 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  short sStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  short *psStack_110;
  undefined8 ***pppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 **ppuStack_e8;
  short sStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined8 ***pppuStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  if (*param_1 != 2) {
    uVar16 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar16 = uVar16 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar16,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar16 = param_1[4], uVar16 != 0)) {
    sStack_190 = (short)*(undefined8 *)(uVar16 + 0x10);
    uStack_18e = (undefined6)((ulong)*(undefined8 *)(uVar16 + 0x10) >> 0x10);
    uStack_188 = (undefined2)*(undefined8 *)(uVar16 + 0x18);
    uStack_186 = (undefined6)((ulong)*(undefined8 *)(uVar16 + 0x18) >> 0x10);
    sStack_e0 = (short)&sStack_190;
    uStack_de = (undefined6)((ulong)&sStack_190 >> 0x10);
    uStack_d8 = 0xbe04;
    uStack_d6 = 0x103d8;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&sStack_e0);
  }
  bVar5 = (byte)param_1[0x2ab];
  if (bVar5 < 2) {
    if (bVar5 != 0) {
      func_0x000108a07af4(&UNK_10b2fb020);
LAB_103ec1974:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x103ec1978);
      (*pcVar12)();
    }
    _memcpy(param_1 + 0x158,param_1 + 5,0xa98);
  }
  else if (bVar5 != 3) {
    func_0x000108a07b10(&UNK_10b2fb020);
    goto LAB_103ec1974;
  }
  func_0x000103d5ad4c(&sStack_e0,param_1 + 0x158,param_2);
  uVar11 = uStack_a8;
  uVar10 = uStack_d6;
  uVar9 = uStack_d8;
  uVar8 = uStack_de;
  sVar7 = sStack_e0;
  if (sStack_e0 == 0x20) {
    *(undefined1 *)(param_1 + 0x2ab) = 3;
    uVar16 = *param_1;
  }
  else {
    func_0x000103da56c8(param_1 + 0x158);
    if (sVar7 != 0x1f) {
      sStack_190 = sVar7;
      uStack_186 = uVar10;
      uStack_18e = uVar8;
      uStack_188 = uVar9;
      uStack_158 = uVar11;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
         (((bRam000000010b639ef0 - 1 < 2 ||
           ((bRam000000010b639ef0 != 0 &&
            (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                                ), cVar13 != '\0')))) &&
          (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                              ), (uVar16 & 1) != 0)))) {
        puStack_100 = (undefined *)
                      (
                      ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                      + 0x30);
        puStack_150 = &UNK_108dc38a7;
        uStack_148 = 0x31;
        ppuStack_70 = (undefined8 **)&sStack_190;
        sStack_e0 = (short)&puStack_150;
        uStack_de = (undefined6)((ulong)&puStack_150 >> 0x10);
        uStack_d8 = 0x9280;
        uStack_d6 = 0x10b2f;
        uStack_d0 = SUB82(&ppuStack_70,0);
        uStack_ce = (undefined6)((ulong)&ppuStack_70 >> 0x10);
        uStack_c8 = 0xaf30;
        uStack_c6 = 0x10b2f;
        psStack_110 = &sStack_e0;
        ppuStack_118 = (undefined **)0x1;
        pppuStack_108 = (undefined8 ***)0x2;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                   ,&ppuStack_118);
        lVar6 = 
        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          pppuStack_130 =
               *(undefined ****)
                (
                ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                + 0x20);
          uStack_128 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                        + 0x28);
          uStack_138 = 1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_138);
          if (iVar14 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar6,puVar2,puVar1,&uStack_138,&ppuStack_118);
          }
        }
      }
      else {
        lVar6 = 
        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          uStack_148 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                        + 0x20);
          uStack_140 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                        + 0x28);
          puStack_150 = (undefined *)0x1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar1 + 0x18))(puVar2,&puStack_150);
          if (iVar14 != 0) {
            lStack_120 = ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6375f05d86a271eeE
                         + 0x30;
            puStack_f8 = &UNK_108dc38a7;
            uStack_f0 = 0x31;
            ppuStack_e8 = (undefined8 **)&sStack_190;
            ppuStack_118 = &puStack_f8;
            psStack_110 = (short *)&UNK_10b2f9280;
            pppuStack_108 = &ppuStack_e8;
            puStack_100 = &UNK_10b2faf30;
            pppuStack_130 = &ppuStack_118;
            uStack_138 = 1;
            uStack_128 = 2;
            lVar3 = *(long *)(lVar6 + 0x60);
            lVar4 = *(long *)(lVar6 + 0x50);
            sStack_e0 = 1;
            if (lVar4 == 0) {
              sStack_e0 = 2;
            }
            uStack_98 = *(undefined4 *)(lVar6 + 8);
            uStack_94 = *(undefined4 *)(lVar6 + 0xc);
            puStack_80 = &uStack_138;
            uStack_78 = 1;
            ppuStack_70 = &puStack_80;
            puStack_68 = &DAT_1061c2098;
            uStack_c8 = 1;
            if (lVar3 == 0) {
              uStack_c8 = 2;
            }
            uStack_a8 = uStack_148;
            uStack_b0 = SUB82(puStack_150,0);
            uStack_ae = (undefined6)((ulong)puStack_150 >> 0x10);
            uStack_a0 = uStack_140;
            pppuStack_88 = &ppuStack_70;
            pcStack_90 = s__108b39f4f;
            uStack_de = 0;
            uStack_d8 = (undefined2)lVar4;
            uStack_d6 = (undefined6)((ulong)lVar4 >> 0x10);
            uStack_d0 = (undefined2)*(undefined8 *)(lVar6 + 0x58);
            uStack_ce = (undefined6)((ulong)*(undefined8 *)(lVar6 + 0x58) >> 0x10);
            uStack_c6 = 0;
            uStack_c0 = (undefined2)lVar3;
            uStack_be = (undefined6)((ulong)lVar3 >> 0x10);
            uStack_b8 = (undefined2)*(undefined8 *)(lVar6 + 0x68);
            uStack_b6 = (undefined6)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 0x10);
            (**(code **)(puVar1 + 0x20))(puVar2,&sStack_e0);
          }
        }
      }
      FUN_103d996fc(&sStack_190);
    }
    *(undefined1 *)(param_1 + 0x2ab) = 1;
    uVar16 = *param_1;
  }
  if (uVar16 != 2) {
    uVar15 = param_1[1];
    if ((uVar16 & 1) != 0) {
      uVar15 = uVar15 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar15,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar16 = param_1[4], uVar16 != 0)) {
    sStack_190 = (short)*(undefined8 *)(uVar16 + 0x10);
    uStack_18e = (undefined6)((ulong)*(undefined8 *)(uVar16 + 0x10) >> 0x10);
    uStack_188 = (undefined2)*(undefined8 *)(uVar16 + 0x18);
    uStack_186 = (undefined6)((ulong)*(undefined8 *)(uVar16 + 0x18) >> 0x10);
    sStack_e0 = (short)&sStack_190;
    uStack_de = (undefined6)((ulong)&sStack_190 >> 0x10);
    uStack_d8 = 0xbe04;
    uStack_d6 = 0x103d8;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&sStack_e0);
  }
  return sVar7 == 0x20;
}

