
undefined8 FUN_1006c37b8(undefined8 param_1)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *unaff_x23;
  long unaff_x29;
  undefined1 in_wzr;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puStack0000000000000088;
  undefined *puStack0000000000000090;
  char *pcStack0000000000000098;
  undefined1 *puStack00000000000000a0;
  undefined1 in_stack_000000a8;
  undefined8 in_stack_000000c8;
  
  puStack00000000000000a0 = &stack0x000000a8;
  pcStack0000000000000098 = s_stream_received_RST_STREAM__108abf2a2;
  puStack0000000000000088 = (undefined1 *)&stack0x00000098;
  puStack0000000000000090 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0x90) = 1;
  *(undefined1 ***)(unaff_x29 + -0x88) = &stack0x00000088;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  in_stack_000000a8 = 2;
  plVar3 = (long *)_malloc(0x18);
  if (plVar3 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_1006c3b78:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c3b7c);
    (*pcVar2)();
  }
  *plVar3 = 0;
  *(undefined1 *)(plVar3 + 2) = 9;
  uVar6 = *unaff_x23;
  uVar8 = unaff_x23[3];
  uVar7 = unaff_x23[2];
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23[1];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000c8;
  pcStack0000000000000098 = (char *)plVar3;
  puVar4 = (undefined8 *)_malloc(0x28);
  if (puVar4 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
    goto LAB_1006c3b78;
  }
  uVar6 = *unaff_x23;
  uVar8 = unaff_x23[3];
  uVar7 = unaff_x23[2];
  puVar4[1] = unaff_x23[1];
  *puVar4 = uVar6;
  puVar4[3] = uVar8;
  puVar4[2] = uVar7;
  puVar4[4] = in_stack_000000c8;
  *plVar3 = (long)puVar4;
  plVar3[1] = (long)&UNK_10b238a78;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  if (lVar5 == 0) {
    lVar5 = *plVar3;
    if (lVar5 == 0) goto LAB_1006c36c8;
    puVar4 = (undefined8 *)plVar3[1];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(lVar5);
    }
  }
  else {
    *(long *)(unaff_x29 + -0xb8) = lVar5;
    *(long **)(unaff_x29 + -0x90) = plVar3;
    if (*(char *)(lVar5 + 0x50) == '\0') {
      LOAcquire();
      cVar1 = *(char *)(lVar5 + 0x18);
      *(char *)(lVar5 + 0x18) = '\x01';
      LORelease();
      if (cVar1 != '\0') goto LAB_1006c3694;
      if (*(long *)(lVar5 + 0x10) != 0) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb18d9,0x20,&UNK_10b223f68);
        goto LAB_1006c3b78;
      }
      *(long **)(lVar5 + 0x10) = plVar3;
      *(undefined1 *)(lVar5 + 0x18) = in_wzr;
      if (*(char *)(lVar5 + 0x50) == '\0') {
LAB_1006c382c:
        FUN_100e6757c(unaff_x29 + -0xb8);
        return 0;
      }
      LOAcquire();
      cVar1 = *(char *)(lVar5 + 0x18);
      *(char *)(lVar5 + 0x18) = '\x01';
      LORelease();
      if (cVar1 != '\0') goto LAB_1006c382c;
      plVar3 = *(long **)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined1 *)(lVar5 + 0x18) = in_wzr;
      FUN_100e6757c(unaff_x29 + -0xb8);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
    }
    else {
LAB_1006c3694:
      FUN_100e6757c(unaff_x29 + -0xb8);
    }
    lVar5 = *plVar3;
    if (lVar5 == 0) goto LAB_1006c36c8;
    puVar4 = (undefined8 *)plVar3[1];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(lVar5);
    }
  }
  if (puVar4[1] != 0) {
    _free(lVar5);
  }
LAB_1006c36c8:
  _free(plVar3);
  return 0;
}

