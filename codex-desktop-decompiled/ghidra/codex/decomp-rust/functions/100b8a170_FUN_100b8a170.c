
/* WARNING: Removing unreachable block (ram,0x000100b8a938) */
/* WARNING: Removing unreachable block (ram,0x000100b8a954) */
/* WARNING: Removing unreachable block (ram,0x000100b8a970) */
/* WARNING: Removing unreachable block (ram,0x000100b8ae80) */
/* WARNING: Removing unreachable block (ram,0x000100b8aeb8) */
/* WARNING: Removing unreachable block (ram,0x000100b8aee0) */
/* WARNING: Removing unreachable block (ram,0x000100b8aee4) */
/* WARNING: Removing unreachable block (ram,0x000100b8afa8) */
/* WARNING: Removing unreachable block (ram,0x000100b8afe0) */
/* WARNING: Removing unreachable block (ram,0x000100b8b008) */
/* WARNING: Removing unreachable block (ram,0x000100b8b00c) */
/* WARNING: Removing unreachable block (ram,0x000100b8b018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8a170(void)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  long unaff_x19;
  char *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x23;
  long lVar11;
  undefined8 unaff_x25;
  ulong *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar12 [16];
  undefined1 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00003180;
  undefined8 in_stack_00003188;
  undefined8 in_stack_00003190;
  undefined8 in_stack_00003198;
  undefined8 in_stack_000031a0;
  undefined8 in_stack_000031a8;
  undefined4 in_stack_000031b0;
  undefined4 in_stack_000031b4;
  undefined8 in_stack_000031b8;
  undefined8 in_stack_000031c0;
  undefined8 in_stack_000031c8;
  undefined8 in_stack_000031d0;
  undefined8 in_stack_000031d8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003180,s_remote_app_server_at_____closed_d_108ad1227,&stack0x0000dc20);
  *(undefined8 *)(unaff_x27 + 0x10) = in_stack_00003190;
  lVar3 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x25,&stack0x00009350);
  uVar6 = *unaff_x26;
  if (uVar6 != 7) {
    if ((uVar6 != 6) && ((*(byte *)(unaff_x19 + 0xf53) & 1) != 0)) {
      if ((((*(byte *)(unaff_x19 + 0xf54) & 1) != 0) && ((uVar6 & 3) != 0)) &&
         ((uVar6 != 4 || (*(short *)(unaff_x19 + 0xf20) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0xf00) + 0x20))
                  (unaff_x19 + 0xf18,*(undefined8 *)(unaff_x19 + 0xf08),
                   *(undefined8 *)(unaff_x19 + 0xf10));
      }
      *(undefined1 *)(unaff_x19 + 0xf54) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0xf53) = 0;
  }
  *(undefined2 *)(unaff_x19 + 0xf53) = 0;
  *(undefined1 *)(unaff_x19 + 0xf58) = 1;
  FUN_100d75b24();
  FUN_100de8a5c(unaff_x19 + 0xe88);
  if (lVar3 == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0xe28);
    __ZN23codex_app_server_client6remote45jsonrpc_notification_from_client_notification17hb7a79451c9a48ad0E
              (&stack0x00003180);
    *(undefined8 *)(unaff_x19 + 0xe88) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0xeb8) = in_stack_000031a8;
    *(undefined8 *)(unaff_x19 + 0xeb0) = in_stack_000031a0;
    *(undefined8 *)(unaff_x19 + 0xec8) = in_stack_000031b8;
    *(ulong *)(unaff_x19 + 0xec0) = CONCAT44(in_stack_000031b4,in_stack_000031b0);
    *(undefined8 *)(unaff_x19 + 0xed8) = in_stack_000031c8;
    *(undefined8 *)(unaff_x19 + 0xed0) = in_stack_000031c0;
    *(undefined8 *)(unaff_x19 + 0xee8) = in_stack_000031d8;
    *(undefined8 *)(unaff_x19 + 0xee0) = in_stack_000031d0;
    *(undefined8 *)(unaff_x19 + 0xe98) = in_stack_00003188;
    *(undefined8 *)(unaff_x19 + 0xe90) = in_stack_00003180;
    *(undefined8 *)(unaff_x19 + 0xea8) = in_stack_00003198;
    *(undefined8 *)(unaff_x19 + 0xea0) = in_stack_00003190;
    *(undefined8 *)(unaff_x19 + 0xf30) = uVar8;
    *(undefined8 *)(unaff_x19 + 0xf38) = *(undefined8 *)(unaff_x19 + 0xe30);
    *(undefined8 *)(unaff_x19 + 0xf40) = *(undefined8 *)(unaff_x19 + 0xe38);
    *unaff_x20 = '\0';
    lVar11 = unaff_x19 + 0xe88;
    auVar12 = FUN_100b8de90(lVar11,in_stack_00000088);
    lVar3 = auVar12._8_8_;
    if ((auVar12._0_8_ & 1) == 0) {
      if (*unaff_x20 == '\x03') {
        if ((*(long *)(unaff_x19 + 0x1000) != 6) &&
           ((*(long *)(unaff_x19 + 0x1000) != 4 || (*(short *)(unaff_x19 + 0x1028) != 0x12)))) {
          (**(code **)(*(long *)(unaff_x19 + 0x1008) + 0x20))
                    (unaff_x19 + 0x1020,*(undefined8 *)(unaff_x19 + 0x1010),
                     *(undefined8 *)(unaff_x19 + 0x1018));
        }
        unaff_x20[1] = '\0';
        lVar11 = unaff_x19 + 0xf48;
LAB_100b8aaac:
        FUN_100e3d46c(lVar11);
      }
      else if (*unaff_x20 == '\0') goto LAB_100b8aaac;
      if (lVar3 != 0) goto LAB_100b8aab8;
      lVar11 = *(long *)(unaff_x19 + 0xe68);
      lVar3 = *(long *)(unaff_x19 + 0xe70);
      in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0xe78);
      if ((*(ulong *)(unaff_x19 + 0xe50) & 0x7fffffffffffffff) != 0) goto LAB_100b8aafc;
      goto LAB_100b8ab04;
    }
    *unaff_x23 = 5;
LAB_100b87f58:
    *in_stack_00000070 = 3;
    *unaff_x28 = 0x8000000000000001;
    uVar5 = 4;
LAB_100b88c6c:
    *(undefined1 *)(unaff_x19 + 0x180) = uVar5;
    return;
  }
LAB_100b8aab8:
  uVar8 = *(undefined8 *)(unaff_x19 + 0xe70);
  FUN_100e28b64(uVar8,*(undefined8 *)(unaff_x19 + 0xe78));
  if (*(long *)(unaff_x19 + 0xe68) != 0) {
    _free(uVar8);
  }
  if ((*(ulong *)(unaff_x19 + 0xe50) & 0x7fffffffffffffff) == 0) {
    *(undefined1 *)(unaff_x19 + 0xe81) = 0;
    *(undefined1 *)(unaff_x19 + 0xe80) = 1;
    lVar11 = -0x8000000000000000;
  }
  else {
    lVar11 = -0x8000000000000000;
LAB_100b8aafc:
    _free(*(undefined8 *)(unaff_x19 + 0xe58));
LAB_100b8ab04:
    *(undefined1 *)(unaff_x19 + 0xe81) = 0;
    *(undefined1 *)(unaff_x19 + 0xe80) = 1;
    if (lVar11 == -0x7fffffffffffffff) goto LAB_100b87f58;
  }
  FUN_100d243e4();
  if (lVar11 == -0x8000000000000000) {
    FUN_100d4014c(unaff_x19 + 0x938);
    FUN_100e0df24(unaff_x19 + 0x7e8);
    unaff_x20[0x411] = '\0';
    unaff_x20[0x412] = '\0';
    if (*(long *)(unaff_x19 + 2000) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x7d8));
    }
    unaff_x20[0x413] = '\0';
    *in_stack_00000070 = 1;
    FUN_100d9901c(in_stack_00000078);
    *(undefined1 *)(unaff_x19 + 0x184) = 0;
    *(undefined1 *)(unaff_x19 + 0x185) = 0;
    *(undefined1 *)(unaff_x19 + 0x181) = 0;
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    lVar11 = *(long *)(unaff_x19 + 0xc0);
    lVar7 = *(long *)(unaff_x19 + 200);
    if (lVar7 != 0) {
      puVar10 = (undefined8 *)(lVar11 + 8);
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      _free(lVar11);
    }
    *(undefined2 *)(unaff_x19 + 0x186) = 0;
    *(undefined1 *)(unaff_x19 + 0x188) = 0;
    *unaff_x28 = 0x8000000000000000;
    unaff_x28[1] = lVar3;
    unaff_x28[2] = 0;
    unaff_x28[3] = in_stack_00000088;
    unaff_x28[4] = unaff_x25;
    unaff_x28[5] = unaff_x26;
    uVar5 = 1;
    unaff_x28[6] = unaff_x27;
    goto LAB_100b88c6c;
  }
  FUN_100fd27f8(*(undefined8 *)(unaff_x19 + 0x7c8));
  func_0x000100fd3504();
  unaff_x20[0x411] = '\0';
  unaff_x20[0x413] = '\0';
  _memcpy(&stack0x0000bc90,unaff_x19 + 0x7e8,0x5b0);
  do {
    lVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar3;
  } while (bVar1);
  _memcpy(&stack0x00009360,&stack0x0000bc90,0x5c8);
  puVar4 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar4[9] == '\x01') {
LAB_100b8ad14:
    _memcpy(&stack0x000069a0,&stack0x00009350,0xd08);
    if (0x7ffffffffffffffe < *puVar4) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100b8d32c;
    }
    *puVar4 = *puVar4 + 1;
    uVar6 = puVar4[1];
    _memcpy(&stack0x00000640,&stack0x00009350,0xd08);
    if (uVar6 != 2) {
      if ((uVar6 & 1) == 0) {
        plVar9 = (long *)puVar4[2];
        lVar3 = *plVar9;
        *plVar9 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar9 = (long *)plVar9[0x5e], plVar9 == (long *)0x0 ||
            (lVar3 = *plVar9, *plVar9 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0xcf8);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0xcfc);
          _posix_memalign(&stack0x0000de00,0x80,0xd80);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xd80);
        }
      }
      else {
        plVar9 = (long *)puVar4[2];
        lVar3 = *plVar9;
        *plVar9 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar9 = (long *)plVar9[0x4a], plVar9 == (long *)0x0 ||
            (lVar3 = *plVar9, *plVar9 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0xcf8);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0xcfc);
          _posix_memalign(&stack0x0000de00,0x80,0xd80);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xd80);
        }
      }
      goto LAB_100b8d32c;
    }
    FUN_100da7f70(&stack0x00000650);
    *puVar4 = *puVar4 - 1;
  }
  else {
    if ((char)puVar4[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar4,&DAT_100c35d48);
      *(undefined1 *)(puVar4 + 9) = 1;
      goto LAB_100b8ad14;
    }
    FUN_100da7f70(&stack0x00009360);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00003180,&UNK_10b230bb0);
LAB_100b8d32c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b8d330);
  (*pcVar2)();
}

