
void FUN_1006d9330(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 unaff_x23;
  undefined8 *puVar7;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000e8;
  ulong uStack00000000000000f0;
  undefined8 *puStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  
  *(char **)(unaff_x29 + -0x60) = s__failed_to_revoke_auth_tokens_du_108ac35f8;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x88;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  puStack00000000000000f8 = (undefined8 *)(unaff_x29 + -0x70);
  uStack00000000000000f0 = 1;
  uStack0000000000000100 = 1;
  uStack0000000000000008 = unaff_x25[1];
  uStack0000000000000000 = *unaff_x25;
  uStack0000000000000010 = in_stack_000000e8;
  uStack0000000000000108 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar6 = in_stack_000000a0;
  if (((ulong)in_stack_000000a0 & 3) == 1) {
    puVar6 = (undefined8 *)((long)in_stack_000000a0 + -1);
    unaff_x23 = *puVar6;
    puVar7 = *(undefined8 **)((long)in_stack_000000a0 + 7);
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(unaff_x23);
    }
    if (puVar7[1] != 0) {
      _free(unaff_x23);
    }
    _free(puVar6);
  }
  uVar2 = (undefined1)unaff_x23;
  lVar4 = *(long *)(unaff_x19 + 8);
  __ZN11codex_login4auth7manager17logout_all_stores17h14f79545a6fcd247E
            (&stack0x000000f0,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
             *(undefined1 *)(lVar4 + 0x201));
  if ((uStack00000000000000f0 & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x120) = uStack00000000000000f0._1_1_;
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 8);
    *(undefined1 *)(unaff_x19 + 0xc48) = 0;
    cVar1 = FUN_1006de4f8(unaff_x19 + 0x128);
    if (cVar1 == '\x02') {
      *unaff_x20 = 2;
      uVar2 = 4;
      goto LAB_1006d948c;
    }
    if ((*(char *)(unaff_x19 + 0xc48) == '\x03') && (*(char *)(unaff_x19 + 0xc40) == '\x03')) {
      FUN_100e5e3e0(unaff_x19 + 0x140);
    }
    uVar5 = 0;
    lVar4 = *(long *)(unaff_x19 + 0x10);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x120);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    uVar5 = 1;
    puVar6 = puStack00000000000000f8;
  }
  if (lVar4 != -0x7fffffffffffffff) {
    FUN_100e0c53c();
  }
  *unaff_x20 = uVar5;
  unaff_x20[1] = uVar2;
  uVar2 = 1;
  *(undefined8 **)(unaff_x20 + 8) = puVar6;
LAB_1006d948c:
  *(undefined1 *)(unaff_x19 + 0x118) = uVar2;
  return;
}

