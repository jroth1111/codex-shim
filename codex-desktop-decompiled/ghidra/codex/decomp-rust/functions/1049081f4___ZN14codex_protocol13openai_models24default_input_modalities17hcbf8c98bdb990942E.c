
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
__ZN14codex_protocol13openai_models24default_input_modalities17hcbf8c98bdb990942E
          (undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined **ppuVar9;
  ulong *extraout_x8;
  ulong uVar10;
  undefined8 unaff_x21;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 uStack_111;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined ***pppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar4 = (undefined2 *)_malloc(2);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0x100;
    *param_1 = 2;
    param_1[1] = puVar4;
    param_1[2] = 2;
    return puVar4;
  }
  auVar14 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,2);
  uVar10 = auVar14._8_8_;
  lVar5 = auVar14._0_8_;
  if (*(long *)(lVar5 + 0x168) < -0x7ffffffffffffffe) {
    if ((auVar14._8_4_ & 0xff) == 3) {
      unaff_x21 = *(undefined8 *)(lVar5 + 0xb0);
      uVar10 = *(ulong *)(lVar5 + 0xb8);
    }
    else {
      uStack_111 = auVar14[8];
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bVar2 = bRam000000010b62f480, bRam000000010b62f480 - 1 < 2 ||
           ((bRam000000010b62f480 != 0 &&
            (bVar2 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b62f470), bVar2 != 0)))) &&
          (iVar3 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (lRam000000010b62f470,bVar2), iVar3 != 0)))) {
        lStack_c8 = lRam000000010b62f470 + 0x30;
        puStack_110 = &UNK_108e536ce;
        uStack_108 = 0xbb;
        puStack_100 = (undefined1 *)(lVar5 + 0x30);
        puStack_90 = &uStack_111;
        ppuStack_c0 = &puStack_110;
        puStack_b8 = &UNK_10b33f6c0;
        ppuStack_b0 = &puStack_100;
        puStack_a8 = &UNK_10b33f7e0;
        ppuStack_a0 = &puStack_90;
        puStack_98 = &UNK_10b33f800;
        pppuStack_d8 = &ppuStack_c0;
        uStack_e0 = 1;
        uStack_d0 = 3;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b62f470,&uStack_e0)
        ;
        lVar11 = lRam000000010b62f470;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_80 = *(undefined8 *)(lRam000000010b62f470 + 0x20);
          uStack_78 = *(undefined8 *)(lRam000000010b62f470 + 0x28);
          puStack_88 = (undefined *)0x2;
          puVar12 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar12 = &UNK_10b3c24c8;
          }
          puVar13 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar13 = &UNK_109adfc03;
          }
          iVar3 = (**(code **)(puVar12 + 0x18))(puVar13,&puStack_88);
          if (iVar3 != 0) {
            ppuVar9 = &puStack_88;
LAB_1049085ec:
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar11,puVar13,puVar12,ppuVar9,&uStack_e0);
          }
        }
      }
      else {
        lVar11 = lRam000000010b62f470;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_f0 = *(undefined8 *)(lRam000000010b62f470 + 0x20);
          uStack_e8 = *(undefined8 *)(lRam000000010b62f470 + 0x28);
          puStack_f8 = (undefined1 *)0x2;
          puVar12 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar12 = &UNK_10b3c24c8;
          }
          puVar13 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar13 = &UNK_109adfc03;
          }
          iVar3 = (**(code **)(puVar12 + 0x18))(puVar13,&puStack_f8);
          if (iVar3 != 0) {
            lStack_c8 = lRam000000010b62f470 + 0x30;
            uStack_80 = 0xbb;
            puStack_90 = (undefined1 *)(lVar5 + 0x30);
            puStack_88 = &UNK_108e536ce;
            puStack_110 = &uStack_111;
            ppuStack_c0 = &puStack_88;
            puStack_b8 = &UNK_10b33f6c0;
            ppuStack_b0 = &puStack_90;
            puStack_a8 = &UNK_10b33f7e0;
            ppuStack_a0 = &puStack_110;
            puStack_98 = &UNK_10b33f800;
            pppuStack_d8 = &ppuStack_c0;
            uStack_e0 = 1;
            uStack_d0 = 3;
            ppuVar9 = &puStack_f8;
            goto LAB_1049085ec;
          }
        }
      }
      unaff_x21 = *(undefined8 *)(lVar5 + 0xb0);
      uVar10 = *(ulong *)(lVar5 + 0xb8);
    }
    if (uVar10 == 0) {
      uVar6 = 1;
LAB_104908610:
      puVar4 = (undefined2 *)_memcpy(uVar6,unaff_x21,uVar10);
      *extraout_x8 = uVar10;
      extraout_x8[1] = uVar6;
      extraout_x8[2] = uVar10;
      return puVar4;
    }
    uVar6 = _malloc(uVar10);
    if (uVar6 != 0) goto LAB_104908610;
    goto LAB_10490866c;
  }
  if (*(long *)(lVar5 + 0x180) == -0x7fffffffffffffff) {
LAB_1049082a0:
    uVar10 = 0;
  }
  else {
    uVar1 = auVar14._8_4_ & 0xff;
    if (uVar1 != 1 && (uVar10 & 0xff) != 0) {
      if (uVar1 == 2) {
        if (*(long *)(lVar5 + 0x1b0) != -0x8000000000000000) {
          lVar11 = lVar5 + 0x1b0;
LAB_1049084a0:
          uVar10 = *(ulong *)(lVar11 + 0x10);
          if (uVar10 != 0) {
            uVar7 = *(undefined8 *)(lVar11 + 8);
            lVar11 = _malloc(uVar10);
            if (lVar11 == 0) {
LAB_10490866c:
              uVar7 = func_0x0001087c9084(1,uVar10);
              if (uVar10 != 0) {
                _free(unaff_x21);
              }
              plVar8 = (long *)__Unwind_Resume(uVar7);
              if (plVar8[2] == 0 && *plVar8 == 0) {
                return (undefined2 *)plVar8[4];
              }
              return (undefined2 *)0x1;
            }
            _memcpy(lVar11,uVar7,uVar10);
            if (uVar10 == 0x8000000000000000) {
              lVar11 = 1;
              uVar10 = 0;
            }
            goto LAB_1049082a8;
          }
          goto LAB_1049082a4;
        }
      }
      else {
        lVar11 = lVar5 + 0x180;
        if (*(long *)(lVar5 + 0x180) != -0x8000000000000000) goto LAB_1049084a0;
      }
      goto LAB_1049082a0;
    }
    if ((uVar10 & 0xff) != 0) {
      if (*(long *)(lVar5 + 0x198) != -0x8000000000000000) {
        lVar11 = lVar5 + 0x198;
        goto LAB_1049084a0;
      }
      goto LAB_1049082a0;
    }
    uVar10 = uVar10 & 0xff;
  }
LAB_1049082a4:
  lVar11 = 1;
LAB_1049082a8:
  puVar4 = (undefined2 *)
           FUN_1049b8338(extraout_x8,*(undefined8 *)(lVar5 + 0x170),*(undefined8 *)(lVar5 + 0x178),
                         &UNK_108e534f5,0x11,lVar11,uVar10);
  if (uVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined2 *)(*(code *)PTR__free_10b61b0a8)(lVar11);
    return puVar4;
  }
  return puVar4;
}

