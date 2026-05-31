
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081c074(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char *****pppppcStack_120;
  undefined ***pppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  char *pcStack_90;
  char ******ppppppcStack_88;
  char ******ppppppcStack_80;
  undefined *puStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  
  if (*(long *)(param_1 + 0x20) == 3) {
    uVar10 = *(ulong *)(param_1 + 0xa0);
    lVar9 = uVar10 + 0x7ffffffffffffffd;
    if (uVar10 < 0x8000000000000003) {
      lVar9 = 1;
    }
    if (lVar9 == 2) {
      if (*(char *)(param_1 + 0x116) == '\x01') {
        if (((*(byte *)(param_1 + 0xd0) != 0xb) && (9 < *(byte *)(param_1 + 0xd0))) &&
           (*(long *)(param_1 + 0xe0) != 0)) {
          _free(*(undefined8 *)(param_1 + 0xd8));
        }
        *(undefined1 *)(param_1 + 0xd0) = 0xb;
        *(undefined1 *)(param_1 + 0x116) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        if (uVar10 < 0x8000000000000003) {
          if (uVar10 < 0x8000000000000001) {
            uVar10 = 0;
          }
          if ((uVar10 & 0x7fffffffffffffff) == 0) {
            FUN_100cabc88(param_1 + 0xa0);
          }
        }
        *(undefined8 *)(param_1 + 0xa0) = 0x8000000000000003;
        if (*(int *)(param_1 + 200) != 1000000000) {
          *(undefined1 *)(param_1 + 0x114) = 1;
        }
      }
      else {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bVar5 = bRam000000010b637680, bRam000000010b637680 - 1 < 2 ||
             ((bRam000000010b637680 != 0 &&
              (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE
                                 ), bVar5 != 0)))) &&
            (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (___ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE
                                ,bVar5), iVar6 != 0)))) {
          ppppppcStack_88 =
               (char ******)
               (
               ___ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE
               + 0x30);
          puStack_68 = &stack0xffffffffffffffa0;
          ppppppuStack_70 = (undefined8 ******)s_try_keep_alive______could_keep_a_108ac8c8f;
          ppppppcStack_80 = (char ******)&ppppppuStack_70;
          puStack_78 = &UNK_10b208fd0;
          ppppppuStack_98 = &ppppppcStack_80;
          uStack_a0 = 1;
          pcStack_90 = (char *)0x1;
          FUN_10081c6e8(&uStack_a0);
        }
        else {
          lVar9 = 
          ___ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_b0 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE
                         + 0x20);
            uStack_a8 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE
                         + 0x28);
            uStack_b8 = 5;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_b8);
            if (iVar6 != 0) {
              ppppppcStack_88 =
                   (char ******)
                   (
                   ___ZN14rama_http_core5proto2h14conn5State14try_keep_alive10__CALLSITE17h8c1c4c472ed2446dE
                   + 0x30);
              puStack_68 = &stack0xffffffffffffffa0;
              ppppppuStack_70 = (undefined8 ******)s_try_keep_alive______could_keep_a_108ac8c8f;
              ppppppcStack_80 = (char ******)&ppppppuStack_70;
              puStack_78 = &UNK_10b208fd0;
              ppppppuStack_98 = &ppppppcStack_80;
              uStack_a0 = 1;
              pcStack_90 = (char *)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar9,puVar2,puVar1,&uStack_b8,&uStack_a0);
            }
          }
        }
        __ZN14rama_http_core5proto2h14conn5State5close17h37e265bec3f1ce41E(param_1);
      }
      return;
    }
    if (lVar9 != 3) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) != 4) {
      return;
    }
    if (*(long *)(param_1 + 0xa0) != -0x7ffffffffffffffb) {
      return;
    }
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar5 = bRam000000010b637698, bRam000000010b637698 - 1 < 2 ||
       ((bRam000000010b637698 != 0 &&
        (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b637688), bVar5 != 0)))))) &&
     (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (lRam000000010b637688,bVar5), iVar6 != 0)) {
    lStack_c8 = lRam000000010b637688 + 0x30;
    ppppppuStack_70 = (undefined8 ******)&UNK_109b11fae;
    puStack_68 = (undefined *)0x1d;
    ppppppcStack_80 = (char ******)&ppppppuStack_70;
    puStack_78 = &UNK_10b3f92b0;
    ppppppuStack_d8 = &ppppppcStack_80;
    uStack_e0 = 1;
    uStack_d0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b637688,&uStack_e0);
    lVar9 = lRam000000010b637688;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppuStack_118 = *(undefined ****)(lRam000000010b637688 + 0x20);
      uStack_110 = *(undefined8 *)(lRam000000010b637688 + 0x28);
      pppppcStack_120 = (char *****)0x5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppcStack_120);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar9,puVar2,puVar1,&pppppcStack_120,&uStack_e0);
      }
    }
  }
  else {
    lVar9 = lRam000000010b637688;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_130 = *(undefined8 *)(lRam000000010b637688 + 0x20);
      uStack_128 = *(undefined8 *)(lRam000000010b637688 + 0x28);
      uStack_138 = 5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_138);
      if (iVar6 != 0) {
        lStack_108 = lRam000000010b637688 + 0x30;
        puStack_f0 = &UNK_109b11fae;
        uStack_e8 = 0x1d;
        ppuStack_100 = &puStack_f0;
        puStack_f8 = &UNK_10b3f92b0;
        pppuStack_118 = &ppuStack_100;
        pppppcStack_120 = (char *****)0x1;
        uStack_110 = 1;
        lStack_c0 = *(long *)(lVar9 + 0x60);
        uStack_b8 = *(undefined8 *)(lVar9 + 0x68);
        ppppppuStack_d8 = *(undefined8 *******)(lVar9 + 0x50);
        uStack_d0 = *(undefined8 *)(lVar9 + 0x58);
        uStack_e0 = 1;
        if ((char *******)ppppppuStack_d8 == (char *******)0x0) {
          uStack_e0 = 2;
        }
        ppppppuStack_98 = *(undefined8 *******)(lVar9 + 8);
        ppppppcStack_80 = &pppppcStack_120;
        puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
        ppppppuStack_70 = &ppppppcStack_80;
        puStack_68 = &DAT_1061c2098;
        lStack_c8 = 1;
        if (lStack_c0 == 0) {
          lStack_c8 = 2;
        }
        uStack_a8 = uStack_130;
        uStack_b0 = uStack_138;
        uStack_a0 = uStack_128;
        ppppppcStack_88 = (char ******)&ppppppuStack_70;
        pcStack_90 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_e0);
      }
    }
  }
  if (*(long *)(param_1 + 0x20) == 1) {
    lVar9 = *(long *)(param_1 + 0x58);
    if (1 < *(ulong *)(param_1 + 0x28) || lVar9 == 0) goto LAB_105a9ebac;
  }
  else if (((*(long *)(param_1 + 0x20) != 2) || (1 < *(ulong *)(param_1 + 0x28))) ||
          (lVar9 = *(long *)(param_1 + 0x58), lVar9 == 0)) goto LAB_105a9ebac;
  plVar7 = *(long **)(param_1 + 0x70);
  if (((ulong)plVar7 & 1) == 0) {
    lVar9 = plVar7[4];
    plVar7[4] = lVar9 + -1;
    LORelease();
    if (lVar9 != 1) goto LAB_105a9ebac;
    if (*plVar7 != 0) {
      _free(plVar7[1]);
    }
  }
  else {
    if (*(long *)(param_1 + 0x68) + ((ulong)plVar7 >> 5) == 0) goto LAB_105a9ebac;
    plVar7 = (long *)(lVar9 - ((ulong)plVar7 >> 5));
  }
  _free(plVar7);
LAB_105a9ebac:
  *(undefined8 *)(param_1 + 0x20) = 4;
  uVar10 = *(ulong *)(param_1 + 0xa0);
  if (uVar10 < 0x8000000000000003) {
    uVar3 = uVar10;
    if (uVar10 < 0x8000000000000001) {
      uVar3 = 0;
    }
    if ((uVar10 != 0x8000000000000000) && ((uVar3 & 0x7fffffffffffffff) == 0)) {
      lVar4 = *(long *)(param_1 + 0xa8);
      lVar9 = *(long *)(param_1 + 0xb0) + 1;
      lVar8 = lVar4 + 0x18;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        (**(code **)(*(long *)(lVar8 + -0x18) + 0x20))
                  (lVar8,*(undefined8 *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8));
        lVar8 = lVar8 + 0x28;
      }
      if (uVar10 != 0) {
        _free(lVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0x8000000000000006;
  *(undefined1 *)(param_1 + 0x116) = 2;
  return;
}

