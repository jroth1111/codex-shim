
void FUN_10026e318(void)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 unaff_w23;
  byte *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined4 in_stack_00000284;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined4 in_stack_000002c4;
  byte in_stack_000002c8;
  undefined6 in_stack_000002ca;
  
  *(char **)(unaff_x29 + -0x80) = s_pooling_idle_connection_for_108ab8dab;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000001f8;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000001f0;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000200;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar8 = *(long *)(unaff_x19 + -8);
  if (lVar8 == *(long *)(unaff_x19 + -0x18)) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hf6a522b128e9cf73E(unaff_x19 + -0x18);
  }
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + -0x10) + lVar8 * 0x48);
  puVar6[1] = in_stack_000001a8;
  *puVar6 = in_stack_000001a0;
  puVar6[8] = CONCAT44(in_stack_00000284,unaff_w23);
  puVar6[5] = in_stack_000001c8;
  puVar6[4] = in_stack_000001c0;
  puVar6[7] = in_stack_00000000;
  puVar6[6] = in_stack_000001d0;
  puVar6[3] = in_stack_000001b8;
  puVar6[2] = in_stack_000001b0;
  *(long *)(unaff_x19 + -8) = lVar8 + 1;
  if ((((unaff_x28[0x17] != 0) || (uVar3 = *(uint *)(unaff_x28 + 0x19), uVar3 == 1000000000)) ||
      ((lVar8 = unaff_x28[0x18], uVar3 == 0 && (lVar8 == 0)))) ||
     (plVar9 = (long *)*unaff_x28, plVar9 == (long *)0x0)) {
LAB_10026e568:
    if (1 < *unaff_x27) {
      plVar9 = *(long **)(unaff_x27 + 8);
      (**(code **)(*plVar9 + 0x20))(plVar9 + 3,plVar9[1],plVar9[2]);
      _free(plVar9);
    }
    (**(code **)(*(long *)(unaff_x27 + 0x10) + 0x20))
              (unaff_x27 + 0x28,*(undefined8 *)(unaff_x27 + 0x18),*(undefined8 *)(unaff_x27 + 0x20))
    ;
    return;
  }
  lVar5 = *plVar9;
  *plVar9 = lVar5 + 1;
  if (-1 < lVar5) {
    uVar10 = unaff_x28[1];
    *(long **)(unaff_x29 + -0x70) = plVar9;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar10;
    if (lVar8 == 0 && uVar3 < 0x55d4a81) {
      lVar8 = 0;
      uVar3 = 90000000;
    }
    auVar12 = FUN_10027ccec();
    *(long *)(unaff_x29 + -0x80) = auVar12._8_8_;
    unaff_x28[0x17] = auVar12._0_8_;
    lVar5 = *plVar9;
    *plVar9 = lVar5 + 1;
    if (-1 < lVar5) {
      *(long **)(unaff_x29 + -0xa0) = plVar9;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar10;
      do {
        lVar5 = *(long *)(in_stack_00000008 + 8);
        while (lVar5 != -1) {
          if (lVar5 < 0) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__108b1bd74,&stack0x00000240,&UNK_10b1f5e20);
            goto LAB_10026e664;
          }
          lVar1 = lVar5 + 1;
          lVar7 = *(long *)(in_stack_00000008 + 8);
          bVar2 = lVar7 == lVar5;
          lVar5 = lVar7;
          if (bVar2) {
            *(long *)(in_stack_00000008 + 8) = lVar1;
            uVar11 = *(undefined8 *)(unaff_x29 + -0x98);
            uVar10 = *(undefined8 *)(unaff_x29 + -0xa0);
            lVar5 = unaff_x28[0x14];
            lVar1 = unaff_x28[0x15];
            puVar6 = (undefined8 *)_malloc(0x90);
            if (puVar6 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x90);
              goto LAB_10026e664;
            }
            lVar7 = *(long *)(lVar1 + 0x10);
            puVar6[0xd] = in_stack_00000008;
            puVar6[0xc] = uVar11;
            puVar6[0xf] = lVar8;
            puVar6[0xe] = auVar12._8_8_;
            puVar6[0x11] = CONCAT62(in_stack_000002ca,(ushort)in_stack_000002c8);
            puVar6[0x10] = CONCAT44(in_stack_000002c4,uVar3);
            puVar6[5] = in_stack_000001c8;
            puVar6[4] = in_stack_000001c0;
            puVar6[7] = in_stack_00000000;
            puVar6[6] = in_stack_000001d0;
            puVar6[9] = in_stack_00000288;
            puVar6[8] = CONCAT44(in_stack_00000284,unaff_w23);
            puVar6[0xb] = uVar10;
            puVar6[10] = in_stack_00000290;
            puVar6[1] = in_stack_000001a8;
            *puVar6 = in_stack_000001a0;
            puVar6[3] = in_stack_000001b8;
            puVar6[2] = in_stack_000001b0;
            (**(code **)(lVar1 + 0x18))
                      (lVar5 + (lVar7 - 1U & 0xfffffffffffffff0) + 0x10,puVar6,&UNK_10b1f3a60);
            lVar8 = **(long **)(unaff_x29 + -0x70);
            **(long **)(unaff_x29 + -0x70) = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10026e668);
  (*pcVar4)();
}

