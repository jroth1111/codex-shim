
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN113__LT_codex_rmcp_client__executor_process_transport__ExecutorProcessTransport_u20_as_u20_core__ops__drop__Drop_GT_4drop17h85c87e3da6317ac1E
               (long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long **pplVar4;
  undefined8 uVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long **pplVar12;
  char cVar13;
  int iVar14;
  long **pplVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long ***ppplVar19;
  long **pplVar20;
  long **pplStack_258;
  long **pplStack_250;
  long *****ppppplStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long ****pppplStack_220;
  long ****pppplStack_218;
  long ***ppplStack_210;
  long *plStack_208;
  long **pplStack_200;
  long *****ppppplStack_1f8;
  long **pplStack_1f0;
  long **pplStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long **pplStack_1c8;
  long **pplStack_1c0;
  long **pplStack_1b8;
  long **pplStack_1b0;
  long **pplStack_1a8;
  long **pplStack_1a0;
  long **pplStack_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  long **pplStack_188;
  long **pplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  long **pplStack_168;
  long **pplStack_160;
  long **pplStack_158;
  long **pplStack_150;
  long **pplStack_148;
  long **pplStack_140;
  long **pplStack_138;
  long **pplStack_130;
  long **pplStack_128;
  long **pplStack_120;
  long **pplStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long lStack_98;
  long **pplStack_90;
  undefined8 uStack_88;
  
  if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
    return;
  }
  lVar10 = **(long **)(param_1 + 0x78);
  **(long **)(param_1 + 0x78) = lVar10 + 1;
  if (lVar10 < 0) goto LAB_104a92ad0;
  pplVar4 = *(long ***)(param_1 + 0x78);
  pplVar6 = *(long ***)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  pplVar7 = *(long ***)(param_1 + 0x40);
  pplStack_258 = pplVar4;
  pplStack_250 = pplVar6;
  if (pplVar7 == (long **)0x0) {
    pplVar15 = (long **)0x1;
  }
  else {
    pplVar15 = (long **)_malloc(pplVar7);
    if (pplVar15 == (long **)0x0) {
      func_0x0001087c9084(1,pplVar7);
      goto LAB_104a92ad0;
    }
  }
  _memcpy(pplVar15,uVar5,pplVar7);
  puVar16 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)puVar16[9] == '\x01') {
LAB_104a9245c:
    uVar17 = *puVar16;
    if (0x7ffffffffffffffe < uVar17) {
      func_0x000108a07858(&UNK_10b4ce0a8);
      goto LAB_104a92ad0;
    }
    *puVar16 = uVar17 + 1;
    uVar18 = puVar16[1];
    if (uVar18 != 2) {
      pplVar20 = (long **)puVar16[2];
      plVar11 = *pplVar20;
      *pplVar20 = (long *)((long)plVar11 + 1);
      if ((uVar18 & 1) == 0) {
        if ((long)plVar11 < 0) goto LAB_104a92ad0;
        lStack_98 = 0;
      }
      else {
        if ((long)plVar11 < 0) goto LAB_104a92ad0;
        lStack_98 = 1;
      }
      *puVar16 = *puVar16 - 1;
      do {
        pplVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        pplVar12 = (long **)((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE +
                            1);
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (long **)0x0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = pplVar12;
      } while (bVar1);
      plVar11 = *pplVar20;
      *pplVar20 = (long *)((long)plVar11 + 1);
      pplStack_90 = pplVar20;
      if (lStack_98 == 0) {
        if (-1 < (long)plVar11) {
          plVar11 = pplVar20[0x5e];
          if (plVar11 == (long *)0x0) {
            pplStack_168 = (long **)0x0;
            pplStack_160 = (long **)0x0;
          }
          else {
            lVar10 = *plVar11;
            *plVar11 = lVar10 + 1;
            if (lVar10 < 0) goto LAB_104a92ad0;
            pplStack_160 = (long **)pplVar20[0x5f];
            pplStack_168 = (long **)pplVar20[0x5e];
          }
          pplStack_200 = (long **)0xcc;
          ppppplStack_1f8 = (long *****)0x0;
          pplStack_1f0 = (long **)&UNK_10b34a478;
          pplStack_1e8 = (long **)0x0;
          pplStack_1d8 = pplVar8;
          uStack_1d0 = 0;
          uStack_190 = 0;
          pplStack_180 = (long **)0x0;
          pplStack_178 = (long **)0x0;
          pplStack_188 = (long **)0x0;
          ppplStack_210 = (long ***)0x0;
          pplStack_1e0 = pplVar20;
          pplStack_1c8 = pplVar7;
          pplStack_1c0 = pplVar15;
          pplStack_1b8 = pplVar7;
          pplStack_1b0 = pplVar4;
          pplStack_1a8 = pplVar6;
          iVar14 = _posix_memalign(&ppplStack_210,0x80,0x100);
          ppplVar19 = ppplStack_210;
          if ((iVar14 == 0) && (ppplStack_210 != (long ***)0x0)) {
            ppplStack_210[0x13] = pplStack_168;
            ppplStack_210[0x12] = pplStack_170;
            ppplStack_210[0x15] = pplStack_158;
            ppplStack_210[0x14] = pplStack_160;
            ppplStack_210[0x17] = pplStack_148;
            ppplStack_210[0x16] = pplStack_150;
            ppplStack_210[3] = pplStack_1e8;
            ppplStack_210[2] = pplStack_1f0;
            ppplStack_210[5] = pplStack_1d8;
            ppplStack_210[4] = pplStack_1e0;
            ppplStack_210[7] = pplStack_1c8;
            ppplStack_210[6] = (long **)CONCAT44(uStack_1cc,uStack_1d0);
            ppplStack_210[1] = (long **)ppppplStack_1f8;
            *ppplStack_210 = pplStack_200;
            ppplStack_210[0xd] = pplStack_198;
            ppplStack_210[0xc] = pplStack_1a0;
            ppplStack_210[0xf] = pplStack_188;
            ppplStack_210[0xe] = (long **)CONCAT71(uStack_18f,uStack_190);
            ppplStack_210[9] = pplStack_1b8;
            ppplStack_210[8] = pplStack_1c0;
            ppplStack_210[0xb] = pplStack_1a8;
            ppplStack_210[10] = pplStack_1b0;
            ppplStack_210[0x11] = pplStack_178;
            ppplStack_210[0x10] = pplStack_180;
            ppplStack_210[0x1d] = pplStack_118;
            ppplStack_210[0x1c] = pplStack_120;
            ppplStack_210[0x1f] = pplStack_108;
            ppplStack_210[0x1e] = pplStack_110;
            ppplStack_210[0x19] = pplStack_138;
            ppplStack_210[0x18] = pplStack_140;
            ppplStack_210[0x1b] = pplStack_128;
            ppplStack_210[0x1a] = pplStack_130;
            lVar10 = FUN_104b13110(pplVar20 + 0x2d,ppplStack_210,ppplStack_210);
            pplStack_200 = pplVar8;
            if (pplVar20[0x5c] != (long *)0x0) {
              (*(code *)pplVar20[0x5d][5])
                        ((long)pplVar20[0x5c] + (pplVar20[0x5d][2] - 1U & 0xfffffffffffffff0) + 0x10
                         ,&pplStack_200);
            }
            if (lVar10 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (&pplStack_90,lVar10);
            }
            goto LAB_104a92980;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        }
      }
      else if (-1 < (long)plVar11) {
        plVar11 = pplVar20[0x4a];
        if (plVar11 == (long *)0x0) {
          pplStack_168 = (long **)0x0;
          pplStack_160 = (long **)0x0;
        }
        else {
          lVar10 = *plVar11;
          *plVar11 = lVar10 + 1;
          if (lVar10 < 0) goto LAB_104a92ad0;
          pplStack_160 = (long **)pplVar20[0x4b];
          pplStack_168 = (long **)pplVar20[0x4a];
        }
        pplStack_200 = (long **)0xcc;
        ppppplStack_1f8 = (long *****)0x0;
        pplStack_1f0 = (long **)&UNK_10b34a5b8;
        pplStack_1e8 = (long **)0x0;
        pplStack_1d8 = pplVar8;
        uStack_1d0 = 0;
        uStack_190 = 0;
        pplStack_180 = (long **)0x0;
        pplStack_178 = (long **)0x0;
        pplStack_188 = (long **)0x0;
        ppplStack_210 = (long ***)0x0;
        pplStack_1e0 = pplVar20;
        pplStack_1c8 = pplVar7;
        pplStack_1c0 = pplVar15;
        pplStack_1b8 = pplVar7;
        pplStack_1b0 = pplVar4;
        pplStack_1a8 = pplVar6;
        iVar14 = _posix_memalign(&ppplStack_210,0x80,0x100);
        ppplVar19 = ppplStack_210;
        if ((iVar14 == 0) && (ppplStack_210 != (long ***)0x0)) {
          ppplStack_210[0x13] = pplStack_168;
          ppplStack_210[0x12] = pplStack_170;
          ppplStack_210[0x15] = pplStack_158;
          ppplStack_210[0x14] = pplStack_160;
          ppplStack_210[0x17] = pplStack_148;
          ppplStack_210[0x16] = pplStack_150;
          ppplStack_210[3] = pplStack_1e8;
          ppplStack_210[2] = pplStack_1f0;
          ppplStack_210[5] = pplStack_1d8;
          ppplStack_210[4] = pplStack_1e0;
          ppplStack_210[7] = pplStack_1c8;
          ppplStack_210[6] = (long **)CONCAT44(uStack_1cc,uStack_1d0);
          ppplStack_210[1] = (long **)ppppplStack_1f8;
          *ppplStack_210 = pplStack_200;
          ppplStack_210[0xd] = pplStack_198;
          ppplStack_210[0xc] = pplStack_1a0;
          ppplStack_210[0xf] = pplStack_188;
          ppplStack_210[0xe] = (long **)CONCAT71(uStack_18f,uStack_190);
          ppplStack_210[9] = pplStack_1b8;
          ppplStack_210[8] = pplStack_1c0;
          ppplStack_210[0xb] = pplStack_1a8;
          ppplStack_210[10] = pplStack_1b0;
          ppplStack_210[0x11] = pplStack_178;
          ppplStack_210[0x10] = pplStack_180;
          ppplStack_210[0x1d] = pplStack_118;
          ppplStack_210[0x1c] = pplStack_120;
          ppplStack_210[0x1f] = pplStack_108;
          ppplStack_210[0x1e] = pplStack_110;
          ppplStack_210[0x19] = pplStack_138;
          ppplStack_210[0x18] = pplStack_140;
          ppplStack_210[0x1b] = pplStack_128;
          ppplStack_210[0x1a] = pplStack_130;
          lVar10 = FUN_104b13110(pplVar20 + 0x11,ppplStack_210,ppplStack_210);
          pplStack_200 = pplVar8;
          if (pplVar20[0x48] != (long *)0x0) {
            (*(code *)pplVar20[0x49][5])
                      ((long)pplVar20[0x48] + (pplVar20[0x49][2] - 1U & 0xfffffffffffffff0) + 0x10,
                       &pplStack_200);
          }
          if (lVar10 != 0) {
            FUN_10610fa38(pplVar20 + 2,lVar10,0);
          }
LAB_104a92980:
          if (*ppplVar19 == (long **)0xcc) {
            *ppplVar19 = (long **)0x84;
          }
          else {
            (*(code *)ppplVar19[2][4])(ppplVar19);
          }
          if (lStack_98 != 0) {
            plVar11 = *pplStack_90;
            *pplStack_90 = (long *)((long)plVar11 + -1);
            LORelease();
            if (plVar11 != (long *)0x1) {
              return;
            }
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&pplStack_90);
            return;
          }
          plVar11 = *pplStack_90;
          *pplStack_90 = (long *)((long)plVar11 + -1);
          LORelease();
          if (plVar11 != (long *)0x1) {
            return;
          }
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&pplStack_90);
          return;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
      }
LAB_104a92ad0:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104a92ad4);
      (*pcVar9)();
    }
    *puVar16 = uVar17;
  }
  else if ((char)puVar16[9] != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (puVar16,&DAT_1060edbcc);
    *(undefined1 *)(puVar16 + 9) = 1;
    goto LAB_104a9245c;
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    if (((bRam000000010b62f570 - 1 < 2) ||
        ((bRam000000010b62f570 != 0 &&
         (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b62f560), cVar13 != '\0')))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b62f560), iVar14 != 0)) {
      pplStack_1e8 = (long **)(lRam000000010b62f560 + 0x30);
      plStack_208 = (long *)&DAT_104b149a8;
      pppplStack_218 = &ppplStack_210;
      pppplStack_220 = (long ****)s_BCould_not_schedule_remote_MCP_s_108b053da;
      ppppplStack_248 = &pppplStack_220;
      puStack_240 = &UNK_10b347048;
      ppppplStack_1f8 = (long *****)&ppppplStack_248;
      pplStack_200 = (long **)0x1;
      pplStack_1f0 = (long **)0x1;
      ppplStack_210 = (long ***)(param_1 + 0x30);
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b62f560,&pplStack_200);
      lVar10 = lRam000000010b62f560;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pplStack_90 = *(long ***)(lRam000000010b62f560 + 0x20);
        uStack_88 = *(undefined8 *)(lRam000000010b62f560 + 0x28);
        lStack_98 = 2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar2 + 0x18))(puVar3,&lStack_98);
        if (iVar14 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar10,puVar3,puVar2,&lStack_98,&pplStack_200);
        }
      }
      goto LAB_104a926b0;
    }
  }
  lVar10 = lRam000000010b62f560;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uStack_230 = *(undefined8 *)(lRam000000010b62f560 + 0x20);
    uStack_228 = *(undefined8 *)(lRam000000010b62f560 + 0x28);
    uStack_238 = 2;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar14 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_238);
    if (iVar14 != 0) {
      pplStack_1e8 = (long **)(lRam000000010b62f560 + 0x30);
      pplStack_90 = (long **)&DAT_104b149a8;
      plStack_208 = &lStack_98;
      ppplStack_210 = (long ***)s_BCould_not_schedule_remote_MCP_s_108b053da;
      pppplStack_220 = &ppplStack_210;
      pppplStack_218 = (long ****)&UNK_10b347048;
      ppppplStack_1f8 = &pppplStack_220;
      pplStack_200 = (long **)0x1;
      pplStack_1f0 = (long **)0x1;
      lStack_98 = param_1 + 0x30;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar10,puVar3,puVar2,&uStack_238,&pplStack_200);
    }
  }
LAB_104a926b0:
  if (pplVar7 != (long **)0x0) {
    _free(pplVar15);
  }
  plVar11 = *pplVar4;
  *pplVar4 = (long *)((long)plVar11 + -1);
  LORelease();
  if (plVar11 == (long *)0x1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hce82b7456c5d2d0fE(&pplStack_258);
  }
  return;
}

