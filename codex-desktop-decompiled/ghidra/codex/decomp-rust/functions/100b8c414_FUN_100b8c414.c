
/* WARNING: Removing unreachable block (ram,0x000100b8c99c) */
/* WARNING: Removing unreachable block (ram,0x000100b8c9b8) */
/* WARNING: Removing unreachable block (ram,0x000100b8c9d4) */
/* WARNING: Removing unreachable block (ram,0x000100b8cef0) */
/* WARNING: Removing unreachable block (ram,0x000100b8cf24) */
/* WARNING: Removing unreachable block (ram,0x000100b8cf4c) */
/* WARNING: Removing unreachable block (ram,0x000100b8cf50) */
/* WARNING: Removing unreachable block (ram,0x000100b8d018) */
/* WARNING: Removing unreachable block (ram,0x000100b8d04c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d074) */
/* WARNING: Removing unreachable block (ram,0x000100b8d078) */
/* WARNING: Removing unreachable block (ram,0x000100b8d084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c414(void)

{
  bool bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined1 uVar7;
  long lVar8;
  long unaff_x19;
  long lVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 *unaff_x23;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar14 [16];
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
  long *in_stack_0000da40;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000dc20,s_remote_app_server_at______sent_i_108ad133a,&stack0x00009350);
  uVar11 = *(undefined8 *)(unaff_x21 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x1e8);
  uVar10 = *(undefined8 *)(unaff_x21 + 0x1f0);
  puVar4 = (undefined8 *)_malloc(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_100b8d32c;
  }
  *puVar4 = uVar11;
  puVar4[1] = uVar2;
  puVar4[2] = uVar10;
  lVar5 = func_0x000106029c30(0x28,puVar4,&UNK_10b209118);
  if (*in_stack_0000da40 == 1) {
    FUN_100de21d4(in_stack_0000da40 + 1);
  }
  else if ((*in_stack_0000da40 == 0) && (in_stack_0000da40[2] != 0)) {
    _free(in_stack_0000da40[1]);
  }
  _free(in_stack_0000da40);
  *(undefined2 *)(unaff_x19 + 0x701) = 0;
  *(undefined2 *)(unaff_x19 + 0x706) = 0;
  (**(code **)(*(long *)(unaff_x19 + 0x880) + 0x20))
            (unaff_x19 + 0x898,*(undefined8 *)(unaff_x19 + 0x888),*(undefined8 *)(unaff_x19 + 0x890)
            );
  lVar8 = *unaff_x26;
  if (lVar8 < 6) {
    if ((lVar8 != 0) && (lVar8 != 4)) {
LAB_100b8c960:
      (**(code **)(*(long *)(unaff_x19 + 0x6b0) + 0x20))
                (unaff_x19 + 0x6c8,*(undefined8 *)(unaff_x19 + 0x6b8),
                 *(undefined8 *)(unaff_x19 + 0x6c0));
    }
    *(undefined1 *)(unaff_x19 + 0x704) = 0;
LAB_100b8c97c:
    *(undefined1 *)(unaff_x19 + 0x703) = 0;
  }
  else {
    if (lVar8 == 6) goto LAB_100b8c97c;
    if (lVar8 != 7) goto LAB_100b8c960;
  }
  *(undefined2 *)(unaff_x19 + 0x703) = 0;
  *(undefined1 *)(unaff_x19 + 0x708) = 1;
  FUN_100d75b24();
  FUN_100de8a5c(unaff_x19 + 0x638);
  if (lVar5 == 0) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0x5d8);
    __ZN23codex_app_server_client6remote45jsonrpc_notification_from_client_notification17hb7a79451c9a48ad0E
              (&stack0x00003180);
    *(undefined8 *)(unaff_x19 + 0x638) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x668) = in_stack_000031a8;
    *(undefined8 *)(unaff_x19 + 0x660) = in_stack_000031a0;
    *(undefined8 *)(unaff_x19 + 0x678) = in_stack_000031b8;
    *(ulong *)(unaff_x19 + 0x670) = CONCAT44(in_stack_000031b4,in_stack_000031b0);
    *(undefined8 *)(unaff_x19 + 0x688) = in_stack_000031c8;
    *(undefined8 *)(unaff_x19 + 0x680) = in_stack_000031c0;
    *(undefined8 *)(unaff_x19 + 0x698) = in_stack_000031d8;
    *(undefined8 *)(unaff_x19 + 0x690) = in_stack_000031d0;
    *(undefined8 *)(unaff_x19 + 0x648) = in_stack_00003188;
    *(undefined8 *)(unaff_x19 + 0x640) = in_stack_00003180;
    *(undefined8 *)(unaff_x19 + 0x658) = in_stack_00003198;
    *(undefined8 *)(unaff_x19 + 0x650) = in_stack_00003190;
    *(undefined8 *)(unaff_x19 + 0x6e0) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x6e8) = *(undefined8 *)(unaff_x19 + 0x5e0);
    *(undefined8 *)(unaff_x19 + 0x6f0) = *(undefined8 *)(unaff_x19 + 0x5e8);
    *(undefined1 *)(unaff_x19 + 0x7f0) = 0;
    lVar8 = unaff_x19 + 0x638;
    auVar14 = func_0x000100b8e2a4(lVar8,in_stack_00000088);
    lVar5 = auVar14._8_8_;
    if ((auVar14._0_8_ & 1) == 0) {
      if (*(char *)(unaff_x19 + 0x7f0) == '\x03') {
        if ((*(long *)(unaff_x19 + 0x7b0) != 6) &&
           ((*(long *)(unaff_x19 + 0x7b0) != 4 || (*(short *)(unaff_x19 + 0x7d8) != 0x12)))) {
          (**(code **)(*(long *)(unaff_x19 + 0x7b8) + 0x20))
                    (unaff_x19 + 2000,*(undefined8 *)(unaff_x19 + 0x7c0),
                     *(undefined8 *)(unaff_x19 + 0x7c8));
        }
        *(undefined1 *)(unaff_x19 + 0x7f1) = 0;
        lVar8 = unaff_x19 + 0x6f8;
LAB_100b8cb0c:
        FUN_100e3d46c(lVar8);
      }
      else if (*(char *)(unaff_x19 + 0x7f0) == '\0') goto LAB_100b8cb0c;
      if (lVar5 != 0) goto LAB_100b8cb18;
      lVar8 = *(long *)(unaff_x19 + 0x618);
      lVar5 = *(long *)(unaff_x19 + 0x620);
      in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x628);
      if ((*(ulong *)(unaff_x19 + 0x600) & 0x7fffffffffffffff) != 0) goto LAB_100b8cb5c;
      goto LAB_100b8cb64;
    }
    *unaff_x23 = 5;
LAB_100b88c54:
    *in_stack_00000070 = 3;
    *unaff_x28 = 0x8000000000000001;
    uVar7 = 6;
LAB_100b88c6c:
    *(undefined1 *)(unaff_x19 + 0x180) = uVar7;
    return;
  }
LAB_100b8cb18:
  uVar11 = *(undefined8 *)(unaff_x19 + 0x620);
  FUN_100e28b64(uVar11,*(undefined8 *)(unaff_x19 + 0x628));
  if (*(long *)(unaff_x19 + 0x618) != 0) {
    _free(uVar11);
  }
  if ((*(ulong *)(unaff_x19 + 0x600) & 0x7fffffffffffffff) == 0) {
    *(undefined1 *)(unaff_x19 + 0x631) = 0;
    *(undefined1 *)(unaff_x19 + 0x630) = 1;
    lVar8 = -0x8000000000000000;
  }
  else {
    lVar8 = -0x8000000000000000;
LAB_100b8cb5c:
    _free(*(undefined8 *)(unaff_x19 + 0x608));
LAB_100b8cb64:
    *(undefined1 *)(unaff_x19 + 0x631) = 0;
    *(undefined1 *)(unaff_x19 + 0x630) = 1;
    if (lVar8 == -0x7fffffffffffffff) goto LAB_100b88c54;
  }
  FUN_100d243e4();
  if (lVar8 == -0x8000000000000000) {
    FUN_100e57728(unaff_x19 + 0x3c0);
    FUN_100e0df24(unaff_x19 + 0x3f0);
    *(undefined2 *)(unaff_x19 + 0xc01) = 0;
    if (*(long *)(unaff_x19 + 0x3a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x3b0));
    }
    *(undefined1 *)(unaff_x19 + 0xc03) = 0;
    *in_stack_00000070 = 1;
    FUN_100d55468(in_stack_00000078);
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    *(undefined1 *)(unaff_x19 + 0x183) = 0;
    *(undefined1 *)(unaff_x19 + 0x181) = 0;
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    lVar8 = *(long *)(unaff_x19 + 0xc0);
    lVar9 = *(long *)(unaff_x19 + 200);
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      _free(lVar8);
    }
    *(undefined2 *)(unaff_x19 + 0x186) = 0;
    *(undefined1 *)(unaff_x19 + 0x188) = 0;
    *unaff_x28 = 0x8000000000000000;
    unaff_x28[1] = lVar5;
    unaff_x28[2] = 0;
    unaff_x28[3] = in_stack_00000088;
    unaff_x28[4] = unaff_x25;
    unaff_x28[5] = unaff_x26;
    uVar7 = 1;
    unaff_x28[6] = unaff_x27;
    goto LAB_100b88c6c;
  }
  FUN_100fd27f8(*(undefined8 *)(unaff_x19 + 0x3a0));
  func_0x000100fd3504();
  *(undefined1 *)(unaff_x19 + 0xc01) = 0;
  *(undefined1 *)(unaff_x19 + 0xc03) = 0;
  _memcpy(&stack0x0000bc90,unaff_x19 + 0x3c0,0x188);
  do {
    lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar5;
  } while (bVar1);
  _memcpy(&stack0x00009360,&stack0x0000bc90,0x1a0);
  puVar6 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar6[9] == '\x01') {
LAB_100b8cd84:
    _memcpy(&stack0x000069a0,&stack0x00009350,0x8e0);
    if (0x7ffffffffffffffe < *puVar6) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100b8d32c;
    }
    *puVar6 = *puVar6 + 1;
    uVar12 = puVar6[1];
    _memcpy(&stack0x00000640,&stack0x00009350,0x8e0);
    if (uVar12 != 2) {
      if ((uVar12 & 1) == 0) {
        plVar13 = (long *)puVar6[2];
        lVar5 = *plVar13;
        *plVar13 = lVar5 + 1;
        if ((-1 < lVar5) &&
           ((plVar13 = (long *)plVar13[0x5e], plVar13 == (long *)0x0 ||
            (lVar5 = *plVar13, *plVar13 = lVar5 + 1, -1 < lVar5)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0x8d0);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0x8d4);
          _posix_memalign(&stack0x0000de00,0x80,0x980);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x980);
        }
      }
      else {
        plVar13 = (long *)puVar6[2];
        lVar5 = *plVar13;
        *plVar13 = lVar5 + 1;
        if ((-1 < lVar5) &&
           ((plVar13 = (long *)plVar13[0x4a], plVar13 == (long *)0x0 ||
            (lVar5 = *plVar13, *plVar13 = lVar5 + 1, -1 < lVar5)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0x8d0);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0x8d4);
          _posix_memalign(&stack0x0000de00,0x80,0x980);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x980);
        }
      }
      goto LAB_100b8d32c;
    }
    FUN_100d833e4(&stack0x00000650);
    *puVar6 = *puVar6 - 1;
  }
  else {
    if ((char)puVar6[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar6,&DAT_100c35d48);
      *(undefined1 *)(puVar6 + 9) = 1;
      goto LAB_100b8cd84;
    }
    FUN_100d833e4(&stack0x00009360);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00003180,&UNK_10b230bb0);
LAB_100b8d32c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8d330);
  (*pcVar3)();
}

