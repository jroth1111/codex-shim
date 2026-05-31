
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

void FUN_100b8c2f8(void)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 *unaff_x23;
  long lVar11;
  undefined8 unaff_x25;
  ulong *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar12 [16];
  undefined1 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  long in_stack_00003180;
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
  long in_stack_0000d700;
  undefined8 in_stack_0000d708;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000dc20,s_remote_app_server_at_____closed_d_108ad128d,&stack0x00009350);
  lVar3 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(6,&stack0x0000da40);
  if (in_stack_0000d700 != 0) {
    _free(in_stack_0000d708);
  }
  if ((short)in_stack_000031a0 != 0x12) {
    (**(code **)(in_stack_00003180 + 0x20))(&stack0x00003198,in_stack_00003188,in_stack_00003190);
  }
  uVar6 = *unaff_x26;
  if (uVar6 != 7) {
    if ((uVar6 != 6) && ((*(byte *)(unaff_x19 + 0x703) & 1) != 0)) {
      if ((((*(byte *)(unaff_x19 + 0x704) & 1) != 0) && ((uVar6 & 3) != 0)) &&
         ((uVar6 != 4 || (*(short *)(unaff_x19 + 0x6d0) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0x6b0) + 0x20))
                  (unaff_x19 + 0x6c8,*(undefined8 *)(unaff_x19 + 0x6b8),
                   *(undefined8 *)(unaff_x19 + 0x6c0));
      }
      *(undefined1 *)(unaff_x19 + 0x704) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x703) = 0;
  }
  *(undefined2 *)(unaff_x19 + 0x703) = 0;
  *(undefined1 *)(unaff_x19 + 0x708) = 1;
  FUN_100d75b24();
  FUN_100de8a5c(unaff_x19 + 0x638);
  if (lVar3 == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x5d8);
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
    *(long *)(unaff_x19 + 0x640) = in_stack_00003180;
    *(undefined8 *)(unaff_x19 + 0x658) = in_stack_00003198;
    *(undefined8 *)(unaff_x19 + 0x650) = in_stack_00003190;
    *(undefined8 *)(unaff_x19 + 0x6e0) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x6e8) = *(undefined8 *)(unaff_x19 + 0x5e0);
    *(undefined8 *)(unaff_x19 + 0x6f0) = *(undefined8 *)(unaff_x19 + 0x5e8);
    *(undefined1 *)(unaff_x19 + 0x7f0) = 0;
    lVar11 = unaff_x19 + 0x638;
    auVar12 = func_0x000100b8e2a4(lVar11,in_stack_00000088);
    lVar3 = auVar12._8_8_;
    if ((auVar12._0_8_ & 1) == 0) {
      if (*(char *)(unaff_x19 + 0x7f0) == '\x03') {
        if ((*(long *)(unaff_x19 + 0x7b0) != 6) &&
           ((*(long *)(unaff_x19 + 0x7b0) != 4 || (*(short *)(unaff_x19 + 0x7d8) != 0x12)))) {
          (**(code **)(*(long *)(unaff_x19 + 0x7b8) + 0x20))
                    (unaff_x19 + 2000,*(undefined8 *)(unaff_x19 + 0x7c0),
                     *(undefined8 *)(unaff_x19 + 0x7c8));
        }
        *(undefined1 *)(unaff_x19 + 0x7f1) = 0;
        lVar11 = unaff_x19 + 0x6f8;
LAB_100b8cb0c:
        FUN_100e3d46c(lVar11);
      }
      else if (*(char *)(unaff_x19 + 0x7f0) == '\0') goto LAB_100b8cb0c;
      if (lVar3 != 0) goto LAB_100b8cb18;
      lVar11 = *(long *)(unaff_x19 + 0x618);
      lVar3 = *(long *)(unaff_x19 + 0x620);
      in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x628);
      if ((*(ulong *)(unaff_x19 + 0x600) & 0x7fffffffffffffff) != 0) goto LAB_100b8cb5c;
      goto LAB_100b8cb64;
    }
    *unaff_x23 = 5;
LAB_100b88c54:
    *in_stack_00000070 = 3;
    *unaff_x28 = 0x8000000000000001;
    uVar5 = 6;
LAB_100b88c6c:
    *(undefined1 *)(unaff_x19 + 0x180) = uVar5;
    return;
  }
LAB_100b8cb18:
  uVar9 = *(undefined8 *)(unaff_x19 + 0x620);
  FUN_100e28b64(uVar9,*(undefined8 *)(unaff_x19 + 0x628));
  if (*(long *)(unaff_x19 + 0x618) != 0) {
    _free(uVar9);
  }
  if ((*(ulong *)(unaff_x19 + 0x600) & 0x7fffffffffffffff) == 0) {
    *(undefined1 *)(unaff_x19 + 0x631) = 0;
    *(undefined1 *)(unaff_x19 + 0x630) = 1;
    lVar11 = -0x8000000000000000;
  }
  else {
    lVar11 = -0x8000000000000000;
LAB_100b8cb5c:
    _free(*(undefined8 *)(unaff_x19 + 0x608));
LAB_100b8cb64:
    *(undefined1 *)(unaff_x19 + 0x631) = 0;
    *(undefined1 *)(unaff_x19 + 0x630) = 1;
    if (lVar11 == -0x7fffffffffffffff) goto LAB_100b88c54;
  }
  FUN_100d243e4();
  if (lVar11 == -0x8000000000000000) {
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
    lVar11 = *(long *)(unaff_x19 + 0xc0);
    lVar7 = *(long *)(unaff_x19 + 200);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar11 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
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
  FUN_100fd27f8(*(undefined8 *)(unaff_x19 + 0x3a0));
  func_0x000100fd3504();
  *(undefined1 *)(unaff_x19 + 0xc01) = 0;
  *(undefined1 *)(unaff_x19 + 0xc03) = 0;
  _memcpy(&stack0x0000bc90,unaff_x19 + 0x3c0,0x188);
  do {
    lVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar3;
  } while (bVar1);
  _memcpy(&stack0x00009360,&stack0x0000bc90,0x1a0);
  puVar4 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar4[9] == '\x01') {
LAB_100b8cd84:
    _memcpy(&stack0x000069a0,&stack0x00009350,0x8e0);
    if (0x7ffffffffffffffe < *puVar4) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100b8d32c;
    }
    *puVar4 = *puVar4 + 1;
    uVar6 = puVar4[1];
    _memcpy(&stack0x00000640,&stack0x00009350,0x8e0);
    if (uVar6 != 2) {
      if ((uVar6 & 1) == 0) {
        plVar10 = (long *)puVar4[2];
        lVar3 = *plVar10;
        *plVar10 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar10 = (long *)plVar10[0x5e], plVar10 == (long *)0x0 ||
            (lVar3 = *plVar10, *plVar10 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0x8d0);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0x8d4);
          _posix_memalign(&stack0x0000de00,0x80,0x980);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x980);
        }
      }
      else {
        plVar10 = (long *)puVar4[2];
        lVar3 = *plVar10;
        *plVar10 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar10 = (long *)plVar10[0x4a], plVar10 == (long *)0x0 ||
            (lVar3 = *plVar10, *plVar10 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0x8d0);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0x8d4);
          _posix_memalign(&stack0x0000de00,0x80,0x980);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x980);
        }
      }
      goto LAB_100b8d32c;
    }
    FUN_100d833e4(&stack0x00000650);
    *puVar4 = *puVar4 - 1;
  }
  else {
    if ((char)puVar4[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar4,&DAT_100c35d48);
      *(undefined1 *)(puVar4 + 9) = 1;
      goto LAB_100b8cd84;
    }
    FUN_100d833e4(&stack0x00009360);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00003180,&UNK_10b230bb0);
LAB_100b8d32c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b8d330);
  (*pcVar2)();
}

