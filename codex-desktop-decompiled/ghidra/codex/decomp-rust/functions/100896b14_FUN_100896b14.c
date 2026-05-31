
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100896b14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long lVar13;
  undefined8 uVar14;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [12];
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_00000688;
  long in_stack_000006c0;
  long in_stack_000006c8;
  long in_stack_000006d8;
  
  do {
    *(char **)(unaff_x29 + -0x70) = s_could_not_notify_callback_for_du_108ac9ee2;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xe0;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000004c8);
    lVar12 = 
    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender26cancel_requests_for_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf0a38b275a16196cE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000488);
      if (iVar7 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar2,puVar1,&stack0x00000488,&stack0x000004c8);
      }
    }
LAB_100896d8c:
    plVar9 = unaff_x23;
    if (in_stack_000006c0 == -0x8000000000000000) {
      FUN_100de6690(unaff_x20 + 8);
    }
    else {
      if (in_stack_000006d8 != -0x7ffffffffffffffb) {
        FUN_100de6690(unaff_x20 + 0x18);
      }
      if (in_stack_000006c0 != 0) {
        _free(in_stack_000006c8);
      }
    }
LAB_100896dd0:
    func_0x000100e45ab8(&stack0x000004e8);
    unaff_x23 = unaff_x22;
    if (plVar9 == unaff_x22) {
LAB_100896e10:
      lVar12 = ((ulong)((long)unaff_x22 - (long)unaff_x23) >> 6) * 0x6db6db6db6db6db7 + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100e40940(unaff_x23);
        unaff_x23 = unaff_x23 + 0x38;
      }
      if (in_stack_00000018 != 0) {
        _free(in_stack_00000020);
      }
      lVar12 = *(long *)(unaff_x28 + 0x98);
      if (lVar12 != -0x8000000000000000) {
        if (*(long *)(unaff_x28 + 0xb0) != -0x7ffffffffffffffb) {
          FUN_100de6690();
        }
        if (lVar12 != 0) {
          _free(*(undefined8 *)(unaff_x28 + 0xa0));
        }
      }
      *(undefined1 *)(unaff_x28 + 0x178) = 1;
      return in_stack_00000028 == 0;
    }
    unaff_x23 = plVar9 + 0x38;
    lVar12 = *plVar9;
    _memcpy(&stack0x00000248,plVar9 + 1,0x1b8);
    if (lVar12 == -0x7ffffffffffffff7) goto LAB_100896e10;
    _memcpy(in_stack_00000058,&stack0x00000248,0x1b8);
    lVar13 = *(long *)(unaff_x28 + 0x80);
    auVar19 = func_0x000106032954(0);
    *(undefined1 (*) [12])(unaff_x29 + -0xe0) = auVar19;
    func_0x000106032878(&stack0x000006c0,unaff_x29 + -0xe0,&stack0x00000400);
    uVar10 = lVar12 + 0x8000000000000001U & lVar12 >> 0x3f;
    if ((long)uVar10 < 5) {
      if ((long)uVar10 < 2) {
        plVar9 = in_stack_00000030;
        if (uVar10 != 0) {
          plVar9 = in_stack_00000000;
        }
      }
      else {
        plVar9 = in_stack_00000048;
        if ((uVar10 != 2) && (plVar9 = in_stack_00000038, uVar10 != 3)) {
          plVar9 = in_stack_00000008;
        }
      }
    }
    else if ((long)uVar10 < 8) {
      plVar9 = in_stack_00000050;
      if (uVar10 - 6 < 2) {
        plVar9 = in_stack_00000058;
      }
    }
    else {
      plVar9 = in_stack_00000040;
      if (uVar10 != 8) {
        plVar9 = in_stack_00000010;
      }
    }
    if (*plVar9 == -0x8000000000000000) {
      in_stack_000006d8 = plVar9[2];
    }
    else {
      lVar12 = plVar9[1];
      in_stack_000006d8 = plVar9[2];
      if (in_stack_000006d8 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = _malloc(in_stack_000006d8);
        if (lVar8 == 0) {
          func_0x0001087c9084(1,in_stack_000006d8);
          goto LAB_1008971d0;
        }
      }
      _memcpy(lVar8,lVar12,in_stack_000006d8);
    }
    FUN_101725e54(*(undefined8 *)(lVar13 + 0xc0),&stack0x000006c0);
    unaff_x28 = in_stack_00000060;
    if (*(long *)(in_stack_00000060 + 0x98) == -0x8000000000000000) {
      plVar9 = unaff_x23;
      if (in_stack_00000688 != (long *)0x0) {
        uVar10 = in_stack_00000688[6];
        do {
          uVar11 = uVar10;
          if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_10089690c;
          uVar10 = in_stack_00000688[6];
        } while (uVar10 != uVar11);
        in_stack_00000688[6] = uVar11 | 2;
LAB_10089690c:
        if ((uVar11 & 5) == 1) {
          (**(code **)(in_stack_00000688[4] + 0x10))(in_stack_00000688[5]);
        }
        lVar12 = *in_stack_00000688;
        *in_stack_00000688 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5b4db60789287d2eE(&stack0x00000688);
        }
      }
      goto LAB_100896dd0;
    }
    if (*(long *)(in_stack_00000060 + 0xb0) == -0x7ffffffffffffffb) {
      *(undefined8 *)(unaff_x29 + -0xe0) = 0x8000000000000005;
    }
    else {
      FUN_10112c3fc(unaff_x29 + -0xe0,in_stack_00000060 + 0xb0);
    }
    uVar14 = *(undefined8 *)(in_stack_00000060 + 0xa0);
    in_stack_000006c0 = *(long *)(in_stack_00000060 + 0xa8);
    if (in_stack_000006c0 == 0) {
      in_stack_000006c8 = 1;
    }
    else {
      in_stack_000006c8 = _malloc(in_stack_000006c0);
      if (in_stack_000006c8 == 0) {
        func_0x0001087c9084(1,in_stack_000006c0);
LAB_1008971d0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008971d4);
        (*pcVar5)();
      }
    }
    _memcpy(in_stack_000006c8,uVar14,in_stack_000006c0);
    uVar16 = unaff_x21[0x7b];
    uVar15 = unaff_x21[0x7a];
    uVar14 = unaff_x21[0x7c];
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21[0x7d];
    *(undefined8 *)(unaff_x20 + 0x28) = uVar14;
    uVar14 = unaff_x21[0x7e];
    uVar18 = unaff_x21[0x81];
    uVar17 = unaff_x21[0x80];
    *(undefined8 *)(unaff_x20 + 0x40) = unaff_x21[0x7f];
    *(undefined8 *)(unaff_x20 + 0x38) = uVar14;
    *(undefined8 *)(unaff_x20 + 0x50) = uVar18;
    *(undefined8 *)(unaff_x20 + 0x48) = uVar17;
    *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar16;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
    FUN_100fd5730(&stack0x00000400,in_stack_00000688,&stack0x000006c0);
    unaff_x21[0x61] = unaff_x21[9];
    unaff_x21[0x60] = unaff_x21[8];
    unaff_x21[99] = unaff_x21[0xb];
    unaff_x21[0x62] = unaff_x21[10];
    unaff_x21[0x59] = unaff_x21[1];
    unaff_x21[0x58] = *unaff_x21;
    unaff_x21[0x5b] = unaff_x21[3];
    unaff_x21[0x5a] = unaff_x21[2];
    unaff_x21[0x5d] = unaff_x21[5];
    unaff_x21[0x5c] = unaff_x21[4];
    unaff_x21[0x5f] = unaff_x21[7];
    unaff_x21[0x5e] = unaff_x21[6];
    if ((3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) ||
       (((1 < bRam000000010b627600 - 1 &&
         ((bRam000000010b627600 == 0 ||
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server16outgoing_message21OutgoingMessageSender26cancel_requests_for_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf0a38b275a16196cE
                             ), cVar6 == '\0')))) ||
        (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender26cancel_requests_for_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf0a38b275a16196cE
                            ),
        param_1 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender26cancel_requests_for_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf0a38b275a16196cE
        , (uVar10 & 1) == 0)))) {
      lVar12 = 
      ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender26cancel_requests_for_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf0a38b275a16196cE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar14 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender26cancel_requests_for_thread28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf0a38b275a16196cE
                  + 0x28);
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000470);
        if (iVar7 != 0) {
          uVar15 = unaff_x21[0xe];
          *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x21[0xf];
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar15;
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar14;
          lVar13 = *(long *)(lVar12 + 0x60);
          uVar15 = *(undefined8 *)(lVar12 + 0x68);
          lVar8 = *(long *)(lVar12 + 0x50);
          uVar16 = *(undefined8 *)(lVar12 + 0x58);
          uVar14 = 1;
          if (lVar8 == 0) {
            uVar14 = 2;
          }
          uVar3 = *(undefined4 *)(lVar12 + 8);
          uVar4 = *(undefined4 *)(lVar12 + 0xc);
          *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000488;
          *(undefined1 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
          uVar17 = 1;
          if (lVar13 == 0) {
            uVar17 = 2;
          }
          *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar14;
          *(long *)(unaff_x29 + -0xd8) = lVar8;
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar16;
          *(undefined8 *)(unaff_x29 + -200) = uVar17;
          *(long *)(unaff_x29 + -0xc0) = lVar13;
          *(undefined8 *)(unaff_x29 + -0xb8) = uVar15;
          *(undefined4 *)(unaff_x29 + -0x98) = uVar3;
          *(undefined4 *)(unaff_x29 + -0x94) = uVar4;
          (**(code **)(puVar1 + 0x20))(puVar2,unaff_x29 + -0xe0);
        }
      }
      goto LAB_100896d8c;
    }
    *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000468;
    *(undefined **)(unaff_x29 + -0xd8) = &DAT_100c63c08;
    *(long *)(unaff_x29 + -0xd0) = unaff_x20;
    *(undefined **)(unaff_x29 + -200) = &DAT_10118848c;
  } while( true );
}

