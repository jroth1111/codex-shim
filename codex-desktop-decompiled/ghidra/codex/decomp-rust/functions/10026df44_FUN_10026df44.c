
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026df44(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  undefined4 unaff_w23;
  long lVar13;
  char *unaff_x26;
  byte *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_00000284;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined4 in_stack_000002c4;
  byte in_stack_000002c8;
  undefined6 in_stack_000002ca;
  
  *(char **)(unaff_x29 + -0x80) = s_pooling_idle_connection_for_108ab8dab;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000240);
  if ((*unaff_x26 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar13 = *unaff_x20;
    uVar12 = *(undefined8 *)(lVar13 + 0x20);
    uVar14 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xa0) = 4;
    *(undefined8 *)(unaff_x29 + -0x98) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar14;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xa0);
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar13,puVar4,puVar3,unaff_x29 + -0xa0,&stack0x00000240);
    }
  }
  lVar13 = *(long *)(unaff_x19 + -8);
  if (lVar13 == *(long *)(unaff_x19 + -0x18)) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hf6a522b128e9cf73E(unaff_x19 + -0x18);
  }
  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + -0x10) + lVar13 * 0x48);
  puVar9[1] = in_stack_000001a8;
  *puVar9 = in_stack_000001a0;
  puVar9[8] = CONCAT44(in_stack_00000284,unaff_w23);
  puVar9[5] = in_stack_000001c8;
  puVar9[4] = in_stack_000001c0;
  puVar9[7] = in_stack_00000000;
  puVar9[6] = in_stack_000001d0;
  puVar9[3] = in_stack_000001b8;
  puVar9[2] = in_stack_000001b0;
  *(long *)(unaff_x19 + -8) = lVar13 + 1;
  if ((((unaff_x28[0x17] != 0) || (uVar5 = *(uint *)(unaff_x28 + 0x19), uVar5 == 1000000000)) ||
      ((lVar13 = unaff_x28[0x18], uVar5 == 0 && (lVar13 == 0)))) ||
     (plVar11 = (long *)*unaff_x28, plVar11 == (long *)0x0)) {
LAB_10026e568:
    if (1 < *unaff_x27) {
      plVar11 = *(long **)(unaff_x27 + 8);
      (**(code **)(*plVar11 + 0x20))(plVar11 + 3,plVar11[1],plVar11[2]);
      _free(plVar11);
    }
    (**(code **)(*(long *)(unaff_x27 + 0x10) + 0x20))
              (unaff_x27 + 0x28,*(undefined8 *)(unaff_x27 + 0x18),*(undefined8 *)(unaff_x27 + 0x20))
    ;
    return;
  }
  lVar7 = *plVar11;
  *plVar11 = lVar7 + 1;
  if (-1 < lVar7) {
    uVar12 = unaff_x28[1];
    *(long **)(unaff_x29 + -0x70) = plVar11;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar12;
    if (lVar13 == 0 && uVar5 < 0x55d4a81) {
      lVar13 = 0;
      uVar5 = 90000000;
    }
    auVar15 = FUN_10027ccec();
    *(long *)(unaff_x29 + -0x80) = auVar15._8_8_;
    unaff_x28[0x17] = auVar15._0_8_;
    lVar7 = *plVar11;
    *plVar11 = lVar7 + 1;
    if (-1 < lVar7) {
      *(long **)(unaff_x29 + -0xa0) = plVar11;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar12;
      do {
        lVar7 = *(long *)(in_stack_00000008 + 8);
        while (lVar7 != -1) {
          if (lVar7 < 0) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__108b1bd74,&stack0x00000240,&UNK_10b1f5e20);
            goto LAB_10026e664;
          }
          lVar1 = lVar7 + 1;
          lVar10 = *(long *)(in_stack_00000008 + 8);
          bVar2 = lVar10 == lVar7;
          lVar7 = lVar10;
          if (bVar2) {
            *(long *)(in_stack_00000008 + 8) = lVar1;
            uVar14 = *(undefined8 *)(unaff_x29 + -0x98);
            uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
            lVar7 = unaff_x28[0x14];
            lVar1 = unaff_x28[0x15];
            puVar9 = (undefined8 *)_malloc(0x90);
            if (puVar9 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x90);
              goto LAB_10026e664;
            }
            lVar10 = *(long *)(lVar1 + 0x10);
            puVar9[0xd] = in_stack_00000008;
            puVar9[0xc] = uVar14;
            puVar9[0xf] = lVar13;
            puVar9[0xe] = auVar15._8_8_;
            puVar9[0x11] = CONCAT62(in_stack_000002ca,(ushort)in_stack_000002c8);
            puVar9[0x10] = CONCAT44(in_stack_000002c4,uVar5);
            puVar9[5] = in_stack_000001c8;
            puVar9[4] = in_stack_000001c0;
            puVar9[7] = in_stack_00000000;
            puVar9[6] = in_stack_000001d0;
            puVar9[9] = in_stack_00000288;
            puVar9[8] = CONCAT44(in_stack_00000284,unaff_w23);
            puVar9[0xb] = uVar12;
            puVar9[10] = in_stack_00000290;
            puVar9[1] = in_stack_000001a8;
            *puVar9 = in_stack_000001a0;
            puVar9[3] = in_stack_000001b8;
            puVar9[2] = in_stack_000001b0;
            (**(code **)(lVar1 + 0x18))
                      (lVar7 + (lVar10 - 1U & 0xfffffffffffffff0) + 0x10,puVar9,&UNK_10b1f3a60);
            lVar13 = **(long **)(unaff_x29 + -0x70);
            **(long **)(unaff_x29 + -0x70) = lVar13 + -1;
            LORelease();
            if (lVar13 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E(unaff_x29 + -0x70);
            }
            goto LAB_10026e568;
          }
        }
        InstructionSynchronizationBarrier();
      } while( true );
    }
  }
LAB_10026e664:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10026e668);
  (*pcVar6)();
}

