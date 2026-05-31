
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10089f7ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  char *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined1 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  
  do {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00001820);
    if ((*unaff_x22 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      lVar7 = *unaff_x20;
      in_stack_00000098 = *(undefined1 **)(lVar7 + 0x20);
      in_stack_000000a0 = *(undefined8 *)(lVar7 + 0x28);
      in_stack_00000090 = 2;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000090);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar7,puVar2,puVar1,&stack0x00000090,&stack0x00001820);
      }
    }
    while( true ) {
      unaff_x23 = unaff_x23 + 0x10;
      if (unaff_x28 == unaff_x23) {
        if (in_stack_00000018 != 0) {
          _free();
        }
        if (in_stack_00000028 != 0) {
          lVar7 = 0;
          do {
            in_stack_00000088 = ((undefined8 *)(in_stack_00000038 + lVar7))[1];
            in_stack_00000080 = *(undefined8 *)(in_stack_00000038 + lVar7);
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
               (((bRam000000010b6279a8 - 1 < 2 ||
                 ((bRam000000010b6279a8 != 0 &&
                  (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                                     ), cVar4 != '\0')))) &&
                (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                                   ), (uVar6 & 1) != 0)))) {
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                         ,&stack0x00001820);
              lVar3 = 
              ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
              ;
              if ((*unaff_x22 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E))
              {
                in_stack_00000098 =
                     *(undefined1 **)
                      (
                      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                      + 0x20);
                in_stack_000000a0 =
                     *(undefined8 *)
                      (
                      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                      + 0x28);
                in_stack_00000090 = 2;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000090);
                if (iVar5 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar3,puVar2,puVar1,&stack0x00000090,&stack0x00001820);
                }
              }
            }
            else if ((*unaff_x22 == '\0') &&
                    (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_00000060 =
                   *(undefined8 *)
                    (
                    ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                    + 0x20);
              in_stack_00000068 =
                   *(undefined8 *)
                    (
                    ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                    + 0x28);
              in_stack_00000058 = 2;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000058);
              if (iVar5 != 0) {
                in_stack_000000a8 =
                     ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor16shutdown_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34c69538d9ad1ea5E
                     + 0x30;
                *(char **)(unaff_x29 + -0x70) = s_timed_out_waiting_for_thread_to_s_108acacf5;
                *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00002450;
                in_stack_00000098 = &stack0x00002440;
                in_stack_00000090 = 1;
                in_stack_000000a0 = 1;
                (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00001820);
              }
            }
            lVar7 = lVar7 + 0x10;
          } while (in_stack_00000028 * 0x10 - lVar7 != 0);
        }
        if (in_stack_00000020 != 0) {
          _free(in_stack_00000038);
        }
        if (in_stack_00000008 != 0) {
          _free(in_stack_00000000);
        }
        *in_stack_00000030 = 1;
        *(undefined1 *)(unaff_x27 + 0x110) = 1;
        return 0;
      }
      in_stack_00000088 = ((undefined8 *)(unaff_x24 + unaff_x23))[1];
      in_stack_00000080 = *(undefined8 *)(unaff_x24 + unaff_x23);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((*(byte *)(unaff_x20 + 2) - 1 < 2 ||
           ((*(byte *)(unaff_x20 + 2) != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE(),
            cVar4 != '\0')))))) &&
         (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x20),
         (uVar6 & 1) != 0)) break;
      if ((*unaff_x22 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000048 = *(undefined8 *)(*unaff_x20 + 0x20);
        in_stack_00000050 = *(undefined8 *)(*unaff_x20 + 0x28);
        in_stack_00000040 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000040);
        if (iVar5 != 0) {
          in_stack_000000a8 = *unaff_x20 + 0x30;
          *(char **)(unaff_x29 + -0x70) = s__failed_to_submit_Shutdown_to_th_108acab6d;
          *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00002450;
          in_stack_00000098 = &stack0x00002440;
          in_stack_00000090 = 1;
          in_stack_000000a0 = 1;
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00001820);
        }
      }
    }
    param_1 = *unaff_x20;
  } while( true );
}

