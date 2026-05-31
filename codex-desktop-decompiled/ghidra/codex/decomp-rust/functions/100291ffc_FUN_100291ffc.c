
/* WARNING: Removing unreachable block (ram,0x000100292454) */
/* WARNING: Removing unreachable block (ram,0x00010029246c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100291ffc(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 in_x9;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long unaff_x25;
  ulong *unaff_x27;
  undefined8 uVar10;
  ulong in_stack_00000018;
  int in_stack_00000020;
  undefined8 *in_stack_00000038;
  byte in_stack_000007bc;
  long in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 in_stack_00000840;
  
  puVar4 = &stack0x00000940;
  cVar5 = '\x01';
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = (undefined4)((ulong)puVar4 >> 0x20);
  uVar15 = 1;
  uVar16 = 0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar7 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                    (&stack0x00000690);
  bVar1 = 6;
  if (5 < *(byte *)(lVar7 + 0x50)) {
    bVar1 = *(byte *)(lVar7 + 0x50) - 6;
  }
  if (bVar1 < 3) {
    if ((bVar1 != 0) && (bVar1 != 2)) goto LAB_10029221c;
LAB_100292368:
    _memcpy(&stack0x00000960,&stack0x000006a0,0x120);
    __ZN2h25proto7streams4recv4Recv12recv_headers17h7832df1151bf830fE
              (&stack0x00000820,in_stack_000007c0,&stack0x00000960,&stack0x00000690,unaff_x21 + 2);
    _memcpy(&stack0x00000968,&stack0x00000828,0x118);
    func_0x0001002a2650(in_stack_000007c0 + 0xa0,&stack0x00000960,in_stack_000007c8,&stack0x00000690
                        ,unaff_x21 + 2,in_stack_000007c0 + 0x140);
    __ZN2h25proto7streams4send4Send23schedule_implicit_reset17h8087b2aa8667028fE
              (in_stack_000007c0 + 0xa0,&stack0x00000690,1,unaff_x21 + 2,in_stack_000007c0 + 0x140);
    __ZN2h25proto7streams4recv4Recv24enqueue_reset_expiration17h246d203a9ffc409cE
              (in_stack_000007c0,&stack0x00000690,unaff_x21 + 2);
  }
  else {
    if (bVar1 == 3) {
      lVar8 = 0x52;
    }
    else {
      if (bVar1 != 4) goto LAB_10029221c;
      lVar8 = 0x51;
    }
    if (*(char *)(lVar7 + lVar8) != '\x01') goto LAB_100292368;
LAB_10029221c:
    if ((in_stack_000007bc & 1) == 0) {
      if (((*unaff_x27 < 2) &&
          ((bRam000000010b632840 - 1 < 2 ||
           ((bRam000000010b632840 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
                               ), cVar5 != '\0')))))) &&
         (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
                            ), iVar6 != 0)) {
        __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                  (&stack0x00000690);
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
                   ,&stack0x00000960);
        lVar7 = 
        ___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar12 = 0;
          uVar14 = (undefined4)
                   ((ulong)*(undefined8 *)
                            (
                            ___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
                            + 0x20) >> 0x20);
          uVar15 = (undefined4)
                   *(undefined8 *)
                    (
                    ___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
                    + 0x28);
          uVar16 = (undefined4)
                   ((ulong)*(undefined8 *)
                            (
                            ___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
                            + 0x28) >> 0x20);
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000820);
          if (iVar6 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar7,puVar3,puVar2,&stack0x00000820,&stack0x00000960);
          }
        }
      }
      else {
        lVar7 = 
        ___ZN2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb421a1d17b4962e3E
        ;
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
          iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000007f0);
          if (iVar6 != 0) {
            lVar8 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                              (&stack0x00000690);
            uVar12 = (undefined2)((ulong)(lVar8 + 0x124) >> 0x10);
            uVar14 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar7,puVar3,puVar2,&stack0x000007f0,&stack0x00000960);
          }
        }
      }
      lVar7 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                        (&stack0x00000690);
      uVar13 = *(undefined4 *)(lVar7 + 0x124);
      cVar5 = '\0';
      uVar11 = 1;
      puVar4 = (undefined1 *)CONCAT44(uVar14,1);
      FUN_1002bf550(&stack0x000006a0);
      FUN_1002beeb4(&stack0x00000700);
      goto LAB_1002924ac;
    }
    _memcpy(&stack0x00000960,&stack0x000006a0,0x120);
    __ZN2h25proto7streams4recv4Recv13recv_trailers17h9dea2624b177a411E
              (&stack0x000007f0,in_stack_000007c0,&stack0x00000960,&stack0x00000690);
  }
  FUN_1002a7860(&stack0x00000820,in_stack_000007c0,in_stack_000007c8,&stack0x00000690,unaff_x21 + 2,
                &stack0x000007f0);
LAB_1002924ac:
  __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
            (unaff_x21 + 2,&stack0x000006a0,in_stack_00000020 != 1000000000);
  *(undefined8 *)(unaff_x25 + 0x2c) = in_stack_00000840;
  *(undefined8 *)(unaff_x25 + 0x24) = in_x9;
  if ((((in_stack_00000018 & 0x100000000) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar9 = FUN_107c05e34(), (uVar9 & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x20);
  if ((((unaff_x22 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar9 = FUN_107c05e34(), (uVar9 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  if (cVar5 == '\x03') {
    *in_stack_00000038 = 0x200000000;
  }
  else {
    *(ulong *)((long)in_stack_00000038 + 0x1c) = CONCAT44((int)in_x9,uVar16);
    *(ulong *)((long)in_stack_00000038 + 0x14) = CONCAT44(uVar15,(int)((ulong)puVar4 >> 0x20));
    uVar10 = *(undefined8 *)(unaff_x25 + 0x24);
    in_stack_00000038[5] = *(undefined8 *)(unaff_x25 + 0x2c);
    in_stack_00000038[4] = uVar10;
    *(char *)(in_stack_00000038 + 1) = cVar5;
    *(undefined1 *)((long)in_stack_00000038 + 9) = uVar11;
    *(undefined2 *)((long)in_stack_00000038 + 10) = uVar12;
    *(ulong *)((long)in_stack_00000038 + 0xc) = CONCAT44((int)puVar4,uVar13);
    *(undefined4 *)in_stack_00000038 = 1;
  }
  return;
}

