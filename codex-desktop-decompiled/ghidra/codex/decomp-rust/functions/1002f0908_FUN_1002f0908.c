
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002f0908(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  char *pcVar13;
  undefined8 *unaff_x27;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [12];
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  long *in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_00000320;
  long *in_stack_00000328;
  long in_stack_00000330;
  long in_stack_00000338;
  long in_stack_00000340;
  long in_stack_00000348;
  long in_stack_00000350;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000368;
  long in_stack_00000370;
  int in_stack_00000378;
  undefined4 in_stack_0000037c;
  long in_stack_000004f0;
  long *in_stack_000004f8;
  long in_stack_00000500;
  long in_stack_00000508;
  long in_stack_00000510;
  long in_stack_00000518;
  long in_stack_00000520;
  long in_stack_00000528;
  long in_stack_00000530;
  long in_stack_00000538;
  long in_stack_00000540;
  long in_stack_00000548;
  int in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined4 in_stack_000005c0;
  
  *(char **)(unaff_x29 + -0xd0) = s_7identity_cache_miss_occurred__a_108abaab6;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0x90;
  *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000658;
  auVar14 = (**(code **)(*(long *)(unaff_x19 + 0x368) + 0x20))
                      (*(long *)(unaff_x19 + 0x360) +
                       (*(long *)(*(long *)(unaff_x19 + 0x368) + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10);
  *(undefined1 (*) [12])(unaff_x29 + -0xf8) = auVar14;
  func_0x000106032878(&stack0x000005b0,&stack0x00000648,unaff_x29 + -0xf8);
  uVar1 = 0;
  if (in_stack_000005b0 == 0) {
    uVar1 = in_stack_000005c0;
  }
  uVar9 = 0;
  if (in_stack_000005b0 == 0) {
    uVar9 = in_stack_000005b8;
  }
  *(undefined8 *)(unaff_x29 + -0x80) = uVar9;
  *(undefined4 *)(unaff_x29 + -0x78) = uVar1;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xf8) = unaff_x19 + 0x370;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(uRam000000010b625990,&stack0x00000550)
  ;
  uVar9 = uRam000000010b625990;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000005b0);
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar9,puVar3,puVar2,&stack0x000005b0,&stack0x00000550);
    }
  }
  auVar14 = __ZN91__LT_std__time__SystemTime_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17h30dad94c6dfd71d0E
                      ();
  lVar5 = **(long **)(unaff_x19 + 800);
  **(long **)(unaff_x19 + 800) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(unaff_x19 + 800);
  }
  lVar5 = **(long **)(unaff_x19 + 0x360);
  **(long **)(unaff_x19 + 0x360) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(unaff_x19 + 0x360);
  }
  *(undefined1 *)(unaff_x19 + 1000) = 1;
  if (*(ulong *)(unaff_x19 + 0x2b8) != 2) {
    lVar5 = *(long *)(unaff_x19 + 0x2c0);
    if ((*(ulong *)(unaff_x19 + 0x2b8) & 1) != 0) {
      lVar5 = lVar5 + (*(long *)(*(long *)(unaff_x19 + 0x2c8) + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(*(long *)(unaff_x19 + 0x2c8) + 0x68))(lVar5,unaff_x19 + 0x2d0);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (*(long *)(unaff_x19 + 0x2d8) != 0)) {
    FUN_1003239f0(unaff_x19 + 0x2b8,&UNK_108c80723,0x15,s_<____108ab67c5,&stack0x000003d0);
  }
  if (auVar14._8_4_ == 0x3b9aca01) {
    *in_stack_00000038 = 5;
    *unaff_x28 = 4;
  }
  else {
    FUN_100318988(unaff_x19 + 0x2b8);
    plVar12 = in_stack_000004f8;
    if (auVar14._8_4_ != 1000000000) {
      plVar12 = *(long **)(unaff_x19 + 0x1b0);
      *(undefined1 *)(unaff_x19 + 0x2b0) = 0;
      *plVar12 = in_stack_000004f0;
      plVar12[1] = (long)in_stack_000004f8;
      plVar12[5] = in_stack_00000518;
      plVar12[4] = in_stack_00000510;
      plVar12[7] = in_stack_00000528;
      plVar12[6] = in_stack_00000520;
      plVar12[9] = in_stack_00000538;
      plVar12[8] = in_stack_00000530;
      plVar12[0xb] = in_stack_00000548;
      plVar12[10] = in_stack_00000540;
      plVar12[3] = in_stack_00000508;
      plVar12[2] = in_stack_00000500;
      *(undefined1 (*) [12])(plVar12 + 0xc) = auVar14;
      *(undefined1 *)(plVar12 + 0x13) = 1;
      FUN_1060faa28(plVar12 + 0xe);
      in_stack_000004f0 = 0;
    }
    if ((*(byte *)(unaff_x19 + 0x2b0) & 1) != 0) {
      __ZN81__LT_tokio__sync__semaphore__SemaphorePermit_u20_as_u20_core__ops__drop__Drop_GT_4drop17h142a73916ead84f7E
                (unaff_x19 + 0x3f0);
    }
    *(undefined1 *)(unaff_x19 + 0x2b0) = 0;
    if ((*(byte *)(unaff_x19 + 0x2b1) & 1) != 0) {
      FUN_100318290(unaff_x19 + 0x1b8);
    }
    *(undefined2 *)(unaff_x19 + 0x2b1) = 0x100;
    FUN_10031b234();
    if (in_stack_000004f0 == 0) {
      FUN_1003261dc(&stack0x00000320,plVar12);
      uVar9 = extraout_x1_00;
    }
    else {
      in_stack_00000378 = 0x3b9aca01;
      uVar9 = extraout_x1;
      in_stack_00000320 = in_stack_000004f0;
      in_stack_00000328 = plVar12;
    }
    pcVar13 = (char *)*unaff_x27;
    if (*pcVar13 == '\0') {
      *pcVar13 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar13,uVar9,1000000000);
    }
    FUN_1060fa678(pcVar13,1,pcVar13);
    *(undefined2 *)(unaff_x19 + 0x198) = 0x100;
    if (in_stack_00000378 != 0x3b9aca02) {
      FUN_10031af74();
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
         (((bRam000000010b625970 - 1 < 2 ||
           ((bRam000000010b625970 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b625960), cVar6 != '\0')))) &&
          (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (lRam000000010b625960), (uVar8 & 1) != 0)))) {
        FUN_1002f1878(&stack0x00000210);
      }
      else {
        lVar5 = lRam000000010b625960;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000001a0 = *(undefined8 *)(lRam000000010b625960 + 0x20);
          in_stack_000001a8 = *(undefined8 *)(lRam000000010b625960 + 0x28);
          in_stack_00000198 = 4;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000198);
          if (iVar7 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar5,puVar3,puVar2,&stack0x000003d0,&stack0x00000210);
          }
        }
      }
      lVar5 = **(long **)(unaff_x19 + 0x30);
      **(long **)(unaff_x19 + 0x30) = lVar5 + -1;
      LORelease();
      in_stack_000001b0 = in_stack_00000320;
      in_stack_000001b8 = in_stack_00000328;
      in_stack_000001c0 = in_stack_00000330;
      in_stack_000001c8 = in_stack_00000338;
      in_stack_000001d0 = in_stack_00000340;
      in_stack_000001d8 = in_stack_00000348;
      in_stack_000001e0 = in_stack_00000350;
      in_stack_000001e8 = in_stack_00000358;
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb2b14707148ca553E();
      }
      if ((*(byte *)(unaff_x19 + 0x101) & 1) != 0) {
        lVar5 = **(long **)(unaff_x19 + 0x50);
        **(long **)(unaff_x19 + 0x50) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E();
        }
      }
      if ((*(byte *)(unaff_x19 + 0x103) & 1) != 0) {
        lVar5 = **(long **)(unaff_x19 + 0x60);
        **(long **)(unaff_x19 + 0x60) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E();
        }
      }
      if ((*(byte *)(unaff_x19 + 0x102) & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x88);
        puVar4 = *(undefined8 **)(unaff_x19 + 0x90);
        pcVar11 = (code *)*puVar4;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar9);
        }
        if (puVar4[1] != 0) {
          _free(uVar9);
        }
      }
      unaff_x20[5] = in_stack_000001d8;
      unaff_x20[4] = in_stack_000001d0;
      unaff_x20[7] = in_stack_000001e8;
      unaff_x20[6] = in_stack_000001e0;
      unaff_x20[9] = in_stack_00000368;
      unaff_x20[8] = in_stack_00000360;
      unaff_x20[0xb] = CONCAT44(in_stack_0000037c,in_stack_00000378);
      unaff_x20[10] = in_stack_00000370;
      uVar10 = 1;
      unaff_x20[1] = (long)in_stack_000001b8;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[2] = in_stack_000001c0;
      goto LAB_1002f0e7c;
    }
  }
  *(undefined4 *)(unaff_x20 + 0xb) = 0x3b9aca02;
  uVar10 = 4;
LAB_1002f0e7c:
  *(undefined1 *)(unaff_x19 + 0x100) = uVar10;
  return;
}

