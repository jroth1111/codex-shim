
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_100a44c44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long unaff_x19;
  long *plVar11;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar12;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  *(char **)(unaff_x29 + -0xb0) = s_error_shutting_down_IO__108ac8b54;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x98;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000002f0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar12 = *unaff_x21;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000550);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar12,puVar2,puVar1,&stack0x00000550,&stack0x000002f0);
    }
  }
  uVar12 = *(undefined8 *)(unaff_x29 + -0x78);
  puVar9 = (undefined8 *)FUN_100f410dc(0x18,8);
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 2) = 10;
  uVar12 = FUN_100f15038(uVar12);
  FUN_100d3911c(puVar9);
  *puVar9 = uVar12;
  puVar9[1] = &UNK_10b212e38;
  *(undefined8 **)(unaff_x29 + -0xf0) = puVar9;
  cVar3 = *(char *)(unaff_x19 + 0x498);
  *(undefined1 *)(unaff_x19 + 0x498) = 3;
  if (cVar3 != '\x03') {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x478);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x490);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x488);
    *(undefined8 *)(unaff_x24 + 0x78) = *(undefined8 *)(unaff_x19 + 0x480);
    *(undefined8 *)(unaff_x24 + 0x70) = uVar12;
    *(undefined8 *)(unaff_x24 + 0x88) = uVar14;
    *(undefined8 *)(unaff_x24 + 0x80) = uVar13;
    *(undefined4 *)(unaff_x24 + 0x91) = *(undefined4 *)(unaff_x19 + 0x499);
    puVar9 = (undefined8 *)_malloc(0x18);
    if (puVar9 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *puVar9 = 0;
      *(undefined1 *)(puVar9 + 2) = 8;
      puVar5 = (undefined8 *)_malloc(0x10);
      if (puVar5 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x10);
      }
      else {
        puVar5[1] = 0x726f727265206e6f;
        *puVar5 = 0x697463656e6e6f63;
        puVar6 = (undefined8 *)_malloc(0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0x10;
          puVar6[1] = puVar5;
          puVar6[2] = 0x10;
          *puVar9 = puVar6;
          puVar9[1] = &UNK_10b209118;
          __ZN14rama_http_core4body8incoming6Sender10send_error17h3f7db1c00cf8f35eE
                    (&stack0x000002f0,puVar9);
          LORelease();
          if (unaff_x29 == 0xb1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9f476c5001a43c0cE
                      ((ulong)&stack0x000002f0 | 8);
          }
          FUN_100d1c36c(&stack0x00000300);
          FUN_100cdc388(&stack0x000002f0);
          goto LAB_100a444c8;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      }
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100a451dc);
    (*pcVar10)();
  }
LAB_100a444c8:
  lVar7 = FUN_1006c4b64(unaff_x19 + 0x448,&stack0x000002f0);
  if (*unaff_x20 != 2) {
    FUN_100d0f108();
  }
  if (lVar7 != 0) {
    *(long *)(unaff_x29 + -0xb0) = lVar7;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b6360f0 - 1 < 2 ||
         ((bRam000000010b6360f0 != 0 &&
          (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
                             ), cVar3 != '\0')))) &&
        (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
                           ),
        lVar7 = 
        ___ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
        , (uVar8 & 1) != 0)))) {
      in_stack_00000040 =
           ___ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
           + 0x30;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xb0;
      *(undefined **)(unaff_x29 + -0x68) =
           &
           __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
      ;
      *(char **)(unaff_x29 + -0x98) = s__http_upgrade_proxy_client_conn_f_108acec63;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x70;
      in_stack_00000030 = &stack0x000002c0;
      in_stack_00000028 = 1;
      in_stack_00000038 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,&stack0x00000028);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000550);
        if (iVar4 != 0) {
          *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00000280;
          *(undefined **)(unaff_x29 + -0xe8) = &DAT_1061c2098;
          uVar12 = *unaff_x25;
          *(undefined8 *)(unaff_x24 + 0xa8) = unaff_x25[1];
          *(undefined8 *)(unaff_x24 + 0xa0) = uVar12;
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000002f0);
        }
      }
    }
    else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
            (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000010 =
           *(undefined8 *)
            (
            ___ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
            + 0x20);
      in_stack_00000018 =
           *(undefined8 *)
            (
            ___ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
            + 0x28);
      in_stack_00000008 = 4;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000008);
      if (iVar4 != 0) {
        in_stack_00000040 =
             ___ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector12handshake_h128__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h26c4dd61bd9ebda1E
             + 0x30;
        *(char **)(unaff_x29 + -0x70) = s__http_upgrade_proxy_client_conn_f_108acec63;
        *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000280;
        *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
        in_stack_00000030 = (undefined1 *)(unaff_x29 + -0x98);
        in_stack_00000028 = 1;
        in_stack_00000038 = 1;
        *(undefined8 **)(unaff_x29 + -0xf0) = &stack0x00000028;
        *(undefined1 *)(unaff_x29 + -0xe8) = 1;
        *(undefined8 *)(unaff_x24 + 0xa8) = in_stack_00000010;
        *(undefined8 *)(unaff_x24 + 0xa0) = in_stack_00000008;
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000002f0);
      }
    }
    plVar11 = *(long **)(unaff_x29 + -0xb0);
    lVar7 = *plVar11;
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)plVar11[1];
      pcVar10 = (code *)*puVar9;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(lVar7);
      }
      if (puVar9[1] != 0) {
        _free(lVar7);
      }
    }
    _free(plVar11);
  }
  *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
  return 0;
}

